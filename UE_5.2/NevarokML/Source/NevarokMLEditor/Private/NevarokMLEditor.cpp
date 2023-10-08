/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "NevarokMLEditor.h"
#include "EdGraphUtilities.h"
#include "Editor/NevarokMLPinFactoryPoint.h"
#include "Settings/NevarokMLSettings.h"
#include "Editor/NevarokMLSettingsCustomization.h"

#define LOCTEXT_NAMESPACE "FNevarokMLEditorModule"

void FNevarokMLEditorModule::StartupModule()
{
    FEdGraphUtilities::RegisterVisualPinFactory(MakeShared<FNevarokMLIndex2DGraphPinFactory>());

    FPropertyEditorModule& propertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
    const auto className = UNevarokMLSettings::StaticClass()->GetFName();
    propertyModule.RegisterCustomClassLayout(className, FOnGetDetailCustomizationInstance::CreateStatic(&FNevarokMLSettingsCustomization::MakeInstance));
}

void FNevarokMLEditorModule::ShutdownModule()
{
    
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FNevarokMLEditorModule, NevarokMLEditor)