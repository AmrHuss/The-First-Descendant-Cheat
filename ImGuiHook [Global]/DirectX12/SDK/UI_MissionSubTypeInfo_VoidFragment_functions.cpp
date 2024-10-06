#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionSubTypeInfo_VoidFragment

#include "Basic.hpp"

#include "UI_MissionSubTypeInfo_VoidFragment_classes.hpp"
#include "UI_MissionSubTypeInfo_VoidFragment_parameters.hpp"


namespace SDK
{

// Function UI_MissionSubTypeInfo_VoidFragment.UI_MissionSubTypeInfo_VoidFragment_C.BP_SetVoidFragmentActivationInfo
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1ElementalDamageChannel               InChannel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MissionSubTypeInfo_VoidFragment_C::BP_SetVoidFragmentActivationInfo(EM1ElementalDamageChannel InChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionSubTypeInfo_VoidFragment_C", "BP_SetVoidFragmentActivationInfo");

	Params::UI_MissionSubTypeInfo_VoidFragment_C_BP_SetVoidFragmentActivationInfo Parms{};

	Parms.InChannel = InChannel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MissionSubTypeInfo_VoidFragment.UI_MissionSubTypeInfo_VoidFragment_C.ExecuteUbergraph_UI_MissionSubTypeInfo_VoidFragment
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MissionSubTypeInfo_VoidFragment_C::ExecuteUbergraph_UI_MissionSubTypeInfo_VoidFragment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionSubTypeInfo_VoidFragment_C", "ExecuteUbergraph_UI_MissionSubTypeInfo_VoidFragment");

	Params::UI_MissionSubTypeInfo_VoidFragment_C_ExecuteUbergraph_UI_MissionSubTypeInfo_VoidFragment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MissionSubTypeInfo_VoidFragment.UI_MissionSubTypeInfo_VoidFragment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MissionSubTypeInfo_VoidFragment_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionSubTypeInfo_VoidFragment_C", "PreConstruct");

	Params::UI_MissionSubTypeInfo_VoidFragment_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

