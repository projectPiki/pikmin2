#include "Dolphin/dvd.h"
#include "string.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAIStream.h"
#include "JSystem/JAudio/JAI/JAInter/MoveParaSet.h"
#include "JSystem/JAudio/JAI/JAInter/StreamMgr.h"
#include "JSystem/JAudio/JAS/JASAramStream.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASKernel.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "types.h"

namespace JAInter {
namespace StreamMgr {
Flags flags;
u8 prepareSw;
u8 prepareFlag;
u8 externalAram;
u8 finishFlag;
StreamUpdateData* streamUpdate;
u16* streamList;
JAIStream* streamSound;
void* initOnCodeStrm;
JASAramStream* streamSystem;
u32 systemStatus;
u32 controlStatus;
JASHeap* aramBufferHeap;
JASHeap* aramParentHeap;
static AllocCallback allocCallback;
static DeallocCallback deallocCallback;
static JASHeap* (*externalAramCallback)();
int dataFileNumber;
MgrCallback mgrCallback;
u32 sChannelMax         = 2;
u32 decodedBufferBlocks = 0x2760;

/**
 * @note Address: 0x800B764C
 * @note Size: 0x31C
 */
void init()
{
	if (flags._01 != 0) {
		return;
	}

	flags._00      = 0;
	flags._01      = 0;
	flags._02      = 0;
	streamSystem   = new (JAIBasic::getCurrentJAIHeap(), 0x20) JASAramStream();
	aramBufferHeap = new (JAIBasic::getCurrentJAIHeap(), 0x20) JASHeap(nullptr);

	JASAramStream::initSystem(JAIGlobalParameter::getParamStreamDecodedBufferBlocks(), sChannelMax);

	streamSound = JAIBasic::getInterface()->makeStream();
	for (int i = 0; i < STREAM_PARAMETER_BUFFER_MAX; i++) {
		StreamParameter* para = &streamSound->mStreamParameter;
		para->mPans           = new (JAIBasic::getCurrentJAIHeap(), 0x20) MoveParaSet[JAIGlobalParameter::getParamStreamParameterLines()];
		para->mPitches        = new (JAIBasic::getCurrentJAIHeap(), 0x20) MoveParaSet[JAIGlobalParameter::getParamStreamParameterLines()];
		para->mFxmixes = new (JAIBasic::getCurrentJAIHeap(), 0x20) MoveParaSetInitZero[JAIGlobalParameter::getParamStreamParameterLines()];
		para->mDolbys  = new (JAIBasic::getCurrentJAIHeap(), 0x20) MoveParaSetInitZero[JAIGlobalParameter::getParamStreamParameterLines()];
		para->mChannelVolumes = new (JAIBasic::getCurrentJAIHeap(), 0x20) MoveParaSet[sChannelMax];
		para->mChannelPans    = new (JAIBasic::getCurrentJAIHeap(), 0x20) MoveParaSet[sChannelMax];
		para->mChannelFxmixes = new (JAIBasic::getCurrentJAIHeap(), 0x20) MoveParaSet[sChannelMax];
		para->mChannelDolbys  = new (JAIBasic::getCurrentJAIHeap(), 0x20) MoveParaSet[sChannelMax];
	}
	streamUpdate = new (JAIBasic::getCurrentJAIHeap(), 0x20) StreamUpdateData();
	streamUpdate->reset();
	if (externalAram == 0) {
		getDecodedBufferSize(10);
		aramBufferHeap->alloc(JASKernel::getAramHeap(), getDecodedBufferSize(10));
	} else if (externalAramCallback != nullptr) {
		aramParentHeap = externalAramCallback();
	}
}

/**
 * @note Address: 0x800B7968
 * @note Size: 0x358
 */
void storeStreamBuffer(JAIStream** soundHandlePtr, JAInter::Actor* actor, u32 soundID, u32 fadeTime, u8 camId, JAInter::SoundInfo* info)
{
	if (soundHandlePtr != nullptr && *soundHandlePtr != nullptr && (*soundHandlePtr)->checkSoundHandle(soundID, info)) {
		return;
	}
	if (streamSound->mState != SOUNDSTATE_Inactive) {
		if (streamSound->getInfoPriority() <= info->mPriority) {
			streamSound->stop(0);
		} else {
			return;
		}
	}

	JAIStream* stream     = streamSound;
	StreamParameter* para = &stream->mStreamParameter;
	para->mPauseMode      = SOUNDPAUSE_Unk0;
	para->_04             = 0;

	para->mVolumeFlags = 0;
	para->mPitchFlags  = 0;
	para->mPanFlags    = 0;
	para->mFxmixFlags  = 0;
	para->mDolbyFlags  = 0;

	for (u32 i = 0; i < 20; i++) {
		para->mVolumes[i] = MoveParaSet();
	}
	JAIStream::initLineParameters(para);
	JAIStream::initChannelParameters(para);

	stream->mStreamParameter.mChannelVolumeFlags = 0;
	stream->mStreamParameter.mChannelPanFlags    = 0;
	stream->mStreamParameter.mChannelFxmixFlags  = 0;
	stream->mStreamParameter.mChannelDolbyFlags  = 0;

	stream->mState                            = SOUNDSTATE_Stored;
	stream->mFinishWaitTimer                  = 10;
	streamUpdate->mPrepareFlag                = 0;
	streamSound->mStreamParameter.mUpdateData = streamUpdate;
	stream->initParameter(soundHandlePtr, actor, soundID, fadeTime, camId, info);
	if (soundHandlePtr) {
		*soundHandlePtr = stream;
	}
}

/**
 * @note Address: 0x800B7CC0
 * @note Size: 0x88
 */
void releaseStreamBuffer(JAIStream* stream, u32 fadeTime)
{
	if (fadeTime == 0 || stream->mState < SOUNDSTATE_Playing) {
		stopDirect();
		stream->mState                                         = SOUNDSTATE_Inactive;
		stream->mStreamParameter.mUpdateData->mStream          = nullptr;
		stream->mStreamParameter.mUpdateData->mActiveTrackFlag = 0;
		stream->clearMainSoundPPointer();
		mgrCallback = nullptr;
	} else if (stream->mStreamParameter.mUpdateData) {
		stream->mStreamParameter.mUpdateData->mActiveTrackFlag |= SOUNDACTIVE_DoFadeout;
		stream->mFadeCounter = fadeTime;
	}
}

/**
 * @note Address: 0x800B7D48
 * @note Size: 0x1AC
 */
void checkSystem()
{
	if (finishFlag == 2) {
		if (controlStatus == 5) {
			if (mgrCallback != nullptr) {
				mgrCallback();
			}
			controlStatus = 0;
		} else if (controlStatus == 6) {
			controlStatus = 0;
		}
		finishFlag = 0;
	}
	switch (controlStatus) {
	case 1:
		if (finishFlag == 0) {
			if (dataFileNumber == 0) {
				controlStatus = 0;
			} else {
				controlStatus = 2;
			}
		}
		break;
	case 2:
		if (dataFileNumber == 0) {
			controlStatus = 0;
		} else {
			prepareSystem(dataFileNumber);
			initChannel();
			controlStatus = 4;
		}
		break;
	case 4:
		if (prepareFlag == 1) {
			if (mgrCallback != nullptr) {
				mgrCallback();
			}
			if (prepareSw != 0) {
				break;
			}
			controlStatus = 3;
		}
		if (controlStatus != 3) {
			break;
		}
		// lack of break is intentional
	case 3:
		if (mgrCallback != nullptr) {
			mgrCallback();
		}
		streamSystem->start();
		prepareFlag   = 0;
		controlStatus = 5;
		break;
	case 6:
		finishFlag = 1;
		streamSystem->stop(0);
		controlStatus = 1;
		break;
	case 7:
		finishFlag = 1;
		streamSystem->cancel();
		controlStatus = 1;
		break;
	case 5:
		if (mgrCallback != nullptr) {
			mgrCallback();
		}
		break;
	}
}

/**
 * @note Address: 0x800B7EF4
 * @note Size: 0xA00
 */
void PlayingStream()
{
	if (streamSound == nullptr) {
		return;
	}

	StreamUpdateData* data = getUpdateInfo();
	if (streamSound->mState >= SOUNDSTATE_Playing) {
		if (finishFlag == 2) {
			if (streamSound->mStreamParameter.mUpdateData) {
				streamSound->mStreamParameter.mUpdateData->mStream          = nullptr;
				streamSound->mStreamParameter.mUpdateData->mActiveTrackFlag = 0;
			}
			streamSound->clearMainSoundPPointer();
			streamSound->mState = SOUNDSTATE_Inactive;
			mgrCallback         = nullptr;
			return;
		}

		if (streamSound->mFinishWaitTimer != 0) {
			streamSound->mFinishWaitTimer--;
		}

		if ((data->mActiveTrackFlag & SOUNDACTIVE_DoFadeout) != 0) {
			streamSound->setVolume(0.0f, streamSound->mFadeCounter, SOUNDPARAM_Fadeout);
			streamSound->mState = SOUNDSTATE_Fadeout;
			data->mActiveTrackFlag ^= SOUNDACTIVE_DoFadeout;
		}
	}
	if (streamSound->mState < SOUNDSTATE_Ready) {
		return;
	}

	f32 factor;
	u32 trackFlags[6]   = { 0, 0, 0, 0, 0, 0 };
	bool isPitchUpdated = false;

	StreamParameter* param = streamSound->getStreamParameter();
	if (data->mActiveTrackFlag & SOUNDACTIVE_Volume) {
		factor = 1.0f;
		for (u8 i = 0; i < 20; i++) {
			MoveParaSet* vol = &param->mVolumes[i];
			if (param->mVolumeFlags & (1 << i)) {
				if (vol->move() == FALSE) {
					param->mVolumeFlags ^= (1 << i);
				}
			}

			factor *= vol->mCurrentValue;
		}

		if (streamUpdate->_04 != factor) {
			streamUpdate->_04 = factor;

			for (u8 i = 0; i < sChannelMax; i++) {
				trackFlags[i] |= SOUNDACTIVE_Volume;
			}
		}

		if (param->mVolumeFlags == 0) {
			data->mActiveTrackFlag ^= SOUNDACTIVE_Volume;
		}
	}

	if (data->mActiveTrackFlag & SOUNDACTIVE_TrackVolume) {
		for (u8 i = 0; i < sChannelMax; i++) {
			MoveParaSet* chanVol = &param->mChannelVolumes[i];
			if (param->mChannelVolumeFlags & (1 << i)) {
				if (chanVol->move() == FALSE) {
					param->mChannelVolumeFlags ^= (1 << i);
				}
			}
			trackFlags[i] |= SOUNDACTIVE_Volume;
		}

		if (param->mChannelVolumeFlags == 0) {
			data->mActiveTrackFlag ^= SOUNDACTIVE_TrackVolume;
		}
	}

	if (streamSound->mState == SOUNDSTATE_Fadeout) {
		if (streamSound->getVolume(SOUNDPARAM_Fadeout) == 0.0f || streamSound->mFadeCounter == 0) {
			if (streamSound->mFinishWaitTimer == 0) {
				streamSystem->stop(0);
				streamSound->mState                                         = SOUNDSTATE_Inactive;
				streamSound->mStreamParameter.mUpdateData->mStream          = nullptr;
				streamSound->mStreamParameter.mUpdateData->mActiveTrackFlag = 0;
				streamSound->clearMainSoundPPointer();
				mgrCallback    = nullptr;
				controlStatus  = 1;
				dataFileNumber = 0;
			}
		}
	}

	if (data->mActiveTrackFlag & SOUNDACTIVE_Pan) {
		factor = 0.0f;
		for (u8 i = 0; i < 7; i++) {
			MoveParaSet* pan = &param->mPans[i];
			if (param->mPanFlags & (1 << i)) {
				if (pan->move() == FALSE) {
					param->mPanFlags ^= (1 << i);
				}
			}

			factor += (pan->mCurrentValue - 0.5f);
		}

		factor += 0.5f;
		if (factor > 1.0f) {
			factor = 1.0f;
		} else if (factor < 0.0f) {
			factor = 0.0f;
		}

		if (streamUpdate->_0C != factor) {
			streamUpdate->_0C = factor;

			for (u8 i = 0; i < sChannelMax; i++) {
				trackFlags[i] |= SOUNDACTIVE_Pan;
			}
		}

		if (param->mPanFlags == 0) {
			data->mActiveTrackFlag ^= SOUNDACTIVE_Pan;
		}
	}

	if (data->mActiveTrackFlag & SOUNDACTIVE_TrackPan) {
		for (u8 i = 0; i < sChannelMax; i++) {
			MoveParaSet* pan = &param->mChannelPans[i];
			if (param->mChannelPanFlags & (1 << i)) {
				if (pan->move() == FALSE) {
					param->mChannelPanFlags ^= (1 << i);
				}
			}
			trackFlags[i] |= SOUNDACTIVE_Pan;
		}

		if (param->mChannelPanFlags == 0) {
			data->mActiveTrackFlag ^= SOUNDACTIVE_TrackPan;
		}
	}

	if (data->mActiveTrackFlag & SOUNDACTIVE_Pitch) {
		factor = 1.0f;
		for (u8 i = 0; i < 7; i++) {
			MoveParaSet* pitch = &param->mPitches[i];
			if (param->mPitchFlags & (1 << i)) {
				if (pitch->move() == FALSE) {
					param->mPitchFlags ^= (1 << i);
				}
			}

			factor *= pitch->mCurrentValue;
		}

		if (streamUpdate->_08 != factor) {
			isPitchUpdated    = true;
			streamUpdate->_08 = factor;
		}

		if (param->mPitchFlags == 0) {
			data->mActiveTrackFlag ^= SOUNDACTIVE_Pitch;
		}
	}

	if (data->mActiveTrackFlag & SOUNDACTIVE_Fxmix) {
		factor = 0.0f;
		for (u8 i = 0; i < 7; i++) {
			MoveParaSet* fxmix = &param->mFxmixes[i];
			if (param->mFxmixFlags & (1 << i)) {
				if (fxmix->move() == FALSE) {
					param->mFxmixFlags ^= (1 << i);
				}
			}

			factor += fxmix->mCurrentValue;
		}

		if (factor > 1.0f) {
			factor = 1.0f;
		} else if (factor < 0.0f) {
			factor = 0.0f;
		}

		if (streamUpdate->_10 != factor) {
			streamUpdate->_10 = factor;

			for (u8 i = 0; i < sChannelMax; i++) {
				trackFlags[i] |= SOUNDACTIVE_Fxmix;
			}
		}

		if (param->mFxmixFlags == 0) {
			data->mActiveTrackFlag ^= SOUNDACTIVE_Fxmix;
		}
	}

	if (data->mActiveTrackFlag & SOUNDACTIVE_TrackFxmix) {
		for (u8 i = 0; i < sChannelMax; i++) {
			MoveParaSet* fxmix = &param->mChannelFxmixes[i];
			if (param->mChannelFxmixFlags & (1 << i)) {
				if (fxmix->move() == FALSE) {
					param->mChannelFxmixFlags ^= (1 << i);
				}
			}

			trackFlags[i] |= SOUNDACTIVE_Fxmix;
		}

		if (param->mChannelFxmixFlags == 0) {
			data->mActiveTrackFlag ^= SOUNDACTIVE_TrackFxmix;
		}
	}

	if (data->mActiveTrackFlag & SOUNDACTIVE_Dolby) {
		factor = 0.0f;
		for (u8 i = 0; i < 7; i++) {
			MoveParaSet* dolby = &param->mDolbys[i];
			if (param->mDolbyFlags & (1 << i)) {
				if (dolby->move() == FALSE) {
					param->mDolbyFlags ^= (1 << i);
				}
			}

			factor += dolby->mCurrentValue;
		}

		if (factor > 1.0f) {
			factor = 1.0f;
		} else if (factor < 0.0f) {
			factor = 0.0f;
		}

		if (streamUpdate->_14 != factor) {
			streamUpdate->_14 = factor;

			for (u8 i = 0; i < sChannelMax; i++) {
				trackFlags[i] |= SOUNDACTIVE_Dolby;
			}
		}

		if (param->mDolbyFlags == 0) {
			data->mActiveTrackFlag ^= SOUNDACTIVE_Dolby;
		}
	}

	if (data->mActiveTrackFlag & SOUNDACTIVE_TrackDolby) {
		for (u8 i = 0; i < sChannelMax; i++) {
			MoveParaSet* dolby = &param->mChannelDolbys[i];
			if (param->mChannelDolbyFlags & (1 << i)) {
				if (dolby->move() == FALSE) {
					param->mChannelDolbyFlags ^= (1 << i);
				}
				trackFlags[i] |= SOUNDACTIVE_Dolby;
			}
		}

		if (param->mChannelDolbyFlags == 0) {
			data->mActiveTrackFlag ^= SOUNDACTIVE_TrackDolby;
		}
	}

	if (trackFlags[0] || trackFlags[1] || trackFlags[2] || trackFlags[3] || trackFlags[4] || trackFlags[5] || isPitchUpdated) {
		BOOL interrupts = OSDisableInterrupts();
		for (int i = 0; i < getChannelMax(); i++) {
			if (trackFlags[i] & SOUNDACTIVE_Volume) {
				streamSystem->mChannelVolume[i] = streamUpdate->_04 * param->mChannelVolumes[i].mCurrentValue;
			}
			if (trackFlags[i] & SOUNDACTIVE_Pan) {
				JASAramStream* system  = streamSystem;
				system->mChannelPan[i] = (streamUpdate->_0C + param->mChannelPans[i].mCurrentValue) - 0.5f;
				system->mUseStereo     = 1;
			}
			if (trackFlags[i] & SOUNDACTIVE_Fxmix) {
				streamSystem->mChannelFxMix[i] = streamUpdate->_10 + param->mChannelFxmixes[i].mCurrentValue;
			}
			if (trackFlags[i] & SOUNDACTIVE_Dolby) {
				streamSystem->mChannelDolby[i] = streamUpdate->_14 + param->mChannelDolbys[i].mCurrentValue;
			}
		}

		if (isPitchUpdated) {
			streamSystem->mPitch = streamUpdate->_08;
		}
		OSRestoreInterrupts(interrupts);
	}

	streamSound->mActiveTimer++;
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void RequestStream()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B88F4
 * @note Size: 0xA8
 */
void changeCallback()
{
	switch (controlStatus) {
	case 4:
		if (streamUpdate->mPrepareFlag == 0) {
			prepareSw = 0;
		}
		break;
	case 3:
		streamSound->mState = SOUNDSTATE_Ready;
		JAIBasic::msBasic->setSeExtParameter(streamSound);
		PlayingStream();
		break;
	case 5:
		if (streamSound->mState == SOUNDSTATE_Ready) {
			streamSound->mState = SOUNDSTATE_Playing;
		}
		PlayingStream();
	}
}

/**
 * @note Address: 0x800B899C
 * @note Size: 0x30
 */
void processGFrameStream()
{
	if (flags._01 == 0) {
		checkSystem();
		checkEntriedStream();
	}
}

/**
 * @note Address: 0x800B89CC
 * @note Size: 0xE8
 */
void checkEntriedStream()
{
	if (streamSound->mState != SOUNDSTATE_Stored) {
		return;
	}
	streamSound->mState = SOUNDSTATE_Loaded;
	streamUpdate->reset();
	streamUpdate->mStream = streamSound;

	char* fileName
	    = (char*)((size_t)streamList + (streamList[JAIBasic::getInterface()->getSoundOffsetNumberFromID(streamSound->mSoundID) + 2]));
	char filePath[PATH_MAX];
	strcpy(filePath, JAIGlobalParameter::getParamStreamPath());
	strcat(filePath, fileName);
	playDirect(filePath);
	initChannel();
	if (streamUpdate->mPrepareFlag) {
		prepareSw = 1;
	}
	mgrCallback = changeCallback;
}

/**
 * @note Address: 0x800B8AB4
 * @note Size: 0x70
 */
void systemCallBack(u32 status, JASAramStream* stream, void* p3)
{
	systemStatus = status;
	if (status == 0) {
		finishFlag = 2;
		if (deallocCallback != nullptr) {
			deallocCallback();
		} else {
			if (aramParentHeap != nullptr) {
				aramBufferHeap->free();
			}
		}
	} else if (status == 1) {
		prepareFlag = 1;
	}
}

/**
 * @note Address: 0x800B8B24
 * @note Size: 0xC8
 */
void prepareSystem(s32 inode)
{
	u32 start;
	u32 length;
	if (allocCallback != nullptr) {
		BufferInfo info = allocCallback(inode);
		start           = (u32)info.mStart;
		length          = info.mLength;
	} else {
		if (aramParentHeap != nullptr) {
			aramBufferHeap->alloc(aramParentHeap, (sChannelMax * (JAIGlobalParameter::getParamStreamDecodedBufferBlocks() * 10)) >> 1);
		}
		start  = (u32)aramBufferHeap->mBase;
		length = sChannelMax * (JAIGlobalParameter::getParamStreamDecodedBufferBlocks() * 10) >> 1;
	}
	streamSystem->init(start, length, systemCallBack, nullptr);
	streamSystem->prepare(inode, -1);
}

/**
 * @note Address: 0x800B8BEC
 * @note Size: 0x198
 */
void playDirect(char* path)
{
	prepareSw   = 0;
	mgrCallback = nullptr;
	if (finishFlag == 0 && (controlStatus == 4 || controlStatus == 3)) {
		finishFlag = 1;
		streamSystem->cancel();
		dataFileNumber = DVDConvertPathToEntrynum(path);
		controlStatus  = 1;
	} else if (finishFlag != 1 && controlStatus == 5) {
		finishFlag = 1;
		streamSystem->stop(0);
		dataFileNumber = DVDConvertPathToEntrynum(path);
		controlStatus  = 1;
	} else {
		if (controlStatus == 0) {
			DVDConvertPathToEntrynum(path);
			dataFileNumber = DVDConvertPathToEntrynum(path);
			int entryNum   = dataFileNumber;
			BufferInfo info;
			if (allocCallback != nullptr) {
				info = allocCallback(entryNum);
			} else {
				if (aramParentHeap != nullptr) {
					aramBufferHeap->alloc(aramParentHeap,
					                      (sChannelMax * (JAIGlobalParameter::getParamStreamDecodedBufferBlocks() * 10)) >> 1);
				}
				info.mStart  = aramBufferHeap->mBase;
				info.mLength = sChannelMax * (JAIGlobalParameter::getParamStreamDecodedBufferBlocks() * 10) >> 1;
			}
			streamSystem->init(reinterpret_cast<u32>(info.mStart), info.mLength, systemCallBack, nullptr);
			streamSystem->prepare(entryNum, -1);
			controlStatus = 4;
		} else {
			dataFileNumber = DVDConvertPathToEntrynum(path);
		}
	}
}

/**
 * @note Address: 0x800B8D84
 * @note Size: 0x3C
 */
void stopDirect()
{
	if (controlStatus == 5) {
		controlStatus = 6;
	} else if (controlStatus == 3 || controlStatus == 4) {
		controlStatus = 7;
	}
	dataFileNumber = 0;
}

/**
 * @note Address: 0x800B8DC0
 * @note Size: 0xEC
 */
void initChannel()
{
	u32 flag = streamSound->mSoundInfo->mFlag;
	if (flag == 0) {
		return;
	}

	BOOL interrupts = OSDisableInterrupts();
	for (u8 i = 0; i < 6; i++) {
		if (flag & 1) {
			streamSound->setChannelPan(i, 0.0f, 0);
		} else if (flag & 2) {
			streamSound->setChannelPan(i, 1.0f, 0);
		} else if (flag & 3) {
			streamSound->setChannelPan(i, 0.5f, 0);
		}
		if (flag & 4) {
			streamSound->setChannelVolume(i, 0.0f, 0);
		}
		flag >>= 4;
	}
	OSRestoreInterrupts(interrupts);
}

/**
 * @note Address: 0x800B8EAC
 * @note Size: 0x8
 */
JASAramStream* getStreamObjectPointer()
{
	return streamSystem;
}

/**
 * @note Address: 0x800B8EB4
 * @note Size: 0x8
 */
u32 getSystemStatus()
{
	return systemStatus;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParentHeap(JASHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void setAllockCallback(AllocCallback)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setDeallockCallback(DeallocCallback)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B8EBC
 * @note Size: 0x8
 */
u32 getDecodedBufferBlocks()
{
	return decodedBufferBlocks;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setDecodedBufferBlocks(u32 count)
{
	// UNUSED FUNCTION
	decodedBufferBlocks = count;
}

/**
 * @note Address: 0x800B8EC4
 * @note Size: 0x18
 */
u32 getDecodedBufferSize(u32 p1)
{
	return decodedBufferBlocks * p1 * sChannelMax >> 1;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
JAIStream* getStreamSound()
{
	// UNUSED FUNCTION
	return streamSound;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setChannelMax(u32 max)
{
	// UNUSED FUNCTION
	sChannelMax = max;
}

/**
 * @note Address: 0x800B8EDC
 * @note Size: 0x8
 */
u32 getChannelMax()
{
	return sChannelMax;
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void setExternalAramBuffer(void (*)(JASHeap*))
{
	// UNUSED FUNCTION
}
} // namespace StreamMgr
} // namespace JAInter
