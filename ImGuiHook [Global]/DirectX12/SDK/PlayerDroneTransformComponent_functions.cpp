#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerDroneTransformComponent

#include "Basic.hpp"

#include "PlayerDroneTransformComponent_classes.hpp"
#include "PlayerDroneTransformComponent_parameters.hpp"


namespace SDK
{

// Function PlayerDroneTransformComponent.PlayerDroneTransformComponent_C.TickWithFollowTarget_Deprecated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           FollowActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerDroneTransformComponent_C::TickWithFollowTarget_Deprecated(class AActor*& FollowActor, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerDroneTransformComponent_C", "TickWithFollowTarget_Deprecated");

	Params::PlayerDroneTransformComponent_C_TickWithFollowTarget_Deprecated Parms{};

	Parms.FollowActor = FollowActor;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	FollowActor = Parms.FollowActor;
}


// Function PlayerDroneTransformComponent.PlayerDroneTransformComponent_C.TickWithFollowTarget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           FollowActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerDroneTransformComponent_C::TickWithFollowTarget(class AActor* FollowActor, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerDroneTransformComponent_C", "TickWithFollowTarget");

	Params::PlayerDroneTransformComponent_C_TickWithFollowTarget Parms{};

	Parms.FollowActor = FollowActor;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerDroneTransformComponent.PlayerDroneTransformComponent_C.TickUpdateAlignmentDirection_Deprecated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           FollowActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsDragging                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerDroneTransformComponent_C::TickUpdateAlignmentDirection_Deprecated(class AActor* FollowActor, float DeltaTime, bool bIsDragging)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerDroneTransformComponent_C", "TickUpdateAlignmentDirection_Deprecated");

	Params::PlayerDroneTransformComponent_C_TickUpdateAlignmentDirection_Deprecated Parms{};

	Parms.FollowActor = FollowActor;
	Parms.DeltaTime = DeltaTime;
	Parms.bIsDragging = bIsDragging;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerDroneTransformComponent.PlayerDroneTransformComponent_C.TickEachControl_Deprecated
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           FollowActor                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FM1ActorFollowParams             Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerDroneTransformComponent_C::TickEachControl_Deprecated(const class AActor* FollowActor, class USceneComponent* Component, const struct FM1ActorFollowParams& Params_0, double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerDroneTransformComponent_C", "TickEachControl_Deprecated");

	Params::PlayerDroneTransformComponent_C_TickEachControl_Deprecated Parms{};

	Parms.FollowActor = FollowActor;
	Parms.Component = Component;
	Parms.Params_0 = std::move(Params_0);
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerDroneTransformComponent.PlayerDroneTransformComponent_C.TickEachControl
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           FollowActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             ControlTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  ComponentToControl                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FM1ActorFollowParams             Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerDroneTransformComponent_C::TickEachControl(class AActor* FollowActor, class FName ControlTag, class USceneComponent* ComponentToControl, const struct FM1ActorFollowParams& Params_0, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerDroneTransformComponent_C", "TickEachControl");

	Params::PlayerDroneTransformComponent_C_TickEachControl Parms{};

	Parms.FollowActor = FollowActor;
	Parms.ControlTag = ControlTag;
	Parms.ComponentToControl = ComponentToControl;
	Parms.Params_0 = std::move(Params_0);
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerDroneTransformComponent.PlayerDroneTransformComponent_C.OnAddedControl_Deprecated
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           FollowActor                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FM1ActorFollowParams             Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UPlayerDroneTransformComponent_C::OnAddedControl_Deprecated(const class AActor* FollowActor, class USceneComponent* Component, const struct FM1ActorFollowParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerDroneTransformComponent_C", "OnAddedControl_Deprecated");

	Params::PlayerDroneTransformComponent_C_OnAddedControl_Deprecated Parms{};

	Parms.FollowActor = FollowActor;
	Parms.Component = Component;
	Parms.Params_0 = std::move(Params_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerDroneTransformComponent.PlayerDroneTransformComponent_C.OnAddedControl
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           FollowActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             ControlTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  OwnedSceneComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FM1ActorFollowParams             Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UPlayerDroneTransformComponent_C::OnAddedControl(class AActor* FollowActor, class FName ControlTag, class USceneComponent* OwnedSceneComponent, const struct FM1ActorFollowParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerDroneTransformComponent_C", "OnAddedControl");

	Params::PlayerDroneTransformComponent_C_OnAddedControl Parms{};

	Parms.FollowActor = FollowActor;
	Parms.ControlTag = ControlTag;
	Parms.OwnedSceneComponent = OwnedSceneComponent;
	Parms.Params_0 = std::move(Params_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerDroneTransformComponent.PlayerDroneTransformComponent_C.ExecuteUbergraph_PlayerDroneTransformComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerDroneTransformComponent_C::ExecuteUbergraph_PlayerDroneTransformComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerDroneTransformComponent_C", "ExecuteUbergraph_PlayerDroneTransformComponent");

	Params::PlayerDroneTransformComponent_C_ExecuteUbergraph_PlayerDroneTransformComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerDroneTransformComponent.PlayerDroneTransformComponent_C.CalcOffsetZ
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           FollowActor                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UPlayerDroneTransformComponent_C::CalcOffsetZ(const class AActor* FollowActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerDroneTransformComponent_C", "CalcOffsetZ");

	Params::PlayerDroneTransformComponent_C_CalcOffsetZ Parms{};

	Parms.FollowActor = FollowActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PlayerDroneTransformComponent.PlayerDroneTransformComponent_C.CalcJumpZOffset
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           FollowActor                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             JumpSocketName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  JumpZOffset                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerDroneTransformComponent_C::CalcJumpZOffset(const class AActor* FollowActor, class FName JumpSocketName, double* JumpZOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerDroneTransformComponent_C", "CalcJumpZOffset");

	Params::PlayerDroneTransformComponent_C_CalcJumpZOffset Parms{};

	Parms.FollowActor = FollowActor;
	Parms.JumpSocketName = JumpSocketName;

	UObject::ProcessEvent(Func, &Parms);

	if (JumpZOffset != nullptr)
		*JumpZOffset = Parms.JumpZOffset;
}


// Function PlayerDroneTransformComponent.PlayerDroneTransformComponent_C.CalcBaseOffsetLocation_Deprecated
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           FollowActor                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Displacement                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UPlayerDroneTransformComponent_C::CalcBaseOffsetLocation_Deprecated(const class AActor* FollowActor, class FName SocketName, const struct FVector& Displacement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerDroneTransformComponent_C", "CalcBaseOffsetLocation_Deprecated");

	Params::PlayerDroneTransformComponent_C_CalcBaseOffsetLocation_Deprecated Parms{};

	Parms.FollowActor = FollowActor;
	Parms.SocketName = SocketName;
	Parms.Displacement = std::move(Displacement);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PlayerDroneTransformComponent.PlayerDroneTransformComponent_C.CanDragBaseLocation_Deprecated
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           FollowActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDrag                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerDroneTransformComponent_C::CanDragBaseLocation_Deprecated(class AActor*& FollowActor, double DeltaTime, bool* bDrag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerDroneTransformComponent_C", "CanDragBaseLocation_Deprecated");

	Params::PlayerDroneTransformComponent_C_CanDragBaseLocation_Deprecated Parms{};

	Parms.FollowActor = FollowActor;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	FollowActor = Parms.FollowActor;

	if (bDrag != nullptr)
		*bDrag = Parms.bDrag;
}

}

