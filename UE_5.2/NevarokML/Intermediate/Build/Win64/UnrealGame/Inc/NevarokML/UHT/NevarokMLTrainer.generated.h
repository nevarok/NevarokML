// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Learning/NevarokMLTrainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANevarokMLEnv;
class UNevarokMLBaseAlgorithm;
class UNevarokMLSpace;
enum class ENevarokMLDevice : uint8;
struct FFilePath;
#ifdef NEVAROKML_NevarokMLTrainer_generated_h
#error "NevarokMLTrainer.generated.h already included, missing '#pragma once' in NevarokMLTrainer.h"
#endif
#define NEVAROKML_NevarokMLTrainer_generated_h

#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNevarokMLTrainerTickFunction_Statics; \
	NEVAROKML_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> NEVAROKML_API UScriptStruct* StaticStruct<struct FNevarokMLTrainerTickFunction>();

#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_SPARSE_DATA
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_RPC_WRAPPERS \
	virtual void OnComplete_Implementation(); \
	virtual void OnReset_Implementation(int32 index, ANevarokMLEnv* env); \
	virtual void OnStepSkip_Implementation(int32 index, ANevarokMLEnv* env); \
	virtual void OnStep_Implementation(int32 index, ANevarokMLEnv* env); \
	virtual void OnInit_Implementation(int32 index, ANevarokMLEnv* env); \
	virtual void OnConstruct_Implementation(UNevarokMLSpace* actionSpace, UNevarokMLSpace* observationSpace); \
	virtual void OnInvalid_Implementation(); \
	virtual void OnStart_Implementation(); \
 \
	DECLARE_FUNCTION(execCollectChildEnvs); \
	DECLARE_FUNCTION(execClearEnvs); \
	DECLARE_FUNCTION(execLearn); \
	DECLARE_FUNCTION(execOnComplete); \
	DECLARE_FUNCTION(execOnReset); \
	DECLARE_FUNCTION(execOnStepSkip); \
	DECLARE_FUNCTION(execOnStep); \
	DECLARE_FUNCTION(execOnInit); \
	DECLARE_FUNCTION(execOnConstruct); \
	DECLARE_FUNCTION(execOnInvalid); \
	DECLARE_FUNCTION(execOnStart); \
	DECLARE_FUNCTION(execGetEnvsCount);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollectChildEnvs); \
	DECLARE_FUNCTION(execClearEnvs); \
	DECLARE_FUNCTION(execLearn); \
	DECLARE_FUNCTION(execOnComplete); \
	DECLARE_FUNCTION(execOnReset); \
	DECLARE_FUNCTION(execOnStepSkip); \
	DECLARE_FUNCTION(execOnStep); \
	DECLARE_FUNCTION(execOnInit); \
	DECLARE_FUNCTION(execOnConstruct); \
	DECLARE_FUNCTION(execOnInvalid); \
	DECLARE_FUNCTION(execOnStart); \
	DECLARE_FUNCTION(execGetEnvsCount);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_ACCESSORS
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANevarokMLTrainer(); \
	friend struct Z_Construct_UClass_ANevarokMLTrainer_Statics; \
public: \
	DECLARE_CLASS(ANevarokMLTrainer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(ANevarokMLTrainer)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_INCLASS \
private: \
	static void StaticRegisterNativesANevarokMLTrainer(); \
	friend struct Z_Construct_UClass_ANevarokMLTrainer_Statics; \
public: \
	DECLARE_CLASS(ANevarokMLTrainer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(ANevarokMLTrainer)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANevarokMLTrainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANevarokMLTrainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANevarokMLTrainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANevarokMLTrainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANevarokMLTrainer(ANevarokMLTrainer&&); \
	NO_API ANevarokMLTrainer(const ANevarokMLTrainer&); \
public: \
	NO_API virtual ~ANevarokMLTrainer();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANevarokMLTrainer(ANevarokMLTrainer&&); \
	NO_API ANevarokMLTrainer(const ANevarokMLTrainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANevarokMLTrainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANevarokMLTrainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANevarokMLTrainer) \
	NO_API virtual ~ANevarokMLTrainer();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_101_PROLOG
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_RPC_WRAPPERS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_INCLASS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEVAROKML_API UClass* StaticClass<class ANevarokMLTrainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Learning_NevarokMLTrainer_h


#define FOREACH_ENUM_ENEVAROKMLSTATE(op) \
	op(ENevarokMLState::NONE) \
	op(ENevarokMLState::START) \
	op(ENevarokMLState::LISTEN) \
	op(ENevarokMLState::RECEIVE) \
	op(ENevarokMLState::COMPLETE) \
	op(ENevarokMLState::INVALID) \
	op(ENevarokMLState::WAIT) \
	op(ENevarokMLState::READY) \
	op(ENevarokMLState::SIMULATION) 

enum class ENevarokMLState : uint8;
template<> struct TIsUEnumClass<ENevarokMLState> { enum { Value = true }; };
template<> NEVAROKML_API UEnum* StaticEnum<ENevarokMLState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
