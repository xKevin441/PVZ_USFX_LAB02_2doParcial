// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/DecoratorDisparoDoble.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoratorDisparoDoble() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ADecoratorDisparoDoble_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ADecoratorDisparoDoble();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlantDecorator();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void ADecoratorDisparoDoble::StaticRegisterNativesADecoratorDisparoDoble()
	{
	}
	UClass* Z_Construct_UClass_ADecoratorDisparoDoble_NoRegister()
	{
		return ADecoratorDisparoDoble::StaticClass();
	}
	struct Z_Construct_UClass_ADecoratorDisparoDoble_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecoratorDisparoDoble_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlantDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecoratorDisparoDoble_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DecoratorDisparoDoble.h" },
		{ "ModuleRelativePath", "DecoratorDisparoDoble.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecoratorDisparoDoble_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecoratorDisparoDoble>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecoratorDisparoDoble_Statics::ClassParams = {
		&ADecoratorDisparoDoble::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADecoratorDisparoDoble_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecoratorDisparoDoble_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecoratorDisparoDoble()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecoratorDisparoDoble_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecoratorDisparoDoble, 1725107974);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ADecoratorDisparoDoble>()
	{
		return ADecoratorDisparoDoble::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecoratorDisparoDoble(Z_Construct_UClass_ADecoratorDisparoDoble, &ADecoratorDisparoDoble::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ADecoratorDisparoDoble"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecoratorDisparoDoble);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
