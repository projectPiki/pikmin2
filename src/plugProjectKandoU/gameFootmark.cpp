
#include "Game/Footmark.h"
#include "Game/GameSystem.h"

namespace Game {

/*
 * --INFO--
 * Address:	801B4794
 * Size:	00001C
 */
Footmark::Footmark()
{
	mPosition = Vector3f(0.0f);
	mFlags    = 0;
}

/*
 * --INFO--
 * Address:	801B47B0
 * Size:	00001C
 */
Footmarks::Footmarks()
{
	mMarks          = nullptr;
	mCount          = 0;
	mCapacity       = 0;
	mCurrentIndex   = 0;
	mLastUpdateTime = 0;
}

/*
 * --INFO--
 * Address:	801B47CC
 * Size:	00006C
 */
void Footmarks::alloc(int amt)
{
	mMarks        = new Footmark[amt];
	mCount        = amt;
	mCapacity     = 0;
	mCurrentIndex = 0;
}

/*
 * --INFO--
 * Address:	801B4838
 * Size:	000134
 */
void Footmarks::add(Footmark& mark)
{
	mPosition = mark.mPosition;
	if (mCapacity >= 2) {
		int adjIndex       = ((mCurrentIndex + mCount) - 1) % mCount; // (_04 + (mCount - 1) % mCount);
		Footmark* currMark = &mMarks[adjIndex];

		f32 dist = _distanceBetween(currMark->mPosition, mark.mPosition);
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

/*
 * --INFO--
 * Address:	801B496C
 * Size:	00004C
 */
Footmark* Footmarks::get(int index)
{
	if (index < 0 || index >= mCapacity) {
		return nullptr;
	}

	return &mMarks[(((mCount + mCurrentIndex) - (index + 1)) % mCount)];
}

/*
 * --INFO--
 * Address:	801B49B8
 * Size:	0000C8
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
			f32 dist      = diff.x * diff.x + diff.y * diff.y + diff.z * diff.z;
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
