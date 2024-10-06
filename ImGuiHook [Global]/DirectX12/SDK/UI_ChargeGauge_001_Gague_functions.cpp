#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChargeGauge_001_Gague

#include "Basic.hpp"

#include "UI_ChargeGauge_001_Gague_classes.hpp"
#include "UI_ChargeGauge_001_Gague_parameters.hpp"


namespace SDK
{

// Function UI_ChargeGauge_001_Gague.UI_ChargeGauge_001_Gague_C.ClearCloseTimer
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_ChargeGauge_001_Gague_C::ClearCloseTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_Gague_C", "ClearCloseTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ChargeGauge_001_Gague.UI_ChargeGauge_001_Gague_C.CloseGauge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCloseImmediately                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChargeGauge_001_Gague_C::CloseGauge(bool bCloseImmediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_Gague_C", "CloseGauge");

	Params::UI_ChargeGauge_001_Gague_C_CloseGauge Parms{};

	Parms.bCloseImmediately = bCloseImmediately;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChargeGauge_001_Gague.UI_ChargeGauge_001_Gague_C.ExecuteUbergraph_UI_ChargeGauge_001_Gague
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChargeGauge_001_Gague_C::ExecuteUbergraph_UI_ChargeGauge_001_Gague(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_Gague_C", "ExecuteUbergraph_UI_ChargeGauge_001_Gague");

	Params::UI_ChargeGauge_001_Gague_C_ExecuteUbergraph_UI_ChargeGauge_001_Gague Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChargeGauge_001_Gague.UI_ChargeGauge_001_Gague_C.OnCloseAnimEnd
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_ChargeGauge_001_Gague_C::OnCloseAnimEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_Gague_C", "OnCloseAnimEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ChargeGauge_001_Gague.UI_ChargeGauge_001_Gague_C.OpenGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ChargeGauge_001_Gague_C::OpenGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_Gague_C", "OpenGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ChargeGauge_001_Gague.UI_ChargeGauge_001_Gague_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChargeGauge_001_Gague_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_Gague_C", "PreConstruct");

	Params::UI_ChargeGauge_001_Gague_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChargeGauge_001_Gague.UI_ChargeGauge_001_Gague_C.UISetColor_Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     BaseColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     MultiplyColor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChargeGauge_001_Gague_C::UISetColor_Effect(const struct FLinearColor& BaseColor, const struct FLinearColor& MultiplyColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_Gague_C", "UISetColor_Effect");

	Params::UI_ChargeGauge_001_Gague_C_UISetColor_Effect Parms{};

	Parms.BaseColor = std::move(BaseColor);
	Parms.MultiplyColor = std::move(MultiplyColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChargeGauge_001_Gague.UI_ChargeGauge_001_Gague_C.UISetColor_Max
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Max_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     MaxLevelColor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChargeGauge_001_Gague_C::UISetColor_Max(bool Max_0, const struct FLinearColor& MaxLevelColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_Gague_C", "UISetColor_Max");

	Params::UI_ChargeGauge_001_Gague_C_UISetColor_Max Parms{};

	Parms.Max_0 = Max_0;
	Parms.MaxLevelColor = std::move(MaxLevelColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChargeGauge_001_Gague.UI_ChargeGauge_001_Gague_C.UISetDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ChargeGauge_001_Gague_C::UISetDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_Gague_C", "UISetDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ChargeGauge_001_Gague.UI_ChargeGauge_001_Gague_C.UISetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InAngle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChargeGauge_001_Gague_C::UISetMaterial(double InAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_Gague_C", "UISetMaterial");

	Params::UI_ChargeGauge_001_Gague_C_UISetMaterial Parms{};

	Parms.InAngle = InAngle;

	UObject::ProcessEvent(Func, &Parms);
}

}

