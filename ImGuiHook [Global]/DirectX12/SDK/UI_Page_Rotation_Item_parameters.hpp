#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Page_Rotation_Item

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_Page_Rotation_Item.UI_Page_Rotation_Item_C.BP_DisplayAsSelected
// 0x0001 (0x0001 - 0x0000)
struct UI_Page_Rotation_Item_C_BP_DisplayAsSelected final
{
public:
	bool                                          bSelected_0;                                       // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Page_Rotation_Item_C_BP_DisplayAsSelected) == 0x000001, "Wrong alignment on UI_Page_Rotation_Item_C_BP_DisplayAsSelected");
static_assert(sizeof(UI_Page_Rotation_Item_C_BP_DisplayAsSelected) == 0x000001, "Wrong size on UI_Page_Rotation_Item_C_BP_DisplayAsSelected");
static_assert(offsetof(UI_Page_Rotation_Item_C_BP_DisplayAsSelected, bSelected_0) == 0x000000, "Member 'UI_Page_Rotation_Item_C_BP_DisplayAsSelected::bSelected_0' has a wrong offset!");

// Function UI_Page_Rotation_Item.UI_Page_Rotation_Item_C.ExecuteUbergraph_UI_Page_Rotation_Item
// 0x0018 (0x0018 - 0x0000)
struct UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSelected;                            // 0x0006(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item) == 0x000008, "Wrong alignment on UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item");
static_assert(sizeof(UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item) == 0x000018, "Wrong size on UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item");
static_assert(offsetof(UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item, EntryPoint) == 0x000000, "Member 'UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item, Temp_byte_Variable) == 0x000004, "Member 'UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item, Temp_byte_Variable_1) == 0x000005, "Member 'UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item, K2Node_Event_bSelected) == 0x000006, "Member 'UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item::K2Node_Event_bSelected' has a wrong offset!");
static_assert(offsetof(UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item, Temp_bool_Variable) == 0x000007, "Member 'UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000008, "Member 'UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item, K2Node_Select_Default) == 0x000009, "Member 'UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
