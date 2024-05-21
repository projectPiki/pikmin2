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

/**
 * @note Address: N/A
 * @note Size: 0x78
 * __ct__8JAISoundFv
 */
JAISound::JAISound()
    : JSULink<JAISound>(this)
    , mState(SOUNDSTATE_Inactive)
    , _16(10)
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
 * @note Address: N/A
 * @note Size: 0x58
 */
JAInter::SeqParameter::~SeqParameter()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
JAISound::~JAISound()
{
	// UNUSED FUNCTION
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
u8 JAISe::getSeCategoryNumber() { return JAInter::SeMgr::changeIDToCategory(mSoundID); }

/**
 * @note Address: 0x800B3B48
 * @note Size: 0xC
 */
u32 JAISound::getSwBit() { return mSoundInfo->mFlag; }

/**
 * @note Address: 0x800B3B54
 * @note Size: 0x10
 */
u32 JAISound::checkSwBit(u32 flag) { return flag & getSwBit(); }

/**
 * @note Address: 0x800B3B64
 * @note Size: 0xC
 */
u8 JAISound::getInfoPriority() { return mSoundInfo->mPriority; }

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
void JAISound::stop(u32 fadeTime) { JAIBasic::msBasic->stopSoundHandle(this, fadeTime); }

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
	if (_18 != 4) {
		dist = mSoundObj[_18].mDistance;
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
	if (JAIGlobalParameter::audioCameraMax == 1) {
		JAISound_0x34* obj = mSoundObj;
		f32 absX           = FABS(obj->mPosition.x);
		f32 absZ           = FABS(obj->mPosition.z);
		if (absX < 1.0f && absZ < 1.0f) {
			return 0.5f;
		}
		if (JAIGlobalParameter::panDistanceMax < absX) {
			absX = JAIGlobalParameter::panDistanceMax;
		}
		if (JAIGlobalParameter::panDistanceMax < absZ) {
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
		return pan;
	}

	// audioCameraMax != 1
	if (_18 != 4) {
		return _18 & 1;
	}
	return 0.5f;
	/*
	stwu     r1, -0x10(r1)
	lwz      r0, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	cmplwi   r0, 1
	bne      lbl_800B3FFC
	lwz      r3, 0x34(r3)
	lfs      f0, lbl_80516FE0@sda21(r2)
	lfs      f2, 0(r3)
	lfs      f1, 8(r3)
	fabs     f2, f2
	fabs     f3, f1
	frsp     f1, f2
	frsp     f2, f3
	fmr      f4, f1
	fmr      f3, f2
	fcmpo    cr0, f1, f0
	bge      lbl_800B3F2C
	fcmpo    cr0, f2, f0
	bge      lbl_800B3F2C
	lfs      f1, lbl_80516FE8@sda21(r2)
	b        lbl_800B4030

lbl_800B3F2C:
	lfs      f0, panDistanceMax__18JAIGlobalParameter@sda21(r13)
	fcmpo    cr0, f0, f1
	bge      lbl_800B3F3C
	fmr      f4, f0

lbl_800B3F3C:
	fcmpo    cr0, f0, f2
	bge      lbl_800B3F48
	fmr      f3, f0

lbl_800B3F48:
	lfs      f1, lbl_80516FE4@sda21(r2)
	lfs      f2, 0(r3)
	fcmpu    cr0, f1, f2
	bne      lbl_800B3F6C
	lfs      f0, 8(r3)
	fcmpu    cr0, f1, f0
	bne      lbl_800B3F6C
	lfs      f0, lbl_80516FE8@sda21(r2)
	b        lbl_800B3FF4

lbl_800B3F6C:
	lfs      f0, lbl_80516FE4@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_800B3FA8
	fcmpo    cr0, f4, f3
	cror     2, 1, 2
	bne      lbl_800B3FA8
	lfs      f2, panDistance2Max__18JAIGlobalParameter@sda21(r13)
	lfs      f1, panAngleParameter__18JAIGlobalParameter@sda21(r13)
	fsubs    f0, f2, f3
	lfs      f3, lbl_80516FE0@sda21(r2)
	fsubs    f2, f2, f4
	fmuls    f0, f1, f0
	fdivs    f0, f2, f0
	fsubs    f0, f3, f0
	b        lbl_800B3FF4

lbl_800B3FA8:
	lfs      f0, lbl_80516FE4@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_800B3FE0
	fcmpo    cr0, f4, f3
	cror     2, 1, 2
	bne      lbl_800B3FE0
	lfs      f2, panDistance2Max__18JAIGlobalParameter@sda21(r13)
	lfs      f1, panAngleParameter__18JAIGlobalParameter@sda21(r13)
	fsubs    f0, f2, f3
	fsubs    f2, f2, f4
	fmuls    f0, f1, f0
	fdivs    f0, f2, f0
	b        lbl_800B3FF4

lbl_800B3FE0:
	lfs      f0, panAngleParameter2__18JAIGlobalParameter@sda21(r13)
	lfs      f1, lbl_80516FE8@sda21(r2)
	fmuls    f0, f0, f3
	fdivs    f0, f2, f0
	fadds    f0, f1, f0

lbl_800B3FF4:
	fmr      f1, f0
	b        lbl_800B4030

lbl_800B3FFC:
	lbz      r0, 0x18(r3)
	cmplwi   r0, 4
	beq      lbl_800B402C
	clrlwi   r3, r0, 0x1f
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r0, 8(r1)
	lfd      f1, lbl_80516FF0@sda21(r2)
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f1
	b        lbl_800B4030

lbl_800B402C:
	lfs      f1, lbl_80516FE8@sda21(r2)

lbl_800B4030:
	addi     r1, r1, 0x10
	blr
	*/
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
	f32 x                   = soundX - soundObj->_0C.x;
	f32 y                   = soundY - soundObj->_0C.y;
	f32 z                   = soundZ - soundObj->_0C.z;
	f32 dist1               = dolsqrtfull(SQUARE(soundX) + SQUARE(soundY) + SQUARE(soundZ));
	f32 x2                  = soundX + x;
	f32 y2                  = soundY + y;
	f32 z2                  = soundZ + z;

	f32 dist2 = dolsqrtfull(SQUARE(x2) + SQUARE(y2) + SQUARE(z2));

	f32 sqVal = SQUARE(p1 >> 8);

	dist1 -= dist2;
	f32 posDopplar = 1.0f / (1.0f - (dist1 / (JAIGlobalParameter::dopplarParameter / sqVal)));

	if (posDopplar < 0.1f) {
		posDopplar = 0.1f;
	} else if (posDopplar > 2.0f) {
		posDopplar = 2.0f;
	}

	return posDopplar;
	/*
	stwu     r1, -0x20(r1)
	lfs      f0, lbl_80516FE4@sda21(r2)
	lwz      r3, 0x34(r3)
	lfs      f6, 4(r3)
	lfs      f2, 0x10(r3)
	fmuls    f1, f6, f6
	lfs      f5, 0(r3)
	lfs      f3, 0xc(r3)
	fsubs    f9, f6, f2
	lfs      f7, 8(r3)
	fmadds   f1, f5, f5, f1
	lfs      f2, 0x14(r3)
	fsubs    f8, f5, f3
	fmadds   f4, f7, f7, f1
	fsubs    f10, f7, f2
	fcmpo    cr0, f4, f0
	ble      lbl_800B40C4
	frsqrte  f1, f4
	lfd      f3, lbl_80516FF8@sda21(r2)
	lfd      f2, lbl_80517000@sda21(r2)
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f0, f1, f0
	fmul     f4, f4, f0
	frsp     f4, f4
	b        lbl_800B4148

lbl_800B40C4:
	lfd      f0, lbl_80517008@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_800B40DC
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)
	b        lbl_800B4148

lbl_800B40DC:
	stfs     f4, 0xc(r1)
	lis      r0, 0x7f80
	lwz      r5, 0xc(r1)
	rlwinm   r3, r5, 0, 1, 8
	cmpw     r3, r0
	beq      lbl_800B4104
	bge      lbl_800B4134
	cmpwi    r3, 0
	beq      lbl_800B411C
	b        lbl_800B4134

lbl_800B4104:
	clrlwi.  r0, r5, 9
	beq      lbl_800B4114
	li       r0, 1
	b        lbl_800B4138

lbl_800B4114:
	li       r0, 2
	b        lbl_800B4138

lbl_800B411C:
	clrlwi.  r0, r5, 9
	beq      lbl_800B412C
	li       r0, 5
	b        lbl_800B4138

lbl_800B412C:
	li       r0, 3
	b        lbl_800B4138

lbl_800B4134:
	li       r0, 4

lbl_800B4138:
	cmpwi    r0, 1
	bne      lbl_800B4148
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)

lbl_800B4148:
	fadds    f1, f6, f9
	lfs      f0, lbl_80516FE4@sda21(r2)
	fadds    f2, f5, f8
	fadds    f3, f7, f10
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fmadds   f5, f3, f3, f1
	fcmpo    cr0, f5, f0
	ble      lbl_800B41B4
	frsqrte  f1, f5
	lfd      f3, lbl_80516FF8@sda21(r2)
	lfd      f2, lbl_80517000@sda21(r2)
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f5, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f5, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f5, f0, f2
	fmul     f0, f1, f0
	fmul     f0, f5, f0
	frsp     f0, f0
	b        lbl_800B4240

lbl_800B41B4:
	lfd      f0, lbl_80517008@sda21(r2)
	fcmpo    cr0, f5, f0
	bge      lbl_800B41CC
	lis      r3, __float_nan@ha
	lfs      f0, __float_nan@l(r3)
	b        lbl_800B4240

lbl_800B41CC:
	stfs     f5, 8(r1)
	lis      r0, 0x7f80
	lwz      r5, 8(r1)
	rlwinm   r3, r5, 0, 1, 8
	cmpw     r3, r0
	beq      lbl_800B41F4
	bge      lbl_800B4224
	cmpwi    r3, 0
	beq      lbl_800B420C
	b        lbl_800B4224

lbl_800B41F4:
	clrlwi.  r0, r5, 9
	beq      lbl_800B4204
	li       r0, 1
	b        lbl_800B4228

lbl_800B4204:
	li       r0, 2
	b        lbl_800B4228

lbl_800B420C:
	clrlwi.  r0, r5, 9
	beq      lbl_800B421C
	li       r0, 5
	b        lbl_800B4228

lbl_800B421C:
	li       r0, 3
	b        lbl_800B4228

lbl_800B4224:
	li       r0, 4

lbl_800B4228:
	cmpwi    r0, 1
	bne      lbl_800B423C
	lis      r3, __float_nan@ha
	lfs      f0, __float_nan@l(r3)
	b        lbl_800B4240

lbl_800B423C:
	fmr      f0, f5

lbl_800B4240:
	srwi     r3, r4, 8
	lis      r0, 0x4330
	mullw    r3, r3, r3
	stw      r0, 0x10(r1)
	lfd      f2, lbl_80517018@sda21(r2)
	fsubs    f4, f4, f0
	lfs      f3, dopplarParameter__18JAIGlobalParameter@sda21(r13)
	lfs      f5, lbl_80516FE0@sda21(r2)
	stw      r3, 0x14(r1)
	lfs      f0, lbl_80517010@sda21(r2)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fdivs    f1, f3, f1
	fdivs    f1, f4, f1
	fsubs    f1, f5, f1
	fdivs    f1, f5, f1
	fcmpo    cr0, f1, f0
	bge      lbl_800B4290
	fmr      f1, f0
	b        lbl_800B42A0

lbl_800B4290:
	lfs      f0, lbl_80517014@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_800B42A0
	fmr      f1, f0

lbl_800B42A0:
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800B42A8
 * @note Size: 0x74
 */
f32 JAISound::setDistanceDolbyCommon()
{
	JAISound_0x34* obj = mSoundObj;
	if (_3C == 0 || obj->mPosition.z < JAIGlobalParameter::seDolbyFrontDistanceMax) {
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
void JAISe::setSeInterRandomPara(f32*, u32, f32, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B465C
 * @note Size: 0x158
 */
void JAISe::setSeInterVolume(u8 type, f32 value, u32 moveTime, u8 p4)
{
	if (p4) {
		// these need tweaking a bit
		f32 val  = (u32)(4.2949673E9f * JAInter::Const::random.nextFloat_0_1()) + value;
		f32 val2 = (1.0f + val) / 1000.0f;

		if (val + val2 > 1.0f) {
			value = 1.0f;
		} else if (value < (0.0f - val2)) {
			value = 0.0f;
		} else {
			value += val2;
		}
	}
	mSeParam.mVolumes[type].set(value, moveTime);
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	clrlwi.  r6, r6, 0x18
	fmr      f31, f1
	mr       r29, r3
	mr       r30, r4
	mr       r31, r5
	beq      lbl_800B4774
	lis      r3, 0x0019660D@ha
	lwz      r4, random__Q27JAInter5Const@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lis      r5, 0x02040811@ha
	mullw    r3, r4, r0
	lfs      f0, lbl_80516FE0@sda21(r2)
	addi     r4, r5, 0x02040811@l
	lfs      f2, lbl_80517024@sda21(r2)
	addis    r3, r3, 0x3c6f
	addi     r0, r3, -3233
	mulli    r3, r6, 0x3e8
	stw      r0, random__Q27JAInter5Const@sda21(r13)
	srwi     r0, r0, 9
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	mulhwu   r4, r4, r3
	lfs      f1, 8(r1)
	fsubs    f0, f1, f0
	subf     r0, r4, r3
	srwi     r0, r0, 1
	fmuls    f1, f2, f0
	add      r0, r0, r4
	srwi     r28, r0, 6
	bl       __cvt_fp2unsigned
	slwi     r5, r28, 1
	lis      r0, 0x4330
	divwu    r4, r3, r5
	stw      r0, 0x10(r1)
	lfd      f4, lbl_80517018@sda21(r2)
	stw      r28, 0x1c(r1)
	lfs      f1, lbl_80517028@sda21(r2)
	stw      r0, 0x18(r1)
	mullw    r0, r4, r5
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_80516FE0@sda21(r2)
	fsubs    f2, f2, f4
	subf     r3, r0, r3
	addi     r0, r3, 1
	stw      r0, 0x14(r1)
	lfd      f3, 0x10(r1)
	fsubs    f3, f3, f4
	fsubs    f2, f3, f2
	fdivs    f2, f2, f1
	fadds    f1, f31, f2
	fcmpo    cr0, f1, f0
	ble      lbl_800B4758
	fmr      f31, f0
	b        lbl_800B4774

lbl_800B4758:
	lfs      f1, lbl_80516FE4@sda21(r2)
	fsubs    f0, f1, f2
	fcmpo    cr0, f31, f0
	bge      lbl_800B4770
	fmr      f31, f1
	b        lbl_800B4774

lbl_800B4770:
	fadds    f31, f31, f2

lbl_800B4774:
	rlwinm   r3, r30, 4, 0x14, 0x1b
	fmr      f1, f31
	addi     r3, r3, 0x16c
	mr       r4, r31
	add      r3, r29, r3
	bl       set__Q27JAInter11MoveParaSetFfUl
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x800B47B4
 * @note Size: 0x158
 */
void JAISe::setSeInterPan(u8 type, f32 value, u32 moveTime, u8 p4)
{
	if (p4) {
		// these need tweaking a bit
		f32 val  = (u32)(4.2949673E9f * JAInter::Const::random.nextFloat_0_1()) + value;
		f32 val2 = (1.0f + val) / 1000.0f;

		if (val + val2 > 1.0f) {
			value = 1.0f;
		} else if (value < (0.0f - val2)) {
			value = 0.0f;
		} else {
			value += val2;
		}
	}
	mSeParam.mPans[type].set(value, moveTime);
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	clrlwi.  r6, r6, 0x18
	fmr      f31, f1
	mr       r29, r3
	mr       r30, r4
	mr       r31, r5
	beq      lbl_800B48CC
	lis      r3, 0x0019660D@ha
	lwz      r4, random__Q27JAInter5Const@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lis      r5, 0x02040811@ha
	mullw    r3, r4, r0
	lfs      f0, lbl_80516FE0@sda21(r2)
	addi     r4, r5, 0x02040811@l
	lfs      f2, lbl_80517024@sda21(r2)
	addis    r3, r3, 0x3c6f
	addi     r0, r3, -3233
	mulli    r3, r6, 0x3e8
	stw      r0, random__Q27JAInter5Const@sda21(r13)
	srwi     r0, r0, 9
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	mulhwu   r4, r4, r3
	lfs      f1, 8(r1)
	fsubs    f0, f1, f0
	subf     r0, r4, r3
	srwi     r0, r0, 1
	fmuls    f1, f2, f0
	add      r0, r0, r4
	srwi     r28, r0, 6
	bl       __cvt_fp2unsigned
	slwi     r5, r28, 1
	lis      r0, 0x4330
	divwu    r4, r3, r5
	stw      r0, 0x10(r1)
	lfd      f4, lbl_80517018@sda21(r2)
	stw      r28, 0x1c(r1)
	lfs      f1, lbl_80517028@sda21(r2)
	stw      r0, 0x18(r1)
	mullw    r0, r4, r5
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_80516FE0@sda21(r2)
	fsubs    f2, f2, f4
	subf     r3, r0, r3
	addi     r0, r3, 1
	stw      r0, 0x14(r1)
	lfd      f3, 0x10(r1)
	fsubs    f3, f3, f4
	fsubs    f2, f3, f2
	fdivs    f2, f2, f1
	fadds    f1, f31, f2
	fcmpo    cr0, f1, f0
	ble      lbl_800B48B0
	fmr      f31, f0
	b        lbl_800B48CC

lbl_800B48B0:
	lfs      f1, lbl_80516FE4@sda21(r2)
	fsubs    f0, f1, f2
	fcmpo    cr0, f31, f0
	bge      lbl_800B48C8
	fmr      f31, f1
	b        lbl_800B48CC

lbl_800B48C8:
	fadds    f31, f31, f2

lbl_800B48CC:
	rlwinm   r3, r30, 4, 0x14, 0x1b
	fmr      f1, f31
	addi     r3, r3, 0x1ec
	mr       r4, r31
	add      r3, r29, r3
	bl       set__Q27JAInter11MoveParaSetFfUl
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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
		// these need tweaking a bit
		f32 val  = (u32)(4.2949673E9f * JAInter::Const::random.nextFloat_0_1()) + value;
		f32 val2 = (1.0f + val) / 1000.0f;

		if (val + val2 > 1.0f) {
			value = 1.0f;
		} else if (value < (0.0f - val2)) {
			value = 0.0f;
		} else {
			value += val2;
		}
	}
	mSeParam.mDolbys[type].set(value, moveTime);
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	clrlwi.  r6, r6, 0x18
	fmr      f31, f1
	mr       r29, r3
	mr       r30, r4
	mr       r31, r5
	beq      lbl_800B4A24
	lis      r3, 0x0019660D@ha
	lwz      r4, random__Q27JAInter5Const@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lis      r5, 0x02040811@ha
	mullw    r3, r4, r0
	lfs      f0, lbl_80516FE0@sda21(r2)
	addi     r4, r5, 0x02040811@l
	lfs      f2, lbl_80517024@sda21(r2)
	addis    r3, r3, 0x3c6f
	addi     r0, r3, -3233
	mulli    r3, r6, 0x3e8
	stw      r0, random__Q27JAInter5Const@sda21(r13)
	srwi     r0, r0, 9
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	mulhwu   r4, r4, r3
	lfs      f1, 8(r1)
	fsubs    f0, f1, f0
	subf     r0, r4, r3
	srwi     r0, r0, 1
	fmuls    f1, f2, f0
	add      r0, r0, r4
	srwi     r28, r0, 6
	bl       __cvt_fp2unsigned
	slwi     r5, r28, 1
	lis      r0, 0x4330
	divwu    r4, r3, r5
	stw      r0, 0x10(r1)
	lfd      f4, lbl_80517018@sda21(r2)
	stw      r28, 0x1c(r1)
	lfs      f1, lbl_80517028@sda21(r2)
	stw      r0, 0x18(r1)
	mullw    r0, r4, r5
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_80516FE0@sda21(r2)
	fsubs    f2, f2, f4
	subf     r3, r0, r3
	addi     r0, r3, 1
	stw      r0, 0x14(r1)
	lfd      f3, 0x10(r1)
	fsubs    f3, f3, f4
	fsubs    f2, f3, f2
	fdivs    f2, f2, f1
	fadds    f1, f31, f2
	fcmpo    cr0, f1, f0
	ble      lbl_800B4A08
	fmr      f31, f0
	b        lbl_800B4A24

lbl_800B4A08:
	lfs      f1, lbl_80516FE4@sda21(r2)
	fsubs    f0, f1, f2
	fcmpo    cr0, f31, f0
	bge      lbl_800B4A20
	fmr      f31, f1
	b        lbl_800B4A24

lbl_800B4A20:
	fadds    f31, f31, f2

lbl_800B4A24:
	rlwinm   r3, r30, 4, 0x14, 0x1b
	fmr      f1, f31
	addi     r3, r3, 0x3ec
	mr       r4, r31
	add      r3, r29, r3
	bl       set__Q27JAInter11MoveParaSetFfUl
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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
		setFxmix(JAIBasic::msBasic->getMapInfoFxParameter(_30), 0, SOUNDPARAM_Unk3);
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
	if (!_1A) {
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
		// pitch = 1.0f - ((JAInter::Const::random.nextFloat_0_1() * 16.0f) / 192.0f;
		// pitch = 1.0f - ((JAInter::Const::random.idkanymore() & 0xF) ^ 0x80000000) / 192.0f;
		// pitch = 1.0f - JAInter::Const::random.idkanymore() / 192.0f;
		pitch = JAInter::Const::random.idkanymore();
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
		pitch += _17 / 192.0f;
	}
	mSeParam.mPitches[SOUNDPARAM_Distance].set(pitch, moveTime);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f1, lbl_80516FE0@sda21(r2)
	stw      r0, 0x24(r1)
	lwz      r5, 0x44(r3)
	lwz      r0, 0(r5)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_800B4D34
	lis      r5, 0x0019660D@ha
	lwz      r6, random__Q27JAInter5Const@sda21(r13)
	addi     r5, r5, 0x0019660D@l
	lis      r0, 0x4330
	mullw    r5, r6, r5
	stw      r0, 0x18(r1)
	lfs      f4, lbl_8051702C@sda21(r2)
	lfd      f3, lbl_80516FF0@sda21(r2)
	lfs      f0, lbl_80517030@sda21(r2)
	addis    r5, r5, 0x3c6f
	addi     r5, r5, -3233
	srwi     r0, r5, 9
	stw      r5, random__Q27JAInter5Const@sda21(r13)
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	lfs      f2, 8(r1)
	fsubs    f2, f2, f1
	fmuls    f2, f4, f2
	fctiwz   f2, f2
	stfd     f2, 0x10(r1)
	lwz      r0, 0x14(r1)
	clrlwi   r0, r0, 0x1c
	xoris    r0, r0, 0x8000
	stw      r0, 0x1c(r1)
	lfd      f2, 0x18(r1)
	fsubs    f2, f2, f3
	fdivs    f0, f2, f0
	fsubs    f1, f1, f0

lbl_800B4D34:
	lwz      r5, 0x44(r3)
	lwz      r6, 0(r5)
	rlwinm.  r0, r6, 0, 0x11, 0x11
	beq      lbl_800B4D90
	rlwinm.  r0, r6, 0, 0x1e, 0x1e
	bne      lbl_800B4D90
	rlwinm.  r0, r6, 0, 0x16, 0x17
	bne      lbl_800B4D90
	lwz      r0, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	cmplwi   r0, 1
	bne      lbl_800B4D90
	lwz      r5, 0x34(r3)
	lfs      f0, distanceMax__18JAIGlobalParameter@sda21(r13)
	lfs      f2, 0x18(r5)
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_800B4D84
	lfs      f0, seDistancepitchMax__18JAIGlobalParameter@sda21(r13)
	fadds    f1, f1, f0
	b        lbl_800B4D90

lbl_800B4D84:
	fdivs    f0, f2, f0
	lfs      f2, seDistancepitchMax__18JAIGlobalParameter@sda21(r13)
	fmadds   f1, f2, f0, f1

lbl_800B4D90:
	rlwinm.  r0, r6, 0, 0x18, 0x19
	beq      lbl_800B4DC0
	lbz      r5, 0x17(r3)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	lfd      f3, lbl_80517018@sda21(r2)
	stw      r5, 0x1c(r1)
	lfs      f0, lbl_80517030@sda21(r2)
	lfd      f2, 0x18(r1)
	fsubs    f2, f2, f3
	fdivs    f0, f2, f0
	fadds    f1, f1, f0

lbl_800B4DC0:
	addi     r3, r3, 0x2ac
	clrlwi   r4, r4, 0x18
	bl       set__Q27JAInter11MoveParaSetFfUl
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
void JAISe::setSeDistanceFir(u8) { }

/**
 * @note Address: 0x800B4F28
 * @note Size: 0xA4
 */
void JAISe::setSeDistanceDolby(u8 moveTime)
{
	f32 dolby = 0.0f;
	if (!_1A) {
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
void JAIStream::setStreamPrepareFlag(u8 flag) { JAInter::StreamMgr::streamUpdate->mPrepareFlag = flag; }

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

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lis      r0, 0xc000
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r4
	lwz      r6, 0x20(r3)
	rlwinm   r4, r6, 0, 0, 1
	cmpw     r4, r0
	beq      lbl_800B5264
	bge      lbl_800B5328
	lis      r3, 0x80000001@ha
	addi     r0, r3, 0x80000001@l
	cmpw     r4, r0
	bge      lbl_800B5328
	addic.   r0, r31, 0x48
	beq      lbl_800B5328
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 3
	bne      lbl_800B51B4
	li       r30, 4

lbl_800B51B4:
	clrlwi.  r0, r30, 0x18
	beq      lbl_800B520C
	cmpwi    r0, 2
	beq      lbl_800B51F8
	bge      lbl_800B525C
	cmpwi    r0, 1
	bge      lbl_800B51D4
	b        lbl_800B525C

lbl_800B51D4:
	mr       r3, r31
	mr       r4, r5
	lwz      r12, 0x10(r31)
	li       r5, 1
	li       r6, 0xb
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	b        lbl_800B525C

lbl_800B51F8:
	addi     r3, r31, 0x30c
	li       r4, 1
	li       r5, 1
	bl       pause__8JASTrackFbb
	b        lbl_800B525C

lbl_800B520C:
	lbz      r0, 0x2c1(r31)
	cmpwi    r0, 2
	beq      lbl_800B524C
	bge      lbl_800B525C
	cmpwi    r0, 1
	bge      lbl_800B5228
	b        lbl_800B525C

lbl_800B5228:
	mr       r3, r31
	lfs      f1, lbl_80516FE0@sda21(r2)
	lwz      r12, 0x10(r31)
	li       r4, 1
	li       r5, 0xb
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_800B525C

lbl_800B524C:
	addi     r3, r31, 0x30c
	li       r4, 0
	li       r5, 1
	bl       pause__8JASTrackFbb

lbl_800B525C:
	stb      r30, 0x2c1(r31)
	b        lbl_800B5328

lbl_800B5264:
	addic.   r0, r31, 0x48
	beq      lbl_800B5328
	clrlwi.  r0, r30, 0x18
	beq      lbl_800B52DC
	cmpwi    r0, 2
	beq      lbl_800B52CC
	bge      lbl_800B5324
	cmpwi    r0, 1
	bge      lbl_800B528C
	b        lbl_800B5324

lbl_800B528C:
	clrlwi   r4, r5, 0x18
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	li       r4, 1
	lwz      r12, 0x10(r3)
	li       r5, 0xb
	stw      r0, 8(r1)
	lfd      f2, lbl_80517018@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	fsubs    f1, f1, f2
	lwz      r12, 0x1c(r12)
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl
	b        lbl_800B5324

lbl_800B52CC:
	bl       getStreamObjectPointer__Q27JAInter9StreamMgrFv
	li       r4, 1
	bl       pause__13JASAramStreamFb
	b        lbl_800B5324

lbl_800B52DC:
	lbz      r0, 0x48(r31)
	cmpwi    r0, 2
	beq      lbl_800B5318
	bge      lbl_800B5324
	cmpwi    r0, 1
	bge      lbl_800B52F8
	b        lbl_800B5324

lbl_800B52F8:
	lwz      r12, 0x10(r3)
	li       r4, 1
	lfs      f1, lbl_80516FE0@sda21(r2)
	li       r5, 0xb
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_800B5324

lbl_800B5318:
	bl       getStreamObjectPointer__Q27JAInter9StreamMgrFv
	li       r4, 0
	bl       pause__13JASAramStreamFb

lbl_800B5324:
	stb      r30, 0x48(r31)

lbl_800B5328:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800B5470
 * @note Size: 0xC
 * setSeqPrepareFlag__11JAISequenceFUc
 */
void JAISequence::setSeqPrepareFlag(u8 seqPrepareFlag) { mSeqParameter.mUpdateData->mPrepareFlag = seqPrepareFlag; }

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
u32 JAISe::getFadeCounter() { return mSeParam.mVolumes[SOUNDPARAM_Direct].mMoveCounter - 1; }

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
void JAISound::initParameter(void* handlePtr, JAInter::Actor* actor, u32 soundID, u32 fadeTime, u8 p5, JAInter::SoundInfo* info)
{
	mSoundID = soundID;
	if (actor) {
		mCreatureObj = actor->mObj;
		if (actor->mObj) {
			_3C = actor->mVec2;
			_30 = actor->mUnk;
		} else {
			_3C = nullptr;
			_30 = actor->mUnk;
		}
		_1A = actor->mFlag.boolView[0];
	} else {
		mCreatureObj = nullptr;
		_3C          = nullptr;
		_1A          = 0;
		_30          = 0;
	}
	mMainSoundPPointer         = (void**)handlePtr;
	mFadeCounter               = fadeTime;
	_18                        = p5;
	mSoundInfo                 = info;
	_16                        = 10;
	mDistanceParameterMoveTime = JAIGlobalParameter::getParamDistanceParameterMoveTime();
	mAdjustPriority            = 0;
	_2C                        = 0;
	if (_3C) {
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
 * @note Address: 0x800B57E8
 * @note Size: 0x4
 */
void JAISound::onGet() { }

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
 * @note Address: 0x800B5854
 * @note Size: 0x4
 */
void JAISound::onRelease() { }

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

/**
 * @note Address: 0x800B6864
 * @note Size: 0x130
 * setPortData__5JAISeFUcUs
 */
void JAISe::setPortData(u8 p1, u16 p2)
{
	if (mState == SOUNDSTATE_Stored) {
		mSeParam._00[p1] = p2;
		mSeParam._20 |= (1 << p1);
		return;
	}

	JAISequence* seq             = JAInter::SeMgr::seHandle;
	u8 trackNo                   = getTrackNumber();
	JAInter::SeqUpdateData* data = seq->mSeqParameter.mUpdateData;
	if (!data) {
		return;
	}
	if (seq->mState >= SOUNDSTATE_Playing) {
		seq->mSeqParameter.getTrack()->writePortApp(seq->getTrackPortRoute(trackNo, p1), p2);
	} else {
		data->mActiveTrackFlag |= JAInter::SOUNDACTIVE_TrackPortData;
		seq->mSeqParameter.mTrackPortDataFlag |= (1 << trackNo);
		seq->mSeqParameter._2B4[trackNo] |= (1 << p1);
	}

	seq->mSeqParameter._274[trackNo][p1] = p2;
}

/**
 * @note Address: 0x800B6994
 * @note Size: 0xAC
 * getPortData__5JAISeFUc
 */
u16 JAISe::getPortData(u8 p1)
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
 * @note Address: 0x800B72A0
 * @note Size: 0x17C
 * setPortData__11JAISequenceFUcUs
 */
void JAISequence::setPortData(u8 p1, u16 p2)
{
	if (mSeqParameter._10[p1].mCurrentValue == 0.0f && mState >= SOUNDSTATE_Ready) {
		u16 portVal;
		mSeqParameter.mTrack.readPortApp(p1 << 16, &portVal);
		mSeqParameter._10[p1].mCurrentValue = portVal;
	}

	int setResult = mSeqParameter._10[p1].set((f32)p2, 0);
	if (setResult == JAInter::MOVEPARA_SetTarget) {
		mSeqParameter._280 |= (1 << p1);
	}

	if (mSeqParameter.mUpdateData && setResult != JAInter::MOVEPARA_AlreadySet) {
		mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_Unk5;
	}
}
