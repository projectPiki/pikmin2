#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030360C
 * Size:	0000F4
 */
void og::Screen::DopingScreen::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x13178C
	  lis       r4, 0x804D
	  li        r3, 0x44
	  addi      r0, r4, 0x7B58
	  stw       r0, 0x0(r31)
	  bl        -0x2DF790
	  mr.       r0, r3
	  beq-      .loc_0x3C
	  bl        0x6C4
	  mr        r0, r3

	.loc_0x3C:
	  stw       r0, 0x148(r31)
	  li        r0, 0
	  lfs       f0, -0xE00(r2)
	  li        r3, 0x1C
	  stw       r0, 0x14C(r31)
	  stw       r0, 0x150(r31)
	  stw       r0, 0x154(r31)
	  stw       r0, 0x158(r31)
	  stfs      f0, 0x16C(r31)
	  stfs      f0, 0x170(r31)
	  stfs      f0, 0x164(r31)
	  stfs      f0, 0x168(r31)
	  stb       r0, 0x174(r31)
	  stb       r0, 0x175(r31)
	  stb       r0, 0x176(r31)
	  stb       r0, 0x177(r31)
	  stb       r0, 0x178(r31)
	  stfs      f0, 0x17C(r31)
	  stfs      f0, 0x180(r31)
	  stfs      f0, 0x184(r31)
	  bl        -0x2DF7F4
	  mr.       r0, r3
	  beq-      .loc_0xA0
	  bl        0x25760
	  mr        r0, r3

	.loc_0xA0:
	  stw       r0, 0x188(r31)
	  li        r3, 0x1C
	  bl        -0x2DF810
	  mr.       r0, r3
	  beq-      .loc_0xBC
	  bl        0x25744
	  mr        r0, r3

	.loc_0xBC:
	  stw       r0, 0x18C(r31)
	  li        r3, 0x1C
	  bl        -0x2DF82C
	  mr.       r0, r3
	  beq-      .loc_0xD8
	  bl        0x25728
	  mr        r0, r3

	.loc_0xD8:
	  stw       r0, 0x190(r31)
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
 * Address:	80303700
 * Size:	0002CC
 */
void og::Screen::DopingScreen::setCallBack((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r6, 0x4E61
	  li        r5, 0
	  stw       r0, 0x34(r1)
	  addi      r6, r6, 0x6C6C
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  stw       r29, 0x24(r1)
	  bl        -0x880
	  stw       r3, 0x14C(r30)
	  lis       r5, 0x6F5F
	  lis       r4, 0x74
	  mr        r3, r30
	  addi      r6, r5, 0x3133
	  addi      r5, r4, 0x6F79
	  bl        -0x89C
	  mr        r0, r3
	  lis       r5, 0x6F5F
	  lis       r4, 0x74
	  mr        r3, r30
	  mr        r29, r0
	  addi      r6, r5, 0x3132
	  addi      r5, r4, 0x6F79
	  bl        -0x8BC
	  mr        r0, r3
	  lwz       r3, 0x148(r30)
	  lwz       r6, 0x188(r30)
	  mr        r5, r0
	  lwz       r7, 0x18C(r30)
	  mr        r4, r29
	  bl        0x680
	  lis       r4, 0x6A62
	  mr        r3, r30
	  addi      r6, r4, 0x5F72
	  li        r5, 0
	  bl        -0x8EC
	  stw       r3, 0x15C(r30)
	  lis       r4, 0x6A62
	  mr        r3, r30
	  li        r5, 0
	  addi      r6, r4, 0x5F79
	  bl        -0x904
	  stw       r3, 0x160(r30)
	  mr        r3, r30
	  bl        -0x4A8
	  lwz       r3, 0x148(r30)
	  lis       r4, 0x6472
	  addi      r8, r4, 0x5F6C
	  li        r5, 0x3
	  addi      r0, r3, 0x14
	  li        r9, 0x2
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  mr        r3, r30
	  mr        r10, r8
	  stw       r5, 0xC(r1)
	  addi      r6, r4, 0x5F72
	  li        r5, 0
	  li        r7, 0
	  stw       r9, 0x10(r1)
	  li        r9, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0x18(r1)
	  bl        0x8D28
	  lwz       r5, 0x148(r30)
	  lis       r4, 0x6479
	  addi      r8, r4, 0x5F6C
	  mr        r29, r3
	  addi      r0, r5, 0x18
	  li        r6, 0x3
	  stw       r0, 0x8(r1)
	  li        r5, 0x2
	  li        r0, 0x1
	  mr        r3, r30
	  stw       r6, 0xC(r1)
	  mr        r10, r8
	  addi      r6, r4, 0x5F72
	  li        r7, 0
	  stw       r5, 0x10(r1)
	  li        r5, 0
	  li        r9, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0x18(r1)
	  bl        0x8CD8
	  mr        r0, r3
	  mr        r3, r29
	  mr        r29, r0
	  li        r4, 0x2
	  bl        0x8070
	  mr        r3, r29
	  li        r4, 0x2
	  bl        0x8064
	  mr        r3, r30
	  lis       r4, 0x6472
	  lwz       r12, 0x0(r30)
	  addi      r6, r4, 0x5F63
	  li        r5, 0
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  bl        -0x2CA7C0
	  cmplwi    r3, 0
	  beq-      .loc_0x1BC
	  mr        r3, r31
	  bl        -0x2CA7D0
	  mr        r4, r31
	  bl        -0x2CC084

	.loc_0x1BC:
	  mr        r3, r30
	  lis       r4, 0x6479
	  lwz       r12, 0x0(r30)
	  addi      r6, r4, 0x5F63
	  li        r5, 0
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  bl        -0x2CA800
	  cmplwi    r3, 0
	  beq-      .loc_0x1FC
	  mr        r3, r31
	  bl        -0x2CA810
	  mr        r4, r31
	  bl        -0x2CC0C4

	.loc_0x1FC:
	  mr        r3, r30
	  lis       r5, 0x7261
	  lwz       r12, 0x0(r30)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x7930
	  lwz       r12, 0x3C(r12)
	  addi      r5, r4, 0x7370
	  mtctr     r12
	  bctrl
	  stw       r3, 0x150(r30)
	  mr        r3, r30
	  lis       r5, 0x7261
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r30)
	  addi      r6, r5, 0x7931
	  addi      r5, r4, 0x7370
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x154(r30)
	  mr        r3, r30
	  lis       r5, 0x696B
	  lis       r4, 0x4E6A
	  lwz       r12, 0x0(r30)
	  addi      r6, r5, 0x6579
	  addi      r5, r4, 0x756A
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x158(r30)
	  li        r4, 0x4
	  lwz       r3, 0x150(r30)
	  bl        -0x2CACC0
	  lwz       r3, 0x154(r30)
	  li        r4, 0x4
	  bl        -0x2CACCC
	  lwz       r3, 0x158(r30)
	  li        r4, 0x4
	  bl        -0x2CACD8
	  lwz       r3, 0x14C(r30)
	  lfs       f0, 0xD4(r3)
	  stfs      f0, 0x164(r30)
	  lwz       r3, 0x14C(r30)
	  lfs       f0, 0xD8(r3)
	  stfs      f0, 0x168(r30)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803039CC
 * Size:	000038
 */
void og::Screen::DopingScreen::setParam((og::Screen::DataNavi&))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x148(r3)
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x8(r3)
	  lwz       r0, 0x4(r4)
	  stw       r0, 0xC(r3)
	  lwz       r0, 0x8(r4)
	  stw       r0, 0x10(r3)
	  lwz       r0, 0xC(r4)
	  stw       r0, 0x14(r3)
	  lwz       r0, 0x10(r4)
	  stw       r0, 0x18(r3)
	  lbz       r0, 0x14(r4)
	  stb       r0, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80303A04
 * Size:	000284
 */
void og::Screen::DopingScreen::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stfd      f30, 0x20(r1)
	  psq_st    f30,0x28(r1),0,0
	  stfd      f29, 0x10(r1)
	  psq_st    f29,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1312B0
	  lwz       r3, 0x158(r31)
	  li        r4, 0
	  stb       r4, 0xB0(r3)
	  lbz       r0, 0x174(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  lwz       r3, 0x150(r31)
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x158(r31)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x15C(r31)
	  stb       r0, 0xB0(r3)
	  b         .loc_0x78

	.loc_0x68:
	  lwz       r3, 0x150(r31)
	  stb       r4, 0xB0(r3)
	  lwz       r3, 0x15C(r31)
	  stb       r4, 0xB0(r3)

	.loc_0x78:
	  lbz       r0, 0x175(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lwz       r3, 0x154(r31)
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x158(r31)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x160(r31)
	  stb       r0, 0xB0(r3)
	  b         .loc_0xB8

	.loc_0xA4:
	  lwz       r3, 0x154(r31)
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x160(r31)
	  stb       r0, 0xB0(r3)

	.loc_0xB8:
	  lwz       r3, 0x148(r31)
	  bl        0x388
	  lfs       f1, 0x164(r31)
	  lfs       f0, 0x16C(r31)
	  lfs       f3, 0x168(r31)
	  lfs       f2, 0x170(r31)
	  fadds     f0, f1, f0
	  lwz       r3, 0x14C(r31)
	  fadds     f1, f3, f2
	  stfs      f0, 0xD4(r3)
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x176(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x144
	  lfs       f2, 0x17C(r31)
	  lfs       f1, -0xDFC(r2)
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x144
	  lfs       f0, -0xDF8(r2)
	  fadds     f0, f2, f0
	  stfs      f0, 0x17C(r31)
	  lfs       f0, 0x17C(r31)
	  fcmpo     cr0, f0, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x144
	  lwz       r3, 0x188(r31)
	  bl        0x25314
	  lwz       r3, 0x148(r31)
	  bl        0x48C
	  lwz       r3, -0x6858(r13)
	  bl        0x93F0

	.loc_0x144:
	  lbz       r0, 0x177(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x194
	  lfs       f2, 0x180(r31)
	  lfs       f1, -0xDFC(r2)
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x194
	  lfs       f0, -0xDF8(r2)
	  fadds     f0, f2, f0
	  stfs      f0, 0x180(r31)
	  lfs       f0, 0x180(r31)
	  fcmpo     cr0, f0, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x194
	  lwz       r3, 0x18C(r31)
	  bl        0x252C4
	  lwz       r3, 0x148(r31)
	  bl        0x50C
	  lwz       r3, -0x6858(r13)
	  bl        0x93A0

	.loc_0x194:
	  lbz       r0, 0x178(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x1D4
	  lfs       f2, 0x184(r31)
	  lfs       f1, -0xDFC(r2)
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x1D4
	  lfs       f0, -0xDF8(r2)
	  fadds     f0, f2, f0
	  stfs      f0, 0x184(r31)
	  lfs       f0, 0x184(r31)
	  fcmpo     cr0, f0, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1D4
	  lwz       r3, 0x190(r31)
	  bl        0x25274

	.loc_0x1D4:
	  lwz       r3, 0x188(r31)
	  bl        0x253A8
	  lfs       f0, 0x17C(r31)
	  lwz       r3, 0x18C(r31)
	  fmuls     f31, f0, f1
	  bl        0x25398
	  lfs       f0, 0x180(r31)
	  lwz       r3, 0x190(r31)
	  fmuls     f30, f0, f1
	  bl        0x25388
	  lfs       f0, 0x184(r31)
	  lwz       r3, 0x150(r31)
	  fmuls     f29, f0, f1
	  stfs      f31, 0xCC(r3)
	  stfs      f31, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x154(r31)
	  stfs      f30, 0xCC(r3)
	  stfs      f30, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x158(r31)
	  stfs      f29, 0xCC(r3)
	  stfs      f29, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  psq_l     f29,0x18(r1),0,0
	  lfd       f29, 0x10(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80303C88
 * Size:	00000C
 */
void og::Screen::DopingScreen::adjPos((float, float))
{
	/*
	.loc_0x0:
	  stfs      f1, 0x16C(r3)
	  stfs      f2, 0x170(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80303C94
 * Size:	000044
 */
void og::Screen::DopingScreen::setDopingEnable((bool, bool))
{
	/*
	.loc_0x0:
	  stb       r4, 0x174(r3)
	  rlwinm.   r0,r4,0,24,31
	  stb       r5, 0x175(r3)
	  beq-      .loc_0x18
	  lfs       f0, -0xDFC(r2)
	  stfs      f0, 0x17C(r3)

	.loc_0x18:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x28
	  lfs       f0, -0xDFC(r2)
	  stfs      f0, 0x180(r3)

	.loc_0x28:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x38
	  rlwinm.   r0,r5,0,24,31
	  beqlr-

	.loc_0x38:
	  lfs       f0, -0xDFC(r2)
	  stfs      f0, 0x184(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80303CD8
 * Size:	000010
 */
void og::Screen::DopingScreen::openDopingUp(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stb       r0, 0x176(r3)
	  stb       r0, 0x174(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80303CE8
 * Size:	000010
 */
void og::Screen::DopingScreen::openDopingDown(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stb       r0, 0x177(r3)
	  stb       r0, 0x175(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80303CF8
 * Size:	00000C
 */
void og::Screen::DopingScreen::openDopingKey(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stb       r0, 0x178(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80303D04
 * Size:	000100
 */
void og::Screen::DopingCheck::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0xDFC(r2)
	  li        r8, 0x1
	  stw       r0, 0x14(r1)
	  li        r7, 0x2
	  li        r6, 0xA
	  li        r5, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r4, r31, 0x14
	  stfs      f0, 0x8(r3)
	  addi      r0, r31, 0x18
	  stw       r8, 0xC(r3)
	  li        r3, 0x10
	  stw       r7, 0x10(r31)
	  stw       r6, 0x14(r31)
	  stw       r6, 0x18(r31)
	  stb       r8, 0x1C(r31)
	  stw       r5, 0x0(r31)
	  stw       r5, 0x4(r31)
	  stw       r4, 0x20(r31)
	  stw       r0, 0x24(r31)
	  lwz       r4, 0x20(r31)
	  lwz       r0, 0x0(r4)
	  stw       r0, 0x28(r31)
	  lwz       r4, 0x24(r31)
	  lwz       r0, 0x0(r4)
	  stw       r0, 0x2C(r31)
	  bl        -0x2DFED4
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  lis       r5, 0x804C
	  lis       r4, 0x804C
	  addi      r0, r5, 0x14F0
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x14D8
	  lis       r4, 0x804D
	  li        r7, 0
	  stw       r0, 0x0(r3)
	  addi      r6, r5, 0x7488
	  li        r5, 0x9
	  addi      r0, r4, 0x7B40
	  stb       r7, 0x4(r3)
	  stb       r7, 0x5(r3)
	  stw       r6, 0x0(r3)
	  sth       r5, 0x8(r3)
	  stw       r7, 0xC(r3)
	  stw       r0, 0x0(r3)

	.loc_0xC8:
	  stw       r3, 0x30(r31)
	  li        r3, 0x1
	  li        r0, 0
	  lfs       f0, -0xDF4(r2)
	  stb       r3, 0x40(r31)
	  mr        r3, r31
	  stw       r0, 0x34(r31)
	  stw       r0, 0x38(r31)
	  stfs      f0, 0x3C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80303E04
 * Size:	000044
 */
void og::Screen::DopingCheck::init((J2DPane*, J2DPane*, og::Screen::ScaleMgr*,
                                    og::Screen::ScaleMgr*))
{
	/*
	.loc_0x0:
	  stw       r4, 0x0(r3)
	  addi      r8, r3, 0x14
	  addi      r4, r3, 0x18
	  li        r0, 0x1
	  stw       r5, 0x4(r3)
	  stw       r6, 0x34(r3)
	  stw       r7, 0x38(r3)
	  stw       r8, 0x20(r3)
	  stw       r4, 0x24(r3)
	  lwz       r4, 0x20(r3)
	  lwz       r4, 0x0(r4)
	  stw       r4, 0x28(r3)
	  lwz       r4, 0x24(r3)
	  lwz       r4, 0x0(r4)
	  stw       r4, 0x2C(r3)
	  stb       r0, 0x40(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80303E48
 * Size:	000100
 */
void og::Screen::DopingCheck::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lbz       r0, 0x40(r3)
	  lwz       r4, 0x20(r3)
	  lwz       r3, 0x24(r3)
	  cmplwi    r0, 0
	  lwz       r31, 0x0(r4)
	  lwz       r30, 0x0(r3)
	  beq-      .loc_0x4C
	  li        r0, 0
	  stb       r0, 0x40(r29)
	  stw       r31, 0x28(r29)
	  stw       r30, 0x2C(r29)
	  b         .loc_0xE4

	.loc_0x4C:
	  bl        0x14094
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  stw       r31, 0x28(r29)
	  stw       r30, 0x2C(r29)
	  b         .loc_0xE4

	.loc_0x64:
	  lwz       r0, 0x28(r29)
	  cmplw     r31, r0
	  beq-      .loc_0xA4
	  ble-      .loc_0xA0
	  lwz       r4, 0x0(r29)
	  mr        r3, r29
	  bl        .loc_0x100
	  lwz       r3, 0x34(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  lfs       f1, -0xDF0(r2)
	  lfs       f2, -0xDEC(r2)
	  lfs       f3, -0xDE8(r2)
	  lfs       f4, -0xE00(r2)
	  bl        0x24FF4

	.loc_0xA0:
	  stw       r31, 0x28(r29)

	.loc_0xA4:
	  lwz       r0, 0x2C(r29)
	  cmplw     r30, r0
	  beq-      .loc_0xE4
	  ble-      .loc_0xE0
	  lwz       r4, 0x4(r29)
	  mr        r3, r29
	  bl        .loc_0x100
	  lwz       r3, 0x38(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0xE0
	  lfs       f1, -0xDF0(r2)
	  lfs       f2, -0xDEC(r2)
	  lfs       f3, -0xDE8(r2)
	  lfs       f4, -0xE00(r2)
	  bl        0x24FB4

	.loc_0xE0:
	  stw       r30, 0x2C(r29)

	.loc_0xE4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x100:
	*/
}

/*
 * --INFO--
 * Address:	80303F48
 * Size:	000080
 */
void og::Screen::DopingCheck::effStart((J2DPane*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  mr        r3, r4
	  addi      r4, r1, 0x10
	  bl        -0x1800
	  lwz       r4, 0x10(r1)
	  lis       r3, 0x804C
	  lwz       r5, 0x14(r1)
	  addi      r0, r3, 0x1514
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x18
	  stw       r5, 0xC(r1)
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0xC(r1)
	  stw       r0, 0x20(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r3, 0x30(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6858(r13)
	  bl        0x8EA8
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void og::Screen::DopingCheck::startGetEff((J2DPane*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80303FC8
 * Size:	0000D0
 */
void og::Screen::DopingCheck::startGetEff_Up(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lwz       r3, 0x0(r3)
	  bl        -0x1880
	  lfs       f1, 0x8(r1)
	  lis       r3, 0x804C
	  lfs       f0, 0x3C(r31)
	  li        r8, 0
	  addi      r6, r3, 0x14F0
	  lwz       r0, 0xC(r1)
	  fadds     f0, f1, f0
	  lis       r5, 0x804C
	  stw       r0, 0x14(r1)
	  lis       r4, 0x804E
	  lis       r7, 0x804C
	  lis       r3, 0x804D
	  stfs      f0, 0x8(r1)
	  addi      r9, r7, 0x1514
	  addi      r0, r5, 0x14D8
	  lfs       f0, 0x14(r1)
	  stw       r6, 0x24(r1)
	  li        r6, 0x22
	  lwz       r10, 0x8(r1)
	  addi      r7, r4, 0x7470
	  stw       r0, 0x24(r1)
	  li        r5, 0x23
	  addi      r0, r3, 0x7B28
	  addi      r3, r1, 0x24
	  stw       r10, 0x10(r1)
	  addi      r4, r1, 0x18
	  stw       r7, 0x24(r1)
	  lfs       f1, 0x10(r1)
	  stw       r9, 0x20(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  stb       r8, 0x28(r1)
	  stb       r8, 0x29(r1)
	  sth       r6, 0x2C(r1)
	  sth       r5, 0x2E(r1)
	  stw       r8, 0x30(r1)
	  stw       r8, 0x34(r1)
	  stw       r0, 0x24(r1)
	  bl        0xB5848
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80304098
 * Size:	0000D0
 */
void og::Screen::DopingCheck::startGetEff_Down(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lwz       r3, 0x4(r3)
	  bl        -0x1950
	  lfs       f1, 0x8(r1)
	  lis       r3, 0x804C
	  lfs       f0, 0x3C(r31)
	  li        r8, 0
	  addi      r6, r3, 0x14F0
	  lwz       r0, 0xC(r1)
	  fadds     f0, f1, f0
	  lis       r5, 0x804C
	  stw       r0, 0x14(r1)
	  lis       r4, 0x804E
	  lis       r7, 0x804C
	  lis       r3, 0x804D
	  stfs      f0, 0x8(r1)
	  addi      r9, r7, 0x1514
	  addi      r0, r5, 0x14D8
	  lfs       f0, 0x14(r1)
	  stw       r6, 0x24(r1)
	  li        r6, 0x22
	  lwz       r10, 0x8(r1)
	  addi      r7, r4, 0x7470
	  stw       r0, 0x24(r1)
	  li        r5, 0x23
	  addi      r0, r3, 0x7B28
	  addi      r3, r1, 0x24
	  stw       r10, 0x10(r1)
	  addi      r4, r1, 0x18
	  stw       r7, 0x24(r1)
	  lfs       f1, 0x10(r1)
	  stw       r9, 0x20(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  stb       r8, 0x28(r1)
	  stb       r8, 0x29(r1)
	  sth       r6, 0x2C(r1)
	  sth       r5, 0x2E(r1)
	  stw       r8, 0x30(r1)
	  stw       r8, 0x34(r1)
	  stw       r0, 0x24(r1)
	  bl        0xB5778
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80304168
 * Size:	000004
 */
void efx2d::TSimple2::kill(void) { }

/*
 * --INFO--
 * Address:	8030416C
 * Size:	000004
 */
void efx2d::TSimple2::fade(void) { }

/*
 * --INFO--
 * Address:	80304170
 * Size:	000004
 */
void efx2d::TSimple1::kill(void) { }

/*
 * --INFO--
 * Address:	80304174
 * Size:	000004
 */
void efx2d::TSimple1::fade(void) { }

/*
 * --INFO--
 * Address:	80304178
 * Size:	0000A4
 */
void og::Screen::DopingScreen::__dt(void)
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
	  lis       r3, 0x804D
	  addi      r0, r3, 0x7B58
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
	  bl        0x10D3A8

	.loc_0x6C:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x2C4CD0

	.loc_0x78:
	  extsh.    r0, r31
	  ble-      .loc_0x88
	  mr        r3, r30
	  bl        -0x2E0148

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
