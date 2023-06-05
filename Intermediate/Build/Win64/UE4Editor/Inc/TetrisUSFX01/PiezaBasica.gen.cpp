// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PiezaBasica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePiezaBasica() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaBasica_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaBasica();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UInterface_piezas_NoRegister();
// End Cross Module References
	void APiezaBasica::StaticRegisterNativesAPiezaBasica()
	{
	}
	UClass* Z_Construct_UClass_APiezaBasica_NoRegister()
	{
		return APiezaBasica::StaticClass();
	}
	struct Z_Construct_UClass_APiezaBasica_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APiezaBasica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiezaBasica_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PiezaBasica.h" },
		{ "ModuleRelativePath", "PiezaBasica.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiezaBasica_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PiezaBasica.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APiezaBasica_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APiezaBasica, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APiezaBasica_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APiezaBasica_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APiezaBasica_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiezaBasica_Statics::NewProp_Colors_MetaData[] = {
		{ "Category", "PiezaBasica" },
		{ "ModuleRelativePath", "PiezaBasica.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APiezaBasica_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APiezaBasica, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APiezaBasica_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APiezaBasica_Statics::NewProp_Colors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APiezaBasica_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiezaBasica_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiezaBasica_Statics::NewProp_Colors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiezaBasica_Statics::NewProp_Colors,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APiezaBasica_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_piezas_NoRegister, (int32)VTABLE_OFFSET(APiezaBasica, IInterface_piezas), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APiezaBasica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APiezaBasica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APiezaBasica_Statics::ClassParams = {
		&APiezaBasica::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APiezaBasica_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APiezaBasica_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APiezaBasica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APiezaBasica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APiezaBasica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APiezaBasica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APiezaBasica, 3230945633);
	template<> TETRISUSFX01_API UClass* StaticClass<APiezaBasica>()
	{
		return APiezaBasica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APiezaBasica(Z_Construct_UClass_APiezaBasica, &APiezaBasica::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("APiezaBasica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APiezaBasica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
