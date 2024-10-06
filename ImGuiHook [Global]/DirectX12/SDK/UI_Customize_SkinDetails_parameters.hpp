#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Customize_SkinDetails

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function UI_Customize_SkinDetails.UI_Customize_SkinDetails_C.BP_ShowDescImpl
// 0x0001 (0x0001 - 0x0000)
struct UI_Customize_SkinDetails_C_BP_ShowDescImpl final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Customize_SkinDetails_C_BP_ShowDescImpl) == 0x000001, "Wrong alignment on UI_Customize_SkinDetails_C_BP_ShowDescImpl");
static_assert(sizeof(UI_Customize_SkinDetails_C_BP_ShowDescImpl) == 0x000001, "Wrong size on UI_Customize_SkinDetails_C_BP_ShowDescImpl");
static_assert(offsetof(UI_Customize_SkinDetails_C_BP_ShowDescImpl, bShow) == 0x000000, "Member 'UI_Customize_SkinDetails_C_BP_ShowDescImpl::bShow' has a wrong offset!");

// Function UI_Customize_SkinDetails.UI_Customize_SkinDetails_C.BP_ShowPaints
// 0x0001 (0x0001 - 0x0000)
struct UI_Customize_SkinDetails_C_BP_ShowPaints final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Customize_SkinDetails_C_BP_ShowPaints) == 0x000001, "Wrong alignment on UI_Customize_SkinDetails_C_BP_ShowPaints");
static_assert(sizeof(UI_Customize_SkinDetails_C_BP_ShowPaints) == 0x000001, "Wrong size on UI_Customize_SkinDetails_C_BP_ShowPaints");
static_assert(offsetof(UI_Customize_SkinDetails_C_BP_ShowPaints, bShow) == 0x000000, "Member 'UI_Customize_SkinDetails_C_BP_ShowPaints::bShow' has a wrong offset!");

// Function UI_Customize_SkinDetails.UI_Customize_SkinDetails_C.CustomEvent
// 0x0001 (0x0001 - 0x0000)
struct UI_Customize_SkinDetails_C_CustomEvent final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Customize_SkinDetails_C_CustomEvent) == 0x000001, "Wrong alignment on UI_Customize_SkinDetails_C_CustomEvent");
static_assert(sizeof(UI_Customize_SkinDetails_C_CustomEvent) == 0x000001, "Wrong size on UI_Customize_SkinDetails_C_CustomEvent");
static_assert(offsetof(UI_Customize_SkinDetails_C_CustomEvent, InDirection) == 0x000000, "Member 'UI_Customize_SkinDetails_C_CustomEvent::InDirection' has a wrong offset!");

// Function UI_Customize_SkinDetails.UI_Customize_SkinDetails_C.ExecuteUbergraph_UI_Customize_SkinDetails
// 0x0060 (0x0060 - 0x0000)
struct UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIDataItemInfo*                      K2Node_DynamicCast_AsM1UIData_Item_Info;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemTierType                               CallFunc_GetItemTier_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bShow_1;                              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x1];                                       // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Get_UI_TierColor_Base_TierColor;          // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0044(0x0014)()
	bool                                          Temp_bool_Variable_1;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bShow;                                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails) == 0x000008, "Wrong alignment on UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails");
static_assert(sizeof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails) == 0x000060, "Wrong size on UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, EntryPoint) == 0x000000, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, Temp_byte_Variable) == 0x000004, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, Temp_bool_Variable) == 0x000005, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, Temp_byte_Variable_1) == 0x000006, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, Temp_byte_Variable_2) == 0x000007, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, K2Node_Event_InDirection) == 0x000008, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::K2Node_Event_InDirection' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, K2Node_Event_InData) == 0x000018, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, Temp_byte_Variable_3) == 0x000020, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, K2Node_DynamicCast_AsM1UIData_Item_Info) == 0x000028, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::K2Node_DynamicCast_AsM1UIData_Item_Info' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, CallFunc_GetItemTier_ReturnValue) == 0x000031, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::CallFunc_GetItemTier_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, K2Node_Event_bShow_1) == 0x000032, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::K2Node_Event_bShow_1' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, CallFunc_Get_UI_TierColor_Base_TierColor) == 0x000034, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::CallFunc_Get_UI_TierColor_Base_TierColor' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, K2Node_MakeStruct_SlateColor) == 0x000044, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, Temp_bool_Variable_1) == 0x000058, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, K2Node_Event_bShow) == 0x000059, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::K2Node_Event_bShow' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, K2Node_Select_Default) == 0x00005A, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails, K2Node_Select_Default_1) == 0x00005B, "Member 'UI_Customize_SkinDetails_C_ExecuteUbergraph_UI_Customize_SkinDetails::K2Node_Select_Default_1' has a wrong offset!");

// Function UI_Customize_SkinDetails.UI_Customize_SkinDetails_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_Customize_SkinDetails_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Customize_SkinDetails_C_SetDataImpl) == 0x000008, "Wrong alignment on UI_Customize_SkinDetails_C_SetDataImpl");
static_assert(sizeof(UI_Customize_SkinDetails_C_SetDataImpl) == 0x000008, "Wrong size on UI_Customize_SkinDetails_C_SetDataImpl");
static_assert(offsetof(UI_Customize_SkinDetails_C_SetDataImpl, InData) == 0x000000, "Member 'UI_Customize_SkinDetails_C_SetDataImpl::InData' has a wrong offset!");

// Function UI_Customize_SkinDetails.UI_Customize_SkinDetails_C.SetUITextOption
// 0x00A8 (0x00A8 - 0x0000)
struct UI_Customize_SkinDetails_C_SetUITextOption final
{
public:
	uint8                                         NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_1;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0090(0x0014)()
};
static_assert(alignof(UI_Customize_SkinDetails_C_SetUITextOption) == 0x000008, "Wrong alignment on UI_Customize_SkinDetails_C_SetUITextOption");
static_assert(sizeof(UI_Customize_SkinDetails_C_SetUITextOption) == 0x0000A8, "Wrong size on UI_Customize_SkinDetails_C_SetUITextOption");
static_assert(offsetof(UI_Customize_SkinDetails_C_SetUITextOption, NewParam) == 0x000000, "Member 'UI_Customize_SkinDetails_C_SetUITextOption::NewParam' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_SetUITextOption, Temp_byte_Variable) == 0x000001, "Member 'UI_Customize_SkinDetails_C_SetUITextOption::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_SetUITextOption, Temp_string_Variable) == 0x000008, "Member 'UI_Customize_SkinDetails_C_SetUITextOption::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_SetUITextOption, Temp_string_Variable_1) == 0x000018, "Member 'UI_Customize_SkinDetails_C_SetUITextOption::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_SetUITextOption, Temp_string_Variable_2) == 0x000028, "Member 'UI_Customize_SkinDetails_C_SetUITextOption::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_SetUITextOption, Temp_byte_Variable_1) == 0x000038, "Member 'UI_Customize_SkinDetails_C_SetUITextOption::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_SetUITextOption, K2Node_Select_Default) == 0x000040, "Member 'UI_Customize_SkinDetails_C_SetUITextOption::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_SetUITextOption, Temp_struct_Variable) == 0x000050, "Member 'UI_Customize_SkinDetails_C_SetUITextOption::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_SetUITextOption, Temp_struct_Variable_1) == 0x000060, "Member 'UI_Customize_SkinDetails_C_SetUITextOption::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_SetUITextOption, Temp_struct_Variable_2) == 0x000070, "Member 'UI_Customize_SkinDetails_C_SetUITextOption::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_SetUITextOption, K2Node_Select_Default_1) == 0x000080, "Member 'UI_Customize_SkinDetails_C_SetUITextOption::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_SetUITextOption, K2Node_MakeStruct_SlateColor) == 0x000090, "Member 'UI_Customize_SkinDetails_C_SetUITextOption::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function UI_Customize_SkinDetails.UI_Customize_SkinDetails_C.ShowItemTier
// 0x0030 (0x0030 - 0x0000)
struct UI_Customize_SkinDetails_C_ShowItemTier final
{
public:
	class UM1UIDataItemInfo*                      ItemInfo;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemTierText_ReturnValue;              // 0x0010(0x0018)()
	EM1ItemTierType                               CallFunc_GetItemTier_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_ByteByte_ReturnValue;             // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Customize_SkinDetails_C_ShowItemTier) == 0x000008, "Wrong alignment on UI_Customize_SkinDetails_C_ShowItemTier");
static_assert(sizeof(UI_Customize_SkinDetails_C_ShowItemTier) == 0x000030, "Wrong size on UI_Customize_SkinDetails_C_ShowItemTier");
static_assert(offsetof(UI_Customize_SkinDetails_C_ShowItemTier, ItemInfo) == 0x000000, "Member 'UI_Customize_SkinDetails_C_ShowItemTier::ItemInfo' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ShowItemTier, Temp_bool_Variable) == 0x000008, "Member 'UI_Customize_SkinDetails_C_ShowItemTier::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ShowItemTier, CallFunc_GetItemTierText_ReturnValue) == 0x000010, "Member 'UI_Customize_SkinDetails_C_ShowItemTier::CallFunc_GetItemTierText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ShowItemTier, CallFunc_GetItemTier_ReturnValue) == 0x000028, "Member 'UI_Customize_SkinDetails_C_ShowItemTier::CallFunc_GetItemTier_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ShowItemTier, Temp_byte_Variable) == 0x000029, "Member 'UI_Customize_SkinDetails_C_ShowItemTier::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ShowItemTier, CallFunc_Greater_ByteByte_ReturnValue) == 0x00002A, "Member 'UI_Customize_SkinDetails_C_ShowItemTier::CallFunc_Greater_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ShowItemTier, Temp_byte_Variable_1) == 0x00002B, "Member 'UI_Customize_SkinDetails_C_ShowItemTier::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Customize_SkinDetails_C_ShowItemTier, K2Node_Select_Default) == 0x00002C, "Member 'UI_Customize_SkinDetails_C_ShowItemTier::K2Node_Select_Default' has a wrong offset!");

}

