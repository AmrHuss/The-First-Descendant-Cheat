#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_EpicBossDetailsItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_EpicBossDetailsItem.UI_EpicBossDetailsItem_C.ExecuteUbergraph_UI_EpicBossDetailsItem
// 0x0038 (0x0038 - 0x0000)
struct UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIDataSimpleIcon*                    K2Node_DynamicCast_AsM1UIData_Simple_Icon;         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetName_ReturnValue;                      // 0x0020(0x0018)()
};
static_assert(alignof(UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem) == 0x000008, "Wrong alignment on UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem");
static_assert(sizeof(UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem) == 0x000038, "Wrong size on UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem");
static_assert(offsetof(UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem, EntryPoint) == 0x000000, "Member 'UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem, K2Node_Event_InData) == 0x000008, "Member 'UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem, K2Node_DynamicCast_AsM1UIData_Simple_Icon) == 0x000010, "Member 'UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem::K2Node_DynamicCast_AsM1UIData_Simple_Icon' has a wrong offset!");
static_assert(offsetof(UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem, CallFunc_GetName_ReturnValue) == 0x000020, "Member 'UI_EpicBossDetailsItem_C_ExecuteUbergraph_UI_EpicBossDetailsItem::CallFunc_GetName_ReturnValue' has a wrong offset!");

// Function UI_EpicBossDetailsItem.UI_EpicBossDetailsItem_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_EpicBossDetailsItem_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_EpicBossDetailsItem_C_SetDataImpl) == 0x000008, "Wrong alignment on UI_EpicBossDetailsItem_C_SetDataImpl");
static_assert(sizeof(UI_EpicBossDetailsItem_C_SetDataImpl) == 0x000008, "Wrong size on UI_EpicBossDetailsItem_C_SetDataImpl");
static_assert(offsetof(UI_EpicBossDetailsItem_C_SetDataImpl, InData) == 0x000000, "Member 'UI_EpicBossDetailsItem_C_SetDataImpl::InData' has a wrong offset!");

}

