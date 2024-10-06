#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Result_Anim_Reward_Item

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Result_Anim_Reward_Item.UI_Mission_Result_Anim_Reward_Item_C
// 0x0028 (0x08D8 - 0x08B0)
class UUI_Mission_Result_Anim_Reward_Item_C final : public UM1UIMissionResultRewardItemPanelItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_AdditionalItem;                             // 0x08B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_GoodItem;                                   // 0x08C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               ImportantFx;                                       // 0x08C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemIcon_C*                         UI_ItemIcon;                                       // 0x08D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_PlayImportantItemAnim();
	void ExecuteUbergraph_UI_Mission_Result_Anim_Reward_Item(int32 EntryPoint);
	void SetDataImpl(class UM1UIData* InData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Result_Anim_Reward_Item_C">();
	}
	static class UUI_Mission_Result_Anim_Reward_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Result_Anim_Reward_Item_C>();
	}
};
static_assert(alignof(UUI_Mission_Result_Anim_Reward_Item_C) == 0x000008, "Wrong alignment on UUI_Mission_Result_Anim_Reward_Item_C");
static_assert(sizeof(UUI_Mission_Result_Anim_Reward_Item_C) == 0x0008D8, "Wrong size on UUI_Mission_Result_Anim_Reward_Item_C");
static_assert(offsetof(UUI_Mission_Result_Anim_Reward_Item_C, UberGraphFrame) == 0x0008B0, "Member 'UUI_Mission_Result_Anim_Reward_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_Anim_Reward_Item_C, UIAnim_AdditionalItem) == 0x0008B8, "Member 'UUI_Mission_Result_Anim_Reward_Item_C::UIAnim_AdditionalItem' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_Anim_Reward_Item_C, UIAnim_GoodItem) == 0x0008C0, "Member 'UUI_Mission_Result_Anim_Reward_Item_C::UIAnim_GoodItem' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_Anim_Reward_Item_C, ImportantFx) == 0x0008C8, "Member 'UUI_Mission_Result_Anim_Reward_Item_C::ImportantFx' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_Anim_Reward_Item_C, UI_ItemIcon) == 0x0008D0, "Member 'UUI_Mission_Result_Anim_Reward_Item_C::UI_ItemIcon' has a wrong offset!");

}

