// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Models/NevarokMLNNEModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLNNEModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLNNEModel();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLNNEModel_NoRegister();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSample_NoRegister();
	NEVAROKML_API UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLNNETensor();
	NNECORE_API UClass* Z_Construct_UClass_UNNEModelData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NevarokMLNNETensor;
class UScriptStruct* FNevarokMLNNETensor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NevarokMLNNETensor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NevarokMLNNETensor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNevarokMLNNETensor, (UObject*)Z_Construct_UPackage__Script_NevarokML(), TEXT("NevarokMLNNETensor"));
	}
	return Z_Registration_Info_UScriptStruct_NevarokMLNNETensor.OuterSingleton;
}
template<> NEVAROKML_API UScriptStruct* StaticStruct<FNevarokMLNNETensor>()
{
	return FNevarokMLNNETensor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Models/NevarokMLNNEModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNevarokMLNNETensor>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Models/NevarokMLNNEModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNevarokMLNNETensor, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
		nullptr,
		&NewStructOps,
		"NevarokMLNNETensor",
		sizeof(FNevarokMLNNETensor),
		alignof(FNevarokMLNNETensor),
		Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNevarokMLNNETensor()
	{
		if (!Z_Registration_Info_UScriptStruct_NevarokMLNNETensor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NevarokMLNNETensor.InnerSingleton, Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NevarokMLNNETensor.InnerSingleton;
	}
	DEFINE_FUNCTION(UNevarokMLNNEModel::execNNEModel)
	{
		P_GET_OBJECT(UObject,Z_Param_owner);
		P_GET_OBJECT(UNNEModelData,Z_Param_modelData);
		P_GET_OBJECT(UNevarokMLSample,Z_Param_actionSample);
		P_GET_OBJECT(UNevarokMLSample,Z_Param_observationSample);
		P_GET_UBOOL_REF(Z_Param_Out_valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNevarokMLNNEModel**)Z_Param__Result=UNevarokMLNNEModel::NNEModel(Z_Param_owner,Z_Param_modelData,Z_Param_actionSample,Z_Param_observationSample,Z_Param_Out_valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLNNEModel::execPredict)
	{
		P_GET_OBJECT_REF(UNevarokMLNNEModel,Z_Param_Out_model);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNevarokMLNNEModel::Predict(Z_Param_Out_model);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLNNEModel::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	void UNevarokMLNNEModel::StaticRegisterNativesUNevarokMLNNEModel()
	{
		UClass* Class = UNevarokMLNNEModel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValid", &UNevarokMLNNEModel::execIsValid },
			{ "NNEModel", &UNevarokMLNNEModel::execNNEModel },
			{ "Predict", &UNevarokMLNNEModel::execPredict },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics
	{
		struct NevarokMLNNEModel_eventIsValid_Parms
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
	void Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLNNEModel_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLNNEModel_eventIsValid_Parms), &Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|NNEModel" },
		{ "ModuleRelativePath", "Public/Models/NevarokMLNNEModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLNNEModel, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics::NevarokMLNNEModel_eventIsValid_Parms), Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLNNEModel_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLNNEModel_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics
	{
		struct NevarokMLNNEModel_eventNNEModel_Parms
		{
			UObject* owner;
			UNNEModelData* modelData;
			UNevarokMLSample* actionSample;
			UNevarokMLSample* observationSample;
			bool valid;
			UNevarokMLNNEModel* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_modelData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actionSample;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_observationSample;
		static void NewProp_valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_valid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLNNEModel_eventNNEModel_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_modelData = { "modelData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLNNEModel_eventNNEModel_Parms, modelData), Z_Construct_UClass_UNNEModelData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_actionSample = { "actionSample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLNNEModel_eventNNEModel_Parms, actionSample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_observationSample = { "observationSample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLNNEModel_eventNNEModel_Parms, observationSample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_valid_SetBit(void* Obj)
	{
		((NevarokMLNNEModel_eventNNEModel_Parms*)Obj)->valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_valid = { "valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLNNEModel_eventNNEModel_Parms), &Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLNNEModel_eventNNEModel_Parms, ReturnValue), Z_Construct_UClass_UNevarokMLNNEModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_modelData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_actionSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_observationSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|NNEModel" },
		{ "ModuleRelativePath", "Public/Models/NevarokMLNNEModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLNNEModel, nullptr, "NNEModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::NevarokMLNNEModel_eventNNEModel_Parms), Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics
	{
		struct NevarokMLNNEModel_eventPredict_Parms
		{
			UNevarokMLNNEModel* model;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_model;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::NewProp_model = { "model", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLNNEModel_eventPredict_Parms, model), Z_Construct_UClass_UNevarokMLNNEModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLNNEModel_eventPredict_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLNNEModel_eventPredict_Parms), &Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::NewProp_model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|NNEModel" },
		{ "ModuleRelativePath", "Public/Models/NevarokMLNNEModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLNNEModel, nullptr, "Predict", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::NevarokMLNNEModel_eventPredict_Parms), Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLNNEModel_Predict()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLNNEModel_Predict_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLNNEModel);
	UClass* Z_Construct_UClass_UNevarokMLNNEModel_NoRegister()
	{
		return UNevarokMLNNEModel::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLNNEModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__actionSample_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__actionSample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__observationSample_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__observationSample;
		static const UECodeGen_Private::FStructPropertyParams NewProp__inputTensors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__inputTensors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__inputTensors;
		static const UECodeGen_Private::FStructPropertyParams NewProp__outputTensors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__outputTensors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__outputTensors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLNNEModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLNNEModel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLNNEModel_IsValid, "IsValid" }, // 3700091478
		{ &Z_Construct_UFunction_UNevarokMLNNEModel_NNEModel, "NNEModel" }, // 3087992278
		{ &Z_Construct_UFunction_UNevarokMLNNEModel_Predict, "Predict" }, // 179646650
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLNNEModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Models/NevarokMLNNEModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Models/NevarokMLNNEModel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__actionSample_MetaData[] = {
		{ "ModuleRelativePath", "Public/Models/NevarokMLNNEModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__actionSample = { "_actionSample", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLNNEModel, _actionSample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__actionSample_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__actionSample_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__observationSample_MetaData[] = {
		{ "ModuleRelativePath", "Public/Models/NevarokMLNNEModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__observationSample = { "_observationSample", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLNNEModel, _observationSample), Z_Construct_UClass_UNevarokMLSample_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__observationSample_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__observationSample_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__inputTensors_Inner = { "_inputTensors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNevarokMLNNETensor, METADATA_PARAMS(nullptr, 0) }; // 2821592639
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__inputTensors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Models/NevarokMLNNEModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__inputTensors = { "_inputTensors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLNNEModel, _inputTensors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__inputTensors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__inputTensors_MetaData)) }; // 2821592639
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__outputTensors_Inner = { "_outputTensors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNevarokMLNNETensor, METADATA_PARAMS(nullptr, 0) }; // 2821592639
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__outputTensors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Models/NevarokMLNNEModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__outputTensors = { "_outputTensors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNevarokMLNNEModel, _outputTensors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__outputTensors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__outputTensors_MetaData)) }; // 2821592639
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNevarokMLNNEModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__actionSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__observationSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__inputTensors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__inputTensors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__outputTensors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNevarokMLNNEModel_Statics::NewProp__outputTensors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLNNEModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLNNEModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLNNEModel_Statics::ClassParams = {
		&UNevarokMLNNEModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNevarokMLNNEModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLNNEModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLNNEModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLNNEModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLNNEModel()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLNNEModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLNNEModel.OuterSingleton, Z_Construct_UClass_UNevarokMLNNEModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLNNEModel.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLNNEModel>()
	{
		return UNevarokMLNNEModel::StaticClass();
	}
	UNevarokMLNNEModel::UNevarokMLNNEModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLNNEModel);
	UNevarokMLNNEModel::~UNevarokMLNNEModel() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_Statics::ScriptStructInfo[] = {
		{ FNevarokMLNNETensor::StaticStruct, Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics::NewStructOps, TEXT("NevarokMLNNETensor"), &Z_Registration_Info_UScriptStruct_NevarokMLNNETensor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNevarokMLNNETensor), 2821592639U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLNNEModel, UNevarokMLNNEModel::StaticClass, TEXT("UNevarokMLNNEModel"), &Z_Registration_Info_UClass_UNevarokMLNNEModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLNNEModel), 3396966993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_972333043(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
