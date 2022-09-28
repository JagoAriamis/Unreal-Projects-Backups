// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Third_Person_Game/Third_Person_GameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThird_Person_GameGameMode() {}
// Cross Module References
	THIRD_PERSON_GAME_API UClass* Z_Construct_UClass_AThird_Person_GameGameMode_NoRegister();
	THIRD_PERSON_GAME_API UClass* Z_Construct_UClass_AThird_Person_GameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Third_Person_Game();
// End Cross Module References
	void AThird_Person_GameGameMode::StaticRegisterNativesAThird_Person_GameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThird_Person_GameGameMode);
	UClass* Z_Construct_UClass_AThird_Person_GameGameMode_NoRegister()
	{
		return AThird_Person_GameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AThird_Person_GameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThird_Person_GameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Third_Person_Game,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThird_Person_GameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Third_Person_GameGameMode.h" },
		{ "ModuleRelativePath", "Third_Person_GameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThird_Person_GameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThird_Person_GameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThird_Person_GameGameMode_Statics::ClassParams = {
		&AThird_Person_GameGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AThird_Person_GameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThird_Person_GameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThird_Person_GameGameMode()
	{
		if (!Z_Registration_Info_UClass_AThird_Person_GameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThird_Person_GameGameMode.OuterSingleton, Z_Construct_UClass_AThird_Person_GameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThird_Person_GameGameMode.OuterSingleton;
	}
	template<> THIRD_PERSON_GAME_API UClass* StaticClass<AThird_Person_GameGameMode>()
	{
		return AThird_Person_GameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThird_Person_GameGameMode);
	struct Z_CompiledInDeferFile_FID_Third_Person_Game_Source_Third_Person_Game_Third_Person_GameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Third_Person_Game_Source_Third_Person_Game_Third_Person_GameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThird_Person_GameGameMode, AThird_Person_GameGameMode::StaticClass, TEXT("AThird_Person_GameGameMode"), &Z_Registration_Info_UClass_AThird_Person_GameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThird_Person_GameGameMode), 394460437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Third_Person_Game_Source_Third_Person_Game_Third_Person_GameGameMode_h_3842267835(TEXT("/Script/Third_Person_Game"),
		Z_CompiledInDeferFile_FID_Third_Person_Game_Source_Third_Person_Game_Third_Person_GameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Third_Person_Game_Source_Third_Person_Game_Third_Person_GameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
