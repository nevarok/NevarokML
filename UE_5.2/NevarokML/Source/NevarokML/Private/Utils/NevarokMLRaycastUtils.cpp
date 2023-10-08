/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Utils/NevarokMLRaycastUtils.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

TArray<FNevarokMLRaycastData> UNevarokMLRaycastUtils::RaycastRange(AActor* owner,
                                                                   float vAngleRange,
                                                                   float hAngleRange,
                                                                   float vAngleOffset,
                                                                   float hAngleOffset,
                                                                   int vNum,
                                                                   int hNum,
                                                                   float length,
                                                                   ETraceTypeQuery channel,
                                                                   bool debug,
                                                                   FLinearColor debugTraceColor,
                                                                   FLinearColor debugTraceHitColor,
                                                                   float debugDrawTime)
{
    vAngleRange = FMath::Clamp(FMath::Abs(vAngleRange), 0.0, 360.0);
    hAngleRange = FMath::Clamp(FMath::Abs(hAngleRange), 0.0, 360.0);

    const auto vStep = vAngleRange / static_cast<float>(vNum - 1);
    const auto hStep = hAngleRange / static_cast<float>(hNum - 1);

    const auto start = owner->GetActorLocation();
    auto initialRotation = owner->GetActorRotation();

    initialRotation.Yaw -= hAngleRange * 0.5f + hAngleOffset;
    initialRotation.Pitch -= vAngleRange * 0.5f + vAngleOffset;

    TArray<FNevarokMLRaycastData> result = TArray<FNevarokMLRaycastData>();
    result.Reserve(vNum * hNum);

    for (auto x = 0; x < hNum; ++x)
    {
        auto rotation = initialRotation;

        rotation.Yaw += x * hStep;

        for (auto y = 0; y < vNum; ++y)
        {
            rotation.Pitch = initialRotation.Pitch + y * vStep;

            result.Add(Raycast(owner,
                               rotation,
                               start,
                               length,
                               channel,
                               debug,
                               debugTraceColor,
                               debugTraceHitColor,
                               debugDrawTime));
        }
    }

    return result;
}

TArray<FNevarokMLRaycastData> UNevarokMLRaycastUtils::RaycastHRange(AActor* owner,
                                                                    float angleRange,
                                                                    int num,
                                                                    float length,
                                                                    ETraceTypeQuery channel,
                                                                    bool debug,
                                                                    FLinearColor debugTraceColor,
                                                                    FLinearColor debugTraceHitColor,
                                                                    float debugDrawTime)
{
    angleRange = FMath::Clamp(FMath::Abs(angleRange), 0.0, 360.0);

    const auto step = angleRange / static_cast<float>(num - 1);
    const auto start = owner->GetActorLocation();
    auto rotation = owner->GetActorRotation();

    rotation.Yaw -= angleRange * 0.5f;

    TArray<FNevarokMLRaycastData> result = TArray<FNevarokMLRaycastData>();
    result.Reserve(num);

    result.Add(Raycast(owner,
                       rotation,
                       start,
                       length,
                       channel,
                       debug,
                       debugTraceColor,
                       debugTraceHitColor,
                       debugDrawTime));

    for (auto i = 1; i < num; ++i)
    {
        rotation.Yaw += step;

        result.Add(Raycast(owner,
                           rotation,
                           start,
                           length,
                           channel,
                           debug,
                           debugTraceColor,
                           debugTraceHitColor,
                           debugDrawTime));
    }

    return result;
}

TArray<FNevarokMLRaycastData> UNevarokMLRaycastUtils::RaycastVRange(AActor* owner,
                                                                    float angleRange,
                                                                    int num,
                                                                    float length,
                                                                    ETraceTypeQuery channel,
                                                                    bool debug,
                                                                    FLinearColor debugTraceColor,
                                                                    FLinearColor debugTraceHitColor,
                                                                    float debugDrawTime)
{
    angleRange = FMath::Clamp(FMath::Abs(angleRange), 0.0, 360.0);

    const auto step = angleRange / static_cast<float>(num - 1);
    const auto start = owner->GetActorLocation();
    auto rotation = owner->GetActorRotation();

    rotation.Pitch -= angleRange * 0.5f;

    TArray<FNevarokMLRaycastData> result = TArray<FNevarokMLRaycastData>();
    result.Reserve(num);

    result.Add(Raycast(owner,
                       rotation,
                       start,
                       length,
                       channel,
                       debug,
                       debugTraceColor,
                       debugTraceHitColor,
                       debugDrawTime));

    for (auto i = 1; i < num; ++i)
    {
        rotation.Pitch += step;

        result.Add(Raycast(owner,
                           rotation,
                           start,
                           length,
                           channel,
                           debug,
                           debugTraceColor,
                           debugTraceHitColor,
                           debugDrawTime));
    }

    return result;
}

TArray<FNevarokMLRaycastData> UNevarokMLRaycastUtils::RaycastFromTo(AActor* owner,
                                                                    const FVector& fromStartLocation,
                                                                    const FVector& fromEndLocation,
                                                                    const FVector& toStartLocation,
                                                                    const FVector& toEndLocation,
                                                                    const int count,
                                                                    const ETraceTypeQuery channel,
                                                                    bool debug,
                                                                    const FLinearColor debugTraceColor,
                                                                    const FLinearColor debugTraceHitColor,
                                                                    const float debugDrawTime)
{
    auto result = TArray<FNevarokMLRaycastData>();

    if (!owner)
    {
        return result;
    }
    
    const auto fromDiff = fromEndLocation - fromStartLocation;
    const auto fromLength = fromDiff.Length();
    const auto fromDirection = fromDiff.GetSafeNormal();

    const auto toDiff = toEndLocation - toStartLocation;
    const auto toLength = toDiff.Length();
    const auto toDirection = toDiff.GetSafeNormal();
    const auto debugTrace = debug ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None;
    
    const auto num = FMath::Max(count, 1);
    const auto floatNum = static_cast<float>(num);

    // result.Reserve(num);
    
    for(auto i = 0; i <= count; i++)
    {
        const auto alpha = i / floatNum;

        const auto direction = UKismetMathLibrary::VLerp(fromDirection, toDirection, alpha).GetSafeNormal();
        const auto length = UKismetMathLibrary::Lerp(fromLength, toLength, alpha);
        
        const auto start = UKismetMathLibrary::VLerp(fromStartLocation, toStartLocation, alpha);
        const auto end = start + direction * length;

        auto raycastData = FNevarokMLRaycastData();
        
        if (UKismetSystemLibrary::LineTraceSingle(
            owner->GetWorld(),
            start,
            end,
            channel,
            true,
            {owner},
            debugTrace,
            raycastData.Hit,
            true,
            debugTraceColor,
            debugTraceHitColor,
            debugDrawTime))
        {
            raycastData.HitLocation = raycastData.Hit.Location;
            raycastData.HitNormal = raycastData.Hit.Normal;
            raycastData.HitDistance = raycastData.Hit.Distance;
            raycastData.IsHit = true;

            result.Add(raycastData);
        }
    }

    return result;
}

FNevarokMLRaycastData UNevarokMLRaycastUtils::Raycast(AActor* owner,
                                                      const FRotator& rotation,
                                                      const FVector& start,
                                                      float length,
                                                      const ETraceTypeQuery channel,
                                                      bool debug,
                                                      const FLinearColor debugTraceColor,
                                                      const FLinearColor debugTraceHitColor,
                                                      const float debugDrawTime)
{
    const auto direction = rotation.Vector();
    const auto end = start + direction * length;
    auto raycastData = FNevarokMLRaycastData();
    const auto debugTrace = debug ? EDrawDebugTrace::ForOneFrame : EDrawDebugTrace::None;

    raycastData.HitDirection = direction;
    raycastData.HitDistance = length;
    
    if (UKismetSystemLibrary::LineTraceSingle(
        owner->GetWorld(),
        start,
        end,
        channel,
        true,
        {owner},
        debugTrace,
        raycastData.Hit,
        true,
        debugTraceColor,
        debugTraceHitColor,
        debugDrawTime))
    {
        raycastData.HitLocation = raycastData.Hit.Location;
        raycastData.HitNormal = raycastData.Hit.Normal;
        raycastData.HitDistance = raycastData.Hit.Distance;
        raycastData.IsHit = true;
    }

    return raycastData;
}

float UNevarokMLRaycastUtils::GetAngleBetweenVectors(const FVector& aNormal, const FVector& bNormal)
{
    return FMath::RadiansToDegrees(FMath::Acos(FVector::DotProduct(aNormal, bNormal)));
}
