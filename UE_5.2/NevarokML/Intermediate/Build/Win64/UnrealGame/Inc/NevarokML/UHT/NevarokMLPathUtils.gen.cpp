// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Utils/NevarokMLPathUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLPathUtils() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLPathUtils();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLPathUtils_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLPathUtils::execGetFolderNameFromPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UNevarokMLPathUtils::GetFolderNameFromPath(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLPathUtils::execGetContentDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UNevarokMLPathUtils::GetContentDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLPathUtils::execGetPythonScriptPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_relativePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UNevarokMLPathUtils::GetPythonScriptPath(Z_Param_relativePath);
		P_NATIVE_END;
	}
	void UNevarokMLPathUtils::StaticRegisterNativesUNevarokMLPathUtils()
	{
		UClass* Class = UNevarokMLPathUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetContentDir", &UNevarokMLPathUtils::execGetContentDir },
			{ "GetFolderNameFromPath", &UNevarokMLPathUtils::execGetFolderNameFromPath },
			{ "GetPythonScriptPath", &UNevarokMLPathUtils::execGetPythonScriptPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir_Statics
	{
		struct NevarokMLPathUtils_eventGetContentDir_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLPathUtils_eventGetContentDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|PathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLPathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLPathUtils, nullptr, "GetContentDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir_Statics::NevarokMLPathUtils_eventGetContentDir_Parms), Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics
	{
		struct NevarokMLPathUtils_eventGetFolderNameFromPath_Parms
		{
			FString path;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::NewProp_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLPathUtils_eventGetFolderNameFromPath_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::NewProp_path_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLPathUtils_eventGetFolderNameFromPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|PathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLPathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLPathUtils, nullptr, "GetFolderNameFromPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::NevarokMLPathUtils_eventGetFolderNameFromPath_Parms), Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics
	{
		struct NevarokMLPathUtils_eventGetPythonScriptPath_Parms
		{
			FString relativePath;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_relativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_relativePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::NewProp_relativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::NewProp_relativePath = { "relativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLPathUtils_eventGetPythonScriptPath_Parms, relativePath), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::NewProp_relativePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::NewProp_relativePath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLPathUtils_eventGetPythonScriptPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::NewProp_relativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|PathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLPathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLPathUtils, nullptr, "GetPythonScriptPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::NevarokMLPathUtils_eventGetPythonScriptPath_Parms), Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLPathUtils);
	UClass* Z_Construct_UClass_UNevarokMLPathUtils_NoRegister()
	{
		return UNevarokMLPathUtils::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLPathUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLPathUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLPathUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLPathUtils_GetContentDir, "GetContentDir" }, // 2802516404
		{ &Z_Construct_UFunction_UNevarokMLPathUtils_GetFolderNameFromPath, "GetFolderNameFromPath" }, // 2182935626
		{ &Z_Construct_UFunction_UNevarokMLPathUtils_GetPythonScriptPath, "GetPythonScriptPath" }, // 1384179575
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLPathUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/NevarokMLPathUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLPathUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLPathUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLPathUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLPathUtils_Statics::ClassParams = {
		&UNevarokMLPathUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLPathUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLPathUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLPathUtils()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLPathUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLPathUtils.OuterSingleton, Z_Construct_UClass_UNevarokMLPathUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLPathUtils.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLPathUtils>()
	{
		return UNevarokMLPathUtils::StaticClass();
	}
	UNevarokMLPathUtils::UNevarokMLPathUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLPathUtils);
	UNevarokMLPathUtils::~UNevarokMLPathUtils() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLPathUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLPathUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLPathUtils, UNevarokMLPathUtils::StaticClass, TEXT("UNevarokMLPathUtils"), &Z_Registration_Info_UClass_UNevarokMLPathUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLPathUtils), 3784132435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLPathUtils_h_1354117295(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLPathUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLPathUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
