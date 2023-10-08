// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NevarokMLSphereTriggerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NEVAROKML_NevarokMLSphereTriggerComponent_generated_h
#error "NevarokMLSphereTriggerComponent.generated.h already included, missing '#pragma once' in NevarokMLSphereTriggerComponent.h"
#endif
#define NEVAROKML_NevarokMLSphereTriggerComponent_generated_h

#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_SPARSE_DATA
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTriggered); \
	DECLARE_FUNCTION(execResetTrigger); \
	DECLARE_FUNCTION(execOnTriggerBeginOverlap);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTriggered); \
	DECLARE_FUNCTION(execResetTrigger); \
	DECLARE_FUNCTION(execOnTriggerBeginOverlap);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_ACCESSORS
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNevarokMLSphereTriggerComponent(); \
	friend struct Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLSphereTriggerComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLSphereTriggerComponent)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUNevarokMLSphereTriggerComponent(); \
	friend struct Z_Construct_UClass_UNevarokMLSphereTriggerComponent_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLSphereTriggerComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLSphereTriggerComponent)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNevarokMLSphereTriggerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNevarokMLSphereTriggerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLSphereTriggerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLSphereTriggerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLSphereTriggerComponent(UNevarokMLSphereTriggerComponent&&); \
	NO_API UNevarokMLSphereTriggerComponent(const UNevarokMLSphereTriggerComponent&); \
public: \
	NO_API virtual ~UNevarokMLSphereTriggerComponent();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLSphereTriggerComponent(UNevarokMLSphereTriggerComponent&&); \
	NO_API UNevarokMLSphereTriggerComponent(const UNevarokMLSphereTriggerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLSphereTriggerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLSphereTriggerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNevarokMLSphereTriggerComponent) \
	NO_API virtual ~UNevarokMLSphereTriggerComponent();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_60_PROLOG
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_RPC_WRAPPERS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_INCLASS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEVAROKML_API UClass* StaticClass<class UNevarokMLSphereTriggerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Components_NevarokMLSphereTriggerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
