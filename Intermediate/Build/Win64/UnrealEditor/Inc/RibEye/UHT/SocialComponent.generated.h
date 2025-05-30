// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocialComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAlert : uint8;
enum class EGroupType : uint8;
enum class ELineType : uint8;
#ifdef RIBEYE_SocialComponent_generated_h
#error "SocialComponent.generated.h already included, missing '#pragma once' in SocialComponent.h"
#endif
#define RIBEYE_SocialComponent_generated_h

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSocialSettings_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FSocialSettings>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAllyGroupInfo_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FAllyGroupInfo>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAllyKnownState_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FAllyKnownState>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_53_DELEGATE \
RIBEYE_API void FSocialComponentOnAlertnessChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SocialComponentOnAlertnessChangedSignature, EAlert AlertState);


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_55_DELEGATE \
RIBEYE_API void FSocialComponentOnAllyChangedStateSignature_DelegateWrapper(const FMulticastScriptDelegate& SocialComponentOnAllyChangedStateSignature, AActor* Ally, EAlert AlertState);


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFaction); \
	DECLARE_FUNCTION(execShouldIgnoreAnsweringLineType); \
	DECLARE_FUNCTION(execIsAllyResolved); \
	DECLARE_FUNCTION(execUpdateAllyKnownState_Vision); \
	DECLARE_FUNCTION(execUpdateAllyKnownState); \
	DECLARE_FUNCTION(execRemoveActorFromGroup); \
	DECLARE_FUNCTION(execGetTextID); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execSetupID); \
	DECLARE_FUNCTION(execGetSocialGroupSize); \
	DECLARE_FUNCTION(execGetMySocialGroup); \
	DECLARE_FUNCTION(execGetMyGroupNumber); \
	DECLARE_FUNCTION(execIsFromMySocialGroup); \
	DECLARE_FUNCTION(execAddMembersToGroup); \
	DECLARE_FUNCTION(execClearGroupMembers); \
	DECLARE_FUNCTION(execGetGroupMembers); \
	DECLARE_FUNCTION(execAddActorToGroup); \
	DECLARE_FUNCTION(execSetAlertState);


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialComponent(); \
	friend struct Z_Construct_UClass_USocialComponent_Statics; \
public: \
	DECLARE_CLASS(USocialComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RibEye"), NO_API) \
	DECLARE_SERIALIZER(USocialComponent)


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USocialComponent(USocialComponent&&); \
	USocialComponent(const USocialComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialComponent) \
	NO_API virtual ~USocialComponent();


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_57_PROLOG
#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_60_INCLASS_NO_PURE_DECLS \
	FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIBEYE_API UClass* StaticClass<class USocialComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
