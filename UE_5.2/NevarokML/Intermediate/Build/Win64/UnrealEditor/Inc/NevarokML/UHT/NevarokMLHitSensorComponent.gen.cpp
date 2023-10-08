// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Components/NevarokMLHitSensorComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLHitSensorComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLHitSensorComponent();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLHitSensorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLHitSensorComponent::execIsHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLHitSensorComponent::execGetHitsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHitsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLHitSensorComponent::execContainsHitTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsHitTag(Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLHitSensorComponent::execResetHits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetHits();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLHitSensorComponent::execOnActorHit)
	{
		P_GET_OBJECT(AActor,Z_Param_selfActor);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_STRUCT(FVector,Z_Param_normalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorHit(Z_Param_selfActor,Z_Param_otherActor,Z_Param_normalImpulse,Z_Param_Out_hit);
		P_NATIVE_END;
	}
	void UNevarokMLHitSensorComponent::StaticRegisterNativesUNevarokMLHitSensorComponent()
	{
		UClass* Class = UNevarokMLHitSensorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContainsHitTag", &UNevarokMLHitSensorComponent::execContainsHitTag },
			{ "GetHitsCount", &UNevarokMLHitSensorComponent::execGetHitsCount },
			{ "IsHit", &UNevarokMLHitSensorComponent::execIsHit },
			{ "OnActorHit", &UNevarokMLHitSensorComponent::execOnActorHit },
			{ "ResetHits", &UNevarokMLHitSensorComponent::execResetHits },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics
	{
		struct NevarokMLHitSensorComponent_eventContainsHitTag_Parms
		{
			FName tag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::NewProp_tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLHitSensorComponent_eventContainsHitTag_Parms, tag), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::NewProp_tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::NewProp_tag_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLHitSensorComponent_eventContainsHitTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLHitSensorComponent_eventContainsHitTag_Parms), &Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|HitSensorComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLHitSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLHitSensorComponent, nullptr, "ContainsHitTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::NevarokMLHitSensorComponent_eventContainsHitTag_Parms), Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount_Statics
	{
		struct NevarokMLHitSensorComponent_eventGetHitsCount_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLHitSensorComponent_eventGetHitsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|HitSensorComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLHitSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLHitSensorComponent, nullptr, "GetHitsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount_Statics::NevarokMLHitSensorComponent_eventGetHitsCount_Parms), Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics
	{
		struct NevarokMLHitSensorComponent_eventIsHit_Parms
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
	void Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLHitSensorComponent_eventIsHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLHitSensorComponent_eventIsHit_Parms), &Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|HitSensorComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLHitSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLHitSensorComponent, nullptr, "IsHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics::NevarokMLHitSensorComponent_eventIsHit_Parms), Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics
	{
		struct NevarokMLHitSensorComponent_eventOnActorHit_Parms
		{
			AActor* selfActor;
			AActor* otherActor;
			FVector normalImpulse;
			FHitResult hit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_selfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_normalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::NewProp_selfActor = { "selfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLHitSensorComponent_eventOnActorHit_Parms, selfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLHitSensorComponent_eventOnActorHit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::NewProp_normalImpulse = { "normalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLHitSensorComponent_eventOnActorHit_Parms, normalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLHitSensorComponent_eventOnActorHit_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::NewProp_hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::NewProp_hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::NewProp_selfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::NewProp_normalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::NewProp_hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NevarokMLHitSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLHitSensorComponent, nullptr, "OnActorHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::NevarokMLHitSensorComponent_eventOnActorHit_Parms), Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLHitSensorComponent_ResetHits_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLHitSensorComponent_ResetHits_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|HitSensorComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLHitSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLHitSensorComponent_ResetHits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLHitSensorComponent, nullptr, "ResetHits", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLHitSensorComponent_ResetHits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLHitSensorComponent_ResetHits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLHitSensorComponent_ResetHits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLHitSensorComponent_ResetHits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLHitSensorComponent);
	UClass* Z_Construct_UClass_UNevarokMLHitSensorComponent_NoRegister()
	{
		return UNevarokMLHitSensorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp__hitTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__hitTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__hitTags;
		static const UECodeGen_Private::FNamePropertyParams NewProp__ignoreHitTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__ignoreHitTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__ignoreHitTags;
		static const UECodeGen_Private::FNamePropertyParams NewProp__allHitTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__allHitTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__allHitTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLHitSensorComponent_ContainsHitTag, "ContainsHitTag" }, // 255928495
		{ &Z_Construct_UFunction_UNevarokMLHitSensorComponent_GetHitsCount, "GetHitsCount" }, // 1365683509
		{ &Z_Construct_UFunction_UNevarokMLHitSensorComponent_IsHit, "IsHit" }, // 767175967
		{ &Z_Construct_UFunction_UNevarokMLHitSensorComponent_OnActorHit, "OnActorHit" }, // 2894750740
		{ &Z_Construct_UFunction_UNevarokMLHitSensorComponent_ResetHits, "ResetHits" }, // 2906965969
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/NevarokMLHitSensorComponent.h" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLHitSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__hitTags_Inner = { "_hitTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__hitTags_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "NevarokML|HitSensorComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLHitSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__hitTags = { "_hitTags", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLHitSensorComponent, _hitTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__hitTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__hitTags_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__ignoreHitTags_Inner = { "_ignoreHitTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__ignoreHitTags_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "NevarokML|HitSensorComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLHitSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__ignoreHitTags = { "_ignoreHitTags", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLHitSensorComponent, _ignoreHitTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__ignoreHitTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__ignoreHitTags_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__allHitTags_Inner = { "_allHitTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__allHitTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/NevarokMLHitSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__allHitTags = { "_allHitTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLHitSensorComponent, _allHitTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__allHitTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__allHitTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__hitTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__hitTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__ignoreHitTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__ignoreHitTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__allHitTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::NewProp__allHitTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLHitSensorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::ClassParams = {
		&UNevarokMLHitSensorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLHitSensorComponent()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLHitSensorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLHitSensorComponent.OuterSingleton, Z_Construct_UClass_UNevarokMLHitSensorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLHitSensorComponent.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLHitSensorComponent>()
	{
		return UNevarokMLHitSensorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLHitSensorComponent);
	UNevarokMLHitSensorComponent::~UNevarokMLHitSensorComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLHitSensorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLHitSensorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLHitSensorComponent, UNevarokMLHitSensorComponent::StaticClass, TEXT("UNevarokMLHitSensorComponent"), &Z_Registration_Info_UClass_UNevarokMLHitSensorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLHitSensorComponent), 1363713942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLHitSensorComponent_h_4173009797(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLHitSensorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLHitSensorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
