/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Components/NevarokMLCharacterInputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"

const FVector LEFT = FVector::LeftVector;
const FVector FWD_LEFT = (FVector::ForwardVector + FVector::LeftVector).GetSafeNormal();
const FVector FWD = FVector::ForwardVector;
const FVector FWD_RIGHT = (FVector::ForwardVector + FVector::RightVector).GetSafeNormal();
const FVector RIGHT = FVector::RightVector;
const FVector BWD_RIGHT = (FVector::BackwardVector + FVector::RightVector).GetSafeNormal();
const FVector BWD = FVector::BackwardVector;
const FVector BWD_LEFT = (FVector::BackwardVector + FVector::LeftVector).GetSafeNormal();

UNevarokMLCharacterInputComponent::UNevarokMLCharacterInputComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UNevarokMLCharacterInputComponent::EnableMovementTick(const bool enable) const
{
    _character->GetMovementComponent()->PrimaryComponentTick.SetTickFunctionEnable(enable);
}

void UNevarokMLCharacterInputComponent::BeginPlay()
{
    Super::BeginPlay();
}

void UNevarokMLCharacterInputComponent::PostLoad()
{
    Super::PostLoad();

    _character = Cast<ACharacter>(GetOwner());
}

void UNevarokMLCharacterInputComponent::ForceMovementTick() const
{
    _character->GetCharacterMovement()->TickComponent(GetWorld()->DeltaTimeSeconds, LEVELTICK_All, nullptr);
}

bool UNevarokMLCharacterInputComponent::AddDiscreteWorldMoveInput(const int64 value,
                                                                  const int left,
                                                                  const int forwardLeft,
                                                                  const int forward,
                                                                  const int forwardRight,
                                                                  const int right,
                                                                  const int backwardRight,
                                                                  const int backward,
                                                                  const int backwardLeft,
                                                                  const bool groundedOnly)
{
    auto result = false;
    
    if (!_character)
    {
        return result;
    }

    if (groundedOnly && !GetIsGrounded())
    {
        return result;
    }

    if (value == left)
    {
        _character->AddMovementInput(LEFT);
        result = true;
    }

    if (value == forwardLeft)
    {
        _character->AddMovementInput(FWD_LEFT);
        result = true;
    }

    if (value == forward)
    {
        _character->AddMovementInput(FWD);
        result = true;
    }

    if (value == forwardRight)
    {
        _character->AddMovementInput(FWD_RIGHT);
        result = true;
    }

    if (value == right)
    {
        _character->AddMovementInput(RIGHT);
        result = true;
    }

    if (value == backwardRight)
    {
        _character->AddMovementInput(BWD_RIGHT);
        result = true;
    }

    if (value == backward)
    {
        _character->AddMovementInput(BWD);
        result = true;
    }

    if (value == backwardLeft)
    {
        _character->AddMovementInput(BWD_LEFT);
        result = true;
    }

    return result;
}

bool UNevarokMLCharacterInputComponent::AddDiscreteAxisMoveInput(const int64 value,
                                                                 const int left,
                                                                 const int forwardLeft,
                                                                 const int forward,
                                                                 const int forwardRight,
                                                                 const int right,
                                                                 const int backwardRight,
                                                                 const int backward,
                                                                 const int backwardLeft,
                                                                 const bool groundedOnly)
{
    auto result = false;
    
    if (!_character)
    {
        return result;
    }

    if (groundedOnly && !GetIsGrounded())
    {
        return result;
    }

    const auto fwdVector = _character->GetActorForwardVector();
    const auto bwdVector = -fwdVector;
    
    const auto rightVector = _character->GetActorRightVector();
    const auto leftVector = -rightVector;
    
    if (value == left)
    {
        _character->AddMovementInput(leftVector);
        result = true;
    }

    if (value == forwardLeft)
    {
        const auto fwdLeftVector = (fwdVector + leftVector).GetSafeNormal();
        _character->AddMovementInput(fwdLeftVector);
        result = true;
    }

    if (value == forward)
    {
        _character->AddMovementInput(fwdVector);
        result = true;
    }

    if (value == forwardRight)
    {
        const auto fwdRightVector = (fwdVector + rightVector).GetSafeNormal();
        _character->AddMovementInput(fwdRightVector);
        result = true;
    }

    if (value == right)
    {
        _character->AddMovementInput(rightVector);
        result = true;
    }

    if (value == backwardRight)
    {
        const auto bwdRightVector = (bwdVector + rightVector).GetSafeNormal();
        _character->AddMovementInput(bwdRightVector);
        result = true;
    }

    if (value == backward)
    {
        _character->AddMovementInput(bwdVector);
        result = true;
    }

    if (value == backwardLeft)
    {
        const auto bwdLeftVector = (bwdVector + leftVector).GetSafeNormal();
        _character->AddMovementInput(bwdLeftVector);
        result = true;
    }

    return result;
}

bool UNevarokMLCharacterInputComponent::AddDiscreteTurnInput(const int64 value,
                                                             const int left,
                                                             const int right,
                                                             const float turnRate,
                                                             const bool groundedOnly)
{
    auto result = false;

    if (!_character)
    {
        return result;
    }

    if (groundedOnly && !GetIsGrounded())
    {
        return result;
    }

    auto rotation = _character->GetActorRotation();

    if (value == left)
    {
        rotation.Yaw -= turnRate * GetWorld()->GetDeltaSeconds();
        result = true;
    }

    if (value == right)
    {
        rotation.Yaw += turnRate * GetWorld()->GetDeltaSeconds();
        result = true;
    }

    _character->SetActorRotation(rotation);
    return result;
}

bool UNevarokMLCharacterInputComponent::AddDiscreteJumpInput(const int64 value,
                                                             const int jump,
                                                             const bool groundedOnly,
                                                             const bool simulateTick)
{
    if (!_character)
    {
        return false;
    }

    if (value != jump)
    {
        return false;
    }

    if (groundedOnly && !GetIsGrounded())
    {
        return false;
    }

    _character->Jump();

    if (simulateTick)
    {
        _character->GetCharacterMovement()->TickComponent(GetWorld()->DeltaTimeSeconds, LEVELTICK_All, nullptr);
    }

    return true;
}

void UNevarokMLCharacterInputComponent::ResetInput()
{
    if (auto* movementComponent = _character->GetCharacterMovement())
    {
        movementComponent->Velocity = FVector::ZeroVector;
        movementComponent->RequestDirectMove(FVector::ZeroVector, false);
        movementComponent->AddInputVector(FVector::ZeroVector);
    }
}

bool UNevarokMLCharacterInputComponent::GetIsGrounded() const
{
    if (!_character)
    {
        return false;
    }

    return _character->GetCharacterMovement()->IsMovingOnGround();
}
