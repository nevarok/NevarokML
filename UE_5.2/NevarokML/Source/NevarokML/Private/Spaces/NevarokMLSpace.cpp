/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Spaces/NevarokMLSpace.h"
#include "Utils/NevarokMLLogUtils.h"
#include "Dom/JsonObject.h"

static const FString NONE = "";
static const FString DISCRETE = "Discrete";
static const FString BOX = "Box";
static const FString MULTI_DISCRETE = "MultiDiscrete";
static const FString MULTI_BINARY = "MultiBinary";

bool UNevarokMLSpace::IsSpace(const ENevarokMLSpaceEnum space) const
{
    return _type == GetName(space);
}

bool UNevarokMLSpace::IsSpace(const FString& name, const ENevarokMLSpaceEnum space)
{
    return name == GetName(space);
}

const FString& UNevarokMLSpace::GetName(const ENevarokMLSpaceEnum space)
{
    switch (space)
    {
    case ENevarokMLSpaceEnum::DISCRETE:
        return DISCRETE;
    case ENevarokMLSpaceEnum::BOX:
        return BOX;
    case ENevarokMLSpaceEnum::MULTI_DISCRETE:
        return MULTI_DISCRETE;
    case ENevarokMLSpaceEnum::MULTI_BINARY:
        return MULTI_BINARY;
    default:
        UNevarokMLLogUtils::LogError("[UNevarokMLSpace::GetName] No key");
        return NONE;
    }
}

ENevarokMLSpaceEnum UNevarokMLSpace::GetType() const
{
    return GetType(_type);
}

ENevarokMLSpaceEnum UNevarokMLSpace::GetType(const FString& name)
{
    if (name == BOX)
    {
        return ENevarokMLSpaceEnum::BOX;
    }
    if (name == MULTI_DISCRETE)
    {
        return ENevarokMLSpaceEnum::MULTI_DISCRETE;
    }
    if (name == MULTI_BINARY)
    {
        return ENevarokMLSpaceEnum::MULTI_BINARY;
    }
    return ENevarokMLSpaceEnum::DISCRETE;
}

bool UNevarokMLSpace::IsValid()
{
    if (IsSpace(ENevarokMLSpaceEnum::DISCRETE))
    {
        if (_n <= 0)
        {
            UNevarokMLLogUtils::LogError(TEXT("[UNevarokMLSpace::Discrete] N <= 0"));
            return false;
        }

        return true;
    }

    if (IsSpace(ENevarokMLSpaceEnum::BOX))
    {
        if (_shape.Num() > 1 && _shape[1] <= 0)
        {
            UNevarokMLLogUtils::LogError(TEXT("[UNevarokMLSpace::Box] Shape[1] <= 0"));
            return false;
        }

        if (_low.Num() <= 0)
        {
            UNevarokMLLogUtils::LogError(TEXT("[UNevarokMLSpace::Box] Low.Num() <= 0"));
            return false;
        }

        if (_high.Num() <= 0)
        {
            UNevarokMLLogUtils::LogError(TEXT("[UNevarokMLSpace::Box] High.Num() <= 0"));
            return false;
        }

        if (_low.Num() != _high.Num())
        {
            UNevarokMLLogUtils::LogError(TEXT("[UNevarokMLSpace::Box] Low.Num() != High.Num()"));
            return false;
        }

        for (auto i = 0; i < _low.Num(); i++)
        {
            if (_low[i] >= _high[i])
            {
                UNevarokMLLogUtils::LogError(
                    FString::Printf(
                        TEXT("[UNevarokMLSpace::Box] Low[%d]{%f} >= High[%d]{%f}"), i, _low[i], i, _high[i]));
            }
        }

        return true;
    }

    if (IsSpace(ENevarokMLSpaceEnum::MULTI_DISCRETE))
    {
        if (_nVec.Num() <= 0)
        {
            UNevarokMLLogUtils::LogError(TEXT("[UNevarokMLSpace::MultiDiscrete] NVec.Num() <= 0"));
            return false;
        }

        auto valid = true;

        for (auto i = 0; i < _nVec.Num(); i++)
        {
            if (_nVec[i] <= 0)
            {
                UNevarokMLLogUtils::LogError(
                    FString::Printf(TEXT("[UNevarokMLSpace::MultiDiscrete] NVec[%d] <= 0"), i));
                valid = false;
            }
        }

        return valid;
    }

    if (IsSpace(ENevarokMLSpaceEnum::MULTI_BINARY))
    {
        if (_n <= 0)
        {
            UNevarokMLLogUtils::LogError(TEXT("[UNevarokMLSpace::MultiBinary] N <= 0"));
            return false;
        }

        return true;
    }

    return false;
}

UNevarokMLSpace* UNevarokMLSpace::Discrete(UObject* owner, int64 size)
{
    const auto space = owner ? NewObject<UNevarokMLSpace>(owner) : NewObject<UNevarokMLSpace>();

    space->ToDiscrete(size);

    return space;
}

UNevarokMLSpace* UNevarokMLSpace::MultiDiscrete(UObject* owner, const TArray<int64>& vec)
{
    const auto space = owner ? NewObject<UNevarokMLSpace>(owner) : NewObject<UNevarokMLSpace>();

    space->ToMultiDiscrete(vec);

    return space;
}

UNevarokMLSpace* UNevarokMLSpace::MultiBinary(UObject* owner, int32 size)
{
    const auto space = owner ? NewObject<UNevarokMLSpace>(owner) : NewObject<UNevarokMLSpace>();

    space->ToMultiBinary(size);

    return space;
}

UNevarokMLSpace* UNevarokMLSpace::Continuous(UObject* owner, int size, const TArray<float>& min,
                                             const TArray<float>& max)
{
    const auto space = owner ? NewObject<UNevarokMLSpace>(owner) : NewObject<UNevarokMLSpace>();

    space->ToContinuous(size, min, max);

    return space;
}

UNevarokMLSpace* UNevarokMLSpace::Box(UObject* owner, FNevarokMLIndex2D size, const TArray<float>& min,
                                      const TArray<float>& max)
{
    const auto space = owner ? NewObject<UNevarokMLSpace>(owner) : NewObject<UNevarokMLSpace>();

    space->ToBox(size, min, max);

    return space;
}

UNevarokMLSpace* UNevarokMLSpace::MultiDiscreteStack(UObject* owner, const TArray<int64>& vec, int stack)
{
    const auto space = owner ? NewObject<UNevarokMLSpace>(owner) : NewObject<UNevarokMLSpace>();

    space->ToMultiDiscreteStack(vec, stack);

    return space;
}

UNevarokMLSpace* UNevarokMLSpace::MultiBinaryStack(UObject* owner, int32 size, int stack)
{
    const auto space = owner ? NewObject<UNevarokMLSpace>(owner) : NewObject<UNevarokMLSpace>();

    space->ToMultiBinaryStack(size, stack);

    return space;
}

UNevarokMLSpace* UNevarokMLSpace::ContinuousStack(UObject* owner, int size, const TArray<float>& min,
                                                  const TArray<float>& max, int stack)
{
    const auto space = owner ? NewObject<UNevarokMLSpace>(owner) : NewObject<UNevarokMLSpace>();

    space->ToContinuousStack(size, min, max, stack);

    return space;
}

UNevarokMLSpace* UNevarokMLSpace::BoxDXStack(UObject* owner, FNevarokMLIndex2D size, const TArray<float>& min,
                                             const TArray<float>& max,
                                             int stack)
{
    const auto space = owner ? NewObject<UNevarokMLSpace>(owner) : NewObject<UNevarokMLSpace>();

    space->ToBoxDXStack(size, min, max, stack);

    return space;
}

UNevarokMLSpace* UNevarokMLSpace::BoxDYStack(UObject* owner, FNevarokMLIndex2D size, const TArray<float>& min,
                                             const TArray<float>& max,
                                             int stack)
{
    const auto space = owner ? NewObject<UNevarokMLSpace>(owner) : NewObject<UNevarokMLSpace>();

    space->ToBoxDYStack(size, min, max, stack);

    return space;
}


void UNevarokMLSpace::ToDiscrete(int64 size)
{
    size = FMath::Clamp(size, 1, MAX_int32);

    _type = GetName(ENevarokMLSpaceEnum::DISCRETE);
    _n = size;
    _stack = {1};
    _num = 1;

    UpdateNNEShapes();
}

void UNevarokMLSpace::ToMultiDiscrete(const TArray<int64>& vec)
{
    const auto vecNum = vec.Num();
    const auto size = FMath::Clamp(vecNum, 1, MAX_int32);

    _type = GetName(ENevarokMLSpaceEnum::MULTI_DISCRETE);
    _shape = {size};
    _stack = {1};
    _num = size;

    for (auto i = 0; i < size; ++i)
    {
        _nVec.Add(i < vecNum ? FMath::Clamp(vec[i], 1, MAX_int32) : 0);
    }

    UpdateNNEShapes();
}

void UNevarokMLSpace::ToMultiBinary(int32 size)
{
    size = static_cast<int8>(FMath::Clamp(size, 1, MAX_int8));

    _type = GetName(ENevarokMLSpaceEnum::MULTI_BINARY);
    _shape = {size};
    _n = size;
    _stack = {1};
    _num = size;

    UpdateNNEShapes();
}

void UNevarokMLSpace::ToContinuous(int size,
                                   const TArray<float>& min,
                                   const TArray<float>& max)
{
    size = FMath::Clamp(size, 1, MAX_int32);

    _type = GetName(ENevarokMLSpaceEnum::BOX);
    _shape = {size};
    _stack = {1};
    _num = size;

    const auto minNum = min.Num();
    const auto maxNum = max.Num();

    for (auto i = 0; i < size; ++i)
    {
        _low.Add(i < minNum ? min[i] : 0.0);
        _high.Add(i < maxNum ? max[i] : 0.0);
    }

    UpdateNNEShapes();
}

void UNevarokMLSpace::ToBox(FNevarokMLIndex2D size, const TArray<float>& min,
                            const TArray<float>& max)
{
    auto dx = FMath::Clamp(size.DX, 1, MAX_int32);
    auto dy = FMath::Clamp(size.DY, 1, MAX_int32);

    const auto num = dx * dy;

    _type = GetName(ENevarokMLSpaceEnum::BOX);
    _shape = {dx, dy};
    _stack = {1, 1};
    _num = num;

    const auto minNum = min.Num();
    const auto maxNum = max.Num();

    for (auto i = 0; i < num; ++i)
    {
        _low.Add(i < minNum ? min[i] : 0.0);
        _high.Add(i < maxNum ? max[i] : 0.0);
    }

    UpdateNNEShapes();
}

void UNevarokMLSpace::ToMultiDiscreteStack(const TArray<int64>& vec, int stack)
{
    stack = FMath::Clamp(stack, 1, MAX_int32);

    const auto vecNum = vec.Num();
    const auto size = FMath::Clamp(vecNum, 1, MAX_int32);
    const auto num = size * stack;

    _type = GetName(ENevarokMLSpaceEnum::MULTI_DISCRETE);
    _shape = {num};
    _stack = {stack};
    _num = num;

    for (auto i = 0; i < stack; ++i)
    {
        for (auto j = 0; j < size; ++j)
        {
            _nVec.Add(j < vecNum ? FMath::Clamp(vec[j], 1, MAX_int32) : 0);
        }
    }

    UpdateNNEShapes();
}

void UNevarokMLSpace::ToMultiBinaryStack(int32 size, int stack)
{
    stack = FMath::Clamp(stack, 1, MAX_int32);
    size = FMath::Clamp(size, 1, MAX_int8) * stack;

    _type = GetName(ENevarokMLSpaceEnum::MULTI_BINARY);
    _shape = {size};
    _n = size;
    _stack = {stack};
    _num = size;

    UpdateNNEShapes();
}

void UNevarokMLSpace::ToContinuousStack(int size, const TArray<float>& min,
                                        const TArray<float>& max, int stack)
{
    stack = FMath::Clamp(stack, 1, MAX_int32);
    size = FMath::Clamp(size, 1, MAX_int32);

    const auto num = size * stack;

    _type = GetName(ENevarokMLSpaceEnum::BOX);
    _shape = {num};
    _stack = {stack};
    _num = num;

    const auto minNum = min.Num();
    const auto maxNum = max.Num();

    for (auto i = 0; i < stack; ++i)
    {
        for (auto j = 0; j < size; ++j)
        {
            _low.Add(j < minNum ? min[j] : 0.0);
            _high.Add(j < maxNum ? max[j] : 0.0);
        }
    }

    UpdateNNEShapes();
}

void UNevarokMLSpace::ToBoxDXStack(FNevarokMLIndex2D size, const TArray<float>& min,
                                   const TArray<float>& max,
                                   int stack)
{
    auto dx = size.DX;
    auto dy = size.DY;

    stack = FMath::Clamp(stack, 1, MAX_int32);

    dx = FMath::Clamp(dx, 1, MAX_int32);
    dy = FMath::Clamp(dy, 1, MAX_int32);

    const auto dxShape = dx * stack;
    const auto num = dxShape * dy;

    _type = GetName(ENevarokMLSpaceEnum::BOX);
    _shape = {dxShape, dy};
    _stack = {stack, 1};
    _num = num;

    const auto minNum = min.Num();
    const auto maxNum = max.Num();

    for (int32 k = 0; k < stack; ++k)
    {
        for (int32 i = 0; i < dx; ++i)
        {
            for (int32 j = 0; j < dy; ++j)
            {
                const auto index = i * dy + j;

                _low.Add(index < minNum ? min[index] : 0.0);
                _high.Add(index < maxNum ? max[index] : 0.0);
            }
        }
    }

    UpdateNNEShapes();
}

void UNevarokMLSpace::ToBoxDYStack(FNevarokMLIndex2D size, const TArray<float>& min,
                                   const TArray<float>& max,
                                   int stack)
{
    auto dx = size.DX;
    auto dy = size.DY;

    stack = FMath::Clamp(stack, 1, MAX_int32);

    dx = FMath::Clamp(dx, 1, MAX_int32);
    dy = FMath::Clamp(dy, 1, MAX_int32);

    const auto dyShape = dy * stack;
    const auto num = dx * dyShape;

    _type = GetName(ENevarokMLSpaceEnum::BOX);
    _shape = {dx, dyShape};
    _stack = {1, stack};
    _num = num;

    const auto minNum = min.Num();
    const auto maxNum = max.Num();

    TArray<float> low;
    TArray<float> high;

    for (int32 i = 0; i < dx; ++i)
    {
        for (int32 k = 0; k < stack; ++k)
        {
            for (int32 j = 0; j < dy; ++j)
            {
                const auto index = i * dy + j;

                _low.Add(index < minNum ? min[index] : 0.0);
                _high.Add(index < maxNum ? max[index] : 0.0);
            }
        }
    }

    UpdateNNEShapes();
}


TSharedPtr<FJsonObject> UNevarokMLSpace::ToJson() const
{
    const TSharedPtr<FJsonObject> jsonObject = MakeShareable(new FJsonObject);

    jsonObject->SetStringField("type", _type);

    TArray<TSharedPtr<FJsonValue>> shapeValues;
    for (int32 value : _shape)
    {
        shapeValues.Add(MakeShared<FJsonValueNumber>(value));
    }

    jsonObject->SetArrayField("shape", shapeValues);

    switch (GetType())
    {
    case ENevarokMLSpaceEnum::DISCRETE:
    case ENevarokMLSpaceEnum::MULTI_BINARY:
        SerializeDiscrete(jsonObject);
        break;
    case ENevarokMLSpaceEnum::BOX:
        SerializeBox(jsonObject);
        break;
    case ENevarokMLSpaceEnum::MULTI_DISCRETE:
        SerializeMultiDiscrete(jsonObject);
        break;
    }

    return jsonObject;
}

void UNevarokMLSpace::SerializeDiscrete(const TSharedPtr<FJsonObject>& jsonObject) const
{
    jsonObject->SetNumberField("n", _n);
}

void UNevarokMLSpace::UpdateNNEShapes()
{
    using namespace UE::NNECore;

    TArray<int> shape = {1};
    shape.Append(GetShape());
    _nneShape.SetNum(1);
    _nneShape[0] = FTensorShape::MakeFromSymbolic(FSymbolicTensorShape::Make(shape));
}

void UNevarokMLSpace::SerializeMultiDiscrete(const TSharedPtr<FJsonObject>& jsonObject) const
{
    TArray<TSharedPtr<FJsonValue>> jsonNvecValues;
    for (const int32 nvecValue : _nVec)
    {
        jsonNvecValues.Add(MakeShareable(new FJsonValueNumber(nvecValue)));
    }
    jsonObject->SetArrayField("nvec", jsonNvecValues);
}

void UNevarokMLSpace::SerializeBox(const TSharedPtr<FJsonObject>& jsonObject) const
{
    if (_shape.Num() == 1)
    {
        TArray<TSharedPtr<FJsonValue>> jsonLowValues;
        TArray<TSharedPtr<FJsonValue>> jsonHighValues;

        for (int32 i = 0; i < _shape[0]; ++i)
        {
            jsonLowValues.Add(MakeShareable(new FJsonValueNumber(_low[i])));
            jsonHighValues.Add(MakeShareable(new FJsonValueNumber(_high[i])));
        }

        jsonObject->SetArrayField("low", jsonLowValues);
        jsonObject->SetArrayField("high", jsonHighValues);
    }

    if (_shape.Num() == 2)
    {
        TArray<TSharedPtr<FJsonValue>> lowJsonValues;
        TArray<TSharedPtr<FJsonValue>> highJsonValues;

        for (int32 i = 0; i < _shape[0]; ++i)
        {
            TArray<TSharedPtr<FJsonValue>> lowJsonRow;
            TArray<TSharedPtr<FJsonValue>> highJsonRow;

            for (int32 j = 0; j < _shape[1]; ++j)
            {
                const auto index = i * _shape[1] + j;

                const auto lowValue = _low[index];
                const auto highValue = _high[index];

                lowJsonRow.Add(MakeShared<FJsonValueNumber>(lowValue));
                highJsonRow.Add(MakeShared<FJsonValueNumber>(highValue));
            }

            lowJsonValues.Add(MakeShared<FJsonValueArray>(lowJsonRow));
            highJsonValues.Add(MakeShared<FJsonValueArray>(highJsonRow));
        }

        jsonObject->SetArrayField("low", lowJsonValues);
        jsonObject->SetArrayField("high", highJsonValues);
    }
}
