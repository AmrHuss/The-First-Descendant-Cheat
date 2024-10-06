#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcShieldReflectDamage

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "CalcDamageBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcShieldReflectDamage.CalcShieldReflectDamage_C
// 0x0028 (0x0158 - 0x0130)
class UCalcShieldReflectDamage_C final : public UCalcDamageBase_C
{
public:
	int32                                         Damage;                                            // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ReflectRatio;                                      // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AjaxPowerRatio;                                    // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1SkillArcheType                             SkillArcheType;                                    // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ElementalDamageChannel                     SkillElementalType;                                // 0x0149(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   StatType;                                          // 0x014A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14B[0x5];                                      // 0x014B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StatRatio;                                         // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AjaxReflectDamage(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcShieldReflectDamage_C">();
	}
	static class UCalcShieldReflectDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcShieldReflectDamage_C>();
	}
};
static_assert(alignof(UCalcShieldReflectDamage_C) == 0x000008, "Wrong alignment on UCalcShieldReflectDamage_C");
static_assert(sizeof(UCalcShieldReflectDamage_C) == 0x000158, "Wrong size on UCalcShieldReflectDamage_C");
static_assert(offsetof(UCalcShieldReflectDamage_C, Damage) == 0x000130, "Member 'UCalcShieldReflectDamage_C::Damage' has a wrong offset!");
static_assert(offsetof(UCalcShieldReflectDamage_C, ReflectRatio) == 0x000138, "Member 'UCalcShieldReflectDamage_C::ReflectRatio' has a wrong offset!");
static_assert(offsetof(UCalcShieldReflectDamage_C, AjaxPowerRatio) == 0x000140, "Member 'UCalcShieldReflectDamage_C::AjaxPowerRatio' has a wrong offset!");
static_assert(offsetof(UCalcShieldReflectDamage_C, SkillArcheType) == 0x000148, "Member 'UCalcShieldReflectDamage_C::SkillArcheType' has a wrong offset!");
static_assert(offsetof(UCalcShieldReflectDamage_C, SkillElementalType) == 0x000149, "Member 'UCalcShieldReflectDamage_C::SkillElementalType' has a wrong offset!");
static_assert(offsetof(UCalcShieldReflectDamage_C, StatType) == 0x00014A, "Member 'UCalcShieldReflectDamage_C::StatType' has a wrong offset!");
static_assert(offsetof(UCalcShieldReflectDamage_C, StatRatio) == 0x000150, "Member 'UCalcShieldReflectDamage_C::StatRatio' has a wrong offset!");

}
