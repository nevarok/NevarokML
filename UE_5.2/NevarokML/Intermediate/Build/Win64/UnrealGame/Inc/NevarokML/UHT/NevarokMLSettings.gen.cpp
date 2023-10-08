// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Settings/NevarokMLSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSettings();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	void UNevarokMLSettings::StaticRegisterNativesUNevarokMLSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLSettings);
	UClass* Z_Construct_UClass_UNevarokMLSettings_NoRegister()
	{
		return UNevarokMLSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackendExePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackendExePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveFolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveFolderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogFolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LogFolderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceDisplayWarnings_MetaData[];
#endif
		static void NewProp_ForceDisplayWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceDisplayWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceDisplayErrors_MetaData[];
#endif
		static void NewProp_ForceDisplayErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceDisplayErrors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "NevarokML" },
		{ "IncludePath", "Settings/NevarokMLSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/NevarokMLSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_BackendExePath_MetaData[] = {
		{ "Category", "Paths" },
		{ "ModuleRelativePath", "Public/Settings/NevarokMLSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_BackendExePath = { "BackendExePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLSettings, BackendExePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_BackendExePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_BackendExePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_SaveFolderPath_MetaData[] = {
		{ "Category", "Paths" },
		{ "ModuleRelativePath", "Public/Settings/NevarokMLSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_SaveFolderPath = { "SaveFolderPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLSettings, SaveFolderPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_SaveFolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_SaveFolderPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_LogFolderPath_MetaData[] = {
		{ "Category", "Paths" },
		{ "ModuleRelativePath", "Public/Settings/NevarokMLSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_LogFolderPath = { "LogFolderPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLSettings, LogFolderPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_LogFolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_LogFolderPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayWarnings_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Settings/NevarokMLSettings.h" },
	};
#endif
	void Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayWarnings_SetBit(void* Obj)
	{
		((UNevarokMLSettings*)Obj)->ForceDisplayWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayWarnings = { "ForceDisplayWarnings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNevarokMLSettings), &Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayErrors_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Settings/NevarokMLSettings.h" },
	};
#endif
	void Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayErrors_SetBit(void* Obj)
	{
		((UNevarokMLSettings*)Obj)->ForceDisplayErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayErrors = { "ForceDisplayErrors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNevarokMLSettings), &Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayErrors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_DisplayDuration_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/NevarokMLSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_DisplayDuration = { "DisplayDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLSettings, DisplayDuration), METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_DisplayDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_DisplayDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNevarokMLSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_BackendExePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_SaveFolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_LogFolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_ForceDisplayErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSettings_Statics::NewProp_DisplayDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLSettings_Statics::ClassParams = {
		&UNevarokMLSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNevarokMLSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLSettings()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLSettings.OuterSingleton, Z_Construct_UClass_UNevarokMLSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLSettings.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLSettings>()
	{
		return UNevarokMLSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLSettings);
	UNevarokMLSettings::~UNevarokMLSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Settings_NevarokMLSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Settings_NevarokMLSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLSettings, UNevarokMLSettings::StaticClass, TEXT("UNevarokMLSettings"), &Z_Registration_Info_UClass_UNevarokMLSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLSettings), 1379053388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Settings_NevarokMLSettings_h_4075720207(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Settings_NevarokMLSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Settings_NevarokMLSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
