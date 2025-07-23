/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: REDGameContent_classes.cpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#include "rev2-mod/include/SdkHeaders.hpp"

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.IsAnimeEndScript
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UREDGfxMovie_Battle_ChallengeResult::IsAnimeEndScript()
{
	static UFunction* uFnIsAnimeEndScript = nullptr;

	if (!uFnIsAnimeEndScript)
	{
		uFnIsAnimeEndScript = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.IsAnimeEndScript");
	}

	UREDGfxMovie_Battle_ChallengeResult_execIsAnimeEndScript_Params IsAnimeEndScript_Params;
	memset(&IsAnimeEndScript_Params, 0, sizeof(IsAnimeEndScript_Params));

	this->ProcessEvent(uFnIsAnimeEndScript, &IsAnimeEndScript_Params, nullptr);

	return IsAnimeEndScript_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.Update
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UREDGfxMovie_Battle_ChallengeResult::Update(float DeltaTime)
{
	static UFunction* uFnUpdate = nullptr;

	if (!uFnUpdate)
	{
		uFnUpdate = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.Update");
	}

	UREDGfxMovie_Battle_ChallengeResult_execUpdate_Params Update_Params;
	memset(&Update_Params, 0, sizeof(Update_Params));
	memcpy_s(&Update_Params.DeltaTime, sizeof(Update_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnUpdate, &Update_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateGood
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMovie_Battle_ChallengeResult::UpdateGood()
{
	static UFunction* uFnUpdateGood = nullptr;

	if (!uFnUpdateGood)
	{
		uFnUpdateGood = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateGood");
	}

	UREDGfxMovie_Battle_ChallengeResult_execUpdateGood_Params UpdateGood_Params;
	memset(&UpdateGood_Params, 0, sizeof(UpdateGood_Params));

	this->ProcessEvent(uFnUpdateGood, &UpdateGood_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateMiss
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMovie_Battle_ChallengeResult::UpdateMiss()
{
	static UFunction* uFnUpdateMiss = nullptr;

	if (!uFnUpdateMiss)
	{
		uFnUpdateMiss = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateMiss");
	}

	UREDGfxMovie_Battle_ChallengeResult_execUpdateMiss_Params UpdateMiss_Params;
	memset(&UpdateMiss_Params, 0, sizeof(UpdateMiss_Params));

	this->ProcessEvent(uFnUpdateMiss, &UpdateMiss_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateFailed
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMovie_Battle_ChallengeResult::UpdateFailed()
{
	static UFunction* uFnUpdateFailed = nullptr;

	if (!uFnUpdateFailed)
	{
		uFnUpdateFailed = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateFailed");
	}

	UREDGfxMovie_Battle_ChallengeResult_execUpdateFailed_Params UpdateFailed_Params;
	memset(&UpdateFailed_Params, 0, sizeof(UpdateFailed_Params));

	this->ProcessEvent(uFnUpdateFailed, &UpdateFailed_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateTry
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMovie_Battle_ChallengeResult::UpdateTry()
{
	static UFunction* uFnUpdateTry = nullptr;

	if (!uFnUpdateTry)
	{
		uFnUpdateTry = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateTry");
	}

	UREDGfxMovie_Battle_ChallengeResult_execUpdateTry_Params UpdateTry_Params;
	memset(&UpdateTry_Params, 0, sizeof(UpdateTry_Params));

	this->ProcessEvent(uFnUpdateTry, &UpdateTry_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateYouRock
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMovie_Battle_ChallengeResult::UpdateYouRock()
{
	static UFunction* uFnUpdateYouRock = nullptr;

	if (!uFnUpdateYouRock)
	{
		uFnUpdateYouRock = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.UpdateYouRock");
	}

	UREDGfxMovie_Battle_ChallengeResult_execUpdateYouRock_Params UpdateYouRock_Params;
	memset(&UpdateYouRock_Params, 0, sizeof(UpdateYouRock_Params));

	this->ProcessEvent(uFnUpdateYouRock, &UpdateYouRock_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.MovieStartInternal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_Parm)

bool UREDGfxMovie_Battle_ChallengeResult::MovieStartInternal(bool StartPaused)
{
	static UFunction* uFnMovieStartInternal = nullptr;

	if (!uFnMovieStartInternal)
	{
		uFnMovieStartInternal = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_ChallengeResult.MovieStartInternal");
	}

	UREDGfxMovie_Battle_ChallengeResult_execMovieStartInternal_Params MovieStartInternal_Params;
	memset(&MovieStartInternal_Params, 0, sizeof(MovieStartInternal_Params));
	MovieStartInternal_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnMovieStartInternal, &MovieStartInternal_Params, nullptr);

	return MovieStartInternal_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_Destroyed.IsAnimeEndScript
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UREDGfxMovie_Battle_Destroyed::IsAnimeEndScript()
{
	static UFunction* uFnIsAnimeEndScript = nullptr;

	if (!uFnIsAnimeEndScript)
	{
		uFnIsAnimeEndScript = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Destroyed.IsAnimeEndScript");
	}

	UREDGfxMovie_Battle_Destroyed_execIsAnimeEndScript_Params IsAnimeEndScript_Params;
	memset(&IsAnimeEndScript_Params, 0, sizeof(IsAnimeEndScript_Params));

	this->ProcessEvent(uFnIsAnimeEndScript, &IsAnimeEndScript_Params, nullptr);

	return IsAnimeEndScript_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_Destroyed.MovieStartInternal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_Parm)

bool UREDGfxMovie_Battle_Destroyed::MovieStartInternal(bool StartPaused)
{
	static UFunction* uFnMovieStartInternal = nullptr;

	if (!uFnMovieStartInternal)
	{
		uFnMovieStartInternal = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Destroyed.MovieStartInternal");
	}

	UREDGfxMovie_Battle_Destroyed_execMovieStartInternal_Params MovieStartInternal_Params;
	memset(&MovieStartInternal_Params, 0, sizeof(MovieStartInternal_Params));
	MovieStartInternal_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnMovieStartInternal, &MovieStartInternal_Params, nullptr);

	return MovieStartInternal_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_DestroyedDZY.IsAnimeEndScript
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UREDGfxMovie_Battle_DestroyedDZY::IsAnimeEndScript()
{
	static UFunction* uFnIsAnimeEndScript = nullptr;

	if (!uFnIsAnimeEndScript)
	{
		uFnIsAnimeEndScript = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_DestroyedDZY.IsAnimeEndScript");
	}

	UREDGfxMovie_Battle_DestroyedDZY_execIsAnimeEndScript_Params IsAnimeEndScript_Params;
	memset(&IsAnimeEndScript_Params, 0, sizeof(IsAnimeEndScript_Params));

	this->ProcessEvent(uFnIsAnimeEndScript, &IsAnimeEndScript_Params, nullptr);

	return IsAnimeEndScript_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_DestroyedDZY.MovieStartInternal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_Parm)

bool UREDGfxMovie_Battle_DestroyedDZY::MovieStartInternal(bool StartPaused)
{
	static UFunction* uFnMovieStartInternal = nullptr;

	if (!uFnMovieStartInternal)
	{
		uFnMovieStartInternal = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_DestroyedDZY.MovieStartInternal");
	}

	UREDGfxMovie_Battle_DestroyedDZY_execMovieStartInternal_Params MovieStartInternal_Params;
	memset(&MovieStartInternal_Params, 0, sizeof(MovieStartInternal_Params));
	MovieStartInternal_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnMovieStartInternal, &MovieStartInternal_Params, nullptr);

	return MovieStartInternal_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_DoubleKO.Show
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMovie_Battle_DoubleKO::Show()
{
	static UFunction* uFnShow = nullptr;

	if (!uFnShow)
	{
		uFnShow = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_DoubleKO.Show");
	}

	UREDGfxMovie_Battle_DoubleKO_execShow_Params Show_Params;
	memset(&Show_Params, 0, sizeof(Show_Params));

	this->ProcessEvent(uFnShow, &Show_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_DoubleKO.MovieStartInternal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_Parm)

bool UREDGfxMovie_Battle_DoubleKO::MovieStartInternal(bool StartPaused)
{
	static UFunction* uFnMovieStartInternal = nullptr;

	if (!uFnMovieStartInternal)
	{
		uFnMovieStartInternal = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_DoubleKO.MovieStartInternal");
	}

	UREDGfxMovie_Battle_DoubleKO_execMovieStartInternal_Params MovieStartInternal_Params;
	memset(&MovieStartInternal_Params, 0, sizeof(MovieStartInternal_Params));
	MovieStartInternal_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnMovieStartInternal, &MovieStartInternal_Params, nullptr);

	return MovieStartInternal_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_Draw.Show
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMovie_Battle_Draw::Show()
{
	static UFunction* uFnShow = nullptr;

	if (!uFnShow)
	{
		uFnShow = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Draw.Show");
	}

	UREDGfxMovie_Battle_Draw_execShow_Params Show_Params;
	memset(&Show_Params, 0, sizeof(Show_Params));

	this->ProcessEvent(uFnShow, &Show_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_Draw.MovieStartInternal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_Parm)

bool UREDGfxMovie_Battle_Draw::MovieStartInternal(bool StartPaused)
{
	static UFunction* uFnMovieStartInternal = nullptr;

	if (!uFnMovieStartInternal)
	{
		uFnMovieStartInternal = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Draw.MovieStartInternal");
	}

	UREDGfxMovie_Battle_Draw_execMovieStartInternal_Params MovieStartInternal_Params;
	memset(&MovieStartInternal_Params, 0, sizeof(MovieStartInternal_Params));
	MovieStartInternal_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnMovieStartInternal, &MovieStartInternal_Params, nullptr);

	return MovieStartInternal_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_FinishSlash.Show
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMovie_Battle_FinishSlash::Show()
{
	static UFunction* uFnShow = nullptr;

	if (!uFnShow)
	{
		uFnShow = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_FinishSlash.Show");
	}

	UREDGfxMovie_Battle_FinishSlash_execShow_Params Show_Params;
	memset(&Show_Params, 0, sizeof(Show_Params));

	this->ProcessEvent(uFnShow, &Show_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_FinishSlash.MovieStartInternal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_Parm)

bool UREDGfxMovie_Battle_FinishSlash::MovieStartInternal(bool StartPaused)
{
	static UFunction* uFnMovieStartInternal = nullptr;

	if (!uFnMovieStartInternal)
	{
		uFnMovieStartInternal = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_FinishSlash.MovieStartInternal");
	}

	UREDGfxMovie_Battle_FinishSlash_execMovieStartInternal_Params MovieStartInternal_Params;
	memset(&MovieStartInternal_Params, 0, sizeof(MovieStartInternal_Params));
	MovieStartInternal_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnMovieStartInternal, &MovieStartInternal_Params, nullptr);

	return MovieStartInternal_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_Lose.IsAnimeEndScript
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UREDGfxMovie_Battle_Lose::IsAnimeEndScript()
{
	static UFunction* uFnIsAnimeEndScript = nullptr;

	if (!uFnIsAnimeEndScript)
	{
		uFnIsAnimeEndScript = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Lose.IsAnimeEndScript");
	}

	UREDGfxMovie_Battle_Lose_execIsAnimeEndScript_Params IsAnimeEndScript_Params;
	memset(&IsAnimeEndScript_Params, 0, sizeof(IsAnimeEndScript_Params));

	this->ProcessEvent(uFnIsAnimeEndScript, &IsAnimeEndScript_Params, nullptr);

	return IsAnimeEndScript_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_Lose.Update
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UREDGfxMovie_Battle_Lose::Update(float DeltaTime)
{
	static UFunction* uFnUpdate = nullptr;

	if (!uFnUpdate)
	{
		uFnUpdate = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Lose.Update");
	}

	UREDGfxMovie_Battle_Lose_execUpdate_Params Update_Params;
	memset(&Update_Params, 0, sizeof(Update_Params));
	memcpy_s(&Update_Params.DeltaTime, sizeof(Update_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnUpdate, &Update_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_Lose.AS_PlayerLabel
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Label                          (CPF_Parm | CPF_NeedCtorLink)

void UREDGfxMovie_Battle_Lose::AS_PlayerLabel(const class FString& Label)
{
	static UFunction* uFnAS_PlayerLabel = nullptr;

	if (!uFnAS_PlayerLabel)
	{
		uFnAS_PlayerLabel = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Lose.AS_PlayerLabel");
	}

	UREDGfxMovie_Battle_Lose_execAS_PlayerLabel_Params AS_PlayerLabel_Params;
	memset(&AS_PlayerLabel_Params, 0, sizeof(AS_PlayerLabel_Params));
	memcpy_s(&AS_PlayerLabel_Params.Label, sizeof(AS_PlayerLabel_Params.Label), &Label, sizeof(Label));

	this->ProcessEvent(uFnAS_PlayerLabel, &AS_PlayerLabel_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_Lose.MovieStartInternal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_Parm)

bool UREDGfxMovie_Battle_Lose::MovieStartInternal(bool StartPaused)
{
	static UFunction* uFnMovieStartInternal = nullptr;

	if (!uFnMovieStartInternal)
	{
		uFnMovieStartInternal = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Lose.MovieStartInternal");
	}

	UREDGfxMovie_Battle_Lose_execMovieStartInternal_Params MovieStartInternal_Params;
	memset(&MovieStartInternal_Params, 0, sizeof(MovieStartInternal_Params));
	MovieStartInternal_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnMovieStartInternal, &MovieStartInternal_Params, nullptr);

	return MovieStartInternal_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_Perfect.Show
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMovie_Battle_Perfect::Show()
{
	static UFunction* uFnShow = nullptr;

	if (!uFnShow)
	{
		uFnShow = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Perfect.Show");
	}

	UREDGfxMovie_Battle_Perfect_execShow_Params Show_Params;
	memset(&Show_Params, 0, sizeof(Show_Params));

	this->ProcessEvent(uFnShow, &Show_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_Perfect.MovieStartInternal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_Parm)

bool UREDGfxMovie_Battle_Perfect::MovieStartInternal(bool StartPaused)
{
	static UFunction* uFnMovieStartInternal = nullptr;

	if (!uFnMovieStartInternal)
	{
		uFnMovieStartInternal = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Perfect.MovieStartInternal");
	}

	UREDGfxMovie_Battle_Perfect_execMovieStartInternal_Params MovieStartInternal_Params;
	memset(&MovieStartInternal_Params, 0, sizeof(MovieStartInternal_Params));
	MovieStartInternal_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnMovieStartInternal, &MovieStartInternal_Params, nullptr);

	return MovieStartInternal_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_RoundStart.Update
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UREDGfxMovie_Battle_RoundStart::Update(float DeltaTime)
{
	static UFunction* uFnUpdate = nullptr;

	if (!uFnUpdate)
	{
		uFnUpdate = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_RoundStart.Update");
	}

	UREDGfxMovie_Battle_RoundStart_execUpdate_Params Update_Params;
	memset(&Update_Params, 0, sizeof(Update_Params));
	memcpy_s(&Update_Params.DeltaTime, sizeof(Update_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnUpdate, &Update_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_RoundStart.ASCallBack_Func
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Typename                       (CPF_Parm | CPF_NeedCtorLink)

void UREDGfxMovie_Battle_RoundStart::ASCallBack_Func(const class FString& Typename)
{
	static UFunction* uFnASCallBack_Func = nullptr;

	if (!uFnASCallBack_Func)
	{
		uFnASCallBack_Func = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_RoundStart.ASCallBack_Func");
	}

	UREDGfxMovie_Battle_RoundStart_execASCallBack_Func_Params ASCallBack_Func_Params;
	memset(&ASCallBack_Func_Params, 0, sizeof(ASCallBack_Func_Params));
	memcpy_s(&ASCallBack_Func_Params.Typename, sizeof(ASCallBack_Func_Params.Typename), &Typename, sizeof(Typename));

	this->ProcessEvent(uFnASCallBack_Func, &ASCallBack_Func_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_RoundStart.AS_RootLabel
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Label                          (CPF_Parm | CPF_NeedCtorLink)

void UREDGfxMovie_Battle_RoundStart::AS_RootLabel(const class FString& Label)
{
	static UFunction* uFnAS_RootLabel = nullptr;

	if (!uFnAS_RootLabel)
	{
		uFnAS_RootLabel = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_RoundStart.AS_RootLabel");
	}

	UREDGfxMovie_Battle_RoundStart_execAS_RootLabel_Params AS_RootLabel_Params;
	memset(&AS_RootLabel_Params, 0, sizeof(AS_RootLabel_Params));
	memcpy_s(&AS_RootLabel_Params.Label, sizeof(AS_RootLabel_Params.Label), &Label, sizeof(Label));

	this->ProcessEvent(uFnAS_RootLabel, &AS_RootLabel_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_RoundStart.ShowRoundStart
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       isHOHDisp                      (CPF_Parm)

void UREDGfxMovie_Battle_RoundStart::ShowRoundStart(bool isHOHDisp)
{
	static UFunction* uFnShowRoundStart = nullptr;

	if (!uFnShowRoundStart)
	{
		uFnShowRoundStart = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_RoundStart.ShowRoundStart");
	}

	UREDGfxMovie_Battle_RoundStart_execShowRoundStart_Params ShowRoundStart_Params;
	memset(&ShowRoundStart_Params, 0, sizeof(ShowRoundStart_Params));
	ShowRoundStart_Params.isHOHDisp = isHOHDisp;

	this->ProcessEvent(uFnShowRoundStart, &ShowRoundStart_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_RoundStart.IsAnimeEndScript
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UREDGfxMovie_Battle_RoundStart::IsAnimeEndScript()
{
	static UFunction* uFnIsAnimeEndScript = nullptr;

	if (!uFnIsAnimeEndScript)
	{
		uFnIsAnimeEndScript = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_RoundStart.IsAnimeEndScript");
	}

	UREDGfxMovie_Battle_RoundStart_execIsAnimeEndScript_Params IsAnimeEndScript_Params;
	memset(&IsAnimeEndScript_Params, 0, sizeof(IsAnimeEndScript_Params));

	this->ProcessEvent(uFnIsAnimeEndScript, &IsAnimeEndScript_Params, nullptr);

	return IsAnimeEndScript_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_RoundStart.MovieStartInternal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_Parm)

bool UREDGfxMovie_Battle_RoundStart::MovieStartInternal(bool StartPaused)
{
	static UFunction* uFnMovieStartInternal = nullptr;

	if (!uFnMovieStartInternal)
	{
		uFnMovieStartInternal = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_RoundStart.MovieStartInternal");
	}

	UREDGfxMovie_Battle_RoundStart_execMovieStartInternal_Params MovieStartInternal_Params;
	memset(&MovieStartInternal_Params, 0, sizeof(MovieStartInternal_Params));
	MovieStartInternal_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnMovieStartInternal, &MovieStartInternal_Params, nullptr);

	return MovieStartInternal_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_TestResult.Update
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UREDGfxMovie_Battle_TestResult::Update(float DeltaTime)
{
	static UFunction* uFnUpdate = nullptr;

	if (!uFnUpdate)
	{
		uFnUpdate = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_TestResult.Update");
	}

	UREDGfxMovie_Battle_TestResult_execUpdate_Params Update_Params;
	memset(&Update_Params, 0, sizeof(Update_Params));
	memcpy_s(&Update_Params.DeltaTime, sizeof(Update_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnUpdate, &Update_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_TestResult.MovieStartInternal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_Parm)

bool UREDGfxMovie_Battle_TestResult::MovieStartInternal(bool StartPaused)
{
	static UFunction* uFnMovieStartInternal = nullptr;

	if (!uFnMovieStartInternal)
	{
		uFnMovieStartInternal = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_TestResult.MovieStartInternal");
	}

	UREDGfxMovie_Battle_TestResult_execMovieStartInternal_Params MovieStartInternal_Params;
	memset(&MovieStartInternal_Params, 0, sizeof(MovieStartInternal_Params));
	MovieStartInternal_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnMovieStartInternal, &MovieStartInternal_Params, nullptr);

	return MovieStartInternal_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_Timeup.Show
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMovie_Battle_Timeup::Show()
{
	static UFunction* uFnShow = nullptr;

	if (!uFnShow)
	{
		uFnShow = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Timeup.Show");
	}

	UREDGfxMovie_Battle_Timeup_execShow_Params Show_Params;
	memset(&Show_Params, 0, sizeof(Show_Params));

	this->ProcessEvent(uFnShow, &Show_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_Timeup.MovieStartInternal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_Parm)

bool UREDGfxMovie_Battle_Timeup::MovieStartInternal(bool StartPaused)
{
	static UFunction* uFnMovieStartInternal = nullptr;

	if (!uFnMovieStartInternal)
	{
		uFnMovieStartInternal = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Timeup.MovieStartInternal");
	}

	UREDGfxMovie_Battle_Timeup_execMovieStartInternal_Params MovieStartInternal_Params;
	memset(&MovieStartInternal_Params, 0, sizeof(MovieStartInternal_Params));
	MovieStartInternal_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnMovieStartInternal, &MovieStartInternal_Params, nullptr);

	return MovieStartInternal_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_Win.IsAnimeEndScript
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UREDGfxMovie_Battle_Win::IsAnimeEndScript()
{
	static UFunction* uFnIsAnimeEndScript = nullptr;

	if (!uFnIsAnimeEndScript)
	{
		uFnIsAnimeEndScript = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Win.IsAnimeEndScript");
	}

	UREDGfxMovie_Battle_Win_execIsAnimeEndScript_Params IsAnimeEndScript_Params;
	memset(&IsAnimeEndScript_Params, 0, sizeof(IsAnimeEndScript_Params));

	this->ProcessEvent(uFnIsAnimeEndScript, &IsAnimeEndScript_Params, nullptr);

	return IsAnimeEndScript_Params.ReturnValue;
};

// Function REDGameContent.REDGfxMovie_Battle_Win.Update
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UREDGfxMovie_Battle_Win::Update(float DeltaTime)
{
	static UFunction* uFnUpdate = nullptr;

	if (!uFnUpdate)
	{
		uFnUpdate = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Win.Update");
	}

	UREDGfxMovie_Battle_Win_execUpdate_Params Update_Params;
	memset(&Update_Params, 0, sizeof(Update_Params));
	memcpy_s(&Update_Params.DeltaTime, sizeof(Update_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnUpdate, &Update_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_Win.AS_PlayerLabel
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Label                          (CPF_Parm | CPF_NeedCtorLink)

void UREDGfxMovie_Battle_Win::AS_PlayerLabel(const class FString& Label)
{
	static UFunction* uFnAS_PlayerLabel = nullptr;

	if (!uFnAS_PlayerLabel)
	{
		uFnAS_PlayerLabel = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Win.AS_PlayerLabel");
	}

	UREDGfxMovie_Battle_Win_execAS_PlayerLabel_Params AS_PlayerLabel_Params;
	memset(&AS_PlayerLabel_Params, 0, sizeof(AS_PlayerLabel_Params));
	memcpy_s(&AS_PlayerLabel_Params.Label, sizeof(AS_PlayerLabel_Params.Label), &Label, sizeof(Label));

	this->ProcessEvent(uFnAS_PlayerLabel, &AS_PlayerLabel_Params, nullptr);
};

// Function REDGameContent.REDGfxMovie_Battle_Win.MovieStartInternal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_Parm)

bool UREDGfxMovie_Battle_Win::MovieStartInternal(bool StartPaused)
{
	static UFunction* uFnMovieStartInternal = nullptr;

	if (!uFnMovieStartInternal)
	{
		uFnMovieStartInternal = UFunction::FindFunction("Function REDGameContent.REDGfxMovie_Battle_Win.MovieStartInternal");
	}

	UREDGfxMovie_Battle_Win_execMovieStartInternal_Params MovieStartInternal_Params;
	memset(&MovieStartInternal_Params, 0, sizeof(MovieStartInternal_Params));
	MovieStartInternal_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnMovieStartInternal, &MovieStartInternal_Params, nullptr);

	return MovieStartInternal_Params.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
