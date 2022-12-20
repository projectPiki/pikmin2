#include "og/newScreen/Cave.h"
#include "og/newScreen/ogUtil.h"
#include "og/Screen/OtakaraSensor.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/AngleMgr.h"
#include "efx2d/T2DSensor.h"
#include "og/Sound.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "System.h"
#include "utilityU.h"
#include "PSSystem/PSGame.h"
#include "PSM/Scene.h"
#include "PSSystem/PSMainSide_Scene.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F710
    lbl_8048F710:
        .4byte 0x6F674F74
        .4byte 0x616B6172
        .4byte 0x6153656E
        .4byte 0x736F7200
    .global lbl_8048F720
    lbl_8048F720:
        .4byte 0x6F674F74
        .4byte 0x616B6172
        .4byte 0x6153656E
        .4byte 0x736F722E
        .4byte 0x63707000
    .global lbl_8048F734
    lbl_8048F734:
        .4byte 0x4E554C4C
        .4byte 0x2070616E
        .4byte 0x652E0A00
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
        .asciz "P2Assert"
        .skip 3
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
        .4byte 0x50534D61
        .4byte 0x696E5369
        .4byte 0x64655F53
        .4byte 0x63656E65
        .4byte 0x2E680000
        .4byte 0x00000000
    .global lbl_8048F7A0
    lbl_8048F7A0:
        .4byte 0x534D656E
        .4byte 0x75436F6E
        .4byte 0x74207363
        .4byte 0x7265656E
        .4byte 0x00000000
    .global lbl_8048F7B4
    lbl_8048F7B4:
        .4byte 0x7265735F
        .4byte 0x735F6D65
        .4byte 0x6E755F63
        .4byte 0x6F6E7472
        .4byte 0x6F6C6C65
        .4byte 0x722E737A
        .4byte 0x73000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q25efx2d12T2DSensorAct
    __vt__Q25efx2d12T2DSensorAct:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TSimple2FPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple2Fv
        .4byte fade__Q25efx2d8TSimple2Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q25efx2d13T2DSensorComp
    __vt__Q25efx2d13T2DSensorComp:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TSimple2FPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple2Fv
        .4byte fade__Q25efx2d8TSimple2Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q25efx2d12T2DSensorGet
    __vt__Q25efx2d12T2DSensorGet:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TSimple3FPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple3Fv
        .4byte fade__Q25efx2d8TSimple3Fv
        .4byte setGroup__Q25efx2d5TBaseFUc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DF78
    lbl_8051DF78:
        .4byte 0x00000000
    .global lbl_8051DF7C
    lbl_8051DF7C:
        .float 1.0
    .global lbl_8051DF80
    lbl_8051DF80:
        .4byte 0x40400000
    .global lbl_8051DF84
    lbl_8051DF84:
        .float 0.3
    .global lbl_8051DF88
    lbl_8051DF88:
        .4byte 0x3E4CCCCD
    .global lbl_8051DF8C
    lbl_8051DF8C:
        .float 0.25
    .global lbl_8051DF90
    lbl_8051DF90:
        .4byte 0x404CCCCD
    .global lbl_8051DF94
    lbl_8051DF94:
        .4byte 0x41400000
    .global lbl_8051DF98
    lbl_8051DF98:
        .4byte 0x42C80000
    .global lbl_8051DF9C
    lbl_8051DF9C:
        .4byte 0x3ECCCCCD
    .global lbl_8051DFA0
    lbl_8051DFA0:
        .4byte 0x47000000
    .global lbl_8051DFA4
    lbl_8051DFA4:
        .4byte 0x43340000
    .global lbl_8051DFA8
    lbl_8051DFA8:
        .4byte 0x42B40000
        .4byte 0x00000000
    .global lbl_8051DFB0
    lbl_8051DFB0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051DFB8
    lbl_8051DFB8:
        .4byte 0x44610000
    .global lbl_8051DFBC
    lbl_8051DFBC:
        .4byte 0x3F733333
    .global lbl_8051DFC0
    lbl_8051DFC0:
        .float 0.05
    .global lbl_8051DFC4
    lbl_8051DFC4:
        .4byte 0x43A2F983
    .global lbl_8051DFC8
    lbl_8051DFC8:
        .4byte 0x3FC00000
    .global lbl_8051DFCC
    lbl_8051DFCC:
        .4byte 0x40200000
    .global lbl_8051DFD0
    lbl_8051DFD0:
        .4byte 0x40C90FDB
    .global lbl_8051DFD4
    lbl_8051DFD4:
        .4byte 0xC3A2F983
    .global lbl_8051DFD8
    lbl_8051DFD8:
        .float 0.5
    .global lbl_8051DFDC
    lbl_8051DFDC:
        .4byte 0x3FC90FDB
    .global lbl_8051DFE0
    lbl_8051DFE0:
        .float 0.7
    .global lbl_8051DFE4
    lbl_8051DFE4:
        .4byte 0x42200000
    .global lbl_8051DFE8
    lbl_8051DFE8:
        .4byte 0x41200000
    .global lbl_8051DFEC
    lbl_8051DFEC:
        .4byte 0xC2B40000
    .global lbl_8051DFF0
    lbl_8051DFF0:
        .4byte 0x40000000
    .global lbl_8051DFF4
    lbl_8051DFF4:
        .4byte 0x41700000
    .global lbl_8051DFF8
    lbl_8051DFF8:
        .4byte 0xC1F00000
    .global lbl_8051DFFC
    lbl_8051DFFC:
        .4byte 0x41F00000
    .global lbl_8051E000
    lbl_8051E000:
        .float 0.1
    .global lbl_8051E004
    lbl_8051E004:
        .4byte 0x3F4CCCCD
*/

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8032D8E8
 * Size:	000140
 */
OtakaraSensor::OtakaraSensor()
{
	m_pane1             = nullptr;
	m_pane2             = nullptr;
	m_currReactionLevel = 0.0f;
	m_angle             = 0.0f;
	m_currAngle         = 0.0f;
	m_reactTimer        = 0.0f;
	m_panePos           = 0.0f;
	m_doAngleOffset     = false;
	m_scale             = 1.0f;
	m_scaleMgr          = new ScaleMgr;
	m_angleOffsetMod    = 3.0f;
	m_efxActive         = false;
	m_angleMgr          = new AngleMgr;
	m_angleMgr->init(0.0f, 0.3f, 0.0f);
	m_timer             = 0.0f;
	m_angleOffs         = 0.0f;
	m_angleOffsetMod2   = 0.3f;
	m_doStartAppear     = false;
	m_state             = 1;
	m_sensorGetTimer    = 0.0f;
	_4C.x               = 0.2f;
	_4C.y               = 0.25f;
	m_isFuefukid        = false;
	m_randAngle         = 0.0f;
	m_completeEfxOffset = 0.0f;
	m_appearEfxOffset   = 0.0f;
	m_enabled           = false;
	m_notreasures       = true;
	m_doIncNoise        = false;
	m_isInit            = false;
	m_treeColor         = nullptr;
	m_noiseLevel        = 0.0f;
	m_isPoweringOff     = false;
	m_powerOffTimer     = 3.2f;
	m_noiseTimer        = 0.0f;
	m_canIncNoise       = false;
	m_isPoweredOff      = false;
	m_setGrayTimer      = 0.0f;
}

/*
 * --INFO--
 * Address:	8032DA28
 * Size:	0000A8
 */
void OtakaraSensor::init(J2DPane* pane1, J2DPane* pane2, int state)
{
	if (pane1 && pane2) {
		m_pane1             = pane1;
		m_pane2             = pane2;
		m_currReactionLevel = 0.0f;
		m_angle             = 0.0f;
		m_panePos.x         = m_pane2->_0D4.x;
		m_panePos.y         = m_pane2->_0D4.y;
		m_state             = state;
		m_isInit            = false;
		m_treeColor         = og::Screen::capturePictureTreeColor(pane2, 30);
	} else {
		JUT_PANICLINE(237, "NULL pane.\n");
	}
	m_notreasures = true;
	/*
stwu     r1, -0x10(r1)
mflr     r0
cmplwi   r4, 0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
beq      lbl_8032DA98
cmplwi   r5, 0
beq      lbl_8032DA98
stw      r4, 8(r31)
li       r0, 0
lfs      f0, lbl_8051DF78@sda21(r2)
mr       r3, r5
stw      r5, 0xc(r31)
li       r4, 0x1e
stfs     f0, 0(r31)
stfs     f0, 4(r31)
lwz      r5, 0xc(r31)
lfs      f0, 0xd4(r5)
stfs     f0, 0x18(r31)
lwz      r5, 0xc(r31)
lfs      f0, 0xd8(r5)
stfs     f0, 0x1c(r31)
stw      r6, 0x80(r31)
stb      r0, 0x6d(r31)
bl       capturePictureTreeColor__Q22og6ScreenFP7J2DPanei
stw      r3, 0x70(r31)
b        lbl_8032DAB4

lbl_8032DA98:
lis      r3, lbl_8048F720@ha
lis      r5, lbl_8048F734@ha
addi     r3, r3, lbl_8048F720@l
li       r4, 0xed
addi     r5, r5, lbl_8048F734@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8032DAB4:
li       r0, 1
stb      r0, 0x85(r31)
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8032DAD0
 * Size:	000150
 */
void OtakaraSensor::setParam(f32 dist, int state, bool enabled, bool complete)
{
	bool flag         = true;
	m_isFuefukid      = false;
	m_enabled         = enabled;
	f32 temp          = 12.0f;
	m_notreasures     = complete;
	m_angleOffsetMod2 = 0.3f;
	int old           = m_state;
	m_state           = state;

	switch (m_state) {
	case 0:
		temp = 0.0f;
		flag = false;
		break;
	case 1:
		m_angleOffsetMod2 = 1.0f;
		break;
	case 2:
		m_angleOffsetMod2 = 1.0f;
		break;
	case 3:
		temp              = 100.0f;
		m_angleOffsetMod2 = 0.4f;
		break;
	case 4:
		temp              = 100.0f;
		m_angleOffsetMod2 = 0.4f;
		m_isFuefukid      = true;
		if (m_state != old) {
			m_randAngle = randFloat() * 180.0f - 90.0f;
		}
		break;
	}
	m_currReactionLevel = calcLevel(dist);
	m_doAngleOffset     = flag;
	m_angleOffsetMod    = temp;
}

/*
 * --INFO--
 * Address:	8032DC20
 * Size:	00005C
 */
f32 OtakaraSensor::calcLevel(f32 distance)
{
	f32 level = 0.0f;
	if (m_state != 0) {
		f32 temp = 1.0f - (distance / 900.0f);
		if (0.0f < temp) {
			level = temp;
			if (temp > 1.0f) {
				level = 1.0f;
			}
		}
		level *= level;
		level *= 0.95f;
		level += 0.05f;
	}
	return level;
	/*
lwz      r0, 0x80(r3)
lfs      f3, lbl_8051DF78@sda21(r2)
cmpwi    r0, 0
beq      lbl_8032DC74
lfs      f0, lbl_8051DFB8@sda21(r2)
lfs      f2, lbl_8051DF7C@sda21(r2)
fdivs    f1, f1, f0
fmr      f0, f3
fsubs    f3, f2, f1
fcmpo    cr0, f3, f0
bge      lbl_8032DC54
fmr      f3, f0
b        lbl_8032DC60

lbl_8032DC54:
fcmpo    cr0, f3, f2
ble      lbl_8032DC60
fmr      f3, f2

lbl_8032DC60:
fmuls    f3, f3, f3
lfs      f1, lbl_8051DFBC@sda21(r2)
lfs      f0, lbl_8051DFC0@sda21(r2)
fmuls    f3, f3, f1
fadds    f3, f3, f0

lbl_8032DC74:
fmr      f1, f3
blr
	*/
}

/*
 * --INFO--
 * Address:	8032DC7C
 * Size:	000010
 */
void OtakaraSensor::show() { m_pane2->show(); }

/*
 * --INFO--
 * Address:	8032DC8C
 * Size:	000010
 */
void OtakaraSensor::hide() { m_pane2->hide(); }

/*
 * --INFO--
 * Address:	8032DC9C
 * Size:	000014
 */
void OtakaraSensor::startSensorEff()
{
	m_efxActive = true;
	m_timer     = 0.3f;
}

/*
 * --INFO--
 * Address:	8032DCB0
 * Size:	0000D8
 */
void OtakaraSensor::adjPos(f32 x, f32 y)
{
	f32 offs = 0.0f;
	if (m_efxActive) {
		f32 temp = m_angleMgr->calc();
		offs     = pikmin2_cosf(temp) * 100.0f;
	}
	m_pane2->setOffset(m_panePos.x + x, m_panePos.y + y + offs);
}

/*
 * --INFO--
 * Address:	8032DD88
 * Size:	000008
 */
void OtakaraSensor::adjScale(f32 scale) { m_scale = scale; }

/*
 * --INFO--
 * Address:	8032DD90
 * Size:	000088
 */
void OtakaraSensor::update()
{
	if (m_appearTimer > 0.0f) {
		m_appearTimer -= sys->m_deltaTime;
	}

	calcAppear();
	calcGrayColor();
	if (m_state != 5) {
		calcAngle();
	}
	calcReaction();
	PSStartTreasureLaderNoiseSE(m_state, m_noiseLevel, m_currReactionLevel);
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f0, lbl_8051DF78@sda21(r2)
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lfs      f1, 0x44(r3)
fcmpo    cr0, f1, f0
ble      lbl_8032DDC4
lwz      r3, sys@sda21(r13)
lfs      f0, 0x54(r3)
fsubs    f0, f1, f0
stfs     f0, 0x44(r31)

lbl_8032DDC4:
mr       r3, r31
bl       calcAppear__Q32og6Screen13OtakaraSensorFv
mr       r3, r31
bl       calcGrayColor__Q32og6Screen13OtakaraSensorFv
lwz      r0, 0x80(r31)
cmpwi    r0, 5
beq      lbl_8032DDE8
mr       r3, r31
bl       calcAngle__Q32og6Screen13OtakaraSensorFv

lbl_8032DDE8:
mr       r3, r31
bl       calcReaction__Q32og6Screen13OtakaraSensorFv
lwz      r0, 0x80(r31)
lfs      f1, 0x74(r31)
lfs      f2, 0(r31)
clrlwi   r3, r0, 0x18
bl       PSStartTresureLaderNoiseSE__FUcff
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8032DE18
 * Size:	000160
 */
void OtakaraSensor::updateInit()
{
	if (!m_isInit) {
		m_isInit = true;
		if (m_enabled && m_state == 0) {
			m_doIncNoise = true;
			if (m_notreasures) {
				m_noiseLevel            = 0.0f;
				m_isPoweringOff         = true;
				PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
				PSSystem::checkSceneMgr(mgr);
				PSM::Scene_Cave* scene = static_cast<PSM::Scene_Cave*>(mgr->getChildScene());
				PSSystem::checkGameScene(scene);
				if (scene->isCave()) {
					scene->startPollutUpSe();
				}
			} else {
				m_noiseLevel = 1.0f;
			}
		}
	}
	/*
stwu     r1, -0x10(r1)
mflr     r0
lis      r4, lbl_8048F710@ha
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
addi     r31, r4, lbl_8048F710@l
stw      r30, 8(r1)
lbz      r0, 0x6d(r3)
cmplwi   r0, 0
bne      lbl_8032DF60
li       r4, 1
stb      r4, 0x6d(r3)
lbz      r0, 0x84(r3)
cmplwi   r0, 0
beq      lbl_8032DF60
lwz      r0, 0x80(r3)
cmpwi    r0, 0
bne      lbl_8032DF60
stb      r4, 0x6c(r3)
lbz      r0, 0x85(r3)
cmplwi   r0, 0
beq      lbl_8032DF58
lfs      f0, lbl_8051DF78@sda21(r2)
stfs     f0, 0x74(r3)
stb      r4, 0x86(r3)
lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
cmplwi   r0, 0
bne      lbl_8032DE9C
addi     r3, r31, 0x30
addi     r5, r31, 0x3c
li       r4, 0x1d3
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8032DE9C:
lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
cmplwi   r30, 0
bne      lbl_8032DEBC
addi     r3, r31, 0x30
addi     r5, r31, 0x3c
li       r4, 0x1dc
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8032DEBC:
lwz      r0, 4(r30)
cmplwi   r0, 0
bne      lbl_8032DEDC
addi     r3, r31, 0x48
addi     r5, r31, 0x3c
li       r4, 0xcf
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8032DEDC:
lwz      r3, 4(r30)
lwz      r30, 4(r3)
cmplwi   r30, 0
bne      lbl_8032DF00
addi     r3, r31, 0x48
addi     r5, r31, 0x54
li       r4, 0xd1
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8032DF00:
lwz      r12, 0(r30)
mr       r3, r30
lwz      r12, 0x40(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_8032DF30
addi     r3, r31, 0x78
addi     r5, r31, 0x3c
li       r4, 0x177
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8032DF30:
mr       r3, r30
lwz      r12, 0(r30)
lwz      r12, 0x58(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_8032DF60
mr       r3, r30
bl       startPollutUpSe__Q23PSM10Scene_CaveFv
b        lbl_8032DF60

lbl_8032DF58:
lfs      f0, lbl_8051DF7C@sda21(r2)
stfs     f0, 0x74(r3)

lbl_8032DF60:
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
 * Address:	8032DF78
 * Size:	000370
 */
void OtakaraSensor::calcGrayColor()
{
	if (m_state != 5) {
		if (m_isPoweringOff) {
			if (m_powerOffTimer > 0.0f) {
				m_powerOffTimer -= sys->m_deltaTime;
			} else {
				m_isPoweringOff = false;
				m_doIncNoise    = true;
				ogSound->setFloorComplete();
				m_isPoweredOff = true;
				m_setGrayTimer = 1.5f;
			}
		} else {
			if (m_doIncNoise) {
				m_noiseLevel += 0.05f;
				if (m_noiseLevel > 1.0f) {
					m_noiseLevel = 1.0f;
				}
				if (m_state != 0) {
					m_doIncNoise = false;
				}
			} else {
				m_noiseLevel -= 0.05f;
				if (m_noiseLevel < 0.0f) {
					m_noiseLevel = 0.0f;
				}
			}
		}

		if (m_isPoweredOff && m_setGrayTimer > 0.0f) {
			m_setGrayTimer -= sys->m_deltaTime;
			if (m_setGrayTimer < 1.0f) {
				ogSound->setGraySensor();
				startGraySensor();
			}
			JUtility::TColor col1;
			JUtility::TColor col2;
			col1.g = 255;
			col2.b = 255;
			col2.set(0, 0, 0, 0);
			switch (m_state) {
			case 3:
				col1.g = 0;
				col2.b = 200;
				m_noiseTimer += sys->m_deltaTime * TAU * 2.5f;
				if (m_noiseTimer > TAU)
					m_noiseTimer -= TAU;
				m_noiseLevel  = (pikmin2_sinf(m_noiseTimer) + 1.0f) * 0.3f * 0.5f;
				m_canIncNoise = true;
				break;
			case 4:
				col1.g = 0;
				col2.b = 200;
				m_noiseTimer += sys->m_deltaTime * TAU * newScreen::ObjCave::msVal._44;
				if (m_noiseTimer > TAU)
					m_noiseTimer -= TAU;
				m_noiseLevel  = (pikmin2_sinf(m_noiseTimer) + 1.0f) * newScreen::ObjCave::msVal._48 * 0.5f;
				m_canIncNoise = true;
				break;
			case 0:
				if (m_canIncNoise) {
					m_canIncNoise = false;
					m_doIncNoise  = true;
				}
				break;
			}
			col1.a = 255;
			col1.r = 255;
			og::Screen::blendPictureTreeColor(m_treeColor, col1, col2, m_noiseLevel);
		}
	}
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stw      r31, 0x2c(r1)
mr       r31, r3
lwz      r0, 0x80(r3)
cmpwi    r0, 5
beq      lbl_8032E2D4
lbz      r0, 0x86(r31)
cmplwi   r0, 0
beq      lbl_8032DFF4
lfs      f1, 0x88(r31)
lfs      f0, lbl_8051DF78@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_8032DFC8
lwz      r3, sys@sda21(r13)
lfs      f0, 0x54(r3)
fsubs    f0, f1, f0
stfs     f0, 0x88(r31)
b        lbl_8032E060

lbl_8032DFC8:
li       r3, 0
li       r0, 1
stb      r3, 0x86(r31)
stb      r0, 0x6c(r31)
lwz      r3, ogSound__2og@sda21(r13)
bl       setFloorComplete__Q22og5SoundFv
li       r0, 1
lfs      f0, lbl_8051DFC8@sda21(r2)
stb      r0, 0x78(r31)
stfs     f0, 0x7c(r31)
b        lbl_8032E060

lbl_8032DFF4:
lbz      r0, 0x6c(r31)
cmplwi   r0, 0
beq      lbl_8032E03C
lfs      f2, 0x74(r31)
lfs      f1, lbl_8051DFC0@sda21(r2)
lfs      f0, lbl_8051DF7C@sda21(r2)
fadds    f1, f2, f1
stfs     f1, 0x74(r31)
lfs      f1, 0x74(r31)
fcmpo    cr0, f1, f0
ble      lbl_8032E024
stfs     f0, 0x74(r31)

lbl_8032E024:
lwz      r0, 0x80(r31)
cmpwi    r0, 0
beq      lbl_8032E060
li       r0, 0
stb      r0, 0x6c(r31)
b        lbl_8032E060

lbl_8032E03C:
lfs      f2, 0x74(r31)
lfs      f1, lbl_8051DFC0@sda21(r2)
lfs      f0, lbl_8051DF78@sda21(r2)
fsubs    f1, f2, f1
stfs     f1, 0x74(r31)
lfs      f1, 0x74(r31)
fcmpo    cr0, f1, f0
bge      lbl_8032E060
stfs     f0, 0x74(r31)

lbl_8032E060:
lbz      r0, 0x78(r31)
cmplwi   r0, 0
beq      lbl_8032E0A8
lfs      f2, 0x7c(r31)
lfs      f1, lbl_8051DF78@sda21(r2)
fcmpo    cr0, f2, f1
ble      lbl_8032E0A8
lwz      r3, sys@sda21(r13)
lfs      f0, 0x54(r3)
fsubs    f0, f2, f0
stfs     f0, 0x7c(r31)
lfs      f0, 0x7c(r31)
fcmpo    cr0, f0, f1
bge      lbl_8032E0A8
lwz      r3, ogSound__2og@sda21(r13)
bl       setGraySensor__Q22og5SoundFv
mr       r3, r31
bl       startGraySensor__Q32og6Screen13OtakaraSensorFv

lbl_8032E0A8:
li       r6, 0xff
li       r5, 0
stb      r6, 0xc(r1)
stb      r6, 0xd(r1)
stb      r6, 0xe(r1)
stb      r6, 0xf(r1)
stb      r5, 8(r1)
stb      r5, 9(r1)
stb      r5, 0xa(r1)
stb      r5, 0xb(r1)
lwz      r3, 0x80(r31)
cmpwi    r3, 4
beq      lbl_8032E1BC
bge      lbl_8032E29C
cmpwi    r3, 3
bge      lbl_8032E0EC
b        lbl_8032E29C

lbl_8032E0EC:
li       r0, 0xc8
stb      r6, 0xc(r1)
lwz      r3, sys@sda21(r13)
stb      r5, 0xd(r1)
lfs      f2, lbl_8051DFD0@sda21(r2)
stb      r0, 0xe(r1)
lfs      f3, lbl_8051DFCC@sda21(r2)
stb      r6, 0xf(r1)
lfs      f1, 0x54(r3)
lfs      f0, 0x8c(r31)
fmuls    f1, f2, f1
fmadds   f0, f3, f1, f0
stfs     f0, 0x8c(r31)
lfs      f0, 0x8c(r31)
fcmpo    cr0, f0, f2
ble      lbl_8032E134
fsubs    f0, f0, f2
stfs     f0, 0x8c(r31)

lbl_8032E134:
lfs      f3, 0x8c(r31)
lfs      f0, lbl_8051DF78@sda21(r2)
lfs      f2, lbl_8051DF84@sda21(r2)
fcmpo    cr0, f3, f0
lfs      f1, lbl_8051DF7C@sda21(r2)
bge      lbl_8032E178
lfs      f0, lbl_8051DFD4@sda21(r2)
lis      r3, sincosTable___5JMath@ha
addi     r3, r3, sincosTable___5JMath@l
fmuls    f0, f3, f0
fctiwz   f0, f0
stfd     f0, 0x10(r1)
lwz      r0, 0x14(r1)
rlwinm   r0, r0, 3, 0x12, 0x1c
lfsx     f0, r3, r0
fneg     f0, f0
b        lbl_8032E19C

lbl_8032E178:
lfs      f0, lbl_8051DFC4@sda21(r2)
lis      r3, sincosTable___5JMath@ha
addi     r3, r3, sincosTable___5JMath@l
fmuls    f0, f3, f0
fctiwz   f0, f0
stfd     f0, 0x18(r1)
lwz      r0, 0x1c(r1)
rlwinm   r0, r0, 3, 0x12, 0x1c
lfsx     f0, r3, r0

lbl_8032E19C:
fadds    f1, f1, f0
lfs      f0, lbl_8051DFD8@sda21(r2)
li       r0, 1
fmuls    f1, f2, f1
fmuls    f0, f1, f0
stfs     f0, 0x74(r31)
stb      r0, 0x90(r31)
b        lbl_8032E2C0

lbl_8032E1BC:
li       r0, 0xc8
lis      r3, msVal__Q32og9newScreen7ObjCave@ha
stb      r6, 0xc(r1)
addi     r4, r3, msVal__Q32og9newScreen7ObjCave@l
lwz      r3, sys@sda21(r13)
stb      r5, 0xd(r1)
lfs      f2, lbl_8051DFD0@sda21(r2)
stb      r0, 0xe(r1)
lfs      f3, 0x44(r4)
stb      r6, 0xf(r1)
lfs      f1, 0x54(r3)
lfs      f0, 0x8c(r31)
fmuls    f1, f2, f1
fmadds   f0, f3, f1, f0
stfs     f0, 0x8c(r31)
lfs      f0, 0x8c(r31)
fcmpo    cr0, f0, f2
ble      lbl_8032E20C
fsubs    f0, f0, f2
stfs     f0, 0x8c(r31)

lbl_8032E20C:
lfs      f3, 0x8c(r31)
lis      r3, msVal__Q32og9newScreen7ObjCave@ha
lfs      f0, lbl_8051DF78@sda21(r2)
addi     r3, r3, msVal__Q32og9newScreen7ObjCave@l
lfs      f2, 0x48(r3)
fcmpo    cr0, f3, f0
lfs      f1, lbl_8051DF7C@sda21(r2)
bge      lbl_8032E258
lfs      f0, lbl_8051DFD4@sda21(r2)
lis      r3, sincosTable___5JMath@ha
addi     r3, r3, sincosTable___5JMath@l
fmuls    f0, f3, f0
fctiwz   f0, f0
stfd     f0, 0x18(r1)
lwz      r0, 0x1c(r1)
rlwinm   r0, r0, 3, 0x12, 0x1c
lfsx     f0, r3, r0
fneg     f0, f0
b        lbl_8032E27C

lbl_8032E258:
lfs      f0, lbl_8051DFC4@sda21(r2)
lis      r3, sincosTable___5JMath@ha
addi     r3, r3, sincosTable___5JMath@l
fmuls    f0, f3, f0
fctiwz   f0, f0
stfd     f0, 0x10(r1)
lwz      r0, 0x14(r1)
rlwinm   r0, r0, 3, 0x12, 0x1c
lfsx     f0, r3, r0

lbl_8032E27C:
fadds    f1, f1, f0
lfs      f0, lbl_8051DFD8@sda21(r2)
li       r0, 1
fmuls    f1, f2, f1
fmuls    f0, f1, f0
stfs     f0, 0x74(r31)
stb      r0, 0x90(r31)
b        lbl_8032E2C0

lbl_8032E29C:
lbz      r0, 0x90(r31)
cmplwi   r0, 0
beq      lbl_8032E2C0
cmpwi    r3, 0
bne      lbl_8032E2C0
li       r3, 0
li       r0, 1
stb      r3, 0x90(r31)
stb      r0, 0x6c(r31)

lbl_8032E2C0:
lwz      r3, 0x70(r31)
addi     r4, r1, 0xc
lfs      f1, 0x74(r31)
addi     r5, r1, 8
bl
blendPictureTreeColor__Q22og6ScreenFPQ32og6Screen27PictureTreeColorCaptureInfoRQ28JUtility6TColorRQ28JUtility6TColorf

lbl_8032E2D4:
lwz      r0, 0x34(r1)
lwz      r31, 0x2c(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	8032E2E8
 * Size:	0001FC
 */
void OtakaraSensor::calcAppear()
{
	if (m_efxActive) {
		if (m_timer > 0.0f) {
			m_timer -= sys->m_deltaTime;
			if (m_timer < 0.0f) {
				m_angleMgr->chase(HALF_PI, _4C.x);
				m_doStartAppear  = true;
				m_sensorGetTimer = _4C.y;
			}
		}
	}

	if (m_doStartAppear) {
		if (m_sensorGetTimer > 0.0f) {
			m_sensorGetTimer -= sys->m_deltaTime;
			if (m_sensorGetTimer <= 0.0f) {
				m_scaleMgr->up(0.7f, 40.0f, 0.5f, 0.0f);
				m_appearTimer = 3.0f;
				efx2d::T2DSensorGet efx;
				Vector3f pos1 = m_pane1->getGlbVtx(0);
				Vector3f pos2 = m_pane1->getGlbVtx(3);
				efx2d::Arg arg(pos1.x + pos2.x * 0.5f + m_appearEfxOffset.x, pos1.y + pos2.y * 0.5f + m_appearEfxOffset.y);
				efx.create(&arg);
				ogSound->setGetSensor();
			}
		}
	}
	/*
stwu     r1, -0x80(r1)
mflr     r0
stw      r0, 0x84(r1)
stw      r31, 0x7c(r1)
mr       r31, r3
lbz      r0, 0x2d(r3)
cmplwi   r0, 0
beq      lbl_8032E354
lfs      f2, 0x34(r31)
lfs      f1, lbl_8051DF78@sda21(r2)
fcmpo    cr0, f2, f1
ble      lbl_8032E354
lwz      r3, sys@sda21(r13)
lfs      f0, 0x54(r3)
fsubs    f0, f2, f0
stfs     f0, 0x34(r31)
lfs      f0, 0x34(r31)
fcmpo    cr0, f0, f1
bge      lbl_8032E354
lwz      r3, 0x30(r31)
lfs      f1, lbl_8051DFDC@sda21(r2)
lfs      f2, 0x4c(r31)
bl       chase__Q32og6Screen8AngleMgrFff
li       r0, 1
stb      r0, 0x40(r31)
lfs      f0, 0x50(r31)
stfs     f0, 0x48(r31)

lbl_8032E354:
lbz      r0, 0x40(r31)
cmplwi   r0, 0
beq      lbl_8032E4D0
lfs      f1, 0x48(r31)
lfs      f4, lbl_8051DF78@sda21(r2)
fcmpo    cr0, f1, f4
ble      lbl_8032E4D0
lwz      r3, sys@sda21(r13)
lfs      f0, 0x54(r3)
fsubs    f0, f1, f0
stfs     f0, 0x48(r31)
lfs      f0, 0x48(r31)
fcmpo    cr0, f0, f4
cror     2, 0, 2
bne      lbl_8032E4D0
lwz      r3, 0x24(r31)
lfs      f1, lbl_8051DFE0@sda21(r2)
lfs      f2, lbl_8051DFE4@sda21(r2)
lfs      f3, lbl_8051DFD8@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lfs      f0, lbl_8051DF80@sda21(r2)
lis      r3, __vt__Q25efx2d7TBaseIF@ha
addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
lis      r5, __vt__Q25efx2d5TBase@ha
stfs     f0, 0x44(r31)
li       r8, 0
li       r7, 0x1a
li       r6, 0x1b
stw      r0, 0x54(r1)
addi     r0, r5, __vt__Q25efx2d5TBase@l
lis      r4, __vt__Q25efx2d8TSimple3@ha
lis      r3, __vt__Q25efx2d12T2DSensorGet@ha
stw      r0, 0x54(r1)
addi     r0, r4, __vt__Q25efx2d8TSimple3@l
li       r4, 0x1c
li       r5, 0
stw      r0, 0x54(r1)
addi     r0, r3, __vt__Q25efx2d12T2DSensorGet@l
addi     r3, r1, 0x24
stb      r8, 0x58(r1)
stb      r8, 0x59(r1)
sth      r7, 0x5c(r1)
sth      r6, 0x5e(r1)
sth      r4, 0x60(r1)
stw      r8, 0x64(r1)
stw      r8, 0x68(r1)
stw      r8, 0x6c(r1)
stw      r0, 0x54(r1)
lwz      r4, 8(r31)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r4, 0x24(r1)
addi     r3, r1, 0x18
lwz      r6, 0x28(r1)
li       r5, 3
lwz      r0, 0x2c(r1)
stw      r4, 0x48(r1)
lwz      r4, 8(r31)
stw      r6, 0x4c(r1)
stw      r0, 0x50(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r4, 0x18(r1)
lis      r3, __vt__Q25efx2d3Arg@ha
lwz      r6, 0x1c(r1)
addi     r0, r3, __vt__Q25efx2d3Arg@l
stw      r4, 0x3c(r1)
addi     r3, r1, 0x54
lwz      r5, 0x20(r1)
addi     r4, r1, 0x30
stw      r6, 0x40(r1)
lfs      f3, 0x48(r1)
lfs      f2, 0x3c(r1)
lfs      f1, 0x4c(r1)
lfs      f0, 0x40(r1)
fadds    f4, f3, f2
lfs      f3, lbl_8051DFD8@sda21(r2)
lfs      f2, 0x64(r31)
fadds    f1, f1, f0
lfs      f0, 0x68(r31)
fmadds   f2, f4, f3, f2
stw      r5, 0x44(r1)
fmadds   f0, f1, f3, f0
stw      r0, 0x38(r1)
stfs     f2, 0x10(r1)
stfs     f0, 0x14(r1)
lwz      r5, 0x10(r1)
lwz      r0, 0x14(r1)
stw      r5, 8(r1)
stw      r0, 0xc(r1)
lfs      f1, 8(r1)
lfs      f0, 0xc(r1)
stfs     f1, 0x30(r1)
stfs     f0, 0x34(r1)
bl       create__Q25efx2d8TSimple3FPQ25efx2d3Arg
lwz      r3, ogSound__2og@sda21(r13)
bl       setGetSensor__Q22og5SoundFv

lbl_8032E4D0:
lwz      r0, 0x84(r1)
lwz      r31, 0x7c(r1)
mtlr     r0
addi     r1, r1, 0x80
blr
	*/
}

/*
 * --INFO--
 * Address:	8032E4E4
 * Size:	000138
 */
void OtakaraSensor::startGraySensor()
{
	efx2d::T2DSensorComp efx;
	Vector3f pos1 = m_pane1->getGlbVtx(0);
	Vector3f pos2 = m_pane1->getGlbVtx(3);
	efx2d::Arg arg(pos1.x + pos2.x * 0.5f + m_completeEfxOffset.x, pos1.y + pos2.y * 0.5f + m_completeEfxOffset.y);
	efx.create(&arg);
	/*
stwu     r1, -0x70(r1)
mflr     r0
lis      r4, __vt__Q25efx2d7TBaseIF@ha
lis      r5, __vt__Q25efx2d8TSimple2@ha
stw      r0, 0x74(r1)
addi     r0, r4, __vt__Q25efx2d7TBaseIF@l
lis      r4, __vt__Q25efx2d5TBase@ha
li       r8, 0
stw      r31, 0x6c(r1)
li       r7, 0x24
li       r6, 0x25
mr       r31, r3
stw      r0, 0x54(r1)
addi     r0, r4, __vt__Q25efx2d5TBase@l
lis      r4, __vt__Q25efx2d13T2DSensorComp@ha
addi     r3, r1, 0x24
stw      r0, 0x54(r1)
addi     r0, r5, __vt__Q25efx2d8TSimple2@l
li       r5, 0
stw      r0, 0x54(r1)
addi     r0, r4, __vt__Q25efx2d13T2DSensorComp@l
stb      r8, 0x58(r1)
stb      r8, 0x59(r1)
sth      r7, 0x5c(r1)
sth      r6, 0x5e(r1)
stw      r8, 0x60(r1)
stw      r8, 0x64(r1)
stw      r0, 0x54(r1)
lwz      r4, 8(r31)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r4, 0x24(r1)
addi     r3, r1, 0x18
lwz      r6, 0x28(r1)
li       r5, 3
lwz      r0, 0x2c(r1)
stw      r4, 0x48(r1)
lwz      r4, 8(r31)
stw      r6, 0x4c(r1)
stw      r0, 0x50(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r4, 0x18(r1)
lis      r3, __vt__Q25efx2d3Arg@ha
lwz      r6, 0x1c(r1)
addi     r0, r3, __vt__Q25efx2d3Arg@l
stw      r4, 0x3c(r1)
addi     r3, r1, 0x54
lwz      r5, 0x20(r1)
addi     r4, r1, 0x30
stw      r6, 0x40(r1)
lfs      f3, 0x48(r1)
lfs      f2, 0x3c(r1)
lfs      f1, 0x4c(r1)
lfs      f0, 0x40(r1)
fadds    f4, f3, f2
lfs      f3, lbl_8051DFD8@sda21(r2)
lfs      f2, 0x5c(r31)
fadds    f1, f1, f0
lfs      f0, 0x60(r31)
fmadds   f2, f4, f3, f2
stw      r5, 0x44(r1)
fmadds   f0, f1, f3, f0
stw      r0, 0x38(r1)
stfs     f2, 0x10(r1)
stfs     f0, 0x14(r1)
lwz      r5, 0x10(r1)
lwz      r0, 0x14(r1)
stw      r5, 8(r1)
stw      r0, 0xc(r1)
lfs      f1, 8(r1)
lfs      f0, 0xc(r1)
stfs     f1, 0x30(r1)
stfs     f0, 0x34(r1)
bl       create__Q25efx2d8TSimple2FPQ25efx2d3Arg
lwz      r0, 0x74(r1)
lwz      r31, 0x6c(r1)
mtlr     r0
addi     r1, r1, 0x70
blr
	*/
}

/*
 * --INFO--
 * Address:	8032E61C
 * Size:	00022C
 */
void OtakaraSensor::calcAngle()
{
	m_angle += (m_currReactionLevel - m_angle) / 10.0f;
	if (m_pane1) {
		f32 angle = -(m_angle * 180.0f - 90.0f);
		if (m_isFuefukid) {
			angle = m_currAngle;
		}
		f32 offs = 0.0f;
		if (m_doAngleOffset) {
			f32 angle2 = m_angleOffsetMod * 0.5f;
			f32 temp   = angle - angle2;
			if (temp >= -90.0f) {
				temp = angle + angle2;
				if (temp > 90.0f) {
					offs = 90.0f - temp;
				}
			} else {
				offs = -90.0f - temp;
			}
			offs += (m_angleOffsetMod * 0.5f) * randFloat() * 2.0f - 1.0f;
		}
		m_angleOffs += m_angleOffsetMod2 * (offs - m_angleOffs);

		if (m_isFuefukid) {
			f32 temp = m_randAngle - m_currAngle;
			if (FABS(temp) < 15.0f) {
				m_randAngle = randFloat() * 180.0f - 90.0f;
				temp        = m_randAngle - m_currAngle;
			}
			f32 newangle = temp * 0.5f;
			if (newangle < -30.0f) {
				newangle = -30.0f;
			}
			if (newangle > 30.0f) {
				newangle = 30.0f;
			}
			m_currAngle += newangle;
			angle = m_currAngle;
		}

		m_currAngle = angle;
		if (!m_doIncNoise) {
			angle += m_angleOffs;
		}

		if (angle < -90.0f) {
			angle = -90.0f;
		}
		if (angle > 90.0f) {
			angle = 90.0f;
		}
		m_pane1->rotate(angle);

	} else {
		m_currAngle = 0.0f;
	}
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stfd     f31, 0x30(r1)
psq_st   f31, 56(r1), 0, qr0
stfd     f30, 0x20(r1)
psq_st   f30, 40(r1), 0, qr0
stw      r31, 0x1c(r1)
mr       r31, r3
lfs      f0, lbl_8051DFE8@sda21(r2)
lfs      f2, 4(r3)
lfs      f1, 0(r3)
fsubs    f1, f1, f2
fdivs    f0, f1, f0
fadds    f0, f2, f0
stfs     f0, 4(r3)
lwz      r0, 8(r3)
cmplwi   r0, 0
beq      lbl_8032E81C
lbz      r0, 0x54(r31)
lfs      f2, lbl_8051DFA4@sda21(r2)
lfs      f1, 4(r31)
cmplwi   r0, 0
lfs      f0, lbl_8051DFA8@sda21(r2)
fnmsubs  f31, f2, f1, f0
beq      lbl_8032E688
lfs      f31, 0x10(r31)

lbl_8032E688:
lbz      r0, 0x2c(r31)
lfs      f0, lbl_8051DF78@sda21(r2)
cmplwi   r0, 0
beq      lbl_8032E718
lfs      f2, 0x28(r31)
fmr      f30, f0
lfs      f1, lbl_8051DFD8@sda21(r2)
lfs      f0, lbl_8051DFEC@sda21(r2)
fmuls    f2, f2, f1
fsubs    f1, f31, f2
fcmpo    cr0, f1, f0
bge      lbl_8032E6C0
fsubs    f30, f0, f1
b        lbl_8032E6D4

lbl_8032E6C0:
fadds    f1, f31, f2
lfs      f0, lbl_8051DFA8@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_8032E6D4
fsubs    f30, f0, f1

lbl_8032E6D4:
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0xc(r1)
lfd      f1, lbl_8051DFB0@sda21(r2)
stw      r0, 8(r1)
lfs      f4, lbl_8051DFA0@sda21(r2)
lfd      f0, 8(r1)
lfs      f3, 0x28(r31)
fsubs    f5, f0, f1
lfs      f2, lbl_8051DFD8@sda21(r2)
lfs      f1, lbl_8051DFF0@sda21(r2)
lfs      f0, lbl_8051DF7C@sda21(r2)
fmuls    f2, f3, f2
fdivs    f3, f5, f4
fmsubs   f0, f1, f3, f0
fmadds   f0, f2, f0, f30

lbl_8032E718:
lfs      f1, 0x38(r31)
lfs      f2, 0x3c(r31)
fsubs    f0, f0, f1
fmadds   f0, f2, f0, f1
stfs     f0, 0x38(r31)
lbz      r0, 0x54(r31)
cmplwi   r0, 0
beq      lbl_8032E7D4
lfs      f2, 0x58(r31)
lfs      f1, 0x10(r31)
lfs      f0, lbl_8051DFF4@sda21(r2)
fsubs    f2, f2, f1
fabs     f1, f2
frsp     f1, f1
fcmpo    cr0, f1, f0
bge      lbl_8032E79C
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0xc(r1)
lfd      f3, lbl_8051DFB0@sda21(r2)
stw      r0, 8(r1)
lfs      f2, lbl_8051DFA0@sda21(r2)
lfd      f0, 8(r1)
lfs      f1, lbl_8051DFA4@sda21(r2)
fsubs    f3, f0, f3
lfs      f0, lbl_8051DFA8@sda21(r2)
fdivs    f2, f3, f2
fmsubs   f0, f1, f2, f0
stfs     f0, 0x58(r31)
lfs      f1, 0x58(r31)
lfs      f0, 0x10(r31)
fsubs    f2, f1, f0

lbl_8032E79C:
lfs      f1, lbl_8051DFD8@sda21(r2)
lfs      f0, lbl_8051DFF8@sda21(r2)
fmuls    f1, f1, f2
fcmpo    cr0, f1, f0
bge      lbl_8032E7B4
fmr      f1, f0

lbl_8032E7B4:
lfs      f0, lbl_8051DFFC@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_8032E7C4
fmr      f1, f0

lbl_8032E7C4:
lfs      f0, 0x10(r31)
fadds    f0, f0, f1
stfs     f0, 0x10(r31)
lfs      f31, 0x10(r31)

lbl_8032E7D4:
stfs     f31, 0x10(r31)
lbz      r0, 0x6c(r31)
cmplwi   r0, 0
bne      lbl_8032E7EC
lfs      f0, 0x38(r31)
fadds    f31, f31, f0

lbl_8032E7EC:
lfs      f0, lbl_8051DFEC@sda21(r2)
fcmpo    cr0, f31, f0
bge      lbl_8032E7FC
fmr      f31, f0

lbl_8032E7FC:
lfs      f0, lbl_8051DFA8@sda21(r2)
fcmpo    cr0, f31, f0
ble      lbl_8032E80C
fmr      f31, f0

lbl_8032E80C:
fmr      f1, f31
lwz      r3, 8(r31)
bl       rotate__7J2DPaneFf
b        lbl_8032E824

lbl_8032E81C:
lfs      f0, lbl_8051DF78@sda21(r2)
stfs     f0, 0x10(r31)

lbl_8032E824:
psq_l    f31, 56(r1), 0, qr0
lfd      f31, 0x30(r1)
psq_l    f30, 40(r1), 0, qr0
lfd      f30, 0x20(r1)
lwz      r0, 0x44(r1)
lwz      r31, 0x1c(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	8032E848
 * Size:	000204
 */
void OtakaraSensor::calcReaction()
{
	if (m_reactTimer > 0.0f) {
		m_reactTimer -= sys->m_deltaTime;
		if (m_reactTimer < 0.0f) {
			m_reactTimer = 0.0f;
			if (!og::newScreen::checkMovieActive()) {
				PSStartTreasureLaderSE(m_currReactionLevel);
				if (m_appearTimer <= 0.0f) {
					m_scaleMgr->up(m_currReactionLevel * 0.1f, 30.0f, 0.8f, 0.0f);
					efx2d::T2DSensorAct efx;
					Vector3f pos1 = m_pane1->getGlbVtx(0);
					Vector3f pos2 = m_pane1->getGlbVtx(3);
					efx2d::Arg arg(pos1.x + pos2.x * 0.5f + m_completeEfxOffset.x, pos1.y + pos2.y * 0.5f + m_completeEfxOffset.y);
					efx.create(&arg);
				}
			}
		}
	} else {
		if (m_currReactionLevel > 0.3f) {
			m_reactTimer = (1.0f - m_currReactionLevel) * 2.0f + 0.4f;
		}
	}
	m_pane2->updateScale(m_scale * m_scaleMgr->calc());
	/*
stwu     r1, -0x70(r1)
mflr     r0
lfs      f1, lbl_8051DF78@sda21(r2)
stw      r0, 0x74(r1)
stw      r31, 0x6c(r1)
mr       r31, r3
lfs      f2, 0x14(r3)
fcmpo    cr0, f2, f1
ble      lbl_8032E9E4
lwz      r3, sys@sda21(r13)
lfs      f0, 0x54(r3)
fsubs    f0, f2, f0
stfs     f0, 0x14(r31)
lfs      f0, 0x14(r31)
fcmpo    cr0, f0, f1
bge      lbl_8032EA0C
stfs     f1, 0x14(r31)
bl       checkMovieActive__Q22og9newScreenFv
clrlwi.  r0, r3, 0x18
bne      lbl_8032EA0C
lfs      f1, 0(r31)
bl       PSStartTreasureLaderSE__Ff
lfs      f0, 0x44(r31)
lfs      f4, lbl_8051DF78@sda21(r2)
fcmpo    cr0, f0, f4
cror     2, 0, 2
bne      lbl_8032EA0C
lfs      f1, lbl_8051E000@sda21(r2)
lfs      f0, 0(r31)
lwz      r3, 0x24(r31)
fmuls    f1, f1, f0
lfs      f2, lbl_8051DFFC@sda21(r2)
lfs      f3, lbl_8051E004@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lis      r3, __vt__Q25efx2d7TBaseIF@ha
li       r7, 0
addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
li       r6, 0x18
lis      r3, __vt__Q25efx2d5TBase@ha
stw      r0, 0x54(r1)
addi     r0, r3, __vt__Q25efx2d5TBase@l
lis      r4, __vt__Q25efx2d8TSimple2@ha
stw      r0, 0x54(r1)
addi     r0, r4, __vt__Q25efx2d8TSimple2@l
li       r4, 0x19
lis      r3, __vt__Q25efx2d12T2DSensorAct@ha
stw      r0, 0x54(r1)
addi     r0, r3, __vt__Q25efx2d12T2DSensorAct@l
addi     r3, r1, 0x24
li       r5, 0
stb      r7, 0x58(r1)
stb      r7, 0x59(r1)
sth      r6, 0x5c(r1)
sth      r4, 0x5e(r1)
stw      r7, 0x60(r1)
stw      r7, 0x64(r1)
stw      r0, 0x54(r1)
lwz      r4, 8(r31)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r4, 0x24(r1)
addi     r3, r1, 0x18
lwz      r6, 0x28(r1)
li       r5, 3
lwz      r0, 0x2c(r1)
stw      r4, 0x48(r1)
lwz      r4, 8(r31)
stw      r6, 0x4c(r1)
stw      r0, 0x50(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r4, 0x18(r1)
lis      r3, __vt__Q25efx2d3Arg@ha
lwz      r6, 0x1c(r1)
addi     r0, r3, __vt__Q25efx2d3Arg@l
stw      r4, 0x3c(r1)
addi     r3, r1, 0x54
lwz      r5, 0x20(r1)
addi     r4, r1, 0x30
stw      r6, 0x40(r1)
lfs      f3, 0x48(r1)
lfs      f2, 0x3c(r1)
lfs      f1, 0x4c(r1)
lfs      f0, 0x40(r1)
fadds    f4, f3, f2
lfs      f3, lbl_8051DFD8@sda21(r2)
lfs      f2, 0x5c(r31)
fadds    f1, f1, f0
lfs      f0, 0x60(r31)
fmadds   f2, f4, f3, f2
stw      r5, 0x44(r1)
fmadds   f0, f1, f3, f0
stw      r0, 0x38(r1)
stfs     f2, 0x10(r1)
stfs     f0, 0x14(r1)
lwz      r5, 0x10(r1)
lwz      r0, 0x14(r1)
stw      r5, 8(r1)
stw      r0, 0xc(r1)
lfs      f1, 8(r1)
lfs      f0, 0xc(r1)
stfs     f1, 0x30(r1)
stfs     f0, 0x34(r1)
bl       create__Q25efx2d8TSimple2FPQ25efx2d3Arg
b        lbl_8032EA0C

lbl_8032E9E4:
lfs      f1, 0(r31)
lfs      f0, lbl_8051DF84@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_8032EA0C
lfs      f0, lbl_8051DF7C@sda21(r2)
lfs      f2, lbl_8051DFF0@sda21(r2)
fsubs    f1, f0, f1
lfs      f0, lbl_8051DF9C@sda21(r2)
fmadds   f0, f2, f1, f0
stfs     f0, 0x14(r31)

lbl_8032EA0C:
lwz      r3, 0x24(r31)
bl       calc__Q32og6Screen8ScaleMgrFv
lfs      f0, 0x20(r31)
lwz      r3, 0xc(r31)
fmuls    f0, f0, f1
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r0, 0x74(r1)
lwz      r31, 0x6c(r1)
mtlr     r0
addi     r1, r1, 0x70
blr
	*/
}

/*
 * --INFO--
 * Address:	8032EA4C
 * Size:	000004
 */
void OtakaraSensor::draw(J2DGrafContext&) { }

} // namespace Screen
} // namespace og

/*
 * --INFO--
 * Address:	8032EA50
 * Size:	000004
 */
void efx2d::TSimple3::kill() { }

/*
 * --INFO--
 * Address:	8032EA54
 * Size:	000004
 */
void efx2d::TSimple3::fade() { }
