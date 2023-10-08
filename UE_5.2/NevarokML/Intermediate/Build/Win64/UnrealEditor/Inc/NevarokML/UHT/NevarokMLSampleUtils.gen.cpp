// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Utils/NevarokMLSampleUtils.h"
#include "NevarokML/Public/Types/NevarokMLIndex2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLSampleUtils() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSample_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSampleUtils();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSampleUtils_NoRegister();
	NEVAROKML_API UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLIndex2D();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLSampleUtils::execSetMultiDiscreteArray)
	{
		P_GET_OBJECT_REF(UNevarokMLSample,Z_Param_Out_sample);
		P_GET_PROPERTY(FIntProperty,Z_Param_from);
		P_GET_TARRAY_REF(int64,Z_Param_Out_array);
		P_GET_UBOOL(Z_Param_multicast);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNevarokMLSampleUtils::SetMultiDiscreteArray(Z_Param_Out_sample,Z_Param_from,Z_Param_Out_array,Z_Param_multicast);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSampleUtils::execGetContinuousVector)
	{
		P_GET_OBJECT_REF(UNevarokMLSample,Z_Param_Out_sample);
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_GET_PROPERTY(FIntProperty,Z_Param_z);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNevarokMLSampleUtils::GetContinuousVector(Z_Param_Out_sample,Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_Out_vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSampleUtils::execGetBoxVector)
	{
		P_GET_OBJECT_REF(UNevarokMLSample,Z_Param_Out_sample);
		P_GET_STRUCT_REF(FNevarokMLIndex2D,Z_Param_Out_x);
		P_GET_STRUCT_REF(FNevarokMLIndex2D,Z_Param_Out_y);
		P_GET_STRUCT_REF(FNevarokMLIndex2D,Z_Param_Out_z);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNevarokMLSampleUtils::GetBoxVector(Z_Param_Out_sample,Z_Param_Out_x,Z_Param_Out_y,Z_Param_Out_z,Z_Param_Out_vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSampleUtils::execSetContinuousVector)
	{
		P_GET_OBJECT_REF(UNevarokMLSample,Z_Param_Out_sample);
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_GET_PROPERTY(FIntProperty,Z_Param_z);
		P_GET_STRUCT(FVector,Z_Param_vector);
		P_GET_UBOOL(Z_Param_multicast);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNevarokMLSampleUtils::SetContinuousVector(Z_Param_Out_sample,Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_vector,Z_Param_multicast);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSampleUtils::execSetBoxVector)
	{
		P_GET_OBJECT_REF(UNevarokMLSample,Z_Param_Out_sample);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_x);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_y);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_z);
		P_GET_STRUCT(FVector,Z_Param_vector);
		P_GET_UBOOL(Z_Param_multicast);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNevarokMLSampleUtils::SetBoxVector(Z_Param_Out_sample,Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_vector,Z_Param_multicast);
		P_NATIVE_END;
	}
	void UNevarokMLSampleUtils::StaticRegisterNativesUNevarokMLSampleUtils()
	{
		UClass* Class = UNevarokMLSampleUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoxVector", &UNevarokMLSampleUtils::execGetBoxVector },
			{ "GetContinuousVector", &UNevarokMLSampleUtils::execGetContinuousVector },
			{ "SetBoxVector", &UNevarokMLSampleUtils::execSetBoxVector },
			{ "SetContinuousVector", &UNevarokMLSampleUtils::execSetContinuousVector },
			{ "SetMultiDiscreteArray", &UNevarokMLSampleUtils::execSetMultiDiscreteArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics
	{
		struct NevarokMLSampleUtils_eventGetBoxVector_Parms
		{
			UNevarokMLSample* sample;
			FNevarokMLIndex2D x;
			FNevarokMLIndex2D y;
			FNevarokMLIndex2D z;
			FVector vector;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_z;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_sample = { "sample", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventGetBoxVector_Parms, sample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventGetBoxVector_Parms, x), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_x_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventGetBoxVector_Parms, y), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_y_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventGetBoxVector_Parms, z), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_z_MetaData)) }; // 3166452073
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventGetBoxVector_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSampleUtils_eventGetBoxVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSampleUtils_eventGetBoxVector_Parms), &Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_sample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SampleUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLSampleUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSampleUtils, nullptr, "GetBoxVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::NevarokMLSampleUtils_eventGetBoxVector_Parms), Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics
	{
		struct NevarokMLSampleUtils_eventGetContinuousVector_Parms
		{
			UNevarokMLSample* sample;
			int32 x;
			int32 y;
			int32 z;
			FVector vector;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sample;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_z;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_sample = { "sample", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventGetContinuousVector_Parms, sample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventGetContinuousVector_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventGetContinuousVector_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventGetContinuousVector_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventGetContinuousVector_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSampleUtils_eventGetContinuousVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSampleUtils_eventGetContinuousVector_Parms), &Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_sample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SampleUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLSampleUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSampleUtils, nullptr, "GetContinuousVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::NevarokMLSampleUtils_eventGetContinuousVector_Parms), Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics
	{
		struct NevarokMLSampleUtils_eventSetBoxVector_Parms
		{
			UNevarokMLSample* sample;
			FNevarokMLIndex2D x;
			FNevarokMLIndex2D y;
			FNevarokMLIndex2D z;
			FVector vector;
			bool multicast;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vector;
		static void NewProp_multicast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_multicast;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_sample = { "sample", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventSetBoxVector_Parms, sample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventSetBoxVector_Parms, x), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_x_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventSetBoxVector_Parms, y), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_y_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventSetBoxVector_Parms, z), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_z_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventSetBoxVector_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_vector_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_multicast_SetBit(void* Obj)
	{
		((NevarokMLSampleUtils_eventSetBoxVector_Parms*)Obj)->multicast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_multicast = { "multicast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSampleUtils_eventSetBoxVector_Parms), &Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_multicast_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSampleUtils_eventSetBoxVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSampleUtils_eventSetBoxVector_Parms), &Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_sample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_multicast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SampleUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLSampleUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSampleUtils, nullptr, "SetBoxVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::NevarokMLSampleUtils_eventSetBoxVector_Parms), Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics
	{
		struct NevarokMLSampleUtils_eventSetContinuousVector_Parms
		{
			UNevarokMLSample* sample;
			int32 x;
			int32 y;
			int32 z;
			FVector vector;
			bool multicast;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vector;
		static void NewProp_multicast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_multicast;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_sample = { "sample", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventSetContinuousVector_Parms, sample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventSetContinuousVector_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventSetContinuousVector_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventSetContinuousVector_Parms, z), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventSetContinuousVector_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_vector_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_multicast_SetBit(void* Obj)
	{
		((NevarokMLSampleUtils_eventSetContinuousVector_Parms*)Obj)->multicast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_multicast = { "multicast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSampleUtils_eventSetContinuousVector_Parms), &Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_multicast_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSampleUtils_eventSetContinuousVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSampleUtils_eventSetContinuousVector_Parms), &Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_sample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_multicast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SampleUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLSampleUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSampleUtils, nullptr, "SetContinuousVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::NevarokMLSampleUtils_eventSetContinuousVector_Parms), Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics
	{
		struct NevarokMLSampleUtils_eventSetMultiDiscreteArray_Parms
		{
			UNevarokMLSample* sample;
			int32 from;
			TArray<int64> array;
			bool multicast;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sample;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_from;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_array;
		static void NewProp_multicast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_multicast;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_sample = { "sample", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventSetMultiDiscreteArray_Parms, sample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_from = { "from", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventSetMultiDiscreteArray_Parms, from), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_array_Inner = { "array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_array = { "array", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSampleUtils_eventSetMultiDiscreteArray_Parms, array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_array_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_multicast_SetBit(void* Obj)
	{
		((NevarokMLSampleUtils_eventSetMultiDiscreteArray_Parms*)Obj)->multicast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_multicast = { "multicast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSampleUtils_eventSetMultiDiscreteArray_Parms), &Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_multicast_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSampleUtils_eventSetMultiDiscreteArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSampleUtils_eventSetMultiDiscreteArray_Parms), &Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_sample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_from,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_multicast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SampleUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLSampleUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSampleUtils, nullptr, "SetMultiDiscreteArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::NevarokMLSampleUtils_eventSetMultiDiscreteArray_Parms), Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLSampleUtils);
	UClass* Z_Construct_UClass_UNevarokMLSampleUtils_NoRegister()
	{
		return UNevarokMLSampleUtils::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLSampleUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLSampleUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLSampleUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLSampleUtils_GetBoxVector, "GetBoxVector" }, // 1424466532
		{ &Z_Construct_UFunction_UNevarokMLSampleUtils_GetContinuousVector, "GetContinuousVector" }, // 256112053
		{ &Z_Construct_UFunction_UNevarokMLSampleUtils_SetBoxVector, "SetBoxVector" }, // 3663169870
		{ &Z_Construct_UFunction_UNevarokMLSampleUtils_SetContinuousVector, "SetContinuousVector" }, // 1932185278
		{ &Z_Construct_UFunction_UNevarokMLSampleUtils_SetMultiDiscreteArray, "SetMultiDiscreteArray" }, // 2875979126
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSampleUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/NevarokMLSampleUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLSampleUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLSampleUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLSampleUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLSampleUtils_Statics::ClassParams = {
		&UNevarokMLSampleUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSampleUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSampleUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLSampleUtils()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLSampleUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLSampleUtils.OuterSingleton, Z_Construct_UClass_UNevarokMLSampleUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLSampleUtils.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLSampleUtils>()
	{
		return UNevarokMLSampleUtils::StaticClass();
	}
	UNevarokMLSampleUtils::UNevarokMLSampleUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLSampleUtils);
	UNevarokMLSampleUtils::~UNevarokMLSampleUtils() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLSampleUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLSampleUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLSampleUtils, UNevarokMLSampleUtils::StaticClass, TEXT("UNevarokMLSampleUtils"), &Z_Registration_Info_UClass_UNevarokMLSampleUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLSampleUtils), 953793217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLSampleUtils_h_1968199231(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLSampleUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLSampleUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
