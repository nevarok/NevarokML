/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Utils/NevarokMLMathUtils.h"

int UNevarokMLMathUtils::NSteps(const int steps, const int envCount)
{
    return FMath::Max(steps / envCount, 1);
}

uint16 UNevarokMLMathUtils::FloatToHalf(float value)
{
    const uint32_t floatValueBits = *reinterpret_cast<uint32_t*>(&value);

    const uint32_t sign = (floatValueBits >> 31) & 0x1;
    uint32_t exponent = (floatValueBits >> 23) & 0xFF;
    uint32_t mantissa = floatValueBits & 0x7FFFFF;

    if (exponent == 255)
    {
        exponent = 31;
        mantissa = (mantissa != 0) ? 1 : 0;
    }
    else if (exponent == 0)
    {
        exponent = 0;
        mantissa = 0;
    }
    else
    {
        exponent = exponent - 127 + 15;
        mantissa = mantissa >> 13;
    }

    const uint16 halfValue = (sign << 15) | (exponent << 10) | mantissa;

    return halfValue;
}

float UNevarokMLMathUtils::HalfToFloat(uint16 value)
{
    const uint32_t halfValueBits = value;

    const uint32_t sign = halfValueBits >> 15 & 0x1;
    uint32_t exponent = halfValueBits >> 10 & 0x1F;
    uint32_t mantissa = halfValueBits & 0x3FF;

    if (exponent == 31)
    {
        exponent = 255;
        mantissa = (mantissa != 0) ? 0x7FFFFF : 0;
    }
    else if (exponent == 0)
    {
        exponent = 0;
        mantissa = 0;
    }
    else
    {
        exponent = exponent - 15 + 127;
        mantissa = mantissa << 13;
    }

    uint32_t floatValueBits = (sign << 31) | (exponent << 23) | mantissa;
    const float floatValue = *reinterpret_cast<float*>(&floatValueBits);

    return floatValue;
}

FNevarokMLIndex2D UNevarokMLMathUtils::Add_Index2DIndex2D(FNevarokMLIndex2D a, FNevarokMLIndex2D b)
{
    return FNevarokMLIndex2D(a.DX + b.DX, a.DY + b.DY);
}

FNevarokMLIndex2D UNevarokMLMathUtils::Multiply_Index2DInt(FNevarokMLIndex2D a, int32 b)
{
    return FNevarokMLIndex2D(a.DX * b, a.DY * b);
}

int64 UNevarokMLMathUtils::FVectorToInt64(const FVector& value)
{
    const uint16_t x16 = FloatToHalf(value.X);
    const uint16_t y16 = FloatToHalf(value.Y);
    const uint16_t z16 = FloatToHalf(value.Z);

    int64 packedValue = 0;
    packedValue |= static_cast<int64>(x16) << 48;
    packedValue |= static_cast<int64>(y16) << 32;
    packedValue |= static_cast<int64>(z16) << 16;

    return packedValue;
}

FVector UNevarokMLMathUtils::Int64ToFVector(const int64 value)
{
    FVector unpackedValue;

    const uint16_t x16 = value >> 48 & 0xFFFF;
    const uint16_t y16 = value >> 32 & 0xFFFF;
    const uint16_t z16 = value >> 16 & 0xFFFF;

    unpackedValue.X = HalfToFloat(x16);
    unpackedValue.Y = HalfToFloat(y16);
    unpackedValue.Z = HalfToFloat(z16);

    return unpackedValue;
}

FVector UNevarokMLMathUtils::FVectorClampToFloat16(const FVector& value)
{
    return value.GetClampedToSize(0.0f, FFloat16::MaxF16Float);
}

int UNevarokMLMathUtils::GetIndex(const int index, const int size, const int offset)
{
    return index * size + offset;
}

void UNevarokMLMathUtils::MakeMinMax(TArray<float>& min, TArray<float>& max, const int num)
{
    min = TArray<float>();
    max = TArray<float>();
    min.Reserve(num);
    max.Reserve(num);
}

TArray<int64> UNevarokMLMathUtils::MakeVec(const int num)
{
    auto result = TArray<int64>();
    result.Reserve(num);
    return result;
}

void UNevarokMLMathUtils::MinMaxAdd(TArray<float>& min, TArray<float>& max, float minValue, float maxValue)
{
    min.Add(minValue);
    max.Add(maxValue);
}

void UNevarokMLMathUtils::MinMaxAddVector2D(TArray<float>& min, TArray<float>& max, FVector2D value)
{
    min.Add(value.X);
    max.Add(value.Y);
}

void UNevarokMLMathUtils::VecAdd(TArray<int64>& vec, const int64 value)
{
    vec.Add(value);
}

void UNevarokMLMathUtils::VecSet(TArray<int64>& vec, const int index, const int64 value)
{
    vec[index] = value;
}

void UNevarokMLMathUtils::VecScale(TArray<int64>& vec, const int times)
{
    const auto size = vec.Num();
    const auto num = size * times;
    vec.SetNum(num);

    for(auto i = 0; i < num; i++)
    {
        const auto index = i % size;
        vec[i] = vec[index];
    }
}

void UNevarokMLMathUtils::StackPush(TArray<int64>& stack, int64 value, int stackSize)
{
    stack.Insert(value, 0);
    stack.SetNum(stackSize);
}

void UNevarokMLMathUtils::StackReset(TArray<int64>& stack, int stackSize)
{
    stack.Empty(stackSize);
}

int64 UNevarokMLMathUtils::GetMaxInt64()
{
    return TNumericLimits<int64>().Max();
}

int64 UNevarokMLMathUtils::GetMaxInt()
{
    return TNumericLimits<int>().Max();
}

int64 UNevarokMLMathUtils::GetMaxInt16()
{
    return TNumericLimits<int16>().Max();
}

int64 UNevarokMLMathUtils::GetMaxInt8()
{
    return TNumericLimits<int8>().Max();
}

int64 UNevarokMLMathUtils::GetMaxUInt8()
{
    return TNumericLimits<uint8>().Max();
}

FVector UNevarokMLMathUtils::RoundFVectorValuesToInt8(const FVector& vector, const float scale)
{
    auto scaled = vector * scale;
    scaled.X = FMath::RoundToInt(scaled.X);
    scaled.Y = FMath::RoundToInt(scaled.Y);
    scaled.Z = FMath::RoundToInt(scaled.Z);
    return scaled.GetClampedToSize(0.0, TNumericLimits<int8>().Max());
}

FVector UNevarokMLMathUtils::RoundFVectorValuesToInt16(const FVector& vector, const float scale)
{
    auto scaled = vector * scale;
    scaled.X = FMath::RoundToInt(scaled.X);
    scaled.Y = FMath::RoundToInt(scaled.Y);
    scaled.Z = FMath::RoundToInt(scaled.Z);
    return scaled.GetClampedToSize(0.0, TNumericLimits<int16>().Max());
}

FVector UNevarokMLMathUtils::RoundFVectorValuesToInt(const FVector& vector, const float scale)
{
    auto scaled = vector * scale;
    scaled.X = FMath::RoundToInt(scaled.X);
    scaled.Y = FMath::RoundToInt(scaled.Y);
    scaled.Z = FMath::RoundToInt(scaled.Z);
    return scaled.GetClampedToSize(0.0, TNumericLimits<int>().Max());
}

int UNevarokMLMathUtils::RoundFVectorToInt(const FVector& vector, const float scale)
{
    const auto scaled = RoundFVectorValuesToInt8(vector, scale);
    const auto a = static_cast<int8>(scaled.X);
    const auto b = static_cast<int8>(scaled.Y);
    const auto c = static_cast<int8>(scaled.Z);
    const auto d = 0;
    return PackInt8ToInt(a, b, c, d);
}

FVector UNevarokMLMathUtils::RoundIntToFVector(const int value)
{
    int8 a;
    int8 b;
    int8 c;
    int8 d;
    
    UnpackIntToInt8(value, a, b, c, d);
    
    return FVector(a, b, c);
}

int64 UNevarokMLMathUtils::RoundFVectorToInt64(const FVector& vector, const float scale)
{
    const auto scaled = RoundFVectorValuesToInt8(vector, scale);
    const auto a = static_cast<int16>(scaled.X);
    const auto b = static_cast<int16>(scaled.Y);
    const auto c = static_cast<int16>(scaled.Z);
    const auto d = 0;
    return PackInt16ToInt64(a, b, c, d);
}

FVector UNevarokMLMathUtils::RoundInt64ToFVector(const int64 value)
{
    int16 a;
    int16 b;
    int16 c;
    int16 d;
    
    UnpackInt64ToInt16(value, a, b, c, d);
    
    return FVector(a, b, c);
}

int UNevarokMLMathUtils::FloatToShort(const float value, const float scale)
{
    constexpr auto limit = TNumericLimits<int16>().Max();
    
    return FMath::Clamp(FMath::RoundToInt(value * scale), -limit, limit);
}

int UNevarokMLMathUtils::ShortShortToInt(int a, int b)
{
    return PackInt16ToInt(a, b);
}

int UNevarokMLMathUtils::GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return GCD(b, a % b);
}

int UNevarokMLMathUtils::BatchSize(int envsCount, int nSteps, int multiplier)
{
    const auto gcd = GCD(nSteps, envsCount);

    return gcd * multiplier;
}

void UNevarokMLMathUtils::IntToShortShort(int value, int& a, int& b)
{
    int16 a16;
    int16 b16;
    
    UnpackIntToInt16(value, a16, b16);

    a = a16;
    b = b16;
}

FVector UNevarokMLMathUtils::XYRandomVector(float radius)
{
    FVector result = FVector::ZeroVector;
    
    result.X = FMath::FRandRange(-radius, radius);
    result.Y = FMath::FRandRange(-radius, radius);

    return result.GetSafeNormal() * radius;
}

float UNevarokMLMathUtils::Round(float value, int multiplier)
{
    return FMath::RoundToFloat(value * multiplier) / multiplier;
}

int UNevarokMLMathUtils::PackInt8ToInt(const int8 a, const int8 b, const int8 c, const int8 d)
{
    return a << 24 | b << 16 | c << 8 | d;
}

void UNevarokMLMathUtils::UnpackIntToInt8(const int value, int8& a, int8& b, int8& c, int8& d)
{
    a = value >> 24 & 0xFF;
    b = value >> 16 & 0xFF;
    c = value >> 8 & 0xFF;
    d = value & 0xFF;
}

int16 UNevarokMLMathUtils::PackInt8ToInt16(int8 a, int8 b)
{
    return static_cast<int16>(a) << 8 | static_cast<int16>(b);
}

void UNevarokMLMathUtils::UnpackInt16ToInt8(int16 value, int8& a, int8& b)
{
    a = static_cast<int8>(value >> 8);
    b = static_cast<int8>(value & 0xFF);
}

int UNevarokMLMathUtils::PackInt16ToInt(int16 a, int16 b)
{
    return static_cast<int>(a) << 16 | static_cast<int>(b);
}

void UNevarokMLMathUtils::UnpackIntToInt16(int value, int16& a, int16& b)
{
    a = static_cast<int16>(value >> 16);
    b = static_cast<int16>(value & 0xFFFF);
}

int64 UNevarokMLMathUtils::PackInt16ToInt64(const int16 a, const int16 b, const int16 c, const int16 d)
{
    int64 packedValue = a;
    packedValue = packedValue << 16 | static_cast<int64>(b);
    packedValue = packedValue << 16 | static_cast<int64>(c);
    packedValue = packedValue << 16 | static_cast<int64>(d);
    return packedValue;
}

void UNevarokMLMathUtils::UnpackInt64ToInt16(int64 value, int16& a, int16& b, int16& c, int16& d)
{
    d = static_cast<int16>(value & 0xFFFF);
    value >>= 16;
    c = static_cast<int16>(value & 0xFFFF);
    value >>= 16;
    b = static_cast<int16>(value & 0xFFFF);
    value >>= 16;
    a = static_cast<int16>(value & 0xFFFF);
}