#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameBottom_WeaponInfo

#include "Basic.hpp"

#include "UI_GameBottom_WeaponInfo_classes.hpp"
#include "UI_GameBottom_WeaponInfo_parameters.hpp"


namespace SDK
{

// Function UI_GameBottom_WeaponInfo.UI_GameBottom_WeaponInfo_C.BP_SetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWithAltWeapon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_C::BP_SetActive(bool bActive, bool bWithAltWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_C", "BP_SetActive");

	Params::UI_GameBottom_WeaponInfo_C_BP_SetActive Parms{};

	Parms.bActive = bActive;
	Parms.bWithAltWeapon = bWithAltWeapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameBottom_WeaponInfo.UI_GameBottom_WeaponInfo_C.BP_SetRoundsIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1RoundsType                           InRoundType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_C::BP_SetRoundsIcon(EM1RoundsType InRoundType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_C", "BP_SetRoundsIcon");

	Params::UI_GameBottom_WeaponInfo_C_BP_SetRoundsIcon Parms{};

	Parms.InRoundType = InRoundType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameBottom_WeaponInfo.UI_GameBottom_WeaponInfo_C.BP_SetSlotNumber
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1EquipmentSlotType                    InSlotType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_C::BP_SetSlotNumber(EM1EquipmentSlotType InSlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_C", "BP_SetSlotNumber");

	Params::UI_GameBottom_WeaponInfo_C_BP_SetSlotNumber Parms{};

	Parms.InSlotType = InSlotType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameBottom_WeaponInfo.UI_GameBottom_WeaponInfo_C.BP_SetWeaponStatIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_C::BP_SetWeaponStatIcon(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_C", "BP_SetWeaponStatIcon");

	Params::UI_GameBottom_WeaponInfo_C_BP_SetWeaponStatIcon Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameBottom_WeaponInfo.UI_GameBottom_WeaponInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameBottom_WeaponInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameBottom_WeaponInfo.UI_GameBottom_WeaponInfo_C.ExecuteUbergraph_UI_GameBottom_WeaponInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_C::ExecuteUbergraph_UI_GameBottom_WeaponInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_C", "ExecuteUbergraph_UI_GameBottom_WeaponInfo");

	Params::UI_GameBottom_WeaponInfo_C_ExecuteUbergraph_UI_GameBottom_WeaponInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameBottom_WeaponInfo.UI_GameBottom_WeaponInfo_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_C", "OnEventWidgetOpen");

	Params::UI_GameBottom_WeaponInfo_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameBottom_WeaponInfo.UI_GameBottom_WeaponInfo_C.playAkAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_C::PlayAkAudio(class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_C", "playAkAudio");

	Params::UI_GameBottom_WeaponInfo_C_PlayAkAudio Parms{};

	Parms.AkEvent = AkEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameBottom_WeaponInfo.UI_GameBottom_WeaponInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_C", "PreConstruct");

	Params::UI_GameBottom_WeaponInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameBottom_WeaponInfo.UI_GameBottom_WeaponInfo_C.SequenceEvent__ENTRYPOINTUI_GameBottom_WeaponInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameBottom_WeaponInfo_C::SequenceEvent__ENTRYPOINTUI_GameBottom_WeaponInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_C", "SequenceEvent__ENTRYPOINTUI_GameBottom_WeaponInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameBottom_WeaponInfo.UI_GameBottom_WeaponInfo_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWithAltWeapon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_C::SetActive(bool bActive, bool bWithAltWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_C", "SetActive");

	Params::UI_GameBottom_WeaponInfo_C_SetActive Parms{};

	Parms.bActive = bActive;
	Parms.bWithAltWeapon = bWithAltWeapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameBottom_WeaponInfo.UI_GameBottom_WeaponInfo_C.Show WeaponSlot Image
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameBottom_WeaponInfo_C::Show_WeaponSlot_Image(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameBottom_WeaponInfo_C", "Show WeaponSlot Image");

	Params::UI_GameBottom_WeaponInfo_C_Show_WeaponSlot_Image Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

