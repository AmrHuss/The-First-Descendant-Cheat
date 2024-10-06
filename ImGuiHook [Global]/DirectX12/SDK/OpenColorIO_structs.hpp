#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OpenColorIO

#include "Basic.hpp"


namespace SDK
{

// Enum OpenColorIO.EOpenColorIOViewTransformDirection
// NumValues: 0x0003
enum class EOpenColorIOViewTransformDirection : uint8
{
	Forward                                  = 0,
	Inverse                                  = 1,
	EOpenColorIOViewTransformDirection_MAX   = 2,
};

// ScriptStruct OpenColorIO.OpenColorIOColorSpace
// 0x0028 (0x0028 - 0x0000)
struct FOpenColorIOColorSpace final
{
public:
	class FString                                 ColorSpaceName;                                    // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ColorSpaceIndex;                                   // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 FamilyName;                                        // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOpenColorIOColorSpace) == 0x000008, "Wrong alignment on FOpenColorIOColorSpace");
static_assert(sizeof(FOpenColorIOColorSpace) == 0x000028, "Wrong size on FOpenColorIOColorSpace");
static_assert(offsetof(FOpenColorIOColorSpace, ColorSpaceName) == 0x000000, "Member 'FOpenColorIOColorSpace::ColorSpaceName' has a wrong offset!");
static_assert(offsetof(FOpenColorIOColorSpace, ColorSpaceIndex) == 0x000010, "Member 'FOpenColorIOColorSpace::ColorSpaceIndex' has a wrong offset!");
static_assert(offsetof(FOpenColorIOColorSpace, FamilyName) == 0x000018, "Member 'FOpenColorIOColorSpace::FamilyName' has a wrong offset!");

// ScriptStruct OpenColorIO.OpenColorIODisplayView
// 0x0020 (0x0020 - 0x0000)
struct FOpenColorIODisplayView final
{
public:
	class FString                                 Display;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 View;                                              // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOpenColorIODisplayView) == 0x000008, "Wrong alignment on FOpenColorIODisplayView");
static_assert(sizeof(FOpenColorIODisplayView) == 0x000020, "Wrong size on FOpenColorIODisplayView");
static_assert(offsetof(FOpenColorIODisplayView, Display) == 0x000000, "Member 'FOpenColorIODisplayView::Display' has a wrong offset!");
static_assert(offsetof(FOpenColorIODisplayView, View) == 0x000010, "Member 'FOpenColorIODisplayView::View' has a wrong offset!");

// ScriptStruct OpenColorIO.OpenColorIOColorConversionSettings
// 0x0098 (0x0098 - 0x0000)
struct FOpenColorIOColorConversionSettings final
{
public:
	class UOpenColorIOConfiguration*              ConfigurationSource;                               // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOpenColorIOColorSpace                 SourceColorSpace;                                  // 0x0008(0x0028)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FOpenColorIOColorSpace                 DestinationColorSpace;                             // 0x0030(0x0028)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FOpenColorIODisplayView                DestinationDisplayView;                            // 0x0058(0x0020)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EOpenColorIOViewTransformDirection            DisplayViewDirection;                              // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_79[0x1F];                                      // 0x0079(0x001F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FOpenColorIOColorConversionSettings) == 0x000008, "Wrong alignment on FOpenColorIOColorConversionSettings");
static_assert(sizeof(FOpenColorIOColorConversionSettings) == 0x000098, "Wrong size on FOpenColorIOColorConversionSettings");
static_assert(offsetof(FOpenColorIOColorConversionSettings, ConfigurationSource) == 0x000000, "Member 'FOpenColorIOColorConversionSettings::ConfigurationSource' has a wrong offset!");
static_assert(offsetof(FOpenColorIOColorConversionSettings, SourceColorSpace) == 0x000008, "Member 'FOpenColorIOColorConversionSettings::SourceColorSpace' has a wrong offset!");
static_assert(offsetof(FOpenColorIOColorConversionSettings, DestinationColorSpace) == 0x000030, "Member 'FOpenColorIOColorConversionSettings::DestinationColorSpace' has a wrong offset!");
static_assert(offsetof(FOpenColorIOColorConversionSettings, DestinationDisplayView) == 0x000058, "Member 'FOpenColorIOColorConversionSettings::DestinationDisplayView' has a wrong offset!");
static_assert(offsetof(FOpenColorIOColorConversionSettings, DisplayViewDirection) == 0x000078, "Member 'FOpenColorIOColorConversionSettings::DisplayViewDirection' has a wrong offset!");

// ScriptStruct OpenColorIO.OpenColorIODisplayConfiguration
// 0x00A0 (0x00A0 - 0x0000)
struct FOpenColorIODisplayConfiguration final
{
public:
	bool                                          bIsEnabled;                                        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOpenColorIOColorConversionSettings    ColorConfiguration;                                // 0x0008(0x0098)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOpenColorIODisplayConfiguration) == 0x000008, "Wrong alignment on FOpenColorIODisplayConfiguration");
static_assert(sizeof(FOpenColorIODisplayConfiguration) == 0x0000A0, "Wrong size on FOpenColorIODisplayConfiguration");
static_assert(offsetof(FOpenColorIODisplayConfiguration, bIsEnabled) == 0x000000, "Member 'FOpenColorIODisplayConfiguration::bIsEnabled' has a wrong offset!");
static_assert(offsetof(FOpenColorIODisplayConfiguration, ColorConfiguration) == 0x000008, "Member 'FOpenColorIODisplayConfiguration::ColorConfiguration' has a wrong offset!");

}

