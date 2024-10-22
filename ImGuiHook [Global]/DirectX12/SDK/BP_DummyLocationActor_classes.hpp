#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DummyLocationActor

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DummyLocationActor.BP_DummyLocationActor_C
// 0x0010 (0x0268 - 0x0258)
class ABP_DummyLocationActor_C final : public AM1LocationActor
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DummyLocationActor_C">();
	}
	static class ABP_DummyLocationActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DummyLocationActor_C>();
	}
};
static_assert(alignof(ABP_DummyLocationActor_C) == 0x000008, "Wrong alignment on ABP_DummyLocationActor_C");
static_assert(sizeof(ABP_DummyLocationActor_C) == 0x000268, "Wrong size on ABP_DummyLocationActor_C");
static_assert(offsetof(ABP_DummyLocationActor_C, Billboard) == 0x000258, "Member 'ABP_DummyLocationActor_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_DummyLocationActor_C, DefaultSceneRoot) == 0x000260, "Member 'ABP_DummyLocationActor_C::DefaultSceneRoot' has a wrong offset!");

}

