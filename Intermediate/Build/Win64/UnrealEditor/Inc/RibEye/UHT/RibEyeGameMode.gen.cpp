// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RibEye/RibEyeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRibEyeGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RIBEYE_API UClass* Z_Construct_UClass_ARibEyeGameMode();
RIBEYE_API UClass* Z_Construct_UClass_ARibEyeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_RibEye();
// End Cross Module References

// Begin Class ARibEyeGameMode
void ARibEyeGameMode::StaticRegisterNativesARibEyeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARibEyeGameMode);
UClass* Z_Construct_UClass_ARibEyeGameMode_NoRegister()
{
	return ARibEyeGameMode::StaticClass();
}
struct Z_Construct_UClass_ARibEyeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RibEyeGameMode.h" },
		{ "ModuleRelativePath", "RibEyeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARibEyeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARibEyeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARibEyeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARibEyeGameMode_Statics::ClassParams = {
	&ARibEyeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARibEyeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARibEyeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARibEyeGameMode()
{
	if (!Z_Registration_Info_UClass_ARibEyeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARibEyeGameMode.OuterSingleton, Z_Construct_UClass_ARibEyeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARibEyeGameMode.OuterSingleton;
}
template<> RIBEYE_API UClass* StaticClass<ARibEyeGameMode>()
{
	return ARibEyeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARibEyeGameMode);
ARibEyeGameMode::~ARibEyeGameMode() {}
// End Class ARibEyeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_RibEyeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARibEyeGameMode, ARibEyeGameMode::StaticClass, TEXT("ARibEyeGameMode"), &Z_Registration_Info_UClass_ARibEyeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARibEyeGameMode), 1411212712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_RibEyeGameMode_h_4284611816(TEXT("/Script/RibEye"),
	Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_RibEyeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_RibEyeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
