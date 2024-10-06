#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShieldInitializeStats

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function ShieldInitializeStats.ShieldInitializeStats_C.Execute
// 0x0330 (0x0330 - 0x0000)
struct ShieldInitializeStats_C_Execute final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1AbilityOpExecCalcOutput             Output;                                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FM1ScaledInteger                       ArcheSkillAttack;                                  // 0x0018(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       ArcheSkillPower;                                   // 0x0020(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue_1;                  // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue_2;                  // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1StatTypeOpValue                     K2Node_MakeStruct_M1StatTypeOpValue;               // 0x0040(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue_3;                  // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromInt_ReturnValue;                      // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue;       // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0070(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_1;     // 0x0078(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_1;                 // 0x0080(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_2;                 // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_3;                 // 0x0090(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_4;                 // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_5;                 // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_6;                 // 0x00A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_7;                 // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_8;                 // 0x00C0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_9;                 // 0x00C8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_2;     // 0x00D0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_3;     // 0x00D8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_10;                // 0x00E0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_11;                // 0x00E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_4;     // 0x00F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x00F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_1; // 0x0100(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_2; // 0x0108(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_3; // 0x0110(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_4; // 0x0118(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue;       // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0130(0x0018)()
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_12;                // 0x0148(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0150(0x0050)(HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_5; // 0x01A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_5;     // 0x01A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_13;                // 0x01B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_1;     // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_6; // 0x01C8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01D0(0x0018)()
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_6;     // 0x01E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01F0(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_2;     // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FM1StatTypeOpValue                     K2Node_MakeStruct_M1StatTypeOpValue_1;             // 0x0250(0x0010)(NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0260(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0280(0x0050)(HasGetValueTypeHash)
	struct FM1StatTypeOpValue                     K2Node_MakeStruct_M1StatTypeOpValue_2;             // 0x02D0(0x0010)(NoDestructor)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x02E0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02F8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast_1;         // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast_2;         // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast_3;         // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShieldInitializeStats_C_Execute) == 0x000008, "Wrong alignment on ShieldInitializeStats_C_Execute");
static_assert(sizeof(ShieldInitializeStats_C_Execute) == 0x000330, "Wrong size on ShieldInitializeStats_C_Execute");
static_assert(offsetof(ShieldInitializeStats_C_Execute, Param) == 0x000000, "Member 'ShieldInitializeStats_C_Execute::Param' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, Output) == 0x000008, "Member 'ShieldInitializeStats_C_Execute::Output' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, ArcheSkillAttack) == 0x000018, "Member 'ShieldInitializeStats_C_Execute::ArcheSkillAttack' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, ArcheSkillPower) == 0x000020, "Member 'ShieldInitializeStats_C_Execute::ArcheSkillPower' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_FromFloat_ReturnValue) == 0x000028, "Member 'ShieldInitializeStats_C_Execute::CallFunc_FromFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_FromFloat_ReturnValue_1) == 0x000030, "Member 'ShieldInitializeStats_C_Execute::CallFunc_FromFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_FromFloat_ReturnValue_2) == 0x000038, "Member 'ShieldInitializeStats_C_Execute::CallFunc_FromFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, K2Node_MakeStruct_M1StatTypeOpValue) == 0x000040, "Member 'ShieldInitializeStats_C_Execute::K2Node_MakeStruct_M1StatTypeOpValue' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_FromFloat_ReturnValue_3) == 0x000058, "Member 'ShieldInitializeStats_C_Execute::CallFunc_FromFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_FromInt_ReturnValue) == 0x000060, "Member 'ShieldInitializeStats_C_Execute::CallFunc_FromInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Add_ScaledIntScaledInt_ReturnValue) == 0x000068, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Add_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue) == 0x000070, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Add_ScaledIntScaledInt_ReturnValue_1) == 0x000078, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Add_ScaledIntScaledInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue_1) == 0x000080, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue_2) == 0x000088, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue_3) == 0x000090, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue_4) == 0x000098, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue_5) == 0x0000A0, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue_6) == 0x0000A8, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue_7) == 0x0000B0, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, K2Node_SwitchEnum_CmpSuccess) == 0x0000B8, "Member 'ShieldInitializeStats_C_Execute::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue_8) == 0x0000C0, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue_9) == 0x0000C8, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Add_ScaledIntScaledInt_ReturnValue_2) == 0x0000D0, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Add_ScaledIntScaledInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Add_ScaledIntScaledInt_ReturnValue_3) == 0x0000D8, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Add_ScaledIntScaledInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue_10) == 0x0000E0, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue_11) == 0x0000E8, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Add_ScaledIntScaledInt_ReturnValue_4) == 0x0000F0, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Add_ScaledIntScaledInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue) == 0x0000F8, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_1) == 0x000100, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_2) == 0x000108, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_3) == 0x000110, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_4) == 0x000118, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Conv_ScaledIntToString_ReturnValue) == 0x000120, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Conv_ScaledIntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Conv_StringToText_ReturnValue) == 0x000130, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue_12) == 0x000148, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, K2Node_MakeStruct_FormatArgumentData) == 0x000150, "Member 'ShieldInitializeStats_C_Execute::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_5) == 0x0001A0, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Add_ScaledIntScaledInt_ReturnValue_5) == 0x0001A8, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Add_ScaledIntScaledInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_GetRefStat_ReturnValue_13) == 0x0001B0, "Member 'ShieldInitializeStats_C_Execute::CallFunc_GetRefStat_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Conv_ScaledIntToString_ReturnValue_1) == 0x0001B8, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Conv_ScaledIntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_6) == 0x0001C8, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001D0, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Add_ScaledIntScaledInt_ReturnValue_6) == 0x0001E8, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Add_ScaledIntScaledInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001F0, "Member 'ShieldInitializeStats_C_Execute::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Conv_ScaledIntToString_ReturnValue_2) == 0x000240, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Conv_ScaledIntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, K2Node_MakeStruct_M1StatTypeOpValue_1) == 0x000250, "Member 'ShieldInitializeStats_C_Execute::K2Node_MakeStruct_M1StatTypeOpValue_1' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000260, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Array_Add_ReturnValue_1) == 0x000278, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, K2Node_MakeStruct_FormatArgumentData_2) == 0x000280, "Member 'ShieldInitializeStats_C_Execute::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, K2Node_MakeStruct_M1StatTypeOpValue_2) == 0x0002D0, "Member 'ShieldInitializeStats_C_Execute::K2Node_MakeStruct_M1StatTypeOpValue_2' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, K2Node_MakeArray_Array) == 0x0002E0, "Member 'ShieldInitializeStats_C_Execute::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Array_Add_ReturnValue_2) == 0x0002F0, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Format_ReturnValue) == 0x0002F8, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_Conv_TextToString_ReturnValue) == 0x000310, "Member 'ShieldInitializeStats_C_Execute::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_FromFloat_InValue_ImplicitCast) == 0x000320, "Member 'ShieldInitializeStats_C_Execute::CallFunc_FromFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_FromFloat_InValue_ImplicitCast_1) == 0x000324, "Member 'ShieldInitializeStats_C_Execute::CallFunc_FromFloat_InValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_FromFloat_InValue_ImplicitCast_2) == 0x000328, "Member 'ShieldInitializeStats_C_Execute::CallFunc_FromFloat_InValue_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(ShieldInitializeStats_C_Execute, CallFunc_FromFloat_InValue_ImplicitCast_3) == 0x00032C, "Member 'ShieldInitializeStats_C_Execute::CallFunc_FromFloat_InValue_ImplicitCast_3' has a wrong offset!");

}

