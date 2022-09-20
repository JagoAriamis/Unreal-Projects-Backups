// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppPractice/My_Cpp_Test_Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy_Cpp_Test_Actor() {}
// Cross Module References
	CPPPRACTICE_API UClass* Z_Construct_UClass_AMy_Cpp_Test_Actor_NoRegister();
	CPPPRACTICE_API UClass* Z_Construct_UClass_AMy_Cpp_Test_Actor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CppPractice();
// End Cross Module References
	void AMy_Cpp_Test_Actor::StaticRegisterNativesAMy_Cpp_Test_Actor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMy_Cpp_Test_Actor);
	UClass* Z_Construct_UClass_AMy_Cpp_Test_Actor_NoRegister()
	{
		return AMy_Cpp_Test_Actor::StaticClass();
	}
	struct Z_Construct_UClass_AMy_Cpp_Test_Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMy_Cpp_Test_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CppPractice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMy_Cpp_Test_Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "My_Cpp_Test_Actor.h" },
		{ "ModuleRelativePath", "My_Cpp_Test_Actor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMy_Cpp_Test_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMy_Cpp_Test_Actor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMy_Cpp_Test_Actor_Statics::ClassParams = {
		&AMy_Cpp_Test_Actor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMy_Cpp_Test_Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMy_Cpp_Test_Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMy_Cpp_Test_Actor()
	{
		if (!Z_Registration_Info_UClass_AMy_Cpp_Test_Actor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMy_Cpp_Test_Actor.OuterSingleton, Z_Construct_UClass_AMy_Cpp_Test_Actor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMy_Cpp_Test_Actor.OuterSingleton;
	}
	template<> CPPPRACTICE_API UClass* StaticClass<AMy_Cpp_Test_Actor>()
	{
		return AMy_Cpp_Test_Actor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMy_Cpp_Test_Actor);
	struct Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_My_Cpp_Test_Actor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_My_Cpp_Test_Actor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMy_Cpp_Test_Actor, AMy_Cpp_Test_Actor::StaticClass, TEXT("AMy_Cpp_Test_Actor"), &Z_Registration_Info_UClass_AMy_Cpp_Test_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMy_Cpp_Test_Actor), 2782852487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_My_Cpp_Test_Actor_h_2138424728(TEXT("/Script/CppPractice"),
		Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_My_Cpp_Test_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_My_Cpp_Test_Actor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
