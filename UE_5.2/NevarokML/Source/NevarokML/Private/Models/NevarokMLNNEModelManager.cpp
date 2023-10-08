/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Models/NevarokMLNNEModelManager.h"
#include "Spaces/NevarokMLSpace.h"
#include "NNECoreRuntimeCPU.h"
#include "NNECore.h"

const FString NNE_RUNTIME_ORT_CPU = "NNERuntimeORTCpu";

FNevarokMLNNEModelManager& FNevarokMLNNEModelManager::GetInstance()
{
    static FNevarokMLNNEModelManager instance;
    return instance;
}

bool FNevarokMLNNEModelManager::ContainsModel(const UNNEModelData* modelData) const
{
    return _models.Contains(modelData);
}

TSharedPtr<UE::NNECore::IModelCPU> FNevarokMLNNEModelManager::GetModel(const UNNEModelData* modelData) const
{
    return _models.FindRef(modelData);
}

void FNevarokMLNNEModelManager::AddModel(const UNNEModelData* modelData,
                                         const TSharedPtr<UE::NNECore::IModelCPU>& model)
{
    _models.Add(modelData, model);
}

bool FNevarokMLNNEModelManager::IsValid(TSharedPtr<UE::NNECore::IModelCPU> model, const UNevarokMLSpace* obsSpace)
{
    if (!model.IsValid())
    {
        return false;
    }

    const auto descs = model->GetInputTensorDescs();

    if (descs.Num() != 1)
    {
        return false;
    }

    const auto shapes = obsSpace->GetNNEShapes();

    if (!shapes[0].IsCompatibleWith(descs[0].GetShape()))
    {
        return false;
    }

    return true;
}

TSharedPtr<UE::NNECore::IModelCPU> FNevarokMLNNEModelManager::LoadModel(UNNEModelData* modelData,
                                                                        const UNevarokMLSpace* obsSpace)
{
    if (!modelData)
    {
        return nullptr;
    }

    TSharedPtr<UE::NNECore::IModelCPU> model;

    if (ContainsModel(modelData))
    {
        model = GetModel(modelData);
        return IsValid(model, obsSpace) ? model : nullptr;
    }

    model = CreateModelCPU(modelData);

    if (!IsValid(model, obsSpace))
    {
        return nullptr;
    }

    if (model->SetInputTensorShapes(obsSpace->GetNNEShapes()) != 0)
    {
        return nullptr;
    }

    AddModel(modelData, model);

    return model;
}

TSharedPtr<UE::NNECore::IModelCPU> FNevarokMLNNEModelManager::CreateModelCPU(UNNEModelData* modelData) const
{
    const TWeakInterfacePtr<INNERuntimeCPU> runtime = UE::NNECore::GetRuntime<INNERuntimeCPU>(NNE_RUNTIME_ORT_CPU);
    TUniquePtr<UE::NNECore::IModelCPU> model = runtime->CreateModelCPU(modelData);

    return TSharedPtr<UE::NNECore::IModelCPU>(model.Release());
}

TWeakInterfacePtr<INNERuntimeCPU> FNevarokMLNNEModelManager::GetRuntime(bool& valid) const
{
    using namespace UE::NNECore;

    valid = false;
    TArray<FString> Result;
    const auto runtimes = GetAllRuntimes();

    for (auto i = 0; i < runtimes.Num(); ++i)
    {
        auto runtime = runtimes[i];
        if (!runtime.IsValid())
        {
            continue;
        }

        if (Cast<INNERuntimeCPU>(runtime.Get()))
        {
            valid = true;
            return UE::NNECore::GetRuntime<INNERuntimeCPU>(runtime->GetRuntimeName());
        }
    }
    return nullptr;
}

FNevarokMLNNEModelManager::FNevarokMLNNEModelManager()
{
}

// bool UNNEFunctionLibrary::IsValid(UNNEModelData* modelData)
// {
//     return FNevarokMLNNEModelManager::GetInstance().LoadModel(modelData).IsValid();
// }
