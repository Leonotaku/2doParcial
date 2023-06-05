// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EstadoPasado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoPasado() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoPasado_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoPasado();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstadoEscenario_NoRegister();
// End Cross Module References
	void AEstadoPasado::StaticRegisterNativesAEstadoPasado()
	{
	}
	UClass* Z_Construct_UClass_AEstadoPasado_NoRegister()
	{
		return AEstadoPasado::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoPasado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoPasado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoPasado_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoPasado.h" },
		{ "ModuleRelativePath", "EstadoPasado.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoPasado_Statics::NewProp_Escenario_MetaData[] = {
		{ "ModuleRelativePath", "EstadoPasado.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEstadoPasado_Statics::NewProp_Escenario = { "Escenario", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstadoPasado, Escenario), Z_Construct_UClass_AEscenario_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEstadoPasado_Statics::NewProp_Escenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoPasado_Statics::NewProp_Escenario_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstadoPasado_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstadoPasado_Statics::NewProp_Escenario,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoPasado_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadoEscenario_NoRegister, (int32)VTABLE_OFFSET(AEstadoPasado, IEstadoEscenario), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoPasado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoPasado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoPasado_Statics::ClassParams = {
		&AEstadoPasado::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstadoPasado_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoPasado_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoPasado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoPasado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoPasado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoPasado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoPasado, 435798215);
	template<> TETRISUSFX01_API UClass* StaticClass<AEstadoPasado>()
	{
		return AEstadoPasado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoPasado(Z_Construct_UClass_AEstadoPasado, &AEstadoPasado::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEstadoPasado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoPasado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
