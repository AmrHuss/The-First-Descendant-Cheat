#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameGuide_GainItem

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameGuide_GainItem.UI_GameGuide_GainItem_C
// 0x0068 (0x0790 - 0x0728)
class UUI_GameGuide_GainItem_C final : public UM1UIGame_ReceivedItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOpen_Tier04;                                   // 0x0730(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOpen_Tier03;                                   // 0x0738(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOpen_Tier02;                                   // 0x0740(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOpen_Tier01;                                   // 0x0748(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOpen_Tier00;                                   // 0x0750(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimStack;                                         // 0x0758(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_142;                                         // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ImportanceEffect;                            // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ImportanceIcon;                              // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MI_Shine;                                          // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Quantity;                                  // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Panel_Importance;                                  // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_HiddenIconInfo();
	void BP_PlayStackAnim();
	void BP_PlayTierAnim(EM1ItemTierType InTier);
	void BP_SetImportanceType(EM1ImportanceType InType);
	void BP_SetVisibleQuantityOrLevel(bool bIsVisible);
	void BP_widget_playAkEvent();
	void BP_widget_playAkEvent_1();
	void BP_widget_playAkEvent_2();
	void BP_widget_playAkEvent_3();
	void BP_widget_playAkEvent_4();
	void Construct();
	void ExecuteUbergraph_UI_GameGuide_GainItem(int32 EntryPoint);
	void SequenceEvent__ENTRYPOINTUI_GameGuide_GainItem();
	void SequenceEvent__ENTRYPOINTUI_GameGuide_GainItem_0();
	void SequenceEvent__ENTRYPOINTUI_GameGuide_GainItem_1();
	void SequenceEvent__ENTRYPOINTUI_GameGuide_GainItem_2();
	void SequenceEvent__ENTRYPOINTUI_GameGuide_GainItem_3();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameGuide_GainItem_C">();
	}
	static class UUI_GameGuide_GainItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameGuide_GainItem_C>();
	}
};
static_assert(alignof(UUI_GameGuide_GainItem_C) == 0x000008, "Wrong alignment on UUI_GameGuide_GainItem_C");
static_assert(sizeof(UUI_GameGuide_GainItem_C) == 0x000790, "Wrong size on UUI_GameGuide_GainItem_C");
static_assert(offsetof(UUI_GameGuide_GainItem_C, UberGraphFrame) == 0x000728, "Member 'UUI_GameGuide_GainItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_GainItem_C, AnimOpen_Tier04) == 0x000730, "Member 'UUI_GameGuide_GainItem_C::AnimOpen_Tier04' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_GainItem_C, AnimOpen_Tier03) == 0x000738, "Member 'UUI_GameGuide_GainItem_C::AnimOpen_Tier03' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_GainItem_C, AnimOpen_Tier02) == 0x000740, "Member 'UUI_GameGuide_GainItem_C::AnimOpen_Tier02' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_GainItem_C, AnimOpen_Tier01) == 0x000748, "Member 'UUI_GameGuide_GainItem_C::AnimOpen_Tier01' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_GainItem_C, AnimOpen_Tier00) == 0x000750, "Member 'UUI_GameGuide_GainItem_C::AnimOpen_Tier00' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_GainItem_C, AnimStack) == 0x000758, "Member 'UUI_GameGuide_GainItem_C::AnimStack' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_GainItem_C, Image_142) == 0x000760, "Member 'UUI_GameGuide_GainItem_C::Image_142' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_GainItem_C, Image_ImportanceEffect) == 0x000768, "Member 'UUI_GameGuide_GainItem_C::Image_ImportanceEffect' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_GainItem_C, Image_ImportanceIcon) == 0x000770, "Member 'UUI_GameGuide_GainItem_C::Image_ImportanceIcon' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_GainItem_C, MI_Shine) == 0x000778, "Member 'UUI_GameGuide_GainItem_C::MI_Shine' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_GainItem_C, Overlay_Quantity) == 0x000780, "Member 'UUI_GameGuide_GainItem_C::Overlay_Quantity' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_GainItem_C, Panel_Importance) == 0x000788, "Member 'UUI_GameGuide_GainItem_C::Panel_Importance' has a wrong offset!");

}
