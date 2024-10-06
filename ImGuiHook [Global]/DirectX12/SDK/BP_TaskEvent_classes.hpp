#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TaskEvent

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TaskEvent.BP_TaskEvent_C
// 0x0038 (0x01E8 - 0x01B0)
class UBP_TaskEvent_C final : public UM1TaskEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                   ClientMessage;                                     // 0x01B8(0x0018)(Edit, BlueprintVisible)
	class FText                                   ServerMessage;                                     // 0x01D0(0x0018)(Edit, BlueprintVisible)

public:
	void RunOnLocalImpl(class AM1Player* InPlayer);
	void RunOnAuthorityImpl(const TArray<class AM1Player*>& InPlayers);
	void ExecuteUbergraph_BP_TaskEvent(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TaskEvent_C">();
	}
	static class UBP_TaskEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TaskEvent_C>();
	}
};
static_assert(alignof(UBP_TaskEvent_C) == 0x000008, "Wrong alignment on UBP_TaskEvent_C");
static_assert(sizeof(UBP_TaskEvent_C) == 0x0001E8, "Wrong size on UBP_TaskEvent_C");
static_assert(offsetof(UBP_TaskEvent_C, UberGraphFrame) == 0x0001B0, "Member 'UBP_TaskEvent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TaskEvent_C, ClientMessage) == 0x0001B8, "Member 'UBP_TaskEvent_C::ClientMessage' has a wrong offset!");
static_assert(offsetof(UBP_TaskEvent_C, ServerMessage) == 0x0001D0, "Member 'UBP_TaskEvent_C::ServerMessage' has a wrong offset!");

}
