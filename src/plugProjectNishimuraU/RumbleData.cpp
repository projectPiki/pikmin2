#include "Game/rumble.h"

namespace Game {

/**
 * @note Address: 0x802613C0
 * @note Size: 0xC
 */
RumbleData::RumbleData()
    : mCount(0)
{
}

/**
 * @note Address: 0x802613CC
 * @note Size: 0xC
 */
RumbleDataMgr::RumbleDataMgr()
    : mDataCnt(0)
{
}

/**
 * @note Address: 0x802613D8
 * @note Size: 0x2C
 */
RumbleData* RumbleDataMgr::getRumbleData(int idx)
{
	if (idx >= 0 && idx < mDataCnt) {
		return &mDataArr[idx];
	}

	return nullptr;
}

/**
 * @note Address: 0x80261404
 * @note Size: 0x128
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
