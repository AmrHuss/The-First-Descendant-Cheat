#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ViessaPassiveTargetInfo

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK
{

// UserDefinedStruct ViessaPassiveTargetInfo.ViessaPassiveTargetInfo
// 0x0028 (0x0028 - 0x0000)
struct FViessaPassiveTargetInfo final
{
public:
	class AActor*                                 Target_19_2093EFA4490A592A4D2E77B80F5B5EEC;        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityId                           StatusEffectID_18_774DE64C441FEA7B7EE7BFABCEBCF785; // 0x0008(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Level_13_887D85094A50D692E7EB3B8F4047B6F4;         // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Identity_17_0B3A25AD4F681B1170494889326E2404;      // 0x001C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FViessaPassiveTargetInfo) == 0x000008, "Wrong alignment on FViessaPassiveTargetInfo");
static_assert(sizeof(FViessaPassiveTargetInfo) == 0x000028, "Wrong size on FViessaPassiveTargetInfo");
static_assert(offsetof(FViessaPassiveTargetInfo, Target_19_2093EFA4490A592A4D2E77B80F5B5EEC) == 0x000000, "Member 'FViessaPassiveTargetInfo::Target_19_2093EFA4490A592A4D2E77B80F5B5EEC' has a wrong offset!");
static_assert(offsetof(FViessaPassiveTargetInfo, StatusEffectID_18_774DE64C441FEA7B7EE7BFABCEBCF785) == 0x000008, "Member 'FViessaPassiveTargetInfo::StatusEffectID_18_774DE64C441FEA7B7EE7BFABCEBCF785' has a wrong offset!");
static_assert(offsetof(FViessaPassiveTargetInfo, Level_13_887D85094A50D692E7EB3B8F4047B6F4) == 0x000018, "Member 'FViessaPassiveTargetInfo::Level_13_887D85094A50D692E7EB3B8F4047B6F4' has a wrong offset!");
static_assert(offsetof(FViessaPassiveTargetInfo, Identity_17_0B3A25AD4F681B1170494889326E2404) == 0x00001C, "Member 'FViessaPassiveTargetInfo::Identity_17_0B3A25AD4F681B1170494889326E2404' has a wrong offset!");

}

