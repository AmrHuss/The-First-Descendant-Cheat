#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcSkillDamageMonster_New

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function CalcSkillDamageMonster_New.CalcSkillDamageMonster_New_C.DoCalculation
// 0x0538 (0x0538 - 0x0000)
struct CalcSkillDamageMonster_New_C_DoCalculation final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0138)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1ScaledInteger                       SkillDamageDemonic;                                // 0x0140(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       SkillDamageElectricity;                            // 0x0148(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       SkillDamageGlacier;                                // 0x0150(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       SkillDamageBlazer;                                 // 0x0158(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       SkillDamageNormal;                                 // 0x0160(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Determine_Monster_SkillDEF_SkillDEF;      // 0x0168(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0170(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue;       // 0x0178(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_1;     // 0x0180(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_2;     // 0x0188(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_3;     // 0x0198(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_ScaledIntScaledInt_ReturnValue;   // 0x01A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A6[0x2];                                      // 0x01A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerZero_ReturnValue;            // 0x01B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BA[0x2];                                      // 0x01BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Array_Get_Item;                           // 0x01C0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue;       // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01D8(0x0018)()
	struct FM1ScaledInteger                       CallFunc_Array_Get_Item_1;                         // 0x01F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01F8(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_1;     // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Array_Get_Item_2;                         // 0x0258(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0260(0x0018)()
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_2;     // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0288(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02D8(0x0018)()
	struct FM1ScaledInteger                       CallFunc_Array_Get_Item_3;                         // 0x02F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x02F8(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_3;     // 0x0348(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_4;     // 0x0358(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0368(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0380(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0398(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x03E8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0438(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0448(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0460(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_1;                 // 0x0470(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_2;                 // 0x0478(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_DetermineElemetalDEF_ElementalDEF;        // 0x0480(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_DetermineElemetalDEF_ElementalDEF_1;      // 0x0488(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_3;                 // 0x0490(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_4;                 // 0x0498(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_DetermineElemetalDEF_ElementalDEF_2;      // 0x04A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_DetermineElemetalDEF_ElementalDEF_3;      // 0x04A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B1[0x7];                                      // 0x04B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerOne_ReturnValue;             // 0x04B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Subtract_ScaledIntScaledInt_ReturnValue;  // 0x04C0(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x04C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CC[0x4];                                      // 0x04CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x04D0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerOne_ReturnValue_1;           // 0x04D8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerOne_ReturnValue_2;           // 0x04E0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Subtract_ScaledIntScaledInt_ReturnValue_1; // 0x04E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Subtract_ScaledIntScaledInt_ReturnValue_2; // 0x04F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_1; // 0x04F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_2; // 0x0500(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerOne_ReturnValue_3;           // 0x0508(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Subtract_ScaledIntScaledInt_ReturnValue_3; // 0x0510(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerOne_ReturnValue_4;           // 0x0518(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_3; // 0x0520(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Subtract_ScaledIntScaledInt_ReturnValue_4; // 0x0528(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_4; // 0x0530(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CalcSkillDamageMonster_New_C_DoCalculation) == 0x000008, "Wrong alignment on CalcSkillDamageMonster_New_C_DoCalculation");
static_assert(sizeof(CalcSkillDamageMonster_New_C_DoCalculation) == 0x000538, "Wrong size on CalcSkillDamageMonster_New_C_DoCalculation");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, Param) == 0x000000, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::Param' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, DamageInfo) == 0x000008, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::DamageInfo' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, SkillDamageDemonic) == 0x000140, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::SkillDamageDemonic' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, SkillDamageElectricity) == 0x000148, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::SkillDamageElectricity' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, SkillDamageGlacier) == 0x000150, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::SkillDamageGlacier' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, SkillDamageBlazer) == 0x000158, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::SkillDamageBlazer' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, SkillDamageNormal) == 0x000160, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::SkillDamageNormal' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Determine_Monster_SkillDEF_SkillDEF) == 0x000168, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Determine_Monster_SkillDEF_SkillDEF' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_GetRefStat_ReturnValue) == 0x000170, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_GetRefStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Add_ScaledIntScaledInt_ReturnValue) == 0x000178, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Add_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Add_ScaledIntScaledInt_ReturnValue_1) == 0x000180, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Add_ScaledIntScaledInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Add_ScaledIntScaledInt_ReturnValue_2) == 0x000188, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Add_ScaledIntScaledInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_MakeLiteralByte_ReturnValue) == 0x000190, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Add_ScaledIntScaledInt_ReturnValue_3) == 0x000198, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Add_ScaledIntScaledInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0001A0, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0001A4, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Greater_ScaledIntScaledInt_ReturnValue) == 0x0001A5, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Greater_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x0001A8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_ScaledIntegerZero_ReturnValue) == 0x0001B0, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_ScaledIntegerZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0001B8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Not_PreBool_ReturnValue) == 0x0001B9, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x0001BC, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Array_Get_Item) == 0x0001C0, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue) == 0x0001C8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue) == 0x0001D8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Array_Get_Item_1) == 0x0001F0, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData) == 0x0001F8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue_1) == 0x000248, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Array_Get_Item_2) == 0x000258, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000260, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue_2) == 0x000278, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_1) == 0x000288, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002D8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Array_Get_Item_3) == 0x0002F0, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_2) == 0x0002F8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue_3) == 0x000348, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue_4) == 0x000358, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000368, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000380, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_3) == 0x000398, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_4) == 0x0003E8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, K2Node_MakeArray_Array) == 0x000438, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Format_ReturnValue) == 0x000448, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_TextToString_ReturnValue) == 0x000460, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_GetRefStat_ReturnValue_1) == 0x000470, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_GetRefStat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_GetRefStat_ReturnValue_2) == 0x000478, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_GetRefStat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_DetermineElemetalDEF_ElementalDEF) == 0x000480, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_DetermineElemetalDEF_ElementalDEF' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_DetermineElemetalDEF_ElementalDEF_1) == 0x000488, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_DetermineElemetalDEF_ElementalDEF_1' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_GetRefStat_ReturnValue_3) == 0x000490, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_GetRefStat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_GetRefStat_ReturnValue_4) == 0x000498, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_GetRefStat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_DetermineElemetalDEF_ElementalDEF_2) == 0x0004A0, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_DetermineElemetalDEF_ElementalDEF_2' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_DetermineElemetalDEF_ElementalDEF_3) == 0x0004A8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_DetermineElemetalDEF_ElementalDEF_3' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0004B0, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_ScaledIntegerOne_ReturnValue) == 0x0004B8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_ScaledIntegerOne_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Subtract_ScaledIntScaledInt_ReturnValue) == 0x0004C0, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Subtract_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Conv_ByteToInt_ReturnValue_3) == 0x0004C8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Conv_ByteToInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue) == 0x0004D0, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_ScaledIntegerOne_ReturnValue_1) == 0x0004D8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_ScaledIntegerOne_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_ScaledIntegerOne_ReturnValue_2) == 0x0004E0, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_ScaledIntegerOne_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Subtract_ScaledIntScaledInt_ReturnValue_1) == 0x0004E8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Subtract_ScaledIntScaledInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Subtract_ScaledIntScaledInt_ReturnValue_2) == 0x0004F0, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Subtract_ScaledIntScaledInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_1) == 0x0004F8, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_2) == 0x000500, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_ScaledIntegerOne_ReturnValue_3) == 0x000508, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_ScaledIntegerOne_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Subtract_ScaledIntScaledInt_ReturnValue_3) == 0x000510, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Subtract_ScaledIntScaledInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_ScaledIntegerOne_ReturnValue_4) == 0x000518, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_ScaledIntegerOne_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_3) == 0x000520, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Subtract_ScaledIntScaledInt_ReturnValue_4) == 0x000528, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Subtract_ScaledIntScaledInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CalcSkillDamageMonster_New_C_DoCalculation, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_4) == 0x000530, "Member 'CalcSkillDamageMonster_New_C_DoCalculation::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_4' has a wrong offset!");

}
