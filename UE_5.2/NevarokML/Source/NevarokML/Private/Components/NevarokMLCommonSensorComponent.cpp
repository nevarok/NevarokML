/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Components/NevarokMLCommonSensorComponent.h"
#include "Utils/NevarokMLLogUtils.h"

UNevarokMLCommonSensorComponent::UNevarokMLCommonSensorComponent()
{
}

void UNevarokMLCommonSensorComponent::BeginPlay()
{
    Super::BeginPlay();
}

void UNevarokMLCommonSensorComponent::SampleBoxVelocity(UNevarokMLSample* sample,
                                                        const float multiplier,
                                                        const float maxSize,
                                                        const FNevarokMLIndex2D xVelocityIndex,
                                                        const FNevarokMLIndex2D yVelocityIndex,
                                                        const FNevarokMLIndex2D zVelocityIndex,
                                                        const FNevarokMLIndex2D xDirectionIndex,
                                                        const FNevarokMLIndex2D yDirectionIndex,
                                                        const FNevarokMLIndex2D zDirectionIndex,
                                                        const FNevarokMLIndex2D lengthIndex,
                                                        const bool multicast,
                                                        const bool debug,
                                                        const float debugDuration,
                                                        const FLinearColor debugColor,
                                                        FVector& velocity,
                                                        FVector& direction,
                                                        float& length)
{
    velocity = (GetOwner()->GetVelocity() * multiplier).GetClampedToMaxSize(maxSize);
    direction = velocity.GetSafeNormal();
    length = velocity.Length();

    if(debug)
    {
        auto text = FString::Printf(TEXT("VEL [X: %.3f Y: %.3f Z: %.3f]"), velocity.X,  velocity.Y, velocity.Z);
        text.Append(FString::Printf(TEXT("\nDIR [X: %.3f Y: %.3f Z: %.3f]"), direction.X,  direction.Y, direction.Z));
        text.Append(FString::Printf(TEXT("\nLEN [%.3f]"), length));

        UNevarokMLLogUtils::DrawDebugString(GetOwner(), text, debugColor, debugDuration);
    }
    
    if (xVelocityIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(xVelocityIndex, velocity.X, multicast);
    }

    if (yVelocityIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(yVelocityIndex, velocity.Y, multicast);
    }

    if (zVelocityIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(zVelocityIndex, velocity.Z, multicast);
    }

    if (xDirectionIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(xDirectionIndex, direction.X, multicast);
    }

    if (yDirectionIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(yDirectionIndex, direction.Y, multicast);
    }

    if (zDirectionIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(zDirectionIndex, direction.Z, multicast);
    }

    if (lengthIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(lengthIndex, length, multicast);
    }
}

void UNevarokMLCommonSensorComponent::SampleBoxRotation(UNevarokMLSample* sample,
                                                     const float multiplier,
                                                     const FNevarokMLIndex2D pitch,
                                                     const FNevarokMLIndex2D yaw,
                                                     const FNevarokMLIndex2D roll,
                                                     const bool multicast,
                                                     const bool debug,
                                                     const float debugDuration,
                                                     const FLinearColor debugColor,
                                                     FRotator& rotator)
{
    rotator = GetOwner()->GetActorRotation() * multiplier;


    if(debug)
    {
        const auto text = FString::Printf(TEXT("P[%.3f] Y[%.3f] R[%.3f]"), rotator.Pitch, rotator.Yaw, rotator.Roll);

        UNevarokMLLogUtils::DrawDebugString(GetOwner(), text, debugColor, debugDuration);
    }
    
    if (pitch.GreaterOrEqualZero())
    {
        sample->SetBoxValue(pitch, rotator.Pitch, multicast);
    }
    
    if (yaw.GreaterOrEqualZero())
    {
        sample->SetBoxValue(yaw, rotator.Yaw, multicast);
    }
    
    if (roll.GreaterOrEqualZero())
    {
        sample->SetBoxValue(roll, rotator.Roll, multicast);
    }
}

void UNevarokMLCommonSensorComponent::SampleBoxForward(UNevarokMLSample* sample,
                                                       const FNevarokMLIndex2D xIndex,
                                                       const FNevarokMLIndex2D yIndex,
                                                       const FNevarokMLIndex2D zIndex,
                                                       const bool multicast,
                                                       const bool debug,
                                                       const float debugDuration,
                                                       const FLinearColor debugColor,
                                                       FVector& forward)
{
    forward = GetOwner()->GetActorForwardVector();

    if(debug)
    {
        const auto text = FString::Printf(TEXT("FWD [X: %.3f Y: %.3f Z: %.3f]"), forward.X, forward.Y, forward.Z);

        UNevarokMLLogUtils::DrawDebugString(GetOwner(), text, debugColor, debugDuration);
    }
    
    if (xIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(xIndex, forward.X, multicast);
    }

    if (yIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(yIndex, forward.Y, multicast);
    }

    if (zIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(zIndex, forward.Z, multicast);
    }
}

void UNevarokMLCommonSensorComponent::SampleBoxDifference(UNevarokMLSample* sample,
                                                         const AActor* to,
                                                         const float multiplier,
                                                         const float maxSize,
                                                         const FNevarokMLIndex2D xDifferenceIndex,
                                                         const FNevarokMLIndex2D yDifferenceIndex,
                                                         const FNevarokMLIndex2D zDifferenceIndex,
                                                         const FNevarokMLIndex2D xDirectionIndex,
                                                         const FNevarokMLIndex2D yDirectionIndex,
                                                         const FNevarokMLIndex2D zDirectionIndex,
                                                         const FNevarokMLIndex2D lengthIndex,
                                                         const bool multicast,
                                                         const bool debug,
                                                         const float debugDuration,
                                                         const FLinearColor debugColor,
                                                         FVector& difference,
                                                         FVector& direction,
                                                         float& length)
{
    difference = ((to->GetActorLocation() - GetOwner()->GetActorLocation()) * multiplier).GetClampedToMaxSize(maxSize);
    direction = difference.GetSafeNormal();
    length = difference.Length();

    if(debug)
    {
        FString text;

        if (xDifferenceIndex.GreaterOrEqualZero() || yDifferenceIndex.GreaterOrEqualZero() || zDifferenceIndex.GreaterOrEqualZero())
        {
            text.Append(FString::Printf(TEXT("[%s][%s][%s] DIF [X: %.3f Y: %.3f Z: %.3f]\n"), *xDifferenceIndex.ToString(), *yDifferenceIndex.ToString(), *zDifferenceIndex.ToString(), difference.X,  difference.Y, difference.Z));
        }

        if (xDirectionIndex.GreaterOrEqualZero() || yDirectionIndex.GreaterOrEqualZero() || zDirectionIndex.GreaterOrEqualZero())
        {
            text.Append(FString::Printf(TEXT("[%s][%s][%s] DIR [X: %.3f Y: %.3f Z: %.3f]\n"), *xDirectionIndex.ToString(), *yDirectionIndex.ToString(), *zDirectionIndex.ToString(), direction.X,  direction.Y, direction.Z));
        }

        if (lengthIndex.GreaterOrEqualZero())
        {
            text.Append(FString::Printf(TEXT("[%s] LEN [%.3f]"), *lengthIndex.ToString(), length));
        }
        
        UNevarokMLLogUtils::DrawDebugString(GetOwner(), text, debugColor, debugDuration);
    }
    
    if (xDifferenceIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(xDifferenceIndex, difference.X, multicast);
    }

    if (yDifferenceIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(yDifferenceIndex, difference.Y, multicast);
    }

    if (zDifferenceIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(zDifferenceIndex, difference.Z, multicast);
    }

    if (xDirectionIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(xDirectionIndex, direction.X, multicast);
    }

    if (yDirectionIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(yDirectionIndex, direction.Y, multicast);
    }

    if (zDirectionIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(zDirectionIndex, direction.Z, multicast);
    }

    if (lengthIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(lengthIndex, length, multicast);
    }
}
