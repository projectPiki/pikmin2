#include "types.h"

/*
 * --INFO--
 * Address:	8027C40C
 * Size:	000050
 */
void Game::Wtank::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x6A08
	  lis       r3, 0x804C
	  lis       r4, 0x8048
	  addi      r5, r3, 0x7EE0
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r4, 0x70B4
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
 * Address:	8027C45C
 * Size:	000048
 */
void Game::Wtank::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x808
	  bl        -0x2585D0
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x14CBF0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x48:
	*/
}

/*
 * --INFO--
 * Address:	8027C4A4
 * Size:	000058
 */
void Game::Tank::Parms::Parms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x172D1C
	  lis       r4, 0x804C
	  lis       r3, 0x8048
	  addi      r0, r4, 0x7FC4
	  addi      r5, r31, 0x804
	  stw       r0, 0xD8(r31)
	  li        r4, 0
	  addi      r0, r3, 0x70D0
	  mr        r3, r31
	  stw       r5, 0x7F8(r31)
	  stw       r4, 0x7FC(r31)
	  stw       r0, 0x800(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027C4FC
 * Size:	000060
 */
void Game::Wtank::Mgr::createObj(int)
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
	  mulli     r3, r31, 0x31C
	  addi      r3, r3, 0x10
	  bl        -0x258574
	  lis       r4, 0x8028
	  lis       r5, 0x8028
	  subi      r4, r4, 0x37F4
	  mr        r7, r31
	  subi      r5, r5, 0x3AA4
	  li        r6, 0x31C
	  bl        -0x1BAB4C
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
 * Address:	8027C55C
 * Size:	0000F0
 */
void Game::Wtank::Obj::~Obj()
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
	  beq-      .loc_0xD4
	  lis       r3, 0x804D
	  addi      r0, r30, 0x30C
	  subi      r4, r3, 0x7F6C
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x328
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC4
	  lis       r3, 0x804C
	  addi      r0, r30, 0x308
	  addi      r4, r3, 0x6B50
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x328
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC4
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0x194F6C

	.loc_0xC4:
	  extsh.    r0, r31
	  ble-      .loc_0xD4
	  mr        r3, r30
	  bl        -0x258578

	.loc_0xD4:
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
 * Address:	8027C64C
 * Size:	000010
 */
void Game::Wtank::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x31C
	  lwz       r3, 0x48(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027C65C
 * Size:	000080
 */
void Game::Wtank::Mgr::loadTexData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  li        r0, 0
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  stw       r0, 0x44(r3)
	  addi      r3, r1, 0x8
	  lwz       r4, -0x7B70(r13)
	  bl        0x1CFF58
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x1D0114
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r0, 0x30(r3)
	  stw       r0, 0x44(r31)

	.loc_0x44:
	  lwz       r0, 0x44(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x6C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x70DC
	  li        r4, 0x52
	  addi      r5, r5, 0x70EC
	  crclr     6, 0x6
	  bl        -0x252084

	.loc_0x6C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027C6DC
 * Size:	0000C8
 */
void Game::Wtank::Mgr::~Mgr()
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804C
	  addi      r3, r3, 0x7EE0
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x6A68
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0x194E14

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x2586D0

	.loc_0xAC:
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
 * Address:	8027C7A4
 * Size:	000008
 */
u32 Game::Wtank::Mgr::getEnemyTypeID() { return 0x19; }

/*
 * --INFO--
 * Address:	8027C7AC
 * Size:	000008
 */
void Game::Wtank::Mgr::getChangeTexture()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x44(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027C7B4
 * Size:	000050
 */
void Game::Tank::Parms::read(Stream&)
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
	  bl        0x197024
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x197018
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x19700C
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
 * Address:	8027C804
 * Size:	000008
 */
void Game::Wtank::Mgr::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x12C
	*/
}
