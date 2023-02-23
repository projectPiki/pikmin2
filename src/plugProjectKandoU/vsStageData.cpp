#include "types.h"
#include "nans.h"
#include "Game/ChallengeGame.h"
#include "Game/VsGame.h"
#include "Game/BaseGameSection.h"
#include "JSystem/JUtility/JUTException.h"

namespace Game {
namespace ChallengeGame {

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
StageData::StageData()
{
	mPikiContainer.clear();
	sprintf(mCaveInfoFilename, "caveinfo.txt");
	mTimeLimit            = 200.0f;
	mStartNumSpicy        = 0;
	mStartNumBitter       = 0;
	mFloorCounts          = 1;
	_70                   = 0;
	mStageIndex           = 0;
	mFloorTimerExtensions = nullptr;
}

/*
 * --INFO--
 * Address:	8022D68C
 * Size:	000238
 */
void StageData::read(Stream& stream)
{
	u32 version            = stream.readInt();
	char* caveinfoFilename = stream.readString(nullptr, 0);
	for (int i = 0; i < 64; i++) {
		mCaveInfoFilename[i] = caveinfoFilename[i];
		if (caveinfoFilename[i] == 0)
			break;
	}
	mPikiContainer.read(stream);
	if (version >= 1) {
		mTimeLimit      = stream.readFloat();
		mStartNumBitter = stream.readInt();
		mStartNumSpicy  = stream.readInt();
	}
	if (version >= 2) {
		mFloorCounts = stream.readInt();
		_70          = stream.readInt(); // unuused otakara num
	}
	if (version >= 3) {
		mStageIndex = stream.readInt();
	}
	if (version >= 4) {
		mFloorTimerExtensions = new f32[mFloorCounts];
		for (int i = 0; i < mFloorCounts; i++) {
			mFloorTimerExtensions[i] = stream.readFloat();
		}
	} else {
		mFloorTimerExtensions = new f32[mFloorCounts];
		for (int i = 0; i < mFloorCounts; i++) {
			mFloorTimerExtensions[i] = 100.0f;
		}
	}
}

/*
 * --INFO--
 * Address:	8022D8C4
 * Size:	0000B4
 */
StageList::StageList()
{
	mName = "チャレンジステージ"; // challenge stage
}

/*
 * --INFO--
 * Address:	8022D9D8
 * Size:	00010C
 */
void StageList::read(Stream& stream)
{
	bool b       = (gameSystem) ? gameSystem->mSection->disableAllocHalt() : true;
	s32 stageNum = stream.readInt();
	for (int i = 0; i < stageNum; i++) {
		StageData* currStageData = new StageData;
		currStageData->read(stream);
		mStageData.add(currStageData);
	}
	if (gameSystem && b) {
		gameSystem->mSection->enableAllocHalt();
	}
}

/*
 * --INFO--
 * Address:	8022DAE4
 * Size:	000084
 */
StageData* StageList::getStageData(int idx)
{
	int childCount = mStageData.getChildCount();
	JUT_ASSERTLINE(213, 0 <= idx && idx < childCount, "illegal stage index %d\n", idx); // doesn't match if using bounds inclusive
	return static_cast<StageData*>(mStageData.getChildAt(idx));
}

} // namespace ChallengeGame

namespace VsGame {

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
StageData::StageData()
{
	mPikiContainer.clear();
	sprintf(mCaveInfoFilename, "caveinfo.txt");
	mTimeLimit      = 200.0f;
	mStartNumSpicy  = 0;
	mStartNumBitter = 0;
	mIndex2D        = 0;
	sprintf(mStageLayoutFilePath, "random");
	mStartNumYellowMarbles = 7;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000284
 */
void StageData::read(Stream& stream)
{
	u32 version            = stream.readInt();
	char* caveinfoFilename = stream.readString(nullptr, 0);
	for (int i = 0; i < 64; i++) {
		mCaveInfoFilename[i] = caveinfoFilename[i];
		if (caveinfoFilename[i] == 0)
			break;
	}
	mPikiContainer.read(stream);
	mTimeLimit      = stream.readFloat();
	mStartNumBitter = stream.readInt();
	mStartNumSpicy  = stream.readInt();

	if (version >= 2) {
		mIndex2D = stream.readInt();
	}
	if (version >= 3) {
		char* layoutFileName = stream.readString(nullptr, 0);
		for (int i = 0; i < 64; i++) {
			mStageLayoutFilePath[i] = layoutFileName[i];
			if (layoutFileName[i] == 0)
				break;
		}
	}
	if (version >= 4) {
		mStartNumYellowMarbles = stream.readInt();
	}
}

/*
 * --INFO--
 * Address:	8022DB68
 * Size:	0000BC
 */
StageList::StageList()
{
	mName = "対戦用ステージ"; // battle stage
}

/*
 * --INFO--
 * Address:	8022DC84
 * Size:	000350
 */
void StageList::read(Stream& stream)
{
	bool b       = (gameSystem) ? gameSystem->mSection->disableAllocHalt() : true;
	s32 stageNum = stream.readInt();
	for (int i = 0; i < stageNum; i++) {
		StageData* currStageData = new StageData;
		currStageData->read(stream);
		mStageData.add(currStageData);
	}
	if (gameSystem && b) {
		gameSystem->mSection->enableAllocHalt();
	}
}

/*
 * --INFO--
 * Address:	8022DFD4
 * Size:	000084
 */
StageData* StageList::getStageData(int idx)
{
	int childCount = mStageData.getChildCount();
	JUT_ASSERTLINE(427, 0 <= idx && idx < childCount, "illegal stage index %d\n", idx); // doesn't match if using bounds inclusive
	return static_cast<StageData*>(mStageData.getChildAt(idx));
}

} // namespace VsGame
} // namespace Game
