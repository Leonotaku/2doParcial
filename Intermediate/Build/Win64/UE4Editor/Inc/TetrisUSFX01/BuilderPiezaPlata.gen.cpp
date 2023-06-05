// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BuilderPiezaPlata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderPiezaPlata() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuilderPiezaPlata_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuilderPiezaPlata();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaBasica_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBuilderPiezas_NoRegister();
// End Cross Module References
	void ABuilderPiezaPlata::StaticRegisterNativesABuilderPiezaPlata()
	{
	}
	UClass* Z_Construct_UClass_ABuilderPiezaPlata_NoRegister()
	{
		return ABuilderPiezaPlata::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderPiezaPlata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PiezaEspecial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PiezaEspecial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilderPiezaPlata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderPiezaPlata_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuilderPiezaPlata.h" },
		{ "ModuleRelativePath", "BuilderPiezaPlata.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderPiezaPlata_Statics::NewProp_PiezaEspecial_MetaData[] = {
		{ "Comment", "//The Lodging Actor\n" },
		{ "ModuleRelativePath", "BuilderPiezaPlata.h" },
		{ "ToolTip", "The Lodging Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilderPiezaPlata_Statics::NewProp_PiezaEspecial = { "PiezaEspecial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuilderPiezaPlata, PiezaEspecial), Z_Construct_UClass_APiezaBasica_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilderPiezaPlata_Statics::NewProp_PiezaEspecial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderPiezaPlata_Statics::NewProp_PiezaEspecial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilderPiezaPlata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilderPiezaPlata_Statics::NewProp_PiezaEspecial,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilderPiezaPlata_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderPiezas_NoRegister, (int32)VTABLE_OFFSET(ABuilderPiezaPlata, IBuilderPiezas), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderPiezaPlata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderPiezaPlata>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderPiezaPlata_Statics::ClassParams = {
		&ABuilderPiezaPlata::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuilderPiezaPlata_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderPiezaPlata_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilderPiezaPlata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderPiezaPlata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderPiezaPlata()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderPiezaPlata_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderPiezaPlata, 664585884);
	template<> TETRISUSFX01_API UClass* StaticClass<ABuilderPiezaPlata>()
	{
		return ABuilderPiezaPlata::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderPiezaPlata(Z_Construct_UClass_ABuilderPiezaPlata, &ABuilderPiezaPlata::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABuilderPiezaPlata"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderPiezaPlata);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
