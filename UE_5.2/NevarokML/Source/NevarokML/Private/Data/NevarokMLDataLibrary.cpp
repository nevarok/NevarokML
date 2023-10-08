/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Data/NevarokMLDataLibrary.h"
#include "Models/NevarokMLBaseAlgorithm.h"
#include "Samples/NevarokMLSample.h"
#include "Spaces/NevarokMLSpace.h"
#include "Utils/NevarokMLJsonUtils.h"
#include "Utils/NevarokMLLogUtils.h"
#include "Dom/JsonObject.h"

TArray<uint8> UNevarokMLDataLibrary::ReinforcementLearning(const UNevarokMLBaseAlgorithm* algorithm,
                                                           const ENevarokMLDevice device,
                                                           const int envCount,
                                                           const int timesteps,
                                                           const int evalEps,
                                                           const int saveFreq,
                                                           const int logInterval,
                                                           const FString& logPath,
                                                           const FString& loadModelPath,
                                                           const FString& saveModelPath,
                                                           const bool deterministic,
                                                           const bool showTensorboard,
                                                           const bool showReward,
                                                           const bool showStepDebug,
                                                           const bool showResetDebug,
                                                           const UNevarokMLSpace* actSpace,
                                                           const UNevarokMLSpace* obsSpace,
                                                           bool& valid)
{
    valid = false;

    if (algorithm == nullptr)
    {
        UNevarokMLLogUtils::LogError(TEXT("algorithm == nullptr"));
        return TArray<uint8>();
    }

    if (algorithm->GetAlgorithmType() == ENevarokMLAlgorithm::NONE)
    {
        UNevarokMLLogUtils::LogError(TEXT("algorithm->GetAlgorithmType() == EAlgorithm::NONE"));
        return TArray<uint8>();
    }

    if (algorithm->GetPolicyType() == ENevarokMLPolicy::NONE)
    {
        UNevarokMLLogUtils::LogError(TEXT("algorithm->GetPolicyType() == EPolicy::NONE"));
        return TArray<uint8>();
    }

    if (envCount <= 0)
    {
        UNevarokMLLogUtils::LogError(TEXT("envCount <= 0"));
        return TArray<uint8>();
    }

    if (timesteps <= 0)
    {
        UNevarokMLLogUtils::LogError(TEXT("timesteps <= 0"));
        return TArray<uint8>();
    }

    if (actSpace == nullptr)
    {
        UNevarokMLLogUtils::LogError(TEXT("actSpace == nullptr"));
        return TArray<uint8>();
    }

    if (obsSpace == nullptr)
    {
        UNevarokMLLogUtils::LogError(TEXT("obsSpace == nullptr"));
        return TArray<uint8>();
    }

    if (saveModelPath.IsEmpty())
    {
        UNevarokMLLogUtils::LogError(TEXT("saveModelPath.IsEmpty()"));
        return TArray<uint8>();
    }

    const TSharedPtr<FJsonObject> jsonObject = MakeShareable(new FJsonObject);

    jsonObject->SetNumberField("type", static_cast<int>(ENevarokMLData::REINFORCEMENT));
    jsonObject->SetNumberField("alg_type", static_cast<int>(algorithm->GetAlgorithmType()));
    jsonObject->SetNumberField("pol_type", static_cast<int>(algorithm->GetPolicyType()));
    jsonObject->SetNumberField("env_count", envCount);
    jsonObject->SetNumberField("timesteps", timesteps);
    jsonObject->SetNumberField("eval_eps", evalEps);
    jsonObject->SetNumberField("save_freq", saveFreq);
    jsonObject->SetNumberField("log_interval", FMath::Max(logInterval, 1));
    jsonObject->SetStringField("log_path", logPath);
    jsonObject->SetStringField("load_model_path", loadModelPath);
    jsonObject->SetStringField("save_model_path", saveModelPath);
    jsonObject->SetBoolField("pol_det", deterministic);
    jsonObject->SetBoolField("show_tensorboard", showTensorboard);
    jsonObject->SetBoolField("show_reward", showReward);
    jsonObject->SetBoolField("show_step_debug", showStepDebug);
    jsonObject->SetBoolField("show_reset_debug", showResetDebug);

    jsonObject->SetObjectField("act_space", actSpace->ToJson());
    jsonObject->SetObjectField("obs_space", obsSpace->ToJson());
    jsonObject->SetObjectField("model", algorithm->ToJson());

    jsonObject->SetNumberField("device", static_cast<int>(device));

    valid = true;

    return UNevarokMLJsonUtils::ToBytes(jsonObject);
}

TArray<uint8> UNevarokMLDataLibrary::Observation(const int index, const UNevarokMLSample* sample, const float reward,
                                                 const bool done)
{
    const TSharedPtr<FJsonObject> jsonObject = MakeShareable(new FJsonObject);

    jsonObject->SetNumberField("type", static_cast<int>(ENevarokMLData::OBSERVATION));
    jsonObject->SetNumberField("index", index);
    jsonObject->SetNumberField("reward", reward);
    jsonObject->SetBoolField("done", done);
    jsonObject->SetObjectField("info", MakeShared<FJsonObject>());

    sample->ToJson("obs", jsonObject);

    return UNevarokMLJsonUtils::ToBytes(jsonObject);
}
