#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineMovingActor_Foothold

#include "Basic.hpp"

#include "BP_SplineMovingActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SplineMovingActor_Foothold.BP_SplineMovingActor_Foothold_C
// 0x0000 (0x0470 - 0x0470)
class ABP_SplineMovingActor_Foothold_C final : public ABP_SplineMovingActor_C
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SplineMovingActor_Foothold_C">();
	}
	static class ABP_SplineMovingActor_Foothold_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SplineMovingActor_Foothold_C>();
	}
};
static_assert(alignof(ABP_SplineMovingActor_Foothold_C) == 0x000010, "Wrong alignment on ABP_SplineMovingActor_Foothold_C");
static_assert(sizeof(ABP_SplineMovingActor_Foothold_C) == 0x000470, "Wrong size on ABP_SplineMovingActor_Foothold_C");
static_assert(offsetof(ABP_SplineMovingActor_Foothold_C, StaticMesh) == 0x000468, "Member 'ABP_SplineMovingActor_Foothold_C::StaticMesh' has a wrong offset!");

}

