// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Utils/NevarokMLLogUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLLogUtils() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLLogUtils();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLLogUtils_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLLogUtils::execDrawDebugString)
	{
		P_GET_OBJECT(AActor,Z_Param_owner);
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_GET_STRUCT(FLinearColor,Z_Param_textColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_GET_STRUCT(FVector,Z_Param_textLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLLogUtils::DrawDebugString(Z_Param_owner,Z_Param_text,Z_Param_textColor,Z_Param_duration,Z_Param_textLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLLogUtils::execLogWarning)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_msg);
		P_GET_UBOOL(Z_Param_display);
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLLogUtils::LogWarning(Z_Param_msg,Z_Param_display,Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLLogUtils::execLogError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_msg);
		P_GET_UBOOL(Z_Param_display);
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLLogUtils::LogError(Z_Param_msg,Z_Param_display,Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLLogUtils::execLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_msg);
		P_GET_UBOOL(Z_Param_display);
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLLogUtils::Log(Z_Param_msg,Z_Param_display,Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLLogUtils::execEndEval)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_prefix);
		P_GET_UBOOL(Z_Param_display);
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLLogUtils::EndEval(Z_Param_prefix,Z_Param_display,Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLLogUtils::execStartEval)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLLogUtils::StartEval();
		P_NATIVE_END;
	}
	void UNevarokMLLogUtils::StaticRegisterNativesUNevarokMLLogUtils()
	{
		UClass* Class = UNevarokMLLogUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawDebugString", &UNevarokMLLogUtils::execDrawDebugString },
			{ "EndEval", &UNevarokMLLogUtils::execEndEval },
			{ "Log", &UNevarokMLLogUtils::execLog },
			{ "LogError", &UNevarokMLLogUtils::execLogError },
			{ "LogWarning", &UNevarokMLLogUtils::execLogWarning },
			{ "StartEval", &UNevarokMLLogUtils::execStartEval },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics
	{
		struct NevarokMLLogUtils_eventDrawDebugString_Parms
		{
			AActor* owner;
			FString text;
			FLinearColor textColor;
			float duration;
			FVector textLocation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_textColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_textLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLLogUtils_eventDrawDebugString_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLLogUtils_eventDrawDebugString_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_textColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_textColor = { "textColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLLogUtils_eventDrawDebugString_Parms, textColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_textColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_textColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLLogUtils_eventDrawDebugString_Parms, duration), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_textLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_textLocation = { "textLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLLogUtils_eventDrawDebugString_Parms, textLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_textLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_textLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_textColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NewProp_textLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|LogUtils" },
		{ "CPP_Default_textLocation", "" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLLogUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLLogUtils, nullptr, "DrawDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::NevarokMLLogUtils_eventDrawDebugString_Parms), Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics
	{
		struct NevarokMLLogUtils_eventEndEval_Parms
		{
			FString prefix;
			bool display;
			float time;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_prefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_prefix;
		static void NewProp_display_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_display;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::NewProp_prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::NewProp_prefix = { "prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLLogUtils_eventEndEval_Parms, prefix), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::NewProp_prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::NewProp_prefix_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::NewProp_display_SetBit(void* Obj)
	{
		((NevarokMLLogUtils_eventEndEval_Parms*)Obj)->display = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::NewProp_display = { "display", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLLogUtils_eventEndEval_Parms), &Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::NewProp_display_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLLogUtils_eventEndEval_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::NewProp_prefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::NewProp_display,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|LogUtils" },
		{ "CPP_Default_display", "false" },
		{ "CPP_Default_time", "2.000000" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLLogUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLLogUtils, nullptr, "EndEval", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::NevarokMLLogUtils_eventEndEval_Parms), Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLLogUtils_EndEval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLLogUtils_EndEval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics
	{
		struct NevarokMLLogUtils_eventLog_Parms
		{
			FString msg;
			bool display;
			float time;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_msg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_display_MetaData[];
#endif
		static void NewProp_display_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_display;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLLogUtils_eventLog_Parms, msg), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_msg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_display_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_display_SetBit(void* Obj)
	{
		((NevarokMLLogUtils_eventLog_Parms*)Obj)->display = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_display = { "display", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLLogUtils_eventLog_Parms), &Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_display_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_display_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_display_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLLogUtils_eventLog_Parms, time), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_msg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_display,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|LogUtils" },
		{ "CPP_Default_display", "false" },
		{ "CPP_Default_time", "2.000000" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLLogUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLLogUtils, nullptr, "Log", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::NevarokMLLogUtils_eventLog_Parms), Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLLogUtils_Log()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLLogUtils_Log_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics
	{
		struct NevarokMLLogUtils_eventLogError_Parms
		{
			FString msg;
			bool display;
			float time;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_msg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_display_MetaData[];
#endif
		static void NewProp_display_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_display;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLLogUtils_eventLogError_Parms, msg), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_msg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_display_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_display_SetBit(void* Obj)
	{
		((NevarokMLLogUtils_eventLogError_Parms*)Obj)->display = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_display = { "display", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLLogUtils_eventLogError_Parms), &Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_display_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_display_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_display_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLLogUtils_eventLogError_Parms, time), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_msg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_display,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|LogUtils" },
		{ "CPP_Default_display", "false" },
		{ "CPP_Default_time", "2.000000" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLLogUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLLogUtils, nullptr, "LogError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::NevarokMLLogUtils_eventLogError_Parms), Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLLogUtils_LogError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLLogUtils_LogError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics
	{
		struct NevarokMLLogUtils_eventLogWarning_Parms
		{
			FString msg;
			bool display;
			float time;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_msg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_display_MetaData[];
#endif
		static void NewProp_display_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_display;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLLogUtils_eventLogWarning_Parms, msg), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_msg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_display_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_display_SetBit(void* Obj)
	{
		((NevarokMLLogUtils_eventLogWarning_Parms*)Obj)->display = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_display = { "display", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLLogUtils_eventLogWarning_Parms), &Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_display_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_display_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_display_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLLogUtils_eventLogWarning_Parms, time), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_msg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_display,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|LogUtils" },
		{ "CPP_Default_display", "false" },
		{ "CPP_Default_time", "2.000000" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLLogUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLLogUtils, nullptr, "LogWarning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::NevarokMLLogUtils_eventLogWarning_Parms), Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLLogUtils_StartEval_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLLogUtils_StartEval_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|LogUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLLogUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLLogUtils_StartEval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLLogUtils, nullptr, "StartEval", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLLogUtils_StartEval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLLogUtils_StartEval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLLogUtils_StartEval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLLogUtils_StartEval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLLogUtils);
	UClass* Z_Construct_UClass_UNevarokMLLogUtils_NoRegister()
	{
		return UNevarokMLLogUtils::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLLogUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLLogUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLLogUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLLogUtils_DrawDebugString, "DrawDebugString" }, // 673714698
		{ &Z_Construct_UFunction_UNevarokMLLogUtils_EndEval, "EndEval" }, // 3417067951
		{ &Z_Construct_UFunction_UNevarokMLLogUtils_Log, "Log" }, // 738766117
		{ &Z_Construct_UFunction_UNevarokMLLogUtils_LogError, "LogError" }, // 1380152347
		{ &Z_Construct_UFunction_UNevarokMLLogUtils_LogWarning, "LogWarning" }, // 3065698508
		{ &Z_Construct_UFunction_UNevarokMLLogUtils_StartEval, "StartEval" }, // 2291639096
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLLogUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/NevarokMLLogUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLLogUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLLogUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLLogUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLLogUtils_Statics::ClassParams = {
		&UNevarokMLLogUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLLogUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLLogUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLLogUtils()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLLogUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLLogUtils.OuterSingleton, Z_Construct_UClass_UNevarokMLLogUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLLogUtils.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLLogUtils>()
	{
		return UNevarokMLLogUtils::StaticClass();
	}
	UNevarokMLLogUtils::UNevarokMLLogUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLLogUtils);
	UNevarokMLLogUtils::~UNevarokMLLogUtils() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLLogUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLLogUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLLogUtils, UNevarokMLLogUtils::StaticClass, TEXT("UNevarokMLLogUtils"), &Z_Registration_Info_UClass_UNevarokMLLogUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLLogUtils), 4148747606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLLogUtils_h_1455353136(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLLogUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLLogUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
