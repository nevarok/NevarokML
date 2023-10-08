// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Models/NevarokMLBaseAlgorithm.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLBaseAlgorithm() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLBaseAlgorithm();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLBaseAlgorithm_NoRegister();
	NEVAROKML_API UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLPolicy();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLBaseAlgorithm::execTD3)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_ENUM(ENevarokMLPolicy,Z_Param_policy);
		P_GET_PROPERTY(FFloatProperty,Z_Param_learningRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_bufferSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_learningStarts);
		P_GET_PROPERTY(FIntProperty,Z_Param_batchSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_tau);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gamma);
		P_GET_PROPERTY(FIntProperty,Z_Param_trainFreq);
		P_GET_PROPERTY(FIntProperty,Z_Param_gradientSteps);
		P_GET_UBOOL(Z_Param_optimizeMemoryUsage);
		P_GET_PROPERTY(FIntProperty,Z_Param_policyDelay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_targetPolicyNoise);
		P_GET_PROPERTY(FFloatProperty,Z_Param_targetNoiseClip);
		P_GET_PROPERTY(FIntProperty,Z_Param_verbose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLBaseAlgorithm**)Z_Param__Result=UNevarokMLBaseAlgorithm::TD3(Z_Param_owner,ENevarokMLPolicy(Z_Param_policy),Z_Param_learningRate,Z_Param_bufferSize,Z_Param_learningStarts,Z_Param_batchSize,Z_Param_tau,Z_Param_gamma,Z_Param_trainFreq,Z_Param_gradientSteps,Z_Param_optimizeMemoryUsage,Z_Param_policyDelay,Z_Param_targetPolicyNoise,Z_Param_targetNoiseClip,Z_Param_verbose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLBaseAlgorithm::execSAC)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_ENUM(ENevarokMLPolicy,Z_Param_policy);
		P_GET_PROPERTY(FFloatProperty,Z_Param_learningRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_bufferSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_learningStarts);
		P_GET_PROPERTY(FIntProperty,Z_Param_batchSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_tau);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gamma);
		P_GET_PROPERTY(FIntProperty,Z_Param_trainFreq);
		P_GET_PROPERTY(FIntProperty,Z_Param_gradientSteps);
		P_GET_UBOOL(Z_Param_optimizeMemoryUsage);
		P_GET_UBOOL(Z_Param_entCoefAuto);
		P_GET_PROPERTY(FFloatProperty,Z_Param_entCoef);
		P_GET_PROPERTY(FIntProperty,Z_Param_targetUpdateInterval);
		P_GET_UBOOL(Z_Param_targetEntropyAuto);
		P_GET_PROPERTY(FFloatProperty,Z_Param_targetEntropy);
		P_GET_UBOOL(Z_Param_useSde);
		P_GET_PROPERTY(FIntProperty,Z_Param_sdeSampleFreq);
		P_GET_UBOOL(Z_Param_useSdeAtWarmup);
		P_GET_PROPERTY(FIntProperty,Z_Param_verbose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLBaseAlgorithm**)Z_Param__Result=UNevarokMLBaseAlgorithm::SAC(Z_Param_owner,ENevarokMLPolicy(Z_Param_policy),Z_Param_learningRate,Z_Param_bufferSize,Z_Param_learningStarts,Z_Param_batchSize,Z_Param_tau,Z_Param_gamma,Z_Param_trainFreq,Z_Param_gradientSteps,Z_Param_optimizeMemoryUsage,Z_Param_entCoefAuto,Z_Param_entCoef,Z_Param_targetUpdateInterval,Z_Param_targetEntropyAuto,Z_Param_targetEntropy,Z_Param_useSde,Z_Param_sdeSampleFreq,Z_Param_useSdeAtWarmup,Z_Param_verbose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLBaseAlgorithm::execDQN)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_ENUM(ENevarokMLPolicy,Z_Param_policy);
		P_GET_PROPERTY(FFloatProperty,Z_Param_learningRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_bufferSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_learningStarts);
		P_GET_PROPERTY(FIntProperty,Z_Param_batchSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_tau);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gamma);
		P_GET_PROPERTY(FIntProperty,Z_Param_trainFreq);
		P_GET_PROPERTY(FIntProperty,Z_Param_gradientSteps);
		P_GET_UBOOL(Z_Param_optimizeMemoryUsage);
		P_GET_PROPERTY(FIntProperty,Z_Param_targetUpdateInterval);
		P_GET_PROPERTY(FFloatProperty,Z_Param_explorationFraction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_explorationInitialEps);
		P_GET_PROPERTY(FFloatProperty,Z_Param_explorationFinalEps);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxGradNorm);
		P_GET_PROPERTY(FIntProperty,Z_Param_verbose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLBaseAlgorithm**)Z_Param__Result=UNevarokMLBaseAlgorithm::DQN(Z_Param_owner,ENevarokMLPolicy(Z_Param_policy),Z_Param_learningRate,Z_Param_bufferSize,Z_Param_learningStarts,Z_Param_batchSize,Z_Param_tau,Z_Param_gamma,Z_Param_trainFreq,Z_Param_gradientSteps,Z_Param_optimizeMemoryUsage,Z_Param_targetUpdateInterval,Z_Param_explorationFraction,Z_Param_explorationInitialEps,Z_Param_explorationFinalEps,Z_Param_maxGradNorm,Z_Param_verbose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLBaseAlgorithm::execDDPG)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_ENUM(ENevarokMLPolicy,Z_Param_policy);
		P_GET_PROPERTY(FFloatProperty,Z_Param_learningRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_bufferSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_learningStarts);
		P_GET_PROPERTY(FIntProperty,Z_Param_batchSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_tau);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gamma);
		P_GET_PROPERTY(FIntProperty,Z_Param_trainFreq);
		P_GET_PROPERTY(FIntProperty,Z_Param_gradientSteps);
		P_GET_UBOOL(Z_Param_optimizeMemoryUsage);
		P_GET_PROPERTY(FIntProperty,Z_Param_verbose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLBaseAlgorithm**)Z_Param__Result=UNevarokMLBaseAlgorithm::DDPG(Z_Param_owner,ENevarokMLPolicy(Z_Param_policy),Z_Param_learningRate,Z_Param_bufferSize,Z_Param_learningStarts,Z_Param_batchSize,Z_Param_tau,Z_Param_gamma,Z_Param_trainFreq,Z_Param_gradientSteps,Z_Param_optimizeMemoryUsage,Z_Param_verbose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLBaseAlgorithm::execA2C)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_ENUM(ENevarokMLPolicy,Z_Param_policy);
		P_GET_PROPERTY(FFloatProperty,Z_Param_learningRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_nSteps);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gamma);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gaeLambda);
		P_GET_PROPERTY(FFloatProperty,Z_Param_entCoef);
		P_GET_PROPERTY(FFloatProperty,Z_Param_vfCoef);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxGradNorm);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rmsPropEps);
		P_GET_UBOOL(Z_Param_useRmsProp);
		P_GET_UBOOL(Z_Param_useSde);
		P_GET_PROPERTY(FIntProperty,Z_Param_sdeSampleFreq);
		P_GET_UBOOL(Z_Param_normalizeAdvantage);
		P_GET_PROPERTY(FIntProperty,Z_Param_verbose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLBaseAlgorithm**)Z_Param__Result=UNevarokMLBaseAlgorithm::A2C(Z_Param_owner,ENevarokMLPolicy(Z_Param_policy),Z_Param_learningRate,Z_Param_nSteps,Z_Param_gamma,Z_Param_gaeLambda,Z_Param_entCoef,Z_Param_vfCoef,Z_Param_maxGradNorm,Z_Param_rmsPropEps,Z_Param_useRmsProp,Z_Param_useSde,Z_Param_sdeSampleFreq,Z_Param_normalizeAdvantage,Z_Param_verbose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLBaseAlgorithm::execPPO)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_ENUM(ENevarokMLPolicy,Z_Param_policy);
		P_GET_PROPERTY(FFloatProperty,Z_Param_learningRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_nSteps);
		P_GET_PROPERTY(FIntProperty,Z_Param_batchSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_nEpochs);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gamma);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gaeLambda);
		P_GET_PROPERTY(FFloatProperty,Z_Param_clipRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_entCoef);
		P_GET_PROPERTY(FFloatProperty,Z_Param_vfCoef);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxGradNorm);
		P_GET_UBOOL(Z_Param_useSde);
		P_GET_PROPERTY(FIntProperty,Z_Param_sdeSampleFreq);
		P_GET_PROPERTY(FIntProperty,Z_Param_verbose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLBaseAlgorithm**)Z_Param__Result=UNevarokMLBaseAlgorithm::PPO(Z_Param_owner,ENevarokMLPolicy(Z_Param_policy),Z_Param_learningRate,Z_Param_nSteps,Z_Param_batchSize,Z_Param_nEpochs,Z_Param_gamma,Z_Param_gaeLambda,Z_Param_clipRange,Z_Param_entCoef,Z_Param_vfCoef,Z_Param_maxGradNorm,Z_Param_useSde,Z_Param_sdeSampleFreq,Z_Param_verbose);
		P_NATIVE_END;
	}
	void UNevarokMLBaseAlgorithm::StaticRegisterNativesUNevarokMLBaseAlgorithm()
	{
		UClass* Class = UNevarokMLBaseAlgorithm::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "A2C", &UNevarokMLBaseAlgorithm::execA2C },
			{ "DDPG", &UNevarokMLBaseAlgorithm::execDDPG },
			{ "DQN", &UNevarokMLBaseAlgorithm::execDQN },
			{ "PPO", &UNevarokMLBaseAlgorithm::execPPO },
			{ "SAC", &UNevarokMLBaseAlgorithm::execSAC },
			{ "TD3", &UNevarokMLBaseAlgorithm::execTD3 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics
	{
		struct NevarokMLBaseAlgorithm_eventA2C_Parms
		{
			UObject* owner;
			ENevarokMLPolicy policy;
			float learningRate;
			int32 nSteps;
			float gamma;
			float gaeLambda;
			float entCoef;
			float vfCoef;
			float maxGradNorm;
			float rmsPropEps;
			bool useRmsProp;
			bool useSde;
			int32 sdeSampleFreq;
			bool normalizeAdvantage;
			int32 verbose;
			UNevarokMLBaseAlgorithm* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FBytePropertyParams NewProp_policy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_policy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_policy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_learningRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_learningRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_nSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gamma_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gaeLambda_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gaeLambda;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_entCoef_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_entCoef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vfCoef_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_vfCoef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxGradNorm_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxGradNorm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rmsPropEps_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rmsPropEps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_useRmsProp_MetaData[];
#endif
		static void NewProp_useRmsProp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useRmsProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_useSde_MetaData[];
#endif
		static void NewProp_useSde_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useSde;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sdeSampleFreq_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_sdeSampleFreq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_normalizeAdvantage_MetaData[];
#endif
		static void NewProp_normalizeAdvantage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_normalizeAdvantage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_verbose_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_verbose;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventA2C_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_policy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_policy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_policy = { "policy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventA2C_Parms, policy), Z_Construct_UEnum_NevarokML_ENevarokMLPolicy, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_policy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_policy_MetaData)) }; // 3070622388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_learningRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_learningRate = { "learningRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventA2C_Parms, learningRate), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_learningRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_learningRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_nSteps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_nSteps = { "nSteps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventA2C_Parms, nSteps), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_nSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_nSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_gamma_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_gamma = { "gamma", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventA2C_Parms, gamma), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_gamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_gaeLambda_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_gaeLambda = { "gaeLambda", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventA2C_Parms, gaeLambda), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_gaeLambda_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_gaeLambda_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_entCoef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_entCoef = { "entCoef", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventA2C_Parms, entCoef), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_entCoef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_entCoef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_vfCoef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_vfCoef = { "vfCoef", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventA2C_Parms, vfCoef), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_vfCoef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_vfCoef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_maxGradNorm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_maxGradNorm = { "maxGradNorm", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventA2C_Parms, maxGradNorm), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_maxGradNorm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_maxGradNorm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_rmsPropEps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_rmsPropEps = { "rmsPropEps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventA2C_Parms, rmsPropEps), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_rmsPropEps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_rmsPropEps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useRmsProp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useRmsProp_SetBit(void* Obj)
	{
		((NevarokMLBaseAlgorithm_eventA2C_Parms*)Obj)->useRmsProp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useRmsProp = { "useRmsProp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLBaseAlgorithm_eventA2C_Parms), &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useRmsProp_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useRmsProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useRmsProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useSde_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useSde_SetBit(void* Obj)
	{
		((NevarokMLBaseAlgorithm_eventA2C_Parms*)Obj)->useSde = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useSde = { "useSde", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLBaseAlgorithm_eventA2C_Parms), &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useSde_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useSde_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useSde_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_sdeSampleFreq_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_sdeSampleFreq = { "sdeSampleFreq", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventA2C_Parms, sdeSampleFreq), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_sdeSampleFreq_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_sdeSampleFreq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_normalizeAdvantage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_normalizeAdvantage_SetBit(void* Obj)
	{
		((NevarokMLBaseAlgorithm_eventA2C_Parms*)Obj)->normalizeAdvantage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_normalizeAdvantage = { "normalizeAdvantage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLBaseAlgorithm_eventA2C_Parms), &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_normalizeAdvantage_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_normalizeAdvantage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_normalizeAdvantage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_verbose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_verbose = { "verbose", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventA2C_Parms, verbose), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_verbose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_verbose_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventA2C_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLBaseAlgorithm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_policy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_policy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_learningRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_nSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_gamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_gaeLambda,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_entCoef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_vfCoef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_maxGradNorm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_rmsPropEps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useRmsProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_useSde,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_sdeSampleFreq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_normalizeAdvantage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_verbose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|BaseAlgorithm" },
		{ "CPP_Default_entCoef", "0.000000" },
		{ "CPP_Default_gaeLambda", "1.000000" },
		{ "CPP_Default_gamma", "0.990000" },
		{ "CPP_Default_learningRate", "0.000700" },
		{ "CPP_Default_maxGradNorm", "0.500000" },
		{ "CPP_Default_normalizeAdvantage", "false" },
		{ "CPP_Default_nSteps", "5" },
		{ "CPP_Default_policy", "MLP_POLICY" },
		{ "CPP_Default_rmsPropEps", "0.000010" },
		{ "CPP_Default_sdeSampleFreq", "-1" },
		{ "CPP_Default_useRmsProp", "true" },
		{ "CPP_Default_useSde", "false" },
		{ "CPP_Default_verbose", "1" },
		{ "CPP_Default_vfCoef", "0.500000" },
		{ "ModuleRelativePath", "Public/Models/NevarokMLBaseAlgorithm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLBaseAlgorithm, nullptr, "A2C", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::NevarokMLBaseAlgorithm_eventA2C_Parms), Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics
	{
		struct NevarokMLBaseAlgorithm_eventDDPG_Parms
		{
			UObject* owner;
			ENevarokMLPolicy policy;
			float learningRate;
			int32 bufferSize;
			int32 learningStarts;
			int32 batchSize;
			float tau;
			float gamma;
			int32 trainFreq;
			int32 gradientSteps;
			bool optimizeMemoryUsage;
			int32 verbose;
			UNevarokMLBaseAlgorithm* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FBytePropertyParams NewProp_policy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_policy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_policy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_learningRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_learningRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_bufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_learningStarts_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_learningStarts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_batchSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_batchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tau_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tau;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gamma_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trainFreq_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_trainFreq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gradientSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_gradientSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_optimizeMemoryUsage_MetaData[];
#endif
		static void NewProp_optimizeMemoryUsage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_optimizeMemoryUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_verbose_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_verbose;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDDPG_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_policy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_policy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_policy = { "policy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDDPG_Parms, policy), Z_Construct_UEnum_NevarokML_ENevarokMLPolicy, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_policy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_policy_MetaData)) }; // 3070622388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_learningRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_learningRate = { "learningRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDDPG_Parms, learningRate), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_learningRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_learningRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_bufferSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_bufferSize = { "bufferSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDDPG_Parms, bufferSize), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_bufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_bufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_learningStarts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_learningStarts = { "learningStarts", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDDPG_Parms, learningStarts), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_learningStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_learningStarts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_batchSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_batchSize = { "batchSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDDPG_Parms, batchSize), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_batchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_batchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_tau_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_tau = { "tau", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDDPG_Parms, tau), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_tau_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_tau_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_gamma_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_gamma = { "gamma", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDDPG_Parms, gamma), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_gamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_trainFreq_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_trainFreq = { "trainFreq", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDDPG_Parms, trainFreq), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_trainFreq_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_trainFreq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_gradientSteps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_gradientSteps = { "gradientSteps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDDPG_Parms, gradientSteps), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_gradientSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_gradientSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_optimizeMemoryUsage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_optimizeMemoryUsage_SetBit(void* Obj)
	{
		((NevarokMLBaseAlgorithm_eventDDPG_Parms*)Obj)->optimizeMemoryUsage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_optimizeMemoryUsage = { "optimizeMemoryUsage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLBaseAlgorithm_eventDDPG_Parms), &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_optimizeMemoryUsage_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_optimizeMemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_optimizeMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_verbose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_verbose = { "verbose", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDDPG_Parms, verbose), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_verbose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_verbose_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDDPG_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLBaseAlgorithm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_policy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_policy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_learningRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_bufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_learningStarts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_batchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_tau,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_gamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_trainFreq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_gradientSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_optimizeMemoryUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_verbose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|BaseAlgorithm" },
		{ "CPP_Default_batchSize", "100" },
		{ "CPP_Default_bufferSize", "1000000" },
		{ "CPP_Default_gamma", "0.990000" },
		{ "CPP_Default_gradientSteps", "-1" },
		{ "CPP_Default_learningRate", "0.001000" },
		{ "CPP_Default_learningStarts", "100" },
		{ "CPP_Default_optimizeMemoryUsage", "false" },
		{ "CPP_Default_policy", "MLP_POLICY" },
		{ "CPP_Default_tau", "0.005000" },
		{ "CPP_Default_trainFreq", "1" },
		{ "CPP_Default_verbose", "1" },
		{ "ModuleRelativePath", "Public/Models/NevarokMLBaseAlgorithm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLBaseAlgorithm, nullptr, "DDPG", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::NevarokMLBaseAlgorithm_eventDDPG_Parms), Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics
	{
		struct NevarokMLBaseAlgorithm_eventDQN_Parms
		{
			UObject* owner;
			ENevarokMLPolicy policy;
			float learningRate;
			int32 bufferSize;
			int32 learningStarts;
			int32 batchSize;
			float tau;
			float gamma;
			int32 trainFreq;
			int32 gradientSteps;
			bool optimizeMemoryUsage;
			int32 targetUpdateInterval;
			float explorationFraction;
			float explorationInitialEps;
			float explorationFinalEps;
			float maxGradNorm;
			int32 verbose;
			UNevarokMLBaseAlgorithm* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FBytePropertyParams NewProp_policy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_policy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_policy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_learningRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_learningRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_bufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_learningStarts_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_learningStarts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_batchSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_batchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tau_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tau;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gamma_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trainFreq_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_trainFreq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gradientSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_gradientSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_optimizeMemoryUsage_MetaData[];
#endif
		static void NewProp_optimizeMemoryUsage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_optimizeMemoryUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetUpdateInterval_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_targetUpdateInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_explorationFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_explorationFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_explorationInitialEps_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_explorationInitialEps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_explorationFinalEps_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_explorationFinalEps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxGradNorm_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxGradNorm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_verbose_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_verbose;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_policy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_policy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_policy = { "policy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, policy), Z_Construct_UEnum_NevarokML_ENevarokMLPolicy, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_policy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_policy_MetaData)) }; // 3070622388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_learningRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_learningRate = { "learningRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, learningRate), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_learningRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_learningRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_bufferSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_bufferSize = { "bufferSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, bufferSize), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_bufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_bufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_learningStarts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_learningStarts = { "learningStarts", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, learningStarts), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_learningStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_learningStarts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_batchSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_batchSize = { "batchSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, batchSize), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_batchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_batchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_tau_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_tau = { "tau", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, tau), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_tau_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_tau_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_gamma_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_gamma = { "gamma", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, gamma), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_gamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_trainFreq_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_trainFreq = { "trainFreq", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, trainFreq), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_trainFreq_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_trainFreq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_gradientSteps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_gradientSteps = { "gradientSteps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, gradientSteps), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_gradientSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_gradientSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_optimizeMemoryUsage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_optimizeMemoryUsage_SetBit(void* Obj)
	{
		((NevarokMLBaseAlgorithm_eventDQN_Parms*)Obj)->optimizeMemoryUsage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_optimizeMemoryUsage = { "optimizeMemoryUsage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLBaseAlgorithm_eventDQN_Parms), &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_optimizeMemoryUsage_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_optimizeMemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_optimizeMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_targetUpdateInterval_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_targetUpdateInterval = { "targetUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, targetUpdateInterval), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_targetUpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_targetUpdateInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationFraction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationFraction = { "explorationFraction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, explorationFraction), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationInitialEps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationInitialEps = { "explorationInitialEps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, explorationInitialEps), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationInitialEps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationInitialEps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationFinalEps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationFinalEps = { "explorationFinalEps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, explorationFinalEps), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationFinalEps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationFinalEps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_maxGradNorm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_maxGradNorm = { "maxGradNorm", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, maxGradNorm), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_maxGradNorm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_maxGradNorm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_verbose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_verbose = { "verbose", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, verbose), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_verbose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_verbose_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventDQN_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLBaseAlgorithm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_policy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_policy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_learningRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_bufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_learningStarts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_batchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_tau,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_gamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_trainFreq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_gradientSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_optimizeMemoryUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_targetUpdateInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationInitialEps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_explorationFinalEps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_maxGradNorm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_verbose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|BaseAlgorithm" },
		{ "CPP_Default_batchSize", "32" },
		{ "CPP_Default_bufferSize", "1000000" },
		{ "CPP_Default_explorationFinalEps", "0.050000" },
		{ "CPP_Default_explorationFraction", "0.100000" },
		{ "CPP_Default_explorationInitialEps", "1.000000" },
		{ "CPP_Default_gamma", "0.990000" },
		{ "CPP_Default_gradientSteps", "1" },
		{ "CPP_Default_learningRate", "0.000100" },
		{ "CPP_Default_learningStarts", "50000" },
		{ "CPP_Default_maxGradNorm", "10.000000" },
		{ "CPP_Default_optimizeMemoryUsage", "false" },
		{ "CPP_Default_policy", "MLP_POLICY" },
		{ "CPP_Default_targetUpdateInterval", "10000" },
		{ "CPP_Default_tau", "1.000000" },
		{ "CPP_Default_trainFreq", "4" },
		{ "CPP_Default_verbose", "1" },
		{ "ModuleRelativePath", "Public/Models/NevarokMLBaseAlgorithm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLBaseAlgorithm, nullptr, "DQN", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::NevarokMLBaseAlgorithm_eventDQN_Parms), Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics
	{
		struct NevarokMLBaseAlgorithm_eventPPO_Parms
		{
			UObject* owner;
			ENevarokMLPolicy policy;
			float learningRate;
			int32 nSteps;
			int32 batchSize;
			int32 nEpochs;
			float gamma;
			float gaeLambda;
			float clipRange;
			float entCoef;
			float vfCoef;
			float maxGradNorm;
			bool useSde;
			int32 sdeSampleFreq;
			int32 verbose;
			UNevarokMLBaseAlgorithm* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FBytePropertyParams NewProp_policy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_policy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_policy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_learningRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_learningRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_nSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_batchSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_batchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nEpochs_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_nEpochs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gamma_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gaeLambda_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gaeLambda;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clipRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_clipRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_entCoef_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_entCoef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vfCoef_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_vfCoef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxGradNorm_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxGradNorm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_useSde_MetaData[];
#endif
		static void NewProp_useSde_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useSde;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sdeSampleFreq_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_sdeSampleFreq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_verbose_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_verbose;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_policy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_policy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_policy = { "policy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, policy), Z_Construct_UEnum_NevarokML_ENevarokMLPolicy, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_policy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_policy_MetaData)) }; // 3070622388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_learningRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_learningRate = { "learningRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, learningRate), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_learningRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_learningRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_nSteps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_nSteps = { "nSteps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, nSteps), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_nSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_nSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_batchSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_batchSize = { "batchSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, batchSize), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_batchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_batchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_nEpochs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_nEpochs = { "nEpochs", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, nEpochs), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_nEpochs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_nEpochs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_gamma_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_gamma = { "gamma", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, gamma), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_gamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_gaeLambda_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_gaeLambda = { "gaeLambda", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, gaeLambda), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_gaeLambda_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_gaeLambda_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_clipRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_clipRange = { "clipRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, clipRange), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_clipRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_clipRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_entCoef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_entCoef = { "entCoef", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, entCoef), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_entCoef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_entCoef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_vfCoef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_vfCoef = { "vfCoef", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, vfCoef), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_vfCoef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_vfCoef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_maxGradNorm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_maxGradNorm = { "maxGradNorm", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, maxGradNorm), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_maxGradNorm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_maxGradNorm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_useSde_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_useSde_SetBit(void* Obj)
	{
		((NevarokMLBaseAlgorithm_eventPPO_Parms*)Obj)->useSde = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_useSde = { "useSde", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLBaseAlgorithm_eventPPO_Parms), &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_useSde_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_useSde_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_useSde_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_sdeSampleFreq_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_sdeSampleFreq = { "sdeSampleFreq", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, sdeSampleFreq), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_sdeSampleFreq_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_sdeSampleFreq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_verbose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_verbose = { "verbose", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, verbose), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_verbose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_verbose_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventPPO_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLBaseAlgorithm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_policy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_policy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_learningRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_nSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_batchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_nEpochs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_gamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_gaeLambda,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_clipRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_entCoef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_vfCoef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_maxGradNorm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_useSde,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_sdeSampleFreq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_verbose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|BaseAlgorithm" },
		{ "CPP_Default_batchSize", "64" },
		{ "CPP_Default_clipRange", "0.200000" },
		{ "CPP_Default_entCoef", "0.000000" },
		{ "CPP_Default_gaeLambda", "0.950000" },
		{ "CPP_Default_gamma", "0.990000" },
		{ "CPP_Default_learningRate", "0.000300" },
		{ "CPP_Default_maxGradNorm", "0.500000" },
		{ "CPP_Default_nEpochs", "10" },
		{ "CPP_Default_nSteps", "2048" },
		{ "CPP_Default_policy", "MLP_POLICY" },
		{ "CPP_Default_sdeSampleFreq", "-1" },
		{ "CPP_Default_useSde", "false" },
		{ "CPP_Default_verbose", "1" },
		{ "CPP_Default_vfCoef", "0.500000" },
		{ "ModuleRelativePath", "Public/Models/NevarokMLBaseAlgorithm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLBaseAlgorithm, nullptr, "PPO", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::NevarokMLBaseAlgorithm_eventPPO_Parms), Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics
	{
		struct NevarokMLBaseAlgorithm_eventSAC_Parms
		{
			UObject* owner;
			ENevarokMLPolicy policy;
			float learningRate;
			int32 bufferSize;
			int32 learningStarts;
			int32 batchSize;
			float tau;
			float gamma;
			int32 trainFreq;
			int32 gradientSteps;
			bool optimizeMemoryUsage;
			bool entCoefAuto;
			float entCoef;
			int32 targetUpdateInterval;
			bool targetEntropyAuto;
			float targetEntropy;
			bool useSde;
			int32 sdeSampleFreq;
			bool useSdeAtWarmup;
			int32 verbose;
			UNevarokMLBaseAlgorithm* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FBytePropertyParams NewProp_policy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_policy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_policy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_learningRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_learningRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_bufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_learningStarts_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_learningStarts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_batchSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_batchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tau_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tau;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gamma_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trainFreq_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_trainFreq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gradientSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_gradientSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_optimizeMemoryUsage_MetaData[];
#endif
		static void NewProp_optimizeMemoryUsage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_optimizeMemoryUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_entCoefAuto_MetaData[];
#endif
		static void NewProp_entCoefAuto_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_entCoefAuto;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_entCoef_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_entCoef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetUpdateInterval_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_targetUpdateInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetEntropyAuto_MetaData[];
#endif
		static void NewProp_targetEntropyAuto_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_targetEntropyAuto;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetEntropy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_targetEntropy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_useSde_MetaData[];
#endif
		static void NewProp_useSde_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useSde;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sdeSampleFreq_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_sdeSampleFreq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_useSdeAtWarmup_MetaData[];
#endif
		static void NewProp_useSdeAtWarmup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useSdeAtWarmup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_verbose_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_verbose;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_policy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_policy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_policy = { "policy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, policy), Z_Construct_UEnum_NevarokML_ENevarokMLPolicy, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_policy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_policy_MetaData)) }; // 3070622388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_learningRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_learningRate = { "learningRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, learningRate), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_learningRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_learningRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_bufferSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_bufferSize = { "bufferSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, bufferSize), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_bufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_bufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_learningStarts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_learningStarts = { "learningStarts", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, learningStarts), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_learningStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_learningStarts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_batchSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_batchSize = { "batchSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, batchSize), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_batchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_batchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_tau_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_tau = { "tau", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, tau), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_tau_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_tau_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_gamma_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_gamma = { "gamma", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, gamma), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_gamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_trainFreq_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_trainFreq = { "trainFreq", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, trainFreq), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_trainFreq_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_trainFreq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_gradientSteps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_gradientSteps = { "gradientSteps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, gradientSteps), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_gradientSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_gradientSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_optimizeMemoryUsage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_optimizeMemoryUsage_SetBit(void* Obj)
	{
		((NevarokMLBaseAlgorithm_eventSAC_Parms*)Obj)->optimizeMemoryUsage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_optimizeMemoryUsage = { "optimizeMemoryUsage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLBaseAlgorithm_eventSAC_Parms), &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_optimizeMemoryUsage_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_optimizeMemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_optimizeMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_entCoefAuto_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_entCoefAuto_SetBit(void* Obj)
	{
		((NevarokMLBaseAlgorithm_eventSAC_Parms*)Obj)->entCoefAuto = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_entCoefAuto = { "entCoefAuto", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLBaseAlgorithm_eventSAC_Parms), &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_entCoefAuto_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_entCoefAuto_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_entCoefAuto_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_entCoef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_entCoef = { "entCoef", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, entCoef), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_entCoef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_entCoef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetUpdateInterval_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetUpdateInterval = { "targetUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, targetUpdateInterval), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetUpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetUpdateInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetEntropyAuto_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetEntropyAuto_SetBit(void* Obj)
	{
		((NevarokMLBaseAlgorithm_eventSAC_Parms*)Obj)->targetEntropyAuto = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetEntropyAuto = { "targetEntropyAuto", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLBaseAlgorithm_eventSAC_Parms), &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetEntropyAuto_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetEntropyAuto_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetEntropyAuto_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetEntropy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetEntropy = { "targetEntropy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, targetEntropy), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetEntropy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetEntropy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSde_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSde_SetBit(void* Obj)
	{
		((NevarokMLBaseAlgorithm_eventSAC_Parms*)Obj)->useSde = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSde = { "useSde", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLBaseAlgorithm_eventSAC_Parms), &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSde_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSde_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSde_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_sdeSampleFreq_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_sdeSampleFreq = { "sdeSampleFreq", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, sdeSampleFreq), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_sdeSampleFreq_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_sdeSampleFreq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSdeAtWarmup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSdeAtWarmup_SetBit(void* Obj)
	{
		((NevarokMLBaseAlgorithm_eventSAC_Parms*)Obj)->useSdeAtWarmup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSdeAtWarmup = { "useSdeAtWarmup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLBaseAlgorithm_eventSAC_Parms), &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSdeAtWarmup_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSdeAtWarmup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSdeAtWarmup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_verbose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_verbose = { "verbose", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, verbose), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_verbose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_verbose_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventSAC_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLBaseAlgorithm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_policy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_policy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_learningRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_bufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_learningStarts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_batchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_tau,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_gamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_trainFreq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_gradientSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_optimizeMemoryUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_entCoefAuto,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_entCoef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetUpdateInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetEntropyAuto,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_targetEntropy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSde,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_sdeSampleFreq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_useSdeAtWarmup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_verbose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|BaseAlgorithm" },
		{ "CPP_Default_batchSize", "256" },
		{ "CPP_Default_bufferSize", "1000000" },
		{ "CPP_Default_entCoef", "0.000000" },
		{ "CPP_Default_entCoefAuto", "true" },
		{ "CPP_Default_gamma", "0.990000" },
		{ "CPP_Default_gradientSteps", "1" },
		{ "CPP_Default_learningRate", "0.000300" },
		{ "CPP_Default_learningStarts", "100" },
		{ "CPP_Default_optimizeMemoryUsage", "false" },
		{ "CPP_Default_policy", "MLP_POLICY" },
		{ "CPP_Default_sdeSampleFreq", "-1" },
		{ "CPP_Default_targetEntropy", "0.000000" },
		{ "CPP_Default_targetEntropyAuto", "true" },
		{ "CPP_Default_targetUpdateInterval", "1" },
		{ "CPP_Default_tau", "0.005000" },
		{ "CPP_Default_trainFreq", "1" },
		{ "CPP_Default_useSde", "false" },
		{ "CPP_Default_useSdeAtWarmup", "false" },
		{ "CPP_Default_verbose", "1" },
		{ "ModuleRelativePath", "Public/Models/NevarokMLBaseAlgorithm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLBaseAlgorithm, nullptr, "SAC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::NevarokMLBaseAlgorithm_eventSAC_Parms), Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics
	{
		struct NevarokMLBaseAlgorithm_eventTD3_Parms
		{
			UObject* owner;
			ENevarokMLPolicy policy;
			float learningRate;
			int32 bufferSize;
			int32 learningStarts;
			int32 batchSize;
			float tau;
			float gamma;
			int32 trainFreq;
			int32 gradientSteps;
			bool optimizeMemoryUsage;
			int32 policyDelay;
			float targetPolicyNoise;
			float targetNoiseClip;
			int32 verbose;
			UNevarokMLBaseAlgorithm* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FBytePropertyParams NewProp_policy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_policy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_policy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_learningRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_learningRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_bufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_learningStarts_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_learningStarts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_batchSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_batchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tau_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tau;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gamma_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trainFreq_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_trainFreq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gradientSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_gradientSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_optimizeMemoryUsage_MetaData[];
#endif
		static void NewProp_optimizeMemoryUsage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_optimizeMemoryUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_policyDelay_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_policyDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetPolicyNoise_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_targetPolicyNoise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetNoiseClip_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_targetNoiseClip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_verbose_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_verbose;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_policy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_policy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_policy = { "policy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, policy), Z_Construct_UEnum_NevarokML_ENevarokMLPolicy, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_policy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_policy_MetaData)) }; // 3070622388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_learningRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_learningRate = { "learningRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, learningRate), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_learningRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_learningRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_bufferSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_bufferSize = { "bufferSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, bufferSize), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_bufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_bufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_learningStarts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_learningStarts = { "learningStarts", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, learningStarts), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_learningStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_learningStarts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_batchSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_batchSize = { "batchSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, batchSize), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_batchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_batchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_tau_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_tau = { "tau", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, tau), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_tau_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_tau_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_gamma_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_gamma = { "gamma", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, gamma), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_gamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_trainFreq_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_trainFreq = { "trainFreq", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, trainFreq), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_trainFreq_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_trainFreq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_gradientSteps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_gradientSteps = { "gradientSteps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, gradientSteps), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_gradientSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_gradientSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_optimizeMemoryUsage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_optimizeMemoryUsage_SetBit(void* Obj)
	{
		((NevarokMLBaseAlgorithm_eventTD3_Parms*)Obj)->optimizeMemoryUsage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_optimizeMemoryUsage = { "optimizeMemoryUsage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLBaseAlgorithm_eventTD3_Parms), &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_optimizeMemoryUsage_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_optimizeMemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_optimizeMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_policyDelay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_policyDelay = { "policyDelay", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, policyDelay), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_policyDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_policyDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_targetPolicyNoise_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_targetPolicyNoise = { "targetPolicyNoise", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, targetPolicyNoise), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_targetPolicyNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_targetPolicyNoise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_targetNoiseClip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_targetNoiseClip = { "targetNoiseClip", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, targetNoiseClip), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_targetNoiseClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_targetNoiseClip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_verbose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_verbose = { "verbose", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, verbose), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_verbose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_verbose_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLBaseAlgorithm_eventTD3_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLBaseAlgorithm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_policy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_policy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_learningRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_bufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_learningStarts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_batchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_tau,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_gamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_trainFreq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_gradientSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_optimizeMemoryUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_policyDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_targetPolicyNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_targetNoiseClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_verbose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|BaseAlgorithm" },
		{ "CPP_Default_batchSize", "100" },
		{ "CPP_Default_bufferSize", "1000000" },
		{ "CPP_Default_gamma", "0.990000" },
		{ "CPP_Default_gradientSteps", "-1" },
		{ "CPP_Default_learningRate", "0.001000" },
		{ "CPP_Default_learningStarts", "100" },
		{ "CPP_Default_optimizeMemoryUsage", "false" },
		{ "CPP_Default_policy", "MLP_POLICY" },
		{ "CPP_Default_policyDelay", "2" },
		{ "CPP_Default_targetNoiseClip", "0.500000" },
		{ "CPP_Default_targetPolicyNoise", "0.200000" },
		{ "CPP_Default_tau", "0.005000" },
		{ "CPP_Default_trainFreq", "1" },
		{ "CPP_Default_verbose", "1" },
		{ "ModuleRelativePath", "Public/Models/NevarokMLBaseAlgorithm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLBaseAlgorithm, nullptr, "TD3", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::NevarokMLBaseAlgorithm_eventTD3_Parms), Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLBaseAlgorithm);
	UClass* Z_Construct_UClass_UNevarokMLBaseAlgorithm_NoRegister()
	{
		return UNevarokMLBaseAlgorithm::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLBaseAlgorithm_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLBaseAlgorithm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLBaseAlgorithm_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_A2C, "A2C" }, // 3596503439
		{ &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DDPG, "DDPG" }, // 266439382
		{ &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_DQN, "DQN" }, // 72956176
		{ &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_PPO, "PPO" }, // 3446183645
		{ &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_SAC, "SAC" }, // 3949298111
		{ &Z_Construct_UFunction_UNevarokMLBaseAlgorithm_TD3, "TD3" }, // 2928488375
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLBaseAlgorithm_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Models/NevarokMLBaseAlgorithm.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Models/NevarokMLBaseAlgorithm.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLBaseAlgorithm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLBaseAlgorithm>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLBaseAlgorithm_Statics::ClassParams = {
		&UNevarokMLBaseAlgorithm::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLBaseAlgorithm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLBaseAlgorithm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLBaseAlgorithm()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLBaseAlgorithm.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLBaseAlgorithm.OuterSingleton, Z_Construct_UClass_UNevarokMLBaseAlgorithm_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLBaseAlgorithm.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLBaseAlgorithm>()
	{
		return UNevarokMLBaseAlgorithm::StaticClass();
	}
	UNevarokMLBaseAlgorithm::UNevarokMLBaseAlgorithm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLBaseAlgorithm);
	UNevarokMLBaseAlgorithm::~UNevarokMLBaseAlgorithm() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLBaseAlgorithm_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLBaseAlgorithm_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLBaseAlgorithm, UNevarokMLBaseAlgorithm::StaticClass, TEXT("UNevarokMLBaseAlgorithm"), &Z_Registration_Info_UClass_UNevarokMLBaseAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLBaseAlgorithm), 2787700485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLBaseAlgorithm_h_2685352613(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLBaseAlgorithm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLBaseAlgorithm_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
