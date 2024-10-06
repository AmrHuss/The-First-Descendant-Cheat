#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InvasionDungeon_Timer

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_InvasionDungeon_Timer.UI_InvasionDungeon_Timer_C.ExecuteUbergraph_UI_InvasionDungeon_Timer
// 0x0008 (0x0008 - 0x0000)
struct UI_InvasionDungeon_Timer_C_ExecuteUbergraph_UI_InvasionDungeon_Timer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InvasionDungeon_Timer_C_ExecuteUbergraph_UI_InvasionDungeon_Timer) == 0x000004, "Wrong alignment on UI_InvasionDungeon_Timer_C_ExecuteUbergraph_UI_InvasionDungeon_Timer");
static_assert(sizeof(UI_InvasionDungeon_Timer_C_ExecuteUbergraph_UI_InvasionDungeon_Timer) == 0x000008, "Wrong size on UI_InvasionDungeon_Timer_C_ExecuteUbergraph_UI_InvasionDungeon_Timer");
static_assert(offsetof(UI_InvasionDungeon_Timer_C_ExecuteUbergraph_UI_InvasionDungeon_Timer, EntryPoint) == 0x000000, "Member 'UI_InvasionDungeon_Timer_C_ExecuteUbergraph_UI_InvasionDungeon_Timer::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_Timer_C_ExecuteUbergraph_UI_InvasionDungeon_Timer, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_InvasionDungeon_Timer_C_ExecuteUbergraph_UI_InvasionDungeon_Timer::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_InvasionDungeon_Timer.UI_InvasionDungeon_Timer_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_InvasionDungeon_Timer_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InvasionDungeon_Timer_C_PreConstruct) == 0x000001, "Wrong alignment on UI_InvasionDungeon_Timer_C_PreConstruct");
static_assert(sizeof(UI_InvasionDungeon_Timer_C_PreConstruct) == 0x000001, "Wrong size on UI_InvasionDungeon_Timer_C_PreConstruct");
static_assert(offsetof(UI_InvasionDungeon_Timer_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_InvasionDungeon_Timer_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_InvasionDungeon_Timer.UI_InvasionDungeon_Timer_C.UISet_TextColor
// 0x002C (0x002C - 0x0000)
struct UI_InvasionDungeon_Timer_C_UISet_TextColor final
{
public:
	bool                                          Last1minute;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0004(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0018(0x0014)()
};
static_assert(alignof(UI_InvasionDungeon_Timer_C_UISet_TextColor) == 0x000004, "Wrong alignment on UI_InvasionDungeon_Timer_C_UISet_TextColor");
static_assert(sizeof(UI_InvasionDungeon_Timer_C_UISet_TextColor) == 0x00002C, "Wrong size on UI_InvasionDungeon_Timer_C_UISet_TextColor");
static_assert(offsetof(UI_InvasionDungeon_Timer_C_UISet_TextColor, Last1minute) == 0x000000, "Member 'UI_InvasionDungeon_Timer_C_UISet_TextColor::Last1minute' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_Timer_C_UISet_TextColor, K2Node_MakeStruct_SlateColor) == 0x000004, "Member 'UI_InvasionDungeon_Timer_C_UISet_TextColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_Timer_C_UISet_TextColor, K2Node_MakeStruct_SlateColor_1) == 0x000018, "Member 'UI_InvasionDungeon_Timer_C_UISet_TextColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}
