#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_SkillPropertyGroup

#include "Basic.hpp"

#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function UI_Mission_SkillPropertyGroup.UI_Mission_SkillPropertyGroup_C.SetElementalType
// 0x0008 (0x0008 - 0x0000)
struct UI_Mission_SkillPropertyGroup_C_SetElementalType final
{
public:
	EM1ElementalDamageChannel                     InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_SkillPropertyGroup_C_SetElementalType) == 0x000004, "Wrong alignment on UI_Mission_SkillPropertyGroup_C_SetElementalType");
static_assert(sizeof(UI_Mission_SkillPropertyGroup_C_SetElementalType) == 0x000008, "Wrong size on UI_Mission_SkillPropertyGroup_C_SetElementalType");
static_assert(offsetof(UI_Mission_SkillPropertyGroup_C_SetElementalType, InType) == 0x000000, "Member 'UI_Mission_SkillPropertyGroup_C_SetElementalType::InType' has a wrong offset!");
static_assert(offsetof(UI_Mission_SkillPropertyGroup_C_SetElementalType, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'UI_Mission_SkillPropertyGroup_C_SetElementalType::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

}

