// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/DialogueSystem/DialogueTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueTrigger() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_UDialogueTrigger_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_UDialogueTrigger();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_UDialogueAsset_NoRegister();
// End Cross Module References
	void UDialogueTrigger::StaticRegisterNativesUDialogueTrigger()
	{
	}
	UClass* Z_Construct_UClass_UDialogueTrigger_NoRegister()
	{
		return UDialogueTrigger::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DialogueSystem/DialogueTrigger.h" },
		{ "ModuleRelativePath", "DialogueSystem/DialogueTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueTrigger_Statics::NewProp_Dialogue_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueSystem/DialogueTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueTrigger_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueTrigger, Dialogue), Z_Construct_UClass_UDialogueAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueTrigger_Statics::NewProp_Dialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueTrigger_Statics::NewProp_Dialogue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueTrigger_Statics::NewProp_Dialogue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueTrigger_Statics::ClassParams = {
		&UDialogueTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueTrigger_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueTrigger, 4022075173);
	template<> FINDINGHOOMAN_API UClass* StaticClass<UDialogueTrigger>()
	{
		return UDialogueTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueTrigger(Z_Construct_UClass_UDialogueTrigger, &UDialogueTrigger::StaticClass, TEXT("/Script/FindingHooman"), TEXT("UDialogueTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
