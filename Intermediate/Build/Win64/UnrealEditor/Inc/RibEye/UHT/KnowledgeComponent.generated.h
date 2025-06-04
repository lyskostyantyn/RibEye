// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KnowledgeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAlert : uint8;
struct FLastKnownData;
#ifdef RIBEYE_KnowledgeComponent_generated_h
#error "KnowledgeComponent.generated.h already included, missing '#pragma once' in KnowledgeComponent.h"
#endif
#define RIBEYE_KnowledgeComponent_generated_h

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLastKnownData_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FLastKnownData>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLastKnownSoundPosition_Statics; \
	RIBEYE_API static class UScriptStruct* StaticStruct();


template<> RIBEYE_API UScriptStruct* StaticStruct<struct FLastKnownSoundPosition>();

#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_42_DELEGATE \
RIBEYE_API void FKnowledgeComponentOnTargetSelectedSignature_DelegateWrapper(const FMulticastScriptDelegate& KnowledgeComponentOnTargetSelectedSignature, AActor* Target);


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_44_DELEGATE \
RIBEYE_API void FKnowledgeComponentOnLastTargetLostSignature_DelegateWrapper(const FMulticastScriptDelegate& KnowledgeComponentOnLastTargetLostSignature, AActor* Target, FLastKnownData const& LastKnownData);


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSoundResolved); \
	DECLARE_FUNCTION(execResolveSound); \
	DECLARE_FUNCTION(execRegisterSound); \
	DECLARE_FUNCTION(execIsResolvedAllyNearby); \
	DECLARE_FUNCTION(execGetSpottedActors); \
	DECLARE_FUNCTION(execRegisterKnowledge); \
	DECLARE_FUNCTION(execOnEnemySpotted);


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKnowledgeComponent(); \
	friend struct Z_Construct_UClass_UKnowledgeComponent_Statics; \
public: \
	DECLARE_CLASS(UKnowledgeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RibEye"), NO_API) \
	DECLARE_SERIALIZER(UKnowledgeComponent)


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UKnowledgeComponent(UKnowledgeComponent&&); \
	UKnowledgeComponent(const UKnowledgeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKnowledgeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKnowledgeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKnowledgeComponent) \
	NO_API virtual ~UKnowledgeComponent();


#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_48_PROLOG
#define FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_51_INCLASS_NO_PURE_DECLS \
	FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIBEYE_API UClass* StaticClass<class UKnowledgeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
