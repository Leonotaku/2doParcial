// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Interface_piezas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_piezas() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UInterface_piezas_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UInterface_piezas();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UInterface_piezas::StaticRegisterNativesUInterface_piezas()
	{
	}
	UClass* Z_Construct_UClass_UInterface_piezas_NoRegister()
	{
		return UInterface_piezas::StaticClass();
	}
	struct Z_Construct_UClass_UInterface_piezas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterface_piezas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterface_piezas_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface_piezas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterface_piezas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_piezas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterface_piezas_Statics::ClassParams = {
		&UInterface_piezas::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterface_piezas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_piezas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterface_piezas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterface_piezas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterface_piezas, 4226387920);
	template<> TETRISUSFX01_API UClass* StaticClass<UInterface_piezas>()
	{
		return UInterface_piezas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterface_piezas(Z_Construct_UClass_UInterface_piezas, &UInterface_piezas::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UInterface_piezas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_piezas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
