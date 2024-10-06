#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcATKBaseSkillRecovery

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "CalcRecoveryBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcATKBaseSkillRecovery.CalcATKBaseSkillRecovery_C
// 0x0030 (0x0130 - 0x0100)
class UCalcATKBaseSkillRecovery_C final : public UCalcRecoveryBase_C
{
public:
	EM1SkillArcheType                             SkillArcheType;                                    // 0x00FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ElementalDamageChannel                     SkillElementalType;                                // 0x00FB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        AddAttack;                                         // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AddPower;                                          // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HitValueForRecovery;                               // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TotalHealRatioMax;                                 // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RangeRatio;                                        // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LowerRatio;                                        // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyHealRatio(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;
	void SetRecoveryOutModifier(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcATKBaseSkillRecovery_C">();
	}
	static class UCalcATKBaseSkillRecovery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcATKBaseSkillRecovery_C>();
	}
};
static_assert(alignof(UCalcATKBaseSkillRecovery_C) == 0x000008, "Wrong alignment on UCalcATKBaseSkillRecovery_C");
static_assert(sizeof(UCalcATKBaseSkillRecovery_C) == 0x000130, "Wrong size on UCalcATKBaseSkillRecovery_C");
static_assert(offsetof(UCalcATKBaseSkillRecovery_C, SkillArcheType) == 0x0000FA, "Member 'UCalcATKBaseSkillRecovery_C::SkillArcheType' has a wrong offset!");
static_assert(offsetof(UCalcATKBaseSkillRecovery_C, SkillElementalType) == 0x0000FB, "Member 'UCalcATKBaseSkillRecovery_C::SkillElementalType' has a wrong offset!");
static_assert(offsetof(UCalcATKBaseSkillRecovery_C, AddAttack) == 0x000100, "Member 'UCalcATKBaseSkillRecovery_C::AddAttack' has a wrong offset!");
static_assert(offsetof(UCalcATKBaseSkillRecovery_C, AddPower) == 0x000108, "Member 'UCalcATKBaseSkillRecovery_C::AddPower' has a wrong offset!");
static_assert(offsetof(UCalcATKBaseSkillRecovery_C, HitValueForRecovery) == 0x000110, "Member 'UCalcATKBaseSkillRecovery_C::HitValueForRecovery' has a wrong offset!");
static_assert(offsetof(UCalcATKBaseSkillRecovery_C, TotalHealRatioMax) == 0x000118, "Member 'UCalcATKBaseSkillRecovery_C::TotalHealRatioMax' has a wrong offset!");
static_assert(offsetof(UCalcATKBaseSkillRecovery_C, RangeRatio) == 0x000120, "Member 'UCalcATKBaseSkillRecovery_C::RangeRatio' has a wrong offset!");
static_assert(offsetof(UCalcATKBaseSkillRecovery_C, LowerRatio) == 0x000128, "Member 'UCalcATKBaseSkillRecovery_C::LowerRatio' has a wrong offset!");

}
