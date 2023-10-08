// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Components/NevarokMLEnvsSynchronizerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLEnvsSynchronizerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NEVAROKML_API UClass* Z_Construct_UClass_ANevarokMLEnv_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLEnvsSynchronizerComponent::execRemoveEnv)
	{
		P_GET_OBJECT(ANevarokMLEnv,Z_Param_env);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveEnv(Z_Param_env);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLEnvsSynchronizerComponent::execAddEnv)
	{
		P_GET_OBJECT(ANevarokMLEnv,Z_Param_env);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEnv(Z_Param_env);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLEnvsSynchronizerComponent::execResetDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLEnvsSynchronizerComponent::execSetDone)
	{
		P_GET_OBJECT(ANevarokMLEnv,Z_Param_env);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDone(Z_Param_env);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLEnvsSynchronizerComponent::execIsOneOrMoreDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOneOrMoreDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLEnvsSynchronizerComponent::execIsWait)
	{
		P_GET_OBJECT_REF(ANevarokMLEnv,Z_Param_Out_env);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWait(Z_Param_Out_env);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLEnvsSynchronizerComponent::execIsDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLEnvsSynchronizerComponent::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	void UNevarokMLEnvsSynchronizerComponent::StaticRegisterNativesUNevarokMLEnvsSynchronizerComponent()
	{
		UClass* Class = UNevarokMLEnvsSynchronizerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEnv", &UNevarokMLEnvsSynchronizerComponent::execAddEnv },
			{ "IsDone", &UNevarokMLEnvsSynchronizerComponent::execIsDone },
			{ "IsOneOrMoreDone", &UNevarokMLEnvsSynchronizerComponent::execIsOneOrMoreDone },
			{ "IsRunning", &UNevarokMLEnvsSynchronizerComponent::execIsRunning },
			{ "IsWait", &UNevarokMLEnvsSynchronizerComponent::execIsWait },
			{ "RemoveEnv", &UNevarokMLEnvsSynchronizerComponent::execRemoveEnv },
			{ "ResetDone", &UNevarokMLEnvsSynchronizerComponent::execResetDone },
			{ "SetDone", &UNevarokMLEnvsSynchronizerComponent::execSetDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv_Statics
	{
		struct NevarokMLEnvsSynchronizerComponent_eventAddEnv_Parms
		{
			ANevarokMLEnv* env;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_env;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv_Statics::NewProp_env = { "env", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLEnvsSynchronizerComponent_eventAddEnv_Parms, env), Z_Construct_UClass_ANevarokMLEnv_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv_Statics::NewProp_env,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|EnvsSynchronizerComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLEnvsSynchronizerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent, nullptr, "AddEnv", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv_Statics::NevarokMLEnvsSynchronizerComponent_eventAddEnv_Parms), Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics
	{
		struct NevarokMLEnvsSynchronizerComponent_eventIsDone_Parms
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
	void Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLEnvsSynchronizerComponent_eventIsDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLEnvsSynchronizerComponent_eventIsDone_Parms), &Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|EnvsSynchronizerComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLEnvsSynchronizerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent, nullptr, "IsDone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics::NevarokMLEnvsSynchronizerComponent_eventIsDone_Parms), Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics
	{
		struct NevarokMLEnvsSynchronizerComponent_eventIsOneOrMoreDone_Parms
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
	void Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLEnvsSynchronizerComponent_eventIsOneOrMoreDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLEnvsSynchronizerComponent_eventIsOneOrMoreDone_Parms), &Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|EnvsSynchronizerComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLEnvsSynchronizerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent, nullptr, "IsOneOrMoreDone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics::NevarokMLEnvsSynchronizerComponent_eventIsOneOrMoreDone_Parms), Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics
	{
		struct NevarokMLEnvsSynchronizerComponent_eventIsRunning_Parms
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
	void Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLEnvsSynchronizerComponent_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLEnvsSynchronizerComponent_eventIsRunning_Parms), &Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|EnvsSynchronizerComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLEnvsSynchronizerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent, nullptr, "IsRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics::NevarokMLEnvsSynchronizerComponent_eventIsRunning_Parms), Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics
	{
		struct NevarokMLEnvsSynchronizerComponent_eventIsWait_Parms
		{
			const ANevarokMLEnv* env;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_env_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_env;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::NewProp_env_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::NewProp_env = { "env", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLEnvsSynchronizerComponent_eventIsWait_Parms, env), Z_Construct_UClass_ANevarokMLEnv_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::NewProp_env_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::NewProp_env_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLEnvsSynchronizerComponent_eventIsWait_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLEnvsSynchronizerComponent_eventIsWait_Parms), &Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::NewProp_env,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|EnvsSynchronizerComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLEnvsSynchronizerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent, nullptr, "IsWait", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::NevarokMLEnvsSynchronizerComponent_eventIsWait_Parms), Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv_Statics
	{
		struct NevarokMLEnvsSynchronizerComponent_eventRemoveEnv_Parms
		{
			ANevarokMLEnv* env;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_env;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv_Statics::NewProp_env = { "env", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLEnvsSynchronizerComponent_eventRemoveEnv_Parms, env), Z_Construct_UClass_ANevarokMLEnv_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv_Statics::NewProp_env,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|EnvsSynchronizerComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLEnvsSynchronizerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent, nullptr, "RemoveEnv", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv_Statics::NevarokMLEnvsSynchronizerComponent_eventRemoveEnv_Parms), Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_ResetDone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_ResetDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|EnvsSynchronizerComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLEnvsSynchronizerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_ResetDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent, nullptr, "ResetDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_ResetDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_ResetDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_ResetDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_ResetDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone_Statics
	{
		struct NevarokMLEnvsSynchronizerComponent_eventSetDone_Parms
		{
			ANevarokMLEnv* env;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_env;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone_Statics::NewProp_env = { "env", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLEnvsSynchronizerComponent_eventSetDone_Parms, env), Z_Construct_UClass_ANevarokMLEnv_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone_Statics::NewProp_env,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|EnvsSynchronizerComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLEnvsSynchronizerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent, nullptr, "SetDone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone_Statics::NevarokMLEnvsSynchronizerComponent_eventSetDone_Parms), Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLEnvsSynchronizerComponent);
	UClass* Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_NoRegister()
	{
		return UNevarokMLEnvsSynchronizerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__envs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__envs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__envs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp__doneEnvs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__doneEnvs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__doneEnvs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_AddEnv, "AddEnv" }, // 3214369709
		{ &Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsDone, "IsDone" }, // 1913064459
		{ &Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsOneOrMoreDone, "IsOneOrMoreDone" }, // 875250221
		{ &Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsRunning, "IsRunning" }, // 1539012076
		{ &Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_IsWait, "IsWait" }, // 3065882667
		{ &Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_RemoveEnv, "RemoveEnv" }, // 4267522435
		{ &Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_ResetDone, "ResetDone" }, // 2636246115
		{ &Z_Construct_UFunction_UNevarokMLEnvsSynchronizerComponent_SetDone, "SetDone" }, // 738530787
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/NevarokMLEnvsSynchronizerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLEnvsSynchronizerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__envs_Inner = { "_envs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ANevarokMLEnv_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__envs_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "NevarokML|EnvsSynchronizerComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLEnvsSynchronizerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__envs = { "_envs", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLEnvsSynchronizerComponent, _envs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__envs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__envs_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__doneEnvs_Inner = { "_doneEnvs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ANevarokMLEnv_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__doneEnvs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/NevarokMLEnvsSynchronizerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__doneEnvs = { "_doneEnvs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLEnvsSynchronizerComponent, _doneEnvs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__doneEnvs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__doneEnvs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__envs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__envs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__doneEnvs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::NewProp__doneEnvs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLEnvsSynchronizerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::ClassParams = {
		&UNevarokMLEnvsSynchronizerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLEnvsSynchronizerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLEnvsSynchronizerComponent.OuterSingleton, Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLEnvsSynchronizerComponent.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLEnvsSynchronizerComponent>()
	{
		return UNevarokMLEnvsSynchronizerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLEnvsSynchronizerComponent);
	UNevarokMLEnvsSynchronizerComponent::~UNevarokMLEnvsSynchronizerComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLEnvsSynchronizerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLEnvsSynchronizerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLEnvsSynchronizerComponent, UNevarokMLEnvsSynchronizerComponent::StaticClass, TEXT("UNevarokMLEnvsSynchronizerComponent"), &Z_Registration_Info_UClass_UNevarokMLEnvsSynchronizerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLEnvsSynchronizerComponent), 2698739905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLEnvsSynchronizerComponent_h_3951205181(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLEnvsSynchronizerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLEnvsSynchronizerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
