/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Learning/NevarokMLTrainer.h"
#include "Data/NevarokMLDataLibrary.h"
#include "Learning/NevarokMLEnv.h"
#include "Samples/NevarokMLSample.h"
#include "Settings/NevarokMLSettings.h"
#include "Sockets/NevarokMLSocketServer.h"
#include "Spaces/NevarokMLSpace.h"
#include "Utils/NevarokMLJsonUtils.h"
#include "Utils/NevarokMLLogUtils.h"
#include "Utils/NevarokMLRunUtils.h"
#include "Utils/NevarokMLStringUtils.h"
#include "Dom/JsonObject.h"
#include "Misc/Paths.h"

void FNevarokMLTrainerTickFunction::ExecuteTick(float deltaTime,
                                                enum ELevelTick tickType,
                                                ENamedThreads::Type currentThread,
                                                const FGraphEventRef& myCompletionGraphEvent)
{
    Target->TickTrainer(deltaTime);
}

FString FNevarokMLTrainerTickFunction::DiagnosticMessage()
{
    if (Target)
    {
        return Target->GetFullName() + TEXT("[NevarokMLTrainerEndTick]");
    }
    return TEXT("<NULL>[NevarokMLTrainerEndTick]");
}

FName FNevarokMLTrainerTickFunction::DiagnosticContext(bool bDetailed)
{
    return FName(TEXT("NevarokMLTrainerEndTick"));
}

ANevarokMLTrainer::ANevarokMLTrainer()
{
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = true;

    _trainerTickFunction.Target = this;
    _trainerTickFunction.bCanEverTick = true;
    _trainerTickFunction.bTickEvenWhenPaused = false;
    _trainerTickFunction.bStartWithTickEnabled = true;
    _trainerTickFunction.TickGroup = TG_PrePhysics;
}

int ANevarokMLTrainer::GetEnvsCount() const
{
    return FMath::Clamp(_maxEnvsCount, 0, _envs.Num());
}

bool ANevarokMLTrainer::RunBackend()
{
    _procHandle = MakeUnique<FProcHandle>(UNevarokMLRunUtils::RunExe(_backendAddress, _backendPort, _backendVerbose));

    return _procHandle.IsValid();
}

void ANevarokMLTrainer::KillBackend()
{
    if (!_autoKillBackend)
    {
        return;
    }

    if (_procHandle.IsValid())
    {
        FPlatformProcess::TerminateProc(*_procHandle, true);
        _procHandle.Reset();
    }
}

bool ANevarokMLTrainer::ValidateSpaces() const
{
    return _actionSpace != nullptr
        && _observationSpace != nullptr
        && _actionSpace->IsValid()
        && _observationSpace->IsValid();
}

bool ANevarokMLTrainer::ValidateEnvs() const
{
    if (_envs.Num() <= 0)
    {
        return false;
    }

    for (const auto env : _envs)
    {
        if (env == nullptr)
        {
            return false;
        }
    }

    return true;
}

bool ANevarokMLTrainer::ValidateDependency() const
{
    for (const auto trainer : _dependencyTrainers)
    {
        if (trainer == nullptr)
        {
            return false;
        }
    }

    return true;
}

bool ANevarokMLTrainer::ParseData(const TArray<uint8>& data, ENevarokMLData& dataType)
{
    const FString jsonString = UNevarokMLStringUtils::BytesToString(data);
    TSharedPtr<FJsonObject> jsonObject;

    if (UNevarokMLJsonUtils::TryGetJsonObject(jsonString, jsonObject))
    {
        int type;

        if (!jsonObject->TryGetNumberField("type", type))
        {
            return false;
        }
        dataType = static_cast<ENevarokMLData>(type);

        switch (dataType)
        {
        case ENevarokMLData::RESET:
            return HandleReset(jsonObject);
        case ENevarokMLData::ACTION:
            return HandleAction(jsonObject);
        case ENevarokMLData::COMPLETE:
            return HandleComplete(jsonObject);
        case ENevarokMLData::READY:
            return HandleReady(jsonObject);
        case ENevarokMLData::ERROR:
            return HandleError(jsonObject);
        case ENevarokMLData::SAVE:
            return HandleSave(jsonObject);
        default:
            return false;
        }
    }

    return false;
}

bool ANevarokMLTrainer::HandleReset(const TSharedPtr<FJsonObject>& jsonObject)
{
    int index;

    if (!jsonObject->TryGetNumberField("index", index))
    {
        return false;
    }

    auto* env = _envs[index];

    ExecuteResetEnv(index, env);

    _socketServer->Send(
        UNevarokMLDataLibrary::Observation(index, env->GetObservationSample(), env->GetReward(), env->GetDone()));

    return true;
}

bool ANevarokMLTrainer::HandleReady(const TSharedPtr<FJsonObject>& jsonObject)
{
    OnStart();

    _state = ENevarokMLState::READY;

    return true;
}

bool ANevarokMLTrainer::HandleComplete(const TSharedPtr<FJsonObject>& jsonObject)
{
    KillSocket();
    KillBackend();

    _state = ENevarokMLState::COMPLETE;

    OnComplete();

    return false;
}

bool ANevarokMLTrainer::HandleError(const TSharedPtr<FJsonObject>& jsonObject)
{
    UNevarokMLLogUtils::LogError("[ANevarokMLTrainer::ParseData] External error");

    ExecuteInvalid();

    return false;
}


bool ANevarokMLTrainer::HandleSave(const TSharedPtr<FJsonObject>& jsonObject) const
{
    return false;
}

bool ANevarokMLTrainer::HandleAction(const TSharedPtr<FJsonObject>& jsonObject)
{
    int index;

    if (!jsonObject->TryGetNumberField("index", index))
    {
        return false;
    }

    auto* env = _envs[index];

    env->GetActionSample()->FromJson("act_sample", jsonObject);

    ExecuteStepEnv(index, env);

    _socketServer->Send(
        UNevarokMLDataLibrary::Observation(index, env->GetObservationSample(), env->GetReward(), env->GetDone()));

    return true;
}

void ANevarokMLTrainer::ExecuteConstruct()
{
    _tickInterval = FMath::Clamp(_tickInterval, 0.0f, TNumericLimits<float>::Max());
    _tickIntervalTimer = 0.0f;

    _actionSpace = _actionSpace ? _actionSpace : NewObject<UNevarokMLSpace>(this);
    _observationSpace = _observationSpace ? _observationSpace : NewObject<UNevarokMLSpace>(this);

    OnConstruct(_actionSpace, _observationSpace);
}

void ANevarokMLTrainer::ExecuteSimulationInit()
{
    ExecuteConstruct();

    if (!Validate())
    {
        ExecuteInvalid();
        return;
    }

    const auto num = _envs.Num();

    for (auto i = 0; i < num; ++i)
    {
        ExecuteInitEnv(i, _envs[i]);
    }

    for (auto i = 0; i < num; ++i)
    {
        ExecuteResetEnv(i, _envs[i]);
    }

    _state = ENevarokMLState::SIMULATION;
}

bool ANevarokMLTrainer::Validate() const
{
    if (!ValidateSpaces())
    {
        UNevarokMLLogUtils::LogError("[ANevarokMLTrainer::Validate] !ValidateSpaces()");

        return false;
    }

    if (!ValidateDependency())
    {
        UNevarokMLLogUtils::LogError("[ANevarokMLTrainer::Validate] !ValidateDependency()");

        return false;
    }

    if (!ValidateEnvs())
    {
        UNevarokMLLogUtils::LogError("[ANevarokMLTrainer::Validate] !ValidateEnvs()");

        return false;
    }

    return true;
}

void ANevarokMLTrainer::ExecuteInit()
{
    ExecuteConstruct();

    if (!Validate())
    {
        ExecuteInvalid();
        return;
    }

    if (!RunBackend())
    {
        UNevarokMLLogUtils::LogError("[ANevarokMLTrainer::Init] !RunPythonScript()");

        ExecuteInvalid();
        return;
    }

    if (!_socketServer)
    {
        _socketServer = NewObject<UNevarokMLSocketServer>(this);

        if (!_socketServer->Initialize(_backendAddress, _backendPort))
        {
            UNevarokMLLogUtils::LogError("[ANevarokMLTrainer::Init] !SocketServer->Initialize(Address, Port)");

            ExecuteInvalid();
            return;
        }
    }

    _state = ENevarokMLState::LISTEN;

    for (auto i = 0; i < _envs.Num(); ++i)
    {
        ExecuteInitEnv(i, _envs[i]);
    }
}

void ANevarokMLTrainer::KillSocket()
{
    if (_socketServer)
    {
        _socketServer->Close();
        _socketServer->ConditionalBeginDestroy();
        _socketServer = nullptr;
    }
}

void ANevarokMLTrainer::ExecuteInvalid()
{
    KillSocket();
    KillBackend();

    _state = ENevarokMLState::INVALID;
    OnInvalid();
}

void ANevarokMLTrainer::ExecuteInitEnv(int index, ANevarokMLEnv* env)
{
    env->ExecuteInit(_actionSpace, _observationSpace, _simulate);
    OnInit(index, env);
}

void ANevarokMLTrainer::ExecuteStepSkipEnv(int index, ANevarokMLEnv* env)
{
    env->ExecuteStepSkip(_simulate);
    OnStepSkip(index, env);
}

void ANevarokMLTrainer::ExecuteStepEnv(int index, ANevarokMLEnv* env)
{
    env->ExecuteStep(_simulate);
    OnStep(index, env);
}

void ANevarokMLTrainer::ExecuteResetEnv(int index, ANevarokMLEnv* env)
{
    env->ExecuteReset(_simulate);
    OnReset(index, env);
}

void ANevarokMLTrainer::OnStart_Implementation()
{
}

void ANevarokMLTrainer::OnComplete_Implementation()
{
}

void ANevarokMLTrainer::OnInvalid_Implementation()
{
}

void ANevarokMLTrainer::OnConstruct_Implementation(UNevarokMLSpace* actionSpace, UNevarokMLSpace* observationSpace)
{
}

void ANevarokMLTrainer::OnInit_Implementation(int index, ANevarokMLEnv* env)
{
}

void ANevarokMLTrainer::OnReset_Implementation(int index, ANevarokMLEnv* env)
{
}

void ANevarokMLTrainer::OnStep_Implementation(int index, ANevarokMLEnv* env)
{
}

void ANevarokMLTrainer::OnStepSkip_Implementation(int index, ANevarokMLEnv* env)
{
}

void ANevarokMLTrainer::BeginPlay()
{
    Super::BeginPlay();

    if (_simulate)
    {
        ExecuteSimulationInit();
        return;
    }

    ExecuteInit();
}

void ANevarokMLTrainer::TickTrainer(float deltaTime)
{
    TArray<uint8> data;
    const auto envsCount = GetEnvsCount();
    const auto updatesPerTick = FMath::Max(_envUpdatesPerTick, 1);

    auto resetIndexes = TArray<int>();

    switch (_state)
    {
    case ENevarokMLState::LISTEN:
        if (_socketServer->Listen())
        {
            _state = ENevarokMLState::WAIT;
        }
        break;
    case ENevarokMLState::WAIT:
        if (!_socketServer->HasConnections())
        {
            OnInvalid();
            break;
        }

        if (_socketServer->Receive(data))
        {
            ENevarokMLData dataType = ENevarokMLData::NONE;
            ParseData(data, dataType);
        }
        break;
    case ENevarokMLState::READY:
        for (const auto trainer : _dependencyTrainers)
        {
            if (trainer == nullptr)
            {
                continue;;
            }

            switch (trainer->_state)
            {
            case ENevarokMLState::READY:
            case ENevarokMLState::RECEIVE:
                continue;
            default:
                return;
            }
        }

        _state = ENevarokMLState::RECEIVE;

        break;
    case ENevarokMLState::SIMULATION:
        _tickIntervalTimer -= deltaTime;

        if (_tickIntervalTimer > 0.0)
        {
            for (auto i = 0; i < envsCount; i++)
            {
                ExecuteStepSkipEnv(i, _envs[i]);
            }

            break;
        }

        _tickIntervalTimer += _tickInterval;

        for (auto i = 0; i < updatesPerTick; i++)
        {
            resetIndexes.Empty();

            for (auto index = 0; index < envsCount; index++)
            {
                const auto env = _envs[index];

                ExecuteStepEnv(index, env);

                if (env->GetDone())
                {
                    resetIndexes.Add(index);
                }
            }

            for (const auto index : resetIndexes)
            {
                if (const auto env = _envs[index]; env->GetDone())
                {
                    ExecuteResetEnv(index, env);
                }
            }
        }

        break;
    case ENevarokMLState::RECEIVE:
        _tickIntervalTimer -= deltaTime;

        if (_tickIntervalTimer > 0.0)
        {
            for (auto i = 0; i < envsCount; i++)
            {
                ExecuteStepSkipEnv(i, _envs[i]);
            }

            break;
        }

        _tickIntervalTimer += _tickInterval;

        auto updatesCount = _envUpdatesPerTick * envsCount;

        while (_socketServer->Receive(data))
        {
            ENevarokMLData dataType = ENevarokMLData::NONE;

            if (!ParseData(data, dataType))
            {
                break;
            }

            if (dataType == ENevarokMLData::ACTION)
            {
                updatesCount--;
            }
            else if (dataType == ENevarokMLData::COMPLETE)
            {
                break;
            }

            if (_envUpdatesPerTick > 0 && updatesCount <= 0)
            {
                break;
            }
        }

        if (_state == ENevarokMLState::RECEIVE
            && !_socketServer->HasConnections())
        {
            ExecuteInvalid();
        }

        break;
    }
}

void ANevarokMLTrainer::RegisterActorTickFunctions(bool bRegister)
{
    Super::RegisterActorTickFunctions(bRegister);

    if (bRegister)
    {
        _trainerTickFunction.SetTickFunctionEnable(true);
        _trainerTickFunction.RegisterTickFunction(GetLevel());
    }
    else
    {
        _trainerTickFunction.UnRegisterTickFunction();
        _trainerTickFunction.SetTickFunctionEnable(false);
    }
}

void ANevarokMLTrainer::ClearEnvs()
{
    _envs.Empty(0);
}

void ANevarokMLTrainer::CollectChildEnvs()
{
    TArray<AActor*> childActors;

    GetAttachedActors(childActors, true, true);

    for (const auto childActor : childActors)
    {
        if (!childActor->IsA<ANevarokMLEnv>())
        {
            continue;
        }

        _envs.AddUnique(Cast<ANevarokMLEnv>(childActor));
    }

    for (auto i = _envs.Num() - 1; i >= 0 ; --i)
    {
        if(!_envs[i])
        {
            _envs.RemoveAt(i);
        }
    }
}

void ANevarokMLTrainer::BeginDestroy()
{
    KillSocket();
    KillBackend();

    Super::BeginDestroy();
}

bool ANevarokMLTrainer::Learn(const UNevarokMLBaseAlgorithm* algorithm,
                              const ENevarokMLDevice device,
                              int timesteps,
                              int evalEps,
                              int saveFreq,
                              int logInterval,
                              const FFilePath loadModelPath,
                              const FName saveModelName,
                              const bool deterministic,
                              const bool showTensorboard,
                              const bool showReward,
                              const bool showStepDebug,
                              const bool showResetDebug)
{
    auto valid = false;

    timesteps = FMath::Clamp(timesteps, 1, TNumericLimits<int>().Max());
    evalEps = FMath::Clamp(evalEps, 0, TNumericLimits<int>().Max());
    saveFreq = FMath::Clamp(saveFreq, 0, TNumericLimits<int>().Max());

    const auto settings = GetMutableDefault<UNevarokMLSettings>();
    const auto savePath = FPaths::Combine(settings->SaveFolderPath.Path, saveModelName.ToString());
    const auto logPath = FPaths::Combine(settings->LogFolderPath.Path, saveModelName.ToString());

    const auto envCount = GetEnvsCount();

    const auto data = UNevarokMLDataLibrary::ReinforcementLearning(algorithm,
                                                                   device,
                                                                   envCount,
                                                                   timesteps,
                                                                   evalEps,
                                                                   saveFreq,
                                                                   logInterval,
                                                                   logPath,
                                                                   loadModelPath.FilePath,
                                                                   savePath,
                                                                   deterministic,
                                                                   showTensorboard,
                                                                   showReward,
                                                                   showStepDebug,
                                                                   showResetDebug,
                                                                   _actionSpace,
                                                                   _observationSpace,
                                                                   valid);

    if (valid)
    {
        if (!_socketServer->Send(data))
        {
            UNevarokMLLogUtils::LogError("[ANevarokMLTrainer::ReinforcementLearning] !SocketServer->Send(data)");

            ExecuteInvalid();

            return false;
        }

        return true;
    }

    UNevarokMLLogUtils::LogError("[ANevarokMLTrainer::ReinforcementLearning] !valid");

    ExecuteInvalid();

    return false;
}
