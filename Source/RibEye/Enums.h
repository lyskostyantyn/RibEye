#pragma once
#include "CoreMinimal.h"

// dialogue start

static TArray<AActor*> EMPTY_ACTOR_LIST = {};

UENUM(BlueprintType)
enum class EDialogueState : uint8
{
	STARTED UMETA(DisplayName = "Started"),
	MAIN_PART_ENDED UMETA(DisplayName = "MainPartEnded")
};

UENUM(BlueprintType)
enum class EPendingType : uint8
{
	INVALID UMETA(DisplayName = "Invalid"),
	ASK_TO_JOIN UMETA(DisplayName = "Ask to join"),
	REPLY_INSTEAD_MAIN UMETA(DisplayName = "Reply instead"),
	MISSED_LINE_COMMENT UMETA(DisplayName = "Missed line comment"),
};

UENUM(BlueprintType)
enum class EPhraseType : uint8
{
	MAIN UMETA(DisplayName = "Main"),
	SECONDARY UMETA(DisplayName = "Secondary"),
	SECONDARY_2 UMETA(DisplayName = "Secondary_2"),
	VOICE_NUM
};

UENUM(BlueprintType)
enum class EVoicePreset : uint8
{
	STANDARD UMETA(DisplayName = "Standard"),
	VOICE_NUM
};

UENUM(BlueprintType)
enum class EBarkType : uint8
{
	SURPRISED UMETA(DisplayName = "Suprised"),
	INV_INFORM UMETA(DisplayName = "Inform about investigating"),
	BARK_NUM
};

UENUM(BlueprintType)
enum class ELineType : uint8
{
	INVALID UMETA(DisplayName = "Invalid"),
	GREETING UMETA(DisplayName = "Greeting"),
	GREETING_REPLY UMETA(DisplayName = "Greeting reply"),
	GREETING_END UMETA(DisplayName = "Greeting end"),
	SURPRISE UMETA(DisplayName = "Surprise"), // bark type

	// INVESTIGATE 1 VS 1
	INVESTIGATION_MAIN UMETA(DisplayName = "Invite to investigation"),
	INVESTIGATION_SECONDARY UMETA(DisplayName = "Saw investigation"),
	INVESTIGATION_DISCUSSION UMETA(DisplayName = "Discuss Investigation"),
	INVESTIGATION_REPLY_MAIN UMETA(DisplayName = "Final reply from investigator"),
	INVESTIGATION_REPLY_SECONDARY UMETA(DisplayName = "Final reply from witness"),
	INVESTIGATION_BOTH_MAIN UMETA(DisplayName = "Both AI investigate, main starts"),
	INVESTIGATION_BOTH_SECONDARY UMETA(DisplayName = "Both AI investigate, secondary starts"),
	COMMENT_MISSED_ANSWER UMETA(DisplayName = "Comment on missed answer"),
};

// dialogue ends

// social starts

UENUM(BlueprintType)
enum class EAllianceType : uint8
{
	ALLY UMETA(DisplayName = "Ally"),
	ENEMY UMETA(DisplayName = "Enemy"),
	UNKNOWN UMETA(DisplayName = "Unknown"),
};

UENUM(BlueprintType, meta = (Bitflags))
enum class EIgnoreDialogueType : uint8
{
	None = 0 UMETA(DisplayName = "None"),
	Patrol = 1 << 1 UMETA(DisplayName = "Patrol"),
	Investigation = 1 << 2 UMETA(DisplayName = "Investigation"),
	Combat = 1 << 3 UMETA(DisplayName = "Combat")
};
ENUM_CLASS_FLAGS(EIgnoreDialogueType)

UENUM(BlueprintType)
enum class EGroupType : uint8
{
	PATROL UMETA(DisplayName = "Patrol"),
	INVESTIGATE UMETA(DisplayName = "Investigate"),
	ATTACK UMETA(DisplayName = "Attack"),
	OWN UMETA(DisplayName = "Own group"),
};

UENUM(BlueprintType)
enum class EAlert : uint8
{
	PASSIVE UMETA(DisplayName = "Passive"),
	INVESTIGATE UMETA(DisplayName = "Investigate"),
	AGGRESSIVE_INVESTIGATE UMETA(DisplayName = "Aggressive_Investigate"),
	AGGRESSIVE UMETA(DisplayName = "Aggressive"),
};

UENUM(BlueprintType, meta = (Bitflags))
enum class EJoinReplyType : uint8
{
	NONE = 0 UMETA(DisplayName = "None"),
	REJECT = 1 << 1 UMETA(DisplayName = "Reject to join"),
	CAN_JOIN_SINGLE = 1 << 2 UMETA(DisplayName = "Can join one AI (no limit said)"),
	CAN_JOIN_LAST_SINGLE = 1 << 3 UMETA(DisplayName = "Can join last one"),
	CAN_JOIN_MULT = 1 << 4 UMETA(DisplayName = "Can join mult (no limit said)"),
	CAN_JOIN_LAST_MULT = 1 << 5 UMETA(DisplayName = "Can join last mult"),
	CAN_JOIN_SOME_MULT = 1 << 6 UMETA(DisplayName = "Can join last some"),
};

// social ends

// system rules

UENUM(BlueprintType)
enum class EBarkPlayingRule : uint8
{
	PLAY_CLOSEST_ONLY UMETA(DisplayName = "Play closest only"),
	PLAY_WITH_DELAY UMETA(DisplayName = "Play with delay"),
	PLAY_IN_ORDER UMETA(DisplayName = "Play in order"),
	PLAY_NEXT_AFTER_FINISHING UMETA(DisplayName = "Play next line after finishing first one"),
};

