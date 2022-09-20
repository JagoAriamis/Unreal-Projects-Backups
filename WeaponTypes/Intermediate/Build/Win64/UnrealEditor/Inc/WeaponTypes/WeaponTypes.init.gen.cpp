// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponTypes_init() {}
	WEAPONTYPES_API UFunction* Z_Construct_UDelegateFunction_WeaponTypes_OnPickUp__DelegateSignature();
	WEAPONTYPES_API UFunction* Z_Construct_UDelegateFunction_WeaponTypes_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WeaponTypes;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WeaponTypes()
	{
		if (!Z_Registration_Info_UPackage__Script_WeaponTypes.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponTypes_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponTypes_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WeaponTypes",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x785ECF9C,
				0x10CF523D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WeaponTypes.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WeaponTypes.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WeaponTypes(Z_Construct_UPackage__Script_WeaponTypes, TEXT("/Script/WeaponTypes"), Z_Registration_Info_UPackage__Script_WeaponTypes, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x785ECF9C, 0x10CF523D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
