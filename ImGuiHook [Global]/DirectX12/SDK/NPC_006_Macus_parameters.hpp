#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_006_Macus

#include "Basic.hpp"


namespace SDK::Params
{

// Function NPC_006_Macus.NPC_006_Macus_C.ExecuteUbergraph_NPC_006_Macus
// 0x0010 (0x0010 - 0x0000)
struct NPC_006_Macus_C_ExecuteUbergraph_NPC_006_Macus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_006_Macus_C_ExecuteUbergraph_NPC_006_Macus) == 0x000008, "Wrong alignment on NPC_006_Macus_C_ExecuteUbergraph_NPC_006_Macus");
static_assert(sizeof(NPC_006_Macus_C_ExecuteUbergraph_NPC_006_Macus) == 0x000010, "Wrong size on NPC_006_Macus_C_ExecuteUbergraph_NPC_006_Macus");
static_assert(offsetof(NPC_006_Macus_C_ExecuteUbergraph_NPC_006_Macus, EntryPoint) == 0x000000, "Member 'NPC_006_Macus_C_ExecuteUbergraph_NPC_006_Macus::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPC_006_Macus_C_ExecuteUbergraph_NPC_006_Macus, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'NPC_006_Macus_C_ExecuteUbergraph_NPC_006_Macus::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(NPC_006_Macus_C_ExecuteUbergraph_NPC_006_Macus, K2Node_Event_OtherActor) == 0x000008, "Member 'NPC_006_Macus_C_ExecuteUbergraph_NPC_006_Macus::K2Node_Event_OtherActor' has a wrong offset!");

// Function NPC_006_Macus.NPC_006_Macus_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct NPC_006_Macus_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_006_Macus_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on NPC_006_Macus_C_ReceiveActorBeginOverlap");
static_assert(sizeof(NPC_006_Macus_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on NPC_006_Macus_C_ReceiveActorBeginOverlap");
static_assert(offsetof(NPC_006_Macus_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'NPC_006_Macus_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function NPC_006_Macus.NPC_006_Macus_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct NPC_006_Macus_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_006_Macus_C_ReceiveTick) == 0x000004, "Wrong alignment on NPC_006_Macus_C_ReceiveTick");
static_assert(sizeof(NPC_006_Macus_C_ReceiveTick) == 0x000004, "Wrong size on NPC_006_Macus_C_ReceiveTick");
static_assert(offsetof(NPC_006_Macus_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'NPC_006_Macus_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
