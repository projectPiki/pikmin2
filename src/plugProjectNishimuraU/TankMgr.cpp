#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	80275A18
 * Size:	000050
 */
Tank::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x146D98
	  lis       r3, 0x804C
	  lis       r4, 0x8048
	  addi      r5, r3, 0x6A68
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r4, 0x6C8C
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
 * Address:	80275A68
 * Size:	00009C
 */
void Tank::Mgr::loadModelData()
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
	  lwz       r4, -0x3088(r2)
	  lwz       r0, -0x3084(r2)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)

	.loc_0x34:
	  lwz       r3, -0x6E20(r13)
	  lwz       r4, 0x0(r31)
	  bl        -0x167E00
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  stw       r3, 0x1C(r29)
	  b         .loc_0x80

	.loc_0x68:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x2
	  blt+      .loc_0x34
	  mr        r3, r29
	  bl        -0x1459D8

	.loc_0x80:
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
 * Address:	80275B04
 * Size:	000090
 */
void Tank::Mgr::loadAnimData()
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
	  lwz       r4, -0x3080(r2)
	  lwz       r0, -0x307C(r2)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)

	.loc_0x34:
	  lwz       r3, -0x6E20(r13)
	  lwz       r4, 0x0(r31)
	  bl        -0x167E9C
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
	  bl        -0x1459A8

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
 * Address:	80275B94
 * Size:	000138
 */
void Tank::Mgr::createModel()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  addi      r31, r4, 0x6C80
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  stw       r28, 0x40(r1)
	  mr        r28, r3
	  li        r3, 0x14
	  bl        -0x251D1C
	  mr.       r30, r3
	  beq-      .loc_0x4C
	  lwz       r4, 0x1C(r28)
	  lis       r5, 0x8
	  lbz       r6, 0x24(r28)
	  bl        0x1C8600
	  mr        r30, r3

	.loc_0x4C:
	  cmplwi    r30, 0
	  bne-      .loc_0x68
	  addi      r3, r31, 0x24
	  addi      r5, r31, 0x30
	  li        r4, 0x82
	  crclr     6, 0x6
	  bl        -0x24B5B8

	.loc_0x68:
	  li        r29, 0
	  b         .loc_0xAC

	.loc_0x70:
	  lwz       r3, 0x64(r4)
	  mr        r4, r29
	  bl        -0x246DF0
	  addi      r4, r31, 0x3C
	  bl        -0x1AB554
	  cmpwi     r3, 0
	  bne-      .loc_0xA8
	  lwz       r4, 0x8(r30)
	  rlwinm    r3,r29,6,10,25
	  addi      r0, r3, 0x2C
	  lwz       r3, 0xC0(r4)
	  lis       r4, 0x402
	  lwzx      r3, r3, r0
	  bl        -0x215960

	.loc_0xA8:
	  addi      r29, r29, 0x1

	.loc_0xAC:
	  lwz       r4, 0x1C(r28)
	  rlwinm    r0,r29,0,16,31
	  lhz       r3, 0x5C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x70
	  addi      r3, r1, 0x8
	  bl        -0x18B9B8
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xDD0
	  bl        -0x18B99C
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
	  bl        -0x20F378
	  mr        r3, r31
	  bl        -0x20F4B0
	  lwz       r0, 0x54(r1)
	  mr        r3, r30
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80275CCC
 * Size:	0000B0
 */
Tank::Mgr::~Mgr()
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
	  addi      r3, r3, 0x6A68
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
	  bl        0x19B83C

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x251CA8

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
 * Address:	80275D7C
 * Size:	000008
 */
u32 Tank::Mgr::getEnemyTypeID() { return 0x18; }

/*
 * --INFO--
 * Address:	80275D84
 * Size:	000008
 */
Tank::Mgr::@4 @~Mgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xBC
	*/
}
} // namespace Game
