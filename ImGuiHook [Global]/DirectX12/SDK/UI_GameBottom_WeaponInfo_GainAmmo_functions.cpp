#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameBottom_WeaponInfo_GainAmmo

#include "Basic.hpp"

#include "UI_GameBottom_WeaponInfo_GainAmmo_classes.hpp"
#include "UI_GameBottom_WeaponInfo_GainAmmo_parameters.hpp"


namespace SDK
{

// Function UI_GameBottom_WeaponInfo_GainAmmo.UI_GameBottom_WeaponInfo_GainAmmo_C.BP_SetGainRoundsIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1RoundsType                           InRoundType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_GainAmmo_C::BP_SetGainRoundsIcon(EM1RoundsType InRoundType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_GainAmmo_C", "BP_SetGainRoundsIcon");

	Params::UI_GameBottom_WeaponInfo_GainAmmo_C_BP_SetGainRoundsIcon Parms{};

	Parms.InRoundType = InRoundType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameBottom_WeaponInfo_GainAmmo.UI_GameBottom_WeaponInfo_GainAmmo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameBottom_WeaponInfo_GainAmmo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_GainAmmo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameBottom_WeaponInfo_GainAmmo.UI_GameBottom_WeaponInfo_GainAmmo_C.ExecuteUbergraph_UI_GameBottom_WeaponInfo_GainAmmo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_GainAmmo_C::ExecuteUbergraph_UI_GameBottom_WeaponInfo_GainAmmo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_GainAmmo_C", "ExecuteUbergraph_UI_GameBottom_WeaponInfo_GainAmmo");

	Params::UI_GameBottom_WeaponInfo_GainAmmo_C_ExecuteUbergraph_UI_GameBottom_WeaponInfo_GainAmmo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameBottom_WeaponInfo_GainAmmo.UI_GameBottom_WeaponInfo_GainAmmo_C.playAkAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_GainAmmo_C::PlayAkAudio(class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_GainAmmo_C", "playAkAudio");

	Params::UI_GameBottom_WeaponInfo_GainAmmo_C_PlayAkAudio Parms{};

	Parms.AkEvent = AkEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameBottom_WeaponInfo_GainAmmo.UI_GameBottom_WeaponInfo_GainAmmo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_GainAmmo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_GainAmmo_C", "PreConstruct");

	Params::UI_GameBottom_WeaponInfo_GainAmmo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameBottom_WeaponInfo_GainAmmo.UI_GameBottom_WeaponInfo_GainAmmo_C.SequenceEvent__ENTRYPOINTUI_GameBottom_WeaponInfo_GainAmmo
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameBottom_WeaponInfo_GainAmmo_C::SequenceEvent__ENTRYPOINTUI_GameBottom_WeaponInfo_GainAmmo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_GainAmmo_C", "SequenceEvent__ENTRYPOINTUI_GameBottom_WeaponInfo_GainAmmo");

	UObject::ProcessEvent(Func, nullptr);
}

}

