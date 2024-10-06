#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_033_Workbench

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_NpcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_033_Workbench.NPC_033_Workbench_C
// 0x0010 (0x07B0 - 0x07A0)
class ANPC_033_Workbench_C final : public ABP_NpcBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_NPC_033_Workbench_C;                // 0x0798(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   ChildActorComponent;                               // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NPC_033_Workbench(int32 EntryPoint);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_033_Workbench_C">();
	}
	static class ANPC_033_Workbench_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_033_Workbench_C>();
	}
};
static_assert(alignof(ANPC_033_Workbench_C) == 0x000010, "Wrong alignment on ANPC_033_Workbench_C");
static_assert(sizeof(ANPC_033_Workbench_C) == 0x0007B0, "Wrong size on ANPC_033_Workbench_C");
static_assert(offsetof(ANPC_033_Workbench_C, UberGraphFrame_NPC_033_Workbench_C) == 0x000798, "Member 'ANPC_033_Workbench_C::UberGraphFrame_NPC_033_Workbench_C' has a wrong offset!");
static_assert(offsetof(ANPC_033_Workbench_C, ChildActorComponent) == 0x0007A0, "Member 'ANPC_033_Workbench_C::ChildActorComponent' has a wrong offset!");

}
