#include "types.h"

/*
 * --INFO--
 * Address:	80035DC8
 * Size:	00004C
 */
J2DPerspGraph::J2DPerspGraph()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x7BD8(r2)
	  stw       r0, 0x14(r1)
	  fmr       f2, f1
	  stw       r31, 0xC(r1)
	  fmr       f3, f1
	  fmr       f4, f1
	  mr        r31, r3
	  bl        0x288
	  lis       r4, 0x804A
	  mr        r3, r31
	  addi      r0, r4, 0x628
	  stw       r0, 0x0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80035E14
 * Size:	000060
 */
void J2DPerspGraph::set(float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f3
	  stfd      f30, 0x10(r1)
	  fmr       f30, f2
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        .loc_0x60
	  stfs      f30, 0xC0(r31)
	  mr        r3, r31
	  stfs      f31, 0xC4(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lfd       f30, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x60:
	*/
}

/*
 * --INFO--
 * Address:	80035E74
 * Size:	00002C
 */
void J2DPerspGraph::setFovy(float)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x7BD4(r2)
	  stfs      f1, 0xBC(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x18
	  stfs      f0, 0xBC(r3)
	  blr

	.loc_0x18:
	  lfs       f0, -0x7BD0(r2)
	  fcmpo     cr0, f1, f0
	  blelr-
	  stfs      f0, 0xBC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80035EA0
 * Size:	000068
 */
void J2DPerspGraph::setPort()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x26C
	  lfs       f3, 0xC(r31)
	  addi      r3, r31, 0x40
	  lfs       f1, 0x4(r31)
	  lfs       f2, 0x10(r31)
	  lfs       f0, 0x8(r31)
	  fsubs     f5, f3, f1
	  lfs       f1, 0xBC(r31)
	  fsubs     f0, f2, f0
	  lfs       f3, 0xC0(r31)
	  lfs       f4, 0xC4(r31)
	  fdivs     f2, f5, f0
	  bl        0xB4E24
	  addi      r3, r31, 0x40
	  li        r4, 0
	  bl        0xB3558
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80035F08
 * Size:	000068
 */
void J2DPerspGraph::setLookat()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f2, -0x7BCC(r2)
	  stw       r0, 0x14(r1)
	  lfs       f0, -0x7BC8(r2)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f1, 0xBC(r3)
	  fmuls     f1, f2, f1
	  fdivs     f1, f1, f0
	  bl        0x999C4
	  lfs       f2, 0x10(r31)
	  frsp      f3, f1
	  lfs       f1, 0x8(r31)
	  mr        r3, r31
	  lfs       f0, -0x7BC4(r2)
	  fsubs     f1, f2, f1
	  fmuls     f0, f1, f0
	  fdivs     f0, f0, f3
	  stfs      f0, 0xC8(r31)
	  bl        .loc_0x68
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x68:
	*/
}

/*
 * --INFO--
 * Address:	80035F70
 * Size:	0000A0
 */
void J2DPerspGraph::makeLookat()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f3, -0x7BC4(r2)
	  stw       r0, 0x44(r1)
	  addi      r4, r1, 0x20
	  addi      r5, r1, 0x8
	  addi      r6, r1, 0x14
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lfs       f4, 0xC(r3)
	  addi      r3, r31, 0x80
	  lfs       f1, 0x4(r31)
	  lfs       f2, 0x10(r31)
	  fadds     f4, f4, f1
	  lfs       f0, 0x8(r31)
	  lfs       f1, -0x7BD8(r2)
	  fadds     f2, f2, f0
	  lfs       f0, -0x7BC0(r2)
	  fmuls     f4, f4, f3
	  fmuls     f3, f2, f3
	  stfs      f4, 0x20(r1)
	  stfs      f3, 0x24(r1)
	  lfs       f2, 0xC8(r31)
	  fneg      f2, f2
	  stfs      f4, 0x14(r1)
	  stfs      f3, 0x18(r1)
	  stfs      f2, 0x28(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f1, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  bl        0xB490C
	  addi      r3, r31, 0x80
	  li        r4, 0
	  bl        0xB3580
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80036010
 * Size:	00005C
 */
J2DPerspGraph::~J2DPerspGraph()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x628
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x650
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x11F9C

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003606C
 * Size:	000008
 */
u32 J2DPerspGraph::getGrafType() const { return 0x2; }
