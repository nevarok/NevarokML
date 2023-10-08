// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Data/NevarokMLDataLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLDataLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLBaseAlgorithm_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLDataLibrary();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLDataLibrary_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSample_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSpace_NoRegister();
	NEVAROKML_API UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLAlgorithm();
	NEVAROKML_API UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLData();
	NEVAROKML_API UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLDevice();
	NEVAROKML_API UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLPolicy();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENevarokMLData;
	static UEnum* ENevarokMLData_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENevarokMLData.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENevarokMLData.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NevarokML_ENevarokMLData, (UObject*)Z_Construct_UPackage__Script_NevarokML(), TEXT("ENevarokMLData"));
		}
		return Z_Registration_Info_UEnum_ENevarokMLData.OuterSingleton;
	}
	template<> NEVAROKML_API UEnum* StaticEnum<ENevarokMLData>()
	{
		return ENevarokMLData_StaticEnum();
	}
	struct Z_Construct_UEnum_NevarokML_ENevarokMLData_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NevarokML_ENevarokMLData_Statics::Enumerators[] = {
		{ "ENevarokMLData::NONE", (int64)ENevarokMLData::NONE },
		{ "ENevarokMLData::REINFORCEMENT", (int64)ENevarokMLData::REINFORCEMENT },
		{ "ENevarokMLData::ACTION", (int64)ENevarokMLData::ACTION },
		{ "ENevarokMLData::OBSERVATION", (int64)ENevarokMLData::OBSERVATION },
		{ "ENevarokMLData::PREDICTION", (int64)ENevarokMLData::PREDICTION },
		{ "ENevarokMLData::RESET", (int64)ENevarokMLData::RESET },
		{ "ENevarokMLData::COMPLETE", (int64)ENevarokMLData::COMPLETE },
		{ "ENevarokMLData::READY", (int64)ENevarokMLData::READY },
		{ "ENevarokMLData::EXPERT", (int64)ENevarokMLData::EXPERT },
		{ "ENevarokMLData::IMITATION", (int64)ENevarokMLData::IMITATION },
		{ "ENevarokMLData::ERROR", (int64)ENevarokMLData::ERROR },
		{ "ENevarokMLData::SAVE", (int64)ENevarokMLData::SAVE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NevarokML_ENevarokMLData_Statics::Enum_MetaDataParams[] = {
		{ "ACTION.DisplayName", "ACTION" },
		{ "ACTION.Name", "ENevarokMLData::ACTION" },
		{ "BlueprintType", "true" },
		{ "COMPLETE.DisplayName", "COMPLETE" },
		{ "COMPLETE.Name", "ENevarokMLData::COMPLETE" },
		{ "ERROR.DisplayName", "ERROR" },
		{ "ERROR.Name", "ENevarokMLData::ERROR" },
		{ "EXPERT.DisplayName", "EXPERT" },
		{ "EXPERT.Name", "ENevarokMLData::EXPERT" },
		{ "IMITATION.DisplayName", "IMITATION" },
		{ "IMITATION.Name", "ENevarokMLData::IMITATION" },
		{ "ModuleRelativePath", "Public/Data/NevarokMLDataLibrary.h" },
		{ "NONE.Hidden", "" },
		{ "NONE.Name", "ENevarokMLData::NONE" },
		{ "OBSERVATION.DisplayName", "OBSERVATION" },
		{ "OBSERVATION.Name", "ENevarokMLData::OBSERVATION" },
		{ "PREDICTION.DisplayName", "PREDICTION" },
		{ "PREDICTION.Name", "ENevarokMLData::PREDICTION" },
		{ "READY.DisplayName", "READY" },
		{ "READY.Name", "ENevarokMLData::READY" },
		{ "REINFORCEMENT.DisplayName", "REINFORCEMENT" },
		{ "REINFORCEMENT.Name", "ENevarokMLData::REINFORCEMENT" },
		{ "RESET.DisplayName", "RESET" },
		{ "RESET.Name", "ENevarokMLData::RESET" },
		{ "SAVE.DisplayName", "SAVE" },
		{ "SAVE.Name", "ENevarokMLData::SAVE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NevarokML_ENevarokMLData_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NevarokML,
		nullptr,
		"ENevarokMLData",
		"ENevarokMLData",
		Z_Construct_UEnum_NevarokML_ENevarokMLData_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NevarokML_ENevarokMLData_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NevarokML_ENevarokMLData_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NevarokML_ENevarokMLData_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLData()
	{
		if (!Z_Registration_Info_UEnum_ENevarokMLData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENevarokMLData.InnerSingleton, Z_Construct_UEnum_NevarokML_ENevarokMLData_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENevarokMLData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENevarokMLAlgorithm;
	static UEnum* ENevarokMLAlgorithm_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENevarokMLAlgorithm.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENevarokMLAlgorithm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NevarokML_ENevarokMLAlgorithm, (UObject*)Z_Construct_UPackage__Script_NevarokML(), TEXT("ENevarokMLAlgorithm"));
		}
		return Z_Registration_Info_UEnum_ENevarokMLAlgorithm.OuterSingleton;
	}
	template<> NEVAROKML_API UEnum* StaticEnum<ENevarokMLAlgorithm>()
	{
		return ENevarokMLAlgorithm_StaticEnum();
	}
	struct Z_Construct_UEnum_NevarokML_ENevarokMLAlgorithm_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NevarokML_ENevarokMLAlgorithm_Statics::Enumerators[] = {
		{ "ENevarokMLAlgorithm::NONE", (int64)ENevarokMLAlgorithm::NONE },
		{ "ENevarokMLAlgorithm::PPO", (int64)ENevarokMLAlgorithm::PPO },
		{ "ENevarokMLAlgorithm::A2C", (int64)ENevarokMLAlgorithm::A2C },
		{ "ENevarokMLAlgorithm::DDPG", (int64)ENevarokMLAlgorithm::DDPG },
		{ "ENevarokMLAlgorithm::DQN", (int64)ENevarokMLAlgorithm::DQN },
		{ "ENevarokMLAlgorithm::SAC", (int64)ENevarokMLAlgorithm::SAC },
		{ "ENevarokMLAlgorithm::TD3", (int64)ENevarokMLAlgorithm::TD3 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NevarokML_ENevarokMLAlgorithm_Statics::Enum_MetaDataParams[] = {
		{ "A2C.DisplayName", "A2C" },
		{ "A2C.Name", "ENevarokMLAlgorithm::A2C" },
		{ "BlueprintType", "true" },
		{ "DDPG.DisplayName", "DDPG" },
		{ "DDPG.Name", "ENevarokMLAlgorithm::DDPG" },
		{ "DQN.DisplayName", "DQN" },
		{ "DQN.Name", "ENevarokMLAlgorithm::DQN" },
		{ "ModuleRelativePath", "Public/Data/NevarokMLDataLibrary.h" },
		{ "NONE.Hidden", "" },
		{ "NONE.Name", "ENevarokMLAlgorithm::NONE" },
		{ "PPO.DisplayName", "PPO" },
		{ "PPO.Name", "ENevarokMLAlgorithm::PPO" },
		{ "SAC.DisplayName", "SAC" },
		{ "SAC.Name", "ENevarokMLAlgorithm::SAC" },
		{ "TD3.DisplayName", "TD3" },
		{ "TD3.Name", "ENevarokMLAlgorithm::TD3" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NevarokML_ENevarokMLAlgorithm_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NevarokML,
		nullptr,
		"ENevarokMLAlgorithm",
		"ENevarokMLAlgorithm",
		Z_Construct_UEnum_NevarokML_ENevarokMLAlgorithm_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NevarokML_ENevarokMLAlgorithm_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NevarokML_ENevarokMLAlgorithm_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NevarokML_ENevarokMLAlgorithm_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLAlgorithm()
	{
		if (!Z_Registration_Info_UEnum_ENevarokMLAlgorithm.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENevarokMLAlgorithm.InnerSingleton, Z_Construct_UEnum_NevarokML_ENevarokMLAlgorithm_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENevarokMLAlgorithm.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENevarokMLPolicy;
	static UEnum* ENevarokMLPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENevarokMLPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENevarokMLPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NevarokML_ENevarokMLPolicy, (UObject*)Z_Construct_UPackage__Script_NevarokML(), TEXT("ENevarokMLPolicy"));
		}
		return Z_Registration_Info_UEnum_ENevarokMLPolicy.OuterSingleton;
	}
	template<> NEVAROKML_API UEnum* StaticEnum<ENevarokMLPolicy>()
	{
		return ENevarokMLPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_NevarokML_ENevarokMLPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NevarokML_ENevarokMLPolicy_Statics::Enumerators[] = {
		{ "ENevarokMLPolicy::NONE", (int64)ENevarokMLPolicy::NONE },
		{ "ENevarokMLPolicy::MLP_POLICY", (int64)ENevarokMLPolicy::MLP_POLICY },
		{ "ENevarokMLPolicy::CNN_POLICY", (int64)ENevarokMLPolicy::CNN_POLICY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NevarokML_ENevarokMLPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CNN_POLICY.DisplayName", "CnnPolicy" },
		{ "CNN_POLICY.Name", "ENevarokMLPolicy::CNN_POLICY" },
		{ "MLP_POLICY.DisplayName", "MlpPolicy" },
		{ "MLP_POLICY.Name", "ENevarokMLPolicy::MLP_POLICY" },
		{ "ModuleRelativePath", "Public/Data/NevarokMLDataLibrary.h" },
		{ "NONE.Hidden", "" },
		{ "NONE.Name", "ENevarokMLPolicy::NONE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NevarokML_ENevarokMLPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NevarokML,
		nullptr,
		"ENevarokMLPolicy",
		"ENevarokMLPolicy",
		Z_Construct_UEnum_NevarokML_ENevarokMLPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NevarokML_ENevarokMLPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NevarokML_ENevarokMLPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NevarokML_ENevarokMLPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLPolicy()
	{
		if (!Z_Registration_Info_UEnum_ENevarokMLPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENevarokMLPolicy.InnerSingleton, Z_Construct_UEnum_NevarokML_ENevarokMLPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENevarokMLPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENevarokMLDevice;
	static UEnum* ENevarokMLDevice_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENevarokMLDevice.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENevarokMLDevice.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NevarokML_ENevarokMLDevice, (UObject*)Z_Construct_UPackage__Script_NevarokML(), TEXT("ENevarokMLDevice"));
		}
		return Z_Registration_Info_UEnum_ENevarokMLDevice.OuterSingleton;
	}
	template<> NEVAROKML_API UEnum* StaticEnum<ENevarokMLDevice>()
	{
		return ENevarokMLDevice_StaticEnum();
	}
	struct Z_Construct_UEnum_NevarokML_ENevarokMLDevice_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NevarokML_ENevarokMLDevice_Statics::Enumerators[] = {
		{ "ENevarokMLDevice::AUTO", (int64)ENevarokMLDevice::AUTO },
		{ "ENevarokMLDevice::CPU", (int64)ENevarokMLDevice::CPU },
		{ "ENevarokMLDevice::GPU", (int64)ENevarokMLDevice::GPU },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NevarokML_ENevarokMLDevice_Statics::Enum_MetaDataParams[] = {
		{ "AUTO.DisplayName", "AUTO" },
		{ "AUTO.Name", "ENevarokMLDevice::AUTO" },
		{ "BlueprintType", "true" },
		{ "CPU.DisplayName", "CPU" },
		{ "CPU.Name", "ENevarokMLDevice::CPU" },
		{ "GPU.DisplayName", "GPU" },
		{ "GPU.Name", "ENevarokMLDevice::GPU" },
		{ "ModuleRelativePath", "Public/Data/NevarokMLDataLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NevarokML_ENevarokMLDevice_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NevarokML,
		nullptr,
		"ENevarokMLDevice",
		"ENevarokMLDevice",
		Z_Construct_UEnum_NevarokML_ENevarokMLDevice_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NevarokML_ENevarokMLDevice_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NevarokML_ENevarokMLDevice_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NevarokML_ENevarokMLDevice_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLDevice()
	{
		if (!Z_Registration_Info_UEnum_ENevarokMLDevice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENevarokMLDevice.InnerSingleton, Z_Construct_UEnum_NevarokML_ENevarokMLDevice_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENevarokMLDevice.InnerSingleton;
	}
	DEFINE_FUNCTION(UNevarokMLDataLibrary::execObservation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_OBJECT(UNevarokMLSample,Z_Param_sample);
		P_GET_PROPERTY(FFloatProperty,Z_Param_reward);
		P_GET_UBOOL(Z_Param_done);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UNevarokMLDataLibrary::Observation(Z_Param_index,Z_Param_sample,Z_Param_reward,Z_Param_done);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLDataLibrary::execReinforcementLearning)
	{
		P_GET_OBJECT(UNevarokMLBaseAlgorithm,Z_Param_algorithm);
		P_GET_ENUM(ENevarokMLDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_envCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_timesteps);
		P_GET_PROPERTY(FIntProperty,Z_Param_evalEps);
		P_GET_PROPERTY(FIntProperty,Z_Param_saveFreq);
		P_GET_PROPERTY(FIntProperty,Z_Param_logInterval);
		P_GET_PROPERTY(FStrProperty,Z_Param_logPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_loadModelPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_saveModelPath);
		P_GET_UBOOL(Z_Param_deterministic);
		P_GET_UBOOL(Z_Param_showTensorboard);
		P_GET_UBOOL(Z_Param_showReward);
		P_GET_UBOOL(Z_Param_showStepDebug);
		P_GET_UBOOL(Z_Param_showResetDebug);
		P_GET_OBJECT(UNevarokMLSpace,Z_Param_actSpace);
		P_GET_OBJECT(UNevarokMLSpace,Z_Param_obsSpace);
		P_GET_UBOOL_REF(Z_Param_Out_valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UNevarokMLDataLibrary::ReinforcementLearning(Z_Param_algorithm,ENevarokMLDevice(Z_Param_device),Z_Param_envCount,Z_Param_timesteps,Z_Param_evalEps,Z_Param_saveFreq,Z_Param_logInterval,Z_Param_logPath,Z_Param_loadModelPath,Z_Param_saveModelPath,Z_Param_deterministic,Z_Param_showTensorboard,Z_Param_showReward,Z_Param_showStepDebug,Z_Param_showResetDebug,Z_Param_actSpace,Z_Param_obsSpace,Z_Param_Out_valid);
		P_NATIVE_END;
	}
	void UNevarokMLDataLibrary::StaticRegisterNativesUNevarokMLDataLibrary()
	{
		UClass* Class = UNevarokMLDataLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Observation", &UNevarokMLDataLibrary::execObservation },
			{ "ReinforcementLearning", &UNevarokMLDataLibrary::execReinforcementLearning },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics
	{
		struct NevarokMLDataLibrary_eventObservation_Parms
		{
			int32 index;
			const UNevarokMLSample* sample;
			float reward;
			bool done;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sample_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_reward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_done_MetaData[];
#endif
		static void NewProp_done_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_done;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventObservation_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_sample_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_sample = { "sample", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventObservation_Parms, sample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_sample_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_sample_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_reward_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_reward = { "reward", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventObservation_Parms, reward), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_reward_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_reward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_done_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_done_SetBit(void* Obj)
	{
		((NevarokMLDataLibrary_eventObservation_Parms*)Obj)->done = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_done = { "done", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLDataLibrary_eventObservation_Parms), &Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_done_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_done_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_done_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventObservation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_sample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_reward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|DataLibrary" },
		{ "ModuleRelativePath", "Public/Data/NevarokMLDataLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLDataLibrary, nullptr, "Observation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::NevarokMLDataLibrary_eventObservation_Parms), Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLDataLibrary_Observation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLDataLibrary_Observation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics
	{
		struct NevarokMLDataLibrary_eventReinforcementLearning_Parms
		{
			const UNevarokMLBaseAlgorithm* algorithm;
			ENevarokMLDevice device;
			int32 envCount;
			int32 timesteps;
			int32 evalEps;
			int32 saveFreq;
			int32 logInterval;
			FString logPath;
			FString loadModelPath;
			FString saveModelPath;
			bool deterministic;
			bool showTensorboard;
			bool showReward;
			bool showStepDebug;
			bool showResetDebug;
			const UNevarokMLSpace* actSpace;
			const UNevarokMLSpace* obsSpace;
			bool valid;
			TArray<uint8> ReturnValue;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_envCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_envCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timesteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_timesteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_evalEps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_evalEps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_saveFreq_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_saveFreq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_logInterval_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_logInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_logPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_logPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_loadModelPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_loadModelPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_saveModelPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_saveModelPath;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_obsSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_obsSpace;
		static void NewProp_valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_valid;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_algorithm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_algorithm = { "algorithm", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventReinforcementLearning_Parms, algorithm), Z_Construct_UClass_UNevarokMLBaseAlgorithm_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_algorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_algorithm_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_device_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventReinforcementLearning_Parms, device), Z_Construct_UEnum_NevarokML_ENevarokMLDevice, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_device_MetaData)) }; // 2240188457
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_envCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_envCount = { "envCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventReinforcementLearning_Parms, envCount), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_envCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_envCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_timesteps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_timesteps = { "timesteps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventReinforcementLearning_Parms, timesteps), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_timesteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_timesteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_evalEps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_evalEps = { "evalEps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventReinforcementLearning_Parms, evalEps), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_evalEps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_evalEps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_saveFreq_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_saveFreq = { "saveFreq", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventReinforcementLearning_Parms, saveFreq), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_saveFreq_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_saveFreq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_logInterval_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_logInterval = { "logInterval", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventReinforcementLearning_Parms, logInterval), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_logInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_logInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_logPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_logPath = { "logPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventReinforcementLearning_Parms, logPath), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_logPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_logPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_loadModelPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_loadModelPath = { "loadModelPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventReinforcementLearning_Parms, loadModelPath), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_loadModelPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_loadModelPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_saveModelPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_saveModelPath = { "saveModelPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventReinforcementLearning_Parms, saveModelPath), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_saveModelPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_saveModelPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_deterministic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_deterministic_SetBit(void* Obj)
	{
		((NevarokMLDataLibrary_eventReinforcementLearning_Parms*)Obj)->deterministic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_deterministic = { "deterministic", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLDataLibrary_eventReinforcementLearning_Parms), &Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_deterministic_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_deterministic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_deterministic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showTensorboard_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showTensorboard_SetBit(void* Obj)
	{
		((NevarokMLDataLibrary_eventReinforcementLearning_Parms*)Obj)->showTensorboard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showTensorboard = { "showTensorboard", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLDataLibrary_eventReinforcementLearning_Parms), &Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showTensorboard_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showTensorboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showTensorboard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showReward_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showReward_SetBit(void* Obj)
	{
		((NevarokMLDataLibrary_eventReinforcementLearning_Parms*)Obj)->showReward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showReward = { "showReward", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLDataLibrary_eventReinforcementLearning_Parms), &Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showReward_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showReward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showStepDebug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showStepDebug_SetBit(void* Obj)
	{
		((NevarokMLDataLibrary_eventReinforcementLearning_Parms*)Obj)->showStepDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showStepDebug = { "showStepDebug", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLDataLibrary_eventReinforcementLearning_Parms), &Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showStepDebug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showStepDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showStepDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showResetDebug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showResetDebug_SetBit(void* Obj)
	{
		((NevarokMLDataLibrary_eventReinforcementLearning_Parms*)Obj)->showResetDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showResetDebug = { "showResetDebug", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLDataLibrary_eventReinforcementLearning_Parms), &Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showResetDebug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showResetDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showResetDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_actSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_actSpace = { "actSpace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventReinforcementLearning_Parms, actSpace), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_actSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_actSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_obsSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_obsSpace = { "obsSpace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventReinforcementLearning_Parms, obsSpace), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_obsSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_obsSpace_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_valid_SetBit(void* Obj)
	{
		((NevarokMLDataLibrary_eventReinforcementLearning_Parms*)Obj)->valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_valid = { "valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLDataLibrary_eventReinforcementLearning_Parms), &Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLDataLibrary_eventReinforcementLearning_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_algorithm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_device_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_envCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_timesteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_evalEps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_saveFreq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_logInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_logPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_loadModelPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_saveModelPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_deterministic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showTensorboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showReward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showStepDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_showResetDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_actSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_obsSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|DataLibrary" },
		{ "ModuleRelativePath", "Public/Data/NevarokMLDataLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLDataLibrary, nullptr, "ReinforcementLearning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::NevarokMLDataLibrary_eventReinforcementLearning_Parms), Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLDataLibrary);
	UClass* Z_Construct_UClass_UNevarokMLDataLibrary_NoRegister()
	{
		return UNevarokMLDataLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLDataLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLDataLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLDataLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLDataLibrary_Observation, "Observation" }, // 2151943038
		{ &Z_Construct_UFunction_UNevarokMLDataLibrary_ReinforcementLearning, "ReinforcementLearning" }, // 4169258944
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLDataLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Data/NevarokMLDataLibrary.h" },
		{ "ModuleRelativePath", "Public/Data/NevarokMLDataLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLDataLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLDataLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLDataLibrary_Statics::ClassParams = {
		&UNevarokMLDataLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLDataLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLDataLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLDataLibrary()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLDataLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLDataLibrary.OuterSingleton, Z_Construct_UClass_UNevarokMLDataLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLDataLibrary.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLDataLibrary>()
	{
		return UNevarokMLDataLibrary::StaticClass();
	}
	UNevarokMLDataLibrary::UNevarokMLDataLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLDataLibrary);
	UNevarokMLDataLibrary::~UNevarokMLDataLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Data_NevarokMLDataLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Data_NevarokMLDataLibrary_h_Statics::EnumInfo[] = {
		{ ENevarokMLData_StaticEnum, TEXT("ENevarokMLData"), &Z_Registration_Info_UEnum_ENevarokMLData, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2666375053U) },
		{ ENevarokMLAlgorithm_StaticEnum, TEXT("ENevarokMLAlgorithm"), &Z_Registration_Info_UEnum_ENevarokMLAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3768941303U) },
		{ ENevarokMLPolicy_StaticEnum, TEXT("ENevarokMLPolicy"), &Z_Registration_Info_UEnum_ENevarokMLPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3070622388U) },
		{ ENevarokMLDevice_StaticEnum, TEXT("ENevarokMLDevice"), &Z_Registration_Info_UEnum_ENevarokMLDevice, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2240188457U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Data_NevarokMLDataLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLDataLibrary, UNevarokMLDataLibrary::StaticClass, TEXT("UNevarokMLDataLibrary"), &Z_Registration_Info_UClass_UNevarokMLDataLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLDataLibrary), 1162320749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Data_NevarokMLDataLibrary_h_2829586976(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Data_NevarokMLDataLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Data_NevarokMLDataLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Data_NevarokMLDataLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Data_NevarokMLDataLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
