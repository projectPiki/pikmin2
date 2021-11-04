#include "types.h"

/*
 * --INFO--
 * Address:	8019CD70
 * Size:	0000F8
 */
PikiAI::ActFormation::ActFormation(Game::Piki*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x44
	  addi      r0, r31, 0x64
	  lis       r4, 0x804B
	  stw       r0, 0xC(r31)
	  addi      r0, r31, 0x6C
	  lis       r3, 0x804B
	  addi      r4, r4, 0x4D5C
	  stw       r0, 0x10(r31)
	  subi      r0, r3, 0x5994
	  stw       r4, 0x64(r31)
	  stw       r0, 0x6C(r31)

	.loc_0x44:
	  mr        r3, r31
	  mr        r4, r5
	  bl        -0x63A4
	  lis       r3, 0x804B
	  lis       r6, 0x804B
	  addi      r8, r3, 0x4CFC
	  lis       r5, 0x804B
	  stw       r8, 0x0(r31)
	  lis       r4, 0x804B
	  lis       r3, 0x8048
	  addi      r0, r8, 0x48
	  lwz       r7, 0xC(r31)
	  addi      r12, r8, 0x54
	  addi      r10, r31, 0x64
	  addi      r9, r31, 0x6C
	  stw       r0, 0x0(r7)
	  addi      r8, r6, 0x530
	  addi      r7, r5, 0x524
	  li        r6, 0
	  lwz       r11, 0x10(r31)
	  addi      r5, r4, 0xD44
	  subi      r4, r3, 0xE7C
	  li        r0, -0x1
	  stw       r12, 0x0(r11)
	  mr        r3, r31
	  lwz       r11, 0xC(r31)
	  sub       r10, r10, r11
	  stw       r10, 0x4(r11)
	  lwz       r10, 0x10(r31)
	  sub       r9, r9, r10
	  stw       r9, 0x4(r10)
	  stw       r8, 0x18(r31)
	  stw       r7, 0x18(r31)
	  stw       r6, 0x1C(r31)
	  stw       r5, 0x18(r31)
	  stb       r6, 0x20(r31)
	  stw       r4, 0x8(r31)
	  stw       r6, 0x5C(r31)
	  stw       r0, 0x34(r31)
	  stw       r6, 0x14(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019CE68
 * Size:	000008
 */
void PikiAI::ActFormation::inform(int a1)
{
	// Generated from stw r4, 0x34(r3)
	_34 = a1;
}

/*
 * --INFO--
 * Address:	8019CE70
 * Size:	00000C
 */
void PikiAI::ActFormation::startSort(void)
{
	// Generated from sth r0, 0x28(r3)
	_28 = 2;
}

/*
 * --INFO--
 * Address:	8019CE7C
 * Size:	0001B4
 */
void PikiAI::ActFormation::init(PikiAI::ActionArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr.       r29, r4
	  lis       r4, 0x8048
	  subi      r30, r4, 0xE98
	  bne-      .loc_0x40
	  addi      r3, r30, 0x28
	  addi      r5, r30, 0x38
	  li        r4, 0x10B
	  crclr     6, 0x6
	  bl        -0x172878

	.loc_0x40:
	  li        r0, 0x1
	  lis       r3, 0x8051
	  stw       r0, 0x24(r31)
	  addi      r3, r3, 0x22EC
	  lwz       r4, 0x4(r31)
	  lwz       r0, 0x2C4(r4)
	  stw       r0, 0x14(r31)
	  lwz       r4, 0x4(r31)
	  bl        0x3448C
	  lwz       r0, 0x4(r29)
	  stw       r0, 0x1C(r31)
	  lbz       r0, 0x8(r29)
	  stb       r0, 0x20(r31)
	  lbz       r0, 0x9(r29)
	  stb       r0, 0x21(r31)
	  lbz       r0, 0x21(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  li        r0, 0x2D
	  stb       r0, 0x38(r31)
	  b         .loc_0x9C

	.loc_0x94:
	  li        r0, 0
	  stb       r0, 0x38(r31)

	.loc_0x9C:
	  lwz       r4, 0x4(r29)
	  lbz       r29, 0x8(r29)
	  cmplwi    r4, 0
	  bne-      .loc_0xB8
	  li        r0, -0x1
	  stw       r0, 0x34(r31)
	  b         .loc_0x198

	.loc_0xB8:
	  li        r3, 0x5
	  li        r0, 0
	  sth       r3, 0x2A(r31)
	  cmplwi    r31, 0
	  mr        r5, r31
	  sth       r3, 0x2C(r31)
	  sth       r0, 0x2E(r31)
	  stb       r0, 0x60(r31)
	  stb       r0, 0x61(r31)
	  lwz       r0, 0x254(r4)
	  stw       r0, 0x5C(r31)
	  beq-      .loc_0xEC
	  lwz       r5, 0xC(r31)

	.loc_0xEC:
	  lwz       r3, 0x5C(r31)
	  mr        r6, r29
	  lwz       r4, 0x4(r31)
	  bl        -0x786C
	  stw       r3, 0x34(r31)
	  lwz       r0, 0x34(r31)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x128
	  cmplwi    r29, 0
	  beq-      .loc_0x128
	  addi      r3, r30, 0x28
	  addi      r5, r30, 0x44
	  li        r4, 0x14A
	  crclr     6, 0x6
	  bl        -0x172960

	.loc_0x128:
	  lwz       r3, 0x4(r31)
	  li        r4, 0x1D
	  li        r5, 0x1D
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lfs       f0, -0x5378(r2)
	  stb       r0, 0x30(r31)
	  li        r4, 0
	  stb       r0, 0x31(r31)
	  sth       r0, 0x28(r31)
	  stw       r0, 0x4C(r31)
	  stfs      f0, 0x50(r31)
	  stb       r0, 0x54(r31)
	  stw       r0, 0x3C(r31)
	  lwz       r3, 0x4(r31)
	  bl        -0x52FBC
	  li        r3, 0
	  li        r0, -0x1
	  stb       r3, 0x40(r31)
	  li        r4, 0
	  stw       r0, 0x48(r31)
	  lwz       r3, 0x4(r31)
	  bl        -0x5334C

	.loc_0x198:
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
 * Address:	8019D030
 * Size:	000058
 */
void wallCallback__Q26PikiAI12ActFormationFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x50(r4)
	  stw       r0, 0x44(r3)
	  lbz       r4, 0x40(r3)
	  cmplwi    r4, 0x1E
	  bge-      .loc_0x20
	  addi      r0, r4, 0x1
	  stb       r0, 0x40(r3)

	.loc_0x20:
	  lbz       r0, 0x40(r3)
	  cmplwi    r0, 0x8
	  ble-      .loc_0x40
	  lhz       r0, 0x28(r3)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x40
	  li        r0, 0
	  stb       r0, 0x40(r3)

	.loc_0x40:
	  lbz       r0, 0x40(r3)
	  cmplwi    r0, 0x14
	  blelr-
	  li        r0, 0
	  stb       r0, 0x40(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019D088
 * Size:	00045C
 */
void PikiAI::ActFormation::setFormed(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  li        r4, 0x23
	  stw       r0, 0x74(r1)
	  li        r0, 0x1
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  mr        r30, r3
	  stw       r29, 0x64(r1)
	  sth       r0, 0x28(r3)
	  lis       r3, 0x8048
	  subi      r31, r3, 0xE98
	  lwz       r3, -0x6B70(r13)
	  bl        0x4A324
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2EC
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x20(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x14(r1)
	  stw       r0, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  bne-      .loc_0x80
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x1E4

	.loc_0x80:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0xEC

	.loc_0x98:
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
	  bne-      .loc_0x1E4
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)

	.loc_0xEC:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x98
	  b         .loc_0x1E4

	.loc_0x10C:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  bl        -0x6175C
	  lwz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x154
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x1E4

	.loc_0x154:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x1C8

	.loc_0x174:
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
	  bne-      .loc_0x1E4
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)

	.loc_0x1C8:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x174

	.loc_0x1E4:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x10C
	  lwz       r3, -0x6D20(r13)
	  bl        -0x42670
	  mr.       r29, r3
	  bne-      .loc_0x228
	  addi      r3, r31, 0x28
	  addi      r5, r31, 0x38
	  li        r4, 0x1B6
	  crclr     6, 0x6
	  bl        -0x172C6C

	.loc_0x228:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x23
	  bl        0x4A0EC
	  lfs       f0, -0x5378(r2)
	  li        r0, 0
	  addi      r5, r31, 0x54
	  stw       r0, 0x28(r1)
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  stw       r5, 0x24(r1)
	  stw       r0, 0x30(r1)
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
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r29
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x48(r1)
	  addi      r4, r1, 0x24
	  lwz       r3, -0x64AC(r13)
	  stw       r29, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x28F67C
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x4
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2EC:
	  lwz       r3, 0x4(r30)
	  li        r29, 0
	  lwz       r3, 0x2C4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x304
	  lhz       r29, 0x2DC(r3)

	.loc_0x304:
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x440
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x440
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x2E
	  bl        0x4A030
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x440
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0xD
	  bl        0x4A01C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x440
	  cmpwi     r29, 0
	  li        r0, 0
	  blt-      .loc_0x360
	  cmpwi     r29, 0x7
	  bge-      .loc_0x360
	  li        r0, 0x1

	.loc_0x360:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x37C
	  addi      r3, r31, 0x6C
	  addi      r5, r31, 0x38
	  li        r4, 0x77
	  crclr     6, 0x6
	  bl        -0x172DC0

	.loc_0x37C:
	  lis       r3, 0x8051
	  rlwinm    r5,r29,5,0,26
	  addi      r0, r3, 0x22EC
	  li        r4, 0x1
	  add       r30, r0, r5
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  ble-      .loc_0x440
	  cmpwi     r29, 0
	  li        r0, 0
	  blt-      .loc_0x3C4
	  cmpwi     r29, 0x7
	  bge-      .loc_0x3C4
	  li        r0, 0x1

	.loc_0x3C4:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x3E0
	  addi      r3, r31, 0x6C
	  addi      r5, r31, 0x38
	  li        r4, 0x77
	  crclr     6, 0x6
	  bl        -0x172E24

	.loc_0x3E0:
	  mr        r3, r30
	  li        r4, 0x3
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  ble-      .loc_0x440
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0x5
	  beq-      .loc_0x440
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x5
	  lfs       f1, -0x5374(r2)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x440:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019D4E4
 * Size:	0000F8
 */
void PikiAI::ActFormation::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x34
	  bge-      .loc_0x28
	  cmpwi     r0, 0x1
	  bge-      .loc_0x68
	  b         .loc_0xE8

	.loc_0x28:
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0xB0
	  b         .loc_0xE8

	.loc_0x34:
	  lbz       r0, 0x54(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  lwz       r4, 0x4(r3)
	  lfs       f0, -0x5378(r2)
	  stfs      f0, 0x200(r4)
	  stfs      f0, 0x204(r4)
	  stfs      f0, 0x208(r4)
	  lwz       r3, 0x4(r3)
	  stfs      f0, 0x1E4(r3)
	  stfs      f0, 0x1E8(r3)
	  stfs      f0, 0x1EC(r3)
	  b         .loc_0xE8

	.loc_0x68:
	  lbz       r0, 0x54(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  lwz       r4, 0x4C(r3)
	  subi      r0, r4, 0x1
	  stw       r0, 0x4C(r3)
	  lwz       r0, 0x4C(r3)
	  cmpwi     r0, 0
	  bgt-      .loc_0xE8
	  lwz       r4, 0x4(r3)
	  lbz       r0, 0x1C4(r4)
	  ori       r0, r0, 0x2
	  stb       r0, 0x1C4(r4)
	  lwz       r3, 0x4(r3)
	  lbz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x1E0(r3)
	  b         .loc_0xE8

	.loc_0xB0:
	  lbz       r0, 0x54(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  li        r0, 0
	  li        r4, 0x1E
	  stb       r0, 0x54(r3)
	  li        r5, 0x1E
	  li        r6, 0
	  li        r7, 0
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE8:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019D5DC
 * Size:	0000A4
 */
void PikiAI::ActFormation::cleanup(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x4(r3)
	  bl        -0x54130
	  lwz       r3, 0x4(r30)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r30)
	  lis       r3, 0x8051
	  lwz       r0, 0x14(r30)
	  addi      r3, r3, 0x22EC
	  lwz       r31, 0x2C4(r4)
	  stw       r0, 0x2C4(r4)
	  lwz       r4, 0x4(r30)
	  bl        0x33DE0
	  lwz       r3, 0x4(r30)
	  stw       r31, 0x2C4(r3)
	  lwz       r5, 0x34(r30)
	  cmpwi     r5, -0x1
	  beq-      .loc_0x7C
	  lwz       r3, 0x5C(r30)
	  lwz       r4, 0x4(r30)
	  bl        -0x7DEC

	.loc_0x7C:
	  li        r3, 0
	  li        r0, -0x1
	  stw       r3, 0x5C(r30)
	  stw       r0, 0x34(r30)
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
 * Address:	8019D680
 * Size:	0016E8
 */
void PikiAI::ActFormation::exec(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1C0(r1)
	  mflr      r0
	  stw       r0, 0x1C4(r1)
	  stfd      f31, 0x1B0(r1)
	  psq_st    f31,0x1B8(r1),0,0
	  stfd      f30, 0x1A0(r1)
	  psq_st    f30,0x1A8(r1),0,0
	  stfd      f29, 0x190(r1)
	  psq_st    f29,0x198(r1),0,0
	  stfd      f28, 0x180(r1)
	  psq_st    f28,0x188(r1),0,0
	  stfd      f27, 0x170(r1)
	  psq_st    f27,0x178(r1),0,0
	  stfd      f26, 0x160(r1)
	  psq_st    f26,0x168(r1),0,0
	  stw       r31, 0x15C(r1)
	  stw       r30, 0x158(r1)
	  stw       r29, 0x154(r1)
	  mr        r31, r3
	  lbz       r3, 0x38(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  subi      r0, r3, 0x1
	  stb       r0, 0x38(r31)

	.loc_0x60:
	  lwz       r0, 0x34(r31)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x74
	  li        r3, 0x2
	  b         .loc_0x169C

	.loc_0x74:
	  lbz       r0, 0x20(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xA4
	  lwz       r3, 0x14(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  lwz       r3, 0x250(r3)
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  li        r3, 0x2
	  b         .loc_0x169C

	.loc_0xA4:
	  lwz       r3, 0x14(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  li        r3, 0x2
	  b         .loc_0x169C

	.loc_0xD0:
	  lbz       r0, 0x20(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x14C
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xF8
	  cmpwi     r0, 0x3
	  bne-      .loc_0xFC

	.loc_0xF8:
	  li        r3, 0x1

	.loc_0xFC:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x14C
	  lwz       r3, 0x14(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x14C
	  lwz       r0, 0x278(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x14C
	  bl        -0x5C358
	  cmpwi     r3, 0x1
	  bne-      .loc_0x14C
	  li        r0, 0
	  stw       r0, 0x24(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x2
	  b         .loc_0x169C

	.loc_0x14C:
	  lwz       r3, 0x4(r31)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  lhz       r3, 0x2A(r31)
	  li        r0, 0x5
	  sth       r3, 0x2C(r31)
	  sth       r0, 0x2A(r31)
	  lbz       r0, 0x54(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x204
	  lwz       r3, 0x4(r31)
	  lwz       r3, 0x1B8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x198
	  lha       r0, 0x20(r3)
	  b         .loc_0x19C

	.loc_0x198:
	  li        r0, -0x1

	.loc_0x19C:
	  cmpwi     r0, 0x1A
	  beq-      .loc_0x1D0
	  li        r0, 0
	  li        r4, 0x1E
	  stb       r0, 0x54(r31)
	  li        r5, 0x1E
	  li        r6, 0
	  li        r7, 0
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1D0:
	  lwz       r4, 0x4(r31)
	  li        r3, 0x1
	  lfs       f2, -0x5370(r2)
	  lfs       f0, 0x1E4(r4)
	  lfs       f1, 0x1E8(r4)
	  fmuls     f0, f0, f2
	  lfs       f3, 0x1EC(r4)
	  fmuls     f1, f1, f2
	  fmuls     f2, f3, f2
	  stfs      f0, 0x1E4(r4)
	  stfs      f1, 0x1E8(r4)
	  stfs      f2, 0x1EC(r4)
	  b         .loc_0x169C

	.loc_0x204:
	  lbz       r0, 0x60(r31)
	  stb       r0, 0x61(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r3, 0x2C4(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x224
	  li        r3, 0x2
	  b         .loc_0x169C

	.loc_0x224:
	  bl        -0x5719C
	  mr        r30, r3
	  lwz       r3, 0x5C(r31)
	  lwz       r4, 0x34(r31)
	  bl        -0x7F24
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x25C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0xE70
	  li        r4, 0x295
	  subi      r5, r5, 0xE20
	  crclr     6, 0x6
	  bl        -0x173298

	.loc_0x25C:
	  lwz       r3, 0x5C(r31)
	  addi      r5, r1, 0x138
	  lwz       r4, 0x34(r31)
	  bl        -0x78B4
	  lwz       r3, 0x4(r31)
	  lwz       r3, 0x2C4(r3)
	  bl        -0x56BE0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x490
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0xEC
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x138(r1)
	  lfs       f0, 0xEC(r1)
	  lfs       f1, 0x13C(r1)
	  fsubs     f3, f2, f0
	  lfs       f0, 0xF0(r1)
	  lfs       f4, 0x140(r1)
	  fsubs     f2, f1, f0
	  lfs       f1, 0xF4(r1)
	  fmuls     f0, f3, f3
	  fsubs     f4, f4, f1
	  lfs       f1, -0x5378(r2)
	  fmuls     f5, f2, f2
	  stfs      f3, 0x12C(r1)
	  fmuls     f6, f4, f4
	  fadds     f0, f0, f5
	  stfs      f2, 0x130(r1)
	  stfs      f4, 0x134(r1)
	  fadds     f0, f6, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x304
	  fmadds    f0, f3, f3, f5
	  fadds     f26, f6, f0
	  fcmpo     cr0, f26, f1
	  ble-      .loc_0x308
	  fsqrte    f0, f26
	  fmuls     f26, f0, f26
	  b         .loc_0x308

	.loc_0x304:
	  fmr       f26, f1

	.loc_0x308:
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0xE0
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xE0(r1)
	  lfs       f1, 0xE4(r1)
	  lfs       f0, 0xE8(r1)
	  stfs      f2, 0x120(r1)
	  lwz       r3, -0x6C18(r13)
	  stfs      f1, 0x124(r1)
	  stfs      f0, 0x128(r1)
	  lwz       r4, 0x44(r31)
	  lwz       r0, 0x50(r3)
	  sub       r0, r0, r4
	  srawi     r3, r0, 0x1F
	  xor       r0, r3, r0
	  sub       r0, r0, r3
	  cmpwi     r0, 0x32
	  bge-      .loc_0x47C
	  lfs       f0, -0x536C(r2)
	  fcmpo     cr0, f26, f0
	  ble-      .loc_0x47C
	  lbz       r0, 0x40(r31)
	  cmplwi    r0, 0x3
	  ble-      .loc_0x4A0
	  lwz       r3, 0x4(r31)
	  addi      r4, r1, 0x120
	  lwz       r5, 0x48(r31)
	  lwz       r3, 0x2C4(r3)
	  lwz       r3, 0x2D8(r3)
	  bl        0x16FB0
	  stw       r3, 0x3C(r31)
	  lwz       r3, 0x3C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x4A0
	  lfs       f3, 0x4(r3)
	  lfs       f2, 0x124(r1)
	  lfs       f1, 0x0(r3)
	  lfs       f0, 0x120(r1)
	  fsubs     f4, f3, f2
	  lfs       f3, 0x8(r3)
	  fsubs     f2, f1, f0
	  lfs       f0, 0x128(r1)
	  fmuls     f5, f4, f4
	  lfs       f1, -0x5378(r2)
	  fsubs     f3, f3, f0
	  stfs      f4, 0x130(r1)
	  fmuls     f0, f2, f2
	  stfs      f2, 0x12C(r1)
	  fmuls     f4, f3, f3
	  stfs      f3, 0x134(r1)
	  fadds     f0, f0, f5
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x408
	  fmadds    f0, f2, f2, f5
	  fadds     f4, f4, f0
	  fcmpo     cr0, f4, f1
	  ble-      .loc_0x40C
	  fsqrte    f0, f4
	  fmuls     f4, f0, f4
	  b         .loc_0x40C

	.loc_0x408:
	  fmr       f4, f1

	.loc_0x40C:
	  lfs       f0, -0x5378(r2)
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x448
	  lfs       f0, -0x5368(r2)
	  lfs       f2, 0x12C(r1)
	  fdivs     f3, f0, f4
	  lfs       f1, 0x130(r1)
	  lfs       f0, 0x134(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x12C(r1)
	  stfs      f1, 0x130(r1)
	  stfs      f0, 0x134(r1)
	  b         .loc_0x44C

	.loc_0x448:
	  fmr       f4, f0

	.loc_0x44C:
	  lfs       f0, -0x5364(r2)
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x464
	  lwz       r3, 0x3C(r31)
	  lwz       r0, 0xC(r3)
	  stw       r0, 0x48(r31)

	.loc_0x464:
	  lwz       r3, 0x4(r31)
	  addi      r4, r1, 0x12C
	  lfs       f1, -0x5368(r2)
	  bl        -0x54AD8
	  li        r3, 0x1
	  b         .loc_0x169C

	.loc_0x47C:
	  li        r3, 0
	  li        r0, -0x1
	  stb       r3, 0x40(r31)
	  stw       r0, 0x48(r31)
	  b         .loc_0x4A0

	.loc_0x490:
	  li        r3, 0
	  li        r0, -0x1
	  stb       r3, 0x40(r31)
	  stw       r0, 0x48(r31)

	.loc_0x4A0:
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0xD4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r31)
	  lfs       f0, 0xD8(r1)
	  lfs       f1, 0x23C(r3)
	  lfs       f3, 0x240(r3)
	  fsubs     f4, f1, f0
	  lfs       f2, 0xDC(r1)
	  lfs       f1, 0x238(r3)
	  lfs       f0, 0xD4(r1)
	  fsubs     f2, f3, f2
	  fmuls     f3, f4, f4
	  fsubs     f1, f1, f0
	  lfs       f0, -0x5378(r2)
	  fmuls     f2, f2, f2
	  fmadds    f1, f1, f1, f3
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x50C
	  ble-      .loc_0x510
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x510

	.loc_0x50C:
	  fmr       f1, f0

	.loc_0x510:
	  lfs       f0, 0x50(r31)
	  fadds     f0, f0, f1
	  stfs      f0, 0x50(r31)
	  lwz       r3, 0x4(r31)
	  lbz       r0, 0x2B8(r3)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x64C
	  lfs       f1, 0x50(r31)
	  lfs       f0, -0x5360(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x64C
	  lfs       f2, 0x200(r3)
	  lfs       f1, 0x204(r3)
	  fmuls     f0, f2, f2
	  lfs       f3, 0x208(r3)
	  fmuls     f4, f1, f1
	  lfs       f1, -0x5378(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x588
	  fmadds    f0, f2, f2, f4
	  fadds     f2, f3, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x58C
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x58C

	.loc_0x588:
	  fmr       f2, f1

	.loc_0x58C:
	  lfs       f0, -0x535C(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x64C
	  bl        -0xD4678
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14C(r1)
	  lfd       f3, -0x5328(r2)
	  stw       r0, 0x148(r1)
	  lfs       f1, -0x5358(r2)
	  lfd       f2, 0x148(r1)
	  lfs       f0, -0x5354(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x644
	  bl        -0xD46B0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14C(r1)
	  lfd       f3, -0x5328(r2)
	  stw       r0, 0x148(r1)
	  lfs       f1, -0x5358(r2)
	  lfd       f2, 0x148(r1)
	  lfs       f0, -0x5350(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x644
	  lwz       r3, 0x4(r31)
	  bl        -0x54D54
	  cmpwi     r3, 0
	  bne-      .loc_0x634
	  lwz       r4, 0x4(r31)
	  li        r5, 0x1E
	  li        r6, 0
	  lwz       r3, 0x28C(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x634:
	  lfs       f0, -0x5378(r2)
	  li        r3, 0x1
	  stfs      f0, 0x50(r31)
	  b         .loc_0x169C

	.loc_0x644:
	  lfs       f0, -0x5378(r2)
	  stfs      f0, 0x50(r31)

	.loc_0x64C:
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0xC8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x140(r1)
	  lfs       f0, 0xD0(r1)
	  lfs       f1, 0x138(r1)
	  fsubs     f4, f2, f0
	  lfs       f0, 0xC8(r1)
	  lfs       f3, 0x13C(r1)
	  fsubs     f2, f1, f0
	  lfs       f0, 0xCC(r1)
	  fmuls     f5, f4, f4
	  fsubs     f3, f3, f0
	  lfs       f0, -0x5378(r2)
	  fmuls     f6, f2, f2
	  stfs      f2, 0x114(r1)
	  fadds     f1, f6, f5
	  stfs      f3, 0x118(r1)
	  stfs      f4, 0x11C(r1)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x6C4
	  fmadds    f31, f2, f2, f5
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x6C8
	  fsqrte    f0, f31
	  fmuls     f31, f0, f31
	  b         .loc_0x6C8

	.loc_0x6C4:
	  fmr       f31, f0

	.loc_0x6C8:
	  lfs       f0, 0x118(r1)
	  lfs       f1, -0x5378(r2)
	  fmuls     f3, f0, f0
	  fadds     f0, f6, f3
	  fadds     f0, f5, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x700
	  fmadds    f0, f2, f2, f3
	  fadds     f3, f5, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x704
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x704

	.loc_0x700:
	  fmr       f3, f1

	.loc_0x704:
	  lfs       f0, -0x5378(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x73C
	  lfs       f0, -0x5368(r2)
	  lfs       f2, 0x114(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0x118(r1)
	  lfs       f0, 0x11C(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x114(r1)
	  stfs      f1, 0x118(r1)
	  stfs      f0, 0x11C(r1)

	.loc_0x73C:
	  lfs       f0, -0x536C(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xC20
	  lwz       r3, 0x4(r31)
	  lwz       r3, 0x2C4(r3)
	  lbz       r0, 0x30C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC20
	  lhz       r0, 0x28(r31)
	  cmplwi    r0, 0x2
	  beq-      .loc_0xC20
	  lbz       r0, 0x60(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x7D4
	  bl        -0xD4854
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14C(r1)
	  lwz       r3, 0x4(r31)
	  stw       r0, 0x148(r1)
	  lfd       f2, -0x5328(r2)
	  lfd       f1, 0x148(r1)
	  lfs       f0, -0x5358(r2)
	  fsubs     f1, f1, f2
	  lwz       r4, 0x2C4(r3)
	  lfs       f2, -0x534C(r2)
	  lwz       r3, 0xC0(r4)
	  fdivs     f3, f1, f0
	  lfs       f1, 0x308(r4)
	  lfs       f0, 0x8B8(r3)
	  fnmsubs   f1, f2, f3, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x7D4
	  li        r0, 0x1
	  li        r3, 0x1
	  stb       r0, 0x60(r31)
	  b         .loc_0x169C

	.loc_0x7D4:
	  lhz       r0, 0x28(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xB64
	  li        r4, 0
	  lis       r3, 0x804B
	  sth       r4, 0x2A(r31)
	  cmplwi    r4, 0
	  subi      r0, r3, 0x437C
	  lwz       r3, 0x4(r31)
	  lwz       r3, 0x2C4(r3)
	  lwz       r3, 0x254(r3)
	  stw       r0, 0x104(r1)
	  stw       r4, 0x110(r1)
	  stw       r4, 0x108(r1)
	  stw       r3, 0x10C(r1)
	  bne-      .loc_0x82C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x108(r1)
	  b         .loc_0x988

	.loc_0x82C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x108(r1)
	  b         .loc_0x898

	.loc_0x844:
	  lwz       r3, 0x10C(r1)
	  lwz       r4, 0x108(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x110(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x988
	  lwz       r3, 0x10C(r1)
	  lwz       r4, 0x108(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x108(r1)

	.loc_0x898:
	  lwz       r12, 0x104(r1)
	  addi      r3, r1, 0x104
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x844
	  b         .loc_0x988

	.loc_0x8B8:
	  lwz       r3, 0x10C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x110(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x8F8
	  lwz       r3, 0x10C(r1)
	  lwz       r4, 0x108(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x108(r1)
	  b         .loc_0x988

	.loc_0x8F8:
	  lwz       r3, 0x10C(r1)
	  lwz       r4, 0x108(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x108(r1)
	  b         .loc_0x96C

	.loc_0x918:
	  lwz       r3, 0x10C(r1)
	  lwz       r4, 0x108(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x110(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x988
	  lwz       r3, 0x10C(r1)
	  lwz       r4, 0x108(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x108(r1)

	.loc_0x96C:
	  lwz       r12, 0x104(r1)
	  addi      r3, r1, 0x104
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x918

	.loc_0x988:
	  lwz       r3, 0x10C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x108(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x8B8
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0xBC
	  lwz       r4, 0x2C4(r4)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xBC(r1)
	  li        r0, 0
	  lfs       f1, 0xC0(r1)
	  addi      r3, r1, 0xB0
	  lfs       f0, 0xC4(r1)
	  stfs      f2, 0x138(r1)
	  stfs      f1, 0x13C(r1)
	  stfs      f0, 0x140(r1)
	  stb       r0, 0x60(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x138(r1)
	  lfs       f0, 0xB0(r1)
	  lfs       f1, 0x13C(r1)
	  fsubs     f3, f2, f0
	  lfs       f0, 0xB4(r1)
	  lfs       f4, 0x140(r1)
	  fsubs     f2, f1, f0
	  lfs       f1, 0xB8(r1)
	  fmuls     f0, f3, f3
	  fsubs     f4, f4, f1
	  lfs       f1, -0x5378(r2)
	  fmuls     f5, f2, f2
	  stfs      f3, 0xF8(r1)
	  fmuls     f6, f4, f4
	  fadds     f0, f0, f5
	  stfs      f2, 0xFC(r1)
	  stfs      f4, 0x100(r1)
	  fadds     f0, f6, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xA68
	  fmadds    f0, f3, f3, f5
	  fadds     f3, f6, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0xA6C
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0xA6C

	.loc_0xA68:
	  fmr       f3, f1

	.loc_0xA6C:
	  lfs       f0, -0x5378(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0xAA4
	  lfs       f0, -0x5368(r2)
	  lfs       f2, 0xF8(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0xFC(r1)
	  lfs       f0, 0x100(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0xF8(r1)
	  stfs      f1, 0xFC(r1)
	  stfs      f0, 0x100(r1)

	.loc_0xAA4:
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0x98
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0xA4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x138(r1)
	  lfs       f2, 0x140(r1)
	  lfs       f3, 0xA4(r1)
	  lfs       f4, 0xA0(r1)
	  bl        0x2736B8
	  lfs       f0, -0x5348(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xB10
	  lhz       r0, 0x28(r31)
	  cmplwi    r0, 0x1
	  beq-      .loc_0xB5C
	  mr        r3, r31
	  bl        -0x1100
	  b         .loc_0xB5C

	.loc_0xB10:
	  lwz       r3, 0x4(r31)
	  addi      r4, r1, 0xF8
	  lfs       f1, -0x5368(r2)
	  bl        -0x55184
	  lbz       r0, 0x61(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xB5C
	  lbz       r0, 0x60(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xB5C
	  lwz       r3, 0x4(r31)
	  li        r4, 0x1E
	  li        r5, 0x1E
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB5C:
	  li        r3, 0x1
	  b         .loc_0x169C

	.loc_0xB64:
	  li        r0, 0x1
	  lfs       f0, -0x5378(r2)
	  sth       r0, 0x2A(r31)
	  addi      r3, r1, 0x80
	  lwz       r4, 0x4(r31)
	  stfs      f0, 0x1E4(r4)
	  stfs      f0, 0x1E8(r4)
	  stfs      f0, 0x1EC(r4)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0x8C
	  lwz       r4, 0x2C4(r4)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x8C(r1)
	  lis       r3, 0x8051
	  lfs       f1, 0x80(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f2, 0x94(r1)
	  lfs       f0, 0x88(r1)
	  fsubs     f1, f3, f1
	  fsubs     f2, f2, f0
	  bl        -0x16914C
	  lwz       r3, 0x4(r31)
	  fmr       f26, f1
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r31)
	  fmr       f1, f26
	  lfs       f2, 0x1FC(r3)
	  bl        0x27397C
	  lwz       r4, 0x4(r31)
	  li        r3, 0x1
	  lfs       f2, -0x5344(r2)
	  lfs       f0, 0x1FC(r4)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x1FC(r4)
	  b         .loc_0x169C

	.loc_0xC20:
	  lfs       f0, -0x5340(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xC3C
	  li        r0, 0
	  sth       r0, 0x2E(r31)
	  b         .loc_0xCA0

	.loc_0xC3C:
	  lfs       f0, -0x533C(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xC98
	  lhz       r3, 0x2E(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2E(r31)
	  lhz       r0, 0x2C(r31)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xC80
	  lwz       r3, 0x4(r31)
	  lfs       f0, -0x5338(r2)
	  lwz       r3, 0x2C4(r3)
	  lfs       f1, 0x308(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xC80
	  li        r0, 0
	  sth       r0, 0x2E(r31)

	.loc_0xC80:
	  lhz       r0, 0x2E(r31)
	  cmplwi    r0, 0x6
	  blt-      .loc_0xCA0
	  li        r0, 0x6
	  sth       r0, 0x2E(r31)
	  b         .loc_0xCA0

	.loc_0xC98:
	  li        r0, 0
	  sth       r0, 0x2E(r31)

	.loc_0xCA0:
	  lfs       f0, -0x5340(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0xCCC
	  lhz       r0, 0x2E(r31)
	  cmplwi    r0, 0x6
	  bge-      .loc_0xDAC
	  lfs       f0, -0x533C(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xDAC

	.loc_0xCCC:
	  li        r0, 0x2
	  lfs       f0, -0x5378(r2)
	  sth       r0, 0x2A(r31)
	  addi      r3, r1, 0x68
	  lwz       r4, 0x4(r31)
	  stfs      f0, 0x1E4(r4)
	  stfs      f0, 0x1E8(r4)
	  stfs      f0, 0x1EC(r4)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0x74
	  lwz       r4, 0x2C4(r4)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x7C(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x70(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x74(r1)
	  fsubs     f2, f2, f0
	  lfs       f0, 0x68(r1)
	  lfs       f3, 0x78(r1)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x6C(r1)
	  stfs      f2, 0x11C(r1)
	  fsubs     f0, f3, f0
	  stfs      f1, 0x114(r1)
	  stfs      f0, 0x118(r1)
	  bl        -0x1692CC
	  lwz       r3, 0x4(r31)
	  lfs       f2, 0x1FC(r3)
	  bl        0x27381C
	  lwz       r3, 0x4(r31)
	  fmr       f26, f1
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r31)
	  lfs       f1, -0x5344(r2)
	  lfs       f0, 0x1FC(r3)
	  fmadds    f0, f1, f26, f0
	  stfs      f0, 0x1FC(r3)
	  lhz       r0, 0x28(r31)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x1578
	  mr        r3, r31
	  bl        -0x139C
	  b         .loc_0x1578

	.loc_0xDAC:
	  lfs       f0, -0x533C(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x1294
	  li        r0, 0x3
	  li        r4, 0
	  sth       r0, 0x2A(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x60(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xDF8
	  lfs       f0, -0x5374(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xDF8
	  li        r0, 0x1
	  stb       r0, 0x60(r31)

	.loc_0xDF8:
	  lwz       r3, 0x4(r31)
	  lfs       f2, -0x5374(r2)
	  lwz       r4, 0xC0(r3)
	  lfs       f1, -0x5368(r2)
	  lfs       f0, 0x9C(r4)
	  fdivs     f26, f2, f0
	  bl        -0x55540
	  fdivs     f0, f1, f26
	  lwz       r4, 0x4(r31)
	  lfs       f2, -0x5334(r2)
	  lfs       f5, 0x200(r4)
	  lfs       f4, 0x204(r4)
	  lfs       f6, 0x208(r4)
	  fmuls     f3, f2, f0
	  lfs       f2, -0x5378(r2)
	  fmuls     f0, f5, f5
	  fmuls     f4, f4, f4
	  fmuls     f6, f6, f6
	  fmuls     f7, f3, f1
	  fadds     f0, f0, f4
	  fadds     f0, f6, f0
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0xE70
	  fmadds    f0, f5, f5, f4
	  fadds     f3, f6, f0
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0xE74
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0xE74

	.loc_0xE70:
	  fmr       f3, f2

	.loc_0xE74:
	  fdivs     f0, f3, f26
	  lfs       f1, -0x5334(r2)
	  fmuls     f0, f1, f0
	  fmuls     f0, f0, f3
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xF4C
	  lfs       f0, -0x5378(r2)
	  addi      r3, r1, 0x50
	  stfs      f0, 0x1E4(r4)
	  stfs      f0, 0x1E8(r4)
	  stfs      f0, 0x1EC(r4)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0x5C
	  lwz       r4, 0x2C4(r4)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x64(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x58(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x5C(r1)
	  fsubs     f2, f2, f0
	  lfs       f0, 0x50(r1)
	  lfs       f3, 0x60(r1)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x54(r1)
	  stfs      f2, 0x11C(r1)
	  fsubs     f0, f3, f0
	  stfs      f1, 0x114(r1)
	  stfs      f0, 0x118(r1)
	  bl        -0x169480
	  lwz       r3, 0x4(r31)
	  lfs       f2, 0x1FC(r3)
	  bl        0x273668
	  lwz       r3, 0x4(r31)
	  fmr       f26, f1
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r31)
	  lfs       f1, -0x5344(r2)
	  lfs       f0, 0x1FC(r3)
	  fmadds    f0, f1, f26, f0
	  stfs      f0, 0x1FC(r3)
	  b         .loc_0xFC4

	.loc_0xF4C:
	  fcmpo     cr0, f31, f7
	  bge-      .loc_0xFB4
	  lfs       f1, -0x5330(r2)
	  lfs       f0, -0x5378(r2)
	  fmuls     f1, f1, f26
	  fmuls     f1, f1, f31
	  fmadds    f2, f3, f3, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xF80
	  ble-      .loc_0xF84
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0xF84

	.loc_0xF80:
	  fmr       f2, f0

	.loc_0xF84:
	  lfs       f1, -0x5334(r2)
	  lfs       f0, 0x114(r1)
	  fmadds    f3, f1, f2, f3
	  lfs       f1, 0x118(r1)
	  lfs       f2, 0x11C(r1)
	  fmuls     f0, f0, f3
	  fmuls     f1, f1, f3
	  fmuls     f2, f2, f3
	  stfs      f0, 0x1E4(r4)
	  stfs      f1, 0x1E8(r4)
	  stfs      f2, 0x1EC(r4)
	  b         .loc_0xFC4

	.loc_0xFB4:
	  lfs       f1, -0x5368(r2)
	  mr        r3, r4
	  addi      r4, r1, 0x114
	  bl        -0x55628

	.loc_0xFC4:
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0x38
	  lwz       r4, 0x2C4(r4)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x4C(r1)
	  lwz       r4, 0x2C4(r4)
	  lfs       f0, 0x40(r1)
	  lwz       r12, 0x0(r4)
	  lfs       f3, 0x48(r1)
	  fsubs     f28, f1, f0
	  lfs       f2, 0x3C(r1)
	  lfs       f1, 0x44(r1)
	  lfs       f0, 0x38(r1)
	  fsubs     f29, f3, f2
	  lwz       r12, 0x8(r12)
	  fsubs     f30, f1, f0
	  lwz       r29, 0x5C(r31)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x30(r1)
	  lfs       f0, 0xA8(r29)
	  lfs       f2, 0x34(r1)
	  fsubs     f3, f1, f0
	  lfs       f0, 0xAC(r29)
	  lfs       f1, 0x2C(r1)
	  fsubs     f4, f2, f0
	  lfs       f0, 0xA4(r29)
	  fmuls     f5, f3, f3
	  fsubs     f2, f1, f0
	  lfs       f0, -0x5378(r2)
	  fmuls     f6, f4, f4
	  fmadds    f1, f2, f2, f5
	  fadds     f1, f6, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x108C
	  ble-      .loc_0x1090
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x1090

	.loc_0x108C:
	  fmr       f1, f0

	.loc_0x1090:
	  lfs       f0, -0x5378(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x10B0
	  lfs       f0, -0x5368(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0

	.loc_0x10B0:
	  fmuls     f0, f3, f29
	  lfs       f27, -0x5378(r2)
	  fmadds    f0, f2, f30, f0
	  fmadds    f0, f4, f28, f0
	  fcmpo     cr0, f0, f27
	  ble-      .loc_0x1578
	  lwz       r0, 0x34(r31)
	  fneg      f29, f28
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x10E4
	  fneg      f29, f29
	  fneg      f27, f27
	  fneg      f30, f30

	.loc_0x10E4:
	  fmuls     f1, f27, f27
	  lfs       f0, -0x5378(r2)
	  fmuls     f2, f30, f30
	  fmadds    f1, f29, f29, f1
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1110
	  ble-      .loc_0x1114
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x1114

	.loc_0x1110:
	  fmr       f1, f0

	.loc_0x1114:
	  lfs       f0, -0x5378(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1134
	  lfs       f0, -0x5368(r2)
	  fdivs     f0, f0, f1
	  fmuls     f29, f29, f0
	  fmuls     f27, f27, f0
	  fmuls     f30, f30, f0

	.loc_0x1134:
	  lbz       r0, -0x7BD8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1154
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x1154
	  lfs       f29, -0x5378(r2)
	  fmr       f27, f29
	  fmr       f30, f29

	.loc_0x1154:
	  lwz       r3, 0x4(r31)
	  lfs       f1, -0x5378(r2)
	  lfs       f3, 0x1E4(r3)
	  lfs       f2, 0x1E8(r3)
	  fmuls     f0, f3, f3
	  lfs       f4, 0x1EC(r3)
	  fmuls     f2, f2, f2
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f2
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x11A0
	  fmadds    f0, f3, f3, f2
	  fadds     f28, f4, f0
	  fcmpo     cr0, f28, f1
	  ble-      .loc_0x11A4
	  fsqrte    f0, f28
	  fmuls     f28, f0, f28
	  b         .loc_0x11A4

	.loc_0x11A0:
	  fmr       f28, f1

	.loc_0x11A4:
	  lfs       f1, -0x5334(r2)
	  bl        -0x558D8
	  lwz       r3, 0x4(r31)
	  fmuls     f0, f29, f1
	  fmuls     f4, f27, f1
	  lfs       f2, -0x5378(r2)
	  lfs       f3, 0x1E4(r3)
	  fmuls     f5, f30, f1
	  lfs       f1, 0x1E8(r3)
	  fadds     f0, f3, f0
	  lfs       f3, 0x1EC(r3)
	  fadds     f1, f1, f4
	  stfs      f0, 0x1E4(r3)
	  fadds     f0, f3, f5
	  stfs      f1, 0x1E8(r3)
	  stfs      f0, 0x1EC(r3)
	  lwz       r3, 0x4(r31)
	  lfs       f3, 0x1E4(r3)
	  lfs       f1, 0x1E8(r3)
	  fmuls     f0, f3, f3
	  lfs       f4, 0x1EC(r3)
	  fmuls     f1, f1, f1
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f1
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x122C
	  fmadds    f0, f3, f3, f1
	  fadds     f3, f4, f0
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0x1230
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x1230

	.loc_0x122C:
	  fmr       f3, f2

	.loc_0x1230:
	  lfs       f0, -0x5378(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x1268
	  lfs       f1, -0x5368(r2)
	  lfs       f0, 0x1E4(r3)
	  fdivs     f1, f1, f3
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1E4(r3)
	  lfs       f0, 0x1E8(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1E8(r3)
	  lfs       f0, 0x1EC(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1EC(r3)

	.loc_0x1268:
	  lwz       r3, 0x4(r31)
	  lfs       f0, 0x1E4(r3)
	  lfs       f1, 0x1E8(r3)
	  fmuls     f0, f0, f28
	  lfs       f2, 0x1EC(r3)
	  fmuls     f1, f1, f28
	  fmuls     f2, f2, f28
	  stfs      f0, 0x1E4(r3)
	  stfs      f1, 0x1E8(r3)
	  stfs      f2, 0x1EC(r3)
	  b         .loc_0x1578

	.loc_0x1294:
	  li        r0, 0x4
	  lfs       f1, -0x5368(r2)
	  sth       r0, 0x2A(r31)
	  addi      r4, r1, 0x114
	  lwz       r3, 0x4(r31)
	  bl        -0x55910
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0x14
	  lwz       r4, 0x2C4(r4)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0x8
	  lfs       f1, 0x28(r1)
	  lwz       r4, 0x2C4(r4)
	  lfs       f0, 0x1C(r1)
	  lwz       r12, 0x0(r4)
	  lfs       f3, 0x24(r1)
	  fsubs     f29, f1, f0
	  lfs       f2, 0x18(r1)
	  lfs       f1, 0x20(r1)
	  lfs       f0, 0x14(r1)
	  fsubs     f28, f3, f2
	  lwz       r12, 0x8(r12)
	  fsubs     f30, f1, f0
	  lwz       r29, 0x5C(r31)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0xA8(r29)
	  lfs       f2, 0x10(r1)
	  fsubs     f3, f1, f0
	  lfs       f0, 0xAC(r29)
	  lfs       f1, 0x8(r1)
	  fsubs     f4, f2, f0
	  lfs       f0, 0xA4(r29)
	  fmuls     f5, f3, f3
	  fsubs     f2, f1, f0
	  lfs       f0, -0x5378(r2)
	  fmuls     f6, f4, f4
	  fmadds    f1, f2, f2, f5
	  fadds     f1, f6, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1374
	  ble-      .loc_0x1378
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x1378

	.loc_0x1374:
	  fmr       f1, f0

	.loc_0x1378:
	  lfs       f0, -0x5378(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1398
	  lfs       f0, -0x5368(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0

	.loc_0x1398:
	  fmuls     f0, f3, f28
	  lfs       f26, -0x5378(r2)
	  fmadds    f0, f2, f30, f0
	  fmadds    f0, f4, f29, f0
	  fcmpo     cr0, f0, f26
	  ble-      .loc_0x1578
	  lwz       r0, 0x34(r31)
	  fneg      f27, f29
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x13CC
	  fneg      f27, f27
	  fneg      f26, f26
	  fneg      f30, f30

	.loc_0x13CC:
	  fmuls     f1, f26, f26
	  lfs       f0, -0x5378(r2)
	  fmuls     f2, f30, f30
	  fmadds    f1, f27, f27, f1
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x13F8
	  ble-      .loc_0x13FC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x13FC

	.loc_0x13F8:
	  fmr       f1, f0

	.loc_0x13FC:
	  lfs       f0, -0x5378(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x141C
	  lfs       f0, -0x5368(r2)
	  fdivs     f0, f0, f1
	  fmuls     f27, f27, f0
	  fmuls     f26, f26, f0
	  fmuls     f30, f30, f0

	.loc_0x141C:
	  lbz       r0, -0x7BD8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x143C
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x143C
	  lfs       f27, -0x5378(r2)
	  fmr       f26, f27
	  fmr       f30, f27

	.loc_0x143C:
	  lwz       r3, 0x4(r31)
	  lfs       f1, -0x5378(r2)
	  lfs       f3, 0x1E4(r3)
	  lfs       f2, 0x1E8(r3)
	  fmuls     f0, f3, f3
	  lfs       f4, 0x1EC(r3)
	  fmuls     f2, f2, f2
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f2
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x1488
	  fmadds    f0, f3, f3, f2
	  fadds     f28, f4, f0
	  fcmpo     cr0, f28, f1
	  ble-      .loc_0x148C
	  fsqrte    f0, f28
	  fmuls     f28, f0, f28
	  b         .loc_0x148C

	.loc_0x1488:
	  fmr       f28, f1

	.loc_0x148C:
	  lfs       f1, -0x5334(r2)
	  bl        -0x55BC0
	  lwz       r3, 0x4(r31)
	  fmuls     f0, f27, f1
	  fmuls     f4, f26, f1
	  lfs       f2, -0x5378(r2)
	  lfs       f3, 0x1E4(r3)
	  fmuls     f5, f30, f1
	  lfs       f1, 0x1E8(r3)
	  fadds     f0, f3, f0
	  lfs       f3, 0x1EC(r3)
	  fadds     f1, f1, f4
	  stfs      f0, 0x1E4(r3)
	  fadds     f0, f3, f5
	  stfs      f1, 0x1E8(r3)
	  stfs      f0, 0x1EC(r3)
	  lwz       r3, 0x4(r31)
	  lfs       f3, 0x1E4(r3)
	  lfs       f1, 0x1E8(r3)
	  fmuls     f0, f3, f3
	  lfs       f4, 0x1EC(r3)
	  fmuls     f1, f1, f1
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f1
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x1514
	  fmadds    f0, f3, f3, f1
	  fadds     f3, f4, f0
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0x1518
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x1518

	.loc_0x1514:
	  fmr       f3, f2

	.loc_0x1518:
	  lfs       f0, -0x5378(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x1550
	  lfs       f1, -0x5368(r2)
	  lfs       f0, 0x1E4(r3)
	  fdivs     f1, f1, f3
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1E4(r3)
	  lfs       f0, 0x1E8(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1E8(r3)
	  lfs       f0, 0x1EC(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1EC(r3)

	.loc_0x1550:
	  lwz       r3, 0x4(r31)
	  lfs       f0, 0x1E4(r3)
	  lfs       f1, 0x1E8(r3)
	  fmuls     f0, f0, f28
	  lfs       f2, 0x1EC(r3)
	  fmuls     f1, f1, f28
	  fmuls     f2, f2, f28
	  stfs      f0, 0x1E4(r3)
	  stfs      f1, 0x1E8(r3)
	  stfs      f2, 0x1EC(r3)

	.loc_0x1578:
	  lwz       r3, 0x4(r31)
	  lwz       r3, 0xC0(r3)
	  lfs       f0, 0x840(r3)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x15A0
	  lfs       f0, -0x5378(r2)
	  li        r0, 0
	  stfs      f0, 0x58(r31)
	  stb       r0, 0x30(r31)
	  b         .loc_0x165C

	.loc_0x15A0:
	  lfs       f0, 0x868(r3)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x1648
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x58(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x58(r31)
	  lbz       r0, 0x30(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1610
	  lwz       r5, 0x34(r31)
	  cmpwi     r5, -0x1
	  beq-      .loc_0x1608
	  lwz       r3, 0x5C(r31)
	  lwz       r4, 0x4(r31)
	  bl        -0x93F8
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x15F4
	  lwz       r5, 0xC(r31)

	.loc_0x15F4:
	  lwz       r3, 0x5C(r31)
	  li        r6, 0
	  lwz       r4, 0x4(r31)
	  bl        -0x9578
	  stw       r3, 0x34(r31)

	.loc_0x1608:
	  li        r0, 0x1
	  stb       r0, 0x30(r31)

	.loc_0x1610:
	  lbz       r0, 0x20(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1628
	  lwz       r0, 0x34(r31)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x1640

	.loc_0x1628:
	  lwz       r3, 0x4(r31)
	  lfs       f1, 0x58(r31)
	  lwz       r3, 0xC0(r3)
	  lfs       f0, 0x890(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x165C

	.loc_0x1640:
	  li        r3, 0x2
	  b         .loc_0x169C

	.loc_0x1648:
	  lbz       r0, 0x20(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x165C
	  li        r3, 0x2
	  b         .loc_0x169C

	.loc_0x165C:
	  lbz       r0, 0x61(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x1698
	  lbz       r0, 0x60(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1698
	  lwz       r3, 0x4(r31)
	  li        r4, 0x1E
	  li        r5, 0x1E
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1698:
	  li        r3, 0x1

	.loc_0x169C:
	  psq_l     f31,0x1B8(r1),0,0
	  lfd       f31, 0x1B0(r1)
	  psq_l     f30,0x1A8(r1),0,0
	  lfd       f30, 0x1A0(r1)
	  psq_l     f29,0x198(r1),0,0
	  lfd       f29, 0x190(r1)
	  psq_l     f28,0x188(r1),0,0
	  lfd       f28, 0x180(r1)
	  psq_l     f27,0x178(r1),0,0
	  lfd       f27, 0x170(r1)
	  psq_l     f26,0x168(r1),0,0
	  lfd       f26, 0x160(r1)
	  lwz       r31, 0x15C(r1)
	  lwz       r30, 0x158(r1)
	  lwz       r0, 0x1C4(r1)
	  lwz       r29, 0x154(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019ED68
 * Size:	000074
 */
void PikiAI::ActFormation::collisionCallback(Game::Piki*, Game::CollEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  li        r5, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x2C4(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  bl        -0x58088
	  lbz       r0, 0x38(r29)
	  mr        r5, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  li        r5, 0

	.loc_0x4C:
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x13FF4
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
 * Address:	8019EDDC
 * Size:	000058
 */
void PikiAI::ActFormation::platCallback(Game::Piki*, Game::PlatEvent&)
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
	  lwz       r3, 0x2C4(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  bl        -0x580F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x40
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x1476C

	.loc_0x40:
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
 * Address:	8019EE34
 * Size:	000008
 */
u32 PikiAI::ActFormation::resumable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	8019EE3C
 * Size:	000008
 */
void PikiAI::ActFormation::getNextAIType(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019EE44
 * Size:	000028
 */
void __sinit_aiFormation_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6C98(r13)
	  stfsu     f0, 0x4CF0(r3)
	  stfs      f0, -0x6C94(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019EE6C
 * Size:	000014
 */
void @100 @4 @PikiAI::ActFormation::inform(int)
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x64
	  b         -0x2014
	*/
}

/*
 * --INFO--
 * Address:	8019EE80
 * Size:	000014
 */
void @108 @4 @PikiAI::ActFormation::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x6C
	  b         -0x19AC
	*/
}
