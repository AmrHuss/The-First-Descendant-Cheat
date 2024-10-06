#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_TargetListItem2_Survival

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Mission_Task_TargetListItem2_Survival.UI_Mission_Task_TargetListItem2_Survival_C.BP_SetAllMonstersKilled
// 0x0001 (0x0001 - 0x0000)
struct UI_Mission_Task_TargetListItem2_Survival_C_BP_SetAllMonstersKilled final
{
public:
	bool                                          bInAllMonsterdKilled;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Task_TargetListItem2_Survival_C_BP_SetAllMonstersKilled) == 0x000001, "Wrong alignment on UI_Mission_Task_TargetListItem2_Survival_C_BP_SetAllMonstersKilled");
static_assert(sizeof(UI_Mission_Task_TargetListItem2_Survival_C_BP_SetAllMonstersKilled) == 0x000001, "Wrong size on UI_Mission_Task_TargetListItem2_Survival_C_BP_SetAllMonstersKilled");
static_assert(offsetof(UI_Mission_Task_TargetListItem2_Survival_C_BP_SetAllMonstersKilled, bInAllMonsterdKilled) == 0x000000, "Member 'UI_Mission_Task_TargetListItem2_Survival_C_BP_SetAllMonstersKilled::bInAllMonsterdKilled' has a wrong offset!");

// Function UI_Mission_Task_TargetListItem2_Survival.UI_Mission_Task_TargetListItem2_Survival_C.ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival
// 0x0038 (0x0038 - 0x0000)
struct UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInAllMonsterdKilled;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival) == 0x000008, "Wrong alignment on UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival");
static_assert(sizeof(UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival) == 0x000038, "Wrong size on UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival");
static_assert(offsetof(UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival, EntryPoint) == 0x000000, "Member 'UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival, K2Node_Event_bInAllMonsterdKilled) == 0x000004, "Member 'UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival::K2Node_Event_bInAllMonsterdKilled' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival, CallFunc_PlayUIAnimation_ReturnValue) == 0x000018, "Member 'UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000020, "Member 'UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000028, "Member 'UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

