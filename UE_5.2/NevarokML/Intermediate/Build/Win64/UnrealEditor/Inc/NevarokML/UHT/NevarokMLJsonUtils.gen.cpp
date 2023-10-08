// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Utils/NevarokMLJsonUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLJsonUtils() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLJsonUtils();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLJsonUtils_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	void UNevarokMLJsonUtils::StaticRegisterNativesUNevarokMLJsonUtils()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLJsonUtils);
	UClass* Z_Construct_UClass_UNevarokMLJsonUtils_NoRegister()
	{
		return UNevarokMLJsonUtils::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLJsonUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLJsonUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLJsonUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/NevarokMLJsonUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLJsonUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLJsonUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLJsonUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLJsonUtils_Statics::ClassParams = {
		&UNevarokMLJsonUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLJsonUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLJsonUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLJsonUtils()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLJsonUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLJsonUtils.OuterSingleton, Z_Construct_UClass_UNevarokMLJsonUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLJsonUtils.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLJsonUtils>()
	{
		return UNevarokMLJsonUtils::StaticClass();
	}
	UNevarokMLJsonUtils::UNevarokMLJsonUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLJsonUtils);
	UNevarokMLJsonUtils::~UNevarokMLJsonUtils() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLJsonUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLJsonUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLJsonUtils, UNevarokMLJsonUtils::StaticClass, TEXT("UNevarokMLJsonUtils"), &Z_Registration_Info_UClass_UNevarokMLJsonUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLJsonUtils), 4231649650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLJsonUtils_h_4192379132(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLJsonUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLJsonUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
