#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcInstantDeathDamage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function CalcInstantDeathDamage.CalcInstantDeathDamage_C.DoCalculation
// 0x0260 (0x0260 - 0x0000)
struct CalcInstantDeathDamage_C_DoCalculation final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0138)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1ScaledInteger                       CallFunc_FromInt_ReturnValue;                      // 0x0140(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue;              // 0x0148(0x0018)()
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue;       // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0170(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01C0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01D8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0228(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0238(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CalcInstantDeathDamage_C_DoCalculation) == 0x000008, "Wrong alignment on CalcInstantDeathDamage_C_DoCalculation");
static_assert(sizeof(CalcInstantDeathDamage_C_DoCalculation) == 0x000260, "Wrong size on CalcInstantDeathDamage_C_DoCalculation");
static_assert(offsetof(CalcInstantDeathDamage_C_DoCalculation, Param) == 0x000000, "Member 'CalcInstantDeathDamage_C_DoCalculation::Param' has a wrong offset!");
static_assert(offsetof(CalcInstantDeathDamage_C_DoCalculation, DamageInfo) == 0x000008, "Member 'CalcInstantDeathDamage_C_DoCalculation::DamageInfo' has a wrong offset!");
static_assert(offsetof(CalcInstantDeathDamage_C_DoCalculation, CallFunc_FromInt_ReturnValue) == 0x000140, "Member 'CalcInstantDeathDamage_C_DoCalculation::CallFunc_FromInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcInstantDeathDamage_C_DoCalculation, CallFunc_Conv_BoolToText_ReturnValue) == 0x000148, "Member 'CalcInstantDeathDamage_C_DoCalculation::CallFunc_Conv_BoolToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcInstantDeathDamage_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue) == 0x000160, "Member 'CalcInstantDeathDamage_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcInstantDeathDamage_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData) == 0x000170, "Member 'CalcInstantDeathDamage_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CalcInstantDeathDamage_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue) == 0x0001C0, "Member 'CalcInstantDeathDamage_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcInstantDeathDamage_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001D8, "Member 'CalcInstantDeathDamage_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CalcInstantDeathDamage_C_DoCalculation, K2Node_MakeArray_Array) == 0x000228, "Member 'CalcInstantDeathDamage_C_DoCalculation::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CalcInstantDeathDamage_C_DoCalculation, CallFunc_Format_ReturnValue) == 0x000238, "Member 'CalcInstantDeathDamage_C_DoCalculation::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcInstantDeathDamage_C_DoCalculation, CallFunc_Conv_TextToString_ReturnValue) == 0x000250, "Member 'CalcInstantDeathDamage_C_DoCalculation::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

