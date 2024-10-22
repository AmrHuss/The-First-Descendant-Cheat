#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PROJ_MonsterHighangleFire

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PROJ_MonsterHighangleFire.PROJ_MonsterHighangleFire_C
// 0x0020 (0x0C38 - 0x0C18)
class APROJ_MonsterHighangleFire_C : public AM1AbilityProjectile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C18(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        ArcValue;                                          // 0x0C20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Velocity;                                          // 0x0C28(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugDraw;                                         // 0x0C34(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PROJ_MonsterHighangleFire(int32 EntryPoint);
	void BP_OnPostSpawnAbilityActor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PROJ_MonsterHighangleFire_C">();
	}
	static class APROJ_MonsterHighangleFire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APROJ_MonsterHighangleFire_C>();
	}
};
static_assert(alignof(APROJ_MonsterHighangleFire_C) == 0x000008, "Wrong alignment on APROJ_MonsterHighangleFire_C");
static_assert(sizeof(APROJ_MonsterHighangleFire_C) == 0x000C38, "Wrong size on APROJ_MonsterHighangleFire_C");
static_assert(offsetof(APROJ_MonsterHighangleFire_C, UberGraphFrame) == 0x000C18, "Member 'APROJ_MonsterHighangleFire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APROJ_MonsterHighangleFire_C, ArcValue) == 0x000C20, "Member 'APROJ_MonsterHighangleFire_C::ArcValue' has a wrong offset!");
static_assert(offsetof(APROJ_MonsterHighangleFire_C, Velocity) == 0x000C28, "Member 'APROJ_MonsterHighangleFire_C::Velocity' has a wrong offset!");
static_assert(offsetof(APROJ_MonsterHighangleFire_C, DebugDraw) == 0x000C34, "Member 'APROJ_MonsterHighangleFire_C::DebugDraw' has a wrong offset!");

}

