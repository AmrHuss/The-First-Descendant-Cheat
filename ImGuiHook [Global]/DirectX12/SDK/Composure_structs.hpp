#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Composure

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// Enum Composure.ESceneCameraLinkType
// NumValues: 0x0004
enum class ESceneCameraLinkType : uint32
{
	Inherited                                = 0,
	Override                                 = 1,
	Unused                                   = 2,
	ESceneCameraLinkType_MAX                 = 3,
};

// Enum Composure.EInheritedSourceType
// NumValues: 0x0003
enum class EInheritedSourceType : uint32
{
	Inherited                                = 0,
	Override                                 = 1,
	EInheritedSourceType_MAX                 = 2,
};

// Enum Composure.ETargetUsageFlags
// NumValues: 0x0008
enum class ETargetUsageFlags : uint8
{
	USAGE_None                               = 0,
	USAGE_Input                              = 1,
	USAGE_Transform                          = 2,
	USAGE_Output                             = 4,
	USAGE_Persistent                         = 32,
	USAGE_Intermediate0                      = 8,
	USAGE_Intermediate1                      = 16,
	USAGE_MAX                                = 33,
};

// Enum Composure.ECompPassConstructionType
// NumValues: 0x0005
enum class ECompPassConstructionType : uint8
{
	Unknown                                  = 0,
	EditorConstructed                        = 1,
	BlueprintConstructed                     = 2,
	CodeConstructed                          = 3,
	ECompPassConstructionType_MAX            = 4,
};

// Enum Composure.EExrCompressionOptions
// NumValues: 0x0003
enum class EExrCompressionOptions : uint8
{
	Compressed                               = 0,
	Uncompressed                             = 1,
	EExrCompressionOptions_MAX               = 2,
};

// Enum Composure.EParamType
// NumValues: 0x0006
enum class EParamType : uint8
{
	UnknownParamType                         = 0,
	ScalarParam                              = 1,
	VectorParam                              = 2,
	TextureParam                             = 3,
	MediaTextureParam                        = 4,
	EParamType_MAX                           = 5,
};

// ScriptStruct Composure.CompositingParamPayload
// 0x00F0 (0x00F0 - 0x0000)
struct FCompositingParamPayload
{
public:
	TMap<class FName, float>                      ScalarParamOverrides;                              // 0x0000(0x0050)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FLinearColor>        VectorParamOverrides;                              // 0x0050(0x0050)(NativeAccessSpecifierPublic)
	TMap<class FName, class UTexture*>            TextureParamOverrides;                             // 0x00A0(0x0050)(UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCompositingParamPayload) == 0x000008, "Wrong alignment on FCompositingParamPayload");
static_assert(sizeof(FCompositingParamPayload) == 0x0000F0, "Wrong size on FCompositingParamPayload");
static_assert(offsetof(FCompositingParamPayload, ScalarParamOverrides) == 0x000000, "Member 'FCompositingParamPayload::ScalarParamOverrides' has a wrong offset!");
static_assert(offsetof(FCompositingParamPayload, VectorParamOverrides) == 0x000050, "Member 'FCompositingParamPayload::VectorParamOverrides' has a wrong offset!");
static_assert(offsetof(FCompositingParamPayload, TextureParamOverrides) == 0x0000A0, "Member 'FCompositingParamPayload::TextureParamOverrides' has a wrong offset!");

// ScriptStruct Composure.MovieSceneComposurePostMoveSettingsSectionTemplate
// 0x0668 (0x06A0 - 0x0038)
struct FMovieSceneComposurePostMoveSettingsSectionTemplate final : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneFloatChannel                Pivot[0x2];                                        // 0x0038(0x0110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                Translation[0x2];                                  // 0x0258(0x0110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                RotationAngle;                                     // 0x0478(0x0110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                Scale;                                             // 0x0588(0x0110)(NativeAccessSpecifierPrivate)
	EMovieSceneBlendType                          BlendType;                                         // 0x0698(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_699[0x7];                                      // 0x0699(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneComposurePostMoveSettingsSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneComposurePostMoveSettingsSectionTemplate");
static_assert(sizeof(FMovieSceneComposurePostMoveSettingsSectionTemplate) == 0x0006A0, "Wrong size on FMovieSceneComposurePostMoveSettingsSectionTemplate");
static_assert(offsetof(FMovieSceneComposurePostMoveSettingsSectionTemplate, Pivot) == 0x000038, "Member 'FMovieSceneComposurePostMoveSettingsSectionTemplate::Pivot' has a wrong offset!");
static_assert(offsetof(FMovieSceneComposurePostMoveSettingsSectionTemplate, Translation) == 0x000258, "Member 'FMovieSceneComposurePostMoveSettingsSectionTemplate::Translation' has a wrong offset!");
static_assert(offsetof(FMovieSceneComposurePostMoveSettingsSectionTemplate, RotationAngle) == 0x000478, "Member 'FMovieSceneComposurePostMoveSettingsSectionTemplate::RotationAngle' has a wrong offset!");
static_assert(offsetof(FMovieSceneComposurePostMoveSettingsSectionTemplate, Scale) == 0x000588, "Member 'FMovieSceneComposurePostMoveSettingsSectionTemplate::Scale' has a wrong offset!");
static_assert(offsetof(FMovieSceneComposurePostMoveSettingsSectionTemplate, BlendType) == 0x000698, "Member 'FMovieSceneComposurePostMoveSettingsSectionTemplate::BlendType' has a wrong offset!");

// ScriptStruct Composure.NamedCompMaterialParam
// 0x0008 (0x0008 - 0x0000)
struct FNamedCompMaterialParam final
{
public:
	class FName                                   ParamName;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNamedCompMaterialParam) == 0x000004, "Wrong alignment on FNamedCompMaterialParam");
static_assert(sizeof(FNamedCompMaterialParam) == 0x000008, "Wrong size on FNamedCompMaterialParam");
static_assert(offsetof(FNamedCompMaterialParam, ParamName) == 0x000000, "Member 'FNamedCompMaterialParam::ParamName' has a wrong offset!");

// ScriptStruct Composure.CompositingMaterial
// 0x00B8 (0x01A8 - 0x00F0)
struct FCompositingMaterial final : public FCompositingParamPayload
{
public:
	class UMaterialInterface*                     Material;                                          // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FName>                ParamPassMappings;                                 // 0x00F8(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FName, struct FNamedCompMaterialParam> RequiredMaterialParams;                            // 0x0148(0x0050)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                         Pad_198[0x8];                                      // 0x0198(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CachedMID;                                         // 0x01A0(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FCompositingMaterial) == 0x000008, "Wrong alignment on FCompositingMaterial");
static_assert(sizeof(FCompositingMaterial) == 0x0001A8, "Wrong size on FCompositingMaterial");
static_assert(offsetof(FCompositingMaterial, Material) == 0x0000F0, "Member 'FCompositingMaterial::Material' has a wrong offset!");
static_assert(offsetof(FCompositingMaterial, ParamPassMappings) == 0x0000F8, "Member 'FCompositingMaterial::ParamPassMappings' has a wrong offset!");
static_assert(offsetof(FCompositingMaterial, RequiredMaterialParams) == 0x000148, "Member 'FCompositingMaterial::RequiredMaterialParams' has a wrong offset!");
static_assert(offsetof(FCompositingMaterial, CachedMID) == 0x0001A0, "Member 'FCompositingMaterial::CachedMID' has a wrong offset!");

// ScriptStruct Composure.ComposurePostMoveSettings
// 0x0018 (0x0018 - 0x0000)
struct FComposurePostMoveSettings final
{
public:
	struct FVector2D                              Pivot;                                             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Translation;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationAngle;                                     // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FComposurePostMoveSettings) == 0x000004, "Wrong alignment on FComposurePostMoveSettings");
static_assert(sizeof(FComposurePostMoveSettings) == 0x000018, "Wrong size on FComposurePostMoveSettings");
static_assert(offsetof(FComposurePostMoveSettings, Pivot) == 0x000000, "Member 'FComposurePostMoveSettings::Pivot' has a wrong offset!");
static_assert(offsetof(FComposurePostMoveSettings, Translation) == 0x000008, "Member 'FComposurePostMoveSettings::Translation' has a wrong offset!");
static_assert(offsetof(FComposurePostMoveSettings, RotationAngle) == 0x000010, "Member 'FComposurePostMoveSettings::RotationAngle' has a wrong offset!");
static_assert(offsetof(FComposurePostMoveSettings, Scale) == 0x000014, "Member 'FComposurePostMoveSettings::Scale' has a wrong offset!");

// ScriptStruct Composure.ComposureUVMapSettings
// 0x00A0 (0x00A0 - 0x0000)
struct FComposureUVMapSettings final
{
public:
	struct FMatrix                                PreUVDisplacementMatrix;                           // 0x0000(0x0040)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                                PostUVDisplacementMatrix;                          // 0x0040(0x0040)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                              DisplacementDecodeParameters;                      // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                               DisplacementTexture;                               // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseDisplacementBlueAndAlphaChannels : 1;          // 0x0090(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_91[0xF];                                       // 0x0091(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FComposureUVMapSettings) == 0x000010, "Wrong alignment on FComposureUVMapSettings");
static_assert(sizeof(FComposureUVMapSettings) == 0x0000A0, "Wrong size on FComposureUVMapSettings");
static_assert(offsetof(FComposureUVMapSettings, PreUVDisplacementMatrix) == 0x000000, "Member 'FComposureUVMapSettings::PreUVDisplacementMatrix' has a wrong offset!");
static_assert(offsetof(FComposureUVMapSettings, PostUVDisplacementMatrix) == 0x000040, "Member 'FComposureUVMapSettings::PostUVDisplacementMatrix' has a wrong offset!");
static_assert(offsetof(FComposureUVMapSettings, DisplacementDecodeParameters) == 0x000080, "Member 'FComposureUVMapSettings::DisplacementDecodeParameters' has a wrong offset!");
static_assert(offsetof(FComposureUVMapSettings, DisplacementTexture) == 0x000088, "Member 'FComposureUVMapSettings::DisplacementTexture' has a wrong offset!");

// ScriptStruct Composure.MovieSceneComposureExportPass
// 0x0014 (0x0014 - 0x0000)
struct FMovieSceneComposureExportPass final
{
public:
	class FName                                   TransformPassName;                                 // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRenamePass;                                       // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ExportedAs;                                        // 0x000C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneComposureExportPass) == 0x000004, "Wrong alignment on FMovieSceneComposureExportPass");
static_assert(sizeof(FMovieSceneComposureExportPass) == 0x000014, "Wrong size on FMovieSceneComposureExportPass");
static_assert(offsetof(FMovieSceneComposureExportPass, TransformPassName) == 0x000000, "Member 'FMovieSceneComposureExportPass::TransformPassName' has a wrong offset!");
static_assert(offsetof(FMovieSceneComposureExportPass, bRenamePass) == 0x000008, "Member 'FMovieSceneComposureExportPass::bRenamePass' has a wrong offset!");
static_assert(offsetof(FMovieSceneComposureExportPass, ExportedAs) == 0x00000C, "Member 'FMovieSceneComposureExportPass::ExportedAs' has a wrong offset!");

// ScriptStruct Composure.MovieSceneComposureExportSectionTemplate
// 0x0018 (0x0038 - 0x0020)
struct FMovieSceneComposureExportSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneComposureExportPass         Pass;                                              // 0x0020(0x0014)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneComposureExportSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneComposureExportSectionTemplate");
static_assert(sizeof(FMovieSceneComposureExportSectionTemplate) == 0x000038, "Wrong size on FMovieSceneComposureExportSectionTemplate");
static_assert(offsetof(FMovieSceneComposureExportSectionTemplate, Pass) == 0x000020, "Member 'FMovieSceneComposureExportSectionTemplate::Pass' has a wrong offset!");

}

