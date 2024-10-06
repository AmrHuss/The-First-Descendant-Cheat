#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskInteraction

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTaskInteraction.BP_MissionTaskInteraction_C
// 0x0018 (0x06A8 - 0x0690)
class ABP_MissionTaskInteraction_C final : public AM1MissionTaskActorInteraction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0690(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      InteractableAreaFx;                                // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x06A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BP_RunResult(EM1TaskEventActorRunResult InRunResult);
	void ExecuteUbergraph_BP_MissionTaskInteraction(int32 EntryPoint);
	void ReceiveBeginPlay();

	float BP_GetPushAwayCollsionRadius() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTaskInteraction_C">();
	}
	static class ABP_MissionTaskInteraction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTaskInteraction_C>();
	}
};
static_assert(alignof(ABP_MissionTaskInteraction_C) == 0x000008, "Wrong alignment on ABP_MissionTaskInteraction_C");
static_assert(sizeof(ABP_MissionTaskInteraction_C) == 0x0006A8, "Wrong size on ABP_MissionTaskInteraction_C");
static_assert(offsetof(ABP_MissionTaskInteraction_C, UberGraphFrame) == 0x000690, "Member 'ABP_MissionTaskInteraction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MissionTaskInteraction_C, InteractableAreaFx) == 0x000698, "Member 'ABP_MissionTaskInteraction_C::InteractableAreaFx' has a wrong offset!");
static_assert(offsetof(ABP_MissionTaskInteraction_C, Billboard) == 0x0006A0, "Member 'ABP_MissionTaskInteraction_C::Billboard' has a wrong offset!");

}

