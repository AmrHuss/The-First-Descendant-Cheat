#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_VoidBattle_Fail

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Mission_VoidBattle_Fail.UI_Mission_VoidBattle_Fail_C.ExecuteUbergraph_UI_Mission_VoidBattle_Fail
// 0x0030 (0x0030 - 0x0000)
struct UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail) == 0x000008, "Wrong alignment on UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail");
static_assert(sizeof(UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail) == 0x000030, "Wrong size on UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail");
static_assert(offsetof(UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail, EntryPoint) == 0x000000, "Member 'UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000018, "Member 'UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000020, "Member 'UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UI_Mission_VoidBattle_Fail.UI_Mission_VoidBattle_Fail_C.GetEndAnimation
// 0x0008 (0x0008 - 0x0000)
struct UI_Mission_VoidBattle_Fail_C_GetEndAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_VoidBattle_Fail_C_GetEndAnimation) == 0x000008, "Wrong alignment on UI_Mission_VoidBattle_Fail_C_GetEndAnimation");
static_assert(sizeof(UI_Mission_VoidBattle_Fail_C_GetEndAnimation) == 0x000008, "Wrong size on UI_Mission_VoidBattle_Fail_C_GetEndAnimation");
static_assert(offsetof(UI_Mission_VoidBattle_Fail_C_GetEndAnimation, ReturnValue) == 0x000000, "Member 'UI_Mission_VoidBattle_Fail_C_GetEndAnimation::ReturnValue' has a wrong offset!");

}

