#include "Dolphin/math.h"
#include "JSystem/JAI/JAIBasic.h"
#include "JSystem/JAI/JAIConst.h"
#include "JSystem/JAI/JAIGlobalParameter.h"
#include "JSystem/JAI/JAISe.h"
#include "JSystem/JAI/JAISequence.h"
#include "JSystem/JAI/JAISound.h"
#include "JSystem/JAI/JAIStream.h"
#include "JSystem/JAI/JAInter.h"
#include "JSystem/JAI/JAInter/SeMgr.h"
#include "JSystem/JAI/JAInter/StreamMgr.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__9JAIStream
    __vt__9JAIStream:
        .4byte 0
        .4byte 0
        .4byte setPortData__9JAIStreamFUcUs
        .4byte getPortData__9JAIStreamFUc
        .4byte start__8JAISoundFUl
        .4byte stop__9JAIStreamFUl
        .4byte release__8JAISoundFv
        .4byte setVolume__9JAIStreamFfUlUc
        .4byte getVolume__9JAIStreamFUc
        .4byte setPan__9JAIStreamFfUlUc
        .4byte getPan__9JAIStreamFUc
        .4byte setPitch__9JAIStreamFfUlUc
        .4byte getPitch__9JAIStreamFUc
        .4byte setFxmix__9JAIStreamFfUlUc
        .4byte getFxmix__9JAIStreamFUc
        .4byte setDolby__9JAIStreamFfUlUc
        .4byte getDolby__9JAIStreamFUc
        .4byte setTempoProportion__8JAISoundFfUl
        .4byte getTempoProportion__8JAISoundFv
        .4byte setVolumeU7__9JAIStreamFUcUlUc
        .4byte getVolumeU7__9JAIStreamFUc
        .4byte setPanU7__9JAIStreamFUcUlUc
        .4byte getPanU7__9JAIStreamFUc
        .4byte setFxmixU7__9JAIStreamFUcUlUc
        .4byte getFxmixU7__9JAIStreamFUc
        .4byte setDolbyU7__9JAIStreamFUcUlUc
        .4byte getDolbyU7__9JAIStreamFUc
        .4byte setDirectVolume__8JAISoundFfUl
        .4byte setDirectPan__8JAISoundFfUl
        .4byte setDirectPitch__8JAISoundFfUl
        .4byte setDirectFxmix__8JAISoundFfUl
        .4byte setDirectDolby__8JAISoundFfUl
        .4byte setDemoVolume__8JAISoundFfUl
        .4byte setDemoPan__8JAISoundFfUl
        .4byte setDemoPitch__8JAISoundFfUl
        .4byte setDemoFxmix__8JAISoundFfUl
        .4byte setDemoDolby__8JAISoundFfUl
        .4byte setDemoVolumeU7__8JAISoundFUcUl
        .4byte setDemoPanU7__8JAISoundFUcUl
        .4byte setDemoFxmixU7__8JAISoundFUcUl
        .4byte setDemoDolbyU7__8JAISoundFUcUl
        .4byte getFadeCounter__9JAIStreamFv
        .4byte setPrepareFlag__9JAIStreamFUc
        .4byte checkReady__9JAIStreamFv
        .4byte setDistanceParameterMoveTime__8JAISoundFUc
        .4byte setAdjustPriority__8JAISoundFs
        .4byte setPositionDopplarCommon__8JAISoundFUl
        .4byte setDistanceVolumeCommon__8JAISoundFfUc
        .4byte setDistancePanCommon__8JAISoundFv
        .4byte setDistanceDolbyCommon__8JAISoundFv
        .4byte
   initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
        .4byte onGet__8JAISoundFv
        .4byte onRelease__8JAISoundFv
    .global __vt__5JAISe
    __vt__5JAISe:
        .4byte 0
        .4byte 0
        .4byte setPortData__5JAISeFUcUs
        .4byte getPortData__5JAISeFUc
        .4byte start__8JAISoundFUl
        .4byte stop__5JAISeFUl
        .4byte release__8JAISoundFv
        .4byte setVolume__5JAISeFfUlUc
        .4byte getVolume__5JAISeFUc
        .4byte setPan__5JAISeFfUlUc
        .4byte getPan__5JAISeFUc
        .4byte setPitch__5JAISeFfUlUc
        .4byte getPitch__5JAISeFUc
        .4byte setFxmix__5JAISeFfUlUc
        .4byte getFxmix__5JAISeFUc
        .4byte setDolby__5JAISeFfUlUc
        .4byte getDolby__5JAISeFUc
        .4byte setTempoProportion__8JAISoundFfUl
        .4byte getTempoProportion__8JAISoundFv
        .4byte setVolumeU7__5JAISeFUcUlUc
        .4byte getVolumeU7__5JAISeFUc
        .4byte setPanU7__5JAISeFUcUlUc
        .4byte getPanU7__5JAISeFUc
        .4byte setFxmixU7__5JAISeFUcUlUc
        .4byte getFxmixU7__5JAISeFUc
        .4byte setDolbyU7__5JAISeFUcUlUc
        .4byte getDolbyU7__5JAISeFUc
        .4byte setDirectVolume__8JAISoundFfUl
        .4byte setDirectPan__8JAISoundFfUl
        .4byte setDirectPitch__8JAISoundFfUl
        .4byte setDirectFxmix__8JAISoundFfUl
        .4byte setDirectDolby__8JAISoundFfUl
        .4byte setDemoVolume__8JAISoundFfUl
        .4byte setDemoPan__8JAISoundFfUl
        .4byte setDemoPitch__8JAISoundFfUl
        .4byte setDemoFxmix__8JAISoundFfUl
        .4byte setDemoDolby__8JAISoundFfUl
        .4byte setDemoVolumeU7__8JAISoundFUcUl
        .4byte setDemoPanU7__8JAISoundFUcUl
        .4byte setDemoFxmixU7__8JAISoundFUcUl
        .4byte setDemoDolbyU7__8JAISoundFUcUl
        .4byte getFadeCounter__5JAISeFv
        .4byte setPrepareFlag__8JAISoundFUc
        .4byte checkReady__8JAISoundFv
        .4byte setDistanceParameterMoveTime__8JAISoundFUc
        .4byte setAdjustPriority__8JAISoundFs
        .4byte setPositionDopplarCommon__8JAISoundFUl
        .4byte setDistanceVolumeCommon__8JAISoundFfUc
        .4byte setDistancePanCommon__8JAISoundFv
        .4byte setDistanceDolbyCommon__8JAISoundFv
        .4byte
   initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
        .4byte onGet__8JAISoundFv
        .4byte onRelease__8JAISoundFv
        .4byte setSeDistanceParameters__5JAISeFv
        .4byte setSeDistanceVolume__5JAISeFUc
        .4byte setSeDistancePan__5JAISeFUc
        .4byte setSeDistancePitch__5JAISeFUc
        .4byte setSeDistanceFxmix__5JAISeFUc
        .4byte setSeDistanceFir__5JAISeFUc
        .4byte setSeDistanceDolby__5JAISeFUc
        .4byte setSePositionDopplar__5JAISeFv
    .global __vt__11JAISequence
    __vt__11JAISequence:
        .4byte 0
        .4byte 0
        .4byte setPortData__11JAISequenceFUcUs
        .4byte getPortData__11JAISequenceFUc
        .4byte start__8JAISoundFUl
        .4byte stop__11JAISequenceFUl
        .4byte release__8JAISoundFv
        .4byte setVolume__11JAISequenceFfUlUc
        .4byte getVolume__11JAISequenceFUc
        .4byte setPan__11JAISequenceFfUlUc
        .4byte getPan__11JAISequenceFUc
        .4byte setPitch__11JAISequenceFfUlUc
        .4byte getPitch__11JAISequenceFUc
        .4byte setFxmix__11JAISequenceFfUlUc
        .4byte getFxmix__11JAISequenceFUc
        .4byte setDolby__11JAISequenceFfUlUc
        .4byte getDolby__11JAISequenceFUc
        .4byte setTempoProportion__11JAISequenceFfUl
        .4byte getTempoProportion__11JAISequenceFv
        .4byte setVolumeU7__11JAISequenceFUcUlUc
        .4byte getVolumeU7__11JAISequenceFUc
        .4byte setPanU7__11JAISequenceFUcUlUc
        .4byte getPanU7__11JAISequenceFUc
        .4byte setFxmixU7__11JAISequenceFUcUlUc
        .4byte getFxmixU7__11JAISequenceFUc
        .4byte setDolbyU7__11JAISequenceFUcUlUc
        .4byte getDolbyU7__11JAISequenceFUc
        .4byte setDirectVolume__8JAISoundFfUl
        .4byte setDirectPan__8JAISoundFfUl
        .4byte setDirectPitch__8JAISoundFfUl
        .4byte setDirectFxmix__8JAISoundFfUl
        .4byte setDirectDolby__8JAISoundFfUl
        .4byte setDemoVolume__8JAISoundFfUl
        .4byte setDemoPan__8JAISoundFfUl
        .4byte setDemoPitch__8JAISoundFfUl
        .4byte setDemoFxmix__8JAISoundFfUl
        .4byte setDemoDolby__8JAISoundFfUl
        .4byte setDemoVolumeU7__8JAISoundFUcUl
        .4byte setDemoPanU7__8JAISoundFUcUl
        .4byte setDemoFxmixU7__8JAISoundFUcUl
        .4byte setDemoDolbyU7__8JAISoundFUcUl
        .4byte getFadeCounter__11JAISequenceFv
        .4byte setPrepareFlag__11JAISequenceFUc
        .4byte checkReady__11JAISequenceFv
        .4byte setDistanceParameterMoveTime__8JAISoundFUc
        .4byte setAdjustPriority__8JAISoundFs
        .4byte setPositionDopplarCommon__8JAISoundFUl
        .4byte setDistanceVolumeCommon__8JAISoundFfUc
        .4byte setDistancePanCommon__8JAISoundFv
        .4byte setDistanceDolbyCommon__8JAISoundFv
        .4byte
   initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
        .4byte onGet__8JAISoundFv
        .4byte onRelease__8JAISoundFv
    .global __vt__8JAISound
    __vt__8JAISound:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte start__8JAISoundFUl
        .4byte stop__8JAISoundFUl
        .4byte release__8JAISoundFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte setTempoProportion__8JAISoundFfUl
        .4byte getTempoProportion__8JAISoundFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte setDirectVolume__8JAISoundFfUl
        .4byte setDirectPan__8JAISoundFfUl
        .4byte setDirectPitch__8JAISoundFfUl
        .4byte setDirectFxmix__8JAISoundFfUl
        .4byte setDirectDolby__8JAISoundFfUl
        .4byte setDemoVolume__8JAISoundFfUl
        .4byte setDemoPan__8JAISoundFfUl
        .4byte setDemoPitch__8JAISoundFfUl
        .4byte setDemoFxmix__8JAISoundFfUl
        .4byte setDemoDolby__8JAISoundFfUl
        .4byte setDemoVolumeU7__8JAISoundFUcUl
        .4byte setDemoPanU7__8JAISoundFUcUl
        .4byte setDemoFxmixU7__8JAISoundFUcUl
        .4byte setDemoDolbyU7__8JAISoundFUcUl
        .4byte 0
        .4byte setPrepareFlag__8JAISoundFUc
        .4byte checkReady__8JAISoundFv
        .4byte setDistanceParameterMoveTime__8JAISoundFUc
        .4byte setAdjustPriority__8JAISoundFs
        .4byte setPositionDopplarCommon__8JAISoundFUl
        .4byte setDistanceVolumeCommon__8JAISoundFfUc
        .4byte setDistancePanCommon__8JAISoundFv
        .4byte setDistanceDolbyCommon__8JAISoundFv
        .4byte
   initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
        .4byte onGet__8JAISoundFv
        .4byte onRelease__8JAISoundFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global _port$2234
    _port$2234:
        .skip 0x2
    .global _port$2291
    _port$2291:
        .skip 0x2
    .global init$2292
    init$2292:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516FE0
    lbl_80516FE0:
        .float 1.0
    .global lbl_80516FE4
    lbl_80516FE4:
        .4byte 0x00000000
    .global lbl_80516FE8
    lbl_80516FE8:
        .float 0.5
        .4byte 0x00000000
    .global lbl_80516FF0
    lbl_80516FF0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516FF8
    lbl_80516FF8:
        .4byte 0x3FE00000
        .4byte 0x00000000
    .global lbl_80517000
    lbl_80517000:
        .4byte 0x40080000
        .4byte 0x00000000
    .global lbl_80517008
    lbl_80517008:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80517010
    lbl_80517010:
        .float 0.1
    .global lbl_80517014
    lbl_80517014:
        .4byte 0x40000000
    .global lbl_80517018
    lbl_80517018:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80517020
    lbl_80517020:
        .4byte 0x42FE0000
    .global lbl_80517024
    lbl_80517024:
        .4byte 0x4F800000
    .global lbl_80517028
    lbl_80517028:
        .4byte 0x447A0000
    .global lbl_8051702C
    lbl_8051702C:
        .4byte 0x41800000
    .global lbl_80517030
    lbl_80517030:
        .4byte 0x43400000
    .global lbl_80517034
    lbl_80517034:
        .float -1.0
    .global lbl_80517038
    lbl_80517038:
        .4byte 0x41200000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000078
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

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSULink<JAISound>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	800B3838
 * Size:	0000EC
 * __ct__11JAISequenceFv
 */
JAISequence::JAISequence()
    : JAISound()
    , m_seqParameter()
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
JAInter::SeqParameter::~SeqParameter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
JAISound::~JAISound()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B3924
 * Size:	000154
 * __ct__5JAISeFv
 */
JAISe::JAISe()
    : JAISound()
    , m_seParam()
{
}

/*
 * --INFO--
 * Address:	800B3A78
 * Size:	0000AC
 * __ct__9JAIStreamFv
 */
JAIStream::JAIStream()
    : JAISound()
    , _64()
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
void JAISound::initMultiMoveParameter(JAInter::MoveParaSet*, unsigned char, unsigned long, float, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B3B24
 * Size:	000024
 */
u32 JAISe::getSeCategoryNumber() { return JAInter::SeMgr::changeIDToCategory(m_soundID); }

/*
 * --INFO--
 * Address:	800B3B48
 * Size:	00000C
 */
u32 JAISound::getSwBit() { return m_soundInfo->unk1; }

/*
 * --INFO--
 * Address:	800B3B54
 * Size:	000010
 */
u32 JAISound::checkSwBit(unsigned long p1) { return p1 & getSwBit(); }

/*
 * --INFO--
 * Address:	800B3B64
 * Size:	00000C
 */
u32 JAISound::getInfoPriority() { return m_soundInfo->count.v2[0]; }

/*
 * --INFO--
 * Address:	800B3B70
 * Size:	000018
 */
void JAISound::clearMainSoundPPointer()
{
	if (_40 == nullptr) {
		return;
	}
	*_40 = nullptr;
}

/*
 * --INFO--
 * Address:	800B3B88
 * Size:	000014
 */
void JAISound::release()
{
	*_40 = nullptr;
	_40  = nullptr;
}

/*
 * --INFO--
 * Address:	800B3B9C
 * Size:	00004C
 */
void JAISound::start(unsigned long p1)
{
	setPrepareFlag(0);
	_28 = p1;
}

/*
 * --INFO--
 * Address:	800B3BE8
 * Size:	000030
 */
void JAISound::stop(unsigned long p1) { JAIBasic::msBasic->stopSoundHandle(this, p1); }

/*
 * --INFO--
 * Address:	800B3C18
 * Size:	000078
 */
void JAISound::setPrepareFlag(unsigned char prepareFlag)
{
	switch (m_soundID & JAISoundID_TypeMask) {
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

/*
 * --INFO--
 * Address:	800B3C90
 * Size:	000020
 * setPrepareFlag__9JAIStreamFUc
 */
void JAIStream::setPrepareFlag(unsigned char p1) { setStreamPrepareFlag(p1); }

/*
 * --INFO--
 * Address:	800B3CB0
 * Size:	000020
 * setPrepareFlag__11JAISequenceFUc
 */
void JAISequence::setPrepareFlag(unsigned char p1) { setSeqPrepareFlag(p1); }

/*
 * --INFO--
 * Address:	800B3CD0
 * Size:	000078
 */
void JAISound::checkReady()
{
	switch (m_soundID & JAISoundID_TypeMask) {
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

/*
 * --INFO--
 * Address:	800B3D48
 * Size:	000020
 * checkReady__9JAIStreamFv
 */
void JAIStream::checkReady() { checkStreamReady(); }

/*
 * --INFO--
 * Address:	800B3D68
 * Size:	000020
 * checkReady__11JAISequenceFv
 */
void JAISequence::checkReady() { checkSeqReady(); }

/*
 * --INFO--
 * Address:	800B3D88
 * Size:	000154
 */
float JAISound::setDistanceVolumeCommon(float p1, unsigned char p2)
{
	float v1;
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

/*
 * --INFO--
 * Address:	800B3EDC
 * Size:	00015C
 */
float JAISound::setDistancePanCommon()
{
	if (JAIGlobalParameter::audioCameraMax == 1) {
		JAISound_0x34* v0 = _34;
		float v1          = FABS(v0->_00);
		float v2          = FABS(v0->_08);
		if (v1 < 1.0f && v2 < 1.0f) {
			return 0.5f;
		}
		if (JAIGlobalParameter::panDistanceMax < v1) {
			v1 = JAIGlobalParameter::panDistanceMax;
		}
		if (JAIGlobalParameter::panDistanceMax < v2) {
			v2 = JAIGlobalParameter::panDistanceMax;
		}
		if (v0->_00 == 0.0f && v0->_08 == 0.0f) {
			return 0.5f;
		}
		if (v0->_00 > 0.0f && v1 >= v2) {
			return 1.0f
			     - (JAIGlobalParameter::panDistance2Max - v1)
			           / (JAIGlobalParameter::panAngleParameter * (JAIGlobalParameter::panDistance2Max - v2));
		}
		if (v0->_00 <= 0.0f && v1 >= v2) {
			return (JAIGlobalParameter::panDistance2Max - v1)
			     / (JAIGlobalParameter::panAngleParameter * (JAIGlobalParameter::panDistance2Max - v2));
		}
		return v0->_00 / (JAIGlobalParameter::panAngleParameter2 * v2) + 0.5f;
	}
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

/*
 * --INFO--
 * Address:	800B4038
 * Size:	000270
 */
float JAISound::setPositionDopplarCommon(unsigned long)
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

/*
 * --INFO--
 * Address:	800B42A8
 * Size:	000074
 */
float JAISound::setDistanceDolbyCommon()
{
	JAISound_0x34* obj = _34;
	if (_3C == 0 || obj->_08 < JAIGlobalParameter::seDolbyFrontDistanceMax) {
		return 0.0f;
	}
	if (obj->_08 < 0.0f) {
		return (JAIGlobalParameter::seDolbyCenterValue * (JAIGlobalParameter::seDolbyFrontDistanceMax - obj->_08))
		     / JAIGlobalParameter::seDolbyFrontDistanceMax;
	}
	if (obj->_08 < JAIGlobalParameter::seDolbyBehindDistanceMax) {
		return (127.0f - JAIGlobalParameter::seDolbyCenterValue) * (obj->_08 / JAIGlobalParameter::seDolbyBehindDistanceMax)
		     + JAIGlobalParameter::seDolbyCenterValue;
	}
	return 127.0f;
}

/*
 * --INFO--
 * Address:	800B431C
 * Size:	000088
 */
void JAISequence::setSeqInterVolume(unsigned char p1, float p2, unsigned long p3)
{
	int result = m_seqParameter._110[p1].set(p2, p3);
	if (result == 1) {
		m_seqParameter._284 |= 1 << p1;
	}
	if (m_seqParameter._2C0 != nullptr && result != 2) {
		m_seqParameter._2C0->_08 |= 0x40000;
	}
}

/*
 * --INFO--
 * Address:	800B43A4
 * Size:	000088
 */
void JAISequence::setSeqInterPan(unsigned char p1, float p2, unsigned long p3)
{
	int result = m_seqParameter._250[p1].set(p2, p3);
	if (result == 1) {
		m_seqParameter._288 |= 1 << p1;
	}
	if (m_seqParameter._2C0 != nullptr && result != 2) {
		m_seqParameter._2C0->_08 |= 0x80000;
	}
}

/*
 * --INFO--
 * Address:	800B442C
 * Size:	000088
 */
void JAISequence::setSeqInterPitch(unsigned char p1, float p2, unsigned long p3)
{
	int result = m_seqParameter._254[p1].set(p2, p3);
	if (result == 1) {
		m_seqParameter._28C |= 1 << p1;
	}
	if (m_seqParameter._2C0 != nullptr && result != 2) {
		m_seqParameter._2C0->_08 |= 0x100000;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAISequence::setSeqInterFxmix(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void JAISequence::setSeqInterDolby(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAISequence::setSeqTempoProportion(float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void JAISequence::setSeqPortData(unsigned char, unsigned short, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAISequence::setWaveReadMode(long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAISequence::setTrackVolume(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void JAISequence::setTrackVolumeMulti(unsigned char, unsigned long, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void JAISequence::setTrackMuteSwitch(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JAISequence::setTrackMuteSwitchMulti(unsigned long, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B44B4
 * Size:	000028
 */
void JAISequence::setTrackInterruptSwitch(unsigned char p1, unsigned char p2)
{
	m_seqParameter._2B8[p1] = p2;
	if (m_seqParameter._2C0 == nullptr) {
		return;
	}
	m_seqParameter._2C0->_08 |= 0x800000;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAISequence::setTrackPan(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void JAISequence::setTrackPanMulti(unsigned char, unsigned long, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAISequence::setTrackPitch(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void JAISequence::setTrackPitchMulti(unsigned char, unsigned long, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B44DC
 * Size:	0000B0
 */
void JAISequence::setTrackFxmix(unsigned char p1, float p2, unsigned long p3)
{
	if (_15 >= 4 && (m_seqParameter._2C0->_04 & 1 << p1) == 0) {
		return;
	}
	int result = m_seqParameter._26C[p1].set(p2, p3);
	if (result == 1) {
		m_seqParameter._2A4 |= 1 << p1;
	}
	if (m_seqParameter._2C0 != nullptr && result != 2) {
		m_seqParameter._2C0->_08 |= 0x800;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void JAISequence::setTrackFxmixMulti(unsigned char, unsigned long, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JAISequence::setTrackDolby(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void JAISequence::setTrackDolbyMulti(unsigned char, unsigned long, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B458C
 * Size:	0000D0
 */
void JAISequence::setTrackPortData(unsigned char p1, unsigned char p2, unsigned short p3)
{
	if (m_seqParameter._2C0 == nullptr) {
		return;
	}
	if (_15 >= 4) {
		m_seqParameter.m_track.writePortApp(getTrackPortRoute(p1, p2), p3);
	} else {
		m_seqParameter._2C0->_08 |= 0x1000;
		m_seqParameter._2B0 |= 1 << p1;
		m_seqParameter._2B4[p1] |= 1 << p2;
	}
	m_seqParameter._274[p1][p2] = p3;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
void JAISe::setSeInterRandomPara(float*, unsigned long, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B465C
 * Size:	000158
 */
void JAISe::setSeInterVolume(unsigned char p1, float p2, unsigned long p3, unsigned char p4)
{
	// float v5 = p2;
	// if (p4 != 0) {
	// 	// TODO: I think this is a mapping function of TRandom_fast_. v3 and v1 are probably a max and min, in some order?
	// 	// 	uint v3  = (p4 * 1000) / 0x7F;
	// 	// 	v3       = (p4 * 1000 - (v3 >> 1)) + (v3 >> 6);
	// 	// 	u32 v2   = JAInter::Const::random.nextFloat_0_1();
	// 	// 	u32 v1   = v3 * 2;
	// 	// 	v5       = 1.0f;
	// 	// 	float v7 = (float)((v2 - (v2 / v1) * v1) + 1) - ((float)(v3) / 1000.0f);
	// 	// 	if (p2 + v7 <= v5) {
	// 	// 		v5 = 0.0f;
	// 	// 		if (v5 - v7 <= p2) {
	// 	// 			v5 = p2 + v7;
	// 	// 		}
	// 	// 	}
	// 	v5 = JAInter::Const::random.nextFloat(p2, p4);
	// }
	// m_seParam._124[p1].set(v5, p3);
	m_seParam._124[p1].set(p4 != 0 ? JAInter::Const::random.nextFloat(p2, p4) : p2, p3);

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

/*
 * --INFO--
 * Address:	800B47B4
 * Size:	000158
 */
void JAISe::setSeInterPan(unsigned char, float, unsigned long, unsigned char)
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

/*
 * --INFO--
 * Address:	........
 * Size:	00014C
 */
void JAISe::setSeInterPitch(unsigned char, float, unsigned long, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void JAISe::setSeInterFxmix(unsigned char, float, unsigned long, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JAISe::setSeInterFir(unsigned char, unsigned char, unsigned long, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B490C
 * Size:	000158
 */
void JAISe::setSeInterDolby(unsigned char, float, unsigned long, unsigned char)
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

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void JAISe::setSePortData(unsigned char, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void JAISe::getSePortData(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B4A64
 * Size:	00012C
 */
void JAISe::setSeDistanceParameters()
{
	u8 v1 = m_distanceParameterMoveTime;
	if (_15 == 2) {
		v1 = 0;
	}
	setSeDistanceVolume(v1);
	setSeDistancePan(v1);
	setSeDistancePitch(v1);
	setSePositionDopplar();
	setSeDistanceFxmix(v1);
	setSeDistanceFir(v1);
	if ((m_soundInfo->unk1 & 0x400) == 0) {
		setFxmix(JAIBasic::msBasic->getMapInfoFxParameter(_30), 0, 3);
	}
	setSeDistanceDolby(v1);
}

/*
 * --INFO--
 * Address:	800B4B90
 * Size:	000030
 * setFxmix__5JAISeFfUlUc
 */
void JAISe::setFxmix(float p1, unsigned long p2, unsigned char p3) { m_seParam._2A4[p3].set(p1, p2); }

/*
 * --INFO--
 * Address:	800B4BC0
 * Size:	000070
 */
void JAISe::setSeDistanceVolume(unsigned char p1)
{
	m_seParam._124[4].set(
	    (m_soundInfo->unk1 & 2) == 0 ? setDistanceVolumeCommon(JAIGlobalParameter::distanceMax, (m_soundInfo->unk1 >> 0x10) & 7) : 1.0f,
	    p1);
}

/*
 * --INFO--
 * Address:	800B4C30
 * Size:	000074
 */
void JAISe::setSeDistancePan(unsigned char)
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

/*
 * --INFO--
 * Address:	800B4CA4
 * Size:	000138
 */
void JAISe::setSeDistancePitch(unsigned char p1)
{
	f32 pitch = 1.0f;
	if ((m_soundInfo->unk1 & 0x10) != 0) {
		// pitch = 1.0f - ((JAInter::Const::random.nextFloat_0_1() * 16.0f) / 192.0f;
		// pitch = 1.0f - ((JAInter::Const::random.idkanymore() & 0xF) ^ 0x80000000) / 192.0f;
		// pitch = 1.0f - JAInter::Const::random.idkanymore() / 192.0f;
		pitch = JAInter::Const::random.idkanymore();
	}
	if ((m_soundInfo->unk1 & 0x4000) != 0) {
		if ((m_soundInfo->unk1 & 2) == 0 && (m_soundInfo->unk1 & 0x300) == 0) {
			if (JAIGlobalParameter::audioCameraMax == 1) {
				if (_34->_18 >= JAIGlobalParameter::distanceMax) {
					pitch += JAIGlobalParameter::seDistancepitchMax;
				} else {
					pitch = JAIGlobalParameter::seDistancepitchMax * (_34->_18 / JAIGlobalParameter::distanceMax) + pitch;
				}
			}
		}
	}
	if ((m_soundInfo->unk1 & 0xC0) != 0) {
		pitch += _17 / 192.0f;
	}
	m_seParam._224[4].set(pitch, p1);
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

/*
 * --INFO--
 * Address:	800B4DDC
 * Size:	000080
 */
void JAISe::setSePositionDopplar()
{
	u32 moveTime = JAIGlobalParameter::dopplarMoveTime;
	if (_15 == 2) {
		moveTime = 1;
	}
	if ((m_soundInfo->unk1 & 0x300) != 0 && JAIGlobalParameter::audioCameraMax == 1) {
		m_seParam._224[1].set(setPositionDopplarCommon(m_soundInfo->unk1 & 0x300), moveTime);
	}
}

/*
 * --INFO--
 * Address:	800B4E5C
 * Size:	0000C8
 */
void JAISe::setSeDistanceFxmix(unsigned char p1)
{
	u16 fx = JAIGlobalParameter::seDefaultFx;
	if ((m_soundInfo->unk1 & 4) == 0 && JAIGlobalParameter::audioCameraMax == 1) {
		if (_34->_18 < JAIGlobalParameter::distanceMax) {
			fx = (JAIGlobalParameter::seDistanceFxParameter * (_34->_18 / JAIGlobalParameter::distanceMax));
		} else {
			fx = JAIGlobalParameter::seDistanceFxParameter;
		}
	}
	if (0x7F < fx) {
		fx = 0x7F;
	}
	m_seParam._2A4[4].set((u8)fx / 127.0f, p1);
}

/*
 * --INFO--
 * Address:	800B4F24
 * Size:	000004
 */
void JAISe::setSeDistanceFir(unsigned char) { }

/*
 * --INFO--
 * Address:	800B4F28
 * Size:	0000A4
 */
void JAISe::setSeDistanceDolby(unsigned char)
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

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIStream::setStreamMode(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterVolume(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterPan(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterPitch(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterFxmix(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterDolby(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B4FCC
 * Size:	00000C
 */
void JAIStream::setStreamPrepareFlag(unsigned char p1) { JAInter::StreamMgr::streamUpdate->_02 = p1; }

/*
 * --INFO--
 * Address:	800B4FD8
 * Size:	000040
 */
bool JAIStream::checkStreamReady()
{
	if (_15 == 3 && JAInter::StreamMgr::getSystemStatus() == 1) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	800B5018
 * Size:	0000A0
 */
void JAIStream::setChannelVolume(unsigned char p1, float p2, unsigned long p3)
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

/*
 * --INFO--
 * Address:	800B50B8
 * Size:	0000A0
 */
void JAIStream::setChannelPan(unsigned char p1, float p2, unsigned long p3)
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

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JAIStream::setChannelFxmix(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JAIStream::setChannelDolby(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAIStream::getChannelVolume(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAIStream::getChannelPan(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAIStream::getChannelFxmix(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAIStream::getChannelDolby(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B5158
 * Size:	0001E8
 */
void JAISound::setPauseMode(unsigned char p1, unsigned char p2)
{
	switch (m_soundID & JAISoundID_TypeMask) {
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
			sequence->m_seqParameter.m_track.pause(true, true);
			break;
		case 0:
			switch (sequence->m_seqParameter._279) {
			case 1:
				setVolume(1.0f, 1, 11);
				break;
			case 2:
				sequence->m_seqParameter.m_track.pause(false, true);
				break;
			}
			break;
		}
		sequence->m_seqParameter._279 = p1;
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

/*
 * --INFO--
 * Address:	800B5340
 * Size:	000084
 */
// void JAIStream::setVolume(float p1, unsigned long p2, unsigned char p3)
// {
// 	int result = _64[p3].set(p1, p2);
// 	if (result == 1) {
// 		_50 |= 1 << p3;
// 	}
// 	if (_1B4 != nullptr && result != 2) {
// 		_1B4->_18 |= 0x40000;
// 	}
// }

/*
 * --INFO--
 * Address:	800B53C4
 * Size:	0000AC
 * setVolumeU7__11JAISequenceFUcUlUc
 */
void JAISequence::setVolumeU7(unsigned char p1, unsigned long p2, unsigned char p3)
{
	int result = m_seqParameter._110[p3].set(p1 / 127.0f, p2);
	if (result == 1) {
		m_seqParameter._284 |= 1 << p3;
	}
	if (m_seqParameter._2C0 != nullptr && result != 2) {
		m_seqParameter._2C0->_08 |= 0x40000;
	}
}

/*
 * --INFO--
 * Address:	800B5470
 * Size:	00000C
 * setSeqPrepareFlag__11JAISequenceFUc
 */
void JAISequence::setSeqPrepareFlag(unsigned char seqPrepareFlag) { m_seqParameter._2C0->_02 = seqPrepareFlag; }

/*
 * --INFO--
 * Address:	800B547C
 * Size:	00002C
 * checkSeqReady__11JAISequenceFv
 */
bool JAISequence::checkSeqReady()
{
	if (_15 == 2 && m_seqParameter._27C == 0xFFFFFFFF) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	800B54A8
 * Size:	00002C
 * getSeqInterVolume__11JAISequenceFUc
 */
float JAISequence::getSeqInterVolume(unsigned char p1)
{
	if (_15 == 4 || _15 == 5) {
		return m_seqParameter._110[p1]._04;
	}
	return -1.0f;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqInterPan(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqInterPitch(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqInterFxmix(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqInterDolby(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JAISequence::getSeqTempoProportion()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqPortData(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void JAISequence::getTrackParameterU7(unsigned char, char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void JAISequence::getTrackParameterF32(unsigned char, char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAISound::getPointer(unsigned char, char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JAISequence::getTrackPortData(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void JAISe::getSeParametermeterF32(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JAIStream::getStreamInterVolume(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAIStream::getStreamInterPan(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAIStream::getStreamInterPitch(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAIStream::getStreamInterFxmix(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAIStream::getStreamInterDolby(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAISound::getActorGroundNumber()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B54D4
 * Size:	00003C
 */
u32 JAISound::getTrackPortRoute(unsigned char p1, unsigned char p2)
{
	if ((m_soundID & 0x800) != 0) {
		return (p1 >> 4) + 0x20000000 + p2 * 0x10000 + (p1 & 0xF) * 0x10;
	} else {
		return (p1 & 0xF) + 0x10000000 + p2 * 0x10000;
	}
	// return ((m_soundID & 0x800) != 0) ? (p1 >> 4) + 0x20000000 + p2 * 0x10000 + (p1 & 0xF) * 0x10 : (p1 & 0xF) + 0x10000000 + p2 *
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

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAISe::getSeInfoPointer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B5510
 * Size:	000088
 */
bool JAISound::checkSoundHandle(unsigned long id, void* p2)
{
	bool result = false;
	if ((m_soundID & JAISoundID_TypeMask) != (id & JAISoundID_TypeMask)) {
		stop(0);
	} else if (m_soundInfo->count.v2[0] <= static_cast<JAInter::SoundInfo*>(p2)->count.v2[0]) {
		stop(0);
	} else {
		result = true;
	}
	return result;
}

/*
 * --INFO--
 * Address:	800B5598
 * Size:	00004C
 * getFadeCounter__11JAISequenceFv
 */
u32 JAISequence::getFadeCounter()
{
	if ((JAInter::SequenceMgr::getPlayTrackInfo(_14)->_08 & 2) != 0) {
		return _28;
	}
	return m_seqParameter._110[7]._0C - 1;
}

/*
 * --INFO--
 * Address:	800B55E4
 * Size:	00000C
 * getFadeCounter__5JAISeFv
 */
u32 JAISe::getFadeCounter() { return m_seParam._124[6]._0C - 1; }

/*
 * --INFO--
 * Address:	800B55F0
 * Size:	000024
 * getFadeCounter__9JAIStreamFv
 */
u32 JAIStream::getFadeCounter()
{
	if ((_1B4->_18 & 2) != 0) {
		return _28;
	}
	return _64[7]._0C - 1;
}

/*
 * --INFO--
 * Address:	800B5614
 * Size:	0000E8
 */
void JAISound::initParameter(void* handlePtr, JAInter::Actor* actor, unsigned long id, unsigned long p4, unsigned char p5,
                             JAInter::SoundInfo* info)
{
	m_soundID = id;
	if (actor != nullptr) {
		_38 = actor->m_vec1;
		if (actor->m_vec1 != nullptr) {
			_3C = actor->m_vec2;
			_30 = actor->m_unk;
		} else {
			_3C = nullptr;
			_30 = actor->m_unk;
		}
		_1A = actor->m_flag.boolView[0];
	} else {
		_38 = nullptr;
		_3C = nullptr;
		_1A = 0;
		_30 = 0;
	}
	_40                         = (void**)handlePtr;
	_28                         = p4;
	_18                         = p5;
	m_soundInfo                 = info;
	_16                         = 10;
	m_distanceParameterMoveTime = JAIGlobalParameter::getParamDistanceParameterMoveTime();
	m_adjustPriority            = 0;
	_2C                         = 0;
	if (_3C != nullptr) {
		_34->_18 = JAIGlobalParameter::getParamDistanceMax() * 10.0f;
	} else {
		_34->_18 = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	800B56FC
 * Size:	000070
 * init__Q27JAInter9LinkSoundFv
 */
void JAInter::LinkSound::init()
{
	_00 = new (JAIBasic::msCurrentHeap, 0x20) JSUList<JAISound>();
	_04 = new (JAIBasic::msCurrentHeap, 0x20) JSUList<JAISound>();
}

/*
 * --INFO--
 * Address:	800B576C
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	800B57E8
 * Size:	000004
 */
void JAISound::onGet() { }

/**
 * --INFO--
 * Address:	800B57EC
 * Size:	000068
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

/*
 * --INFO--
 * Address:	800B5854
 * Size:	000004
 */
void JAISound::onRelease() { }

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAInter::LinkSound::getFreeStartFirstObject(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAInter::LinkSound::getUsedEndFirstObject(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B5858
 * Size:	000098
 * set__Q27JAInter11MoveParaSetFfUl
 */
int JAInter::MoveParaSet::set(float p1, unsigned long p2)
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

/*
 * --INFO--
 * Address:	800B58F0
 * Size:	00004C
 * move__Q27JAInter11MoveParaSetFv
 */
BOOL JAInter::MoveParaSet::move(void)
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

/*
 * --INFO--
 * Address:	800B593C
 * Size:	00002C
 * getVolume__9JAIStreamFUc
 */
float JAIStream::getVolume(unsigned char p1)
{
	if (_15 == 4 || _15 == 5) {
		return _64[p1]._04;
	}
	return -1.0f;
}

/*
 * --INFO--
 * Address:	800B5968
 * Size:	0000E4
 * setPan__9JAIStreamFfUlUc
 */
void JAIStream::setPan(float p1, unsigned long p2, unsigned char p3)
{
	int result = _1A8[p3].set(p1, p2);
	if (result == 1) {
		_58 |= 1 << p3;
	}
	if (_1B4 != nullptr && result != 2) {
		_1B4->_18 |= 0x80000;
	}
}

/*
 * --INFO--
 * Address:	800B5A4C
 * Size:	000030
 * getPan__9JAIStreamFUc
 */
float JAIStream::getPan(unsigned char p1)
{
	if (_15 == 4 || _15 == 5) {
		return _1A8[p1]._04;
	}
	return -1.0f;
}

/*
 * --INFO--
 * Address:	800B5A7C
 * Size:	0000E4
 * setPitch__9JAIStreamFfUlUc
 */
void JAIStream::setPitch(float p1, unsigned long p2, unsigned char p3)
{
	int result = _1A4[p3].set(p1, p2);
	if (result == 1) {
		_54 |= 1 << p3;
	}
	if (_1B4 != nullptr && result != 2) {
		_1B4->_18 |= 0x100000;
	}
}

/*
 * --INFO--
 * Address:	800B5B60
 * Size:	000030
 * getPitch__9JAIStreamFUc
 */
float JAIStream::getPitch(unsigned char p1)
{
	if (_15 == 4 || _15 == 5) {
		return _1A4[p1]._04;
	}
	return -1.0f;
}

/*
 * --INFO--
 * Address:	800B5B90
 * Size:	0000E4
 * setFxmix__9JAIStreamFfUlUc
 */
void JAIStream::setFxmix(float p1, unsigned long p2, unsigned char p3)
{
	int result = _1AC[p3].set(p1, p2);
	if (result == 1) {
		_5C |= 1 << p3;
	}
	if (_1B4 != nullptr && result != 2) {
		_1B4->_18 |= 0x200000;
	}
}

/*
 * --INFO--
 * Address:	800B5C74
 * Size:	000030
 * getFxmix__9JAIStreamFUc
 */
float JAIStream::getFxmix(unsigned char p1)
{
	if (_15 == 4 || _15 == 5) {
		return _1AC[p1]._04;
	}
	return -1.0f;
}

/*
 * --INFO--
 * Address:	800B5CA4
 * Size:	0000E4
 * setDolby__9JAIStreamFfUlUc
 */
void JAIStream::setDolby(float p1, unsigned long p2, unsigned char p3)
{
	int result = _1B0[p3].set(p1, p2);
	if (result == 1) {
		_60 |= 1 << p3;
	}
	if (_1B4 != nullptr && result != 2) {
		_1B4->_18 |= 0x400000;
	}
}

/*
 * --INFO--
 * Address:	800B5D88
 * Size:	000030
 * getDolby__9JAIStreamFUc
 */
float JAIStream::getDolby(unsigned char p1)
{
	if (_15 == 4 || _15 == 5) {
		return _1B0[p1]._04;
	}
	return -1.0f;
}

/*
 * --INFO--
 * Address:	800B5DB8
 * Size:	000058
 * setVolumeU7__9JAIStreamFUcUlUc
 */
// void JAIStream::setVolumeU7(unsigned char p1, unsigned long p2, unsigned char p3) { setVolume(p1 / 127.0f, p2, p3); }

/*
 * --INFO--
 * Address:	800B5E10
 * Size:	000040
 * getVolumeU7__9JAIStreamFUc
 */
u8 JAIStream::getVolumeU7(unsigned char p1) { return getVolume(p1) * 127.0f; }

/*
 * --INFO--
 * Address:	800B5E50
 * Size:	000058
 * setPanU7__9JAIStreamFUcUlUc
 */
void JAIStream::setPanU7(unsigned char p1, unsigned long p2, unsigned char p3) { setPan(p1 / 127.0f, p2, p3); }

/*
 * --INFO--
 * Address:	800B5EA8
 * Size:	000040
 * getPanU7__9JAIStreamFUc
 */
u8 JAIStream::getPanU7(unsigned char p1) { return getPan(p1) * 127.0f; }

/*
 * --INFO--
 * Address:	800B5EE8
 * Size:	000058
 * setFxmixU7__9JAIStreamFUcUlUc
 */
void JAIStream::setFxmixU7(unsigned char p1, unsigned long p2, unsigned char p3) { setFxmix(p1 / 127.0f, p2, p3); }

/*
 * --INFO--
 * Address:	800B5F40
 * Size:	000040
 * getFxmixU7__9JAIStreamFUc
 */
u8 JAIStream::getFxmixU7(unsigned char p1) { return getFxmix(p1) * 127.0f; }

/*
 * --INFO--
 * Address:	800B5F80
 * Size:	000058
 * setDolbyU7__9JAIStreamFUcUlUc
 */
void JAIStream::setDolbyU7(unsigned char p1, unsigned long p2, unsigned char p3) { setDolby(p1 / 127.0f, p2, p3); }

/*
 * --INFO--
 * Address:	800B5FD8
 * Size:	000040
 * getDolbyU7__9JAIStreamFUc
 */
u8 JAIStream::getDolbyU7(unsigned char p1) { return getDolby(p1) * 127.0f; }

/*
 * --INFO--
 * Address:	800B6018
 * Size:	000004
 */
void JAIStream::setPortData(unsigned char, unsigned short) { }

/*
 * --INFO--
 * Address:	800B601C
 * Size:	00000C
 * getPortData__9JAIStreamFUc
 */
u16 JAIStream::getPortData(unsigned char) { return 0xFFFF; }

/*
 * --INFO--
 * Address:	800B6028
 * Size:	000004
 */
void JAISound::setTempoProportion(float, unsigned long) { }

/*
 * --INFO--
 * Address:	800B602C
 * Size:	000008
 */
float JAISound::getTempoProportion() { return 1.0f; }

/*
 * --INFO--
 * Address:	800B6034
 * Size:	000030
 */
void JAISound::setDirectVolume(float p1, unsigned long p2) { setVolume(p1, p2, 6); }

/*
 * --INFO--
 * Address:	800B6064
 * Size:	000030
 */
void JAISound::setDirectPan(float p1, unsigned long p2) { setPan(p1, p2, 6); }

/*
 * --INFO--
 * Address:	800B6094
 * Size:	000030
 */
void JAISound::setDirectPitch(float p1, unsigned long p2) { setPitch(p1, p2, 6); }

/*
 * --INFO--
 * Address:	800B60C4
 * Size:	000030
 */
void JAISound::setDirectFxmix(float p1, unsigned long p2) { setFxmix(p1, p2, 6); }

/*
 * --INFO--
 * Address:	800B60F4
 * Size:	000030
 */
void JAISound::setDirectDolby(float p1, unsigned long p2) { setDolby(p1, p2, 6); }

/*
 * --INFO--
 * Address:	800B6124
 * Size:	000030
 */
void JAISound::setDemoVolume(float p1, unsigned long p2) { setVolume(p1, p2, 2); }

/*
 * --INFO--
 * Address:	800B6154
 * Size:	000030
 */
void JAISound::setDemoPan(float p1, unsigned long p2) { setPan(p1, p2, 2); }

/*
 * --INFO--
 * Address:	800B6184
 * Size:	000030
 */
void JAISound::setDemoPitch(float p1, unsigned long p2) { setPitch(p1, p2, 2); }

/*
 * --INFO--
 * Address:	800B61B4
 * Size:	000030
 */
void JAISound::setDemoFxmix(float p1, unsigned long p2) { setFxmix(p1, p2, 2); }

/*
 * --INFO--
 * Address:	800B61E4
 * Size:	000030
 */
void JAISound::setDemoDolby(float p1, unsigned long p2) { setDolby(p1, p2, 2); }

/*
 * --INFO--
 * Address:	800B6214
 * Size:	000030
 */
void JAISound::setDemoVolumeU7(unsigned char p1, unsigned long p2) { setVolumeU7(p1, p2, 2); }

/*
 * --INFO--
 * Address:	800B6244
 * Size:	000030
 */
void JAISound::setDemoPanU7(unsigned char p1, unsigned long p2) { setPanU7(p1, p2, 2); }

/*
 * --INFO--
 * Address:	800B6274
 * Size:	000030
 */
void JAISound::setDemoFxmixU7(unsigned char p1, unsigned long p2) { setFxmixU7(p1, p2, 2); }

/*
 * --INFO--
 * Address:	800B62A4
 * Size:	000030
 */
void JAISound::setDemoDolbyU7(unsigned char p1, unsigned long p2) { setDolbyU7(p1, p2, 2); }

/*
 * --INFO--
 * Address:	800B62D4
 * Size:	000008
 */
void JAISound::setDistanceParameterMoveTime(unsigned char a1)
{
	// Generated from stb r4, 0x19(r3)
	m_distanceParameterMoveTime = a1;
}

/*
 * --INFO--
 * Address:	800B62DC
 * Size:	000008
 */
void JAISound::setAdjustPriority(short a1)
{
	// Generated from sth r4, 0x1C(r3)
	m_adjustPriority = a1;
}

/*
 * --INFO--
 * Address:	800B62E4
 * Size:	000010
 * getVolume__5JAISeFUc
 */
float JAISe::getVolume(unsigned char p1) { return m_seParam._124[p1]._04; }

/*
 * --INFO--
 * Address:	800B62F4
 * Size:	000090
 * setPan__5JAISeFfUlUc
 */
void JAISe::setPan(float p1, unsigned long p2, unsigned char p3) { m_seParam._1A4[p3].set(p1, p2); }

/*
 * --INFO--
 * Address:	800B6384
 * Size:	000010
 * getPan__5JAISeFUc
 */
float JAISe::getPan(unsigned char p1) { return m_seParam._1A4[p1]._04; }

/*
 * --INFO--
 * Address:	800B6394
 * Size:	000090
 * setPitch__5JAISeFfUlUc
 */
void JAISe::setPitch(float p1, unsigned long p2, unsigned char p3) { m_seParam._224[p3].set(p1, p2); }

/*
 * --INFO--
 * Address:	800B6424
 * Size:	000010
 * getPitch__5JAISeFUc
 */
float JAISe::getPitch(unsigned char p1) { return m_seParam._224[p1]._04; }

/*
 * --INFO--
 * Address:	800B6434
 * Size:	000010
 * getFxmix__5JAISeFUc
 */
float JAISe::getFxmix(unsigned char p1) { return m_seParam._2A4[p1]._04; }

/*
 * --INFO--
 * Address:	800B6444
 * Size:	000090
 * setDolby__5JAISeFfUlUc
 */
void JAISe::setDolby(float p1, unsigned long p2, unsigned char p3) { m_seParam._3A4[p3].set(p1, p2); }

/*
 * --INFO--
 * Address:	800B64D4
 * Size:	000010
 * getDolby__5JAISeFUc
 */
float JAISe::getDolby(unsigned char p1) { return m_seParam._3A4[p1]._04; }

/*
 * --INFO--
 * Address:	800B64E4
 * Size:	0000B4
 * setVolumeU7__5JAISeFUcUlUc
 */
void JAISe::setVolumeU7(unsigned char p1, unsigned long p2, unsigned char p3)
{
	float v1 = p1 / 127.0f;
	m_seParam._124[p3].set(v1, p2);
}

/*
 * --INFO--
 * Address:	800B6598
 * Size:	00002C
 * getVolumeU7__5JAISeFUc
 */
u8 JAISe::getVolumeU7(unsigned char p1) { return m_seParam._124[p1]._04 * 127.0f; }

/*
 * --INFO--
 * Address:	800B65C4
 * Size:	0000B4
 * setPanU7__5JAISeFUcUlUc
 */
void JAISe::setPanU7(unsigned char p1, unsigned long p2, unsigned char p3)
{
	float v1 = p1 / 127.0f;
	m_seParam._1A4[p3].set(v1, p2);
}

/*
 * --INFO--
 * Address:	800B6678
 * Size:	00002C
 * getPanU7__5JAISeFUc
 */
u8 JAISe::getPanU7(unsigned char p1) { return m_seParam._1A4[p1]._04 * 127.0f; }

/*
 * --INFO--
 * Address:	800B66A4
 * Size:	0000B4
 * setFxmixU7__5JAISeFUcUlUc
 */
void JAISe::setFxmixU7(unsigned char p1, unsigned long p2, unsigned char p3)
{
	float v1 = p1 / 127.0f;
	m_seParam._2A4[p3].set(v1, p2);
}

/*
 * --INFO--
 * Address:	800B6758
 * Size:	00002C
 * getFxmixU7__5JAISeFUc
 */
u8 JAISe::getFxmixU7(unsigned char p1) { return m_seParam._2A4[p1]._04 * 127.0f; }

/*
 * --INFO--
 * Address:	800B6784
 * Size:	0000B4
 * setDolbyU7__5JAISeFUcUlUc
 */
void JAISe::setDolbyU7(unsigned char p1, unsigned long p2, unsigned char p3)
{
	float v1 = p1 / 127.0f;
	m_seParam._3A4[p3].set(v1, p2);
}

/*
 * --INFO--
 * Address:	800B6838
 * Size:	00002C
 * getDolbyU7__5JAISeFUc
 */
u8 JAISe::getDolbyU7(unsigned char p1) { return m_seParam._3A4[p1]._04 * 127.0f; }

/*
 * --INFO--
 * Address:	800B6864
 * Size:	000130
 * setPortData__5JAISeFUcUs
 */
void JAISe::setPortData(unsigned char, unsigned short)
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

/*
 * --INFO--
 * Address:	800B6994
 * Size:	0000AC
 * getPortData__5JAISeFUc
 */
u16 JAISe::getPortData(unsigned char p1)
{
	if ((m_soundID & JAISoundID_TypeMask) == JAISoundID_Type_Se) {
		u8 v1            = _14;
		static u16 _port = -1;
		if (JAInter::SeMgr::seHandle->_15 >= 4) {
			u32 v2;
			if ((JAInter::SeMgr::seHandle->m_soundID & 0x800) != 0) {
				v2 = (v1 >> 4) + 0x20000000 + (v1 & 0xF) * 0x10 + p1 * 0x10000;
			} else {
				v2 = (v1 & 0xF) + 0x10000000 + p1 * 0x10000;
			}
			JAInter::SeMgr::seHandle->m_seqParameter.m_track.readPortApp(v2, &_port);
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

/*
 * --INFO--
 * Address:	800B6A40
 * Size:	000030
 * getPan__11JAISequenceFUc
 */
float JAISequence::getPan(unsigned char p1)
{
	if (_15 == 4 || _15 == 5) {
		return m_seqParameter._250[p1]._04;
	}
	return -1.0f;
}

/*
 * --INFO--
 * Address:	800B6A70
 * Size:	000030
 * getPitch__11JAISequenceFUc
 */
float JAISequence::getPitch(unsigned char p1)
{
	if (_15 == 4 || _15 == 5) {
		return m_seqParameter._254[p1]._04;
	}
	return -1.0f;
}

/*
 * --INFO--
 * Address:	800B6AA0
 * Size:	0000E4
 * setFxmix__11JAISequenceFfUlUc
 */
void JAISequence::setFxmix(float, unsigned long, unsigned char)
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

/*
 * --INFO--
 * Address:	800B6B84
 * Size:	000030
 * getFxmix__11JAISequenceFUc
 */
float JAISequence::getFxmix(unsigned char p1)
{
	if (_15 == 4 || _15 == 5) {
		return m_seqParameter._258[p1]._04;
	}
	return -1.0f;
}

/*
 * --INFO--
 * Address:	800B6BB4
 * Size:	000110
 * setDolby__11JAISequenceFfUlUc
 */
void JAISequence::setDolby(float, unsigned long, unsigned char)
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

/*
 * --INFO--
 * Address:	800B6CC4
 * Size:	000030
 * getDolby__11JAISequenceFUc
 */
float JAISequence::getDolby(unsigned char p1)
{
	if (_15 == 4 || _15 == 5) {
		return m_seqParameter._25C[p1]._04;
	}
	return -1.0f;
}

/*
 * --INFO--
 * Address:	800B6CF4
 * Size:	000098
 * setTempoProportion__11JAISequenceFfUl
 */
void JAISequence::setTempoProportion(float, unsigned long)
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

/*
 * --INFO--
 * Address:	800B6D8C
 * Size:	000024
 * getTempoProportion__11JAISequenceFv
 */
float JAISequence::getTempoProportion()
{
	if (_15 == 4 || _15 == 5) {
		return m_seqParameter._04;
	}
	return -1.0f;
}

/*
 * --INFO--
 * Address:	800B6DB0
 * Size:	000048
 * getVolumeU7__11JAISequenceFUc
 */
u8 JAISequence::getVolumeU7(unsigned char p1) { return JAISequence::getVolume(p1) * 127.0f; }

/*
 * --INFO--
 * Address:	800B6DF8
 * Size:	000148
 * setPanU7__11JAISequenceFUcUlUc
 */
void JAISequence::setPanU7(unsigned char, unsigned long, unsigned char)
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

/*
 * --INFO--
 * Address:	800B6F40
 * Size:	00004C
 * getPanU7__11JAISequenceFUc
 */
u8 JAISequence::getPanU7(unsigned char p1) { return JAISequence::getPan(p1) * 127.0f; }

/*
 * --INFO--
 * Address:	800B6F8C
 * Size:	000148
 * setFxmixU7__11JAISequenceFUcUlUc
 */
void JAISequence::setFxmixU7(unsigned char, unsigned long, unsigned char)
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

/*
 * --INFO--
 * Address:	800B70D4
 * Size:	00004C
 * getFxmixU7__11JAISequenceFUc
 */
u8 JAISequence::getFxmixU7(unsigned char p1) { return JAISequence::getFxmix(p1) * 127.0f; }

/*
 * --INFO--
 * Address:	800B7120
 * Size:	000134
 * setDolbyU7__11JAISequenceFUcUlUc
 */
void JAISequence::setDolbyU7(unsigned char, unsigned long, unsigned char)
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

/*
 * --INFO--
 * Address:	800B7254
 * Size:	00004C
 * getDolbyU7__11JAISequenceFUc
 */
u8 JAISequence::getDolbyU7(unsigned char p1) { return JAISequence::getDolby(p1) * 127.0f; }

/*
 * --INFO--
 * Address:	800B72A0
 * Size:	00017C
 * setPortData__11JAISequenceFUcUs
 */
void JAISequence::setPortData(unsigned char, unsigned short)
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

/*
 * --INFO--
 * Address:	800B741C
 * Size:	000030
 * getPortData__11JAISequenceFUc
 */
u16 JAISequence::getPortData(unsigned char p1)
{
	static u16 _port;
	m_seqParameter.m_track.readPortApp(p1 << 0x10, &_port);
	return _port;
}
