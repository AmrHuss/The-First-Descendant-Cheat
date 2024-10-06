#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OpenColorIO

#include "Basic.hpp"

#include "DeveloperSettings_classes.hpp"
#include "OpenColorIO_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class OpenColorIO.OpenColorIOSettings
// 0x0008 (0x0040 - 0x0038)
class UOpenColorIOSettings final : public UDeveloperSettings
{
public:
	uint8                                         bUseLegacyProcessor : 1;                           // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUse32fLUT : 1;                                    // 0x0038(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportInverseViewTransforms : 1;                 // 0x0038(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OpenColorIOSettings">();
	}
	static class UOpenColorIOSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOpenColorIOSettings>();
	}
};
static_assert(alignof(UOpenColorIOSettings) == 0x000008, "Wrong alignment on UOpenColorIOSettings");
static_assert(sizeof(UOpenColorIOSettings) == 0x000040, "Wrong size on UOpenColorIOSettings");

// Class OpenColorIO.OpenColorIOBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UOpenColorIOBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool ApplyColorSpaceTransform(const class UObject* WorldContextObject, const struct FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OpenColorIOBlueprintLibrary">();
	}
	static class UOpenColorIOBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOpenColorIOBlueprintLibrary>();
	}
};
static_assert(alignof(UOpenColorIOBlueprintLibrary) == 0x000008, "Wrong alignment on UOpenColorIOBlueprintLibrary");
static_assert(sizeof(UOpenColorIOBlueprintLibrary) == 0x000028, "Wrong size on UOpenColorIOBlueprintLibrary");

// Class OpenColorIO.OpenColorIOColorTransform
// 0x0138 (0x0160 - 0x0028)
class UOpenColorIOColorTransform final : public UObject
{
public:
	class UOpenColorIOConfiguration*              ConfigurationOwner;                                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsDisplayViewType;                                // 0x0030(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SourceColorSpace;                                  // 0x0038(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DestinationColorSpace;                             // 0x0048(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Display;                                           // 0x0058(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 View;                                              // 0x0068(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOpenColorIOViewTransformDirection            DisplayViewDirection;                              // 0x0078(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, class UTexture*>                  Textures;                                          // 0x0080(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_D0[0x90];                                      // 0x00D0(0x0090)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OpenColorIOColorTransform">();
	}
	static class UOpenColorIOColorTransform* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOpenColorIOColorTransform>();
	}
};
static_assert(alignof(UOpenColorIOColorTransform) == 0x000008, "Wrong alignment on UOpenColorIOColorTransform");
static_assert(sizeof(UOpenColorIOColorTransform) == 0x000160, "Wrong size on UOpenColorIOColorTransform");
static_assert(offsetof(UOpenColorIOColorTransform, ConfigurationOwner) == 0x000028, "Member 'UOpenColorIOColorTransform::ConfigurationOwner' has a wrong offset!");
static_assert(offsetof(UOpenColorIOColorTransform, bIsDisplayViewType) == 0x000030, "Member 'UOpenColorIOColorTransform::bIsDisplayViewType' has a wrong offset!");
static_assert(offsetof(UOpenColorIOColorTransform, SourceColorSpace) == 0x000038, "Member 'UOpenColorIOColorTransform::SourceColorSpace' has a wrong offset!");
static_assert(offsetof(UOpenColorIOColorTransform, DestinationColorSpace) == 0x000048, "Member 'UOpenColorIOColorTransform::DestinationColorSpace' has a wrong offset!");
static_assert(offsetof(UOpenColorIOColorTransform, Display) == 0x000058, "Member 'UOpenColorIOColorTransform::Display' has a wrong offset!");
static_assert(offsetof(UOpenColorIOColorTransform, View) == 0x000068, "Member 'UOpenColorIOColorTransform::View' has a wrong offset!");
static_assert(offsetof(UOpenColorIOColorTransform, DisplayViewDirection) == 0x000078, "Member 'UOpenColorIOColorTransform::DisplayViewDirection' has a wrong offset!");
static_assert(offsetof(UOpenColorIOColorTransform, Textures) == 0x000080, "Member 'UOpenColorIOColorTransform::Textures' has a wrong offset!");

// Class OpenColorIO.OpenColorIOConfiguration
// 0x0070 (0x0098 - 0x0028)
class UOpenColorIOConfiguration final : public UObject
{
public:
	struct FFilePath                              ConfigurationFile;                                 // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOpenColorIOColorSpace>         DesiredColorSpaces;                                // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FOpenColorIODisplayView>        DesiredDisplayViews;                               // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UOpenColorIOColorTransform*>     ColorTransforms;                                   // 0x0058(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_68[0x30];                                      // 0x0068(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ReloadExistingColorspaces();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OpenColorIOConfiguration">();
	}
	static class UOpenColorIOConfiguration* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOpenColorIOConfiguration>();
	}
};
static_assert(alignof(UOpenColorIOConfiguration) == 0x000008, "Wrong alignment on UOpenColorIOConfiguration");
static_assert(sizeof(UOpenColorIOConfiguration) == 0x000098, "Wrong size on UOpenColorIOConfiguration");
static_assert(offsetof(UOpenColorIOConfiguration, ConfigurationFile) == 0x000028, "Member 'UOpenColorIOConfiguration::ConfigurationFile' has a wrong offset!");
static_assert(offsetof(UOpenColorIOConfiguration, DesiredColorSpaces) == 0x000038, "Member 'UOpenColorIOConfiguration::DesiredColorSpaces' has a wrong offset!");
static_assert(offsetof(UOpenColorIOConfiguration, DesiredDisplayViews) == 0x000048, "Member 'UOpenColorIOConfiguration::DesiredDisplayViews' has a wrong offset!");
static_assert(offsetof(UOpenColorIOConfiguration, ColorTransforms) == 0x000058, "Member 'UOpenColorIOConfiguration::ColorTransforms' has a wrong offset!");

// Class OpenColorIO.OpenColorIODisplayExtensionWrapper
// 0x0010 (0x0038 - 0x0028)
class UOpenColorIODisplayExtensionWrapper final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UOpenColorIODisplayExtensionWrapper* CreateInGameOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration);
	static class UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration, const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction);

	void RemoveSceneExtension();
	void SetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration);
	void SetSceneExtensionIsActiveFunction(const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
	void SetSceneExtensionIsActiveFunctions(const TArray<struct FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);

	struct FOpenColorIODisplayConfiguration GetOpenColorIOConfiguration() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OpenColorIODisplayExtensionWrapper">();
	}
	static class UOpenColorIODisplayExtensionWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOpenColorIODisplayExtensionWrapper>();
	}
};
static_assert(alignof(UOpenColorIODisplayExtensionWrapper) == 0x000008, "Wrong alignment on UOpenColorIODisplayExtensionWrapper");
static_assert(sizeof(UOpenColorIODisplayExtensionWrapper) == 0x000038, "Wrong size on UOpenColorIODisplayExtensionWrapper");

}
