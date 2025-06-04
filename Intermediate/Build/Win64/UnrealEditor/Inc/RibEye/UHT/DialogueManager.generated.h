// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogueManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAlert : uint8;
enum class ELineType : uint8;
enum class EPhraseType : uint8;
enum class EVoicePreset : uint8;
struct FBarkSpeakerData;
struct FDialogueData;
struct FDialogueLine;
struct FLineData;
struct FLinePlayInfo;
#ifdef RIBEYE_DialogueManager_generated_h
#error "DialogueManager.generated.h already included, missing '#pragma once' in DialogueManager.h"
#endif
#define RIBEYE_DialogueManager_generated_h

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLineData_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FLineData>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLineTypeInfo_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FLineTypeInfo>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLineCooldownInfo_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FLineCooldownInfo>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLinePlayInfo_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FLinePlayInfo>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLineInstance_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FLineInstance>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLineInstanceCollection_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FLineInstanceCollection>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoiceDictionary_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FVoiceDictionary>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLineEntry_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FLineEntry>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueLine_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FDialogueLine>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorList_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FActorList>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FPendingActorPriorityMap>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueData_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FDialogueData>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_199_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBarkSpeakerData_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FBarkSpeakerData>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_215_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBarkGenericData_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FBarkGenericData>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_231_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRules_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FRules>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_245_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLineTypePriority); \
	DECLARE_FUNCTION(execGetLinePlayInfo); \
	DECLARE_FUNCTION(execGetLineMasteryType); \
	DECLARE_FUNCTION(execGetLineType); \
	DECLARE_FUNCTION(execGetRandomLineFromLineIds); \
	DECLARE_FUNCTION(execGetRandomLineFromTypes); \
	DECLARE_FUNCTION(execGetLineIdListFromTypes); \
	DECLARE_FUNCTION(execGetAllyGroupList); \
	DECLARE_FUNCTION(execGetDialogueByID); \
	DECLARE_FUNCTION(execFindActiveDialogueOfActor); \
	DECLARE_FUNCTION(execHaveCommonActiveDialogue); \
	DECLARE_FUNCTION(execIsMainPartEnded); \
	DECLARE_FUNCTION(execHasDialoguePendingParticipants); \
	DECLARE_FUNCTION(execIsAMemberOfADialogue); \
	DECLARE_FUNCTION(execIsDialogueValid); \
	DECLARE_FUNCTION(execOnMainPartEnded); \
	DECLARE_FUNCTION(execAddToListeners); \
	DECLARE_FUNCTION(execRemoveFromPendingParticipants); \
	DECLARE_FUNCTION(execAddToPendingParticipants); \
	DECLARE_FUNCTION(execRemoveActorFromDialogue); \
	DECLARE_FUNCTION(execRefuseToBark); \
	DECLARE_FUNCTION(execContinueBark); \
	DECLARE_FUNCTION(execContinueDialogue); \
	DECLARE_FUNCTION(execMakeABark); \
	DECLARE_FUNCTION(execMakeADialogue);


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_245_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueManager(); \
	friend struct Z_Construct_UClass_UDialogueManager_Statics; \
public: \
	DECLARE_CLASS(UDialogueManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RibEye"), NO_API) \
	DECLARE_SERIALIZER(UDialogueManager)


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_245_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogueManager(UDialogueManager&&); \
	UDialogueManager(const UDialogueManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueManager) \
	NO_API virtual ~UDialogueManager();


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_242_PROLOG
#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_245_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_245_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_245_INCLASS_NO_PURE_DECLS \
	FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_245_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIBEYE_API UClass* StaticClass<class UDialogueManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
