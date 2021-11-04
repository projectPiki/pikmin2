#include "types.h"

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	0000B4
	 */
	CallBack_Furiko::CallBack_Furiko(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80329F18
	 * Size:	000040
	 */
	void CallBack_Furiko::stop(void)
	{
		/*
		.loc_0x0:
		  li        r4, 0
		  li        r0, 0x1
		  stb       r4, 0x20(r3)
		  lfs       f2, -0x4B8(r2)
		  stb       r0, 0x21(r3)
		  stfs      f2, 0x24(r3)
		  stfs      f2, 0x28(r3)
		  lfs       f0, 0x24(r3)
		  stfs      f0, 0x38(r3)
		  lfs       f1, 0x28(r3)
		  lfs       f0, 0x2C(r3)
		  fadds     f0, f1, f0
		  stfs      f0, 0x3C(r3)
		  stfs      f2, 0x40(r3)
		  stfs      f2, 0x44(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	0000F4
	 */
	void CallBack_Furiko::init(J2DPane*, float, float, float)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80329F58
	 * Size:	000010
	 */
	void CallBack_Furiko::setParam(float, float, float)
	{
		/*
		.loc_0x0:
		  stfs      f1, 0x2C(r3)
		  stfs      f2, 0x34(r3)
		  stfs      f3, 0x30(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80329F68
	 * Size:	000168
	 */
	void CallBack_Furiko::update(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  lfs       f0, -0x4A8(r2)
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  lwz       r4, -0x6514(r13)
		  lwz       r0, 0x1C(r3)
		  lfs       f1, 0x54(r4)
		  cmplwi    r0, 0
		  fdivs     f0, f1, f0
		  beq-      .loc_0x154
		  lbz       r0, 0x20(r31)
		  cmplwi    r0, 0
		  beq-      .loc_0x154
		  lfs       f2, 0x28(r31)
		  lfs       f1, 0x3C(r31)
		  lfs       f3, 0x24(r31)
		  fsubs     f6, f2, f1
		  lfs       f2, 0x38(r31)
		  lfs       f1, -0x4B8(r2)
		  fsubs     f3, f3, f2
		  fmuls     f2, f6, f6
		  fmadds    f5, f3, f3, f2
		  fcmpo     cr0, f5, f1
		  ble-      .loc_0x78
		  ble-      .loc_0x7C
		  fsqrte    f1, f5
		  fmuls     f5, f1, f5
		  b         .loc_0x7C

		.loc_0x78:
		  fmr       f5, f1

		.loc_0x7C:
		  lfs       f1, -0x4B8(r2)
		  fcmpo     cr0, f5, f1
		  ble-      .loc_0x14C
		  fdivs     f2, f3, f5
		  lfs       f1, 0x2C(r31)
		  lis       r3, 0x8051
		  lfs       f4, 0x40(r31)
		  lfs       f3, 0x34(r31)
		  subi      r3, r3, 0x2E20
		  fsubs     f7, f5, f1
		  fdivs     f1, f6, f5
		  fmuls     f2, f7, f2
		  fmuls     f1, f7, f1
		  fmuls     f2, f0, f2
		  fmuls     f1, f0, f1
		  fnmsubs   f2, f4, f3, f2
		  fmadds    f2, f0, f2, f4
		  stfs      f2, 0x40(r31)
		  lfs       f3, 0x44(r31)
		  lfs       f2, 0x34(r31)
		  lfs       f4, 0x30(r31)
		  fnmsubs   f1, f3, f2, f1
		  fadds     f1, f4, f1
		  fmadds    f1, f0, f1, f3
		  stfs      f1, 0x44(r31)
		  lfs       f2, 0x40(r31)
		  lfs       f1, 0x38(r31)
		  fmadds    f1, f2, f0, f1
		  stfs      f1, 0x38(r31)
		  lfs       f2, 0x44(r31)
		  lfs       f1, 0x3C(r31)
		  fmadds    f0, f2, f0, f1
		  stfs      f0, 0x3C(r31)
		  lfs       f1, 0x24(r31)
		  lfs       f0, 0x38(r31)
		  lfs       f2, 0x28(r31)
		  fsubs     f0, f1, f0
		  lfs       f1, 0x3C(r31)
		  fsubs     f1, f2, f1
		  fneg      f2, f0
		  bl        -0x2F4F7C
		  lfs       f2, -0x4A0(r2)
		  lfs       f0, -0x4A4(r2)
		  fmadds    f0, f2, f1, f0
		  stfs      f0, 0x48(r31)
		  lwz       r3, 0x1C(r31)
		  lfs       f0, 0x48(r31)
		  stfs      f0, 0xC0(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x2C(r12)
		  mtctr     r12
		  bctrl

		.loc_0x14C:
		  li        r0, 0
		  stb       r0, 0x20(r31)

		.loc_0x154:
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032A0D0
	 * Size:	0001A0
	 */
	void CallBack_Furiko::draw(Graphics&, J2DGrafContext&)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x40(r1)
		  mflr      r0
		  stw       r0, 0x44(r1)
		  stw       r31, 0x3C(r1)
		  mr        r31, r3
		  lwz       r4, 0x1C(r3)
		  cmplwi    r4, 0
		  beq-      .loc_0x18C
		  addi      r3, r1, 0x14
		  li        r5, 0
		  bl        -0x2F1160
		  lwz       r4, 0x14(r1)
		  addi      r3, r1, 0x8
		  lwz       r6, 0x18(r1)
		  li        r5, 0x3
		  lwz       r0, 0x1C(r1)
		  stw       r4, 0x2C(r1)
		  lwz       r4, 0x1C(r31)
		  stw       r6, 0x30(r1)
		  stw       r0, 0x34(r1)
		  bl        -0x2F1188
		  lwz       r4, 0x1C(r31)
		  lis       r3, 0x5555
		  lwz       r6, 0x8(r1)
		  addi      r0, r3, 0x5556
		  lbz       r7, 0xB7(r4)
		  lwz       r5, 0xC(r1)
		  mulhw     r3, r0, r7
		  lwz       r4, 0x10(r1)
		  stw       r6, 0x20(r1)
		  stw       r5, 0x24(r1)
		  rlwinm    r0,r3,1,31,31
		  stw       r4, 0x28(r1)
		  add       r0, r3, r0
		  mulli     r0, r0, 0x3
		  sub       r0, r7, r0
		  cmpwi     r0, 0x1
		  beq-      .loc_0xC0
		  bge-      .loc_0xA8
		  cmpwi     r0, 0
		  bge-      .loc_0xB4
		  b         .loc_0xE4

		.loc_0xA8:
		  cmpwi     r0, 0x3
		  bge-      .loc_0xE4
		  b         .loc_0xDC

		.loc_0xB4:
		  lfs       f0, 0x2C(r1)
		  stfs      f0, 0x24(r31)
		  b         .loc_0xE4

		.loc_0xC0:
		  lfs       f2, 0x2C(r1)
		  lfs       f1, 0x20(r1)
		  lfs       f0, -0x49C(r2)
		  fadds     f1, f2, f1
		  fmuls     f0, f1, f0
		  stfs      f0, 0x24(r31)
		  b         .loc_0xE4

		.loc_0xDC:
		  lfs       f0, 0x20(r1)
		  stfs      f0, 0x24(r31)

		.loc_0xE4:
		  lis       r3, 0x5555
		  addi      r0, r3, 0x5556
		  mulhw     r3, r0, r7
		  rlwinm    r0,r3,1,31,31
		  add       r0, r3, r0
		  cmpwi     r0, 0x1
		  beq-      .loc_0x128
		  bge-      .loc_0x110
		  cmpwi     r0, 0
		  bge-      .loc_0x11C
		  b         .loc_0x14C

		.loc_0x110:
		  cmpwi     r0, 0x3
		  bge-      .loc_0x14C
		  b         .loc_0x144

		.loc_0x11C:
		  lfs       f0, 0x30(r1)
		  stfs      f0, 0x28(r31)
		  b         .loc_0x14C

		.loc_0x128:
		  lfs       f2, 0x30(r1)
		  lfs       f1, 0x24(r1)
		  lfs       f0, -0x49C(r2)
		  fadds     f1, f2, f1
		  fmuls     f0, f1, f0
		  stfs      f0, 0x28(r31)
		  b         .loc_0x14C

		.loc_0x144:
		  lfs       f0, 0x24(r1)
		  stfs      f0, 0x28(r31)

		.loc_0x14C:
		  lbz       r0, 0x21(r31)
		  cmplwi    r0, 0
		  beq-      .loc_0x184
		  lfs       f1, 0x24(r31)
		  li        r0, 0
		  lfs       f0, -0x4B8(r2)
		  stfs      f1, 0x38(r31)
		  lfs       f2, 0x28(r31)
		  lfs       f1, 0x2C(r31)
		  fadds     f1, f2, f1
		  stfs      f1, 0x3C(r31)
		  stfs      f0, 0x40(r31)
		  stfs      f0, 0x44(r31)
		  stb       r0, 0x21(r31)

		.loc_0x184:
		  li        r0, 0x1
		  stb       r0, 0x20(r31)

		.loc_0x18C:
		  lwz       r0, 0x44(r1)
		  lwz       r31, 0x3C(r1)
		  mtlr      r0
		  addi      r1, r1, 0x40
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032A270
	 * Size:	0001D0
	 */
	void setCallBack_Furiko(P2DScreen::Mgr*, unsigned long long)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  lis       r4, 0x8049
		  stw       r0, 0x24(r1)
		  stmw      r26, 0x8(r1)
		  mr        r29, r3
		  mr        r31, r5
		  mr        r30, r6
		  subi      r27, r4, 0xAB0
		  li        r3, 0x4C
		  bl        -0x3063F4
		  mr.       r26, r3
		  beq-      .loc_0xBC
		  bl        0xE70EC
		  lis       r3, 0x804D
		  lis       r4, 0x804D
		  addi      r0, r3, 0x7B0C
		  lis       r3, 0x804E
		  stw       r0, 0x0(r26)
		  li        r5, 0
		  addi      r4, r4, 0x7F2C
		  subi      r3, r3, 0x6300
		  stw       r5, 0x18(r26)
		  li        r0, 0x1
		  lfs       f3, -0x4B8(r2)
		  stw       r4, 0x0(r26)
		  lfs       f2, -0x4B4(r2)
		  stw       r3, 0x0(r26)
		  lfs       f1, -0x4B0(r2)
		  stw       r5, 0x1C(r26)
		  lfs       f0, -0x4AC(r2)
		  stb       r5, 0x20(r26)
		  stb       r0, 0x21(r26)
		  stfs      f3, 0x24(r26)
		  stfs      f3, 0x28(r26)
		  stfs      f2, 0x2C(r26)
		  stfs      f1, 0x30(r26)
		  stfs      f0, 0x34(r26)
		  lfs       f0, 0x24(r26)
		  stfs      f0, 0x38(r26)
		  lfs       f1, 0x28(r26)
		  lfs       f0, 0x2C(r26)
		  fadds     f0, f1, f0
		  stfs      f0, 0x3C(r26)
		  stfs      f3, 0x40(r26)
		  stfs      f3, 0x44(r26)
		  stfs      f3, 0x48(r26)

		.loc_0xBC:
		  cmplwi    r26, 0
		  bne-      .loc_0xD8
		  addi      r3, r27, 0
		  addi      r5, r27, 0x1C
		  li        r4, 0xE3
		  crclr     6, 0x6
		  bl        -0x2FFD04

		.loc_0xD8:
		  mr        r3, r29
		  mr        r6, r30
		  mr        r5, r31
		  bl        -0x274A8
		  mr.       r28, r3
		  bne-      .loc_0x104
		  addi      r3, r27, 0
		  addi      r5, r27, 0x1C
		  li        r4, 0xE5
		  crclr     6, 0x6
		  bl        -0x2FFD30

		.loc_0x104:
		  cmplwi    r28, 0
		  beq-      .loc_0x184
		  stw       r28, 0x1C(r26)
		  lfs       f0, -0x4B8(r2)
		  lwz       r3, 0x1C(r26)
		  stfs      f0, 0xC0(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x2C(r12)
		  mtctr     r12
		  bctrl
		  lfs       f0, -0x4B4(r2)
		  li        r3, 0
		  lfs       f1, -0x4B0(r2)
		  li        r0, 0x1
		  stfs      f0, 0x2C(r26)
		  lfs       f0, -0x4AC(r2)
		  stfs      f1, 0x30(r26)
		  lfs       f2, -0x4B8(r2)
		  stfs      f0, 0x34(r26)
		  stb       r3, 0x20(r26)
		  stb       r0, 0x21(r26)
		  stfs      f2, 0x24(r26)
		  stfs      f2, 0x28(r26)
		  lfs       f0, 0x24(r26)
		  stfs      f0, 0x38(r26)
		  lfs       f1, 0x28(r26)
		  lfs       f0, 0x2C(r26)
		  fadds     f0, f1, f0
		  stfs      f0, 0x3C(r26)
		  stfs      f2, 0x40(r26)
		  stfs      f2, 0x44(r26)
		  b         .loc_0x198

		.loc_0x184:
		  addi      r3, r27, 0
		  addi      r5, r27, 0x10
		  li        r4, 0x76
		  crclr     6, 0x6
		  bl        -0x2FFDC4

		.loc_0x198:
		  mr        r3, r29
		  mr        r6, r30
		  mr        r5, r31
		  mr        r7, r26
		  bl        0x10A70C
		  stw       r26, 0x1C(r28)
		  li        r0, 0
		  mr        r3, r26
		  stw       r0, 0x18(r28)
		  lmw       r26, 0x8(r1)
		  lwz       r0, 0x24(r1)
		  mtlr      r0
		  addi      r1, r1, 0x20
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032A440
	 * Size:	000270
	 */
	void setFurikoScreen(P2DScreen::Mgr*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x40(r1)
		  mflr      r0
		  lis       r7, 0x8049
		  lis       r6, 0x6666
		  stw       r0, 0x44(r1)
		  lis       r5, 0x6B6F
		  lis       r4, 0x6675
		  stmw      r21, 0x14(r1)
		  mr        r22, r3
		  subi      r27, r7, 0xAB0
		  addi      r28, r6, 0x6667
		  addi      r29, r5, 0x3030
		  addi      r30, r4, 0x7269
		  li        r25, 0

		.loc_0x38:
		  mulhw     r5, r28, r25
		  lwz       r12, 0x0(r22)
		  mr        r3, r22
		  lwz       r12, 0x3C(r12)
		  srawi     r0, r5, 0x2
		  rlwinm    r4,r0,1,31,31
		  add       r0, r0, r4
		  mulli     r0, r0, 0xA
		  sub       r4, r25, r0
		  srawi     r0, r4, 0x1F
		  addc      r6, r4, r29
		  adde      r7, r0, r30
		  srawi     r0, r5, 0x2
		  rlwinm    r4,r0,1,31,31
		  add       r5, r0, r4
		  mulhw     r0, r28, r5
		  srawi     r0, r0, 0x2
		  rlwinm    r4,r0,1,31,31
		  add       r0, r0, r4
		  mulli     r0, r0, 0xA
		  sub       r0, r5, r0
		  rlwinm    r4,r0,8,0,23
		  srawi     r0, r4, 0x1F
		  addc      r6, r6, r4
		  adde      r5, r7, r0
		  mr        r23, r6
		  mr        r24, r5
		  mtctr     r12
		  bctrl
		  mr.       r31, r3
		  beq-      .loc_0x250
		  li        r3, 0x4C
		  bl        -0x306654
		  mr.       r26, r3
		  beq-      .loc_0x14C
		  bl        0xE6E8C
		  lis       r3, 0x804D
		  lis       r4, 0x804D
		  addi      r0, r3, 0x7B0C
		  lis       r3, 0x804E
		  stw       r0, 0x0(r26)
		  li        r5, 0
		  addi      r4, r4, 0x7F2C
		  subi      r3, r3, 0x6300
		  stw       r5, 0x18(r26)
		  li        r0, 0x1
		  lfs       f3, -0x4B8(r2)
		  stw       r4, 0x0(r26)
		  lfs       f2, -0x4B4(r2)
		  stw       r3, 0x0(r26)
		  lfs       f1, -0x4B0(r2)
		  stw       r5, 0x1C(r26)
		  lfs       f0, -0x4AC(r2)
		  stb       r5, 0x20(r26)
		  stb       r0, 0x21(r26)
		  stfs      f3, 0x24(r26)
		  stfs      f3, 0x28(r26)
		  stfs      f2, 0x2C(r26)
		  stfs      f1, 0x30(r26)
		  stfs      f0, 0x34(r26)
		  lfs       f0, 0x24(r26)
		  stfs      f0, 0x38(r26)
		  lfs       f1, 0x28(r26)
		  lfs       f0, 0x2C(r26)
		  fadds     f0, f1, f0
		  stfs      f0, 0x3C(r26)
		  stfs      f3, 0x40(r26)
		  stfs      f3, 0x44(r26)
		  stfs      f3, 0x48(r26)

		.loc_0x14C:
		  cmplwi    r26, 0
		  bne-      .loc_0x168
		  addi      r3, r27, 0
		  addi      r5, r27, 0x1C
		  li        r4, 0xE3
		  crclr     6, 0x6
		  bl        -0x2FFF64

		.loc_0x168:
		  mr        r3, r22
		  mr        r6, r23
		  mr        r5, r24
		  bl        -0x27708
		  mr.       r21, r3
		  bne-      .loc_0x194
		  addi      r3, r27, 0
		  addi      r5, r27, 0x1C
		  li        r4, 0xE5
		  crclr     6, 0x6
		  bl        -0x2FFF90

		.loc_0x194:
		  cmplwi    r21, 0
		  beq-      .loc_0x214
		  stw       r21, 0x1C(r26)
		  lfs       f0, -0x4B8(r2)
		  lwz       r3, 0x1C(r26)
		  stfs      f0, 0xC0(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x2C(r12)
		  mtctr     r12
		  bctrl
		  lfs       f0, -0x4B4(r2)
		  li        r3, 0
		  lfs       f1, -0x4B0(r2)
		  li        r0, 0x1
		  stfs      f0, 0x2C(r26)
		  lfs       f0, -0x4AC(r2)
		  stfs      f1, 0x30(r26)
		  lfs       f2, -0x4B8(r2)
		  stfs      f0, 0x34(r26)
		  stb       r3, 0x20(r26)
		  stb       r0, 0x21(r26)
		  stfs      f2, 0x24(r26)
		  stfs      f2, 0x28(r26)
		  lfs       f0, 0x24(r26)
		  stfs      f0, 0x38(r26)
		  lfs       f1, 0x28(r26)
		  lfs       f0, 0x2C(r26)
		  fadds     f0, f1, f0
		  stfs      f0, 0x3C(r26)
		  stfs      f2, 0x40(r26)
		  stfs      f2, 0x44(r26)
		  b         .loc_0x228

		.loc_0x214:
		  addi      r3, r27, 0
		  addi      r5, r27, 0x10
		  li        r4, 0x76
		  crclr     6, 0x6
		  bl        -0x300024

		.loc_0x228:
		  mr        r3, r22
		  mr        r6, r23
		  mr        r5, r24
		  mr        r7, r26
		  bl        0x10A4AC
		  stw       r26, 0x1C(r21)
		  li        r0, 0
		  stw       r0, 0x18(r21)
		  stw       r26, 0x1C(r31)
		  stw       r0, 0x18(r31)

		.loc_0x250:
		  addi      r25, r25, 0x1
		  cmpwi     r25, 0x64
		  blt+      .loc_0x38
		  lmw       r21, 0x14(r1)
		  lwz       r0, 0x44(r1)
		  mtlr      r0
		  addi      r1, r1, 0x40
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032A6B0
	 * Size:	000024
	 */
	void getFurikoPtr(P2DScreen::Mgr*, unsigned long long)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  bl        -0x27810
		  lwz       r0, 0x14(r1)
		  lwz       r3, 0x1C(r3)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032A6D4
	 * Size:	000080
	 */
	CallBack_Furiko::~CallBack_Furiko(void)
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
		  subi      r0, r4, 0x6300
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
		  bl        0xE6E64

		.loc_0x54:
		  extsh.    r0, r31
		  ble-      .loc_0x64
		  mr        r3, r30
		  bl        -0x306680

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
