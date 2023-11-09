#include "JSystem/JAudio/JAI/JAIAnimeSound.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "P2Macros.h"
#include "PSM/ObjCalc.h"
#include "PSM/Scene.h"
#include "PSM/Se.h"
#include "PSSystem/PSCommon.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSScene.h"
#include "SoundID.h"
#include "Sys/Sphere.h"
#include "PSM/Cluster.h"
#include "PSSystem/ClusterSe.h"
#include "PSM/WorldMapRocket.h"
#include "PSM/PikiHumming.h"
#include "PSM/Piki.h"
#include "PS.h"
#include "PSSystem/PSSystemIF.h"
#include "JSystem/JAudio/JALCalc.h"
#include "Game/EnemyBase.h"
#include "Game/Navi.h"
#include "PSM/EnemyBase.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049DA08
    lbl_8049DA08:
        .4byte 0x50534D61
        .4byte 0x696E5369
        .4byte 0x64655F53
        .4byte 0x652E6370
        .4byte 0x70000000
    .global lbl_8049DA1C
    lbl_8049DA1C:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x67616D65
        .4byte 0x53746174
        .4byte 0x2E680000
    .global lbl_8049DA34
    lbl_8049DA34:
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x68000000
        .4byte 0x67657420
        .4byte 0x736F756E
        .4byte 0x64207363
        .4byte 0x656E6520
        .4byte 0x61740A69
        .4byte 0x6E76616C
        .4byte 0x69642074
        .4byte 0x696D6D69
        .4byte 0x6E670A00
    .global lbl_8049DA70
    lbl_8049DA70:
        .4byte 0x5053436F
        .4byte 0x6D6D6F6E
        .4byte 0x2E680000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EF6F0
    lbl_804EF6F0:
        .4byte lbl_8046D858
        .4byte lbl_8046D5B8
        .4byte lbl_8046D62C
        .4byte lbl_8046D6A0
        .4byte lbl_8046D714
        .4byte lbl_8046D758
        .4byte lbl_8046D79C
        .4byte lbl_8046D7F0
    .global lbl_804EF710
    lbl_804EF710:
        .4byte lbl_8046E3A8
        .4byte lbl_8046E370
        .4byte lbl_8046E328
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E394
        .4byte lbl_8046E394
        .4byte lbl_8046E394
        .4byte lbl_8046E34C
        .4byte lbl_8046E394
        .4byte lbl_8046E358
        .4byte lbl_8046E358
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E364
        .4byte lbl_8046E358
        .4byte lbl_8046E358
        .4byte lbl_8046E34C
        .4byte lbl_8046E37C
        .4byte lbl_8046E364
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E37C
        .4byte lbl_8046E364
        .4byte lbl_8046E31C
        .4byte lbl_8046E340
        .4byte lbl_8046E31C
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E364
        .4byte lbl_8046E3A8
        .4byte lbl_8046E31C
        .4byte lbl_8046E364
        .4byte lbl_8046E328
        .4byte lbl_8046E328
        .4byte lbl_8046E370
        .4byte lbl_8046E370
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E310
        .4byte lbl_8046E34C
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E34C
        .4byte lbl_8046E388
        .4byte lbl_8046E388
        .4byte lbl_8046E388
        .4byte lbl_8046E388
        .4byte lbl_8046E364
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E364
        .4byte lbl_8046E394
        .4byte lbl_8046E3A8
        .4byte lbl_8046E340
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E340
        .4byte lbl_8046E370
        .4byte lbl_8046E3A0
        .4byte lbl_8046E334
        .4byte lbl_8046E370
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E3A8
        .4byte lbl_8046E340
    .global __vt__Q23PSM14ClusterFactory
    __vt__Q23PSM14ClusterFactory:
        .4byte 0
        .4byte 0
        .4byte constructPart__Q38PSSystem9ClusterSe7FactoryFv
        .4byte identifyPart__Q23PSM14ClusterFactoryFUc
    .global __vt__Q23PSM14WorldMapRocket
    __vt__Q23PSM14WorldMapRocket:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM14WorldMapRocketFv

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sTreasureLader_PitchDistance
    sTreasureLader_PitchDistance:
        .float 0.77
    .global sTreasureLader_Pitch
    sTreasureLader_Pitch:
        .float 1.04
    .global sTreasureLader_DistanceExp
    sTreasureLader_DistanceExp:
        .float 5.0
    .global sTreasureLader_MinimumVolume
    sTreasureLader_MinimumVolume:
        .float 0.3
    .global sLaderNoiseVolumeExp
    sLaderNoiseVolumeExp:
        .float 7.18
    .global sLaderNoiseFuefukiTimerCenter
    sLaderNoiseFuefukiTimerCenter:
        .byte 0x0
        .byte 0x3C
    .global sLaderNoiseFuefukiTimerRandam
    sLaderNoiseFuefukiTimerRandam:
        .2byte 0x0008
    .global sLaderNoiseFuefukiSensMax
    sLaderNoiseFuefukiSensMax:
        .float 0.3
    .global sLaderNoiseFuefukiVolumeMin
    sLaderNoiseFuefukiVolumeMin:
        .float 0.25
    .global sLaderNoiseFuefukiVolumeMax
    sLaderNoiseFuefukiVolumeMax:
        .float 0.5

    .section .sbss # 0x80514D80 - 0x80516360
    .global tmpVol$3526
    tmpVol$3526:
        .skip 0x4
    .global init$3527
    init$3527:
        .skip 0x2
    .global sLaderNoiseTimer
    sLaderNoiseTimer:
        .skip 0x2
    .global sLaderNoiseWait
    sLaderNoiseWait:
        .skip 0x4
    .global sLaderNoiseFuefukiSensMin
    sLaderNoiseFuefukiSensMin:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520CE0
    lbl_80520CE0:
        .4byte 0x00000000
    .global lbl_80520CE4
    lbl_80520CE4:
        .4byte 0x44180000
    .global lbl_80520CE8
    lbl_80520CE8:
        .4byte 0x40800000
    .global lbl_80520CEC
    lbl_80520CEC:
        .4byte 0x42C80000
    .global lbl_80520CF0
    lbl_80520CF0:
        .4byte 0x43820000
    .global lbl_80520CF4
    lbl_80520CF4:
        .float 1.0
    .global lbl_80520CF8
    lbl_80520CF8:
        .float 0.5
    .global lbl_80520CFC
    lbl_80520CFC:
        .4byte 0x4000A3D7
    .global lbl_80520D00
    lbl_80520D00:
        .4byte 0x40000000
    .global lbl_80520D04
    lbl_80520D04:
        .4byte 0x40200000
    .global lbl_80520D08
    lbl_80520D08:
        .4byte 0x40133333
    .global lbl_80520D0C
    lbl_80520D0C:
        .4byte 0x3FC00000
    .global lbl_80520D10
    lbl_80520D10:
        .float 0.3
    .global lbl_80520D14
    lbl_80520D14:
        .float 0.1
    .global lbl_80520D18
    lbl_80520D18:
        .4byte 0x3F4CCCCD
    .global lbl_80520D1C
    lbl_80520D1C:
        .4byte 0x3F666666
    .global lbl_80520D20
    lbl_80520D20:
        .4byte 0x3F8CCCCD
    .global lbl_80520D24
    lbl_80520D24:
        .4byte 0x3F99999A
    .global lbl_80520D28
    lbl_80520D28:
        .4byte 0x3FA66666
    .global lbl_80520D2C
    lbl_80520D2C:
        .4byte 0x3FB33333
    .global lbl_80520D30
    lbl_80520D30:
        .float 0.7
    .global lbl_80520D34
    lbl_80520D34:
        .4byte 0x3F19999A
    .global lbl_80520D38
    lbl_80520D38:
        .4byte 0x3FCCCCCD
    .global lbl_80520D3C
    lbl_80520D3C:
        .4byte 0x3FD9999A
    .global lbl_80520D40
    lbl_80520D40:
        .4byte 0x3FE66666
    .global lbl_80520D44
    lbl_80520D44:
        .4byte 0x3ECCCCCD
    .global lbl_80520D48
    lbl_80520D48:
        .4byte 0x40A00000
    .global lbl_80520D4C
    lbl_80520D4C:
        .4byte 0x437A0000
    .global lbl_80520D50
    lbl_80520D50:
        .4byte 0x42FE0000
    .global lbl_80520D54
    lbl_80520D54:
        .4byte 0x3E4CCCCD
    .global lbl_80520D58
    lbl_80520D58:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace PSM {

/*
 * --INFO--
 * Address:	8046D144
 * Size:	00021C
 */
PSSystem::ClusterSe::PartInitArg ClusterFactory::partInit(u8 unknownID)
{
	PSSystem::ClusterSe::PartInitArg arg;
	switch (_0C) {
	case 0: {
		switch (unknownID) {
		case 0:
			arg._00[0]   = 0x19;
			arg._00[2]   = 0x19;
			arg._00[3]   = 0x16;
			arg._00[1]   = 0x10;
			arg.mSoundID = PSSE_EN_BUTTERFLY_L;
			break;
		case 1:
			arg._00[0]   = 0x16;
			arg._00[2]   = 0x10;
			arg._00[3]   = 0x0e;
			arg._00[1]   = 0x08;
			arg.mSoundID = PSSE_EN_BUTTERFLY_M;
			break;
		case 2:
			arg._00[0]   = 0x0e;
			arg._00[2]   = 0x08;
			arg._00[3]   = 0x05;
			arg._00[1]   = 0x00;
			arg.mSoundID = PSSE_EN_BUTTERFLY_S;
			break;
		default:
			P2ASSERTLINE(62, false);
		}
		break;
	}
	case 1: {
		switch (unknownID) {
		case 0:
			arg._00[0] = 0x64;
			arg._00[3] = 0x46;
			arg._00[1] = 0x3c;
			break;
		case 1:
			arg._00[0] = 0x46;
			arg._00[2] = 0x3c;
			arg._00[3] = 0x28;
			arg._00[1] = 0x1e;
			break;
		case 2:
			arg._00[0] = 0x28;
			arg._00[2] = 0x1e;
			arg._00[3] = 0x0a;
			arg._00[1] = 0x00;
			break;
		default:
			P2ASSERTLINE(95, false);
		}
		break;
	}
	default:
		P2ASSERTLINE(100, false);
		break;
	}
	// _04->mPart->mInitArg = arg;
	// for (int i = 0; i < 4; i++) {
	// 	_04->_00[i] = arg._00[i];
	// }
	// _04->mPart->mInitArg.mSoundID = arg.mSoundID;
	return arg;
}

/*
 * --INFO--
 * Address:	8046D360
 * Size:	000074
 */
WorldMapRocket::WorldMapRocket()
    : JADHioNode(nullptr)
{
	mState = PSMRocket_0;
	_08    = 0.0f;
	_0C    = 608.0f;
	_10    = 4.0f;
	_14    = 100.0f;
	_18    = 260.0f;
	_1C    = 4.0f;
}

/*
 * --INFO--
 * Address:	8046D3D4
 * Size:	000060
 */
WorldMapRocket::~WorldMapRocket() { }

/*
 * --INFO--
 * Address:	8046D434
 * Size:	000490
 */
JAISe* WorldMapRocket::startRocketSE(float transform1, float transform2)
{
	JAISe* se = PSSystem::spSysIF->playSystemSe(PSSE_SY_ROCKET_SMOKE, 0);
	u8 r6;

	static f32 tmpVol;
	static bool init;

	if (se) {
		f32 transform = JALCalc::linearTransform(transform1, _08, _0C, 0.0f, 1.0f, false);
		if (transform < 0.5f) {
			JALCalc::getParamByExp(transform, 0.0f, 0.5f, _10, 0.0f, 0.5f, JALCalc::CS_1);
		} else {
			JALCalc::getParamByExp(transform, 0.5f, 1.0f, _10, 0.5f, 1.0f, JALCalc::CS_0);
		}
		transform = JALCalc::linearTransform(transform1, _14, _18, 0.0f, 1.0f, false);
		if (transform < 0.5f) {
			JALCalc::getParamByExp(transform, 0.0f, 0.5f, _1C, 0.0f, 0.5f, JALCalc::CS_1);
		} else {
			JALCalc::getParamByExp(transform, 0.5f, 1.0f, _1C, 0.5f, 1.0f, JALCalc::CS_0);
		}

		if (mState != PSMRocket_3) {
			se->setPan(transform1, 0, 0);
			se->setDolby(transform2, 0, 0);
		}

		switch (mState) {
		case PSMRocket_1:
			se->setVolume(1.0f, 2, 0);
			se->setPitch(2.0f, 2, 0);
			if (se->getPitch(0) >= 2.0f) {
				mState = PSMRocket_4;
			}
			break;
		case PSMRocket_2:
			se->setVolume(1.0f, 2, 0);
			se->setPitch(2.0f, 2, 0);
			if (se->getPitch(0) >= 2.0f) {
				mState = PSMRocket_4;
			}
			break;
		case PSMRocket_3:
			se->setVolume(1.0f, 5, 0);
			se->setPitch(2.0f, 5, 0);
			if (se->getPitch(0) >= 3.0f) {
				mState = PSMRocket_4;
			}
			break;
		case PSMRocket_4:
			se->setVolume(0.5f, 30, 0);
			se->setPitch(1.0f, 30, 0);
			break;
		case PSMRocket_5:
			se->setVolume(0.5f, 10, 0);
			se->setPitch(1.0f, 10, 0);
			break;
		case PSMRocket_6:
			if (!init) {
				tmpVol = se->getVolume(0);
				init   = true;
			}
			se->setVolume(0.1f, 2, 0);
			break;
		case PSMRocket_7:
			se->setVolume(tmpVol, 5, 0);
			if (se->getVolume(0) == tmpVol) {
				if (tmpVol < 0.5f) {
					mState = PSMRocket_5;
				} else {
					mState = PSMRocket_4;
				}
			}
			break;
		case PSMRocket_0:
			se->setVolume(0.0f, 0, 0);
			se->setPitch(0.0f, 0, 0);
			break;
		}
	}
	return se;
}

/*
 * --INFO--
 * Address:	8046D8C4
 * Size:	000008
 */
void WorldMapRocket::stateChange(PSM::WorldMapRocket::rocketState a1)
{
	// Generated from stw r4, 0x4(r3)
	mState = a1;
}

/*
 * --INFO--
 * Address:	8046D8CC
 * Size:	000004
 */
PikiHumming::PikiHumming() { }

/*
 * --INFO--
 * Address:	8046D8D0
 * Size:	0000FC
 */
PikiHummingMgr::PikiHummingMgr()
{
	_00                   = 10;
	_04                   = 0;
	_08                   = 0;
	mHummingArray         = new PikiHumming[3];
	PikiHumming* shouting = &mHummingArray[0];
	shouting->_14         = 0;
	shouting->mSoundID    = PSSE_PK_SHOUT01;
	shouting->_08         = 72;
	shouting->_0C         = 4;
	shouting->_00         = 0;
	shouting->_18         = 0;
	shouting->_10         = -1;

	PikiHumming* ainoutaRU = &mHummingArray[1];
	ainoutaRU->_14         = 1;
	ainoutaRU->mSoundID    = PSSE_PK_AINOUTA_RU;
	ainoutaRU->_08         = 300;
	ainoutaRU->_0C         = 2;
	ainoutaRU->_00         = 0;
	ainoutaRU->_18         = 0;
	ainoutaRU->_10         = -1;

	PikiHumming* humming = &mHummingArray[2];
	humming->_14         = 2;
	humming->mSoundID    = PSSE_PK_HUMING01;
	humming->_08         = 160;
	humming->_0C         = 3;
	humming->_00         = 0;
	humming->_18         = 0;
	humming->_10         = -1;
}

/*
 * --INFO--
 * Address:	8046D9CC
 * Size:	000624
 */
void PikiHummingMgr::exec()
{
	// Iterator<Game::Navi> iNavi(Game::naviMgr);
	// CI_LOOP(iNavi)
	// {
	// 	Game::Navi* navi = *iNavi;
	// 	Game::naviMgr->getActiveNavi();
	// }
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	li       r4, 0
	lis      r5, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x44(r1)
	addi     r5, r5, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r4, 0
	lis      r6, lbl_8049DA08@ha
	stmw     r25, 0x24(r1)
	mr       r26, r3
	addi     r30, r6, lbl_8049DA08@l
	li       r29, 0
	lwz      r0, naviMgr__4Game@sda21(r13)
	stw      r5, 8(r1)
	stw      r4, 0x14(r1)
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	bne      lbl_8046DA30
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8046DBB0

lbl_8046DA30:
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8046DAA0

lbl_8046DA4C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8046DBB0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8046DAA0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046DA4C
	b        lbl_8046DBB0

lbl_8046DAC0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x21c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046DAF4
	li       r29, 1
	b        lbl_8046DBD0

lbl_8046DAF4:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8046DB20
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8046DBB0

lbl_8046DB20:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8046DB94

lbl_8046DB40:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8046DBB0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8046DB94:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046DB40

lbl_8046DBB0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8046DAC0

lbl_8046DBD0:
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r28, 0
	bl       getActiveNavi__Q24Game7NaviMgrFv
	or.      r31, r3, r3
	beq      lbl_8046DDD4
	lhz      r27, 0x2dc(r31)
	li       r0, 0
	cmpwi    r27, 0
	blt      lbl_8046DC00
	cmpwi    r27, 1
	bgt      lbl_8046DC00
	li       r0, 1

lbl_8046DC00:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046DC1C
	addi     r3, r30, 0
	addi     r5, r30, 0x14
	li       r4, 0x18a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DC1C:
	cmpwi    r27, 0
	li       r0, 0
	blt      lbl_8046DC34
	cmpwi    r27, 7
	bge      lbl_8046DC34
	li       r0, 1

lbl_8046DC34:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046DC50
	addi     r3, r30, 0x20
	addi     r5, r30, 0x14
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DC50:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	slwi     r5, r27, 5
	addi     r0, r3, formationPikis__Q24Game8GameStat@l
	li       r4, 1
	add      r25, r0, r5
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x14
	bne      lbl_8046DDD4
	cmpwi    r27, 0
	li       r0, 0
	blt      lbl_8046DC98
	cmpwi    r27, 7
	bge      lbl_8046DC98
	li       r0, 1

lbl_8046DC98:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046DCB4
	addi     r3, r30, 0x20
	addi     r5, r30, 0x14
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DCB4:
	mr       r3, r25
	li       r4, 0
	lwz      r12, 0(r25)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x14
	bne      lbl_8046DDD4
	cmpwi    r27, 0
	li       r0, 0
	blt      lbl_8046DCEC
	cmpwi    r27, 7
	bge      lbl_8046DCEC
	li       r0, 1

lbl_8046DCEC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046DD08
	addi     r3, r30, 0x20
	addi     r5, r30, 0x14
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DD08:
	mr       r3, r25
	li       r4, 2
	lwz      r12, 0(r25)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x14
	bne      lbl_8046DDD4
	cmpwi    r27, 0
	li       r0, 0
	blt      lbl_8046DD40
	cmpwi    r27, 7
	bge      lbl_8046DD40
	li       r0, 1

lbl_8046DD40:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046DD5C
	addi     r3, r30, 0x20
	addi     r5, r30, 0x14
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DD5C:
	mr       r3, r25
	li       r4, 3
	lwz      r12, 0(r25)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x14
	bne      lbl_8046DDD4
	cmpwi    r27, 0
	li       r0, 0
	blt      lbl_8046DD94
	cmpwi    r27, 7
	bge      lbl_8046DD94
	li       r0, 1

lbl_8046DD94:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046DDB0
	addi     r3, r30, 0x20
	addi     r5, r30, 0x14
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DDB0:
	mr       r3, r25
	li       r4, 4
	lwz      r12, 0(r25)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x14
	bne      lbl_8046DDD4
	li       r28, 1

lbl_8046DDD4:
	cmpwi    r28, 1
	beq      lbl_8046DEC0
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046DDFC
	addi     r3, r30, 0x2c
	addi     r5, r30, 0x14
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DDFC:
	lwz      r27, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r27, 0
	bne      lbl_8046DE1C
	addi     r3, r30, 0x2c
	addi     r5, r30, 0x14
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DE1C:
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	bne      lbl_8046DE3C
	addi     r3, r30, 0x38
	addi     r5, r30, 0x14
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DE3C:
	lwz      r3, 4(r27)
	lwz      r27, 4(r3)
	cmplwi   r27, 0
	bne      lbl_8046DE60
	addi     r3, r30, 0x38
	addi     r5, r30, 0x44
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DE60:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046DE80
	b        lbl_8046DE84

lbl_8046DE80:
	li       r27, 0

lbl_8046DE84:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046DEC0
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x3c
	ble      lbl_8046DEC0
	li       r28, 2

lbl_8046DEC0:
	cmplwi   r31, 0
	beq      lbl_8046DEF4
	lwz      r3, 0x254(r31)
	cmplwi   r3, 0
	beq      lbl_8046DEF4
	lwz      r0, 0xbc(r3)
	cmpwi    r0, 0
	ble      lbl_8046DEF4
	clrlwi.  r0, r29, 0x18
	beq      lbl_8046DEF4
	li       r0, 1
	stb      r0, 0x10(r26)
	b        lbl_8046DEFC

lbl_8046DEF4:
	li       r0, 0
	stb      r0, 0x10(r26)

lbl_8046DEFC:
	stw      r28, 4(r26)
	li       r3, 0
	b        lbl_8046DFC8

lbl_8046DF08:
	clrlwi   r0, r3, 0x18
	lwz      r4, 0xc(r26)
	mulli    r0, r0, 0x1c
	lwz      r6, 4(r26)
	lbz      r8, 0x10(r26)
	li       r5, 1
	add      r7, r4, r0
	lwz      r0, 0x14(r7)
	subf     r0, r0, r6
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_8046DF40
	cmplwi   r8, 0
	bne      lbl_8046DF58

lbl_8046DF40:
	lwz      r0, 0x10(r7)
	cmpwi    r0, -1
	bne      lbl_8046DF54
	li       r0, 0
	stw      r0, 0(r7)

lbl_8046DF54:
	li       r5, 0

lbl_8046DF58:
	li       r6, 0
	clrlwi.  r0, r5, 0x18
	stb      r6, 0x18(r7)
	beq      lbl_8046DF98
	lwz      r5, 0(r7)
	lwz      r4, 8(r7)
	divwu    r0, r5, r4
	mullw    r0, r0, r4
	subf.    r0, r0, r5
	bne      lbl_8046DF8C
	li       r0, 1
	stb      r0, 0x18(r7)
	stw      r6, 0(r7)

lbl_8046DF8C:
	lwz      r4, 0(r7)
	addi     r0, r4, 1
	stw      r0, 0(r7)

lbl_8046DF98:
	lwz      r4, 0x10(r7)
	cmpwi    r4, 0
	blt      lbl_8046DFC4
	addi     r0, r4, 1
	stw      r0, 0x10(r7)
	lwz      r4, 0x10(r7)
	lwz      r0, 8(r7)
	cmpw     r4, r0
	blt      lbl_8046DFC4
	li       r0, -1
	stw      r0, 0x10(r7)

lbl_8046DFC4:
	addi     r3, r3, 1

lbl_8046DFC8:
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	blt      lbl_8046DF08
	li       r0, 0
	stw      r0, 8(r26)
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8046DFF0
 * Size:	0000C4
 */
void PikiHummingMgr::play(PSM::Piki* piki)
{
	// if (_10 != 0 && _00 <= piki->_74 && ++_08 < 4 && mHummingArray[_04]._18 != 0) {
	// 	u32 v1 = static_cast<Game::Piki*>(piki->mGameObj)->getFormationSlotID();
	// 	u32 v2 = mHummingArray[_04]._0C;
	// }
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	lbz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_8046E09C
	lwz      r4, 0x74(r31)
	lwz      r0, 0(r3)
	cmplw    r4, r0
	blt      lbl_8046E09C
	lwz      r4, 8(r3)
	addi     r0, r4, 1
	stw      r0, 8(r3)
	lwz      r0, 8(r3)
	cmpwi    r0, 4
	bge      lbl_8046E09C
	lwz      r0, 4(r3)
	lwz      r3, 0xc(r3)
	mulli    r0, r0, 0x1c
	add      r30, r3, r0
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_8046E09C
	lwz      r3, 0x2c(r31)
	bl       getFormationSlotID__Q24Game4PikiFv
	lwz      r5, 0xc(r30)
	cmplwi   r31, 0
	lwz      r6, 4(r30)
	mr       r4, r31
	divwu    r0, r3, r5
	mullw    r0, r0, r5
	subf     r0, r0, r3
	add      r5, r6, r0
	beq      lbl_8046E088
	addi     r4, r31, 0x30

lbl_8046E088:
	mr       r3, r31
	li       r6, 0
	bl       startPikiSound__Q23PSM4PikiFPQ27JAInter6ObjectUlUl
	li       r0, 0
	stw      r0, 0x10(r30)

lbl_8046E09C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace PSM

/*
 * --INFO--
 * Address:	8046E0B4
 * Size:	00015C
 */
PSM::SeSound* PSStartSoundVec(u32 soundID, Vec* vec)
{

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	if (!static_cast<PSM::SceneBase*>(mgr->getEndScene())->getSeSceneGate(nullptr, soundID)) {
		return nullptr;
	}
	u8 playerNo = PSM::ObjCalcBase::getInstance()->getPlayerNo(*vec);
	P2ASSERTLINE(522, vec != nullptr);

	JAISound* soundHandle;
	PSSystem::spSysIF->startSoundVecReturnHandleT(&soundHandle, soundID, vec, 0, 0, playerNo);
	return static_cast<PSM::SeSound*>(soundHandle);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8049DA08@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_8049DA08@l
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046E100
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E100:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8046E120
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E120:
	lwz      r0, 8(r30)
	cmplwi   r0, 0
	bne      lbl_8046E140
	addi     r3, r31, 0x38
	addi     r5, r31, 0x14
	li       r4, 0xa1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E140:
	lwz      r3, 8(r30)
	mr       r5, r28
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8046E16C
	li       r3, 0
	b        lbl_8046E1F0

lbl_8046E16C:
	lwz      r0,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) cmplwi
r0, 0 bne      lbl_8046E18C addi     r3, r31, 0x68 addi     r5, r31, 0x14 li r4,
0x89 crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E18C:
	lwz      r3,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) mr r4,
r29 lwz      r12, 0(r3) lwz      r12, 0x10(r12) mtctr    r12 bctrl cmplwi   r29,
0 mr       r30, r3 bne      lbl_8046E1C4 addi     r3, r31, 0 addi     r5, r31,
0x14 li       r4, 0x20a crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E1C4:
	li       r0, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	stw      r0, 8(r1)
	mr       r5, r28
	mr       r6, r29
	mr       r9, r30
	addi     r4, r1, 8
	li       r7, 0
	li       r8, 0
	bl
"startSoundVecReturnHandleT<8JAISound>__8JAIBasicFPP8JAISoundUlP3VecUlUlUc" lwz
r3, 8(r1)

lbl_8046E1F0:
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
 * Address:	8046E210
 * Size:	00006C
 */
PSM::Cluster* newPSCluster_SijimiChou(Game::Creature* creature)
{
	PSM::ClusterFactory factory;
	return new PSM::Cluster(creature, factory);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r4, 3
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	bl       __ct__Q38PSSystem9ClusterSe7FactoryFUc
	lis      r3, __vt__Q23PSM14ClusterFactory@ha
	li       r0, 0
	addi     r4, r3, __vt__Q23PSM14ClusterFactory@l
	stw      r0, 0x10(r1)
	li       r3, 0x74
	stw      r4, 8(r1)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8046E264
	mr       r4, r31
	addi     r5, r1, 8
	bl __ct__Q23PSM7ClusterFPQ24Game8CreatureRQ38PSSystem9ClusterSe7Factory mr
r0, r3

lbl_8046E264:
	mr       r3, r0
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8046E27C
 * Size:	000198
 */
JAISound* PSStartEnemyGhostSE(Game::EnemyBase* enemy, float)
{
	JAISound* ghost = enemy->getJAIObject()->startSound(PSSE_EN_ENEMY_GHOST, 0);
	if (ghost) {
		f32 volume = 0.0f;
		f32 pitch  = 0.0f;
		switch (enemy->getEnemyTypeID()) {
		case Game::EnemyTypeID::EnemyID_KingChappy:
			volume = 1.0f;
			pitch  = 0.8f;
			break;
		case Game::EnemyTypeID::EnemyID_FireChappy:
		case Game::EnemyTypeID::EnemyID_KumaChappy:
		case Game::EnemyTypeID::EnemyID_OoPanModoki:
			volume = 1.0f;
			pitch  = 0.9f;
			break;
		case Game::EnemyTypeID::EnemyID_Chappy:
		case Game::EnemyTypeID::EnemyID_BlueChappy:
		case Game::EnemyTypeID::EnemyID_YellowChappy:
			volume = 1.0f;
			pitch  = 1.0f;
			break;
		case Game::EnemyTypeID::EnemyID_MiniHoudai:
			volume = 1.0f;
			pitch  = 1.1f;
			break;
		case Game::EnemyTypeID::EnemyID_SnakeCrow:
		case Game::EnemyTypeID::EnemyID_SnakeWhole:
		case Game::EnemyTypeID::EnemyID_Kabuto:
		case Game::EnemyTypeID::EnemyID_Hana:
			volume = 1.0f;
			pitch  = 1.2f;
			break;
		case Game::EnemyTypeID::EnemyID_Armor:
		case Game::EnemyTypeID::EnemyID_Catfish:
		case Game::EnemyTypeID::EnemyID_Miulin:
		case Game::EnemyTypeID::EnemyID_BombSarai:
			volume = 0.9f;
			pitch  = 1.3f;
			break;
		case Game::EnemyTypeID::EnemyID_Frog:
		case Game::EnemyTypeID::EnemyID_MaroFrog:
		case Game::EnemyTypeID::EnemyID_Tank:
		case Game::EnemyTypeID::EnemyID_Wtank:
			volume = 0.8f;
			pitch  = 1.4f;
			break;
		case Game::EnemyTypeID::EnemyID_Sarai:
		case Game::EnemyTypeID::EnemyID_ElecBug:
		case Game::EnemyTypeID::EnemyID_Demon:
		case Game::EnemyTypeID::EnemyID_PanModoki:
		case Game::EnemyTypeID::EnemyID_Fuefuki:
		case Game::EnemyTypeID::EnemyID_Jigumo:
		case Game::EnemyTypeID::EnemyID_LeafChappy:
			volume = 0.7f;
			pitch  = 1.5f;
			break;
		case Game::EnemyTypeID::EnemyID_Kochappy:
		case Game::EnemyTypeID::EnemyID_BlueKochappy:
		case Game::EnemyTypeID::EnemyID_YellowKochappy:
		case Game::EnemyTypeID::EnemyID_KumaKochappy:
		case Game::EnemyTypeID::EnemyID_Sokkuri:
			volume = 0.6f;
			pitch  = 1.6f;
			break;
		case Game::EnemyTypeID::EnemyID_Tadpole:
		case Game::EnemyTypeID::EnemyID_Baby:
			volume = 0.6f;
			pitch  = 1.7f;
			break;

		case Game::EnemyTypeID::EnemyID_UjiA:
		case Game::EnemyTypeID::EnemyID_UjiB:
		case Game::EnemyTypeID::EnemyID_Tobi:
		case Game::EnemyTypeID::EnemyID_TamagoMushi:
			volume = 0.5f;
			pitch  = 2.0f;
			break;
		case Game::EnemyTypeID::EnemyID_FireOtakara:
		case Game::EnemyTypeID::EnemyID_WaterOtakara:
		case Game::EnemyTypeID::EnemyID_GasOtakara:
		case Game::EnemyTypeID::EnemyID_ElecOtakara:
			volume = 0.6f;
			pitch  = 1.8f;
			break;
		case Game::EnemyTypeID::EnemyID_ShijimiChou:
			volume = 0.4f;
			pitch  = 2.3f;
			break;
		}
		ghost->setVolume(volume, 0, 0);
		ghost->setPitch(pitch, 0, 0);
	}
	return ghost;
}

/*
 * --INFO--
 * Address:	8046E414
 * Size:	00027C
 */
void PSStartEnemyFatalHitSE(Game::EnemyBase* enemy, float p2)
{
	PSM::SeSound* sound = PSStartSoundVec(PSSE_EN_ENEMY_FATAL_HIT, reinterpret_cast<Vec*>(enemy->getSound_PosPtr()));
	if (sound != nullptr) {
		Sys::Sphere sphere;
		enemy->getBoundingSphere(sphere);
		float v1 = JALCalc::getParamByExp(sphere.mRadius, 5.0f, 250.0f, 5.0f, 0.5f, 1.5f, JALCalc::CS_0);
		if (v1 > 1.0f) {
			v1 = 1.0f;
		}
		if (v1 < 0.5f) {
			v1 = 0.5f;
		}
		// v1       = MIN(1.0f, v1);
		// v1       = MAX(v1, 0.5f);
		float v2 = JALCalc::getParamByExp(sphere.mRadius, 250.0f, 5.0f, 5.0f, 0.7f, 1.7f, JALCalc::CS_1);
		if (v2 > 1.7f) {
			v2 = 1.7f;
		}
		if (v2 < 0.7f) {
			v2 = 0.7f;
		}
		// v2       = MIN(1.7f, v2);
		// v2       = MAX(v2, 0.7f);
		sound->setVolume(v1, 0, 0);
		sound->setPitch(v2, 0, 0);
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	lwz      r12, 0(r3)
	lis      r4, lbl_8049DA08@ha
	mr       r28, r3
	lwz      r12, 0x100(r12)
	addi     r31, r4, lbl_8049DA08@l
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	mr       r29, r3
	cmplwi   r0, 0
	bne      lbl_8046E480
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E480:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8046E4A0
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E4A0:
	lwz      r0, 8(r30)
	cmplwi   r0, 0
	bne      lbl_8046E4C0
	addi     r3, r31, 0x38
	addi     r5, r31, 0x14
	li       r4, 0xa1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E4C0:
	lwz      r3, 8(r30)
	li       r4, 0
	li       r5, 0x580b
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8046E4EC
	li       r31, 0
	b        lbl_8046E570

lbl_8046E4EC:
	lwz      r0,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) cmplwi
r0, 0 bne      lbl_8046E50C addi     r3, r31, 0x68 addi     r5, r31, 0x14 li r4,
0x89 crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E50C:
	lwz      r3,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) mr r4,
r29 lwz      r12, 0(r3) lwz      r12, 0x10(r12) mtctr    r12 bctrl cmplwi   r29,
0 mr       r30, r3 bne      lbl_8046E544 addi     r3, r31, 0 addi     r5, r31,
0x14 li       r4, 0x20a crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E544:
	li       r0, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	stw      r0, 8(r1)
	mr       r6, r29
	mr       r9, r30
	addi     r4, r1, 8
	li       r5, 0x580b
	li       r7, 0
	li       r8, 0
	bl
"startSoundVecReturnHandleT<8JAISound>__8JAIBasicFPP8JAISoundUlP3VecUlUlUc" lwz
r31, 8(r1)

lbl_8046E570:
	cmplwi   r31, 0
	beq      lbl_8046E65C
	mr       r3, r28
	addi     r4, r1, 0xc
	lwz      r12, 0(r28)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x18(r1)
	li       r3, 0
	lfs      f2, lbl_80520D48@sda21(r2)
	fmr      f1, f31
	lfs      f3, lbl_80520D4C@sda21(r2)
	fmr      f4, f2
	lfs      f5, lbl_80520CF8@sda21(r2)
	lfs      f6, lbl_80520D0C@sda21(r2)
	bl       getParamByExp__7JALCalcFffffffQ27JALCalc9CurveSign
	fmr      f30, f1
	lfs      f0, lbl_80520CF4@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8046E5C8
	fmr      f30, f0

lbl_8046E5C8:
	lfs      f0, lbl_80520CF8@sda21(r2)
	fcmpo    cr0, f30, f0
	bge      lbl_8046E5D8
	fmr      f30, f0

lbl_8046E5D8:
	lfs      f3, lbl_80520D48@sda21(r2)
	fmr      f1, f31
	lfs      f2, lbl_80520D4C@sda21(r2)
	li       r3, 1
	fmr      f4, f3
	lfs      f5, lbl_80520D30@sda21(r2)
	lfs      f6, lbl_80520D3C@sda21(r2)
	bl       getParamByExp__7JALCalcFffffffQ27JALCalc9CurveSign
	fmr      f31, f1
	lfs      f0, lbl_80520D3C@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8046E60C
	fmr      f31, f0

lbl_8046E60C:
	lfs      f0, lbl_80520D30@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8046E61C
	fmr      f31, f0

lbl_8046E61C:
	mr       r3, r31
	fmr      f1, f30
	lwz      r12, 0x10(r31)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	fmr      f1, f31
	lwz      r12, 0x10(r31)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8046E65C:
	mr       r3, r31
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r0, 0x54(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8046E690
 * Size:	0001B0
 */
JAISound* PSStartEnemyDownSmokeSE(Game::EnemyBase* enemy, float p2)
{
	if (p2 == 0 || p2 < 0.0f) {
		return nullptr;
	}
	JAISound* sound;
	if (p2 < 0.3f) {
		sound = enemy->getJAIObject()->startSound(PSSE_EV_ITEM_LAND_SOIL_S, 0);
		if (sound != nullptr) {
			sound->setPitch(JALCalc::linearTransform(p2, 0.0f, 0.3f, 1.0f, 0.8f, false), 0, 0);
		}
	} else if (p2 < 0.7f) {
		sound = enemy->getJAIObject()->startSound(PSSE_EV_ITEM_LAND_SOIL_M, 0);
		if (sound != nullptr) {
			sound->setPitch(JALCalc::linearTransform(p2, 0.3f, 0.7f, 1.5f, 0.6f, false), 0, 0);
		}
	} else {
		sound = enemy->getJAIObject()->startSound(PSSE_EV_ITEM_LAND_SOIL_L, 0);
		if (sound != nullptr) {
			sound->setPitch(JALCalc::linearTransform(p2, 0.7f, 2.0f, 1.5f, 0.8f, false), 0, 0);
		}
	}
	return sound;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	fmr      f31, f1
	lfs      f0, lbl_80520CE0@sda21(r2)
	fcmpu    cr0, f0, f31
	beq      lbl_8046E6C0
	fcmpo    cr0, f31, f0
	bge      lbl_8046E6C8

lbl_8046E6C0:
	li       r3, 0
	b        lbl_8046E824

lbl_8046E6C8:
	lfs      f0, lbl_80520D10@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8046E740
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x3808
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_8046E820
	fmr      f1, f31
	lfs      f2, lbl_80520CE0@sda21(r2)
	lfs      f3, lbl_80520D10@sda21(r2)
	li       r3, 0
	lfs      f4, lbl_80520CF4@sda21(r2)
	lfs      f5, lbl_80520D18@sda21(r2)
	bl       linearTransform__7JALCalcFfffffb
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0x10(r31)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046E820

lbl_8046E740:
	lfs      f0, lbl_80520D30@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8046E7B8
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x3809
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_8046E820
	fmr      f1, f31
	lfs      f2, lbl_80520D10@sda21(r2)
	lfs      f3, lbl_80520D30@sda21(r2)
	li       r3, 0
	lfs      f4, lbl_80520D0C@sda21(r2)
	lfs      f5, lbl_80520D34@sda21(r2)
	bl       linearTransform__7JALCalcFfffffb
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0x10(r31)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046E820

lbl_8046E7B8:
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x380a
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_8046E820
	fmr      f1, f31
	lfs      f2, lbl_80520D30@sda21(r2)
	lfs      f3, lbl_80520D00@sda21(r2)
	li       r3, 0
	lfs      f4, lbl_80520D0C@sda21(r2)
	lfs      f5, lbl_80520D18@sda21(r2)
	bl       linearTransform__7JALCalcFfffffb
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0x10(r31)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8046E820:
	mr       r3, r31

lbl_8046E824:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8046E840
 * Size:	000200
 */
JAISound* PSStartEnemyDownWatSE(Game::EnemyBase* enemy, float p2)
{
	JAISound* sound;
	if (p2 == 0 || p2 < 0.0f) {
		return nullptr;
	}
	if (p2 < 0.3f) {
		JAIAnimeSound* soundObj = enemy->mSoundObj;
		sound                   = PSSystem::getSeMgrInstance()->mSetSeList[6]->startSound(soundObj, PSSE_EV_ITEM_LAND_WATER1_S, 0);
		if (sound != nullptr) {
			sound->setPitch(JALCalc::linearTransform(p2, 0.0f, 0.3f, 1.0f, 0.8f, false), 0, 0);
		}
	} else if (p2 < 0.7f) {
		JAIAnimeSound* soundObj = enemy->mSoundObj;
		sound                   = PSSystem::getSeMgrInstance()->mSetSeList[6]->startSound(soundObj, PSSE_EV_ITEM_LAND_WATER1_M, 0);
		if (sound != nullptr) {
			sound->setPitch(JALCalc::linearTransform(p2, 0.3f, 0.7f, 1.5f, 0.6f, false), 0, 0);
		}
	} else {
		sound = enemy->getJAIObject()->startSound(PSSE_EV_ITEM_LAND_WATER1_L, 0);
		if (sound != nullptr) {
			sound->setPitch(JALCalc::linearTransform(p2, 0.7f, 1.5f, 1.8f, 0.8f, false), 0, 0);
		}
	}
	return sound;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	fmr      f31, f1
	lfs      f0, lbl_80520CE0@sda21(r2)
	fcmpu    cr0, f0, f31
	beq      lbl_8046E870
	fcmpo    cr0, f31, f0
	bge      lbl_8046E878

lbl_8046E870:
	li       r3, 0
	b        lbl_8046EA24

lbl_8046E878:
	lfs      f0, lbl_80520D10@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8046E918
	lwz      r31, 0x28c(r3)
	cmplwi   r31, 0
	beq      lbl_8046E894
	addi     r31, r31, 0x30

lbl_8046E894:
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi   r0,
0 bne      lbl_8046E8BC lis      r3, lbl_8049DA34@ha lis      r5,
lbl_8049DA1C@ha addi     r3, r3, lbl_8049DA34@l li       r4, 0x237 addi     r5,
r5, lbl_8049DA1C@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E8BC:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) mr       r4,
r31 li       r5, 0x380b li       r6, 0 lwz      r3, 0x1c(r3) bl
startSound__Q26PSGame5SetSeFPQ27JAInter6ObjectUlUl or.      r31, r3, r3 beq
lbl_8046EA20 fmr      f1, f31 lfs      f2, lbl_80520CE0@sda21(r2) lfs      f3,
lbl_80520D10@sda21(r2) li       r3, 0 lfs      f4, lbl_80520CF4@sda21(r2) lfs
f5, lbl_80520D18@sda21(r2) bl       linearTransform__7JALCalcFfffffb mr r3, r31
	li       r4, 0
	lwz      r12, 0x10(r31)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046EA20

lbl_8046E918:
	lfs      f0, lbl_80520D30@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8046E9B8
	lwz      r31, 0x28c(r3)
	cmplwi   r31, 0
	beq      lbl_8046E934
	addi     r31, r31, 0x30

lbl_8046E934:
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi   r0,
0 bne      lbl_8046E95C lis      r3, lbl_8049DA34@ha lis      r5,
lbl_8049DA1C@ha addi     r3, r3, lbl_8049DA34@l li       r4, 0x237 addi     r5,
r5, lbl_8049DA1C@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E95C:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) mr       r4,
r31 li       r5, 0x380c li       r6, 0 lwz      r3, 0x1c(r3) bl
startSound__Q26PSGame5SetSeFPQ27JAInter6ObjectUlUl or.      r31, r3, r3 beq
lbl_8046EA20 fmr      f1, f31 lfs      f2, lbl_80520D10@sda21(r2) lfs      f3,
lbl_80520D30@sda21(r2) li       r3, 0 lfs      f4, lbl_80520D0C@sda21(r2) lfs
f5, lbl_80520D34@sda21(r2) bl       linearTransform__7JALCalcFfffffb mr r3, r31
	li       r4, 0
	lwz      r12, 0x10(r31)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046EA20

lbl_8046E9B8:
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x380d
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_8046EA20
	fmr      f1, f31
	lfs      f2, lbl_80520D30@sda21(r2)
	lfs      f3, lbl_80520D0C@sda21(r2)
	li       r3, 0
	lfs      f4, lbl_80520D40@sda21(r2)
	lfs      f5, lbl_80520D18@sda21(r2)
	bl       linearTransform__7JALCalcFfffffb
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0x10(r31)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8046EA20:
	mr       r3, r31

lbl_8046EA24:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8046EA40
 * Size:	000260
 */
void PSStartTreasureLaderSE(float)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	fmr      f30, f1
	lis      r4, lbl_8049DA08@ha
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	addi     r31, r4, lbl_8049DA08@l
	li       r4, 0x1874
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	or.      r29, r3, r3
	beq      lbl_8046EC70
	lfs      f0, sTreasureLader_PitchDistance@sda21(r13)
	fcmpo    cr0, f30, f0
	bge      lbl_8046EABC
	fmr      f1, f30
	lfs      f2, lbl_80520CE0@sda21(r2)
	fmr      f3, f0
	lfs      f4, sTreasureLader_DistanceExp@sda21(r13)
	lfs      f5, sTreasureLader_MinimumVolume@sda21(r13)
	li       r3, 1
	lfs      f6, lbl_80520CF4@sda21(r2)
	bl       getParamByExp__7JALCalcFffffffQ27JALCalc9CurveSign
	b        lbl_8046EAD8

lbl_8046EABC:
	lfs      f3, lbl_80520CF4@sda21(r2)
	fmr      f1, f30
	fmr      f2, f0
	lfs      f5, lbl_80520D30@sda21(r2)
	fmr      f4, f3
	li       r3, 0
	bl       linearTransform__7JALCalcFfffffb

lbl_8046EAD8:
	fmr      f31, f1
	lfs      f2, lbl_80520D10@sda21(r2)
	fmr      f1, f30
	lfs      f3, lbl_80520CF4@sda21(r2)
	lfs      f4, lbl_80520CE0@sda21(r2)
	li       r3, 0
	lfs      f5, lbl_80520D50@sda21(r2)
	bl       linearTransform__7JALCalcFfffffb
	fctiwz   f0, f1
	stfd     f0, 8(r1)
	lwz      r5, 0xc(r1)
	clrlwi   r0, r5, 0x10
	cmplwi   r0, 0x80
	ble      lbl_8046EB14
	li       r5, 0x7f

lbl_8046EB14:
	lwz      r12, 0x10(r29)
	mr       r3, r29
	li       r4, 0xc
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046EB4C
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EB4C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8046EB6C
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EB6C:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8046EB8C
	addi     r3, r31, 0x38
	addi     r5, r31, 0x14
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EB8C:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046EBA4
	li       r31, 0
	b        lbl_8046EBAC

lbl_8046EBA4:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv
	mr       r31, r3

lbl_8046EBAC:
	cmplwi   r31, 0
	beq      lbl_8046EC24
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8046EC24
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_80520CE0@sda21(r2)
	fcmpo    cr0, f1, f2
	ble      lbl_8046EC24
	lfs      f3, lbl_80520CF4@sda21(r2)
	li       r3, 1
	lfs      f5, lbl_80520D54@sda21(r2)
	fmr      f4, f3
	bl       linearTransform__7JALCalcFfffffb
	fmuls    f31, f31, f1

lbl_8046EC24:
	mr       r3, r29
	fmr      f1, f31
	lwz      r12, 0x10(r29)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lfs      f0, sTreasureLader_PitchDistance@sda21(r13)
	fcmpo    cr0, f30, f0
	ble      lbl_8046EC70
	mr       r3, r29
	lfs      f1, sTreasureLader_Pitch@sda21(r13)
	lwz      r12, 0x10(r29)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8046EC70:
	mr       r3, r29
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x44(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8046ECA0
 * Size:	000450
 */
void PSStartTresureLaderNoiseSE(u8, float, float)
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
	clrlwi   r0, r3, 0x18
	lis      r3, lbl_8049DA08@ha
	fmr      f31, f1
	cmpwi    r0, 4
	addi     r31, r3, lbl_8049DA08@l
	li       r30, 0
	beq      lbl_8046EED0
	bge      lbl_8046F0C8
	cmpwi    r0, 3
	bge      lbl_8046ECF0
	b        lbl_8046F0C8
	b        lbl_8046F0C8

lbl_8046ECF0:
	lhz      r3, sLaderNoiseTimer@sda21(r13)
	lha      r0, sLaderNoiseWait@sda21(r13)
	addi     r4, r3, 1
	clrlwi   r3, r4, 0x10
	sth      r4, sLaderNoiseTimer@sda21(r13)
	cmpw     r3, r0
	ble      lbl_8046ED88
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1887
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lha      r4, sLaderNoiseFuefukiTimerRandam@sda21(r13)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	mr       r30, r3
	xoris    r0, r4, 0x8000
	lfd      f1, lbl_80520D58@sda21(r2)
	stw      r0, 0xc(r1)
	lfs      f2, cEqualCSlope__7JALCalc@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f3, cEqualPSlope__7JALCalc@sda21(r2)
	fsubs    f1, f0, f1
	bl       getRandom__7JALCalcFfff
	lha      r4, sLaderNoiseFuefukiTimerCenter@sda21(r13)
	lis      r3, 0x4330
	li       r0, 0
	stw      r3, 0x10(r1)
	xoris    r3, r4, 0x8000
	lfd      f2, lbl_80520D58@sda21(r2)
	stw      r3, 0x14(r1)
	lfd      f0, 0x10(r1)
	sth      r0, sLaderNoiseTimer@sda21(r13)
	fsubs    f0, f0, f2
	fadds    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	sth      r0, sLaderNoiseWait@sda21(r13)

lbl_8046ED88:
	cmplwi   r30, 0
	beq      lbl_8046F0C8
	fmr      f1, f31
	lfs      f2, sLaderNoiseFuefukiSensMin@sda21(r13)
	lfs      f3, sLaderNoiseFuefukiSensMax@sda21(r13)
	li       r3, 1
	lfs      f4, sLaderNoiseVolumeExp@sda21(r13)
	lfs      f5, sLaderNoiseFuefukiVolumeMin@sda21(r13)
	lfs      f6, sLaderNoiseFuefukiVolumeMax@sda21(r13)
	bl       getParamByExp__7JALCalcFffffffQ27JALCalc9CurveSign
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	fmr      f31, f1
	cmplwi   r0, 0
	bne      lbl_8046EDD4
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EDD4:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_8046EDF4
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EDF4:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_8046EE14
	addi     r3, r31, 0x38
	addi     r5, r31, 0x14
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EE14:
	lwz      r3, 4(r29)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046EE2C
	li       r31, 0
	b        lbl_8046EE34

lbl_8046EE2C:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv
	mr       r31, r3

lbl_8046EE34:
	cmplwi   r31, 0
	beq      lbl_8046EEAC
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8046EEAC
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_80520CE0@sda21(r2)
	fcmpo    cr0, f1, f2
	ble      lbl_8046EEAC
	lfs      f3, lbl_80520CF4@sda21(r2)
	li       r3, 1
	lfs      f5, lbl_80520D54@sda21(r2)
	fmr      f4, f3
	bl       linearTransform__7JALCalcFfffffb
	fmuls    f31, f31, f1

lbl_8046EEAC:
	mr       r3, r30
	fmr      f1, f31
	lwz      r12, 0x10(r30)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046F0C8

lbl_8046EED0:
	lhz      r3, sLaderNoiseTimer@sda21(r13)
	lha      r0, sLaderNoiseWait@sda21(r13)
	addi     r4, r3, 1
	clrlwi   r3, r4, 0x10
	sth      r4, sLaderNoiseTimer@sda21(r13)
	cmpw     r3, r0
	ble      lbl_8046EF90
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1887
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lis      r4, 0x2AAAAAAB@ha
	lha      r5, sLaderNoiseFuefukiTimerRandam@sda21(r13)
	addi     r4, r4, 0x2AAAAAAB@l
	lis      r0, 0x4330
	mulhw    r4, r4, r5
	stw      r0, 0x18(r1)
	lfd      f1, lbl_80520D58@sda21(r2)
	mr       r30, r3
	lfs      f2, cEqualCSlope__7JALCalc@sda21(r2)
	lfs      f3, cEqualPSlope__7JALCalc@sda21(r2)
	srwi     r0, r4, 0x1f
	add      r0, r4, r0
	xoris    r0, r0, 0x8000
	stw      r0, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f1, f0, f1
	bl       getRandom__7JALCalcFfff
	lis      r3, 0x2AAAAAAB@ha
	lha      r0, sLaderNoiseFuefukiTimerCenter@sda21(r13)
	addi     r4, r3, 0x2AAAAAAB@l
	lis      r3, 0x4330
	mulhw    r4, r4, r0
	li       r0, 0
	stw      r3, 0x10(r1)
	lfd      f2, lbl_80520D58@sda21(r2)
	sth      r0, sLaderNoiseTimer@sda21(r13)
	srwi     r0, r4, 0x1f
	add      r0, r4, r0
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fadds    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	sth      r0, sLaderNoiseWait@sda21(r13)

lbl_8046EF90:
	cmplwi   r30, 0
	beq      lbl_8046F0C8
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046EFB8
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EFB8:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_8046EFD8
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EFD8:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_8046EFF8
	addi     r3, r31, 0x38
	addi     r5, r31, 0x14
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EFF8:
	lwz      r3, 4(r29)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046F010
	li       r31, 0
	b        lbl_8046F018

lbl_8046F010:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv
	mr       r31, r3

lbl_8046F018:
	cmplwi   r31, 0
	beq      lbl_8046F0A8
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8046F0A8
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_80520CE0@sda21(r2)
	fcmpo    cr0, f1, f2
	ble      lbl_8046F0A8
	lfs      f3, lbl_80520CF4@sda21(r2)
	li       r3, 1
	lfs      f5, lbl_80520D54@sda21(r2)
	fmr      f4, f3
	bl       linearTransform__7JALCalcFfffffb
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0x10(r30)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046F0A8:
	mr       r3, r30
	lfs      f1, lbl_80520D24@sda21(r2)
	lwz      r12, 0x10(r30)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8046F0C8:
	mr       r3, r30
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8046F0F0
 * Size:	0000B0
 */
void PSMGetWorldMapRocket()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049DA08@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049DA08@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046F12C
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046F12C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8046F14C
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046F14C:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8046F16C
	addi     r3, r31, 0x38
	addi     r5, r31, 0x14
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046F16C:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_8046F184
	lwz      r3, 0x28(r3)
	b        lbl_8046F188

lbl_8046F184:
	li       r3, 0

lbl_8046F188:
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
 * Address:	8046F1A0
 * Size:	00007C
 */
unknown PSPlayCaveHoleSound(PSM::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x307c
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_8046F208
	lwz      r0,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>"@sda21(r13) cmplwi
r0, 0 bne      lbl_8046F1F8 lis      r3, lbl_8049DA70@ha lis      r5,
lbl_8049DA1C@ha addi     r3, r3, lbl_8049DA70@l li       r4, 0x89 addi     r5,
r5, lbl_8049DA1C@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046F1F8:
	lwz      r4,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11CreaturePrm>"@sda21(r13) mr r3,
r31 addi     r4, r4, 4 bl
specializePerspCalc__Q23PSM7SeSoundFRCQ36PSGame10SoundTable11SePerspInfo

lbl_8046F208:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace PSM {

/*
 * --INFO--
 * Address:	8046F21C
 * Size:	000030
 */
void ClusterFactory::identifyPart(u8)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	clrlwi   r5, r5, 0x18
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       partInit__Q23PSM14ClusterFactoryFUc
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace PSM

/*
 * --INFO--
 * Address:	8046F24C
 * Size:	000070
 */
template <typename T>
T* startSoundVecReturnHandleT(T** handlePtr, u32 p2, Vec* p3, u32 p4, u32 p5, u8 p6)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r10, 0
	  stw       r0, 0x24(r1)
	  rlwinm.   r0,r5,0,0,1
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r10, 0x8(r1)
	  bne-      .loc_0x2C
	  li        r0, 0x1
	  stw       r0, 0x8(r1)

	.loc_0x2C:
	  mr        r4, r5
	  addi      r5, r1, 0x8
	  bl        -0x459A14
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x0(r31)
	  lwz       r3, 0x8(r1)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
