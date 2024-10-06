#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GuideMessage

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_GuideMessage.UI_GuideMessage_C.BP_ShowTitle
// 0x0001 (0x0001 - 0x0000)
struct UI_GuideMessage_C_BP_ShowTitle final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GuideMessage_C_BP_ShowTitle) == 0x000001, "Wrong alignment on UI_GuideMessage_C_BP_ShowTitle");
static_assert(sizeof(UI_GuideMessage_C_BP_ShowTitle) == 0x000001, "Wrong size on UI_GuideMessage_C_BP_ShowTitle");
static_assert(offsetof(UI_GuideMessage_C_BP_ShowTitle, bShow) == 0x000000, "Member 'UI_GuideMessage_C_BP_ShowTitle::bShow' has a wrong offset!");

// Function UI_GuideMessage.UI_GuideMessage_C.ExecuteUbergraph_UI_GuideMessage
// 0x0028 (0x0028 - 0x0000)
struct UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bShow;                                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection_1;                        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage) == 0x000008, "Wrong alignment on UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage");
static_assert(sizeof(UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage) == 0x000028, "Wrong size on UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage");
static_assert(offsetof(UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage, EntryPoint) == 0x000000, "Member 'UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage, Temp_bool_Variable) == 0x000004, "Member 'UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage, Temp_byte_Variable) == 0x000010, "Member 'UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage, Temp_byte_Variable_1) == 0x000011, "Member 'UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage, K2Node_Event_bShow) == 0x000012, "Member 'UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage::K2Node_Event_bShow' has a wrong offset!");
static_assert(offsetof(UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage, K2Node_Select_Default) == 0x000013, "Member 'UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage, K2Node_Event_InDirection_1) == 0x000020, "Member 'UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage::K2Node_Event_InDirection_1' has a wrong offset!");
static_assert(offsetof(UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage, K2Node_Event_InDirection) == 0x000021, "Member 'UI_GuideMessage_C_ExecuteUbergraph_UI_GuideMessage::K2Node_Event_InDirection' has a wrong offset!");

// Function UI_GuideMessage.UI_GuideMessage_C.OnEventWidgetClose
// 0x0001 (0x0001 - 0x0000)
struct UI_GuideMessage_C_OnEventWidgetClose final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GuideMessage_C_OnEventWidgetClose) == 0x000001, "Wrong alignment on UI_GuideMessage_C_OnEventWidgetClose");
static_assert(sizeof(UI_GuideMessage_C_OnEventWidgetClose) == 0x000001, "Wrong size on UI_GuideMessage_C_OnEventWidgetClose");
static_assert(offsetof(UI_GuideMessage_C_OnEventWidgetClose, InDirection) == 0x000000, "Member 'UI_GuideMessage_C_OnEventWidgetClose::InDirection' has a wrong offset!");

// Function UI_GuideMessage.UI_GuideMessage_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_GuideMessage_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GuideMessage_C_OnEventWidgetOpen) == 0x000001, "Wrong alignment on UI_GuideMessage_C_OnEventWidgetOpen");
static_assert(sizeof(UI_GuideMessage_C_OnEventWidgetOpen) == 0x000001, "Wrong size on UI_GuideMessage_C_OnEventWidgetOpen");
static_assert(offsetof(UI_GuideMessage_C_OnEventWidgetOpen, InDirection) == 0x000000, "Member 'UI_GuideMessage_C_OnEventWidgetOpen::InDirection' has a wrong offset!");

}
