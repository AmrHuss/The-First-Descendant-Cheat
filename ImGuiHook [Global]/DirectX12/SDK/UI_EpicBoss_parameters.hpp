#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_EpicBoss

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_EpicBoss.UI_EpicBoss_C.BP_widget_playAkEvent
// 0x0008 (0x0008 - 0x0000)
struct UI_EpicBoss_C_BP_widget_playAkEvent final
{
public:
	class UAkAudioEvent*                          AkEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_EpicBoss_C_BP_widget_playAkEvent) == 0x000008, "Wrong alignment on UI_EpicBoss_C_BP_widget_playAkEvent");
static_assert(sizeof(UI_EpicBoss_C_BP_widget_playAkEvent) == 0x000008, "Wrong size on UI_EpicBoss_C_BP_widget_playAkEvent");
static_assert(offsetof(UI_EpicBoss_C_BP_widget_playAkEvent, AkEvent) == 0x000000, "Member 'UI_EpicBoss_C_BP_widget_playAkEvent::AkEvent' has a wrong offset!");

// Function UI_EpicBoss.UI_EpicBoss_C.ExecuteUbergraph_UI_EpicBoss
// 0x0010 (0x0010 - 0x0000)
struct UI_EpicBoss_C_ExecuteUbergraph_UI_EpicBoss final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_CustomEvent_AkEvent;                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_EpicBoss_C_ExecuteUbergraph_UI_EpicBoss) == 0x000008, "Wrong alignment on UI_EpicBoss_C_ExecuteUbergraph_UI_EpicBoss");
static_assert(sizeof(UI_EpicBoss_C_ExecuteUbergraph_UI_EpicBoss) == 0x000010, "Wrong size on UI_EpicBoss_C_ExecuteUbergraph_UI_EpicBoss");
static_assert(offsetof(UI_EpicBoss_C_ExecuteUbergraph_UI_EpicBoss, EntryPoint) == 0x000000, "Member 'UI_EpicBoss_C_ExecuteUbergraph_UI_EpicBoss::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_EpicBoss_C_ExecuteUbergraph_UI_EpicBoss, K2Node_CustomEvent_AkEvent) == 0x000008, "Member 'UI_EpicBoss_C_ExecuteUbergraph_UI_EpicBoss::K2Node_CustomEvent_AkEvent' has a wrong offset!");

}
