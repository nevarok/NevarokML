// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Utils/NevarokMLRewardUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLRewardUtils() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLRewardUtils();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLRewardUtils_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLRewardUtils::execDotProductCurveReward)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_curve);
		P_GET_STRUCT(FVector,Z_Param_a);
		P_GET_STRUCT(FVector,Z_Param_b);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rewardMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNevarokMLRewardUtils::DotProductCurveReward(Z_Param_curve,Z_Param_a,Z_Param_b,Z_Param_rewardMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLRewardUtils::execStepsDoneCurve01Reward)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_curve);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeSteps);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxTimeSteps);
		P_GET_UBOOL(Z_Param_isDone);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rewardMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNevarokMLRewardUtils::StepsDoneCurve01Reward(Z_Param_curve,Z_Param_timeSteps,Z_Param_maxTimeSteps,Z_Param_isDone,Z_Param_rewardMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLRewardUtils::execStepsCurve01Reward)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_curve);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeSteps);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxTimeSteps);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rewardMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNevarokMLRewardUtils::StepsCurve01Reward(Z_Param_curve,Z_Param_timeSteps,Z_Param_maxTimeSteps,Z_Param_rewardMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLRewardUtils::execCurve01Reward)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_curve);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_min);
		P_GET_PROPERTY(FFloatProperty,Z_Param_max);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rewardMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNevarokMLRewardUtils::Curve01Reward(Z_Param_curve,Z_Param_value,Z_Param_min,Z_Param_max,Z_Param_rewardMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLRewardUtils::execBoolReward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_trueReward);
		P_GET_PROPERTY(FFloatProperty,Z_Param_falseReward);
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNevarokMLRewardUtils::BoolReward(Z_Param_trueReward,Z_Param_falseReward,Z_Param_value);
		P_NATIVE_END;
	}
	void UNevarokMLRewardUtils::StaticRegisterNativesUNevarokMLRewardUtils()
	{
		UClass* Class = UNevarokMLRewardUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoolReward", &UNevarokMLRewardUtils::execBoolReward },
			{ "Curve01Reward", &UNevarokMLRewardUtils::execCurve01Reward },
			{ "DotProductCurveReward", &UNevarokMLRewardUtils::execDotProductCurveReward },
			{ "StepsCurve01Reward", &UNevarokMLRewardUtils::execStepsCurve01Reward },
			{ "StepsDoneCurve01Reward", &UNevarokMLRewardUtils::execStepsDoneCurve01Reward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics
	{
		struct NevarokMLRewardUtils_eventBoolReward_Parms
		{
			float trueReward;
			float falseReward;
			bool value;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_trueReward;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_falseReward;
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::NewProp_trueReward = { "trueReward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventBoolReward_Parms, trueReward), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::NewProp_falseReward = { "falseReward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventBoolReward_Parms, falseReward), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::NewProp_value_SetBit(void* Obj)
	{
		((NevarokMLRewardUtils_eventBoolReward_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLRewardUtils_eventBoolReward_Parms), &Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventBoolReward_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::NewProp_trueReward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::NewProp_falseReward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|RewardUtils" },
		{ "CPP_Default_falseReward", "-1.000000" },
		{ "CPP_Default_trueReward", "1.000000" },
		{ "CPP_Default_value", "false" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRewardUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLRewardUtils, nullptr, "BoolReward", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::NevarokMLRewardUtils_eventBoolReward_Parms), Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics
	{
		struct NevarokMLRewardUtils_eventCurve01Reward_Parms
		{
			const UCurveFloat* curve;
			float value;
			float min;
			float max;
			float rewardMultiplier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_curve;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rewardMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_curve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_curve = { "curve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventCurve01Reward_Parms, curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_curve_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventCurve01Reward_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventCurve01Reward_Parms, min), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventCurve01Reward_Parms, max), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_rewardMultiplier = { "rewardMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventCurve01Reward_Parms, rewardMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventCurve01Reward_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_rewardMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|RewardUtils" },
		{ "CPP_Default_rewardMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRewardUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLRewardUtils, nullptr, "Curve01Reward", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::NevarokMLRewardUtils_eventCurve01Reward_Parms), Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics
	{
		struct NevarokMLRewardUtils_eventDotProductCurveReward_Parms
		{
			const UCurveFloat* curve;
			FVector a;
			FVector b;
			float rewardMultiplier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_curve;
		static const UECodeGen_Private::FStructPropertyParams NewProp_a;
		static const UECodeGen_Private::FStructPropertyParams NewProp_b;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rewardMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NewProp_curve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NewProp_curve = { "curve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventDotProductCurveReward_Parms, curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NewProp_curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NewProp_curve_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventDotProductCurveReward_Parms, a), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventDotProductCurveReward_Parms, b), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NewProp_rewardMultiplier = { "rewardMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventDotProductCurveReward_Parms, rewardMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventDotProductCurveReward_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NewProp_curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NewProp_b,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NewProp_rewardMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|RewardUtils" },
		{ "CPP_Default_rewardMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRewardUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLRewardUtils, nullptr, "DotProductCurveReward", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::NevarokMLRewardUtils_eventDotProductCurveReward_Parms), Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics
	{
		struct NevarokMLRewardUtils_eventStepsCurve01Reward_Parms
		{
			const UCurveFloat* curve;
			int32 timeSteps;
			int32 maxTimeSteps;
			float rewardMultiplier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_curve;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_timeSteps;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_maxTimeSteps;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rewardMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NewProp_curve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NewProp_curve = { "curve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventStepsCurve01Reward_Parms, curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NewProp_curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NewProp_curve_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NewProp_timeSteps = { "timeSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventStepsCurve01Reward_Parms, timeSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NewProp_maxTimeSteps = { "maxTimeSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventStepsCurve01Reward_Parms, maxTimeSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NewProp_rewardMultiplier = { "rewardMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventStepsCurve01Reward_Parms, rewardMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventStepsCurve01Reward_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NewProp_curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NewProp_timeSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NewProp_maxTimeSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NewProp_rewardMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|RewardUtils" },
		{ "CPP_Default_maxTimeSteps", "100" },
		{ "CPP_Default_rewardMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRewardUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLRewardUtils, nullptr, "StepsCurve01Reward", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::NevarokMLRewardUtils_eventStepsCurve01Reward_Parms), Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics
	{
		struct NevarokMLRewardUtils_eventStepsDoneCurve01Reward_Parms
		{
			const UCurveFloat* curve;
			int32 timeSteps;
			int32 maxTimeSteps;
			bool isDone;
			float rewardMultiplier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_curve;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_timeSteps;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_maxTimeSteps;
		static void NewProp_isDone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDone;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rewardMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_curve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_curve = { "curve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventStepsDoneCurve01Reward_Parms, curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_curve_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_timeSteps = { "timeSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventStepsDoneCurve01Reward_Parms, timeSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_maxTimeSteps = { "maxTimeSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventStepsDoneCurve01Reward_Parms, maxTimeSteps), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_isDone_SetBit(void* Obj)
	{
		((NevarokMLRewardUtils_eventStepsDoneCurve01Reward_Parms*)Obj)->isDone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_isDone = { "isDone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLRewardUtils_eventStepsDoneCurve01Reward_Parms), &Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_isDone_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_rewardMultiplier = { "rewardMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventStepsDoneCurve01Reward_Parms, rewardMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRewardUtils_eventStepsDoneCurve01Reward_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_timeSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_maxTimeSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_isDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_rewardMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|RewardUtils" },
		{ "CPP_Default_isDone", "false" },
		{ "CPP_Default_maxTimeSteps", "100" },
		{ "CPP_Default_rewardMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRewardUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLRewardUtils, nullptr, "StepsDoneCurve01Reward", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::NevarokMLRewardUtils_eventStepsDoneCurve01Reward_Parms), Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLRewardUtils);
	UClass* Z_Construct_UClass_UNevarokMLRewardUtils_NoRegister()
	{
		return UNevarokMLRewardUtils::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLRewardUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLRewardUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLRewardUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLRewardUtils_BoolReward, "BoolReward" }, // 3068211828
		{ &Z_Construct_UFunction_UNevarokMLRewardUtils_Curve01Reward, "Curve01Reward" }, // 2502114867
		{ &Z_Construct_UFunction_UNevarokMLRewardUtils_DotProductCurveReward, "DotProductCurveReward" }, // 851459589
		{ &Z_Construct_UFunction_UNevarokMLRewardUtils_StepsCurve01Reward, "StepsCurve01Reward" }, // 1074674746
		{ &Z_Construct_UFunction_UNevarokMLRewardUtils_StepsDoneCurve01Reward, "StepsDoneCurve01Reward" }, // 3363852165
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLRewardUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/NevarokMLRewardUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRewardUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLRewardUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLRewardUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLRewardUtils_Statics::ClassParams = {
		&UNevarokMLRewardUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLRewardUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLRewardUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLRewardUtils()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLRewardUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLRewardUtils.OuterSingleton, Z_Construct_UClass_UNevarokMLRewardUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLRewardUtils.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLRewardUtils>()
	{
		return UNevarokMLRewardUtils::StaticClass();
	}
	UNevarokMLRewardUtils::UNevarokMLRewardUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLRewardUtils);
	UNevarokMLRewardUtils::~UNevarokMLRewardUtils() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRewardUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRewardUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLRewardUtils, UNevarokMLRewardUtils::StaticClass, TEXT("UNevarokMLRewardUtils"), &Z_Registration_Info_UClass_UNevarokMLRewardUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLRewardUtils), 3293856394U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRewardUtils_h_2504244030(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRewardUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRewardUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
