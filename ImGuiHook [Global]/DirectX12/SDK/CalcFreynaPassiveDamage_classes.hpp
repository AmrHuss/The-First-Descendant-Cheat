#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcFreynaPassiveDamage

#include "Basic.hpp"

#include "CalcDamageBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcFreynaPassiveDamage.CalcFreynaPassiveDamage_C
// 0x0010 (0x0140 - 0x0130)
class UCalcFreynaPassiveDamage_C final : public UCalcDamageBase_C
{
public:
	double                                        BaseWeaponDamage;                                  // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MultiplyDamage;                                    // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcFreynaPassiveDamage_C">();
	}
	static class UCalcFreynaPassiveDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcFreynaPassiveDamage_C>();
	}
};
static_assert(alignof(UCalcFreynaPassiveDamage_C) == 0x000008, "Wrong alignment on UCalcFreynaPassiveDamage_C");
static_assert(sizeof(UCalcFreynaPassiveDamage_C) == 0x000140, "Wrong size on UCalcFreynaPassiveDamage_C");
static_assert(offsetof(UCalcFreynaPassiveDamage_C, BaseWeaponDamage) == 0x000130, "Member 'UCalcFreynaPassiveDamage_C::BaseWeaponDamage' has a wrong offset!");
static_assert(offsetof(UCalcFreynaPassiveDamage_C, MultiplyDamage) == 0x000138, "Member 'UCalcFreynaPassiveDamage_C::MultiplyDamage' has a wrong offset!");

}

