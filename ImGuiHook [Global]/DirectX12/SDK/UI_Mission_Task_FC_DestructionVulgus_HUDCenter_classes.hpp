#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_FC_DestructionVulgus_HUDCenter

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_FC_DestructionVulgus_HUDCenter.UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C
// 0x0018 (0x0750 - 0x0738)
class UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C final : public UM1UIMissionTaskGoal_DesturctionVulgusPostHudCenter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0738(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0740(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           VB_DestructionVulgusPostHudCenter;                 // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_ShowWidget(bool bInShow);
	void ExecuteUbergraph_UI_Mission_Task_FC_DestructionVulgus_HUDCenter(int32 EntryPoint);
	void Finished_533FADD048AC46CCA06DB3A6EEBCCA4B();
	void OnEventWidgetClose(EM1WidgetAnimDirection InDirection);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C">();
	}
	static class UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C>();
	}
};
static_assert(alignof(UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C) == 0x000008, "Wrong alignment on UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C");
static_assert(sizeof(UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C) == 0x000750, "Wrong size on UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C");
static_assert(offsetof(UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C, UberGraphFrame) == 0x000738, "Member 'UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C, UIAnim_Open) == 0x000740, "Member 'UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C, VB_DestructionVulgusPostHudCenter) == 0x000748, "Member 'UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C::VB_DestructionVulgusPostHudCenter' has a wrong offset!");

}

