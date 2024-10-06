#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_VoiceChatting

#include "Basic.hpp"

#include "UI_VoiceChatting_classes.hpp"
#include "UI_VoiceChatting_parameters.hpp"


namespace SDK
{

// Function UI_VoiceChatting.UI_VoiceChatting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_VoiceChatting_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_VoiceChatting_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_VoiceChatting.UI_VoiceChatting_C.ExecuteUbergraph_UI_VoiceChatting
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VoiceChatting_C::ExecuteUbergraph_UI_VoiceChatting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_VoiceChatting_C", "ExecuteUbergraph_UI_VoiceChatting");

	Params::UI_VoiceChatting_C_ExecuteUbergraph_UI_VoiceChatting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_VoiceChatting.UI_VoiceChatting_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VoiceChatting_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_VoiceChatting_C", "PreConstruct");

	Params::UI_VoiceChatting_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

