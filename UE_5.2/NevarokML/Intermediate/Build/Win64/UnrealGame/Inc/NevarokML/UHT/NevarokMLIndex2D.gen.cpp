// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Types/NevarokMLIndex2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLIndex2D() {}
// Cross Module References
	NEVAROKML_API UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLIndex2D();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NevarokMLIndex2D;
class UScriptStruct* FNevarokMLIndex2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NevarokMLIndex2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NevarokMLIndex2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNevarokMLIndex2D, (UObject*)Z_Construct_UPackage__Script_NevarokML(), TEXT("NevarokMLIndex2D"));
	}
	return Z_Registration_Info_UScriptStruct_NevarokMLIndex2D.OuterSingleton;
}
template<> NEVAROKML_API UScriptStruct* StaticStruct<FNevarokMLIndex2D>()
{
	return FNevarokMLIndex2D::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DX_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DY_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/NevarokMLIndex2D.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNevarokMLIndex2D>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::NewProp_DX_MetaData[] = {
		{ "Category", "NevarokML|Index2D" },
		{ "ModuleRelativePath", "Public/Types/NevarokMLIndex2D.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::NewProp_DX = { "DX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNevarokMLIndex2D, DX), METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::NewProp_DX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::NewProp_DX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::NewProp_DY_MetaData[] = {
		{ "Category", "NevarokML|Index2D" },
		{ "ModuleRelativePath", "Public/Types/NevarokMLIndex2D.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::NewProp_DY = { "DY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNevarokMLIndex2D, DY), METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::NewProp_DY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::NewProp_DY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::NewProp_DX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::NewProp_DY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
		nullptr,
		&NewStructOps,
		"NevarokMLIndex2D",
		sizeof(FNevarokMLIndex2D),
		alignof(FNevarokMLIndex2D),
		Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLIndex2D()
	{
		if (!Z_Registration_Info_UScriptStruct_NevarokMLIndex2D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NevarokMLIndex2D.InnerSingleton, Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NevarokMLIndex2D.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Types_NevarokMLIndex2D_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Types_NevarokMLIndex2D_h_Statics::ScriptStructInfo[] = {
		{ FNevarokMLIndex2D::StaticStruct, Z_Construct_UScriptStruct_FNevarokMLIndex2D_Statics::NewStructOps, TEXT("NevarokMLIndex2D"), &Z_Registration_Info_UScriptStruct_NevarokMLIndex2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNevarokMLIndex2D), 3166452073U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Types_NevarokMLIndex2D_h_763499823(TEXT("/Script/NevarokML"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Types_NevarokMLIndex2D_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Types_NevarokMLIndex2D_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
