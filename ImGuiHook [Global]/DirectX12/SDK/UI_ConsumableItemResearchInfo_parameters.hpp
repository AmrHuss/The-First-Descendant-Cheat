#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ConsumableItemResearchInfo

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_ConsumableItemResearchInfo.UI_ConsumableItemResearchInfo_C.BP_SetRankStatus
// 0x0008 (0x0008 - 0x0000)
struct UI_ConsumableItemResearchInfo_C_BP_SetRankStatus final
{
public:
	int32                                         InRank;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnough;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ConsumableItemResearchInfo_C_BP_SetRankStatus) == 0x000004, "Wrong alignment on UI_ConsumableItemResearchInfo_C_BP_SetRankStatus");
static_assert(sizeof(UI_ConsumableItemResearchInfo_C_BP_SetRankStatus) == 0x000008, "Wrong size on UI_ConsumableItemResearchInfo_C_BP_SetRankStatus");
static_assert(offsetof(UI_ConsumableItemResearchInfo_C_BP_SetRankStatus, InRank) == 0x000000, "Member 'UI_ConsumableItemResearchInfo_C_BP_SetRankStatus::InRank' has a wrong offset!");
static_assert(offsetof(UI_ConsumableItemResearchInfo_C_BP_SetRankStatus, bEnough) == 0x000004, "Member 'UI_ConsumableItemResearchInfo_C_BP_SetRankStatus::bEnough' has a wrong offset!");

// Function UI_ConsumableItemResearchInfo.UI_ConsumableItemResearchInfo_C.ExecuteUbergraph_UI_ConsumableItemResearchInfo
// 0x0070 (0x0070 - 0x0000)
struct UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InRank;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bEnough;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ConstParm, ReferenceParm)
	class FText                                   CallFunc_GetLocalizedTextFormat_ReturnValue;       // 0x0030(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x005C(0x0014)()
};
static_assert(alignof(UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo) == 0x000008, "Wrong alignment on UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo");
static_assert(sizeof(UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo) == 0x000070, "Wrong size on UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo");
static_assert(offsetof(UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo, EntryPoint) == 0x000000, "Member 'UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo, K2Node_Event_InRank) == 0x000004, "Member 'UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo::K2Node_Event_InRank' has a wrong offset!");
static_assert(offsetof(UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo, K2Node_Event_bEnough) == 0x000008, "Member 'UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo::K2Node_Event_bEnough' has a wrong offset!");
static_assert(offsetof(UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000009, "Member 'UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo, K2Node_MakeArray_Array) == 0x000020, "Member 'UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo, CallFunc_GetLocalizedTextFormat_ReturnValue) == 0x000030, "Member 'UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo::CallFunc_GetLocalizedTextFormat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo, K2Node_MakeStruct_SlateColor_1) == 0x00005C, "Member 'UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}
