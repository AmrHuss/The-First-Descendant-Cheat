#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcMpRatioRecovery

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function CalcMpRatioRecovery.CalcMpRatioRecovery_C.DoCalculation
// 0x02C0 (0x02C0 - 0x0000)
struct CalcMpRatioRecovery_C_DoCalculation final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0138)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1ScaledInteger                       RecoveryRatio;                                     // 0x0140(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   TakeRecoveryCoefficientStatType;                   // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   GiveRecoveryCoefficientStatType;                   // 0x0149(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14A[0x6];                                      // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue;       // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0160(0x0018)()
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_1;     // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0188(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01D8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01F0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0240(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0250(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0278(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x0280(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_1;                 // 0x0288(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_2;                 // 0x0290(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Divide_ScaledIntScaledInt_ReturnValue;    // 0x0298(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_ScaledIntToDouble_ReturnValue;       // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x02B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CalcMpRatioRecovery_C_DoCalculation) == 0x000008, "Wrong alignment on CalcMpRatioRecovery_C_DoCalculation");
static_assert(sizeof(CalcMpRatioRecovery_C_DoCalculation) == 0x0002C0, "Wrong size on CalcMpRatioRecovery_C_DoCalculation");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, Param) == 0x000000, "Member 'CalcMpRatioRecovery_C_DoCalculation::Param' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, DamageInfo) == 0x000008, "Member 'CalcMpRatioRecovery_C_DoCalculation::DamageInfo' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, RecoveryRatio) == 0x000140, "Member 'CalcMpRatioRecovery_C_DoCalculation::RecoveryRatio' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, TakeRecoveryCoefficientStatType) == 0x000148, "Member 'CalcMpRatioRecovery_C_DoCalculation::TakeRecoveryCoefficientStatType' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, GiveRecoveryCoefficientStatType) == 0x000149, "Member 'CalcMpRatioRecovery_C_DoCalculation::GiveRecoveryCoefficientStatType' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue) == 0x000150, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue) == 0x000160, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue_1) == 0x000178, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData) == 0x000188, "Member 'CalcMpRatioRecovery_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001D8, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001F0, "Member 'CalcMpRatioRecovery_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, K2Node_MakeArray_Array) == 0x000240, "Member 'CalcMpRatioRecovery_C_DoCalculation::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_Format_ReturnValue) == 0x000250, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_Conv_TextToString_ReturnValue) == 0x000268, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_GetRefStat_ReturnValue) == 0x000278, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_GetRefStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue) == 0x000280, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_GetRefStat_ReturnValue_1) == 0x000288, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_GetRefStat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_GetRefStat_ReturnValue_2) == 0x000290, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_GetRefStat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_Divide_ScaledIntScaledInt_ReturnValue) == 0x000298, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_Divide_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_Conv_ScaledIntToDouble_ReturnValue) == 0x0002A0, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_Conv_ScaledIntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_FClamp_ReturnValue) == 0x0002A8, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_FromFloat_ReturnValue) == 0x0002B0, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_FromFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_DoCalculation, CallFunc_FromFloat_InValue_ImplicitCast) == 0x0002B8, "Member 'CalcMpRatioRecovery_C_DoCalculation::CallFunc_FromFloat_InValue_ImplicitCast' has a wrong offset!");

// Function CalcMpRatioRecovery.CalcMpRatioRecovery_C.SetRecoveryOutModifier
// 0x0198 (0x0198 - 0x0000)
struct CalcMpRatioRecovery_C_SetRecoveryOutModifier final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0138)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1AbilityOpExecCalcOutput             Output;                                            // 0x0140(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x0150(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1StatTypeOpValue                     K2Node_MakeStruct_M1StatTypeOpValue;               // 0x0158(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0170(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x0178(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1StatTypeOpValue                     K2Node_MakeStruct_M1StatTypeOpValue_1;             // 0x0180(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CalcMpRatioRecovery_C_SetRecoveryOutModifier) == 0x000008, "Wrong alignment on CalcMpRatioRecovery_C_SetRecoveryOutModifier");
static_assert(sizeof(CalcMpRatioRecovery_C_SetRecoveryOutModifier) == 0x000198, "Wrong size on CalcMpRatioRecovery_C_SetRecoveryOutModifier");
static_assert(offsetof(CalcMpRatioRecovery_C_SetRecoveryOutModifier, Param) == 0x000000, "Member 'CalcMpRatioRecovery_C_SetRecoveryOutModifier::Param' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_SetRecoveryOutModifier, DamageInfo) == 0x000008, "Member 'CalcMpRatioRecovery_C_SetRecoveryOutModifier::DamageInfo' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_SetRecoveryOutModifier, Output) == 0x000140, "Member 'CalcMpRatioRecovery_C_SetRecoveryOutModifier::Output' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_SetRecoveryOutModifier, CallFunc_FromFloat_ReturnValue) == 0x000150, "Member 'CalcMpRatioRecovery_C_SetRecoveryOutModifier::CallFunc_FromFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_SetRecoveryOutModifier, K2Node_MakeStruct_M1StatTypeOpValue) == 0x000158, "Member 'CalcMpRatioRecovery_C_SetRecoveryOutModifier::K2Node_MakeStruct_M1StatTypeOpValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_SetRecoveryOutModifier, CallFunc_Array_Add_ReturnValue) == 0x000168, "Member 'CalcMpRatioRecovery_C_SetRecoveryOutModifier::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_SetRecoveryOutModifier, CallFunc_GetRefStat_ReturnValue) == 0x000170, "Member 'CalcMpRatioRecovery_C_SetRecoveryOutModifier::CallFunc_GetRefStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_SetRecoveryOutModifier, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue) == 0x000178, "Member 'CalcMpRatioRecovery_C_SetRecoveryOutModifier::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_SetRecoveryOutModifier, K2Node_MakeStruct_M1StatTypeOpValue_1) == 0x000180, "Member 'CalcMpRatioRecovery_C_SetRecoveryOutModifier::K2Node_MakeStruct_M1StatTypeOpValue_1' has a wrong offset!");
static_assert(offsetof(CalcMpRatioRecovery_C_SetRecoveryOutModifier, CallFunc_Array_Add_ReturnValue_1) == 0x000190, "Member 'CalcMpRatioRecovery_C_SetRecoveryOutModifier::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

}
