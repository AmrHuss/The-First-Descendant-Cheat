#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KawaiiPhysics

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "M1Actor_structs.hpp"


namespace SDK
{

// Enum KawaiiPhysics.EPlanarConstraint
// NumValues: 0x0005
enum class EPlanarConstraint : uint8
{
	None                                     = 0,
	X                                        = 1,
	Y                                        = 2,
	Z                                        = 3,
	EPlanarConstraint_MAX                    = 4,
};

// Enum KawaiiPhysics.EPhysicsSignificanceLevel
// NumValues: 0x0005
enum class EPhysicsSignificanceLevel : uint8
{
	Low                                      = 0,
	Medium                                   = 1,
	High                                     = 2,
	Num                                      = 3,
	EPhysicsSignificanceLevel_MAX            = 4,
};

// ScriptStruct KawaiiPhysics.CollisionLimitBase
// 0x0050 (0x0050 - 0x0000)
struct FCollisionLimitBase
{
public:
	struct FBoneReference                         DrivingBone;                                       // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                OffsetLocation;                                    // 0x0010(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               OffsetRotation;                                    // 0x001C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0xC];                                       // 0x0034(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  Rotation;                                          // 0x0040(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCollisionLimitBase) == 0x000010, "Wrong alignment on FCollisionLimitBase");
static_assert(sizeof(FCollisionLimitBase) == 0x000050, "Wrong size on FCollisionLimitBase");
static_assert(offsetof(FCollisionLimitBase, DrivingBone) == 0x000000, "Member 'FCollisionLimitBase::DrivingBone' has a wrong offset!");
static_assert(offsetof(FCollisionLimitBase, OffsetLocation) == 0x000010, "Member 'FCollisionLimitBase::OffsetLocation' has a wrong offset!");
static_assert(offsetof(FCollisionLimitBase, OffsetRotation) == 0x00001C, "Member 'FCollisionLimitBase::OffsetRotation' has a wrong offset!");
static_assert(offsetof(FCollisionLimitBase, Location) == 0x000028, "Member 'FCollisionLimitBase::Location' has a wrong offset!");
static_assert(offsetof(FCollisionLimitBase, Rotation) == 0x000040, "Member 'FCollisionLimitBase::Rotation' has a wrong offset!");

// ScriptStruct KawaiiPhysics.SphericalLimit
// 0x0010 (0x0060 - 0x0050)
struct FSphericalLimit final : public FCollisionLimitBase
{
public:
	float                                         Radius;                                            // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESphericalLimitType                           LimitType;                                         // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_55[0xB];                                       // 0x0055(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSphericalLimit) == 0x000010, "Wrong alignment on FSphericalLimit");
static_assert(sizeof(FSphericalLimit) == 0x000060, "Wrong size on FSphericalLimit");
static_assert(offsetof(FSphericalLimit, Radius) == 0x000050, "Member 'FSphericalLimit::Radius' has a wrong offset!");
static_assert(offsetof(FSphericalLimit, LimitType) == 0x000054, "Member 'FSphericalLimit::LimitType' has a wrong offset!");

// ScriptStruct KawaiiPhysics.CapsuleLimit
// 0x0010 (0x0060 - 0x0050)
struct FCapsuleLimit final : public FCollisionLimitBase
{
public:
	float                                         Radius;                                            // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Length;                                            // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0x8];                                       // 0x0058(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCapsuleLimit) == 0x000010, "Wrong alignment on FCapsuleLimit");
static_assert(sizeof(FCapsuleLimit) == 0x000060, "Wrong size on FCapsuleLimit");
static_assert(offsetof(FCapsuleLimit, Radius) == 0x000050, "Member 'FCapsuleLimit::Radius' has a wrong offset!");
static_assert(offsetof(FCapsuleLimit, Length) == 0x000054, "Member 'FCapsuleLimit::Length' has a wrong offset!");

// ScriptStruct KawaiiPhysics.PlanarLimit
// 0x0010 (0x0060 - 0x0050)
struct FPlanarLimit final : public FCollisionLimitBase
{
public:
	struct FPlane                                 Plane;                                             // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlanarLimit) == 0x000010, "Wrong alignment on FPlanarLimit");
static_assert(sizeof(FPlanarLimit) == 0x000060, "Wrong size on FPlanarLimit");
static_assert(offsetof(FPlanarLimit, Plane) == 0x000050, "Member 'FPlanarLimit::Plane' has a wrong offset!");

// ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
// 0x0030 (0x0030 - 0x0000)
struct FKawaiiPhysicsSettings final
{
public:
	float                                         Damping;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WorldDampingLocation;                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WorldDampingRotation;                              // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Stiffness;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LimitAngle;                                        // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              LimitAngleX;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              LimitAngleY;                                       // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              LimitAngleZ;                                       // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKawaiiPhysicsSettings) == 0x000004, "Wrong alignment on FKawaiiPhysicsSettings");
static_assert(sizeof(FKawaiiPhysicsSettings) == 0x000030, "Wrong size on FKawaiiPhysicsSettings");
static_assert(offsetof(FKawaiiPhysicsSettings, Damping) == 0x000000, "Member 'FKawaiiPhysicsSettings::Damping' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsSettings, WorldDampingLocation) == 0x000004, "Member 'FKawaiiPhysicsSettings::WorldDampingLocation' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsSettings, WorldDampingRotation) == 0x000008, "Member 'FKawaiiPhysicsSettings::WorldDampingRotation' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsSettings, Stiffness) == 0x00000C, "Member 'FKawaiiPhysicsSettings::Stiffness' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsSettings, Radius) == 0x000010, "Member 'FKawaiiPhysicsSettings::Radius' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsSettings, LimitAngle) == 0x000014, "Member 'FKawaiiPhysicsSettings::LimitAngle' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsSettings, LimitAngleX) == 0x000018, "Member 'FKawaiiPhysicsSettings::LimitAngleX' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsSettings, LimitAngleY) == 0x000020, "Member 'FKawaiiPhysicsSettings::LimitAngleY' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsSettings, LimitAngleZ) == 0x000028, "Member 'FKawaiiPhysicsSettings::LimitAngleZ' has a wrong offset!");

// ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
// 0x00D0 (0x00D0 - 0x0000)
struct FKawaiiPhysicsModifyBone final
{
public:
	struct FBoneReference                         BoneRef;                                           // 0x0000(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                         ParentIndex;                                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 ChildIndexs;                                       // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FKawaiiPhysicsSettings                 PhysicsSettings;                                   // 0x0028(0x0030)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PrevLocation;                                      // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                  PrevRotation;                                      // 0x0070(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PoseLocation;                                      // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  PoseRotation;                                      // 0x0090(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PoseScale;                                         // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PoseMovement;                                      // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WindVelocity;                                      // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LengthFromRoot;                                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDummy;                                            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FKawaiiPhysicsModifyBone) == 0x000010, "Wrong alignment on FKawaiiPhysicsModifyBone");
static_assert(sizeof(FKawaiiPhysicsModifyBone) == 0x0000D0, "Wrong size on FKawaiiPhysicsModifyBone");
static_assert(offsetof(FKawaiiPhysicsModifyBone, BoneRef) == 0x000000, "Member 'FKawaiiPhysicsModifyBone::BoneRef' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, ParentIndex) == 0x000010, "Member 'FKawaiiPhysicsModifyBone::ParentIndex' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, ChildIndexs) == 0x000018, "Member 'FKawaiiPhysicsModifyBone::ChildIndexs' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, PhysicsSettings) == 0x000028, "Member 'FKawaiiPhysicsModifyBone::PhysicsSettings' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, Location) == 0x000058, "Member 'FKawaiiPhysicsModifyBone::Location' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, PrevLocation) == 0x000064, "Member 'FKawaiiPhysicsModifyBone::PrevLocation' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, PrevRotation) == 0x000070, "Member 'FKawaiiPhysicsModifyBone::PrevRotation' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseLocation) == 0x000080, "Member 'FKawaiiPhysicsModifyBone::PoseLocation' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseRotation) == 0x000090, "Member 'FKawaiiPhysicsModifyBone::PoseRotation' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseScale) == 0x0000A0, "Member 'FKawaiiPhysicsModifyBone::PoseScale' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseMovement) == 0x0000AC, "Member 'FKawaiiPhysicsModifyBone::PoseMovement' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, WindVelocity) == 0x0000B8, "Member 'FKawaiiPhysicsModifyBone::WindVelocity' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, LengthFromRoot) == 0x0000C4, "Member 'FKawaiiPhysicsModifyBone::LengthFromRoot' has a wrong offset!");
static_assert(offsetof(FKawaiiPhysicsModifyBone, bDummy) == 0x0000C8, "Member 'FKawaiiPhysicsModifyBone::bDummy' has a wrong offset!");

// ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
// 0x01B8 (0x0280 - 0x00C8)
struct FAnimNode_KawaiiPhysics final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         RootBone;                                          // 0x00C8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                 ExcludeBones;                                      // 0x00D8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                 RootBonesParallel;                                 // 0x00E8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         TargetFrameRate;                                   // 0x00F8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OverrideTargetFramerate;                           // 0x00FC(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKawaiiPhysicsSettings                 PhysicsSettings;                                   // 0x0100(0x0030)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                            DampingCurve;                                      // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            WorldDampingLocationCurve;                         // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            WorldDampingRotationCurve;                         // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            StiffnessCurve;                                    // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            RadiusCurve;                                       // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            LimitAngleCurve;                                   // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            SmoothingCurve;                                    // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUpdatePhysicsSettingsInGame;                      // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_169[0x3];                                      // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DummyBoneLength;                                   // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPlanarConstraint                             PlanarConstraint;                                  // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSphericalLimit>                SphericalLimits;                                   // 0x0178(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCapsuleLimit>                  CapsuleLimits;                                     // 0x0188(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPlanarLimit>                   PlanarLimits;                                      // 0x0198(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         TeleportDistanceThreshold;                         // 0x01A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TeleportRotationThreshold;                         // 0x01AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Gravity;                                           // 0x01B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableWind;                                       // 0x01BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BD[0x3];                                      // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WindScale;                                         // 0x01C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FM1WindChannels                        WindChannels;                                      // 0x01C4(0x0001)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C5[0x3];                                      // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InterpSpeedWhenSuspendingSim;                      // 0x01C8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EvaluationResetTime;                               // 0x01CC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EvaluationSuspendSimTimeAfterReset;                // 0x01D0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EvaluationSmoothingTime;                           // 0x01D4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SmoothMovementThreshold;                           // 0x01D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPhysicsSignificanceLevel                     Significance;                                      // 0x01DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DD[0x3];                                      // 0x01DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKawaiiPhysicsModifyBone>       ModifyBones;                                       // 0x01E0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         TotalBoneLength;                                   // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1F4[0xC];                                      // 0x01F4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             PreSkelCompTransform;                              // 0x0200(0x0030)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bInitPhysicsSettings;                              // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_231[0x4F];                                     // 0x0231(0x004F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimNode_KawaiiPhysics) == 0x000010, "Wrong alignment on FAnimNode_KawaiiPhysics");
static_assert(sizeof(FAnimNode_KawaiiPhysics) == 0x000280, "Wrong size on FAnimNode_KawaiiPhysics");
static_assert(offsetof(FAnimNode_KawaiiPhysics, RootBone) == 0x0000C8, "Member 'FAnimNode_KawaiiPhysics::RootBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, ExcludeBones) == 0x0000D8, "Member 'FAnimNode_KawaiiPhysics::ExcludeBones' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, RootBonesParallel) == 0x0000E8, "Member 'FAnimNode_KawaiiPhysics::RootBonesParallel' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, TargetFrameRate) == 0x0000F8, "Member 'FAnimNode_KawaiiPhysics::TargetFrameRate' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, OverrideTargetFramerate) == 0x0000FC, "Member 'FAnimNode_KawaiiPhysics::OverrideTargetFramerate' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, PhysicsSettings) == 0x000100, "Member 'FAnimNode_KawaiiPhysics::PhysicsSettings' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, DampingCurve) == 0x000130, "Member 'FAnimNode_KawaiiPhysics::DampingCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingLocationCurve) == 0x000138, "Member 'FAnimNode_KawaiiPhysics::WorldDampingLocationCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingRotationCurve) == 0x000140, "Member 'FAnimNode_KawaiiPhysics::WorldDampingRotationCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, StiffnessCurve) == 0x000148, "Member 'FAnimNode_KawaiiPhysics::StiffnessCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, RadiusCurve) == 0x000150, "Member 'FAnimNode_KawaiiPhysics::RadiusCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitAngleCurve) == 0x000158, "Member 'FAnimNode_KawaiiPhysics::LimitAngleCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, SmoothingCurve) == 0x000160, "Member 'FAnimNode_KawaiiPhysics::SmoothingCurve' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, bUpdatePhysicsSettingsInGame) == 0x000168, "Member 'FAnimNode_KawaiiPhysics::bUpdatePhysicsSettingsInGame' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, DummyBoneLength) == 0x00016C, "Member 'FAnimNode_KawaiiPhysics::DummyBoneLength' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarConstraint) == 0x000170, "Member 'FAnimNode_KawaiiPhysics::PlanarConstraint' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, SphericalLimits) == 0x000178, "Member 'FAnimNode_KawaiiPhysics::SphericalLimits' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, CapsuleLimits) == 0x000188, "Member 'FAnimNode_KawaiiPhysics::CapsuleLimits' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarLimits) == 0x000198, "Member 'FAnimNode_KawaiiPhysics::PlanarLimits' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, TeleportDistanceThreshold) == 0x0001A8, "Member 'FAnimNode_KawaiiPhysics::TeleportDistanceThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, TeleportRotationThreshold) == 0x0001AC, "Member 'FAnimNode_KawaiiPhysics::TeleportRotationThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, Gravity) == 0x0001B0, "Member 'FAnimNode_KawaiiPhysics::Gravity' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, bEnableWind) == 0x0001BC, "Member 'FAnimNode_KawaiiPhysics::bEnableWind' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, WindScale) == 0x0001C0, "Member 'FAnimNode_KawaiiPhysics::WindScale' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, WindChannels) == 0x0001C4, "Member 'FAnimNode_KawaiiPhysics::WindChannels' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, InterpSpeedWhenSuspendingSim) == 0x0001C8, "Member 'FAnimNode_KawaiiPhysics::InterpSpeedWhenSuspendingSim' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, EvaluationResetTime) == 0x0001CC, "Member 'FAnimNode_KawaiiPhysics::EvaluationResetTime' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, EvaluationSuspendSimTimeAfterReset) == 0x0001D0, "Member 'FAnimNode_KawaiiPhysics::EvaluationSuspendSimTimeAfterReset' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, EvaluationSmoothingTime) == 0x0001D4, "Member 'FAnimNode_KawaiiPhysics::EvaluationSmoothingTime' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, SmoothMovementThreshold) == 0x0001D8, "Member 'FAnimNode_KawaiiPhysics::SmoothMovementThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, Significance) == 0x0001DC, "Member 'FAnimNode_KawaiiPhysics::Significance' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, ModifyBones) == 0x0001E0, "Member 'FAnimNode_KawaiiPhysics::ModifyBones' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, TotalBoneLength) == 0x0001F0, "Member 'FAnimNode_KawaiiPhysics::TotalBoneLength' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, PreSkelCompTransform) == 0x000200, "Member 'FAnimNode_KawaiiPhysics::PreSkelCompTransform' has a wrong offset!");
static_assert(offsetof(FAnimNode_KawaiiPhysics, bInitPhysicsSettings) == 0x000230, "Member 'FAnimNode_KawaiiPhysics::bInitPhysicsSettings' has a wrong offset!");

}

