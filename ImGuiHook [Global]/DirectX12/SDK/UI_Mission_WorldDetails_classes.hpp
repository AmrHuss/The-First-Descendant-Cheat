#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_WorldDetails

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_WorldDetails.UI_Mission_WorldDetails_C
// 0x0060 (0x0778 - 0x0718)
class UUI_Mission_WorldDetails_C final : public UM1UIMissionWaveRewardsToolTip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0720(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_Name;                                           // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Rank_1;                                       // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ContextButtons_Tooltip_C*           UI_ContextButtons;                                 // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Back_002_C*                    UI_Deco_Back_002_C_1;                              // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Reward_Item_Wide_C*         UI_Mission_Reward_Item_Wide_C_0;                   // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Reward_Item_Wide_C*         UI_Mission_Reward_Item_Wide_C_1;                   // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Reward_Item_Wide_C*         UI_Mission_Reward_Item_Wide_C_2;                   // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Reward_Item_Wide_C*         UI_Mission_Reward_Item_Wide_C_5;                   // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Reward_Item_Wide_C*         UI_Mission_Reward_Item_Wide_C_6;                   // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Mission_WorldDetails(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_WorldDetails_C">();
	}
	static class UUI_Mission_WorldDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_WorldDetails_C>();
	}
};
static_assert(alignof(UUI_Mission_WorldDetails_C) == 0x000008, "Wrong alignment on UUI_Mission_WorldDetails_C");
static_assert(sizeof(UUI_Mission_WorldDetails_C) == 0x000778, "Wrong size on UUI_Mission_WorldDetails_C");
static_assert(offsetof(UUI_Mission_WorldDetails_C, UberGraphFrame) == 0x000718, "Member 'UUI_Mission_WorldDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mission_WorldDetails_C, UIAnim_Open) == 0x000720, "Member 'UUI_Mission_WorldDetails_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_Mission_WorldDetails_C, Image) == 0x000728, "Member 'UUI_Mission_WorldDetails_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_Mission_WorldDetails_C, TB_Name) == 0x000730, "Member 'UUI_Mission_WorldDetails_C::TB_Name' has a wrong offset!");
static_assert(offsetof(UUI_Mission_WorldDetails_C, Text_Rank_1) == 0x000738, "Member 'UUI_Mission_WorldDetails_C::Text_Rank_1' has a wrong offset!");
static_assert(offsetof(UUI_Mission_WorldDetails_C, UI_ContextButtons) == 0x000740, "Member 'UUI_Mission_WorldDetails_C::UI_ContextButtons' has a wrong offset!");
static_assert(offsetof(UUI_Mission_WorldDetails_C, UI_Deco_Back_002_C_1) == 0x000748, "Member 'UUI_Mission_WorldDetails_C::UI_Deco_Back_002_C_1' has a wrong offset!");
static_assert(offsetof(UUI_Mission_WorldDetails_C, UI_Mission_Reward_Item_Wide_C_0) == 0x000750, "Member 'UUI_Mission_WorldDetails_C::UI_Mission_Reward_Item_Wide_C_0' has a wrong offset!");
static_assert(offsetof(UUI_Mission_WorldDetails_C, UI_Mission_Reward_Item_Wide_C_1) == 0x000758, "Member 'UUI_Mission_WorldDetails_C::UI_Mission_Reward_Item_Wide_C_1' has a wrong offset!");
static_assert(offsetof(UUI_Mission_WorldDetails_C, UI_Mission_Reward_Item_Wide_C_2) == 0x000760, "Member 'UUI_Mission_WorldDetails_C::UI_Mission_Reward_Item_Wide_C_2' has a wrong offset!");
static_assert(offsetof(UUI_Mission_WorldDetails_C, UI_Mission_Reward_Item_Wide_C_5) == 0x000768, "Member 'UUI_Mission_WorldDetails_C::UI_Mission_Reward_Item_Wide_C_5' has a wrong offset!");
static_assert(offsetof(UUI_Mission_WorldDetails_C, UI_Mission_Reward_Item_Wide_C_6) == 0x000770, "Member 'UUI_Mission_WorldDetails_C::UI_Mission_Reward_Item_Wide_C_6' has a wrong offset!");

}

