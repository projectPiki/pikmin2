#include "Dolphin/math.h"
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
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

/**
 * @note Address: N/A
 * @note Size: 0x78
 * __ct__8JAISoundFv
 */
JAISound::JAISound()
    : JSULink<JAISound>(this)
    , _15(0)
    , _16(10)
    , _38(nullptr)
{
	// UNUSED FUNCTION
	JKRHeap* heap = JAIBasic::msCurrentHeap;
	_34           = new (heap, 0x20) JAISound_0x34[JAIGlobalParameter::getParamAudioCameraMax()];
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
    , _64()
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
u32 JAISe::getSeCategoryNumber() { return JAInter::SeMgr::changeIDToCategory(mSoundID); }

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
void JAISound::start(u32 p1)
{
	setPrepareFlag(0);
	_28 = p1;
}

/**
 * @note Address: 0x800B3BE8
 * @note Size: 0x30
 */
void JAISound::stop(u32 p1) { JAIBasic::msBasic->stopSoundHandle(this, p1); }

/**
 * @note Address: 0x800B3C18
 * @note Size: 0x78
 */
void JAISound::setPrepareFlag(u8 prepareFlag)
{
	switch (mSoundID & JAISoundID_TypeMask) {
	case JAISoundID_Type_Sequence:
		setPrepareFlag(prepareFlag);
		break;
	case JAISoundID_Type_Se:
		break;
	case JAISoundID_Type_Stream:
		setPrepareFlag(prepareFlag);
		break;
	}
}

/**
 * @note Address: 0x800B3C90
 * @note Size: 0x20
 * setPrepareFlag__9JAIStreamFUc
 */
void JAIStream::setPrepareFlag(u8 flag) { setStreamPrepareFlag(flag); }

/**
 * @note Address: 0x800B3CB0
 * @note Size: 0x20
 * setPrepareFlag__11JAISequenceFUc
 */
void JAISequence::setPrepareFlag(u8 flag) { setSeqPrepareFlag(flag); }

/**
 * @note Address: 0x800B3CD0
 * @note Size: 0x78
 */
void JAISound::checkReady()
{
	switch (mSoundID & JAISoundID_TypeMask) {
	case JAISoundID_Type_Sequence:
		checkReady();
		break;
	case JAISoundID_Type_Se:
		break;
	case JAISoundID_Type_Stream:
		checkReady();
		break;
	}
}

/**
 * @note Address: 0x800B3D48
 * @note Size: 0x20
 * checkReady__9JAIStreamFv
 */
void JAIStream::checkReady() { checkStreamReady(); }

/**
 * @note Address: 0x800B3D68
 * @note Size: 0x20
 * checkReady__11JAISequenceFv
 */
void JAISequence::checkReady() { checkSeqReady(); }

/**
 * @note Address: 0x800B3D88
 * @note Size: 0x154
 */
f32 JAISound::setDistanceVolumeCommon(f32 p1, u8 p2)
{
	f32 v1;
	if (_18 != 4) {
		v1 = _34[_18]._18;
	} else {
		v1 = _34[0]._18;
		for (u8 i = 1; i < JAIGlobalParameter::audioCameraMax; i++) {
			if (_34[i]._18 < v1) {
				v1 = _34[i]._18;
			}
		}
	}
	if (v1 < JAIGlobalParameter::maxVolumeDistance) {
		return 1.0f;
	}
	v1 -= JAIGlobalParameter::maxVolumeDistance;
	p1 -= JAIGlobalParameter::maxVolumeDistance;
	if (p2 > 3) {
		p1 /= 1 << (p2 & 3) + 1;
	} else if (p2 != 0) {
		p1 *= 1 << (p2 & 3);
	}
	if (v1 < p1) {
		if (p2 > 3) {
			return 1.0f - v1 / p1;
		}
		return (1.0f - JAIGlobalParameter::minDistanceVolume) * (1.0f - v1 / p1) + JAIGlobalParameter::minDistanceVolume;
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
		JAISound_0x34* v0 = _34;
		f32 v1            = FABS(v0->_00.x);
		f32 v2            = FABS(v0->_00.z);
		if (v1 < 1.0f && v2 < 1.0f) {
			return 0.5f;
		}
		if (JAIGlobalParameter::panDistanceMax < v1) {
			v1 = JAIGlobalParameter::panDistanceMax;
		}
		if (JAIGlobalParameter::panDistanceMax < v2) {
			v2 = JAIGlobalParameter::panDistanceMax;
		}
		if (v0->_00.x == 0.0f && v0->_00.z == 0.0f) {
			return 0.5f;
		}
		if (v0->_00.x > 0.0f && v1 >= v2) {
			return 1.0f
			     - (JAIGlobalParameter::panDistance2Max - v1)
			           / (JAIGlobalParameter::panAngleParameter * (JAIGlobalParameter::panDistance2Max - v2));
		}
		if (v0->_00.x <= 0.0f && v1 >= v2) {
			return (JAIGlobalParameter::panDistance2Max - v1)
			     / (JAIGlobalParameter::panAngleParameter * (JAIGlobalParameter::panDistance2Max - v2));
		}
		return v0->_00.x / (JAIGlobalParameter::panAngleParameter2 * v2) + 0.5f;
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
f32 JAISound::setPositionDopplarCommon(u32)
{
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
	JAISound_0x34* obj = _34;
	if (_3C == 0 || obj->_00.z < JAIGlobalParameter::seDolbyFrontDistanceMax) {
		return 0.0f;
	}
	if (obj->_00.z < 0.0f) {
		return (JAIGlobalParameter::seDolbyCenterValue * (JAIGlobalParameter::seDolbyFrontDistanceMax - obj->_00.z))
		     / JAIGlobalParameter::seDolbyFrontDistanceMax;
	}
	if (obj->_00.z < JAIGlobalParameter::seDolbyBehindDistanceMax) {
		return (127.0f - JAIGlobalParameter::seDolbyCenterValue) * (obj->_00.z / JAIGlobalParameter::seDolbyBehindDistanceMax)
		     + JAIGlobalParameter::seDolbyCenterValue;
	}
	return 127.0f;
}

/**
 * @note Address: 0x800B431C
 * @note Size: 0x88
 */
void JAISequence::setSeqInterVolume(u8 p1, f32 p2, u32 p3)
{
	int result = mSeqParameter._110[p1].set(p2, p3);
	if (result == 1) {
		mSeqParameter._284 |= 1 << p1;
	}
	if (mSeqParameter._2C0 != nullptr && result != 2) {
		mSeqParameter._2C0->_08 |= 0x40000;
	}
}

/**
 * @note Address: 0x800B43A4
 * @note Size: 0x88
 */
void JAISequence::setSeqInterPan(u8 p1, f32 p2, u32 p3)
{
	int result = mSeqParameter._250[p1].set(p2, p3);
	if (result == 1) {
		mSeqParameter._288 |= 1 << p1;
	}
	if (mSeqParameter._2C0 != nullptr && result != 2) {
		mSeqParameter._2C0->_08 |= 0x80000;
	}
}

/**
 * @note Address: 0x800B442C
 * @note Size: 0x88
 */
void JAISequence::setSeqInterPitch(u8 p1, f32 p2, u32 p3)
{
	int result = mSeqParameter._254[p1].set(p2, p3);
	if (result == 1) {
		mSeqParameter._28C |= 1 << p1;
	}
	if (mSeqParameter._2C0 != nullptr && result != 2) {
		mSeqParameter._2C0->_08 |= 0x100000;
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
void JAISequence::setWaveReadMode(long, long)
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
void JAISequence::setTrackInterruptSwitch(u8 p1, u8 p2)
{
	mSeqParameter._2B8[p1] = p2;
	if (mSeqParameter._2C0 == nullptr) {
		return;
	}
	mSeqParameter._2C0->_08 |= 0x800000;
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
void JAISequence::setTrackFxmix(u8 p1, f32 p2, u32 p3)
{
	if (_15 >= 4 && (mSeqParameter._2C0->_04 & 1 << p1) == 0) {
		return;
	}
	int result = mSeqParameter._26C[p1].set(p2, p3);
	if (result == 1) {
		mSeqParameter._2A4 |= 1 << p1;
	}
	if (mSeqParameter._2C0 != nullptr && result != 2) {
		mSeqParameter._2C0->_08 |= 0x800;
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
	if (mSeqParameter._2C0 == nullptr) {
		return;
	}
	if (_15 >= 4) {
		mSeqParameter.mTrack.writePortApp(getTrackPortRoute(p1, p2), p3);
	} else {
		mSeqParameter._2C0->_08 |= 0x1000;
		mSeqParameter._2B0 |= 1 << p1;
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
void JAISe::setSeInterVolume(u8 p1, f32 p2, u32 p3, u8 p4)
{
	// f32 v5 = p2;
	// if (p4 != 0) {
	// 	// TODO: I think this is a mapping function of TRandom_fast_. v3 and v1 are probably a max and min, in some order?
	// 	// 	uint v3  = (p4 * 1000) / 0x7F;
	// 	// 	v3       = (p4 * 1000 - (v3 >> 1)) + (v3 >> 6);
	// 	// 	u32 v2   = JAInter::Const::random.nextFloat_0_1();
	// 	// 	u32 v1   = v3 * 2;
	// 	// 	v5       = 1.0f;
	// 	// 	f32 v7 = (f32)((v2 - (v2 / v1) * v1) + 1) - ((f32)(v3) / 1000.0f);
	// 	// 	if (p2 + v7 <= v5) {
	// 	// 		v5 = 0.0f;
	// 	// 		if (v5 - v7 <= p2) {
	// 	// 			v5 = p2 + v7;
	// 	// 		}
	// 	// 	}
	// 	v5 = JAInter::Const::random.nextFloat(p2, p4);
	// }
	// mSeParam._124[p1].set(v5, p3);
	mSeParam._124[p1].set(p4 != 0 ? JAInter::Const::random.nextFloat(p2, p4) : p2, p3);

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
void JAISe::setSeInterPan(u8, f32, u32, u8)
{
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
void JAISe::setSeInterDolby(u8, f32, u32, u8)
{
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
	u8 v1 = mDistanceParameterMoveTime;
	if (_15 == 2) {
		v1 = 0;
	}
	setSeDistanceVolume(v1);
	setSeDistancePan(v1);
	setSeDistancePitch(v1);
	setSePositionDopplar();
	setSeDistanceFxmix(v1);
	setSeDistanceFir(v1);
	if (checkSwBit(0x400) == 0) {
		setFxmix(JAIBasic::msBasic->getMapInfoFxParameter(_30), 0, 3);
	}
	setSeDistanceDolby(v1);
}

/**
 * @note Address: 0x800B4B90
 * @note Size: 0x30
 * setFxmix__5JAISeFfUlUc
 */
void JAISe::setFxmix(f32 p1, u32 p2, u8 p3) { mSeParam._2A4[p3].set(p1, p2); }

/**
 * @note Address: 0x800B4BC0
 * @note Size: 0x70
 */
void JAISe::setSeDistanceVolume(u8 p1)
{
	mSeParam._124[4].set(
	    checkSwBit(2) == 0 ? setDistanceVolumeCommon(JAIGlobalParameter::distanceMax, (mSoundInfo->mFlag >> 0x10) & 7) : 1.0f, p1);
}

/**
 * @note Address: 0x800B4C30
 * @note Size: 0x74
 */
void JAISe::setSeDistancePan(u8)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_80516FE8@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x1a(r3)
	cmplwi   r0, 0
	bne      lbl_800B4C70
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc0(r12)
	mtctr    r12
	bctrl
	b        lbl_800B4C80

lbl_800B4C70:
	lwz      r3, 0x38(r30)
	cmplwi   r3, 0
	beq      lbl_800B4C80
	lfs      f1, 0x38(r3)

lbl_800B4C80:
	addi     r3, r30, 0x22c
	clrlwi   r4, r31, 0x18
	bl       set__Q27JAInter11MoveParaSetFfUl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800B4CA4
 * @note Size: 0x138
 */
void JAISe::setSeDistancePitch(u8 p1)
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
				if (_34->_18 >= JAIGlobalParameter::distanceMax) {
					pitch += JAIGlobalParameter::seDistancepitchMax;
				} else {
					pitch = JAIGlobalParameter::seDistancepitchMax * (_34->_18 / JAIGlobalParameter::distanceMax) + pitch;
				}
			}
		}
	}
	if (checkSwBit(0x40 | 0x80) != 0) {
		pitch += _17 / 192.0f;
	}
	mSeParam._224[4].set(pitch, p1);
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
	if (_15 == 2) {
		moveTime = 1;
	}
	if (checkSwBit(0x100 | 0x200) != 0 && JAIGlobalParameter::audioCameraMax == 1) {
		mSeParam._224[1].set(setPositionDopplarCommon(checkSwBit(0x100 | 0x200)), moveTime);
	}
}

/**
 * @note Address: 0x800B4E5C
 * @note Size: 0xC8
 */
void JAISe::setSeDistanceFxmix(u8 p1)
{
	u16 fx = JAIGlobalParameter::seDefaultFx;
	if (checkSwBit(0x4) == 0 && JAIGlobalParameter::audioCameraMax == 1) {
		if (_34->_18 < JAIGlobalParameter::distanceMax) {
			fx = (JAIGlobalParameter::seDistanceFxParameter * (_34->_18 / JAIGlobalParameter::distanceMax));
		} else {
			fx = JAIGlobalParameter::seDistanceFxParameter;
		}
	}
	if (fx > 127) {
		fx = 127;
	}
	mSeParam._2A4[4].set((u8)fx / 127.0f, p1);
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
void JAISe::setSeDistanceDolby(u8)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f1, lbl_80516FE4@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lbz      r0, 0x1a(r3)
	cmplwi   r0, 0
	bne      lbl_800B4F68
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc4(r12)
	mtctr    r12
	bctrl
	b        lbl_800B4F78

lbl_800B4F68:
	lwz      r3, 0x38(r30)
	cmplwi   r3, 0
	beq      lbl_800B4F78
	lfs      f1, 0x3c(r3)

lbl_800B4F78:
	fctiwz   f0, f1
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	addi     r3, r30, 0x42c
	lfd      f2, lbl_80517018@sda21(r2)
	clrlwi   r4, r31, 0x18
	stfd     f0, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lwz      r0, 0xc(r1)
	clrlwi   r0, r0, 0x18
	stw      r0, 0x14(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	bl       set__Q27JAInter11MoveParaSetFfUl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
void JAIStream::setStreamPrepareFlag(u8 p1) { JAInter::StreamMgr::streamUpdate->_02 = p1; }

/**
 * @note Address: 0x800B4FD8
 * @note Size: 0x40
 */
bool JAIStream::checkStreamReady()
{
	if (_15 == 3 && JAInter::StreamMgr::getSystemStatus() == 1) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x800B5018
 * @note Size: 0xA0
 */
void JAIStream::setChannelVolume(u8 p1, f32 p2, u32 p3)
{
	JAInter::StreamMgr::getChannelMax();
	int result = _1C8[p1].set(p2, p3);
	if (result == 1) {
		_1B8 |= 1 << p1;
	}
	if (result != 2) {
		_1B4->_18 |= 0x40;
	}
}

/**
 * @note Address: 0x800B50B8
 * @note Size: 0xA0
 */
void JAIStream::setChannelPan(u8 p1, f32 p2, u32 p3)
{
	JAInter::StreamMgr::getChannelMax();
	int result = _1CC[p1].set(p2, p3);
	if (result == 1) {
		_1BC |= 1 << p1;
	}
	if (result != 2) {
		_1B4->_18 |= 0x80;
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
void JAISound::setPauseMode(u8 p1, u8 p2)
{
	switch (mSoundID & JAISoundID_TypeMask) {
	case JAISoundID_Type_Sequence: {
		JAISequence* sequence = static_cast<JAISequence*>(this);
		if (p1 == 3) {
			p1 = 4;
		}
		switch (p1) {
		case 1:
			setVolumeU7(p2, 1, 11);
			break;
		case 2:
			sequence->mSeqParameter.mTrack.pause(true, true);
			break;
		case 0:
			switch (sequence->mSeqParameter._279) {
			case 1:
				setVolume(1.0f, 1, 11);
				break;
			case 2:
				sequence->mSeqParameter.mTrack.pause(false, true);
				break;
			}
			break;
		}
		sequence->mSeqParameter._279 = p1;
		break;
	}
	case JAISoundID_Type_Se:
		break;
	case JAISoundID_Type_Stream: {
		JAIStream* stream = static_cast<JAIStream*>(this);
		switch (p1) {
		case 1:
			// TODO: Will invoking it using the casted pointer actually inline JAIStream::setVolumeU7, without JAISequence::setVolumeU7
			// getting inlined?
			stream->setVolumeU7(p2, 1, 11);
			break;
		case 2:
			// JAInter::StreamMgr::getStreamObjectPointer()->pause(true);
			break;
		case 0:
			switch (stream->_48) {
			case 1:
				setVolume(1.0f, 1, 11);
				break;
			case 2:
				// JAInter::StreamMgr::getStreamObjectPointer()->pause(false);
				break;
			}
			break;
		}
		stream->_48 = p1;
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
 * @note Address: 0x800B5340
 * @note Size: 0x84
 */
// void JAIStream::setVolume(f32 p1, u32 p2, u8 p3)
// {
// 	int result = _64[p3].set(p1, p2);
// 	if (result == 1) {
// 		_50 |= 1 << p3;
// 	}
// 	if (_1B4 != nullptr && result != 2) {
// 		_1B4->_18 |= 0x40000;
// 	}
// }

/**
 * @note Address: 0x800B53C4
 * @note Size: 0xAC
 * setVolumeU7__11JAISequenceFUcUlUc
 */
void JAISequence::setVolumeU7(u8 p1, u32 p2, u8 p3)
{
	int result = mSeqParameter._110[p3].set(p1 / 127.0f, p2);
	if (result == 1) {
		mSeqParameter._284 |= 1 << p3;
	}
	if (mSeqParameter._2C0 != nullptr && result != 2) {
		mSeqParameter._2C0->_08 |= 0x40000;
	}
}

/**
 * @note Address: 0x800B5470
 * @note Size: 0xC
 * setSeqPrepareFlag__11JAISequenceFUc
 */
void JAISequence::setSeqPrepareFlag(u8 seqPrepareFlag) { mSeqParameter._2C0->_02 = seqPrepareFlag; }

/**
 * @note Address: 0x800B547C
 * @note Size: 0x2C
 * checkSeqReady__11JAISequenceFv
 */
bool JAISequence::checkSeqReady()
{
	if (_15 == 2 && mSeqParameter._27C == 0xFFFFFFFF) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x800B54A8
 * @note Size: 0x2C
 * getSeqInterVolume__11JAISequenceFUc
 */
f32 JAISequence::getSeqInterVolume(u8 p1)
{
	if (_15 == 4 || _15 == 5) {
		return mSeqParameter._110[p1]._04;
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
	if ((mSoundID & 0x800) != 0) {
		return (p1 >> 4) + 0x20000000 + p2 * 0x10000 + (p1 & 0xF) * 0x10;
	} else {
		return (p1 & 0xF) + 0x10000000 + p2 * 0x10000;
	}
	// return ((mSoundID & 0x800) != 0) ? (p1 >> 4) + 0x20000000 + p2 * 0x10000 + (p1 & 0xF) * 0x10 : (p1 & 0xF) + 0x10000000 + p2 *
	// 0x10000;

	/*
	lwz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_800B54FC
	rlwinm   r3, r4, 0x1c, 0x1c, 0x1f
	rlwinm   r0, r4, 4, 0x18, 0x1b
	rlwinm   r5, r5, 0x10, 8, 0xf
	addis    r4, r3, 0x2000
	add      r3, r0, r5
	add      r3, r4, r3
	blr

lbl_800B54FC:
	clrlwi   r3, r4, 0x1c
	rlwinm   r0, r5, 0x10, 8, 0xf
	addis    r3, r3, 0x1000
	add      r3, r3, r0
	blr
	*/
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
	if ((JAInter::SequenceMgr::getPlayTrackInfo(_14)->_08 & 2) != 0) {
		return _28;
	}
	return mSeqParameter._110[7]._0C - 1;
}

/**
 * @note Address: 0x800B55E4
 * @note Size: 0xC
 * getFadeCounter__5JAISeFv
 */
u32 JAISe::getFadeCounter() { return mSeParam._124[6]._0C - 1; }

/**
 * @note Address: 0x800B55F0
 * @note Size: 0x24
 * getFadeCounter__9JAIStreamFv
 */
u32 JAIStream::getFadeCounter()
{
	if ((_1B4->_18 & 2) != 0) {
		return _28;
	}
	return _64[7]._0C - 1;
}

/**
 * @note Address: 0x800B5614
 * @note Size: 0xE8
 */
void JAISound::initParameter(void* handlePtr, JAInter::Actor* actor, u32 id, u32 p4, u8 p5, JAInter::SoundInfo* info)
{
	mSoundID = id;
	if (actor != nullptr) {
		_38 = actor->mVec1;
		if (actor->mVec1 != nullptr) {
			_3C = actor->mVec2;
			_30 = actor->mUnk;
		} else {
			_3C = nullptr;
			_30 = actor->mUnk;
		}
		_1A = actor->mFlag.boolView[0];
	} else {
		_38 = nullptr;
		_3C = nullptr;
		_1A = 0;
		_30 = 0;
	}
	mMainSoundPPointer         = (void**)handlePtr;
	_28                        = p4;
	_18                        = p5;
	mSoundInfo                 = info;
	_16                        = 10;
	mDistanceParameterMoveTime = JAIGlobalParameter::getParamDistanceParameterMoveTime();
	mAdjustPriority            = 0;
	_2C                        = 0;
	if (_3C != nullptr) {
		_34->_18 = JAIGlobalParameter::getParamDistanceMax() * 10.0f;
	} else {
		_34->_18 = 0.0f;
	}
}

/**
 * @note Address: 0x800B56FC
 * @note Size: 0x70
 * init__Q27JAInter9LinkSoundFv
 */
void JAInter::LinkSound::init()
{
	_00 = new (JAIBasic::msCurrentHeap, 0x20) JSUList<JAISound>();
	_04 = new (JAIBasic::msCurrentHeap, 0x20) JSUList<JAISound>();
}

/**
 * @note Address: 0x800B576C
 * @note Size: 0x7C
 */
JAISound* JAInter::LinkSound::getSound()
{
	JAISound* sound         = nullptr;
	JSULink<JAISound>* link = _00->getFirst();
	if (link != nullptr) {
		_00->remove(link);
		_04->prepend(link);
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
	if (sound != nullptr) {
		if (_04->remove(sound) != 0) {
			_00->prepend(sound);
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
int JAInter::MoveParaSet::set(f32 p1, u32 p2)
{
	if (_0C == 0 && _04 == p1) {
		return 2;
	}
	if (_0C != 0 && _00 == p1) {
		return 2;
	}
	_00 = p1;
	if (p2 == 0) {
		_04 = p1;
		return 0;
	}
	_08 = (_04 - _00) / (p2 + 1);
	_0C = p2 + 1;
	return 1;
}

/**
 * @note Address: 0x800B58F0
 * @note Size: 0x4C
 * move__Q27JAInter11MoveParaSetFv
 */
BOOL JAInter::MoveParaSet::move()
{
	BOOL result;
	if (_0C == 0) {
		result = FALSE;
	} else {
		if (--_0C != 0) {
			result = TRUE;
			_04 -= _08;
		} else {
			result = FALSE;
			_04    = _00;
		}
	}
	return result;
}

/**
 * @note Address: 0x800B593C
 * @note Size: 0x2C
 * getVolume__9JAIStreamFUc
 */
f32 JAIStream::getVolume(u8 p1)
{
	if (_15 == 4 || _15 == 5) {
		return _64[p1]._04;
	}
	return -1.0f;
}

/**
 * @note Address: 0x800B5968
 * @note Size: 0xE4
 * setPan__9JAIStreamFfUlUc
 */
void JAIStream::setPan(f32 p1, u32 p2, u8 p3)
{
	int result = _1A8[p3].set(p1, p2);
	if (result == 1) {
		_58 |= 1 << p3;
	}
	if (_1B4 != nullptr && result != 2) {
		_1B4->_18 |= 0x80000;
	}
}

/**
 * @note Address: 0x800B5A4C
 * @note Size: 0x30
 * getPan__9JAIStreamFUc
 */
f32 JAIStream::getPan(u8 p1)
{
	if (_15 == 4 || _15 == 5) {
		return _1A8[p1]._04;
	}
	return -1.0f;
}

/**
 * @note Address: 0x800B5A7C
 * @note Size: 0xE4
 * setPitch__9JAIStreamFfUlUc
 */
void JAIStream::setPitch(f32 p1, u32 p2, u8 p3)
{
	int result = _1A4[p3].set(p1, p2);
	if (result == 1) {
		_54 |= 1 << p3;
	}
	if (_1B4 != nullptr && result != 2) {
		_1B4->_18 |= 0x100000;
	}
}

/**
 * @note Address: 0x800B5B60
 * @note Size: 0x30
 * getPitch__9JAIStreamFUc
 */
f32 JAIStream::getPitch(u8 p1)
{
	if (_15 == 4 || _15 == 5) {
		return _1A4[p1]._04;
	}
	return -1.0f;
}

/**
 * @note Address: 0x800B5B90
 * @note Size: 0xE4
 * setFxmix__9JAIStreamFfUlUc
 */
void JAIStream::setFxmix(f32 p1, u32 p2, u8 p3)
{
	int result = _1AC[p3].set(p1, p2);
	if (result == 1) {
		_5C |= 1 << p3;
	}
	if (_1B4 != nullptr && result != 2) {
		_1B4->_18 |= 0x200000;
	}
}

/**
 * @note Address: 0x800B5C74
 * @note Size: 0x30
 * getFxmix__9JAIStreamFUc
 */
f32 JAIStream::getFxmix(u8 p1)
{
	if (_15 == 4 || _15 == 5) {
		return _1AC[p1]._04;
	}
	return -1.0f;
}

/**
 * @note Address: 0x800B5CA4
 * @note Size: 0xE4
 * setDolby__9JAIStreamFfUlUc
 */
void JAIStream::setDolby(f32 p1, u32 p2, u8 p3)
{
	int result = _1B0[p3].set(p1, p2);
	if (result == 1) {
		_60 |= 1 << p3;
	}
	if (_1B4 != nullptr && result != 2) {
		_1B4->_18 |= 0x400000;
	}
}

/**
 * @note Address: 0x800B5D88
 * @note Size: 0x30
 * getDolby__9JAIStreamFUc
 */
f32 JAIStream::getDolby(u8 p1)
{
	if (_15 == 4 || _15 == 5) {
		return _1B0[p1]._04;
	}
	return -1.0f;
}

/**
 * @note Address: 0x800B5DB8
 * @note Size: 0x58
 * setVolumeU7__9JAIStreamFUcUlUc
 */
// void JAIStream::setVolumeU7(u8 p1, u32 p2, u8 p3) { setVolume(p1 / 127.0f, p2, p3); }

/**
 * @note Address: 0x800B5E10
 * @note Size: 0x40
 * getVolumeU7__9JAIStreamFUc
 */
u8 JAIStream::getVolumeU7(u8 p1) { return getVolume(p1) * 127.0f; }

/**
 * @note Address: 0x800B5E50
 * @note Size: 0x58
 * setPanU7__9JAIStreamFUcUlUc
 */
void JAIStream::setPanU7(u8 p1, u32 p2, u8 p3) { setPan(p1 / 127.0f, p2, p3); }

/**
 * @note Address: 0x800B5EA8
 * @note Size: 0x40
 * getPanU7__9JAIStreamFUc
 */
u8 JAIStream::getPanU7(u8 p1) { return getPan(p1) * 127.0f; }

/**
 * @note Address: 0x800B5EE8
 * @note Size: 0x58
 * setFxmixU7__9JAIStreamFUcUlUc
 */
void JAIStream::setFxmixU7(u8 p1, u32 p2, u8 p3) { setFxmix(p1 / 127.0f, p2, p3); }

/**
 * @note Address: 0x800B5F40
 * @note Size: 0x40
 * getFxmixU7__9JAIStreamFUc
 */
u8 JAIStream::getFxmixU7(u8 p1) { return getFxmix(p1) * 127.0f; }

/**
 * @note Address: 0x800B5F80
 * @note Size: 0x58
 * setDolbyU7__9JAIStreamFUcUlUc
 */
void JAIStream::setDolbyU7(u8 p1, u32 p2, u8 p3) { setDolby(p1 / 127.0f, p2, p3); }

/**
 * @note Address: 0x800B5FD8
 * @note Size: 0x40
 * getDolbyU7__9JAIStreamFUc
 */
u8 JAIStream::getDolbyU7(u8 p1) { return getDolby(p1) * 127.0f; }

/**
 * @note Address: 0x800B6018
 * @note Size: 0x4
 */
void JAIStream::setPortData(u8, u16) { }

/**
 * @note Address: 0x800B601C
 * @note Size: 0xC
 * getPortData__9JAIStreamFUc
 */
u16 JAIStream::getPortData(u8) { return 0xFFFF; }

/**
 * @note Address: 0x800B6028
 * @note Size: 0x4
 */
void JAISound::setTempoProportion(f32, u32) { }

/**
 * @note Address: 0x800B602C
 * @note Size: 0x8
 */
f32 JAISound::getTempoProportion() { return 1.0f; }

/**
 * @note Address: 0x800B6034
 * @note Size: 0x30
 */
void JAISound::setDirectVolume(f32 p1, u32 p2) { setVolume(p1, p2, 6); }

/**
 * @note Address: 0x800B6064
 * @note Size: 0x30
 */
void JAISound::setDirectPan(f32 p1, u32 p2) { setPan(p1, p2, 6); }

/**
 * @note Address: 0x800B6094
 * @note Size: 0x30
 */
void JAISound::setDirectPitch(f32 p1, u32 p2) { setPitch(p1, p2, 6); }

/**
 * @note Address: 0x800B60C4
 * @note Size: 0x30
 */
void JAISound::setDirectFxmix(f32 p1, u32 p2) { setFxmix(p1, p2, 6); }

/**
 * @note Address: 0x800B60F4
 * @note Size: 0x30
 */
void JAISound::setDirectDolby(f32 p1, u32 p2) { setDolby(p1, p2, 6); }

/**
 * @note Address: 0x800B6124
 * @note Size: 0x30
 */
void JAISound::setDemoVolume(f32 p1, u32 p2) { setVolume(p1, p2, 2); }

/**
 * @note Address: 0x800B6154
 * @note Size: 0x30
 */
void JAISound::setDemoPan(f32 p1, u32 p2) { setPan(p1, p2, 2); }

/**
 * @note Address: 0x800B6184
 * @note Size: 0x30
 */
void JAISound::setDemoPitch(f32 p1, u32 p2) { setPitch(p1, p2, 2); }

/**
 * @note Address: 0x800B61B4
 * @note Size: 0x30
 */
void JAISound::setDemoFxmix(f32 p1, u32 p2) { setFxmix(p1, p2, 2); }

/**
 * @note Address: 0x800B61E4
 * @note Size: 0x30
 */
void JAISound::setDemoDolby(f32 p1, u32 p2) { setDolby(p1, p2, 2); }

/**
 * @note Address: 0x800B6214
 * @note Size: 0x30
 */
void JAISound::setDemoVolumeU7(u8 p1, u32 p2) { setVolumeU7(p1, p2, 2); }

/**
 * @note Address: 0x800B6244
 * @note Size: 0x30
 */
void JAISound::setDemoPanU7(u8 p1, u32 p2) { setPanU7(p1, p2, 2); }

/**
 * @note Address: 0x800B6274
 * @note Size: 0x30
 */
void JAISound::setDemoFxmixU7(u8 p1, u32 p2) { setFxmixU7(p1, p2, 2); }

/**
 * @note Address: 0x800B62A4
 * @note Size: 0x30
 */
void JAISound::setDemoDolbyU7(u8 p1, u32 p2) { setDolbyU7(p1, p2, 2); }

/**
 * @note Address: 0x800B62D4
 * @note Size: 0x8
 */
void JAISound::setDistanceParameterMoveTime(u8 a1)
{
	// Generated from stb r4, 0x19(r3)
	mDistanceParameterMoveTime = a1;
}

/**
 * @note Address: 0x800B62DC
 * @note Size: 0x8
 */
void JAISound::setAdjustPriority(short a1)
{
	// Generated from sth r4, 0x1C(r3)
	mAdjustPriority = a1;
}

/**
 * @note Address: 0x800B62E4
 * @note Size: 0x10
 * getVolume__5JAISeFUc
 */
f32 JAISe::getVolume(u8 p1) { return mSeParam._124[p1]._04; }

/**
 * @note Address: 0x800B62F4
 * @note Size: 0x90
 * setPan__5JAISeFfUlUc
 */
void JAISe::setPan(f32 p1, u32 p2, u8 p3) { mSeParam._1A4[p3].set(p1, p2); }

/**
 * @note Address: 0x800B6384
 * @note Size: 0x10
 * getPan__5JAISeFUc
 */
f32 JAISe::getPan(u8 p1) { return mSeParam._1A4[p1]._04; }

/**
 * @note Address: 0x800B6394
 * @note Size: 0x90
 * setPitch__5JAISeFfUlUc
 */
void JAISe::setPitch(f32 p1, u32 p2, u8 p3) { mSeParam._224[p3].set(p1, p2); }

/**
 * @note Address: 0x800B6424
 * @note Size: 0x10
 * getPitch__5JAISeFUc
 */
f32 JAISe::getPitch(u8 p1) { return mSeParam._224[p1]._04; }

/**
 * @note Address: 0x800B6434
 * @note Size: 0x10
 * getFxmix__5JAISeFUc
 */
f32 JAISe::getFxmix(u8 p1) { return mSeParam._2A4[p1]._04; }

/**
 * @note Address: 0x800B6444
 * @note Size: 0x90
 * setDolby__5JAISeFfUlUc
 */
void JAISe::setDolby(f32 p1, u32 p2, u8 p3) { mSeParam._3A4[p3].set(p1, p2); }

/**
 * @note Address: 0x800B64D4
 * @note Size: 0x10
 * getDolby__5JAISeFUc
 */
f32 JAISe::getDolby(u8 p1) { return mSeParam._3A4[p1]._04; }

/**
 * @note Address: 0x800B64E4
 * @note Size: 0xB4
 * setVolumeU7__5JAISeFUcUlUc
 */
void JAISe::setVolumeU7(u8 p1, u32 p2, u8 p3)
{
	f32 v1 = p1 / 127.0f;
	mSeParam._124[p3].set(v1, p2);
}

/**
 * @note Address: 0x800B6598
 * @note Size: 0x2C
 * getVolumeU7__5JAISeFUc
 */
u8 JAISe::getVolumeU7(u8 p1) { return mSeParam._124[p1]._04 * 127.0f; }

/**
 * @note Address: 0x800B65C4
 * @note Size: 0xB4
 * setPanU7__5JAISeFUcUlUc
 */
void JAISe::setPanU7(u8 p1, u32 p2, u8 p3)
{
	f32 v1 = p1 / 127.0f;
	mSeParam._1A4[p3].set(v1, p2);
}

/**
 * @note Address: 0x800B6678
 * @note Size: 0x2C
 * getPanU7__5JAISeFUc
 */
u8 JAISe::getPanU7(u8 p1) { return mSeParam._1A4[p1]._04 * 127.0f; }

/**
 * @note Address: 0x800B66A4
 * @note Size: 0xB4
 * setFxmixU7__5JAISeFUcUlUc
 */
void JAISe::setFxmixU7(u8 p1, u32 p2, u8 p3)
{
	f32 v1 = p1 / 127.0f;
	mSeParam._2A4[p3].set(v1, p2);
}

/**
 * @note Address: 0x800B6758
 * @note Size: 0x2C
 * getFxmixU7__5JAISeFUc
 */
u8 JAISe::getFxmixU7(u8 p1) { return mSeParam._2A4[p1]._04 * 127.0f; }

/**
 * @note Address: 0x800B6784
 * @note Size: 0xB4
 * setDolbyU7__5JAISeFUcUlUc
 */
void JAISe::setDolbyU7(u8 p1, u32 p2, u8 p3)
{
	f32 v1 = p1 / 127.0f;
	mSeParam._3A4[p3].set(v1, p2);
}

/**
 * @note Address: 0x800B6838
 * @note Size: 0x2C
 * getDolbyU7__5JAISeFUc
 */
u8 JAISe::getDolbyU7(u8 p1) { return mSeParam._3A4[p1]._04 * 127.0f; }

/**
 * @note Address: 0x800B6864
 * @note Size: 0x130
 * setPortData__5JAISeFUcUs
 */
void JAISe::setPortData(u8, u16)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r4
	lbz      r0, 0x15(r3)
	cmplwi   r0, 1
	bne      lbl_800B68BC
	rlwinm   r0, r28, 1, 0x17, 0x1e
	clrlwi   r5, r28, 0x18
	add      r4, r3, r0
	sth      r29, 0x48(r4)
	li       r0, 1
	slw      r0, r0, r5
	lhz      r4, 0x68(r3)
	or       r0, r4, r0
	sth      r0, 0x68(r3)
	b        lbl_800B6974

lbl_800B68BC:
	lwz      r30, seHandle__Q27JAInter5SeMgr@sda21(r13)
	lbz      r31, 0x14(r3)
	lwz      r7, 0x308(r30)
	cmplwi   r7, 0
	beq      lbl_800B6974
	lbz      r0, 0x15(r30)
	cmplwi   r0, 4
	blt      lbl_800B6924
	lwz      r0, 0x20(r30)
	addi     r3, r30, 0x30c
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_800B6908
	rlwinm   r4, r31, 0x1c, 0x1c, 0x1f
	rlwinm   r6, r28, 0x10, 8, 0xf
	rlwinm   r0, r31, 4, 0x18, 0x1b
	addis    r5, r4, 0x2000
	add      r4, r0, r6
	add      r4, r5, r4
	b        lbl_800B6918

lbl_800B6908:
	clrlwi   r4, r31, 0x1c
	rlwinm   r0, r28, 0x10, 8, 0xf
	addis    r4, r4, 0x1000
	add      r4, r4, r0

lbl_800B6918:
	mr       r5, r29
	bl       writePortApp__8JASTrackFUlUs
	b        lbl_800B6960

lbl_800B6924:
	lwz      r3, 8(r7)
	li       r5, 1
	clrlwi   r0, r28, 0x18
	rlwinm   r4, r31, 2, 0x16, 0x1d
	ori      r6, r3, 0x1000
	slw      r3, r5, r31
	stw      r6, 8(r7)
	slw      r0, r5, r0
	lwz      r5, 0x2f8(r30)
	or       r3, r5, r3
	stw      r3, 0x2f8(r30)
	lwz      r5, 0x2fc(r30)
	lwzx     r3, r5, r4
	or       r0, r3, r0
	stwx     r0, r5, r4

lbl_800B6960:
	lwz      r4, 0x2bc(r30)
	rlwinm   r3, r31, 2, 0x16, 0x1d
	rlwinm   r0, r28, 1, 0x17, 0x1e
	lwzx     r3, r4, r3
	sthx     r29, r3, r0

lbl_800B6974:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800B6994
 * @note Size: 0xAC
 * getPortData__5JAISeFUc
 */
u16 JAISe::getPortData(u8 p1)
{
	if ((mSoundID & JAISoundID_TypeMask) == JAISoundID_Type_Se) {
		u8 v1            = _14;
		static u16 _port = -1;
		if (JAInter::SeMgr::seHandle->_15 >= 4) {
			u32 v2;
			if ((JAInter::SeMgr::seHandle->mSoundID & 0x800) != 0) {
				v2 = (v1 >> 4) + 0x20000000 + (v1 & 0xF) * 0x10 + p1 * 0x10000;
			} else {
				v2 = (v1 & 0xF) + 0x10000000 + p1 * 0x10000;
			}
			JAInter::SeMgr::seHandle->mSeqParameter.mTrack.readPortApp(v2, &_port);
		}
		return _port;
	} else {
		return 0;
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0, 0, 1
	bne      lbl_800B6A2C
	lbz      r0, init$2292@sda21(r13)
	lbz      r6, 0x14(r3)
	extsb.   r0, r0
	lwz      r5, seHandle__Q27JAInter5SeMgr@sda21(r13)
	bne      lbl_800B69D4
	lis      r3, 0x0000FFFF@ha
	li       r0, 1
	addi     r3, r3, 0x0000FFFF@l
	stb      r0, init$2292@sda21(r13)
	sth      r3, _port$2291@sda21(r13)

lbl_800B69D4:
	lbz      r0, 0x15(r5)
	cmplwi   r0, 4
	blt      lbl_800B6A24
	lwz      r0, 0x20(r5)
	addi     r3, r5, 0x30c
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_800B6A0C
	rlwinm   r5, r6, 0x1c, 0x1c, 0x1f
	rlwinm   r4, r4, 0x10, 8, 0xf
	rlwinm   r0, r6, 4, 0x18, 0x1b
	addis    r5, r5, 0x2000
	add      r4, r0, r4
	add      r4, r5, r4
	b        lbl_800B6A1C

lbl_800B6A0C:
	clrlwi   r5, r6, 0x1c
	rlwinm   r0, r4, 0x10, 8, 0xf
	addis    r4, r5, 0x1000
	add      r4, r4, r0

lbl_800B6A1C:
	addi     r5, r13, _port$2291@sda21
	bl       readPortApp__8JASTrackFUlPUs

lbl_800B6A24:
	lhz      r3, _port$2291@sda21(r13)
	b        lbl_800B6A30

lbl_800B6A2C:
	li       r3, 0

lbl_800B6A30:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800B6A40
 * @note Size: 0x30
 * getPan__11JAISequenceFUc
 */
f32 JAISequence::getPan(u8 p1)
{
	if (_15 == 4 || _15 == 5) {
		return mSeqParameter._250[p1]._04;
	}
	return -1.0f;
}

/**
 * @note Address: 0x800B6A70
 * @note Size: 0x30
 * getPitch__11JAISequenceFUc
 */
f32 JAISequence::getPitch(u8 p1)
{
	if (_15 == 4 || _15 == 5) {
		return mSeqParameter._254[p1]._04;
	}
	return -1.0f;
}

/**
 * @note Address: 0x800B6AA0
 * @note Size: 0xE4
 * setFxmix__11JAISequenceFfUlUc
 */
void JAISequence::setFxmix(f32, u32, u8)
{
	/*
	stwu     r1, -0x10(r1)
	rlwinm   r0, r5, 4, 0x14, 0x1b
	lwz      r6, 0x2a0(r3)
	add      r7, r6, r0
	lwz      r0, 0xc(r7)
	cmplwi   r0, 0
	bne      lbl_800B6AD0
	lfs      f0, 4(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B6AD0
	li       r6, 2
	b        lbl_800B6B3C

lbl_800B6AD0:
	cmplwi   r0, 0
	beq      lbl_800B6AEC
	lfs      f0, 0(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B6AEC
	li       r6, 2
	b        lbl_800B6B3C

lbl_800B6AEC:
	cmplwi   r4, 0
	stfs     f1, 0(r7)
	bne      lbl_800B6B04
	stfs     f1, 4(r7)
	li       r6, 0
	b        lbl_800B6B3C

lbl_800B6B04:
	addi     r4, r4, 1
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	li       r6, 1
	lfs      f3, 4(r7)
	stw      r0, 8(r1)
	lfs      f2, 0(r7)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 8(r7)
	stw      r4, 0xc(r7)

lbl_800B6B3C:
	cmpwi    r6, 1
	bne      lbl_800B6B5C
	clrlwi   r0, r5, 0x18
	li       r4, 1
	lwz      r5, 0x2d8(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2d8(r3)

lbl_800B6B5C:
	lwz      r3, 0x308(r3)
	cmplwi   r3, 0
	beq      lbl_800B6B7C
	cmpwi    r6, 2
	beq      lbl_800B6B7C
	lwz      r0, 8(r3)
	oris     r0, r0, 0x20
	stw      r0, 8(r3)

lbl_800B6B7C:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800B6B84
 * @note Size: 0x30
 * getFxmix__11JAISequenceFUc
 */
f32 JAISequence::getFxmix(u8 p1)
{
	if (_15 == 4 || _15 == 5) {
		return mSeqParameter._258[p1]._04;
	}
	return -1.0f;
}

/**
 * @note Address: 0x800B6BB4
 * @note Size: 0x110
 * setDolby__11JAISequenceFfUlUc
 */
void JAISequence::setDolby(f32, u32, u8)
{
	/*
	stwu     r1, -0x10(r1)
	lwz      r6, msBasic__8JAIBasic@sda21(r13)
	lbz      r0, 0xd(r6)
	cmplwi   r0, 2
	beq      lbl_800B6BE4
	lwz      r6, 0x2a4(r3)
	rlwinm   r0, r5, 4, 0x14, 0x1b
	lfs      f1, lbl_80516FE4@sda21(r2)
	add      r6, r6, r0
	lfs      f0, 4(r6)
	fcmpu    cr0, f1, f0
	beq      lbl_800B6CBC

lbl_800B6BE4:
	lwz      r6, 0x2a4(r3)
	rlwinm   r0, r5, 4, 0x14, 0x1b
	add      r7, r6, r0
	lwz      r0, 0xc(r7)
	cmplwi   r0, 0
	bne      lbl_800B6C10
	lfs      f0, 4(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B6C10
	li       r6, 2
	b        lbl_800B6C7C

lbl_800B6C10:
	cmplwi   r0, 0
	beq      lbl_800B6C2C
	lfs      f0, 0(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B6C2C
	li       r6, 2
	b        lbl_800B6C7C

lbl_800B6C2C:
	cmplwi   r4, 0
	stfs     f1, 0(r7)
	bne      lbl_800B6C44
	stfs     f1, 4(r7)
	li       r6, 0
	b        lbl_800B6C7C

lbl_800B6C44:
	addi     r4, r4, 1
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	li       r6, 1
	lfs      f3, 4(r7)
	stw      r0, 8(r1)
	lfs      f2, 0(r7)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 8(r7)
	stw      r4, 0xc(r7)

lbl_800B6C7C:
	cmpwi    r6, 1
	bne      lbl_800B6C9C
	clrlwi   r0, r5, 0x18
	li       r4, 1
	lwz      r5, 0x2dc(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2dc(r3)

lbl_800B6C9C:
	lwz      r3, 0x308(r3)
	cmplwi   r3, 0
	beq      lbl_800B6CBC
	cmpwi    r6, 2
	beq      lbl_800B6CBC
	lwz      r0, 8(r3)
	oris     r0, r0, 0x40
	stw      r0, 8(r3)

lbl_800B6CBC:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800B6CC4
 * @note Size: 0x30
 * getDolby__11JAISequenceFUc
 */
f32 JAISequence::getDolby(u8 p1)
{
	if (_15 == 4 || _15 == 5) {
		return mSeqParameter._25C[p1]._04;
	}
	return -1.0f;
}

/**
 * @note Address: 0x800B6CF4
 * @note Size: 0x98
 * setTempoProportion__11JAISequenceFfUl
 */
void JAISequence::setTempoProportion(f32, u32)
{
	/*
	stwu     r1, -0x10(r1)
	lwz      r0, 0x54(r3)
	cmplwi   r0, 0
	bne      lbl_800B6D10
	lfs      f0, 0x4c(r3)
	fcmpu    cr0, f0, f1
	beq      lbl_800B6D6C

lbl_800B6D10:
	cmplwi   r0, 0
	beq      lbl_800B6D24
	lfs      f0, 0x48(r3)
	fcmpu    cr0, f0, f1
	beq      lbl_800B6D6C

lbl_800B6D24:
	cmplwi   r4, 0
	stfs     f1, 0x48(r3)
	bne      lbl_800B6D38
	stfs     f1, 0x4c(r3)
	b        lbl_800B6D6C

lbl_800B6D38:
	addi     r4, r4, 1
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	lfs      f3, 0x4c(r3)
	stw      r0, 8(r1)
	lfs      f2, 0x48(r3)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 0x50(r3)
	stw      r4, 0x54(r3)

lbl_800B6D6C:
	lwz      r3, 0x308(r3)
	cmplwi   r3, 0
	beq      lbl_800B6D84
	lwz      r0, 8(r3)
	ori      r0, r0, 4
	stw      r0, 8(r3)

lbl_800B6D84:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800B6D8C
 * @note Size: 0x24
 * getTempoProportion__11JAISequenceFv
 */
f32 JAISequence::getTempoProportion()
{
	if (_15 == 4 || _15 == 5) {
		return mSeqParameter._04;
	}
	return -1.0f;
}

/**
 * @note Address: 0x800B6DB0
 * @note Size: 0x48
 * getVolumeU7__11JAISequenceFUc
 */
u8 JAISequence::getVolumeU7(u8 p1) { return JAISequence::getVolume(p1) * 127.0f; }

/**
 * @note Address: 0x800B6DF8
 * @note Size: 0x148
 * setPanU7__11JAISequenceFUcUlUc
 */
void JAISequence::setPanU7(u8, u32, u8)
{
	/*
	stwu     r1, -0x10(r1)
	rlwinm   r0, r6, 4, 0x14, 0x1b
	lwz      r7, 0x298(r3)
	add      r8, r7, r0
	lwz      r9, 0xc(r8)
	cmplwi   r9, 0
	bne      lbl_800B6E4C
	clrlwi   r7, r4, 0x18
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f3, 4(r8)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpu    cr0, f3, f0
	bne      lbl_800B6E4C
	li       r7, 2
	b        lbl_800B6EF8

lbl_800B6E4C:
	cmplwi   r9, 0
	beq      lbl_800B6E8C
	clrlwi   r7, r4, 0x18
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f3, 0(r8)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpu    cr0, f3, f0
	bne      lbl_800B6E8C
	li       r7, 2
	b        lbl_800B6EF8

lbl_800B6E8C:
	clrlwi   r0, r4, 0x18
	lis      r4, 0x4330
	stw      r0, 0xc(r1)
	cmplwi   r5, 0
	lfd      f3, lbl_80517018@sda21(r2)
	stw      r4, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f3
	fdivs    f0, f1, f0
	stfs     f0, 0(r8)
	bne      lbl_800B6EC8
	stfs     f0, 4(r8)
	li       r7, 0
	b        lbl_800B6EF8

lbl_800B6EC8:
	addi     r0, r5, 1
	stw      r4, 8(r1)
	lfs      f2, 4(r8)
	li       r7, 1
	stw      r0, 0xc(r1)
	lfs      f1, 0(r8)
	lfd      f0, 8(r1)
	fsubs    f1, f2, f1
	fsubs    f0, f0, f3
	fdivs    f0, f1, f0
	stfs     f0, 8(r8)
	stw      r0, 0xc(r8)

lbl_800B6EF8:
	cmpwi    r7, 1
	bne      lbl_800B6F18
	clrlwi   r0, r6, 0x18
	li       r4, 1
	lwz      r5, 0x2d0(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2d0(r3)

lbl_800B6F18:
	lwz      r3, 0x308(r3)
	cmplwi   r3, 0
	beq      lbl_800B6F38
	cmpwi    r7, 2
	beq      lbl_800B6F38
	lwz      r0, 8(r3)
	oris     r0, r0, 8
	stw      r0, 8(r3)

lbl_800B6F38:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800B6F40
 * @note Size: 0x4C
 * getPanU7__11JAISequenceFUc
 */
u8 JAISequence::getPanU7(u8 p1) { return JAISequence::getPan(p1) * 127.0f; }

/**
 * @note Address: 0x800B6F8C
 * @note Size: 0x148
 * setFxmixU7__11JAISequenceFUcUlUc
 */
void JAISequence::setFxmixU7(u8, u32, u8)
{
	/*
	stwu     r1, -0x10(r1)
	rlwinm   r0, r6, 4, 0x14, 0x1b
	lwz      r7, 0x2a0(r3)
	add      r8, r7, r0
	lwz      r9, 0xc(r8)
	cmplwi   r9, 0
	bne      lbl_800B6FE0
	clrlwi   r7, r4, 0x18
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f3, 4(r8)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpu    cr0, f3, f0
	bne      lbl_800B6FE0
	li       r7, 2
	b        lbl_800B708C

lbl_800B6FE0:
	cmplwi   r9, 0
	beq      lbl_800B7020
	clrlwi   r7, r4, 0x18
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f3, 0(r8)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpu    cr0, f3, f0
	bne      lbl_800B7020
	li       r7, 2
	b        lbl_800B708C

lbl_800B7020:
	clrlwi   r0, r4, 0x18
	lis      r4, 0x4330
	stw      r0, 0xc(r1)
	cmplwi   r5, 0
	lfd      f3, lbl_80517018@sda21(r2)
	stw      r4, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f3
	fdivs    f0, f1, f0
	stfs     f0, 0(r8)
	bne      lbl_800B705C
	stfs     f0, 4(r8)
	li       r7, 0
	b        lbl_800B708C

lbl_800B705C:
	addi     r0, r5, 1
	stw      r4, 8(r1)
	lfs      f2, 4(r8)
	li       r7, 1
	stw      r0, 0xc(r1)
	lfs      f1, 0(r8)
	lfd      f0, 8(r1)
	fsubs    f1, f2, f1
	fsubs    f0, f0, f3
	fdivs    f0, f1, f0
	stfs     f0, 8(r8)
	stw      r0, 0xc(r8)

lbl_800B708C:
	cmpwi    r7, 1
	bne      lbl_800B70AC
	clrlwi   r0, r6, 0x18
	li       r4, 1
	lwz      r5, 0x2d8(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2d8(r3)

lbl_800B70AC:
	lwz      r3, 0x308(r3)
	cmplwi   r3, 0
	beq      lbl_800B70CC
	cmpwi    r7, 2
	beq      lbl_800B70CC
	lwz      r0, 8(r3)
	oris     r0, r0, 0x20
	stw      r0, 8(r3)

lbl_800B70CC:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800B70D4
 * @note Size: 0x4C
 * getFxmixU7__11JAISequenceFUc
 */
u8 JAISequence::getFxmixU7(u8 p1) { return JAISequence::getFxmix(p1) * 127.0f; }

/**
 * @note Address: 0x800B7120
 * @note Size: 0x134
 * setDolbyU7__11JAISequenceFUcUlUc
 */
void JAISequence::setDolbyU7(u8, u32, u8)
{
	/*
	stwu     r1, -0x10(r1)
	clrlwi   r4, r4, 0x18
	lis      r0, 0x4330
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r4, 0xc(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	stw      r0, 8(r1)
	lwz      r4, msBasic__8JAIBasic@sda21(r13)
	lfd      f1, 8(r1)
	lbz      r0, 0xd(r4)
	fsubs    f1, f1, f2
	cmplwi   r0, 2
	fdivs    f1, f1, f0
	beq      lbl_800B7174
	lwz      r4, 0x2a4(r3)
	rlwinm   r0, r6, 4, 0x14, 0x1b
	lfs      f1, lbl_80516FE4@sda21(r2)
	add      r4, r4, r0
	lfs      f0, 4(r4)
	fcmpu    cr0, f1, f0
	beq      lbl_800B724C

lbl_800B7174:
	lwz      r4, 0x2a4(r3)
	rlwinm   r0, r6, 4, 0x14, 0x1b
	add      r8, r4, r0
	lwz      r0, 0xc(r8)
	cmplwi   r0, 0
	bne      lbl_800B71A0
	lfs      f0, 4(r8)
	fcmpu    cr0, f0, f1
	bne      lbl_800B71A0
	li       r7, 2
	b        lbl_800B720C

lbl_800B71A0:
	cmplwi   r0, 0
	beq      lbl_800B71BC
	lfs      f0, 0(r8)
	fcmpu    cr0, f0, f1
	bne      lbl_800B71BC
	li       r7, 2
	b        lbl_800B720C

lbl_800B71BC:
	cmplwi   r5, 0
	stfs     f1, 0(r8)
	bne      lbl_800B71D4
	stfs     f1, 4(r8)
	li       r7, 0
	b        lbl_800B720C

lbl_800B71D4:
	addi     r4, r5, 1
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	li       r7, 1
	lfs      f3, 4(r8)
	stw      r0, 8(r1)
	lfs      f2, 0(r8)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 8(r8)
	stw      r4, 0xc(r8)

lbl_800B720C:
	cmpwi    r7, 1
	bne      lbl_800B722C
	clrlwi   r0, r6, 0x18
	li       r4, 1
	lwz      r5, 0x2dc(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2dc(r3)

lbl_800B722C:
	lwz      r3, 0x308(r3)
	cmplwi   r3, 0
	beq      lbl_800B724C
	cmpwi    r7, 2
	beq      lbl_800B724C
	lwz      r0, 8(r3)
	oris     r0, r0, 0x40
	stw      r0, 8(r3)

lbl_800B724C:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800B7254
 * @note Size: 0x4C
 * getDolbyU7__11JAISequenceFUc
 */
u8 JAISequence::getDolbyU7(u8 p1) { return JAISequence::getDolby(p1) * 127.0f; }

/**
 * @note Address: 0x800B72A0
 * @note Size: 0x17C
 * setPortData__11JAISequenceFUcUs
 */
void JAISequence::setPortData(u8, u16)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f1, lbl_80516FE4@sda21(r2)
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r30, r3
	rlwinm   r28, r4, 4, 0x14, 0x1b
	mr       r31, r4
	add      r29, r30, r28
	mr       r27, r5
	lfs      f0, 0x5c(r29)
	fcmpu    cr0, f1, f0
	bne      lbl_800B7310
	lbz      r0, 0x15(r30)
	cmplwi   r0, 3
	blt      lbl_800B7310
	addi     r3, r30, 0x30c
	rlwinm   r4, r31, 0x10, 8, 0xf
	addi     r5, r1, 8
	bl       readPortApp__8JASTrackFUlPUs
	lhz      r3, 8(r1)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lfd      f1, lbl_80517018@sda21(r2)
	stw      r3, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x5c(r29)

lbl_800B7310:
	add      r3, r30, r28
	lwz      r4, 0x64(r3)
	cmplwi   r4, 0
	bne      lbl_800B7350
	clrlwi   r3, r27, 0x10
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f1, lbl_80517018@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, 0x5c(r29)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fcmpu    cr0, f2, f0
	bne      lbl_800B7350
	li       r5, 2
	b        lbl_800B73C8

lbl_800B7350:
	cmplwi   r4, 0
	beq      lbl_800B738C
	clrlwi   r3, r27, 0x10
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	add      r3, r30, r28
	lfd      f1, lbl_80517018@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, 0x58(r3)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fcmpu    cr0, f2, f0
	bne      lbl_800B738C
	li       r5, 2
	b        lbl_800B73C8

lbl_800B738C:
	clrlwi   r4, r27, 0x10
	lis      r0, 0x4330
	stw      r4, 0x14(r1)
	add      r3, r30, r28
	lfd      f2, lbl_80517018@sda21(r2)
	li       r5, 0
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	stw      r4, 0x1c(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x18(r1)
	lfd      f0, 0x18(r1)
	stfs     f1, 0x58(r3)
	fsubs    f0, f0, f2
	stfs     f0, 0x5c(r29)

lbl_800B73C8:
	cmpwi    r5, 1
	bne      lbl_800B73E8
	clrlwi   r0, r31, 0x18
	li       r3, 1
	lwz      r4, 0x2c8(r30)
	slw      r0, r3, r0
	or       r0, r4, r0
	stw      r0, 0x2c8(r30)

lbl_800B73E8:
	lwz      r3, 0x308(r30)
	cmplwi   r3, 0
	beq      lbl_800B7408
	cmpwi    r5, 2
	beq      lbl_800B7408
	lwz      r0, 8(r3)
	ori      r0, r0, 0x10
	stw      r0, 8(r3)

lbl_800B7408:
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x800B741C
 * @note Size: 0x30
 * getPortData__11JAISequenceFUc
 */
u16 JAISequence::getPortData(u8 p1)
{
	static u16 _port;
	mSeqParameter.mTrack.readPortApp(p1 << 0x10, &_port);
	return _port;
}
