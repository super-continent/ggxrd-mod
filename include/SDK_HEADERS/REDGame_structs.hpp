/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: REDGame_structs.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct REDGame.REDGameCommon_Define.SparringInformation
// 0x0014
struct FSparringInformation
{
	int32_t                                            Timer[2];                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            PrevSeconds[2];                                // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bTimerCount : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct REDGame.Menu_DebugTop.DebugMenu
// 0x000C
struct FDebugMenu
{
	class FString                                      DebugMenuName;                                 // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDAdvPresetCameraArray.PresetCameraItem
// 0x0024
struct FPresetCameraItem
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Rotation;                                      // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              FOV;                                           // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        SocketName;                                    // 0x001C (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct REDGame.REDSoundCueArray.SoundCueData
// 0x000C
struct FSoundCueData
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   Cue;                                           // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct REDGame.REDAnimArray.AnimData
// 0x0010
struct FAnimData
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UREDAnimTree*                                AnimTree;                                      // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAnimSet*                                    AnimSet;                                       // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct REDGame.REDAnimNodeBlendLip.BlendLipKeyFrame
// 0x0008
struct FBlendLipKeyFrame
{
	int32_t                                            Pattern;                                       // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            frame;                                         // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct REDGame.REDAnimNodeLimitedBlendSlot.SetAnimPosArgBackup
// 0x0010
struct FSetAnimPosArgBackup
{
	class FName                                        InAnimSeqName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              InPosition;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bFireNotifies : 1;                             // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLooping : 1;                                  // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bEnableRootMotion : 1;                         // 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bSet : 1;                                      // 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct REDGame.REDAnimNodeLookAtBattle.LookAtLinkSkelControl
// 0x0010
struct FLookAtLinkSkelControl
{
	class FName                                        ControlName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              RotationLeft;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RotationRight;                                 // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct REDGame.REDGameInfo.SpawnPlayerInfo
// 0x0064
struct FSpawnPlayerInfo
{
	uint8_t                                            PlayerID;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      CharaID;                                       // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      EnemyCharaID;                                  // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MeshID;                                        // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            ColorID;                                       // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            VoiceID;                                       // 0x0024 (0x0004) [0x0000000000000000]               
	class FString                                      MeshIDString;                                  // 0x0028 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ColorIDString;                                 // 0x0034 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DramaIDString;                                 // 0x0040 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      EnemyDramaIDString;                            // 0x004C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      VersionSuffix;                                 // 0x0058 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDArcadeScript.EventLoadCharaList
// 0x0070
struct FEventLoadCharaList
{
	class FString                                      CharaID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FSpawnPlayerInfo                            Info;                                          // 0x000C (0x0064) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDArcadeScript.EventPresetCameraOffset
// 0x0018
struct FEventPresetCameraOffset
{
	class FString                                      CharaID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     offset;                                        // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDArcadeScript.EventPlayingBGM
// 0x0010
struct FEventPlayingBGM
{
	class FString                                      Name;                                          // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAudioComponent*                             Component;                                     // 0x000C (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct REDGame.REDBGMaterialController.FogDefaultParams
// 0x0008
struct FFogDefaultParams
{
	struct FColor                                      DefOppositeLightColor;                         // 0x0000 (0x0004) [0x0000000000000000]               
	struct FColor                                      DefLightInscatteringColor;                     // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDCameraShakePatterns.CameraShakeParam
// 0x000C
struct FCameraShakeParam
{
	class FName                                        PatternName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UCameraShake*                                ShakePattern;                                  // 0x0008 (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct REDGame.REDCameraOffsetDataArray.CameraOffsetData
// 0x0018
struct FCameraOffsetData
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct REDGame.REDCamera_Battle.PlayBattleCameraAnimInfo
// 0x0024
struct FPlayBattleCameraAnimInfo
{
	class UCameraAnim*                                 Anim;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class AREDPawn*                                    Pawn;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	class AREDPawn*                                    LocCenterPawn;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            BlendInFrame;                                  // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            BlendOutFrame;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bMirrorX : 1;                                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsUpdateOrthoBlend : 1;                       // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsOrthoBlendTransversal : 1;                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bUseCenterPos : 1;                             // 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     Center;                                        // 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDCamera_Battle.MoveToPosInfo
// 0x009C
struct FMoveToPosInfo
{
	struct FTPOV                                       TargetPOV;                                     // 0x0000 (0x001C) [0x0000000000000000]               
	struct FTPOV                                       PrevPOV;                                       // 0x001C (0x001C) [0x0000000000000000]               
	struct FTPOV                                       LastPOV;                                       // 0x0038 (0x001C) [0x0000000000000000]               
	class AREDPawn*                                    PlayRequestPawn;                               // 0x0054 (0x0004) [0x0000000000000000]               
	class AREDPawn*                                    BasePawn;                                      // 0x0058 (0x0004) [0x0000000000000000]               
	class AREDPawn*                                    LookAtPawn;                                    // 0x005C (0x0004) [0x0000000000000000]               
	struct FVector                                     LookAtOffset;                                  // 0x0060 (0x000C) [0x0000000000000000]               
	int32_t                                            inFrame;                                       // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            stayFrame;                                     // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            outFrame;                                      // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            FreezeFrame;                                   // 0x0078 (0x0004) [0x0000000000000000]               
	float                                              Distance;                                      // 0x007C (0x0004) [0x0000000000000000]               
	float                                              LookPosPercent;                                // 0x0080 (0x0004) [0x0000000000000000]               
	int32_t                                            State;                                         // 0x0084 (0x0004) [0x0000000000000000]               
	int32_t                                            InInterpType;                                  // 0x0088 (0x0004) [0x0000000000000000]               
	int32_t                                            OutInterpType;                                 // 0x008C (0x0004) [0x0000000000000000]               
	uint32_t                                           bBlendLastPOV : 1;                             // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Counter;                                       // 0x0094 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUpdateOrthoBlend : 1;                         // 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOrthoBlendTransversal : 1;                    // 0x0098 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct REDGame.REDCamera_Battle.EventCameraInfo
// 0x00C8
struct FEventCameraInfo
{
	struct FTPOV                                       PreFramePOV;                                   // 0x0000 (0x001C) [0x0000000000000000]               
	struct FTPOV                                       TargetPOV;                                     // 0x001C (0x001C) [0x0000000000000000]               
	struct FTPOV                                       StartPOV;                                      // 0x0038 (0x001C) [0x0000000000000000]               
	int32_t                                            Count;                                         // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            CountMax;                                      // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            ShakeCount;                                    // 0x005C (0x0004) [0x0000000000000000]               
	int32_t                                            ShakeCountMax;                                 // 0x0060 (0x0004) [0x0000000000000000]               
	struct FVector                                     Shake;                                         // 0x0064 (0x000C) [0x0000000000000000]               
	uint32_t                                           ShakeFadeout : 1;                              // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FRotator                                    RotateStart;                                   // 0x0074 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RotateEnd;                                     // 0x0080 (0x000C) [0x0000000000000000]               
	int32_t                                            RotateCount;                                   // 0x008C (0x0004) [0x0000000000000000]               
	int32_t                                            RotateCountMax;                                // 0x0090 (0x0004) [0x0000000000000000]               
	struct FVector                                     MoveStart;                                     // 0x0094 (0x000C) [0x0000000000000000]               
	struct FVector                                     MoveEnd;                                       // 0x00A0 (0x000C) [0x0000000000000000]               
	int32_t                                            MoveCount;                                     // 0x00AC (0x0004) [0x0000000000000000]               
	int32_t                                            MoveCountMax;                                  // 0x00B0 (0x0004) [0x0000000000000000]               
	uint32_t                                           IsWorldLocation : 1;                           // 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FOVStart;                                      // 0x00B8 (0x0004) [0x0000000000000000]               
	float                                              FOVEnd;                                        // 0x00BC (0x0004) [0x0000000000000000]               
	int32_t                                            FOVCount;                                      // 0x00C0 (0x0004) [0x0000000000000000]               
	int32_t                                            FOVCountMax;                                   // 0x00C4 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDCamera_Battle.PlayCameraAnimInfo
// 0x0018
struct FPlayCameraAnimInfo
{
	class AREDPawn*                                    CenterPawn;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	class UCameraAnimInst*                             CurrentCamAnimInst;                            // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     centerLocation;                                // 0x0008 (0x000C) [0x0000000000000000]               
	uint32_t                                           bUseCenterLocation : 1;                        // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bUpdateOrthoBlend : 1;                         // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOrthoBlendTransversal : 1;                    // 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct REDGame.REDCamera_Battle.FixedCameraInfo
// 0x001C
struct FFixedCameraInfo
{
	struct FTPOV                                       FixedPOV;                                      // 0x0000 (0x001C) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDCamera_Battle.CameraMoveToPosArg
// 0x0058
struct FCameraMoveToPosArg
{
	class AREDPawn*                                    PlayRequestPawn;                               // 0x0000 (0x0004) [0x0000000000000000]               
	class AREDPawn*                                    BasePawn;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	class AREDPawn*                                    LookAtPawn;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     BaseOffset;                                    // 0x000C (0x000C) [0x0000000000000000]               
	struct FRotator                                    BaseRot;                                       // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     LookAtOffset;                                  // 0x0024 (0x000C) [0x0000000000000000]               
	float                                              FOV;                                           // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            inFrame;                                       // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            stayFrame;                                     // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            outFrame;                                      // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            FreezeFrame;                                   // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              Distance;                                      // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              LookPosPercent;                                // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            InInterpType;                                  // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            OutInterpType;                                 // 0x0050 (0x0004) [0x0000000000000000]               
	uint32_t                                           bMirrorX : 1;                                  // 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bUpdateOrthoBlend : 1;                         // 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOrthoBlendTransversal : 1;                    // 0x0054 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct REDGame.REDCameraAnimArray.CameraAnimData
// 0x000C
struct FCameraAnimData
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UCameraAnim*                                 Anim;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct REDGame.REDPawnMaterials.UseMaterialInstance
// 0x0008
struct FUseMaterialInstance
{
	class UMaterialInterface*                          MaterialInstance;                              // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            CategoryFlag;                                  // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDPawnMaterials.MaterialSetArrayPair
// 0x000C
struct FMaterialSetArrayPair
{
	class FName                                        PatternName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UREDMaterialSetArray*                        MaterialSetArray;                              // 0x0008 (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct REDGame.REDPawn.MeshSet
// 0x008C
struct FMeshSet
{
	class FName                                        SetName;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        MeshNames[16];                                 // 0x0008 (0x0080) [0x0000000000000000]               
	int32_t                                            MeshNameNum;                                   // 0x0088 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDPawn.PlayerExGaugeParam
// 0x0015
struct FPlayerExGaugeParam
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPreActive : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            IconID;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxVal;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            val;                                           // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            Color;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            DispMode;                                      // 0x0014 (0x0001) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDPawn.FaceBlendControl
// 0x000C
struct FFaceBlendControl
{
	class USkeletalMeshComponent*                      LinkSKMesh;                                    // 0x0000 (0x0004) [0x0000000004180008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UREDAnimNodeBlendLip*                        AnimLip;                                       // 0x0004 (0x0004) [0x0000000000100000]               
	class UREDAnimNodeBlendEyeBlink*                   AnimBlink;                                     // 0x0008 (0x0004) [0x0000000000100000]               
};

// ScriptStruct REDGame.REDPawn.MeshControl
// 0x0070
struct FMeshControl
{
	class USkeletalMeshComponent*                      TargetMesh;                                    // 0x0000 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMaterialInstanceConstant*                   BaseMatInst;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   ShadowMatInst;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   OutlineMatInst;                                // 0x000C (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   DecalMatInst;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   SpecularMatInst;                               // 0x0014 (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   UniqueAMatInst;                                // 0x0018 (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   UniqueBMatInst;                                // 0x001C (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   UniqueCMatInst;                                // 0x0020 (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   DmgDecalAMatInst;                              // 0x0024 (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   DmgDecalBMatInst;                              // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MaterialCategories[10];                        // 0x002C (0x0028) [0x0000000000000000]               
	class UREDAnimNodeBlendList*                       AnimList;                                      // 0x0054 (0x0004) [0x0000000000000000]               
	class UREDAnimNodeSequence*                        AnimSeq;                                       // 0x0058 (0x0004) [0x0000000000000000]               
	class FName                                        MeshPartsName;                                 // 0x005C (0x0008) [0x0000000000000000]               
	class FName                                        AnimDataName;                                  // 0x0064 (0x0008) [0x0000000000000000]               
	uint32_t                                           DefaultDispOn : 1;                             // 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDispThisFrame : 1;                            // 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bFoundAnime : 1;                               // 0x006C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct REDGame.REDParticle.ParticleDatabase
// 0x000C
struct FParticleDatabase
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             PSTemplate;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct REDGame.REDParticle.ParticleArg
// 0x006C
struct FParticleArg
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotate;                                        // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     Scale;                                         // 0x0020 (0x000C) [0x0000000000000000]               
	class AREDPawn*                                    Pawn;                                          // 0x002C (0x0004) [0x0000000000000000]               
	class AREDPawn_Player*                             PlayerPawn;                                    // 0x0030 (0x0004) [0x0000000000000000]               
	struct FLinearColor                                AddColor;                                      // 0x0034 (0x0010) [0x0000000000000000]               
	struct FLinearColor                                MulColor;                                      // 0x0044 (0x0010) [0x0000000000000000]               
	struct FPointer                                    LinkObjPtr;                                    // 0x0054 (0x0004) [0x0000000000001000] (CPF_Native)  
	class FName                                        SocketName;                                    // 0x0058 (0x0008) [0x0000000000000000]               
	int32_t                                            TransPriority;                                 // 0x0060 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUseSocket : 1;                                // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWithSocketRot : 1;                            // 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUsePlayerSocket : 1;                          // 0x0064 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bLinkObj : 1;                                  // 0x0064 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bMirrorX : 1;                                  // 0x0064 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bSetAddColor : 1;                              // 0x0064 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bSetMulColor : 1;                              // 0x0064 (0x0004) [0x0000000000000000] [0x00000040] 
	int32_t                                            StartFrame;                                    // 0x0068 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDPawn.LocalMaterialPool
// 0x0324
struct FLocalMaterialPool
{
	class UMaterialInstanceConstant*                   MaterialInstances[100];                        // 0x0000 (0x0190) [0x0000000000000000]               
	int32_t                                            CategoryFlags[100];                            // 0x0190 (0x0190) [0x0000000000000000]               
	int32_t                                            MaterialInstancesNum;                          // 0x0320 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDEasyCharaSelectActor.CharaData
// 0x001C
struct FCharaData
{
	uint8_t                                            CharaID;                                       // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MeshID;                                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ColorID;                                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      FileColorID;                                   // 0x000C (0x000C) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	int32_t                                            VoiceID;                                       // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct REDGame.REDEffect.EffectSkeletalMeshData
// 0x0014
struct FEffectSkeletalMeshData
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UREDMeshArray*                               MeshArray;                                     // 0x0008 (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	class UREDAnimArray*                               AnimArray;                                     // 0x000C (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	class UREDPawnMaterials*                           PawnMaterial;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct REDGame.REDEffectMaterialInfo.EffectPawnMaterialInfo
// 0x000C
struct FEffectPawnMaterialInfo
{
	class FName                                        EffectName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UREDPawnMaterials*                           Materials;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct REDGame.REDEffectPawnPool.PawnUpdateGlobalMaterialParam
// 0x0010
struct FPawnUpdateGlobalMaterialParam
{
	struct FVector                                     cameraVector;                                  // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              FovTan;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGameCommon_PlayerInfo.PlayerInfo_EnemyTable
// 0x0014
struct FPlayerInfo_EnemyTable
{
	class FString                                      EnemyID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            BGID;                                          // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            BGM_ID;                                        // 0x000D (0x0001) [0x0000000000000000]               
	uint32_t                                           bDrama : 1;                                    // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBoss : 1;                                     // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDarkColor : 1;                                // 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct REDGame.REDGameCommon_PlayerInfo.PlayerInfo_ArcadeInfoTable
// 0x00C2
struct FPlayerInfo_ArcadeInfoTable
{
	class FString                                      CharaID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPlayerInfo_EnemyTable                      Enemy[9];                                      // 0x000C (0x00B4) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            INTDType[2];                                   // 0x00C0 (0x0002) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGameCommon_PlayerInfo.PlayerInfo_ArcadeDramaRes
// 0x01BC
struct FPlayerInfo_ArcadeDramaRes
{
	class FString                                      CharaID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Package1[9];                                   // 0x000C (0x006C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Package2[9];                                   // 0x0078 (0x006C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Package3[9];                                   // 0x00E4 (0x006C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Package4[9];                                   // 0x0150 (0x006C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDGameCommon_PlayerInfo.PlayerInfo_ArcadeDramaTable
// 0x019C
struct FPlayerInfo_ArcadeDramaTable
{
	class FString                                      CharaID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPlayerInfo_EnemyTable                      Info[20];                                      // 0x000C (0x0190) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDGameCommon_PlayerInfo.PlayerInfo_CharaChainTabel
// 0x000E
struct FPlayerInfo_CharaChainTabel
{
	class FString                                      CharaID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            BGID;                                          // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            BGM_ID;                                        // 0x000D (0x0001) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGameCommon_PlayerInfo.PlayerInfo_ExcludeRandom
// 0x0048
struct FPlayerInfo_ExcludeRandom
{
	class FString                                      CharaID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExcludeID[5];                                  // 0x000C (0x003C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDGameCommon_PlayerInfo.PlayerInfo_MOMInfo
// 0x0004
struct FPlayerInfo_MOMInfo
{
	uint32_t                                           bRannyuInBattle : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct REDGame.REDGameCommon.ColorOrderInfo
// 0x008C
struct FColorOrderInfo
{
	class FString                                      CharaID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Color[32];                                     // 0x000C (0x0080) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuStageSelect.BGSelectItem
// 0x0030
struct FBGSelectItem
{
	uint8_t                                            Id;                                            // 0x0000 (0x0001) [0x0000000000000000]               
	uint32_t                                           bRandom : 1;                                   // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDefault : 1;                                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FRotator                                    GlobeRot;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	class FName                                        Narration;                                     // 0x0014 (0x0008) [0x0000000000000000]               
	class FString                                      CharaID;                                       // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            IDForUI;                                       // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MarkerID;                                      // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuStageSelect.BGMSelectItem
// 0x0014
struct FBGMSelectItem
{
	uint8_t                                            Id;                                            // 0x0000 (0x0001) [0x0000000000000000]               
	uint32_t                                           bRandom : 1;                                   // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDefault : 1;                                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      CharaID;                                       // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDGameInfo_Battle.MatchResultWindowArg
// 0x0054
struct FMatchResultWindowArg
{
	uint32_t                                           bDisp : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPromote : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDemote : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDispMedal : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bDispMedalOnly : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	class FString                                      PlayerName;                                    // 0x0004 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            TotalCount;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            WinCount;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            LoseCount;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            PreRank;                                       // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            Rank;                                          // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            Level;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            NowExp;                                        // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            FinalExp;                                      // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            MedalNum[4];                                   // 0x0030 (0x0010) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x0040 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWin : 1;                                      // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            cpuRank;                                       // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            cpuLevelAddVal;                                // 0x004C (0x0004) [0x0000000000000000]               
	uint32_t                                           bRankTestFinish : 1;                           // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAmulet_RankDownCheck : 1;                     // 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bAmulet_Disp : 1;                              // 0x0050 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct REDGame.REDGameInfo_LobbyBase.Lobby_Collision_Event
// 0x0018
struct FLobby_Collision_Event
{
	uint8_t                                            Event;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            OptionData;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   pos;                                           // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Angle;                                         // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGameInfo_LobbyBase.Lobby_KyoutaiInfo
// 0x0018
struct FLobby_KyoutaiInfo
{
	struct FVector2D                                   pos;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   LeavePos;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              Angle;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bSansaki : 1;                                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct REDGame.REDGameInfo_LobbyBase.Lobby_WaitLineInfo
// 0x0090
struct FLobby_WaitLineInfo
{
	struct FLobby_KyoutaiInfo                          Infos[6];                                      // 0x0000 (0x0090) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGameInfo_LobbyBase.Lobby_Collision_Wall
// 0x0020
struct FLobby_Collision_Wall
{
	struct FVector2D                                   Pos1;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   Pos2;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              Thickness;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bCheckMoveLine : 1;                            // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector2D                                   Normal;                                        // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGameInfo_LobbyBase.Lobby_Collision_Circle
// 0x0010
struct FLobby_Collision_Circle
{
	uint8_t                                            Event;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	struct FVector2D                                   pos;                                           // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              Radius;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGameInfo_LobbyBase.Lobby_Collision_Rect
// 0x0034
struct FLobby_Collision_Rect
{
	struct FVector2D                                   Center;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MinRadius;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              MaxRadius;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   pos[4];                                        // 0x0014 (0x0020) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGameInfo_LobbyBase.Lobby_Collision_Floor
// 0x003C
struct FLobby_Collision_Floor
{
	struct FVector2D                                   Center;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     pos[4];                                        // 0x000C (0x0030) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGameInfo_LobbyBase.Lobby_KyoutaiMaterial
// 0x0014
struct FLobby_KyoutaiMaterial
{
	class UMaterialInterface*                          Normal;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class UMaterialInterface*                          Reserve;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	class UMaterialInterface*                          BattleOK;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	class UMaterialInterface*                          Battle;                                        // 0x000C (0x0004) [0x0000000000000000]               
	class UMaterialInterface*                          NoUse;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGameOnlineLobbyInterfaceSteamworks.LobbySetting
// 0x0018
struct FLobbySetting
{
	class FString                                      Key;                                           // 0x0000 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x000C (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDGameOnlineLobbyInterfaceSteamworks.FindLobbyFilter
// 0x0020
struct FFindLobbyFilter
{
	class FString                                      Key;                                           // 0x0000 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x000C (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                            Operator;                                      // 0x0018 (0x0001) [0x0000000000000000]               
	uint32_t                                           bNumeric : 1;                                  // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct REDGame.REDGameOnlineLobbyInterfaceSteamworks.FoundLobby
// 0x0014
struct FFoundLobby
{
	struct FUniqueNetId                                LobbyUID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FLobbySetting>                 LobbySettings;                                 // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDGameStatsBase.AchievementData
// 0x000C
struct FAchievementData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            StatsID;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Criteria;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGameStatsBase.StatsData
// 0x000C
struct FStatsData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            StatsType;                                     // 0x0004 (0x0001) [0x0000000000000000]               
	int32_t                                            Value;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMovieArray.MoviePlayerClassData
// 0x0028
struct FMoviePlayerClassData
{
	class FString                                      Name;                                          // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ClassName;                                     // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MovieName;                                     // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           UseREDGame : 1;                                // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct REDGame.REDGfxMovieManager_BattleHUD.BattleHUD_PreFrameData
// 0x0022
struct FBattleHUD_PreFrameData
{
	float                                              HP[2];                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              RedHP[2];                                      // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              WhiteHP[2];                                    // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              Burst[2];                                      // 0x0018 (0x0008) [0x0000000000000000]               
	uint8_t                                            GuardBalanceCH[2];                             // 0x0020 (0x0002) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleDownside.TensionGaugeMC
// 0x0040
struct FTensionGaugeMC
{
	class UGFxObject*                                  rootMC;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  GaugeAllMC;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  gaugeBlkMC;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  gaugeMainMC;                                   // 0x000C (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  tFlashMC;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  gaugeCoverMC;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  TBalanceMC;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  burstThunderMC;                                // 0x001C (0x0004) [0x0000000000000000]               
	uint8_t                                            TensionState;                                  // 0x0020 (0x0001) [0x0000000000000000]               
	uint8_t                                            NextTensionState;                              // 0x0021 (0x0001) [0x0000000000000000]               
	int32_t                                            Tension;                                       // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            PreTension;                                    // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              TensBalanceAddX;                               // 0x002C (0x0004) [0x0000000000000000]               
	uint32_t                                           TensColTrg : 1;                                // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            TensColMul;                                    // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            TensColAdd;                                    // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            TensColorIndex;                                // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleDownside.DangerTimeMC
// 0x001C
struct FDangerTimeMC
{
	class UGFxObject*                                  DangerTimerMC;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            DangerTime;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            DangerTimePreFrame;                            // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            DangerAnimCounter;                             // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            DangerAnimCounterMax;                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            DangerColorRed;                                // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           IsDangerTime : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           DangerDamageTrg1P : 1;                         // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           DangerDamageTrg2P : 1;                         // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleDownside.ExGaugeMC
// 0x0024
struct FExGaugeMC
{
	class UGFxObject*                                  rootMC;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           IsDisp : 1;                                    // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IsNikuDisp : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           ExGaugeTrg : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           ExGaugeActive : 1;                             // 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           ExGaugeActiveTrg : 1;                          // 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
	int32_t                                            ExGaugeID;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            ExGaugeIcon;                                   // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            ExGaugeVal;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            ExGaugeMaxVal;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            ExGaugeColor;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            ExGaugeMode;                                   // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            ExGaugePreVal;                                 // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleDownside.NegativeMC
// 0x0008
struct FNegativeMC
{
	uint32_t                                           NegaDangerTrg : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           NegaDangerDisp : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           NegaDangerLv : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           IsNegaPenaDisp : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           NegaPenaTrg : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           NegaPenaUp : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              NegaPenaPosY;                                  // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleDownside.BurstDownSideMC
// 0x0008
struct FBurstDownSideMC
{
	class UGFxObject*                                  BurstKakuseiMC;                                // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           BurstSkill : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           BurstSkillEff : 1;                             // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           IsBurstThunderDisp : 1;                        // 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleResultMedal.MedalAnimInfo
// 0x0018
struct FMedalAnimInfo
{
	class FString                                      Name;                                          // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Grade;                                         // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            Category;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            KeyFrame;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleResultWindow.ResultWindowPlayerParam
// 0x0028
struct FResultWindowPlayerParam
{
	int32_t                                            State;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bStateTrigger : 1;                             // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            bWindowEnable[3];                              // 0x0008 (0x000C) [0x0000000000000000]               
	int32_t                                            BaseExp;                                       // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            FinalExp;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPromote : 1;                                  // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPromotePlay : 1;                              // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDemote : 1;                                   // 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDemotePlay : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bQuestClear : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000010] 
	int32_t                                            ClearQuestType;                                // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAmulet_RankDownCheck : 1;                     // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAmulet_Disp : 1;                              // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleUpside.JKOGaugeMC
// 0x0024
struct FJKOGaugeMC
{
	class UGFxObject*                                  gaugeMC;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  lvGaugeMC;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            disp;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Level;                                         // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            ColorID;                                       // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              gaugeWidth;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            lastDisp;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            lastLevel;                                     // 0x001C (0x0004) [0x0000000000000000]               
	float                                              lastGaugeWidth;                                // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleUpside.BurstMC
// 0x0038
struct FBurstMC
{
	class UGFxObject*                                  burstPopMC;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  burstMaskMC;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  burstBlueMC;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  burstRedMC;                                    // 0x000C (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  burstfullMC;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  burstThunderMC;                                // 0x0014 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  burstPikupikuMC;                               // 0x0018 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  burstSealMC;                                   // 0x001C (0x0004) [0x0000000000000000]               
	float                                              BurstGauge;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           BurstMaxSEFlag : 1;                            // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           BurstHeal : 1;                                 // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           BurstBlueVisible : 1;                          // 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              BurstPreFrame;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           IsPlayBurstThunder : 1;                        // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           BurstSealFlag : 1;                             // 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            BurstSealCount;                                // 0x0030 (0x0004) [0x0000000000000000]               
	uint32_t                                           BurstSealDisp : 1;                             // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           BurstSealInput : 1;                            // 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           BurstSkillFlag : 1;                            // 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleUpside.TimerVal
// 0x002C
struct FTimerVal
{
	class UGFxObject*                                  RoundTimerMC;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            TimerVal1;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            TimerVal10;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            TimerVal100;                                   // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            TimerDigit;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            PreTimerVal1;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            PreTimerVal10;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            PreTimerVal100;                                // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            PreTimerDigit;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            PrevTimer;                                     // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           TimerFinalTrig : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleUpside.HPGaugeMC
// 0x0060
struct FHPGaugeMC
{
	class UGFxObject*                                  rootMC;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  GaugeAllMC;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  coverMC;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  gaugeMC;                                       // 0x000C (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  gauge2MC;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  gaugeMaskMC;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  guardGaugeMaskMC;                              // 0x0018 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  guardBalanceMC;                                // 0x001C (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  guardBalanceRedMC;                             // 0x0020 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  hibanaMC;                                      // 0x0024 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  redGaugeMC;                                    // 0x0028 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  whiteGaugeMC;                                  // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            AddColor;                                      // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            MulColor;                                      // 0x0034 (0x0004) [0x0000000000000000]               
	uint32_t                                           bChangeColorTrig : 1;                          // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            nHPBar;                                        // 0x003C (0x0004) [0x0000000000000000]               
	uint32_t                                           bHPBarUpdateTrig : 1;                          // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            damageCounter;                                 // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              damageAngle;                                   // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            damageCounterMax;                              // 0x004C (0x0004) [0x0000000000000000]               
	struct FVector2D                                   damagePosOrigin;                               // 0x0050 (0x0008) [0x0000000000000000]               
	uint32_t                                           bGBLightOn : 1;                                // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bGBLightBlinking : 1;                          // 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bChangeComboEffLv : 1;                         // 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            ComboEffLv;                                    // 0x005C (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleUpside.RoundNumIconMC
// 0x0024
struct FRoundNumIconMC
{
	class UGFxObject*                                  roundIconMC[5];                                // 0x0000 (0x0014) [0x0000000000000000]               
	int32_t                                            roundNum;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            WinCount;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            winUpdatedCount;                               // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bUpdateWinCount : 1;                           // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bUpdateRoundNum : 1;                           // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleUpside.HitCountMC
// 0x0048
struct FHitCountMC
{
	class UGFxObject*                                  rootMC;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  BeatMC;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Digit001MC;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Digit010MC;                                    // 0x000C (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Digit100MC;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Digit001_Num1MC;                               // 0x0014 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Digit001_Num3MC;                               // 0x0018 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Digit001_Num4MC;                               // 0x001C (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Digit010_Num1MC;                               // 0x0020 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Digit010_Num3MC;                               // 0x0024 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Digit010_Num4MC;                               // 0x0028 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Digit100_Num1MC;                               // 0x002C (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Digit100_Num3MC;                               // 0x0030 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Digit100_Num4MC;                               // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            nDigit001Num;                                  // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            nDigit010Num;                                  // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            nDigit100Num;                                  // 0x0040 (0x0004) [0x0000000000000000]               
	uint32_t                                           bVisible : 1;                                  // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bVisibleDigit001 : 1;                          // 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bVisibleDigit010 : 1;                          // 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bVisibleDigit100 : 1;                          // 0x0044 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BattleUpside.MiddlePlateMC
// 0x00C4
struct FMiddlePlateMC
{
	struct FHitCountMC                                 HitNormalMCs;                                  // 0x0000 (0x0048) [0x0000000000000000]               
	struct FHitCountMC                                 HitBlackMCs;                                   // 0x0048 (0x0048) [0x0000000000000000]               
	class UGFxObject*                                  Incomp0MC;                                     // 0x0090 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Incomp1MC;                                     // 0x0094 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Incomp2MC;                                     // 0x0098 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  DamageMC;                                      // 0x009C (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  InfoTextMC;                                    // 0x00A0 (0x0004) [0x0000000000000000]               
	int32_t                                            nInfoTextIdx;                                  // 0x00A4 (0x0004) [0x0000000000000000]               
	int32_t                                            nComboCount;                                   // 0x00A8 (0x0004) [0x0000000000000000]               
	int32_t                                            nLastComboCount;                               // 0x00AC (0x0004) [0x0000000000000000]               
	int32_t                                            nComboDamage;                                  // 0x00B0 (0x0004) [0x0000000000000000]               
	int32_t                                            nComboComp0;                                   // 0x00B4 (0x0004) [0x0000000000000000]               
	int32_t                                            nComboComp1;                                   // 0x00B8 (0x0004) [0x0000000000000000]               
	int32_t                                            nComboComp2;                                   // 0x00BC (0x0004) [0x0000000000000000]               
	uint32_t                                           bLastIncomplete : 1;                           // 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bComboTrg : 1;                                 // 0x00C0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bComboImP : 1;                                 // 0x00C0 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bComboDamDisp : 1;                             // 0x00C0 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bHideCombo : 1;                                // 0x00C0 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct REDGame.REDGfxMoviePlayer_BG_Arena.BGArena_StringScrollParam
// 0x0014
struct FBGArena_StringScrollParam
{
	uint32_t                                           Enable : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BaseX;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              ScrollVal;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              ScrollValTarget;                               // 0x000C (0x0004) [0x0000000000000000]               
	float                                              ScrollAdd;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelectBase.CharaSel_MysetData
// 0x0020
struct FCharaSel_MysetData
{
	class FString                                      CharaID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Color;                                         // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            Stylish;                                       // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            Button;                                        // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            GameModeIndex;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Costume;                                       // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect.CharaSelectCharacterParam
// 0x001C
struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectCharacterParam
{
	class FString                                      CharaID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bSelectable : 1;                               // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRandom : 1;                                   // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            PanelIndex;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	class FName                                        NarrationName;                                 // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect.CharaSelectPanelRectParam
// 0x0020
struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectPanelRectParam
{
	struct FVector2D                                   LU;                                            // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   RU;                                            // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   LD;                                            // 0x0010 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   RD;                                            // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect.CharaSelectPlayerParam
// 0x0035
struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectPlayerParam
{
	class FName                                        State;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Cursor;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   CursorPos;                                     // 0x000C (0x0008) [0x0000000000000000]               
	int32_t                                            RandomCounter;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bRandomSelect : 1;                             // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            PrevCursor;                                    // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            SelectColor;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	class FString                                      SelectChara;                                   // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bSelectCPU : 1;                                // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            PictState;                                     // 0x0034 (0x0001) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect.GlobeAnimeParam
// 0x0020
struct UREDGfxMoviePlayer_MenuCharaSelect_FGlobeAnimeParam
{
	uint32_t                                           bAnim : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FRotator                                    NowRot;                                        // 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    StartRot;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	int32_t                                            AnimCounter;                                   // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect.AsyncLoadCacheStruct
// 0x0010
struct UREDGfxMoviePlayer_MenuCharaSelect_FAsyncLoadCacheStruct
{
	class FString                                      CharaID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UREDCharaAsset*                              BaseAsset;                                     // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect.AsyncLoadParamStruct
// 0x0098
struct UREDGfxMoviePlayer_MenuCharaSelect_FAsyncLoadParamStruct
{
	class AREDPawn_Player*                             CharaPawn;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ColorID;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLoad : 1;                                     // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPictureFade : 1;                              // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bBaseLoad : 1;                                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	class UREDCharaAsset*                              BaseAssets;                                    // 0x000C (0x0004) [0x0000000000000000]               
	class UREDCharaAsset*                              ColorAsset;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	struct FSpawnPlayerInfo                            Info;                                          // 0x0014 (0x0064) [0x0000000000400000] (CPF_NeedCtorLink)
	class AREDPawn_Effect*                             Effects[2];                                    // 0x0078 (0x0008) [0x0000000000000000]               
	class FName                                        EffectName[2];                                 // 0x0080 (0x0010) [0x0000000000000000]               
	float                                              AddColorValueOnChange;                         // 0x0090 (0x0004) [0x0000000000000000]               
	int32_t                                            ColorChangeWiatFrame;                          // 0x0094 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect_AC20.CharaSelectCharacterParam
// 0x0020
struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectCharacterParam
{
	class FString                                      CharaID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bSelectable : 1;                               // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRandom : 1;                                   // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            PanelIndex;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	class FName                                        NarrationName;                                 // 0x0014 (0x0008) [0x0000000000000000]               
	int32_t                                            StarDispType;                                  // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect_AC20.MOMHelpInfo
// 0x0014
struct FMOMHelpInfo
{
	uint8_t                                            flag;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      MessageId;                                     // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bRookie : 1;                                   // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect_AC20.CharaSelectPlayerParam
// 0x005C
struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam
{
	class FName                                        State;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Cursor;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   CursorPos;                                     // 0x000C (0x0008) [0x0000000000000000]               
	int32_t                                            RandomCounter;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bRandomSelect : 1;                             // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            PrevCursor;                                    // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            SelectColor;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	class FString                                      SelectChara;                                   // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            SelectCostume;                                 // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            CustomCursor;                                  // 0x0034 (0x0004) [0x0000000000000000]               
	uint32_t                                           bSelectCPU : 1;                                // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            PictState;                                     // 0x003C (0x0001) [0x0000000000000000]               
	uint32_t                                           bHandicapSelect : 1;                           // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Handicap;                                      // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            HandicapInitVal;                               // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            MarkerID;                                      // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            PrevMarkerID;                                  // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            MySetGameModeIndex;                            // 0x0054 (0x0004) [0x0000000000000000]               
	uint32_t                                           bMySetSelect : 1;                              // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect_AC20.CharaSelectHandicapRectParam
// 0x0010
struct FCharaSelectHandicapRectParam
{
	struct FVector2D                                   pos;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   Size;                                          // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect_AC20.MOMSequenceInfo
// 0x0014
struct FMOMSequenceInfo
{
	int32_t                                            Cursor;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PrevCursor;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   CursorPos;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            RandomCounter;                                 // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect_AC20.GlobeAnimeParam
// 0x0020
struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FGlobeAnimeParam
{
	uint32_t                                           bAnim : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FRotator                                    NowRot;                                        // 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    StartRot;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	int32_t                                            AnimCounter;                                   // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect_AC20.CharaSelectPanelRectParam
// 0x000C
struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPanelRectParam
{
	struct FVector2D                                   Center;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bRandom : 1;                                   // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect_AC20.AsyncLoadCacheStruct
// 0x0010
struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FAsyncLoadCacheStruct
{
	class FString                                      CharaID;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UREDCharaAsset*                              BaseAsset;                                     // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuCharaSelect_AC20.AsyncLoadParamStruct
// 0x009C
struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FAsyncLoadParamStruct
{
	class AREDPawn_Player*                             CharaPawn;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ColorID;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            CostumeID;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLoad : 1;                                     // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPictureFade : 1;                              // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bBaseLoad : 1;                                 // 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOKMotion : 1;                                 // 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
	class UREDCharaAsset*                              BaseAssets;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	class UREDCharaAsset*                              ColorAsset;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	struct FSpawnPlayerInfo                            Info;                                          // 0x0018 (0x0064) [0x0000000000400000] (CPF_NeedCtorLink)
	class AREDPawn_Effect*                             Effects[2];                                    // 0x007C (0x0008) [0x0000000000000000]               
	class FName                                        EffectName[2];                                 // 0x0084 (0x0010) [0x0000000000000000]               
	float                                              AddColorValueOnChange;                         // 0x0094 (0x0004) [0x0000000000000000]               
	int32_t                                            ColorChangeWiatFrame;                          // 0x0098 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuStyleSelect.StyleSelect_PlayerInfo
// 0x0024
struct FStyleSelect_PlayerInfo
{
	uint8_t                                            CurrentState;                                  // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            NextState;                                     // 0x0001 (0x0001) [0x0000000000000000]               
	uint32_t                                           bStateTrigger : 1;                             // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Cursor;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bStyleSETrig : 1;                              // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCancel : 1;                                   // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            operatePlayer;                                 // 0x0010 (0x0001) [0x0000000000000000]               
	uint32_t                                           Cursor_SkipAll : 1;                            // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Cursor_Style;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Cursor_Button;                                 // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            Cursor_ButtonPrev;                             // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuGallery.GLYFactor
// 0x0020
struct FGLYFactor
{
	class FString                                      m_Name;                                        // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      m_NameEx;                                      // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_Price;                                       // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            m_Caption;                                     // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuGallery.GLYCaptionTimeTable
// 0x0080
struct FGLYCaptionTimeTable
{
	int32_t                                            m_Caption[32];                                 // 0x0000 (0x0080) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuMainMenu.MMCategory
// 0x0015
struct FMMCategory
{
	class FString                                      m_CategoryName;                                // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_SubCategoryNum;                              // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            m_SubCategoryNameIndex;                        // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_Color;                                       // 0x0014 (0x0001) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuMainMenu.MMSubGear
// 0x0010
struct FMMSubGear
{
	float                                              m_InitRot;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_Rot;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_TargetRot;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            m_Dir;                                         // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuMainMenu20.MMIndex
// 0x001C
struct FMMIndex
{
	int32_t                                            m_ID;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      m_Name;                                        // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      m_IconID;                                      // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuMainMenu20.MMShortCut
// 0x0014
struct FMMShortCut
{
	int32_t                                            m_Top;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            m_Middle;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            m_Bottom;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            m_Current;                                     // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            m_ID;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuModeSelect.ModeSelect_Mode
// 0x0034
struct FModeSelect_Mode
{
	uint8_t                                            Mode;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              RotRate;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      AsGearPath;                                    // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Dir;                                           // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              InitRot;                                       // 0x0018 (0x0004) [0x0000000000000000]               
	class FString                                      TitleStr;                                      // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           LeftLimit : 1;                                 // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           RightLimit : 1;                                // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	class FName                                        NarrationName;                                 // 0x002C (0x0008) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuNetworkRoom.NetRoom_FocusInfo
// 0x0050
struct FNetRoom_FocusInfo
{
	class FName                                        FocusName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      PathMC;                                        // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PathTail;                                      // 0x0014 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        Up;                                            // 0x0020 (0x0008) [0x0000000000000000]               
	class FName                                        Down;                                          // 0x0028 (0x0008) [0x0000000000000000]               
	class FName                                        Left;                                          // 0x0030 (0x0008) [0x0000000000000000]               
	class FName                                        Right;                                         // 0x0038 (0x0008) [0x0000000000000000]               
	uint32_t                                           bBanner : 1;                                   // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            BannerIndex;                                   // 0x0044 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   pos;                                           // 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuNetworkRoom.NetRoom_PlayerInfo
// 0x0060
struct FNetRoom_PlayerInfo
{
	uint32_t                                           bExist : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            PeerHandle;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   IconPos;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   IconStartPos;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   IconMiddlePos;                                 // 0x0018 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   IconEndPos;                                    // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            IconMoveFrame;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            IconMoveFrameMax;                              // 0x002C (0x0004) [0x0000000000000000]               
	uint32_t                                           IconDispDetail : 1;                            // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IconDispDetailForce : 1;                       // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bForceSet : 1;                                 // 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            CharaID;                                       // 0x0034 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsSpectator : 1;                              // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bVoiceChat : 1;                                // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsSpeak : 1;                                  // 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            Qos;                                           // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            RelStrength;                                   // 0x0040 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBattleReady : 1;                              // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            RoomState;                                     // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            MOMLevel;                                      // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            KyoutaiIndex;                                  // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            ChairIndex;                                    // 0x0054 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   BannerPos;                                     // 0x0058 (0x0008) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuNetworkRoom.NetRoom_GameTableInfo
// 0x0020
struct FNetRoom_GameTableInfo
{
	int32_t                                            bBattleDoingPrev[2];                           // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            bBattleDoing[2];                               // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            bBattleReadyPrev[2];                           // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            bBattleReady[2];                               // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuNetworkRoom.NetRoom_FocusPos
// 0x001C
struct FNetRoom_FocusPos
{
	struct FVector2D                                   pos;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   StartPos;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   EndPos;                                        // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            MoveFrame;                                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuNetworkTopMenu.NetTopMenuItem
// 0x0014
struct FNetTopMenuItem
{
	int32_t                                            Index;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Up;                                            // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Down;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Left;                                          // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            Right;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuQuestList.QuestList_ItemParam
// 0x0034
struct FQuestList_ItemParam
{
	int32_t                                            Category;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      questName;                                     // 0x0004 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      TargetText;                                    // 0x0010 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      DiffText;                                      // 0x001C (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      RewordText;                                    // 0x0028 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuReadCard.ReadCard_Info
// 0x0018
struct FReadCard_Info
{
	uint8_t                                            State;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            PreState;                                      // 0x0001 (0x0001) [0x0000000000000000]               
	int32_t                                            Timer;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bTimeCountStop : 1;                            // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnd : 1;                                      // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bRead : 1;                                     // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            val;                                           // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            ErrorContinueCount;                            // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bResultError : 1;                              // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bResultNewCard : 1;                            // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bResultVersionError : 1;                       // 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuStaffRoll.StaffRollTableItem
// 0x0034
struct FStaffRollTableItem
{
	uint8_t                                            Attr;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      TextID_L;                                      // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TextID_L_sub;                                  // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TextID_R;                                      // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TextID_R_sub;                                  // 0x0028 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuStageSelect.DecideInfoStruct
// 0x0002
struct FDecideInfoStruct
{
	uint8_t                                            BGID;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            bgmid;                                         // 0x0001 (0x0001) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDGfxMoviePlayer_MenuStyleSelect.StyleSelect_ButtonInfo
// 0x0048
struct FStyleSelect_ButtonInfo
{
	class FString                                      Button[6];                                     // 0x0000 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDHUD_Battle.REDHUD_Battle_NegaPenaInfo
// 0x0004
struct FREDHUD_Battle_NegaPenaInfo
{
	uint32_t                                           bNegaPenaUpChange : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNegaPenaUp : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct REDGame.REDHUD_Battle.REDHUD_Battle_SpectatorInfo
// 0x0008
struct FREDHUD_Battle_SpectatorInfo
{
	uint32_t                                           IsDisp : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           isHeadSet : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           isSpeak : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           setSpecSlot : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            specSlot;                                      // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDMaterialSetArray.MeshMaterialData
// 0x0030
struct FMeshMaterialData
{
	class FName                                        MeshName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          Base;                                          // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UMaterialInterface*                          Outline;                                       // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UMaterialInterface*                          Shadow;                                        // 0x0010 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UMaterialInterface*                          Decal;                                         // 0x0014 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UMaterialInterface*                          Specular;                                      // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UMaterialInterface*                          UniqueA;                                       // 0x001C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UMaterialInterface*                          UniqueB;                                       // 0x0020 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UMaterialInterface*                          UniqueC;                                       // 0x0024 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UMaterialInterface*                          DmgDecalA;                                     // 0x0028 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UMaterialInterface*                          DmgDecalB;                                     // 0x002C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct REDGame.REDMeshArray.MeshData
// 0x0018
struct FMeshData
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           DefaultDispOn : 1;                             // 0x0008 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class USkeletalMesh*                               SKMesh;                                        // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FName                                        AnimDataName;                                  // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct REDGame.REDNamedObjectArray.NamedObject
// 0x000C
struct FNamedObject
{
	class FName                                        ObjectName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObject*                                     Object;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct REDGame.REDParticleColorInfo.ParticleColorOverLifeData
// 0x000C
struct FParticleColorOverLifeData
{
	class FName                                        ColorDataName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleModuleColorOverLife*                Color;                                         // 0x0008 (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct REDGame.REDParticleMaterialInfo.ParticleMaterialInstance
// 0x0010
struct FParticleMaterialInstance
{
	class FName                                        instancename;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          Material;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PooledMaterialIndex;                           // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct REDGame.REDParticleMaterialInfo.ParticleMaterialPattern
// 0x0014
struct FParticleMaterialPattern
{
	class FName                                        PatternName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FParticleMaterialInstance>     MaterialInstances;                             // 0x0008 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct REDGame.REDPointLightManager.PointLightInfo
// 0x005C
struct FPointLightInfo
{
	int32_t                                            UniqueId;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     LocalOffset;                                   // 0x0010 (0x000C) [0x0000000000000000]               
	struct FLinearColor                                LightColor;                                    // 0x001C (0x0010) [0x0000000000000000]               
	float                                              Amplitude;                                     // 0x002C (0x0004) [0x0000000000000000]               
	float                                              Freq;                                          // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              Attenuation;                                   // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              Amplify;                                       // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              LocalLightPower;                               // 0x003C (0x0004) [0x0000000000000000]               
	float                                              Range;                                         // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              RangeCheckMultiplier;                          // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              Cutoff;                                        // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              Life;                                          // 0x004C (0x0004) [0x0000000000000000]               
	float                                              FadeInTime;                                    // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              LocalTime;                                     // 0x0054 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBGParticle : 1;                               // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bActive : 1;                                   // 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUpdateCalled : 1;                             // 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct REDGame.REDSeqEventManager.EventBinding
// 0x000C
struct FEventBinding
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UClass*                                      EventType;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDSoundLipsyncArray.LipSyncData
// 0x000C
struct FLipSyncData
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UREDAssetLipSync*                            Data;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct REDGame.REDSoundPlayerUnique.UniqueSoundInfo
// 0x000C
struct FUniqueSoundInfo
{
	class UAudioComponent*                             UniqueSoundComponent;                          // 0x0000 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        UniqueSoundName;                               // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct REDGame.REDTexture2DArray.TextureArrayItem
// 0x000C
struct FTextureArrayItem
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTexture2D*                                  Tex;                                           // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
