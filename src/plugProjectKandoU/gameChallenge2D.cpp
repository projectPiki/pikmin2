#include "types.h"
#include "Game/gameChallenge2D.h"

namespace Game {

/**
 * @note Address: 0x802350A0
 * @note Size: 0x64
 */
Challenge2D_TitleInfo::Challenge2D_TitleInfo(int count)
{
	pInfoArray = new Info[count];
	mCount     = count;
}

/**
 * @note Address: 0x80235104
 * @note Size: 0x30
 */
Challenge2D_TitleInfo::Info::Info()
{
	mFloorCount     = 0;
	mSprayCounts[1] = 0;
	mSprayCounts[0] = 0;
	mTimeLimit      = 0;
	mPikiContainer  = nullptr;
	mHighscore2P    = nullptr;
	mHighscore1P    = nullptr;
	mStageIndex     = 0;
	mDisplayFlag.clear();
}

/**
 * @note Address: 0x80235134
 * @note Size: 0x7C
 */
Challenge2D_TitleInfo::Info* Challenge2D_TitleInfo::operator()(int count)
{
	P2ASSERTBOUNDSLINE(31, 0, count, mCount);
	return &pInfoArray[count];
}

/**
 * @note Address: 0x802351B0
 * @note Size: 0x64
 */
Vs2D_TitleInfo::Vs2D_TitleInfo(int count)
{
	pInfoArray = new Info[count];
	mInfoCount = count;
}

/**
 * @note Address: 0x80235214
 * @note Size: 0xC
 */
Vs2D_TitleInfo::Info::Info() { mInfo = 0; }

/**
 * @note Address: 0x80235220
 * @note Size: 0xA8
 */
Vs2D_TitleInfo::Info* Vs2D_TitleInfo::operator()(int infoIndex)
{
	bool amLegal = ((infoIndex >= 0));
	JUT_ASSERTLINE(52, (amLegal && (infoIndex < mInfoCount)), "ZANNEN\n");
	P2ASSERTBOUNDSLINE(54, 0, infoIndex, mInfoCount);
	return &pInfoArray[infoIndex];
}

/**
 * @note Address: 0x802352C8
 * @note Size: 0x28
 */
Challenge2D_ResultInfo::Challenge2D_ResultInfo()
{
	mDisplayFlag.clear();
	mTimeLeft     = 0;
	mPokos        = 0;
	mPikminLeft   = 0;
	mScore        = 0;
	mHighScore    = nullptr;
	mDisplayIndex = 0;
}
} // namespace Game
