#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8012D80C
 * Size:	000050
 */
KochappyBase::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1474
	  lis       r3, 0x804B
	  lis       r4, 0x8048
	  subi      r5, r3, 0xC08
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  subi      r0, r4, 0x3EA0
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
 * Address:	8012D85C
 * Size:	0000C0
 */
void KochappyBase::Mgr::loadModelData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x34(r1)
	  subi      r5, r4, 0x3E80
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
	  bl        -0x1FC04
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  stw       r3, 0x1C(r29)
	  b         .loc_0xA4

	.loc_0x78:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x3
	  blt+      .loc_0x44
	  mr        r3, r29
	  bl        0x2824
	  lwz       r3, 0x1C(r29)
	  lis       r4, 0x4
	  bl        -0xAA01C
	  lwz       r3, 0x1C(r29)
	  bl        -0xA9ECC

	.loc_0xA4:
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
 * Address:	8012D91C
 * Size:	0000A0
 */
void KochappyBase::Mgr::loadAnimData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x34(r1)
	  subi      r5, r4, 0x3E74
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
	  bl        -0x1FCC4
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
	  bl        0x2830

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
 * Address:	8012D9BC
 * Size:	00011C
 */
void KochappyBase::Mgr::createModel()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  stw       r28, 0x40(r1)
	  mr        r28, r3
	  li        r3, 0x14
	  bl        -0x109B3C
	  mr.       r30, r3
	  beq-      .loc_0x44
	  lwz       r4, 0x1C(r28)
	  lis       r5, 0x8
	  lbz       r6, 0x24(r28)
	  bl        0x3107E0
	  mr        r30, r3

	.loc_0x44:
	  lis       r3, 0x8048
	  li        r29, 0
	  subi      r31, r3, 0x3E68
	  b         .loc_0x90

	.loc_0x54:
	  lwz       r3, 0x64(r4)
	  mr        r4, r29
	  bl        -0xFEBFC
	  mr        r4, r31
	  bl        -0x63360
	  cmpwi     r3, 0
	  bne-      .loc_0x8C
	  lwz       r4, 0x8(r30)
	  rlwinm    r3,r29,6,10,25
	  addi      r0, r3, 0x2C
	  lwz       r3, 0xC0(r4)
	  lis       r4, 0x402
	  lwzx      r3, r3, r0
	  bl        -0xCD76C

	.loc_0x8C:
	  addi      r29, r29, 0x1

	.loc_0x90:
	  lwz       r4, 0x1C(r28)
	  rlwinm    r0,r29,0,16,31
	  lhz       r3, 0x5C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x54
	  addi      r3, r1, 0x8
	  bl        -0x437C4
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xDD0
	  bl        -0x437A8
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
	  bl        -0xC7184
	  mr        r3, r31
	  bl        -0xC72BC
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
 * Address:	8012DAD8
 * Size:	000008
 */
u32 KochappyBase::Mgr::getEnemyTypeID() { return 0x1; }

/*
 * --INFO--
 * Address:	8012DAE0
 * Size:	000008
 */
KochappyBase::Mgr::@4 @~Mgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x1B7E0
	*/
}
} // namespace Game
