/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Components/NevarokMLHitSensorComponent.h"

UNevarokMLHitSensorComponent::UNevarokMLHitSensorComponent()
{
}

void UNevarokMLHitSensorComponent::BeginPlay()
{
    Super::BeginPlay();

    GetOwner()->OnActorHit.AddDynamic(this, &UNevarokMLHitSensorComponent::OnActorHit);
}

void UNevarokMLHitSensorComponent::ResetHits()
{
    _hitsCount = 0;
    _allHitTags.Empty();
}

bool UNevarokMLHitSensorComponent::ContainsHitTag(const FName tag) const
{
    return _allHitTags.Contains(tag);
}

int UNevarokMLHitSensorComponent::GetHitsCount() const
{
    return _hitsCount;
}

bool UNevarokMLHitSensorComponent::IsHit() const
{
    return _hitsCount > 0;
}

void UNevarokMLHitSensorComponent::OnActorHit(AActor* selfActor,
                                              AActor* otherActor,
                                              FVector normalImpulse,
                                              const FHitResult& hit)
{
    for (auto tag : otherActor->Tags)
    {
        _allHitTags.AddUnique(tag);
    }

    for (auto tag : otherActor->Tags)
    {
        if (_ignoreHitTags.Contains(tag))
        {
            return;
        }
    }

    if (_hitTags.Num() == 0)
    {
        _hitsCount++;
        return;
    }

    for (auto tag : _hitTags)
    {
        if (otherActor->ActorHasTag(tag))
        {
            _hitsCount++;
            return;
        }
    }
}
