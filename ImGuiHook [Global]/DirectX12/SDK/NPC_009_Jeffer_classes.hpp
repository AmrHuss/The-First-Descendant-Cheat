#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_009_Jeffer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_NpcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_009_Jeffer.NPC_009_Jeffer_C
// 0x0010 (0x07B0 - 0x07A0)
class ANPC_009_Jeffer_C final : public ABP_NpcBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_NPC_009_Jeffer_C;                   // 0x0798(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 GunMesh;                                           // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_NPC_009_Jeffer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_009_Jeffer_C">();
	}
	static class ANPC_009_Jeffer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_009_Jeffer_C>();
	}
};
static_assert(alignof(ANPC_009_Jeffer_C) == 0x000010, "Wrong alignment on ANPC_009_Jeffer_C");
static_assert(sizeof(ANPC_009_Jeffer_C) == 0x0007B0, "Wrong size on ANPC_009_Jeffer_C");
static_assert(offsetof(ANPC_009_Jeffer_C, UberGraphFrame_NPC_009_Jeffer_C) == 0x000798, "Member 'ANPC_009_Jeffer_C::UberGraphFrame_NPC_009_Jeffer_C' has a wrong offset!");
static_assert(offsetof(ANPC_009_Jeffer_C, GunMesh) == 0x0007A0, "Member 'ANPC_009_Jeffer_C::GunMesh' has a wrong offset!");

}

