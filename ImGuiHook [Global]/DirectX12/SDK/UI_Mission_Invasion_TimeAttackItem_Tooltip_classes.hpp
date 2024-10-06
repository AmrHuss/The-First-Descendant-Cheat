#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Invasion_TimeAttackItem_Tooltip

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Invasion_TimeAttackItem_Tooltip.UI_Mission_Invasion_TimeAttackItem_Tooltip_C
// 0x0048 (0x0788 - 0x0740)
class UUI_Mission_Invasion_TimeAttackItem_Tooltip_C final : public UM1UIInvasionTimeAttackRewardsToolTip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0740(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0748(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_Name;                                           // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Back_002_C*                    UI_Deco_Back_002_C_1;                              // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Invasion_TimeAttackGroupItem_C* UI_Mission_Invasion_TimeAttackGroupItem;           // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Invasion_TimeAttackGroupItem_C* UI_Mission_Invasion_TimeAttackGroupItem_1;         // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Invasion_TimeAttackGroupItem_C* UI_Mission_Invasion_TimeAttackGroupItem_2;         // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Mission_Invasion_TimeAttackItem_Tooltip(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Invasion_TimeAttackItem_Tooltip_C">();
	}
	static class UUI_Mission_Invasion_TimeAttackItem_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Invasion_TimeAttackItem_Tooltip_C>();
	}
};
static_assert(alignof(UUI_Mission_Invasion_TimeAttackItem_Tooltip_C) == 0x000008, "Wrong alignment on UUI_Mission_Invasion_TimeAttackItem_Tooltip_C");
static_assert(sizeof(UUI_Mission_Invasion_TimeAttackItem_Tooltip_C) == 0x000788, "Wrong size on UUI_Mission_Invasion_TimeAttackItem_Tooltip_C");
static_assert(offsetof(UUI_Mission_Invasion_TimeAttackItem_Tooltip_C, UberGraphFrame) == 0x000740, "Member 'UUI_Mission_Invasion_TimeAttackItem_Tooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Invasion_TimeAttackItem_Tooltip_C, UIAnim_Open) == 0x000748, "Member 'UUI_Mission_Invasion_TimeAttackItem_Tooltip_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Invasion_TimeAttackItem_Tooltip_C, Icon) == 0x000750, "Member 'UUI_Mission_Invasion_TimeAttackItem_Tooltip_C::Icon' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Invasion_TimeAttackItem_Tooltip_C, Image) == 0x000758, "Member 'UUI_Mission_Invasion_TimeAttackItem_Tooltip_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Invasion_TimeAttackItem_Tooltip_C, TB_Name) == 0x000760, "Member 'UUI_Mission_Invasion_TimeAttackItem_Tooltip_C::TB_Name' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Invasion_TimeAttackItem_Tooltip_C, UI_Deco_Back_002_C_1) == 0x000768, "Member 'UUI_Mission_Invasion_TimeAttackItem_Tooltip_C::UI_Deco_Back_002_C_1' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Invasion_TimeAttackItem_Tooltip_C, UI_Mission_Invasion_TimeAttackGroupItem) == 0x000770, "Member 'UUI_Mission_Invasion_TimeAttackItem_Tooltip_C::UI_Mission_Invasion_TimeAttackGroupItem' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Invasion_TimeAttackItem_Tooltip_C, UI_Mission_Invasion_TimeAttackGroupItem_1) == 0x000778, "Member 'UUI_Mission_Invasion_TimeAttackItem_Tooltip_C::UI_Mission_Invasion_TimeAttackGroupItem_1' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Invasion_TimeAttackItem_Tooltip_C, UI_Mission_Invasion_TimeAttackGroupItem_2) == 0x000780, "Member 'UUI_Mission_Invasion_TimeAttackItem_Tooltip_C::UI_Mission_Invasion_TimeAttackGroupItem_2' has a wrong offset!");

}

