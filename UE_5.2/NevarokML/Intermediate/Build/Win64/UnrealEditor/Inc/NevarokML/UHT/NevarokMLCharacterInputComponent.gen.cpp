// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Components/NevarokMLCharacterInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLCharacterInputComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLCharacterInputComponent();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLCharacterInputComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLCharacterInputComponent::execGetIsGrounded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsGrounded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLCharacterInputComponent::execResetInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLCharacterInputComponent::execAddDiscreteJumpInput)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_jump);
		P_GET_UBOOL(Z_Param_groundedOnly);
		P_GET_UBOOL(Z_Param_simulateTick);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddDiscreteJumpInput(Z_Param_value,Z_Param_jump,Z_Param_groundedOnly,Z_Param_simulateTick);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLCharacterInputComponent::execAddDiscreteTurnInput)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_left);
		P_GET_PROPERTY(FIntProperty,Z_Param_right);
		P_GET_PROPERTY(FFloatProperty,Z_Param_turnRate);
		P_GET_UBOOL(Z_Param_groundedOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddDiscreteTurnInput(Z_Param_value,Z_Param_left,Z_Param_right,Z_Param_turnRate,Z_Param_groundedOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLCharacterInputComponent::execAddDiscreteAxisMoveInput)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_left);
		P_GET_PROPERTY(FIntProperty,Z_Param_forwardLeft);
		P_GET_PROPERTY(FIntProperty,Z_Param_forward);
		P_GET_PROPERTY(FIntProperty,Z_Param_forwardRight);
		P_GET_PROPERTY(FIntProperty,Z_Param_right);
		P_GET_PROPERTY(FIntProperty,Z_Param_backwardRight);
		P_GET_PROPERTY(FIntProperty,Z_Param_backward);
		P_GET_PROPERTY(FIntProperty,Z_Param_backwardLeft);
		P_GET_UBOOL(Z_Param_groundedOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddDiscreteAxisMoveInput(Z_Param_value,Z_Param_left,Z_Param_forwardLeft,Z_Param_forward,Z_Param_forwardRight,Z_Param_right,Z_Param_backwardRight,Z_Param_backward,Z_Param_backwardLeft,Z_Param_groundedOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLCharacterInputComponent::execAddDiscreteWorldMoveInput)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_left);
		P_GET_PROPERTY(FIntProperty,Z_Param_forwardLeft);
		P_GET_PROPERTY(FIntProperty,Z_Param_forward);
		P_GET_PROPERTY(FIntProperty,Z_Param_forwardRight);
		P_GET_PROPERTY(FIntProperty,Z_Param_right);
		P_GET_PROPERTY(FIntProperty,Z_Param_backwardRight);
		P_GET_PROPERTY(FIntProperty,Z_Param_backward);
		P_GET_PROPERTY(FIntProperty,Z_Param_backwardLeft);
		P_GET_UBOOL(Z_Param_groundedOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddDiscreteWorldMoveInput(Z_Param_value,Z_Param_left,Z_Param_forwardLeft,Z_Param_forward,Z_Param_forwardRight,Z_Param_right,Z_Param_backwardRight,Z_Param_backward,Z_Param_backwardLeft,Z_Param_groundedOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLCharacterInputComponent::execForceMovementTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceMovementTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLCharacterInputComponent::execEnableMovementTick)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableMovementTick(Z_Param_enable);
		P_NATIVE_END;
	}
	void UNevarokMLCharacterInputComponent::StaticRegisterNativesUNevarokMLCharacterInputComponent()
	{
		UClass* Class = UNevarokMLCharacterInputComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDiscreteAxisMoveInput", &UNevarokMLCharacterInputComponent::execAddDiscreteAxisMoveInput },
			{ "AddDiscreteJumpInput", &UNevarokMLCharacterInputComponent::execAddDiscreteJumpInput },
			{ "AddDiscreteTurnInput", &UNevarokMLCharacterInputComponent::execAddDiscreteTurnInput },
			{ "AddDiscreteWorldMoveInput", &UNevarokMLCharacterInputComponent::execAddDiscreteWorldMoveInput },
			{ "EnableMovementTick", &UNevarokMLCharacterInputComponent::execEnableMovementTick },
			{ "ForceMovementTick", &UNevarokMLCharacterInputComponent::execForceMovementTick },
			{ "GetIsGrounded", &UNevarokMLCharacterInputComponent::execGetIsGrounded },
			{ "ResetInput", &UNevarokMLCharacterInputComponent::execResetInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics
	{
		struct NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms
		{
			int64 value;
			int32 left;
			int32 forwardLeft;
			int32 forward;
			int32 forwardRight;
			int32 right;
			int32 backwardRight;
			int32 backward;
			int32 backwardLeft;
			bool groundedOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_left;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_forwardLeft;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_forward;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_forwardRight;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_right;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_backwardRight;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_backward;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_backwardLeft;
		static void NewProp_groundedOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_groundedOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_forwardLeft = { "forwardLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms, forwardLeft), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_forward = { "forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms, forward), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_forwardRight = { "forwardRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms, forwardRight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms, right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_backwardRight = { "backwardRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms, backwardRight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_backward = { "backward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms, backward), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_backwardLeft = { "backwardLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms, backwardLeft), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_groundedOnly_SetBit(void* Obj)
	{
		((NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms*)Obj)->groundedOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_groundedOnly = { "groundedOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms), &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_groundedOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms), &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_forwardLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_forward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_forwardRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_backwardRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_backward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_backwardLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_groundedOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|CharacterInputComponent" },
		{ "CPP_Default_backward", "-1" },
		{ "CPP_Default_backwardLeft", "-1" },
		{ "CPP_Default_backwardRight", "-1" },
		{ "CPP_Default_forward", "-1" },
		{ "CPP_Default_forwardLeft", "-1" },
		{ "CPP_Default_forwardRight", "-1" },
		{ "CPP_Default_groundedOnly", "true" },
		{ "CPP_Default_left", "-1" },
		{ "CPP_Default_right", "-1" },
		{ "CPP_Default_value", "-1" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCharacterInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLCharacterInputComponent, nullptr, "AddDiscreteAxisMoveInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::NevarokMLCharacterInputComponent_eventAddDiscreteAxisMoveInput_Parms), Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics
	{
		struct NevarokMLCharacterInputComponent_eventAddDiscreteJumpInput_Parms
		{
			int64 value;
			int32 jump;
			bool groundedOnly;
			bool simulateTick;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_jump;
		static void NewProp_groundedOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_groundedOnly;
		static void NewProp_simulateTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_simulateTick;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteJumpInput_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_jump = { "jump", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteJumpInput_Parms, jump), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_groundedOnly_SetBit(void* Obj)
	{
		((NevarokMLCharacterInputComponent_eventAddDiscreteJumpInput_Parms*)Obj)->groundedOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_groundedOnly = { "groundedOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCharacterInputComponent_eventAddDiscreteJumpInput_Parms), &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_groundedOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_simulateTick_SetBit(void* Obj)
	{
		((NevarokMLCharacterInputComponent_eventAddDiscreteJumpInput_Parms*)Obj)->simulateTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_simulateTick = { "simulateTick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCharacterInputComponent_eventAddDiscreteJumpInput_Parms), &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_simulateTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLCharacterInputComponent_eventAddDiscreteJumpInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCharacterInputComponent_eventAddDiscreteJumpInput_Parms), &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_jump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_groundedOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_simulateTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|CharacterInputComponent" },
		{ "CPP_Default_groundedOnly", "true" },
		{ "CPP_Default_jump", "-1" },
		{ "CPP_Default_simulateTick", "false" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCharacterInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLCharacterInputComponent, nullptr, "AddDiscreteJumpInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::NevarokMLCharacterInputComponent_eventAddDiscreteJumpInput_Parms), Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics
	{
		struct NevarokMLCharacterInputComponent_eventAddDiscreteTurnInput_Parms
		{
			int64 value;
			int32 left;
			int32 right;
			float turnRate;
			bool groundedOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_left;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_right;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_turnRate;
		static void NewProp_groundedOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_groundedOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteTurnInput_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteTurnInput_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteTurnInput_Parms, right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_turnRate = { "turnRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteTurnInput_Parms, turnRate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_groundedOnly_SetBit(void* Obj)
	{
		((NevarokMLCharacterInputComponent_eventAddDiscreteTurnInput_Parms*)Obj)->groundedOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_groundedOnly = { "groundedOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCharacterInputComponent_eventAddDiscreteTurnInput_Parms), &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_groundedOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLCharacterInputComponent_eventAddDiscreteTurnInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCharacterInputComponent_eventAddDiscreteTurnInput_Parms), &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_turnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_groundedOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|CharacterInputComponent" },
		{ "CPP_Default_groundedOnly", "true" },
		{ "CPP_Default_left", "-1" },
		{ "CPP_Default_right", "-1" },
		{ "CPP_Default_turnRate", "60.000000" },
		{ "CPP_Default_value", "-1" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCharacterInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLCharacterInputComponent, nullptr, "AddDiscreteTurnInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::NevarokMLCharacterInputComponent_eventAddDiscreteTurnInput_Parms), Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics
	{
		struct NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms
		{
			int64 value;
			int32 left;
			int32 forwardLeft;
			int32 forward;
			int32 forwardRight;
			int32 right;
			int32 backwardRight;
			int32 backward;
			int32 backwardLeft;
			bool groundedOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_left;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_forwardLeft;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_forward;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_forwardRight;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_right;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_backwardRight;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_backward;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_backwardLeft;
		static void NewProp_groundedOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_groundedOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_forwardLeft = { "forwardLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms, forwardLeft), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_forward = { "forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms, forward), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_forwardRight = { "forwardRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms, forwardRight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms, right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_backwardRight = { "backwardRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms, backwardRight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_backward = { "backward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms, backward), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_backwardLeft = { "backwardLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms, backwardLeft), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_groundedOnly_SetBit(void* Obj)
	{
		((NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms*)Obj)->groundedOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_groundedOnly = { "groundedOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms), &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_groundedOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms), &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_forwardLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_forward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_forwardRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_backwardRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_backward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_backwardLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_groundedOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|CharacterInputComponent" },
		{ "CPP_Default_backward", "-1" },
		{ "CPP_Default_backwardLeft", "-1" },
		{ "CPP_Default_backwardRight", "-1" },
		{ "CPP_Default_forward", "-1" },
		{ "CPP_Default_forwardLeft", "-1" },
		{ "CPP_Default_forwardRight", "-1" },
		{ "CPP_Default_groundedOnly", "true" },
		{ "CPP_Default_left", "-1" },
		{ "CPP_Default_right", "-1" },
		{ "CPP_Default_value", "-1" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCharacterInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLCharacterInputComponent, nullptr, "AddDiscreteWorldMoveInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::NevarokMLCharacterInputComponent_eventAddDiscreteWorldMoveInput_Parms), Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics
	{
		struct NevarokMLCharacterInputComponent_eventEnableMovementTick_Parms
		{
			bool enable;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((NevarokMLCharacterInputComponent_eventEnableMovementTick_Parms*)Obj)->enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCharacterInputComponent_eventEnableMovementTick_Parms), &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics::NewProp_enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics::NewProp_enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|CharacterInputComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCharacterInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLCharacterInputComponent, nullptr, "EnableMovementTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics::NevarokMLCharacterInputComponent_eventEnableMovementTick_Parms), Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ForceMovementTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ForceMovementTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|CharacterInputComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCharacterInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ForceMovementTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLCharacterInputComponent, nullptr, "ForceMovementTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ForceMovementTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ForceMovementTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ForceMovementTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ForceMovementTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics
	{
		struct NevarokMLCharacterInputComponent_eventGetIsGrounded_Parms
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
	void Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLCharacterInputComponent_eventGetIsGrounded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCharacterInputComponent_eventGetIsGrounded_Parms), &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|CharacterInputComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCharacterInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLCharacterInputComponent, nullptr, "GetIsGrounded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics::NevarokMLCharacterInputComponent_eventGetIsGrounded_Parms), Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ResetInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ResetInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|CharacterInputComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCharacterInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ResetInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLCharacterInputComponent, nullptr, "ResetInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ResetInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ResetInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ResetInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ResetInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLCharacterInputComponent);
	UClass* Z_Construct_UClass_UNevarokMLCharacterInputComponent_NoRegister()
	{
		return UNevarokMLCharacterInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteAxisMoveInput, "AddDiscreteAxisMoveInput" }, // 1535154890
		{ &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteJumpInput, "AddDiscreteJumpInput" }, // 1699463306
		{ &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteTurnInput, "AddDiscreteTurnInput" }, // 469539414
		{ &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_AddDiscreteWorldMoveInput, "AddDiscreteWorldMoveInput" }, // 2254810321
		{ &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_EnableMovementTick, "EnableMovementTick" }, // 3386481256
		{ &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ForceMovementTick, "ForceMovementTick" }, // 474265333
		{ &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_GetIsGrounded, "GetIsGrounded" }, // 846495892
		{ &Z_Construct_UFunction_UNevarokMLCharacterInputComponent_ResetInput, "ResetInput" }, // 1988116752
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/NevarokMLCharacterInputComponent.h" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCharacterInputComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::NewProp__character_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/NevarokMLCharacterInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::NewProp__character = { "_character", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLCharacterInputComponent, _character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::NewProp__character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::NewProp__character_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::NewProp__character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLCharacterInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::ClassParams = {
		&UNevarokMLCharacterInputComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLCharacterInputComponent()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLCharacterInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLCharacterInputComponent.OuterSingleton, Z_Construct_UClass_UNevarokMLCharacterInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLCharacterInputComponent.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLCharacterInputComponent>()
	{
		return UNevarokMLCharacterInputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLCharacterInputComponent);
	UNevarokMLCharacterInputComponent::~UNevarokMLCharacterInputComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLCharacterInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLCharacterInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLCharacterInputComponent, UNevarokMLCharacterInputComponent::StaticClass, TEXT("UNevarokMLCharacterInputComponent"), &Z_Registration_Info_UClass_UNevarokMLCharacterInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLCharacterInputComponent), 304369242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLCharacterInputComponent_h_1941038342(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLCharacterInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLCharacterInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
