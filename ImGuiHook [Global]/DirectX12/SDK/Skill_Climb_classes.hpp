#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Climb

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_Climb.Skill_Climb_C
// 0x00C0 (0x03F8 - 0x0338)
class USkill_Climb_C final : public UM1SkillAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<EM1CharacterGender, class UAnimMontage*> ClimbMontage;                                      // 0x0340(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UM1AbilityTask_PlayMontageAndWait*      PlayMontageTask;                                   // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<uint8, class FName>                      ClimbSection;                                      // 0x0398(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                GrabOffset;                                        // 0x03E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnActivated();
	void BP_OnDeactivated(bool bCancelled);
	void ExecuteUbergraph_Skill_Climb(int32 EntryPoint);
	void GetClimbMontageParam(class UAnimMontage** OutMontage, class FName* OutSection);
	void OnBlendOut_05CFB6A44178B888242050A9EF156EF4(const struct FM1AbilityEvent& Event);
	void OnCompleted_05CFB6A44178B888242050A9EF156EF4(const struct FM1AbilityEvent& Event);
	void OnEventReceived_05CFB6A44178B888242050A9EF156EF4(const struct FM1AbilityEvent& Event);
	bool TryCommitClimb();
	void UpdateClimbMotionWarping();

	void GetEndLocation(struct FVector* OutLocation) const;
	void GetGrabOffset(struct FVector* OutOffset) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_Climb_C">();
	}
	static class USkill_Climb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_Climb_C>();
	}
};
static_assert(alignof(USkill_Climb_C) == 0x000008, "Wrong alignment on USkill_Climb_C");
static_assert(sizeof(USkill_Climb_C) == 0x0003F8, "Wrong size on USkill_Climb_C");
static_assert(offsetof(USkill_Climb_C, UberGraphFrame) == 0x000338, "Member 'USkill_Climb_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkill_Climb_C, ClimbMontage) == 0x000340, "Member 'USkill_Climb_C::ClimbMontage' has a wrong offset!");
static_assert(offsetof(USkill_Climb_C, PlayMontageTask) == 0x000390, "Member 'USkill_Climb_C::PlayMontageTask' has a wrong offset!");
static_assert(offsetof(USkill_Climb_C, ClimbSection) == 0x000398, "Member 'USkill_Climb_C::ClimbSection' has a wrong offset!");
static_assert(offsetof(USkill_Climb_C, GrabOffset) == 0x0003E8, "Member 'USkill_Climb_C::GrabOffset' has a wrong offset!");

}
