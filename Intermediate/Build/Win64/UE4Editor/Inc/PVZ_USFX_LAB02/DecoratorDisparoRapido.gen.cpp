// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/DecoratorDisparoRapido.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoratorDisparoRapido() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ADecoratorDisparoRapido_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ADecoratorDisparoRapido();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlantDecorator();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void ADecoratorDisparoRapido::StaticRegisterNativesADecoratorDisparoRapido()
	{
	}
	UClass* Z_Construct_UClass_ADecoratorDisparoRapido_NoRegister()
	{
		return ADecoratorDisparoRapido::StaticClass();
	}
	struct Z_Construct_UClass_ADecoratorDisparoRapido_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecoratorDisparoRapido_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlantDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecoratorDisparoRapido_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DecoratorDisparoRapido.h" },
		{ "ModuleRelativePath", "DecoratorDisparoRapido.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecoratorDisparoRapido_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecoratorDisparoRapido>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecoratorDisparoRapido_Statics::ClassParams = {
		&ADecoratorDisparoRapido::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADecoratorDisparoRapido_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecoratorDisparoRapido_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecoratorDisparoRapido()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecoratorDisparoRapido_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecoratorDisparoRapido, 3870709015);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ADecoratorDisparoRapido>()
	{
		return ADecoratorDisparoRapido::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecoratorDisparoRapido(Z_Construct_UClass_ADecoratorDisparoRapido, &ADecoratorDisparoRapido::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ADecoratorDisparoRapido"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecoratorDisparoRapido);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
