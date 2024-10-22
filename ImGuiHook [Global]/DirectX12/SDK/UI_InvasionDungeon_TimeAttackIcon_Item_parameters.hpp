#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InvasionDungeon_TimeAttackIcon_Item

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_InvasionDungeon_TimeAttackIcon_Item.UI_InvasionDungeon_TimeAttackIcon_Item_C.BP_SetState
// 0x0001 (0x0001 - 0x0000)
struct UI_InvasionDungeon_TimeAttackIcon_Item_C_BP_SetState final
{
public:
	EM1InvasionDungeonScoreState                  InState;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InvasionDungeon_TimeAttackIcon_Item_C_BP_SetState) == 0x000001, "Wrong alignment on UI_InvasionDungeon_TimeAttackIcon_Item_C_BP_SetState");
static_assert(sizeof(UI_InvasionDungeon_TimeAttackIcon_Item_C_BP_SetState) == 0x000001, "Wrong size on UI_InvasionDungeon_TimeAttackIcon_Item_C_BP_SetState");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_BP_SetState, InState) == 0x000000, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_BP_SetState::InState' has a wrong offset!");

// Function UI_InvasionDungeon_TimeAttackIcon_Item.UI_InvasionDungeon_TimeAttackIcon_Item_C.ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item
// 0x00D8 (0x00D8 - 0x0000)
struct UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1InvasionDungeonScoreState                  K2Node_Event_InState;                              // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIDataInvasionDungeonReward*         K2Node_DynamicCast_AsM1UIData_Invasion_Dungeon_Reward; // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_GetUniqueId_ReturnValue;                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeAttackSec_ReturnValue;             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetIconPath_ReturnValue;                  // 0x0078(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1InvasionDungeonScoreState                  Temp_byte_Variable;                                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default_1;                           // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetTimeData_InRemainTime_ImplicitCast;    // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item) == 0x000008, "Wrong alignment on UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item");
static_assert(sizeof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item) == 0x0000D8, "Wrong size on UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, EntryPoint) == 0x000000, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, Temp_int_Variable) == 0x000004, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, Temp_struct_Variable) == 0x000008, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, Temp_struct_Variable_1) == 0x000018, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, Temp_struct_Variable_2) == 0x000028, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, Temp_struct_Variable_3) == 0x000038, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, K2Node_Event_IsDesignTime) == 0x000048, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, K2Node_Event_InState) == 0x000049, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::K2Node_Event_InState' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, K2Node_Event_InData) == 0x000050, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, K2Node_DynamicCast_AsM1UIData_Invasion_Dungeon_Reward) == 0x000058, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::K2Node_DynamicCast_AsM1UIData_Invasion_Dungeon_Reward' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, CallFunc_GetUniqueId_ReturnValue) == 0x000068, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::CallFunc_GetUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, CallFunc_GetTimeAttackSec_ReturnValue) == 0x000070, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::CallFunc_GetTimeAttackSec_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, CallFunc_Conv_Int64ToInt_ReturnValue) == 0x000074, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::CallFunc_Conv_Int64ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, CallFunc_GetIconPath_ReturnValue) == 0x000078, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::CallFunc_GetIconPath_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, K2Node_Select_Default) == 0x0000A8, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, Temp_byte_Variable) == 0x0000B8, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, K2Node_Select_Default_1) == 0x0000C0, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, CallFunc_PlayUIAnimation_ReturnValue) == 0x0000C8, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item, CallFunc_SetTimeData_InRemainTime_ImplicitCast) == 0x0000D0, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item::CallFunc_SetTimeData_InRemainTime_ImplicitCast' has a wrong offset!");

// Function UI_InvasionDungeon_TimeAttackIcon_Item.UI_InvasionDungeon_TimeAttackIcon_Item_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_InvasionDungeon_TimeAttackIcon_Item_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InvasionDungeon_TimeAttackIcon_Item_C_PreConstruct) == 0x000001, "Wrong alignment on UI_InvasionDungeon_TimeAttackIcon_Item_C_PreConstruct");
static_assert(sizeof(UI_InvasionDungeon_TimeAttackIcon_Item_C_PreConstruct) == 0x000001, "Wrong size on UI_InvasionDungeon_TimeAttackIcon_Item_C_PreConstruct");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_InvasionDungeon_TimeAttackIcon_Item.UI_InvasionDungeon_TimeAttackIcon_Item_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_InvasionDungeon_TimeAttackIcon_Item_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InvasionDungeon_TimeAttackIcon_Item_C_SetDataImpl) == 0x000008, "Wrong alignment on UI_InvasionDungeon_TimeAttackIcon_Item_C_SetDataImpl");
static_assert(sizeof(UI_InvasionDungeon_TimeAttackIcon_Item_C_SetDataImpl) == 0x000008, "Wrong size on UI_InvasionDungeon_TimeAttackIcon_Item_C_SetDataImpl");
static_assert(offsetof(UI_InvasionDungeon_TimeAttackIcon_Item_C_SetDataImpl, InData) == 0x000000, "Member 'UI_InvasionDungeon_TimeAttackIcon_Item_C_SetDataImpl::InData' has a wrong offset!");

}

