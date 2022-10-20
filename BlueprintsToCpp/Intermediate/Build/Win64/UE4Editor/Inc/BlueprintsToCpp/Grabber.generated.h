// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef BLUEPRINTSTOCPP_Grabber_generated_h
#error "Grabber.generated.h already included, missing '#pragma once' in Grabber.h"
#endif
#define BLUEPRINTSTOCPP_Grabber_generated_h

#define BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_SPARSE_DATA
#define BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaxGrabLocation);


#define BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxGrabLocation);


#define BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintsToCpp"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintsToCpp"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public:


#define BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrabber)


#define BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxGrabDistance() { return STRUCT_OFFSET(UGrabber, MaxGrabDistance); }


#define BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_10_PROLOG
#define BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_PRIVATE_PROPERTY_OFFSET \
	BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_SPARSE_DATA \
	BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_RPC_WRAPPERS \
	BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_INCLASS \
	BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_PRIVATE_PROPERTY_OFFSET \
	BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_SPARSE_DATA \
	BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_INCLASS_NO_PURE_DECLS \
	BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTSTOCPP_API UClass* StaticClass<class UGrabber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlueprintsToCpp_Source_BlueprintsToCpp_Grabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
