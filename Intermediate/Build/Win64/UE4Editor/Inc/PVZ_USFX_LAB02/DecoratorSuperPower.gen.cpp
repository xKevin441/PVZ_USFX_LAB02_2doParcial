// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/DecoratorSuperPower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoratorSuperPower() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ADecoratorSuperPower_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ADecoratorSuperPower();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlantDecorator();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void ADecoratorSuperPower::StaticRegisterNativesADecoratorSuperPower()
	{
	}
	UClass* Z_Construct_UClass_ADecoratorSuperPower_NoRegister()
	{
		return ADecoratorSuperPower::StaticClass();
	}
	struct Z_Construct_UClass_ADecoratorSuperPower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecoratorSuperPower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlantDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecoratorSuperPower_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DecoratorSuperPower.h" },
		{ "ModuleRelativePath", "DecoratorSuperPower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecoratorSuperPower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecoratorSuperPower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecoratorSuperPower_Statics::ClassParams = {
		&ADecoratorSuperPower::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADecoratorSuperPower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecoratorSuperPower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecoratorSuperPower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecoratorSuperPower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecoratorSuperPower, 2801509428);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ADecoratorSuperPower>()
	{
		return ADecoratorSuperPower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecoratorSuperPower(Z_Construct_UClass_ADecoratorSuperPower, &ADecoratorSuperPower::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ADecoratorSuperPower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecoratorSuperPower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
