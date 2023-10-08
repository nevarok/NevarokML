// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Learning/NevarokMLEnv.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNevarokMLSample;
class UNevarokMLSpace;
#ifdef NEVAROKML_NevarokMLEnv_generated_h
#error "NevarokMLEnv.generated.h already included, missing '#pragma once' in NevarokMLEnv.h"
#endif
#define NEVAROKML_NevarokMLEnv_generated_h

#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_SPARSE_DATA
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_RPC_WRAPPERS \
	virtual void OnReset_Implementation(bool simulate); \
	virtual void OnStepSkip_Implementation(bool simulate); \
	virtual void OnStep_Implementation(bool simulate); \
	virtual void OnInit_Implementation(UNevarokMLSpace* actionSpace, UNevarokMLSpace* observationSpace, bool simulate); \
 \
	DECLARE_FUNCTION(execGetEpisodeReward); \
	DECLARE_FUNCTION(execGetEpisodes); \
	DECLARE_FUNCTION(execGetSteps); \
	DECLARE_FUNCTION(execGetReward); \
	DECLARE_FUNCTION(execGetDone); \
	DECLARE_FUNCTION(execGetObservationSample); \
	DECLARE_FUNCTION(execGetActionSample); \
	DECLARE_FUNCTION(execAddReward); \
	DECLARE_FUNCTION(execOnReset); \
	DECLARE_FUNCTION(execOnStepSkip); \
	DECLARE_FUNCTION(execOnStep); \
	DECLARE_FUNCTION(execOnInit);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEpisodeReward); \
	DECLARE_FUNCTION(execGetEpisodes); \
	DECLARE_FUNCTION(execGetSteps); \
	DECLARE_FUNCTION(execGetReward); \
	DECLARE_FUNCTION(execGetDone); \
	DECLARE_FUNCTION(execGetObservationSample); \
	DECLARE_FUNCTION(execGetActionSample); \
	DECLARE_FUNCTION(execAddReward); \
	DECLARE_FUNCTION(execOnReset); \
	DECLARE_FUNCTION(execOnStepSkip); \
	DECLARE_FUNCTION(execOnStep); \
	DECLARE_FUNCTION(execOnInit);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_ACCESSORS
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANevarokMLEnv(); \
	friend struct Z_Construct_UClass_ANevarokMLEnv_Statics; \
public: \
	DECLARE_CLASS(ANevarokMLEnv, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(ANevarokMLEnv)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_INCLASS \
private: \
	static void StaticRegisterNativesANevarokMLEnv(); \
	friend struct Z_Construct_UClass_ANevarokMLEnv_Statics; \
public: \
	DECLARE_CLASS(ANevarokMLEnv, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(ANevarokMLEnv)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANevarokMLEnv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANevarokMLEnv) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANevarokMLEnv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANevarokMLEnv); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANevarokMLEnv(ANevarokMLEnv&&); \
	NO_API ANevarokMLEnv(const ANevarokMLEnv&); \
public: \
	NO_API virtual ~ANevarokMLEnv();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANevarokMLEnv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANevarokMLEnv(ANevarokMLEnv&&); \
	NO_API ANevarokMLEnv(const ANevarokMLEnv&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANevarokMLEnv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANevarokMLEnv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANevarokMLEnv) \
	NO_API virtual ~ANevarokMLEnv();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_59_PROLOG
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_RPC_WRAPPERS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_INCLASS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEVAROKML_API UClass* StaticClass<class ANevarokMLEnv>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLEnv_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
