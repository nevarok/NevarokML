/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Utils/NevarokMLPathUtils.h"
#include "Settings/NevarokMLSettings.h"
#include "Misc/Paths.h"
#include "Interfaces/IPluginManager.h"

const auto SCRIPTS_DIR = TEXT("Python/Scripts");

FString UNevarokMLPathUtils::GetPythonScriptPath(const FString& relativePath)
{
    const auto contentDir = GetContentDir();
    return FString::Printf(TEXT("%s/%s/%s"), *contentDir, SCRIPTS_DIR, *relativePath);
}

FString UNevarokMLPathUtils::GetContentDir()
{
    const auto contentDir = FPaths::ConvertRelativePathToFull(IPluginManager::Get().FindPlugin(UNevarokMLSettings::PLUGIN_NAME)->GetContentDir());
    return FPaths::GetPath(contentDir);
}

FString UNevarokMLPathUtils::GetFolderNameFromPath(const FString& path)
{
    return FPaths::GetCleanFilename(path);
}
