// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NevarokMLTraceSensorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNevarokMLSample;
struct FLinearColor;
struct FNevarokMLIndex2D;
#ifdef NEVAROKML_NevarokMLTraceSensorComponent_generated_h
#error "NevarokMLTraceSensorComponent.generated.h already included, missing '#pragma once' in NevarokMLTraceSensorComponent.h"
#endif
#define NEVAROKML_NevarokMLTraceSensorComponent_generated_h

#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_SPARSE_DATA
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSampleBoxLineTrace);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSampleBoxLineTrace);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_ACCESSORS
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNevarokMLTraceSensorComponent(); \
	friend struct Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLTraceSensorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLTraceSensorComponent)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUNevarokMLTraceSensorComponent(); \
	friend struct Z_Construct_UClass_UNevarokMLTraceSensorComponent_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLTraceSensorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLTraceSensorComponent)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNevarokMLTraceSensorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNevarokMLTraceSensorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLTraceSensorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLTraceSensorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLTraceSensorComponent(UNevarokMLTraceSensorComponent&&); \
	NO_API UNevarokMLTraceSensorComponent(const UNevarokMLTraceSensorComponent&); \
public: \
	NO_API virtual ~UNevarokMLTraceSensorComponent();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLTraceSensorComponent(UNevarokMLTraceSensorComponent&&); \
	NO_API UNevarokMLTraceSensorComponent(const UNevarokMLTraceSensorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLTraceSensorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLTraceSensorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNevarokMLTraceSensorComponent) \
	NO_API virtual ~UNevarokMLTraceSensorComponent();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_62_PROLOG
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_RPC_WRAPPERS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_INCLASS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEVAROKML_API UClass* StaticClass<class UNevarokMLTraceSensorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLTraceSensorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
