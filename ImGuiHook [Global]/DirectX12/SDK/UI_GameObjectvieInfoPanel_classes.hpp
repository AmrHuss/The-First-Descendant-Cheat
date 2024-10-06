#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameObjectvieInfoPanel

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameObjectvieInfoPanel.UI_GameObjectvieInfoPanel_C
// 0x0028 (0x07B8 - 0x0790)
class UUI_GameObjectvieInfoPanel_C final : public UM1UIGameObjectivePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpacer*                                Chat_Spacer;                                       // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_OutOfArea_C*                UI_Mission_BreakAway;                              // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Task_C*                     UI_Mission_Task;                                   // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameObjectvieInfoList_C*            UI_QuestTrackerPanel;                              // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	TMap<EM1GameObjectiveDisplayByPriority, class UM1UIWidget*> BP_GetWidgetsByPriority();
	void Bp_Play_Ak_Audio_Event();
	void Construct();
	void ExecuteUbergraph_UI_GameObjectvieInfoPanel(int32 EntryPoint);
	void SequenceEvent__ENTRYPOINTUI_GameObjectvieInfoPanel();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameObjectvieInfoPanel_C">();
	}
	static class UUI_GameObjectvieInfoPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameObjectvieInfoPanel_C>();
	}
};
static_assert(alignof(UUI_GameObjectvieInfoPanel_C) == 0x000008, "Wrong alignment on UUI_GameObjectvieInfoPanel_C");
static_assert(sizeof(UUI_GameObjectvieInfoPanel_C) == 0x0007B8, "Wrong size on UUI_GameObjectvieInfoPanel_C");
static_assert(offsetof(UUI_GameObjectvieInfoPanel_C, UberGraphFrame) == 0x000790, "Member 'UUI_GameObjectvieInfoPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameObjectvieInfoPanel_C, Chat_Spacer) == 0x000798, "Member 'UUI_GameObjectvieInfoPanel_C::Chat_Spacer' has a wrong offset!");
static_assert(offsetof(UUI_GameObjectvieInfoPanel_C, UI_Mission_BreakAway) == 0x0007A0, "Member 'UUI_GameObjectvieInfoPanel_C::UI_Mission_BreakAway' has a wrong offset!");
static_assert(offsetof(UUI_GameObjectvieInfoPanel_C, UI_Mission_Task) == 0x0007A8, "Member 'UUI_GameObjectvieInfoPanel_C::UI_Mission_Task' has a wrong offset!");
static_assert(offsetof(UUI_GameObjectvieInfoPanel_C, UI_QuestTrackerPanel) == 0x0007B0, "Member 'UUI_GameObjectvieInfoPanel_C::UI_QuestTrackerPanel' has a wrong offset!");

}
