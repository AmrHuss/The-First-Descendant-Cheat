#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Viessa_AbilityActor_IceSphereProjectile2

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Viessa_AbilityActor_IceSphereProjectile2.Viessa_AbilityActor_IceSphereProjectile2_C
// 0x0028 (0x0C40 - 0x0C18)
class AViessa_AbilityActor_IceSphereProjectile2_C final : public AM1AbilityProjectile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C18(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         IceBindeLevelByHit;                                // 0x0C20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IceBindLevelByExplosion;                           // 0x0C24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ProjectileHitActor;                                // 0x0C28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         ProjectileExplosionTargetActors;                   // 0x0C30(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ProcessExplosionToActor(class AActor* OtherActor, const struct FHitResult& ExplosionResult);
	void OnEvent_08BF9A30431473309640ECAD956C5228(const struct FM1CalcDamageInfo& DamageInfo);
	void ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2(int32 EntryPoint);
	void BP_OnPreProcessHit(class AActor* OtherActor, const struct FHitResult& HitResult, const bool bPenetrated);
	void BP_OnPostSpawnAbilityActor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Viessa_AbilityActor_IceSphereProjectile2_C">();
	}
	static class AViessa_AbilityActor_IceSphereProjectile2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AViessa_AbilityActor_IceSphereProjectile2_C>();
	}
};
static_assert(alignof(AViessa_AbilityActor_IceSphereProjectile2_C) == 0x000008, "Wrong alignment on AViessa_AbilityActor_IceSphereProjectile2_C");
static_assert(sizeof(AViessa_AbilityActor_IceSphereProjectile2_C) == 0x000C40, "Wrong size on AViessa_AbilityActor_IceSphereProjectile2_C");
static_assert(offsetof(AViessa_AbilityActor_IceSphereProjectile2_C, UberGraphFrame) == 0x000C18, "Member 'AViessa_AbilityActor_IceSphereProjectile2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AViessa_AbilityActor_IceSphereProjectile2_C, IceBindeLevelByHit) == 0x000C20, "Member 'AViessa_AbilityActor_IceSphereProjectile2_C::IceBindeLevelByHit' has a wrong offset!");
static_assert(offsetof(AViessa_AbilityActor_IceSphereProjectile2_C, IceBindLevelByExplosion) == 0x000C24, "Member 'AViessa_AbilityActor_IceSphereProjectile2_C::IceBindLevelByExplosion' has a wrong offset!");
static_assert(offsetof(AViessa_AbilityActor_IceSphereProjectile2_C, ProjectileHitActor) == 0x000C28, "Member 'AViessa_AbilityActor_IceSphereProjectile2_C::ProjectileHitActor' has a wrong offset!");
static_assert(offsetof(AViessa_AbilityActor_IceSphereProjectile2_C, ProjectileExplosionTargetActors) == 0x000C30, "Member 'AViessa_AbilityActor_IceSphereProjectile2_C::ProjectileExplosionTargetActors' has a wrong offset!");

}

