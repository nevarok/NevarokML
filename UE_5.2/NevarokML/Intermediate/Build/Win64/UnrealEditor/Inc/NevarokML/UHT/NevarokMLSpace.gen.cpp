// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Spaces/NevarokMLSpace.h"
#include "NevarokML/Public/Types/NevarokMLIndex2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLSpace() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSpace();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSpace_NoRegister();
	NEVAROKML_API UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLSpaceEnum();
	NEVAROKML_API UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLIndex2D();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENevarokMLSpaceEnum;
	static UEnum* ENevarokMLSpaceEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENevarokMLSpaceEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENevarokMLSpaceEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NevarokML_ENevarokMLSpaceEnum, (UObject*)Z_Construct_UPackage__Script_NevarokML(), TEXT("ENevarokMLSpaceEnum"));
		}
		return Z_Registration_Info_UEnum_ENevarokMLSpaceEnum.OuterSingleton;
	}
	template<> NEVAROKML_API UEnum* StaticEnum<ENevarokMLSpaceEnum>()
	{
		return ENevarokMLSpaceEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_NevarokML_ENevarokMLSpaceEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NevarokML_ENevarokMLSpaceEnum_Statics::Enumerators[] = {
		{ "ENevarokMLSpaceEnum::DISCRETE", (int64)ENevarokMLSpaceEnum::DISCRETE },
		{ "ENevarokMLSpaceEnum::BOX", (int64)ENevarokMLSpaceEnum::BOX },
		{ "ENevarokMLSpaceEnum::MULTI_DISCRETE", (int64)ENevarokMLSpaceEnum::MULTI_DISCRETE },
		{ "ENevarokMLSpaceEnum::MULTI_BINARY", (int64)ENevarokMLSpaceEnum::MULTI_BINARY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NevarokML_ENevarokMLSpaceEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BOX.DisplayName", "BOX" },
		{ "BOX.Name", "ENevarokMLSpaceEnum::BOX" },
		{ "DISCRETE.DisplayName", "DISCRETE" },
		{ "DISCRETE.Name", "ENevarokMLSpaceEnum::DISCRETE" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
		{ "MULTI_BINARY.DisplayName", "MULTI_BINARY" },
		{ "MULTI_BINARY.Name", "ENevarokMLSpaceEnum::MULTI_BINARY" },
		{ "MULTI_DISCRETE.DisplayName", "MULTI_DISCRETE" },
		{ "MULTI_DISCRETE.Name", "ENevarokMLSpaceEnum::MULTI_DISCRETE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NevarokML_ENevarokMLSpaceEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NevarokML,
		nullptr,
		"ENevarokMLSpaceEnum",
		"ENevarokMLSpaceEnum",
		Z_Construct_UEnum_NevarokML_ENevarokMLSpaceEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NevarokML_ENevarokMLSpaceEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NevarokML_ENevarokMLSpaceEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NevarokML_ENevarokMLSpaceEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NevarokML_ENevarokMLSpaceEnum()
	{
		if (!Z_Registration_Info_UEnum_ENevarokMLSpaceEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENevarokMLSpaceEnum.InnerSingleton, Z_Construct_UEnum_NevarokML_ENevarokMLSpaceEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENevarokMLSpaceEnum.InnerSingleton;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ENevarokMLSpaceEnum*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execToBoxDYStack)
	{
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_size);
		P_GET_TARRAY_REF(float,Z_Param_Out_min);
		P_GET_TARRAY_REF(float,Z_Param_Out_max);
		P_GET_PROPERTY(FIntProperty,Z_Param_stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToBoxDYStack(Z_Param_size,Z_Param_Out_min,Z_Param_Out_max,Z_Param_stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execToBoxDXStack)
	{
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_size);
		P_GET_TARRAY_REF(float,Z_Param_Out_min);
		P_GET_TARRAY_REF(float,Z_Param_Out_max);
		P_GET_PROPERTY(FIntProperty,Z_Param_stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToBoxDXStack(Z_Param_size,Z_Param_Out_min,Z_Param_Out_max,Z_Param_stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execToContinuousStack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_GET_TARRAY_REF(float,Z_Param_Out_min);
		P_GET_TARRAY_REF(float,Z_Param_Out_max);
		P_GET_PROPERTY(FIntProperty,Z_Param_stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToContinuousStack(Z_Param_size,Z_Param_Out_min,Z_Param_Out_max,Z_Param_stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execToMultiBinaryStack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_GET_PROPERTY(FIntProperty,Z_Param_stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToMultiBinaryStack(Z_Param_size,Z_Param_stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execToMultiDiscreteStack)
	{
		P_GET_TARRAY_REF(int64,Z_Param_Out_vec);
		P_GET_PROPERTY(FIntProperty,Z_Param_stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToMultiDiscreteStack(Z_Param_Out_vec,Z_Param_stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execToBox)
	{
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_size);
		P_GET_TARRAY_REF(float,Z_Param_Out_min);
		P_GET_TARRAY_REF(float,Z_Param_Out_max);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToBox(Z_Param_size,Z_Param_Out_min,Z_Param_Out_max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execToContinuous)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_GET_TARRAY_REF(float,Z_Param_Out_min);
		P_GET_TARRAY_REF(float,Z_Param_Out_max);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToContinuous(Z_Param_size,Z_Param_Out_min,Z_Param_Out_max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execToMultiBinary)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToMultiBinary(Z_Param_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execToMultiDiscrete)
	{
		P_GET_TARRAY_REF(int64,Z_Param_Out_vec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToMultiDiscrete(Z_Param_Out_vec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execToDiscrete)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToDiscrete(Z_Param_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execBoxDYStack)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_size);
		P_GET_TARRAY_REF(float,Z_Param_Out_min);
		P_GET_TARRAY_REF(float,Z_Param_Out_max);
		P_GET_PROPERTY(FIntProperty,Z_Param_stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSpace**)Z_Param__Result=UNevarokMLSpace::BoxDYStack(Z_Param_owner,Z_Param_size,Z_Param_Out_min,Z_Param_Out_max,Z_Param_stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execBoxDXStack)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_size);
		P_GET_TARRAY_REF(float,Z_Param_Out_min);
		P_GET_TARRAY_REF(float,Z_Param_Out_max);
		P_GET_PROPERTY(FIntProperty,Z_Param_stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSpace**)Z_Param__Result=UNevarokMLSpace::BoxDXStack(Z_Param_owner,Z_Param_size,Z_Param_Out_min,Z_Param_Out_max,Z_Param_stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execContinuousStack)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_GET_TARRAY_REF(float,Z_Param_Out_min);
		P_GET_TARRAY_REF(float,Z_Param_Out_max);
		P_GET_PROPERTY(FIntProperty,Z_Param_stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSpace**)Z_Param__Result=UNevarokMLSpace::ContinuousStack(Z_Param_owner,Z_Param_size,Z_Param_Out_min,Z_Param_Out_max,Z_Param_stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execMultiBinaryStack)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_GET_PROPERTY(FIntProperty,Z_Param_stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSpace**)Z_Param__Result=UNevarokMLSpace::MultiBinaryStack(Z_Param_owner,Z_Param_size,Z_Param_stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execMultiDiscreteStack)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_TARRAY_REF(int64,Z_Param_Out_vec);
		P_GET_PROPERTY(FIntProperty,Z_Param_stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSpace**)Z_Param__Result=UNevarokMLSpace::MultiDiscreteStack(Z_Param_owner,Z_Param_Out_vec,Z_Param_stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execBox)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_STRUCT(FNevarokMLIndex2D,Z_Param_size);
		P_GET_TARRAY_REF(float,Z_Param_Out_min);
		P_GET_TARRAY_REF(float,Z_Param_Out_max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSpace**)Z_Param__Result=UNevarokMLSpace::Box(Z_Param_owner,Z_Param_size,Z_Param_Out_min,Z_Param_Out_max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execContinuous)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_GET_TARRAY_REF(float,Z_Param_Out_min);
		P_GET_TARRAY_REF(float,Z_Param_Out_max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSpace**)Z_Param__Result=UNevarokMLSpace::Continuous(Z_Param_owner,Z_Param_size,Z_Param_Out_min,Z_Param_Out_max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execMultiBinary)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSpace**)Z_Param__Result=UNevarokMLSpace::MultiBinary(Z_Param_owner,Z_Param_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execMultiDiscrete)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_TARRAY_REF(int64,Z_Param_Out_vec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSpace**)Z_Param__Result=UNevarokMLSpace::MultiDiscrete(Z_Param_owner,Z_Param_Out_vec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execDiscrete)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_PROPERTY(FInt64Property,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLSpace**)Z_Param__Result=UNevarokMLSpace::Discrete(Z_Param_owner,Z_Param_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSpace::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	void UNevarokMLSpace::StaticRegisterNativesUNevarokMLSpace()
	{
		UClass* Class = UNevarokMLSpace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Box", &UNevarokMLSpace::execBox },
			{ "BoxDXStack", &UNevarokMLSpace::execBoxDXStack },
			{ "BoxDYStack", &UNevarokMLSpace::execBoxDYStack },
			{ "Continuous", &UNevarokMLSpace::execContinuous },
			{ "ContinuousStack", &UNevarokMLSpace::execContinuousStack },
			{ "Discrete", &UNevarokMLSpace::execDiscrete },
			{ "GetType", &UNevarokMLSpace::execGetType },
			{ "IsValid", &UNevarokMLSpace::execIsValid },
			{ "MultiBinary", &UNevarokMLSpace::execMultiBinary },
			{ "MultiBinaryStack", &UNevarokMLSpace::execMultiBinaryStack },
			{ "MultiDiscrete", &UNevarokMLSpace::execMultiDiscrete },
			{ "MultiDiscreteStack", &UNevarokMLSpace::execMultiDiscreteStack },
			{ "ToBox", &UNevarokMLSpace::execToBox },
			{ "ToBoxDXStack", &UNevarokMLSpace::execToBoxDXStack },
			{ "ToBoxDYStack", &UNevarokMLSpace::execToBoxDYStack },
			{ "ToContinuous", &UNevarokMLSpace::execToContinuous },
			{ "ToContinuousStack", &UNevarokMLSpace::execToContinuousStack },
			{ "ToDiscrete", &UNevarokMLSpace::execToDiscrete },
			{ "ToMultiBinary", &UNevarokMLSpace::execToMultiBinary },
			{ "ToMultiBinaryStack", &UNevarokMLSpace::execToMultiBinaryStack },
			{ "ToMultiDiscrete", &UNevarokMLSpace::execToMultiDiscrete },
			{ "ToMultiDiscreteStack", &UNevarokMLSpace::execToMultiDiscreteStack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_Box_Statics
	{
		struct NevarokMLSpace_eventBox_Parms
		{
			UObject* owner;
			FNevarokMLIndex2D size;
			TArray<float> min;
			TArray<float> max;
			UNevarokMLSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FStructPropertyParams NewProp_size;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_max;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBox_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBox_Parms, size), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_min_Inner = { "min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBox_Parms, min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_min_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_max_Inner = { "max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBox_Parms, max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_max_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBox_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "Box", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::NevarokMLSpace_eventBox_Parms), Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_Box()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_Box_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics
	{
		struct NevarokMLSpace_eventBoxDXStack_Parms
		{
			UObject* owner;
			FNevarokMLIndex2D size;
			TArray<float> min;
			TArray<float> max;
			int32 stack;
			UNevarokMLSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FStructPropertyParams NewProp_size;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_max;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stack;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBoxDXStack_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBoxDXStack_Parms, size), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_min_Inner = { "min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBoxDXStack_Parms, min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_min_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_max_Inner = { "max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBoxDXStack_Parms, max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_max_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBoxDXStack_Parms, stack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBoxDXStack_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "CPP_Default_stack", "1" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "BoxDXStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::NevarokMLSpace_eventBoxDXStack_Parms), Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics
	{
		struct NevarokMLSpace_eventBoxDYStack_Parms
		{
			UObject* owner;
			FNevarokMLIndex2D size;
			TArray<float> min;
			TArray<float> max;
			int32 stack;
			UNevarokMLSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FStructPropertyParams NewProp_size;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_max;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stack;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBoxDYStack_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBoxDYStack_Parms, size), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_min_Inner = { "min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBoxDYStack_Parms, min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_min_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_max_Inner = { "max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBoxDYStack_Parms, max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_max_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBoxDYStack_Parms, stack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventBoxDYStack_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "CPP_Default_stack", "1" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "BoxDYStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::NevarokMLSpace_eventBoxDYStack_Parms), Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics
	{
		struct NevarokMLSpace_eventContinuous_Parms
		{
			UObject* owner;
			int32 size;
			TArray<float> min;
			TArray<float> max;
			UNevarokMLSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_max;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventContinuous_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventContinuous_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_min_Inner = { "min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventContinuous_Parms, min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_min_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_max_Inner = { "max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventContinuous_Parms, max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_max_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventContinuous_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "Continuous", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::NevarokMLSpace_eventContinuous_Parms), Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_Continuous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_Continuous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics
	{
		struct NevarokMLSpace_eventContinuousStack_Parms
		{
			UObject* owner;
			int32 size;
			TArray<float> min;
			TArray<float> max;
			int32 stack;
			UNevarokMLSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_max;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stack;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventContinuousStack_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventContinuousStack_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_min_Inner = { "min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventContinuousStack_Parms, min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_min_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_max_Inner = { "max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventContinuousStack_Parms, max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_max_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventContinuousStack_Parms, stack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventContinuousStack_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "CPP_Default_stack", "1" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "ContinuousStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::NevarokMLSpace_eventContinuousStack_Parms), Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics
	{
		struct NevarokMLSpace_eventDiscrete_Parms
		{
			UObject* owner;
			int64 size;
			UNevarokMLSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_size;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventDiscrete_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventDiscrete_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventDiscrete_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "CPP_Default_size", "1" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "Discrete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::NevarokMLSpace_eventDiscrete_Parms), Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_Discrete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_Discrete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics
	{
		struct NevarokMLSpace_eventGetType_Parms
		{
			ENevarokMLSpaceEnum ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_NevarokML_ENevarokMLSpaceEnum, METADATA_PARAMS(nullptr, 0) }; // 1682189705
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "GetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics::NevarokMLSpace_eventGetType_Parms), Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics
	{
		struct NevarokMLSpace_eventIsValid_Parms
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
	void Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSpace_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSpace_eventIsValid_Parms), &Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics::NevarokMLSpace_eventIsValid_Parms), Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics
	{
		struct NevarokMLSpace_eventMultiBinary_Parms
		{
			UObject* owner;
			int32 size;
			UNevarokMLSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiBinary_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiBinary_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiBinary_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "CPP_Default_size", "1" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "MultiBinary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::NevarokMLSpace_eventMultiBinary_Parms), Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_MultiBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_MultiBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics
	{
		struct NevarokMLSpace_eventMultiBinaryStack_Parms
		{
			UObject* owner;
			int32 size;
			int32 stack;
			UNevarokMLSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stack;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiBinaryStack_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiBinaryStack_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiBinaryStack_Parms, stack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiBinaryStack_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::NewProp_stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "CPP_Default_size", "1" },
		{ "CPP_Default_stack", "1" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "MultiBinaryStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::NevarokMLSpace_eventMultiBinaryStack_Parms), Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics
	{
		struct NevarokMLSpace_eventMultiDiscrete_Parms
		{
			UObject* owner;
			TArray<int64> vec;
			UNevarokMLSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_vec_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vec_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vec;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiDiscrete_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::NewProp_vec_Inner = { "vec", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::NewProp_vec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::NewProp_vec = { "vec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiDiscrete_Parms, vec), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::NewProp_vec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::NewProp_vec_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiDiscrete_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::NewProp_vec_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::NewProp_vec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "MultiDiscrete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::NevarokMLSpace_eventMultiDiscrete_Parms), Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics
	{
		struct NevarokMLSpace_eventMultiDiscreteStack_Parms
		{
			UObject* owner;
			TArray<int64> vec;
			int32 stack;
			UNevarokMLSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_vec_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vec_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vec;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stack;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiDiscreteStack_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NewProp_vec_Inner = { "vec", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NewProp_vec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NewProp_vec = { "vec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiDiscreteStack_Parms, vec), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NewProp_vec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NewProp_vec_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiDiscreteStack_Parms, stack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventMultiDiscreteStack_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NewProp_vec_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NewProp_vec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NewProp_stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "CPP_Default_stack", "1" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "MultiDiscreteStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::NevarokMLSpace_eventMultiDiscreteStack_Parms), Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics
	{
		struct NevarokMLSpace_eventToBox_Parms
		{
			FNevarokMLIndex2D size;
			TArray<float> min;
			TArray<float> max;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_size;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToBox_Parms, size), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_min_Inner = { "min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToBox_Parms, min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_min_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_max_Inner = { "max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToBox_Parms, max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NewProp_max,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "ToBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::NevarokMLSpace_eventToBox_Parms), Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_ToBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_ToBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics
	{
		struct NevarokMLSpace_eventToBoxDXStack_Parms
		{
			FNevarokMLIndex2D size;
			TArray<float> min;
			TArray<float> max;
			int32 stack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_size;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_max;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToBoxDXStack_Parms, size), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_min_Inner = { "min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToBoxDXStack_Parms, min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_min_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_max_Inner = { "max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToBoxDXStack_Parms, max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_max_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToBoxDXStack_Parms, stack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NewProp_stack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "ToBoxDXStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::NevarokMLSpace_eventToBoxDXStack_Parms), Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics
	{
		struct NevarokMLSpace_eventToBoxDYStack_Parms
		{
			FNevarokMLIndex2D size;
			TArray<float> min;
			TArray<float> max;
			int32 stack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_size;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_max;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToBoxDYStack_Parms, size), Z_Construct_UScriptStruct_FNevarokMLIndex2D, METADATA_PARAMS(nullptr, 0) }; // 3166452073
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_min_Inner = { "min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToBoxDYStack_Parms, min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_min_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_max_Inner = { "max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToBoxDYStack_Parms, max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_max_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToBoxDYStack_Parms, stack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NewProp_stack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "ToBoxDYStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::NevarokMLSpace_eventToBoxDYStack_Parms), Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics
	{
		struct NevarokMLSpace_eventToContinuous_Parms
		{
			int32 size;
			TArray<float> min;
			TArray<float> max;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToContinuous_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_min_Inner = { "min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToContinuous_Parms, min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_min_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_max_Inner = { "max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToContinuous_Parms, max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NewProp_max,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "ToContinuous", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::NevarokMLSpace_eventToContinuous_Parms), Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_ToContinuous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_ToContinuous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics
	{
		struct NevarokMLSpace_eventToContinuousStack_Parms
		{
			int32 size;
			TArray<float> min;
			TArray<float> max;
			int32 stack;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_min_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_max;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToContinuousStack_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_min_Inner = { "min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToContinuousStack_Parms, min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_min_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_max_Inner = { "max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToContinuousStack_Parms, max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_max_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToContinuousStack_Parms, stack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NewProp_stack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "ToContinuousStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::NevarokMLSpace_eventToContinuousStack_Parms), Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete_Statics
	{
		struct NevarokMLSpace_eventToDiscrete_Parms
		{
			int64 size;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToDiscrete_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "ToDiscrete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete_Statics::NevarokMLSpace_eventToDiscrete_Parms), Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary_Statics
	{
		struct NevarokMLSpace_eventToMultiBinary_Parms
		{
			int32 size;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToMultiBinary_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "ToMultiBinary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary_Statics::NevarokMLSpace_eventToMultiBinary_Parms), Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics
	{
		struct NevarokMLSpace_eventToMultiBinaryStack_Parms
		{
			int32 size;
			int32 stack;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToMultiBinaryStack_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToMultiBinaryStack_Parms, stack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics::NewProp_stack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "ToMultiBinaryStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics::NevarokMLSpace_eventToMultiBinaryStack_Parms), Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics
	{
		struct NevarokMLSpace_eventToMultiDiscrete_Parms
		{
			TArray<int64> vec;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_vec_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vec_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::NewProp_vec_Inner = { "vec", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::NewProp_vec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::NewProp_vec = { "vec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToMultiDiscrete_Parms, vec), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::NewProp_vec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::NewProp_vec_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::NewProp_vec_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::NewProp_vec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "ToMultiDiscrete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::NevarokMLSpace_eventToMultiDiscrete_Parms), Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics
	{
		struct NevarokMLSpace_eventToMultiDiscreteStack_Parms
		{
			TArray<int64> vec;
			int32 stack;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_vec_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vec_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vec;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::NewProp_vec_Inner = { "vec", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::NewProp_vec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::NewProp_vec = { "vec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToMultiDiscreteStack_Parms, vec), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::NewProp_vec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::NewProp_vec_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::NewProp_stack = { "stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSpace_eventToMultiDiscreteStack_Parms, stack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::NewProp_vec_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::NewProp_vec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::NewProp_stack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|Space" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSpace, nullptr, "ToMultiDiscreteStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::NevarokMLSpace_eventToMultiDiscreteStack_Parms), Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLSpace);
	UClass* Z_Construct_UClass_UNevarokMLSpace_NoRegister()
	{
		return UNevarokMLSpace::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLSpace_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLSpace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLSpace_Box, "Box" }, // 1268790736
		{ &Z_Construct_UFunction_UNevarokMLSpace_BoxDXStack, "BoxDXStack" }, // 346271451
		{ &Z_Construct_UFunction_UNevarokMLSpace_BoxDYStack, "BoxDYStack" }, // 4007724299
		{ &Z_Construct_UFunction_UNevarokMLSpace_Continuous, "Continuous" }, // 1129858835
		{ &Z_Construct_UFunction_UNevarokMLSpace_ContinuousStack, "ContinuousStack" }, // 2683803551
		{ &Z_Construct_UFunction_UNevarokMLSpace_Discrete, "Discrete" }, // 693728010
		{ &Z_Construct_UFunction_UNevarokMLSpace_GetType, "GetType" }, // 3024221761
		{ &Z_Construct_UFunction_UNevarokMLSpace_IsValid, "IsValid" }, // 2517070279
		{ &Z_Construct_UFunction_UNevarokMLSpace_MultiBinary, "MultiBinary" }, // 2324958785
		{ &Z_Construct_UFunction_UNevarokMLSpace_MultiBinaryStack, "MultiBinaryStack" }, // 4220015547
		{ &Z_Construct_UFunction_UNevarokMLSpace_MultiDiscrete, "MultiDiscrete" }, // 4171128737
		{ &Z_Construct_UFunction_UNevarokMLSpace_MultiDiscreteStack, "MultiDiscreteStack" }, // 2496140027
		{ &Z_Construct_UFunction_UNevarokMLSpace_ToBox, "ToBox" }, // 2289927347
		{ &Z_Construct_UFunction_UNevarokMLSpace_ToBoxDXStack, "ToBoxDXStack" }, // 99440776
		{ &Z_Construct_UFunction_UNevarokMLSpace_ToBoxDYStack, "ToBoxDYStack" }, // 2869795154
		{ &Z_Construct_UFunction_UNevarokMLSpace_ToContinuous, "ToContinuous" }, // 3476140415
		{ &Z_Construct_UFunction_UNevarokMLSpace_ToContinuousStack, "ToContinuousStack" }, // 3533100045
		{ &Z_Construct_UFunction_UNevarokMLSpace_ToDiscrete, "ToDiscrete" }, // 995506381
		{ &Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinary, "ToMultiBinary" }, // 3873839317
		{ &Z_Construct_UFunction_UNevarokMLSpace_ToMultiBinaryStack, "ToMultiBinaryStack" }, // 186831756
		{ &Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscrete, "ToMultiDiscrete" }, // 1727026771
		{ &Z_Construct_UFunction_UNevarokMLSpace_ToMultiDiscreteStack, "ToMultiDiscreteStack" }, // 1047823234
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSpace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Spaces/NevarokMLSpace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Spaces/NevarokMLSpace.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLSpace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLSpace_Statics::ClassParams = {
		&UNevarokMLSpace::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSpace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLSpace()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLSpace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLSpace.OuterSingleton, Z_Construct_UClass_UNevarokMLSpace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLSpace.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLSpace>()
	{
		return UNevarokMLSpace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLSpace);
	UNevarokMLSpace::~UNevarokMLSpace() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_Statics::EnumInfo[] = {
		{ ENevarokMLSpaceEnum_StaticEnum, TEXT("ENevarokMLSpaceEnum"), &Z_Registration_Info_UEnum_ENevarokMLSpaceEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1682189705U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLSpace, UNevarokMLSpace::StaticClass, TEXT("UNevarokMLSpace"), &Z_Registration_Info_UClass_UNevarokMLSpace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLSpace), 132221871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_784707117(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
