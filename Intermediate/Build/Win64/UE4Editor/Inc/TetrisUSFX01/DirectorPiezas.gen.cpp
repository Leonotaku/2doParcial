// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/DirectorPiezas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorPiezas() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADirectorPiezas_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADirectorPiezas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void ADirectorPiezas::StaticRegisterNativesADirectorPiezas()
	{
	}
	UClass* Z_Construct_UClass_ADirectorPiezas_NoRegister()
	{
		return ADirectorPiezas::StaticClass();
	}
	struct Z_Construct_UClass_ADirectorPiezas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirectorPiezas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorPiezas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DirectorPiezas.h" },
		{ "ModuleRelativePath", "DirectorPiezas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirectorPiezas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorPiezas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADirectorPiezas_Statics::ClassParams = {
		&ADirectorPiezas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADirectorPiezas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorPiezas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADirectorPiezas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADirectorPiezas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADirectorPiezas, 2588930323);
	template<> TETRISUSFX01_API UClass* StaticClass<ADirectorPiezas>()
	{
		return ADirectorPiezas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADirectorPiezas(Z_Construct_UClass_ADirectorPiezas, &ADirectorPiezas::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ADirectorPiezas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorPiezas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
