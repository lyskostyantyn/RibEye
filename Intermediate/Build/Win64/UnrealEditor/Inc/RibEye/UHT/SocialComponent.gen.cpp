// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RibEye/SocialComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RIBEYE_API UClass* Z_Construct_UClass_USocialComponent();
RIBEYE_API UClass* Z_Construct_UClass_USocialComponent_NoRegister();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EAlert();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EGroupType();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_ELineType();
RIBEYE_API UFunction* Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature();
RIBEYE_API UFunction* Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FAllyGroup();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FAllyGroupInfo();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FAllyKnownState();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FSocialSettings();
UPackage* Z_Construct_UPackage__Script_RibEye();
// End Cross Module References

// Begin ScriptStruct FSocialSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SocialSettings;
class UScriptStruct* FSocialSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SocialSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SocialSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialSettings, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("SocialSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SocialSettings.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FSocialSettings>()
{
	return FSocialSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSocialSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInvestigators_MetaData[] = {
		{ "Category", "SocialSettings" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolveWholeGroupOfAI_MetaData[] = {
		{ "Category", "SocialSettings" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialoguesToIgnore_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EIgnoreDialogueType" },
		{ "Category", "SocialSettings" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInvestigators;
	static void NewProp_ResolveWholeGroupOfAI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResolveWholeGroupOfAI;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialoguesToIgnore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSocialSettings_Statics::NewProp_MaxInvestigators = { "MaxInvestigators", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSocialSettings, MaxInvestigators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInvestigators_MetaData), NewProp_MaxInvestigators_MetaData) };
void Z_Construct_UScriptStruct_FSocialSettings_Statics::NewProp_ResolveWholeGroupOfAI_SetBit(void* Obj)
{
	((FSocialSettings*)Obj)->ResolveWholeGroupOfAI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSocialSettings_Statics::NewProp_ResolveWholeGroupOfAI = { "ResolveWholeGroupOfAI", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSocialSettings), &Z_Construct_UScriptStruct_FSocialSettings_Statics::NewProp_ResolveWholeGroupOfAI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolveWholeGroupOfAI_MetaData), NewProp_ResolveWholeGroupOfAI_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSocialSettings_Statics::NewProp_DialoguesToIgnore = { "DialoguesToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSocialSettings, DialoguesToIgnore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialoguesToIgnore_MetaData), NewProp_DialoguesToIgnore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialSettings_Statics::NewProp_MaxInvestigators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialSettings_Statics::NewProp_ResolveWholeGroupOfAI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialSettings_Statics::NewProp_DialoguesToIgnore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"SocialSettings",
	Z_Construct_UScriptStruct_FSocialSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialSettings_Statics::PropPointers),
	sizeof(FSocialSettings),
	alignof(FSocialSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSocialSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSocialSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SocialSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SocialSettings.InnerSingleton, Z_Construct_UScriptStruct_FSocialSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SocialSettings.InnerSingleton;
}
// End ScriptStruct FSocialSettings

// Begin ScriptStruct FAllyGroupInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AllyGroupInfo;
class UScriptStruct* FAllyGroupInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AllyGroupInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AllyGroupInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAllyGroupInfo, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("AllyGroupInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AllyGroupInfo.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FAllyGroupInfo>()
{
	return FAllyGroupInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAllyGroupInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Allies_MetaData[] = {
		{ "Category", "AllyGroupInfo" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Allies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Allies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAllyGroupInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAllyGroupInfo_Statics::NewProp_Allies_Inner = { "Allies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAllyGroupInfo_Statics::NewProp_Allies = { "Allies", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAllyGroupInfo, Allies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Allies_MetaData), NewProp_Allies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAllyGroupInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllyGroupInfo_Statics::NewProp_Allies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllyGroupInfo_Statics::NewProp_Allies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllyGroupInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAllyGroupInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"AllyGroupInfo",
	Z_Construct_UScriptStruct_FAllyGroupInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllyGroupInfo_Statics::PropPointers),
	sizeof(FAllyGroupInfo),
	alignof(FAllyGroupInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllyGroupInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAllyGroupInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAllyGroupInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AllyGroupInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AllyGroupInfo.InnerSingleton, Z_Construct_UScriptStruct_FAllyGroupInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AllyGroupInfo.InnerSingleton;
}
// End ScriptStruct FAllyGroupInfo

// Begin ScriptStruct FAllyKnownState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AllyKnownState;
class UScriptStruct* FAllyKnownState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AllyKnownState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AllyKnownState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAllyKnownState, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("AllyKnownState"));
	}
	return Z_Registration_Info_UScriptStruct_AllyKnownState.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FAllyKnownState>()
{
	return FAllyKnownState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAllyKnownState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlertState_MetaData[] = {
		{ "Category", "AllyKnownState" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownTime_MetaData[] = {
		{ "Category", "AllyKnownState" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnowledgeResolved_MetaData[] = {
		{ "Category", "AllyKnownState" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlertState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlertState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastKnownTime;
	static void NewProp_KnowledgeResolved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_KnowledgeResolved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAllyKnownState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAllyKnownState_Statics::NewProp_AlertState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAllyKnownState_Statics::NewProp_AlertState = { "AlertState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAllyKnownState, AlertState), Z_Construct_UEnum_RibEye_EAlert, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlertState_MetaData), NewProp_AlertState_MetaData) }; // 3817312066
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAllyKnownState_Statics::NewProp_LastKnownTime = { "LastKnownTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAllyKnownState, LastKnownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownTime_MetaData), NewProp_LastKnownTime_MetaData) };
void Z_Construct_UScriptStruct_FAllyKnownState_Statics::NewProp_KnowledgeResolved_SetBit(void* Obj)
{
	((FAllyKnownState*)Obj)->KnowledgeResolved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAllyKnownState_Statics::NewProp_KnowledgeResolved = { "KnowledgeResolved", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAllyKnownState), &Z_Construct_UScriptStruct_FAllyKnownState_Statics::NewProp_KnowledgeResolved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnowledgeResolved_MetaData), NewProp_KnowledgeResolved_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAllyKnownState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllyKnownState_Statics::NewProp_AlertState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllyKnownState_Statics::NewProp_AlertState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllyKnownState_Statics::NewProp_LastKnownTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllyKnownState_Statics::NewProp_KnowledgeResolved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllyKnownState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAllyKnownState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"AllyKnownState",
	Z_Construct_UScriptStruct_FAllyKnownState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllyKnownState_Statics::PropPointers),
	sizeof(FAllyKnownState),
	alignof(FAllyKnownState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllyKnownState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAllyKnownState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAllyKnownState()
{
	if (!Z_Registration_Info_UScriptStruct_AllyKnownState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AllyKnownState.InnerSingleton, Z_Construct_UScriptStruct_FAllyKnownState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AllyKnownState.InnerSingleton;
}
// End ScriptStruct FAllyKnownState

// Begin ScriptStruct FAllyGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AllyGroup;
class UScriptStruct* FAllyGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AllyGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AllyGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAllyGroup, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("AllyGroup"));
	}
	return Z_Registration_Info_UScriptStruct_AllyGroup.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FAllyGroup>()
{
	return FAllyGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAllyGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "Category", "AllyGroup" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAllyGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAllyGroup_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAllyGroup_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAllyGroup, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAllyGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllyGroup_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAllyGroup_Statics::NewProp_Actors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllyGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAllyGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"AllyGroup",
	Z_Construct_UScriptStruct_FAllyGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllyGroup_Statics::PropPointers),
	sizeof(FAllyGroup),
	alignof(FAllyGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAllyGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAllyGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAllyGroup()
{
	if (!Z_Registration_Info_UScriptStruct_AllyGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AllyGroup.InnerSingleton, Z_Construct_UScriptStruct_FAllyGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AllyGroup.InnerSingleton;
}
// End ScriptStruct FAllyGroup

// Begin Delegate FSocialComponentOnAlertnessChangedSignature
struct Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics
{
	struct _Script_RibEye_eventSocialComponentOnAlertnessChangedSignature_Parms
	{
		EAlert AlertState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlertState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlertState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::NewProp_AlertState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::NewProp_AlertState = { "AlertState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RibEye_eventSocialComponentOnAlertnessChangedSignature_Parms, AlertState), Z_Construct_UEnum_RibEye_EAlert, METADATA_PARAMS(0, nullptr) }; // 3817312066
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::NewProp_AlertState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::NewProp_AlertState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RibEye, nullptr, "SocialComponentOnAlertnessChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::_Script_RibEye_eventSocialComponentOnAlertnessChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::_Script_RibEye_eventSocialComponentOnAlertnessChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSocialComponentOnAlertnessChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SocialComponentOnAlertnessChangedSignature, EAlert AlertState)
{
	struct _Script_RibEye_eventSocialComponentOnAlertnessChangedSignature_Parms
	{
		EAlert AlertState;
	};
	_Script_RibEye_eventSocialComponentOnAlertnessChangedSignature_Parms Parms;
	Parms.AlertState=AlertState;
	SocialComponentOnAlertnessChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSocialComponentOnAlertnessChangedSignature

// Begin Delegate FSocialComponentOnAllyChangedStateSignature
struct Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics
{
	struct _Script_RibEye_eventSocialComponentOnAllyChangedStateSignature_Parms
	{
		AActor* Ally;
		EAlert AlertState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ally;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlertState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlertState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::NewProp_Ally = { "Ally", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RibEye_eventSocialComponentOnAllyChangedStateSignature_Parms, Ally), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::NewProp_AlertState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::NewProp_AlertState = { "AlertState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RibEye_eventSocialComponentOnAllyChangedStateSignature_Parms, AlertState), Z_Construct_UEnum_RibEye_EAlert, METADATA_PARAMS(0, nullptr) }; // 3817312066
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::NewProp_Ally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::NewProp_AlertState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::NewProp_AlertState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RibEye, nullptr, "SocialComponentOnAllyChangedStateSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::_Script_RibEye_eventSocialComponentOnAllyChangedStateSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::_Script_RibEye_eventSocialComponentOnAllyChangedStateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSocialComponentOnAllyChangedStateSignature_DelegateWrapper(const FMulticastScriptDelegate& SocialComponentOnAllyChangedStateSignature, AActor* Ally, EAlert AlertState)
{
	struct _Script_RibEye_eventSocialComponentOnAllyChangedStateSignature_Parms
	{
		AActor* Ally;
		EAlert AlertState;
	};
	_Script_RibEye_eventSocialComponentOnAllyChangedStateSignature_Parms Parms;
	Parms.Ally=Ally;
	Parms.AlertState=AlertState;
	SocialComponentOnAllyChangedStateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSocialComponentOnAllyChangedStateSignature

// Begin Class USocialComponent Function AddActorToGroup
struct Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics
{
	struct SocialComponent_eventAddActorToGroup_Parms
	{
		AActor* Actor;
		EGroupType Group;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Group_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Group;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventAddActorToGroup_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::NewProp_Group_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventAddActorToGroup_Parms, Group), Z_Construct_UEnum_RibEye_EGroupType, METADATA_PARAMS(0, nullptr) }; // 491346619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::NewProp_Group_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::NewProp_Group,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "AddActorToGroup", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::SocialComponent_eventAddActorToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::SocialComponent_eventAddActorToGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_AddActorToGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_AddActorToGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execAddActorToGroup)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_ENUM(EGroupType,Z_Param_Group);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddActorToGroup(Z_Param_Actor,EGroupType(Z_Param_Group));
	P_NATIVE_END;
}
// End Class USocialComponent Function AddActorToGroup

// Begin Class USocialComponent Function AddAnnoyanceLevel
struct Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel_Statics
{
	struct SocialComponent_eventAddAnnoyanceLevel_Parms
	{
		float Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventAddAnnoyanceLevel_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "AddAnnoyanceLevel", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel_Statics::SocialComponent_eventAddAnnoyanceLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel_Statics::SocialComponent_eventAddAnnoyanceLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execAddAnnoyanceLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAnnoyanceLevel(Z_Param_Level);
	P_NATIVE_END;
}
// End Class USocialComponent Function AddAnnoyanceLevel

// Begin Class USocialComponent Function AddMembersToGroup
struct Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics
{
	struct SocialComponent_eventAddMembersToGroup_Parms
	{
		TArray<AActor*> Members;
		EGroupType Group;
		bool Override;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "CPP_Default_Override", "false" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Members;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Group_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Group;
	static void NewProp_Override_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Override;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventAddMembersToGroup_Parms, Members), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::NewProp_Group_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventAddMembersToGroup_Parms, Group), Z_Construct_UEnum_RibEye_EGroupType, METADATA_PARAMS(0, nullptr) }; // 491346619
void Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::NewProp_Override_SetBit(void* Obj)
{
	((SocialComponent_eventAddMembersToGroup_Parms*)Obj)->Override = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::NewProp_Override = { "Override", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SocialComponent_eventAddMembersToGroup_Parms), &Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::NewProp_Override_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::NewProp_Members_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::NewProp_Members,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::NewProp_Group_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::NewProp_Override,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "AddMembersToGroup", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::SocialComponent_eventAddMembersToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::SocialComponent_eventAddMembersToGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_AddMembersToGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_AddMembersToGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execAddMembersToGroup)
{
	P_GET_TARRAY(AActor*,Z_Param_Members);
	P_GET_ENUM(EGroupType,Z_Param_Group);
	P_GET_UBOOL(Z_Param_Override);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMembersToGroup(Z_Param_Members,EGroupType(Z_Param_Group),Z_Param_Override);
	P_NATIVE_END;
}
// End Class USocialComponent Function AddMembersToGroup

// Begin Class USocialComponent Function ClearGroupMembers
struct Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics
{
	struct SocialComponent_eventClearGroupMembers_Parms
	{
		EGroupType Group;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Group_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Group;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::NewProp_Group_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventClearGroupMembers_Parms, Group), Z_Construct_UEnum_RibEye_EGroupType, METADATA_PARAMS(0, nullptr) }; // 491346619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::NewProp_Group_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::NewProp_Group,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "ClearGroupMembers", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::SocialComponent_eventClearGroupMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::SocialComponent_eventClearGroupMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_ClearGroupMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_ClearGroupMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execClearGroupMembers)
{
	P_GET_ENUM(EGroupType,Z_Param_Group);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearGroupMembers(EGroupType(Z_Param_Group));
	P_NATIVE_END;
}
// End Class USocialComponent Function ClearGroupMembers

// Begin Class USocialComponent Function GetAnnoyanceLevel
struct Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel_Statics
{
	struct SocialComponent_eventGetAnnoyanceLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventGetAnnoyanceLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "GetAnnoyanceLevel", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel_Statics::SocialComponent_eventGetAnnoyanceLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel_Statics::SocialComponent_eventGetAnnoyanceLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execGetAnnoyanceLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAnnoyanceLevel();
	P_NATIVE_END;
}
// End Class USocialComponent Function GetAnnoyanceLevel

// Begin Class USocialComponent Function GetDebugText
struct Z_Construct_UFunction_USocialComponent_GetDebugText_Statics
{
	struct SocialComponent_eventGetDebugText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEBUG\n" },
#endif
		{ "ModuleRelativePath", "SocialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEBUG" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocialComponent_GetDebugText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventGetDebugText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_GetDebugText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetDebugText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetDebugText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_GetDebugText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "GetDebugText", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_GetDebugText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetDebugText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_GetDebugText_Statics::SocialComponent_eventGetDebugText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetDebugText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_GetDebugText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_GetDebugText_Statics::SocialComponent_eventGetDebugText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_GetDebugText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_GetDebugText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execGetDebugText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDebugText();
	P_NATIVE_END;
}
// End Class USocialComponent Function GetDebugText

// Begin Class USocialComponent Function GetFaction
struct Z_Construct_UFunction_USocialComponent_GetFaction_Statics
{
	struct SocialComponent_eventGetFaction_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Faction" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocialComponent_GetFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventGetFaction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_GetFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetFaction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetFaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_GetFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "GetFaction", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_GetFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetFaction_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_GetFaction_Statics::SocialComponent_eventGetFaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetFaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_GetFaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_GetFaction_Statics::SocialComponent_eventGetFaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_GetFaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_GetFaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execGetFaction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFaction();
	P_NATIVE_END;
}
// End Class USocialComponent Function GetFaction

// Begin Class USocialComponent Function GetGroupMembers
struct Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics
{
	struct SocialComponent_eventGetGroupMembers_Parms
	{
		EGroupType Group;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Group_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Group;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::NewProp_Group_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventGetGroupMembers_Parms, Group), Z_Construct_UEnum_RibEye_EGroupType, METADATA_PARAMS(0, nullptr) }; // 491346619
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventGetGroupMembers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::NewProp_Group_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "GetGroupMembers", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::SocialComponent_eventGetGroupMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::SocialComponent_eventGetGroupMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_GetGroupMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_GetGroupMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execGetGroupMembers)
{
	P_GET_ENUM(EGroupType,Z_Param_Group);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetGroupMembers(EGroupType(Z_Param_Group));
	P_NATIVE_END;
}
// End Class USocialComponent Function GetGroupMembers

// Begin Class USocialComponent Function GetID
struct Z_Construct_UFunction_USocialComponent_GetID_Statics
{
	struct SocialComponent_eventGetID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocialComponent_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventGetID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_GetID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "GetID", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_GetID_Statics::SocialComponent_eventGetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_GetID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_GetID_Statics::SocialComponent_eventGetID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_GetID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_GetID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execGetID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetID();
	P_NATIVE_END;
}
// End Class USocialComponent Function GetID

// Begin Class USocialComponent Function GetMyGroupNumber
struct Z_Construct_UFunction_USocialComponent_GetMyGroupNumber_Statics
{
	struct SocialComponent_eventGetMyGroupNumber_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocialComponent_GetMyGroupNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventGetMyGroupNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_GetMyGroupNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetMyGroupNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetMyGroupNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_GetMyGroupNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "GetMyGroupNumber", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_GetMyGroupNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetMyGroupNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_GetMyGroupNumber_Statics::SocialComponent_eventGetMyGroupNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetMyGroupNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_GetMyGroupNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_GetMyGroupNumber_Statics::SocialComponent_eventGetMyGroupNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_GetMyGroupNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_GetMyGroupNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execGetMyGroupNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMyGroupNumber();
	P_NATIVE_END;
}
// End Class USocialComponent Function GetMyGroupNumber

// Begin Class USocialComponent Function GetMySocialGroup
struct Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics
{
	struct SocialComponent_eventGetMySocialGroup_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventGetMySocialGroup_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "GetMySocialGroup", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::SocialComponent_eventGetMySocialGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::SocialComponent_eventGetMySocialGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_GetMySocialGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_GetMySocialGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execGetMySocialGroup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetMySocialGroup();
	P_NATIVE_END;
}
// End Class USocialComponent Function GetMySocialGroup

// Begin Class USocialComponent Function GetSocialGroupSize
struct Z_Construct_UFunction_USocialComponent_GetSocialGroupSize_Statics
{
	struct SocialComponent_eventGetSocialGroupSize_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocialComponent_GetSocialGroupSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventGetSocialGroupSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_GetSocialGroupSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetSocialGroupSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetSocialGroupSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_GetSocialGroupSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "GetSocialGroupSize", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_GetSocialGroupSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetSocialGroupSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_GetSocialGroupSize_Statics::SocialComponent_eventGetSocialGroupSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetSocialGroupSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_GetSocialGroupSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_GetSocialGroupSize_Statics::SocialComponent_eventGetSocialGroupSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_GetSocialGroupSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_GetSocialGroupSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execGetSocialGroupSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSocialGroupSize();
	P_NATIVE_END;
}
// End Class USocialComponent Function GetSocialGroupSize

// Begin Class USocialComponent Function GetTextID
struct Z_Construct_UFunction_USocialComponent_GetTextID_Statics
{
	struct SocialComponent_eventGetTextID_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocialComponent_GetTextID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventGetTextID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_GetTextID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetTextID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetTextID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_GetTextID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "GetTextID", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_GetTextID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetTextID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_GetTextID_Statics::SocialComponent_eventGetTextID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetTextID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_GetTextID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_GetTextID_Statics::SocialComponent_eventGetTextID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_GetTextID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_GetTextID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execGetTextID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetTextID();
	P_NATIVE_END;
}
// End Class USocialComponent Function GetTextID

// Begin Class USocialComponent Function GetTimeInCurrentState
struct Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState_Statics
{
	struct SocialComponent_eventGetTimeInCurrentState_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventGetTimeInCurrentState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "GetTimeInCurrentState", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState_Statics::SocialComponent_eventGetTimeInCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState_Statics::SocialComponent_eventGetTimeInCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execGetTimeInCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeInCurrentState();
	P_NATIVE_END;
}
// End Class USocialComponent Function GetTimeInCurrentState

// Begin Class USocialComponent Function IsAllyResolved
struct Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics
{
	struct SocialComponent_eventIsAllyResolved_Parms
	{
		AActor* Ally;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Faction" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ally;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::NewProp_Ally = { "Ally", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventIsAllyResolved_Parms, Ally), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SocialComponent_eventIsAllyResolved_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SocialComponent_eventIsAllyResolved_Parms), &Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::NewProp_Ally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "IsAllyResolved", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::SocialComponent_eventIsAllyResolved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::SocialComponent_eventIsAllyResolved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_IsAllyResolved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_IsAllyResolved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execIsAllyResolved)
{
	P_GET_OBJECT(AActor,Z_Param_Ally);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAllyResolved(Z_Param_Ally);
	P_NATIVE_END;
}
// End Class USocialComponent Function IsAllyResolved

// Begin Class USocialComponent Function IsFromMySocialGroup
struct Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics
{
	struct SocialComponent_eventIsFromMySocialGroup_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventIsFromMySocialGroup_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SocialComponent_eventIsFromMySocialGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SocialComponent_eventIsFromMySocialGroup_Parms), &Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "IsFromMySocialGroup", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::SocialComponent_eventIsFromMySocialGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::SocialComponent_eventIsFromMySocialGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execIsFromMySocialGroup)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFromMySocialGroup(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class USocialComponent Function IsFromMySocialGroup

// Begin Class USocialComponent Function RemoveActorFromGroup
struct Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics
{
	struct SocialComponent_eventRemoveActorFromGroup_Parms
	{
		AActor* Actor;
		EGroupType Group;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Group_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Group;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventRemoveActorFromGroup_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::NewProp_Group_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventRemoveActorFromGroup_Parms, Group), Z_Construct_UEnum_RibEye_EGroupType, METADATA_PARAMS(0, nullptr) }; // 491346619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::NewProp_Group_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::NewProp_Group,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "RemoveActorFromGroup", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::SocialComponent_eventRemoveActorFromGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::SocialComponent_eventRemoveActorFromGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execRemoveActorFromGroup)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_ENUM(EGroupType,Z_Param_Group);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveActorFromGroup(Z_Param_Actor,EGroupType(Z_Param_Group));
	P_NATIVE_END;
}
// End Class USocialComponent Function RemoveActorFromGroup

// Begin Class USocialComponent Function SetAlertState
struct Z_Construct_UFunction_USocialComponent_SetAlertState_Statics
{
	struct SocialComponent_eventSetAlertState_Parms
	{
		EAlert NewAlertState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewAlertState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAlertState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::NewProp_NewAlertState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::NewProp_NewAlertState = { "NewAlertState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventSetAlertState_Parms, NewAlertState), Z_Construct_UEnum_RibEye_EAlert, METADATA_PARAMS(0, nullptr) }; // 3817312066
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::NewProp_NewAlertState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::NewProp_NewAlertState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "SetAlertState", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::SocialComponent_eventSetAlertState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::SocialComponent_eventSetAlertState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_SetAlertState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_SetAlertState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execSetAlertState)
{
	P_GET_ENUM(EAlert,Z_Param_NewAlertState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAlertState(EAlert(Z_Param_NewAlertState));
	P_NATIVE_END;
}
// End Class USocialComponent Function SetAlertState

// Begin Class USocialComponent Function SetupID
struct Z_Construct_UFunction_USocialComponent_SetupID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_SetupID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "SetupID", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_SetupID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_SetupID_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USocialComponent_SetupID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_SetupID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execSetupID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupID();
	P_NATIVE_END;
}
// End Class USocialComponent Function SetupID

// Begin Class USocialComponent Function ShouldIgnoreAnsweringLineType
struct Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics
{
	struct SocialComponent_eventShouldIgnoreAnsweringLineType_Parms
	{
		ELineType LineType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::NewProp_LineType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::NewProp_LineType = { "LineType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventShouldIgnoreAnsweringLineType_Parms, LineType), Z_Construct_UEnum_RibEye_ELineType, METADATA_PARAMS(0, nullptr) }; // 4109494101
void Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SocialComponent_eventShouldIgnoreAnsweringLineType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SocialComponent_eventShouldIgnoreAnsweringLineType_Parms), &Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::NewProp_LineType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::NewProp_LineType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "ShouldIgnoreAnsweringLineType", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::SocialComponent_eventShouldIgnoreAnsweringLineType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::SocialComponent_eventShouldIgnoreAnsweringLineType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execShouldIgnoreAnsweringLineType)
{
	P_GET_ENUM(ELineType,Z_Param_LineType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldIgnoreAnsweringLineType(ELineType(Z_Param_LineType));
	P_NATIVE_END;
}
// End Class USocialComponent Function ShouldIgnoreAnsweringLineType

// Begin Class USocialComponent Function UpdateAllyKnownState
struct Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics
{
	struct SocialComponent_eventUpdateAllyKnownState_Parms
	{
		AActor* Ally;
		EAlert AllyAlertState;
		bool IsKnowledgeResolved;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Group" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used mainly for hearing\n" },
#endif
		{ "CPP_Default_IsKnowledgeResolved", "false" },
		{ "ModuleRelativePath", "SocialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used mainly for hearing" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ally;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllyAlertState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllyAlertState;
	static void NewProp_IsKnowledgeResolved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsKnowledgeResolved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::NewProp_Ally = { "Ally", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventUpdateAllyKnownState_Parms, Ally), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::NewProp_AllyAlertState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::NewProp_AllyAlertState = { "AllyAlertState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventUpdateAllyKnownState_Parms, AllyAlertState), Z_Construct_UEnum_RibEye_EAlert, METADATA_PARAMS(0, nullptr) }; // 3817312066
void Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::NewProp_IsKnowledgeResolved_SetBit(void* Obj)
{
	((SocialComponent_eventUpdateAllyKnownState_Parms*)Obj)->IsKnowledgeResolved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::NewProp_IsKnowledgeResolved = { "IsKnowledgeResolved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SocialComponent_eventUpdateAllyKnownState_Parms), &Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::NewProp_IsKnowledgeResolved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::NewProp_Ally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::NewProp_AllyAlertState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::NewProp_AllyAlertState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::NewProp_IsKnowledgeResolved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "UpdateAllyKnownState", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::SocialComponent_eventUpdateAllyKnownState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::SocialComponent_eventUpdateAllyKnownState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execUpdateAllyKnownState)
{
	P_GET_OBJECT(AActor,Z_Param_Ally);
	P_GET_ENUM(EAlert,Z_Param_AllyAlertState);
	P_GET_UBOOL(Z_Param_IsKnowledgeResolved);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAllyKnownState(Z_Param_Ally,EAlert(Z_Param_AllyAlertState),Z_Param_IsKnowledgeResolved);
	P_NATIVE_END;
}
// End Class USocialComponent Function UpdateAllyKnownState

// Begin Class USocialComponent Function UpdateAllyKnownState_Vision
struct Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics
{
	struct SocialComponent_eventUpdateAllyKnownState_Vision_Parms
	{
		AActor* Ally;
		EAlert AllyAlertState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Group" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used for vision\n" },
#endif
		{ "ModuleRelativePath", "SocialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used for vision" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ally;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllyAlertState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllyAlertState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::NewProp_Ally = { "Ally", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventUpdateAllyKnownState_Vision_Parms, Ally), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::NewProp_AllyAlertState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::NewProp_AllyAlertState = { "AllyAlertState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocialComponent_eventUpdateAllyKnownState_Vision_Parms, AllyAlertState), Z_Construct_UEnum_RibEye_EAlert, METADATA_PARAMS(0, nullptr) }; // 3817312066
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::NewProp_Ally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::NewProp_AllyAlertState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::NewProp_AllyAlertState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialComponent, nullptr, "UpdateAllyKnownState_Vision", nullptr, nullptr, Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::SocialComponent_eventUpdateAllyKnownState_Vision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::SocialComponent_eventUpdateAllyKnownState_Vision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocialComponent::execUpdateAllyKnownState_Vision)
{
	P_GET_OBJECT(AActor,Z_Param_Ally);
	P_GET_ENUM(EAlert,Z_Param_AllyAlertState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAllyKnownState_Vision(Z_Param_Ally,EAlert(Z_Param_AllyAlertState));
	P_NATIVE_END;
}
// End Class USocialComponent Function UpdateAllyKnownState_Vision

// Begin Class USocialComponent
void USocialComponent::StaticRegisterNativesUSocialComponent()
{
	UClass* Class = USocialComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddActorToGroup", &USocialComponent::execAddActorToGroup },
		{ "AddAnnoyanceLevel", &USocialComponent::execAddAnnoyanceLevel },
		{ "AddMembersToGroup", &USocialComponent::execAddMembersToGroup },
		{ "ClearGroupMembers", &USocialComponent::execClearGroupMembers },
		{ "GetAnnoyanceLevel", &USocialComponent::execGetAnnoyanceLevel },
		{ "GetDebugText", &USocialComponent::execGetDebugText },
		{ "GetFaction", &USocialComponent::execGetFaction },
		{ "GetGroupMembers", &USocialComponent::execGetGroupMembers },
		{ "GetID", &USocialComponent::execGetID },
		{ "GetMyGroupNumber", &USocialComponent::execGetMyGroupNumber },
		{ "GetMySocialGroup", &USocialComponent::execGetMySocialGroup },
		{ "GetSocialGroupSize", &USocialComponent::execGetSocialGroupSize },
		{ "GetTextID", &USocialComponent::execGetTextID },
		{ "GetTimeInCurrentState", &USocialComponent::execGetTimeInCurrentState },
		{ "IsAllyResolved", &USocialComponent::execIsAllyResolved },
		{ "IsFromMySocialGroup", &USocialComponent::execIsFromMySocialGroup },
		{ "RemoveActorFromGroup", &USocialComponent::execRemoveActorFromGroup },
		{ "SetAlertState", &USocialComponent::execSetAlertState },
		{ "SetupID", &USocialComponent::execSetupID },
		{ "ShouldIgnoreAnsweringLineType", &USocialComponent::execShouldIgnoreAnsweringLineType },
		{ "UpdateAllyKnownState", &USocialComponent::execUpdateAllyKnownState },
		{ "UpdateAllyKnownState_Vision", &USocialComponent::execUpdateAllyKnownState_Vision },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialComponent);
UClass* Z_Construct_UClass_USocialComponent_NoRegister()
{
	return USocialComponent::StaticClass();
}
struct Z_Construct_UClass_USocialComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SocialComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Faction_MetaData[] = {
		{ "Category", "Faction" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlertState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnoyanceLevel_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateForgetTime_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnnoyanceCooldownDelay_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnnoyanceCooldownRate_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllyKnownStates_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAlertnessChanged_MetaData[] = {
		{ "Category", "Components|StateChange" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSawAllyChangedState_MetaData[] = {
		{ "Category", "Components|StateChange" },
		{ "ModuleRelativePath", "SocialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Faction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlertState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlertState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnoyanceLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StateForgetTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnnoyanceCooldownDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnnoyanceCooldownRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllyKnownStates_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllyKnownStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllyKnownStates;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAlertnessChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSawAllyChangedState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USocialComponent_AddActorToGroup, "AddActorToGroup" }, // 3147010010
		{ &Z_Construct_UFunction_USocialComponent_AddAnnoyanceLevel, "AddAnnoyanceLevel" }, // 2106761345
		{ &Z_Construct_UFunction_USocialComponent_AddMembersToGroup, "AddMembersToGroup" }, // 2624664568
		{ &Z_Construct_UFunction_USocialComponent_ClearGroupMembers, "ClearGroupMembers" }, // 3085387691
		{ &Z_Construct_UFunction_USocialComponent_GetAnnoyanceLevel, "GetAnnoyanceLevel" }, // 1960841811
		{ &Z_Construct_UFunction_USocialComponent_GetDebugText, "GetDebugText" }, // 1908033431
		{ &Z_Construct_UFunction_USocialComponent_GetFaction, "GetFaction" }, // 618780395
		{ &Z_Construct_UFunction_USocialComponent_GetGroupMembers, "GetGroupMembers" }, // 3000455889
		{ &Z_Construct_UFunction_USocialComponent_GetID, "GetID" }, // 583810691
		{ &Z_Construct_UFunction_USocialComponent_GetMyGroupNumber, "GetMyGroupNumber" }, // 3227705321
		{ &Z_Construct_UFunction_USocialComponent_GetMySocialGroup, "GetMySocialGroup" }, // 3553263637
		{ &Z_Construct_UFunction_USocialComponent_GetSocialGroupSize, "GetSocialGroupSize" }, // 855891297
		{ &Z_Construct_UFunction_USocialComponent_GetTextID, "GetTextID" }, // 891756101
		{ &Z_Construct_UFunction_USocialComponent_GetTimeInCurrentState, "GetTimeInCurrentState" }, // 3802177861
		{ &Z_Construct_UFunction_USocialComponent_IsAllyResolved, "IsAllyResolved" }, // 4058008430
		{ &Z_Construct_UFunction_USocialComponent_IsFromMySocialGroup, "IsFromMySocialGroup" }, // 2849999539
		{ &Z_Construct_UFunction_USocialComponent_RemoveActorFromGroup, "RemoveActorFromGroup" }, // 1348392749
		{ &Z_Construct_UFunction_USocialComponent_SetAlertState, "SetAlertState" }, // 2955292816
		{ &Z_Construct_UFunction_USocialComponent_SetupID, "SetupID" }, // 3143786493
		{ &Z_Construct_UFunction_USocialComponent_ShouldIgnoreAnsweringLineType, "ShouldIgnoreAnsweringLineType" }, // 2511585105
		{ &Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState, "UpdateAllyKnownState" }, // 2727770522
		{ &Z_Construct_UFunction_USocialComponent_UpdateAllyKnownState_Vision, "UpdateAllyKnownState_Vision" }, // 3262168289
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USocialComponent_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialComponent, Faction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Faction_MetaData), NewProp_Faction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USocialComponent_Statics::NewProp_AlertState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USocialComponent_Statics::NewProp_AlertState = { "AlertState", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialComponent, AlertState), Z_Construct_UEnum_RibEye_EAlert, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlertState_MetaData), NewProp_AlertState_MetaData) }; // 3817312066
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USocialComponent_Statics::NewProp_AnoyanceLevel = { "AnoyanceLevel", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialComponent, AnoyanceLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnoyanceLevel_MetaData), NewProp_AnoyanceLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USocialComponent_Statics::NewProp_StateForgetTime = { "StateForgetTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialComponent, StateForgetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateForgetTime_MetaData), NewProp_StateForgetTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USocialComponent_Statics::NewProp_AnnoyanceCooldownDelay = { "AnnoyanceCooldownDelay", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialComponent, AnnoyanceCooldownDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnnoyanceCooldownDelay_MetaData), NewProp_AnnoyanceCooldownDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USocialComponent_Statics::NewProp_AnnoyanceCooldownRate = { "AnnoyanceCooldownRate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialComponent, AnnoyanceCooldownRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnnoyanceCooldownRate_MetaData), NewProp_AnnoyanceCooldownRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialComponent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialComponent, Settings), Z_Construct_UScriptStruct_FSocialSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 752346135
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialComponent_Statics::NewProp_AllyKnownStates_ValueProp = { "AllyKnownStates", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAllyKnownState, METADATA_PARAMS(0, nullptr) }; // 1705834529
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialComponent_Statics::NewProp_AllyKnownStates_Key_KeyProp = { "AllyKnownStates_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USocialComponent_Statics::NewProp_AllyKnownStates = { "AllyKnownStates", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialComponent, AllyKnownStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllyKnownStates_MetaData), NewProp_AllyKnownStates_MetaData) }; // 1705834529
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocialComponent_Statics::NewProp_OnAlertnessChanged = { "OnAlertnessChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialComponent, OnAlertnessChanged), Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAlertnessChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAlertnessChanged_MetaData), NewProp_OnAlertnessChanged_MetaData) }; // 177639438
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocialComponent_Statics::NewProp_OnSawAllyChangedState = { "OnSawAllyChangedState", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialComponent, OnSawAllyChangedState), Z_Construct_UDelegateFunction_RibEye_SocialComponentOnAllyChangedStateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSawAllyChangedState_MetaData), NewProp_OnSawAllyChangedState_MetaData) }; // 1352491921
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialComponent_Statics::NewProp_Faction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialComponent_Statics::NewProp_AlertState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialComponent_Statics::NewProp_AlertState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialComponent_Statics::NewProp_AnoyanceLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialComponent_Statics::NewProp_StateForgetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialComponent_Statics::NewProp_AnnoyanceCooldownDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialComponent_Statics::NewProp_AnnoyanceCooldownRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialComponent_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialComponent_Statics::NewProp_AllyKnownStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialComponent_Statics::NewProp_AllyKnownStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialComponent_Statics::NewProp_AllyKnownStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialComponent_Statics::NewProp_OnAlertnessChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialComponent_Statics::NewProp_OnSawAllyChangedState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USocialComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialComponent_Statics::ClassParams = {
	&USocialComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USocialComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USocialComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocialComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USocialComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocialComponent()
{
	if (!Z_Registration_Info_UClass_USocialComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialComponent.OuterSingleton, Z_Construct_UClass_USocialComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocialComponent.OuterSingleton;
}
template<> RIBEYE_API UClass* StaticClass<USocialComponent>()
{
	return USocialComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocialComponent);
USocialComponent::~USocialComponent() {}
// End Class USocialComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSocialSettings::StaticStruct, Z_Construct_UScriptStruct_FSocialSettings_Statics::NewStructOps, TEXT("SocialSettings"), &Z_Registration_Info_UScriptStruct_SocialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSocialSettings), 752346135U) },
		{ FAllyGroupInfo::StaticStruct, Z_Construct_UScriptStruct_FAllyGroupInfo_Statics::NewStructOps, TEXT("AllyGroupInfo"), &Z_Registration_Info_UScriptStruct_AllyGroupInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAllyGroupInfo), 1262755358U) },
		{ FAllyKnownState::StaticStruct, Z_Construct_UScriptStruct_FAllyKnownState_Statics::NewStructOps, TEXT("AllyKnownState"), &Z_Registration_Info_UScriptStruct_AllyKnownState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAllyKnownState), 1705834529U) },
		{ FAllyGroup::StaticStruct, Z_Construct_UScriptStruct_FAllyGroup_Statics::NewStructOps, TEXT("AllyGroup"), &Z_Registration_Info_UScriptStruct_AllyGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAllyGroup), 489832726U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocialComponent, USocialComponent::StaticClass, TEXT("USocialComponent"), &Z_Registration_Info_UClass_USocialComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialComponent), 3166829415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_3296229797(TEXT("/Script/RibEye"),
	Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_SocialComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
