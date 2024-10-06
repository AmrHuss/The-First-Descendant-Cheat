#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Timer_MissionOnly

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.BP_SetWarning
// 0x0001 (0x0001 - 0x0000)
struct UI_Timer_MissionOnly_C_BP_SetWarning final
{
public:
	bool                                          bWarn;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Timer_MissionOnly_C_BP_SetWarning) == 0x000001, "Wrong alignment on UI_Timer_MissionOnly_C_BP_SetWarning");
static_assert(sizeof(UI_Timer_MissionOnly_C_BP_SetWarning) == 0x000001, "Wrong size on UI_Timer_MissionOnly_C_BP_SetWarning");
static_assert(offsetof(UI_Timer_MissionOnly_C_BP_SetWarning, bWarn) == 0x000000, "Member 'UI_Timer_MissionOnly_C_BP_SetWarning::bWarn' has a wrong offset!");

// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.ExecuteUbergraph_UI_Timer_MissionOnly
// 0x0020 (0x0020 - 0x0000)
struct UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWarn;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly) == 0x000008, "Wrong alignment on UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly");
static_assert(sizeof(UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly) == 0x000020, "Wrong size on UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly");
static_assert(offsetof(UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly, EntryPoint) == 0x000000, "Member 'UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly, K2Node_Event_IsDesignTime) == 0x000005, "Member 'UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly, K2Node_Event_bWarn) == 0x000010, "Member 'UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly::K2Node_Event_bWarn' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly, CallFunc_PlayUIAnimation_ReturnValue) == 0x000018, "Member 'UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");

// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Timer_MissionOnly_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Timer_MissionOnly_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Timer_MissionOnly_C_PreConstruct");
static_assert(sizeof(UI_Timer_MissionOnly_C_PreConstruct) == 0x000001, "Wrong size on UI_Timer_MissionOnly_C_PreConstruct");
static_assert(offsetof(UI_Timer_MissionOnly_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Timer_MissionOnly_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.SetExtraTime
// 0x0030 (0x0030 - 0x0000)
struct UI_Timer_MissionOnly_C_SetExtraTime final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExtraTime_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0014(0x0014)()
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Timer_MissionOnly_C_SetExtraTime) == 0x000008, "Wrong alignment on UI_Timer_MissionOnly_C_SetExtraTime");
static_assert(sizeof(UI_Timer_MissionOnly_C_SetExtraTime) == 0x000030, "Wrong size on UI_Timer_MissionOnly_C_SetExtraTime");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetExtraTime, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'UI_Timer_MissionOnly_C_SetExtraTime::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetExtraTime, CallFunc_IsExtraTime_ReturnValue) == 0x000001, "Member 'UI_Timer_MissionOnly_C_SetExtraTime::CallFunc_IsExtraTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetExtraTime, CallFunc_SelectColor_ReturnValue) == 0x000004, "Member 'UI_Timer_MissionOnly_C_SetExtraTime::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetExtraTime, K2Node_MakeStruct_SlateColor) == 0x000014, "Member 'UI_Timer_MissionOnly_C_SetExtraTime::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetExtraTime, CallFunc_PlayUIAnimation_ReturnValue) == 0x000028, "Member 'UI_Timer_MissionOnly_C_SetExtraTime::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");

// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.SetUI_Style
// 0x0280 (0x0280 - 0x0000)
struct UI_Timer_MissionOnly_C_SetUI_Style final
{
public:
	class UObject*                                Temp_object_Variable;                              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0014)()
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable_1;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_2;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0068(0x0014)()
	struct FMargin                                K2Node_MakeStruct_Margin_2;                        // 0x007C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_3;                        // 0x008C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Select_Default;                             // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_Select_Default_1;                           // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FDeprecateSlateVector2D                K2Node_Select_Default_2;                           // 0x00B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x00C0(0x00C0)()
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;          // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable_3;                            // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Select_Default_3;                           // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A8[0x8];                                      // 0x01A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x01B0(0x00C0)()
	struct FDeprecateSlateVector2D                K2Node_Select_Option_0_ImplicitCast;               // 0x0270(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D                K2Node_Select_Option_1_ImplicitCast;               // 0x0278(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Timer_MissionOnly_C_SetUI_Style) == 0x000010, "Wrong alignment on UI_Timer_MissionOnly_C_SetUI_Style");
static_assert(sizeof(UI_Timer_MissionOnly_C_SetUI_Style) == 0x000280, "Wrong size on UI_Timer_MissionOnly_C_SetUI_Style");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, Temp_object_Variable) == 0x000000, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, Temp_bool_Variable) == 0x00001C, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, Temp_object_Variable_1) == 0x000020, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, Temp_object_Variable_2) == 0x000028, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, Temp_bool_Variable_1) == 0x000030, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_MakeStruct_Margin) == 0x000034, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_MakeStruct_Margin_1) == 0x000044, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, Temp_bool_Variable_2) == 0x000054, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, CallFunc_MakeVector2D_ReturnValue) == 0x000058, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, CallFunc_MakeVector2D_ReturnValue_1) == 0x000060, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_MakeStruct_SlateColor_1) == 0x000068, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_MakeStruct_Margin_2) == 0x00007C, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_MakeStruct_Margin_2' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_MakeStruct_Margin_3) == 0x00008C, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_MakeStruct_Margin_3' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_Select_Default) == 0x0000A0, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_Select_Default_1) == 0x0000A8, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_Select_Default_2) == 0x0000B8, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_MakeStruct_SlateBrush) == 0x0000C0, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000180, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000188, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, Temp_bool_Variable_3) == 0x000190, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, Temp_object_Variable_3) == 0x000198, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_Select_Default_3) == 0x0001A0, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_MakeStruct_SlateBrush_1) == 0x0001B0, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_Select_Option_0_ImplicitCast) == 0x000270, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_Select_Option_0_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_Timer_MissionOnly_C_SetUI_Style, K2Node_Select_Option_1_ImplicitCast) == 0x000278, "Member 'UI_Timer_MissionOnly_C_SetUI_Style::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");

// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.UI_Timer_MissionOnly_OnTimerWarningBelow
// 0x0001 (0x0001 - 0x0000)
struct UI_Timer_MissionOnly_C_UI_Timer_MissionOnly_OnTimerWarningBelow final
{
public:
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Timer_MissionOnly_C_UI_Timer_MissionOnly_OnTimerWarningBelow) == 0x000001, "Wrong alignment on UI_Timer_MissionOnly_C_UI_Timer_MissionOnly_OnTimerWarningBelow");
static_assert(sizeof(UI_Timer_MissionOnly_C_UI_Timer_MissionOnly_OnTimerWarningBelow) == 0x000001, "Wrong size on UI_Timer_MissionOnly_C_UI_Timer_MissionOnly_OnTimerWarningBelow");
static_assert(offsetof(UI_Timer_MissionOnly_C_UI_Timer_MissionOnly_OnTimerWarningBelow, CallFunc_IsVisible_ReturnValue) == 0x000000, "Member 'UI_Timer_MissionOnly_C_UI_Timer_MissionOnly_OnTimerWarningBelow::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

}
