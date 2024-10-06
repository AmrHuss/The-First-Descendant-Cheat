#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_Escort_HUDCenter

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function UI_Mission_Task_Escort_HUDCenter.UI_Mission_Task_Escort_HUDCenter_C.BP_OnChangedState
// 0x0001 (0x0001 - 0x0000)
struct UI_Mission_Task_Escort_HUDCenter_C_BP_OnChangedState final
{
public:
	bool                                          bMoving;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Task_Escort_HUDCenter_C_BP_OnChangedState) == 0x000001, "Wrong alignment on UI_Mission_Task_Escort_HUDCenter_C_BP_OnChangedState");
static_assert(sizeof(UI_Mission_Task_Escort_HUDCenter_C_BP_OnChangedState) == 0x000001, "Wrong size on UI_Mission_Task_Escort_HUDCenter_C_BP_OnChangedState");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_BP_OnChangedState, bMoving) == 0x000000, "Member 'UI_Mission_Task_Escort_HUDCenter_C_BP_OnChangedState::bMoving' has a wrong offset!");

// Function UI_Mission_Task_Escort_HUDCenter.UI_Mission_Task_Escort_HUDCenter_C.Default_Timer_Event
// 0x0008 (0x0008 - 0x0000)
struct UI_Mission_Task_Escort_HUDCenter_C_Default_Timer_Event final
{
public:
	class UUI_Timer_MissionOnly_C*                Default_Timer_0;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Task_Escort_HUDCenter_C_Default_Timer_Event) == 0x000008, "Wrong alignment on UI_Mission_Task_Escort_HUDCenter_C_Default_Timer_Event");
static_assert(sizeof(UI_Mission_Task_Escort_HUDCenter_C_Default_Timer_Event) == 0x000008, "Wrong size on UI_Mission_Task_Escort_HUDCenter_C_Default_Timer_Event");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_Default_Timer_Event, Default_Timer_0) == 0x000000, "Member 'UI_Mission_Task_Escort_HUDCenter_C_Default_Timer_Event::Default_Timer_0' has a wrong offset!");

// Function UI_Mission_Task_Escort_HUDCenter.UI_Mission_Task_Escort_HUDCenter_C.ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter
// 0x0060 (0x0060 - 0x0000)
struct UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Timer_MissionOnly_C*                K2Node_CustomEvent_Default_Timer;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection_1;                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue_1;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bMoving;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue_2;            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter) == 0x000008, "Wrong alignment on UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter");
static_assert(sizeof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter) == 0x000060, "Wrong size on UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, EntryPoint) == 0x000000, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, Temp_bool_Variable) == 0x000004, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, K2Node_CustomEvent_Default_Timer) == 0x000008, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::K2Node_CustomEvent_Default_Timer' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, K2Node_Event_InDirection_1) == 0x000010, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::K2Node_Event_InDirection_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, CallFunc_PlayUIAnimation_ReturnValue) == 0x000018, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, CallFunc_PlayUIAnimation_ReturnValue_1) == 0x000020, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::CallFunc_PlayUIAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, K2Node_Event_InDirection) == 0x000028, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::K2Node_Event_InDirection' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, K2Node_Event_bMoving) == 0x000029, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::K2Node_Event_bMoving' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, CallFunc_PlayUIAnimation_ReturnValue_2) == 0x000030, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::CallFunc_PlayUIAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, CallFunc_GetActiveWidget_ReturnValue) == 0x000048, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, K2Node_Select_Default) == 0x000050, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000058, "Member 'UI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function UI_Mission_Task_Escort_HUDCenter.UI_Mission_Task_Escort_HUDCenter_C.OnEventWidgetClose
// 0x0001 (0x0001 - 0x0000)
struct UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetClose final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetClose) == 0x000001, "Wrong alignment on UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetClose");
static_assert(sizeof(UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetClose) == 0x000001, "Wrong size on UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetClose");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetClose, InDirection) == 0x000000, "Member 'UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetClose::InDirection' has a wrong offset!");

// Function UI_Mission_Task_Escort_HUDCenter.UI_Mission_Task_Escort_HUDCenter_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetOpen) == 0x000001, "Wrong alignment on UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetOpen");
static_assert(sizeof(UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetOpen) == 0x000001, "Wrong size on UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetOpen");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetOpen, InDirection) == 0x000000, "Member 'UI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetOpen::InDirection' has a wrong offset!");

// Function UI_Mission_Task_Escort_HUDCenter.UI_Mission_Task_Escort_HUDCenter_C.SequenceEvent__ENTRYPOINTUI_Mission_Task_Escort_HUDCenter
// 0x0008 (0x0008 - 0x0000)
struct UI_Mission_Task_Escort_HUDCenter_C_SequenceEvent__ENTRYPOINTUI_Mission_Task_Escort_HUDCenter final
{
public:
	class UUI_Timer_MissionOnly_C*                Default_Timer_0;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Task_Escort_HUDCenter_C_SequenceEvent__ENTRYPOINTUI_Mission_Task_Escort_HUDCenter) == 0x000008, "Wrong alignment on UI_Mission_Task_Escort_HUDCenter_C_SequenceEvent__ENTRYPOINTUI_Mission_Task_Escort_HUDCenter");
static_assert(sizeof(UI_Mission_Task_Escort_HUDCenter_C_SequenceEvent__ENTRYPOINTUI_Mission_Task_Escort_HUDCenter) == 0x000008, "Wrong size on UI_Mission_Task_Escort_HUDCenter_C_SequenceEvent__ENTRYPOINTUI_Mission_Task_Escort_HUDCenter");
static_assert(offsetof(UI_Mission_Task_Escort_HUDCenter_C_SequenceEvent__ENTRYPOINTUI_Mission_Task_Escort_HUDCenter, Default_Timer_0) == 0x000000, "Member 'UI_Mission_Task_Escort_HUDCenter_C_SequenceEvent__ENTRYPOINTUI_Mission_Task_Escort_HUDCenter::Default_Timer_0' has a wrong offset!");

}

