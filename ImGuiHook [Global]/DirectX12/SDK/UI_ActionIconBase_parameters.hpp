#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ActionIconBase

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_ActionIconBase.UI_ActionIconBase_C.ExecuteUbergraph_UI_ActionIconBase
// 0x0008 (0x0008 - 0x0000)
struct UI_ActionIconBase_C_ExecuteUbergraph_UI_ActionIconBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ActionIconBase_C_ExecuteUbergraph_UI_ActionIconBase) == 0x000004, "Wrong alignment on UI_ActionIconBase_C_ExecuteUbergraph_UI_ActionIconBase");
static_assert(sizeof(UI_ActionIconBase_C_ExecuteUbergraph_UI_ActionIconBase) == 0x000008, "Wrong size on UI_ActionIconBase_C_ExecuteUbergraph_UI_ActionIconBase");
static_assert(offsetof(UI_ActionIconBase_C_ExecuteUbergraph_UI_ActionIconBase, EntryPoint) == 0x000000, "Member 'UI_ActionIconBase_C_ExecuteUbergraph_UI_ActionIconBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ActionIconBase_C_ExecuteUbergraph_UI_ActionIconBase, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_ActionIconBase_C_ExecuteUbergraph_UI_ActionIconBase::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_ActionIconBase.UI_ActionIconBase_C.GetIconOverlay
// 0x0008 (0x0008 - 0x0000)
struct UI_ActionIconBase_C_GetIconOverlay final
{
public:
	class UOverlay*                               CustomPanel_IconOverlay_0;                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ActionIconBase_C_GetIconOverlay) == 0x000008, "Wrong alignment on UI_ActionIconBase_C_GetIconOverlay");
static_assert(sizeof(UI_ActionIconBase_C_GetIconOverlay) == 0x000008, "Wrong size on UI_ActionIconBase_C_GetIconOverlay");
static_assert(offsetof(UI_ActionIconBase_C_GetIconOverlay, CustomPanel_IconOverlay_0) == 0x000000, "Member 'UI_ActionIconBase_C_GetIconOverlay::CustomPanel_IconOverlay_0' has a wrong offset!");

// Function UI_ActionIconBase.UI_ActionIconBase_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_ActionIconBase_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ActionIconBase_C_PreConstruct) == 0x000001, "Wrong alignment on UI_ActionIconBase_C_PreConstruct");
static_assert(sizeof(UI_ActionIconBase_C_PreConstruct) == 0x000001, "Wrong size on UI_ActionIconBase_C_PreConstruct");
static_assert(offsetof(UI_ActionIconBase_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_ActionIconBase_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_ActionIconBase.UI_ActionIconBase_C.SetActive
// 0x0008 (0x0008 - 0x0000)
struct UI_ActionIconBase_C_SetActive final
{
public:
	bool                                          Inactive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ActionIconBase_C_SetActive) == 0x000004, "Wrong alignment on UI_ActionIconBase_C_SetActive");
static_assert(sizeof(UI_ActionIconBase_C_SetActive) == 0x000008, "Wrong size on UI_ActionIconBase_C_SetActive");
static_assert(offsetof(UI_ActionIconBase_C_SetActive, Inactive) == 0x000000, "Member 'UI_ActionIconBase_C_SetActive::Inactive' has a wrong offset!");
static_assert(offsetof(UI_ActionIconBase_C_SetActive, CallFunc_Conv_BoolToInt_ReturnValue) == 0x000004, "Member 'UI_ActionIconBase_C_SetActive::CallFunc_Conv_BoolToInt_ReturnValue' has a wrong offset!");

// Function UI_ActionIconBase.UI_ActionIconBase_C.SetLevel
// 0x0004 (0x0004 - 0x0000)
struct UI_ActionIconBase_C_SetLevel final
{
public:
	int32                                         InLevel;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ActionIconBase_C_SetLevel) == 0x000004, "Wrong alignment on UI_ActionIconBase_C_SetLevel");
static_assert(sizeof(UI_ActionIconBase_C_SetLevel) == 0x000004, "Wrong size on UI_ActionIconBase_C_SetLevel");
static_assert(offsetof(UI_ActionIconBase_C_SetLevel, InLevel) == 0x000000, "Member 'UI_ActionIconBase_C_SetLevel::InLevel' has a wrong offset!");

// Function UI_ActionIconBase.UI_ActionIconBase_C.Update Icon
// 0x0040 (0x0040 - 0x0000)
struct UI_ActionIconBase_C_Update_Icon final
{
public:
	class UImage*                                 InImage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              InIcon;                                            // 0x0008(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ActionIconBase_C_Update_Icon) == 0x000008, "Wrong alignment on UI_ActionIconBase_C_Update_Icon");
static_assert(sizeof(UI_ActionIconBase_C_Update_Icon) == 0x000040, "Wrong size on UI_ActionIconBase_C_Update_Icon");
static_assert(offsetof(UI_ActionIconBase_C_Update_Icon, InImage) == 0x000000, "Member 'UI_ActionIconBase_C_Update_Icon::InImage' has a wrong offset!");
static_assert(offsetof(UI_ActionIconBase_C_Update_Icon, InIcon) == 0x000008, "Member 'UI_ActionIconBase_C_Update_Icon::InIcon' has a wrong offset!");
static_assert(offsetof(UI_ActionIconBase_C_Update_Icon, Temp_byte_Variable) == 0x000038, "Member 'UI_ActionIconBase_C_Update_Icon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_ActionIconBase_C_Update_Icon, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000039, "Member 'UI_ActionIconBase_C_Update_Icon::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ActionIconBase_C_Update_Icon, Temp_byte_Variable_1) == 0x00003A, "Member 'UI_ActionIconBase_C_Update_Icon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_ActionIconBase_C_Update_Icon, Temp_bool_Variable) == 0x00003B, "Member 'UI_ActionIconBase_C_Update_Icon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_ActionIconBase_C_Update_Icon, K2Node_Select_Default) == 0x00003C, "Member 'UI_ActionIconBase_C_Update_Icon::K2Node_Select_Default' has a wrong offset!");

// Function UI_ActionIconBase.UI_ActionIconBase_C.UpdateIcons
// 0x0060 (0x0060 - 0x0000)
struct UI_ActionIconBase_C_UpdateIcons final
{
public:
	TSoftObjectPtr<class UTexture2D>              InNormalIcon;                                      // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              InActiveIcon;                                      // 0x0030(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(UI_ActionIconBase_C_UpdateIcons) == 0x000008, "Wrong alignment on UI_ActionIconBase_C_UpdateIcons");
static_assert(sizeof(UI_ActionIconBase_C_UpdateIcons) == 0x000060, "Wrong size on UI_ActionIconBase_C_UpdateIcons");
static_assert(offsetof(UI_ActionIconBase_C_UpdateIcons, InNormalIcon) == 0x000000, "Member 'UI_ActionIconBase_C_UpdateIcons::InNormalIcon' has a wrong offset!");
static_assert(offsetof(UI_ActionIconBase_C_UpdateIcons, InActiveIcon) == 0x000030, "Member 'UI_ActionIconBase_C_UpdateIcons::InActiveIcon' has a wrong offset!");

}
