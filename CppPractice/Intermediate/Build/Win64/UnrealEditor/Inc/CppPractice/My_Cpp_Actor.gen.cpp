// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppPractice/My_Cpp_Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy_Cpp_Actor() {}
// Cross Module References
	CPPPRACTICE_API UClass* Z_Construct_UClass_AMy_Cpp_Actor_NoRegister();
	CPPPRACTICE_API UClass* Z_Construct_UClass_AMy_Cpp_Actor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CppPractice();
// End Cross Module References
	DEFINE_FUNCTION(AMy_Cpp_Actor::execCalculateValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateValues();
		P_NATIVE_END;
	}
	void AMy_Cpp_Actor::StaticRegisterNativesAMy_Cpp_Actor()
	{
		UClass* Class = AMy_Cpp_Actor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateValues", &AMy_Cpp_Actor::execCalculateValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMy_Cpp_Actor_CalculateValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMy_Cpp_Actor_CalculateValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "My_Cpp_Actor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMy_Cpp_Actor_CalculateValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMy_Cpp_Actor, nullptr, "CalculateValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMy_Cpp_Actor_CalculateValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMy_Cpp_Actor_CalculateValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMy_Cpp_Actor_CalculateValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMy_Cpp_Actor_CalculateValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMy_Cpp_Actor);
	UClass* Z_Construct_UClass_AMy_Cpp_Actor_NoRegister()
	{
		return AMy_Cpp_Actor::StaticClass();
	}
	struct Z_Construct_UClass_AMy_Cpp_Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalDamage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTimeInSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTimeInSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagePerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagePerSecond;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMy_Cpp_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CppPractice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMy_Cpp_Actor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMy_Cpp_Actor_CalculateValues, "CalculateValues" }, // 92138736
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMy_Cpp_Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "My_Cpp_Actor.h" },
		{ "ModuleRelativePath", "My_Cpp_Actor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_TotalDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "// The total amount of damage the actor can deal. Editable and can be read and written from Blueprints\n" },
		{ "ModuleRelativePath", "My_Cpp_Actor.h" },
		{ "ToolTip", "The total amount of damage the actor can deal. Editable and can be read and written from Blueprints" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMy_Cpp_Actor, TotalDamage), METADATA_PARAMS(Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_TotalDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_TotalDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_DamageTimeInSeconds_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "// The amount of time that damage is dealt over. Editable and can be read and written from Blueprints\n" },
		{ "ModuleRelativePath", "My_Cpp_Actor.h" },
		{ "ToolTip", "The amount of time that damage is dealt over. Editable and can be read and written from Blueprints" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_DamageTimeInSeconds = { "DamageTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMy_Cpp_Actor, DamageTimeInSeconds), METADATA_PARAMS(Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_DamageTimeInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_DamageTimeInSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_DamagePerSecond_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "// The amount of damage the actor can deal per second. Readable but unmodifiable by Blueprints.\n// Transient = property is not saved or loaded from disk. It is a derived, non-persistent value, so there's no reason to store it\n" },
		{ "ModuleRelativePath", "My_Cpp_Actor.h" },
		{ "ToolTip", "The amount of damage the actor can deal per second. Readable but unmodifiable by Blueprints.\nTransient = property is not saved or loaded from disk. It is a derived, non-persistent value, so there's no reason to store it" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_DamagePerSecond = { "DamagePerSecond", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMy_Cpp_Actor, DamagePerSecond), METADATA_PARAMS(Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_DamagePerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_DamagePerSecond_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMy_Cpp_Actor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_TotalDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_DamageTimeInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMy_Cpp_Actor_Statics::NewProp_DamagePerSecond,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMy_Cpp_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMy_Cpp_Actor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMy_Cpp_Actor_Statics::ClassParams = {
		&AMy_Cpp_Actor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMy_Cpp_Actor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMy_Cpp_Actor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMy_Cpp_Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMy_Cpp_Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMy_Cpp_Actor()
	{
		if (!Z_Registration_Info_UClass_AMy_Cpp_Actor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMy_Cpp_Actor.OuterSingleton, Z_Construct_UClass_AMy_Cpp_Actor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMy_Cpp_Actor.OuterSingleton;
	}
	template<> CPPPRACTICE_API UClass* StaticClass<AMy_Cpp_Actor>()
	{
		return AMy_Cpp_Actor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMy_Cpp_Actor);
	struct Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_My_Cpp_Actor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_My_Cpp_Actor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMy_Cpp_Actor, AMy_Cpp_Actor::StaticClass, TEXT("AMy_Cpp_Actor"), &Z_Registration_Info_UClass_AMy_Cpp_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMy_Cpp_Actor), 159784894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_My_Cpp_Actor_h_2493290633(TEXT("/Script/CppPractice"),
		Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_My_Cpp_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_My_Cpp_Actor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
