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
 * Address:	80189378
 * Size:	000004
 */
void Game::PikiState::dump(void) { }

/*
 * --INFO--
 * Address:	8018937C
 * Size:	000030
 */
void Game::PikiState::getInfo((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0xC(r3)
	  mr        r3, r4
	  subi      r4, r2, 0x5660
	  crclr     6, 0x6
	  bl        -0xC1F60
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801893AC
 * Size:	000B6C
 */
void Game::PikiFSM::init((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  subi      r30, r4, 0x1418
	  li        r4, 0x21
	  bl        0x9754
	  li        r3, 0x10
	  bl        -0x165534
	  mr.       r4, r3
	  beq-      .loc_0x70
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  subi      r5, r2, 0x565C
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x46B0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x70:
	  mr        r3, r31
	  bl        0x9768
	  li        r3, 0x10
	  bl        -0x165584
	  mr.       r4, r3
	  beq-      .loc_0xC4
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x18
	  addi      r0, r3, 0x463C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xC4:
	  mr        r3, r31
	  bl        0x9714
	  li        r3, 0x24
	  bl        -0x1655D8
	  mr.       r4, r3
	  beq-      .loc_0x144
	  addi      r8, r4, 0x1C
	  lis       r3, 0x804B
	  stw       r8, 0x10(r4)
	  subi      r0, r3, 0x5994
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  stw       r0, 0x1C(r4)
	  addi      r6, r3, 0x4724
	  lis       r3, 0x804B
	  li        r0, 0x2
	  stw       r6, 0x0(r4)
	  addi      r3, r3, 0x3FF8
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x5654
	  addi      r0, r3, 0x78
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r3, 0x0(r4)
	  lwz       r3, 0x10(r4)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x10(r4)
	  sub       r0, r8, r3
	  stw       r0, 0x4(r3)

	.loc_0x144:
	  mr        r3, r31
	  bl        0x9694
	  li        r3, 0x10
	  bl        -0x165658
	  mr.       r4, r3
	  beq-      .loc_0x198
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x564C
	  addi      r0, r3, 0x3F10
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x198:
	  mr        r3, r31
	  bl        0x9640
	  li        r3, 0x1C
	  bl        -0x1656AC
	  mr.       r4, r3
	  beq-      .loc_0x218
	  addi      r8, r4, 0x14
	  lis       r3, 0x804B
	  stw       r8, 0x10(r4)
	  subi      r0, r3, 0x5994
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  stw       r0, 0x14(r4)
	  addi      r6, r3, 0x4724
	  lis       r3, 0x804B
	  li        r0, 0x4
	  stw       r6, 0x0(r4)
	  addi      r3, r3, 0x3E8C
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x5644
	  addi      r0, r3, 0x78
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r3, 0x0(r4)
	  lwz       r3, 0x10(r4)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x10(r4)
	  sub       r0, r8, r3
	  stw       r0, 0x4(r3)

	.loc_0x218:
	  mr        r3, r31
	  bl        0x95C0
	  li        r3, 0x20
	  bl        -0x16572C
	  mr.       r4, r3
	  beq-      .loc_0x298
	  addi      r8, r4, 0x18
	  lis       r3, 0x804B
	  stw       r8, 0x10(r4)
	  subi      r0, r3, 0x5994
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  stw       r0, 0x18(r4)
	  addi      r6, r3, 0x4724
	  lis       r3, 0x804B
	  li        r0, 0x5
	  stw       r6, 0x0(r4)
	  addi      r3, r3, 0x3E08
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x24
	  addi      r0, r3, 0x78
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r3, 0x0(r4)
	  lwz       r3, 0x10(r4)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x10(r4)
	  sub       r0, r8, r3
	  stw       r0, 0x4(r3)

	.loc_0x298:
	  mr        r3, r31
	  bl        0x9540
	  li        r3, 0x34
	  bl        -0x1657AC
	  mr.       r4, r3
	  beq-      .loc_0x2EC
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x563C
	  addi      r0, r3, 0x3C30
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2EC:
	  mr        r3, r31
	  bl        0x94EC
	  li        r3, 0x1C
	  bl        -0x165800
	  mr.       r4, r3
	  beq-      .loc_0x340
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x30
	  addi      r0, r3, 0x3AB8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x340:
	  mr        r3, r31
	  bl        0x9498
	  li        r3, 0x2C
	  bl        -0x165854
	  mr.       r4, r3
	  beq-      .loc_0x394
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x5634
	  addi      r0, r3, 0x3B2C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x394:
	  mr        r3, r31
	  bl        0x9444
	  li        r3, 0x38
	  bl        -0x1658A8
	  mr.       r4, r3
	  beq-      .loc_0x414
	  addi      r8, r4, 0x30
	  lis       r3, 0x804B
	  stw       r8, 0x10(r4)
	  subi      r0, r3, 0x5994
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  stw       r0, 0x30(r4)
	  addi      r6, r3, 0x4724
	  lis       r3, 0x804B
	  li        r0, 0x9
	  stw       r6, 0x0(r4)
	  addi      r3, r3, 0x3BA0
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x562C
	  addi      r0, r3, 0x78
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r3, 0x0(r4)
	  lwz       r3, 0x10(r4)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x10(r4)
	  sub       r0, r8, r3
	  stw       r0, 0x4(r3)

	.loc_0x414:
	  mr        r3, r31
	  bl        0x93C4
	  li        r3, 0x34
	  bl        -0x165928
	  mr.       r4, r3
	  beq-      .loc_0x468
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x5624
	  addi      r0, r3, 0x39D0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x468:
	  mr        r3, r31
	  bl        0x9370
	  li        r3, 0x10
	  bl        -0x16597C
	  mr.       r4, r3
	  beq-      .loc_0x4BC
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0xB
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x3C
	  addi      r0, r3, 0x4518
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x4BC:
	  mr        r3, r31
	  bl        0x931C
	  li        r3, 0x18
	  bl        -0x1659D0
	  mr.       r4, r3
	  beq-      .loc_0x510
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0xC
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x561C
	  addi      r0, r3, 0x4348
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x510:
	  mr        r3, r31
	  bl        0x92C8
	  li        r3, 0x1C
	  bl        -0x165A24
	  mr.       r4, r3
	  beq-      .loc_0x564
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0xD
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x5614
	  addi      r0, r3, 0x38E8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x564:
	  mr        r3, r31
	  bl        0x9274
	  li        r3, 0x14
	  bl        -0x165A78
	  mr.       r4, r3
	  beq-      .loc_0x5B8
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0xE
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x560C
	  addi      r0, r3, 0x3874
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x5B8:
	  mr        r3, r31
	  bl        0x9220
	  li        r3, 0x18
	  bl        -0x165ACC
	  mr.       r4, r3
	  beq-      .loc_0x60C
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0xF
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x5604
	  addi      r0, r3, 0x43BC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x60C:
	  mr        r3, r31
	  bl        0x91CC
	  li        r3, 0x20
	  bl        -0x165B20
	  mr.       r4, r3
	  beq-      .loc_0x660
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x10
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x55FC
	  addi      r0, r3, 0x42D4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x660:
	  mr        r3, r31
	  bl        0x9178
	  li        r3, 0x18
	  bl        -0x165B74
	  mr.       r4, r3
	  beq-      .loc_0x6B4
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x11
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x48
	  addi      r0, r3, 0x3F84
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x6B4:
	  mr        r3, r31
	  bl        0x9124
	  li        r3, 0x18
	  bl        -0x165BC8
	  mr.       r4, r3
	  beq-      .loc_0x708
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x12
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x55F4
	  addi      r0, r3, 0x3D94
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x708:
	  mr        r3, r31
	  bl        0x90D0
	  li        r3, 0x28
	  bl        -0x165C1C
	  mr.       r4, r3
	  beq-      .loc_0x75C
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x13
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x55EC
	  addi      r0, r3, 0x395C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x75C:
	  mr        r3, r31
	  bl        0x907C
	  li        r3, 0x14
	  bl        -0x165C70
	  mr.       r4, r3
	  beq-      .loc_0x7B0
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x14
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x55E4
	  addi      r0, r3, 0x407C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x7B0:
	  mr        r3, r31
	  bl        0x9028
	  li        r3, 0x2C
	  bl        -0x165CC4
	  mr.       r4, r3
	  beq-      .loc_0x804
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x15
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x55DC
	  addi      r0, r3, 0x4260
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x804:
	  mr        r3, r31
	  bl        0x8FD4
	  li        r3, 0x14
	  bl        -0x165D18
	  mr.       r4, r3
	  beq-      .loc_0x858
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x16
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x54
	  addi      r0, r3, 0x4104
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x858:
	  mr        r3, r31
	  bl        0x8F80
	  li        r3, 0x14
	  bl        -0x165D6C
	  mr.       r4, r3
	  beq-      .loc_0x8AC
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x17
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x60
	  addi      r0, r3, 0x3D20
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x8AC:
	  mr        r3, r31
	  bl        0x8F2C
	  li        r3, 0x18
	  bl        -0x165DC0
	  mr.       r4, r3
	  beq-      .loc_0x900
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x18
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x55D4
	  addi      r0, r3, 0x4178
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x900:
	  mr        r3, r31
	  bl        0x8ED8
	  li        r3, 0x10
	  bl        -0x165E14
	  mr.       r4, r3
	  beq-      .loc_0x954
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x19
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x55CC
	  addi      r0, r3, 0x41EC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x954:
	  mr        r3, r31
	  bl        0x8E84
	  li        r3, 0x24
	  bl        -0x165E68
	  mr.       r4, r3
	  beq-      .loc_0x9A8
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x1A
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x55C4
	  addi      r0, r3, 0x3CAC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x9A8:
	  mr        r3, r31
	  bl        0x8E30
	  li        r3, 0x4C
	  bl        -0x165EBC
	  mr.       r4, r3
	  beq-      .loc_0x9FC
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x1B
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x55BC
	  addi      r0, r3, 0x44A4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x9FC:
	  mr        r3, r31
	  bl        0x8DDC
	  li        r3, 0x34
	  bl        -0x165F10
	  mr.       r4, r3
	  beq-      .loc_0xA50
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x1C
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x6C
	  addi      r0, r3, 0x4430
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xA50:
	  mr        r3, r31
	  bl        0x8D88
	  li        r3, 0x14
	  bl        -0x165F64
	  mr.       r4, r3
	  beq-      .loc_0xAA4
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x1E
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x55B4
	  addi      r0, r3, 0x3A44
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xAA4:
	  mr        r3, r31
	  bl        0x8D34
	  li        r3, 0x14
	  bl        -0x165FB8
	  mr.       r4, r3
	  beq-      .loc_0xAF8
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x1F
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x55AC
	  addi      r0, r3, 0x3800
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xAF8:
	  mr        r3, r31
	  bl        0x8CE0
	  li        r3, 0x24
	  bl        -0x16600C
	  mr.       r4, r3
	  beq-      .loc_0xB4C
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r3, 0x4724
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x20
	  li        r7, 0
	  addi      r6, r5, 0x475C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x55A4
	  addi      r0, r3, 0x45C8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB4C:
	  mr        r3, r31
	  bl        0x8C8C
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
 * Address:	80189F18
 * Size:	000118
 */
void Game::PikiFSM::transit((Game::Piki*, int, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r7, 0x8048
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r4
	  mr        r26, r3
	  mr        r28, r5
	  mr        r29, r6
	  subi      r31, r7, 0x1418
	  lwz       r30, 0x290(r4)
	  cmplwi    r30, 0
	  beq-      .loc_0x58
	  lwz       r0, 0x4(r30)
	  cmpwi     r0, 0x20
	  bne-      .loc_0x58
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x104

	.loc_0x58:
	  cmplwi    r30, 0
	  beq-      .loc_0xEC
	  mr        r3, r30
	  mr        r4, r28
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x104
	  mr        r3, r30
	  mr        r4, r28
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xEC
	  lwz       r4, 0x14(r26)
	  rlwinm    r0,r28,2,0,29
	  lwz       r9, 0x4(r26)
	  addi      r3, r31, 0x78
	  lwzx      r7, r4, r0
	  addi      r5, r31, 0x88
	  lwz       r6, 0x4(r30)
	  li        r4, 0x2BD
	  rlwinm    r0,r7,2,0,29
	  lwz       r8, 0xC(r30)
	  lwzx      r9, r9, r0
	  lwz       r9, 0xC(r9)
	  crclr     6, 0x6
	  bl        -0x15F9AC
	  addi      r3, r31, 0x78
	  addi      r5, r31, 0xA8
	  li        r4, 0x2BE
	  crclr     6, 0x6
	  bl        -0x15F9C0

	.loc_0xEC:
	  stw       r28, 0x1C(r26)
	  mr        r3, r26
	  mr        r4, r27
	  mr        r5, r28
	  mr        r6, r29
	  bl        -0x3F4E0

	.loc_0x104:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018A030
 * Size:	000050
 */
void Game::PikiFSM::transitForce((Game::Piki*, int, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r7, 0x290(r4)
	  cmplwi    r7, 0
	  beq-      .loc_0x3C
	  lwz       r0, 0x4(r7)
	  cmpwi     r0, 0x20
	  bne-      .loc_0x3C
	  mr        r3, r7
	  lwz       r12, 0x0(r7)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x40

	.loc_0x3C:
	  bl        -0x3F534

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018A080
 * Size:	000040
 */
void Game::PikiWalkState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x1F
	  stw       r0, 0x14(r1)
	  li        r5, 0x1F
	  li        r6, 0
	  li        r7, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018A0C0
 * Size:	000024
 */
void Game::PikiWalkState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x294(r4)
	  bl        0xCC54
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018A0E4
 * Size:	000004
 */
void Game::PikiWalkState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	8018A0E8
 * Size:	000040
 */
void Game::PikiDemoWaitState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x1F
	  stw       r0, 0x14(r1)
	  li        r5, 0x1F
	  li        r6, 0
	  li        r7, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018A128
 * Size:	000024
 */
void Game::PikiDemoWaitState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x294(r4)
	  bl        0xCBEC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018A14C
 * Size:	000004
 */
void Game::PikiDemoWaitState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	8018A150
 * Size:	000100
 */
void Game::PikiCarrotState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0x1F
	  li        r6, 0
	  stw       r0, 0x24(r1)
	  li        r7, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  li        r4, 0x1F
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x559C(r2)
	  mr        r3, r31
	  li        r4, 0
	  stfs      f0, 0x180(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1E8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1E0(r12)
	  mtctr     r12
	  bctrl
	  bl        -0xC0C58
	  xoris     r0, r3, 0x8000
	  lis       r3, 0x4330
	  stw       r0, 0xC(r1)
	  li        r0, 0
	  lfd       f3, -0x5588(r2)
	  stw       r3, 0x8(r1)
	  lfs       f2, -0x5598(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x5590(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x5594(r2)
	  fdivs     f2, f3, f2
	  fmadds    f0, f1, f2, f0
	  stfs      f0, 0x10(r30)
	  stb       r0, 0x14(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018A250
 * Size:	000334
 */
void Game::PikiCarrotState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stw       r31, 0x11C(r1)
	  mr        r31, r4
	  stw       r30, 0x118(r1)
	  stw       r29, 0x114(r1)
	  stw       r28, 0x110(r1)
	  mr        r28, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x144
	  lfs       f0, -0x5580(r2)
	  stfs      f0, 0x1E4(r31)
	  stfs      f0, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	  lbz       r0, 0x14(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x7C
	  mr        r3, r31
	  addi      r4, r28, 0x18
	  li        r5, 0
	  bl        -0x4F110
	  lfs       f0, -0x5580(r2)
	  stfs      f0, 0x200(r31)
	  stfs      f0, 0x204(r31)
	  stfs      f0, 0x208(r31)

	.loc_0x7C:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x10(r28)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x5580(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x10(r28)
	  lfs       f1, 0x10(r28)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x13C
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lfs       f2, 0x14(r1)
	  stw       r0, 0x2C(r1)
	  addi      r0, r3, 0x6A78
	  lfs       f1, 0x18(r1)
	  lis       r4, 0x804B
	  lfs       f0, 0x1C(r1)
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5814
	  li        r6, 0x276
	  li        r5, 0
	  stw       r0, 0x2C(r1)
	  addi      r0, r3, 0x45B4
	  addi      r3, r1, 0x2C
	  stw       r4, 0x38(r1)
	  addi      r4, r1, 0x38
	  stfs      f2, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  sth       r6, 0x30(r1)
	  stw       r5, 0x34(r1)
	  stw       r0, 0x2C(r1)
	  bl        0x224C18
	  mr        r3, r31
	  li        r4, 0x3857
	  li        r5, 0
	  bl        -0x41AB0
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x4F298

	.loc_0x13C:
	  lfs       f0, -0x5580(r2)
	  stfs      f0, 0x234(r31)

	.loc_0x144:
	  lfs       f3, 0x200(r31)
	  lfs       f1, -0x5580(r2)
	  stfs      f3, 0x20(r1)
	  fmuls     f0, f3, f3
	  lfs       f2, 0x204(r31)
	  stfs      f2, 0x24(r1)
	  fmuls     f4, f2, f2
	  lfs       f2, 0x208(r31)
	  fadds     f0, f0, f4
	  fmuls     f5, f2, f2
	  stfs      f2, 0x28(r1)
	  fadds     f0, f5, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x198
	  fmadds    f0, f3, f3, f4
	  fadds     f4, f5, f0
	  fcmpo     cr0, f4, f1
	  ble-      .loc_0x19C
	  fsqrte    f0, f4
	  fmuls     f4, f0, f4
	  b         .loc_0x19C

	.loc_0x198:
	  fmr       f4, f1

	.loc_0x19C:
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x1D8
	  lfs       f0, -0x557C(r2)
	  lfs       f2, 0x20(r1)
	  fdivs     f3, f0, f4
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  b         .loc_0x1DC

	.loc_0x1D8:
	  fmr       f4, f0

	.loc_0x1DC:
	  lfs       f1, -0x5580(r2)
	  fcmpo     cr0, f4, f1
	  ble-      .loc_0x314
	  lfs       f3, 0x20(r1)
	  addi      r3, r1, 0xD8
	  lfs       f4, -0x5578(r2)
	  addi      r4, r1, 0x20
	  lfs       f2, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  fmuls     f3, f3, f4
	  fmuls     f2, f2, f4
	  fmuls     f0, f0, f4
	  stfs      f3, 0x20(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        0x29DB28
	  lis       r4, 0x8051
	  addi      r3, r1, 0xA8
	  addi      r5, r4, 0x41E4
	  addi      r4, r31, 0x168
	  bl        0x29E0E4
	  lfs       f1, -0x5580(r2)
	  addi      r3, r1, 0xD8
	  lfs       f0, -0x5574(r2)
	  addi      r4, r1, 0xA8
	  stfs      f1, 0xE4(r1)
	  addi      r5, r1, 0x48
	  stfs      f0, 0xF4(r1)
	  stfs      f1, 0x104(r1)
	  bl        -0xA01A0
	  lwz       r12, 0x48(r1)
	  mr        r4, r31
	  lwz       r28, 0x4C(r1)
	  addi      r3, r1, 0x8
	  lwz       r29, 0x50(r1)
	  lwz       r30, 0x54(r1)
	  lwz       r11, 0x58(r1)
	  lwz       r10, 0x5C(r1)
	  lwz       r9, 0x60(r1)
	  lwz       r8, 0x64(r1)
	  lwz       r7, 0x68(r1)
	  lwz       r6, 0x6C(r1)
	  lwz       r5, 0x70(r1)
	  lwz       r0, 0x74(r1)
	  stw       r12, 0x78(r1)
	  stw       r12, 0x138(r31)
	  stw       r28, 0x13C(r31)
	  stw       r29, 0x140(r31)
	  stw       r30, 0x144(r31)
	  stw       r11, 0x148(r31)
	  stw       r10, 0x14C(r31)
	  stw       r9, 0x150(r31)
	  stw       r8, 0x154(r31)
	  stw       r7, 0x158(r31)
	  stw       r6, 0x15C(r31)
	  stw       r5, 0x160(r31)
	  stw       r0, 0x164(r31)
	  lwz       r12, 0x0(r31)
	  stw       r28, 0x7C(r1)
	  lwz       r12, 0x8(r12)
	  stw       r29, 0x80(r1)
	  stw       r30, 0x84(r1)
	  stw       r11, 0x88(r1)
	  stw       r10, 0x8C(r1)
	  stw       r9, 0x90(r1)
	  stw       r8, 0x94(r1)
	  stw       r7, 0x98(r1)
	  stw       r6, 0x9C(r1)
	  stw       r5, 0xA0(r1)
	  stw       r0, 0xA4(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x144(r31)
	  stfs      f1, 0x154(r31)
	  stfs      f2, 0x164(r31)

	.loc_0x314:
	  lwz       r0, 0x124(r1)
	  lwz       r31, 0x11C(r1)
	  lwz       r30, 0x118(r1)
	  lwz       r29, 0x114(r1)
	  lwz       r28, 0x110(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018A584
 * Size:	0000D8
 */
void Game::PikiCarrotState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x1E0(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lfs       f2, 0x8(r1)
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x6A78
	  lfs       f1, 0xC(r1)
	  lis       r4, 0x804B
	  lfs       f0, 0x10(r1)
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5814
	  li        r6, 0x275
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x45A0
	  addi      r3, r1, 0x14
	  stw       r4, 0x20(r1)
	  addi      r4, r1, 0x20
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  sth       r6, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  stw       r0, 0x14(r1)
	  bl        0x22495C
	  mr        r3, r31
	  li        r4, 0x3857
	  li        r5, 0
	  bl        -0x41D6C
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x4F554
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018A65C
 * Size:	000124
 */
void Game::PikiCarrotState::bounceCallback((Game::Piki*, Sys::Triangle*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lbz       r0, 0x14(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x10C
	  li        r0, 0x1
	  addi      r3, r1, 0x8
	  stb       r0, 0x14(r30)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  addi      r4, r30, 0x18
	  stfs      f0, 0x18(r30)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x1C(r30)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x20(r30)
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  stfs      f1, 0x1C(r30)
	  subi      r0, r3, 0x5814
	  lfs       f0, -0x5570(r2)
	  stw       r0, 0x24(r1)
	  li        r4, 0x3856
	  li        r5, 0
	  li        r6, 0
	  lfs       f1, 0x18(r30)
	  stfs      f1, 0x28(r1)
	  lfs       f1, 0x1C(r30)
	  stfs      f1, 0x2C(r1)
	  lfs       f1, 0x20(r30)
	  stfs      f1, 0x30(r1)
	  lfs       f1, 0x1C(r30)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x1C(r30)
	  lwz       r3, 0x250(r31)
	  bl        0x2D7E68
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x6A64
	  lis       r3, 0x804B
	  li        r4, 0x146
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x458C
	  li        r6, 0x147
	  addi      r3, r1, 0x14
	  sth       r4, 0x18(r1)
	  addi      r4, r1, 0x24
	  sth       r6, 0x1A(r1)
	  stw       r5, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x14(r1)
	  bl        0x2248B0

	.loc_0x10C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018A780
 * Size:	000004
 */
void Game::PikiCarrotState::collisionCallback((Game::Piki*, Game::CollEvent&))
{
}

/*
 * --INFO--
 * Address:	8018A784
 * Size:	0000D8
 */
void Game::PikiSwallowedState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  beq-      .loc_0x2C
	  lwz       r4, 0x0(r5)
	  b         .loc_0x30

	.loc_0x2C:
	  li        r4, 0x8

	.loc_0x30:
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  mr        r5, r4
	  li        r6, 0
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  lwz       r31, 0xF4(r29)
	  mr        r3, r29
	  lwz       r30, 0xF8(r29)
	  bl        -0x429CC
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  mr        r3, r29
	  bl        -0x429DC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  bl        -0x429D0
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9C:
	  cmplwi    r31, 0
	  beq-      .loc_0xBC
	  cmplwi    r30, 0
	  beq-      .loc_0xBC
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1482C

	.loc_0xBC:
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
 * Address:	8018A85C
 * Size:	000074
 */
void Game::PikiSwallowedState::exec((Game::Piki*))
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
	  mr        r3, r31
	  bl        0x14D0C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5C
	  mr        r3, r31
	  li        r4, 0x2822
	  li        r5, 0
	  bl        -0x41FC8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
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
 * Address:	8018A8D0
 * Size:	000030
 */
void transit__Q24Game22FSMState<Game::Piki>
FPQ24Game4PikiiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018A900
 * Size:	000054
 */
void Game::PikiSwallowedState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x14B0C
	  lwz       r3, 0x294(r31)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0xC66C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1AC(r12)
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
 * Address:	8018A954
 * Size:	00020C
 */
void Game::PikiHoleinState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr.       r31, r5
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x13A0
	  li        r4, 0x3B5
	  subi      r5, r5, 0x1358
	  crclr     6, 0x6
	  bl        -0x160354

	.loc_0x44:
	  mr        r3, r30
	  bl        0x14A88
	  mr        r3, r30
	  li        r4, 0x1D
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1D
	  li        r6, 0
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  lfs       f2, 0x0(r31)
	  lfs       f1, 0xC(r1)
	  lfs       f4, 0x4(r31)
	  fsubs     f3, f2, f0
	  lfs       f2, 0x10(r1)
	  lfs       f5, 0x8(r31)
	  fsubs     f6, f4, f1
	  lfs       f4, -0x5580(r2)
	  stfs      f3, 0x1C(r29)
	  fsubs     f3, f5, f2
	  stfs      f6, 0x20(r29)
	  stfs      f3, 0x24(r29)
	  stfs      f4, 0x20(r29)
	  lfs       f6, 0x1C(r29)
	  lfs       f5, 0x20(r29)
	  lfs       f7, 0x24(r29)
	  fmuls     f3, f6, f6
	  fmuls     f5, f5, f5
	  fmuls     f7, f7, f7
	  fadds     f3, f3, f5
	  fadds     f3, f7, f3
	  fcmpo     cr0, f3, f4
	  ble-      .loc_0x104
	  fmadds    f3, f6, f6, f5
	  fadds     f5, f7, f3
	  fcmpo     cr0, f5, f4
	  ble-      .loc_0x108
	  fsqrte    f3, f5
	  fmuls     f5, f3, f5
	  b         .loc_0x108

	.loc_0x104:
	  fmr       f5, f4

	.loc_0x108:
	  lfs       f3, -0x5580(r2)
	  fcmpo     cr0, f5, f3
	  ble-      .loc_0x144
	  lfs       f4, -0x557C(r2)
	  lfs       f3, 0x1C(r29)
	  fdivs     f4, f4, f5
	  fmuls     f3, f3, f4
	  stfs      f3, 0x1C(r29)
	  lfs       f3, 0x20(r29)
	  fmuls     f3, f3, f4
	  stfs      f3, 0x20(r29)
	  lfs       f3, 0x24(r29)
	  fmuls     f3, f3, f4
	  stfs      f3, 0x24(r29)
	  b         .loc_0x148

	.loc_0x144:
	  fmr       f5, f3

	.loc_0x148:
	  stfs      f5, 0x28(r29)
	  lfs       f3, -0x556C(r2)
	  lfs       f4, 0x28(r29)
	  fmuls     f3, f4, f3
	  stfs      f3, 0x28(r29)
	  lfs       f6, 0x28(r29)
	  lfs       f3, 0x1C(r29)
	  lfs       f4, 0x20(r29)
	  fmuls     f3, f3, f6
	  lfs       f5, 0x24(r29)
	  fmuls     f4, f4, f6
	  fmuls     f5, f5, f6
	  fadds     f0, f0, f3
	  fadds     f1, f1, f4
	  fadds     f2, f2, f5
	  stfs      f0, 0x10(r29)
	  stfs      f1, 0x14(r29)
	  stfs      f2, 0x18(r29)
	  lfs       f0, 0x28(r29)
	  fneg      f0, f0
	  stfs      f0, 0x2C(r29)
	  bl        -0xC1550
	  xoris     r0, r3, 0x8000
	  lis       r4, 0x4330
	  stw       r0, 0x1C(r1)
	  li        r0, 0
	  lfd       f3, -0x5588(r2)
	  mr        r3, r30
	  stw       r4, 0x18(r1)
	  li        r4, 0
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0x18(r1)
	  lfs       f0, -0x559C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x30(r29)
	  stb       r0, 0x34(r29)
	  stb       r0, 0x44(r29)
	  bl        -0x4F0E8
	  lfs       f0, -0x557C(r2)
	  stfs      f0, 0x48(r29)
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018AB60
 * Size:	0001C0
 */
void Game::PikiHoleinState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x148A4
	  lfs       f0, 0x48(r30)
	  stfs      f0, 0x168(r31)
	  stfs      f0, 0x16C(r31)
	  stfs      f0, 0x170(r31)
	  lbz       r0, 0x34(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  mr        r3, r31
	  addi      r4, r30, 0x38
	  li        r5, 0
	  bl        -0x4FA04
	  b         .loc_0x1A8

	.loc_0x54:
	  lfs       f1, 0x30(r30)
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x78
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x30(r30)
	  b         .loc_0x1A8

	.loc_0x78:
	  lbz       r0, 0x44(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x9C
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x44(r30)
	  li        r4, 0x282F
	  li        r5, 0
	  bl        -0x4232C

	.loc_0x9C:
	  lfs       f0, 0x28(r30)
	  mr        r3, r31
	  lfs       f1, -0x5564(r2)
	  addi      r4, r1, 0x8
	  fmuls     f0, f0, f0
	  lfs       f8, 0x2C(r30)
	  lfs       f2, 0x20(r30)
	  li        r5, 0
	  lfs       f4, 0x24(r30)
	  fdivs     f6, f1, f0
	  lfs       f0, 0x1C(r30)
	  lfs       f7, -0x5568(r2)
	  lfs       f3, 0x14(r30)
	  lfs       f5, 0x18(r30)
	  lfs       f1, 0x10(r30)
	  fmuls     f6, f6, f8
	  fmuls     f2, f2, f8
	  fmuls     f4, f4, f8
	  fmuls     f6, f8, f6
	  fadds     f2, f3, f2
	  fmuls     f0, f0, f8
	  fadds     f6, f7, f6
	  fadds     f3, f5, f4
	  stfs      f2, 0xC(r1)
	  fadds     f1, f1, f0
	  fadds     f0, f2, f6
	  stfs      f3, 0x10(r1)
	  stfs      f1, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  bl        -0x4FAC8
	  lwz       r3, -0x6514(r13)
	  lfs       f3, -0x5560(r2)
	  lfs       f2, 0x54(r3)
	  lfs       f1, 0x2C(r30)
	  lfs       f0, -0x555C(r2)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x2C(r30)
	  lfs       f3, 0x28(r30)
	  lfs       f1, 0x2C(r30)
	  fmuls     f0, f0, f3
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x160
	  fsubs     f1, f1, f0
	  lfs       f2, -0x5558(r2)
	  lfs       f0, -0x5554(r2)
	  fmsubs    f1, f2, f3, f1
	  fmuls     f0, f0, f3
	  fdivs     f0, f1, f0
	  stfs      f0, 0x48(r30)

	.loc_0x160:
	  lfs       f1, -0x5558(r2)
	  lfs       f0, 0x28(r30)
	  lfs       f2, 0x2C(r30)
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1A8
	  lbz       r0, 0x34(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x1A8
	  li        r0, 0x1
	  stb       r0, 0x34(r30)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x38(r30)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x3C(r30)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x40(r30)

	.loc_0x1A8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018AD20
 * Size:	000004
 */
void Game::PikiHoleinState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	8018AD24
 * Size:	0001F4
 */
void Game::PikiFountainonState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr.       r31, r5
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x13A0
	  li        r4, 0x41A
	  subi      r5, r5, 0x1340
	  crclr     6, 0x6
	  bl        -0x160724

	.loc_0x44:
	  mr        r3, r30
	  bl        0x146B8
	  mr        r3, r30
	  li        r4, 0x1D
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1D
	  li        r6, 0
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f8, 0x8(r1)
	  lfs       f7, -0x5550(r2)
	  lfs       f9, 0xC(r1)
	  lfs       f5, -0x554C(r2)
	  fmuls     f2, f8, f7
	  lfs       f0, 0x0(r31)
	  fmuls     f4, f9, f7
	  lfs       f1, 0x4(r31)
	  fmuls     f0, f0, f5
	  lfs       f10, 0x10(r1)
	  fmuls     f3, f1, f5
	  lfs       f6, 0x8(r31)
	  fmuls     f7, f10, f7
	  lfs       f1, -0x5580(r2)
	  fadds     f0, f2, f0
	  fmuls     f2, f6, f5
	  fadds     f3, f4, f3
	  stfs      f0, 0x10(r29)
	  fadds     f0, f7, f2
	  stfs      f3, 0x14(r29)
	  stfs      f0, 0x18(r29)
	  lfs       f0, 0x10(r29)
	  lfs       f2, 0x14(r29)
	  lfs       f3, 0x18(r29)
	  fsubs     f0, f0, f8
	  fsubs     f2, f2, f9
	  fsubs     f3, f3, f10
	  stfs      f0, 0x1C(r29)
	  stfs      f2, 0x20(r29)
	  stfs      f3, 0x24(r29)
	  lfs       f3, 0x1C(r29)
	  lfs       f2, 0x20(r29)
	  lfs       f4, 0x24(r29)
	  fmuls     f0, f3, f3
	  fmuls     f2, f2, f2
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f2
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x144
	  fmadds    f0, f3, f3, f2
	  fadds     f2, f4, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x148
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x148

	.loc_0x144:
	  fmr       f2, f1

	.loc_0x148:
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x184
	  lfs       f1, -0x557C(r2)
	  lfs       f0, 0x1C(r29)
	  fdivs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1C(r29)
	  lfs       f0, 0x20(r29)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x20(r29)
	  lfs       f0, 0x24(r29)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x24(r29)
	  b         .loc_0x188

	.loc_0x184:
	  fmr       f2, f0

	.loc_0x188:
	  stfs      f2, 0x28(r29)
	  lfs       f0, 0x28(r29)
	  fneg      f0, f0
	  stfs      f0, 0x2C(r29)
	  bl        -0xC191C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  mr        r3, r30
	  lfd       f3, -0x5588(r2)
	  li        r4, 0
	  stw       r0, 0x18(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0x18(r1)
	  lfs       f0, -0x559C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x30(r29)
	  bl        -0x4F4A8
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018AF18
 * Size:	0001A0
 */
void Game::PikiFountainonState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f1, -0x5580(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  lfs       f2, 0x30(r3)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x58
	  lwz       r4, -0x6514(r13)
	  lfs       f0, 0x54(r4)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x30(r3)
	  lfs       f0, 0x30(r3)
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x18C
	  mr        r3, r31
	  li        r4, 0x282F
	  li        r5, 0
	  bl        -0x4269C
	  b         .loc_0x18C

	.loc_0x58:
	  lfs       f3, 0x28(r3)
	  lfs       f6, -0x554C(r2)
	  fmuls     f1, f3, f3
	  lfs       f2, -0x5548(r2)
	  lfs       f0, 0x2C(r3)
	  fmuls     f8, f6, f3
	  lfs       f5, -0x5544(r2)
	  fdivs     f2, f2, f1
	  fmuls     f1, f2, f0
	  fcmpo     cr0, f0, f8
	  fmuls     f1, f0, f1
	  fadds     f9, f5, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xFC
	  fmuls     f2, f2, f8
	  lfs       f4, 0x20(r3)
	  lfs       f6, 0x24(r3)
	  fsubs     f1, f0, f8
	  lfs       f3, 0x1C(r3)
	  fmuls     f4, f4, f8
	  fmadds    f2, f8, f2, f5
	  lfs       f5, 0x14(r3)
	  fmuls     f6, f6, f8
	  lfs       f7, 0x18(r3)
	  fadds     f5, f5, f4
	  lfs       f4, 0x10(r3)
	  fmuls     f3, f3, f8
	  lwz       r4, -0x6514(r13)
	  fadds     f1, f2, f1
	  stfs      f5, 0xC(r1)
	  fadds     f6, f7, f6
	  lfs       f2, -0x5540(r2)
	  fadds     f3, f4, f3
	  fadds     f1, f5, f1
	  stfs      f6, 0x10(r1)
	  stfs      f3, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  lfs       f1, 0x54(r4)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x2C(r3)
	  b         .loc_0x17C

	.loc_0xFC:
	  lfs       f1, 0x20(r3)
	  lfs       f4, 0x24(r3)
	  fmuls     f2, f1, f0
	  lfs       f3, 0x14(r3)
	  lfs       f1, 0x1C(r3)
	  fmuls     f4, f4, f0
	  lfs       f5, 0x18(r3)
	  fadds     f7, f3, f2
	  lfs       f3, 0x10(r3)
	  fmuls     f2, f1, f0
	  fadds     f4, f5, f4
	  lwz       r4, -0x6514(r13)
	  fadds     f1, f7, f9
	  fadds     f3, f3, f2
	  stfs      f7, 0xC(r1)
	  lfs       f2, -0x5568(r2)
	  stfs      f4, 0x10(r1)
	  stfs      f3, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  lfs       f1, 0x54(r4)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x2C(r3)
	  lfs       f0, 0x28(r3)
	  lfs       f1, 0x2C(r3)
	  fmuls     f0, f6, f0
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x17C
	  mr        r3, r31
	  li        r4, 0x285A
	  li        r5, 0
	  bl        -0x427C4

	.loc_0x17C:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  li        r5, 0
	  bl        -0x4FEF8

	.loc_0x18C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018B0B8
 * Size:	000004
 */
void Game::PikiFountainonState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	8018B0BC
 * Size:	0000C8
 */
void Game::PikiTaneState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0x24
	  li        r6, 0
	  stw       r0, 0x24(r1)
	  li        r7, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  li        r4, 0x24
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  bl        -0xC1B5C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  mr        r3, r31
	  lfd       f1, -0x5588(r2)
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  lfs       f4, -0x5598(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f3, -0x556C(r2)
	  fsubs     f5, f0, f1
	  lfs       f1, -0x5594(r2)
	  lfs       f2, -0x555C(r2)
	  lfs       f0, -0x553C(r2)
	  fdivs     f4, f5, f4
	  fnmsubs   f1, f3, f4, f1
	  stfs      f1, 0x14(r30)
	  lfs       f1, 0x14(r30)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x10(r30)
	  lfs       f1, 0x14(r30)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x14(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018B184
 * Size:	000038
 */
void Game::PikiTaneState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x6514(r13)
	  lfs       f2, 0x10(r3)
	  mr        r3, r4
	  lfs       f1, 0x54(r5)
	  lfs       f3, 0x14(r6)
	  bl        -0x4FA04
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018B1BC
 * Size:	000034
 */
void Game::PikiTaneState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018B1F0
 * Size:	000064
 */
void Game::PikiTaneState::bounceCallback((Game::Piki*, Sys::Triangle*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x294(r4)
	  li        r4, 0x1
	  bl        0xBD7C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8018B254
 * Size:	000114
 */
void Game::PikiNukareState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr.       r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x13A0
	  li        r4, 0x48E
	  subi      r5, r5, 0x1324
	  crclr     6, 0x6
	  bl        -0x160C54

	.loc_0x44:
	  lfs       f0, -0x5580(r2)
	  stfs      f0, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
	  stfs      f0, 0x1EC(r30)
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x1FC(r30)
	  lwz       r0, 0x4(r31)
	  stw       r0, 0x10(r29)
	  lwz       r0, 0x4(r31)
	  stw       r0, 0x2C4(r30)
	  lbz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  li        r0, 0x2D
	  sth       r0, 0x16(r29)
	  b         .loc_0x9C

	.loc_0x94:
	  li        r0, 0x2C
	  sth       r0, 0x16(r29)

	.loc_0x9C:
	  cmplwi    r30, 0
	  mr        r6, r30
	  beq-      .loc_0xAC
	  addi      r6, r30, 0x178

	.loc_0xAC:
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  lha       r4, 0x16(r29)
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mr        r5, r4
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x14(r29)
	  lwz       r3, -0x6B70(r13)
	  lbz       r4, 0x2B8(r30)
	  bl        0x5BD78
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xF8
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x8
	  stb       r0, 0x3C(r3)

	.loc_0xF8:
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
 * Address:	8018B368
 * Size:	00000C
 */
void Game::PikiNukareState::soft_transittable((int))
{
	/*
	.loc_0x0:
	  cntlzw    r0, r4
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018B374
 * Size:	000150
 */
void Game::PikiNukareState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lha       r4, 0x16(r3)
	  mr        r3, r31
	  bl        -0x4E46C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x38
	  li        r0, 0x1
	  stb       r0, 0x14(r30)

	.loc_0x38:
	  lbz       r0, 0x14(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x138
	  lwz       r6, 0x114(r31)
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0
	  lwz       r7, 0x0(r6)
	  li        r6, 0
	  lfs       f0, 0x4C(r7)
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x50(r7)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x54(r7)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x14
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x18(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  li        r5, 0
	  bl        -0x50278
	  lwz       r6, 0x2C4(r31)
	  lis       r3, 0x804B
	  addi      r4, r3, 0x530
	  li        r0, 0
	  lis       r3, 0x804B
	  stw       r4, 0x8(r1)
	  addi      r4, r3, 0x524
	  lis       r3, 0x804B
	  stw       r4, 0x8(r1)
	  addi      r3, r3, 0xD44
	  addi      r5, r1, 0x8
	  li        r4, 0
	  stw       r6, 0xC(r1)
	  stw       r3, 0x8(r1)
	  stb       r0, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x294(r31)
	  bl        0xBB2C
	  lbz       r4, 0x2B8(r31)
	  cmpwi     r4, 0
	  blt-      .loc_0x138
	  cmpwi     r4, 0x4
	  bgt-      .loc_0x138
	  lwz       r3, -0x6B70(r13)
	  bl        0x5BC24
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x138
	  lwz       r3, -0x6C18(r13)
	  mr        r4, r31
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x138:
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
 * Address:	8018B4C4
 * Size:	00020C
 */
void Game::PikiNukareState::onKeyEvent((Game::Piki*, SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  lwz       r0, 0x1C(r5)
	  lis       r5, 0x8048
	  stw       r31, 0x6C(r1)
	  subi      r31, r5, 0x1418
	  cmpwi     r0, 0x3E8
	  stw       r30, 0x68(r1)
	  mr        r30, r4
	  beq-      .loc_0x1EC
	  bge-      .loc_0x1F4
	  cmpwi     r0, 0x2
	  beq-      .loc_0x3C
	  b         .loc_0x1F4

	.loc_0x3C:
	  lwz       r5, 0x10(r3)
	  li        r4, 0
	  lwz       r3, -0x6958(r13)
	  lhz       r5, 0x2DC(r5)
	  bl        0xC8414
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x14(r1)
	  mr        r3, r30
	  lfs       f2, 0x18(r1)
	  addi      r5, r1, 0x30
	  lfs       f1, 0x1C(r1)
	  li        r4, 0
	  stfs      f0, 0x40(r1)
	  lfs       f0, -0x5594(r2)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  lwz       r0, 0x17C(r30)
	  ori       r0, r0, 0x10
	  stw       r0, 0x17C(r30)
	  lfs       f3, 0x40(r1)
	  lfs       f2, 0x44(r1)
	  lfs       f1, 0x48(r1)
	  stfs      f3, 0x30(r1)
	  stfs      f2, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  bl        -0x4FA40
	  cmplwi    r3, 0
	  beq-      .loc_0x1AC
	  lwz       r3, 0x40(r1)
	  lis       r5, 0x804B
	  lwz       r4, 0x44(r1)
	  subi      r10, r5, 0x5808
	  lwz       r0, 0x48(r1)
	  lis       r6, 0x804E
	  stw       r3, 0x8(r1)
	  lis       r3, 0x804B
	  subi      r5, r3, 0x5814
	  lfs       f0, -0x5538(r2)
	  li        r7, 0
	  stw       r4, 0xC(r1)
	  lfs       f3, 0x8(r1)
	  lis       r4, 0x804F
	  stw       r0, 0x10(r1)
	  lis       r3, 0x804B
	  lfs       f2, 0xC(r1)
	  li        r9, 0x159
	  lfs       f1, 0x10(r1)
	  li        r8, 0x15A
	  stw       r10, 0x20(r1)
	  addi      r10, r6, 0x6A64
	  subi      r6, r4, 0x7A18
	  subi      r0, r3, 0x5D24
	  stw       r10, 0x20(r1)
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x4C
	  stw       r5, 0x4C(r1)
	  sth       r9, 0x24(r1)
	  sth       r8, 0x26(r1)
	  stw       r7, 0x28(r1)
	  stw       r7, 0x2C(r1)
	  stw       r6, 0x20(r1)
	  stfs      f3, 0x50(r1)
	  stfs      f2, 0x54(r1)
	  stfs      f1, 0x58(r1)
	  stw       r0, 0x4C(r1)
	  stfs      f0, 0x5C(r1)
	  bl        0x23D2B8
	  lwz       r0, 0x2C4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x180
	  addi      r3, r31, 0x78
	  addi      r5, r31, 0x100
	  li        r4, 0x4DA
	  crclr     6, 0x6
	  bl        -0x161000

	.loc_0x180:
	  lwz       r4, 0x2C4(r30)
	  mr        r3, r30
	  li        r5, 0x380B
	  li        r6, 0x1
	  bl        -0x42D00
	  lwz       r4, 0x2C4(r30)
	  mr        r3, r30
	  li        r5, 0x2821
	  li        r6, 0
	  bl        -0x42D14
	  b         .loc_0x1F4

	.loc_0x1AC:
	  lwz       r0, 0x2C4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x1CC
	  addi      r3, r31, 0x78
	  addi      r5, r31, 0x110
	  li        r4, 0x4DE
	  crclr     6, 0x6
	  bl        -0x16104C

	.loc_0x1CC:
	  addi      r3, r1, 0x40
	  bl        0x22C118
	  lwz       r4, 0x2C4(r30)
	  mr        r3, r30
	  li        r5, 0x2821
	  li        r6, 0
	  bl        -0x42D54
	  b         .loc_0x1F4

	.loc_0x1EC:
	  li        r0, 0x1
	  stb       r0, 0x14(r3)

	.loc_0x1F4:
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
 * Address:	8018B6D0
 * Size:	000010
 */
void Game::PikiNukareState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x17C(r4)
	  rlwinm    r0,r0,0,28,26
	  stw       r0, 0x17C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018B6E0
 * Size:	0000B8
 */
void Game::PikiDopeState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr.       r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x13A0
	  li        r4, 0x4F6
	  subi      r5, r5, 0x1324
	  crclr     6, 0x6
	  bl        -0x1610E0

	.loc_0x44:
	  lwz       r0, 0x0(r31)
	  sth       r0, 0x18(r29)
	  bl        -0xC218C
	  xoris     r0, r3, 0x8000
	  lis       r3, 0x4330
	  stw       r0, 0xC(r1)
	  li        r0, 0
	  lfd       f3, -0x5588(r2)
	  stw       r3, 0x8(r1)
	  lfs       f2, -0x5598(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x559C(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x5580(r2)
	  fdivs     f2, f3, f2
	  fmuls     f1, f1, f2
	  stfs      f1, 0x14(r29)
	  stb       r0, 0x10(r29)
	  stfs      f0, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
	  stfs      f0, 0x1EC(r30)
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
 * Address:	8018B798
 * Size:	000008
 */
void Game::PikiDopeState::onFlute((Game::Piki*, Game::Navi*))
{
	/*
	.loc_0x0:
	  stw       r5, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018B7A0
 * Size:	00018C
 */
void Game::PikiDopeState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lbz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xD4
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x14(r30)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x5580(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x14(r30)
	  lfs       f1, 0x14(r30)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x174
	  li        r0, 0x1
	  stb       r0, 0x10(r30)
	  bl        -0xC2258
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x18(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0x18(r1)
	  lfs       f0, -0x556C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x98
	  li        r0, 0x12
	  sth       r0, 0x1A(r30)
	  b         .loc_0xA0

	.loc_0x98:
	  li        r0, 0x12
	  sth       r0, 0x1A(r30)

	.loc_0xA0:
	  cmplwi    r31, 0
	  mr        r6, r31
	  beq-      .loc_0xB0
	  addi      r6, r31, 0x178

	.loc_0xB0:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lha       r4, 0x1A(r30)
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mr        r5, r4
	  mtctr     r12
	  bctrl
	  b         .loc_0x174

	.loc_0xD4:
	  lha       r4, 0x1A(r30)
	  mr        r3, r31
	  bl        -0x4E950
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x174
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1C(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x154
	  stw       r0, 0x2C4(r31)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  lwz       r7, 0x2C4(r31)
	  li        r0, 0
	  addi      r5, r5, 0x530
	  addi      r6, r4, 0x524
	  stw       r5, 0x8(r1)
	  addi      r3, r3, 0xD44
	  addi      r5, r1, 0x8
	  li        r4, 0
	  stw       r6, 0x8(r1)
	  stw       r7, 0xC(r1)
	  stw       r3, 0x8(r1)
	  stb       r0, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x294(r31)
	  bl        0xB6A4

	.loc_0x154:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x174:
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
 * Address:	8018B92C
 * Size:	0000D8
 */
void Game::PikiDopeState::onKeyEvent((Game::Piki*, SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lwz       r0, 0x1C(r5)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  cmpwi     r0, 0x3E8
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  beq-      .loc_0x48
	  bge-      .loc_0xC0
	  cmpwi     r0, 0x2
	  beq-      .loc_0x38
	  b         .loc_0xC0

	.loc_0x38:
	  lha       r4, 0x18(r30)
	  mr        r3, r31
	  bl        -0x41B28
	  b         .loc_0xC0

	.loc_0x48:
	  lwz       r0, 0x1C(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xA0
	  stw       r0, 0x2C4(r31)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  lwz       r7, 0x2C4(r31)
	  li        r0, 0
	  addi      r5, r5, 0x530
	  addi      r6, r4, 0x524
	  stw       r5, 0x8(r1)
	  addi      r3, r3, 0xD44
	  addi      r5, r1, 0x8
	  li        r4, 0
	  stw       r6, 0x8(r1)
	  stw       r7, 0xC(r1)
	  stw       r3, 0x8(r1)
	  stb       r0, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x294(r31)
	  bl        0xB5CC

	.loc_0xA0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018BA04
 * Size:	000004
 */
void Game::PikiDopeState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	8018BA08
 * Size:	000024
 */
void Game::PikiPanicState::soft_transittable((int))
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0x8
	  li        r3, 0
	  beqlr-
	  cmpwi     r4, 0x15
	  beqlr-
	  cmpwi     r4, 0x17
	  beqlr-
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018BA2C
 * Size:	000070
 */
void Game::PikiPanicState::transittable((int))
{
	/*
	.loc_0x0:
	  lhz       r0, 0x24(r3)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x1C
	  cmpwi     r4, 0x15
	  beq-      .loc_0x1C
	  li        r3, 0x1
	  blr

	.loc_0x1C:
	  cmpwi     r4, 0x18
	  beq-      .loc_0x54
	  subi      r0, r4, 0xA
	  cmplwi    r0, 0x1
	  ble-      .loc_0x54
	  subi      r0, r4, 0x14
	  cmplwi    r0, 0x2
	  ble-      .loc_0x54
	  cmpwi     r4, 0x1A
	  beq-      .loc_0x54
	  cmpwi     r4, 0x4
	  beq-      .loc_0x54
	  cmpwi     r4, 0x6
	  bne-      .loc_0x5C

	.loc_0x54:
	  li        r3, 0x1
	  blr

	.loc_0x5C:
	  lbz       r3, 0x20(r3)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Game::PikiPanicState::startSound((Game::Piki*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8018BA9C
 * Size:	000280
 */
void Game::PikiPanicState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr.       r29, r5
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x13A0
	  li        r4, 0x577
	  subi      r5, r5, 0x1324
	  crclr     6, 0x6
	  bl        -0x16149C

	.loc_0x44:
	  lhz       r4, 0x0(r29)
	  li        r5, 0
	  li        r0, 0x1
	  mr        r3, r31
	  sth       r4, 0x24(r30)
	  li        r4, 0x1
	  stb       r5, 0x20(r30)
	  stb       r0, 0x21(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0xCA0(r3)
	  stfs      f0, 0x10(r30)
	  bl        -0xC257C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  mr        r3, r31
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x5598(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f2, -0x5534(r2)
	  fsubs     f4, f1, f3
	  lfs       f1, -0x557C(r2)
	  lfs       f3, 0x10(r30)
	  fdivs     f0, f4, f0
	  fmadds    f0, f2, f0, f1
	  fmuls     f0, f3, f0
	  stfs      f0, 0x10(r30)
	  stfs      f2, 0x14(r30)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x18(r30)
	  stfs      f1, 0x1C(r30)
	  bl        0x138B4
	  lhz       r0, 0x24(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x144
	  bge-      .loc_0xF8
	  cmpwi     r0, 0
	  beq-      .loc_0x19C
	  bge-      .loc_0x104
	  b         .loc_0x218

	.loc_0xF8:
	  cmpwi     r0, 0x5
	  bge-      .loc_0x218
	  b         .loc_0x1DC

	.loc_0x104:
	  lwz       r3, 0x258(r31)
	  lwz       r0, 0x0(r3)
	  ori       r0, r0, 0x10
	  stw       r0, 0x0(r3)
	  lwz       r4, 0x14(r3)
	  bl        0x22D120
	  mr        r3, r31
	  li        r4, 0x1E
	  lwz       r12, 0x0(r31)
	  li        r5, 0x1E
	  li        r6, 0
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x218

	.loc_0x144:
	  lwz       r3, 0x258(r31)
	  lwz       r0, 0x0(r3)
	  ori       r0, r0, 0x8
	  stw       r0, 0x0(r3)
	  lwz       r4, 0xC(r3)
	  bl        0x22CF3C
	  mr        r3, r31
	  li        r4, 0x3D
	  lwz       r12, 0x0(r31)
	  li        r5, 0x3D
	  li        r6, 0
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x218

	.loc_0x19C:
	  mr        r3, r31
	  li        r4, 0x1E
	  lwz       r12, 0x0(r31)
	  li        r5, 0x1E
	  li        r6, 0
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x258(r31)
	  lwz       r0, 0x0(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0x0(r3)
	  lwz       r4, 0xC(r3)
	  bl        0x22CE00
	  b         .loc_0x218

	.loc_0x1DC:
	  li        r0, 0
	  stb       r0, 0x22(r30)
	  bl        -0xC26E0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x559C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x14(r30)

	.loc_0x218:
	  lhz       r0, 0x24(r30)
	  li        r4, 0x287A
	  cmpwi     r0, 0x1
	  beq-      .loc_0x23C
	  bge-      .loc_0x248
	  cmpwi     r0, 0
	  bge-      .loc_0x244
	  b         .loc_0x248
	  b         .loc_0x248

	.loc_0x23C:
	  li        r4, 0x284B
	  b         .loc_0x248

	.loc_0x244:
	  li        r4, 0x280C

	.loc_0x248:
	  lwz       r3, 0x250(r31)
	  li        r5, 0x7
	  li        r6, 0x5A
	  li        r7, 0
	  bl        0x2D6AF4
	  lfs       f0, -0x5530(r2)
	  stfs      f0, 0x28(r30)
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
 * Address:	........
 * Size:	00017C
 */
void Game::PikiPanicState::checkDemo((Game::Piki*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8018BD1C
 * Size:	000260
 */
void Game::PikiPanicState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  stw       r29, 0x54(r1)
	  lhz       r0, 0x24(r3)
	  cmplwi    r0, 0x3
	  beq-      .loc_0x34
	  cmplwi    r0, 0x4
	  bne-      .loc_0xE0

	.loc_0x34:
	  lfs       f2, -0x5580(r2)
	  stfs      f2, 0x1E4(r31)
	  stfs      f2, 0x1E8(r31)
	  stfs      f2, 0x1EC(r31)
	  lbz       r0, 0x22(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xC0
	  bge-      .loc_0x21C
	  cmpwi     r0, 0
	  bge-      .loc_0x60
	  b         .loc_0x21C

	.loc_0x60:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x14(r30)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x14(r30)
	  lfs       f0, 0x14(r30)
	  fcmpo     cr0, f0, f2
	  cror      2, 0, 0x2
	  bne-      .loc_0x244
	  li        r0, 0x1
	  cmplwi    r31, 0
	  stb       r0, 0x22(r30)
	  mr        r6, r31
	  beq-      .loc_0x9C
	  addi      r6, r31, 0x178

	.loc_0x9C:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x20
	  li        r5, 0x20
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  b         .loc_0x244

	.loc_0xC0:
	  mr        r3, r31
	  li        r4, 0x20
	  bl        -0x4EEB8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x244
	  li        r0, 0x2
	  stb       r0, 0x22(r30)
	  b         .loc_0x244

	.loc_0xE0:
	  cmplwi    r0, 0
	  li        r29, 0
	  bne-      .loc_0xF4
	  li        r29, 0x2F
	  b         .loc_0x110

	.loc_0xF4:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x104
	  li        r29, 0x33
	  b         .loc_0x110

	.loc_0x104:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x110
	  li        r29, 0x34

	.loc_0x110:
	  cmpwi     r29, 0
	  beq-      .loc_0x21C
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r29
	  bl        0x5B5A4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x21C
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x21C
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x21C
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x28(r30)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x5580(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x28(r30)
	  lfs       f1, 0x28(r30)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x21C
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r29
	  bl        0x5B510
	  lfs       f0, -0x5580(r2)
	  lis       r3, 0x8048
	  li        r0, 0
	  mr        r4, r31
	  subi      r5, r3, 0x12F8
	  stw       r0, 0x18(r1)
	  addi      r3, r1, 0x8
	  stw       r5, 0x14(r1)
	  stw       r0, 0x20(r1)
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
	  addi      r4, r1, 0x14
	  lwz       r3, -0x64AC(r13)
	  stw       r31, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x2A0A9C

	.loc_0x21C:
	  lhz       r0, 0x24(r30)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x238
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x334
	  b         .loc_0x244

	.loc_0x238:
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x68

	.loc_0x244:
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
 * Address:	8018BF7C
 * Size:	000048
 */
void Game::PikiPanicState::onKeyEvent((Game::Piki*, SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x1E
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0x2
	  li        r7, 0
	  stb       r0, 0x22(r3)
	  mr        r3, r4
	  li        r4, 0x1E
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018BFC4
 * Size:	0002BC
 */
void Game::PikiPanicState::panicRun((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f0, -0x5580(r2)
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lfs       f4, 0x18(r3)
	  fmr       f1, f4
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x34
	  fneg      f1, f4

	.loc_0x34:
	  lfs       f2, -0x552C(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x5580(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f4, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f3, 0x4(r3)
	  bge-      .loc_0x8C
	  lfs       f0, -0x5528(r2)
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0xA4

	.loc_0x8C:
	  fmuls     f0, f4, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0xA4:
	  lfs       f0, -0x5580(r2)
	  mr        r3, r31
	  stfs      f1, 0x8(r1)
	  addi      r4, r1, 0x8
	  stfs      f0, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  lfs       f1, 0x1C(r30)
	  bl        -0x4306C
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x10(r30)
	  lfs       f0, 0x54(r3)
	  lfs       f1, -0x5580(r2)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x10(r30)
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x14(r30)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x14(r30)
	  lfs       f0, 0x10(r30)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x194
	  lhz       r0, 0x24(r30)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x12C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2A4

	.loc_0x12C:
	  cmpwi     r0, 0x1
	  beq-      .loc_0x15C
	  bge-      .loc_0x144
	  cmpwi     r0, 0
	  bge-      .loc_0x150
	  b         .loc_0x170

	.loc_0x144:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x170
	  b         .loc_0x168

	.loc_0x150:
	  li        r3, 0x2
	  bl        0xA4600
	  b         .loc_0x170

	.loc_0x15C:
	  li        r3, 0x3
	  bl        0xA45F4
	  b         .loc_0x170

	.loc_0x168:
	  li        r3, 0x6
	  bl        0xA45E8

	.loc_0x170:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x18
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2A4

	.loc_0x194:
	  lfs       f0, 0x14(r30)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x2A4
	  lhz       r0, 0x24(r30)
	  li        r4, 0x287A
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1C4
	  bge-      .loc_0x1D0
	  cmpwi     r0, 0
	  bge-      .loc_0x1CC
	  b         .loc_0x1D0
	  b         .loc_0x1D0

	.loc_0x1C4:
	  li        r4, 0x284B
	  b         .loc_0x1D0

	.loc_0x1CC:
	  li        r4, 0x280C

	.loc_0x1D0:
	  lwz       r3, 0x250(r31)
	  li        r5, 0x7
	  li        r6, 0x5A
	  li        r7, 0
	  bl        0x2D6644
	  bl        -0xC2C08
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x28(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0x28(r1)
	  lfs       f0, -0x555C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmadds    f0, f0, f1, f0
	  stfs      f0, 0x14(r30)
	  bl        -0xC2C3C
	  xoris     r0, r3, 0x8000
	  lis       r3, 0x4330
	  stw       r0, 0x24(r1)
	  lwz       r0, 0x2C0(r31)
	  stw       r3, 0x20(r1)
	  lfd       f1, -0x5588(r2)
	  rlwinm    r3,r0,1,31,31
	  lfd       f0, 0x20(r1)
	  rlwinm    r0,r0,0,31,31
	  lfs       f2, -0x5598(r2)
	  xor       r0, r0, r3
	  fsubs     f3, f0, f1
	  sub       r0, r0, r3
	  lfs       f1, -0x5518(r2)
	  cmpwi     r0, 0x1
	  lfs       f0, -0x551C(r2)
	  fdivs     f4, f3, f2
	  lfs       f2, -0x5520(r2)
	  lfs       f3, -0x5524(r2)
	  fmadds    f0, f1, f4, f0
	  fmuls     f0, f2, f0
	  fmuls     f1, f3, f0
	  bne-      .loc_0x27C
	  fneg      f1, f1

	.loc_0x27C:
	  lfs       f0, 0x18(r30)
	  fadds     f0, f0, f1
	  stfs      f0, 0x18(r30)
	  lfs       f1, 0x18(r30)
	  bl        0x285980
	  stfs      f1, 0x18(r30)
	  lfs       f0, -0x5514(r2)
	  lfs       f1, 0x1C(r30)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x1C(r30)

	.loc_0x2A4:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018C280
 * Size:	0002D4
 */
void Game::PikiPanicState::panicLobster((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lbz       r0, 0x21(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1D8
	  li        r0, 0
	  stb       r0, 0x21(r30)
	  lfs       f30, 0x1FC(r31)
	  bl        -0xC2D24
	  xoris     r0, r3, 0x8000
	  lis       r3, 0x4330
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2C0(r31)
	  stw       r3, 0x10(r1)
	  lfd       f1, -0x5588(r2)
	  rlwinm    r3,r0,1,31,31
	  lfd       f0, 0x10(r1)
	  rlwinm    r0,r0,0,31,31
	  lfs       f2, -0x5598(r2)
	  xor       r0, r0, r3
	  fsubs     f3, f0, f1
	  sub       r0, r0, r3
	  lfs       f1, -0x5518(r2)
	  cmpwi     r0, 0x1
	  lfs       f0, -0x5594(r2)
	  fdivs     f4, f3, f2
	  lfs       f2, -0x5520(r2)
	  lfs       f3, -0x5524(r2)
	  fmadds    f0, f1, f4, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  bne-      .loc_0xA8
	  fneg      f0, f0

	.loc_0xA8:
	  fadds     f30, f30, f0
	  fmr       f1, f30
	  bl        0x2858A0
	  fmr       f31, f1
	  bl        -0xC2D98
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x18(r1)
	  lfs       f2, -0x5598(r2)
	  lfd       f0, 0x18(r1)
	  lfs       f1, -0x550C(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x5510(r2)
	  fdivs     f2, f3, f2
	  fmadds    f30, f1, f2, f0
	  bl        -0xC2DCC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  fmr       f4, f31
	  lfs       f0, -0x5580(r2)
	  stw       r0, 0x20(r1)
	  lfd       f1, -0x5588(r2)
	  fcmpo     cr0, f31, f0
	  lfd       f0, 0x20(r1)
	  lfs       f2, -0x5598(r2)
	  fsubs     f3, f0, f1
	  lfs       f1, -0x5560(r2)
	  lfs       f0, -0x5508(r2)
	  fdivs     f2, f3, f2
	  fmadds    f3, f1, f2, f0
	  bge-      .loc_0x134
	  fneg      f4, f31

	.loc_0x134:
	  lfs       f2, -0x552C(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x5580(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f4, f2
	  fcmpo     cr0, f31, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f1, f30, f0
	  bge-      .loc_0x190
	  lfs       f0, -0x5528(r2)
	  fmuls     f0, f31, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x1A8

	.loc_0x190:
	  fmuls     f0, f31, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x1A8:
	  fmuls     f0, f30, f0
	  stfs      f31, 0x1FC(r31)
	  stfs      f0, 0x200(r31)
	  stfs      f3, 0x204(r31)
	  stfs      f1, 0x208(r31)
	  lhz       r0, 0x24(r30)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x1D8
	  mr        r3, r31
	  li        r4, 0x2850
	  li        r5, 0x1
	  bl        -0x43B88

	.loc_0x1D8:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x10(r30)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x5580(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x10(r30)
	  lfs       f1, 0x10(r30)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2AC
	  lhz       r0, 0x24(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x230
	  bge-      .loc_0x218
	  cmpwi     r0, 0
	  bge-      .loc_0x224
	  b         .loc_0x244

	.loc_0x218:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x244
	  b         .loc_0x23C

	.loc_0x224:
	  li        r3, 0x2
	  bl        0xA4270
	  b         .loc_0x244

	.loc_0x230:
	  li        r3, 0x3
	  bl        0xA4264
	  b         .loc_0x244

	.loc_0x23C:
	  li        r3, 0x6
	  bl        0xA4258

	.loc_0x244:
	  lhz       r0, 0x24(r30)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x28C
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x8(r1)
	  li        r0, 0x3E
	  mr        r3, r30
	  mr        r4, r31
	  stb       r5, 0xC(r1)
	  addi      r6, r1, 0x8
	  li        r5, 0x18
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2AC

	.loc_0x28C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x18
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2AC:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018C554
 * Size:	0000E4
 */
void Game::PikiPanicState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  li        r4, 0x1
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x28C(r30)
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x18
	  beq-      .loc_0xCC
	  lwz       r31, 0x258(r30)
	  mr        r3, r31
	  bl        0x22C550
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0x7C
	  rlwinm    r0,r3,0,30,28
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  lwz       r4, 0xC(r31)
	  bl        0x22C5F8
	  li        r0, 0x3C
	  stw       r0, 0x24(r31)
	  lwz       r3, 0xC(r31)
	  bl        0x22B004

	.loc_0x7C:
	  lwz       r31, 0x258(r30)
	  mr        r3, r31
	  bl        0x22C75C
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0xA4
	  rlwinm    r0,r3,0,28,26
	  stw       r0, 0x0(r31)
	  lwz       r3, 0x14(r31)
	  bl        0x22B244

	.loc_0xA4:
	  lwz       r31, 0x258(r30)
	  mr        r3, r31
	  bl        0x22C590
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0xCC
	  rlwinm    r0,r3,0,29,27
	  stw       r0, 0x0(r31)
	  lwz       r3, 0xC(r31)
	  bl        0x22B010

	.loc_0xCC:
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
 * Address:	8018C638
 * Size:	00000C
 */
void Game::PikiPanicState::bounceCallback((Game::Piki*, Sys::Triangle*))
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stb       r0, 0x21(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018C644
 * Size:	00011C
 */
void Game::PikiPanicState::onFlute((Game::Piki*, Game::Navi*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stb       r0, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x24(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xA4
	  bge-      .loc_0x58
	  cmpwi     r0, 0
	  bge-      .loc_0x64
	  b         .loc_0x104

	.loc_0x58:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x104
	  b         .loc_0xD0

	.loc_0x64:
	  lwz       r31, 0x258(r31)
	  mr        r3, r31
	  bl        0x22C43C
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0x104
	  rlwinm    r0,r3,0,30,28
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  lwz       r4, 0xC(r31)
	  bl        0x22C4E4
	  li        r0, 0x3C
	  stw       r0, 0x24(r31)
	  lwz       r3, 0xC(r31)
	  bl        0x22AEF0
	  b         .loc_0x104

	.loc_0xA4:
	  lwz       r31, 0x258(r31)
	  mr        r3, r31
	  bl        0x22C644
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x104
	  rlwinm    r0,r3,0,28,26
	  stw       r0, 0x0(r31)
	  lwz       r3, 0x14(r31)
	  bl        0x22B12C
	  b         .loc_0x104

	.loc_0xD0:
	  mr        r3, r31
	  li        r4, 0x5A
	  bl        -0x43250
	  lwz       r31, 0x258(r31)
	  mr        r3, r31
	  bl        0x22C468
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0x104
	  rlwinm    r0,r3,0,29,27
	  stw       r0, 0x0(r31)
	  lwz       r3, 0xC(r31)
	  bl        0x22AEE8

	.loc_0x104:
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
 * Address:	8018C760
 * Size:	000004
 */
void Game::PikiDeadState::init((Game::Piki*, Game::StateArg*)) { }

/*
 * --INFO--
 * Address:	8018C764
 * Size:	000004
 */
void Game::PikiDeadState::exec((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	8018C768
 * Size:	000010
 */
void Game::PikiDyingState::transittable((int))
{
	/*
	.loc_0x0:
	  subfic    r0, r4, 0x19
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018C778
 * Size:	0000B4
 */
void Game::PikiDyingState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0x5
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r6, 0x10(r3)
	  stb       r0, 0x14(r3)
	  beq-      .loc_0x4C
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x10(r3)
	  lbz       r0, 0x4(r5)
	  stb       r0, 0x14(r3)
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x4C
	  stw       r6, 0x10(r3)

	.loc_0x4C:
	  cmplwi    r31, 0
	  mr        r6, r31
	  beq-      .loc_0x5C
	  addi      r6, r31, 0x178

	.loc_0x5C:
	  lwz       r12, 0x0(r31)
	  li        r7, 0
	  lwz       r4, 0x10(r3)
	  mr        r3, r31
	  lwz       r12, 0x208(r12)
	  mr        r5, r4
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5580(r2)
	  li        r4, 0x280D
	  li        r5, 0
	  li        r6, 0
	  stfs      f0, 0x1E4(r31)
	  stfs      f0, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	  lwz       r3, 0x250(r31)
	  bl        0x2D5D6C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018C82C
 * Size:	0000DC
 */
void Game::PikiDyingState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x5580(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  stfs      f0, 0x1E4(r4)
	  stfs      f0, 0x1E8(r4)
	  stfs      f0, 0x1EC(r4)
	  lwz       r4, 0x10(r30)
	  bl        -0x4F934
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  lbz       r0, 0x14(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x98
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5D30
	  lis       r5, 0x8000
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x1160
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x517CC
	  b         .loc_0xC4

	.loc_0x98:
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  lis       r4, 0x8048
	  subi      r4, r4, 0x12EC
	  bl        0x2A1CE0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC4

	.loc_0xB8:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x517FC

	.loc_0xC4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018C908
 * Size:	000004
 */
void Game::PikiDyingState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	8018C90C
 * Size:	000064
 */
void Game::PikiDyingState::onKeyEvent((Game::Piki*, SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x14(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  lis       r5, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r5, 0x5D30
	  lis       r5, 0x8000
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x1160
	  mr        r3, r4
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x5185C
	  b         .loc_0x54

	.loc_0x48:
	  mr        r3, r4
	  li        r4, 0
	  bl        -0x5186C

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018C970
 * Size:	000010
 */
void Game::PikiDenkiDyingState::soft_transittable((int))
{
	/*
	.loc_0x0:
	  subfic    r0, r4, 0x19
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018C980
 * Size:	000010
 */
void Game::PikiDenkiDyingState::transittable((int))
{
	/*
	.loc_0x0:
	  subfic    r0, r4, 0x19
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018C990
 * Size:	000084
 */
void Game::PikiDenkiDyingState::init((Game::Piki*, Game::StateArg*))
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
	  mr        r6, r31
	  beq-      .loc_0x28
	  addi      r6, r6, 0x178

	.loc_0x28:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x5
	  li        r5, 0x5
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  lfs       f1, -0x559C(r2)
	  lfs       f0, -0x5580(r2)
	  stfs      f1, 0x10(r30)
	  stfs      f0, 0x1E4(r31)
	  stfs      f0, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	  stfs      f0, 0x200(r31)
	  stfs      f0, 0x204(r31)
	  stfs      f0, 0x208(r31)
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
 * Address:	8018CA14
 * Size:	000138
 */
void Game::PikiDenkiDyingState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lfs       f2, -0x5580(r2)
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r4
	  stfs      f2, 0x1E4(r4)
	  stfs      f2, 0x1E8(r4)
	  stfs      f2, 0x1EC(r4)
	  stfs      f2, 0x200(r4)
	  stfs      f2, 0x204(r4)
	  stfs      f2, 0x208(r4)
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x10(r3)
	  lfs       f0, 0x54(r5)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x10(r3)
	  fcmpo     cr0, f0, f2
	  cror      2, 0, 0x2
	  bne-      .loc_0x124
	  lis       r3, 0x804B
	  li        r7, 0
	  subi      r0, r3, 0x5808
	  lis       r5, 0x804E
	  lis       r3, 0x8051
	  lfsu      f2, 0x41E4(r3)
	  addi      r11, r5, 0x6A50
	  stw       r0, 0x24(r1)
	  lfs       f1, 0x4(r3)
	  lis       r5, 0x804B
	  lfs       f0, 0x8(r3)
	  subi      r0, r5, 0x5814
	  lis       r6, 0x804B
	  li        r10, 0x165
	  li        r9, 0x166
	  li        r8, 0x167
	  stw       r11, 0x24(r1)
	  addi      r5, r6, 0x40F0
	  addi      r3, r1, 0x8
	  sth       r10, 0x28(r1)
	  sth       r9, 0x2A(r1)
	  sth       r8, 0x2C(r1)
	  stw       r7, 0x30(r1)
	  stw       r7, 0x34(r1)
	  stw       r7, 0x38(r1)
	  stw       r5, 0x24(r1)
	  stw       r0, 0x14(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r3, r1, 0x24
	  lfs       f1, 0xC(r1)
	  addi      r4, r1, 0x14
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  bl        0x2225AC
	  li        r3, 0x4
	  bl        0xA3C00
	  mr        r3, r31
	  li        r4, 0x284C
	  li        r5, 0x1
	  bl        -0x4425C
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x51A44

	.loc_0x124:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018CB4C
 * Size:	000004
 */
void Game::PikiDenkiDyingState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	8018CB50
 * Size:	000010
 */
void Game::PikiPressedState::soft_transittable((int))
{
	/*
	.loc_0x0:
	  subfic    r0, r4, 0x19
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018CB60
 * Size:	000010
 */
void Game::PikiPressedState::transittable((int))
{
	/*
	.loc_0x0:
	  subfic    r0, r4, 0x19
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018CB70
 * Size:	0000C8
 */
void Game::PikiPressedState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f1, -0x5504(r2)
	  stw       r0, 0x44(r1)
	  lfs       f0, -0x5558(r2)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  lwz       r5, 0xC0(r4)
	  li        r4, 0
	  lfs       f2, 0x340(r5)
	  stfs      f2, 0x168(r31)
	  stfs      f2, 0x16C(r31)
	  stfs      f1, 0x170(r31)
	  stfs      f0, 0x10(r3)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1E0(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x1FC(r31)
	  mr        r4, r31
	  lfs       f1, -0x5500(r2)
	  addi      r3, r1, 0x8
	  lfs       f0, -0x5580(r2)
	  stfs      f1, 0x20(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xC(r1)
	  addi      r3, r31, 0x138
	  lfs       f0, -0x5530(r2)
	  addi      r4, r31, 0x168
	  lfs       f3, 0x8(r1)
	  addi      r5, r1, 0x20
	  lfs       f1, 0x10(r1)
	  fadds     f0, f2, f0
	  stfs      f2, 0x18(r1)
	  addi      r6, r1, 0x14
	  stfs      f3, 0x14(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x18(r1)
	  bl        0x29B6B8
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018CC38
 * Size:	00010C
 */
void Game::PikiPressedState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f1, -0x5500(r2)
	  stw       r0, 0x44(r1)
	  lfs       f0, -0x5580(r2)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  lfs       f2, 0x1FC(r4)
	  stfs      f1, 0x20(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xC(r1)
	  addi      r3, r31, 0x138
	  lfs       f0, -0x5530(r2)
	  addi      r4, r31, 0x168
	  lfs       f3, 0x8(r1)
	  addi      r5, r1, 0x20
	  lfs       f1, 0x10(r1)
	  fadds     f0, f2, f0
	  stfs      f2, 0x18(r1)
	  addi      r6, r1, 0x14
	  stfs      f3, 0x14(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x18(r1)
	  bl        0x29B624
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x10(r30)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x5580(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x10(r30)
	  lfs       f1, 0x10(r30)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xD8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xCC
	  li        r3, 0
	  bl        0xA3A18

	.loc_0xCC:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x51C1C

	.loc_0xD8:
	  lfs       f0, -0x5580(r2)
	  stfs      f0, 0x200(r31)
	  stfs      f0, 0x204(r31)
	  stfs      f0, 0x208(r31)
	  stfs      f0, 0x1E4(r31)
	  stfs      f0, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018CD44
 * Size:	000034
 */
void Game::PikiPressedState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1E0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018CD78
 * Size:	000084
 */
void Game::PikiLookAtState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  bl        -0xC37F4
	  xoris     r0, r3, 0x8000
	  lis       r3, 0x4330
	  stw       r0, 0xC(r1)
	  li        r0, 0
	  lfd       f3, -0x5588(r2)
	  li        r4, 0x2801
	  stw       r3, 0x8(r1)
	  li        r5, 0x5A
	  lfs       f1, -0x5598(r2)
	  li        r6, 0
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x559C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x14(r30)
	  sth       r0, 0x18(r30)
	  lwz       r3, 0x250(r31)
	  bl        0x2D57A0
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018CDFC
 * Size:	000004
 */
void Game::PikiLookAtState::onFlute((Game::Piki*, Game::Navi*)) { }

/*
 * --INFO--
 * Address:	8018CE00
 * Size:	000180
 */
void Game::PikiLookAtState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f2, -0x5580(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stfs      f2, 0x1E4(r4)
	  stfs      f2, 0x1E8(r4)
	  stfs      f2, 0x1EC(r4)
	  lhz       r0, 0x18(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xB4
	  bge-      .loc_0x48
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0x168

	.loc_0x48:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x168
	  b         .loc_0xD4

	.loc_0x54:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x14(r30)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x14(r30)
	  lfs       f0, 0x14(r30)
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x168
	  cmplwi    r30, 0
	  stfs      f2, 0x14(r30)
	  mr        r6, r30
	  beq-      .loc_0x88
	  lwz       r6, 0x10(r30)

	.loc_0x88:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x20
	  li        r5, 0x20
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  sth       r0, 0x18(r30)
	  b         .loc_0x168

	.loc_0xB4:
	  mr        r3, r31
	  li        r4, 0x20
	  bl        -0x4FF90
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x168
	  li        r0, 0x2
	  sth       r0, 0x18(r30)
	  b         .loc_0x168

	.loc_0xD4:
	  lwz       r8, 0x2C4(r31)
	  cmplwi    r8, 0
	  beq-      .loc_0x150
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r0, r4, 0x530
	  lis       r4, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r7, r4, 0x524
	  lis       r4, 0x804B
	  li        r0, 0x1
	  stb       r3, 0x11(r1)
	  addi      r6, r4, 0xD44
	  addi      r5, r1, 0x8
	  li        r4, 0
	  stw       r7, 0x8(r1)
	  stw       r8, 0xC(r1)
	  stw       r6, 0x8(r1)
	  stb       r3, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x294(r31)
	  bl        0xA06C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x168

	.loc_0x150:
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x168:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018CF80
 * Size:	000028
 */
void Game::PikiLookAtState::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x1C
	  bgelr-
	  cmpwi     r0, 0x4
	  bgelr-
	  blr

	.loc_0x1C:
	  li        r0, 0x2
	  sth       r0, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018CFA8
 * Size:	000004
 */
void Game::PikiLookAtState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	8018CFAC
 * Size:	0001FC
 */
void Game::PikiAutoNukiState::init((Game::Piki*, Game::StateArg*))
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
	  bl        -0xC3A28
	  xoris     r0, r3, 0x8000
	  lis       r3, 0x4330
	  stw       r0, 0x64(r1)
	  cmplwi    r31, 0
	  lfd       f3, -0x5588(r2)
	  li        r0, 0
	  stw       r3, 0x60(r1)
	  mr        r6, r31
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0x60(r1)
	  lfs       f0, -0x555C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x10(r30)
	  sth       r0, 0x14(r30)
	  beq-      .loc_0x68
	  addi      r6, r31, 0x178

	.loc_0x68:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x30
	  li        r5, 0x30
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  mr        r4, r31
	  sth       r0, 0x14(r30)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x14(r1)
	  mr        r3, r31
	  lfs       f2, 0x18(r1)
	  addi      r5, r1, 0x30
	  lfs       f1, 0x1C(r1)
	  li        r4, 0
	  lfs       f0, -0x5594(r2)
	  stfs      f3, 0x40(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stfs      f3, 0x30(r1)
	  stfs      f2, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  bl        -0x51550
	  cmplwi    r3, 0
	  beq-      .loc_0x1BC
	  lwz       r3, 0x40(r1)
	  lis       r5, 0x804B
	  lwz       r4, 0x44(r1)
	  subi      r10, r5, 0x5808
	  lwz       r0, 0x48(r1)
	  lis       r6, 0x804E
	  stw       r3, 0x8(r1)
	  lis       r3, 0x804B
	  subi      r5, r3, 0x5814
	  lfs       f0, -0x5538(r2)
	  li        r7, 0
	  stw       r4, 0xC(r1)
	  lfs       f3, 0x8(r1)
	  lis       r4, 0x804F
	  stw       r0, 0x10(r1)
	  lis       r3, 0x804B
	  lfs       f2, 0xC(r1)
	  li        r9, 0x159
	  lfs       f1, 0x10(r1)
	  li        r8, 0x15A
	  stw       r10, 0x20(r1)
	  addi      r10, r6, 0x6A64
	  subi      r6, r4, 0x7A18
	  subi      r0, r3, 0x5D24
	  stw       r10, 0x20(r1)
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x4C
	  stw       r5, 0x4C(r1)
	  sth       r9, 0x24(r1)
	  sth       r8, 0x26(r1)
	  stw       r7, 0x28(r1)
	  stw       r7, 0x2C(r1)
	  stw       r6, 0x20(r1)
	  stfs      f3, 0x50(r1)
	  stfs      f2, 0x54(r1)
	  stfs      f1, 0x58(r1)
	  stw       r0, 0x4C(r1)
	  stfs      f0, 0x5C(r1)
	  bl        0x23B7A8
	  lwz       r4, 0x2C4(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x1E4
	  mr        r3, r31
	  li        r5, 0x380B
	  li        r6, 0x1
	  bl        -0x447F8
	  lwz       r4, 0x2C4(r31)
	  mr        r3, r31
	  li        r5, 0x2821
	  li        r6, 0
	  bl        -0x4480C
	  b         .loc_0x1E4

	.loc_0x1BC:
	  lwz       r0, 0x2C4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x1E4
	  addi      r3, r1, 0x40
	  bl        0x22A634
	  lwz       r4, 0x2C4(r31)
	  mr        r3, r31
	  li        r5, 0x2821
	  li        r6, 0
	  bl        -0x44838

	.loc_0x1E4:
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
 * Address:	8018D1A8
 * Size:	000300
 */
void Game::PikiAutoNukiState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  mr        r31, r4
	  stw       r30, 0x78(r1)
	  mr        r30, r3
	  lhz       r0, 0x14(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1FC
	  bge-      .loc_0x38
	  cmpwi     r0, 0
	  bge-      .loc_0x44
	  b         .loc_0x2E8

	.loc_0x38:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x2E8
	  b         .loc_0x21C

	.loc_0x44:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x10(r30)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x5580(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x10(r30)
	  lfs       f1, 0x10(r30)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2E8
	  cmplwi    r31, 0
	  stfs      f0, 0x10(r30)
	  mr        r6, r31
	  beq-      .loc_0x7C
	  addi      r6, r6, 0x178

	.loc_0x7C:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x30
	  li        r5, 0x30
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  mr        r4, r31
	  sth       r0, 0x14(r30)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x14(r1)
	  mr        r3, r31
	  lfs       f2, 0x18(r1)
	  addi      r5, r1, 0x3C
	  lfs       f1, 0x1C(r1)
	  li        r4, 0
	  lfs       f0, -0x5594(r2)
	  stfs      f3, 0x4C(r1)
	  stfs      f2, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f3, 0x3C(r1)
	  stfs      f2, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  bl        -0x51760
	  cmplwi    r3, 0
	  beq-      .loc_0x1D0
	  lwz       r3, 0x4C(r1)
	  lis       r5, 0x804B
	  lwz       r4, 0x50(r1)
	  subi      r10, r5, 0x5808
	  lwz       r0, 0x54(r1)
	  lis       r6, 0x804E
	  stw       r3, 0x8(r1)
	  lis       r3, 0x804B
	  subi      r5, r3, 0x5814
	  lfs       f0, -0x5538(r2)
	  li        r7, 0
	  stw       r4, 0xC(r1)
	  lfs       f3, 0x8(r1)
	  lis       r4, 0x804F
	  stw       r0, 0x10(r1)
	  lis       r3, 0x804B
	  lfs       f2, 0xC(r1)
	  li        r9, 0x159
	  lfs       f1, 0x10(r1)
	  li        r8, 0x15A
	  stw       r10, 0x2C(r1)
	  addi      r10, r6, 0x6A64
	  subi      r6, r4, 0x7A18
	  subi      r0, r3, 0x5D24
	  stw       r10, 0x2C(r1)
	  addi      r3, r1, 0x2C
	  addi      r4, r1, 0x58
	  stw       r5, 0x58(r1)
	  sth       r9, 0x30(r1)
	  sth       r8, 0x32(r1)
	  stw       r7, 0x34(r1)
	  stw       r7, 0x38(r1)
	  stw       r6, 0x2C(r1)
	  stfs      f3, 0x5C(r1)
	  stfs      f2, 0x60(r1)
	  stfs      f1, 0x64(r1)
	  stw       r0, 0x58(r1)
	  stfs      f0, 0x68(r1)
	  bl        0x23B598
	  lwz       r4, 0x2C4(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x2E8
	  mr        r3, r31
	  li        r5, 0x380B
	  li        r6, 0x1
	  bl        -0x44A08
	  lwz       r4, 0x2C4(r31)
	  mr        r3, r31
	  li        r5, 0x2821
	  li        r6, 0
	  bl        -0x44A1C
	  b         .loc_0x2E8

	.loc_0x1D0:
	  lwz       r0, 0x2C4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x2E8
	  addi      r3, r1, 0x4C
	  bl        0x22A424
	  lwz       r4, 0x2C4(r31)
	  mr        r3, r31
	  li        r5, 0x2821
	  li        r6, 0
	  bl        -0x44A48
	  b         .loc_0x2E8

	.loc_0x1FC:
	  mr        r3, r31
	  li        r4, 0x30
	  bl        -0x50480
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2E8
	  li        r0, 0x2
	  sth       r0, 0x14(r30)
	  b         .loc_0x2E8

	.loc_0x21C:
	  lwz       r8, 0x2C4(r31)
	  cmplwi    r8, 0
	  beq-      .loc_0x278
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r0, r4, 0x530
	  lis       r4, 0x804B
	  stw       r0, 0x20(r1)
	  addi      r7, r4, 0x524
	  lis       r4, 0x804B
	  li        r0, 0x1
	  stb       r3, 0x29(r1)
	  addi      r6, r4, 0xD44
	  addi      r5, r1, 0x20
	  li        r4, 0
	  stw       r7, 0x20(r1)
	  stw       r8, 0x24(r1)
	  stw       r6, 0x20(r1)
	  stb       r3, 0x28(r1)
	  stb       r0, 0x29(r1)
	  lwz       r3, 0x294(r31)
	  bl        0x9B7C
	  b         .loc_0x288

	.loc_0x278:
	  lwz       r3, 0x294(r31)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x9B68

	.loc_0x288:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r4, 0x2B8(r31)
	  cmpwi     r4, 0
	  blt-      .loc_0x2E8
	  cmpwi     r4, 0x4
	  bgt-      .loc_0x2E8
	  lwz       r3, -0x6B70(r13)
	  bl        0x59C40
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2E8
	  lwz       r3, -0x6C18(r13)
	  mr        r4, r31
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2E8:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018D4A8
 * Size:	000028
 */
void Game::PikiAutoNukiState::onKeyEvent((Game::Piki*,
                                          SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1C(r5)
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x1C
	  bgelr-
	  cmpwi     r0, 0x2
	  beqlr-
	  blr

	.loc_0x1C:
	  li        r0, 0x2
	  sth       r0, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018D4D0
 * Size:	000004
 */
void Game::PikiAutoNukiState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	8018D4D4
 * Size:	000064
 */
void Game::PikiGoHangState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x1D
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  li        r7, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x1D
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB4(r12)
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
 * Address:	8018D538
 * Size:	0001C8
 */
void Game::PikiGoHangState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  lwz       r5, 0x2C4(r4)
	  cmplwi    r5, 0
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1AC

	.loc_0x48:
	  lis       r4, 0x7268
	  lwz       r3, 0x114(r5)
	  addi      r4, r4, 0x6E64
	  bl        -0x57748
	  mr        r4, r30
	  mr        r31, r3
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x50(r31)
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x54(r31)
	  fsubs     f4, f1, f0
	  lfs       f0, 0x10(r1)
	  lfs       f1, 0x4C(r31)
	  fsubs     f5, f2, f0
	  lfs       f0, 0x8(r1)
	  fmuls     f2, f4, f4
	  fsubs     f3, f1, f0
	  lfs       f0, -0x5580(r2)
	  fmuls     f6, f5, f5
	  fmadds    f1, f3, f3, f2
	  fadds     f2, f6, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xC4
	  ble-      .loc_0xC8
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0xC8

	.loc_0xC4:
	  fmr       f2, f0

	.loc_0xC8:
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xEC
	  lfs       f0, -0x557C(r2)
	  fdivs     f0, f0, f2
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  fmuls     f5, f5, f0
	  b         .loc_0xF0

	.loc_0xEC:
	  fmr       f2, f0

	.loc_0xF0:
	  lwz       r3, -0x6D20(r13)
	  lfs       f1, -0x5530(r2)
	  lwz       r3, 0xC8(r3)
	  lfs       f8, -0x557C(r2)
	  lfs       f0, 0x660(r3)
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x114
	  fmr       f8, f1

	.loc_0x114:
	  lwz       r3, 0x2C4(r30)
	  lwz       r4, 0xC0(r30)
	  lfs       f0, 0x204(r3)
	  lfs       f6, 0x208(r3)
	  fmuls     f7, f0, f0
	  lfs       f1, 0x200(r3)
	  lfs       f2, 0x2C8(r4)
	  fmuls     f6, f6, f6
	  lfs       f0, -0x5580(r2)
	  fmadds    f1, f1, f1, f7
	  fmuls     f7, f8, f2
	  fadds     f1, f6, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x15C
	  ble-      .loc_0x160
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x160

	.loc_0x15C:
	  fmr       f1, f0

	.loc_0x160:
	  fadds     f7, f7, f1
	  fmuls     f2, f3, f7
	  fmuls     f1, f4, f7
	  fmuls     f0, f5, f7
	  stfs      f2, 0x1E4(r30)
	  stfs      f1, 0x1E8(r30)
	  stfs      f0, 0x1EC(r30)
	  lwz       r3, 0x2C4(r30)
	  bl        -0x4C274
	  cmpwi     r3, 0x6
	  beq-      .loc_0x1AC
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1AC:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018D700
 * Size:	000034
 */
void Game::PikiGoHangState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018D734
 * Size:	000004
 */
void Game::PikiHangedState::onKeyEvent((SysShape::KeyEvent const&)) { }

/*
 * --INFO--
 * Address:	8018D738
 * Size:	0000C4
 */
void Game::PikiHangedState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x2838
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x44E94
	  cmplwi    r30, 0
	  mr        r6, r30
	  beq-      .loc_0x3C
	  lwz       r6, 0x10(r30)

	.loc_0x3C:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x24
	  li        r5, 0x24
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5580(r2)
	  stfs      f0, 0x200(r31)
	  stfs      f0, 0x204(r31)
	  stfs      f0, 0x208(r31)
	  stfs      f0, 0x1E4(r31)
	  stfs      f0, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	  lwz       r4, 0x2C4(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x94
	  mr        r3, r31
	  li        r5, 0x2802
	  li        r6, 0
	  bl        -0x44E74

	.loc_0x94:
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8018D7FC
 * Size:	00006C
 */
void Game::PikiHangedState::exec((Game::Piki*))
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
	  lwz       r3, 0x2C4(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  bl        -0x4C3E0
	  cmpwi     r3, 0x6
	  beq-      .loc_0x54
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
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
 * Address:	8018D868
 * Size:	000034
 */
void Game::PikiHangedState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018D89C
 * Size:	00006C
 */
void Game::PikiHangedState::ignoreAtari((Game::Piki*, Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54

	.loc_0x4C:
	  li        r3, 0x1
	  b         .loc_0x58

	.loc_0x54:
	  li        r3, 0

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018D908
 * Size:	000004
 */
void Game::PikiWaterHangedState::onKeyEvent((SysShape::KeyEvent const&)) { }

/*
 * --INFO--
 * Address:	8018D90C
 * Size:	0000C4
 */
void Game::PikiWaterHangedState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x14(r30)
	  b         .loc_0x38

	.loc_0x30:
	  li        r0, 0
	  stw       r0, 0x14(r30)

	.loc_0x38:
	  mr        r3, r31
	  li        r4, 0x2838
	  li        r5, 0
	  bl        -0x45084
	  cmplwi    r30, 0
	  mr        r6, r30
	  beq-      .loc_0x58
	  lwz       r6, 0x10(r30)

	.loc_0x58:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x24
	  li        r5, 0x24
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5580(r2)
	  mr        r3, r31
	  li        r4, 0
	  stfs      f0, 0x200(r31)
	  stfs      f0, 0x204(r31)
	  stfs      f0, 0x208(r31)
	  stfs      f0, 0x1E4(r31)
	  stfs      f0, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8018D9D0
 * Size:	0000A8
 */
void Game::PikiWaterHangedState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, 0x14(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  mr        r3, r0
	  bl        -0x45BB8
	  mr        r31, r3
	  lwz       r3, 0x14(r29)
	  bl        -0x44AD8
	  cmpwi     r31, 0xC
	  bne-      .loc_0x50
	  cmpwi     r3, 0
	  beq-      .loc_0x8C

	.loc_0x50:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x8C

	.loc_0x74:
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x8C:
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
 * Address:	8018DA78
 * Size:	000034
 */
void Game::PikiWaterHangedState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018DAAC
 * Size:	00006C
 */
void Game::PikiWaterHangedState::ignoreAtari((Game::Piki*, Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54

	.loc_0x4C:
	  li        r3, 0x1
	  b         .loc_0x58

	.loc_0x54:
	  li        r3, 0

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018DB18
 * Size:	000070
 */
void Game::PikiHipDropState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x5580(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lfs       f0, -0x553C(r2)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  stfs      f1, 0x208(r4)
	  stfs      f1, 0x200(r4)
	  sth       r0, 0x14(r3)
	  stfs      f0, 0x10(r3)
	  stfs      f1, 0x204(r4)
	  lwz       r31, 0x258(r4)
	  mr        r3, r31
	  bl        0x22AED4
	  lwz       r4, 0x10(r31)
	  mr        r3, r31
	  bl        0x22B0D4
	  li        r0, 0x1
	  stb       r0, 0x135(r30)
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
 * Address:	8018DB88
 * Size:	0003C8
 */
void Game::PikiHipDropState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stfd      f31, 0x110(r1)
	  psq_st    f31,0x118(r1),0,0
	  stfd      f30, 0x100(r1)
	  psq_st    f30,0x108(r1),0,0
	  stfd      f29, 0xF0(r1)
	  psq_st    f29,0xF8(r1),0,0
	  stfd      f28, 0xE0(r1)
	  psq_st    f28,0xE8(r1),0,0
	  stfd      f27, 0xD0(r1)
	  psq_st    f27,0xD8(r1),0,0
	  stfd      f26, 0xC0(r1)
	  psq_st    f26,0xC8(r1),0,0
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  stw       r29, 0xB4(r1)
	  stw       r28, 0xB0(r1)
	  mr        r28, r3
	  mr        r29, r4
	  lhz       r0, 0x14(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x2C8
	  lfs       f2, -0x5580(r2)
	  stfs      f2, 0x204(r29)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x10(r28)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r28)
	  lfs       f0, 0x10(r28)
	  fcmpo     cr0, f0, f2
	  cror      2, 0, 0x2
	  bne-      .loc_0x378
	  lwz       r5, -0x6C10(r13)
	  addi      r3, r1, 0x2C
	  lfs       f1, -0x556C(r2)
	  li        r31, 0
	  lfs       f0, 0x28(r5)
	  lfs       f30, -0x54FC(r2)
	  fneg      f0, f0
	  fmuls     f0, f1, f0
	  stfs      f0, 0x204(r29)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x2C(r1)
	  addi      r3, r1, 0x48
	  lfs       f29, 0x34(r1)
	  addi      r4, r1, 0x38
	  lfs       f1, 0x30(r1)
	  lfs       f0, -0x5544(r2)
	  stfs      f31, 0x38(r1)
	  stfs      f1, 0x3C(r1)
	  stfs      f29, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  bl        0xA0730
	  li        r0, 0x1
	  addi      r3, r1, 0x68
	  stw       r0, 0x5C(r1)
	  addi      r4, r1, 0x48
	  bl        0xA075C
	  addi      r3, r1, 0x68
	  bl        0xA07D0
	  b         .loc_0x204

	.loc_0x10C:
	  addi      r3, r1, 0x68
	  bl        0xA08AC
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1FC
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1FC
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1FC
	  mr        r4, r30
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r29)
	  lfs       f28, 0x20(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x24(r1)
	  lfs       f26, 0x28(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x18(r1)
	  lfs       f2, 0x14(r1)
	  fsubs     f4, f27, f0
	  lfs       f1, 0x1C(r1)
	  fsubs     f3, f28, f2
	  lfs       f0, -0x5580(r2)
	  fsubs     f2, f26, f1
	  fmuls     f1, f4, f4
	  fmuls     f2, f2, f2
	  fmadds    f1, f3, f3, f1
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1E8
	  ble-      .loc_0x1EC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x1EC

	.loc_0x1E8:
	  fmr       f1, f0

	.loc_0x1EC:
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x1FC
	  fmr       f30, f1
	  mr        r31, r30

	.loc_0x1FC:
	  addi      r3, r1, 0x68
	  bl        0xA0778

	.loc_0x204:
	  addi      r3, r1, 0x68
	  bl        0xA07A4
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x10C
	  cmplwi    r31, 0
	  beq-      .loc_0x298
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x10(r1)
	  lfs       f1, 0x8(r1)
	  fsubs     f4, f0, f29
	  lfs       f0, -0x5580(r2)
	  fsubs     f3, f1, f31
	  fmuls     f1, f4, f4
	  fmadds    f2, f3, f3, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x268
	  ble-      .loc_0x26C
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x26C

	.loc_0x268:
	  fmr       f2, f0

	.loc_0x26C:
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x298
	  lfs       f0, -0x557C(r2)
	  lfs       f1, -0x5510(r2)
	  fdivs     f0, f0, f2
	  fmuls     f0, f1, f0
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  stfs      f3, 0x200(r29)
	  stfs      f4, 0x208(r29)

	.loc_0x298:
	  li        r0, 0x1
	  mr        r3, r29
	  sth       r0, 0x14(r28)
	  li        r4, 0x9
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x0(r29)
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x378

	.loc_0x2C8:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x304
	  lwz       r3, -0x6514(r13)
	  lfs       f2, -0x5524(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x555C(r2)
	  fmuls     f1, f2, f1
	  lfs       f2, 0x1FC(r29)
	  fdivs     f0, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x1FC(r29)
	  lfs       f1, 0x1FC(r29)
	  bl        0x283D50
	  stfs      f1, 0x1FC(r29)
	  b         .loc_0x378

	.loc_0x304:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x378
	  lfs       f2, -0x5580(r2)
	  stfs      f2, 0x1E4(r29)
	  stfs      f2, 0x1E8(r29)
	  stfs      f2, 0x1EC(r29)
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x10(r28)
	  lfs       f0, 0x54(r5)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r28)
	  lfs       f0, 0x10(r28)
	  fcmpo     cr0, f0, f2
	  cror      2, 0, 0x2
	  bne-      .loc_0x378
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  bl        0x25D24
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x378
	  lwz       r3, 0x294(r29)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x9098

	.loc_0x378:
	  psq_l     f31,0x118(r1),0,0
	  lfd       f31, 0x110(r1)
	  psq_l     f30,0x108(r1),0,0
	  lfd       f30, 0x100(r1)
	  psq_l     f29,0xF8(r1),0,0
	  lfd       f29, 0xF0(r1)
	  psq_l     f28,0xE8(r1),0,0
	  lfd       f28, 0xE0(r1)
	  psq_l     f27,0xD8(r1),0,0
	  lfd       f27, 0xD0(r1)
	  psq_l     f26,0xC8(r1),0,0
	  lfd       f26, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r29, 0xB4(r1)
	  lwz       r0, 0x124(r1)
	  lwz       r28, 0xB0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018DF50
 * Size:	000038
 */
void Game::PikiHipDropState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r3, 0x258(r4)
	  bl        0x22AD40
	  li        r0, 0
	  stb       r0, 0x135(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018DF88
 * Size:	000004
 */
void Game::PikiHipDropState::onKeyEvent((Game::Piki*,
                                         SysShape::KeyEvent const&))
{
}

/*
 * --INFO--
 * Address:	8018DF8C
 * Size:	00002C
 */
void Game::PikiHipDropState::bounceCallback((Game::Piki*, Sys::Triangle*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lhz       r0, 0x14(r3)
	  cmplwi    r0, 0x2
	  beq-      .loc_0x1C
	  bl        0x320

	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018DFB8
 * Size:	0002E0
 */
void Game::PikiHipDropState::collisionCallback((Game::Piki*, Game::CollEvent&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r5
	  stw       r30, 0x68(r1)
	  mr        r30, r4
	  stw       r29, 0x64(r1)
	  mr        r29, r3
	  stw       r28, 0x60(r1)
	  lwz       r3, 0x0(r5)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2C0
	  mr        r4, r30
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  addi      r3, r1, 0x4C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  stfs      f2, 0x4C(r1)
	  stfs      f1, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  bl        0x229658
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x4C
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        0xC573C
	  lwz       r3, -0x6960(r13)
	  addi      r5, r1, 0x4C
	  li        r4, 0x6
	  li        r6, 0x2
	  bl        0xC41E4
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD8
	  mr        r3, r30
	  li        r4, 0x284E
	  li        r5, 0
	  bl        -0x457B8
	  b         .loc_0xD8
	  b         .loc_0x2C0

	.loc_0xD8:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x268
	  lwz       r7, 0xC0(r30)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  lwz       r8, 0x4(r31)
	  subi      r6, r5, 0x5D00
	  lfs       f0, 0x1218(r7)
	  addi      r5, r4, 0x4DE0
	  subi      r0, r3, 0x4C98
	  mr        r4, r30
	  stw       r6, 0x3C(r1)
	  addi      r3, r1, 0x14
	  li        r28, 0
	  stw       r5, 0x3C(r1)
	  stw       r30, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  stw       r8, 0x48(r1)
	  stw       r0, 0x3C(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x18(r1)
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x188
	  lwz       r3, 0x0(r31)
	  addi      r4, r1, 0x3C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r29
	  mr        r28, r0
	  mr        r4, r30
	  bl        0x244

	.loc_0x188:
	  lwz       r5, 0x4(r31)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5D00
	  lfs       f0, -0x5594(r2)
	  lis       r3, 0x804B
	  stw       r0, 0x2C(r1)
	  subi      r0, r3, 0x4CE0
	  mr        r4, r30
	  stw       r30, 0x30(r1)
	  addi      r3, r1, 0x8
	  stw       r0, 0x2C(r1)
	  stfs      f0, 0x34(r1)
	  stw       r5, 0x38(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1F8
	  lwz       r3, 0x0(r31)
	  addi      r4, r1, 0x2C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  mr        r28, r3

	.loc_0x1F8:
	  mr        r3, r30
	  li        r4, 0x287C
	  li        r5, 0
	  bl        -0x458F0
	  rlwinm.   r0,r28,0,24,31
	  bne-      .loc_0x268
	  lwz       r3, 0x4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x268
	  bl        -0x57424
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x268
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x268
	  lwz       r4, 0x0(r31)
	  mr        r3, r30
	  lwz       r5, 0x4(r31)
	  bl        0x10CEC
	  lwz       r4, 0x0(r31)
	  mr        r3, r30
	  li        r5, 0x2805
	  li        r6, 0x1
	  bl        -0x458C8

	.loc_0x268:
	  mr        r3, r30
	  bl        -0x452F0
	  cmpwi     r3, 0x12
	  bne-      .loc_0x2C0
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x1
	  bl        0x24B54
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2C0
	  lwz       r3, 0x294(r30)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x8D20

	.loc_0x2C0:
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
 * Address:	8018E298
 * Size:	00002C
 */
void Game::PikiHipDropState::platCallback((Game::Piki*, Game::PlatEvent&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lhz       r0, 0x14(r3)
	  cmplwi    r0, 0x2
	  beq-      .loc_0x1C
	  bl        .loc_0x2C

	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x2C:
	*/
}

/*
 * --INFO--
 * Address:	8018E2C4
 * Size:	0000BC
 */
void Game::PikiHipDropState::dosin((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r3, r1, 0x14
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        0x229378
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        0xC545C
	  lwz       r3, -0x6960(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0x6
	  li        r6, 0x2
	  bl        0xC3F04
	  mr        r3, r31
	  li        r4, 0x284E
	  li        r5, 0
	  bl        -0x45A7C
	  li        r0, 0x2
	  lfs       f0, -0x559C(r2)
	  sth       r0, 0x14(r30)
	  mr        r3, r30
	  mr        r4, r31
	  stfs      f0, 0x10(r30)
	  bl        .loc_0xBC
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0xBC:
	*/
}

/*
 * --INFO--
 * Address:	8018E380
 * Size:	000108
 */
void Game::PikiHipDropState::earthquake((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  lwz       r12, 0x0(r4)
	  mr        r29, r4
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, -0x6D0C(r13)
	  addi      r3, r1, 0x30
	  lfs       f2, 0x8(r1)
	  addi      r4, r1, 0x20
	  lwz       r5, 0x6C(r5)
	  lfs       f1, 0xC(r1)
	  lfs       f3, 0x11F0(r5)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  stfs      f3, 0x2C(r1)
	  bl        0x9FFB8
	  li        r0, 0x1
	  addi      r3, r1, 0x50
	  stw       r0, 0x44(r1)
	  addi      r4, r1, 0x30
	  bl        0x9FFE4
	  addi      r3, r1, 0x50
	  bl        0xA0058
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  lfs       f31, -0x557C(r2)
	  subi      r30, r4, 0x5D00
	  subi      r31, r3, 0x4CBC
	  b         .loc_0xD4

	.loc_0xA0:
	  addi      r3, r1, 0x50
	  bl        0xA0120
	  stw       r30, 0x14(r1)
	  addi      r4, r1, 0x14
	  stw       r29, 0x18(r1)
	  stw       r31, 0x14(r1)
	  stfs      f31, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x50
	  bl        0xA00B0

	.loc_0xD4:
	  addi      r3, r1, 0x50
	  bl        0xA00DC
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xA0
	  psq_l     f31,0xB8(r1),0,0
	  lwz       r0, 0xC4(r1)
	  lfd       f31, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018E488
 * Size:	000088
 */
void Game::PikiFallMeckState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r6, 0
	  li        r7, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  li        r5, 0x9
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  li        r4, 0x9
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  bl        0x10F50
	  cmplwi    r31, 0
	  beq-      .loc_0x64
	  lbz       r0, 0x0(r31)
	  stb       r0, 0x10(r29)
	  b         .loc_0x6C

	.loc_0x64:
	  li        r0, 0
	  stb       r0, 0x10(r29)

	.loc_0x6C:
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
 * Address:	8018E510
 * Size:	000038
 */
void Game::PikiFallMeckState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x248(r4)
	  cmplwi    r5, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018E548
 * Size:	000004
 */
void Game::PikiFallMeckState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	8018E54C
 * Size:	000004
 */
void Game::PikiFallMeckState::collisionCallback((Game::Piki*, Game::CollEvent&))
{
}

/*
 * --INFO--
 * Address:	8018E550
 * Size:	000034
 */
void Game::PikiFallMeckState::platCallback((Game::Piki*, Game::PlatEvent&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000284
 */
void Game::PikiFallMeckState::becomePikihead((Game::Piki*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8018E584
 * Size:	00054C
 */
void Game::PikiFallMeckState::bounceCallback((Game::Piki*, Sys::Triangle*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x100(r1)
	  mflr      r0
	  stw       r0, 0x104(r1)
	  stw       r31, 0xFC(r1)
	  stw       r30, 0xF8(r1)
	  mr        r30, r4
	  stw       r29, 0xF4(r1)
	  mr        r29, r3
	  lbz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x290
	  cmplwi    r5, 0
	  beq-      .loc_0x290
	  lwz       r0, -0x6B90(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x290
	  lis       r3, 0x8051
	  lwzu      r12, 0x260C(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x63
	  blt-      .loc_0x64
	  li        r0, 0
	  b         .loc_0x284

	.loc_0x64:
	  li        r0, 0x1
	  lwz       r3, -0x6B90(r13)
	  stw       r0, -0x6D08(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r31, r3
	  stw       r0, -0x6D08(r13)
	  mr        r4, r30
	  addi      r3, r1, 0x68
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x68(r1)
	  addi      r4, r1, 0x4C
	  lfs       f1, 0x6C(r1)
	  lfs       f0, 0x70(r1)
	  stfs      f2, 0x4C(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r31, 0
	  stfs      f1, 0x50(r1)
	  beq-      .loc_0x280
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x19C
	  lwz       r3, 0x4C(r1)
	  lis       r5, 0x804B
	  lwz       r4, 0x50(r1)
	  subi      r10, r5, 0x5808
	  lwz       r0, 0x54(r1)
	  lis       r6, 0x804E
	  stw       r3, 0x74(r1)
	  lis       r3, 0x804B
	  subi      r5, r3, 0x5814
	  lfs       f0, -0x5538(r2)
	  li        r7, 0
	  stw       r4, 0x78(r1)
	  lfs       f3, 0x74(r1)
	  lis       r4, 0x804F
	  stw       r0, 0x7C(r1)
	  lis       r3, 0x804B
	  lfs       f2, 0x78(r1)
	  li        r9, 0x159
	  lfs       f1, 0x7C(r1)
	  li        r8, 0x15A
	  stw       r10, 0x58(r1)
	  addi      r10, r6, 0x6A64
	  subi      r6, r4, 0x7A18
	  subi      r0, r3, 0x5D24
	  stw       r10, 0x58(r1)
	  addi      r3, r1, 0x58
	  addi      r4, r1, 0xB4
	  stw       r5, 0xB4(r1)
	  sth       r9, 0x5C(r1)
	  sth       r8, 0x5E(r1)
	  stw       r7, 0x60(r1)
	  stw       r7, 0x64(r1)
	  stw       r6, 0x58(r1)
	  stfs      f3, 0xB8(r1)
	  stfs      f2, 0xBC(r1)
	  stfs      f1, 0xC0(r1)
	  stw       r0, 0xB4(r1)
	  stfs      f0, 0xC4(r1)
	  bl        0x23A1C0
	  b         .loc_0x1B4

	.loc_0x19C:
	  addi      r3, r1, 0x4C
	  bl        0x229088
	  mr        r3, r30
	  li        r4, 0x2817
	  li        r5, 0x1
	  bl        -0x45E68

	.loc_0x1B4:
	  lbz       r7, 0x2B8(r30)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5D0C
	  lis       r5, 0x804B
	  lis       r3, 0x8051
	  stw       r0, 0xC8(r1)
	  addi      r4, r3, 0x41E4
	  addi      r6, r5, 0x2C7C
	  lfs       f3, 0x0(r4)
	  lis       r5, 0x804B
	  lfs       f2, 0x4(r4)
	  li        r3, 0x1
	  lfs       f1, 0x8(r4)
	  li        r0, 0
	  lfs       f0, -0x5578(r2)
	  addi      r4, r5, 0x2C70
	  stw       r6, 0xC8(r1)
	  stw       r4, 0xC8(r1)
	  stw       r7, 0xCC(r1)
	  stfs      f3, 0xD0(r1)
	  stfs      f2, 0xD4(r1)
	  stfs      f1, 0xD8(r1)
	  stb       r3, 0xDC(r1)
	  stw       r0, 0xE0(r1)
	  stfs      f0, 0xE4(r1)
	  lbz       r0, 0x10(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x23C
	  lwz       r3, -0x6514(r13)
	  lfs       f2, -0x5590(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x5594(r2)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0xE4(r1)

	.loc_0x23C:
	  mr        r3, r31
	  addi      r4, r1, 0xC8
	  bl        -0x53800
	  mr        r3, r31
	  addi      r4, r1, 0x4C
	  li        r5, 0
	  bl        -0x53630
	  lis       r3, 0x804B
	  li        r0, 0x1
	  subi      r5, r3, 0x5D30
	  stw       r0, 0x14(r1)
	  mr        r3, r30
	  addi      r4, r1, 0x10
	  stw       r5, 0x10(r1)
	  bl        -0x53708
	  li        r0, 0x1
	  b         .loc_0x284

	.loc_0x280:
	  li        r0, 0

	.loc_0x284:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x510
	  b         .loc_0x530

	.loc_0x290:
	  cmplwi    r5, 0
	  beq-      .loc_0x510
	  addi      r3, r5, 0x5C
	  bl        0x28DC2C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x510
	  mr        r3, r30
	  bl        -0x45AAC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x510
	  lwz       r0, -0x6B90(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x510
	  lis       r3, 0x8051
	  lwzu      r12, 0x260C(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x63
	  blt-      .loc_0x2E8
	  li        r0, 0
	  b         .loc_0x508

	.loc_0x2E8:
	  li        r0, 0x1
	  lwz       r3, -0x6B90(r13)
	  stw       r0, -0x6D08(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r31, r3
	  stw       r0, -0x6D08(r13)
	  mr        r4, r30
	  addi      r3, r1, 0x34
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x34(r1)
	  addi      r4, r1, 0x18
	  lfs       f1, 0x38(r1)
	  lfs       f0, 0x3C(r1)
	  stfs      f2, 0x18(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r31, 0
	  stfs      f1, 0x1C(r1)
	  beq-      .loc_0x504
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x420
	  lwz       r3, 0x18(r1)
	  lis       r5, 0x804B
	  lwz       r4, 0x1C(r1)
	  subi      r10, r5, 0x5808
	  lwz       r0, 0x20(r1)
	  lis       r6, 0x804E
	  stw       r3, 0x40(r1)
	  lis       r3, 0x804B
	  subi      r5, r3, 0x5814
	  lfs       f0, -0x5538(r2)
	  li        r7, 0
	  stw       r4, 0x44(r1)
	  lfs       f3, 0x40(r1)
	  lis       r4, 0x804F
	  stw       r0, 0x48(r1)
	  lis       r3, 0x804B
	  lfs       f2, 0x44(r1)
	  li        r9, 0x159
	  lfs       f1, 0x48(r1)
	  li        r8, 0x15A
	  stw       r10, 0x24(r1)
	  addi      r10, r6, 0x6A64
	  subi      r6, r4, 0x7A18
	  subi      r0, r3, 0x5D24
	  stw       r10, 0x24(r1)
	  addi      r3, r1, 0x24
	  addi      r4, r1, 0x80
	  stw       r5, 0x80(r1)
	  sth       r9, 0x28(r1)
	  sth       r8, 0x2A(r1)
	  stw       r7, 0x2C(r1)
	  stw       r7, 0x30(r1)
	  stw       r6, 0x24(r1)
	  stfs      f3, 0x84(r1)
	  stfs      f2, 0x88(r1)
	  stfs      f1, 0x8C(r1)
	  stw       r0, 0x80(r1)
	  stfs      f0, 0x90(r1)
	  bl        0x239F3C
	  b         .loc_0x438

	.loc_0x420:
	  addi      r3, r1, 0x18
	  bl        0x228E04
	  mr        r3, r30
	  li        r4, 0x2817
	  li        r5, 0x1
	  bl        -0x460EC

	.loc_0x438:
	  lbz       r7, 0x2B8(r30)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5D0C
	  lis       r5, 0x804B
	  lis       r3, 0x8051
	  stw       r0, 0x94(r1)
	  addi      r4, r3, 0x41E4
	  addi      r6, r5, 0x2C7C
	  lfs       f3, 0x0(r4)
	  lis       r5, 0x804B
	  lfs       f2, 0x4(r4)
	  li        r3, 0x1
	  lfs       f1, 0x8(r4)
	  li        r0, 0
	  lfs       f0, -0x5578(r2)
	  addi      r4, r5, 0x2C70
	  stw       r6, 0x94(r1)
	  stw       r4, 0x94(r1)
	  stw       r7, 0x98(r1)
	  stfs      f3, 0x9C(r1)
	  stfs      f2, 0xA0(r1)
	  stfs      f1, 0xA4(r1)
	  stb       r3, 0xA8(r1)
	  stw       r0, 0xAC(r1)
	  stfs      f0, 0xB0(r1)
	  lbz       r0, 0x10(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C0
	  lwz       r3, -0x6514(r13)
	  lfs       f2, -0x5590(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x5594(r2)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0xB0(r1)

	.loc_0x4C0:
	  mr        r3, r31
	  addi      r4, r1, 0x94
	  bl        -0x53A84
	  mr        r3, r31
	  addi      r4, r1, 0x18
	  li        r5, 0
	  bl        -0x538B4
	  lis       r3, 0x804B
	  li        r0, 0x1
	  subi      r5, r3, 0x5D30
	  stw       r0, 0xC(r1)
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  bl        -0x5398C
	  li        r0, 0x1
	  b         .loc_0x508

	.loc_0x504:
	  li        r0, 0

	.loc_0x508:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x530

	.loc_0x510:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x530:
	  lwz       r0, 0x104(r1)
	  lwz       r31, 0xFC(r1)
	  lwz       r30, 0xF8(r1)
	  lwz       r29, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x100
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018EAD0
 * Size:	0000A0
 */
void Game::PikiSuikomiState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr.       r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x13A0
	  li        r4, 0xA0C
	  subi      r5, r5, 0x1324
	  crclr     6, 0x6
	  bl        -0x1644D0

	.loc_0x44:
	  lwz       r5, 0x0(r31)
	  li        r0, 0
	  mr        r3, r30
	  li        r4, 0
	  stw       r5, 0x14(r29)
	  lwz       r5, 0x4(r31)
	  stw       r5, 0x18(r29)
	  lwz       r5, 0x8(r31)
	  stw       r5, 0x1C(r29)
	  stb       r0, 0x10(r29)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1E8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  bl        0x108D4
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
 * Address:	8018EB70
 * Size:	0000EC
 */
void Game::PikiSuikomiState::exec((Game::Piki*))
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
	  lwz       r3, 0x14(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x94
	  mr        r3, r31
	  bl        -0x44614
	  stfs      f1, 0x168(r31)
	  mr        r3, r31
	  li        r4, 0x1D
	  li        r5, 0x1D
	  stfs      f1, 0x16C(r31)
	  li        r6, 0
	  li        r7, 0
	  stfs      f1, 0x170(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD4

	.loc_0x94:
	  lbz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  mr        r3, r30
	  mr        r4, r31
	  bl        .loc_0xEC
	  b         .loc_0xD4

	.loc_0xB0:
	  cmplwi    r0, 0x1
	  bne-      .loc_0xC8
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x260
	  b         .loc_0xD4

	.loc_0xC8:
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x36C

	.loc_0xD4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xEC:
	*/
}

/*
 * --INFO--
 * Address:	8018EC5C
 * Size:	0001FC
 */
void Game::PikiSuikomiState::execMouth((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r3, 0x18(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x5C
	  lwz       r3, 0x1C(r30)
	  lfs       f30, 0x50(r3)
	  lfs       f0, 0x1C(r3)
	  lfs       f31, 0x4C(r3)
	  fsubs     f30, f30, f0
	  lfs       f29, 0x54(r3)
	  b         .loc_0x70

	.loc_0x5C:
	  addi      r4, r1, 0x14
	  bl        -0x56A44
	  lfs       f31, 0x14(r1)
	  lfs       f30, 0x18(r1)
	  lfs       f29, 0x1C(r1)

	.loc_0x70:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  fsubs     f3, f30, f0
	  lfs       f1, 0x8(r1)
	  fsubs     f4, f29, f2
	  lfs       f0, -0x5580(r2)
	  fsubs     f2, f31, f1
	  fmuls     f1, f3, f3
	  fmuls     f5, f4, f4
	  fmadds    f1, f2, f2, f1
	  fadds     f1, f5, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xCC
	  ble-      .loc_0xD0
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xD0

	.loc_0xCC:
	  fmr       f1, f0

	.loc_0xD0:
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF4
	  lfs       f0, -0x557C(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  b         .loc_0xF8

	.loc_0xF4:
	  fmr       f1, f0

	.loc_0xF8:
	  lfs       f0, -0x5594(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1B0
	  lwz       r5, 0x18(r30)
	  cmplwi    r5, 0
	  bne-      .loc_0x180
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1E8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1C(r30)
	  mr        r3, r31
	  bl        -0x4FA28
	  li        r0, 0x2
	  cmplwi    r31, 0
	  stb       r0, 0x10(r30)
	  mr        r6, r31
	  beq-      .loc_0x14C
	  addi      r6, r31, 0x178

	.loc_0x14C:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x8
	  li        r5, 0x8
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0x11C8(r3)
	  stfs      f0, 0x20(r30)
	  b         .loc_0x1CC

	.loc_0x180:
	  lwz       r4, 0x14(r30)
	  mr        r3, r31
	  bl        0x10110
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1E8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0x10(r30)
	  b         .loc_0x1CC

	.loc_0x1B0:
	  lfs       f0, -0x54F8(r2)
	  fmuls     f2, f2, f0
	  fmuls     f1, f3, f0
	  fmuls     f0, f4, f0
	  stfs      f2, 0x200(r31)
	  stfs      f1, 0x204(r31)
	  stfs      f0, 0x208(r31)

	.loc_0x1CC:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018EE58
 * Size:	000038
 */
void Game::PikiSuikomiState::onKeyEvent((Game::Piki*,
                                         SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x2849
	  li        r5, 0x4
	  bl        -0x46570

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018EE90
 * Size:	000108
 */
void Game::PikiSuikomiState::execString((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x14
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        -0x56C3C
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x8
	  bl        0x286BE4
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f3, -0x54F4(r2)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  stfs      f2, 0x200(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x204(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x208(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r4, -0x6514(r13)
	  lwz       r12, 0x1D0(r12)
	  lfs       f1, 0x54(r4)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x108(r31)
	  lfs       f0, -0x557C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xF0
	  mr        r3, r31
	  bl        0x104F0
	  lwz       r4, 0x1C(r30)
	  mr        r3, r31
	  bl        -0x4FBDC
	  li        r0, 0x2
	  mr        r3, r31
	  stb       r0, 0x10(r30)
	  li        r4, 0x8
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x0(r31)
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0x11C8(r3)
	  stfs      f0, 0x20(r30)

	.loc_0xF0:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018EF98
 * Size:	000014
 */
void Game::PikiSuikomiState::ignoreAtari((Game::Piki*, Game::Creature*))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x14(r3)
	  sub       r0, r5, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018EFAC
 * Size:	0001C0
 */
void Game::PikiSuikomiState::execStomach((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r3, 0x14(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  lhz       r0, 0x128(r3)
	  cmplwi    r0, 0x2
	  beq-      .loc_0x6C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x8048
	  lis       r7, 0x8048
	  mr        r6, r3
	  li        r4, 0xA78
	  subi      r3, r7, 0x13A0
	  subi      r5, r5, 0x12E0
	  crclr     6, 0x6
	  bl        -0x1649D4

	.loc_0x6C:
	  lwz       r3, 0x14(r30)
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0xA4
	  lfs       f1, 0x200(r3)
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0xA4
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x20(r30)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x20(r30)

	.loc_0xA4:
	  lbz       r0, 0x10(r30)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x11C
	  lfs       f1, 0x20(r30)
	  mr        r3, r31
	  lfs       f0, -0x556C(r2)
	  fdivs     f31, f1, f0
	  bl        -0x44AD4
	  fmuls     f31, f31, f1
	  lfs       f0, -0x5580(r2)
	  stfs      f31, 0x168(r31)
	  stfs      f31, 0x16C(r31)
	  stfs      f31, 0x170(r31)
	  lfs       f1, 0x20(r30)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1A0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x10C
	  li        r3, 0
	  bl        0xA1664

	.loc_0x10C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x53FD0
	  b         .loc_0x1A0

	.loc_0x11C:
	  lwz       r0, 0x194(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x17C
	  lwz       r8, 0x14(r30)
	  li        r7, 0
	  lfs       f1, -0x5580(r2)
	  li        r0, 0xA
	  lfs       f0, -0x54F0(r2)
	  mr        r3, r30
	  stfs      f1, 0x8(r1)
	  mr        r4, r31
	  addi      r6, r1, 0x8
	  li        r5, 0x8
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f1, 0x14(r1)
	  stb       r7, 0x18(r1)
	  sth       r0, 0x1A(r1)
	  stw       r8, 0x1C(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A0

	.loc_0x17C:
	  lfs       f1, 0x20(r30)
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1A0
	  li        r0, 0x3
	  lfs       f0, -0x556C(r2)
	  stb       r0, 0x10(r30)
	  stfs      f0, 0x20(r30)

	.loc_0x1A0:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018F16C
 * Size:	000048
 */
void Game::PikiSuikomiState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x4FE18
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1E8(r12)
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
 * Address:	8018F1B4
 * Size:	000004
 */
void Game::PikiFlyingState::stopEffect(void) { }

/*
 * --INFO--
 * Address:	8018F1B8
 * Size:	000004
 */
void Game::PikiFlyingState::restartEffect(void) { }

/*
 * --INFO--
 * Address:	8018F1BC
 * Size:	000124
 */
void Game::PikiFlyingState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x23
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  li        r7, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x23
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0x5
	  bne-      .loc_0x78
	  lwz       r3, 0x26C(r3)
	  li        r4, 0x286B
	  lwzu      r12, 0x30(r3)
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x94

	.loc_0x78:
	  lwz       r3, 0x26C(r3)
	  li        r4, 0x2802
	  lwzu      r12, 0x30(r3)
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  lwz       r3, 0x250(r31)
	  li        r4, 0x2803
	  li        r5, 0x5A
	  li        r6, 0
	  bl        0x2D3320
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x14(r30)
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  stb       r0, 0x15(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1E8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x258(r31)
	  lwz       r4, 0x10(r3)
	  lwz       r5, 0x1C(r3)
	  bl        0x22969C
	  li        r0, 0x1
	  stb       r0, 0x135(r31)
	  lbz       r0, -0x6D10(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x10C
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xDC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x10C:
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
 * Address:	8018F2E0
 * Size:	000074
 */
void Game::PikiFlyingState::bounceCallback((Game::Piki*, Sys::Triangle*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x248F8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4C
	  lwz       r3, 0x294(r31)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x7C6C

	.loc_0x4C:
	  lwz       r3, 0x250(r31)
	  li        r4, 0x2804
	  li        r5, 0x5A
	  li        r6, 0
	  bl        0x2D3244
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018F354
 * Size:	000328
 */
void Game::PikiFlyingState::collisionCallback((Game::Piki*, Game::CollEvent&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stmw      r27, 0x5C(r1)
	  mr        r28, r3
	  mr        r30, r5
	  mr        r29, r4
	  lwz       r3, 0x4(r5)
	  lwz       r31, 0x0(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  bl        -0x585D0

	.loc_0x30:
	  mr        r3, r29
	  lwz       r4, 0x0(r30)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x190(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1E0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1E0
	  mr        r4, r29
	  addi      r3, r1, 0x1C
	  lwz       r12, 0x0(r29)
	  li        r27, 0
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x20(r1)
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xF4
	  lwz       r5, 0x4(r30)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5D00
	  lfs       f0, -0x5594(r2)
	  lis       r3, 0x804B
	  stw       r0, 0x44(r1)
	  subi      r0, r3, 0x4CE0
	  addi      r4, r1, 0x44
	  stw       r29, 0x48(r1)
	  stw       r0, 0x44(r1)
	  stfs      f0, 0x4C(r1)
	  stw       r5, 0x50(r1)
	  lwz       r3, 0x0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3

	.loc_0xF4:
	  rlwinm.   r0,r27,0,24,31
	  bne-      .loc_0x144
	  lwz       r5, 0x4(r30)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5D00
	  lfs       f0, -0x5594(r2)
	  lis       r3, 0x804B
	  stw       r0, 0x34(r1)
	  subi      r0, r3, 0x4D04
	  addi      r4, r1, 0x34
	  stw       r29, 0x38(r1)
	  stw       r0, 0x34(r1)
	  stfs      f0, 0x3C(r1)
	  stw       r5, 0x40(r1)
	  lwz       r3, 0x0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3

	.loc_0x144:
	  rlwinm.   r0,r27,0,24,31
	  bne-      .loc_0x1E0
	  lwz       r3, 0x4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x1A8
	  bl        -0x586FC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1A8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1A8
	  lwz       r4, 0x0(r30)
	  mr        r3, r29
	  lwz       r5, 0x4(r30)
	  bl        0xFA14
	  lwz       r4, 0x0(r30)
	  mr        r3, r29
	  li        r5, 0x2805
	  li        r6, 0x1
	  bl        -0x46BA0
	  b         .loc_0x1E0

	.loc_0x1A8:
	  mr        r4, r29
	  addi      r3, r1, 0x10
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x10(r1)
	  addi      r3, r1, 0x28
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x18(r1)
	  stfs      f2, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  bl        0x2284B4

	.loc_0x1E0:
	  lhz       r0, 0x128(r31)
	  cmplwi    r0, 0x408
	  bne-      .loc_0x288
	  lwz       r3, 0x4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x288
	  lis       r4, 0x746F
	  addi      r3, r3, 0x30
	  addi      r4, r4, 0x7073
	  li        r5, 0x2A
	  bl        0x283DA0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x288
	  lwz       r4, 0x0(r30)
	  mr        r3, r29
	  lwz       r5, 0x4(r30)
	  bl        0xF980
	  lwz       r4, 0x0(r30)
	  mr        r3, r29
	  li        r5, 0x2805
	  li        r6, 0x1
	  bl        -0x46C34
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r31, 0xC(r1)
	  addi      r0, r3, 0x3C24
	  addi      r5, r1, 0x8
	  stw       r4, 0x8(r1)
	  li        r4, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x294(r29)
	  bl        0x79C0
	  b         .loc_0x314

	.loc_0x288:
	  mr        r3, r29
	  bl        -0x466AC
	  cmpwi     r3, 0x6
	  bne-      .loc_0x314
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x314
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0x1
	  bl        0x2377C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2FC
	  lwz       r3, 0x294(r29)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x7948

	.loc_0x2FC:
	  lwz       r3, 0x294(r29)
	  bl        0x76AC
	  cmplwi    r3, 0
	  beq-      .loc_0x314
	  lwz       r3, 0x294(r29)
	  bl        0x769C

	.loc_0x314:
	  lmw       r27, 0x5C(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018F67C
 * Size:	00006C
 */
void Game::PikiFlyingState::ignoreAtari((Game::Piki*, Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54

	.loc_0x4C:
	  li        r3, 0x1
	  b         .loc_0x58

	.loc_0x54:
	  li        r3, 0

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018F6E8
 * Size:	0003CC
 */
void Game::PikiFlyingState::exec((Game::Piki*))
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
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r5, 0x30(r3)
	  addi      r0, r5, 0x1
	  cmpwi     r0, 0xF0
	  stw       r0, 0x30(r3)
	  blt-      .loc_0x68
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x394

	.loc_0x68:
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0x3
	  bne-      .loc_0xA4
	  lfs       f1, 0x204(r31)
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA4
	  lwz       r12, 0x0(r3)
	  li        r5, 0x12
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x394

	.loc_0xA4:
	  lwz       r4, -0x6C10(r13)
	  lwz       r3, 0xC0(r31)
	  lfs       f2, 0x28(r4)
	  lfs       f1, -0x54EC(r2)
	  lfs       f0, 0xBB0(r3)
	  fmuls     f30, f1, f2
	  lbz       r3, 0x14(r30)
	  fmuls     f29, f2, f0
	  lfs       f0, -0x54E4(r2)
	  lfs       f1, -0x54E8(r2)
	  cmplwi    r3, 0
	  fsubs     f31, f30, f29
	  fmuls     f0, f0, f31
	  fmsubs    f0, f30, f1, f0
	  fnmsubs   f28, f29, f1, f0
	  bne-      .loc_0x2CC
	  lbz       r0, 0x2B9(r31)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x2CC
	  lfs       f1, 0x204(r31)
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2CC
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x14(r30)
	  li        r4, 0x24
	  li        r5, 0x24
	  li        r6, 0
	  lwz       r12, 0x0(r31)
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x2B8(r31)
	  lfs       f1, -0x5530(r2)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x150
	  lwz       r3, -0x6D20(r13)
	  lwz       r3, 0xC8(r3)
	  lfs       f0, 0x5C0(r3)
	  b         .loc_0x15C

	.loc_0x150:
	  lwz       r3, -0x6D20(r13)
	  lwz       r3, 0xC8(r3)
	  lfs       f0, 0x570(r3)

	.loc_0x15C:
	  fmuls     f1, f1, f0
	  lfs       f0, -0x5580(r2)
	  fmuls     f1, f1, f29
	  fmadds    f2, f28, f28, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x184
	  ble-      .loc_0x188
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x188

	.loc_0x184:
	  fmr       f2, f0

	.loc_0x188:
	  fneg      f1, f28
	  lwz       r3, -0x6D20(r13)
	  lfs       f0, 0x200(r31)
	  lwz       r3, 0xC8(r3)
	  fadds     f1, f1, f2
	  lfs       f5, -0x556C(r2)
	  lfs       f4, 0x638(r3)
	  lfs       f2, -0x5580(r2)
	  fdivs     f3, f1, f29
	  stfs      f0, 0x1C(r30)
	  stfs      f2, 0x20(r30)
	  lfs       f0, 0x208(r31)
	  stfs      f0, 0x24(r30)
	  lfs       f6, 0x1C(r30)
	  fmuls     f0, f5, f4
	  lfs       f4, 0x20(r30)
	  lfs       f5, 0x24(r30)
	  fmuls     f1, f6, f6
	  fmuls     f4, f4, f4
	  fdivs     f0, f0, f3
	  fmuls     f3, f5, f5
	  fadds     f1, f1, f4
	  fadds     f1, f3, f1
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0x208
	  fmadds    f1, f6, f6, f4
	  fadds     f3, f3, f1
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0x20C
	  fsqrte    f1, f3
	  fmuls     f3, f1, f3
	  b         .loc_0x20C

	.loc_0x208:
	  fmr       f3, f2

	.loc_0x20C:
	  lfs       f1, -0x5580(r2)
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x244
	  lfs       f2, -0x557C(r2)
	  lfs       f1, 0x1C(r30)
	  fdivs     f2, f2, f3
	  fmuls     f1, f1, f2
	  stfs      f1, 0x1C(r30)
	  lfs       f1, 0x20(r30)
	  fmuls     f1, f1, f2
	  stfs      f1, 0x20(r30)
	  lfs       f1, 0x24(r30)
	  fmuls     f1, f1, f2
	  stfs      f1, 0x24(r30)

	.loc_0x244:
	  lfs       f4, 0x200(r31)
	  lfs       f3, 0x208(r31)
	  fmuls     f2, f4, f4
	  lfs       f1, -0x5580(r2)
	  fmuls     f3, f3, f3
	  fadds     f2, f2, f3
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x27C
	  fmadds    f2, f4, f4, f3
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x280
	  fsqrte    f1, f2
	  fmuls     f2, f1, f2
	  b         .loc_0x280

	.loc_0x27C:
	  fmr       f2, f1

	.loc_0x280:
	  lfs       f1, -0x556C(r2)
	  stfs      f2, 0x28(r30)
	  fmuls     f2, f1, f2
	  lfs       f1, -0x5580(r2)
	  stfs      f2, 0x2C(r30)
	  lfs       f2, 0x200(r31)
	  fmuls     f2, f2, f0
	  stfs      f2, 0x200(r31)
	  lfs       f2, 0x208(r31)
	  fmuls     f0, f2, f0
	  stfs      f0, 0x208(r31)
	  lfs       f0, 0x200(r31)
	  stfs      f0, 0x1E4(r31)
	  lfs       f0, 0x208(r31)
	  stfs      f0, 0x1EC(r31)
	  stfs      f1, 0x204(r31)
	  stfs      f1, 0x1E8(r31)
	  stfs      f1, 0x10(r30)
	  b         .loc_0x394

	.loc_0x2CC:
	  cmplwi    r3, 0
	  beq-      .loc_0x394
	  lwz       r3, -0x6514(r13)
	  lfs       f2, -0x5524(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x54E0(r2)
	  fmuls     f1, f2, f1
	  lfs       f2, 0x1FC(r31)
	  fdivs     f0, f1, f0
	  fadds     f1, f2, f0
	  bl        0x2821F4
	  stfs      f1, 0x1FC(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x10(r30)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x10(r30)
	  bl        -0xC6458
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, -0x5588(r2)
	  stw       r0, 0x8(r1)
	  lfs       f3, -0x5598(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x556C(r2)
	  fsubs     f4, f0, f2
	  lfs       f2, -0x5504(r2)
	  lfs       f5, 0x10(r30)
	  lfs       f0, -0x54E8(r2)
	  fdivs     f3, f4, f3
	  fsubs     f1, f3, f1
	  fcmpo     cr0, f5, f0
	  fmuls     f2, f2, f1
	  bge-      .loc_0x364
	  fdivs     f0, f31, f0
	  fnmsubs   f4, f5, f0, f30
	  b         .loc_0x368

	.loc_0x364:
	  fmr       f4, f29

	.loc_0x368:
	  lwz       r3, -0x6C10(r13)
	  lfs       f1, -0x557C(r2)
	  lfs       f0, 0x28(r3)
	  lwz       r3, -0x6514(r13)
	  fadds     f3, f1, f2
	  fsubs     f2, f0, f4
	  lfs       f0, 0x204(r31)
	  lfs       f1, 0x54(r3)
	  fmuls     f2, f3, f2
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x204(r31)

	.loc_0x394:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  psq_l     f28,0x28(r1),0,0
	  lfd       f28, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018FAB4
 * Size:	000068
 */
void Game::PikiFlyingState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stb       r0, 0x135(r4)
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1E8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x258(r31)
	  bl        0x228F40
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xDC(r12)
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
 * Address:	8018FB1C
 * Size:	000170
 */
void Game::PikiFlickState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  lis       r7, 0x8048
	  lis       r6, 0x8048
	  subi      r7, r7, 0x13A0
	  mr        r29, r3
	  mr        r30, r4
	  subi      r0, r6, 0x12C4
	  mr        r31, r5
	  mr        r3, r7
	  mr        r5, r0
	  li        r4, 0xBF1
	  crclr     6, 0x6
	  bl        -0x165528
	  li        r0, 0
	  sth       r0, 0x14(r29)
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x1C(r29)
	  bl        -0xC65DC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x5598(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f0, -0x5524(r2)
	  fsubs     f3, f1, f3
	  lfs       f1, -0x5534(r2)
	  fdivs     f2, f3, f2
	  fmuls     f0, f0, f2
	  fmuls     f0, f1, f0
	  stfs      f0, 0x20(r29)
	  bl        -0xC6618
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x10(r1)
	  lfs       f2, -0x5598(r2)
	  lfd       f0, 0x10(r1)
	  lfs       f1, -0x5544(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x5508(r2)
	  fdivs     f2, f3, f2
	  fmadds    f0, f1, f2, f0
	  stfs      f0, 0x204(r30)
	  lfs       f31, 0x4(r31)
	  bl        -0xC6654
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  cmplwi    r29, 0
	  lfs       f0, -0x5534(r2)
	  mr        r6, r29
	  stw       r0, 0x18(r1)
	  lfd       f3, -0x5588(r2)
	  fmuls     f0, f0, f31
	  lfd       f2, 0x18(r1)
	  lfs       f1, -0x5598(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmadds    f0, f0, f1, f31
	  stfs      f0, 0x24(r29)
	  beq-      .loc_0x120
	  lwz       r6, 0x10(r29)

	.loc_0x120:
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  li        r4, 0x16
	  li        r5, 0x16
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  stw       r30, 0x28(r29)
	  li        r0, 0
	  stb       r0, 0x2C(r29)
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018FC8C
 * Size:	000018
 */
void Game::PikiFlickState::onFlute((Game::Piki*, Game::Navi*))
{
	/*
	.loc_0x0:
	  lfs       f0, -0x5580(r2)
	  li        r0, 0x1
	  stfs      f0, 0x18(r3)
	  stb       r0, 0x2C(r3)
	  stw       r5, 0x2C4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018FCA4
 * Size:	000208
 */
void Game::PikiFlickState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  lis       r6, 0x8048
	  stw       r0, 0x34(r1)
	  subi      r0, r6, 0x13A0
	  subi      r5, r5, 0x12B0
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  li        r4, 0xC14
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  mr        r3, r0
	  crclr     6, 0x6
	  bl        -0x16569C
	  lhz       r0, 0x14(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lfs       f1, 0x1C(r30)
	  lfs       f0, -0x5580(r2)
	  lfs       f2, 0x24(r30)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x88
	  lfs       f0, -0x5528(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0xAC

	.loc_0x88:
	  lfs       f0, -0x552C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0xAC:
	  fneg      f2, f2
	  lfs       f0, -0x5580(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x200(r31)
	  lfs       f1, 0x1C(r30)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xCC
	  fneg      f1, f1

	.loc_0xCC:
	  lfs       f0, -0x552C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f0, f2, f0
	  stfs      f0, 0x208(r31)
	  lfs       f1, 0x1FC(r31)
	  lfs       f0, 0x20(r30)
	  fadds     f1, f1, f0
	  bl        0x281E24
	  stfs      f1, 0x1FC(r31)
	  b         .loc_0x1F0

	.loc_0x114:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x1C4
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x18(r30)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x5580(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x18(r30)
	  lfs       f1, 0x18(r30)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x194
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x194
	  cmplwi    r30, 0
	  mr        r6, r30
	  beq-      .loc_0x16C
	  lwz       r6, 0x10(r30)

	.loc_0x16C:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0xE
	  li        r5, 0xE
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0x3
	  sth       r0, 0x14(r30)

	.loc_0x194:
	  lfs       f2, -0x54DC(r2)
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x5580(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x200(r31)
	  lfs       f1, 0x208(r31)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x208(r31)
	  stfs      f0, 0x1E4(r31)
	  stfs      f0, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	  b         .loc_0x1F0

	.loc_0x1C4:
	  lfs       f2, -0x54DC(r2)
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x5580(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x200(r31)
	  lfs       f1, 0x208(r31)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x208(r31)
	  stfs      f0, 0x1E4(r31)
	  stfs      f0, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)

	.loc_0x1F0:
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
 * Address:	8018FEAC
 * Size:	000124
 */
void Game::PikiFlickState::onKeyEvent((SysShape::KeyEvent const&))
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
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  lwz       r0, 0x1C(r4)
	  mr        r30, r3
	  lwz       r31, 0x28(r3)
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x3C
	  b         .loc_0xFC

	.loc_0x3C:
	  lhz       r0, 0x14(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  cmplwi    r30, 0
	  mr        r6, r30
	  beq-      .loc_0x58
	  lwz       r6, 0x10(r30)

	.loc_0x58:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x17
	  li        r5, 0x17
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  sth       r0, 0x14(r30)
	  b         .loc_0xFC

	.loc_0x84:
	  cmplwi    r0, 0x1
	  bne-      .loc_0xD8
	  li        r0, 0x2
	  sth       r0, 0x14(r30)
	  lwz       r3, 0xC0(r31)
	  lfs       f31, 0xAE8(r3)
	  lfs       f30, 0xAC0(r3)
	  bl        -0xC69AC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  fsubs     f0, f30, f31
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0x8(r1)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmadds    f0, f0, f1, f31
	  stfs      f0, 0x18(r30)
	  b         .loc_0xFC

	.loc_0xD8:
	  bl        -0xC69E4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xFC:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8018FFD0
 * Size:	0000AC
 */
void Game::PikiFlickState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  lbz       r0, 0x2C(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r7, 0x2C4(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  li        r3, 0
	  lis       r4, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x524
	  lis       r4, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r6, r4, 0xD44
	  li        r0, 0x1
	  addi      r5, r1, 0x8
	  stb       r3, 0x11(r1)
	  li        r4, 0
	  stw       r7, 0xC(r1)
	  stw       r6, 0x8(r1)
	  stb       r3, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x294(r31)
	  bl        0x6F34

	.loc_0x94:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019007C
 * Size:	0001A4
 */
void Game::PikiBlowState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x13A0
	  li        r4, 0xC97
	  subi      r5, r5, 0x129C
	  crclr     6, 0x6
	  bl        -0x165A78
	  b         .loc_0x7C

	.loc_0x44:
	  lfs       f0, 0x0(r5)
	  stfs      f0, 0x18(r30)
	  lfs       f0, 0x4(r5)
	  stfs      f0, 0x1C(r30)
	  lfs       f0, 0x8(r5)
	  stfs      f0, 0x20(r30)
	  lfs       f0, 0xC(r5)
	  stfs      f0, 0x24(r30)
	  lbz       r0, 0x10(r5)
	  stb       r0, 0x29(r30)
	  lhz       r0, 0x12(r5)
	  sth       r0, 0x2A(r30)
	  lwz       r0, 0x14(r5)
	  stw       r0, 0x14(r30)

	.loc_0x7C:
	  li        r0, 0
	  cmplwi    r31, 0
	  stb       r0, 0x28(r30)
	  mr        r6, r31
	  beq-      .loc_0x94
	  addi      r6, r31, 0x178

	.loc_0x94:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x16
	  li        r5, 0x16
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x10(r30)
	  bl        -0xC6B98
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lis       r3, 0x8051
	  lfd       f2, -0x5588(r2)
	  subi      r3, r3, 0x2E20
	  stw       r0, 0x8(r1)
	  lfs       f3, -0x5598(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x5534(r2)
	  fsubs     f4, f0, f2
	  lfs       f0, -0x557C(r2)
	  lfs       f2, 0x1C(r30)
	  fdivs     f3, f4, f3
	  fmadds    f0, f1, f3, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x204(r31)
	  lfs       f1, 0x18(r30)
	  lfs       f2, 0x20(r30)
	  bl        -0x15B080
	  lfs       f0, -0x5524(r2)
	  fadds     f1, f0, f1
	  bl        0x281A3C
	  stfs      f1, 0x1FC(r31)
	  lhz       r0, 0x2A(r30)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x164
	  lbz       r0, 0x2B9(r31)
	  cmpwi     r0, 0x1
	  blt-      .loc_0x174
	  lwz       r4, 0x258(r31)
	  lwz       r3, 0xC(r4)
	  lwz       r4, 0x8(r4)
	  bl        0x227730
	  mr        r3, r31
	  li        r4, 0x2846
	  li        r5, 0x1
	  bl        -0x47904
	  li        r0, 0
	  stb       r0, 0x2B9(r31)
	  b         .loc_0x174

	.loc_0x164:
	  mr        r3, r31
	  li        r4, 0x2854
	  li        r5, 0x1
	  bl        -0x47920

	.loc_0x174:
	  mr        r3, r31
	  bl        0xF380
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x18C
	  mr        r3, r31
	  bl        0xF220

	.loc_0x18C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80190220
 * Size:	000140
 */
void Game::PikiBlowState::exec((Game::Piki*))
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
	  mr        r3, r31
	  bl        0xF334
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x34
	  mr        r3, r31
	  bl        0xF1D4

	.loc_0x34:
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xB0
	  bge-      .loc_0x128
	  cmpwi     r0, 0
	  bge-      .loc_0x50
	  b         .loc_0x128

	.loc_0x50:
	  lfs       f0, 0x18(r30)
	  mr        r3, r31
	  li        r4, 0x16
	  stfs      f0, 0x200(r31)
	  lfs       f0, 0x20(r30)
	  stfs      f0, 0x208(r31)
	  bl        -0x5335C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x128
	  li        r0, 0x1
	  cmplwi    r31, 0
	  stw       r0, 0x10(r30)
	  mr        r6, r31
	  beq-      .loc_0x8C
	  addi      r6, r31, 0x178

	.loc_0x8C:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x17
	  li        r5, 0x17
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  b         .loc_0x128

	.loc_0xB0:
	  lfs       f0, 0x200(r31)
	  mr        r3, r31
	  lfs       f1, -0x54DC(r2)
	  li        r4, 0x17
	  fmuls     f0, f0, f1
	  stfs      f0, 0x200(r31)
	  lfs       f0, 0x208(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x208(r31)
	  bl        -0x533C8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x104
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x128

	.loc_0x104:
	  lwz       r5, 0x248(r31)
	  cmplwi    r5, 0
	  beq-      .loc_0x128
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x128:
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
 * Address:	80190360
 * Size:	000004
 */
void Game::PikiBlowState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	80190364
 * Size:	000064
 */
void Game::PikiBlowState::onKeyEvent((Game::Piki*, SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1C(r5)
	  mr        r5, r4
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x54
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x54
	  li        r0, 0x1
	  li        r4, 0x17
	  stw       r0, 0x10(r3)
	  mr        r3, r5
	  li        r5, 0x17
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801903C8
 * Size:	000010
 */
void Game::PikiBlowState::onFlute((Game::Piki*, Game::Navi*))
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stb       r0, 0x28(r3)
	  stw       r5, 0x2C4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801903D8
 * Size:	000168
 */
void Game::PikiBlowState::bounceCallback((Game::Piki*, Sys::Triangle*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x557C(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lis       r3, 0x1
	  lbz       r5, 0x28(r30)
	  subi      r0, r3, 0x8000
	  lhz       r6, 0x2A(r30)
	  neg       r3, r5
	  or        r3, r3, r5
	  stfs      f0, 0xC(r1)
	  srawi     r3, r3, 0x1F
	  and       r0, r0, r3
	  or        r0, r6, r0
	  sth       r0, 0x8(r1)
	  bl        -0xC6E84
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x10(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0x10(r1)
	  lfs       f0, 0x24(r30)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xC0
	  lbz       r0, 0x2B9(r31)
	  cmpwi     r0, 0x1
	  blt-      .loc_0xA4
	  lwz       r4, 0x258(r31)
	  lwz       r3, 0xC(r4)
	  lwz       r4, 0x8(r4)
	  bl        0x227480
	  li        r0, 0
	  stb       r0, 0x2B9(r31)

	.loc_0xA4:
	  lwz       r4, 0x14(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0xC0
	  mr        r3, r31
	  li        r5, 0x280A
	  li        r6, 0x1
	  bl        -0x47B40

	.loc_0xC0:
	  lbz       r0, 0x29(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x130
	  mr        r3, r31
	  li        r4, 0x280B
	  li        r5, 0x1
	  bl        -0x47BE4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x100
	  li        r3, 0x5
	  bl        0xA0244

	.loc_0x100:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x553F0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x19
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x150

	.loc_0x130:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  addi      r6, r1, 0x8
	  li        r5, 0x7
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x150:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80190540
 * Size:	00008C
 */
void Game::PikiKokeDamageState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bne-      .loc_0x30
	  lfs       f0, -0x5580(r2)
	  li        r0, 0
	  stfs      f0, 0x10(r31)
	  sth       r0, 0x14(r31)
	  b         .loc_0x40

	.loc_0x30:
	  lfs       f0, 0x4(r5)
	  stfs      f0, 0x10(r31)
	  lhz       r0, 0x0(r5)
	  sth       r0, 0x14(r31)

	.loc_0x40:
	  cmplwi    r4, 0
	  mr        r6, r4
	  beq-      .loc_0x50
	  addi      r6, r4, 0x178

	.loc_0x50:
	  lwz       r12, 0x0(r4)
	  mr        r3, r4
	  li        r4, 0x17
	  li        r5, 0x17
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x18(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801905CC
 * Size:	00015C
 */
void Game::PikiKokeDamageState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f2, -0x5580(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stfs      f2, 0x1E4(r4)
	  stfs      f2, 0x1E8(r4)
	  stfs      f2, 0x1EC(r4)
	  stfs      f2, 0x200(r4)
	  stfs      f2, 0x204(r4)
	  stfs      f2, 0x208(r4)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xA0
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x10(r30)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r30)
	  lfs       f0, 0x10(r30)
	  fcmpo     cr0, f0, f2
	  cror      2, 0, 0x2
	  bne-      .loc_0xA0
	  cmplwi    r31, 0
	  mr        r6, r31
	  beq-      .loc_0x78
	  addi      r6, r6, 0x178

	.loc_0x78:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0xE
	  li        r5, 0xE
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0x2
	  stw       r0, 0x18(r30)

	.loc_0xA0:
	  lwz       r0, 0x18(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0xCC
	  mr        r3, r31
	  li        r4, 0x17
	  bl        -0x53754
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xCC
	  li        r0, 0x1
	  stw       r0, 0x18(r30)
	  b         .loc_0x144

	.loc_0xCC:
	  lwz       r0, 0x18(r30)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x144
	  mr        r3, r31
	  li        r4, 0xE
	  bl        -0x53780
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x144
	  lhz       r0, 0x14(r30)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x124
	  li        r0, 0x5
	  mr        r3, r30
	  sth       r0, 0x8(r1)
	  mr        r4, r31
	  addi      r6, r1, 0x8
	  li        r5, 0x13
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x144

	.loc_0x124:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x144:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80190728
 * Size:	00001C
 */
void Game::PikiKokeDamageState::onFlute((Game::Piki*, Game::Navi*))
{
	/*
	.loc_0x0:
	  lhz       r0, 0x14(r3)
	  lfs       f0, -0x5580(r2)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x14(r3)
	  stfs      f0, 0x10(r3)
	  stw       r5, 0x2C4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80190744
 * Size:	0000E8
 */
void Game::PikiKokeDamageState::cleanup((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD0
	  lhz       r3, 0x14(r30)
	  rlwinm.   r0,r3,0,16,16
	  beq-      .loc_0x98
	  lwz       r7, 0x2C4(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  li        r3, 0
	  lis       r4, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x524
	  lis       r4, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r6, r4, 0xD44
	  li        r0, 0x1
	  addi      r5, r1, 0x8
	  stb       r3, 0x11(r1)
	  li        r4, 0
	  stw       r7, 0xC(r1)
	  stw       r6, 0x8(r1)
	  stb       r3, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x294(r31)
	  bl        0x67C0
	  b         .loc_0xD0

	.loc_0x98:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0xC0
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0x5
	  beq-      .loc_0xD0
	  lwz       r3, 0x294(r31)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x6798
	  b         .loc_0xD0

	.loc_0xC0:
	  mr        r3, r31
	  li        r4, 0x283F
	  li        r5, 0x1
	  bl        -0x47F44

	.loc_0xD0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019082C
 * Size:	000060
 */
void Game::PikiKokeDamageState::onKeyEvent((Game::Piki*,
                                            SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x50
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  li        r0, 0x1
	  stw       r0, 0x18(r3)
	  b         .loc_0x50

	.loc_0x30:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019088C
 * Size:	000120
 */
void Game::PikiKokeState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  bl        -0xC7308
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x5514(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x8C
	  cmplwi    r31, 0
	  mr        r6, r31
	  beq-      .loc_0x60
	  addi      r6, r31, 0x178

	.loc_0x60:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x3C
	  li        r5, 0x3C
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0x11(r30)
	  b         .loc_0xC4

	.loc_0x8C:
	  cmplwi    r31, 0
	  mr        r6, r31
	  beq-      .loc_0x9C
	  addi      r6, r31, 0x178

	.loc_0x9C:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x1A
	  li        r5, 0x1A
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x11(r30)

	.loc_0xC4:
	  bl        -0xC73B0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x5598(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x54D8(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x5590(r2)
	  fdivs     f2, f3, f2
	  fmadds    f0, f1, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stb       r0, 0x10(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801909AC
 * Size:	00000C
 */
void Game::PikiKokeState::onFlute((Game::Piki*, Game::Navi*))
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801909B8
 * Size:	000094
 */
void Game::PikiKokeState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r4, 0x1B8(r4)
	  cmplwi    r4, 0
	  beq-      .loc_0x28
	  lha       r0, 0x20(r4)
	  b         .loc_0x2C

	.loc_0x28:
	  li        r0, -0x1

	.loc_0x2C:
	  cmpwi     r0, 0x1A
	  beq-      .loc_0x58
	  cmpwi     r0, 0x3C
	  beq-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x58:
	  lfs       f2, -0x54D4(r2)
	  lfs       f0, 0x1E4(r31)
	  lfs       f1, 0x1E8(r31)
	  lfs       f3, 0x1EC(r31)
	  fmuls     f0, f0, f2
	  fmuls     f1, f1, f2
	  fmuls     f2, f3, f2
	  stfs      f0, 0x1E4(r31)
	  stfs      f1, 0x1E8(r31)
	  stfs      f2, 0x1EC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80190A4C
 * Size:	0000F0
 */
void Game::PikiKokeState::onKeyEvent((Game::Piki*, SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1C(r5)
	  cmpwi     r0, 0xC8
	  beq-      .loc_0x40
	  bge-      .loc_0x34
	  cmpwi     r0, 0x2
	  beq-      .loc_0x74
	  bge-      .loc_0xE0
	  cmpwi     r0, 0x1
	  bge-      .loc_0x94
	  b         .loc_0xE0

	.loc_0x34:
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0xC8
	  b         .loc_0xE0

	.loc_0x40:
	  lbz       r0, 0x11(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  mr        r3, r4
	  li        r4, 0x2843
	  li        r5, 0x1
	  bl        -0x481D8
	  b         .loc_0xE0

	.loc_0x60:
	  mr        r3, r4
	  li        r4, 0x2844
	  li        r5, 0x1
	  bl        -0x481EC
	  b         .loc_0xE0

	.loc_0x74:
	  lfs       f0, -0x5580(r2)
	  stfs      f0, 0x200(r4)
	  stfs      f0, 0x204(r4)
	  stfs      f0, 0x208(r4)
	  stfs      f0, 0x1E4(r4)
	  stfs      f0, 0x1E8(r4)
	  stfs      f0, 0x1EC(r4)
	  b         .loc_0xE0

	.loc_0x94:
	  lbz       r5, 0x10(r3)
	  subi      r0, r5, 0x1
	  stb       r0, 0x10(r3)
	  lbz       r0, 0x10(r3)
	  extsb.    r0, r0
	  bgt-      .loc_0xE0
	  lbz       r0, 0x1C4(r4)
	  ori       r0, r0, 0x2
	  stb       r0, 0x1C4(r4)
	  lbz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x2
	  stb       r0, 0x1E0(r4)
	  b         .loc_0xE0

	.loc_0xC8:
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE0:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80190B3C
 * Size:	000004
 */
void Game::PikiKokeState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	80190B40
 * Size:	000200
 */
void Game::PikiDrownState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r3, 0x294(r4)
	  li        r4, 0x1
	  bl        0x642C
	  cmplwi    r31, 0
	  mr        r6, r31
	  beq-      .loc_0x3C
	  addi      r6, r31, 0x178

	.loc_0x3C:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x25
	  li        r5, 0x25
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1B8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x70
	  lha       r0, 0x20(r3)
	  b         .loc_0x74

	.loc_0x70:
	  li        r0, -0x1

	.loc_0x74:
	  cmpwi     r0, 0x25
	  bne-      .loc_0x88
	  li        r0, 0
	  sth       r0, 0x10(r30)
	  b         .loc_0xC0

	.loc_0x88:
	  li        r0, 0x1
	  cmplwi    r31, 0
	  sth       r0, 0x10(r30)
	  mr        r6, r31
	  beq-      .loc_0xA0
	  addi      r6, r31, 0x178

	.loc_0xA0:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x26
	  li        r5, 0x26
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl

	.loc_0xC0:
	  bl        -0xC7660
	  xoris     r0, r3, 0x8000
	  lis       r4, 0x4330
	  stw       r0, 0xC(r1)
	  li        r0, 0
	  lfd       f3, -0x5588(r2)
	  mr        r3, r31
	  stw       r4, 0x8(r1)
	  lfs       f2, -0x5598(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x5530(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x5580(r2)
	  fdivs     f2, f3, f2
	  fmuls     f1, f1, f2
	  fctiwz    f1, f1
	  stfd      f1, 0x10(r1)
	  lwz       r4, 0x14(r1)
	  addi      r4, r4, 0x6
	  sth       r4, 0x12(r30)
	  stfs      f0, 0x1E4(r31)
	  stfs      f0, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	  sth       r0, 0x14(r30)
	  stfs      f0, 0x1E4(r31)
	  stfs      f0, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	  bl        0xE908
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x140
	  mr        r3, r31
	  bl        0xE7A8

	.loc_0x140:
	  li        r0, 0
	  lfs       f0, -0x5580(r2)
	  stw       r0, 0x20(r30)
	  stb       r0, 0x30(r30)
	  sth       r0, 0x16(r30)
	  stfs      f0, 0x18(r30)
	  stb       r0, 0x1C(r30)
	  lwz       r30, 0x258(r31)
	  mr        r3, r30
	  bl        0x227E48
	  lwz       r3, 0x0(r30)
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0x198
	  rlwinm    r0,r3,0,30,28
	  mr        r3, r30
	  stw       r0, 0x0(r30)
	  lwz       r4, 0xC(r30)
	  bl        0x227EF0
	  li        r0, 0x3C
	  stw       r0, 0x24(r30)
	  lwz       r3, 0xC(r30)
	  bl        0x2268FC

	.loc_0x198:
	  lwz       r30, 0x258(r31)
	  mr        r3, r30
	  bl        0x228054
	  lwz       r3, 0x0(r30)
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x1C0
	  rlwinm    r0,r3,0,28,26
	  stw       r0, 0x0(r30)
	  lwz       r3, 0x14(r30)
	  bl        0x226B3C

	.loc_0x1C0:
	  lwz       r30, 0x258(r31)
	  mr        r3, r30
	  bl        0x227E88
	  lwz       r3, 0x0(r30)
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0x1E8
	  rlwinm    r0,r3,0,29,27
	  stw       r0, 0x0(r30)
	  lwz       r3, 0xC(r30)
	  bl        0x226908

	.loc_0x1E8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80190D40
 * Size:	000040
 */
void Game::PikiDrownState::soft_transittable((int))
{
	/*
	.loc_0x0:
	  subi      r5, r4, 0x13
	  li        r3, 0x1
	  subfic    r0, r5, 0x1
	  orc       r5, r3, r5
	  mr        r6, r3
	  rlwinm    r0,r0,31,1,31
	  sub       r0, r5, r0
	  rlwinm.   r0,r0,1,31,31
	  bne-      .loc_0x28
	  li        r6, 0

	.loc_0x28:
	  rlwinm.   r0,r6,0,24,31
	  bnelr-
	  cmpwi     r4, 0x5
	  beqlr-
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80190D80
 * Size:	000010
 */
void Game::PikiDrownState::onFlute((Game::Piki*, Game::Navi*))
{
	/*
	.loc_0x0:
	  stw       r5, 0x20(r3)
	  li        r0, 0x1
	  stb       r0, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80190D90
 * Size:	00000C
 */
void Game::PikiDrownState::outWaterCallback((Game::Piki*))
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stb       r0, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80190D9C
 * Size:	00074C
 */
void Game::PikiDrownState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stfd      f29, 0xB0(r1)
	  psq_st    f29,0xB8(r1),0,0
	  stmw      r27, 0x9C(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lbz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  lwz       r4, 0x20(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x9C
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x6C
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x60
	  lwz       r12, 0x0(r31)
	  lfs       f30, 0x6C(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x74(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x60(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x68(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f30, f1
	  fsubs     f2, f31, f0
	  bl        -0x15BD28
	  stfs      f1, 0x1FC(r31)

	.loc_0x9C:
	  lfs       f5, 0x1FC(r31)
	  lfs       f0, -0x5580(r2)
	  fmr       f1, f5
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0xB4
	  fneg      f1, f5

	.loc_0xB4:
	  lfs       f2, -0x552C(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x5580(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  lfs       f3, -0x5508(r2)
	  fcmpo     cr0, f5, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x78(r1)
	  lwz       r0, 0x7C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f4, f3, f0
	  bge-      .loc_0x114
	  lfs       f0, -0x5528(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x80(r1)
	  lwz       r0, 0x84(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x12C

	.loc_0x114:
	  fmuls     f0, f5, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x88(r1)
	  lwz       r0, 0x8C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x12C:
	  fmuls     f1, f3, f0
	  lfs       f0, -0x54D0(r2)
	  li        r0, 0x5
	  mr        r3, r30
	  mr        r4, r31
	  addi      r6, r1, 0x8
	  stfs      f1, 0x200(r31)
	  li        r5, 0x13
	  stfs      f0, 0x204(r31)
	  stfs      f4, 0x208(r31)
	  sth       r0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x720

	.loc_0x16C:
	  lwz       r3, 0x190(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x368
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  fmr       f30, f1
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x54
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x2EC
	  lhz       r0, 0x16(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x368
	  bge-      .loc_0x1CC
	  cmpwi     r0, 0
	  bge-      .loc_0x1D8
	  b         .loc_0x368

	.loc_0x1CC:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x368
	  b         .loc_0x224

	.loc_0x1D8:
	  lfs       f1, -0x5580(r2)
	  lfs       f0, -0x54CC(r2)
	  stfs      f1, 0x208(r31)
	  stfs      f1, 0x200(r31)
	  lfs       f2, 0x204(r31)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x208
	  lwz       r3, -0x6514(r13)
	  lfs       f1, -0x54C8(r2)
	  lfs       f0, 0x54(r3)
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x204(r31)

	.loc_0x208:
	  lfs       f0, 0x200(r31)
	  stfs      f0, 0x1E4(r31)
	  lfs       f0, 0x204(r31)
	  stfs      f0, 0x1E8(r31)
	  lfs       f0, 0x208(r31)
	  stfs      f0, 0x1EC(r31)
	  b         .loc_0x368

	.loc_0x224:
	  lfs       f1, -0x5580(r2)
	  mr        r4, r31
	  lfs       f0, -0x54CC(r2)
	  addi      r3, r1, 0x48
	  stfs      f1, 0x200(r31)
	  stfs      f1, 0x204(r31)
	  stfs      f1, 0x208(r31)
	  stfs      f0, 0x204(r31)
	  lfs       f0, 0x200(r31)
	  stfs      f0, 0x1E4(r31)
	  lfs       f0, 0x204(r31)
	  stfs      f0, 0x1E8(r31)
	  lfs       f0, 0x208(r31)
	  stfs      f0, 0x1EC(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x54C4(r2)
	  lfs       f1, 0x4C(r1)
	  fsubs     f0, f30, f0
	  lfs       f2, 0x48(r1)
	  lfs       f3, 0x50(r1)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x368
	  stfs      f2, 0x20C(r31)
	  cmplwi    r31, 0
	  li        r0, 0x1
	  mr        r6, r31
	  stfs      f0, 0x210(r31)
	  stfs      f3, 0x214(r31)
	  sth       r0, 0x10(r30)
	  beq-      .loc_0x2B0
	  addi      r6, r31, 0x178

	.loc_0x2B0:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x26
	  li        r5, 0x26
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x250(r31)
	  li        r4, 0x2812
	  li        r5, 0x2
	  li        r6, 0
	  li        r7, 0
	  bl        0x2D1768
	  b         .loc_0x368

	.loc_0x2EC:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x31C
	  lfs       f1, -0x5580(r2)
	  lfs       f0, -0x54C0(r2)
	  stfs      f1, 0x208(r31)
	  stfs      f1, 0x200(r31)
	  stfs      f0, 0x204(r31)
	  lfs       f0, 0x204(r31)
	  stfs      f0, 0x1E8(r31)
	  stfs      f1, 0x1EC(r31)
	  stfs      f1, 0x1E4(r31)
	  b         .loc_0x368

	.loc_0x31C:
	  mr        r4, r31
	  addi      r3, r1, 0x3C
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x54C4(r2)
	  lfs       f1, 0x40(r1)
	  fsubs     f0, f30, f0
	  lfs       f2, 0x3C(r1)
	  lfs       f3, 0x44(r1)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x35C
	  stfs      f2, 0x20C(r31)
	  stfs      f0, 0x210(r31)
	  stfs      f3, 0x214(r31)

	.loc_0x35C:
	  lfs       f0, -0x5580(r2)
	  stfs      f0, 0x204(r31)
	  stfs      f0, 0x1E8(r31)

	.loc_0x368:
	  lhz       r0, 0x10(r30)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x3C4
	  mr        r3, r31
	  li        r4, 0x26
	  bl        -0x541EC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3C4
	  li        r0, 0x2
	  cmplwi    r31, 0
	  sth       r0, 0x10(r30)
	  mr        r6, r31
	  beq-      .loc_0x3A0
	  addi      r6, r31, 0x178

	.loc_0x3A0:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x27
	  li        r5, 0x27
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  b         .loc_0x400

	.loc_0x3C4:
	  lhz       r0, 0x10(r30)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x400
	  mr        r3, r31
	  li        r4, 0x27
	  bl        -0x54248
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x400
	  li        r3, 0x3
	  bl        0x9F594
	  li        r0, -0x1
	  mr        r3, r31
	  sth       r0, 0x2A4(r31)
	  li        r4, 0
	  bl        -0x560A8

	.loc_0x400:
	  lhz       r0, 0x10(r30)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x720
	  lwz       r0, 0x20(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x420
	  mr        r29, r0
	  b         .loc_0x424

	.loc_0x420:
	  lwz       r29, 0x2C4(r31)

	.loc_0x424:
	  cmplwi    r29, 0
	  bne-      .loc_0x504
	  li        r28, 0

	.loc_0x430:
	  lwz       r3, -0x6D20(r13)
	  mr        r4, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4F8
	  mr        r4, r27
	  addi      r3, r1, 0x30
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x24
	  lwz       r12, 0x0(r31)
	  lfs       f30, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x34(r1)
	  lfs       f29, 0x38(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x28(r1)
	  lfs       f2, 0x24(r1)
	  fsubs     f3, f31, f0
	  lfs       f1, 0x2C(r1)
	  fsubs     f2, f30, f2
	  lfs       f0, -0x5580(r2)
	  fsubs     f1, f29, f1
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x4E4
	  ble-      .loc_0x4E8
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x4E8

	.loc_0x4E4:
	  fmr       f1, f0

	.loc_0x4E8:
	  lfs       f0, -0x54BC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x4F8
	  mr        r29, r27

	.loc_0x4F8:
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x2
	  blt+      .loc_0x430

	.loc_0x504:
	  lbz       r0, 0x30(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x528
	  lfs       f0, -0x5580(r2)
	  stfs      f0, 0x1E4(r31)
	  stfs      f0, 0x1EC(r31)
	  stfs      f0, 0x208(r31)
	  stfs      f0, 0x200(r31)
	  b         .loc_0x720

	.loc_0x528:
	  cmplwi    r29, 0
	  beq-      .loc_0x720
	  mr        r4, r31
	  addi      r3, r1, 0xC
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x18
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x1C(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f2, 0x20(r1)
	  fsubs     f31, f1, f0
	  lfs       f0, 0x14(r1)
	  lfs       f1, 0x18(r1)
	  fsubs     f30, f2, f0
	  lfs       f0, 0xC(r1)
	  fmuls     f2, f31, f31
	  fsubs     f29, f1, f0
	  lfs       f0, -0x5580(r2)
	  fmuls     f3, f30, f30
	  fmadds    f1, f29, f29, f2
	  fadds     f1, f3, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5B0
	  ble-      .loc_0x5B4
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x5B4

	.loc_0x5B0:
	  fmr       f1, f0

	.loc_0x5B4:
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5D4
	  lfs       f0, -0x557C(r2)
	  fdivs     f0, f0, f1
	  fmuls     f29, f29, f0
	  fmuls     f31, f31, f0
	  fmuls     f30, f30, f0

	.loc_0x5D4:
	  lfs       f1, -0x556C(r2)
	  mr        r3, r31
	  bl        -0x48428
	  fmuls     f4, f29, f1
	  lfs       f2, -0x5580(r2)
	  fmuls     f3, f31, f1
	  fmuls     f0, f30, f1
	  stfs      f4, 0x24(r30)
	  stfs      f3, 0x28(r30)
	  stfs      f0, 0x2C(r30)
	  lfs       f0, 0x28(r30)
	  lfs       f1, 0x1E8(r31)
	  lfs       f4, 0x2C(r30)
	  fsubs     f8, f0, f1
	  lfs       f0, 0x1EC(r31)
	  lfs       f3, 0x24(r30)
	  fsubs     f9, f4, f0
	  lfs       f6, 0x1E4(r31)
	  fmuls     f4, f8, f8
	  fsubs     f7, f3, f6
	  fmuls     f5, f9, f9
	  fmadds    f3, f7, f7, f4
	  fadds     f3, f5, f3
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0x648
	  ble-      .loc_0x64C
	  fsqrte    f2, f3
	  fmuls     f3, f2, f3
	  b         .loc_0x64C

	.loc_0x648:
	  fmr       f3, f2

	.loc_0x64C:
	  lfs       f2, -0x5580(r2)
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0x670
	  lfs       f2, -0x557C(r2)
	  fdivs     f2, f2, f3
	  fmuls     f7, f7, f2
	  fmuls     f8, f8, f2
	  fmuls     f9, f9, f2
	  b         .loc_0x674

	.loc_0x670:
	  fmr       f3, f2

	.loc_0x674:
	  lbz       r0, 0x30(r30)
	  lfs       f10, -0x5518(r2)
	  cmplwi    r0, 0
	  beq-      .loc_0x68C
	  lfs       f2, -0x5530(r2)
	  fmuls     f10, f10, f2

	.loc_0x68C:
	  lwz       r3, -0x6514(r13)
	  lfs       f5, 0x54(r3)
	  fmuls     f2, f10, f5
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0x6D4
	  fmuls     f4, f7, f10
	  fmuls     f3, f8, f10
	  fmuls     f2, f9, f10
	  fmuls     f4, f4, f5
	  fmuls     f3, f3, f5
	  fmuls     f2, f2, f5
	  fadds     f4, f6, f4
	  fadds     f1, f1, f3
	  fadds     f0, f0, f2
	  stfs      f4, 0x1E4(r31)
	  stfs      f1, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	  b         .loc_0x6F8

	.loc_0x6D4:
	  fmuls     f4, f7, f5
	  fmuls     f3, f8, f5
	  fmuls     f2, f9, f5
	  fadds     f4, f6, f4
	  fadds     f1, f1, f3
	  fadds     f0, f0, f2
	  stfs      f4, 0x1E4(r31)
	  stfs      f1, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)

	.loc_0x6F8:
	  lfs       f0, 0x1E4(r31)
	  stfs      f0, 0x200(r31)
	  lfs       f0, 0x1EC(r31)
	  stfs      f0, 0x208(r31)
	  lfs       f0, 0x1E4(r31)
	  stfs      f0, 0x200(r31)
	  lfs       f0, 0x1E8(r31)
	  stfs      f0, 0x204(r31)
	  lfs       f0, 0x1EC(r31)
	  stfs      f0, 0x208(r31)

	.loc_0x720:
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  lmw       r27, 0x9C(r1)
	  lwz       r0, 0xE4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801914E8
 * Size:	000004
 */
void Game::PikiDrownState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	801914EC
 * Size:	000120
 */
void Game::PikiDrownState::onKeyEvent((Game::Piki*, SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1C(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  cmpwi     r0, 0x2
	  beq-      .loc_0x40
	  bge-      .loc_0x34
	  cmpwi     r0, 0
	  beq-      .loc_0x58
	  bge-      .loc_0x74
	  b         .loc_0x10C

	.loc_0x34:
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0xD4
	  b         .loc_0x10C

	.loc_0x40:
	  lhz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x10C
	  li        r0, 0x2
	  sth       r0, 0x16(r3)
	  b         .loc_0x10C

	.loc_0x58:
	  lwz       r3, 0x250(r31)
	  li        r4, 0x2812
	  li        r5, 0x2
	  li        r6, 0
	  li        r7, 0
	  bl        0x2D1290
	  b         .loc_0x10C

	.loc_0x74:
	  lhz       r0, 0x10(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x10C
	  lhz       r4, 0x12(r3)
	  subi      r0, r4, 0x1
	  sth       r0, 0x12(r3)
	  lhz       r0, 0x12(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x10C
	  li        r0, 0x2
	  cmplwi    r31, 0
	  sth       r0, 0x10(r3)
	  mr        r6, r31
	  beq-      .loc_0xB0
	  addi      r6, r6, 0x178

	.loc_0xB0:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x27
	  li        r5, 0x27
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  b         .loc_0x10C

	.loc_0xD4:
	  lhz       r0, 0x10(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x10C
	  bge-      .loc_0xE8
	  b         .loc_0x10C

	.loc_0xE8:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x10C
	  li        r3, 0x3
	  bl        0x9F138
	  li        r0, -0x1
	  mr        r3, r31
	  sth       r0, 0x2A4(r31)
	  li        r4, 0
	  bl        -0x56504

	.loc_0x10C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019160C
 * Size:	000358
 */
void Game::PikiEmotionState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r4
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  mr        r29, r3
	  stw       r28, 0x60(r1)
	  mr.       r28, r5
	  lis       r5, 0x8048
	  subi      r30, r5, 0x1418
	  bne-      .loc_0x48
	  addi      r3, r30, 0x78
	  addi      r5, r30, 0xF4
	  li        r4, 0xF59
	  crclr     6, 0x6
	  bl        -0x167010

	.loc_0x48:
	  lhz       r3, 0x0(r28)
	  li        r0, 0
	  sth       r3, 0x24(r29)
	  stb       r0, 0x1C(r29)
	  lhz       r0, 0x24(r29)
	  cmplwi    r0, 0x9
	  beq-      .loc_0x338
	  cmplwi    r0, 0x8
	  bgt-      .loc_0x338
	  lis       r3, 0x804B
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x37DC
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lwz       r9, 0x19C(r30)
	  addi      r3, r1, 0x40
	  lwz       r8, 0x1A0(r30)
	  li        r4, 0x3
	  lwz       r7, 0x1A4(r30)
	  lwz       r6, 0x1A8(r30)
	  lwz       r5, 0x1AC(r30)
	  lwz       r0, 0x1B0(r30)
	  stw       r9, 0x40(r1)
	  stw       r8, 0x44(r1)
	  stw       r7, 0x48(r1)
	  stw       r6, 0x4C(r1)
	  stw       r5, 0x50(r1)
	  stw       r0, 0x54(r1)
	  bl        0x66200
	  mr        r4, r3
	  cmplwi    r31, 0
	  sth       r4, 0x26(r29)
	  mr        r6, r31
	  beq-      .loc_0xD8
	  addi      r6, r31, 0x178

	.loc_0xD8:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  mr        r5, r4
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x338
	  lwz       r9, 0x1B4(r30)
	  addi      r3, r1, 0x28
	  lwz       r8, 0x1B8(r30)
	  li        r4, 0x3
	  lwz       r7, 0x1BC(r30)
	  lwz       r6, 0x1C0(r30)
	  lwz       r5, 0x1C4(r30)
	  lwz       r0, 0x1C8(r30)
	  stw       r9, 0x28(r1)
	  stw       r8, 0x2C(r1)
	  stw       r7, 0x30(r1)
	  stw       r6, 0x34(r1)
	  stw       r5, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  bl        0x6618C
	  mr        r4, r3
	  cmplwi    r31, 0
	  sth       r4, 0x26(r29)
	  mr        r6, r31
	  beq-      .loc_0x14C
	  addi      r6, r31, 0x178

	.loc_0x14C:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  mr        r5, r4
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x338
	  lwz       r7, 0x1CC(r30)
	  addi      r3, r1, 0x18
	  lwz       r6, 0x1D0(r30)
	  li        r4, 0x2
	  lwz       r5, 0x1D4(r30)
	  lwz       r0, 0x1D8(r30)
	  stw       r7, 0x18(r1)
	  stw       r6, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x24(r1)
	  bl        0x66128
	  mr        r4, r3
	  cmplwi    r31, 0
	  sth       r4, 0x26(r29)
	  mr        r6, r31
	  beq-      .loc_0x1B0
	  addi      r6, r31, 0x178

	.loc_0x1B0:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  mr        r5, r4
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x338
	  lwz       r7, 0x1DC(r30)
	  addi      r3, r1, 0x8
	  lwz       r6, 0x1E0(r30)
	  li        r4, 0x2
	  lwz       r5, 0x1E4(r30)
	  lwz       r0, 0x1E8(r30)
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r0, 0x14(r1)
	  bl        0x660C4
	  mr        r4, r3
	  cmplwi    r31, 0
	  sth       r4, 0x26(r29)
	  mr        r6, r31
	  beq-      .loc_0x214
	  addi      r6, r31, 0x178

	.loc_0x214:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  mr        r5, r4
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x338
	  li        r0, 0xC
	  cmplwi    r31, 0
	  sth       r0, 0x26(r29)
	  mr        r6, r31
	  beq-      .loc_0x24C
	  addi      r6, r31, 0x178

	.loc_0x24C:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0xC
	  li        r5, 0xC
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  b         .loc_0x338
	  li        r0, 0x31
	  cmplwi    r31, 0
	  sth       r0, 0x26(r29)
	  mr        r6, r31
	  beq-      .loc_0x288
	  addi      r6, r31, 0x178

	.loc_0x288:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x31
	  li        r5, 0x31
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  b         .loc_0x338
	  li        r0, 0x33
	  cmplwi    r31, 0
	  sth       r0, 0x26(r29)
	  mr        r6, r31
	  beq-      .loc_0x2C4
	  addi      r6, r31, 0x178

	.loc_0x2C4:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x33
	  li        r5, 0x33
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  b         .loc_0x338
	  li        r0, 0x1F
	  cmplwi    r31, 0
	  sth       r0, 0x26(r29)
	  mr        r6, r31
	  beq-      .loc_0x300
	  addi      r6, r31, 0x178

	.loc_0x300:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x1F
	  li        r5, 0x1F
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  b         .loc_0x338
	  addi      r3, r30, 0x78
	  addi      r5, r30, 0x1EC
	  li        r4, 0x1010
	  crclr     6, 0x6
	  bl        -0x167300

	.loc_0x338:
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
 * Size:	000004
 */
void Game::PikiEmotionState::doDump(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80191964
 * Size:	0000A8
 */
void Game::PikiEmotionState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x5580(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  stfs      f0, 0x1E4(r4)
	  stfs      f0, 0x1E8(r4)
	  stfs      f0, 0x1EC(r4)
	  lha       r4, 0x26(r30)
	  bl        -0x54A6C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x64
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x90

	.loc_0x64:
	  lhz       r0, 0x24(r30)
	  cmplwi    r0, 0x9
	  bne-      .loc_0x90
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x90:
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
 * Address:	80191A0C
 * Size:	000004
 */
void Game::PikiEmotionState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	80191A10
 * Size:	0000C0
 */
void Game::PikiEmotionState::onKeyEvent((Game::Piki*,
                                         SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1C(r5)
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x4C
	  bge-      .loc_0xB0
	  cmpwi     r0, 0xC8
	  beq-      .loc_0x28
	  b         .loc_0xB0

	.loc_0x28:
	  lha       r0, 0x26(r3)
	  cmpwi     r0, 0x31
	  beq-      .loc_0x38
	  b         .loc_0xB0

	.loc_0x38:
	  mr        r3, r4
	  li        r4, 0x2835
	  li        r5, 0x1
	  bl        -0x49188
	  b         .loc_0xB0

	.loc_0x4C:
	  lhz       r0, 0x24(r3)
	  cmplwi    r0, 0x8
	  bne-      .loc_0x90
	  lbz       r5, 0x1D(r3)
	  subi      r0, r5, 0x1
	  stb       r0, 0x1D(r3)
	  lbz       r0, 0x1D(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x90
	  lhz       r0, 0x24(r3)
	  addi      r5, r1, 0x8
	  sth       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xB0

	.loc_0x90:
	  li        r0, 0
	  li        r5, 0
	  stb       r0, 0x1D(r3)
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB0:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80191AD0
 * Size:	000170
 */
void Game::PikiAbsorbState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  stw       r29, 0x24(r1)
	  mr.       r29, r5
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x13A0
	  li        r4, 0x1072
	  subi      r5, r5, 0x1324
	  crclr     6, 0x6
	  bl        -0x1674D0

	.loc_0x44:
	  lwz       r0, 0x0(r29)
	  stw       r0, 0x14(r30)
	  lwz       r0, 0x14(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x74
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x13A0
	  li        r4, 0x1074
	  subi      r5, r5, 0x1324
	  crclr     6, 0x6
	  bl        -0x167500

	.loc_0x74:
	  cmplwi    r31, 0
	  mr        r6, r31
	  beq-      .loc_0x84
	  addi      r6, r31, 0x178

	.loc_0x84:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x37
	  li        r5, 0x37
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  addi      r3, r1, 0x8
	  stb       r0, 0x10(r30)
	  stb       r0, 0x18(r30)
	  lwz       r4, 0x14(r30)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  addi      r4, r1, 0x14
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x53FE4
	  lwz       r3, 0x14(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x124
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x13A0
	  li        r4, 0x107B
	  subi      r5, r5, 0x1324
	  crclr     6, 0x6
	  bl        -0x1675B0

	.loc_0x124:
	  lwz       r3, 0x14(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x250(r31)
	  li        r5, 0x2833
	  li        r6, 0
	  bl        0x2D0AAC
	  li        r0, 0
	  stb       r0, 0x19(r30)
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80191C40
 * Size:	000154
 */
void Game::PikiAbsorbState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x5580(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stfs      f0, 0x208(r4)
	  stfs      f0, 0x200(r4)
	  stfs      f0, 0x1E4(r4)
	  stfs      f0, 0x1E8(r4)
	  stfs      f0, 0x1EC(r4)
	  lbz       r0, 0x10(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xA4
	  lwz       r3, 0x14(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA4
	  lbz       r0, 0x18(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xA4
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r5, r4, 0x5D00
	  stw       r31, 0xC(r1)
	  addi      r0, r3, 0x7430
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x14(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0x18(r30)

	.loc_0xA4:
	  lbz       r0, 0x18(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xD8
	  lbz       r3, 0x19(r30)
	  addi      r0, r3, 0x1
	  stb       r0, 0x19(r30)
	  lbz       r0, 0x19(r30)
	  cmplwi    r0, 0xB4
	  ble-      .loc_0xD8
	  li        r3, 0x1
	  li        r0, 0xB4
	  stb       r3, 0x18(r30)
	  stb       r0, 0x19(r30)

	.loc_0xD8:
	  mr        r3, r31
	  li        r4, 0x37
	  bl        -0x54DF4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x13C
	  lbz       r0, 0x18(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x11C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xE
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x13C

	.loc_0x11C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x13C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80191D94
 * Size:	00012C
 */
void Game::PikiAbsorbState::onKeyEvent((Game::Piki*, SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lwz       r0, 0x1C(r5)
	  stw       r31, 0x1C(r1)
	  cmpwi     r0, 0x1
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  beq-      .loc_0x54
	  bge-      .loc_0x3C
	  cmpwi     r0, 0
	  bge-      .loc_0x48
	  b         .loc_0x110

	.loc_0x3C:
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0xD0
	  b         .loc_0x110

	.loc_0x48:
	  li        r0, 0x1
	  stb       r0, 0x10(r29)
	  b         .loc_0x110

	.loc_0x54:
	  lwz       r3, 0x14(r29)
	  lhz       r0, 0x128(r3)
	  cmplwi    r0, 0x406
	  beq-      .loc_0x80
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x13A0
	  li        r4, 0x10A5
	  subi      r5, r5, 0x1324
	  crclr     6, 0x6
	  bl        -0x1677D0

	.loc_0x80:
	  lwz       r3, 0x14(r29)
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBC
	  lbz       r0, 0x18(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0xBC
	  mr        r3, r31
	  bl        0x41F58
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x110

	.loc_0xBC:
	  li        r0, 0x2
	  mr        r3, r30
	  stb       r0, 0x10(r29)
	  bl        -0x54D9C
	  b         .loc_0x110

	.loc_0xD0:
	  lbz       r0, 0x18(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lwz       r12, 0x0(r3)
	  li        r5, 0xE
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x110

	.loc_0xF8:
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x110:
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
 * Address:	80191EC0
 * Size:	000004
 */
void Game::PikiAbsorbState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	80191EC4
 * Size:	0000E0
 */
void Game::PikiGrowupState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  bl        -0xC8940
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x556C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5C
	  li        r0, 0x12
	  sth       r0, 0x10(r30)
	  b         .loc_0x64

	.loc_0x5C:
	  li        r0, 0x13
	  sth       r0, 0x10(r30)

	.loc_0x64:
	  cmplwi    r31, 0
	  mr        r6, r31
	  beq-      .loc_0x74
	  addi      r6, r31, 0x178

	.loc_0x74:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lha       r4, 0x10(r30)
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mr        r5, r4
	  mtctr     r12
	  bctrl
	  lha       r4, 0x10(r30)
	  mr        r3, r31
	  bl        -0x55034
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80191FA4
 * Size:	000078
 */
void Game::PikiGrowupState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x5580(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  stfs      f0, 0x1E4(r4)
	  stfs      f0, 0x1E8(r4)
	  stfs      f0, 0x1EC(r4)
	  lha       r4, 0x10(r30)
	  bl        -0x550AC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x60
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x60:
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
 * Address:	8019201C
 * Size:	0001A0
 */
void Game::PikiGrowupState::onKeyEvent((Game::Piki*, SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  lwz       r0, 0x1C(r5)
	  stw       r31, 0x4C(r1)
	  mr        r31, r4
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x174
	  bge-      .loc_0x18C
	  cmpwi     r0, 0x2
	  beq-      .loc_0x30
	  b         .loc_0x18C

	.loc_0x30:
	  lbz       r0, 0x2B9(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x18C
	  mr        r3, r31
	  li        r4, 0x2
	  bl        -0x478F0
	  mr        r3, r31
	  li        r4, 0x2845
	  li        r5, 0x1
	  bl        -0x497A4
	  mr        r3, r31
	  bl        -0x4A230
	  cmpwi     r3, 0
	  bne-      .loc_0x94
	  lwz       r0, 0x2C4(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  bl        -0x36DCC
	  stw       r3, 0x2C4(r31)

	.loc_0x84:
	  lwz       r3, 0x2C4(r31)
	  mr        r4, r31
	  lwz       r3, 0x254(r3)
	  bl        0x3704

	.loc_0x94:
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x18C
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x14
	  bl        0x55318
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x18C
	  lwz       r0, -0x64AC(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x164
	  lfs       f0, -0x5580(r2)
	  lis       r3, 0x8048
	  li        r0, 0
	  mr        r4, r31
	  subi      r5, r3, 0x11FC
	  stw       r0, 0x18(r1)
	  addi      r3, r1, 0x8
	  stw       r5, 0x14(r1)
	  stw       r0, 0x20(r1)
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
	  addi      r4, r1, 0x14
	  lwz       r3, -0x64AC(r13)
	  stw       r31, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x29A854

	.loc_0x164:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x14
	  bl        0x5521C
	  b         .loc_0x18C

	.loc_0x174:
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x18C:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801921BC
 * Size:	000004
 */
void Game::PikiGrowupState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	801921C0
 * Size:	000020
 */
void Game::PikiEscapeState::init((Game::Piki*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        .loc_0x20
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x20:
	*/
}

/*
 * --INFO--
 * Address:	801921E0
 * Size:	000074
 */
void Game::PikiEscapeState::initRun((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stb       r0, 0x11(r3)
	  bl        -0xC8C5C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x556C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x58
	  li        r0, 0x1
	  b         .loc_0x5C

	.loc_0x58:
	  li        r0, 0

	.loc_0x5C:
	  stb       r0, 0x10(r31)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
void Game::PikiEscapeState::initKoke((Game::Piki*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000190
 */
void Game::PikiEscapeState::findTeki((Game::Piki*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80192254
 * Size:	0005C8
 */
void Game::PikiEscapeState::exec((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stfd      f31, 0x110(r1)
	  psq_st    f31,0x118(r1),0,0
	  stfd      f30, 0x100(r1)
	  psq_st    f30,0x108(r1),0,0
	  stfd      f29, 0xF0(r1)
	  psq_st    f29,0xF8(r1),0,0
	  stw       r31, 0xEC(r1)
	  stw       r30, 0xE8(r1)
	  stw       r29, 0xE4(r1)
	  stw       r28, 0xE0(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lbz       r0, 0x11(r3)
	  cmpwi     r0, 0x3
	  bge-      .loc_0x80
	  cmpwi     r0, 0x1
	  bge-      .loc_0x54
	  b         .loc_0x80

	.loc_0x54:
	  lfs       f2, -0x54D4(r2)
	  lfs       f0, 0x1E4(r31)
	  lfs       f1, 0x1E8(r31)
	  lfs       f3, 0x1EC(r31)
	  fmuls     f0, f0, f2
	  fmuls     f1, f1, f2
	  fmuls     f2, f3, f2
	  stfs      f0, 0x1E4(r31)
	  stfs      f1, 0x1E8(r31)
	  stfs      f2, 0x1EC(r31)
	  b         .loc_0x590

	.loc_0x80:
	  mr        r4, r31
	  addi      r3, r1, 0x18
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x18(r1)
	  addi      r3, r1, 0x60
	  lfs       f2, 0x1C(r1)
	  addi      r4, r1, 0x8
	  lfs       f1, 0x20(r1)
	  lfs       f0, -0x54B8(r2)
	  stfs      f3, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  bl        0x9C08C
	  addi      r3, r1, 0x80
	  addi      r4, r1, 0x60
	  bl        0x9C0C0
	  lfs       f31, -0x54B8(r2)
	  addi      r3, r1, 0x80
	  li        r28, 0
	  bl        0x9C12C
	  b         .loc_0x1C4

	.loc_0xE4:
	  addi      r3, r1, 0x80
	  bl        0x9C208
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1BC
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1BC
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1BC
	  mr        r4, r29
	  addi      r3, r1, 0x24
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x28(r1)
	  lfs       f0, 0xC(r1)
	  lfs       f3, 0x24(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0x2C(r1)
	  lfs       f0, 0x10(r1)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x5580(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1A8
	  ble-      .loc_0x1AC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x1AC

	.loc_0x1A8:
	  fmr       f1, f0

	.loc_0x1AC:
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0x1BC
	  mr        r28, r29
	  fmr       f31, f1

	.loc_0x1BC:
	  addi      r3, r1, 0x80
	  bl        0x9C0EC

	.loc_0x1C4:
	  addi      r3, r1, 0x80
	  bl        0x9C118
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xE4
	  cmplwi    r28, 0
	  beq-      .loc_0x590
	  mr        r4, r28
	  addi      r3, r1, 0x3C
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x30
	  lwz       r12, 0x0(r31)
	  lfs       f30, 0x3C(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x40(r1)
	  lfs       f29, 0x44(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x30(r1)
	  lfs       f0, 0x34(r1)
	  fsubs     f3, f1, f30
	  lfs       f4, 0x38(r1)
	  fsubs     f2, f0, f31
	  lfs       f1, -0x5580(r2)
	  fsubs     f4, f4, f29
	  fmuls     f0, f3, f3
	  fmuls     f5, f2, f2
	  stfs      f3, 0x54(r1)
	  fmuls     f6, f4, f4
	  stfs      f2, 0x58(r1)
	  fadds     f0, f0, f5
	  stfs      f4, 0x5C(r1)
	  fadds     f0, f6, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x278
	  fmadds    f0, f3, f3, f5
	  fadds     f31, f6, f0
	  fcmpo     cr0, f31, f1
	  ble-      .loc_0x27C
	  fsqrte    f0, f31
	  fmuls     f31, f0, f31
	  b         .loc_0x27C

	.loc_0x278:
	  fmr       f31, f1

	.loc_0x27C:
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x2B8
	  lfs       f0, -0x557C(r2)
	  lfs       f2, 0x54(r1)
	  fdivs     f3, f0, f31
	  lfs       f1, 0x58(r1)
	  lfs       f0, 0x5C(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x54(r1)
	  stfs      f1, 0x58(r1)
	  stfs      f0, 0x5C(r1)
	  b         .loc_0x2BC

	.loc_0x2B8:
	  fmr       f31, f0

	.loc_0x2BC:
	  lbz       r0, 0x10(r30)
	  lfs       f3, -0x557C(r2)
	  cmplwi    r0, 0
	  beq-      .loc_0x2D0
	  lfs       f3, -0x5578(r2)

	.loc_0x2D0:
	  lfs       f4, 0x54(r1)
	  lfs       f2, -0x5580(r2)
	  lfs       f1, 0x58(r1)
	  fmuls     f0, f4, f2
	  lfs       f5, 0x5C(r1)
	  fmuls     f6, f1, f2
	  fmsubs    f0, f5, f2, f0
	  fnmsubs   f1, f5, f3, f6
	  fmsubs    f3, f4, f3, f6
	  fmuls     f4, f0, f0
	  stfs      f0, 0x4C(r1)
	  fmuls     f0, f1, f1
	  fmuls     f5, f3, f3
	  stfs      f1, 0x48(r1)
	  fadds     f0, f0, f4
	  stfs      f3, 0x50(r1)
	  fadds     f0, f5, f0
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x338
	  fmadds    f0, f1, f1, f4
	  fadds     f1, f5, f0
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0x33C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x33C

	.loc_0x338:
	  fmr       f1, f2

	.loc_0x33C:
	  lfs       f0, -0x5580(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x374
	  lfs       f0, -0x557C(r2)
	  lfs       f2, 0x48(r1)
	  fdivs     f3, f0, f1
	  lfs       f1, 0x4C(r1)
	  lfs       f0, 0x50(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x48(r1)
	  stfs      f1, 0x4C(r1)
	  stfs      f0, 0x50(r1)

	.loc_0x374:
	  bl        -0xC9028
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xCC(r1)
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  stw       r0, 0xC8(r1)
	  lfd       f2, -0x5588(r2)
	  lfd       f1, 0xC8(r1)
	  lfs       f0, -0x5598(r2)
	  fsubs     f1, f1, f2
	  lwz       r12, 0x54(r12)
	  fdivs     f30, f1, f0
	  mtctr     r12
	  bctrl
	  lfs       f2, -0x550C(r2)
	  fsubs     f1, f31, f1
	  lfs       f0, -0x5594(r2)
	  fmsubs    f0, f2, f30, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3DC
	  lfs       f1, -0x5550(r2)
	  mr        r3, r31
	  addi      r4, r1, 0x54
	  bl        -0x49610
	  b         .loc_0x3EC

	.loc_0x3DC:
	  lfs       f1, -0x5550(r2)
	  mr        r3, r31
	  addi      r4, r1, 0x48
	  bl        -0x49624

	.loc_0x3EC:
	  bl        -0xC90A0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xCC(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0xC8(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0xC8(r1)
	  lfs       f0, -0x5504(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x510
	  bl        -0xC90D4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xCC(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0xC8(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0xC8(r1)
	  lfs       f0, -0x555C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x490
	  cmplwi    r31, 0
	  mr        r6, r31
	  beq-      .loc_0x464
	  addi      r6, r31, 0x178

	.loc_0x464:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x3C
	  li        r5, 0x3C
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0x2
	  stb       r0, 0x11(r30)
	  b         .loc_0x4C8

	.loc_0x490:
	  cmplwi    r31, 0
	  mr        r6, r31
	  beq-      .loc_0x4A0
	  addi      r6, r31, 0x178

	.loc_0x4A0:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0x1A
	  li        r5, 0x1A
	  lwz       r12, 0x208(r12)
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0x11(r30)

	.loc_0x4C8:
	  bl        -0xC917C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xCC(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0xC8(r1)
	  lfs       f2, -0x5598(r2)
	  lfd       f0, 0xC8(r1)
	  lfs       f1, -0x54D8(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x5590(r2)
	  fdivs     f2, f3, f2
	  fmadds    f0, f1, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xD0(r1)
	  lwz       r0, 0xD4(r1)
	  stb       r0, 0x10(r30)
	  b         .loc_0x590

	.loc_0x510:
	  bl        -0xC91C4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xD4(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0xD0(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0xD0(r1)
	  lfs       f0, -0x5534(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x590
	  li        r0, 0
	  stb       r0, 0x11(r30)
	  bl        -0xC9200
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xD4(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0xD0(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0xD0(r1)
	  lfs       f0, -0x556C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x588
	  li        r0, 0x1
	  b         .loc_0x58C

	.loc_0x588:
	  li        r0, 0

	.loc_0x58C:
	  stb       r0, 0x10(r30)

	.loc_0x590:
	  psq_l     f31,0x118(r1),0,0
	  lfd       f31, 0x110(r1)
	  psq_l     f30,0x108(r1),0,0
	  lfd       f30, 0x100(r1)
	  psq_l     f29,0xF8(r1),0,0
	  lfd       f29, 0xF0(r1)
	  lwz       r31, 0xEC(r1)
	  lwz       r30, 0xE8(r1)
	  lwz       r29, 0xE4(r1)
	  lwz       r0, 0x124(r1)
	  lwz       r28, 0xE0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019281C
 * Size:	00017C
 */
void Game::PikiEscapeState::onKeyEvent((Game::Piki*, SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lwz       r0, 0x1C(r5)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  cmpwi     r0, 0xC8
	  beq-      .loc_0x48
	  bge-      .loc_0x3C
	  cmpwi     r0, 0x2
	  beq-      .loc_0x8C
	  bge-      .loc_0x168
	  cmpwi     r0, 0x1
	  bge-      .loc_0xC0
	  b         .loc_0x168

	.loc_0x3C:
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x108
	  b         .loc_0x168

	.loc_0x48:
	  lbz       r0, 0x11(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x64
	  bge-      .loc_0x168
	  cmpwi     r0, 0x1
	  bge-      .loc_0x78
	  b         .loc_0x168

	.loc_0x64:
	  mr        r3, r4
	  li        r4, 0x2843
	  li        r5, 0x1
	  bl        -0x49FC0
	  b         .loc_0x168

	.loc_0x78:
	  mr        r3, r4
	  li        r4, 0x2844
	  li        r5, 0x1
	  bl        -0x49FD4
	  b         .loc_0x168

	.loc_0x8C:
	  lbz       r0, 0x11(r31)
	  cmplwi    r0, 0x1
	  beq-      .loc_0xA0
	  cmplwi    r0, 0x2
	  bne-      .loc_0x168

	.loc_0xA0:
	  lfs       f0, -0x5580(r2)
	  stfs      f0, 0x200(r4)
	  stfs      f0, 0x204(r4)
	  stfs      f0, 0x208(r4)
	  stfs      f0, 0x1E4(r4)
	  stfs      f0, 0x1E8(r4)
	  stfs      f0, 0x1EC(r4)
	  b         .loc_0x168

	.loc_0xC0:
	  lbz       r0, 0x11(r31)
	  cmplwi    r0, 0x1
	  beq-      .loc_0xD4
	  cmplwi    r0, 0x2
	  bne-      .loc_0x168

	.loc_0xD4:
	  lbz       r3, 0x10(r31)
	  subi      r0, r3, 0x1
	  stb       r0, 0x10(r31)
	  lbz       r0, 0x10(r31)
	  extsb.    r0, r0
	  bgt-      .loc_0x168
	  lbz       r0, 0x1C4(r4)
	  ori       r0, r0, 0x2
	  stb       r0, 0x1C4(r4)
	  lbz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x2
	  stb       r0, 0x1E0(r4)
	  b         .loc_0x168

	.loc_0x108:
	  lbz       r0, 0x11(r31)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x11C
	  cmplwi    r0, 0x2
	  bne-      .loc_0x168

	.loc_0x11C:
	  li        r0, 0
	  stb       r0, 0x11(r31)
	  bl        -0xC93A0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x5588(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x5598(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x556C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x160
	  li        r0, 0x1
	  b         .loc_0x164

	.loc_0x160:
	  li        r0, 0

	.loc_0x164:
	  stb       r0, 0x10(r31)

	.loc_0x168:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80192998
 * Size:	000004
 */
void Game::PikiEscapeState::cleanup((Game::Piki*)) { }

/*
 * --INFO--
 * Address:	8019299C
 * Size:	000008
 */
u32 Game::PikiEscapeState::callable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	801929A4
 * Size:	000008
 */
u32 Game::PikiState::invincible((Game::Piki*)) { return 0x0; }

/*
 * --INFO--
 * Address:	801929AC
 * Size:	000008
 */
u32 Game::PikiState::dopable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	801929B4
 * Size:	000008
 */
u32 Game::PikiState::pressable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	801929BC
 * Size:	000004
 */
void Game::PikiState::onFlute((Game::Piki*, Game::Navi*)) { }

/*
 * --INFO--
 * Address:	801929C0
 * Size:	000008
 */
u32 Game::PikiState::callable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	801929C8
 * Size:	000008
 */
u32 Game::PikiEmotionState::callable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	801929D0
 * Size:	000008
 */
u32 Game::PikiKokeState::callable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	801929D8
 * Size:	000008
 */
u32 Game::PikiKokeDamageState::callable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	801929E0
 * Size:	000008
 */
u32 Game::PikiBlowState::pressable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	801929E8
 * Size:	000008
 */
u32 Game::PikiBlowState::callable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	801929F0
 * Size:	000008
 */
u32 Game::PikiFlickState::callable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	801929F8
 * Size:	00000C
 */
void PikiAI::ActCropArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x11E8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80192A04
 * Size:	000008
 */
u32 Game::PikiFlyingState::callable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80192A0C
 * Size:	000008
 */
u32 Game::PikiSuikomiState::pressable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80192A14
 * Size:	000008
 */
u32 Game::PikiFallMeckState::pressable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80192A1C
 * Size:	000008
 */
u32 Game::PikiWaterHangedState::throwable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192A24
 * Size:	000008
 */
u32 Game::PikiHangedState::throwable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192A2C
 * Size:	000008
 */
u32 Game::PikiGoHangState::callable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192A34
 * Size:	000008
 */
u32 Game::PikiGoHangState::throwable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192A3C
 * Size:	000008
 */
u32 Game::PikiAutoNukiState::callable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80192A44
 * Size:	000008
 */
u32 Game::PikiLookAtState::callable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80192A4C
 * Size:	000008
 */
u32 Game::PikiPressedState::pressable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80192A54
 * Size:	000008
 */
u32 Game::PikiPressedState::dead(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192A5C
 * Size:	000008
 */
u32 Game::PikiDenkiDyingState::pressable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80192A64
 * Size:	000008
 */
u32 Game::PikiDenkiDyingState::dead(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192A6C
 * Size:	000008
 */
u32 Game::PikiDyingState::pressable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80192A74
 * Size:	000008
 */
u32 Game::PikiDyingState::dead(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192A7C
 * Size:	000008
 */
u32 Game::PikiDeadState::pressable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80192A84
 * Size:	000008
 */
u32 Game::PikiDeadState::transittable((int)) { return 0x0; }

/*
 * --INFO--
 * Address:	80192A8C
 * Size:	000008
 */
u32 Game::PikiDeadState::dead(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192A94
 * Size:	000008
 */
u32 Game::PikiTaneState::callable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80192A9C
 * Size:	000008
 */
u32 Game::PikiFountainonState::callable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80192AA4
 * Size:	000008
 */
u32 Game::PikiFountainonState::soft_transittable((int)) { return 0x0; }

/*
 * --INFO--
 * Address:	80192AAC
 * Size:	000008
 */
u32 Game::PikiFountainonState::invincible((Game::Piki*)) { return 0x1; }

/*
 * --INFO--
 * Address:	80192AB4
 * Size:	000008
 */
u32 Game::PikiHoleinState::callable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80192ABC
 * Size:	000008
 */
u32 Game::PikiHoleinState::soft_transittable((int)) { return 0x0; }

/*
 * --INFO--
 * Address:	80192AC4
 * Size:	000008
 */
u32 Game::PikiHoleinState::invincible((Game::Piki*)) { return 0x1; }

/*
 * --INFO--
 * Address:	80192ACC
 * Size:	000008
 */
u32 Game::PikiSwallowedState::dead(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192AD4
 * Size:	000008
 */
u32 Game::PikiSwallowedState::ignoreAtari((Game::Piki*, Game::Creature*))
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	80192ADC
 * Size:	000008
 */
u32 Game::PikiSwallowedState::callable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80192AE4
 * Size:	000008
 */
u32 Game::PikiDemoWaitState::invincible((Game::Piki*)) { return 0x1; }

/*
 * --INFO--
 * Address:	80192AEC
 * Size:	000008
 */
u32 Game::PikiWalkState::dopable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192AF4
 * Size:	000008
 */
u32 Game::PikiWalkState::aiActive(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192AFC
 * Size:	000008
 */
u32 Game::PikiWalkState::callable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192B04
 * Size:	000008
 */
u32 Game::PikiWalkState::releasable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192B0C
 * Size:	000008
 */
u32 Game::PikiWalkState::battleOK(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192B14
 * Size:	000008
 */
u32 Game::PikiWalkState::throwable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80192B1C
 * Size:	000004
 */
void resume__Q24Game22FSMState<Game::Piki> FPQ24Game4Piki(void) { }

/*
 * --INFO--
 * Address:	80192B20
 * Size:	000004
 */
void restart__Q24Game22FSMState<Game::Piki> FPQ24Game4Piki(void) { }

/*
 * --INFO--
 * Address:	80192B24
 * Size:	000064
 */
void create__Q24Game26StateMachine<Game::Piki> Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0xC(r3)
	  stw       r0, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x16EBA0
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x16EBB0
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x16EBC0
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80192B88
 * Size:	000084
 */
void registerState__Q24Game26StateMachine<Game::Piki>
FPQ24Game22FSMState<Game::Piki>(void)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r6,2,0,29
	  stwx      r4, r5, r0
	  lwz       r5, 0x4(r4)
	  cmpwi     r5, 0
	  blt-      .loc_0x34
	  lwz       r0, 0xC(r3)
	  cmpw      r5, r0
	  blt-      .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  beqlr-
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r3)
	  lwz       r6, 0x4(r4)
	  lwz       r5, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r6, r5, r0
	  lwz       r0, 0x4(r4)
	  lwz       r5, 0x8(r3)
	  lwz       r4, 0x14(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80192C0C
 * Size:	000028
 */
void __sinit_pikiState_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6CC0(r13)
	  stfsu     f0, 0x37D0(r3)
	  stfs      f0, -0x6CBC(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80192C34
 * Size:	000014
 */
void @28 @4 @Game::PikiLookAtState::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x1C
	  b         -0x5CC4
	*/
}

/*
 * --INFO--
 * Address:	80192C48
 * Size:	000014
 */
void @20 @4 @Game::PikiHangedState::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x14
	  b         -0x5524
	*/
}

/*
 * --INFO--
 * Address:	80192C5C
 * Size:	000014
 */
void @24 @4 @Game::PikiWaterHangedState::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x18
	  b         -0x5364
	*/
}

/*
 * --INFO--
 * Address:	80192C70
 * Size:	000014
 */
void @48 @4 @Game::PikiFlickState::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x30
	  b         -0x2DD4
	*/
}
