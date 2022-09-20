// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONTYPES_WeaponTypesCharacter_generated_h
#error "WeaponTypesCharacter.generated.h already included, missing '#pragma once' in WeaponTypesCharacter.h"
#endif
#define WEAPONTYPES_WeaponTypesCharacter_generated_h

#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_SPARSE_DATA
#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_RPC_WRAPPERS
#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponTypesCharacter(); \
	friend struct Z_Construct_UClass_AWeaponTypesCharacter_Statics; \
public: \
	DECLARE_CLASS(AWeaponTypesCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponTypes"), NO_API) \
	DECLARE_SERIALIZER(AWeaponTypesCharacter)


#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponTypesCharacter(); \
	friend struct Z_Construct_UClass_AWeaponTypesCharacter_Statics; \
public: \
	DECLARE_CLASS(AWeaponTypesCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponTypes"), NO_API) \
	DECLARE_SERIALIZER(AWeaponTypesCharacter)


#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponTypesCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponTypesCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponTypesCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponTypesCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponTypesCharacter(AWeaponTypesCharacter&&); \
	NO_API AWeaponTypesCharacter(const AWeaponTypesCharacter&); \
public:


#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponTypesCharacter(AWeaponTypesCharacter&&); \
	NO_API AWeaponTypesCharacter(const AWeaponTypesCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponTypesCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponTypesCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponTypesCharacter)


#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_20_PROLOG
#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_SPARSE_DATA \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_RPC_WRAPPERS \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_INCLASS \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_SPARSE_DATA \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONTYPES_API UClass* StaticClass<class AWeaponTypesCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeaponTypes_Source_WeaponTypes_WeaponTypesCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
