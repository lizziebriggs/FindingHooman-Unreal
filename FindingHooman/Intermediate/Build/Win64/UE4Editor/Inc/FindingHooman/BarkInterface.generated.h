// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINDINGHOOMAN_BarkInterface_generated_h
#error "BarkInterface.generated.h already included, missing '#pragma once' in BarkInterface.h"
#endif
#define FINDINGHOOMAN_BarkInterface_generated_h

#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_SPARSE_DATA
#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_RPC_WRAPPERS \
	virtual void BarkEvent_Implementation() {}; \
 \
	DECLARE_FUNCTION(execBarkEvent);


#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BarkEvent_Implementation() {}; \
 \
	DECLARE_FUNCTION(execBarkEvent);


#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_EVENT_PARMS
#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_CALLBACK_WRAPPERS
#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FINDINGHOOMAN_API UBarkInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBarkInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINDINGHOOMAN_API, UBarkInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBarkInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FINDINGHOOMAN_API UBarkInterface(UBarkInterface&&); \
	FINDINGHOOMAN_API UBarkInterface(const UBarkInterface&); \
public:


#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FINDINGHOOMAN_API UBarkInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FINDINGHOOMAN_API UBarkInterface(UBarkInterface&&); \
	FINDINGHOOMAN_API UBarkInterface(const UBarkInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINDINGHOOMAN_API, UBarkInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBarkInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBarkInterface)


#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBarkInterface(); \
	friend struct Z_Construct_UClass_UBarkInterface_Statics; \
public: \
	DECLARE_CLASS(UBarkInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FindingHooman"), FINDINGHOOMAN_API) \
	DECLARE_SERIALIZER(UBarkInterface)


#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBarkInterface() {} \
public: \
	typedef UBarkInterface UClassType; \
	typedef IBarkInterface ThisClass; \
	static void Execute_BarkEvent(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IBarkInterface() {} \
public: \
	typedef UBarkInterface UClassType; \
	typedef IBarkInterface ThisClass; \
	static void Execute_BarkEvent(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_8_PROLOG \
	FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_EVENT_PARMS


#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_SPARSE_DATA \
	FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_RPC_WRAPPERS \
	FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_CALLBACK_WRAPPERS \
	FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_SPARSE_DATA \
	FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_CALLBACK_WRAPPERS \
	FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINDINGHOOMAN_API UClass* StaticClass<class UBarkInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FindingHooman_Source_FindingHooman_Interfaces_BarkInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
