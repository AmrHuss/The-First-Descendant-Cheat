#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_VoidBattle_Succes

#include "Basic.hpp"

#include "UI_Mission_VoidBattle_Succes_classes.hpp"
#include "UI_Mission_VoidBattle_Succes_parameters.hpp"


namespace SDK
{

// Function UI_Mission_VoidBattle_Succes.UI_Mission_VoidBattle_Succes_C.BP_widget_playAkEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_VoidBattle_Succes_C::BP_widget_playAkEvent(class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Succes_C", "BP_widget_playAkEvent");

	Params::UI_Mission_VoidBattle_Succes_C_BP_widget_playAkEvent Parms{};

	Parms.AkEvent = AkEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_VoidBattle_Succes.UI_Mission_VoidBattle_Succes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Mission_VoidBattle_Succes_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Succes_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_VoidBattle_Succes.UI_Mission_VoidBattle_Succes_C.ExecuteUbergraph_UI_Mission_VoidBattle_Succes
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_VoidBattle_Succes_C::ExecuteUbergraph_UI_Mission_VoidBattle_Succes(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Succes_C", "ExecuteUbergraph_UI_Mission_VoidBattle_Succes");

	Params::UI_Mission_VoidBattle_Succes_C_ExecuteUbergraph_UI_Mission_VoidBattle_Succes Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_VoidBattle_Succes.UI_Mission_VoidBattle_Succes_C.Finished_4F34397543CA282A2EBA3E916F6D0515
// (BlueprintCallable, BlueprintEvent)

void UUI_Mission_VoidBattle_Succes_C::Finished_4F34397543CA282A2EBA3E916F6D0515()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Succes_C", "Finished_4F34397543CA282A2EBA3E916F6D0515");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_VoidBattle_Succes.UI_Mission_VoidBattle_Succes_C.PlayAnimOpenClose
// (BlueprintCallable, BlueprintEvent)

void UUI_Mission_VoidBattle_Succes_C::PlayAnimOpenClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Succes_C", "PlayAnimOpenClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_VoidBattle_Succes.UI_Mission_VoidBattle_Succes_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_VoidBattle_Succes_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Succes_C", "PreConstruct");

	Params::UI_Mission_VoidBattle_Succes_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_VoidBattle_Succes.UI_Mission_VoidBattle_Succes_C.SequenceEvent__ENTRYPOINTUI_Mission_VoidBattle_Succes
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Mission_VoidBattle_Succes_C::SequenceEvent__ENTRYPOINTUI_Mission_VoidBattle_Succes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Succes_C", "SequenceEvent__ENTRYPOINTUI_Mission_VoidBattle_Succes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_VoidBattle_Succes.UI_Mission_VoidBattle_Succes_C.GetEndAnimation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidgetAnimation* UUI_Mission_VoidBattle_Succes_C::GetEndAnimation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Succes_C", "GetEndAnimation");

	Params::UI_Mission_VoidBattle_Succes_C_GetEndAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

