#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Guide

#include "Basic.hpp"

#include "UI_Mission_Guide_classes.hpp"
#include "UI_Mission_Guide_parameters.hpp"


namespace SDK
{

// Function UI_Mission_Guide.UI_Mission_Guide_C.BP_PlayFieldContentsFailAnim
// (Event, Public, BlueprintEvent)
// Parameters:
// EM1MissionSubType                       InSubType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Guide_C::BP_PlayFieldContentsFailAnim(EM1MissionSubType InSubType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Guide_C", "BP_PlayFieldContentsFailAnim");

	Params::UI_Mission_Guide_C_BP_PlayFieldContentsFailAnim Parms{};

	Parms.InSubType = InSubType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Guide.UI_Mission_Guide_C.BP_PlayFieldContentsStartAnim
// (Event, Public, BlueprintEvent)
// Parameters:
// EM1MissionSubType                       InSubType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Guide_C::BP_PlayFieldContentsStartAnim(EM1MissionSubType InSubType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Guide_C", "BP_PlayFieldContentsStartAnim");

	Params::UI_Mission_Guide_C_BP_PlayFieldContentsStartAnim Parms{};

	Parms.InSubType = InSubType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Guide.UI_Mission_Guide_C.BP_PlayFieldContentsSuccessAnim
// (Event, Public, BlueprintEvent)
// Parameters:
// EM1MissionSubType                       InSubType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Guide_C::BP_PlayFieldContentsSuccessAnim(EM1MissionSubType InSubType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Guide_C", "BP_PlayFieldContentsSuccessAnim");

	Params::UI_Mission_Guide_C_BP_PlayFieldContentsSuccessAnim Parms{};

	Parms.InSubType = InSubType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Guide.UI_Mission_Guide_C.BP_PlayMissionFailAnim
// (Event, Public, BlueprintEvent)

void UUI_Mission_Guide_C::BP_PlayMissionFailAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Guide_C", "BP_PlayMissionFailAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Guide.UI_Mission_Guide_C.BP_PlayMissionStartAnim
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             InMissionName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InMissionTypeName                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Guide_C::BP_PlayMissionStartAnim(class FName InMissionName, class FName InMissionTypeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Guide_C", "BP_PlayMissionStartAnim");

	Params::UI_Mission_Guide_C_BP_PlayMissionStartAnim Parms{};

	Parms.InMissionName = InMissionName;
	Parms.InMissionTypeName = InMissionTypeName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Guide.UI_Mission_Guide_C.BP_PlayMissionSuccessAnim
// (Event, Public, BlueprintEvent)

void UUI_Mission_Guide_C::BP_PlayMissionSuccessAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Guide_C", "BP_PlayMissionSuccessAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Guide.UI_Mission_Guide_C.BP_PlayVoidBattleFailAnim
// (Event, Public, BlueprintEvent)

void UUI_Mission_Guide_C::BP_PlayVoidBattleFailAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Guide_C", "BP_PlayVoidBattleFailAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Guide.UI_Mission_Guide_C.BP_PlayVoidBattleSuccessAnim
// (Event, Public, BlueprintEvent)

void UUI_Mission_Guide_C::BP_PlayVoidBattleSuccessAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Guide_C", "BP_PlayVoidBattleSuccessAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Guide.UI_Mission_Guide_C.ExecuteUbergraph_UI_Mission_Guide
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Guide_C::ExecuteUbergraph_UI_Mission_Guide(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Guide_C", "ExecuteUbergraph_UI_Mission_Guide");

	Params::UI_Mission_Guide_C_ExecuteUbergraph_UI_Mission_Guide Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Guide.UI_Mission_Guide_C.GetChildMissionWidgets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UM1UIChildMissionGuide*>   ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UM1UIChildMissionGuide*> UUI_Mission_Guide_C::GetChildMissionWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Guide_C", "GetChildMissionWidgets");

	Params::UI_Mission_Guide_C_GetChildMissionWidgets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

