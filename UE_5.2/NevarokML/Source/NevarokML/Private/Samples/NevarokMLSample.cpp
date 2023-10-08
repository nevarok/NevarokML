/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Samples/NevarokMLSample.h"
#include "Utils/NevarokMLLogUtils.h"

UNevarokMLSample* UNevarokMLSample::Sample(UNevarokMLSpace* owner)
{
    const auto sample = owner ? NewObject<UNevarokMLSample>(owner) : NewObject<UNevarokMLSample>();

    sample->_space = owner;

    switch (owner->GetType())
    {
    case ENevarokMLSpaceEnum::DISCRETE:
        DiscreteSample(sample, owner);
        break;
    case ENevarokMLSpaceEnum::BOX:
        BoxSample(sample, owner);
        break;
    case ENevarokMLSpaceEnum::MULTI_DISCRETE:
        MultiDiscreteSample(sample, owner);
        break;
    case ENevarokMLSpaceEnum::MULTI_BINARY:
        MultiBinarySample(sample, owner);
        break;
    }

    return sample;
}

void UNevarokMLSample::ToJson(const FString& field, const TSharedPtr<FJsonObject>& jsonObject) const
{
    switch (_space->GetType())
    {
    case ENevarokMLSpaceEnum::DISCRETE:
        SerializeDiscrete(field, jsonObject);
        return;
    case ENevarokMLSpaceEnum::BOX:
        SerializeBox(field, jsonObject);
        break;
    case ENevarokMLSpaceEnum::MULTI_DISCRETE:
        SerializeMultiDiscrete(field, jsonObject);
        break;
    case ENevarokMLSpaceEnum::MULTI_BINARY:
        SerializeMultiBinary(field, jsonObject);
        break;
    }
}

void UNevarokMLSample::FromJson(const FString& field, const TSharedPtr<FJsonObject>& jsonObject)
{
    switch (_space->GetType())
    {
    case ENevarokMLSpaceEnum::DISCRETE:
        DeserializeDiscrete(field, jsonObject);
        return;
    case ENevarokMLSpaceEnum::BOX:
        DeserializeBox(field, jsonObject);
        break;
    case ENevarokMLSpaceEnum::MULTI_DISCRETE:
        DeserializeMultiDiscrete(field, jsonObject);
        break;
    case ENevarokMLSpaceEnum::MULTI_BINARY:
        DeserializeMultiBinary(field, jsonObject);
        break;
    }
}

void UNevarokMLSample::DeserializeMultiDiscrete(const FString& field, const TSharedPtr<FJsonObject>& jsonObject)
{
    const auto length = _space->GetShape()[0];

    _longArray.Empty(length);

    auto jsonArray = jsonObject->GetArrayField(field);

    if (jsonArray.Num() != length)
    {
        UNevarokMLLogUtils::LogError("[UNevarokMLSample::DeserializeBox] jsonArray.Num() != length");
        return;
    }

    for (const auto jsonValue : jsonArray)
    {
        _longArray.Add(jsonValue->AsNumber());
    }
}

void UNevarokMLSample::DeserializeMultiBinary(const FString& field, const TSharedPtr<FJsonObject>& jsonObject)
{
    const auto length = _space->GetShape()[0];

    _byteArray.Empty(length);

    auto jsonArray = jsonObject->GetArrayField(field);

    if (jsonArray.Num() != length)
    {
        UNevarokMLLogUtils::LogError("[UNevarokMLSample::DeserializeBox] jsonArray.Num() != length");
        return;
    }

    for (const auto jsonValue : jsonArray)
    {
        _byteArray.Add(jsonValue->AsNumber());
    }
}

void UNevarokMLSample::DeserializeBox(const FString& field, const TSharedPtr<FJsonObject>& jsonObject)
{
    switch (_space->GetShape().Num())
    {
    case 1:
        {
            const auto length = _space->GetShape()[0];

            _floatArray.Empty(length);

            auto jsonArray = jsonObject->GetArrayField(field);

            if (jsonArray.Num() != length)
            {
                UNevarokMLLogUtils::LogError("[UNevarokMLSample::DeserializeBox] jsonArray.Num() != length");
                return;
            }

            for (const auto jsonValue : jsonArray)
            {
                _floatArray.Add(jsonValue->AsNumber());
            }
        }
        return;
    case 2:
        {
            const auto width = _space->GetShape()[0];
            const auto length = _space->GetShape()[1];

            _floatArray.Empty(width * length);

            auto jsonArray = jsonObject->GetArrayField(field);

            if (jsonArray.Num() != width)
            {
                UNevarokMLLogUtils::LogError("[UNevarokMLSample::DeserializeBox] jsonArray.Num() != width");
                return;
            }

            for (auto i = 0; i < width; ++i)
            {
                const TArray<TSharedPtr<FJsonValue>> jsonRowArray = jsonArray[i]->AsArray();

                if (jsonRowArray.Num() != length)
                {
                    UNevarokMLLogUtils::LogError("[UNevarokMLSample::DeserializeBox] jsonRowArray->Num() != length");
                    return;
                }

                for (auto j = 0; j < length; ++j)
                {
                    const auto jsonValue = jsonRowArray[j];
                    _floatArray.Add(jsonValue->AsNumber());
                }
            }
        }
        return;
    default:
        return;
    }
}

void UNevarokMLSample::DeserializeDiscrete(const FString& field, const TSharedPtr<FJsonObject>& jsonObject)
{
    _longArray.Empty(1);
    _longArray.Add(jsonObject->GetIntegerField(field));
}

void UNevarokMLSample::SerializeDiscrete(const FString& field, const TSharedPtr<FJsonObject>& jsonObject) const
{
    jsonObject->SetNumberField(field, _longArray[0]);
}

void UNevarokMLSample::SerializeMultiDiscrete(const FString& field, const TSharedPtr<FJsonObject>& jsonObject) const
{
    TArray<TSharedPtr<FJsonValue>> values;
    for (const float value : _longArray)
    {
        values.Add(MakeShareable(new FJsonValueNumber(value)));
    }
    jsonObject->SetArrayField(field, values);
}

void UNevarokMLSample::SerializeMultiBinary(const FString& field, const TSharedPtr<FJsonObject>& jsonObject) const
{
    TArray<TSharedPtr<FJsonValue>> values;
    for (const float value : _byteArray)
    {
        values.Add(MakeShareable(new FJsonValueNumber(value)));
    }
    jsonObject->SetArrayField(field, values);
}

void UNevarokMLSample::SerializeBox(const FString& field, const TSharedPtr<FJsonObject>& jsonObject) const
{
    switch (_space->GetShape().Num())
    {
    case 1:
        {
            TArray<TSharedPtr<FJsonValue>> values;
            for (const float value : _floatArray)
            {
                values.Add(MakeShareable(new FJsonValueNumber(value)));
            }
            jsonObject->SetArrayField(field, values);
        }
        return;
    case 2:
        {
            TArray<TSharedPtr<FJsonValue>> jsonValues;

            for (int32 i = 0; i < _space->GetShape()[0]; ++i)
            {
                TArray<TSharedPtr<FJsonValue>> jsonRow;

                for (int32 j = 0; j < _space->GetShape()[1]; ++j)
                {
                    const auto value = _floatArray[i * _space->GetShape()[1] + j];
                    jsonRow.Add(MakeShared<FJsonValueNumber>(value));
                }
                jsonValues.Add(MakeShared<FJsonValueArray>(jsonRow));
            }

            jsonObject->SetArrayField(field, jsonValues);
        }
        return;
    default:
        return;
    }
}

void UNevarokMLSample::DiscreteSample(UNevarokMLSample* sample, const UNevarokMLSpace* space)
{
    sample->_longArray.SetNum(space->GetNum());

    sample->_nneBinding.Data = static_cast<void*>(sample->_longArray.GetData());
    sample->_nneBinding.SizeInBytes = NNESize(space);
}

void UNevarokMLSample::BoxSample(UNevarokMLSample* sample, const UNevarokMLSpace* space)
{
    sample->_floatArray.SetNum(space->GetNum());

    sample->_nneBinding.Data = static_cast<void*>(sample->_floatArray.GetData());
    sample->_nneBinding.SizeInBytes = NNESize(space);
}

void UNevarokMLSample::MultiDiscreteSample(UNevarokMLSample* sample, const UNevarokMLSpace* space)
{
    sample->_longArray.SetNum(space->GetNum());

    sample->_nneBinding.Data = static_cast<void*>(sample->_longArray.GetData());
    sample->_nneBinding.SizeInBytes = NNESize(space);
}

void UNevarokMLSample::MultiBinarySample(UNevarokMLSample* sample, const UNevarokMLSpace* space)
{
    sample->_byteArray.SetNum(space->GetNum());

    sample->_nneBinding.Data = static_cast<void*>(sample->_byteArray.GetData());
    sample->_nneBinding.SizeInBytes = NNESize(space);
}

bool UNevarokMLSample::GetDiscreteValue(int64& value)
{
    if (!ValidateDiscreteValue())
    {
        return false;
    }

    value = _longArray[0];

    return true;
}

bool UNevarokMLSample::GetMultiDiscreteValue(const int index, int64& value)
{
    if (!ValidateMultiDiscreteValue(index))
    {
        return false;
    }
    
    value = _longArray[index];

    return true;
}

bool UNevarokMLSample::GetMultiBinaryValue(const int index, int& value)
{
    if (!ValidateMultiBinaryValue(index))
    {
        return false;
    }

    value = _byteArray[index];

    return true;
}

bool UNevarokMLSample::GetBoxValue(FNevarokMLIndex2D index, float& value)
{
    if (!ValidateBoxValue(index))
    {
        return false;
    }

    value = _floatArray[index.DX * _space->GetShape()[1] + index.DY];

    return true;
}

bool UNevarokMLSample::GetContinuousValue(const int index, float& value)
{
    if (!ValidateContinuousValue(index))
    {
        return false;
    }

    value = _floatArray[index];

    return true;
}

bool UNevarokMLSample::SetDiscreteValue(const int64 value)
{
    if (!ValidateDiscreteValue())
    {
        return false;
    }

    _longArray[0] = FMath::Clamp(value, 0, _space->GetN() - 1);

    return true;
}

bool UNevarokMLSample::SetMultiDiscreteValue(const int index, int64 value, const bool multicast)
{
    if (!ValidateMultiDiscreteValue(index))
    {
        return false;
    }

    const auto n = _space->GetNVec()[index];

    value = FMath::Clamp(value, 0, n - 1);

    if (multicast)
    {
        const auto stack = _space->GetStack()[0];
        const auto num = _longArray.Num() / stack;

        if (index >= num)
        {
            UNevarokMLLogUtils::LogError("[UNevarokMLSample::SetMultiDiscreteValue]:multicast i >= num)");
            return false;
        }

        //ln = 2
        //stack = 3
        //stack(0) = [i]
        //stack(1) = [i] + ln * stack(1)
        // [ 1, 2, 3, 1, 2, 3, 1, 2, 3 ]

        for (auto j = 0; j < stack; ++j)
        {
            const auto i = index + num * j;
            _longArray[i] = value;
        }

        return true;
    }

    _longArray[index] = value;

    return true;
}

bool UNevarokMLSample::SetMultiBinaryValue(const int index, int value, const bool multicast)
{
    if (!ValidateMultiBinaryValue(index))
    {
        return false;
    }

    value = FMath::Clamp(value, 0, 1);

    if (multicast)
    {
        const auto stack = _space->GetStack()[0];
        const auto num = _byteArray.Num() / stack;

        if (index >= num)
        {
            UNevarokMLLogUtils::LogError("[UNevarokMLSample::SetMultiBinaryValue]:multicast i >= num)");
            return false;
        }

        //ln = 2
        //stack = 3
        //stack(0) = [i]
        //stack(1) = [i] + ln * stack(1)
        // [ 1, 0, 1, 1, 0, 1, 1, 0, 1 ]

        for (auto j = 0; j < stack; ++j)
        {
            const auto i = index + num * j;
            _byteArray[i] = value;
        }

        return true;
    }

    _byteArray[index] = value;

    return true;
}

bool UNevarokMLSample::SetBoxValue(FNevarokMLIndex2D index, float value, const bool multicast)
{
    if (!ValidateBoxValue(index))
    {
        return false;
    }

    const auto x = index.DX;
    const auto y = index.DY;
    
    const auto i = x * _space->GetShape()[1] + y;
    const auto low = _space->GetLow()[i];
    const auto high = _space->GetHigh()[i];

    value = FMath::Clamp(value, low, high);

    if (multicast)
    {
        const auto sx = _space->GetStack()[0];
        const auto sy = _space->GetStack()[1];

        const auto dx = _space->GetShape()[0] / sx;
        const auto dy = _space->GetShape()[1] / sy;

        if (x >= dx || y >= dy)
        {
            UNevarokMLLogUtils::LogError("[UNevarokMLSample::SetBoxValue]:multicast x >= dx || y >= dy)");
            return false;
        }

        if (sx == sy)
        {
            _floatArray[i] = value;
            return true;
        }

        if (sx > sy)
        {
            for (auto j = 0; j < sx; ++j)
            {
                SetBoxValue(FNevarokMLIndex2D(x + dx * j, y), value, false);
            }

            return true;
        }

        for (auto j = 0; j < sx; ++j)
        {
            SetBoxValue(FNevarokMLIndex2D(x, y + dy * j), value, false);
        }

        return true;
    }

    _floatArray[i] = value;

    return true;
}

bool UNevarokMLSample::SetContinuousValue(const int index, float value, const bool multicast)
{
    if (!ValidateContinuousValue(index))
    {
        return false;
    }

    const auto low = _space->GetLow()[index];
    const auto high = _space->GetHigh()[index];

    value = FMath::Clamp(value, low, high);

    if (multicast)
    {
        const auto stack = _space->GetStack()[0];
        const auto num = _floatArray.Num() / stack;

        if (index >= num)
        {
            UNevarokMLLogUtils::LogError("[UNevarokMLSample::SetContinuousValue]:multicast i >= num)");
            return false;
        }

        for (auto j = 0; j < stack; ++j)
        {
            const auto i = index + num * j;
            _floatArray[i] = value;
        }

        return true;
    }

    _floatArray[index] = value;

    return true;
}

bool UNevarokMLSample::ValidateBoxValue(FNevarokMLIndex2D index) const
{
    if (!_space->IsSpace(ENevarokMLSpaceEnum::BOX))
    {
        UNevarokMLLogUtils::LogError("[UNevarokMLSample::ValidateBoxValue] !Space->IsSpace(ENevarokMLSpace::BOX)");
        return false;
    }

    if (_space->GetShape().Num() != 2)
    {
        UNevarokMLLogUtils::LogError("[UNevarokMLSample::ValidateBoxValue] Space->Shape.Num() != 2");
        return false;
    }

    if (_space->GetStack().Num() != 2)
    {
        UNevarokMLLogUtils::LogError("[UNevarokMLSample::ValidateBoxValue] Space->Stack.Num() != 2");
        return false;
    }

    const auto x = index.DX;
    const auto y = index.DY;
    
    if (x < 0 || x >= _space->GetShape()[0])
    {
        UNevarokMLLogUtils::LogError(FString::Printf(TEXT("[UNevarokMLSample::ValidateBoxValue] x(%d) < 0 || x(%d) >= Space->Shape[0](%d)"), x, x, _space->GetShape()[0]));
        return false;
    }

    if (y < 0 || y >= _space->GetShape()[1])
    {
        UNevarokMLLogUtils::LogError(FString::Printf(TEXT("[UNevarokMLSample::ValidateBoxValue] y(%d) < 0 || y(%d) >= Space->Shape[1](%d)"), y, y, _space->GetShape()[1]));
        return false;
    }

    return true;
}

bool UNevarokMLSample::ValidateDiscreteValue() const
{
    if (!_space->IsSpace(ENevarokMLSpaceEnum::DISCRETE))
    {
        UNevarokMLLogUtils::LogError(
            "[UNevarokMLSample::ValidateDiscreteValue] !Space->IsSpace(ENevarokMLSpace::DISCRETE)");
        return false;
    }

    return true;
}

bool UNevarokMLSample::ValidateMultiDiscreteValue(const int index) const
{
    if (!_space->IsSpace(ENevarokMLSpaceEnum::MULTI_DISCRETE))
    {
        UNevarokMLLogUtils::LogError(
            "[UNevarokMLSample::ValidateMultiDiscreteValue] !Space->IsSpace(ENevarokMLSpace::MULTI_DISCRETE)");
        return false;
    }

    if (index < 0 || index >= _space->GetShape()[0])
    {
        UNevarokMLLogUtils::LogError("[UNevarokMLSample::ValidateMultiDiscreteValue] i < 0 || i >= i >= Space->Shape[0]");
        return false;
    }

    return true;
}

bool UNevarokMLSample::ValidateMultiBinaryValue(const int index) const
{
    if (!_space->IsSpace(ENevarokMLSpaceEnum::MULTI_BINARY))
    {
        UNevarokMLLogUtils::LogError(
            "[UNevarokMLSample::ValidateMultiBinaryValue] !Space->IsSpace(ENevarokMLSpace::MULTI_DISCRETE)");
        return false;
    }

    if (index < 0 || index >= _space->GetShape()[0])
    {
        UNevarokMLLogUtils::LogError("[UNevarokMLSample::ValidateMultiBinaryValue] i < 0 || i >= Space->Shape[0]");
        return false;
    }

    return true;
}

bool UNevarokMLSample::ValidateContinuousValue(const int index) const
{
    if (!_space->IsSpace(ENevarokMLSpaceEnum::BOX))
    {
        UNevarokMLLogUtils::LogError(
            "[UNevarokMLSample::ValidateContinuousValue] !Space->IsSpace(ENevarokMLSpace::BOX)");
        return false;
    }

    if (_space->GetShape().Num() != 1)
    {
        UNevarokMLLogUtils::LogError("[UNevarokMLSample::ValidateContinuousValue] Space->Shape.Num() != 1");
        return false;
    }

    if (_space->GetStack().Num() != 1)
    {
        UNevarokMLLogUtils::LogError("[UNevarokMLSample::ValidateContinuousValue] Space->Stack.Num() != 1");
        return false;
    }

    if (index < 0 || index >= _space->GetShape()[0])
    {
        UNevarokMLLogUtils::LogError("[UNevarokMLSample::ValidateContinuousValue] i >= Space->Shape[0] || i < 0");
        return false;
    }

    return true;
}


void UNevarokMLSample::StackShift()
{
    switch (_space->GetType())
    {
    case ENevarokMLSpaceEnum::DISCRETE:
        return;
    case ENevarokMLSpaceEnum::MULTI_DISCRETE:
        StackShiftMultiDiscrete();
        return;
    case ENevarokMLSpaceEnum::MULTI_BINARY:
        StackShiftMultiBinary();
        return;
    case ENevarokMLSpaceEnum::BOX:
        switch (_space->GetShape().Num())
        {
        case 1:
            StackShiftContinuous();
            return;
        case 2:
            StackShiftBoxDX();
            StackShiftBoxDY();
            return;
        }
        return;
    }
}

void UNevarokMLSample::StackShiftMultiDiscrete()
{
    const auto stack = _space->GetStack()[0];

    if (stack <= 1)
    {
        return;
    }

    const auto shift = _space->GetShape()[0] / stack;
    const auto num = _longArray.Num();
    const auto lastIndex = num - 1;

    for (int32 i = 0; i < shift; ++i)
    {
        const auto value = _longArray[lastIndex];
        _longArray.RemoveAt(lastIndex);
        _longArray.Insert(value, 0);
    }
}

void UNevarokMLSample::StackShiftMultiBinary()
{
    const auto stack = _space->GetStack()[0];

    if (stack <= 1)
    {
        return;
    }

    const auto shift = _space->GetShape()[0] / stack;
    const auto num = _byteArray.Num();
    const auto lastIndex = num - 1;

    for (int32 i = 0; i < shift; ++i)
    {
        const auto value = _byteArray[lastIndex];
        _byteArray.RemoveAt(lastIndex);
        _byteArray.Insert(value, 0);
    }
}

void UNevarokMLSample::StackShiftContinuous()
{
    const auto stack = _space->GetStack()[0];

    if (stack <= 1)
    {
        return;
    }

    const auto shift = _space->GetShape()[0] / stack;
    const auto num = _floatArray.Num();
    const auto lastIndex = num - 1;

    for (int32 i = 0; i < shift; ++i)
    {
        const auto value = _floatArray[lastIndex];
        _floatArray.RemoveAt(lastIndex);
        _floatArray.Insert(value, 0);
    }
}

void UNevarokMLSample::StackShiftBoxDX()
{
    const auto stack = _space->GetStack()[0];

    if (stack <= 1)
    {
        return;
    }

    const auto shift = _space->GetShape()[0] / stack * _space->GetShape()[1];
    const auto num = _floatArray.Num();
    const auto lastIndex = num - 1;

    for (int32 i = 0; i < shift; ++i)
    {
        const auto value = _floatArray[lastIndex];
        _floatArray.RemoveAt(lastIndex);
        _floatArray.Insert(value, 0);
    }
}

void UNevarokMLSample::StackShiftBoxDY()
{
    const auto stack = _space->GetStack()[1];

    if (stack <= 1)
    {
        return;
    }

    const auto dx = _space->GetShape()[0];
    const auto dy = _space->GetShape()[1] / stack;

    //dx = 2
    //dy = 3
    //stack = 3
    //FIndex0 = 0    // 0  = i(0) * dy(3) * stack(3)
    //FIndex1 = 9    // 9  = i(1) * dy(3) * stack(3)
    //LIndex0 = 8    // 8  = (i(0) + 1) * dy(3) * stack(3) - 1
    //LIndex1 = 17   // 17 = (i(1) + 1) * dy(3) * stack(3) - 1

    // [ 1, 2, 3, 1, 2, 3, 1, 2, 3 ],
    // [ 4, 5, 6, 4, 5, 6, 4, 5, 6 ],

    for (int32 i = 0; i < dx; ++i)
    {
        for (int32 j = 0; j < dy; ++j)
        {
            const auto insert = i * dy * stack;
            const auto remove = (i + 1) * dy * stack - 1;

            const auto value = _floatArray[remove];
            _floatArray.RemoveAt(remove);
            _floatArray.Insert(value, insert);
        }
    }
}

uint64 UNevarokMLSample::NNESize(const UNevarokMLSpace* space)
{
    switch (space->GetType())
    {
    case ENevarokMLSpaceEnum::DISCRETE:
        return sizeof(int64);
    case ENevarokMLSpaceEnum::BOX:
        return space->GetNum() * sizeof(float);
    case ENevarokMLSpaceEnum::MULTI_DISCRETE:
        return space->GetNum() * sizeof(int64);
    case ENevarokMLSpaceEnum::MULTI_BINARY:
        return space->GetNum() * sizeof(int8);
    default:
        return 0;
    }
}


void UNevarokMLSample::Clear()
{
    switch (_space->GetType())
    {
    case ENevarokMLSpaceEnum::BOX:
        for (auto i = 0; i < _floatArray.Num(); ++i)
        {
            _floatArray[i] = 0;
        }
        return;
    case ENevarokMLSpaceEnum::MULTI_BINARY:
        for (auto i = 0; i < _byteArray.Num(); ++i)
        {
            _byteArray[i] = 0;
        }
        return;
    case ENevarokMLSpaceEnum::MULTI_DISCRETE:
    case ENevarokMLSpaceEnum::DISCRETE:
        for (auto i = 0; i < _longArray.Num(); ++i)
        {
            _longArray[i] = 0;
        }
        return;
    }
}

FString UNevarokMLSample::GetBoxDebugString(FName name, FNevarokMLIndex2D index, FVector2D limit)
{
    float value;
    GetBoxValue(index, value);
    return FString::Printf(TEXT("[%s][%f][%s][%s]"), *index.ToString(), value, *limit.ToString(), *name.ToString());
}

FString UNevarokMLSample::GetDiscreteDebugString(FName name, int64 limit)
{
    int64 value;
    GetDiscreteValue(value);
    return FString::Printf(TEXT("[%lld][%lld][%s]"), value, limit, *name.ToString());
}

FString UNevarokMLSample::GetMultiDiscreteDebugString(FName name, int index, int64 limit)
{
    int64 value;
    GetMultiDiscreteValue(index, value);
    return FString::Printf(TEXT("[%d][%lld][%lld][%s]"), index, value, limit, *name.ToString());
}

FString UNevarokMLSample::GetMultiBinaryDebugString(FName name, int index, int64 limit)
{
    int value;
    GetMultiBinaryValue(index, value);
    return FString::Printf(TEXT("[%d][%d][%lld][%s]"), index, value, limit, *name.ToString());
}
