// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BuilderPiezaDiamante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderPiezaDiamante() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuilderPiezaDiamante_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuilderPiezaDiamante();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaBasica_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBuilderPiezas_NoRegister();
// End Cross Module References
	void ABuilderPiezaDiamante::StaticRegisterNativesABuilderPiezaDiamante()
	{
	}
	UClass* Z_Construct_UClass_ABuilderPiezaDiamante_NoRegister()
	{
		return ABuilderPiezaDiamante::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderPiezaDiamante_Statics
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
	UObject* (*const Z_Construct_UClass_ABuilderPiezaDiamante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderPiezaDiamante_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuilderPiezaDiamante.h" },
		{ "ModuleRelativePath", "BuilderPiezaDiamante.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderPiezaDiamante_Statics::NewProp_PiezaEspecial_MetaData[] = {
		{ "Comment", "//The Lodging Actor\n" },
		{ "ModuleRelativePath", "BuilderPiezaDiamante.h" },
		{ "ToolTip", "The Lodging Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilderPiezaDiamante_Statics::NewProp_PiezaEspecial = { "PiezaEspecial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuilderPiezaDiamante, PiezaEspecial), Z_Construct_UClass_APiezaBasica_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilderPiezaDiamante_Statics::NewProp_PiezaEspecial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderPiezaDiamante_Statics::NewProp_PiezaEspecial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilderPiezaDiamante_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilderPiezaDiamante_Statics::NewProp_PiezaEspecial,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilderPiezaDiamante_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderPiezas_NoRegister, (int32)VTABLE_OFFSET(ABuilderPiezaDiamante, IBuilderPiezas), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderPiezaDiamante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderPiezaDiamante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderPiezaDiamante_Statics::ClassParams = {
		&ABuilderPiezaDiamante::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuilderPiezaDiamante_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderPiezaDiamante_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilderPiezaDiamante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderPiezaDiamante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderPiezaDiamante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderPiezaDiamante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderPiezaDiamante, 1968653749);
	template<> TETRISUSFX01_API UClass* StaticClass<ABuilderPiezaDiamante>()
	{
		return ABuilderPiezaDiamante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderPiezaDiamante(Z_Construct_UClass_ABuilderPiezaDiamante, &ABuilderPiezaDiamante::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABuilderPiezaDiamante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderPiezaDiamante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
