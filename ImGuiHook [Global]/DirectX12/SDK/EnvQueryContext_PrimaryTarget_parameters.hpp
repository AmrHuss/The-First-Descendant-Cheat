#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnvQueryContext_PrimaryTarget

#include "Basic.hpp"


namespace SDK::Params
{

// Function EnvQueryContext_PrimaryTarget.EnvQueryContext_PrimaryTarget_C.ProvideSingleActor
// 0x0038 (0x0038 - 0x0000)
struct EnvQueryContext_PrimaryTarget_C_ProvideSingleActor final
{
public:
	class UObject*                                QuerierObject;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 QuerierActor;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ResultingActor;                                    // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          CallFunc_GetAIController_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AM1EpicMonsterAIController*             K2Node_DynamicCast_AsM1Epic_Monster_AIController;  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetMainTarget_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EnvQueryContext_PrimaryTarget_C_ProvideSingleActor) == 0x000008, "Wrong alignment on EnvQueryContext_PrimaryTarget_C_ProvideSingleActor");
static_assert(sizeof(EnvQueryContext_PrimaryTarget_C_ProvideSingleActor) == 0x000038, "Wrong size on EnvQueryContext_PrimaryTarget_C_ProvideSingleActor");
static_assert(offsetof(EnvQueryContext_PrimaryTarget_C_ProvideSingleActor, QuerierObject) == 0x000000, "Member 'EnvQueryContext_PrimaryTarget_C_ProvideSingleActor::QuerierObject' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_PrimaryTarget_C_ProvideSingleActor, QuerierActor) == 0x000008, "Member 'EnvQueryContext_PrimaryTarget_C_ProvideSingleActor::QuerierActor' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_PrimaryTarget_C_ProvideSingleActor, ResultingActor) == 0x000010, "Member 'EnvQueryContext_PrimaryTarget_C_ProvideSingleActor::ResultingActor' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_PrimaryTarget_C_ProvideSingleActor, CallFunc_GetAIController_ReturnValue) == 0x000018, "Member 'EnvQueryContext_PrimaryTarget_C_ProvideSingleActor::CallFunc_GetAIController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_PrimaryTarget_C_ProvideSingleActor, K2Node_DynamicCast_AsM1Epic_Monster_AIController) == 0x000020, "Member 'EnvQueryContext_PrimaryTarget_C_ProvideSingleActor::K2Node_DynamicCast_AsM1Epic_Monster_AIController' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_PrimaryTarget_C_ProvideSingleActor, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'EnvQueryContext_PrimaryTarget_C_ProvideSingleActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_PrimaryTarget_C_ProvideSingleActor, CallFunc_GetMainTarget_ReturnValue) == 0x000030, "Member 'EnvQueryContext_PrimaryTarget_C_ProvideSingleActor::CallFunc_GetMainTarget_ReturnValue' has a wrong offset!");

}

