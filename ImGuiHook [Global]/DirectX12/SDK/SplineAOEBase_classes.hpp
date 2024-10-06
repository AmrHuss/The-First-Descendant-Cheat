#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SplineAOEBase

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "SplineAOEShapeType_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SplineAOEBase.SplineAOEBase_C
// 0x0108 (0x0850 - 0x0748)
#pragma pack(push, 0x1)
class alignas(0x08) ASplineAOEBase_C : public AM1AbilityActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0748(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1CollisionTraceComponent*             AOE_M1CollisionTrace;                              // 0x0750(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0758(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ESplineAOEShapeType                           ShapeType;                                         // 0x0760(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_761[0x7];                                      // 0x0761(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Spacing;                                           // 0x0768(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Dur_EachLifetime;                                  // 0x0770(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DamagePeriod;                                      // 0x0780(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  DamagePeriodOpTags;                                // 0x0788(0x0020)(Edit, BlueprintVisible)
	class FName                                   DamagePeriodHitFXName;                             // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  StatusEffectTags;                                  // 0x07B0(0x0020)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                  SEForwardingOpTags;                                // 0x07D0(0x0020)(Edit, BlueprintVisible)
	struct FM1AbilityContextHandle                SEForwardingContext;                               // 0x07F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UNiagaraComponent*>              SpawnedDecalVFXs;                                  // 0x0800(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector                                BoxExtent;                                         // 0x0810(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81C[0x4];                                      // 0x081C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Radius;                                            // 0x0820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseWorldHeightOffsetRange;                        // 0x0828(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_829[0x7];                                      // 0x0829(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        WorldHeightOffsetRangeMin;                         // 0x0830(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WorldHeightOffsetRangeMax;                         // 0x0838(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DecalEffectName;                                   // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bReduceVFX;                                        // 0x0848(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReserveFinish();
	void OnPeriod();
	void OnFinish();
	bool OnEvaluateCondition();
	void OnEndOverlap(class AActor* OverlapActor);
	void OnBeginOverlap(class AActor* OverlapActor);
	void OnAddedCollision(class UShapeComponent* AddedShapeComp);
	void NetMulticastSpawnDecalVFX(const struct FTransform& InTransfrom);
	bool HasPeriodDamage();
	void ExecuteUbergraph_SplineAOEBase(int32 EntryPoint);
	void ExecutePeriodDamage(class AActor* TargetActor_0);
	void BP_OnPostSpawnAbilityActor();
	void Auth_SpawnPeriodHitFX(const TArray<class AActor*>& InTargets);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SplineAOEBase_C">();
	}
	static class ASplineAOEBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASplineAOEBase_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ASplineAOEBase_C) == 0x000008, "Wrong alignment on ASplineAOEBase_C");
static_assert(sizeof(ASplineAOEBase_C) == 0x000850, "Wrong size on ASplineAOEBase_C");
static_assert(offsetof(ASplineAOEBase_C, UberGraphFrame) == 0x000748, "Member 'ASplineAOEBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, AOE_M1CollisionTrace) == 0x000750, "Member 'ASplineAOEBase_C::AOE_M1CollisionTrace' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, DefaultSceneRoot) == 0x000758, "Member 'ASplineAOEBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, ShapeType) == 0x000760, "Member 'ASplineAOEBase_C::ShapeType' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, Spacing) == 0x000768, "Member 'ASplineAOEBase_C::Spacing' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, Dur_EachLifetime) == 0x000770, "Member 'ASplineAOEBase_C::Dur_EachLifetime' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, TargetActor) == 0x000778, "Member 'ASplineAOEBase_C::TargetActor' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, DamagePeriod) == 0x000780, "Member 'ASplineAOEBase_C::DamagePeriod' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, DamagePeriodOpTags) == 0x000788, "Member 'ASplineAOEBase_C::DamagePeriodOpTags' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, DamagePeriodHitFXName) == 0x0007A8, "Member 'ASplineAOEBase_C::DamagePeriodHitFXName' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, StatusEffectTags) == 0x0007B0, "Member 'ASplineAOEBase_C::StatusEffectTags' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, SEForwardingOpTags) == 0x0007D0, "Member 'ASplineAOEBase_C::SEForwardingOpTags' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, SEForwardingContext) == 0x0007F0, "Member 'ASplineAOEBase_C::SEForwardingContext' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, SpawnedDecalVFXs) == 0x000800, "Member 'ASplineAOEBase_C::SpawnedDecalVFXs' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, BoxExtent) == 0x000810, "Member 'ASplineAOEBase_C::BoxExtent' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, Radius) == 0x000820, "Member 'ASplineAOEBase_C::Radius' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, bUseWorldHeightOffsetRange) == 0x000828, "Member 'ASplineAOEBase_C::bUseWorldHeightOffsetRange' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, WorldHeightOffsetRangeMin) == 0x000830, "Member 'ASplineAOEBase_C::WorldHeightOffsetRangeMin' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, WorldHeightOffsetRangeMax) == 0x000838, "Member 'ASplineAOEBase_C::WorldHeightOffsetRangeMax' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, DecalEffectName) == 0x000840, "Member 'ASplineAOEBase_C::DecalEffectName' has a wrong offset!");
static_assert(offsetof(ASplineAOEBase_C, bReduceVFX) == 0x000848, "Member 'ASplineAOEBase_C::bReduceVFX' has a wrong offset!");

}

