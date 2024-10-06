#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Deco_Back_002

#include "Basic.hpp"

#include "UI_Deco_Back_002_classes.hpp"
#include "UI_Deco_Back_002_parameters.hpp"


namespace SDK
{

// Function UI_Deco_Back_002.UI_Deco_Back_002_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Deco_Back_002_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_Back_002_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Deco_Back_002.UI_Deco_Back_002_C.ExecuteUbergraph_UI_Deco_Back_002
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Deco_Back_002_C::ExecuteUbergraph_UI_Deco_Back_002(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_Back_002_C", "ExecuteUbergraph_UI_Deco_Back_002");

	Params::UI_Deco_Back_002_C_ExecuteUbergraph_UI_Deco_Back_002 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Deco_Back_002.UI_Deco_Back_002_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Deco_Back_002_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_Back_002_C", "PreConstruct");

	Params::UI_Deco_Back_002_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Deco_Back_002.UI_Deco_Back_002_C.UISetTier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   Tier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Deco_Back_002_C::UISetTier(uint8 Tier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_Back_002_C", "UISetTier");

	Params::UI_Deco_Back_002_C_UISetTier Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);
}

}

