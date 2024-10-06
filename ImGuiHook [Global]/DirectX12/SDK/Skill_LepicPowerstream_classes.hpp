#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_LepicPowerstream

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_LepicPowerstream.Skill_LepicPowerstream_C
// 0x0010 (0x0348 - 0x0338)
class USkill_LepicPowerstream_C final : public UM1SkillAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   SocketName;                                        // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnActivated();
	void ExecuteUbergraph_Skill_LepicPowerstream(int32 EntryPoint);
	void OnBlendOut_A63EE6B44E2D6816D6A6938D6A5D15CC(const struct FM1AbilityEvent& Event);
	void OnCompleted_A63EE6B44E2D6816D6A6938D6A5D15CC(const struct FM1AbilityEvent& Event);
	void OnEventReceived_A63EE6B44E2D6816D6A6938D6A5D15CC(const struct FM1AbilityEvent& Event);
	void OnFunctionalTest();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_LepicPowerstream_C">();
	}
	static class USkill_LepicPowerstream_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_LepicPowerstream_C>();
	}
};
static_assert(alignof(USkill_LepicPowerstream_C) == 0x000008, "Wrong alignment on USkill_LepicPowerstream_C");
static_assert(sizeof(USkill_LepicPowerstream_C) == 0x000348, "Wrong size on USkill_LepicPowerstream_C");
static_assert(offsetof(USkill_LepicPowerstream_C, UberGraphFrame) == 0x000338, "Member 'USkill_LepicPowerstream_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkill_LepicPowerstream_C, SocketName) == 0x000340, "Member 'USkill_LepicPowerstream_C::SocketName' has a wrong offset!");

}

