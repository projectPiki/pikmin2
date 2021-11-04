#include "types.h"

/*
 * --INFO--
 * Address:	80124778
 * Size:	00003C
 */
void Game::makeObjectEnemy()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x50
	  stw       r0, 0x14(r1)
	  bl        -0x1008E4
	  mr.       r0, r3
	  beq-      .loc_0x28
	  li        r4, 0x1
	  bl        .loc_0x3C
	  mr        r0, r3

	.loc_0x28:
	  mr        r3, r0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x3C:
	*/
}

/*
 * --INFO--
 * Address:	801247B4
 * Size:	0000D0
 */
void Game::GenObjectEnemy::GenObjectEnemy()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x24
	  addi      r0, r31, 0x4D
	  stw       r0, 0x0(r31)

	.loc_0x24:
	  lis       r4, 0x8048
	  lis       r3, 0x8048
	  subi      r6, r4, 0x48A4
	  lis       r4, 0x7465
	  subi      r7, r3, 0x4898
	  addi      r5, r4, 0x6B69
	  mr        r3, r31
	  li        r4, 0
	  bl        0x85EEC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r0, r4, 0x563C
	  li        r4, 0
	  stw       r0, 0xC(r31)
	  subi      r3, r3, 0x2420
	  li        r0, 0x1
	  lfs       f1, -0x64B8(r2)
	  stw       r3, 0xC(r31)
	  addi      r3, r31, 0x3C
	  lfs       f0, -0x64B4(r2)
	  stw       r4, 0x24(r31)
	  stb       r0, 0x28(r31)
	  stb       r4, 0x29(r31)
	  sth       r0, 0x2A(r31)
	  stfs      f1, 0x2C(r31)
	  stfs      f0, 0x30(r31)
	  stfs      f0, 0x34(r31)
	  sth       r4, 0x38(r31)
	  bl        0x9B04
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x48(r31)
	  stb       r0, 0x4C(r31)
	  bl        0x10D0
	  lbz       r0, 0x4C(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x1
	  stb       r0, 0x4C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80124884
 * Size:	00008C
 */
void Game::GenObjectEnemy::initialise()
{
	/*
	.loc_0x0:
	  lwz       r8, -0x6C60(r13)
	  lwz       r5, 0x0(r8)
	  lwz       r0, 0x4(r8)
	  cmpw      r5, r0
	  bgelr-
	  lis       r4, 0x7465
	  lwz       r3, 0x8(r8)
	  addi      r4, r4, 0x6B69
	  rlwinm    r0,r5,4,0,27
	  stwx      r4, r3, r0
	  lis       r5, 0x8012
	  lis       r4, 0x8048
	  lis       r3, 0x3030
	  lwz       r0, 0x0(r8)
	  addi      r7, r5, 0x4778
	  lwz       r6, 0x8(r8)
	  subi      r5, r4, 0x488C
	  rlwinm    r0,r0,4,0,27
	  addi      r4, r3, 0x3035
	  add       r3, r6, r0
	  stw       r7, 0x4(r3)
	  lwz       r0, 0x0(r8)
	  lwz       r3, 0x8(r8)
	  rlwinm    r0,r0,4,0,27
	  add       r3, r3, r0
	  stw       r5, 0x8(r3)
	  lwz       r0, 0x0(r8)
	  lwz       r3, 0x8(r8)
	  rlwinm    r0,r0,4,0,27
	  add       r3, r3, r0
	  stw       r4, 0xC(r3)
	  lwz       r3, 0x0(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r8)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80124910
 * Size:	000004
 */
void Game::GenObjectEnemy::ramSaveParameters(Stream&) { }

/*
 * --INFO--
 * Address:	80124914
 * Size:	000004
 */
void Game::GenObjectEnemy::ramLoadParameters(Stream&) { }

/*
 * --INFO--
 * Address:	80124918
 * Size:	0006B4
 */
void Game::GenObjectEnemy::generate(Game::Generator*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1B0(r1)
	  mflr      r0
	  stw       r0, 0x1B4(r1)
	  stfd      f31, 0x1A0(r1)
	  psq_st    f31,0x1A8(r1),0,0
	  stfd      f30, 0x190(r1)
	  psq_st    f30,0x198(r1),0,0
	  stfd      f29, 0x180(r1)
	  psq_st    f29,0x188(r1),0,0
	  stfd      f28, 0x170(r1)
	  psq_st    f28,0x178(r1),0,0
	  stfd      f27, 0x160(r1)
	  psq_st    f27,0x168(r1),0,0
	  stfd      f26, 0x150(r1)
	  psq_st    f26,0x158(r1),0,0
	  stmw      r20, 0x120(r1)
	  lfs       f1, 0x94(r4)
	  mr        r27, r4
	  lfs       f0, 0xA0(r4)
	  mr        r26, r3
	  lfs       f3, 0x98(r27)
	  lis       r3, 0x8012
	  fadds     f31, f1, f0
	  lfs       f2, 0xA4(r27)
	  lfs       f1, 0x9C(r27)
	  subi      r4, r3, 0xCB8
	  lfs       f0, 0xA8(r27)
	  fadds     f30, f3, f2
	  lwz       r7, 0x74(r27)
	  fadds     f29, f1, f0
	  lha       r0, 0x2A(r26)
	  addi      r3, r1, 0x90
	  li        r5, 0
	  li        r6, 0xC
	  sub       r29, r0, r7
	  li        r7, 0xA
	  bl        -0x6316C
	  lis       r4, 0x8012
	  addi      r3, r1, 0x18
	  subi      r4, r4, 0xCB8
	  li        r5, 0
	  li        r6, 0xC
	  li        r7, 0xA
	  bl        -0x63188
	  addi      r31, r1, 0x90
	  li        r22, 0
	  mr        r28, r31
	  b         .loc_0x190

	.loc_0xC0:
	  lbz       r0, 0x28(r26)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xDC
	  stfs      f31, 0x0(r28)
	  stfs      f30, 0x4(r28)
	  stfs      f29, 0x8(r28)
	  b         .loc_0x188

	.loc_0xDC:
	  bl        -0x5B454
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x10C(r1)
	  lfd       f3, -0x6498(r2)
	  stw       r0, 0x108(r1)
	  lfs       f1, -0x64B0(r2)
	  lfd       f2, 0x108(r1)
	  lfs       f0, -0x64AC(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f26, f0, f1
	  bl        -0x5B484
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x114(r1)
	  fmr       f1, f26
	  lfd       f4, -0x6498(r2)
	  stw       r0, 0x110(r1)
	  lfs       f2, -0x64B0(r2)
	  lfd       f3, 0x110(r1)
	  lfs       f0, 0x2C(r26)
	  fsubs     f3, f3, f4
	  fdivs     f2, f3, f2
	  fmuls     f28, f0, f2
	  bl        0x2ECD40
	  fmuls     f27, f28, f1
	  fmr       f1, f26
	  bl        0x2ECCCC
	  fmuls     f1, f28, f1
	  lfs       f0, -0x64B4(r2)
	  stfs      f1, 0x0(r28)
	  stfs      f0, 0x4(r28)
	  stfs      f27, 0x8(r28)
	  lfs       f0, 0x0(r28)
	  lfs       f1, 0x4(r28)
	  fadds     f0, f0, f31
	  lfs       f2, 0x8(r28)
	  fadds     f1, f1, f30
	  fadds     f2, f2, f29
	  stfs      f0, 0x0(r28)
	  stfs      f1, 0x4(r28)
	  stfs      f2, 0x8(r28)

	.loc_0x188:
	  addi      r28, r28, 0xC
	  addi      r22, r22, 0x1

	.loc_0x190:
	  cmpw      r22, r29
	  blt+      .loc_0xC0
	  lfs       f1, 0x34(r26)
	  lfs       f0, -0x64B4(r2)
	  lfs       f28, -0x64A8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1B0
	  fmr       f28, f1

	.loc_0x1B0:
	  li        r28, 0
	  addi      r30, r1, 0x18

	.loc_0x1B8:
	  cmpwi     r29, 0
	  li        r5, 0
	  ble-      .loc_0x290
	  cmpwi     r29, 0x8
	  subi      r3, r29, 0x8
	  ble-      .loc_0x258
	  addi      r0, r3, 0x7
	  addi      r4, r1, 0x18
	  rlwinm    r0,r0,29,3,31
	  lfs       f0, -0x64B4(r2)
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x258

	.loc_0x1EC:
	  stfs      f0, 0x8(r4)
	  addi      r5, r5, 0x8
	  stfs      f0, 0x4(r4)
	  stfs      f0, 0x0(r4)
	  stfs      f0, 0x14(r4)
	  stfs      f0, 0x10(r4)
	  stfs      f0, 0xC(r4)
	  stfs      f0, 0x20(r4)
	  stfs      f0, 0x1C(r4)
	  stfs      f0, 0x18(r4)
	  stfs      f0, 0x2C(r4)
	  stfs      f0, 0x28(r4)
	  stfs      f0, 0x24(r4)
	  stfs      f0, 0x38(r4)
	  stfs      f0, 0x34(r4)
	  stfs      f0, 0x30(r4)
	  stfs      f0, 0x44(r4)
	  stfs      f0, 0x40(r4)
	  stfs      f0, 0x3C(r4)
	  stfs      f0, 0x50(r4)
	  stfs      f0, 0x4C(r4)
	  stfs      f0, 0x48(r4)
	  stfs      f0, 0x5C(r4)
	  stfs      f0, 0x58(r4)
	  stfs      f0, 0x54(r4)
	  addi      r4, r4, 0x60
	  bdnz+     .loc_0x1EC

	.loc_0x258:
	  mulli     r3, r5, 0xC
	  addi      r4, r1, 0x18
	  sub       r0, r29, r5
	  lfs       f0, -0x64B4(r2)
	  add       r4, r4, r3
	  mtctr     r0
	  cmpw      r5, r29
	  bge-      .loc_0x290

	.loc_0x278:
	  stfs      f0, 0x8(r4)
	  addi      r5, r5, 0x1
	  stfs      f0, 0x4(r4)
	  stfs      f0, 0x0(r4)
	  addi      r4, r4, 0xC
	  bdnz+     .loc_0x278

	.loc_0x290:
	  mr        r23, r31
	  mr        r22, r30
	  li        r21, 0
	  b         .loc_0x3A8

	.loc_0x2A0:
	  addi      r20, r21, 0x1
	  addi      r25, r1, 0x90
	  mulli     r0, r20, 0xC
	  addi      r24, r1, 0x18
	  add       r25, r25, r0
	  add       r24, r24, r0
	  b         .loc_0x394

	.loc_0x2BC:
	  lfs       f2, 0x4(r23)
	  lfs       f0, 0x4(r25)
	  lfs       f1, 0x0(r23)
	  fsubs     f30, f2, f0
	  lfs       f0, 0x0(r25)
	  lfs       f2, 0x8(r23)
	  fsubs     f29, f1, f0
	  lfs       f1, 0x8(r25)
	  fmuls     f0, f30, f30
	  fsubs     f31, f2, f1
	  fmadds    f0, f29, f29, f0
	  fmadds    f26, f31, f31, f0
	  fmr       f1, f26
	  bl        0x2ECBFC
	  fmr       f27, f1
	  fcmpo     cr0, f27, f28
	  bge-      .loc_0x388
	  fmr       f1, f26
	  bl        0x2ECBE8
	  lfs       f0, -0x64B4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x328
	  lfs       f0, -0x64A4(r2)
	  fdivs     f0, f0, f1
	  fmuls     f29, f29, f0
	  fmuls     f30, f30, f0
	  fmuls     f31, f31, f0

	.loc_0x328:
	  fsubs     f1, f28, f27
	  lfs       f2, -0x64A0(r2)
	  lfs       f0, 0x0(r22)
	  fmuls     f1, f2, f1
	  fmuls     f29, f29, f1
	  fmuls     f30, f30, f1
	  fmuls     f31, f31, f1
	  fadds     f0, f0, f29
	  stfs      f0, 0x0(r22)
	  lfs       f0, 0x4(r22)
	  fadds     f0, f0, f30
	  stfs      f0, 0x4(r22)
	  lfs       f0, 0x8(r22)
	  fadds     f0, f0, f31
	  stfs      f0, 0x8(r22)
	  lfs       f0, 0x0(r24)
	  fsubs     f0, f0, f29
	  stfs      f0, 0x0(r24)
	  lfs       f0, 0x4(r24)
	  fsubs     f0, f0, f30
	  stfs      f0, 0x4(r24)
	  lfs       f0, 0x8(r24)
	  fsubs     f0, f0, f31
	  stfs      f0, 0x8(r24)

	.loc_0x388:
	  addi      r25, r25, 0xC
	  addi      r24, r24, 0xC
	  addi      r20, r20, 0x1

	.loc_0x394:
	  cmpw      r20, r29
	  blt+      .loc_0x2BC
	  addi      r23, r23, 0xC
	  addi      r22, r22, 0xC
	  addi      r21, r21, 0x1

	.loc_0x3A8:
	  cmpw      r21, r29
	  blt+      .loc_0x2A0
	  cmpwi     r29, 0
	  li        r6, 0
	  ble-      .loc_0x5D8
	  cmpwi     r29, 0x8
	  subi      r3, r29, 0x8
	  ble-      .loc_0x574
	  addi      r0, r3, 0x7
	  mr        r4, r30
	  rlwinm    r0,r0,29,3,31
	  mr        r5, r31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x574

	.loc_0x3E4:
	  lfs       f1, 0x0(r5)
	  addi      r6, r6, 0x8
	  lfs       f0, 0x0(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x0(r5)
	  lfs       f1, 0x4(r5)
	  lfs       f0, 0x4(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r5)
	  lfs       f1, 0x8(r5)
	  lfs       f0, 0x8(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8(r5)
	  lfs       f1, 0xC(r5)
	  lfs       f0, 0xC(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0xC(r5)
	  lfs       f1, 0x10(r5)
	  lfs       f0, 0x10(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x10(r5)
	  lfs       f1, 0x14(r5)
	  lfs       f0, 0x14(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x14(r5)
	  lfs       f1, 0x18(r5)
	  lfs       f0, 0x18(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r5)
	  lfs       f1, 0x1C(r5)
	  lfs       f0, 0x1C(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1C(r5)
	  lfs       f1, 0x20(r5)
	  lfs       f0, 0x20(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x20(r5)
	  lfs       f1, 0x24(r5)
	  lfs       f0, 0x24(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x24(r5)
	  lfs       f1, 0x28(r5)
	  lfs       f0, 0x28(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x28(r5)
	  lfs       f1, 0x2C(r5)
	  lfs       f0, 0x2C(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C(r5)
	  lfs       f1, 0x30(r5)
	  lfs       f0, 0x30(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x30(r5)
	  lfs       f1, 0x34(r5)
	  lfs       f0, 0x34(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x34(r5)
	  lfs       f1, 0x38(r5)
	  lfs       f0, 0x38(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r5)
	  lfs       f1, 0x3C(r5)
	  lfs       f0, 0x3C(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x3C(r5)
	  lfs       f1, 0x40(r5)
	  lfs       f0, 0x40(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x40(r5)
	  lfs       f1, 0x44(r5)
	  lfs       f0, 0x44(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x44(r5)
	  lfs       f1, 0x48(r5)
	  lfs       f0, 0x48(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x48(r5)
	  lfs       f1, 0x4C(r5)
	  lfs       f0, 0x4C(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4C(r5)
	  lfs       f1, 0x50(r5)
	  lfs       f0, 0x50(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x50(r5)
	  lfs       f1, 0x54(r5)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x54(r5)
	  lfs       f1, 0x58(r5)
	  lfs       f0, 0x58(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x58(r5)
	  lfs       f0, 0x5C(r4)
	  addi      r4, r4, 0x60
	  lfs       f1, 0x5C(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x5C(r5)
	  addi      r5, r5, 0x60
	  bdnz+     .loc_0x3E4

	.loc_0x574:
	  mulli     r5, r6, 0xC
	  addi      r3, r1, 0x18
	  addi      r4, r1, 0x90
	  sub       r0, r29, r6
	  add       r3, r3, r5
	  add       r4, r4, r5
	  mtctr     r0
	  cmpw      r6, r29
	  bge-      .loc_0x5D8

	.loc_0x598:
	  lfs       f2, 0x0(r4)
	  addi      r6, r6, 0x1
	  lfs       f0, 0x0(r3)
	  lfs       f1, 0x4(r3)
	  fadds     f2, f2, f0
	  lfs       f0, 0x8(r3)
	  addi      r3, r3, 0xC
	  stfs      f2, 0x0(r4)
	  lfs       f2, 0x4(r4)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4(r4)
	  lfs       f1, 0x8(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8(r4)
	  addi      r4, r4, 0xC
	  bdnz+     .loc_0x598

	.loc_0x5D8:
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x5
	  blt+      .loc_0x1B8
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  li        r20, 0
	  subi      r30, r4, 0x5D0C
	  subi      r28, r3, 0x242C
	  b         .loc_0x664

	.loc_0x5FC:
	  lwz       r3, -0x6CF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x620
	  lwz       r12, 0x4(r3)
	  mr        r4, r31
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x4(r31)

	.loc_0x620:
	  stw       r30, 0x8(r1)
	  mr        r3, r26
	  lfs       f2, 0x0(r31)
	  addi      r4, r1, 0x8
	  lfs       f1, 0x4(r31)
	  lfs       f0, 0x8(r31)
	  stw       r28, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  lwz       r12, 0xC(r26)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  stw       r27, 0xC4(r3)
	  addi      r31, r31, 0xC
	  addi      r20, r20, 0x1

	.loc_0x664:
	  cmpw      r20, r29
	  blt+      .loc_0x5FC
	  li        r3, 0
	  psq_l     f31,0x1A8(r1),0,0
	  lfd       f31, 0x1A0(r1)
	  psq_l     f30,0x198(r1),0,0
	  lfd       f30, 0x190(r1)
	  psq_l     f29,0x188(r1),0,0
	  lfd       f29, 0x180(r1)
	  psq_l     f28,0x178(r1),0,0
	  lfd       f28, 0x170(r1)
	  psq_l     f27,0x168(r1),0,0
	  lfd       f27, 0x160(r1)
	  psq_l     f26,0x158(r1),0,0
	  lfd       f26, 0x150(r1)
	  lmw       r20, 0x120(r1)
	  lwz       r0, 0x1B4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1B0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80124FCC
 * Size:	0000E0
 */
void Game::GenObjectEnemy::birth(Game::GenArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r4
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  lwz       r12, 0xC(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x8
	  bl        0x9C28
	  lfs       f0, 0x4(r31)
	  addi      r5, r1, 0x8
	  lfs       f1, -0x648C(r2)
	  stfs      f0, 0x8(r1)
	  lfs       f2, -0x6490(r2)
	  lfs       f0, 0x8(r31)
	  lwz       r3, -0x6E20(r13)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0xC(r31)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x30(r30)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x14(r1)
	  lbz       r0, 0x29(r30)
	  stb       r0, 0x18(r1)
	  lwz       r0, 0x48(r30)
	  stw       r0, 0x1C(r1)
	  lha       r0, 0x38(r30)
	  sth       r0, 0x20(r1)
	  lbz       r0, 0x3C(r30)
	  stb       r0, 0x24(r1)
	  lbz       r0, 0x3D(r30)
	  stb       r0, 0x25(r1)
	  lbz       r0, 0x3E(r30)
	  stb       r0, 0x26(r1)
	  lbz       r0, 0x3F(r30)
	  stb       r0, 0x27(r1)
	  lfs       f0, 0x40(r30)
	  stfs      f0, 0x28(r1)
	  lwz       r4, 0x24(r30)
	  bl        -0x17BBC
	  mr.       r31, r3
	  beq-      .loc_0xC4
	  li        r4, 0
	  bl        0x15F3C

	.loc_0xC4:
	  lwz       r0, 0x54(r1)
	  mr        r3, r31
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801250AC
 * Size:	000218
 */
void Game::GenObjectEnemy::doWrite(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r5, 0x48B0
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  mr        r3, r29
	  lwz       r4, 0x414(r4)
	  bl        0x2EF358
	  lwz       r0, 0x24(r30)
	  mr        r3, r29
	  rlwinm    r0,r0,0,16,31
	  extsh     r4, r0
	  bl        0x2F0640
	  mr        r3, r29
	  addi      r4, r31, 0x30
	  subi      r5, r2, 0x6488
	  crclr     6, 0x6
	  bl        0x2EF0D8
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x2EF324
	  lbz       r4, 0x29(r30)
	  mr        r3, r29
	  bl        0x2F0554
	  mr        r3, r29
	  addi      r4, r31, 0x30
	  addi      r5, r31, 0x3C
	  crclr     6, 0x6
	  bl        0x2EF0AC
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x2EF2F8
	  lha       r0, 0x2A(r30)
	  mr        r3, r29
	  rlwinm    r0,r0,0,16,31
	  extsh     r4, r0
	  bl        0x2F05E0
	  mr        r3, r29
	  addi      r4, r31, 0x30
	  addi      r5, r31, 0x4C
	  crclr     6, 0x6
	  bl        0x2EF078
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x2EF2C4
	  lfs       f1, 0x30(r30)
	  mr        r3, r29
	  bl        0x2F06CC
	  mr        r3, r29
	  addi      r4, r31, 0x30
	  addi      r5, r31, 0x58
	  crclr     6, 0x6
	  bl        0x2EF04C
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x2EF298
	  lbz       r4, 0x28(r30)
	  mr        r3, r29
	  bl        0x2F04C8
	  mr        r3, r29
	  addi      r4, r31, 0x30
	  addi      r5, r31, 0x68
	  crclr     6, 0x6
	  bl        0x2EF020
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x2EF26C
	  lfs       f1, 0x2C(r30)
	  mr        r3, r29
	  bl        0x2F0674
	  mr        r3, r29
	  addi      r4, r31, 0x30
	  addi      r5, r31, 0x7C
	  crclr     6, 0x6
	  bl        0x2EEFF4
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x2EF240
	  lfs       f1, 0x34(r30)
	  mr        r3, r29
	  bl        0x2F0648
	  mr        r3, r29
	  addi      r4, r31, 0x30
	  addi      r5, r31, 0x8C
	  crclr     6, 0x6
	  bl        0x2EEFC8
	  mr        r4, r29
	  addi      r3, r30, 0x38
	  bl        0x48CF0
	  addi      r3, r30, 0x3C
	  mr        r4, r29
	  lwz       r12, 0x44(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r30, 0x48(r30)
	  cmplwi    r30, 0
	  beq-      .loc_0x1FC
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r30, 0x18
	  bl        0x2EE1A0
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x2EF1C4
	  mr        r4, r29
	  addi      r3, r30, 0x18
	  bl        0x2EE1E4
	  mr        r3, r29
	  addi      r4, r31, 0x98
	  crclr     6, 0x6
	  bl        0x2EEF50
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1FC:
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
 * Address:	801252C4
 * Size:	000004
 */
void Game::EnemyGeneratorBase::doWrite(Stream&) { }

/*
 * --INFO--
 * Address:	801252C8
 * Size:	00000C
 */
void Game::EnemyGeneratorBase::getLatestVersion()
{
	/*
	.loc_0x0:
	  lis       r3, 0x3F3F
	  addi      r3, r3, 0x3F3F
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801252D4
 * Size:	0001E4
 */
void Game::GenObjectEnemy::doRead(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  li        r5, 0
	  lfs       f1, -0x64B4(r2)
	  stw       r0, 0x44(r1)
	  li        r0, 0x1
	  lfs       f0, -0x64B8(r2)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r29, r4
	  stw       r5, 0x24(r3)
	  sth       r0, 0x2A(r3)
	  stb       r5, 0x29(r3)
	  stfs      f1, 0x30(r3)
	  stb       r0, 0x28(r3)
	  stfs      f0, 0x2C(r3)
	  stfs      f1, 0x34(r3)
	  lwz       r12, 0xC(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r31)
	  cmplw     r0, r3
	  bne-      .loc_0x1BC
	  mr        r3, r29
	  bl        0x2EF424
	  rlwinm    r0,r3,0,16,31
	  mr        r3, r29
	  stw       r0, 0x24(r31)
	  bl        0x2EF14C
	  stb       r3, 0x29(r31)
	  mr        r3, r29
	  bl        0x2EF408
	  sth       r3, 0x2A(r31)
	  mr        r3, r29
	  bl        0x2EFA44
	  stfs      f1, 0x30(r31)
	  mr        r3, r29
	  bl        0x2EF128
	  stb       r3, 0x28(r31)
	  mr        r3, r29
	  bl        0x2EFA2C
	  stfs      f1, 0x2C(r31)
	  mr        r3, r29
	  bl        0x2EFA20
	  stfs      f1, 0x34(r31)
	  mr        r4, r29
	  addi      r3, r31, 0x38
	  bl        0x48B40
	  addi      r3, r31, 0x3C
	  mr        r4, r29
	  lwz       r12, 0x44(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x570
	  lwz       r30, 0x48(r31)
	  cmplwi    r30, 0
	  beq-      .loc_0x11C
	  mr        r4, r29
	  addi      r3, r30, 0x18
	  bl        0x2EE11C
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x11C:
	  lwz       r3, -0x6CE0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C8
	  lis       r4, 0x804B
	  li        r8, 0
	  subi      r5, r4, 0x5D0C
	  li        r0, -0x1
	  lis       r4, 0x804B
	  stw       r5, 0x8(r1)
	  subi      r4, r4, 0x5D48
	  li        r7, 0xFF
	  li        r6, 0x1
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  addi      r5, r31, 0x38
	  stb       r8, 0x24(r1)
	  sth       r8, 0x1C(r1)
	  stb       r7, 0x1E(r1)
	  stw       r8, 0x20(r1)
	  stb       r8, 0x1F(r1)
	  stb       r6, 0xC(r1)
	  stb       r8, 0x25(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x28(r1)
	  stb       r8, 0x26(r1)
	  stb       r8, 0x27(r1)
	  bl        0x48738
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C8
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x8
	  bl        0x48270
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B0
	  addi      r3, r1, 0x8
	  bl        0x117FAC
	  b         .loc_0x1C8

	.loc_0x1B0:
	  li        r0, 0
	  sth       r0, 0x38(r31)
	  b         .loc_0x1C8

	.loc_0x1BC:
	  mr        r3, r31
	  mr        r4, r29
	  bl        0x24

	.loc_0x1C8:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801254B8
 * Size:	000004
 */
void Game::EnemyGeneratorBase::doRead(Stream&) { }

/*
 * --INFO--
 * Address:	801254BC
 * Size:	000470
 */
void Game::GenObjectEnemy::doReadOldVersion(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r3
	  lis       r3, 0x3030
	  stw       r30, 0x68(r1)
	  addi      r0, r3, 0x3032
	  stw       r29, 0x64(r1)
	  mr        r29, r4
	  lwz       r5, 0x14(r31)
	  cmpw      r5, r0
	  beq-      .loc_0x110
	  bge-      .loc_0x4C
	  addi      r0, r3, 0x3030
	  cmpw      r5, r0
	  beq-      .loc_0x60
	  bge-      .loc_0x74
	  b         .loc_0x454

	.loc_0x4C:
	  addi      r0, r3, 0x3034
	  cmpw      r5, r0
	  beq-      .loc_0x308
	  bge-      .loc_0x454
	  b         .loc_0x1B8

	.loc_0x60:
	  mr        r3, r29
	  bl        0x2EF244
	  rlwinm    r0,r3,0,16,31
	  stw       r0, 0x24(r31)
	  b         .loc_0x454

	.loc_0x74:
	  mr        r3, r29
	  bl        0x2EF230
	  rlwinm    r0,r3,0,16,31
	  mr        r3, r29
	  stw       r0, 0x24(r31)
	  bl        0x2EF220
	  sth       r3, 0x2A(r31)
	  mr        r3, r29
	  bl        0x2EF85C
	  stfs      f1, 0x30(r31)
	  mr        r3, r29
	  bl        0x2EEF40
	  stb       r3, 0x28(r31)
	  mr        r3, r29
	  bl        0x2EF844
	  stfs      f1, 0x2C(r31)
	  mr        r3, r31
	  bl        .loc_0x470
	  lwz       r30, 0x48(r31)
	  cmplwi    r30, 0
	  beq-      .loc_0xEC
	  mr        r4, r29
	  addi      r3, r30, 0x18
	  bl        0x2EDF64
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0xEC:
	  lwz       r3, -0x6E20(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x454
	  lha       r0, 0x2A(r31)
	  li        r6, 0
	  lwz       r4, 0x24(r31)
	  rlwinm    r5,r0,0,24,31
	  bl        -0x17D70
	  b         .loc_0x454

	.loc_0x110:
	  mr        r3, r29
	  bl        0x2EF194
	  rlwinm    r0,r3,0,16,31
	  mr        r3, r29
	  stw       r0, 0x24(r31)
	  bl        0x2EF184
	  sth       r3, 0x2A(r31)
	  mr        r3, r29
	  bl        0x2EF7C0
	  stfs      f1, 0x30(r31)
	  mr        r3, r29
	  bl        0x2EEEA4
	  stb       r3, 0x28(r31)
	  mr        r3, r29
	  bl        0x2EF7A8
	  stfs      f1, 0x2C(r31)
	  mr        r3, r29
	  bl        0x2EF79C
	  stfs      f1, 0x34(r31)
	  mr        r3, r31
	  bl        .loc_0x470
	  lwz       r30, 0x48(r31)
	  cmplwi    r30, 0
	  beq-      .loc_0x194
	  mr        r4, r29
	  addi      r3, r30, 0x18
	  bl        0x2EDEBC
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x194:
	  lwz       r3, -0x6E20(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x454
	  lha       r0, 0x2A(r31)
	  li        r6, 0
	  lwz       r4, 0x24(r31)
	  rlwinm    r5,r0,0,24,31
	  bl        -0x17E18
	  b         .loc_0x454

	.loc_0x1B8:
	  mr        r3, r29
	  bl        0x2EF0EC
	  rlwinm    r0,r3,0,16,31
	  mr        r3, r29
	  stw       r0, 0x24(r31)
	  bl        0x2EF0DC
	  sth       r3, 0x2A(r31)
	  mr        r3, r29
	  bl        0x2EF718
	  stfs      f1, 0x30(r31)
	  mr        r3, r29
	  bl        0x2EEDFC
	  stb       r3, 0x28(r31)
	  mr        r3, r29
	  bl        0x2EF700
	  stfs      f1, 0x2C(r31)
	  mr        r3, r29
	  bl        0x2EF6F4
	  stfs      f1, 0x34(r31)
	  mr        r4, r29
	  addi      r3, r31, 0x38
	  bl        0x48814
	  mr        r3, r31
	  bl        .loc_0x470
	  lwz       r30, 0x48(r31)
	  cmplwi    r30, 0
	  beq-      .loc_0x248
	  mr        r4, r29
	  addi      r3, r30, 0x18
	  bl        0x2EDE08
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x248:
	  lwz       r3, -0x6E20(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x268
	  lha       r0, 0x2A(r31)
	  li        r6, 0
	  lwz       r4, 0x24(r31)
	  rlwinm    r5,r0,0,24,31
	  bl        -0x17ECC

	.loc_0x268:
	  lwz       r3, -0x6CE0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x454
	  lis       r4, 0x804B
	  li        r8, 0
	  subi      r5, r4, 0x5D0C
	  li        r0, -0x1
	  lis       r4, 0x804B
	  stw       r5, 0x30(r1)
	  subi      r4, r4, 0x5D48
	  li        r7, 0xFF
	  li        r6, 0x1
	  stw       r4, 0x30(r1)
	  addi      r4, r1, 0x30
	  addi      r5, r31, 0x38
	  stb       r8, 0x4C(r1)
	  sth       r8, 0x44(r1)
	  stb       r7, 0x46(r1)
	  stw       r8, 0x48(r1)
	  stb       r8, 0x47(r1)
	  stb       r6, 0x34(r1)
	  stb       r8, 0x4D(r1)
	  stw       r0, 0x54(r1)
	  stw       r0, 0x50(r1)
	  stb       r8, 0x4E(r1)
	  stb       r8, 0x4F(r1)
	  bl        0x48404
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x454
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x30
	  bl        0x47F3C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2FC
	  addi      r3, r1, 0x30
	  bl        0x117C78
	  b         .loc_0x454

	.loc_0x2FC:
	  li        r0, 0
	  sth       r0, 0x38(r31)
	  b         .loc_0x454

	.loc_0x308:
	  mr        r3, r29
	  bl        0x2EEF9C
	  rlwinm    r3,r3,0,16,31
	  li        r0, 0
	  stw       r3, 0x24(r31)
	  mr        r3, r29
	  stb       r0, 0x29(r31)
	  bl        0x2EEF84
	  sth       r3, 0x2A(r31)
	  mr        r3, r29
	  bl        0x2EF5C0
	  stfs      f1, 0x30(r31)
	  mr        r3, r29
	  bl        0x2EECA4
	  stb       r3, 0x28(r31)
	  mr        r3, r29
	  bl        0x2EF5A8
	  stfs      f1, 0x2C(r31)
	  mr        r3, r29
	  bl        0x2EF59C
	  stfs      f1, 0x34(r31)
	  mr        r4, r29
	  addi      r3, r31, 0x38
	  bl        0x486BC
	  addi      r3, r31, 0x3C
	  mr        r4, r29
	  lwz       r12, 0x44(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        .loc_0x470
	  lwz       r30, 0x48(r31)
	  cmplwi    r30, 0
	  beq-      .loc_0x3B8
	  mr        r4, r29
	  addi      r3, r30, 0x18
	  bl        0x2EDC98
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3B8:
	  lwz       r3, -0x6CE0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x454
	  lis       r4, 0x804B
	  li        r8, 0
	  subi      r5, r4, 0x5D0C
	  li        r0, -0x1
	  lis       r4, 0x804B
	  stw       r5, 0x8(r1)
	  subi      r4, r4, 0x5D48
	  li        r7, 0xFF
	  li        r6, 0x1
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  addi      r5, r31, 0x38
	  stb       r8, 0x24(r1)
	  sth       r8, 0x1C(r1)
	  stb       r7, 0x1E(r1)
	  stw       r8, 0x20(r1)
	  stb       r8, 0x1F(r1)
	  stb       r6, 0xC(r1)
	  stb       r8, 0x25(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x28(r1)
	  stb       r8, 0x26(r1)
	  stb       r8, 0x27(r1)
	  bl        0x482B4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x454
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x8
	  bl        0x47DEC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x44C
	  addi      r3, r1, 0x8
	  bl        0x117B28
	  b         .loc_0x454

	.loc_0x44C:
	  li        r0, 0
	  sth       r0, 0x38(r31)

	.loc_0x454:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr

	.loc_0x470:
	*/
}

/*
 * --INFO--
 * Address:	8012592C
 * Size:	000E38
 */
void Game::GenObjectEnemy::createEnemyGenerator()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lis       r3, 0x8048
	  lwz       r0, 0x24(r30)
	  subi      r31, r3, 0x48B0
	  cmplwi    r0, 0x65
	  bgt-      .loc_0xDFC
	  lis       r3, 0x804B
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x25E8
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r3, 0x28
	  bl        -0x101AD0
	  mr.       r0, r3
	  beq-      .loc_0x5C
	  bl        0x1C30
	  mr        r0, r3

	.loc_0x5C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101AF0
	  mr.       r0, r3
	  beq-      .loc_0x80
	  addi      r4, r31, 0xA8
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x80:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101B14
	  mr.       r0, r3
	  beq-      .loc_0xA4
	  addi      r4, r31, 0xB8
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xA4:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101B38
	  mr.       r0, r3
	  beq-      .loc_0xC8
	  addi      r4, r31, 0xC8
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xC8:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101B5C
	  mr.       r0, r3
	  beq-      .loc_0xEC
	  addi      r4, r31, 0xD8
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xEC:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101B80
	  mr.       r0, r3
	  beq-      .loc_0x110
	  addi      r4, r31, 0xE8
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x110:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101BA4
	  mr.       r0, r3
	  beq-      .loc_0x134
	  addi      r4, r31, 0xF8
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x134:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101BC8
	  mr.       r0, r3
	  beq-      .loc_0x158
	  addi      r4, r31, 0x108
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x158:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101BEC
	  mr.       r0, r3
	  beq-      .loc_0x17C
	  addi      r4, r31, 0x118
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x17C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101C10
	  mr.       r0, r3
	  beq-      .loc_0x1A0
	  addi      r4, r31, 0x128
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x1A0:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101C34
	  mr.       r0, r3
	  beq-      .loc_0x1C4
	  addi      r4, r31, 0x138
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x1C4:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101C58
	  mr.       r0, r3
	  beq-      .loc_0x1E8
	  addi      r4, r31, 0x148
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x1E8:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101C7C
	  mr.       r0, r3
	  beq-      .loc_0x20C
	  addi      r4, r31, 0x158
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x20C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101CA0
	  mr.       r0, r3
	  beq-      .loc_0x230
	  subi      r4, r2, 0x6480
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x230:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101CC4
	  mr.       r0, r3
	  beq-      .loc_0x254
	  addi      r4, r31, 0x164
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x254:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101CE8
	  mr.       r0, r3
	  beq-      .loc_0x278
	  addi      r4, r31, 0x174
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x278:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101D0C
	  mr.       r0, r3
	  beq-      .loc_0x29C
	  addi      r4, r31, 0x180
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x29C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101D30
	  mr.       r0, r3
	  beq-      .loc_0x2C0
	  addi      r4, r31, 0x18C
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x2C0:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101D54
	  mr.       r0, r3
	  beq-      .loc_0x2E4
	  addi      r4, r31, 0x198
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x2E4:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101D78
	  mr.       r0, r3
	  beq-      .loc_0x308
	  addi      r4, r31, 0x1A4
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x308:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101D9C
	  mr.       r0, r3
	  beq-      .loc_0x32C
	  addi      r4, r31, 0x1B0
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x32C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101DC0
	  mr.       r0, r3
	  beq-      .loc_0x350
	  addi      r4, r31, 0x1BC
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x350:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x2C
	  bl        -0x101DE4
	  mr.       r0, r3
	  beq-      .loc_0x370
	  bl        0x139DF8
	  mr        r0, r3

	.loc_0x370:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x30
	  bl        -0x101E04
	  mr.       r0, r3
	  beq-      .loc_0x390
	  bl        0x13CC3C
	  mr        r0, r3

	.loc_0x390:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101E24
	  mr.       r0, r3
	  beq-      .loc_0x3B4
	  subi      r4, r2, 0x6478
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x3B4:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101E48
	  mr.       r0, r3
	  beq-      .loc_0x3D8
	  addi      r4, r31, 0x1C8
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x3D8:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x28
	  bl        -0x101E6C
	  mr.       r0, r3
	  beq-      .loc_0x3F8
	  bl        0x148CEC
	  mr        r0, r3

	.loc_0x3F8:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101E8C
	  mr.       r0, r3
	  beq-      .loc_0x41C
	  addi      r4, r31, 0x1D4
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x41C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101EB0
	  mr.       r0, r3
	  beq-      .loc_0x440
	  addi      r4, r31, 0x1E0
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x440:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101ED4
	  mr.       r0, r3
	  beq-      .loc_0x464
	  addi      r4, r31, 0x1F0
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x464:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101EF8
	  mr.       r0, r3
	  beq-      .loc_0x488
	  subi      r4, r2, 0x6470
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x488:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101F1C
	  mr.       r0, r3
	  beq-      .loc_0x4AC
	  subi      r4, r2, 0x6468
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x4AC:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101F40
	  mr.       r0, r3
	  beq-      .loc_0x4D0
	  addi      r4, r31, 0x204
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x4D0:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101F64
	  mr.       r0, r3
	  beq-      .loc_0x4F4
	  addi      r4, r31, 0x210
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x4F4:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101F88
	  mr.       r0, r3
	  beq-      .loc_0x518
	  addi      r4, r31, 0x224
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x518:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101FAC
	  mr.       r0, r3
	  beq-      .loc_0x53C
	  addi      r4, r31, 0x238
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x53C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101FD0
	  mr.       r0, r3
	  beq-      .loc_0x560
	  addi      r4, r31, 0x24C
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x560:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x101FF4
	  mr.       r0, r3
	  beq-      .loc_0x584
	  addi      r4, r31, 0x258
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x584:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102018
	  mr.       r0, r3
	  beq-      .loc_0x5A8
	  addi      r4, r31, 0x268
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x5A8:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x10203C
	  mr.       r0, r3
	  beq-      .loc_0x5CC
	  addi      r4, r31, 0x274
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x5CC:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102060
	  mr.       r0, r3
	  beq-      .loc_0x5F0
	  addi      r4, r31, 0x284
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x5F0:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102084
	  mr.       r0, r3
	  beq-      .loc_0x614
	  addi      r4, r31, 0x290
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x614:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1020A8
	  mr.       r0, r3
	  beq-      .loc_0x638
	  addi      r4, r31, 0x2A0
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x638:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1020CC
	  mr.       r0, r3
	  beq-      .loc_0x65C
	  addi      r4, r31, 0x2AC
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x65C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1020F0
	  mr.       r0, r3
	  beq-      .loc_0x680
	  addi      r4, r31, 0x2BC
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x680:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102114
	  mr.       r0, r3
	  beq-      .loc_0x6A4
	  addi      r4, r31, 0x2CC
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x6A4:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102138
	  mr.       r0, r3
	  beq-      .loc_0x6C8
	  addi      r4, r31, 0x2D8
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x6C8:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x10215C
	  mr.       r0, r3
	  beq-      .loc_0x6EC
	  subi      r4, r2, 0x6460
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x6EC:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102180
	  mr.       r0, r3
	  beq-      .loc_0x710
	  addi      r4, r31, 0x2E4
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x710:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1021A4
	  mr.       r0, r3
	  beq-      .loc_0x734
	  addi      r4, r31, 0x2F0
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x734:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1021C8
	  mr.       r0, r3
	  beq-      .loc_0x758
	  addi      r4, r31, 0x300
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x758:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1021EC
	  mr.       r0, r3
	  beq-      .loc_0x77C
	  addi      r4, r31, 0x318
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x77C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102210
	  mr.       r0, r3
	  beq-      .loc_0x7A0
	  addi      r4, r31, 0x334
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x7A0:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102234
	  mr.       r0, r3
	  beq-      .loc_0x7C4
	  addi      r4, r31, 0x34C
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x7C4:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102258
	  mr.       r0, r3
	  beq-      .loc_0x7E8
	  addi      r4, r31, 0x368
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x7E8:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x10227C
	  mr.       r0, r3
	  beq-      .loc_0x80C
	  addi      r4, r31, 0x374
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x80C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1022A0
	  mr.       r0, r3
	  beq-      .loc_0x830
	  subi      r4, r2, 0x6458
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x830:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1022C4
	  mr.       r0, r3
	  beq-      .loc_0x854
	  addi      r4, r31, 0x380
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x854:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1022E8
	  mr.       r0, r3
	  beq-      .loc_0x878
	  addi      r4, r31, 0x390
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x878:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x10230C
	  mr.       r0, r3
	  beq-      .loc_0x89C
	  addi      r4, r31, 0x3A0
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x89C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102330
	  mr.       r0, r3
	  beq-      .loc_0x8C0
	  addi      r4, r31, 0x3B0
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x8C0:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102354
	  mr.       r0, r3
	  beq-      .loc_0x8E4
	  subi      r4, r2, 0x6450
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x8E4:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102378
	  mr.       r0, r3
	  beq-      .loc_0x908
	  addi      r4, r31, 0x3C0
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x908:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x10239C
	  mr.       r0, r3
	  beq-      .loc_0x92C
	  addi      r4, r31, 0x3CC
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x92C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1023C0
	  mr.       r0, r3
	  beq-      .loc_0x950
	  addi      r4, r31, 0x3E0
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x950:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1023E4
	  mr.       r0, r3
	  beq-      .loc_0x974
	  addi      r4, r31, 0x3EC
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x974:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102408
	  mr.       r0, r3
	  beq-      .loc_0x998
	  addi      r4, r31, 0x400
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x998:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x10242C
	  mr.       r0, r3
	  beq-      .loc_0x9BC
	  addi      r4, r31, 0x40C
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x9BC:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102450
	  mr.       r0, r3
	  beq-      .loc_0x9E0
	  addi      r4, r31, 0x41C
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0x9E0:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102474
	  mr.       r0, r3
	  beq-      .loc_0xA04
	  addi      r4, r31, 0x42C
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xA04:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102498
	  mr.       r0, r3
	  beq-      .loc_0xA28
	  addi      r4, r31, 0x43C
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xA28:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1024BC
	  mr.       r0, r3
	  beq-      .loc_0xA4C
	  addi      r4, r31, 0x44C
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xA4C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1024E0
	  mr.       r0, r3
	  beq-      .loc_0xA70
	  addi      r4, r31, 0x460
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xA70:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102504
	  mr.       r0, r3
	  beq-      .loc_0xA94
	  addi      r4, r31, 0x474
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xA94:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102528
	  mr.       r0, r3
	  beq-      .loc_0xAB8
	  subi      r4, r2, 0x6448
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xAB8:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x10254C
	  mr.       r0, r3
	  beq-      .loc_0xADC
	  addi      r4, r31, 0x488
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xADC:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102570
	  mr.       r0, r3
	  beq-      .loc_0xB00
	  addi      r4, r31, 0x494
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xB00:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102594
	  mr.       r0, r3
	  beq-      .loc_0xB24
	  addi      r4, r31, 0x4A0
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xB24:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1025B8
	  mr.       r0, r3
	  beq-      .loc_0xB48
	  addi      r4, r31, 0x4B4
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xB48:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1025DC
	  mr.       r0, r3
	  beq-      .loc_0xB6C
	  addi      r4, r31, 0x4C8
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xB6C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102600
	  mr.       r0, r3
	  beq-      .loc_0xB90
	  addi      r4, r31, 0x4D4
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xB90:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102624
	  mr.       r0, r3
	  beq-      .loc_0xBB4
	  addi      r4, r31, 0x4E8
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xBB4:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102648
	  mr.       r0, r3
	  beq-      .loc_0xBD8
	  addi      r4, r31, 0x4F8
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xBD8:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x10266C
	  mr.       r0, r3
	  beq-      .loc_0xBFC
	  addi      r4, r31, 0x504
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xBFC:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102690
	  mr.       r0, r3
	  beq-      .loc_0xC20
	  addi      r4, r31, 0x514
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xC20:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1026B4
	  mr.       r0, r3
	  beq-      .loc_0xC44
	  addi      r4, r31, 0x520
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xC44:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1026D8
	  mr.       r0, r3
	  beq-      .loc_0xC68
	  addi      r4, r31, 0x534
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xC68:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1026FC
	  mr.       r0, r3
	  beq-      .loc_0xC8C
	  addi      r4, r31, 0x548
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xC8C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102720
	  mr.       r0, r3
	  beq-      .loc_0xCB0
	  addi      r4, r31, 0x55C
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xCB0:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102744
	  mr.       r0, r3
	  beq-      .loc_0xCD4
	  addi      r4, r31, 0x56C
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xCD4:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102768
	  mr.       r0, r3
	  beq-      .loc_0xCF8
	  addi      r4, r31, 0x580
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xCF8:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x10278C
	  mr.       r0, r3
	  beq-      .loc_0xD1C
	  addi      r4, r31, 0x58C
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xD1C:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1027B0
	  mr.       r0, r3
	  beq-      .loc_0xD40
	  addi      r4, r31, 0x59C
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xD40:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1027D4
	  mr.       r0, r3
	  beq-      .loc_0xD64
	  addi      r4, r31, 0x5B0
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xD64:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x1027F8
	  mr.       r0, r3
	  beq-      .loc_0xD88
	  addi      r4, r31, 0x5BC
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xD88:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x10281C
	  mr.       r0, r3
	  beq-      .loc_0xDAC
	  subi      r4, r2, 0x6440
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xDAC:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102840
	  mr.       r0, r3
	  beq-      .loc_0xDD0
	  addi      r4, r31, 0x5CC
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xDD0:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C
	  li        r3, 0x24
	  bl        -0x102864
	  mr.       r0, r3
	  beq-      .loc_0xDF4
	  addi      r4, r31, 0x5DC
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xDF4:
	  stw       r0, 0x48(r30)
	  b         .loc_0xE1C

	.loc_0xDFC:
	  li        r3, 0x24
	  bl        -0x102888
	  mr.       r0, r3
	  beq-      .loc_0xE18
	  subi      r4, r2, 0x6438
	  bl        .loc_0xE38
	  mr        r0, r3

	.loc_0xE18:
	  stw       r0, 0x48(r30)

	.loc_0xE1C:
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x48(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xE38:
	*/
}

/*
 * --INFO--
 * Address:	80126764
 * Size:	00006C
 */
void Game::EnemyGeneratorBase::EnemyGeneratorBase(char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804F
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  subi      r0, r5, 0x4AD8
	  lis       r5, 0x3F3F
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x804B
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x2450
	  addi      r3, r31, 0x18
	  stw       r6, 0x10(r31)
	  stw       r6, 0xC(r31)
	  stw       r6, 0x8(r31)
	  stw       r6, 0x4(r31)
	  stw       r4, 0x14(r31)
	  addi      r4, r5, 0x3F3F
	  stw       r0, 0x0(r31)
	  bl        0x2ECAF4
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
 * Address:	801267D0
 * Size:	00002C
 */
void Game::GenObjectEnemy::getShape()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6E20(r13)
	  lwz       r4, 0x24(r4)
	  bl        -0x19374
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801267FC
 * Size:	000040
 */
void Game::GenObjectEnemy::updateUseList(Game::Generator*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  stw       r0, 0x14(r1)
	  lwz       r4, -0x6E20(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x30
	  lha       r0, 0x2A(r6)
	  mr        r3, r4
	  lwz       r4, 0x24(r6)
	  rlwinm    r5,r0,0,24,31
	  bl        -0x18FD4

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012683C
 * Size:	00031C
 */
void Game::GenObjectEnemy::render(Graphics&, Game::Generator*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stw       r31, 0xCC(r1)
	  mr        r31, r5
	  stw       r30, 0xC8(r1)
	  mr        r30, r4
	  stw       r29, 0xC4(r1)
	  mr        r29, r3
	  lbz       r0, 0x4C(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x300
	  lfs       f1, 0x9C(r31)
	  mr        r3, r30
	  lfs       f0, 0xA8(r31)
	  li        r4, 0
	  lfs       f3, 0x98(r31)
	  lfs       f2, 0xA4(r31)
	  fadds     f4, f1, f0
	  lfs       f1, 0x94(r31)
	  lfs       f0, 0xA0(r31)
	  fadds     f2, f3, f2
	  fadds     f0, f1, f0
	  stfs      f4, 0x40(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f0, 0x38(r1)
	  bl        0x2FEF78
	  li        r3, 0x12
	  li        r4, 0
	  bl        -0x40DD0
	  li        r0, 0x73
	  li        r6, 0x10
	  stb       r0, 0x84(r30)
	  li        r0, 0xFF
	  lfs       f2, -0x648C(r2)
	  addi      r3, r1, 0x90
	  stb       r6, 0x85(r30)
	  addi      r4, r1, 0x38
	  lfs       f3, -0x6490(r2)
	  addi      r5, r1, 0x2C
	  stb       r6, 0x86(r30)
	  lfs       f0, -0x64B4(r2)
	  stb       r0, 0x87(r30)
	  lfs       f1, 0x30(r29)
	  fmuls     f1, f2, f1
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x34(r1)
	  fmuls     f0, f3, f1
	  stfs      f0, 0x30(r1)
	  bl        0x301F88
	  lwz       r3, 0x25C(r30)
	  li        r4, 0
	  bl        0x2FE850
	  lwz       r3, 0x25C(r30)
	  li        r4, 0
	  bl        0x2FE844
	  addi      r4, r1, 0x90
	  addi      r5, r1, 0x60
	  bl        -0x3C624
	  addi      r3, r1, 0x60
	  li        r4, 0
	  bl        -0x3D3B8
	  lfs       f2, -0x64B4(r2)
	  mr        r3, r30
	  lfs       f1, -0x64B8(r2)
	  addi      r4, r1, 0x20
	  lfs       f0, -0x6430(r2)
	  addi      r5, r1, 0x14
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        0x2FF084
	  lfs       f2, -0x642C(r2)
	  mr        r3, r30
	  lfs       f1, -0x64B8(r2)
	  addi      r4, r1, 0x20
	  lfs       f0, -0x6428(r2)
	  addi      r5, r1, 0x14
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        0x2FF05C
	  lfs       f2, -0x6424(r2)
	  mr        r3, r30
	  lfs       f1, -0x64B8(r2)
	  addi      r4, r1, 0x20
	  lfs       f0, -0x6428(r2)
	  addi      r5, r1, 0x14
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        0x2FF034
	  li        r3, 0x6
	  li        r4, 0
	  bl        -0x40EE0
	  addi      r3, r1, 0x90
	  addi      r4, r1, 0x38
	  bl        0x301E74
	  lbz       r0, 0x28(r29)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x1C8
	  li        r5, 0xFF
	  li        r0, 0x9B
	  stb       r5, 0x84(r30)
	  mr        r3, r30
	  addi      r4, r1, 0x90
	  stb       r5, 0x85(r30)
	  stb       r5, 0x86(r30)
	  stb       r0, 0x87(r30)
	  lfs       f1, 0x2C(r29)
	  bl        0x2FF644

	.loc_0x1C8:
	  lfs       f0, -0x64A4(r2)
	  li        r7, 0
	  li        r0, 0xFF
	  li        r6, 0x66
	  lwz       r8, -0x7628(r13)
	  li        r5, 0x99
	  stfs      f0, 0x54(r1)
	  mr        r3, r30
	  lfs       f0, -0x64A0(r2)
	  li        r4, 0
	  stw       r8, 0x44(r1)
	  stw       r7, 0x48(r1)
	  stw       r7, 0x4C(r1)
	  stw       r7, 0x50(r1)
	  stb       r6, 0x58(r1)
	  stb       r5, 0x59(r1)
	  stb       r0, 0x5A(r1)
	  stb       r0, 0x5B(r1)
	  stb       r7, 0x5C(r1)
	  stb       r6, 0x5D(r1)
	  stb       r0, 0x5E(r1)
	  stb       r0, 0x5F(r1)
	  stfs      f0, 0x54(r1)
	  bl        0x2FEDBC
	  li        r7, 0x32
	  li        r5, 0xFF
	  li        r6, 0x64
	  li        r0, 0x96
	  stb       r7, 0x58(r1)
	  mr        r3, r30
	  li        r4, 0
	  stb       r6, 0x59(r1)
	  stb       r5, 0x5A(r1)
	  stb       r5, 0x5B(r1)
	  stb       r7, 0x5C(r1)
	  stb       r7, 0x5D(r1)
	  stb       r0, 0x5E(r1)
	  stb       r5, 0x5F(r1)
	  bl        0x2FEB54
	  mr        r4, r3
	  mr        r3, r30
	  bl        0x300E00
	  lfs       f1, 0x98(r31)
	  lis       r3, 0x804B
	  lfs       f0, 0xA4(r31)
	  subi      r7, r3, 0x3AC8
	  lfs       f4, 0x9C(r31)
	  mr        r3, r30
	  lfs       f3, 0xA8(r31)
	  fadds     f5, f1, f0
	  lfs       f0, -0x64B8(r2)
	  addi      r4, r1, 0x44
	  lfs       f2, 0x94(r31)
	  fadds     f3, f4, f3
	  lfs       f1, 0xA0(r31)
	  fadds     f0, f5, f0
	  addi      r5, r1, 0x8
	  fadds     f1, f2, f1
	  stfs      f5, 0xC(r1)
	  subi      r6, r2, 0x6420
	  stfs      f3, 0x10(r1)
	  stfs      f1, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  lwz       r0, 0x24(r29)
	  lha       r8, 0x2A(r29)
	  mulli     r0, r0, 0x34
	  lwzx      r7, r7, r0
	  crclr     6, 0x6
	  bl        0x300FC8
	  lwz       r3, 0x48(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x300
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x300:
	  lwz       r0, 0xD4(r1)
	  lwz       r31, 0xCC(r1)
	  lwz       r30, 0xC8(r1)
	  lwz       r29, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80126B58
 * Size:	000004
 */
void Game::EnemyGeneratorBase::draw(Graphics&, Game::Generator*) { }

/*
 * --INFO--
 * Address:	80126B5C
 * Size:	000060
 */
void Game::EnemyGeneratorBase::~EnemyGeneratorBase()
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
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x2450
	  stw       r0, 0x0(r30)
	  bl        0x2EA9FC
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x102AE8

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80126BBC
 * Size:	000008
 */
u32 Game::EnemyGeneratorBase::getInitialParam() { return 0x0; }

/*
 * --INFO--
 * Address:	80126BC4
 * Size:	000008
 */
void Game::GenArg::getName()
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x6418
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80126BCC
 * Size:	000004
 */
void Game::GenObject::update(Game::Generator*) { }

/*
 * --INFO--
 * Address:	80126BD0
 * Size:	000028
 */
void Game::GenObject::generatorMakeMatrix(Matrixf&, Vector3<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  mr        r4, r5
	  stw       r0, 0x14(r1)
	  bl        0x301C5C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80126BF8
 * Size:	000004
 */
void Game::GenObject::getDebugInfo(char*) { }

/*
 * --INFO--
 * Address:	80126BFC
 * Size:	000004
 */
void Game::GenBase::doEvent(unsigned long) { }
