// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Models/NevarokMLNNEModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNevarokMLNNEModel;
class UNevarokMLSample;
class UNNEModelData;
class UObject;
#ifdef NEVAROKML_NevarokMLNNEModel_generated_h
#error "NevarokMLNNEModel.generated.h already included, missing '#pragma once' in NevarokMLNNEModel.h"
#endif
#define NEVAROKML_NevarokMLNNEModel_generated_h

#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNevarokMLNNETensor_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NEVAROKML_API UScriptStruct* StaticStruct<struct FNevarokMLNNETensor>();

#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_SPARSE_DATA
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNNEModel); \
	DECLARE_FUNCTION(execPredict); \
	DECLARE_FUNCTION(execIsValid);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNNEModel); \
	DECLARE_FUNCTION(execPredict); \
	DECLARE_FUNCTION(execIsValid);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_ACCESSORS
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNevarokMLNNEModel(); \
	friend struct Z_Construct_UClass_UNevarokMLNNEModel_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLNNEModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLNNEModel)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUNevarokMLNNEModel(); \
	friend struct Z_Construct_UClass_UNevarokMLNNEModel_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLNNEModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLNNEModel)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNevarokMLNNEModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNevarokMLNNEModel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLNNEModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLNNEModel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLNNEModel(UNevarokMLNNEModel&&); \
	NO_API UNevarokMLNNEModel(const UNevarokMLNNEModel&); \
public: \
	NO_API virtual ~UNevarokMLNNEModel();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNevarokMLNNEModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLNNEModel(UNevarokMLNNEModel&&); \
	NO_API UNevarokMLNNEModel(const UNevarokMLNNEModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLNNEModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLNNEModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNevarokMLNNEModel) \
	NO_API virtual ~UNevarokMLNNEModel();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_67_PROLOG
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_RPC_WRAPPERS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_INCLASS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEVAROKML_API UClass* StaticClass<class UNevarokMLNNEModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Models_NevarokMLNNEModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
