// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FINDINGHOOMAN_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define FINDINGHOOMAN_InteractInterface_generated_h

#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_SPARSE_DATA
#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_RPC_WRAPPERS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
	virtual void OnInteract_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus); \
	DECLARE_FUNCTION(execOnInteract);


#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
	virtual void OnInteract_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus); \
	DECLARE_FUNCTION(execOnInteract);


#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_EVENT_PARMS \
	struct InteractInterface_eventOnInteract_Parms \
	{ \
		AActor* Caller; \
	};


#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_CALLBACK_WRAPPERS
#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FINDINGHOOMAN_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINDINGHOOMAN_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FINDINGHOOMAN_API UInteractInterface(UInteractInterface&&); \
	FINDINGHOOMAN_API UInteractInterface(const UInteractInterface&); \
public:


#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FINDINGHOOMAN_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FINDINGHOOMAN_API UInteractInterface(UInteractInterface&&); \
	FINDINGHOOMAN_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINDINGHOOMAN_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FindingHooman"), FINDINGHOOMAN_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_8_PROLOG \
	FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_EVENT_PARMS


#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_SPARSE_DATA \
	FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_RPC_WRAPPERS \
	FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_CALLBACK_WRAPPERS \
	FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_SPARSE_DATA \
	FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_CALLBACK_WRAPPERS \
	FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINDINGHOOMAN_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FindingHooman_Source_FindingHooman_Interfaces_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
