#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapAxes

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapAxes.BP_MapAxes_C
// 0x0038 (0x0280 - 0x0248)
class ABP_MapAxes_C final : public AM1MapAxes
{
public:
	class UArrowComponent*                        Arrow3;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow2;                                            // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        MaxAxis;                                           // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        MinAxis;                                           // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	struct FVector BP_GetMinAxis() const;
	struct FVector BP_GetMaxAxis() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapAxes_C">();
	}
	static class ABP_MapAxes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapAxes_C>();
	}
};
static_assert(alignof(ABP_MapAxes_C) == 0x000008, "Wrong alignment on ABP_MapAxes_C");
static_assert(sizeof(ABP_MapAxes_C) == 0x000280, "Wrong size on ABP_MapAxes_C");
static_assert(offsetof(ABP_MapAxes_C, Arrow3) == 0x000248, "Member 'ABP_MapAxes_C::Arrow3' has a wrong offset!");
static_assert(offsetof(ABP_MapAxes_C, Arrow2) == 0x000250, "Member 'ABP_MapAxes_C::Arrow2' has a wrong offset!");
static_assert(offsetof(ABP_MapAxes_C, MaxAxis) == 0x000258, "Member 'ABP_MapAxes_C::MaxAxis' has a wrong offset!");
static_assert(offsetof(ABP_MapAxes_C, Arrow1) == 0x000260, "Member 'ABP_MapAxes_C::Arrow1' has a wrong offset!");
static_assert(offsetof(ABP_MapAxes_C, Arrow) == 0x000268, "Member 'ABP_MapAxes_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_MapAxes_C, MinAxis) == 0x000270, "Member 'ABP_MapAxes_C::MinAxis' has a wrong offset!");
static_assert(offsetof(ABP_MapAxes_C, DefaultSceneRoot) == 0x000278, "Member 'ABP_MapAxes_C::DefaultSceneRoot' has a wrong offset!");

}
