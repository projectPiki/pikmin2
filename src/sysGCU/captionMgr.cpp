#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
Caption::Node::Node(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804508E8
 * Size:	000064
 */
void Caption::Node::read(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x8
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  addi      r4, r30, 0x20
	  bl        -0x3B83C
	  mr        r3, r31
	  bl        -0x3C1B4
	  rlwinm    r0,r3,0,16,31
	  mr        r3, r31
	  stw       r0, 0x18(r30)
	  bl        -0x3C1C4
	  rlwinm    r0,r3,0,16,31
	  stw       r0, 0x1C(r30)
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
 * Address:	8045094C
 * Size:	0000D4
 */
Caption::Mgr::Mgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804F
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r0, r4, 0x4AD8
	  lis       r4, 0x804A
	  stw       r31, 0x1C(r1)
	  subi      r4, r4, 0x47B8
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  stw       r0, 0x0(r3)
	  lis       r3, 0x804F
	  subi      r0, r3, 0x2AF8
	  stw       r5, 0x10(r29)
	  li        r3, 0x154
	  stw       r5, 0xC(r29)
	  stw       r5, 0x8(r29)
	  stw       r5, 0x4(r29)
	  stw       r4, 0x14(r29)
	  stw       r0, 0x0(r29)
	  stw       r5, 0x1C(r29)
	  stb       r5, 0x20(r29)
	  stb       r5, 0x21(r29)
	  stb       r5, 0x22(r29)
	  stb       r5, 0x23(r29)
	  bl        -0x42CA0C
	  lis       r4, 0x8045
	  lis       r5, 0x8045
	  addi      r4, r4, 0x11B8
	  li        r6, 0x6C
	  addi      r5, r5, 0xA20
	  li        r7, 0x3
	  bl        -0x38EFE4
	  stw       r3, 0x18(r29)
	  li        r30, 0
	  li        r31, 0

	.loc_0x98:
	  lwz       r0, 0x18(r29)
	  add       r3, r0, r31
	  bl        -0x17E18
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x6C
	  cmplwi    r30, 0x3
	  blt+      .loc_0x98
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

namespace P2JME {

/*
 * --INFO--
 * Address:	80450A20
 * Size:	000080
 */
Caption::TControl::~TControl(void)
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
	  beq-      .loc_0x64
	  lis       r4, 0x804F
	  subi      r0, r4, 0x2AD0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804F
	  subi      r0, r4, 0x33A4
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x3610
	  stw       r0, 0x0(r30)
	  bl        -0x448688

	.loc_0x54:
	  extsh.    r0, r31
	  ble-      .loc_0x64
	  mr        r3, r30
	  bl        -0x42C9CC

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace P2JME

/*
 * --INFO--
 * Address:	80450AA0
 * Size:	000108
 */
void Caption::Mgr::read(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  mr        r27, r3
	  mr        r3, r28
	  bl        -0x3C02C
	  mr.       r31, r3
	  bge-      .loc_0x44
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x47A0
	  li        r4, 0xFE
	  subi      r5, r5, 0x4790
	  crclr     6, 0x6
	  bl        -0x4264A0

	.loc_0x44:
	  li        r29, 0
	  b         .loc_0xC0

	.loc_0x4C:
	  li        r3, 0x28
	  bl        -0x42CC4C
	  mr.       r30, r3
	  beq-      .loc_0xB0
	  lis       r3, 0x804F
	  li        r7, 0
	  subi      r0, r3, 0x4AD8
	  addi      r6, r2, 0x27C0
	  stw       r0, 0x0(r30)
	  lis       r3, 0x804F
	  subi      r5, r3, 0x2AE4
	  li        r0, 0x1
	  stw       r7, 0x10(r30)
	  addi      r3, r30, 0x20
	  addi      r4, r2, 0x27C4
	  stw       r7, 0xC(r30)
	  stw       r7, 0x8(r30)
	  stw       r7, 0x4(r30)
	  stw       r6, 0x14(r30)
	  stw       r5, 0x0(r30)
	  stw       r7, 0x18(r30)
	  stw       r0, 0x1C(r30)
	  bl        -0x3862EC
	  addi      r0, r30, 0x20
	  stw       r0, 0x14(r30)

	.loc_0xB0:
	  mr        r3, r27
	  mr        r4, r30
	  bl        -0x3F750
	  addi      r29, r29, 0x1

	.loc_0xC0:
	  cmpw      r29, r31
	  blt+      .loc_0x4C
	  lwz       r29, 0x10(r27)
	  b         .loc_0xEC

	.loc_0xD0:
	  mr        r3, r29
	  mr        r4, r28
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r29, 0x4(r29)

	.loc_0xEC:
	  cmplwi    r29, 0
	  bne+      .loc_0xD0
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80450BA8
 * Size:	000068
 */
void Caption::Mgr::reset(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r31, 0x10(r3)
	  b         .loc_0x2C

	.loc_0x20:
	  mr        r3, r31
	  bl        -0x3F5FC
	  lwz       r31, 0x4(r31)

	.loc_0x2C:
	  cmplwi    r31, 0
	  bne+      .loc_0x20
	  mr        r3, r30
	  bl        -0x3F610
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x10(r30)
	  stw       r0, 0x1C(r30)
	  bl        .loc_0x68
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x68:
	*/
}

/*
 * --INFO--
 * Address:	80450C10
 * Size:	000068
 */
void Caption::Mgr::resetMessageObjs(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3

	.loc_0x24:
	  lwz       r0, 0x18(r29)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x6C
	  cmplwi    r30, 0x3
	  blt+      .loc_0x24
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
 * Size:	00002C
 */
void Caption::Mgr::setCurrentNode(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80450C78
 * Size:	000194
 */
void Caption::Mgr::update(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr.       r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  blt-      .loc_0x174
	  lwz       r4, 0x1C(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0xD0
	  lwz       r0, 0x1C(r4)
	  cmpw      r31, r0
	  bgt-      .loc_0xA8
	  lwz       r3, 0x8(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  lwz       r0, 0x1C(r3)
	  cmpw      r31, r0
	  bgt-      .loc_0xF4
	  lwz       r3, 0x10(r30)
	  b         .loc_0x70

	.loc_0x60:
	  lwz       r0, 0x1C(r3)
	  cmpw      r31, r0
	  ble-      .loc_0x78
	  lwz       r3, 0x4(r3)

	.loc_0x70:
	  cmplwi    r3, 0
	  bne+      .loc_0x60

	.loc_0x78:
	  stw       r3, 0x1C(r30)
	  b         .loc_0xF4

	.loc_0x80:
	  lwz       r3, 0x10(r30)
	  b         .loc_0x98

	.loc_0x88:
	  lwz       r0, 0x1C(r3)
	  cmpw      r31, r0
	  ble-      .loc_0xA0
	  lwz       r3, 0x4(r3)

	.loc_0x98:
	  cmplwi    r3, 0
	  bne+      .loc_0x88

	.loc_0xA0:
	  stw       r3, 0x1C(r30)
	  b         .loc_0xF4

	.loc_0xA8:
	  lwz       r3, 0x10(r30)
	  b         .loc_0xC0

	.loc_0xB0:
	  lwz       r0, 0x1C(r3)
	  cmpw      r31, r0
	  ble-      .loc_0xC8
	  lwz       r3, 0x4(r3)

	.loc_0xC0:
	  cmplwi    r3, 0
	  bne+      .loc_0xB0

	.loc_0xC8:
	  stw       r3, 0x1C(r30)
	  b         .loc_0xF4

	.loc_0xD0:
	  lwz       r3, 0x10(r30)
	  b         .loc_0xE8

	.loc_0xD8:
	  lwz       r0, 0x1C(r3)
	  cmpw      r31, r0
	  ble-      .loc_0xF0
	  lwz       r3, 0x4(r3)

	.loc_0xE8:
	  cmplwi    r3, 0
	  bne+      .loc_0xD8

	.loc_0xF0:
	  stw       r3, 0x1C(r30)

	.loc_0xF4:
	  lwz       r0, 0x1C(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x14C
	  cmplw     r4, r0
	  beq-      .loc_0x14C
	  mr        r3, r30
	  bl        0x120
	  mr.       r29, r3
	  bne-      .loc_0x134
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x47A0
	  li        r4, 0x163
	  subi      r5, r5, 0x4790
	  crclr     6, 0x6
	  bl        -0x426768

	.loc_0x134:
	  lwz       r6, 0x1C(r30)
	  mr        r3, r29
	  lwz       r5, 0x18(r6)
	  addi      r4, r6, 0x20
	  lwz       r6, 0x1C(r6)
	  bl        0x714

	.loc_0x14C:
	  li        r28, 0
	  li        r29, 0

	.loc_0x154:
	  lwz       r0, 0x18(r30)
	  mr        r4, r31
	  add       r3, r0, r29
	  bl        0x550
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x6C
	  cmplwi    r28, 0x3
	  blt+      .loc_0x154

	.loc_0x174:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80450E0C
 * Size:	000098
 */
void Caption::Mgr::draw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  addi      r3, r29, 0xBC
	  lwz       r12, 0xBC(r4)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1C(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x78
	  li        r30, 0
	  li        r31, 0

	.loc_0x4C:
	  lwz       r0, 0x18(r28)
	  mr        r4, r29
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x6C
	  cmplwi    r30, 0x3
	  blt+      .loc_0x4C

	.loc_0x78:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80450EA4
 * Size:	00005C
 */
void Caption::Mgr::getFreeMessage(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x18(r3)
	  li        r3, 0
	  li        r5, 0
	  lwz       r0, 0x5C(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x24
	  mulli     r0, r5, 0x6C
	  add       r3, r4, r0
	  blr

	.loc_0x24:
	  lwz       r0, 0xC8(r4)
	  li        r5, 0x1
	  cmpwi     r0, 0
	  bne-      .loc_0x40
	  mulli     r0, r5, 0x6C
	  add       r3, r4, r0
	  blr

	.loc_0x40:
	  lwz       r0, 0x134(r4)
	  li        r5, 0x2
	  cmpwi     r0, 0
	  bnelr-
	  mulli     r0, r5, 0x6C
	  add       r3, r4, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80450F00
 * Size:	000060
 */
Caption::Mgr::~Mgr(void)
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
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x2AF8
	  stw       r0, 0x0(r30)
	  bl        -0x3F9A8
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x42CE8C

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
 * Address:	80450F60
 * Size:	000060
 */
Caption::Node::~Node(void)
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
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x2AE4
	  stw       r0, 0x0(r30)
	  bl        -0x3FA08
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x42CEEC

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
