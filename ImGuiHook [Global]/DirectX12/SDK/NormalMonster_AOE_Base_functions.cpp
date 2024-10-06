#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NormalMonster_AOE_Base

#include "Basic.hpp"

#include "NormalMonster_AOE_Base_classes.hpp"
#include "NormalMonster_AOE_Base_parameters.hpp"


namespace SDK
{

// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.SpawnPreActivateFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANormalMonster_AOE_Base_C::SpawnPreActivateFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "SpawnPreActivateFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.SpawnPersistantAOEFx
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANormalMonster_AOE_Base_C::SpawnPersistantAOEFx()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "SpawnPersistantAOEFx");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.SpawnHitFX
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Actor_Transform                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ANormalMonster_AOE_Base_C::SpawnHitFX(TArray<class AActor*>& Actor_Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "SpawnHitFX");

	Params::NormalMonster_AOE_Base_C_SpawnHitFX Parms{};

	Parms.Actor_Transform = std::move(Actor_Transform);

	UObject::ProcessEvent(Func, &Parms);

	Actor_Transform = std::move(Parms.Actor_Transform);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.SpawnExplosionFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANormalMonster_AOE_Base_C::SpawnExplosionFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "SpawnExplosionFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.SpawnDecalFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             FName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Height                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANormalMonster_AOE_Base_C::SpawnDecalFX(class FName FName, double Duration, double Size, double Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "SpawnDecalFX");

	Params::NormalMonster_AOE_Base_C_SpawnDecalFX Parms{};

	Parms.FName = FName;
	Parms.Duration = Duration;
	Parms.Size = Size;
	Parms.Height = Height;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.OnExplosion
// (BlueprintCallable, BlueprintEvent)

void ANormalMonster_AOE_Base_C::OnExplosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "OnExplosion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.NetMultiSpawnHitFX
// (Net, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Overalpping_Actors                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ANormalMonster_AOE_Base_C::NetMultiSpawnHitFX(const TArray<class AActor*>& Overalpping_Actors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "NetMultiSpawnHitFX");

	Params::NormalMonster_AOE_Base_C_NetMultiSpawnHitFX Parms{};

	Parms.Overalpping_Actors = std::move(Overalpping_Actors);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.InitalizeCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ANormalMonster_AOE_Base_C::InitalizeCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "InitalizeCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.FindExplosionOverlapTargets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   NewParam                                               (Parm, OutParm)

void ANormalMonster_AOE_Base_C::FindExplosionOverlapTargets(TArray<class AActor*>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "FindExplosionOverlapTargets");

	Params::NormalMonster_AOE_Base_C_FindExplosionOverlapTargets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.ExecuteUbergraph_NormalMonster_AOE_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANormalMonster_AOE_Base_C::ExecuteUbergraph_NormalMonster_AOE_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "ExecuteUbergraph_NormalMonster_AOE_Base");

	Params::NormalMonster_AOE_Base_C_ExecuteUbergraph_NormalMonster_AOE_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.ExecuteIntervalHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OverlappingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ANormalMonster_AOE_Base_C::ExecuteIntervalHit(class AActor* OverlappingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "ExecuteIntervalHit");

	Params::NormalMonster_AOE_Base_C_ExecuteIntervalHit Parms{};

	Parms.OverlappingActor = OverlappingActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.DeactivateAOE
// (BlueprintCallable, BlueprintEvent)

void ANormalMonster_AOE_Base_C::DeactivateAOE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "DeactivateAOE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.BP_OnPostSpawnAbilityActor
// (Event, Protected, BlueprintEvent)

void ANormalMonster_AOE_Base_C::BP_OnPostSpawnAbilityActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "BP_OnPostSpawnAbilityActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.ApplyIntervalHit
// (BlueprintCallable, BlueprintEvent)

void ANormalMonster_AOE_Base_C::ApplyIntervalHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "ApplyIntervalHit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.ApplyExplosion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANormalMonster_AOE_Base_C::ApplyExplosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Base_C", "ApplyExplosion");

	UObject::ProcessEvent(Func, nullptr);
}

}

