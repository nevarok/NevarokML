// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Components/NevarokMLTraceSensorComponent.h"
#include "NevarokML/Public/Types/NevarokMLIndex2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLTraceSensorComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSample_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLTraceSensorComponent();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLTraceSensorComponent_NoRegister();
	NEVAROKML_API UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLIndex2D();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLTraceSensorComponent::execSampleBoxLineTrace)
	{
		P_GET_OBJECT_REF(UNevarokMLSample,Z_Param_Out_sample);
		P_GET_PROPERTY(FFloatProperty,Z_Param_traceLength);
		P_GET_PROPERTY(FByteProperty,Z_Param_traceChannel);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ignoreActors);
		P_GET_TARRAY_REF(FName,Z_Param_Out_tags);
		P_GET_PROPERTY(FFloatProperty,Z_Param_differenceMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_velocityMultiplier);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_tagIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_velocityLengthIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_differenceLengthIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_xVelocityIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_yVelocityIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_zVelocityIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_xVelocityDirectionIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_yVelocityDirectionIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_zVelocityDirectionIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_xDirectionIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_yDirectionIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_zDirectionIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_xDifferenceIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_yDifferenceIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_zDifferenceIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_xNormalIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_yNormalIndex);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_zNormalIndex);
		P_GET_UBOOL(Z_Param_multicast);
		P_GET_UBOOL_REF(Z_Param_Out_isHit);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_tag);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_velocityLength);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_differenceLength);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_velocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_velocityDirection);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_difference);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_normal);
		P_GET_UBOOL(Z_Param_debugTrace);
		P_GET_UBOOL(Z_Param_debugLog);
		P_GET_PROPERTY(FFloatProperty,Z_Param_debugDuration);
		P_GET_STRUCT(FLinearColor,Z_Param_debugColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SampleBoxLineTrace(Z_Param_Out_sample,Z_Param_traceLength,ETraceTypeQuery(Z_Param_traceChannel),Z_Param_Out_ignoreActors,Z_Param_Out_tags,Z_Param_differenceMultiplier,Z_Param_velocityMultiplier,Z_Param_tagIndex,Z_Param_velocityLengthIndex,Z_Param_differenceLengthIndex,Z_Param_xVelocityIndex,Z_Param_yVelocityIndex,Z_Param_zVelocityIndex,Z_Param_xVelocityDirectionIndex,Z_Param_yVelocityDirectionIndex,Z_Param_zVelocityDirectionIndex,Z_Param_xDirectionIndex,Z_Param_yDirectionIndex,Z_Param_zDirectionIndex,Z_Param_xDifferenceIndex,Z_Param_yDifferenceIndex,Z_Param_zDifferenceIndex,Z_Param_xNormalIndex,Z_Param_yNormalIndex,Z_Param_zNormalIndex,Z_Param_multicast,Z_Param_Out_isHit,Z_Param_Out_tag,Z_Param_Out_velocityLength,Z_Param_Out_differenceLength,Z_Param_Out_velocity,Z_Param_Out_velocityDirection,Z_Param_Out_direction,Z_Param_Out_difference,Z_Param_Out_normal,Z_Param_debugTrace,Z_Param_debugLog,Z_Param_debugDuration,Z_Param_debugColor);
		P_NATIVE_END;
	}
	void UNevarokMLTraceSensorComponent::StaticRegisterNativesUNevarokMLTraceSensorComponent()
	{
		UClass* Class = UNevarokMLTraceSensorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SampleBoxLineTrace", &UNevarokMLTraceSensorComponent::execSampleBoxLineTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics
	{
		struct NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms
		{
			UNevarokMLSample* sample;
			float traceLength;
			TEnumAsByte<ETraceTypeQuery> traceChannel;
			TArray<AActor*> ignoreActors;
			TArray<FName> tags;
			float differenceMultiplier;
			float velocityMultiplier;
			FNevarokMLIndex2D tagIndex;
			FNevarokMLIndex2D velocityLengthIndex;
			FNevarokMLIndex2D differenceLengthIndex;
			FNevarokMLIndex2D xVelocityIndex;
			FNevarokMLIndex2D yVelocityIndex;
			FNevarokMLIndex2D zVelocityIndex;
			FNevarokMLIndex2D xVelocityDirectionIndex;
			FNevarokMLIndex2D yVelocityDirectionIndex;
			FNevarokMLIndex2D zVelocityDirectionIndex;
			FNevarokMLIndex2D xDirectionIndex;
			FNevarokMLIndex2D yDirectionIndex;
			FNevarokMLIndex2D zDirectionIndex;
			FNevarokMLIndex2D xDifferenceIndex;
			FNevarokMLIndex2D yDifferenceIndex;
			FNevarokMLIndex2D zDifferenceIndex;
			FNevarokMLIndex2D xNormalIndex;
			FNevarokMLIndex2D yNormalIndex;
			FNevarokMLIndex2D zNormalIndex;
			bool multicast;
			bool isHit;
			float tag;
			float velocityLength;
			float differenceLength;
			FVector velocity;
			FVector velocityDirection;
			FVector direction;
			FVector difference;
			FVector normal;
			bool debugTrace;
			bool debugLog;
			float debugDuration;
			FLinearColor debugColor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_traceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_traceChannel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ignoreActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ignoreActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ignoreActors;
		static const UECodeGen_Private::FNamePropertyParams NewProp_tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_differenceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_differenceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_velocityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_velocityMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tagIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tagIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_velocityLengthIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_velocityLengthIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_differenceLengthIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_differenceLengthIndex;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xVelocityDirectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_xVelocityDirectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yVelocityDirectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_yVelocityDirectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zVelocityDirectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_zVelocityDirectionIndex;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xNormalIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_xNormalIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yNormalIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_yNormalIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zNormalIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_zNormalIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multicast_MetaData[];
#endif
		static void NewProp_multicast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_multicast;
		static void NewProp_isHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isHit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_velocityLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_differenceLength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_velocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_velocityDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_difference;
		static const UECodeGen_Private::FStructPropertyParams NewProp_normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugTrace_MetaData[];
#endif
		static void NewProp_debugTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_debugTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugLog_MetaData[];
#endif
		static void NewProp_debugLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_debugLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_debugDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_sample = { "sample", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, sample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_traceLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_traceLength = { "traceLength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, traceLength), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_traceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_traceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_traceChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_traceChannel = { "traceChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, traceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_traceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_traceChannel_MetaData)) }; // 2906040657
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_ignoreActors_Inner = { "ignoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_ignoreActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_ignoreActors = { "ignoreActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, ignoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_ignoreActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_ignoreActors_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tags_Inner = { "tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tags = { "tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_differenceMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_differenceMultiplier = { "differenceMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, differenceMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_differenceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_differenceMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityMultiplier = { "velocityMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, velocityMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tagIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tagIndex = { "tagIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, tagIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tagIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tagIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityLengthIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityLengthIndex = { "velocityLengthIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, velocityLengthIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityLengthIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityLengthIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_differenceLengthIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_differenceLengthIndex = { "differenceLengthIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, differenceLengthIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_differenceLengthIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_differenceLengthIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xVelocityIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xVelocityIndex = { "xVelocityIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, xVelocityIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xVelocityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xVelocityIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yVelocityIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yVelocityIndex = { "yVelocityIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, yVelocityIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yVelocityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yVelocityIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zVelocityIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zVelocityIndex = { "zVelocityIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, zVelocityIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zVelocityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zVelocityIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xVelocityDirectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xVelocityDirectionIndex = { "xVelocityDirectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, xVelocityDirectionIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xVelocityDirectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xVelocityDirectionIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yVelocityDirectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yVelocityDirectionIndex = { "yVelocityDirectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, yVelocityDirectionIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yVelocityDirectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yVelocityDirectionIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zVelocityDirectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zVelocityDirectionIndex = { "zVelocityDirectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, zVelocityDirectionIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zVelocityDirectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zVelocityDirectionIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xDirectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xDirectionIndex = { "xDirectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, xDirectionIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xDirectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xDirectionIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yDirectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yDirectionIndex = { "yDirectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, yDirectionIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yDirectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yDirectionIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zDirectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zDirectionIndex = { "zDirectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, zDirectionIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zDirectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zDirectionIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xDifferenceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xDifferenceIndex = { "xDifferenceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, xDifferenceIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xDifferenceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xDifferenceIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yDifferenceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yDifferenceIndex = { "yDifferenceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, yDifferenceIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yDifferenceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yDifferenceIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zDifferenceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zDifferenceIndex = { "zDifferenceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, zDifferenceIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zDifferenceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zDifferenceIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xNormalIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xNormalIndex = { "xNormalIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, xNormalIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xNormalIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xNormalIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yNormalIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yNormalIndex = { "yNormalIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, yNormalIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yNormalIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yNormalIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zNormalIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zNormalIndex = { "zNormalIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, zNormalIndex), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zNormalIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zNormalIndex_MetaData)) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_multicast_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_multicast_SetBit(void* Obj)
	{
		((NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms*)Obj)->multicast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_multicast = { "multicast", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms), &Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_multicast_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_multicast_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_multicast_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_isHit_SetBit(void* Obj)
	{
		((NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms*)Obj)->isHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_isHit = { "isHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms), &Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_isHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityLength = { "velocityLength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, velocityLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_differenceLength = { "differenceLength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, differenceLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityDirection = { "velocityDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, velocityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_difference = { "difference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, difference), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_normal = { "normal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugTrace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugTrace_SetBit(void* Obj)
	{
		((NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms*)Obj)->debugTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugTrace = { "debugTrace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms), &Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugTrace_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugLog_SetBit(void* Obj)
	{
		((NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms*)Obj)->debugLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugLog = { "debugLog", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms), &Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugLog_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugDuration = { "debugDuration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, debugDuration), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugColor = { "debugColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms, debugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_sample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_traceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_traceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_ignoreActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_ignoreActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_differenceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tagIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityLengthIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_differenceLengthIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xVelocityIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yVelocityIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zVelocityIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xVelocityDirectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yVelocityDirectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zVelocityDirectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xDirectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yDirectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zDirectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xDifferenceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yDifferenceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zDifferenceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_xNormalIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_yNormalIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_zNormalIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_multicast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_isHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_differenceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_velocityDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_difference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NewProp_debugColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|PawnMovementInputComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLTraceSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLTraceSensorComponent, nullptr, "SampleBoxLineTrace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::NevarokMLTraceSensorComponent_eventSampleBoxLineTrace_Parms), Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLTraceSensorComponent);
	UClass* Z_Construct_UClass_UNevarokMLTraceSensorComponent_NoRegister()
	{
		return UNevarokMLTraceSensorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLTraceSensorComponent_SampleBoxLineTrace, "SampleBoxLineTrace" }, // 1404883544
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/NevarokMLTraceSensorComponent.h" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLTraceSensorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::NewProp_TraceColor_MetaData[] = {
		{ "Category", "NevarokML|TraceSensorComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLTraceSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLTraceSensorComponent, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::NewProp_TraceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::NewProp_TraceColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::NewProp_TraceHitColor_MetaData[] = {
		{ "Category", "NevarokML|TraceSensorComponent" },
		{ "ModuleRelativePath", "Public/Components/NevarokMLTraceSensorComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLTraceSensorComponent, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::NewProp_TraceHitColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::NewProp_TraceHitColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::NewProp_TraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::NewProp_TraceHitColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLTraceSensorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::ClassParams = {
		&UNevarokMLTraceSensorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLTraceSensorComponent()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLTraceSensorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLTraceSensorComponent.OuterSingleton, Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLTraceSensorComponent.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLTraceSensorComponent>()
	{
		return UNevarokMLTraceSensorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLTraceSensorComponent);
	UNevarokMLTraceSensorComponent::~UNevarokMLTraceSensorComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLTraceSensorComponent, UNevarokMLTraceSensorComponent::StaticClass, TEXT("UNevarokMLTraceSensorComponent"), &Z_Registration_Info_UClass_UNevarokMLTraceSensorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLTraceSensorComponent), 1458023800U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_2817818480(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
