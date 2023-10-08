// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Components/NevarokMLCommonSensorComponent.h"
#include "NevarokML/Public/Types/NevarokMLIndex2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLCommonSensorComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLCommonSensorComponent();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLCommonSensorComponent_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSample_NoRegister();
	NEVAROKML_API UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLIndex2D();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLCommonSensorComponent::execSampleBoxDifference)
	{
		P_GET_OBJECT(UNevarokMLSample,Z_Param_sample);
		P_GET_OBJECT(AActor,Z_Param_to);
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxSize);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_xDifferenceIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_yDifferenceIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_zDifferenceIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_xDirectionIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_yDirectionIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_zDirectionIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_lengthIndex);
		P_GET_UBOOL(Z_Param_multicast);
		P_GET_UBOOL(Z_Param_debug);
		P_GET_PROPERTY(FFloatProperty,Z_Param_debugDuration);
		P_GET_STRUCT(FLinearColor,Z_Param_debugColor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_difference);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_length);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SampleBoxDifference(Z_Param_sample,Z_Param_to,Z_Param_multiplier,Z_Param_maxSize,Z_Param_xDifferenceIndex,Z_Param_yDifferenceIndex,Z_Param_zDifferenceIndex,Z_Param_xDirectionIndex,Z_Param_yDirectionIndex,Z_Param_zDirectionIndex,Z_Param_lengthIndex,Z_Param_multicast,Z_Param_debug,Z_Param_debugDuration,Z_Param_debugColor,Z_Param_Out_difference,Z_Param_Out_direction,Z_Param_Out_length);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLCommonSensorComponent::execSampleBoxForward)
	{
		P_GET_OBJECT(UNevarokMLSample,Z_Param_sample);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_xIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_yIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_zIndex);
		P_GET_UBOOL(Z_Param_multicast);
		P_GET_UBOOL(Z_Param_debug);
		P_GET_PROPERTY(FFloatProperty,Z_Param_debugDuration);
		P_GET_STRUCT(FLinearColor,Z_Param_debugColor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_forward);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SampleBoxForward(Z_Param_sample,Z_Param_xIndex,Z_Param_yIndex,Z_Param_zIndex,Z_Param_multicast,Z_Param_debug,Z_Param_debugDuration,Z_Param_debugColor,Z_Param_Out_forward);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLCommonSensorComponent::execSampleBoxRotation)
	{
		P_GET_OBJECT(UNevarokMLSample,Z_Param_sample);
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_pitch);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_yaw);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_roll);
		P_GET_UBOOL(Z_Param_multicast);
		P_GET_UBOOL(Z_Param_debug);
		P_GET_PROPERTY(FFloatProperty,Z_Param_debugDuration);
		P_GET_STRUCT(FLinearColor,Z_Param_debugColor);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_rotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SampleBoxRotation(Z_Param_sample,Z_Param_multiplier,Z_Param_pitch,Z_Param_yaw,Z_Param_roll,Z_Param_multicast,Z_Param_debug,Z_Param_debugDuration,Z_Param_debugColor,Z_Param_Out_rotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLCommonSensorComponent::execSampleBoxVelocity)
	{
		P_GET_OBJECT(UNevarokMLSample,Z_Param_sample);
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxSize);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_xVelocityIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_yVelocityIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_zVelocityIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_xDirectionIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_yDirectionIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_zDirectionIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_lengthIndex);
		P_GET_UBOOL(Z_Param_multicast);
		P_GET_UBOOL(Z_Param_debug);
		P_GET_PROPERTY(FFloatProperty,Z_Param_debugDuration);
		P_GET_STRUCT(FLinearColor,Z_Param_debugColor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_velocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_length);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SampleBoxVelocity(Z_Param_sample,Z_Param_multiplier,Z_Param_maxSize,Z_Param_xVelocityIndex,Z_Param_yVelocityIndex,Z_Param_zVelocityIndex,Z_Param_xDirectionIndex,Z_Param_yDirectionIndex,Z_Param_zDirectionIndex,Z_Param_lengthIndex,Z_Param_multicast,Z_Param_debug,Z_Param_debugDuration,Z_Param_debugColor,Z_Param_Out_velocity,Z_Param_Out_direction,Z_Param_Out_length);
		P_NATIVE_END;
	}
	void UNevarokMLCommonSensorComponent::StaticRegisterNativesUNevarokMLCommonSensorComponent()
	{
		UClass* Class = UNevarokMLCommonSensorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SampleBoxDifference", &UNevarokMLCommonSensorComponent::execSampleBoxDifference },
			{ "SampleBoxForward", &UNevarokMLCommonSensorComponent::execSampleBoxForward },
			{ "SampleBoxRotation", &UNevarokMLCommonSensorComponent::execSampleBoxRotation },
			{ "SampleBoxVelocity", &UNevarokMLCommonSensorComponent::execSampleBoxVelocity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics
	{
		struct NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms
		{
			UNevarokMLSample* sample;
			const AActor* to;
			float multiplier;
			float maxSize;
			FNevarokMLIndex2D xDifferenceIndex;
			FNevarokMLIndex2D yDifferenceIndex;
			FNevarokMLIndex2D zDifferenceIndex;
			FNevarokMLIndex2D xDirectionIndex;
			FNevarokMLIndex2D yDirectionIndex;
			FNevarokMLIndex2D zDirectionIndex;
			FNevarokMLIndex2D lengthIndex;
			bool multicast;
			bool debug;
			float debugDuration;
			FLinearColor debugColor;
			FVector difference;
			FVector direction;
			float length;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_to_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_to;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xDifferenceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_xDifferenceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yDifferenceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_yDifferenceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zDifferenceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_zDifferenceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xDirectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_xDirectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yDirectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_yDirectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zDirectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_zDirectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lengthIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lengthIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multicast_MetaData[];
#endif
		static void NewProp_multicast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_multicast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debug_MetaData[];
#endif
		static void NewProp_debug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_debugDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_difference;
		static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_sample = { "sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, sample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_to_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, to), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_to_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_to_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, multiplier), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_maxSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_maxSize = { "maxSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, maxSize), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_maxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_maxSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_xDifferenceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_xDifferenceIndex = { "xDifferenceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, xDifferenceIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_xDifferenceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_xDifferenceIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_yDifferenceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_yDifferenceIndex = { "yDifferenceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, yDifferenceIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_yDifferenceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_yDifferenceIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_zDifferenceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_zDifferenceIndex = { "zDifferenceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, zDifferenceIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_zDifferenceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_zDifferenceIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_xDirectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_xDirectionIndex = { "xDirectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, xDirectionIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_xDirectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_xDirectionIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_yDirectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_yDirectionIndex = { "yDirectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, yDirectionIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_yDirectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_yDirectionIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_zDirectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_zDirectionIndex = { "zDirectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, zDirectionIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_zDirectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_zDirectionIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_lengthIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_lengthIndex = { "lengthIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, lengthIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_lengthIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_lengthIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_multicast_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_multicast_SetBit(void* Obj)
	{
		((NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms*)Obj)->multicast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_multicast = { "multicast", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms), &Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_multicast_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_multicast_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_multicast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debug_SetBit(void* Obj)
	{
		((NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms*)Obj)->debug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debug = { "debug", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms), &Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debugDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debugDuration = { "debugDuration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, debugDuration), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debugDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debugDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debugColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debugColor = { "debugColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, debugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debugColor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_difference = { "difference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, difference), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_sample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_to,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_maxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_xDifferenceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_yDifferenceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_zDifferenceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_xDirectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_yDirectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_zDirectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_lengthIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_multicast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debugDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_debugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_difference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NewProp_length,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|CommonSensorComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCommonSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLCommonSensorComponent, nullptr, "SampleBoxDifference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::NevarokMLCommonSensorComponent_eventSampleBoxDifference_Parms), Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics
	{
		struct NevarokMLCommonSensorComponent_eventSampleBoxForward_Parms
		{
			UNevarokMLSample* sample;
			FNevarokMLIndex2D xIndex;
			FNevarokMLIndex2D yIndex;
			FNevarokMLIndex2D zIndex;
			bool multicast;
			bool debug;
			float debugDuration;
			FLinearColor debugColor;
			FVector forward;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_xIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_yIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_zIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multicast_MetaData[];
#endif
		static void NewProp_multicast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_multicast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debug_MetaData[];
#endif
		static void NewProp_debug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_debugDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_forward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_sample = { "sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxForward_Parms, sample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_xIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_xIndex = { "xIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxForward_Parms, xIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_xIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_xIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_yIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_yIndex = { "yIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxForward_Parms, yIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_yIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_yIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_zIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_zIndex = { "zIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxForward_Parms, zIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_zIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_zIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_multicast_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_multicast_SetBit(void* Obj)
	{
		((NevarokMLCommonSensorComponent_eventSampleBoxForward_Parms*)Obj)->multicast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_multicast = { "multicast", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCommonSensorComponent_eventSampleBoxForward_Parms), &Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_multicast_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_multicast_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_multicast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debug_SetBit(void* Obj)
	{
		((NevarokMLCommonSensorComponent_eventSampleBoxForward_Parms*)Obj)->debug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debug = { "debug", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCommonSensorComponent_eventSampleBoxForward_Parms), &Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debugDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debugDuration = { "debugDuration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxForward_Parms, debugDuration), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debugDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debugDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debugColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debugColor = { "debugColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxForward_Parms, debugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debugColor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_forward = { "forward", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxForward_Parms, forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_sample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_xIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_yIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_zIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_multicast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debugDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_debugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NewProp_forward,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|CommonSensorComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCommonSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLCommonSensorComponent, nullptr, "SampleBoxForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::NevarokMLCommonSensorComponent_eventSampleBoxForward_Parms), Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics
	{
		struct NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms
		{
			UNevarokMLSample* sample;
			float multiplier;
			FNevarokMLIndex2D pitch;
			FNevarokMLIndex2D yaw;
			FNevarokMLIndex2D roll;
			bool multicast;
			bool debug;
			float debugDuration;
			FLinearColor debugColor;
			FRotator rotator;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pitch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yaw_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_roll_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_roll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multicast_MetaData[];
#endif
		static void NewProp_multicast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_multicast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debug_MetaData[];
#endif
		static void NewProp_debug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_debugDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_sample = { "sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms, sample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms, multiplier), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_pitch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_pitch = { "pitch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms, pitch), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_pitch_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_yaw_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_yaw = { "yaw", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms, yaw), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_yaw_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_roll_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_roll = { "roll", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms, roll), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_roll_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_multicast_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_multicast_SetBit(void* Obj)
	{
		((NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms*)Obj)->multicast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_multicast = { "multicast", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms), &Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_multicast_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_multicast_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_multicast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debug_SetBit(void* Obj)
	{
		((NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms*)Obj)->debug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debug = { "debug", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms), &Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debugDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debugDuration = { "debugDuration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms, debugDuration), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debugDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debugDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debugColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debugColor = { "debugColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms, debugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debugColor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_rotator = { "rotator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms, rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_sample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_roll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_multicast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debugDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_debugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NewProp_rotator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|CommonSensorComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCommonSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLCommonSensorComponent, nullptr, "SampleBoxRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::NevarokMLCommonSensorComponent_eventSampleBoxRotation_Parms), Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics
	{
		struct NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms
		{
			UNevarokMLSample* sample;
			float multiplier;
			float maxSize;
			FNevarokMLIndex2D xVelocityIndex;
			FNevarokMLIndex2D yVelocityIndex;
			FNevarokMLIndex2D zVelocityIndex;
			FNevarokMLIndex2D xDirectionIndex;
			FNevarokMLIndex2D yDirectionIndex;
			FNevarokMLIndex2D zDirectionIndex;
			FNevarokMLIndex2D lengthIndex;
			bool multicast;
			bool debug;
			float debugDuration;
			FLinearColor debugColor;
			FVector velocity;
			FVector direction;
			float length;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xVelocityIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_xVelocityIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yVelocityIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_yVelocityIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zVelocityIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_zVelocityIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xDirectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_xDirectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yDirectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_yDirectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zDirectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_zDirectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lengthIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lengthIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multicast_MetaData[];
#endif
		static void NewProp_multicast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_multicast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debug_MetaData[];
#endif
		static void NewProp_debug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_debugDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_velocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_sample = { "sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, sample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, multiplier), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_maxSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_maxSize = { "maxSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, maxSize), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_maxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_maxSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_xVelocityIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_xVelocityIndex = { "xVelocityIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, xVelocityIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_xVelocityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_xVelocityIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_yVelocityIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_yVelocityIndex = { "yVelocityIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, yVelocityIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_yVelocityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_yVelocityIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_zVelocityIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_zVelocityIndex = { "zVelocityIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, zVelocityIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_zVelocityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_zVelocityIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_xDirectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_xDirectionIndex = { "xDirectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, xDirectionIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_xDirectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_xDirectionIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_yDirectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_yDirectionIndex = { "yDirectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, yDirectionIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_yDirectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_yDirectionIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_zDirectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_zDirectionIndex = { "zDirectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, zDirectionIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_zDirectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_zDirectionIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_lengthIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_lengthIndex = { "lengthIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, lengthIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_lengthIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_lengthIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_multicast_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_multicast_SetBit(void* Obj)
	{
		((NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms*)Obj)->multicast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_multicast = { "multicast", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms), &Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_multicast_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_multicast_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_multicast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debug_SetBit(void* Obj)
	{
		((NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms*)Obj)->debug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debug = { "debug", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms), &Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debugDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debugDuration = { "debugDuration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, debugDuration), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debugDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debugDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debugColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debugColor = { "debugColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, debugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debugColor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_sample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_maxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_xVelocityIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_yVelocityIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_zVelocityIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_xDirectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_yDirectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_zDirectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_lengthIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_multicast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debugDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_debugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NewProp_length,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|CommonSensorComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCommonSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLCommonSensorComponent, nullptr, "SampleBoxVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::NevarokMLCommonSensorComponent_eventSampleBoxVelocity_Parms), Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLCommonSensorComponent);
	UClass* Z_Construct_UClass_UNevarokMLCommonSensorComponent_NoRegister()
	{
		return UNevarokMLCommonSensorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLCommonSensorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLCommonSensorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLCommonSensorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxDifference, "SampleBoxDifference" }, // 4286597367
		{ &Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxForward, "SampleBoxForward" }, // 2740353851
		{ &Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxRotation, "SampleBoxRotation" }, // 4194135474
		{ &Z_Construct_UFunction_UNevarokMLCommonSensorComponent_SampleBoxVelocity, "SampleBoxVelocity" }, // 3914134395
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLCommonSensorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/NevarokMLCommonSensorComponent.h" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLCommonSensorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLCommonSensorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLCommonSensorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLCommonSensorComponent_Statics::ClassParams = {
		&UNevarokMLCommonSensorComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLCommonSensorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLCommonSensorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLCommonSensorComponent()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLCommonSensorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLCommonSensorComponent.OuterSingleton, Z_Construct_UClass_UNevarokMLCommonSensorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLCommonSensorComponent.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLCommonSensorComponent>()
	{
		return UNevarokMLCommonSensorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLCommonSensorComponent);
	UNevarokMLCommonSensorComponent::~UNevarokMLCommonSensorComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLCommonSensorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLCommonSensorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLCommonSensorComponent, UNevarokMLCommonSensorComponent::StaticClass, TEXT("UNevarokMLCommonSensorComponent"), &Z_Registration_Info_UClass_UNevarokMLCommonSensorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLCommonSensorComponent), 1165901772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLCommonSensorComponent_h_3263345173(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLCommonSensorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLCommonSensorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
