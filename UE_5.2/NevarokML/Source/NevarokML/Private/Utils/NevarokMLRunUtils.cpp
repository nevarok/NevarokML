/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Utils/NevarokMLRunUtils.h"
#include "Settings/NevarokMLSettings.h"
#include "Utils/NevarokMLLogUtils.h"
#include "Utils/NevarokMLPathUtils.h"

const FString CMD = TEXT("cmd.exe");
const FString EXE_EXT = TEXT("exe");

FProcHandle UNevarokMLRunUtils::RunExe(const FString& address, const int port, const int verbose)
{
    const auto settings = GetMutableDefault<UNevarokMLSettings>();

    if (!FPaths::FileExists(settings->BackendExePath.FilePath)
        || FPaths::GetExtension(settings->BackendExePath.FilePath) != EXE_EXT)
    {
        const auto fullPath = FPaths::ConvertRelativePathToFull(settings->BackendExePath.FilePath);
        UNevarokMLLogUtils::LogError(FString::Printf(TEXT("ERROR EXE PATH: %s"), *fullPath),
                                     true, 99999);
        return FProcHandle();
    }

    auto parameters = FString::Printf(TEXT("/K CALL \"%s\""), *settings->BackendExePath.FilePath);
    parameters.Append(FString::Printf(TEXT(" %s"), *address));
    parameters.Append(FString::Printf(TEXT(" %d"), port));
    parameters.Append(FString::Printf(TEXT(" %d"), verbose));

    auto handle = FPlatformProcess::CreateProc(*CMD,
                                               *parameters,
                                               false,
                                               false,
                                               false,
                                               nullptr,
                                               0,
                                               nullptr,
                                               nullptr);
    return handle;
}

bool UNevarokMLRunUtils::RunPython(const FString& script, const FString& activateBatPath, const FString& environment,
                                   const FString& address, const int port)
{
    const auto scriptAbsolutePath = UNevarokMLPathUtils::GetPythonScriptPath(script);

    auto parameters = FString::Printf(TEXT("/K CALL \"%s\""), *activateBatPath);
    parameters.Append(FString::Printf(TEXT("& activate %s"), *environment));
    parameters.Append(FString::Printf(TEXT("& python \"%s\""), *scriptAbsolutePath));
    parameters.Append(FString::Printf(TEXT(" %s"), *address));
    parameters.Append(FString::Printf(TEXT(" %d"), port));

    const auto handle = FPlatformProcess::CreateProc(*CMD,
                                                     *parameters,
                                                     false,
                                                     false,
                                                     false,
                                                     nullptr,
                                                     0,
                                                     nullptr,
                                                     nullptr);

    return handle.IsValid();
}


bool UNevarokMLRunUtils::RunUnzip(const FString& from, const FString& to)
{
    const auto parameters = FString::Printf(TEXT("/K powershell -command \"Expand-Archive -Path '%s' -DestinationPath '%s'\""), *from, *to);
    auto handle = FPlatformProcess::CreateProc(*CMD,
                                           *parameters,
                                           true,
                                           false,
                                           false,
                                           nullptr,
                                           0,
                                           nullptr,
                                           nullptr);
    if (handle.IsValid())
    {
        FPlatformProcess::WaitForProc(handle);
        int32 returnCode = 0;
        FPlatformProcess::GetProcReturnCode(handle, &returnCode);
        
        if (returnCode == 0)
        {
           return true; 
        }
    }

    return false;
}