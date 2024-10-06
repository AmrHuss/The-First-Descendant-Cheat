#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_054_ArcheTrace

#include "Basic.hpp"

#include "NPC_054_ArcheTrace_classes.hpp"
#include "NPC_054_ArcheTrace_parameters.hpp"


namespace SDK
{

// Function NPC_054_ArcheTrace.NPC_054_ArcheTrace_C.ExecuteUbergraph_NPC_054_ArcheTrace
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_054_ArcheTrace_C::ExecuteUbergraph_NPC_054_ArcheTrace(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_054_ArcheTrace_C", "ExecuteUbergraph_NPC_054_ArcheTrace");

	Params::NPC_054_ArcheTrace_C_ExecuteUbergraph_NPC_054_ArcheTrace Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_054_ArcheTrace.NPC_054_ArcheTrace_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ANPC_054_ArcheTrace_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_054_ArcheTrace_C", "ReceiveActorBeginOverlap");

	Params::NPC_054_ArcheTrace_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_054_ArcheTrace.NPC_054_ArcheTrace_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANPC_054_ArcheTrace_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_054_ArcheTrace_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_054_ArcheTrace.NPC_054_ArcheTrace_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_054_ArcheTrace_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_054_ArcheTrace_C", "ReceiveTick");

	Params::NPC_054_ArcheTrace_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_054_ArcheTrace.NPC_054_ArcheTrace_C.SetOffsetOfMeshAndNameTag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANPC_054_ArcheTrace_C::SetOffsetOfMeshAndNameTag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_054_ArcheTrace_C", "SetOffsetOfMeshAndNameTag");

	UObject::ProcessEvent(Func, nullptr);
}

}
