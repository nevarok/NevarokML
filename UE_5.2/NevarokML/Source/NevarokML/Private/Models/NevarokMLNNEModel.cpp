/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Models/NevarokMLNNEModel.h"

#include "NNECore.h"
#include "Samples/NevarokMLSample.h"
#include "Models/NevarokMLNNEModelManager.h"
#include "Spaces/NevarokMLSpace.h"
#include "Utils/NevarokMLLogUtils.h"

bool UNevarokMLNNEModel::IsValid() const
{
    if (!_cpuModel.IsValid())
    {
        UNevarokMLLogUtils::LogError("[UNevarokMLNNEModel::IsValid] !_cpuModel.IsValid()");
        return false;
    }

    const auto inputDescs = _cpuModel->GetInputTensorDescs();
    const auto outputDescs = _cpuModel->GetOutputTensorDescs();

    if (inputDescs.Num() < 1)
    {
        UNevarokMLLogUtils::LogError("[UNevarokMLNNEModel::IsValid] inputDescs.Num() < 1");
        return false;
    }

    if (outputDescs.Num() < 1)
    {
        UNevarokMLLogUtils::LogError("[UNevarokMLNNEModel::IsValid] outputDescs.Num() < 1");
        return false;
    }

    const auto actShapes = _actionSample->GetSpace()->GetNNEShapes();
    const auto obsShapes = _observationSample->GetSpace()->GetNNEShapes();

    if (!obsShapes[0].IsCompatibleWith(inputDescs[0].GetShape()))
    {
        UNevarokMLLogUtils::LogError(
            "[UNevarokMLNNEModel::IsValid] !actShapes[0].IsCompatibleWith(inputDescs[0].GetShape())");
        return false;
    }

    if (!actShapes[0].IsCompatibleWith(outputDescs[0].GetShape()))
    {
        UNevarokMLLogUtils::LogError(
            "[UNevarokMLNNEModel::IsValid]!obsShapes[0].IsCompatibleWith(outputDescs[0].GetShape())");
        return false;
    }

    return true;
}

bool UNevarokMLNNEModel::Predict(UNevarokMLNNEModel* model)
{
    if(!model)
    {
        return false;
    }
    
    return model->_cpuModel->RunSync(model->_inputBindings, model->_outputBindings) == 0;
}

UNevarokMLNNEModel* UNevarokMLNNEModel::NNEModel(UObject* owner, UNNEModelData* modelData, UPARAM(ref)UNevarokMLSample* actionSample,
                                                 UPARAM(ref)UNevarokMLSample* observationSample, bool& valid)
{
    if(!modelData || !actionSample || !observationSample)
    {
        valid = false;
        return nullptr;
    }
    
    const auto model = owner ? NewObject<UNevarokMLNNEModel>(owner) : NewObject<UNevarokMLNNEModel>();

    model->_actionSample = actionSample;
    model->_observationSample = observationSample;

    model->_cpuModel = FNevarokMLNNEModelManager::GetInstance().LoadModel(modelData, observationSample->GetSpace());

    if (model->IsValid())
    {
        model->InitBindings(model->_inputBindings, model->_inputTensors, model->_cpuModel->GetInputTensorDescs());
        model->InitBindings(model->_outputBindings, model->_outputTensors, model->_cpuModel->GetOutputTensorDescs());

        if (model->_inputBindings.Num() > 0)
        {
            model->_inputBindings[0] = observationSample->GetNNEBinding();
        }

        if (model->_outputBindings.Num() > 0)
        {
            model->_outputBindings[0] = actionSample->GetNNEBinding();
        }

        valid = true;
        return model;
    }

    valid = false;
    return model;
}

void UNevarokMLNNEModel::InitBindings(TArray<UE::NNECore::FTensorBindingCPU>& bindings,
                                      TArray<FNevarokMLNNETensor>& tensors,
                                      const TConstArrayView<UE::NNECore::FTensorDesc>& descs) const
{
    check(_cpuModel.IsValid())

    using namespace UE::NNECore;

    const auto num = descs.Num();

    tensors.SetNum(num);
    bindings.SetNum(num);

    for (auto i = 1; i < num; i++)
    {
        const auto desc = descs[i];
        const auto shape = desc.GetShape().GetData();

        int32 volume = 1;
        for (auto j = 0; j < shape.Num(); j++)
        {
            if (shape[j] < 1)
            {
                continue;
            }

            volume *= shape[j];
        }

        const auto dataSize = GetTensorDataTypeSizeInBytes(desc.GetDataType()) * volume;
        tensors[i].Data.SetNum(dataSize);

        bindings[i].Data = static_cast<void*>(tensors[i].Data.GetData());
        bindings[i].SizeInBytes = dataSize;
    }
}
