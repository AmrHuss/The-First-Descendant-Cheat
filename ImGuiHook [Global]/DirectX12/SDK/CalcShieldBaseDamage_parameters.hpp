#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcShieldBaseDamage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function CalcShieldBaseDamage.CalcShieldBaseDamage_C.DoCalculation
// 0x02A8 (0x02A8 - 0x0000)
struct CalcShieldBaseDamage_C_DoCalculation final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0138)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	EM1MonsterCategory                            MonsterCategory;                                   // 0x0140(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0148(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_ScaledIntScaledInt_ReturnValue;   // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue;       // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_GetDamageRatio_Ratio;                     // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0170(0x0018)()
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x0188(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0190(0x0050)(HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x01E0(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetDamageRatio_Ratio_1;                   // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0200(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0218(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0268(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0278(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CalcShieldBaseDamage_C_DoCalculation) == 0x000008, "Wrong alignment on CalcShieldBaseDamage_C_DoCalculation");
static_assert(sizeof(CalcShieldBaseDamage_C_DoCalculation) == 0x0002A8, "Wrong size on CalcShieldBaseDamage_C_DoCalculation");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, Param) == 0x000000, "Member 'CalcShieldBaseDamage_C_DoCalculation::Param' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, DamageInfo) == 0x000008, "Member 'CalcShieldBaseDamage_C_DoCalculation::DamageInfo' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, MonsterCategory) == 0x000140, "Member 'CalcShieldBaseDamage_C_DoCalculation::MonsterCategory' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, CallFunc_GetRefStat_ReturnValue) == 0x000148, "Member 'CalcShieldBaseDamage_C_DoCalculation::CallFunc_GetRefStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, CallFunc_Greater_ScaledIntScaledInt_ReturnValue) == 0x000150, "Member 'CalcShieldBaseDamage_C_DoCalculation::CallFunc_Greater_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue) == 0x000158, "Member 'CalcShieldBaseDamage_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, CallFunc_GetDamageRatio_Ratio) == 0x000168, "Member 'CalcShieldBaseDamage_C_DoCalculation::CallFunc_GetDamageRatio_Ratio' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue) == 0x000170, "Member 'CalcShieldBaseDamage_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, CallFunc_FromFloat_ReturnValue) == 0x000188, "Member 'CalcShieldBaseDamage_C_DoCalculation::CallFunc_FromFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData) == 0x000190, "Member 'CalcShieldBaseDamage_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue) == 0x0001E0, "Member 'CalcShieldBaseDamage_C_DoCalculation::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, CallFunc_GetDamageRatio_Ratio_1) == 0x0001E8, "Member 'CalcShieldBaseDamage_C_DoCalculation::CallFunc_GetDamageRatio_Ratio_1' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, CallFunc_Conv_DoubleToString_ReturnValue) == 0x0001F0, "Member 'CalcShieldBaseDamage_C_DoCalculation::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000200, "Member 'CalcShieldBaseDamage_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_1) == 0x000218, "Member 'CalcShieldBaseDamage_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, K2Node_MakeArray_Array) == 0x000268, "Member 'CalcShieldBaseDamage_C_DoCalculation::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, CallFunc_Format_ReturnValue) == 0x000278, "Member 'CalcShieldBaseDamage_C_DoCalculation::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, CallFunc_Conv_TextToString_ReturnValue) == 0x000290, "Member 'CalcShieldBaseDamage_C_DoCalculation::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_DoCalculation, CallFunc_FromFloat_InValue_ImplicitCast) == 0x0002A0, "Member 'CalcShieldBaseDamage_C_DoCalculation::CallFunc_FromFloat_InValue_ImplicitCast' has a wrong offset!");

// Function CalcShieldBaseDamage.CalcShieldBaseDamage_C.GetDamageRatio
// 0x00D8 (0x00D8 - 0x0000)
struct CalcShieldBaseDamage_C_GetDamageRatio final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	double                                        Ratio;                                             // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_ScaledIntToFloat_ReturnValue;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_1;                 // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_ScaledIntToFloat_ReturnValue_1;      // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_3;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_2;                 // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_ScaledIntToFloat_ReturnValue_2;      // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_2;                     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_3;                 // 0x0090(0x0008)(NoDestructor, HasGetValueTypeHash)
	EM1MonsterCategory                            CallFunc_GetMonsterCategoryFromOpTarget_ReturnValue; // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_ScaledIntToFloat_ReturnValue_3;      // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_3;                     // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3;   // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CalcShieldBaseDamage_C_GetDamageRatio) == 0x000008, "Wrong alignment on CalcShieldBaseDamage_C_GetDamageRatio");
static_assert(sizeof(CalcShieldBaseDamage_C_GetDamageRatio) == 0x0000D8, "Wrong size on CalcShieldBaseDamage_C_GetDamageRatio");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, Param) == 0x000000, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::Param' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, Ratio) == 0x000008, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::Ratio' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_GetRefStat_ReturnValue) == 0x000018, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_GetRefStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000020, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Conv_ScaledIntToFloat_ReturnValue) == 0x000028, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Conv_ScaledIntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000030, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_FClamp_ReturnValue) == 0x000040, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_GetRefStat_ReturnValue_1) == 0x000048, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_GetRefStat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Conv_ScaledIntToFloat_ReturnValue_1) == 0x000050, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Conv_ScaledIntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Divide_DoubleDouble_ReturnValue_3) == 0x000058, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Divide_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_GetRefStat_ReturnValue_2) == 0x000060, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_GetRefStat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000068, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Conv_ScaledIntToFloat_ReturnValue_2) == 0x000070, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Conv_ScaledIntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000078, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_FClamp_ReturnValue_1) == 0x000080, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_FClamp_ReturnValue_2) == 0x000088, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_GetRefStat_ReturnValue_3) == 0x000090, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_GetRefStat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_GetMonsterCategoryFromOpTarget_ReturnValue) == 0x000098, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_GetMonsterCategoryFromOpTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Conv_ScaledIntToFloat_ReturnValue_3) == 0x00009C, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Conv_ScaledIntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, K2Node_SwitchEnum_CmpSuccess) == 0x0000A0, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x0000A8, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_FClamp_ReturnValue_3) == 0x0000B0, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_FClamp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000B8, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x0000C0, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2) == 0x0000C8, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(CalcShieldBaseDamage_C_GetDamageRatio, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3) == 0x0000D0, "Member 'CalcShieldBaseDamage_C_GetDamageRatio::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3' has a wrong offset!");

}

