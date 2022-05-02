// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/HatMetagame/SquirrelActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSquirrelActor() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_ASquirrelActor_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_ASquirrelActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
// End Cross Module References
	void ASquirrelActor::StaticRegisterNativesASquirrelActor()
	{
	}
	UClass* Z_Construct_UClass_ASquirrelActor_NoRegister()
	{
		return ASquirrelActor::StaticClass();
	}
	struct Z_Construct_UClass_ASquirrelActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASquirrelActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquirrelActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HatMetagame/SquirrelActor.h" },
		{ "ModuleRelativePath", "HatMetagame/SquirrelActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASquirrelActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASquirrelActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASquirrelActor_Statics::ClassParams = {
		&ASquirrelActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASquirrelActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASquirrelActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASquirrelActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASquirrelActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASquirrelActor, 3262908820);
	template<> FINDINGHOOMAN_API UClass* StaticClass<ASquirrelActor>()
	{
		return ASquirrelActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASquirrelActor(Z_Construct_UClass_ASquirrelActor, &ASquirrelActor::StaticClass, TEXT("/Script/FindingHooman"), TEXT("ASquirrelActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASquirrelActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
