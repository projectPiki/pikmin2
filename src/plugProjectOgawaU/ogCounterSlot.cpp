#include "og/Screen/callbackNodes.h"
#include "System.h"
#include "og/Sound.h"
#include "og/Screen/ogScreen.h"
#include "Dolphin/rand.h"
#include "Dolphin/math.h"

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
				pane->show();
			} else {
				pane->hide();
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
				hidePicture(i);
			}
		}
	}
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
	if (counts < _30) {
		counts = _30;
	}

	for (int i = 0; i < m_counterLimit; i++) {
		u32 power   = pow(10.0f, (f64)i);
		u16 sujiVal = (m_initialDisplayValue / power) % 10;
		if (m_isBlind) {
			m_counters[i]->setSuji(m_imgResources, 10);
		} else {
			if (_89) {
				m_counters[i]->setSuji(m_imgResources, (u16)(randFloat() * 9.0f));
			} else {
				m_counters[i]->setSuji(m_imgResources, sujiVal);
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
						keta->setAlpha(255);
					} else {
						keta->setAlpha(m_zeroAlpha);
					}
				} else {
					keta->setAlpha(255);
					ScaleMgr* smgr = m_counters[i]->m_scaleMgr;
					if (flag1) {
						smgr->up(msVal._00, msVal._04, msVal._08, 0.025f * i);
					} else if (flag2) {
						smgr->down();
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

	u16 changedCounts = counts;
	if (changedCounts > m_counterLimit) {
		changedCounts = m_counterLimit;
	}

	if (changedCounts >= 2) {
		f32 temp2 = m_pane12DistX * (f32)(changedCounts - 1) + m_paneSize.x;
		if (temp2 > m_pane13DistX) {
			temp  = (m_paneScale.x * m_pane13DistX) / temp2;
			temp3 = m_paneSize.x / 2 * (1.0f - temp);
		}
	}
	f32 xVal = m_panePosition.x + temp3;
	m_pic1->updateScale(temp, m_paneScale.y);
	m_pic1->setOffset(xVal, m_panePosition.y);
	m_pic1->calcMtx();

	f32 ang                = m_pic1->m_angle;
	f32 newx               = m_pic1->_0B8;
	f32 newy               = m_pic1->_0BC;
	JUtility::TColor white = m_pic1->getWhite();
	JUtility::TColor black = m_pic1->getBlack();
	JGeometry::TBox2f* box = m_pic1->getBounds();
	m_paneBounds.x         = box->i.x;
	m_paneBounds.y         = box->i.y;

	for (int i = 0; i < m_counterLimit; i++) {
		J2DPicture* cPane = m_counters[i]->m_picture;
		if (cPane) {
			f32 boxVal = (f32)i * (-m_pane12DistX * temp);
			JGeometry::TBox2f cBox(boxVal + m_paneBounds.x, m_paneBounds.y, boxVal + (m_paneBounds.x + m_paneSize.x),
			                       m_paneBounds.y + m_paneSize.y);
			cPane->place(cBox);

			if (m_isPuyoAnim && !_AC) {
				cPane->setBasePosition(POS_CENTER);
				CounterKeta* cKeta = m_counters[i];
				cKeta->m_size      = Vector2f(temp, m_paneScale.y);

			} else {
				cPane->setBasePosition((J2DBasePosition)m_basePosition);
				cPane->updateScale(temp, m_paneScale.y);
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
		tag3 = tag4;
		pane->hide();
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
