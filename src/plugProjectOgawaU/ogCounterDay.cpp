#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUT/JUTTexture.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen19CallBack_CounterDay
    __vt__Q32og6Screen19CallBack_CounterDay:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen19CallBack_CounterDayFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32og6Screen19CallBack_CounterDayFv
        .4byte
   draw__Q32og6Screen18CallBack_CounterRVFR8GraphicsR14J2DGrafContext .4byte
   doInit__Q29P2DScreen4NodeFv .4byte
   init__Q32og6Screen19CallBack_CounterDayFP9J2DScreenUxUxUxPUlb .4byte
   show__Q32og6Screen19CallBack_CounterDayFv .4byte
   hide__Q32og6Screen19CallBack_CounterDayFv .4byte
   setValue__Q32og6Screen18CallBack_CounterRVFbb .4byte
   setValue__Q32og6Screen19CallBack_CounterDayFv
*/

namespace og {

namespace Screen {

/*
 * --INFO--
 * Address:	8030D2B8
 * Size:	00004C
 */
CallBack_CounterDay::CallBack_CounterDay(char** p1, unsigned short p2, JKRArchive* p3)
    : CallBack_CounterRV(p1, p2, 2, p3)
{
	_A8 = nullptr;
}

/*
 * --INFO--
 * Address:	8030D304
 * Size:	0000EC
 */
void CallBack_CounterDay::init(J2DScreen* p2, unsigned long long p3, unsigned long long p4, unsigned long long p5, unsigned long* p6,
                               bool p7)
{
	_A8 = (J2DPicture*)TagSearch(p2, p5);
	if (_A8 != nullptr) {
		_A8->hide();
		_A8->setBasePosition(POS_CENTER);
	}
	CallBack_CounterRV::init(p2, p3, p4, 0, p6, true);
	setCenteringMode(ECM_Unknown1);
	setValue();
	if (_74 != nullptr) {
		_74->hide();
	}
	_6C->hide();
	_70->hide();
}

/*
 * --INFO--
 * Address:	8030D3F0
 * Size:	000168
 */
void CallBack_CounterDay::setValue()
{
	if (m_isPuyoAnim) {
		bool v1 = false;
		bool v2 = false;
		if (_24 > _28) {
			v1 = true;
		} else if (_24 < _28) {
			v2 = true;
		}
		CallBack_CounterRV::setValue(v1, v2);
	} else {
		CallBack_CounterRV::setValue(false, false);
	}
	J2DPicture* picture = m_counters[0]->m_picture;
	_A8->changeTexture(picture->getTexture(0)->_20, 0);
	if (m_isHidden) {
		_A8->hide();
		picture->hide();
	} else if (_24 >= 10) {
		_A8->hide();
		picture->show();
	} else {
		_A8->show();
		picture->hide();
		picture->centerWithScale(picture->m_scale.x, picture->m_scale.y);
	}
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stfd     f31, 0x20(r1)
psq_st   f31, 40(r1), 0, qr0
stfd     f30, 0x10(r1)
psq_st   f30, 24(r1), 0, qr0
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
lbz      r0, 0x84(r3)
cmplwi   r0, 0
beq      lbl_8030D458
lwz      r3, 0x24(r30)
li       r4, 0
lwz      r0, 0x28(r30)
li       r5, 0
cmplw    r3, r0
ble      lbl_8030D444
li       r4, 1
b        lbl_8030D44C

lbl_8030D444:
bge      lbl_8030D44C
li       r5, 1

lbl_8030D44C:
mr       r3, r30
bl       setValue__Q32og6Screen18CallBack_CounterRVFbb
b        lbl_8030D464

lbl_8030D458:
li       r4, 0
li       r5, 0
bl       setValue__Q32og6Screen18CallBack_CounterRVFbb

lbl_8030D464:
lwz      r3, 0x7c(r30)
li       r4, 0
lwz      r3, 0(r3)
lwz      r31, 0(r3)
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x120(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0xa8(r30)
lwz      r4, 0x20(r4)
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x110(r12)
mtctr    r12
bctrl
lbz      r0, 0x87(r30)
cmplwi   r0, 0
beq      lbl_8030D4C8
lwz      r3, 0xa8(r30)
li       r0, 0
stb      r0, 0xb0(r3)
stb      r0, 0xb0(r31)
b        lbl_8030D530

lbl_8030D4C8:
lwz      r0, 0x24(r30)
cmplwi   r0, 0xa
blt      lbl_8030D4EC
lwz      r3, 0xa8(r30)
li       r4, 0
li       r0, 1
stb      r4, 0xb0(r3)
stb      r0, 0xb0(r31)
b        lbl_8030D530

lbl_8030D4EC:
lwz      r3, 0xa8(r30)
li       r5, 1
li       r0, 0
li       r4, 4
stb      r5, 0xb0(r3)
stb      r0, 0xb0(r31)
lfs      f31, 0xcc(r31)
lfs      f30, 0xd0(r31)
lwz      r3, 0xa8(r30)
bl       setBasePosition__7J2DPaneF15J2DBasePosition
lwz      r3, 0xa8(r30)
stfs     f31, 0xcc(r3)
stfs     f30, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl

lbl_8030D530:
psq_l    f31, 40(r1), 0, qr0
lfd      f31, 0x20(r1)
psq_l    f30, 24(r1), 0, qr0
lfd      f30, 0x10(r1)
lwz      r31, 0xc(r1)
lwz      r0, 0x34(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	8030D558
 * Size:	000040
 */
void CallBack_CounterDay::show()
{
	if (m_isHidden) {
		m_isHidden = false;
		setValue();
	}
}

/*
 * --INFO--
 * Address:	8030D598
 * Size:	00004C
 */
void CallBack_CounterDay::hide()
{
	m_isHidden = true;
	for (int i = 0; i < m_counterLimit; i++) {
		m_counters[i]->m_picture->hide();
	}
	_A8->hide();
}

/*
 * --INFO--
 * Address:	8030D5E4
 * Size:	000040
 */
void CallBack_CounterDay::update()
{
	_28 = _24;
	_24 = *_20;
	setValue();
}

/*
 * --INFO--
 * Address:	8030D624
 * Size:	0000DC
 */
CallBack_CounterDay* setCallBack_CounterDay(P2DScreen::Mgr* p1, unsigned long long p2, unsigned long long p3, unsigned long long p4,
                                            unsigned long* p5, unsigned short p6, JKRArchive* p7)
{
	CallBack_CounterDay* counter = new CallBack_CounterDay(const_cast<char**>(SujiTex32), p6, p7);
	counter->init(p1, p2, p3, p4, p5, true);
	p1->addCallBack(p2, counter);
	return counter;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
CallBack_CounterDay* setCallBack_CounterDay(char**, P2DScreen::Mgr*, unsigned long long, unsigned long long, unsigned long long,
                                            unsigned long*, unsigned short, JKRArchive*)
{
	// UNUSED FUNCTION
}

/*
 * __dt
 * --INFO--
 * Address:	8030D700
 * Size:	000090
 */
CallBack_CounterDay::~CallBack_CounterDay()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_8030D774
lis      r4, __vt__Q32og6Screen19CallBack_CounterDay@ha
addi     r0, r4, __vt__Q32og6Screen19CallBack_CounterDay@l
stw      r0, 0(r30)
beq      lbl_8030D764
lis      r4, __vt__Q32og6Screen18CallBack_CounterRV@ha
addi     r0, r4, __vt__Q32og6Screen18CallBack_CounterRV@l
stw      r0, 0(r30)
beq      lbl_8030D764
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_8030D764
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_8030D764:
extsh.   r0, r31
ble      lbl_8030D774
mr       r3, r30
bl       __dl__FPv

lbl_8030D774:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}
} // namespace Screen
} // namespace og
