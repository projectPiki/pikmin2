#include "string.h"
#include "System.h"
#include "Dolphin/print.h"
#include "Game/GameConfig.h"

// TODO: How is this string actually (not) used?
DEFINE__PRINT("gameConfig");
static void fakeMatch_printGameConfig()
{
	printf("gameConfig");
}

namespace Game {

GameConfig gGameConfig;

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
// void GameConfig::setConstSetting()
// {
// 	// UNUSED FUNCTION
// }

/**
 * __ct__Q24Game10GameConfigFv
 * @note Address: 0x80432170
 * @note Size: 0x130
 */
GameConfig::GameConfig()
    : mParms()
{
#if MATCHING
	// I suspect the double-loading might be from an earlier revision of the
	// parms....
	mParms.mGamePrint.mData      = 0;
	mParms.mPrint.mData          = 0;
	mParms.mOgawaPrint.mData     = 0;
	mParms.mShimizuPrint.mData   = 0;
	mParms.mYamashitaPrint.mData = 0;
	mParms.mKandoPrint.mData     = 0;
	mParms.mNishimuraPrint.mData = 0;
	mParms.mMorimuraPrint.mData  = 0;
	mParms.mEbisawaPrint.mData   = 0;
	mParms.mPsoundPrint.mData    = 0;
	mParms.mShortCutUp.mData     = -1;
	mParms.mShortCutDown.mData   = -1;
	mParms.mShortCutLeft.mData   = -1;
	mParms.mShortCutRight.mData  = -1;
	mParms.mAllocAllEnemy.mData  = 0;
	mParms.mAI.mData             = 0;
#if defined(VERSION_JP)
	mParms.mE3version.mData = 0;
#endif
	mParms.mTimers.mData           = 0;
	mParms.mMukki_cherry.mData     = 0;
	mParms.mMarioClubDevelop.mData = 0;
	mParms.mHeapStatusPrint.mData  = 0;
	mParms.mPublicity.mData        = 1;
	mParms.mMapparts_path.mData    = "";
	mParms.mPelletMultiLang.mData  = 1;
	mParms.mVsTest.mData           = 0;
#if defined(VERSION_JP)
	mParms.mHeapFreeSize.mData = 1;
#endif
#endif
	mParms.mAutosaveOff.mData      = 0;
	mParms.mGamePrint.mData        = 0;
	mParms.mPrint.mData            = 0;
	mParms.mOgawaPrint.mData       = 0;
	mParms.mShimizuPrint.mData     = 0;
	mParms.mYamashitaPrint.mData   = 0;
	mParms.mKandoPrint.mData       = 0;
	mParms.mNishimuraPrint.mData   = 0;
	mParms.mMorimuraPrint.mData    = 0;
	mParms.mEbisawaPrint.mData     = 0;
	mParms.mPsoundPrint.mData      = 0;
	mParms.mShortCutUp.mData       = -1;
	mParms.mShortCutDown.mData     = -1;
	mParms.mShortCutLeft.mData     = -1;
	mParms.mShortCutRight.mData    = -1;
	mParms.mAllocAllEnemy.mData    = 0;
	mParms.mAI.mData               = 0;
	mParms.mE3version.mData        = 0;
	mParms.mTimers.mData           = 0;
	mParms.mMukki_cherry.mData     = 0;
	mParms.mMarioClubDevelop.mData = 0;
	mParms.mHeapStatusPrint.mData  = 0;
	mParms.mPublicity.mData        = 1;
	mParms.mMapparts_path.mData    = "";
	mParms.mLanguage.mData         = "";
	mParms.mPelletMultiLang.mData  = 1;
	mParms.mVsTest.mData           = 0;
	mParms.mHeapFreeSize.mData     = 1;
	mParms.mKFesVersion.mData      = 0;
#if defined(VERSION_US_DEMO)
	mParms.mNintendoVersion.mData = 1;
#else
	mParms.mNintendoVersion.mData = 0;
#endif
	mParms.mVsDeathType.mData          = 1;
	mParms.mVsHiba.mData               = 0;
	mParms.mVsY.mData                  = 0;
	mParms.mBaseGameNewCheck.mData     = 0;
	mParms.mVsDebugSelectPattern.mData = 0;
	mParms.mVsFifo.mData               = 0;
}

/**
 * @note Address: 0x80432770
 * @note Size: 0x128
 */
bool GameConfig::load(char*)
{
	if (strcmp(gGameConfig.mParms.mLanguage.mData, "eng") == 0) {
#if defined(VERSION_PAL)
		sys->setLanguage(System::LANG_English);
#else
		sys->mRegion = System::LANG_English;
#endif
	} else if (strcmp(gGameConfig.mParms.mLanguage.mData, "fra") == 0) {
#if defined(VERSION_PAL)
		sys->setLanguage(System::LANG_French);
#else
		sys->mRegion = System::LANG_French;
#endif
	} else if (strcmp(gGameConfig.mParms.mLanguage.mData, "ger") == 0) {
#if defined(VERSION_PAL)
		sys->setLanguage(System::LANG_German);
#else
		sys->mRegion = System::LANG_German;
#endif
	} else if (strcmp(gGameConfig.mParms.mLanguage.mData, "hol") == 0) {
#if defined(VERSION_PAL)
		sys->setLanguage(System::LANG_English);
#else
		sys->mRegion = System::LANG_English;
#endif
	} else if (strcmp(gGameConfig.mParms.mLanguage.mData, "ita") == 0) {
#if defined(VERSION_PAL)
		sys->setLanguage(System::LANG_Italian);
#else
		sys->mRegion = System::LANG_Italian;
#endif
	} else if (strcmp(gGameConfig.mParms.mLanguage.mData, "jpn") == 0) {
#if defined(VERSION_PAL)
		sys->setLanguage(System::LANG_Japanese);
#else
		sys->mRegion = System::LANG_Japanese;
#endif
	} else if (strcmp(gGameConfig.mParms.mLanguage.mData, "spa") == 0) {
#if defined(VERSION_PAL)
		sys->setLanguage(System::LANG_Spanish);
#else
		sys->mRegion = System::LANG_Spanish;
#endif
	}
	return false;
}

} // namespace Game
