#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	80217760
 * Size:	000304
 */
void SingleGame::CaveState::init(Game::SingleGameSection*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  li        r0, 0
	  stw       r31, 0x6C(r1)
	  mr        r31, r4
	  stw       r30, 0x68(r1)
	  mr        r30, r3
	  stw       r29, 0x64(r1)
	  stw       r28, 0x60(r1)
	  stw       r0, -0x69E8(r13)
	  lwz       r3, -0x64AC(r13)
	  bl        0x215120
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x10(r30)
	  stb       r0, 0x18(r30)
	  bl        -0xC2C60
	  li        r0, 0
	  li        r4, 0x1
	  stb       r0, 0x194(r31)
	  lwz       r3, -0x6514(r13)
	  bl        0x20BBB0
	  lwz       r4, -0x6C18(r13)
	  li        r0, 0x1
	  lfs       f1, -0x4360(r2)
	  mr        r3, r31
	  lwz       r6, 0x40(r4)
	  li        r4, 0x1
	  lfs       f2, -0x435C(r2)
	  lwz       r5, 0x240(r6)
	  ori       r5, r5, 0x1
	  stw       r5, 0x240(r6)
	  lwz       r6, -0x6C18(r13)
	  lbz       r5, 0x3C(r6)
	  ori       r5, r5, 0x20
	  stb       r5, 0x3C(r6)
	  lwz       r5, -0x6560(r13)
	  lwz       r5, 0x18(r5)
	  stb       r0, 0x91(r5)
	  lwz       r5, -0x6C18(r13)
	  stb       r0, 0x48(r5)
	  bl        -0xC9AE8
	  lwz       r3, -0x6B70(r13)
	  li        r6, 0x1
	  lbz       r4, 0x78(r3)
	  addi      r0, r3, 0x20
	  srawi     r3, r4, 0x3
	  rlwinm    r5,r3,3,0,28
	  sub       r3, r0, r3
	  sub       r5, r4, r5
	  lbz       r0, 0x0(r3)
	  slw       r3, r6, r5
	  and.      r0, r3, r0
	  beq-      .loc_0xE0
	  subfic    r4, r4, 0x1

	.loc_0xE0:
	  mr        r3, r31
	  bl        -0xC9F2C
	  mr        r3, r31
	  bl        -0xC9AC4
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  lwz       r3, -0x6D20(r13)
	  mr        r29, r0
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  mr        r28, r0
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1AC
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1AC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5D00
	  li        r5, 0
	  stw       r0, 0x18(r1)
	  addi      r6, r3, 0x49BC
	  li        r0, 0x1
	  mr        r3, r28
	  stw       r29, 0x1C(r1)
	  addi      r4, r1, 0x18
	  stw       r6, 0x18(r1)
	  stb       r5, 0x20(r1)
	  stb       r0, 0x21(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1AC:
	  lwz       r6, 0xC8(r31)
	  lis       r3, 0x8048
	  li        r0, 0
	  lfs       f0, -0x4358(r2)
	  addi      r4, r3, 0x244C
	  stw       r0, 0x28(r1)
	  addi      r29, r1, 0x3C
	  lwz       r3, -0x6CF8(r13)
	  stw       r4, 0x24(r1)
	  mr        r4, r29
	  li        r5, 0
	  stw       r6, 0x30(r1)
	  stfs      f0, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  stw       r0, 0x4C(r1)
	  stw       r0, 0x34(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x50(r1)
	  stw       r0, 0x38(r1)
	  stw       r0, 0x54(r1)
	  lwz       r0, 0xCC(r31)
	  stw       r0, 0x34(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CD0(r13)
	  lwz       r3, 0xAC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x240
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x48(r1)

	.loc_0x240:
	  lwz       r3, -0x6CF8(r13)
	  mr        r4, r29
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CF8(r13)
	  mr        r4, r29
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x40(r1)
	  addi      r4, r1, 0x24
	  lwz       r3, -0x64AC(r13)
	  bl        0x214FF4
	  lwz       r3, -0x6560(r13)
	  bl        0x1E5D48
	  mr        r3, r31
	  bl        -0xC3A54
	  li        r7, 0
	  lis       r3, 0x8051
	  stb       r7, 0x11(r30)
	  addi      r4, r3, 0x41E4
	  lfs       f1, -0x4354(r2)
	  addi      r5, r1, 0xC
	  lwz       r3, -0x6C18(r13)
	  addi      r6, r1, 0x8
	  lbz       r0, 0x3C(r3)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x3C(r3)
	  stb       r7, 0x23D(r31)
	  lwz       r3, -0x6A50(r13)
	  bl        0x6D50
	  cmpwi     r3, 0
	  bne-      .loc_0x2DC
	  li        r0, 0x1
	  stb       r0, 0x23E(r31)
	  b         .loc_0x2E4

	.loc_0x2DC:
	  li        r0, 0
	  stb       r0, 0x23E(r31)

	.loc_0x2E4:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  lwz       r28, 0x60(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void SingleGame::CaveState::gameStart(Game::SingleGameSection*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80217A64
 * Size:	00000C
 */
void SingleGame::CaveState::on_section_fadeout(Game::SingleGameSection*)
{
	// Generated from stb r0, 0x11(r3)
	_11 = 1;
}

/*
 * --INFO--
 * Address:	80217A70
 * Size:	0002D4
 */
void SingleGame::CaveState::exec(Game::SingleGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r4
	  stw       r30, 0x68(r1)
	  mr        r30, r3
	  lbz       r0, 0x11(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x2BC
	  lbz       r0, 0x18(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x98
	  lwz       r3, -0x65F8(r13)
	  bl        0x1A1B08
	  lwz       r3, -0x6560(r13)
	  bl        0x1E457C
	  lwz       r3, -0x6560(r13)
	  bl        0x1E6C94
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2BC
	  lbz       r8, 0x23C(r31)
	  li        r7, 0
	  li        r0, 0x1
	  mr        r3, r30
	  stb       r7, 0x8(r1)
	  mr        r4, r31
	  addi      r6, r1, 0x8
	  li        r5, 0x2
	  stb       r7, 0x9(r1)
	  stb       r8, 0xA(r1)
	  sth       r0, 0xC(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2BC
	  b         .loc_0x2BC

	.loc_0x98:
	  mr        r3, r31
	  bl        -0xCC290
	  lwz       r0, -0x6978(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lwz       r3, -0x6D20(r13)
	  bl        -0xBCF00
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  mr        r4, r3
	  addi      r3, r1, 0x1C
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x1C(r1)
	  addi      r4, r1, 0x28
	  lfs       f1, 0x20(r1)
	  lfs       f0, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  lwz       r3, -0x6978(r13)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  bl        0x2D35C

	.loc_0xF8:
	  lwz       r3, 0x250(r31)
	  lwz       r0, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  cmpw      r3, r0
	  bne-      .loc_0x2BC
	  mr        r3, r31
	  bl        -0xC2104
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x230
	  li        r3, -0x1
	  bl        -0x46D38
	  cmpwi     r3, 0
	  bne-      .loc_0x230
	  lwz       r5, -0x6C18(r13)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x24B8
	  lfs       f0, -0x4358(r2)
	  lbz       r3, 0x3C(r5)
	  li        r0, 0
	  rlwinm    r3,r3,0,27,25
	  stb       r3, 0x3C(r5)
	  lwz       r5, 0xC8(r31)
	  lwz       r3, -0x6D20(r13)
	  stw       r4, 0x34(r1)
	  stw       r0, 0x38(r1)
	  stw       r5, 0x40(r1)
	  stfs      f0, 0x4C(r1)
	  stfs      f0, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  stw       r0, 0x5C(r1)
	  stw       r0, 0x44(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x60(r1)
	  stw       r0, 0x48(r1)
	  stw       r0, 0x64(r1)
	  bl        -0xBCFE0
	  mr.       r30, r3
	  bne-      .loc_0x1D0
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  lwz       r3, 0x58(r3)
	  lwz       r0, 0xE4(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x1B8
	  li        r4, 0

	.loc_0x1B8:
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3

	.loc_0x1D0:
	  lwz       r0, 0xCC(r31)
	  mr        r4, r30
	  addi      r3, r1, 0x10
	  stw       r0, 0x44(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x10(r1)
	  mr        r3, r30
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x18(r1)
	  stfs      f2, 0x4C(r1)
	  stfs      f1, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x58(r1)
	  addi      r4, r1, 0x34
	  lwz       r3, -0x64AC(r13)
	  bl        0x214D38
	  b         .loc_0x2BC

	.loc_0x230:
	  lbz       r0, 0x180(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x24C
	  mr        r3, r31
	  bl        -0xC3594
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2BC

	.loc_0x24C:
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x118
	  bl        0x2410C8
	  mr        r0, r3
	  li        r3, -0x1
	  mr        r30, r0
	  bl        -0x46EC8
	  cmpwi     r3, 0xA
	  bge-      .loc_0x2A0
	  lwz       r0, -0x69E8(r13)
	  cmpwi     r0, 0
	  ble-      .loc_0x2A0
	  cmplwi    r30, 0
	  beq-      .loc_0x2BC
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2BC

	.loc_0x2A0:
	  cmplwi    r30, 0
	  beq-      .loc_0x2BC
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2BC:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80217D44
 * Size:	000098
 */
void SingleGame::CaveState::draw(Game::SingleGameSection*, Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lbz       r0, 0x11(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x118(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x80

	.loc_0x50:
	  lwz       r3, -0x6978(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  mr        r4, r31
	  bl        0x2D014

	.loc_0x64:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0xCC188
	  mr        r3, r30
	  bl        -0xC1E5C
	  mr        r3, r30
	  bl        -0xC8BE8

	.loc_0x80:
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
 * Address:	80217DDC
 * Size:	00048C
 */
void SingleGame::CaveState::check_SMenu(Game::SingleGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  stw       r0, 0x134(r1)
	  stw       r31, 0x12C(r1)
	  mr        r31, r4
	  lis       r4, 0x8048
	  stw       r30, 0x128(r1)
	  addi      r30, r4, 0x2430
	  lwz       r3, -0x6560(r13)
	  lwz       r4, 0x10C(r31)
	  bl        0x1E4274
	  lwz       r3, -0x6560(r13)
	  bl        0x1E5124
	  cmpwi     r3, 0x1
	  beq-      .loc_0x5C
	  bge-      .loc_0x50
	  cmpwi     r3, -0x1
	  beq-      .loc_0x3C8
	  bge-      .loc_0x474
	  b         .loc_0x454

	.loc_0x50:
	  cmpwi     r3, 0x4
	  beq-      .loc_0x84
	  b         .loc_0x454

	.loc_0x5C:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x4350
	  li        r6, 0x3
	  bl        -0x62EB4
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x4350
	  bl        -0x62ED4
	  b         .loc_0x474

	.loc_0x84:
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r30, 0x98
	  li        r4, 0
	  lbz       r0, 0x3C(r3)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6C18(r13)
	  bl        -0x62EF8
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x474
	  lwz       r4, 0xC8(r31)
	  li        r0, 0
	  lfs       f0, -0x4358(r2)
	  addi      r3, r30, 0xA4
	  stw       r3, 0x24(r1)
	  lwz       r3, -0x6CD0(r13)
	  stw       r0, 0x28(r1)
	  stw       r4, 0x30(r1)
	  stfs      f0, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  stw       r0, 0x4C(r1)
	  stw       r0, 0x34(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x50(r1)
	  stw       r0, 0x38(r1)
	  stw       r0, 0x54(r1)
	  lwz       r0, 0xCC(r31)
	  stw       r0, 0x34(r1)
	  lwz       r31, 0xAC(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x124
	  addi      r3, r30, 0xB4
	  addi      r5, r30, 0xCC
	  li        r4, 0x318
	  crclr     6, 0x6
	  bl        -0x1ED8BC

	.loc_0x124:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x48(r1)
	  addi      r4, r1, 0x24
	  lwz       r3, -0x64AC(r13)
	  bl        0x214A80
	  li        r30, 0

	.loc_0x17C:
	  lwz       r3, -0x6D20(r13)
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C8
	  mr        r3, r31
	  bl        -0x78A1C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C8
	  mr        r3, r31
	  bl        -0x78B7C

	.loc_0x1C8:
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x2
	  blt+      .loc_0x17C
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x20(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x14(r1)
	  stw       r0, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  bne-      .loc_0x214
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x3A4

	.loc_0x214:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x280

	.loc_0x22C:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3A4
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)

	.loc_0x280:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x22C
	  b         .loc_0x3A4

	.loc_0x2A0:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2E8
	  mr        r3, r30
	  bl        -0x78C8C
	  lwz       r3, 0x294(r30)
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x8112C

	.loc_0x2E8:
	  lwz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x314
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x3A4

	.loc_0x314:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x388

	.loc_0x334:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3A4
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)

	.loc_0x388:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x334

	.loc_0x3A4:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x2A0
	  b         .loc_0x474

	.loc_0x3C8:
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x474
	  lwz       r4, -0x64AC(r13)
	  lwz       r0, 0x18(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x474
	  bl        -0x631FC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x474
	  lwz       r3, 0x10C(r31)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,19,19
	  beq-      .loc_0x474
	  addi      r3, r1, 0x58
	  bl        -0x2EEC
	  mr        r3, r31
	  addi      r4, r1, 0x58
	  bl        -0xC3218
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x58
	  bl        0x1E4AD4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x474
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  subi      r5, r2, 0x4348
	  li        r6, 0x3
	  bl        -0x63284
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  subi      r5, r2, 0x4348
	  bl        -0x632A4
	  b         .loc_0x474

	.loc_0x454:
	  lwz       r3, -0x6560(r13)
	  bl        0x1E4CFC
	  mr        r6, r3
	  addi      r3, r30, 0xB4
	  addi      r5, r30, 0xDC
	  li        r4, 0x356
	  crclr     6, 0x6
	  bl        -0x1EDC0C

	.loc_0x474:
	  lwz       r0, 0x134(r1)
	  lwz       r31, 0x12C(r1)
	  lwz       r30, 0x128(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80218268
 * Size:	000068
 */
void SingleGame::CaveState::cleanup(Game::SingleGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x14(r1)
	  addi      r5, r3, 0x2528
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  lwz       r6, -0x6C18(r13)
	  lbz       r0, 0x3C(r6)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x3C(r6)
	  lwz       r3, -0x6C18(r13)
	  bl        -0x63318
	  mr        r3, r31
	  li        r4, 0
	  bl        0x232F0
	  lwz       r0, 0xFC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  bl        0x24F180

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802182D0
 * Size:	0000D4
 */
void SingleGame::CaveState::onOrimaDown(Game::SingleGameSection*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  lfs       f0, -0x4358(r2)
	  stw       r0, 0x54(r1)
	  li        r0, 0
	  stw       r31, 0x4C(r1)
	  mr        r31, r5
	  addi      r5, r3, 0x253C
	  stw       r30, 0x48(r1)
	  mr        r30, r4
	  lwz       r6, 0xC8(r4)
	  mr        r4, r31
	  lwz       r3, -0x6D20(r13)
	  stw       r0, 0xC(r1)
	  stw       r5, 0x8(r1)
	  stw       r6, 0x14(r1)
	  stfs      f0, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stw       r31, 0x30(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x34(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x38(r1)
	  lwz       r0, 0xCC(r30)
	  stw       r0, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, -0x64AC(r13)
	  cmpwi     r31, 0
	  stw       r3, 0x18C(r4)
	  bne-      .loc_0xA4
	  lwz       r0, 0x104(r30)
	  lwz       r3, -0x64AC(r13)
	  stw       r0, 0x190(r3)
	  b         .loc_0xB0

	.loc_0xA4:
	  lwz       r0, 0x108(r30)
	  lwz       r3, -0x64AC(r13)
	  stw       r0, 0x190(r3)

	.loc_0xB0:
	  lwz       r3, -0x64AC(r13)
	  addi      r4, r1, 0x8
	  bl        0x214648
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802183A4
 * Size:	000104
 */
void SingleGame::CaveState::onFountainReturn(Game::SingleGameSection*,
                                             Game::ItemBigFountain::Item*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r5
	  stw       r30, 0x48(r1)
	  mr        r30, r4
	  mr        r3, r30
	  lwz       r6, -0x6C18(r13)
	  lbz       r0, 0x3C(r6)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r6)
	  bl        -0xC446C
	  lwz       r6, 0xC8(r30)
	  lis       r3, 0x8048
	  li        r0, 0
	  lfs       f0, -0x4358(r2)
	  addi      r5, r3, 0x254C
	  stw       r0, 0x18(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  stw       r5, 0x14(r1)
	  stw       r6, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x44(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  mr        r3, r31
	  lwz       r5, -0x64AC(r13)
	  li        r4, 0
	  lwz       r0, 0xCC(r30)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x194(r5)
	  bl        -0xDCA30
	  lwz       r3, -0x64AC(r13)
	  addi      r4, r1, 0x14
	  bl        0x214544
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802184A8
 * Size:	000144
 */
void SingleGame::CaveState::onNextFloor(Game::SingleGameSection*,
                                        Game::ItemHole::Item*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  mr        r30, r5
	  stw       r29, 0x54(r1)
	  mr        r29, r4
	  lwz       r3, -0x6CF8(r13)
	  lwz       r31, 0x114(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x6C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  mr        r3, r31
	  bl        0x1924D4
	  lwz       r3, -0x6B70(r13)
	  stfs      f1, 0x70(r3)
	  b         .loc_0x6C

	.loc_0x60:
	  lwz       r3, -0x6B70(r13)
	  li        r0, 0
	  stb       r0, 0x6C(r3)

	.loc_0x6C:
	  lwz       r7, -0x6C18(r13)
	  lis       r3, 0x8048
	  addi      r5, r3, 0x255C
	  lfs       f0, -0x4358(r2)
	  lbz       r6, 0x3C(r7)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  rlwinm    r6,r6,0,27,25
	  stb       r6, 0x3C(r7)
	  lwz       r6, 0xC8(r29)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x18(r1)
	  stw       r6, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x44(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r30
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  addi      r4, r1, 0x14
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0xCC(r29)
	  stw       r0, 0x24(r1)
	  stw       r30, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x214404
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802185EC
 * Size:	0005F0
 */
void SingleGame::CaveState::onMovieCommand(Game::SingleGameSection*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stfd      f29, 0x60(r1)
	  psq_st    f29,0x68(r1),0,0
	  stmw      r23, 0x3C(r1)
	  cmpwi     r5, 0
	  mr        r31, r3
	  mr        r29, r4
	  beq-      .loc_0x3C
	  b         .loc_0x5C4

	.loc_0x3C:
	  lbz       r0, 0x10(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C4
	  lis       r4, 0x8048
	  lwz       r3, -0x64AC(r13)
	  addi      r4, r4, 0x253C
	  bl        0x215F78
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  lwz       r3, -0x6D20(r13)
	  lwz       r0, 0x50(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x5C4

	.loc_0x70:
	  lis       r4, 0x8048
	  lwz       r3, -0x64AC(r13)
	  addi      r4, r4, 0x253C
	  bl        0x215F50
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A4
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x18(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0xC(r1)
	  stw       r0, 0x10(r1)
	  stw       r3, 0x14(r1)
	  bne-      .loc_0xC8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x10(r1)
	  b         .loc_0x284

	.loc_0xC8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x10(r1)
	  b         .loc_0x134

	.loc_0xE0:
	  lwz       r3, 0x14(r1)
	  lwz       r4, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x284
	  lwz       r3, 0x14(r1)
	  lwz       r4, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x10(r1)

	.loc_0x134:
	  lwz       r12, 0xC(r1)
	  addi      r3, r1, 0xC
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xE0
	  b         .loc_0x284

	.loc_0x154:
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C8
	  lwz       r3, 0x294(r28)
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x817E8
	  mr        r3, r28
	  li        r4, 0
	  bl        -0xDCD38
	  li        r0, 0x3
	  mr        r4, r28
	  sth       r0, 0x8(r1)
	  addi      r6, r1, 0x8
	  li        r5, 0x15
	  lwz       r3, 0x28C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1C8:
	  lwz       r0, 0x18(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1F4
	  lwz       r3, 0x14(r1)
	  lwz       r4, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x10(r1)
	  b         .loc_0x284

	.loc_0x1F4:
	  lwz       r3, 0x14(r1)
	  lwz       r4, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x10(r1)
	  b         .loc_0x268

	.loc_0x214:
	  lwz       r3, 0x14(r1)
	  lwz       r4, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x284
	  lwz       r3, 0x14(r1)
	  lwz       r4, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x10(r1)

	.loc_0x268:
	  lwz       r12, 0xC(r1)
	  addi      r3, r1, 0xC
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x214

	.loc_0x284:
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x10(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x154

	.loc_0x2A4:
	  mr        r3, r29
	  bl        -0xC28A8
	  li        r0, 0x1
	  li        r30, 0
	  stb       r0, 0x10(r31)
	  li        r27, 0
	  lwz       r3, -0x6B70(r13)
	  lwz       r31, 0xB8(r3)
	  addi      r28, r31, 0x4
	  b         .loc_0x2FC

	.loc_0x2CC:
	  mr        r3, r28
	  mr        r4, r27
	  bl        -0x334C0
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2F8
	  mr        r3, r28
	  mr        r4, r27
	  bl        -0x334D8
	  lbz       r0, 0x0(r3)
	  add       r30, r30, r0

	.loc_0x2F8:
	  addi      r27, r27, 0x1

	.loc_0x2FC:
	  lhz       r0, 0x0(r28)
	  cmpw      r27, r0
	  blt+      .loc_0x2CC
	  addi      r27, r31, 0xC
	  li        r28, 0
	  b         .loc_0x344

	.loc_0x314:
	  mr        r3, r27
	  mr        r4, r28
	  bl        -0x33508
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x340
	  mr        r3, r27
	  mr        r4, r28
	  bl        -0x33520
	  lbz       r0, 0x0(r3)
	  add       r30, r30, r0

	.loc_0x340:
	  addi      r28, r28, 0x1

	.loc_0x344:
	  lhz       r0, 0x0(r27)
	  cmpw      r28, r0
	  blt+      .loc_0x314
	  bl        -0x14F39C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f3, -0x4338(r2)
	  stw       r0, 0x20(r1)
	  lfs       f2, -0x4340(r2)
	  lfd       f0, 0x20(r1)
	  lfs       f1, -0x4358(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x4360(r2)
	  fdivs     f2, f3, f2
	  fmadds    f2, f1, f2, f0
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x394
	  fmr       f2, f1
	  b         .loc_0x3A0

	.loc_0x394:
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x3A0
	  fmr       f2, f0

	.loc_0x3A0:
	  xoris     r0, r30, 0x8000
	  lis       r28, 0x4330
	  stw       r0, 0x24(r1)
	  li        r0, 0x1
	  lfd       f30, -0x4338(r2)
	  stw       r28, 0x20(r1)
	  lfs       f0, -0x4358(r2)
	  lfd       f1, 0x20(r1)
	  stb       r0, 0x274(r29)
	  fsubs     f1, f1, f30
	  fmuls     f31, f1, f2
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x5C4
	  lwz       r27, -0x6AE0(r13)
	  addi      r26, r31, 0x4
	  lfs       f29, -0x4340(r2)
	  li        r25, 0
	  b         .loc_0x4BC

	.loc_0x3E8:
	  li        r24, 0
	  li        r23, 0
	  b         .loc_0x488

	.loc_0x3F4:
	  mr        r3, r27
	  mr        r4, r25
	  bl        -0xACC60
	  bl        -0x14F44C
	  xoris     r3, r3, 0x8000
	  xoris     r0, r30, 0x8000
	  stw       r3, 0x24(r1)
	  stw       r28, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  stw       r0, 0x2C(r1)
	  fsubs     f1, f0, f30
	  stw       r28, 0x28(r1)
	  lfd       f0, 0x28(r1)
	  fdivs     f1, f1, f29
	  fsubs     f0, f0, f30
	  fdivs     f0, f31, f0
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x480
	  mr        r3, r27
	  mr        r4, r25
	  bl        -0xACCAC
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r27
	  mr        r5, r25
	  bl        -0x31480
	  mr        r4, r25
	  addi      r3, r29, 0x264
	  bl        -0x33650
	  lbz       r4, 0x0(r3)
	  addi      r24, r24, 0x1
	  lfs       f0, -0x4360(r2)
	  addi      r0, r4, 0x1
	  fsubs     f31, f31, f0
	  stb       r0, 0x0(r3)

	.loc_0x480:
	  subi      r30, r30, 0x1
	  addi      r23, r23, 0x1

	.loc_0x488:
	  mr        r3, r26
	  mr        r4, r25
	  bl        -0x3367C
	  lbz       r0, 0x0(r3)
	  cmpw      r23, r0
	  blt+      .loc_0x3F4
	  mr        r3, r26
	  mr        r4, r25
	  bl        -0x33694
	  lbz       r0, 0x0(r3)
	  addi      r25, r25, 0x1
	  sub       r0, r0, r24
	  stb       r0, 0x0(r3)

	.loc_0x4BC:
	  lhz       r0, 0x0(r26)
	  cmpw      r25, r0
	  blt+      .loc_0x3E8
	  lwz       r28, -0x6AD8(r13)
	  addi      r23, r31, 0xC
	  lfd       f29, -0x4338(r2)
	  li        r24, 0
	  lfs       f30, -0x4340(r2)
	  lis       r31, 0x4330
	  b         .loc_0x5B8

	.loc_0x4E4:
	  li        r25, 0
	  li        r26, 0
	  b         .loc_0x584

	.loc_0x4F0:
	  mr        r3, r28
	  mr        r4, r24
	  bl        -0xACD5C
	  bl        -0x14F548
	  xoris     r3, r3, 0x8000
	  xoris     r0, r30, 0x8000
	  stw       r3, 0x2C(r1)
	  stw       r31, 0x28(r1)
	  lfd       f0, 0x28(r1)
	  stw       r0, 0x24(r1)
	  fsubs     f1, f0, f29
	  stw       r31, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  fdivs     f1, f1, f30
	  fsubs     f0, f0, f29
	  fdivs     f0, f31, f0
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x57C
	  mr        r3, r28
	  mr        r4, r24
	  bl        -0xACDA8
	  mr        r4, r24
	  addi      r3, r29, 0x26C
	  bl        -0x3373C
	  lbz       r6, 0x0(r3)
	  mr        r4, r28
	  mr        r5, r24
	  addi      r0, r6, 0x1
	  stb       r0, 0x0(r3)
	  lwz       r3, -0x6B70(r13)
	  bl        -0x31594
	  lfs       f0, -0x4360(r2)
	  addi      r25, r25, 0x1
	  fsubs     f31, f31, f0

	.loc_0x57C:
	  subi      r30, r30, 0x1
	  addi      r26, r26, 0x1

	.loc_0x584:
	  mr        r3, r23
	  mr        r4, r24
	  bl        -0x33778
	  lbz       r0, 0x0(r3)
	  cmpw      r26, r0
	  blt+      .loc_0x4F0
	  mr        r3, r23
	  mr        r4, r24
	  bl        -0x33790
	  lbz       r0, 0x0(r3)
	  addi      r24, r24, 0x1
	  sub       r0, r0, r25
	  stb       r0, 0x0(r3)

	.loc_0x5B8:
	  lhz       r0, 0x0(r23)
	  cmpw      r24, r0
	  blt+      .loc_0x4E4

	.loc_0x5C4:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  lmw       r23, 0x3C(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80218BDC
 * Size:	000490
 */
void SingleGame::CaveState::onMovieStart(Game::SingleGameSection*,
                                         Game::MovieConfig*, unsigned long,
                                         unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x64(r1)
	  stmw      r27, 0x4C(r1)
	  mr        r29, r5
	  addi      r31, r3, 0x2430
	  mr        r28, r4
	  mr        r30, r7
	  mr        r3, r29
	  addi      r4, r31, 0x1C
	  bl        0x218CC4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x40
	  mr        r3, r28
	  bl        -0xC76E4

	.loc_0x40:
	  lwz       r3, -0x6560(r13)
	  bl        0x1E4B54
	  mr        r3, r29
	  addi      r4, r31, 0x88
	  bl        0x218CA0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x68
	  lwz       r3, -0x6560(r13)
	  li        r4, 0x4
	  bl        0x1E4D0C

	.loc_0x68:
	  mr        r3, r29
	  addi      r4, r31, 0xA4
	  bl        0x218C80
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x294
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x44(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  bne-      .loc_0xD4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x274

	.loc_0xD4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x140

	.loc_0xEC:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x274
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x140:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xEC
	  b         .loc_0x274

	.loc_0x160:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B8
	  mr        r3, r27
	  bl        -0x797FC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B8
	  lbz       r0, 0x2B8(r27)
	  cmpwi     r0, 0x5
	  bne-      .loc_0x1B8
	  mr        r3, r27
	  li        r4, 0
	  bl        -0xDD340

	.loc_0x1B8:
	  lwz       r0, 0x44(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E4
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x274

	.loc_0x1E4:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x258

	.loc_0x204:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x274
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x258:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x204

	.loc_0x274:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x3C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x160

	.loc_0x294:
	  mr        r3, r29
	  addi      r4, r31, 0x10C
	  bl        0x218A54
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2F8
	  cmplwi    r30, 0
	  bne-      .loc_0x2C4
	  mr        r3, r28
	  li        r27, 0x1
	  li        r4, 0
	  bl        -0xCB580
	  b         .loc_0x2EC

	.loc_0x2C4:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x2
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x2DC
	  li        r4, 0x3

	.loc_0x2DC:
	  mr        r27, r4
	  mr        r3, r28
	  li        r4, 0x1
	  bl        -0xCB5AC

	.loc_0x2EC:
	  lwz       r3, -0x6560(r13)
	  mr        r4, r27
	  bl        0x1E4A7C

	.loc_0x2F8:
	  mr        r3, r29
	  addi      r4, r31, 0x12C
	  bl        0x2189F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x41C
	  lwz       r4, -0x6C18(r13)
	  mr        r3, r28
	  lbz       r0, 0x3C(r4)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r4)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, -0x6B70(r13)
	  addi      r4, r4, 0x1
	  bl        -0x31A4C
	  lwz       r3, -0x6D20(r13)
	  bl        -0xBE300
	  cmplwi    r3, 0
	  beq-      .loc_0x358
	  lhz       r0, 0x2DC(r3)
	  b         .loc_0x35C

	.loc_0x358:
	  li        r0, 0

	.loc_0x35C:
	  lwz       r4, -0x6B70(r13)
	  cmplwi    r3, 0
	  stb       r0, 0x78(r4)
	  bne-      .loc_0x378
	  li        r0, 0x19
	  mtctr     r0

	.loc_0x374:
	  bdnz-     .loc_0x374

	.loc_0x378:
	  li        r27, 0

	.loc_0x37C:
	  lwz       r3, -0x6D20(r13)
	  mr        r4, r27
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C8
	  mr        r3, r30
	  bl        -0x79A1C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C8
	  mr        r3, r30
	  bl        -0x79B7C

	.loc_0x3C8:
	  addi      r27, r27, 0x1
	  cmpwi     r27, 0x2
	  blt+      .loc_0x37C
	  lwz       r4, 0x188(r28)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r3, r28
	  lfs       f1, 0x18(r1)
	  addi      r4, r1, 0x2C
	  lfs       f0, 0x1C(r1)
	  li        r5, 0x1
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        -0xCAEBC
	  mr        r3, r28
	  bl        -0xC4A88

	.loc_0x41C:
	  mr        r3, r29
	  addi      r4, r31, 0x11C
	  bl        0x2188CC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x47C
	  lwz       r4, -0x6C18(r13)
	  addi      r3, r1, 0x8
	  lbz       r0, 0x3C(r4)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r4)
	  lwz       r4, 0x18C(r28)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r28
	  lfs       f1, 0xC(r1)
	  addi      r4, r1, 0x20
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0xCA898

	.loc_0x47C:
	  lmw       r27, 0x4C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8021906C
 * Size:	000EB4
 */
void SingleGame::CaveState::onMovieDone(Game::SingleGameSection*,
                                        Game::MovieConfig*, unsigned long,
                                        unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x330(r1)
	  mflr      r0
	  stw       r0, 0x334(r1)
	  stfd      f31, 0x320(r1)
	  psq_st    f31,0x328(r1),0,0
	  stmw      r24, 0x300(r1)
	  lis       r6, 0x8048
	  mr        r25, r5
	  addi      r31, r6, 0x2430
	  mr        r29, r3
	  mr        r30, r4
	  mr        r24, r7
	  mr        r3, r25
	  addi      r4, r31, 0x11C
	  bl        0x218828
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  bl        0x24E388
	  lwz       r3, -0x64AC(r13)
	  bl        0x213ED0
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        -0xB8650
	  li        r0, 0x1
	  mr        r3, r29
	  sth       r0, 0x14(r1)
	  mr        r4, r30
	  addi      r6, r1, 0x14
	  li        r5, 0x8
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE98

	.loc_0x8C:
	  mr        r3, r25
	  addi      r4, r31, 0x12C
	  bl        0x2187CC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF0
	  lwz       r3, -0x64AC(r13)
	  bl        0x213E78
	  lis       r3, 0x804B
	  li        r4, 0
	  addi      r0, r3, 0x1148
	  lis       r3, 0x804C
	  stw       r0, 0x68(r1)
	  addi      r3, r3, 0x4E4
	  li        r0, 0x1
	  stb       r4, 0x70(r1)
	  stw       r4, 0x6C(r1)
	  stw       r3, 0x68(r1)
	  stb       r0, 0x70(r1)
	  bl        0x24E2F8
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x68
	  bl        0x1E5558
	  li        r0, 0x1
	  stb       r0, 0x18(r29)
	  b         .loc_0xE98

	.loc_0xF0:
	  mr        r3, r25
	  addi      r4, r31, 0x138
	  bl        0x218768
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x350
	  lis       r3, 0x804B
	  li        r8, 0
	  addi      r9, r3, 0x1148
	  li        r4, 0x1
	  lfs       f1, -0x4360(r2)
	  lis       r7, 0x804B
	  li        r0, 0xA
	  li        r3, 0x2
	  stb       r8, 0x128(r1)
	  li        r6, 0x4D2
	  lfs       f2, -0x4358(r2)
	  li        r5, 0x32
	  lfs       f0, -0x4330(r2)
	  addi      r7, r7, 0x1094
	  stw       r9, 0x10C(r1)
	  lwz       r9, -0x6CF8(r13)
	  stw       r8, 0x110(r1)
	  stw       r7, 0x10C(r1)
	  stfs      f2, 0x114(r1)
	  stw       r8, 0x118(r1)
	  stw       r8, 0x120(r1)
	  stw       r6, 0x11C(r1)
	  stw       r5, 0x124(r1)
	  stw       r8, 0x12C(r1)
	  stfs      f1, 0x130(r1)
	  stw       r4, 0x134(r1)
	  stw       r3, 0x138(r1)
	  stw       r0, 0x13C(r1)
	  stw       r0, 0x140(r1)
	  stb       r4, 0x144(r1)
	  stfs      f1, 0x148(r1)
	  stw       r4, 0x14C(r1)
	  stw       r3, 0x150(r1)
	  stw       r0, 0x154(r1)
	  stw       r0, 0x158(r1)
	  stb       r4, 0x15C(r1)
	  stb       r4, 0x128(r1)
	  stb       r8, 0x169(r1)
	  stb       r8, 0x16A(r1)
	  stfs      f0, 0x160(r1)
	  stb       r8, 0x168(r1)
	  stw       r4, 0x164(r1)
	  stb       r8, 0x16B(r1)
	  stb       r8, 0x16E(r1)
	  stb       r8, 0x16F(r1)
	  stb       r8, 0x16C(r1)
	  stb       r8, 0x16D(r1)
	  lwz       r25, 0x30(r9)
	  lwz       r3, 0x28(r9)
	  bl        -0x41D44
	  subi      r0, r3, 0x1
	  sub       r0, r0, r25
	  cntlzw    r3, r0
	  rlwinm.   r0,r3,27,24,31
	  rlwinm    r3,r3,27,5,31
	  stb       r3, 0x16A(r1)
	  beq-      .loc_0x1FC
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x10C
	  li        r5, 0x2
	  bl        0x1E2FC4
	  b         .loc_0xE98

	.loc_0x1FC:
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x10C
	  li        r5, 0
	  bl        0x1E2FB0
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x23C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x38
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EEC64

	.loc_0x23C:
	  lwz       r26, -0x6780(r13)
	  lwz       r0, 0x4(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x260
	  addi      r3, r31, 0x44
	  addi      r5, r31, 0x38
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EEC88

	.loc_0x260:
	  lwz       r3, 0x4(r26)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6A50(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xE98
	  bl        0x5340
	  cmpwi     r3, 0
	  bne-      .loc_0xE98
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x2B0
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x38
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EECD8

	.loc_0x2B0:
	  lwz       r26, -0x6780(r13)
	  cmplwi    r26, 0
	  bne-      .loc_0x2D0
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x38
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x1EECF8

	.loc_0x2D0:
	  lwz       r0, 0x4(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x2F0
	  addi      r3, r31, 0x44
	  addi      r5, r31, 0x38
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x1EED18

	.loc_0x2F0:
	  lwz       r3, 0x4(r26)
	  lwz       r26, 0x4(r3)
	  cmplwi    r26, 0
	  bne-      .loc_0x314
	  addi      r3, r31, 0x44
	  addi      r5, r31, 0x50
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x1EED3C

	.loc_0x314:
	  lwz       r12, 0x0(r26)
	  mr        r3, r26
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x344
	  addi      r3, r31, 0x74
	  addi      r5, r31, 0x38
	  li        r4, 0x177
	  crclr     6, 0x6
	  bl        -0x1EED6C

	.loc_0x344:
	  mr        r3, r26
	  bl        0x250D40
	  b         .loc_0xE98

	.loc_0x350:
	  mr        r3, r25
	  addi      r4, r31, 0x1C
	  bl        0x218508
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8CC
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x64(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x58(r1)
	  stw       r0, 0x5C(r1)
	  stw       r3, 0x60(r1)
	  bne-      .loc_0x3A4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x5C(r1)
	  b         .loc_0x42C

	.loc_0x3A4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x5C(r1)
	  b         .loc_0x410

	.loc_0x3BC:
	  lwz       r3, 0x60(r1)
	  lwz       r4, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x42C
	  lwz       r3, 0x60(r1)
	  lwz       r4, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x5C(r1)

	.loc_0x410:
	  lwz       r12, 0x58(r1)
	  addi      r3, r1, 0x58
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x3BC

	.loc_0x42C:
	  lfs       f31, -0x4358(r2)
	  b         .loc_0x57C

	.loc_0x434:
	  lwz       r3, 0x60(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r26, r3
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r26)
	  mr        r4, r26
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  addi      r4, r1, 0x4C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  stfs      f2, 0x4C(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x50(r1)
	  mr        r3, r26
	  addi      r4, r1, 0x4C
	  li        r5, 0
	  bl        -0xDE368
	  stfs      f31, 0x200(r26)
	  stfs      f31, 0x204(r26)
	  stfs      f31, 0x208(r26)
	  stfs      f31, 0x1E4(r26)
	  stfs      f31, 0x1E8(r26)
	  stfs      f31, 0x1EC(r26)
	  lwz       r0, 0x64(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x4EC
	  lwz       r3, 0x60(r1)
	  lwz       r4, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x5C(r1)
	  b         .loc_0x57C

	.loc_0x4EC:
	  lwz       r3, 0x60(r1)
	  lwz       r4, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x5C(r1)
	  b         .loc_0x560

	.loc_0x50C:
	  lwz       r3, 0x60(r1)
	  lwz       r4, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x57C
	  lwz       r3, 0x60(r1)
	  lwz       r4, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x5C(r1)

	.loc_0x560:
	  lwz       r12, 0x58(r1)
	  addi      r3, r1, 0x58
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x50C

	.loc_0x57C:
	  lwz       r3, 0x60(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x5C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x434
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x5
	  bl        -0x32230
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x678
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x5
	  bl        -0x32280
	  lwz       r4, 0xC8(r30)
	  li        r0, 0
	  lfs       f0, -0x4358(r2)
	  addi      r3, r31, 0x138
	  stw       r3, 0x74(r1)
	  addi      r25, r1, 0x8C
	  lwz       r3, -0x6560(r13)
	  stw       r0, 0x78(r1)
	  stw       r4, 0x80(r1)
	  stfs      f0, 0x8C(r1)
	  stfs      f0, 0x90(r1)
	  stfs      f0, 0x94(r1)
	  stfs      f0, 0x98(r1)
	  stw       r0, 0x9C(r1)
	  stw       r0, 0x84(r1)
	  stw       r0, 0x7C(r1)
	  stw       r0, 0xA0(r1)
	  stw       r0, 0x88(r1)
	  stw       r0, 0xA4(r1)
	  bl        0x1E3FEC
	  lwz       r3, -0x6CD0(r13)
	  lwz       r3, 0xAC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x630
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x98(r1)

	.loc_0x630:
	  lwz       r3, -0x6CF8(r13)
	  mr        r4, r25
	  li        r5, 0
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CF8(r13)
	  mr        r4, r25
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x90(r1)
	  addi      r4, r1, 0x74
	  lwz       r3, -0x64AC(r13)
	  bl        0x2132F4
	  b         .loc_0xE98

	.loc_0x678:
	  lwz       r3, -0x6560(r13)
	  bl        0x1E3F78
	  lis       r3, 0x804B
	  li        r8, 0
	  addi      r9, r3, 0x1148
	  li        r4, 0x1
	  lfs       f1, -0x4360(r2)
	  lis       r7, 0x804B
	  li        r0, 0xA
	  li        r3, 0x2
	  stb       r8, 0xC4(r1)
	  li        r6, 0x4D2
	  lfs       f2, -0x4358(r2)
	  li        r5, 0x32
	  lfs       f0, -0x4330(r2)
	  addi      r7, r7, 0x1094
	  stw       r9, 0xA8(r1)
	  lwz       r9, -0x6CF8(r13)
	  stw       r8, 0xAC(r1)
	  stw       r7, 0xA8(r1)
	  stfs      f2, 0xB0(r1)
	  stw       r8, 0xB4(r1)
	  stw       r8, 0xBC(r1)
	  stw       r6, 0xB8(r1)
	  stw       r5, 0xC0(r1)
	  stw       r8, 0xC8(r1)
	  stfs      f1, 0xCC(r1)
	  stw       r4, 0xD0(r1)
	  stw       r3, 0xD4(r1)
	  stw       r0, 0xD8(r1)
	  stw       r0, 0xDC(r1)
	  stb       r4, 0xE0(r1)
	  stfs      f1, 0xE4(r1)
	  stw       r4, 0xE8(r1)
	  stw       r3, 0xEC(r1)
	  stw       r0, 0xF0(r1)
	  stw       r0, 0xF4(r1)
	  stb       r4, 0xF8(r1)
	  stb       r4, 0xC4(r1)
	  stb       r8, 0x105(r1)
	  stb       r8, 0x106(r1)
	  stfs      f0, 0xFC(r1)
	  stb       r8, 0x104(r1)
	  stw       r4, 0x100(r1)
	  stb       r8, 0x107(r1)
	  stb       r8, 0x10A(r1)
	  stb       r8, 0x10B(r1)
	  stb       r8, 0x108(r1)
	  stb       r8, 0x109(r1)
	  lwz       r25, 0x30(r9)
	  lwz       r3, 0x28(r9)
	  bl        -0x422C0
	  subi      r0, r3, 0x1
	  sub       r0, r0, r25
	  cntlzw    r3, r0
	  rlwinm.   r0,r3,27,24,31
	  rlwinm    r3,r3,27,5,31
	  stb       r3, 0x106(r1)
	  beq-      .loc_0x778
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0xA8
	  li        r5, 0x2
	  bl        0x1E2A48
	  b         .loc_0xE98

	.loc_0x778:
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0xA8
	  li        r5, 0
	  bl        0x1E2A34
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x7B8
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x38
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EF1E0

	.loc_0x7B8:
	  lwz       r26, -0x6780(r13)
	  lwz       r0, 0x4(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x7DC
	  addi      r3, r31, 0x44
	  addi      r5, r31, 0x38
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EF204

	.loc_0x7DC:
	  lwz       r3, 0x4(r26)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6A50(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xE98
	  bl        0x4DC4
	  cmpwi     r3, 0
	  bne-      .loc_0xE98
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x82C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x38
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EF254

	.loc_0x82C:
	  lwz       r26, -0x6780(r13)
	  cmplwi    r26, 0
	  bne-      .loc_0x84C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x38
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x1EF274

	.loc_0x84C:
	  lwz       r0, 0x4(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x86C
	  addi      r3, r31, 0x44
	  addi      r5, r31, 0x38
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x1EF294

	.loc_0x86C:
	  lwz       r3, 0x4(r26)
	  lwz       r26, 0x4(r3)
	  cmplwi    r26, 0
	  bne-      .loc_0x890
	  addi      r3, r31, 0x44
	  addi      r5, r31, 0x50
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x1EF2B8

	.loc_0x890:
	  lwz       r12, 0x0(r26)
	  mr        r3, r26
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x8C0
	  addi      r3, r31, 0x74
	  addi      r5, r31, 0x38
	  li        r4, 0x177
	  crclr     6, 0x6
	  bl        -0x1EF2E8

	.loc_0x8C0:
	  mr        r3, r26
	  bl        0x2507C4
	  b         .loc_0xE98

	.loc_0x8CC:
	  mr        r3, r25
	  addi      r4, r31, 0x10C
	  bl        0x217F8C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBEC
	  lwz       r3, -0x6560(r13)
	  bl        0x1E4254
	  lwz       r3, -0x6D20(r13)
	  mr        r4, r24
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  bl        -0xD6C48
	  lwz       r3, -0x6D20(r13)
	  lwz       r0, 0x50(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x944
	  cmpwi     r24, 0
	  bne-      .loc_0x930
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  lwz       r3, 0x58(r3)
	  bl        -0xCC07C
	  b         .loc_0xE98

	.loc_0x930:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  lwz       r3, 0x58(r3)
	  bl        -0xCC090
	  b         .loc_0xE98

	.loc_0x944:
	  li        r28, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r28, 0x48(r1)
	  subi      r0, r4, 0x4364
	  cmplwi    r28, 0
	  stw       r0, 0x3C(r1)
	  li        r31, 0
	  stw       r28, 0x40(r1)
	  stw       r3, 0x44(r1)
	  bne-      .loc_0x988
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0xB1C

	.loc_0x988:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0x9F4

	.loc_0x9A0:
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB1C
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)

	.loc_0x9F4:
	  lwz       r12, 0x3C(r1)
	  addi      r3, r1, 0x3C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x9A0
	  b         .loc_0xB1C

	.loc_0xA14:
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r26, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA60
	  lbz       r0, 0x2B8(r26)
	  cmpwi     r0, 0x5
	  bge-      .loc_0xA60
	  addi      r3, r1, 0x170
	  addi      r31, r31, 0x1
	  stwx      r26, r3, r28
	  addi      r28, r28, 0x4

	.loc_0xA60:
	  lwz       r0, 0x48(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xA8C
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0xB1C

	.loc_0xA8C:
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0xB00

	.loc_0xAAC:
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB1C
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)

	.loc_0xB00:
	  lwz       r12, 0x3C(r1)
	  addi      r3, r1, 0x3C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xAAC

	.loc_0xB1C:
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x40(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xA14
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r25, r1, 0x170
	  li        r24, 0
	  subi      r26, r4, 0x5D30
	  addi      r28, r3, 0x1160
	  li        r27, 0x1
	  b         .loc_0xBA8

	.loc_0xB5C:
	  lwz       r3, 0x0(r25)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB88
	  li        r3, 0
	  bl        0x16B30
	  li        r3, 0x7
	  bl        0x16B28

	.loc_0xB88:
	  stw       r26, 0x18(r1)
	  addi      r4, r1, 0x18
	  lwz       r3, 0x0(r25)
	  stw       r27, 0x1C(r1)
	  stw       r28, 0x18(r1)
	  bl        -0xDEB18
	  addi      r25, r25, 0x4
	  addi      r24, r24, 0x1

	.loc_0xBA8:
	  cmpw      r24, r31
	  blt+      .loc_0xB5C
	  lwz       r8, -0x6C18(r13)
	  li        r0, 0x2
	  mr        r3, r29
	  mr        r4, r30
	  lbz       r7, 0x3C(r8)
	  addi      r6, r1, 0x10
	  li        r5, 0x8
	  rlwinm    r7,r7,0,27,25
	  stb       r7, 0x3C(r8)
	  sth       r0, 0x10(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE98

	.loc_0xBEC:
	  mr        r3, r25
	  addi      r4, r31, 0x88
	  bl        0x217C6C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC44
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6560(r13)
	  bl        0x1E3F24
	  li        r0, 0x3
	  mr        r3, r29
	  sth       r0, 0xC(r1)
	  mr        r4, r30
	  addi      r6, r1, 0xC
	  li        r5, 0x8
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE98

	.loc_0xC44:
	  mr        r3, r25
	  addi      r4, r31, 0xA4
	  bl        0x217C14
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE98
	  lwz       r3, -0x64AC(r13)
	  bl        0x2132C0
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6B90(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xC80
	  addi      r3, r3, 0x30

	.loc_0xC80:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x5A4
	  stw       r0, 0x38(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  stw       r3, 0x34(r1)
	  bne-      .loc_0xCBC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0xE40

	.loc_0xCBC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0xD28

	.loc_0xCD4:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE40
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)

	.loc_0xD28:
	  lwz       r12, 0x2C(r1)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xCD4
	  b         .loc_0xE40

	.loc_0xD48:
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD84
	  li        r3, 0
	  bl        0x16934
	  li        r3, 0x7
	  bl        0x1692C

	.loc_0xD84:
	  lwz       r0, 0x38(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xDB0
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0xE40

	.loc_0xDB0:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0xE24

	.loc_0xDD0:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE40
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)

	.loc_0xE24:
	  lwz       r12, 0x2C(r1)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xDD0

	.loc_0xE40:
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x30(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD48
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        -0xB9460
	  li        r0, 0x4
	  mr        r3, r29
	  sth       r0, 0x8(r1)
	  mr        r4, r30
	  addi      r6, r1, 0x8
	  li        r5, 0x8
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE98:
	  psq_l     f31,0x328(r1),0,0
	  lfd       f31, 0x320(r1)
	  lmw       r24, 0x300(r1)
	  lwz       r0, 0x334(r1)
	  mtlr      r0
	  addi      r1, r1, 0x330
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80219F20
 * Size:	000028
 */
void __sinit_singleGS_CaveGame_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6A90(r13)
	  stfsu     f0, 0x5F0(r3)
	  stfs      f0, -0x6A8C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
