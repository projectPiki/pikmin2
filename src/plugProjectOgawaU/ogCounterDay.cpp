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
	CallBack_CounterDay::CallBack_CounterDay(char**, unsigned short,
	                                         JKRArchive*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  mr        r7, r6
		  li        r6, 0x2
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  bl        -0x1DB0
		  lis       r3, 0x804E
		  li        r0, 0
		  subi      r4, r3, 0x7E08
		  mr        r3, r31
		  stw       r4, 0x0(r31)
		  stw       r0, 0xA8(r31)
		  lwz       r31, 0xC(r1)
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030D304
	 * Size:	0000EC
	 */
	void CallBack_CounterDay::init(J2DScreen*, unsigned long long,
	                               unsigned long long, unsigned long long,
	                               unsigned long*, bool)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x30(r1)
		  mflr      r0
		  stw       r0, 0x34(r1)
		  stmw      r25, 0x14(r1)
		  mr        r28, r5
		  mr        r27, r6
		  mr        r26, r4
		  mr        r25, r3
		  lwz       r31, 0x38(r1)
		  mr        r30, r7
		  mr        r29, r8
		  mr        r3, r26
		  mr        r6, r10
		  mr        r5, r9
		  bl        -0xA490
		  stw       r3, 0xA8(r25)
		  lwz       r3, 0xA8(r25)
		  cmplwi    r3, 0
		  beq-      .loc_0x60
		  li        r0, 0
		  li        r4, 0x4
		  stb       r0, 0xB0(r3)
		  lwz       r3, 0xA8(r25)
		  bl        -0x2D46A4

		.loc_0x60:
		  stw       r31, 0x8(r1)
		  li        r0, 0x1
		  mr        r3, r25
		  mr        r4, r26
		  stw       r0, 0xC(r1)
		  mr        r6, r27
		  mr        r5, r28
		  mr        r8, r29
		  mr        r7, r30
		  li        r10, 0
		  li        r9, 0
		  bl        -0x1AAC
		  mr        r3, r25
		  li        r4, 0x1
		  bl        -0x1AC0
		  mr        r3, r25
		  lwz       r12, 0x0(r25)
		  lwz       r12, 0x2C(r12)
		  mtctr     r12
		  bctrl
		  lwz       r3, 0x74(r25)
		  cmplwi    r3, 0
		  beq-      .loc_0xC4
		  li        r0, 0
		  stb       r0, 0xB0(r3)

		.loc_0xC4:
		  lwz       r3, 0x6C(r25)
		  li        r0, 0
		  stb       r0, 0xB0(r3)
		  lwz       r3, 0x70(r25)
		  stb       r0, 0xB0(r3)
		  lmw       r25, 0x14(r1)
		  lwz       r0, 0x34(r1)
		  mtlr      r0
		  addi      r1, r1, 0x30
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030D3F0
	 * Size:	000168
	 */
	void CallBack_CounterDay::setValue(void)
	{
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
	void CallBack_CounterDay::show(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x87(r3)
	cmplwi   r0, 0
	beq      lbl_8030D588
	li       r0, 0
	stb      r0, 0x87(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8030D588:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030D598
	 * Size:	00004C
	 */
	void CallBack_CounterDay::hide(void)
	{
		/*
	li       r0, 1
	li       r6, 0
	stb      r0, 0x87(r3)
	mr       r5, r6
	li       r7, 0
	b        lbl_8030D5C8

lbl_8030D5B0:
	lwz      r4, 0x7c(r3)
	addi     r7, r7, 1
	lwzx     r4, r4, r6
	addi     r6, r6, 4
	lwz      r4, 0(r4)
	stb      r5, 0xb0(r4)

lbl_8030D5C8:
	lhz      r0, 0x2e(r3)
	cmpw     r7, r0
	blt      lbl_8030D5B0
	lwz      r3, 0xa8(r3)
	li       r0, 0
	stb      r0, 0xb0(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030D5E4
	 * Size:	000040
	 */
	void CallBack_CounterDay::update(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x24(r3)
	stw      r0, 0x28(r3)
	lwz      r4, 0x20(r3)
	lwz      r0, 0(r4)
	stw      r0, 0x24(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030D624
	 * Size:	0000DC
	 */
	void setCallBack_CounterDay(P2DScreen::Mgr*, unsigned long long,
	                            unsigned long long, unsigned long long,
	                            unsigned long*, unsigned short, JKRArchive*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x40(r1)
		  mflr      r0
		  stw       r0, 0x44(r1)
		  stmw      r21, 0x14(r1)
		  mr        r24, r3
		  lwz       r31, 0x48(r1)
		  mr        r26, r5
		  lhz       r21, 0x4E(r1)
		  mr        r25, r6
		  lwz       r22, 0x50(r1)
		  mr        r28, r7
		  mr        r27, r8
		  mr        r30, r9
		  mr        r29, r10
		  li        r3, 0xAC
		  bl        -0x2E97BC
		  mr.       r23, r3
		  beq-      .loc_0x74
		  lis       r4, 0x804D
		  mr        r5, r21
		  addi      r4, r4, 0x7E18
		  mr        r7, r22
		  li        r6, 0x2
		  bl        -0x215C
		  lis       r3, 0x804E
		  li        r0, 0
		  subi      r3, r3, 0x7E08
		  stw       r3, 0x0(r23)
		  stw       r0, 0xA8(r23)

		.loc_0x74:
		  stw       r31, 0x8(r1)
		  li        r0, 0x1
		  mr        r3, r23
		  mr        r4, r24
		  stw       r0, 0xC(r1)
		  mr        r6, r25
		  mr        r5, r26
		  mr        r8, r27
		  lwz       r12, 0x0(r23)
		  mr        r7, r28
		  mr        r10, r29
		  mr        r9, r30
		  lwz       r12, 0x1C(r12)
		  mtctr     r12
		  bctrl
		  mr        r3, r24
		  mr        r6, r25
		  mr        r5, r26
		  mr        r7, r23
		  bl        0x127440
		  mr        r3, r23
		  lmw       r21, 0x14(r1)
		  lwz       r0, 0x44(r1)
		  mtlr      r0
		  addi      r1, r1, 0x40
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	0000DC
	 */
	void setCallBack_CounterDay(char**, P2DScreen::Mgr*, unsigned long long,
	                            unsigned long long, unsigned long long,
	                            unsigned long*, unsigned short, JKRArchive*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	8030D700
	 * Size:	000090
	 */
	CallBack_CounterDay::~CallBack_CounterDay(void)
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
