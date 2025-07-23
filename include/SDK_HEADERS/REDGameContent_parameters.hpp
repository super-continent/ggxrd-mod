/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: REDGameContent_parameters.hpp
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
# Parameters
# ========================================================================================= #
*/

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.IsAnimeEndScript
// [0x00020002] 
struct UREDGfxMovie_Battle_ChallengeResult_execIsAnimeEndScript_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.Update
// [0x00020003] 
struct UREDGfxMovie_Battle_ChallengeResult_execUpdate_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateGood
// [0x00040003] 
struct UREDGfxMovie_Battle_ChallengeResult_execUpdateGood_Params
{
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateMiss
// [0x00040003] 
struct UREDGfxMovie_Battle_ChallengeResult_execUpdateMiss_Params
{
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateFailed
// [0x00040003] 
struct UREDGfxMovie_Battle_ChallengeResult_execUpdateFailed_Params
{
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateTry
// [0x00040003] 
struct UREDGfxMovie_Battle_ChallengeResult_execUpdateTry_Params
{
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateYouRock
// [0x00040003] 
struct UREDGfxMovie_Battle_ChallengeResult_execUpdateYouRock_Params
{
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.MovieStartInternal
// [0x00020002] 
struct UREDGfxMovie_Battle_ChallengeResult_execMovieStartInternal_Params
{
	uint32_t                                           StartPaused : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_Destroyed.IsAnimeEndScript
// [0x00020002] 
struct UREDGfxMovie_Battle_Destroyed_execIsAnimeEndScript_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_Destroyed.MovieStartInternal
// [0x00020002] 
struct UREDGfxMovie_Battle_Destroyed_execMovieStartInternal_Params
{
	uint32_t                                           StartPaused : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint8_t                                         Winner;                                           // 0x0008 (0x0001) [0x0000000000000000]               
	// class UREDGameCommon*                           gameData;                                         // 0x000C (0x0004) [0x0000000000000000]               
};

// Function REDGameContent.REDGfxMovie_Battle_DestroyedDZY.IsAnimeEndScript
// [0x00020002] 
struct UREDGfxMovie_Battle_DestroyedDZY_execIsAnimeEndScript_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_DestroyedDZY.MovieStartInternal
// [0x00020002] 
struct UREDGfxMovie_Battle_DestroyedDZY_execMovieStartInternal_Params
{
	uint32_t                                           StartPaused : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_DoubleKO.Show
// [0x00020002] 
struct UREDGfxMovie_Battle_DoubleKO_execShow_Params
{
};

// Function REDGameContent.REDGfxMovie_Battle_DoubleKO.MovieStartInternal
// [0x00020002] 
struct UREDGfxMovie_Battle_DoubleKO_execMovieStartInternal_Params
{
	uint32_t                                           StartPaused : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_Draw.Show
// [0x00020002] 
struct UREDGfxMovie_Battle_Draw_execShow_Params
{
};

// Function REDGameContent.REDGfxMovie_Battle_Draw.MovieStartInternal
// [0x00020002] 
struct UREDGfxMovie_Battle_Draw_execMovieStartInternal_Params
{
	uint32_t                                           StartPaused : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_FinishSlash.Show
// [0x00020002] 
struct UREDGfxMovie_Battle_FinishSlash_execShow_Params
{
};

// Function REDGameContent.REDGfxMovie_Battle_FinishSlash.MovieStartInternal
// [0x00020002] 
struct UREDGfxMovie_Battle_FinishSlash_execMovieStartInternal_Params
{
	uint32_t                                           StartPaused : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_Lose.IsAnimeEndScript
// [0x00020002] 
struct UREDGfxMovie_Battle_Lose_execIsAnimeEndScript_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_Lose.Update
// [0x00020003] 
struct UREDGfxMovie_Battle_Lose_execUpdate_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class AREDGameInfo*                             Game;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	// class UREDGameCommon*                           gameData;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function REDGameContent.REDGfxMovie_Battle_Lose.AS_PlayerLabel
// [0x00040003] 
struct UREDGfxMovie_Battle_Lose_execAS_PlayerLabel_Params
{
	class FString                                      Label;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function REDGameContent.REDGfxMovie_Battle_Lose.MovieStartInternal
// [0x00020002] 
struct UREDGfxMovie_Battle_Lose_execMovieStartInternal_Params
{
	uint32_t                                           StartPaused : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class FString                                   assetName;                                        // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UREDGameCommon*                           gameData;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                   suffix;                                           // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function REDGameContent.REDGfxMovie_Battle_Perfect.Show
// [0x00020002] 
struct UREDGfxMovie_Battle_Perfect_execShow_Params
{
};

// Function REDGameContent.REDGfxMovie_Battle_Perfect.MovieStartInternal
// [0x00020002] 
struct UREDGfxMovie_Battle_Perfect_execMovieStartInternal_Params
{
	uint32_t                                           StartPaused : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_RoundStart.Update
// [0x00020003] 
struct UREDGfxMovie_Battle_RoundStart_execUpdate_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class AREDGameInfo*                             Game;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	// class FString                                   prevRootLabel;                                    // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         BGID;                                             // 0x0014 (0x0004) [0x0000000000000000]               
};

// Function REDGameContent.REDGfxMovie_Battle_RoundStart.ASCallBack_Func
// [0x00020000] 
struct UREDGfxMovie_Battle_RoundStart_execASCallBack_Func_Params
{
	class FString                                      Typename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function REDGameContent.REDGfxMovie_Battle_RoundStart.AS_RootLabel
// [0x00020002] 
struct UREDGfxMovie_Battle_RoundStart_execAS_RootLabel_Params
{
	class FString                                      Label;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function REDGameContent.REDGfxMovie_Battle_RoundStart.ShowRoundStart
// [0x00020002] 
struct UREDGfxMovie_Battle_RoundStart_execShowRoundStart_Params
{
	uint32_t                                           isHOHDisp : 1;                                    // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class AREDGameInfo*                             Game;                                             // 0x0004 (0x0004) [0x0000000000000000]               
};

// Function REDGameContent.REDGfxMovie_Battle_RoundStart.IsAnimeEndScript
// [0x00020002] 
struct UREDGfxMovie_Battle_RoundStart_execIsAnimeEndScript_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_RoundStart.MovieStartInternal
// [0x00020002] 
struct UREDGfxMovie_Battle_RoundStart_execMovieStartInternal_Params
{
	uint32_t                                           StartPaused : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_TestResult.Update
// [0x00020003] 
struct UREDGfxMovie_Battle_TestResult_execUpdate_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class AREDGameInfo*                             Game;                                             // 0x0004 (0x0004) [0x0000000000000000]               
};

// Function REDGameContent.REDGfxMovie_Battle_TestResult.MovieStartInternal
// [0x00020002] 
struct UREDGfxMovie_Battle_TestResult_execMovieStartInternal_Params
{
	uint32_t                                           StartPaused : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_Timeup.Show
// [0x00020002] 
struct UREDGfxMovie_Battle_Timeup_execShow_Params
{
};

// Function REDGameContent.REDGfxMovie_Battle_Timeup.MovieStartInternal
// [0x00020002] 
struct UREDGfxMovie_Battle_Timeup_execMovieStartInternal_Params
{
	uint32_t                                           StartPaused : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_Win.IsAnimeEndScript
// [0x00020002] 
struct UREDGfxMovie_Battle_Win_execIsAnimeEndScript_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function REDGameContent.REDGfxMovie_Battle_Win.Update
// [0x00020003] 
struct UREDGfxMovie_Battle_Win_execUpdate_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class AREDGameInfo*                             Game;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	// class UREDGameCommon*                           gameData;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function REDGameContent.REDGfxMovie_Battle_Win.AS_PlayerLabel
// [0x00040003] 
struct UREDGfxMovie_Battle_Win_execAS_PlayerLabel_Params
{
	class FString                                      Label;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function REDGameContent.REDGfxMovie_Battle_Win.MovieStartInternal
// [0x00020002] 
struct UREDGfxMovie_Battle_Win_execMovieStartInternal_Params
{
	uint32_t                                           StartPaused : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class FString                                   assetName;                                        // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UREDGameCommon*                           gameData;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                   suffix;                                           // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
