#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M1PSO

#include "Basic.hpp"

#include "M1PSO_classes.hpp"


namespace SDK
{

// Function M1PSO.M1PSOCheat.PSOPlaySequence
// (Final, Native, Private)

void UM1PSOCheat::PSOPlaySequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M1PSOCheat", "PSOPlaySequence");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

