#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioWidgets

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// Enum AudioWidgets.EAudioRadialSliderLayout
// NumValues: 0x0004
enum class EAudioRadialSliderLayout : uint8
{
	Layout_LabelTop                          = 0,
	Layout_LabelCenter                       = 1,
	Layout_LabelBottom                       = 2,
	Layout_MAX                               = 3,
};

// ScriptStruct AudioWidgets.MeterChannelInfo
// 0x000C (0x000C - 0x0000)
struct FMeterChannelInfo final
{
public:
	float                                         MeterValue;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PeakValue;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClippingValue;                                     // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMeterChannelInfo) == 0x000004, "Wrong alignment on FMeterChannelInfo");
static_assert(sizeof(FMeterChannelInfo) == 0x00000C, "Wrong size on FMeterChannelInfo");
static_assert(offsetof(FMeterChannelInfo, MeterValue) == 0x000000, "Member 'FMeterChannelInfo::MeterValue' has a wrong offset!");
static_assert(offsetof(FMeterChannelInfo, PeakValue) == 0x000004, "Member 'FMeterChannelInfo::PeakValue' has a wrong offset!");
static_assert(offsetof(FMeterChannelInfo, ClippingValue) == 0x000008, "Member 'FMeterChannelInfo::ClippingValue' has a wrong offset!");

// ScriptStruct AudioWidgets.AudioMeterStyle
// 0x0458 (0x0460 - 0x0008)
struct FAudioMeterStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            MeterValueImage;                                   // 0x0010(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            BackgroundImage;                                   // 0x00D0(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            MeterBackgroundImage;                              // 0x0190(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            MeterValueBackgroundImage;                         // 0x0250(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            MeterPeakImage;                                    // 0x0310(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                              MeterSize;                                         // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              MeterPadding;                                      // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MeterValuePadding;                                 // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PeakValueWidth;                                    // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ValueRangeDb;                                      // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowScale;                                        // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bScaleSide;                                        // 0x03F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F2[0x2];                                      // 0x03F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScaleHashOffset;                                   // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaleHashWidth;                                    // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaleHashHeight;                                   // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DecibelsPerHash;                                   // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_404[0x4];                                      // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         Font;                                              // 0x0408(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAudioMeterStyle) == 0x000010, "Wrong alignment on FAudioMeterStyle");
static_assert(sizeof(FAudioMeterStyle) == 0x000460, "Wrong size on FAudioMeterStyle");
static_assert(offsetof(FAudioMeterStyle, MeterValueImage) == 0x000010, "Member 'FAudioMeterStyle::MeterValueImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, BackgroundImage) == 0x0000D0, "Member 'FAudioMeterStyle::BackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterBackgroundImage) == 0x000190, "Member 'FAudioMeterStyle::MeterBackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterValueBackgroundImage) == 0x000250, "Member 'FAudioMeterStyle::MeterValueBackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterPeakImage) == 0x000310, "Member 'FAudioMeterStyle::MeterPeakImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterSize) == 0x0003D0, "Member 'FAudioMeterStyle::MeterSize' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterPadding) == 0x0003D8, "Member 'FAudioMeterStyle::MeterPadding' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterValuePadding) == 0x0003E0, "Member 'FAudioMeterStyle::MeterValuePadding' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, PeakValueWidth) == 0x0003E4, "Member 'FAudioMeterStyle::PeakValueWidth' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, ValueRangeDb) == 0x0003E8, "Member 'FAudioMeterStyle::ValueRangeDb' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, bShowScale) == 0x0003F0, "Member 'FAudioMeterStyle::bShowScale' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, bScaleSide) == 0x0003F1, "Member 'FAudioMeterStyle::bScaleSide' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, ScaleHashOffset) == 0x0003F4, "Member 'FAudioMeterStyle::ScaleHashOffset' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, ScaleHashWidth) == 0x0003F8, "Member 'FAudioMeterStyle::ScaleHashWidth' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, ScaleHashHeight) == 0x0003FC, "Member 'FAudioMeterStyle::ScaleHashHeight' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, DecibelsPerHash) == 0x000400, "Member 'FAudioMeterStyle::DecibelsPerHash' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, Font) == 0x000408, "Member 'FAudioMeterStyle::Font' has a wrong offset!");

// ScriptStruct AudioWidgets.AudioTextBoxStyle
// 0x00E8 (0x00F0 - 0x0008)
struct FAudioTextBoxStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            BackgroundImage;                                   // 0x0010(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            BackgroundColor;                                   // 0x00D0(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_E4[0xC];                                       // 0x00E4(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAudioTextBoxStyle) == 0x000010, "Wrong alignment on FAudioTextBoxStyle");
static_assert(sizeof(FAudioTextBoxStyle) == 0x0000F0, "Wrong size on FAudioTextBoxStyle");
static_assert(offsetof(FAudioTextBoxStyle, BackgroundImage) == 0x000010, "Member 'FAudioTextBoxStyle::BackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioTextBoxStyle, BackgroundColor) == 0x0000D0, "Member 'FAudioTextBoxStyle::BackgroundColor' has a wrong offset!");

// ScriptStruct AudioWidgets.AudioSliderStyle
// 0x06B8 (0x06C0 - 0x0008)
struct FAudioSliderStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSliderStyle                           SliderStyle;                                       // 0x0010(0x04A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAudioTextBoxStyle                     TextBoxStyle;                                      // 0x04B0(0x00F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            WidgetBackgroundImage;                             // 0x05A0(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderBackgroundColor;                             // 0x0660(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                              SliderBackgroundSize;                              // 0x0674(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LabelPadding;                                      // 0x067C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderBarColor;                                    // 0x0680(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderThumbColor;                                  // 0x0694(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            WidgetBackgroundColor;                             // 0x06A8(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_6BC[0x4];                                      // 0x06BC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAudioSliderStyle) == 0x000010, "Wrong alignment on FAudioSliderStyle");
static_assert(sizeof(FAudioSliderStyle) == 0x0006C0, "Wrong size on FAudioSliderStyle");
static_assert(offsetof(FAudioSliderStyle, SliderStyle) == 0x000010, "Member 'FAudioSliderStyle::SliderStyle' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, TextBoxStyle) == 0x0004B0, "Member 'FAudioSliderStyle::TextBoxStyle' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, WidgetBackgroundImage) == 0x0005A0, "Member 'FAudioSliderStyle::WidgetBackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, SliderBackgroundColor) == 0x000660, "Member 'FAudioSliderStyle::SliderBackgroundColor' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, SliderBackgroundSize) == 0x000674, "Member 'FAudioSliderStyle::SliderBackgroundSize' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, LabelPadding) == 0x00067C, "Member 'FAudioSliderStyle::LabelPadding' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, SliderBarColor) == 0x000680, "Member 'FAudioSliderStyle::SliderBarColor' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, SliderThumbColor) == 0x000694, "Member 'FAudioSliderStyle::SliderThumbColor' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, WidgetBackgroundColor) == 0x0006A8, "Member 'FAudioSliderStyle::WidgetBackgroundColor' has a wrong offset!");

// ScriptStruct AudioWidgets.AudioRadialSliderStyle
// 0x0148 (0x0150 - 0x0008)
struct FAudioRadialSliderStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAudioTextBoxStyle                     TextBoxStyle;                                      // 0x0010(0x00F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            CenterBackgroundColor;                             // 0x0100(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderBarColor;                                    // 0x0114(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderProgressColor;                               // 0x0128(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         LabelPadding;                                      // 0x013C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultSliderRadius;                               // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_144[0xC];                                      // 0x0144(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAudioRadialSliderStyle) == 0x000010, "Wrong alignment on FAudioRadialSliderStyle");
static_assert(sizeof(FAudioRadialSliderStyle) == 0x000150, "Wrong size on FAudioRadialSliderStyle");
static_assert(offsetof(FAudioRadialSliderStyle, TextBoxStyle) == 0x000010, "Member 'FAudioRadialSliderStyle::TextBoxStyle' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, CenterBackgroundColor) == 0x000100, "Member 'FAudioRadialSliderStyle::CenterBackgroundColor' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, SliderBarColor) == 0x000114, "Member 'FAudioRadialSliderStyle::SliderBarColor' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, SliderProgressColor) == 0x000128, "Member 'FAudioRadialSliderStyle::SliderProgressColor' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, LabelPadding) == 0x00013C, "Member 'FAudioRadialSliderStyle::LabelPadding' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, DefaultSliderRadius) == 0x000140, "Member 'FAudioRadialSliderStyle::DefaultSliderRadius' has a wrong offset!");

}

