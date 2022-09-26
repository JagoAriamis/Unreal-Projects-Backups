// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppPractice/Third_Person_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThird_Person_Character() {}
// Cross Module References
	CPPPRACTICE_API UClass* Z_Construct_UClass_AThird_Person_Character_NoRegister();
	CPPPRACTICE_API UClass* Z_Construct_UClass_AThird_Person_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CppPractice();
// End Cross Module References
	void AThird_Person_Character::StaticRegisterNativesAThird_Person_Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThird_Person_Character);
	UClass* Z_Construct_UClass_AThird_Person_Character_NoRegister()
	{
		return AThird_Person_Character::StaticClass();
	}
	struct Z_Construct_UClass_AThird_Person_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThird_Person_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CppPractice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThird_Person_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Third_Person_Character.h" },
		{ "ModuleRelativePath", "Third_Person_Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThird_Person_Character_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Third_Person_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThird_Person_Character_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThird_Person_Character, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_AThird_Person_Character_Statics::NewProp_moveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThird_Person_Character_Statics::NewProp_moveSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThird_Person_Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThird_Person_Character_Statics::NewProp_moveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThird_Person_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThird_Person_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThird_Person_Character_Statics::ClassParams = {
		&AThird_Person_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThird_Person_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThird_Person_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThird_Person_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThird_Person_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThird_Person_Character()
	{
		if (!Z_Registration_Info_UClass_AThird_Person_Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThird_Person_Character.OuterSingleton, Z_Construct_UClass_AThird_Person_Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThird_Person_Character.OuterSingleton;
	}
	template<> CPPPRACTICE_API UClass* StaticClass<AThird_Person_Character>()
	{
		return AThird_Person_Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThird_Person_Character);
	struct Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_Third_Person_Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_Third_Person_Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThird_Person_Character, AThird_Person_Character::StaticClass, TEXT("AThird_Person_Character"), &Z_Registration_Info_UClass_AThird_Person_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThird_Person_Character), 917255812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_Third_Person_Character_h_109527917(TEXT("/Script/CppPractice"),
		Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_Third_Person_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_Third_Person_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
