#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_Defense_HUDCenter

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_Defense_HUDCenter.UI_Mission_Task_Defense_HUDCenter_C
// 0x0020 (0x0740 - 0x0720)
class UUI_Mission_Task_Defense_HUDCenter_C final : public UM1UIMissionTaskGoal_Defense
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0728(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           Panel_DefenseHudCenter;                            // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Task_TargetListItem_Defense_C* UI_Mission_Task_TargetListItem_Defense;            // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_ShowWidget(bool bInShow);
	void ExecuteUbergraph_UI_Mission_Task_Defense_HUDCenter(int32 EntryPoint);
	void Finished_3EA48CBD413817A199E581BE4EDB96ED();

	TArray<class UWidget*> BP_GetTargetListItems() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_Defense_HUDCenter_C">();
	}
	static class UUI_Mission_Task_Defense_HUDCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_Defense_HUDCenter_C>();
	}
};
static_assert(alignof(UUI_Mission_Task_Defense_HUDCenter_C) == 0x000008, "Wrong alignment on UUI_Mission_Task_Defense_HUDCenter_C");
static_assert(sizeof(UUI_Mission_Task_Defense_HUDCenter_C) == 0x000740, "Wrong size on UUI_Mission_Task_Defense_HUDCenter_C");
static_assert(offsetof(UUI_Mission_Task_Defense_HUDCenter_C, UberGraphFrame) == 0x000720, "Member 'UUI_Mission_Task_Defense_HUDCenter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Task_Defense_HUDCenter_C, UIAnim_Open) == 0x000728, "Member 'UUI_Mission_Task_Defense_HUDCenter_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Task_Defense_HUDCenter_C, Panel_DefenseHudCenter) == 0x000730, "Member 'UUI_Mission_Task_Defense_HUDCenter_C::Panel_DefenseHudCenter' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Task_Defense_HUDCenter_C, UI_Mission_Task_TargetListItem_Defense) == 0x000738, "Member 'UUI_Mission_Task_Defense_HUDCenter_C::UI_Mission_Task_TargetListItem_Defense' has a wrong offset!");

}

