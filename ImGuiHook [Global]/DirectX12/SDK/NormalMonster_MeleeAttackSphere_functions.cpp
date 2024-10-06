#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NormalMonster_MeleeAttackSphere

#include "Basic.hpp"

#include "NormalMonster_MeleeAttackSphere_classes.hpp"
#include "NormalMonster_MeleeAttackSphere_parameters.hpp"


namespace SDK
{

// Function NormalMonster_MeleeAttackSphere.NormalMonster_MeleeAttackSphere_C.CheckOverlapHitDetection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   HitActors                                              (Parm, OutParm)

void UNormalMonster_MeleeAttackSphere_C::CheckOverlapHitDetection(TArray<class AActor*>* HitActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_MeleeAttackSphere_C", "CheckOverlapHitDetection");

	Params::NormalMonster_MeleeAttackSphere_C_CheckOverlapHitDetection Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HitActors != nullptr)
		*HitActors = std::move(Parms.HitActors);
}


// Function NormalMonster_MeleeAttackSphere.NormalMonster_MeleeAttackSphere_C.DrawDebugSphere
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SphereCenterLoc                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNormalMonster_MeleeAttackSphere_C::DrawDebugSphere(const struct FVector& SphereCenterLoc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_MeleeAttackSphere_C", "DrawDebugSphere");

	Params::NormalMonster_MeleeAttackSphere_C_DrawDebugSphere Parms{};

	Parms.SphereCenterLoc = std::move(SphereCenterLoc);

	UObject::ProcessEvent(Func, &Parms);
}

}

