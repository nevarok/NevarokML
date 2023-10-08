// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Utils/NevarokMLRaycastUtils.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLRaycastUtils() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLRaycastUtils();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLRaycastUtils_NoRegister();
	NEVAROKML_API UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLRaycastData();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NevarokMLRaycastData;
class UScriptStruct* FNevarokMLRaycastData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NevarokMLRaycastData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NevarokMLRaycastData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNevarokMLRaycastData, (UObject*)Z_Construct_UPackage__Script_NevarokML(), TEXT("NevarokMLRaycastData"));
	}
	return Z_Registration_Info_UScriptStruct_NevarokMLRaycastData.OuterSingleton;
}
template<> NEVAROKML_API UScriptStruct* StaticStruct<FNevarokMLRaycastData>()
{
	return FNevarokMLRaycastData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsHit_MetaData[];
#endif
		static void NewProp_IsHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRaycastUtils.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNevarokMLRaycastData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_Hit_MetaData[] = {
		{ "Category", "NevarokML|RaycastData" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRaycastUtils.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNevarokMLRaycastData, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_Hit_MetaData)) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitDirection_MetaData[] = {
		{ "Category", "NevarokML|RaycastData" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRaycastUtils.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitDirection = { "HitDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNevarokMLRaycastData, HitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitNormal_MetaData[] = {
		{ "Category", "NevarokML|RaycastData" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRaycastUtils.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNevarokMLRaycastData, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitLocation_MetaData[] = {
		{ "Category", "NevarokML|RaycastData" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRaycastUtils.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNevarokMLRaycastData, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitDistance_MetaData[] = {
		{ "Category", "NevarokML|RaycastData" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRaycastUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitDistance = { "HitDistance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNevarokMLRaycastData, HitDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_IsHit_MetaData[] = {
		{ "Category", "NevarokML|RaycastData" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRaycastUtils.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_IsHit_SetBit(void* Obj)
	{
		((FNevarokMLRaycastData*)Obj)->IsHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_IsHit = { "IsHit", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNevarokMLRaycastData), &Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_IsHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_IsHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_IsHit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_HitDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewProp_IsHit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
		nullptr,
		&NewStructOps,
		"NevarokMLRaycastData",
		sizeof(FNevarokMLRaycastData),
		alignof(FNevarokMLRaycastData),
		Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLRaycastData()
	{
		if (!Z_Registration_Info_UScriptStruct_NevarokMLRaycastData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NevarokMLRaycastData.InnerSingleton, Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NevarokMLRaycastData.InnerSingleton;
	}
	DEFINE_FUNCTION(UNevarokMLRaycastUtils::execRaycastFromTo)
	{
		P_GET_OBJECT(AActor,Z_Param_owner);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_fromStartLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_fromEndLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_toStartLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_toEndLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_PROPERTY(FByteProperty,Z_Param_channel);
		P_GET_UBOOL(Z_Param_debug);
		P_GET_STRUCT(FLinearColor,Z_Param_debugTraceColor);
		P_GET_STRUCT(FLinearColor,Z_Param_debugTraceHitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_debugDrawTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FNevarokMLRaycastData>*)Z_Param__Result=UNevarokMLRaycastUtils::RaycastFromTo(Z_Param_owner,Z_Param_Out_fromStartLocation,Z_Param_Out_fromEndLocation,Z_Param_Out_toStartLocation,Z_Param_Out_toEndLocation,Z_Param_count,ETraceTypeQuery(Z_Param_channel),Z_Param_debug,Z_Param_debugTraceColor,Z_Param_debugTraceHitColor,Z_Param_debugDrawTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLRaycastUtils::execGetAngleBetweenVectors)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_aNormal);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNevarokMLRaycastUtils::GetAngleBetweenVectors(Z_Param_Out_aNormal,Z_Param_Out_bNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLRaycastUtils::execRaycastVRange)
	{
		P_GET_OBJECT(AActor,Z_Param_owner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_angleRange);
		P_GET_PROPERTY(FIntProperty,Z_Param_num);
		P_GET_PROPERTY(FFloatProperty,Z_Param_length);
		P_GET_PROPERTY(FByteProperty,Z_Param_channel);
		P_GET_UBOOL(Z_Param_debug);
		P_GET_STRUCT(FLinearColor,Z_Param_debugTraceColor);
		P_GET_STRUCT(FLinearColor,Z_Param_debugTraceHitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_debugDrawTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FNevarokMLRaycastData>*)Z_Param__Result=UNevarokMLRaycastUtils::RaycastVRange(Z_Param_owner,Z_Param_angleRange,Z_Param_num,Z_Param_length,ETraceTypeQuery(Z_Param_channel),Z_Param_debug,Z_Param_debugTraceColor,Z_Param_debugTraceHitColor,Z_Param_debugDrawTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLRaycastUtils::execRaycastHRange)
	{
		P_GET_OBJECT(AActor,Z_Param_owner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_angleRange);
		P_GET_PROPERTY(FIntProperty,Z_Param_num);
		P_GET_PROPERTY(FFloatProperty,Z_Param_length);
		P_GET_PROPERTY(FByteProperty,Z_Param_channel);
		P_GET_UBOOL(Z_Param_debug);
		P_GET_STRUCT(FLinearColor,Z_Param_debugTraceColor);
		P_GET_STRUCT(FLinearColor,Z_Param_debugTraceHitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_debugDrawTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FNevarokMLRaycastData>*)Z_Param__Result=UNevarokMLRaycastUtils::RaycastHRange(Z_Param_owner,Z_Param_angleRange,Z_Param_num,Z_Param_length,ETraceTypeQuery(Z_Param_channel),Z_Param_debug,Z_Param_debugTraceColor,Z_Param_debugTraceHitColor,Z_Param_debugDrawTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLRaycastUtils::execRaycastRange)
	{
		P_GET_OBJECT(AActor,Z_Param_owner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_vAngleRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_hAngleRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_vAngleOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_hAngleOffset);
		P_GET_PROPERTY(FIntProperty,Z_Param_vNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_hNum);
		P_GET_PROPERTY(FFloatProperty,Z_Param_length);
		P_GET_PROPERTY(FByteProperty,Z_Param_channel);
		P_GET_UBOOL(Z_Param_debug);
		P_GET_STRUCT(FLinearColor,Z_Param_debugTraceColor);
		P_GET_STRUCT(FLinearColor,Z_Param_debugTraceHitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_debugDrawTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FNevarokMLRaycastData>*)Z_Param__Result=UNevarokMLRaycastUtils::RaycastRange(Z_Param_owner,Z_Param_vAngleRange,Z_Param_hAngleRange,Z_Param_vAngleOffset,Z_Param_hAngleOffset,Z_Param_vNum,Z_Param_hNum,Z_Param_length,ETraceTypeQuery(Z_Param_channel),Z_Param_debug,Z_Param_debugTraceColor,Z_Param_debugTraceHitColor,Z_Param_debugDrawTime);
		P_NATIVE_END;
	}
	void UNevarokMLRaycastUtils::StaticRegisterNativesUNevarokMLRaycastUtils()
	{
		UClass* Class = UNevarokMLRaycastUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAngleBetweenVectors", &UNevarokMLRaycastUtils::execGetAngleBetweenVectors },
			{ "RaycastFromTo", &UNevarokMLRaycastUtils::execRaycastFromTo },
			{ "RaycastHRange", &UNevarokMLRaycastUtils::execRaycastHRange },
			{ "RaycastRange", &UNevarokMLRaycastUtils::execRaycastRange },
			{ "RaycastVRange", &UNevarokMLRaycastUtils::execRaycastVRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics
	{
		struct NevarokMLRaycastUtils_eventGetAngleBetweenVectors_Parms
		{
			FVector aNormal;
			FVector bNormal;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_aNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_bNormal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::NewProp_aNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::NewProp_aNormal = { "aNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventGetAngleBetweenVectors_Parms, aNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::NewProp_aNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::NewProp_aNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::NewProp_bNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::NewProp_bNormal = { "bNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventGetAngleBetweenVectors_Parms, bNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::NewProp_bNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::NewProp_bNormal_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventGetAngleBetweenVectors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::NewProp_aNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::NewProp_bNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|RaycastUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRaycastUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLRaycastUtils, nullptr, "GetAngleBetweenVectors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::NevarokMLRaycastUtils_eventGetAngleBetweenVectors_Parms), Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics
	{
		struct NevarokMLRaycastUtils_eventRaycastFromTo_Parms
		{
			AActor* owner;
			FVector fromStartLocation;
			FVector fromEndLocation;
			FVector toStartLocation;
			FVector toEndLocation;
			int32 count;
			TEnumAsByte<ETraceTypeQuery> channel;
			bool debug;
			FLinearColor debugTraceColor;
			FLinearColor debugTraceHitColor;
			float debugDrawTime;
			TArray<FNevarokMLRaycastData> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fromStartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_fromStartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fromEndLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_fromEndLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_toStartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_toStartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_toEndLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_toEndLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_count_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_channel;
		static void NewProp_debug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugTraceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugTraceColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugTraceHitColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugTraceHitColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugDrawTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_debugDrawTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastFromTo_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_fromStartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_fromStartLocation = { "fromStartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastFromTo_Parms, fromStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_fromStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_fromStartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_fromEndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_fromEndLocation = { "fromEndLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastFromTo_Parms, fromEndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_fromEndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_fromEndLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_toStartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_toStartLocation = { "toStartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastFromTo_Parms, toStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_toStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_toStartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_toEndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_toEndLocation = { "toEndLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastFromTo_Parms, toEndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_toEndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_toEndLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastFromTo_Parms, count), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_channel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastFromTo_Parms, channel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_channel_MetaData)) }; // 2906040657
	void Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debug_SetBit(void* Obj)
	{
		((NevarokMLRaycastUtils_eventRaycastFromTo_Parms*)Obj)->debug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debug = { "debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLRaycastUtils_eventRaycastFromTo_Parms), &Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debug_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugTraceColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugTraceColor = { "debugTraceColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastFromTo_Parms, debugTraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugTraceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugTraceColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugTraceHitColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugTraceHitColor = { "debugTraceHitColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastFromTo_Parms, debugTraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugTraceHitColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugTraceHitColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugDrawTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugDrawTime = { "debugDrawTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastFromTo_Parms, debugDrawTime), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugDrawTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugDrawTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNevarokMLRaycastData, METADATA_PARAMS(nullptr, 0) }; // 402434738
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastFromTo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 402434738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_fromStartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_fromEndLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_toStartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_toEndLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugTraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugTraceHitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_debugDrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|RaycastUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRaycastUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLRaycastUtils, nullptr, "RaycastFromTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::NevarokMLRaycastUtils_eventRaycastFromTo_Parms), Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics
	{
		struct NevarokMLRaycastUtils_eventRaycastHRange_Parms
		{
			AActor* owner;
			float angleRange;
			int32 num;
			float length;
			TEnumAsByte<ETraceTypeQuery> channel;
			bool debug;
			FLinearColor debugTraceColor;
			FLinearColor debugTraceHitColor;
			float debugDrawTime;
			TArray<FNevarokMLRaycastData> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_angleRange;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_num;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_length;
		static const UECodeGen_Private::FBytePropertyParams NewProp_channel;
		static void NewProp_debug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_debug;
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugTraceColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugTraceHitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_debugDrawTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastHRange_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_angleRange = { "angleRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastHRange_Parms, angleRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastHRange_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastHRange_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastHRange_Parms, channel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 2906040657
	void Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_debug_SetBit(void* Obj)
	{
		((NevarokMLRaycastUtils_eventRaycastHRange_Parms*)Obj)->debug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_debug = { "debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLRaycastUtils_eventRaycastHRange_Parms), &Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_debug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_debugTraceColor = { "debugTraceColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastHRange_Parms, debugTraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_debugTraceHitColor = { "debugTraceHitColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastHRange_Parms, debugTraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_debugDrawTime = { "debugDrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastHRange_Parms, debugDrawTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNevarokMLRaycastData, METADATA_PARAMS(nullptr, 0) }; // 402434738
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastHRange_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 402434738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_angleRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_debugTraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_debugTraceHitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_debugDrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|RaycastUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRaycastUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLRaycastUtils, nullptr, "RaycastHRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::NevarokMLRaycastUtils_eventRaycastHRange_Parms), Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics
	{
		struct NevarokMLRaycastUtils_eventRaycastRange_Parms
		{
			AActor* owner;
			float vAngleRange;
			float hAngleRange;
			float vAngleOffset;
			float hAngleOffset;
			int32 vNum;
			int32 hNum;
			float length;
			TEnumAsByte<ETraceTypeQuery> channel;
			bool debug;
			FLinearColor debugTraceColor;
			FLinearColor debugTraceHitColor;
			float debugDrawTime;
			TArray<FNevarokMLRaycastData> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_vAngleRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hAngleRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_vAngleOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hAngleOffset;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_vNum;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_hNum;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_length;
		static const UECodeGen_Private::FBytePropertyParams NewProp_channel;
		static void NewProp_debug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_debug;
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugTraceColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugTraceHitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_debugDrawTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastRange_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_vAngleRange = { "vAngleRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastRange_Parms, vAngleRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_hAngleRange = { "hAngleRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastRange_Parms, hAngleRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_vAngleOffset = { "vAngleOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastRange_Parms, vAngleOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_hAngleOffset = { "hAngleOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastRange_Parms, hAngleOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_vNum = { "vNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastRange_Parms, vNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_hNum = { "hNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastRange_Parms, hNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastRange_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastRange_Parms, channel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 2906040657
	void Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_debug_SetBit(void* Obj)
	{
		((NevarokMLRaycastUtils_eventRaycastRange_Parms*)Obj)->debug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_debug = { "debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLRaycastUtils_eventRaycastRange_Parms), &Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_debug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_debugTraceColor = { "debugTraceColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastRange_Parms, debugTraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_debugTraceHitColor = { "debugTraceHitColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastRange_Parms, debugTraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_debugDrawTime = { "debugDrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastRange_Parms, debugDrawTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNevarokMLRaycastData, METADATA_PARAMS(nullptr, 0) }; // 402434738
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastRange_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 402434738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_vAngleRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_hAngleRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_vAngleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_hAngleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_vNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_hNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_debugTraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_debugTraceHitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_debugDrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|RaycastUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRaycastUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLRaycastUtils, nullptr, "RaycastRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::NevarokMLRaycastUtils_eventRaycastRange_Parms), Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics
	{
		struct NevarokMLRaycastUtils_eventRaycastVRange_Parms
		{
			AActor* owner;
			float angleRange;
			int32 num;
			float length;
			TEnumAsByte<ETraceTypeQuery> channel;
			bool debug;
			FLinearColor debugTraceColor;
			FLinearColor debugTraceHitColor;
			float debugDrawTime;
			TArray<FNevarokMLRaycastData> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_angleRange;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_num;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_length;
		static const UECodeGen_Private::FBytePropertyParams NewProp_channel;
		static void NewProp_debug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_debug;
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugTraceColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugTraceHitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_debugDrawTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastVRange_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_angleRange = { "angleRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastVRange_Parms, angleRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastVRange_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastVRange_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastVRange_Parms, channel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 2906040657
	void Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_debug_SetBit(void* Obj)
	{
		((NevarokMLRaycastUtils_eventRaycastVRange_Parms*)Obj)->debug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_debug = { "debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLRaycastUtils_eventRaycastVRange_Parms), &Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_debug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_debugTraceColor = { "debugTraceColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastVRange_Parms, debugTraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_debugTraceHitColor = { "debugTraceHitColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastVRange_Parms, debugTraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_debugDrawTime = { "debugDrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastVRange_Parms, debugDrawTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNevarokMLRaycastData, METADATA_PARAMS(nullptr, 0) }; // 402434738
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLRaycastUtils_eventRaycastVRange_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 402434738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_angleRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_debugTraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_debugTraceHitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_debugDrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|RaycastUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRaycastUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLRaycastUtils, nullptr, "RaycastVRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::NevarokMLRaycastUtils_eventRaycastVRange_Parms), Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLRaycastUtils);
	UClass* Z_Construct_UClass_UNevarokMLRaycastUtils_NoRegister()
	{
		return UNevarokMLRaycastUtils::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLRaycastUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLRaycastUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLRaycastUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLRaycastUtils_GetAngleBetweenVectors, "GetAngleBetweenVectors" }, // 208851604
		{ &Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastFromTo, "RaycastFromTo" }, // 1287503480
		{ &Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastHRange, "RaycastHRange" }, // 2538272842
		{ &Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastRange, "RaycastRange" }, // 1127468389
		{ &Z_Construct_UFunction_UNevarokMLRaycastUtils_RaycastVRange, "RaycastVRange" }, // 3763895791
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLRaycastUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/NevarokMLRaycastUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLRaycastUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLRaycastUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLRaycastUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLRaycastUtils_Statics::ClassParams = {
		&UNevarokMLRaycastUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLRaycastUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLRaycastUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLRaycastUtils()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLRaycastUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLRaycastUtils.OuterSingleton, Z_Construct_UClass_UNevarokMLRaycastUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLRaycastUtils.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLRaycastUtils>()
	{
		return UNevarokMLRaycastUtils::StaticClass();
	}
	UNevarokMLRaycastUtils::UNevarokMLRaycastUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLRaycastUtils);
	UNevarokMLRaycastUtils::~UNevarokMLRaycastUtils() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_Statics::ScriptStructInfo[] = {
		{ FNevarokMLRaycastData::StaticStruct, Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics::NewStructOps, TEXT("NevarokMLRaycastData"), &Z_Registration_Info_UScriptStruct_NevarokMLRaycastData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNevarokMLRaycastData), 402434738U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLRaycastUtils, UNevarokMLRaycastUtils::StaticClass, TEXT("UNevarokMLRaycastUtils"), &Z_Registration_Info_UClass_UNevarokMLRaycastUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLRaycastUtils), 1286984354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_2914045188(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
