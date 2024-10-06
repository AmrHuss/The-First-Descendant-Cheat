#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mag_AK_PC_Reload_State

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Mag_AK_PC_Reload_State.Mag_AK_PC_Reload_State_C.Received_NotifyBegin
// 0x0080 (0x0080 - 0x0000)
struct Mag_AK_PC_Reload_State_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0018(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEventAtLocation_ReturnValue;          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EValidOutputPin                               CallFunc_FindAkComponentWithValid_OutputPins;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AkComponent*                         CallFunc_FindAkComponentWithValid_ReturnValue;     // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on Mag_AK_PC_Reload_State_C_Received_NotifyBegin");
static_assert(sizeof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin) == 0x000080, "Wrong size on Mag_AK_PC_Reload_State_C_Received_NotifyBegin");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin, EventReference) == 0x000018, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyBegin::EventReference' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin, ReturnValue) == 0x000040, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000044, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyBegin::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000050, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin, CallFunc_PostEventAtLocation_ReturnValue) == 0x000058, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyBegin::CallFunc_PostEventAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue_1) == 0x000060, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin, CallFunc_FindAkComponentWithValid_OutputPins) == 0x000068, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyBegin::CallFunc_FindAkComponentWithValid_OutputPins' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin, CallFunc_FindAkComponentWithValid_ReturnValue) == 0x000070, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyBegin::CallFunc_FindAkComponentWithValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyBegin, K2Node_SwitchEnum_CmpSuccess) == 0x000079, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyBegin::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function Mag_AK_PC_Reload_State.Mag_AK_PC_Reload_State_C.Received_NotifyEnd
// 0x0068 (0x0068 - 0x0000)
struct Mag_AK_PC_Reload_State_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValidOutputPin                               CallFunc_FindAkComponentWithValid_OutputPins;      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AkComponent*                         CallFunc_FindAkComponentWithValid_ReturnValue;     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mag_AK_PC_Reload_State_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on Mag_AK_PC_Reload_State_C_Received_NotifyEnd");
static_assert(sizeof(Mag_AK_PC_Reload_State_C_Received_NotifyEnd) == 0x000068, "Wrong size on Mag_AK_PC_Reload_State_C_Received_NotifyEnd");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyEnd, EventReference) == 0x000010, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyEnd::EventReference' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyEnd, ReturnValue) == 0x000038, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue_1) == 0x000048, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyEnd, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyEnd::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyEnd, CallFunc_FindAkComponentWithValid_OutputPins) == 0x000051, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyEnd::CallFunc_FindAkComponentWithValid_OutputPins' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyEnd, CallFunc_FindAkComponentWithValid_ReturnValue) == 0x000058, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyEnd::CallFunc_FindAkComponentWithValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mag_AK_PC_Reload_State_C_Received_NotifyEnd, K2Node_SwitchEnum_CmpSuccess) == 0x000060, "Member 'Mag_AK_PC_Reload_State_C_Received_NotifyEnd::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
