#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpawnPreviewActorBase

#include "Basic.hpp"

#include "SpawnPreviewActorBase_classes.hpp"
#include "SpawnPreviewActorBase_parameters.hpp"


namespace SDK
{

// Function SpawnPreviewActorBase.SpawnPreviewActorBase_C.CalcSpawnRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASpawnPreviewActorBase_C::CalcSpawnRotation(struct FRotator* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPreviewActorBase_C", "CalcSpawnRotation");

	Params::SpawnPreviewActorBase_C_CalcSpawnRotation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function SpawnPreviewActorBase.SpawnPreviewActorBase_C.ExecuteUbergraph_SpawnPreviewActorBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpawnPreviewActorBase_C::ExecuteUbergraph_SpawnPreviewActorBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPreviewActorBase_C", "ExecuteUbergraph_SpawnPreviewActorBase");

	Params::SpawnPreviewActorBase_C_ExecuteUbergraph_SpawnPreviewActorBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpawnPreviewActorBase.SpawnPreviewActorBase_C.FindSpawnPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bFullDetect                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnFound                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnLoc                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpawnPreviewActorBase_C::FindSpawnPoint(class AActor* Owner_0, bool bFullDetect, bool* ReturnFound, struct FVector* ReturnLoc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPreviewActorBase_C", "FindSpawnPoint");

	Params::SpawnPreviewActorBase_C_FindSpawnPoint Parms{};

	Parms.Owner_0 = Owner_0;
	Parms.bFullDetect = bFullDetect;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnFound != nullptr)
		*ReturnFound = Parms.ReturnFound;

	if (ReturnLoc != nullptr)
		*ReturnLoc = std::move(Parms.ReturnLoc);
}


// Function SpawnPreviewActorBase.SpawnPreviewActorBase_C.FindSpawnPoint_Sweep
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Dir                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Dist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bReverse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InDebugDraw                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     TraceColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       OutHit                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ASpawnPreviewActorBase_C::FindSpawnPoint_Sweep(const struct FVector& Start, const struct FVector& Dir, double Dist, double Radius, bool bReverse, bool InDebugDraw, const struct FLinearColor& TraceColor, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPreviewActorBase_C", "FindSpawnPoint_Sweep");

	Params::SpawnPreviewActorBase_C_FindSpawnPoint_Sweep Parms{};

	Parms.Start = std::move(Start);
	Parms.Dir = std::move(Dir);
	Parms.Dist = Dist;
	Parms.Radius = Radius;
	Parms.bReverse = bReverse;
	Parms.InDebugDraw = InDebugDraw;
	Parms.TraceColor = std::move(TraceColor);

	UObject::ProcessEvent(Func, &Parms);

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;
}


// Function SpawnPreviewActorBase.SpawnPreviewActorBase_C.IsSpawnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIsSpawnable                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpawnPreviewActorBase_C::IsSpawnable(bool* bIsSpawnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPreviewActorBase_C", "IsSpawnable");

	Params::SpawnPreviewActorBase_C_IsSpawnable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsSpawnable != nullptr)
		*bIsSpawnable = Parms.bIsSpawnable;
}


// Function SpawnPreviewActorBase.SpawnPreviewActorBase_C.IsSpawnPointFound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Found                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpawnPreviewActorBase_C::IsSpawnPointFound(bool* Found)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPreviewActorBase_C", "IsSpawnPointFound");

	Params::SpawnPreviewActorBase_C_IsSpawnPointFound Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;
}


// Function SpawnPreviewActorBase.SpawnPreviewActorBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASpawnPreviewActorBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPreviewActorBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpawnPreviewActorBase.SpawnPreviewActorBase_C.UpdatePreviewInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SpawnLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         New_Transform_Rotation                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASpawnPreviewActorBase_C::UpdatePreviewInfo(const struct FVector& SpawnLocation, const struct FRotator& New_Transform_Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPreviewActorBase_C", "UpdatePreviewInfo");

	Params::SpawnPreviewActorBase_C_UpdatePreviewInfo Parms{};

	Parms.SpawnLocation = std::move(SpawnLocation);
	Parms.New_Transform_Rotation = std::move(New_Transform_Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpawnPreviewActorBase.SpawnPreviewActorBase_C.UpdateTransform
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpawnPreviewActorBase_C::UpdateTransform(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPreviewActorBase_C", "UpdateTransform");

	Params::SpawnPreviewActorBase_C_UpdateTransform Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpawnPreviewActorBase.SpawnPreviewActorBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASpawnPreviewActorBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPreviewActorBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
