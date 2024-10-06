#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemIcon_Perk

#include "Basic.hpp"

#include "UI_ItemIcon_Perk_classes.hpp"
#include "UI_ItemIcon_Perk_parameters.hpp"


namespace SDK
{

// Function UI_ItemIcon_Perk.UI_ItemIcon_Perk_C.ExecuteUbergraph_UI_ItemIcon_Perk
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIcon_Perk_C::ExecuteUbergraph_UI_ItemIcon_Perk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_Perk_C", "ExecuteUbergraph_UI_ItemIcon_Perk");

	Params::UI_ItemIcon_Perk_C_ExecuteUbergraph_UI_ItemIcon_Perk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIcon_Perk.UI_ItemIcon_Perk_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIcon_Perk_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_Perk_C", "PreConstruct");

	Params::UI_ItemIcon_Perk_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIcon_Perk.UI_ItemIcon_Perk_C.SetPerkLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    MaxLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIcon_Perk_C::SetPerkLevel(int32 Level, bool MaxLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_Perk_C", "SetPerkLevel");

	Params::UI_ItemIcon_Perk_C_SetPerkLevel Parms{};

	Parms.Level = Level;
	Parms.MaxLevel = MaxLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIcon_Perk.UI_ItemIcon_Perk_C.SetUIStyel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ItemIcon_Perk_C::SetUIStyel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_Perk_C", "SetUIStyel");

	UObject::ProcessEvent(Func, nullptr);
}

}
