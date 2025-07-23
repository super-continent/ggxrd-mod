/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: REDGameContent_classes.hpp
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum REDGameContent.REDGfxMovie_Battle_ChallengeResult.CHALLENGE_RESULT_STATE
enum class ECHALLENGE_RESULT_STATE : uint8_t
{
	CHALLENGE_RESULT_STATE_YOUROCK                     = 0,
	CHALLENGE_RESULT_STATE_TRY                         = 1,
	CHALLENGE_RESULT_STATE_FAILED                      = 2,
	CHALLENGE_RESULT_STATE_MISS                        = 3,
	CHALLENGE_RESULT_STATE_GOOD                        = 4,
	CHALLENGE_RESULT_STATE_END                         = 5,
	CHALLENGE_RESULT_STATE_END01                       = 6
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class REDGameContent.REDGfxMovie_Battle_ChallengeResult
// 0x000C (0x01A0 - 0x01AC)
class UREDGfxMovie_Battle_ChallengeResult : public UREDGfxMoviePlayer
{
public:
	int32_t                                            Counter;                                       // 0x01A0 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentState;                                  // 0x01A4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bCalledRankMC : 1;                             // 0x01A8 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGameContent.REDGfxMovie_Battle_ChallengeResult");
		}

		return uClassPointer;
	};

	int32_t IsAnimeEndScript();
	void Update(float DeltaTime);
	void UpdateGood();
	void UpdateMiss();
	void UpdateFailed();
	void UpdateTry();
	void UpdateYouRock();
	bool MovieStartInternal(bool StartPaused);
};

// Class REDGameContent.REDGfxMovie_Battle_Destroyed
// 0x0004 (0x01A0 - 0x01A4)
class UREDGfxMovie_Battle_Destroyed : public UREDGfxMoviePlayer
{
public:
	uint32_t                                           bVersionMAY : 1;                               // 0x01A0 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGameContent.REDGfxMovie_Battle_Destroyed");
		}

		return uClassPointer;
	};

	int32_t IsAnimeEndScript();
	bool MovieStartInternal(bool StartPaused);
};

// Class REDGameContent.REDGfxMovie_Battle_DestroyedDZY
// 0x0000 (0x01A0 - 0x01A0)
class UREDGfxMovie_Battle_DestroyedDZY : public UREDGfxMoviePlayer
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGameContent.REDGfxMovie_Battle_DestroyedDZY");
		}

		return uClassPointer;
	};

	int32_t IsAnimeEndScript();
	bool MovieStartInternal(bool StartPaused);
};

// Class REDGameContent.REDGfxMovie_Battle_DoubleKO
// 0x0000 (0x01A0 - 0x01A0)
class UREDGfxMovie_Battle_DoubleKO : public UREDGfxMoviePlayer
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGameContent.REDGfxMovie_Battle_DoubleKO");
		}

		return uClassPointer;
	};

	void Show();
	bool MovieStartInternal(bool StartPaused);
};

// Class REDGameContent.REDGfxMovie_Battle_Draw
// 0x0000 (0x01A0 - 0x01A0)
class UREDGfxMovie_Battle_Draw : public UREDGfxMoviePlayer
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGameContent.REDGfxMovie_Battle_Draw");
		}

		return uClassPointer;
	};

	void Show();
	bool MovieStartInternal(bool StartPaused);
};

// Class REDGameContent.REDGfxMovie_Battle_FinishSlash
// 0x0000 (0x01A0 - 0x01A0)
class UREDGfxMovie_Battle_FinishSlash : public UREDGfxMoviePlayer
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGameContent.REDGfxMovie_Battle_FinishSlash");
		}

		return uClassPointer;
	};

	void Show();
	bool MovieStartInternal(bool StartPaused);
};

// Class REDGameContent.REDGfxMovie_Battle_Lose
// 0x0010 (0x01A0 - 0x01B0)
class UREDGfxMovie_Battle_Lose : public UREDGfxMoviePlayer
{
public:
	int32_t                                            Counter;                                       // 0x01A0 (0x0004) [0x0000000000000000]               
	class FString                                      MainMCPath;                                    // 0x01A4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGameContent.REDGfxMovie_Battle_Lose");
		}

		return uClassPointer;
	};

	int32_t IsAnimeEndScript();
	void Update(float DeltaTime);
	void AS_PlayerLabel(const class FString& Label);
	bool MovieStartInternal(bool StartPaused);
};

// Class REDGameContent.REDGfxMovie_Battle_Perfect
// 0x0000 (0x01A0 - 0x01A0)
class UREDGfxMovie_Battle_Perfect : public UREDGfxMoviePlayer
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGameContent.REDGfxMovie_Battle_Perfect");
		}

		return uClassPointer;
	};

	void Show();
	bool MovieStartInternal(bool StartPaused);
};

// Class REDGameContent.REDGfxMovie_Battle_RoundStart
// 0x0010 (0x01A0 - 0x01B0)
class UREDGfxMovie_Battle_RoundStart : public UREDGfxMoviePlayer
{
public:
	int32_t                                            DuelSECount;                                   // 0x01A0 (0x0004) [0x0000000000000000]               
	class FString                                      RootLabel;                                     // 0x01A4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGameContent.REDGfxMovie_Battle_RoundStart");
		}

		return uClassPointer;
	};

	void Update(float DeltaTime);
	void ASCallBack_Func(const class FString& Typename);
	void AS_RootLabel(const class FString& Label);
	void ShowRoundStart(bool isHOHDisp);
	int32_t IsAnimeEndScript();
	bool MovieStartInternal(bool StartPaused);
};

// Class REDGameContent.REDGfxMovie_Battle_TestResult
// 0x0004 (0x01A0 - 0x01A4)
class UREDGfxMovie_Battle_TestResult : public UREDGfxMoviePlayer
{
public:
	int32_t                                            Counter;                                       // 0x01A0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGameContent.REDGfxMovie_Battle_TestResult");
		}

		return uClassPointer;
	};

	void Update(float DeltaTime);
	bool MovieStartInternal(bool StartPaused);
};

// Class REDGameContent.REDGfxMovie_Battle_Timeup
// 0x0000 (0x01A0 - 0x01A0)
class UREDGfxMovie_Battle_Timeup : public UREDGfxMoviePlayer
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGameContent.REDGfxMovie_Battle_Timeup");
		}

		return uClassPointer;
	};

	void Show();
	bool MovieStartInternal(bool StartPaused);
};

// Class REDGameContent.REDGfxMovie_Battle_Win
// 0x0010 (0x01A0 - 0x01B0)
class UREDGfxMovie_Battle_Win : public UREDGfxMoviePlayer
{
public:
	int32_t                                            Counter;                                       // 0x01A0 (0x0004) [0x0000000000000000]               
	class FString                                      MainMCPath;                                    // 0x01A4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class REDGameContent.REDGfxMovie_Battle_Win");
		}

		return uClassPointer;
	};

	int32_t IsAnimeEndScript();
	void Update(float DeltaTime);
	void AS_PlayerLabel(const class FString& Label);
	bool MovieStartInternal(bool StartPaused);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
