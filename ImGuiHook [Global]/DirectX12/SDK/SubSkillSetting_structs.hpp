#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SubSkillSetting

#include "Basic.hpp"

#include "SubSkillAnimSetting_structs.hpp"
#include "SubSkillCollision_structs.hpp"


namespace SDK
{

// UserDefinedStruct SubSkillSetting.SubSkillSetting
// 0x0020 (0x0020 - 0x0000)
struct FSubSkillSetting final
{
public:
	struct FSubSkillAnimSetting                   AnimMontage_13_6A75F93C4969157CA639B69986D44087;   // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSubSkillCollision>             DamageCollision_17_807CC4934A9585BB4F34E9A0F63423A2; // 0x0010(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSubSkillSetting) == 0x000008, "Wrong alignment on FSubSkillSetting");
static_assert(sizeof(FSubSkillSetting) == 0x000020, "Wrong size on FSubSkillSetting");
static_assert(offsetof(FSubSkillSetting, AnimMontage_13_6A75F93C4969157CA639B69986D44087) == 0x000000, "Member 'FSubSkillSetting::AnimMontage_13_6A75F93C4969157CA639B69986D44087' has a wrong offset!");
static_assert(offsetof(FSubSkillSetting, DamageCollision_17_807CC4934A9585BB4F34E9A0F63423A2) == 0x000010, "Member 'FSubSkillSetting::DamageCollision_17_807CC4934A9585BB4F34E9A0F63423A2' has a wrong offset!");

}

