#ifndef _GAME_GAMECONFIG_H
#define _GAME_GAMECONFIG_H

#include "TagParm.h"

namespace Game {
struct GameConfig {
	struct Parms : public TagParameters {
		Parms()
		    : TagParameters("GameConfig")
		    , mGamePrint(this, "gamePrint")
		    , mPrint(this, "Print")
		    , mOgawaPrint(this, "ogawaPrint")
		    , mShimizuPrint(this, "shimizuPrint")
		    , mYamashitaPrint(this, "yamashitaPrint")
		    , mKandoPrint(this, "kandoPrint")
		    , mNishimuraPrint(this, "nishimuraPrint")
		    , mEbisawaPrint(this, "ebisawaPrint")
		    , mMorimuraPrint(this, "morimuraPrint")
		    , mKonoPrint(this, "konoPrint")
		    , mFujinoPrint(this, "fujinoPrint")
		    , mPsoundPrint(this, "psoundPrint")
		    , mShortCutUp(this, "shortCutUp")
		    , mShortCutDown(this, "shortCutDown")
		    , mShortCutLeft(this, "shortCutLeft")
		    , mShortCutRight(this, "shortCutRight")
		    , mAllocAllEnemy(this, "allocAllEnemy")
		    , mMapparts_path(this, "mapparts_path")
		    , mPublicity(this, "publicity")
		    , mPelletMultiLang(this, "pelletMultiLang")
		    , mAI(this, "AI")
		    , mTimers(this, "timers")
		    , mVsTest(this, "vsTest")
		    , mVsDeathType(this, "vsDeathType")
		    , mVsHiba(this, "vsHiba")
		    , mVsY(this, "vsY")
		    , mE3version(this, "E3version")
		    , mMukki_cherry(this, "mukki_cherry")
		    , mMarioClubDevelop(this, "marioClubDevelop")
		    , mHeapStatusPrint(this, "heapStatusPrint")
		    , mHeapFreeSize(this, "heapFreeSize")
		    , mBaseGameNewCheck(this, "baseGameNewCheck")
		    , mKFesVersion(this, "KFesVersion")
		    , mNintendoVersion(this, "nintendoVersion")
		    , mLanguage(this, "language")
		    , mAutosaveOff(this, "autosaveOff")
		    , mVsDebugSelectPattern(this, "vsDebugSelectPattern")
		    , mVsFifo(this, "vsFifo")
		{
		}

		virtual ~Parms() { } // _08 (weak)

		PrimTagParm<int> mGamePrint;            // _01C
		PrimTagParm<int> mPrint;                // _02C
		PrimTagParm<int> mOgawaPrint;           // _03C
		PrimTagParm<int> mShimizuPrint;         // _04C
		PrimTagParm<int> mYamashitaPrint;       // _05C
		PrimTagParm<int> mKandoPrint;           // _06C
		PrimTagParm<int> mNishimuraPrint;       // _07C
		PrimTagParm<int> mEbisawaPrint;         // _08C
		PrimTagParm<int> mMorimuraPrint;        // _09C
		PrimTagParm<int> mKonoPrint;            // _0AC
		PrimTagParm<int> mFujinoPrint;          // _0BC
		PrimTagParm<int> mPsoundPrint;          // _0CC
		PrimTagParm<int> mShortCutUp;           // _0DC
		PrimTagParm<int> mShortCutDown;         // _0EC
		PrimTagParm<int> mShortCutLeft;         // _0FC
		PrimTagParm<int> mShortCutRight;        // _10C
		PrimTagParm<int> mAllocAllEnemy;        // _11C
		StringTagParm mMapparts_path;           // _12C
		PrimTagParm<int> mPublicity;            // _13C
		PrimTagParm<int> mPelletMultiLang;      // _14C
		PrimTagParm<int> mAI;                   // _15C
		PrimTagParm<int> mTimers;               // _16C
		PrimTagParm<int> mVsTest;               // _17C
		PrimTagParm<int> mVsDeathType;          // _18C
		PrimTagParm<int> mVsHiba;               // _19C
		PrimTagParm<int> mVsY;                  // _1AC
		PrimTagParm<int> mE3version;            // _1BC
		PrimTagParm<int> mMukki_cherry;         // _1CC
		PrimTagParm<int> mMarioClubDevelop;     // _1DC
		PrimTagParm<int> mHeapStatusPrint;      // _1EC
		PrimTagParm<int> mHeapFreeSize;         // _1FC
		PrimTagParm<int> mBaseGameNewCheck;     // _20C
		PrimTagParm<int> mKFesVersion;          // _21C
		PrimTagParm<int> mNintendoVersion;      // _22C
		StringTagParm mLanguage;                // _23C
		PrimTagParm<int> mAutosaveOff;          // _24C
		PrimTagParm<int> mVsDebugSelectPattern; // _25C
		PrimTagParm<int> mVsFifo;               // _26C
	};

	GameConfig();
	~GameConfig() {};

	bool load(char*);

	// Unused/inlined:
	void setConstSetting();

	Parms mParms; // _00
};

extern GameConfig gGameConfig;
} // namespace Game

#endif
