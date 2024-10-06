#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcSkillRecoveryHpAndShield

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function CalcSkillRecoveryHpAndShield.CalcSkillRecoveryHpAndShield_C.DoCalculation
// 0x0180 (0x0180 - 0x0000)
struct CalcSkillRecoveryHpAndShield_C_DoCalculation final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0138)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1ScaledInteger                       MaxHp;                                             // 0x0140(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   TakeRecoveryCoefficientStatType;                   // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   GiveRecoveryCoefficientStatType;                   // 0x0149(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14A[0x6];                                      // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0150(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_1;                 // 0x0158(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Equal_ScaledIntScaledInt_ReturnValue;     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x0168(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x0170(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CalcSkillRecoveryHpAndShield_C_DoCalculation) == 0x000008, "Wrong alignment on CalcSkillRecoveryHpAndShield_C_DoCalculation");
static_assert(sizeof(CalcSkillRecoveryHpAndShield_C_DoCalculation) == 0x000180, "Wrong size on CalcSkillRecoveryHpAndShield_C_DoCalculation");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_DoCalculation, Param) == 0x000000, "Member 'CalcSkillRecoveryHpAndShield_C_DoCalculation::Param' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_DoCalculation, DamageInfo) == 0x000008, "Member 'CalcSkillRecoveryHpAndShield_C_DoCalculation::DamageInfo' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_DoCalculation, MaxHp) == 0x000140, "Member 'CalcSkillRecoveryHpAndShield_C_DoCalculation::MaxHp' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_DoCalculation, TakeRecoveryCoefficientStatType) == 0x000148, "Member 'CalcSkillRecoveryHpAndShield_C_DoCalculation::TakeRecoveryCoefficientStatType' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_DoCalculation, GiveRecoveryCoefficientStatType) == 0x000149, "Member 'CalcSkillRecoveryHpAndShield_C_DoCalculation::GiveRecoveryCoefficientStatType' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_DoCalculation, CallFunc_GetRefStat_ReturnValue) == 0x000150, "Member 'CalcSkillRecoveryHpAndShield_C_DoCalculation::CallFunc_GetRefStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_DoCalculation, CallFunc_GetRefStat_ReturnValue_1) == 0x000158, "Member 'CalcSkillRecoveryHpAndShield_C_DoCalculation::CallFunc_GetRefStat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_DoCalculation, CallFunc_Equal_ScaledIntScaledInt_ReturnValue) == 0x000160, "Member 'CalcSkillRecoveryHpAndShield_C_DoCalculation::CallFunc_Equal_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_DoCalculation, CallFunc_FromFloat_ReturnValue) == 0x000168, "Member 'CalcSkillRecoveryHpAndShield_C_DoCalculation::CallFunc_FromFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_DoCalculation, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue) == 0x000170, "Member 'CalcSkillRecoveryHpAndShield_C_DoCalculation::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_DoCalculation, CallFunc_FromFloat_InValue_ImplicitCast) == 0x000178, "Member 'CalcSkillRecoveryHpAndShield_C_DoCalculation::CallFunc_FromFloat_InValue_ImplicitCast' has a wrong offset!");

// Function CalcSkillRecoveryHpAndShield.CalcSkillRecoveryHpAndShield_C.SetRecoveryOutModifier
// 0x0188 (0x0188 - 0x0000)
struct CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0138)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1AbilityOpExecCalcOutput             Output;                                            // 0x0140(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EM1StatType                                   RecoveryStatType_0;                                // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1StatTypeOpValue                     K2Node_MakeStruct_M1StatTypeOpValue;               // 0x0158(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0170(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_1;                 // 0x0178(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Equal_ScaledIntScaledInt_ReturnValue;     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier) == 0x000008, "Wrong alignment on CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier");
static_assert(sizeof(CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier) == 0x000188, "Wrong size on CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier, Param) == 0x000000, "Member 'CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier::Param' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier, DamageInfo) == 0x000008, "Member 'CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier::DamageInfo' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier, Output) == 0x000140, "Member 'CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier::Output' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier, RecoveryStatType_0) == 0x000150, "Member 'CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier::RecoveryStatType_0' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier, K2Node_MakeStruct_M1StatTypeOpValue) == 0x000158, "Member 'CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier::K2Node_MakeStruct_M1StatTypeOpValue' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier, CallFunc_Array_Add_ReturnValue) == 0x000168, "Member 'CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier, CallFunc_GetRefStat_ReturnValue) == 0x000170, "Member 'CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier::CallFunc_GetRefStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier, CallFunc_GetRefStat_ReturnValue_1) == 0x000178, "Member 'CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier::CallFunc_GetRefStat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier, CallFunc_Equal_ScaledIntScaledInt_ReturnValue) == 0x000180, "Member 'CalcSkillRecoveryHpAndShield_C_SetRecoveryOutModifier::CallFunc_Equal_ScaledIntScaledInt_ReturnValue' has a wrong offset!");

}
