// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Learning/NevarokMLEnv.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLEnv() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NEVAROKML_API UClass* Z_Construct_UClass_ANevarokMLEnv();
	NEVAROKML_API UClass* Z_Construct_UClass_ANevarokMLEnv_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSample_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSpace_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(ANevarokMLEnv::execGetEpisodeReward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEpisodeReward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLEnv::execGetEpisodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEpisodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLEnv::execGetSteps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSteps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLEnv::execGetReward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLEnv::execGetDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLEnv::execGetObservationSample)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSample**)Z_Param__Result=P_THIS->GetObservationSample();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLEnv::execGetActionSample)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSample**)Z_Param__Result=P_THIS->GetActionSample();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLEnv::execAddReward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddReward(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLEnv::execOnReset)
	{
		P_GET_UBOOL(Z_Param_simulate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReset_Implementation(Z_Param_simulate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLEnv::execOnStepSkip)
	{
		P_GET_UBOOL(Z_Param_simulate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStepSkip_Implementation(Z_Param_simulate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLEnv::execOnStep)
	{
		P_GET_UBOOL(Z_Param_simulate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStep_Implementation(Z_Param_simulate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLEnv::execOnInit)
	{
		P_GET_OBJECT(UNevarokMLSpace,Z_Param_actionSpace);
		P_GET_OBJECT(UNevarokMLSpace,Z_Param_observationSpace);
		P_GET_UBOOL(Z_Param_simulate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInit_Implementation(Z_Param_actionSpace,Z_Param_observationSpace,Z_Param_simulate);
		P_NATIVE_END;
	}
	struct NevarokMLEnv_eventOnInit_Parms
	{
		UNevarokMLSpace* actionSpace;
		UNevarokMLSpace* observationSpace;
		bool simulate;
	};
	struct NevarokMLEnv_eventOnReset_Parms
	{
		bool simulate;
	};
	struct NevarokMLEnv_eventOnStep_Parms
	{
		bool simulate;
	};
	struct NevarokMLEnv_eventOnStepSkip_Parms
	{
		bool simulate;
	};
	static FName NAME_ANevarokMLEnv_OnInit = FName(TEXT("OnInit"));
	void ANevarokMLEnv::OnInit(UNevarokMLSpace* actionSpace, UNevarokMLSpace* observationSpace, bool simulate)
	{
		NevarokMLEnv_eventOnInit_Parms Parms;
		Parms.actionSpace=actionSpace;
		Parms.observationSpace=observationSpace;
		Parms.simulate=simulate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANevarokMLEnv_OnInit),&Parms);
	}
	static FName NAME_ANevarokMLEnv_OnReset = FName(TEXT("OnReset"));
	void ANevarokMLEnv::OnReset(bool simulate)
	{
		NevarokMLEnv_eventOnReset_Parms Parms;
		Parms.simulate=simulate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANevarokMLEnv_OnReset),&Parms);
	}
	static FName NAME_ANevarokMLEnv_OnStep = FName(TEXT("OnStep"));
	void ANevarokMLEnv::OnStep(bool simulate)
	{
		NevarokMLEnv_eventOnStep_Parms Parms;
		Parms.simulate=simulate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANevarokMLEnv_OnStep),&Parms);
	}
	static FName NAME_ANevarokMLEnv_OnStepSkip = FName(TEXT("OnStepSkip"));
	void ANevarokMLEnv::OnStepSkip(bool simulate)
	{
		NevarokMLEnv_eventOnStepSkip_Parms Parms;
		Parms.simulate=simulate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANevarokMLEnv_OnStepSkip),&Parms);
	}
	void ANevarokMLEnv::StaticRegisterNativesANevarokMLEnv()
	{
		UClass* Class = ANevarokMLEnv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddReward", &ANevarokMLEnv::execAddReward },
			{ "GetActionSample", &ANevarokMLEnv::execGetActionSample },
			{ "GetDone", &ANevarokMLEnv::execGetDone },
			{ "GetEpisodeReward", &ANevarokMLEnv::execGetEpisodeReward },
			{ "GetEpisodes", &ANevarokMLEnv::execGetEpisodes },
			{ "GetObservationSample", &ANevarokMLEnv::execGetObservationSample },
			{ "GetReward", &ANevarokMLEnv::execGetReward },
			{ "GetSteps", &ANevarokMLEnv::execGetSteps },
			{ "OnInit", &ANevarokMLEnv::execOnInit },
			{ "OnReset", &ANevarokMLEnv::execOnReset },
			{ "OnStep", &ANevarokMLEnv::execOnStep },
			{ "OnStepSkip", &ANevarokMLEnv::execOnStepSkip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics
	{
		struct NevarokMLEnv_eventAddReward_Parms
		{
			float value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLEnv_eventAddReward_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::NewProp_value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLEnv, nullptr, "AddReward", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::NevarokMLEnv_eventAddReward_Parms), Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLEnv_AddReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLEnv_AddReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLEnv_GetActionSample_Statics
	{
		struct NevarokMLEnv_eventGetActionSample_Parms
		{
			UNevarokMLSample* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANevarokMLEnv_GetActionSample_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLEnv_eventGetActionSample_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLEnv_GetActionSample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_GetActionSample_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLEnv_GetActionSample_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLEnv_GetActionSample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLEnv, nullptr, "GetActionSample", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANevarokMLEnv_GetActionSample_Statics::NevarokMLEnv_eventGetActionSample_Parms), Z_Construct_UFunction_ANevarokMLEnv_GetActionSample_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetActionSample_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLEnv_GetActionSample_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetActionSample_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLEnv_GetActionSample()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLEnv_GetActionSample_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics
	{
		struct NevarokMLEnv_eventGetDone_Parms
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
	void Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLEnv_eventGetDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLEnv_eventGetDone_Parms), &Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLEnv, nullptr, "GetDone", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics::NevarokMLEnv_eventGetDone_Parms), Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLEnv_GetDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLEnv_GetDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward_Statics
	{
		struct NevarokMLEnv_eventGetEpisodeReward_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLEnv_eventGetEpisodeReward_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLEnv, nullptr, "GetEpisodeReward", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward_Statics::NevarokMLEnv_eventGetEpisodeReward_Parms), Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes_Statics
	{
		struct NevarokMLEnv_eventGetEpisodes_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLEnv_eventGetEpisodes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLEnv, nullptr, "GetEpisodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes_Statics::NevarokMLEnv_eventGetEpisodes_Parms), Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample_Statics
	{
		struct NevarokMLEnv_eventGetObservationSample_Parms
		{
			UNevarokMLSample* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLEnv_eventGetObservationSample_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLEnv, nullptr, "GetObservationSample", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample_Statics::NevarokMLEnv_eventGetObservationSample_Parms), Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLEnv_GetReward_Statics
	{
		struct NevarokMLEnv_eventGetReward_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANevarokMLEnv_GetReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLEnv_eventGetReward_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLEnv_GetReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_GetReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLEnv_GetReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLEnv_GetReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLEnv, nullptr, "GetReward", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANevarokMLEnv_GetReward_Statics::NevarokMLEnv_eventGetReward_Parms), Z_Construct_UFunction_ANevarokMLEnv_GetReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLEnv_GetReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLEnv_GetReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLEnv_GetReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLEnv_GetSteps_Statics
	{
		struct NevarokMLEnv_eventGetSteps_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANevarokMLEnv_GetSteps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLEnv_eventGetSteps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLEnv_GetSteps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_GetSteps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLEnv_GetSteps_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLEnv_GetSteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLEnv, nullptr, "GetSteps", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANevarokMLEnv_GetSteps_Statics::NevarokMLEnv_eventGetSteps_Parms), Z_Construct_UFunction_ANevarokMLEnv_GetSteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetSteps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLEnv_GetSteps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_GetSteps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLEnv_GetSteps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLEnv_GetSteps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actionSpace;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_observationSpace;
		static void NewProp_simulate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_simulate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::NewProp_actionSpace = { "actionSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLEnv_eventOnInit_Parms, actionSpace), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::NewProp_observationSpace = { "observationSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLEnv_eventOnInit_Parms, observationSpace), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::NewProp_simulate_SetBit(void* Obj)
	{
		((NevarokMLEnv_eventOnInit_Parms*)Obj)->simulate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::NewProp_simulate = { "simulate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLEnv_eventOnInit_Parms), &Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::NewProp_simulate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::NewProp_actionSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::NewProp_observationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::NewProp_simulate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLEnv, nullptr, "OnInit", nullptr, nullptr, sizeof(NevarokMLEnv_eventOnInit_Parms), Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLEnv_OnInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLEnv_OnInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLEnv_OnReset_Statics
	{
		static void NewProp_simulate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_simulate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANevarokMLEnv_OnReset_Statics::NewProp_simulate_SetBit(void* Obj)
	{
		((NevarokMLEnv_eventOnReset_Parms*)Obj)->simulate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANevarokMLEnv_OnReset_Statics::NewProp_simulate = { "simulate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLEnv_eventOnReset_Parms), &Z_Construct_UFunction_ANevarokMLEnv_OnReset_Statics::NewProp_simulate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLEnv_OnReset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_OnReset_Statics::NewProp_simulate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLEnv_OnReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLEnv_OnReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLEnv, nullptr, "OnReset", nullptr, nullptr, sizeof(NevarokMLEnv_eventOnReset_Parms), Z_Construct_UFunction_ANevarokMLEnv_OnReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_OnReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLEnv_OnReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_OnReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLEnv_OnReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLEnv_OnReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLEnv_OnStep_Statics
	{
		static void NewProp_simulate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_simulate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANevarokMLEnv_OnStep_Statics::NewProp_simulate_SetBit(void* Obj)
	{
		((NevarokMLEnv_eventOnStep_Parms*)Obj)->simulate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANevarokMLEnv_OnStep_Statics::NewProp_simulate = { "simulate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLEnv_eventOnStep_Parms), &Z_Construct_UFunction_ANevarokMLEnv_OnStep_Statics::NewProp_simulate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLEnv_OnStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_OnStep_Statics::NewProp_simulate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLEnv_OnStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLEnv_OnStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLEnv, nullptr, "OnStep", nullptr, nullptr, sizeof(NevarokMLEnv_eventOnStep_Parms), Z_Construct_UFunction_ANevarokMLEnv_OnStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_OnStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLEnv_OnStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_OnStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLEnv_OnStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLEnv_OnStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip_Statics
	{
		static void NewProp_simulate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_simulate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip_Statics::NewProp_simulate_SetBit(void* Obj)
	{
		((NevarokMLEnv_eventOnStepSkip_Parms*)Obj)->simulate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip_Statics::NewProp_simulate = { "simulate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLEnv_eventOnStepSkip_Parms), &Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip_Statics::NewProp_simulate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip_Statics::NewProp_simulate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLEnv, nullptr, "OnStepSkip", nullptr, nullptr, sizeof(NevarokMLEnv_eventOnStepSkip_Parms), Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANevarokMLEnv);
	UClass* Z_Construct_UClass_ANevarokMLEnv_NoRegister()
	{
		return ANevarokMLEnv::StaticClass();
	}
	struct Z_Construct_UClass_ANevarokMLEnv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__actionSample_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__actionSample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__observationSample_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__observationSample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__reward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__reward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__episodeReward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__episodeReward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__maxEpisodeReward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__maxEpisodeReward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__steps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__steps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__episodes_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__episodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__done_MetaData[];
#endif
		static void NewProp__done_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__done;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANevarokMLEnv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANevarokMLEnv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANevarokMLEnv_AddReward, "AddReward" }, // 3375691376
		{ &Z_Construct_UFunction_ANevarokMLEnv_GetActionSample, "GetActionSample" }, // 1336664388
		{ &Z_Construct_UFunction_ANevarokMLEnv_GetDone, "GetDone" }, // 3173413614
		{ &Z_Construct_UFunction_ANevarokMLEnv_GetEpisodeReward, "GetEpisodeReward" }, // 3561193289
		{ &Z_Construct_UFunction_ANevarokMLEnv_GetEpisodes, "GetEpisodes" }, // 2796358772
		{ &Z_Construct_UFunction_ANevarokMLEnv_GetObservationSample, "GetObservationSample" }, // 1793040629
		{ &Z_Construct_UFunction_ANevarokMLEnv_GetReward, "GetReward" }, // 659823367
		{ &Z_Construct_UFunction_ANevarokMLEnv_GetSteps, "GetSteps" }, // 2923010863
		{ &Z_Construct_UFunction_ANevarokMLEnv_OnInit, "OnInit" }, // 4258440122
		{ &Z_Construct_UFunction_ANevarokMLEnv_OnReset, "OnReset" }, // 3693186903
		{ &Z_Construct_UFunction_ANevarokMLEnv_OnStep, "OnStep" }, // 4003770742
		{ &Z_Construct_UFunction_ANevarokMLEnv_OnStepSkip, "OnStepSkip" }, // 1708355069
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLEnv_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Learning/NevarokMLEnv.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__actionSample_MetaData[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__actionSample = { "_actionSample", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLEnv, _actionSample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__actionSample_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__actionSample_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__observationSample_MetaData[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__observationSample = { "_observationSample", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLEnv, _observationSample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__observationSample_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__observationSample_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__reward_MetaData[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__reward = { "_reward", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLEnv, _reward), METADATA_PARAMS(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__reward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__reward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__episodeReward_MetaData[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__episodeReward = { "_episodeReward", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLEnv, _episodeReward), METADATA_PARAMS(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__episodeReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__episodeReward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__maxEpisodeReward_MetaData[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__maxEpisodeReward = { "_maxEpisodeReward", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLEnv, _maxEpisodeReward), METADATA_PARAMS(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__maxEpisodeReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__maxEpisodeReward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__steps_MetaData[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__steps = { "_steps", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLEnv, _steps), METADATA_PARAMS(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__steps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__steps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__episodes_MetaData[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__episodes = { "_episodes", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLEnv, _episodes), METADATA_PARAMS(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__episodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__episodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__done_MetaData[] = {
		{ "Category", "NevarokML|Env" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLEnv.h" },
	};
#endif
	void Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__done_SetBit(void* Obj)
	{
		((ANevarokMLEnv*)Obj)->_done = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__done = { "_done", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ANevarokMLEnv), &Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__done_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__done_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANevarokMLEnv_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__actionSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__observationSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__reward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__episodeReward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__maxEpisodeReward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__steps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__episodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLEnv_Statics::NewProp__done,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANevarokMLEnv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANevarokMLEnv>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANevarokMLEnv_Statics::ClassParams = {
		&ANevarokMLEnv::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANevarokMLEnv_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLEnv_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANevarokMLEnv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLEnv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANevarokMLEnv()
	{
		if (!Z_Registration_Info_UClass_ANevarokMLEnv.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANevarokMLEnv.OuterSingleton, Z_Construct_UClass_ANevarokMLEnv_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANevarokMLEnv.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<ANevarokMLEnv>()
	{
		return ANevarokMLEnv::StaticClass();
	}
	ANevarokMLEnv::ANevarokMLEnv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANevarokMLEnv);
	ANevarokMLEnv::~ANevarokMLEnv() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANevarokMLEnv, ANevarokMLEnv::StaticClass, TEXT("ANevarokMLEnv"), &Z_Registration_Info_UClass_ANevarokMLEnv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANevarokMLEnv), 692310938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_2468095241(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
