// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/NevarokMLRaycastUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FLinearColor;
struct FNevarokMLRaycastData;
#ifdef NEVAROKML_NevarokMLRaycastUtils_generated_h
#error "NevarokMLRaycastUtils.generated.h already included, missing '#pragma once' in NevarokMLRaycastUtils.h"
#endif
#define NEVAROKML_NevarokMLRaycastUtils_generated_h

#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNevarokMLRaycastData_Statics; \
	NEVAROKML_API static class UScriptStruct* StaticStruct();


template<> NEVAROKML_API UScriptStruct* StaticStruct<struct FNevarokMLRaycastData>();

#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_SPARSE_DATA
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRaycastFromTo); \
	DECLARE_FUNCTION(execGetAngleBetweenVectors); \
	DECLARE_FUNCTION(execRaycastVRange); \
	DECLARE_FUNCTION(execRaycastHRange); \
	DECLARE_FUNCTION(execRaycastRange);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRaycastFromTo); \
	DECLARE_FUNCTION(execGetAngleBetweenVectors); \
	DECLARE_FUNCTION(execRaycastVRange); \
	DECLARE_FUNCTION(execRaycastHRange); \
	DECLARE_FUNCTION(execRaycastRange);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_ACCESSORS
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNevarokMLRaycastUtils(); \
	friend struct Z_Construct_UClass_UNevarokMLRaycastUtils_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLRaycastUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLRaycastUtils)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUNevarokMLRaycastUtils(); \
	friend struct Z_Construct_UClass_UNevarokMLRaycastUtils_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLRaycastUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLRaycastUtils)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNevarokMLRaycastUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNevarokMLRaycastUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLRaycastUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLRaycastUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLRaycastUtils(UNevarokMLRaycastUtils&&); \
	NO_API UNevarokMLRaycastUtils(const UNevarokMLRaycastUtils&); \
public: \
	NO_API virtual ~UNevarokMLRaycastUtils();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNevarokMLRaycastUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLRaycastUtils(UNevarokMLRaycastUtils&&); \
	NO_API UNevarokMLRaycastUtils(const UNevarokMLRaycastUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLRaycastUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLRaycastUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNevarokMLRaycastUtils) \
	NO_API virtual ~UNevarokMLRaycastUtils();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_82_PROLOG
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_RPC_WRAPPERS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_INCLASS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEVAROKML_API UClass* StaticClass<class UNevarokMLRaycastUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLRaycastUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
