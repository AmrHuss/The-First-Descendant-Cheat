#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChattingItem

#include "Basic.hpp"

#include "UI_ChattingItem_classes.hpp"
#include "UI_ChattingItem_parameters.hpp"


namespace SDK
{

// Function UI_ChattingItem.UI_ChattingItem_C.CombineChattingTypeWithSenderString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UM1UIDataChatItem*                InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                           CombinedString                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UUI_ChattingItem_C::CombineChattingTypeWithSenderString(class UM1UIDataChatItem* InData, class FString* CombinedString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChattingItem_C", "CombineChattingTypeWithSenderString");

	Params::UI_ChattingItem_C_CombineChattingTypeWithSenderString Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

	if (CombinedString != nullptr)
		*CombinedString = std::move(Parms.CombinedString);
}


// Function UI_ChattingItem.UI_ChattingItem_C.ExecuteUbergraph_UI_ChattingItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChattingItem_C::ExecuteUbergraph_UI_ChattingItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChattingItem_C", "ExecuteUbergraph_UI_ChattingItem");

	Params::UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChattingItem.UI_ChattingItem_C.GetDecoratedSenderString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UM1UIDataChatItem*                InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                           DecoratedSender                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UUI_ChattingItem_C::GetDecoratedSenderString(class UM1UIDataChatItem* InData, class FString* DecoratedSender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChattingItem_C", "GetDecoratedSenderString");

	Params::UI_ChattingItem_C_GetDecoratedSenderString Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

	if (DecoratedSender != nullptr)
		*DecoratedSender = std::move(Parms.DecoratedSender);
}


// Function UI_ChattingItem.UI_ChattingItem_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_ChattingItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChattingItem_C", "OnListItemObjectSet");

	Params::UI_ChattingItem_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChattingItem.UI_ChattingItem_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_ChattingItem_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChattingItem_C", "SetDataImpl");

	Params::UI_ChattingItem_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}

}
