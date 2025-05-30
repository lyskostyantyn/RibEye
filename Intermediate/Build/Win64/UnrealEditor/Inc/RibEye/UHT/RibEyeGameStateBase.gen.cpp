// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RibEye/RibEyeGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRibEyeGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
RIBEYE_API UClass* Z_Construct_UClass_ARibEyeGameStateBase();
RIBEYE_API UClass* Z_Construct_UClass_ARibEyeGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_RibEye();
// End Cross Module References

// Begin Class ARibEyeGameStateBase
void ARibEyeGameStateBase::StaticRegisterNativesARibEyeGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARibEyeGameStateBase);
UClass* Z_Construct_UClass_ARibEyeGameStateBase_NoRegister()
{
	return ARibEyeGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ARibEyeGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RibEyeGameStateBase.h" },
		{ "ModuleRelativePath", "RibEyeGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARibEyeGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARibEyeGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RibEye,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARibEyeGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARibEyeGameStateBase_Statics::ClassParams = {
	&ARibEyeGameStateBase::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARibEyeGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARibEyeGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARibEyeGameStateBase()
{
	if (!Z_Registration_Info_UClass_ARibEyeGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARibEyeGameStateBase.OuterSingleton, Z_Construct_UClass_ARibEyeGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARibEyeGameStateBase.OuterSingleton;
}
template<> RIBEYE_API UClass* StaticClass<ARibEyeGameStateBase>()
{
	return ARibEyeGameStateBase::StaticClass();
}
ARibEyeGameStateBase::ARibEyeGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARibEyeGameStateBase);
ARibEyeGameStateBase::~ARibEyeGameStateBase() {}
// End Class ARibEyeGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_RibEyeGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARibEyeGameStateBase, ARibEyeGameStateBase::StaticClass, TEXT("ARibEyeGameStateBase"), &Z_Registration_Info_UClass_ARibEyeGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARibEyeGameStateBase), 389083543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_RibEyeGameStateBase_h_1427247479(TEXT("/Script/RibEye"),
	Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_RibEyeGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kostiantyn_lysenko_Documents_Unreal_Projects_RibEye_Source_RibEye_RibEyeGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
