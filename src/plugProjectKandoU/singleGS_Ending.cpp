#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	802326A8
 * Size:	0000E0
 */
SingleGame::EndingState::EndingState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0x1318
	  lis       r4, 0x804B
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r4, r4, 0x12D0
	  stw       r0, 0x0(r3)
	  li        r0, 0xB
	  lis       r3, 0x804C
	  stw       r0, 0x4(r31)
	  addi      r0, r3, 0x13CC
	  li        r3, 0xB0
	  stw       r5, 0x8(r31)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x0(r31)
	  stb       r5, 0x10(r31)
	  bl        -0x20E854
	  mr.       r0, r3
	  beq-      .loc_0x68
	  li        r4, 0
	  bl        0x1F274C
	  mr        r0, r3

	.loc_0x68:
	  stw       r0, 0x28(r31)
	  li        r3, 0x14
	  bl        -0x20E874
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  lis       r4, 0x804C
	  lis       r5, 0x804B
	  addi      r8, r4, 0x137C
	  lis       r4, 0x804C
	  lwz       r7, 0x0(r8)
	  addi      r5, r5, 0xF00
	  lwz       r6, 0x4(r8)
	  addi      r0, r4, 0x1418
	  lwz       r4, 0x8(r8)
	  stw       r7, 0x8(r1)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  stw       r31, 0x4(r3)
	  stw       r7, 0x8(r3)
	  stw       r6, 0xC(r3)
	  stw       r6, 0xC(r1)
	  stw       r4, 0x10(r1)
	  stw       r4, 0x10(r3)

	.loc_0xC4:
	  stw       r3, 0x24(r31)
	  mr        r3, r31
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80232788
 * Size:	0000D4
 */
void SingleGame::EndingState::init(Game::SingleGameSection*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stb       r0, 0x11(r3)
	  lbz       r0, 0x0(r5)
	  stb       r0, 0x10(r3)
	  lwz       r3, -0x6560(r13)
	  lwz       r4, 0x28(r30)
	  bl        0x1C98B4
	  li        r0, 0
	  stw       r0, 0x1C(r30)
	  stb       r0, 0x20(r30)
	  stw       r0, 0x2C(r30)
	  lbz       r0, 0x10(r30)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0xA8
	  lwz       r5, -0x6B70(r13)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r31, 0xE8(r5)
	  lwz       r5, 0xB4(r5)
	  bl        -0xE0274
	  lwz       r3, -0x6B70(r13)
	  stw       r31, 0xE8(r3)
	  lwz       r3, -0x6B70(r13)
	  lwz       r3, 0xB4(r3)
	  bl        -0x4CFD0
	  lwz       r3, -0x6B70(r13)
	  bl        -0x4899C
	  lwz       r3, -0x6B70(r13)
	  bl        -0x4889C
	  bl        -0x28B0
	  bl        -0x2600
	  bl        -0x1CC4

	.loc_0xA8:
	  lwz       r3, -0x6B70(r13)
	  li        r0, 0
	  stb       r0, 0x20(r3)
	  lwz       r3, -0x6D20(r13)
	  bl        -0xD7650
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
 * Address:	........
 * Size:	0000BC
 */
void SingleGame::EndingState::initNext(Game::SingleGameSection*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023285C
 * Size:	0001C8
 */
void SingleGame::EndingState::dvdload(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x150(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x154(r1)
	  stw       r31, 0x14C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x108
	  stw       r30, 0x148(r1)
	  addi      r30, r4, 0x39B0
	  stw       r29, 0x144(r1)
	  bl        0x102C2C
	  lbz       r0, 0x10(r31)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x44
	  li        r0, 0xE
	  stb       r0, 0x10E(r1)
	  b         .loc_0x4C

	.loc_0x44:
	  li        r0, 0xF
	  stb       r0, 0x10E(r1)

	.loc_0x4C:
	  lwz       r0, -0x6780(r13)
	  li        r3, 0
	  stb       r3, 0x10F(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x74
	  addi      r3, r30, 0x1C
	  addi      r5, r30, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x20828C

	.loc_0x74:
	  lwz       r3, -0x6780(r13)
	  addi      r4, r1, 0x108
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  addi      r3, r30, 0x1C
	  addi      r5, r30, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x2082C4

	.loc_0xAC:
	  lwz       r29, -0x6780(r13)
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  addi      r3, r30, 0x34
	  addi      r5, r30, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x2082E8

	.loc_0xD0:
	  lwz       r3, 0x4(r29)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lbz       r3, 0x10(r31)
	  rlwinm.   r0,r3,0,31,31
	  bne-      .loc_0x1AC
	  rlwinm.   r0,r3,0,30,30
	  bne-      .loc_0x160
	  bl        -0x2744
	  bl        -0x1E08
	  lwz       r4, -0x6C18(r13)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x40(r4)
	  lwz       r29, 0x218(r4)
	  bl        0x1F05AC
	  mr        r4, r29
	  addi      r5, r1, 0xC8
	  addi      r6, r1, 0x88
	  bl        0x1C28
	  lwz       r3, -0x6514(r13)
	  bl        0x1F0594
	  mr        r4, r3
	  addi      r3, r1, 0xC8
	  lwz       r5, 0x4(r4)
	  addi      r4, r1, 0x88
	  bl        0x1DC358
	  stw       r3, 0x2C(r31)
	  b         .loc_0x1AC

	.loc_0x160:
	  bl        -0x2794
	  bl        -0x1E58
	  lwz       r4, -0x6C18(r13)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x40(r4)
	  lwz       r29, 0x218(r4)
	  bl        0x1F055C
	  mr        r4, r29
	  addi      r5, r1, 0x48
	  addi      r6, r1, 0x8
	  bl        0x1C10
	  lwz       r3, -0x6514(r13)
	  bl        0x1F0544
	  mr        r4, r3
	  addi      r3, r1, 0x48
	  lwz       r5, 0x8(r4)
	  addi      r4, r1, 0x8
	  bl        0x1DC308
	  stw       r3, 0x2C(r31)

	.loc_0x1AC:
	  lwz       r0, 0x154(r1)
	  lwz       r31, 0x14C(r1)
	  lwz       r30, 0x148(r1)
	  lwz       r29, 0x144(r1)
	  mtlr      r0
	  addi      r1, r1, 0x150
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80232A24
 * Size:	000004
 */
void SingleGame::EndingState::do_dvdload(void) { }

/*
 * --INFO--
 * Address:	80232A28
 * Size:	000850
 */
void SingleGame::EndingState::exec(Game::SingleGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  mr        r30, r4
	  stw       r29, 0x74(r1)
	  mr        r29, r3
	  lis       r3, 0x8048
	  lwz       r0, 0x14(r29)
	  addi      r31, r3, 0x39B0
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lbz       r0, 0x11(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x834

	.loc_0x40:
	  mr        r3, r30
	  bl        -0xCDAC4
	  lwz       r3, -0x6560(r13)
	  bl        0x1C95B8
	  lbz       r0, 0x11(r29)
	  cmplwi    r0, 0xA
	  bgt-      .loc_0x834
	  lis       r3, 0x804C
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x1388
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lbz       r0, 0x10(r29)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x88
	  mr        r3, r30
	  bl        -0xE2D08

	.loc_0x88:
	  lwz       r0, -0x77D4(r13)
	  stw       r0, 0x18(r29)
	  lwz       r31, 0x18(r29)
	  mr        r3, r31
	  bl        -0x20F30C
	  mr        r4, r31
	  li        r5, 0x1
	  bl        -0x212C04
	  stw       r3, 0x14(r29)
	  lwz       r3, 0x14(r29)
	  bl        -0x20F534
	  li        r3, 0xEC
	  bl        -0x20EC3C
	  mr.       r0, r3
	  beq-      .loc_0xCC
	  bl        0x21D304
	  mr        r0, r3

	.loc_0xCC:
	  stw       r0, 0x1C(r29)
	  li        r4, 0
	  lwz       r3, 0x1C(r29)
	  bl        0x21D8C4
	  li        r0, 0x1
	  addi      r4, r30, 0x1B8
	  stb       r0, 0x11(r29)
	  lwz       r3, -0x6514(r13)
	  lwz       r5, 0x24(r29)
	  bl        0x1F0420
	  b         .loc_0x834
	  lwz       r0, 0x1D0(r30)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x834
	  lbz       r0, 0x10(r29)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x1A8
	  li        r0, 0x6
	  lis       r3, 0x804B
	  stb       r0, 0x11(r29)
	  li        r5, 0
	  addi      r0, r3, 0x1148
	  lis       r3, 0x804C
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x13B4
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x14
	  stw       r5, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stw       r5, 0x1C(r1)
	  bl        0x1CBC3C
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x168
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x20854C

	.loc_0x168:
	  lwz       r29, -0x6780(r13)
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x18C
	  addi      r3, r31, 0x34
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x208570

	.loc_0x18C:
	  lwz       r3, 0x4(r29)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x834

	.loc_0x1A8:
	  li        r0, 0x2
	  stb       r0, 0x11(r29)
	  b         .loc_0x834
	  lbz       r0, 0x10(r29)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x1E0
	  li        r3, 0x8
	  li        r0, 0x1
	  stb       r3, 0x11(r29)
	  li        r4, 0x3
	  stb       r0, 0x20(r29)
	  lwz       r3, 0x1C(r29)
	  bl        0x21D3A0
	  b         .loc_0x834

	.loc_0x1E0:
	  li        r3, 0x3
	  li        r0, 0x1
	  stb       r3, 0x11(r29)
	  li        r4, 0x2
	  stb       r0, 0x20(r29)
	  lwz       r3, 0x1C(r29)
	  bl        0x21D380
	  b         .loc_0x834
	  lwz       r3, 0x1C(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x20(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x244
	  lwz       r3, 0x1C(r29)
	  bl        0x21DBEC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x834
	  li        r0, 0
	  stb       r0, 0x20(r29)
	  lwz       r3, 0x1C(r29)
	  bl        0x21D820
	  b         .loc_0x834

	.loc_0x244:
	  lwz       r3, 0x1C(r29)
	  bl        0x21DC24
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x834
	  lwz       r3, 0x1C(r29)
	  bl        0x21D8DC
	  li        r3, 0x4
	  li        r0, 0x1
	  stb       r3, 0x11(r29)
	  li        r4, 0x4
	  stb       r0, 0x20(r29)
	  lwz       r3, 0x1C(r29)
	  bl        0x21D304
	  b         .loc_0x834
	  lwz       r3, 0x1C(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x20(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C0
	  lwz       r3, 0x1C(r29)
	  bl        0x21DB70
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x834
	  li        r0, 0
	  stb       r0, 0x20(r29)
	  lwz       r3, 0x1C(r29)
	  bl        0x21D7A4
	  b         .loc_0x834

	.loc_0x2C0:
	  lwz       r3, 0x1C(r29)
	  bl        0x21DBA8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x834
	  lwz       r3, 0x1C(r29)
	  bl        0x21D860
	  li        r0, 0x5
	  addi      r3, r1, 0x50
	  stb       r0, 0x11(r29)
	  li        r5, 0
	  lwz       r4, 0x2C(r29)
	  lwz       r6, 0x14(r29)
	  bl        0x1D94D0
	  lwz       r3, -0x6560(r13)
	  lwz       r4, 0x28(r29)
	  bl        0x1C9354
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x50
	  bl        0x1CB4A8
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x32C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x208710

	.loc_0x32C:
	  lwz       r29, -0x6780(r13)
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x350
	  addi      r3, r31, 0x34
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x208734

	.loc_0x350:
	  lwz       r3, 0x4(r29)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6B70(r13)
	  bl        -0x4B920
	  lwz       r3, -0x6514(r13)
	  li        r0, 0x1
	  lwz       r3, 0x60(r3)
	  stb       r0, 0x42(r3)
	  lwz       r3, -0x6514(r13)
	  bl        0x1F0184
	  lbz       r0, 0x0(r3)
	  li        r4, 0x2
	  ori       r0, r0, 0x1
	  stb       r0, 0x0(r3)
	  lwz       r3, -0x6B70(r13)
	  bl        -0x49944
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3B4
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x3
	  bl        -0x49A70

	.loc_0x3B4:
	  lwz       r5, -0x6B70(r13)
	  li        r3, 0x4
	  li        r0, 0
	  lbz       r4, 0x2F(r5)
	  ori       r4, r4, 0x1
	  stb       r4, 0x2F(r5)
	  lwz       r4, -0x6B70(r13)
	  stb       r3, 0x19(r4)
	  stw       r0, 0x1C(r4)
	  b         .loc_0x834
	  lwz       r3, -0x65F8(r13)
	  bl        0x1867A8
	  lwz       r3, -0x6560(r13)
	  bl        0x1CB474
	  cmpwi     r3, 0
	  beq-      .loc_0x834
	  li        r0, 0x6
	  lis       r3, 0x804B
	  stb       r0, 0x11(r29)
	  li        r5, 0
	  addi      r0, r3, 0x1148
	  lis       r3, 0x804C
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x13B4
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stw       r0, 0x8(r1)
	  stw       r5, 0x10(r1)
	  bl        0x1CB958
	  b         .loc_0x834
	  lwz       r3, -0x65F8(r13)
	  bl        0x186754
	  lwz       r3, -0x6560(r13)
	  bl        0x1CB9EC
	  cmpwi     r3, 0x2
	  beq-      .loc_0x4F0
	  bge-      .loc_0x834
	  cmpwi     r3, 0x1
	  bge-      .loc_0x458
	  b         .loc_0x834

	.loc_0x458:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x478
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x20885C

	.loc_0x478:
	  lwz       r30, -0x6780(r13)
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x49C
	  addi      r3, r31, 0x34
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x208880

	.loc_0x49C:
	  lwz       r3, 0x4(r30)
	  li        r4, 0x1E
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x7
	  li        r0, 0x1
	  stb       r3, 0x11(r29)
	  li        r4, 0x1
	  stb       r0, 0x20(r29)
	  lwz       r3, 0x1C(r29)
	  bl        0x21D090
	  b         .loc_0x834

	.loc_0x4F0:
	  mr        r3, r30
	  bl        -0xE03C8
	  b         .loc_0x834
	  lwz       r3, 0x1C(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x20(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x540
	  lwz       r3, 0x1C(r29)
	  bl        0x21D8F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x834
	  li        r0, 0
	  stb       r0, 0x20(r29)
	  lwz       r3, 0x1C(r29)
	  bl        0x21D524
	  b         .loc_0x834

	.loc_0x540:
	  lwz       r3, 0x1C(r29)
	  bl        0x21D928
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x834
	  lwz       r3, 0x1C(r29)
	  bl        0x21D5E0
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x834
	  lwz       r3, 0x1C(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x20(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C0
	  lwz       r3, 0x1C(r29)
	  bl        0x21D870
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x834
	  li        r0, 0
	  stb       r0, 0x20(r29)
	  lwz       r3, 0x1C(r29)
	  bl        0x21D4A4
	  b         .loc_0x834

	.loc_0x5C0:
	  lwz       r3, 0x1C(r29)
	  bl        0x21D8A8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x834
	  lwz       r3, 0x1C(r29)
	  bl        0x21D560
	  lwz       r4, 0x2C(r29)
	  addi      r3, r1, 0x38
	  lwz       r6, 0x14(r29)
	  li        r5, 0x1
	  bl        0x1D91D8
	  lwz       r3, -0x6560(r13)
	  lwz       r4, 0x28(r29)
	  bl        0x1C905C
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x38
	  bl        0x1CB1B0
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x624
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x208A08

	.loc_0x624:
	  lwz       r30, -0x6780(r13)
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x648
	  addi      r3, r31, 0x34
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x208A2C

	.loc_0x648:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6B70(r13)
	  bl        -0x4BC18
	  lwz       r3, -0x6514(r13)
	  li        r0, 0x1
	  lwz       r3, 0x60(r3)
	  stb       r0, 0x42(r3)
	  lwz       r3, -0x6514(r13)
	  bl        0x1EFE8C
	  lbz       r6, 0x0(r3)
	  li        r5, 0xA
	  li        r4, 0x1
	  li        r0, 0
	  ori       r6, r6, 0x2
	  stb       r6, 0x0(r3)
	  lwz       r6, -0x6B70(r13)
	  lbz       r3, 0x2F(r6)
	  ori       r3, r3, 0x2
	  stb       r3, 0x2F(r6)
	  stb       r5, 0x11(r29)
	  lwz       r3, -0x6B70(r13)
	  stb       r4, 0x19(r3)
	  stw       r0, 0x1C(r3)
	  b         .loc_0x834
	  lwz       r3, 0x1C(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x20(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x700
	  lwz       r3, 0x1C(r29)
	  bl        0x21D730
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x834
	  li        r0, 0
	  stb       r0, 0x20(r29)
	  lwz       r3, 0x1C(r29)
	  bl        0x21D364
	  b         .loc_0x834

	.loc_0x700:
	  lwz       r3, 0x1C(r29)
	  bl        0x21D768
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x834
	  lwz       r3, 0x1C(r29)
	  bl        0x21D420
	  lwz       r4, 0x2C(r29)
	  addi      r3, r1, 0x20
	  lwz       r6, 0x14(r29)
	  li        r5, 0x1
	  bl        0x1D9098
	  lwz       r3, -0x6560(r13)
	  lwz       r4, 0x28(r29)
	  bl        0x1C8F1C
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x20
	  bl        0x1CB070
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x764
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x208B48

	.loc_0x764:
	  lwz       r30, -0x6780(r13)
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x788
	  addi      r3, r31, 0x34
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x208B6C

	.loc_0x788:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6B70(r13)
	  bl        -0x4BD58
	  lwz       r3, -0x6514(r13)
	  li        r0, 0x1
	  lwz       r3, 0x60(r3)
	  stb       r0, 0x42(r3)
	  lwz       r3, -0x6514(r13)
	  bl        0x1EFD4C
	  lbz       r6, 0x0(r3)
	  li        r5, 0xA
	  li        r4, 0x1
	  li        r0, 0
	  ori       r6, r6, 0x2
	  stb       r6, 0x0(r3)
	  lwz       r6, -0x6B70(r13)
	  lbz       r3, 0x2F(r6)
	  ori       r3, r3, 0x2
	  stb       r3, 0x2F(r6)
	  stb       r5, 0x11(r29)
	  lwz       r3, -0x6B70(r13)
	  stb       r4, 0x19(r3)
	  stw       r0, 0x1C(r3)
	  b         .loc_0x834
	  lwz       r3, -0x65F8(r13)
	  bl        0x186388
	  lwz       r3, -0x6560(r13)
	  bl        0x1CB054
	  cmpwi     r3, 0
	  beq-      .loc_0x834
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x834:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80233278
 * Size:	0000D4
 */
void SingleGame::EndingState::draw(Game::SingleGameSection*, Graphics&)
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
	  lwz       r0, 0x14(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  lwz       r3, 0x1C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  addi      r3, r31, 0x190
	  lwz       r12, 0x190(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65F8(r13)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x1862F4
	  addi      r3, r31, 0xBC
	  lwz       r12, 0xBC(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x118(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x190
	  lwz       r12, 0x190(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65F8(r13)
	  li        r4, 0
	  li        r5, 0
	  bl        0x1862A4

	.loc_0xBC:
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
 * Address:	8023334C
 * Size:	0000B8
 */
void SingleGame::EndingState::cleanup(Game::SingleGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x39CC
	  li        r4, 0x1D3
	  addi      r5, r5, 0x39D8
	  crclr     6, 0x6
	  bl        -0x208D48

	.loc_0x40:
	  lwz       r31, -0x6780(r13)
	  cmplwi    r31, 0
	  bne-      .loc_0x68
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x39CC
	  li        r4, 0x1DC
	  addi      r5, r5, 0x39D8
	  crclr     6, 0x6
	  bl        -0x208D70

	.loc_0x68:
	  mr        r3, r31
	  bl        0x10EE28
	  lwz       r3, 0x1C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  bl        0x21D194

	.loc_0x80:
	  lwz       r3, 0x14(r30)
	  bl        -0x20FCA0
	  lwz       r3, 0x14(r30)
	  bl        -0x20FE24
	  li        r0, 0
	  stw       r0, 0x14(r30)
	  lwz       r3, 0x18(r30)
	  bl        -0x20FE44
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Game

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	80233404
	 * Size:	000008
	 */
	u32 DispMemberFinalMessage::getSize(void) { return 0xC; }

	/*
	 * --INFO--
	 * Address:	8023340C
	 * Size:	00000C
	 */
	void DispMemberFinalMessage::getOwnerID(void)
	{
		/*
		.loc_0x0:
		  lis       r3, 0x4F
		  addi      r3, r3, 0x4741
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80233418
	 * Size:	000014
	 */
	void DispMemberFinalMessage::getMemberID(void)
	{
		/*
		.loc_0x0:
		  lis       r4, 0x4C4D
		  lis       r3, 0x4649
		  addi      r4, r4, 0x5347
		  addi      r3, r3, 0x4E41
		  blr
		*/
	}

} // namespace Screen

} // namespace og

/*
 * --INFO--
 * Address:	8023342C
 * Size:	000030
 */
void Delegate<Game::SingleGame::EndingState>::invoke()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r4, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x171920
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023345C
 * Size:	000028
 */
void __sinit_singleGS_Ending_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x69E0(r13)
	  stfsu     f0, 0x1370(r3)
	  stfs      f0, -0x69DC(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
