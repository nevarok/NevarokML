/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Components/NevarokMLBoxTriggerComponent.h"

UNevarokMLBoxTriggerComponent::UNevarokMLBoxTriggerComponent()
{
    OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnTriggerBeginOverlap);
}

void UNevarokMLBoxTriggerComponent::OnTriggerBeginOverlap(UPrimitiveComponent* overlappedComp, AActor* otherActor,
                                                          UPrimitiveComponent* otherComp, int32 otherBodyIndex,
                                                          bool bFromSweep, const FHitResult& sweepResult)
{
    if (_triggerTags.Num() > 0)
    {
        for (const auto& tag : _triggerTags)
        {
            if (otherActor->ActorHasTag(tag))
            {
                _counter++;
                return;
            }
        }
        return;
    }
    _counter++;
}
