#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SimpleTaskActor_Portal

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SimpleTaskActor_Portal.BP_SimpleTaskActor_Portal_C
// 0x0010 (0x0470 - 0x0460)
class ABP_SimpleTaskActor_Portal_C final : public AM1SimpleTaskActor_Portal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SimpleTaskActor_Portal(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SimpleTaskActor_Portal_C">();
	}
	static class ABP_SimpleTaskActor_Portal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SimpleTaskActor_Portal_C>();
	}
};
static_assert(alignof(ABP_SimpleTaskActor_Portal_C) == 0x000008, "Wrong alignment on ABP_SimpleTaskActor_Portal_C");
static_assert(sizeof(ABP_SimpleTaskActor_Portal_C) == 0x000470, "Wrong size on ABP_SimpleTaskActor_Portal_C");
static_assert(offsetof(ABP_SimpleTaskActor_Portal_C, UberGraphFrame) == 0x000460, "Member 'ABP_SimpleTaskActor_Portal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SimpleTaskActor_Portal_C, Billboard) == 0x000468, "Member 'ABP_SimpleTaskActor_Portal_C::Billboard' has a wrong offset!");

}
