// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogueComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EBarkType : uint8;
enum class ELineType : uint8;
enum class EPendingType : uint8;
struct FDialogueDataForHearer;
struct FDialogueLine;
struct FDialoguePendingToJoin;
#ifdef RIBEYE_DialogueComponent_generated_h
#error "DialogueComponent.generated.h already included, missing '#pragma once' in DialogueComponent.h"
#endif
#define RIBEYE_DialogueComponent_generated_h

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FDialogueDataForHearer>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FDialoguePendingToJoin>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_60_DELEGATE \
RIBEYE_API void FDialogueComponentOnReplyRequested_DelegateWrapper(const FMulticastScriptDelegate& DialogueComponentOnReplyRequested, int32 DialogueID);


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLastDialogueID); \
	DECLARE_FUNCTION(execGetLastHeardLine); \
	DECLARE_FUNCTION(execGetHeardDialogue); \
	DECLARE_FUNCTION(execGetPendingData); \
	DECLARE_FUNCTION(execGetLastPendingDialogue); \
	DECLARE_FUNCTION(execOnDialogueSpoke); \
	DECLARE_FUNCTION(execOnDialogueHeard); \
	DECLARE_FUNCTION(execLeavePendindDialogue); \
	DECLARE_FUNCTION(execRefreshPendingToJoinDialogueTime); \
	DECLARE_FUNCTION(execOnPendingToJoinDialogue); \
	DECLARE_FUNCTION(execForgetDialogue);


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_65_CALLBACK_WRAPPERS
#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueComponent(); \
	friend struct Z_Construct_UClass_UDialogueComponent_Statics; \
public: \
	DECLARE_CLASS(UDialogueComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RibEye"), NO_API) \
	DECLARE_SERIALIZER(UDialogueComponent)


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogueComponent(UDialogueComponent&&); \
	UDialogueComponent(const UDialogueComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueComponent) \
	NO_API virtual ~UDialogueComponent();


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_62_PROLOG
#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_65_CALLBACK_WRAPPERS \
	FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_65_INCLASS_NO_PURE_DECLS \
	FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIBEYE_API UClass* StaticClass<class UDialogueComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h


#define FOREACH_ENUM_EDIALOGUEINTERRUPTSTATUS(op) \
	op(EDialogueInterruptStatus::ABSENT) \
	op(EDialogueInterruptStatus::INVALID) \
	op(EDialogueInterruptStatus::LOWER_PRIORITY) \
	op(EDialogueInterruptStatus::HIGHER_PRIORITY) 

enum class EDialogueInterruptStatus : uint8;
template<> struct TIsUEnumClass<EDialogueInterruptStatus> { enum { Value = true }; };
template<> RIBEYE_API UEnum* StaticEnum<EDialogueInterruptStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
