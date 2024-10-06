#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AudioZoneBox

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "BP_AudioActorBase_classes.hpp"
#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "AkAmbienceMultiple_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AkEnvZoneType_structs.hpp"
#include "Amb_Space_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AudioZoneBox.BP_AudioZoneBox_C
// 0x0250 (0x04A0 - 0x0250)
class ABP_AudioZoneBox_C : public ABP_AudioActorBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkLateReverbComponent*                 AkLateReverb;                                      // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkRoomComponent*                       AkRoom;                                            // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak3DSpot;                                          // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   ZoneInfo;                                          // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Zone;                                              // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak_Amb_zone;                                       // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   AttenuateRadius;                                   // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EAkEnvZoneType                                AkEnvZoneType;                                     // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAmb_Space                                    AmbSpace;                                          // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29A[0x6];                                      // 0x029A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Priority;                                          // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AmbIntensity;                                      // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GlobalEnvManager_C*                 GlobalManager;                                     // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   Comment;                                           // 0x02B8(0x0018)(Edit, BlueprintVisible)
	struct FLinearColor                           DebugColor;                                        // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             ZoneSoundHandler;                                  // 0x02E0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Slapback_FxStyle;                                  // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ZoneCloseAmount;                                   // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AdpativeSlapBackVol;                               // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UAkAudioEvent*, double>            RandomSpot3DSound;                                 // 0x0328(0x0050)(Edit, BlueprintVisible)
	class UAkAudioEvent*                          TwoDZoneAdditiveLP;                                // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Playerinside_;                                     // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUse2DZoneLongFadeOut_;                            // 0x0381(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_382[0x6];                                      // 0x0382(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          ThreeDCenterSpotLP;                                // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 FindSpotMeshName;                                  // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TMap<struct FVector, class FString>           AmbienceSpotSound;                                 // 0x03A0(0x0050)(Edit, BlueprintVisible)
	struct FAkAmbienceMultiple                    AmbienceDetectTool;                                // 0x03F0(0x0020)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	double                                        RAbsorption;                                       // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RDecay;                                            // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RStereoWidth;                                      // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RLevel;                                            // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ThreeDCenterSpotLPAttenuation;                     // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RPreDelay;                                         // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAkAudioEvent*>                  RandomSpot;                                        // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_AK_Ambient_3D_C*>            CullingObject;                                     // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class FString                                 VO_LocKey;                                         // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FTimerHandle                           GlobalManagerInitializeTimer;                      // 0x0470(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bCollisionActivated;                               // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_479[0x7];                                      // 0x0479(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_AudioZoneBox_C*>             SlaveOcclusionZone;                                // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ABP_AudioZoneBox_C*>             MasterOcclusionZone;                               // 0x0490(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ActiveIndoor_(bool* ActiveIndoor__0);
	void BndEvt__BP_AudioZoneBox_AreaMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_AudioZoneBox_Visualize_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BP_EnvZoneActiveByPlayer();
	void BP_EnvZoneDiscard();
	void Bp_EnvZoneEnter(class ABP_AudioZoneBox_C* OverlapedZone);
	void BP_EnvZoneInitActive();
	void BP_EnvZoneLeave(class ABP_AudioZoneBox_C* LeaveZone);
	void BpAkZone3dBaseRepeat(class UAkAudioEvent* RepeatAkEvent, double Delay);
	void BpAkZone3dSecodryRepeat(class UAkAudioEvent* RepeatAkEvent, double Delay);
	void BpSpawnDirecEnvEventStart();
	void CalculateAttenuate();
	void CollisionAcitive();
	void CustomEvent();
	void EnableAkComponentsTick(bool bEnable);
	void ExecuteUbergraph_BP_AudioZoneBox(int32 EntryPoint);
	void FillAllOverlappedZonesAsSlave();
	void FindAmbienceSpotPoint();
	class ABP_AudioZoneBox_C* GetHighestPriorityMaster();
	void IsIntersect(const struct FBox& A, const struct FBox& B, bool* bResult);
	void NotifyOcclusionToSlave(bool bActivated);
	void OnMyPlayerEnter();
	void ReceiveBeginPlay();
	void Reverb_param();
	void SetReverb();
	void Spawn3dEnvEvent(class UAkAudioEvent* AkEvent, class UAkAudioEvent** PlayedAk, double* Delay);
	void UpdateMasterOcclusionZones(const class ABP_AudioZoneBox_C*& InMaster, bool bAdd);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AudioZoneBox_C">();
	}
	static class ABP_AudioZoneBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AudioZoneBox_C>();
	}
};
static_assert(alignof(ABP_AudioZoneBox_C) == 0x000010, "Wrong alignment on ABP_AudioZoneBox_C");
static_assert(sizeof(ABP_AudioZoneBox_C) == 0x0004A0, "Wrong size on ABP_AudioZoneBox_C");
static_assert(offsetof(ABP_AudioZoneBox_C, UberGraphFrame) == 0x000250, "Member 'ABP_AudioZoneBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, AkLateReverb) == 0x000258, "Member 'ABP_AudioZoneBox_C::AkLateReverb' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, AkRoom) == 0x000260, "Member 'ABP_AudioZoneBox_C::AkRoom' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, Ak3DSpot) == 0x000268, "Member 'ABP_AudioZoneBox_C::Ak3DSpot' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, ZoneInfo) == 0x000270, "Member 'ABP_AudioZoneBox_C::ZoneInfo' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, Zone) == 0x000278, "Member 'ABP_AudioZoneBox_C::Zone' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, Ak_Amb_zone) == 0x000280, "Member 'ABP_AudioZoneBox_C::Ak_Amb_zone' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, AttenuateRadius) == 0x000288, "Member 'ABP_AudioZoneBox_C::AttenuateRadius' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, Root) == 0x000290, "Member 'ABP_AudioZoneBox_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, AkEnvZoneType) == 0x000298, "Member 'ABP_AudioZoneBox_C::AkEnvZoneType' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, AmbSpace) == 0x000299, "Member 'ABP_AudioZoneBox_C::AmbSpace' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, Priority) == 0x0002A0, "Member 'ABP_AudioZoneBox_C::Priority' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, AmbIntensity) == 0x0002A8, "Member 'ABP_AudioZoneBox_C::AmbIntensity' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, GlobalManager) == 0x0002B0, "Member 'ABP_AudioZoneBox_C::GlobalManager' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, Comment) == 0x0002B8, "Member 'ABP_AudioZoneBox_C::Comment' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, DebugColor) == 0x0002D0, "Member 'ABP_AudioZoneBox_C::DebugColor' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, ZoneSoundHandler) == 0x0002E0, "Member 'ABP_AudioZoneBox_C::ZoneSoundHandler' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, Slapback_FxStyle) == 0x000310, "Member 'ABP_AudioZoneBox_C::Slapback_FxStyle' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, ZoneCloseAmount) == 0x000318, "Member 'ABP_AudioZoneBox_C::ZoneCloseAmount' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, AdpativeSlapBackVol) == 0x000320, "Member 'ABP_AudioZoneBox_C::AdpativeSlapBackVol' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, RandomSpot3DSound) == 0x000328, "Member 'ABP_AudioZoneBox_C::RandomSpot3DSound' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, TwoDZoneAdditiveLP) == 0x000378, "Member 'ABP_AudioZoneBox_C::TwoDZoneAdditiveLP' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, Playerinside_) == 0x000380, "Member 'ABP_AudioZoneBox_C::Playerinside_' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, bUse2DZoneLongFadeOut_) == 0x000381, "Member 'ABP_AudioZoneBox_C::bUse2DZoneLongFadeOut_' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, ThreeDCenterSpotLP) == 0x000388, "Member 'ABP_AudioZoneBox_C::ThreeDCenterSpotLP' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, FindSpotMeshName) == 0x000390, "Member 'ABP_AudioZoneBox_C::FindSpotMeshName' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, AmbienceSpotSound) == 0x0003A0, "Member 'ABP_AudioZoneBox_C::AmbienceSpotSound' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, AmbienceDetectTool) == 0x0003F0, "Member 'ABP_AudioZoneBox_C::AmbienceDetectTool' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, RAbsorption) == 0x000410, "Member 'ABP_AudioZoneBox_C::RAbsorption' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, RDecay) == 0x000418, "Member 'ABP_AudioZoneBox_C::RDecay' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, RStereoWidth) == 0x000420, "Member 'ABP_AudioZoneBox_C::RStereoWidth' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, RLevel) == 0x000428, "Member 'ABP_AudioZoneBox_C::RLevel' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, ThreeDCenterSpotLPAttenuation) == 0x000430, "Member 'ABP_AudioZoneBox_C::ThreeDCenterSpotLPAttenuation' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, RPreDelay) == 0x000438, "Member 'ABP_AudioZoneBox_C::RPreDelay' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, RandomSpot) == 0x000440, "Member 'ABP_AudioZoneBox_C::RandomSpot' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, CullingObject) == 0x000450, "Member 'ABP_AudioZoneBox_C::CullingObject' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, VO_LocKey) == 0x000460, "Member 'ABP_AudioZoneBox_C::VO_LocKey' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, GlobalManagerInitializeTimer) == 0x000470, "Member 'ABP_AudioZoneBox_C::GlobalManagerInitializeTimer' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, bCollisionActivated) == 0x000478, "Member 'ABP_AudioZoneBox_C::bCollisionActivated' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, SlaveOcclusionZone) == 0x000480, "Member 'ABP_AudioZoneBox_C::SlaveOcclusionZone' has a wrong offset!");
static_assert(offsetof(ABP_AudioZoneBox_C, MasterOcclusionZone) == 0x000490, "Member 'ABP_AudioZoneBox_C::MasterOcclusionZone' has a wrong offset!");

}

