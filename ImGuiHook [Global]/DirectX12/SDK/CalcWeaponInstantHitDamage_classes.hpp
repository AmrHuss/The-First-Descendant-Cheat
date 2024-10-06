#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcWeaponInstantHitDamage

#include "Basic.hpp"

#include "CalcDamageBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcWeaponInstantHitDamage.CalcWeaponInstantHitDamage_C
// 0x0020 (0x0150 - 0x0130)
class UCalcWeaponInstantHitDamage_C : public UCalcDamageBase_C
{
public:
	double                                        ATKMultiplierByCharge;                             // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DEFInflectionVarX1;                                // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DEFInflectionVarX2;                                // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DEFInflectionVarX3;                                // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;
	void SetAdditionalDamageInfo(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcWeaponInstantHitDamage_C">();
	}
	static class UCalcWeaponInstantHitDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcWeaponInstantHitDamage_C>();
	}
};
static_assert(alignof(UCalcWeaponInstantHitDamage_C) == 0x000008, "Wrong alignment on UCalcWeaponInstantHitDamage_C");
static_assert(sizeof(UCalcWeaponInstantHitDamage_C) == 0x000150, "Wrong size on UCalcWeaponInstantHitDamage_C");
static_assert(offsetof(UCalcWeaponInstantHitDamage_C, ATKMultiplierByCharge) == 0x000130, "Member 'UCalcWeaponInstantHitDamage_C::ATKMultiplierByCharge' has a wrong offset!");
static_assert(offsetof(UCalcWeaponInstantHitDamage_C, DEFInflectionVarX1) == 0x000138, "Member 'UCalcWeaponInstantHitDamage_C::DEFInflectionVarX1' has a wrong offset!");
static_assert(offsetof(UCalcWeaponInstantHitDamage_C, DEFInflectionVarX2) == 0x000140, "Member 'UCalcWeaponInstantHitDamage_C::DEFInflectionVarX2' has a wrong offset!");
static_assert(offsetof(UCalcWeaponInstantHitDamage_C, DEFInflectionVarX3) == 0x000148, "Member 'UCalcWeaponInstantHitDamage_C::DEFInflectionVarX3' has a wrong offset!");

}
