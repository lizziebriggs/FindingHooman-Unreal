// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/DialogueSystem/DialogueManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueManager() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_UDialogueManager_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_UDialogueManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
// End Cross Module References
	void UDialogueManager::StaticRegisterNativesUDialogueManager()
	{
	}
	UClass* Z_Construct_UClass_UDialogueManager_NoRegister()
	{
		return UDialogueManager::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DialogueSystem/DialogueManager.h" },
		{ "ModuleRelativePath", "DialogueSystem/DialogueManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueManager_Statics::ClassParams = {
		&UDialogueManager::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueManager, 4101123069);
	template<> FINDINGHOOMAN_API UClass* StaticClass<UDialogueManager>()
	{
		return UDialogueManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueManager(Z_Construct_UClass_UDialogueManager, &UDialogueManager::StaticClass, TEXT("/Script/FindingHooman"), TEXT("UDialogueManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
