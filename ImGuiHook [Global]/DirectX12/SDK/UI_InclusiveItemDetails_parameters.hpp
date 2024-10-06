#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InclusiveItemDetails

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function UI_InclusiveItemDetails.UI_InclusiveItemDetails_C.ExecuteUbergraph_UI_InclusiveItemDetails
// 0x0008 (0x0008 - 0x0000)
struct UI_InclusiveItemDetails_C_ExecuteUbergraph_UI_InclusiveItemDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InclusiveItemDetails_C_ExecuteUbergraph_UI_InclusiveItemDetails) == 0x000004, "Wrong alignment on UI_InclusiveItemDetails_C_ExecuteUbergraph_UI_InclusiveItemDetails");
static_assert(sizeof(UI_InclusiveItemDetails_C_ExecuteUbergraph_UI_InclusiveItemDetails) == 0x000008, "Wrong size on UI_InclusiveItemDetails_C_ExecuteUbergraph_UI_InclusiveItemDetails");
static_assert(offsetof(UI_InclusiveItemDetails_C_ExecuteUbergraph_UI_InclusiveItemDetails, EntryPoint) == 0x000000, "Member 'UI_InclusiveItemDetails_C_ExecuteUbergraph_UI_InclusiveItemDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_ExecuteUbergraph_UI_InclusiveItemDetails, K2Node_Event_InDirection) == 0x000004, "Member 'UI_InclusiveItemDetails_C_ExecuteUbergraph_UI_InclusiveItemDetails::K2Node_Event_InDirection' has a wrong offset!");

// Function UI_InclusiveItemDetails.UI_InclusiveItemDetails_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_InclusiveItemDetails_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InclusiveItemDetails_C_OnEventWidgetOpen) == 0x000001, "Wrong alignment on UI_InclusiveItemDetails_C_OnEventWidgetOpen");
static_assert(sizeof(UI_InclusiveItemDetails_C_OnEventWidgetOpen) == 0x000001, "Wrong size on UI_InclusiveItemDetails_C_OnEventWidgetOpen");
static_assert(offsetof(UI_InclusiveItemDetails_C_OnEventWidgetOpen, InDirection) == 0x000000, "Member 'UI_InclusiveItemDetails_C_OnEventWidgetOpen::InDirection' has a wrong offset!");

// Function UI_InclusiveItemDetails.UI_InclusiveItemDetails_C.BP_GetTypedItemDetails
// 0x0078 (0x0078 - 0x0000)
struct UI_InclusiveItemDetails_C_BP_GetTypedItemDetails final
{
public:
	class UM1UIData*                              InUIData;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIWidget*                            ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIWidget*                            Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIDataItemInfo*                      K2Node_DynamicCast_AsM1UIData_Item_Info;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemType                                   CallFunc_GetItemType_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIDataItemInfo_Customizing*          K2Node_DynamicCast_AsM1UIData_Item_Info_Customizing; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemType                                   CallFunc_GetItemType_ReturnValue_1;                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1CustomizingItemCategoryType                CallFunc_GetCategoryType_ReturnValue;              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIDataCharacterInfo*                 K2Node_DynamicCast_AsM1UIData_Character_Info;      // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIWidget*                            Temp_object_Variable_1;                            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIWidget*                            Temp_object_Variable_2;                            // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIWidget*                            Temp_object_Variable_3;                            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EM1ItemType                                   Temp_byte_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIWidget*                            K2Node_Select_Default;                             // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIWidget*                            K2Node_Select_Default_1;                           // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails) == 0x000008, "Wrong alignment on UI_InclusiveItemDetails_C_BP_GetTypedItemDetails");
static_assert(sizeof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails) == 0x000078, "Wrong size on UI_InclusiveItemDetails_C_BP_GetTypedItemDetails");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, InUIData) == 0x000000, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::InUIData' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, ReturnValue) == 0x000008, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, Temp_object_Variable) == 0x000010, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, K2Node_DynamicCast_AsM1UIData_Item_Info) == 0x000018, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::K2Node_DynamicCast_AsM1UIData_Item_Info' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, CallFunc_GetItemType_ReturnValue) == 0x000021, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::CallFunc_GetItemType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, K2Node_DynamicCast_AsM1UIData_Item_Info_Customizing) == 0x000028, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::K2Node_DynamicCast_AsM1UIData_Item_Info_Customizing' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, CallFunc_GetItemType_ReturnValue_1) == 0x000031, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::CallFunc_GetItemType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, CallFunc_GetCategoryType_ReturnValue) == 0x000032, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::CallFunc_GetCategoryType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000033, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000034, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, K2Node_DynamicCast_AsM1UIData_Character_Info) == 0x000038, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::K2Node_DynamicCast_AsM1UIData_Character_Info' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, K2Node_DynamicCast_bSuccess_2) == 0x000040, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, Temp_object_Variable_1) == 0x000048, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, Temp_object_Variable_2) == 0x000050, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, Temp_object_Variable_3) == 0x000058, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, Temp_byte_Variable) == 0x000060, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, Temp_bool_Variable) == 0x000061, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, K2Node_Select_Default) == 0x000068, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_InclusiveItemDetails_C_BP_GetTypedItemDetails, K2Node_Select_Default_1) == 0x000070, "Member 'UI_InclusiveItemDetails_C_BP_GetTypedItemDetails::K2Node_Select_Default_1' has a wrong offset!");

}
