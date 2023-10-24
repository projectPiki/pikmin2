#include "string.h"
#include "System.h"
#include "Dolphin/print.h"
#include "Game/GameConfig.h"

// TODO: How is this string actually (not) used?
DEFINE__PRINT("gameConfig");
void fakeMatch_printGameConfig() { printf("gameConfig"); }

namespace Game {

GameConfig gGameConfig;

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
// void GameConfig::setConstSetting()
// {
// 	// UNUSED FUNCTION
// }

/*
 * __ct__Q24Game10GameConfigFv
 * --INFO--
 * Address:	80432170
 * Size:	000130
 */
GameConfig::GameConfig()
    : mParms()
{
#if MATCHING
	// I suspect the double-loading might be from an earlier revision of the
	// parms....
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
	mParms.mTimers.mData           = 0;
	mParms.mMukki_cherry.mData     = 0;
	mParms.mMarioClubDevelop.mData = 0;
	mParms.mHeapStatusPrint.mData  = 0;
	mParms.mPublicity.mData        = 1;
	mParms.mMapparts_path.mData    = "";
	mParms.mPelletMultiLang.mData  = 1;
	mParms.mVsTest.mData           = 0;
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
#if BUILDTARGET == USAFINAL
	mParms.mNintendoVersion.mData = 0;
#elif BUILDTARGET == USADEMO1
	mParms.mNintendoVersion.mData = 1;
#endif
	mParms.mVsDeathType.mData          = 1;
	mParms.mVsHiba.mData               = 0;
	mParms.mVsY.mData                  = 0;
	mParms.mBaseGameNewCheck.mData     = 0;
	mParms.mVsDebugSelectPattern.mData = 0;
	mParms.mVsFifo.mData               = 0;
}

/*
 * --INFO--
 * Address:	804322A0
 * Size:	000070
 */
// WEAK - in header.
// GameConfig::Parms::~Parms() { }

/*
 * __ct__Q34Game10GameConfig5ParmsFv
 * --INFO--
 * Address:	80432310
 * Size:	000460
 */
// WEAK - in header.
// GameConfig::Parms::Parms()
//     : TagParameters("GameConfig")
//     , mGamePrint(this, "gamePrint")
//     , mPrint(this, "Print")
//     , mOgawaPrint(this, "ogawaPrint")
//     , mShimizuPrint(this, "shimizuPrint")
//     , mYamashitaPrint(this, "yamashitaPrint")
//     , mKandoPrint(this, "kandoPrint")
//     , mNishimuraPrint(this, "nishimuraPrint")
//     , mEbisawaPrint(this, "ebisawaPrint")
//     , mMorimuraPrint(this, "morimuraPrint")
//     , mKonoPrint(this, "konoPrint")
//     , mFujinoPrint(this, "fujinoPrint")
//     , mPsoundPrint(this, "psoundPrint")
//     , mShortCutUp(this, "shortCutUp")
//     , mShortCutDown(this, "shortCutDown")
//     , mShortCutLeft(this, "shortCutLeft")
//     , mShortCutRight(this, "shortCutRight")
//     , mAllocAllEnemy(this, "allocAllEnemy")
//     , mMapparts_path(this, "mapparts_path")
//     , mPublicity(this, "publicity")
//     , mPelletMultiLang(this, "pelletMultiLang")
//     , mAI(this, "AI")
//     , mTimers(this, "timers")
//     , mVsTest(this, "vsTest")
//     , mVsDeathType(this, "vsDeathType")
//     , mVsHiba(this, "vsHiba")
//     , mVsY(this, "vsY")
//     , mE3version(this, "E3version")
//     , mMukki_cherry(this, "mukki_cherry")
//     , mMarioClubDevelop(this, "marioClubDevelop")
//     , mHeapStatusPrint(this, "heapStatusPrint")
//     , mHeapFreeSize(this, "heapFreeSize")
//     , mBaseGameNewCheck(this, "baseGameNewCheck")
//     , mKFesVersion(this, "KFesVersion")
//     , mNintendoVersion(this, "nintendoVersion")
//     , mLanguage(this, "language")
//     , mAutosaveOff(this, "autosaveOff")
//     , mVsDebugSelectPattern(this, "vsDebugSelectPattern")
//     , mVsFifo(this, "vsFifo")
// {
// }

/*
 * --INFO--
 * Address:	80432770
 * Size:	000128
 */
bool GameConfig::load(char*)
{
	if (strcmp(gGameConfig.mParms.mLanguage.mData, "eng") == 0) {
		sys->mRegion = System::LANG_ENGLISH;
	} else if (strcmp(gGameConfig.mParms.mLanguage.mData, "fra") == 0) {
		sys->mRegion = System::LANG_FRENCH;
	} else if (strcmp(gGameConfig.mParms.mLanguage.mData, "ger") == 0) {
		sys->mRegion = System::LANG_GERMAN;
	} else if (strcmp(gGameConfig.mParms.mLanguage.mData, "hol") == 0) {
		sys->mRegion = System::LANG_ENGLISH;
	} else if (strcmp(gGameConfig.mParms.mLanguage.mData, "ita") == 0) {
		sys->mRegion = System::LANG_ITALIAN;
	} else if (strcmp(gGameConfig.mParms.mLanguage.mData, "jpn") == 0) {
		sys->mRegion = System::LANG_JAPANESE;
	} else if (strcmp(gGameConfig.mParms.mLanguage.mData, "spa") == 0) {
		sys->mRegion = System::LANG_SPANISH;
	}
	return false;
}

} // namespace Game
