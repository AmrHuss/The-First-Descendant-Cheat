#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TaskSelector_VoidSkipShpereSeq

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_TaskSelector_VoidSkipShpereSeq.BP_TaskSelector_VoidSkipShpereSeq_C.BP_GetNextTaskLinkName
// 0x0010 (0x0010 - 0x0000)
struct BP_TaskSelector_VoidSkipShpereSeq_C_BP_GetNextTaskLinkName final
{
public:
	const class AM1MissionTaskActor*              InMissionTaskActor;                                // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TaskSelector_VoidSkipShpereSeq_C_BP_GetNextTaskLinkName) == 0x000008, "Wrong alignment on BP_TaskSelector_VoidSkipShpereSeq_C_BP_GetNextTaskLinkName");
static_assert(sizeof(BP_TaskSelector_VoidSkipShpereSeq_C_BP_GetNextTaskLinkName) == 0x000010, "Wrong size on BP_TaskSelector_VoidSkipShpereSeq_C_BP_GetNextTaskLinkName");
static_assert(offsetof(BP_TaskSelector_VoidSkipShpereSeq_C_BP_GetNextTaskLinkName, InMissionTaskActor) == 0x000000, "Member 'BP_TaskSelector_VoidSkipShpereSeq_C_BP_GetNextTaskLinkName::InMissionTaskActor' has a wrong offset!");
static_assert(offsetof(BP_TaskSelector_VoidSkipShpereSeq_C_BP_GetNextTaskLinkName, ReturnValue) == 0x000008, "Member 'BP_TaskSelector_VoidSkipShpereSeq_C_BP_GetNextTaskLinkName::ReturnValue' has a wrong offset!");

}
