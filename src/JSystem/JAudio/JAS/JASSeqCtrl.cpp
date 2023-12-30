#include "JSystem/JAudio/JAS/JASSeqCtrl.h"

/**
 * @note Address: 0x8009C858
 * @note Size: 0x60
 */
void JASSeqCtrl::init()
{
	mRawFilePtr     = nullptr;
	mCurrentFilePtr = nullptr;

	mWaitTimer = 0;
	mLoopIndex = 0;
	for (int i = 0; i < 8; i++) {
		mLoopStartPositions[i] = nullptr;
		mLoopTimers[i]         = 0;
	}

	mState.w         = 0;
	mPreviousFilePtr = nullptr;
}

/**
 * @note Address: 0x8009C8B8
 * @note Size: 0x14
 */
void JASSeqCtrl::start(void* file, u32 offset)
{
	mRawFilePtr     = static_cast<u8*>(file);
	mCurrentFilePtr = mRawFilePtr + offset;
}

/**
 * @note Address: 0x8009C8CC
 * @note Size: 0x6C
 */
bool JASSeqCtrl::loopEnd()
{
	u32 loopIdx = mLoopIndex;
	if (loopIdx == 0) {
		return false;
	}

	u16 activeLoopTimer = mLoopTimers[loopIdx - 1];
	if (activeLoopTimer) {
		activeLoopTimer--;
	}

	if (activeLoopTimer == 0) {
		mLoopIndex--;
		return true;
	}

	mLoopTimers[loopIdx - 1] = activeLoopTimer;
	mCurrentFilePtr          = mLoopStartPositions[mLoopIndex - 1];
	return true;
}

/**
 * @note Address: 0x8009C938
 * @note Size: 0x30
 */
bool JASSeqCtrl::waitCountDown()
{
	// Pisses me off. TODO: Fix this.
	if (0 < mWaitTimer) {
		mWaitTimer--;
		if (mWaitTimer != 0) {
			return false;
		}
	}

	return true;
}

/**
 * @note Address: 0x8009C968
 * @note Size: 0x38
 */
bool JASSeqCtrl::callIntr(void* internalFile)
{
	if (mPreviousFilePtr != nullptr) {
		return false;
	}

	mPreviousFilePtr = mCurrentFilePtr;
	mCurrentFilePtr  = static_cast<u8*>(internalFile);
	mState.w         = mWaitTimer;
	mWaitTimer       = 0;
	return true;
}

/**
 * @note Address: 0x8009C9A0
 * @note Size: 0x34
 */
bool JASSeqCtrl::retIntr()
{
	if (mPreviousFilePtr == nullptr) {
		return false;
	}

	mWaitTimer       = mState.w;
	mCurrentFilePtr  = mPreviousFilePtr;
	mPreviousFilePtr = nullptr;
	return true;
}

/**
 * @note Address: 0x8009C9D4
 * @note Size: 0x18
 */
u16 JASSeqCtrl::get16(u32 offset) const
{
	u16 result = mRawFilePtr[offset++] << 8;
	result |= mRawFilePtr[offset++];
	return result;
}

/**
 * @note Address: 0x8009C9EC
 * @note Size: 0x28
 */
u32 JASSeqCtrl::get24(u32 offset) const
{
	u32 result = mRawFilePtr[offset++] << 8;
	result |= mRawFilePtr[offset++];
	result <<= 8;
	result |= mRawFilePtr[offset++];
	return result;
}

/**
 * @note Address: 0x8009CA14
 * @note Size: 0x38
 */
u32 JASSeqCtrl::get32(u32 offset) const
{
	u32 result = mRawFilePtr[offset++] << 8;
	result |= mRawFilePtr[offset++];
	result <<= 8;
	result |= mRawFilePtr[offset++];
	result <<= 8;
	result |= mRawFilePtr[offset++];
	return result;
}

/**
 * @note Address: 0x8009CA4C
 * @note Size: 0x28
 */
u32 JASSeqCtrl::read16()
{
	u32 result = *(mCurrentFilePtr++) << 8;
	result |= *(mCurrentFilePtr++);
	return result;
}

/**
 * @note Address: 0x8009CA74
 * @note Size: 0x44
 */
u32 JASSeqCtrl::read24()
{
	u32 result = *(mCurrentFilePtr++) << 8;
	result |= *(mCurrentFilePtr++);
	result <<= 8;
	result |= *(mCurrentFilePtr++);
	return result;
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
u32 JASSeqCtrl::read32()
{
	// UNUSED FUNCTION
}
