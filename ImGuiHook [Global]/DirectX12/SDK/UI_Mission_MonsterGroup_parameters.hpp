#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_MonsterGroup

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_Mission_MonsterGroup.UI_Mission_MonsterGroup_C.SetLegionCategory
// 0x0058 (0x0058 - 0x0000)
struct UI_Mission_MonsterGroup_C_SetLegionCategory final
{
public:
	TArray<EM1LegionCategory>                     InLegionCategory;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UHorizontalBox*                         Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         Temp_object_Variable_1;                            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1LegionCategory                             Temp_byte_Variable_2;                              // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBox*                         K2Node_Select_Default_1;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_MonsterGroup_C_SetLegionCategory) == 0x000008, "Wrong alignment on UI_Mission_MonsterGroup_C_SetLegionCategory");
static_assert(sizeof(UI_Mission_MonsterGroup_C_SetLegionCategory) == 0x000058, "Wrong size on UI_Mission_MonsterGroup_C_SetLegionCategory");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, InLegionCategory) == 0x000000, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::InLegionCategory' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, Temp_object_Variable) == 0x000010, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, Temp_object_Variable_1) == 0x000018, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, Temp_bool_Variable) == 0x000020, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, Temp_byte_Variable) == 0x000021, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, Temp_byte_Variable_1) == 0x000022, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, Temp_byte_Variable_2) == 0x000023, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, Temp_int_Variable) == 0x000024, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, Temp_int_Variable_1) == 0x000028, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, CallFunc_Conv_IntToByte_ReturnValue) == 0x00002C, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, CallFunc_GetValidValue_ReturnValue) == 0x000034, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000035, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000036, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, CallFunc_Array_Contains_ReturnValue) == 0x000037, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000038, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, K2Node_Select_Default) == 0x00003C, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, CallFunc_MakeLiteralInt_ReturnValue) == 0x000040, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, K2Node_Select_Default_1) == 0x000048, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_MonsterGroup_C_SetLegionCategory, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'UI_Mission_MonsterGroup_C_SetLegionCategory::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

