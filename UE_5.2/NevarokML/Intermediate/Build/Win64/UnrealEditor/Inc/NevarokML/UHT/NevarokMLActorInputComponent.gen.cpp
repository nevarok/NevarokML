// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Components/NevarokMLActorInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLActorInputComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLActorInputComponent();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLActorInputComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLActorInputComponent::execAddDiscreteRotationInput)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_condition);
		P_GET_STRUCT(FRotator,Z_Param_rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddDiscreteRotationInput(Z_Param_value,Z_Param_condition,Z_Param_rate);
		P_NATIVE_END;
	}
	void UNevarokMLActorInputComponent::StaticRegisterNativesUNevarokMLActorInputComponent()
	{
		UClass* Class = UNevarokMLActorInputComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDiscreteRotationInput", &UNevarokMLActorInputComponent::execAddDiscreteRotationInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics
	{
		struct NevarokMLActorInputComponent_eventAddDiscreteRotationInput_Parms
		{
			int64 value;
			int32 condition;
			FRotator rate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_condition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLActorInputComponent_eventAddDiscreteRotationInput_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::NewProp_condition = { "condition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLActorInputComponent_eventAddDiscreteRotationInput_Parms, condition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::NewProp_rate = { "rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLActorInputComponent_eventAddDiscreteRotationInput_Parms, rate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLActorInputComponent_eventAddDiscreteRotationInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLActorInputComponent_eventAddDiscreteRotationInput_Parms), &Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::NewProp_condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::NewProp_rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|ActorInputComponent" },
		{ "CPP_Default_condition", "-1" },
		{ "CPP_Default_rate", "" },
		{ "CPP_Default_value", "-1" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLActorInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLActorInputComponent, nullptr, "AddDiscreteRotationInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::NevarokMLActorInputComponent_eventAddDiscreteRotationInput_Parms), Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLActorInputComponent);
	UClass* Z_Construct_UClass_UNevarokMLActorInputComponent_NoRegister()
	{
		return UNevarokMLActorInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLActorInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLActorInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLActorInputComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLActorInputComponent_AddDiscreteRotationInput, "AddDiscreteRotationInput" }, // 2956430495
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLActorInputComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/NevarokMLActorInputComponent.h" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLActorInputComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLActorInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLActorInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLActorInputComponent_Statics::ClassParams = {
		&UNevarokMLActorInputComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLActorInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLActorInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLActorInputComponent()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLActorInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLActorInputComponent.OuterSingleton, Z_Construct_UClass_UNevarokMLActorInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLActorInputComponent.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLActorInputComponent>()
	{
		return UNevarokMLActorInputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLActorInputComponent);
	UNevarokMLActorInputComponent::~UNevarokMLActorInputComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLActorInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLActorInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLActorInputComponent, UNevarokMLActorInputComponent::StaticClass, TEXT("UNevarokMLActorInputComponent"), &Z_Registration_Info_UClass_UNevarokMLActorInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLActorInputComponent), 2139252967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLActorInputComponent_h_2357754827(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLActorInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLActorInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
