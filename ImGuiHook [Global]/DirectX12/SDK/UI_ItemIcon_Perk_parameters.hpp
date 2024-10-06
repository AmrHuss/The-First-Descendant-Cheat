#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemIcon_Perk

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_ItemIcon_Perk.UI_ItemIcon_Perk_C.ExecuteUbergraph_UI_ItemIcon_Perk
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemIcon_Perk_C_ExecuteUbergraph_UI_ItemIcon_Perk final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemIcon_Perk_C_ExecuteUbergraph_UI_ItemIcon_Perk) == 0x000004, "Wrong alignment on UI_ItemIcon_Perk_C_ExecuteUbergraph_UI_ItemIcon_Perk");
static_assert(sizeof(UI_ItemIcon_Perk_C_ExecuteUbergraph_UI_ItemIcon_Perk) == 0x000008, "Wrong size on UI_ItemIcon_Perk_C_ExecuteUbergraph_UI_ItemIcon_Perk");
static_assert(offsetof(UI_ItemIcon_Perk_C_ExecuteUbergraph_UI_ItemIcon_Perk, EntryPoint) == 0x000000, "Member 'UI_ItemIcon_Perk_C_ExecuteUbergraph_UI_ItemIcon_Perk::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_ExecuteUbergraph_UI_ItemIcon_Perk, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_ItemIcon_Perk_C_ExecuteUbergraph_UI_ItemIcon_Perk::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_ItemIcon_Perk.UI_ItemIcon_Perk_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_ItemIcon_Perk_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemIcon_Perk_C_PreConstruct) == 0x000001, "Wrong alignment on UI_ItemIcon_Perk_C_PreConstruct");
static_assert(sizeof(UI_ItemIcon_Perk_C_PreConstruct) == 0x000001, "Wrong size on UI_ItemIcon_Perk_C_PreConstruct");
static_assert(offsetof(UI_ItemIcon_Perk_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_ItemIcon_Perk_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_ItemIcon_Perk.UI_ItemIcon_Perk_C.SetPerkLevel
// 0x0050 (0x0050 - 0x0000)
struct UI_ItemIcon_Perk_C_SetPerkLevel final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MaxLevel;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_ItemIcon_Perk_Node_C*               K2Node_DynamicCast_AsUI_Item_Icon_Perk_Node;       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemIcon_Perk_C_SetPerkLevel) == 0x000008, "Wrong alignment on UI_ItemIcon_Perk_C_SetPerkLevel");
static_assert(sizeof(UI_ItemIcon_Perk_C_SetPerkLevel) == 0x000050, "Wrong size on UI_ItemIcon_Perk_C_SetPerkLevel");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetPerkLevel, Level) == 0x000000, "Member 'UI_ItemIcon_Perk_C_SetPerkLevel::Level' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetPerkLevel, MaxLevel) == 0x000004, "Member 'UI_ItemIcon_Perk_C_SetPerkLevel::MaxLevel' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetPerkLevel, Temp_int_Array_Index_Variable) == 0x000008, "Member 'UI_ItemIcon_Perk_C_SetPerkLevel::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetPerkLevel, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'UI_ItemIcon_Perk_C_SetPerkLevel::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetPerkLevel, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'UI_ItemIcon_Perk_C_SetPerkLevel::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetPerkLevel, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'UI_ItemIcon_Perk_C_SetPerkLevel::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetPerkLevel, CallFunc_GetAllChildren_ReturnValue) == 0x000018, "Member 'UI_ItemIcon_Perk_C_SetPerkLevel::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetPerkLevel, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'UI_ItemIcon_Perk_C_SetPerkLevel::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetPerkLevel, CallFunc_Array_Get_Item) == 0x000030, "Member 'UI_ItemIcon_Perk_C_SetPerkLevel::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetPerkLevel, CallFunc_Less_IntInt_ReturnValue_1) == 0x000038, "Member 'UI_ItemIcon_Perk_C_SetPerkLevel::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetPerkLevel, K2Node_DynamicCast_AsUI_Item_Icon_Perk_Node) == 0x000040, "Member 'UI_ItemIcon_Perk_C_SetPerkLevel::K2Node_DynamicCast_AsUI_Item_Icon_Perk_Node' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetPerkLevel, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'UI_ItemIcon_Perk_C_SetPerkLevel::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UI_ItemIcon_Perk.UI_ItemIcon_Perk_C.SetUIStyel
// 0x0050 (0x0050 - 0x0000)
struct UI_ItemIcon_Perk_C_SetUIStyel final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_ItemIcon_Perk_Node_C*               K2Node_DynamicCast_AsUI_Item_Icon_Perk_Node;       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWrapBox*                               K2Node_DynamicCast_As____;                         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemIcon_Perk_C_SetUIStyel) == 0x000008, "Wrong alignment on UI_ItemIcon_Perk_C_SetUIStyel");
static_assert(sizeof(UI_ItemIcon_Perk_C_SetUIStyel) == 0x000050, "Wrong size on UI_ItemIcon_Perk_C_SetUIStyel");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetUIStyel, Temp_int_Array_Index_Variable) == 0x000000, "Member 'UI_ItemIcon_Perk_C_SetUIStyel::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetUIStyel, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'UI_ItemIcon_Perk_C_SetUIStyel::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetUIStyel, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'UI_ItemIcon_Perk_C_SetUIStyel::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetUIStyel, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'UI_ItemIcon_Perk_C_SetUIStyel::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetUIStyel, CallFunc_Array_Get_Item) == 0x000020, "Member 'UI_ItemIcon_Perk_C_SetUIStyel::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetUIStyel, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'UI_ItemIcon_Perk_C_SetUIStyel::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetUIStyel, K2Node_DynamicCast_AsUI_Item_Icon_Perk_Node) == 0x000030, "Member 'UI_ItemIcon_Perk_C_SetUIStyel::K2Node_DynamicCast_AsUI_Item_Icon_Perk_Node' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetUIStyel, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'UI_ItemIcon_Perk_C_SetUIStyel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetUIStyel, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'UI_ItemIcon_Perk_C_SetUIStyel::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetUIStyel, K2Node_DynamicCast_As____) == 0x000040, "Member 'UI_ItemIcon_Perk_C_SetUIStyel::K2Node_DynamicCast_As____' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_Perk_C_SetUIStyel, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'UI_ItemIcon_Perk_C_SetUIStyel::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}
