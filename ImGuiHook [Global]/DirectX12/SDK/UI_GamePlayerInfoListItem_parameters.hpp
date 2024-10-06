#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GamePlayerInfoListItem

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_MarkedRestart
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_MarkedRestart final
{
public:
	bool                                          bMarked;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GamePlayerInfoListItem_C_BP_MarkedRestart) == 0x000001, "Wrong alignment on UI_GamePlayerInfoListItem_C_BP_MarkedRestart");
static_assert(sizeof(UI_GamePlayerInfoListItem_C_BP_MarkedRestart) == 0x000001, "Wrong size on UI_GamePlayerInfoListItem_C_BP_MarkedRestart");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_BP_MarkedRestart, bMarked) == 0x000000, "Member 'UI_GamePlayerInfoListItem_C_BP_MarkedRestart::bMarked' has a wrong offset!");

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_OnChangedPlayerDBNOState
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_OnChangedPlayerDBNOState final
{
public:
	bool                                          bDBNO;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GamePlayerInfoListItem_C_BP_OnChangedPlayerDBNOState) == 0x000001, "Wrong alignment on UI_GamePlayerInfoListItem_C_BP_OnChangedPlayerDBNOState");
static_assert(sizeof(UI_GamePlayerInfoListItem_C_BP_OnChangedPlayerDBNOState) == 0x000001, "Wrong size on UI_GamePlayerInfoListItem_C_BP_OnChangedPlayerDBNOState");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_BP_OnChangedPlayerDBNOState, bDBNO) == 0x000000, "Member 'UI_GamePlayerInfoListItem_C_BP_OnChangedPlayerDBNOState::bDBNO' has a wrong offset!");

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_SetPlatformIcon
// 0x0002 (0x0002 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_SetPlatformIcon final
{
public:
	EM1LoginPlatformTypes                         InLocalPlatformType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         InPlayerPlatformType;                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GamePlayerInfoListItem_C_BP_SetPlatformIcon) == 0x000001, "Wrong alignment on UI_GamePlayerInfoListItem_C_BP_SetPlatformIcon");
static_assert(sizeof(UI_GamePlayerInfoListItem_C_BP_SetPlatformIcon) == 0x000002, "Wrong size on UI_GamePlayerInfoListItem_C_BP_SetPlatformIcon");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_BP_SetPlatformIcon, InLocalPlatformType) == 0x000000, "Member 'UI_GamePlayerInfoListItem_C_BP_SetPlatformIcon::InLocalPlatformType' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_BP_SetPlatformIcon, InPlayerPlatformType) == 0x000001, "Member 'UI_GamePlayerInfoListItem_C_BP_SetPlatformIcon::InPlayerPlatformType' has a wrong offset!");

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_UpdateAppearanceByLevel
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_UpdateAppearanceByLevel final
{
public:
	bool                                          bIsMaxLevel;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GamePlayerInfoListItem_C_BP_UpdateAppearanceByLevel) == 0x000001, "Wrong alignment on UI_GamePlayerInfoListItem_C_BP_UpdateAppearanceByLevel");
static_assert(sizeof(UI_GamePlayerInfoListItem_C_BP_UpdateAppearanceByLevel) == 0x000001, "Wrong size on UI_GamePlayerInfoListItem_C_BP_UpdateAppearanceByLevel");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_BP_UpdateAppearanceByLevel, bIsMaxLevel) == 0x000000, "Member 'UI_GamePlayerInfoListItem_C_BP_UpdateAppearanceByLevel::bIsMaxLevel' has a wrong offset!");

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_UpdateAwayFromGameplay
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_UpdateAwayFromGameplay final
{
public:
	bool                                          bAway;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GamePlayerInfoListItem_C_BP_UpdateAwayFromGameplay) == 0x000001, "Wrong alignment on UI_GamePlayerInfoListItem_C_BP_UpdateAwayFromGameplay");
static_assert(sizeof(UI_GamePlayerInfoListItem_C_BP_UpdateAwayFromGameplay) == 0x000001, "Wrong size on UI_GamePlayerInfoListItem_C_BP_UpdateAwayFromGameplay");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_BP_UpdateAwayFromGameplay, bAway) == 0x000000, "Member 'UI_GamePlayerInfoListItem_C_BP_UpdateAwayFromGameplay::bAway' has a wrong offset!");

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_UpdateIsSameParty
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_UpdateIsSameParty final
{
public:
	bool                                          bIsSamePartyWithLocalPlayer;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GamePlayerInfoListItem_C_BP_UpdateIsSameParty) == 0x000001, "Wrong alignment on UI_GamePlayerInfoListItem_C_BP_UpdateIsSameParty");
static_assert(sizeof(UI_GamePlayerInfoListItem_C_BP_UpdateIsSameParty) == 0x000001, "Wrong size on UI_GamePlayerInfoListItem_C_BP_UpdateIsSameParty");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_BP_UpdateIsSameParty, bIsSamePartyWithLocalPlayer) == 0x000000, "Member 'UI_GamePlayerInfoListItem_C_BP_UpdateIsSameParty::bIsSamePartyWithLocalPlayer' has a wrong offset!");

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_UpdatePartyLeader
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_UpdatePartyLeader final
{
public:
	bool                                          bIsPartyLeader;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GamePlayerInfoListItem_C_BP_UpdatePartyLeader) == 0x000001, "Wrong alignment on UI_GamePlayerInfoListItem_C_BP_UpdatePartyLeader");
static_assert(sizeof(UI_GamePlayerInfoListItem_C_BP_UpdatePartyLeader) == 0x000001, "Wrong size on UI_GamePlayerInfoListItem_C_BP_UpdatePartyLeader");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_BP_UpdatePartyLeader, bIsPartyLeader) == 0x000000, "Member 'UI_GamePlayerInfoListItem_C_BP_UpdatePartyLeader::bIsPartyLeader' has a wrong offset!");

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.ExecuteUbergraph_UI_GamePlayerInfoListItem
// 0x0038 (0x0038 - 0x0000)
struct UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsMaxLevel;                          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bAway;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSamePartyWithLocalPlayer;          // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsPartyLeader;                       // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection_1;                        // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F[0x1];                                        // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue_1;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         K2Node_Event_InLocalPlatformType;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         K2Node_Event_InPlayerPlatformType;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bMarked;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bDBNO;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem) == 0x000008, "Wrong alignment on UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem");
static_assert(sizeof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem) == 0x000038, "Wrong size on UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, EntryPoint) == 0x000000, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, Temp_bool_Variable) == 0x000004, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, Temp_byte_Variable) == 0x000005, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, Temp_byte_Variable_1) == 0x000006, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, K2Node_Event_IsDesignTime) == 0x000007, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, K2Node_Event_bIsMaxLevel) == 0x000008, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::K2Node_Event_bIsMaxLevel' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, K2Node_Event_bAway) == 0x000009, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::K2Node_Event_bAway' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, K2Node_Select_Default) == 0x00000A, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, K2Node_Event_bIsSamePartyWithLocalPlayer) == 0x00000B, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::K2Node_Event_bIsSamePartyWithLocalPlayer' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, K2Node_Event_bIsPartyLeader) == 0x00000C, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::K2Node_Event_bIsPartyLeader' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, K2Node_Event_InDirection_1) == 0x00000D, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::K2Node_Event_InDirection_1' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, K2Node_Event_InDirection) == 0x00000E, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::K2Node_Event_InDirection' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, CallFunc_PlayUIAnimation_ReturnValue) == 0x000010, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, CallFunc_PlayUIAnimation_ReturnValue_1) == 0x000018, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::CallFunc_PlayUIAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, K2Node_Event_InLocalPlatformType) == 0x000020, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::K2Node_Event_InLocalPlatformType' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, K2Node_Event_InPlayerPlatformType) == 0x000021, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::K2Node_Event_InPlayerPlatformType' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, K2Node_Event_bMarked) == 0x000022, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::K2Node_Event_bMarked' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem, K2Node_Event_bDBNO) == 0x000030, "Member 'UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem::K2Node_Event_bDBNO' has a wrong offset!");

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.OnEventWidgetClose
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_OnEventWidgetClose final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GamePlayerInfoListItem_C_OnEventWidgetClose) == 0x000001, "Wrong alignment on UI_GamePlayerInfoListItem_C_OnEventWidgetClose");
static_assert(sizeof(UI_GamePlayerInfoListItem_C_OnEventWidgetClose) == 0x000001, "Wrong size on UI_GamePlayerInfoListItem_C_OnEventWidgetClose");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_OnEventWidgetClose, InDirection) == 0x000000, "Member 'UI_GamePlayerInfoListItem_C_OnEventWidgetClose::InDirection' has a wrong offset!");

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GamePlayerInfoListItem_C_OnEventWidgetOpen) == 0x000001, "Wrong alignment on UI_GamePlayerInfoListItem_C_OnEventWidgetOpen");
static_assert(sizeof(UI_GamePlayerInfoListItem_C_OnEventWidgetOpen) == 0x000001, "Wrong size on UI_GamePlayerInfoListItem_C_OnEventWidgetOpen");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_OnEventWidgetOpen, InDirection) == 0x000000, "Member 'UI_GamePlayerInfoListItem_C_OnEventWidgetOpen::InDirection' has a wrong offset!");

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GamePlayerInfoListItem_C_PreConstruct) == 0x000001, "Wrong alignment on UI_GamePlayerInfoListItem_C_PreConstruct");
static_assert(sizeof(UI_GamePlayerInfoListItem_C_PreConstruct) == 0x000001, "Wrong size on UI_GamePlayerInfoListItem_C_PreConstruct");
static_assert(offsetof(UI_GamePlayerInfoListItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_GamePlayerInfoListItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

