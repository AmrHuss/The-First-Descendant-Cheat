#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_ForcedExitTime

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function UI_Game_ForcedExitTime.UI_Game_ForcedExitTime_C.ExecuteUbergraph_UI_Game_ForcedExitTime
// 0x0018 (0x0018 - 0x0000)
struct UI_Game_ForcedExitTime_C_ExecuteUbergraph_UI_Game_ForcedExitTime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Game_ForcedExitTime_C_ExecuteUbergraph_UI_Game_ForcedExitTime) == 0x000008, "Wrong alignment on UI_Game_ForcedExitTime_C_ExecuteUbergraph_UI_Game_ForcedExitTime");
static_assert(sizeof(UI_Game_ForcedExitTime_C_ExecuteUbergraph_UI_Game_ForcedExitTime) == 0x000018, "Wrong size on UI_Game_ForcedExitTime_C_ExecuteUbergraph_UI_Game_ForcedExitTime");
static_assert(offsetof(UI_Game_ForcedExitTime_C_ExecuteUbergraph_UI_Game_ForcedExitTime, EntryPoint) == 0x000000, "Member 'UI_Game_ForcedExitTime_C_ExecuteUbergraph_UI_Game_ForcedExitTime::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Game_ForcedExitTime_C_ExecuteUbergraph_UI_Game_ForcedExitTime, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_Game_ForcedExitTime_C_ExecuteUbergraph_UI_Game_ForcedExitTime::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Game_ForcedExitTime_C_ExecuteUbergraph_UI_Game_ForcedExitTime, K2Node_Event_InDirection) == 0x000010, "Member 'UI_Game_ForcedExitTime_C_ExecuteUbergraph_UI_Game_ForcedExitTime::K2Node_Event_InDirection' has a wrong offset!");

// Function UI_Game_ForcedExitTime.UI_Game_ForcedExitTime_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_Game_ForcedExitTime_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Game_ForcedExitTime_C_OnEventWidgetOpen) == 0x000001, "Wrong alignment on UI_Game_ForcedExitTime_C_OnEventWidgetOpen");
static_assert(sizeof(UI_Game_ForcedExitTime_C_OnEventWidgetOpen) == 0x000001, "Wrong size on UI_Game_ForcedExitTime_C_OnEventWidgetOpen");
static_assert(offsetof(UI_Game_ForcedExitTime_C_OnEventWidgetOpen, InDirection) == 0x000000, "Member 'UI_Game_ForcedExitTime_C_OnEventWidgetOpen::InDirection' has a wrong offset!");

}

