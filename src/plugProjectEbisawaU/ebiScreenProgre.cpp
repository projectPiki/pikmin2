#include "types.h"

namespace ebi {

/*
 * --INFO--
 * Address:	803CD6D8
 * Size:	0000B0
 */
void TScreenProgre::loadResource(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  li        r5, 0
	  stw       r0, 0x124(r1)
	  stw       r31, 0x11C(r1)
	  addi      r31, r4, 0x6520
	  addi      r4, r31, 0x10
	  stw       r30, 0x118(r1)
	  stw       r29, 0x114(r1)
	  mr        r29, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x55C54
	  addi      r3, r1, 0x8
	  addi      r4, r31, 0x2C
	  bl        -0xB57C8
	  addi      r3, r1, 0x8
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x3B25F8
	  mr.       r30, r3
	  bne-      .loc_0x70
	  addi      r3, r31, 0x38
	  addi      r5, r31, 0x4C
	  li        r4, 0x25
	  crclr     6, 0x6
	  bl        -0x3A3104

	.loc_0x70:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x10
	  bl        0x55C14
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x124(r1)
	  lwz       r31, 0x11C(r1)
	  lwz       r30, 0x118(r1)
	  lwz       r29, 0x114(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CD788
 * Size:	000318
 */
void TScreenProgre::setArchive(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x14(r1)
	  addi      r0, r5, 0x6578
	  li        r5, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  mr        r4, r0
	  lwz       r3, -0x6514(r13)
	  bl        0x55BA4
	  li        r3, 0x148
	  bl        -0x3A991C
	  mr.       r0, r3
	  beq-      .loc_0x4C
	  bl        0x675E0
	  mr        r0, r3

	.loc_0x4C:
	  stw       r0, 0x24(r31)
	  lis       r3, 0x8049
	  addi      r4, r3, 0x6594
	  mr        r6, r30
	  lwz       r3, 0x24(r31)
	  lis       r5, 0x110
	  bl        -0x38E1C8
	  lwz       r3, 0x24(r31)
	  mr        r4, r3
	  bl        -0x2EDC
	  lis       r4, 0x675F
	  lwz       r3, 0x24(r31)
	  addi      r6, r4, 0x3030
	  li        r5, 0x6D
	  bl        -0x34B4
	  stw       r3, 0x28(r31)
	  lis       r3, 0x675F
	  addi      r6, r3, 0x3031
	  li        r5, 0x6D
	  lwz       r3, 0x24(r31)
	  bl        -0x34CC
	  stw       r3, 0x2C(r31)
	  lis       r3, 0x675F
	  addi      r6, r3, 0x3032
	  li        r5, 0x6D
	  lwz       r3, 0x24(r31)
	  bl        -0x34E4
	  stw       r3, 0x30(r31)
	  lis       r3, 0x6E5F
	  addi      r6, r3, 0x3030
	  li        r5, 0x7769
	  lwz       r3, 0x24(r31)
	  bl        -0x34FC
	  stw       r3, 0x34(r31)
	  lis       r3, 0x79
	  addi      r6, r3, 0x6573
	  li        r5, 0
	  lwz       r3, 0x24(r31)
	  bl        -0x3514
	  stw       r3, 0x38(r31)
	  li        r6, 0x6E6F
	  li        r5, 0
	  lwz       r3, 0x24(r31)
	  bl        -0x3528
	  stw       r3, 0x3C(r31)
	  lis       r3, 0x696C
	  addi      r6, r3, 0x3030
	  li        r5, 0
	  lwz       r3, 0x24(r31)
	  bl        -0x3540
	  stw       r3, 0x40(r31)
	  lis       r3, 0x6972
	  addi      r6, r3, 0x3030
	  li        r5, 0
	  lwz       r3, 0x24(r31)
	  bl        -0x3558
	  stw       r3, 0x44(r31)
	  lis       r3, 0x696C
	  addi      r6, r3, 0x3031
	  li        r5, 0
	  lwz       r3, 0x24(r31)
	  bl        -0x3570
	  stw       r3, 0x48(r31)
	  lis       r3, 0x6972
	  addi      r6, r3, 0x3031
	  li        r5, 0
	  lwz       r3, 0x24(r31)
	  bl        -0x3588
	  stw       r3, 0x4C(r31)
	  li        r4, 0x1
	  lwz       r3, 0x28(r31)
	  bl        -0x350C
	  lwz       r3, 0x28(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r31)
	  li        r4, 0x1
	  bl        -0x3530
	  lwz       r3, 0x2C(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x30(r31)
	  li        r4, 0x1
	  bl        -0x3554
	  lwz       r3, 0x30(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x34(r31)
	  li        r4, 0x1
	  bl        -0x3578
	  lwz       r3, 0x34(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x6F6C
	  lis       r4, 0x73
	  lwz       r3, 0x24(r31)
	  addi      r6, r5, 0x6F72
	  addi      r5, r4, 0x5F63
	  bl        -0x3634
	  mr        r30, r3
	  lwz       r4, 0x3C(r31)
	  addi      r3, r31, 0x50
	  mr        r5, r30
	  bl        -0xB27C
	  lwz       r4, 0x3C(r31)
	  mr        r5, r30
	  addi      r3, r31, 0x9C
	  bl        -0xB28C
	  lwz       r3, 0x24(r31)
	  addi      r5, r31, 0x50
	  lwz       r4, 0x38(r31)
	  bl        0x6729C
	  lwz       r3, 0x24(r31)
	  addi      r5, r31, 0x9C
	  lwz       r4, 0x3C(r31)
	  bl        0x6728C
	  lwz       r3, 0x24(r31)
	  bl        -0x341C
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0xB0(r30)
	  lwz       r3, 0x40(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x44(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x48(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4C(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r3, 0x8049
	  stw       r0, 0xC(r31)
	  addi      r4, r3, 0x6578
	  stw       r0, 0x10(r31)
	  stw       r0, 0x14(r31)
	  stw       r0, 0x18(r31)
	  lwz       r3, 0x48(r31)
	  lwz       r0, 0x40(r31)
	  stw       r0, 0x118(r31)
	  stw       r3, 0x11C(r31)
	  lwz       r3, 0x4C(r31)
	  lwz       r0, 0x44(r31)
	  stw       r0, 0x150(r31)
	  stw       r3, 0x154(r31)
	  lwz       r3, -0x6514(r13)
	  bl        0x558E0
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
 * Address:	803CDAA0
 * Size:	0003E4
 */
void TScreenProgre::startScreen(long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r5
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  stw       r29, 0x44(r1)
	  stw       r4, 0x20(r3)
	  lwz       r0, 0x20(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x2E4
	  bge-      .loc_0x40
	  cmpwi     r0, 0
	  bge-      .loc_0x4C
	  b         .loc_0x3B8

	.loc_0x40:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x3B8
	  b         .loc_0x350

	.loc_0x4C:
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0x9(r30)
	  lwz       r3, 0x28(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x30(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x34(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x8(r30)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x1B4
	  li        r4, 0x1
	  lfs       f2, 0x16F8(r2)
	  stb       r4, 0x6C(r30)
	  li        r0, 0
	  lfs       f0, 0x16FC(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x54(r3)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x94(r30)
	  stfs      f0, 0x90(r30)
	  stb       r4, 0x98(r30)
	  stb       r0, 0x99(r30)
	  stb       r0, 0xB8(r30)
	  lwz       r3, 0xB4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x198
	  lwz       r7, 0xBC(r30)
	  mr        r29, r3
	  addi      r4, r1, 0x30
	  stw       r7, 0x14(r1)
	  lbz       r5, 0x14(r1)
	  lbz       r0, 0x15(r1)
	  stb       r5, 0x104(r3)
	  lbz       r5, 0x16(r1)
	  stb       r0, 0x105(r3)
	  lbz       r0, 0x17(r1)
	  stb       r5, 0x106(r3)
	  stb       r0, 0x107(r3)
	  lwz       r6, 0xC0(r30)
	  stw       r7, 0x28(r1)
	  stw       r6, 0x10(r1)
	  lbz       r5, 0x10(r1)
	  lbz       r0, 0x11(r1)
	  stb       r5, 0x108(r3)
	  lbz       r5, 0x12(r1)
	  stb       r0, 0x109(r3)
	  lbz       r0, 0x13(r1)
	  stb       r5, 0x10A(r3)
	  stb       r0, 0x10B(r3)
	  lwz       r0, 0xC4(r30)
	  stw       r6, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xC8(r30)
	  mr        r3, r29
	  addi      r4, r1, 0x34
	  stw       r0, 0x34(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x198:
	  lfs       f0, 0x1700(r2)
	  li        r0, 0x1
	  stfs      f0, 0x110(r30)
	  stb       r0, 0x114(r30)
	  stfs      f0, 0x148(r30)
	  stb       r0, 0x14C(r30)
	  b         .loc_0x2A0

	.loc_0x1B4:
	  li        r0, 0
	  stb       r0, 0x6C(r30)
	  lwz       r3, 0x68(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x260
	  lwz       r7, 0x70(r30)
	  mr        r29, r3
	  addi      r4, r1, 0x20
	  stw       r7, 0xC(r1)
	  lbz       r5, 0xC(r1)
	  lbz       r0, 0xD(r1)
	  stb       r5, 0x104(r3)
	  lbz       r5, 0xE(r1)
	  stb       r0, 0x105(r3)
	  lbz       r0, 0xF(r1)
	  stb       r5, 0x106(r3)
	  stb       r0, 0x107(r3)
	  lwz       r6, 0x74(r30)
	  stw       r7, 0x18(r1)
	  stw       r6, 0x8(r1)
	  lbz       r5, 0x8(r1)
	  lbz       r0, 0x9(r1)
	  stb       r5, 0x108(r3)
	  lbz       r5, 0xA(r1)
	  stb       r0, 0x109(r3)
	  lbz       r0, 0xB(r1)
	  stb       r5, 0x10A(r3)
	  stb       r0, 0x10B(r3)
	  lwz       r0, 0x78(r30)
	  stw       r6, 0x1C(r1)
	  stw       r0, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x7C(r30)
	  mr        r3, r29
	  addi      r4, r1, 0x24
	  stw       r0, 0x24(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x260:
	  li        r4, 0x1
	  lfs       f2, 0x16F8(r2)
	  stb       r4, 0xB8(r30)
	  li        r0, 0
	  lfs       f0, 0x16FC(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x54(r3)
	  fmuls     f1, f2, f1
	  stfs      f1, 0xE0(r30)
	  stfs      f0, 0xDC(r30)
	  stb       r4, 0xE4(r30)
	  stb       r0, 0xE5(r30)
	  stfs      f0, 0x110(r30)
	  stb       r0, 0x114(r30)
	  stfs      f0, 0x148(r30)
	  stb       r0, 0x14C(r30)

	.loc_0x2A0:
	  addi      r3, r30, 0xE8
	  bl        -0x9EBC
	  addi      r3, r30, 0x120
	  bl        -0x9EC4
	  addi      r3, r30, 0xE8
	  li        r4, 0
	  lwz       r12, 0xE8(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r30, 0x120
	  li        r4, 0
	  lwz       r12, 0x120(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3B8

	.loc_0x2E4:
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0x9(r30)
	  lwz       r3, 0x28(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x30(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x34(r30)
	  li        r4, 0xFF
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3B8

	.loc_0x350:
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0x9(r30)
	  lwz       r3, 0x28(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x30(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x34(r30)
	  li        r4, 0xFF
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3B8:
	  mr        r3, r30
	  mr        r5, r31
	  li        r4, 0x1
	  bl        0x9C
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CDE84
 * Size:	000054
 */
void TScreenProgre::fadeout(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x9(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x20
	  li        r3, 0
	  b         .loc_0x44

	.loc_0x20:
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x40
	  mr        r5, r4
	  li        r4, 0x3
	  bl        0x48
	  li        r3, 0x1
	  b         .loc_0x44

	.loc_0x40:
	  li        r3, 0

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CDED8
 * Size:	000028
 */
void TScreenProgre::isFinish(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x20
	  lwz       r0, 0x14(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x20
	  li        r3, 0x1
	  blr

	.loc_0x20:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void TScreenProgre::killScreen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803CDF00
 * Size:	0000C0
 */
void TScreenProgre::startState(ebi::TScreenProgre::enumState, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x1C(r3)
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xAC
	  bge-      .loc_0x38
	  cmpwi     r0, 0
	  beq-      .loc_0x44
	  bge-      .loc_0x70
	  b         .loc_0xAC

	.loc_0x38:
	  cmpwi     r0, 0x4
	  bge-      .loc_0xAC
	  b         .loc_0x7C

	.loc_0x44:
	  addi      r3, r31, 0xE8
	  lwz       r12, 0xE8(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x120
	  lwz       r12, 0x120(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xAC

	.loc_0x70:
	  stw       r5, 0xC(r31)
	  stw       r5, 0x10(r31)
	  b         .loc_0xAC

	.loc_0x7C:
	  stw       r5, 0x14(r31)
	  addi      r3, r31, 0xE8
	  stw       r5, 0x18(r31)
	  lwz       r12, 0xE8(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x120
	  lwz       r12, 0x120(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0xAC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CDFC0
 * Size:	000554
 */
void TScreenProgre::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x2C4
	  bge-      .loc_0x38
	  cmpwi     r0, 0
	  beq-      .loc_0x53C
	  bge-      .loc_0x44
	  b         .loc_0x53C

	.loc_0x38:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x53C
	  b         .loc_0x464

	.loc_0x44:
	  lwz       r3, 0xC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  subi      r0, r3, 0x1
	  stw       r0, 0xC(r31)

	.loc_0x58:
	  lwz       r0, 0x20(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x124
	  bge-      .loc_0x74
	  cmpwi     r0, 0
	  bge-      .loc_0x80
	  b         .loc_0x210

	.loc_0x74:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x210
	  b         .loc_0x19C

	.loc_0x80:
	  lwz       r4, 0x10(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0xC0
	  lwz       r3, 0xC(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lfd       f2, 0x1710(r2)
	  stw       r3, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r4, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f1, f1, f0
	  b         .loc_0xC4

	.loc_0xC0:
	  lfs       f1, 0x16FC(r2)

	.loc_0xC4:
	  lfs       f0, 0x1700(r2)
	  lwz       r3, 0x28(r31)
	  fsubs     f0, f0, f1
	  lfs       f1, 0x1704(r2)
	  lwz       r12, 0x0(r3)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x24(r12)
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r30, 0x1C(r1)
	  mr        r4, r30
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x34(r31)
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0xE8
	  bl        -0xA24C
	  addi      r3, r31, 0x120
	  bl        -0xA254
	  b         .loc_0x210

	.loc_0x124:
	  lwz       r4, 0x10(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x164
	  lwz       r3, 0xC(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x18(r1)
	  lfd       f2, 0x1710(r2)
	  stw       r3, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  stw       r4, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f1, f1, f0
	  b         .loc_0x168

	.loc_0x164:
	  lfs       f1, 0x16FC(r2)

	.loc_0x168:
	  lfs       f0, 0x1700(r2)
	  lwz       r3, 0x2C(r31)
	  fsubs     f0, f0, f1
	  lfs       f1, 0x1704(r2)
	  lwz       r12, 0x0(r3)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x24(r12)
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  mtctr     r12
	  bctrl
	  b         .loc_0x210

	.loc_0x19C:
	  lwz       r4, 0x10(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x1DC
	  lwz       r3, 0xC(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x18(r1)
	  lfd       f2, 0x1710(r2)
	  stw       r3, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  stw       r4, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f1, f1, f0
	  b         .loc_0x1E0

	.loc_0x1DC:
	  lfs       f1, 0x16FC(r2)

	.loc_0x1E0:
	  lfs       f0, 0x1700(r2)
	  lwz       r3, 0x30(r31)
	  fsubs     f0, f0, f1
	  lfs       f1, 0x1704(r2)
	  lwz       r12, 0x0(r3)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x24(r12)
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  mtctr     r12
	  bctrl

	.loc_0x210:
	  lwz       r0, 0xC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x53C
	  li        r0, 0x2
	  stw       r0, 0x1C(r31)
	  lwz       r0, 0x1C(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x53C
	  bge-      .loc_0x244
	  cmpwi     r0, 0
	  beq-      .loc_0x250
	  bge-      .loc_0x27C
	  b         .loc_0x53C

	.loc_0x244:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x53C
	  b         .loc_0x28C

	.loc_0x250:
	  addi      r3, r31, 0xE8
	  lwz       r12, 0xE8(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x120
	  lwz       r12, 0x120(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x53C

	.loc_0x27C:
	  li        r0, 0
	  stw       r0, 0xC(r31)
	  stw       r0, 0x10(r31)
	  b         .loc_0x53C

	.loc_0x28C:
	  li        r0, 0
	  addi      r3, r31, 0xE8
	  stw       r0, 0x14(r31)
	  stw       r0, 0x18(r31)
	  lwz       r12, 0xE8(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x120
	  lwz       r12, 0x120(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x53C

	.loc_0x2C4:
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x20(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x2E8
	  b         .loc_0x458

	.loc_0x2E8:
	  lwz       r0, 0xC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x444
	  lbz       r0, 0x9(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x444
	  lwz       r3, 0x4(r31)
	  lwz       r0, 0x18(r3)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x320
	  lfs       f1, 0x48(r3)
	  lfs       f0, 0x1708(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x328

	.loc_0x320:
	  li        r0, 0x1
	  b         .loc_0x32C

	.loc_0x328:
	  li        r0, 0

	.loc_0x32C:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x398
	  lbz       r0, 0x8(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x444
	  li        r6, 0
	  li        r0, 0x1
	  stb       r6, 0x8(r31)
	  li        r4, 0x1802
	  lfs       f2, 0x16F8(r2)
	  li        r5, 0
	  stb       r6, 0x98(r31)
	  lfs       f0, 0x16FC(r2)
	  stb       r0, 0x99(r31)
	  stb       r0, 0xB8(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x54(r3)
	  fmuls     f1, f2, f1
	  stfs      f1, 0xE0(r31)
	  stfs      f0, 0xDC(r31)
	  stb       r0, 0xE4(r31)
	  stb       r6, 0xE5(r31)
	  stb       r6, 0x114(r31)
	  stb       r6, 0x14C(r31)
	  lwz       r3, -0x67A8(r13)
	  bl        -0x95D20
	  b         .loc_0x444

	.loc_0x398:
	  lwz       r0, 0x18(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x3B4
	  lfs       f1, 0x48(r3)
	  lfs       f0, 0x170C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3BC

	.loc_0x3B4:
	  li        r0, 0x1
	  b         .loc_0x3C0

	.loc_0x3BC:
	  li        r0, 0

	.loc_0x3C0:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x42C
	  lbz       r0, 0x8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x444
	  li        r6, 0x1
	  lfs       f2, 0x16F8(r2)
	  stb       r6, 0x8(r31)
	  li        r0, 0
	  lfs       f0, 0x16FC(r2)
	  li        r4, 0x1802
	  stb       r6, 0x6C(r31)
	  li        r5, 0
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x54(r3)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x94(r31)
	  stfs      f0, 0x90(r31)
	  stb       r6, 0x98(r31)
	  stb       r0, 0x99(r31)
	  stb       r0, 0xE4(r31)
	  stb       r6, 0xE5(r31)
	  stb       r6, 0x114(r31)
	  stb       r6, 0x14C(r31)
	  lwz       r3, -0x67A8(r13)
	  bl        -0x95DB4
	  b         .loc_0x444

	.loc_0x42C:
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x444
	  mr        r3, r31
	  bl        0x1F4
	  b         .loc_0x53C

	.loc_0x444:
	  addi      r3, r31, 0xE8
	  bl        -0xA580
	  addi      r3, r31, 0x120
	  bl        -0xA588
	  b         .loc_0x53C

	.loc_0x458:
	  li        r0, 0x1
	  stb       r0, 0x9(r31)
	  b         .loc_0x53C

	.loc_0x464:
	  lwz       r3, 0x14(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x478
	  subi      r0, r3, 0x1
	  stw       r0, 0x14(r31)

	.loc_0x478:
	  lwz       r4, 0x18(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x4B8
	  lwz       r3, 0x14(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x18(r1)
	  lfd       f2, 0x1710(r2)
	  stw       r3, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  stw       r4, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f1, f1, f0
	  b         .loc_0x4BC

	.loc_0x4B8:
	  lfs       f1, 0x16FC(r2)

	.loc_0x4BC:
	  lfs       f0, 0x1704(r2)
	  lwz       r0, 0x20(r31)
	  fmuls     f0, f0, f1
	  cmpwi     r0, 0x1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  beq-      .loc_0x510
	  bge-      .loc_0x4EC
	  cmpwi     r0, 0
	  bge-      .loc_0x4F8
	  b         .loc_0x53C

	.loc_0x4EC:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x53C
	  b         .loc_0x528

	.loc_0x4F8:
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x53C

	.loc_0x510:
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x53C

	.loc_0x528:
	  lwz       r3, 0x30(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x53C:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CE514
 * Size:	0000DC
 */
void TScreenProgre::draw(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x2B0(r1)
	  mflr      r0
	  stw       r0, 0x2B4(r1)
	  stw       r31, 0x2AC(r1)
	  stw       r30, 0x2A8(r1)
	  mr        r30, r3
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0xC4
	  lwz       r4, -0x6514(r13)
	  addi      r3, r1, 0x8
	  lwz       r4, 0x24(r4)
	  addi      r31, r4, 0x190
	  bl        0x58E7C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x24(r30)
	  mr        r5, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804E
	  addic.    r4, r1, 0x198
	  subi      r0, r3, 0x7CA0
	  stw       r0, 0x274(r1)
	  beq-      .loc_0x9C
	  lis       r3, 0x804A
	  cmplwi    r4, 0
	  addi      r0, r3, 0x628
	  stw       r0, 0x0(r4)
	  beq-      .loc_0x9C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x650
	  stw       r0, 0x0(r4)

	.loc_0x9C:
	  addic.    r4, r1, 0xC4
	  beq-      .loc_0xC4
	  lis       r3, 0x804A
	  cmplwi    r4, 0
	  addi      r0, r3, 0x600
	  stw       r0, 0x0(r4)
	  beq-      .loc_0xC4
	  lis       r3, 0x804A
	  addi      r0, r3, 0x650
	  stw       r0, 0x0(r4)

	.loc_0xC4:
	  lwz       r0, 0x2B4(r1)
	  lwz       r31, 0x2AC(r1)
	  lwz       r30, 0x2A8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2B0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CE5F0
 * Size:	000308
 */
void TScreenProgre::setDecide(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r3
	  stw       r30, 0x68(r1)
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x180
	  li        r0, 0
	  stb       r0, 0x6C(r31)
	  lwz       r3, 0x68(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  lwz       r7, 0x80(r31)
	  mr        r30, r3
	  addi      r4, r1, 0x60
	  stw       r7, 0x24(r1)
	  lbz       r5, 0x24(r1)
	  lbz       r0, 0x25(r1)
	  stb       r5, 0x104(r3)
	  lbz       r5, 0x26(r1)
	  stb       r0, 0x105(r3)
	  lbz       r0, 0x27(r1)
	  stb       r5, 0x106(r3)
	  stb       r0, 0x107(r3)
	  lwz       r6, 0x84(r31)
	  stw       r7, 0x58(r1)
	  stw       r6, 0x20(r1)
	  lbz       r5, 0x20(r1)
	  lbz       r0, 0x21(r1)
	  stb       r5, 0x108(r3)
	  lbz       r5, 0x22(r1)
	  stb       r0, 0x109(r3)
	  lbz       r0, 0x23(r1)
	  stb       r5, 0x10A(r3)
	  stb       r0, 0x10B(r3)
	  lwz       r0, 0x88(r31)
	  stw       r6, 0x5C(r1)
	  stw       r0, 0x60(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x8C(r31)
	  mr        r3, r30
	  addi      r4, r1, 0x64
	  stw       r0, 0x64(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD0:
	  li        r0, 0
	  stb       r0, 0xB8(r31)
	  lwz       r3, 0xB4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x2D8
	  lwz       r7, 0xBC(r31)
	  mr        r30, r3
	  addi      r4, r1, 0x50
	  stw       r7, 0x1C(r1)
	  lbz       r5, 0x1C(r1)
	  lbz       r0, 0x1D(r1)
	  stb       r5, 0x104(r3)
	  lbz       r5, 0x1E(r1)
	  stb       r0, 0x105(r3)
	  lbz       r0, 0x1F(r1)
	  stb       r5, 0x106(r3)
	  stb       r0, 0x107(r3)
	  lwz       r6, 0xC0(r31)
	  stw       r7, 0x48(r1)
	  stw       r6, 0x18(r1)
	  lbz       r5, 0x18(r1)
	  lbz       r0, 0x19(r1)
	  stb       r5, 0x108(r3)
	  lbz       r5, 0x1A(r1)
	  stb       r0, 0x109(r3)
	  lbz       r0, 0x1B(r1)
	  stb       r5, 0x10A(r3)
	  stb       r0, 0x10B(r3)
	  lwz       r0, 0xC4(r31)
	  stw       r6, 0x4C(r1)
	  stw       r0, 0x50(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xC8(r31)
	  mr        r3, r30
	  addi      r4, r1, 0x54
	  stw       r0, 0x54(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2D8

	.loc_0x180:
	  li        r0, 0
	  stb       r0, 0x6C(r31)
	  lwz       r3, 0x68(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x22C
	  lwz       r7, 0x70(r31)
	  mr        r30, r3
	  addi      r4, r1, 0x40
	  stw       r7, 0x14(r1)
	  lbz       r5, 0x14(r1)
	  lbz       r0, 0x15(r1)
	  stb       r5, 0x104(r3)
	  lbz       r5, 0x16(r1)
	  stb       r0, 0x105(r3)
	  lbz       r0, 0x17(r1)
	  stb       r5, 0x106(r3)
	  stb       r0, 0x107(r3)
	  lwz       r6, 0x74(r31)
	  stw       r7, 0x38(r1)
	  stw       r6, 0x10(r1)
	  lbz       r5, 0x10(r1)
	  lbz       r0, 0x11(r1)
	  stb       r5, 0x108(r3)
	  lbz       r5, 0x12(r1)
	  stb       r0, 0x109(r3)
	  lbz       r0, 0x13(r1)
	  stb       r5, 0x10A(r3)
	  stb       r0, 0x10B(r3)
	  lwz       r0, 0x78(r31)
	  stw       r6, 0x3C(r1)
	  stw       r0, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x7C(r31)
	  mr        r3, r30
	  addi      r4, r1, 0x44
	  stw       r0, 0x44(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x22C:
	  li        r0, 0
	  stb       r0, 0xB8(r31)
	  lwz       r3, 0xB4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x2D8
	  lwz       r7, 0xCC(r31)
	  mr        r30, r3
	  addi      r4, r1, 0x30
	  stw       r7, 0xC(r1)
	  lbz       r5, 0xC(r1)
	  lbz       r0, 0xD(r1)
	  stb       r5, 0x104(r3)
	  lbz       r5, 0xE(r1)
	  stb       r0, 0x105(r3)
	  lbz       r0, 0xF(r1)
	  stb       r5, 0x106(r3)
	  stb       r0, 0x107(r3)
	  lwz       r6, 0xD0(r31)
	  stw       r7, 0x28(r1)
	  stw       r6, 0x8(r1)
	  lbz       r5, 0x8(r1)
	  lbz       r0, 0x9(r1)
	  stb       r5, 0x108(r3)
	  lbz       r5, 0xA(r1)
	  stb       r0, 0x109(r3)
	  lbz       r0, 0xB(r1)
	  stb       r5, 0x10A(r3)
	  stb       r0, 0x10B(r3)
	  lwz       r0, 0xD4(r31)
	  stw       r6, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xD8(r31)
	  mr        r3, r30
	  addi      r4, r1, 0x34
	  stw       r0, 0x34(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2D8:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1800
	  li        r5, 0
	  bl        -0x962A4
	  li        r0, 0x1
	  stb       r0, 0x9(r31)
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}
} // namespace ebi
