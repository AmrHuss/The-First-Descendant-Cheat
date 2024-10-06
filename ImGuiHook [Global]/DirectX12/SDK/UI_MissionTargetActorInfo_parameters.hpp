#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionTargetActorInfo

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_MissionTargetActorInfo.UI_MissionTargetActorInfo_C.BP_HideBG
// 0x0001 (0x0001 - 0x0000)
struct UI_MissionTargetActorInfo_C_BP_HideBG final
{
public:
	bool                                          InNewHidden;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionTargetActorInfo_C_BP_HideBG) == 0x000001, "Wrong alignment on UI_MissionTargetActorInfo_C_BP_HideBG");
static_assert(sizeof(UI_MissionTargetActorInfo_C_BP_HideBG) == 0x000001, "Wrong size on UI_MissionTargetActorInfo_C_BP_HideBG");
static_assert(offsetof(UI_MissionTargetActorInfo_C_BP_HideBG, InNewHidden) == 0x000000, "Member 'UI_MissionTargetActorInfo_C_BP_HideBG::InNewHidden' has a wrong offset!");

// Function UI_MissionTargetActorInfo.UI_MissionTargetActorInfo_C.BP_SetMissionTargetHpStyleByType
// 0x0001 (0x0001 - 0x0000)
struct UI_MissionTargetActorInfo_C_BP_SetMissionTargetHpStyleByType final
{
public:
	EM1MissionTargetType                          InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionTargetActorInfo_C_BP_SetMissionTargetHpStyleByType) == 0x000001, "Wrong alignment on UI_MissionTargetActorInfo_C_BP_SetMissionTargetHpStyleByType");
static_assert(sizeof(UI_MissionTargetActorInfo_C_BP_SetMissionTargetHpStyleByType) == 0x000001, "Wrong size on UI_MissionTargetActorInfo_C_BP_SetMissionTargetHpStyleByType");
static_assert(offsetof(UI_MissionTargetActorInfo_C_BP_SetMissionTargetHpStyleByType, InType) == 0x000000, "Member 'UI_MissionTargetActorInfo_C_BP_SetMissionTargetHpStyleByType::InType' has a wrong offset!");

// Function UI_MissionTargetActorInfo.UI_MissionTargetActorInfo_C.ExecuteUbergraph_UI_MissionTargetActorInfo
// 0x0B90 (0x0B90 - 0x0000)
struct UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1MissionTargetType                          Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0xB];                                        // 0x0005(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Temp_struct_Variable;                              // 0x0010(0x00C0)()
	struct FSlateBrush                            Temp_struct_Variable_1;                            // 0x00D0(0x00C0)()
	struct FSlateBrush                            Temp_struct_Variable_2;                            // 0x0190(0x00C0)()
	struct FSlateBrush                            Temp_struct_Variable_3;                            // 0x0250(0x00C0)()
	struct FSlateBrush                            Temp_struct_Variable_4;                            // 0x0310(0x00C0)()
	struct FSlateBrush                            Temp_struct_Variable_5;                            // 0x03D0(0x00C0)()
	struct FSlateBrush                            Temp_struct_Variable_6;                            // 0x0490(0x00C0)()
	struct FSlateBrush                            Temp_struct_Variable_7;                            // 0x0550(0x00C0)()
	struct FSlateBrush                            Temp_struct_Variable_8;                            // 0x0610(0x00C0)()
	struct FSlateBrush                            Temp_struct_Variable_9;                            // 0x06D0(0x00C0)()
	struct FSlateBrush                            Temp_struct_Variable_10;                           // 0x0790(0x00C0)()
	bool                                          K2Node_Event_InNewHidden;                          // 0x0850(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection_1;                        // 0x0851(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1MissionTargetType                          K2Node_Event_InType;                               // 0x0852(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0853(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_854[0x4];                                      // 0x0854(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0858(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0860(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_861[0xF];                                      // 0x0861(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_Select_Default;                             // 0x0870(0x00C0)()
	struct FProgressBarStyle                      K2Node_MakeStruct_ProgressBarStyle;                // 0x0930(0x0260)()
};
static_assert(alignof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo) == 0x000010, "Wrong alignment on UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo");
static_assert(sizeof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo) == 0x000B90, "Wrong size on UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, EntryPoint) == 0x000000, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, Temp_byte_Variable) == 0x000004, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, Temp_struct_Variable) == 0x000010, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, Temp_struct_Variable_1) == 0x0000D0, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, Temp_struct_Variable_2) == 0x000190, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, Temp_struct_Variable_3) == 0x000250, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, Temp_struct_Variable_4) == 0x000310, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, Temp_struct_Variable_5) == 0x0003D0, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, Temp_struct_Variable_6) == 0x000490, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::Temp_struct_Variable_6' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, Temp_struct_Variable_7) == 0x000550, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::Temp_struct_Variable_7' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, Temp_struct_Variable_8) == 0x000610, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::Temp_struct_Variable_8' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, Temp_struct_Variable_9) == 0x0006D0, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::Temp_struct_Variable_9' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, Temp_struct_Variable_10) == 0x000790, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::Temp_struct_Variable_10' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, K2Node_Event_InNewHidden) == 0x000850, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::K2Node_Event_InNewHidden' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, K2Node_Event_InDirection_1) == 0x000851, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::K2Node_Event_InDirection_1' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, K2Node_Event_InType) == 0x000852, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::K2Node_Event_InType' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000853, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, CallFunc_PlayAnimation_ReturnValue) == 0x000858, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, K2Node_Event_InDirection) == 0x000860, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::K2Node_Event_InDirection' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, K2Node_Select_Default) == 0x000870, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo, K2Node_MakeStruct_ProgressBarStyle) == 0x000930, "Member 'UI_MissionTargetActorInfo_C_ExecuteUbergraph_UI_MissionTargetActorInfo::K2Node_MakeStruct_ProgressBarStyle' has a wrong offset!");

// Function UI_MissionTargetActorInfo.UI_MissionTargetActorInfo_C.OnEventWidgetClose
// 0x0001 (0x0001 - 0x0000)
struct UI_MissionTargetActorInfo_C_OnEventWidgetClose final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionTargetActorInfo_C_OnEventWidgetClose) == 0x000001, "Wrong alignment on UI_MissionTargetActorInfo_C_OnEventWidgetClose");
static_assert(sizeof(UI_MissionTargetActorInfo_C_OnEventWidgetClose) == 0x000001, "Wrong size on UI_MissionTargetActorInfo_C_OnEventWidgetClose");
static_assert(offsetof(UI_MissionTargetActorInfo_C_OnEventWidgetClose, InDirection) == 0x000000, "Member 'UI_MissionTargetActorInfo_C_OnEventWidgetClose::InDirection' has a wrong offset!");

// Function UI_MissionTargetActorInfo.UI_MissionTargetActorInfo_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_MissionTargetActorInfo_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionTargetActorInfo_C_OnEventWidgetOpen) == 0x000001, "Wrong alignment on UI_MissionTargetActorInfo_C_OnEventWidgetOpen");
static_assert(sizeof(UI_MissionTargetActorInfo_C_OnEventWidgetOpen) == 0x000001, "Wrong size on UI_MissionTargetActorInfo_C_OnEventWidgetOpen");
static_assert(offsetof(UI_MissionTargetActorInfo_C_OnEventWidgetOpen, InDirection) == 0x000000, "Member 'UI_MissionTargetActorInfo_C_OnEventWidgetOpen::InDirection' has a wrong offset!");

}
