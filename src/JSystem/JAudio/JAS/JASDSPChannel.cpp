#include "JSystem/JAudio/JAS/JASDsp.h"
#include "JSystem/JAudio/JAS/JASHeap.h"

JASDSPChannel* JASDSPChannel::sDspChannels;

/**
 * @note Address: 0x800A4B48
 * @note Size: 0x2C
 */
JASDSPChannel::JASDSPChannel()
{
	mStatus       = 1;
	mPriority     = -1;
	mFlags        = 0;
	_0C           = 0;
	mCallback     = nullptr;
	mCallbackArgs = nullptr;
	mChannel      = nullptr;
}

/**
 * @note Address: 0x800A4B74
 * @note Size: 0x10
 */
void JASDSPChannel::free()
{
	mCallback     = nullptr;
	mCallbackArgs = nullptr;
}

/**
 * @note Address: 0x800A4B84
 * @note Size: 0x10
 */
void JASDSPChannel::start()
{
	SET_FLAG(mFlags, 1);
}

/**
 * @note Address: 0x800A4B94
 * @note Size: 0x88
 */
void JASDSPChannel::drop()
{
	if (mCallback) {
		mCallback(3, 0, mCallbackArgs);
	}
	free();
	mPriority = -1;
	RESET_FLAG(mFlags, 1);
	if (mStatus == 0) {
		SET_FLAG(mFlags, 2);
		mStatus = 2;
	}
}

/**
 * @note Address: 0x800A4C1C
 * @note Size: 0x84
 */
void JASDSPChannel::initAll()
{
	sDspChannels = new (JASDram, 0x20) JASDSPChannel[0x40];
	for (int i = 0; i < 0x40; i++) {
		sDspChannels[i].mChannel = JASDsp::getDSPHandle(i);
	}
}

/**
 * @note Address: 0x800A4CA0
 * @note Size: 0xDC
 */
JASDSPChannel* JASDSPChannel::alloc(u8 index, s32 (*cb)(u32, JASDsp::TChannel*, void*), void* p3)
{
	JASDSPChannel* channel = getLowestChannel(index);
	if (!channel) {
		return nullptr;
	}
	channel->drop();
	channel->mPriority     = index;
	channel->_0C           = 0;
	channel->mCallback     = cb;
	channel->mCallbackArgs = p3;
	return channel;
}

/**
 * @note Address: 0x800A4D7C
 * @note Size: 0xE4
 */
JASDSPChannel* JASDSPChannel::allocForce(u8 index, s32 (*cb)(u32, JASDsp::TChannel*, void*), void* p3)
{
	JASDSPChannel* channel = getLowestChannel(index);
	if (!channel) {
		return nullptr;
	}
	channel->mStatus = 1;
	channel->drop();
	channel->mPriority     = index;
	channel->_0C           = 0;
	channel->mCallback     = cb;
	channel->mCallbackArgs = p3;
	return channel;
}

/**
 * @note Address: 0x800A4E60
 * @note Size: 0xC
 */
void JASDSPChannel::setPriority(u8 priority)
{
	mPriority = priority;
}

/**
 * @note Address: 0x800A4E6C
 * @note Size: 0xDC
 */
JASDSPChannel* JASDSPChannel::getLowestChannel(int threshold)
{
	s16 best_priority = 0xff;
	int best_index    = -1;
	int best_unknown  = 0;
	for (int i = 0; i < 0x40; i++) {
		JASDSPChannel* channel = &sDspChannels[i];
		s16 priority           = channel->mPriority;
		if (priority < 0) {
			return &sDspChannels[i];
		}
		if (priority <= threshold && priority <= best_priority) {
			if (priority != best_priority || channel->_0C > best_unknown) {
				best_unknown  = channel->_0C;
				best_index    = i;
				best_priority = priority;
			}
		}
	}
	if (best_index < 0) {
		return nullptr;
	}
	return &sDspChannels[best_index];
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
JASDSPChannel* JASDSPChannel::getLowestActiveChannel()
{
	s16 best_priority = 0xff;
	int best_index    = -1;
	int best_unknown  = 0;
	for (int i = 0; i < 0x40; i++) {
		JASDSPChannel* channel = &sDspChannels[i];
		if (channel->mStatus == 0) {
			s16 priority = channel->mPriority;
			if (priority < 0x7f && priority <= best_priority) {
				if (priority != best_priority || channel->_0C > best_unknown) {
					best_unknown  = channel->_0C;
					best_index    = i;
					best_priority = priority;
				}
			}
		}
	}
	if (best_index < 0) {
		return nullptr;
	}
	return &sDspChannels[best_index];
}

/**
 * @note Address: 0x800A4F48
 * @note Size: 0x1E4
 */
void JASDSPChannel::updateProc()
{
	int ret;
	if (mChannel->isFinish()) {
		mFlags &= ~2;
		if (mStatus == STATUS_ACTIVE) {
			if (mCallback) {
				ret = mCallback(CB_STOP, nullptr, mCallbackArgs);
			} else {
				ret = -1;
			}
			if (ret < 0) {
				mPriority = -1;
			}
		}
		mStatus = STATUS_INACTIVE;
		mChannel->replyFinishRequest();
		mChannel->flush();
	} else if (mFlags & 2) {
		mFlags &= ~2;
		mChannel->forceStop();
		mChannel->flush();
	} else if (mStatus != STATUS_DROP) {
		if ((mFlags & 1) && mStatus == STATUS_INACTIVE) {
			mFlags &= ~1;
			mStatus = STATUS_ACTIVE;
			mChannel->init();
			if (mCallback) {
				ret = mCallback(CB_START, mChannel, mCallbackArgs);
			}
			mChannel->playStart();
			mChannel->flush();
		} else if (mStatus != STATUS_INACTIVE) {
			bool flush = false;
			if (mCallback) {
				ret   = mCallback(CB_PLAY, mChannel, mCallbackArgs);
				flush = true;
			} else {
				ret = 0;
			}
			if (ret < 0) {
				mStatus = STATUS_INACTIVE;
				if (mCallback) {
					ret = mCallback(CB_STOP, nullptr, mCallbackArgs);
				} else {
					ret = -1;
				}
				if (ret < 0) {
					mPriority = -1;
				}
				mChannel->playStop();
				mChannel->flush();
			} else {
				_0C++;
				if (flush) {
					mChannel->flush();
				}
			}
		}
	}
}

/**
 * @note Address: 0x800A512C
 * @note Size: 0x74
 */
void JASDSPChannel::updateAll()
{
	for (u32 i = 0; i < 0x40; i++) {
		if ((i & 0xF) == 0 && i != 0) {
			JASDsp::releaseHalt((i - 1) >> 4);
		}
		sDspChannels[i].updateProc();
	}
	JASDsp::releaseHalt(3);
}

/**
 * @note Address: 0x800A51A0
 * @note Size: 0x160
 */
bool JASDSPChannel::killActiveChannel()
{
	JASDSPChannel* channel = getLowestActiveChannel();
	if (channel == nullptr) {
		return false;
	}
	channel->drop();
	return true;
}

/**
 * @note Address: 0x800A5300
 * @note Size: 0x10
 */
JASDSPChannel* JASDSPChannel::getHandle(u32 index)
{
	return sDspChannels + index;
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void JASDSPChannel::getNumUse()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void JASDSPChannel::getNumFree()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void JASDSPChannel::getNumBreak()
{
	// UNUSED FUNCTION
}
