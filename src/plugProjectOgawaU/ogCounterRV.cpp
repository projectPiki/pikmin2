#include "types.h"

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	8030B524
	 * Size:	0001E0
	 */
	CallBack_CounterRV::CallBack_CounterRV(char**, unsigned short,
	                                       unsigned short, JKRArchive*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stmw      r26, 0x8(r1)
		  mr        r31, r3
		  mr        r0, r31
		  mr        r27, r4
		  mr        r28, r5
		  mr        r29, r6
		  mr        r30, r7
		  mr        r26, r0
		  bl        0x105E40
		  lis       r3, 0x804D
		  lis       r4, 0x804D
		  addi      r0, r3, 0x7B0C
		  lis       r3, 0x804E
		  stw       r0, 0x0(r26)
		  li        r5, 0
		  rlwinm    r0,r28,0,16,31
		  addi      r4, r4, 0x7F2C
		  stw       r5, 0x18(r26)
		  subi      r3, r3, 0x7E38
		  cmplwi    r0, 0xA
		  stw       r4, 0x0(r26)
		  stw       r3, 0x0(r31)
		  stw       r27, 0x1C(r31)
		  ble-      .loc_0x70
		  li        r28, 0xA

		.loc_0x70:
		  rlwinm    r0,r28,0,16,31
		  cmplwi    r0, 0x2
		  bge-      .loc_0x80
		  li        r28, 0x2

		.loc_0x80:
		  sth       r28, 0x2E(r31)
		  li        r0, 0
		  mr        r4, r30
		  sth       r29, 0x30(r31)
		  stw       r0, 0x20(r31)
		  stw       r0, 0x24(r31)
		  stw       r0, 0x28(r31)
		  lwz       r3, 0x1C(r31)
		  bl        -0x577C
		  stw       r3, 0x80(r31)
		  rlwinm    r3,r28,2,14,29
		  bl        -0x2E7624
		  rlwinm.   r12,r28,0,16,31
		  stw       r3, 0x7C(r31)
		  li        r30, 0
		  ble-      .loc_0x178
		  cmpwi     r12, 0x8
		  subi      r3, r12, 0x8
		  ble-      .loc_0x150
		  addi      r0, r3, 0x7
		  li        r11, 0
		  rlwinm    r0,r0,29,3,31
		  mtctr     r0
		  cmpwi     r3, 0
		  ble-      .loc_0x150

		.loc_0xE4:
		  lwz       r3, 0x7C(r31)
		  li        r10, 0
		  addi      r8, r11, 0x4
		  addi      r7, r11, 0x8
		  stwx      r10, r3, r11
		  addi      r6, r11, 0xC
		  addi      r5, r11, 0x10
		  addi      r4, r11, 0x14
		  lwz       r9, 0x7C(r31)
		  addi      r3, r11, 0x18
		  addi      r0, r11, 0x1C
		  addi      r11, r11, 0x20
		  stwx      r10, r9, r8
		  addi      r30, r30, 0x8
		  lwz       r8, 0x7C(r31)
		  stwx      r10, r8, r7
		  lwz       r7, 0x7C(r31)
		  stwx      r10, r7, r6
		  lwz       r6, 0x7C(r31)
		  stwx      r10, r6, r5
		  lwz       r5, 0x7C(r31)
		  stwx      r10, r5, r4
		  lwz       r4, 0x7C(r31)
		  stwx      r10, r4, r3
		  lwz       r3, 0x7C(r31)
		  stwx      r10, r3, r0
		  bdnz+     .loc_0xE4

		.loc_0x150:
		  sub       r0, r12, r30
		  rlwinm    r5,r30,2,0,29
		  li        r4, 0
		  mtctr     r0
		  cmpw      r30, r12
		  bge-      .loc_0x178

		.loc_0x168:
		  lwz       r3, 0x7C(r31)
		  stwx      r4, r3, r5
		  addi      r5, r5, 0x4
		  bdnz+     .loc_0x168

		.loc_0x178:
		  li        r4, 0
		  li        r0, 0x1
		  stw       r4, 0x6C(r31)
		  mr        r3, r31
		  lfs       f0, -0xCC0(r2)
		  stw       r4, 0x70(r31)
		  stw       r4, 0x74(r31)
		  stb       r4, 0x84(r31)
		  stb       r4, 0x85(r31)
		  stw       r4, 0x78(r31)
		  stb       r4, 0x86(r31)
		  stb       r4, 0x87(r31)
		  stb       r4, 0x88(r31)
		  stb       r4, 0x89(r31)
		  stb       r4, 0x90(r31)
		  stw       r4, 0x8C(r31)
		  stw       r4, 0x94(r31)
		  stw       r4, 0x98(r31)
		  stb       r0, 0x9C(r31)
		  stfs      f0, 0xA4(r31)
		  stfs      f0, 0xA0(r31)
		  lmw       r26, 0x8(r1)
		  lwz       r0, 0x24(r1)
		  mtlr      r0
		  addi      r1, r1, 0x20
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030B704
	 * Size:	000040
	 */
	void CallBack_CounterRV::show(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  lbz       r0, 0x87(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x30
		  li        r0, 0
		  stb       r0, 0x87(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x2C(r12)
		  mtctr     r12
		  bctrl

		.loc_0x30:
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030B744
	 * Size:	000034
	 */
	void CallBack_CounterRV::setValue(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  li        r4, 0
		  li        r5, 0
		  stw       r0, 0x14(r1)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x28(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030B778
	 * Size:	000048
	 */
	void CallBack_CounterRV::hide(void)
	{
		/*
		.loc_0x0:
		  li        r0, 0x1
		  li        r6, 0
		  stb       r0, 0x87(r3)
		  mr        r5, r6
		  li        r7, 0
		  b         .loc_0x38

		.loc_0x18:
		  lwz       r4, 0x7C(r3)
		  lwzx      r4, r4, r6
		  cmplwi    r4, 0
		  beq-      .loc_0x30
		  lwz       r4, 0x0(r4)
		  stb       r5, 0xB0(r4)

		.loc_0x30:
		  addi      r6, r6, 0x4
		  addi      r7, r7, 0x1

		.loc_0x38:
		  lhz       r0, 0x2E(r3)
		  cmpw      r7, r0
		  blt+      .loc_0x18
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030B7C0
	 * Size:	000018
	 */
	void CallBack_CounterRV::getMotherPane(void)
	{
		/*
		.loc_0x0:
		  lbz       r0, 0x88(r3)
		  lwz       r3, 0x78(r3)
		  cmplwi    r0, 0
		  bnelr-
		  li        r3, 0
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030B7D8
	 * Size:	000008
	 */
	void CallBack_CounterRV::setPuyoAnim(bool a1)
	{
		// Generated from stb r4, 0x84(r3)
		_84 = a1;
	}

	/*
	 * --INFO--
	 * Address:	8030B7E0
	 * Size:	000008
	 */
	void CallBack_CounterRV::setPuyoAnimZero(bool a1)
	{
		// Generated from stb r4, 0x85(r3)
		_85 = a1;
	}

	/*
	 * --INFO--
	 * Address:	8030B7E8
	 * Size:	000008
	 */
	void CallBack_CounterRV::setBlind(bool a1)
	{
		// Generated from stb r4, 0x86(r3)
		_86 = a1;
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000008
	 */
	void CallBack_CounterRV::setRandMode(bool)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000018
	 */
	void CallBack_CounterRV::setValPtr(unsigned long*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	8030B7F0
	 * Size:	000008
	 */
	void CallBack_CounterRV::setZeroAlpha(unsigned char a1)
	{
		// Generated from stb r4, 0x90(r3)
		_90 = a1;
	}

	/*
	 * --INFO--
	 * Address:	8030B7F8
	 * Size:	0000E4
	 */
	void CallBack_CounterRV::startPuyoUp(float)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x60(r1)
		  mflr      r0
		  stw       r0, 0x64(r1)
		  stfd      f31, 0x50(r1)
		  psq_st    f31,0x58(r1),0,0
		  stfd      f30, 0x40(r1)
		  psq_st    f30,0x48(r1),0,0
		  stfd      f29, 0x30(r1)
		  psq_st    f29,0x38(r1),0,0
		  stmw      r26, 0x18(r1)
		  mr        r26, r3
		  li        r0, 0x1
		  stb       r0, 0x84(r3)
		  fmr       f29, f1
		  lhz       r4, 0x2C(r3)
		  lhz       r0, 0x2E(r3)
		  cmplw     r4, r0
		  blt-      .loc_0x4C
		  mr        r4, r0

		.loc_0x4C:
		  lis       r3, 0x8051
		  lfs       f30, -0xCBC(r2)
		  lfd       f31, -0xCB8(r2)
		  addi      r30, r3, 0x3C0C
		  rlwinm    r28,r4,0,16,31
		  li        r27, 0
		  li        r29, 0
		  lis       r31, 0x4330
		  b         .loc_0xB0

		.loc_0x70:
		  xoris     r0, r27, 0x8000
		  lwz       r3, 0x7C(r26)
		  stw       r0, 0xC(r1)
		  lwzx      r3, r3, r29
		  stw       r31, 0x8(r1)
		  lwz       r3, 0x8(r3)
		  lfd       f0, 0x8(r1)
		  lfs       f1, 0x0(r30)
		  fsubs     f0, f0, f31
		  lfs       f2, 0x4(r30)
		  lfs       f3, 0x8(r30)
		  fmuls     f0, f30, f0
		  fmuls     f4, f0, f29
		  bl        0x1D63C
		  addi      r29, r29, 0x4
		  addi      r27, r27, 0x1

		.loc_0xB0:
		  cmpw      r27, r28
		  blt+      .loc_0x70
		  psq_l     f31,0x58(r1),0,0
		  lfd       f31, 0x50(r1)
		  psq_l     f30,0x48(r1),0,0
		  lfd       f30, 0x40(r1)
		  psq_l     f29,0x38(r1),0,0
		  lfd       f29, 0x30(r1)
		  lmw       r26, 0x18(r1)
		  lwz       r0, 0x64(r1)
		  mtlr      r0
		  addi      r1, r1, 0x60
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030B8DC
	 * Size:	000008
	 */
	void CallBack_CounterRV::setCenteringMode(
	    (og::Screen::CallBack_CounterRV::EnumCenteringMode))
	{
		/*
		.loc_0x0:
		  stw       r4, 0x8C(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030B8E4
	 * Size:	0004D0
	 */
	void CallBack_CounterRV::init(J2DScreen*, unsigned long long,
	                              unsigned long long, unsigned long long,
	                              unsigned long*, bool)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x30(r1)
		  mflr      r0
		  stw       r0, 0x34(r1)
		  stmw      r22, 0x8(r1)
		  mr        r29, r4
		  lbz       r27, 0x3F(r1)
		  mr        r31, r3
		  lwz       r23, 0x38(r1)
		  mr        r26, r5
		  mr        r25, r6
		  mr        r30, r7
		  mr        r22, r8
		  mr        r24, r9
		  mr        r28, r10
		  stb       r27, 0x88(r3)
		  mr        r3, r29
		  bl        -0x8A78
		  stw       r3, 0x6C(r31)
		  mr        r3, r29
		  mr        r6, r22
		  mr        r5, r30
		  bl        -0x8A8C
		  stw       r3, 0x70(r31)
		  li        r4, 0x4
		  lwz       r3, 0x6C(r31)
		  bl        -0x2D2C8C
		  lwz       r3, 0x70(r31)
		  li        r4, 0x4
		  bl        -0x2D2C98
		  li        r0, 0
		  xor       r3, r28, r0
		  xor       r0, r24, r0
		  or.       r0, r3, r0
		  beq-      .loc_0xA0
		  mr        r3, r29
		  mr        r6, r28
		  mr        r5, r24
		  bl        -0x8ACC
		  stw       r3, 0x74(r31)
		  b         .loc_0xA8

		.loc_0xA0:
		  lwz       r0, 0x70(r31)
		  stw       r0, 0x74(r31)

		.loc_0xA8:
		  stw       r23, 0x20(r31)
		  li        r0, 0
		  lfs       f0, -0xCB0(r2)
		  lwz       r3, 0x0(r23)
		  stw       r3, 0x24(r31)
		  lwz       r3, 0x24(r31)
		  stw       r3, 0x28(r31)
		  lwz       r3, 0x6C(r31)
		  lfs       f1, 0xCC(r3)
		  stfs      f1, 0x40(r31)
		  lwz       r3, 0x6C(r31)
		  lfs       f1, 0xD0(r3)
		  stfs      f1, 0x44(r31)
		  lwz       r3, 0x6C(r31)
		  lfs       f1, 0xD4(r3)
		  stfs      f1, 0x50(r31)
		  lwz       r3, 0x6C(r31)
		  lfs       f1, 0xD8(r3)
		  stfs      f1, 0x54(r31)
		  lwz       r3, 0x6C(r31)
		  lfs       f2, 0x28(r3)
		  lfs       f1, 0x20(r3)
		  fsubs     f1, f2, f1
		  stfs      f1, 0x48(r31)
		  lwz       r3, 0x6C(r31)
		  lfs       f2, 0x2C(r3)
		  lfs       f1, 0x24(r3)
		  fsubs     f1, f2, f1
		  stfs      f1, 0x4C(r31)
		  lwz       r3, 0x6C(r31)
		  lbz       r3, 0xB7(r3)
		  stw       r3, 0x60(r31)
		  lwz       r3, 0x6C(r31)
		  lbz       r3, 0xB2(r3)
		  stb       r3, 0x64(r31)
		  lwz       r3, 0x70(r31)
		  lfs       f2, 0x50(r31)
		  lfs       f1, 0xD4(r3)
		  lwz       r3, 0x6C(r31)
		  fsubs     f1, f2, f1
		  lbz       r30, 0xB4(r3)
		  fabs      f1, f1
		  frsp      f1, f1
		  stfs      f1, 0x34(r31)
		  lwz       r3, 0x74(r31)
		  lfs       f3, 0x50(r31)
		  lfs       f1, 0xD4(r3)
		  lfs       f2, 0x48(r31)
		  fsubs     f1, f3, f1
		  fabs      f1, f1
		  frsp      f1, f1
		  fadds     f1, f2, f1
		  stfs      f1, 0x38(r31)
		  stfs      f0, 0x3C(r31)
		  lwz       r3, 0x6C(r31)
		  stb       r0, 0xB0(r3)
		  lwz       r3, 0x70(r31)
		  stb       r0, 0xB0(r3)
		  lwz       r3, 0x74(r31)
		  stb       r0, 0xB0(r3)
		  lwz       r3, 0x6C(r31)
		  bl        -0x2D29A0
		  mr        r0, r3
		  lwz       r3, 0x6C(r31)
		  mr        r24, r0
		  bl        -0x2D3770
		  mr        r23, r3
		  li        r3, 0x100
		  bl        -0x2E7BF8
		  mr.       r0, r3
		  beq-      .loc_0x1CC
		  bl        -0x2D4FB8
		  mr        r0, r3

		.loc_0x1CC:
		  stw       r0, 0x78(r31)
		  mr        r3, r24
		  lwz       r4, 0x78(r31)
		  bl        -0x2D43F8
		  lwz       r3, 0x6C(r31)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x2C(r12)
		  mtctr     r12
		  bctrl
		  lfs       f0, 0x0(r23)
		  cmplwi    r27, 0
		  stfs      f0, 0x58(r31)
		  lfs       f0, 0x4(r23)
		  stfs      f0, 0x5C(r31)
		  beq-      .loc_0x2C4
		  lis       r4, 0x6963
		  lis       r3, 0x6F
		  addi      r25, r4, 0x5F30
		  li        r27, 0
		  addi      r24, r3, 0x6750
		  li        r26, 0
		  b         .loc_0x2B4

		.loc_0x224:
		  srawi     r0, r27, 0x1F
		  lwz       r3, 0x6C(r31)
		  addc      r6, r27, r25
		  lwz       r4, 0x78(r31)
		  lfs       f1, 0x50(r31)
		  adde      r5, r0, r24
		  lfs       f2, 0x54(r31)
		  bl        0x312C
		  lwz       r4, 0x60(r31)
		  mr        r28, r3
		  bl        -0x2D2E74
		  mr        r3, r28
		  mr        r4, r30
		  li        r5, 0
		  bl        -0x2D2D94
		  li        r3, 0x14
		  bl        -0x2E7CA4
		  mr.       r23, r3
		  beq-      .loc_0x2A4
		  stw       r28, 0x0(r23)
		  li        r0, 0
		  li        r3, 0x1C
		  stw       r0, 0x4(r23)
		  bl        -0x2E7CC0
		  mr.       r0, r3
		  beq-      .loc_0x294
		  bl        0x1D294
		  mr        r0, r3

		.loc_0x294:
		  stw       r0, 0x8(r23)
		  lfs       f0, -0xCB0(r2)
		  stfs      f0, 0xC(r23)
		  stfs      f0, 0x10(r23)

		.loc_0x2A4:
		  lwz       r3, 0x7C(r31)
		  addi      r27, r27, 0x1
		  stwx      r23, r3, r26
		  addi      r26, r26, 0x4

		.loc_0x2B4:
		  lhz       r0, 0x2E(r31)
		  cmpw      r27, r0
		  blt+      .loc_0x224
		  b         .loc_0x498

		.loc_0x2C4:
		  lis       r4, 0x6963
		  lis       r5, 0x6F
		  lwz       r3, 0x6C(r31)
		  addi      r6, r4, 0x5F30
		  lwz       r4, 0x78(r31)
		  addi      r5, r5, 0x6750
		  lfs       f1, 0x50(r31)
		  lfs       f2, 0x54(r31)
		  bl        0x3088
		  lwz       r4, 0x60(r31)
		  mr        r24, r3
		  bl        -0x2D2F18
		  mr        r3, r24
		  mr        r4, r30
		  li        r5, 0
		  bl        -0x2D2E38
		  li        r3, 0x14
		  bl        -0x2E7D48
		  mr.       r23, r3
		  beq-      .loc_0x348
		  stw       r24, 0x0(r23)
		  li        r0, 0
		  li        r3, 0x1C
		  stw       r0, 0x4(r23)
		  bl        -0x2E7D64
		  mr.       r0, r3
		  beq-      .loc_0x338
		  bl        0x1D1F0
		  mr        r0, r3

		.loc_0x338:
		  stw       r0, 0x8(r23)
		  lfs       f0, -0xCB0(r2)
		  stfs      f0, 0xC(r23)
		  stfs      f0, 0x10(r23)

		.loc_0x348:
		  lwz       r3, 0x7C(r31)
		  li        r27, 0x1
		  li        r28, 0x4
		  stw       r23, 0x0(r3)
		  b         .loc_0x3D4

		.loc_0x35C:
		  lwz       r12, 0x0(r29)
		  srawi     r0, r27, 0x1F
		  addc      r6, r25, r27
		  mr        r3, r29
		  lwz       r12, 0x3C(r12)
		  adde      r5, r26, r0
		  mtctr     r12
		  bctrl
		  mr        r23, r3
		  li        r3, 0x14
		  bl        -0x2E7DC4
		  mr.       r24, r3
		  beq-      .loc_0x3C4
		  stw       r23, 0x0(r24)
		  li        r0, 0
		  li        r3, 0x1C
		  stw       r0, 0x4(r24)
		  bl        -0x2E7DE0
		  mr.       r0, r3
		  beq-      .loc_0x3B4
		  bl        0x1D174
		  mr        r0, r3

		.loc_0x3B4:
		  stw       r0, 0x8(r24)
		  lfs       f0, -0xCB0(r2)
		  stfs      f0, 0xC(r24)
		  stfs      f0, 0x10(r24)

		.loc_0x3C4:
		  lwz       r3, 0x7C(r31)
		  addi      r27, r27, 0x1
		  stwx      r24, r3, r28
		  addi      r28, r28, 0x4

		.loc_0x3D4:
		  lhz       r0, 0x30(r31)
		  cmpw      r27, r0
		  blt+      .loc_0x35C
		  lis       r4, 0x6963
		  lis       r3, 0x6F
		  mr        r27, r0
		  rlwinm    r28,r0,2,0,29
		  addi      r29, r4, 0x5F30
		  addi      r26, r3, 0x6750
		  b         .loc_0x48C

		.loc_0x3FC:
		  srawi     r0, r27, 0x1F
		  lwz       r3, 0x6C(r31)
		  addc      r6, r27, r29
		  lwz       r4, 0x78(r31)
		  lfs       f1, 0x50(r31)
		  adde      r5, r0, r26
		  lfs       f2, 0x54(r31)
		  bl        0x2F54
		  lwz       r4, 0x60(r31)
		  mr        r23, r3
		  bl        -0x2D304C
		  mr        r3, r23
		  mr        r4, r30
		  li        r5, 0
		  bl        -0x2D2F6C
		  li        r3, 0x14
		  bl        -0x2E7E7C
		  mr.       r25, r3
		  beq-      .loc_0x47C
		  stw       r23, 0x0(r25)
		  li        r0, 0
		  li        r3, 0x1C
		  stw       r0, 0x4(r25)
		  bl        -0x2E7E98
		  mr.       r0, r3
		  beq-      .loc_0x46C
		  bl        0x1D0BC
		  mr        r0, r3

		.loc_0x46C:
		  stw       r0, 0x8(r25)
		  lfs       f0, -0xCB0(r2)
		  stfs      f0, 0xC(r25)
		  stfs      f0, 0x10(r25)

		.loc_0x47C:
		  lwz       r3, 0x7C(r31)
		  addi      r27, r27, 0x1
		  stwx      r25, r3, r28
		  addi      r28, r28, 0x4

		.loc_0x48C:
		  lhz       r0, 0x2E(r31)
		  cmpw      r27, r0
		  blt+      .loc_0x3FC

		.loc_0x498:
		  li        r0, 0x1
		  mr        r3, r31
		  stb       r0, 0x9C(r31)
		  li        r4, 0
		  li        r5, 0
		  lwz       r12, 0x0(r31)
		  lwz       r12, 0x28(r12)
		  mtctr     r12
		  bctrl
		  lmw       r22, 0x8(r1)
		  lwz       r0, 0x34(r1)
		  mtlr      r0
		  addi      r1, r1, 0x30
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030BDB4
	 * Size:	000220
	 */
	void CallBack_CounterRV::setKetaSub(int, bool, bool)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x50(r1)
		  mflr      r0
		  stw       r0, 0x54(r1)
		  stfd      f31, 0x40(r1)
		  psq_st    f31,0x48(r1),0,0
		  stmw      r24, 0x20(r1)
		  lis       r7, 0xCCCD
		  lfd       f31, -0xCB8(r2)
		  mr        r24, r3
		  mr        r25, r4
		  mr        r26, r5
		  mr        r27, r6
		  subi      r31, r7, 0x3333
		  li        r28, 0
		  li        r29, 0
		  lis       r30, 0x4330
		  b         .loc_0x1F8

		.loc_0x44:
		  xoris     r0, r28, 0x8000
		  stw       r30, 0x8(r1)
		  lfd       f1, -0xCA8(r2)
		  stw       r0, 0xC(r1)
		  lfd       f0, 0x8(r1)
		  fsub      f2, f0, f31
		  bl        -0x23C404
		  bl        -0x24A2C8
		  lwz       r4, 0x24(r24)
		  lbz       r0, 0x86(r24)
		  divwu     r3, r4, r3
		  cmplwi    r0, 0
		  mulhwu    r0, r31, r3
		  rlwinm    r0,r0,29,3,31
		  mulli     r0, r0, 0xA
		  sub       r0, r3, r0
		  rlwinm    r5,r0,0,16,31
		  beq-      .loc_0xA4
		  lwz       r3, 0x7C(r24)
		  li        r5, 0xA
		  lwz       r4, 0x80(r24)
		  lwzx      r3, r3, r29
		  bl        -0x5EF0
		  b         .loc_0x114

		.loc_0xA4:
		  lbz       r0, 0x89(r24)
		  cmplwi    r0, 0
		  beq-      .loc_0x104
		  bl        -0x2428C4
		  xoris     r3, r3, 0x8000
		  lis       r0, 0x4330
		  stw       r3, 0xC(r1)
		  lwz       r3, 0x7C(r24)
		  stw       r0, 0x8(r1)
		  lfd       f2, -0xCB8(r2)
		  lfd       f0, 0x8(r1)
		  lfs       f1, -0xCA0(r2)
		  fsubs     f2, f0, f2
		  lfs       f0, -0xC9C(r2)
		  lwzx      r3, r3, r29
		  lwz       r4, 0x80(r24)
		  fdivs     f1, f2, f1
		  fmuls     f0, f0, f1
		  fctiwz    f0, f0
		  stfd      f0, 0x10(r1)
		  lwz       r0, 0x14(r1)
		  rlwinm    r5,r0,0,16,31
		  bl        -0x5F50
		  b         .loc_0x114

		.loc_0x104:
		  lwz       r3, 0x7C(r24)
		  lwz       r4, 0x80(r24)
		  lwzx      r3, r3, r29
		  bl        -0x5F64

		.loc_0x114:
		  cmpw      r28, r25
		  bge-      .loc_0x1D4
		  lwz       r4, 0x7C(r24)
		  li        r0, 0x1
		  addi      r3, r28, 0x1
		  lwzx      r4, r4, r29
		  lwz       r4, 0x0(r4)
		  stb       r0, 0xB0(r4)
		  lhz       r0, 0x2C(r24)
		  lbz       r4, 0x64(r24)
		  cmpw      r3, r0
		  ble-      .loc_0x154
		  lbz       r0, 0x86(r24)
		  cmplwi    r0, 0
		  bne-      .loc_0x154
		  lbz       r4, 0x90(r24)

		.loc_0x154:
		  lwz       r3, 0x7C(r24)
		  lwzx      r3, r3, r29
		  lwz       r3, 0x0(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x24(r12)
		  mtctr     r12
		  bctrl
		  lhz       r0, 0x2C(r24)
		  addi      r3, r28, 0x1
		  cmpw      r3, r0
		  bgt-      .loc_0x198
		  mr        r3, r24
		  mr        r4, r28
		  mr        r5, r26
		  mr        r6, r27
		  bl        .loc_0x220
		  b         .loc_0x1C4

		.loc_0x198:
		  lbz       r0, 0x86(r24)
		  cmplwi    r0, 0
		  bne-      .loc_0x1C4
		  lbz       r0, 0x85(r24)
		  cmplwi    r0, 0
		  beq-      .loc_0x1C4
		  mr        r3, r24
		  mr        r4, r28
		  mr        r5, r26
		  mr        r6, r27
		  bl        .loc_0x220

		.loc_0x1C4:
		  lwz       r3, 0x7C(r24)
		  lwzx      r3, r3, r29
		  bl        -0x5FD0
		  b         .loc_0x1F0

		.loc_0x1D4:
		  lwz       r3, 0x7C(r24)
		  lwzx      r3, r3, r29
		  lwz       r3, 0x0(r3)
		  cmplwi    r3, 0
		  beq-      .loc_0x1F0
		  li        r0, 0
		  stb       r0, 0xB0(r3)

		.loc_0x1F0:
		  addi      r29, r29, 0x4
		  addi      r28, r28, 0x1

		.loc_0x1F8:
		  lhz       r0, 0x2E(r24)
		  cmpw      r28, r0
		  blt+      .loc_0x44
		  psq_l     f31,0x48(r1),0,0
		  lfd       f31, 0x40(r1)
		  lmw       r24, 0x20(r1)
		  lwz       r0, 0x54(r1)
		  mtlr      r0
		  addi      r1, r1, 0x50
		  blr

		.loc_0x220:
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030BFD4
	 * Size:	0000B0
	 */
	void CallBack_CounterRV::setCounterUpDown(int, bool, bool)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  rlwinm.   r0,r5,0,24,31
		  stw       r31, 0x1C(r1)
		  mr        r31, r3
		  lwz       r5, 0x7C(r3)
		  rlwinm    r3,r4,2,0,29
		  lwzx      r3, r5, r3
		  lwz       r3, 0x8(r3)
		  beq-      .loc_0x7C
		  xoris     r4, r4, 0x8000
		  lis       r0, 0x4330
		  stw       r4, 0xC(r1)
		  lis       r4, 0x8051
		  lfsu      f1, 0x3C0C(r4)
		  stw       r0, 0x8(r1)
		  lfd       f2, -0xCB8(r2)
		  lfd       f0, 0x8(r1)
		  lfs       f4, -0xCBC(r2)
		  fsubs     f0, f0, f2
		  lfs       f2, 0x4(r4)
		  lfs       f3, 0x8(r4)
		  fmuls     f4, f4, f0
		  bl        0x1CEA4
		  lwz       r4, 0x94(r31)
		  cmplwi    r4, 0
		  beq-      .loc_0x9C
		  lwz       r3, -0x6858(r13)
		  bl        0x968
		  b         .loc_0x9C

		.loc_0x7C:
		  rlwinm.   r0,r6,0,24,31
		  beq-      .loc_0x9C
		  bl        0x1CE38
		  lwz       r4, 0x98(r31)
		  cmplwi    r4, 0
		  beq-      .loc_0x9C
		  lwz       r3, -0x6858(r13)
		  bl        0x944

		.loc_0x9C:
		  lwz       r0, 0x24(r1)
		  lwz       r31, 0x1C(r1)
		  mtlr      r0
		  addi      r1, r1, 0x20
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030C084
	 * Size:	0003F8
	 */
	void CallBack_CounterRV::setValue(bool, bool)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x80(r1)
		  mflr      r0
		  stw       r0, 0x84(r1)
		  stfd      f31, 0x70(r1)
		  psq_st    f31,0x78(r1),0,0
		  stfd      f30, 0x60(r1)
		  psq_st    f30,0x68(r1),0,0
		  stfd      f29, 0x50(r1)
		  psq_st    f29,0x58(r1),0,0
		  stw       r31, 0x4C(r1)
		  stw       r30, 0x48(r1)
		  stw       r29, 0x44(r1)
		  stw       r28, 0x40(r1)
		  mr        r31, r3
		  mr        r30, r4
		  lbz       r0, 0x87(r3)
		  mr        r28, r5
		  cmplwi    r0, 0
		  bne-      .loc_0x3C0
		  lbz       r0, 0x86(r31)
		  cmplwi    r0, 0
		  beq-      .loc_0x64
		  li        r0, 0
		  stw       r0, 0x24(r31)
		  stw       r0, 0x28(r31)

		.loc_0x64:
		  lwz       r3, 0x24(r31)
		  bl        -0x972C
		  sth       r3, 0x2C(r31)
		  lhz       r29, 0x2C(r31)
		  lhz       r0, 0x30(r31)
		  cmpw      r29, r0
		  bge-      .loc_0x84
		  mr        r29, r0

		.loc_0x84:
		  mr        r3, r31
		  mr        r4, r29
		  mr        r5, r30
		  mr        r6, r28
		  bl        -0x364
		  lhz       r0, 0x2E(r31)
		  rlwinm    r3,r29,0,16,31
		  cmplw     r3, r0
		  ble-      .loc_0xAC
		  mr        r3, r0

		.loc_0xAC:
		  lfs       f0, -0xCC0(r2)
		  rlwinm    r3,r3,0,16,31
		  lfs       f4, -0xCB0(r2)
		  cmplwi    r3, 0x2
		  stfs      f0, 0xA4(r31)
		  stfs      f4, 0x3C(r31)
		  blt-      .loc_0x124
		  subi      r3, r3, 0x1
		  lis       r0, 0x4330
		  xoris     r3, r3, 0x8000
		  stw       r0, 0x30(r1)
		  lfd       f2, -0xCB8(r2)
		  stw       r3, 0x34(r1)
		  lfs       f3, 0x34(r31)
		  lfd       f1, 0x30(r1)
		  lfs       f0, 0x48(r31)
		  fsubs     f1, f1, f2
		  lfs       f2, 0x38(r31)
		  fmadds    f0, f3, f1, f0
		  fcmpo     cr0, f0, f2
		  ble-      .loc_0x124
		  fdivs     f0, f2, f0
		  lfs       f1, -0xC98(r2)
		  stfs      f0, 0x3C(r31)
		  lfs       f2, 0x48(r31)
		  lfs       f0, 0x3C(r31)
		  fmuls     f1, f2, f1
		  fsubs     f0, f4, f0
		  fmuls     f0, f1, f0
		  stfs      f0, 0xA4(r31)

		.loc_0x124:
		  lwz       r4, 0x6C(r31)
		  addi      r3, r1, 0x14
		  lwz       r12, 0x0(r4)
		  lfs       f31, 0xB8(r4)
		  lwz       r12, 0x138(r12)
		  lfs       f30, 0xBC(r4)
		  lfs       f29, 0xC0(r4)
		  mtctr     r12
		  bctrl
		  lwz       r4, 0x6C(r31)
		  addi      r3, r1, 0x10
		  lwz       r0, 0x14(r1)
		  lwz       r12, 0x0(r4)
		  stw       r0, 0x1C(r1)
		  lwz       r12, 0x134(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x10(r1)
		  lwz       r3, 0x6C(r31)
		  stw       r0, 0x18(r1)
		  bl        -0x2D3ED8
		  lfs       f1, 0x0(r3)
		  lfs       f0, -0xCC0(r2)
		  stfs      f1, 0x58(r31)
		  lfs       f1, 0x4(r3)
		  stfs      f1, 0x5C(r31)
		  stfs      f0, 0xA0(r31)
		  lwz       r0, 0x8C(r31)
		  cmpwi     r0, 0x1
		  bne-      .loc_0x1F8
		  lhz       r0, 0x2C(r31)
		  lhz       r3, 0x30(r31)
		  cmplw     r0, r3
		  bge-      .loc_0x1EC
		  sub       r3, r3, r0
		  lis       r0, 0x4330
		  xoris     r3, r3, 0x8000
		  stw       r0, 0x30(r1)
		  lfd       f1, -0xCB8(r2)
		  stw       r3, 0x34(r1)
		  lfs       f2, 0x34(r31)
		  lfd       f0, 0x30(r1)
		  lfs       f3, 0x3C(r31)
		  fsubs     f1, f0, f1
		  lfs       f0, -0xC98(r2)
		  fmuls     f1, f2, f1
		  fmuls     f1, f3, f1
		  fneg      f1, f1
		  fmuls     f0, f1, f0
		  stfs      f0, 0xA0(r31)

		.loc_0x1EC:
		  li        r0, 0
		  stb       r0, 0x90(r31)
		  b         .loc_0x250

		.loc_0x1F8:
		  cmpwi     r0, 0x2
		  bne-      .loc_0x250
		  lhz       r0, 0x2C(r31)
		  lhz       r3, 0x30(r31)
		  cmplw     r0, r3
		  bge-      .loc_0x248
		  sub       r3, r3, r0
		  lis       r0, 0x4330
		  neg       r3, r3
		  stw       r0, 0x30(r1)
		  xoris     r0, r3, 0x8000
		  lfd       f1, -0xCB8(r2)
		  stw       r0, 0x34(r1)
		  lfs       f2, 0x34(r31)
		  lfd       f0, 0x30(r1)
		  lfs       f3, 0x3C(r31)
		  fsubs     f0, f0, f1
		  fmuls     f0, f2, f0
		  fmuls     f0, f3, f0
		  stfs      f0, 0xA0(r31)

		.loc_0x248:
		  li        r0, 0
		  stb       r0, 0x90(r31)

		.loc_0x250:
		  li        r28, 0
		  li        r29, 0
		  b         .loc_0x3B4

		.loc_0x25C:
		  lwz       r3, 0x7C(r31)
		  lwzx      r3, r3, r29
		  lwz       r30, 0x0(r3)
		  cmplwi    r30, 0
		  beq-      .loc_0x3AC
		  xoris     r3, r28, 0x8000
		  lfs       f0, 0x34(r31)
		  lis       r0, 0x4330
		  stw       r3, 0x34(r1)
		  fneg      f1, f0
		  lfs       f0, 0x3C(r31)
		  stw       r0, 0x30(r1)
		  mr        r3, r30
		  lfd       f4, -0xCB8(r2)
		  addi      r4, r1, 0x20
		  lfd       f3, 0x30(r1)
		  fmuls     f2, f1, f0
		  lfs       f1, 0xA0(r31)
		  fsubs     f3, f3, f4
		  lfs       f4, 0xA4(r31)
		  lfs       f5, 0x58(r31)
		  lfs       f0, 0x48(r31)
		  fmadds    f2, f3, f2, f1
		  lfs       f3, 0x5C(r31)
		  lfs       f1, 0x4C(r31)
		  fadds     f0, f5, f0
		  fadds     f4, f4, f2
		  stfs      f3, 0x24(r1)
		  fadds     f2, f3, f1
		  fadds     f1, f4, f0
		  fadds     f0, f5, f4
		  stfs      f2, 0x2C(r1)
		  stfs      f1, 0x28(r1)
		  stfs      f0, 0x20(r1)
		  bl        -0x2D4430
		  lbz       r0, 0x84(r31)
		  cmplwi    r0, 0
		  beq-      .loc_0x31C
		  mr        r3, r30
		  li        r4, 0x4
		  bl        -0x2D36C4
		  lwz       r3, 0x7C(r31)
		  lfs       f1, 0x44(r31)
		  lwzx      r3, r3, r29
		  lfs       f0, 0x3C(r31)
		  stfs      f0, 0xC(r3)
		  stfs      f1, 0x10(r3)
		  b         .loc_0x34C

		.loc_0x31C:
		  lwz       r4, 0x60(r31)
		  mr        r3, r30
		  bl        -0x2D36EC
		  lfs       f1, 0x44(r31)
		  mr        r3, r30
		  lfs       f0, 0x3C(r31)
		  stfs      f0, 0xCC(r30)
		  stfs      f1, 0xD0(r30)
		  lwz       r12, 0x0(r30)
		  lwz       r12, 0x2C(r12)
		  mtctr     r12
		  bctrl

		.loc_0x34C:
		  stfs      f31, 0xB8(r30)
		  mr        r3, r30
		  stfs      f30, 0xBC(r30)
		  stfs      f29, 0xC0(r30)
		  lwz       r12, 0x0(r30)
		  lwz       r12, 0x2C(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x1C(r1)
		  mr        r3, r30
		  addi      r4, r1, 0xC
		  stw       r0, 0xC(r1)
		  lwz       r12, 0x0(r30)
		  lwz       r12, 0x12C(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x18(r1)
		  mr        r3, r30
		  addi      r4, r1, 0x8
		  stw       r0, 0x8(r1)
		  lwz       r12, 0x0(r30)
		  lwz       r12, 0x128(r12)
		  mtctr     r12
		  bctrl

		.loc_0x3AC:
		  addi      r29, r29, 0x4
		  addi      r28, r28, 0x1

		.loc_0x3B4:
		  lhz       r0, 0x2E(r31)
		  cmpw      r28, r0
		  blt+      .loc_0x25C

		.loc_0x3C0:
		  psq_l     f31,0x78(r1),0,0
		  lfd       f31, 0x70(r1)
		  psq_l     f30,0x68(r1),0,0
		  lfd       f30, 0x60(r1)
		  psq_l     f29,0x58(r1),0,0
		  lfd       f29, 0x50(r1)
		  lwz       r31, 0x4C(r1)
		  lwz       r30, 0x48(r1)
		  lwz       r29, 0x44(r1)
		  lwz       r0, 0x84(r1)
		  lwz       r28, 0x40(r1)
		  mtlr      r0
		  addi      r1, r1, 0x80
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030C47C
	 * Size:	0000B0
	 */
	void CallBack_CounterRV::update(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  li        r4, 0
		  li        r5, 0
		  stw       r0, 0x14(r1)
		  lbz       r0, 0x9C(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x40
		  li        r0, 0
		  stb       r0, 0x9C(r3)
		  lwz       r6, 0x20(r3)
		  lwz       r0, 0x0(r6)
		  stw       r0, 0x24(r3)
		  lwz       r0, 0x24(r3)
		  stw       r0, 0x28(r3)
		  b         .loc_0x90

		.loc_0x40:
		  lbz       r0, 0x86(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x5C
		  li        r0, 0
		  stw       r0, 0x24(r3)
		  stw       r0, 0x28(r3)
		  b         .loc_0x90

		.loc_0x5C:
		  lwz       r0, 0x24(r3)
		  stw       r0, 0x28(r3)
		  lwz       r6, 0x20(r3)
		  lwz       r0, 0x0(r6)
		  stw       r0, 0x24(r3)
		  lwz       r6, 0x24(r3)
		  lwz       r0, 0x28(r3)
		  cmplw     r6, r0
		  ble-      .loc_0x88
		  li        r4, 0x1
		  b         .loc_0x90

		.loc_0x88:
		  bge-      .loc_0x90
		  li        r5, 0x1

		.loc_0x90:
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x28(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030C52C
	 * Size:	000004
	 */
	void CallBack_CounterRV::draw(Graphics&, J2DGrafContext&) { }

	/*
	 * --INFO--
	 * Address:	8030C530
	 * Size:	0000D8
	 */
	void setCallBack_CounterRV(P2DScreen::Mgr*, unsigned long long,
	                           unsigned long long, unsigned long long,
	                           unsigned long*, unsigned short, unsigned short,
	                           bool, JKRArchive*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x50(r1)
		  mflr      r0
		  stw       r0, 0x54(r1)
		  stmw      r19, 0x1C(r1)
		  mr        r24, r3
		  lwz       r31, 0x58(r1)
		  mr        r26, r5
		  lhz       r19, 0x5E(r1)
		  mr        r25, r6
		  lhz       r20, 0x62(r1)
		  mr        r28, r7
		  lbz       r21, 0x67(r1)
		  mr        r27, r8
		  lwz       r22, 0x68(r1)
		  mr        r30, r9
		  mr        r29, r10
		  li        r3, 0xA8
		  bl        -0x2E86D0
		  mr.       r23, r3
		  beq-      .loc_0x6C
		  lis       r4, 0x804D
		  mr        r5, r19
		  addi      r4, r4, 0x7E18
		  mr        r6, r20
		  mr        r7, r22
		  bl        -0x1070
		  mr        r23, r3

		.loc_0x6C:
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
		  stb       r21, 0x84(r23)
		  mr        r3, r24
		  mr        r6, r25
		  mr        r5, r26
		  mr        r7, r23
		  bl        0x128538
		  mr        r3, r23
		  lmw       r19, 0x1C(r1)
		  lwz       r0, 0x54(r1)
		  mtlr      r0
		  addi      r1, r1, 0x50
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030C608
	 * Size:	00017C
	 */
	void setCallBack_CounterRV(P2DScreen::Mgr*, unsigned long long,
	                           unsigned long*, unsigned short, bool, bool,
	                           JKRArchive*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x60(r1)
		  mflr      r0
		  stw       r0, 0x64(r1)
		  stmw      r14, 0x18(r1)
		  mr        r16, r6
		  mr        r17, r5
		  mr        r15, r3
		  lwz       r21, 0x68(r1)
		  mr        r18, r7
		  stb       r10, 0x10(r1)
		  mr        r19, r8
		  mr        r20, r9
		  mr        r4, r16
		  mr        r3, r17
		  li        r5, 0x1
		  li        r6, 0x1
		  bl        -0x9D28
		  mr        r30, r4
		  mr        r14, r3
		  mr        r4, r16
		  mr        r3, r17
		  li        r5, 0x1
		  li        r6, 0x2
		  bl        -0x9D44
		  mr        r28, r4
		  mr        r29, r3
		  li        r25, 0x1
		  li        r24, 0x3
		  mr        r26, r28
		  li        r31, 0
		  mr        r27, r29

		.loc_0x7C:
		  mr        r4, r16
		  mr        r3, r17
		  rlwinm    r6,r24,0,16,31
		  li        r5, 0x1
		  bl        -0x9D74
		  lwz       r12, 0x0(r15)
		  mr        r0, r3
		  mr        r22, r4
		  mr        r3, r15
		  lwz       r12, 0x3C(r12)
		  mr        r23, r0
		  mr        r6, r22
		  mr        r5, r23
		  mtctr     r12
		  bctrl
		  cmplwi    r3, 0
		  bne-      .loc_0xCC
		  subi      r0, r24, 0x1
		  rlwinm    r25,r0,0,16,31
		  b         .loc_0xE4

		.loc_0xCC:
		  addi      r24, r24, 0x1
		  stb       r31, 0xB0(r3)
		  cmpwi     r24, 0xA
		  mr        r26, r22
		  mr        r27, r23
		  ble+      .loc_0x7C

		.loc_0xE4:
		  li        r3, 0xA8
		  bl        -0x2E884C
		  mr.       r22, r3
		  beq-      .loc_0x110
		  lis       r4, 0x804D
		  mr        r5, r19
		  addi      r4, r4, 0x7E18
		  mr        r6, r25
		  mr        r7, r21
		  bl        -0x11EC
		  mr        r22, r3

		.loc_0x110:
		  stw       r18, 0x8(r1)
		  mr        r3, r22
		  lbz       r0, 0x10(r1)
		  mr        r4, r15
		  mr        r6, r30
		  mr        r5, r14
		  stw       r0, 0xC(r1)
		  mr        r8, r28
		  mr        r7, r29
		  mr        r10, r26
		  lwz       r12, 0x0(r22)
		  mr        r9, r27
		  lwz       r12, 0x1C(r12)
		  mtctr     r12
		  bctrl
		  stb       r20, 0x84(r22)
		  mr        r3, r15
		  mr        r6, r16
		  mr        r5, r17
		  mr        r7, r22
		  bl        0x1283BC
		  mr        r3, r22
		  lmw       r14, 0x18(r1)
		  lwz       r0, 0x64(r1)
		  mtlr      r0
		  addi      r1, r1, 0x60
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000170
	 */
	void setCallBack_CounterRV2(P2DScreen::Mgr*, unsigned long long,
	                            unsigned long*, unsigned short, bool, bool,
	                            JKRArchive*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	8030C784
	 * Size:	00018C
	 */
	void setCallBack_CounterRV(P2DScreen::Mgr*, unsigned long long,
	                           unsigned long, unsigned short, bool, bool,
	                           JKRArchive*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x60(r1)
		  mflr      r0
		  stw       r0, 0x64(r1)
		  stmw      r14, 0x18(r1)
		  mr        r15, r3
		  lwz       r20, 0x68(r1)
		  mr        r17, r5
		  stb       r10, 0x10(r1)
		  mr        r16, r6
		  mr        r14, r7
		  mr        r18, r8
		  mr        r19, r9
		  li        r3, 0x4
		  bl        -0x2E8914
		  mr.       r30, r3
		  beq-      .loc_0x44
		  stw       r14, 0x0(r30)

		.loc_0x44:
		  mr        r4, r16
		  mr        r3, r17
		  li        r5, 0x1
		  li        r6, 0x1
		  bl        -0x9EB8
		  mr        r21, r4
		  mr        r14, r3
		  mr        r4, r16
		  mr        r3, r17
		  li        r5, 0x1
		  li        r6, 0x2
		  bl        -0x9ED4
		  mr        r22, r4
		  mr        r23, r3
		  li        r26, 0x1
		  li        r27, 0x3
		  mr        r24, r22
		  li        r31, 0
		  mr        r25, r23

		.loc_0x90:
		  mr        r4, r16
		  mr        r3, r17
		  rlwinm    r6,r27,0,16,31
		  li        r5, 0x1
		  bl        -0x9F04
		  lwz       r12, 0x0(r15)
		  mr        r29, r3
		  mr        r28, r4
		  mr        r3, r15
		  lwz       r12, 0x3C(r12)
		  mr        r6, r28
		  mr        r5, r29
		  mtctr     r12
		  bctrl
		  cmplwi    r3, 0
		  bne-      .loc_0xDC
		  subi      r0, r27, 0x1
		  rlwinm    r26,r0,0,16,31
		  b         .loc_0xF4

		.loc_0xDC:
		  addi      r27, r27, 0x1
		  stb       r31, 0xB0(r3)
		  cmpwi     r27, 0xA
		  mr        r24, r28
		  mr        r25, r29
		  ble+      .loc_0x90

		.loc_0xF4:
		  li        r3, 0xA8
		  bl        -0x2E89D8
		  mr.       r27, r3
		  beq-      .loc_0x120
		  lis       r4, 0x804D
		  mr        r5, r18
		  addi      r4, r4, 0x7E18
		  mr        r6, r26
		  mr        r7, r20
		  bl        -0x1378
		  mr        r27, r3

		.loc_0x120:
		  stw       r30, 0x8(r1)
		  mr        r3, r27
		  lbz       r0, 0x10(r1)
		  mr        r4, r15
		  mr        r6, r21
		  mr        r5, r14
		  stw       r0, 0xC(r1)
		  mr        r8, r22
		  mr        r7, r23
		  mr        r10, r24
		  lwz       r12, 0x0(r27)
		  mr        r9, r25
		  lwz       r12, 0x1C(r12)
		  mtctr     r12
		  bctrl
		  stb       r19, 0x84(r27)
		  mr        r3, r15
		  mr        r6, r16
		  mr        r5, r17
		  mr        r7, r27
		  bl        0x128230
		  mr        r3, r27
		  lmw       r14, 0x18(r1)
		  lwz       r0, 0x64(r1)
		  mtlr      r0
		  addi      r1, r1, 0x60
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030C910
	 * Size:	000080
	 */
	CallBack_CounterRV::~CallBack_CounterRV(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r4
		  stw       r30, 0x8(r1)
		  mr.       r30, r3
		  beq-      .loc_0x64
		  lis       r4, 0x804E
		  subi      r0, r4, 0x7E38
		  stw       r0, 0x0(r30)
		  beq-      .loc_0x54
		  lis       r4, 0x804D
		  addi      r0, r4, 0x7F2C
		  stw       r0, 0x0(r30)
		  beq-      .loc_0x54
		  lis       r5, 0x804D
		  li        r4, 0
		  addi      r0, r5, 0x7B0C
		  stw       r0, 0x0(r30)
		  bl        0x104C28

		.loc_0x54:
		  extsh.    r0, r31
		  ble-      .loc_0x64
		  mr        r3, r30
		  bl        -0x2E88BC

		.loc_0x64:
		  lwz       r0, 0x14(r1)
		  mr        r3, r30
		  lwz       r31, 0xC(r1)
		  lwz       r30, 0x8(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

} // namespace Screen

} // namespace og

/*
 * --INFO--
 * Address:	8030C990
 * Size:	000020
 */
void __sinit_ogCounterRV_cpp(void)
{
	/*
	.loc_0x0:
	  lfs       f2, -0xC98(r2)
	  lis       r3, 0x8051
	  lfs       f1, -0xC94(r2)
	  stfsu     f2, 0x3C0C(r3)
	  lfs       f0, -0xC90(r2)
	  stfs      f1, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
