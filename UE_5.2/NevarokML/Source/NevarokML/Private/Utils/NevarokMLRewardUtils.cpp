/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Utils/NevarokMLRewardUtils.h"

float UNevarokMLRewardUtils::BoolReward(float trueReward, float falseReward, bool value)
{
    return value ? trueReward : falseReward;
}

float UNevarokMLRewardUtils::Curve01Reward(const UCurveFloat* curve, float value, float min, float max, float rewardMultiplier)
{
    if(!curve)
    {
        return 0.0f;
    }

    if(min >= max)
    {
        return curve->GetFloatValue(0.0f);
    }
    
    const auto length = max - min;
    value = FMath::Clamp(value, min, max);
    value -= min;
    value /= length;

    return curve->GetFloatValue(value) * rewardMultiplier;
}

float UNevarokMLRewardUtils::StepsDoneCurve01Reward(const UCurveFloat* curve, int timeSteps, int maxTimeSteps, bool isDone, float rewardMultiplier)
{
    if (!isDone)
    {
        return 0.0f;
    }
    
    return StepsCurve01Reward(curve, maxTimeSteps, timeSteps, rewardMultiplier);
}

float UNevarokMLRewardUtils::StepsCurve01Reward(const UCurveFloat* curve, int timeSteps, int maxTimeSteps, float rewardMultiplier)
{    
    if(!curve)
    {
        return 0.0f;
    }
    
    maxTimeSteps = FMath::Clamp(maxTimeSteps, 0, TNumericLimits<int32>().Max());
    timeSteps = FMath::Clamp(timeSteps, 0, maxTimeSteps);
    const auto factor = static_cast<float>(timeSteps) / maxTimeSteps;

    return curve->GetFloatValue(factor) * rewardMultiplier;
}

float UNevarokMLRewardUtils::DotProductCurveReward(const UCurveFloat* curve, FVector a, FVector b, float rewardMultiplier)
{
    if(!curve)
    {
        return 0.0f;
    }
    
    const auto aNormal = a.GetSafeNormal();
    const auto bNormal = b.GetSafeNormal();
    
    if(!aNormal.IsNormalized() || !bNormal.IsNormalized())
    {
        return 0.0f;
    }

    return curve->GetFloatValue(FVector::DotProduct(aNormal, bNormal)) * rewardMultiplier;
}

