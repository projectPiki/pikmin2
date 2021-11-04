#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	802EBD54
 * Size:	000050
 */
MiniHoudai::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1BD0D4
	  lis       r3, 0x804D
	  lis       r4, 0x8049
	  addi      r5, r3, 0x4750
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  subi      r0, r4, 0x3240
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
 * Address:	802EBDA4
 * Size:	0000D8
 */
void MiniHoudai::Mgr::loadModelData(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r1, 0x8
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r4, -0x13E8(r2)
	  lwz       r0, -0x13E4(r2)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)

	.loc_0x34:
	  lwz       r3, -0x6E20(r13)
	  lwz       r4, 0x0(r31)
	  bl        -0x1DE13C
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  stw       r3, 0x1C(r29)
	  b         .loc_0xBC

	.loc_0x68:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x2
	  blt+      .loc_0x34
	  mr        r3, r29
	  bl        -0x1BBD14
	  li        r5, 0
	  b         .loc_0xA8

	.loc_0x88:
	  lwz       r3, 0x80(r4)
	  rlwinm    r0,r5,2,14,29
	  addi      r5, r5, 0x1
	  lwzx      r3, r3, r0
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r3)

	.loc_0xA8:
	  lwz       r4, 0x1C(r29)
	  rlwinm    r0,r5,0,16,31
	  lhz       r3, 0x7C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x88

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
 * Address:	802EBE7C
 * Size:	000090
 */
void MiniHoudai::Mgr::loadAnimData(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r1, 0x8
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r4, -0x13E0(r2)
	  lwz       r0, -0x13DC(r2)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)

	.loc_0x34:
	  lwz       r3, -0x6E20(r13)
	  lwz       r4, 0x0(r31)
	  bl        -0x1DE214
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  stw       r0, 0x20(r29)
	  b         .loc_0x74

	.loc_0x5C:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x2
	  blt+      .loc_0x34
	  mr        r3, r29
	  bl        -0x1BBD20

	.loc_0x74:
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
 * Address:	802EBF0C
 * Size:	0000B0
 */
MiniHoudai::Mgr::~Mgr(void)
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
	  addi      r3, r3, 0x4750
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
	  bl        0x1255FC

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x2C7EE8

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
 * Address:	802EBFBC
 * Size:	000008
 */
u32 MiniHoudai::Mgr::getEnemyTypeID(void) { return 0x4E; }

/*
 * --INFO--
 * Address:	802EBFC4
 * Size:	00002C
 */
void MiniHoudai::Mgr::doLoadBmd(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x124
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x30
	  bl        -0x27C748
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EBFF0
 * Size:	000008
 */
@4 @Game::MiniHoudai::Mgr::~Mgr(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xE8
	*/
}
} // namespace Game
