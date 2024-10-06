#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ValbyRune03Value

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function ValbyRune03Value.ValbyRune03Value_C.CalculateValue
// 0x0070 (0x0070 - 0x0000)
struct ValbyRune03Value_C_CalculateValue final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1ScaledInteger                       ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	int32                                         TouchedEnemyCountMax;                              // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BonusDamageValue;                                  // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TouchedEnemyCount;                                 // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_FromInt_ReturnValue;                      // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue_1;                  // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromInt_ReturnValue_1;                    // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_1; // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       K2Node_Select_Default;                             // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast_1;         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ValbyRune03Value_C_CalculateValue) == 0x000008, "Wrong alignment on ValbyRune03Value_C_CalculateValue");
static_assert(sizeof(ValbyRune03Value_C_CalculateValue) == 0x000070, "Wrong size on ValbyRune03Value_C_CalculateValue");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, Param) == 0x000000, "Member 'ValbyRune03Value_C_CalculateValue::Param' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, ReturnValue) == 0x000008, "Member 'ValbyRune03Value_C_CalculateValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, TouchedEnemyCountMax) == 0x000010, "Member 'ValbyRune03Value_C_CalculateValue::TouchedEnemyCountMax' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, BonusDamageValue) == 0x000018, "Member 'ValbyRune03Value_C_CalculateValue::BonusDamageValue' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, TouchedEnemyCount) == 0x000020, "Member 'ValbyRune03Value_C_CalculateValue::TouchedEnemyCount' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, Temp_bool_Variable) == 0x000024, "Member 'ValbyRune03Value_C_CalculateValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, CallFunc_FromInt_ReturnValue) == 0x000028, "Member 'ValbyRune03Value_C_CalculateValue::CallFunc_FromInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'ValbyRune03Value_C_CalculateValue::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, CallFunc_FromFloat_ReturnValue) == 0x000038, "Member 'ValbyRune03Value_C_CalculateValue::CallFunc_FromFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue) == 0x000040, "Member 'ValbyRune03Value_C_CalculateValue::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, CallFunc_FromFloat_ReturnValue_1) == 0x000048, "Member 'ValbyRune03Value_C_CalculateValue::CallFunc_FromFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, CallFunc_FromInt_ReturnValue_1) == 0x000050, "Member 'ValbyRune03Value_C_CalculateValue::CallFunc_FromInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_1) == 0x000058, "Member 'ValbyRune03Value_C_CalculateValue::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, K2Node_Select_Default) == 0x000060, "Member 'ValbyRune03Value_C_CalculateValue::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, CallFunc_FromFloat_InValue_ImplicitCast) == 0x000068, "Member 'ValbyRune03Value_C_CalculateValue::CallFunc_FromFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ValbyRune03Value_C_CalculateValue, CallFunc_FromFloat_InValue_ImplicitCast_1) == 0x00006C, "Member 'ValbyRune03Value_C_CalculateValue::CallFunc_FromFloat_InValue_ImplicitCast_1' has a wrong offset!");

}

