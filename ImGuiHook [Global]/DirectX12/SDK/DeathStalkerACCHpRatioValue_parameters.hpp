#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeathStalkerACCHpRatioValue

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function DeathStalkerACCHpRatioValue.DeathStalkerACCHpRatioValue_C.CalculateValue
// 0x0078 (0x0078 - 0x0000)
struct DeathStalkerACCHpRatioValue_C_CalculateValue final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1ScaledInteger                       ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       Final_Value;                                       // 0x0010(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue_1;                  // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromInt_ReturnValue;                      // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromInt_ReturnValue_1;                    // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Equal_ScaledIntScaledInt_ReturnValue;     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_1;                 // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_2;                 // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Divide_ScaledIntScaledInt_ReturnValue;    // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Subtract_ScaledIntScaledInt_ReturnValue;  // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast_1;         // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DeathStalkerACCHpRatioValue_C_CalculateValue) == 0x000008, "Wrong alignment on DeathStalkerACCHpRatioValue_C_CalculateValue");
static_assert(sizeof(DeathStalkerACCHpRatioValue_C_CalculateValue) == 0x000078, "Wrong size on DeathStalkerACCHpRatioValue_C_CalculateValue");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, Param) == 0x000000, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::Param' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, ReturnValue) == 0x000008, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, Final_Value) == 0x000010, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::Final_Value' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, CallFunc_FromFloat_ReturnValue) == 0x000018, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::CallFunc_FromFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, CallFunc_FromFloat_ReturnValue_1) == 0x000020, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::CallFunc_FromFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, CallFunc_FromInt_ReturnValue) == 0x000028, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::CallFunc_FromInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, CallFunc_GetRefStat_ReturnValue) == 0x000030, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::CallFunc_GetRefStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, CallFunc_FromInt_ReturnValue_1) == 0x000038, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::CallFunc_FromInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, CallFunc_Equal_ScaledIntScaledInt_ReturnValue) == 0x000040, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::CallFunc_Equal_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, CallFunc_GetRefStat_ReturnValue_1) == 0x000048, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::CallFunc_GetRefStat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, CallFunc_GetRefStat_ReturnValue_2) == 0x000050, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::CallFunc_GetRefStat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, CallFunc_Divide_ScaledIntScaledInt_ReturnValue) == 0x000058, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::CallFunc_Divide_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, CallFunc_Subtract_ScaledIntScaledInt_ReturnValue) == 0x000060, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::CallFunc_Subtract_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue) == 0x000068, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, CallFunc_FromFloat_InValue_ImplicitCast) == 0x000070, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::CallFunc_FromFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(DeathStalkerACCHpRatioValue_C_CalculateValue, CallFunc_FromFloat_InValue_ImplicitCast_1) == 0x000074, "Member 'DeathStalkerACCHpRatioValue_C_CalculateValue::CallFunc_FromFloat_InValue_ImplicitCast_1' has a wrong offset!");

}

