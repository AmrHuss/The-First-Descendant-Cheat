#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Season_Levelup

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function UI_Season_Levelup.UI_Season_Levelup_C.ExecuteUbergraph_UI_Season_Levelup
// 0x0010 (0x0010 - 0x0000)
struct UI_Season_Levelup_C_ExecuteUbergraph_UI_Season_Levelup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Season_Levelup_C_ExecuteUbergraph_UI_Season_Levelup) == 0x000008, "Wrong alignment on UI_Season_Levelup_C_ExecuteUbergraph_UI_Season_Levelup");
static_assert(sizeof(UI_Season_Levelup_C_ExecuteUbergraph_UI_Season_Levelup) == 0x000010, "Wrong size on UI_Season_Levelup_C_ExecuteUbergraph_UI_Season_Levelup");
static_assert(offsetof(UI_Season_Levelup_C_ExecuteUbergraph_UI_Season_Levelup, EntryPoint) == 0x000000, "Member 'UI_Season_Levelup_C_ExecuteUbergraph_UI_Season_Levelup::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Season_Levelup_C_ExecuteUbergraph_UI_Season_Levelup, K2Node_Event_InDirection) == 0x000004, "Member 'UI_Season_Levelup_C_ExecuteUbergraph_UI_Season_Levelup::K2Node_Event_InDirection' has a wrong offset!");
static_assert(offsetof(UI_Season_Levelup_C_ExecuteUbergraph_UI_Season_Levelup, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_Season_Levelup_C_ExecuteUbergraph_UI_Season_Levelup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UI_Season_Levelup.UI_Season_Levelup_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_Season_Levelup_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Season_Levelup_C_OnEventWidgetOpen) == 0x000001, "Wrong alignment on UI_Season_Levelup_C_OnEventWidgetOpen");
static_assert(sizeof(UI_Season_Levelup_C_OnEventWidgetOpen) == 0x000001, "Wrong size on UI_Season_Levelup_C_OnEventWidgetOpen");
static_assert(offsetof(UI_Season_Levelup_C_OnEventWidgetOpen, InDirection) == 0x000000, "Member 'UI_Season_Levelup_C_OnEventWidgetOpen::InDirection' has a wrong offset!");

// Function UI_Season_Levelup.UI_Season_Levelup_C.BP_GetAnimation
// 0x0008 (0x0008 - 0x0000)
struct UI_Season_Levelup_C_BP_GetAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Season_Levelup_C_BP_GetAnimation) == 0x000008, "Wrong alignment on UI_Season_Levelup_C_BP_GetAnimation");
static_assert(sizeof(UI_Season_Levelup_C_BP_GetAnimation) == 0x000008, "Wrong size on UI_Season_Levelup_C_BP_GetAnimation");
static_assert(offsetof(UI_Season_Levelup_C_BP_GetAnimation, ReturnValue) == 0x000000, "Member 'UI_Season_Levelup_C_BP_GetAnimation::ReturnValue' has a wrong offset!");

}
