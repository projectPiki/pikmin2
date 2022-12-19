#include "og/Screen/callbackNodes.h"
#include "types.h"
#include "System.h"
#include "JSystem/JUT/JUTException.h"
#include "og/Sound.h"
#include "og/Screen/ogScreen.h"
#include "Dolphin/rand.h"
#include "Dolphin/math.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F578
    lbl_8048F578:
        .4byte 0x6F67436F
        .4byte 0x756E7465
        .4byte 0x72536C6F
        .4byte 0x742E6370
        .4byte 0x70000000
    .global lbl_8048F58C
    lbl_8048F58C:
        .4byte 0x736C6F74
        .4byte 0x5F757020
        .4byte 0x6F766572
        .4byte 0x666C6F77
        .4byte 0x20212028
        .4byte 0x6B3D2564
        .4byte 0x290A0000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen20CallBack_CounterSlot
    __vt__Q32og6Screen20CallBack_CounterSlot:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen20CallBack_CounterSlotFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32og6Screen20CallBack_CounterSlotFv
        .4byte
   draw__Q32og6Screen18CallBack_CounterRVFR8GraphicsR14J2DGrafContext .4byte
   doInit__Q29P2DScreen4NodeFv .4byte
   init__Q32og6Screen20CallBack_CounterSlotFP9J2DScreenUxUxUxPUlb .4byte
   show__Q32og6Screen18CallBack_CounterRVFv .4byte
   hide__Q32og6Screen18CallBack_CounterRVFv .4byte
   setValue__Q32og6Screen20CallBack_CounterSlotFbb .4byte
   setValue__Q32og6Screen20CallBack_CounterSlotFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DEC8
    lbl_8051DEC8:
        .4byte 0x00000000
    .global lbl_8051DECC
    lbl_8051DECC:
        .float 0.1
    .global lbl_8051DED0
    lbl_8051DED0:
        .4byte 0x40000000
    .global lbl_8051DED4
    lbl_8051DED4:
        .4byte 0x420C0000
    .global lbl_8051DED8
    lbl_8051DED8:
        .float 0.3
        .4byte 0x00000000
    .global lbl_8051DEE0
    lbl_8051DEE0:
        .4byte 0x40240000
        .4byte 0x00000000
    .global lbl_8051DEE8
    lbl_8051DEE8:
        .4byte 0x47000000
    .global lbl_8051DEEC
    lbl_8051DEEC:
        .4byte 0x41100000
    .global lbl_8051DEF0
    lbl_8051DEF0:
        .4byte 0x3CCCCCCD
    .global lbl_8051DEF4
    lbl_8051DEF4:
        .float 0.5
    .global lbl_8051DEF8
    lbl_8051DEF8:
        .float 1.0
        .4byte 0x00000000
    .global lbl_8051DF00
    lbl_8051DF00:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
CallBack_CounterSlot::CallBack_CounterSlot(char** p1, u16 p2, u16 p3, JKRArchive* archive)
    : CallBack_CounterRV(p1, p2, p3, archive)
{
	_A8              = 0;
	_A9              = 0;
	_AA              = 0;
	_AB              = 0;
	_AC              = 0;
	_B0              = 0;
	m_timer          = 0.0f;
	m_updateInterval = 0.1f;
	m_puyoParm1      = 2.0f;
	m_puyoParm2      = 35.0f;
	m_puyoParm3      = 0.3f;
	_C8              = PSSE_UNSET;
}

/*
 * --INFO--
 * Address:	8032A754
 * Size:	000030
 */
void CallBack_CounterSlot::init(J2DScreen* screen, u64 tag1, u64 tag2, u64 tag3, u32* data, bool flag)
{
	CallBack_CounterRV::init(screen, tag1, tag2, tag3, data, flag);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r11, 0x18(r1)
	  lbz       r0, 0x1F(r1)
	  stw       r11, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        -0x1EE8C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032A784
 * Size:	000010
 */
void CallBack_CounterSlot::setPuyoParam(f32 parm1, f32 parm2, f32 parm3)
{
	m_puyoParm1 = parm1;
	m_puyoParm2 = parm2;
	m_puyoParm3 = parm3;

	/*
stfs     f1, 0xbc(r3)
stfs     f2, 0xc0(r3)
stfs     f3, 0xc4(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	8032A794
 * Size:	000270
 */
void CallBack_CounterSlot::update()
{
	int goal = m_currCounters;
	if (goal > m_counterLimit) {
		goal = m_counterLimit;
	}

	if (_A8 && !_AC) {
		for (int i = 0; i < goal; i++) {
			J2DPane* pane = m_counters[i]->m_picture;
			if (i <= (int)_B0 && _A9) {
				pane->m_isVisible = false;
			} else {
				pane->m_isVisible = true;
			}
		}
		m_timer += sys->m_deltaTime;
		if (m_timer >= m_updateInterval) {
			m_timer = 0.0f;
			_B0++;
			if ((int)_B0 >= (int)m_currCounters) {
				if ((int)_B0 >= (int)m_counterLimit) {
					_A8 = false;
					_AB = true;
				}
				_AA = true;
			} else {
				slot_up(_B0);
			}
		}
		setValue(false, false);
	} else {
		CallBack_CounterRV::update();
		if (!_A9) {
			for (int i = 0; i < goal; i++) {
				m_counters[i]->m_picture->m_isVisible = false;
			}
		}
	}
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
lhz      r31, 0x2c(r3)
lhz      r0, 0x2e(r3)
cmpw     r31, r0
ble      lbl_8032A7C0
mr       r31, r0

lbl_8032A7C0:
lbz      r0, 0xa8(r30)
cmplwi   r0, 0
beq      lbl_8032A8CC
lbz      r0, 0xac(r30)
cmplwi   r0, 0
bne      lbl_8032A8CC
li       r6, 0
li       r7, 0
mr       r0, r6
li       r3, 1
mtctr    r31
cmpwi    r31, 0
ble      lbl_8032A830

lbl_8032A7F4:
lwz      r5, 0x7c(r30)
lwz      r4, 0xb0(r30)
lwzx     r5, r5, r6
cmpw     r7, r4
lwz      r5, 0(r5)
bgt      lbl_8032A820
lbz      r4, 0xa9(r30)
cmplwi   r4, 0
beq      lbl_8032A820
stb      r3, 0xb0(r5)
b        lbl_8032A824

lbl_8032A820:
stb      r0, 0xb0(r5)

lbl_8032A824:
addi     r6, r6, 4
addi     r7, r7, 1
bdnz     lbl_8032A7F4

lbl_8032A830:
lwz      r3, sys@sda21(r13)
lfs      f1, 0xb4(r30)
lfs      f0, 0x54(r3)
fadds    f0, f1, f0
stfs     f0, 0xb4(r30)
lfs      f1, 0xb4(r30)
lfs      f0, 0xb8(r30)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_8032A8AC
lfs      f0, lbl_8051DEC8@sda21(r2)
stfs     f0, 0xb4(r30)
lwz      r3, 0xb0(r30)
addi     r0, r3, 1
stw      r0, 0xb0(r30)
lwz      r4, 0xb0(r30)
lhz      r0, 0x2c(r30)
cmpw     r4, r0
blt      lbl_8032A8A4
lhz      r0, 0x2e(r30)
cmpw     r4, r0
blt      lbl_8032A898
li       r3, 0
li       r0, 1
stb      r3, 0xa8(r30)
stb      r0, 0xab(r30)

lbl_8032A898:
li       r0, 1
stb      r0, 0xaa(r30)
b        lbl_8032A8AC

lbl_8032A8A4:
mr       r3, r30
bl       slot_up__Q32og6Screen20CallBack_CounterSlotFi

lbl_8032A8AC:
mr       r3, r30
li       r4, 0
lwz      r12, 0(r30)
li       r5, 0
lwz      r12, 0x28(r12)
mtctr    r12
bctrl
b        lbl_8032A9EC

lbl_8032A8CC:
mr       r3, r30
bl       update__Q32og6Screen18CallBack_CounterRVFv
lbz      r0, 0xa9(r30)
cmplwi   r0, 0
bne      lbl_8032A9EC
cmpwi    r31, 0
li       r4, 0
ble      lbl_8032A9EC
cmpwi    r31, 8
addi     r5, r31, -8
ble      lbl_8032A9BC
addi     r0, r5, 7
li       r3, 0
srwi     r0, r0, 3
mtctr    r0
cmpwi    r5, 0
ble      lbl_8032A9BC

lbl_8032A910:
lwz      r5, 0x7c(r30)
li       r12, 0
addi     r10, r3, 4
addi     r9, r3, 8
lwzx     r5, r5, r3
addi     r8, r3, 0xc
addi     r7, r3, 0x10
addi     r6, r3, 0x14
lwz      r11, 0(r5)
addi     r5, r3, 0x18
addi     r0, r3, 0x1c
addi     r3, r3, 0x20
stb      r12, 0xb0(r11)
addi     r4, r4, 8
lwz      r11, 0x7c(r30)
lwzx     r10, r11, r10
lwz      r10, 0(r10)
stb      r12, 0xb0(r10)
lwz      r10, 0x7c(r30)
lwzx     r9, r10, r9
lwz      r9, 0(r9)
stb      r12, 0xb0(r9)
lwz      r9, 0x7c(r30)
lwzx     r8, r9, r8
lwz      r8, 0(r8)
stb      r12, 0xb0(r8)
lwz      r8, 0x7c(r30)
lwzx     r7, r8, r7
lwz      r7, 0(r7)
stb      r12, 0xb0(r7)
lwz      r7, 0x7c(r30)
lwzx     r6, r7, r6
lwz      r6, 0(r6)
stb      r12, 0xb0(r6)
lwz      r6, 0x7c(r30)
lwzx     r5, r6, r5
lwz      r5, 0(r5)
stb      r12, 0xb0(r5)
lwz      r5, 0x7c(r30)
lwzx     r5, r5, r0
lwz      r5, 0(r5)
stb      r12, 0xb0(r5)
bdnz     lbl_8032A910

lbl_8032A9BC:
subf     r0, r4, r31
slwi     r6, r4, 2
li       r5, 0
mtctr    r0
cmpw     r4, r31
bge      lbl_8032A9EC

lbl_8032A9D4:
lwz      r3, 0x7c(r30)
lwzx     r3, r3, r6
addi     r6, r6, 4
lwz      r3, 0(r3)
stb      r5, 0xb0(r3)
bdnz     lbl_8032A9D4

lbl_8032A9EC:
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
 * Address:	8032AA04
 * Size:	000094
 */
void CallBack_CounterSlot::slot_up(int k)
{
	if (k > m_counterLimit) {
		JUT_PANICLINE(169, "slot_up overflow ! (k=%d)\n", k);
	} else if (k != m_counterLimit) {
		m_counters[k]->m_scaleMgr->up(m_puyoParm1, m_puyoParm2, m_puyoParm3, 0.0f);
		if ((u32)_C8 != 0) {
			ogSound->setSE(_C8);
		}
	}
}

/*
 * --INFO--
 * Address:	8032AA98
 * Size:	0000C0
 */
void CallBack_CounterSlot::startSlot(f32 calc)
{
	if (!_AC) {
		_A8              = true;
		_A9              = true;
		_AA              = false;
		_B0              = 0;
		m_timer          = 0.0f;
		m_updateInterval = calc;
		m_isPuyoAnim     = true;

		if ((int)m_counterLimit < 0) {
			JUT_PANICLINE(169, "slot_up overflow ! (k=%d)\n", 0);
		} else if ((int)m_counterLimit != 0) {
			m_counters[0]->m_scaleMgr->up(m_puyoParm1, m_puyoParm2, m_puyoParm3, 0.0f);
			if ((u32)_C8 != 0) {
				ogSound->setSE(_C8);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8032AB58
 * Size:	000554
 */
void CallBack_CounterSlot::setValue(bool flag1, bool flag2)
{
	if (m_isBlind) {
		m_initialDisplayValue = 0;
		m_currDisplayValue    = 0;
	}
	m_currCounters = CalcKeta(m_initialDisplayValue);

	int counts = m_currCounters;
	if (m_currCounters > _30) {
		counts = _30;
	}

	for (int i = 0; i < m_counterLimit; i++) {
		int power = pow(10.0f, (f32)i);
		if (m_isBlind) {
			m_counters[i]->setSuji(m_imgResources, 10);
		} else {
			if (_89) {
				m_counters[i]->setSuji(m_imgResources, (int)(randFloat() * 9.0f));
			} else {
				m_counters[i]->setSuji(m_imgResources, (m_initialDisplayValue / power) % 10);
			}
		}
		J2DPicture* keta = m_counters[i]->m_picture;
		if (keta) {
			if (i < counts) {
				if (_AC) {
					keta->m_isVisible = true;
				}
				if (i + 1 > m_currCounters) {
					if (m_isBlind) {
						keta->setAlpha(m_zeroAlpha);
					} else {
						keta->setAlpha(255);
					}
				} else {
					keta->setAlpha(255);
					ScaleMgr* smgr = m_counters[i]->m_scaleMgr;
					if (!flag1) {
						if (flag2)
							smgr->down();
					} else {
						smgr->up(msVal._00, msVal._04, msVal._08, 0.025f * i);
					}
				}
				m_counters[i]->calcScale();
			} else {
				keta->hide();
			}
		}
	}
	f32 temp  = m_paneScale.x;
	f32 temp3 = 0.0f;
	if (m_counterLimit <= counts) {
		counts = m_counterLimit;
	}
	if (counts > 1) {
		f32 temp2 = m_pane12DistX * (f32)(counts - 1) + m_paneSize.x;
		if (temp2 > m_pane13DistX) {
			temp  = (temp * m_pane13DistX) / temp2;
			temp3 = m_paneSize.x * 0.5f * (1.0f - temp);
		}
	}
	J2DPicture* pane = m_pic1;
	pane->updateScale(temp, m_paneScale.y);
	pane->_0D4.x = m_panePosition.x + temp3;
	pane->_0D4.y = m_panePosition.y;
	pane->calcMtx();

	m_pic1->calcMtx();
	pane                   = m_pic1;
	f32 ang                = pane->m_angle;
	f32 newx               = pane->_0B8;
	f32 newy               = pane->_0BC;
	JUtility::TColor white = pane->getWhite();
	JUtility::TColor black = pane->getBlack();
	pane                   = m_pic1;
	JGeometry::TBox2f* box = pane->getBounds();
	m_paneBounds.x         = box->i.x;
	m_paneBounds.y         = box->i.y;
	for (int i = 0; i < m_counterLimit; i++) {
		J2DPicture* cPane = m_counters[i]->m_picture;
		if (cPane) {
			JGeometry::TBox2f cBox;
			cBox.i.y = m_paneBounds.y;
			cBox.i.x = (f32)i * (-m_pane12DistX * temp);
			cBox.f.y = cBox.i.y + m_paneSize.y;
			cBox.f.x = cBox.i.x + m_paneBounds.x + m_paneSize.x;
			cBox.i.x += m_paneBounds.x;
			cPane->place(cBox);
			if (!m_isPuyoAnim || _AC) {
				cPane->setBasePosition((J2DBasePosition)m_basePosition);
				cPane->updateScale(temp, m_paneScale.y);
			} else {
				cPane->setBasePosition(POS_CENTER);
				CounterKeta* cKeta = m_counters[i];
				cKeta->_0C         = temp;
				cKeta->_10         = m_paneScale.y;
			}
			cPane->_0B8    = newx;
			cPane->_0BC    = newy;
			cPane->m_angle = ang;
			cPane->calcMtx();
			cPane->setWhite(white);
			cPane->setBlack(black);
		}
	}

	/*
stwu     r1, -0xb0(r1)
mflr     r0
stw      r0, 0xb4(r1)
stfd     f31, 0xa0(r1)
psq_st   f31, 168(r1), 0, qr0
stfd     f30, 0x90(r1)
psq_st   f30, 152(r1), 0, qr0
stfd     f29, 0x80(r1)
psq_st   f29, 136(r1), 0, qr0
stfd     f28, 0x70(r1)
psq_st   f28, 120(r1), 0, qr0
stmw     r23, 0x4c(r1)
mr       r23, r3
mr       r24, r4
lbz      r0, 0x86(r3)
mr       r25, r5
cmplwi   r0, 0
beq      lbl_8032ABAC
li       r0, 0
stw      r0, 0x24(r23)
stw      r0, 0x28(r23)

lbl_8032ABAC:
lwz      r3, 0x24(r23)
bl       CalcKeta__Q22og6ScreenFUl
sth      r3, 0x2c(r23)
lhz      r27, 0x2c(r23)
lhz      r0, 0x30(r23)
cmpw     r27, r0
bge      lbl_8032ABCC
mr       r27, r0

lbl_8032ABCC:
lis      r4, msVal__Q32og6Screen18CallBack_CounterRV@ha
lis      r3, 0xCCCCCCCD@ha
lfd      f28, lbl_8051DF00@sda21(r2)
addi     r29, r4, msVal__Q32og6Screen18CallBack_CounterRV@l
addi     r31, r3, 0xCCCCCCCD@l
li       r26, 0
li       r28, 0
lis      r30, 0x4330
b        lbl_8032ADCC

lbl_8032ABF0:
xoris    r0, r26, 0x8000
stw      r30, 0x30(r1)
lfd      f1, lbl_8051DEE0@sda21(r2)
stw      r0, 0x34(r1)
lfd      f0, 0x30(r1)
fsub     f2, f0, f28
bl       pow
bl       __cvt_fp2unsigned
lwz      r4, 0x24(r23)
lbz      r0, 0x86(r23)
divwu    r3, r4, r3
cmplwi   r0, 0
mulhwu   r0, r31, r3
srwi     r0, r0, 3
mulli    r0, r0, 0xa
subf     r0, r0, r3
clrlwi   r5, r0, 0x10
beq      lbl_8032AC50
lwz      r3, 0x7c(r23)
li       r5, 0xa
lwz      r4, 0x80(r23)
lwzx     r3, r3, r28
bl       setSuji__Q32og6Screen11CounterKetaFPP7ResTIMGUl
b        lbl_8032ACC0

lbl_8032AC50:
lbz      r0, 0x89(r23)
cmplwi   r0, 0
beq      lbl_8032ACB0
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0x34(r1)
lwz      r3, 0x7c(r23)
stw      r0, 0x30(r1)
lfd      f2, lbl_8051DF00@sda21(r2)
lfd      f0, 0x30(r1)
lfs      f1, lbl_8051DEE8@sda21(r2)
fsubs    f2, f0, f2
lfs      f0, lbl_8051DEEC@sda21(r2)
lwzx     r3, r3, r28
lwz      r4, 0x80(r23)
fdivs    f1, f2, f1
fmuls    f0, f0, f1
fctiwz   f0, f0
stfd     f0, 0x38(r1)
lwz      r0, 0x3c(r1)
clrlwi   r5, r0, 0x10
bl       setSuji__Q32og6Screen11CounterKetaFPP7ResTIMGUl
b        lbl_8032ACC0

lbl_8032ACB0:
lwz      r3, 0x7c(r23)
lwz      r4, 0x80(r23)
lwzx     r3, r3, r28
bl       setSuji__Q32og6Screen11CounterKetaFPP7ResTIMGUl

lbl_8032ACC0:
lwz      r3, 0x7c(r23)
lwzx     r3, r3, r28
lwz      r3, 0(r3)
cmplwi   r3, 0
beq      lbl_8032ADC4
cmpw     r26, r27
bge      lbl_8032ADBC
lbz      r0, 0xac(r23)
cmplwi   r0, 0
beq      lbl_8032ACF0
li       r0, 1
stb      r0, 0xb0(r3)

lbl_8032ACF0:
lhz      r0, 0x2c(r23)
addi     r4, r26, 1
cmpw     r4, r0
ble      lbl_8032AD3C
lbz      r0, 0x86(r23)
cmplwi   r0, 0
beq      lbl_8032AD24
lwz      r12, 0(r3)
li       r4, 0xff
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
b        lbl_8032ADAC

lbl_8032AD24:
lwz      r12, 0(r3)
lbz      r4, 0x90(r23)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
b        lbl_8032ADAC

lbl_8032AD3C:
lwz      r12, 0(r3)
li       r4, 0xff
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x7c(r23)
clrlwi.  r0, r24, 0x18
lwzx     r3, r3, r28
lwz      r3, 8(r3)
beq      lbl_8032ADA0
xoris    r4, r26, 0x8000
lis      r0, 0x4330
stw      r4, 0x3c(r1)
lis      r4, msVal__Q32og6Screen18CallBack_CounterRV@ha
lfd      f2, lbl_8051DF00@sda21(r2)
stw      r0, 0x38(r1)
lfs      f4, lbl_8051DEF0@sda21(r2)
lfd      f0, 0x38(r1)
lfs      f1, msVal__Q32og6Screen18CallBack_CounterRV@l(r4)
fsubs    f0, f0, f2
lfs      f2, 4(r29)
lfs      f3, 8(r29)
fmuls    f4, f4, f0
bl       up__Q32og6Screen8ScaleMgrFffff
b        lbl_8032ADAC

lbl_8032ADA0:
clrlwi.  r0, r25, 0x18
beq      lbl_8032ADAC
bl       down__Q32og6Screen8ScaleMgrFv

lbl_8032ADAC:
lwz      r3, 0x7c(r23)
lwzx     r3, r3, r28
bl       calcScale__Q32og6Screen11CounterKetaFv
b        lbl_8032ADC4

lbl_8032ADBC:
li       r0, 0
stb      r0, 0xb0(r3)

lbl_8032ADC4:
addi     r28, r28, 4
addi     r26, r26, 1

lbl_8032ADCC:
lhz      r0, 0x2e(r23)
cmpw     r26, r0
blt      lbl_8032ABF0
lfs      f3, 0x40(r23)
clrlwi   r3, r27, 0x10
cmplw    r3, r0
lfs      f5, lbl_8051DEC8@sda21(r2)
fmr      f28, f3
ble      lbl_8032ADF4
mr       r3, r0

lbl_8032ADF4:
clrlwi   r3, r3, 0x10
cmplwi   r3, 2
blt      lbl_8032AE54
addi     r3, r3, -1
lis      r0, 0x4330
xoris    r3, r3, 0x8000
stw      r0, 0x38(r1)
lfd      f1, lbl_8051DF00@sda21(r2)
stw      r3, 0x3c(r1)
lfs      f2, 0x34(r23)
lfd      f0, 0x38(r1)
lfs      f4, 0x48(r23)
fsubs    f0, f0, f1
lfs      f1, 0x38(r23)
fmadds   f6, f2, f0, f4
fcmpo    cr0, f6, f1
ble      lbl_8032AE54
fmuls    f2, f3, f1
lfs      f1, lbl_8051DEF4@sda21(r2)
lfs      f0, lbl_8051DEF8@sda21(r2)
fmuls    f1, f4, f1
fdivs    f28, f2, f6
fsubs    f0, f0, f28
fmuls    f5, f1, f0

lbl_8032AE54:
lfs      f0, 0x50(r23)
lwz      r3, 0x6c(r23)
lfs      f1, 0x44(r23)
fadds    f29, f0, f5
stfs     f28, 0xcc(r3)
stfs     f1, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x6c(r23)
lfs      f0, 0x54(r23)
stfs     f29, 0xd4(r3)
stfs     f0, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x6c(r23)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r4, 0x6c(r23)
addi     r3, r1, 0x14
lwz      r12, 0(r4)
lfs      f29, 0xc0(r4)
lwz      r12, 0x138(r12)
lfs      f31, 0xb8(r4)
lfs      f30, 0xbc(r4)
mtctr    r12
bctrl
lwz      r4, 0x6c(r23)
addi     r3, r1, 0x10
lwz      r0, 0x14(r1)
lwz      r12, 0(r4)
stw      r0, 0x1c(r1)
lwz      r12, 0x134(r12)
mtctr    r12
bctrl
lwz      r0, 0x10(r1)
lwz      r3, 0x6c(r23)
stw      r0, 0x18(r1)
bl       getBounds__7J2DPaneFv
lfs      f0, 0(r3)
li       r26, 0
li       r25, 0
stfs     f0, 0x58(r23)
lfs      f0, 4(r3)
stfs     f0, 0x5c(r23)
b        lbl_8032B06C

lbl_8032AF20:
lwz      r3, 0x7c(r23)
lwzx     r3, r3, r25
lwz      r24, 0(r3)
cmplwi   r24, 0
beq      lbl_8032B064
xoris    r3, r26, 0x8000
lfs      f0, 0x34(r23)
lis      r0, 0x4330
stw      r3, 0x3c(r1)
fneg     f0, f0
lfd      f3, lbl_8051DF00@sda21(r2)
stw      r0, 0x38(r1)
mr       r3, r24
lfs      f5, 0x58(r23)
addi     r4, r1, 0x20
lfd      f1, 0x38(r1)
fmuls    f2, f0, f28
lfs      f0, 0x48(r23)
fsubs    f3, f1, f3
lfs      f4, 0x5c(r23)
lfs      f1, 0x4c(r23)
fadds    f0, f5, f0
fmuls    f3, f3, f2
stfs     f4, 0x24(r1)
fadds    f2, f4, f1
fadds    f1, f3, f0
fadds    f0, f5, f3
stfs     f2, 0x2c(r1)
stfs     f1, 0x28(r1)
stfs     f0, 0x20(r1)
bl       "place__7J2DPaneFRCQ29JGeometry8TBox2<f>"
lbz      r0, 0x84(r23)
cmplwi   r0, 0
beq      lbl_8032AFD8
lbz      r0, 0xac(r23)
cmplwi   r0, 0
bne      lbl_8032AFD8
mr       r3, r24
li       r4, 4
bl       setBasePosition__7J2DPaneF15J2DBasePosition
lwz      r3, 0x7c(r23)
lfs      f0, 0x44(r23)
lwzx     r3, r3, r25
stfs     f28, 0xc(r3)
stfs     f0, 0x10(r3)
b        lbl_8032B004

lbl_8032AFD8:
lwz      r4, 0x60(r23)
mr       r3, r24
bl       setBasePosition__7J2DPaneF15J2DBasePosition
lfs      f0, 0x44(r23)
mr       r3, r24
stfs     f28, 0xcc(r24)
stfs     f0, 0xd0(r24)
lwz      r12, 0(r24)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl

lbl_8032B004:
stfs     f31, 0xb8(r24)
mr       r3, r24
stfs     f30, 0xbc(r24)
stfs     f29, 0xc0(r24)
lwz      r12, 0(r24)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r0, 0x1c(r1)
mr       r3, r24
addi     r4, r1, 0xc
stw      r0, 0xc(r1)
lwz      r12, 0(r24)
lwz      r12, 0x12c(r12)
mtctr    r12
bctrl
lwz      r0, 0x18(r1)
mr       r3, r24
addi     r4, r1, 8
stw      r0, 8(r1)
lwz      r12, 0(r24)
lwz      r12, 0x128(r12)
mtctr    r12
bctrl

lbl_8032B064:
addi     r25, r25, 4
addi     r26, r26, 1

lbl_8032B06C:
lhz      r0, 0x2e(r23)
cmpw     r26, r0
blt      lbl_8032AF20
psq_l    f31, 168(r1), 0, qr0
lfd      f31, 0xa0(r1)
psq_l    f30, 152(r1), 0, qr0
lfd      f30, 0x90(r1)
psq_l    f29, 136(r1), 0, qr0
lfd      f29, 0x80(r1)
psq_l    f28, 120(r1), 0, qr0
lfd      f28, 0x70(r1)
lmw      r23, 0x4c(r1)
lwz      r0, 0xb4(r1)
mtlr     r0
addi     r1, r1, 0xb0
blr
	*/
}

/*
 * --INFO--
 * Address:	8032B0AC
 * Size:	0001D0
 */
CallBack_CounterSlot* setCallBack_CounterSlot(P2DScreen::Mgr* mgr, u64 tag, u32* data, u16 digit, bool flag1, bool flag2, JKRArchive* arc)
{
	u64 tag1 = maskTag(tag, 1, 1);
	u64 tag2 = maskTag(tag, 1, 2);
	u64 tag3 = tag2;
	u16 a    = 1;

	for (int i = 3; i <= 10; i++) {
		u64 tag4      = maskTag(tag, 1, i);
		J2DPane* pane = mgr->search(tag4);
		if (!pane) {
			a = i - 1;
			break;
		}
		tag3              = tag4;
		pane->m_isVisible = false;
	}

	CallBack_CounterSlot* slot = new CallBack_CounterSlot(const_cast<char**>(SujiTex32), digit, a, arc);
	slot->init(mgr, tag1, tag2, tag3, data, flag2);
	slot->setPuyoAnim(flag1);
	mgr->addCallBack(tag, slot);
	return slot;
}

/*
 * --INFO--
 * Address:	8032B27C
 * Size:	000090
 */
CallBack_CounterSlot::~CallBack_CounterSlot() { }

/*
 * --INFO--
 * Address:	8032B30C
 * Size:	000034
 */
void CallBack_CounterSlot::setValue() { setValue(false, false); }
} // namespace Screen
} // namespace og
