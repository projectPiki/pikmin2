#include "types.h"

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	8032C3AC
	 * Size:	0000A0
	 */
	TotalPokoScreen::TotalPokoScreen(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  bl        0x1089EC
		  lis       r3, 0x804E
		  li        r4, 0
		  subi      r3, r3, 0x6050
		  li        r0, 0x9A5
		  stw       r3, 0x0(r31)
		  li        r3, 0x1C
		  lfs       f0, -0x438(r2)
		  stb       r4, 0x154(r31)
		  stw       r0, 0x148(r31)
		  lwz       r0, 0x148(r31)
		  stw       r0, 0x14C(r31)
		  lwz       r0, 0x148(r31)
		  stw       r0, 0x150(r31)
		  stw       r4, 0x158(r31)
		  stw       r4, 0x15C(r31)
		  stfs      f0, 0x160(r31)
		  stfs      f0, 0x164(r31)
		  stfs      f0, 0x168(r31)
		  stfs      f0, 0x16C(r31)
		  stfs      f0, 0x170(r31)
		  stfs      f0, 0x174(r31)
		  stb       r4, 0x178(r31)
		  bl        -0x308578
		  mr.       r0, r3
		  beq-      .loc_0x84
		  bl        -0x3624
		  mr        r0, r3

		.loc_0x84:
		  stw       r0, 0x17C(r31)
		  mr        r3, r31
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032C44C
	 * Size:	000070
	 */
	void TotalPokoScreen::showTotalPoko(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  lbz       r0, 0x154(r3)
		  cmplwi    r0, 0
		  bne-      .loc_0x5C
		  li        r0, 0x1
		  lfs       f0, -0x434(r2)
		  stb       r0, 0x154(r31)
		  stfs      f0, 0x174(r31)
		  stb       r0, 0x178(r31)
		  bl        -0x14558
		  rlwinm.   r0,r3,0,24,31
		  bne-      .loc_0x48
		  lwz       r3, -0x6858(r13)
		  bl        -0x1F6E8

		.loc_0x48:
		  lwz       r3, 0x14C(r31)
		  li        r0, 0x1
		  stw       r3, 0x150(r31)
		  lwz       r3, 0x15C(r31)
		  stb       r0, 0xB0(r3)

		.loc_0x5C:
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032C4BC
	 * Size:	000070
	 */
	void TotalPokoScreen::setTotalPoko(unsigned long)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  lwz       r0, 0x148(r3)
		  stw       r0, 0x14C(r3)
		  stw       r4, 0x148(r3)
		  lbz       r0, 0x154(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x60
		  lfs       f1, 0x174(r3)
		  lfs       f0, -0x438(r2)
		  fcmpo     cr0, f1, f0
		  cror      2, 0, 0x2
		  bne-      .loc_0x60
		  lbz       r0, 0x178(r3)
		  cmplwi    r0, 0
		  bne-      .loc_0x60
		  li        r0, 0x1
		  stb       r0, 0x178(r3)
		  bl        -0x145E0
		  rlwinm.   r0,r3,0,24,31
		  bne-      .loc_0x60
		  lwz       r3, -0x6858(r13)
		  bl        -0x1F718

		.loc_0x60:
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032C52C
	 * Size:	000044
	 */
	void TotalPokoScreen::closeTotalPoko(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  lbz       r0, 0x154(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x30
		  lwz       r3, -0x6858(r13)
		  bl        -0x1F77C
		  li        r0, 0
		  stb       r0, 0x154(r31)

		.loc_0x30:
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032C570
	 * Size:	000010
	 */
	void TotalPokoScreen::hideTotalPoko(void)
	{
		/*
		.loc_0x0:
		  lwz       r3, 0x15C(r3)
		  li        r0, 0
		  stb       r0, 0xB0(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032C580
	 * Size:	000138
	 */
	void TotalPokoScreen::setCallBack(JKRArchive*, float, float, float, float)
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
		  stfd      f28, 0x20(r1)
		  psq_st    f28,0x28(r1),0,0
		  stw       r31, 0x1C(r1)
		  fmr       f28, f1
		  mr        r31, r3
		  lis       r6, 0x6B6F
		  lis       r5, 0x50
		  fmr       f29, f2
		  stw       r4, 0x8(r1)
		  fmr       f30, f3
		  addi      r6, r6, 0x3031
		  fmr       f31, f4
		  addi      r5, r5, 0x706F
		  addi      r7, r31, 0x150
		  li        r8, 0xA
		  li        r9, 0
		  li        r10, 0x1
		  bl        -0x1FFE0
		  stw       r3, 0x158(r31)
		  mr        r3, r31
		  lis       r4, 0x706F
		  li        r5, 0x4E
		  lwz       r12, 0x0(r31)
		  addi      r6, r4, 0x6B6F
		  lwz       r12, 0x3C(r12)
		  mtctr     r12
		  bctrl
		  stw       r3, 0x15C(r31)
		  lfs       f0, -0x438(r2)
		  stfs      f0, 0x160(r31)
		  lwz       r3, 0x15C(r31)
		  lfs       f0, 0xD4(r3)
		  fadds     f0, f28, f0
		  stfs      f0, 0x164(r31)
		  lwz       r3, 0x15C(r31)
		  lfs       f0, 0xD8(r3)
		  fadds     f0, f29, f0
		  stfs      f0, 0x168(r31)
		  lfs       f0, 0x164(r31)
		  stfs      f0, 0x16C(r31)
		  lfs       f0, 0x168(r31)
		  stfs      f0, 0x170(r31)
		  lwz       r3, 0x15C(r31)
		  lfs       f1, 0x16C(r31)
		  lwz       r12, 0x0(r3)
		  lfs       f2, 0x170(r31)
		  lwz       r12, 0x10(r12)
		  mtctr     r12
		  bctrl
		  lwz       r3, 0x15C(r31)
		  stfs      f30, 0xCC(r3)
		  stfs      f31, 0xD0(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x2C(r12)
		  mtctr     r12
		  bctrl
		  psq_l     f31,0x58(r1),0,0
		  lfd       f31, 0x50(r1)
		  psq_l     f30,0x48(r1),0,0
		  lfd       f30, 0x40(r1)
		  psq_l     f29,0x38(r1),0,0
		  lfd       f29, 0x30(r1)
		  psq_l     f28,0x28(r1),0,0
		  lfd       f28, 0x20(r1)
		  lwz       r0, 0x64(r1)
		  lwz       r31, 0x1C(r1)
		  mtlr      r0
		  addi      r1, r1, 0x60
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032C6B8
	 * Size:	000144
	 */
	void TotalPokoScreen::update(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  bl        0x108614
		  lbz       r0, 0x154(r31)
		  cmplwi    r0, 0
		  beq-      .loc_0xD4
		  lwz       r3, -0x6514(r13)
		  lfs       f1, 0x174(r31)
		  lfs       f0, 0x54(r3)
		  fsubs     f0, f1, f0
		  stfs      f0, 0x174(r31)
		  lfs       f1, 0x170(r31)
		  lfs       f0, 0x168(r31)
		  fcmpo     cr0, f1, f0
		  bge-      .loc_0x80
		  lfs       f2, -0x430(r2)
		  fadds     f0, f1, f2
		  stfs      f0, 0x170(r31)
		  lfs       f0, 0x170(r31)
		  lfs       f1, 0x168(r31)
		  fcmpo     cr0, f0, f1
		  cror      2, 0x1, 0x2
		  bne-      .loc_0x80
		  stfs      f1, 0x170(r31)
		  lfs       f1, -0x42C(r2)
		  lwz       r3, 0x17C(r31)
		  lfs       f3, -0x428(r2)
		  lfs       f4, -0x438(r2)
		  bl        -0x385C

		.loc_0x80:
		  lfs       f1, 0x174(r31)
		  lfs       f0, -0x438(r2)
		  fcmpo     cr0, f1, f0
		  bge-      .loc_0xF0
		  stfs      f0, 0x174(r31)
		  lbz       r0, 0x178(r31)
		  cmplwi    r0, 0
		  beq-      .loc_0xF0
		  lwz       r0, 0x148(r31)
		  lfs       f1, -0x430(r2)
		  stw       r0, 0x150(r31)
		  lwz       r3, 0x158(r31)
		  bl        -0x20F70
		  bl        -0x14844
		  rlwinm.   r0,r3,0,24,31
		  bne-      .loc_0xC8
		  lwz       r3, -0x6858(r13)
		  bl        -0x1F97C

		.loc_0xC8:
		  li        r0, 0
		  stb       r0, 0x178(r31)
		  b         .loc_0xF0

		.loc_0xD4:
		  lfs       f1, 0x170(r31)
		  lfs       f0, -0x424(r2)
		  fcmpo     cr0, f1, f0
		  ble-      .loc_0xF0
		  lfs       f0, -0x430(r2)
		  fsubs     f0, f1, f0
		  stfs      f0, 0x170(r31)

		.loc_0xF0:
		  lwz       r3, 0x17C(r31)
		  bl        -0x3828
		  lwz       r3, 0x15C(r31)
		  stfs      f1, 0xCC(r3)
		  stfs      f1, 0xD0(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x2C(r12)
		  mtctr     r12
		  bctrl
		  lwz       r3, 0x15C(r31)
		  lfs       f1, 0x16C(r31)
		  lwz       r12, 0x0(r3)
		  lfs       f2, 0x170(r31)
		  lwz       r12, 0x10(r12)
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
	 * Address:	8032C7FC
	 * Size:	0000A4
	 */
	TotalPokoScreen::~TotalPokoScreen(void)
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
		  beq-      .loc_0x88
		  lis       r3, 0x804E
		  subi      r0, r3, 0x6050
		  stw       r0, 0x0(r30)
		  beq-      .loc_0x78
		  lis       r3, 0x804F
		  subi      r0, r3, 0x3B00
		  stw       r0, 0x0(r30)
		  beq-      .loc_0x78
		  lis       r3, 0x804F
		  addic.    r0, r30, 0x118
		  subi      r0, r3, 0x3A60
		  stw       r0, 0x0(r30)
		  beq-      .loc_0x6C
		  lis       r4, 0x804D
		  addi      r3, r30, 0x118
		  addi      r0, r4, 0x7B0C
		  li        r4, 0
		  stw       r0, 0x118(r30)
		  bl        0xE4D24

		.loc_0x6C:
		  mr        r3, r30
		  li        r4, 0
		  bl        -0x2ED354

		.loc_0x78:
		  extsh.    r0, r31
		  ble-      .loc_0x88
		  mr        r3, r30
		  bl        -0x3087CC

		.loc_0x88:
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
