// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RibEye/KnowledgeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnowledgeComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RIBEYE_API UClass* Z_Construct_UClass_UKnowledgeComponent();
RIBEYE_API UClass* Z_Construct_UClass_UKnowledgeComponent_NoRegister();
RIBEYE_API UEnum* Z_Construct_UEnum_RibEye_EAlert();
RIBEYE_API UFunction* Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature();
RIBEYE_API UFunction* Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature();
RIBEYE_API UScriptStruct* Z_Construct_UScriptStruct_FLastKnownData();
UPackage* Z_Construct_UPackage__Script_RibEye();
// End Cross Module References

// Begin ScriptStruct FLastKnownData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LastKnownData;
class UScriptStruct* FLastKnownData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LastKnownData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LastKnownData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLastKnownData, (UObject*)Z_Construct_UPackage__Script_RibEye(), TEXT("LastKnownData"));
	}
	return Z_Registration_Info_UScriptStruct_LastKnownData.OuterSingleton;
}
template<> RIBEYE_API UScriptStruct* StaticStruct<FLastKnownData>()
{
	return FLastKnownData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLastKnownData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "KnowledgeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownPosition_MetaData[] = {
		{ "Category", "LastKnownData" },
		{ "ModuleRelativePath", "KnowledgeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownMoveDirection_MetaData[] = {
		{ "Category", "LastKnownData" },
		{ "ModuleRelativePath", "KnowledgeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownTime_MetaData[] = {
		{ "Category", "LastKnownData" },
		{ "ModuleRelativePath", "KnowledgeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastKnownPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastKnownMoveDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastKnownTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLastKnownData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLastKnownData_Statics::NewProp_LastKnownPosition = { "LastKnownPosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLastKnownData, LastKnownPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownPosition_MetaData), NewProp_LastKnownPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLastKnownData_Statics::NewProp_LastKnownMoveDirection = { "LastKnownMoveDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLastKnownData, LastKnownMoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownMoveDirection_MetaData), NewProp_LastKnownMoveDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLastKnownData_Statics::NewProp_LastKnownTime = { "LastKnownTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLastKnownData, LastKnownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownTime_MetaData), NewProp_LastKnownTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLastKnownData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLastKnownData_Statics::NewProp_LastKnownPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLastKnownData_Statics::NewProp_LastKnownMoveDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLastKnownData_Statics::NewProp_LastKnownTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastKnownData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLastKnownData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
	nullptr,
	&NewStructOps,
	"LastKnownData",
	Z_Construct_UScriptStruct_FLastKnownData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastKnownData_Statics::PropPointers),
	sizeof(FLastKnownData),
	alignof(FLastKnownData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastKnownData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLastKnownData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLastKnownData()
{
	if (!Z_Registration_Info_UScriptStruct_LastKnownData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LastKnownData.InnerSingleton, Z_Construct_UScriptStruct_FLastKnownData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LastKnownData.InnerSingleton;
}
// End ScriptStruct FLastKnownData

// Begin Delegate FKnowledgeComponentOnTargetSelectedSignature
struct Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature_Statics
{
	struct _Script_RibEye_eventKnowledgeComponentOnTargetSelectedSignature_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KnowledgeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RibEye_eventKnowledgeComponentOnTargetSelectedSignature_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RibEye, nullptr, "KnowledgeComponentOnTargetSelectedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature_Statics::_Script_RibEye_eventKnowledgeComponentOnTargetSelectedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature_Statics::_Script_RibEye_eventKnowledgeComponentOnTargetSelectedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FKnowledgeComponentOnTargetSelectedSignature_DelegateWrapper(const FMulticastScriptDelegate& KnowledgeComponentOnTargetSelectedSignature, AActor* Target)
{
	struct _Script_RibEye_eventKnowledgeComponentOnTargetSelectedSignature_Parms
	{
		AActor* Target;
	};
	_Script_RibEye_eventKnowledgeComponentOnTargetSelectedSignature_Parms Parms;
	Parms.Target=Target;
	KnowledgeComponentOnTargetSelectedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FKnowledgeComponentOnTargetSelectedSignature

// Begin Delegate FKnowledgeComponentOnLastTargetLostSignature
struct Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics
{
	struct _Script_RibEye_eventKnowledgeComponentOnLastTargetLostSignature_Parms
	{
		AActor* Target;
		FLastKnownData LastKnownData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KnowledgeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastKnownData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RibEye_eventKnowledgeComponentOnLastTargetLostSignature_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::NewProp_LastKnownData = { "LastKnownData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RibEye_eventKnowledgeComponentOnLastTargetLostSignature_Parms, LastKnownData), Z_Construct_UScriptStruct_FLastKnownData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownData_MetaData), NewProp_LastKnownData_MetaData) }; // 1350844460
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::NewProp_LastKnownData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RibEye, nullptr, "KnowledgeComponentOnLastTargetLostSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::_Script_RibEye_eventKnowledgeComponentOnLastTargetLostSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::_Script_RibEye_eventKnowledgeComponentOnLastTargetLostSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FKnowledgeComponentOnLastTargetLostSignature_DelegateWrapper(const FMulticastScriptDelegate& KnowledgeComponentOnLastTargetLostSignature, AActor* Target, FLastKnownData const& LastKnownData)
{
	struct _Script_RibEye_eventKnowledgeComponentOnLastTargetLostSignature_Parms
	{
		AActor* Target;
		FLastKnownData LastKnownData;
	};
	_Script_RibEye_eventKnowledgeComponentOnLastTargetLostSignature_Parms Parms;
	Parms.Target=Target;
	Parms.LastKnownData=LastKnownData;
	KnowledgeComponentOnLastTargetLostSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FKnowledgeComponentOnLastTargetLostSignature

// Begin Class UKnowledgeComponent Function GetSpottedActors
struct Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics
{
	struct KnowledgeComponent_eventGetSpottedActors_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vision" },
		{ "ModuleRelativePath", "KnowledgeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KnowledgeComponent_eventGetSpottedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKnowledgeComponent, nullptr, "GetSpottedActors", nullptr, nullptr, Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::KnowledgeComponent_eventGetSpottedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::KnowledgeComponent_eventGetSpottedActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKnowledgeComponent::execGetSpottedActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSpottedActors();
	P_NATIVE_END;
}
// End Class UKnowledgeComponent Function GetSpottedActors

// Begin Class UKnowledgeComponent Function IsResolvedAllyNearby
struct Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics
{
	struct KnowledgeComponent_eventIsResolvedAllyNearby_Parms
	{
		FVector Position;
		EAlert MinAlertLevel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "KnowledgeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MinAlertLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MinAlertLevel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KnowledgeComponent_eventIsResolvedAllyNearby_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::NewProp_MinAlertLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::NewProp_MinAlertLevel = { "MinAlertLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KnowledgeComponent_eventIsResolvedAllyNearby_Parms, MinAlertLevel), Z_Construct_UEnum_RibEye_EAlert, METADATA_PARAMS(0, nullptr) }; // 3817312066
void Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KnowledgeComponent_eventIsResolvedAllyNearby_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KnowledgeComponent_eventIsResolvedAllyNearby_Parms), &Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::NewProp_MinAlertLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::NewProp_MinAlertLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKnowledgeComponent, nullptr, "IsResolvedAllyNearby", nullptr, nullptr, Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::KnowledgeComponent_eventIsResolvedAllyNearby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::KnowledgeComponent_eventIsResolvedAllyNearby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKnowledgeComponent::execIsResolvedAllyNearby)
{
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_ENUM(EAlert,Z_Param_MinAlertLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsResolvedAllyNearby(Z_Param_Position,EAlert(Z_Param_MinAlertLevel));
	P_NATIVE_END;
}
// End Class UKnowledgeComponent Function IsResolvedAllyNearby

// Begin Class UKnowledgeComponent Function OnEnemySpotted
struct Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted_Statics
{
	struct KnowledgeComponent_eventOnEnemySpotted_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vision" },
		{ "ModuleRelativePath", "KnowledgeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KnowledgeComponent_eventOnEnemySpotted_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKnowledgeComponent, nullptr, "OnEnemySpotted", nullptr, nullptr, Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted_Statics::KnowledgeComponent_eventOnEnemySpotted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted_Statics::KnowledgeComponent_eventOnEnemySpotted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKnowledgeComponent::execOnEnemySpotted)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemySpotted(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UKnowledgeComponent Function OnEnemySpotted

// Begin Class UKnowledgeComponent Function RegisterKnowledge
struct Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics
{
	struct KnowledgeComponent_eventRegisterKnowledge_Parms
	{
		AActor* Actor;
		FVector Position;
		FVector Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Knowledge" },
		{ "ModuleRelativePath", "KnowledgeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KnowledgeComponent_eventRegisterKnowledge_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KnowledgeComponent_eventRegisterKnowledge_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KnowledgeComponent_eventRegisterKnowledge_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKnowledgeComponent, nullptr, "RegisterKnowledge", nullptr, nullptr, Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::KnowledgeComponent_eventRegisterKnowledge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::KnowledgeComponent_eventRegisterKnowledge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKnowledgeComponent::execRegisterKnowledge)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterKnowledge(Z_Param_Actor,Z_Param_Position,Z_Param_Direction);
	P_NATIVE_END;
}
// End Class UKnowledgeComponent Function RegisterKnowledge

// Begin Class UKnowledgeComponent
void UKnowledgeComponent::StaticRegisterNativesUKnowledgeComponent()
{
	UClass* Class = UKnowledgeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSpottedActors", &UKnowledgeComponent::execGetSpottedActors },
		{ "IsResolvedAllyNearby", &UKnowledgeComponent::execIsResolvedAllyNearby },
		{ "OnEnemySpotted", &UKnowledgeComponent::execOnEnemySpotted },
		{ "RegisterKnowledge", &UKnowledgeComponent::execRegisterKnowledge },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKnowledgeComponent);
UClass* Z_Construct_UClass_UKnowledgeComponent_NoRegister()
{
	return UKnowledgeComponent::StaticClass();
}
struct Z_Construct_UClass_UKnowledgeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "KnowledgeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "KnowledgeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetSelected_MetaData[] = {
		{ "Category", "Components|Vision" },
		{ "ModuleRelativePath", "KnowledgeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLastTargetLost_MetaData[] = {
		{ "Category", "Components|Vision" },
		{ "ModuleRelativePath", "KnowledgeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetSelected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLastTargetLost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKnowledgeComponent_GetSpottedActors, "GetSpottedActors" }, // 1543638275
		{ &Z_Construct_UFunction_UKnowledgeComponent_IsResolvedAllyNearby, "IsResolvedAllyNearby" }, // 3802631898
		{ &Z_Construct_UFunction_UKnowledgeComponent_OnEnemySpotted, "OnEnemySpotted" }, // 36073326
		{ &Z_Construct_UFunction_UKnowledgeComponent_RegisterKnowledge, "RegisterKnowledge" }, // 1440025783
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKnowledgeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKnowledgeComponent_Statics::NewProp_OnTargetSelected = { "OnTargetSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKnowledgeComponent, OnTargetSelected), Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnTargetSelectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTargetSelected_MetaData), NewProp_OnTargetSelected_MetaData) }; // 2989310749
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKnowledgeComponent_Statics::NewProp_OnLastTargetLost = { "OnLastTargetLost", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKnowledgeComponent, OnLastTargetLost), Z_Construct_UDelegateFunction_RibEye_KnowledgeComponentOnLastTargetLostSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLastTargetLost_MetaData), NewProp_OnLastTargetLost_MetaData) }; // 1653339889
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKnowledgeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKnowledgeComponent_Statics::NewProp_OnTargetSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKnowledgeComponent_Statics::NewProp_OnLastTargetLost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKnowledgeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKnowledgeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKnowledgeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKnowledgeComponent_Statics::ClassParams = {
	&UKnowledgeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKnowledgeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKnowledgeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKnowledgeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UKnowledgeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKnowledgeComponent()
{
	if (!Z_Registration_Info_UClass_UKnowledgeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKnowledgeComponent.OuterSingleton, Z_Construct_UClass_UKnowledgeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKnowledgeComponent.OuterSingleton;
}
template<> RIBEYE_API UClass* StaticClass<UKnowledgeComponent>()
{
	return UKnowledgeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKnowledgeComponent);
UKnowledgeComponent::~UKnowledgeComponent() {}
// End Class UKnowledgeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLastKnownData::StaticStruct, Z_Construct_UScriptStruct_FLastKnownData_Statics::NewStructOps, TEXT("LastKnownData"), &Z_Registration_Info_UScriptStruct_LastKnownData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLastKnownData), 1350844460U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKnowledgeComponent, UKnowledgeComponent::StaticClass, TEXT("UKnowledgeComponent"), &Z_Registration_Info_UClass_UKnowledgeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKnowledgeComponent), 1559017374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_2049950922(TEXT("/Script/RibEye"),
	Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_KnowledgeComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
