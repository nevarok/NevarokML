// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Samples/NevarokMLSample.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNevarokMLSample;
class UNevarokMLSpace;
struct FNevarokMLIndex2D;
#ifdef NEVAROKML_NevarokMLSample_generated_h
#error "NevarokMLSample.generated.h already included, missing '#pragma once' in NevarokMLSample.h"
#endif
#define NEVAROKML_NevarokMLSample_generated_h

#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_SPARSE_DATA
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMultiBinaryDebugString); \
	DECLARE_FUNCTION(execGetMultiDiscreteDebugString); \
	DECLARE_FUNCTION(execGetDiscreteDebugString); \
	DECLARE_FUNCTION(execGetBoxDebugString); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execStackShift); \
	DECLARE_FUNCTION(execValidateContinuousValue); \
	DECLARE_FUNCTION(execValidateMultiBinaryValue); \
	DECLARE_FUNCTION(execValidateMultiDiscreteValue); \
	DECLARE_FUNCTION(execValidateDiscreteValue); \
	DECLARE_FUNCTION(execValidateBoxValue); \
	DECLARE_FUNCTION(execSetContinuousValue); \
	DECLARE_FUNCTION(execSetBoxValue); \
	DECLARE_FUNCTION(execSetMultiBinaryValue); \
	DECLARE_FUNCTION(execSetMultiDiscreteValue); \
	DECLARE_FUNCTION(execSetDiscreteValue); \
	DECLARE_FUNCTION(execGetBoxValue); \
	DECLARE_FUNCTION(execGetMultiBinaryValue); \
	DECLARE_FUNCTION(execGetMultiDiscreteValue); \
	DECLARE_FUNCTION(execGetContinuousValue); \
	DECLARE_FUNCTION(execGetDiscreteValue); \
	DECLARE_FUNCTION(execSample); \
	DECLARE_FUNCTION(execGetSpace);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMultiBinaryDebugString); \
	DECLARE_FUNCTION(execGetMultiDiscreteDebugString); \
	DECLARE_FUNCTION(execGetDiscreteDebugString); \
	DECLARE_FUNCTION(execGetBoxDebugString); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execStackShift); \
	DECLARE_FUNCTION(execValidateContinuousValue); \
	DECLARE_FUNCTION(execValidateMultiBinaryValue); \
	DECLARE_FUNCTION(execValidateMultiDiscreteValue); \
	DECLARE_FUNCTION(execValidateDiscreteValue); \
	DECLARE_FUNCTION(execValidateBoxValue); \
	DECLARE_FUNCTION(execSetContinuousValue); \
	DECLARE_FUNCTION(execSetBoxValue); \
	DECLARE_FUNCTION(execSetMultiBinaryValue); \
	DECLARE_FUNCTION(execSetMultiDiscreteValue); \
	DECLARE_FUNCTION(execSetDiscreteValue); \
	DECLARE_FUNCTION(execGetBoxValue); \
	DECLARE_FUNCTION(execGetMultiBinaryValue); \
	DECLARE_FUNCTION(execGetMultiDiscreteValue); \
	DECLARE_FUNCTION(execGetContinuousValue); \
	DECLARE_FUNCTION(execGetDiscreteValue); \
	DECLARE_FUNCTION(execSample); \
	DECLARE_FUNCTION(execGetSpace);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_ACCESSORS
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNevarokMLSample(); \
	friend struct Z_Construct_UClass_UNevarokMLSample_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLSample, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLSample)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUNevarokMLSample(); \
	friend struct Z_Construct_UClass_UNevarokMLSample_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLSample, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLSample)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNevarokMLSample(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNevarokMLSample) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLSample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLSample); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLSample(UNevarokMLSample&&); \
	NO_API UNevarokMLSample(const UNevarokMLSample&); \
public: \
	NO_API virtual ~UNevarokMLSample();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLSample(UNevarokMLSample&&); \
	NO_API UNevarokMLSample(const UNevarokMLSample&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLSample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLSample); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNevarokMLSample) \
	NO_API virtual ~UNevarokMLSample();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_60_PROLOG
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_RPC_WRAPPERS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_INCLASS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEVAROKML_API UClass* StaticClass<class UNevarokMLSample>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Samples_NevarokMLSample_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
