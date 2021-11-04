#include "types.h"

namespace kh {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	8040B3F4
	 * Size:	00004C
	 */
	void getSerialTagName(unsigned long long, int)
	{
		/*
		.loc_0x0:
		  lis       r6, 0x6666
		  addi      r0, r6, 0x6667
		  mulhw     r8, r0, r5
		  srawi     r0, r8, 0x2
		  rlwinm    r6,r0,1,31,31
		  add       r0, r0, r6
		  mulli     r0, r0, 0xA
		  sub       r7, r5, r0
		  srawi     r6, r7, 0x1F
		  srawi     r0, r8, 0x2
		  rlwinm    r5,r0,1,31,31
		  add       r0, r0, r5
		  rlwinm    r5,r0,8,0,23
		  srawi     r0, r5, 0x1F
		  addc      r4, r4, r5
		  adde      r0, r3, r0
		  addc      r4, r7, r4
		  adde      r3, r6, r0
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040B440
	 * Size:	000050
	 */
	void setTex(J2DScreen*, unsigned long long, const ResTIMG*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r7
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x3C(r12)
		  mtctr     r12
		  bctrl
		  lwz       r12, 0x0(r3)
		  mr        r4, r31
		  li        r5, 0
		  lwz       r12, 0x110(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040B490
	 * Size:	000050
	 */
	void setTex(J2DScreen*, unsigned long long, const char*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r7
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x3C(r12)
		  mtctr     r12
		  bctrl
		  lwz       r12, 0x0(r3)
		  mr        r4, r31
		  li        r5, 0
		  lwz       r12, 0x114(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040B4E0
	 * Size:	000210
	 */
	void setMatAnm(J2DPane*, J2DAnmBase*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x30(r1)
		  mflr      r0
		  stw       r0, 0x34(r1)
		  stmw      r25, 0x14(r1)
		  mr        r25, r3
		  mr        r31, r4
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x5C(r12)
		  mtctr     r12
		  bctrl
		  lwz       r30, 0xDC(r25)
		  cmplwi    r30, 0
		  beq-      .loc_0x1F4
		  subi      r30, r30, 0xC
		  b         .loc_0x1F4

		.loc_0x3C:
		  lwz       r27, 0xC(r30)
		  mr        r4, r31
		  mr        r3, r27
		  lwz       r12, 0x0(r27)
		  lwz       r12, 0x5C(r12)
		  mtctr     r12
		  bctrl
		  lwz       r29, 0xDC(r27)
		  cmplwi    r29, 0
		  beq-      .loc_0x1DC
		  subi      r29, r29, 0xC
		  b         .loc_0x1DC

		.loc_0x6C:
		  lwz       r27, 0xC(r29)
		  mr        r4, r31
		  mr        r3, r27
		  lwz       r12, 0x0(r27)
		  lwz       r12, 0x5C(r12)
		  mtctr     r12
		  bctrl
		  lwz       r28, 0xDC(r27)
		  cmplwi    r28, 0
		  beq-      .loc_0x1C4
		  subi      r28, r28, 0xC
		  b         .loc_0x1C4

		.loc_0x9C:
		  lwz       r27, 0xC(r28)
		  mr        r4, r31
		  mr        r3, r27
		  lwz       r12, 0x0(r27)
		  lwz       r12, 0x5C(r12)
		  mtctr     r12
		  bctrl
		  addi      r3, r27, 0xDC
		  bl        -0x3E797C
		  cmplwi    r3, 0
		  beq-      .loc_0xCC
		  subi      r3, r3, 0xC

		.loc_0xCC:
		  mr        r25, r3
		  b         .loc_0x1AC

		.loc_0xD4:
		  mr        r3, r25
		  bl        -0x3D2C7C
		  lwz       r12, 0x0(r3)
		  mr        r27, r3
		  mr        r4, r31
		  lwz       r12, 0x5C(r12)
		  mtctr     r12
		  bctrl
		  addi      r26, r27, 0xDC
		  mr        r3, r26
		  bl        -0x3D2CB4
		  stw       r3, 0xC(r1)
		  b         .loc_0x188

		.loc_0x108:
		  addi      r3, r1, 0xC
		  bl        -0x108104
		  lwz       r12, 0x0(r3)
		  mr        r27, r3
		  mr        r4, r31
		  lwz       r12, 0x5C(r12)
		  mtctr     r12
		  bctrl
		  mr        r3, r27
		  bl        -0x108118
		  mr        r27, r3
		  bl        -0x3D2CEC
		  mr        r4, r3
		  addi      r3, r1, 0x8
		  bl        -0x3D2D0C
		  b         .loc_0x160

		.loc_0x148:
		  addi      r3, r1, 0x8
		  bl        -0x108144
		  mr        r4, r31
		  bl        .loc_0x0
		  addi      r3, r1, 0x8
		  bl        -0x3D2D44

		.loc_0x160:
		  mr        r3, r27
		  bl        -0x3D2D54
		  mr        r4, r3
		  addi      r3, r1, 0x8
		  bl        -0x3D2D78
		  rlwinm.   r0,r3,0,24,31
		  bne+      .loc_0x148
		  lwz       r3, 0xC(r1)
		  bl        -0x3D2D9C
		  stw       r3, 0xC(r1)

		.loc_0x188:
		  mr        r3, r26
		  bl        -0x3D2D7C
		  lwz       r0, 0xC(r1)
		  cmplw     r0, r3
		  bne+      .loc_0x108
		  lwz       r25, 0x18(r25)
		  cmplwi    r25, 0
		  beq-      .loc_0x1AC
		  subi      r25, r25, 0xC

		.loc_0x1AC:
		  cmplwi    r25, 0
		  bne+      .loc_0xD4
		  lwz       r28, 0x18(r28)
		  cmplwi    r28, 0
		  beq-      .loc_0x1C4
		  subi      r28, r28, 0xC

		.loc_0x1C4:
		  cmplwi    r28, 0
		  bne+      .loc_0x9C
		  lwz       r29, 0x18(r29)
		  cmplwi    r29, 0
		  beq-      .loc_0x1DC
		  subi      r29, r29, 0xC

		.loc_0x1DC:
		  cmplwi    r29, 0
		  bne+      .loc_0x6C
		  lwz       r30, 0x18(r30)
		  cmplwi    r30, 0
		  beq-      .loc_0x1F4
		  subi      r30, r30, 0xC

		.loc_0x1F4:
		  cmplwi    r30, 0
		  bne+      .loc_0x3C
		  lmw       r25, 0x14(r1)
		  lwz       r0, 0x34(r1)
		  mtlr      r0
		  addi      r1, r1, 0x30
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040B6F0
	 * Size:	00021C
	 */
	void setInfAlpha(J2DPane*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x30(r1)
		  mflr      r0
		  li        r4, 0x1
		  li        r5, 0
		  stw       r0, 0x34(r1)
		  stmw      r25, 0x14(r1)
		  mr        r25, r3
		  bl        -0x3D2960
		  lwz       r31, 0xDC(r25)
		  cmplwi    r31, 0
		  beq-      .loc_0x200
		  subi      r31, r31, 0xC
		  b         .loc_0x200

		.loc_0x34:
		  lwz       r27, 0xC(r31)
		  li        r4, 0x1
		  li        r5, 0
		  mr        r3, r27
		  bl        -0x3D2988
		  lwz       r30, 0xDC(r27)
		  cmplwi    r30, 0
		  beq-      .loc_0x1E8
		  subi      r30, r30, 0xC
		  b         .loc_0x1E8

		.loc_0x5C:
		  lwz       r27, 0xC(r30)
		  li        r4, 0x1
		  li        r5, 0
		  mr        r3, r27
		  bl        -0x3D29B0
		  lwz       r29, 0xDC(r27)
		  cmplwi    r29, 0
		  beq-      .loc_0x1D0
		  subi      r29, r29, 0xC
		  b         .loc_0x1D0

		.loc_0x84:
		  lwz       r27, 0xC(r29)
		  li        r4, 0x1
		  li        r5, 0
		  mr        r3, r27
		  bl        -0x3D29D8
		  lwz       r28, 0xDC(r27)
		  cmplwi    r28, 0
		  beq-      .loc_0x1B8
		  subi      r28, r28, 0xC
		  b         .loc_0x1B8

		.loc_0xAC:
		  lwz       r27, 0xC(r28)
		  li        r4, 0x1
		  li        r5, 0
		  mr        r3, r27
		  bl        -0x3D2A00
		  addi      r3, r27, 0xDC
		  bl        -0x3E7B94
		  cmplwi    r3, 0
		  beq-      .loc_0xD4
		  subi      r3, r3, 0xC

		.loc_0xD4:
		  mr        r25, r3
		  b         .loc_0x1A0

		.loc_0xDC:
		  mr        r3, r25
		  bl        -0x3D2E94
		  mr        r27, r3
		  li        r4, 0x1
		  li        r5, 0
		  bl        -0x3D2A34
		  addi      r26, r27, 0xDC
		  mr        r3, r26
		  bl        -0x3D2EC4
		  stw       r3, 0xC(r1)
		  b         .loc_0x17C

		.loc_0x108:
		  addi      r3, r1, 0xC
		  bl        -0x108314
		  li        r4, 0x1
		  mr        r27, r3
		  li        r5, 0
		  bl        -0x3D2A60
		  mr        r3, r27
		  bl        -0x108320
		  mr        r27, r3
		  bl        -0x3D2EF4
		  mr        r4, r3
		  addi      r3, r1, 0x8
		  bl        -0x3D2F14
		  b         .loc_0x154

		.loc_0x140:
		  addi      r3, r1, 0x8
		  bl        -0x10834C
		  bl        .loc_0x0
		  addi      r3, r1, 0x8
		  bl        -0x3D2F48

		.loc_0x154:
		  mr        r3, r27
		  bl        -0x3D2F58
		  mr        r4, r3
		  addi      r3, r1, 0x8
		  bl        -0x3D2F7C
		  rlwinm.   r0,r3,0,24,31
		  bne+      .loc_0x140
		  lwz       r3, 0xC(r1)
		  bl        -0x3D2FA0
		  stw       r3, 0xC(r1)

		.loc_0x17C:
		  mr        r3, r26
		  bl        -0x3D2F80
		  lwz       r0, 0xC(r1)
		  cmplw     r0, r3
		  bne+      .loc_0x108
		  lwz       r25, 0x18(r25)
		  cmplwi    r25, 0
		  beq-      .loc_0x1A0
		  subi      r25, r25, 0xC

		.loc_0x1A0:
		  cmplwi    r25, 0
		  bne+      .loc_0xDC
		  lwz       r28, 0x18(r28)
		  cmplwi    r28, 0
		  beq-      .loc_0x1B8
		  subi      r28, r28, 0xC

		.loc_0x1B8:
		  cmplwi    r28, 0
		  bne+      .loc_0xAC
		  lwz       r29, 0x18(r29)
		  cmplwi    r29, 0
		  beq-      .loc_0x1D0
		  subi      r29, r29, 0xC

		.loc_0x1D0:
		  cmplwi    r29, 0
		  bne+      .loc_0x84
		  lwz       r30, 0x18(r30)
		  cmplwi    r30, 0
		  beq-      .loc_0x1E8
		  subi      r30, r30, 0xC

		.loc_0x1E8:
		  cmplwi    r30, 0
		  bne+      .loc_0x5C
		  lwz       r31, 0x18(r31)
		  cmplwi    r31, 0
		  beq-      .loc_0x200
		  subi      r31, r31, 0xC

		.loc_0x200:
		  cmplwi    r31, 0
		  bne+      .loc_0x34
		  lmw       r25, 0x14(r1)
		  lwz       r0, 0x34(r1)
		  mtlr      r0
		  addi      r1, r1, 0x30
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040B90C
	 * Size:	0000EC
	 */
	void getPaneCenterX(J2DPane*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x70(r1)
		  mflr      r0
		  li        r5, 0
		  stw       r0, 0x74(r1)
		  stw       r31, 0x6C(r1)
		  mr        r31, r3
		  mr        r4, r31
		  addi      r3, r1, 0x2C
		  bl        -0x3D2994
		  lwz       r5, 0x2C(r1)
		  mr        r4, r31
		  lwz       r6, 0x30(r1)
		  addi      r3, r1, 0x20
		  lwz       r0, 0x34(r1)
		  stw       r5, 0x5C(r1)
		  li        r5, 0x1
		  stw       r6, 0x60(r1)
		  stw       r0, 0x64(r1)
		  bl        -0x3D29BC
		  lwz       r5, 0x20(r1)
		  mr        r4, r31
		  lwz       r6, 0x24(r1)
		  addi      r3, r1, 0x14
		  lwz       r0, 0x28(r1)
		  stw       r5, 0x50(r1)
		  li        r5, 0x2
		  stw       r6, 0x54(r1)
		  stw       r0, 0x58(r1)
		  bl        -0x3D29E4
		  lwz       r5, 0x14(r1)
		  mr        r4, r31
		  lwz       r6, 0x18(r1)
		  addi      r3, r1, 0x8
		  lwz       r0, 0x1C(r1)
		  stw       r5, 0x44(r1)
		  li        r5, 0x3
		  stw       r6, 0x48(r1)
		  stw       r0, 0x4C(r1)
		  bl        -0x3D2A0C
		  lfs       f1, 0x5C(r1)
		  lfs       f0, 0x50(r1)
		  lwz       r0, 0x8(r1)
		  fadds     f0, f1, f0
		  lfs       f1, 0x44(r1)
		  stw       r0, 0x38(r1)
		  lwz       r3, 0xC(r1)
		  fadds     f0, f1, f0
		  lfs       f1, 0x38(r1)
		  lwz       r0, 0x10(r1)
		  lfs       f2, 0x1E20(r2)
		  fadds     f0, f1, f0
		  stw       r3, 0x3C(r1)
		  stw       r0, 0x40(r1)
		  fmuls     f1, f2, f0
		  lwz       r31, 0x6C(r1)
		  lwz       r0, 0x74(r1)
		  mtlr      r0
		  addi      r1, r1, 0x70
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040B9F8
	 * Size:	0000EC
	 */
	void getPaneCenterY(J2DPane*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x70(r1)
		  mflr      r0
		  li        r5, 0
		  stw       r0, 0x74(r1)
		  stw       r31, 0x6C(r1)
		  mr        r31, r3
		  mr        r4, r31
		  addi      r3, r1, 0x2C
		  bl        -0x3D2A80
		  lwz       r5, 0x2C(r1)
		  mr        r4, r31
		  lwz       r6, 0x30(r1)
		  addi      r3, r1, 0x20
		  lwz       r0, 0x34(r1)
		  stw       r5, 0x5C(r1)
		  li        r5, 0x1
		  stw       r6, 0x60(r1)
		  stw       r0, 0x64(r1)
		  bl        -0x3D2AA8
		  lwz       r5, 0x20(r1)
		  mr        r4, r31
		  lwz       r6, 0x24(r1)
		  addi      r3, r1, 0x14
		  lwz       r0, 0x28(r1)
		  stw       r5, 0x50(r1)
		  li        r5, 0x2
		  stw       r6, 0x54(r1)
		  stw       r0, 0x58(r1)
		  bl        -0x3D2AD0
		  lwz       r5, 0x14(r1)
		  mr        r4, r31
		  lwz       r6, 0x18(r1)
		  addi      r3, r1, 0x8
		  lwz       r0, 0x1C(r1)
		  stw       r5, 0x44(r1)
		  li        r5, 0x3
		  stw       r6, 0x48(r1)
		  stw       r0, 0x4C(r1)
		  bl        -0x3D2AF8
		  lfs       f1, 0x60(r1)
		  lfs       f0, 0x54(r1)
		  lwz       r0, 0xC(r1)
		  fadds     f0, f1, f0
		  lfs       f1, 0x48(r1)
		  stw       r0, 0x3C(r1)
		  lwz       r3, 0x8(r1)
		  fadds     f0, f1, f0
		  lfs       f1, 0x3C(r1)
		  lwz       r0, 0x10(r1)
		  lfs       f2, 0x1E20(r2)
		  fadds     f0, f1, f0
		  stw       r3, 0x38(r1)
		  stw       r0, 0x40(r1)
		  fmuls     f1, f2, f0
		  lwz       r31, 0x6C(r1)
		  lwz       r0, 0x74(r1)
		  mtlr      r0
		  addi      r1, r1, 0x70
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040BAE4
	 * Size:	0000A4
	 */
	void khUtilFadePane::create(P2DScreen::Mgr*, unsigned long long,
	                            unsigned char)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stmw      r27, 0xC(r1)
		  mr.       r27, r3
		  mr        r29, r5
		  mr        r28, r6
		  mr        r30, r7
		  bne-      .loc_0x2C
		  li        r3, 0
		  b         .loc_0x90

		.loc_0x2C:
		  li        r3, 0x30
		  bl        -0x3E7C70
		  mr.       r31, r3
		  beq-      .loc_0x48
		  mr        r4, r30
		  bl        .loc_0xA4
		  mr        r31, r3

		.loc_0x48:
		  cmplwi    r31, 0
		  bne-      .loc_0x6C
		  lis       r3, 0x804A
		  lis       r5, 0x804A
		  subi      r3, r3, 0x7350
		  li        r4, 0x92
		  subi      r5, r5, 0x7344
		  crclr     6, 0x6
		  bl        -0x3E150C

		.loc_0x6C:
		  mr        r3, r27
		  mr        r6, r28
		  mr        r5, r29
		  mr        r7, r31
		  bl        0x28FC4
		  mr        r4, r3
		  mr        r3, r31
		  bl        0x1AC
		  mr        r3, r31

		.loc_0x90:
		  lmw       r27, 0xC(r1)
		  lwz       r0, 0x24(r1)
		  mtlr      r0
		  addi      r1, r1, 0x20
		  blr

		.loc_0xA4:
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040BB88
	 * Size:	000088
	 */
	khUtilFadePane::khUtilFadePane(unsigned char)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r4
		  stw       r30, 0x8(r1)
		  mr        r30, r3
		  bl        0x57EC
		  lis       r3, 0x804D
		  lis       r5, 0x804D
		  addi      r0, r3, 0x7B0C
		  lis       r4, 0x804F
		  stw       r0, 0x0(r30)
		  li        r6, 0
		  lis       r3, 0x804F
		  addi      r5, r5, 0x7F2C
		  stw       r6, 0x18(r30)
		  subi      r4, r4, 0x4E28
		  subi      r0, r3, 0x5AB0
		  mr        r3, r30
		  stw       r5, 0x0(r30)
		  stw       r4, 0x0(r30)
		  stw       r0, 0x1C(r30)
		  stw       r6, 0x20(r30)
		  stw       r6, 0x24(r30)
		  stw       r6, 0x28(r30)
		  stb       r6, 0x2C(r30)
		  stb       r31, 0x2D(r30)
		  lwz       r31, 0xC(r1)
		  lwz       r30, 0x8(r1)
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040BC10
	 * Size:	000104
	 */
	void khUtilFadePane::update()
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  stw       r30, 0x8(r1)
		  mr        r30, r3
		  lwz       r0, 0x28(r3)
		  cmpwi     r0, 0x1
		  beq-      .loc_0xC0
		  bge-      .loc_0x34
		  cmpwi     r0, 0
		  bge-      .loc_0x40
		  b         .loc_0xC0

		.loc_0x34:
		  cmpwi     r0, 0x3
		  bge-      .loc_0xC0
		  b         .loc_0x84

		.loc_0x40:
		  lbz       r5, 0x2D(r30)
		  lbz       r4, 0x2C(r30)
		  subfic    r0, r5, 0xFF
		  cmpw      r4, r0
		  ble-      .loc_0x78
		  li        r4, 0xFF
		  li        r0, 0x1
		  stb       r4, 0x2C(r30)
		  stw       r0, 0x28(r30)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x1C(r12)
		  mtctr     r12
		  bctrl
		  b         .loc_0xC0

		.loc_0x78:
		  add       r0, r4, r5
		  stb       r0, 0x2C(r30)
		  b         .loc_0xC0

		.loc_0x84:
		  lbz       r0, 0x2C(r30)
		  lbz       r4, 0x2D(r30)
		  cmplw     r0, r4
		  bge-      .loc_0xB8
		  li        r4, 0
		  li        r0, 0x3
		  stb       r4, 0x2C(r30)
		  stw       r0, 0x28(r30)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x20(r12)
		  mtctr     r12
		  bctrl
		  b         .loc_0xC0

		.loc_0xB8:
		  sub       r0, r0, r4
		  stb       r0, 0x2C(r30)

		.loc_0xC0:
		  lwz       r31, 0x24(r30)
		  b         .loc_0xE4

		.loc_0xC8:
		  lwz       r3, 0x4(r31)
		  lbz       r4, 0x2C(r30)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x24(r12)
		  mtctr     r12
		  bctrl
		  lwz       r31, 0x8(r31)

		.loc_0xE4:
		  cmplwi    r31, 0
		  bne+      .loc_0xC8
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  lwz       r30, 0x8(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040BD14
	 * Size:	000004
	 */
	void khUtilFadePane::fadeout_finish() { }

	/*
	 * --INFO--
	 * Address:	8040BD18
	 * Size:	0000B8
	 */
	void khUtilFadePane::add(J2DPane*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stw       r31, 0x1C(r1)
		  stw       r30, 0x18(r1)
		  li        r30, 0
		  stw       r29, 0x14(r1)
		  mr.       r29, r4
		  beq-      .loc_0x98
		  addi      r30, r3, 0x1C
		  b         .loc_0x30

		.loc_0x2C:
		  mr        r30, r0

		.loc_0x30:
		  lwz       r0, 0x8(r30)
		  cmplwi    r0, 0
		  bne+      .loc_0x2C
		  li        r3, 0xC
		  bl        -0x3E7EB4
		  mr.       r31, r3
		  beq-      .loc_0x64
		  lis       r3, 0x804F
		  li        r0, 0
		  subi      r3, r3, 0x5AB0
		  stw       r3, 0x0(r31)
		  stw       r29, 0x4(r31)
		  stw       r0, 0x8(r31)

		.loc_0x64:
		  cmplwi    r31, 0
		  bne-      .loc_0x88
		  lis       r3, 0x804A
		  lis       r5, 0x804A
		  subi      r3, r3, 0x7338
		  li        r4, 0x40
		  subi      r5, r5, 0x7344
		  crclr     6, 0x6
		  bl        -0x3E175C

		.loc_0x88:
		  stw       r31, 0x8(r30)
		  mr        r3, r29
		  li        r30, 0x1
		  bl        -0x6BC

		.loc_0x98:
		  lwz       r0, 0x24(r1)
		  mr        r3, r30
		  lwz       r31, 0x1C(r1)
		  lwz       r30, 0x18(r1)
		  lwz       r29, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x20
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040BDD0
	 * Size:	000020
	 */
	void khUtilFadePane::fadein()
	{
		/*
		.loc_0x0:
		  lwz       r0, 0x28(r3)
		  cmpwi     r0, 0x2
		  beq-      .loc_0x14
		  cmpwi     r0, 0x3
		  bnelr-

		.loc_0x14:
		  li        r0, 0
		  stw       r0, 0x28(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040BDF0
	 * Size:	000020
	 */
	void khUtilFadePane::fadeout()
	{
		/*
		.loc_0x0:
		  lwz       r0, 0x28(r3)
		  cmpwi     r0, 0
		  beq-      .loc_0x14
		  cmpwi     r0, 0x1
		  bnelr-

		.loc_0x14:
		  li        r0, 0x2
		  stw       r0, 0x28(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040BE10
	 * Size:	000060
	 */
	void khUtilFadePane::set_init_alpha(unsigned char)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  stw       r30, 0x8(r1)
		  mr        r30, r3
		  stb       r4, 0x2C(r3)
		  lwz       r31, 0x24(r3)
		  b         .loc_0x40

		.loc_0x24:
		  lwz       r3, 0x4(r31)
		  lbz       r4, 0x2C(r30)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x24(r12)
		  mtctr     r12
		  bctrl
		  lwz       r31, 0x8(r31)

		.loc_0x40:
		  cmplwi    r31, 0
		  bne+      .loc_0x24
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  lwz       r30, 0x8(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040BE70
	 * Size:	000158
	 */
	khUtilColorAnm::khUtilColorAnm(P2DScreen::Mgr*, unsigned long long, int,
	                               int)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x30(r1)
		  mflr      r0
		  stw       r0, 0x34(r1)
		  stmw      r25, 0x14(r1)
		  mr        r28, r3
		  mr        r0, r28
		  mr        r29, r4
		  mr        r31, r5
		  mr        r30, r6
		  mr        r26, r7
		  mr        r27, r8
		  mr        r25, r0
		  bl        0x54F0
		  lis       r3, 0x804D
		  lis       r4, 0x804D
		  addi      r0, r3, 0x7B0C
		  lis       r3, 0x804F
		  stw       r0, 0x0(r25)
		  li        r5, 0
		  addi      r4, r4, 0x7F2C
		  subi      r3, r3, 0x4E48
		  stw       r5, 0x18(r25)
		  li        r0, -0x1
		  stw       r4, 0x0(r25)
		  stw       r3, 0x0(r28)
		  stw       r0, 0x20(r28)
		  stw       r0, 0x24(r28)
		  stw       r26, 0x28(r28)
		  stw       r27, 0x2C(r28)
		  stw       r5, 0x30(r28)
		  stb       r5, 0x20(r28)
		  stb       r5, 0x21(r28)
		  stb       r5, 0x22(r28)
		  stb       r5, 0x23(r28)
		  lwz       r27, 0x28(r28)
		  rlwinm    r3,r27,2,0,29
		  addi      r3, r3, 0x10
		  bl        -0x3E7F58
		  lis       r4, 0x8004
		  mr        r7, r27
		  subi      r4, r4, 0x646C
		  li        r5, 0
		  li        r6, 0x4
		  bl        -0x34A52C
		  li        r8, 0
		  stw       r3, 0x1C(r28)
		  mr        r6, r8
		  li        r9, 0
		  mr        r5, r8
		  mr        r4, r8
		  mr        r3, r8
		  b         .loc_0xF0

		.loc_0xD0:
		  lwz       r0, 0x1C(r28)
		  addi      r9, r9, 0x1
		  add       r7, r0, r8
		  addi      r8, r8, 0x4
		  stb       r6, 0x0(r7)
		  stb       r5, 0x1(r7)
		  stb       r4, 0x2(r7)
		  stb       r3, 0x3(r7)

		.loc_0xF0:
		  lwz       r0, 0x28(r28)
		  cmpw      r9, r0
		  blt+      .loc_0xD0
		  lbz       r3, 0x20(r28)
		  cmplwi    r29, 0
		  li        r0, 0
		  stb       r3, 0x24(r28)
		  lbz       r3, 0x21(r28)
		  stb       r3, 0x25(r28)
		  lbz       r3, 0x22(r28)
		  stb       r3, 0x26(r28)
		  lbz       r3, 0x23(r28)
		  stb       r3, 0x27(r28)
		  stb       r0, 0x34(r28)
		  beq-      .loc_0x140
		  mr        r3, r29
		  mr        r6, r30
		  mr        r5, r31
		  mr        r7, r28
		  bl        0x28B78

		.loc_0x140:
		  mr        r3, r28
		  lmw       r25, 0x14(r1)
		  lwz       r0, 0x34(r1)
		  mtlr      r0
		  addi      r1, r1, 0x30
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040BFC8
	 * Size:	00021C
	 */
	void khUtilColorAnm::update()
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x90(r1)
		  mflr      r0
		  stw       r0, 0x94(r1)
		  lbz       r0, 0x34(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x1D4
		  lwz       r4, 0x28(r3)
		  lis       r6, 0x4330
		  lwz       r5, 0x30(r3)
		  subi      r4, r4, 0x1
		  lwz       r0, 0x2C(r3)
		  mullw     r4, r5, r4
		  stw       r6, 0x10(r1)
		  xoris     r0, r0, 0x8000
		  lfd       f3, 0x1E28(r2)
		  stw       r0, 0x1C(r1)
		  lwz       r8, 0x1C(r3)
		  xoris     r0, r4, 0x8000
		  stw       r6, 0x18(r1)
		  lfd       f6, 0x1E30(r2)
		  stw       r0, 0x14(r1)
		  lfd       f0, 0x18(r1)
		  lfd       f1, 0x10(r1)
		  fsubs     f0, f0, f3
		  stw       r6, 0x28(r1)
		  fsubs     f2, f1, f3
		  lfs       f1, 0x1E24(r2)
		  stw       r6, 0x38(r1)
		  fdivs     f8, f2, f0
		  stw       r6, 0x50(r1)
		  stw       r6, 0x30(r1)
		  stw       r6, 0x68(r1)
		  stw       r6, 0x48(r1)
		  stw       r6, 0x60(r1)
		  fctiwz    f0, f8
		  stfd      f0, 0x20(r1)
		  lwz       r7, 0x24(r1)
		  addi      r0, r7, 0x1
		  rlwinm    r5,r7,2,0,29
		  rlwinm    r4,r0,2,0,29
		  xoris     r0, r7, 0x8000
		  lwzx      r4, r8, r4
		  stw       r0, 0x2C(r1)
		  lwzx      r0, r8, r5
		  stw       r4, 0x8(r1)
		  lfd       f0, 0x28(r1)
		  stw       r0, 0xC(r1)
		  lbz       r4, 0x8(r1)
		  fsubs     f0, f0, f3
		  lbz       r0, 0x9(r1)
		  stw       r4, 0x3C(r1)
		  lbz       r4, 0xC(r1)
		  fsubs     f8, f8, f0
		  stw       r0, 0x54(r1)
		  lfd       f0, 0x38(r1)
		  lbz       r0, 0xA(r1)
		  fsubs     f7, f1, f8
		  stw       r4, 0x34(r1)
		  fsubs     f1, f0, f6
		  lbz       r4, 0xD(r1)
		  stw       r0, 0x6C(r1)
		  lfd       f0, 0x50(r1)
		  fmuls     f4, f1, f8
		  stw       r4, 0x4C(r1)
		  lfd       f2, 0x30(r1)
		  fsubs     f1, f0, f6
		  lbz       r0, 0xE(r1)
		  lfd       f0, 0x68(r1)
		  fsubs     f5, f2, f6
		  stw       r0, 0x64(r1)
		  fmuls     f2, f1, f8
		  lfd       f3, 0x48(r1)
		  fsubs     f0, f0, f6
		  lfd       f1, 0x60(r1)
		  fsubs     f3, f3, f6
		  fmadds    f4, f5, f7, f4
		  fsubs     f1, f1, f6
		  fmuls     f0, f0, f8
		  fmadds    f2, f3, f7, f2
		  fctiwz    f3, f4
		  fmadds    f0, f1, f7, f0
		  fctiwz    f1, f2
		  stfd      f3, 0x40(r1)
		  fctiwz    f0, f0
		  stfd      f1, 0x58(r1)
		  lwz       r0, 0x44(r1)
		  stfd      f0, 0x70(r1)
		  lwz       r4, 0x5C(r1)
		  stb       r0, 0x20(r3)
		  lwz       r0, 0x74(r1)
		  stb       r4, 0x21(r3)
		  stb       r0, 0x22(r3)
		  lbz       r0, 0xB(r1)
		  lbz       r4, 0xF(r1)
		  stw       r0, 0x84(r1)
		  stw       r6, 0x80(r1)
		  lfd       f0, 0x80(r1)
		  stw       r4, 0x7C(r1)
		  fsubs     f0, f0, f6
		  stw       r6, 0x78(r1)
		  lfd       f1, 0x78(r1)
		  fmuls     f0, f0, f8
		  fsubs     f1, f1, f6
		  fmadds    f0, f1, f7, f0
		  fctiwz    f0, f0
		  stfd      f0, 0x88(r1)
		  lwz       r0, 0x8C(r1)
		  stb       r0, 0x23(r3)
		  lwz       r4, 0x30(r3)
		  addi      r4, r4, 0x1
		  stw       r4, 0x30(r3)
		  lwz       r0, 0x2C(r3)
		  cmpw      r4, r0
		  blt-      .loc_0x1FC
		  li        r0, 0
		  stw       r0, 0x30(r3)
		  b         .loc_0x1FC

		.loc_0x1D4:
		  lbz       r4, 0x24(r3)
		  li        r0, 0
		  stb       r4, 0x20(r3)
		  lbz       r4, 0x25(r3)
		  stb       r4, 0x21(r3)
		  lbz       r4, 0x26(r3)
		  stb       r4, 0x22(r3)
		  lbz       r4, 0x27(r3)
		  stb       r4, 0x23(r3)
		  stw       r0, 0x30(r3)

		.loc_0x1FC:
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x1C(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x94(r1)
		  mtlr      r0
		  addi      r1, r1, 0x90
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8040C1E4
	 * Size:	000004
	 */
	void khUtilColorAnm::do_update() { }
} // namespace Screen
} // namespace kh
