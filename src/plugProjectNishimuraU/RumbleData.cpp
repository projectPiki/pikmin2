#include "Game/rumble.h"

namespace Game {

/*
 * --INFO--
 * Address:	802613C0
 * Size:	00000C
 */
RumbleData::RumbleData()
    : mCount(0)
{
}

/*
 * --INFO--
 * Address:	802613CC
 * Size:	00000C
 */
RumbleDataMgr::RumbleDataMgr()
    : mDataCnt(0)
{
}

/*
 * --INFO--
 * Address:	802613D8
 * Size:	00002C
 */
RumbleData* RumbleDataMgr::getRumbleData(int idx)
{
	if (idx >= 0 && idx < mDataCnt) {
		return &mDataArr[idx];
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	80261404
 * Size:	000128
 */
void RumbleDataMgr::read(Stream& stream)
{
	mDataCnt = stream.readInt();
	if (!mDataCnt) {
		return;
	}

	mDataArr = new RumbleData[mDataCnt];
	for (int i = 0; i < mDataCnt; i++) {
		mDataArr[i].read(stream);
	}
}
} // namespace Game
