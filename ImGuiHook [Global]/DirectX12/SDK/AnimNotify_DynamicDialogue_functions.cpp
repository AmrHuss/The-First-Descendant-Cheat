#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_DynamicDialogue

#include "Basic.hpp"

#include "AnimNotify_DynamicDialogue_classes.hpp"
#include "AnimNotify_DynamicDialogue_parameters.hpp"


namespace SDK
{

// Function AnimNotify_DynamicDialogue.AnimNotify_DynamicDialogue_C.GenerateArgPathes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AM1Player*                        InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   Array                                                  (ConstParm, Parm, OutParm)

void UAnimNotify_DynamicDialogue_C::GenerateArgPathes(class AM1Player* InputPin, const TArray<class FString>* Array) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_DynamicDialogue_C", "GenerateArgPathes");

	Params::AnimNotify_DynamicDialogue_C_GenerateArgPathes Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);
}


// Function AnimNotify_DynamicDialogue.AnimNotify_DynamicDialogue_C.Get M1Player String ID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AM1Character*                     M1Player                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           StringId                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UAnimNotify_DynamicDialogue_C::Get_M1Player_String_ID(class AM1Character* M1Player, class FString* StringId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_DynamicDialogue_C", "Get M1Player String ID");

	Params::AnimNotify_DynamicDialogue_C_Get_M1Player_String_ID Parms{};

	Parms.M1Player = M1Player;

	UObject::ProcessEvent(Func, &Parms);

	if (StringId != nullptr)
		*StringId = std::move(Parms.StringId);
}


// Function AnimNotify_DynamicDialogue.AnimNotify_DynamicDialogue_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UAnimNotify_DynamicDialogue_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_DynamicDialogue_C", "GetNotifyName");

	Params::AnimNotify_DynamicDialogue_C_GetNotifyName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AnimNotify_DynamicDialogue.AnimNotify_DynamicDialogue_C.Received_Notify
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference        EventReference                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAnimNotify_DynamicDialogue_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_DynamicDialogue_C", "Received_Notify");

	Params::AnimNotify_DynamicDialogue_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

