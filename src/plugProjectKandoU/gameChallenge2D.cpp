#include "types.h"
#include "Game/gameChallenge2D.h"

namespace Game {

/*
 * --INFO--
 * Address:	802350A0
 * Size:	000064
 */
Challenge2D_TitleInfo::Challenge2D_TitleInfo(int count)
{
	pInfoArray = new Info[count];
	mCount     = count;
}

/*
 * --INFO--
 * Address:	80235104
 * Size:	000030
 */
Challenge2D_TitleInfo::Info::Info()
{
	mFloorCount     = 0;
	mSprayCounts[1] = 0;
	mSprayCounts[0] = 0;
	mTimeLimit      = 0;
	mPikiContainer  = nullptr;
	mHighscore2     = nullptr;
	mHighscore1     = nullptr;
	mStageIndex     = 0;
	mDisplayFlag.clear();
}

/*
 * --INFO--
 * Address:	80235134
 * Size:	00007C
 */
Challenge2D_TitleInfo::Info* Challenge2D_TitleInfo::operator()(int count)
{
	P2ASSERTBOUNDSLINE(31, 0, count, mCount);
	return &pInfoArray[count];
}

/*
 * --INFO--
 * Address:	802351B0
 * Size:	000064
 */
Vs2D_TitleInfo::Vs2D_TitleInfo(int count)
{
	pInfoArray = new Info[count];
	mInfoCount = count;
}

/*
 * --INFO--
 * Address:	80235214
 * Size:	00000C
 */
Vs2D_TitleInfo::Info::Info() { mInfo = 0; }

/*
 * --INFO--
 * Address:	80235220
 * Size:	0000A8
 */
Vs2D_TitleInfo::Info* Vs2D_TitleInfo::operator()(int infoIndex)
{
	bool amLegal = ((infoIndex >= 0));
	JUT_ASSERTLINE(52, (amLegal && (infoIndex < mInfoCount)), "ZANNEN\n");
	P2ASSERTBOUNDSLINE(54, 0, infoIndex, mInfoCount);
	return &pInfoArray[infoIndex];
}

/*
 * --INFO--
 * Address:	802352C8
 * Size:	000028
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
