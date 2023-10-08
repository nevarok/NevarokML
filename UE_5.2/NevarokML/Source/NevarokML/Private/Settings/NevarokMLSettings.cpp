/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Settings/NevarokMLSettings.h"
#include "Utils/NevarokMLPathUtils.h"

UNevarokMLSettings::UNevarokMLSettings()
{
    CategoryName = FName("Plugins");
    SectionName = FName(PLUGIN_NAME);

    const auto contentDir = UNevarokMLPathUtils::GetContentDir();
    SourceFolderPath.Path = FPaths::Combine(contentDir, DEFAULT_SOURCE_FOLDER);
    BackendFolderPath.Path = FPaths::Combine(SourceFolderPath.Path, DEFAULT_EXE_FOLDER);
    BackendArchivePath.FilePath = FPaths::Combine(SourceFolderPath.Path, ARCHIVE_NAME);
    DefaultBackendExePath.FilePath = FPaths::Combine(BackendFolderPath.Path, EXE_NAME);
    BackendExePath.FilePath = DefaultBackendExePath.FilePath;
    SaveFolderPath.Path = FPaths::Combine(FPaths::ProjectContentDir(), PLUGIN_NAME, DEFAULT_SAVE_FOLDER);
    LogFolderPath.Path = FPaths::Combine(FPaths::ProjectContentDir(), PLUGIN_NAME, DEFAULT_LOG_FOLDER);
}
