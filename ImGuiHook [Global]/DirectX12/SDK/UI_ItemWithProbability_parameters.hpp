#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemWithProbability

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_ItemWithProbability.UI_ItemWithProbability_C.ExecuteUbergraph_UI_ItemWithProbability
// 0x00F8 (0x00F8 - 0x0000)
struct UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIDataItemInfo*                      K2Node_DynamicCast_AsM1UIData_Item_Info;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIDataPackageForecastItem*           K2Node_DynamicCast_AsM1UIData_Package_Forecast_Item; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetProbabilityWithKey_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetProbabilityDefault_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetTextProbabilityWithKey_ReturnValue;    // 0x0060(0x0018)()
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x2];                                       // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetTextProbabilityDefault_ReturnValue;    // 0x0088(0x0018)()
	class UM1UIDataItemInfo*                      CallFunc_GetItemData_ReturnValue;                  // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetItemName_ReturnValue;                  // 0x00A8(0x0018)()
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x00D4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00E4(0x0014)()
};
static_assert(alignof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability) == 0x000008, "Wrong alignment on UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability");
static_assert(sizeof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability) == 0x0000F8, "Wrong size on UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, EntryPoint) == 0x000000, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, Temp_struct_Variable) == 0x000004, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, K2Node_Event_IsDesignTime) == 0x000014, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, Temp_struct_Variable_1) == 0x000018, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, K2Node_Event_InData) == 0x000028, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, K2Node_DynamicCast_AsM1UIData_Item_Info) == 0x000030, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::K2Node_DynamicCast_AsM1UIData_Item_Info' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, K2Node_DynamicCast_AsM1UIData_Package_Forecast_Item) == 0x000040, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::K2Node_DynamicCast_AsM1UIData_Package_Forecast_Item' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, CallFunc_GetProbabilityWithKey_ReturnValue) == 0x000050, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::CallFunc_GetProbabilityWithKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, CallFunc_GetProbabilityDefault_ReturnValue) == 0x000058, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::CallFunc_GetProbabilityDefault_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, CallFunc_GetTextProbabilityWithKey_ReturnValue) == 0x000060, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::CallFunc_GetTextProbabilityWithKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000078, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, CallFunc_TextIsEmpty_ReturnValue) == 0x000079, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, CallFunc_SelectInt_ReturnValue) == 0x00007C, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, CallFunc_Not_PreBool_ReturnValue) == 0x000080, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000081, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, CallFunc_GetTextProbabilityDefault_ReturnValue) == 0x000088, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::CallFunc_GetTextProbabilityDefault_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, CallFunc_GetItemData_ReturnValue) == 0x0000A0, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::CallFunc_GetItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, CallFunc_GetItemName_ReturnValue) == 0x0000A8, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, Temp_struct_Variable_2) == 0x0000C0, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, Temp_int_Variable) == 0x0000D0, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, K2Node_Select_Default) == 0x0000D4, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability, K2Node_MakeStruct_SlateColor) == 0x0000E4, "Member 'UI_ItemWithProbability_C_ExecuteUbergraph_UI_ItemWithProbability::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function UI_ItemWithProbability.UI_ItemWithProbability_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_ItemWithProbability_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemWithProbability_C_PreConstruct) == 0x000001, "Wrong alignment on UI_ItemWithProbability_C_PreConstruct");
static_assert(sizeof(UI_ItemWithProbability_C_PreConstruct) == 0x000001, "Wrong size on UI_ItemWithProbability_C_PreConstruct");
static_assert(offsetof(UI_ItemWithProbability_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_ItemWithProbability_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_ItemWithProbability.UI_ItemWithProbability_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemWithProbability_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ItemWithProbability_C_SetDataImpl) == 0x000008, "Wrong alignment on UI_ItemWithProbability_C_SetDataImpl");
static_assert(sizeof(UI_ItemWithProbability_C_SetDataImpl) == 0x000008, "Wrong size on UI_ItemWithProbability_C_SetDataImpl");
static_assert(offsetof(UI_ItemWithProbability_C_SetDataImpl, InData) == 0x000000, "Member 'UI_ItemWithProbability_C_SetDataImpl::InData' has a wrong offset!");

}

