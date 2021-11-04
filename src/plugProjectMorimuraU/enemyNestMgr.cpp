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
 * Address:	8036C194
 * Size:	000070
 */
void Game::Nest::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x23D514
	  lis       r4, 0x804E
	  lis       r3, 0x8049
	  addi      r4, r4, 0x2F88
	  li        r6, 0
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x38
	  addi      r5, r3, 0x1DE8
	  li        r0, 0xFF
	  stw       r4, 0x4(r31)
	  subi      r4, r13, 0x6718
	  mr        r3, r31
	  stw       r6, 0x44(r31)
	  stw       r5, 0x18(r31)
	  sth       r0, 0x6(r4)
	  sth       r0, 0x4(r4)
	  sth       r0, 0x2(r4)
	  sth       r0, -0x6718(r13)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036C204
 * Size:	000048
 */
void Game::Nest::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x348378
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x262A8C
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x23C998
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036C24C
 * Size:	000020
 */
void Game::Nest::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x23CE90
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036C26C
 * Size:	00012C
 */
void Game::Nest::Mgr::loadModelData((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  addi      r30, r5, 0x1DD8
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  addi      r3, r30, 0x2E8
	  bl        -0x34927C
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  lis       r4, 0x2024
	  addi      r4, r4, 0x10
	  bl        -0x2FCA14
	  stw       r3, 0x1C(r29)
	  lis       r4, 0x4
	  lwz       r3, 0x1C(r29)
	  bl        -0x2E89E0
	  lis       r4, 0x8048
	  lwz       r3, 0x1C(r29)
	  subi      r5, r4, 0x7794
	  li        r4, 0
	  bl        -0x2E881C
	  lwz       r3, 0x1C(r29)
	  bl        -0x2E88A4

	.loc_0x6C:
	  addi      r3, r1, 0x8
	  addi      r4, r30, 0x2F4
	  bl        0xE033C
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0xE0428
	  mr.       r31, r3
	  bne-      .loc_0xA0
	  addi      r3, r30, 0x318
	  addi      r5, r30, 0x32C
	  li        r4, 0x49
	  crclr     6, 0x6
	  bl        -0x341CC8

	.loc_0xA0:
	  lwz       r31, 0x34(r31)
	  cmplwi    r31, 0
	  bne-      .loc_0xC0
	  addi      r3, r30, 0x318
	  addi      r5, r30, 0x32C
	  li        r4, 0x4B
	  crclr     6, 0x6
	  bl        -0x341CE8

	.loc_0xC0:
	  mr        r4, r31
	  addi      r3, r30, 0x2E8
	  bl        -0x34931C
	  cmplwi    r3, 0
	  beq-      .loc_0x10C
	  lis       r4, 0x2024
	  addi      r4, r4, 0x10
	  bl        -0x2FCAB4
	  stw       r3, 0x44(r29)
	  lis       r4, 0x4
	  lwz       r3, 0x44(r29)
	  bl        -0x2E8A80
	  lis       r4, 0x8048
	  lwz       r3, 0x44(r29)
	  subi      r5, r4, 0x7794
	  li        r4, 0
	  bl        -0x2E88BC
	  lwz       r3, 0x44(r29)
	  bl        -0x2E8944

	.loc_0x10C:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r3, 0x1C(r29)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036C398
 * Size:	000320
 */
void Game::Nest::Mgr::doSimpleDraw((Viewport*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stmw      r24, 0x80(r1)
	  lis       r5, 0x8049
	  li        r0, 0xFF
	  addi      r30, r5, 0x1DD8
	  lis       r5, 0x8051
	  lwz       r29, 0x338(r30)
	  mr        r25, r3
	  lwz       r27, 0x33C(r30)
	  mr        r26, r4
	  lwz       r12, 0x340(r30)
	  subi      r31, r5, 0xDD0
	  lwz       r11, 0x344(r30)
	  li        r28, 0
	  lwz       r10, 0x348(r30)
	  lwz       r9, 0x34C(r30)
	  lwz       r8, 0x350(r30)
	  lwz       r7, 0x354(r30)
	  lwz       r6, 0x358(r30)
	  lwz       r5, 0x35C(r30)
	  lwz       r4, 0x360(r30)
	  lwz       r3, 0x364(r30)
	  stw       r29, 0x48(r1)
	  stw       r27, 0x4C(r1)
	  stw       r12, 0x50(r1)
	  stw       r11, 0x54(r1)
	  stw       r10, 0x58(r1)
	  stw       r9, 0x5C(r1)
	  stw       r8, 0x60(r1)
	  stw       r7, 0x64(r1)
	  stw       r6, 0x68(r1)
	  stw       r5, 0x6C(r1)
	  stw       r4, 0x70(r1)
	  stw       r3, 0x74(r1)
	  sth       r0, 0x16(r1)
	  sth       r0, 0x14(r1)
	  sth       r0, 0x12(r1)
	  sth       r0, 0x10(r1)
	  b         .loc_0x2E8

	.loc_0xAC:
	  mr        r3, r25
	  mr        r4, r28
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r27, r3
	  bne-      .loc_0xE0
	  addi      r3, r30, 0x318
	  addi      r5, r30, 0x32C
	  li        r4, 0x6F
	  crclr     6, 0x6
	  bl        -0x341E34

	.loc_0xE0:
	  mr        r3, r27
	  lfs       f31, 0x1F8(r27)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2E4
	  mr        r3, r27
	  bl        -0x268DF4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2E4
	  lfs       f0, 0x198(r27)
	  mr        r3, r26
	  lfs       f1, 0x19C(r27)
	  li        r4, 0x1
	  lfs       f2, 0x1A0(r27)
	  stfs      f31, 0x48(r1)
	  stfs      f31, 0x5C(r1)
	  stfs      f31, 0x70(r1)
	  stfs      f0, 0x54(r1)
	  stfs      f1, 0x64(r1)
	  stfs      f2, 0x74(r1)
	  bl        0xB8C88
	  addi      r4, r1, 0x48
	  addi      r5, r1, 0x18
	  bl        -0x2821E0
	  addi      r3, r1, 0x18
	  li        r4, 0
	  bl        -0x282F74
	  addi      r3, r1, 0x18
	  li        r4, 0
	  bl        -0x282F30
	  lbz       r0, 0x2EC(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x178
	  lwz       r24, 0x1C(r25)
	  b         .loc_0x17C

	.loc_0x178:
	  lwz       r24, 0x44(r25)

	.loc_0x17C:
	  lwz       r3, 0x28(r24)
	  lwz       r29, 0x0(r3)
	  cmplwi    r29, 0
	  bne-      .loc_0x1A0
	  addi      r3, r30, 0x318
	  addi      r5, r30, 0x32C
	  li        r4, 0x86
	  crclr     6, 0x6
	  bl        -0x341EF4

	.loc_0x1A0:
	  lwz       r29, 0x58(r29)
	  cmplwi    r29, 0
	  bne-      .loc_0x1C0
	  addi      r3, r30, 0x318
	  addi      r5, r30, 0x32C
	  li        r4, 0x89
	  crclr     6, 0x6
	  bl        -0x341F14

	.loc_0x1C0:
	  lwz       r4, 0xA0(r24)
	  li        r0, 0
	  mr        r3, r29
	  stw       r4, 0x10C(r31)
	  lwz       r4, 0xA4(r24)
	  stw       r4, 0x110(r31)
	  lwz       r4, 0xAC(r24)
	  stw       r4, 0x114(r31)
	  stw       r0, -0x7690(r13)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r29)
	  bl        -0x30B750
	  mr        r3, r29
	  addi      r4, r1, 0x48
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lha       r4, 0x2EE(r27)
	  subi      r3, r4, 0xA
	  sth       r4, 0x16(r1)
	  extsh     r0, r3
	  cmpwi     r0, -0xFF
	  sth       r3, 0x16(r1)
	  bge-      .loc_0x274
	  li        r0, -0xFF
	  mr        r3, r27
	  sth       r0, 0x16(r1)
	  li        r4, 0
	  bl        -0x2314E8
	  mr        r3, r27
	  li        r4, 0
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r27
	  li        r4, 0
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x274:
	  lwz       r3, 0x2F0(r27)
	  lha       r4, 0x16(r1)
	  cmpwi     r3, 0
	  ble-      .loc_0x2B4
	  addi      r0, r3, 0x1
	  stw       r0, 0x2F0(r27)
	  lwz       r0, 0x2F0(r27)
	  cmpwi     r0, 0x50
	  ble-      .loc_0x2B4
	  sth       r4, 0x2EE(r27)
	  mr        r3, r27
	  li        r4, 0
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2B4:
	  lwz       r5, 0x10(r1)
	  addi      r4, r1, 0x8
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        -0x283F88
	  lwz       r3, 0x8(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2E4:
	  addi      r28, r28, 0x1

	.loc_0x2E8:
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r28, r3
	  blt+      .loc_0xAC
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  lmw       r24, 0x80(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036C6B8
 * Size:	000010
 */
void Game::Nest::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x304
	  lwz       r3, 0x48(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036C6C8
 * Size:	0001E8
 */
void Game::Nest::Mgr::initObjects(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x124(r1)
	  stmw      r27, 0x10C(r1)
	  mr        r31, r3
	  addi      r29, r4, 0x1DD8
	  bl        -0x23CF84
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1D4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x1
	  subi      r4, r4, 0x1
	  bl        -0x249494
	  lwz       r3, 0x20(r3)
	  lbz       r0, 0x0(r3)
	  extsb.    r0, r0
	  bne-      .loc_0x78
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x1
	  subi      r4, r4, 0x1
	  bl        -0x249460

	.loc_0x78:
	  mr        r5, r3
	  addi      r3, r1, 0x8
	  addi      r4, r29, 0x368
	  crclr     6, 0x6
	  bl        -0x2A5318
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB0(r12)
	  mtctr     r12
	  bctrl
	  li        r27, 0
	  mr        r28, r3
	  b         .loc_0xF0

	.loc_0xAC:
	  mr        r3, r31
	  mr        r4, r27
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r30, r3
	  bne-      .loc_0xE0
	  addi      r3, r29, 0x318
	  addi      r5, r29, 0x32C
	  li        r4, 0xC9
	  crclr     6, 0x6
	  bl        -0x342164

	.loc_0xE0:
	  stb       r27, 0x1F1(r30)
	  addi      r27, r27, 0x1
	  stw       r31, 0x180(r30)
	  stw       r28, 0x174(r30)

	.loc_0xF0:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r27, r3
	  blt+      .loc_0xAC
	  lwz       r3, -0x6E58(r13)
	  addi      r4, r29, 0x37C
	  bl        -0x233E98
	  stw       r3, 0x28(r31)
	  lwz       r0, 0x28(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x13C
	  addi      r3, r29, 0x318
	  addi      r5, r29, 0x32C
	  li        r4, 0xDC
	  crclr     6, 0x6
	  bl        -0x3421C0

	.loc_0x13C:
	  li        r27, 0
	  b         .loc_0x1B8

	.loc_0x144:
	  mr        r3, r31
	  mr        r4, r27
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r30, r3
	  bne-      .loc_0x178
	  addi      r3, r29, 0x318
	  addi      r5, r29, 0x32C
	  li        r4, 0xE0
	  crclr     6, 0x6
	  bl        -0x3421FC

	.loc_0x178:
	  li        r3, 0x8
	  bl        -0x3489A0
	  mr.       r0, r3
	  beq-      .loc_0x190
	  bl        -0x2387F4
	  mr        r0, r3

	.loc_0x190:
	  stw       r0, 0x114(r30)
	  mr        r4, r28
	  li        r6, 0
	  lwz       r3, 0x114(r30)
	  lwz       r5, 0x28(r31)
	  bl        -0x238800
	  lwz       r3, 0x114(r30)
	  mr        r4, r28
	  bl        -0x236DB0
	  addi      r27, r27, 0x1

	.loc_0x1B8:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r27, r3
	  blt+      .loc_0x144

	.loc_0x1D4:
	  lmw       r27, 0x10C(r1)
	  lwz       r0, 0x124(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036C8B0
 * Size:	000008
 */
void Game::Nest::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x53
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036C8B8
 * Size:	0000B0
 */
void Game::Nest::Mgr::__dt(void)
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
	  beq-      .loc_0x94
	  lis       r3, 0x804E
	  addi      r3, r3, 0x2F88
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xA4C50

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x348894

	.loc_0x94:
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
 * Address:	8036C968
 * Size:	000004
 */
void Game::Nest::Mgr::loadAnimData(void) { }

/*
 * --INFO--
 * Address:	8036C96C
 * Size:	000060
 */
void Game::Nest::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x304
	  addi      r3, r3, 0x10
	  bl        -0x3489E4
	  lis       r4, 0x8037
	  lis       r5, 0x8037
	  subi      r4, r4, 0x341C
	  mr        r7, r31
	  subi      r5, r5, 0x3634
	  li        r6, 0x304
	  bl        -0x2AAFBC
	  stw       r3, 0x48(r30)
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
 * Address:	8036C9CC
 * Size:	0000BC
 */
void Game::Nest::Obj::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xA0
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2F4
	  addi      r4, r3, 0x3068
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x2F8
	  stw       r3, 0x178(r31)
	  lwz       r3, 0x17C(r31)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r31)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0x90
	  lis       r3, 0x804B
	  addi      r0, r31, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r31, 0x290
	  stw       r4, 0x0(r31)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xA4B30

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x3489B4

	.loc_0xA0:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CA88
 * Size:	000004
 */
void __sinit_enemyNestMgr_cpp(void) { }

/*
 * --INFO--
 * Address:	8036CA8C
 * Size:	000008
 */
void @4 @Game::Nest::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x1D8
	*/
}
