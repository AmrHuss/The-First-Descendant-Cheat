#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_KeyButton_Symbol

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function UI_KeyButton_Symbol.UI_KeyButton_Symbol_C.BP_ChangeButtonUI
// 0x0001 (0x0001 - 0x0000)
struct UI_KeyButton_Symbol_C_BP_ChangeButtonUI final
{
public:
	EM1ButtonUIType                               InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_KeyButton_Symbol_C_BP_ChangeButtonUI) == 0x000001, "Wrong alignment on UI_KeyButton_Symbol_C_BP_ChangeButtonUI");
static_assert(sizeof(UI_KeyButton_Symbol_C_BP_ChangeButtonUI) == 0x000001, "Wrong size on UI_KeyButton_Symbol_C_BP_ChangeButtonUI");
static_assert(offsetof(UI_KeyButton_Symbol_C_BP_ChangeButtonUI, InType) == 0x000000, "Member 'UI_KeyButton_Symbol_C_BP_ChangeButtonUI::InType' has a wrong offset!");

// Function UI_KeyButton_Symbol.UI_KeyButton_Symbol_C.BP_ChangeDimmedUI
// 0x0001 (0x0001 - 0x0000)
struct UI_KeyButton_Symbol_C_BP_ChangeDimmedUI final
{
public:
	bool                                          InDimmed;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_KeyButton_Symbol_C_BP_ChangeDimmedUI) == 0x000001, "Wrong alignment on UI_KeyButton_Symbol_C_BP_ChangeDimmedUI");
static_assert(sizeof(UI_KeyButton_Symbol_C_BP_ChangeDimmedUI) == 0x000001, "Wrong size on UI_KeyButton_Symbol_C_BP_ChangeDimmedUI");
static_assert(offsetof(UI_KeyButton_Symbol_C_BP_ChangeDimmedUI, InDimmed) == 0x000000, "Member 'UI_KeyButton_Symbol_C_BP_ChangeDimmedUI::InDimmed' has a wrong offset!");

// Function UI_KeyButton_Symbol.UI_KeyButton_Symbol_C.ExecuteUbergraph_UI_KeyButton_Symbol
// 0x0058 (0x0058 - 0x0000)
struct UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0018(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ButtonUIType                               K2Node_Event_InType;                               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_InDimmed;                             // 0x002A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AM1PlayerController*                    K2Node_DynamicCast_AsM1Player_Controller;          // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AkComponent*                         CallFunc_GetAkComponent_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol) == 0x000008, "Wrong alignment on UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol");
static_assert(sizeof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol) == 0x000058, "Wrong size on UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol");
static_assert(offsetof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol, EntryPoint) == 0x000000, "Member 'UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol, Temp_struct_Variable) == 0x000008, "Member 'UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol, Temp_delegate_Variable) == 0x000018, "Member 'UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol, K2Node_Event_IsDesignTime) == 0x000028, "Member 'UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol, K2Node_Event_InType) == 0x000029, "Member 'UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol::K2Node_Event_InType' has a wrong offset!");
static_assert(offsetof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol, K2Node_Event_InDimmed) == 0x00002A, "Member 'UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol::K2Node_Event_InDimmed' has a wrong offset!");
static_assert(offsetof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol, K2Node_SwitchEnum_CmpSuccess) == 0x00002B, "Member 'UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol, CallFunc_GetOwningPlayer_ReturnValue) == 0x000030, "Member 'UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol, K2Node_DynamicCast_AsM1Player_Controller) == 0x000038, "Member 'UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol::K2Node_DynamicCast_AsM1Player_Controller' has a wrong offset!");
static_assert(offsetof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol, CallFunc_GetAkComponent_ReturnValue) == 0x000048, "Member 'UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol::CallFunc_GetAkComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol, CallFunc_PostEvent_ReturnValue) == 0x000050, "Member 'UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol::CallFunc_PostEvent_ReturnValue' has a wrong offset!");

// Function UI_KeyButton_Symbol.UI_KeyButton_Symbol_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_KeyButton_Symbol_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_KeyButton_Symbol_C_PreConstruct) == 0x000001, "Wrong alignment on UI_KeyButton_Symbol_C_PreConstruct");
static_assert(sizeof(UI_KeyButton_Symbol_C_PreConstruct) == 0x000001, "Wrong size on UI_KeyButton_Symbol_C_PreConstruct");
static_assert(offsetof(UI_KeyButton_Symbol_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_KeyButton_Symbol_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

