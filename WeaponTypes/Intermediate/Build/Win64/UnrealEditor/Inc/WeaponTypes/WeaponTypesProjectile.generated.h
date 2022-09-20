// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef WEAPONTYPES_WeaponTypesProjectile_generated_h
#error "WeaponTypesProjectile.generated.h already included, missing '#pragma once' in WeaponTypesProjectile.h"
#endif
#define WEAPONTYPES_WeaponTypesProjectile_generated_h

#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_SPARSE_DATA
#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponTypesProjectile(); \
	friend struct Z_Construct_UClass_AWeaponTypesProjectile_Statics; \
public: \
	DECLARE_CLASS(AWeaponTypesProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponTypes"), NO_API) \
	DECLARE_SERIALIZER(AWeaponTypesProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponTypesProjectile(); \
	friend struct Z_Construct_UClass_AWeaponTypesProjectile_Statics; \
public: \
	DECLARE_CLASS(AWeaponTypesProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponTypes"), NO_API) \
	DECLARE_SERIALIZER(AWeaponTypesProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponTypesProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponTypesProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponTypesProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponTypesProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponTypesProjectile(AWeaponTypesProjectile&&); \
	NO_API AWeaponTypesProjectile(const AWeaponTypesProjectile&); \
public:


#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponTypesProjectile(AWeaponTypesProjectile&&); \
	NO_API AWeaponTypesProjectile(const AWeaponTypesProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponTypesProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponTypesProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponTypesProjectile)


#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_12_PROLOG
#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_SPARSE_DATA \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_RPC_WRAPPERS \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_INCLASS \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_SPARSE_DATA \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONTYPES_API UClass* StaticClass<class AWeaponTypesProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeaponTypes_Source_WeaponTypes_WeaponTypesProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
