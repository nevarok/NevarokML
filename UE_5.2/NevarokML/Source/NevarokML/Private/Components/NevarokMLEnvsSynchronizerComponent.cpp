/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Components/NevarokMLEnvsSynchronizerComponent.h"

UNevarokMLEnvsSynchronizerComponent::UNevarokMLEnvsSynchronizerComponent()
{
}

bool UNevarokMLEnvsSynchronizerComponent::IsRunning() const
{
    return _doneEnvs.Num() == 0;
}

bool UNevarokMLEnvsSynchronizerComponent::IsDone() const
{
    return _doneEnvs.Num() == _envs.Num(); 
}

bool UNevarokMLEnvsSynchronizerComponent::IsWait(const ANevarokMLEnv* env) const
{
    return _doneEnvs.Contains(env);
}

bool UNevarokMLEnvsSynchronizerComponent::IsOneOrMoreDone() const
{
    return _doneEnvs.Num() > 0;
}

void UNevarokMLEnvsSynchronizerComponent::SetDone(ANevarokMLEnv* env)
{
    if (!env)
    {
        return;
    }
    
    _doneEnvs.AddUnique(env);
}

void UNevarokMLEnvsSynchronizerComponent::ResetDone()
{
    _doneEnvs.Empty();
}

void UNevarokMLEnvsSynchronizerComponent::AddEnv(ANevarokMLEnv* env)
{
    _envs.AddUnique(env);
}

void UNevarokMLEnvsSynchronizerComponent::RemoveEnv(ANevarokMLEnv* env)
{
    _envs.Remove(env);
}
