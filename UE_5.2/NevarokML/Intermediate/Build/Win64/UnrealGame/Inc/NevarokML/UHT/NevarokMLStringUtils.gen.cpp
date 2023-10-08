// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Utils/NevarokMLStringUtils.h"
#include "NevarokML/Public/Types/NevarokMLIndex2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLStringUtils() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLStringUtils();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLStringUtils_NoRegister();
	NEVAROKML_API UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLIndex2D();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLStringUtils::execConv_IndexToString)
	{
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UNevarokMLStringUtils::Conv_IndexToString(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLStringUtils::execBytesToString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UNevarokMLStringUtils::BytesToString(Z_Param_Out_bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLStringUtils::execStringToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UNevarokMLStringUtils::StringToBytes(Z_Param_text);
		P_NATIVE_END;
	}
	void UNevarokMLStringUtils::StaticRegisterNativesUNevarokMLStringUtils()
	{
		UClass* Class = UNevarokMLStringUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BytesToString", &UNevarokMLStringUtils::execBytesToString },
			{ "Conv_IndexToString", &UNevarokMLStringUtils::execConv_IndexToString },
			{ "StringToBytes", &UNevarokMLStringUtils::execStringToBytes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics
	{
		struct NevarokMLStringUtils_eventBytesToString_Parms
		{
			TArray<uint8> bytes;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::NewProp_bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLStringUtils_eventBytesToString_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::NewProp_bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::NewProp_bytes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLStringUtils_eventBytesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|StringUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLStringUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLStringUtils, nullptr, "BytesToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::NevarokMLStringUtils_eventBytesToString_Parms), Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics
	{
		struct NevarokMLStringUtils_eventConv_IndexToString_Parms
		{
			FNevarokMLIndex2D index;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLStringUtils_eventConv_IndexToString_Parms, index), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLStringUtils_eventConv_IndexToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To String (Index2D)" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLStringUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLStringUtils, nullptr, "Conv_IndexToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics::NevarokMLStringUtils_eventConv_IndexToString_Parms), Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics
	{
		struct NevarokMLStringUtils_eventStringToBytes_Parms
		{
			FString text;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_text;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLStringUtils_eventStringToBytes_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::NewProp_text_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLStringUtils_eventStringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::NewProp_text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|StringUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLStringUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLStringUtils, nullptr, "StringToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::NevarokMLStringUtils_eventStringToBytes_Parms), Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLStringUtils);
	UClass* Z_Construct_UClass_UNevarokMLStringUtils_NoRegister()
	{
		return UNevarokMLStringUtils::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLStringUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLStringUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLStringUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLStringUtils_BytesToString, "BytesToString" }, // 3760115721
		{ &Z_Construct_UFunction_UNevarokMLStringUtils_Conv_IndexToString, "Conv_IndexToString" }, // 2812629
		{ &Z_Construct_UFunction_UNevarokMLStringUtils_StringToBytes, "StringToBytes" }, // 2090805733
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLStringUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/NevarokMLStringUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLStringUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLStringUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLStringUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLStringUtils_Statics::ClassParams = {
		&UNevarokMLStringUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLStringUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLStringUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLStringUtils()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLStringUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLStringUtils.OuterSingleton, Z_Construct_UClass_UNevarokMLStringUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLStringUtils.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLStringUtils>()
	{
		return UNevarokMLStringUtils::StaticClass();
	}
	UNevarokMLStringUtils::UNevarokMLStringUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLStringUtils);
	UNevarokMLStringUtils::~UNevarokMLStringUtils() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLStringUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLStringUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLStringUtils, UNevarokMLStringUtils::StaticClass, TEXT("UNevarokMLStringUtils"), &Z_Registration_Info_UClass_UNevarokMLStringUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLStringUtils), 2411775631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLStringUtils_h_2943572774(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLStringUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLStringUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
