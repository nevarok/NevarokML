// LICENSE AGREEMENT
// -----------------
//
// This License Agreement ("Agreement") is entered into by and between Kyrylo Mishakin, also known as nevarok ("Author"), and the licensee ("Licensee") for the usage of the Unreal Engine plugin named "NevarokML" ("Plugin").
//
// Grant of License:
// 1.1. Author grants Licensee a non-exclusive, non-transferable license to use the Plugin for the Licensee's internal business purposes, subject to the terms and conditions of this Agreement.
// 1.2. The license granted herein does not include the right to sublicense, distribute, sell, or otherwise make the Plugin available to third parties.
//
// Ownership and Intellectual Property:
// 2.1. The Plugin, including all intellectual property rights, remains the sole and exclusive property of Kyrylo Mishakin. Licensee acknowledges and agrees that no ownership or intellectual property rights are transferred under this Agreement.
// 2.2. If Licensee suggests any new features, functionality, or performance improvements for the Plugin that Author subsequently incorporates into the Plugin, Licensee hereby grants Author a worldwide, non-exclusive, royalty-free, perpetual right and license to use and incorporate such suggestions into the Plugin. Licensee acknowledges that the Plugin incorporating such new features, functionality, or performance shall be the sole and exclusive property of Author and all such suggestions shall be free from any confidentiality restrictions that might otherwise be imposed upon Author under this Agreement.
//
// Restrictions:
// 3.1. Licensee shall not create derivative works based on the Plugin, except as expressly permitted by applicable law.
// 3.2. Licensee shall not remove, alter, or obscure any copyright, trademark, or proprietary notices embedded in or displayed by the Plugin.
// 3.3. Licensee shall not use the Plugin for any illegal or unauthorized purpose, including but not limited to infringing upon any third-party intellectual property rights.
// 3.4. Licensee shall not distribute or include the external executable provided with the Plugin in any products based on the Plugin.
//
// Support and Updates:
// 4.1. Author shall provide reasonable support to Licensee regarding the functionality and use of the Plugin. However, Author is under no obligation to provide updates, bug fixes, or new versions of the Plugin.
//
// Term and Termination:
// 5.1. This Agreement shall remain in effect unless terminated by either party. Either party may terminate this Agreement immediately upon written notice if the other party breaches any material provision of this Agreement.
// 5.2. Upon termination, Licensee shall immediately cease all use of the Plugin and delete or destroy any copies of the Plugin in their possession or control.
//
// Limitation of Liability:
// 6.1. In no event shall Kyrylo Mishakin be liable for any indirect, incidental, consequential, or punitive damages arising out of or in connection with the use or inability to use the Plugin, even if Kyrylo Mishakin has been advised of the possibility of such damages.
//
// Governing Law and Jurisdiction:
// 7.1. This Agreement shall be governed by and construed in accordance with the laws of the jurisdiction where Kyrylo Mishakin is located.
// 7.2. Any disputes arising out of or in connection with this Agreement shall be subject to the exclusive jurisdiction of the courts in the jurisdiction where Kyrylo Mishakin is located.
//
// Non-Commercial Use:
// 8.1. Licensee is permitted to obtain the Plugin for free for the sole purpose of non-commercial use. Non-commercial use includes social media content creation, educational, research, or personal projects that do not generate direct revenue.
// 8.2. Licensee shall ensure that recipients of the Plugin for non-commercial use are made aware of the terms and conditions of this Agreement and agree to abide by them.
//
// Commercial Use and Licensing:
// 8.3. Any use of the Plugin for commercial purposes, including but not limited to projects, products, or services intended for profit, requires Licensee to obtain a separate commercial license from the Author.
// 8.4. Commercial use includes any content or applications created or enhanced using the Plugin that are intended for profit, including but not limited to games, simulations, or other interactive experiences.
// 8.5. Licensee shall contact the Author to inquire about and obtain the appropriate commercial license for such use.
// 8.6. Licensee acknowledges that any commercial use without a valid commercial license is a breach of this Agreement.
//
// Please note that the term "commercial use" encompasses any use of the Plugin that is intended to generate direct revenue or financial gain.
//
// This addition to the License Agreement clarifies the conditions under which the Plugin can be distributed and used, distinguishing between non-commercial and commercial purposes. Licensees are required to obtain a commercial license for any commercial use of the Plugin, ensuring compliance with the licensing terms.
//
// By using the Plugin, Licensee acknowledges that they have read and understood this Agreement and agree to be bound by its terms and conditions.
//
// Copyright (c) 2023 Kyrylo Mishakin

#pragma once
#include "NevarokMLLogUtils.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Types/NevarokMLIndex2D.h"
#include "NevarokMLMathUtils.generated.h"

UCLASS()
class NEVAROKML_API UNevarokMLMathUtils : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int NSteps(const int steps, const int envCount);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int64 FVectorToInt64(const FVector& value);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static FVector Int64ToFVector(int64 value);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static FVector FVectorClampToFloat16(const FVector& value);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int GetIndex(const int index, const int size, const int offset);
     
    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static void MakeMinMax(TArray<float>& min, TArray<float>& max, const int num);
    
    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static TArray<int64> MakeVec(int size);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|MathUtils")
    static void MinMaxAdd(UPARAM(ref) TArray<float>& min, UPARAM(ref) TArray<float>& max, float minValue, float maxValue);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|MathUtils")
    static void MinMaxAddVector2D(UPARAM(ref) TArray<float>& min, UPARAM(ref) TArray<float>& max, FVector2D value);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|MathUtils")
    static void VecAdd(UPARAM(ref) TArray<int64>& vec, int64 value);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|MathUtils")
    static void VecSet(UPARAM(ref) TArray<int64>& vec, int index, int64 value);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|MathUtils")
    static void VecScale(UPARAM(ref) TArray<int64>& vec, int times);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|MathUtils")
    static void StackPush(UPARAM(ref) TArray<int64>& stack, int64 value, int stackSize);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|MathUtils")
    static void StackReset(UPARAM(ref) TArray<int64>& stack, int stackSize);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int64 GetMaxInt64();

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int64 GetMaxInt();

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int64 GetMaxInt16();

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int64 GetMaxInt8();

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int64 GetMaxUInt8();
    
    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static FVector RoundFVectorValuesToInt8(const FVector& vector, const float scale);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static FVector RoundFVectorValuesToInt16(const FVector& vector, const float scale);
    
    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static FVector RoundFVectorValuesToInt(const FVector& vector, float scale);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int RoundFVectorToInt(const FVector& vector, float scale);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static FVector RoundIntToFVector(int value);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int64 RoundFVectorToInt64(const FVector& vector, float scale);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static FVector RoundInt64ToFVector(int64 value);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int FloatToShort(const float value, const float scale = 1.0);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int ShortShortToInt(int a, int b);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int GCD(int a, int b);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static int BatchSize(int envsCount, int nSteps, int multiplier);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static void IntToShortShort(int value, int& a, int& b);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static FVector XYRandomVector(float radius);

    UFUNCTION(BlueprintPure, Category = "NevarokML|MathUtils")
    static float Round(float value, int multiplier = 100);

    static int16 PackInt8ToInt16(int8 a, int8 b);
    static void UnpackInt16ToInt8(int16 value, int8& a, int8& b);

    static int PackInt8ToInt(int8 a, int8 b, int8 c, int8 d);
    static void UnpackIntToInt8(int value, int8& a, int8& b, int8& c, int8& d);
        
    static int PackInt16ToInt(int16 a, int16 b);
    static void UnpackIntToInt16(int value, int16& a, int16& b);
    
    static int64 PackInt16ToInt64(int16 a, int16 b, int16 c, int16 d);
    static void UnpackInt64ToInt16(int64 value, int16& a, int16& b, int16& c, int16& d);

    static uint16 FloatToHalf(float value);
    static float HalfToFloat(uint16 value);

    UFUNCTION(BlueprintCallable, Category="NevarokML|MathUtils")
    static void IndexPlusPlus(UPARAM(ref)FNevarokMLIndex2D& current,
                              const FNevarokMLIndex2D step,
                              FNevarokMLIndex2D& index,
                              int& x,
                              int& y)
    {
        index.DX = current.DX;
        index.DY = current.DY;
        x = current.DX;
        y = current.DY;

        current.DX += step.DX;
        current.DY += step.DY;
    }

    UFUNCTION(BlueprintPure, meta=(DisplayName = "Index2D + Index2D", CompactNodeTitle = "+", Keywords = "+ add plus", CommutativeAssociativeBinaryOperator = "true"), Category="NevarokML|MathUtils")
    static FNevarokMLIndex2D Add_Index2DIndex2D(FNevarokMLIndex2D a, FNevarokMLIndex2D b);

    UFUNCTION(BlueprintPure, meta=(DisplayName = "Index2D * int", Keywords = "* multiply"), Category="NevarokML|MathUtils")
    static FNevarokMLIndex2D Multiply_Index2DInt(FNevarokMLIndex2D a, int32 b);
};
