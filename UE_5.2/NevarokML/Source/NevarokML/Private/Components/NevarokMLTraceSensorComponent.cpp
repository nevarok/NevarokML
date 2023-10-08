/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Components/NevarokMLTraceSensorComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Utils/NevarokMLLogUtils.h"

const FName NONE_TAG = "NONE";

UNevarokMLTraceSensorComponent::UNevarokMLTraceSensorComponent()
{
}

void UNevarokMLTraceSensorComponent::SampleBoxLineTrace(UNevarokMLSample* sample,
                                                        const float traceLength,
                                                        const ETraceTypeQuery traceChannel,
                                                        const TArray<AActor*>& ignoreActors,
                                                        const TArray<FName>& tags,
                                                        const float differenceMultiplier,
                                                        const float velocityMultiplier,
                                                        const FNevarokMLIndex2D tagIndex,
                                                        const FNevarokMLIndex2D velocityLengthIndex,
                                                        const FNevarokMLIndex2D differenceLengthIndex,
                                                        const FNevarokMLIndex2D xVelocityIndex,
                                                        const FNevarokMLIndex2D yVelocityIndex,
                                                        const FNevarokMLIndex2D zVelocityIndex,
                                                        const FNevarokMLIndex2D xVelocityDirectionIndex,
                                                        const FNevarokMLIndex2D yVelocityDirectionIndex,
                                                        const FNevarokMLIndex2D zVelocityDirectionIndex,
                                                        const FNevarokMLIndex2D xDirectionIndex,
                                                        const FNevarokMLIndex2D yDirectionIndex,
                                                        const FNevarokMLIndex2D zDirectionIndex,
                                                        const FNevarokMLIndex2D xDifferenceIndex,
                                                        const FNevarokMLIndex2D yDifferenceIndex,
                                                        const FNevarokMLIndex2D zDifferenceIndex,
                                                        const FNevarokMLIndex2D xNormalIndex,
                                                        const FNevarokMLIndex2D yNormalIndex,
                                                        const FNevarokMLIndex2D zNormalIndex,
                                                        const bool multicast,
                                                        bool& isHit,
                                                        float& tag,
                                                        float& velocityLength,
                                                        float& differenceLength,
                                                        FVector& velocity,
                                                        FVector& velocityDirection,
                                                        FVector& direction,
                                                        FVector& difference,
                                                        FVector& normal,
                                                        const bool debugTrace,
                                                        const bool debugLog,
                                                        const float debugDuration,
                                                        const FLinearColor debugColor)
{
    direction = GetForwardVector();
    const auto start = GetComponentLocation();
    const auto end = start + direction * traceLength;
    const auto drawDebugType = debugTrace ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None;

    velocity = FVector::ZeroVector;
    velocityDirection = FVector::ZeroVector;
    difference = (end - start) * differenceMultiplier;
    normal = FVector::ZeroVector;
    
    tag = -1.0;
    velocityLength = 0.0;
    differenceLength = difference.Length();
    isHit = false;

    auto owner = GetOwner();

    FHitResult hitResult;

    if (UKismetSystemLibrary::LineTraceSingle(GetWorld(), start, end, traceChannel, true, ignoreActors,
                                                      drawDebugType, hitResult, true, TraceColor, TraceHitColor,
                                                      debugDuration))
    {
        const auto actor = hitResult.GetActor();
        const auto diff = hitResult.ImpactPoint - start;
        velocity = actor->GetVelocity() * velocityMultiplier;
        velocityDirection = velocity.GetSafeNormal();
        
        difference = diff * differenceMultiplier;
        normal = hitResult.ImpactNormal;
        
        isHit = true;
        tag = 0.0;
        velocityLength = velocity.Length();
        differenceLength = difference.Length();
        
        auto tagName = NONE_TAG.ToString();
        
        for (auto i = 0; i < tags.Num(); ++i)
        {
            if (actor->ActorHasTag(tags[i]))
            {
                tag = i + 1;
                tagName = tags[i].ToString();
            }
        }

        if(debugLog)
        {
            FString text;
            if (xVelocityIndex.GreaterOrEqualZero() || yVelocityIndex.GreaterOrEqualZero() || zVelocityIndex.GreaterOrEqualZero())
            {
                text.Append(FString::Printf(TEXT("VEL [X: %.3f Y: %.3f Z: %.3f]"),
                                            xVelocityIndex.GreaterOrEqualZero() ? velocity.X : 0.0,
                                            yVelocityIndex.GreaterOrEqualZero() ? velocity.Y : 0.0,
                                            zVelocityIndex.GreaterOrEqualZero() ? velocity.Z : 0.0));
            }
            if (xVelocityDirectionIndex.GreaterOrEqualZero() || yVelocityDirectionIndex.GreaterOrEqualZero() || zVelocityDirectionIndex.GreaterOrEqualZero())
            {
                text.Append(FString::Printf(TEXT("VDIR [X: %.3f Y: %.3f Z: %.3f]"),
                                            xVelocityDirectionIndex.GreaterOrEqualZero() ? velocityDirection.X : 0.0,
                                            yVelocityDirectionIndex.GreaterOrEqualZero() ? velocityDirection.Y : 0.0,
                                            zVelocityDirectionIndex.GreaterOrEqualZero() ? velocityDirection.Z : 0.0));
            }

            if (xDirectionIndex.GreaterOrEqualZero() || yDirectionIndex.GreaterOrEqualZero() || zDirectionIndex.GreaterOrEqualZero())
            {
                text.Append(FString::Printf(TEXT("\nDIR [X: %.3f Y: %.3f Z: %.3f]"),
                                            xDirectionIndex.GreaterOrEqualZero() ? direction.X : 0.0,
                                            yDirectionIndex.GreaterOrEqualZero() ? direction.Y : 0.0,
                                            zDirectionIndex.GreaterOrEqualZero() ? direction.Z : 0.0));
            }

            if (xDifferenceIndex.GreaterOrEqualZero() || yDifferenceIndex.GreaterOrEqualZero() || zDifferenceIndex.GreaterOrEqualZero())
            {
                text.Append(FString::Printf(TEXT("\nDIF [X: %.3f Y: %.3f Z: %.3f]"),
                                            xDifferenceIndex.GreaterOrEqualZero() ? difference.X : 0.0,
                                            yDifferenceIndex.GreaterOrEqualZero() ? difference.Y : 0.0,
                                            zDifferenceIndex.GreaterOrEqualZero() ? difference.Z : 0.0));
            }

            if (xNormalIndex.GreaterOrEqualZero() || yNormalIndex.GreaterOrEqualZero() || zNormalIndex.GreaterOrEqualZero())
            {
                text.Append(FString::Printf(TEXT("\nNOR [X: %.3f Y: %.3f Z: %.3f]"),
                                            xNormalIndex.GreaterOrEqualZero() ? normal.X : 0.0,
                                            yNormalIndex.GreaterOrEqualZero() ? normal.Y : 0.0,
                                            zNormalIndex.GreaterOrEqualZero() ? normal.Z : 0.0));
            }

            if (velocityLengthIndex.GreaterOrEqualZero())
            {
                text.Append(FString::Printf(TEXT("\nVLEN [%.3f]"), velocityLength));
            }

            if (differenceLengthIndex.GreaterOrEqualZero())
            {
                text.Append(FString::Printf(TEXT("\nDLEN [%.3f]"), differenceLength));
            }

            if (tagIndex.GreaterOrEqualZero())
            {
                text.Append(FString::Printf(TEXT("\nTAG [%.0f, %s]"), tag, *tagName));
            }

            UNevarokMLLogUtils::DrawDebugString(owner, text, debugColor, debugDuration, diff);
        }
    }
    
    if(tagIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(tagIndex, tag, multicast);
    }
    
    if(velocityLengthIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(velocityLengthIndex, velocityLength, multicast);
    }
    
    if(differenceLengthIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(differenceLengthIndex, differenceLength, multicast);
    }
    
    if(xVelocityIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(xVelocityIndex, velocity.X, multicast);
    }
    
    if(yVelocityIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(yVelocityIndex, velocity.Y, multicast);
    }
    
    if(zVelocityIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(zVelocityIndex, velocity.Z, multicast);
    }
    
    if(xVelocityDirectionIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(xVelocityDirectionIndex, velocityDirection.X, multicast);
    }
    
    if(yVelocityDirectionIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(yVelocityDirectionIndex, velocityDirection.Y, multicast);
    }
    
    if(zVelocityDirectionIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(zVelocityDirectionIndex, velocityDirection.Z, multicast);
    }
    
    if(xDirectionIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(xDirectionIndex, direction.X, multicast);
    }
    
    if(yDirectionIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(yDirectionIndex, direction.Y, multicast);
    }
    
    if(zDirectionIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(zDirectionIndex, direction.Z, multicast);
    }
    
    if(xDifferenceIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(xDifferenceIndex, difference.X, multicast);
    }
    
    if(yDifferenceIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(yDifferenceIndex, difference.Y, multicast);
    }
    
    if(zDifferenceIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(zDifferenceIndex, difference.Z, multicast);
    }
    
    if(xNormalIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(xNormalIndex, normal.X, multicast);
    }
    
    if(yNormalIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(yNormalIndex, normal.Y, multicast);
    }
    
    if(zNormalIndex.GreaterOrEqualZero())
    {
        sample->SetBoxValue(zNormalIndex, normal.Z, multicast);
    }
}
