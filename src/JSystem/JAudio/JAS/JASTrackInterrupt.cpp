#include "JSystem/JAudio/JAS/JASTrack.h"

/**
 * @note Address: 0x800A29F8
 * @note Size: 0x44
 */
void JASIntrMgr::init()
{
	mIsActive    = true;
	mRequestFlag = 0;
	mIntrFlag    = 0;
	mTimerCount  = 0;
	mTimer       = 0;
	mMaxTime     = 0;
	for (int i = 0; i < 8; i++) {
		mData[i] = nullptr;
	}
}

/**
 * @note Address: 0x800A2A3C
 * @note Size: 0x24
 */
void JASIntrMgr::request(u32 interrupt)
{
	if ((mIntrFlag & (1 << interrupt)) == 0) {
		return;
	}
	mRequestFlag |= 1 << interrupt;
}

/**
 * @note Address: 0x800A2A60
 * @note Size: 0x24
 */
void JASIntrMgr::setIntr(u32 interrupt, void* data)
{
	mIntrFlag |= 1 << interrupt;
	mData[interrupt] = data;
}

/**
 * @note Address: 0x800A2A84
 * @note Size: 0x18
 */
void JASIntrMgr::resetInter(u32 interrupt) { mIntrFlag &= ~(1 << interrupt); }

/**
 * @note Address: 0x800A2A9C
 * @note Size: 0x6C
 */
void* JASIntrMgr::checkIntr()
{
	if (!mIsActive) {
		return nullptr;
	}
	for (u32 i = 0, currFlag = mIntrFlag & mRequestFlag; currFlag != 0; currFlag >>= 1, i++) {
		if (currFlag & 1) {
			mRequestFlag &= ~(1 << i);
			return mData[i];
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x800A2B08
 * @note Size: 0x70
 */
void JASIntrMgr::timerProcess()
{
	if (mTimer == 0) {
		return;
	}
	mTimer--;
	if (mTimer != 0) {
		return;
	}

	// timer is newly 0
	if (mIntrFlag & 0x40) {
		mRequestFlag |= 0x40;
	}
	if (mTimerCount) {
		mTimerCount--;
		if (mTimerCount == 0) {
			return;
		}
		mTimer = mMaxTime;
		return;
	}
	mTimer = mMaxTime;
}
