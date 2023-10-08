// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Samples/NevarokMLSample.h"
#include "NevarokML/Public/Types/NevarokMLIndex2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLSample() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSample();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSample_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSpace_NoRegister();
	NEVAROKML_API UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLIndex2D();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLSample::execGetMultiBinaryDebugString)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_name);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FInt64Property,Z_Param_limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMultiBinaryDebugString(Z_Param_name,Z_Param_index,Z_Param_limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execGetMultiDiscreteDebugString)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_name);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FInt64Property,Z_Param_limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMultiDiscreteDebugString(Z_Param_name,Z_Param_index,Z_Param_limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execGetDiscreteDebugString)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_name);
		P_GET_PROPERTY(FInt64Property,Z_Param_limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDiscreteDebugString(Z_Param_name,Z_Param_limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execGetBoxDebugString)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_name);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_index);
		P_GET_STRUCT(FVector2D,Z_Param_limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBoxDebugString(Z_Param_name,Z_Param_index,Z_Param_limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execStackShift)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StackShift();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execValidateContinuousValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateContinuousValue(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execValidateMultiBinaryValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateMultiBinaryValue(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execValidateMultiDiscreteValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateMultiDiscreteValue(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execValidateDiscreteValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateDiscreteValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execValidateBoxValue)
	{
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateBoxValue(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execSetContinuousValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_UBOOL(Z_Param_multicast);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetContinuousValue(Z_Param_index,Z_Param_value,Z_Param_multicast);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execSetBoxValue)
	{
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_UBOOL(Z_Param_multicast);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBoxValue(Z_Param_index,Z_Param_value,Z_Param_multicast);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execSetMultiBinaryValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_GET_UBOOL(Z_Param_multicast);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMultiBinaryValue(Z_Param_index,Z_Param_value,Z_Param_multicast);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execSetMultiDiscreteValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_GET_UBOOL(Z_Param_multicast);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMultiDiscreteValue(Z_Param_index,Z_Param_value,Z_Param_multicast);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execSetDiscreteValue)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetDiscreteValue(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execGetBoxValue)
	{
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_index);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoxValue(Z_Param_index,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execGetMultiBinaryValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMultiBinaryValue(Z_Param_index,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execGetMultiDiscreteValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMultiDiscreteValue(Z_Param_index,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execGetContinuousValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetContinuousValue(Z_Param_index,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execGetDiscreteValue)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDiscreteValue(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execSample)
	{
		P_GET_OBJECT(UNevarokMLSpace,Z_Param_owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSample**)Z_Param__Result=UNevarokMLSample::Sample(Z_Param_owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSample::execGetSpace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSpace**)Z_Param__Result=P_THIS->GetSpace();
		P_NATIVE_END;
	}
	void UNevarokMLSample::StaticRegisterNativesUNevarokMLSample()
	{
		UClass* Class = UNevarokMLSample::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UNevarokMLSample::execClear },
			{ "GetBoxDebugString", &UNevarokMLSample::execGetBoxDebugString },
			{ "GetBoxValue", &UNevarokMLSample::execGetBoxValue },
			{ "GetContinuousValue", &UNevarokMLSample::execGetContinuousValue },
			{ "GetDiscreteDebugString", &UNevarokMLSample::execGetDiscreteDebugString },
			{ "GetDiscreteValue", &UNevarokMLSample::execGetDiscreteValue },
			{ "GetMultiBinaryDebugString", &UNevarokMLSample::execGetMultiBinaryDebugString },
			{ "GetMultiBinaryValue", &UNevarokMLSample::execGetMultiBinaryValue },
			{ "GetMultiDiscreteDebugString", &UNevarokMLSample::execGetMultiDiscreteDebugString },
			{ "GetMultiDiscreteValue", &UNevarokMLSample::execGetMultiDiscreteValue },
			{ "GetSpace", &UNevarokMLSample::execGetSpace },
			{ "Sample", &UNevarokMLSample::execSample },
			{ "SetBoxValue", &UNevarokMLSample::execSetBoxValue },
			{ "SetContinuousValue", &UNevarokMLSample::execSetContinuousValue },
			{ "SetDiscreteValue", &UNevarokMLSample::execSetDiscreteValue },
			{ "SetMultiBinaryValue", &UNevarokMLSample::execSetMultiBinaryValue },
			{ "SetMultiDiscreteValue", &UNevarokMLSample::execSetMultiDiscreteValue },
			{ "StackShift", &UNevarokMLSample::execStackShift },
			{ "ValidateBoxValue", &UNevarokMLSample::execValidateBoxValue },
			{ "ValidateContinuousValue", &UNevarokMLSample::execValidateContinuousValue },
			{ "ValidateDiscreteValue", &UNevarokMLSample::execValidateDiscreteValue },
			{ "ValidateMultiBinaryValue", &UNevarokMLSample::execValidateMultiBinaryValue },
			{ "ValidateMultiDiscreteValue", &UNevarokMLSample::execValidateMultiDiscreteValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLSample_Clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics
	{
		struct NevarokMLSample_eventGetBoxDebugString_Parms
		{
			FName name;
			FNevarokMLIndex2D index;
			FVector2D limit;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_limit;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetBoxDebugString_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetBoxDebugString_Parms, index), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::NewProp_limit = { "limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetBoxDebugString_Parms, limit), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetBoxDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::NewProp_limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "GetBoxDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::NevarokMLSample_eventGetBoxDebugString_Parms), Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics
	{
		struct NevarokMLSample_eventGetBoxValue_Parms
		{
			FNevarokMLIndex2D index;
			float value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetBoxValue_Parms, index), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetBoxValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventGetBoxValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventGetBoxValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "GetBoxValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::NevarokMLSample_eventGetBoxValue_Parms), Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_GetBoxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_GetBoxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics
	{
		struct NevarokMLSample_eventGetContinuousValue_Parms
		{
			int32 index;
			float value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetContinuousValue_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetContinuousValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventGetContinuousValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventGetContinuousValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "GetContinuousValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::NevarokMLSample_eventGetContinuousValue_Parms), Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics
	{
		struct NevarokMLSample_eventGetDiscreteDebugString_Parms
		{
			FName name;
			int64 limit;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_name;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_limit;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetDiscreteDebugString_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::NewProp_limit = { "limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetDiscreteDebugString_Parms, limit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetDiscreteDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::NewProp_limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "GetDiscreteDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::NevarokMLSample_eventGetDiscreteDebugString_Parms), Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics
	{
		struct NevarokMLSample_eventGetDiscreteValue_Parms
		{
			int64 value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetDiscreteValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventGetDiscreteValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventGetDiscreteValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "GetDiscreteValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::NevarokMLSample_eventGetDiscreteValue_Parms), Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics
	{
		struct NevarokMLSample_eventGetMultiBinaryDebugString_Parms
		{
			FName name;
			int32 index;
			int64 limit;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_name;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_limit;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetMultiBinaryDebugString_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetMultiBinaryDebugString_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::NewProp_limit = { "limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetMultiBinaryDebugString_Parms, limit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetMultiBinaryDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::NewProp_limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "GetMultiBinaryDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::NevarokMLSample_eventGetMultiBinaryDebugString_Parms), Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics
	{
		struct NevarokMLSample_eventGetMultiBinaryValue_Parms
		{
			int32 index;
			int32 value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetMultiBinaryValue_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetMultiBinaryValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventGetMultiBinaryValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventGetMultiBinaryValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "GetMultiBinaryValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::NevarokMLSample_eventGetMultiBinaryValue_Parms), Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics
	{
		struct NevarokMLSample_eventGetMultiDiscreteDebugString_Parms
		{
			FName name;
			int32 index;
			int64 limit;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_name;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_limit;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetMultiDiscreteDebugString_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetMultiDiscreteDebugString_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::NewProp_limit = { "limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetMultiDiscreteDebugString_Parms, limit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetMultiDiscreteDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::NewProp_limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "GetMultiDiscreteDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::NevarokMLSample_eventGetMultiDiscreteDebugString_Parms), Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics
	{
		struct NevarokMLSample_eventGetMultiDiscreteValue_Parms
		{
			int32 index;
			int64 value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetMultiDiscreteValue_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::NewProp_index_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetMultiDiscreteValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventGetMultiDiscreteValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventGetMultiDiscreteValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "GetMultiDiscreteValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::NevarokMLSample_eventGetMultiDiscreteValue_Parms), Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_GetSpace_Statics
	{
		struct NevarokMLSample_eventGetSpace_Parms
		{
			UNevarokMLSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSample_GetSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventGetSpace_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_GetSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_GetSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_GetSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_GetSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "GetSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_GetSpace_Statics::NevarokMLSample_eventGetSpace_Parms), Z_Construct_UFunction_UNevarokMLSample_GetSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_GetSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_GetSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_GetSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_GetSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_Sample_Statics
	{
		struct NevarokMLSample_eventSample_Parms
		{
			UNevarokMLSpace* owner;
			UNevarokMLSample* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSample_Sample_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventSample_Parms, owner), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSample_Sample_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventSample_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_Sample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_Sample_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_Sample_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_Sample_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_Sample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "Sample", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_Sample_Statics::NevarokMLSample_eventSample_Parms), Z_Construct_UFunction_UNevarokMLSample_Sample_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_Sample_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_Sample_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_Sample_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_Sample()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_Sample_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics
	{
		struct NevarokMLSample_eventSetBoxValue_Parms
		{
			FNevarokMLIndex2D index;
			float value;
			bool multicast;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multicast_MetaData[];
#endif
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventSetBoxValue_Parms, index), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventSetBoxValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_multicast_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_multicast_SetBit(void* Obj)
	{
		((NevarokMLSample_eventSetBoxValue_Parms*)Obj)->multicast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_multicast = { "multicast", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventSetBoxValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_multicast_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_multicast_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_multicast_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventSetBoxValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventSetBoxValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_multicast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "SetBoxValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::NevarokMLSample_eventSetBoxValue_Parms), Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_SetBoxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_SetBoxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics
	{
		struct NevarokMLSample_eventSetContinuousValue_Parms
		{
			int32 index;
			float value;
			bool multicast;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multicast_MetaData[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventSetContinuousValue_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_index_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventSetContinuousValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_multicast_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_multicast_SetBit(void* Obj)
	{
		((NevarokMLSample_eventSetContinuousValue_Parms*)Obj)->multicast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_multicast = { "multicast", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventSetContinuousValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_multicast_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_multicast_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_multicast_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventSetContinuousValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventSetContinuousValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_multicast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "SetContinuousValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::NevarokMLSample_eventSetContinuousValue_Parms), Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics
	{
		struct NevarokMLSample_eventSetDiscreteValue_Parms
		{
			int64 value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventSetDiscreteValue_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::NewProp_value_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventSetDiscreteValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventSetDiscreteValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "SetDiscreteValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::NevarokMLSample_eventSetDiscreteValue_Parms), Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics
	{
		struct NevarokMLSample_eventSetMultiBinaryValue_Parms
		{
			int32 index;
			int32 value;
			bool multicast;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multicast_MetaData[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventSetMultiBinaryValue_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_index_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventSetMultiBinaryValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_multicast_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_multicast_SetBit(void* Obj)
	{
		((NevarokMLSample_eventSetMultiBinaryValue_Parms*)Obj)->multicast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_multicast = { "multicast", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventSetMultiBinaryValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_multicast_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_multicast_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_multicast_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventSetMultiBinaryValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventSetMultiBinaryValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_multicast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "SetMultiBinaryValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::NevarokMLSample_eventSetMultiBinaryValue_Parms), Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics
	{
		struct NevarokMLSample_eventSetMultiDiscreteValue_Parms
		{
			int32 index;
			int64 value;
			bool multicast;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multicast_MetaData[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventSetMultiDiscreteValue_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_index_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventSetMultiDiscreteValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_multicast_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_multicast_SetBit(void* Obj)
	{
		((NevarokMLSample_eventSetMultiDiscreteValue_Parms*)Obj)->multicast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_multicast = { "multicast", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventSetMultiDiscreteValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_multicast_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_multicast_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_multicast_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventSetMultiDiscreteValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventSetMultiDiscreteValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_multicast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "SetMultiDiscreteValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::NevarokMLSample_eventSetMultiDiscreteValue_Parms), Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_StackShift_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_StackShift_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_StackShift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "StackShift", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_StackShift_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_StackShift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_StackShift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_StackShift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics
	{
		struct NevarokMLSample_eventValidateBoxValue_Parms
		{
			FNevarokMLIndex2D index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventValidateBoxValue_Parms, index), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	void Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventValidateBoxValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventValidateBoxValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "ValidateBoxValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::NevarokMLSample_eventValidateBoxValue_Parms), Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics
	{
		struct NevarokMLSample_eventValidateContinuousValue_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventValidateContinuousValue_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventValidateContinuousValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventValidateContinuousValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "ValidateContinuousValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::NevarokMLSample_eventValidateContinuousValue_Parms), Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics
	{
		struct NevarokMLSample_eventValidateDiscreteValue_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventValidateDiscreteValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventValidateDiscreteValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "ValidateDiscreteValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics::NevarokMLSample_eventValidateDiscreteValue_Parms), Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics
	{
		struct NevarokMLSample_eventValidateMultiBinaryValue_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventValidateMultiBinaryValue_Parms, index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventValidateMultiBinaryValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventValidateMultiBinaryValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "ValidateMultiBinaryValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::NevarokMLSample_eventValidateMultiBinaryValue_Parms), Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics
	{
		struct NevarokMLSample_eventValidateMultiDiscreteValue_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSample_eventValidateMultiDiscreteValue_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSample_eventValidateMultiDiscreteValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSample_eventValidateMultiDiscreteValue_Parms), &Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Sample" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSample, nullptr, "ValidateMultiDiscreteValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::NevarokMLSample_eventValidateMultiDiscreteValue_Parms), Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLSample);
	UClass* Z_Construct_UClass_UNevarokMLSample_NoRegister()
	{
		return UNevarokMLSample::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp__longArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__longArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__longArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp__floatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__floatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__floatArray;
		static const UECodeGen_Private::FInt8PropertyParams NewProp__byteArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__byteArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__byteArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__space_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__space;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLSample_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLSample_Clear, "Clear" }, // 3819481126
		{ &Z_Construct_UFunction_UNevarokMLSample_GetBoxDebugString, "GetBoxDebugString" }, // 990502217
		{ &Z_Construct_UFunction_UNevarokMLSample_GetBoxValue, "GetBoxValue" }, // 1459010701
		{ &Z_Construct_UFunction_UNevarokMLSample_GetContinuousValue, "GetContinuousValue" }, // 3875391912
		{ &Z_Construct_UFunction_UNevarokMLSample_GetDiscreteDebugString, "GetDiscreteDebugString" }, // 102491038
		{ &Z_Construct_UFunction_UNevarokMLSample_GetDiscreteValue, "GetDiscreteValue" }, // 1901443528
		{ &Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryDebugString, "GetMultiBinaryDebugString" }, // 2262313959
		{ &Z_Construct_UFunction_UNevarokMLSample_GetMultiBinaryValue, "GetMultiBinaryValue" }, // 1681318006
		{ &Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteDebugString, "GetMultiDiscreteDebugString" }, // 1040147395
		{ &Z_Construct_UFunction_UNevarokMLSample_GetMultiDiscreteValue, "GetMultiDiscreteValue" }, // 2437070163
		{ &Z_Construct_UFunction_UNevarokMLSample_GetSpace, "GetSpace" }, // 2639620735
		{ &Z_Construct_UFunction_UNevarokMLSample_Sample, "Sample" }, // 3192700297
		{ &Z_Construct_UFunction_UNevarokMLSample_SetBoxValue, "SetBoxValue" }, // 1366048096
		{ &Z_Construct_UFunction_UNevarokMLSample_SetContinuousValue, "SetContinuousValue" }, // 3244991670
		{ &Z_Construct_UFunction_UNevarokMLSample_SetDiscreteValue, "SetDiscreteValue" }, // 1986107016
		{ &Z_Construct_UFunction_UNevarokMLSample_SetMultiBinaryValue, "SetMultiBinaryValue" }, // 3357805973
		{ &Z_Construct_UFunction_UNevarokMLSample_SetMultiDiscreteValue, "SetMultiDiscreteValue" }, // 3772533754
		{ &Z_Construct_UFunction_UNevarokMLSample_StackShift, "StackShift" }, // 1307958307
		{ &Z_Construct_UFunction_UNevarokMLSample_ValidateBoxValue, "ValidateBoxValue" }, // 3789869180
		{ &Z_Construct_UFunction_UNevarokMLSample_ValidateContinuousValue, "ValidateContinuousValue" }, // 4286651448
		{ &Z_Construct_UFunction_UNevarokMLSample_ValidateDiscreteValue, "ValidateDiscreteValue" }, // 122538284
		{ &Z_Construct_UFunction_UNevarokMLSample_ValidateMultiBinaryValue, "ValidateMultiBinaryValue" }, // 1925770113
		{ &Z_Construct_UFunction_UNevarokMLSample_ValidateMultiDiscreteValue, "ValidateMultiDiscreteValue" }, // 3535368489
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSample_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Samples/NevarokMLSample.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__longArray_Inner = { "_longArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__longArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__longArray = { "_longArray", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLSample, _longArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__longArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__longArray_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__floatArray_Inner = { "_floatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__floatArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__floatArray = { "_floatArray", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLSample, _floatArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__floatArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__floatArray_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__byteArray_Inner = { "_byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__byteArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__byteArray = { "_byteArray", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLSample, _byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__byteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__byteArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__space_MetaData[] = {
		{ "ModuleRelativePath", "Public/Samples/NevarokMLSample.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__space = { "_space", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLSample, _space), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__space_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__space_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNevarokMLSample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__longArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__longArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__floatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__floatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSample_Statics::NewProp__space,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLSample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLSample_Statics::ClassParams = {
		&UNevarokMLSample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNevarokMLSample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSample_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLSample()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLSample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLSample.OuterSingleton, Z_Construct_UClass_UNevarokMLSample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLSample.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLSample>()
	{
		return UNevarokMLSample::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLSample);
	UNevarokMLSample::~UNevarokMLSample() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLSample, UNevarokMLSample::StaticClass, TEXT("UNevarokMLSample"), &Z_Registration_Info_UClass_UNevarokMLSample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLSample), 1349659450U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_1365404780(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
