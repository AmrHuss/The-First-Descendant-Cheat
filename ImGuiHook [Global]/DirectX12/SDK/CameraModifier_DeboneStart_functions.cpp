#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraModifier_DeboneStart

#include "Basic.hpp"

#include "CameraModifier_DeboneStart_classes.hpp"
#include "CameraModifier_DeboneStart_parameters.hpp"


namespace SDK
{

// Function CameraModifier_DeboneStart.CameraModifier_DeboneStart_C.BlueprintModifyCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ViewLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ViewRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   FOV                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NewViewLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         NewViewRotation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   NewFOV                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraModifier_DeboneStart_C::BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_DeboneStart_C", "BlueprintModifyCamera");

	Params::CameraModifier_DeboneStart_C_BlueprintModifyCamera Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.ViewLocation = std::move(ViewLocation);
	Parms.ViewRotation = std::move(ViewRotation);
	Parms.FOV = FOV;

	UObject::ProcessEvent(Func, &Parms);

	if (NewViewLocation != nullptr)
		*NewViewLocation = std::move(Parms.NewViewLocation);

	if (NewViewRotation != nullptr)
		*NewViewRotation = std::move(Parms.NewViewRotation);

	if (NewFOV != nullptr)
		*NewFOV = Parms.NewFOV;
}


// Function CameraModifier_DeboneStart.CameraModifier_DeboneStart_C.FadeCameraLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          InViewLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OutLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraModifier_DeboneStart_C::FadeCameraLocation(const struct FVector& InViewLocation, struct FVector* OutLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_DeboneStart_C", "FadeCameraLocation");

	Params::CameraModifier_DeboneStart_C_FadeCameraLocation Parms{};

	Parms.InViewLocation = std::move(InViewLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);
}


// Function CameraModifier_DeboneStart.CameraModifier_DeboneStart_C.FadeCameraRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         InViewRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         OutRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCameraModifier_DeboneStart_C::FadeCameraRotation(const struct FRotator& InViewRotation, struct FRotator* OutRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_DeboneStart_C", "FadeCameraRotation");

	Params::CameraModifier_DeboneStart_C_FadeCameraRotation Parms{};

	Parms.InViewRotation = std::move(InViewRotation);

	UObject::ProcessEvent(Func, &Parms);

	if (OutRotation != nullptr)
		*OutRotation = std::move(Parms.OutRotation);
}


// Function CameraModifier_DeboneStart.CameraModifier_DeboneStart_C.GetLocationAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  OutAlpha                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraModifier_DeboneStart_C::GetLocationAlpha(double* OutAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_DeboneStart_C", "GetLocationAlpha");

	Params::CameraModifier_DeboneStart_C_GetLocationAlpha Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutAlpha != nullptr)
		*OutAlpha = Parms.OutAlpha;
}


// Function CameraModifier_DeboneStart.CameraModifier_DeboneStart_C.GetRotationAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  OutAlpha                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraModifier_DeboneStart_C::GetRotationAlpha(double* OutAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_DeboneStart_C", "GetRotationAlpha");

	Params::CameraModifier_DeboneStart_C_GetRotationAlpha Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutAlpha != nullptr)
		*OutAlpha = Parms.OutAlpha;
}


// Function CameraModifier_DeboneStart.CameraModifier_DeboneStart_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         InRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCameraModifier_DeboneStart_C::Initialize(const struct FVector& InLocation, const struct FRotator& InRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_DeboneStart_C", "Initialize");

	Params::CameraModifier_DeboneStart_C_Initialize Parms{};

	Parms.InLocation = std::move(InLocation);
	Parms.InRotation = std::move(InRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraModifier_DeboneStart.CameraModifier_DeboneStart_C.SetInterrupted
// (Public, BlueprintCallable, BlueprintEvent)

void UCameraModifier_DeboneStart_C::SetInterrupted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_DeboneStart_C", "SetInterrupted");

	UObject::ProcessEvent(Func, nullptr);
}

}

