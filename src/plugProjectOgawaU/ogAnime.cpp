#include "types.h"

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000088
	 */
	AnimBaseBase::AnimBaseBase(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000020
	 */
	void AnimBaseBase::setArea(float, float)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	00010C
	 */
	void AnimBaseBase::init(JKRArchive*, char*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80304CB0
	 * Size:	000010
	 */
	void AnimBaseBase::start(float)
	{
		/*
		.loc_0x0:
		  li        r0, 0x1
		  stb       r0, 0x8(r3)
		  stfs      f1, 0xC(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000024
	 */
	void AnimBaseBase::setAllArea(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80304CC0
	 * Size:	000150
	 */
	void AnimBaseBase::updateSub(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  li        r4, 0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  li        r31, 0x1
		  stw       r30, 0x8(r1)
		  mr        r30, r3
		  stb       r4, 0x39(r3)
		  lbz       r0, 0x10(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x38
		  stb       r4, 0x10(r30)
		  b         .loc_0x118

		.loc_0x38:
		  lfs       f1, 0x20(r30)
		  lfs       f0, 0x28(r30)
		  lfs       f2, 0x24(r30)
		  fmuls     f1, f1, f0
		  lfs       f0, 0x18(r30)
		  fmadds    f0, f2, f1, f0
		  stfs      f0, 0x18(r30)
		  lfs       f0, 0x18(r30)
		  lfs       f1, 0x30(r30)
		  fcmpo     cr0, f0, f1
		  ble-      .loc_0xBC
		  lbz       r0, 0x38(r30)
		  cmplwi    r0, 0
		  beq-      .loc_0xA0
		  fsubs     f1, f0, f1
		  lfs       f0, 0x34(r30)
		  fcmpo     cr0, f1, f0
		  cror      2, 0x1, 0x2
		  bne-      .loc_0x88
		  lfs       f1, -0xDC8(r2)

		.loc_0x88:
		  lfs       f0, 0x2C(r30)
		  li        r0, 0x1
		  fadds     f0, f0, f1
		  stfs      f0, 0x18(r30)
		  stb       r0, 0x39(r30)
		  b         .loc_0x118

		.loc_0xA0:
		  stfs      f1, 0x18(r30)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  li        r31, 0
		  b         .loc_0x118

		.loc_0xBC:
		  lfs       f2, 0x2C(r30)
		  fcmpo     cr0, f0, f2
		  bge-      .loc_0x118
		  lbz       r0, 0x38(r30)
		  cmplwi    r0, 0
		  beq-      .loc_0x100
		  fsubs     f2, f2, f0
		  lfs       f0, 0x34(r30)
		  fcmpo     cr0, f2, f0
		  cror      2, 0x1, 0x2
		  bne-      .loc_0xEC
		  lfs       f2, -0xDC8(r2)

		.loc_0xEC:
		  fsubs     f0, f1, f2
		  li        r0, 0x1
		  stfs      f0, 0x18(r30)
		  stb       r0, 0x39(r30)
		  b         .loc_0x118

		.loc_0x100:
		  stfs      f2, 0x18(r30)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  li        r31, 0

		.loc_0x118:
		  rlwinm.   r0,r31,0,24,31
		  beq-      .loc_0x134
		  mr        r3, r30
		  lwz       r12, 0x0(r30)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl

		.loc_0x134:
		  lwz       r0, 0x14(r1)
		  mr        r3, r31
		  lwz       r31, 0xC(r1)
		  lwz       r30, 0x8(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80304E10
	 * Size:	000078
	 */
	void AnimBaseBase::update(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  lbz       r0, 0x8(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x64
		  lwz       r4, -0x6514(r13)
		  lfs       f2, 0xC(r3)
		  lfs       f1, 0x54(r4)
		  lfs       f0, -0xDC8(r2)
		  fsubs     f1, f2, f1
		  stfs      f1, 0xC(r3)
		  lfs       f1, 0xC(r3)
		  fcmpo     cr0, f1, f0
		  cror      2, 0, 0x2
		  bne-      .loc_0x5C
		  li        r0, 0
		  stb       r0, 0x8(r3)
		  stfs      f0, 0xC(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x8(r12)
		  mtctr     r12
		  bctrl

		.loc_0x5C:
		  li        r3, 0x1
		  b         .loc_0x68

		.loc_0x64:
		  bl        -0x1B4

		.loc_0x68:
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80304E88
	 * Size:	00009C
	 */
	AnimScreen::AnimScreen(void)
	{
		/*
		.loc_0x0:
		  lis       r5, 0x804D
		  lis       r4, 0x804D
		  addi      r0, r5, 0x7E08
		  li        r7, 0
		  stw       r0, 0x0(r3)
		  li        r6, 0x1
		  lfs       f3, -0xDC8(r2)
		  li        r5, 0xFF
		  stw       r7, 0x4(r3)
		  addi      r0, r4, 0x7DF8
		  lfs       f1, -0xDC4(r2)
		  stfs      f3, 0x18(r3)
		  lfs       f0, -0xDC0(r2)
		  stfs      f1, 0x1C(r3)
		  stfs      f1, 0x20(r3)
		  stfs      f1, 0x24(r3)
		  stb       r6, 0x38(r3)
		  stb       r7, 0x39(r3)
		  stfs      f3, 0x2C(r3)
		  stfs      f1, 0x30(r3)
		  lfs       f2, 0x30(r3)
		  lfs       f1, 0x2C(r3)
		  fsubs     f1, f2, f1
		  stfs      f1, 0x34(r3)
		  lwz       r4, -0x6514(r13)
		  lfs       f1, 0x54(r4)
		  fdivs     f0, f1, f0
		  stfs      f0, 0x28(r3)
		  stw       r7, 0x14(r3)
		  stw       r7, 0x3C(r3)
		  stb       r7, 0x8(r3)
		  stfs      f3, 0xC(r3)
		  stb       r6, 0x10(r3)
		  stb       r5, 0x11(r3)
		  stb       r7, 0x12(r3)
		  stw       r0, 0x0(r3)
		  stw       r7, 0x40(r3)
		  stw       r6, 0x4(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80304F24
	 * Size:	000164
	 */
	void AnimScreen::init(JKRArchive*, J2DScreen*, char*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stw       r31, 0x1C(r1)
		  mr        r31, r5
		  stw       r30, 0x18(r1)
		  mr        r30, r3
		  stw       r29, 0x14(r1)
		  stw       r28, 0x10(r1)
		  mr        r28, r6
		  stw       r28, 0x3C(r3)
		  mr        r3, r28
		  bl        -0x2E1F3C
		  mr.       r29, r3
		  bne-      .loc_0x5C
		  lis       r5, 0x8049
		  lis       r4, 0x8049
		  subi      r3, r5, 0x21B0
		  mr        r6, r28
		  subi      r5, r4, 0x21A4
		  li        r4, 0x57
		  crclr     6, 0x6
		  bl        -0x2DA93C

		.loc_0x5C:
		  mr        r3, r29
		  bl        -0x2BD668
		  stw       r3, 0x14(r30)
		  lis       r0, 0x4330
		  li        r3, 0x4
		  lfd       f1, -0xDB8(r2)
		  lwz       r5, 0x14(r30)
		  li        r4, 0
		  stw       r0, 0x8(r1)
		  oris      r3, r3, 0x4
		  lha       r5, 0x6(r5)
		  li        r0, 0x1
		  lfs       f2, -0xDC8(r2)
		  subi      r5, r5, 0x1
		  xoris     r5, r5, 0x8000
		  stw       r5, 0xC(r1)
		  lfd       f0, 0x8(r1)
		  fsubs     f0, f0, f1
		  stfs      f0, 0x1C(r30)
		  stfs      f2, 0x2C(r30)
		  lfs       f0, 0x1C(r30)
		  stfs      f0, 0x30(r30)
		  lfs       f1, 0x30(r30)
		  lfs       f0, 0x2C(r30)
		  fsubs     f0, f1, f0
		  stfs      f0, 0x34(r30)
		  stb       r4, 0x8(r30)
		  stfs      f2, 0xC(r30)
		  stb       r0, 0x10(r30)
		  mtspr     914, r3
		  li        r3, 0x5
		  oris      r3, r3, 0x5
		  mtspr     915, r3
		  li        r3, 0x6
		  oris      r3, r3, 0x6
		  mtspr     916, r3
		  li        r3, 0x7
		  oris      r3, r3, 0x7
		  mtspr     917, r3
		  lwz       r29, 0x14(r30)
		  stw       r31, 0x40(r30)
		  mr        r4, r29
		  lwz       r3, 0x40(r30)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x5C(r12)
		  mtctr     r12
		  bctrl
		  mr        r3, r29
		  mr        r4, r31
		  lwz       r12, 0x0(r29)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  mr        r3, r30
		  lwz       r12, 0x0(r30)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x24(r1)
		  lwz       r31, 0x1C(r1)
		  lwz       r30, 0x18(r1)
		  lwz       r29, 0x14(r1)
		  lwz       r28, 0x10(r1)
		  mtlr      r0
		  addi      r1, r1, 0x20
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305088
	 * Size:	000090
	 */
	void AnimScreen::start(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  lwz       r0, 0x40(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x80
		  li        r5, 0
		  lfs       f2, -0xDC8(r2)
		  stb       r5, 0x8(r3)
		  li        r0, 0x1
		  stfs      f2, 0xC(r3)
		  stb       r0, 0x10(r3)
		  lbz       r0, 0x8(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x7C
		  lwz       r4, -0x6514(r13)
		  lfs       f1, 0xC(r3)
		  lfs       f0, 0x54(r4)
		  fsubs     f0, f1, f0
		  stfs      f0, 0xC(r3)
		  lfs       f0, 0xC(r3)
		  fcmpo     cr0, f0, f2
		  cror      2, 0, 0x2
		  bne-      .loc_0x80
		  stb       r5, 0x8(r3)
		  stfs      f2, 0xC(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x8(r12)
		  mtctr     r12
		  bctrl
		  b         .loc_0x80

		.loc_0x7C:
		  bl        -0x444

		.loc_0x80:
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305118
	 * Size:	000060
	 */
	void AnimScreen::moveAnim(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  lfs       f0, 0x18(r3)
		  lwz       r3, 0x14(r3)
		  stfs      f0, 0x8(r3)
		  lwz       r3, 0x40(r31)
		  bl        -0x2C4610
		  lbz       r0, 0x12(r31)
		  cmplwi    r0, 0
		  beq-      .loc_0x4C
		  lwz       r3, 0x40(r31)
		  lbz       r4, 0x11(r31)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x24(r12)
		  mtctr     r12
		  bctrl

		.loc_0x4C:
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305178
	 * Size:	0000A0
	 */
	AnimPane::AnimPane(void)
	{
		/*
		.loc_0x0:
		  lis       r5, 0x804D
		  lis       r4, 0x804D
		  addi      r0, r5, 0x7E08
		  li        r8, 0
		  stw       r0, 0x0(r3)
		  li        r7, 0x1
		  lfs       f3, -0xDC8(r2)
		  li        r5, 0xFF
		  stw       r8, 0x4(r3)
		  addi      r4, r4, 0x7DE8
		  lfs       f1, -0xDC4(r2)
		  li        r0, 0x2
		  stfs      f3, 0x18(r3)
		  lfs       f0, -0xDC0(r2)
		  stfs      f1, 0x1C(r3)
		  stfs      f1, 0x20(r3)
		  stfs      f1, 0x24(r3)
		  stb       r7, 0x38(r3)
		  stb       r8, 0x39(r3)
		  stfs      f3, 0x2C(r3)
		  stfs      f1, 0x30(r3)
		  lfs       f2, 0x30(r3)
		  lfs       f1, 0x2C(r3)
		  fsubs     f1, f2, f1
		  stfs      f1, 0x34(r3)
		  lwz       r6, -0x6514(r13)
		  lfs       f1, 0x54(r6)
		  fdivs     f0, f1, f0
		  stfs      f0, 0x28(r3)
		  stw       r8, 0x14(r3)
		  stw       r8, 0x3C(r3)
		  stb       r8, 0x8(r3)
		  stfs      f3, 0xC(r3)
		  stb       r7, 0x10(r3)
		  stb       r5, 0x11(r3)
		  stb       r8, 0x12(r3)
		  stw       r4, 0x0(r3)
		  stw       r8, 0x40(r3)
		  stw       r0, 0x4(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305218
	 * Size:	000150
	 */
	void AnimPane::init(JKRArchive*, J2DScreen*, unsigned long long, char*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x30(r1)
		  mflr      r0
		  stw       r0, 0x34(r1)
		  stmw      r26, 0x18(r1)
		  mr        r26, r9
		  mr        r28, r3
		  mr        r29, r5
		  mr        r31, r7
		  mr        r30, r8
		  stw       r26, 0x3C(r3)
		  mr        r3, r26
		  bl        -0x2E222C
		  mr.       r27, r3
		  bne-      .loc_0x58
		  lis       r5, 0x8049
		  lis       r4, 0x8049
		  subi      r3, r5, 0x21B0
		  mr        r6, r26
		  subi      r5, r4, 0x21A4
		  li        r4, 0x57
		  crclr     6, 0x6
		  bl        -0x2DAC2C

		.loc_0x58:
		  mr        r3, r27
		  bl        -0x2BD958
		  stw       r3, 0x14(r28)
		  lis       r0, 0x4330
		  li        r3, 0x4
		  lfd       f1, -0xDB8(r2)
		  lwz       r5, 0x14(r28)
		  li        r4, 0
		  stw       r0, 0x8(r1)
		  oris      r3, r3, 0x4
		  lha       r5, 0x6(r5)
		  li        r0, 0x1
		  lfs       f2, -0xDC8(r2)
		  subi      r5, r5, 0x1
		  xoris     r5, r5, 0x8000
		  stw       r5, 0xC(r1)
		  lfd       f0, 0x8(r1)
		  fsubs     f0, f0, f1
		  stfs      f0, 0x1C(r28)
		  stfs      f2, 0x2C(r28)
		  lfs       f0, 0x1C(r28)
		  stfs      f0, 0x30(r28)
		  lfs       f1, 0x30(r28)
		  lfs       f0, 0x2C(r28)
		  fsubs     f0, f1, f0
		  stfs      f0, 0x34(r28)
		  stb       r4, 0x8(r28)
		  stfs      f2, 0xC(r28)
		  stb       r0, 0x10(r28)
		  mtspr     914, r3
		  li        r3, 0x5
		  oris      r3, r3, 0x5
		  mtspr     915, r3
		  li        r3, 0x6
		  oris      r3, r3, 0x6
		  mtspr     916, r3
		  li        r3, 0x7
		  oris      r3, r3, 0x7
		  mtspr     917, r3
		  lwz       r27, 0x14(r28)
		  mr        r3, r29
		  mr        r6, r30
		  mr        r5, r31
		  bl        -0x2470
		  stw       r3, 0x40(r28)
		  mr        r4, r27
		  lwz       r3, 0x40(r28)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x5C(r12)
		  mtctr     r12
		  bctrl
		  mr        r3, r27
		  mr        r4, r29
		  lwz       r12, 0x0(r27)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  lmw       r26, 0x18(r1)
		  lwz       r0, 0x34(r1)
		  mtlr      r0
		  addi      r1, r1, 0x30
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305368
	 * Size:	000090
	 */
	void AnimPane::start(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  lwz       r0, 0x40(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x80
		  li        r5, 0
		  lfs       f2, -0xDC8(r2)
		  stb       r5, 0x8(r3)
		  li        r0, 0x1
		  stfs      f2, 0xC(r3)
		  stb       r0, 0x10(r3)
		  lbz       r0, 0x8(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x7C
		  lwz       r4, -0x6514(r13)
		  lfs       f1, 0xC(r3)
		  lfs       f0, 0x54(r4)
		  fsubs     f0, f1, f0
		  stfs      f0, 0xC(r3)
		  lfs       f0, 0xC(r3)
		  fcmpo     cr0, f0, f2
		  cror      2, 0, 0x2
		  bne-      .loc_0x80
		  stb       r5, 0x8(r3)
		  stfs      f2, 0xC(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x8(r12)
		  mtctr     r12
		  bctrl
		  b         .loc_0x80

		.loc_0x7C:
		  bl        -0x724

		.loc_0x80:
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803053F8
	 * Size:	000060
	 */
	void AnimPane::moveAnim(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  lfs       f0, 0x18(r3)
		  lwz       r3, 0x14(r3)
		  stfs      f0, 0x8(r3)
		  lwz       r3, 0x40(r31)
		  bl        -0x2CBE20
		  lbz       r0, 0x12(r31)
		  cmplwi    r0, 0
		  beq-      .loc_0x4C
		  lwz       r3, 0x40(r31)
		  lbz       r4, 0x11(r31)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x24(r12)
		  mtctr     r12
		  bctrl

		.loc_0x4C:
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305458
	 * Size:	000090
	 */
	AnimGroup::AnimGroup(int)
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
		  rlwinm    r3,r4,2,0,29
		  bl        -0x2E14CC
		  stw       r3, 0x0(r30)
		  li        r4, 0
		  mr        r5, r4
		  li        r6, 0
		  stw       r4, 0x4(r30)
		  stw       r31, 0x8(r30)
		  b         .loc_0x50

		.loc_0x40:
		  lwz       r3, 0x0(r30)
		  addi      r6, r6, 0x1
		  stwx      r4, r3, r5
		  addi      r5, r5, 0x4

		.loc_0x50:
		  lwz       r0, 0x8(r30)
		  cmpw      r6, r0
		  blt+      .loc_0x40
		  li        r0, 0
		  lfs       f0, -0xDC8(r2)
		  stb       r0, 0xC(r30)
		  mr        r3, r30
		  stfs      f0, 0x10(r30)
		  stfs      f0, 0x14(r30)
		  stfs      f0, 0x18(r30)
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
	 * Address:	........
	 * Size:	000064
	 */
	void AnimGroup::setAnim(og::Screen::AnimBaseBase*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	803054E8
	 * Size:	0001C0
	 */
	void AnimGroup::update(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x30(r1)
		  mflr      r0
		  stw       r0, 0x34(r1)
		  stw       r31, 0x2C(r1)
		  li        r31, 0
		  stw       r30, 0x28(r1)
		  li        r30, 0
		  stw       r29, 0x24(r1)
		  li        r29, 0
		  stw       r28, 0x20(r1)
		  mr        r28, r3
		  b         .loc_0x138

		.loc_0x30:
		  lwz       r3, 0x0(r28)
		  lwzx      r3, r3, r31
		  cmplwi    r3, 0
		  beq-      .loc_0x130
		  lwz       r0, 0x4(r3)
		  li        r4, 0x1
		  cmpwi     r0, 0x2
		  beq-      .loc_0xC4
		  bge-      .loc_0x124
		  cmpwi     r0, 0x1
		  bge-      .loc_0x60
		  b         .loc_0x124

		.loc_0x60:
		  lbz       r0, 0x8(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0xB8
		  lwz       r4, -0x6514(r13)
		  lfs       f2, 0xC(r3)
		  lfs       f1, 0x54(r4)
		  lfs       f0, -0xDC8(r2)
		  fsubs     f1, f2, f1
		  stfs      f1, 0xC(r3)
		  lfs       f1, 0xC(r3)
		  fcmpo     cr0, f1, f0
		  cror      2, 0, 0x2
		  bne-      .loc_0xB0
		  li        r0, 0
		  stb       r0, 0x8(r3)
		  stfs      f0, 0xC(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x8(r12)
		  mtctr     r12
		  bctrl

		.loc_0xB0:
		  li        r3, 0x1
		  b         .loc_0xBC

		.loc_0xB8:
		  bl        -0x8E0

		.loc_0xBC:
		  mr        r4, r3
		  b         .loc_0x124

		.loc_0xC4:
		  lbz       r0, 0x8(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x11C
		  lwz       r4, -0x6514(r13)
		  lfs       f2, 0xC(r3)
		  lfs       f1, 0x54(r4)
		  lfs       f0, -0xDC8(r2)
		  fsubs     f1, f2, f1
		  stfs      f1, 0xC(r3)
		  lfs       f1, 0xC(r3)
		  fcmpo     cr0, f1, f0
		  cror      2, 0, 0x2
		  bne-      .loc_0x114
		  li        r0, 0
		  stb       r0, 0x8(r3)
		  stfs      f0, 0xC(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x8(r12)
		  mtctr     r12
		  bctrl

		.loc_0x114:
		  li        r3, 0x1
		  b         .loc_0x120

		.loc_0x11C:
		  bl        -0x944

		.loc_0x120:
		  mr        r4, r3

		.loc_0x124:
		  rlwinm.   r0,r4,0,24,31
		  beq-      .loc_0x130
		  li        r30, 0x1

		.loc_0x130:
		  addi      r31, r31, 0x4
		  addi      r29, r29, 0x1

		.loc_0x138:
		  lwz       r0, 0x8(r28)
		  cmpw      r29, r0
		  blt+      .loc_0x30
		  lbz       r0, 0xC(r28)
		  cmplwi    r0, 0
		  beq-      .loc_0x19C
		  mr        r3, r28
		  bl        0x1D4
		  lfs       f0, 0x10(r28)
		  fctiwz    f1, f1
		  fctiwz    f0, f0
		  stfd      f1, 0x8(r1)
		  stfd      f0, 0x10(r1)
		  lwz       r3, 0xC(r1)
		  lwz       r0, 0x14(r1)
		  cmpw      r3, r0
		  bne-      .loc_0x19C
		  lfs       f1, 0x14(r28)
		  mr        r3, r28
		  lfs       f2, 0x18(r28)
		  bl        0x1C0
		  mr        r3, r28
		  bl        0x240
		  li        r0, 0
		  stb       r0, 0xC(r28)

		.loc_0x19C:
		  lwz       r0, 0x34(r1)
		  mr        r3, r30
		  lwz       r31, 0x2C(r1)
		  lwz       r30, 0x28(r1)
		  lwz       r29, 0x24(r1)
		  lwz       r28, 0x20(r1)
		  mtlr      r0
		  addi      r1, r1, 0x30
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803056A8
	 * Size:	00005C
	 */
	void AnimGroup::setSpeed(float)
	{
		/*
		.loc_0x0:
		  li        r6, 0
		  li        r5, 0
		  b         .loc_0x4C

		.loc_0xC:
		  lwz       r4, 0x0(r3)
		  lwzx      r4, r4, r5
		  cmplwi    r4, 0
		  beq-      .loc_0x44
		  lwz       r0, 0x4(r4)
		  cmpwi     r0, 0x2
		  beq-      .loc_0x40
		  bge-      .loc_0x44
		  cmpwi     r0, 0x1
		  bge-      .loc_0x38
		  b         .loc_0x44

		.loc_0x38:
		  stfs      f1, 0x20(r4)
		  b         .loc_0x44

		.loc_0x40:
		  stfs      f1, 0x20(r4)

		.loc_0x44:
		  addi      r5, r5, 0x4
		  addi      r6, r6, 0x1

		.loc_0x4C:
		  lwz       r0, 0x8(r3)
		  cmpw      r6, r0
		  blt+      .loc_0xC
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305704
	 * Size:	00005C
	 */
	void AnimGroup::setRepeat(bool)
	{
		/*
		.loc_0x0:
		  li        r7, 0
		  li        r6, 0
		  b         .loc_0x4C

		.loc_0xC:
		  lwz       r5, 0x0(r3)
		  lwzx      r5, r5, r6
		  cmplwi    r5, 0
		  beq-      .loc_0x44
		  lwz       r0, 0x4(r5)
		  cmpwi     r0, 0x2
		  beq-      .loc_0x40
		  bge-      .loc_0x44
		  cmpwi     r0, 0x1
		  bge-      .loc_0x38
		  b         .loc_0x44

		.loc_0x38:
		  stb       r4, 0x38(r5)
		  b         .loc_0x44

		.loc_0x40:
		  stb       r4, 0x38(r5)

		.loc_0x44:
		  addi      r6, r6, 0x4
		  addi      r7, r7, 0x1

		.loc_0x4C:
		  lwz       r0, 0x8(r3)
		  cmpw      r7, r0
		  blt+      .loc_0xC
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305760
	 * Size:	00005C
	 */
	void AnimGroup::setFrame(float)
	{
		/*
		.loc_0x0:
		  li        r6, 0
		  li        r5, 0
		  b         .loc_0x4C

		.loc_0xC:
		  lwz       r4, 0x0(r3)
		  lwzx      r4, r4, r5
		  cmplwi    r4, 0
		  beq-      .loc_0x44
		  lwz       r0, 0x4(r4)
		  cmpwi     r0, 0x2
		  beq-      .loc_0x40
		  bge-      .loc_0x44
		  cmpwi     r0, 0x1
		  bge-      .loc_0x38
		  b         .loc_0x44

		.loc_0x38:
		  stfs      f1, 0x18(r4)
		  b         .loc_0x44

		.loc_0x40:
		  stfs      f1, 0x18(r4)

		.loc_0x44:
		  addi      r5, r5, 0x4
		  addi      r6, r6, 0x1

		.loc_0x4C:
		  lwz       r0, 0x8(r3)
		  cmpw      r6, r0
		  blt+      .loc_0xC
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000040
	 */
	void AnimGroup::setAlpha(unsigned char)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	803057BC
	 * Size:	000054
	 */
	void AnimGroup::setAllArea(void)
	{
		/*
		.loc_0x0:
		  lfs       f2, -0xDC8(r2)
		  li        r6, 0
		  li        r5, 0
		  b         .loc_0x44

		.loc_0x10:
		  lwz       r4, 0x0(r3)
		  lwzx      r4, r4, r5
		  cmplwi    r4, 0
		  beq-      .loc_0x3C
		  stfs      f2, 0x2C(r4)
		  lfs       f0, 0x1C(r4)
		  stfs      f0, 0x30(r4)
		  lfs       f1, 0x30(r4)
		  lfs       f0, 0x2C(r4)
		  fsubs     f0, f1, f0
		  stfs      f0, 0x34(r4)

		.loc_0x3C:
		  addi      r5, r5, 0x4
		  addi      r6, r6, 0x1

		.loc_0x44:
		  lwz       r0, 0x8(r3)
		  cmpw      r6, r0
		  blt+      .loc_0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305810
	 * Size:	000020
	 */
	void AnimGroup::getFrame(void)
	{
		/*
		.loc_0x0:
		  lwz       r0, 0x4(r3)
		  lfs       f1, -0xDC8(r2)
		  cmpwi     r0, 0
		  blelr-
		  lwz       r3, 0x0(r3)
		  lwz       r3, 0x0(r3)
		  lfs       f1, 0x18(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305830
	 * Size:	000088
	 */
	void AnimGroup::setArea(float, float)
	{
		/*
		.loc_0x0:
		  fsubs     f0, f2, f1
		  li        r6, 0
		  li        r5, 0
		  b         .loc_0x78

		.loc_0x10:
		  lwz       r4, 0x0(r3)
		  lwzx      r4, r4, r5
		  cmplwi    r4, 0
		  beq-      .loc_0x70
		  lwz       r0, 0x4(r4)
		  cmpwi     r0, 0x2
		  beq-      .loc_0x58
		  bge-      .loc_0x70
		  cmpwi     r0, 0x1
		  bge-      .loc_0x3C
		  b         .loc_0x70

		.loc_0x3C:
		  stfs      f1, 0x2C(r4)
		  li        r0, 0x1
		  stfs      f2, 0x30(r4)
		  stfs      f0, 0x34(r4)
		  stfs      f1, 0x18(r4)
		  stb       r0, 0x10(r4)
		  b         .loc_0x70

		.loc_0x58:
		  stfs      f1, 0x2C(r4)
		  li        r0, 0x1
		  stfs      f2, 0x30(r4)
		  stfs      f0, 0x34(r4)
		  stfs      f1, 0x18(r4)
		  stb       r0, 0x10(r4)

		.loc_0x70:
		  addi      r5, r5, 0x4
		  addi      r6, r6, 0x1

		.loc_0x78:
		  lwz       r0, 0x8(r3)
		  cmpw      r6, r0
		  blt+      .loc_0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803058B8
	 * Size:	0000A8
	 */
	void AnimGroup::start(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stw       r31, 0x1C(r1)
		  li        r31, 0
		  stw       r30, 0x18(r1)
		  li        r30, 0
		  stw       r29, 0x14(r1)
		  mr        r29, r3
		  b         .loc_0x80

		.loc_0x28:
		  lwz       r3, 0x0(r29)
		  lwzx      r3, r3, r31
		  cmplwi    r3, 0
		  beq-      .loc_0x78
		  lwz       r0, 0x4(r3)
		  cmpwi     r0, 0x2
		  beq-      .loc_0x68
		  bge-      .loc_0x78
		  cmpwi     r0, 0x1
		  bge-      .loc_0x54
		  b         .loc_0x78

		.loc_0x54:
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x8(r12)
		  mtctr     r12
		  bctrl
		  b         .loc_0x78

		.loc_0x68:
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x8(r12)
		  mtctr     r12
		  bctrl

		.loc_0x78:
		  addi      r31, r31, 0x4
		  addi      r30, r30, 0x1

		.loc_0x80:
		  lwz       r0, 0x8(r29)
		  cmpw      r30, r0
		  blt+      .loc_0x28
		  lwz       r0, 0x24(r1)
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
	 * Address:	80305960
	 * Size:	000018
	 */
	void AnimGroup::reservAnim(float, float, float)
	{
		/*
		.loc_0x0:
		  li        r0, 0x1
		  stb       r0, 0xC(r3)
		  stfs      f1, 0x10(r3)
		  stfs      f2, 0x14(r3)
		  stfs      f3, 0x18(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305978
	 * Size:	000020
	 */
	void AnimGroup::getLastFrame(void)
	{
		/*
		.loc_0x0:
		  lwz       r0, 0x4(r3)
		  lfs       f1, -0xDC8(r2)
		  cmpwi     r0, 0
		  blelr-
		  lwz       r3, 0x0(r3)
		  lwz       r3, 0x0(r3)
		  lfs       f1, 0x1C(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305998
	 * Size:	000254
	 */
	void registAnimGroupScreen(og::Screen::AnimGroup*, JKRArchive*, J2DScreen*,
	                           char*, float)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x40(r1)
		  mflr      r0
		  stw       r0, 0x44(r1)
		  stfd      f31, 0x30(r1)
		  psq_st    f31,0x38(r1),0,0
		  stmw      r26, 0x18(r1)
		  fmr       f31, f1
		  lis       r7, 0x8049
		  mr        r27, r3
		  mr        r26, r4
		  mr        r28, r5
		  mr        r29, r6
		  subi      r31, r7, 0x21B0
		  li        r3, 0x44
		  bl        -0x2E1B2C
		  mr.       r30, r3
		  beq-      .loc_0xDC
		  lis       r5, 0x804D
		  lis       r4, 0x804D
		  addi      r0, r5, 0x7E08
		  li        r7, 0
		  stw       r0, 0x0(r30)
		  li        r6, 0x1
		  lfs       f3, -0xDC8(r2)
		  li        r5, 0xFF
		  stw       r7, 0x4(r30)
		  addi      r0, r4, 0x7DF8
		  lfs       f1, -0xDC4(r2)
		  stfs      f3, 0x18(r30)
		  lfs       f0, -0xDC0(r2)
		  stfs      f1, 0x1C(r30)
		  stfs      f1, 0x20(r30)
		  stfs      f1, 0x24(r30)
		  stb       r6, 0x38(r30)
		  stb       r7, 0x39(r30)
		  stfs      f3, 0x2C(r30)
		  stfs      f1, 0x30(r30)
		  lfs       f2, 0x30(r30)
		  lfs       f1, 0x2C(r30)
		  fsubs     f1, f2, f1
		  stfs      f1, 0x34(r30)
		  lwz       r4, -0x6514(r13)
		  lfs       f1, 0x54(r4)
		  fdivs     f0, f1, f0
		  stfs      f0, 0x28(r30)
		  stw       r7, 0x14(r30)
		  stw       r7, 0x3C(r30)
		  stb       r7, 0x8(r30)
		  stfs      f3, 0xC(r30)
		  stb       r6, 0x10(r30)
		  stb       r5, 0x11(r30)
		  stb       r7, 0x12(r30)
		  stw       r0, 0x0(r30)
		  stw       r7, 0x40(r30)
		  stw       r6, 0x4(r30)

		.loc_0xDC:
		  stw       r29, 0x3C(r30)
		  mr        r3, r29
		  mr        r4, r26
		  bl        -0x2E2A68
		  mr.       r26, r3
		  bne-      .loc_0x10C
		  mr        r6, r29
		  addi      r3, r31, 0
		  addi      r5, r31, 0xC
		  li        r4, 0x57
		  crclr     6, 0x6
		  bl        -0x2DB460

		.loc_0x10C:
		  mr        r3, r26
		  bl        -0x2BE18C
		  stw       r3, 0x14(r30)
		  lis       r0, 0x4330
		  li        r3, 0x4
		  lfd       f1, -0xDB8(r2)
		  lwz       r5, 0x14(r30)
		  li        r4, 0
		  stw       r0, 0x8(r1)
		  oris      r3, r3, 0x4
		  lha       r5, 0x6(r5)
		  li        r0, 0x1
		  lfs       f2, -0xDC8(r2)
		  subi      r5, r5, 0x1
		  xoris     r5, r5, 0x8000
		  stw       r5, 0xC(r1)
		  lfd       f0, 0x8(r1)
		  fsubs     f0, f0, f1
		  stfs      f0, 0x1C(r30)
		  stfs      f2, 0x2C(r30)
		  lfs       f0, 0x1C(r30)
		  stfs      f0, 0x30(r30)
		  lfs       f1, 0x30(r30)
		  lfs       f0, 0x2C(r30)
		  fsubs     f0, f1, f0
		  stfs      f0, 0x34(r30)
		  stb       r4, 0x8(r30)
		  stfs      f2, 0xC(r30)
		  stb       r0, 0x10(r30)
		  mtspr     914, r3
		  li        r3, 0x5
		  oris      r3, r3, 0x5
		  mtspr     915, r3
		  li        r3, 0x6
		  oris      r3, r3, 0x6
		  mtspr     916, r3
		  li        r3, 0x7
		  oris      r3, r3, 0x7
		  mtspr     917, r3
		  lwz       r26, 0x14(r30)
		  stw       r28, 0x40(r30)
		  mr        r4, r26
		  lwz       r3, 0x40(r30)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x5C(r12)
		  mtctr     r12
		  bctrl
		  mr        r3, r26
		  mr        r4, r28
		  lwz       r12, 0x0(r26)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  mr        r3, r30
		  lwz       r12, 0x0(r30)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  stfs      f31, 0x24(r30)
		  lwz       r5, 0x4(r27)
		  lwz       r0, 0x8(r27)
		  cmpw      r5, r0
		  blt-      .loc_0x220
		  addi      r3, r31, 0
		  addi      r5, r31, 0x24
		  li        r4, 0x143
		  crclr     6, 0x6
		  bl        -0x2DB570
		  b         .loc_0x238

		.loc_0x220:
		  lwz       r4, 0x0(r27)
		  rlwinm    r0,r5,2,0,29
		  stwx      r30, r4, r0
		  lwz       r4, 0x4(r27)
		  addi      r0, r4, 0x1
		  stw       r0, 0x4(r27)

		.loc_0x238:
		  psq_l     f31,0x38(r1),0,0
		  lfd       f31, 0x30(r1)
		  lmw       r26, 0x18(r1)
		  lwz       r0, 0x44(r1)
		  mtlr      r0
		  addi      r1, r1, 0x40
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305BEC
	 * Size:	00025C
	 */
	void registAnimGroupPane(og::Screen::AnimGroup*, JKRArchive*, J2DScreen*,
	                         unsigned long long, char*, float)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x40(r1)
		  mflr      r0
		  stw       r0, 0x44(r1)
		  stfd      f31, 0x30(r1)
		  psq_st    f31,0x38(r1),0,0
		  stmw      r24, 0x10(r1)
		  fmr       f31, f1
		  lis       r6, 0x8049
		  mr        r24, r3
		  mr        r25, r4
		  mr        r26, r5
		  mr        r28, r7
		  mr        r27, r8
		  mr        r29, r9
		  subi      r30, r6, 0x21B0
		  li        r3, 0x44
		  bl        -0x2E1D88
		  mr.       r31, r3
		  beq-      .loc_0xE8
		  lis       r5, 0x804D
		  lis       r4, 0x804D
		  addi      r0, r5, 0x7E08
		  li        r8, 0
		  stw       r0, 0x0(r31)
		  li        r7, 0x1
		  lfs       f3, -0xDC8(r2)
		  li        r5, 0xFF
		  stw       r8, 0x4(r31)
		  addi      r4, r4, 0x7DE8
		  lfs       f1, -0xDC4(r2)
		  li        r0, 0x2
		  stfs      f3, 0x18(r31)
		  lfs       f0, -0xDC0(r2)
		  stfs      f1, 0x1C(r31)
		  stfs      f1, 0x20(r31)
		  stfs      f1, 0x24(r31)
		  stb       r7, 0x38(r31)
		  stb       r8, 0x39(r31)
		  stfs      f3, 0x2C(r31)
		  stfs      f1, 0x30(r31)
		  lfs       f2, 0x30(r31)
		  lfs       f1, 0x2C(r31)
		  fsubs     f1, f2, f1
		  stfs      f1, 0x34(r31)
		  lwz       r6, -0x6514(r13)
		  lfs       f1, 0x54(r6)
		  fdivs     f0, f1, f0
		  stfs      f0, 0x28(r31)
		  stw       r8, 0x14(r31)
		  stw       r8, 0x3C(r31)
		  stb       r8, 0x8(r31)
		  stfs      f3, 0xC(r31)
		  stb       r7, 0x10(r31)
		  stb       r5, 0x11(r31)
		  stb       r8, 0x12(r31)
		  stw       r4, 0x0(r31)
		  stw       r8, 0x40(r31)
		  stw       r0, 0x4(r31)

		.loc_0xE8:
		  stw       r29, 0x3C(r31)
		  mr        r3, r29
		  mr        r4, r25
		  bl        -0x2E2CC8
		  mr.       r25, r3
		  bne-      .loc_0x118
		  mr        r6, r29
		  addi      r3, r30, 0
		  addi      r5, r30, 0xC
		  li        r4, 0x57
		  crclr     6, 0x6
		  bl        -0x2DB6C0

		.loc_0x118:
		  mr        r3, r25
		  bl        -0x2BE3EC
		  stw       r3, 0x14(r31)
		  lis       r0, 0x4330
		  li        r3, 0x4
		  lfd       f1, -0xDB8(r2)
		  lwz       r5, 0x14(r31)
		  li        r4, 0
		  stw       r0, 0x8(r1)
		  oris      r3, r3, 0x4
		  lha       r5, 0x6(r5)
		  li        r0, 0x1
		  lfs       f2, -0xDC8(r2)
		  subi      r5, r5, 0x1
		  xoris     r5, r5, 0x8000
		  stw       r5, 0xC(r1)
		  lfd       f0, 0x8(r1)
		  fsubs     f0, f0, f1
		  stfs      f0, 0x1C(r31)
		  stfs      f2, 0x2C(r31)
		  lfs       f0, 0x1C(r31)
		  stfs      f0, 0x30(r31)
		  lfs       f1, 0x30(r31)
		  lfs       f0, 0x2C(r31)
		  fsubs     f0, f1, f0
		  stfs      f0, 0x34(r31)
		  stb       r4, 0x8(r31)
		  stfs      f2, 0xC(r31)
		  stb       r0, 0x10(r31)
		  mtspr     914, r3
		  li        r3, 0x5
		  oris      r3, r3, 0x5
		  mtspr     915, r3
		  li        r3, 0x6
		  oris      r3, r3, 0x6
		  mtspr     916, r3
		  li        r3, 0x7
		  oris      r3, r3, 0x7
		  mtspr     917, r3
		  lwz       r25, 0x14(r31)
		  mr        r3, r26
		  mr        r6, r27
		  mr        r5, r28
		  bl        -0x2F04
		  stw       r3, 0x40(r31)
		  mr        r4, r25
		  lwz       r3, 0x40(r31)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x5C(r12)
		  mtctr     r12
		  bctrl
		  mr        r3, r25
		  mr        r4, r26
		  lwz       r12, 0x0(r25)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  stfs      f31, 0x24(r31)
		  lwz       r5, 0x4(r24)
		  lwz       r0, 0x8(r24)
		  cmpw      r5, r0
		  blt-      .loc_0x228
		  addi      r3, r30, 0
		  addi      r5, r30, 0x24
		  li        r4, 0x143
		  crclr     6, 0x6
		  bl        -0x2DB7CC
		  b         .loc_0x240

		.loc_0x228:
		  lwz       r4, 0x0(r24)
		  rlwinm    r0,r5,2,0,29
		  stwx      r31, r4, r0
		  lwz       r4, 0x4(r24)
		  addi      r0, r4, 0x1
		  stw       r0, 0x4(r24)

		.loc_0x240:
		  psq_l     f31,0x38(r1),0,0
		  lfd       f31, 0x30(r1)
		  lmw       r24, 0x10(r1)
		  lwz       r0, 0x44(r1)
		  mtlr      r0
		  addi      r1, r1, 0x40
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000058
	 */
	AnimList::AnimList(unsigned short)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000040
	 */
	void AnimList::addAnim(og::Screen::AnimScreen*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000014
	 */
	void AnimList::start(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000084
	 */
	void AnimList::nextAnim(float)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000114
	 */
	void AnimList::update(void)
	{
		// UNUSED FUNCTION
	}
} // namespace Screen
} // namespace og
