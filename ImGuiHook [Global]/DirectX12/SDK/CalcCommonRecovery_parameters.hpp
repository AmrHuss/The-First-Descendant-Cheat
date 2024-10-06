#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcCommonRecovery

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function CalcCommonRecovery.CalcCommonRecovery_C.DoCalculation
// 0x03C0 (0x03C0 - 0x0000)
struct CalcCommonRecovery_C_DoCalculation final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0138)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0140(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue;       // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_1;     // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0168(0x0018)()
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0188(0x0050)(HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01E0(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_DetermineRecoveryCoefficient_UseRecoveryCoefficient; // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   CallFunc_DetermineRecoveryCoefficient_TakeRecoveryCoefficient; // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   CallFunc_DetermineRecoveryCoefficient_GiveRecoveryCoefficient; // 0x0232(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_233[0x5];                                      // 0x0233(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0248(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0260(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x02C0(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0310(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0328(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0378(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0388(0x0018)()
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerOne_ReturnValue;             // 0x03A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x03A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerMax_ReturnValue;             // 0x03B8(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CalcCommonRecovery_C_DoCalculation) == 0x000008, "Wrong alignment on CalcCommonRecovery_C_DoCalculation");
static_assert(sizeof(CalcCommonRecovery_C_DoCalculation) == 0x0003C0, "Wrong size on CalcCommonRecovery_C_DoCalculation");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, Param) == 0x000000, "Member 'CalcCommonRecovery_C_DoCalculation::Param' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, DamageInfo) == 0x000008, "Member 'CalcCommonRecovery_C_DoCalculation::DamageInfo' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_GetRefStat_ReturnValue) == 0x000140, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_GetRefStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue) == 0x000148, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue_1) == 0x000158, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue) == 0x000168, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_Conv_StringToInt_ReturnValue) == 0x000180, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData) == 0x000188, "Member 'CalcCommonRecovery_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_Conv_IntToInt64_ReturnValue) == 0x0001D8, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001E0, "Member 'CalcCommonRecovery_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_DetermineRecoveryCoefficient_UseRecoveryCoefficient) == 0x000230, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_DetermineRecoveryCoefficient_UseRecoveryCoefficient' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_DetermineRecoveryCoefficient_TakeRecoveryCoefficient) == 0x000231, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_DetermineRecoveryCoefficient_TakeRecoveryCoefficient' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_DetermineRecoveryCoefficient_GiveRecoveryCoefficient) == 0x000232, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_DetermineRecoveryCoefficient_GiveRecoveryCoefficient' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000238, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000248, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_2) == 0x000260, "Member 'CalcCommonRecovery_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1) == 0x0002B0, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_3) == 0x0002C0, "Member 'CalcCommonRecovery_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000310, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_4) == 0x000328, "Member 'CalcCommonRecovery_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, K2Node_MakeArray_Array) == 0x000378, "Member 'CalcCommonRecovery_C_DoCalculation::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_Format_ReturnValue) == 0x000388, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_ScaledIntegerOne_ReturnValue) == 0x0003A0, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_ScaledIntegerOne_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_Conv_TextToString_ReturnValue) == 0x0003A8, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcCommonRecovery_C_DoCalculation, CallFunc_ScaledIntegerMax_ReturnValue) == 0x0003B8, "Member 'CalcCommonRecovery_C_DoCalculation::CallFunc_ScaledIntegerMax_ReturnValue' has a wrong offset!");

}

