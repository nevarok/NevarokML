// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Spaces/NevarokMLSpace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNevarokMLSpace;
class UObject;
enum class ENevarokMLSpaceEnum : uint8;
struct FNevarokMLIndex2D;
#ifdef NEVAROKML_NevarokMLSpace_generated_h
#error "NevarokMLSpace.generated.h already included, missing '#pragma once' in NevarokMLSpace.h"
#endif
#define NEVAROKML_NevarokMLSpace_generated_h

#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_SPARSE_DATA
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execToBoxDYStack); \
	DECLARE_FUNCTION(execToBoxDXStack); \
	DECLARE_FUNCTION(execToContinuousStack); \
	DECLARE_FUNCTION(execToMultiBinaryStack); \
	DECLARE_FUNCTION(execToMultiDiscreteStack); \
	DECLARE_FUNCTION(execToBox); \
	DECLARE_FUNCTION(execToContinuous); \
	DECLARE_FUNCTION(execToMultiBinary); \
	DECLARE_FUNCTION(execToMultiDiscrete); \
	DECLARE_FUNCTION(execToDiscrete); \
	DECLARE_FUNCTION(execBoxDYStack); \
	DECLARE_FUNCTION(execBoxDXStack); \
	DECLARE_FUNCTION(execContinuousStack); \
	DECLARE_FUNCTION(execMultiBinaryStack); \
	DECLARE_FUNCTION(execMultiDiscreteStack); \
	DECLARE_FUNCTION(execBox); \
	DECLARE_FUNCTION(execContinuous); \
	DECLARE_FUNCTION(execMultiBinary); \
	DECLARE_FUNCTION(execMultiDiscrete); \
	DECLARE_FUNCTION(execDiscrete); \
	DECLARE_FUNCTION(execIsValid);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execToBoxDYStack); \
	DECLARE_FUNCTION(execToBoxDXStack); \
	DECLARE_FUNCTION(execToContinuousStack); \
	DECLARE_FUNCTION(execToMultiBinaryStack); \
	DECLARE_FUNCTION(execToMultiDiscreteStack); \
	DECLARE_FUNCTION(execToBox); \
	DECLARE_FUNCTION(execToContinuous); \
	DECLARE_FUNCTION(execToMultiBinary); \
	DECLARE_FUNCTION(execToMultiDiscrete); \
	DECLARE_FUNCTION(execToDiscrete); \
	DECLARE_FUNCTION(execBoxDYStack); \
	DECLARE_FUNCTION(execBoxDXStack); \
	DECLARE_FUNCTION(execContinuousStack); \
	DECLARE_FUNCTION(execMultiBinaryStack); \
	DECLARE_FUNCTION(execMultiDiscreteStack); \
	DECLARE_FUNCTION(execBox); \
	DECLARE_FUNCTION(execContinuous); \
	DECLARE_FUNCTION(execMultiBinary); \
	DECLARE_FUNCTION(execMultiDiscrete); \
	DECLARE_FUNCTION(execDiscrete); \
	DECLARE_FUNCTION(execIsValid);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_ACCESSORS
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNevarokMLSpace(); \
	friend struct Z_Construct_UClass_UNevarokMLSpace_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLSpace, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLSpace)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUNevarokMLSpace(); \
	friend struct Z_Construct_UClass_UNevarokMLSpace_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLSpace, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLSpace)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNevarokMLSpace(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNevarokMLSpace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLSpace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLSpace(UNevarokMLSpace&&); \
	NO_API UNevarokMLSpace(const UNevarokMLSpace&); \
public: \
	NO_API virtual ~UNevarokMLSpace();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLSpace(UNevarokMLSpace&&); \
	NO_API UNevarokMLSpace(const UNevarokMLSpace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLSpace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNevarokMLSpace) \
	NO_API virtual ~UNevarokMLSpace();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_67_PROLOG
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_RPC_WRAPPERS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_INCLASS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEVAROKML_API UClass* StaticClass<class UNevarokMLSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Spaces_NevarokMLSpace_h


#define FOREACH_ENUM_ENEVAROKMLSPACEENUM(op) \
	op(ENevarokMLSpaceEnum::DISCRETE) \
	op(ENevarokMLSpaceEnum::BOX) \
	op(ENevarokMLSpaceEnum::MULTI_DISCRETE) \
	op(ENevarokMLSpaceEnum::MULTI_BINARY) 

enum class ENevarokMLSpaceEnum : uint8;
template<> struct TIsUEnumClass<ENevarokMLSpaceEnum> { enum { Value = true }; };
template<> NEVAROKML_API UEnum* StaticEnum<ENevarokMLSpaceEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
