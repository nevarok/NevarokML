/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Utils/NevarokMLLogUtils.h"
#include "Engine/Engine.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Settings/NevarokMLSettings.h"

static double EvalStartTime;

void UNevarokMLLogUtils::StartEval()
{
    EvalStartTime = FPlatformTime::Seconds();
}

void UNevarokMLLogUtils::EndEval(const FString& prefix, const bool display, const float time)
{
    const auto elapsed = FPlatformTime::Seconds() - EvalStartTime;
    const auto msg = FString::Printf(TEXT("[EVL]%s: %s %fs"), *UNevarokMLSettings::PLUGIN_NAME, *prefix, elapsed);
    UE_LOG(LogTemp, Error, TEXT("%s"), *msg);

    if(GEngine && display)
    {
        GEngine->AddOnScreenDebugMessage(-1, time, FColor::Magenta, msg);
    }
}

void UNevarokMLLogUtils::Log(const FString& msg, const bool display, const float time)
{
    const auto finalMsg = FString::Printf(TEXT("[LOG]%s: %s"), *UNevarokMLSettings::PLUGIN_NAME, *msg);
    UE_LOG(LogTemp, Log, TEXT("%s"), *finalMsg);
    
    if(GEngine && display)
    {
        GEngine->AddOnScreenDebugMessage(-1, time, FColor::Blue, finalMsg);
    }
}

void UNevarokMLLogUtils::LogError(const FString& msg, const bool display, const float time)
{
    UE_LOG(LogTemp, Error, TEXT("[ERR]%s: %s"), *UNevarokMLSettings::PLUGIN_NAME, *msg);

    const auto settings = GetMutableDefault<UNevarokMLSettings>();
    if (GEngine && (display || GetMutableDefault<UNevarokMLSettings>()->ForceDisplayWarnings))
    {
        GEngine->AddOnScreenDebugMessage(-1, settings->ForceDisplayWarnings ? settings->DisplayDuration : time, FColor::Red, msg);
    }
}

void UNevarokMLLogUtils::LogWarning(const FString& msg, const bool display, const float time)
{
    UE_LOG(LogTemp, Warning, TEXT("[WAR]%s: %s"), *UNevarokMLSettings::PLUGIN_NAME, *msg);
    
    const auto settings = GetMutableDefault<UNevarokMLSettings>();
    if (GEngine && (display || GetMutableDefault<UNevarokMLSettings>()->ForceDisplayWarnings))
    {
        GEngine->AddOnScreenDebugMessage(-1, settings->ForceDisplayWarnings ? settings->DisplayDuration : time, FColor::Yellow, msg);
    }
}

void UNevarokMLLogUtils::DrawDebugString(AActor* owner, const FString& text, const FLinearColor textColor, const float duration, const FVector textLocation)
{
    UKismetSystemLibrary::DrawDebugString(owner, textLocation, text, owner, textColor, duration);
}
