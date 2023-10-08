// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Learning/NevarokMLTrainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLTrainer() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	NEVAROKML_API UClass* Z_Construct_UClass_ANevarokMLEnv_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_ANevarokMLTrainer();
	NEVAROKML_API UClass* Z_Construct_UClass_ANevarokMLTrainer_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLBaseAlgorithm_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSocketServer_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSpace_NoRegister();
	NEVAROKML_API UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLDevice();
	NEVAROKML_API UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLState();
	NEVAROKML_API UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENevarokMLState;
	static UEnum* ENevarokMLState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENevarokMLState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENevarokMLState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NevarokML_ENevarokMLState, (UObject*)Z_Construct_UPackage__Script_NevarokML(), TEXT("ENevarokMLState"));
		}
		return Z_Registration_Info_UEnum_ENevarokMLState.OuterSingleton;
	}
	template<> NEVAROKML_API UEnum* StaticEnum<ENevarokMLState>()
	{
		return ENevarokMLState_StaticEnum();
	}
	struct Z_Construct_UEnum_NevarokML_ENevarokMLState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NevarokML_ENevarokMLState_Statics::Enumerators[] = {
		{ "ENevarokMLState::NONE", (int64)ENevarokMLState::NONE },
		{ "ENevarokMLState::START", (int64)ENevarokMLState::START },
		{ "ENevarokMLState::LISTEN", (int64)ENevarokMLState::LISTEN },
		{ "ENevarokMLState::RECEIVE", (int64)ENevarokMLState::RECEIVE },
		{ "ENevarokMLState::COMPLETE", (int64)ENevarokMLState::COMPLETE },
		{ "ENevarokMLState::INVALID", (int64)ENevarokMLState::INVALID },
		{ "ENevarokMLState::WAIT", (int64)ENevarokMLState::WAIT },
		{ "ENevarokMLState::READY", (int64)ENevarokMLState::READY },
		{ "ENevarokMLState::SIMULATION", (int64)ENevarokMLState::SIMULATION },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NevarokML_ENevarokMLState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COMPLETE.DisplayName", "COMPLETE" },
		{ "COMPLETE.Name", "ENevarokMLState::COMPLETE" },
		{ "INVALID.DisplayName", "INVALID" },
		{ "INVALID.Name", "ENevarokMLState::INVALID" },
		{ "LISTEN.DisplayName", "LISTEN" },
		{ "LISTEN.Name", "ENevarokMLState::LISTEN" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
		{ "NONE.DisplayName", "NONE" },
		{ "NONE.Name", "ENevarokMLState::NONE" },
		{ "READY.DisplayName", "READY" },
		{ "READY.Name", "ENevarokMLState::READY" },
		{ "RECEIVE.DisplayName", "RECEIVE" },
		{ "RECEIVE.Name", "ENevarokMLState::RECEIVE" },
		{ "SIMULATION.DisplayName", "SIMULATION" },
		{ "SIMULATION.Name", "ENevarokMLState::SIMULATION" },
		{ "START.DisplayName", "START" },
		{ "START.Name", "ENevarokMLState::START" },
		{ "WAIT.DisplayName", "WAIT" },
		{ "WAIT.Name", "ENevarokMLState::WAIT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NevarokML_ENevarokMLState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NevarokML,
		nullptr,
		"ENevarokMLState",
		"ENevarokMLState",
		Z_Construct_UEnum_NevarokML_ENevarokMLState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NevarokML_ENevarokMLState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NevarokML_ENevarokMLState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NevarokML_ENevarokMLState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLState()
	{
		if (!Z_Registration_Info_UEnum_ENevarokMLState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENevarokMLState.InnerSingleton, Z_Construct_UEnum_NevarokML_ENevarokMLState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENevarokMLState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNevarokMLTrainerTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FNevarokMLTrainerTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NevarokMLTrainerTickFunction;
class UScriptStruct* FNevarokMLTrainerTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NevarokMLTrainerTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NevarokMLTrainerTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction, (UObject*)Z_Construct_UPackage__Script_NevarokML(), TEXT("NevarokMLTrainerTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_NevarokMLTrainerTickFunction.OuterSingleton;
}
template<> NEVAROKML_API UScriptStruct* StaticStruct<FNevarokMLTrainerTickFunction>()
{
	return FNevarokMLTrainerTickFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNevarokMLTrainerTickFunction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::NewProp_Target_MetaData[] = {
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNevarokMLTrainerTickFunction, Target), Z_Construct_UClass_ANevarokMLTrainer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::NewProp_Target,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"NevarokMLTrainerTickFunction",
		sizeof(FNevarokMLTrainerTickFunction),
		alignof(FNevarokMLTrainerTickFunction),
		Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_NevarokMLTrainerTickFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NevarokMLTrainerTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NevarokMLTrainerTickFunction.InnerSingleton;
	}
	DEFINE_FUNCTION(ANevarokMLTrainer::execCollectChildEnvs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectChildEnvs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLTrainer::execClearEnvs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearEnvs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLTrainer::execLearn)
	{
		P_GET_OBJECT(UNevarokMLBaseAlgorithm,Z_Param_algorithm);
		P_GET_ENUM(ENevarokMLDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_timesteps);
		P_GET_PROPERTY(FIntProperty,Z_Param_evalEps);
		P_GET_PROPERTY(FIntProperty,Z_Param_saveFreq);
		P_GET_PROPERTY(FIntProperty,Z_Param_logInterval);
		P_GET_STRUCT(FFilePath,Z_Param_loadModelPath);
		P_GET_PROPERTY(FNameProperty,Z_Param_saveModelName);
		P_GET_UBOOL(Z_Param_deterministic);
		P_GET_UBOOL(Z_Param_showTensorboard);
		P_GET_UBOOL(Z_Param_showReward);
		P_GET_UBOOL(Z_Param_showStepDebug);
		P_GET_UBOOL(Z_Param_showResetDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Learn(Z_Param_algorithm,ENevarokMLDevice(Z_Param_device),Z_Param_timesteps,Z_Param_evalEps,Z_Param_saveFreq,Z_Param_logInterval,Z_Param_loadModelPath,Z_Param_saveModelName,Z_Param_deterministic,Z_Param_showTensorboard,Z_Param_showReward,Z_Param_showStepDebug,Z_Param_showResetDebug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLTrainer::execOnComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComplete_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLTrainer::execOnReset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_OBJECT(ANevarokMLEnv,Z_Param_env);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReset_Implementation(Z_Param_index,Z_Param_env);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLTrainer::execOnStepSkip)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_OBJECT(ANevarokMLEnv,Z_Param_env);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStepSkip_Implementation(Z_Param_index,Z_Param_env);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLTrainer::execOnStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_OBJECT(ANevarokMLEnv,Z_Param_env);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStep_Implementation(Z_Param_index,Z_Param_env);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLTrainer::execOnInit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_OBJECT(ANevarokMLEnv,Z_Param_env);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInit_Implementation(Z_Param_index,Z_Param_env);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLTrainer::execOnConstruct)
	{
		P_GET_OBJECT(UNevarokMLSpace,Z_Param_actionSpace);
		P_GET_OBJECT(UNevarokMLSpace,Z_Param_observationSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConstruct_Implementation(Z_Param_actionSpace,Z_Param_observationSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLTrainer::execOnInvalid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInvalid_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLTrainer::execOnStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStart_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANevarokMLTrainer::execGetEnvsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEnvsCount();
		P_NATIVE_END;
	}
	struct NevarokMLTrainer_eventOnConstruct_Parms
	{
		UNevarokMLSpace* actionSpace;
		UNevarokMLSpace* observationSpace;
	};
	struct NevarokMLTrainer_eventOnInit_Parms
	{
		int32 index;
		ANevarokMLEnv* env;
	};
	struct NevarokMLTrainer_eventOnReset_Parms
	{
		int32 index;
		ANevarokMLEnv* env;
	};
	struct NevarokMLTrainer_eventOnStep_Parms
	{
		int32 index;
		ANevarokMLEnv* env;
	};
	struct NevarokMLTrainer_eventOnStepSkip_Parms
	{
		int32 index;
		ANevarokMLEnv* env;
	};
	static FName NAME_ANevarokMLTrainer_OnComplete = FName(TEXT("OnComplete"));
	void ANevarokMLTrainer::OnComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANevarokMLTrainer_OnComplete),NULL);
	}
	static FName NAME_ANevarokMLTrainer_OnConstruct = FName(TEXT("OnConstruct"));
	void ANevarokMLTrainer::OnConstruct(UNevarokMLSpace* actionSpace, UNevarokMLSpace* observationSpace)
	{
		NevarokMLTrainer_eventOnConstruct_Parms Parms;
		Parms.actionSpace=actionSpace;
		Parms.observationSpace=observationSpace;
		ProcessEvent(FindFunctionChecked(NAME_ANevarokMLTrainer_OnConstruct),&Parms);
	}
	static FName NAME_ANevarokMLTrainer_OnInit = FName(TEXT("OnInit"));
	void ANevarokMLTrainer::OnInit(int32 index, ANevarokMLEnv* env)
	{
		NevarokMLTrainer_eventOnInit_Parms Parms;
		Parms.index=index;
		Parms.env=env;
		ProcessEvent(FindFunctionChecked(NAME_ANevarokMLTrainer_OnInit),&Parms);
	}
	static FName NAME_ANevarokMLTrainer_OnInvalid = FName(TEXT("OnInvalid"));
	void ANevarokMLTrainer::OnInvalid()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANevarokMLTrainer_OnInvalid),NULL);
	}
	static FName NAME_ANevarokMLTrainer_OnReset = FName(TEXT("OnReset"));
	void ANevarokMLTrainer::OnReset(int32 index, ANevarokMLEnv* env)
	{
		NevarokMLTrainer_eventOnReset_Parms Parms;
		Parms.index=index;
		Parms.env=env;
		ProcessEvent(FindFunctionChecked(NAME_ANevarokMLTrainer_OnReset),&Parms);
	}
	static FName NAME_ANevarokMLTrainer_OnStart = FName(TEXT("OnStart"));
	void ANevarokMLTrainer::OnStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANevarokMLTrainer_OnStart),NULL);
	}
	static FName NAME_ANevarokMLTrainer_OnStep = FName(TEXT("OnStep"));
	void ANevarokMLTrainer::OnStep(int32 index, ANevarokMLEnv* env)
	{
		NevarokMLTrainer_eventOnStep_Parms Parms;
		Parms.index=index;
		Parms.env=env;
		ProcessEvent(FindFunctionChecked(NAME_ANevarokMLTrainer_OnStep),&Parms);
	}
	static FName NAME_ANevarokMLTrainer_OnStepSkip = FName(TEXT("OnStepSkip"));
	void ANevarokMLTrainer::OnStepSkip(int32 index, ANevarokMLEnv* env)
	{
		NevarokMLTrainer_eventOnStepSkip_Parms Parms;
		Parms.index=index;
		Parms.env=env;
		ProcessEvent(FindFunctionChecked(NAME_ANevarokMLTrainer_OnStepSkip),&Parms);
	}
	void ANevarokMLTrainer::StaticRegisterNativesANevarokMLTrainer()
	{
		UClass* Class = ANevarokMLTrainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearEnvs", &ANevarokMLTrainer::execClearEnvs },
			{ "CollectChildEnvs", &ANevarokMLTrainer::execCollectChildEnvs },
			{ "GetEnvsCount", &ANevarokMLTrainer::execGetEnvsCount },
			{ "Learn", &ANevarokMLTrainer::execLearn },
			{ "OnComplete", &ANevarokMLTrainer::execOnComplete },
			{ "OnConstruct", &ANevarokMLTrainer::execOnConstruct },
			{ "OnInit", &ANevarokMLTrainer::execOnInit },
			{ "OnInvalid", &ANevarokMLTrainer::execOnInvalid },
			{ "OnReset", &ANevarokMLTrainer::execOnReset },
			{ "OnStart", &ANevarokMLTrainer::execOnStart },
			{ "OnStep", &ANevarokMLTrainer::execOnStep },
			{ "OnStepSkip", &ANevarokMLTrainer::execOnStepSkip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANevarokMLTrainer_ClearEnvs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_ClearEnvs_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "NevarokML" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLTrainer_ClearEnvs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLTrainer, nullptr, "ClearEnvs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_ClearEnvs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_ClearEnvs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLTrainer_ClearEnvs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLTrainer_ClearEnvs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLTrainer_CollectChildEnvs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_CollectChildEnvs_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "NevarokML" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLTrainer_CollectChildEnvs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLTrainer, nullptr, "CollectChildEnvs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_CollectChildEnvs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_CollectChildEnvs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLTrainer_CollectChildEnvs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLTrainer_CollectChildEnvs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount_Statics
	{
		struct NevarokMLTrainer_eventGetEnvsCount_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventGetEnvsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLTrainer, nullptr, "GetEnvsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount_Statics::NevarokMLTrainer_eventGetEnvsCount_Parms), Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct NevarokMLTrainer_eventLearn_Parms
		{
			const UNevarokMLBaseAlgorithm* algorithm;
			ENevarokMLDevice device;
			int32 timesteps;
			int32 evalEps;
			int32 saveFreq;
			int32 logInterval;
			FFilePath loadModelPath;
			FName saveModelName;
			bool deterministic;
			bool showTensorboard;
			bool showReward;
			bool showStepDebug;
			bool showResetDebug;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_algorithm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_algorithm;
		static const UECodeGen_Private::FBytePropertyParams NewProp_device_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_device;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_timesteps;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_evalEps;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_saveFreq;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_logInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_loadModelPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_loadModelPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_saveModelName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_saveModelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deterministic_MetaData[];
#endif
		static void NewProp_deterministic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_deterministic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_showTensorboard_MetaData[];
#endif
		static void NewProp_showTensorboard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_showTensorboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_showReward_MetaData[];
#endif
		static void NewProp_showReward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_showReward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_showStepDebug_MetaData[];
#endif
		static void NewProp_showStepDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_showStepDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_showResetDebug_MetaData[];
#endif
		static void NewProp_showResetDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_showResetDebug;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_algorithm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_algorithm = { "algorithm", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventLearn_Parms, algorithm), Z_Construct_UClass_UNevarokMLBaseAlgorithm_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_algorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_algorithm_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_device_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventLearn_Parms, device), Z_Construct_UEnum_NevarokML_ENevarokMLDevice, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_device_MetaData)) }; // 2240188457
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_timesteps = { "timesteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventLearn_Parms, timesteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_evalEps = { "evalEps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventLearn_Parms, evalEps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_saveFreq = { "saveFreq", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventLearn_Parms, saveFreq), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_logInterval = { "logInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventLearn_Parms, logInterval), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_loadModelPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_loadModelPath = { "loadModelPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventLearn_Parms, loadModelPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_loadModelPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_loadModelPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_saveModelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_saveModelName = { "saveModelName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventLearn_Parms, saveModelName), METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_saveModelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_saveModelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_deterministic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_deterministic_SetBit(void* Obj)
	{
		((NevarokMLTrainer_eventLearn_Parms*)Obj)->deterministic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_deterministic = { "deterministic", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLTrainer_eventLearn_Parms), &Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_deterministic_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_deterministic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_deterministic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showTensorboard_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showTensorboard_SetBit(void* Obj)
	{
		((NevarokMLTrainer_eventLearn_Parms*)Obj)->showTensorboard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showTensorboard = { "showTensorboard", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLTrainer_eventLearn_Parms), &Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showTensorboard_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showTensorboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showTensorboard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showReward_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showReward_SetBit(void* Obj)
	{
		((NevarokMLTrainer_eventLearn_Parms*)Obj)->showReward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showReward = { "showReward", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLTrainer_eventLearn_Parms), &Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showReward_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showReward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showStepDebug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showStepDebug_SetBit(void* Obj)
	{
		((NevarokMLTrainer_eventLearn_Parms*)Obj)->showStepDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showStepDebug = { "showStepDebug", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLTrainer_eventLearn_Parms), &Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showStepDebug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showStepDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showStepDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showResetDebug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showResetDebug_SetBit(void* Obj)
	{
		((NevarokMLTrainer_eventLearn_Parms*)Obj)->showResetDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showResetDebug = { "showResetDebug", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLTrainer_eventLearn_Parms), &Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showResetDebug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showResetDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showResetDebug_MetaData)) };
	void Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLTrainer_eventLearn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLTrainer_eventLearn_Parms), &Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_algorithm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_device_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_timesteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_evalEps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_saveFreq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_logInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_loadModelPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_saveModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_deterministic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showTensorboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showReward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showStepDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_showResetDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "CPP_Default_deterministic", "true" },
		{ "CPP_Default_evalEps", "0" },
		{ "CPP_Default_loadModelPath", "()" },
		{ "CPP_Default_logInterval", "1" },
		{ "CPP_Default_saveFreq", "6000" },
		{ "CPP_Default_saveModelName", "Model" },
		{ "CPP_Default_showResetDebug", "true" },
		{ "CPP_Default_showReward", "false" },
		{ "CPP_Default_showStepDebug", "false" },
		{ "CPP_Default_showTensorboard", "false" },
		{ "CPP_Default_timesteps", "10000" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLTrainer, nullptr, "Learn", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::NevarokMLTrainer_eventLearn_Parms), Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLTrainer_Learn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLTrainer_Learn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLTrainer_OnComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_OnComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLTrainer_OnComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLTrainer, nullptr, "OnComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_OnComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_OnComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLTrainer_OnComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLTrainer_OnComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actionSpace;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_observationSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct_Statics::NewProp_actionSpace = { "actionSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventOnConstruct_Parms, actionSpace), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct_Statics::NewProp_observationSpace = { "observationSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventOnConstruct_Parms, observationSpace), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct_Statics::NewProp_actionSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct_Statics::NewProp_observationSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLTrainer, nullptr, "OnConstruct", nullptr, nullptr, sizeof(NevarokMLTrainer_eventOnConstruct_Parms), Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLTrainer_OnInit_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_env;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_OnInit_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventOnInit_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_OnInit_Statics::NewProp_env = { "env", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventOnInit_Parms, env), Z_Construct_UClass_ANevarokMLEnv_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLTrainer_OnInit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_OnInit_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_OnInit_Statics::NewProp_env,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_OnInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLTrainer_OnInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLTrainer, nullptr, "OnInit", nullptr, nullptr, sizeof(NevarokMLTrainer_eventOnInit_Parms), Z_Construct_UFunction_ANevarokMLTrainer_OnInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_OnInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_OnInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_OnInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLTrainer_OnInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLTrainer_OnInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLTrainer_OnInvalid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_OnInvalid_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLTrainer_OnInvalid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLTrainer, nullptr, "OnInvalid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_OnInvalid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_OnInvalid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLTrainer_OnInvalid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLTrainer_OnInvalid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLTrainer_OnReset_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_env;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_OnReset_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventOnReset_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_OnReset_Statics::NewProp_env = { "env", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventOnReset_Parms, env), Z_Construct_UClass_ANevarokMLEnv_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLTrainer_OnReset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_OnReset_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_OnReset_Statics::NewProp_env,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_OnReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLTrainer_OnReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLTrainer, nullptr, "OnReset", nullptr, nullptr, sizeof(NevarokMLTrainer_eventOnReset_Parms), Z_Construct_UFunction_ANevarokMLTrainer_OnReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_OnReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_OnReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_OnReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLTrainer_OnReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLTrainer_OnReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLTrainer_OnStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_OnStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLTrainer_OnStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLTrainer, nullptr, "OnStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_OnStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_OnStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLTrainer_OnStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLTrainer_OnStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLTrainer_OnStep_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_env;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_OnStep_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventOnStep_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_OnStep_Statics::NewProp_env = { "env", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventOnStep_Parms, env), Z_Construct_UClass_ANevarokMLEnv_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLTrainer_OnStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_OnStep_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_OnStep_Statics::NewProp_env,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_OnStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLTrainer_OnStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLTrainer, nullptr, "OnStep", nullptr, nullptr, sizeof(NevarokMLTrainer_eventOnStep_Parms), Z_Construct_UFunction_ANevarokMLTrainer_OnStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_OnStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_OnStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_OnStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLTrainer_OnStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLTrainer_OnStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_env;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventOnStepSkip_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip_Statics::NewProp_env = { "env", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTrainer_eventOnStepSkip_Parms, env), Z_Construct_UClass_ANevarokMLEnv_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip_Statics::NewProp_env,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANevarokMLTrainer, nullptr, "OnStepSkip", nullptr, nullptr, sizeof(NevarokMLTrainer_eventOnStepSkip_Parms), Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANevarokMLTrainer);
	UClass* Z_Construct_UClass_ANevarokMLTrainer_NoRegister()
	{
		return ANevarokMLTrainer::StaticClass();
	}
	struct Z_Construct_UClass_ANevarokMLTrainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__autoKillBackend_MetaData[];
#endif
		static void NewProp__autoKillBackend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__autoKillBackend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__simulate_MetaData[];
#endif
		static void NewProp__simulate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__simulate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__actionSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__actionSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__observationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__observationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__socketServer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__socketServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__backendAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__backendAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__backendPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__backendPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__backendVerbose_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__backendVerbose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__maxEnvsCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__maxEnvsCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__tickInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__tickInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__envUpdatesPerTick_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__envUpdatesPerTick;
		static const UECodeGen_Private::FObjectPropertyParams NewProp__envs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__envs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__envs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp__dependencyTrainers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__dependencyTrainers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__dependencyTrainers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANevarokMLTrainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANevarokMLTrainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANevarokMLTrainer_ClearEnvs, "ClearEnvs" }, // 2966437377
		{ &Z_Construct_UFunction_ANevarokMLTrainer_CollectChildEnvs, "CollectChildEnvs" }, // 1343003901
		{ &Z_Construct_UFunction_ANevarokMLTrainer_GetEnvsCount, "GetEnvsCount" }, // 237670566
		{ &Z_Construct_UFunction_ANevarokMLTrainer_Learn, "Learn" }, // 3344273833
		{ &Z_Construct_UFunction_ANevarokMLTrainer_OnComplete, "OnComplete" }, // 985625988
		{ &Z_Construct_UFunction_ANevarokMLTrainer_OnConstruct, "OnConstruct" }, // 2386040398
		{ &Z_Construct_UFunction_ANevarokMLTrainer_OnInit, "OnInit" }, // 1931506577
		{ &Z_Construct_UFunction_ANevarokMLTrainer_OnInvalid, "OnInvalid" }, // 3451527368
		{ &Z_Construct_UFunction_ANevarokMLTrainer_OnReset, "OnReset" }, // 2084711217
		{ &Z_Construct_UFunction_ANevarokMLTrainer_OnStart, "OnStart" }, // 3564915589
		{ &Z_Construct_UFunction_ANevarokMLTrainer_OnStep, "OnStep" }, // 2648631779
		{ &Z_Construct_UFunction_ANevarokMLTrainer_OnStepSkip, "OnStepSkip" }, // 2828743793
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Learning/NevarokMLTrainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__autoKillBackend_MetaData[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	void Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__autoKillBackend_SetBit(void* Obj)
	{
		((ANevarokMLTrainer*)Obj)->_autoKillBackend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__autoKillBackend = { "_autoKillBackend", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ANevarokMLTrainer), &Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__autoKillBackend_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__autoKillBackend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__autoKillBackend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__simulate_MetaData[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	void Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__simulate_SetBit(void* Obj)
	{
		((ANevarokMLTrainer*)Obj)->_simulate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__simulate = { "_simulate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ANevarokMLTrainer), &Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__simulate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__simulate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__simulate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__actionSpace_MetaData[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__actionSpace = { "_actionSpace", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLTrainer, _actionSpace), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__actionSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__actionSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__observationSpace_MetaData[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__observationSpace = { "_observationSpace", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLTrainer, _observationSpace), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__observationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__observationSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__socketServer_MetaData[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__socketServer = { "_socketServer", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLTrainer, _socketServer), Z_Construct_UClass_UNevarokMLSocketServer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__socketServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__socketServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendAddress_MetaData[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendAddress = { "_backendAddress", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLTrainer, _backendAddress), METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendPort_MetaData[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendPort = { "_backendPort", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLTrainer, _backendPort), METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendVerbose_MetaData[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendVerbose = { "_backendVerbose", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLTrainer, _backendVerbose), METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendVerbose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendVerbose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__maxEnvsCount_MetaData[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__maxEnvsCount = { "_maxEnvsCount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLTrainer, _maxEnvsCount), METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__maxEnvsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__maxEnvsCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__tickInterval_MetaData[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__tickInterval = { "_tickInterval", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLTrainer, _tickInterval), METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__tickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__tickInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__envUpdatesPerTick_MetaData[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__envUpdatesPerTick = { "_envUpdatesPerTick", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLTrainer, _envUpdatesPerTick), METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__envUpdatesPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__envUpdatesPerTick_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__envs_Inner = { "_envs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ANevarokMLEnv_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__envs_MetaData[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__envs = { "_envs", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLTrainer, _envs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__envs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__envs_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__dependencyTrainers_Inner = { "_dependencyTrainers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ANevarokMLTrainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__dependencyTrainers_MetaData[] = {
		{ "Category", "NevarokML|Trainer" },
		{ "ModuleRelativePath", "Public/Learning/NevarokMLTrainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__dependencyTrainers = { "_dependencyTrainers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANevarokMLTrainer, _dependencyTrainers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__dependencyTrainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__dependencyTrainers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANevarokMLTrainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__autoKillBackend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__simulate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__actionSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__observationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__socketServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__backendVerbose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__maxEnvsCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__tickInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__envUpdatesPerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__envs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__envs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__dependencyTrainers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANevarokMLTrainer_Statics::NewProp__dependencyTrainers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANevarokMLTrainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANevarokMLTrainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANevarokMLTrainer_Statics::ClassParams = {
		&ANevarokMLTrainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANevarokMLTrainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANevarokMLTrainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANevarokMLTrainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANevarokMLTrainer()
	{
		if (!Z_Registration_Info_UClass_ANevarokMLTrainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANevarokMLTrainer.OuterSingleton, Z_Construct_UClass_ANevarokMLTrainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANevarokMLTrainer.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<ANevarokMLTrainer>()
	{
		return ANevarokMLTrainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANevarokMLTrainer);
	ANevarokMLTrainer::~ANevarokMLTrainer() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_Statics::EnumInfo[] = {
		{ ENevarokMLState_StaticEnum, TEXT("ENevarokMLState"), &Z_Registration_Info_UEnum_ENevarokMLState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1871040949U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_Statics::ScriptStructInfo[] = {
		{ FNevarokMLTrainerTickFunction::StaticStruct, Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics::NewStructOps, TEXT("NevarokMLTrainerTickFunction"), &Z_Registration_Info_UScriptStruct_NevarokMLTrainerTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNevarokMLTrainerTickFunction), 4288616576U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANevarokMLTrainer, ANevarokMLTrainer::StaticClass, TEXT("ANevarokMLTrainer"), &Z_Registration_Info_UClass_ANevarokMLTrainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANevarokMLTrainer), 2455993255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_3964033204(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
