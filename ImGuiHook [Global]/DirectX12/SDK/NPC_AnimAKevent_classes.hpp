#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_AnimAKevent

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_AnimAKevent.NPC_AnimAKevent_C
// 0x0038 (0x0070 - 0x0038)
class UNPC_AnimAKevent_C final : public UAnimNotify
{
public:
	bool                                          Debug_;                                            // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Event;                                             // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Follow;                                            // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AttachName;                                        // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                Offset;                                            // 0x0060(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_AnimAKevent_C">();
	}
	static class UNPC_AnimAKevent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNPC_AnimAKevent_C>();
	}
};
static_assert(alignof(UNPC_AnimAKevent_C) == 0x000008, "Wrong alignment on UNPC_AnimAKevent_C");
static_assert(sizeof(UNPC_AnimAKevent_C) == 0x000070, "Wrong size on UNPC_AnimAKevent_C");
static_assert(offsetof(UNPC_AnimAKevent_C, Debug_) == 0x000038, "Member 'UNPC_AnimAKevent_C::Debug_' has a wrong offset!");
static_assert(offsetof(UNPC_AnimAKevent_C, Event) == 0x000040, "Member 'UNPC_AnimAKevent_C::Event' has a wrong offset!");
static_assert(offsetof(UNPC_AnimAKevent_C, Follow) == 0x000048, "Member 'UNPC_AnimAKevent_C::Follow' has a wrong offset!");
static_assert(offsetof(UNPC_AnimAKevent_C, AttachName) == 0x000050, "Member 'UNPC_AnimAKevent_C::AttachName' has a wrong offset!");
static_assert(offsetof(UNPC_AnimAKevent_C, Offset) == 0x000060, "Member 'UNPC_AnimAKevent_C::Offset' has a wrong offset!");

}

