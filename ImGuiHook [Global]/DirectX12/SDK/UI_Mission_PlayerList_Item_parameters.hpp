#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_PlayerList_Item

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function UI_Mission_PlayerList_Item.UI_Mission_PlayerList_Item_C.BP_SetPlatformIcon
// 0x0008 (0x0008 - 0x0000)
struct UI_Mission_PlayerList_Item_C_BP_SetPlatformIcon final
{
public:
	const class AM1PlayerState*                   InPlayerState;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_PlayerList_Item_C_BP_SetPlatformIcon) == 0x000008, "Wrong alignment on UI_Mission_PlayerList_Item_C_BP_SetPlatformIcon");
static_assert(sizeof(UI_Mission_PlayerList_Item_C_BP_SetPlatformIcon) == 0x000008, "Wrong size on UI_Mission_PlayerList_Item_C_BP_SetPlatformIcon");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_BP_SetPlatformIcon, InPlayerState) == 0x000000, "Member 'UI_Mission_PlayerList_Item_C_BP_SetPlatformIcon::InPlayerState' has a wrong offset!");

// Function UI_Mission_PlayerList_Item.UI_Mission_PlayerList_Item_C.ExecuteUbergraph_UI_Mission_PlayerList_Item
// 0x0018 (0x0018 - 0x0000)
struct UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	const class AM1PlayerState*                   K2Node_Event_InPlayerState;                        // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         CallFunc_GetPlayerPlatformType_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         CallFunc_GetLocalPlayerPlatformType_ReturnValue;   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item) == 0x000008, "Wrong alignment on UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item");
static_assert(sizeof(UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item) == 0x000018, "Wrong size on UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item, EntryPoint) == 0x000000, "Member 'UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item, K2Node_Event_InDirection) == 0x000004, "Member 'UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item::K2Node_Event_InDirection' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item, K2Node_Event_IsDesignTime) == 0x000005, "Member 'UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item, K2Node_Event_InPlayerState) == 0x000008, "Member 'UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item::K2Node_Event_InPlayerState' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item, CallFunc_GetPlayerPlatformType_ReturnValue) == 0x000010, "Member 'UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item::CallFunc_GetPlayerPlatformType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item, CallFunc_GetLocalPlayerPlatformType_ReturnValue) == 0x000011, "Member 'UI_Mission_PlayerList_Item_C_ExecuteUbergraph_UI_Mission_PlayerList_Item::CallFunc_GetLocalPlayerPlatformType_ReturnValue' has a wrong offset!");

// Function UI_Mission_PlayerList_Item.UI_Mission_PlayerList_Item_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_Mission_PlayerList_Item_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_PlayerList_Item_C_OnEventWidgetOpen) == 0x000001, "Wrong alignment on UI_Mission_PlayerList_Item_C_OnEventWidgetOpen");
static_assert(sizeof(UI_Mission_PlayerList_Item_C_OnEventWidgetOpen) == 0x000001, "Wrong size on UI_Mission_PlayerList_Item_C_OnEventWidgetOpen");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_OnEventWidgetOpen, InDirection) == 0x000000, "Member 'UI_Mission_PlayerList_Item_C_OnEventWidgetOpen::InDirection' has a wrong offset!");

// Function UI_Mission_PlayerList_Item.UI_Mission_PlayerList_Item_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Mission_PlayerList_Item_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_PlayerList_Item_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Mission_PlayerList_Item_C_PreConstruct");
static_assert(sizeof(UI_Mission_PlayerList_Item_C_PreConstruct) == 0x000001, "Wrong size on UI_Mission_PlayerList_Item_C_PreConstruct");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Mission_PlayerList_Item_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_Mission_PlayerList_Item.UI_Mission_PlayerList_Item_C.SetUIDefault_CheckPoint_Player
// 0x0070 (0x0070 - 0x0000)
struct UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player final
{
public:
	bool                                          Stop_0;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_2;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScaleBoxSlot*                          CallFunc_SlotAsScaleBoxSlot_ReturnValue;           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player) == 0x000008, "Wrong alignment on UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player");
static_assert(sizeof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player) == 0x000070, "Wrong size on UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, Stop_0) == 0x000000, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::Stop_0' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000018, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, CallFunc_AddChild_ReturnValue) == 0x000020, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1) == 0x000028, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, CallFunc_GetChildAt_ReturnValue_1) == 0x000038, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, CallFunc_AddChild_ReturnValue_1) == 0x000040, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, CallFunc_GetChildAt_ReturnValue_2) == 0x000048, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::CallFunc_GetChildAt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, CallFunc_AddChild_ReturnValue_2) == 0x000050, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000058, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000060, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player, CallFunc_SlotAsScaleBoxSlot_ReturnValue) == 0x000068, "Member 'UI_Mission_PlayerList_Item_C_SetUIDefault_CheckPoint_Player::CallFunc_SlotAsScaleBoxSlot_ReturnValue' has a wrong offset!");

}

