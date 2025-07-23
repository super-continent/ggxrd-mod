/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: REDGame_classes.hpp
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

#define CONST_HANDICAP_MAX                                          4
#define CONST_HANDICAP_DEFAULT                                      2
#define CONST_STAGE_MAX                                             8
#define CONST_ROUND_MAX                                             5
#define CONST_STEP_FRAME                                            5
#define CONST_LOCAL_MATERIAL_POOL_NUM                               1
#define CONST_MESH_SET_NUM                                          8
#define CONST_MESH_CONTROL_NUM                                      5
#define CONST_MESH_SET_DEFAULT                                      ''
#define CONST_MESH_SET_ALLOFF                                       ''
#define CONST_MESH_SET_ALLON                                        ''
#define CONST_BODY_MESH_NAME                                        ''
#define CONST_EFFECT_MAX                                            4
#define CONST_ColorOrderColorMax                                    3
#define CONST_INCOME_SOUND_COMPONENT_NUM                            3
#define CONST_EXTERNAL_TEXTURE_NUM                                  4
#define CONST_GLARE_EFFECT_MAX                                      2
#define CONST_Lobby_KyoutaiMaterial_Max                             3
#define CONST_NET_EASYCHAT_AUDIO_SLOT_MAX                           8
#define CONST_NET_EASYCHAT_AUDIO_SLOT_MAX_0                         8
#define CONST_DANGER_TIME_MAX                                       4
#define CONST_AnimFrameMax                                          1
#define CONST_AnimFrameWait                                         1
#define CONST_AnimFrameMaxIchigeki                                  9
#define CONST_AnimFrameWaitIchigeki                                 1
#define CONST_ROUND_ICON_MAX                                        5
#define CONST_JKO_GAUGE_DISP_OFF                                    1
#define CONST_JKO_GAUGE_DISP_ON_BLACK                               2
#define CONST_JKO_GAUGE_DISP_ON                                     3
#define CONST_CharaPanelMax                                         1
#define CONST_AsyncLoadCharaCacheNum                                3
#define CONST_AsyncLoadColorCacheNum                                4
#define CONST_EffectMaxNum                                          2
#define CONST_GCReqCountThreshold                                   3
#define CONST_TimeLimitVal                                          3
#define CONST_MainState_Finish                                      ''
#define CONST_MainState_ModeSelect                                  ''
#define CONST_MainState_CharaSelect                                 ''
#define CONST_MainState_StartDemo                                   ''
#define CONST_PlayerState_ReturnToMainMenu                          ''
#define CONST_PlayerState_Finish                                    ''
#define CONST_PlayerState_BGSelect                                  ''
#define CONST_PlayerState_CustomMenu                                ''
#define CONST_PlayerState_TrialSelect                               ''
#define CONST_PlayerState_CharaSelect                               ''
#define CONST_PlayerState_PrepareCharaSelect                        ''
#define CONST_PlayerState_CardLoad                                  ''
#define CONST_PlayerState_InitCardLoad                              ''
#define CONST_PlayerState_Wait                                      ''
#define CONST_ChallengeBGColorIndex                                 1
#define CONST_AsyncLoadCharaCacheNum_0                              3
#define CONST_AsyncLoadColorCacheNum_0                              4
#define CONST_CharaPanelMax_0                                       3
#define CONST_EffectMaxNum_0                                        2
#define CONST_GCReqCountThreshold_0                                 3
#define CONST_TimeLimitVal_0                                        5
#define CONST_MainState_Finish_0                                    ''
#define CONST_MainState_RannyuToSelect                              ''
#define CONST_MainState_MOMStage                                    ''
#define CONST_MainState_MOMMain                                     ''
#define CONST_MainState_MOMHelp                                     ''
#define CONST_MainState_MOMPreset                                   ''
#define CONST_MainState_ModeSelect_0                                ''
#define CONST_MainState_CharaSelect_0                               ''
#define CONST_MainState_StartDemo_0                                 ''
#define CONST_PlayerState_ReturnToMainMenu_0                        ''
#define CONST_PlayerState_Finish_0                                  ''
#define CONST_PlayerState_BGSelect_0                                ''
#define CONST_PlayerState_CustomMenu_0                              ''
#define CONST_PlayerState_HandicapSetting                           ''
#define CONST_PlayerState_TrialSelect_0                             ''
#define CONST_PlayerState_CharaSelect_0                             ''
#define CONST_PlayerState_PrepareCharaSelect_0                      ''
#define CONST_PlayerState_StyleSelectExe                            ''
#define CONST_PlayerState_StyleSelect                               ''
#define CONST_PlayerState_SkipCheckExe                              ''
#define CONST_PlayerState_SkipCheck                                 ''
#define CONST_PlayerState_QuestConfirm                              ''
#define CONST_PlayerState_CardLoad_0                                ''
#define CONST_PlayerState_InitCardLoad_0                            ''
#define CONST_PlayerState_Wait_0                                    ''
#define CONST_CountDownStartTime                                    1
#define CONST_GLY_ART_NUM                                           3
#define CONST_GLY_MOVIE_NUM                                         5
#define CONST_GLY_VOICE_NUM                                         1
#define CONST_GLY_SOUND_NUM                                         5
#define CONST_GLY_CHARA_NUM                                         5
#define CONST_GLY_LINE_MAX                                          5
#define CONST_GLY_H_MAX                                             3
#define CONST_GLY_POSY_BASE                                         2
#define CONST_GLY_POSX_BASE                                         1
#define CONST_GLY_POSY_ADD                                          1
#define CONST_GLY_POSX_ADD                                          2
#define CONST_MM_INDEX_LIST_MAX                                     5
#define CONST_MM_SHORT_CUT_PUSH                                     6
#define CONST_MAX_DISP_NUM                                          9
#define CONST_RIGHT_MENU_ITEM_NUM                                   2
#define CONST_TOTAL_TIME                                            3
#define CONST_SougouRank_Interval                                   2
#define CONST_CharaRank_AllTime                                     2
#define CONST_CharaUseRank_AllTime                                  4
#define CONST_RPL_H_MAX                                             1
#define CONST_StaffRollMulSpeed                                     7
#define CONST_RED_POINT_LIGHT_MAX                                   1
#define CONST_SOUND_PLAYER_UNIQUE_CHANNEL_MAX                       2

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum REDGame.REDGfxMoviePlayer.ESTAFFROLL_TEXT_TYPE
enum class ESTAFFROLL_TEXT_TYPE : uint8_t
{
	STAFFROLL_TEXT_DEFAULT                             = 0,
	STAFFROLL_TEXT_STORY                               = 1,
	STAFFROLL_TEXT_REV2                                = 2,
	STAFFROLL_TEXT_END                                 = 3
};

// Enum REDGame.REDGfxMoviePlayer.REDMovie_Category
enum class EREDMovie_Category : uint8_t
{
	REDMovie_Cockpit                                   = 0,
	REDMovie_Announce                                  = 1,
	REDMovie_NewChallenger                             = 2,
	REDMovie_Effect                                    = 3,
	REDMovie_END                                       = 4
};

// Enum REDGame.REDGameCommon_Package.EPKG_NAME
enum class EPKG_NAME : uint8_t
{
	PKG_NAME_UI_Battle                                 = 0,
	PKG_NAME_UI_Battle_RT                              = 1,
	PKG_NAME_UI_Battle_Tex                             = 2,
	PKG_NAME_UI_ModeSelect                             = 3,
	PKG_NAME_UI_Questpanel                             = 4,
	PKG_NAME_UI_BattleResultWindow                     = 5,
	PKG_NAME_UI_Battle_MOM                             = 6,
	PKG_NAME_UI_Continue                               = 7,
	PKG_NAME_UI_ChallengeMode                          = 8,
	PKG_NAME_UI_Battle_Tutorial                        = 9,
	PKG_NAME_UI_Battle_DS_DZY                          = 10,
	PKG_NAME_UI_CharaSelect_Parts                      = 11,
	PKG_NAME_UI_StageSelect                            = 12,
	PKG_NAME_UI_MOM_Preset                             = 13,
	PKG_NAME_UI_BattleCustom                           = 14,
	PKG_NAME_UI_Loc_CharaSelect                        = 15,
	PKG_NAME_UI_ReadCard                               = 16,
	PKG_NAME_UI_DigitalFigure                          = 17,
	PKG_NAME_UI_StaffRoll                              = 18,
	PKG_NAME_UI_MenuBG                                 = 19,
	PKG_NAME_UI_Gallery_IMG                            = 20,
	PKG_NAME_UI_Dictionary                             = 21,
	PKG_NAME_UI_Network                                = 22,
	PKG_NAME_UI_Ranking                                = 23,
	PKG_NAME_UI_WorldLobby                             = 24,
	PKG_NAME_UI_Tournament                             = 25,
	PKG_NAME_UI_Tournament_IMG                         = 26,
	PKG_NAME_UI_Mainmenu                               = 27,
	PKG_NAME_UI_Mainmenu_IMG                           = 28,
	PKG_NAME_UI_Options                                = 29,
	PKG_NAME_UI_PlayersPlate                           = 30,
	PKG_NAME_UI_Mainmenu_DF                            = 31,
	PKG_NAME_UI_Title                                  = 32,
	PKG_NAME_UI_ReplayTheater_IMG                      = 33,
	PKG_NAME_UI_StoryLoad                              = 34,
	PKG_NAME_UI_NetworkTopMenu                         = 35,
	PKG_NAME_UI_END                                    = 36
};

// Enum REDGame.REDGameCommon_Define.UE_BGM_ID
enum class EUE_BGM_ID : uint8_t
{
	UE_BGM_ID_INVALID                                  = 0,
	UE_BGM_ID_AUTO                                     = 1,
	UE_BGM_ID_RANDOM                                   = 2,
	UE_BGM_ID_SOL                                      = 3,
	UE_BGM_ID_KYK                                      = 4,
	UE_BGM_ID_MAY                                      = 5,
	UE_BGM_ID_MLL                                      = 6,
	UE_BGM_ID_ZAT                                      = 7,
	UE_BGM_ID_POT                                      = 8,
	UE_BGM_ID_CHP                                      = 9,
	UE_BGM_ID_FAU                                      = 10,
	UE_BGM_ID_AXL                                      = 11,
	UE_BGM_ID_VEN                                      = 12,
	UE_BGM_ID_SLY                                      = 13,
	UE_BGM_ID_INO                                      = 14,
	UE_BGM_ID_BED                                      = 15,
	UE_BGM_ID_RAM                                      = 16,
	UE_BGM_ID_SOL_VS_KYK                               = 17,
	UE_BGM_ID_MLL_VS_ZAT                               = 18,
	UE_BGM_ID_SAME                                     = 19,
	UE_BGM_ID_ASSASSIN                                 = 20,
	UE_BGM_ID_BABYLONE                                 = 21,
	UE_BGM_ID_HEIJI1                                   = 22,
	UE_BGM_ID_HEIJI2                                   = 23,
	UE_BGM_ID_INTERLUDE                                = 24,
	UE_BGM_ID_INTRODUCTION                             = 25,
	UE_BGM_ID_KINCHO                                   = 26,
	UE_BGM_ID_RAMENTRY                                 = 27,
	UE_BGM_ID_YASURAGI                                 = 28,
	UE_BGM_ID_SIN                                      = 29,
	UE_BGM_ID_ELP                                      = 30,
	UE_BGM_ID_LEO                                      = 31,
	UE_BGM_ID_CSOP                                     = 32,
	UE_BGM_ID_CSINSERT                                 = 33,
	UE_BGM_ID_CSEND                                    = 34,
	UE_BGM_ID_KYK_VS_SIN                               = 35,
	UE_BGM_ID_CHALLENGE_MISSION                        = 36,
	UE_BGM_ID_JHN                                      = 37,
	UE_BGM_ID_JKO                                      = 38,
	UE_BGM_ID_JAM                                      = 39,
	UE_BGM_ID_BOSS_AC2                                 = 40,
	UE_BGM_ID_KUM                                      = 41,
	UE_BGM_ID_RVN                                      = 42,
	UE_BGM_ID_DZY                                      = 43,
	UE_BGM_ID_SOL_GG2                                  = 44,
	UE_BGM_ID_KYK_GGXX                                 = 45,
	UE_BGM_ID_MAY_GGXX                                 = 46,
	UE_BGM_ID_MLL_GGXX                                 = 47,
	UE_BGM_ID_CHP_GGXX                                 = 48,
	UE_BGM_ID_VEN_GGXX                                 = 49,
	UE_BGM_ID_POT_GGXX                                 = 50,
	UE_BGM_ID_AXL_GGXX                                 = 51,
	UE_BGM_ID_FAU_GGXX                                 = 52,
	UE_BGM_ID_INO_GGXX                                 = 53,
	UE_BGM_ID_SLY_GGXX                                 = 54,
	UE_BGM_ID_RAM_GG2                                  = 55,
	UE_BGM_ID_ZAT_GGXX                                 = 56,
	UE_BGM_ID_SIN_GG2                                  = 57,
	UE_BGM_ID_ELP_GG2                                  = 58,
	UE_BGM_ID_SOL_VS_KYK_GGXX                          = 59,
	UE_BGM_ID_SOL_VS_KYK_GG2                           = 60,
	UE_BGM_ID_ASSASSIN_GGXX                            = 61,
	UE_BGM_ID_ZAT_VS_MLL_GGXX                          = 62,
	UE_BGM_ID_SAMECHR_GG2                              = 63,
	UE_BGM_ID_JHN_GGXX                                 = 64,
	UE_BGM_ID_JAM_GGXX                                 = 65,
	UE_BGM_ID_DZY_GGXX                                 = 66,
	UE_BGM_ID_AXL_GGXXATP                              = 67,
	UE_BGM_ID_ZAT_GG                                   = 68,
	UE_BGM_ID_MAY_GGATP                                = 69,
	UE_BGM_ID_INO_GGXX2                                = 70,
	UE_BGM_ID_SOLvsKYK_GGATP                           = 71,
	UE_BGM_ID_SOLvsKYK_GGXHRT                          = 72,
	UE_BGM_ID_SAMECHR_GGXHRT                           = 73,
	UE_BGM_ID_SOL_KYK_INO_ISUKA                        = 74,
	UE_BGM_ID_AXL_BRI_ISUKA                            = 75,
	UE_BGM_ID_SLY_POT_ISUKA                            = 76,
	UE_BGM_ID_ANJ_BAI_CHP_ISUKA                        = 77,
	UE_BGM_ID_MLL_VEN_ISUKA                            = 78,
	UE_BGM_ID_MAY_JHN_DZY_ISUKA                        = 79,
	UE_BGM_ID_FAU_ZAP_ISUKA                            = 80,
	UE_BGM_ID_JAM_ISUKA                                = 81,
	UE_BGM_ID_ZAT_TES_ISUKA                            = 82,
	UE_BGM_ID_SAMECHARA_GGXX                           = 83,
	UE_BGM_ID_RVN_GG2                                  = 84,
	UE_BGM_ID_BOSS_AC2_SHOP                            = 85,
	UE_BGM_ID_AC_OP                                    = 86,
	UE_BGM_ID_CSOP_SHOP                                = 87,
	UE_BGM_ID_CSINSERT_SHOP                            = 88,
	UE_BGM_ID_AC2_OP                                   = 89,
	UE_BGM_ID_CS2_OP                                   = 90,
	UE_BGM_ID_CS2_INSERT1                              = 91,
	UE_BGM_ID_CS2_INSERT2                              = 92,
	UE_BGM_ID_AC2_BOSS_Vocal                           = 93,
	UE_BGM_ID_SLOT_OP                                  = 94,
	UE_BGM_ID_SLOT_SHISETSU1                           = 95,
	UE_BGM_ID_SLOT_SHISETSU2                           = 96,
	UE_BGM_ID_ARC_EVENT                                = 97,
	UE_BGM_ID_BKN                                      = 98,
	UE_BGM_ID_ANS                                      = 99,
	UE_BGM_ID_CHARA_RESERVE03                          = 100,
	UE_BGM_ID_CHARA_RESERVE04                          = 101,
	UE_BGM_ID_CHARA_RESERVE05                          = 102,
	UE_BGM_ID_CHARA_RESERVE06                          = 103,
	UE_BGM_ID_CHARA_RESERVE07                          = 104,
	UE_BGM_ID_CHARA_RESERVE08                          = 105,
	UE_BGM_ID_CHARA_RESERVE09                          = 106,
	UE_BGM_ID_CHARA_RESERVE10                          = 107,
	UE_BGM_ID_CHARA_RESERVE11                          = 108,
	UE_BGM_ID_CHARA_RESERVE12                          = 109,
	UE_BGM_ID_CHARA_RESERVE13                          = 110,
	UE_BGM_ID_CHARA_RESERVE14                          = 111,
	UE_BGM_ID_CHARA_RESERVE15                          = 112,
	UE_BGM_ID_CHARA_RESERVE16                          = 113,
	UE_BGM_ID_BKN_GGXX                                 = 114,
	UE_BGM_ID_REV2_OP                                  = 115,
	__UE_BGM_ID_END__                                  = 116,
	UE_BGM_ID_END                                      = 117
};

// Enum REDGame.REDGameCommon_Define.UE_SCENE_ID
enum class EUE_SCENE_ID : uint8_t
{
	UE_SCENE_ID_DEBUGMENU                              = 0,
	UE_SCENE_ID_DEBUG_CHARA_SELECT                     = 1,
	UE_SCENE_ID_BATTLE                                 = 2,
	UE_SCENE_ID_TITLE                                  = 3,
	UE_SCENE_ID_CHARA_SELECT                           = 4,
	UE_SCENE_ID_CHARA_INTRO                            = 5,
	UE_SCENE_ID_STAGE_INTRO                            = 6,
	UE_SCENE_ID_CONTINUE                               = 7,
	UE_SCENE_ID_GAMEOVER                               = 8,
	UE_SCENE_ID_TESTMODE                               = 9,
	UE_SCENE_ID_BRIEFING                               = 10,
	UE_SCENE_ID_INTERLUDE_DRAMA                        = 11,
	UE_SCENE_ID_RANKING                                = 12,
	UE_SCENE_ID_NEWS                                   = 13,
	UE_SCENE_ID_BATTLE_DIRECT                          = 14,
	UE_SCENE_ID_ENDING                                 = 15,
	UE_SCENE_ID_OPENING_DRAMA                          = 16,
	UE_SCENE_ID_NETWORK_MENU                           = 17,
	UE_SCENE_ID_STORY_TOP                              = 18,
	UE_SCENE_ID_STORY_MAIN                             = 19,
	UE_SCENE_ID_DEBUGMAINMENU                          = 20,
	UE_SCENE_ID_MAINMENU                               = 21,
	UE_SCENE_ID_GALLERY                                = 22,
	UE_SCENE_ID_LIBRARY                                = 23,
	UE_SCENE_ID_REPLAY_MENU                            = 24,
	UE_SCENE_ID_LOBBY                                  = 25,
	UE_SCENE_ID_FISHING                                = 26,
	UE_SCENE_ID_ROOM                                   = 27,
	UE_SCENE_ID_DIGITALFIGURE                          = 28,
	UE_SCENE_ID_STORY_STAFFROLL                        = 29,
	UE_SCENE_ID_INTERLUDE_TO_BATTLE                    = 30,
	UE_SCENE_ID_INVALID                                = 31,
	UE_SCENE_ID_END                                    = 32
};

// Enum REDGame.REDGameCommon_Define.INTLUDE_DRAMA_TYPE
enum class EINTLUDE_DRAMA_TYPE : uint8_t
{
	INTD_TYPE_NONE                                     = 0,
	INTD_TYPE_A                                        = 1,
	INTD_TYPE_B                                        = 2,
	INTD_TYPE_C                                        = 3,
	INTD_TYPE_D                                        = 4,
	INTD_TYPE_E                                        = 5,
	INTD_TYPE_F                                        = 6,
	INTD_TYPE_END                                      = 7
};

// Enum REDGame.REDGameCommon_Define.EMAINMENU_STARTUP_SCENE
enum class EMAINMENU_STARTUP_SCENE : uint8_t
{
	MAINMENU_STARTUP_NORMAL                            = 0,
	MAINMENU_STARTUP_NETWORK_ROOM                      = 1,
	MAINMENU_STARTUP_NETWORK_LOBBY                     = 2,
	MAINMENU_STARTUP_NETWORK_WELCOME                   = 3,
	MAINMENU_STARTUP_NETWORK_FROM_INVITE               = 4,
	MAINMENU_STARTUP_WEB_LINK                          = 5,
	MAINMENU_STARTUP_STORE_LINK                        = 6,
	MAINMENU_STARTUP_TOURNAMENT_LOBBY                  = 7,
	MAINMENU_STARTUP_END                               = 8
};

// Enum REDGame.REDGameCommon_Define.ENETWORK_CHARASEL_RETURN_SCENE
enum class ENETWORK_CHARASEL_RETURN_SCENE : uint8_t
{
	NETWORK_CHARASEL_RETURN_SCENE_WELCOME              = 0,
	NETWORK_CHARASEL_RETURN_SCENE_ROOM                 = 1,
	NETWORK_CHARASEL_RETURN_SCENE_LOBBY                = 2,
	NETWORK_CHARASEL_RETURN_SCENE_LOBBY_RANKMATCH      = 3,
	NETWORK_CHARASEL_RETURN_SCENE_LOBBY_PLAYERMATCH    = 4,
	NETWORK_CHARASEL_RETURN_SCENE_TOURNAMENT_LOBBY     = 5,
	NETWORK_CHARASEL_RETURN_SCENE_MAINMENU             = 6,
	NETWORK_CHARASEL_RETURN_SCENE_MAINMENU_RANKMATCH   = 7,
	NETWORK_CHARASEL_RETURN_SCENE_MAINMENU_PLAYERMATCH = 8,
	NETWORK_CHARASEL_RETURN_SCENE_MAINMENU_RANKMATCH2  = 9,
	NETWORK_CHARASEL_RETURN_SCENE_MAINMENU_PLAYERMATCH2 = 10,
	NETWORK_CHARASEL_RETURN_SCENE_END                  = 11
};

// Enum REDGame.REDGameCommon_Define.ENETWORK_BATTLE_MODE
enum class ENETWORK_BATTLE_MODE : uint8_t
{
	NETWORK_BATTLE_MODE_NORMAL                         = 0,
	NETWORK_BATTLE_MODE_MOM                            = 1,
	NETWORK_BATTLE_MODE_TRAINING                       = 2,
	NETWORK_BATTLE_MODE_END                            = 3
};

// Enum REDGame.REDGameCommon_Define.ESTATIC_TEXTURE_VER
enum class ESTATIC_TEXTURE_VER : uint8_t
{
	STATIC_TEXTURE_VER_REV1                            = 0,
	STATIC_TEXTURE_VER_REV2                            = 1,
	STATIC_TEXTURE_VER_END                             = 2
};

// Enum REDGame.REDGameCommon_Define.UE_BG_ID
enum class EUE_BG_ID : uint8_t
{
	UE_BGID_INVALID                                    = 0,
	UE_BGID_AUTO                                       = 1,
	UE_BGID_RANDOM                                     = 2,
	UE_BGID_TEST                                       = 3,
	UE_BGID_TRAIN                                      = 4,
	UE_BGID_TRAIN2                                     = 5,
	UE_BGID_LOBBY                                      = 6,
	UE_BGID_OPERA                                      = 7,
	UE_BGID_MANSION                                    = 8,
	UE_BGID_NEWYORK                                    = 9,
	UE_BGID_SHIP                                       = 10,
	UE_BGID_WITCH                                      = 11,
	UE_BGID_ILLYRIA                                    = 12,
	UE_BGID_BABYLONE                                   = 13,
	UE_BGID_ZEPP                                       = 14,
	UE_BGID_BEDMAN                                     = 15,
	UE_BGID_DRAGON                                     = 16,
	UE_BGID_JAPAN                                      = 17,
	UE_BGID_LAST                                       = 18,
	UE_BGID_DRAMA_BATTLE                               = 19,
	UE_BGID_ARENA                                      = 20,
	UE_BGID_RUIN                                       = 21,
	UE_BGID_GATE                                       = 22,
	UE_BGID_TACTICS                                    = 23,
	UE_BGID_BEACH                                      = 24,
	UE_BGID_PARK                                       = 25,
	UE_BGID_HARP                                       = 26,
	UE_BGID_KOREA                                      = 27,
	UE_BGID_RIVER                                      = 28,
	__UE_BGID_END__                                    = 29,
	UE_BG_ID_END                                       = 30
};

// Enum REDGame.REDGameCommon_Define.UE_GAME_MODE
enum class EUE_GAME_MODE : uint8_t
{
	UE_GAME_MODE_DEBUG_BATTLE                          = 0,
	UE_GAME_MODE_ADVERTISE                             = 1,
	UE_GAME_MODE_ARCADE                                = 2,
	UE_GAME_MODE_MOM                                   = 3,
	UE_GAME_MODE_SPARRING                              = 4,
	UE_GAME_MODE_VERSUS                                = 5,
	UE_GAME_MODE_TRAINING                              = 6,
	UE_GAME_MODE_RANNYU_VERSUS                         = 7,
	UE_GAME_MODE_EVENT                                 = 8,
	UE_GAME_MODE_STORY                                 = 9,
	UE_GAME_MODE_DEGITALFIGURE                         = 10,
	UE_GAME_MODE_MAINMENU                              = 11,
	UE_GAME_MODE_TUTORIAL                              = 12,
	UE_GAME_MODE_CHALLENGE                             = 13,
	UE_GAME_MODE_KENTEI                                = 14,
	UE_GAME_MODE_GALLERY                               = 15,
	UE_GAME_MODE_NETWORK                               = 16,
	UE_GAME_MODE_REPLAY                                = 17,
	UE_GAME_MODE_FISHING                               = 18,
	UE_GAME_MODE_UNDECIDED                             = 19,
	UE_GAME_MODE_INVALID                               = 20,
	UE_GAME_MODE_END                                   = 21
};

// Enum REDGame.REDGameCommon_Define.UE_PLAYERSTATE
enum class EUE_PLAYERSTATE : uint8_t
{
	UE_PLAYERSTATE_STARTWAIT                           = 0,
	UE_PLAYERSTATE_PLAYING                             = 1,
	UE_PLAYERSTATE_CONTINUE                            = 2,
	UE_PLAYERSTATE_SYSTEMCONTINUE                      = 3,
	UE_PLAYERSTATE_NAMEENTRY                           = 4,
	UE_PLAYERSTATE_GAMEOVER                            = 5,
	UE_PLAYERSTATE_END                                 = 6
};

// Enum REDGame.REDGameCommon_Define.UE_PLAYER_ID
enum class EUE_PLAYER_ID : uint8_t
{
	UE_PLAYER_ID_1P                                    = 0,
	UE_PLAYER_ID_2P                                    = 1,
	UE_PLAYER_ID_COMMON                                = 2,
	UE_PLAYER_ID_END_WITH_COMMON                       = 3,
	UE_PLAYER_ID_INVALID                               = 4,
	UE_PLAYER_ID_END                                   = 5
};

// Enum REDGame.REDGfxMoviePlayer_Menu_Base.ECMN_BG_COLOR_TYPE
enum class ECMN_BG_COLOR_TYPE : uint8_t
{
	CMN_BG_COLOR_INIT                                  = 0,
	CMN_BG_COLOR_RED                                   = 1,
	CMN_BG_COLOR_BLUE                                  = 2,
	CMN_BG_COLOR_GREEN                                 = 3,
	CMN_BG_COLOR_LIGHTBLUE                             = 4,
	CMN_BG_COLOR_ORANGE                                = 5,
	CMN_BG_COLOR_PURPLE                                = 6,
	CMN_BG_COLOR_YELLOW                                = 7,
	CMN_BG_COLOR_END                                   = 8
};

// Enum REDGame.REDAnimNodeLookAtBattle.EAnimLookAtPattern
enum class EAnimLookAtPattern : uint8_t
{
	AnimLookAtPattern_Default                          = 0,
	AnimLookAtPattern_Winner                           = 1,
	AnimLookAtPattern_Loser                            = 2,
	AnimLookAtPattern_Disable                          = 3,
	AnimLookAtPattern_Stay                             = 4,
	AnimLookAtPattern_END                              = 5
};

// Enum REDGame.REDControlModule_Battle.ECameraPattern
enum class ECameraPattern : uint8_t
{
	CameraPattern_ChaseZ                               = 0,
	CameraPattern_Fixed                                = 1,
	CameraPattern_END                                  = 2
};

// Enum REDGame.REDPawnMaterials.EMaterialCategory
enum class EMaterialCategory : uint8_t
{
	MC_Base                                            = 0,
	MC_Outline                                         = 1,
	MC_Shadow                                          = 2,
	MC_Decal                                           = 3,
	MC_Specular                                        = 4,
	MC_UniqueA                                         = 5,
	MC_UniqueB                                         = 6,
	MC_UniqueC                                         = 7,
	MC_DmgDecalA                                       = 8,
	MC_DmgDecalB                                       = 9,
	MC_Max                                             = 10
};

// Enum REDGame.REDPawn.EPlayerExGaugeMode
enum class EPlayerExGaugeMode : uint8_t
{
	PEXGM_Gauge                                        = 0,
	PEXGM_Digit                                        = 1,
	PEXGM_Icon                                         = 2,
	PEXGM_Icon_Vertical                                = 3,
	PEXGM_END                                          = 4
};

// Enum REDGame.REDPawn.EModelDirMode
enum class EModelDirMode : uint8_t
{
	ModelDirAuto                                       = 0,
	ModelDirForceLeft                                  = 1,
	ModelDirForceRight                                 = 2,
	EModelDirMode_END                                  = 3
};

// Enum REDGame.REDEasyCharaSelectDefine.ECHARA_ID
enum class ECHARA_ID : uint8_t
{
	CHARA_ID_SOL                                       = 0,
	CHARA_ID_KYK                                       = 1,
	CHARA_ID_MAY                                       = 2,
	CHARA_ID_MLL                                       = 3,
	CHARA_ID_ZAT                                       = 4,
	CHARA_ID_POT                                       = 5,
	CHARA_ID_CHP                                       = 6,
	CHARA_ID_FAU                                       = 7,
	CHARA_ID_AXL                                       = 8,
	CHARA_ID_VEN                                       = 9,
	CHARA_ID_SLY                                       = 10,
	CHARA_ID_INO                                       = 11,
	CHARA_ID_BED                                       = 12,
	CHARA_ID_RAM                                       = 13,
	CHARA_ID_SIN                                       = 14,
	CHARA_ID_ELP                                       = 15,
	CHARA_ID_LEO                                       = 16,
	CHARA_ID_JHN                                       = 17,
	CHARA_ID_JKO                                       = 18,
	CHARA_ID_JAM                                       = 19,
	CHARA_ID_KUM                                       = 20,
	CHARA_ID_RVN                                       = 21,
	CHARA_ID_DZY                                       = 22,
	CHARA_ID_BKN                                       = 23,
	CHARA_ID_ANS                                       = 24,
	CHARA_ID_END                                       = 25
};

// Enum REDGame.REDGameCommon_PlayerInfo.BATTLE_DRAMA_ID
enum class EBATTLE_DRAMA_ID : uint8_t
{
	BATTLE_DRAMA_ID_INVALID                            = 0,
	BATTLE_DRAMA_ID_OPENING                            = 1,
	BATTLE_DRAMA_ID_ENDING                             = 2,
	BATTLE_DRAMA_ID_INTERLUDE                          = 3,
	BATTLE_DRAMA_ID_1A                                 = 4,
	BATTLE_DRAMA_ID_1B                                 = 5,
	BATTLE_DRAMA_ID_2A                                 = 6,
	BATTLE_DRAMA_ID_2B                                 = 7,
	BATTLE_DRAMA_ID_3A                                 = 8,
	BATTLE_DRAMA_ID_3B                                 = 9,
	BATTLE_DRAMA_ID_4A                                 = 10,
	BATTLE_DRAMA_ID_4B                                 = 11,
	BATTLE_DRAMA_ID_5A                                 = 12,
	BATTLE_DRAMA_ID_5B                                 = 13,
	BATTLE_DRAMA_ID_6A                                 = 14,
	BATTLE_DRAMA_ID_6B                                 = 15,
	BATTLE_DRAMA_ID_7A                                 = 16,
	BATTLE_DRAMA_ID_7B                                 = 17,
	BATTLE_DRAMA_ID_8A                                 = 18,
	BATTLE_DRAMA_ID_8B                                 = 19,
	BATTLE_DRAMA_ID_END                                = 20
};

// Enum REDGame.REDGameInfo_Battle.BGM_PRIORITY
enum class EBGM_PRIORITY : uint8_t
{
	BGM_PRI_LOW                                        = 0,
	BGM_PRI_BATTLE                                     = 1,
	BGM_PRI_RESULT                                     = 2,
	BGM_PRI_ICHIGEKI                                   = 3,
	BGM_PRI_END                                        = 4
};

// Enum REDGame.REDGameInfo_Battle.EBATTLE_STATE
enum class EBATTLE_STATE : uint8_t
{
	BATTLE_STATE_BATTLE                                = 0,
	BATTLE_STATE_NETWORK_ERROR                         = 1,
	BATTLE_STATE_NETWORK_ERROR_WAIT                    = 2,
	BATTLE_STATE_END                                   = 3
};

// Enum REDGame.REDGameInfo_LobbyBase.ELOBBY_EVENT
enum class ELOBBY_EVENT : uint8_t
{
	LOBBY_EVENT_NONE                                   = 0,
	LOBBY_EVENT_KYOUTAI1P                              = 1,
	LOBBY_EVENT_KYOUTAI2P                              = 2,
	LOBBY_EVENT_LEAVE_LOBBY                            = 3,
	LOBBY_EVENT_FISHING                                = 4,
	LOBBY_EVENT_ROOM_KYOUTAI1P                         = 5,
	LOBBY_EVENT_ROOM_KYOUTAI2P                         = 6,
	LOBBY_EVENT_ROOM_WAITING_LINE                      = 7,
	LOBBY_EVENT_OTHER_PLAYER                           = 8,
	LOBBY_EVENT_LEAVE_ROOM                             = 9,
	LOBBY_EVENT_TRAINING_MODE                          = 10,
	LOBBY_EVENT_RANKED_MATCH                           = 11,
	LOBBY_EVENT_PLAYER_MATCH                           = 12,
	LOBBY_EVENT_INFORMATION                            = 13,
	LOBBY_EVENT_CHIMAKI                                = 14,
	LOBBY_EVENT_LEAVE_FISHING                          = 15,
	LOBBY_EVENT_TREASURE_BOX                           = 16,
	LOBBY_EVENT_CAFE_CHAIR_SIT                         = 17,
	LOBBY_EVENT_END                                    = 18
};

// Enum REDGame.REDGameStatsBase.EStatsType
enum class EStatsType : uint8_t
{
	ESRED_Count                                        = 0,
	ESRED_BitCount                                     = 1,
	ESRED_END                                          = 2
};

// Enum REDGame.REDGameStats.EREDGameAchievements
enum class EREDGameAchievements : uint8_t
{
	Achievement                                        = 0,
	Achievement01                                      = 1,
	Achievement02                                      = 2,
	Achievement03                                      = 3,
	Achievement04                                      = 4,
	Achievement05                                      = 5,
	Achievement06                                      = 6,
	Achievement07                                      = 7,
	Achievement08                                      = 8,
	Achievement09                                      = 9,
	Achievement10                                      = 10,
	Achievement11                                      = 11,
	Achievement12                                      = 12,
	Achievement13                                      = 13,
	Achievement14                                      = 14,
	Achievement15                                      = 15,
	Achievement16                                      = 16,
	Achievement17                                      = 17,
	Achievement18                                      = 18,
	Achievement19                                      = 19,
	Achievement20                                      = 20,
	Achievement21                                      = 21,
	Achievement22                                      = 22,
	Achievement23                                      = 23,
	Achievement24                                      = 24,
	Achievement25                                      = 25,
	Achievement26                                      = 26,
	Achievement27                                      = 27,
	Achievement28                                      = 28,
	Achievement29                                      = 29,
	Achievement30                                      = 30,
	Achievement31                                      = 31,
	Achievement32                                      = 32,
	Achievement33                                      = 33,
	Achievement34                                      = 34,
	Achievement35                                      = 35,
	Achievement36                                      = 36,
	Achievement37                                      = 37,
	Achievement38                                      = 38,
	Achievement39                                      = 39,
	Achievement40                                      = 40,
	Achievement41                                      = 41,
	Achievement42                                      = 42,
	Achievement43                                      = 43,
	Achievement44                                      = 44,
	Achievement45                                      = 45,
	Achievement46                                      = 46,
	Achievement47                                      = 47,
	Achievement_Max                                    = 48
};

// Enum REDGame.REDGameStats.EREDGameStats
enum class EREDGameStats : uint8_t
{
	Stats                                              = 0,
	Stats01                                            = 1,
	Stats02                                            = 2,
	Stats03                                            = 3,
	Stats04                                            = 4,
	Stats05                                            = 5,
	Stats06                                            = 6,
	Stats07                                            = 7,
	Stats08                                            = 8,
	Stats09                                            = 9,
	Stats10                                            = 10,
	Stats11                                            = 11,
	Stats12                                            = 12,
	Stats13                                            = 13,
	Stats14                                            = 14,
	Stats15                                            = 15,
	Stats16                                            = 16,
	Stats17                                            = 17,
	Stats18                                            = 18,
	Stats19                                            = 19,
	Stats20                                            = 20,
	Stats21                                            = 21,
	Stats22                                            = 22,
	Stats23                                            = 23,
	Stats24                                            = 24,
	Stats25                                            = 25,
	Stats26                                            = 26,
	Stats27                                            = 27,
	Stats28                                            = 28,
	Stats29                                            = 29,
	Stats30                                            = 30,
	Stats31                                            = 31,
	Stats32                                            = 32,
	Stats33                                            = 33,
	Stats34                                            = 34,
	Stats35                                            = 35,
	Stats36                                            = 36,
	Stats37                                            = 37,
	Stats38                                            = 38,
	Stats39                                            = 39,
	Stats40                                            = 40,
	Stats41                                            = 41,
	Stats42                                            = 42,
	Stats43                                            = 43,
	Stats44                                            = 44,
	Stats45                                            = 45,
	Stats46                                            = 46,
	Stats47                                            = 47,
	Stats_Max                                          = 48
};

// Enum REDGame.REDGfxMovieManager_Network.ENETMANAGER_STARTMENU
enum class ENETMANAGER_STARTMENU : uint8_t
{
	NETMANAGER_STARTMENU_LOBBY                         = 0,
	NETMANAGER_STARTMENU_ROOM                          = 1,
	NETMANAGER_STARTMENU_WELCOME                       = 2,
	NETMANAGER_STARTMENU_FROM_INVITE                   = 3,
	NETMANAGER_STARTMENU_TOURNAMENT_LOBBY              = 4,
	NETMANAGER_STARTMENU_END                           = 5
};

// Enum REDGame.REDGfxMovieManager_Network.ENETMANAGER_STATE
enum class ENETMANAGER_STATE : uint8_t
{
	NETMANAGER_STATE_IDLE                              = 0,
	NETMANAGER_STATE_MAIN                              = 1,
	NETMANAGER_STATE_ERROR_WAIT                        = 2,
	NETMANAGER_STATE_ERROR_WAIT2                       = 3,
	NETMANAGER_STATE_ERROR                             = 4,
	NETMANAGER_STATE_END                               = 5,
	NETMANAGER_STATE_END01                             = 6
};

// Enum REDGame.REDGfxMovieManager_NetworkForMainmenu.ENETMANAGER_MM_STATE
enum class ENETMANAGER_MM_STATE : uint8_t
{
	NETMANAGER_MM_STATE_IDLE                           = 0,
	NETMANAGER_MM_STATE_INIT                           = 1,
	NETMANAGER_MM_STATE_WELCOME                        = 2,
	NETMANAGER_MM_STATE_MAIN                           = 3,
	NETMANAGER_MM_STATE_RANK_MATCH_SEARCH              = 4,
	NETMANAGER_MM_STATE_PLAYER_MATCH_SEARCH            = 5,
	NETMANAGER_MM_STATE_RANKING                        = 6,
	NETMANAGER_MM_STATE_ERROR_WAIT                     = 7,
	NETMANAGER_MM_STATE_ERROR_WAIT2                    = 8,
	NETMANAGER_MM_STATE_ERROR                          = 9,
	NETMANAGER_MM_STATE_NEXT_SCENE                     = 10,
	NETMANAGER_MM_STATE_END                            = 11
};

// Enum REDGame.REDGfxMoviePlayer_BattleDownside.ETENSION_STATE
enum class ETENSION_STATE : uint8_t
{
	TENSION_STATE_NONE                                 = 0,
	TENSION_STATE_NORMAL                               = 1,
	TENSION_STATE_RED                                  = 2,
	TENSION_STATE_GOLD                                 = 3,
	TENSION_STATE_BROKEN                               = 4,
	TENSION_STATE_GOLDREADY                            = 5,
	TENSION_STATE_END                                  = 6
};

// Enum REDGame.REDGfxMoviePlayer_BattleResultWindow.ERESULT_WINDOW_TYPE
enum class ERESULT_WINDOW_TYPE : uint8_t
{
	RESULT_WINDOW_TYPE_MAIN                            = 0,
	RESULT_WINDOW_TYPE_MEDAL                           = 1,
	RESULT_WINDOW_TYPE_QUEST                           = 2,
	RESULT_WINDOW_TYPE_END                             = 3
};

// Enum REDGame.REDGfxMoviePlayer_MenuCharaIntro.CHARA_INTRO_STATE
enum class ECHARA_INTRO_STATE : uint8_t
{
	CHARA_INTRO_STATE_MAIN                             = 0,
	CHARA_INTRO_STATE_END                              = 1
};

// Enum REDGame.REDGfxMoviePlayer_MenuCharaSelectBase.ECHARASEL_MOMHELP_FLAG
enum class ECHARASEL_MOMHELP_FLAG : uint8_t
{
	CHARASEL_MOMHELP_FLAG_PRESET                       = 0,
	CHARASEL_MOMHELP_FLAG_ENEMY_SELECT                 = 1,
	CHARASEL_MOMHELP_FLAG_WANTED                       = 2,
	CHARASEL_MOMHELP_FLAG_CLASS                        = 3,
	CHARASEL_MOMHELP_FLAG_END                          = 4
};

// Enum REDGame.REDGfxMoviePlayer_MenuCharaSelectBase.ECHARASEL_STATE
enum class ECHARASEL_STATE : uint8_t
{
	CHARASEL_STATE_NULL                                = 0,
	CHARASEL_STATE_STARTDEMO_END                       = 1,
	CHARASEL_STATE_END                                 = 2
};

// Enum REDGame.REDGfxMoviePlayer_MenuCharaSelect.ECharaPictureState
enum class ECharaPictureState : uint8_t
{
	CharaPictureState_Null                             = 0,
	CharaPictureState_Normal                           = 1,
	CharaPictureState_Hide                             = 2,
	CharaPictureState_Decide                           = 3,
	CharaPictureState_Fade                             = 4,
	CharaPictureState_END                              = 5
};

// Enum REDGame.REDGfxMoviePlayer_MenuCharaSelect_AC20.ECharaPictureState
enum class ECharaPictureState_0 : uint8_t
{
	CharaPictureState_Null                             = 0,
	CharaPictureState_Normal                           = 1,
	CharaPictureState_Hide                             = 2,
	CharaPictureState_Decide                           = 3,
	CharaPictureState_Fade                             = 4,
	CharaPictureState_END                              = 5
};

// Enum REDGame.REDGfxMoviePlayer_MenuContinue.CONT_STATE
enum class ECONT_STATE : uint8_t
{
	CONT_STATE_IDLE                                    = 0,
	CONT_STATE_CONTINUE_START                          = 1,
	CONT_STATE_CONTINUE                                = 2,
	CONT_STATE_CONTINUE_END                            = 3,
	CONT_STATE_END                                     = 4
};

// Enum REDGame.REDGfxMoviePlayer_MenuGallery.EGALLERY_STATE
enum class EGALLERY_STATE : uint8_t
{
	GALLERY_STATE_INIT                                 = 0,
	GALLERY_STATE_IDLE                                 = 1,
	GALLERY_STATE_VIEW_LOAD                            = 2,
	GALLERY_STATE_VIEW                                 = 3,
	GALLERY_STATE_BGM_LOAD                             = 4,
	GALLERY_STATE_BGM_PLAY                             = 5,
	GALLERY_STATE_VOICE_LOAD                           = 6,
	GALLERY_STATE_VOICE_PLAY                           = 7,
	GALLERY_STATE_MOVIE                                = 8,
	GALLERY_STATE_IDLE_BACK                            = 9,
	GALLERY_STATE_END                                  = 10
};

// Enum REDGame.REDGfxMoviePlayer_MenuGallery.EGALLERY_CATEGORY
enum class EGALLERY_CATEGORY : uint8_t
{
	GALLERY_CATEGORY_ART                               = 0,
	GALLERY_CATEGORY_MOVIE                             = 1,
	GALLERY_CATEGORY_VOICE                             = 2,
	GALLERY_CATEGORY_SOUND                             = 3,
	GALLERY_CATEGORY_CHARA                             = 4,
	GALLERY_CATEGORY_NUM                               = 5,
	GALLERY_CATEGORY_END                               = 6
};

// Enum REDGame.REDGfxMoviePlayer_MenuGallery.EGALLERY_DECISION
enum class EGALLERY_DECISION : uint8_t
{
	GALLERY_DECISION_CGVIEW                            = 0,
	GALLERY_DECISION_BUY                               = 1,
	GALLERY_DECISION_MOVIE                             = 2,
	GALLERY_DECISION_STAFFROLL                         = 3,
	GALLERY_DECISION_ARCADE_OPED                       = 4,
	GALLERY_DECISION_BGMPLAY                           = 5,
	GALLERY_DECISION_VOICEPLAY                         = 6,
	GALLERY_DECISION_NON                               = 7,
	GALLERY_DECISION_END                               = 8
};

// Enum REDGame.REDGfxMoviePlayer_MenuInterlude.STAGE_INTERLUDE_STATE
enum class ESTAGE_INTERLUDE_STATE : uint8_t
{
	STAGE_INTERLUDE_CHARA_LOAD                         = 0,
	STAGE_INTERLUDE_WAIT_CHARA_LOAD                    = 1,
	STAGE_INTERLUDE_EXEC                               = 2,
	STAGE_INTERLUDE_ENDWAIT                            = 3,
	STAGE_INTERLUDE_END                                = 4,
	STAGE_INTERLUDE_END01                              = 5
};

// Enum REDGame.REDGfxMoviePlayer_MenuMainMenu.EMAINMENU_COLOR_TYPE
enum class EMAINMENU_COLOR_TYPE : uint8_t
{
	MAINMENU_COLOR_INIT                                = 0,
	MAINMENU_COLOR_RED                                 = 1,
	MAINMENU_COLOR_BLUE                                = 2,
	MAINMENU_COLOR_GREEN                               = 3,
	MAINMENU_COLOR_LIGHTBLUE                           = 4,
	MAINMENU_COLOR_ORANGE                              = 5,
	MAINMENU_COLOR_PURPLE                              = 6,
	MAINMENU_COLOR_YELLOW                              = 7,
	MAINMENU_COLOR_END                                 = 8
};

// Enum REDGame.REDGfxMoviePlayer_MenuMainMenu.EMAINMENU_POPUP_REQUEST
enum class EMAINMENU_POPUP_REQUEST : uint8_t
{
	MAINMENU_POPUP_TUTORIAL                            = 0,
	MAINMENU_POPUP_MISSION                             = 1,
	MAINMENU_POPUP_PROFILE                             = 2,
	MAINMENU_POPUP_AVATAR                              = 3,
	MAINMENU_POPUP_OPT_ROOT                            = 4,
	MAINMENU_POPUP_OPT_SYSTEM                          = 5,
	MAINMENU_POPUP_OPT_GAME                            = 6,
	MAINMENU_POPUP_OPT_DISPLAY                         = 7,
	MAINMENU_POPUP_OPT_BUTTON                          = 8,
	MAINMENU_POPUP_OPT_LANGUAGE                        = 9,
	MAINMENU_POPUP_WEB_LINK                            = 10,
	MAINMENU_POPUP_STORE_JUMP                          = 11,
	MAINMENU_POPUP_STORY_DISABLE                       = 12,
	MAINMENU_POPUP_NETWORK_DISABLE                     = 13,
	MAINMENU_POPUP_FIRST_BATTLE                        = 14,
	MAINMENU_POPUP_END                                 = 15
};

// Enum REDGame.REDGfxMoviePlayer_MenuMainMenu.EMAINMENU_GEAR_ROT_TYPE
enum class EMAINMENU_GEAR_ROT_TYPE : uint8_t
{
	MAINMENU_GEAR_ROT_INIT                             = 0,
	MAINMENU_GEAR_ROT_RIGHT                            = 1,
	MAINMENU_GEAR_ROT_LEFT                             = 2,
	MAINMENU_GEAR_ROT_END                              = 3
};

// Enum REDGame.REDGfxMoviePlayer_MenuMainMenu.EMAINMENU_CTRL_MOVE_TYPE
enum class EMAINMENU_CTRL_MOVE_TYPE : uint8_t
{
	MAINMENU_CTRL_MOVE_INIT                            = 0,
	MAINMENU_CTRL_MOVE_1P                              = 1,
	MAINMENU_CTRL_MOVE_2P                              = 2,
	MAINMENU_CTRL_MOVE_1P_BACK                         = 3,
	MAINMENU_CTRL_MOVE_2P_BACK                         = 4,
	MAINMENU_CTRL_MOVE_END                             = 5
};

// Enum REDGame.REDGfxMoviePlayer_MenuMainMenu.EMAINMENU_STATE
enum class EMAINMENU_STATE : uint8_t
{
	MAINMENU_STATE_INIT                                = 0,
	MAINMENU_STATE_NOTICE                              = 1,
	MAINMENU_STATE_IDLE                                = 2,
	MAINMENU_STATE_NEWS                                = 3,
	MAINMENU_STATE_BATTLE_CONFIG                       = 4,
	MAINMENU_STATE_ENTRYSELECT                         = 5,
	MAINMENU_STATE_NETWORK                             = 6,
	MAINMENU_STATE_STORY                               = 7,
	MAINMENU_STATE_STORY2                              = 8,
	MAINMENU_STATE_REPLAY                              = 9,
	MAINMENU_STATE_MOM                                 = 10,
	MAINMENU_STATE_TOURNAMENT                          = 11,
	MAINMENU_STATE_CLOSE                               = 12,
	MAINMENU_STATE_INVALID                             = 13,
	MAINMENU_STATE_EXIT                                = 14,
	MAINMENU_STATE_TUTORIAL                            = 15,
	MAINMENU_STATE_FIGURE                              = 16,
	MAINMENU_STATE_END                                 = 17
};

// Enum REDGame.REDGfxMoviePlayer_MenuMainMenu20.EMM_LEVEL_TYPE
enum class EMM_LEVEL_TYPE : uint8_t
{
	MM_LEVEL_TOP                                       = 0,
	MM_LEVEL_MIDDLE                                    = 1,
	MM_LEVEL_BOTTOM                                    = 2,
	MM_LEVEL_COMMON                                    = 3,
	MM_LEVEL_END                                       = 4
};

// Enum REDGame.REDGfxMoviePlayer_MenuMainMenu20.EMM_INDEX_TYPE
enum class EMM_INDEX_TYPE : uint8_t
{
	MM_INDEX_BATTLE                                    = 0,
	MM_INDEX_STORY                                     = 1,
	MM_INDEX_COLLECTION                                = 2,
	MM_INDEX_STORE                                     = 3,
	MM_INDEX_OPTION                                    = 4,
	MM_INDEX_ONLINE                                    = 5,
	MM_INDEX_ARCADE                                    = 6,
	MM_INDEX_DOJO                                      = 7,
	MM_INDEX_PLAY                                      = 8,
	MM_INDEX_WORLD                                     = 9,
	MM_INDEX_EDIT                                      = 10,
	MM_INDEX_REPLAY                                    = 11,
	MM_INDEX_GALLERY                                   = 12,
	MM_INDEX_FISHING                                   = 13,
	MM_INDEX_FIGURE                                    = 14,
	MM_INDEX_EPISODE                                   = 15,
	MM_INDEX_VERSUS                                    = 16,
	MM_INDEX_MOM                                       = 17,
	MM_INDEX_TUTORIAL                                  = 18,
	MM_INDEX_COMBO                                     = 19,
	MM_INDEX_MISSION                                   = 20,
	MM_INDEX_TRAINING                                  = 21,
	MM_INDEX_RCODE                                     = 22,
	MM_INDEX_AVATAR                                    = 23,
	MM_INDEX_END                                       = 24
};

// Enum REDGame.REDGfxMoviePlayer_MenuMainMenu20.EMM_SHORT_CUT_TYPE
enum class EMM_SHORT_CUT_TYPE : uint8_t
{
	EMM_SHORT_CUT_L                                    = 0,
	EMM_SHORT_CUT_R                                    = 1,
	EMM_SHORT_CUT_RETURN                               = 2,
	EMM_SHORT_CUT_NUM                                  = 3,
	EMM_SHORT_CUT_END                                  = 4
};

// Enum REDGame.REDGfxMoviePlayer_MenuMainMenu20.EMM_SC_ASSIGN_FLG
enum class EMM_SC_ASSIGN_FLG : uint8_t
{
	EMM_SC_ASSIGN_FALSE                                = 0,
	EMM_SC_ASSIGN_TRUE                                 = 1,
	EMM_SC_ASSIGN_END                                  = 2
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkInit.ENETINIT_STATE
enum class ENETINIT_STATE : uint8_t
{
	NETINIT_STATE_IDLE                                 = 0,
	NETINIT_STATE_PRE_WAIT                             = 1,
	NETINIT_STATE_SIGNIN                               = 2,
	NETINIT_STATE_INIT                                 = 3,
	NETINIT_STATE_INIT_WAIT                            = 4,
	NETINIT_STATE_BANNED_CHAT                          = 5,
	NETINIT_STATE_RCODE                                = 6,
	NETINIT_STATE_ERROR                                = 7,
	NETINIT_STATE_ERROR_WAIT                           = 8,
	NETINIT_STATE_END                                  = 9,
	NETINIT_STATE_END2                                 = 10,
	NETINIT_STATE_SEAL_NETWORK                         = 11,
	NETINIT_STATE_END01                                = 12
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkInvite.ENETINVITE_STATE
enum class ENETINVITE_STATE : uint8_t
{
	NETINVITE_STATE_VERSION_CHECK                      = 0,
	NETINVITE_STATE_REV1_TO_REV2                       = 1,
	NETINVITE_STATE_REV2_TO_REV1                       = 2,
	NETINVITE_STATE_MAIN                               = 3,
	NETINVITE_STATE_ERROR                              = 4,
	NETINVITE_STATE_ERROR_WAIT                         = 5,
	NETINVITE_STATE_NEXT_SCENE                         = 6,
	NETINVITE_STATE_END                                = 7,
	NETINVITE_STATE_END01                              = 8
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkLobby.ENETLOBBY_STATE
enum class ENETLOBBY_STATE : uint8_t
{
	NETLOBBY_STATE_IDLE                                = 0,
	NETLOBBY_STATE_MAIN                                = 1,
	NETLOBBY_STATE_LOBBYMENU_WAIT                      = 2,
	NETLOBBY_STATE_ROOM_CREATING                       = 3,
	NETLOBBY_STATE_LOBBYROOM_CREATING                  = 4,
	NETLOBBY_STATE_GOTO_ROOM                           = 5,
	NETLOBBY_STATE_ERROR_TO_MAIN                       = 6,
	NETLOBBY_STATE_ERROR_TO_LOBBYSELECT                = 7,
	NETLOBBY_STATE_LEAVE_CONFIRM                       = 8,
	NETLOBBY_STATE_LEAVE_WAIT                          = 9,
	NETLOBBY_STATE_LEAVE_WAIT2                         = 10,
	NETLOBBY_STATE_ENTRY_CANCEL_CONFIRM                = 11,
	NETLOBBY_STATE_ENTRY_CANCEL_WAIT                   = 12,
	NETLOBBY_STATE_LOBBYROOM_JOIN                      = 13,
	NETLOBBY_STATE_TOURNAMENT_GOTO_ROOM                = 14,
	NETLOBBY_STATE_TOURNAMENT_GOTO_ROOM2               = 15,
	NETLOBBY_STATE_LEAVE_FORCE                         = 16,
	NETLOBBY_STATE_LEAVE_FORCE_WAIT                    = 17,
	NETLOBBY_STATE_MAINMENU_INIT                       = 18,
	NETLOBBY_STATE_MAINMENU                            = 19,
	NETLOBBY_STATE_MAINMENU_END                        = 20,
	NETLOBBY_STATE_INFORMATION_INIT                    = 21,
	NETLOBBY_STATE_INFORMATION                         = 22,
	NETLOBBY_STATE_GOTOMODE                            = 23,
	NETLOBBY_STATE_END                                 = 24,
	NETLOBBY_STATE_END01                               = 25
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkLobbySelect.ECURSOR_TYPE
enum class ECURSOR_TYPE : uint8_t
{
	CUSROR_SERVER                                      = 0,
	CUSROR_WORLD                                       = 1,
	CUSROR_LOBBY                                       = 2,
	CUSROR_END                                         = 3
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkLobbySelect.ENETLOBBYSELECT_STATE
enum class ENETLOBBYSELECT_STATE : uint8_t
{
	NETLOBBYSELECT_STATE_IDLE                          = 0,
	NETLOBBYSELECT_STATE_SELECT_STATE                  = 1,
	NETLOBBYSELECT_STATE_PREV_LOBBY                    = 2,
	NETLOBBYSELECT_STATE_TO_LOBBY_SELECT               = 3,
	NETLOBBYSELECT_STATE_SERVER_INIT                   = 4,
	NETLOBBYSELECT_STATE_SERVER                        = 5,
	NETLOBBYSELECT_STATE_WORLD_INIT                    = 6,
	NETLOBBYSELECT_STATE_WORLD                         = 7,
	NETLOBBYSELECT_STATE_LOBBY_INIT                    = 8,
	NETLOBBYSELECT_STATE_LOBBY                         = 9,
	NETLOBBYSELECT_STATE_LOBBY_JOIN                    = 10,
	NETLOBBYSELECT_STATE_ERROR                         = 11,
	NETLOBBYSELECT_STATE_ERROR_WAIT                    = 12,
	NETLOBBYSELECT_STATE_RETURN_MAINMENU               = 13,
	NETLOBBYSELECT_STATE_END_WAIT                      = 14,
	NETLOBBYSELECT_STATE_END                           = 15,
	NETLOBBYSELECT_STATE_END01                         = 16
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkLobbySelect.EPREVLOBBY_ERROR
enum class EPREVLOBBY_ERROR : uint8_t
{
	PREVLOBBY_ERROR_NONE                               = 0,
	PREVLOBBY_ERROR_FATAL                              = 1,
	PREVLOBBY_ERROR_SERVERSELECT                       = 2,
	PREVLOBBY_ERROR_WORLDSELECT                        = 3,
	PREVLOBBY_ERROR_LOBBYSELECT                        = 4,
	PREVLOBBY_ERROR_END                                = 5
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkRankBoard.ENETRANKBOARD_STATE
enum class ENETRANKBOARD_STATE : uint8_t
{
	NETRANKBOARD_STATE_MAIN                            = 0,
	NETRANKBOARD_STATE_END                             = 1,
	NETRANKBOARD_STATE_END01                           = 2
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkRoom.ENETCONTACT_MENU_TYPE
enum class ENETCONTACT_MENU_TYPE : uint8_t
{
	NETCONTACT_MENU_PLAYER                             = 0,
	NETCONTACT_MENU_PLAYER_HOST                        = 1,
	NETCONTACT_MENU_PLAYER_MINE                        = 2,
	NETCONTACT_MENU_EMPTY_CHAIR                        = 3,
	NETCONTACT_MENU_EMPTY_CHAIR_SUB                    = 4,
	NETCONTACT_MENU_END                                = 5
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkRoom.ENETROOM_STATE
enum class ENETROOM_STATE : uint8_t
{
	NETROOM_STATE_IDLE                                 = 0,
	NETROOM_STATE_MAIN_WAIT                            = 1,
	NETROOM_STATE_MAIN                                 = 2,
	NETROOM_STATE_ROOMMENU_WAIT                        = 3,
	NETROOM_STATE_CONTACTMENU_WAIT                     = 4,
	NETROOM_STATE_BATTLEREADY_WAIT                     = 5,
	NETROOM_STATE_GOTO_BATTLE                          = 6,
	NETROOM_STATE_LEAVE_CONFIRM                        = 7,
	NETROOM_STATE_LEAVE_ROOM_WAIT                      = 8,
	NETROOM_STATE_ROOM_ERROR                           = 9,
	NETROOM_STATE_ROOM_ERROR_WAIT                      = 10,
	NETROOM_STATE_ROOM_ERROR_WAIT2                     = 11,
	NETROOM_STATE_LEAVE_LOBBY_WAIT                     = 12,
	NETROOM_STATE_END                                  = 13,
	NETROOM_STATE_END01                                = 14
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkRoomAC20.ENETROOMAC20_STATE
enum class ENETROOMAC20_STATE : uint8_t
{
	NETROOMAC20_STATE_IDLE                             = 0,
	NETROOMAC20_STATE_MAIN_WAIT                        = 1,
	NETROOMAC20_STATE_MAIN                             = 2,
	NETROOMAC20_STATE_ROOMMENU_WAIT                    = 3,
	NETROOMAC20_STATE_BATTLEREADY_WAIT                 = 4,
	NETROOMAC20_STATE_GOTO_BATTLE                      = 5,
	NETROOMAC20_STATE_LEAVE_CONFIRM                    = 6,
	NETROOMAC20_STATE_LEAVE_ROOM_WAIT                  = 7,
	NETROOMAC20_STATE_ROOM_ERROR                       = 8,
	NETROOMAC20_STATE_ROOM_ERROR_WAIT                  = 9,
	NETROOMAC20_STATE_ROOM_ERROR_WAIT2                 = 10,
	NETROOMAC20_STATE_LEAVE_LOBBY_WAIT                 = 11,
	NETROOMAC20_STATE_MAINMENU_INIT                    = 12,
	NETROOMAC20_STATE_MAINMENU                         = 13,
	NETROOMAC20_STATE_MAINMENU_END                     = 14,
	NETROOMAC20_STATE_GOTOMODE                         = 15,
	NETROOMAC20_STATE_END                              = 16,
	NETROOMAC20_STATE_END01                            = 17
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkSearch.ENETSEARCH_STATE
enum class ENETSEARCH_STATE : uint8_t
{
	NETSEARCH_STATE_SEARCH                             = 0,
	NETSEARCH_STATE_SEARCH_WAIT                        = 1,
	NETSEARCH_STATE_SEARCH_RESULT                      = 2,
	NETSEARCH_STATE_JOIN_CONFIRM                       = 3,
	NETSEARCH_STATE_JOIN                               = 4,
	NETSEARCH_STATE_JOIN_WAIT                          = 5,
	NETSEARCH_STATE_JOIN_PASSWORD                      = 6,
	NETSEARCH_STATE_JOIN_PASSWORD_MISS                 = 7,
	NETSEARCH_STATE_NOTFOUND                           = 8,
	NETSEARCH_STATE_ERROR                              = 9,
	NETSEARCH_STATE_JOIN_ERROR_WAIT                    = 10,
	NETSEARCH_STATE_JOIN_ERROR                         = 11,
	NETSEARCH_STATE_RETURN_LOBBY                       = 12,
	NETSEARCH_STATE_END                                = 13,
	NETSEARCH_STATE_END01                              = 14
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkTopMenu.ENETTOPMENU_RESULT
enum class ENETTOPMENU_RESULT : uint8_t
{
	NETTOPMENU_RESULT_NORMAL                           = 0,
	NETTOPMENU_RESULT_RANK_MATCH_SEARCH                = 1,
	NETTOPMENU_RESULT_PLAYER_MATCH_SEARCH              = 2,
	NETTOPMENU_RESULT_RANKING                          = 3,
	NETTOPMENU_RESULT_END                              = 4
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkTopMenu.ENETTOPMENU_STATE
enum class ENETTOPMENU_STATE : uint8_t
{
	NETTOPMENU_STATE_IDLE                              = 0,
	NETTOPMENU_STATE_START_ANIM                        = 1,
	NETTOPMENU_STATE_END_ANIM                          = 2,
	NETTOPMENU_STATE_MAIN                              = 3,
	NETTOPMENU_STATE_RANK_MATCH                        = 4,
	NETTOPMENU_STATE_PLAYER_MATCH                      = 5,
	NETTOPMENU_STATE_PLAYER_MATCH_CREATE               = 6,
	NETTOPMENU_STATE_PLUS_CHECK                        = 7,
	NETTOPMENU_STATE_ENTRY_ABORT_CONFIRM               = 8,
	NETTOPMENU_STATE_ENTRY_ABORT                       = 9,
	NETTOPMENU_STATE_ERROR                             = 10,
	NETTOPMENU_STATE_END                               = 11
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkTopMenu.ENETTOPMENU_CURSOR
enum class ENETTOPMENU_CURSOR : uint8_t
{
	NETTOPMENU_CURSOR_LOBBY                            = 0,
	NETTOPMENU_CURSOR_RANK_MATCH                       = 1,
	NETTOPMENU_CURSOR_PLAYER_MATCH                     = 2,
	NETTOPMENU_CURSOR_RANKING                          = 3,
	NETTOPMENU_CURSOR_END                              = 4
};

// Enum REDGame.REDGfxMoviePlayer_MenuNetworkWelcome.ENETWELCOME_STATE
enum class ENETWELCOME_STATE : uint8_t
{
	NETWELCOME_IDLE                                    = 0,
	NETWELCOME_END                                     = 1,
	NETWELCOME_END01                                   = 2
};

// Enum REDGame.REDGfxMoviePlayer_MenuRanking.ERANKING_STATE
enum class ERANKING_STATE : uint8_t
{
	RANKING_STATE_IDLE                                 = 0,
	RANKING_STATE_INIT                                 = 1,
	RANKING_STATE_USE_RATE                             = 2,
	RANKING_STATE_DIAGRAM                              = 3,
	RANKING_STATE_WINNUM                               = 4,
	RANKING_STATE_WINNUM_INDIVIDUAL                    = 5,
	RANKING_STATE_RR                                   = 6,
	RANKING_STATE_RR_INDIVIDUAL                        = 7,
	RANKING_STATE_STRAIGHT_WINS                        = 8,
	RANKING_STATE_MOM                                  = 9,
	RANKING_STATE_QUEST                                = 10,
	RANKING_STATE_END                                  = 11
};

// Enum REDGame.REDGfxMoviePlayer_MenuRanking.ERANKING_GROUP
enum class ERANKING_GROUP : uint8_t
{
	RANKING_GROUP_A                                    = 0,
	RANKING_GROUP_B                                    = 1,
	RANKING_GROUP_C                                    = 2,
	RANKING_GROUP_END                                  = 3
};

// Enum REDGame.REDGfxMoviePlayer_MenuReadCard.EREADCARD_STATE
enum class EREADCARD_STATE : uint8_t
{
	READCARD_STATE_IDLE                                = 0,
	READCARD_STATE_READ_CHECK                          = 1,
	READCARD_STATE_READ_WAIT                           = 2,
	READCARD_STATE_READ_WAIT_SINGLE                    = 3,
	READCARD_STATE_READ                                = 4,
	READCARD_STATE_READ_END                            = 5,
	READCARD_STATE_ENTRY_CONFIRM                       = 6,
	READCARD_STATE_ENTRY                               = 7,
	READCARD_STATE_ERROR                               = 8,
	READCARD_STATE_END                                 = 9
};

// Enum REDGame.REDGfxMoviePlayer_MenuReplay.EREPLAY_STATE
enum class EREPLAY_STATE : uint8_t
{
	REPLAY_STATE_INIT_LOAD                             = 0,
	REPLAY_STATE_INIT                                  = 1,
	REPLAY_STATE_IDLE                                  = 2,
	REPLAY_STATE_PLAY                                  = 3,
	REPLAY_STATE_END                                   = 4
};

// Enum REDGame.REDGfxMoviePlayer_MenuReplay.EREPLAY_STORAGE
enum class EREPLAY_STORAGE : uint8_t
{
	REPLAY_STORAGE_LOCAL                               = 0,
	REPLAY_STORAGE_ONLINE                              = 1,
	REPLAY_STORAGE_END                                 = 2
};

// Enum REDGame.REDGfxMoviePlayer_MenuReplay.EREPLAY_POPUP_REQUEST
enum class EREPLAY_POPUP_REQUEST : uint8_t
{
	REPLAY_POPUP_CONFIG                                = 0,
	REPLAY_POPUP_FILTER                                = 1,
	REPLAY_POPUP_END                                   = 2
};

// Enum REDGame.REDGfxMoviePlayer_MenuStaffRoll.STAFFROLL_ATTR
enum class ESTAFFROLL_ATTR : uint8_t
{
	STAFFROLL_ATTR_NORMAL                              = 0,
	STAFFROLL_ATTR_CAPTION_L                           = 1,
	STAFFROLL_ATTR_CAPTION_M                           = 2,
	STAFFROLL_ATTR_LOGO                                = 3,
	STAFFROLL_ATTR_DOUBLE                              = 4,
	STAFFROLL_ATTR_CAPTION_DM                          = 5,
	STAFFROLL_ATTR_CAPTION_DS                          = 6,
	STAFFROLL_ATTR_CAPTION_J                           = 7,
	STAFFROLL_ATTR_END                                 = 8
};

// Enum REDGame.REDGfxMoviePlayer_MenuStaffRoll.STAFFROLL_STATE
enum class ESTAFFROLL_STATE : uint8_t
{
	STAFFROLL_STATE_IDLE                               = 0,
	STAFFROLL_STATE_WAIT                               = 1,
	STAFFROLL_STATE_RESULT_WAIT                        = 2,
	STAFFROLL_STATE_RESULT                             = 3,
	STAFFROLL_STATE_STAFFROLL                          = 4,
	STAFFROLL_STATE_END_WAIT                           = 5,
	STAFFROLL_STATE_TOBECONTINUE                       = 6,
	STAFFROLL_STATE_END                                = 7,
	STAFFROLL_STATE_END01                              = 8
};

// Enum REDGame.REDGfxMoviePlayer_MenuStageIntro.STAGE_INTRO_STATE
enum class ESTAGE_INTRO_STATE : uint8_t
{
	STAGE_INTRO_STATE_MAIN                             = 0,
	STAGE_INTRO_STATE_END                              = 1
};

// Enum REDGame.REDGfxMoviePlayer_MenuStageSelect.ESTAGESELECT_STATE
enum class ESTAGESELECT_STATE : uint8_t
{
	STAGESELECT_STATE_IDLE                             = 0,
	STAGESELECT_STATE_START                            = 1,
	STAGESELECT_STATE_STAGESELECT                      = 2,
	STAGESELECT_STATE_BGMSELECT                        = 3,
	STAGESELECT_STATE_END                              = 4,
	STAGESELECT_STATE_END01                            = 5
};

// Enum REDGame.REDGfxMoviePlayer_MenuStyleSelect.ESTYLE_SELECT_STATE
enum class ESTYLE_SELECT_STATE : uint8_t
{
	STYLE_SELECT_STATE_IDLE                            = 0,
	STYLE_SELECT_STATE_SKIPALL                         = 1,
	STYLE_SELECT_STATE_STYLESELECT                     = 2,
	STYLE_SELECT_STATE_BUTTONSELECT_CONFIRM            = 3,
	STYLE_SELECT_STATE_BUTTONSELECT                    = 4,
	STYLE_SELECT_STATE_KEYCONFIG                       = 5,
	STYLE_SELECT_STATE_END                             = 6
};

// Enum REDGame.REDGfxMoviePlayer_MenuStyleSelect.ESTYLE_SELECT_TYPE
enum class ESTYLE_SELECT_TYPE : uint8_t
{
	STYLE_SELECT_TYPE_NO_SELECT                        = 0,
	STYLE_SELECT_TYPE_TECHNICAL                        = 1,
	STYLE_SELECT_TYPE_STYLISH                          = 2,
	STYLE_SELECT_TYPE_END                              = 3
};

// Enum REDGame.REDGfxMoviePlayer_MenuTitle.ETITLE_NEXTSCENE
enum class ETITLE_NEXTSCENE : uint8_t
{
	TITLE_NEXTSCENE_RANKING_A                          = 0,
	TITLE_NEXTSCENE_RANKING_B                          = 1,
	TITLE_NEXTSCENE_RANKING_C                          = 2,
	TITLE_NEXTSCENE_RANKING_END                        = 3
};

// Enum REDGame.REDGfxMoviePlayer_MenuTitle.ETITLE_STATE
enum class ETITLE_STATE : uint8_t
{
	TITLE_STATE_COMPANY_LOGO                           = 0,
	TITLE_STATE_TITLE                                  = 1,
	TITLE_STATE_OPENING_MOVIE                          = 2,
	TITLE_STATE_END                                    = 3,
	TITLE_STATE_E3_CAUTION_START                       = 4,
	TITLE_STATE_E3_CAUTION                             = 5,
	TITLE_STATE_E3_CONTROL_DESC                        = 6,
	TITLE_STATE_PSPLUS_TRIAL                           = 7,
	TITLE_STATE_END01                                  = 8
};

// Enum REDGame.REDSceneColorSettings.EStageLightDir
enum class EStageLightDir : uint8_t
{
	ESLD_Default                                       = 0,
	ESLD_BackLight                                     = 1,
	ESLD_END                                           = 2
};

// Enum REDGame.REDSeqAct_BadgeAction.EBadgeActionBG
enum class EBadgeActionBG : uint8_t
{
	BadgeActionBG_BurnoutCandle                        = 0,
	BadgeActionBG_ShockHotelman                        = 1,
	BadgeActionBG_ShockHammer                          = 2,
	BadgeActionBG_ShockTeishiBF                        = 3,
	BadgeActionBG_ShockSwordman                        = 4,
	BadgeActionBG_AngryBurger                          = 5,
	BadgeActionBG_ShockApril                           = 6,
	BadgeActionBG_ShockJune                            = 7,
	BadgeActionBG_END                                  = 8
};

// Enum REDGame.REDSeqAct_BGFloorAttribute.EBGFloorAttribute
enum class EBGFloorAttribute : uint8_t
{
	BGFloorAttr_Default                                = 0,
	BGFloorAttr_Stone                                  = 1,
	BGFloorAttr_Iron                                   = 2,
	BGFloorAttr_Wood                                   = 3,
	BGFloorAttr_Leaf                                   = 4,
	BGFloorAttr_Water                                  = 5,
	BGFloorAttr_RedWater                               = 6,
	BGFloorAttr_Wet                                    = 7,
	BGFloorAttr_Momiji                                 = 8,
	BGFloorAttr_END                                    = 9
};

// Enum REDGame.REDSeqAct_Subtitle.ESubtitleType
enum class ESubtitleType : uint8_t
{
	SubtitleType_Default                               = 0,
	SubtitleType_Shout                                 = 1,
	SubtitleType_Undertone                             = 2,
	SubtitleType_END                                   = 3
};

// Enum REDGame.REDSeqCond_FinalRoundCheck.EFinalRoundCheckType
enum class EFinalRoundCheckType : uint8_t
{
	FinalRoundCheckType_All                            = 0,
	FinalRoundCheckType_NoExtra                        = 1,
	FinalRoundCheckType_Extra                          = 2,
	FinalRoundCheckType_END                            = 3
};

// Enum REDGame.REDSeqEvent_BGEffect.EBGEffAttackType
enum class EBGEffAttackType : uint8_t
{
	BGEffAtk_Always                                    = 0,
	BGEffAtk_Special                                   = 1,
	BGEffAtk_Slash_Tate                                = 2,
	BGEffAtk_Slash_Yoko                                = 3,
	BGEffAtk_Blow                                      = 4,
	BGEffAtk_Fire                                      = 5,
	BGEffAtk_Thunder                                   = 6,
	BGEffAtk_Ice                                       = 7,
	BGEffAtk_Kakusei                                   = 8,
	BGEffAtk_END                                       = 9
};

// Enum REDGame.REDSeqEvent_BGEffect.EBGEffDirectionType
enum class EBGEffDirectionType : uint8_t
{
	BGEffDir_Right                                     = 0,
	BGEffDir_Left                                      = 1,
	BGEffDir_END                                       = 2
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class REDGame.AnimationCompressionAlgorithm_CutScene
// 0x0002 (0x004E - 0x0050)
class UAnimationCompressionAlgorithm_CutScene : public UAnimationCompressionAlgorithm
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.AnimationCompressionAlgorithm_CutScene");
		}

		return uClassPointer;
	};

};

// Class REDGame.AnimationCompressionAlgorithm_MultiplesOfFiveKey
// 0x0002 (0x004E - 0x0050)
class UAnimationCompressionAlgorithm_MultiplesOfFiveKey : public UAnimationCompressionAlgorithm
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.AnimationCompressionAlgorithm_MultiplesOfFiveKey");
		}

		return uClassPointer;
	};

};

// Class REDGame.AnimationCompressionAlgorithm_REDAutomatic
// 0x0002 (0x004E - 0x0050)
class UAnimationCompressionAlgorithm_REDAutomatic : public UAnimationCompressionAlgorithm
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.AnimationCompressionAlgorithm_REDAutomatic");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDActor_CheckDOF
// 0x0025 (0x01C8 - 0x01ED)
class AREDActor_CheckDOF : public AActor
{
public:
	class USpriteComponent*                            SpriteFocusDistance;                           // 0x01C8 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USpriteComponent*                            SpriteFocusPosition;                           // 0x01CC (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UDrawBoxComponent*                           BoxFarNear;                                    // 0x01D0 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AREDCamera*                                  Camera;                                        // 0x01D4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              DOFInnerRadius;                                // 0x01D8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              DOFDistance;                                   // 0x01DC (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     DOFPosition;                                   // 0x01E0 (0x000C) [0x0000000000002000] (CPF_Transient)
	EFocusType                                         DOFFocusType;                                  // 0x01EC (0x0001) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDActor_CheckDOF");
		}

		return uClassPointer;
	};

	void eventTick(float DeltaTime);
	void SetDOFInfoPositionNative(float InnerRadius, const struct FVector& Position);
	void SetDOFInfoDistanceNative(float InnerRadius, float Distance);
	void SetDOFInfoFocusTypeNative(EFocusType Type);
	void SetDOFInfo(float InnerRadius, float Distance);
	void SetupCamera();
	void NativeTick(float DeltaTime);
};

// Class REDGame.REDActor_GlareEffect
// 0x0068 (0x01C8 - 0x0230)
class AREDActor_GlareEffect : public AActor
{
public:
	class UStaticMeshComponent*                        MeshComponent;                                 // 0x01C8 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMaterialInstanceConstant*                   MatInst;                                       // 0x01CC (0x0004) [0x0000000000000000]               
	class AREDSceneColorSettings*                      DefaultColorSettings;                          // 0x01D0 (0x0004) [0x0000000000000000]               
	struct FVector                                     CurrentScale;                                  // 0x01D4 (0x000C) [0x0000000000000000]               
	struct FVector                                     NewScale;                                      // 0x01E0 (0x000C) [0x0000000000000000]               
	struct FVector                                     CurrentOffset;                                 // 0x01EC (0x000C) [0x0000000000000000]               
	struct FVector                                     NewOffset;                                     // 0x01F8 (0x000C) [0x0000000000000000]               
	struct FLinearColor                                CurrentColor;                                  // 0x0204 (0x0010) [0x0000000000000000]               
	struct FLinearColor                                NewColor;                                      // 0x0214 (0x0010) [0x0000000000000000]               
	float                                              AddAlpha;                                      // 0x0224 (0x0004) [0x0000000000000000]               
	float                                              TargetAlpha;                                   // 0x0228 (0x0004) [0x0000000000000000]               
	int32_t                                            SelfIndex;                                     // 0x022C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDActor_GlareEffect");
		}

		return uClassPointer;
	};

	void Initialize(int32_t Index, class AREDSceneColorSettings* Settings);
	void UpdateMaterialParameter();
	void UpdateTransform(struct FTPOV& outPOV);
	void UpdateParameter();
	void SetAlphaToF(float StartAlpha, float EndAlpha, int32_t frame);
	void SetAlphaTo(int32_t StartAlpha, int32_t EndAlpha, int32_t frame);
	void SetAlpha(int32_t inAlpha);
	void SetAlphaF(float inAlpha);
	void SetColor(struct FColor& outInColor);
	void SetColorF(struct FLinearColor& outInColor);
	void ResetColor();
	void SetScale(float X, float Y);
	void SetDisp(bool bDispOn);
	void SetOffset(float X, float Y);
};

// Class REDGame.REDActor_PauseMenu
// 0x0008 (0x01C8 - 0x01D0)
class AREDActor_PauseMenu : public AActor
{
public:
	uint32_t                                           bIsActive : 1;                                 // 0x01C8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bUnPauseSignal : 1;                            // 0x01C8 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class AREDHUD*                                     PauserHUD;                                     // 0x01CC (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDActor_PauseMenu");
		}

		return uClassPointer;
	};

	void eventTick(float DeltaTime);
	void eventUnPause();
	bool ActivatePause(class AREDHUD* HUD);
	void PauseUpdate();
};

// Class REDGame.REDActor_PostUpdater
// 0x0000 (0x01C8 - 0x01C8)
class AREDActor_PostUpdater : public AActor
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDActor_PostUpdater");
		}

		return uClassPointer;
	};

	void eventTick(float DeltaTime);
	void UpdateMaterialParam();
};

// Class REDGame.REDActor_RadialBlur
// 0x0040 (0x01C8 - 0x0208)
class AREDActor_RadialBlur : public AActor
{
public:
	class URadialBlurComponent*                        RadialBlur;                                    // 0x01C8 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMaterialInstanceConstant*                   MatInst;                                       // 0x01CC (0x0004) [0x0000000000002000] (CPF_Transient)
	class AREDCamera*                                  Camera;                                        // 0x01D0 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     BaseLocation;                                  // 0x01D4 (0x000C) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bRelativeLocation : 1;                         // 0x01E0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bEnableBlur : 1;                               // 0x01E0 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bAutoUpdateDraw : 1;                           // 0x01E0 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	int32_t                                            CurrentTime;                                   // 0x01E4 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            FadeInTime;                                    // 0x01E8 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            FadeStayTime;                                  // 0x01EC (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            FadeOutTime;                                   // 0x01F0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TargetScale;                                   // 0x01F4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TargetOpacity;                                 // 0x01F8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TargetFalloff;                                 // 0x01FC (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              Alpha;                                         // 0x0200 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            LocalState;                                    // 0x0204 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDActor_RadialBlur");
		}

		return uClassPointer;
	};

	void eventTick(float DeltaTime);
	void PostBeginPlay();
	void SetupCamera();
	void UpdateDraw();
	void NativeTick(float DeltaTime);
	void End(bool immediate);
	void Start(const struct FVector& centerLocation, bool bRelativeCamera, float Scale, float Opacity, float Falloff, int32_t inTime, int32_t stayTime, int32_t outTime);
};

// Class REDGame.REDAdvPresetCameraArray
// 0x000C (0x003C - 0x0048)
class UREDAdvPresetCameraArray : public UObject
{
public:
	class TArray<struct FPresetCameraItem>             PresetCameraArray;                             // 0x003C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAdvPresetCameraArray");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAdvSceneData
// 0x0010 (0x003C - 0x004C)
class UREDAdvSceneData : public UObject
{
public:
	class UREDAssetAdvScript*                          Script;                                        // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FSoundCueData>                 SEList;                                        // 0x0040 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAdvSceneData");
		}

		return uClassPointer;
	};

	class USoundCue* GetSECue(const class FName& cueName);
};

// Class REDGame.REDAnimNodeBlendList
// 0x0020 (0x0144 - 0x0164)
class UREDAnimNodeBlendList : public UAnimNodeBlendList
{
public:
	int32_t                                            CurrentIndex;                                  // 0x0144 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            BlendCount;                                    // 0x0148 (0x0004) [0x0000000000000000]               
	int32_t                                            BlendInterval;                                 // 0x014C (0x0004) [0x0000000000000000]               
	int32_t                                            BlendFrame;                                    // 0x0150 (0x0004) [0x0000000000000000]               
	int32_t                                            BlendUpdateCount;                              // 0x0154 (0x0004) [0x0000000000000000]               
	uint32_t                                           BlendAutoPlayAnim : 1;                         // 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            BlendCountMax;                                 // 0x015C (0x0004) [0x0000000000000000]               
	int32_t                                            BlendAcc;                                      // 0x0160 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimNodeBlendList");
		}

		return uClassPointer;
	};

	class UREDAnimNodeSequence* ChangeAnimSeq(const class FName& SeqName, bool isLoop, float StartTime, float BlendTime);
};

// Class REDGame.REDAnimNodeBlendPerBone
// 0x0000 (0x015C - 0x015C)
class UREDAnimNodeBlendPerBone : public UAnimNodeBlendPerBone
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimNodeBlendPerBone");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAnimNodeBlendAdvFace
// 0x0024 (0x015C - 0x0180)
class UREDAnimNodeBlendAdvFace : public UREDAnimNodeBlendPerBone
{
public:
	int32_t                                            FaceType;                                      // 0x015C (0x0004) [0x0000000000000000]               
	int32_t                                            BlendCount;                                    // 0x0160 (0x0004) [0x0000000000000000]               
	int32_t                                            BlendInterval;                                 // 0x0164 (0x0004) [0x0000000000000000]               
	int32_t                                            BlendFrame;                                    // 0x0168 (0x0004) [0x0000000000000000]               
	int32_t                                            BlendUpdateCount;                              // 0x016C (0x0004) [0x0000000000000000]               
	int32_t                                            BlendCountMax;                                 // 0x0170 (0x0004) [0x0000000000000000]               
	int32_t                                            BlendAcc;                                      // 0x0174 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsManpu : 1;                                  // 0x0178 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UAnimNodeSequence*                           CurrentSequence;                               // 0x017C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimNodeBlendAdvFace");
		}

		return uClassPointer;
	};

	void UpdateBlendAnim();
	bool ChangeFace(int32_t InFaceType, int32_t InBlendCount, int32_t InBlendInterval, int32_t InAcc);
};

// Class REDGame.REDAnimNodeBlendAdvHair
// 0x0024 (0x015C - 0x0180)
class UREDAnimNodeBlendAdvHair : public UREDAnimNodeBlendPerBone
{
public:
	class FString                                      HairAnimName;                                  // 0x015C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            BlendCount;                                    // 0x0168 (0x0004) [0x0000000000000000]               
	int32_t                                            BlendInterval;                                 // 0x016C (0x0004) [0x0000000000000000]               
	int32_t                                            BlendFrame;                                    // 0x0170 (0x0004) [0x0000000000000000]               
	int32_t                                            BlendUpdateCount;                              // 0x0174 (0x0004) [0x0000000000000000]               
	int32_t                                            BlendCountMax;                                 // 0x0178 (0x0004) [0x0000000000000000]               
	int32_t                                            BlendAcc;                                      // 0x017C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimNodeBlendAdvHair");
		}

		return uClassPointer;
	};

	void UpdateBlendAnim();
	bool SetHair(const class FString& AnimName, int32_t InBlendCount, int32_t InBlendInterval, int32_t InAcc, bool isLoop, bool IsForceSet);
};

// Class REDGame.REDAnimNodeBlendEyeBlink
// 0x0024 (0x015C - 0x0180)
class UREDAnimNodeBlendEyeBlink : public UREDAnimNodeBlendPerBone
{
public:
	int32_t                                            RestFrame;                                     // 0x015C (0x0004) [0x0000000000000000]               
	float                                              UpdateTimer;                                   // 0x0160 (0x0004) [0x0000000000000000]               
	float                                              PlaySpeed;                                     // 0x0164 (0x0004) [0x0000000000000000]               
	int32_t                                            WaitTime;                                      // 0x0168 (0x0004) [0x0000000000000000]               
	int32_t                                            WaitTimeMin;                                   // 0x016C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            WaitTimeMax;                                   // 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FastBlinkPercent;                              // 0x0174 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FastBlinkSkip;                                 // 0x0178 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPlaying : 1;                                  // 0x017C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLinear : 1;                                   // 0x017C (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimNodeBlendEyeBlink");
		}

		return uClassPointer;
	};

	void Update();
	void StopBlink();
	void PlayBlink(bool optionalLinear, float optionalSpeed, int32_t optionalPlayFrame);
	void SetBlendTarget(float BlendTarget, float BlendTime);
};

// Class REDGame.REDAnimNodeBlendLip
// 0x0034 (0x015C - 0x0190)
class UREDAnimNodeBlendLip : public UREDAnimNodeBlendPerBone
{
public:
	uint32_t                                           bPlaying : 1;                                  // 0x015C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bLinear : 1;                                   // 0x015C (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bManualMode : 1;                               // 0x015C (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bUseHighModel : 1;                             // 0x015C (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bPlayingCloseMouth : 1;                        // 0x015C (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	int32_t                                            MouthType;                                     // 0x0160 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            RestFrame;                                     // 0x0164 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              UpdateTimer;                                   // 0x0168 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PlaySpeed;                                     // 0x016C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            BaseMouthFrame;                                // 0x0170 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UREDAnimNodeSequenceManualTick*              CurrentSeq;                                    // 0x0174 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            MouthIndex;                                    // 0x0178 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NextMouthFrame;                                // 0x017C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            RandomPercent;                                 // 0x0180 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PlayingMouthType;                              // 0x0184 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FPointer                                    pMouthKeyFrameTable;                           // 0x0188 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            MouthKeyFrameNum;                              // 0x018C (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimNodeBlendLip");
		}

		return uClassPointer;
	};

	void Update();
	void ChangeMouthSeqNodeIndex(int32_t Index);
	void ChangeMouthSeqNode(const class FName& MouthNodeName);
	void CloseMouth();
	void OpenMouth(int32_t optionalType);
	void StopLip(bool optionalLinear);
	void PlayLip(int32_t Type, bool optionalLinear, float optionalSpeed, int32_t optionalPlayFrame);
	void ChangeMouthType(int32_t Type);
	void SetBlendTarget(float BlendTarget, float BlendTime);
};

// Class REDGame.REDAnimNodeScarfSystem
// 0x0044 (0x015C - 0x01A0)
class UREDAnimNodeScarfSystem : public UREDAnimNodeBlendPerBone
{
public:
	float                                              MinLength;                                     // 0x015C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxLength;                                     // 0x0160 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ShrinkDec;                                     // 0x0164 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ShrinkAccPower;                                // 0x0168 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            NoShrinkFrame;                                 // 0x016C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            NoShrinkFrameABS;                              // 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            UpdateIntervalFrame;                           // 0x0174 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SlantAngle;                                    // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinRoll;                                       // 0x017C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRoll;                                       // 0x0180 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseMotionChildBone : 1;                       // 0x0184 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsActive : 1;                                 // 0x0184 (0x0004) [0x0000000000000000] [0x00000002] 
	class TArray<class FName>                          BoneNameList;                                  // 0x0188 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<float>                                BoneScaleXList;                                // 0x0194 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimNodeScarfSystem");
		}

		return uClassPointer;
	};

	void UpdateScarfSystem(bool bStopShrink);
	void StopScarfSystem(int32_t BlendFrame);
	void StartScarfSystem(int32_t BlendFrame);
};

// Class REDGame.REDAnimNodeLimitedBlendSlot
// 0x00A4 (0x0144 - 0x01E8)
class UREDAnimNodeLimitedBlendSlot : public UAnimNodeSlot
{
public:
	float                                              UpdateThresholdValue;                          // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FSetAnimPosArgBackup                        SetAnimPosReqParam[8];                         // 0x0148 (0x0080) [0x0000000000000000]               
	float                                              BackupWeights[8];                              // 0x01C8 (0x0020) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimNodeLimitedBlendSlot");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAnimNodeLookAtBattle
// 0x0034 (0x016C - 0x01A0)
class UREDAnimNodeLookAtBattle : public UAnimNodeAimOffset
{
public:
	float                                              TickForLimited;                                // 0x016C (0x0004) [0x0000000000000000]               
	float                                              CenterAngle;                                   // 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    
	EAnimLookAtPattern                                 LookAtPattern;                                 // 0x0174 (0x0001) [0x0000000000000001] (CPF_Edit)    
	EAnimAimDir                                        NowAimDir;                                     // 0x0175 (0x0001) [0x0000000000000000]               
	float                                              RandomDelayMin;                                // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RandomDelayMax;                                // 0x017C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LookAtSpeed;                                   // 0x0180 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TickForRandomDelay;                            // 0x0184 (0x0004) [0x0000000000000000]               
	float                                              AimForLinkSkelControl;                         // 0x0188 (0x0004) [0x0000000000000000]               
	uint32_t                                           bEnableLinkSkelControl : 1;                    // 0x018C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bNamerakaAnime : 1;                            // 0x018C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	class TArray<struct FLookAtLinkSkelControl>        LinkSkelControlList;                           // 0x0190 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class APawn*                                       TargetPawn;                                    // 0x019C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimNodeLookAtBattle");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAnimNodeSequence
// 0x0018 (0x0170 - 0x0188)
class UREDAnimNodeSequence : public UAnimNodeSequence
{
public:
	uint32_t                                           StepPlay : 1;                                  // 0x0170 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           AnimeEnd : 1;                                  // 0x0170 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           AnimeUpdate : 1;                               // 0x0170 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           FirstTime : 1;                                 // 0x0170 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bStepAnimeSectionLoop : 1;                     // 0x0170 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	uint32_t                                           bNonStepAnimUseDeltaSeconds : 1;               // 0x0170 (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	int32_t                                            CurrentFrame;                                  // 0x0174 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            FrameMax;                                      // 0x0178 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            StepFrame;                                     // 0x017C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              SectionLoopBeginTime;                          // 0x0180 (0x0004) [0x0000000000002000] (CPF_Transient)
	class AREDPawn*                                    Pawn;                                          // 0x0184 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimNodeSequence");
		}

		return uClassPointer;
	};

	void JumpCutSceneAnimeFrame(float frame);
	bool IsAnimeEnd();
	void SetAnimeFrame(int32_t frame);
	void StepAnime(int32_t frame);
	void SetAnim(const class FName& Sequence);
};

// Class REDGame.REDAnimNodeSequenceManualTick
// 0x0004 (0x0170 - 0x0174)
class UREDAnimNodeSequenceManualTick : public UAnimNodeSequence
{
public:
	uint32_t                                           bTick : 1;                                     // 0x0170 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimNodeSequenceManualTick");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAnimNotify_AnimeLoop
// 0x0004 (0x0040 - 0x0044)
class UREDAnimNotify_AnimeLoop : public UAnimNotify
{
public:
	float                                              BeginTime;                                     // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimNotify_AnimeLoop");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAnimSetArray
// 0x000C (0x003C - 0x0048)
class UREDAnimSetArray : public UObject
{
public:
	class TArray<class UAnimSet*>                      AnimSetArray;                                  // 0x003C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimSetArray");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAnimTree
// 0x0000 (0x0228 - 0x0228)
class UREDAnimTree : public UAnimTree
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimTree");
		}

		return uClassPointer;
	};

	void ZeroScale();
	void ResetScaleController();
};

// Class REDGame.REDAnywhereDisp
// 0x000C (0x003C - 0x0048)
class UREDAnywhereDisp : public UObject
{
public:
	uint32_t                                           bNewChallengerDraw : 1;                        // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNewChallengerSetEnd : 1;                      // 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            NewChallengerDrawCounter;                      // 0x0040 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_NewChallenger*            NewChallengerFlash;                            // 0x0044 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnywhereDisp");
		}

		return uClassPointer;
	};

	void eventStopNewChallenger();
	void eventPlayNewChallenger();
	void eventInitialize();
	void UpdateFreeTrialInfomation();
	void UpdateNewChallengerDraw();
	bool IsNewChallengerDrawEnd();
	void RequestNewChallengerDraw();
	void Update();
};

// Class REDGame.REDArcadeScript
// 0x0048 (0x003C - 0x0084)
class UREDArcadeScript : public UObject
{
public:
	class TArray<struct FEventLoadCharaList>           LoadCharaList;                                 // 0x003C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FEventPresetCameraOffset>      PresetCameraOffsetList;                        // 0x0048 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UObject*>                       AssetKeep;                                     // 0x0054 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UAudioComponent*>               SoundComponents;                               // 0x0060 (0x000C) [0x0000000004480008] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<struct FEventPlayingBGM>              PlayingBGMList;                                // 0x006C (0x000C) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	class TArray<struct FTPOV>                         PresetCameraPOVList;                           // 0x0078 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDArcadeScript");
		}

		return uClassPointer;
	};

	void eventTebureCamera(bool On, float Mag);
	void eventShakeCamera(float X, float Y, int32_t frame, bool isFadeout);
	void eventFOVCamera(float Start, float End, int32_t frame);
	void eventMoveCamera(const struct FVector& Start, const struct FVector& End, int32_t frame);
	void eventRotateCamera(const struct FRotator& Start, const struct FRotator& End, int32_t frame);
	void eventPresetCamera(const class FString& CharaID, int32_t Type, int32_t frame, const struct FVector& Loc, bool isReverse);
	void eventResetCamera();
	void eventUpdate();
	bool eventIsSoundPlaying(class USoundCue* Cue);
	void eventStopSound();
	void eventPlaySound(class USoundCue* Cue);
	void eventSetVolumeBGM(const class FString& Id, float Time, float Vol);
	void eventFadeOutBGM(const class FString& Id, float Time);
	void eventFadeInBGM(const class FString& Id, class USoundCue* Cue, float Time);
	class UREDAssetLipSync* eventGetLipSyncData(const class FString& VoicePackageName, const class FString& TextID);
	class UREDAssetEventScript* eventGetCharScriptData(const class FString& CharaID);
	void eventLoadEventPackage(bool bBlock, class FString& outPackageName);
	void eventDestroyPawn(class AREDPawn* Pawn);
	class AREDPawn* eventSpawnPlayer(const class FString& CharaID);
	void LoadCharaPackages(bool bBlock, class TArray<class FString>& outPackageNames);
	void GetCharaPackageNames(struct FSpawnPlayerInfo& outInfo, class TArray<class FString>& outPackageNames);
	void eventLoadChara(const class FString& CharaID);
};

// Class REDGame.REDAsyncLoadPackageManager
// 0x0004 (0x003C - 0x0040)
class UREDAsyncLoadPackageManager : public UObject
{
public:
	class UREDCharaAsset*                              Assets;                                        // 0x003C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAsyncLoadPackageManager");
		}

		return uClassPointer;
	};

	bool eventIsLoadComplete();
	void eventLoadPackage(bool isBlock, class FString& outPackageName);
	void eventLoadPackages(bool isBlock, class TArray<class FString>& outPackageNames);
};

// Class REDGame.REDBGMaterialController
// 0x0024 (0x003C - 0x0060)
class UREDBGMaterialController : public UObject
{
public:
	float                                              CurrentFadeValue;                              // 0x003C (0x0004) [0x0000000000000000]               
	float                                              TargetFadeValue;                               // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              AddValue;                                      // 0x0044 (0x0004) [0x0000000000000000]               
	class TArray<class UExponentialHeightFogComponent*> FogComponents;                                 // 0x0048 (0x000C) [0x0000000004482008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<struct FFogDefaultParams>             FogDefColors;                                  // 0x0054 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDBGMaterialController");
		}

		return uClassPointer;
	};

	void Update();
	void SetBrightness(float Brightness);
	void FadeOut(float Brightness, int32_t frame);
	void FadeIn(int32_t frame);
	void Initialize();
};

// Class REDGame.REDCamera_Adv
// 0x0000 (0x04AC - 0x04AC)
class AREDCamera_Adv : public ACamera
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCamera_Adv");
		}

		return uClassPointer;
	};

	void UpdateViewTarget(float DeltaTime, struct FTViewTarget& outOutVT);
	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void UpdatePawnCameraParam(struct FTPOV& outPOV);
	void UpdatePawnMaterialInstance();
	void UpdateCameraAnimLight();
};

// Class REDGame.REDCamera_CharaSelect
// 0x0040 (0x04AC - 0x04EC)
class AREDCamera_CharaSelect : public ACamera
{
public:
	class AREDPawn*                                    PawnList[16];                                  // 0x04AC (0x0040) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCamera_CharaSelect");
		}

		return uClassPointer;
	};

	void UpdateViewTarget(float DeltaTime, struct FTViewTarget& outOutVT);
	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void UpdatePawnMaterialInstance();
	void UpdatePawnCameraParam(struct FTPOV& outPOV);
};

// Class REDGame.REDCamera_DigitalFigure
// 0x0000 (0x04AC - 0x04AC)
class AREDCamera_DigitalFigure : public ACamera
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCamera_DigitalFigure");
		}

		return uClassPointer;
	};

	void UpdateViewTarget(float DeltaTime, struct FTViewTarget& outOutVT);
	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void UpdatePawnCameraParam(struct FTPOV& outPOV);
	void UpdatePawnMaterialInstance();
	void UpdateCameraAnimLight();
};

// Class REDGame.REDCameraAnimArray
// 0x000C (0x003C - 0x0048)
class UREDCameraAnimArray : public UObject
{
public:
	class TArray<struct FCameraAnimData>               CameraData;                                    // 0x003C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCameraAnimArray");
		}

		return uClassPointer;
	};

	class UCameraAnim* GetCameraAnim(const class FName& AnimName);
};

// Class REDGame.REDCameraOffsetDataArray
// 0x000C (0x003C - 0x0048)
class UREDCameraOffsetDataArray : public UObject
{
public:
	class TArray<struct FCameraOffsetData>             OffsetDataArray;                               // 0x003C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCameraOffsetDataArray");
		}

		return uClassPointer;
	};

	void AddOffsetData(struct FVector& outPosOffset, struct FRotator& outRotOffset);
};

// Class REDGame.REDCharaAsset
// 0x0020 (0x003C - 0x005C)
class UREDCharaAsset : public UObject
{
public:
	class TArray<class UObject*>                       Assets;                                        // 0x003C (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class UPackage*>                      Packages;                                      // 0x0048 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            NumPendingPackages;                            // 0x0054 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              StartLoadTime;                                 // 0x0058 (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCharaAsset");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDCharaAssetLoader
// 0x0000 (0x003C - 0x003C)
class UREDCharaAssetLoader : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCharaAssetLoader");
		}

		return uClassPointer;
	};

	static bool CheckExistPackage(struct FSpawnPlayerInfo& outInfo);
	static void GetPackageNamesForDrama(const class FString& textLang, const class FString& voiceLang, struct FSpawnPlayerInfo& outInfo, class TArray<class FString>& outPackageNames);
	static void GetPackageNamesForMOM(struct FSpawnPlayerInfo& outInfo, class TArray<class FString>& outPackageNames);
	static class UREDCharaAsset* LoadAssets(class UObject* outerObject, bool bBlocking, class TArray<class FString>& outPackageNames);
	static void GetPackageNamesSimple(bool bColorOnly, struct FSpawnPlayerInfo& outInfo, class TArray<class FString>& outPackageNames);
	static void GetPackageNamesForOnlyDrama(struct FSpawnPlayerInfo& outInfo, class TArray<class FString>& outPackageNames);
	static void GetPackageNames(struct FSpawnPlayerInfo& outInfo, class TArray<class FString>& outPackageNames);
};

// Class REDGame.REDCheatManager
// 0x0000 (0x0054 - 0x0054)
class UREDCheatManager : public UCheatManager
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCheatManager");
		}

		return uClassPointer;
	};

	void Twitter(const class FString& Exec, const class FString& optionalArgv1, const class FString& optionalArgv2);
	void TwitterControl(class FString& outExec, class FString& outArgv1, class FString& outArgv2);
};

// Class REDGame.REDCheatManager_Battle
// 0x0008 (0x0054 - 0x005C)
class UREDCheatManager_Battle : public UREDCheatManager
{
public:
	class ADebugCameraController*                      DebugCameraControllerRef;                      // 0x0054 (0x0004) [0x0000000000000000]               
	class UClass*                                      DebugCameraControllerClass;                    // 0x0058 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCheatManager_Battle");
		}

		return uClassPointer;
	};

	void DumpActorTrans(const class FName& optionalActorName, const class FName& optionalLayerName);
	void EnableDebugCamera(bool bEnableDebugText);
	void ToggleDebugCamera(bool optionalBDrawDebugText);
};

// Class REDGame.REDControlModule
// 0x0004 (0x003C - 0x0040)
class UREDControlModule : public UObject
{
public:
	class AREDPlayerController*                        Controller;                                    // 0x003C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDControlModule");
		}

		return uClassPointer;
	};

	void UpdateRotation(float DeltaTime);
	void ProcessMove(float DeltaTime, const struct FVector& newAccel, EDoubleClickDir DoubleClickMove, const struct FRotator& DeltaRot);
	struct FRotator GetBaseAimRotation();
	void OnBecomeInActive(class UREDControlModule* NewModule);
	void OnBecomeActive(class UREDControlModule* OldModule);
	void Init();
};

// Class REDGame.REDControlModule_Adv
// 0x0000 (0x0040 - 0x0040)
class UREDControlModule_Adv : public UREDControlModule
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDControlModule_Adv");
		}

		return uClassPointer;
	};

	void UpdateRotation(float DeltaTime);
	void ProcessMove(float DeltaTime, const struct FVector& newAccel, EDoubleClickDir DoubleClickMove, const struct FRotator& DeltaRot);
	struct FRotator GetBaseAimRotation();
	float GetInnerCameraFov();
	void GetInnerCameraRot(struct FRotator& outRotation);
	void GetInnerCameraPos(struct FVector& outLocation);
};

// Class REDGame.REDControlModule_Battle
// 0x0031 (0x0040 - 0x0071)
class UREDControlModule_Battle : public UREDControlModule
{
public:
	struct FVector                                     CurrentLocation;                               // 0x0040 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CurrentRotation;                               // 0x004C (0x000C) [0x0000000000000000]               
	struct FVector                                     LocationOffset;                                // 0x0058 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RotationOffset;                                // 0x0064 (0x000C) [0x0000000000000000]               
	ECameraPattern                                     CameraPattern;                                 // 0x0070 (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDControlModule_Battle");
		}

		return uClassPointer;
	};

	void UpdateRotation(float DeltaTime);
	void ProcessMove(float DeltaTime, const struct FVector& newAccel, EDoubleClickDir DoubleClickMove, const struct FRotator& DeltaRot);
	struct FRotator GetBaseAimRotation();
	void SetCameraOffset(struct FVector& outInLocationOffset, struct FRotator& outInRotationOffset);
	void GetCameraOffset(struct FVector& outLocation, struct FRotator& outRotation);
	void GetInnerCameraRot(struct FRotator& outRotation);
	void GetInnerCameraPos(struct FVector& outLocation);
};

// Class REDGame.REDControlModule_DigitalFigure
// 0x0000 (0x0040 - 0x0040)
class UREDControlModule_DigitalFigure : public UREDControlModule
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDControlModule_DigitalFigure");
		}

		return uClassPointer;
	};

	void UpdateRotation(float DeltaTime);
	void ProcessMove(float DeltaTime, const struct FVector& newAccel, EDoubleClickDir DoubleClickMove, const struct FRotator& DeltaRot);
	struct FRotator GetBaseAimRotation();
	float GetInnerCameraFov();
	void GetInnerCameraRot(struct FRotator& outRotation);
	void GetInnerCameraPos(struct FVector& outLocation);
};

// Class REDGame.REDControlModule_Lobby
// 0x0000 (0x0040 - 0x0040)
class UREDControlModule_Lobby : public UREDControlModule
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDControlModule_Lobby");
		}

		return uClassPointer;
	};

	void UpdateRotation(float DeltaTime);
	void ProcessMove(float DeltaTime, const struct FVector& newAccel, EDoubleClickDir DoubleClickMove, const struct FRotator& DeltaRot);
	void GetInnerCameraRot(struct FRotator& outRotation);
	void GetInnerCameraPos(struct FVector& outLocation);
};

// Class REDGame.REDDebugCameraController
// 0x000C (0x05C8 - 0x05D4)
class AREDDebugCameraController : public ADebugCameraController
{
public:
	class TArray<class FString>                        ClipboardTexts;                                // 0x05C8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDDebugCameraController");
		}

		return uClassPointer;
	};

	void DebugCameraTransformCopyToClipboard();
	void NativeDebugCameraTransformCopyToClipboard(class AREDPawn_Player* P1);
	void ForceMouseUnlock(bool bUnlock);
	void DebugCameraRot(float Pitch, float optionalRoll, float optionalYaw);
	void DebugCameraPos(float X, float Y, float Z);
	class AREDPawn_Player* GetPlayer(int32_t Id);
	void UpdateLocal();
};

// Class REDGame.REDDownloadableContentManager
// 0x0000 (0x00C4 - 0x00C4)
class UREDDownloadableContentManager : public UDownloadableContentManager
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDDownloadableContentManager");
		}

		return uClassPointer;
	};

	void eventInit();
	void eventRefreshDLCFromNative();
	void DLCPathChange();
};

// Class REDGame.REDEasyCharaSelectActor
// 0x0038 (0x01C8 - 0x0200)
class AREDEasyCharaSelectActor : public AActor
{
public:
	struct FCharaData                                  CharaSel[2];                                   // 0x01C8 (0x0038) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDEasyCharaSelectActor");
		}

		return uClassPointer;
	};

	void GetSpawnPlayerInfo(EUE_PLAYER_ID PlayerID, struct FSpawnPlayerInfo& outInfo);
	class FString GetCharaNameID(ECHARA_ID Id);
};

// Class REDGame.REDEffect
// 0x000C (0x003C - 0x0048)
class UREDEffect : public UObject
{
public:
	class TArray<struct FEffectSkeletalMeshData>       EffectSKMeshData;                              // 0x003C (0x000C) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDEffect");
		}

		return uClassPointer;
	};

	class AREDPawn_Effect* SpawnEffect(const class FName& EffectName, class AREDPawn* Parent, class UREDEffectMaterialInfo* Info);
};

// Class REDGame.REDEffectMaterialInfo
// 0x000C (0x003C - 0x0048)
class UREDEffectMaterialInfo : public UObject
{
public:
	class TArray<struct FEffectPawnMaterialInfo>       MaterialData;                                  // 0x003C (0x000C) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDEffectMaterialInfo");
		}

		return uClassPointer;
	};

	class UREDPawnMaterials* GetPawnMaterialFromEffectName(const class FName& EffectName);
};

// Class REDGame.REDEffectPawnPool
// 0x0184 (0x003C - 0x01C0)
class UREDEffectPawnPool : public UObject
{
public:
	class AREDPawn_Effect*                             SpawnedPawns[48];                              // 0x003C (0x00C0) [0x0000000000000000]               
	class AREDPawn_Effect*                             PooledPawns[48];                               // 0x00FC (0x00C0) [0x0000000000000000]               
	class UClass*                                      EffectPawnClass;                               // 0x01BC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDEffectPawnPool");
		}

		return uClassPointer;
	};

	void ReturnEffectPawn(class AREDPawn_Effect* EffectPawn);
	class AREDPawn_Effect* GetPooledEffectPawn();
	void StopSound();
	void StopSoundLocal(class AActor* Actor);
	void Reset(class AGameInfo* gi);
	void InitPool(class AGameInfo* gi);
	void UpdateLightVector();
	void UpdateMaterialInstanceParam();
	void UpdateLightVectorFromLightAnime(struct FVector& outLightVector);
	void UpdateCameraParam(float FOV, struct FVector& outCameraDir);
};

// Class REDGame.REDEffectPawnPool_Adv
// 0x0000 (0x01C0 - 0x01C0)
class UREDEffectPawnPool_Adv : public UREDEffectPawnPool
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDEffectPawnPool_Adv");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDEmitterPool
// 0x0014 (0x0220 - 0x0234)
class AREDEmitterPool : public AEmitterPool
{
public:
	int32_t                                            MaterialInstancePoolSize;                      // 0x0220 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            StaticMeshComponentPoolSize;                   // 0x0224 (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<class UMaterialInterface*>            PooledMaterialInstances;                       // 0x0228 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDEmitterPool");
		}

		return uClassPointer;
	};

	void OnParticleSystemFinishedWithColorOverride(class UParticleSystemComponent* PSC);
	void SetupMaterialForColorOverrideParticle(class UParticleSystemComponent* PSC);
	class UParticleSystemComponent* eventSpawnEmitter(class UParticleSystem* EmitterTemplate, const struct FVector& SpawnLocation, const struct FRotator& optionalSpawnRotation, class AActor* optionalAttachToActor, class AActor* optionalInInstigator, int32_t optionalMaxDLEPooledReuses, bool optionalBInheritScaleFromBase);
	void ResetMaterialInterface();
	void RoundReset();
	void InitPool();
};

// Class REDGame.REDGameCommon
// 0x012C (0x003C - 0x0168)
class UREDGameCommon : public UObject
{
public:
	class UREDGameCommon_PlayerInfo*                   PlayerInfo[2];                                 // 0x003C (0x0008) [0x0000000000000000]               
	EUE_PLAYER_ID                                      MainPlayer;                                    // 0x0044 (0x0001) [0x0000000000000000]               
	EUE_GAME_MODE                                      GameModeID;                                    // 0x0045 (0x0001) [0x0000000000000000]               
	EUE_BG_ID                                          BGID;                                          // 0x0046 (0x0001) [0x0000000000000000]               
	EUE_BGM_ID                                         BattleBGMID;                                   // 0x0047 (0x0001) [0x0000000000000000]               
	EUE_SCENE_ID                                       SceneID;                                       // 0x0048 (0x0001) [0x0000000000000000]               
	EINTLUDE_DRAMA_TYPE                                InterludeDramaType;                            // 0x0049 (0x0001) [0x0000000000000000]               
	EMAINMENU_STARTUP_SCENE                            MainMenuStartupScene;                          // 0x004A (0x0001) [0x0000000000000000]               
	EMAINMENU_STARTUP_SCENE                            NetworkSceneForRankMatchResume;                // 0x004B (0x0001) [0x0000000000000000]               
	ENETWORK_CHARASEL_RETURN_SCENE                     NetworkCharaSel_ReturnScene;                   // 0x004C (0x0001) [0x0000000000000000]               
	ENETWORK_BATTLE_MODE                               NetworkBattleMode;                             // 0x004D (0x0001) [0x0000000000000000]               
	ESTATIC_TEXTURE_VER                                LoadedStaticTextureVersion;                    // 0x004E (0x0001) [0x0000000000000000]               
	class TArray<class FString>                        BGID_String;                                   // 0x0050 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        BattleBGMID_String;                            // 0x005C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UFont*                                       StaticFont;                                    // 0x0068 (0x0004) [0x0000000000000000]               
	class UFont*                                       StaticREDFont;                                 // 0x006C (0x0004) [0x0000000000000000]               
	class UFont*                                       StaticJapanFont;                               // 0x0070 (0x0004) [0x0000000000000000]               
	class UFont*                                       ProfileFont;                                   // 0x0074 (0x0004) [0x0000000000000000]               
	class UREDAnywhereDisp*                            AnywhereDisp;                                  // 0x0078 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUseCircleToAccept : 1;                        // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableNewChallenger : 1;                      // 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNewChallengerTrigger : 1;                     // 0x007C (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bNowLoadingDisp : 1;                           // 0x007C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bNowConnectingDisp : 1;                        // 0x007C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bNowSavingDisp : 1;                            // 0x007C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bNetworkCharaSel_PlayerMatch : 1;              // 0x007C (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bNetworkCharaSel_Cancel : 1;                   // 0x007C (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bNetworkCharaSel_LobbyBattle : 1;              // 0x007C (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bNetworkCharaSel_Welcome : 1;                  // 0x007C (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bNetworkLobbyToRoom : 1;                       // 0x007C (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bNetworkLobbyFromInvite : 1;                   // 0x007C (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bNetworkWithMainMenu : 1;                      // 0x007C (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bNetworkInitRCodeDone : 1;                     // 0x007C (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bAdvertiseSkip : 1;                            // 0x007C (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bMainQuadrantDecide : 1;                       // 0x007C (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bFreeTrialPlay : 1;                            // 0x007C (0x0004) [0x0000000000000000] [0x00010000] 
	class TArray<class UObject*>                       InterludeAssets;                               // 0x0080 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAudioComponent*                             IncomeSound[3];                                // 0x008C (0x000C) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UAudioComponent*                             NewChallengerSound;                            // 0x0098 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FSparringInformation                        SparringInfo;                                  // 0x009C (0x0014) [0x0000000000000000]               
	int32_t                                            LastSelectBGIndex;                             // 0x00B0 (0x0004) [0x0000000000000000]               
	int32_t                                            LastSelectBGMIndex;                            // 0x00B4 (0x0004) [0x0000000000000000]               
	class TArray<struct FPlayerInfo_ArcadeInfoTable>   ArcadeInfoTable;                               // 0x00B8 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FPlayerInfo_ArcadeDramaRes>    ArcadeExResource;                              // 0x00C4 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FPlayerInfo_ArcadeDramaTable>  ArcadeDramaTable;                              // 0x00D0 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FPlayerInfo_CharaChainTabel>   CharaChainTable;                               // 0x00DC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPlayerInfo_ExcludeRandom>     ExcludeRandomTable;                            // 0x00E8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FColorOrderInfo>               ColorOrderTable;                               // 0x00F4 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UPackage*                                    GameSettingsPackage;                           // 0x0100 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	class UREDNamedObjectArray*                        GameSettingsFile;                              // 0x0104 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UREDTMSConfig*                               TMSConfig;                                     // 0x0108 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            StatusIconCounter;                             // 0x010C (0x0004) [0x0000000000000000]               
	int32_t                                            bNetworkCharaSel_Tournament;                   // 0x0110 (0x0004) [0x0000000000000000]               
	class UREDTexture2DArray*                          StaticTextures;                                // 0x0114 (0x0004) [0x0000000000000000]               
	class UREDTexture2DArray*                          LoadedStaticTexture;                           // 0x0118 (0x0004) [0x0000000000000000]               
	class UREDTexture2DArray*                          ExternalTextures[4];                           // 0x011C (0x0010) [0x0000000000000000]               
	class UREDSoundCueArray*                           NarrationCueArray;                             // 0x012C (0x0004) [0x0000000000000000]               
	class FString                                      NarrationCharaID;                              // 0x0130 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UREDAsyncLoadPackageManager*                 AsyncLoader;                                   // 0x013C (0x0004) [0x0000000000000000]               
	int32_t                                            MainQuadrant;                                  // 0x0140 (0x0004) [0x0000000000000000]               
	class TArray<struct FAchievementDetails>           Achievements;                                  // 0x0144 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UClass*                                      StatsHandlerClass;                             // 0x0150 (0x0004) [0x0000000000000000]               
	class UREDGameStatsBase*                           StatsHandler;                                  // 0x0154 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UClass*                                      ChatWindowClass;                               // 0x0158 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_ChatWindow*               ChatWindow;                                    // 0x015C (0x0004) [0x0000000000000000]               
	class UClass*                                      LobbyInterfaceSteamworksClass;                 // 0x0160 (0x0004) [0x0000000000000000]               
	class UREDGameOnlineLobbyInterfaceSteamworks*      LobbyInterfaceSteamworks;                      // 0x0164 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameCommon");
		}

		return uClassPointer;
	};

	class FString eventGetText();
	bool eventIsIMEFormOpen();
	class FString eventCancelInput();
	class FString eventDecideInput();
	bool eventStartInput(int32_t optionalMaxChars, const class FString& optionalText, bool optional_isPassword);
	void CleanupChatWindow();
	void StartupChatWindow();
	void eventInitializeInstcace();
	bool eventIsNarrationChangeComplete();
	void eventNarrationChangeRequest(const class FString& CharaID, bool isBlock);
	void SetPlaySoundPadSpeaker(int32_t PadID);
	void SetCurrentNarrationCharaID(int32_t svID);
	class FString GetCurrentNarrationCharaID();
	int32_t GetMainQuadrant();
	class FString GetControllerName(int32_t ControllerId);
	bool IsUsePS3Controller(int32_t ControllerId);
	bool IsControllerConnected(int32_t ControllerId);
	void ResetLightBarColor(int32_t ControllerId);
	void SetLightBarColor(int32_t ControllerId, const struct FColor& lightBarColor);
	void DrawStatusIcon_Sub(int32_t Type, int32_t X, int32_t Y, int32_t Counter, bool inverse);
	void DispNowSaving();
	void DispNowConnecting();
	void DispNowLoading();
	void DrawStatusIcon();
	void UpdateStatusIcon();
	static bool IsSteam();
	static bool IsRevelator2_Option_ForBattle();
	static bool IsRevelator2_Option();
	static bool IsRevelator2_DLC();
	static bool IsEarlyAccess();
	static bool IsEnableTournament();
	static bool IsCHNRom();
	static bool IsAksysMB();
	static bool IsPSPlusTrial();
	static bool IsConsumer();
	static bool IsE3Rom();
	void LocationTest_SetupInfo();
	static bool IsLocationTest();
	void eventUnregistExternalTexture2DArray(class UREDTexture2DArray* texArray);
	void eventRegistExternalTexture2DArray(class UREDTexture2DArray* texArray);
	void ClearInterludeAssets();
	void LockInterludeAssets();
	static class UREDGameCommon* GetInstance();
	class FString eventGetPackageString(EPKG_NAME Id, bool optionalIsBattle);
	class FString GetNextSceneCommand(EUE_SCENE_ID Id, bool optionalForSeamlessTravel);
	class FString eventGetMeshIDString(int32_t MeshID, const class FString& CharaID);
	class FString eventGetColorIDString(int32_t ColorID, const class FString& CharaID);
	bool eventIsSelectableBGM(EUE_BGM_ID Id);
	EUE_BGM_ID eventGetRandomBGM();
	int32_t BGID_to_IDForUI(EUE_BG_ID Id);
	bool eventIsSelectableStage(EUE_BG_ID Id);
	EUE_BG_ID eventGetRandomStage();
	bool eventArcadeMode_StepStage(EUE_PLAYER_ID Player);
	bool IsPlayerColorExChara(const class FString& exCharaID);
	class FString GetPlayerColorExCharaMaterial(const class FString& exCharaID);
	class FString GetPlayerColorExCharaMatPackage(const class FString& exCharaID);
	bool ArcadeMode_IsDarkColor(EUE_PLAYER_ID Player);
	bool eventArcadeMode_IsBoss(EUE_PLAYER_ID Player);
	void eventArcadeMode_SetEnemyInfoFromStage(EUE_PLAYER_ID Player);
	bool eventArcadeMode_SetupOnlyDramaBattle(EBATTLE_DRAMA_ID dramaID);
	bool eventArcadeMode_IsNoRev2DramaChara(const class FString& CharaID);
	class FString eventGetRandomChara();
	void SetRandomCharaInfo();
	void eventSetDefaultCharaInfo(EUE_PLAYER_ID PlayerID);
	bool IsExcludeRandomChara(const class FString& CharaID, const class FString& EnemyID, bool bDrama);
	void InitializeParam();
	void InitializeCharaSelectParam();
	class FString GetCostumeName(const class FString& CharaID, int32_t CostumeID);
	bool IsSelectableCostume(const class FString& CharaID, int32_t CostumeID, EUE_PLAYER_ID optionalPlayer);
	int32_t GetCostumeNum(const class FString& CharaID, EUE_PLAYER_ID optionalPlayer);
	int32_t GetCostumeMaxNum(const class FString& CharaID);
	int32_t GetDefaultCostumeID(const class FString& CharaID);
	bool IsPlayableChara(const class FString& CharaID);
	bool IsNeedChallengeModeUI();
	void FreeTrial_SetupInfo();
	bool IsFreeTrialPlay();
	void SetFreeTrialPlay(bool Src);
	bool IsEnableFreeTrial();
	bool IsSelectDFMode();
	bool IsInRoom();
	bool IsInLobby();
	class FString GetVoiceLanguage();
	bool IsHandicapEnableMode(EUE_GAME_MODE Mode);
	bool IsSelectableBGM_Native(EUE_BGM_ID Id);
	bool IsOnlyDramaBattle();
	bool IsDramaBattle();
	void PreBattleLoadSetup();
	bool GetCardInfo(EUE_PLAYER_ID Player, class FString& outPlayerName, class FString& outTitle, class FString& outGrade, class FString& outRecord, int32_t& outIcon, int32_t& outGradeColorIndex);
	void SetupColorAndVoice(EUE_PLAYER_ID Player, int32_t ColorID, bool bOverlapCheck, bool optionalBInnenCheck);
	void SetupNewChallenger();
	void CheckNewChallenger();
	void SparringMode_SetupInfo(bool isEnemySet);
	void ArcadeMode_SetupInfo(EUE_PLAYER_ID Player, const class FString& CharaID);
	class FString GetVersionSuffix();
	static int32_t REDRand(int32_t Max);
	bool IsMOMEnable();
	bool IsSparringEnable();
	EUE_BGM_ID GetBGMIDFromCharaID(const class FString& CharaID, const class FString& EnemyID);
	EUE_BG_ID GetBGIDFromCharaID(const class FString& CharaID);
	class UTexture2D* GetStaticTexture(const class FString& texName, bool optionalWithAssert);
	bool IsUseCircleToAccept();
	class UREDAnywhereDisp* GetAnywhereDisp();
	class UFont* GetProfileFont();
	class UFont* GetStaticREDFont();
	class UFont* GetStaticFont();
	class FString GetBGMString(EUE_BGM_ID Id);
	EUE_BGM_ID GetBGMID();
	void SetBGMID(EUE_BGM_ID Id);
	class FString GetCurrentBGString();
	class FString GetBGString(EUE_BG_ID Id);
	EUE_BG_ID GetBGID();
	void SetBGID(EUE_BG_ID Id);
	EUE_GAME_MODE GetGameMode();
	void SetGameMode(EUE_GAME_MODE Id);
	EUE_PLAYER_ID GetAnotherPlayer();
	EUE_PLAYER_ID GetMainPlayer();
	void SetMainPlayer(EUE_PLAYER_ID PlayerID);
	bool IsGamePlaying(EUE_PLAYER_ID PlayerID);
	void SetPlayerState(EUE_PLAYER_ID PlayerID, EUE_PLAYERSTATE State);
	uint8_t GetPadID(EUE_PLAYER_ID PlayerID);
	void SetPadID(EUE_PLAYER_ID PlayerID, uint8_t pad);
	bool IsCPU(EUE_PLAYER_ID PlayerID);
	void SetCPU(EUE_PLAYER_ID PlayerID, bool cpu);
	int32_t GetStageNoForDrama(EUE_PLAYER_ID PlayerID);
	int32_t GetCostumeID(EUE_PLAYER_ID PlayerID);
	int32_t GetVoiceID(EUE_PLAYER_ID PlayerID);
	int32_t GetColorID(EUE_PLAYER_ID PlayerID);
	class FString GetCharaID(EUE_PLAYER_ID PlayerID);
	void SetCostumeID(EUE_PLAYER_ID PlayerID, int32_t CostumeID);
	void SetVoiceID(EUE_PLAYER_ID PlayerID, int32_t VoiceID);
	void SetColorID(EUE_PLAYER_ID PlayerID, int32_t ColorID);
	void SetCharaID(EUE_PLAYER_ID PlayerID, const class FString& CharaID);
	class UREDGameCommon_PlayerInfo* GetMainPlayerInfo();
	class UREDGameCommon_PlayerInfo* GetPlayerInfo(EUE_PLAYER_ID PlayerID);
};

// Class REDGame.REDGameCommon_Define
// 0x0000 (0x003C - 0x003C)
class UREDGameCommon_Define : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameCommon_Define");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDGameCommon_Package
// 0x0018 (0x003C - 0x0054)
class UREDGameCommon_Package : public UObject
{
public:
	class TArray<class FString>                        PackageList_AC20;                              // 0x003C (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class FString>                        PackageList_AC25;                              // 0x0048 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameCommon_Package");
		}

		return uClassPointer;
	};

	static class FString GetPackageString(EPKG_NAME Id, bool isBattle);
};

// Class REDGame.REDGameCommon_PlayerInfo
// 0x00F8 (0x003C - 0x0134)
class UREDGameCommon_PlayerInfo : public UObject
{
public:
	class FString                                      CharaID;                                       // 0x003C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ColorID;                                       // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            VoiceID;                                       // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            CostumeID;                                     // 0x0050 (0x0004) [0x0000000000000000]               
	uint32_t                                           DecideChara : 1;                               // 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCPU : 1;                                      // 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUseCard : 1;                                  // 0x0054 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bPadAssign : 1;                                // 0x0054 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bStartSparring : 1;                            // 0x0054 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bStraightAll : 1;                              // 0x0054 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bRandomChara : 1;                              // 0x0054 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bStylishMode : 1;                              // 0x0054 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bSelectMySet : 1;                              // 0x0054 (0x0004) [0x0000000000000000] [0x00000100] 
	int32_t                                            ColorFileID;                                   // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            Handicap;                                      // 0x005C (0x0004) [0x0000000000000000]               
	EUE_PLAYERSTATE                                    PlayerState;                                   // 0x0060 (0x0001) [0x0000000000000000]               
	uint8_t                                            PadID;                                         // 0x0061 (0x0001) [0x0000000000000000]               
	EUE_GAME_MODE                                      PlayGameMode;                                  // 0x0062 (0x0001) [0x0000000000000000]               
	uint8_t                                            EntryName[4];                                  // 0x0063 (0x0004) [0x0000000000000000]               
	EBATTLE_DRAMA_ID                                   BattleDramaID;                                 // 0x0067 (0x0001) [0x0000000000000000]               
	int32_t                                            SystemContinueTimer;                           // 0x0068 (0x0004) [0x0000000000000000]               
	struct FPlayerInfo_EnemyTable                      EnemyTable[8];                                 // 0x006C (0x00A0) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      EnemyTableCharaID;                             // 0x010C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            StageNo;                                       // 0x0118 (0x0004) [0x0000000000000000]               
	int32_t                                            NextStageNo;                                   // 0x011C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxStageNum;                                   // 0x0120 (0x0004) [0x0000000000000000]               
	int32_t                                            ContinueCount;                                 // 0x0124 (0x0004) [0x0000000000000000]               
	int32_t                                            WinCount;                                      // 0x0128 (0x0004) [0x0000000000000000]               
	struct FPlayerInfo_MOMInfo                         MOMInfo;                                       // 0x012C (0x0004) [0x0000000000000000]               
	int32_t                                            PauseMenuLeftTime;                             // 0x0130 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameCommon_PlayerInfo");
		}

		return uClassPointer;
	};

	bool eventArcadeMode_StepStage();
	void ArcadeMode_SetEnemyTableSub(const class FString& _CharaID, int32_t stage, const class TArray<struct FPlayerInfo_CharaChainTabel>& chainTable, const class TArray<struct FPlayerInfo_ArcadeInfoTable>& infoTable);
	void eventArcadeMode_SetEnemyTable(const class FString& _CharaID, const class TArray<struct FPlayerInfo_CharaChainTabel>& chainTable, const class TArray<struct FPlayerInfo_ArcadeInfoTable>& infoTable);
	void ClearEnemyTable();
	void eventInitializeParam();
	bool eventIsLastBattle();
	bool eventIsDramaBattle();
	int32_t GetStageNumMax();
};

// Class REDGame.REDGameInfo
// 0x0118 (0x0378 - 0x0490)
class AREDGameInfo : public AGameInfo
{
public:
	class AREDDebugPause*                              DebugPauseActor;                               // 0x0378 (0x0004) [0x0000000000002000] (CPF_Transient)
	class AREDActor_PauseMenu*                         PauseMenuActor;                                // 0x037C (0x0004) [0x0000000000002000] (CPF_Transient)
	class UREDParticle*                                CommonParticle;                                // 0x0380 (0x0004) [0x0000000000000000]               
	class UREDSoundPlayer*                             CommonSE;                                      // 0x0384 (0x0004) [0x0000000000000000]               
	class UREDSoundPlayer*                             Narration;                                     // 0x0388 (0x0004) [0x0000000000000000]               
	class UREDSoundPlayerUnique*                       TutorialNarration;                             // 0x038C (0x0004) [0x0000000000000000]               
	class UREDSoundCueArray*                           CommonSECueArray;                              // 0x0390 (0x0004) [0x0000000000000000]               
	class UREDParticle*                                MOMParticle;                                   // 0x0394 (0x0004) [0x0000000000000000]               
	class AREDSeqEventManager*                         SeqEventManager;                               // 0x0398 (0x0004) [0x0000000000000000]               
	class TArray<class UObject*>                       AssetKeep;                                     // 0x039C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UREDMeshPool*                                MeshPool;                                      // 0x03A8 (0x0004) [0x0000000004400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class UREDEffectPawnPool*                          EffectPawnPool;                                // 0x03AC (0x0004) [0x0000000004400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	uint32_t                                           SceneChanging : 1;                             // 0x03B0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bDisableUpdateSceneColor : 1;                  // 0x03B0 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bManualTickPointLightManager : 1;              // 0x03B0 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bEnableDOF : 1;                                // 0x03B0 (0x0004) [0x0000000000000000] [0x00000008] 
	class AREDHUD*                                     REDHUD;                                        // 0x03B4 (0x0004) [0x0000000000002000] (CPF_Transient)
	class AREDPlayerController*                        PrimaryPC;                                     // 0x03B8 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FLinearColor                                PawnGlobalAddColor;                            // 0x03BC (0x0010) [0x0000000000000000]               
	struct FLinearColor                                PawnGlobalMulColor;                            // 0x03CC (0x0010) [0x0000000000000000]               
	struct FLinearColor                                PawnLightColor;                                // 0x03DC (0x0010) [0x0000000000000000]               
	struct FLinearColor                                PawnAmbientColor;                              // 0x03EC (0x0010) [0x0000000000000000]               
	float                                              PawnSaturation;                                // 0x03FC (0x0004) [0x0000000000000000]               
	struct FLinearColor                                DefaultPawnLightColor;                         // 0x0400 (0x0010) [0x0000000000000000]               
	struct FLinearColor                                DefaultPawnAmbientColor;                       // 0x0410 (0x0010) [0x0000000000000000]               
	class AREDSceneColorSettings*                      ALightSettings;                                // 0x0420 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<class UREDGfxMoviePlayer_Menu_Base*>  MenuMovieList;                                 // 0x0424 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UREDPointLightManager*                       PointLightManager;                             // 0x0430 (0x0004) [0x0000000000002000] (CPF_Transient)
	class AREDActor_RadialBlur*                        RadialBlurActor;                               // 0x0434 (0x0004) [0x0000000000002000] (CPF_Transient)
	class AREDActor_CheckDOF*                          CheckDofActor;                                 // 0x0438 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UClass*                                      REDEffectPawnPoolClass;                        // 0x043C (0x0004) [0x0000000000000000]               
	int32_t                                            ContrastCurrentFrame;                          // 0x0440 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            ContrastTargetFrame;                           // 0x0444 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ContrastMin;                                   // 0x0448 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ContrastMax;                                   // 0x044C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ContrastAlpha;                                 // 0x0450 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ContrastAddAlpha;                              // 0x0454 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            DOFType;                                       // 0x0458 (0x0004) [0x0000000000000000]               
	float                                              DOFFalloff;                                    // 0x045C (0x0004) [0x0000000000000000]               
	float                                              DOFKernelSize;                                 // 0x0460 (0x0004) [0x0000000000000000]               
	float                                              DOFInnerRadius;                                // 0x0464 (0x0004) [0x0000000000000000]               
	float                                              DOFFocusDistance;                              // 0x0468 (0x0004) [0x0000000000000000]               
	struct FVector                                     DOFFocusPosition;                              // 0x046C (0x000C) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuQuestList*            QuestListMenu[2];                              // 0x0478 (0x0008) [0x0000000000000000]               
	class UPostProcessChain*                           PP_Depth;                                      // 0x0480 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UPostProcessChain*                           PP_Depth2;                                     // 0x0484 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UPostProcessChain*                           PP_Original;                                   // 0x0488 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UREDTexture2DArray*                          NetworkTextureList;                            // 0x048C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo");
		}

		return uClassPointer;
	};

	void eventDispDepthBuffer(bool bDisp, int32_t Type, struct FLinearColor& outParams);
	class UPostProcessChain* CreateDepthViewPostProcess(int32_t Id);
	void RestoreDispDepthBufferMaterial(class UPostProcessChain* PP);
	void SetDispDepthBufferParam(class UPostProcessChain* PP, struct FLinearColor& outParams);
	void eventTick(float DeltaSeconds);
	class FString eventGetPackageString(EPKG_NAME Id, bool optionalIsBattle);
	bool QuestList_IsActive(EUE_PLAYER_ID Player);
	void QuestList_Finish(EUE_PLAYER_ID Player);
	bool QuestList_IsDisp(EUE_PLAYER_ID Player);
	void QuestList_SwitchDisp(EUE_PLAYER_ID Player, bool disp);
	void QuestList_EndAnim(EUE_PLAYER_ID Player);
	void QuestList_Show(EUE_PLAYER_ID Player, bool isCharaSelect);
	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void eventConsoleEvent(const class FName& EventName);
	class AREDPawn_Player* SpawnPlayer(struct FSpawnPlayerInfo& outInfo);
	class UREDCharaAsset* eventLoadCharaPackages(bool bBlock, class TArray<class FString>& outPackageNames);
	void GetDramaPackageNames(const class FString& textLang, const class FString& voiceLang, class TArray<struct FSpawnPlayerInfo>& outInfo, class TArray<class FString>& outPackageNames);
	void GetMOMPackageNamesFromArray(class TArray<struct FSpawnPlayerInfo>& outInfo, class TArray<class FString>& outPackageNames);
	void GetMOMPackageNames(struct FSpawnPlayerInfo& outInfo, class TArray<class FString>& outPackageNames);
	void GetCharaPackageNamesFromArray(class TArray<struct FSpawnPlayerInfo>& outInfo, class TArray<class FString>& outPackageNames);
	void GetCharaPackageNames(struct FSpawnPlayerInfo& outInfo, class TArray<class FString>& outPackageNames);
	void DisplayDebugBGEffect(class AHUD* HUD);
	bool eventRequestEventPlayer(const class FName& EventName, class APawn* PlayerPawn, class APawn* EnemyPawn, int32_t optionalParam0, int32_t optionalParam1, int32_t optionalParam2);
	int32_t eventGetBGFloorAttribute(float PosX);
	bool eventRequestEventBGEffectRectList(const class FName& EventName, float posX1, float posX2, float posZ1, float posZ2, int32_t Dir, int32_t AttackLv, int32_t atkType, int32_t AttackDamage, class APawn* PlayerPawn, class APawn* EnemyPawn, class TArray<class UREDSeqEvent_BGEffect*>& outDoneList);
	bool eventRequestEventBGEffectRect(const class FName& EventName, float posX1, float posX2, float posZ1, float posZ2, int32_t Dir, int32_t AttackLv, int32_t atkType, int32_t AttackDamage, class APawn* PlayerPawn, class APawn* EnemyPawn);
	bool eventRequestEventBGEffect(const class FName& EventName, float PosX, float PosZ, int32_t Dir, int32_t AttackLv, int32_t atkType, int32_t AttackDamage, class APawn* PlayerPawn, class APawn* EnemyPawn);
	void eventSetSeqValueFloat(const class FName& VarName, float Value);
	void eventStopShakeCamera();
	void eventShakeCamera(const class FName& PatternName, float Scale, int32_t inFrame, int32_t stayFrame, int32_t outFrame);
	void HideBG(bool isHide);
	void eventGotoNextScene(EUE_SCENE_ID Id);
	void eventRestartLevel();
	void UpdateDOF();
	void SetDOFParameterFocusPosition(const struct FVector& Position);
	void SetDOFParameterFocusDistance(float Distance);
	void SetDOFParameterInnerRadius(float optionalInnerRadius);
	void SetDOFParameterKernelSize(float optionalKernelSize);
	void SetDOFParameterFalloff(float optionalFalloff);
	void SwitchDOF(bool bOn);
	class UUberPostProcessEffect* GetUberPostProcessEffect();
	void ContrastEffectUpdateDraw();
	void ContrastEffectUpdate();
	void ContrastEffect(int32_t frame, float optionalAddMin, float optionalAddMax, float optionalAlpha);
	void SwitchDiffusionFilter2(bool On, float optionalLuminancePow, float optionalSaturation, bool optionalSepia);
	void StopTutorialNarration();
	void PlayTutorialNarration(const class FName& cueName, class AActor* optionalActor);
	void PlayPadSpeakerNarration(const class FName& cueName, int32_t optionalPadID, class AActor* optionalActor);
	void PlayPadSpeakerCommonSE(const class FName& cueName, int32_t optionalPadID, class AActor* optionalActor);
	void PlayNarration(const class FName& cueName, class AActor* optionalActor);
	void PlayCommonSE_WithPos(const class FName& cueName, struct FVector& outLoc);
	void PlayCommonSE(const class FName& cueName, class AActor* optionalActor);
	void SetPlaySoundPadSpeaker(int32_t PadID);
	bool eventIsSoundClassPlaying(const class FName& Category);
	void eventChangeSoundMode(const class FName& ModeName);
	class UParticleSystemComponent* CreateCommonParticle(struct FParticleArg& outArg);
	void SetNoLinkObjParticleDisp(bool bDisp);
	float GetParticleSpeed();
	void SetParticleSpeed(float Speed);
	void eventGameEnding();
	void eventPreBeginPlay();
	void eventDestroyOnSeamlessTravel();
	void eventPostSeamlessTravel();
	void eventPostLogin(class APlayerController* NewPlayer);
	void PostLoginCommon(class APlayerController* NewPlayer);
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	void ToggleDebugPause();
	void ToggleShowDebugMenu();
	void Step();
	void StepToggle();
	void UpdateSceneLightSettings();
	void eventLoadStaticTextureVersionDiff();
	ESTATIC_TEXTURE_VER GetLoadStaticTextureVersion();
	void SetupSceneLightSettings();
	void eventResetSceneColor();
	void AllocEffectPawnPool();
	void AllocMeshPool(int32_t optionalMaxMeshNum, int32_t optionalMaxMaterialNum);
	static void SetupSpawnPlayerInfo(EUE_PLAYER_ID PlayerID, const class FString& CharaID, const class FString& EnemyCharaID, int32_t MeshID, int32_t ColorID, int32_t VoiceID, struct FSpawnPlayerInfo& outInfo);
	void UpdateControllerConnectStatus();
	bool IsEnableRedirectPS3toPS4Input();
	bool IS_DEBUG_ON();
	static bool IsUsePS3Assets();
	void SceneFinalize();
	void SceneInitialize();
	bool IsAsyncLoading();
	bool IsPauseGame();
	void PauserTick(float DeltaTime);
	void SetupInternalHUDPtr(class AHUD* HUD);
	void InitializeNetworkTextureList(class UREDTexture2DArray* TextureList);
};

// Class REDGame.REDGameInfo_Adv
// 0x0008 (0x0490 - 0x0498)
class AREDGameInfo_Adv : public AREDGameInfo
{
public:
	class UREDCharaAsset*                              DataAssets;                                    // 0x0490 (0x0004) [0x0000000000000000]               
	class UREDTexture2DArray*                          Tex2DArrayDictionary;                          // 0x0494 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_Adv");
		}

		return uClassPointer;
	};

	void eventSwitchPause(bool isPause);
	void eventTick(float DeltaTime);
	void eventSceneReset();
	class TArray<class AActor*> eventGetKismetActorList(const class FName& VarName);
	class AActor* eventGetKismetActor(const class FName& VarName);
	void eventAdvKismetEventStart(const class FString& EventName, bool IsLoad);
	void eventSetDispBattleBG(const class FString& bgname, bool IsDisp);
	bool eventIsLoadingBattleBG();
	void eventSetLoadBattleBG(const class FString& bgname, bool isUnload);
	bool eventCheckBattleBG(const class FString& bgname);
	class AREDPawn* eventSpawnCamera();
	class AREDPawn* eventSpawnLight();
	class AREDPawn* eventSpawnAvatar(class UREDMeshArray* Meshes, class UREDAnimArray* Anim, class UREDPawnMaterials* MaterialSet);
	void eventSoundVolumeTarget(class USoundCue* Target, const class FName& Category, int32_t frame, float Vol);
	void eventSoundVolumeCategory(const class FName& Category, int32_t frame, float Vol);
	void eventStopSoundTarget(class USoundCue* Target, const class FName& Category, int32_t optionalFrame);
	void eventStopSoundCategory(const class FName& Category, int32_t optionalFrame);
	void eventGameEnding();
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	void UpdatePause();
	void UpdateScene();
	void SceneFinalize();
	void SceneInitialize();
};

// Class REDGame.REDGameInfo_DigitalFigure
// 0x001C (0x0490 - 0x04AC)
class AREDGameInfo_DigitalFigure : public AREDGameInfo
{
public:
	class UREDCharaAsset*                              DataAssets;                                    // 0x0490 (0x0004) [0x0000000000000000]               
	class UREDPawnMaterials*                           LoadingCharaMaterials;                         // 0x0494 (0x0004) [0x0000000000000000]               
	class UREDTexture2DArray*                          Tex2DArrayDigitalFigure;                       // 0x0498 (0x0004) [0x0000000000000000]               
	class FString                                      DefaultBGMName;                                // 0x049C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class USoundCue*                                   DefaultBGMCue;                                 // 0x04A8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_DigitalFigure");
		}

		return uClassPointer;
	};

	void eventGameEnding();
	void eventSwitchPause(bool isPause);
	void eventTick(float DeltaTime);
	void eventSceneReset();
	class TArray<class AActor*> eventGetKismetActorList(const class FName& VarName);
	class UMaterialInstanceConstant* eventGetKismetMaterialInstanceConstant(const class FName& VarName);
	class AActor* eventGetKismetActor(const class FName& VarName);
	void eventAdvKismetEventStart(const class FString& EventName, bool IsLoad);
	void eventSetDispBattleBG(const class FString& bgname, bool IsDisp);
	bool eventIsLoadingBattleBG();
	void eventSetLoadBattleBG(const class FString& bgname, bool isUnload);
	class AREDPawn* eventSpawnCamera();
	class AREDPawn* eventSpawnLight();
	class AREDPawn* eventSpawnLoadingAvatar(class UREDMeshArray* Meshes, class UREDAnimArray* Anim);
	class AREDPawn* eventSpawnAvatar(class UREDMeshArray* Meshes, class UREDAnimArray* Anim, class UREDPawnMaterials* MaterialSet);
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	void UpdatePause();
	void UpdateNative();
	void SceneFinalize();
	void SceneInitialize_AfterFileLoad();
	void SceneInitialize();
	void PlaySoundCue(class USoundCue* Cue, EUE_BGM_ID bgmid);
	EUE_BGM_ID GetPlayBGMID();
};

// Class REDGame.REDGameInfo_Ending
// 0x0020 (0x0490 - 0x04B0)
class AREDGameInfo_Ending : public AREDGameInfo
{
public:
	class UREDGfxMoviePlayer_MenuStaffRoll*            StaffRoll;                                     // 0x0490 (0x0004) [0x0000000000000000]               
	int32_t                                            StateSub;                                      // 0x0494 (0x0004) [0x0000000000000000]               
	int32_t                                            StateCounter;                                  // 0x0498 (0x0004) [0x0000000000000000]               
	class UREDCharaAsset*                              CharaAssets;                                   // 0x049C (0x0004) [0x0000000000000000]               
	class UREDAssetLocalizeText*                       TextAsset;                                     // 0x04A0 (0x0004) [0x0000000000000000]               
	class UREDSoundCueArray*                           VoiceCueArray;                                 // 0x04A4 (0x0004) [0x0000000000000000]               
	class UREDSoundPlayerUnique*                       SoundPlayer;                                   // 0x04A8 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FPointer                                    m_pDramaManager;                               // 0x04AC (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_Ending");
		}

		return uClassPointer;
	};

	bool GetKismetVariableBool(const class FName& VarName);
	void eventSwitchPause(bool isPause);
	void eventTick(float DeltaTime);
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	void UpdateDraw();
	void UpdateMain();
	void SceneFinalize();
	void SceneInitialize();
	void StopSubtitle();
	void UpdatePause();
};

// Class REDGame.REDGameInfo_InterludeDrama
// 0x0018 (0x0490 - 0x04A8)
class AREDGameInfo_InterludeDrama : public AREDGameInfo
{
public:
	struct FPointer                                    m_pDramaManager;                               // 0x0490 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	uint32_t                                           bActiveted : 1;                                // 0x0494 (0x0004) [0x0000000000000000] [0x00000001] 
	class UREDCharaAsset*                              CharaAssets;                                   // 0x0498 (0x0004) [0x0000000000000000]               
	class UREDAssetLocalizeText*                       TextAsset;                                     // 0x049C (0x0004) [0x0000000000000000]               
	class UREDSoundCueArray*                           VoiceCueArray;                                 // 0x04A0 (0x0004) [0x0000000000000000]               
	class UREDSoundPlayerUnique*                       SoundPlayer;                                   // 0x04A4 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_InterludeDrama");
		}

		return uClassPointer;
	};

	bool GetKismetVariableBool(const class FName& VarName);
	void eventTick(float DeltaTime);
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	void InitPreLoad();
	void StopMovie();
	void SetNewChallengerEnableFlag(bool flag);
	bool CheckSkipInput();
	void UpdateDraw();
	void UpdateMain();
	void SceneFinalize();
	void SceneInitialize();
};

// Class REDGame.REDGameInfo_Menu
// 0x0004 (0x0490 - 0x0494)
class AREDGameInfo_Menu : public AREDGameInfo
{
public:
	class UREDCharaAsset*                              DataAssets;                                    // 0x0490 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_Menu");
		}

		return uClassPointer;
	};

	void eventSwitchPause(bool isPause);
	void eventTick(float DeltaTime);
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	class FString GetLocalizeString(const class FString& WidgetName);
	void UpdatePause();
};

// Class REDGame.REDGameInfo_BootSequence
// 0x0004 (0x0494 - 0x0498)
class AREDGameInfo_BootSequence : public AREDGameInfo_Menu
{
public:
	int32_t                                            BootState;                                     // 0x0494 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_BootSequence");
		}

		return uClassPointer;
	};

	void eventGameEnding();
	void eventTick(float DeltaTime);
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	void BootSequence();
};

// Class REDGame.REDGameInfo_Library
// 0x0008 (0x0494 - 0x049C)
class AREDGameInfo_Library : public AREDGameInfo_Menu
{
public:
	class UREDGfxMoviePlayer_MenuBG*                   vMenuBg;                                       // 0x0494 (0x0004) [0x0000000000000000]               
	class UREDTexture2DArray*                          Tex2DArrayDictionary;                          // 0x0498 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_Library");
		}

		return uClassPointer;
	};

	void eventGameEnding();
	void eventTick(float DeltaTime);
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	void execRelease();
	void execDrawNative();
	void execUpdateNative();
	void InitializeNative();
};

// Class REDGame.REDGameInfo_LobbyBase
// 0x0320 (0x0494 - 0x07B4)
class AREDGameInfo_LobbyBase : public AREDGameInfo_Menu
{
public:
	class TArray<struct FLobby_Collision_Event>        CollisionData_Event;                           // 0x0494 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FLobby_KyoutaiInfo>            KyoutaiInfo1P;                                 // 0x04A0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FLobby_KyoutaiInfo>            KyoutaiInfo2P;                                 // 0x04AC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FLobby_WaitLineInfo>           WaitLineInfo;                                  // 0x04B8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class ADynamicSMActor*>               KyoutaiActors;                                 // 0x04C4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FLobby_KyoutaiMaterial                      KyoutaiMaterials[32];                          // 0x04D0 (0x0280) [0x0000000000000000]               
	int32_t                                            KyoutaiMaterialsNum;                           // 0x0750 (0x0004) [0x0000000000000000]               
	class TArray<struct FLobby_Collision_Wall>         CollisionData_Wall;                            // 0x0754 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FLobby_Collision_Circle>       CollisionData_Circle;                          // 0x0760 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FLobby_Collision_Rect>         CollisionData_Rect;                            // 0x076C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FLobby_Collision_Floor>        CollisionData_Floor;                           // 0x0778 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UREDTexture2DArray*                          Tex2DArrayPlayersPlate;                        // 0x0784 (0x0004) [0x0000000000000000]               
	class UREDTexture2DArray*                          Tex2DArrayDF;                                  // 0x0788 (0x0004) [0x0000000000000000]               
	class UREDPawnMaterials*                           LoadingCharaMaterials;                         // 0x078C (0x0004) [0x0000000000000000]               
	class FString                                      BGMName_Main;                                  // 0x0790 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      BGMName_LobbySelect;                           // 0x079C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      BGMName_Room;                                  // 0x07A8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_LobbyBase");
		}

		return uClassPointer;
	};

	class UObject* eventGetKismetObject(const class FName& VarName);
	class ADynamicSMActor* eventSpawnSMActor(class UStaticMesh* Mesh);
	class AREDPawn* eventSpawnLobbyAvater(class UREDMeshArray* Meshes, class UREDAnimArray* Anim, class UREDPawnMaterials* MaterialSet);
	void eventTick(float DeltaTime);
	void eventGameEnding();
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	bool CollisionData_Exist();
	void CollisionData_Update(int32_t optionalKyoutaiMax);
	ELOBBY_EVENT CheckEvent(struct FVector2D& outPos, int32_t& outOptionData, struct FVector2D& outEventPos, float& outEventAngle);
	bool CheckCollision_Rect(float Radius, struct FVector2D& outPrevpos, struct FVector2D& outPos, struct FVector2D& outCheckedPos);
	bool CheckCollision_Circle(float Radius, struct FVector2D& outPos, struct FVector2D& outCheckedPos);
	bool CheckCollision_Wall(float Radius, struct FVector2D& outPos, struct FVector2D& outCheckedPos);
};

// Class REDGame.REDGameInfo_Fishing
// 0x0004 (0x07B4 - 0x07B8)
class AREDGameInfo_Fishing : public AREDGameInfo_LobbyBase
{
public:
	uint32_t                                           bFadeInTrigger : 1;                            // 0x07B4 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_Fishing");
		}

		return uClassPointer;
	};

	bool IsAllMapVisible();
	void eventTick(float DeltaTime);
	void eventGameEnding();
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	void UpdateDrawNative();
	void UpdateNative();
	void FinalizeNative();
	void InitializeNative();
};

// Class REDGame.REDGameInfo_Lobby
// 0x0028 (0x07B4 - 0x07DC)
class AREDGameInfo_Lobby : public AREDGameInfo_LobbyBase
{
public:
	class UAudioComponent*                             EasyChatVoiceComp[8];                          // 0x07B4 (0x0020) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UREDGfxMovieManager_Network*                 NetworkManager;                                // 0x07D4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWaitAsyncLoading : 1;                         // 0x07D8 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_Lobby");
		}

		return uClassPointer;
	};

	void eventPlayEasyChatVoice(int32_t Slot, class USoundCue* Cue);
	void UpdateWaitAsyncLoading();
	void eventTick(float DeltaTime);
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
};

// Class REDGame.REDGameInfo_MainMenu
// 0x0024 (0x0494 - 0x04B8)
class AREDGameInfo_MainMenu : public AREDGameInfo_Menu
{
public:
	class UAudioComponent*                             EasyChatVoiceComp[8];                          // 0x0494 (0x0020) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UREDTexture2DArray*                          Tex2DArrayPlayersPlate;                        // 0x04B4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_MainMenu");
		}

		return uClassPointer;
	};

	void eventPlayEasyChatVoice(int32_t Slot, class USoundCue* Cue);
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
};

// Class REDGame.REDGameInfo_MainMenu20
// 0x0008 (0x0494 - 0x049C)
class AREDGameInfo_MainMenu20 : public AREDGameInfo_Menu
{
public:
	class UREDTexture2DArray*                          Tex2DArrayPlayersPlate;                        // 0x0494 (0x0004) [0x0000000000000000]               
	class UREDTexture2DArray*                          Tex2DArrayDF;                                  // 0x0498 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_MainMenu20");
		}

		return uClassPointer;
	};

	void eventGameEnding();
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
};

// Class REDGame.REDGameInfo_NetworkMenu
// 0x0000 (0x0490 - 0x0490)
class AREDGameInfo_NetworkMenu : public AREDGameInfo
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_NetworkMenu");
		}

		return uClassPointer;
	};

	void eventSwitchPause(bool isPause);
	void eventTick(float DeltaTime);
	void eventGameEnding();
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	void UpdateDraw();
	void UpdateMain();
	void SceneFinalize();
	void SceneInitialize();
	void UpdatePause();
};

// Class REDGame.REDGameInfo_StoryStaffRoll
// 0x000C (0x0490 - 0x049C)
class AREDGameInfo_StoryStaffRoll : public AREDGameInfo
{
public:
	class UREDGfxMoviePlayer_MenuStaffRoll_Story*      StaffRollStory;                                // 0x0490 (0x0004) [0x0000000000000000]               
	class UREDCharaAsset*                              CharaAssets;                                   // 0x0494 (0x0004) [0x0000000000000000]               
	uint32_t                                           bStaffRollStart : 1;                           // 0x0498 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_StoryStaffRoll");
		}

		return uClassPointer;
	};

	void eventSwitchPause(bool isPause);
	void eventTick(float DeltaTime);
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	void UpdatePause();
};

// Class REDGame.REDGameInfo_TestMode
// 0x0000 (0x0490 - 0x0490)
class AREDGameInfo_TestMode : public AREDGameInfo
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_TestMode");
		}

		return uClassPointer;
	};

	void eventStopTestBGM();
	void eventPlayTestBGM();
	void eventTick(float DeltaTime);
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	void UpdateTestMode();
	void FinalizeTestMode();
	void InitializeTestMode();
};

// Class REDGame.REDGameOnlineLobbyInterfaceSteamworks
// 0x000C (0x003C - 0x0048)
class UREDGameOnlineLobbyInterfaceSteamworks : public UObject
{
public:
	class FString                                      ErrorMessage;                                  // 0x003C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameOnlineLobbyInterfaceSteamworks");
		}

		return uClassPointer;
	};

	void LobbyReceiveBinaryData(int32_t LobbyIndex, int32_t MemberIndex, const class FString& Type, const class FString& Message, class TArray<struct FActiveLobbyInfo>& outLobbyList);
	void LobbyReceiveMessage(int32_t LobbyIndex, int32_t MemberIndex, const class FString& Type, const class FString& Message, class TArray<struct FActiveLobbyInfo>& outLobbyList);
	void LobbyKicked(int32_t LobbyIndex, int32_t AdminIndex, class TArray<struct FActiveLobbyInfo>& outLobbyList);
	void LobbyInviteComplete(const struct FUniqueNetId& LobbyId, const struct FUniqueNetId& FriendId, bool bAccepted);
	void LobbyMemberSettingsUpdate(int32_t LobbyIndex, int32_t MemberIndex, class TArray<struct FActiveLobbyInfo>& outLobbyList);
	void LobbyMemberStatusUpdate(int32_t LobbyIndex, int32_t MemberIndex, int32_t InstigatorIndex, const class FString& Status, class TArray<struct FActiveLobbyInfo>& outLobbyList);
	void LobbySettingsUpdate(int32_t LobbyIndex, class TArray<struct FActiveLobbyInfo>& outLobbyList);
	void JoinLobbyComplete(bool bWasSuccessful, int32_t LobbyIndex, const struct FUniqueNetId& LobbyUID, const class FString& Error, class TArray<struct FActiveLobbyInfo>& outLobbyList);
	void FindLobbiesComplete(bool bWasSuccessful, class TArray<struct FBasicLobbyInfo>& outLobbyList);
	bool eventFindLobbies(const class TArray<struct FFindLobbyFilter>& optionalFindFilters, ELobbyDistance optionalDistance);
	void CreateLobbyComplete(bool bWasSuccessful, const struct FUniqueNetId& LobbyId, const class FString& Error);
	bool eventCreateLobby(int32_t MaxPlayers, ELobbyVisibility optionalType, const class TArray<struct FLobbySetting>& optionalLobbySettings);
	void eventCleanup();
	void eventInitialize();
	void LobbyKickedNative(int32_t LobbyIndex, int32_t AdminIndex);
	void LobbyInviteCompleteNative(const struct FUniqueNetId& LobbyId, const struct FUniqueNetId& FriendId, bool bAccepted);
	void LobbyReceiveBinaryDataNative(int32_t LobbyIndex, int32_t MemberIndex, const class FString& Type, const class FString& Message);
	void LobbyReceiveMessageNative(int32_t LobbyIndex, int32_t MemberIndex, const class FString& Type, const class FString& Message);
	void LobbyMemberSettingsUpdateNative(int32_t LobbyIndex, int32_t MemberIndex);
	void LobbyMemberStatusUpdateNative(int32_t LobbyIndex, int32_t MemberIndex, int32_t InstigatorIndex, const class FString& Status);
	void LobbySettingsUpdateNative(int32_t LobbyIndex);
	void JoinLobbyCompleteNative(bool bWasSuccessful, int32_t LobbyIndex, const struct FUniqueNetId& LobbyUID, const class FString& Error);
	void FindLobbiesCompleteNative(bool bWasSuccessful, const class TArray<struct FFoundLobby>& foundList);
	void CreateLobbyCompleteNative(bool bWasSuccessful, const struct FUniqueNetId& LobbyId, const class FString& Error);
	void CleanupNative();
	struct FUniqueNetId JoinedLobbyId();
	void InitializeNative();
};

// Class REDGame.REDGameStatsBase
// 0x0058 (0x003C - 0x0094)
class UREDGameStatsBase : public UObject
{
public:
	class UClass*                                      StatsReadClass;                                // 0x003C (0x0004) [0x0000000000000000]               
	class UOnlineStatsRead*                            StatsRead;                                     // 0x0040 (0x0004) [0x0000000000000000]               
	class UClass*                                      StatsWriteClass;                               // 0x0044 (0x0004) [0x0000000000000000]               
	class UOnlineStatsWrite*                           StatsWrite;                                    // 0x0048 (0x0004) [0x0000000000000000]               
	class TArray<struct FAchievementData>              AchievementsArray;                             // 0x004C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              UnlockedAchievementsArray;                     // 0x0058 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FStatsData>                    StatsArray;                                    // 0x0064 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bStatsReaded : 1;                              // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ReadStatsCount;                                // 0x0074 (0x0004) [0x0000000000000000]               
	class APlayerController*                           PC;                                            // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            LocalPlayerOwnerIndex;                         // 0x007C (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                PlayerUniqueNetId;                             // 0x0080 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __UnlockedAchievementsSort__Delegate;          // 0x0088 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameStatsBase");
		}

		return uClassPointer;
	};

	void FlushStatsCompleteNative();
	void FlushStatsComplete(const class FName& SessionName, bool bWasSuccessful);
	void WriteStats();
	void AchievementDoneNative(int32_t unlockedAchievementId);
	void AchievementDone(bool bWasSuccessful);
	void UnlockAchievement(int32_t AchievementId);
	int32_t UpdateStatsBitCount(int32_t StatsID, int32_t BitMask, int32_t BitMax);
	int32_t UpdateStatsCount(int32_t StatsID, int32_t optionalCount, int32_t optionalCriteria);
	void UpdateCompleteAchivementStats();
	bool CheckUnlockedAchievement(int32_t AchievementId);
	int32_t UnlockedAchievementsSort(int32_t A, int32_t B);
	int32_t UpdateStats(int32_t StatsID, int32_t optionalValue, int32_t optionalMax);
	int32_t eventUpdate(int32_t LocalPlayerIndex, int32_t StatsID, int32_t optionalValue, int32_t optionalMax, bool optionalBSkipCommit);
	void ReadStatsCompleteNative();
	void ReadStatsComplete(bool bWasSuccessful);
	void ReadStats();
	void eventRead(int32_t LocalPlayerIndex);
	void eventCleanup();
	class APlayerController* GetPC();
	class ULocalPlayer* GetLP();
};

// Class REDGame.REDGameStats
// 0x0000 (0x0094 - 0x0094)
class UREDGameStats : public UREDGameStatsBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameStats");
		}

		return uClassPointer;
	};

	void ReadStatsCompleteNative();
};

// Class REDGame.REDGameViewportClient
// 0x0010 (0x0128 - 0x0138)
class UREDGameViewportClient : public UGameViewportClient
{
public:
	uint32_t                                           FadeDraw : 1;                                  // 0x0128 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           FadeEnd : 1;                                   // 0x0128 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              FadeTime;                                      // 0x012C (0x0004) [0x0000000000000000]               
	float                                              FadeTimeAdd;                                   // 0x0130 (0x0004) [0x0000000000000000]               
	int32_t                                            FadeColor;                                     // 0x0134 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameViewportClient");
		}

		return uClassPointer;
	};

	void eventGameSessionEnded();
	void eventTick(float DeltaTime);
	void PostRender(class UCanvas* Canvas);
	void UpdateFade();
	void eventChangeFadeColor(int32_t inFadeColor);
	void AdvanceFadeFrame(int32_t frame);
	void QuickFadeEnd();
	void FadeOutFast();
	void FadeOut(int32_t optionalFrame);
	void FadeIn(int32_t optionalFrame);
	void PostDrawUpdate();
	void PostUpdate();
	void UpdateFade_Tick();
	void DrawFade();
	void FlushDebugDraw(class UCanvas* Canvas);
	void FlushRender2D(class UCanvas* Canvas);
};

// Class REDGame.REDGfxMovieArray
// 0x0050 (0x003C - 0x008C)
class UREDGfxMovieArray : public UObject
{
public:
	class TArray<struct FMoviePlayerClassData>         MoviePlayerClassDataArray;                     // 0x003C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MoviePlayerIndexMemoryLast;                    // 0x0048 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer*                          MoviePlayerArray[16];                          // 0x004C (0x0040) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMovieArray");
		}

		return uClassPointer;
	};

	void SetDispFromCategory(bool disp, EREDMovie_Category Category);
	void Update();
	int32_t SearchEmptyMovieIndex();
	void ReleaseGfxMovie(class UREDGfxMoviePlayer* Movie);
	class UREDGfxMoviePlayer* CreateGfxMovie(const class FString& MovieName, int32_t optionalParam0, int32_t optionalParam1, int32_t optionalParam2, int32_t optionalParam3);
};

// Class REDGame.REDGfxMovieManager_BattleHUD
// 0x0030 (0x003C - 0x006C)
class UREDGfxMovieManager_BattleHUD : public UObject
{
public:
	class TArray<class UREDGfxMoviePlayer_BattleHUD*>  HUDArray;                                      // 0x003C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBattleHUD_PreFrameData                     PreData;                                       // 0x0048 (0x0024) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMovieManager_BattleHUD");
		}

		return uClassPointer;
	};

	void FadeOut();
	void FadeIn();
	void HideAll();
	void ShowAnime();
	void ShowQuick();
	void AdjustPos(int32_t offsetUp, int32_t offsetDown);
	void RVNBlinkEffect(int32_t Player);
	void RVNRiseEffect(int32_t Player);
	void JKOGhostGauge(int32_t Player, int32_t ColorID, int32_t Type, bool disp, bool hide, int32_t lv, float gauge);
	void BurstKakuseiEff(int32_t Dir);
	void BurstShake(int32_t Player);
	void BurstHeal(int32_t Player);
	void SetBurstKakusei(int32_t Player, bool flag);
	void SetStylishMode(int32_t Player, bool flag);
	void UpdateSpectator(int32_t Slot, bool isHeadSet, bool isSpeak);
	void SetSpectator(int32_t Slot, int32_t colorSlot, bool isIn, const class FString& OnlineID);
	void SetSpectatorDisp(bool disp);
	void UpdateMOM(int32_t Player, float armorGauge, int32_t armorState);
	void SetTensGaugeColor(int32_t Player, int32_t MulColor, int32_t AddColor);
	void SetHPGaugeColor(int32_t Player, int32_t MulColor, int32_t AddColor);
	void SetVersionStr(const class FString& Str);
	void CardInfo_SetRecord(int32_t Player, const class FString& Str);
	void CardInfo_SetIcon(int32_t Player, bool disp);
	void CardInfo_SetTitle(int32_t Player, const class FString& Str);
	void CardInfo_SetGrade(int32_t Player, const class FString& Str);
	void CardInfo_SetPlayerName(int32_t Player, const class FString& Str);
	void SetHandicap(int32_t Player, bool flag, int32_t val);
	void UpdateSpecialCameraFlag(bool flag);
	void UpdateExGauge(int32_t Player, int32_t Id, int32_t Icon, int32_t val, int32_t MaxVal, int32_t Col, int32_t Mode);
	void SetExGaugeActive(int32_t Player, int32_t Id, bool Active);
	void ShowExclamation(int32_t Player, const class FString& Type, int32_t X, int32_t Y, int32_t Dir);
	void SetShinSousaiDamage(int32_t Player, int32_t frame);
	void UpdateShinSousaiTimer(int32_t Time);
	void SetButtonRendaIcon(int32_t Player, int32_t Time, int32_t X, int32_t Y, bool dispGauge);
	void SetLeverGachaIcon(int32_t Player, int32_t Time, int32_t X, int32_t Y, bool dispGauge);
	void SetOffscreenCharaIcon(int32_t Player, bool disp, int32_t PosX, int32_t Dir);
	void ReqNegativePenalty(int32_t Player);
	void SetNegativeDangerDisp(int32_t Player, bool disp, bool level2);
	void UpdateTensionBalance(float val1, float val2);
	void SetCounterHitByGuardBalance(int32_t Player, bool isCounterHit);
	void UpdateGuardBalance(float val1, float val2, float red1, float red2);
	void RequestInfoText(int32_t TextID, int32_t Player, int32_t subID1, int32_t subID2);
	void DispBurstSealIcon(int32_t Player, bool disp, bool Input);
	void UpdateRoundWin(int32_t Player, int32_t WinCount);
	void SetupRoundNum(int32_t round1, int32_t round2);
	void HideCombo(int32_t Player);
	void ShowCombo(int32_t combo, int32_t Player, bool isImperfect, int32_t Damage, bool damagedisp, int32_t comp0, int32_t comp1, int32_t comp2);
	void UpdateTimer(int32_t Time);
	void UpdateBurst(float val1, float val2);
	void SetTensionState(int32_t Player, const class FString& State);
	void UpdateTension(float tens1, int32_t tescol1, float tens2, int32_t tescol2);
	void UpdateHP(float hp1, float hp2, float red1, float red2, float white1, float white2);
	void ResetOnRound();
	void AddBattleHUD(class UREDGfxMoviePlayer_BattleHUD* HUD);
	void InitializeParam();
};

// Class REDGame.REDGfxMovieManager_Network_Base
// 0x0000 (0x003C - 0x003C)
class UREDGfxMovieManager_Network_Base : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMovieManager_Network_Base");
		}

		return uClassPointer;
	};

	bool IsTournamentLobby();
	bool IsTournamentLeaveLobbyForce(class FString& outErrMsgID);
	bool IsTournamentGotoRoom();
	bool IsAsyncLoading();
	EUE_BGM_ID GetRandomBGM();
	void SetupRandomBGM();
	bool IsSilentBGM();
	bool IsNormalBGM();
	bool IsRandomBGM();
	void UpdateCheckWeakErrorInRoom();
	bool IsInLobby();
	void ErrorNetwork();
	void InitializeNative();
	void SetupWelcomeScene();
	class FString GetSystemErrorMessageID();
	bool IsAnySystemError();
	int32_t PopUp_CheckReturnVal(int32_t Handle);
	int32_t PopUp_OpenYesNo(const class FString& messegaID);
	bool MenuWindow_IsActiveAny();
	bool PopUpErr_IsActive();
	void PopUpErr_OpenOK(const class FString& messegaID);
	bool PopUp_IsActive();
	void PopUp_OpenOK(const class FString& messegaID);
};

// Class REDGame.REDGfxMovieManager_Network
// 0x001C (0x003C - 0x0058)
class UREDGfxMovieManager_Network : public UREDGfxMovieManager_Network_Base
{
public:
	class UClass*                                      CurrentMenuClass;                              // 0x003C (0x0004) [0x0000000000000000]               
	class UClass*                                      PrevMenuClass;                                 // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentState;                                  // 0x0044 (0x0004) [0x0000000000000000]               
	uint32_t                                           bTriggerState : 1;                             // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRankMatch : 1;                                // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bFromInvite : 1;                               // 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bRandomBGMLoadStart : 1;                       // 0x0048 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bStartLobbySelect : 1;                         // 0x0048 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bGotoTournamentLobby : 1;                      // 0x0048 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bWithMainMenu : 1;                             // 0x0048 (0x0004) [0x0000000000000000] [0x00000040] 
	class UREDGfxMoviePlayer_MenuNetwork_Base*         CurrentMenuInst;                               // 0x004C (0x0004) [0x0000000000000000]               
	class UREDCharaAsset*                              BGMAssets;                                     // 0x0050 (0x0004) [0x0000000000000000]               
	class USoundCue*                                   RandomBGMCue;                                  // 0x0054 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMovieManager_Network");
		}

		return uClassPointer;
	};

	void Update();
	void Update_End(bool bTrigger);
	void Update_Error(bool bTrigger);
	void Update_ErrorWait2(bool bTrigger);
	void Update_ErrorWait(bool bTrigger);
	void Update_Main(bool bTrigger);
	bool IsNetworkEnd();
	void StartNetwork(ENETMANAGER_STARTMENU StartMenu);
	void StartBGM(bool optionalIsRoom);
	void Initialize();
	bool IsMapCollisionExist();
	void UpdateMapCollision(int32_t optionalKyoutaiMax);
	void UpdateLoadRandomBGM();
};

// Class REDGame.REDGfxMoviePlayer
// 0x0038 (0x0168 - 0x01A0)
class UREDGfxMoviePlayer : public UGFxMoviePlayer
{
public:
	EREDMovie_Category                                 MovieCategory;                                 // 0x0168 (0x0001) [0x0000000000000000]               
	class UREDSoundPlayer*                             Sound;                                         // 0x016C (0x0004) [0x0000000000000000]               
	int32_t                                            Param0;                                        // 0x0170 (0x0004) [0x0000000000000000]               
	int32_t                                            Param1;                                        // 0x0174 (0x0004) [0x0000000000000000]               
	int32_t                                            Param2;                                        // 0x0178 (0x0004) [0x0000000000000000]               
	int32_t                                            Param3;                                        // 0x017C (0x0004) [0x0000000000000000]               
	uint32_t                                           bAutoRelease : 1;                              // 0x0180 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ReferenceIndex;                                // 0x0184 (0x0004) [0x0000000000000000]               
	class FString                                      TextCategoryName;                              // 0x0188 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AsInstFunc;                                    // 0x0194 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer");
		}

		return uClassPointer;
	};

	void AS_FuncVoid();
	void AS_FuncInt(int32_t Arg);
	void AS_FuncString(const class FString& Arg);
	void FuncVoid(const class FString& Path);
	void FuncInt(const class FString& Path, int32_t Arg);
	void FuncString(const class FString& Path, const class FString& Arg);
	void StopInstLabel(const class FString& Path, const class FString& Label);
	void PlayInstLabel(const class FString& Path, const class FString& Label);
	int32_t REDRand(int32_t Max);
	class AREDPlayerController* REDPC();
	class FString GetLocalizeStaffRoll(const class FString& Id, ESTAFFROLL_TEXT_TYPE Type);
	class FString GetLocalizeString(const class FString& WidgetName);
	void SetDispFromCategory(bool disp, EREDMovie_Category Category);
	bool eventWidgetInitialized(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget);
	void PlaySoundToUnreal(const class FString& soundName);
	int32_t IsAnimeEndScript();
	bool eventIsAnimeEnd();
	bool MovieStartInternal(bool StartPaused);
	bool eventMovieStart(bool optionalStartPaused);
	class FString eventGetPackageString(EPKG_NAME Id, bool optionalIsBattle);
};

// Class REDGame.REDGfxMoviePlayer_BattleHaiku
// 0x0000 (0x01A0 - 0x01A0)
class UREDGfxMoviePlayer_BattleHaiku : public UREDGfxMoviePlayer
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_BattleHaiku");
		}

		return uClassPointer;
	};

	void ResetHaiku(int32_t LRpos);
	void FadeOutHaiku(int32_t LRpos);
	void SetShimonoku(int32_t LRpos, const class FString& ku);
	void SetNakanoku(int32_t LRpos, const class FString& ku);
	void SetKaminoku(int32_t LRpos, const class FString& ku);
	bool Start(bool optionalStartPaused);
};

// Class REDGame.REDGfxMoviePlayer_BattleHUD
// 0x0280 (0x01A0 - 0x0420)
class UREDGfxMoviePlayer_BattleHUD : public UREDGfxMoviePlayer
{
public:
	uint32_t                                           bUpdateFlag : 1;                               // 0x01A0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __ResetOnRound__Delegate;                      // 0x01A4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateHP__Delegate;                          // 0x01B0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateTension__Delegate;                     // 0x01BC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetTensionState__Delegate;                   // 0x01C8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateBurst__Delegate;                       // 0x01D4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateTimer__Delegate;                       // 0x01E0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ShowCombo__Delegate;                         // 0x01EC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __HideCombo__Delegate;                         // 0x01F8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetupRoundNum__Delegate;                     // 0x0204 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateRoundWin__Delegate;                    // 0x0210 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __DispBurstSealIcon__Delegate;                 // 0x021C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __RequestInfoText__Delegate;                   // 0x0228 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateGuardBalance__Delegate;                // 0x0234 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetCounterHitByGuardBalance__Delegate;       // 0x0240 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateTensionBalance__Delegate;              // 0x024C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetNegativeDangerDisp__Delegate;             // 0x0258 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ReqNegativePenalty__Delegate;                // 0x0264 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetOffscreenCharaIcon__Delegate;             // 0x0270 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetLeverGachaIcon__Delegate;                 // 0x027C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetButtonRendaIcon__Delegate;                // 0x0288 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateShinSousaiTimer__Delegate;             // 0x0294 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetShinSousaiDamage__Delegate;               // 0x02A0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ShowExclamation__Delegate;                   // 0x02AC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetExGaugeActive__Delegate;                  // 0x02B8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateExGauge__Delegate;                     // 0x02C4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateSpecialCameraFlag__Delegate;           // 0x02D0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetHandicap__Delegate;                       // 0x02DC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CardInfo_SetPlayerName__Delegate;            // 0x02E8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CardInfo_SetGrade__Delegate;                 // 0x02F4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CardInfo_SetTitle__Delegate;                 // 0x0300 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CardInfo_SetIcon__Delegate;                  // 0x030C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CardInfo_SetRecord__Delegate;                // 0x0318 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetVersionStr__Delegate;                     // 0x0324 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetHPGaugeColor__Delegate;                   // 0x0330 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetTensGaugeColor__Delegate;                 // 0x033C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateMOM__Delegate;                         // 0x0348 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetSpectatorDisp__Delegate;                  // 0x0354 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetSpectator__Delegate;                      // 0x0360 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateSpectator__Delegate;                   // 0x036C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetStylishMode__Delegate;                    // 0x0378 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SetBurstKakusei__Delegate;                   // 0x0384 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __BurstHeal__Delegate;                         // 0x0390 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __BurstShake__Delegate;                        // 0x039C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __BurstKakuseiEff__Delegate;                   // 0x03A8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __AdjustPos__Delegate;                         // 0x03B4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __JKOGhostGauge__Delegate;                     // 0x03C0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __RVNRiseEffect__Delegate;                     // 0x03CC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __RVNBlinkEffect__Delegate;                    // 0x03D8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ShowQuick__Delegate;                         // 0x03E4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ShowAnime__Delegate;                         // 0x03F0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __HideAll__Delegate;                           // 0x03FC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __FadeIn__Delegate;                            // 0x0408 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __FadeOut__Delegate;                           // 0x0414 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_BattleHUD");
		}

		return uClassPointer;
	};

	void ChangeMCColor(class UGFxObject* pMC, int32_t colorMul, int32_t colorAdd);
	void FadeOut();
	void FadeIn();
	void HideAll();
	void ShowAnime();
	void ShowQuick();
	void RVNBlinkEffect(int32_t Player);
	void RVNRiseEffect(int32_t Player);
	void JKOGhostGauge(int32_t Player, int32_t ColorID, int32_t Type, bool disp, bool hide, int32_t lv, float gauge);
	void AdjustPos(int32_t offsetUp, int32_t offsetDown);
	void BurstKakuseiEff(int32_t Dir);
	void BurstShake(int32_t Player);
	void BurstHeal(int32_t Player);
	void SetBurstKakusei(int32_t Player, bool flag);
	void SetStylishMode(int32_t Player, bool flag);
	void UpdateSpectator(int32_t Slot, bool isHeadSet, bool isSpeak);
	void SetSpectator(int32_t Slot, int32_t colorSlot, bool isIn, const class FString& OnlineID);
	void SetSpectatorDisp(bool disp);
	void UpdateMOM(int32_t Player, float armorGauge, int32_t armorState);
	void SetTensGaugeColor(int32_t Player, int32_t MulColor, int32_t AddColor);
	void SetHPGaugeColor(int32_t Player, int32_t MulColor, int32_t AddColor);
	void SetVersionStr(const class FString& Str);
	void CardInfo_SetRecord(int32_t Player, const class FString& Str);
	void CardInfo_SetIcon(int32_t Player, bool disp);
	void CardInfo_SetTitle(int32_t Player, const class FString& Str);
	void CardInfo_SetGrade(int32_t Player, const class FString& Str);
	void CardInfo_SetPlayerName(int32_t Player, const class FString& Str);
	void SetHandicap(int32_t Player, bool flag, int32_t val);
	void UpdateSpecialCameraFlag(bool flag);
	void UpdateExGauge(int32_t Player, int32_t Id, int32_t Icon, int32_t val, int32_t MaxVal, int32_t Col, int32_t Mode);
	void SetExGaugeActive(int32_t Player, int32_t Id, bool Active);
	void ShowExclamation(int32_t Player, const class FString& Type, int32_t X, int32_t Y, int32_t Dir);
	void SetShinSousaiDamage(int32_t Player, int32_t frame);
	void UpdateShinSousaiTimer(int32_t Time);
	void SetButtonRendaIcon(int32_t Player, int32_t Time, int32_t X, int32_t Y, bool dispGauge);
	void SetLeverGachaIcon(int32_t Player, int32_t Time, int32_t X, int32_t Y, bool dispGauge);
	void SetOffscreenCharaIcon(int32_t Player, bool disp, int32_t PosX, int32_t Dir);
	void ReqNegativePenalty(int32_t Player);
	void SetNegativeDangerDisp(int32_t Player, bool disp, bool level2);
	void UpdateTensionBalance(float val1, float val2);
	void SetCounterHitByGuardBalance(int32_t Player, bool isCounterHit);
	void UpdateGuardBalance(float val1, float val2, float red1, float red2);
	void RequestInfoText(int32_t TextID, int32_t Player, int32_t subID1, int32_t subID2);
	void DispBurstSealIcon(int32_t Player, bool disp, bool Input);
	void UpdateRoundWin(int32_t Player, int32_t WinCount);
	void SetupRoundNum(int32_t round1, int32_t round2);
	void HideCombo(int32_t Player);
	void ShowCombo(int32_t combo, int32_t Player, bool isImperfect, int32_t Damage, bool damagedisp, int32_t comp0, int32_t comp1, int32_t comp2);
	void UpdateTimer(int32_t Time);
	void UpdateBurst(float val1, float val2);
	void SetTensionState(int32_t Player, const class FString& State);
	void UpdateTension(float tens1, int32_t tescol1, float tens2, int32_t tescol2);
	void UpdateHP(float hp1, float hp2, float red1, float red2, float white1, float white2);
	void ResetOnRound();
	int32_t GetPlayerPosX(int32_t Player);
};

// Class REDGame.REDGfxMoviePlayer_BattleDownside
// 0x0110 (0x0420 - 0x0530)
class UREDGfxMoviePlayer_BattleDownside : public UREDGfxMoviePlayer_BattleHUD
{
public:
	class UGFxObject*                                  GlobalRoot;                                    // 0x0420 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  GaugeAllMC;                                    // 0x0424 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bInitialized : 1;                              // 0x0428 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FTensionGaugeMC                             TensionGaugeMCs[2];                            // 0x042C (0x0080) [0x0000000000002000] (CPF_Transient)
	struct FDangerTimeMC                               DangerTimeMCs;                                 // 0x04AC (0x001C) [0x0000000000002000] (CPF_Transient)
	struct FExGaugeMC                                  ExGaugeMCs[2];                                 // 0x04C8 (0x0048) [0x0000000000002000] (CPF_Transient)
	struct FNegativeMC                                 NegativeMCs[2];                                // 0x0510 (0x0010) [0x0000000000002000] (CPF_Transient)
	struct FBurstDownSideMC                            BurstMCs[2];                                   // 0x0520 (0x0010) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_BattleDownside");
		}

		return uClassPointer;
	};

	void UpdateHUDBurst();
	void UpdateHUDDangerDamage();
	void SetDangerDamage(int32_t Player, int32_t frame);
	void UpdateHUDNegaPenaPos();
	void UpdateNegaPenaPos(int32_t Player, class UGFxObject* mc, float OffsetY);
	void UpdateHUDNegaPena();
	void ReqHUDNegativePenalty(int32_t Player);
	void UpdateHUDNegativeDanger();
	void SetHUDNegativeDangerDisp(int32_t Player, bool disp, bool level2);
	void SetHUDExGaugeActive(int32_t Player);
	void UpdateHUDExGauge(int32_t Player, int32_t Id, int32_t Icon, int32_t val, int32_t MaxVal, int32_t Col, int32_t Mode);
	void UpdateExGaugeTrig();
	void UpdateExGaugeActive();
	void UpdateHUDDangerTime();
	void SetHUDDangerTimeMC(class UGFxObject* mc, float Time);
	void ChangeTensionCoverColor(int32_t MulColor, int32_t AddColor);
	void UpdateHUDTensionState(int32_t Player);
	void UpdateHUDTensGaugeColor();
	void UpdateHUDTension();
	void UpdateAll();
	void Update(float DeltaTime);
	void FadeOut();
	void FadeIn();
	void HideAll();
	void ShowAnime();
	void ShowQuick();
	void AdjustPos(int32_t offsetUp, int32_t offsetDown);
	void RVNBlinkEffect(int32_t Player);
	void RVNRiseEffect(int32_t Player);
	void BurstKakuseiEff(int32_t Dir);
	void SetBurstKakusei(int32_t Player, bool flag);
	void CardInfo_SetRecord(int32_t Player, const class FString& Str);
	void SetTensGaugeColor(int32_t Player, int32_t MulColor, int32_t AddColor);
	void SetShinSousaiDamage(int32_t Player, int32_t frame);
	void UpdateShinSousaiTimer(int32_t Time);
	void UpdateExGauge(int32_t Player, int32_t Id, int32_t Icon, int32_t val, int32_t MaxVal, int32_t Col, int32_t Mode);
	void SetExGaugeActive(int32_t Player, int32_t Id, bool Active);
	void ReqNegativePenalty(int32_t Player);
	void SetNegativeDangerDisp(int32_t Player, bool disp, bool level2);
	void UpdateTensionBalance(float val1, float val2);
	void SetTensionState(int32_t Player, const class FString& State);
	void UpdateTension(float tens1, int32_t tescol1, float tens2, int32_t tescol2);
	void ResetOnRound();
	bool MovieStartInternal(bool StartPaused);
	void InitializeMC();
	void InitializeBurstMC(int32_t Player, struct FBurstDownSideMC& outMc);
	void InitializeNegativeMC(int32_t Player, struct FNegativeMC& outMc);
	void InitializeDangerTimeMC();
	void InitializeExGaugeMC(int32_t Player, struct FExGaugeMC& outMc);
	void InitializeTensionGaugeMC(int32_t Player, struct FTensionGaugeMC& outMc);
};

// Class REDGame.REDGfxMoviePlayer_BattleMiddleF
// 0x0014 (0x0420 - 0x0434)
class UREDGfxMoviePlayer_BattleMiddleF : public UREDGfxMoviePlayer_BattleHUD
{
public:
	int32_t                                            LeverGachaFlag[2];                             // 0x0420 (0x0008) [0x0000000000000000]               
	int32_t                                            ButtonRendaFlag[2];                            // 0x0428 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  GlobalRoot;                                    // 0x0430 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_BattleMiddleF");
		}

		return uClassPointer;
	};

	void FadeOut();
	void FadeIn();
	void HideAll();
	void ShowAnime();
	void ShowQuick();
	void UpdateSpecialCameraFlag(bool flag);
	void ShowExclamation(int32_t Player, const class FString& Type, int32_t X, int32_t Y, int32_t Dir);
	void SetButtonRendaIcon(int32_t Player, int32_t Time, int32_t X, int32_t Y, bool dispGauge);
	void SetLeverGachaIcon(int32_t Player, int32_t Time, int32_t X, int32_t Y, bool dispGauge);
	void SetOffscreenCharaIcon(int32_t Player, bool disp, int32_t PosX, int32_t Dir);
	bool MovieStartInternal(bool StartPaused);
};

// Class REDGame.REDGfxMoviePlayer_BattleUpside
// 0x0460 (0x0420 - 0x0880)
class UREDGfxMoviePlayer_BattleUpside : public UREDGfxMoviePlayer_BattleHUD
{
public:
	int32_t                                            SandstormCounter[2];                           // 0x0420 (0x0008) [0x0000000000000000]               
	int32_t                                            DamageForComboEffect[2];                       // 0x0428 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   BurstPos[2];                                   // 0x0430 (0x0010) [0x0000000000000000]               
	int32_t                                            BurstShakeCount[2];                            // 0x0440 (0x0008) [0x0000000000000000]               
	uint32_t                                           bInitialized : 1;                              // 0x0448 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class UGFxObject*                                  GlobalRoot;                                    // 0x044C (0x0004) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  GaugeAllMC;                                    // 0x0450 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  MiddlePlateRootMC;                             // 0x0454 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  GaugeRootMC[2];                                // 0x0458 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FMiddlePlateMC                              MiddlePlateMCs[2];                             // 0x0460 (0x0188) [0x0000000000002000] (CPF_Transient)
	struct FRoundNumIconMC                             RoundNumIconMCs[2];                            // 0x05E8 (0x0048) [0x0000000000002000] (CPF_Transient)
	struct FHPGaugeMC                                  HPGaugeMCs[2];                                 // 0x0630 (0x00C0) [0x0000000000002000] (CPF_Transient)
	struct FTimerVal                                   TimerVals;                                     // 0x06F0 (0x002C) [0x0000000000002000] (CPF_Transient)
	int32_t                                            DangerTime;                                    // 0x071C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            DangerAnimCounter;                             // 0x0720 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            DangerAnimCounterMax;                          // 0x0724 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            DangerColorRed;                                // 0x0728 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            DangerTimePreFrame;                            // 0x072C (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FBurstMC                                    BurstMCs[2];                                   // 0x0730 (0x0070) [0x0000000000002000] (CPF_Transient)
	struct FJKOGaugeMC                                 JKOGauge1P[3];                                 // 0x07A0 (0x006C) [0x0000000000002000] (CPF_Transient)
	struct FJKOGaugeMC                                 JKOGauge2P[3];                                 // 0x080C (0x006C) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  HandicapMC[2];                                 // 0x0878 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_BattleUpside");
		}

		return uClassPointer;
	};

	void UpdateBurstSealIcon(int32_t Side, bool disp, bool Input);
	void UpdateDispBurstSeal(int32_t Side);
	void UpdateHUDBurst();
	void SetTimer(int32_t digit1, int32_t digit10, int32_t digit100, int32_t digitNum);
	void UpdateHUDTimer();
	void JKOUpdate();
	void JKOUpdateGauge(int32_t typeId, struct FJKOGaugeMC& outMc);
	void UpdateDangerTime();
	void UpdateDangerDamage(int32_t Player);
	void UpdateDanger();
	void UpdateGBLight();
	void UpdateRoundNumIcon();
	void UpdateHPGaugeMulti();
	void UpdateHPGaugeColor();
	void UpdateHideCombo();
	void UpdateComboEffect();
	void UpdateComboAS();
	void HideComboAS(struct FMiddlePlateMC& outMc);
	void ShowComboAS(struct FMiddlePlateMC& outMc);
	void UpdateAll();
	void Update(float DeltaTime);
	void Sandstorm2P(const class FString& Label);
	void Sandstorm1P(const class FString& Label);
	void FadeOut();
	void FadeIn();
	void HideAll();
	void ShowAnime();
	void ShowQuick();
	void SetVersionStr(const class FString& Str);
	void CardInfo_SetIcon(int32_t Player, bool disp);
	void CardInfo_SetTitle(int32_t Player, const class FString& Str);
	void CardInfo_SetGradeColor(int32_t Player, int32_t gradeColor);
	void CardInfo_SetGrade(int32_t Player, const class FString& Str);
	void CardInfo_SetPlayerName(int32_t Player, const class FString& Str);
	void SetHandicap(int32_t Player, bool flag, int32_t val);
	void AdjustPos(int32_t offsetUp, int32_t offsetDown);
	void JKOGhostGauge(int32_t Player, int32_t ColorID, int32_t Type, bool disp, bool hide, int32_t lv, float gauge);
	void BurstShake(int32_t Player);
	void BurstHeal(int32_t Player);
	void SetBurstKakusei(int32_t Player, bool flag);
	void SetStylishMode(int32_t Player, bool flag);
	void UpdateSpectator(int32_t Slot, bool isHeadSet, bool isSpeak);
	void SetSpectator(int32_t Slot, int32_t colorSlot, bool isIn, const class FString& OnlineID);
	void SetSpectatorDisp(bool disp);
	void UpdateMOM(int32_t Player, float armorGauge, int32_t armorState);
	void SetHPGaugeColor(int32_t Player, int32_t MulColor, int32_t AddColor);
	void SetShinSousaiDamage(int32_t Player, int32_t frame);
	void UpdateShinSousaiTimer(int32_t Time);
	void SetCounterHitByGuardBalance(int32_t Player, bool isCounterHit);
	void UpdateGuardBalance(float val1, float val2, float red1, float red2);
	void DispBurstSealIcon(int32_t Player, bool disp, bool Input);
	void UpdateRoundWin(int32_t Player, int32_t WinCount);
	void SetupRoundNum(int32_t round1, int32_t round2);
	void UpdateTimer(int32_t Time);
	void RequestInfoText(int32_t TextID, int32_t Player, int32_t subID1, int32_t subID2);
	void HideCombo(int32_t Player);
	void ShowComboSub(int32_t combo, int32_t Player, bool isImperfect, int32_t Damage, bool damagedisp, int32_t comp0, int32_t comp1, int32_t comp2);
	void ComboEffect(int32_t Player, int32_t Level);
	void ShowCombo(int32_t combo, int32_t Player, bool isImperfect, int32_t Damage, bool damagedisp, int32_t comp0, int32_t comp1, int32_t comp2);
	void UpdateBurst(float val1, float val2);
	void UpdateHP(float hp1, float hp2, float red1, float red2, float white1, float white2);
	int32_t GetBattleVersion();
	bool MovieStartInternal(bool StartPaused);
	void InitializeMC();
	void InitializeHUDBurst(int32_t Player, struct FBurstMC& outMc);
	void InitializeHUDTimer(class UGFxObject* GaugeRoot);
	void InitializeGhostGauge(class UGFxObject* GaugeRoot);
	void InitializeGhostGaugeOne(class UGFxObject* GaugeRoot, int32_t Player, int32_t Type, struct FJKOGaugeMC& outDest);
	void InitializeRoundNumIcon(class UGFxObject* PlayerGaugeRoot, struct FRoundNumIconMC& outMc);
	void InitializeHPGauge(class UGFxObject* PlayerGaugeRoot, struct FHPGaugeMC& outMc);
	void InitializeMiddlePlate(int32_t PlayerID, class UGFxObject* MiddlePlateRoot, struct FMiddlePlateMC& outMc);
	int32_t GetScore(EUE_PLAYER_ID Player);
};

// Class REDGame.REDGfxMoviePlayer_BattleResultMedal
// 0x003C (0x01A0 - 0x01DC)
class UREDGfxMoviePlayer_BattleResultMedal : public UREDGfxMoviePlayer
{
public:
	int32_t                                            ExpAnimCounter;                                // 0x01A0 (0x0004) [0x0000000000000000]               
	int32_t                                            BaseExp[2];                                    // 0x01A4 (0x0008) [0x0000000000000000]               
	int32_t                                            NowExp[2];                                     // 0x01AC (0x0008) [0x0000000000000000]               
	int32_t                                            AddExp[2];                                     // 0x01B4 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDisp : 1;                                     // 0x01BC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIchigeki : 1;                                 // 0x01BC (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bMedalUpdate : 1;                              // 0x01BC (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            MedalAnimCounter;                              // 0x01C0 (0x0004) [0x0000000000000000]               
	class TArray<struct FMedalAnimInfo>                MedalAnimInfoArray1P;                          // 0x01C4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMedalAnimInfo>                MedalAnimInfoArray2P;                          // 0x01D0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_BattleResultMedal");
		}

		return uClassPointer;
	};

	void AS_PlayLevelUP(int32_t Player);
	void AS_SetExpBar(int32_t Player, float val);
	void AS_SetBattleResult(int32_t Player, const class FString& res);
	void AS_Show();
	void AS_SetMedalAnime(int32_t Player, int32_t Index, const class FString& medalName, int32_t Grade, int32_t Category, bool isBigPlate);
	void AS_FadeOut();
	void UpdateMedalAnime(EUE_PLAYER_ID Player, int32_t frame, class TArray<struct FMedalAnimInfo>& outInfoArray);
	void Update(float DeltaTime);
	void AddExpCallback(int32_t Player, int32_t medalIndex);
	void UpdateExpBar(int32_t Player);
	void eventSetBattleResult(int32_t Player, const class FString& res);
	void eventAddMedalInfo(int32_t Player, const class FString& medalName, int32_t Grade, int32_t Category);
	void eventShow();
	void eventSetAddExp(int32_t Player, int32_t val);
	void eventSetExp(int32_t Player, int32_t val);
	void eventSetIchigeki(bool val);
	bool MovieStartInternal(bool StartPaused);
};

// Class REDGame.REDGfxMoviePlayer_BattleResultWindow
// 0x0060 (0x01A0 - 0x0200)
class UREDGfxMoviePlayer_BattleResultWindow : public UREDGfxMoviePlayer
{
public:
	uint32_t                                           bShow : 1;                                     // 0x01A0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPauseKey : 1;                                 // 0x01A0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bRankTestSE : 1;                               // 0x01A0 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FResultWindowPlayerParam                    PlayerParam[2];                                // 0x01A4 (0x0050) [0x0000000000000000]               
	int32_t                                            ExpAnimCounter;                                // 0x01F4 (0x0004) [0x0000000000000000]               
	int32_t                                            PromoteSECounter;                              // 0x01F8 (0x0004) [0x0000000000000000]               
	int32_t                                            DemoteSECounter;                               // 0x01FC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_BattleResultWindow");
		}

		return uClassPointer;
	};

	void Update(float DeltaTime);
	void UpdateQuestWindow(int32_t Player, bool bTrigger);
	void UpdateMedalWindow(int32_t Player, bool bTrigger);
	void UpdateMainWindow(int32_t Player, bool bTrigger);
	int32_t UpdateQuest2P(bool bUp, bool bDown, int32_t addVal);
	int32_t UpdateQuest1P(bool bUp, bool bDown, int32_t addVal);
	int32_t UpdateMedal2P(bool bUp, bool bDown, int32_t addVal);
	int32_t UpdateMedal1P(bool bUp, bool bDown, int32_t addVal);
	void SetCpuRank(int32_t Player, int32_t Rank, int32_t addVal);
	void SetScore(int32_t Player, int32_t Score);
	void SetWinLoseLabel2P(const class FString& Label);
	void SetWinLoseLabel1P(const class FString& Label);
	void SetWinLose(int32_t Player, bool isWin);
	void SetMedalNum(int32_t Player, int32_t numAll, int32_t numGold, int32_t numRed);
	void SetEnglishMode();
	void AddQuestInfo_Internal(int32_t Player, const class FString& progText, const class FString& questName, float Rate, int32_t Type, const class FString& rewordStr, int32_t rewordType);
	void AddQuestInfo(int32_t Player, const class FString& questName, float Rate, int32_t Type, const class FString& rewordStr, int32_t rewordType);
	void AddMedalInfo(int32_t Player, const class FString& medalName, const class FString& medalDesc, int32_t Grade, bool smallWidth);
	void SkipDemote(int32_t Player);
	void SkipPromote(int32_t Player);
	void SetDemote(int32_t Player);
	void PlayDemote(int32_t Player);
	void SetPromote(int32_t Player);
	void PlayPromote(int32_t Player);
	void RankTestFinish(int32_t Player, int32_t Rank);
	void PlayLevelUP(int32_t Player);
	void SetRank(int32_t Player, int32_t val);
	void SetDan(int32_t Player, int32_t val, int32_t val_after);
	void SetLoseCount(int32_t Player, int32_t val);
	void SetWinCount(int32_t Player, int32_t val);
	void SetTotalCount(int32_t Player, int32_t val);
	void SetPlayerName(int32_t Player, const class FString& PlayerName);
	void SkipExpAnim(int32_t Player);
	void SetExp(int32_t Player, int32_t val, int32_t finalVal);
	void SetExpValue(int32_t Player, float val);
	bool IsEnableMainWindow(int32_t Player);
	int32_t IsShowAnimEnd();
	void ShowAnimSkip(int32_t Player);
	void ShowQuestWindow(int32_t Player, bool Show);
	void ShowMedalWindow(int32_t Player, bool Show);
	void BlackMainWindow(int32_t Player, bool Show);
	void ShowMainWindow(int32_t Player, bool Show);
	void Show(int32_t Player);
	float Exp2Rate(int32_t Exp);
	void SetWindowEnable(int32_t Player, ERESULT_WINDOW_TYPE Type, bool flag);
	bool IsTrig_Right(EUE_PLAYER_ID Player);
	bool IsTrig_Left(EUE_PLAYER_ID Player);
	bool IsRep_Down(EUE_PLAYER_ID Player);
	bool IsRep_Up(EUE_PLAYER_ID Player);
	void CommonSE(const class FName& sename);
	bool MovieStartInternal(bool StartPaused);
	void DemoteLightBar(EUE_PLAYER_ID Player);
	void PromoteLightBar(EUE_PLAYER_ID Player);
	bool IsTrig_Right_Indiv(EUE_PLAYER_ID Player);
	bool IsTrig_Left_Indiv(EUE_PLAYER_ID Player);
	bool IsRep_Down_Indiv(EUE_PLAYER_ID Player);
	bool IsRep_Up_Indiv(EUE_PLAYER_ID Player);
	int32_t GetRankFromExp(int32_t Exp);
	int32_t GetRankExpAll(int32_t Rank);
	int32_t GetNextRankExp(int32_t Rank);
};

// Class REDGame.REDGfxMoviePlayer_BG_Arena
// 0x0014 (0x01A0 - 0x01B4)
class UREDGfxMoviePlayer_BG_Arena : public UREDGfxMoviePlayer
{
public:
	struct FBGArena_StringScrollParam                  ShopNameScroll;                                // 0x01A0 (0x0014) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_BG_Arena");
		}

		return uClassPointer;
	};

	void Update(float DeltaTime);
	void SetText(const class FString& mc, const class FString& txt);
	bool Start(bool optionalStartPaused);
	void UpdateScroll();
	bool GetPlayerInfo(EUE_PLAYER_ID Player, class FString& outPlayerName, class FString& outDan, class FString& outGuild, class FString& outTitle, class FString& outComment, int32_t& outWin, int32_t& outMatch, class UTexture2D*& outIcon);
	class FString GetShopName();
	class FString GetTitleName();
};

// Class REDGame.REDGfxMoviePlayer_ChatWindow
// 0x0018 (0x01A0 - 0x01B8)
class UREDGfxMoviePlayer_ChatWindow : public UREDGfxMoviePlayer
{
public:
	class UGFxClikWidget*                              currentForm;                                   // 0x01A0 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  textField;                                     // 0x01A4 (0x0004) [0x0000000000000000]               
	uint32_t                                           isPassword : 1;                                // 0x01A8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           isStartInput : 1;                              // 0x01A8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           isStartup : 1;                                 // 0x01A8 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           isOpen : 1;                                    // 0x01A8 (0x0004) [0x0000000000000000] [0x00000008] 
	class FString                                      inputText;                                     // 0x01AC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_ChatWindow");
		}

		return uClassPointer;
	};

	class FString eventCancelInput();
	class FString eventDecideInput();
	bool eventStartInput(int32_t optionalMaxChars, const class FString& optionalText, bool optional_isPassword);
	void Cleanup();
	void startup();
	bool eventWidgetInitialized(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget);
	bool Start(bool optionalStartPaused);
	void CallSetupFocusedForm(const class FString& Text, class UGFxObject* Obj);
	void OnStop();
	void OnStart();
	void OnCleanup();
	void OnStartup();
	void setPasswordMode(bool _isPassword);
};

// Class REDGame.REDGfxMoviePlayer_Menu_Base
// 0x0014 (0x01A0 - 0x01B4)
class UREDGfxMoviePlayer_Menu_Base : public UREDGfxMoviePlayer
{
public:
	EUE_SCENE_ID                                       NextSceneID;                                   // 0x01A0 (0x0001) [0x0000000000000000]               
	uint32_t                                           bSetNextScene : 1;                             // 0x01A4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNewChallenger : 1;                            // 0x01A4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNoFadeIn : 1;                                 // 0x01A4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bGameInfoTick : 1;                             // 0x01A4 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bNewChallengerInit : 1;                        // 0x01A4 (0x0004) [0x0000000000000000] [0x00000010] 
	int32_t                                            CurrentState;                                  // 0x01A8 (0x0004) [0x0000000000000000]               
	int32_t                                            NextState;                                     // 0x01AC (0x0004) [0x0000000000000000]               
	int32_t                                            Counter;                                       // 0x01B0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_Menu_Base");
		}

		return uClassPointer;
	};

	void OnFinalize();
	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void OnInitialize();
	void eventUpdate(float DeltaTime);
	void GotoNextScene(EUE_SCENE_ID Id);
	bool eventWidgetInitialized(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget);
	bool IsLoadedPackages(const class FString& packageNames);
	class UREDCharaAsset* LoadPackages(bool bBlock, class TArray<class FString>& outPackageNames);
	bool IsPS4Controller(int32_t PadID);
	bool IsSteam();
	bool IsPS4();
	bool IsPS3();
	bool IsConsumer();
	class AREDGameInfo* GetREDGameInfo();
	bool Start(bool optionalStartPaused);
	void eventOnClose();
	bool eventIsSoundClassPlaying(const class FName& Category);
	void CommonSE_MenuClose();
	void CommonSE_MenuOpen();
	void CommonSE_WorldDollar();
	void CommonSE_Warning();
	void CommonSE_ErrorL();
	void CommonSE_Error();
	void CommonSE_Cancel();
	void CommonSE_ChangeItem();
	void CommonSE_ItemChange();
	void CommonSE_Cursor();
	void CommonSE_OKSub();
	void CommonSE_OK();
	void Narration(const class FName& cueName);
	void CommonSE(const class FName& cueName);
	void DebugRectDraw(const struct FVector2D& LU, const struct FVector2D& RU, const struct FVector2D& LD, const struct FVector2D& RD, int32_t Col, bool optionalWithDBM);
	void DebugMainMenuOpen();
	void DebugText2(int32_t X, int32_t Y, int32_t Col, const class FString& Text, float ScaleX, float ScaleY, bool optionalWithDBM);
	void DebugText(int32_t X, int32_t Y, int32_t Col, const class FString& Text, bool optionalWithDBM);
	int32_t Timer2Digit(int32_t Time, int32_t& outDigit1, int32_t& outDigit10, int32_t& outDigit100);
	void SlideMessage(const class FString& MessageId, EUE_PLAYER_ID optionalSide);
	int32_t PopUp_OpenOK_CustomMessage(EUE_PLAYER_ID Player, const class FString& messege);
	void PopUp_Close();
	bool PopUp_IsActive();
	int32_t PopUp_CheckReturnVal(int32_t Handle);
	int32_t PopUp_OpenYesNo(EUE_PLAYER_ID Player, const class FString& messegaID);
	int32_t PopUp_OpenOK(EUE_PLAYER_ID Player, const class FString& messegaID);
	bool Account_IsBannedNetwork();
	bool Account_IsBannedChat();
	void DrawCreditFont(int32_t X, int32_t Y, bool isCenter, const class FString& Text, float Alpha);
	void Credit_SetHidden(bool flag);
	void Credit_ContinueGame(EUE_PLAYER_ID Player);
	void Credit_StartGame(EUE_PLAYER_ID Player);
	bool Credit_IsFreePlay();
	bool Credit_IsCoinZero(EUE_PLAYER_ID Player);
	bool Credit_IsInsertCoin(EUE_PLAYER_ID Player);
	bool Credit_IsEnough_Continue(EUE_PLAYER_ID Player);
	bool Credit_IsEnough(EUE_PLAYER_ID Player);
	bool CheckEndGameInput();
	bool IsGameStart(EUE_PLAYER_ID Player);
	bool IsSkipAdvertise();
	bool IsTrig_AnyBtn(EUE_PLAYER_ID optionalPlayer);
	bool IsUIExclusive();
	int32_t GetPadNum();
	int32_t GetPlayerPadID(EUE_PLAYER_ID Player);
	void SetPlayerPadID(EUE_PLAYER_ID Player, int32_t PadID);
	bool IsTrig_Right_FromPad(int32_t Player);
	bool IsTrig_Left_FromPad(int32_t Player);
	bool IsTrig_Down_FromPad(int32_t Player);
	bool IsTrig_Up_FromPad(int32_t Player);
	bool IsTrig_NG_FromPad(int32_t Player);
	bool IsTrig_OK_FromPad(int32_t Player);
	bool IsPress_Right_FromPad(int32_t Player);
	bool IsPress_Left_FromPad(int32_t Player);
	bool IsPress_Down_FromPad(int32_t Player);
	bool IsPress_Up_FromPad(int32_t Player);
	bool IsPress_Btn_Without1_FromPad(int32_t PadID);
	bool IsPress_Btn1_FromPad(int32_t PadID);
	bool IsTrig_BtnBack_FromPad(int32_t PadID);
	bool IsTrig_AnyBtn_FromPad(int32_t PadID);
	bool IsTrig_BtnStart_FromPad(int32_t PadID);
	bool IsTrig_Btn6(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_Btn5(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_Btn4(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_Btn3(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_Btn2(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_Btn1(EUE_PLAYER_ID optionalPlayer);
	bool IsPull_R2(EUE_PLAYER_ID optionalPlayer);
	bool IsPull_L2(EUE_PLAYER_ID optionalPlayer);
	bool IsPull_R1(EUE_PLAYER_ID optionalPlayer);
	bool IsPull_L1(EUE_PLAYER_ID optionalPlayer);
	bool IsPress_R2(EUE_PLAYER_ID optionalPlayer);
	bool IsPress_L2(EUE_PLAYER_ID optionalPlayer);
	bool IsPress_R1(EUE_PLAYER_ID optionalPlayer);
	bool IsPress_L1(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_L2(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_L1(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_R2(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_R1(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_A(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_X(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_Y(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_B(EUE_PLAYER_ID optionalPlayer);
	bool IsPress_OK(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_BtnStart(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_NG(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_OK(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_Right(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_Left(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_Down(EUE_PLAYER_ID optionalPlayer);
	bool IsTrig_Up(EUE_PLAYER_ID optionalPlayer);
	bool IsPress_Right(EUE_PLAYER_ID optionalPlayer);
	bool IsPress_Left(EUE_PLAYER_ID optionalPlayer);
	bool IsPress_Down(EUE_PLAYER_ID optionalPlayer);
	bool IsPress_Up(EUE_PLAYER_ID optionalPlayer);
	bool IsRep_Right(EUE_PLAYER_ID optionalPlayer);
	bool IsRep_Left(EUE_PLAYER_ID optionalPlayer);
	bool IsRep_Down(EUE_PLAYER_ID optionalPlayer);
	bool IsRep_Up(EUE_PLAYER_ID optionalPlayer);
	bool EnableOnUpdateDraw();
	bool IsSceneChanging();
	void SceneChangeRequest(EUE_SCENE_ID SceneID);
	int32_t GetMainQuadrant();
	bool IsEventMode();
	void SetNewChallengerEnableFlag(bool flag);
	void Initialize();
	bool IsEditor();
	int32_t GetState();
	bool SetStateQuick(int32_t _State);
	void SetState(int32_t _State);
};

// Class REDGame.Menu_DebugCharaSelect
// 0x0000 (0x01B4 - 0x01B4)
class UMenu_DebugCharaSelect : public UREDGfxMoviePlayer_Menu_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.Menu_DebugCharaSelect");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void eventOnClose();
	void OnInitialize();
	void UpdateDrawMenu();
	void UpdateMenu();
	void FinishMenu();
	void InitMenu();
};

// Class REDGame.REDGfxMoviePlayer_MenuBriefing
// 0x0000 (0x01B4 - 0x01B4)
class UREDGfxMoviePlayer_MenuBriefing : public UREDGfxMoviePlayer_Menu_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuBriefing");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void OnInitialize();
	void UpdateDrawMenu();
	void UpdateMenu();
	void InitMenu();
};

// Class REDGame.REDGfxMoviePlayer_MenuCharaSelectBase
// 0x0008 (0x01B4 - 0x01BC)
class UREDGfxMoviePlayer_MenuCharaSelectBase : public UREDGfxMoviePlayer_Menu_Base
{
public:
	uint32_t                                           bCardFadeOut : 1;                              // 0x01B4 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            CardFadeOutCounter;                            // 0x01B8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuCharaSelectBase");
		}

		return uClassPointer;
	};

	void DebugGetCharaModelOffset(struct FVector& outPos, float& outScale);
	void UpdateDrawNative();
	void UpdateNative();
	void InitializeNative();
	bool IsNewQuestExist(EUE_PLAYER_ID Player);
	int32_t CharaID_Int(const class FString& CharaID);
	void GetMysetData(EUE_PLAYER_ID Player, struct FCharaSel_MysetData& outMySetData);
	int32_t GetCardStyleType(EUE_PLAYER_ID Player);
	void SetCardStyleType(EUE_PLAYER_ID Player, int32_t Type);
	bool IsSkipAll(EUE_PLAYER_ID Player);
	int32_t PopUpTimer_OpenOK(EUE_PLAYER_ID Player, const class FString& messegaID, int32_t Time, bool optionalIsRookie);
	void eventExternalMOMSetEnemyCursor(const class FString& CharaID);
	bool IsMOMBonus(EUE_PLAYER_ID Player);
	bool IsMOMSelectableChara(const class FString& CharaID);
	bool IsMOMTrigOK(EUE_PLAYER_ID Player);
	void MOMSetPresetType(int32_t Type);
	int32_t GetMOMStarType(const class FString& CharaID);
	void MOMGetMedalYama(float& outBaseVal, float& outTargetVal, int32_t& outLevel);
	int32_t MOMGetTimeCount();
	int32_t MOMGetBGColorIndex();
	class FString MOMGetEnemyCharaID();
	void MOMSetEnemyCharaID(const class FString& CharaID);
	bool IsMOMStageSelectCancel();
	void MOMStageSelect(const class FString& CharaID);
	void MOMMenuCloseAll();
	bool IsMOMStarted();
	void FinishMOMHelpDisp(ECHARASEL_MOMHELP_FLAG flag);
	bool IsMOMHelpDisp(ECHARASEL_MOMHELP_FLAG flag);
	bool IsMOMPresetDisp();
	void MOMSceneDraw();
	void MOMSceneUpdate();
	void MOMSceneInit();
	void SetupArcadeStoryDrama(EBATTLE_DRAMA_ID BattleDramaID);
	void SaveMemoryCostumeID(EUE_PLAYER_ID Player, const class FString& CharaID, int32_t CostumeID);
	void SaveMemoryStylish(EUE_PLAYER_ID Player, int32_t Stylish);
	int32_t GetMemoryCostumeID(EUE_PLAYER_ID Player, const class FString& CharaID);
	int32_t GetMemoryStylish(EUE_PLAYER_ID Player);
	void SaveMemoryBGIDAndBGMID(EUE_PLAYER_ID Player, EUE_BG_ID bg_id, EUE_BGM_ID BGM_ID);
	void SaveMemoryCharaIDAndColorID(EUE_PLAYER_ID Player, const class FString& CharaID, int32_t ColorID);
	EUE_BGM_ID GetMemoryBGMID(EUE_PLAYER_ID Player);
	EUE_BG_ID GetMemoryBGID(EUE_PLAYER_ID Player);
	int32_t GetMemoryColorID(EUE_PLAYER_ID Player, const class FString& CharaID);
	class FString GetMemoryCharaID(EUE_PLAYER_ID Player);
	bool IsKeyConfig_Active(EUE_PLAYER_ID Player);
	int32_t KeyConfig_GetType(EUE_PLAYER_ID Player);
	void KeyConfig_Open(EUE_PLAYER_ID Player);
	bool Network_IsStylish(const class FString& CharaID, bool isRankmatch, bool isTournament, bool optionalIsLobbyBattle);
	int32_t Network_GetCostumeID(const class FString& CharaID, bool isRankmatch, bool isTournament, bool optionalIsLobbyBattle);
	int32_t Network_GetColorID(const class FString& CharaID, bool isRankmatch, bool isTournament, bool optionalIsLobbyBattle);
	void Network_SetMyChara(const class FString& CharaID, int32_t ColorID, EUE_BG_ID bg_id, EUE_BGM_ID BGM_ID, int32_t CostumeID, bool isStylish, bool isRankmatch, bool isTournament, bool optionalIsLobbyBattle, bool optionalIsWelcomeMode);
	bool IsEvent_StageSelectLock();
	bool IsEvent_StageSelectEnable();
	void TrialGetAchievementRate(int32_t& outNum, int32_t& outNumAll);
	class FString TrialGetEnemyChara();
	bool TrialSelectNG();
	bool TrialSelectOK();
	void TrialSelectOpen(EUE_PLAYER_ID Player, const class FString& CharaID);
	int32_t GetColorMax();
	void GetVicinityColor(EUE_PLAYER_ID Player, const class FString& CharaID, int32_t baseColor, int32_t& outPrevprev, int32_t& outPrev, int32_t& outNext, int32_t& outNextnext);
	bool IsForbiddenCustomMenuOK(EUE_PLAYER_ID Player);
	void CloseCustomMenu(EUE_PLAYER_ID Player, bool optionalBFast);
	void SetCustomMenuVal_KeyType(EUE_PLAYER_ID Player, int32_t val);
	void SetCustomMenuVal_Color(EUE_PLAYER_ID Player, int32_t val);
	int32_t GetCustomMenuVal_KeyType(EUE_PLAYER_ID Player);
	int32_t GetCustomMenuVal_Color(EUE_PLAYER_ID Player);
	void OpenCustomMenu(EUE_PLAYER_ID Player, EUE_PLAYER_ID controlPlayer, const class FString& CharaID);
	void RequestInfoBar(const class FString& TextID);
	void DelayGarbageCollection();
	class FString eventGetSelectCharaID(EUE_PLAYER_ID Player);
	void UpdateBookKeepingInfo(EUE_PLAYER_ID Player);
	void UpdateCardInfoFromGameCommon();
	bool IsSelectableColor(EUE_PLAYER_ID Player, const class FString& CharaID, int32_t ColorID);
	int32_t GetCostumeFromCard(EUE_PLAYER_ID Player, const class FString& CharaID);
	int32_t GetColorFromCard(EUE_PLAYER_ID Player, const class FString& CharaID);
	void CardFadeOut();
	void InitCardLoad(EUE_PLAYER_ID Player);
	void CommonSE_Cursor();
	void CommonSE_OK();
	int32_t GetKeyAllocationTypeNum();
	int32_t GetKeyAllocationType(EUE_PLAYER_ID Player);
	void SetKeyAllocationType(EUE_PLAYER_ID Player, int32_t Type);
};

// Class REDGame.REDGfxMoviePlayer_MenuModeSelect
// 0x0024 (0x01BC - 0x01E0)
class UREDGfxMoviePlayer_MenuModeSelect : public UREDGfxMoviePlayer_MenuCharaSelectBase
{
public:
	class TArray<struct FModeSelect_Mode>              ModeList;                                      // 0x01BC (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            SelectCursor;                                  // 0x01C8 (0x0004) [0x0000000000000000]               
	int32_t                                            TimeLimitCount;                                // 0x01CC (0x0004) [0x0000000000000000]               
	uint32_t                                           bDecide : 1;                                   // 0x01D0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnd : 1;                                      // 0x01D0 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              GearRotRate;                                   // 0x01D4 (0x0004) [0x0000000000000000]               
	float                                              GearRotRateTarget;                             // 0x01D8 (0x0004) [0x0000000000000000]               
	int32_t                                            GearCounter;                                   // 0x01DC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuModeSelect");
		}

		return uClassPointer;
	};

	void AS_SetTimer(float Time);
	void UpdateGearRotation();
	void UpdateCursor(bool decide);
	void OnUpdate(bool bTrigger);
	bool IsSelectable_Right(int32_t Cursor);
	bool IsSelectable_Left(int32_t Cursor);
	int32_t GetEnableModeCount();
	bool IsModeEnable(EUE_GAME_MODE Mode);
	void eventOnClose();
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	void GameModeSetup(EUE_GAME_MODE Mode, EUE_PLAYER_ID Player);
	bool CheckGameModeFromTestMode(EUE_GAME_MODE Mode);
	class FString MOM_GetModeSelectText();
	bool CheckGameModeVersion(EUE_PLAYER_ID Player, EUE_GAME_MODE Mode);
	int32_t GetSelectModeFromCard(EUE_PLAYER_ID Player);
	void SetSelectModeForCard(EUE_PLAYER_ID Player, EUE_GAME_MODE Mode, int32_t Cursor);
};

// Class REDGame.REDGfxMoviePlayer_MenuMOMPreset
// 0x000C (0x01BC - 0x01C8)
class UREDGfxMoviePlayer_MenuMOMPreset : public UREDGfxMoviePlayer_MenuCharaSelectBase
{
public:
	int32_t                                            SelectCursor;                                  // 0x01BC (0x0004) [0x0000000000000000]               
	int32_t                                            TimeLimitCount;                                // 0x01C0 (0x0004) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x01C4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDecide : 1;                                   // 0x01C4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCancel : 1;                                   // 0x01C4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bStart : 1;                                    // 0x01C4 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bTimerEnable : 1;                              // 0x01C4 (0x0004) [0x0000000000000000] [0x00000010] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuMOMPreset");
		}

		return uClassPointer;
	};

	void AS_SetTimer(int32_t digit1, int32_t digit10, int32_t digit100, int32_t digitNum);
	void UpdateTimer(int32_t Time);
	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void eventOnClose();
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	void SetCursorFocus(int32_t Cursor);
	void UpdateCursorAnim(int32_t PrevCursor, int32_t Cursor);
	void EndAnim();
	void StartAnim();
	bool IsMessageBoxActive();
	void CloseMessageBox();
	void OpenMessageBox();
	void DrawUpdateNative();
};

// Class REDGame.REDGfxMoviePlayer_MenuQuestList
// 0x0018 (0x01BC - 0x01D4)
class UREDGfxMoviePlayer_MenuQuestList : public UREDGfxMoviePlayer_MenuCharaSelectBase
{
public:
	uint32_t                                           bActive : 1;                                   // 0x01BC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bClose : 1;                                    // 0x01BC (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDisp : 1;                                     // 0x01BC (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCharaSelect : 1;                              // 0x01BC (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bTutorial : 1;                                 // 0x01BC (0x0004) [0x0000000000000000] [0x00000010] 
	EUE_PLAYER_ID                                      TargetPlayer;                                  // 0x01C0 (0x0001) [0x0000000000000000]               
	class TArray<struct FQuestList_ItemParam>          QuestList;                                     // 0x01C4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            CharaSelCounter;                               // 0x01D0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuQuestList");
		}

		return uClassPointer;
	};

	void OnUpdate(bool bTrigger);
	void OnInitialize();
	bool IsActive();
	bool IsDisp();
	void SwitchDisp(bool disp);
	void EndMenu();
	void StartMenu(EUE_PLAYER_ID Player, bool isCharaSelect);
	void SetupText(const class FString& baseMC, const struct FQuestList_ItemParam& Param);
	bool Start(bool optionalStartPaused);
	bool GetQuestList(EUE_PLAYER_ID Player, bool isCharaSelect, class TArray<struct FQuestList_ItemParam>& outOutList);
};

// Class REDGame.REDGfxMoviePlayer_MenuReadCard
// 0x0030 (0x01BC - 0x01EC)
class UREDGfxMoviePlayer_MenuReadCard : public UREDGfxMoviePlayer_MenuCharaSelectBase
{
public:
	struct FReadCard_Info                              PlayerInfo[2];                                 // 0x01BC (0x0030) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuReadCard");
		}

		return uClassPointer;
	};

	void UpdateTimer(EUE_PLAYER_ID Player, int32_t Time);
	void SetReadWaitMessage(EUE_PLAYER_ID Player, const class FString& MessageId);
	void CloseCommonMessage(EUE_PLAYER_ID Player);
	bool IsOpenCommonMessage(EUE_PLAYER_ID Player);
	void UpdateCommonMessage(EUE_PLAYER_ID Player, const class FString& MessageId, const class FString& optionalAddMessage);
	void OpenCommonMessage(EUE_PLAYER_ID Player, const class FString& MessageId);
	void OnUpdate(bool bTrigger);
	void UpdateError(bool Trigger, EUE_PLAYER_ID Player, struct FReadCard_Info& outInfo);
	void UpdateEntry(bool Trigger, EUE_PLAYER_ID Player, struct FReadCard_Info& outInfo);
	void UpdateEntryConfirm(bool Trigger, EUE_PLAYER_ID Player, struct FReadCard_Info& outInfo);
	void UpdateReadEnd(bool Trigger, EUE_PLAYER_ID Player, struct FReadCard_Info& outInfo);
	void UpdateRead(bool Trigger, EUE_PLAYER_ID Player, struct FReadCard_Info& outInfo);
	void UpdateReadWait(bool Trigger, EUE_PLAYER_ID Player, struct FReadCard_Info& outInfo);
	void UpdateReadWaitSingle(bool Trigger, EUE_PLAYER_ID Player, struct FReadCard_Info& outInfo);
	void UpdateReadCheck(bool Trigger, EUE_PLAYER_ID Player, struct FReadCard_Info& outInfo);
	void eventCloseAccessCodeMessage();
	void eventOpenAccessCodeMessage(const class FString& MessageId);
	void eventEndAccessCode();
	void eventSetAccessCode(const class FString& Code);
	void eventDispAccessCode(bool disp);
	void eventStartAccessCode();
	void decide(EUE_PLAYER_ID Player, bool bReadCard, bool optionalIsFirstPlay);
	bool IsReadCard(EUE_PLAYER_ID Player);
	bool IsReadEnd(EUE_PLAYER_ID Player);
	void StartReadCard(EUE_PLAYER_ID Player);
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	bool Check_ExclusiveError(EUE_PLAYER_ID Player);
	bool Check_Online();
	bool Check_SingleNode();
	bool Req_SetupCard(EUE_PLAYER_ID Player, bool isFirstPlay);
	bool Check_EntryCard(EUE_PLAYER_ID Player, int32_t& outError);
	void Req_EntryCard(EUE_PLAYER_ID Player);
	bool Check_ReadCard(EUE_PLAYER_ID Player, int32_t& outNewCard, int32_t& outError);
	bool Check_ReadCardStart(EUE_PLAYER_ID Player);
	void Req_ReadCardSkip(EUE_PLAYER_ID Player);
	void Req_ReadCardStart(EUE_PLAYER_ID Player);
};

// Class REDGame.REDGfxMoviePlayer_MenuContinue
// 0x0014 (0x01B4 - 0x01C8)
class UREDGfxMoviePlayer_MenuContinue : public UREDGfxMoviePlayer_Menu_Base
{
public:
	int32_t                                            CountDown;                                     // 0x01B4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bEnd : 1;                                      // 0x01B8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bContinue : 1;                                 // 0x01B8 (0x0004) [0x0000000000000000] [0x00000002] 
	class TArray<class FName>                          CountDownVoiceList;                            // 0x01BC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuContinue");
		}

		return uClassPointer;
	};

	void SetCountDownTime(int32_t oldTime, int32_t NewTime);
	void StartCountDown();
	void OnUpdate(bool bTrigger);
	void UpdateContinueEnd(bool bTrigger);
	void UpdateContinue(bool bTrigger);
	void UpdateContinueStart(bool bTrigger);
	void OnInitialize();
	bool Start(bool optionalStartPaused);
};

// Class REDGame.REDGfxMoviePlayer_MenuDebugMenu
// 0x0000 (0x01B4 - 0x01B4)
class UREDGfxMoviePlayer_MenuDebugMenu : public UREDGfxMoviePlayer_Menu_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuDebugMenu");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void OnInitialize();
	void UpdateDrawDebugMenu();
	void UpdateDebugMenu();
	void InitDebugMenu();
};

// Class REDGame.REDGfxMoviePlayer_MenuGallery
// 0x00AC (0x01B4 - 0x0260)
class UREDGfxMoviePlayer_MenuGallery : public UREDGfxMoviePlayer_Menu_Base
{
public:
	int32_t                                            vGLYFactorNum;                                 // 0x01B4 (0x0004) [0x0000000000000000]               
	int32_t                                            vGLYCurrentCategory;                           // 0x01B8 (0x0004) [0x0000000000000000]               
	int32_t                                            vGLYCurrentFactor;                             // 0x01BC (0x0004) [0x0000000000000000]               
	int32_t                                            vGLYPageOffset;                                // 0x01C0 (0x0004) [0x0000000000000000]               
	int32_t                                            vGLYBasePosY;                                  // 0x01C4 (0x0004) [0x0000000000000000]               
	int32_t                                            vGLYCursorPosX;                                // 0x01C8 (0x0004) [0x0000000000000000]               
	int32_t                                            vGLYCursorPosY;                                // 0x01CC (0x0004) [0x0000000000000000]               
	int32_t                                            vGLYTimer;                                     // 0x01D0 (0x0004) [0x0000000000000000]               
	int32_t                                            vGLYPopup;                                     // 0x01D4 (0x0004) [0x0000000000000000]               
	uint32_t                                           vGLYRelease : 1;                               // 0x01D8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           vGLYGuideOnOff : 1;                            // 0x01D8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           vGLYFrameEnable : 1;                           // 0x01D8 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            vGLYPlayFrame;                                 // 0x01DC (0x0004) [0x0000000000000000]               
	int32_t                                            vGLYCaptionFactor;                             // 0x01E0 (0x0004) [0x0000000000000000]               
	int32_t                                            vGLYVoiceCaption;                              // 0x01E4 (0x0004) [0x0000000000000000]               
	class UREDCharaAsset*                              vGLYAsset;                                     // 0x01E8 (0x0004) [0x0000000000000000]               
	class UREDCharaAsset*                              vGLYSoundAsset;                                // 0x01EC (0x0004) [0x0000000000000000]               
	class FString                                      vGLYBGMPackage;                                // 0x01F0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        vGLYVoiceCue;                                  // 0x01FC (0x0008) [0x0000000000000000]               
	class UREDSoundPlayerUnique*                       vGLYSoundPlayer;                               // 0x0204 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuBG*                   vGLYBg;                                        // 0x0208 (0x0004) [0x0000000000000000]               
	class TArray<class FString>                        vGLYCategoryNameList;                          // 0x020C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FGLYFactor>                    vGLYArtList;                                   // 0x0218 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FGLYFactor>                    vGLYMovieList;                                 // 0x0224 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FGLYFactor>                    vGLYVoiceList;                                 // 0x0230 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FGLYFactor>                    vGLYSoundList;                                 // 0x023C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FGLYFactor>                    vGLYCharaList;                                 // 0x0248 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FGLYCaptionTimeTable>          vGLYCaptionTimeList;                           // 0x0254 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuGallery");
		}

		return uClassPointer;
	};

	void OnFinalize();
	void OnDrawUpdate();
	void drawThumbnail();
	void OnUpdate(bool bTrigger);
	void funcMovie(bool bTrigger);
	void funcSoundPlay(bool bTrigger, EGALLERY_STATE State);
	void funcSoundLoad(bool bTrigger, EGALLERY_STATE State);
	void funcView(bool bTrigger);
	void funcViewLoad(bool bTrigger);
	void funcIdle(bool bTrigger);
	void FactorDecision();
	bool IsFactorEnable(int32_t factor);
	void eventCategoryChenge(int32_t Add);
	void OnInitialize();
	void ResourceFree();
	void setupCategoryFocus();
	void setupUserInfomation();
	int32_t eventGetFactorPrice(int32_t Category, int32_t Index);
	int32_t PopUp_OpenYesNo_Custom(EUE_PLAYER_ID Player, int32_t Index);
	void SetupArcadeOPED(EBATTLE_DRAMA_ID BattleDramaID);
	void StopGalleryVoice();
	void PlayGalleryVoice(const class FName& cueName, class AActor* optionalActor);
	void StopMovie();
	bool IsMoviePlaying(const class FString& MovieName);
	bool IsMovieFinish(const class FString& MovieName);
	void StartMovie(const class FString& MovieName);
	void CursorDraw(int32_t X, int32_t Y);
	void ThumbnailDraw(int32_t Category, int32_t Index, int32_t X, int32_t Y, bool isCur);
	void ThumbnailMaskDraw();
	bool UpdateViewerCurrent(int32_t Add);
	void UpdateViewerAxis(float X, float Y, float Z);
	void InitViewer(const class FString& PackageName);
	bool IsLoading();
	void PointPayment(int32_t Point);
	bool CheckPurchase(int32_t Point);
	void UpdateFactorState(int32_t Category, int32_t Index, int32_t State);
	int32_t CheckFactorDecision(int32_t Category, int32_t Index);
	int32_t GetUserOpenPer(int32_t& outOpen, int32_t& outTotal);
	int32_t GetUserHavePoint();
	void execViewer(int32_t State);
	void execScrollBar(int32_t State);
	void execCtrlBar(int32_t State);
	void execInfoBar(int32_t State, int32_t Category, int32_t Index);
	void execFactorName(int32_t State, const class FString& Message);
	void execDrawNative(int32_t State);
	void InitializeNative();
};

// Class REDGame.REDGfxMoviePlayer_MenuGameOver
// 0x0010 (0x01B4 - 0x01C4)
class UREDGfxMoviePlayer_MenuGameOver : public UREDGfxMoviePlayer_Menu_Base
{
public:
	int32_t                                            m_CardUploadCheck[2];                          // 0x01B4 (0x0008) [0x0000000000000000]               
	int32_t                                            m_CardUploadFinish[2];                         // 0x01BC (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuGameOver");
		}

		return uClassPointer;
	};

	void AS_Label(const class FString& Label);
	void OnUpdate(bool bTrigger);
	void OnInitialize();
	void EndMenu();
	void UpdateMenu();
	void InitMenu();
};

// Class REDGame.REDGfxMoviePlayer_MenuInterlude
// 0x0044 (0x01B4 - 0x01F8)
class UREDGfxMoviePlayer_MenuInterlude : public UREDGfxMoviePlayer_Menu_Base
{
public:
	uint32_t                                           bCardInfoDispStart : 1;                        // 0x01B4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCardInfoDispEnd : 1;                          // 0x01B4 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            CardInfoAnimCounter;                           // 0x01B8 (0x0004) [0x0000000000000000]               
	class TArray<class FString>                        LoadPackageNames;                              // 0x01BC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            LoadPackageIndex;                              // 0x01C8 (0x0004) [0x0000000000000000]               
	class UREDTexture2DArray*                          Tex2DArrayPlayersPlate;                        // 0x01CC (0x0004) [0x0000000000000000]               
	int32_t                                            VSLoadPercent;                                 // 0x01D0 (0x0004) [0x0000000000000000]               
	int32_t                                            VSLoadPercentBackup[8];                        // 0x01D4 (0x0020) [0x0000000000000000]               
	int32_t                                            VSLoadPercentTimeoutCount;                     // 0x01F4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuInterlude");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void AS_Label(const class FString& Label);
	void UpdateEnd(bool bTrigger);
	void UpdateEndWait(bool bTrigger);
	void UpdateExec(bool bTrigger);
	void UpdateWaitCharaLoad(bool bTrigger);
	void UpdateCharaLoad(bool bTrigger);
	void OnInitialize();
	void BGMRequest(const class FString& cueName, const class FString& optionalPackageName);
	bool IsPlayerPlateDebug();
	void MOM_FinishDispBaseRule();
	bool MOM_IsDispBaseRule();
	bool IsVSLoadComplete();
	void UpdateVSLoadPercent(int32_t Percent);
	bool RankMatch_IsUploadRCodeEnd();
	void RankMatch_UploadRCode();
	bool IsRankMatchBattle();
	bool IsNinteisen(EUE_PLAYER_ID Player);
	void VSStartTrigger();
	void UpdateDraw();
	bool IsRankdownMatch(EUE_PLAYER_ID Player);
	bool IsRankupMatch(EUE_PLAYER_ID Player);
	void ProcAsyncLoading(float Time);
	bool IsAsyncLoading();
};

// Class REDGame.REDGfxMoviePlayer_MenuMainMenu
// 0x0050 (0x01B4 - 0x0204)
class UREDGfxMoviePlayer_MenuMainMenu : public UREDGfxMoviePlayer_Menu_Base
{
public:
	int32_t                                            vMMCategoryMain;                               // 0x01B4 (0x0004) [0x0000000000000000]               
	int32_t                                            vMMCategorySub;                                // 0x01B8 (0x0004) [0x0000000000000000]               
	EUE_SCENE_ID                                       vMMGoToSceneId;                                // 0x01BC (0x0001) [0x0000000000000000]               
	int32_t                                            vMMGoToSceneWait;                              // 0x01C0 (0x0004) [0x0000000000000000]               
	class TArray<struct FMMCategory>                   vMMCategoryList;                               // 0x01C4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        vMMSubCategoryNameList;                        // 0x01D0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMMSubGear>                    vMMSubGearList;                                // 0x01DC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            vEntryPadID[2];                                // 0x01E8 (0x0008) [0x0000000000000000]               
	int32_t                                            vEntryMaxNum;                                  // 0x01F0 (0x0004) [0x0000000000000000]               
	uint32_t                                           vEntryMainOnly : 1;                            // 0x01F4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMainMenuBGMPlaying : 1;                       // 0x01F4 (0x0004) [0x0000000000000000] [0x00000002] 
	class UREDGfxMovieManager_Network*                 NetworkManager;                                // 0x01F8 (0x0004) [0x0000000000000000]               
	int32_t                                            GlobalCounter;                                 // 0x01FC (0x0004) [0x0000000000000000]               
	int32_t                                            SubState;                                      // 0x0200 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuMainMenu");
		}

		return uClassPointer;
	};

	void SetNetworkTitle(const class FString& SetText);
	void OnFinalize();
	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void funcExit(bool bTrigger);
	void funcTournament(bool bTrigger);
	void funcLinkStore(bool bTrigger, int32_t State);
	void funcMOM(bool bTrigger);
	void funcReplay(bool bTrigger);
	void funcStory2(bool bTrigger);
	void funcStory(bool bTrigger);
	void funcNetwork(bool bTrigger);
	void funcEntrySelect(bool bTrigger);
	void endControllerSelect();
	void moveController(int32_t Id, int32_t Type);
	void updateControllerSelect();
	void startControllerSelect();
	void EntryDecision();
	void funcNews(bool bTrigger);
	void HotNewsViewChange(bool flg);
	void funcIdle(bool bTrigger);
	void updateSubGear();
	void SetupSubGearRotation(int32_t Type, int32_t subIndex);
	void updateSubFocus();
	void updateSubCategory();
	void updateMainCategory();
	void ModeDecision(int32_t main_c, int32_t sub_c, int32_t State);
	void OnInitialize();
	void StartNetwork(ENETMANAGER_STARTMENU Start);
	void startMainMenu();
	void setupSubCategory();
	void setupMainCategoryColor(int32_t Category);
	void setupMainCategory();
	void setupMainFocus(bool flg);
	bool UpdateFuncTournament(bool bTrigger, int32_t& outIsGotoLobby);
	int32_t UpdateFuncLinkStore(bool bTrigger);
	bool UpdateFuncMOM(bool bTrigger);
	bool UpdateFuncReplay(bool bTrigger);
	bool UpdateFuncStory2(bool bTrigger, int32_t& outIsOK);
	bool UpdateFuncStory(bool bTrigger);
	bool IsR2LobbyEnable();
	bool IsRankMatchEntry();
	bool IsGalleryPlayEnable();
	bool IsStoryPlayEnable();
	bool IsModeDecisionEnable(int32_t Main, int32_t sub);
	bool IsRegionJP_MainMenu();
	void LinkStoreJumpPopup();
	void UnLockMessagePopup();
	void CheckRespectDisablePopup();
	bool IsRespectEnable();
	void ModeDecisionLightBar();
	void SetupCardData();
	void PopUpMenuInit(int32_t Type);
	void execCtrlBar(int32_t State);
	void execInfoBar(int32_t State);
	void execDrawNative(int32_t State);
	void execUpdateNative(int32_t State);
	void InitializeInMainMenu();
	void InitializeNative();
};

// Class REDGame.REDGfxMoviePlayer_MenuMainMenu20
// 0x00A4 (0x0204 - 0x02A8)
class UREDGfxMoviePlayer_MenuMainMenu20 : public UREDGfxMoviePlayer_MenuMainMenu
{
public:
	int32_t                                            vMMIndexTop;                                   // 0x0204 (0x0004) [0x0000000000000000]               
	int32_t                                            vMMIndexMiddle;                                // 0x0208 (0x0004) [0x0000000000000000]               
	int32_t                                            vMMIndexBottom;                                // 0x020C (0x0004) [0x0000000000000000]               
	int32_t                                            vMMCurrentMenu;                                // 0x0210 (0x0004) [0x0000000000000000]               
	uint32_t                                           vMMOpenFlg : 1;                                // 0x0214 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           vMMModeTransitionFlg : 1;                      // 0x0214 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           vMMOpenHotNews : 1;                            // 0x0214 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            vMMResultIndex;                                // 0x0218 (0x0004) [0x0000000000000000]               
	class TArray<struct FMMIndex>                      vMMIndexList;                                  // 0x021C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMMIndex>                      vMMTopList;                                    // 0x0228 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMMIndex>                      vMMMiddleList;                                 // 0x0234 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMMIndex>                      vMMBottomList;                                 // 0x0240 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            vMMPush[3];                                    // 0x024C (0x000C) [0x0000000000000000]               
	struct FMMShortCut                                 vMMShortCut[3];                                // 0x0258 (0x003C) [0x0000000000000000]               
	int32_t                                            vMMSCAssign[3];                                // 0x0294 (0x000C) [0x0000000000000000]               
	int32_t                                            vEntryMMIndex;                                 // 0x02A0 (0x0004) [0x0000000000000000]               
	class UREDGfxMovieManager_NetworkForMainmenu*      NetworkForMainmenu;                            // 0x02A4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuMainMenu20");
		}

		return uClassPointer;
	};

	void OnFinalize();
	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void funcExit(bool bTrigger);
	void funcClose(bool bTrigger);
	void funcFigure(bool bTrigger);
	void funcMOM(bool bTrigger);
	void funcReplay(bool bTrigger);
	void funcTutorial(bool bTrigger);
	void funcStory2(bool bTrigger);
	void funcStory(bool bTrigger);
	void funcNetwork(bool bTrigger);
	void funcEntrySelect(bool bTrigger);
	void endControllerSelect();
	void moveController(int32_t Id, int32_t Type);
	void updateControllerSelect();
	void startControllerSelect();
	void EntryDecision();
	void funcBattleConfig(bool bTrigger);
	void funcNews(bool bTrigger);
	void eventWebLinkDecision();
	void HotNewsViewChange(bool flg);
	void funcIdleEA(bool bTrigger);
	void funcIdle(bool bTrigger);
	void ShortCutAction(int32_t Type);
	void ShortCutJump(int32_t Type);
	void ShortCutAssign(int32_t Type);
	void MenuIndexCancel();
	void MenuIndexDecision();
	bool MenuIndexChange(int32_t Add, bool trg);
	bool MenuIndexLRCheck(int32_t Add);
	void createBottomList(int32_t Index);
	void createMiddleList(int32_t Index);
	void ModeDecision20(int32_t Index, int32_t State);
	void ModeDecision(int32_t main_c, int32_t sub_c, int32_t State);
	void OnInitialize();
	void startNetwork20();
	void startMainMenu();
	void UpdateCursor();
	void chengeCursor(int32_t Level, int32_t Index);
	void updateBottomMenu();
	void updateMiddleMenu();
	void updateTopMenu();
	bool IsShortCutFactor(int32_t Type, int32_t Level, int32_t Index);
	void setupBottomMenu();
	void setupMiddleMenu();
	void setupTopMenu();
	bool isNetworkFromOtherScene();
	void InitMainMenuScene_FromNetwork();
	void InitMainMenuScene();
	void CloseHotNews();
	void OpenHotNews();
	bool OpenModeTransition(EUE_GAME_MODE GameMode);
	void OpenEarlyAccessMenu();
	void CloseMainMenu();
	void OpenMainMenu();
	int32_t GetResultIndex();
	bool IsExitWaitMainMenu();
	bool IsActiveMainMenu();
	bool Start(bool optionalStartPaused);
	bool IsNewMMIndex(int32_t Index);
	bool IsModeDecisionEnable(int32_t Main, int32_t sub);
	bool IsRespectEnable();
	void CheckFirstBattlePopup();
	void FirstBattleSelect();
	bool UpdateFuncFigure(bool bTrigger);
	bool UpdateFuncBattleConfig(bool bTrigger, int32_t Mode, int32_t& outIsOK);
	bool UpdateFuncNews(bool bTrigger);
	bool UpdateFuncIdleEA(bool bTrigger, int32_t& outIsMode);
	void execDrawNews(int32_t State);
	void execCtrlBar(int32_t State);
	void execDrawNative(int32_t State);
	void execUpdateNative(int32_t State);
	void InitializeInMainMenu();
	void InitializeNative();
};

// Class REDGame.REDGfxMoviePlayer_MenuMainMenuScene
// 0x0004 (0x01B4 - 0x01B8)
class UREDGfxMoviePlayer_MenuMainMenuScene : public UREDGfxMoviePlayer_Menu_Base
{
public:
	class UREDGfxMoviePlayer_MenuMainMenu20*           vMMSMenu;                                      // 0x01B4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuMainMenuScene");
		}

		return uClassPointer;
	};

	void OnFinalize();
	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void OnInitialize();
};

// Class REDGame.REDGfxMoviePlayer_MenuNetwork_Base
// 0x0010 (0x01B4 - 0x01C4)
class UREDGfxMoviePlayer_MenuNetwork_Base : public UREDGfxMoviePlayer_Menu_Base
{
public:
	class UClass*                                      NextMenuClass;                                 // 0x01B4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisableGlobalError : 1;                       // 0x01B8 (0x0004) [0x0000000000000000] [0x00000001] 
	class UREDGfxMovieManager_Network*                 NetworkManager;                                // 0x01BC (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuMainMenu20*           MainMenu;                                      // 0x01C0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuNetwork_Base");
		}

		return uClassPointer;
	};

	bool eventIsInformationActive();
	void FinishInformation();
	bool StartInformation();
	void FinishGotoMode();
	bool IsGotoModeCancel();
	void StartGotoMode(EUE_GAME_MODE GameMode);
	bool IsMainMenuSelectOnline();
	bool IsMainMenuEnableClose();
	bool eventIsMainMenuActive();
	bool IsEndMainMenu();
	void EndMainMenu();
	void FinishMainMenu();
	bool startMainMenu(bool bMainmenuInit);
	class FString GetNetworkResName();
	bool IsEndMenu();
	void ForceEndMenu();
	void StartMenu();
	bool IsCancelRankMatchEntry();
	void CancelRankMatchEntry();
	bool IsRankMatchEntry();
	void RealtimeMultiPlayNotify(bool isAsync);
	bool IsBannedChat();
	bool IsDisableLobby();
	bool IsWaitMessageActive();
	void StopWaitMessage();
	void ReqWaitMessage(const class FString& MessageId);
	void MenuWindoeCloseAll();
	bool UpdateTextChatInput(bool IsLobby);
	void InitTextChat();
};

// Class REDGame.REDGfxMoviePlayer_MenuNetworkInit
// 0x0018 (0x01C4 - 0x01DC)
class UREDGfxMoviePlayer_MenuNetworkInit : public UREDGfxMoviePlayer_MenuNetwork_Base
{
public:
	int32_t                                            RCodeState;                                    // 0x01C4 (0x0004) [0x0000000000000000]               
	int32_t                                            InitializeState;                               // 0x01C8 (0x0004) [0x0000000000000000]               
	class FString                                      ErrorMessageID;                                // 0x01CC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bSuccess : 1;                                  // 0x01D8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSealNetwork_IsNotRelease : 1;                 // 0x01D8 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuNetworkInit");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void UpdateSealNetwork(bool bTrigger);
	void UpdateErrorWait(bool bTrigger);
	void UpdateError(bool bTrigger);
	void UpdateBannedChat(bool bTrigger);
	void UpdateInitWait(bool bTrigger);
	void UpdateInit(bool bTrigger);
	void UpdateSignin(bool bTrigger);
	void UpdatePreWait(bool bTrigger);
	bool IsSuccess();
	bool IsEndMenu();
	void ForceEndMenu();
	void StartMenu();
	void eventOnClose();
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	void ResetInviteInfo();
	bool IsFromInvite();
	class FString GetSealingNetworkMessage();
	void SetInitializeNetworkFlag(bool flag);
	bool UpdateRcode(bool bTrigger, int32_t& outSuccess);
	bool IsBannedChatMessageRunning();
	bool ReqBannedChatMessage();
	class FString GetInitErrorMessageID();
	bool IsInitializing(int32_t& outIsError, int32_t& outIsBannedChat, int32_t& outSealNetwork);
	bool ReqInitializeError();
	bool ReqInitialize();
	bool IsSignInDialogRunning();
	bool ReqSignInDialog();
	bool IsPreWait();
};

// Class REDGame.REDGfxMoviePlayer_MenuNetworkInvite
// 0x0014 (0x01C4 - 0x01D8)
class UREDGfxMoviePlayer_MenuNetworkInvite : public UREDGfxMoviePlayer_MenuNetwork_Base
{
public:
	class FString                                      ErrorMessageID;                                // 0x01C4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PopUpHandle;                                   // 0x01D0 (0x0004) [0x0000000000000000]               
	uint32_t                                           bChangeVersion : 1;                            // 0x01D4 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuNetworkInvite");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void UpdateErrorWait(bool bTrigger);
	void UpdateError(bool bTrigger);
	void UpdateMain(bool bTrigger);
	void UpdateRev2ToRev1(bool bTrigger);
	void UpdateRev1ToRev2(bool bTrigger);
	void UpdateVersionCheck(bool bTrigger);
	bool IsEndMenu();
	void ForceEndMenu();
	void StartMenu();
	void eventOnClose();
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	bool GetRoomGameVersion(int32_t& outIsError);
	void InviteDone();
	class FString GetErrorMessageID();
	bool IsJoinSessionRunning(int32_t& outIsError);
	bool JoinSession();
	void ChangeVersion(bool bRev2);
	bool CheckVersion(int32_t& outVersionRev2);
};

// Class REDGame.REDGfxMoviePlayer_MenuNetworkLobby
// 0x0029 (0x01C4 - 0x01ED)
class UREDGfxMoviePlayer_MenuNetworkLobby : public UREDGfxMoviePlayer_MenuNetwork_Base
{
public:
	uint32_t                                           bNetLobbyPlaying : 1;                          // 0x01C4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFromSearchMenuOpen : 1;                       // 0x01C4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bFadeInTrigger : 1;                            // 0x01C4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bUpdateHotNewsRenderTarget : 1;                // 0x01C4 (0x0004) [0x0000000000000000] [0x00000008] 
	class FString                                      ErrorMessageID;                                // 0x01C8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            LocalState;                                    // 0x01D4 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuTournamentList*       TournamentList;                                // 0x01D8 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuTournamentMisc*       TournamentMisc;                                // 0x01DC (0x0004) [0x0000000000000000]               
	class FString                                      LeavForceErrMsgID;                             // 0x01E0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	EUE_GAME_MODE                                      GotoGameMode;                                  // 0x01EC (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuNetworkLobby");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	bool IsAllMapVisible();
	void UpdateEnd(bool bTrigger);
	void UpdateGotoMode(bool bTrigger);
	void UpdateInformation(bool bTrigger);
	void UpdateInformationInit(bool bTrigger);
	void UpdateMainMenuEnd(bool bTrigger);
	void UpdateMainMenu(bool bTrigger);
	void UpdateMainMenuInit(bool bTrigger);
	void UpdateLeaveForceWait(bool bTrigger);
	void UpdateLeaveForce(bool bTrigger);
	void UpdateTournamentGotoRoom2(bool bTrigger);
	void UpdateTournamentGotoRoom(bool bTrigger);
	void UpdateLobbyRoomJoin(bool bTrigger);
	void UpdateEntryCancelWait(bool bTrigger);
	void UpdateEntryCancelConfirm(bool bTrigger);
	void UpdateLeaveWait2(bool bTrigger);
	void UpdateLeaveWait(bool bTrigger);
	void UpdateLeaveConfirm(bool bTrigger);
	void UpdateErrorToLobbySelect(bool bTrigger);
	void UpdateErrorToMain(bool bTrigger);
	void UpdateGotoRoom(bool bTrigger);
	void UpdateLobbyRoomCreating(bool bTrigger);
	void UpdateRoomCreating(bool bTrigger);
	void UpdateLobbyMenuWait(bool bTrigger);
	void UpdateMain(bool bTrigger);
	bool IsEndMenu();
	void ForceEndMenu();
	void StartMenu();
	void eventOnClose();
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	bool IsFromSearch();
	bool IsFromCharaSelect();
	bool UpdateLobbyChatDisableMessage();
	bool IsForceLobbyExitCall();
	void TournamentShowBattler();
	bool IsTournamentLobby();
	bool UpdateLobbyRoomJoinNative(bool bTrigger, int32_t& outState, int32_t& outIsGotoRoom, int32_t& outIsError, class FString& outErrorMsgID);
	bool UpdateInputTournament();
	bool UpdateInputNative(int32_t& outIsLobbyMenu, int32_t& outIsGotoLobbyRoom, int32_t& outIsLeaveLobby, int32_t& outIsMainMenu, int32_t& outIsInformationOpen, EUE_GAME_MODE& outGameMode);
	bool UpdateEntryCancelConfirmNative(bool bTrigger, int32_t& outIsCancel);
	bool UpdateLeaveLobbyConfirmNative(bool bTrigger, int32_t& outIsLeave);
	bool IsLeaveLobby();
	void LeaveLobby();
	bool IsLeaveRoom();
	void LeaveRoom();
	void OpenRoomMenuFromSearch();
	void OpenRoomMenuFromCharaSelect();
	bool IsLobbyMenuRunning(int32_t& outIsCreate, int32_t& outIsSearch, int32_t& outIsRankmatch, int32_t& outIsRankBoard, int32_t& outIsLeaveLobby, int32_t& outIsMainMenu, int32_t& outIsLobbyRoom, int32_t& outIsOpenMainMenu);
	void OpenLobbyMenu();
	bool IsCreatingLobbyRoom(int32_t& outIsError);
	bool CreateLobbyRoom();
	bool IsCreatingRoom(int32_t& outIsError);
	bool CreateRoom();
	bool IsGotoRoomFromLobbyMenu();
	bool IsExistRoom();
	void UpdateDrawMenu();
	void UpdateMenu();
	void OnCloseNative();
	void InitMenu();
};

// Class REDGame.REDGfxMoviePlayer_MenuNetworkLobbySelect
// 0x0034 (0x01C4 - 0x01F8)
class UREDGfxMoviePlayer_MenuNetworkLobbySelect : public UREDGfxMoviePlayer_MenuNetwork_Base
{
public:
	int32_t                                            SERVER_NUM;                                    // 0x01C4 (0x0004) [0x0000000000000000]               
	int32_t                                            WORLD_NUM;                                     // 0x01C8 (0x0004) [0x0000000000000000]               
	int32_t                                            LOBBY_NUM;                                     // 0x01CC (0x0004) [0x0000000000000000]               
	class FString                                      ErrorMessageID;                                // 0x01D0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	ENETLOBBYSELECT_STATE                              ErrorNextState;                                // 0x01DC (0x0001) [0x0000000000000000]               
	int32_t                                            SelectCursor[3];                               // 0x01E0 (0x000C) [0x0000000000000000]               
	int32_t                                            LobbySelectPage;                               // 0x01EC (0x0004) [0x0000000000000000]               
	int32_t                                            LobbyRightMenuIndex;                           // 0x01F0 (0x0004) [0x0000000000000000]               
	int32_t                                            LobbySelectPageCounter;                        // 0x01F4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuNetworkLobbySelect");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void UpdateErrorWait(bool bTrigger);
	void UpdateError(bool bTrigger);
	void UpdateEndWait(bool bTrigger);
	void UpdateReturnMainMenu(bool bTrigger);
	void UpdateJoinLobby(bool bTrigger);
	void UpdateLobby(bool bTrigger);
	void UpdeteRightMenuCursor(bool optionalDisable);
	void UpdateLobbyMarker();
	void UpdateLobbyInit(bool bTrigger);
	void UpdateWorld(bool bTrigger);
	void UpdateWorldMarker();
	void SetWorldMarker(int32_t ServerIndex);
	void UpdateWorldInit(bool bTrigger);
	void UpdateServer(bool bTrigger);
	void UpdateServerInit(bool bTrigger);
	void UpdatePrevLobby(bool bTrigger, bool bNoSelectLobby);
	void UpdateSelectState(bool bTrigger);
	bool IsEndMenu();
	void ForceEndMenu();
	void StartMenu();
	void eventOnClose();
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	void UpdateScrollWindow();
	bool UpdatePrevLobby_Native(bool IsTrigger, bool bNoSelectLobby, int32_t& outIsError, class FString& outErrMsgID);
	void CloseScrollWindow(ECURSOR_TYPE Type);
	void OpenScrollWindow(ECURSOR_TYPE Type);
	bool ScrollUpdate(ECURSOR_TYPE Type, int32_t& outCursor);
	void ScrollInit(ECURSOR_TYPE Type, int32_t Cursor, int32_t dispNum, int32_t maxNum);
	class FString GetJoinLobbyErrorMessageID();
	bool IsJoinLobby(int32_t& outIsError);
	bool ReqJoinLobby(int32_t Cursor);
	bool IsSelectableLobby(int32_t Cursor);
	bool SelectWorld(int32_t Cursor);
	void SelectServer(int32_t Cursor);
	class FString GetLobbyInitErrorMessageID();
	bool IsLobbyInit(int32_t& outIsError);
	bool ReqLobbyInit();
	class FString GetWorldInitErrorMessageID();
	bool IsWorldInit(int32_t& outIsError);
	bool ReqWorldInit();
	bool IsSelectableServer(int32_t ServerIndex);
	class FString GetServerInitErrorMessageID();
	bool IsServerInit(int32_t& outIsError);
	bool ReqServerInit();
	bool IsInLobby();
	void SetupLobbySelected();
	bool IsLobbySelected();
	bool IsEventRobbyEnable();
	void UpdateDrawMenu();
	void OnCloseNative();
	void InitMenu();
};

// Class REDGame.REDGfxMoviePlayer_MenuNetworkRankBoard
// 0x0008 (0x01C4 - 0x01CC)
class UREDGfxMoviePlayer_MenuNetworkRankBoard : public UREDGfxMoviePlayer_MenuNetwork_Base
{
public:
	int32_t                                            GlobalCounter;                                 // 0x01C4 (0x0004) [0x0000000000000000]               
	int32_t                                            MainState;                                     // 0x01C8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuNetworkRankBoard");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void UpdateMain(bool bTrigger);
	bool IsEndMenu();
	void ForceEndMenu();
	void StartMenu();
	void eventOnClose();
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	void UpdateDrawNative();
	void UpdateMainNative(bool bTrigger);
	void FinalizeNative();
	void InitializeNative();
};

// Class REDGame.REDGfxMoviePlayer_MenuNetworkRoom
// 0x03D4 (0x01C4 - 0x0598)
class UREDGfxMoviePlayer_MenuNetworkRoom : public UREDGfxMoviePlayer_MenuNetwork_Base
{
public:
	uint32_t                                           bNetRoomPlaying : 1;                           // 0x01C4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableControlText : 1;                        // 0x01C4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bBannerFocusUpdate : 1;                        // 0x01C4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bRoomNameDisp : 1;                             // 0x01C4 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           HelpMessageSelectableFlag : 1;                 // 0x01C4 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bReturnMainMenu : 1;                           // 0x01C4 (0x0004) [0x0000000000000000] [0x00000020] 
	int32_t                                            PopUpHandle;                                   // 0x01C8 (0x0004) [0x0000000000000000]               
	struct FNetRoom_PlayerInfo                         PlayerInfo[8];                                 // 0x01CC (0x0300) [0x0000000000000000]               
	class TArray<struct FNetRoom_FocusInfo>            FocusInfo;                                     // 0x04CC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            FocusCursor;                                   // 0x04D8 (0x0004) [0x0000000000000000]               
	int32_t                                            PrevFocusCursor;                               // 0x04DC (0x0004) [0x0000000000000000]               
	int32_t                                            PrevFocusDir;                                  // 0x04E0 (0x0004) [0x0000000000000000]               
	int32_t                                            PrevFocusDirCursor;                            // 0x04E4 (0x0004) [0x0000000000000000]               
	struct FNetRoom_FocusPos                           FocusPos;                                      // 0x04E8 (0x001C) [0x0000000000000000]               
	struct FNetRoom_GameTableInfo                      GameTableInfo[4];                              // 0x0504 (0x0080) [0x0000000000000000]               
	int32_t                                            RoomNameAnimCount;                             // 0x0584 (0x0004) [0x0000000000000000]               
	int32_t                                            GlobalCounter;                                 // 0x0588 (0x0004) [0x0000000000000000]               
	int32_t                                            RoomMemberMax;                                 // 0x058C (0x0004) [0x0000000000000000]               
	int32_t                                            SubState;                                      // 0x0590 (0x0004) [0x0000000000000000]               
	int32_t                                            HelpMessageCounter;                            // 0x0594 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuNetworkRoom");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void UpdateEnd(bool bTrigger);
	void UpdateRoomErrorWait2(bool bTrigger);
	void UpdateRoomErrorWait(bool bTrigger);
	void UpdateRoomError(bool bTrigger);
	void UpdateGotoBattle(bool bTrigger);
	void UpdateLeaveRoomConfirm(bool bTrigger);
	void UpdateLeaveLobbyWait(bool bTrigger);
	void UpdateLeaveRoomWait(bool bTrigger);
	void UpdateBattleReadyWait(bool bTrigger);
	void UpdateContactMenuWait(bool bTrigger);
	void UpdateRoomMenuWait(bool bTrigger);
	void UpdateMain(bool bTrigger);
	void UpdateMainWait(bool bTrigger);
	bool GetContactMenuTypeFromCursor(ENETCONTACT_MENU_TYPE& outType, int32_t& outSlotIndex, int32_t& outKyoutaiIndex, int32_t& outChairIndex);
	void UpdateIconDetail();
	void UpdateGameTable();
	bool UpdateFocusMove();
	void UpdateFocus();
	void eventSetRoomInfo(int32_t RoomType, int32_t Policy, int32_t RotateType, int32_t roundNum, int32_t RoundTime, int32_t VoiceChatType, int32_t ShareType);
	void eventReqRoomInOutAnim(int32_t Number, bool isIn);
	void eventUpdatePlayerBannerInfo(int32_t Number, int32_t CharaID, int32_t RelStrength, bool IsSpectator, bool VoiceChat, bool isSpeak, bool IsBattleReady, int32_t Qos, int32_t RoomState, int32_t MOMLevel, const class FString& Dan);
	void eventSetPlayerBannerInfo(int32_t Number, int32_t KyoutaiIndex, int32_t ChairIndex, bool IsExist, const class FString& PlayerName, const class FString& Dan, int32_t Qos, int32_t CharaID, bool IsMe);
	bool IsEndMenu();
	void ForceEndMenu();
	void StartMenu();
	void eventOnClose();
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	void eventHideBG(bool hide);
	bool IsBreakupSoon();
	bool IsLeaveLobby();
	void LeaveLobby();
	bool IsTournamentForceLeaveRoom();
	bool IsTournamentForceBattleReady();
	bool IsTournamentRoom();
	bool IsLobbyRoom();
	void SwitchLobby();
	void GetRoomState(int32_t Index, class FString& outMessage, int32_t& outIconType);
	class FString GetRoomErrorMessageID();
	bool IsRoomError();
	void UpdateGotoBattleNative(bool bTrigger, int32_t& outIsError);
	bool UpdateRoomErrorNative(bool bTrigger);
	bool UpdateLeaveRoomConfirmNative(bool bTrigger, int32_t& outIsLeave);
	int32_t RoomInfo_MemberMax();
	void UpdateMemberInfo();
	bool IsContactMenuExit();
	void OpenContactMenu(ENETCONTACT_MENU_TYPE Type, int32_t SlotIndex, int32_t KyoutaiIndex, int32_t ChairIndex);
	void OpenEasyTextChat();
	bool IsRoomMenuExit(int32_t& outIsLeaveRoom, int32_t& outIsMainMenu);
	void OpenRoomMenu();
	void BackToWaitRoom();
	void SendBattleReadyCancel();
	bool IsSendingBattleReady();
	void SendBattleReady();
	bool IsLeaveRoom();
	void LeaveRoom();
	void GotoBattle();
	int32_t GetMySlotIndex();
	bool IsBattleReadyInputEnable();
	bool IsBattleReady();
	bool IsNeedGotoBattle();
	bool IsSitBattleConsole();
	bool IsSlotIsMine(int32_t SlotIndex);
	bool IsHost();
	bool TextChat_IsFullScreen();
	void UpdateDrawMenu();
	void UpdateMenu();
	void OnCloseNative();
	void InitMenu();
};

// Class REDGame.REDGfxMoviePlayer_MenuNetworkRoomAC20
// 0x0011 (0x01C4 - 0x01D5)
class UREDGfxMoviePlayer_MenuNetworkRoomAC20 : public UREDGfxMoviePlayer_MenuNetwork_Base
{
public:
	uint32_t                                           bNetRoomPlaying : 1;                           // 0x01C4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableControlText : 1;                        // 0x01C4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bReturnMainMenu : 1;                           // 0x01C4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bFadeInTrigger : 1;                            // 0x01C4 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            PopUpHandle;                                   // 0x01C8 (0x0004) [0x0000000000000000]               
	int32_t                                            GlobalCounter;                                 // 0x01CC (0x0004) [0x0000000000000000]               
	int32_t                                            SubState;                                      // 0x01D0 (0x0004) [0x0000000000000000]               
	EUE_GAME_MODE                                      GotoGameMode;                                  // 0x01D4 (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuNetworkRoomAC20");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	bool IsAllMapVisible();
	void UpdateEnd(bool bTrigger);
	void UpdateGotoMode(bool bTrigger);
	void UpdateMainMenuEnd(bool bTrigger);
	void UpdateMainMenu(bool bTrigger);
	void UpdateMainMenuInit(bool bTrigger);
	void UpdateRoomErrorWait2(bool bTrigger);
	void UpdateRoomErrorWait(bool bTrigger);
	void UpdateRoomError(bool bTrigger);
	void UpdateGotoBattle(bool bTrigger);
	void UpdateLeaveRoomConfirm(bool bTrigger);
	void UpdateLeaveLobbyWait(bool bTrigger);
	void UpdateLeaveRoomWait(bool bTrigger);
	void UpdateBattleReadyWait(bool bTrigger);
	void UpdateRoomMenuWait(bool bTrigger);
	void UpdateMain(bool bTrigger);
	void UpdateMainWait(bool bTrigger);
	bool IsEndMenu();
	void ForceEndMenu();
	void StartMenu();
	void eventOnClose();
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	bool IsIMEFormOpen();
	int32_t GetKyoutaiMaxNum();
	bool IsBreakupSoon();
	bool IsLeaveLobby();
	void LeaveLobby();
	bool IsTournamentForceLeaveRoom();
	bool IsTournamentForceBattleReady();
	bool IsTournamentRoom();
	void SwitchLobby();
	class FString GetRoomErrorMessageID();
	bool IsRoomError();
	void UpdateGotoBattleNative(bool bTrigger, int32_t& outIsError);
	bool UpdateRoomErrorNative(bool bTrigger);
	bool UpdateLeaveRoomConfirmNative(bool bTrigger, int32_t& outIsLeave);
	bool IsContactMenuExit();
	void OpenContactMenu(ENETCONTACT_MENU_TYPE Type, int32_t SlotIndex, int32_t KyoutaiIndex, int32_t ChairIndex);
	void OpenEasyTextChat();
	bool IsRoomMenuExit(int32_t& outIsLeaveRoom, int32_t& outIsMainMenu, int32_t& outIsOpenMainMenu);
	void OpenRoomMenu();
	void BackToWaitRoom();
	void SendBattleReadyCancel();
	bool IsSendingBattleReady();
	void SendBattleReady();
	bool IsLeaveRoom();
	void LeaveRoom();
	void GotoBattle();
	int32_t GetMySlotIndex();
	bool IsBattleReadyInputEnable();
	bool IsBattleReady();
	bool IsNeedGotoBattle();
	bool IsSitBattleConsole();
	bool IsSlotIsMine(int32_t SlotIndex);
	bool IsHost();
	bool TextChat_IsFullScreen();
	void UpdateDrawMenu();
	bool UpdateInput(int32_t& outBattleReady, int32_t& outLeaveRoom, int32_t& outIsMainMenu, EUE_GAME_MODE& outGameMode);
	void UpdateMenu();
	void OnCloseNative();
	void InitMenu();
};

// Class REDGame.REDGfxMoviePlayer_MenuNetworkSearch
// 0x0028 (0x01C4 - 0x01EC)
class UREDGfxMoviePlayer_MenuNetworkSearch : public UREDGfxMoviePlayer_MenuNetwork_Base
{
public:
	int32_t                                            Cursor;                                        // 0x01C4 (0x0004) [0x0000000000000000]               
	float                                              CursorStart;                                   // 0x01C8 (0x0004) [0x0000000000000000]               
	float                                              CursorPos;                                     // 0x01CC (0x0004) [0x0000000000000000]               
	float                                              CursorEnd;                                     // 0x01D0 (0x0004) [0x0000000000000000]               
	int32_t                                            CursorAnimCount;                               // 0x01D4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bSearchResultDraw : 1;                         // 0x01D8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNotFoundDraw : 1;                             // 0x01D8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bErrorMsgDraw : 1;                             // 0x01D8 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            SearchResultDrawCount;                         // 0x01DC (0x0004) [0x0000000000000000]               
	int32_t                                            PrevReturnLobbyState;                          // 0x01E0 (0x0004) [0x0000000000000000]               
	int32_t                                            GlobalCounter;                                 // 0x01E4 (0x0004) [0x0000000000000000]               
	int32_t                                            OneMoreSearchCount;                            // 0x01E8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuNetworkSearch");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void UpdateReturnLobby(bool bTrigger);
	void UpdateJoinError(bool bTrigger);
	void UpdateJoinErrorWait(bool bTrigger);
	void UpdateError(bool bTrigger);
	void UpdateNotFound(bool bTrigger);
	void UpdatejoinPasswordMiss(bool bTrigger);
	void UpdatejoinPassword(bool bTrigger);
	void UpdatejoinWait(bool bTrigger);
	void UpdateJoin(bool bTrigger);
	void UpdateJoinConfirm(bool bTrigger);
	void UpdateSerachResult(bool bTrigger);
	void UpdateSerachWait(bool bTrigger);
	void UpdateSerach(bool bTrigger);
	bool IsEndMenu();
	void ForceEndMenu();
	void StartMenu();
	void eventOnClose();
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	bool eventIsReSearchEnable();
	void SetReturnLobbyState();
	void ReturnLobbyNative();
	void UpdateDrawNative();
	bool UpdateJoinPasswordMissNative(bool bTrigger);
	bool UpdateJoinPasswordNative(bool bTrigger, int32_t& outIsCancel, int32_t& outIsMiss);
	bool UpdateJoinErrorNative(bool bTrigger);
	bool UpdateReturnLobbyNative(bool bTrigger, int32_t& outIsCancel);
	bool UpdateJoinConfirmNative(bool bTrigger, int32_t& outIsCancel);
	int32_t UpdateResultScroll(bool bUpHold, bool bDownHold);
	void OpenMOMKinshiMenu(int32_t Index);
	void OpenRankMatchMenu();
	bool IsQosLimitProcess(int32_t Index);
	bool IsQosLimitClear(int32_t Index);
	bool IsJoiningRoom(int32_t& outIsError);
	bool JoinRoom(int32_t Index);
	bool IsPasswordRoom(int32_t Index);
	int32_t SetupResultList();
	bool IsSearchingRoom(int32_t& outIsError);
	bool SearchRoom();
	void FinalizeNative();
	void InitializeNative();
};

// Class REDGame.REDGfxMoviePlayer_MenuNetworkTopMenu
// 0x0028 (0x01C4 - 0x01EC)
class UREDGfxMoviePlayer_MenuNetworkTopMenu : public UREDGfxMoviePlayer_MenuNetwork_Base
{
public:
	class TArray<struct FNetTopMenuItem>               ItemList;                                      // 0x01C4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            CurrentCursor;                                 // 0x01D0 (0x0004) [0x0000000000000000]               
	int32_t                                            MenuResult;                                    // 0x01D4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bFromSearch : 1;                               // 0x01D8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFromSearchRankMatch : 1;                      // 0x01D8 (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      ErrorMessageID;                                // 0x01DC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PopUpHandle;                                   // 0x01E8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuNetworkTopMenu");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void stateUpdate_Error(bool bTrigger);
	void stateUpdate_EntryAbort(bool bTrigger);
	void stateUpdate_EntryAbortConfirm(bool bTrigger);
	void stateUpdate_PlusCheck(bool bTrigger);
	void stateUpdate_PlayerMatchCreate(bool bTrigger);
	void stateUpdate_PlayerMatch(bool bTrigger);
	void stateUpdate_RankMatch(bool bTrigger);
	void stateUpdate_Main(bool bTrigger);
	void stateUpdate_EndAnim(bool bTrigger);
	void stateUpdate_StartAnim(bool bTrigger);
	void UpdateDesc(int32_t Cursor);
	void ChangeFocus(int32_t Cursor);
	int32_t GetMenuResult();
	bool IsEndMenu();
	void ForceEndMenu();
	void StartMenu();
	void eventOnClose();
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	int32_t GetSavedCursor();
	void SaveCursor(int32_t Cursor);
	bool IsCheckPlus(int32_t& outIsError);
	bool CheckPlus(int32_t& outIsNotNeed);
	bool IsCreatingRoom(int32_t& outIsError);
	bool CreateRoom();
	bool IsPlayerMatchEnd(int32_t& outIsCreate, int32_t& outIsSearch);
	void OpenPlayerMatch();
	bool IsRankMatchEnd(int32_t& outIsSearch);
	void OpenRankMatch();
};

// Class REDGame.REDGfxMoviePlayer_MenuNetworkWelcome
// 0x0008 (0x01C4 - 0x01CC)
class UREDGfxMoviePlayer_MenuNetworkWelcome : public UREDGfxMoviePlayer_MenuNetwork_Base
{
public:
	uint32_t                                           bDispDecideInfo : 1;                           // 0x01C4 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            DispDecideInfoCounter;                         // 0x01C8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuNetworkWelcome");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	bool IsEndMenu();
	void ForceEndMenu();
	void StartMenu();
	void eventOnClose();
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	void DrawNative();
	bool UpdateNative(bool bTrigger, int32_t& outFromInvite);
	void InitializeNative();
};

// Class REDGame.REDGfxMoviePlayer_MenuRanking
// 0x0034 (0x01B4 - 0x01E8)
class UREDGfxMoviePlayer_MenuRanking : public UREDGfxMoviePlayer_Menu_Base
{
public:
	class TArray<ERANKING_STATE>                       StateListA;                                    // 0x01B4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<ERANKING_STATE>                       StateListB;                                    // 0x01C0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<ERANKING_STATE>                       StateListC;                                    // 0x01CC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            StatePos;                                      // 0x01D8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIgnoreSkip : 1;                               // 0x01DC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           CommonFlag : 1;                                // 0x01DC (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            RankCount;                                     // 0x01E0 (0x0004) [0x0000000000000000]               
	int32_t                                            Count2;                                        // 0x01E4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuRanking");
		}

		return uClassPointer;
	};

	void AS_DiagramTextColor(int32_t Row, int32_t Col, int32_t SetColor);
	void AS_ReqRankBoardMOMScore(int32_t PosX, int32_t PosY, const class FString& PlayerName, int32_t Rank, const class FString& Num, const class FString& shopName, bool isScroll);
	void AS_ReqRankBoardScore(int32_t PosX, int32_t PosY, const class FString& PlayerName, int32_t Rank, const class FString& Num, const class FString& shopName, const class FString& CharaID, bool isScroll);
	void AS_ReqRankBoardStraightWins(int32_t PosX, int32_t PosY, const class FString& PlayerName, int32_t Rank, const class FString& Num, const class FString& shopName, bool isScroll);
	void AS_ReqRankBoardRR(int32_t PosX, int32_t PosY, const class FString& PlayerName, int32_t Rank, const class FString& Num, const class FString& shopName, const class FString& CharaID, bool isScroll);
	void AS_ReqRankBoardWins(int32_t PosX, int32_t PosY, const class FString& PlayerName, int32_t Rank, const class FString& Num, const class FString& shopName, bool isScroll);
	void OnUpdate(bool bTrigger);
	bool UpdateMOM(bool Trigger);
	bool UpdateQuest(bool Trigger);
	bool UpdateStraightWins(bool Trigger);
	void RRIndividual_Sub(bool Left, int32_t Rank, const class FString& PlayerName, const class FString& Num, const class FString& shopName, bool leftOnly);
	bool UpdateRRIndividual(bool Trigger);
	bool UpdateRR(bool Trigger);
	void WinNumIndividual_Sub(bool Left, int32_t Rank, const class FString& PlayerName, const class FString& Num, const class FString& shopName, bool leftOnly);
	bool UpdateWinNumIndividual(bool Trigger);
	bool UpdateWinNum(bool Trigger);
	bool UpdateDiagram(bool Trigger);
	bool UpdateUseRate(bool Trigger);
	bool UpdateInit(bool Trigger);
	void OnInitialize();
	class TArray<uint8_t> GetStateList();
	int32_t Debug_GetForceState();
	void SortRank(class TArray<int32_t>& outOutIndexList, class TArray<int32_t>& outRankList);
	ERANKING_GROUP GetRankingGroup();
	void GetData_QuestScore(int32_t Rank, class FString& outPlayerName, class FString& outScore, class FString& outShopName);
	void GetData_MOMScore(int32_t Rank, class FString& outPlayerName, class FString& outNum, class FString& outShopName, class FString& outCharaID);
	void GetData_StraightWins(int32_t Rank, class FString& outPlayerName, class FString& outNum, class FString& outShopName);
	void GetData_RRChara(const class FString& CharaID, int32_t Rank, class FString& outPlayerName, class FString& outNum, class FString& outShopName);
	void GetData_RRAll(int32_t Rank, class FString& outPlayerName, class FString& outNum, class FString& outShopName, class FString& outCharaID);
	void GetData_WinsChara(const class FString& CharaID, int32_t Rank, class FString& outPlayerName, class FString& outNum, class FString& outShopName);
	void GetData_WinsAll(int32_t Rank, class FString& outPlayerName, class FString& outNum, class FString& outShopName);
	void GetData_Diagram(const class FString& CharaID1, const class FString& CharaID2, int32_t& outRate);
	void GetData_UseCount(const class FString& CharaID, int32_t& outCount);
	bool IsRankingAccessFinish();
	void RequestRankingAccess();
	void InitMenu();
};

// Class REDGame.REDGfxMoviePlayer_MenuReplay
// 0x0020 (0x01B4 - 0x01D4)
class UREDGfxMoviePlayer_MenuReplay : public UREDGfxMoviePlayer_Menu_Base
{
public:
	int32_t                                            vRPLFactorNum;                                 // 0x01B4 (0x0004) [0x0000000000000000]               
	int32_t                                            vRPLCurrentCategory;                           // 0x01B8 (0x0004) [0x0000000000000000]               
	int32_t                                            vRPLCurrentFactor;                             // 0x01BC (0x0004) [0x0000000000000000]               
	int32_t                                            vRPLPageOffset;                                // 0x01C0 (0x0004) [0x0000000000000000]               
	int32_t                                            vRPLBasePosY;                                  // 0x01C4 (0x0004) [0x0000000000000000]               
	int32_t                                            vRPLTimer;                                     // 0x01C8 (0x0004) [0x0000000000000000]               
	int32_t                                            vRPLSortAnimTimer;                             // 0x01CC (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuBG*                   vMenuBg;                                       // 0x01D0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuReplay");
		}

		return uClassPointer;
	};

	void OnFinalize();
	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void funcPlay(bool bTrigger);
	void funcIdle(bool bTrigger);
	void eventUpdateFilterIcon();
	void UpdateCategoryText();
	void FactorDecision();
	void eventCategoryChenge(int32_t Add);
	void eventReturnMainMenu();
	void eventOnClose();
	void OnInitialize();
	void startReplayTheater();
	void setupStorageText();
	void ChengeCreateSort();
	bool IsFilterChenge(int32_t Filter);
	int32_t GetReplayListNum(int32_t Category);
	bool IsOnlineStorageEnable();
	bool IsLoadReplayList();
	void SetResultVisible(bool flg);
	void FilterReplayList(int32_t Category);
	void CheckCopyPopup();
	void ReplayDataCopy();
	bool IsReplayDataPlayError();
	bool ReplayDataPlay();
	void CheckSignOutPopup();
	void PopUpMenuInit(int32_t Type);
	void execScrollBar(int32_t State);
	void execCtrlBar(int32_t State);
	void execInfoBar(int32_t State, int32_t Category, int32_t Index);
	void execReplayList();
	void execFilterText();
	void execDrawNative(int32_t State);
	void execUpdateNative(int32_t State);
	void FinalizeNative();
	void InitializeNative();
};

// Class REDGame.REDGfxMoviePlayer_MenuStaffRoll
// 0x0029 (0x01B4 - 0x01DD)
class UREDGfxMoviePlayer_MenuStaffRoll : public UREDGfxMoviePlayer_Menu_Base
{
public:
	class TArray<struct FStaffRollTableItem>           StaffRollTable;                                // 0x01B4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Current;                                       // 0x01C0 (0x0004) [0x0000000000000000]               
	float                                              interval;                                      // 0x01C4 (0x0004) [0x0000000000000000]               
	float                                              IntervalCount;                                 // 0x01C8 (0x0004) [0x0000000000000000]               
	float                                              ScrollSpeed;                                   // 0x01CC (0x0004) [0x0000000000000000]               
	int32_t                                            AllFrame;                                      // 0x01D0 (0x0004) [0x0000000000000000]               
	int32_t                                            ResultCounter;                                 // 0x01D4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bNewRecordStart : 1;                           // 0x01D8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bStafrollEndFlag : 1;                          // 0x01D8 (0x0004) [0x0000000000000000] [0x00000002] 
	ESTAFFROLL_TEXT_TYPE                               TextType;                                      // 0x01DC (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuStaffRoll");
		}

		return uClassPointer;
	};

	bool IsEnd();
	void ReqStaffI(int32_t PosX, int32_t PosY, const class FString& leftTextJ, const class FString& leftTextE, const class FString& rightTextJ, const class FString& rightTextE, float Speed, int32_t skipFrame);
	void ReqStaffH(int32_t PosX, int32_t PosY, const class FString& leftText, const class FString& rightText, float Speed, int32_t skipFrame);
	void ReqStaffG(int32_t PosX, int32_t PosY, const class FString& titleTextJ, const class FString& titleTextE, float Speed, int32_t skipFrame);
	void ReqStaffF(int32_t PosX, int32_t PosY, const class FString& leftTextJ, const class FString& leftTextE, const class FString& rightTextJ, const class FString& rightTextE, float Speed, int32_t skipFrame);
	void ReqStaffE(int32_t PosX, int32_t PosY, const class FString& logoText, float Speed, int32_t skipFrame);
	void ReqStaffD(int32_t PosX, int32_t PosY, const class FString& TitleText, float Speed, int32_t skipFrame);
	void ReqStaffC(int32_t PosX, int32_t PosY, const class FString& TitleText, float Speed, int32_t skipFrame);
	void ReqStaffB(int32_t PosX, int32_t PosY, const class FString& leftText, const class FString& rightTextE, float Speed, int32_t skipFrame);
	void ReqStaffA(int32_t PosX, int32_t PosY, const class FString& leftText, const class FString& rightTextJ, const class FString& rightTextE, float Speed, int32_t skipFrame);
	void OnUpdate(bool bTrigger);
	void UpdateEnd(bool bTrigger);
	void UpdateToBeContinue(bool bTrigger);
	void UpdateEndWait(bool bTrigger);
	void UpdateStaffRoll(bool bTrigger);
	void UpdateResult(bool bTrigger);
	void UpdateResultWait(bool bTrigger);
	void UpdateWait(bool bTrigger);
	void OnInitialize();
	void ReqResult();
	void Skip(bool bStafroll);
	bool CheckSkipInput();
	bool IsSkipable();
	bool UpdateToBeContinueNative(int32_t stFrame, int32_t cntFrame, int32_t endFrame, int32_t yoinFrame, int32_t PosX, int32_t PosY, const class FString& Str, float Scale);
	void DelayGarbageCollection();
	void GetRecordAll(class FString& outBadgeNum, class FString& outScore, int32_t& outBadgeNewRecord, int32_t& outScoreNewRecord);
	void GetStageRecord(int32_t stage, class FString& outBadgeNum, class FString& outScore);
};

// Class REDGame.REDGfxMoviePlayer_MenuStaffRoll25
// 0x0003 (0x01DD - 0x01E0)
class UREDGfxMoviePlayer_MenuStaffRoll25 : public UREDGfxMoviePlayer_MenuStaffRoll
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuStaffRoll25");
		}

		return uClassPointer;
	};

	void OnInitialize();
};

// Class REDGame.REDGfxMoviePlayer_MenuStory
// 0x0034 (0x01B4 - 0x01E8)
class UREDGfxMoviePlayer_MenuStory : public UREDGfxMoviePlayer_Menu_Base
{
public:
	int32_t                                            SelectItemCursor;                              // 0x01B4 (0x0004) [0x0000000000000000]               
	int32_t                                            GlobalCounter;                                 // 0x01B8 (0x0004) [0x0000000000000000]               
	class UREDTexture2DArray*                          TextureList;                                   // 0x01BC (0x0004) [0x0000000000000000]               
	uint32_t                                           bDecide : 1;                                   // 0x01C0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bStartMenu : 1;                                // 0x01C0 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            DecideCounter;                                 // 0x01C4 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   CursorStart;                                   // 0x01C8 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   CursorPos;                                     // 0x01D0 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   CursorEnd;                                     // 0x01D8 (0x0008) [0x0000000000000000]               
	int32_t                                            CursorAnimCount;                               // 0x01E0 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuBG*                   BgMovie;                                       // 0x01E4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuStory");
		}

		return uClassPointer;
	};

	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void OnInitialize();
	void SetItemFocus(int32_t ItemIndex);
	void eventMenuStart();
	void eventPlayBGM();
	bool eventIsStartAnimEnd();
	class FString GetReadRatioString();
	void UpdateDrawMenu();
	void UpdateMenu();
	void InitMenu();
};

// Class REDGame.REDGfxMoviePlayer_MenuTitle
// 0x0030 (0x01B4 - 0x01E4)
class UREDGfxMoviePlayer_MenuTitle : public UREDGfxMoviePlayer_Menu_Base
{
public:
	uint32_t                                           bInsertCoin : 1;                               // 0x01B4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOpeingOnly : 1;                               // 0x01B4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCtrlBarDraw : 1;                              // 0x01B4 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            LongPressCount[2];                             // 0x01B8 (0x0008) [0x0000000000000000]               
	int32_t                                            CardInfoDispPlayer;                            // 0x01C0 (0x0004) [0x0000000000000000]               
	int32_t                                            CardState;                                     // 0x01C4 (0x0004) [0x0000000000000000]               
	int32_t                                            CardTimeLimit;                                 // 0x01C8 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuReadCard*             ReadCard;                                      // 0x01CC (0x0004) [0x0000000000000000]               
	int32_t                                            UpdateOpeningMovieState;                       // 0x01D0 (0x0004) [0x0000000000000000]               
	int32_t                                            UpdateOpeningMovieWait;                        // 0x01D4 (0x0004) [0x0000000000000000]               
	class FString                                      OpeningMovie;                                  // 0x01D8 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuTitle");
		}

		return uClassPointer;
	};

	void AS_LabelStop(const class FString& Label);
	void AS_Label(const class FString& Label);
	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	bool UpdateScreenTex_Sub(bool bTrigger, int32_t dispframe, int32_t minframe, const class FString& texPath, bool skipToTitle);
	void UpdateEnd(bool bTrigger);
	void UpdateOpeningMovie(bool bTrigger);
	void UpdatePSPlusTrial(bool bTrigger);
	void UpdateTitle(bool bTrigger);
	void UpdateCompanyLogo(bool bTrigger);
	void eventOnClose();
	void OnInitialize();
	void TitleStart();
	void OnCloseNative();
	void OnUpdateNative();
	void OnTitleStart();
	bool IsUSRom();
	bool IsOpenPSPlusTrialMenuCancel();
	void OpenPSPlusTrialMenu();
	bool UpdateTrial();
	void GetCompanyLogoMovieName(int32_t Index, class FString& outMovieName);
	bool IsSkipOpeningMovie();
	bool IsSkipCompanyLogo();
	bool IsNoCard();
	void SetDispRankingGroup(ERANKING_GROUP Group);
	void StepNextScene();
	ETITLE_NEXTSCENE GetNextScene();
	void StopMovie();
	bool IsMoviePlaying(const class FString& MovieName);
	bool IsMovieFinish(const class FString& MovieName);
	void StartMovie(const class FString& MovieName);
	bool UpdateCardDisp();
	void UpdateMenuTitleDraw();
	void InitMenuTitle();
};

// Class REDGame.REDGfxMoviePlayer_MenuTournamentList
// 0x0008 (0x01B4 - 0x01BC)
class UREDGfxMoviePlayer_MenuTournamentList : public UREDGfxMoviePlayer_Menu_Base
{
public:
	uint32_t                                           bShowTournamentList : 1;                       // 0x01B4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShowTournamentList2 : 1;                      // 0x01B4 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            TournamentPlayerNum;                           // 0x01B8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuTournamentList");
		}

		return uClassPointer;
	};

	void OnUpdate(bool bTrigger);
	void eventCloseTournamentList();
	void eventShowTournamentList2();
	void eventShowTournamentList(int32_t Num);
	void eventSetTitleName(const class FString& titleName);
	void eventSetStatusName(const class FString& StatName);
	void eventSetGroupName(const class FString& GroupName);
	void OnInitialize();
	bool Start(bool optionalStartPaused);
};

// Class REDGame.REDGfxMoviePlayer_MenuTournamentMisc
// 0x0024 (0x01B4 - 0x01D8)
class UREDGfxMoviePlayer_MenuTournamentMisc : public UREDGfxMoviePlayer_Menu_Base
{
public:
	int32_t                                            ShowBattlerCount;                              // 0x01B4 (0x0004) [0x0000000000000000]               
	int32_t                                            ShowRankingCount1;                             // 0x01B8 (0x0004) [0x0000000000000000]               
	int32_t                                            ShowRankingCount2;                             // 0x01BC (0x0004) [0x0000000000000000]               
	int32_t                                            ShowRankingRank[4];                            // 0x01C0 (0x0010) [0x0000000000000000]               
	int32_t                                            ShowRankingCounter;                            // 0x01D0 (0x0004) [0x0000000000000000]               
	int32_t                                            ShowBattlerCounter;                            // 0x01D4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuTournamentMisc");
		}

		return uClassPointer;
	};

	void OnUpdate(bool bTrigger);
	void eventStopShowRanking();
	void ShowRankingEnd();
	bool eventIsShowRanking();
	void eventShowRanking(int32_t rank1, const class FString& rankName1, int32_t rank2, const class FString& rankName2, int32_t rank3, const class FString& rankName3, int32_t rank4, const class FString& rankName4, const class FString& Grade, const class FString& Title);
	bool eventIsShowBattler();
	void eventShowBattler(const class FString& Title, const class FString& playerName1, const class FString& playerName2);
	void OnInitialize();
	bool Start(bool optionalStartPaused);
};

// Class REDGame.REDGfxMoviePlayer_NewChallenger
// 0x0000 (0x01A0 - 0x01A0)
class UREDGfxMoviePlayer_NewChallenger : public UREDGfxMoviePlayer
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_NewChallenger");
		}

		return uClassPointer;
	};

	bool Start(bool optionalStartPaused);
};

// Class REDGame.REDHUD
// 0x0008 (0x0450 - 0x0458)
class AREDHUD : public AHUD
{
public:
	class UREDGfxMovieArray*                           GfxMovieArray;                                 // 0x0450 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuModeSelect*           ModeSelectMovie;                               // 0x0454 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDHUD");
		}

		return uClassPointer;
	};

	void eventFinishModeSelect();
	bool eventIsModeSelect();
	void eventStartModeSelect(int32_t optionalMySetGameModeIndex);
	void eventReleaseGfxMovie(class UREDGfxMoviePlayer* Movie);
	void eventCreateOneshotGfxMovie(const class FString& MovieName, int32_t optionalParam0, int32_t optionalParam1, int32_t optionalParam2, int32_t optionalParam3);
	class UREDGfxMoviePlayer* eventCreateGfxMovie(const class FString& MovieName, int32_t optionalParam0, int32_t optionalParam1, int32_t optionalParam2, int32_t optionalParam3);
	void eventTick(float DeltaTime);
	void PostRender();
	void PostBeginPlay();
	bool eventIsFadeEnd();
	void eventAdvanceFadeFrame(int32_t frame);
	void eventQuickFadeEnd();
	void eventFadeOutFast();
	void eventFadeOut(int32_t optionalFrame);
	void eventFadeIn(int32_t optionalFrame);
	void eventChangeFadeColor(int32_t inFadeColor);
	void UnPauseGame();
	void PauseGame();
	void CleanUIForPauseScreen();
	class UGameViewportClient* GetGameViewportClient();
	void PostDispRoot();
};

// Class REDGame.REDHUD_Battle
// 0x0070 (0x0458 - 0x04C8)
class AREDHUD_Battle : public AREDHUD
{
public:
	class UREDGfxMovieManager_BattleHUD*               BattleHUDManager;                              // 0x0458 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           ComboDisp1P : 1;                               // 0x045C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           ComboDisp2P : 1;                               // 0x045C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           IsSpecialCameraPreFrame : 1;                   // 0x045C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDispCockpit : 1;                              // 0x045C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bMatchResultSmallWidth : 1;                    // 0x045C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bSpectatorInfoDisp : 1;                        // 0x045C (0x0004) [0x0000000000000000] [0x00000020] 
	int32_t                                            IsBurstSealed[2];                              // 0x0460 (0x0008) [0x0000000000000000]               
	int32_t                                            NegaDangerLevel[2];                            // 0x0468 (0x0008) [0x0000000000000000]               
	class UREDGfxMoviePlayer_BattleResultWindow*       MatchResultWindow;                             // 0x0470 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UREDGfxMoviePlayer_MenuContinue*             ContinueMovie;                                 // 0x0474 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UREDGfxMoviePlayer_BattleHaiku*              Haiku;                                         // 0x0478 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UFont*                                       SubtitleFont;                                  // 0x047C (0x0004) [0x0000000000000000]               
	struct FREDHUD_Battle_SpectatorInfo                SpectatorInfo[8];                              // 0x0480 (0x0040) [0x0000000000000000]               
	struct FREDHUD_Battle_NegaPenaInfo                 NegaPenaInfo[2];                               // 0x04C0 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDHUD_Battle");
		}

		return uClassPointer;
	};

	void RVNBlinkEffect(int32_t Player);
	void RVNRiseEffect(int32_t Player);
	void JKOGhostGaugeDisp(int32_t Player, int32_t ColorID, int32_t Type, bool hide, int32_t lv, float gauge);
	void BurstKakuseiEff(int32_t Dir);
	void BurstShake(int32_t Player);
	void RequestBattleInfo(int32_t TextID, int32_t Player, int32_t subID1, int32_t subID2);
	void Guardmiss_m(int32_t Player, int32_t X, int32_t Y, int32_t Dir);
	void Guardmiss_u(int32_t Player, int32_t X, int32_t Y, int32_t Dir);
	void ShinSousaiDamage(int32_t Player, int32_t shakeFrame);
	void ShinSousai(int32_t frame);
	void DispCockpitAll(bool disp);
	void DispCockpit(bool disp);
	void NegaPena(int32_t Player);
	void ButtonRenda(int32_t Player, int32_t timePer, int32_t X, int32_t Y, bool disp);
	void LeverGacha(int32_t Player, int32_t timePer, int32_t X, int32_t Y, bool disp);
	void SetTensGaugeColor(int32_t Player, int32_t mulCol, int32_t addCol);
	void SetHPGaugeColor(int32_t Player, int32_t mulCol, int32_t addCol);
	void UpdateRoundWin(int32_t Player, int32_t roundNum);
	void SetupRoundNum(int32_t round1P, int32_t round2P);
	void eventHaikuRsset(int32_t LRpos);
	void eventHaikuEnd(int32_t LRpos);
	void eventHaikuStart03(int32_t LRpos, const class FString& ku);
	void eventHaikuStart02(int32_t LRpos, const class FString& ku);
	void eventHaikuStart01(int32_t LRpos, const class FString& ku);
	bool FinishContinue();
	bool IsContinueLoop();
	void StartContinue();
	void MatchResultWindow_AddQuestInfo(int32_t Player, const class FString& questName, float Rate, int32_t Type, const class FString& rewordStr, int32_t rewordType);
	void MatchResultWindow_AddMedalInfo(int32_t Player, const class FString& medalName, const class FString& medalDesc, int32_t Grade);
	void MatchResultWindow_Release();
	void MatchResultWindow_PauseKey(bool Pause);
	void MatchResultWindow_SkipShowAnim();
	bool MatchResultWindow_IsShowAnimEnd();
	void MatchResultWindow_StartShow(struct FMatchResultWindowArg& outArg1P, struct FMatchResultWindowArg& outArg2P);
	void UpdateCombo(class AREDPawn* player1, class AREDPawn* player2);
	void Update_Tick();
	void UpdateAll();
	void PostRender();
	void eventResetCardInfo();
	void eventResetOnRound();
	void eventTick(float DeltaTime);
	void eventSetupCardInfo();
	void PostBeginPlay();
	void eventPreBeginPlay();
	bool IsMapCycleTransitioning();
	void SetupBeginPlay();
	class FString GetGameVersionString();
	class FString GetDanToString(int32_t Dan);
};

// Class REDGame.REDMaterialLink
// 0x000C (0x003C - 0x0048)
class UREDMaterialLink : public UObject
{
public:
	class UREDEffectMaterialInfo*                      EffectMaterialInfo;                            // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UREDParticleColorInfo*                       ParticleColorInfo;                             // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UREDParticleMaterialInfo*                    ParticleMaterialInfo;                          // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDMaterialLink");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDMaterialSetArray
// 0x000C (0x003C - 0x0048)
class UREDMaterialSetArray : public UObject
{
public:
	class TArray<struct FMeshMaterialData>             MaterialData;                                  // 0x003C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDMaterialSetArray");
		}

		return uClassPointer;
	};

	int32_t GetMaterialDataIndexFromMeshName(const class FName& MeshName);
};

// Class REDGame.REDMeshPool
// 0x0024 (0x003C - 0x0060)
class UREDMeshPool : public UObject
{
public:
	uint32_t                                           bPoolInitialized : 1;                          // 0x003C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class TArray<class USkeletalMeshComponent*>        PoolSkeltalMeshComponents;                     // 0x0040 (0x000C) [0x000000000448200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class UMaterialInstanceConstant*>     PoolMICs;                                      // 0x004C (0x000C) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            MaxSkeletalMeshComponents;                     // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxMaterialInstanceConstants;                  // 0x005C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDMeshPool");
		}

		return uClassPointer;
	};

	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void ResetPool();
	void InitPool();
	class UMaterialInstanceConstant* GetFreeMaterialInstanceConstant(bool optionalBCreateNewObject);
	class USkeletalMeshComponent* GetFreeSkeletalMeshComponent(bool optionalBCreateNewObject);
	void ReturnToMaterialInstanceFromPawn(class AREDPawn* ReleasePawn);
	void ReturnToSkeletalMeshComponentFromPawn(class AREDPawn* ReleasePawn);
	void FreeMaterialInstanceConstant(class UMaterialInstanceConstant* MIC);
	void FreeSkeletalMeshComponent(class USkeletalMeshComponent* SKMeshComponent);
};

// Class REDGame.REDMOMItem
// 0x0008 (0x003C - 0x0044)
class UREDMOMItem : public UObject
{
public:
	class FName                                        ParticleName;                                  // 0x003C (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDMOMItem");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDNamedObjectArray
// 0x000C (0x003C - 0x0048)
class UREDNamedObjectArray : public UObject
{
public:
	class TArray<struct FNamedObject>                  NamedObjectArray;                              // 0x003C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDNamedObjectArray");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDParticle
// 0x000C (0x003C - 0x0048)
class UREDParticle : public UObject
{
public:
	class TArray<struct FParticleDatabase>             ParticleData;                                  // 0x003C (0x000C) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDParticle");
		}

		return uClassPointer;
	};

	class UParticleSystemComponent* CreateParticle(class AActor* Actor, struct FParticleArg& outArg);
};

// Class REDGame.REDParticleColorInfo
// 0x000C (0x003C - 0x0048)
class UREDParticleColorInfo : public UObject
{
public:
	class TArray<struct FParticleColorOverLifeData>    ColorData;                                     // 0x003C (0x000C) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDParticleColorInfo");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDParticleMaterialInfo
// 0x0014 (0x003C - 0x0050)
class UREDParticleMaterialInfo : public UObject
{
public:
	class TArray<struct FParticleMaterialPattern>      MaterialData;                                  // 0x003C (0x000C) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UREDParticleColorInfo*                       ColorInfo;                                     // 0x0048 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UREDPawnMaterials*                           PawnMaterial;                                  // 0x004C (0x0004) [0x0000000000000000] (CPF_EditorOnly)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDParticleMaterialInfo");
		}

		return uClassPointer;
	};

	void Setup(class AREDPawn* ParentPawn, class UREDParticleColorInfo* SetColorInfo);
};

// Class REDGame.REDParticleModuleChangeBoundsScale
// 0x0004 (0x0048 - 0x004C)
class UREDParticleModuleChangeBoundsScale : public UParticleModuleSizeBase
{
public:
	float                                              BoundsScale;                                   // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDParticleModuleChangeBoundsScale");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDParticleModuleColorByName
// 0x000C (0x00B4 - 0x00C0)
class UREDParticleModuleColorByName : public UParticleModuleColorOverLife
{
public:
	class FName                                        ColorDataName;                                 // 0x00B4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UREDParticleColorInfo*                       PreviewColorInfo;                              // 0x00BC (0x0004) [0x0000000000000001] (CPF_Edit | CPF_EditorOnly)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDParticleModuleColorByName");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDParticleModuleColorOverLife
// 0x0010 (0x00B4 - 0x00C4)
class UREDParticleModuleColorOverLife : public UParticleModuleColorOverLife
{
public:
	uint32_t                                           bIsDefault : 1;                                // 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class TArray<uint8_t>                              ColorIDs;                                      // 0x00B8 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDParticleModuleColorOverLife");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDParticleModuleMaterialByName
// 0x0018 (0x0048 - 0x0060)
class UREDParticleModuleMaterialByName : public UParticleModuleMaterialBase
{
public:
	class TArray<class FName>                          MaterialNames;                                 // 0x0048 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UMaterialInterface*>            DefaultMaterials;                              // 0x0054 (0x000C) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDParticleModuleMaterialByName");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDPawn_CameraAttach
// 0x0000 (0x0450 - 0x0450)
class AREDPawn_CameraAttach : public APawn
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPawn_CameraAttach");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDPawnMaterials
// 0x001C (0x003C - 0x0058)
class UREDPawnMaterials : public UObject
{
public:
	class TArray<struct FMaterialSetArrayPair>         MaterialSetArrays;                             // 0x003C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            ColorID;                                       // 0x0048 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FUseMaterialInstance>          UseMatInstances;                               // 0x004C (0x000C) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPawnMaterials");
		}

		return uClassPointer;
	};

	class UREDMaterialSetArray* GetMaterialSetArrayFromPatternName(const class FName& optionalPatternName);
};

// Class REDGame.REDPlayerController
// 0x0014 (0x0594 - 0x05A8)
class AREDPlayerController : public AGamePlayerController
{
public:
	class UREDControlModule*                           ControlModule;                                 // 0x0594 (0x0004) [0x0000000000000000]               
	class FString                                      DefaultControlModuleClass;                     // 0x0598 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class AREDHUD*                                     MyREDHUD;                                      // 0x05A4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPlayerController");
		}

		return uClassPointer;
	};

	void InitREDPlayerController();
	void ClientSetHUD(class UClass* newHUDType);
	void UpdateRotation(float DeltaTime);
	void PostBeginPlay();
	void StartFire(uint8_t optionalFireModeNum);
	void Pause();
	void ZoomOut();
	void ZoomIn();
	void ChangeCamera(const class FString& ClassName);
	void ChangeControls(const class FString& ClassName);
	void PauseGame();
	bool CanPauseGame(class AREDPlayerController* PC);
	void eventConditionalPauseGame(int32_t optionalInputID);
	void ShowMenu();
	bool IsOnlineRollback();
};

// Class REDGame.REDPlayerController_Adv
// 0x0000 (0x05A8 - 0x05A8)
class AREDPlayerController_Adv : public AREDPlayerController
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPlayerController_Adv");
		}

		return uClassPointer;
	};

	void eventPreBeginPlay();
	void InitPlayerController_Adv();
};

// Class REDGame.REDPlayerController_DigitalFigure
// 0x0000 (0x05A8 - 0x05A8)
class AREDPlayerController_DigitalFigure : public AREDPlayerController
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPlayerController_DigitalFigure");
		}

		return uClassPointer;
	};

	void eventPreBeginPlay();
	void InitPlayerController_DigitalFigure();
};

// Class REDGame.REDPointLightManager
// 0x0610 (0x003C - 0x064C)
class UREDPointLightManager : public UObject
{
public:
	uint32_t                                           bSpawnedActor : 1;                             // 0x003C (0x0004) [0x0000000000000000] [0x00000001] (CPF_EditorOnly)
	uint32_t                                           bDispLightPosition : 1;                        // 0x003C (0x0004) [0x0000000000000000] [0x00000002] (CPF_EditorOnly)
	uint32_t                                           bEnableLight : 1;                              // 0x003C (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	class AREDActor_CheckPointLight*                   CheckActor[16];                                // 0x0040 (0x0040) [0x0000000000002000] (CPF_Transient | CPF_EditorOnly)
	int32_t                                            UniqueIDCounter;                               // 0x0080 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            ValidUniqueIDThreshold;                        // 0x0084 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            TickCounter;                                   // 0x0088 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FPointLightInfo                             LightInfo[16];                                 // 0x008C (0x05C0) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPointLightManager");
		}

		return uClassPointer;
	};

	void eventDebugDisp(class AGameInfo* Info, bool bDisp);
	void PostUpdate();
	void UpdateCalledOn(int32_t Id);
	void NativeDebugDisp(bool bDisp);
	void Tick(float DeltaTime);
	void GetClosestPointLight(struct FVector& outLocation, struct FLinearColor& outLightPositionAndCutoff, struct FLinearColor& outLightColor);
	void UnregistLight(int32_t Id);
	void UpdateLight(int32_t Id, struct FVector& outNewLocation, struct FLinearColor& outNewLightColor);
	void UpdateLightDebug(int32_t Id, float amp, float Freq, float Amplify, float Attenuation, float Range, float Cutoff, float distanceMultiply, struct FVector& outNewLocation, struct FLinearColor& outNewLightColor);
	int32_t RegistLight(float amp, float Freq, float Amplify, float Attenuation, float Range, float Cutoff, float distanceMultiply, bool optionalIsBGParticle, struct FVector& outLocation, struct FLinearColor& outLightColor);
	void EnableLight(bool bEnable);
	void Reset(bool optionalBWithBG);
	void Initialize();
};

// Class REDGame.REDSceneColorSettings
// 0x0055 (0x01C8 - 0x021D)
class AREDSceneColorSettings : public AActor
{
public:
	struct FLinearColor                                AddColor;                                      // 0x01C8 (0x0010) [0x0000000000000003] (CPF_Edit | CPF_Const | CPF_Interp)
	struct FLinearColor                                MulColor;                                      // 0x01D8 (0x0010) [0x0000000000000003] (CPF_Edit | CPF_Const | CPF_Interp)
	struct FLinearColor                                LightColor;                                    // 0x01E8 (0x0010) [0x0000000000000003] (CPF_Edit | CPF_Const | CPF_Interp)
	struct FLinearColor                                AmbientColor;                                  // 0x01F8 (0x0010) [0x0000000000000003] (CPF_Edit | CPF_Const | CPF_Interp)
	float                                              saturation;                                    // 0x0208 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const | CPF_Interp)
	struct FLinearColor                                GlareColor;                                    // 0x020C (0x0010) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EStageLightDir                                     StageLightDir;                                 // 0x021C (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSceneColorSettings");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_AccessObjectList
// 0x0000 (0x0104 - 0x0104)
class UREDSeqAct_AccessObjectList : public USeqAct_AccessObjectList
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_AccessObjectList");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_AdvSearchPawn
// 0x0010 (0x00FC - 0x010C)
class UREDSeqAct_AdvSearchPawn : public USequenceAction
{
public:
	class APawn*                                       TargetPawn;                                    // 0x00FC (0x0004) [0x0000000000000000]               
	class FString                                      TargetName;                                    // 0x0100 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_AdvSearchPawn");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_BadgeAction
// 0x0008 (0x00FC - 0x0104)
class UREDSeqAct_BadgeAction : public USequenceAction
{
public:
	EBadgeActionBG                                     ActionType;                                    // 0x00FC (0x0001) [0x0000000000000001] (CPF_Edit)    
	class APawn*                                       Player;                                        // 0x0100 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_BadgeAction");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_BGEventFinish
// 0x0000 (0x00FC - 0x00FC)
class UREDSeqAct_BGEventFinish : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_BGEventFinish");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_BGFloorAttribute
// 0x0010 (0x00FC - 0x010C)
class UREDSeqAct_BGFloorAttribute : public USequenceAction
{
public:
	EBGFloorAttribute                                  Attribute;                                     // 0x00FC (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnable : 1;                                   // 0x0100 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              StartAreaX;                                    // 0x0104 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EndAreaX;                                      // 0x0108 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_BGFloorAttribute");
		}

		return uClassPointer;
	};

	class FString eventGetAttributeName();
};

// Class REDGame.REDSeqAct_ChangeAnimNodeLookAtBattle
// 0x000D (0x00FC - 0x0109)
class UREDSeqAct_ChangeAnimNodeLookAtBattle : public USequenceAction
{
public:
	class ASkeletalMeshActor*                          TargetActor;                                   // 0x00FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           EnableCenterAngle : 1;                         // 0x0100 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           EnableLookAtPattern : 1;                       // 0x0100 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           EnableSetSkelControl : 1;                      // 0x0100 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           SetSkelControl : 1;                            // 0x0100 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	float                                              CenterAngle;                                   // 0x0104 (0x0004) [0x0000000000000001] (CPF_Edit)    
	EAnimLookAtPattern                                 LookAtPattern;                                 // 0x0108 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_ChangeAnimNodeLookAtBattle");
		}

		return uClassPointer;
	};

	void eventActivateFunc();
};

// Class REDGame.REDSeqAct_CreateParticle
// 0x002C (0x00FC - 0x0128)
class UREDSeqAct_CreateParticle : public USequenceAction
{
public:
	class UParticleSystem*                             ParticleSystem;                                // 0x00FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Dir;                                           // 0x0100 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Location;                                      // 0x0104 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    Rotation;                                      // 0x0110 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Scale;                                         // 0x011C (0x000C) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_CreateParticle");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_DeleteParticleFast
// 0x0000 (0x00FC - 0x00FC)
class UREDSeqAct_DeleteParticleFast : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_DeleteParticleFast");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_EntryEventFinish
// 0x0000 (0x00FC - 0x00FC)
class UREDSeqAct_EntryEventFinish : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_EntryEventFinish");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_FlipBookFrame
// 0x000C (0x00FC - 0x0108)
class UREDSeqAct_FlipBookFrame : public USequenceAction
{
public:
	class UTextureFlipBook*                            TargetTexture;                                 // 0x00FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Row;                                           // 0x0100 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Col;                                           // 0x0104 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_FlipBookFrame");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_GetCharaColorID
// 0x0008 (0x00FC - 0x0104)
class UREDSeqAct_GetCharaColorID : public USequenceAction
{
public:
	int32_t                                            ColorID;                                       // 0x00FC (0x0004) [0x0000000000000000]               
	class APawn*                                       CharaPawn;                                     // 0x0100 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_GetCharaColorID");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_Interp
// 0x0000 (0x01DC - 0x01DC)
class UREDSeqAct_Interp : public USeqAct_Interp
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_Interp");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_MITV_SetVectorStartTime
// 0x0014 (0x00FC - 0x0110)
class UREDSeqAct_MITV_SetVectorStartTime : public USequenceAction
{
public:
	class UMaterialInstanceTimeVarying*                MITV;                                          // 0x00FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartTime;                                     // 0x0100 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        ParamName;                                     // 0x0104 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxDuration;                                   // 0x010C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_MITV_SetVectorStartTime");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_MultiSequence
// 0x0018 (0x0110 - 0x0128)
class UREDSeqAct_MultiSequence : public USeqAct_Latent
{
public:
	int32_t                                            WaitCount;                                     // 0x0110 (0x0004) [0x0000000000000000]               
	int32_t                                            LinkCount;                                     // 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bCountStop : 1;                                // 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<int32_t>                              DelayFrame;                                    // 0x011C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_MultiSequence");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_PauseParticle
// 0x0000 (0x00FC - 0x00FC)
class UREDSeqAct_PauseParticle : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_PauseParticle");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_PlayCameraAnim
// 0x0004 (0x011C - 0x0120)
class UREDSeqAct_PlayCameraAnim : public USeqAct_PlayCameraAnim
{
public:
	class UCameraAnimInst*                             PlayingCamAnimInst;                            // 0x011C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_PlayCameraAnim");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_PlayMovie
// 0x0014 (0x0110 - 0x0124)
class UREDSeqAct_PlayMovie : public USeqAct_Latent
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
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_PlayMovie");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_PositionMirror
// 0x000C (0x00FC - 0x0108)
class UREDSeqAct_PositionMirror : public USequenceAction
{
public:
	class TArray<class AActor*>                        TargetActors;                                  // 0x00FC (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_PositionMirror");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_REDInterp
// 0x0004 (0x01DC - 0x01E0)
class UREDSeqAct_REDInterp : public USeqAct_Interp
{
public:
	uint32_t                                           IgnoreBGPause : 1;                             // 0x01DC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_REDInterp");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_RemainderInt
// 0x000C (0x00FC - 0x0108)
class UREDSeqAct_RemainderInt : public USeqAct_SetSequenceVariable
{
public:
	int32_t                                            ValueA;                                        // 0x00FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ValueB;                                        // 0x0100 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            IntResult;                                     // 0x0104 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_RemainderInt");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_SetCharaToLookAtBattle
// 0x000C (0x00FC - 0x0108)
class UREDSeqAct_SetCharaToLookAtBattle : public USequenceAction
{
public:
	class FString                                      CharaID;                                       // 0x00FC (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_SetCharaToLookAtBattle");
		}

		return uClassPointer;
	};

	class APawn* GetCharaPawn(const class FString& _CharaID);
	void eventActivateFunc();
};

// Class REDGame.REDSeqAct_SetPawnToLookAtBattle
// 0x0004 (0x00FC - 0x0100)
class UREDSeqAct_SetPawnToLookAtBattle : public USequenceAction
{
public:
	class APawn*                                       TargetPawn;                                    // 0x00FC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_SetPawnToLookAtBattle");
		}

		return uClassPointer;
	};

	void eventActivateFunc();
};

// Class REDGame.REDSeqAct_Subtitle
// 0x0014 (0x00FC - 0x0110)
class UREDSeqAct_Subtitle : public USequenceAction
{
public:
	class FString                                      TextID;                                        // 0x00FC (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	ESubtitleType                                      DispType;                                      // 0x0108 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UREDAssetLocalizeText*                       TextData;                                      // 0x010C (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_Subtitle");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_Subtitle_Interlude
// 0x0028 (0x00FC - 0x0124)
class UREDSeqAct_Subtitle_Interlude : public USequenceAction
{
public:
	class FString                                      TextID;                                        // 0x00FC (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	ESubtitleType                                      DispType;                                      // 0x0108 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bForDate : 1;                                  // 0x010C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            ForDate_PosX;                                  // 0x0110 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ForDate_PosY;                                  // 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ForDate_FadeIn;                                // 0x0118 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ForDate_Wait;                                  // 0x011C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ForDate_FadeOut;                               // 0x0120 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_Subtitle_Interlude");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqAct_ToggleAmbientSound
// 0x0000 (0x00FC - 0x00FC)
class UREDSeqAct_ToggleAmbientSound : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqAct_ToggleAmbientSound");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqCond_CharaCheck
// 0x0010 (0x00E4 - 0x00F4)
class UREDSeqCond_CharaCheck : public USequenceCondition
{
public:
	EUE_PLAYER_ID                                      Player;                                        // 0x00E4 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FString                                      CharaID;                                       // 0x00E8 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_CharaCheck");
		}

		return uClassPointer;
	};

	class FString eventGetCharaID();
};

// Class REDGame.REDSeqCond_CharaCheck2
// 0x0010 (0x00E4 - 0x00F4)
class UREDSeqCond_CharaCheck2 : public USequenceCondition
{
public:
	uint32_t                                           bEnemy : 1;                                    // 0x00E4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class FString                                      CharaID;                                       // 0x00E8 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_CharaCheck2");
		}

		return uClassPointer;
	};

	class FString eventGetCharaID();
};

// Class REDGame.REDSeqCond_CompareString
// 0x0018 (0x00E4 - 0x00FC)
class UREDSeqCond_CompareString : public USequenceCondition
{
public:
	class FString                                      ValueA;                                        // 0x00E4 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      ValueB;                                        // 0x00F0 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_CompareString");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqCond_EntryEventCharaCheck
// 0x0018 (0x00E4 - 0x00FC)
class UREDSeqCond_EntryEventCharaCheck : public USequenceCondition
{
public:
	class FString                                      PlayerCharaID;                                 // 0x00E4 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      EnemyCharaID;                                  // 0x00F0 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_EntryEventCharaCheck");
		}

		return uClassPointer;
	};

	class FString eventGetCharaID(bool isEnemy);
};

// Class REDGame.REDSeqCond_FinalRoundCheck
// 0x0001 (0x00E4 - 0x00E5)
class UREDSeqCond_FinalRoundCheck : public USequenceCondition
{
public:
	EFinalRoundCheckType                               CheckType;                                     // 0x00E4 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_FinalRoundCheck");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqCond_MainPlayerCheck
// 0x0001 (0x00E4 - 0x00E5)
class UREDSeqCond_MainPlayerCheck : public USequenceCondition
{
public:
	EUE_PLAYER_ID                                      Player;                                        // 0x00E4 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_MainPlayerCheck");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqCond_PawnCharaCheck
// 0x0014 (0x00E4 - 0x00F8)
class UREDSeqCond_PawnCharaCheck : public USequenceCondition
{
public:
	class APawn*                                       Player;                                        // 0x00E4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      CharaID;                                       // 0x00E8 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           IsCheckEnemy : 1;                              // 0x00F4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_PawnCharaCheck");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqCond_PawnCharaDeadCheck
// 0x0004 (0x00E4 - 0x00E8)
class UREDSeqCond_PawnCharaDeadCheck : public USequenceCondition
{
public:
	class APawn*                                       Player;                                        // 0x00E4 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_PawnCharaDeadCheck");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqCond_PawnMainPlayerCheck
// 0x0004 (0x00E4 - 0x00E8)
class UREDSeqCond_PawnMainPlayerCheck : public USequenceCondition
{
public:
	class APawn*                                       Player;                                        // 0x00E4 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_PawnMainPlayerCheck");
		}

		return uClassPointer;
	};

	bool eventCheck();
};

// Class REDGame.REDSeqCond_SpeedModeOption
// 0x0000 (0x00E4 - 0x00E4)
class UREDSeqCond_SpeedModeOption : public USequenceCondition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_SpeedModeOption");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqCond_SwitchAttackLevel
// 0x0004 (0x00E4 - 0x00E8)
class UREDSeqCond_SwitchAttackLevel : public USequenceCondition
{
public:
	int32_t                                            Level;                                         // 0x00E4 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_SwitchAttackLevel");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqCond_SwitchDir
// 0x0004 (0x00E4 - 0x00E8)
class UREDSeqCond_SwitchDir : public USequenceCondition
{
public:
	int32_t                                            Dir;                                           // 0x00E4 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_SwitchDir");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqCond_SwitchEventMainPlayer
// 0x0000 (0x00E4 - 0x00E4)
class UREDSeqCond_SwitchEventMainPlayer : public USequenceCondition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_SwitchEventMainPlayer");
		}

		return uClassPointer;
	};

	EUE_PLAYER_ID eventGetEventMainPlayerID();
};

// Class REDGame.REDSeqCond_SwitchWeight
// 0x0004 (0x00E4 - 0x00E8)
class UREDSeqCond_SwitchWeight : public USequenceCondition
{
public:
	int32_t                                            Weight;                                        // 0x00E4 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqCond_SwitchWeight");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_BGEffect
// 0x003C (0x0114 - 0x0150)
class UREDSeqEvent_BGEffect : public USequenceEvent
{
public:
	class AActor*                                      TargetActor;                                   // 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartAreaX;                                    // 0x0118 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EndAreaX;                                      // 0x011C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartAreaZ;                                    // 0x0120 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EndAreaZ;                                      // 0x0124 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PositionY;                                     // 0x0128 (0x0004) [0x0000000000000001] (CPF_Edit)    
	EBGEffAttackType                                   AttackType;                                    // 0x012C (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Dir;                                           // 0x0130 (0x0004) [0x0000000000000000]               
	struct FVector                                     DoneLocation;                                  // 0x0134 (0x000C) [0x0000000000000000]               
	int32_t                                            AttackLevel;                                   // 0x0140 (0x0004) [0x0000000000000000]               
	int32_t                                            AttackDamage;                                  // 0x0144 (0x0004) [0x0000000000000000]               
	class APawn*                                       PlayerPawn;                                    // 0x0148 (0x0004) [0x0000000000000000]               
	class APawn*                                       EnemyPawn;                                     // 0x014C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_BGEffect");
		}

		return uClassPointer;
	};

	bool ActivateFunction(class AActor* InOriginator, bool bActivate);
	void eventGetHitRect(float& outStartX, float& outEndX, float& outStartZ, float& outEndZ, float& outPosY);
	struct FVector GetOffset();
};

// Class REDGame.REDSeqEventManager
// 0x0018 (0x01C8 - 0x01E0)
class AREDSeqEventManager : public AActor
{
public:
	class TArray<struct FEventBinding>                 BGEffectEventArray;                            // 0x01C8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FEventBinding>                 PlayerEventArray;                              // 0x01D4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEventManager");
		}

		return uClassPointer;
	};

	bool RequestEventPlayer(const class FName& EventName, class APawn* PlayerPawn, class APawn* EnemyPawn, int32_t optionalParam0, int32_t optionalParam1, int32_t optionalParam2);
	void DisplayDebugBGAttribute(class AHUD* HUD);
	int32_t GetBGFloorAttribute(float PosX);
	void DisplayDebugBGEffectSub(class AHUD* HUD, class USequence* GameSequence, int32_t Index);
	void DisplayDebugBGEffect(class AHUD* HUD);
	bool RequestEventBGEffect(const class FName& EventName, float posX1, float posX2, float posZ1, float posZ2, int32_t Dir, int32_t AttackLv, int32_t atkType, int32_t AttackDamage, class APawn* PlayerPawn, class APawn* EnemyPawn, class TArray<class UREDSeqEvent_BGEffect*>& outDoneList);
	void DrawBGAttributeRect(class AHUD* HUD, float X1, float X2, int32_t Attr, const class FString& Comment);
	void DrawBGEffectRect(class AHUD* HUD, class UREDSeqEvent_BGEffect* eff, const class FString& effName, const class FString& Comment);
	void ToUEPos(struct FVector& outLoc);
	bool IsBGEffectHit(float X1, float X2, float Y1, float Y2, class UREDSeqEvent_BGEffect* eff);
};

// Class REDGame.REDSoundCueArray
// 0x000C (0x003C - 0x0048)
class UREDSoundCueArray : public UObject
{
public:
	class TArray<struct FSoundCueData>                 SoundCueArray;                                 // 0x003C (0x000C) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSoundCueArray");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSoundLipsyncArray
// 0x000C (0x003C - 0x0048)
class UREDSoundLipsyncArray : public UObject
{
public:
	class TArray<struct FLipSyncData>                  LipsyncArray;                                  // 0x003C (0x000C) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSoundLipsyncArray");
		}

		return uClassPointer;
	};

	class UREDAssetLipSync* GetLipsync(const class FName& Key);
};

// Class REDGame.REDSoundPlayer
// 0x0008 (0x003C - 0x0044)
class UREDSoundPlayer : public UObject
{
public:
	class UREDSoundCueArray*                           Cues;                                          // 0x003C (0x0004) [0x0000000000000000]               
	class UREDSoundCueArray*                           ExtraCues;                                     // 0x0040 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSoundPlayer");
		}

		return uClassPointer;
	};

	void PlayStaticSoundWithPos(const class FName& cueName, struct FVector& outLocation);
	void PlayStaticSound(const class FName& cueName);
	void PlaySound(class AActor* Actor, const class FName& cueName);
	class USoundCue* GetSoundCue(const class FName& cueName);
};

// Class REDGame.REDSoundPlayerUnique
// 0x001C (0x0044 - 0x0060)
class UREDSoundPlayerUnique : public UREDSoundPlayer
{
public:
	uint32_t                                           bAttached : 1;                                 // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FUniqueSoundInfo                            UniqueSound[2];                                // 0x0048 (0x0018) [0x0000000000082000] (CPF_Transient | CPF_Component)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSoundPlayerUnique");
		}

		return uClassPointer;
	};

	bool IsPlayingUniqueSound(int32_t optionalCh);
	void StopUniqueSound(int32_t optionalCh);
	void PlayUniqueSound(class AActor* Actor, const class FName& cueName, bool optionalIsOverWrite, float optionalPitchMultiply, int32_t optionalCh);
	void AttachComponent(class AActor* Actor);
	void eventCreateAudioComponent();
};

// Class REDGame.REDTexture2DArray
// 0x000C (0x003C - 0x0048)
class UREDTexture2DArray : public UObject
{
public:
	class TArray<struct FTextureArrayItem>             Texture2DArray;                                // 0x003C (0x000C) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDTexture2DArray");
		}

		return uClassPointer;
	};

	class UTexture2D* GetTexture2D(const class FName& texName);
};

// Class REDGame.REDTMSConfig
// 0x0058 (0x003C - 0x0094)
class UREDTMSConfig : public UObject
{
public:
	int32_t                                            BonusWD;                                       // 0x003C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            BonusWDwin;                                    // 0x0040 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            BonusAP;                                       // 0x0044 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            EventID[8];                                    // 0x0048 (0x0020) [0x0000000000004000] (CPF_Config)  
	int32_t                                            TwitterEnable;                                 // 0x0068 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            PlayTweetInterval;                             // 0x006C (0x0004) [0x0000000000004000] (CPF_Config)  
	class FString                                      OPEnableDate;                                  // 0x0070 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      EventStartDate;                                // 0x007C (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      EventEndDate;                                  // 0x0088 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDTMSConfig");
		}

		return uClassPointer;
	};

	void eventDispData();
};

// Class REDGame.REDWinCameraPos
// 0x0010 (0x01C8 - 0x01D8)
class AREDWinCameraPos : public AActor
{
public:
	EUE_PLAYER_ID                                      PlayerID;                                      // 0x01C8 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              FOV;                                           // 0x01CC (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	int32_t                                            Pitch;                                         // 0x01D0 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              PosZ;                                          // 0x01D4 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDWinCameraPos");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAssetBase
// 0x007C (0x003C - 0x00B8)
class UREDAssetBase : public UObject
{
public:
	struct FPointer                                    TopData;                                       // 0x003C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            DataSize;                                      // 0x0040 (0x0004) [0x0000000000000000]               
	struct FUntypedBulkData_Mirror                     BulkDataLE;                                    // 0x0044 (0x0034) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FUntypedBulkData_Mirror                     BulkDataBE;                                    // 0x0078 (0x0034) [0x0000000000001002] (CPF_Const | CPF_Native)
	class FString                                      SourceFile;                                    // 0x00AC (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditorOnly)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAssetBase");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAssetAdvScript
// 0x0000 (0x00B8 - 0x00B8)
class UREDAssetAdvScript : public UREDAssetBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAssetAdvScript");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAssetAdvText
// 0x0000 (0x00B8 - 0x00B8)
class UREDAssetAdvText : public UREDAssetBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAssetAdvText");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAssetBinary
// 0x0010 (0x00B8 - 0x00C8)
class UREDAssetBinary : public UREDAssetBase
{
public:
	uint32_t                                           bNeedSwapEndian : 1;                           // 0x00B8 (0x0004) [0x0000000000021002] [0x00000001] (CPF_Const | CPF_Native | CPF_EditConst)
	class FString                                      Desc;                                          // 0x00BC (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditorOnly)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAssetBinary");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAssetCharaScript
// 0x0000 (0x00B8 - 0x00B8)
class UREDAssetCharaScript : public UREDAssetBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAssetCharaScript");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAssetCollision
// 0x0000 (0x00B8 - 0x00B8)
class UREDAssetCollision : public UREDAssetBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAssetCollision");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAssetEventScript
// 0x0000 (0x00B8 - 0x00B8)
class UREDAssetEventScript : public UREDAssetBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAssetEventScript");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAssetLipSync
// 0x0000 (0x00B8 - 0x00B8)
class UREDAssetLipSync : public UREDAssetBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAssetLipSync");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAssetLocalizeText
// 0x0000 (0x00B8 - 0x00B8)
class UREDAssetLocalizeText : public UREDAssetBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAssetLocalizeText");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDAnimArray
// 0x000C (0x003C - 0x0048)
class UREDAnimArray : public UObject
{
public:
	class TArray<struct FAnimData>                     AnimDataArray;                                 // 0x003C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDAnimArray");
		}

		return uClassPointer;
	};

	class UAnimSet* GetAnimSet(const class FName& DataName);
	class UREDAnimTree* GetAnimTree(const class FName& DataName);
	int32_t GetAnimDataIndex(class FName& outDataName);
};

// Class REDGame.REDGameInfo_Battle
// 0x00A4 (0x0490 - 0x0534)
class AREDGameInfo_Battle : public AREDGameInfo
{
public:
	class AREDPawn_Player*                             PlayerPawn[2];                                 // 0x0490 (0x0008) [0x0000000000000000]               
	class AREDPawn_Player*                             CommonObjectPawn;                              // 0x0498 (0x0004) [0x0000000000000000]               
	class UREDCharaAsset*                              CharaAssets;                                   // 0x049C (0x0004) [0x0000000000000000]               
	class AREDActor_PostUpdater*                       PostUpdater;                                   // 0x04A0 (0x0004) [0x0000000000000000]               
	class AREDActor_GlareEffect*                       GlareEffectActor[2];                           // 0x04A4 (0x0008) [0x0000000000000000]               
	struct FPointer                                    m_pBattleInfo;                                 // 0x04AC (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	class UClass*                                      PlayerClass;                                   // 0x04B0 (0x0004) [0x0000000000000000]               
	class AREDHUD_Battle*                              PlayerControllerHUD;                           // 0x04B4 (0x0004) [0x0000000000000000]               
	class AREDCamera_Battle*                           BattleCamera;                                  // 0x04B8 (0x0004) [0x0000000000000000]               
	class AREDWinCameraPos*                            WinCameraPos[2];                               // 0x04BC (0x0008) [0x0000000000000000]               
	class AREDPreBattleEventManager*                   PreBattleEventManager;                         // 0x04C4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBGPause : 1;                                  // 0x04C8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bDispCockpit : 1;                              // 0x04C8 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bIsEditor : 1;                                 // 0x04C8 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bWaitAsyncLoading : 1;                         // 0x04C8 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bNetworkBattle : 1;                            // 0x04C8 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bRankMatchBattle : 1;                          // 0x04C8 (0x0004) [0x0000000000000000] [0x00000020] 
	class TArray<class AActor*>                        BackwordBattleHUD;                             // 0x04CC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      BGMPackageName;                                // 0x04D8 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class USoundCue*                                   OverwriteMainBGMCue;                           // 0x04E4 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UREDBGMaterialController*                    BGMatController;                               // 0x04E8 (0x0004) [0x0000000000000000]               
	class AREDPawn_AdjLightDir*                        LightDirPawn;                                  // 0x04EC (0x0004) [0x0000000000000000]               
	class UREDTexture2DArray*                          Tex2DArraySub;                                 // 0x04F0 (0x0004) [0x0000000000000000]               
	class UREDTexture2DArray*                          Tex2DArrayMOM;                                 // 0x04F4 (0x0004) [0x0000000000000000]               
	class UREDTexture2DArray*                          Tex2DArrayTutorial;                            // 0x04F8 (0x0004) [0x0000000000000000]               
	EBGM_PRIORITY                                      CurrentBGMPriority;                            // 0x04FC (0x0001) [0x0000000000002000] (CPF_Transient)
	EBATTLE_STATE                                      BattleState;                                   // 0x04FD (0x0001) [0x0000000000000000]               
	int32_t                                            NetworkErrorState;                             // 0x0500 (0x0004) [0x0000000000000000]               
	int32_t                                            PauseMenuButtonPressFrame[2];                  // 0x0504 (0x0008) [0x0000000000000000]               
	class TArray<class UREDCharaAsset*>                DramaAssets;                                   // 0x050C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            NetworkErrorCode_SessionFatal;                 // 0x0518 (0x0004) [0x0000000000000000]               
	int32_t                                            NetworkErrorCode_SessionWeak;                  // 0x051C (0x0004) [0x0000000000000000]               
	int32_t                                            NetworkErrorCode_BattleWeak;                   // 0x0520 (0x0004) [0x0000000000000000]               
	int32_t                                            NetworkErrorCode_SystemWeak;                   // 0x0524 (0x0004) [0x0000000000000000]               
	class FString                                      BattleHudPackageName;                          // 0x0528 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_Battle");
		}

		return uClassPointer;
	};

	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void eventSetDispCockpit(bool disp, bool optionalIsAnime);
	bool eventIsRequestEventSkip();
	void eventRequestEventSkip();
	bool eventIsBGEventFinish();
	void eventBGEventFinish();
	bool eventBGEventStart();
	bool eventIsEntryEventFinish();
	void eventEntryEventFinish();
	bool eventEntryEventStart();
	void UpdateWaitAsyncLoading();
	void RenderUpdate2D(class UCanvas* Canvas);
	void eventTick(float DeltaTime);
	void eventSetBackwordBattleHUDOffset(const struct FVector& offset);
	bool eventFinishContinue();
	bool eventIsContinueLoop();
	void eventStartContinue();
	void eventMatchResultWindow_AddQuestInfo(int32_t Player, const class FString& questName, float Rate, int32_t Type, const class FString& rewordStr, int32_t rewordType);
	void eventMatchResultWindow_AddMedalInfo(int32_t Player, const class FString& medalName, const class FString& medalDesc, int32_t Grade);
	void eventMatchResultWindow_Release();
	void eventMatchResultWindow_PauseKey(bool Pause);
	void eventMatchResultWindow_SkipShowAnim();
	bool eventMatchResultWindow_IsShowAnimEnd();
	void eventMatchResultWindow_StartShow(struct FMatchResultWindowArg& outArg1P, struct FMatchResultWindowArg& outArg2P);
	void eventSetBGPause(bool bPause);
	void eventBGFade(float Brightness);
	void eventBGFadeOut(int32_t frame, float optionalBrightness);
	void eventBGFadeIn(int32_t frame);
	void SetResultCamera(EUE_PLAYER_ID Winner);
	void UpdatePawnLightVector();
	void UpdatePawnMaterialInstance();
	void eventStopSound();
	void StopSoundLocal(class AActor* Actor);
	void eventRoundReset();
	void RoundResetCommonPawn();
	void eventPostSeamlessTravel();
	void eventPostLogin(class APlayerController* NewPlayer);
	void PostLoginCommon(class APlayerController* NewPlayer);
	void eventPostBeginPlay();
	void eventPreBeginPlay();
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
	void eventBGMVolume(int32_t DurationFrame, float Volume);
	void eventBGMStop(int32_t fadeOutFrame);
	void eventPlayMainBGM(float optionalFadeInTime);
	void eventResetMainBGM();
	void eventChangeMainBGM(class USoundCue* Cue, bool bPlay);
	void eventBGMRequest(const class FString& cueName, const class FString& PackageName, EBGM_PRIORITY InRequestPriority, float optionalFadeInTime);
	void eventBGMRequestFromCue(class USoundCue* Cue, EBGM_PRIORITY InRequestPriority, float optionalFadeInTime);
	void eventResetBGMRequestPriority();
	void eventGameEnding();
	bool IsDispCockpit();
	void SetupDramaEffect(class TArray<class FString>& outExPackagenames);
	void SetupMOMEffect(class TArray<struct FSpawnPlayerInfo>& outPlayerInfo);
	int32_t GetBattleTimer();
	void SceneFinalize();
	void SceneInitialize();
	void UpdateNetworkError();
	void UpdateBattle(float DeltaTime);
	void EndBattle();
	void CleanupBattleInfo();
	void PostLogin_Internal(class APlayerController* NewPlayer);
	void PostBeginPlay_Internal();
	void PreBeginPlay_Internal();
	void SetupBattleInfo();
	void PostDispRoot(class AHUD* HUD);
};

// Class REDGame.REDMeshArray
// 0x0024 (0x003C - 0x0060)
class UREDMeshArray : public UObject
{
public:
	class TArray<struct FMeshData>                     MeshArray;                                     // 0x003C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector                                     XSILightDir[2];                                // 0x0048 (0x0018) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDMeshArray");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDPawn
// 0x462C (0x0450 - 0x4A7C)
class AREDPawn : public APawn
{
public:
	class UREDMeshPool*                                MeshPool;                                      // 0x0450 (0x0004) [0x0000000000000000]               
	class USkelControlLookAt*                          SkelControlLookAt;                             // 0x0454 (0x0004) [0x0000000000000000]               
	class USkelControlLookAt*                          SkelControlLookAtOutlineMesh;                  // 0x0458 (0x0004) [0x0000000000000000]               
	class FName                                        LastAnimSeqName;                               // 0x045C (0x0008) [0x0000000000002000] (CPF_Transient)
	class AREDPawn*                                    LookTargetPawn;                                // 0x0464 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class FString                                      CharaID;                                       // 0x0468 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            PlayerID;                                      // 0x0474 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            Dir;                                           // 0x0478 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	uint32_t                                           ModelFlipReverse : 1;                          // 0x047C (0x0004) [0x0000000000003000] [0x00000001] (CPF_Native | CPF_Transient)
	uint32_t                                           LookAtTrigger : 1;                             // 0x047C (0x0004) [0x0000000000003000] [0x00000002] (CPF_Native | CPF_Transient)
	uint32_t                                           bFinishSetup : 1;                              // 0x047C (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bNowStop : 1;                                  // 0x047C (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bStepLoopAnime : 1;                            // 0x047C (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	uint32_t                                           bPlayingCutSceneAnime : 1;                     // 0x047C (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	uint32_t                                           bDirtyAddColor : 1;                            // 0x047C (0x0004) [0x0000000000002000] [0x00000040] (CPF_Transient)
	uint32_t                                           bDirtyMulColor : 1;                            // 0x047C (0x0004) [0x0000000000002000] [0x00000080] (CPF_Transient)
	uint32_t                                           bDirtyDepthDarken : 1;                         // 0x047C (0x0004) [0x0000000000002000] [0x00000100] (CPF_Transient)
	uint32_t                                           bDirtyScreenSpaceZOffset : 1;                  // 0x047C (0x0004) [0x0000000000002000] [0x00000200] (CPF_Transient)
	uint32_t                                           bDirtyLightDir : 1;                            // 0x047C (0x0004) [0x0000000000002000] [0x00000400] (CPF_Transient)
	uint32_t                                           bDirtyCameraDir : 1;                           // 0x047C (0x0004) [0x0000000000002000] [0x00000800] (CPF_Transient)
	uint32_t                                           bDirtyFovTan : 1;                              // 0x047C (0x0004) [0x0000000000002000] [0x00001000] (CPF_Transient)
	uint32_t                                           bDirtyLightColor : 1;                          // 0x047C (0x0004) [0x0000000000002000] [0x00002000] (CPF_Transient)
	uint32_t                                           bDirtyAmbientColor : 1;                        // 0x047C (0x0004) [0x0000000000002000] [0x00004000] (CPF_Transient)
	uint32_t                                           bDirtySaturation : 1;                          // 0x047C (0x0004) [0x0000000000002000] [0x00008000] (CPF_Transient)
	uint32_t                                           bDirtyDramaMatParam : 1;                       // 0x047C (0x0004) [0x0000000000002000] [0x00010000] (CPF_Transient)
	uint32_t                                           bDirtyMaterialTime : 1;                        // 0x047C (0x0004) [0x0000000000002000] [0x00020000] (CPF_Transient)
	uint32_t                                           bDirtyPointLightPosition : 1;                  // 0x047C (0x0004) [0x0000000000002000] [0x00040000] (CPF_Transient)
	uint32_t                                           bDirtyPointLightColor : 1;                     // 0x047C (0x0004) [0x0000000000002000] [0x00080000] (CPF_Transient)
	uint32_t                                           bDisregardSceneColor : 1;                      // 0x047C (0x0004) [0x0000000000002000] [0x00100000] (CPF_Transient)
	uint32_t                                           bAutoUpdateBlendAnim : 1;                      // 0x047C (0x0004) [0x0000000000002000] [0x00200000] (CPF_Transient)
	uint32_t                                           bScaleFlipZAxis : 1;                           // 0x047C (0x0004) [0x0000000000002000] [0x00400000] (CPF_Transient)
	uint32_t                                           DebugDispOff : 1;                              // 0x047C (0x0004) [0x0000000000002000] [0x00800000] (CPF_Transient)
	uint32_t                                           bSoundPlayLocationUpdated : 1;                 // 0x047C (0x0004) [0x0000000000002000] [0x01000000] (CPF_Transient)
	uint32_t                                           bAdvPawn : 1;                                  // 0x047C (0x0004) [0x0000000000002000] [0x02000000] (CPF_Transient)
	EModelDirMode                                      ModelDirMode;                                  // 0x0480 (0x0001) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FPointer                                    ObjPtr;                                        // 0x0484 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class UREDMeshArray*                               Meshes;                                        // 0x0488 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UREDMeshArray*                               ExtraMeshes;                                   // 0x048C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UREDPawnMaterials*                           MaterialSets;                                  // 0x0490 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UREDAnimArray*                               AnimData;                                      // 0x0494 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        CurrentMaterialPatternName;                    // 0x0498 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              CutSceneAnimeTime;                             // 0x04A0 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FMeshControl                                MeshControls[50];                              // 0x04A4 (0x15E0) [0x0000000000082000] (CPF_Transient | CPF_Component)
	int32_t                                            MeshControlNum;                                // 0x1A84 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FLocalMaterialPool                          MyLocalMaterialPool;                           // 0x1A88 (0x0324) [0x0000000000002000] (CPF_Transient)
	struct FLinearColor                                AddColor;                                      // 0x1DAC (0x0010) [0x0000000000002000] (CPF_Transient)
	struct FLinearColor                                MulColor;                                      // 0x1DBC (0x0010) [0x0000000000002000] (CPF_Transient)
	struct FLinearColor                                LightColor;                                    // 0x1DCC (0x0010) [0x0000000000002000] (CPF_Transient)
	struct FLinearColor                                AmbientColor;                                  // 0x1DDC (0x0010) [0x0000000000002000] (CPF_Transient)
	float                                              saturation;                                    // 0x1DEC (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              OverwriteSaturation;                           // 0x1DF0 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FLinearColor                                PointLightPosition;                            // 0x1DF4 (0x0010) [0x0000000000002000] (CPF_Transient)
	struct FLinearColor                                PointLightColor;                               // 0x1E04 (0x0010) [0x0000000000002000] (CPF_Transient)
	float                                              DepthDarken;                                   // 0x1E14 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ScreenSpaceZOffset;                            // 0x1E18 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LightDirXSI;                                   // 0x1E1C (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LightDir;                                      // 0x1E28 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              LastSSZOffset;                                 // 0x1E34 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     CameraDir;                                     // 0x1E38 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              FovTan;                                        // 0x1E44 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FLinearColor                                DramaMatParam;                                 // 0x1E48 (0x0010) [0x0000000000002000] (CPF_Transient)
	float                                              MaterialTime;                                  // 0x1E58 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FFaceBlendControl                           FaceControl[2];                                // 0x1E5C (0x0018) [0x0000000000082000] (CPF_Transient | CPF_Component)
	int32_t                                            FaceControlNum;                                // 0x1E74 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FMeshSet                                    MeshSets[80];                                  // 0x1E78 (0x2BC0) [0x0000000000002000] (CPF_Transient)
	int32_t                                            MeshSetNum;                                    // 0x4A38 (0x0004) [0x0000000000002000] (CPF_Transient)
	class FName                                        CurrentMeshSetName;                            // 0x4A3C (0x0008) [0x0000000000002000] (CPF_Transient)
	class FName                                        SaveMeshSetName;                               // 0x4A44 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     ObjScale;                                      // 0x4A4C (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     SoundPlayLocation;                             // 0x4A58 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FPlayerExGaugeParam                         ExGaugeParam;                                  // 0x4A64 (0x0018) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPawn");
		}

		return uClassPointer;
	};

	void SetMeshDamageLevel(int32_t Level);
	void GetExGaugeParam(int32_t Id, struct FPlayerExGaugeParam& outParam);
	bool GetOffscreenParam(int32_t& outPosX, int32_t& outDirection);
	float GetNegativeVal();
	float GetTensionBalanceSpeed();
	bool IsCounterHitByGuardBalance();
	float GetGuardBalanceRed();
	float GetGuardBalance();
	int32_t GetImperfectComboLog(int32_t Index);
	int32_t GetComboDamage();
	int32_t GetComboCount();
	int32_t GetComboCountAddTime();
	int32_t GetComboBreakTime();
	bool IsComboImperfect();
	bool IsComboTrigger();
	int32_t IsBurstSealed();
	float GetBurstVal();
	class FString GetTensionState();
	int32_t GetTensionColorIndex();
	float GetTension();
	float GetHitPointWhite();
	float GetHitPointRed();
	float GetHitPoint();
	void eventUpdateExGauge(class UREDGfxMovieManager_BattleHUD* man);
	void eventSetAnimPosition(const class FName& SlotName, int32_t ChannelIndex, const class FName& InAnimSeqName, float InPosition, bool bFireNotifies, bool bLooping, bool bEnableRootMotion);
	void eventFinishAnimControl(class UInterpGroup* InInterpGroup);
	void eventBeginAnimControl(class UInterpGroup* InInterpGroup);
	void eventStopCamera(int32_t outFrame);
	void LookAtCamera(class AREDPawn* BasePawn, class AREDPawn* LookAtPawn, float Dist, float FOV, float distPercent, int32_t inFrame, int32_t stayFrame, int32_t outFrame, int32_t FreezeFrame, int32_t InInterpType, int32_t OutInterpType, bool optionalMirrorX, bool optionalBUpdateOrthoBlend, bool optionalBOrthoBlendTransversal, struct FVector& outBaseOfs, struct FVector& outTargetOfs);
	void MoveCamera(class AREDPawn* BasePawn, float FOV, int32_t inFrame, int32_t stayFrame, int32_t outFrame, int32_t FreezeFrame, int32_t InInterpType, int32_t OutInterpType, bool optionalMirrorX, bool optionalBUpdateOrthoBlend, bool optionalBOrthoBlendTransversal, struct FVector& outPos, struct FRotator& outRot);
	void eventMoveCameraPreset(const class FName& PresetName, bool optionalMirrorX);
	void CommonSE(const class FName& cueName, bool optionalOnCenter);
	void GetSoundPlayLocation(struct FVector& outLoc);
	class UParticleSystemComponent* CreateCommonParticle(struct FParticleArg& outArg);
	void ParticleMoveToSocket(class UParticleSystemComponent* PSC, bool bWithRotation, class FName& outSocketName);
	bool GetSocketLocationAndRotation(const class FName& SocketName, struct FVector& outLoc, struct FRotator& outRot);
	void eventTick(float DeltaTime);
	void NativeTick(float DeltaTime);
	void DebugTick();
	void UpdateBlendAnim();
	void eventSetAutoUpdateBlendAnime(bool bAutoUpdate);
	int32_t GetModelDir();
	struct FRotator eventGetBaseAimRotation();
	void eventBecomeViewTarget(class APlayerController* PC);
	void eventPostBeginPlay();
	void eventPreBeginPlay();
	void eventStopEyeBlink();
	void eventStartEyeBlink(bool optionalIsLinear, float optionalSpeed, int32_t optionalFrame);
	void eventCloseMouth();
	void ChangeMouth(const class FName& MouthNodeName);
	void eventOpenMouth(int32_t optionalType);
	void eventStopLip(bool optionalLinear);
	void eventStartLip(int32_t Type, bool optionalIsLinear, float optionalSpeed, int32_t optionalFrame);
	void SetNonStepAnimUseDeltaSeconds(bool On);
	bool IsAnimeEnd();
	void SetStepAnimeMode(bool On);
	void SetNonStepAnimeFrame(int32_t frame);
	void SetAnimeFrame(int32_t frame);
	void StepAnime(int32_t optionalStepFrame);
	void StopAnimeSectionLoop();
	void SetAnimeLoop(bool flag);
	bool PlayCutSceneAnime(const class FName& AnimSeqName, float StartTime);
	bool ChangeAnime(const class FName& AnimSeqName, bool isLoop, float StartTime, float BlendTime);
	void UpdateNonStepAnime();
	void OnActionChange();
	class USkeletalMeshComponent* GetMeshFromIndex(int32_t Index);
	class USkeletalMeshComponent* GetMeshFromName(const class FName& optionalMeshName);
	class UREDAnimNodeSequence* GetCurrentAnimSeqAny();
	class UREDAnimNodeSequence* GetCurrentAnimSeq(const class FName& optionalMeshName);
	bool CalcCamera(float fDeltaTime, struct FVector& outOut_CamLoc, struct FRotator& outOut_CamRot, float& outOut_FOV);
	void SetMaterialParamFloat(const class FName& ParamName, float Param, EMaterialCategory optionalCategory);
	void SetMaterialParamVector(const class FName& ParamName, EMaterialCategory optionalCategory, struct FLinearColor& outParam);
	void AddExtraAnimArray(class UREDAnimArray* AnimInfo);
	void SetupMeshInstance(class UREDMeshArray* MeshInfo, class UREDAnimArray* AnimInfo, class UREDPawnMaterials* Materials);
	void SetupMaterialsForAdv();
	void SetLoadingMaterials(class UREDPawnMaterials* Materials);
	void SetupMaterials(const class FName& optionalTypename, bool optionalForceUpdate);
	void eventForceDestroy();
	void eventDestroyed();
	void ReusePawn();
	void eventResetOnGame();
	void SetSkeletonUpdateOnCellChange(bool bUpdate);
	void DispMeshOff(bool Off);
	void SetDispMesh(bool On, const class FName& optionalMeshName);
	void ResetMaterialInstanceParam();
	void UpdateMaterialInstanceParam();
	void UpdateMaterialOnCharaSelect(float& outInAddColor);
	void UpdateMaterialParamDirection();
	void UpdateCameraParam(float InFovTan, struct FVector& outInCameraDir);
	void UpdateLightVectorFromLightAnime(struct FVector& outLightVec);
	void UpdateLightVector();
	void SetLightVector(int32_t xsiDirX, int32_t xsiDirY);
	void SetDefaultLightVector();
	float GetScreenSpaceZOffset();
	void SetPlayerID(int32_t Id);
	void eventSetEyeHeight(float Height);
	void ClearMeshSet();
	void ClearMeshControls();
	void RestoreMeshSet();
	void SaveMeshSet();
	void SwitchMeshSet(const class FName& SetName);
	void AddMeshSet(struct FMeshSet& outSet);
	int32_t GetMeshSetIndexFromSetName(const class FName& SetName);
	void UpdateDispState();
	void FreeSkeletalMeshComponents();
	void FreeLocalMaterialPool();
	void InitLocalMaterialPool();
	int32_t GetMeshControlIndexFromName(const class FName& MeshName);
	class USkeletalMeshComponent* GetMeshComponentFromIndex(int32_t Index);
	int32_t GetMeshNum();
};

// Class REDGame.REDDebugPause
// 0x0004 (0x4A7C - 0x4A80)
class AREDDebugPause : public AREDPawn
{
public:
	uint32_t                                           StepPauseMode : 1;                             // 0x4A7C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           StepTrigger : 1;                               // 0x4A7C (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDDebugPause");
		}

		return uClassPointer;
	};

	void eventPauserTick(float DeltaTime);
	void ToggleDoNotPause();
	void ToggleShowDebugMenu();
	void Step();
	void StepToggle();
	bool IsDoNotPause();
	bool IsShowDebugMenu();
	void UpdateDebugMenu();
	void SetGamePause(bool On);
	void ShowDebugMenu(bool Show);
	class APlayerController* GetPlayerController();
};

// Class REDGame.REDPawn_AdjLightDir
// 0x0008 (0x4A7C - 0x4A84)
class AREDPawn_AdjLightDir : public AREDPawn
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                           // 0x4A7C (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AREDPawn_Player*                             Target;                                        // 0x4A80 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPawn_AdjLightDir");
		}

		return uClassPointer;
	};

	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void NativeTick(float DeltaTime);
	bool IsDisp();
	void GetDebugLightRotation(struct FRotator& outRot);
};

// Class REDGame.REDPawn_AdvAvatar
// 0x011C (0x4A7C - 0x4B98)
class AREDPawn_AdvAvatar : public AREDPawn
{
public:
	uint32_t                                           FirstChangeAnim : 1;                           // 0x4A7C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLipSyncExec : 1;                              // 0x4A7C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bEnableShadow : 1;                             // 0x4A7C (0x0004) [0x0000000000000000] [0x00000004] 
	class UREDAnimNodeBlendAdvFace*                    FaceAnimNode[4];                               // 0x4A80 (0x0010) [0x0000000000000000]               
	int32_t                                            FaceAnimNodeNum;                               // 0x4A90 (0x0004) [0x0000000000000000]               
	struct FRotator                                    NeckRot;                                       // 0x4A94 (0x000C) [0x0000000000000000]               
	struct FRotator                                    EyeRotL;                                       // 0x4AA0 (0x000C) [0x0000000000000000]               
	struct FRotator                                    EyeRotR;                                       // 0x4AAC (0x000C) [0x0000000000000000]               
	class UREDAnimNodeBlendAdvHair*                    HairAnimNode[3];                               // 0x4AB8 (0x000C) [0x0000000000000000]               
	int32_t                                            HairAnimNodeNum;                               // 0x4AC4 (0x0004) [0x0000000000000000]               
	class UREDAnimNodeBlendAdvFace*                    LeftHandAnimNode[2];                           // 0x4AC8 (0x0008) [0x0000000000000000]               
	class UREDAnimNodeBlendAdvFace*                    RightHandAnimNode[2];                          // 0x4AD0 (0x0008) [0x0000000000000000]               
	int32_t                                            HandAnimNodeNum;                               // 0x4AD8 (0x0004) [0x0000000000000000]               
	struct FVector                                     PupilScaleL;                                   // 0x4ADC (0x000C) [0x0000000000000000]               
	struct FVector                                     PupilScaleR;                                   // 0x4AE8 (0x000C) [0x0000000000000000]               
	struct FVector                                     EyePosL;                                       // 0x4AF4 (0x000C) [0x0000000000000000]               
	struct FVector                                     EyeScaleL;                                     // 0x4B00 (0x000C) [0x0000000000000000]               
	struct FVector                                     EyePosR;                                       // 0x4B0C (0x000C) [0x0000000000000000]               
	struct FVector                                     EyeScaleR;                                     // 0x4B18 (0x000C) [0x0000000000000000]               
	struct FVector                                     LipPos;                                        // 0x4B24 (0x000C) [0x0000000000000000]               
	struct FVector                                     LipScale;                                      // 0x4B30 (0x000C) [0x0000000000000000]               
	class FName                                        LipSyncTypeName;                               // 0x4B3C (0x0008) [0x0000000000000000]               
	struct FVector                                     ExPos;                                         // 0x4B44 (0x000C) [0x0000000000000000]               
	struct FVector                                     ExPos2;                                        // 0x4B50 (0x000C) [0x0000000000000000]               
	struct FRotator                                    ExRot;                                         // 0x4B5C (0x000C) [0x0000000000000000]               
	struct FRotator                                    ExRot2;                                        // 0x4B68 (0x000C) [0x0000000000000000]               
	struct FRotator                                    ExRot3;                                        // 0x4B74 (0x000C) [0x0000000000000000]               
	struct FRotator                                    ExRot4;                                        // 0x4B80 (0x000C) [0x0000000000000000]               
	struct FRotator                                    ExRot5;                                        // 0x4B8C (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPawn_AdvAvatar");
		}

		return uClassPointer;
	};

	int32_t GetMotionLengthFrame();
	bool eventIsLipPlaying();
	void ResetFaceScaleController();
	void SetLipSyncType(const class FName& Typename);
	void SetExPosAndRot(struct FVector& outInExPos, struct FVector& outInExPos2, struct FRotator& outInExRot, struct FRotator& outInExRot2, struct FRotator& outInExRot3, struct FRotator& outInExRot4, struct FRotator& outInExRot5);
	void SetLipPos(struct FVector& outInLipPos, struct FVector& outInLipScale);
	void SetEyePos(struct FVector& outInEyePosL, struct FVector& outInEyeScaleL, struct FVector& outInEyePosR, struct FVector& outInEyeScaleR);
	void SetPupilScale(struct FVector& outInPupilScaleL, struct FVector& outInPupilScaleR);
	void UpdateHand();
	void UpdateHair();
	void SetEyeRotation(struct FRotator& outInEyeRotL, struct FRotator& outInEyeRotR);
	void SetNeckRotation(struct FRotator& outInNeckRot);
	void UpdateFace();
	void UpdateBlendAnim();
	bool ChangeAnimeAdv(const class FName& AnimSeqName, int32_t InBlendCount, int32_t InBlendInterval, int32_t InBlendAcc, bool isLoop, bool BlendAutoPlayAnim);
	void ChangeHand(int32_t InHandType, bool isLeft, int32_t BlendCount, int32_t BlendInterval, int32_t InBlendAcc);
	void ChangeHair(const class FString& InHairAnim, int32_t BlendCount, int32_t BlendInterval, int32_t InBlendAcc, bool isLoop, bool IsForceSet);
	void UpdateEye(float Blend);
	void ChangeFace(int32_t InFaceType, int32_t BlendCount, int32_t BlendInterval, int32_t InBlendAcc, int32_t IsManpuAnimMode);
	void eventRootMotionProcessed(class USkeletalMeshComponent* SkelComp);
	void ChangeShadowMaterialsForAdv(const class FString& CharaName, bool isBoyake);
	void SetupMeshInstance(class UREDMeshArray* MeshInfo, class UREDAnimArray* AnimInfo, class UREDPawnMaterials* Materials);
};

// Class REDGame.REDPawn_DigitalFigureAvatar
// 0x0038 (0x4A7C - 0x4AB4)
class AREDPawn_DigitalFigureAvatar : public AREDPawn
{
public:
	uint32_t                                           FirstChangeAnim : 1;                           // 0x4A7C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableShadow : 1;                             // 0x4A7C (0x0004) [0x0000000000000000] [0x00000002] 
	class UREDAnimNodeBlendAdvFace*                    FaceAnimNode[6];                               // 0x4A80 (0x0018) [0x0000000000000000]               
	int32_t                                            FaceAnimNodeNum;                               // 0x4A98 (0x0004) [0x0000000000000000]               
	struct FRotator                                    EyeRotL;                                       // 0x4A9C (0x000C) [0x0000000000000000]               
	struct FRotator                                    EyeRotR;                                       // 0x4AA8 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPawn_DigitalFigureAvatar");
		}

		return uClassPointer;
	};

	void SetEyeRotation(struct FRotator& outInEyeRotL, struct FRotator& outInEyeRotR);
	int32_t GetMotionLengthFrame();
	void ResetFaceScaleController();
	void UpdateFace();
	void UpdateBlendAnim();
	bool ChangeAnimeDF(const class FName& AnimSeqName, int32_t InBlendCount, int32_t InBlendInterval, int32_t InBlendAcc, bool isLoop, bool BlendAutoPlayAnim);
	void ChangeFace(int32_t InFaceType, int32_t BlendCount, int32_t BlendInterval, int32_t InBlendAcc, int32_t IsManpuAnimMode);
	void eventRootMotionProcessed(class USkeletalMeshComponent* SkelComp);
	void SetupMeshInstance(class UREDMeshArray* MeshInfo, class UREDAnimArray* AnimInfo, class UREDPawnMaterials* Materials);
};

// Class REDGame.REDPawn_Effect
// 0x0008 (0x4A7C - 0x4A84)
class AREDPawn_Effect : public AREDPawn
{
public:
	class UREDEffectPawnPool*                          PawnPool;                                      // 0x4A7C (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bEnableShadow : 1;                             // 0x4A80 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPawn_Effect");
		}

		return uClassPointer;
	};

	void eventDestroyed();
	void eventPostBeginPlay();
	class AREDPawn_Player* GetOwner();
};

// Class REDGame.REDPawn_AdvEffect
// 0x0094 (0x4A84 - 0x4B18)
class AREDPawn_AdvEffect : public AREDPawn_Effect
{
public:
	uint32_t                                           FirstChangeAnim : 1;                           // 0x4A84 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     ExPos;                                         // 0x4A88 (0x000C) [0x0000000000000000]               
	struct FVector                                     ExPos2;                                        // 0x4A94 (0x000C) [0x0000000000000000]               
	struct FRotator                                    ExRot;                                         // 0x4AA0 (0x000C) [0x0000000000000000]               
	struct FRotator                                    ExRot2;                                        // 0x4AAC (0x000C) [0x0000000000000000]               
	struct FRotator                                    ExRot3;                                        // 0x4AB8 (0x000C) [0x0000000000000000]               
	struct FRotator                                    ExRot4;                                        // 0x4AC4 (0x000C) [0x0000000000000000]               
	struct FRotator                                    ExRot5;                                        // 0x4AD0 (0x000C) [0x0000000000000000]               
	struct FVector                                     ExBone0Scale;                                  // 0x4ADC (0x000C) [0x0000000000000000]               
	struct FVector                                     ExBone1Scale;                                  // 0x4AE8 (0x000C) [0x0000000000000000]               
	struct FVector                                     ExBone2Scale;                                  // 0x4AF4 (0x000C) [0x0000000000000000]               
	struct FVector                                     ExBone3Scale;                                  // 0x4B00 (0x000C) [0x0000000000000000]               
	struct FVector                                     ExBone4Scale;                                  // 0x4B0C (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPawn_AdvEffect");
		}

		return uClassPointer;
	};

	int32_t GetMotionLengthFrame();
	void UpdateBlendAnim();
	bool ChangeAnimeAdv(const class FName& AnimSeqName, int32_t InBlendCount, int32_t InBlendInterval, int32_t InBlendAcc, bool isLoop, bool BlendAutoPlayAnim);
	void SetExBoneScale(struct FVector& outInExBone0Scale, struct FVector& outInExBone1Scale, struct FVector& outInExBone2Scale, struct FVector& outInExBone3Scale, struct FVector& outInExBone4Scale);
	void SetExPosAndRot(struct FVector& outInExPos, struct FVector& outInExPos2, struct FRotator& outInExRot, struct FRotator& outInExRot2, struct FRotator& outInExRot3, struct FRotator& outInExRot4, struct FRotator& outInExRot5);
	void SetupMeshInstance(class UREDMeshArray* MeshInfo, class UREDAnimArray* AnimInfo, class UREDPawnMaterials* Materials);
};

// Class REDGame.REDPawn_Matinee
// 0x0000 (0x4A7C - 0x4A7C)
class AREDPawn_Matinee : public AREDPawn
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPawn_Matinee");
		}

		return uClassPointer;
	};

	void eventTick(float DeltaTime);
	void eventSetAnimPosition(const class FName& SlotName, int32_t ChannelIndex, const class FName& InAnimSeqName, float InPosition, bool bFireNotifies, bool bLooping, bool bEnableRootMotion);
	void eventFinishAnimControl(class UInterpGroup* InInterpGroup);
	void eventBeginAnimControl(class UInterpGroup* InInterpGroup);
	void SetAnimPosition_Internal(const class FName& SlotName, int32_t ChannelIndex, const class FName& InAnimSeqName, float InPosition, bool bFireNotifies, bool bLooping, bool bEnableRootMotion);
	void FinishAnimControl_Internal(class UInterpGroup* InInterpGroup);
	void BeginAnimControl_Internal(class UInterpGroup* InInterpGroup);
};

// Class REDGame.REDPawn_Player
// 0x005C (0x4A7C - 0x4AD8)
class AREDPawn_Player : public AREDPawn
{
public:
	class UREDAssetCharaScript*                        CharaScript;                                   // 0x4A7C (0x0004) [0x0000000000000000]               
	class UREDAssetCharaScript*                        EffectScript;                                  // 0x4A80 (0x0004) [0x0000000000000000]               
	class UREDAssetCollision*                          Collision;                                     // 0x4A84 (0x0004) [0x0000000000000000]               
	class UREDSoundPlayer*                             PrivateSE;                                     // 0x4A88 (0x0004) [0x0000000000000000]               
	class UREDSoundPlayerUnique*                       Voice;                                         // 0x4A8C (0x0004) [0x0000000000000000]               
	class UREDAssetLocalizeText*                       TextAsset;                                     // 0x4A90 (0x0004) [0x0000000000000000]               
	class UREDSoundPlayerUnique*                       DramaVoice;                                    // 0x4A94 (0x0004) [0x0000000000000000]               
	class UREDSoundLipsyncArray*                       DramaLipsync;                                  // 0x4A98 (0x0004) [0x0000000000000000]               
	class UREDAssetAdvText*                            DramaText;                                     // 0x4A9C (0x0004) [0x0000000000000000]               
	class UREDEffect*                                  Effect;                                        // 0x4AA0 (0x0004) [0x0000000000000000]               
	class UREDEffect*                                  MOMEffect;                                     // 0x4AA4 (0x0004) [0x0000000000000000]               
	class UREDEffect*                                  DramaExCharaEffect;                            // 0x4AA8 (0x0004) [0x0000000000000000]               
	class UREDEffect*                                  DramaEffect;                                   // 0x4AAC (0x0004) [0x0000000000000000]               
	class UREDParticle*                                SelfParticle;                                  // 0x4AB0 (0x0004) [0x0000000000000000]               
	class UREDParticle*                                SelfParticleByMeshID;                          // 0x4AB4 (0x0004) [0x0000000000000000]               
	class UREDParticle*                                DramaParticle;                                 // 0x4AB8 (0x0004) [0x0000000000000000]               
	class UREDCameraAnimArray*                         CameraData;                                    // 0x4ABC (0x0004) [0x0000000000000000]               
	class UREDEffectMaterialInfo*                      EffectMaterialInfo;                            // 0x4AC0 (0x0004) [0x0000000000000000]               
	class UREDParticleMaterialInfo*                    PTCMaterialInfo;                               // 0x4AC4 (0x0004) [0x0000000000000000]               
	int32_t                                            Tmp;                                           // 0x4AC8 (0x0004) [0x0000000000000000]               
	class TArray<class UREDAnimNodeScarfSystem*>       ScarfSystem;                                   // 0x4ACC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPawn_Player");
		}

		return uClassPointer;
	};

	void eventTick(float DeltaTime);
	void UpdateScarfSystem(bool bStopShrink);
	void StopScarfSystem(int32_t BlendFrame);
	void StartScarfSystem(int32_t BlendFrame);
	void SetupMeshInstance(class UREDMeshArray* MeshInfo, class UREDAnimArray* AnimInfo, class UREDPawnMaterials* Materials);
	void AllocateSoundPlayer();
	void StopVoice(int32_t optionalCh);
	void PlayVoice(class AREDPawn* pPlayPawn, const class FName& cueName, bool isSmart, float optionalPitchMultiply, bool optionalOnCenter, int32_t optionalCh);
	void PlayPrivateSE(class AREDPawn* pPlayPawn, const class FName& cueName, bool optionalOnCenter);
	class AREDPawn_Effect* SpawnEffect(const class FName& EffectName);
	class UCameraAnim* GetCameraAnim(const class FName& CameraName);
	void eventStopCameraAnim(bool immediate);
	void eventPlayCameraAnimWorldPos(const class FName& CameraName, int32_t BlendInTime, int32_t BlendOutTime, bool optionalMirrorX, bool optionalBUpdateOrthoBlend, bool optionalBIsOrthoBlendTransversal, struct FVector& outCenter);
	void eventPlayCameraAnim(const class FName& CameraName, class AREDPawn* CenterPawn, int32_t BlendInTime, int32_t BlendOutTime, bool optionalMirrorX, bool optionalBUpdateOrthoBlend, bool optionalBIsOrthoBlendTransversal);
	class UParticleSystemComponent* CreateSelfParticle(struct FParticleArg& outArg);
	void SetCharacterColor(int32_t colorNo);
};

// Class REDGame.REDPlayerController_Battle
// 0x0000 (0x05A8 - 0x05A8)
class AREDPlayerController_Battle : public AREDPlayerController
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPlayerController_Battle");
		}

		return uClassPointer;
	};

	void SetLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
};

// Class REDGame.REDCamera
// 0x001C (0x04AC - 0x04C8)
class AREDCamera : public ACamera
{
public:
	class AREDPlayerController*                        PlayerOwner;                                   // 0x04AC (0x0004) [0x0000000000000000]               
	class UREDCameraModule*                            CurrentCamera;                                 // 0x04B0 (0x0004) [0x0000000000000000]               
	class FString                                      DefaultCameraModuleClass;                      // 0x04B4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UREDCameraShakePatterns*                     ShakePattern;                                  // 0x04C0 (0x0004) [0x0000000000000000]               
	class AREDPawn_CameraAttach*                       AttachedPawn;                                  // 0x04C4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCamera");
		}

		return uClassPointer;
	};

	void eventStopShakeCamera();
	void eventShakeCamera(const class FName& PatternName, float Scale, int32_t inFrame, int32_t stayFrame, int32_t outFrame);
	void ZoomOut();
	void ZoomIn();
	void BecomeViewTarget(class APlayerController* PC);
	void UpdateViewTarget(float DeltaTime, struct FTViewTarget& outOutVT);
	void UpdateAttachedPawnFromVT(struct FTViewTarget& outVT);
	class UREDCameraModule* CreateCamera(class UClass* CameraClass);
	void InitializeFor(class APlayerController* PC);
	void PostBeginPlay();
};

// Class REDGame.REDCamera_Battle
// 0x01FC (0x04C8 - 0x06C4)
class AREDCamera_Battle : public AREDCamera
{
public:
	struct FPlayBattleCameraAnimInfo                   PlayBattleCameraAnimArg;                       // 0x04C8 (0x0024) [0x0000000000000000]               
	class AREDPawn*                                    CurrentPlayPawn;                               // 0x04EC (0x0004) [0x0000000000000000]               
	struct FFixedCameraInfo                            FixedCam;                                      // 0x04F0 (0x001C) [0x0000000000000000]               
	struct FPlayCameraAnimInfo                         PlayCamAnim;                                   // 0x050C (0x0018) [0x0000000000000000]               
	uint32_t                                           bStep : 1;                                     // 0x0524 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAutoUpdate : 1;                               // 0x0524 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bForceUIBackDraw : 1;                          // 0x0524 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FEventCameraInfo                            EventCam;                                      // 0x0528 (0x00C8) [0x0000000000000000]               
	struct FMoveToPosInfo                              MoveTo;                                        // 0x05F0 (0x009C) [0x0000000000000000]               
	int32_t                                            ExtraMovementType;                             // 0x068C (0x0004) [0x0000000000000000]               
	float                                              DisregardOrthoBlend;                           // 0x0690 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentCameraOffsetIndex;                      // 0x0694 (0x0004) [0x0000000000000000]               
	class UREDCameraOffsetDataArray*                   CameraOffsets;                                 // 0x0698 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastCameraOffsetPos;                           // 0x069C (0x000C) [0x0000000000000000]               
	struct FRotator                                    LastCameraOffsetRot;                           // 0x06A8 (0x000C) [0x0000000000000000]               
	float                                              CameraOffsetWeight;                            // 0x06B4 (0x0004) [0x0000000000000000]               
	int32_t                                            ReplayCameraType;                              // 0x06B8 (0x0004) [0x0000000000000000]               
	class UREDCameraOffsetDataArray*                   CameraOffsetsEx;                               // 0x06BC (0x0004) [0x0000000000000000]               
	class AREDPawn*                                    ForceUIBackDraw_ReqPawn;                       // 0x06C0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCamera_Battle");
		}

		return uClassPointer;
	};

	void UpdatePawnMaterialInstance();
	void UpdatePawnCameraParam(struct FTPOV& outPOV);
	void UpdatePawnLightParam(struct FVector& outLightPos, struct FRotator& outLightRot);
	bool eventIsSpecialCamera();
	void eventSetAutoUpdate(bool bAuto);
	void UpdateFromREDGameInfo_Battle(float DeltaTime);
	void UpdateViewTarget(float DeltaTime, struct FTViewTarget& outOutVT);
	void UpdateViewTargetNative(float DeltaTime, struct FTViewTarget& outOutVT);
	bool CheckForceUIBackDraw(class AREDPawn* reqPawn);
	bool IsForceUIBackDraw();
	void SetForceUIBackDraw(class AREDPawn* reqPawn, bool flag);
	void BackupMainCamera(struct FTPOV& outOutVT);
	void eventUpdateEventCamera(float DeltaTime, struct FTViewTarget& outOutVT);
	void TebureEventCamera(bool On, float Mag);
	void FOVEventCamera(float Start, float End, int32_t frame);
	void MoveEventCamera(const struct FVector& Start, const struct FVector& End, int32_t frame, bool optionalWorldLoc);
	void RotateEventCamera(const struct FRotator& Start, const struct FRotator& End, int32_t frame);
	void ShakeEventCamera(float X, float Y, int32_t frame, bool isFadeout);
	void FastFinishEventCamera();
	bool IsPlayingEventCamera();
	void PlayEventCamera(const struct FTPOV& _POV, int32_t frame);
	void ResetEventCamera();
	void eventUpdateMoveToPosCamera(float DeltaTime, struct FTViewTarget& outOutVT);
	int32_t MoveToPosCameraGetNextState(int32_t CurrentState);
	void eventStopMoveToPosCamera(class AREDPawn* StopRequestPawn, int32_t outFrame);
	void eventPlayMoveToPosCamera(struct FCameraMoveToPosArg& outArg);
	void eventStopBattleCamera(bool immediate);
	void eventUpdateBattleCamera(float DeltaTime, struct FTViewTarget& outOutVT);
	void UpdateBattleCamera_Func(float DeltaTime, struct FTViewTarget& outOutVT);
	void EyesViewPointToBaseViewPoint(struct FTPOV& outEyeViewPoint, struct FTPOV& outBaseEyeViewPoint);
	struct FVector CalcCenterLocation(float Weight, struct FVector& outOutVTLocation, struct FVector& outPlayCameraLocation);
	void eventPlayBattleCamera(class UCameraAnim* Anim, class AREDPawn* Pawn, class AREDPawn* LocCenterPawn, int32_t BlendInFrame, int32_t BlendOutFrame, bool optionalMirrorX, bool optionalUseCenterPos, const struct FVector& optionalCenter, bool optionalBIsUpdateOrthoBlend, bool optionalBIsOrthoBlendTransversal);
	void UpdateCameraOffset();
	int32_t GetReplayCameraNum(int32_t Type);
	void SetReplayCamera(int32_t Index, int32_t Type);
	void UpdateFixedCamera(float DeltaTime, struct FTViewTarget& outOutVT);
	void eventStopFixedCamera();
	void eventFixedCamera(const struct FVector& Loc, const struct FRotator& Rot, float FOV);
	void Reset();
	void ResetForceUIBackDraw();
	void eventResetCamera();
	void ResetCameraNative();
	void SetPlayBattleCameraAnim(class UCameraAnim* _Anim, class AREDPawn* _Pawn, class AREDPawn* _LocCenterPawn, int32_t _BlendInFrame, int32_t _BlendOutFrame, bool _bMirrorX, bool _bIsUpdateOrthoBlend, bool _bIsOrthoBlendTransversal, bool _bUseCenterPos, const struct FVector& _Center, struct FPlayBattleCameraAnimInfo& outStructToUpdate);
	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	bool IsOnlineRollback();
	bool IsStopBattle();
};

// Class REDGame.REDCamera_Lobby
// 0x0000 (0x04C8 - 0x04C8)
class AREDCamera_Lobby : public AREDCamera
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCamera_Lobby");
		}

		return uClassPointer;
	};

	void UpdateViewTarget(float DeltaTime, struct FTViewTarget& outOutVT);
	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void UpdatePawn_AfterCamera();
};

// Class REDGame.REDCameraShakePatterns
// 0x000C (0x003C - 0x0048)
class UREDCameraShakePatterns : public UObject
{
public:
	class TArray<struct FCameraShakeParam>             Params;                                        // 0x003C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCameraShakePatterns");
		}

		return uClassPointer;
	};

	class UCameraShake* GetShakePatternFromName(const class FName& SearchName);
};

// Class REDGame.Menu_DebugTop
// 0x001D (0x01B4 - 0x01D1)
class UMenu_DebugTop : public UREDGfxMoviePlayer_Menu_Base
{
public:
	class UGFxObject*                                  rootMC;                                        // 0x01B4 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  ManagerMC;                                     // 0x01B8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bInitialized : 1;                              // 0x01BC (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<struct FDebugMenu>                    DebugMenuData;                                 // 0x01C0 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            FinishTimer;                                   // 0x01CC (0x0004) [0x0000000000000000]               
	EUE_PLAYER_ID                                      DisidePlayer;                                  // 0x01D0 (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.Menu_DebugTop");
		}

		return uClassPointer;
	};

	int32_t Input_OK(int32_t Player);
	void Input_Right(int32_t Player);
	void Input_Left(int32_t Player);
	void Input_Down(int32_t Player);
	void Input_Up(int32_t Player);
	class FString GetResult();
	int32_t IsFinish();
	void AddItem(const class FString& ItemName);
	void OnUpdate(bool bTrigger);
	void TransitionScene(const class FString& MenuName);
	void InitGameData(class UREDGameCommon* gameData);
	void OnClickHandler(const struct FEventData& Params);
	void SetupCallback(const class FString& ObjName);
	void SetupDebugMenuButton(const struct FDebugMenu& menu, int32_t Num);
	void SetupDebugMenu();
	void ConfigFrontEnd();
	void OnInitialize();
};

// Class REDGame.REDActor_BattleBackwordHUD
// 0x000C (0x0204 - 0x0210)
class AREDActor_BattleBackwordHUD : public ADynamicSMActor
{
public:
	uint32_t                                           InSpecialCamera : 1;                           // 0x0204 (0x0004) [0x0000000000000000] [0x00000001] 
	class UMaterialInterface*                          NormalMat;                                     // 0x0208 (0x0004) [0x0000000000000000]               
	class UMaterialInterface*                          SpecialMat;                                    // 0x020C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDActor_BattleBackwordHUD");
		}

		return uClassPointer;
	};

	void eventTick(float DeltaTime);
	void UpdateInSpecialCamera(class AREDPlayerController_Battle* PC, class AREDCamera_Battle* Cam);
	void UpdateInNormalCamera(class AREDPlayerController_Battle* PC, class AREDCamera_Battle* Cam);
};

// Class REDGame.REDActor_CheckPointLight
// 0x0008 (0x01C8 - 0x01D0)
class AREDActor_CheckPointLight : public AActor
{
public:
	class UStaticMeshComponent*                        MeshComponent;                                 // 0x01C8 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UDrawSphereComponent*                        RangeComponent;                                // 0x01CC (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDActor_CheckPointLight");
		}

		return uClassPointer;
	};

	void SetLightInfo(const struct FLinearColor& NewColor, bool bBGParticle, float Range);
	void SetupMaterial();
};

// Class REDGame.REDPawnPlayerFactory
// 0x0000 (0x003C - 0x003C)
class UREDPawnPlayerFactory : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPawnPlayerFactory");
		}

		return uClassPointer;
	};

	static void UpdateEffectMaterial(class AREDPawn_Effect* EffectPawn, class AREDPawn_Player* PlayerPawn, const class FName& effName);
	static void UpdateCharaMaterial(class AREDPawn_Player* Pawn, struct FSpawnPlayerInfo& outInfo);
	static class AREDPawn_Player* SpawnChara(class AREDGameInfo* Game, struct FSpawnPlayerInfo& outInfo);
	static class AREDPawn_Player* SpawnPlayer(class AREDGameInfo* Game, struct FSpawnPlayerInfo& outInfo);
	static void SetupForDrama(class AREDPawn_Player* MainPawn, class AREDPawn_Player* EnemyPawn, const class FString& DramaIDString, const class FString& textLang, const class FString& voiceLang);
	static void SetupSpawnedPlayer(class AREDPawn_Player* NewPlayer, bool optionalIsCharaSelect, struct FSpawnPlayerInfo& outInfo);
	static class UClass* GetPlayerClass(struct FSpawnPlayerInfo& outInfo);
};

// Class REDGame.REDCameraModule
// 0x0004 (0x003C - 0x0040)
class UREDCameraModule : public UObject
{
public:
	class AREDCamera*                                  PlayerCamera;                                  // 0x003C (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCameraModule");
		}

		return uClassPointer;
	};

	void ZoomOut();
	void ZoomIn();
	void BecomeViewTarget(class AREDPlayerController* PC);
	void UpdateCamera(class APawn* P, class AREDCamera* CameraActor, float DeltaTime, struct FTViewTarget& outOutVT);
	void OnBecomeInActive(class UREDCameraModule* NewCamera);
	void OnBecomeActive(class UREDCameraModule* OldCamera);
	void Init();
};

// Class REDGame.REDCameraModule_Battle
// 0x0008 (0x0040 - 0x0048)
class UREDCameraModule_Battle : public UREDCameraModule
{
public:
	float                                              CamAltitude;                                   // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              DesiredCamAltitude;                            // 0x0044 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCameraModule_Battle");
		}

		return uClassPointer;
	};

	void UpdateCamera(class APawn* P, class AREDCamera* CameraActor, float DeltaTime, struct FTViewTarget& outOutVT);
	void OnBecomeActive(class UREDCameraModule* OldCamera);
};

// Class REDGame.REDCamera_InterludeDrama
// 0x0000 (0x04AC - 0x04AC)
class AREDCamera_InterludeDrama : public ACamera
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDCamera_InterludeDrama");
		}

		return uClassPointer;
	};

	void UpdateViewTarget(float DeltaTime, struct FTViewTarget& outOutVT);
	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
};

// Class REDGame.REDControlModule_Menu
// 0x0000 (0x0040 - 0x0040)
class UREDControlModule_Menu : public UREDControlModule
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDControlModule_Menu");
		}

		return uClassPointer;
	};

	void UpdateRotation(float DeltaTime);
	void ProcessMove(float DeltaTime, const struct FVector& newAccel, EDoubleClickDir DoubleClickMove, const struct FRotator& DeltaRot);
	struct FRotator GetBaseAimRotation();
};

// Class REDGame.REDDebugCameraHUD
// 0x0000 (0x0454 - 0x0454)
class AREDDebugCameraHUD : public ADebugCameraHUD
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDDebugCameraHUD");
		}

		return uClassPointer;
	};

	void eventPostRender();
	class AREDPawn_Player* GetPlayer(int32_t Id);
};

// Class REDGame.REDEasyCharaSelectDefine
// 0x0000 (0x003C - 0x003C)
class UREDEasyCharaSelectDefine : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDEasyCharaSelectDefine");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDGfxMoviePlayer_MenuStageSelect
// 0x0030 (0x01B4 - 0x01E4)
class UREDGfxMoviePlayer_MenuStageSelect : public UREDGfxMoviePlayer_Menu_Base
{
public:
	class TArray<struct FBGSelectItem>                 StageList;                                     // 0x01B4 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FBGMSelectItem>                BGMList;                                       // 0x01C0 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            StageCursor;                                   // 0x01CC (0x0004) [0x0000000000000000]               
	int32_t                                            BGMCursor;                                     // 0x01D0 (0x0004) [0x0000000000000000]               
	int32_t                                            TimeLimitCount;                                // 0x01D4 (0x0004) [0x0000000000000000]               
	uint32_t                                           TimeCountStop : 1;                             // 0x01D8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDecide : 1;                                   // 0x01D8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bEnd : 1;                                      // 0x01D8 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bTrigStageChange : 1;                          // 0x01D8 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bTrigBGMChange : 1;                            // 0x01D8 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bBGMSelectable : 1;                            // 0x01D8 (0x0004) [0x0000000000000000] [0x00000020] 
	EUE_PLAYER_ID                                      selectPlayer;                                  // 0x01DC (0x0001) [0x0000000000000000]               
	struct FDecideInfoStruct                           DecideInfo;                                    // 0x01E0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuStageSelect");
		}

		return uClassPointer;
	};

	void AS_SetTimer(int32_t Time);
	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void UpdateSub_PanelUpdate();
	void SetBGMPanel();
	void SetStagePanel(int32_t Index);
	void UpdateEnd(bool bTrigger);
	void UpdateBGMSelect(bool bTrigger);
	void UpdateStageSelect(bool bTrigger);
	void UpdateStart(bool bTrigger);
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	bool IsBGMSelect();
	bool IsStageSelect();
	EUE_BGM_ID GetDecideBGMID();
	EUE_BG_ID GetDecideBGID();
	void DecideStage();
	void UpdateBGmName();
	void SetBGMCursor(EUE_BGM_ID bgmid);
	void SetBGCursor(EUE_BG_ID BGID);
	void StopStageSelect();
	void StartStageSelect(EUE_PLAYER_ID _selectPlayer, int32_t _timeLimit, bool _bBGMSelectable);
	bool IsSelectableBGM(EUE_BGM_ID bgmid);
	bool IsSelectableStage(EUE_BG_ID BGID);
	EUE_BGM_ID GetRandomBGM();
	EUE_BG_ID GetRandomStage();
	bool IsRunning();
	void CommonSE_Cursor();
	void CommonSE_OK();
};

// Class REDGame.REDGameCommon_Scene
// 0x0000 (0x003C - 0x003C)
class UREDGameCommon_Scene : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameCommon_Scene");
		}

		return uClassPointer;
	};

	static class FString GetNextSceneCommand(EUE_SCENE_ID Id, const class FString& bgString, bool optionalForSeamlessTravel);
};

// Class REDGame.REDGameInfo_ActionSnap
// 0x0000 (0x0490 - 0x0490)
class AREDGameInfo_ActionSnap : public AREDGameInfo
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_ActionSnap");
		}

		return uClassPointer;
	};

	void eventPreBeginPlay();
};

// Class REDGame.REDPlayerController_ActionSnap
// 0x0038 (0x0584 - 0x05BC)
class AREDPlayerController_ActionSnap : public APlayerController
{
public:
	uint32_t                                           SnapStart : 1;                                 // 0x0584 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           SnapEnd : 1;                                   // 0x0584 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           FirstSnap : 1;                                 // 0x0584 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           AllShotMode : 1;                               // 0x0584 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           EffectMode : 1;                                // 0x0584 (0x0004) [0x0000000000000000] [0x00000010] 
	class AREDPawn_Player*                             PlayerPawn;                                    // 0x0588 (0x0004) [0x0000000000000000]               
	class AREDPawn*                                    SnapPawn;                                      // 0x058C (0x0004) [0x0000000000000000]               
	class FName                                        CharaName;                                     // 0x0590 (0x0008) [0x0000000000000000]               
	int32_t                                            CountDown;                                     // 0x0598 (0x0004) [0x0000000000000000]               
	class UAnimSet*                                    AnimSet;                                       // 0x059C (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentAnimeID;                                // 0x05A0 (0x0004) [0x0000000000000000]               
	int32_t                                            MeshID;                                        // 0x05A4 (0x0004) [0x0000000000000000]               
	int32_t                                            ColorID;                                       // 0x05A8 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentEffectID;                               // 0x05AC (0x0004) [0x0000000000000000]               
	class UREDEffect*                                  Effect;                                        // 0x05B0 (0x0004) [0x0000000000000000]               
	class FName                                        SpawnEffectName;                               // 0x05B4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPlayerController_ActionSnap");
		}

		return uClassPointer;
	};

	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void ASStop();
	void ASStart(const class FName& chara, const class FName& optionalAnime, int32_t optionalInColorID, int32_t optionalInMeshID);
	void ASStartEf(const class FName& chara, const class FName& optionalEffectName, const class FName& optionalAnimeName, int32_t optionalInColorID, int32_t optionalInMeshID);
	void SetAnime(const class FName& anime);
	void ASChara(const class FName& InCharaName, bool optional_EffectMode, int32_t optionalInColorID, int32_t optionalInMeshID);
	class AREDPawn_Player* LoadAndSpawnChara(const class FString& CharaID, int32_t InMeshID, int32_t InColorID);
};

// Class REDGame.REDPawn_AdvLight
// 0x0004 (0x4A7C - 0x4A80)
class AREDPawn_AdvLight : public AREDPawn
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                           // 0x4A7C (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPawn_AdvLight");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDPawn_AdvCamera
// 0x0004 (0x4A7C - 0x4A80)
class AREDPawn_AdvCamera : public AREDPawn
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                           // 0x4A7C (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPawn_AdvCamera");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_AdvBattleBGLoad
// 0x0010 (0x0114 - 0x0124)
class UREDSeqEvent_AdvBattleBGLoad : public USequenceEvent
{
public:
	class FString                                      bgname;                                        // 0x0114 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bIsBGPS3 : 1;                                  // 0x0120 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_AdvBattleBGLoad");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_AdvKismetEventStart
// 0x000C (0x0114 - 0x0120)
class UREDSeqEvent_AdvKismetEventStart : public USequenceEvent
{
public:
	class FString                                      EventName;                                     // 0x0114 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_AdvKismetEventStart");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDPreBattleEventManager
// 0x0004 (0x01C8 - 0x01CC)
class AREDPreBattleEventManager : public AActor
{
public:
	uint32_t                                           bEntryEventPlaying : 1;                        // 0x01C8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBGEventPlaying : 1;                           // 0x01C8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bRequestEventSkip : 1;                         // 0x01C8 (0x0004) [0x0000000000000000] [0x00000004] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPreBattleEventManager");
		}

		return uClassPointer;
	};

	bool IsRequestEventSkip();
	void RequestEventSkip();
	bool IsBGEventFinish();
	void BGEventFinish();
	bool BGEventStart();
	bool IsEntryEventFinish();
	void EntryEventFinish();
	bool EntryEventStart(class APawn* PlayerPawn, class APawn* EnemyPawn);
};

// Class REDGame.REDPlayerController_Menu
// 0x0000 (0x05A8 - 0x05A8)
class AREDPlayerController_Menu : public AREDPlayerController
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPlayerController_Menu");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDGameInfo_Briefing
// 0x0004 (0x0494 - 0x0498)
class AREDGameInfo_Briefing : public AREDGameInfo_Menu
{
public:
	class UREDTexture2DArray*                          Tex2DArray;                                    // 0x0494 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_Briefing");
		}

		return uClassPointer;
	};

	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
};

// Class REDGame.REDGameInfo_CharaSelect
// 0x0000 (0x0494 - 0x0494)
class AREDGameInfo_CharaSelect : public AREDGameInfo_Menu
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_CharaSelect");
		}

		return uClassPointer;
	};

	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
};

// Class REDGame.REDPlayerController_CharaSelect
// 0x0000 (0x05A8 - 0x05A8)
class AREDPlayerController_CharaSelect : public AREDPlayerController
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPlayerController_CharaSelect");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDLobbyCollisionActor_Floor
// 0x0000 (0x01C8 - 0x01C8)
class AREDLobbyCollisionActor_Floor : public AActor
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDLobbyCollisionActor_Floor");
		}

		return uClassPointer;
	};

	void GetFloorInfo(struct FVector& outPos1, struct FVector& outPos2, struct FVector& outPos3, struct FVector& outPos4, float& outRadius);
};

// Class REDGame.REDLobbyCollisionActor_Rect
// 0x0000 (0x01C8 - 0x01C8)
class AREDLobbyCollisionActor_Rect : public AActor
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDLobbyCollisionActor_Rect");
		}

		return uClassPointer;
	};

	void GetRectPos(struct FVector2D& outPos1, struct FVector2D& outPos2, struct FVector2D& outPos3, struct FVector2D& outPos4);
	void CalcOffsetPos(const struct FVector2D& offset, struct FVector2D& outPos);
};

// Class REDGame.REDLobbyCollisionActor_Circle
// 0x0008 (0x01C8 - 0x01D0)
class AREDLobbyCollisionActor_Circle : public AActor
{
public:
	ELOBBY_EVENT                                       LobbyEvent;                                    // 0x01C8 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEventOnly : 1;                                // 0x01CC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDLobbyCollisionActor_Circle");
		}

		return uClassPointer;
	};

	void GetLobbyEvent(struct FLobby_Collision_Event& outEventData);
	void GetPosAndRadius(struct FVector2D& outPos, float& outRadius);
};

// Class REDGame.REDLobbyCollisionActor_Kyoutai
// 0x0008 (0x0204 - 0x020C)
class AREDLobbyCollisionActor_Kyoutai : public ADynamicSMActor
{
public:
	uint32_t                                           bRoomKyoutai : 1;                              // 0x0204 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bSansakiLobbyKyoutai : 1;                      // 0x0204 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	int32_t                                            RoomKyoutaiIndex;                              // 0x0208 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDLobbyCollisionActor_Kyoutai");
		}

		return uClassPointer;
	};

	void GetKyoutaiInfo(struct FLobby_KyoutaiInfo& outInfo1P, struct FLobby_KyoutaiInfo& outInfo2P, struct FLobby_WaitLineInfo& outWaitLineInfo);
	void GetLobbyEvent(int32_t kyoutaiID, class TArray<struct FLobby_Collision_Event>& outCollisionList);
	void GetRectPos(struct FVector2D& outPos1, struct FVector2D& outPos2, struct FVector2D& outPos3, struct FVector2D& outPos4);
	void CalcOffsetPos(const struct FVector2D& offset, struct FVector2D& outPos);
};

// Class REDGame.REDLobbyCollisionActor_Wall
// 0x0008 (0x01C8 - 0x01D0)
class AREDLobbyCollisionActor_Wall : public AActor
{
public:
	float                                              Thickness;                                     // 0x01C8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bMoveLineCheck : 1;                            // 0x01CC (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDLobbyCollisionActor_Wall");
		}

		return uClassPointer;
	};

	void GetLinePosNormal(struct FVector2D& outNormal);
	void GetLinePos(struct FVector2D& outPos1, struct FVector2D& outPos2);
};

// Class REDGame.REDPlayerController_Lobby
// 0x0000 (0x05A8 - 0x05A8)
class AREDPlayerController_Lobby : public AREDPlayerController
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPlayerController_Lobby");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDGameInfo_Gallery
// 0x0000 (0x0494 - 0x0494)
class AREDGameInfo_Gallery : public AREDGameInfo_Menu
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_Gallery");
		}

		return uClassPointer;
	};

	void eventBGMVolume(int32_t setFrame, float Volume);
	void eventBGMStop(int32_t fadeOutFrame);
	void eventBGMRequest(const class FString& cueName, const class FString& PackageName, float optionalFadeInTime);
	void eventBGMRequestFromCue(class USoundCue* Cue, float optionalFadeInTime);
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
};

// Class REDGame.REDPlayerController_InterludeDrama
// 0x0000 (0x05A8 - 0x05A8)
class AREDPlayerController_InterludeDrama : public AREDPlayerController
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPlayerController_InterludeDrama");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDGfxMoviePlayer_MenuBG
// 0x0000 (0x01B4 - 0x01B4)
class UREDGfxMoviePlayer_MenuBG : public UREDGfxMoviePlayer_Menu_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuBG");
		}

		return uClassPointer;
	};

	void OnFinalize();
	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void OnInitialize();
	void ActionStart();
	void SetBGColor(ECMN_BG_COLOR_TYPE Type);
	void SetHeadText(const class FString& txt);
};

// Class REDGame.REDGameInfo_PreInterlude
// 0x0004 (0x0490 - 0x0494)
class AREDGameInfo_PreInterlude : public AREDGameInfo
{
public:
	uint32_t                                           bTravel : 1;                                   // 0x0490 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bStopNowLoadingDisp : 1;                       // 0x0490 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_PreInterlude");
		}

		return uClassPointer;
	};

	void eventDestroyOnSeamlessTravel();
	void eventTick(float DeltaTime);
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
};

// Class REDGame.REDGameInfo_Replay
// 0x0000 (0x0494 - 0x0494)
class AREDGameInfo_Replay : public AREDGameInfo_Menu
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_Replay");
		}

		return uClassPointer;
	};

	void eventGameEnding();
	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
};

// Class REDGame.REDGameInfo_StoryMenu
// 0x0000 (0x0494 - 0x0494)
class AREDGameInfo_StoryMenu : public AREDGameInfo_Menu
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_StoryMenu");
		}

		return uClassPointer;
	};

	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
};

// Class REDGame.REDGfxMoviePlayer_MenuStaffRoll_Story
// 0x0003 (0x01DD - 0x01E0)
class UREDGfxMoviePlayer_MenuStaffRoll_Story : public UREDGfxMoviePlayer_MenuStaffRoll
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuStaffRoll_Story");
		}

		return uClassPointer;
	};

	void OnInitialize();
};

// Class REDGame.REDGameInfo_Title
// 0x0000 (0x0494 - 0x0494)
class AREDGameInfo_Title : public AREDGameInfo_Menu
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameInfo_Title");
		}

		return uClassPointer;
	};

	void eventInitGame(const class FString& Options, class FString& outErrorMessage);
};

// Class REDGame.REDGameStatsReader
// 0x0000 (0x0088 - 0x0088)
class UREDGameStatsReader : public UOnlineStatsRead
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameStatsReader");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDGameStatsWriter
// 0x0000 (0x0088 - 0x0088)
class UREDGameStatsWriter : public UOnlineStatsWrite
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGameStatsWriter");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDGfxMovieArray_Battle
// 0x0000 (0x008C - 0x008C)
class UREDGfxMovieArray_Battle : public UREDGfxMovieArray
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMovieArray_Battle");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDGfxMovieManager_NetworkForMainmenu
// 0x0015 (0x003C - 0x0051)
class UREDGfxMovieManager_NetworkForMainmenu : public UREDGfxMovieManager_Network_Base
{
public:
	class UREDGfxMoviePlayer_MenuNetwork_Base*         CurrentMenu;                                   // 0x003C (0x0004) [0x0000000000000000]               
	class UREDGfxMovieManager_Network*                 NetworkManagerDummy;                           // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentState;                                  // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            NextState;                                     // 0x0048 (0x0004) [0x0000000000000000]               
	uint32_t                                           bTriggerState : 1;                             // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFromSearch : 1;                               // 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bFromSearchRankMatch : 1;                      // 0x004C (0x0004) [0x0000000000000000] [0x00000004] 
	EUE_SCENE_ID                                       NextSceneID;                                   // 0x0050 (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMovieManager_NetworkForMainmenu");
		}

		return uClassPointer;
	};

	void Update();
	void stateUpdate_NextScene(bool bTrigger);
	void stateUpdate_Error(bool bTrigger);
	void stateUpdate_ErrorWait2(bool bTrigger);
	void stateUpdate_ErrorWait(bool bTrigger);
	void stateUpdate_Ranking(bool bTrigger);
	void stateUpdate_PlayerMatchSearch(bool bTrigger);
	void stateUpdate_RankMatchSearch(bool bTrigger);
	void stateUpdate_NetworkMain(bool bTrigger);
	void stateUpdate_NetworkWelcome(bool bTrigger);
	void stateUpdate_NetworkInit(bool bTrigger);
	bool rankingMenu_IsEnd();
	void rankingMenu();
	bool playerMatchSearch_IsEnd(int32_t& outIsGotoRoom);
	void playerMatchSearch();
	bool rankMatchSearch_IsEnd();
	void rankMatchSearch();
	bool networkTopMenu_IsEnd(int32_t& outIsRankMatchSearch, int32_t& outIsPlayerMatchSearch, int32_t& outIsRanking);
	void networkTopMenu(bool _bFromSearch, bool _bFromSearchRankMatch);
	bool welcomeScene_IsEnd();
	void welcomeScene();
	bool networkInit_IsEnd(int32_t& outIsError);
	void NetworkInit();
	bool IsNetworkEnd();
	void StartNetwork();
	void SetState(ENETMANAGER_MM_STATE State);
};

// Class REDGame.REDGfxMoviePlayer_BattleResultWindow_AC
// 0x0030 (0x0200 - 0x0230)
class UREDGfxMoviePlayer_BattleResultWindow_AC : public UREDGfxMoviePlayer_BattleResultWindow
{
public:
	int32_t                                            Amulet_RankDownCheck_Counter[2];               // 0x0200 (0x0008) [0x0000000000000000]               
	int32_t                                            AmuletPlay[2];                                 // 0x0208 (0x0008) [0x0000000000000000]               
	int32_t                                            AmuletDanPlay[2];                              // 0x0210 (0x0008) [0x0000000000000000]               
	int32_t                                            DemoteAnimCounter[2];                          // 0x0218 (0x0008) [0x0000000000000000]               
	int32_t                                            Dan[2];                                        // 0x0220 (0x0008) [0x0000000000000000]               
	int32_t                                            DanAfter[2];                                   // 0x0228 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_BattleResultWindow_AC");
		}

		return uClassPointer;
	};

	void Update(float DeltaTime);
	void SkipDemote(int32_t Player);
	void SetDan(int32_t Player, int32_t val, int32_t val_after);
	int32_t IsShowAnimEnd();
	void Show(int32_t Player);
	void PlayRankDownCheckSE();
	bool Amulet_RankDownCheck(int32_t Player);
};

// Class REDGame.REDGfxMoviePlayer_MenuCharaIntro
// 0x0000 (0x01B4 - 0x01B4)
class UREDGfxMoviePlayer_MenuCharaIntro : public UREDGfxMoviePlayer_Menu_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuCharaIntro");
		}

		return uClassPointer;
	};

	void OnUpdate(bool bTrigger);
	void UpdateMain(bool bTrigger);
	void OnInitialize();
};

// Class REDGame.REDGfxMoviePlayer_MenuCharaSelect
// 0x0294 (0x01BC - 0x0450)
class UREDGfxMoviePlayer_MenuCharaSelect : public UREDGfxMoviePlayer_MenuCharaSelectBase
{
public:
	struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectPlayerParam PlayerParam[2];                                // 0x01BC (0x0070) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bInitialized : 1;                              // 0x022C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCPUSelectable : 1;                            // 0x022C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bBGSelectable : 1;                             // 0x022C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bBGMSelectable : 1;                            // 0x022C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bModeSelectable : 1;                           // 0x022C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bCardLoadable : 1;                             // 0x022C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bTrialSelectable : 1;                          // 0x022C (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bUseMemoryData : 1;                            // 0x022C (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bGarbageCollection : 1;                        // 0x022C (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           MainStateTrigger : 1;                          // 0x022C (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bTimeLimitCountStop : 1;                       // 0x022C (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bNetworkMode : 1;                              // 0x022C (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bNetworkPlayerMatch : 1;                       // 0x022C (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bNetworkTournament : 1;                        // 0x022C (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bEditor : 1;                                   // 0x022C (0x0004) [0x0000000000002000] [0x00004000] (CPF_Transient | CPF_EditorOnly)
	int32_t                                            GarbageCollectionReqCount;                     // 0x0230 (0x0004) [0x0000000000000000]               
	class FName                                        MainState;                                     // 0x0234 (0x0008) [0x0000000000000000]               
	EUE_PLAYER_ID                                      FirstCharaSelectPlayer;                        // 0x023C (0x0001) [0x0000000000000000]               
	EUE_BG_ID                                          SelectBGID;                                    // 0x023D (0x0001) [0x0000000000000000]               
	EUE_BGM_ID                                         SelectBGMID;                                   // 0x023E (0x0001) [0x0000000000000000]               
	EUE_SCENE_ID                                       ReserveNextSceneID;                            // 0x023F (0x0001) [0x0000000000000000]               
	int32_t                                            TimeLimitCounter;                              // 0x0240 (0x0004) [0x0000000000000000]               
	int32_t                                            StageSelect_TimeLimit;                         // 0x0244 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuCharaSelectFront*     FrontCharaSel;                                 // 0x0248 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuReadCard*             ReadCard;                                      // 0x024C (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuStageSelect*          StageSelect;                                   // 0x0250 (0x0004) [0x0000000000000000]               
	class AREDHUD*                                     PlayerHUD;                                     // 0x0254 (0x0004) [0x0000000000000000]               
	struct UREDGfxMoviePlayer_MenuCharaSelect_FAsyncLoadParamStruct AsyncLoadParam[2];                             // 0x0258 (0x0130) [0x0000000000400000] (CPF_NeedCtorLink)
	struct UREDGfxMoviePlayer_MenuCharaSelect_FAsyncLoadCacheStruct AsyncLoadCharaCache[3];                        // 0x0388 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            AsyncLoadCharaCacheIndex;                      // 0x03B8 (0x0004) [0x0000000000000000]               
	struct UREDGfxMoviePlayer_MenuCharaSelect_FAsyncLoadCacheStruct AsyncLoadColorCache[4];                        // 0x03BC (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            AsyncLoadColorCacheIndex;                      // 0x03FC (0x0004) [0x0000000000000000]               
	class TArray<struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectCharacterParam> SelectableChara;                               // 0x0400 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectPanelRectParam> PanelRect;                                     // 0x040C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AS_CharaID;                                    // 0x0418 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            AS_Index;                                      // 0x0424 (0x0004) [0x0000000000000000]               
	struct UREDGfxMoviePlayer_MenuCharaSelect_FGlobeAnimeParam GlobeAnim;                                     // 0x0428 (0x0020) [0x0000000000000000]               
	class UREDPawnMaterials*                           LoadingCharaMaterials;                         // 0x0448 (0x0004) [0x0000000000000000]               
	int32_t                                            PopUpHandle;                                   // 0x044C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuCharaSelect");
		}

		return uClassPointer;
	};

	struct FVector2D Vect2dIntersection(struct FVector2D& outA1, struct FVector2D& outA2, struct FVector2D& outB1, struct FVector2D& outB2);
	float cross2d(const struct FVector2D& A, const struct FVector2D& B);
	bool PosIncludeRectangle(const struct FVector2D& tp1, const struct FVector2D& tp2, const struct FVector2D& tp3, const struct FVector2D& tp4, struct FVector2D& outXp);
	bool PosIncludeTriangle(struct FVector2D& outTp1, struct FVector2D& outTp2, struct FVector2D& outTp3, struct FVector2D& outXp);
	float CheckIntersect(struct FVector2D& outP1, struct FVector2D& outP2, struct FVector2D& outP3, struct FVector2D& outP4);
	void AS_SetTimer(int32_t Time);
	void AS_SetCharaIconVisible(int32_t Index, bool Visible);
	void AS_SetCharaIcon(const class FString& Label);
	void AS_SetCharaIconsLabel(const class FString& Label);
	void AS_FocusCharaIconPanelStop(const class FString& Label);
	void AS_FocusCharaIconStop(const class FString& Label);
	void AS_FocusCharaIconPanelPlay(const class FString& Label);
	void AS_FocusCharaIconPlay(const class FString& Label);
	int32_t IndexToDan(int32_t Index);
	class UObject* GetKismetObject(const class FName& VarName);
	void UpdateGlobe();
	void DecideGlobe();
	void UpdateTimer(int32_t Time);
	void SetCharaIconFocus(EUE_PLAYER_ID Player, const class FString& CharaID);
	void SetCharaIconVisible(int32_t Index, bool Visible);
	void SetupCharaIcon(int32_t Index, const class FString& CharaID);
	bool IsExistCharaIcon(int32_t Index);
	void EndAnim();
	void StartAnim();
	void SetCursorPos(EUE_PLAYER_ID Player, float X, float Y);
	void ShowCursor(EUE_PLAYER_ID Player, bool On);
	void ChangeCharaPicture(EUE_PLAYER_ID Player, const class FString& CharaID, ECharaPictureState State);
	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void UpdateNewChallenger();
	void UpdateCharaModel(EUE_PLAYER_ID Player);
	void SetupEffect(EUE_PLAYER_ID Player, int32_t effIndex, const struct FVector& Loc, const class FName& effName, const class FName& motionName, bool isLoop);
	void UpdateAsyncLoad(EUE_PLAYER_ID Player, const class FString& _CharaID, int32_t _ColorID);
	void Player_UpdateReturnToMainMenu(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectPlayerParam& outParam);
	void Player_UpdateBGSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectPlayerParam& outParam);
	void Player_UpdateCustomMenu(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectPlayerParam& outParam);
	void Player_UpdateTrialSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectPlayerParam& outParam);
	void Player_UpdateCharaSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectPlayerParam& outParam);
	void Player_PrepareUpdateCharaSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectPlayerParam& outParam);
	void Player_UpdateCardLoad(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectPlayerParam& outParam);
	void Player_InitCardLoad(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectPlayerParam& outParam);
	bool UpdateFinish(bool bTrigger);
	void UpdateModeSelect(bool bTrigger);
	void UpdateCursorAnim();
	void UpdateCharaSelect(bool bTrigger);
	void UpdateStartDemo(bool bTrigger);
	void FinalizeScene();
	void InitializeScene();
	void CancelExecCommon(EUE_PLAYER_ID Player, bool IsFinish);
	bool IsCancelTrig(EUE_PLAYER_ID Player);
	void ResetAsyncData(EUE_PLAYER_ID Player);
	bool IsTimeLimit();
	void SetupCharaCursorFromChara(EUE_PLAYER_ID Player, const class FString& CharaID);
	void SetupCharaCursor(EUE_PLAYER_ID Player);
	void AddCharacterParam(const class FString& CharaID, int32_t PanelIndex, bool optionalIsRandom, struct UREDGfxMoviePlayer_MenuCharaSelect_FCharaSelectCharacterParam& outParam);
	class UREDCharaAsset* SearchAsyncLoadColorCache(const class FString& CharaID);
	void AddAsyncLoadColorCache(const class FString& CharaID, class UREDCharaAsset* Asset);
	class UREDCharaAsset* SearchAsyncLoadCharaCache(const class FString& CharaID);
	void AddAsyncLoadCharaCache(const class FString& CharaID, class UREDCharaAsset* Asset);
	void eventOnClose();
	void OnInitialize();
	EUE_SCENE_ID SetNetworkNextScene();
	class FString eventGetSelectCharaID(EUE_PLAYER_ID Player);
	void ReqGarbageCollection();
};

// Class REDGame.REDGfxMoviePlayer_MenuCharaSelectFront
// 0x0000 (0x01BC - 0x01BC)
class UREDGfxMoviePlayer_MenuCharaSelectFront : public UREDGfxMoviePlayer_MenuCharaSelectBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuCharaSelectFront");
		}

		return uClassPointer;
	};

	void AS_SetCursorPos(EUE_PLAYER_ID Player, float X, float Y);
	void AS_ShowCursorLabelStop2P(const class FString& Label);
	void AS_ShowCursorLabelStop1P(const class FString& Label);
	void AS_ShowCursorLabelPlay2P(const class FString& Label);
	void AS_ShowCursorLabelPlay1P(const class FString& Label);
	void AS_SetCharaPictureLabelStop2P(const class FString& Label);
	void AS_SetCharaPictureLabelStop1P(const class FString& Label);
	void AS_SetCharaPictureLabelPlay2P(const class FString& Label);
	void AS_SetCharaPictureLabelPlay1P(const class FString& Label);
	void AS_CharaNameLabelStop2P(const class FString& CharaID);
	void AS_CharaNameLabelStop1P(const class FString& CharaID);
	void AS_CharaNameLabelPlay2P(const class FString& CharaID);
	void AS_CharaNameLabelPlay1P(const class FString& CharaID);
	void EndChallengeAchievementRate();
	void ShowChallengeAchievementRate(int32_t Num, int32_t numAll);
	void SetCursorPos(EUE_PLAYER_ID Player, float X, float Y);
	void ShowCursor(EUE_PLAYER_ID Player, bool On);
	void SetCharaPictureLabel(EUE_PLAYER_ID Player, const class FString& Label, bool bStop);
	void ChangeCharaName(EUE_PLAYER_ID Player, const class FString& CharaID);
	void OnUpdate(bool bTrigger);
	void OnInitialize();
};

// Class REDGame.REDGfxMoviePlayer_MenuCharaSelect_AC20
// 0x04A8 (0x01BC - 0x0664)
class UREDGfxMoviePlayer_MenuCharaSelect_AC20 : public UREDGfxMoviePlayer_MenuCharaSelectBase
{
public:
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam PlayerParam[2];                                // 0x01BC (0x00B8) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bInitialized : 1;                              // 0x0274 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCPUSelectable : 1;                            // 0x0274 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bBGSelectable : 1;                             // 0x0274 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bBGMSelectable : 1;                            // 0x0274 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bModeSelectable : 1;                           // 0x0274 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bCardLoadable : 1;                             // 0x0274 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bHandicapEnable : 1;                           // 0x0274 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bTrialSelectable : 1;                          // 0x0274 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bUseMemoryData : 1;                            // 0x0274 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bGarbageCollection : 1;                        // 0x0274 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           MainStateTrigger : 1;                          // 0x0274 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bTimeLimitCountStop : 1;                       // 0x0274 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bNetworkMode : 1;                              // 0x0274 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bNetworkPlayerMatch : 1;                       // 0x0274 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bNetworkTournament : 1;                        // 0x0274 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bNetworkLobbyBattle : 1;                       // 0x0274 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bNetworkWelcomeMode : 1;                       // 0x0274 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bReturnToMainMenuEnable : 1;                   // 0x0274 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bModelNoDsip : 1;                              // 0x0274 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           bBannedStylish : 1;                            // 0x0274 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bEditor : 1;                                   // 0x0274 (0x0004) [0x0000000000002000] [0x00100000] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bMOMHelpDisp : 1;                              // 0x0274 (0x0004) [0x0000000000000000] [0x00200000] 
	int32_t                                            GarbageCollectionReqCount;                     // 0x0278 (0x0004) [0x0000000000000000]               
	class FName                                        MainState;                                     // 0x027C (0x0008) [0x0000000000000000]               
	EUE_PLAYER_ID                                      FirstCharaSelectPlayer;                        // 0x0284 (0x0001) [0x0000000000000000]               
	EUE_BG_ID                                          SelectBGID;                                    // 0x0285 (0x0001) [0x0000000000000000]               
	EUE_BGM_ID                                         SelectBGMID;                                   // 0x0286 (0x0001) [0x0000000000000000]               
	EUE_SCENE_ID                                       ReserveNextSceneID;                            // 0x0287 (0x0001) [0x0000000000000000]               
	int32_t                                            TimeLimitCounter;                              // 0x0288 (0x0004) [0x0000000000000000]               
	int32_t                                            StageSelect_TimeLimit;                         // 0x028C (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuReadCard*             ReadCard;                                      // 0x0290 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuStageSelect*          StageSelect;                                   // 0x0294 (0x0004) [0x0000000000000000]               
	class AREDHUD*                                     PlayerHUD;                                     // 0x0298 (0x0004) [0x0000000000000000]               
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FAsyncLoadParamStruct AsyncLoadParam[2];                             // 0x029C (0x0138) [0x0000000000400000] (CPF_NeedCtorLink)
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FAsyncLoadCacheStruct AsyncLoadCharaCache[3];                        // 0x03D4 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            AsyncLoadCharaCacheIndex;                      // 0x0404 (0x0004) [0x0000000000000000]               
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FAsyncLoadCacheStruct AsyncLoadColorCache[4];                        // 0x0408 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            AsyncLoadColorCacheIndex;                      // 0x0448 (0x0004) [0x0000000000000000]               
	class TArray<struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectCharacterParam> SelectableChara;                               // 0x044C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPanelRectParam PanelRect[32];                                 // 0x0458 (0x0180) [0x0000000000000000]               
	class FString                                      AS_CharaID;                                    // 0x05D8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            AS_Index;                                      // 0x05E4 (0x0004) [0x0000000000000000]               
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FGlobeAnimeParam GlobeAnim;                                     // 0x05E8 (0x0020) [0x0000000000000000]               
	struct FMOMSequenceInfo                            MOMSeqInfo;                                    // 0x0608 (0x0014) [0x0000000000000000]               
	int32_t                                            BGColorIndex;                                  // 0x061C (0x0004) [0x0000000000000000]               
	class UREDPawnMaterials*                           LoadingCharaMaterials;                         // 0x0620 (0x0004) [0x0000000000000000]               
	int32_t                                            PopUpHandle;                                   // 0x0624 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuMOMPreset*            MOMPreset;                                     // 0x0628 (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuMOMMedal*             MOMMedal;                                      // 0x062C (0x0004) [0x0000000000000000]               
	class UREDGfxMoviePlayer_MenuStyleSelect*          StyleSelect;                                   // 0x0630 (0x0004) [0x0000000000000000]               
	class TArray<struct FMOMHelpInfo>                  MOMHelpInfoList;                               // 0x0634 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MOMHelpState;                                  // 0x0640 (0x0004) [0x0000000000000000]               
	struct FCharaSelectHandicapRectParam               HandicapRect[2];                               // 0x0644 (0x0020) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuCharaSelect_AC20");
		}

		return uClassPointer;
	};

	void eventExternalMOMSetEnemyCursor(const class FString& CharaID);
	void DrawDebugHitRect();
	struct FVector2D Vect2dIntersection(struct FVector2D& outA1, struct FVector2D& outA2, struct FVector2D& outB1, struct FVector2D& outB2);
	float cross2d(const struct FVector2D& A, const struct FVector2D& B);
	bool PosIncludeRectangle(struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPanelRectParam& outParam, struct FVector2D& outXp);
	void GetHitRectangle(bool bRandom, struct FVector2D& outPos1, struct FVector2D& outPos2, struct FVector2D& outPos3, struct FVector2D& outPos4, struct FVector2D& outPos5, struct FVector2D& outPos6, struct FVector2D& outOrigin);
	bool PosIncludeTriangle(struct FVector2D& outTp1, struct FVector2D& outTp2, struct FVector2D& outTp3, struct FVector2D& outXp);
	float CheckIntersect(struct FVector2D& outP1, struct FVector2D& outP2, struct FVector2D& outP3, struct FVector2D& outP4);
	bool CharaIconCollisionFunc(const struct FVector2D& CursorPos, bool bRandomSelect, int32_t& outSetCursor, int32_t& outRandCounter);
	void UpdateCursorFunc(EUE_PLAYER_ID Side, EUE_PLAYER_ID Player, struct FVector2D& outCursorPos);
	void eventFinishMOMMedal();
	void eventStartMOMMedal(EUE_PLAYER_ID Player, float baseRate, float targetRate, int32_t volumeLevel);
	void eventFinishMOMPreset();
	bool eventIsMOMPresetCancel();
	bool eventIsMOMPreset();
	void eventStartMOMPreset();
	void EndHandicapPanel(EUE_PLAYER_ID Player);
	void FocusHandicapPanel(EUE_PLAYER_ID Player, bool Focus);
	void BlinkHandicapPanel(EUE_PLAYER_ID Player, bool blink);
	void UpdateHandicapPanel(EUE_PLAYER_ID Player);
	void StartHandicapPanel(EUE_PLAYER_ID Player);
	void EndCustomPanel(EUE_PLAYER_ID Player);
	void UpdateCustomPanelCostume(EUE_PLAYER_ID Player);
	void UpdateCustomPanelFocus(EUE_PLAYER_ID Player);
	void UpdateCustomPanelColor(EUE_PLAYER_ID Player);
	void StartCustomPanel(EUE_PLAYER_ID Player);
	void AS_SetTimer(int32_t digit1, int32_t digit10, int32_t digit100, int32_t digitNum);
	void SetMOMStar(int32_t Index, int32_t Type);
	void ChangeCharaName(EUE_PLAYER_ID Player, const class FString& CharaID);
	void AS_CharaNameLabelStop2P(const class FString& CharaID);
	void AS_CharaNameLabelStop1P(const class FString& CharaID);
	void AS_CharaNameLabelPlay2P(const class FString& CharaID);
	void AS_CharaNameLabelPlay1P(const class FString& CharaID);
	void SetCharaPictureLabel(EUE_PLAYER_ID Player, const class FString& Label, bool bStop);
	void AS_SetCharaPictureLabelStop2P(const class FString& Label);
	void AS_SetCharaPictureLabelStop1P(const class FString& Label);
	void AS_SetCharaPictureLabelPlay2P(const class FString& Label);
	void AS_SetCharaPictureLabelPlay1P(const class FString& Label);
	void AS_SetCharaIconVisible(int32_t Index, bool Visible);
	void AS_SetCharaIcon(const class FString& Label);
	void AS_SetCursorPos(EUE_PLAYER_ID Player, float X, float Y);
	void AS_ShowCursorLabelStop2P(const class FString& Label);
	void AS_ShowCursorLabelStop1P(const class FString& Label);
	void AS_ShowCursorLabelPlay2P(const class FString& Label);
	void AS_ShowCursorLabelPlay1P(const class FString& Label);
	void AS_SetCharaIconsLabel(const class FString& Label);
	void AS_FocusCharaIconPanelStop(const class FString& Label);
	void AS_FocusCharaIconStop(const class FString& Label);
	void AS_FocusCharaIconPanelPlay(const class FString& Label);
	void AS_FocusCharaIconPlay(const class FString& Label);
	int32_t IndexToDan(int32_t Index);
	class UObject* GetKismetObject(const class FName& VarName);
	void UpdateGlobe();
	void DecideGlobe();
	void UpdateTimer(int32_t Time);
	void SetCharaIconFocus(EUE_PLAYER_ID Player, const class FString& CharaID);
	void SetCharaIconVisible(int32_t Index, bool Visible);
	void SetupCharaIcon(int32_t Index, const class FString& CharaID);
	bool IsExistCharaIcon(int32_t Index);
	void EndAnim();
	void StartAnim();
	void SetCursorPos(EUE_PLAYER_ID Player, float X, float Y);
	void ShowCursor(EUE_PLAYER_ID Player, bool On);
	void ChangeCharaPicture(EUE_PLAYER_ID Player, const class FString& CharaID, ECharaPictureState State);
	void OnDrawUpdate();
	void OnUpdate(bool bTrigger);
	void UpdateNewChallenger();
	void UpdateCharaModel(EUE_PLAYER_ID Player);
	void SetupEffect(EUE_PLAYER_ID Player, int32_t effIndex, const struct FVector& Loc, const class FName& effName, const class FName& motionName, bool isLoop, float Scale);
	void UpdateAsyncLoad(EUE_PLAYER_ID Player, const class FString& _CharaID, int32_t _ColorID, int32_t _CostumeID);
	void Player_UpdateReturnToMainMenu(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void Player_UpdateBGSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void Player_UpdateCustomMenu(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void Player_UpdateTrialSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void Player_UpdateHandicapSetting(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void Player_UpdateCharaSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void Player_PrepareUpdateCharaSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void Player_UpdateStyleSelectExe(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void Player_UpdateStyleSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void Player_UpdateSkipCheckExe(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void Player_UpdateSkipCheck(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void Player_UpdateQuestConfirm(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void Player_UpdateCardLoad(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void Player_InitCardLoad(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	bool UpdateFinish(bool bTrigger);
	void UpdateRannyuToSelect(bool bTrigger);
	void UpdateMOMStage(bool bTrigger);
	void UpdateMOMMain(bool bTrigger);
	void UpdateMOMHelp(bool bTrigger);
	void UpdateMOMPreset(bool bTrigger);
	void UpdateModeSelect(bool bTrigger);
	void UpdateCursorAnim();
	void UpdateCharaSelect(bool bTrigger);
	void UpdateStartDemo(bool bTrigger);
	void FinalizeScene();
	void InitializeScene();
	void FixupCharaDecideInfo(EUE_PLAYER_ID Player);
	void CancelExecCommon(EUE_PLAYER_ID Player, bool IsFinish);
	bool IsCancelTrig(EUE_PLAYER_ID Player);
	void ResetAsyncData(EUE_PLAYER_ID Player, bool optionalBForMOM);
	bool IsTimeLimit();
	void SetupCharaCursorFromCharaBase(EUE_PLAYER_ID Player, const class FString& CharaID, class FString& outOutCharaID, struct FVector2D& outOutCurPos, int32_t& outOutCur, int32_t& outOutPrevCur);
	void SetupCharaCursorFromChara(EUE_PLAYER_ID Player, const class FString& CharaID);
	void SetupCharaCursor(EUE_PLAYER_ID Player);
	void AddCharacterParam(const class FString& CharaID, int32_t PanelIndex, bool optionalIsRandom, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectCharacterParam& outParam);
	void SetupSelectableChara_MOM();
	void SetupSelectableChara();
	void SetCharaSelectable(int32_t Index, bool Selectable);
	class UREDCharaAsset* SearchAsyncLoadColorCache(const class FString& CharaID);
	void AddAsyncLoadColorCache(const class FString& CharaID, class UREDCharaAsset* Asset);
	class UREDCharaAsset* SearchAsyncLoadCharaCache(const class FString& CharaID);
	void AddAsyncLoadCharaCache(const class FString& CharaID, class UREDCharaAsset* Asset);
	void ChangeBGColor(int32_t Index);
	void eventOnClose();
	void OnInitialize();
	EUE_SCENE_ID SetNetworkNextScene();
	class FString eventGetSelectCharaID(EUE_PLAYER_ID Player);
	void ReqGarbageCollection();
};

// Class REDGame.REDGfxMoviePlayer_MenuStyleSelect
// 0x0058 (0x01BC - 0x0214)
class UREDGfxMoviePlayer_MenuStyleSelect : public UREDGfxMoviePlayer_MenuCharaSelectBase
{
public:
	struct FStyleSelect_PlayerInfo                     PlayerInfo[2];                                 // 0x01BC (0x0048) [0x0000000000000000]               
	class TArray<struct FStyleSelect_ButtonInfo>       ButtonInfo;                                    // 0x0204 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bNetworkMode : 1;                              // 0x0210 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBannedStylish : 1;                            // 0x0210 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuStyleSelect");
		}

		return uClassPointer;
	};

	void OnUpdate(bool bTrigger);
	void UpdateKeyConfig(EUE_PLAYER_ID Player, bool bTrigger);
	void UpdateButtonSelect(EUE_PLAYER_ID Player, bool bTrigger);
	void SetupButtonSelect_haichi(EUE_PLAYER_ID Player);
	void UpdateButtonSelectConfirm(EUE_PLAYER_ID Player, bool bTrigger);
	void UpdateStyleSelect(EUE_PLAYER_ID Player, bool bTrigger);
	void UpdateSkipAll(EUE_PLAYER_ID Player, bool bTrigger);
	void SetCancel(EUE_PLAYER_ID Player);
	void SetForceDecide(EUE_PLAYER_ID Player);
	bool IsStylishMode(EUE_PLAYER_ID Player);
	bool IsCancel(EUE_PLAYER_ID Player);
	bool IsActive(EUE_PLAYER_ID Player);
	void StartSelect(EUE_PLAYER_ID Player, EUE_PLAYER_ID operatePlayer, bool isNetworkMode, bool isBannedStylish);
	void StartSkipAll(EUE_PLAYER_ID Player);
	void SetupData(EUE_PLAYER_ID Player, bool optionalBUsePrevData);
	void OnInitialize();
	bool Start(bool optionalStartPaused);
	class FString KeyConfigTypeToA(int32_t In);
	class FString IntToA(int32_t In);
	void EndAnim(EUE_PLAYER_ID Player);
	ESTYLE_SELECT_STATE GetPlayerState(EUE_PLAYER_ID Player);
	void SetPlayerState(EUE_PLAYER_ID Player, ESTYLE_SELECT_STATE State);
	bool IsCancelTrig(EUE_PLAYER_ID Player);
};

// Class REDGame.REDGfxMoviePlayer_MenuMOMMedal
// 0x0020 (0x01B4 - 0x01D4)
class UREDGfxMoviePlayer_MenuMOMMedal : public UREDGfxMoviePlayer_Menu_Base
{
public:
	float                                              BasePosY[3];                                   // 0x01B4 (0x000C) [0x0000000000000000]               
	float                                              baseRate;                                      // 0x01C0 (0x0004) [0x0000000000000000]               
	float                                              targetRate;                                    // 0x01C4 (0x0004) [0x0000000000000000]               
	int32_t                                            AnimCounter;                                   // 0x01C8 (0x0004) [0x0000000000000000]               
	int32_t                                            AnimCounterMax;                                // 0x01CC (0x0004) [0x0000000000000000]               
	int32_t                                            AnimDelay;                                     // 0x01D0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuMOMMedal");
		}

		return uClassPointer;
	};

	void OnUpdate(bool bTrigger);
	void StartMedal(EUE_PLAYER_ID Player, float Base, float Target, int32_t volumeLevel);
	void SetMedalRate(float Rate);
	void OnInitialize();
	bool Start(bool optionalStartPaused);
};

// Class REDGame.REDGfxMoviePlayer_MenuNews
// 0x0000 (0x01B4 - 0x01B4)
class UREDGfxMoviePlayer_MenuNews : public UREDGfxMoviePlayer_Menu_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuNews");
		}

		return uClassPointer;
	};

	void OnUpdate(bool bTrigger);
	void OnInitialize();
};

// Class REDGame.REDGfxMoviePlayer_MenuStageIntro
// 0x0000 (0x01B4 - 0x01B4)
class UREDGfxMoviePlayer_MenuStageIntro : public UREDGfxMoviePlayer_Menu_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_MenuStageIntro");
		}

		return uClassPointer;
	};

	void OnUpdate(bool bTrigger);
	void UpdateMain(bool bTrigger);
	void OnInitialize();
};

// Class REDGame.REDGfxMoviePlayer_PauseMenu
// 0x0004 (0x01B4 - 0x01B8)
class UREDGfxMoviePlayer_PauseMenu : public UREDGfxMoviePlayer_Menu_Base
{
public:
	uint32_t                                           bIsVisible : 1;                                // 0x01B4 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDGfxMoviePlayer_PauseMenu");
		}

		return uClassPointer;
	};

	void UnPauseGame();
	void eventOnClose();
	void UpdatePauseMenu(float DeltaTime);
	bool ActivatePauseScene();
	void Init(class ULocalPlayer* optionalPlayer);
};

// Class REDGame.REDLobbyCollisionActor_Circle2
// 0x0000 (0x01D0 - 0x01D0)
class AREDLobbyCollisionActor_Circle2 : public AREDLobbyCollisionActor_Circle
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDLobbyCollisionActor_Circle2");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDLobbyCollisionActor_Wall2
// 0x0000 (0x01D0 - 0x01D0)
class AREDLobbyCollisionActor_Wall2 : public AREDLobbyCollisionActor_Wall
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDLobbyCollisionActor_Wall2");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDPlayerInput
// 0x0000 (0x0260 - 0x0260)
class UREDPlayerInput : public UPlayerInput
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPlayerInput");
		}

		return uClassPointer;
	};

	void Jump();
	void eventPlayerInput(float DeltaTime);
};

// Class REDGame.REDPortal
// 0x0000 (0x01E8 - 0x01E8)
class AREDPortal : public APortalTeleporter
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDPortal");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_EntryEventStart
// 0x0008 (0x0114 - 0x011C)
class UREDSeqEvent_EntryEventStart : public USequenceEvent
{
public:
	class APawn*                                       PlayerPawn;                                    // 0x0114 (0x0004) [0x0000000000000000]               
	class APawn*                                       EnemyPawn;                                     // 0x0118 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_EntryEventStart");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_BGEventStart
// 0x0000 (0x0114 - 0x0114)
class UREDSeqEvent_BGEventStart : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_BGEventStart");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_BGEffectAttack
// 0x0000 (0x0150 - 0x0150)
class UREDSeqEvent_BGEffectAttack : public UREDSeqEvent_BGEffect
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_BGEffectAttack");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_BGEffectDamage
// 0x0000 (0x0150 - 0x0150)
class UREDSeqEvent_BGEffectDamage : public UREDSeqEvent_BGEffect
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_BGEffectDamage");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_BGEffectDown
// 0x0000 (0x0150 - 0x0150)
class UREDSeqEvent_BGEffectDown : public UREDSeqEvent_BGEffect
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_BGEffectDown");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_BGEffectPosition
// 0x0014 (0x0150 - 0x0164)
class UREDSeqEvent_BGEffectPosition : public UREDSeqEvent_BGEffect
{
public:
	EUE_PLAYER_ID                                      TargetPlayer;                                  // 0x0150 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bPrevActivated : 1;                            // 0x0154 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<int32_t>                              ActivateIndices;                               // 0x0158 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_BGEffectPosition");
		}

		return uClassPointer;
	};

	bool ActivateFunction(class AActor* InOriginator, bool bActivate);
};

// Class REDGame.REDSeqEvent_BGEffectShakeFloor
// 0x0000 (0x0150 - 0x0150)
class UREDSeqEvent_BGEffectShakeFloor : public UREDSeqEvent_BGEffect
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_BGEffectShakeFloor");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_PlayerBase
// 0x0014 (0x0114 - 0x0128)
class UREDSeqEvent_PlayerBase : public USequenceEvent
{
public:
	class APawn*                                       PlayerPawn;                                    // 0x0114 (0x0004) [0x0000000000000000]               
	class APawn*                                       EnemyPawn;                                     // 0x0118 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              ActivateIndices;                               // 0x011C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_PlayerBase");
		}

		return uClassPointer;
	};

	void SetParam(int32_t Param0, int32_t Param1, int32_t Param2);
	bool IsActivatable(int32_t Param0, int32_t Param1, int32_t Param2);
};

// Class REDGame.REDSeqEvent_PlayerBattleStart
// 0x0000 (0x0128 - 0x0128)
class UREDSeqEvent_PlayerBattleStart : public UREDSeqEvent_PlayerBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_PlayerBattleStart");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_PlayerDraw
// 0x0004 (0x0128 - 0x012C)
class UREDSeqEvent_PlayerDraw : public UREDSeqEvent_PlayerBase
{
public:
	uint32_t                                           bMatchEndOnly : 1;                             // 0x0128 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIgnoreTimeup : 1;                             // 0x0128 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_PlayerDraw");
		}

		return uClassPointer;
	};

	bool IsActivatable(int32_t Param0, int32_t Param1, int32_t Param2);
};

// Class REDGame.REDSeqEvent_PlayerKakusei
// 0x0000 (0x0128 - 0x0128)
class UREDSeqEvent_PlayerKakusei : public UREDSeqEvent_PlayerBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_PlayerKakusei");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_PlayerLose
// 0x0004 (0x0128 - 0x012C)
class UREDSeqEvent_PlayerLose : public UREDSeqEvent_PlayerBase
{
public:
	uint32_t                                           bMatchEndOnly : 1;                             // 0x0128 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIgnoreTimeup : 1;                             // 0x0128 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_PlayerLose");
		}

		return uClassPointer;
	};

	bool IsActivatable(int32_t Param0, int32_t Param1, int32_t Param2);
};

// Class REDGame.REDSeqEvent_PlayerMatchResult
// 0x0000 (0x0128 - 0x0128)
class UREDSeqEvent_PlayerMatchResult : public UREDSeqEvent_PlayerBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_PlayerMatchResult");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_PlayerMatchWin
// 0x0000 (0x0128 - 0x0128)
class UREDSeqEvent_PlayerMatchWin : public UREDSeqEvent_PlayerBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_PlayerMatchWin");
		}

		return uClassPointer;
	};

};

// Class REDGame.REDSeqEvent_PlayerRightOrLeft
// 0x000C (0x0128 - 0x0134)
class UREDSeqEvent_PlayerRightOrLeft : public UREDSeqEvent_PlayerBase
{
public:
	class AActor*                                      TargetActor;                                   // 0x0128 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MarginWidth;                                   // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Direction;                                     // 0x0130 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_PlayerRightOrLeft");
		}

		return uClassPointer;
	};

	void eventActivated();
	bool IsActivatable(int32_t Param0, int32_t Param1, int32_t Param2);
};

// Class REDGame.REDSeqEvent_PlayerRoundChange
// 0x0008 (0x0128 - 0x0130)
class UREDSeqEvent_PlayerRoundChange : public UREDSeqEvent_PlayerBase
{
public:
	int32_t                                            roundNum;                                      // 0x0128 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ActivatedRound;                                // 0x012C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_PlayerRoundChange");
		}

		return uClassPointer;
	};

	bool IsActivatable(int32_t Param0, int32_t Param1, int32_t Param2);
};

// Class REDGame.REDSeqEvent_PlayerWin
// 0x0004 (0x0128 - 0x012C)
class UREDSeqEvent_PlayerWin : public UREDSeqEvent_PlayerBase
{
public:
	uint32_t                                           bMatchEndOnly : 1;                             // 0x0128 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIgnoreTimeup : 1;                             // 0x0128 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGame.REDSeqEvent_PlayerWin");
		}

		return uClassPointer;
	};

	bool IsActivatable(int32_t Param0, int32_t Param1, int32_t Param2);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
