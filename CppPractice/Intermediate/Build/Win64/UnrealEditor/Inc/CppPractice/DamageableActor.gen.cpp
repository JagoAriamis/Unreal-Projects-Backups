// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppPractice/DamageableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageableActor() {}
// Cross Module References
	CPPPRACTICE_API UClass* Z_Construct_UClass_ADamageableActor_NoRegister();
	CPPPRACTICE_API UClass* Z_Construct_UClass_ADamageableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CppPractice();
// End Cross Module References
	static FName NAME_ADamageableActor_OnTakeDamage = FName(TEXT("OnTakeDamage"));
	void ADamageableActor::OnTakeDamage()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADamageableActor_OnTakeDamage),NULL);
	}
	void ADamageableActor::StaticRegisterNativesADamageableActor()
	{
	}
	struct Z_Construct_UFunction_ADamageableActor_OnTakeDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADamageableActor_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "Comment", "// No defintion is written for this property. It's just an event to be called in Blueprints\n" },
		{ "ModuleRelativePath", "DamageableActor.h" },
		{ "ToolTip", "No defintion is written for this property. It's just an event to be called in Blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADamageableActor_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADamageableActor, nullptr, "OnTakeDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADamageableActor_OnTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADamageableActor_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADamageableActor_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADamageableActor_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADamageableActor);
	UClass* Z_Construct_UClass_ADamageableActor_NoRegister()
	{
		return ADamageableActor::StaticClass();
	}
	struct Z_Construct_UClass_ADamageableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAttackable_MetaData[];
#endif
		static void NewProp_isAttackable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAttackable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADamageableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CppPractice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADamageableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADamageableActor_OnTakeDamage, "OnTakeDamage" }, // 29909697
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DamageableActor.h" },
		{ "ModuleRelativePath", "DamageableActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "DamageableActor.h" },
	};
#endif
	void Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable_SetBit(void* Obj)
	{
		((ADamageableActor*)Obj)->isAttackable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable = { "isAttackable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADamageableActor), &Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADamageableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamageableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADamageableActor_Statics::ClassParams = {
		&ADamageableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADamageableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADamageableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADamageableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADamageableActor()
	{
		if (!Z_Registration_Info_UClass_ADamageableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADamageableActor.OuterSingleton, Z_Construct_UClass_ADamageableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADamageableActor.OuterSingleton;
	}
	template<> CPPPRACTICE_API UClass* StaticClass<ADamageableActor>()
	{
		return ADamageableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADamageableActor);
	struct Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_DamageableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_DamageableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADamageableActor, ADamageableActor::StaticClass, TEXT("ADamageableActor"), &Z_Registration_Info_UClass_ADamageableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADamageableActor), 2176538471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_DamageableActor_h_3879573928(TEXT("/Script/CppPractice"),
		Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_DamageableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_DamageableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
