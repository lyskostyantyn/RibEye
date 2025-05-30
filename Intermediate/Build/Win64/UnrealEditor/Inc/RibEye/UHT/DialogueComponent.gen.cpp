// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RibEye/DialogueComponent.h"
#include "RibEye/DialogueManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RIBEYE_API UClass* Z_Construct_UClass_UDialogueComponent();
RIBEYE_API UClass* Z_Construct_UClass_UDialogueComponent_NoRegister();
RIBEYE_API UClass* Z_Construct_UClass_UDialogueManager_NoRegister();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EBarkType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EDialogueInterruptStatus();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_ELineType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EPendingType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EVoicePreset();
RIBEYE_API UFunction* Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueDataForHearer();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FDialoguePendingToJoin();
UPackage* Z_Construct_UPackage__Script_RibEye();
// End Cross Module References

// Begin Enum EDialogueInterruptStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogueInterruptStatus;
static UEnum* EDialogueInterruptStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogueInterruptStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogueInterruptStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RibEye_EDialogueInterruptStatus, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("EDialogueInterruptStatus"));
	}
	return Z_Registration_Info_UEnum_EDialogueInterruptStatus.OuterSingleton;
}
template<> RIBEYE_API UEnum* StaticEnum<EDialogueInterruptStatus>()
{
	return EDialogueInterruptStatus_StaticEnum();
}
struct Z_Construct_UEnum_RibEye_EDialogueInterruptStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ABSENT.DisplayName", "Dialogue is absent" },
		{ "ABSENT.Name", "EDialogueInterruptStatus::ABSENT" },
		{ "BlueprintType", "true" },
		{ "HIGHER_PRIORITY.DisplayName", "Dialogue is higher priority" },
		{ "HIGHER_PRIORITY.Name", "EDialogueInterruptStatus::HIGHER_PRIORITY" },
		{ "INVALID.DisplayName", "Dialogue is invalid" },
		{ "INVALID.Name", "EDialogueInterruptStatus::INVALID" },
		{ "LOWER_PRIORITY.DisplayName", "Dialogue is lower priority" },
		{ "LOWER_PRIORITY.Name", "EDialogueInterruptStatus::LOWER_PRIORITY" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogueInterruptStatus::ABSENT", (int64)EDialogueInterruptStatus::ABSENT },
		{ "EDialogueInterruptStatus::INVALID", (int64)EDialogueInterruptStatus::INVALID },
		{ "EDialogueInterruptStatus::LOWER_PRIORITY", (int64)EDialogueInterruptStatus::LOWER_PRIORITY },
		{ "EDialogueInterruptStatus::HIGHER_PRIORITY", (int64)EDialogueInterruptStatus::HIGHER_PRIORITY },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RibEye_EDialogueInterruptStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	"EDialogueInterruptStatus",
	"EDialogueInterruptStatus",
	Z_Construct_UEnum_RibEye_EDialogueInterruptStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EDialogueInterruptStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EDialogueInterruptStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RibEye_EDialogueInterruptStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RibEye_EDialogueInterruptStatus()
{
	if (!Z_Registration_Info_UEnum_EDialogueInterruptStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogueInterruptStatus.InnerSingleton, Z_Construct_UEnum_RibEye_EDialogueInterruptStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogueInterruptStatus.InnerSingleton;
}
// End Enum EDialogueInterruptStatus

// Begin ScriptStruct FDialogueDataForHearer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueDataForHearer;
class UScriptStruct* FDialogueDataForHearer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueDataForHearer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueDataForHearer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueDataForHearer, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("DialogueDataForHearer"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueDataForHearer.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FDialogueDataForHearer>()
{
	return FDialogueDataForHearer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[] = {
		{ "Category", "DialogueDataForHearer" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[] = {
		{ "Category", "DialogueDataForHearer" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSpokenTime_MetaData[] = {
		{ "Category", "DialogueDataForHearer" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsParticipant_MetaData[] = {
		{ "Category", "DialogueDataForHearer" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMainPartCompleted_MetaData[] = {
		{ "Category", "DialogueDataForHearer" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Participants;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dialogue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastSpokenTime;
	static void NewProp_IsParticipant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsParticipant;
	static void NewProp_IsMainPartCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMainPartCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueDataForHearer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_Participants_Inner = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDataForHearer, Participants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participants_MetaData), NewProp_Participants_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_Dialogue_Inner = { "Dialogue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(0, nullptr) }; // 3930301776
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDataForHearer, Dialogue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogue_MetaData), NewProp_Dialogue_MetaData) }; // 3930301776
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_LastSpokenTime = { "LastSpokenTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDataForHearer, LastSpokenTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSpokenTime_MetaData), NewProp_LastSpokenTime_MetaData) };
void Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_IsParticipant_SetBit(void* Obj)
{
	((FDialogueDataForHearer*)Obj)->IsParticipant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_IsParticipant = { "IsParticipant", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDialogueDataForHearer), &Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_IsParticipant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsParticipant_MetaData), NewProp_IsParticipant_MetaData) };
void Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_IsMainPartCompleted_SetBit(void* Obj)
{
	((FDialogueDataForHearer*)Obj)->IsMainPartCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_IsMainPartCompleted = { "IsMainPartCompleted", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDialogueDataForHearer), &Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_IsMainPartCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMainPartCompleted_MetaData), NewProp_IsMainPartCompleted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_Participants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_Participants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_Dialogue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_LastSpokenTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_IsParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewProp_IsMainPartCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"DialogueDataForHearer",
	Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::PropPointers),
	sizeof(FDialogueDataForHearer),
	alignof(FDialogueDataForHearer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueDataForHearer()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueDataForHearer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueDataForHearer.InnerSingleton, Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueDataForHearer.InnerSingleton;
}
// End ScriptStruct FDialogueDataForHearer

// Begin ScriptStruct FDialoguePendingToJoin
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialoguePendingToJoin;
class UScriptStruct* FDialoguePendingToJoin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialoguePendingToJoin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialoguePendingToJoin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialoguePendingToJoin, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("DialoguePendingToJoin"));
	}
	return Z_Registration_Info_UScriptStruct_DialoguePendingToJoin.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FDialoguePendingToJoin>()
{
	return FDialoguePendingToJoin::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueID_MetaData[] = {
		{ "Category", "DialoguePendingToJoin" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hearer_MetaData[] = {
		{ "Category", "DialoguePendingToJoin" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingType_MetaData[] = {
		{ "Category", "DialoguePendingToJoin" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinTimeout_MetaData[] = {
		{ "Category", "DialoguePendingToJoin" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hearer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PendingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PendingType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JoinTimeout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialoguePendingToJoin>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialoguePendingToJoin, DialogueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueID_MetaData), NewProp_DialogueID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::NewProp_Hearer = { "Hearer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialoguePendingToJoin, Hearer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hearer_MetaData), NewProp_Hearer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::NewProp_PendingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::NewProp_PendingType = { "PendingType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialoguePendingToJoin, PendingType), Z_Construct_UEnum_RibEye_EPendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingType_MetaData), NewProp_PendingType_MetaData) }; // 279531135
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::NewProp_JoinTimeout = { "JoinTimeout", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialoguePendingToJoin, JoinTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinTimeout_MetaData), NewProp_JoinTimeout_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::NewProp_Hearer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::NewProp_PendingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::NewProp_PendingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::NewProp_JoinTimeout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"DialoguePendingToJoin",
	Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::PropPointers),
	sizeof(FDialoguePendingToJoin),
	alignof(FDialoguePendingToJoin),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialoguePendingToJoin()
{
	if (!Z_Registration_Info_UScriptStruct_DialoguePendingToJoin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialoguePendingToJoin.InnerSingleton, Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialoguePendingToJoin.InnerSingleton;
}
// End ScriptStruct FDialoguePendingToJoin

// Begin Delegate FDialogueComponentOnReplyRequested
struct Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature_Statics
{
	struct _Script_RibEye_eventDialogueComponentOnReplyRequested_Parms
	{
		int32 DialogueID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RibEye_eventDialogueComponentOnReplyRequested_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature_Statics::NewProp_DialogueID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RibEye, nullptr, "DialogueComponentOnReplyRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature_Statics::_Script_RibEye_eventDialogueComponentOnReplyRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature_Statics::_Script_RibEye_eventDialogueComponentOnReplyRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueComponentOnReplyRequested_DelegateWrapper(const FMulticastScriptDelegate& DialogueComponentOnReplyRequested, int32 DialogueID)
{
	struct _Script_RibEye_eventDialogueComponentOnReplyRequested_Parms
	{
		int32 DialogueID;
	};
	_Script_RibEye_eventDialogueComponentOnReplyRequested_Parms Parms;
	Parms.DialogueID=DialogueID;
	DialogueComponentOnReplyRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueComponentOnReplyRequested

// Begin Class UDialogueComponent Function ForgetDialogue
struct Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics
{
	struct DialogueComponent_eventForgetDialogue_Parms
	{
		int32 DialogueID;
		bool IterateThroughPendings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "CPP_Default_IterateThroughPendings", "true" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static void NewProp_IterateThroughPendings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IterateThroughPendings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventForgetDialogue_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::NewProp_IterateThroughPendings_SetBit(void* Obj)
{
	((DialogueComponent_eventForgetDialogue_Parms*)Obj)->IterateThroughPendings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::NewProp_IterateThroughPendings = { "IterateThroughPendings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueComponent_eventForgetDialogue_Parms), &Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::NewProp_IterateThroughPendings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::NewProp_IterateThroughPendings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "ForgetDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::DialogueComponent_eventForgetDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::DialogueComponent_eventForgetDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_ForgetDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_ForgetDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponent::execForgetDialogue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_GET_UBOOL(Z_Param_IterateThroughPendings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForgetDialogue(Z_Param_DialogueID,Z_Param_IterateThroughPendings);
	P_NATIVE_END;
}
// End Class UDialogueComponent Function ForgetDialogue

// Begin Class UDialogueComponent Function GetHeardDialogue
struct Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics
{
	struct DialogueComponent_eventGetHeardDialogue_Parms
	{
		int32 DialogueID;
		FDialogueDataForHearer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventGetHeardDialogue_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventGetHeardDialogue_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueDataForHearer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1199776696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "GetHeardDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::DialogueComponent_eventGetHeardDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::DialogueComponent_eventGetHeardDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponent::execGetHeardDialogue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogueDataForHearer*)Z_Param__Result=P_THIS->GetHeardDialogue(Z_Param_DialogueID);
	P_NATIVE_END;
}
// End Class UDialogueComponent Function GetHeardDialogue

// Begin Class UDialogueComponent Function GetLastDialogueID
struct Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID_Statics
{
	struct DialogueComponent_eventGetLastDialogueID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventGetLastDialogueID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "GetLastDialogueID", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID_Statics::DialogueComponent_eventGetLastDialogueID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID_Statics::DialogueComponent_eventGetLastDialogueID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponent::execGetLastDialogueID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLastDialogueID();
	P_NATIVE_END;
}
// End Class UDialogueComponent Function GetLastDialogueID

// Begin Class UDialogueComponent Function GetLastHeardLine
struct Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics
{
	struct DialogueComponent_eventGetLastHeardLine_Parms
	{
		int32 DialogueID;
		FDialogueLine ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventGetLastHeardLine_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventGetLastHeardLine_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3930301776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "GetLastHeardLine", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::DialogueComponent_eventGetLastHeardLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::DialogueComponent_eventGetLastHeardLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponent::execGetLastHeardLine)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogueLine*)Z_Param__Result=P_THIS->GetLastHeardLine(Z_Param_DialogueID);
	P_NATIVE_END;
}
// End Class UDialogueComponent Function GetLastHeardLine

// Begin Class UDialogueComponent Function GetLastPendingDialogue
struct Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue_Statics
{
	struct DialogueComponent_eventGetLastPendingDialogue_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventGetLastPendingDialogue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "GetLastPendingDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue_Statics::DialogueComponent_eventGetLastPendingDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue_Statics::DialogueComponent_eventGetLastPendingDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponent::execGetLastPendingDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLastPendingDialogue();
	P_NATIVE_END;
}
// End Class UDialogueComponent Function GetLastPendingDialogue

// Begin Class UDialogueComponent Function GetPendingData
struct Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics
{
	struct DialogueComponent_eventGetPendingData_Parms
	{
		int32 DialogueID;
		FDialoguePendingToJoin ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventGetPendingData_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventGetPendingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialoguePendingToJoin, METADATA_PARAMS(0, nullptr) }; // 688949987
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "GetPendingData", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::DialogueComponent_eventGetPendingData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::DialogueComponent_eventGetPendingData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_GetPendingData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_GetPendingData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponent::execGetPendingData)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialoguePendingToJoin*)Z_Param__Result=P_THIS->GetPendingData(Z_Param_DialogueID);
	P_NATIVE_END;
}
// End Class UDialogueComponent Function GetPendingData

// Begin Class UDialogueComponent Function LeavePendindDialogue
struct Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue_Statics
{
	struct DialogueComponent_eventLeavePendindDialogue_Parms
	{
		int32 DialogueID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventLeavePendindDialogue_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue_Statics::NewProp_DialogueID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "LeavePendindDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue_Statics::DialogueComponent_eventLeavePendindDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue_Statics::DialogueComponent_eventLeavePendindDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponent::execLeavePendindDialogue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LeavePendindDialogue(Z_Param_DialogueID);
	P_NATIVE_END;
}
// End Class UDialogueComponent Function LeavePendindDialogue

// Begin Class UDialogueComponent Function OnDialogueHeard
struct Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics
{
	struct DialogueComponent_eventOnDialogueHeard_Parms
	{
		int32 DialogueID;
		FDialogueLine HeardLine;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeardLine;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnDialogueHeard_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::NewProp_HeardLine = { "HeardLine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnDialogueHeard_Parms, HeardLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(0, nullptr) }; // 3930301776
void Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueComponent_eventOnDialogueHeard_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueComponent_eventOnDialogueHeard_Parms), &Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::NewProp_HeardLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnDialogueHeard", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::DialogueComponent_eventOnDialogueHeard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::DialogueComponent_eventOnDialogueHeard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponent::execOnDialogueHeard)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_GET_STRUCT(FDialogueLine,Z_Param_HeardLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnDialogueHeard(Z_Param_DialogueID,Z_Param_HeardLine);
	P_NATIVE_END;
}
// End Class UDialogueComponent Function OnDialogueHeard

// Begin Class UDialogueComponent Function OnDialogueIgnored
struct DialogueComponent_eventOnDialogueIgnored_Parms
{
	int32 DialogueID;
};
static const FName NAME_UDialogueComponent_OnDialogueIgnored = FName(TEXT("OnDialogueIgnored"));
void UDialogueComponent::OnDialogueIgnored(int32 DialogueID)
{
	DialogueComponent_eventOnDialogueIgnored_Parms Parms;
	Parms.DialogueID=DialogueID;
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponent_OnDialogueIgnored);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UDialogueComponent_OnDialogueIgnored_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueIgnored_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnDialogueIgnored_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_OnDialogueIgnored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueIgnored_Statics::NewProp_DialogueID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueIgnored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnDialogueIgnored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnDialogueIgnored", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_OnDialogueIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueIgnored_Statics::PropPointers), sizeof(DialogueComponent_eventOnDialogueIgnored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueIgnored_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_OnDialogueIgnored_Statics::Function_MetaDataParams) };
static_assert(sizeof(DialogueComponent_eventOnDialogueIgnored_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_OnDialogueIgnored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnDialogueIgnored_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDialogueComponent Function OnDialogueIgnored

// Begin Class UDialogueComponent Function OnDialogueJoined
struct DialogueComponent_eventOnDialogueJoined_Parms
{
	int32 DialogueID;
	AActor* Participant;
	ELineType LineType;
};
static const FName NAME_UDialogueComponent_OnDialogueJoined = FName(TEXT("OnDialogueJoined"));
void UDialogueComponent::OnDialogueJoined(int32 DialogueID, AActor* Participant, ELineType LineType)
{
	DialogueComponent_eventOnDialogueJoined_Parms Parms;
	Parms.DialogueID=DialogueID;
	Parms.Participant=Participant;
	Parms.LineType=LineType;
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponent_OnDialogueJoined);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BLUEPRINT IMPLEMENTABLE!\n" },
#endif
		{ "ModuleRelativePath", "DialogueComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BLUEPRINT IMPLEMENTABLE!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnDialogueJoined_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnDialogueJoined_Parms, Participant), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::NewProp_LineType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::NewProp_LineType = { "LineType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnDialogueJoined_Parms, LineType), Z_Construct_UEnum_RibEye_ELineType, METADATA_PARAMS(0, nullptr) }; // 4109494101
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::NewProp_Participant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::NewProp_LineType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::NewProp_LineType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnDialogueJoined", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::PropPointers), sizeof(DialogueComponent_eventOnDialogueJoined_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::Function_MetaDataParams) };
static_assert(sizeof(DialogueComponent_eventOnDialogueJoined_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDialogueComponent Function OnDialogueJoined

// Begin Class UDialogueComponent Function OnDialogueLeft
struct DialogueComponent_eventOnDialogueLeft_Parms
{
	int32 DialogueID;
};
static const FName NAME_UDialogueComponent_OnDialogueLeft = FName(TEXT("OnDialogueLeft"));
void UDialogueComponent::OnDialogueLeft(int32 DialogueID)
{
	DialogueComponent_eventOnDialogueLeft_Parms Parms;
	Parms.DialogueID=DialogueID;
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponent_OnDialogueLeft);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UDialogueComponent_OnDialogueLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueLeft_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnDialogueLeft_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_OnDialogueLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueLeft_Statics::NewProp_DialogueID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueLeft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnDialogueLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnDialogueLeft", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_OnDialogueLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueLeft_Statics::PropPointers), sizeof(DialogueComponent_eventOnDialogueLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_OnDialogueLeft_Statics::Function_MetaDataParams) };
static_assert(sizeof(DialogueComponent_eventOnDialogueLeft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_OnDialogueLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnDialogueLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDialogueComponent Function OnDialogueLeft

// Begin Class UDialogueComponent Function OnDialogueSpoke
struct Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics
{
	struct DialogueComponent_eventOnDialogueSpoke_Parms
	{
		int32 DialogueID;
		FDialogueLine SpokenLine;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpokenLine;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnDialogueSpoke_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::NewProp_SpokenLine = { "SpokenLine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnDialogueSpoke_Parms, SpokenLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(0, nullptr) }; // 3930301776
void Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueComponent_eventOnDialogueSpoke_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueComponent_eventOnDialogueSpoke_Parms), &Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::NewProp_SpokenLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnDialogueSpoke", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::DialogueComponent_eventOnDialogueSpoke_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::DialogueComponent_eventOnDialogueSpoke_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponent::execOnDialogueSpoke)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_GET_STRUCT(FDialogueLine,Z_Param_SpokenLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnDialogueSpoke(Z_Param_DialogueID,Z_Param_SpokenLine);
	P_NATIVE_END;
}
// End Class UDialogueComponent Function OnDialogueSpoke

// Begin Class UDialogueComponent Function OnLeftPendingDialogue
struct DialogueComponent_eventOnLeftPendingDialogue_Parms
{
	int32 DialogueID;
};
static const FName NAME_UDialogueComponent_OnLeftPendingDialogue = FName(TEXT("OnLeftPendingDialogue"));
void UDialogueComponent::OnLeftPendingDialogue(int32 DialogueID)
{
	DialogueComponent_eventOnLeftPendingDialogue_Parms Parms;
	Parms.DialogueID=DialogueID;
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponent_OnLeftPendingDialogue);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UDialogueComponent_OnLeftPendingDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_OnLeftPendingDialogue_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnLeftPendingDialogue_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_OnLeftPendingDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnLeftPendingDialogue_Statics::NewProp_DialogueID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnLeftPendingDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnLeftPendingDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnLeftPendingDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_OnLeftPendingDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnLeftPendingDialogue_Statics::PropPointers), sizeof(DialogueComponent_eventOnLeftPendingDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnLeftPendingDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_OnLeftPendingDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(DialogueComponent_eventOnLeftPendingDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_OnLeftPendingDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnLeftPendingDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDialogueComponent Function OnLeftPendingDialogue

// Begin Class UDialogueComponent Function OnPendingToJoinDialogue
struct Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics
{
	struct DialogueComponent_eventOnPendingToJoinDialogue_Parms
	{
		int32 DialogueID;
		AActor* Hearer;
		EPendingType PendingType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hearer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PendingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PendingType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnPendingToJoinDialogue_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::NewProp_Hearer = { "Hearer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnPendingToJoinDialogue_Parms, Hearer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::NewProp_PendingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::NewProp_PendingType = { "PendingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnPendingToJoinDialogue_Parms, PendingType), Z_Construct_UEnum_RibEye_EPendingType, METADATA_PARAMS(0, nullptr) }; // 279531135
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::NewProp_Hearer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::NewProp_PendingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::NewProp_PendingType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnPendingToJoinDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::DialogueComponent_eventOnPendingToJoinDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::DialogueComponent_eventOnPendingToJoinDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponent::execOnPendingToJoinDialogue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_GET_OBJECT(AActor,Z_Param_Hearer);
	P_GET_ENUM(EPendingType,Z_Param_PendingType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPendingToJoinDialogue(Z_Param_DialogueID,Z_Param_Hearer,EPendingType(Z_Param_PendingType));
	P_NATIVE_END;
}
// End Class UDialogueComponent Function OnPendingToJoinDialogue

// Begin Class UDialogueComponent Function OnPlayBark
struct DialogueComponent_eventOnPlayBark_Parms
{
	AActor* Instigator;
	EBarkType BarkType;
};
static const FName NAME_UDialogueComponent_OnPlayBark = FName(TEXT("OnPlayBark"));
void UDialogueComponent::OnPlayBark(AActor* Instigator, EBarkType BarkType)
{
	DialogueComponent_eventOnPlayBark_Parms Parms;
	Parms.Instigator=Instigator;
	Parms.BarkType=BarkType;
	UFunction* Func = FindFunctionChecked(NAME_UDialogueComponent_OnPlayBark);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BarkType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BarkType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnPlayBark_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::NewProp_BarkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::NewProp_BarkType = { "BarkType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventOnPlayBark_Parms, BarkType), Z_Construct_UEnum_RibEye_EBarkType, METADATA_PARAMS(0, nullptr) }; // 3398760379
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::NewProp_BarkType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::NewProp_BarkType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnPlayBark", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::PropPointers), sizeof(DialogueComponent_eventOnPlayBark_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::Function_MetaDataParams) };
static_assert(sizeof(DialogueComponent_eventOnPlayBark_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_OnPlayBark()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnPlayBark_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDialogueComponent Function OnPlayBark

// Begin Class UDialogueComponent Function RefreshPendingToJoinDialogueTime
struct Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime_Statics
{
	struct DialogueComponent_eventRefreshPendingToJoinDialogueTime_Parms
	{
		int32 DialogueID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueComponent_eventRefreshPendingToJoinDialogueTime_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime_Statics::NewProp_DialogueID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "RefreshPendingToJoinDialogueTime", nullptr, nullptr, Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime_Statics::DialogueComponent_eventRefreshPendingToJoinDialogueTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime_Statics::DialogueComponent_eventRefreshPendingToJoinDialogueTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueComponent::execRefreshPendingToJoinDialogueTime)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshPendingToJoinDialogueTime(Z_Param_DialogueID);
	P_NATIVE_END;
}
// End Class UDialogueComponent Function RefreshPendingToJoinDialogueTime

// Begin Class UDialogueComponent
void UDialogueComponent::StaticRegisterNativesUDialogueComponent()
{
	UClass* Class = UDialogueComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForgetDialogue", &UDialogueComponent::execForgetDialogue },
		{ "GetHeardDialogue", &UDialogueComponent::execGetHeardDialogue },
		{ "GetLastDialogueID", &UDialogueComponent::execGetLastDialogueID },
		{ "GetLastHeardLine", &UDialogueComponent::execGetLastHeardLine },
		{ "GetLastPendingDialogue", &UDialogueComponent::execGetLastPendingDialogue },
		{ "GetPendingData", &UDialogueComponent::execGetPendingData },
		{ "LeavePendindDialogue", &UDialogueComponent::execLeavePendindDialogue },
		{ "OnDialogueHeard", &UDialogueComponent::execOnDialogueHeard },
		{ "OnDialogueSpoke", &UDialogueComponent::execOnDialogueSpoke },
		{ "OnPendingToJoinDialogue", &UDialogueComponent::execOnPendingToJoinDialogue },
		{ "RefreshPendingToJoinDialogueTime", &UDialogueComponent::execRefreshPendingToJoinDialogueTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueComponent);
UClass* Z_Construct_UClass_UDialogueComponent_NoRegister()
{
	return UDialogueComponent::StaticClass();
}
struct Z_Construct_UClass_UDialogueComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DialogueComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueManager_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeardDialogues_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialoguesPendingToJoin_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoicePreset_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidDialogueDataForHearer_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INVALID DATA START\n" },
#endif
		{ "ModuleRelativePath", "DialogueComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INVALID DATA START" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidDialogueLine_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidPendingToJoinData_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReplyRequested_MetaData[] = {
		{ "Category", "Components|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INVALID DATA END\n" },
#endif
		{ "ModuleRelativePath", "DialogueComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INVALID DATA END" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWaitTimeToJoin_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAdditionalWaitTimeToKeepDialogue_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeardDialogues_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeardDialogues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HeardDialogues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialoguesPendingToJoin_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialoguesPendingToJoin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VoicePreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VoicePreset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvalidDialogueDataForHearer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvalidDialogueLine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvalidPendingToJoinData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReplyRequested;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWaitTimeToJoin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAdditionalWaitTimeToKeepDialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueComponent_ForgetDialogue, "ForgetDialogue" }, // 1529642434
		{ &Z_Construct_UFunction_UDialogueComponent_GetHeardDialogue, "GetHeardDialogue" }, // 2071105849
		{ &Z_Construct_UFunction_UDialogueComponent_GetLastDialogueID, "GetLastDialogueID" }, // 990947821
		{ &Z_Construct_UFunction_UDialogueComponent_GetLastHeardLine, "GetLastHeardLine" }, // 453914421
		{ &Z_Construct_UFunction_UDialogueComponent_GetLastPendingDialogue, "GetLastPendingDialogue" }, // 4023009006
		{ &Z_Construct_UFunction_UDialogueComponent_GetPendingData, "GetPendingData" }, // 927133876
		{ &Z_Construct_UFunction_UDialogueComponent_LeavePendindDialogue, "LeavePendindDialogue" }, // 2400694171
		{ &Z_Construct_UFunction_UDialogueComponent_OnDialogueHeard, "OnDialogueHeard" }, // 360942521
		{ &Z_Construct_UFunction_UDialogueComponent_OnDialogueIgnored, "OnDialogueIgnored" }, // 2101354286
		{ &Z_Construct_UFunction_UDialogueComponent_OnDialogueJoined, "OnDialogueJoined" }, // 585421932
		{ &Z_Construct_UFunction_UDialogueComponent_OnDialogueLeft, "OnDialogueLeft" }, // 1310986201
		{ &Z_Construct_UFunction_UDialogueComponent_OnDialogueSpoke, "OnDialogueSpoke" }, // 1390690155
		{ &Z_Construct_UFunction_UDialogueComponent_OnLeftPendingDialogue, "OnLeftPendingDialogue" }, // 2916121462
		{ &Z_Construct_UFunction_UDialogueComponent_OnPendingToJoinDialogue, "OnPendingToJoinDialogue" }, // 3972663113
		{ &Z_Construct_UFunction_UDialogueComponent_OnPlayBark, "OnPlayBark" }, // 2236762204
		{ &Z_Construct_UFunction_UDialogueComponent_RefreshPendingToJoinDialogueTime, "RefreshPendingToJoinDialogueTime" }, // 3815147172
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueManager = { "DialogueManager", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponent, DialogueManager), Z_Construct_UClass_UDialogueManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueManager_MetaData), NewProp_DialogueManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_HeardDialogues_ValueProp = { "HeardDialogues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDialogueDataForHearer, METADATA_PARAMS(0, nullptr) }; // 1199776696
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_HeardDialogues_Key_KeyProp = { "HeardDialogues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_HeardDialogues = { "HeardDialogues", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponent, HeardDialogues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeardDialogues_MetaData), NewProp_HeardDialogues_MetaData) }; // 1199776696
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialoguesPendingToJoin_Inner = { "DialoguesPendingToJoin", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialoguePendingToJoin, METADATA_PARAMS(0, nullptr) }; // 688949987
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialoguesPendingToJoin = { "DialoguesPendingToJoin", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponent, DialoguesPendingToJoin), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialoguesPendingToJoin_MetaData), NewProp_DialoguesPendingToJoin_MetaData) }; // 688949987
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_VoicePreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_VoicePreset = { "VoicePreset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponent, VoicePreset), Z_Construct_UEnum_RibEye_EVoicePreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoicePreset_MetaData), NewProp_VoicePreset_MetaData) }; // 3822199425
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_InvalidDialogueDataForHearer = { "InvalidDialogueDataForHearer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponent, InvalidDialogueDataForHearer), Z_Construct_UScriptStruct_FDialogueDataForHearer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidDialogueDataForHearer_MetaData), NewProp_InvalidDialogueDataForHearer_MetaData) }; // 1199776696
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_InvalidDialogueLine = { "InvalidDialogueLine", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponent, InvalidDialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidDialogueLine_MetaData), NewProp_InvalidDialogueLine_MetaData) }; // 3930301776
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_InvalidPendingToJoinData = { "InvalidPendingToJoinData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponent, InvalidPendingToJoinData), Z_Construct_UScriptStruct_FDialoguePendingToJoin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidPendingToJoinData_MetaData), NewProp_InvalidPendingToJoinData_MetaData) }; // 688949987
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_OnReplyRequested = { "OnReplyRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponent, OnReplyRequested), Z_Construct_UDelegateFunction_RibEye_DialogueComponentOnReplyRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReplyRequested_MetaData), NewProp_OnReplyRequested_MetaData) }; // 3275142223
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_MaxWaitTimeToJoin = { "MaxWaitTimeToJoin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponent, MaxWaitTimeToJoin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWaitTimeToJoin_MetaData), NewProp_MaxWaitTimeToJoin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_MaxAdditionalWaitTimeToKeepDialogue = { "MaxAdditionalWaitTimeToKeepDialogue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueComponent, MaxAdditionalWaitTimeToKeepDialogue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAdditionalWaitTimeToKeepDialogue_MetaData), NewProp_MaxAdditionalWaitTimeToKeepDialogue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_HeardDialogues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_HeardDialogues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_HeardDialogues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialoguesPendingToJoin_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialoguesPendingToJoin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_VoicePreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_VoicePreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_InvalidDialogueDataForHearer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_InvalidDialogueLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_InvalidPendingToJoinData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_OnReplyRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_MaxWaitTimeToJoin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_MaxAdditionalWaitTimeToKeepDialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueComponent_Statics::ClassParams = {
	&UDialogueComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogueComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueComponent()
{
	if (!Z_Registration_Info_UClass_UDialogueComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueComponent.OuterSingleton, Z_Construct_UClass_UDialogueComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueComponent.OuterSingleton;
}
template<> RIBEYE_API UClass* StaticClass<UDialogueComponent>()
{
	return UDialogueComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueComponent);
UDialogueComponent::~UDialogueComponent() {}
// End Class UDialogueComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDialogueInterruptStatus_StaticEnum, TEXT("EDialogueInterruptStatus"), &Z_Registration_Info_UEnum_EDialogueInterruptStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 515736005U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueDataForHearer::StaticStruct, Z_Construct_UScriptStruct_FDialogueDataForHearer_Statics::NewStructOps, TEXT("DialogueDataForHearer"), &Z_Registration_Info_UScriptStruct_DialogueDataForHearer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueDataForHearer), 1199776696U) },
		{ FDialoguePendingToJoin::StaticStruct, Z_Construct_UScriptStruct_FDialoguePendingToJoin_Statics::NewStructOps, TEXT("DialoguePendingToJoin"), &Z_Registration_Info_UScriptStruct_DialoguePendingToJoin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialoguePendingToJoin), 688949987U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueComponent, UDialogueComponent::StaticClass, TEXT("UDialogueComponent"), &Z_Registration_Info_UClass_UDialogueComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueComponent), 2647885770U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_3567743931(TEXT("/Script/RibEye"),
	Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
