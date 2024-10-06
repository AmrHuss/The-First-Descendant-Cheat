#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_DraggedItemIcon

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "M1Data_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_DraggedItemIcon.UI_DraggedItemIcon_C.ExecuteUbergraph_UI_DraggedItemIcon
// 0x0058 (0x0058 - 0x0000)
struct UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EM1ItemTierType                               Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIDataItemInfo_Equipment*            K2Node_DynamicCast_AsM1UIData_Item_Info_Equipment; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemTierType                               CallFunc_GetItemTier_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Get_UI_TierColor_Line_TierColor_Line;     // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon) == 0x000008, "Wrong alignment on UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon");
static_assert(sizeof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon) == 0x000058, "Wrong size on UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, EntryPoint) == 0x000000, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, Temp_int_Variable) == 0x000004, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, Temp_int_Variable_1) == 0x000010, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, Temp_int_Variable_2) == 0x000014, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, Temp_int_Variable_3) == 0x000018, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, Temp_int_Variable_4) == 0x00001C, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, Temp_int_Variable_5) == 0x000020, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, K2Node_Event_IsDesignTime) == 0x000024, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, K2Node_Event_InData) == 0x000028, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, Temp_byte_Variable) == 0x000030, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, K2Node_DynamicCast_AsM1UIData_Item_Info_Equipment) == 0x000038, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::K2Node_DynamicCast_AsM1UIData_Item_Info_Equipment' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, CallFunc_GetItemTier_ReturnValue) == 0x000041, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::CallFunc_GetItemTier_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, CallFunc_Get_UI_TierColor_Line_TierColor_Line) == 0x000044, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::CallFunc_Get_UI_TierColor_Line_TierColor_Line' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon, K2Node_Select_Default) == 0x000054, "Member 'UI_DraggedItemIcon_C_ExecuteUbergraph_UI_DraggedItemIcon::K2Node_Select_Default' has a wrong offset!");

// Function UI_DraggedItemIcon.UI_DraggedItemIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_DraggedItemIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_DraggedItemIcon_C_PreConstruct) == 0x000001, "Wrong alignment on UI_DraggedItemIcon_C_PreConstruct");
static_assert(sizeof(UI_DraggedItemIcon_C_PreConstruct) == 0x000001, "Wrong size on UI_DraggedItemIcon_C_PreConstruct");
static_assert(offsetof(UI_DraggedItemIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_DraggedItemIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_DraggedItemIcon.UI_DraggedItemIcon_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_DraggedItemIcon_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_DraggedItemIcon_C_SetDataImpl) == 0x000008, "Wrong alignment on UI_DraggedItemIcon_C_SetDataImpl");
static_assert(sizeof(UI_DraggedItemIcon_C_SetDataImpl) == 0x000008, "Wrong size on UI_DraggedItemIcon_C_SetDataImpl");
static_assert(offsetof(UI_DraggedItemIcon_C_SetDataImpl, InData) == 0x000000, "Member 'UI_DraggedItemIcon_C_SetDataImpl::InData' has a wrong offset!");

// Function UI_DraggedItemIcon.UI_DraggedItemIcon_C.SetItemIconType
// 0x00E0 (0x00E0 - 0x0000)
struct UI_DraggedItemIcon_C_SetItemIconType final
{
public:
	class UM1UIDataItemInfo*                      UIData_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EM1ItemIconType                               Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetBigIcon_ReturnValue;                   // 0x0010(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetIcon_ReturnValue;                      // 0x0040(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable;                          // 0x0070(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	EM1ItemIconType                               Temp_byte_Variable_1;                              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default;                             // 0x00A8(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	EStretch                                      Temp_byte_Variable_2;                              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStretch                                      Temp_byte_Variable_3;                              // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStretch                                      Temp_byte_Variable_4;                              // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStretch                                      K2Node_Select_Default_1;                           // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_DraggedItemIcon_C_SetItemIconType) == 0x000008, "Wrong alignment on UI_DraggedItemIcon_C_SetItemIconType");
static_assert(sizeof(UI_DraggedItemIcon_C_SetItemIconType) == 0x0000E0, "Wrong size on UI_DraggedItemIcon_C_SetItemIconType");
static_assert(offsetof(UI_DraggedItemIcon_C_SetItemIconType, UIData_0) == 0x000000, "Member 'UI_DraggedItemIcon_C_SetItemIconType::UIData_0' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_SetItemIconType, Temp_byte_Variable) == 0x000008, "Member 'UI_DraggedItemIcon_C_SetItemIconType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_SetItemIconType, CallFunc_GetBigIcon_ReturnValue) == 0x000010, "Member 'UI_DraggedItemIcon_C_SetItemIconType::CallFunc_GetBigIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_SetItemIconType, CallFunc_GetIcon_ReturnValue) == 0x000040, "Member 'UI_DraggedItemIcon_C_SetItemIconType::CallFunc_GetIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_SetItemIconType, Temp_softobject_Variable) == 0x000070, "Member 'UI_DraggedItemIcon_C_SetItemIconType::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_SetItemIconType, Temp_byte_Variable_1) == 0x0000A0, "Member 'UI_DraggedItemIcon_C_SetItemIconType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_SetItemIconType, K2Node_Select_Default) == 0x0000A8, "Member 'UI_DraggedItemIcon_C_SetItemIconType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_SetItemIconType, Temp_byte_Variable_2) == 0x0000D8, "Member 'UI_DraggedItemIcon_C_SetItemIconType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_SetItemIconType, Temp_byte_Variable_3) == 0x0000D9, "Member 'UI_DraggedItemIcon_C_SetItemIconType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_SetItemIconType, Temp_byte_Variable_4) == 0x0000DA, "Member 'UI_DraggedItemIcon_C_SetItemIconType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_SetItemIconType, K2Node_Select_Default_1) == 0x0000DB, "Member 'UI_DraggedItemIcon_C_SetItemIconType::K2Node_Select_Default_1' has a wrong offset!");

// Function UI_DraggedItemIcon.UI_DraggedItemIcon_C.SetUIIconStretch
// 0x0001 (0x0001 - 0x0000)
struct UI_DraggedItemIcon_C_SetUIIconStretch final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_DraggedItemIcon_C_SetUIIconStretch) == 0x000001, "Wrong alignment on UI_DraggedItemIcon_C_SetUIIconStretch");
static_assert(sizeof(UI_DraggedItemIcon_C_SetUIIconStretch) == 0x000001, "Wrong size on UI_DraggedItemIcon_C_SetUIIconStretch");
static_assert(offsetof(UI_DraggedItemIcon_C_SetUIIconStretch, NewParam) == 0x000000, "Member 'UI_DraggedItemIcon_C_SetUIIconStretch::NewParam' has a wrong offset!");

// Function UI_DraggedItemIcon.UI_DraggedItemIcon_C.ShowEquippedIcon
// 0x0020 (0x0020 - 0x0000)
struct UI_DraggedItemIcon_C_ShowEquippedIcon final
{
public:
	class UM1UIDataItemInfo*                      InItemInfo;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIDataItemInfo_Equipment*            K2Node_DynamicCast_AsM1UIData_Item_Info_Equipment; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipped_ReturnValue;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_DraggedItemIcon_C_ShowEquippedIcon) == 0x000008, "Wrong alignment on UI_DraggedItemIcon_C_ShowEquippedIcon");
static_assert(sizeof(UI_DraggedItemIcon_C_ShowEquippedIcon) == 0x000020, "Wrong size on UI_DraggedItemIcon_C_ShowEquippedIcon");
static_assert(offsetof(UI_DraggedItemIcon_C_ShowEquippedIcon, InItemInfo) == 0x000000, "Member 'UI_DraggedItemIcon_C_ShowEquippedIcon::InItemInfo' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ShowEquippedIcon, Temp_bool_Variable) == 0x000008, "Member 'UI_DraggedItemIcon_C_ShowEquippedIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ShowEquippedIcon, K2Node_DynamicCast_AsM1UIData_Item_Info_Equipment) == 0x000010, "Member 'UI_DraggedItemIcon_C_ShowEquippedIcon::K2Node_DynamicCast_AsM1UIData_Item_Info_Equipment' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ShowEquippedIcon, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UI_DraggedItemIcon_C_ShowEquippedIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ShowEquippedIcon, Temp_byte_Variable) == 0x000019, "Member 'UI_DraggedItemIcon_C_ShowEquippedIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ShowEquippedIcon, CallFunc_IsEquipped_ReturnValue) == 0x00001A, "Member 'UI_DraggedItemIcon_C_ShowEquippedIcon::CallFunc_IsEquipped_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ShowEquippedIcon, Temp_byte_Variable_1) == 0x00001B, "Member 'UI_DraggedItemIcon_C_ShowEquippedIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_DraggedItemIcon_C_ShowEquippedIcon, K2Node_Select_Default) == 0x00001C, "Member 'UI_DraggedItemIcon_C_ShowEquippedIcon::K2Node_Select_Default' has a wrong offset!");

}

