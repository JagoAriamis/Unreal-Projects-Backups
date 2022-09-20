// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppPractice/FieldOfView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldOfView() {}
// Cross Module References
	CPPPRACTICE_API UClass* Z_Construct_UClass_UFieldOfView_NoRegister();
	CPPPRACTICE_API UClass* Z_Construct_UClass_UFieldOfView();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CppPractice();
// End Cross Module References
	DEFINE_FUNCTION(UFieldOfView::execFindTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindTargets();
		P_NATIVE_END;
	}
	void UFieldOfView::StaticRegisterNativesUFieldOfView()
	{
		UClass* Class = UFieldOfView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindTargets", &UFieldOfView::execFindTargets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFieldOfView_FindTargets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldOfView_FindTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "FieldOfView" },
		{ "ModuleRelativePath", "FieldOfView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldOfView_FindTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldOfView, nullptr, "FindTargets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldOfView_FindTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldOfView_FindTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldOfView_FindTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldOfView_FindTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldOfView);
	UClass* Z_Construct_UClass_UFieldOfView_NoRegister()
	{
		return UFieldOfView::StaticClass();
	}
	struct Z_Construct_UClass_UFieldOfView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_viewAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_viewAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_viewRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_viewRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFieldOfView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CppPractice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFieldOfView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFieldOfView_FindTargets, "FindTargets" }, // 2309761781
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldOfView_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FieldOfView.h" },
		{ "ModuleRelativePath", "FieldOfView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldOfView_Statics::NewProp_viewAngle_MetaData[] = {
		{ "Category", "FieldOfView" },
		{ "ModuleRelativePath", "FieldOfView.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfView_Statics::NewProp_viewAngle = { "viewAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFieldOfView, viewAngle), METADATA_PARAMS(Z_Construct_UClass_UFieldOfView_Statics::NewProp_viewAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfView_Statics::NewProp_viewAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldOfView_Statics::NewProp_viewRadius_MetaData[] = {
		{ "Category", "FieldOfView" },
		{ "ModuleRelativePath", "FieldOfView.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfView_Statics::NewProp_viewRadius = { "viewRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFieldOfView, viewRadius), METADATA_PARAMS(Z_Construct_UClass_UFieldOfView_Statics::NewProp_viewRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfView_Statics::NewProp_viewRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFieldOfView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfView_Statics::NewProp_viewAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfView_Statics::NewProp_viewRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFieldOfView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldOfView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldOfView_Statics::ClassParams = {
		&UFieldOfView::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFieldOfView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfView_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFieldOfView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFieldOfView()
	{
		if (!Z_Registration_Info_UClass_UFieldOfView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldOfView.OuterSingleton, Z_Construct_UClass_UFieldOfView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFieldOfView.OuterSingleton;
	}
	template<> CPPPRACTICE_API UClass* StaticClass<UFieldOfView>()
	{
		return UFieldOfView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldOfView);
	struct Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_FieldOfView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_FieldOfView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFieldOfView, UFieldOfView::StaticClass, TEXT("UFieldOfView"), &Z_Registration_Info_UClass_UFieldOfView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldOfView), 83760894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_FieldOfView_h_2090652515(TEXT("/Script/CppPractice"),
		Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_FieldOfView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppPractice_Source_CppPractice_FieldOfView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
