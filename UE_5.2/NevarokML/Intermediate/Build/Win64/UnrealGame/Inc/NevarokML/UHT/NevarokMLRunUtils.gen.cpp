// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Utils/NevarokMLRunUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLRunUtils() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLRunUtils();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLRunUtils_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	void UNevarokMLRunUtils::StaticRegisterNativesUNevarokMLRunUtils()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLRunUtils);
	UClass* Z_Construct_UClass_UNevarokMLRunUtils_NoRegister()
	{
		return UNevarokMLRunUtils::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLRunUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLRunUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLRunUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/NevarokMLRunUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRunUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLRunUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLRunUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLRunUtils_Statics::ClassParams = {
		&UNevarokMLRunUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLRunUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLRunUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLRunUtils()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLRunUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLRunUtils.OuterSingleton, Z_Construct_UClass_UNevarokMLRunUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLRunUtils.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLRunUtils>()
	{
		return UNevarokMLRunUtils::StaticClass();
	}
	UNevarokMLRunUtils::UNevarokMLRunUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLRunUtils);
	UNevarokMLRunUtils::~UNevarokMLRunUtils() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRunUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRunUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLRunUtils, UNevarokMLRunUtils::StaticClass, TEXT("UNevarokMLRunUtils"), &Z_Registration_Info_UClass_UNevarokMLRunUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLRunUtils), 4223178465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRunUtils_h_496074793(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRunUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRunUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
