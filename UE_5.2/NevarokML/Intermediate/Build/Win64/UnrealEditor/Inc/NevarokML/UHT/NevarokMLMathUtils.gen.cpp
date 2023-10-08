// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Utils/NevarokMLMathUtils.h"
#include "NevarokML/Public/Types/NevarokMLIndex2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLMathUtils() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLMathUtils();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLMathUtils_NoRegister();
	NEVAROKML_API UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLIndex2D();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLMathUtils::execMultiply_Index2DInt)
	{
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_a);
		P_GET_PROPERTY(FIntProperty,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNevarokMLIndex2D*)Z_Param__Result=UNevarokMLMathUtils::Multiply_Index2DInt(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execAdd_Index2DIndex2D)
	{
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_a);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNevarokMLIndex2D*)Z_Param__Result=UNevarokMLMathUtils::Add_Index2DIndex2D(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execIndexPlusPlus)
	{
		P_GET_STRUCT_REF(FNevarokMLIndex2D,Z_Param_Out_current);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_step);
		P_GET_STRUCT_REF(FNevarokMLIndex2D,Z_Param_Out_index);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_x);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLMathUtils::IndexPlusPlus(Z_Param_Out_current,Z_Param_step,Z_Param_Out_index,Z_Param_Out_x,Z_Param_Out_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execRound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNevarokMLMathUtils::Round(Z_Param_value,Z_Param_multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execXYRandomVector)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UNevarokMLMathUtils::XYRandomVector(Z_Param_radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execIntToShortShort)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_a);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLMathUtils::IntToShortShort(Z_Param_value,Z_Param_Out_a,Z_Param_Out_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execBatchSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_envsCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_nSteps);
		P_GET_PROPERTY(FIntProperty,Z_Param_multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNevarokMLMathUtils::BatchSize(Z_Param_envsCount,Z_Param_nSteps,Z_Param_multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execGCD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_a);
		P_GET_PROPERTY(FIntProperty,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNevarokMLMathUtils::GCD(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execShortShortToInt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_a);
		P_GET_PROPERTY(FIntProperty,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNevarokMLMathUtils::ShortShortToInt(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execFloatToShort)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNevarokMLMathUtils::FloatToShort(Z_Param_value,Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execRoundInt64ToFVector)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UNevarokMLMathUtils::RoundInt64ToFVector(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execRoundFVectorToInt64)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UNevarokMLMathUtils::RoundFVectorToInt64(Z_Param_Out_vector,Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execRoundIntToFVector)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UNevarokMLMathUtils::RoundIntToFVector(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execRoundFVectorToInt)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNevarokMLMathUtils::RoundFVectorToInt(Z_Param_Out_vector,Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execRoundFVectorValuesToInt)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UNevarokMLMathUtils::RoundFVectorValuesToInt(Z_Param_Out_vector,Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execRoundFVectorValuesToInt16)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UNevarokMLMathUtils::RoundFVectorValuesToInt16(Z_Param_Out_vector,Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execRoundFVectorValuesToInt8)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UNevarokMLMathUtils::RoundFVectorValuesToInt8(Z_Param_Out_vector,Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execGetMaxUInt8)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UNevarokMLMathUtils::GetMaxUInt8();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execGetMaxInt8)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UNevarokMLMathUtils::GetMaxInt8();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execGetMaxInt16)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UNevarokMLMathUtils::GetMaxInt16();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execGetMaxInt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UNevarokMLMathUtils::GetMaxInt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execGetMaxInt64)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UNevarokMLMathUtils::GetMaxInt64();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execStackReset)
	{
		P_GET_TARRAY_REF(int64,Z_Param_Out_stack);
		P_GET_PROPERTY(FIntProperty,Z_Param_stackSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLMathUtils::StackReset(Z_Param_Out_stack,Z_Param_stackSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execStackPush)
	{
		P_GET_TARRAY_REF(int64,Z_Param_Out_stack);
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_stackSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLMathUtils::StackPush(Z_Param_Out_stack,Z_Param_value,Z_Param_stackSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execVecScale)
	{
		P_GET_TARRAY_REF(int64,Z_Param_Out_vec);
		P_GET_PROPERTY(FIntProperty,Z_Param_times);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLMathUtils::VecScale(Z_Param_Out_vec,Z_Param_times);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execVecSet)
	{
		P_GET_TARRAY_REF(int64,Z_Param_Out_vec);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLMathUtils::VecSet(Z_Param_Out_vec,Z_Param_index,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execVecAdd)
	{
		P_GET_TARRAY_REF(int64,Z_Param_Out_vec);
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLMathUtils::VecAdd(Z_Param_Out_vec,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execMinMaxAddVector2D)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_min);
		P_GET_TARRAY_REF(float,Z_Param_Out_max);
		P_GET_STRUCT(FVector2D,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLMathUtils::MinMaxAddVector2D(Z_Param_Out_min,Z_Param_Out_max,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execMinMaxAdd)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_min);
		P_GET_TARRAY_REF(float,Z_Param_Out_max);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLMathUtils::MinMaxAdd(Z_Param_Out_min,Z_Param_Out_max,Z_Param_minValue,Z_Param_maxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execMakeVec)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int64>*)Z_Param__Result=UNevarokMLMathUtils::MakeVec(Z_Param_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execMakeMinMax)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_min);
		P_GET_TARRAY_REF(float,Z_Param_Out_max);
		P_GET_PROPERTY(FIntProperty,Z_Param_num);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNevarokMLMathUtils::MakeMinMax(Z_Param_Out_min,Z_Param_Out_max,Z_Param_num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execGetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_GET_PROPERTY(FIntProperty,Z_Param_offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNevarokMLMathUtils::GetIndex(Z_Param_index,Z_Param_size,Z_Param_offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execFVectorClampToFloat16)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UNevarokMLMathUtils::FVectorClampToFloat16(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execInt64ToFVector)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UNevarokMLMathUtils::Int64ToFVector(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execFVectorToInt64)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UNevarokMLMathUtils::FVectorToInt64(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLMathUtils::execNSteps)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_steps);
		P_GET_PROPERTY(FIntProperty,Z_Param_envCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNevarokMLMathUtils::NSteps(Z_Param_steps,Z_Param_envCount);
		P_NATIVE_END;
	}
	void UNevarokMLMathUtils::StaticRegisterNativesUNevarokMLMathUtils()
	{
		UClass* Class = UNevarokMLMathUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add_Index2DIndex2D", &UNevarokMLMathUtils::execAdd_Index2DIndex2D },
			{ "BatchSize", &UNevarokMLMathUtils::execBatchSize },
			{ "FloatToShort", &UNevarokMLMathUtils::execFloatToShort },
			{ "FVectorClampToFloat16", &UNevarokMLMathUtils::execFVectorClampToFloat16 },
			{ "FVectorToInt64", &UNevarokMLMathUtils::execFVectorToInt64 },
			{ "GCD", &UNevarokMLMathUtils::execGCD },
			{ "GetIndex", &UNevarokMLMathUtils::execGetIndex },
			{ "GetMaxInt", &UNevarokMLMathUtils::execGetMaxInt },
			{ "GetMaxInt16", &UNevarokMLMathUtils::execGetMaxInt16 },
			{ "GetMaxInt64", &UNevarokMLMathUtils::execGetMaxInt64 },
			{ "GetMaxInt8", &UNevarokMLMathUtils::execGetMaxInt8 },
			{ "GetMaxUInt8", &UNevarokMLMathUtils::execGetMaxUInt8 },
			{ "IndexPlusPlus", &UNevarokMLMathUtils::execIndexPlusPlus },
			{ "Int64ToFVector", &UNevarokMLMathUtils::execInt64ToFVector },
			{ "IntToShortShort", &UNevarokMLMathUtils::execIntToShortShort },
			{ "MakeMinMax", &UNevarokMLMathUtils::execMakeMinMax },
			{ "MakeVec", &UNevarokMLMathUtils::execMakeVec },
			{ "MinMaxAdd", &UNevarokMLMathUtils::execMinMaxAdd },
			{ "MinMaxAddVector2D", &UNevarokMLMathUtils::execMinMaxAddVector2D },
			{ "Multiply_Index2DInt", &UNevarokMLMathUtils::execMultiply_Index2DInt },
			{ "NSteps", &UNevarokMLMathUtils::execNSteps },
			{ "Round", &UNevarokMLMathUtils::execRound },
			{ "RoundFVectorToInt", &UNevarokMLMathUtils::execRoundFVectorToInt },
			{ "RoundFVectorToInt64", &UNevarokMLMathUtils::execRoundFVectorToInt64 },
			{ "RoundFVectorValuesToInt", &UNevarokMLMathUtils::execRoundFVectorValuesToInt },
			{ "RoundFVectorValuesToInt16", &UNevarokMLMathUtils::execRoundFVectorValuesToInt16 },
			{ "RoundFVectorValuesToInt8", &UNevarokMLMathUtils::execRoundFVectorValuesToInt8 },
			{ "RoundInt64ToFVector", &UNevarokMLMathUtils::execRoundInt64ToFVector },
			{ "RoundIntToFVector", &UNevarokMLMathUtils::execRoundIntToFVector },
			{ "ShortShortToInt", &UNevarokMLMathUtils::execShortShortToInt },
			{ "StackPush", &UNevarokMLMathUtils::execStackPush },
			{ "StackReset", &UNevarokMLMathUtils::execStackReset },
			{ "VecAdd", &UNevarokMLMathUtils::execVecAdd },
			{ "VecScale", &UNevarokMLMathUtils::execVecScale },
			{ "VecSet", &UNevarokMLMathUtils::execVecSet },
			{ "XYRandomVector", &UNevarokMLMathUtils::execXYRandomVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics
	{
		struct NevarokMLMathUtils_eventAdd_Index2DIndex2D_Parms
		{
			FNevarokMLIndex2D a;
			FNevarokMLIndex2D b;
			FNevarokMLIndex2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_a;
		static const UECodeGen_Private::FStructPropertyParams NewProp_b;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventAdd_Index2DIndex2D_Parms, a), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventAdd_Index2DIndex2D_Parms, b), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventAdd_Index2DIndex2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::NewProp_b,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "CommutativeAssociativeBinaryOperator", "true" },
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "Index2D + Index2D" },
		{ "Keywords", "+ add plus" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "Add_Index2DIndex2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::NevarokMLMathUtils_eventAdd_Index2DIndex2D_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics
	{
		struct NevarokMLMathUtils_eventBatchSize_Parms
		{
			int32 envsCount;
			int32 nSteps;
			int32 multiplier;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_envsCount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_nSteps;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_multiplier;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::NewProp_envsCount = { "envsCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventBatchSize_Parms, envsCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::NewProp_nSteps = { "nSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventBatchSize_Parms, nSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventBatchSize_Parms, multiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventBatchSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::NewProp_envsCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::NewProp_nSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::NewProp_multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "BatchSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::NevarokMLMathUtils_eventBatchSize_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics
	{
		struct NevarokMLMathUtils_eventFloatToShort_Parms
		{
			float value;
			float scale;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventFloatToShort_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventFloatToShort_Parms, scale), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::NewProp_scale_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventFloatToShort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "CPP_Default_scale", "1.000000" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "FloatToShort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::NevarokMLMathUtils_eventFloatToShort_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics
	{
		struct NevarokMLMathUtils_eventFVectorClampToFloat16_Parms
		{
			FVector value;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventFVectorClampToFloat16_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::NewProp_value_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventFVectorClampToFloat16_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "FVectorClampToFloat16", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::NevarokMLMathUtils_eventFVectorClampToFloat16_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics
	{
		struct NevarokMLMathUtils_eventFVectorToInt64_Parms
		{
			FVector value;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventFVectorToInt64_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::NewProp_value_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventFVectorToInt64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "FVectorToInt64", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::NevarokMLMathUtils_eventFVectorToInt64_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics
	{
		struct NevarokMLMathUtils_eventGCD_Parms
		{
			int32 a;
			int32 b;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_a;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_b;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventGCD_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventGCD_Parms, b), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventGCD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::NewProp_b,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "GCD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::NevarokMLMathUtils_eventGCD_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_GCD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_GCD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics
	{
		struct NevarokMLMathUtils_eventGetIndex_Parms
		{
			int32 index;
			int32 size;
			int32 offset;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_offset;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventGetIndex_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventGetIndex_Parms, size), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventGetIndex_Parms, offset), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_offset_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventGetIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "GetIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::NevarokMLMathUtils_eventGetIndex_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt_Statics
	{
		struct NevarokMLMathUtils_eventGetMaxInt_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventGetMaxInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "GetMaxInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt_Statics::NevarokMLMathUtils_eventGetMaxInt_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16_Statics
	{
		struct NevarokMLMathUtils_eventGetMaxInt16_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventGetMaxInt16_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "GetMaxInt16", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16_Statics::NevarokMLMathUtils_eventGetMaxInt16_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64_Statics
	{
		struct NevarokMLMathUtils_eventGetMaxInt64_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventGetMaxInt64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "GetMaxInt64", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64_Statics::NevarokMLMathUtils_eventGetMaxInt64_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8_Statics
	{
		struct NevarokMLMathUtils_eventGetMaxInt8_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventGetMaxInt8_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "GetMaxInt8", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8_Statics::NevarokMLMathUtils_eventGetMaxInt8_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8_Statics
	{
		struct NevarokMLMathUtils_eventGetMaxUInt8_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventGetMaxUInt8_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "GetMaxUInt8", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8_Statics::NevarokMLMathUtils_eventGetMaxUInt8_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics
	{
		struct NevarokMLMathUtils_eventIndexPlusPlus_Parms
		{
			FNevarokMLIndex2D current;
			FNevarokMLIndex2D step;
			FNevarokMLIndex2D index;
			int32 x;
			int32 y;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_step_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_step;
		static const UECodeGen_Private::FStructPropertyParams NewProp_index;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NewProp_current = { "current", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventIndexPlusPlus_Parms, current), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NewProp_step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NewProp_step = { "step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventIndexPlusPlus_Parms, step), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NewProp_step_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NewProp_step_MetaData)) }; // 3166452073
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventIndexPlusPlus_Parms, index), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventIndexPlusPlus_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventIndexPlusPlus_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NewProp_current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NewProp_step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "IndexPlusPlus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::NevarokMLMathUtils_eventIndexPlusPlus_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics
	{
		struct NevarokMLMathUtils_eventInt64ToFVector_Parms
		{
			int64 value;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventInt64ToFVector_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventInt64ToFVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "Int64ToFVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics::NevarokMLMathUtils_eventInt64ToFVector_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics
	{
		struct NevarokMLMathUtils_eventIntToShortShort_Parms
		{
			int32 value;
			int32 a;
			int32 b;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_a;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_b;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventIntToShortShort_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventIntToShortShort_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventIntToShortShort_Parms, b), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::NewProp_b,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "IntToShortShort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::NevarokMLMathUtils_eventIntToShortShort_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics
	{
		struct NevarokMLMathUtils_eventMakeMinMax_Parms
		{
			TArray<float> min;
			TArray<float> max;
			int32 num;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_num_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_num;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NewProp_min_Inner = { "min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMakeMinMax_Parms, min), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NewProp_max_Inner = { "max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMakeMinMax_Parms, max), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NewProp_num_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMakeMinMax_Parms, num), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NewProp_num_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NewProp_num_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NewProp_min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NewProp_max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NewProp_num,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "MakeMinMax", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::NevarokMLMathUtils_eventMakeMinMax_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics
	{
		struct NevarokMLMathUtils_eventMakeVec_Parms
		{
			int32 size;
			TArray<int64> ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMakeVec_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMakeVec_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "MakeVec", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::NevarokMLMathUtils_eventMakeVec_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics
	{
		struct NevarokMLMathUtils_eventMinMaxAdd_Parms
		{
			TArray<float> min;
			TArray<float> max;
			float minValue;
			float maxValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_max;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::NewProp_min_Inner = { "min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMinMaxAdd_Parms, min), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::NewProp_max_Inner = { "max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMinMaxAdd_Parms, max), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::NewProp_minValue = { "minValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMinMaxAdd_Parms, minValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::NewProp_maxValue = { "maxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMinMaxAdd_Parms, maxValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::NewProp_min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::NewProp_max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::NewProp_minValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::NewProp_maxValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "MinMaxAdd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::NevarokMLMathUtils_eventMinMaxAdd_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics
	{
		struct NevarokMLMathUtils_eventMinMaxAddVector2D_Parms
		{
			TArray<float> min;
			TArray<float> max;
			FVector2D value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_max;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::NewProp_min_Inner = { "min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMinMaxAddVector2D_Parms, min), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::NewProp_max_Inner = { "max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMinMaxAddVector2D_Parms, max), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMinMaxAddVector2D_Parms, value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::NewProp_min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::NewProp_max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "MinMaxAddVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::NevarokMLMathUtils_eventMinMaxAddVector2D_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics
	{
		struct NevarokMLMathUtils_eventMultiply_Index2DInt_Parms
		{
			FNevarokMLIndex2D a;
			int32 b;
			FNevarokMLIndex2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_a;
		static const UECodeGen_Private::FIntPropertyParams NewProp_b;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMultiply_Index2DInt_Parms, a), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMultiply_Index2DInt_Parms, b), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventMultiply_Index2DInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::NewProp_b,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "DisplayName", "Index2D * int" },
		{ "Keywords", "* multiply" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "Multiply_Index2DInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::NevarokMLMathUtils_eventMultiply_Index2DInt_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics
	{
		struct NevarokMLMathUtils_eventNSteps_Parms
		{
			int32 steps;
			int32 envCount;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_steps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_steps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_envCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_envCount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::NewProp_steps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::NewProp_steps = { "steps", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventNSteps_Parms, steps), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::NewProp_steps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::NewProp_steps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::NewProp_envCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::NewProp_envCount = { "envCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventNSteps_Parms, envCount), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::NewProp_envCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::NewProp_envCount_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventNSteps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::NewProp_steps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::NewProp_envCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "NSteps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::NevarokMLMathUtils_eventNSteps_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_NSteps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_NSteps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics
	{
		struct NevarokMLMathUtils_eventRound_Parms
		{
			float value;
			int32 multiplier;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_multiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRound_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRound_Parms, multiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::NewProp_multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "CPP_Default_multiplier", "100" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "Round", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::NevarokMLMathUtils_eventRound_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_Round()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_Round_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics
	{
		struct NevarokMLMathUtils_eventRoundFVectorToInt_Parms
		{
			FVector vector;
			float scale;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vector;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::NewProp_vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorToInt_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::NewProp_vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::NewProp_vector_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorToInt_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorToInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::NewProp_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "RoundFVectorToInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::NevarokMLMathUtils_eventRoundFVectorToInt_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics
	{
		struct NevarokMLMathUtils_eventRoundFVectorToInt64_Parms
		{
			FVector vector;
			float scale;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vector;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::NewProp_vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorToInt64_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::NewProp_vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::NewProp_vector_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorToInt64_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorToInt64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::NewProp_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "RoundFVectorToInt64", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::NevarokMLMathUtils_eventRoundFVectorToInt64_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics
	{
		struct NevarokMLMathUtils_eventRoundFVectorValuesToInt_Parms
		{
			FVector vector;
			float scale;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vector;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::NewProp_vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorValuesToInt_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::NewProp_vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::NewProp_vector_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorValuesToInt_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorValuesToInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::NewProp_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "RoundFVectorValuesToInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::NevarokMLMathUtils_eventRoundFVectorValuesToInt_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics
	{
		struct NevarokMLMathUtils_eventRoundFVectorValuesToInt16_Parms
		{
			FVector vector;
			float scale;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::NewProp_vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorValuesToInt16_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::NewProp_vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::NewProp_vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorValuesToInt16_Parms, scale), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::NewProp_scale_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorValuesToInt16_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::NewProp_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "RoundFVectorValuesToInt16", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::NevarokMLMathUtils_eventRoundFVectorValuesToInt16_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics
	{
		struct NevarokMLMathUtils_eventRoundFVectorValuesToInt8_Parms
		{
			FVector vector;
			float scale;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::NewProp_vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorValuesToInt8_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::NewProp_vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::NewProp_vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorValuesToInt8_Parms, scale), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::NewProp_scale_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundFVectorValuesToInt8_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::NewProp_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "RoundFVectorValuesToInt8", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::NevarokMLMathUtils_eventRoundFVectorValuesToInt8_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics
	{
		struct NevarokMLMathUtils_eventRoundInt64ToFVector_Parms
		{
			int64 value;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundInt64ToFVector_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundInt64ToFVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "RoundInt64ToFVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics::NevarokMLMathUtils_eventRoundInt64ToFVector_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics
	{
		struct NevarokMLMathUtils_eventRoundIntToFVector_Parms
		{
			int32 value;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundIntToFVector_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventRoundIntToFVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "RoundIntToFVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics::NevarokMLMathUtils_eventRoundIntToFVector_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics
	{
		struct NevarokMLMathUtils_eventShortShortToInt_Parms
		{
			int32 a;
			int32 b;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_a;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_b;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventShortShortToInt_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventShortShortToInt_Parms, b), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventShortShortToInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::NewProp_b,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "ShortShortToInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::NevarokMLMathUtils_eventShortShortToInt_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics
	{
		struct NevarokMLMathUtils_eventStackPush_Parms
		{
			TArray<int64> stack;
			int64 value;
			int32 stackSize;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_stack_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_stack;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stackSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::NewProp_stack_Inner = { "stack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventStackPush_Parms, stack), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventStackPush_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::NewProp_stackSize = { "stackSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventStackPush_Parms, stackSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::NewProp_stack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::NewProp_stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::NewProp_stackSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "StackPush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::NevarokMLMathUtils_eventStackPush_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_StackPush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_StackPush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics
	{
		struct NevarokMLMathUtils_eventStackReset_Parms
		{
			TArray<int64> stack;
			int32 stackSize;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_stack_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_stack;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stackSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::NewProp_stack_Inner = { "stack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventStackReset_Parms, stack), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::NewProp_stackSize = { "stackSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventStackReset_Parms, stackSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::NewProp_stack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::NewProp_stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::NewProp_stackSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "StackReset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::NevarokMLMathUtils_eventStackReset_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_StackReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_StackReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics
	{
		struct NevarokMLMathUtils_eventVecAdd_Parms
		{
			TArray<int64> vec;
			int64 value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_vec_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vec;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::NewProp_vec_Inner = { "vec", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::NewProp_vec = { "vec", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventVecAdd_Parms, vec), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventVecAdd_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::NewProp_vec_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::NewProp_vec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "VecAdd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::NevarokMLMathUtils_eventVecAdd_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics
	{
		struct NevarokMLMathUtils_eventVecScale_Parms
		{
			TArray<int64> vec;
			int32 times;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_vec_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vec;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_times;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::NewProp_vec_Inner = { "vec", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::NewProp_vec = { "vec", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventVecScale_Parms, vec), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::NewProp_times = { "times", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventVecScale_Parms, times), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::NewProp_vec_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::NewProp_vec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::NewProp_times,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "VecScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::NevarokMLMathUtils_eventVecScale_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_VecScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_VecScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics
	{
		struct NevarokMLMathUtils_eventVecSet_Parms
		{
			TArray<int64> vec;
			int32 index;
			int64 value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_vec_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vec;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::NewProp_vec_Inner = { "vec", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::NewProp_vec = { "vec", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventVecSet_Parms, vec), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventVecSet_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventVecSet_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::NewProp_vec_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::NewProp_vec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "VecSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::NevarokMLMathUtils_eventVecSet_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_VecSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_VecSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics
	{
		struct NevarokMLMathUtils_eventXYRandomVector_Parms
		{
			float radius;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventXYRandomVector_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLMathUtils_eventXYRandomVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|MathUtils" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLMathUtils, nullptr, "XYRandomVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics::NevarokMLMathUtils_eventXYRandomVector_Parms), Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLMathUtils);
	UClass* Z_Construct_UClass_UNevarokMLMathUtils_NoRegister()
	{
		return UNevarokMLMathUtils::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLMathUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLMathUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLMathUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_Add_Index2DIndex2D, "Add_Index2DIndex2D" }, // 1604639283
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_BatchSize, "BatchSize" }, // 1497978200
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_FloatToShort, "FloatToShort" }, // 892483254
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_FVectorClampToFloat16, "FVectorClampToFloat16" }, // 1569241526
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_FVectorToInt64, "FVectorToInt64" }, // 831365976
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_GCD, "GCD" }, // 2150214072
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_GetIndex, "GetIndex" }, // 1374234617
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt, "GetMaxInt" }, // 2434965278
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt16, "GetMaxInt16" }, // 668889236
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt64, "GetMaxInt64" }, // 3659951899
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxInt8, "GetMaxInt8" }, // 2415202542
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_GetMaxUInt8, "GetMaxUInt8" }, // 1506769295
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_IndexPlusPlus, "IndexPlusPlus" }, // 1402819916
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_Int64ToFVector, "Int64ToFVector" }, // 1168129029
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_IntToShortShort, "IntToShortShort" }, // 3074889474
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_MakeMinMax, "MakeMinMax" }, // 1494541494
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_MakeVec, "MakeVec" }, // 2556357970
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAdd, "MinMaxAdd" }, // 3976244151
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_MinMaxAddVector2D, "MinMaxAddVector2D" }, // 3280856108
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_Multiply_Index2DInt, "Multiply_Index2DInt" }, // 3905389094
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_NSteps, "NSteps" }, // 959536285
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_Round, "Round" }, // 3587237487
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt, "RoundFVectorToInt" }, // 2097939806
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorToInt64, "RoundFVectorToInt64" }, // 1453598748
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt, "RoundFVectorValuesToInt" }, // 3168536984
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt16, "RoundFVectorValuesToInt16" }, // 3639203360
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_RoundFVectorValuesToInt8, "RoundFVectorValuesToInt8" }, // 1446766751
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_RoundInt64ToFVector, "RoundInt64ToFVector" }, // 3869571583
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_RoundIntToFVector, "RoundIntToFVector" }, // 2933580026
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_ShortShortToInt, "ShortShortToInt" }, // 460282527
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_StackPush, "StackPush" }, // 2012575577
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_StackReset, "StackReset" }, // 514349032
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_VecAdd, "VecAdd" }, // 452079394
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_VecScale, "VecScale" }, // 374555628
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_VecSet, "VecSet" }, // 1181592182
		{ &Z_Construct_UFunction_UNevarokMLMathUtils_XYRandomVector, "XYRandomVector" }, // 1642553999
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLMathUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/NevarokMLMathUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/NevarokMLMathUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLMathUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLMathUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLMathUtils_Statics::ClassParams = {
		&UNevarokMLMathUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLMathUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLMathUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLMathUtils()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLMathUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLMathUtils.OuterSingleton, Z_Construct_UClass_UNevarokMLMathUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLMathUtils.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLMathUtils>()
	{
		return UNevarokMLMathUtils::StaticClass();
	}
	UNevarokMLMathUtils::UNevarokMLMathUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLMathUtils);
	UNevarokMLMathUtils::~UNevarokMLMathUtils() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLMathUtils, UNevarokMLMathUtils::StaticClass, TEXT("UNevarokMLMathUtils"), &Z_Registration_Info_UClass_UNevarokMLMathUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLMathUtils), 4166282250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_2448872818(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
