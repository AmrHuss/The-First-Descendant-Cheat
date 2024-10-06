#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AppleARKit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AppleARKit_structs.hpp"
#include "AugmentedReality_structs.hpp"
#include "AugmentedReality_classes.hpp"
#include "AppleImageUtils_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AppleARKit.AppleARKitEnvironmentCaptureProbe
// 0x0010 (0x0120 - 0x0110)
class UAppleARKitEnvironmentCaptureProbe final : public UAREnvironmentCaptureProbe
{
public:
	class UAppleARKitEnvironmentCaptureProbeTexture* ARKitEnvironmentTexture;                           // 0x0110(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_118[0x8];                                      // 0x0118(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppleARKitEnvironmentCaptureProbe">();
	}
	static class UAppleARKitEnvironmentCaptureProbe* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppleARKitEnvironmentCaptureProbe>();
	}
};
static_assert(alignof(UAppleARKitEnvironmentCaptureProbe) == 0x000010, "Wrong alignment on UAppleARKitEnvironmentCaptureProbe");
static_assert(sizeof(UAppleARKitEnvironmentCaptureProbe) == 0x000120, "Wrong size on UAppleARKitEnvironmentCaptureProbe");
static_assert(offsetof(UAppleARKitEnvironmentCaptureProbe, ARKitEnvironmentTexture) == 0x000110, "Member 'UAppleARKitEnvironmentCaptureProbe::ARKitEnvironmentTexture' has a wrong offset!");

// Class AppleARKit.AppleARKitSettings
// 0x0098 (0x00C0 - 0x0028)
class UAppleARKitSettings final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bRequireARKitSupport;                              // 0x0030(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 FaceTrackingLogDir;                                // 0x0038(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<ELivelinkTrackingType>                 LivelinkTrackingTypes;                             // 0x0048(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                          bFaceTrackingLogData;                              // 0x0058(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bFaceTrackingWriteEachFrame;                       // 0x0059(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EARFaceTrackingFileWriterType                 FaceTrackingFileWriterType;                        // 0x005A(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShouldWriteCameraImagePerFrame;                   // 0x005B(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         WrittenCameraImageScale;                           // 0x005C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         WrittenCameraImageQuality;                         // 0x0060(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ETextureRotationDirection                     WrittenCameraImageRotation;                        // 0x0064(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LiveLinkPublishingPort;                            // 0x0068(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   DefaultFaceTrackingLiveLinkSubjectName;            // 0x006C(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   DefaultPoseTrackingLiveLinkSubjectName;            // 0x0074(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EARFaceTrackingDirection                      DefaultFaceTrackingDirection;                      // 0x007C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bAdjustThreadPrioritiesDuringARSession;            // 0x007D(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_7E[0x2];                                       // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GameThreadPriorityOverride;                        // 0x0080(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         RenderThreadPriorityOverride;                      // 0x0084(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                 ARKitTimecodeProvider;                             // 0x0088(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_98[0x28];                                      // 0x0098(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppleARKitSettings">();
	}
	static class UAppleARKitSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppleARKitSettings>();
	}
};
static_assert(alignof(UAppleARKitSettings) == 0x000008, "Wrong alignment on UAppleARKitSettings");
static_assert(sizeof(UAppleARKitSettings) == 0x0000C0, "Wrong size on UAppleARKitSettings");
static_assert(offsetof(UAppleARKitSettings, bRequireARKitSupport) == 0x000030, "Member 'UAppleARKitSettings::bRequireARKitSupport' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, FaceTrackingLogDir) == 0x000038, "Member 'UAppleARKitSettings::FaceTrackingLogDir' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, LivelinkTrackingTypes) == 0x000048, "Member 'UAppleARKitSettings::LivelinkTrackingTypes' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, bFaceTrackingLogData) == 0x000058, "Member 'UAppleARKitSettings::bFaceTrackingLogData' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, bFaceTrackingWriteEachFrame) == 0x000059, "Member 'UAppleARKitSettings::bFaceTrackingWriteEachFrame' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, FaceTrackingFileWriterType) == 0x00005A, "Member 'UAppleARKitSettings::FaceTrackingFileWriterType' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, bShouldWriteCameraImagePerFrame) == 0x00005B, "Member 'UAppleARKitSettings::bShouldWriteCameraImagePerFrame' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, WrittenCameraImageScale) == 0x00005C, "Member 'UAppleARKitSettings::WrittenCameraImageScale' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, WrittenCameraImageQuality) == 0x000060, "Member 'UAppleARKitSettings::WrittenCameraImageQuality' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, WrittenCameraImageRotation) == 0x000064, "Member 'UAppleARKitSettings::WrittenCameraImageRotation' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, LiveLinkPublishingPort) == 0x000068, "Member 'UAppleARKitSettings::LiveLinkPublishingPort' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, DefaultFaceTrackingLiveLinkSubjectName) == 0x00006C, "Member 'UAppleARKitSettings::DefaultFaceTrackingLiveLinkSubjectName' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, DefaultPoseTrackingLiveLinkSubjectName) == 0x000074, "Member 'UAppleARKitSettings::DefaultPoseTrackingLiveLinkSubjectName' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, DefaultFaceTrackingDirection) == 0x00007C, "Member 'UAppleARKitSettings::DefaultFaceTrackingDirection' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, bAdjustThreadPrioritiesDuringARSession) == 0x00007D, "Member 'UAppleARKitSettings::bAdjustThreadPrioritiesDuringARSession' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, GameThreadPriorityOverride) == 0x000080, "Member 'UAppleARKitSettings::GameThreadPriorityOverride' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, RenderThreadPriorityOverride) == 0x000084, "Member 'UAppleARKitSettings::RenderThreadPriorityOverride' has a wrong offset!");
static_assert(offsetof(UAppleARKitSettings, ARKitTimecodeProvider) == 0x000088, "Member 'UAppleARKitSettings::ARKitTimecodeProvider' has a wrong offset!");

// Class AppleARKit.AppleARKitTimecodeProvider
// 0x0008 (0x0038 - 0x0030)
class UAppleARKitTimecodeProvider final : public UTimecodeProvider
{
public:
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppleARKitTimecodeProvider">();
	}
	static class UAppleARKitTimecodeProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppleARKitTimecodeProvider>();
	}
};
static_assert(alignof(UAppleARKitTimecodeProvider) == 0x000008, "Wrong alignment on UAppleARKitTimecodeProvider");
static_assert(sizeof(UAppleARKitTimecodeProvider) == 0x000038, "Wrong size on UAppleARKitTimecodeProvider");

// Class AppleARKit.AppleARKitTextureCameraImage
// 0x0010 (0x01F0 - 0x01E0)
class UAppleARKitTextureCameraImage final : public UARTextureCameraImage
{
public:
	uint8                                         Pad_1E0[0x10];                                     // 0x01E0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppleARKitTextureCameraImage">();
	}
	static class UAppleARKitTextureCameraImage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppleARKitTextureCameraImage>();
	}
};
static_assert(alignof(UAppleARKitTextureCameraImage) == 0x000010, "Wrong alignment on UAppleARKitTextureCameraImage");
static_assert(sizeof(UAppleARKitTextureCameraImage) == 0x0001F0, "Wrong size on UAppleARKitTextureCameraImage");

// Class AppleARKit.AppleARKitTextureCameraDepth
// 0x0000 (0x01F0 - 0x01F0)
class UAppleARKitTextureCameraDepth final : public UARTextureCameraDepth
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppleARKitTextureCameraDepth">();
	}
	static class UAppleARKitTextureCameraDepth* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppleARKitTextureCameraDepth>();
	}
};
static_assert(alignof(UAppleARKitTextureCameraDepth) == 0x000010, "Wrong alignment on UAppleARKitTextureCameraDepth");
static_assert(sizeof(UAppleARKitTextureCameraDepth) == 0x0001F0, "Wrong size on UAppleARKitTextureCameraDepth");

// Class AppleARKit.AppleARKitEnvironmentCaptureProbeTexture
// 0x0010 (0x0290 - 0x0280)
class UAppleARKitEnvironmentCaptureProbeTexture final : public UAREnvironmentCaptureProbeTexture
{
public:
	uint8                                         Pad_280[0x10];                                     // 0x0280(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppleARKitEnvironmentCaptureProbeTexture">();
	}
	static class UAppleARKitEnvironmentCaptureProbeTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppleARKitEnvironmentCaptureProbeTexture>();
	}
};
static_assert(alignof(UAppleARKitEnvironmentCaptureProbeTexture) == 0x000010, "Wrong alignment on UAppleARKitEnvironmentCaptureProbeTexture");
static_assert(sizeof(UAppleARKitEnvironmentCaptureProbeTexture) == 0x000290, "Wrong size on UAppleARKitEnvironmentCaptureProbeTexture");

// Class AppleARKit.AppleARKitOcclusionTexture
// 0x0010 (0x01F0 - 0x01E0)
class UAppleARKitOcclusionTexture final : public UARTexture
{
public:
	uint8                                         Pad_1E0[0x10];                                     // 0x01E0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppleARKitOcclusionTexture">();
	}
	static class UAppleARKitOcclusionTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppleARKitOcclusionTexture>();
	}
};
static_assert(alignof(UAppleARKitOcclusionTexture) == 0x000010, "Wrong alignment on UAppleARKitOcclusionTexture");
static_assert(sizeof(UAppleARKitOcclusionTexture) == 0x0001F0, "Wrong size on UAppleARKitOcclusionTexture");

// Class AppleARKit.AppleARKitCameraVideoTexture
// 0x0010 (0x01F0 - 0x01E0)
class UAppleARKitCameraVideoTexture final : public UARTextureCameraImage
{
public:
	uint8                                         Pad_1E0[0x10];                                     // 0x01E0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppleARKitCameraVideoTexture">();
	}
	static class UAppleARKitCameraVideoTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppleARKitCameraVideoTexture>();
	}
};
static_assert(alignof(UAppleARKitCameraVideoTexture) == 0x000010, "Wrong alignment on UAppleARKitCameraVideoTexture");
static_assert(sizeof(UAppleARKitCameraVideoTexture) == 0x0001F0, "Wrong size on UAppleARKitCameraVideoTexture");

// Class AppleARKit.ARKitCameraOverlayMaterialLoader
// 0x0028 (0x0050 - 0x0028)
class UARKitCameraOverlayMaterialLoader final : public UObject
{
public:
	class UMaterialInterface*                     DefaultCameraOverlayMaterial;                      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     DepthOcclusionOverlayMaterial;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     MatteOcclusionOverlayMaterial;                     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     SceneDepthOcclusionMaterial;                       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     SceneDepthColorationMaterial;                      // 0x0048(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ARKitCameraOverlayMaterialLoader">();
	}
	static class UARKitCameraOverlayMaterialLoader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UARKitCameraOverlayMaterialLoader>();
	}
};
static_assert(alignof(UARKitCameraOverlayMaterialLoader) == 0x000008, "Wrong alignment on UARKitCameraOverlayMaterialLoader");
static_assert(sizeof(UARKitCameraOverlayMaterialLoader) == 0x000050, "Wrong size on UARKitCameraOverlayMaterialLoader");
static_assert(offsetof(UARKitCameraOverlayMaterialLoader, DefaultCameraOverlayMaterial) == 0x000028, "Member 'UARKitCameraOverlayMaterialLoader::DefaultCameraOverlayMaterial' has a wrong offset!");
static_assert(offsetof(UARKitCameraOverlayMaterialLoader, DepthOcclusionOverlayMaterial) == 0x000030, "Member 'UARKitCameraOverlayMaterialLoader::DepthOcclusionOverlayMaterial' has a wrong offset!");
static_assert(offsetof(UARKitCameraOverlayMaterialLoader, MatteOcclusionOverlayMaterial) == 0x000038, "Member 'UARKitCameraOverlayMaterialLoader::MatteOcclusionOverlayMaterial' has a wrong offset!");
static_assert(offsetof(UARKitCameraOverlayMaterialLoader, SceneDepthOcclusionMaterial) == 0x000040, "Member 'UARKitCameraOverlayMaterialLoader::SceneDepthOcclusionMaterial' has a wrong offset!");
static_assert(offsetof(UARKitCameraOverlayMaterialLoader, SceneDepthColorationMaterial) == 0x000048, "Member 'UARKitCameraOverlayMaterialLoader::SceneDepthColorationMaterial' has a wrong offset!");

// Class AppleARKit.ARKitGeoTrackingSupport
// 0x0000 (0x0028 - 0x0028)
class UARKitGeoTrackingSupport final : public UARGeoTrackingSupport
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ARKitGeoTrackingSupport">();
	}
	static class UARKitGeoTrackingSupport* GetDefaultObj()
	{
		return GetDefaultObjImpl<UARKitGeoTrackingSupport>();
	}
};
static_assert(alignof(UARKitGeoTrackingSupport) == 0x000008, "Wrong alignment on UARKitGeoTrackingSupport");
static_assert(sizeof(UARKitGeoTrackingSupport) == 0x000028, "Wrong size on UARKitGeoTrackingSupport");

// Class AppleARKit.ARKitMeshGeometry
// 0x0000 (0x0100 - 0x0100)
class UARKitMeshGeometry final : public UARMeshGeometry
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ARKitMeshGeometry">();
	}
	static class UARKitMeshGeometry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UARKitMeshGeometry>();
	}
};
static_assert(alignof(UARKitMeshGeometry) == 0x000010, "Wrong alignment on UARKitMeshGeometry");
static_assert(sizeof(UARKitMeshGeometry) == 0x000100, "Wrong size on UARKitMeshGeometry");

// Class AppleARKit.MaterialExpressionARKitPassthroughCamera
// 0x0030 (0x00E0 - 0x00B0)
class UMaterialExpressionARKitPassthroughCamera final : public UMaterialExpression
{
public:
	struct FExpressionInput                       Coordinates;                                       // 0x00B0(0x0028)(NoDestructor, NativeAccessSpecifierPublic)
	uint32                                        ConstCoordinate;                                   // 0x00D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EARKitTextureType                             TextureType;                                       // 0x00DC(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionARKitPassthroughCamera">();
	}
	static class UMaterialExpressionARKitPassthroughCamera* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionARKitPassthroughCamera>();
	}
};
static_assert(alignof(UMaterialExpressionARKitPassthroughCamera) == 0x000008, "Wrong alignment on UMaterialExpressionARKitPassthroughCamera");
static_assert(sizeof(UMaterialExpressionARKitPassthroughCamera) == 0x0000E0, "Wrong size on UMaterialExpressionARKitPassthroughCamera");
static_assert(offsetof(UMaterialExpressionARKitPassthroughCamera, Coordinates) == 0x0000B0, "Member 'UMaterialExpressionARKitPassthroughCamera::Coordinates' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionARKitPassthroughCamera, ConstCoordinate) == 0x0000D8, "Member 'UMaterialExpressionARKitPassthroughCamera::ConstCoordinate' has a wrong offset!");
static_assert(offsetof(UMaterialExpressionARKitPassthroughCamera, TextureType) == 0x0000DC, "Member 'UMaterialExpressionARKitPassthroughCamera::TextureType' has a wrong offset!");

}

