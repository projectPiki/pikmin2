#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	80276D54
 * Size:	000050
 */
Catfish::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1480D4
	  lis       r3, 0x804C
	  lis       r4, 0x8048
	  addi      r5, r3, 0x6EA8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r4, 0x6CD0
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
 * Address:	80276DA4
 * Size:	000048
 */
void Catfish::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x880
	  bl        -0x252F18
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x1649CC
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x147538
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80276DEC
 * Size:	000060
 */
void Catfish::Mgr::createObj(int)
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
	  mulli     r3, r31, 0x2E8
	  addi      r3, r3, 0x10
	  bl        -0x252E64
	  lis       r4, 0x8027
	  lis       r5, 0x8027
	  addi      r4, r4, 0x7008
	  mr        r7, r31
	  addi      r5, r5, 0x6E4C
	  li        r6, 0x2E8
	  bl        -0x1B543C
	  stw       r3, 0x44(r30)
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
 * Address:	80276E4C
 * Size:	0000EC
 */
Catfish::Obj::~Obj()
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804C
	  addi      r5, r30, 0x2D8
	  addi      r4, r3, 0x6F88
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x308
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  subi      r4, r3, 0xB20
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x308
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
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
	  bl        0x19A680

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x252E64

	.loc_0xD0:
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
 * Address:	80276F38
 * Size:	000010
 */
void Catfish::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2E8
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80276F48
 * Size:	0000B0
 */
Catfish::Mgr::~Mgr()
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
	  lis       r3, 0x804C
	  addi      r3, r3, 0x6EA8
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
	  bl        0x19A5C0

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x252F24

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
 * Address:	80276FF8
 * Size:	000008
 */
u32 Catfish::Mgr::getEnemyTypeID() { return 0x1A; }

/*
 * --INFO--
 * Address:	80277000
 * Size:	000008
 */
Catfish::Mgr::@4 @~Mgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xBC
	*/
}
} // namespace Game
