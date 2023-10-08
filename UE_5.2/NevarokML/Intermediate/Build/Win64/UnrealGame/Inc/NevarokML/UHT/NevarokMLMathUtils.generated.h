// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/NevarokMLMathUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNevarokMLIndex2D;
#ifdef NEVAROKML_NevarokMLMathUtils_generated_h
#error "NevarokMLMathUtils.generated.h already included, missing '#pragma once' in NevarokMLMathUtils.h"
#endif
#define NEVAROKML_NevarokMLMathUtils_generated_h

#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_SPARSE_DATA
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMultiply_Index2DInt); \
	DECLARE_FUNCTION(execAdd_Index2DIndex2D); \
	DECLARE_FUNCTION(execIndexPlusPlus); \
	DECLARE_FUNCTION(execRound); \
	DECLARE_FUNCTION(execXYRandomVector); \
	DECLARE_FUNCTION(execIntToShortShort); \
	DECLARE_FUNCTION(execBatchSize); \
	DECLARE_FUNCTION(execGCD); \
	DECLARE_FUNCTION(execShortShortToInt); \
	DECLARE_FUNCTION(execFloatToShort); \
	DECLARE_FUNCTION(execRoundInt64ToFVector); \
	DECLARE_FUNCTION(execRoundFVectorToInt64); \
	DECLARE_FUNCTION(execRoundIntToFVector); \
	DECLARE_FUNCTION(execRoundFVectorToInt); \
	DECLARE_FUNCTION(execRoundFVectorValuesToInt); \
	DECLARE_FUNCTION(execRoundFVectorValuesToInt16); \
	DECLARE_FUNCTION(execRoundFVectorValuesToInt8); \
	DECLARE_FUNCTION(execGetMaxUInt8); \
	DECLARE_FUNCTION(execGetMaxInt8); \
	DECLARE_FUNCTION(execGetMaxInt16); \
	DECLARE_FUNCTION(execGetMaxInt); \
	DECLARE_FUNCTION(execGetMaxInt64); \
	DECLARE_FUNCTION(execStackReset); \
	DECLARE_FUNCTION(execStackPush); \
	DECLARE_FUNCTION(execVecScale); \
	DECLARE_FUNCTION(execVecSet); \
	DECLARE_FUNCTION(execVecAdd); \
	DECLARE_FUNCTION(execMinMaxAddVector2D); \
	DECLARE_FUNCTION(execMinMaxAdd); \
	DECLARE_FUNCTION(execMakeVec); \
	DECLARE_FUNCTION(execMakeMinMax); \
	DECLARE_FUNCTION(execGetIndex); \
	DECLARE_FUNCTION(execFVectorClampToFloat16); \
	DECLARE_FUNCTION(execInt64ToFVector); \
	DECLARE_FUNCTION(execFVectorToInt64); \
	DECLARE_FUNCTION(execNSteps);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMultiply_Index2DInt); \
	DECLARE_FUNCTION(execAdd_Index2DIndex2D); \
	DECLARE_FUNCTION(execIndexPlusPlus); \
	DECLARE_FUNCTION(execRound); \
	DECLARE_FUNCTION(execXYRandomVector); \
	DECLARE_FUNCTION(execIntToShortShort); \
	DECLARE_FUNCTION(execBatchSize); \
	DECLARE_FUNCTION(execGCD); \
	DECLARE_FUNCTION(execShortShortToInt); \
	DECLARE_FUNCTION(execFloatToShort); \
	DECLARE_FUNCTION(execRoundInt64ToFVector); \
	DECLARE_FUNCTION(execRoundFVectorToInt64); \
	DECLARE_FUNCTION(execRoundIntToFVector); \
	DECLARE_FUNCTION(execRoundFVectorToInt); \
	DECLARE_FUNCTION(execRoundFVectorValuesToInt); \
	DECLARE_FUNCTION(execRoundFVectorValuesToInt16); \
	DECLARE_FUNCTION(execRoundFVectorValuesToInt8); \
	DECLARE_FUNCTION(execGetMaxUInt8); \
	DECLARE_FUNCTION(execGetMaxInt8); \
	DECLARE_FUNCTION(execGetMaxInt16); \
	DECLARE_FUNCTION(execGetMaxInt); \
	DECLARE_FUNCTION(execGetMaxInt64); \
	DECLARE_FUNCTION(execStackReset); \
	DECLARE_FUNCTION(execStackPush); \
	DECLARE_FUNCTION(execVecScale); \
	DECLARE_FUNCTION(execVecSet); \
	DECLARE_FUNCTION(execVecAdd); \
	DECLARE_FUNCTION(execMinMaxAddVector2D); \
	DECLARE_FUNCTION(execMinMaxAdd); \
	DECLARE_FUNCTION(execMakeVec); \
	DECLARE_FUNCTION(execMakeMinMax); \
	DECLARE_FUNCTION(execGetIndex); \
	DECLARE_FUNCTION(execFVectorClampToFloat16); \
	DECLARE_FUNCTION(execInt64ToFVector); \
	DECLARE_FUNCTION(execFVectorToInt64); \
	DECLARE_FUNCTION(execNSteps);


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_ACCESSORS
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNevarokMLMathUtils(); \
	friend struct Z_Construct_UClass_UNevarokMLMathUtils_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLMathUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLMathUtils)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUNevarokMLMathUtils(); \
	friend struct Z_Construct_UClass_UNevarokMLMathUtils_Statics; \
public: \
	DECLARE_CLASS(UNevarokMLMathUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NevarokML"), NO_API) \
	DECLARE_SERIALIZER(UNevarokMLMathUtils)


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNevarokMLMathUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNevarokMLMathUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLMathUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLMathUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLMathUtils(UNevarokMLMathUtils&&); \
	NO_API UNevarokMLMathUtils(const UNevarokMLMathUtils&); \
public: \
	NO_API virtual ~UNevarokMLMathUtils();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNevarokMLMathUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNevarokMLMathUtils(UNevarokMLMathUtils&&); \
	NO_API UNevarokMLMathUtils(const UNevarokMLMathUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNevarokMLMathUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNevarokMLMathUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNevarokMLMathUtils) \
	NO_API virtual ~UNevarokMLMathUtils();


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_58_PROLOG
#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_RPC_WRAPPERS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_INCLASS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_SPARSE_DATA \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_ACCESSORS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEVAROKML_API UClass* StaticClass<class UNevarokMLMathUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Utils_NevarokMLMathUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
