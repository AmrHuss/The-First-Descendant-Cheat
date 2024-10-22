#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_RuneBoard

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPL_RuneBoard.BPL_RuneBoard_C.Does Stat Increase Has Positive Effect
// 0x0030 (0x0030 - 0x0000)
struct BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect final
{
public:
	EM1StatType                                   Stat_Type;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          HasPositiveEffect;                                 // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EM1StatType>                           K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect) == 0x000008, "Wrong alignment on BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect");
static_assert(sizeof(BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect) == 0x000030, "Wrong size on BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect");
static_assert(offsetof(BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect, Stat_Type) == 0x000000, "Member 'BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect::Stat_Type' has a wrong offset!");
static_assert(offsetof(BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect, __WorldContext) == 0x000008, "Member 'BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect, HasPositiveEffect) == 0x000010, "Member 'BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect::HasPositiveEffect' has a wrong offset!");
static_assert(offsetof(BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect, K2Node_MakeArray_Array) == 0x000018, "Member 'BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect, CallFunc_Array_Contains_ReturnValue) == 0x000028, "Member 'BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'BPL_RuneBoard_C_Does_Stat_Increase_Has_Positive_Effect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BPL_RuneBoard.BPL_RuneBoard_C.GetDesiredOffsetColor
// 0x0078 (0x0078 - 0x0000)
struct BPL_RuneBoard_C_GetDesiredOffsetColor final
{
public:
	EM1RuneBoardOffsetColorType                   Offset_Color_Type;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NewParam;                                          // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1RuneBoardOffsetColorType                   Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_RuneBoard_C_GetDesiredOffsetColor) == 0x000008, "Wrong alignment on BPL_RuneBoard_C_GetDesiredOffsetColor");
static_assert(sizeof(BPL_RuneBoard_C_GetDesiredOffsetColor) == 0x000078, "Wrong size on BPL_RuneBoard_C_GetDesiredOffsetColor");
static_assert(offsetof(BPL_RuneBoard_C_GetDesiredOffsetColor, Offset_Color_Type) == 0x000000, "Member 'BPL_RuneBoard_C_GetDesiredOffsetColor::Offset_Color_Type' has a wrong offset!");
static_assert(offsetof(BPL_RuneBoard_C_GetDesiredOffsetColor, __WorldContext) == 0x000008, "Member 'BPL_RuneBoard_C_GetDesiredOffsetColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_RuneBoard_C_GetDesiredOffsetColor, NewParam) == 0x000010, "Member 'BPL_RuneBoard_C_GetDesiredOffsetColor::NewParam' has a wrong offset!");
static_assert(offsetof(BPL_RuneBoard_C_GetDesiredOffsetColor, Temp_byte_Variable) == 0x000020, "Member 'BPL_RuneBoard_C_GetDesiredOffsetColor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPL_RuneBoard_C_GetDesiredOffsetColor, Temp_struct_Variable) == 0x000024, "Member 'BPL_RuneBoard_C_GetDesiredOffsetColor::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BPL_RuneBoard_C_GetDesiredOffsetColor, Temp_struct_Variable_1) == 0x000034, "Member 'BPL_RuneBoard_C_GetDesiredOffsetColor::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BPL_RuneBoard_C_GetDesiredOffsetColor, Temp_struct_Variable_2) == 0x000044, "Member 'BPL_RuneBoard_C_GetDesiredOffsetColor::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BPL_RuneBoard_C_GetDesiredOffsetColor, Temp_struct_Variable_3) == 0x000054, "Member 'BPL_RuneBoard_C_GetDesiredOffsetColor::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(BPL_RuneBoard_C_GetDesiredOffsetColor, K2Node_Select_Default) == 0x000064, "Member 'BPL_RuneBoard_C_GetDesiredOffsetColor::K2Node_Select_Default' has a wrong offset!");

}

