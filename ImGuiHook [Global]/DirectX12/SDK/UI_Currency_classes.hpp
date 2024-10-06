#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Currency

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "M1Data_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Currency.UI_Currency_C
// 0x0090 (0x0988 - 0x08F8)
class UUI_Currency_C final : public UM1UICurrency
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0900(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Icon_SizeBox;                                      // 0x0908(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0910(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PurchaseIcon;                                // 0x0918(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Discount;                                      // 0x0920(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               O_Plus;                                            // 0x0928(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Cube_01_C*                     UI_Deco_Cube_01_1;                                 // 0x0930(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EM1CurrencyType                               DemoCurrencyType;                                  // 0x0938(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_939[0x3];                                      // 0x0939(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FontSize;                                          // 0x093C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          FontHAling;                                        // 0x0940(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_941[0x3];                                      // 0x0941(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           FontColor_Default;                                 // 0x0944(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FontColor_Fail;                                    // 0x0954(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           IconColor;                                         // 0x0964(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              IconSize;                                          // 0x0974(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SetViewBg;                                         // 0x097C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Set_View_Discount;                                 // 0x097D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IconView;                                          // 0x097E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPurchasable;                                      // 0x097F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ViewPurchaseIcon;                                  // 0x0980(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_SetAmountColor(bool bEnough);
	void BP_ShowBackgroundImage(bool bShouldShow);
	void Construct();
	void ExecuteUbergraph_UI_Currency(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Set_View_Img_Discount(bool View_Discount);
	void SetIconSize();
	void SetIconVisible();
	void SetTextColor(bool Enough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Currency_C">();
	}
	static class UUI_Currency_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Currency_C>();
	}
};
static_assert(alignof(UUI_Currency_C) == 0x000008, "Wrong alignment on UUI_Currency_C");
static_assert(sizeof(UUI_Currency_C) == 0x000988, "Wrong size on UUI_Currency_C");
static_assert(offsetof(UUI_Currency_C, UberGraphFrame) == 0x0008F8, "Member 'UUI_Currency_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, HorizontalBox_0) == 0x000900, "Member 'UUI_Currency_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, Icon_SizeBox) == 0x000908, "Member 'UUI_Currency_C::Icon_SizeBox' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, Image_BG) == 0x000910, "Member 'UUI_Currency_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, Image_PurchaseIcon) == 0x000918, "Member 'UUI_Currency_C::Image_PurchaseIcon' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, Img_Discount) == 0x000920, "Member 'UUI_Currency_C::Img_Discount' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, O_Plus) == 0x000928, "Member 'UUI_Currency_C::O_Plus' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, UI_Deco_Cube_01_1) == 0x000930, "Member 'UUI_Currency_C::UI_Deco_Cube_01_1' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, DemoCurrencyType) == 0x000938, "Member 'UUI_Currency_C::DemoCurrencyType' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, FontSize) == 0x00093C, "Member 'UUI_Currency_C::FontSize' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, FontHAling) == 0x000940, "Member 'UUI_Currency_C::FontHAling' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, FontColor_Default) == 0x000944, "Member 'UUI_Currency_C::FontColor_Default' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, FontColor_Fail) == 0x000954, "Member 'UUI_Currency_C::FontColor_Fail' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, IconColor) == 0x000964, "Member 'UUI_Currency_C::IconColor' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, IconSize) == 0x000974, "Member 'UUI_Currency_C::IconSize' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, SetViewBg) == 0x00097C, "Member 'UUI_Currency_C::SetViewBg' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, Set_View_Discount) == 0x00097D, "Member 'UUI_Currency_C::Set_View_Discount' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, IconView) == 0x00097E, "Member 'UUI_Currency_C::IconView' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, bPurchasable) == 0x00097F, "Member 'UUI_Currency_C::bPurchasable' has a wrong offset!");
static_assert(offsetof(UUI_Currency_C, ViewPurchaseIcon) == 0x000980, "Member 'UUI_Currency_C::ViewPurchaseIcon' has a wrong offset!");

}
