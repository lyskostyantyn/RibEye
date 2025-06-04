// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RibEye/DialogueManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueManager() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RIBEYE_API UClass* Z_Construct_UClass_UDialogueManager();
RIBEYE_API UClass* Z_Construct_UClass_UDialogueManager_NoRegister();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EAlert();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EBarkPlayingRule();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EBarkType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EDialogueState();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_ELineType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EPhraseType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EVoicePreset();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FActorList();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FBarkGenericData();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FBarkSpeakerData();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueData();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FLineCooldownInfo();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FLineData();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FLineEntry();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FLineInstance();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FLineInstanceCollection();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FLinePlayInfo();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FLineTypeInfo();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FPendingActorPriorityMap();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FRules();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceDictionary();
UPackage* Z_Construct_UPackage__Script_RibEye();
// End Cross Module References

// Begin ScriptStruct FLineData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LineData;
class UScriptStruct* FLineData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LineData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LineData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLineData, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("LineData"));
	}
	return Z_Registration_Info_UScriptStruct_LineData.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FLineData>()
{
	return FLineData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLineData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineID_MetaData[] = {
		{ "Category", "LineData" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineInstanceID_MetaData[] = {
		{ "Category", "LineData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used in conversation system to define generic sense of phrase\n" },
#endif
		{ "ModuleRelativePath", "DialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used in conversation system to define generic sense of phrase" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LineID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LineInstanceID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLineData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLineData_Statics::NewProp_LineID = { "LineID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineData, LineID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineID_MetaData), NewProp_LineID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLineData_Statics::NewProp_LineInstanceID = { "LineInstanceID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineData, LineInstanceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineInstanceID_MetaData), NewProp_LineInstanceID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLineData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineData_Statics::NewProp_LineID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineData_Statics::NewProp_LineInstanceID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLineData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"LineData",
	Z_Construct_UScriptStruct_FLineData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineData_Statics::PropPointers),
	sizeof(FLineData),
	alignof(FLineData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLineData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLineData()
{
	if (!Z_Registration_Info_UScriptStruct_LineData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LineData.InnerSingleton, Z_Construct_UScriptStruct_FLineData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LineData.InnerSingleton;
}
// End ScriptStruct FLineData

// Begin ScriptStruct FLineTypeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LineTypeInfo;
class UScriptStruct* FLineTypeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LineTypeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LineTypeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLineTypeInfo, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("LineTypeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LineTypeInfo.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FLineTypeInfo>()
{
	return FLineTypeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLineTypeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Voice Line Dictionary\n" },
#endif
		{ "ModuleRelativePath", "DialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voice Line Dictionary" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineType_MetaData[] = {
		{ "Category", "LineTypeInfo" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterType_MetaData[] = {
		{ "Category", "LineTypeInfo" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MasterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MasterType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLineTypeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLineTypeInfo_Statics::NewProp_LineType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLineTypeInfo_Statics::NewProp_LineType = { "LineType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineTypeInfo, LineType), Z_Construct_UEnum_RibEye_ELineType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineType_MetaData), NewProp_LineType_MetaData) }; // 4109494101
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLineTypeInfo_Statics::NewProp_MasterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLineTypeInfo_Statics::NewProp_MasterType = { "MasterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineTypeInfo, MasterType), Z_Construct_UEnum_RibEye_EPhraseType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterType_MetaData), NewProp_MasterType_MetaData) }; // 1349684343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLineTypeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineTypeInfo_Statics::NewProp_LineType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineTypeInfo_Statics::NewProp_LineType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineTypeInfo_Statics::NewProp_MasterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineTypeInfo_Statics::NewProp_MasterType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineTypeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLineTypeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"LineTypeInfo",
	Z_Construct_UScriptStruct_FLineTypeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineTypeInfo_Statics::PropPointers),
	sizeof(FLineTypeInfo),
	alignof(FLineTypeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineTypeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLineTypeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLineTypeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_LineTypeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LineTypeInfo.InnerSingleton, Z_Construct_UScriptStruct_FLineTypeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LineTypeInfo.InnerSingleton;
}
// End ScriptStruct FLineTypeInfo

// Begin ScriptStruct FLineCooldownInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LineCooldownInfo;
class UScriptStruct* FLineCooldownInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LineCooldownInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LineCooldownInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLineCooldownInfo, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("LineCooldownInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LineCooldownInfo.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FLineCooldownInfo>()
{
	return FLineCooldownInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLineCooldownInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountOfSimultaneousPlays_MetaData[] = {
		{ "Category", "LineCooldownInfo" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineCooldownTime_MetaData[] = {
		{ "Category", "LineCooldownInfo" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountOfSimultaneousPlays;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineCooldownTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLineCooldownInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLineCooldownInfo_Statics::NewProp_CountOfSimultaneousPlays = { "CountOfSimultaneousPlays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineCooldownInfo, CountOfSimultaneousPlays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountOfSimultaneousPlays_MetaData), NewProp_CountOfSimultaneousPlays_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLineCooldownInfo_Statics::NewProp_LineCooldownTime = { "LineCooldownTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineCooldownInfo, LineCooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineCooldownTime_MetaData), NewProp_LineCooldownTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLineCooldownInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineCooldownInfo_Statics::NewProp_CountOfSimultaneousPlays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineCooldownInfo_Statics::NewProp_LineCooldownTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineCooldownInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLineCooldownInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"LineCooldownInfo",
	Z_Construct_UScriptStruct_FLineCooldownInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineCooldownInfo_Statics::PropPointers),
	sizeof(FLineCooldownInfo),
	alignof(FLineCooldownInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineCooldownInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLineCooldownInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLineCooldownInfo()
{
	if (!Z_Registration_Info_UScriptStruct_LineCooldownInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LineCooldownInfo.InnerSingleton, Z_Construct_UScriptStruct_FLineCooldownInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LineCooldownInfo.InnerSingleton;
}
// End ScriptStruct FLineCooldownInfo

// Begin ScriptStruct FLinePlayInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LinePlayInfo;
class UScriptStruct* FLinePlayInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LinePlayInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LinePlayInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinePlayInfo, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("LinePlayInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LinePlayInfo.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FLinePlayInfo>()
{
	return FLinePlayInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLinePlayInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineText_MetaData[] = {
		{ "Category", "LinePlayInfo" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[] = {
		{ "Category", "LinePlayInfo" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LineText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinePlayInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLinePlayInfo_Statics::NewProp_LineText = { "LineText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLinePlayInfo, LineText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineText_MetaData), NewProp_LineText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLinePlayInfo_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLinePlayInfo, DelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayTime_MetaData), NewProp_DelayTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLinePlayInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinePlayInfo_Statics::NewProp_LineText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinePlayInfo_Statics::NewProp_DelayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinePlayInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLinePlayInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"LinePlayInfo",
	Z_Construct_UScriptStruct_FLinePlayInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinePlayInfo_Statics::PropPointers),
	sizeof(FLinePlayInfo),
	alignof(FLinePlayInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinePlayInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLinePlayInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLinePlayInfo()
{
	if (!Z_Registration_Info_UScriptStruct_LinePlayInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LinePlayInfo.InnerSingleton, Z_Construct_UScriptStruct_FLinePlayInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LinePlayInfo.InnerSingleton;
}
// End ScriptStruct FLinePlayInfo

// Begin ScriptStruct FLineInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LineInstance;
class UScriptStruct* FLineInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LineInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LineInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLineInstance, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("LineInstance"));
	}
	return Z_Registration_Info_UScriptStruct_LineInstance.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FLineInstance>()
{
	return FLineInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLineInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayInfo_MetaData[] = {
		{ "Category", "LineInstance" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownInfo_MetaData[] = {
		{ "Category", "LineInstance" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLineInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineInstance_Statics::NewProp_PlayInfo = { "PlayInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineInstance, PlayInfo), Z_Construct_UScriptStruct_FLinePlayInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayInfo_MetaData), NewProp_PlayInfo_MetaData) }; // 1296013148
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineInstance_Statics::NewProp_CooldownInfo = { "CooldownInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineInstance, CooldownInfo), Z_Construct_UScriptStruct_FLineCooldownInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownInfo_MetaData), NewProp_CooldownInfo_MetaData) }; // 658129774
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLineInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineInstance_Statics::NewProp_PlayInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineInstance_Statics::NewProp_CooldownInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLineInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"LineInstance",
	Z_Construct_UScriptStruct_FLineInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineInstance_Statics::PropPointers),
	sizeof(FLineInstance),
	alignof(FLineInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLineInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLineInstance()
{
	if (!Z_Registration_Info_UScriptStruct_LineInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LineInstance.InnerSingleton, Z_Construct_UScriptStruct_FLineInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LineInstance.InnerSingleton;
}
// End ScriptStruct FLineInstance

// Begin ScriptStruct FLineInstanceCollection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LineInstanceCollection;
class UScriptStruct* FLineInstanceCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LineInstanceCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LineInstanceCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLineInstanceCollection, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("LineInstanceCollection"));
	}
	return Z_Registration_Info_UScriptStruct_LineInstanceCollection.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FLineInstanceCollection>()
{
	return FLineInstanceCollection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLineInstanceCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineInstances_MetaData[] = {
		{ "Category", "LineInstanceCollection" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LineInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLineInstanceCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineInstanceCollection_Statics::NewProp_LineInstances_Inner = { "LineInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLineInstance, METADATA_PARAMS(0, nullptr) }; // 463893630
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLineInstanceCollection_Statics::NewProp_LineInstances = { "LineInstances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineInstanceCollection, LineInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineInstances_MetaData), NewProp_LineInstances_MetaData) }; // 463893630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLineInstanceCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineInstanceCollection_Statics::NewProp_LineInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineInstanceCollection_Statics::NewProp_LineInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineInstanceCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLineInstanceCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"LineInstanceCollection",
	Z_Construct_UScriptStruct_FLineInstanceCollection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineInstanceCollection_Statics::PropPointers),
	sizeof(FLineInstanceCollection),
	alignof(FLineInstanceCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineInstanceCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLineInstanceCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLineInstanceCollection()
{
	if (!Z_Registration_Info_UScriptStruct_LineInstanceCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LineInstanceCollection.InnerSingleton, Z_Construct_UScriptStruct_FLineInstanceCollection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LineInstanceCollection.InnerSingleton;
}
// End ScriptStruct FLineInstanceCollection

// Begin ScriptStruct FVoiceDictionary
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoiceDictionary;
class UScriptStruct* FVoiceDictionary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceDictionary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoiceDictionary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceDictionary, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("VoiceDictionary"));
	}
	return Z_Registration_Info_UScriptStruct_VoiceDictionary.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FVoiceDictionary>()
{
	return FVoiceDictionary::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVoiceDictionary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineInstanceCollection_MetaData[] = {
		{ "Category", "VoiceDictionary" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineInstanceCollection_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LineInstanceCollection_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LineInstanceCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceDictionary>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoiceDictionary_Statics::NewProp_LineInstanceCollection_ValueProp = { "LineInstanceCollection", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLineInstanceCollection, METADATA_PARAMS(0, nullptr) }; // 1501282652
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoiceDictionary_Statics::NewProp_LineInstanceCollection_Key_KeyProp = { "LineInstanceCollection_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVoiceDictionary_Statics::NewProp_LineInstanceCollection = { "LineInstanceCollection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoiceDictionary, LineInstanceCollection), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineInstanceCollection_MetaData), NewProp_LineInstanceCollection_MetaData) }; // 1501282652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoiceDictionary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceDictionary_Statics::NewProp_LineInstanceCollection_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceDictionary_Statics::NewProp_LineInstanceCollection_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceDictionary_Statics::NewProp_LineInstanceCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceDictionary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoiceDictionary_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"VoiceDictionary",
	Z_Construct_UScriptStruct_FVoiceDictionary_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceDictionary_Statics::PropPointers),
	sizeof(FVoiceDictionary),
	alignof(FVoiceDictionary),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceDictionary_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoiceDictionary_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoiceDictionary()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceDictionary.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoiceDictionary.InnerSingleton, Z_Construct_UScriptStruct_FVoiceDictionary_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VoiceDictionary.InnerSingleton;
}
// End ScriptStruct FVoiceDictionary

// Begin ScriptStruct FLineEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LineEntry;
class UScriptStruct* FLineEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LineEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LineEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLineEntry, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("LineEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LineEntry.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FLineEntry>()
{
	return FLineEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLineEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dialogue Structs\n" },
#endif
		{ "ModuleRelativePath", "DialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Structs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineData_MetaData[] = {
		{ "Category", "LineEntry" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_MetaData[] = {
		{ "Category", "LineEntry" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AdditionalData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLineEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineEntry_Statics::NewProp_LineData = { "LineData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineEntry, LineData), Z_Construct_UScriptStruct_FLineData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineData_MetaData), NewProp_LineData_MetaData) }; // 3642006561
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLineEntry_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineEntry, AdditionalData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalData_MetaData), NewProp_AdditionalData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLineEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineEntry_Statics::NewProp_LineData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineEntry_Statics::NewProp_AdditionalData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLineEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"LineEntry",
	Z_Construct_UScriptStruct_FLineEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineEntry_Statics::PropPointers),
	sizeof(FLineEntry),
	alignof(FLineEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLineEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLineEntry()
{
	if (!Z_Registration_Info_UScriptStruct_LineEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LineEntry.InnerSingleton, Z_Construct_UScriptStruct_FLineEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LineEntry.InnerSingleton;
}
// End ScriptStruct FLineEntry

// Begin ScriptStruct FDialogueLine
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueLine;
class UScriptStruct* FDialogueLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueLine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueLine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueLine, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("DialogueLine"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueLine.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FDialogueLine>()
{
	return FDialogueLine::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "Category", "DialogueLine" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Replier_MetaData[] = {
		{ "Category", "DialogueLine" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineEntry_MetaData[] = {
		{ "Category", "DialogueLine" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Replier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineEntry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueLine>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, Speaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Replier = { "Replier", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, Replier), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Replier_MetaData), NewProp_Replier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_LineEntry = { "LineEntry", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueLine, LineEntry), Z_Construct_UScriptStruct_FLineEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineEntry_MetaData), NewProp_LineEntry_MetaData) }; // 3901584155
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_Replier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLine_Statics::NewProp_LineEntry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueLine_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"DialogueLine",
	Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::PropPointers),
	sizeof(FDialogueLine),
	alignof(FDialogueLine),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueLine_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueLine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueLine.InnerSingleton, Z_Construct_UScriptStruct_FDialogueLine_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueLine.InnerSingleton;
}
// End ScriptStruct FDialogueLine

// Begin ScriptStruct FActorList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorList;
class UScriptStruct* FActorList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorList, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("ActorList"));
	}
	return Z_Registration_Info_UScriptStruct_ActorList.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FActorList>()
{
	return FActorList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "Category", "ActorList" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorList_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorList_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorList, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorList_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorList_Statics::NewProp_Actors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"ActorList",
	Z_Construct_UScriptStruct_FActorList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorList_Statics::PropPointers),
	sizeof(FActorList),
	alignof(FActorList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorList()
{
	if (!Z_Registration_Info_UScriptStruct_ActorList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorList.InnerSingleton, Z_Construct_UScriptStruct_FActorList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorList.InnerSingleton;
}
// End ScriptStruct FActorList

// Begin ScriptStruct FPendingActorPriorityMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PendingActorPriorityMap;
class UScriptStruct* FPendingActorPriorityMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PendingActorPriorityMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PendingActorPriorityMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingActorPriorityMap, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("PendingActorPriorityMap"));
	}
	return Z_Registration_Info_UScriptStruct_PendingActorPriorityMap.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FPendingActorPriorityMap>()
{
	return FPendingActorPriorityMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorMap_MetaData[] = {
		{ "Category", "PendingActorPriorityMap" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActorMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingActorPriorityMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::NewProp_ActorMap_ValueProp = { "ActorMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::NewProp_ActorMap_Key_KeyProp = { "ActorMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::NewProp_ActorMap = { "ActorMap", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPendingActorPriorityMap, ActorMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorMap_MetaData), NewProp_ActorMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::NewProp_ActorMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::NewProp_ActorMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::NewProp_ActorMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"PendingActorPriorityMap",
	Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::PropPointers),
	sizeof(FPendingActorPriorityMap),
	alignof(FPendingActorPriorityMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPendingActorPriorityMap()
{
	if (!Z_Registration_Info_UScriptStruct_PendingActorPriorityMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PendingActorPriorityMap.InnerSingleton, Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PendingActorPriorityMap.InnerSingleton;
}
// End ScriptStruct FPendingActorPriorityMap

// Begin ScriptStruct FDialogueData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueData;
class UScriptStruct* FDialogueData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueData, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("DialogueData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FDialogueData>()
{
	return FDialogueData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSpokenTime_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueState_MetaData[] = {
		{ "Category", "DialogueData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// is set when we request main participant to answer, but they have nothing to say\n" },
#endif
		{ "ModuleRelativePath", "DialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "is set when we request main participant to answer, but they have nothing to say" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingParticipants_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Listeners_MetaData[] = {
		{ "Category", "DialogueData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI that just listen to conversation when someone else asks smth from theirs allies\n" },
#endif
		{ "ModuleRelativePath", "DialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI that just listen to conversation when someone else asks smth from theirs allies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerGroups_MetaData[] = {
		{ "Category", "DialogueData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// interesting part\n// for every speaker, contains theirs own ally group (according to personal vision\n// of speaker, so everyone who heard could update alert state of whole that group\n// we store it because at the end of conversation group might be changed \n" },
#endif
		{ "ModuleRelativePath", "DialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "interesting part\nfor every speaker, contains theirs own ally group (according to personal vision\nof speaker, so everyone who heard could update alert state of whole that group\nwe store it because at the end of conversation group might be changed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Participants;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dialogue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastSpokenTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogueState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogueState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingParticipants;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Listeners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Listeners;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeakerGroups_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakerGroups_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpeakerGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Participants_Inner = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueData, Participants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participants_MetaData), NewProp_Participants_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue_Inner = { "Dialogue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(0, nullptr) }; // 3930301776
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueData, Dialogue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogue_MetaData), NewProp_Dialogue_MetaData) }; // 3930301776
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_LastSpokenTime = { "LastSpokenTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueData, LastSpokenTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSpokenTime_MetaData), NewProp_LastSpokenTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueState = { "DialogueState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueData, DialogueState), Z_Construct_UEnum_RibEye_EDialogueState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueState_MetaData), NewProp_DialogueState_MetaData) }; // 4087865414
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_PendingParticipants = { "PendingParticipants", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueData, PendingParticipants), Z_Construct_UScriptStruct_FPendingActorPriorityMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingParticipants_MetaData), NewProp_PendingParticipants_MetaData) }; // 644960532
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Listeners_Inner = { "Listeners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Listeners = { "Listeners", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueData, Listeners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Listeners_MetaData), NewProp_Listeners_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_SpeakerGroups_ValueProp = { "SpeakerGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FActorList, METADATA_PARAMS(0, nullptr) }; // 1979894250
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_SpeakerGroups_Key_KeyProp = { "SpeakerGroups_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_SpeakerGroups = { "SpeakerGroups", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueData, SpeakerGroups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerGroups_MetaData), NewProp_SpeakerGroups_MetaData) }; // 1979894250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Participants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Participants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_LastSpokenTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_PendingParticipants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Listeners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Listeners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_SpeakerGroups_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_SpeakerGroups_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_SpeakerGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"DialogueData",
	Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers),
	sizeof(FDialogueData),
	alignof(FDialogueData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueData()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton, Z_Construct_UScriptStruct_FDialogueData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton;
}
// End ScriptStruct FDialogueData

// Begin ScriptStruct FBarkSpeakerData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BarkSpeakerData;
class UScriptStruct* FBarkSpeakerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BarkSpeakerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BarkSpeakerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBarkSpeakerData, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("BarkSpeakerData"));
	}
	return Z_Registration_Info_UScriptStruct_BarkSpeakerData.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FBarkSpeakerData>()
{
	return FBarkSpeakerData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBarkSpeakerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Category", "BarkSpeakerData" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarkType_MetaData[] = {
		{ "Category", "BarkSpeakerData" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "BarkSpeakerData" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BarkType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BarkType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBarkSpeakerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBarkSpeakerData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::NewProp_BarkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::NewProp_BarkType = { "BarkType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBarkSpeakerData, BarkType), Z_Construct_UEnum_RibEye_EBarkType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarkType_MetaData), NewProp_BarkType_MetaData) }; // 3556101725
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBarkSpeakerData, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::NewProp_BarkType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::NewProp_BarkType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"BarkSpeakerData",
	Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::PropPointers),
	sizeof(FBarkSpeakerData),
	alignof(FBarkSpeakerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBarkSpeakerData()
{
	if (!Z_Registration_Info_UScriptStruct_BarkSpeakerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BarkSpeakerData.InnerSingleton, Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BarkSpeakerData.InnerSingleton;
}
// End ScriptStruct FBarkSpeakerData

// Begin ScriptStruct FBarkGenericData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BarkGenericData;
class UScriptStruct* FBarkGenericData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BarkGenericData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BarkGenericData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBarkGenericData, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("BarkGenericData"));
	}
	return Z_Registration_Info_UScriptStruct_BarkGenericData.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FBarkGenericData>()
{
	return FBarkGenericData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBarkGenericData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmiterPosition_MetaData[] = {
		{ "Category", "BarkGenericData" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarkReleaseTime_MetaData[] = {
		{ "Category", "BarkGenericData" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speakers_MetaData[] = {
		{ "Category", "BarkGenericData" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmiterPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BarkReleaseTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Speakers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Speakers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBarkGenericData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBarkGenericData_Statics::NewProp_EmiterPosition = { "EmiterPosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBarkGenericData, EmiterPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmiterPosition_MetaData), NewProp_EmiterPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBarkGenericData_Statics::NewProp_BarkReleaseTime = { "BarkReleaseTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBarkGenericData, BarkReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarkReleaseTime_MetaData), NewProp_BarkReleaseTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBarkGenericData_Statics::NewProp_Speakers_Inner = { "Speakers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBarkSpeakerData, METADATA_PARAMS(0, nullptr) }; // 879884519
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBarkGenericData_Statics::NewProp_Speakers = { "Speakers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBarkGenericData, Speakers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speakers_MetaData), NewProp_Speakers_MetaData) }; // 879884519
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBarkGenericData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBarkGenericData_Statics::NewProp_EmiterPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBarkGenericData_Statics::NewProp_BarkReleaseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBarkGenericData_Statics::NewProp_Speakers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBarkGenericData_Statics::NewProp_Speakers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBarkGenericData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBarkGenericData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"BarkGenericData",
	Z_Construct_UScriptStruct_FBarkGenericData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBarkGenericData_Statics::PropPointers),
	sizeof(FBarkGenericData),
	alignof(FBarkGenericData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBarkGenericData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBarkGenericData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBarkGenericData()
{
	if (!Z_Registration_Info_UScriptStruct_BarkGenericData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BarkGenericData.InnerSingleton, Z_Construct_UScriptStruct_FBarkGenericData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BarkGenericData.InnerSingleton;
}
// End ScriptStruct FBarkGenericData

// Begin ScriptStruct FRules
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Rules;
class UScriptStruct* FRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Rules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Rules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRules, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("Rules"));
	}
	return Z_Registration_Info_UScriptStruct_Rules.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FRules>()
{
	return FRules::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarkRule_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarkDelayTime_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BarkRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BarkRule;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BarkDelayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRules>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRules_Statics::NewProp_BarkRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRules_Statics::NewProp_BarkRule = { "BarkRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRules, BarkRule), Z_Construct_UEnum_RibEye_EBarkPlayingRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarkRule_MetaData), NewProp_BarkRule_MetaData) }; // 1912644817
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRules_Statics::NewProp_BarkDelayTime = { "BarkDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRules, BarkDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarkDelayTime_MetaData), NewProp_BarkDelayTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRules_Statics::NewProp_BarkRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRules_Statics::NewProp_BarkRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRules_Statics::NewProp_BarkDelayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRules_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"Rules",
	Z_Construct_UScriptStruct_FRules_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRules_Statics::PropPointers),
	sizeof(FRules),
	alignof(FRules),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRules_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRules()
{
	if (!Z_Registration_Info_UScriptStruct_Rules.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Rules.InnerSingleton, Z_Construct_UScriptStruct_FRules_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Rules.InnerSingleton;
}
// End ScriptStruct FRules

// Begin Class UDialogueManager Function AddToListeners
struct Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics
{
	struct DialogueManager_eventAddToListeners_Parms
	{
		int32 DialogueID;
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventAddToListeners_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventAddToListeners_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueManager_eventAddToListeners_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueManager_eventAddToListeners_Parms), &Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "AddToListeners", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::DialogueManager_eventAddToListeners_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::DialogueManager_eventAddToListeners_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_AddToListeners()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_AddToListeners_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execAddToListeners)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddToListeners(Z_Param_DialogueID,Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UDialogueManager Function AddToListeners

// Begin Class UDialogueManager Function AddToPendingParticipants
struct Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics
{
	struct DialogueManager_eventAddToPendingParticipants_Parms
	{
		int32 DialogueID;
		AActor* Actor;
		float Priority;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventAddToPendingParticipants_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventAddToPendingParticipants_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventAddToPendingParticipants_Parms, Priority), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueManager_eventAddToPendingParticipants_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueManager_eventAddToPendingParticipants_Parms), &Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "AddToPendingParticipants", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::DialogueManager_eventAddToPendingParticipants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::DialogueManager_eventAddToPendingParticipants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execAddToPendingParticipants)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddToPendingParticipants(Z_Param_DialogueID,Z_Param_Actor,Z_Param_Priority);
	P_NATIVE_END;
}
// End Class UDialogueManager Function AddToPendingParticipants

// Begin Class UDialogueManager Function ContinueBark
struct Z_Construct_UFunction_UDialogueManager_ContinueBark_Statics
{
	struct DialogueManager_eventContinueBark_Parms
	{
		AActor* Speaker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// not used if barkType is PLAY_WITH_DELAY\n" },
#endif
		{ "ModuleRelativePath", "DialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "not used if barkType is PLAY_WITH_DELAY" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueManager_ContinueBark_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventContinueBark_Parms, Speaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_ContinueBark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_ContinueBark_Statics::NewProp_Speaker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_ContinueBark_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_ContinueBark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "ContinueBark", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_ContinueBark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_ContinueBark_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_ContinueBark_Statics::DialogueManager_eventContinueBark_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_ContinueBark_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_ContinueBark_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_ContinueBark_Statics::DialogueManager_eventContinueBark_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_ContinueBark()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_ContinueBark_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execContinueBark)
{
	P_GET_OBJECT(AActor,Z_Param_Speaker);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ContinueBark(Z_Param_Speaker);
	P_NATIVE_END;
}
// End Class UDialogueManager Function ContinueBark

// Begin Class UDialogueManager Function ContinueDialogue
struct Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics
{
	struct DialogueManager_eventContinueDialogue_Parms
	{
		int32 DialogueID;
		FDialogueLine DialogueLine;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventContinueDialogue_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventContinueDialogue_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(0, nullptr) }; // 3930301776
void Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueManager_eventContinueDialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueManager_eventContinueDialogue_Parms), &Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::NewProp_DialogueLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "ContinueDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::DialogueManager_eventContinueDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::DialogueManager_eventContinueDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_ContinueDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_ContinueDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execContinueDialogue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_GET_STRUCT(FDialogueLine,Z_Param_DialogueLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContinueDialogue(Z_Param_DialogueID,Z_Param_DialogueLine);
	P_NATIVE_END;
}
// End Class UDialogueManager Function ContinueDialogue

// Begin Class UDialogueManager Function FindActiveDialogueOfActor
struct Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics
{
	struct DialogueManager_eventFindActiveDialogueOfActor_Parms
	{
		AActor* Actor;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GETTERS\n" },
#endif
		{ "ModuleRelativePath", "DialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GETTERS" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventFindActiveDialogueOfActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventFindActiveDialogueOfActor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "FindActiveDialogueOfActor", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::DialogueManager_eventFindActiveDialogueOfActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::DialogueManager_eventFindActiveDialogueOfActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execFindActiveDialogueOfActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FindActiveDialogueOfActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UDialogueManager Function FindActiveDialogueOfActor

// Begin Class UDialogueManager Function GetAllyGroupList
struct Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics
{
	struct DialogueManager_eventGetAllyGroupList_Parms
	{
		int32 DialogueID;
		AActor* Actor;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetAllyGroupList_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetAllyGroupList_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetAllyGroupList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "GetAllyGroupList", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::DialogueManager_eventGetAllyGroupList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::DialogueManager_eventGetAllyGroupList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_GetAllyGroupList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_GetAllyGroupList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execGetAllyGroupList)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAllyGroupList(Z_Param_DialogueID,Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UDialogueManager Function GetAllyGroupList

// Begin Class UDialogueManager Function GetDialogueByID
struct Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics
{
	struct DialogueManager_eventGetDialogueByID_Parms
	{
		int32 DialogueID;
		FDialogueData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetDialogueByID_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetDialogueByID_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueData, METADATA_PARAMS(0, nullptr) }; // 3021039114
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "GetDialogueByID", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::DialogueManager_eventGetDialogueByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::DialogueManager_eventGetDialogueByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_GetDialogueByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_GetDialogueByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execGetDialogueByID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogueData*)Z_Param__Result=P_THIS->GetDialogueByID(Z_Param_DialogueID);
	P_NATIVE_END;
}
// End Class UDialogueManager Function GetDialogueByID

// Begin Class UDialogueManager Function GetLineIdListFromTypes
struct Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics
{
	struct DialogueManager_eventGetLineIdListFromTypes_Parms
	{
		TArray<ELineType> LineTypes;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineTypes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LineTypes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::NewProp_LineTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::NewProp_LineTypes_Inner = { "LineTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RibEye_ELineType, METADATA_PARAMS(0, nullptr) }; // 4109494101
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::NewProp_LineTypes = { "LineTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetLineIdListFromTypes_Parms, LineTypes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4109494101
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetLineIdListFromTypes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::NewProp_LineTypes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::NewProp_LineTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::NewProp_LineTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "GetLineIdListFromTypes", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::DialogueManager_eventGetLineIdListFromTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::DialogueManager_eventGetLineIdListFromTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execGetLineIdListFromTypes)
{
	P_GET_TARRAY(ELineType,Z_Param_LineTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetLineIdListFromTypes(Z_Param_LineTypes);
	P_NATIVE_END;
}
// End Class UDialogueManager Function GetLineIdListFromTypes

// Begin Class UDialogueManager Function GetLineMasteryType
struct Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics
{
	struct DialogueManager_eventGetLineMasteryType_Parms
	{
		FString LineID;
		EPhraseType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LineID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::NewProp_LineID = { "LineID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetLineMasteryType_Parms, LineID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetLineMasteryType_Parms, ReturnValue), Z_Construct_UEnum_RibEye_EPhraseType, METADATA_PARAMS(0, nullptr) }; // 1349684343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::NewProp_LineID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "GetLineMasteryType", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::DialogueManager_eventGetLineMasteryType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::DialogueManager_eventGetLineMasteryType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_GetLineMasteryType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_GetLineMasteryType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execGetLineMasteryType)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LineID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EPhraseType*)Z_Param__Result=P_THIS->GetLineMasteryType(Z_Param_LineID);
	P_NATIVE_END;
}
// End Class UDialogueManager Function GetLineMasteryType

// Begin Class UDialogueManager Function GetLinePlayInfo
struct Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics
{
	struct DialogueManager_eventGetLinePlayInfo_Parms
	{
		EVoicePreset Voice;
		FLineData Data;
		FLinePlayInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Voice_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Voice;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::NewProp_Voice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::NewProp_Voice = { "Voice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetLinePlayInfo_Parms, Voice), Z_Construct_UEnum_RibEye_EVoicePreset, METADATA_PARAMS(0, nullptr) }; // 3822199425
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetLinePlayInfo_Parms, Data), Z_Construct_UScriptStruct_FLineData, METADATA_PARAMS(0, nullptr) }; // 3642006561
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetLinePlayInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinePlayInfo, METADATA_PARAMS(0, nullptr) }; // 1296013148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::NewProp_Voice_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::NewProp_Voice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "GetLinePlayInfo", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::DialogueManager_eventGetLinePlayInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::DialogueManager_eventGetLinePlayInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execGetLinePlayInfo)
{
	P_GET_ENUM(EVoicePreset,Z_Param_Voice);
	P_GET_STRUCT(FLineData,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinePlayInfo*)Z_Param__Result=P_THIS->GetLinePlayInfo(EVoicePreset(Z_Param_Voice),Z_Param_Data);
	P_NATIVE_END;
}
// End Class UDialogueManager Function GetLinePlayInfo

// Begin Class UDialogueManager Function GetLineType
struct Z_Construct_UFunction_UDialogueManager_GetLineType_Statics
{
	struct DialogueManager_eventGetLineType_Parms
	{
		FString LineID;
		ELineType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LineID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::NewProp_LineID = { "LineID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetLineType_Parms, LineID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetLineType_Parms, ReturnValue), Z_Construct_UEnum_RibEye_ELineType, METADATA_PARAMS(0, nullptr) }; // 4109494101
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::NewProp_LineID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "GetLineType", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::DialogueManager_eventGetLineType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::DialogueManager_eventGetLineType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_GetLineType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_GetLineType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execGetLineType)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LineID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ELineType*)Z_Param__Result=P_THIS->GetLineType(Z_Param_LineID);
	P_NATIVE_END;
}
// End Class UDialogueManager Function GetLineType

// Begin Class UDialogueManager Function GetLineTypePriority
struct Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics
{
	struct DialogueManager_eventGetLineTypePriority_Parms
	{
		ELineType LineType;
		EAlert ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::NewProp_LineType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::NewProp_LineType = { "LineType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetLineTypePriority_Parms, LineType), Z_Construct_UEnum_RibEye_ELineType, METADATA_PARAMS(0, nullptr) }; // 4109494101
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetLineTypePriority_Parms, ReturnValue), Z_Construct_UEnum_RibEye_EAlert, METADATA_PARAMS(0, nullptr) }; // 3817312066
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::NewProp_LineType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::NewProp_LineType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "GetLineTypePriority", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::DialogueManager_eventGetLineTypePriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::DialogueManager_eventGetLineTypePriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_GetLineTypePriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_GetLineTypePriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execGetLineTypePriority)
{
	P_GET_ENUM(ELineType,Z_Param_LineType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAlert*)Z_Param__Result=P_THIS->GetLineTypePriority(ELineType(Z_Param_LineType));
	P_NATIVE_END;
}
// End Class UDialogueManager Function GetLineTypePriority

// Begin Class UDialogueManager Function GetRandomLineFromLineIds
struct Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics
{
	struct DialogueManager_eventGetRandomLineFromLineIds_Parms
	{
		EVoicePreset Voice;
		TArray<FString> LineIDs;
		FLineData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Voice_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Voice;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LineIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LineIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::NewProp_Voice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::NewProp_Voice = { "Voice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetRandomLineFromLineIds_Parms, Voice), Z_Construct_UEnum_RibEye_EVoicePreset, METADATA_PARAMS(0, nullptr) }; // 3822199425
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::NewProp_LineIDs_Inner = { "LineIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::NewProp_LineIDs = { "LineIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetRandomLineFromLineIds_Parms, LineIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetRandomLineFromLineIds_Parms, ReturnValue), Z_Construct_UScriptStruct_FLineData, METADATA_PARAMS(0, nullptr) }; // 3642006561
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::NewProp_Voice_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::NewProp_Voice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::NewProp_LineIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::NewProp_LineIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "GetRandomLineFromLineIds", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::DialogueManager_eventGetRandomLineFromLineIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::DialogueManager_eventGetRandomLineFromLineIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execGetRandomLineFromLineIds)
{
	P_GET_ENUM(EVoicePreset,Z_Param_Voice);
	P_GET_TARRAY(FString,Z_Param_LineIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLineData*)Z_Param__Result=P_THIS->GetRandomLineFromLineIds(EVoicePreset(Z_Param_Voice),Z_Param_LineIDs);
	P_NATIVE_END;
}
// End Class UDialogueManager Function GetRandomLineFromLineIds

// Begin Class UDialogueManager Function GetRandomLineFromTypes
struct Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics
{
	struct DialogueManager_eventGetRandomLineFromTypes_Parms
	{
		EVoicePreset Voice;
		TArray<ELineType> LineTypes;
		FLineData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Voice_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Voice;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineTypes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LineTypes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::NewProp_Voice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::NewProp_Voice = { "Voice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetRandomLineFromTypes_Parms, Voice), Z_Construct_UEnum_RibEye_EVoicePreset, METADATA_PARAMS(0, nullptr) }; // 3822199425
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::NewProp_LineTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::NewProp_LineTypes_Inner = { "LineTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RibEye_ELineType, METADATA_PARAMS(0, nullptr) }; // 4109494101
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::NewProp_LineTypes = { "LineTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetRandomLineFromTypes_Parms, LineTypes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4109494101
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventGetRandomLineFromTypes_Parms, ReturnValue), Z_Construct_UScriptStruct_FLineData, METADATA_PARAMS(0, nullptr) }; // 3642006561
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::NewProp_Voice_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::NewProp_Voice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::NewProp_LineTypes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::NewProp_LineTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::NewProp_LineTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "GetRandomLineFromTypes", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::DialogueManager_eventGetRandomLineFromTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::DialogueManager_eventGetRandomLineFromTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execGetRandomLineFromTypes)
{
	P_GET_ENUM(EVoicePreset,Z_Param_Voice);
	P_GET_TARRAY(ELineType,Z_Param_LineTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLineData*)Z_Param__Result=P_THIS->GetRandomLineFromTypes(EVoicePreset(Z_Param_Voice),Z_Param_LineTypes);
	P_NATIVE_END;
}
// End Class UDialogueManager Function GetRandomLineFromTypes

// Begin Class UDialogueManager Function HasDialoguePendingParticipants
struct Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics
{
	struct DialogueManager_eventHasDialoguePendingParticipants_Parms
	{
		int32 DialogueID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventHasDialoguePendingParticipants_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueManager_eventHasDialoguePendingParticipants_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueManager_eventHasDialoguePendingParticipants_Parms), &Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "HasDialoguePendingParticipants", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::DialogueManager_eventHasDialoguePendingParticipants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::DialogueManager_eventHasDialoguePendingParticipants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execHasDialoguePendingParticipants)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasDialoguePendingParticipants(Z_Param_DialogueID);
	P_NATIVE_END;
}
// End Class UDialogueManager Function HasDialoguePendingParticipants

// Begin Class UDialogueManager Function HaveCommonActiveDialogue
struct Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics
{
	struct DialogueManager_eventHaveCommonActiveDialogue_Parms
	{
		TArray<AActor*> FirstGroup;
		TArray<AActor*> SecondGroup;
		EAlert AlertState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstGroup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FirstGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondGroup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SecondGroup;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlertState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlertState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_FirstGroup_Inner = { "FirstGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_FirstGroup = { "FirstGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventHaveCommonActiveDialogue_Parms, FirstGroup), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_SecondGroup_Inner = { "SecondGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_SecondGroup = { "SecondGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventHaveCommonActiveDialogue_Parms, SecondGroup), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_AlertState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_AlertState = { "AlertState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventHaveCommonActiveDialogue_Parms, AlertState), Z_Construct_UEnum_RibEye_EAlert, METADATA_PARAMS(0, nullptr) }; // 3817312066
void Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueManager_eventHaveCommonActiveDialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueManager_eventHaveCommonActiveDialogue_Parms), &Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_FirstGroup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_FirstGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_SecondGroup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_SecondGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_AlertState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_AlertState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "HaveCommonActiveDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::DialogueManager_eventHaveCommonActiveDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::DialogueManager_eventHaveCommonActiveDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execHaveCommonActiveDialogue)
{
	P_GET_TARRAY(AActor*,Z_Param_FirstGroup);
	P_GET_TARRAY(AActor*,Z_Param_SecondGroup);
	P_GET_ENUM(EAlert,Z_Param_AlertState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HaveCommonActiveDialogue(Z_Param_FirstGroup,Z_Param_SecondGroup,EAlert(Z_Param_AlertState));
	P_NATIVE_END;
}
// End Class UDialogueManager Function HaveCommonActiveDialogue

// Begin Class UDialogueManager Function IsAMemberOfADialogue
struct Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics
{
	struct DialogueManager_eventIsAMemberOfADialogue_Parms
	{
		int32 DialogueID;
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventIsAMemberOfADialogue_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventIsAMemberOfADialogue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueManager_eventIsAMemberOfADialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueManager_eventIsAMemberOfADialogue_Parms), &Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "IsAMemberOfADialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::DialogueManager_eventIsAMemberOfADialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::DialogueManager_eventIsAMemberOfADialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execIsAMemberOfADialogue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAMemberOfADialogue(Z_Param_DialogueID,Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UDialogueManager Function IsAMemberOfADialogue

// Begin Class UDialogueManager Function IsDialogueValid
struct Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics
{
	struct DialogueManager_eventIsDialogueValid_Parms
	{
		int32 DialogueID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IS CHECKERS\n" },
#endif
		{ "ModuleRelativePath", "DialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IS CHECKERS" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventIsDialogueValid_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueManager_eventIsDialogueValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueManager_eventIsDialogueValid_Parms), &Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "IsDialogueValid", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::DialogueManager_eventIsDialogueValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::DialogueManager_eventIsDialogueValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_IsDialogueValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_IsDialogueValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execIsDialogueValid)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDialogueValid(Z_Param_DialogueID);
	P_NATIVE_END;
}
// End Class UDialogueManager Function IsDialogueValid

// Begin Class UDialogueManager Function IsMainPartEnded
struct Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics
{
	struct DialogueManager_eventIsMainPartEnded_Parms
	{
		int32 DialogueID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventIsMainPartEnded_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueManager_eventIsMainPartEnded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueManager_eventIsMainPartEnded_Parms), &Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "IsMainPartEnded", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::DialogueManager_eventIsMainPartEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::DialogueManager_eventIsMainPartEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_IsMainPartEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_IsMainPartEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execIsMainPartEnded)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMainPartEnded(Z_Param_DialogueID);
	P_NATIVE_END;
}
// End Class UDialogueManager Function IsMainPartEnded

// Begin Class UDialogueManager Function MakeABark
struct Z_Construct_UFunction_UDialogueManager_MakeABark_Statics
{
	struct DialogueManager_eventMakeABark_Parms
	{
		FVector SoundPosition;
		FBarkSpeakerData SpeakerData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeakerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::NewProp_SoundPosition = { "SoundPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventMakeABark_Parms, SoundPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundPosition_MetaData), NewProp_SoundPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::NewProp_SpeakerData = { "SpeakerData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventMakeABark_Parms, SpeakerData), Z_Construct_UScriptStruct_FBarkSpeakerData, METADATA_PARAMS(0, nullptr) }; // 879884519
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::NewProp_SoundPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::NewProp_SpeakerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "MakeABark", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::DialogueManager_eventMakeABark_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::DialogueManager_eventMakeABark_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_MakeABark()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_MakeABark_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execMakeABark)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SoundPosition);
	P_GET_STRUCT(FBarkSpeakerData,Z_Param_SpeakerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MakeABark(Z_Param_Out_SoundPosition,Z_Param_SpeakerData);
	P_NATIVE_END;
}
// End Class UDialogueManager Function MakeABark

// Begin Class UDialogueManager Function MakeADialogue
struct Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics
{
	struct DialogueManager_eventMakeADialogue_Parms
	{
		FDialogueLine DialogueLine;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventMakeADialogue_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(0, nullptr) }; // 3930301776
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventMakeADialogue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::NewProp_DialogueLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "MakeADialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::DialogueManager_eventMakeADialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::DialogueManager_eventMakeADialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_MakeADialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_MakeADialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execMakeADialogue)
{
	P_GET_STRUCT(FDialogueLine,Z_Param_DialogueLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->MakeADialogue(Z_Param_DialogueLine);
	P_NATIVE_END;
}
// End Class UDialogueManager Function MakeADialogue

// Begin Class UDialogueManager Function OnMainPartEnded
struct Z_Construct_UFunction_UDialogueManager_OnMainPartEnded_Statics
{
	struct DialogueManager_eventOnMainPartEnded_Parms
	{
		int32 DialogueID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_OnMainPartEnded_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventOnMainPartEnded_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_OnMainPartEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_OnMainPartEnded_Statics::NewProp_DialogueID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_OnMainPartEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_OnMainPartEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "OnMainPartEnded", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_OnMainPartEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_OnMainPartEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_OnMainPartEnded_Statics::DialogueManager_eventOnMainPartEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_OnMainPartEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_OnMainPartEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_OnMainPartEnded_Statics::DialogueManager_eventOnMainPartEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_OnMainPartEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_OnMainPartEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execOnMainPartEnded)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMainPartEnded(Z_Param_DialogueID);
	P_NATIVE_END;
}
// End Class UDialogueManager Function OnMainPartEnded

// Begin Class UDialogueManager Function RefuseToBark
struct Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics
{
	struct DialogueManager_eventRefuseToBark_Parms
	{
		AActor* Speaker;
		FVector EmitterPos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// shouldn't be used at all actually\n" },
#endif
		{ "ModuleRelativePath", "DialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "shouldn't be used at all actually" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterPos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventRefuseToBark_Parms, Speaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::NewProp_EmitterPos = { "EmitterPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventRefuseToBark_Parms, EmitterPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterPos_MetaData), NewProp_EmitterPos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::NewProp_EmitterPos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "RefuseToBark", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::DialogueManager_eventRefuseToBark_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::DialogueManager_eventRefuseToBark_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_RefuseToBark()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_RefuseToBark_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execRefuseToBark)
{
	P_GET_OBJECT(AActor,Z_Param_Speaker);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_EmitterPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefuseToBark(Z_Param_Speaker,Z_Param_Out_EmitterPos);
	P_NATIVE_END;
}
// End Class UDialogueManager Function RefuseToBark

// Begin Class UDialogueManager Function RemoveActorFromDialogue
struct Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics
{
	struct DialogueManager_eventRemoveActorFromDialogue_Parms
	{
		int32 DialogueID;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventRemoveActorFromDialogue_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventRemoveActorFromDialogue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "RemoveActorFromDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::DialogueManager_eventRemoveActorFromDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::DialogueManager_eventRemoveActorFromDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execRemoveActorFromDialogue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveActorFromDialogue(Z_Param_DialogueID,Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UDialogueManager Function RemoveActorFromDialogue

// Begin Class UDialogueManager Function RemoveFromPendingParticipants
struct Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics
{
	struct DialogueManager_eventRemoveFromPendingParticipants_Parms
	{
		int32 DialogueID;
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventRemoveFromPendingParticipants_Parms, DialogueID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueManager_eventRemoveFromPendingParticipants_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueManager_eventRemoveFromPendingParticipants_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueManager_eventRemoveFromPendingParticipants_Parms), &Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "RemoveFromPendingParticipants", nullptr, nullptr, Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::DialogueManager_eventRemoveFromPendingParticipants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::DialogueManager_eventRemoveFromPendingParticipants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueManager::execRemoveFromPendingParticipants)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveFromPendingParticipants(Z_Param_DialogueID,Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UDialogueManager Function RemoveFromPendingParticipants

// Begin Class UDialogueManager
void UDialogueManager::StaticRegisterNativesUDialogueManager()
{
	UClass* Class = UDialogueManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToListeners", &UDialogueManager::execAddToListeners },
		{ "AddToPendingParticipants", &UDialogueManager::execAddToPendingParticipants },
		{ "ContinueBark", &UDialogueManager::execContinueBark },
		{ "ContinueDialogue", &UDialogueManager::execContinueDialogue },
		{ "FindActiveDialogueOfActor", &UDialogueManager::execFindActiveDialogueOfActor },
		{ "GetAllyGroupList", &UDialogueManager::execGetAllyGroupList },
		{ "GetDialogueByID", &UDialogueManager::execGetDialogueByID },
		{ "GetLineIdListFromTypes", &UDialogueManager::execGetLineIdListFromTypes },
		{ "GetLineMasteryType", &UDialogueManager::execGetLineMasteryType },
		{ "GetLinePlayInfo", &UDialogueManager::execGetLinePlayInfo },
		{ "GetLineType", &UDialogueManager::execGetLineType },
		{ "GetLineTypePriority", &UDialogueManager::execGetLineTypePriority },
		{ "GetRandomLineFromLineIds", &UDialogueManager::execGetRandomLineFromLineIds },
		{ "GetRandomLineFromTypes", &UDialogueManager::execGetRandomLineFromTypes },
		{ "HasDialoguePendingParticipants", &UDialogueManager::execHasDialoguePendingParticipants },
		{ "HaveCommonActiveDialogue", &UDialogueManager::execHaveCommonActiveDialogue },
		{ "IsAMemberOfADialogue", &UDialogueManager::execIsAMemberOfADialogue },
		{ "IsDialogueValid", &UDialogueManager::execIsDialogueValid },
		{ "IsMainPartEnded", &UDialogueManager::execIsMainPartEnded },
		{ "MakeABark", &UDialogueManager::execMakeABark },
		{ "MakeADialogue", &UDialogueManager::execMakeADialogue },
		{ "OnMainPartEnded", &UDialogueManager::execOnMainPartEnded },
		{ "RefuseToBark", &UDialogueManager::execRefuseToBark },
		{ "RemoveActorFromDialogue", &UDialogueManager::execRemoveActorFromDialogue },
		{ "RemoveFromPendingParticipants", &UDialogueManager::execRemoveFromPendingParticipants },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueManager);
UClass* Z_Construct_UClass_UDialogueManager_NoRegister()
{
	return UDialogueManager::StaticClass();
}
struct Z_Construct_UClass_UDialogueManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DialogueManager.h" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidDialogue_MetaData[] = {
		{ "Category", "DialogueManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INVALID DATA BEGIN\n" },
#endif
		{ "ModuleRelativePath", "DialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INVALID DATA BEGIN" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveDialogWaitTime_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// INVALID DATA END\n" },
#endif
		{ "ModuleRelativePath", "DialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INVALID DATA END" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinPendingWaitTime_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleDurationTime_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarkReleaseTime_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagerRules_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionHelper_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceCollection_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineTypesMap_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarkEmiterData_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineTypePriority_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InvalidDialogue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemoveDialogWaitTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JoinPendingWaitTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleDurationTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BarkReleaseTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManagerRules;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionHelper;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoiceCollection_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VoiceCollection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineTypesMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LineTypesMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LineTypesMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BarkEmiterData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BarkEmiterData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineTypePriority_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineTypePriority_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineTypePriority_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineTypePriority_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LineTypePriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueManager_AddToListeners, "AddToListeners" }, // 77998876
		{ &Z_Construct_UFunction_UDialogueManager_AddToPendingParticipants, "AddToPendingParticipants" }, // 259900345
		{ &Z_Construct_UFunction_UDialogueManager_ContinueBark, "ContinueBark" }, // 1818309752
		{ &Z_Construct_UFunction_UDialogueManager_ContinueDialogue, "ContinueDialogue" }, // 906453419
		{ &Z_Construct_UFunction_UDialogueManager_FindActiveDialogueOfActor, "FindActiveDialogueOfActor" }, // 1705278406
		{ &Z_Construct_UFunction_UDialogueManager_GetAllyGroupList, "GetAllyGroupList" }, // 1102211902
		{ &Z_Construct_UFunction_UDialogueManager_GetDialogueByID, "GetDialogueByID" }, // 2545780795
		{ &Z_Construct_UFunction_UDialogueManager_GetLineIdListFromTypes, "GetLineIdListFromTypes" }, // 728418322
		{ &Z_Construct_UFunction_UDialogueManager_GetLineMasteryType, "GetLineMasteryType" }, // 3240223997
		{ &Z_Construct_UFunction_UDialogueManager_GetLinePlayInfo, "GetLinePlayInfo" }, // 2266353777
		{ &Z_Construct_UFunction_UDialogueManager_GetLineType, "GetLineType" }, // 2860100318
		{ &Z_Construct_UFunction_UDialogueManager_GetLineTypePriority, "GetLineTypePriority" }, // 4099672684
		{ &Z_Construct_UFunction_UDialogueManager_GetRandomLineFromLineIds, "GetRandomLineFromLineIds" }, // 3071023855
		{ &Z_Construct_UFunction_UDialogueManager_GetRandomLineFromTypes, "GetRandomLineFromTypes" }, // 3362087435
		{ &Z_Construct_UFunction_UDialogueManager_HasDialoguePendingParticipants, "HasDialoguePendingParticipants" }, // 3664698200
		{ &Z_Construct_UFunction_UDialogueManager_HaveCommonActiveDialogue, "HaveCommonActiveDialogue" }, // 622739693
		{ &Z_Construct_UFunction_UDialogueManager_IsAMemberOfADialogue, "IsAMemberOfADialogue" }, // 3237935724
		{ &Z_Construct_UFunction_UDialogueManager_IsDialogueValid, "IsDialogueValid" }, // 2005614525
		{ &Z_Construct_UFunction_UDialogueManager_IsMainPartEnded, "IsMainPartEnded" }, // 1607104688
		{ &Z_Construct_UFunction_UDialogueManager_MakeABark, "MakeABark" }, // 945810527
		{ &Z_Construct_UFunction_UDialogueManager_MakeADialogue, "MakeADialogue" }, // 1184491833
		{ &Z_Construct_UFunction_UDialogueManager_OnMainPartEnded, "OnMainPartEnded" }, // 873971921
		{ &Z_Construct_UFunction_UDialogueManager_RefuseToBark, "RefuseToBark" }, // 527526661
		{ &Z_Construct_UFunction_UDialogueManager_RemoveActorFromDialogue, "RemoveActorFromDialogue" }, // 2142558307
		{ &Z_Construct_UFunction_UDialogueManager_RemoveFromPendingParticipants, "RemoveFromPendingParticipants" }, // 3430838081
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_InvalidDialogue = { "InvalidDialogue", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManager, InvalidDialogue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidDialogue_MetaData), NewProp_InvalidDialogue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_RemoveDialogWaitTime = { "RemoveDialogWaitTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManager, RemoveDialogWaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveDialogWaitTime_MetaData), NewProp_RemoveDialogWaitTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_JoinPendingWaitTime = { "JoinPendingWaitTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManager, JoinPendingWaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinPendingWaitTime_MetaData), NewProp_JoinPendingWaitTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_ScaleDurationTime = { "ScaleDurationTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManager, ScaleDurationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleDurationTime_MetaData), NewProp_ScaleDurationTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_BarkReleaseTime = { "BarkReleaseTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManager, BarkReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarkReleaseTime_MetaData), NewProp_BarkReleaseTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_ManagerRules = { "ManagerRules", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManager, ManagerRules), Z_Construct_UScriptStruct_FRules, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagerRules_MetaData), NewProp_ManagerRules_MetaData) }; // 392102986
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_PerceptionHelper = { "PerceptionHelper", nullptr, (EPropertyFlags)0x002008000008200d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManager, PerceptionHelper), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionHelper_MetaData), NewProp_PerceptionHelper_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_VoiceCollection_Inner = { "VoiceCollection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoiceDictionary, METADATA_PARAMS(0, nullptr) }; // 1041126081
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_VoiceCollection = { "VoiceCollection", nullptr, (EPropertyFlags)0x0020080000002015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManager, VoiceCollection), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceCollection_MetaData), NewProp_VoiceCollection_MetaData) }; // 1041126081
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypesMap_ValueProp = { "LineTypesMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLineTypeInfo, METADATA_PARAMS(0, nullptr) }; // 3690838219
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypesMap_Key_KeyProp = { "LineTypesMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypesMap = { "LineTypesMap", nullptr, (EPropertyFlags)0x0020080000002015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManager, LineTypesMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineTypesMap_MetaData), NewProp_LineTypesMap_MetaData) }; // 3690838219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_BarkEmiterData_Inner = { "BarkEmiterData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBarkGenericData, METADATA_PARAMS(0, nullptr) }; // 4192590162
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_BarkEmiterData = { "BarkEmiterData", nullptr, (EPropertyFlags)0x0020080000002015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManager, BarkEmiterData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarkEmiterData_MetaData), NewProp_BarkEmiterData_MetaData) }; // 4192590162
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypePriority_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypePriority_ValueProp = { "LineTypePriority", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_RibEye_EAlert, METADATA_PARAMS(0, nullptr) }; // 3817312066
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypePriority_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypePriority_Key_KeyProp = { "LineTypePriority_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RibEye_ELineType, METADATA_PARAMS(0, nullptr) }; // 4109494101
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypePriority = { "LineTypePriority", nullptr, (EPropertyFlags)0x0020080000002015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueManager, LineTypePriority), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineTypePriority_MetaData), NewProp_LineTypePriority_MetaData) }; // 4109494101 3817312066
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_InvalidDialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_RemoveDialogWaitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_JoinPendingWaitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_ScaleDurationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_BarkReleaseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_ManagerRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_PerceptionHelper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_VoiceCollection_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_VoiceCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypesMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypesMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypesMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_BarkEmiterData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_BarkEmiterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypePriority_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypePriority_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypePriority_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypePriority_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueManager_Statics::NewProp_LineTypePriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueManager_Statics::ClassParams = {
	&UDialogueManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogueManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueManager()
{
	if (!Z_Registration_Info_UClass_UDialogueManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueManager.OuterSingleton, Z_Construct_UClass_UDialogueManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueManager.OuterSingleton;
}
template<> RIBEYE_API UClass* StaticClass<UDialogueManager>()
{
	return UDialogueManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueManager);
UDialogueManager::~UDialogueManager() {}
// End Class UDialogueManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLineData::StaticStruct, Z_Construct_UScriptStruct_FLineData_Statics::NewStructOps, TEXT("LineData"), &Z_Registration_Info_UScriptStruct_LineData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLineData), 3642006561U) },
		{ FLineTypeInfo::StaticStruct, Z_Construct_UScriptStruct_FLineTypeInfo_Statics::NewStructOps, TEXT("LineTypeInfo"), &Z_Registration_Info_UScriptStruct_LineTypeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLineTypeInfo), 3690838219U) },
		{ FLineCooldownInfo::StaticStruct, Z_Construct_UScriptStruct_FLineCooldownInfo_Statics::NewStructOps, TEXT("LineCooldownInfo"), &Z_Registration_Info_UScriptStruct_LineCooldownInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLineCooldownInfo), 658129774U) },
		{ FLinePlayInfo::StaticStruct, Z_Construct_UScriptStruct_FLinePlayInfo_Statics::NewStructOps, TEXT("LinePlayInfo"), &Z_Registration_Info_UScriptStruct_LinePlayInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLinePlayInfo), 1296013148U) },
		{ FLineInstance::StaticStruct, Z_Construct_UScriptStruct_FLineInstance_Statics::NewStructOps, TEXT("LineInstance"), &Z_Registration_Info_UScriptStruct_LineInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLineInstance), 463893630U) },
		{ FLineInstanceCollection::StaticStruct, Z_Construct_UScriptStruct_FLineInstanceCollection_Statics::NewStructOps, TEXT("LineInstanceCollection"), &Z_Registration_Info_UScriptStruct_LineInstanceCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLineInstanceCollection), 1501282652U) },
		{ FVoiceDictionary::StaticStruct, Z_Construct_UScriptStruct_FVoiceDictionary_Statics::NewStructOps, TEXT("VoiceDictionary"), &Z_Registration_Info_UScriptStruct_VoiceDictionary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoiceDictionary), 1041126081U) },
		{ FLineEntry::StaticStruct, Z_Construct_UScriptStruct_FLineEntry_Statics::NewStructOps, TEXT("LineEntry"), &Z_Registration_Info_UScriptStruct_LineEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLineEntry), 3901584155U) },
		{ FDialogueLine::StaticStruct, Z_Construct_UScriptStruct_FDialogueLine_Statics::NewStructOps, TEXT("DialogueLine"), &Z_Registration_Info_UScriptStruct_DialogueLine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueLine), 3930301776U) },
		{ FActorList::StaticStruct, Z_Construct_UScriptStruct_FActorList_Statics::NewStructOps, TEXT("ActorList"), &Z_Registration_Info_UScriptStruct_ActorList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorList), 1979894250U) },
		{ FPendingActorPriorityMap::StaticStruct, Z_Construct_UScriptStruct_FPendingActorPriorityMap_Statics::NewStructOps, TEXT("PendingActorPriorityMap"), &Z_Registration_Info_UScriptStruct_PendingActorPriorityMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPendingActorPriorityMap), 644960532U) },
		{ FDialogueData::StaticStruct, Z_Construct_UScriptStruct_FDialogueData_Statics::NewStructOps, TEXT("DialogueData"), &Z_Registration_Info_UScriptStruct_DialogueData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueData), 3021039114U) },
		{ FBarkSpeakerData::StaticStruct, Z_Construct_UScriptStruct_FBarkSpeakerData_Statics::NewStructOps, TEXT("BarkSpeakerData"), &Z_Registration_Info_UScriptStruct_BarkSpeakerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBarkSpeakerData), 879884519U) },
		{ FBarkGenericData::StaticStruct, Z_Construct_UScriptStruct_FBarkGenericData_Statics::NewStructOps, TEXT("BarkGenericData"), &Z_Registration_Info_UScriptStruct_BarkGenericData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBarkGenericData), 4192590162U) },
		{ FRules::StaticStruct, Z_Construct_UScriptStruct_FRules_Statics::NewStructOps, TEXT("Rules"), &Z_Registration_Info_UScriptStruct_Rules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRules), 392102986U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueManager, UDialogueManager::StaticClass, TEXT("UDialogueManager"), &Z_Registration_Info_UClass_UDialogueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueManager), 1344712635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_4034754363(TEXT("/Script/RibEye"),
	Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_DialogueManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
