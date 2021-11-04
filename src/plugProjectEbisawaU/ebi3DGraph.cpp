#include "types.h"

namespace ebi {

/*
 * --INFO--
 * Address:	803C9D10
 * Size:	000104
 */
void E3DAnimRes::load(J3DModelData*, JKRArchive*, char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  mr        r4, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r5
	  lwz       r12, 0x0(r5)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  bne-      .loc_0x5C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6408
	  li        r4, 0x14
	  addi      r5, r5, 0x6418
	  crclr     6, 0x6
	  bl        -0x39F728

	.loc_0x5C:
	  mr        r3, r31
	  bl        -0x3577D0
	  stw       r3, 0x0(r29)
	  lwz       r0, 0x18(r30)
	  lwz       r4, 0x0(r29)
	  rlwinm    r3,r0,0,28,31
	  bl        -0x35E65C
	  stw       r3, 0x4(r29)
	  lis       r3, 0x4330
	  lfs       f0, 0x1678(r2)
	  li        r0, 0
	  stw       r3, 0x8(r1)
	  lfd       f4, 0x1688(r2)
	  stfs      f0, 0x8(r29)
	  lfs       f0, 0x167C(r2)
	  lwz       r3, 0x0(r29)
	  lfs       f1, 0x1684(r2)
	  lha       r3, 0x6(r3)
	  lfs       f2, 0x1680(r2)
	  xoris     r3, r3, 0x8000
	  stw       r3, 0xC(r1)
	  lfd       f3, 0x8(r1)
	  fsubs     f3, f3, f4
	  fsubs     f0, f3, f0
	  stfs      f0, 0xC(r29)
	  lfs       f0, 0x8(r29)
	  stfs      f0, 0x10(r29)
	  lfs       f0, 0xC(r29)
	  stfs      f0, 0x14(r29)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x18(r29)
	  stw       r0, 0x1C(r29)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C9E14
 * Size:	000058
 */
void E3DAnimCtrl::setAnimFolder(ebi::E3DAnimFolderBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6408
	  li        r4, 0x28
	  addi      r5, r5, 0x6418
	  crclr     6, 0x6
	  bl        -0x39F80C

	.loc_0x3C:
	  stw       r31, 0x10(r30)
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
 * Address:	803C9E6C
 * Size:	0000A4
 */
void E3DAnimCtrl::init(long, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  fmr       f31, f1
	  lwz       r0, 0x10(r3)
	  mr        r31, r4
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6408
	  li        r4, 0x2F
	  addi      r5, r5, 0x6418
	  crclr     6, 0x6
	  bl        -0x39F878

	.loc_0x50:
	  lwz       r3, 0x10(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r30)
	  li        r0, 0
	  stfs      f31, 0x4(r30)
	  lwz       r3, 0xC(r30)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x0(r30)
	  stw       r0, 0x8(r30)
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void E3DAnimCtrl::setStartFrame(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C9F10
 * Size:	000080
 */
void E3DAnimCtrl::play(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6408
	  li        r4, 0x3F
	  addi      r5, r5, 0x6418
	  crclr     6, 0x6
	  bl        -0x39F908

	.loc_0x3C:
	  lwz       r0, 0x8(r31)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x6C
	  lwz       r3, 0xC(r31)
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x64
	  li        r0, 0x1
	  stw       r0, 0x8(r31)
	  b         .loc_0x6C

	.loc_0x64:
	  li        r0, 0x2
	  stw       r0, 0x8(r31)

	.loc_0x6C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C9F90
 * Size:	000064
 */
void E3DAnimCtrl::playStopEnd(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6408
	  li        r4, 0x4C
	  addi      r5, r5, 0x6418
	  crclr     6, 0x6
	  bl        -0x39F988

	.loc_0x3C:
	  lwz       r0, 0x8(r31)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x50
	  li        r0, 0x2
	  stw       r0, 0x8(r31)

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
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
void E3DAnimCtrl::stop(void)
{
	// UNUSED FUNCTION
}
} // namespace ebi
