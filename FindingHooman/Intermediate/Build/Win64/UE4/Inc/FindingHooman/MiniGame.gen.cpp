// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/MiniGames/MiniGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGame() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AMiniGame_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AMiniGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_ADoge_NoRegister();
// End Cross Module References
	void AMiniGame::StaticRegisterNativesAMiniGame()
	{
	}
	UClass* Z_Construct_UClass_AMiniGame_NoRegister()
	{
		return AMiniGame::StaticClass();
	}
	struct Z_Construct_UClass_AMiniGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_doge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skill_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_skill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_beginGame_MetaData[];
#endif
		static void NewProp_beginGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_beginGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_won_MetaData[];
#endif
		static void NewProp_won_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_won;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMiniGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MiniGames/MiniGame.h" },
		{ "ModuleRelativePath", "MiniGames/MiniGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniGame_Statics::NewProp_doge_MetaData[] = {
		{ "Category", "MiniGame" },
		{ "ModuleRelativePath", "MiniGames/MiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiniGame_Statics::NewProp_doge = { "doge", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMiniGame, doge), Z_Construct_UClass_ADoge_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMiniGame_Statics::NewProp_doge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGame_Statics::NewProp_doge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniGame_Statics::NewProp_skill_MetaData[] = {
		{ "Category", "MiniGame" },
		{ "ModuleRelativePath", "MiniGames/MiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMiniGame_Statics::NewProp_skill = { "skill", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMiniGame, skill), METADATA_PARAMS(Z_Construct_UClass_AMiniGame_Statics::NewProp_skill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGame_Statics::NewProp_skill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniGame_Statics::NewProp_beginGame_MetaData[] = {
		{ "Category", "MiniGame" },
		{ "ModuleRelativePath", "MiniGames/MiniGame.h" },
	};
#endif
	void Z_Construct_UClass_AMiniGame_Statics::NewProp_beginGame_SetBit(void* Obj)
	{
		((AMiniGame*)Obj)->beginGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMiniGame_Statics::NewProp_beginGame = { "beginGame", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMiniGame), &Z_Construct_UClass_AMiniGame_Statics::NewProp_beginGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMiniGame_Statics::NewProp_beginGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGame_Statics::NewProp_beginGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniGame_Statics::NewProp_won_MetaData[] = {
		{ "Category", "MiniGame" },
		{ "ModuleRelativePath", "MiniGames/MiniGame.h" },
	};
#endif
	void Z_Construct_UClass_AMiniGame_Statics::NewProp_won_SetBit(void* Obj)
	{
		((AMiniGame*)Obj)->won = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMiniGame_Statics::NewProp_won = { "won", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMiniGame), &Z_Construct_UClass_AMiniGame_Statics::NewProp_won_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMiniGame_Statics::NewProp_won_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGame_Statics::NewProp_won_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMiniGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGame_Statics::NewProp_doge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGame_Statics::NewProp_skill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGame_Statics::NewProp_beginGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiniGame_Statics::NewProp_won,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMiniGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiniGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMiniGame_Statics::ClassParams = {
		&AMiniGame::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMiniGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGame_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMiniGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMiniGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMiniGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMiniGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMiniGame, 1271286698);
	template<> FINDINGHOOMAN_API UClass* StaticClass<AMiniGame>()
	{
		return AMiniGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMiniGame(Z_Construct_UClass_AMiniGame, &AMiniGame::StaticClass, TEXT("/Script/FindingHooman"), TEXT("AMiniGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMiniGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
