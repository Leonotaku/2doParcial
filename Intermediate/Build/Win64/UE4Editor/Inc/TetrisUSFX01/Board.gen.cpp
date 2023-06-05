// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Board.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoard() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABoard_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABoard();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaBasica_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuilderPiezaDorada_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuilderPiezaBronze_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuilderPiezaPlata_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABuilderPiezaDiamante_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADirectorPiezas_NoRegister();
// End Cross Module References
	void ABoard::StaticRegisterNativesABoard()
	{
	}
	UClass* Z_Construct_UClass_ABoard_NoRegister()
	{
		return ABoard::StaticClass();
	}
	struct Z_Construct_UClass_ABoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPiece_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPiece;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escenario;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuilderPiezaDorada_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuilderPiezaDorada;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuilderPiezaBronze_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuilderPiezaBronze;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuilderPiezaPlata_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuilderPiezaPlata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuilderPiezaDiamante_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuilderPiezaDiamante;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectorPiezas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirectorPiezas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Board.h" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_Instance_MetaData[] = {
		{ "Comment", "//La instancia de esta clase\n" },
		{ "ModuleRelativePath", "Board.h" },
		{ "ToolTip", "La instancia de esta clase" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, Instance), Z_Construct_UClass_ABoard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_Instance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece_MetaData[] = {
		{ "Comment", "//UPROPERTY()\n//APiece* CurrentPiece;\n" },
		{ "ModuleRelativePath", "Board.h" },
		{ "ToolTip", "UPROPERTY()\nAPiece* CurrentPiece;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece = { "CurrentPiece", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, CurrentPiece), Z_Construct_UClass_APiezaBasica_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_Escenario_MetaData[] = {
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_Escenario = { "Escenario", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, Escenario), Z_Construct_UClass_AEscenario_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_Escenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_Escenario_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_Escen_MetaData[] = {
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_Escen = { "Escen", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, Escen), Z_Construct_UClass_AEscenario_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_Escen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_Escen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaDorada_MetaData[] = {
		{ "Category", "Main" },
		{ "Comment", "//El builder de las piezas\n" },
		{ "ModuleRelativePath", "Board.h" },
		{ "ToolTip", "El builder de las piezas" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaDorada = { "BuilderPiezaDorada", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, BuilderPiezaDorada), Z_Construct_UClass_ABuilderPiezaDorada_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaDorada_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaDorada_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaBronze_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaBronze = { "BuilderPiezaBronze", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, BuilderPiezaBronze), Z_Construct_UClass_ABuilderPiezaBronze_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaBronze_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaBronze_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaPlata_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaPlata = { "BuilderPiezaPlata", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, BuilderPiezaPlata), Z_Construct_UClass_ABuilderPiezaPlata_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaPlata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaPlata_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaDiamante_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaDiamante = { "BuilderPiezaDiamante", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, BuilderPiezaDiamante), Z_Construct_UClass_ABuilderPiezaDiamante_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaDiamante_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaDiamante_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_DirectorPiezas_MetaData[] = {
		{ "Category", "Main" },
		{ "Comment", "//El director del builder\n" },
		{ "ModuleRelativePath", "Board.h" },
		{ "ToolTip", "El director del builder" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_DirectorPiezas = { "DirectorPiezas", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, DirectorPiezas), Z_Construct_UClass_ADirectorPiezas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_DirectorPiezas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_DirectorPiezas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_Escenario,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_Escen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaDorada,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaBronze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaPlata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_BuilderPiezaDiamante,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_DirectorPiezas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoard_Statics::ClassParams = {
		&ABoard::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoard, 3567177326);
	template<> TETRISUSFX01_API UClass* StaticClass<ABoard>()
	{
		return ABoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoard(Z_Construct_UClass_ABoard, &ABoard::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
