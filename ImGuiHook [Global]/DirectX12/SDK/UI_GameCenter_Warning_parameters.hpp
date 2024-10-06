#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameCenter_Warning

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_GameCenter_Warning.UI_GameCenter_Warning_C.BP_ShowMessage
// 0x0002 (0x0002 - 0x0000)
struct UI_GameCenter_Warning_C_BP_ShowMessage final
{
public:
	EGameCenterMessageType                        InType;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLooping;                                        // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameCenter_Warning_C_BP_ShowMessage) == 0x000001, "Wrong alignment on UI_GameCenter_Warning_C_BP_ShowMessage");
static_assert(sizeof(UI_GameCenter_Warning_C_BP_ShowMessage) == 0x000002, "Wrong size on UI_GameCenter_Warning_C_BP_ShowMessage");
static_assert(offsetof(UI_GameCenter_Warning_C_BP_ShowMessage, InType) == 0x000000, "Member 'UI_GameCenter_Warning_C_BP_ShowMessage::InType' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_BP_ShowMessage, bIsLooping) == 0x000001, "Member 'UI_GameCenter_Warning_C_BP_ShowMessage::bIsLooping' has a wrong offset!");

// Function UI_GameCenter_Warning.UI_GameCenter_Warning_C.ExecuteUbergraph_UI_GameCenter_Warning
// 0x0020 (0x0020 - 0x0000)
struct UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameCenterMessageType                        K2Node_Event_InType;                               // 0x0005(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsLooping;                           // 0x0006(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning) == 0x000008, "Wrong alignment on UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning");
static_assert(sizeof(UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning) == 0x000020, "Wrong size on UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning");
static_assert(offsetof(UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning, EntryPoint) == 0x000000, "Member 'UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning, K2Node_Event_InType) == 0x000005, "Member 'UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning::K2Node_Event_InType' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning, K2Node_Event_bIsLooping) == 0x000006, "Member 'UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning::K2Node_Event_bIsLooping' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000018, "Member 'UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning, CallFunc_BooleanOR_ReturnValue) == 0x000019, "Member 'UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function UI_GameCenter_Warning.UI_GameCenter_Warning_C.SequenceEvent_0
// 0x0010 (0x0010 - 0x0000)
struct UI_GameCenter_Warning_C_SequenceEvent_0 final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameCenter_Warning_C_SequenceEvent_0) == 0x000008, "Wrong alignment on UI_GameCenter_Warning_C_SequenceEvent_0");
static_assert(sizeof(UI_GameCenter_Warning_C_SequenceEvent_0) == 0x000010, "Wrong size on UI_GameCenter_Warning_C_SequenceEvent_0");
static_assert(offsetof(UI_GameCenter_Warning_C_SequenceEvent_0, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UI_GameCenter_Warning_C_SequenceEvent_0::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_SequenceEvent_0, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000008, "Member 'UI_GameCenter_Warning_C_SequenceEvent_0::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function UI_GameCenter_Warning.UI_GameCenter_Warning_C.UpdateText
// 0x0078 (0x0078 - 0x0000)
struct UI_GameCenter_Warning_C_UpdateText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                           Color;                                             // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BG_color;                                          // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0014)()
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0060(0x0014)()
};
static_assert(alignof(UI_GameCenter_Warning_C_UpdateText) == 0x000008, "Wrong alignment on UI_GameCenter_Warning_C_UpdateText");
static_assert(sizeof(UI_GameCenter_Warning_C_UpdateText) == 0x000078, "Wrong size on UI_GameCenter_Warning_C_UpdateText");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateText, Text) == 0x000000, "Member 'UI_GameCenter_Warning_C_UpdateText::Text' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateText, Color) == 0x000018, "Member 'UI_GameCenter_Warning_C_UpdateText::Color' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateText, BG_color) == 0x000028, "Member 'UI_GameCenter_Warning_C_UpdateText::BG_color' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateText, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'UI_GameCenter_Warning_C_UpdateText::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateText, CallFunc_Conv_TextToString_ReturnValue) == 0x000050, "Member 'UI_GameCenter_Warning_C_UpdateText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateText, K2Node_MakeStruct_SlateColor_1) == 0x000060, "Member 'UI_GameCenter_Warning_C_UpdateText::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function UI_GameCenter_Warning.UI_GameCenter_Warning_C.UpdateTextByType
// 0x0128 (0x0128 - 0x0000)
struct UI_GameCenter_Warning_C_UpdateTextByType final
{
public:
	EGameCenterMessageType                        InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameCenterMessageType                        Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameCenterMessageType                        Temp_byte_Variable_1;                              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_4;                            // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_5;                            // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_6;                            // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_7;                            // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameCenterMessageType                        Temp_byte_Variable_2;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x009C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x00B0(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x00C8(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x00E0(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x00F8(0x0018)()
	class FText                                   K2Node_Select_Default_2;                           // 0x0110(0x0018)()
};
static_assert(alignof(UI_GameCenter_Warning_C_UpdateTextByType) == 0x000008, "Wrong alignment on UI_GameCenter_Warning_C_UpdateTextByType");
static_assert(sizeof(UI_GameCenter_Warning_C_UpdateTextByType) == 0x000128, "Wrong size on UI_GameCenter_Warning_C_UpdateTextByType");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, InType) == 0x000000, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::InType' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_byte_Variable) == 0x000001, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_struct_Variable) == 0x000004, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_struct_Variable_1) == 0x000014, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_struct_Variable_2) == 0x000024, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_struct_Variable_3) == 0x000034, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_byte_Variable_1) == 0x000044, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, K2Node_Select_Default) == 0x000048, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_struct_Variable_4) == 0x000058, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_struct_Variable_5) == 0x000068, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_struct_Variable_6) == 0x000078, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_struct_Variable_6' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_struct_Variable_7) == 0x000088, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_struct_Variable_7' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_byte_Variable_2) == 0x000098, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, K2Node_Select_Default_1) == 0x00009C, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_text_Variable) == 0x0000B0, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_text_Variable_1) == 0x0000C8, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_text_Variable_2) == 0x0000E0, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, Temp_text_Variable_3) == 0x0000F8, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_Warning_C_UpdateTextByType, K2Node_Select_Default_2) == 0x000110, "Member 'UI_GameCenter_Warning_C_UpdateTextByType::K2Node_Select_Default_2' has a wrong offset!");

}
