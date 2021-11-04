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
 * Address:	8022E36C
 * Size:	000034
 */
void Game::CellIteratorArg::__ct(void)
{
	/*
	.loc_0x0:
	  li        r4, 0
	  lfs       f0, -0x4060(r2)
	  stw       r4, 0x10(r3)
	  stw       r4, 0x14(r3)
	  stfs      f0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  stfs      f0, 0xC(r3)
	  lwz       r0, -0x6D38(r13)
	  stw       r0, 0x18(r3)
	  stb       r4, 0x1D(r3)
	  stb       r4, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022E3A0
 * Size:	000040
 */
void Game::CellIteratorArg::__ct((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  li        r5, 0
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0xC(r3)
	  stw       r5, 0x10(r3)
	  stw       r5, 0x14(r3)
	  lwz       r0, -0x6D38(r13)
	  stw       r0, 0x18(r3)
	  stb       r5, 0x1D(r3)
	  stb       r5, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022E3E0
 * Size:	00007C
 */
void Game::CellIterator::__ct((Game::CellIteratorArg&))
{
	/*
	.loc_0x0:
	  li        r5, 0
	  lfs       f0, -0x4060(r2)
	  stw       r5, 0x34(r3)
	  stw       r5, 0x38(r3)
	  stfs      f0, 0x24(r3)
	  stfs      f0, 0x28(r3)
	  stfs      f0, 0x2C(r3)
	  stfs      f0, 0x30(r3)
	  lwz       r0, -0x6D38(r13)
	  stw       r0, 0x3C(r3)
	  stb       r5, 0x41(r3)
	  stb       r5, 0x40(r3)
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x24(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x28(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x2C(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0x30(r3)
	  lwz       r0, 0x10(r4)
	  stw       r0, 0x34(r3)
	  lwz       r0, 0x14(r4)
	  stw       r0, 0x38(r3)
	  lwz       r0, 0x18(r4)
	  stw       r0, 0x3C(r3)
	  lbz       r0, 0x1C(r4)
	  stb       r0, 0x40(r3)
	  lbz       r0, 0x1D(r4)
	  stb       r0, 0x41(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022E45C
 * Size:	0000A4
 */
void Game::CellIterator::first(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lis       r0, 0x400
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0x3C(r3)
	  lwz       r3, 0x44(r4)
	  addi      r3, r3, 0x1
	  stw       r3, 0x44(r4)
	  lwz       r3, 0x44(r4)
	  cmplw     r3, r0
	  blt-      .loc_0x3C
	  li        r0, 0
	  stw       r0, 0x44(r4)

	.loc_0x3C:
	  lwz       r4, 0x44(r4)
	  li        r0, 0
	  mr        r3, r31
	  stw       r4, 0x20(r31)
	  stw       r0, 0x0(r31)
	  stw       r0, 0xC(r31)
	  bl        0x454
	  lwz       r0, 0xC(r31)
	  lwz       r3, 0x3C(r31)
	  mulli     r0, r0, 0x38
	  lwz       r4, 0x4(r31)
	  lwz       r3, 0x30(r3)
	  lwz       r5, 0x8(r31)
	  add       r3, r3, r0
	  bl        -0xD67D4
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  lwz       r0, 0x1C(r3)
	  stw       r0, 0x0(r31)

	.loc_0x88:
	  mr        r3, r31
	  bl        0x180
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022E500
 * Size:	000034
 */
void Game::CellIterator::next(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x68
	  mr        r3, r31
	  bl        0x14C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022E534
 * Size:	000010
 */
void Game::CellIterator::isDone(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r3)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022E544
 * Size:	00001C
 */
void Game::CellIterator::operator*(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x14
	  lwz       r3, 0xC(r3)
	  blr

	.loc_0x14:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022E560
 * Size:	00001C
 */
void Game::CellIterator::getCellObject(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x14
	  lwz       r3, 0xC(r3)
	  blr

	.loc_0x14:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022E57C
 * Size:	0000EC
 */
void Game::CellIterator::step(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r0, 0x0(r3)
	  stw       r0, 0x0(r31)

	.loc_0x28:
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xD4
	  lwz       r3, 0x8(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r31)
	  lwz       r3, 0x8(r31)
	  lwz       r0, 0x1C(r31)
	  cmpw      r3, r0
	  ble-      .loc_0xA4
	  lwz       r0, 0x14(r31)
	  stw       r0, 0x8(r31)
	  lwz       r3, 0x4(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r0, 0x18(r31)
	  cmpw      r3, r0
	  ble-      .loc_0xA4
	  lwz       r3, 0xC(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0xC(r31)
	  lwz       r3, 0x3C(r31)
	  lwz       r4, 0xC(r31)
	  lwz       r0, 0x2C(r3)
	  cmpw      r4, r0
	  blt-      .loc_0x9C
	  li        r3, 0
	  b         .loc_0xD8

	.loc_0x9C:
	  mr        r3, r31
	  bl        0x2E8

	.loc_0xA4:
	  lwz       r0, 0xC(r31)
	  lwz       r3, 0x3C(r31)
	  mulli     r0, r0, 0x38
	  lwz       r4, 0x4(r31)
	  lwz       r3, 0x30(r3)
	  lwz       r5, 0x8(r31)
	  add       r3, r3, r0
	  bl        -0xD6940
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
	  lwz       r0, 0x1C(r3)
	  stw       r0, 0x0(r31)

	.loc_0xD4:
	  li        r3, 0x1

	.loc_0xD8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022E668
 * Size:	000110
 */
void Game::CellIterator::find(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3

	.loc_0x14:
	  mr        r3, r31
	  bl        .loc_0x110
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2C
	  li        r3, 0x1
	  b         .loc_0xFC

	.loc_0x2C:
	  lwz       r3, 0x0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lwz       r0, 0x0(r3)
	  stw       r0, 0x0(r31)

	.loc_0x40:
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xEC
	  lwz       r3, 0x8(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r31)
	  lwz       r3, 0x8(r31)
	  lwz       r0, 0x1C(r31)
	  cmpw      r3, r0
	  ble-      .loc_0xBC
	  lwz       r0, 0x14(r31)
	  stw       r0, 0x8(r31)
	  lwz       r3, 0x4(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r0, 0x18(r31)
	  cmpw      r3, r0
	  ble-      .loc_0xBC
	  lwz       r3, 0xC(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0xC(r31)
	  lwz       r3, 0x3C(r31)
	  lwz       r4, 0xC(r31)
	  lwz       r0, 0x2C(r3)
	  cmpw      r4, r0
	  blt-      .loc_0xB4
	  li        r0, 0
	  b         .loc_0xF0

	.loc_0xB4:
	  mr        r3, r31
	  bl        0x1E4

	.loc_0xBC:
	  lwz       r0, 0xC(r31)
	  lwz       r3, 0x3C(r31)
	  mulli     r0, r0, 0x38
	  lwz       r4, 0x4(r31)
	  lwz       r3, 0x30(r3)
	  lwz       r5, 0x8(r31)
	  add       r3, r3, r0
	  bl        -0xD6A44
	  cmplwi    r3, 0
	  beq-      .loc_0xEC
	  lwz       r0, 0x1C(r3)
	  stw       r0, 0x0(r31)

	.loc_0xEC:
	  li        r0, 0x1

	.loc_0xF0:
	  rlwinm.   r0,r0,0,24,31
	  bne+      .loc_0x14
	  li        r3, 0

	.loc_0xFC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x110:
	*/
}

/*
 * --INFO--
 * Address:	8022E778
 * Size:	00018C
 */
void Game::CellIterator::satisfy(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x3C
	  li        r3, 0
	  b         .loc_0x164

	.loc_0x3C:
	  beq-      .loc_0x54
	  lwz       r4, 0xC(r3)
	  lwz       r0, 0x20(r30)
	  lwz       r3, 0xA4(r4)
	  cmplw     r3, r0
	  bne-      .loc_0x5C

	.loc_0x54:
	  li        r3, 0
	  b         .loc_0x164

	.loc_0x5C:
	  lwz       r3, 0x34(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x88
	  li        r3, 0
	  b         .loc_0x164

	.loc_0x88:
	  lwz       r4, 0x0(r30)
	  addi      r3, r1, 0x8
	  lwz       r31, 0xC(r4)
	  mr        r4, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lfs       f31, 0x8(r1)
	  lwz       r12, 0x10(r12)
	  lfs       f30, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x40(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x150
	  lwz       r0, 0x38(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x118
	  lfs       f0, 0x2C(r30)
	  lfs       f2, 0x24(r30)
	  fsubs     f3, f30, f0
	  lfs       f1, 0x30(r30)
	  lfs       f0, 0x20(r1)
	  fsubs     f2, f31, f2
	  fadds     f1, f1, f0
	  fmuls     f0, f3, f3
	  fmuls     f1, f1, f1
	  fmadds    f0, f2, f2, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x150
	  li        r3, 0
	  b         .loc_0x164

	.loc_0x118:
	  lfs       f0, 0x2C(r30)
	  lfs       f2, 0x24(r30)
	  fsubs     f30, f30, f0
	  lfs       f1, 0x30(r30)
	  lfs       f0, 0x20(r1)
	  fsubs     f31, f31, f2
	  fadds     f1, f1, f0
	  fmuls     f0, f30, f30
	  fmuls     f1, f1, f1
	  fmadds    f0, f31, f31, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x150
	  li        r3, 0
	  b         .loc_0x164

	.loc_0x150:
	  lwz       r4, 0x0(r30)
	  li        r3, 0x1
	  lwz       r0, 0x20(r30)
	  lwz       r4, 0xC(r4)
	  stw       r0, 0xA4(r4)

	.loc_0x164:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022E904
 * Size:	00018C
 */
void Game::CellIterator::calcExtent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfd       f2, -0x4048(r2)
	  stw       r0, 0x44(r1)
	  lis       r0, 0x4330
	  lfs       f3, -0x405C(r2)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lwz       r3, 0xC(r3)
	  lwz       r5, 0x3C(r31)
	  mulli     r3, r3, 0x38
	  stw       r0, 0x8(r1)
	  lwz       r4, 0x30(r5)
	  lfs       f0, 0x34(r5)
	  addi      r0, r3, 0x4
	  lfs       f6, 0x30(r31)
	  lhzx      r0, r4, r0
	  lfs       f7, 0x2C(r31)
	  stw       r0, 0xC(r1)
	  lfs       f4, 0x24(r31)
	  fsubs     f5, f7, f6
	  lfd       f1, 0x8(r1)
	  lfs       f9, 0x40(r5)
	  fsubs     f2, f1, f2
	  lfs       f8, 0x3C(r5)
	  fsubs     f1, f4, f6
	  fadds     f4, f4, f6
	  fmuls     f2, f2, f0
	  fadds     f0, f7, f6
	  fsubs     f1, f1, f9
	  fdivs     f6, f3, f2
	  fsubs     f2, f5, f8
	  fmuls     f1, f1, f6
	  fsubs     f4, f4, f9
	  fmuls     f2, f2, f6
	  fctiwz    f3, f1
	  fsubs     f0, f0, f8
	  fmuls     f1, f4, f6
	  fctiwz    f2, f2
	  stfd      f3, 0x10(r1)
	  fmuls     f0, f0, f6
	  fctiwz    f1, f1
	  lwz       r0, 0x14(r1)
	  stfd      f2, 0x18(r1)
	  fctiwz    f0, f0
	  stfd      f1, 0x20(r1)
	  lwz       r3, 0x1C(r1)
	  stw       r0, 0x10(r31)
	  lwz       r0, 0x24(r1)
	  stw       r3, 0x14(r31)
	  stfd      f0, 0x28(r1)
	  stw       r0, 0x18(r31)
	  lwz       r0, 0x2C(r1)
	  stw       r0, 0x1C(r31)
	  lwz       r6, 0x10(r31)
	  lwz       r7, 0x18(r31)
	  cmpw      r6, r7
	  ble-      .loc_0x100
	  lis       r3, 0x8048
	  li        r4, 0xF9
	  addi      r3, r3, 0x3828
	  subi      r5, r2, 0x4058
	  crclr     6, 0x6
	  bl        -0x2043C0

	.loc_0x100:
	  lwz       r6, 0x14(r31)
	  lwz       r7, 0x1C(r31)
	  cmpw      r6, r7
	  ble-      .loc_0x128
	  lis       r3, 0x8048
	  li        r4, 0xFC
	  addi      r3, r3, 0x3828
	  subi      r5, r2, 0x4050
	  crclr     6, 0x6
	  bl        -0x2043E8

	.loc_0x128:
	  lwz       r6, 0x10(r31)
	  lwz       r8, 0x18(r31)
	  lwz       r7, 0x14(r31)
	  lwz       r9, 0x1C(r31)
	  sub       r3, r8, r6
	  sub       r0, r9, r7
	  mullw     r0, r3, r0
	  cmpwi     r0, 0x2710
	  blt-      .loc_0x168
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  addi      r5, r4, 0x383C
	  addi      r3, r3, 0x3828
	  li        r4, 0x103
	  crclr     6, 0x6
	  bl        -0x204428

	.loc_0x168:
	  lwz       r0, 0x10(r31)
	  stw       r0, 0x4(r31)
	  lwz       r0, 0x14(r31)
	  stw       r0, 0x8(r31)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022EA90
 * Size:	000004
 */
void Game::CellIterator::dump(void) { }
