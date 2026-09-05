#include "JSystem/JAudio/JAI/JAIAnimeSound.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"

/**
 * @note Address: 0x800AB0EC
 * @note Size: 0x3C
 */
void JAIAnimeSound::handleStop(u8 handleNo, u32 p2)
{
	mSoundStatus[handleNo] = 0;
	mBasEntries[handleNo]  = nullptr;
	ObjectBase::handleStop(handleNo, p2);
}

/**
 * @note Address: 0x800AB128
 * @note Size: 0x188
 */
JAIAnimeSound::JAIAnimeSound(Vec* p1, JKRHeap* heap, u8 p3)
    : Object(p1, heap, p3)
    , _48(0)
    , _4C(0)
    , _50(0)
    , _54(0)
{
	if (!_4C) {
		_58 = true;
	} else {
		_58 = false;
	}

	mAnimID      = 0;
	mFrameTimer  = 0;
	mSoundData   = nullptr;
	mSoundStatus = new (heap, 0) u8[p3];
	mBasEntries  = new (heap, 0) JAIAnimeFrameSoundData*[p3];

	for (u8 i = 0; i < p3; i++) {
		mBasEntries[i] = nullptr;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void JAIAnimeSound::initActorAnimSound(JAIAnimeSoundData*, JAInter::Actor, u32, f32, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800AB2B0
 * @note Size: 0x194
 */
void JAIAnimeSound::initActorAnimSound(JAIAnimeSoundData* sndData, u32 flag, f32 loopStart, f32 loopEnd)
{
	mSoundData = sndData;
	if (mSoundData) {
		mAnimID      = 0;
		mSoundFlags  = flag;
		int entries  = mSoundData->mEntryNum;
		mLoopStartID = checkLoopStartCount(loopStart);
		mLoopEndID   = checkLoopEndCount(loopEnd);

		if (flag == 1) {
			mAnimID            = 0;
			mCurrentFrameTimer = 0.0f;
			mFrameTimer        = 0;
		} else {
			mAnimID            = entries - 1;
			mCurrentFrameTimer = -1.0f;
			mFrameTimer        = -1;
		}
	}

	for (u8 i = 0; i < mHandleCount; i++) {
		JAISound* sound               = mSounds[i];
		JAIAnimeFrameSoundData* entry = mBasEntries[i];
		if (!sound) {
			mSoundStatus[i] = 0;
			mBasEntries[i]  = nullptr;
		} else if (entry && entry->mPlayFlags & 4) {
			handleStop(i, 0);
		} else if (!(sound->mSoundID & 0xc00) && mSoundStatus[i]) {
			handleStop(i, 0);
		} else {
			mSoundStatus[i] = 2;
		}
	}
}

/**
 * @note Address: 0x800AB444
 * @note Size: 0x40
 */
int JAIAnimeSound::checkLoopStartCount(f32 startFrame)
{
	u32 i = 0;
	for (; i < mSoundData->mEntryNum; i++) {
		if (mSoundData->mSndEntries[i].mStartTime >= startFrame) {
			break;
		}
	}
	return i;
}

/**
 * @note Address: 0x800AB484
 * @note Size: 0x48
 */
int JAIAnimeSound::checkLoopEndCount(f32 endFrame)
{
	u32 i = 0;
	for (; i < mSoundData->mEntryNum; i++) {
		if (mSoundData->mSndEntries[i].mStartTime > endFrame) {
			break;
		}
	}

	if (i != 0) {
		return i;
	}
	return mSoundData->mEntryNum;
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void JAIAnimeSound::setLoopStartFrame(f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void JAIAnimeSound::setLoopEndFrame(f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void JAIAnimeSound::setLoopFrame(f32, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void JAIAnimeSound::setAnimSound(f32, f32, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void JAIAnimeSound::setAnimSound(JAIBasic*, f32, f32, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void JAIAnimeSound::setAnimObjectSound(f32, f32, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void JAIAnimeSound::setAnimSoundVec(Vec*, f32, f32, u32, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void JAIAnimeSound::setAnimSoundVec(JAIBasic*, Vec*, f32, f32, u32, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800AB4CC
 * @note Size: 0x504
 */
void JAIAnimeSound::setAnimSoundActor(JAInter::Actor* actor, f32 currentFrame, f32 speed, u8 ownerID)
{
	if (!mSoundData) {
		return;
	}

	if (mCurrentFrameTimer < 0.0f) {
		mCurrentFrameTimer = currentFrame;
	}

	mAnimSpeed  = speed;
	int entries = mSoundData->mEntryNum;

	if (mSoundFlags == 1) {
		if (mCurrentFrameTimer > currentFrame) {
			while (mAnimID < mLoopEndID) {
				playActorAnimSound(actor, speed, ownerID);
			}
			mAnimID            = mLoopStartID;
			mCurrentFrameTimer = currentFrame;
			if (mFrameTimer < 256) {
				mFrameTimer++;
			}
		}

		for (u8 i = 0; i < mHandleCount; i++) {
			JAISound** se = &mSounds[i];
			if (mSoundStatus[i] == 1) {
				JAIAnimeFrameSoundData* entry = mBasEntries[i];
				if (!(entry->mSoundID & 0xc00)) {
					if (speed != 0.0f || !(entry->mPlayFlags & 0x20)) {
						if (entry->mStartTime == entry->mEndTime
						    || (entry->mStartTime < entry->mEndTime && entry->mEndTime > currentFrame && entry->mStartTime <= currentFrame)
						    || (entry->mStartTime > entry->mEndTime
						        && (entry->mEndTime > currentFrame || entry->mStartTime < currentFrame))) {
							startAnimSound(entry->mSoundID, se, actor, ownerID);
						} else {
							handleStop(i, 0);
						}
					}
				} else if (!*se) {
					mSoundStatus[i] = 0;
					mBasEntries[i]  = nullptr;
				}

				if (*se) {
					setSpeedModifySound(*se, entry, speed);
					if (entry->mPlayFlags & 0x10 && entry->mEndTime <= currentFrame) {
						handleStop(i, 0);
					}
				}
			}
		}

		while (mAnimID < entries && mSoundData->mSndEntries[mAnimID].mStartTime <= currentFrame) {
			playActorAnimSound(actor, speed, ownerID);
		}
	} else {
		if (mCurrentFrameTimer < currentFrame) {
			while (mAnimID >= mLoopStartID && mAnimID != -1 && mCurrentFrameTimer != mSoundData->mSndEntries[mLoopStartID].mStartTime) {
				playActorAnimSound(actor, speed, ownerID);
			}
			mAnimID            = mLoopEndID - 1;
			mCurrentFrameTimer = currentFrame;
			if (mFrameTimer == -1 || mFrameTimer < 256) {
				mFrameTimer++;
			}
		}

		for (u8 i = 0; i < mHandleCount; i++) {
			JAISound** se = &mSounds[i];
			if (mSoundStatus[i] == 1) {
				JAIAnimeFrameSoundData* entry = mBasEntries[i];
				if (!(entry->mSoundID & 0xc00)) {
					if (speed != 0.0f || !(entry->mPlayFlags & 0x20)) {
						if (entry->mStartTime == entry->mEndTime
						    || (entry->mStartTime > entry->mEndTime && entry->mEndTime < currentFrame && entry->mStartTime >= currentFrame)
						    || (entry->mStartTime < entry->mEndTime
						        && (entry->mEndTime < currentFrame || entry->mStartTime > currentFrame))) {
							startAnimSound(entry->mSoundID, se, actor, ownerID);
						} else {
							handleStop(i, 0);
						}
					}
				} else if (!*se) {
					mSoundStatus[i] = 0;
					mBasEntries[i]  = nullptr;
				}

				if (*se) {
					setSpeedModifySound(*se, entry, speed);
					if (entry->mPlayFlags & 0x10 && entry->mEndTime >= currentFrame) {
						handleStop(i, 0);
					}
				}
			}
		}

		while (mAnimID < entries && mSoundData->mSndEntries[mAnimID].mStartTime >= currentFrame) {
			playActorAnimSound(actor, speed, ownerID);
		}
	}
	mCurrentFrameTimer = currentFrame;
}

/**
 * @note Address: 0x800AB9D0
 * @note Size: 0x280
 */
void JAIAnimeSound::playActorAnimSound(JAInter::Actor* actor, f32 pitch, u8 a)
{
	JAIAnimeFrameSoundData* entry = &mSoundData->mSndEntries[mAnimID];

	u8 i = 0;
	while (i < mHandleCount) {
		if (mSoundStatus[i] != 0) {
			JAISound* sound = mSounds[i];
			if (sound) {
				mSoundStatus[i] = 0;
				mBasEntries[i]  = nullptr;
				break;
			}
			if (entry->mSoundID != sound->mSoundID) {
				i++;
				continue;
			}
			if (entry->mSoundID & 0xc00) {
				break;
			}
			mAnimID += mSoundFlags;
			return;
		} else if (IsJAIHandleInUse(i)) {
			i++;
		} else {
			break;
		}
	}

	if (i != mHandleCount && (!(entry->mPlayFlags & 8) || mFrameTimer == entry->mActivationFrame)
	    && ((mSoundFlags == 1 && !(entry->mPlayFlags & 2)) || (mSoundFlags == -1 && !(entry->mPlayFlags & 1)))) {
		JAISound** se = &mSounds[i];
		startAnimSound(entry->mSoundID, se, actor, a);
		if (*se) {
			mBasEntries[i]  = entry;
			mSoundStatus[i] = 1;
			(*se)->setVolume(entry->mVolume / 127.0f, 0, SOUNDPARAM_Unk5);
			(*se)->setPitch((entry->mPitchScale * (pitch - 1.0f)) / 32 + entry->mPitch, 0, SOUNDPARAM_Unk5);
			(*se)->setPan(entry->mPan / 127.0f, 0, SOUNDPARAM_Unk5);
		}
	}

	mAnimID += mSoundFlags;
}

/**
 * @note Address: 0x800ABC50
 * @note Size: 0x4C
 */
void JAIAnimeSound::startAnimSound(u32 id, JAISound** handlePtr, JAInter::Actor* actor, u8 p4)
{
	JAIBasic::msBasic->startSoundActorT(id, handlePtr, actor, 0, p4);
	if (*handlePtr) {
		(*handlePtr)->mIsPlayingWithActor = true;
	}
}

/**
 * @note Address: 0x800ABC9C
 * @note Size: 0x13C
 */
void JAIAnimeSound::setSpeedModifySound(JAISound* sound, JAIAnimeFrameSoundData* soundData, f32 speed)
{
	f32 adjustedPitch = soundData->mPitch;
	if (soundData->mPitchScale) {
		f32 speedOffset = speed - 1.0f;
		adjustedPitch += ((f32)soundData->mPitchScale * speedOffset) / 32;
	}
	sound->setPitch(adjustedPitch, 0, SOUNDPARAM_Unk5);

	s16 adjustedVolume = soundData->mVolume;
	if (soundData->mVolumeScale) {
		s16 volumeOffset = (f32)soundData->mVolumeScale * 2 * (speed - 1.0f);
		adjustedVolume += volumeOffset;
		if (adjustedVolume > 127) {
			adjustedVolume = 127;
		} else if (adjustedVolume < 0) {
			adjustedVolume = 0;
		}
	}

	sound->setVolumeU7(adjustedVolume, 0, SOUNDPARAM_Unk5);
}
