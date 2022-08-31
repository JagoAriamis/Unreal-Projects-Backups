// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMechanics/GameMechanicsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMechanicsGameMode() {}
// Cross Module References
	GAMEMECHANICS_API UClass* Z_Construct_UClass_AGameMechanicsGameMode_NoRegister();
	GAMEMECHANICS_API UClass* Z_Construct_UClass_AGameMechanicsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameMechanics();
// End Cross Module References
	void AGameMechanicsGameMode::StaticRegisterNativesAGameMechanicsGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameMechanicsGameMode);
	UClass* Z_Construct_UClass_AGameMechanicsGameMode_NoRegister()
	{
		return AGameMechanicsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameMechanicsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameMechanicsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameMechanics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMechanicsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMechanicsGameMode.h" },
		{ "ModuleRelativePath", "GameMechanicsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameMechanicsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameMechanicsGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameMechanicsGameMode_Statics::ClassParams = {
		&AGameMechanicsGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameMechanicsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMechanicsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameMechanicsGameMode()
	{
		if (!Z_Registration_Info_UClass_AGameMechanicsGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameMechanicsGameMode.OuterSingleton, Z_Construct_UClass_AGameMechanicsGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameMechanicsGameMode.OuterSingleton;
	}
	template<> GAMEMECHANICS_API UClass* StaticClass<AGameMechanicsGameMode>()
	{
		return AGameMechanicsGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameMechanicsGameMode);
	struct Z_CompiledInDeferFile_FID_GameMechanics_Source_GameMechanics_GameMechanicsGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMechanics_Source_GameMechanics_GameMechanicsGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameMechanicsGameMode, AGameMechanicsGameMode::StaticClass, TEXT("AGameMechanicsGameMode"), &Z_Registration_Info_UClass_AGameMechanicsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameMechanicsGameMode), 1883184319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMechanics_Source_GameMechanics_GameMechanicsGameMode_h_606695641(TEXT("/Script/GameMechanics"),
		Z_CompiledInDeferFile_FID_GameMechanics_Source_GameMechanics_GameMechanicsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMechanics_Source_GameMechanics_GameMechanicsGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
