#include "types.h"

/*
 * --INFO--
 * Address:	802E3D68
 * Size:	000050
 */
void Game::Kabuto::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1B50E8
	  lis       r3, 0x804D
	  lis       r4, 0x8049
	  addi      r5, r3, 0x3B58
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  subi      r0, r4, 0x3358
	  stw       r5, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E3DB8
 * Size:	0000E8
 */
void Game::Kabuto::Mgr::loadModelData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x34(r1)
	  subi      r5, r4, 0x3344
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  addi      r30, r1, 0x8
	  stw       r29, 0x24(r1)
	  li        r29, 0
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x4(r5)
	  lwz       r0, 0x8(r5)
	  stw       r4, 0x8(r1)
	  stw       r3, 0xC(r1)
	  stw       r0, 0x10(r1)

	.loc_0x44:
	  lwz       r3, -0x6E20(r13)
	  lwz       r4, 0x0(r30)
	  bl        -0x1D6160
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  stw       r3, 0x1C(r31)
	  b         .loc_0xCC

	.loc_0x78:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x3
	  blt+      .loc_0x44
	  mr        r3, r31
	  bl        -0x1B3D38
	  li        r5, 0
	  b         .loc_0xB8

	.loc_0x98:
	  lwz       r3, 0x80(r4)
	  rlwinm    r0,r5,2,14,29
	  addi      r5, r5, 0x1
	  lwzx      r3, r3, r0
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r3)

	.loc_0xB8:
	  lwz       r4, 0x1C(r31)
	  rlwinm    r0,r5,0,16,31
	  lhz       r3, 0x7C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x98

	.loc_0xCC:
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
 * Address:	802E3EA0
 * Size:	0000A0
 */
void Game::Kabuto::Mgr::loadAnimData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x34(r1)
	  subi      r5, r4, 0x3338
	  stw       r31, 0x2C(r1)
	  addi      r31, r1, 0x8
	  stw       r30, 0x28(r1)
	  li        r30, 0
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x4(r5)
	  lwz       r0, 0x8(r5)
	  stw       r4, 0x8(r1)
	  stw       r3, 0xC(r1)
	  stw       r0, 0x10(r1)

	.loc_0x44:
	  lwz       r3, -0x6E20(r13)
	  lwz       r4, 0x0(r31)
	  bl        -0x1D6248
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  stw       r0, 0x20(r29)
	  b         .loc_0x84

	.loc_0x6C:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x3
	  blt+      .loc_0x44
	  mr        r3, r29
	  bl        -0x1B3D54

	.loc_0x84:
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
 * Address:	802E3F40
 * Size:	00014C
 */
void Game::Kabuto::Mgr::createModel()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x54(r1)
	  stmw      r27, 0x3C(r1)
	  mr        r27, r3
	  subi      r31, r4, 0x3368
	  li        r3, 0x14
	  bl        -0x2C00BC
	  mr.       r30, r3
	  beq-      .loc_0x40
	  lwz       r4, 0x1C(r27)
	  lis       r5, 0x8
	  lbz       r6, 0x24(r27)
	  bl        0x15A260
	  mr        r30, r3

	.loc_0x40:
	  cmplwi    r30, 0
	  bne-      .loc_0x5C
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x4C
	  li        r4, 0x93
	  crclr     6, 0x6
	  bl        -0x2B9958

	.loc_0x5C:
	  li        r29, 0
	  b         .loc_0xCC

	.loc_0x64:
	  lwz       r3, 0x64(r4)
	  mr        r4, r29
	  bl        -0x2B5190
	  addi      r4, r31, 0x58
	  mr        r28, r3
	  bl        -0x2198F8
	  cmpwi     r3, 0
	  beq-      .loc_0xAC
	  mr        r3, r28
	  addi      r4, r31, 0x6C
	  bl        -0x21990C
	  cmpwi     r3, 0
	  beq-      .loc_0xAC
	  mr        r3, r28
	  addi      r4, r31, 0x80
	  bl        -0x219920
	  cmpwi     r3, 0
	  bne-      .loc_0xC8

	.loc_0xAC:
	  lwz       r4, 0x8(r30)
	  rlwinm    r3,r29,6,10,25
	  addi      r0, r3, 0x2C
	  lwz       r3, 0xC0(r4)
	  lis       r4, 0x402
	  lwzx      r3, r3, r0
	  bl        -0x283D2C

	.loc_0xC8:
	  addi      r29, r29, 0x1

	.loc_0xCC:
	  lwz       r4, 0x1C(r27)
	  rlwinm    r0,r29,0,16,31
	  lhz       r3, 0x5C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x64
	  addi      r3, r1, 0x8
	  bl        -0x1F9D84
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xDD0
	  bl        -0x1F9D68
	  lwz       r31, 0x8(r30)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x27D744
	  mr        r3, r31
	  bl        -0x27D87C
	  mr        r3, r30
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E408C
 * Size:	0000B0
 */
void Game::Kabuto::Mgr::~Mgr()
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
	  lis       r3, 0x804D
	  addi      r3, r3, 0x3B58
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
	  bl        0x12D47C

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x2C0068

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
 * Address:	802E413C
 * Size:	000008
 */
u32 Game::Kabuto::Mgr::getEnemyTypeID() { return 0x4B; }

/*
 * --INFO--
 * Address:	802E4144
 * Size:	00002C
 */
void Game::Kabuto::Mgr::doLoadBmd(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x124
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x30
	  bl        -0x2748C8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E4170
 * Size:	000008
 */
void Game::Kabuto::Mgr::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xE8
	*/
}
