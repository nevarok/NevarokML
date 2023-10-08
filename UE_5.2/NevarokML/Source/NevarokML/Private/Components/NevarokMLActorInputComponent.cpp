/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Components/NevarokMLActorInputComponent.h"
#include "Engine/World.h"

UNevarokMLActorInputComponent::UNevarokMLActorInputComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

bool UNevarokMLActorInputComponent::AddDiscreteRotationInput(const int64 value, const int condition, const FRotator rate)
{
    if(value != condition)
    {
        return false;
    }

    auto rotation = GetOwner()->GetActorRotation();
    rotation += rate * GetWorld()->GetDeltaSeconds();
    GetOwner()->SetActorRotation(rotation);
    
    return true;
}
