#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Marker_Move

#include "Basic.hpp"

#include "UI_Mission_Marker_Move_classes.hpp"
#include "UI_Mission_Marker_Move_parameters.hpp"


namespace SDK
{

// Function UI_Mission_Marker_Move.UI_Mission_Marker_Move_C.BP_PlayMarkerAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_Mission_Marker_Move_C::BP_PlayMarkerAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Marker_Move_C", "BP_PlayMarkerAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Marker_Move.UI_Mission_Marker_Move_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Mission_Marker_Move_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Marker_Move_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Marker_Move.UI_Mission_Marker_Move_C.ExecuteUbergraph_UI_Mission_Marker_Move
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Marker_Move_C::ExecuteUbergraph_UI_Mission_Marker_Move(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Marker_Move_C", "ExecuteUbergraph_UI_Mission_Marker_Move");

	Params::UI_Mission_Marker_Move_C_ExecuteUbergraph_UI_Mission_Marker_Move Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Marker_Move.UI_Mission_Marker_Move_C.OnShowImpl
// (Event, Protected, BlueprintEvent)

void UUI_Mission_Marker_Move_C::OnShowImpl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Marker_Move_C", "OnShowImpl");

	UObject::ProcessEvent(Func, nullptr);
}

}

