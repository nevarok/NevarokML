/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Utils/NevarokMLSampleUtils.h"

bool UNevarokMLSampleUtils::SetBoxVector(UNevarokMLSample* sample, const FNevarokMLIndex2D x,
                                         const FNevarokMLIndex2D y, const FNevarokMLIndex2D z, const FVector vector,
                                         bool multicast)
{
    if (!sample)
    {
        return false;
    }

    auto result = sample->SetBoxValue(x, vector.X, multicast);
    result &= sample->SetBoxValue(y, vector.Y, multicast);
    result &= sample->SetBoxValue(z, vector.Z, multicast);

    return result;
}

bool UNevarokMLSampleUtils::SetContinuousVector(UNevarokMLSample* sample, const int x,
                                         const int y, const int z, const FVector vector,
                                         bool multicast)
{
    if (!sample)
    {
        return false;
    }

    auto result = sample->SetContinuousValue(x, vector.X, multicast);
    result &= sample->SetContinuousValue(y, vector.Y, multicast);
    result &= sample->SetContinuousValue(z, vector.Z, multicast);

    return result;
}

bool UNevarokMLSampleUtils::GetBoxVector(UNevarokMLSample* sample, const FNevarokMLIndex2D& x,
    const FNevarokMLIndex2D& y, const FNevarokMLIndex2D& z, FVector& vector)
{
    if (!sample)
    {
        return false;
    }

    float outX;
    float outY;
    float outZ;
    
    auto result = sample->GetBoxValue(x, outX);
    result &= sample->GetBoxValue(y, outY);
    result &= sample->GetBoxValue(z, outZ);

    vector.X = outX;
    vector.Y = outY;
    vector.Z = outZ;
    
    return result;
}

bool UNevarokMLSampleUtils::GetContinuousVector(UNevarokMLSample* sample, int x, int y, int z, FVector& vector)
{
    if (!sample)
    {
        return false;
    }

    float outX;
    float outY;
    float outZ;

    auto result = sample->GetContinuousValue(x, outX);
    result &= sample->GetContinuousValue(y, outY);
    result &= sample->GetContinuousValue(z, outZ);

    vector.X = outX;
    vector.Y = outY;
    vector.Z = outZ;

    return result;
}

bool UNevarokMLSampleUtils::SetMultiDiscreteArray(UNevarokMLSample* sample, int from, UPARAM(ref)const TArray<int64>& array, bool multicast)
{
    const auto num = array.Num();
    const auto shape = sample->GetSpace()->GetShape()[0];
    
    for (auto i = 0; i < num; i++)
    {
        const auto index = from + i;

        if (index >= shape)
        {
            return false;
        }
        
        sample->SetMultiDiscreteValue(index, array[i], multicast);
    }

    return true;
}
