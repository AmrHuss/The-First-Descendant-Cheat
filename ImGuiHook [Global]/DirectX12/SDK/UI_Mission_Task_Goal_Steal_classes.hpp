#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_Goal_Steal

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_Goal_Steal.UI_Mission_Task_Goal_Steal_C
// 0x0018 (0x0740 - 0x0728)
class UUI_Mission_Task_Goal_Steal_C final : public UM1UIMissionTaskGoal_Steal
{
public:
	class UUI_Mission_Task_TargetNameTag_C*       UI_Mission_Task_TargetNameTag;                     // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Task_TargetNameTag_C*       UI_Mission_Task_TargetNameTag_1;                   // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Task_TargetNameTag_C*       UI_Mission_Task_TargetNameTag_2;                   // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_Goal_Steal_C">();
	}
	static class UUI_Mission_Task_Goal_Steal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_Goal_Steal_C>();
	}
};
static_assert(alignof(UUI_Mission_Task_Goal_Steal_C) == 0x000008, "Wrong alignment on UUI_Mission_Task_Goal_Steal_C");
static_assert(sizeof(UUI_Mission_Task_Goal_Steal_C) == 0x000740, "Wrong size on UUI_Mission_Task_Goal_Steal_C");
static_assert(offsetof(UUI_Mission_Task_Goal_Steal_C, UI_Mission_Task_TargetNameTag) == 0x000728, "Member 'UUI_Mission_Task_Goal_Steal_C::UI_Mission_Task_TargetNameTag' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Task_Goal_Steal_C, UI_Mission_Task_TargetNameTag_1) == 0x000730, "Member 'UUI_Mission_Task_Goal_Steal_C::UI_Mission_Task_TargetNameTag_1' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Task_Goal_Steal_C, UI_Mission_Task_TargetNameTag_2) == 0x000738, "Member 'UUI_Mission_Task_Goal_Steal_C::UI_Mission_Task_TargetNameTag_2' has a wrong offset!");

}
