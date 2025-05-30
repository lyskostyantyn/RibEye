// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RibEye/Enums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnums() {}

// Begin Cross Module References
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EAlert();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EAllianceType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EBarkPlayingRule();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EBarkType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EDialogueState();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EGroupType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EIgnoreDialogueType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EJoinReplyType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_ELineType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EPendingType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EPhraseType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EVoicePreset();
UPackage* Z_Construct_UPackage__Script_RibEye();
// End Cross Module References

// Begin Enum EDialogueState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogueState;
static UEnum* EDialogueState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogueState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogueState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RibEye_EDialogueState, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("EDialogueState"));
	}
	return Z_Registration_Info_UEnum_EDialogueState.OuterSingleton;
}
template<> RIBEYE_API UEnum* StaticEnum<EDialogueState>()
{
	return EDialogueState_StaticEnum();
}
struct Z_Construct_UEnum_RibEye_EDialogueState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MAIN_PART_ENDED.DisplayName", "MainPartEnded" },
		{ "MAIN_PART_ENDED.Name", "EDialogueState::MAIN_PART_ENDED" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "STARTED.DisplayName", "Started" },
		{ "STARTED.Name", "EDialogueState::STARTED" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogueState::STARTED", (int64)EDialogueState::STARTED },
		{ "EDialogueState::MAIN_PART_ENDED", (int64)EDialogueState::MAIN_PART_ENDED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RibEye_EDialogueState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	"EDialogueState",
	"EDialogueState",
	Z_Construct_UEnum_RibEye_EDialogueState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EDialogueState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EDialogueState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RibEye_EDialogueState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RibEye_EDialogueState()
{
	if (!Z_Registration_Info_UEnum_EDialogueState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogueState.InnerSingleton, Z_Construct_UEnum_RibEye_EDialogueState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogueState.InnerSingleton;
}
// End Enum EDialogueState

// Begin Enum EPendingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPendingType;
static UEnum* EPendingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPendingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPendingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RibEye_EPendingType, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("EPendingType"));
	}
	return Z_Registration_Info_UEnum_EPendingType.OuterSingleton;
}
template<> RIBEYE_API UEnum* StaticEnum<EPendingType>()
{
	return EPendingType_StaticEnum();
}
struct Z_Construct_UEnum_RibEye_EPendingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ASK_TO_JOIN.DisplayName", "Ask to join" },
		{ "ASK_TO_JOIN.Name", "EPendingType::ASK_TO_JOIN" },
		{ "BlueprintType", "true" },
		{ "INVALID.DisplayName", "Invalid" },
		{ "INVALID.Name", "EPendingType::INVALID" },
		{ "MISSED_LINE_COMMENT.DisplayName", "Missed line comment" },
		{ "MISSED_LINE_COMMENT.Name", "EPendingType::MISSED_LINE_COMMENT" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "REPLY_INSTEAD_MAIN.DisplayName", "Reply instead" },
		{ "REPLY_INSTEAD_MAIN.Name", "EPendingType::REPLY_INSTEAD_MAIN" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPendingType::INVALID", (int64)EPendingType::INVALID },
		{ "EPendingType::ASK_TO_JOIN", (int64)EPendingType::ASK_TO_JOIN },
		{ "EPendingType::REPLY_INSTEAD_MAIN", (int64)EPendingType::REPLY_INSTEAD_MAIN },
		{ "EPendingType::MISSED_LINE_COMMENT", (int64)EPendingType::MISSED_LINE_COMMENT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RibEye_EPendingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	"EPendingType",
	"EPendingType",
	Z_Construct_UEnum_RibEye_EPendingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EPendingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EPendingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RibEye_EPendingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RibEye_EPendingType()
{
	if (!Z_Registration_Info_UEnum_EPendingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPendingType.InnerSingleton, Z_Construct_UEnum_RibEye_EPendingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPendingType.InnerSingleton;
}
// End Enum EPendingType

// Begin Enum EPhraseType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhraseType;
static UEnum* EPhraseType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPhraseType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPhraseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RibEye_EPhraseType, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("EPhraseType"));
	}
	return Z_Registration_Info_UEnum_EPhraseType.OuterSingleton;
}
template<> RIBEYE_API UEnum* StaticEnum<EPhraseType>()
{
	return EPhraseType_StaticEnum();
}
struct Z_Construct_UEnum_RibEye_EPhraseType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MAIN.DisplayName", "Main" },
		{ "MAIN.Name", "EPhraseType::MAIN" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "SECONDARY.DisplayName", "Secondary" },
		{ "SECONDARY.Name", "EPhraseType::SECONDARY" },
		{ "SECONDARY_2.DisplayName", "Secondary_2" },
		{ "SECONDARY_2.Name", "EPhraseType::SECONDARY_2" },
		{ "VOICE_NUM.Name", "EPhraseType::VOICE_NUM" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPhraseType::MAIN", (int64)EPhraseType::MAIN },
		{ "EPhraseType::SECONDARY", (int64)EPhraseType::SECONDARY },
		{ "EPhraseType::SECONDARY_2", (int64)EPhraseType::SECONDARY_2 },
		{ "EPhraseType::VOICE_NUM", (int64)EPhraseType::VOICE_NUM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RibEye_EPhraseType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	"EPhraseType",
	"EPhraseType",
	Z_Construct_UEnum_RibEye_EPhraseType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EPhraseType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EPhraseType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RibEye_EPhraseType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RibEye_EPhraseType()
{
	if (!Z_Registration_Info_UEnum_EPhraseType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhraseType.InnerSingleton, Z_Construct_UEnum_RibEye_EPhraseType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPhraseType.InnerSingleton;
}
// End Enum EPhraseType

// Begin Enum EVoicePreset
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoicePreset;
static UEnum* EVoicePreset_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoicePreset.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoicePreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RibEye_EVoicePreset, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("EVoicePreset"));
	}
	return Z_Registration_Info_UEnum_EVoicePreset.OuterSingleton;
}
template<> RIBEYE_API UEnum* StaticEnum<EVoicePreset>()
{
	return EVoicePreset_StaticEnum();
}
struct Z_Construct_UEnum_RibEye_EVoicePreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "STANDARD.DisplayName", "Standard" },
		{ "STANDARD.Name", "EVoicePreset::STANDARD" },
		{ "VOICE_NUM.Name", "EVoicePreset::VOICE_NUM" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoicePreset::STANDARD", (int64)EVoicePreset::STANDARD },
		{ "EVoicePreset::VOICE_NUM", (int64)EVoicePreset::VOICE_NUM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RibEye_EVoicePreset_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	"EVoicePreset",
	"EVoicePreset",
	Z_Construct_UEnum_RibEye_EVoicePreset_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EVoicePreset_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EVoicePreset_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RibEye_EVoicePreset_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RibEye_EVoicePreset()
{
	if (!Z_Registration_Info_UEnum_EVoicePreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoicePreset.InnerSingleton, Z_Construct_UEnum_RibEye_EVoicePreset_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoicePreset.InnerSingleton;
}
// End Enum EVoicePreset

// Begin Enum EBarkType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBarkType;
static UEnum* EBarkType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBarkType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBarkType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RibEye_EBarkType, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("EBarkType"));
	}
	return Z_Registration_Info_UEnum_EBarkType.OuterSingleton;
}
template<> RIBEYE_API UEnum* StaticEnum<EBarkType>()
{
	return EBarkType_StaticEnum();
}
struct Z_Construct_UEnum_RibEye_EBarkType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BARK_NUM.Name", "EBarkType::BARK_NUM" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "SURPRISED.DisplayName", "Suprised" },
		{ "SURPRISED.Name", "EBarkType::SURPRISED" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBarkType::SURPRISED", (int64)EBarkType::SURPRISED },
		{ "EBarkType::BARK_NUM", (int64)EBarkType::BARK_NUM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RibEye_EBarkType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	"EBarkType",
	"EBarkType",
	Z_Construct_UEnum_RibEye_EBarkType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EBarkType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EBarkType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RibEye_EBarkType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RibEye_EBarkType()
{
	if (!Z_Registration_Info_UEnum_EBarkType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBarkType.InnerSingleton, Z_Construct_UEnum_RibEye_EBarkType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBarkType.InnerSingleton;
}
// End Enum EBarkType

// Begin Enum ELineType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELineType;
static UEnum* ELineType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELineType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RibEye_ELineType, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("ELineType"));
	}
	return Z_Registration_Info_UEnum_ELineType.OuterSingleton;
}
template<> RIBEYE_API UEnum* StaticEnum<ELineType>()
{
	return ELineType_StaticEnum();
}
struct Z_Construct_UEnum_RibEye_ELineType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COMMENT_MISSED_ANSWER.DisplayName", "Comment on missed answer" },
		{ "COMMENT_MISSED_ANSWER.Name", "ELineType::COMMENT_MISSED_ANSWER" },
		{ "GREETING.DisplayName", "Greeting" },
		{ "GREETING.Name", "ELineType::GREETING" },
		{ "GREETING_END.DisplayName", "Greeting end" },
		{ "GREETING_END.Name", "ELineType::GREETING_END" },
		{ "GREETING_REPLY.DisplayName", "Greeting reply" },
		{ "GREETING_REPLY.Name", "ELineType::GREETING_REPLY" },
		{ "INVALID.DisplayName", "Invalid" },
		{ "INVALID.Name", "ELineType::INVALID" },
		{ "INVESTIGATION_BOTH_MAIN.DisplayName", "Both AI investigate, main starts" },
		{ "INVESTIGATION_BOTH_MAIN.Name", "ELineType::INVESTIGATION_BOTH_MAIN" },
		{ "INVESTIGATION_BOTH_SECONDARY.DisplayName", "Both AI investigate, secondary starts" },
		{ "INVESTIGATION_BOTH_SECONDARY.Name", "ELineType::INVESTIGATION_BOTH_SECONDARY" },
		{ "INVESTIGATION_DISCUSSION.DisplayName", "Discuss Investigation" },
		{ "INVESTIGATION_DISCUSSION.Name", "ELineType::INVESTIGATION_DISCUSSION" },
		{ "INVESTIGATION_MAIN.Comment", "// INVESTIGATE 1 VS 1\n" },
		{ "INVESTIGATION_MAIN.DisplayName", "Invite to investigation" },
		{ "INVESTIGATION_MAIN.Name", "ELineType::INVESTIGATION_MAIN" },
		{ "INVESTIGATION_MAIN.ToolTip", "INVESTIGATE 1 VS 1" },
		{ "INVESTIGATION_REPLY_MAIN.DisplayName", "Final reply from investigator" },
		{ "INVESTIGATION_REPLY_MAIN.Name", "ELineType::INVESTIGATION_REPLY_MAIN" },
		{ "INVESTIGATION_REPLY_SECONDARY.DisplayName", "Final reply from witness" },
		{ "INVESTIGATION_REPLY_SECONDARY.Name", "ELineType::INVESTIGATION_REPLY_SECONDARY" },
		{ "INVESTIGATION_SECONDARY.DisplayName", "Saw investigation" },
		{ "INVESTIGATION_SECONDARY.Name", "ELineType::INVESTIGATION_SECONDARY" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "SURPRISE.DisplayName", "Surprise" },
		{ "SURPRISE.Name", "ELineType::SURPRISE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELineType::INVALID", (int64)ELineType::INVALID },
		{ "ELineType::GREETING", (int64)ELineType::GREETING },
		{ "ELineType::GREETING_REPLY", (int64)ELineType::GREETING_REPLY },
		{ "ELineType::GREETING_END", (int64)ELineType::GREETING_END },
		{ "ELineType::SURPRISE", (int64)ELineType::SURPRISE },
		{ "ELineType::INVESTIGATION_MAIN", (int64)ELineType::INVESTIGATION_MAIN },
		{ "ELineType::INVESTIGATION_SECONDARY", (int64)ELineType::INVESTIGATION_SECONDARY },
		{ "ELineType::INVESTIGATION_DISCUSSION", (int64)ELineType::INVESTIGATION_DISCUSSION },
		{ "ELineType::INVESTIGATION_REPLY_MAIN", (int64)ELineType::INVESTIGATION_REPLY_MAIN },
		{ "ELineType::INVESTIGATION_REPLY_SECONDARY", (int64)ELineType::INVESTIGATION_REPLY_SECONDARY },
		{ "ELineType::INVESTIGATION_BOTH_MAIN", (int64)ELineType::INVESTIGATION_BOTH_MAIN },
		{ "ELineType::INVESTIGATION_BOTH_SECONDARY", (int64)ELineType::INVESTIGATION_BOTH_SECONDARY },
		{ "ELineType::COMMENT_MISSED_ANSWER", (int64)ELineType::COMMENT_MISSED_ANSWER },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RibEye_ELineType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	"ELineType",
	"ELineType",
	Z_Construct_UEnum_RibEye_ELineType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_ELineType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_ELineType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RibEye_ELineType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RibEye_ELineType()
{
	if (!Z_Registration_Info_UEnum_ELineType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELineType.InnerSingleton, Z_Construct_UEnum_RibEye_ELineType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELineType.InnerSingleton;
}
// End Enum ELineType

// Begin Enum EAllianceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAllianceType;
static UEnum* EAllianceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAllianceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAllianceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RibEye_EAllianceType, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("EAllianceType"));
	}
	return Z_Registration_Info_UEnum_EAllianceType.OuterSingleton;
}
template<> RIBEYE_API UEnum* StaticEnum<EAllianceType>()
{
	return EAllianceType_StaticEnum();
}
struct Z_Construct_UEnum_RibEye_EAllianceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ALLY.DisplayName", "Ally" },
		{ "ALLY.Name", "EAllianceType::ALLY" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// social starts\n" },
#endif
		{ "ENEMY.DisplayName", "Enemy" },
		{ "ENEMY.Name", "EAllianceType::ENEMY" },
		{ "ModuleRelativePath", "Enums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "social starts" },
#endif
		{ "UNKNOWN.DisplayName", "Unknown" },
		{ "UNKNOWN.Name", "EAllianceType::UNKNOWN" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAllianceType::ALLY", (int64)EAllianceType::ALLY },
		{ "EAllianceType::ENEMY", (int64)EAllianceType::ENEMY },
		{ "EAllianceType::UNKNOWN", (int64)EAllianceType::UNKNOWN },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RibEye_EAllianceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	"EAllianceType",
	"EAllianceType",
	Z_Construct_UEnum_RibEye_EAllianceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EAllianceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EAllianceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RibEye_EAllianceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RibEye_EAllianceType()
{
	if (!Z_Registration_Info_UEnum_EAllianceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAllianceType.InnerSingleton, Z_Construct_UEnum_RibEye_EAllianceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAllianceType.InnerSingleton;
}
// End Enum EAllianceType

// Begin Enum EIgnoreDialogueType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIgnoreDialogueType;
static UEnum* EIgnoreDialogueType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIgnoreDialogueType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIgnoreDialogueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RibEye_EIgnoreDialogueType, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("EIgnoreDialogueType"));
	}
	return Z_Registration_Info_UEnum_EIgnoreDialogueType.OuterSingleton;
}
template<> RIBEYE_API UEnum* StaticEnum<EIgnoreDialogueType>()
{
	return EIgnoreDialogueType_StaticEnum();
}
struct Z_Construct_UEnum_RibEye_EIgnoreDialogueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Combat.DisplayName", "Combat" },
		{ "Combat.Name", "EIgnoreDialogueType::Combat" },
		{ "Investigation.DisplayName", "Investigation" },
		{ "Investigation.Name", "EIgnoreDialogueType::Investigation" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EIgnoreDialogueType::None" },
		{ "Patrol.DisplayName", "Patrol" },
		{ "Patrol.Name", "EIgnoreDialogueType::Patrol" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIgnoreDialogueType::None", (int64)EIgnoreDialogueType::None },
		{ "EIgnoreDialogueType::Patrol", (int64)EIgnoreDialogueType::Patrol },
		{ "EIgnoreDialogueType::Investigation", (int64)EIgnoreDialogueType::Investigation },
		{ "EIgnoreDialogueType::Combat", (int64)EIgnoreDialogueType::Combat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RibEye_EIgnoreDialogueType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	"EIgnoreDialogueType",
	"EIgnoreDialogueType",
	Z_Construct_UEnum_RibEye_EIgnoreDialogueType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EIgnoreDialogueType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EIgnoreDialogueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RibEye_EIgnoreDialogueType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RibEye_EIgnoreDialogueType()
{
	if (!Z_Registration_Info_UEnum_EIgnoreDialogueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIgnoreDialogueType.InnerSingleton, Z_Construct_UEnum_RibEye_EIgnoreDialogueType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIgnoreDialogueType.InnerSingleton;
}
// End Enum EIgnoreDialogueType

// Begin Enum EGroupType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroupType;
static UEnum* EGroupType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroupType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroupType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RibEye_EGroupType, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("EGroupType"));
	}
	return Z_Registration_Info_UEnum_EGroupType.OuterSingleton;
}
template<> RIBEYE_API UEnum* StaticEnum<EGroupType>()
{
	return EGroupType_StaticEnum();
}
struct Z_Construct_UEnum_RibEye_EGroupType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ATTACK.DisplayName", "Attack" },
		{ "ATTACK.Name", "EGroupType::ATTACK" },
		{ "BlueprintType", "true" },
		{ "INVESTIGATE.DisplayName", "Investigate" },
		{ "INVESTIGATE.Name", "EGroupType::INVESTIGATE" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "PATROL.DisplayName", "Patrol" },
		{ "PATROL.Name", "EGroupType::PATROL" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroupType::PATROL", (int64)EGroupType::PATROL },
		{ "EGroupType::INVESTIGATE", (int64)EGroupType::INVESTIGATE },
		{ "EGroupType::ATTACK", (int64)EGroupType::ATTACK },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RibEye_EGroupType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	"EGroupType",
	"EGroupType",
	Z_Construct_UEnum_RibEye_EGroupType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EGroupType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EGroupType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RibEye_EGroupType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RibEye_EGroupType()
{
	if (!Z_Registration_Info_UEnum_EGroupType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroupType.InnerSingleton, Z_Construct_UEnum_RibEye_EGroupType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroupType.InnerSingleton;
}
// End Enum EGroupType

// Begin Enum EAlert
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlert;
static UEnum* EAlert_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAlert.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAlert.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RibEye_EAlert, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("EAlert"));
	}
	return Z_Registration_Info_UEnum_EAlert.OuterSingleton;
}
template<> RIBEYE_API UEnum* StaticEnum<EAlert>()
{
	return EAlert_StaticEnum();
}
struct Z_Construct_UEnum_RibEye_EAlert_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AGGRESSIVE.DisplayName", "Aggressive" },
		{ "AGGRESSIVE.Name", "EAlert::AGGRESSIVE" },
		{ "AGGRESSIVE_INVESTIGATE.DisplayName", "Aggressive_Investigate" },
		{ "AGGRESSIVE_INVESTIGATE.Name", "EAlert::AGGRESSIVE_INVESTIGATE" },
		{ "BlueprintType", "true" },
		{ "INVESTIGATE.DisplayName", "Investigate" },
		{ "INVESTIGATE.Name", "EAlert::INVESTIGATE" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "PASSIVE.DisplayName", "Passive" },
		{ "PASSIVE.Name", "EAlert::PASSIVE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAlert::PASSIVE", (int64)EAlert::PASSIVE },
		{ "EAlert::INVESTIGATE", (int64)EAlert::INVESTIGATE },
		{ "EAlert::AGGRESSIVE_INVESTIGATE", (int64)EAlert::AGGRESSIVE_INVESTIGATE },
		{ "EAlert::AGGRESSIVE", (int64)EAlert::AGGRESSIVE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RibEye_EAlert_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	"EAlert",
	"EAlert",
	Z_Construct_UEnum_RibEye_EAlert_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EAlert_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EAlert_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RibEye_EAlert_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RibEye_EAlert()
{
	if (!Z_Registration_Info_UEnum_EAlert.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlert.InnerSingleton, Z_Construct_UEnum_RibEye_EAlert_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAlert.InnerSingleton;
}
// End Enum EAlert

// Begin Enum EJoinReplyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJoinReplyType;
static UEnum* EJoinReplyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EJoinReplyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EJoinReplyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RibEye_EJoinReplyType, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("EJoinReplyType"));
	}
	return Z_Registration_Info_UEnum_EJoinReplyType.OuterSingleton;
}
template<> RIBEYE_API UEnum* StaticEnum<EJoinReplyType>()
{
	return EJoinReplyType_StaticEnum();
}
struct Z_Construct_UEnum_RibEye_EJoinReplyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "CAN_JOIN_LAST_MULT.DisplayName", "Can join last mult" },
		{ "CAN_JOIN_LAST_MULT.Name", "EJoinReplyType::CAN_JOIN_LAST_MULT" },
		{ "CAN_JOIN_LAST_SINGLE.DisplayName", "Can join last one" },
		{ "CAN_JOIN_LAST_SINGLE.Name", "EJoinReplyType::CAN_JOIN_LAST_SINGLE" },
		{ "CAN_JOIN_MULT.DisplayName", "Can join mult (no limit said)" },
		{ "CAN_JOIN_MULT.Name", "EJoinReplyType::CAN_JOIN_MULT" },
		{ "CAN_JOIN_SINGLE.DisplayName", "Can join one AI (no limit said)" },
		{ "CAN_JOIN_SINGLE.Name", "EJoinReplyType::CAN_JOIN_SINGLE" },
		{ "CAN_JOIN_SOME_MULT.DisplayName", "Can join last some" },
		{ "CAN_JOIN_SOME_MULT.Name", "EJoinReplyType::CAN_JOIN_SOME_MULT" },
		{ "ModuleRelativePath", "Enums.h" },
		{ "NONE.DisplayName", "None" },
		{ "NONE.Name", "EJoinReplyType::NONE" },
		{ "REJECT.DisplayName", "Reject to join" },
		{ "REJECT.Name", "EJoinReplyType::REJECT" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EJoinReplyType::NONE", (int64)EJoinReplyType::NONE },
		{ "EJoinReplyType::REJECT", (int64)EJoinReplyType::REJECT },
		{ "EJoinReplyType::CAN_JOIN_SINGLE", (int64)EJoinReplyType::CAN_JOIN_SINGLE },
		{ "EJoinReplyType::CAN_JOIN_LAST_SINGLE", (int64)EJoinReplyType::CAN_JOIN_LAST_SINGLE },
		{ "EJoinReplyType::CAN_JOIN_MULT", (int64)EJoinReplyType::CAN_JOIN_MULT },
		{ "EJoinReplyType::CAN_JOIN_LAST_MULT", (int64)EJoinReplyType::CAN_JOIN_LAST_MULT },
		{ "EJoinReplyType::CAN_JOIN_SOME_MULT", (int64)EJoinReplyType::CAN_JOIN_SOME_MULT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RibEye_EJoinReplyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	"EJoinReplyType",
	"EJoinReplyType",
	Z_Construct_UEnum_RibEye_EJoinReplyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EJoinReplyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EJoinReplyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RibEye_EJoinReplyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RibEye_EJoinReplyType()
{
	if (!Z_Registration_Info_UEnum_EJoinReplyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJoinReplyType.InnerSingleton, Z_Construct_UEnum_RibEye_EJoinReplyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EJoinReplyType.InnerSingleton;
}
// End Enum EJoinReplyType

// Begin Enum EBarkPlayingRule
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBarkPlayingRule;
static UEnum* EBarkPlayingRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBarkPlayingRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBarkPlayingRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RibEye_EBarkPlayingRule, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("EBarkPlayingRule"));
	}
	return Z_Registration_Info_UEnum_EBarkPlayingRule.OuterSingleton;
}
template<> RIBEYE_API UEnum* StaticEnum<EBarkPlayingRule>()
{
	return EBarkPlayingRule_StaticEnum();
}
struct Z_Construct_UEnum_RibEye_EBarkPlayingRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// system rules\n" },
#endif
		{ "ModuleRelativePath", "Enums.h" },
		{ "PLAY_CLOSEST_ONLY.DisplayName", "Play closest only" },
		{ "PLAY_CLOSEST_ONLY.Name", "EBarkPlayingRule::PLAY_CLOSEST_ONLY" },
		{ "PLAY_IN_ORDER.DisplayName", "Play in order" },
		{ "PLAY_IN_ORDER.Name", "EBarkPlayingRule::PLAY_IN_ORDER" },
		{ "PLAY_NEXT_AFTER_FINISHING.DisplayName", "Play next line after finishing first one" },
		{ "PLAY_NEXT_AFTER_FINISHING.Name", "EBarkPlayingRule::PLAY_NEXT_AFTER_FINISHING" },
		{ "PLAY_WITH_DELAY.DisplayName", "Play with delay" },
		{ "PLAY_WITH_DELAY.Name", "EBarkPlayingRule::PLAY_WITH_DELAY" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "system rules" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBarkPlayingRule::PLAY_CLOSEST_ONLY", (int64)EBarkPlayingRule::PLAY_CLOSEST_ONLY },
		{ "EBarkPlayingRule::PLAY_WITH_DELAY", (int64)EBarkPlayingRule::PLAY_WITH_DELAY },
		{ "EBarkPlayingRule::PLAY_IN_ORDER", (int64)EBarkPlayingRule::PLAY_IN_ORDER },
		{ "EBarkPlayingRule::PLAY_NEXT_AFTER_FINISHING", (int64)EBarkPlayingRule::PLAY_NEXT_AFTER_FINISHING },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RibEye_EBarkPlayingRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	"EBarkPlayingRule",
	"EBarkPlayingRule",
	Z_Construct_UEnum_RibEye_EBarkPlayingRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EBarkPlayingRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RibEye_EBarkPlayingRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RibEye_EBarkPlayingRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RibEye_EBarkPlayingRule()
{
	if (!Z_Registration_Info_UEnum_EBarkPlayingRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBarkPlayingRule.InnerSingleton, Z_Construct_UEnum_RibEye_EBarkPlayingRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBarkPlayingRule.InnerSingleton;
}
// End Enum EBarkPlayingRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_Enums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDialogueState_StaticEnum, TEXT("EDialogueState"), &Z_Registration_Info_UEnum_EDialogueState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4087865414U) },
		{ EPendingType_StaticEnum, TEXT("EPendingType"), &Z_Registration_Info_UEnum_EPendingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 279531135U) },
		{ EPhraseType_StaticEnum, TEXT("EPhraseType"), &Z_Registration_Info_UEnum_EPhraseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1349684343U) },
		{ EVoicePreset_StaticEnum, TEXT("EVoicePreset"), &Z_Registration_Info_UEnum_EVoicePreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3822199425U) },
		{ EBarkType_StaticEnum, TEXT("EBarkType"), &Z_Registration_Info_UEnum_EBarkType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3398760379U) },
		{ ELineType_StaticEnum, TEXT("ELineType"), &Z_Registration_Info_UEnum_ELineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4109494101U) },
		{ EAllianceType_StaticEnum, TEXT("EAllianceType"), &Z_Registration_Info_UEnum_EAllianceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2366655750U) },
		{ EIgnoreDialogueType_StaticEnum, TEXT("EIgnoreDialogueType"), &Z_Registration_Info_UEnum_EIgnoreDialogueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1557341401U) },
		{ EGroupType_StaticEnum, TEXT("EGroupType"), &Z_Registration_Info_UEnum_EGroupType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4065326185U) },
		{ EAlert_StaticEnum, TEXT("EAlert"), &Z_Registration_Info_UEnum_EAlert, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3817312066U) },
		{ EJoinReplyType_StaticEnum, TEXT("EJoinReplyType"), &Z_Registration_Info_UEnum_EJoinReplyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1089151379U) },
		{ EBarkPlayingRule_StaticEnum, TEXT("EBarkPlayingRule"), &Z_Registration_Info_UEnum_EBarkPlayingRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1912644817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_Enums_h_639069883(TEXT("/Script/RibEye"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_Enums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_Enums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
