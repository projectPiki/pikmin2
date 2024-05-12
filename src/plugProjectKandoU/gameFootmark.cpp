
#include "Game/Footmark.h"
#include "Game/GameSystem.h"

namespace Game {

/**
 * @note Address: 0x801B4794
 * @note Size: 0x1C
 */
Footmark::Footmark()
{
	mPosition = Vector3f(0.0f);
	mFlags    = 0;
}

/**
 * @note Address: 0x801B47B0
 * @note Size: 0x1C
 */
Footmarks::Footmarks()
{
	mMarks          = nullptr;
	mCount          = 0;
	mCapacity       = 0;
	mCurrentIndex   = 0;
	mLastUpdateTime = 0;
}

/**
 * @note Address: 0x801B47CC
 * @note Size: 0x6C
 */
void Footmarks::alloc(int amt)
{
	mMarks        = new Footmark[amt];
	mCount        = amt;
	mCapacity     = 0;
	mCurrentIndex = 0;
}

/**
 * @note Address: 0x801B4838
 * @note Size: 0x134
 */
void Footmarks::add(Footmark& mark)
{
	mPosition = mark.mPosition;
	if (mCapacity >= 2) {
		int adjIndex       = ((mCurrentIndex + mCount) - 1) % mCount;
		Footmark* currMark = &mMarks[adjIndex];

		f32 dist = Vector3f::distance(currMark->mPosition, mark.mPosition);
		if (dist < 20.0f) {
			return;
		}
	}

	u32 timer                    = gameSystem->mFrameTimer;
	Footmark* testMark           = &mMarks[mCurrentIndex];
	testMark->mPosition          = mark.mPosition;
	testMark->mFlags             = mark.mFlags;
	mMarks[mCurrentIndex].mFlags = timer;
	mCurrentIndex                = (mCurrentIndex + 1) % mCount;
	if (mCapacity < mCount) {
		mCapacity++;
	}
	mLastUpdateTime = timer;
}

/**
 * @note Address: 0x801B496C
 * @note Size: 0x4C
 */
Footmark* Footmarks::get(int index)
{
	if (index < 0 || index >= mCapacity) {
		return nullptr;
	}

	return &mMarks[(((mCount + mCurrentIndex) - (index + 1)) % mCount)];
}

/**
 * @note Address: 0x801B49B8
 * @note Size: 0xC8
 */
Footmark* Footmarks::findNearest2(Vector3f& position, int minFlagValue)
{
	int minIndex = -1;
	f32 minDist  = 1280000.0f;
	for (int i = 0; i < mCapacity - 1; i++) {
		int adjIndex = (mCurrentIndex + i) % mCount;
		if (minFlagValue == -1 || (int)mMarks[adjIndex].mFlags > minFlagValue) {
			Footmark* mark = &mMarks[adjIndex];

			Vector3f diff = position - mark->mPosition;
			f32 dist      = diff.sqrMagnitude();
			if (dist < minDist) {
				minDist  = dist;
				minIndex = adjIndex;
			}
		}
	}

	if (minIndex != -1) {
		return &mMarks[minIndex];
	}

	return nullptr;
}

} // namespace Game
