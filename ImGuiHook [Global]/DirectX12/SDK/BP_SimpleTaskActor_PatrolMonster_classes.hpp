#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SimpleTaskActor_PatrolMonster

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SimpleTaskActor_PatrolMonster.BP_SimpleTaskActor_PatrolMonster_C
// 0x0000 (0x04F8 - 0x04F8)
class ABP_SimpleTaskActor_PatrolMonster_C final : public AM1SimpleTaskActorPatrolMonster
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SimpleTaskActor_PatrolMonster_C">();
	}
	static class ABP_SimpleTaskActor_PatrolMonster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SimpleTaskActor_PatrolMonster_C>();
	}
};
static_assert(alignof(ABP_SimpleTaskActor_PatrolMonster_C) == 0x000008, "Wrong alignment on ABP_SimpleTaskActor_PatrolMonster_C");
static_assert(sizeof(ABP_SimpleTaskActor_PatrolMonster_C) == 0x0004F8, "Wrong size on ABP_SimpleTaskActor_PatrolMonster_C");

}
