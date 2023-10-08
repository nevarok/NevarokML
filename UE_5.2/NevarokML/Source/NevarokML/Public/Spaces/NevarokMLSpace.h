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
#include "NNECoreTypes.h"
#include "Dom/JsonObject.h"
#include "Types/NevarokMLIndex2D.h"
#include "NevarokMLSpace.generated.h"

UENUM(BlueprintType)
enum class ENevarokMLSpaceEnum : uint8
{
    DISCRETE = 0 UMETA(DisplayName = "DISCRETE"),
    BOX = 1 UMETA(DisplayName = "BOX"),
    MULTI_DISCRETE = 2 UMETA(DisplayName = "MULTI_DISCRETE"),
    MULTI_BINARY = 3 UMETA(DisplayName = "MULTI_BINARY")
};

UCLASS(Blueprintable)
class NEVAROKML_API UNevarokMLSpace : public UObject
{
    GENERATED_BODY()

private:
    FString _type;
    TArray<int32> _shape;
    int64 _n;
    TArray<float> _low;
    TArray<float> _high;
    TArray<int64> _nVec;
    TArray<int32> _stack;
    int32 _num;

    TArray<UE::NNECore::FTensorShape> _nneShape;

public:
    const TArray<int32>& GetShape() const { return _shape; }
    const TArray<int32>& GetStack() const { return _stack; }
    int64 GetN() const { return _n; }
    int32 GetNum() const { return _num; }
    const TArray<float>& GetLow() const { return _low; }
    const TArray<float>& GetHigh() const { return _high; }
    const TArray<int64>& GetNVec() const { return _nVec; }

    TArray<UE::NNECore::FTensorShape> GetNNEShapes() const { return _nneShape; }

    UFUNCTION(BlueprintPure, Category = "NevarokML|Space")
    bool IsValid();

    UFUNCTION(BlueprintPure, Category = "NevarokML|Space")
    static UNevarokMLSpace* Discrete(UObject* owner, int64 size = 1);

    UFUNCTION(BlueprintPure, Category = "NevarokML|Space")
    static UNevarokMLSpace* MultiDiscrete(UObject* owner, const TArray<int64>& vec);

    UFUNCTION(BlueprintPure, Category = "NevarokML|Space")
    static UNevarokMLSpace* MultiBinary(UObject* owner, int32 size = 1);

    UFUNCTION(BlueprintPure, Category = "NevarokML|Space")
    static UNevarokMLSpace* Continuous(UObject* owner, int size, const TArray<float>& min, const TArray<float>& max);

    UFUNCTION(BlueprintPure, Category = "NevarokML|Space")
    static UNevarokMLSpace* Box(UObject* owner, FNevarokMLIndex2D size, const TArray<float>& min, const TArray<float>& max);

    UFUNCTION(BlueprintPure, Category = "NevarokML|Space")
    static UNevarokMLSpace* MultiDiscreteStack(UObject* owner, const TArray<int64>& vec, int stack = 1);

    UFUNCTION(BlueprintPure, Category = "NevarokML|Space")
    static UNevarokMLSpace* MultiBinaryStack(UObject* owner, int32 size = 1, int stack = 1);

    UFUNCTION(BlueprintPure, Category = "NevarokML|Space")
    static UNevarokMLSpace* ContinuousStack(UObject* owner, int size, const TArray<float>& min,
                                            const TArray<float>& max, int stack = 1);

    UFUNCTION(BlueprintPure, Category = "NevarokML|Space")
    static UNevarokMLSpace* BoxDXStack(UObject* owner, FNevarokMLIndex2D size, const TArray<float>& min,
                                       const TArray<float>& max, int stack = 1);

    UFUNCTION(BlueprintPure, Category = "NevarokML|Space")
    static UNevarokMLSpace* BoxDYStack(UObject* owner, FNevarokMLIndex2D size, const TArray<float>& min,
                                       const TArray<float>& max, int stack = 1);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|Space")
    void ToDiscrete(int64 size);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|Space")
    void ToMultiDiscrete(const TArray<int64>& vec);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|Space")
    void ToMultiBinary(int32 size);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|Space")
    void ToContinuous(int size, const TArray<float>& min, const TArray<float>& max);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|Space")
    void ToBox(FNevarokMLIndex2D size, const TArray<float>& min, const TArray<float>& max);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|Space")
    void ToMultiDiscreteStack(const TArray<int64>& vec, int stack);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|Space")
    void ToMultiBinaryStack(int32 size, int stack);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|Space")
    void ToContinuousStack(int size, const TArray<float>& min, const TArray<float>& max, int stack);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|Space")
    void ToBoxDXStack(FNevarokMLIndex2D size, const TArray<float>& min, const TArray<float>& max, int stack);

    UFUNCTION(BlueprintCallable, Category = "NevarokML|Space")
    void ToBoxDYStack(FNevarokMLIndex2D size, const TArray<float>& min, const TArray<float>& max, int stack);

    UFUNCTION(BlueprintPure, Category = "NevarokML|Space")
    ENevarokMLSpaceEnum GetType() const;

    UNevarokMLSpace()
    {
    }

    TSharedPtr<FJsonObject> ToJson() const;
    bool IsSpace(ENevarokMLSpaceEnum space) const;
    static bool IsSpace(const FString& name, ENevarokMLSpaceEnum space);
    static const FString& GetName(ENevarokMLSpaceEnum space);
    static ENevarokMLSpaceEnum GetType(const FString& name);

private:
    void SerializeMultiDiscrete(const TSharedPtr<FJsonObject>& jsonObject) const;
    void SerializeBox(const TSharedPtr<FJsonObject>& jsonObject) const;
    void SerializeDiscrete(const TSharedPtr<FJsonObject>& jsonObject) const;
    void UpdateNNEShapes();
};
