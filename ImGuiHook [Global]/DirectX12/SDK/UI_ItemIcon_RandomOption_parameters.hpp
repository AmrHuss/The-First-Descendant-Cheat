#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemIcon_RandomOption

#include "Basic.hpp"

#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function UI_ItemIcon_RandomOption.UI_ItemIcon_RandomOption_C.ExecuteUbergraph_UI_ItemIcon_RandomOption
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemIcon_RandomOption_C_ExecuteUbergraph_UI_ItemIcon_RandomOption final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemIcon_RandomOption_C_ExecuteUbergraph_UI_ItemIcon_RandomOption) == 0x000004, "Wrong alignment on UI_ItemIcon_RandomOption_C_ExecuteUbergraph_UI_ItemIcon_RandomOption");
static_assert(sizeof(UI_ItemIcon_RandomOption_C_ExecuteUbergraph_UI_ItemIcon_RandomOption) == 0x000008, "Wrong size on UI_ItemIcon_RandomOption_C_ExecuteUbergraph_UI_ItemIcon_RandomOption");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_ExecuteUbergraph_UI_ItemIcon_RandomOption, EntryPoint) == 0x000000, "Member 'UI_ItemIcon_RandomOption_C_ExecuteUbergraph_UI_ItemIcon_RandomOption::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_ExecuteUbergraph_UI_ItemIcon_RandomOption, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_ItemIcon_RandomOption_C_ExecuteUbergraph_UI_ItemIcon_RandomOption::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_ItemIcon_RandomOption.UI_ItemIcon_RandomOption_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_ItemIcon_RandomOption_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemIcon_RandomOption_C_PreConstruct) == 0x000001, "Wrong alignment on UI_ItemIcon_RandomOption_C_PreConstruct");
static_assert(sizeof(UI_ItemIcon_RandomOption_C_PreConstruct) == 0x000001, "Wrong size on UI_ItemIcon_RandomOption_C_PreConstruct");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_ItemIcon_RandomOption_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_ItemIcon_RandomOption.UI_ItemIcon_RandomOption_C.SetRandomOptionTiers
// 0x0058 (0x0058 - 0x0000)
struct UI_ItemIcon_RandomOption_C_SetRandomOptionTiers final
{
public:
	TArray<EM1ItemOptionTierType>                 Tiers;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemOptionTierType                         CallFunc_Array_Get_Item;                           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_ItemIcon_RandomOption_Node_C*       K2Node_DynamicCast_AsUI_Item_Icon_Random_Option_Node; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers) == 0x000008, "Wrong alignment on UI_ItemIcon_RandomOption_C_SetRandomOptionTiers");
static_assert(sizeof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers) == 0x000058, "Wrong size on UI_ItemIcon_RandomOption_C_SetRandomOptionTiers");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers, Tiers) == 0x000000, "Member 'UI_ItemIcon_RandomOption_C_SetRandomOptionTiers::Tiers' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'UI_ItemIcon_RandomOption_C_SetRandomOptionTiers::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers, Temp_int_Array_Index_Variable) == 0x000014, "Member 'UI_ItemIcon_RandomOption_C_SetRandomOptionTiers::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'UI_ItemIcon_RandomOption_C_SetRandomOptionTiers::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers, CallFunc_Array_Get_Item) == 0x00001C, "Member 'UI_ItemIcon_RandomOption_C_SetRandomOptionTiers::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00001D, "Member 'UI_ItemIcon_RandomOption_C_SetRandomOptionTiers::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers, CallFunc_GetAllChildren_ReturnValue) == 0x000020, "Member 'UI_ItemIcon_RandomOption_C_SetRandomOptionTiers::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'UI_ItemIcon_RandomOption_C_SetRandomOptionTiers::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers, CallFunc_Array_Get_Item_1) == 0x000038, "Member 'UI_ItemIcon_RandomOption_C_SetRandomOptionTiers::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'UI_ItemIcon_RandomOption_C_SetRandomOptionTiers::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers, K2Node_DynamicCast_AsUI_Item_Icon_Random_Option_Node) == 0x000048, "Member 'UI_ItemIcon_RandomOption_C_SetRandomOptionTiers::K2Node_DynamicCast_AsUI_Item_Icon_Random_Option_Node' has a wrong offset!");
static_assert(offsetof(UI_ItemIcon_RandomOption_C_SetRandomOptionTiers, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'UI_ItemIcon_RandomOption_C_SetRandomOptionTiers::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
