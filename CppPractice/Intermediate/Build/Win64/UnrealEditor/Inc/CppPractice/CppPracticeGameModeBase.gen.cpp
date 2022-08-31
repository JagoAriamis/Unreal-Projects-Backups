// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppPractice/CppPracticeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppPracticeGameModeBase() {}
// Cross Module References
	CPPPRACTICE_API UClass* Z_Construct_UClass_ACppPracticeGameModeBase_NoRegister();
	CPPPRACTICE_API UClass* Z_Construct_UClass_ACppPracticeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CppPractice();
// End Cross Module References
	void ACppPracticeGameModeBase::StaticRegisterNativesACppPracticeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACppPracticeGameModeBase);
	UClass* Z_Construct_UClass_ACppPracticeGameModeBase_NoRegister()
	{
		return ACppPracticeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACppPracticeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACppPracticeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CppPractice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACppPracticeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Can specify game rules in this game base file\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CppPracticeGameModeBase.h" },
		{ "ModuleRelativePath", "CppPracticeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Can specify game rules in this game base file" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACppPracticeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACppPracticeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACppPracticeGameModeBase_Statics::ClassParams = {
		&ACppPracticeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACppPracticeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACppPracticeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACppPracticeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACppPracticeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACppPracticeGameModeBase.OuterSingleton, Z_Construct_UClass_ACppPracticeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACppPracticeGameModeBase.OuterSingleton;
	}
	template<> CPPPRACTICE_API UClass* StaticClass<ACppPracticeGameModeBase>()
	{
		return ACppPracticeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACppPracticeGameModeBase);
	struct Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_CppPracticeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_CppPracticeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACppPracticeGameModeBase, ACppPracticeGameModeBase::StaticClass, TEXT("ACppPracticeGameModeBase"), &Z_Registration_Info_UClass_ACppPracticeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACppPracticeGameModeBase), 434798971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_CppPracticeGameModeBase_h_3228584155(TEXT("/Script/CppPractice"),
		Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_CppPracticeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_CppPracticeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
