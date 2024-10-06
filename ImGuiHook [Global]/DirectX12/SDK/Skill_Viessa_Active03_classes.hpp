#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Viessa_Active03

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_Viessa_Active03.Skill_Viessa_Active03_C
// 0x0098 (0x03D0 - 0x0338)
class USkill_Viessa_Active03_C final : public UM1SkillAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                  Forwarding_Operation_Tags;                         // 0x0340(0x0020)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	class FName                                   SocketName;                                        // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugDraw;                                         // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_369[0x7];                                      // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class AActor*>                           OverlappedActors;                                  // 0x0370(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                AOE_DamageBoxExtent;                               // 0x03C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IceBindLevelByIceWave;                             // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AttackTargets(TArray<class AActor*>& Targets);
	void BP_OnActivated();
	void ExecuteUbergraph_Skill_Viessa_Active03(int32 EntryPoint);
	void GetBoxLocation(struct FVector* BoxLocation);
	void OnBlendOut_45DD66B44E5E751D754DBDA71D4FE9D3(const struct FM1AbilityEvent& Event);
	void OnCompleted_45DD66B44E5E751D754DBDA71D4FE9D3(const struct FM1AbilityEvent& Event);
	void OnEvent_D196BC7B42E13027592E6BA51E2B0BF6(const struct FM1CalcDamageInfo& DamageInfo);
	void OnEventReceived_45DD66B44E5E751D754DBDA71D4FE9D3(const struct FM1AbilityEvent& Event);
	void OnFunctionalTest();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_Viessa_Active03_C">();
	}
	static class USkill_Viessa_Active03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_Viessa_Active03_C>();
	}
};
static_assert(alignof(USkill_Viessa_Active03_C) == 0x000008, "Wrong alignment on USkill_Viessa_Active03_C");
static_assert(sizeof(USkill_Viessa_Active03_C) == 0x0003D0, "Wrong size on USkill_Viessa_Active03_C");
static_assert(offsetof(USkill_Viessa_Active03_C, UberGraphFrame) == 0x000338, "Member 'USkill_Viessa_Active03_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkill_Viessa_Active03_C, Forwarding_Operation_Tags) == 0x000340, "Member 'USkill_Viessa_Active03_C::Forwarding_Operation_Tags' has a wrong offset!");
static_assert(offsetof(USkill_Viessa_Active03_C, SocketName) == 0x000360, "Member 'USkill_Viessa_Active03_C::SocketName' has a wrong offset!");
static_assert(offsetof(USkill_Viessa_Active03_C, DebugDraw) == 0x000368, "Member 'USkill_Viessa_Active03_C::DebugDraw' has a wrong offset!");
static_assert(offsetof(USkill_Viessa_Active03_C, OverlappedActors) == 0x000370, "Member 'USkill_Viessa_Active03_C::OverlappedActors' has a wrong offset!");
static_assert(offsetof(USkill_Viessa_Active03_C, AOE_DamageBoxExtent) == 0x0003C0, "Member 'USkill_Viessa_Active03_C::AOE_DamageBoxExtent' has a wrong offset!");
static_assert(offsetof(USkill_Viessa_Active03_C, IceBindLevelByIceWave) == 0x0003CC, "Member 'USkill_Viessa_Active03_C::IceBindLevelByIceWave' has a wrong offset!");

}

