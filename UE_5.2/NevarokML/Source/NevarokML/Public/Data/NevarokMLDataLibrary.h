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
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NevarokMLDataLibrary.generated.h"

UENUM(BlueprintType)
enum class ENevarokMLData : uint8
{
    NONE = 0 UMETA(Hidden),
    REINFORCEMENT = 1 UMETA(DisplayName = "REINFORCEMENT"),
    ACTION = 2 UMETA(DisplayName = "ACTION"),
    OBSERVATION = 3 UMETA(DisplayName = "OBSERVATION"),
    PREDICTION = 4 UMETA(DisplayName = "PREDICTION"),
    RESET = 5 UMETA(DisplayName = "RESET"),
    COMPLETE = 6 UMETA(DisplayName = "COMPLETE"),
    READY = 7 UMETA(DisplayName = "READY"),
    EXPERT = 8 UMETA(DisplayName = "EXPERT"),
    IMITATION = 9 UMETA(DisplayName = "IMITATION"),
    ERROR = 10 UMETA(DisplayName = "ERROR"),
    SAVE = 11 UMETA(DisplayName = "SAVE")
};

UENUM(BlueprintType)
enum class ENevarokMLAlgorithm : uint8
{
    NONE = 0 UMETA(Hidden),
    PPO = 1 UMETA(DisplayName = "PPO"),
    A2C = 2 UMETA(DisplayName = "A2C"),
    DDPG = 3 UMETA(DisplayName = "DDPG"),
    DQN = 4 UMETA(DisplayName = "DQN"),
    SAC = 5 UMETA(DisplayName = "SAC"),
    TD3 = 6 UMETA(DisplayName = "TD3")
};

UENUM(BlueprintType)
enum class ENevarokMLPolicy : uint8
{
    NONE = 0 UMETA(Hidden),
    MLP_POLICY = 1 UMETA(DisplayName = "MlpPolicy"),
    CNN_POLICY = 2 UMETA(DisplayName = "CnnPolicy")
};

UENUM(BlueprintType)
enum class ENevarokMLDevice : uint8
{
    AUTO = 0 UMETA(DisplayName = "AUTO"),
    CPU = 1 UMETA(DisplayName = "CPU"),
    GPU = 2 UMETA(DisplayName = "GPU")
};

UCLASS()
class NEVAROKML_API UNevarokMLDataLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category = "NevarokML|DataLibrary")
    static TArray<uint8> ReinforcementLearning(const UNevarokMLBaseAlgorithm* algorithm,
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
                                               bool& valid);

    UFUNCTION(BlueprintPure, Category = "NevarokML|DataLibrary")
    static TArray<uint8> Observation(const int index,
                                     const UNevarokMLSample* sample,
                                     const float reward,
                                     const bool done);
};
