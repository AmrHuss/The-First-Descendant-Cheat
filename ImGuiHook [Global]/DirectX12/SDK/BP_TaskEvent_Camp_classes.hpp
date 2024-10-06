#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TaskEvent_Camp

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TaskEvent_Camp.BP_TaskEvent_Camp_C
// 0x0008 (0x01D8 - 0x01D0)
class UBP_TaskEvent_Camp_C final : public UM1TaskEvent_EntryPoint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_TaskEvent_Camp(int32 EntryPoint);
	void BP_ActivateEntryPoint(bool bPlayActivateAnimation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TaskEvent_Camp_C">();
	}
	static class UBP_TaskEvent_Camp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TaskEvent_Camp_C>();
	}
};
static_assert(alignof(UBP_TaskEvent_Camp_C) == 0x000008, "Wrong alignment on UBP_TaskEvent_Camp_C");
static_assert(sizeof(UBP_TaskEvent_Camp_C) == 0x0001D8, "Wrong size on UBP_TaskEvent_Camp_C");
static_assert(offsetof(UBP_TaskEvent_Camp_C, UberGraphFrame) == 0x0001D0, "Member 'UBP_TaskEvent_Camp_C::UberGraphFrame' has a wrong offset!");

}
