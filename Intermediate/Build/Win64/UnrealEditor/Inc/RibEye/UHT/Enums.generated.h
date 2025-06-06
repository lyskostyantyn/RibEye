// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIBEYE_Enums_generated_h
#error "Enums.generated.h already included, missing '#pragma once' in Enums.h"
#endif
#define RIBEYE_Enums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_Enums_h


#define FOREACH_ENUM_EDIALOGUESTATE(op) \
	op(EDialogueState::STARTED) \
	op(EDialogueState::MAIN_PART_ENDED) 

enum class EDialogueState : uint8;
template<> struct TIsUEnumClass<EDialogueState> { enum { Value = true }; };
template<> RIBEYE_API UEnum* StaticEnum<EDialogueState>();

#define FOREACH_ENUM_EPENDINGTYPE(op) \
	op(EPendingType::INVALID) \
	op(EPendingType::ASK_TO_JOIN) \
	op(EPendingType::REPLY_INSTEAD_MAIN) \
	op(EPendingType::MISSED_LINE_COMMENT) 

enum class EPendingType : uint8;
template<> struct TIsUEnumClass<EPendingType> { enum { Value = true }; };
template<> RIBEYE_API UEnum* StaticEnum<EPendingType>();

#define FOREACH_ENUM_EPHRASETYPE(op) \
	op(EPhraseType::MAIN) \
	op(EPhraseType::SECONDARY) \
	op(EPhraseType::SECONDARY_2) \
	op(EPhraseType::VOICE_NUM) 

enum class EPhraseType : uint8;
template<> struct TIsUEnumClass<EPhraseType> { enum { Value = true }; };
template<> RIBEYE_API UEnum* StaticEnum<EPhraseType>();

#define FOREACH_ENUM_EVOICEPRESET(op) \
	op(EVoicePreset::STANDARD) \
	op(EVoicePreset::VOICE_NUM) 

enum class EVoicePreset : uint8;
template<> struct TIsUEnumClass<EVoicePreset> { enum { Value = true }; };
template<> RIBEYE_API UEnum* StaticEnum<EVoicePreset>();

#define FOREACH_ENUM_EBARKTYPE(op) \
	op(EBarkType::SURPRISED) \
	op(EBarkType::INV_INFORM) \
	op(EBarkType::INV_IGNORE) \
	op(EBarkType::INV_REP_NOISE) \
	op(EBarkType::BARK_NUM) 

enum class EBarkType : uint8;
template<> struct TIsUEnumClass<EBarkType> { enum { Value = true }; };
template<> RIBEYE_API UEnum* StaticEnum<EBarkType>();

#define FOREACH_ENUM_ELINETYPE(op) \
	op(ELineType::INVALID) \
	op(ELineType::GREETING) \
	op(ELineType::GREETING_REPLY) \
	op(ELineType::GREETING_END) \
	op(ELineType::SURPRISE) \
	op(ELineType::INVESTIGATION_MAIN) \
	op(ELineType::INVESTIGATION_SECONDARY) \
	op(ELineType::INVESTIGATION_DISCUSSION) \
	op(ELineType::INVESTIGATION_REPLY_MAIN) \
	op(ELineType::INVESTIGATION_REPLY_SECONDARY) \
	op(ELineType::INVESTIGATION_BOTH_MAIN) \
	op(ELineType::INVESTIGATION_BOTH_SECONDARY) \
	op(ELineType::COMMENT_MISSED_ANSWER) 

enum class ELineType : uint8;
template<> struct TIsUEnumClass<ELineType> { enum { Value = true }; };
template<> RIBEYE_API UEnum* StaticEnum<ELineType>();

#define FOREACH_ENUM_EALLIANCETYPE(op) \
	op(EAllianceType::ALLY) \
	op(EAllianceType::ENEMY) \
	op(EAllianceType::UNKNOWN) 

enum class EAllianceType : uint8;
template<> struct TIsUEnumClass<EAllianceType> { enum { Value = true }; };
template<> RIBEYE_API UEnum* StaticEnum<EAllianceType>();

#define FOREACH_ENUM_EIGNOREDIALOGUETYPE(op) \
	op(EIgnoreDialogueType::None) \
	op(EIgnoreDialogueType::Patrol) \
	op(EIgnoreDialogueType::Investigation) \
	op(EIgnoreDialogueType::Combat) 

enum class EIgnoreDialogueType : uint8;
template<> struct TIsUEnumClass<EIgnoreDialogueType> { enum { Value = true }; };
template<> RIBEYE_API UEnum* StaticEnum<EIgnoreDialogueType>();

#define FOREACH_ENUM_EGROUPTYPE(op) \
	op(EGroupType::PATROL) \
	op(EGroupType::INVESTIGATE) \
	op(EGroupType::ATTACK) \
	op(EGroupType::OWN) 

enum class EGroupType : uint8;
template<> struct TIsUEnumClass<EGroupType> { enum { Value = true }; };
template<> RIBEYE_API UEnum* StaticEnum<EGroupType>();

#define FOREACH_ENUM_EALERT(op) \
	op(EAlert::PASSIVE) \
	op(EAlert::INVESTIGATE) \
	op(EAlert::AGGRESSIVE_INVESTIGATE) \
	op(EAlert::AGGRESSIVE) 

enum class EAlert : uint8;
template<> struct TIsUEnumClass<EAlert> { enum { Value = true }; };
template<> RIBEYE_API UEnum* StaticEnum<EAlert>();

#define FOREACH_ENUM_EJOINREPLYTYPE(op) \
	op(EJoinReplyType::NONE) \
	op(EJoinReplyType::REJECT) \
	op(EJoinReplyType::CAN_JOIN_SINGLE) \
	op(EJoinReplyType::CAN_JOIN_LAST_SINGLE) \
	op(EJoinReplyType::CAN_JOIN_MULT) \
	op(EJoinReplyType::CAN_JOIN_LAST_MULT) \
	op(EJoinReplyType::CAN_JOIN_SOME_MULT) 

enum class EJoinReplyType : uint8;
template<> struct TIsUEnumClass<EJoinReplyType> { enum { Value = true }; };
template<> RIBEYE_API UEnum* StaticEnum<EJoinReplyType>();

#define FOREACH_ENUM_EBARKPLAYINGRULE(op) \
	op(EBarkPlayingRule::PLAY_CLOSEST_ONLY) \
	op(EBarkPlayingRule::PLAY_WITH_DELAY) \
	op(EBarkPlayingRule::PLAY_IN_ORDER) \
	op(EBarkPlayingRule::PLAY_NEXT_AFTER_FINISHING) 

enum class EBarkPlayingRule : uint8;
template<> struct TIsUEnumClass<EBarkPlayingRule> { enum { Value = true }; };
template<> RIBEYE_API UEnum* StaticEnum<EBarkPlayingRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
