#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cursor

#include "Basic.hpp"

#include "BP_Cursor_classes.hpp"
#include "BP_Cursor_parameters.hpp"


namespace SDK
{

// Function BP_Cursor.BP_Cursor_C.BP_ScaleCursorSize
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Factor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Cursor_C::BP_ScaleCursorSize(float Factor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cursor_C", "BP_ScaleCursorSize");

	Params::BP_Cursor_C_BP_ScaleCursorSize Parms{};

	Parms.Factor = Factor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cursor.BP_Cursor_C.BP_SetCursorState
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1MouseCursorState                     InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Cursor_C::BP_SetCursorState(EM1MouseCursorState InState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cursor_C", "BP_SetCursorState");

	Params::BP_Cursor_C_BP_SetCursorState Parms{};

	Parms.InState = InState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cursor.BP_Cursor_C.ExecuteUbergraph_BP_Cursor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Cursor_C::ExecuteUbergraph_BP_Cursor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cursor_C", "ExecuteUbergraph_BP_Cursor");

	Params::BP_Cursor_C_ExecuteUbergraph_BP_Cursor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
