// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Components/NevarokMLSphereTriggerComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLSphereTriggerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSphereTriggerComponent();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSphereTriggerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLSphereTriggerComponent::execIsTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSphereTriggerComponent::execResetTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTrigger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSphereTriggerComponent::execOnTriggerBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerBeginOverlap(Z_Param_overlappedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	void UNevarokMLSphereTriggerComponent::StaticRegisterNativesUNevarokMLSphereTriggerComponent()
	{
		UClass* Class = UNevarokMLSphereTriggerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsTriggered", &UNevarokMLSphereTriggerComponent::execIsTriggered },
			{ "OnTriggerBeginOverlap", &UNevarokMLSphereTriggerComponent::execOnTriggerBeginOverlap },
			{ "ResetTrigger", &UNevarokMLSphereTriggerComponent::execResetTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics
	{
		struct NevarokMLSphereTriggerComponent_eventIsTriggered_Parms
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
	void Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSphereTriggerComponent_eventIsTriggered_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSphereTriggerComponent_eventIsTriggered_Parms), &Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SphereTriggerComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLSphereTriggerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSphereTriggerComponent, nullptr, "IsTriggered", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics::NevarokMLSphereTriggerComponent_eventIsTriggered_Parms), Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics
	{
		struct NevarokMLSphereTriggerComponent_eventOnTriggerBeginOverlap_Parms
		{
			UPrimitiveComponent* overlappedComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSphereTriggerComponent_eventOnTriggerBeginOverlap_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_overlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_overlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSphereTriggerComponent_eventOnTriggerBeginOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSphereTriggerComponent_eventOnTriggerBeginOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_otherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSphereTriggerComponent_eventOnTriggerBeginOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((NevarokMLSphereTriggerComponent_eventOnTriggerBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSphereTriggerComponent_eventOnTriggerBeginOverlap_Parms), &Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSphereTriggerComponent_eventOnTriggerBeginOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_sweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_overlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_otherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_otherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NewProp_sweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NevarokMLSphereTriggerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSphereTriggerComponent, nullptr, "OnTriggerBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::NevarokMLSphereTriggerComponent_eventOnTriggerBeginOverlap_Parms), Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_ResetTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_ResetTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SphereTriggerComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLSphereTriggerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_ResetTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSphereTriggerComponent, nullptr, "ResetTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_ResetTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_ResetTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_ResetTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_ResetTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLSphereTriggerComponent);
	UClass* Z_Construct_UClass_UNevarokMLSphereTriggerComponent_NoRegister()
	{
		return UNevarokMLSphereTriggerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp__triggerTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__triggerTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__triggerTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_IsTriggered, "IsTriggered" }, // 2066034421
		{ &Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_OnTriggerBeginOverlap, "OnTriggerBeginOverlap" }, // 3407197809
		{ &Z_Construct_UFunction_UNevarokMLSphereTriggerComponent_ResetTrigger, "ResetTrigger" }, // 2301659949
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/NevarokMLSphereTriggerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLSphereTriggerComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::NewProp__triggerTags_Inner = { "_triggerTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::NewProp__triggerTags_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "NevarokML|SphereTriggerComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLSphereTriggerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::NewProp__triggerTags = { "_triggerTags", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLSphereTriggerComponent, _triggerTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::NewProp__triggerTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::NewProp__triggerTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::NewProp__triggerTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::NewProp__triggerTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLSphereTriggerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::ClassParams = {
		&UNevarokMLSphereTriggerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLSphereTriggerComponent()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLSphereTriggerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLSphereTriggerComponent.OuterSingleton, Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLSphereTriggerComponent.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLSphereTriggerComponent>()
	{
		return UNevarokMLSphereTriggerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLSphereTriggerComponent);
	UNevarokMLSphereTriggerComponent::~UNevarokMLSphereTriggerComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLSphereTriggerComponent, UNevarokMLSphereTriggerComponent::StaticClass, TEXT("UNevarokMLSphereTriggerComponent"), &Z_Registration_Info_UClass_UNevarokMLSphereTriggerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLSphereTriggerComponent), 3692709529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_1447162829(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
