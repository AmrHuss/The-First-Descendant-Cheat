#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ToastMessage_BottomLineButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_ToastMessage_BottomLineButton.UI_ToastMessage_BottomLineButton_C.ExecuteUbergraph_UI_ToastMessage_BottomLineButton
// 0x0010 (0x0010 - 0x0000)
struct UI_ToastMessage_BottomLineButton_C_ExecuteUbergraph_UI_ToastMessage_BottomLineButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_CustomEvent_AkEvent;                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ToastMessage_BottomLineButton_C_ExecuteUbergraph_UI_ToastMessage_BottomLineButton) == 0x000008, "Wrong alignment on UI_ToastMessage_BottomLineButton_C_ExecuteUbergraph_UI_ToastMessage_BottomLineButton");
static_assert(sizeof(UI_ToastMessage_BottomLineButton_C_ExecuteUbergraph_UI_ToastMessage_BottomLineButton) == 0x000010, "Wrong size on UI_ToastMessage_BottomLineButton_C_ExecuteUbergraph_UI_ToastMessage_BottomLineButton");
static_assert(offsetof(UI_ToastMessage_BottomLineButton_C_ExecuteUbergraph_UI_ToastMessage_BottomLineButton, EntryPoint) == 0x000000, "Member 'UI_ToastMessage_BottomLineButton_C_ExecuteUbergraph_UI_ToastMessage_BottomLineButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ToastMessage_BottomLineButton_C_ExecuteUbergraph_UI_ToastMessage_BottomLineButton, K2Node_CustomEvent_AkEvent) == 0x000008, "Member 'UI_ToastMessage_BottomLineButton_C_ExecuteUbergraph_UI_ToastMessage_BottomLineButton::K2Node_CustomEvent_AkEvent' has a wrong offset!");

// Function UI_ToastMessage_BottomLineButton.UI_ToastMessage_BottomLineButton_C.UIplayakevent
// 0x0008 (0x0008 - 0x0000)
struct UI_ToastMessage_BottomLineButton_C_UIplayakevent final
{
public:
	class UAkAudioEvent*                          AkEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ToastMessage_BottomLineButton_C_UIplayakevent) == 0x000008, "Wrong alignment on UI_ToastMessage_BottomLineButton_C_UIplayakevent");
static_assert(sizeof(UI_ToastMessage_BottomLineButton_C_UIplayakevent) == 0x000008, "Wrong size on UI_ToastMessage_BottomLineButton_C_UIplayakevent");
static_assert(offsetof(UI_ToastMessage_BottomLineButton_C_UIplayakevent, AkEvent) == 0x000000, "Member 'UI_ToastMessage_BottomLineButton_C_UIplayakevent::AkEvent' has a wrong offset!");

// Function UI_ToastMessage_BottomLineButton.UI_ToastMessage_BottomLineButton_C.BP_IsVisibleToast
// 0x0018 (0x0018 - 0x0000)
struct UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRenderOpacity_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast) == 0x000008, "Wrong alignment on UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast");
static_assert(sizeof(UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast) == 0x000018, "Wrong size on UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast");
static_assert(offsetof(UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast, ReturnValue) == 0x000000, "Member 'UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast, CallFunc_GetRenderOpacity_ReturnValue) == 0x000004, "Member 'UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast::CallFunc_GetRenderOpacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast, CallFunc_Not_PreBool_ReturnValue) == 0x000009, "Member 'UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast, CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast) == 0x000010, "Member 'UI_ToastMessage_BottomLineButton_C_BP_IsVisibleToast::CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast' has a wrong offset!");

}
