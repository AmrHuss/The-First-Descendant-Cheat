#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BunnyCommonGauge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function BunnyCommonGauge.BunnyCommonGauge_C.DoCalculation
// 0x0228 (0x0228 - 0x0000)
struct BunnyCommonGauge_C_DoCalculation final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0138)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1AbilityOpExecCalcOutput             Output;                                            // 0x0140(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x0150(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1StatTypeOpValue                     K2Node_MakeStruct_M1StatTypeOpValue;               // 0x0158(0x0010)(NoDestructor)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue;       // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0180(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0198(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01F8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BunnyCommonGauge_C_DoCalculation) == 0x000008, "Wrong alignment on BunnyCommonGauge_C_DoCalculation");
static_assert(sizeof(BunnyCommonGauge_C_DoCalculation) == 0x000228, "Wrong size on BunnyCommonGauge_C_DoCalculation");
static_assert(offsetof(BunnyCommonGauge_C_DoCalculation, Param) == 0x000000, "Member 'BunnyCommonGauge_C_DoCalculation::Param' has a wrong offset!");
static_assert(offsetof(BunnyCommonGauge_C_DoCalculation, DamageInfo) == 0x000008, "Member 'BunnyCommonGauge_C_DoCalculation::DamageInfo' has a wrong offset!");
static_assert(offsetof(BunnyCommonGauge_C_DoCalculation, Output) == 0x000140, "Member 'BunnyCommonGauge_C_DoCalculation::Output' has a wrong offset!");
static_assert(offsetof(BunnyCommonGauge_C_DoCalculation, CallFunc_FromFloat_ReturnValue) == 0x000150, "Member 'BunnyCommonGauge_C_DoCalculation::CallFunc_FromFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BunnyCommonGauge_C_DoCalculation, K2Node_MakeStruct_M1StatTypeOpValue) == 0x000158, "Member 'BunnyCommonGauge_C_DoCalculation::K2Node_MakeStruct_M1StatTypeOpValue' has a wrong offset!");
static_assert(offsetof(BunnyCommonGauge_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue) == 0x000168, "Member 'BunnyCommonGauge_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BunnyCommonGauge_C_DoCalculation, CallFunc_Array_Add_ReturnValue) == 0x000178, "Member 'BunnyCommonGauge_C_DoCalculation::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BunnyCommonGauge_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue) == 0x000180, "Member 'BunnyCommonGauge_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BunnyCommonGauge_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData) == 0x000198, "Member 'BunnyCommonGauge_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BunnyCommonGauge_C_DoCalculation, K2Node_MakeArray_Array) == 0x0001E8, "Member 'BunnyCommonGauge_C_DoCalculation::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BunnyCommonGauge_C_DoCalculation, CallFunc_Format_ReturnValue) == 0x0001F8, "Member 'BunnyCommonGauge_C_DoCalculation::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BunnyCommonGauge_C_DoCalculation, CallFunc_Conv_TextToString_ReturnValue) == 0x000210, "Member 'BunnyCommonGauge_C_DoCalculation::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BunnyCommonGauge_C_DoCalculation, CallFunc_FromFloat_InValue_ImplicitCast) == 0x000220, "Member 'BunnyCommonGauge_C_DoCalculation::CallFunc_FromFloat_InValue_ImplicitCast' has a wrong offset!");

}

