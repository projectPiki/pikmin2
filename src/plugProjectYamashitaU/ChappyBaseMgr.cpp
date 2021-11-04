#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8012A670
 * Size:	000050
 */
ChappyBase::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x4610
	  lis       r3, 0x804B
	  lis       r4, 0x8048
	  subi      r5, r3, 0x21E8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  subi      r0, r4, 0x4080
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
 * Address:	8012A6C0
 * Size:	0000C0
 */
void ChappyBase::Mgr::loadModelData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x34(r1)
	  subi      r5, r4, 0x4064
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
	  bl        -0x1CA68
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
	  bl        0x59C0
	  lwz       r3, 0x1C(r29)
	  lis       r4, 0x4
	  bl        -0xA6E80
	  lwz       r3, 0x1C(r29)
	  bl        -0xA6D30

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
 * Address:	8012A780
 * Size:	0000A0
 */
void ChappyBase::Mgr::loadAnimData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x34(r1)
	  subi      r5, r4, 0x4058
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
	  bl        -0x1CB28
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
	  bl        0x59CC

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
 * Address:	8012A820
 * Size:	00011C
 */
void ChappyBase::Mgr::createModel()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r27, 0x3C(r1)
	  mr        r27, r3
	  li        r3, 0x14
	  bl        -0x106994
	  mr.       r30, r3
	  beq-      .loc_0x38
	  lwz       r4, 0x1C(r27)
	  lis       r5, 0x8
	  lbz       r6, 0x24(r27)
	  bl        0x313988
	  mr        r30, r3

	.loc_0x38:
	  lis       r3, 0x8048
	  li        r29, 0
	  subi      r31, r3, 0x404C
	  b         .loc_0x9C

	.loc_0x48:
	  lwz       r3, 0x64(r4)
	  mr        r4, r29
	  bl        -0xFBA54
	  mr        r4, r31
	  mr        r28, r3
	  bl        -0x601BC
	  cmpwi     r3, 0
	  beq-      .loc_0x7C
	  mr        r3, r28
	  subi      r4, r2, 0x6310
	  bl        -0x601D0
	  cmpwi     r3, 0
	  bne-      .loc_0x98

	.loc_0x7C:
	  lwz       r4, 0x8(r30)
	  rlwinm    r3,r29,6,10,25
	  addi      r0, r3, 0x2C
	  lwz       r3, 0xC0(r4)
	  lis       r4, 0x402
	  lwzx      r3, r3, r0
	  bl        -0xCA5DC

	.loc_0x98:
	  addi      r29, r29, 0x1

	.loc_0x9C:
	  lwz       r4, 0x1C(r27)
	  rlwinm    r0,r29,0,16,31
	  lhz       r3, 0x5C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x48
	  addi      r3, r1, 0x8
	  bl        -0x40634
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xDD0
	  bl        -0x40618
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
	  bl        -0xC3FF4
	  mr        r3, r31
	  bl        -0xC412C
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
 * Address:	8012A93C
 * Size:	000008
 */
u32 ChappyBase::Mgr::getEnemyTypeID() { return 0x2; }

/*
 * --INFO--
 * Address:	8012A944
 * Size:	000004
 */
void EnemyMgrBase::doAlloc() { }

/*
 * --INFO--
 * Address:	8012A948
 * Size:	000008
 */
ChappyBase::Mgr::@4 @~Mgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x11178
	*/
}
} // namespace Game
