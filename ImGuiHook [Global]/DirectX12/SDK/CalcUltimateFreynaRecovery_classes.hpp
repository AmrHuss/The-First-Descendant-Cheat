#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcUltimateFreynaRecovery

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcUltimateFreynaRecovery.CalcUltimateFreynaRecovery_C
// 0x0008 (0x0100 - 0x00F8)
class UCalcUltimateFreynaRecovery_C final : public UM1AbilityOpExecCalc
{
public:
	double                                        MaxRecoveryAmount;                                 // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Execute(const struct FM1AbilityOpCalcParam& Param, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcUltimateFreynaRecovery_C">();
	}
	static class UCalcUltimateFreynaRecovery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcUltimateFreynaRecovery_C>();
	}
};
static_assert(alignof(UCalcUltimateFreynaRecovery_C) == 0x000008, "Wrong alignment on UCalcUltimateFreynaRecovery_C");
static_assert(sizeof(UCalcUltimateFreynaRecovery_C) == 0x000100, "Wrong size on UCalcUltimateFreynaRecovery_C");
static_assert(offsetof(UCalcUltimateFreynaRecovery_C, MaxRecoveryAmount) == 0x0000F8, "Member 'UCalcUltimateFreynaRecovery_C::MaxRecoveryAmount' has a wrong offset!");

}

