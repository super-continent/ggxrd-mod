/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: GameFramework_classes.hpp
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
# Constants
# ========================================================================================= #
*/

#define CONST_LOADING_MOVIE                                         ""
#define CONST_GAMEEVENT_AGGREGATED_DATA                             1
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_TIMEALIVE                 1
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_KILLS                     1
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_DEATHS                    1
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_MATCH_WON                 1
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_ROUND_WON                 1
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_NORMALKILL          1
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASNORMALKILL    1
#define CONST_GAMEEVENT_AGGREGATED_TEAM_KILLS                       1
#define CONST_GAMEEVENT_AGGREGATED_TEAM_DEATHS                      1
#define CONST_GAMEEVENT_AGGREGATED_TEAM_GAME_SCORE                  1
#define CONST_GAMEEVENT_AGGREGATED_TEAM_MATCH_WON                   1
#define CONST_GAMEEVENT_AGGREGATED_TEAM_ROUND_WON                   1
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_KILLS                     1
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEATHS                    1
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_WEAPON_DAMAGE       1
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEE_DAMAGE        1
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WEAPON_DAMAGE    1
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_MELEE_DAMAGE     1
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEEHITS           1
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASMELEEHIT      1
#define CONST_GAMEEVENT_AGGREGATED_WEAPON_FIRED                     1
#define CONST_GAMEEVENT_AGGREGATED_PAWN_SPAWN                       1
#define CONST_GAMEEVENT_AGGREGATED_GAME_SPECIFIC                    1
#define CONST_NumTouchDataEntries                                   5
#define CONST_NumInDragHistory                                      4

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GameFramework.GameTypes.EShakeParam
enum class EShakeParam : uint8_t
{
	ESP_OffsetRandom                                   = 0,
	ESP_OffsetZero                                     = 1,
	ESP_END                                            = 2
};

// Enum GameFramework.GameCrowdAgent.EConformType
enum class EConformType : uint8_t
{
	CFM_NavMesh                                        = 0,
	CFM_BSP                                            = 1,
	CFM_World                                          = 2,
	CFM_None                                           = 3,
	CFM_END                                            = 4
};

// Enum GameFramework.GameCrowdAgentBehavior.ECrowdBehaviorEvent
enum class ECrowdBehaviorEvent : uint8_t
{
	CBE_None                                           = 0,
	CBE_Spawn                                          = 1,
	CBE_Random                                         = 2,
	CBE_SeePlayer                                      = 3,
	CBE_EncounterAgent                                 = 4,
	CBE_TakeDamage                                     = 5,
	CBE_GroupWaiting                                   = 6,
	CBE_Uneasy                                         = 7,
	CBE_Alert                                          = 8,
	CBE_Panic                                          = 9,
	CBE_END                                            = 10
};

// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
enum class ERecoilStart : uint8_t
{
	ERS_Zero                                           = 0,
	ERS_Random                                         = 1,
	ERS_END                                            = 2
};

// Enum GameFramework.GameStateObject.GameSessionType
enum class EGameSessionType : uint8_t
{
	GT_SessionInvalid                                  = 0,
	GT_SinglePlayer                                    = 1,
	GT_Coop                                            = 2,
	GT_Multiplayer                                     = 3,
	GT_END                                             = 4
};

// Enum GameFramework.GameThirdPersonCameraMode.ECameraViewportTypes
enum class ECameraViewportTypes : uint8_t
{
	CVT_16to9_Full                                     = 0,
	CVT_16to9_VertSplit                                = 1,
	CVT_16to9_HorizSplit                               = 2,
	CVT_4to3_Full                                      = 3,
	CVT_4to3_HorizSplit                                = 4,
	CVT_4to3_VertSplit                                 = 5,
	CVT_END                                            = 6
};

// Enum GameFramework.MobileInputZone.EZoneType
enum class EZoneType : uint8_t
{
	ZoneType_Button                                    = 0,
	ZoneType_Joystick                                  = 1,
	ZoneType_Trackball                                 = 2,
	ZoneType_Slider                                    = 3,
	ZoneType_SubClassed                                = 4,
	ZoneType_END                                       = 5
};

// Enum GameFramework.MobileInputZone.EZoneState
enum class EZoneState : uint8_t
{
	ZoneState_Inactive                                 = 0,
	ZoneState_Activating                               = 1,
	ZoneState_Active                                   = 2,
	ZoneState_Deactivating                             = 3,
	ZoneState_END                                      = 4
};

// Enum GameFramework.MobileInputZone.EZoneSlideType
enum class EZoneSlideType : uint8_t
{
	ZoneSlide_UpDown                                   = 0,
	ZoneSlide_LeftRight                                = 1,
	ZoneSlide_END                                      = 2
};

// Enum GameFramework.MobilePlayerInput.EUIOrientation
enum class EUIOrientation : uint8_t
{
	UI_Unknown                                         = 0,
	UI_Portait                                         = 1,
	UI_PortaitUpsideDown                               = 2,
	UI_LandscapeRight                                  = 3,
	UI_LandscapeLeft                                   = 4,
	UI_END                                             = 5
};

// Enum GameFramework.MobileMenuImage.MenuImageDrawStyle
enum class EMenuImageDrawStyle : uint8_t
{
	IDS_Normal                                         = 0,
	IDS_Stretched                                      = 1,
	IDS_Tile                                           = 2,
	IDS_END                                            = 3
};

// Enum GameFramework.SeqEvent_HudRenderText.ETextDrawMethod
enum class ETextDrawMethod : uint8_t
{
	DRAW_CenterText                                    = 0,
	DRAW_WrapText                                      = 1,
	DRAW_END                                           = 2
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GameFramework.DynamicSpriteComponent
// 0x0040 (0x01FC - 0x023C)
class UDynamicSpriteComponent : public USpriteComponent
{
public:
	struct FInterpCurveFloat                           AnimatedScale;                                 // 0x01FC (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FInterpCurveLinearColor                     AnimatedColor;                                 // 0x020C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FInterpCurveVector2D                        AnimatedPosition;                              // 0x021C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector                                     LocationOffset;                                // 0x022C (0x000C) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            LoopCount;                                     // 0x0238 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.DynamicSpriteComponent");
		}

		return uClassPointer;
	};

};

// Class GameFramework.FrameworkGame
// 0x000C (0x0378 - 0x0384)
class AFrameworkGame : public AGameInfo
{
public:
	class TArray<struct FRequiredMobileInputConfig>    RequiredMobileInputConfigs;                    // 0x0378 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.FrameworkGame");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameAIController
// 0x0038 (0x0364 - 0x039C)
class AGameAIController : public AAIController
{
public:
	class UGameAICommand*                              CommandList;                                   // 0x0364 (0x0004) [0x0000000004002003] (CPF_Edit | CPF_Const | CPF_Transient | CPF_EditInline)
	uint32_t                                           bHasRunawayCommandList : 1;                    // 0x0368 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bAILogging : 1;                                // 0x0368 (0x0004) [0x0000000000004001] [0x00000002] (CPF_Edit | CPF_Config)
	uint32_t                                           bAILogToWindow : 1;                            // 0x0368 (0x0004) [0x0000000000004001] [0x00000004] (CPF_Edit | CPF_Config)
	uint32_t                                           bFlushAILogEachLine : 1;                       // 0x0368 (0x0004) [0x0000000000004001] [0x00000008] (CPF_Edit | CPF_Config)
	uint32_t                                           bMapBasedLogName : 1;                          // 0x0368 (0x0004) [0x0000000000004001] [0x00000010] (CPF_Edit | CPF_Config)
	uint32_t                                           bAIDrawDebug : 1;                              // 0x0368 (0x0004) [0x0000000000004001] [0x00000020] (CPF_Edit | CPF_Config)
	uint32_t                                           bAIBroken : 1;                                 // 0x0368 (0x0004) [0x0000000000002000] [0x00000040] (CPF_Transient)
	class AFileLog*                                    AILogFile;                                     // 0x036C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              DebugTextMaxLen;                               // 0x0370 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FAICmdHistoryItem>             CommandHistory;                                // 0x0374 (0x000C) [0x0000000000402003] (CPF_Edit | CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            CommandHistoryNum;                             // 0x0380 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	class TArray<class FName>                          AILogFilter;                                   // 0x0384 (0x000C) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	class FString                                      DemoActionString;                              // 0x0390 (0x000C) [0x0000000000400020] (CPF_Net | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameAIController");
		}

		return uClassPointer;
	};

	class FString eventGetActionString();
	void SetDesiredRotation(const struct FRotator& TargetDesiredRotation, bool optionalInLockDesiredRotation, bool optionalInUnlockWhenReached, float optionalInterpolationTime);
	void eventAILog_Internal(const class FString& LogText, const class FName& optionalLogCategory, bool optionalBForce);
	void RecordDemoAILog(const class FString& LogText);
	void eventDestroyed();
	void ReachedIntermediateMoveGoal();
	void ReachedMoveGoal();
	float GetDestinationOffset();
	class UGameAICommand* GetAICommandInStack(class UClass* InClass);
	class UGameAICommand* FindCommandOfClass(class UClass* SearchClass);
	void DumpCommandStack();
	void CheckCommandCount();
	class UGameAICommand* GetActiveCommand();
	bool AbortCommand(class UGameAICommand* AbortCmd, class UClass* optionalAbortClass);
	void PopCommand(class UGameAICommand* ToBePoppedCommand);
	void PushCommand(class UGameAICommand* NewCommand);
	void AllCommands(class UClass* BaseClass, class UGameAICommand*& outCmd);
};

// Class GameFramework.GameAICommand
// 0x001C (0x003C - 0x0058)
class UGameAICommand : public UAICommandBase
{
public:
	class UGameAICommand*                              ChildCommand;                                  // 0x003C (0x0004) [0x0000000004002003] (CPF_Edit | CPF_Const | CPF_Transient | CPF_EditInline)
	class FName                                        ChildStatus;                                   // 0x0040 (0x0008) [0x0000000000002003] (CPF_Edit | CPF_Const | CPF_Transient)
	class AGameAIController*                           GameAIOwner;                                   // 0x0048 (0x0004) [0x0000000000002001] (CPF_Edit | CPF_Transient)
	class FName                                        Status;                                        // 0x004C (0x0008) [0x0000000000002001] (CPF_Edit | CPF_Transient)
	uint32_t                                           bAllowNewSameClassInstance : 1;                // 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReplaceActiveSameClassInstance : 1;           // 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bAborted : 1;                                  // 0x0054 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bIgnoreNotifies : 1;                           // 0x0054 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIgnoreStepAside : 1;                          // 0x0054 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bPendingPop : 1;                               // 0x0054 (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameAICommand");
		}

		return uClassPointer;
	};

	bool HandlePathObstruction(class AActor* BlockedBy);
	bool MoveUnreachable(const struct FVector& AttemptedDest, class AActor* AttemptedTarget);
	void NotifyNeedRepath();
	class FString eventGetDebugVerboseText();
	void GetDebugOverheadText(class APlayerController* PC, class TArray<class FString>& outOutText);
	void eventDrawDebug(class AHUD* H, const class FName& Category);
	class FString eventGetDumpString();
	void Resumed(const class FName& OldCommandName);
	void Paused(class UGameAICommand* NewCommand);
	void Popped();
	void Pushed();
	void PostPopped();
	void PrePushed(class AGameAIController* AI);
	bool AllowStateTransitionTo(const class FName& StateName);
	bool AllowTransitionTo(class UClass* AttemptCommand);
	void Tick(float DeltaTime);
	bool ShouldIgnoreNotifies();
	void eventInternalTick(float DeltaTime);
	void eventInternalResumed(const class FName& OldCommandName);
	void eventInternalPaused(class UGameAICommand* NewCommand);
	void eventInternalPopped();
	void eventInternalPushed();
	void eventInternalPrePushed(class AGameAIController* AI);
	static bool InitCommand(class AGameAIController* AI);
	static bool InitCommandUserActor(class AGameAIController* AI, class AActor* UserActor);
};

// Class GameFramework.GameCameraBlockingVolume
// 0x0000 (0x01F8 - 0x01F8)
class AGameCameraBlockingVolume : public ABlockingVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCameraBlockingVolume");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GamePlayerController
// 0x0010 (0x0584 - 0x0594)
class AGamePlayerController : public APlayerController
{
public:
	uint32_t                                           bWarnCrowdMembers : 1;                         // 0x0584 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDebugCrowdAwareness : 1;                      // 0x0584 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bIsWarmupPaused : 1;                           // 0x0584 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	float                                              AgentAwareRadius;                              // 0x0588 (0x0004) [0x0000000000000000]               
	class FName                                        CurrentSoundMode;                              // 0x058C (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GamePlayerController");
		}

		return uClassPointer;
	};

	void ClientColorFade(const struct FColor& FadeColor, uint8_t FromAlpha, uint8_t ToAlpha, float FadeTime);
	void eventWarmupPause(bool bDesiredPauseState);
	bool CanUnpauseWarmup();
	void GetCurrentMovie(class FString& outMovieName);
	void eventClientStopMovie(float DelayInSeconds, bool bAllowMovieToFinish, bool bForceStopNonSkippable, bool bForceStopLoadingMovie);
	void eventClientPlayMovie(const class FString& MovieName, int32_t InStartOfRenderingMovieFrame, int32_t InEndOfRenderingMovieFrame, bool bRestrictPausing, bool bPlayOnceFromStream, bool bOnlyBackButtonSkipsMovie);
	static void KeepPlayingLoadingMovie();
	static void ShowLoadingMovie(bool bShowMovie, bool optionalBPauseAfterHide, float optionalPauseDuration, float optionalKeepPlayingDuration, bool optionalBOverridePreviousDelays);
	void SetSoundMode(const class FName& InSoundModeName);
	void DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale);
	void eventNotifyCrowdAgentInRadius(class AGameCrowdAgent* Agent);
	void eventNotifyCrowdAgentRefresh();
	void CrowdDebug(bool bEnabled);
	int32_t GetUIPlayerIndex();
	void OnToggleMouseCursor(class USeqAct_ToggleMouseCursor* inAction);
};

// Class GameFramework.GameCheatManager
// 0x0014 (0x0054 - 0x0068)
class UGameCheatManager : public UCheatManager
{
public:
	class ADebugCameraController*                      DebugCameraControllerRef;                      // 0x0054 (0x0004) [0x0000000000000000]               
	class UClass*                                      DebugCameraControllerClass;                    // 0x0058 (0x0004) [0x0000000000000000]               
	class FString                                      DebugCameraControllerClassName;                // 0x005C (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCheatManager");
		}

		return uClassPointer;
	};

	void OnRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void TestHttp(const class FString& Verb, const class FString& Payload, const class FString& URL, bool optionalBSendParallelRequest);
	void EnableDebugCamera(bool bEnableDebugText);
	void TeleportPawnToCamera(bool optionalBToggleDebugCameraOff);
	void ToggleDebugCamera(bool optionalBDrawDebugText);
	void PatchDebugCameraController();
};

// Class GameFramework.GameCrowdAgent
// 0x0208 (0x01CC - 0x03D4)
class AGameCrowdAgent : public ACrowdAgentBase
{
public:
	struct FPointer                                    VfTable_IInterface_RVO;                        // 0x01CC (0x0004) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UGameCrowdGroup*                             MyGroup;                                       // 0x01D0 (0x0004) [0x0000000000000000]               
	struct FVector                                     PreferredVelocity;                             // 0x01D4 (0x000C) [0x0000000000000000]               
	struct FVector                                     PendingVelocity;                               // 0x01E0 (0x000C) [0x0000000000000000]               
	class AGameCrowdDestination*                       CurrentDestination;                            // 0x01EC (0x0004) [0x0000000000000000]               
	class AGameCrowdDestination*                       BehaviorDestination;                           // 0x01F0 (0x0004) [0x0000000000000000]               
	class AGameCrowdDestination*                       PreviousDestination;                           // 0x01F4 (0x0004) [0x0000000000000000]               
	float                                              InterpZTranslation;                            // 0x01F8 (0x0004) [0x0000000000000000]               
	int32_t                                            Health;                                        // 0x01FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DeadBodyDuration;                              // 0x0200 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                              // 0x0204 (0x0004) [0x00000000040A000A] (CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline)
	int32_t                                            ConformTraceFrameCount;                        // 0x0208 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FNearbyDynamicItem>            NearbyDynamics;                                // 0x020C (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint32_t                                           bUniformScale : 1;                             // 0x0218 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCheckForObstacles : 1;                        // 0x0218 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bUseNavMeshPathing : 1;                        // 0x0218 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bWantsSeePlayerNotification : 1;               // 0x0218 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bAllowPitching : 1;                            // 0x0218 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bHitObstacle : 1;                              // 0x0218 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bBadHitNormal : 1;                             // 0x0218 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bSimulateThisTick : 1;                         // 0x0218 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bPotentialEncounter : 1;                       // 0x0218 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bIsPanicked : 1;                               // 0x0218 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bWantsGroupIdle : 1;                           // 0x0218 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bPreferVisibleDestination : 1;                 // 0x0218 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           bPreferVisibleDestinationOnSpawn : 1;          // 0x0218 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	uint32_t                                           bHasNotifiedSpawner : 1;                       // 0x0218 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bIsInSpawnPool : 1;                            // 0x0218 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bPaused : 1;                                   // 0x0218 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	EConformType                                       ConformType;                                   // 0x021C (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              ConformTraceDist;                              // 0x0220 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ConformTraceInterval;                          // 0x0224 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            CurrentConformTraceInterval;                   // 0x0228 (0x0004) [0x0000000000000000]               
	float                                              LastGroundZ;                                   // 0x022C (0x0004) [0x0000000000000000]               
	float                                              AwareRadius;                                   // 0x0230 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AvoidOtherRadius;                              // 0x0234 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FAvoidOtherSampleItem>         AvoidOtherSampleList;                          // 0x0238 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              PENALTY_COEFF_ANGLETOGOAL;                     // 0x0244 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PENALTY_COEFF_ANGLETOVEL;                      // 0x0248 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PENALTY_COEFF_MAG;                             // 0x024C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MIN_PENALTY_THRESHOLD;                         // 0x0250 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastProgressTime;                              // 0x0254 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastFallbackActiveTime;                        // 0x0258 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxPathLaneValue;                              // 0x025C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentPathLaneValue;                          // 0x0260 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExtraPathCost;                                 // 0x0264 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RotateToTargetSpeed;                           // 0x0268 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxYawRate;                                    // 0x026C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     MeshMinScale3D;                                // 0x0270 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     MeshMaxScale3D;                                // 0x027C (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              EyeZOffset;                                    // 0x0288 (0x0004) [0x0000000000000000]               
	float                                              ProximityLODDist;                              // 0x028C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VisibleProximityLODDist;                       // 0x0290 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LastKnownGoodPosition;                         // 0x0294 (0x000C) [0x0000000000000000]               
	float                                              GroundOffset;                                  // 0x02A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     IntermediatePoint;                             // 0x02A4 (0x000C) [0x0000000000000000]               
	struct FVector                                     SearchExtent;                                  // 0x02B0 (0x000C) [0x0000000000000000]               
	class UClass*                                      NavigationHandleClass;                         // 0x02BC (0x0004) [0x0000000000000000]               
	class UNavigationHandle*                           NavigationHandle;                              // 0x02C0 (0x0004) [0x0000000000000000]               
	int32_t                                            ObstacleCheckCount;                            // 0x02C4 (0x0004) [0x0000000000000000]               
	float                                              WalkableFloorZ;                                // 0x02C8 (0x0004) [0x0000000000000000]               
	float                                              LastPathingAttempt;                            // 0x02CC (0x0004) [0x0000000000000000]               
	float                                              LastUpdateTime;                                // 0x02D0 (0x0004) [0x0000000000000000]               
	float                                              NotVisibleLifeSpan;                            // 0x02D4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AGameCrowdAgent*                             MyArchetype;                                   // 0x02D8 (0x0004) [0x0000000000000000]               
	float                                              MaxWalkingSpeed;                               // 0x02DC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRunningSpeed;                               // 0x02E0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxSpeed;                                      // 0x02E4 (0x0004) [0x0000000000000000]               
	class TArray<struct FRecentInteraction>            RecentInteractions;                            // 0x02E8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              BeaconMaxDist;                                 // 0x02F4 (0x0004) [0x0000000000000000]               
	struct FVector                                     BeaconOffset;                                  // 0x02F8 (0x000C) [0x0000000000000000]               
	class UTexture2D*                                  BeaconTexture;                                 // 0x0304 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FLinearColor                                BeaconColor;                                   // 0x0308 (0x0010) [0x0000000000000002] (CPF_Const)   
	class USoundCue*                                   AmbientSoundCue;                               // 0x0318 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAudioComponent*                             AmbientSoundComponent;                         // 0x031C (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UGameCrowdAgentBehavior*                     CurrentBehavior;                               // 0x0320 (0x0004) [0x0000000000000000]               
	float                                              CurrentBehaviorActivationTime;                 // 0x0324 (0x0004) [0x0000000000000000]               
	class TArray<struct FBehaviorEntry>                EncounterAgentBehaviors;                       // 0x0328 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FBehaviorEntry>                SeePlayerBehaviors;                            // 0x0334 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MaxSeePlayerDistSq;                            // 0x0340 (0x0004) [0x0000000000000000]               
	float                                              SeePlayerInterval;                             // 0x0344 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FBehaviorEntry>                SpawnBehaviors;                                // 0x0348 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FBehaviorEntry>                UneasyBehaviors;                               // 0x0354 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FBehaviorEntry>                AlertBehaviors;                                // 0x0360 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FBehaviorEntry>                PanicBehaviors;                                // 0x036C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FBehaviorEntry>                RandomBehaviors;                               // 0x0378 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FBehaviorEntry>                TakeDamageBehaviors;                           // 0x0384 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              RandomBehaviorInterval;                        // 0x0390 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ForceUpdateTime;                               // 0x0394 (0x0004) [0x0000000000000000]               
	float                                              ReachThreshold;                                // 0x0398 (0x0004) [0x0000000000000000]               
	class TArray<struct FBehaviorEntry>                GroupWaitingBehaviors;                         // 0x039C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              DesiredGroupRadius;                            // 0x03A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DesiredGroupRadiusSq;                          // 0x03AC (0x0004) [0x0000000000000000]               
	float                                              MaxLOSLifeDistanceSq;                          // 0x03B0 (0x0004) [0x0000000000000000]               
	class UGameCrowdSpawnerInterface*                  MySpawner_Object;                              // 0x03B4 (0x0004) [0x0000000000000000] 
	class UGameCrowdSpawnerInterface*                  MySpawner_Interface;                           // 0x03B8 (0x0004) [0x0000000000000000]               
	struct FVector                                     SpawnOffset;                                   // 0x03BC (0x000C) [0x0000000000000000]               
	float                                              InitialLastRenderTime;                         // 0x03C8 (0x0004) [0x0000000000000000]               
	struct FColor                                      DebugAgentColor;                               // 0x03CC (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AGameCrowdDestination*                       DebugSpawnDest;                                // 0x03D0 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdAgent");
		}

		return uClassPointer;
	};

	void InitDebugColor();
	class FString GetBehaviorString();
	class FString GetDestString();
	void eventPostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	void NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	struct FVector eventGeneratePathToActor(class AActor* Goal, float optionalWithinDistance, bool optionalBAllowPartialPath);
	void eventInitNavigationHandle();
	void eventOverlappedActorEvent(class AActor* A);
	void TakeDamage(int32_t DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	void eventFireDeathEvent();
	void PlayDeath(const struct FVector& KillMomentum);
	void eventUpdateIntermediatePoint(class AActor* optionalDestinationActor);
	bool CalcCamera(float fDeltaTime, struct FVector& outOut_CamLoc, struct FRotator& outOut_CamRot, float& outOut_FOV);
	bool IsIdle();
	void SetCurrentBehavior(class UGameCrowdAgentBehavior* BehaviorArchetype);
	void eventStopBehavior();
	void eventHandleBehaviorEvent(ECrowdBehaviorEvent EventType, class AActor* InInstigator, bool bViralCause, bool bPropagateViralFlag);
	void ActivateInstancedBehavior(class UGameCrowdAgentBehavior* NewBehaviorObject);
	void eventActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* optionalLookAtActor);
	void ResetSeePlayer();
	void TryRandomBehavior();
	void eventNotifySeePlayer(class APlayerController* PC);
	void PlaySpawnBehavior();
	void eventHandlePotentialAgentEncounter();
	void eventStopIdleAnimation();
	void eventPlayIdleAnimation();
	void OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action);
	void InitializeAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, bool bWarmupPosition, bool bCheckWarmupVisibility, class TArray<struct FCrowdSpawnerPlayerInfo>& outPlayerInfo);
	struct FVector GetAttemptedSpawnLocation(float Pct, const struct FVector& CurPos, float CurRadius, const struct FVector& DestPos, float DestRadius);
	void SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows);
	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void Destroyed();
	void ResetPooledAgent();
	void eventKillAgent();
	void PostBeginPlay();
	void SetMaxSpeed();
	void eventSetCurrentDestination(class AGameCrowdDestination* NewDest);
	void eventWaitForGroupMembers();
	bool PickBehaviorFrom(const class TArray<struct FBehaviorEntry>& BehaviorList, const struct FVector& optionalBestCameraLoc);
	bool IsPanicked();
	void eventFellOutOfWorld(class UClass* dmgType);
	struct FVector GetCollisionExtent();
};

// Class GameFramework.GameCrowdAgentSkeletal
// 0x0084 (0x03D4 - 0x0458)
class AGameCrowdAgentSkeletal : public AGameCrowdAgent
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                         // 0x03D4 (0x0004) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UAnimNodeBlend*                              SpeedBlendNode;                                // 0x03D8 (0x0004) [0x0000000000000000]               
	class UAnimNodeSlot*                               FullBodySlot;                                  // 0x03DC (0x0004) [0x0000000000000000]               
	class UAnimNodeSequence*                           ActionSeqNode;                                 // 0x03E0 (0x0004) [0x0000000000000000]               
	class UAnimNodeSequence*                           WalkSeqNode;                                   // 0x03E4 (0x0004) [0x0000000000000000]               
	class UAnimNodeSequence*                           RunSeqNode;                                    // 0x03E8 (0x0004) [0x0000000000000000]               
	class UAnimTree*                                   AgentTree;                                     // 0x03EC (0x0004) [0x0000000000000000]               
	class TArray<class FName>                          WalkAnimNames;                                 // 0x03F0 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FName>                          RunAnimNames;                                  // 0x03FC (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FName>                          IdleAnimNames;                                 // 0x0408 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FName>                          DeathAnimNames;                                // 0x0414 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              SpeedBlendStart;                               // 0x0420 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpeedBlendEnd;                                 // 0x0424 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AnimVelRate;                                   // 0x0428 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxSpeedBlendChangeSpeed;                      // 0x042C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        MoveSyncGroupName;                             // 0x0430 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FGameCrowdAttachmentList>      Attachments;                                   // 0x0438 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MaxTargetAcquireTime;                          // 0x0444 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseRootMotionVelocity : 1;                    // 0x0448 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllowSkeletonUpdateChangeBasedOnTickResult : 1;// 0x0448 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bTickWhenNotVisible : 1;                       // 0x0448 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bIsPlayingIdleAnimation : 1;                   // 0x0448 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIsPlayingDeathAnimation : 1;                  // 0x0448 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bIsPlayingImportantAnimation : 1;              // 0x0448 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bAnimateThisTick : 1;                          // 0x0448 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              NotVisibleDisableTickTime;                     // 0x044C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxAnimationDistance;                          // 0x0450 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxAnimationDistanceSq;                        // 0x0454 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdAgentSkeletal");
		}

		return uClassPointer;
	};

	void CreateAttachments();
	void eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void eventStopIdleAnimation();
	void eventPlayIdleAnimation();
	void eventClearLatentAnimation();
	void OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action);
	void SetRootMotion(bool bRootMotionEnabled);
	void PlayDeath(const struct FVector& KillMomentum);
	void SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows);
	void PostBeginPlay();
};

// Class GameFramework.GameCrowdAgentSM
// 0x0008 (0x03D4 - 0x03DC)
class AGameCrowdAgentSM : public AGameCrowdAgent
{
public:
	class UStaticMeshComponent*                        Mesh;                                          // 0x03D4 (0x0004) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMaterialInstanceConstant*                   MeshColor;                                     // 0x03D8 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdAgentSM");
		}

		return uClassPointer;
	};

	void StopBehavior();
	void ActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* optionalLookAtActor);
	void ChangeDebugColor(const struct FColor& InC);
	void InitDebugColor();
	void PostBeginPlay();
};

// Class GameFramework.GameCrowdAgentBehavior
// 0x0034 (0x003C - 0x0070)
class UGameCrowdAgentBehavior : public UObject
{
public:
	ECrowdBehaviorEvent                                MyEventType;                                   // 0x003C (0x0001) [0x0000000000000000]               
	ECrowdBehaviorEvent                                ViralBehaviorEvent;                            // 0x003D (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              DurationOfBehavior;                            // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TimeUntilStopBehavior;                         // 0x0044 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIdleBehavior : 1;                             // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bFaceActionTargetFirst : 1;                    // 0x0048 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bIsViralBehavior : 1;                          // 0x0048 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bPassOnIsViralBehaviorFlag : 1;                // 0x0048 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	class AActor*                                      ActionTarget;                                  // 0x004C (0x0004) [0x0000000000000000]               
	float                                              MaxPlayerDistance;                             // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ViralRadius;                                   // 0x0054 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DurationBeforeBecomesViral;                    // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TimeToBecomeViral;                             // 0x005C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              DurationOfViralBehaviorPropagation;            // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TimeToStopPropagatingViralBehavior;            // 0x0064 (0x0004) [0x0000000000002000] (CPF_Transient)
	class AGameCrowdAgent*                             MyAgent;                                       // 0x0068 (0x0004) [0x0000000000000000]               
	struct FColor                                      DebugBehaviorColor;                            // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdAgentBehavior");
		}

		return uClassPointer;
	};

	bool AllowBehaviorAt(class AGameCrowdDestination* Destination);
	bool AllowThisDestination(class AGameCrowdDestination* Destination);
	void eventPropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent);
	class AActor* GetBehaviorInstigator();
	void ActivatedBy(class AActor* NewActionTarget);
	class AActor* GetDestinationActor();
	void ChangingDestination(class AGameCrowdDestination* NewDest);
	class FString GetBehaviorString();
	void eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void StopBehavior();
	void InitBehavior(class AGameCrowdAgent* Agent);
	bool HandleMovement();
	void eventFinishedTargetRotation();
	bool CanBeUsedBy(class AGameCrowdAgent* Agent, const struct FVector& CameraLoc);
	void eventTick(float DeltaTime);
	bool ShouldEndIdle();
	static class AGameCrowdBehaviorPoint* TriggerCrowdBehavior(ECrowdBehaviorEvent EventType, class AActor* Instigator, const struct FVector& AtLocation, float InRange, float InDuration, class AActor* optionalBaseActor, bool optionalBRequireLOS);
};

// Class GameFramework.GameCrowdBehavior_PlayAnimation
// 0x002C (0x0070 - 0x009C)
class UGameCrowdBehavior_PlayAnimation : public UGameCrowdAgentBehavior
{
public:
	class TArray<class FName>                          AnimationList;                                 // 0x0070 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              BlendInTime;                                   // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseRootMotion : 1;                            // 0x0084 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bLookAtPlayer : 1;                             // 0x0084 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bLooping : 1;                                  // 0x0084 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bBlendBetweenAnims : 1;                        // 0x0084 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	class AActor*                                      CustomActionTarget;                            // 0x0088 (0x0004) [0x0000000000000000]               
	int32_t                                            LoopIndex;                                     // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LoopTime;                                      // 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USeqAct_PlayAgentAnimation*                  AnimSequence;                                  // 0x0094 (0x0004) [0x0000000000000000]               
	int32_t                                            AnimationIndex;                                // 0x0098 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdBehavior_PlayAnimation");
		}

		return uClassPointer;
	};

	class FString GetBehaviorString();
	void StopBehavior();
	void PlayAgentAnimationNow();
	void eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void SetSequenceOutput();
	void eventFinishedTargetRotation();
	void InitBehavior(class AGameCrowdAgent* Agent);
};

// Class GameFramework.GameCrowdBehavior_RunFromPanic
// 0x0004 (0x0070 - 0x0074)
class UGameCrowdBehavior_RunFromPanic : public UGameCrowdAgentBehavior
{
public:
	class AActor*                                      PanicFocus;                                    // 0x0070 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdBehavior_RunFromPanic");
		}

		return uClassPointer;
	};

	class FString GetBehaviorString();
	bool AllowBehaviorAt(class AGameCrowdDestination* Destination);
	bool AllowThisDestination(class AGameCrowdDestination* Destination);
	class AActor* GetBehaviorInstigator();
	void StopBehavior();
	void InitBehavior(class AGameCrowdAgent* Agent);
	void ActivatedBy(class AActor* NewActionTarget);
};

// Class GameFramework.GameCrowdBehavior_WaitForGroup
// 0x0000 (0x0070 - 0x0070)
class UGameCrowdBehavior_WaitForGroup : public UGameCrowdAgentBehavior
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdBehavior_WaitForGroup");
		}

		return uClassPointer;
	};

	void StopBehavior();
	bool ShouldEndIdle();
	class FString GetBehaviorString();
	void InitBehavior(class AGameCrowdAgent* Agent);
};

// Class GameFramework.GameCrowdBehavior_WaitInQueue
// 0x0008 (0x0070 - 0x0078)
class UGameCrowdBehavior_WaitInQueue : public UGameCrowdAgentBehavior
{
public:
	uint32_t                                           bStoppingBehavior : 1;                         // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	class AGameCrowdDestinationQueuePoint*             QueuePosition;                                 // 0x0074 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdBehavior_WaitInQueue");
		}

		return uClassPointer;
	};

	void StopBehavior();
	bool ShouldEndIdle();
	class FString GetBehaviorString();
	class AActor* GetDestinationActor();
	void ChangingDestination(class AGameCrowdDestination* NewDest);
	bool HandleMovement();
};

// Class GameFramework.GameCrowdGroup
// 0x000C (0x003C - 0x0048)
class UGameCrowdGroup : public UObject
{
public:
	class TArray<class AGameCrowdAgent*>               Members;                                       // 0x003C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdGroup");
		}

		return uClassPointer;
	};

	void UpdateDestinations(class AGameCrowdDestination* NewDestination);
	void RemoveMember(class AGameCrowdAgent* Agent);
	void AddMember(class AGameCrowdAgent* Agent);
};

// Class GameFramework.GameCrowdInfoVolume
// 0x000C (0x01F4 - 0x0200)
class AGameCrowdInfoVolume : public AVolume
{
public:
	class TArray<class AGameCrowdDestination*>         PotentialSpawnPoints;                          // 0x01F4 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdInfoVolume");
		}

		return uClassPointer;
	};

	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};

// Class GameFramework.GameCrowdInteractionPoint
// 0x0008 (0x01C8 - 0x01D0)
class AGameCrowdInteractionPoint : public AActor
{
public:
	uint32_t                                           bIsEnabled : 1;                                // 0x01C8 (0x0004) [0x0000000000000021] [0x00000001] (CPF_Edit | CPF_Net)
	class UCylinderComponent*                          CylinderComponent;                             // 0x01CC (0x0004) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdInteractionPoint");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
};

// Class GameFramework.GameCrowdBehaviorPoint
// 0x0014 (0x01D0 - 0x01E4)
class AGameCrowdBehaviorPoint : public AGameCrowdInteractionPoint
{
public:
	float                                              RadiusOfBehaviorEvent;                         // 0x01D0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DurationOfBehaviorEvent;                       // 0x01D4 (0x0004) [0x0000000000004000] (CPF_Config)  
	ECrowdBehaviorEvent                                EventType;                                     // 0x01D8 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bRequireLOS : 1;                               // 0x01DC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class AActor*                                      Initiator;                                     // 0x01E0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdBehaviorPoint");
		}

		return uClassPointer;
	};

	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void DestroySelf();
	void eventPostBeginPlay();
};

// Class GameFramework.GameCrowdDestination
// 0x0080 (0x01D0 - 0x0250)
class AGameCrowdDestination : public AGameCrowdInteractionPoint
{
public:
	struct FPointer                                    VfTable_IEditorLinkSelectionInterface;         // 0x01D0 (0x0004) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bKillWhenReached : 1;                          // 0x01D4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllowAsPreviousDestination : 1;               // 0x01D4 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bAvoidWhenPanicked : 1;                        // 0x01D4 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bSkipBehaviorIfPanicked : 1;                   // 0x01D4 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bFleeDestination : 1;                          // 0x01D4 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bMustReachExactly : 1;                         // 0x01D4 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bHasRestrictions : 1;                          // 0x01D4 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bAllowsSpawning : 1;                           // 0x01D4 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bAllowCloudSpawning : 1;                       // 0x01D4 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           bAllowVisibleSpawning : 1;                     // 0x01D4 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bLineSpawner : 1;                              // 0x01D4 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           bSpawnAtEdge : 1;                              // 0x01D4 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           bSoftPerimeter : 1;                            // 0x01D4 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	uint32_t                                           bIsVisible : 1;                                // 0x01D4 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bWillBeVisible : 1;                            // 0x01D4 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bCanSpawnHereNow : 1;                          // 0x01D4 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bIsBeyondSpawnDistance : 1;                    // 0x01D4 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bAdjacentToVisibleNode : 1;                    // 0x01D4 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bHasNavigationMesh : 1;                        // 0x01D4 (0x0004) [0x0000000000000000] [0x00040000] 
	class TArray<class AGameCrowdDestination*>         NextDestinations;                              // 0x01D8 (0x000C) [0x0000000000600001] (CPF_Edit | CPF_NeedCtorLink)
	class AGameCrowdDestinationQueuePoint*             QueueHead;                                     // 0x01E4 (0x0004) [0x0000000000200001] (CPF_Edit)    
	int32_t                                            Capacity;                                      // 0x01E8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Frequency;                                     // 0x01EC (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            CustomerCount;                                 // 0x01F0 (0x0004) [0x0000000000000000]               
	class TArray<class UClass*>                        SupportedAgentClasses;                         // 0x01F4 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UObject*>                       SupportedArchetypes;                           // 0x0200 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UClass*>                        RestrictedAgentClasses;                        // 0x020C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UObject*>                       RestrictedArchetypes;                          // 0x0218 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              ExactReachTolerance;                           // 0x0224 (0x0004) [0x0000000000000000]               
	class FName                                        InteractionTag;                                // 0x0228 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              InteractionDelay;                              // 0x0230 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FBehaviorEntry>                ReachedBehaviors;                              // 0x0234 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class AGameCrowdAgent*                             AgentEnRoute;                                  // 0x0240 (0x0004) [0x0000000000000000]               
	float                                              Priority;                                      // 0x0244 (0x0004) [0x0000000000000000]               
	float                                              LastSpawnTime;                                 // 0x0248 (0x0004) [0x0000000000000000]               
	class AGameCrowdPopulationManager*                 MyPopMgr;                                      // 0x024C (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdDestination");
		}

		return uClassPointer;
	};

	void DrawDebug(bool optionalBPresistent, class TArray<struct FCrowdSpawnerPlayerInfo>& outPlayerInfo);
	float GetDestinationRadius();
	void PrioritizeSpawnPoint(float MaxSpawnDist, class TArray<struct FCrowdSpawnerPlayerInfo>& outPlayerInfo);
	bool AnalyzeSpawnPoint(float MaxSpawnDistSq, bool bForceNavMeshPathing, class UNavigationHandle* NavHandle, class TArray<struct FCrowdSpawnerPlayerInfo>& outPlayerInfo);
	void GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector& outSpawnPos, struct FRotator& outSpawnRot);
	float GetSpawnRadius();
	bool eventAllowableDestinationFor(class AGameCrowdAgent* Agent);
	bool AtCapacity(uint8_t optionalCheckCnt);
	void eventIncrementCustomerCount(class AGameCrowdAgent* ArrivingAgent);
	void eventDecrementCustomerCount(class AGameCrowdAgent* DepartingAgent);
	void PickNewDestinationFor(class AGameCrowdAgent* Agent, bool bIgnoreRestrictions);
	void eventReachedDestination(class AGameCrowdAgent* Agent);
	void Destroyed();
	void PostBeginPlay();
	bool ReachedByAgent(class AGameCrowdAgent* Agent, const struct FVector& TestPosition, bool bTestExactly);
};

// Class GameFramework.GameCrowdDestinationQueuePoint
// 0x001C (0x01D0 - 0x01EC)
class AGameCrowdDestinationQueuePoint : public AGameCrowdInteractionPoint
{
public:
	class AGameCrowdDestinationQueuePoint*             NextQueuePosition;                             // 0x01D0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AGameCrowdInteractionPoint*                  PreviousQueuePosition;                         // 0x01D4 (0x0004) [0x0000000000000000]               
	class AGameCrowdAgent*                             QueuedAgent;                                   // 0x01D8 (0x0004) [0x0000000000000000]               
	class AGameCrowdDestination*                       QueueDestination;                              // 0x01DC (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bClearingQueue : 1;                            // 0x01E0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPendingAdvance : 1;                           // 0x01E0 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              AverageReactionTime;                           // 0x01E4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      QueueBehaviorClass;                            // 0x01E8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdDestinationQueuePoint");
		}

		return uClassPointer;
	};

	bool HasCustomer();
	void ClearQueue(class AGameCrowdAgent* OldCustomer);
	void AddCustomer(class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition);
	void ActuallyAdvance();
	void AdvanceCustomerTo(class AGameCrowdInteractionPoint* FrontPosition);
	void eventReachedDestination(class AGameCrowdAgent* Agent);
	bool HasSpace();
	bool QueueReachedBy(class AGameCrowdAgent* Agent, const struct FVector& TestPosition);
};

// Class GameFramework.GameCrowdPopulationManager
// 0x00C8 (0x01C8 - 0x0290)
class AGameCrowdPopulationManager : public ACrowdPopulationManagerBase
{
public:
	struct FPointer                                    VfTable_IInterface_NavigationHandle;           // 0x01C8 (0x0004) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FCrowdSpawnInfoItem                         CloudSpawnInfo;                                // 0x01CC (0x007C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FCrowdSpawnInfoItem>           ScriptedSpawnInfo;                             // 0x0248 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class AGameCrowdInfoVolume*                        ActiveCrowdInfoVolume;                         // 0x0254 (0x0004) [0x0000000000000000]               
	class TArray<class AGameCrowdDestination*>         GlobalPotentialSpawnPoints;                    // 0x0258 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              SplitScreenNumReduction;                       // 0x0264 (0x0004) [0x0000000000000000]               
	float                                              PlayerPositionPredictionTime;                  // 0x0268 (0x0004) [0x0000000000000000]               
	float                                              HeadVisibilityOffset;                          // 0x026C (0x0004) [0x0000000000000000]               
	class UClass*                                      NavigationHandleClass;                         // 0x0270 (0x0004) [0x0000000000000000]               
	class UNavigationHandle*                           NavigationHandle;                              // 0x0274 (0x0004) [0x0000000000000000]               
	class AGameCrowdAgent*                             QueryingAgent;                                 // 0x0278 (0x0004) [0x0000000000000000]               
	class TArray<struct FCrowdSpawnerPlayerInfo>       PlayerInfo;                                    // 0x027C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LastPlayerInfoUpdateTime;                      // 0x0288 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDebugSpawns : 1;                              // 0x028C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPauseCrowd : 1;                               // 0x028C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdPopulationManager");
		}

		return uClassPointer;
	};

	class AGameCrowdAgent* eventCreateNewAgent(class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, struct FCrowdSpawnInfoItem& outItem);
	bool Warmup(int32_t WarmupNum, struct FCrowdSpawnInfoItem& outItem);
	class AGameCrowdAgent* SpawnAgent(class AGameCrowdDestination* SpawnLoc, struct FCrowdSpawnInfoItem& outItem);
	class AGameCrowdAgent* SpawnAgentByIdx(int32_t SpawnerIdx, class AGameCrowdDestination* SpawnLoc);
	bool ValidateSpawnAt(class AGameCrowdDestination* Candidate, struct FCrowdSpawnInfoItem& outItem);
	void AddPrioritizedSpawnPoint(class AGameCrowdDestination* GCD, struct FCrowdSpawnInfoItem& outItem);
	void AnalyzeSpawnPoints(int32_t StartIndex, int32_t NumToUpdate, struct FCrowdSpawnInfoItem& outItem);
	void eventPrioritizeSpawnPoints(float DeltaTime, struct FCrowdSpawnInfoItem& outItem);
	static bool StaticGetPlayerInfo(class TArray<struct FCrowdSpawnerPlayerInfo>& outOut_PlayerInfo);
	bool GetPlayerInfo();
	class AGameCrowdDestination* eventPickSpawnPoint(struct FCrowdSpawnInfoItem& outItem);
	bool eventUpdateSpawner(float DeltaTime, struct FCrowdSpawnInfoItem& outItem);
	void UpdateAllSpawners(float DeltaTime);
	void Tick(float DeltaTime);
	bool ShouldDebugDestinations();
	bool IsSpawningActive();
	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void AgentDestroyed(class AGameCrowdAgent* Agent);
	void eventFlushAllAgents();
	void eventFlushAgents(const struct FCrowdSpawnInfoItem& Item);
	int32_t eventCreateSpawner(class USeqAct_GameCrowdPopulationManagerToggle* inAction);
	void SetCrowdInfoVolume(class AGameCrowdInfoVolume* Vol);
	void RemoveSpawnPoint(class AGameCrowdDestination* GCD);
	void AddSpawnPoint(class AGameCrowdDestination* GCD);
	void eventNotifyPathChanged();
	void PostBeginPlay();
};

// Class GameFramework.GameCrowdReplicationActor
// 0x000C (0x01C8 - 0x01D4)
class AGameCrowdReplicationActor : public AActor
{
public:
	class USeqAct_GameCrowdSpawner*                    Spawner;                                       // 0x01C8 (0x0004) [0x0000000000000020] (CPF_Net | CPF_RepNotify)
	uint32_t                                           bSpawningActive : 1;                           // 0x01CC (0x0004) [0x0000000000000020] [0x00000001] (CPF_Net | CPF_RepNotify)
	int32_t                                            DestroyAllCount;                               // 0x01D0 (0x0004) [0x0000000000000020] (CPF_Net | CPF_RepNotify)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdReplicationActor");
		}

		return uClassPointer;
	};

	void eventReplicatedEvent(const class FName& VarName);
};

// Class GameFramework.GameCrowdSpawnRelativeActor
// 0x0000 (0x01C8 - 0x01C8)
class AGameCrowdSpawnRelativeActor : public AActor
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdSpawnRelativeActor");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameDestinationConnRenderingComponent
// 0x0000 (0x01D8 - 0x01D8)
class UGameDestinationConnRenderingComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameDestinationConnRenderingComponent");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameExplosion
// 0x00AC (0x003C - 0x00E8)
class UGameExplosion : public UObject
{
public:
	uint32_t                                           bDirectionalExplosion : 1;                     // 0x003C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIgnoreInstigator : 1;                         // 0x003C (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bAllowTeammateCringes : 1;                     // 0x003C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bFullDamageToAttachee : 1;                     // 0x003C (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bAttachExplosionEmitterToAttachee : 1;         // 0x003C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bPerformRadialBlurRelevanceCheck : 1;          // 0x003C (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bCausesFracture : 1;                           // 0x003C (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bAllowPerMaterialFX : 1;                       // 0x003C (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bParticleSystemIsBeingOverriddenDontUsePhysMatVersion : 1;// 0x003C (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           bSkipDefaultPhysMatParticleSystem : 1;         // 0x003C (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bUseMapSpecificValues : 1;                     // 0x003C (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           bUseOverlapCheck : 1;                          // 0x003C (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           bOrientCameraShakeTowardsEpicenter : 1;        // 0x003C (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	uint32_t                                           bAutoControllerVibration : 1;                  // 0x003C (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	float                                              DirectionalExplosionAngleDeg;                  // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DamageDelay;                                   // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Damage;                                        // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DamageRadius;                                  // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DamageFalloffExponent;                         // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      ActorToIgnoreForDamage;                        // 0x0054 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UClass*                                      ActorClassToIgnoreForDamage;                   // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      ActorClassToIgnoreForKnockdownsAndCringes;     // 0x005C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      MyDamageType;                                  // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              KnockDownRadius;                               // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              KnockDownStrength;                             // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CringeRadius;                                  // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   CringeDuration;                                // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              MomentumTransferScale;                         // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             ParticleEmitterTemplate;                       // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ExplosionEmitterScale;                         // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      HitActor;                                      // 0x0084 (0x0004) [0x0000000000000000]               
	struct FVector                                     HitLocation;                                   // 0x0088 (0x000C) [0x0000000000000000]               
	struct FVector                                     HitNormal;                                     // 0x0094 (0x000C) [0x0000000000000000]               
	class USoundCue*                                   ExplosionSound;                                // 0x00A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   ExplosionSoundHurtSomeone;                     // 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UPointLightComponent*                        ExploLight;                                    // 0x00A8 (0x0004) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              ExploLightFadeOutTime;                         // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	class URadialBlurComponent*                        ExploRadialBlur;                               // 0x00B0 (0x0004) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              ExploRadialBlurFadeOutTime;                    // 0x00B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ExploRadialBlurMaxBlur;                        // 0x00B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FractureMeshRadius;                            // 0x00BC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FracturePartVel;                               // 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UCameraShake*                                CamShake;                                      // 0x00C4 (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	class UCameraShake*                                CamShake_Left;                                 // 0x00C8 (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	class UCameraShake*                                CamShake_Right;                                // 0x00CC (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	class UCameraShake*                                CamShake_Rear;                                 // 0x00D0 (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	float                                              CamShakeInnerRadius;                           // 0x00D4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CamShakeOuterRadius;                           // 0x00D8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CamShakeFalloff;                               // 0x00DC (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      CameraLensEffect;                              // 0x00E0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CameraLensEffectRadius;                        // 0x00E4 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameExplosion");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameExplosionActor
// 0x0058 (0x01C8 - 0x0220)
class AGameExplosionActor : public AActor
{
public:
	uint32_t                                           bHasExploded : 1;                              // 0x01C8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bExplodeMoreThanOnce : 1;                      // 0x01C8 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bTrackExplosionParticleSystemLifespan : 1;     // 0x01C8 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDrawDebug : 1;                                // 0x01C8 (0x0004) [0x0000000000000000] [0x00000008] 
	class UPointLightComponent*                        ExplosionLight;                                // 0x01CC (0x0004) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class URadialBlurComponent*                        ExplosionRadialBlur;                           // 0x01D0 (0x0004) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	float                                              LightFadeTime;                                 // 0x01D4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LightFadeTimeRemaining;                        // 0x01D8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LightInitialBrightness;                        // 0x01DC (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              RadialBlurFadeTime;                            // 0x01E0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              RadialBlurFadeTimeRemaining;                   // 0x01E4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              RadialBlurMaxBlurAmount;                       // 0x01E8 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UGameExplosion*                              ExplosionTemplate;                             // 0x01EC (0x0004) [0x0000000000000000]               
	class URB_RadialImpulseComponent*                  RadialImpulseComponent;                        // 0x01F0 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AController*                                 InstigatorController;                          // 0x01F4 (0x0004) [0x0000000000000000]               
	class AActor*                                      HitActorFromPhysMaterialTrace;                 // 0x01F8 (0x0004) [0x0000000000000000]               
	struct FVector                                     HitLocationFromPhysMaterialTrace;              // 0x01FC (0x000C) [0x0000000000000000]               
	class AActor*                                      Attachee;                                      // 0x0208 (0x0004) [0x0000000000000000]               
	class AController*                                 AttacheeController;                            // 0x020C (0x0004) [0x0000000000000000]               
	float                                              DirectionalExplosionMinDot;                    // 0x0210 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     ExplosionDirection;                            // 0x0214 (0x000C) [0x0000000000002020] (CPF_Net | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameExplosionActor");
		}

		return uClassPointer;
	};

	class UCameraShake* ChooseCameraShake(const struct FVector& Epicenter, class APlayerController* PC);
	void SpawnCameraLensEffects();
	void DoExplosionCameraEffects();
	void DrawDebug();
	void DelayedExplosionDamage();
	void Explode(class UGameExplosion* NewExplosionTemplate, const struct FVector& optionalDirection);
	void SpawnExplosionFogVolume();
	void SpawnExplosionDecal();
	void SpawnExplosionParticleSystem(class UParticleSystem* Template);
	void UpdateExplosionTemplateWithPerMaterialFX(class UPhysicalMaterial* PhysMaterial);
	void SpecialCringeEffectsFor(class AActor* Victim, float VictimDist);
	void SpecialPawnEffectsFor(class AGamePawn* VictimPawn, float VictimDist);
	float GetEffectCheckRadius(bool bCauseDamage, bool bCauseFractureEffects, bool bCauseEffects);
	bool DoExplosionDamage(bool bCauseDamage, bool bCauseEffects);
	static float BoxDistanceToPoint(const struct FVector& Start, const struct FBox& BBox);
	bool IsBehindExplosion(class AActor* A);
	bool DoFullDamageToActor(class AActor* Victim);
	class UPhysicalMaterial* GetPhysicalMaterial();
	void eventPreBeginPlay();
};

// Class GameFramework.GamePawn
// 0x0004 (0x0450 - 0x0454)
class AGamePawn : public APawn
{
public:
	uint32_t                                           bLastHitWasHeadShot : 1;                       // 0x0450 (0x0004) [0x0000000000002020] [0x00000001] (CPF_Net | CPF_Transient)
	uint32_t                                           bRespondToExplosions : 1;                      // 0x0450 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GamePawn");
		}

		return uClassPointer;
	};

	void ReattachMeshWithoutBeingSeen();
	void ReattachMesh();
	void eventUpdateShadowSettings(bool bInWantShadow);
};

// Class GameFramework.DebugCameraController
// 0x0034 (0x0594 - 0x05C8)
class ADebugCameraController : public AGamePlayerController
{
public:
	class FName                                        PrimaryKey;                                    // 0x0594 (0x0008) [0x0000000000044000] (CPF_Config | CPF_GlobalConfig)
	class FName                                        SecondaryKey;                                  // 0x059C (0x0008) [0x0000000000044000] (CPF_Config | CPF_GlobalConfig)
	class FName                                        UnselectKey;                                   // 0x05A4 (0x0008) [0x0000000000044000] (CPF_Config | CPF_GlobalConfig)
	uint32_t                                           bShowSelectedInfo : 1;                         // 0x05AC (0x0004) [0x0000000000044000] [0x00000001] (CPF_Config | CPF_GlobalConfig)
	uint32_t                                           bDrawDebugText : 1;                            // 0x05AC (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsFrozenRendering : 1;                        // 0x05AC (0x0004) [0x0000000000000000] [0x00000004] 
	class UClass*                                      HUDClass;                                      // 0x05B0 (0x0004) [0x0000000000000000]               
	class APlayerController*                           OriginalControllerRef;                         // 0x05B4 (0x0004) [0x0000000000000000]               
	class UPlayer*                                     OriginalPlayer;                                // 0x05B8 (0x0004) [0x0000000000000000]               
	class UDrawFrustumComponent*                       DrawFrustum;                                   // 0x05BC (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AActor*                                      SelectedActor;                                 // 0x05C0 (0x0004) [0x0000000000000000]               
	class UPrimitiveComponent*                         SelectedComponent;                             // 0x05C4 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.DebugCameraController");
		}

		return uClassPointer;
	};

	class FString ConsoleCommand(const class FString& Command, bool optionalBWriteToLog);
	void ShowDebugSelectedInfo();
	bool NativeInputKey(int32_t ControllerId, const class FName& Key, EInputEvent Event, float optionalAmountDepressed, bool optionalBGamepad);
	void InitDebugInputSystem();
	void DisableDebugCamera();
	void NormalSpeed();
	void MoreSpeed();
	void SetFreezeRendering();
	void OnDeactivate(class APlayerController* PC);
	void OnActivate(class APlayerController* PC);
	void eventPostBeginPlay();
	void Unselect();
	void SecondarySelect(const struct FVector& HitLoc, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo);
	void PrimarySelect(const struct FVector& HitLoc, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo);
};

// Class GameFramework.GameTypes
// 0x0000 (0x003C - 0x003C)
class UGameTypes : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameTypes");
		}

		return uClassPointer;
	};

};

// Class GameFramework.MobileHUD
// 0x00EC (0x0450 - 0x053C)
class AMobileHUD : public AHUD
{
public:
	uint32_t                                           bShowGameHud : 1;                              // 0x0450 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           bShowMobileHud : 1;                            // 0x0450 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	uint32_t                                           bForceMobileHUD : 1;                           // 0x0450 (0x0004) [0x0000000000044000] [0x00000004] (CPF_Config | CPF_GlobalConfig)
	uint32_t                                           bShowMobileTilt : 1;                           // 0x0450 (0x0004) [0x0000000000004000] [0x00000008] (CPF_Config)
	uint32_t                                           bDebugTouches : 1;                             // 0x0450 (0x0004) [0x0000000000004000] [0x00000010] (CPF_Config)
	uint32_t                                           bDebugZones : 1;                               // 0x0450 (0x0004) [0x0000000000004000] [0x00000020] (CPF_Config)
	uint32_t                                           bDebugZonePresses : 1;                         // 0x0450 (0x0004) [0x0000000000004000] [0x00000040] (CPF_Config)
	uint32_t                                           bShowMotionDebug : 1;                          // 0x0450 (0x0004) [0x0000000000004000] [0x00000080] (CPF_Config)
	class UTexture2D*                                  JoystickBackground;                            // 0x0454 (0x0004) [0x0000000000000000]               
	struct FTextureUVs                                 JoystickBackgroundUVs;                         // 0x0458 (0x0010) [0x0000000000000000]               
	class UTexture2D*                                  JoystickHat;                                   // 0x0468 (0x0004) [0x0000000000000000]               
	struct FTextureUVs                                 JoystickHatUVs;                                // 0x046C (0x0010) [0x0000000000000000]               
	class UTexture2D*                                  ButtonImages[2];                               // 0x047C (0x0008) [0x0000000000000000]               
	struct FTextureUVs                                 ButtonUVs[2];                                  // 0x0484 (0x0020) [0x0000000000000000]               
	class UFont*                                       ButtonFont;                                    // 0x04A4 (0x0004) [0x0000000000000000]               
	struct FColor                                      ButtonCaptionColor;                            // 0x04A8 (0x0004) [0x0000000000000000]               
	class UTexture2D*                                  TrackballBackground;                           // 0x04AC (0x0004) [0x0000000000000000]               
	struct FTextureUVs                                 TrackballBackgroundUVs;                        // 0x04B0 (0x0010) [0x0000000000000000]               
	class UTexture2D*                                  TrackballTouchIndicator;                       // 0x04C0 (0x0004) [0x0000000000000000]               
	struct FTextureUVs                                 TrackballTouchIndicatorUVs;                    // 0x04C4 (0x0010) [0x0000000000000000]               
	class UTexture2D*                                  SliderImages[4];                               // 0x04D4 (0x0010) [0x0000000000000000]               
	struct FTextureUVs                                 SliderUVs[4];                                  // 0x04E4 (0x0040) [0x0000000000000000]               
	float                                              MobileTiltX;                                   // 0x0524 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MobileTiltY;                                   // 0x0528 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MobileTiltSize;                                // 0x052C (0x0004) [0x0000000000004000] (CPF_Config)  
	class TArray<class USeqEvent_HudRender*>           KismetRenderEvents;                            // 0x0530 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileHUD");
		}

		return uClassPointer;
	};

	void RenderKismetHud();
	void AddKismetRenderEvent(class USeqEvent_HudRender* NewEvent);
	void RefreshKismetLinks();
	void DrawMobileZone_Slider(class UMobileInputZone* Zone);
	void DrawMobileTilt(class UMobilePlayerInput* MobileInput);
	void DrawMobileZone_Trackball(class UMobileInputZone* Zone);
	void DrawMobileZone_Joystick(class UMobileInputZone* Zone);
	void DrawMobileZone_Button(class UMobileInputZone* Zone);
	void DrawInputZoneOverlays();
	void RenderMobileMenu();
	bool ShowMobileHud();
	void DrawMobileDebugString(float XPos, float YPos, const class FString& Str);
	void PostRender();
	void PostBeginPlay();
};

// Class GameFramework.MobileInputZone
// 0x01CC (0x003C - 0x0208)
class UMobileInputZone : public UObject
{
public:
	EZoneType                                          Type;                                          // 0x003C (0x0001) [0x0000000000004001] (CPF_Edit | CPF_Config)
	uint8_t                                            TouchpadIndex;                                 // 0x003D (0x0001) [0x0000000000000001] (CPF_Edit)    
	EZoneState                                         State;                                         // 0x003E (0x0001) [0x0000000000000000]               
	EZoneSlideType                                     SlideType;                                     // 0x003F (0x0001) [0x0000000000004001] (CPF_Edit | CPF_Config)
	class FString                                      Caption;                                       // 0x0040 (0x000C) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	class FName                                        InputKey;                                      // 0x004C (0x0008) [0x0000000000004001] (CPF_Edit | CPF_Config)
	class FName                                        HorizontalInputKey;                            // 0x0054 (0x0008) [0x0000000000004001] (CPF_Edit | CPF_Config)
	class FName                                        TapInputKey;                                   // 0x005C (0x0008) [0x0000000000004001] (CPF_Edit | CPF_Config)
	class FName                                        DoubleTapInputKey;                             // 0x0064 (0x0008) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              VertMultiplier;                                // 0x006C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              HorizMultiplier;                               // 0x0070 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              Acceleration;                                  // 0x0074 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              Smoothing;                                     // 0x0078 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              EscapeVelocityStrength;                        // 0x007C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	uint32_t                                           bScalePawnMovement : 1;                        // 0x0080 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
	uint32_t                                           bRelativeX : 1;                                // 0x0080 (0x0004) [0x0000000000004001] [0x00000002] (CPF_Edit | CPF_Config)
	uint32_t                                           bRelativeY : 1;                                // 0x0080 (0x0004) [0x0000000000004001] [0x00000004] (CPF_Edit | CPF_Config)
	uint32_t                                           bRelativeSizeX : 1;                            // 0x0080 (0x0004) [0x0000000000004001] [0x00000008] (CPF_Edit | CPF_Config)
	uint32_t                                           bRelativeSizeY : 1;                            // 0x0080 (0x0004) [0x0000000000004001] [0x00000010] (CPF_Edit | CPF_Config)
	uint32_t                                           bActiveSizeYFromX : 1;                         // 0x0080 (0x0004) [0x0000000000004001] [0x00000020] (CPF_Edit | CPF_Config)
	uint32_t                                           bSizeYFromSizeX : 1;                           // 0x0080 (0x0004) [0x0000000000004001] [0x00000040] (CPF_Edit | CPF_Config)
	uint32_t                                           bApplyGlobalScaleToActiveSizes : 1;            // 0x0080 (0x0004) [0x0000000000004001] [0x00000080] (CPF_Edit | CPF_Config)
	uint32_t                                           bCenterX : 1;                                  // 0x0080 (0x0004) [0x0000000000004001] [0x00000100] (CPF_Edit | CPF_Config)
	uint32_t                                           bCenterY : 1;                                  // 0x0080 (0x0004) [0x0000000000004001] [0x00000200] (CPF_Edit | CPF_Config)
	uint32_t                                           bIsInvisible : 1;                              // 0x0080 (0x0004) [0x0000000000004001] [0x00000400] (CPF_Edit | CPF_Config)
	uint32_t                                           bQuickDoubleTap : 1;                           // 0x0080 (0x0004) [0x0000000000004001] [0x00000800] (CPF_Edit | CPF_Config)
	uint32_t                                           bCenterOnEvent : 1;                            // 0x0080 (0x0004) [0x0000000000004001] [0x00001000] (CPF_Edit | CPF_Config)
	uint32_t                                           bSliderHasTrack : 1;                           // 0x0080 (0x0004) [0x0000000000004001] [0x00002000] (CPF_Edit | CPF_Config)
	uint32_t                                           bFloatingTiltZone : 1;                         // 0x0080 (0x0004) [0x0000000000004001] [0x00004000] (CPF_Edit | CPF_Config)
	uint32_t                                           bUseGentleTransitions : 1;                     // 0x0080 (0x0004) [0x0000000000004001] [0x00008000] (CPF_Edit | CPF_Config)
	uint32_t                                           bAllowFirstDeltaForTrackballZone : 1;          // 0x0080 (0x0004) [0x0000000000004001] [0x00010000] (CPF_Edit | CPF_Config)
	uint32_t                                           bRenderGuides : 1;                             // 0x0080 (0x0004) [0x0000000000004001] [0x00020000] (CPF_Edit | CPF_Config)
	uint32_t                                           bIsDoubleTapAndHold : 1;                       // 0x0080 (0x0004) [0x0000000000000000] [0x00040000] 
	float                                              X;                                             // 0x0084 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              Y;                                             // 0x0088 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              SizeX;                                         // 0x008C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              SizeY;                                         // 0x0090 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              ActiveSizeX;                                   // 0x0094 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              ActiveSizeY;                                   // 0x0098 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              InitialX;                                      // 0x009C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              InitialY;                                      // 0x00A0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              InitialSizeX;                                  // 0x00A4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              InitialSizeY;                                  // 0x00A8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              InitialActiveSizeX;                            // 0x00AC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              InitialActiveSizeY;                            // 0x00B0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AuthoredGlobalScale;                           // 0x00B4 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              Border;                                        // 0x00B8 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              ResetCenterAfterInactivityTime;                // 0x00BC (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              TapDistanceConstraint;                         // 0x00C0 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              ActivateTime;                                  // 0x00C4 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              DeactivateTime;                                // 0x00C8 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	struct FColor                                      RenderColor;                                   // 0x00CC (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              InactiveAlpha;                                 // 0x00D0 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              CaptionXAdjustment;                            // 0x00D4 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              CaptionYAdjustment;                            // 0x00D8 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	class UTexture2D*                                  OverrideTexture1;                              // 0x00DC (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      OverrideTexture1Name;                          // 0x00E0 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FTextureUVs                                 OverrideUVs1;                                  // 0x00EC (0x0010) [0x0000000000004001] (CPF_Edit | CPF_Config)
	class UTexture2D*                                  OverrideTexture2;                              // 0x00FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      OverrideTexture2Name;                          // 0x0100 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FTextureUVs                                 OverrideUVs2;                                  // 0x010C (0x0010) [0x0000000000004001] (CPF_Edit | CPF_Config)
	struct FVector2D                                   InitialLocation;                               // 0x011C (0x0008) [0x0000000000000000]               
	struct FVector2D                                   CurrentLocation;                               // 0x0124 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   CurrentCenter;                                 // 0x012C (0x0008) [0x0000000000000000]               
	struct FVector2D                                   InitialCenter;                                 // 0x0134 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   PreviousLocations[6];                          // 0x013C (0x0030) [0x0000000000000000]               
	float                                              PreviousMoveDeltaTimes[6];                     // 0x016C (0x0018) [0x0000000000000000]               
	int32_t                                            PreviousLocationCount;                         // 0x0184 (0x0004) [0x0000000000000000]               
	float                                              LastTouchTime;                                 // 0x0188 (0x0004) [0x0000000000000000]               
	float                                              TimeSinceLastTapRepeat;                        // 0x018C (0x0004) [0x0000000000000000]               
	float                                              AnimatingFadeOpacity;                          // 0x0190 (0x0004) [0x0000000000000000]               
	class UMobilePlayerInput*                          InputOwner;                                    // 0x0194 (0x0004) [0x0000000000000000]               
	float                                              TransitionTime;                                // 0x0198 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   EscapeVelocity;                                // 0x019C (0x0008) [0x0000000000000000]               
	class TArray<class USeqEvent_MobileZoneBase*>      MobileSeqEventHandlers;                        // 0x01A4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector2D                                   LastAxisValues;                                // 0x01B0 (0x0008) [0x0000000000000000]               
	float                                              TotalActiveTime;                               // 0x01B8 (0x0004) [0x0000000000000000]               
	float                                              LastWentActiveTime;                            // 0x01BC (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             __OnProcessInputDelegate__Delegate;            // 0x01C0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTapDelegate__Delegate;                     // 0x01CC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDoubleTapDelegate__Delegate;               // 0x01D8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnProcessSlide__Delegate;                    // 0x01E4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPreDrawZone__Delegate;                     // 0x01F0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPostDrawZone__Delegate;                    // 0x01FC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileInputZone");
		}

		return uClassPointer;
	};

	void AddKismetEventHandler(class USeqEvent_MobileZoneBase* NewHandler);
	void OnPostDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas);
	bool OnPreDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas);
	bool OnProcessSlide(class UMobileInputZone* Zone, ETouchType EventType, int32_t SlideValue, const struct FVector2D& ViewportSize);
	bool OnDoubleTapDelegate(class UMobileInputZone* Zone, ETouchType EventType, const struct FVector2D& TouchLocation);
	bool OnTapDelegate(class UMobileInputZone* Zone, ETouchType EventType, const struct FVector2D& TouchLocation);
	bool OnProcessInputDelegate(class UMobileInputZone* Zone, float DeltaTime, int32_t Handle, ETouchType EventType, const struct FVector2D& TouchLocation);
	void DeactivateZone();
	void ActivateZone();
};

// Class GameFramework.MobileMenuObject
// 0x0068 (0x003C - 0x00A4)
class UMobileMenuObject : public UObject
{
public:
	uint32_t                                           bHasBeenInitialized : 1;                       // 0x003C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bRelativeLeft : 1;                             // 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bRelativeTop : 1;                              // 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bRelativeWidth : 1;                            // 0x003C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bRelativeHeight : 1;                           // 0x003C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bApplyGlobalScaleLeft : 1;                     // 0x003C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bApplyGlobalScaleTop : 1;                      // 0x003C (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bApplyGlobalScaleWidth : 1;                    // 0x003C (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bApplyGlobalScaleHeight : 1;                   // 0x003C (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bHeightRelativeToWidth : 1;                    // 0x003C (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bXOffsetIsActual : 1;                          // 0x003C (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bYOffsetIsActual : 1;                          // 0x003C (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bIsActive : 1;                                 // 0x003C (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bIsHidden : 1;                                 // 0x003C (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bIsTouched : 1;                                // 0x003C (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bIsHighlighted : 1;                            // 0x003C (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bTellSceneBeforeRendering : 1;                 // 0x003C (0x0004) [0x0000000000000000] [0x00010000] 
	float                                              Left;                                          // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              Top;                                           // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              Width;                                         // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              Height;                                        // 0x004C (0x0004) [0x0000000000000000]               
	float                                              InitialLeft;                                   // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              InitialTop;                                    // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              InitialWidth;                                  // 0x0058 (0x0004) [0x0000000000000000]               
	float                                              InitialHeight;                                 // 0x005C (0x0004) [0x0000000000000000]               
	float                                              AuthoredGlobalScale;                           // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TopLeeway;                                     // 0x0064 (0x0004) [0x0000000000000000]               
	float                                              BottomLeeway;                                  // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              LeftLeeway;                                    // 0x006C (0x0004) [0x0000000000000000]               
	float                                              RightLeeway;                                   // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              XOffset;                                       // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              YOffset;                                       // 0x0078 (0x0004) [0x0000000000000000]               
	class FString                                      Tag;                                           // 0x007C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UMobilePlayerInput*                          InputOwner;                                    // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              Opacity;                                       // 0x008C (0x0004) [0x0000000000000000]               
	class UMobileMenuScene*                            OwnerScene;                                    // 0x0090 (0x0004) [0x0000000000000000]               
	class FString                                      RelativeToTag;                                 // 0x0094 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UMobileMenuObject*                           RelativeTo;                                    // 0x00A0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuObject");
		}

		return uClassPointer;
	};

	void RenderObject(class UCanvas* Canvas, float DeltaTime);
	void SetCanvasPos(class UCanvas* Canvas, float optionalOffsetX, float optionalOffsetY);
	void InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization);
	void eventGetRealPosition(float& outPosX, float& outPosY);
	bool eventOnTouch(ETouchType EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime);
};

// Class GameFramework.MobileMenuImage
// 0x002C (0x00A4 - 0x00D0)
class UMobileMenuImage : public UMobileMenuObject
{
public:
	class UTexture2D*                                  Image;                                         // 0x00A4 (0x0004) [0x0000000000000000]               
	EMenuImageDrawStyle                                ImageDrawStyle;                                // 0x00A8 (0x0001) [0x0000000000000000]               
	struct FUVCoords                                   ImageUVs;                                      // 0x00AC (0x0014) [0x0000000000000000]               
	struct FLinearColor                                ImageColor;                                    // 0x00C0 (0x0010) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuImage");
		}

		return uClassPointer;
	};

	void RenderObject(class UCanvas* Canvas, float DeltaTime);
};

// Class GameFramework.MobileMenuScene
// 0x0058 (0x003C - 0x0094)
class UMobileMenuScene : public UObject
{
public:
	class FString                                      MenuName;                                      // 0x003C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UMobileMenuObject*>             MenuObjects;                                   // 0x0048 (0x000C) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class UFont*                                       SceneCaptionFont;                              // 0x0054 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMobilePlayerInput*                          InputOwner;                                    // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bSceneDoesNotRequireInput : 1;                 // 0x005C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bRelativeLeft : 1;                             // 0x005C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bRelativeTop : 1;                              // 0x005C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bRelativeWidth : 1;                            // 0x005C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bRelativeHeight : 1;                           // 0x005C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bApplyGlobalScaleLeft : 1;                     // 0x005C (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bApplyGlobalScaleTop : 1;                      // 0x005C (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bApplyGlobalScaleWidth : 1;                    // 0x005C (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bApplyGlobalScaleHeight : 1;                   // 0x005C (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint8_t                                            TouchpadIndex;                                 // 0x0060 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              Left;                                          // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Top;                                           // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Width;                                         // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Height;                                        // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InitialLeft;                                   // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              InitialTop;                                    // 0x0078 (0x0004) [0x0000000000000000]               
	float                                              InitialWidth;                                  // 0x007C (0x0004) [0x0000000000000000]               
	float                                              InitialHeight;                                 // 0x0080 (0x0004) [0x0000000000000000]               
	float                                              AuthoredGlobalScale;                           // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Opacity;                                       // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   UITouchSound;                                  // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   UIUnTouchSound;                                // 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuScene");
		}

		return uClassPointer;
	};

	bool MobileMenuCommand(const class FString& Command);
	class UMobileMenuObject* FindMenuObject(const class FString& Tag);
	void CleanUpScene();
	void Closed();
	bool Closing();
	void MadeTopMenu();
	void Opened(const class FString& Mode);
	bool eventOnSceneTouch(ETouchType EventType, float TouchX, float TouchY, bool bInside);
	void eventOnTouch(class UMobileMenuObject* Sender, ETouchType EventType, float TouchX, float TouchY);
	void PreRenderMenuObject(class UMobileMenuObject* MenuObject, class UCanvas* Canvas, float RenderDelta);
	void RenderScene(class UCanvas* Canvas, float RenderDelta);
	class UFont* GetSceneFont();
	void eventInitMenuScene(class UMobilePlayerInput* PlayerInput, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization);
	static float GetGlobalScaleY();
	static float GetGlobalScaleX();
};

// Class GameFramework.MobilePlayerInput
// 0x0238 (0x0260 - 0x0498)
class UMobilePlayerInput : public UPlayerInput
{
public:
	struct FTouchData                                  Touches[5];                                    // 0x0260 (0x0168) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UMobileMenuObject*                           InteractiveObject;                             // 0x03C8 (0x0004) [0x0000000000000000]               
	struct FDouble                                     InteractiveObjectLastTime;                     // 0x03CC (0x0008) [0x0000000000000000]               
	class TArray<struct FMobileInputGroup>             MobileInputGroups;                             // 0x03D4 (0x000C) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	int32_t                                            CurrentMobileGroup;                            // 0x03E0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UMobileInputZone*>              MobileInputZones;                              // 0x03E4 (0x000C) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<struct FMobileInputZoneClassMap>      MobileInputZoneClasses;                        // 0x03F0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              MobilePitch;                                   // 0x03FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MobilePitchCenter;                             // 0x0400 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MobilePitchMultiplier;                         // 0x0404 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MobileYaw;                                     // 0x0408 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MobileYawCenter;                               // 0x040C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MobileYawMultiplier;                           // 0x0410 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MobilePitchDeadzoneSize;                       // 0x0414 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              MobileYawDeadzoneSize;                         // 0x0418 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              MobileDoubleTapTime;                           // 0x041C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              MobileMinHoldForTap;                           // 0x0420 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              MobileTapRepeatTime;                           // 0x0424 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	uint32_t                                           bAllowTouchesInCinematic : 1;                  // 0x0428 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDisableTouchInput : 1;                        // 0x0428 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bAbsoluteTouchLocations : 1;                   // 0x0428 (0x0004) [0x0000000000004001] [0x00000004] (CPF_Edit | CPF_Config)
	uint32_t                                           bFakeMobileTouches : 1;                        // 0x0428 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bDisableSceneRender : 1;                       // 0x0428 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	float                                              ZoneTimeout;                                   // 0x042C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	class TArray<class UMobileMenuScene*>              MobileMenuStack;                               // 0x0430 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      NativeDebugString;                             // 0x043C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MobileInactiveTime;                            // 0x0448 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class USeqEvent_MobileBase*>          MobileSeqEventHandlers;                        // 0x044C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class USeqEvent_MobileRawInput*>      MobileRawInputSeqEventHandlers;                // 0x0458 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector2D                                   MobileViewportOffset;                          // 0x0464 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   MobileViewportSize;                            // 0x046C (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __OnTouchNotHandledInMenu__Delegate;           // 0x0474 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPreviewTouch__Delegate;                    // 0x0480 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnInputTouch__Delegate;                      // 0x048C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobilePlayerInput");
		}

		return uClassPointer;
	};

	class UMobileMenuScene* OpenMobileMenuMode(const class FString& MenuClassName, const class FString& Mode);
	class UMobileMenuScene* OpenMobileMenu(const class FString& MenuClassName);
	void MobileMenuCommand(const class FString& MenuCommand);
	void SceneRenderToggle();
	void PreClientTravel(const class FString& PendingURL, ETravelType TravelType, bool bIsSeamlessTravel);
	void eventRenderMenus(class UCanvas* Canvas, float RenderDelta);
	void eventCloseAllMenus();
	void eventCloseMenuScene(class UMobileMenuScene* SceneToClose);
	class UMobileMenuScene* eventOpenMenuScene(class UClass* SceneClass, const class FString& optionalMode);
	void SetMobileInputConfig(const class FString& GroupName);
	void ActivateInputGroup(const class FString& GroupName);
	class TArray<class UMobileInputZone*> GetCurrentZones();
	bool HasZones();
	class UMobileInputZone* FindorAddZone(const class FString& ZoneName);
	class UMobileInputZone* FindZone(const class FString& ZoneName);
	void AddKismetRawInputEventHandler(class USeqEvent_MobileRawInput* NewHandler);
	void AddKismetEventHandler(class USeqEvent_MobileBase* NewHandler);
	void eventRefreshKismetLinks();
	void SwapZoneOwners();
	void InitializeInputZones();
	void InitTouchSystem();
	void ClientInitInputSystem();
	void InitInputSystem();
	bool ProcessWorldTouch(class UMobileInputZone* Zone, ETouchType EventType, const struct FVector2D& TouchLocation);
	void SendInputAxis(const class FName& Key, float Delta, float DeltaTime);
	void SendInputKey(const class FName& Key, EInputEvent Event, float AmountDepressed);
	void ConditionalUpdateInputZones(int32_t NewViewportX, int32_t NewViewportY, int32_t NewViewportSizeX, int32_t NewViewportSizeY);
	void NativeInitializeInputZones(bool bIsFirstInitialize);
	void NativeInitializeInputSystem();
	void OnInputTouch(int32_t Handle, ETouchType Type, const struct FVector2D& TouchLocation, float DeviceTimestamp, int32_t TouchpadIndex);
	bool OnPreviewTouch(float X, float Y, int32_t TouchpadIndex);
	void OnTouchNotHandledInMenu();
	void eventPlayerInput(float DeltaTime);
	void CancelMobileInput();
	void ProcessMobileInput(float DeltaTime);
};

// Class GameFramework.NavMeshGoal_OutOfViewFrom
// 0x0014 (0x0054 - 0x0068)
class UNavMeshGoal_OutOfViewFrom : public UNavMeshPathGoalEvaluator
{
public:
	struct FPointer                                    GoalPoly;                                      // 0x0054 (0x0004) [0x0000000000001000] (CPF_Native)  
	struct FVector                                     OutOfViewLocation;                             // 0x0058 (0x000C) [0x0000000000000000]               
	uint32_t                                           bShowDebug : 1;                                // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.NavMeshGoal_OutOfViewFrom");
		}

		return uClassPointer;
	};

	void Recycle();
	static bool MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, const struct FVector& InOutOfViewLocation);
	void RecycleNative();
};

// Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations
// 0x0028 (0x0050 - 0x0078)
class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations : public UNavMeshPathConstraint
{
public:
	struct FVector                                     Location;                                      // 0x0050 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     Rotation;                                      // 0x005C (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              DistanceToCheck;                               // 0x0068 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FVector>                       LocationsToCheck;                              // 0x006C (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations");
		}

		return uClassPointer;
	};

	void Recycle();
	static bool BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, const struct FVector& InLocation, const struct FRotator& InRotation, float InDistanceToCheck, const class TArray<struct FVector>& InLocationsToCheck);
};

// Class GameFramework.SecondaryViewportClient
// 0x0000 (0x0040 - 0x0040)
class USecondaryViewportClient : public UScriptViewportClient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SecondaryViewportClient");
		}

		return uClassPointer;
	};

	void eventPostRender(class UCanvas* Canvas);
};

// Class GameFramework.MobileSecondaryViewportClient
// 0x0000 (0x0040 - 0x0040)
class UMobileSecondaryViewportClient : public USecondaryViewportClient
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileSecondaryViewportClient");
		}

		return uClassPointer;
	};

	void eventPostRender(class UCanvas* Canvas);
};

// Class GameFramework.SeqAct_ControlGameMovie
// 0x0014 (0x0110 - 0x0124)
class USeqAct_ControlGameMovie : public USeqAct_Latent
{
public:
	class FString                                      MovieName;                                     // 0x0110 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            StartOfRenderingMovieFrame;                    // 0x011C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            EndOfRenderingMovieFrame;                      // 0x0120 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_ControlGameMovie");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqAct_Deproject
// 0x0028 (0x00FC - 0x0124)
class USeqAct_Deproject : public USequenceAction
{
public:
	float                                              ScreenX;                                       // 0x00FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ScreenY;                                       // 0x0100 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TraceDistance;                                 // 0x0104 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UObject*                                     HitObject;                                     // 0x0108 (0x0004) [0x0000000000000000]               
	struct FVector                                     HitLocation;                                   // 0x010C (0x000C) [0x0000000000000000]               
	struct FVector                                     HitNormal;                                     // 0x0118 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_Deproject");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle
// 0x0040 (0x00FC - 0x013C)
class USeqAct_GameCrowdPopulationManagerToggle : public USequenceAction
{
public:
	float                                              WarmupPopulationPct;                           // 0x00FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UGameCrowd_ListOfAgents*                     CrowdAgentList;                                // 0x0100 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bClearOldArchetypes : 1;                       // 0x0104 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bEnableCrowdLightEnvironment : 1;              // 0x0104 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bCastShadows : 1;                              // 0x0104 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bFillPotentialSpawnPoints : 1;                 // 0x0104 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bForceObstacleChecking : 1;                    // 0x0104 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bForceNavMeshPathing : 1;                      // 0x0104 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bIndividualSpawner : 1;                        // 0x0104 (0x0004) [0x0000000000000000] [0x00000040] 
	int32_t                                            MaxAgents;                                     // 0x0108 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpawnRate;                                     // 0x010C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FLightingChannelContainer                   AgentLightingChannel;                          // 0x0110 (0x0004) [0x0000000000000000]               
	float                                              MaxSpawnDist;                                  // 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinBehindSpawnDist;                            // 0x0118 (0x0004) [0x0000000000000000]               
	class TArray<class AGameCrowdDestination*>         PotentialSpawnPoints;                          // 0x011C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              AgentWarmupTime;                               // 0x0128 (0x0004) [0x0000000000000000]               
	int32_t                                            NumAgentsToTickPerFrame;                       // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class AGameCrowdAgent*>               LastSpawnedList;                               // 0x0130 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle");
		}

		return uClassPointer;
	};

	void AgentDestroyed(class AGameCrowdAgent* Agent);
	float GetMaxSpawnDist();
	void eventFillCrowdSpawnInfoItem(class AGameCrowdPopulationManager* PopMgr, struct FCrowdSpawnInfoItem& outOut_Item);
	static int32_t eventGetObjClassVersion();
};

// Class GameFramework.SeqAct_GameCrowdSpawner
// 0x0000 (0x013C - 0x013C)
class USeqAct_GameCrowdSpawner : public USeqAct_GameCrowdPopulationManagerToggle
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_GameCrowdSpawner");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class GameFramework.SeqAct_MobileAddInputZones
// 0x000C (0x00FC - 0x0108)
class USeqAct_MobileAddInputZones : public USequenceAction
{
public:
	class FName                                        ZoneName;                                      // 0x00FC (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMobileInputZone*                            NewZone;                                       // 0x0104 (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_MobileAddInputZones");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqAct_MobileClearInputZones
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_MobileClearInputZones : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_MobileClearInputZones");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqAct_MobileRemoveInputZone
// 0x000C (0x00FC - 0x0108)
class USeqAct_MobileRemoveInputZone : public USequenceAction
{
public:
	class FString                                      ZoneName;                                      // 0x00FC (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_MobileRemoveInputZone");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqAct_MobileSaveLoadValue
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_MobileSaveLoadValue : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_MobileSaveLoadValue");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class GameFramework.SeqAct_ModifyProperty
// 0x000C (0x00FC - 0x0108)
class USeqAct_ModifyProperty : public USequenceAction
{
public:
	class TArray<struct FPropertyInfo>                 Properties;                                    // 0x00FC (0x000C) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_ModifyProperty");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqAct_PlayAgentAnimation
// 0x0024 (0x0110 - 0x0134)
class USeqAct_PlayAgentAnimation : public USeqAct_Latent
{
public:
	class TArray<class FName>                          AnimationList;                                 // 0x0110 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              BlendInTime;                                   // 0x011C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x0120 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseRootMotion : 1;                            // 0x0124 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bFaceActionTargetFirst : 1;                    // 0x0124 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bLooping : 1;                                  // 0x0124 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bBlendBetweenAnims : 1;                        // 0x0124 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	int32_t                                            LoopIndex;                                     // 0x0128 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LoopTime;                                      // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      ActionTarget;                                  // 0x0130 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_PlayAgentAnimation");
		}

		return uClassPointer;
	};

	void SetCurrentAnimationActionFor(class AGameCrowdAgentSkeletal* Agent);
	static int32_t eventGetObjClassVersion();
};

// Class GameFramework.SeqEvent_CrowdAgentReachedDestination
// 0x0000 (0x0114 - 0x0114)
class USeqEvent_CrowdAgentReachedDestination : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_CrowdAgentReachedDestination");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqEvent_HudRender
// 0x0014 (0x0114 - 0x0128)
class USeqEvent_HudRender : public USequenceEvent
{
public:
	class TArray<class UObject*>                       Targets;                                       // 0x0114 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bIsActive : 1;                                 // 0x0120 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              AuthoredGlobalScale;                           // 0x0124 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_HudRender");
		}

		return uClassPointer;
	};

	void Render(class UCanvas* TargetCanvas, class AHUD* TargetHud);
	void eventRegisterEvent();
};

// Class GameFramework.SeqEvent_MobileBase
// 0x0000 (0x0114 - 0x0114)
class USeqEvent_MobileBase : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_MobileBase");
		}

		return uClassPointer;
	};

	void eventAddToMobileInput(class UMobilePlayerInput* MPI);
	void eventRegisterEvent();
};

// Class GameFramework.SeqEvent_MobileMotion
// 0x0018 (0x0114 - 0x012C)
class USeqEvent_MobileMotion : public USeqEvent_MobileBase
{
public:
	float                                              Roll;                                          // 0x0114 (0x0004) [0x0000000000000000]               
	float                                              Pitch;                                         // 0x0118 (0x0004) [0x0000000000000000]               
	float                                              Yaw;                                           // 0x011C (0x0004) [0x0000000000000000]               
	float                                              DeltaRoll;                                     // 0x0120 (0x0004) [0x0000000000000000]               
	float                                              DeltaPitch;                                    // 0x0124 (0x0004) [0x0000000000000000]               
	float                                              DeltaYaw;                                      // 0x0128 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_MobileMotion");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class GameFramework.SeqEvent_MobileZoneBase
// 0x000C (0x0114 - 0x0120)
class USeqEvent_MobileZoneBase : public USeqEvent_MobileBase
{
public:
	class FString                                      TargetZoneName;                                // 0x0114 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_MobileZoneBase");
		}

		return uClassPointer;
	};

	void eventAddToMobileInput(class UMobilePlayerInput* MPI);
};

// Class GameFramework.SeqEvent_MobileButton
// 0x0004 (0x0120 - 0x0124)
class USeqEvent_MobileButton : public USeqEvent_MobileZoneBase
{
public:
	uint32_t                                           bWasActiveLastFrame : 1;                       // 0x0120 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSendPressedOnlyOnTouchDown : 1;               // 0x0120 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bSendPressedOnlyOnTouchUp : 1;                 // 0x0120 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_MobileButton");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqEvent_MobileInput
// 0x0018 (0x0120 - 0x0138)
class USeqEvent_MobileInput : public USeqEvent_MobileZoneBase
{
public:
	float                                              XAxisValue;                                    // 0x0120 (0x0004) [0x0000000000000000]               
	float                                              YAxisValue;                                    // 0x0124 (0x0004) [0x0000000000000000]               
	float                                              CenterX;                                       // 0x0128 (0x0004) [0x0000000000000000]               
	float                                              CenterY;                                       // 0x012C (0x0004) [0x0000000000000000]               
	float                                              CurrentX;                                      // 0x0130 (0x0004) [0x0000000000000000]               
	float                                              CurrentY;                                      // 0x0134 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_MobileInput");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqEvent_MobileLook
// 0x0014 (0x0120 - 0x0134)
class USeqEvent_MobileLook : public USeqEvent_MobileZoneBase
{
public:
	float                                              Yaw;                                           // 0x0120 (0x0004) [0x0000000000000000]               
	float                                              StickStrength;                                 // 0x0124 (0x0004) [0x0000000000000000]               
	struct FVector                                     RotationVector;                                // 0x0128 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_MobileLook");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqEvent_MobileRawInput
// 0x0014 (0x0114 - 0x0128)
class USeqEvent_MobileRawInput : public USequenceEvent
{
public:
	int32_t                                            TouchIndex;                                    // 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TouchpadIndex;                                 // 0x0118 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TouchLocationX;                                // 0x011C (0x0004) [0x0000000000000000]               
	float                                              TouchLocationY;                                // 0x0120 (0x0004) [0x0000000000000000]               
	float                                              TimeStamp;                                     // 0x0124 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_MobileRawInput");
		}

		return uClassPointer;
	};

	void eventRegisterEvent();
};

// Class GameFramework.SeqEvent_MobileObjectPicker
// 0x0030 (0x0128 - 0x0158)
class USeqEvent_MobileObjectPicker : public USeqEvent_MobileRawInput
{
public:
	float                                              TraceDistance;                                 // 0x0128 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bCheckonTouch : 1;                             // 0x012C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FVector                                     FinalTouchLocation;                            // 0x0130 (0x000C) [0x0000000000000000]               
	struct FVector                                     FinalTouchNormal;                              // 0x013C (0x000C) [0x0000000000000000]               
	class UObject*                                     FinalTouchObject;                              // 0x0148 (0x0004) [0x0000000000000000]               
	class TArray<class UObject*>                       Targets;                                       // 0x014C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_MobileObjectPicker");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqEvent_MobileSwipe
// 0x0020 (0x0128 - 0x0148)
class USeqEvent_MobileSwipe : public USeqEvent_MobileRawInput
{
public:
	float                                              Tolerance;                                     // 0x0128 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinDistance;                                   // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   InitialTouch;                                  // 0x0130 (0x0008) [0x0000000000000000]               
	class TArray<class AActor*>                        TouchedActors;                                 // 0x0138 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              TraceDistance;                                 // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_MobileSwipe");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameSkelCtrl_Recoil
// 0x007C (0x00BC - 0x0138)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	uint32_t                                           bBoneSpaceRecoil : 1;                          // 0x00BC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPlayRecoil : 1;                               // 0x00BC (0x0004) [0x0000000000002001] [0x00000002] (CPF_Edit | CPF_Transient)
	uint32_t                                           bOldPlayRecoil : 1;                            // 0x00BC (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bApplyControl : 1;                             // 0x00BC (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	struct FRecoilDef                                  Recoil;                                        // 0x00C0 (0x0070) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   Aim;                                           // 0x0130 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameSkelCtrl_Recoil");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameCameraBase
// 0x0008 (0x003C - 0x0044)
class UGameCameraBase : public UObject
{
public:
	class AGamePlayerCamera*                           PlayerCamera;                                  // 0x003C (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bResetCameraInterpolation : 1;                 // 0x0040 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCameraBase");
		}

		return uClassPointer;
	};

	void eventModifyPostProcessSettings(struct FPostProcessSettings& outPP);
	void Init();
	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& outOut_ViewRotation, struct FRotator& outOut_DeltaRot);
	void UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& outOutVT);
	void ResetInterpolation();
	void OnBecomeInActive(class UGameCameraBase* NewCamera);
	void OnBecomeActive(class UGameCameraBase* OldCamera);
};

// Class GameFramework.GameThirdPersonCamera
// 0x0154 (0x0044 - 0x0198)
class UGameThirdPersonCamera : public UGameCameraBase
{
public:
	float                                              WorstLocBlockedPct;                            // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              WorstLocPenetrationExtentScale;                // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PenetrationBlendOutTime;                       // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PenetrationBlendInTime;                        // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PenetrationBlockedPct;                         // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              PenetrationExtentScale;                        // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LastActualOriginOffset;                        // 0x005C (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LastActualCameraOrigin;                        // 0x0068 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    LastActualCameraOriginRot;                     // 0x0074 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              OriginOffsetInterpSpeed;                       // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LastViewOffset;                                // 0x0084 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              LastCamFOV;                                    // 0x0090 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LastIdealCameraOrigin;                         // 0x0094 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    LastIdealCameraOriginRot;                      // 0x00A0 (0x000C) [0x0000000000002000] (CPF_Transient)
	class UGameThirdPersonCameraMode*                  ThirdPersonCamDefault;                         // 0x00AC (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	class UClass*                                      ThirdPersonCamDefaultClass;                    // 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UGameThirdPersonCameraMode*                  CurrentCamMode;                                // 0x00B4 (0x0004) [0x0000000004002001] (CPF_Edit | CPF_Transient | CPF_EditInline)
	float                                              LastHeightAdjustment;                          // 0x00B8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastPitchAdjustment;                           // 0x00BC (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastYawAdjustment;                             // 0x00C0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LeftoverPitchAdjustment;                       // 0x00C4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              Focus_BackOffStrength;                         // 0x00C8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Focus_StepHeightAdjustment;                    // 0x00CC (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Focus_MaxTries;                                // 0x00D0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Focus_FastAdjustKickInTime;                    // 0x00D4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastFocusChangeTime;                           // 0x00D8 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     ActualFocusPointWorldLoc;                      // 0x00DC (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LastFocusPointLoc;                             // 0x00E8 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FCamFocusPointParams                        FocusPoint;                                    // 0x00F4 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bFocusPointSet : 1;                            // 0x0128 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFocusPointSuccessful : 1;                     // 0x0128 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bDoingACameraTurn : 1;                         // 0x0128 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bTurnAlignTargetWhenFinished : 1;              // 0x0128 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bDrawDebug : 1;                                // 0x0128 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bDoingDirectLook : 1;                          // 0x0128 (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	uint32_t                                           bDebugChangedCameraMode : 1;                   // 0x0128 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bDoSeamlessPivotTransition : 1;                // 0x0128 (0x0004) [0x0000000000002000] [0x00000080] (CPF_Transient)
	float                                              TurnCurTime;                                   // 0x012C (0x0004) [0x0000000000000000]               
	int32_t                                            TurnStartAngle;                                // 0x0130 (0x0004) [0x0000000000000000]               
	int32_t                                            TurnEndAngle;                                  // 0x0134 (0x0004) [0x0000000000000000]               
	float                                              TurnTotalTime;                                 // 0x0138 (0x0004) [0x0000000000000000]               
	float                                              TurnDelay;                                     // 0x013C (0x0004) [0x0000000000000000]               
	int32_t                                            LastPostCamTurnYaw;                            // 0x0140 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            DirectLookYaw;                                 // 0x0144 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              DirectLookInterpSpeed;                         // 0x0148 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WorstLocInterpSpeed;                           // 0x014C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LastWorstLocationLocal;                        // 0x0150 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LastWorstLocation;                             // 0x015C (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LastPreModifierCameraLoc;                      // 0x0168 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    LastPreModifierCameraRot;                      // 0x0174 (0x000C) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FPenetrationAvoidanceFeeler>   PenetrationAvoidanceFeelers;                   // 0x0180 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector                                     LastOffsetAdjustment;                          // 0x018C (0x000C) [0x0000000000002000] (CPF_Transient | CPF_ProtectedWrite)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameThirdPersonCamera");
		}

		return uClassPointer;
	};

	void ResetInterpolation();
	void eventModifyPostProcessSettings(struct FPostProcessSettings& outPP);
	void OnBecomeActive(class UGameCameraBase* OldCamera);
	void ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& outOut_ViewRotation, struct FRotator& outOut_DeltaRot);
	void UpdateCameraMode(class APawn* P);
	class UGameThirdPersonCameraMode* FindBestCameraMode(class APawn* P);
	void AdjustFocusPointInterpolation(const struct FRotator& Delta);
	struct FVector GetActualFocusLocation();
	void eventUpdateFocusPoint(class APawn* P);
	void ClearFocusPoint(bool optionalBLeaveCameraRotation);
	class AActor* GetFocusActor();
	void SetFocusOnActor(class AActor* FocusActor, const class FName& FocusBoneName, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float optionalCameraFOV, bool optionalBAlwaysFocus, bool optionalBAdjustCamera, bool optionalBIgnoreTrace, float optionalFocusPitchOffsetDeg);
	void SetFocusOnLoc(const struct FVector& FocusWorldLoc, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float optionalCameraFOV, bool optionalBAlwaysFocus, bool optionalBAdjustCamera, bool optionalBIgnoreTrace, float optionalFocusPitchOffsetDeg);
	void AdjustTurn(int32_t AngleOffset);
	void EndTurn();
	void BeginTurn(int32_t StartAngle, int32_t EndAngle, float TimeSec, float optionalDelaySec, bool optionalBAlignTargetWhenFinished);
	void PlayerUpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& outOutVT);
	void UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& outOutVT);
	float eventGetDesiredFOV(class APawn* ViewedPawn);
	void Init();
	void Reset();
	class UGameThirdPersonCameraMode* CreateCameraMode(class UClass* ModeClass);
};

// Class GameFramework.GamePlayerCamera
// 0x0074 (0x04AC - 0x0520)
class AGamePlayerCamera : public ACamera
{
public:
	class UGameCameraBase*                             ThirdPersonCam;                                // 0x04AC (0x0004) [0x0000000004002001] (CPF_Edit | CPF_Transient | CPF_EditInline)
	class UClass*                                      ThirdPersonCameraClass;                        // 0x04B0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UGameCameraBase*                             FixedCam;                                      // 0x04B4 (0x0004) [0x0000000004002001] (CPF_Edit | CPF_Transient | CPF_EditInline)
	class UClass*                                      FixedCameraClass;                              // 0x04B8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UGameCameraBase*                             CurrentCamera;                                 // 0x04BC (0x0004) [0x0000000004002001] (CPF_Edit | CPF_Transient | CPF_EditInline)
	uint32_t                                           bUseForcedCamFOV : 1;                          // 0x04C0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bInterpolateCamChanges : 1;                    // 0x04C0 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bResetInterp : 1;                              // 0x04C0 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	float                                              ForcedCamFOV;                                  // 0x04C4 (0x0004) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      LastViewTarget;                                // 0x04C8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              SplitScreenShakeScale;                         // 0x04CC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class AActor*                                      LastTargetBase;                                // 0x04D0 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            UnknownData00[0xC];                              // 0x04D4 (0x000C) MISSED OFFSET
	struct FMatrix                                     LastTargetBaseTM;                              // 0x04E0 (0x0040) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GamePlayerCamera");
		}

		return uClassPointer;
	};

	float AdjustFOVForViewport(float inHorizFOV, class APawn* CameraTargetPawn);
	void ProcessViewRotation(float DeltaTime, struct FRotator& outOut_ViewRotation, struct FRotator& outOut_DeltaRot);
	void ResetInterpolation();
	void SetColorScale(const struct FVector& NewColorScale);
	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void UpdateCameraLensEffects(struct FTViewTarget& outOutVT);
	void UpdateViewTarget(float DeltaTime, struct FTViewTarget& outOutVT);
	bool ShouldConstrainAspectRatio();
	class UGameCameraBase* FindBestCameraType(class AActor* CameraTarget);
	void Reset();
	void PostBeginPlay();
	void CacheLastTargetBaseInfo(class AActor* TargetBase);
	class UGameCameraBase* CreateCamera(class UClass* CameraClass);
};

// Class GameFramework.GameThirdPersonCameraMode
// 0x01F1 (0x003C - 0x022D)
class UGameThirdPersonCameraMode : public UObject
{
public:
	class UGameThirdPersonCamera*                      ThirdPersonCam;                                // 0x003C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              FOVAngle;                                      // 0x0040 (0x0004) [0x0000000000004003] (CPF_Edit | CPF_Const | CPF_Config)
	float                                              BlendTime;                                     // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bLockedToViewTarget : 1;                       // 0x0048 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bDirectLook : 1;                               // 0x0048 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bFollowTarget : 1;                             // 0x0048 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bInterpLocation : 1;                           // 0x0048 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bUsePerAxisOriginLocInterp : 1;                // 0x0048 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bInterpRotation : 1;                           // 0x0048 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bRotInterpSpeedConstant : 1;                   // 0x0048 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bDoPredictiveAvoidance : 1;                    // 0x0048 (0x0004) [0x0000000000000003] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           bValidateWorstLoc : 1;                         // 0x0048 (0x0004) [0x0000000000000003] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           bSkipCameraCollision : 1;                      // 0x0048 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bSmoothViewOffsetPitchChanges : 1;             // 0x0048 (0x0004) [0x0000000000000003] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           bApplyDeltaViewOffset : 1;                     // 0x0048 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           bAdjustDOF : 1;                                // 0x0048 (0x0004) [0x0000000000000003] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           bDOFUpdated : 1;                               // 0x0048 (0x0004) [0x0000000000002000] [0x00002000] (CPF_Transient)
	uint32_t                                           bNoFOVPostProcess : 1;                         // 0x0048 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bInterpViewOffsetOnlyForCamTransition : 1;     // 0x0048 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	float                                              FollowingInterpSpeed_Pitch;                    // 0x004C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FollowingInterpSpeed_Yaw;                      // 0x0050 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FollowingInterpSpeed_Roll;                     // 0x0054 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FollowingCameraVelThreshold;                   // 0x0058 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              OriginLocInterpSpeed;                          // 0x005C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     PerAxisOriginLocInterpSpeed;                   // 0x0060 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              OriginRotInterpSpeed;                          // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     StrafeLeftAdjustment;                          // 0x0070 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     StrafeRightAdjustment;                         // 0x007C (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StrafeOffsetScalingThreshold;                  // 0x0088 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StrafeOffsetInterpSpeedIn;                     // 0x008C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StrafeOffsetInterpSpeedOut;                    // 0x0090 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     LastStrafeOffset;                              // 0x0094 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     RunFwdAdjustment;                              // 0x00A0 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     RunBackAdjustment;                             // 0x00AC (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RunOffsetScalingThreshold;                     // 0x00B8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RunOffsetInterpSpeedIn;                        // 0x00BC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RunOffsetInterpSpeedOut;                       // 0x00C0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     LastRunOffset;                                 // 0x00C4 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     WorstLocOffset;                                // 0x00D0 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     TargetRelativeCameraOriginOffset;              // 0x00DC (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FViewOffsetData                             ViewOffset;                                    // 0x00E8 (0x0024) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FViewOffsetData                             ViewOffset_ViewportAdjustments[6];             // 0x010C (0x00D8) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DOF_FalloffExponent;                           // 0x01E4 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DOF_BlurKernelSize;                            // 0x01E8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DOF_FocusInnerRadius;                          // 0x01EC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DOF_MaxNearBlurAmount;                         // 0x01F0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DOF_MaxFarBlurAmount;                          // 0x01F4 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              LastDOFRadius;                                 // 0x01F8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastDOFDistance;                               // 0x01FC (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              DOFDistanceInterpSpeed;                        // 0x0200 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     DOFTraceExtent;                                // 0x0204 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DOF_RadiusFalloff;                             // 0x0210 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector2D                                   DOF_RadiusRange;                               // 0x0214 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector2D                                   DOF_RadiusDistRange;                           // 0x021C (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ViewOffsetInterp;                              // 0x0224 (0x0004) [0x0000000000000000]               
	float                                              OffsetAdjustmentInterpSpeed;                   // 0x0228 (0x0004) [0x0000000000000001] (CPF_Edit)    
	ECameraViewportTypes                               CurrentViewportType;                           // 0x022C (0x0001) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameThirdPersonCameraMode");
		}

		return uClassPointer;
	};

	void SetViewOffset(struct FViewOffsetData& outNewViewOffset);
	void ModifyPostProcessSettings(struct FPostProcessSettings& outPP);
	void UpdatePostProcess(float DeltaTime, struct FTViewTarget& outVT);
	struct FVector DOFTrace(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace);
	struct FVector GetDOFFocusLoc(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace);
	void ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& outOut_ViewRotation, struct FRotator& outOut_DeltaRot);
	bool SetFocusPoint(class APawn* ViewedPawn);
	struct FVector eventGetCameraWorstCaseLoc(class APawn* TargetPawn, const struct FTViewTarget& CurrentViewTarget);
	float GetDesiredFOV(class APawn* ViewedPawn);
	struct FVector eventAdjustViewOffset(class APawn* P, const struct FVector& offset);
	void OnBecomeInActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode);
	void OnBecomeActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode);
	void Init();
};

// Class GameFramework.GameThirdPersonCameraMode_Default
// 0x000F (0x022D - 0x023C)
class UGameThirdPersonCameraMode_Default : public UGameThirdPersonCameraMode
{
public:
	float                                              WorstLocAimingZOffset;                         // 0x0230 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bTemporaryOriginRotInterp : 1;                 // 0x0234 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              TemporaryOriginRotInterpSpeed;                 // 0x0238 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameThirdPersonCameraMode_Default");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameSpecialMove
// 0x0040 (0x003C - 0x007C)
class UGameSpecialMove : public UObject
{
public:
	class AGamePawn*                                   PawnOwner;                                     // 0x003C (0x0004) [0x0000000000000000]               
	class FName                                        Handle;                                        // 0x0040 (0x0008) [0x0000000000000000]               
	float                                              LastCanDoSpecialMoveTime;                      // 0x0048 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bLastCanDoSpecialMove : 1;                     // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReachPreciseDestination : 1;                  // 0x004C (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           bReachedPreciseDestination : 1;                // 0x004C (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint32_t                                           bReachPreciseRotation : 1;                     // 0x004C (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bReachedPreciseRotation : 1;                   // 0x004C (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	uint32_t                                           bForcePrecisePosition : 1;                     // 0x004C (0x0004) [0x0000000000000000] [0x00000020] 
	struct FVector                                     PreciseDestination;                            // 0x0050 (0x000C) [0x0000000000000002] (CPF_Const)   
	class AActor*                                      PreciseDestBase;                               // 0x005C (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FVector                                     PreciseDestRelOffset;                          // 0x0060 (0x000C) [0x0000000000000002] (CPF_Const)   
	float                                              PreciseRotationInterpolationTime;              // 0x006C (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FRotator                                    PreciseRotation;                               // 0x0070 (0x000C) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameSpecialMove");
		}

		return uClassPointer;
	};

	struct FVector RelativeToWorldOffset(const struct FRotator& InRotation, const struct FVector& RelativeSpaceOffset);
	struct FVector WorldToRelativeOffset(const struct FRotator& InRotation, const struct FVector& WorldSpaceOffset);
	void ForcePawnRotation(class APawn* P, const struct FRotator& NewRotation);
	bool MessageEvent(const class FName& EventName, class UObject* Sender);
	void ResetFacePreciseRotation();
	void eventReachedPrecisePosition();
	void SetFacePreciseRotation(const struct FRotator& RotationToFace, float InterpolationTime);
	void SetReachPreciseDestination(const struct FVector& DestinationToReach, bool optionalBCancel);
	bool ShouldReplicate();
	void SpecialMoveFlagsUpdated();
	void Tick(float DeltaTime);
	void SpecialMoveEnded(const class FName& PrevMove, const class FName& NextMove);
	void SpecialMoveStarted(bool bForced, const class FName& PrevMove);
	bool InternalCanDoSpecialMove();
	bool CanDoSpecialMove(bool optionalBForceCheck);
	bool CanOverrideSpecialMove(const class FName& InMove);
	bool CanOverrideMoveWith(const class FName& NewMove);
	bool CanChainMove(const class FName& NextMove);
	void ExtractSpecialMoveFlags(int32_t Flags);
	void InitSpecialMoveFlags(int32_t& outOut_Flags);
	void InitSpecialMove(class AGamePawn* inPawn, const class FName& InHandle);
};

// Class GameFramework.GameStateObject
// 0x0028 (0x0058 - 0x0080)
class UGameStateObject : public UGameplayEventsHandler
{
public:
	struct FArray_Mirror                               TeamStates;                                    // 0x0058 (0x000C) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FArray_Mirror                               PlayerStates;                                  // 0x0064 (0x000C) [0x0000000000001002] (CPF_Const | CPF_Native)
	EGameSessionType                                   SessionType;                                   // 0x0070 (0x0001) [0x0000000000000000]               
	uint32_t                                           bIsMatchStarted : 1;                           // 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsRoundStarted : 1;                           // 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            RoundNumber;                                   // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxRoundNumber;                                // 0x007C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameStateObject");
		}

		return uClassPointer;
	};

	void Reset();
	void eventPreProcessStream();
};

// Class GameFramework.GameStatsAggregator
// 0x01D8 (0x0058 - 0x0230)
class UGameStatsAggregator : public UGameplayEventsHandler
{
public:
	class UGameStateObject*                            GameState;                                     // 0x0058 (0x0004) [0x0000000000000000]               
	class TArray<struct FAggregateEventMapping>        AggregatesList;                                // 0x005C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMap_Mirror                                 AggregateEventsMapping;                        // 0x0068 (0x003C) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<struct FGameplayEventMetaData>        AggregateEvents;                               // 0x00A4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              AggregatesFound;                               // 0x00B0 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FGameEvents                                 AllGameEvents;                                 // 0x00BC (0x003C) [0x0000000000000000]               
	class TArray<struct FTeamEvents>                   AllTeamEvents;                                 // 0x00F8 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FPlayerEvents>                 AllPlayerEvents;                               // 0x0104 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FWeaponEvents                               AllWeaponEvents;                               // 0x0110 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FProjectileEvents                           AllProjectileEvents;                           // 0x0158 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FPawnEvents                                 AllPawnEvents;                                 // 0x01A0 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FDamageEvents                               AllDamageEvents;                               // 0x01E8 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameStatsAggregator");
		}

		return uClassPointer;
	};

	bool GetAggregateMappingIDs(int32_t EventID, int32_t& outAggregateID, int32_t& outTargetAggregateID);
	void Reset();
	void eventPostProcessStream();
	void eventPreProcessStream();
};

// Class GameFramework.SeqAct_ToggleMouseCursor
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_ToggleMouseCursor : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_ToggleMouseCursor");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameWaveForms
// 0x0010 (0x003C - 0x004C)
class UGameWaveForms : public UObject
{
public:
	class UForceFeedbackWaveform*                      CameraShakeMediumShort;                        // 0x003C (0x0004) [0x0000000000000000]               
	class UForceFeedbackWaveform*                      CameraShakeMediumLong;                         // 0x0040 (0x0004) [0x0000000000000000]               
	class UForceFeedbackWaveform*                      CameraShakeBigShort;                           // 0x0044 (0x0004) [0x0000000000000000]               
	class UForceFeedbackWaveform*                      CameraShakeBigLong;                            // 0x0048 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameWaveForms");
		}

		return uClassPointer;
	};

};

// Class GameFramework.DebugCameraHUD
// 0x0004 (0x0450 - 0x0454)
class ADebugCameraHUD : public AHUD
{
public:
	uint32_t                                           bDrawDebugText : 1;                            // 0x0450 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.DebugCameraHUD");
		}

		return uClassPointer;
	};

	void eventPostRender();
	bool DisplayMaterials(float X, float DY, class UMeshComponent* MeshComp, float& outY);
	void eventPostBeginPlay();
};

// Class GameFramework.DebugCameraInput
// 0x0000 (0x0260 - 0x0260)
class UDebugCameraInput : public UPlayerInput
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.DebugCameraInput");
		}

		return uClassPointer;
	};

	bool InputKey(int32_t ControllerId, const class FName& Key, EInputEvent Event, float optionalAmountDepressed, bool optionalBGamepad);
};

// Class GameFramework.GameCrowdSpawnerInterface
// 0x0000 (0x003C - 0x003C)
class UGameCrowdSpawnerInterface : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdSpawnerInterface");
		}

		return uClassPointer;
	};

	float GetMaxSpawnDist();
	void AgentDestroyed(class AGameCrowdAgent* Agent);
};

// Class GameFramework.GameCrowdSpawnInterface
// 0x0000 (0x003C - 0x003C)
class UGameCrowdSpawnInterface : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdSpawnInterface");
		}

		return uClassPointer;
	};

	void GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector& outSpawnPos, struct FRotator& outSpawnRot);
};

// Class GameFramework.DynamicGameCrowdDestination
// 0x0000 (0x0250 - 0x0250)
class ADynamicGameCrowdDestination : public AGameCrowdDestination
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.DynamicGameCrowdDestination");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameAICmd_Hover_MoveToGoal
// 0x0034 (0x0058 - 0x008C)
class UGameAICmd_Hover_MoveToGoal : public UGameAICommand
{
public:
	class AActor*                                      Path;                                          // 0x0058 (0x0004) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      Find;                                          // 0x005C (0x0004) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      Goal;                                          // 0x0060 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              Radius;                                        // 0x0064 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasFiring : 1;                                // 0x0068 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              DesiredHoverHeight;                            // 0x006C (0x0004) [0x0000000000000000]               
	float                                              CurrentHoverHeight;                            // 0x0070 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              SubGoalReachDist;                              // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              GoalDistance;                                  // 0x0078 (0x0004) [0x0000000000000000]               
	struct FVector                                     MoveVectDest;                                  // 0x007C (0x000C) [0x0000000000002000] (CPF_Transient)
	class UReachSpec*                                  CurrentSpec;                                   // 0x0088 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameAICmd_Hover_MoveToGoal");
		}

		return uClassPointer;
	};

	bool IsEnemyBasedOnInterpActor(class APawn* InEnemy);
	bool HandlePathObstruction(class AActor* BlockedBy);
	void Pushed();
	static bool MoveToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight);
};

// Class GameFramework.GameAICmd_Hover_MoveToGoal_Mesh
// 0x008C (0x0058 - 0x00E4)
class UGameAICmd_Hover_MoveToGoal_Mesh : public UGameAICommand
{
public:
	class AActor*                                      Find;                                          // 0x0058 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              Radius;                                        // 0x005C (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasFiring : 1;                                // 0x0060 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bFinalApproach : 1;                            // 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bFallbackMoveToMesh : 1;                       // 0x0060 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              DesiredHoverHeight;                            // 0x0064 (0x0004) [0x0000000000000000]               
	float                                              CurrentHoverHeight;                            // 0x0068 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              SubGoalReachDist;                              // 0x006C (0x0004) [0x0000000000000000]               
	float                                              GoalDistance;                                  // 0x0070 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     IntermediatePoint;                             // 0x0074 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LastMovePoint;                                 // 0x0080 (0x000C) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumMovePointFails;                             // 0x008C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            MaxMovePointFails;                             // 0x0090 (0x0004) [0x0000000000000000]               
	struct FVector                                     FallbackDest;                                  // 0x0094 (0x000C) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      MoveToActor;                                   // 0x00A0 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FBasedPosition                              LastMoveTargetPathLocation;                    // 0x00A4 (0x0034) [0x0000000000000000]               
	struct FVector                                     InitialFinalDestination;                       // 0x00D8 (0x000C) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameAICmd_Hover_MoveToGoal_Mesh");
		}

		return uClassPointer;
	};

	void eventDrawDebug(class AHUD* H, const class FName& Category);
	bool IsEnemyBasedOnInterpActor(class APawn* InEnemy);
	bool ShouldUpdateBreadCrumbs();
	bool HasReachedGoal();
	void ReEvaluatePath();
	bool HandlePathObstruction(class AActor* BlockedBy);
	void Tick(float DeltaTime);
	void Popped();
	void Pushed();
	static bool HoverBackToMesh(class AGameAIController* AI);
	static bool HoverToPoint(class AGameAIController* AI, const struct FVector& InPoint, float InGoalDistance, float InHoverHeight);
	static bool HoverToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight);
};

// Class GameFramework.GameCrowd_ListOfAgents
// 0x000C (0x003C - 0x0048)
class UGameCrowd_ListOfAgents : public UObject
{
public:
	class TArray<struct FAgentArchetypeInfo>           ListOfAgents;                                  // 0x003C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowd_ListOfAgents");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameCrowdInteractionDestination
// 0x0000 (0x0250 - 0x0250)
class AGameCrowdInteractionDestination : public AGameCrowdDestination
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdInteractionDestination");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameExplosionContent
// 0x0048 (0x003C - 0x0084)
class UGameExplosionContent : public UObject
{
public:
	uint32_t                                           bAutoControllerVibration : 1;                  // 0x003C (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bOrientCameraShakeTowardsEpicenter : 1;        // 0x003C (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	class USoundCue*                                   ExplosionSound;                                // 0x0040 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UCameraShake*                                CamShake;                                      // 0x0044 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UCameraShake*                                CamShake_Left;                                 // 0x0048 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UCameraShake*                                CamShake_Right;                                // 0x004C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UCameraShake*                                CamShake_Rear;                                 // 0x0050 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              CamShakeInnerRadius;                           // 0x0054 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              CamShakeOuterRadius;                           // 0x0058 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              CamShakeFalloff;                               // 0x005C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UClass*                                      CameraLensEffect;                              // 0x0060 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              CameraLensEffectRadius;                        // 0x0064 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UPointLightComponent*                        ExploLight;                                    // 0x0068 (0x0004) [0x000000000408000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              ExploLightFadeOutTime;                         // 0x006C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class URadialBlurComponent*                        ExploRadialBlur;                               // 0x0070 (0x0004) [0x000000000408000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              ExploRadialBlurFadeOutTime;                    // 0x0074 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ExploRadialBlurMaxBlur;                        // 0x0078 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UParticleSystem*                             ParticleEmitterTemplate;                       // 0x007C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class AFogVolumeSphericalDensityInfo*              FogVolumeArchetype;                            // 0x0080 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameExplosionContent");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameFixedCamera
// 0x0004 (0x0044 - 0x0048)
class UGameFixedCamera : public UGameCameraBase
{
public:
	float                                              DefaultFOV;                                    // 0x0044 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameFixedCamera");
		}

		return uClassPointer;
	};

	void OnBecomeActive(class UGameCameraBase* OldCamera);
	void UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& outOutVT);
};

// Class GameFramework.GameKActorSpawnableEffect
// 0x0000 (0x02B8 - 0x02B8)
class AGameKActorSpawnableEffect : public AKActor
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameKActorSpawnableEffect");
		}

		return uClassPointer;
	};

	void StartScalingDown();
	void eventFellOutOfWorld(class UClass* dmgType);
	void eventPostBeginPlay();
};

// Class GameFramework.MobileDebugCameraController
// 0x0008 (0x05C8 - 0x05D0)
class AMobileDebugCameraController : public ADebugCameraController
{
public:
	int32_t                                            OldMobileGroup;                                // 0x05C8 (0x0004) [0x0000000000000000]               
	class UMobilePlayerInput*                          MPI;                                           // 0x05CC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileDebugCameraController");
		}

		return uClassPointer;
	};

	void SetupDebugZones();
	void eventInitInputSystem();
	void OnDeactivate(class APlayerController* PC);
	void InitDebugInputSystem();
	void OnActivate(class APlayerController* PC);
};

// Class GameFramework.MobileDebugCameraInput
// 0x0000 (0x0498 - 0x0498)
class UMobileDebugCameraInput : public UMobilePlayerInput
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileDebugCameraInput");
		}

		return uClassPointer;
	};

	bool InputKey(int32_t ControllerId, const class FName& Key, EInputEvent Event, float optionalAmountDepressed, bool optionalBGamepad);
};

// Class GameFramework.MobileDebugCameraHUD
// 0x0004 (0x053C - 0x0540)
class AMobileDebugCameraHUD : public AMobileHUD
{
public:
	uint32_t                                           bDrawDebugText : 1;                            // 0x053C (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileDebugCameraHUD");
		}

		return uClassPointer;
	};

	void eventPostRender();
	bool DisplayMaterials(float X, float DY, class UMeshComponent* MeshComp, float& outY);
	void eventPostBeginPlay();
};

// Class GameFramework.MobileMenuBar
// 0x0018 (0x00A4 - 0x00BC)
class UMobileMenuBar : public UMobileMenuObject
{
public:
	uint32_t                                           bIsVertical : 1;                               // 0x00A4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDirty : 1;                                    // 0x00A4 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            SelectedIndex;                                 // 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FirstItem;                                     // 0x00AC (0x0004) [0x0000000000000000]               
	class TArray<class UMobileMenuBarItem*>            Items;                                         // 0x00B0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuBar");
		}

		return uClassPointer;
	};

	void UpdateItemViewports();
	void SetFirstItem(int32_t first);
	void RenderItem(class UCanvas* Canvas, float DeltaTime, int32_t ItemIndex);
	void RenderObject(class UCanvas* Canvas, float DeltaTime);
	bool eventOnTouch(ETouchType EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime);
	class UMobileMenuBarItem* GetSelected();
	int32_t Num();
	void AddItem(class UMobileMenuBarItem* Item, int32_t optionalIndex);
	void InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization);
};

// Class GameFramework.MobileMenuBarItem
// 0x0010 (0x003C - 0x004C)
class UMobileMenuBarItem : public UObject
{
public:
	int32_t                                            Width;                                         // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            Height;                                        // 0x0040 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   VpPos;                                         // 0x0044 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuBarItem");
		}

		return uClassPointer;
	};

	void RenderItem(class UMobileMenuBar* Bar, class UCanvas* Canvas, float DeltaTime);
};

// Class GameFramework.MobileMenuButton
// 0x005C (0x00A4 - 0x0100)
class UMobileMenuButton : public UMobileMenuObject
{
public:
	class UTexture2D*                                  Images[2];                                     // 0x00A4 (0x0008) [0x0000000000000000]               
	struct FUVCoords                                   ImagesUVs[2];                                  // 0x00AC (0x0028) [0x0000000000000000]               
	struct FLinearColor                                ImageColor;                                    // 0x00D4 (0x0010) [0x0000000000000000]               
	class FString                                      Caption;                                       // 0x00E4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FLinearColor                                CaptionColor;                                  // 0x00F0 (0x0010) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuButton");
		}

		return uClassPointer;
	};

	void RenderCaption(class UCanvas* Canvas);
	void RenderObject(class UCanvas* Canvas, float DeltaTime);
	void InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization);
};

// Class GameFramework.MobileMenuElement
// 0x0014 (0x003C - 0x0050)
class UMobileMenuElement : public UObject
{
public:
	struct FVector2D                                   VpPos;                                         // 0x003C (0x0008) [0x0000000000000000]               
	struct FVector2D                                   VpSize;                                        // 0x0044 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsVisible : 1;                                // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsActive : 1;                                 // 0x004C (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuElement");
		}

		return uClassPointer;
	};

	void RenderElement(class UMobileMenuObject* Owner, class UCanvas* Canvas, float DeltaTime, float Opacity);
	bool OnTouch(ETouchType EventType, float TouchX, float TouchY, float DeltaTime);
};

// Class GameFramework.MobileMenuGame
// 0x0004 (0x0378 - 0x037C)
class AMobileMenuGame : public AGameInfo
{
public:
	class UClass*                                      InitialSceneToDisplayClass;                    // 0x0378 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuGame");
		}

		return uClassPointer;
	};

	void RestartPlayer(class AController* NewPlayer);
	void StartMatch();
	void eventPostLogin(class APlayerController* NewPlayer);
};

// Class GameFramework.MobileMenuPlayerController
// 0x0000 (0x0594 - 0x0594)
class AMobileMenuPlayerController : public AGamePlayerController
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuPlayerController");
		}

		return uClassPointer;
	};

};

// Class GameFramework.MobileMenuInventory
// 0x007C (0x00A4 - 0x0120)
class UMobileMenuInventory : public UMobileMenuObject
{
public:
	class TArray<class UMobileMenuElement*>            Slots;                                         // 0x00A4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UMobileMenuElement*>            Items;                                         // 0x00B0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              SideLeewayPercent;                             // 0x00BC (0x0004) [0x0000000000000000]               
	struct FRenderElementInfo                          CurrentElement;                                // 0x00C0 (0x0008) [0x0000000000000000]               
	struct FDragElementInfo                            Drag;                                          // 0x00C8 (0x0028) [0x0000000000000000]               
	struct FVector2D                                   ScaleSize;                                     // 0x00F0 (0x0008) [0x0000000000000000]               
	uint32_t                                           bRenderDragItem : 1;                           // 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __OnUpdateItemInSlot__Delegate;                // 0x00FC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __DoCanPutItemInSlot__Delegate;                // 0x0108 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateDrag__Delegate;                      // 0x0114 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuInventory");
		}

		return uClassPointer;
	};

	void RenderDragItem(class UCanvas* Canvas, float DeltaTime);
	void RenderObject(class UCanvas* Canvas, float DeltaTime);
	int32_t GetIndexOfItem(class UMobileMenuElement* Item);
	int32_t FindSlotIndexAt(float X, float Y);
	void InitDragAt(int32_t TouchX, int32_t TouchY);
	void UpdateItemInSlot(int32_t InSlot);
	class UMobileMenuElement* AddItemToSlot(class UMobileMenuElement* Element, int32_t ToSlot);
	bool SwapItemsInSlots(int32_t Slot0, int32_t Slot1);
	bool eventOnTouch(ETouchType EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime);
	bool CanPutItemInSlot(class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int32_t ToIdx, int32_t optionalFromIdx);
	void ScaleSlot(class UMobileMenuElement* Slot);
	int32_t AddSlot(class UMobileMenuElement* Slot);
	void InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization);
	void OnUpdateDrag(struct FDragElementInfo& outBefore, struct FDragElementInfo& outAfter);
	bool DoCanPutItemInSlot(class UMobileMenuInventory* FromInv, class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int32_t ToIdx, int32_t FromIdx);
	void OnUpdateItemInSlot(class UMobileMenuInventory* FromInv, int32_t SlotIndex);
};

// Class GameFramework.MobileMenuLabel
// 0x0024 (0x00A4 - 0x00C8)
class UMobileMenuLabel : public UMobileMenuObject
{
public:
	class FString                                      Caption;                                       // 0x00A4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UFont*                                       TextFont;                                      // 0x00B0 (0x0004) [0x0000000000000000]               
	struct FColor                                      TextColor;                                     // 0x00B4 (0x0004) [0x0000000000000000]               
	struct FColor                                      TouchedColor;                                  // 0x00B8 (0x0004) [0x0000000000000000]               
	float                                              TextXScale;                                    // 0x00BC (0x0004) [0x0000000000000000]               
	float                                              TextYScale;                                    // 0x00C0 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAutoSize : 1;                                 // 0x00C4 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuLabel");
		}

		return uClassPointer;
	};

	void RenderObject(class UCanvas* Canvas, float DeltaTime);
};

// Class GameFramework.MobileMenuList
// 0x00A8 (0x00A4 - 0x014C)
class UMobileMenuList : public UMobileMenuObject
{
public:
	uint32_t                                           bIsVerticalList : 1;                           // 0x00A4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bForceSelectedToLineup : 1;                    // 0x00A4 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bTapToScrollToItem : 1;                        // 0x00A4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bLoops : 1;                                    // 0x00A4 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              SelectedOffset;                                // 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UMobileMenuListItem*>           Items;                                         // 0x00AC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FSelectedMenuItem                           SelectedItem;                                  // 0x00B8 (0x000C) [0x0000000000000000]               
	struct FMenuListDragInfo                           Drag;                                          // 0x00C4 (0x0050) [0x0000000000000000]               
	struct FMenuListMovementInfo                       Movement;                                      // 0x0114 (0x001C) [0x0000000000000000]               
	float                                              Deacceleration;                                // 0x0130 (0x0004) [0x0000000000000000]               
	float                                              EaseOutExp;                                    // 0x0134 (0x0004) [0x0000000000000000]               
	struct FIntPoint                                   ScreenSize;                                    // 0x0138 (0x0008) [0x0000000000000000]               
	int32_t                                            FirstVisible;                                  // 0x0140 (0x0004) [0x0000000000000000]               
	int32_t                                            LastVisible;                                   // 0x0144 (0x0004) [0x0000000000000000]               
	float                                              EndOfListSupression;                           // 0x0148 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuList");
		}

		return uClassPointer;
	};

	int32_t ItemScrollSize(class UMobileMenuListItem* Item);
	void RenderObject(class UCanvas* Canvas, float DeltaTime);
	void UpdateScroll(float DeltaTime);
	float CalculateSelectedItem(float ScrollAmount, bool bForceZeroAdjustment, struct FSelectedMenuItem& outSelected);
	class UMobileMenuListItem* GetItemClickPosition(float& outMouseX, float& outMouseY);
	bool eventOnTouch(ETouchType EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime);
	bool SetSelectedItem(int32_t ItemIndex, bool optionalBForceAll);
	int32_t GetNumVisible();
	int32_t SetSelectedToVisibleIndex(int32_t VisibleIndex);
	int32_t GetVisibleIndexOfSelected();
	float GetAmountSelected(class UMobileMenuListItem* Item);
	class UMobileMenuListItem* GetSelected();
	int32_t Num();
	void AddItem(class UMobileMenuListItem* Item, int32_t optionalIndex);
	void InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization);
};

// Class GameFramework.MobileMenuListItem
// 0x0008 (0x0050 - 0x0058)
class UMobileMenuListItem : public UMobileMenuElement
{
public:
	float                                              Width;                                         // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              Height;                                        // 0x0054 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuListItem");
		}

		return uClassPointer;
	};

	void RenderItem(class UMobileMenuList* List, class UCanvas* Canvas, float DeltaTime);
};

// Class GameFramework.MobileMenuObjectProxy
// 0x0018 (0x00A4 - 0x00BC)
class UMobileMenuObjectProxy : public UMobileMenuObject
{
public:
	struct FScriptDelegate                             __OnTouchEvent__Delegate;                      // 0x00A4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRenderObject__Delegate;                    // 0x00B0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileMenuObjectProxy");
		}

		return uClassPointer;
	};

	void RenderObject(class UCanvas* Canvas, float DeltaTime);
	bool eventOnTouch(ETouchType EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime);
	void OnRenderObject(class UMobileMenuObjectProxy* Proxy, class UCanvas* Canvas, float DeltaTime);
	bool OnTouchEvent(class UMobileMenuObjectProxy* Proxy, ETouchType EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime);
};

// Class GameFramework.MobileTouchInputVolume
// 0x0004 (0x01F4 - 0x01F8)
class AMobileTouchInputVolume : public AVolume
{
public:
	uint32_t                                           bEnabled : 1;                                  // 0x01F4 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.MobileTouchInputVolume");
		}

		return uClassPointer;
	};

	void HandleDragOver();
	void HandleDoubleClick();
	void HandleClick();
	void OnToggle(class USeqAct_Toggle* inAction);
};

// Class GameFramework.SeqEvent_MobileTouchInputVolume
// 0x0000 (0x0114 - 0x0114)
class USeqEvent_MobileTouchInputVolume : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_MobileTouchInputVolume");
		}

		return uClassPointer;
	};

};

// Class GameFramework.TouchableElement3D
// 0x0000 (0x003C - 0x003C)
class UTouchableElement3D : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.TouchableElement3D");
		}

		return uClassPointer;
	};

	void HandleDragOver();
	void HandleDoubleClick();
	void HandleClick();
};

// Class GameFramework.PlayerCollectorGame
// 0x0010 (0x0378 - 0x0388)
class APlayerCollectorGame : public AGameInfo
{
public:
	int32_t                                            NumberOfClientsToWaitFor;                      // 0x0378 (0x0004) [0x0000000000000000]               
	class FString                                      URLToLoad;                                     // 0x037C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.PlayerCollectorGame");
		}

		return uClassPointer;
	};

	void eventGetSeamlessTravelActorList(bool bToEntry, class TArray<class AActor*>& outActorList);
	class APlayerController* eventLogin(const class FString& Portal, const class FString& Options, const struct FUniqueNetId& UniqueId, class FString& outErrorMessage);
};

// Class GameFramework.PMESTG_LeaveADecalBase
// 0x0004 (0x003C - 0x0040)
class UPMESTG_LeaveADecalBase : public UParticleModuleEventSendToGame
{
public:
	class UClass*                                      PhysicalMaterialPropertyClass;                 // 0x003C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.PMESTG_LeaveADecalBase");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqEvent_HudRenderImage
// 0x0038 (0x0128 - 0x0160)
class USeqEvent_HudRenderImage : public USeqEvent_HudRender
{
public:
	struct FLinearColor                                DisplayColor;                                  // 0x0128 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     DisplayLocation;                               // 0x0138 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class UTexture2D*                                  DisplayTexture;                                // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              XL;                                            // 0x0148 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              YL;                                            // 0x014C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              U;                                             // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              V;                                             // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              UL;                                            // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VL;                                            // 0x015C (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_HudRenderImage");
		}

		return uClassPointer;
	};

	void Render(class UCanvas* TargetCanvas, class AHUD* TargetHud);
};

// Class GameFramework.SeqEvent_HudRenderText
// 0x0021 (0x0128 - 0x0149)
class USeqEvent_HudRenderText : public USeqEvent_HudRender
{
public:
	class UFont*                                       DisplayFont;                                   // 0x0128 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      DisplayColor;                                  // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     DisplayLocation;                               // 0x0130 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class FString                                      DisplayText;                                   // 0x013C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	ETextDrawMethod                                    TextDrawMethod;                                // 0x0148 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_HudRenderText");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
	void Render(class UCanvas* TargetCanvas, class AHUD* TargetHud);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
