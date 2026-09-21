#include "math.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAIConst.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAISe.h"
#include "JSystem/JAudio/JAI/JAISequence.h"
#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JAudio/JAI/JAIStream.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/SeMgr.h"
#include "JSystem/JAudio/JAI/JAInter/StreamMgr.h"
#include "JSystem/JAudio/JAI/JAInter/Object.h"
#include "JSystem/JAudio/JAS/JASAramStream.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

// these live in here because of a) ordering and b) the _port static
// if they're in their headers, _port gets put in JAIBasic, which is too early in the link order
// soz xoxo -HP

inline u16 JAISequence::getPortData(u8 p1)
{
	static u16 _port;
	mSeqParameter.mTrack.readPortApp(p1 << 0x10, &_port);
	return _port;
}

inline u16 JAISe::getPortData(u8 p1)
{
	JAISequence* seq;
	if ((mSoundID & JAISoundID_TypeMask) == JAISoundID_Type_Se) {
		u8 v1            = _14;
		seq              = JAInter::SeMgr::seHandle;
		static u16 _port = -1;
		if (seq->mState >= SOUNDSTATE_Playing) {
			seq->mSeqParameter.getTrack()->readPortApp(seq->getTrackPortRoute(v1, p1), &_port);
		}
		return _port;
	}

	return 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 * __ct__8JAISoundFv
 */
JAISound::JAISound()
    : JSULink<JAISound>(this)
    , mState(SOUNDSTATE_Inactive)
    , mFinishWaitTimer(10)
    , mCreatureObj(nullptr)
{
	// UNUSED FUNCTION
	JKRHeap* heap = JAIBasic::msCurrentHeap;
	mSoundObj     = new (heap, 0x20) JAISound_0x34[JAIGlobalParameter::getParamAudioCameraMax()];
}

/**
 * @note Address: 0x800B3838
 * @note Size: 0xEC
 * __ct__11JAISequenceFv
 */
JAISequence::JAISequence()
    : JAISound()
    , mSeqParameter()
{
}

/**
 * @note Address: 0x800B3924
 * @note Size: 0x154
 * __ct__5JAISeFv
 */
JAISe::JAISe()
    : JAISound()
    , mSeParam()
{
}

/**
 * @note Address: 0x800B3A78
 * @note Size: 0xAC
 * __ct__9JAIStreamFv
 */
JAIStream::JAIStream()
    : JAISound()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x114
 */
void JAISound::initMultiMoveParameter(JAInter::MoveParaSet*, u8, u32, f32, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B3B24
 * @note Size: 0x24
 */
u8 JAISe::getSeCategoryNumber()
{
	return JAInter::SeMgr::changeIDToCategory(mSoundID);
}

/**
 * @note Address: 0x800B3B48
 * @note Size: 0xC
 */
u32 JAISound::getSwBit()
{
	return mSoundInfo->mFlag;
}

/**
 * @note Address: 0x800B3B54
 * @note Size: 0x10
 */
u32 JAISound::checkSwBit(u32 flag)
{
	return flag & getSwBit();
}

/**
 * @note Address: 0x800B3B64
 * @note Size: 0xC
 */
u8 JAISound::getInfoPriority()
{
	return mSoundInfo->mPriority;
}

/**
 * @note Address: 0x800B3B70
 * @note Size: 0x18
 */
void JAISound::clearMainSoundPPointer()
{
	if (mMainSoundPPointer == nullptr) {
		return;
	}
	*mMainSoundPPointer = nullptr;
}

/**
 * @note Address: 0x800B3B88
 * @note Size: 0x14
 */
void JAISound::release()
{
	*mMainSoundPPointer = nullptr;
	mMainSoundPPointer  = nullptr;
}

/**
 * @note Address: 0x800B3B9C
 * @note Size: 0x4C
 */
void JAISound::start(u32 fadeTime)
{
	setPrepareFlag(0);
	mFadeCounter = fadeTime;
}

/**
 * @note Address: 0x800B3BE8
 * @note Size: 0x30
 */
void JAISound::stop(u32 fadeTime)
{
	JAIBasic::msBasic->stopSoundHandle(this, fadeTime);
}

/**
 * @note Address: 0x800B3C18
 * @note Size: 0x78
 */
void JAISound::setPrepareFlag(u8 prepareFlag)
{
	switch (mSoundID & JAISoundID_TypeMask) {
	case JAISoundID_Type_Sequence:
		static_cast<JAISequence*>(this)->setPrepareFlag(prepareFlag);
		break;
	case JAISoundID_Type_Se:
		break;
	case JAISoundID_Type_Stream:
		static_cast<JAIStream*>(this)->setPrepareFlag(prepareFlag);
		break;
	}
}

/**
 * @note Address: 0x800B3CD0
 * @note Size: 0x78
 */
void JAISound::checkReady()
{
	switch (mSoundID & JAISoundID_TypeMask) {
	case JAISoundID_Type_Sequence:
		static_cast<JAISequence*>(this)->checkReady();
		break;
	case JAISoundID_Type_Se:
		break;
	case JAISoundID_Type_Stream:
		static_cast<JAIStream*>(this)->checkReady();
		break;
	}
}

/**
 * @note Address: 0x800B3D88
 * @note Size: 0x154
 */
f32 JAISound::setDistanceVolumeCommon(f32 p1, u8 p2)
{
	f32 dist;
	if (mCameraIndex != 4) {
		dist = mSoundObj[mCameraIndex].mDistance;
	} else { // _18 == 4
		dist = mSoundObj[0].mDistance;
		for (u8 i = 1; i < JAIGlobalParameter::audioCameraMax; i++) {
			if (mSoundObj[i].mDistance < dist) {
				dist = mSoundObj[i].mDistance;
			}
		}
	}

	if (dist < JAIGlobalParameter::maxVolumeDistance) {
		return 1.0f;
	}

	dist -= JAIGlobalParameter::maxVolumeDistance;
	p1 -= JAIGlobalParameter::maxVolumeDistance;
	if (p2 > 3) {
		p1 /= 1 << (p2 & 3) + 1;
	} else if (p2 != 0) {
		p1 *= 1 << (p2 & 3);
	}
	if (dist < p1) {
		if (p2 > 3) {
			return 1.0f - dist / p1;
		}
		return (1.0f - JAIGlobalParameter::minDistanceVolume) * (1.0f - dist / p1) + JAIGlobalParameter::minDistanceVolume;
	}
	if (p2 > 3) {
		return 0.0f;
	}
	return JAIGlobalParameter::minDistanceVolume;
}

/**
 * @note Address: 0x800B3EDC
 * @note Size: 0x15C
 */
f32 JAISound::setDistancePanCommon()
{
	f32 result;
	if (JAIGlobalParameter::audioCameraMax == 1) {
		JAISound_0x34* obj   = mSoundObj;
		const f64 absoluteX  = fabs(obj->mPosition.x);
		const f32 magnitudeX = absoluteX;
		const f64 absoluteZ  = fabs(obj->mPosition.z);
		const f32 magnitudeZ = absoluteZ;
		f32 absX             = magnitudeX;
		f32 absZ             = magnitudeZ;
		if (magnitudeX < 1.0f && magnitudeZ < 1.0f) {
			return 0.5f;
		}
		if (JAIGlobalParameter::panDistanceMax < magnitudeX) {
			absX = JAIGlobalParameter::panDistanceMax;
		}
		if (JAIGlobalParameter::panDistanceMax < magnitudeZ) {
			absZ = JAIGlobalParameter::panDistanceMax;
		}
		f32 pan;
		if (obj->mPosition.x == 0.0f && obj->mPosition.z == 0.0f) {
			pan = 0.5f;
		} else if (obj->mPosition.x > 0.0f && absX >= absZ) {
			pan = 1.0f
			    - (JAIGlobalParameter::panDistance2Max - absX)
			          / (JAIGlobalParameter::panAngleParameter * (JAIGlobalParameter::panDistance2Max - absZ));
		} else if (obj->mPosition.x <= 0.0f && absX >= absZ) {
			pan = (JAIGlobalParameter::panDistance2Max - absX)
			    / (JAIGlobalParameter::panAngleParameter * (JAIGlobalParameter::panDistance2Max - absZ));
		} else {
			pan = obj->mPosition.x / (JAIGlobalParameter::panAngleParameter2 * absZ) + 0.5f;
		}
		result = pan;
	} else if (mCameraIndex != 4) {
		result = mCameraIndex & 1;
	} else {
		result = 0.5f;
	}
	return result;
}

/**
 * @note Address: 0x800B4038
 * @note Size: 0x270
 */
f32 JAISound::setPositionDopplarCommon(u32 p1)
{
	JAISound_0x34* soundObj = getSoundObj();
	f32 soundX              = soundObj->mPosition.x;
	f32 soundY              = soundObj->mPosition.y;
	f32 soundZ              = soundObj->mPosition.z;
	f32 distDiff;
	f32 x     = soundX - soundObj->_0C.x;
	f32 y     = soundY - soundObj->_0C.y;
	f32 z     = soundZ - soundObj->_0C.z;
	f32 mag1  = SQUARE(soundX) + SQUARE(soundY) + SQUARE(soundZ);
	f32 dist1 = dolsqrtfull(mag1);
	f32 x2    = soundX + x;
	f32 y2    = soundY + y;
	f32 z2    = soundZ + z;

	f32 mag2  = SQUARE(x2) + SQUARE(y2) + SQUARE(z2);
	f32 dist2 = dolsqrtfull(mag2);

	f32 sqVal = SQUARE(p1 >> 8);

	distDiff       = dist1 - dist2;
	f32 posDopplar = 1.0f / (1.0f - (distDiff / (JAIGlobalParameter::dopplarParameter / sqVal)));

	if (posDopplar < 0.1f) {
		posDopplar = 0.1f;
	} else if (posDopplar > 2.0f) {
		posDopplar = 2.0f;
	}

	return posDopplar;
}

/**
 * @note Address: 0x800B42A8
 * @note Size: 0x74
 */
f32 JAISound::setDistanceDolbyCommon()
{
	JAISound_0x34* obj = mSoundObj;
	if (!mPosition || obj->mPosition.z < JAIGlobalParameter::seDolbyFrontDistanceMax) {
		return 0.0f;
	}
	if (obj->mPosition.z < 0.0f) {
		return (JAIGlobalParameter::seDolbyCenterValue * (JAIGlobalParameter::seDolbyFrontDistanceMax - obj->mPosition.z))
		     / JAIGlobalParameter::seDolbyFrontDistanceMax;
	}
	if (obj->mPosition.z < JAIGlobalParameter::seDolbyBehindDistanceMax) {
		return (127.0f - JAIGlobalParameter::seDolbyCenterValue) * (obj->mPosition.z / JAIGlobalParameter::seDolbyBehindDistanceMax)
		     + JAIGlobalParameter::seDolbyCenterValue;
	}
	return 127.0f;
}

/**
 * @note Address: 0x800B431C
 * @note Size: 0x88
 */
void JAISequence::setSeqInterVolume(u8 type, f32 value, u32 moveTime)
{
	int result = mSeqParameter.mVolumes[type].set(value, moveTime);
	if (result == JAInter::MOVEPARA_SetTarget) {
		mSeqParameter.mVolumeFlags |= 1 << type;
	}
	if (mSeqParameter.mUpdateData && result != JAInter::MOVEPARA_AlreadySet) {
		mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_Volume;
	}
}

/**
 * @note Address: 0x800B43A4
 * @note Size: 0x88
 */
void JAISequence::setSeqInterPan(u8 type, f32 value, u32 moveTime)
{
	int result = mSeqParameter.mPans[type].set(value, moveTime);
	if (result == JAInter::MOVEPARA_SetTarget) {
		mSeqParameter.mPanFlags |= 1 << type;
	}
	if (mSeqParameter.mUpdateData && result != JAInter::MOVEPARA_AlreadySet) {
		mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_Pan;
	}
}

/**
 * @note Address: 0x800B442C
 * @note Size: 0x88
 */
void JAISequence::setSeqInterPitch(u8 type, f32 value, u32 moveTime)
{
	int result = mSeqParameter.mPitches[type].set(value, moveTime);
	if (result == JAInter::MOVEPARA_SetTarget) {
		mSeqParameter.mPitchFlags |= 1 << type;
	}
	if (mSeqParameter.mUpdateData && result != JAInter::MOVEPARA_AlreadySet) {
		mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_Pitch;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void JAISequence::setSeqInterFxmix(u8, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
void JAISequence::setSeqInterDolby(u8, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void JAISequence::setSeqTempoProportion(f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xF4
 */
void JAISequence::setSeqPortData(u8, u16, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void JAISequence::setWaveReadMode(s32, s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
void JAISequence::setTrackVolume(u8, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x140
 */
void JAISequence::setTrackVolumeMulti(u8, u32, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void JAISequence::setTrackMuteSwitch(u8, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void JAISequence::setTrackMuteSwitchMulti(u32, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B44B4
 * @note Size: 0x28
 */
void JAISequence::setTrackInterruptSwitch(u8 type, u8 value)
{
	mSeqParameter.mInterruptSwitches[type] = value;
	if (mSeqParameter.mUpdateData == nullptr) {
		return;
	}
	mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_TrackInterruptSwitch;
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
void JAISequence::setTrackPan(u8, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x140
 */
void JAISequence::setTrackPanMulti(u8, u32, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
void JAISequence::setTrackPitch(u8, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x140
 */
void JAISequence::setTrackPitchMulti(u8, u32, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B44DC
 * @note Size: 0xB0
 */
void JAISequence::setTrackFxmix(u8 type, f32 value, u32 moveTime)
{
	if (mState >= SOUNDSTATE_Playing && (mSeqParameter.mUpdateData->_04 & 1 << type) == 0) {
		return;
	}
	int result = mSeqParameter.mTrackFxmixes[type].set(value, moveTime);
	if (result == JAInter::MOVEPARA_SetTarget) {
		mSeqParameter.mTrackFxmixFlag |= 1 << type;
	}
	if (mSeqParameter.mUpdateData && result != JAInter::MOVEPARA_AlreadySet) {
		mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_TrackFxmix;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x140
 */
void JAISequence::setTrackFxmixMulti(u8, u32, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void JAISequence::setTrackDolby(u8, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x154
 */
void JAISequence::setTrackDolbyMulti(u8, u32, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B458C
 * @note Size: 0xD0
 */
void JAISequence::setTrackPortData(u8 p1, u8 p2, u16 p3)
{
	if (mSeqParameter.mUpdateData == nullptr) {
		return;
	}
	if (mState >= SOUNDSTATE_Playing) {
		mSeqParameter.mTrack.writePortApp(getTrackPortRoute(p1, p2), p3);
	} else {
		mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_TrackPortData;
		mSeqParameter.mTrackPortDataFlag |= 1 << p1;
		mSeqParameter._2B4[p1] |= 1 << p2;
	}
	mSeqParameter._274[p1][p2] = p3;
}

/**
 * @note Address: N/A
 * @note Size: 0x114
 */
void JAISe::setSeInterRandomPara(f32* value, u32 amplitude, f32 min, f32 max)
{
	u32 radius = amplitude * 1000 / 127;
	u32 sample = (u32)(4.2949673E9f * JAInter::Const::random.nextFloat_0_1());
	f32 offset = ((f32)(sample % (radius * 2) + 1) - (f32)radius) / 1000.0f;
	if (*value + offset > max) {
		*value = max;
	} else if (*value < min - offset) {
		*value = min;
	} else {
		*value += offset;
	}
}

/**
 * @note Address: 0x800B465C
 * @note Size: 0x158
 */
void JAISe::setSeInterVolume(u8 type, f32 value, u32 moveTime, u8 p4)
{
	if (p4) {
		setSeInterRandomPara(&value, p4, 0.0f, 1.0f);
	}
	mSeParam.mVolumes[type].set(value, moveTime);
}

/**
 * @note Address: 0x800B47B4
 * @note Size: 0x158
 */
void JAISe::setSeInterPan(u8 type, f32 value, u32 moveTime, u8 p4)
{
	if (p4) {
		setSeInterRandomPara(&value, p4, 0.0f, 1.0f);
	}
	mSeParam.mPans[type].set(value, moveTime);
}

/**
 * @note Address: N/A
 * @note Size: 0x14C
 */
void JAISe::setSeInterPitch(u8, f32, u32, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x158
 */
void JAISe::setSeInterFxmix(u8, f32, u32, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void JAISe::setSeInterFir(u8, u8, u32, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B490C
 * @note Size: 0x158
 */
void JAISe::setSeInterDolby(u8 type, f32 value, u32 moveTime, u8 p4)
{
	if (p4) {
		setSeInterRandomPara(&value, p4, 0.0f, 1.0f);
	}
	mSeParam.mDolbys[type].set(value, moveTime);
}

/**
 * @note Address: N/A
 * @note Size: 0x10C
 */
void JAISe::setSePortData(u8, u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void JAISe::getSePortData(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B4A64
 * @note Size: 0x12C
 */
void JAISe::setSeDistanceParameters()
{
	u8 moveTime = mDistanceParameterMoveTime;
	if (mState == SOUNDSTATE_Loaded) {
		moveTime = 0;
	}
	setSeDistanceVolume(moveTime);
	setSeDistancePan(moveTime);
	setSeDistancePitch(moveTime);
	setSePositionDopplar();
	setSeDistanceFxmix(moveTime);
	setSeDistanceFir(moveTime);
	if (checkSwBit(0x400) == 0) {
		setFxmix(JAIBasic::msBasic->getMapInfoFxParameter(mMapInfoIndex), 0, SOUNDPARAM_Unk3);
	}
	setSeDistanceDolby(moveTime);
}

/**
 * @note Address: 0x800B4BC0
 * @note Size: 0x70
 */
void JAISe::setSeDistanceVolume(u8 moveTime)
{
	mSeParam.mVolumes[SOUNDPARAM_Distance].set(
	    checkSwBit(2) == 0 ? setDistanceVolumeCommon(JAIGlobalParameter::distanceMax, (mSoundInfo->mFlag >> 0x10) & 7) : 1.0f, moveTime);
}

/**
 * @note Address: 0x800B4C30
 * @note Size: 0x74
 */
void JAISe::setSeDistancePan(u8 moveTime)
{
	f32 pan = 0.5f;
	if (!mIsPlayingWithActor) {
		pan = setDistancePanCommon();
	} else if (mCreatureObj) {
		pan = static_cast<JAInter::Object*>(mCreatureObj)->mPan;
	}
	mSeParam.mPans[SOUNDPARAM_Distance].set(pan, moveTime);
}

/**
 * @note Address: 0x800B4CA4
 * @note Size: 0x138
 */
void JAISe::setSeDistancePitch(u8 moveTime)
{
	f32 pitch = 1.0f;
	if (checkSwBit(0x10) != 0) {
		u8 sample = JAInter::Const::random.nextFloat_0_1() * 16.0f;
		pitch     = 1.0f - (sample & 0xF) / 192.0f;
	}
	if (checkSwBit(0x4000) != 0) {
		if (checkSwBit(0x2) == 0 && checkSwBit(0x100 | 0x200) == 0) {
			if (JAIGlobalParameter::audioCameraMax == 1) {
				if (mSoundObj->mDistance >= JAIGlobalParameter::distanceMax) {
					pitch += JAIGlobalParameter::seDistancepitchMax;
				} else {
					pitch = JAIGlobalParameter::seDistancepitchMax * (mSoundObj->mDistance / JAIGlobalParameter::distanceMax) + pitch;
				}
			}
		}
	}
	if (checkSwBit(0x40 | 0x80) != 0) {
		pitch += mRandPitchModifier / 192.0f;
	}
	mSeParam.mPitches[SOUNDPARAM_Distance].set(pitch, moveTime);
}

/**
 * @note Address: 0x800B4DDC
 * @note Size: 0x80
 */
void JAISe::setSePositionDopplar()
{
	u32 moveTime = JAIGlobalParameter::dopplarMoveTime;
	if (mState == SOUNDSTATE_Loaded) {
		moveTime = 1;
	}
	if (checkSwBit(0x100 | 0x200) != 0 && JAIGlobalParameter::audioCameraMax == 1) {
		mSeParam.mPitches[SOUNDPARAM_Dopplar].set(setPositionDopplarCommon(checkSwBit(0x100 | 0x200)), moveTime);
	}
}

/**
 * @note Address: 0x800B4E5C
 * @note Size: 0xC8
 */
void JAISe::setSeDistanceFxmix(u8 moveTime)
{
	u16 value = JAIGlobalParameter::seDefaultFx;
	if (checkSwBit(0x4) == 0 && JAIGlobalParameter::audioCameraMax == 1) {
		if (mSoundObj->mDistance < JAIGlobalParameter::distanceMax) {
			value = (JAIGlobalParameter::seDistanceFxParameter * (mSoundObj->mDistance / JAIGlobalParameter::distanceMax));
		} else {
			value = JAIGlobalParameter::seDistanceFxParameter;
		}
	}
	if (value > 127) {
		value = 127;
	}
	mSeParam.mFxmixes[SOUNDPARAM_Distance].set((u8)value / 127.0f, moveTime);
}

/**
 * @note Address: 0x800B4F24
 * @note Size: 0x4
 */
void JAISe::setSeDistanceFir(u8)
{
}

/**
 * @note Address: 0x800B4F28
 * @note Size: 0xA4
 */
void JAISe::setSeDistanceDolby(u8 moveTime)
{
	f32 dolby = 0.0f;
	if (!mIsPlayingWithActor) {
		dolby = setDistanceDolbyCommon();
	} else if (mCreatureObj) {
		dolby = static_cast<JAInter::Object*>(mCreatureObj)->mDolby;
	}
	mSeParam.mDolbys[SOUNDPARAM_Distance].set((u8)dolby / 127.0f, moveTime);
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIStream::setStreamMode(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void JAIStream::setStreamInterVolume(u8, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void JAIStream::setStreamInterPan(u8, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void JAIStream::setStreamInterPitch(u8, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void JAIStream::setStreamInterFxmix(u8, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void JAIStream::setStreamInterDolby(u8, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B4FCC
 * @note Size: 0xC
 */
void JAIStream::setStreamPrepareFlag(u8 flag)
{
	JAInter::StreamMgr::streamUpdate->mPrepareFlag = flag;
}

/**
 * @note Address: 0x800B4FD8
 * @note Size: 0x40
 */
bool JAIStream::checkStreamReady()
{
	if (mState == SOUNDSTATE_Ready && JAInter::StreamMgr::getSystemStatus() == 1) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x800B5018
 * @note Size: 0xA0
 */
void JAIStream::setChannelVolume(u8 type, f32 value, u32 moveTime)
{
	JAInter::StreamMgr::getChannelMax();
	int result = mStreamParameter.mChannelVolumes[type].set(value, moveTime);
	if (result == JAInter::MOVEPARA_SetTarget) {
		mStreamParameter.mChannelVolumeFlags |= 1 << type;
	}
	if (result != JAInter::MOVEPARA_AlreadySet) {
		mStreamParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_TrackVolume;
	}
}

/**
 * @note Address: 0x800B50B8
 * @note Size: 0xA0
 */
void JAIStream::setChannelPan(u8 type, f32 value, u32 moveTime)
{
	JAInter::StreamMgr::getChannelMax();
	int result = mStreamParameter.mChannelPans[type].set(value, moveTime);
	if (result == JAInter::MOVEPARA_SetTarget) {
		mStreamParameter.mChannelPanFlags |= 1 << type;
	}
	if (result != JAInter::MOVEPARA_AlreadySet) {
		mStreamParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_TrackPan;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
void JAIStream::setChannelFxmix(u8, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
void JAIStream::setChannelDolby(u8, f32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void JAIStream::getChannelVolume(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void JAIStream::getChannelPan(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void JAIStream::getChannelFxmix(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void JAIStream::getChannelDolby(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B5158
 * @note Size: 0x1E8
 */
void JAISound::setPauseMode(u8 pauseMode, u8 volume)
{
	switch (mSoundID & JAISoundID_TypeMask) {
	case JAISoundID_Type_Sequence: {
		JAISequence* sequence = static_cast<JAISequence*>(this);
		if (!&sequence->mSeqParameter) {
			break;
		}
		if (pauseMode == SOUNDPAUSE_Unk3) {
			pauseMode = SOUNDPAUSE_Unk4;
		}
		if (pauseMode) {
			switch (pauseMode) {
			case SOUNDPAUSE_Unk1:
				sequence->setVolumeU7(volume, 1, SOUNDPARAM_Pause);
				break;
			case SOUNDPAUSE_Unk2:
				sequence->mSeqParameter.mTrack.pause(true, true);
				break;
			}
		} else {
			switch (sequence->mSeqParameter.mPauseMode) {
			case SOUNDPAUSE_Unk1:
				sequence->setVolume(1.0f, 1, SOUNDPARAM_Pause);
				break;
			case SOUNDPAUSE_Unk2:
				sequence->mSeqParameter.mTrack.pause(false, true);
				break;
			}
		}
		sequence->mSeqParameter.mPauseMode = pauseMode;
		break;
	}

	case JAISoundID_Type_Stream: {
		JAIStream* stream = static_cast<JAIStream*>(this);
		if (!&stream->mStreamParameter) {
			break;
		}
		if (pauseMode) {
			switch (pauseMode) {
			case SOUNDPAUSE_Unk1:
				stream->setVolume(volume / 127.0f, 1, SOUNDPARAM_Pause);
				break;
			case SOUNDPAUSE_Unk2:
				JAInter::StreamMgr::getStreamObjectPointer()->pause(true);
				break;
			}

		} else {
			switch (stream->mStreamParameter.mPauseMode) {
			case SOUNDPAUSE_Unk1:
				stream->setVolume(1.0f, 1, SOUNDPARAM_Pause);
				break;
			case SOUNDPAUSE_Unk2:
				JAInter::StreamMgr::getStreamObjectPointer()->pause(false);
				break;
			}
		}
		stream->mStreamParameter.mPauseMode = pauseMode;
		break;
	}
	}
}

/**
 * @note Address: 0x800B5470
 * @note Size: 0xC
 * setSeqPrepareFlag__11JAISequenceFUc
 */
void JAISequence::setSeqPrepareFlag(u8 seqPrepareFlag)
{
	mSeqParameter.mUpdateData->mPrepareFlag = seqPrepareFlag;
}

/**
 * @note Address: 0x800B547C
 * @note Size: 0x2C
 * checkSeqReady__11JAISequenceFv
 */
bool JAISequence::checkSeqReady()
{
	if (mState == SOUNDSTATE_Loaded && mSeqParameter._27C == 0xFFFFFFFF) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x800B54A8
 * @note Size: 0x2C
 * getSeqInterVolume__11JAISequenceFUc
 */
f32 JAISequence::getSeqInterVolume(u8 type)
{
	if (mState == SOUNDSTATE_Playing || mState == SOUNDSTATE_Fadeout) {
		return mSeqParameter.mVolumes[type].mCurrentValue;
	}
	return -1.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void JAISequence::getSeqInterPan(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void JAISequence::getSeqInterPitch(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void JAISequence::getSeqInterFxmix(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void JAISequence::getSeqInterDolby(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void JAISequence::getSeqTempoProportion()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void JAISequence::getSeqPortData(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x12C
 */
void JAISequence::getTrackParameterU7(u8, char)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC4
 */
void JAISequence::getTrackParameterF32(u8, char)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAISound::getPointer(u8, char)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void JAISequence::getTrackPortData(u8, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void JAISe::getSeParametermeterF32(u8, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void JAIStream::getStreamInterVolume(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void JAIStream::getStreamInterPan(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void JAIStream::getStreamInterPitch(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void JAIStream::getStreamInterFxmix(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void JAIStream::getStreamInterDolby(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAISound::getActorGroundNumber()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B54D4
 * @note Size: 0x3C
 */
u32 JAISound::getTrackPortRoute(u8 p1, u8 p2)
{
	if (IsJAISoundIDInUse(mSoundID) == 0) {
		return (p1 >> 4) + (2 << 28) + ((p1 & 0xF) << 4) + (p2 << 16);
	} else {
		return (p1 & 0xF) + (1 << 28) + (p2 << 16);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAISe::getSeInfoPointer()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B5510
 * @note Size: 0x88
 */
u32 JAISound::checkSoundHandle(u32 id, void* p2)
{
	u32 result = 0;
	if ((mSoundID & JAISoundID_TypeMask) != (id & JAISoundID_TypeMask)) {
		stop(0);
	} else if (mSoundInfo->mPriority <= static_cast<JAInter::SoundInfo*>(p2)->mPriority) {
		stop(0);
	} else {
		result = 1;
	}
	return result;
}

/**
 * @note Address: 0x800B5598
 * @note Size: 0x4C
 * getFadeCounter__11JAISequenceFv
 */
u32 JAISequence::getFadeCounter()
{
	if (JAInter::SequenceMgr::getPlayTrackInfo(_14)->mActiveTrackFlag & JAInter::SOUNDACTIVE_DoFadeout) {
		return mFadeCounter;
	}
	return mSeqParameter.mVolumes[SOUNDPARAM_Fadeout].mMoveCounter - 1;
}

/**
 * @note Address: 0x800B55E4
 * @note Size: 0xC
 * getFadeCounter__5JAISeFv
 */
u32 JAISe::getFadeCounter()
{
	return mSeParam.mVolumes[SOUNDPARAM_Direct].mMoveCounter - 1;
}

/**
 * @note Address: 0x800B55F0
 * @note Size: 0x24
 * getFadeCounter__9JAIStreamFv
 */
u32 JAIStream::getFadeCounter()
{
	if (mStreamParameter.mUpdateData->mActiveTrackFlag & JAInter::SOUNDACTIVE_DoFadeout) {
		return mFadeCounter;
	}
	return mStreamParameter.mVolumes[SOUNDPARAM_Fadeout].mMoveCounter - 1;
}

/**
 * @note Address: 0x800B5614
 * @note Size: 0xE8
 */
void JAISound::initParameter(void* handlePtr, JAInter::Actor* actor, u32 soundID, u32 fadeTime, u8 camId, JAInter::SoundInfo* info)
{
	mSoundID = soundID;
	if (actor) {
		mCreatureObj = actor->mObj;
		if (actor->mObj) {
			mPosition     = actor->mVec2;
			mMapInfoIndex = actor->mInfoIndex;
		} else {
			mPosition     = nullptr;
			mMapInfoIndex = actor->mInfoIndex;
		}
		mIsPlayingWithActor = actor->mFlag.boolView[0];
	} else {
		mCreatureObj        = nullptr;
		mPosition           = nullptr;
		mIsPlayingWithActor = false;
		mMapInfoIndex       = 0;
	}
	mMainSoundPPointer         = (void**)handlePtr;
	mFadeCounter               = fadeTime;
	mCameraIndex               = camId;
	mSoundInfo                 = info;
	mFinishWaitTimer           = 10;
	mDistanceParameterMoveTime = JAIGlobalParameter::getParamDistanceParameterMoveTime();
	mAdjustPriority            = 0;
	mActiveTimer               = 0;
	if (mPosition) {
		mSoundObj->mDistance = JAIGlobalParameter::getParamDistanceMax() * 10.0f;
	} else {
		mSoundObj->mDistance = 0.0f;
	}
}

/**
 * @note Address: 0x800B56FC
 * @note Size: 0x70
 * init__Q27JAInter9LinkSoundFv
 */
void JAInter::LinkSound::init()
{
	mFreeList = new (JAIBasic::msCurrentHeap, 0x20) JSUList<JAISound>();
	mUsedList = new (JAIBasic::msCurrentHeap, 0x20) JSUList<JAISound>();
}

/**
 * @note Address: 0x800B576C
 * @note Size: 0x7C
 */
JAISound* JAInter::LinkSound::getSound()
{
	JAISound* sound         = nullptr;
	JSULink<JAISound>* link = mFreeList->getFirst();
	if (link) {
		mFreeList->remove(link);
		mUsedList->prepend(link);
		sound = link->getObject();
		sound->onGet();
	}
	return sound;
}

/**
 * @note Address: 0x800B57EC
 * @note Size: 0x68
 * @warning This function checks for null, and then calls a virtual function on the arg regardless of it being null.
 */
void JAInter::LinkSound::releaseSound(JAISound* sound)
{
	if (sound) {
		if (mUsedList->remove(sound) != 0) {
			mFreeList->prepend(sound);
		}
	}
	sound->onRelease();
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void JAInter::LinkSound::getFreeStartFirstObject()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void JAInter::LinkSound::getUsedEndFirstObject()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B5858
 * @note Size: 0x98
 * set__Q27JAInter11MoveParaSetFfUl
 */
int JAInter::MoveParaSet::set(f32 value, u32 moveTime)
{
	if (mMoveCounter == 0 && mCurrentValue == value) {
		return MOVEPARA_AlreadySet;
	}
	if (mMoveCounter != 0 && mTargetValue == value) {
		return MOVEPARA_AlreadySet;
	}
	mTargetValue = value;
	if (moveTime == 0) {
		mCurrentValue = value;
		return MOVEPARA_SetCurrent;
	}
	mMoveAmount  = (mCurrentValue - mTargetValue) / (moveTime + 1);
	mMoveCounter = moveTime + 1;
	return MOVEPARA_SetTarget;
}

/**
 * @note Address: 0x800B58F0
 * @note Size: 0x4C
 * move__Q27JAInter11MoveParaSetFv
 */
BOOL JAInter::MoveParaSet::move()
{
	BOOL result;
	if (mMoveCounter == 0) {
		result = FALSE;
	} else {
		if (--mMoveCounter != 0) {
			result = TRUE;
			mCurrentValue -= mMoveAmount;
		} else {
			result        = FALSE;
			mCurrentValue = mTargetValue;
		}
	}
	return result;
}
