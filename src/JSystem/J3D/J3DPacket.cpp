#include "types.h"

/*
 * --INFO--
 * Address:	8005F82C
 * Size:	000060
 */
void J3DDisplayListObj::newDisplayList(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1F
	  rlwinm    r0,r0,0,0,26
	  li        r4, 0x20
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0xC(r3)
	  lwz       r3, 0xC(r3)
	  bl        -0x3B85C
	  stw       r3, 0x0(r31)
	  li        r4, 0x20
	  lwz       r3, 0xC(r31)
	  bl        -0x3B86C
	  stw       r3, 0x4(r31)
	  li        r0, 0
	  li        r3, 0
	  stw       r0, 0x8(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F88C
 * Size:	000058
 */
void J3DDisplayListObj::newSingleDisplayList(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1F
	  rlwinm    r0,r0,0,0,26
	  li        r4, 0x20
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0xC(r3)
	  lwz       r3, 0xC(r3)
	  bl        -0x3B8BC
	  stw       r3, 0x0(r31)
	  li        r0, 0
	  li        r3, 0
	  lwz       r4, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x8(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F8E4
 * Size:	000068
 */
void J3DDisplayListObj::single_To_Double()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x4(r31)
	  cmplw     r3, r0
	  bne-      .loc_0x50
	  lwz       r3, 0xC(r31)
	  li        r4, 0x20
	  bl        -0x3B918
	  stw       r3, 0x4(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x0(r31)
	  lwz       r5, 0xC(r31)
	  bl        -0x5A788
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0xC(r31)
	  bl        0x8CE18

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F94C
 * Size:	000020
 */
void J3DDisplayListObj::setSingleDisplayList(void*, unsigned long)
{
	/*
	.loc_0x0:
	  addi      r0, r5, 0x1F
	  rlwinm    r0,r0,0,0,26
	  stw       r0, 0xC(r3)
	  stw       r4, 0x0(r3)
	  lwz       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stw       r5, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F96C
 * Size:	00002C
 */
void J3DDisplayListObj::callDL() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  lwz       r3, 0x0(r3)
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x8(r4)
	  bl        0x89A54
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F998
 * Size:	000060
 */
void J3DDisplayListObj::beginDL()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x4(r31)
	  stw       r0, 0x0(r31)
	  stw       r3, 0x4(r31)
	  bl        0x8F27C
	  stw       r3, -0x7698(r13)
	  lis       r3, 0x8051
	  subi      r3, r3, 0xBA4
	  lwz       r4, 0x0(r31)
	  lwz       r5, 0xC(r31)
	  bl        0x82130
	  lis       r3, 0x8051
	  subi      r0, r3, 0xBA4
	  stw       r0, -0x7158(r13)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F9F8
 * Size:	00005C
 */
void J3DDisplayListObj::endDL()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x8213C
	  lwz       r3, -0x7698(r13)
	  bl        0x8F24C
	  lis       r3, 0x8051
	  subi      r4, r3, 0xBA4
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  sub       r0, r0, r3
	  stw       r0, 0x8(r31)
	  bl        0x820EC
	  li        r0, 0
	  stw       r0, -0x7158(r13)
	  lwz       r3, 0x8(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005FA54
 * Size:	000060
 */
void J3DDisplayListObj::beginPatch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x4(r31)
	  stw       r0, 0x0(r31)
	  stw       r3, 0x4(r31)
	  bl        0x8F1C0
	  stw       r3, -0x7698(r13)
	  lis       r3, 0x8051
	  subi      r3, r3, 0xBA4
	  lwz       r4, 0x0(r31)
	  lwz       r5, 0xC(r31)
	  bl        0x82074
	  lis       r3, 0x8051
	  subi      r0, r3, 0xBA4
	  stw       r0, -0x7158(r13)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005FAB4
 * Size:	00003C
 */
void J3DDisplayListObj::endPatch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, -0x7698(r13)
	  bl        0x8F194
	  li        r0, 0
	  stw       r0, -0x7158(r13)
	  lwz       r3, 0x8(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005FAF0
 * Size:	000008
 */
u32 J3DPacket::entry(J3DDrawBuffer*) { return 0x1; }

/*
 * --INFO--
 * Address:	8005FAF8
 * Size:	000020
 */
void J3DPacket::addChildPacket(J3DPacket*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x14
	  stw       r4, 0x8(r3)
	  blr

	.loc_0x14:
	  stw       r0, 0x4(r4)
	  stw       r4, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005FB18
 * Size:	000004
 */
void J3DPacket::draw() { }

/*
 * --INFO--
 * Address:	8005FB1C
 * Size:	000048
 */
J3DPacket::~J3DPacket()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  addi      r0, r5, 0x154C
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x3BA94

	.loc_0x30:
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
 * Address:	8005FB64
 * Size:	00005C
 */
J3DDrawPacket::~J3DDrawPacket()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1538
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x154C
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x3BAF0

	.loc_0x44:
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
 * Address:	8005FBC0
 * Size:	0000A4
 */
void J3DDrawPacket::newDisplayList(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x10
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  bl        -0x3BD3C
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)

	.loc_0x40:
	  stw       r3, 0x20(r31)
	  lwz       r31, 0x20(r31)
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  li        r3, 0x4
	  b         .loc_0x8C

	.loc_0x58:
	  addi      r0, r30, 0x1F
	  li        r4, 0x20
	  rlwinm    r0,r0,0,0,26
	  stw       r0, 0xC(r31)
	  lwz       r3, 0xC(r31)
	  bl        -0x3BC34
	  stw       r3, 0x0(r31)
	  li        r4, 0x20
	  lwz       r3, 0xC(r31)
	  bl        -0x3BC44
	  stw       r3, 0x4(r31)
	  li        r3, 0
	  stw       r3, 0x8(r31)

	.loc_0x8C:
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
 * Address:	8005FC64
 * Size:	00009C
 */
void J3DDrawPacket::newSingleDisplayList(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x10
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  bl        -0x3BDE0
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)

	.loc_0x40:
	  stw       r3, 0x20(r31)
	  lwz       r31, 0x20(r31)
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  li        r3, 0x4
	  b         .loc_0x84

	.loc_0x58:
	  addi      r0, r30, 0x1F
	  li        r4, 0x20
	  rlwinm    r0,r0,0,0,26
	  stw       r0, 0xC(r31)
	  lwz       r3, 0xC(r31)
	  bl        -0x3BCD8
	  stw       r3, 0x0(r31)
	  li        r3, 0
	  lwz       r0, 0x0(r31)
	  stw       r0, 0x4(r31)
	  stw       r3, 0x8(r31)

	.loc_0x84:
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
 * Address:	8005FD00
 * Size:	00002C
 */
void J3DDrawPacket::draw()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x20(r3)
	  lwz       r3, 0x0(r4)
	  lwz       r4, 0x8(r4)
	  bl        0x896C0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005FD2C
 * Size:	00005C
 */
J3DMatPacket::J3DMatPacket()
{
	/*
	.loc_0x0:
	  lis       r6, 0x804A
	  lis       r5, 0x804A
	  addi      r0, r6, 0x154C
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  li        r6, 0
	  addi      r5, r5, 0x1538
	  addi      r4, r4, 0x1524
	  stw       r6, 0x4(r3)
	  li        r0, -0x1
	  stw       r6, 0x8(r3)
	  stw       r6, 0xC(r3)
	  stw       r5, 0x0(r3)
	  stw       r6, 0x10(r3)
	  stw       r6, 0x20(r3)
	  stw       r6, 0x24(r3)
	  stw       r4, 0x0(r3)
	  stw       r6, 0x28(r3)
	  stw       r6, 0x30(r3)
	  stw       r0, 0x34(r3)
	  stw       r6, 0x38(r3)
	  stw       r6, 0x3C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005FD88
 * Size:	00006C
 */
J3DMatPacket::~J3DMatPacket()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1524
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1538
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x154C
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x3BD24

	.loc_0x54:
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
 * Address:	8005FDF4
 * Size:	000020
 */
void J3DMatPacket::addShapePacket(J3DShapePacket*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x2C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x14
	  stw       r4, 0x2C(r3)
	  blr

	.loc_0x14:
	  stw       r0, 0x4(r4)
	  stw       r4, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005FE14
 * Size:	000064
 */
void J3DMatPacket::beginDiff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r3, 0x28(r3)
	  lwz       r31, 0x20(r3)
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0x4(r31)
	  stw       r0, 0x0(r31)
	  stw       r3, 0x4(r31)
	  bl        0x8EDFC
	  stw       r3, -0x7698(r13)
	  lis       r3, 0x8051
	  subi      r3, r3, 0xBA4
	  lwz       r4, 0x0(r31)
	  lwz       r5, 0xC(r31)
	  bl        0x81CB0
	  lis       r3, 0x8051
	  subi      r0, r3, 0xBA4
	  stw       r0, -0x7158(r13)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005FE78
 * Size:	000060
 */
void J3DMatPacket::endDiff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r3, 0x28(r3)
	  lwz       r31, 0x20(r3)
	  bl        0x81CB8
	  lwz       r3, -0x7698(r13)
	  bl        0x8EDC8
	  lis       r3, 0x8051
	  subi      r4, r3, 0xBA4
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  sub       r0, r0, r3
	  stw       r0, 0x8(r31)
	  bl        0x81C68
	  li        r0, 0
	  stw       r0, -0x7158(r13)
	  lwz       r3, 0x8(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005FED8
 * Size:	000024
 */
void J3DMatPacket::isSame(J3DMatPacket*) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x34(r3)
	  li        r3, 0
	  lwz       r0, 0x34(r4)
	  cmplw     r5, r0
	  bnelr-
	  rlwinm.   r0,r5,1,31,31
	  bnelr-
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005FEFC
 * Size:	000094
 */
void J3DMatPacket::draw()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x30(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x20(r31)
	  lwz       r3, 0x0(r4)
	  lwz       r4, 0x8(r4)
	  bl        0x894A8
	  lwz       r4, 0x2C(r31)
	  lwz       r3, 0x28(r4)
	  mr        r31, r4
	  bl        0xF00
	  b         .loc_0x70

	.loc_0x4C:
	  lwz       r4, 0x20(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x64
	  lwz       r3, 0x0(r4)
	  lwz       r4, 0x8(r4)
	  bl        0x8947C

	.loc_0x64:
	  mr        r3, r31
	  bl        0x6F4
	  lwz       r31, 0x4(r31)

	.loc_0x70:
	  cmplwi    r31, 0
	  bne+      .loc_0x4C
	  li        r0, 0
	  stw       r0, -0x7690(r13)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005FF90
 * Size:	000058
 */
J3DShapePacket::J3DShapePacket()
{
	/*
	.loc_0x0:
	  lis       r6, 0x804A
	  lis       r5, 0x804A
	  addi      r0, r6, 0x154C
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  li        r6, 0
	  addi      r5, r5, 0x1538
	  addi      r0, r4, 0x1510
	  stw       r6, 0x4(r3)
	  stw       r6, 0x8(r3)
	  stw       r6, 0xC(r3)
	  stw       r5, 0x0(r3)
	  stw       r6, 0x10(r3)
	  stw       r6, 0x20(r3)
	  stw       r6, 0x24(r3)
	  stw       r0, 0x0(r3)
	  stw       r6, 0x28(r3)
	  stw       r6, 0x2C(r3)
	  stw       r6, 0x30(r3)
	  stw       r6, 0x34(r3)
	  stw       r6, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005FFE8
 * Size:	00006C
 */
J3DShapePacket::~J3DShapePacket()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1510
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1538
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x154C
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x3BF84

	.loc_0x54:
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
 * Address:	80060054
 * Size:	000274
 */
void J3DShapePacket::calcDifferedBufferSize(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x804A
	  lis       r5, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r3, r5, 0x14F4
	  stw       r28, 0x10(r1)
	  lwzu      r0, 0x14D8(r6)
	  and.      r0, r30, r0
	  beq-      .loc_0x44
	  lwz       r31, 0x0(r3)

	.loc_0x44:
	  addi      r4, r6, 0x4
	  addi      r3, r3, 0x4
	  lwz       r0, 0x4(r6)
	  and.      r0, r30, r0
	  beq-      .loc_0x60
	  lwz       r0, 0x0(r3)
	  add       r31, r31, r0

	.loc_0x60:
	  lwzu      r0, 0x4(r4)
	  addi      r3, r3, 0x4
	  and.      r0, r30, r0
	  beq-      .loc_0x78
	  lwz       r0, 0x0(r3)
	  add       r31, r31, r0

	.loc_0x78:
	  lwzu      r0, 0x4(r4)
	  addi      r3, r3, 0x4
	  and.      r0, r30, r0
	  beq-      .loc_0x90
	  lwz       r0, 0x0(r3)
	  add       r31, r31, r0

	.loc_0x90:
	  lwzu      r0, 0x4(r4)
	  addi      r3, r3, 0x4
	  and.      r0, r30, r0
	  beq-      .loc_0xA8
	  lwz       r0, 0x0(r3)
	  add       r31, r31, r0

	.loc_0xA8:
	  lwz       r0, 0x4(r4)
	  addi      r3, r3, 0x4
	  addi      r4, r4, 0x4
	  and.      r0, r30, r0
	  beq-      .loc_0xC4
	  lwz       r0, 0x0(r3)
	  add       r31, r31, r0

	.loc_0xC4:
	  lwz       r0, 0x4(r4)
	  addi      r3, r3, 0x4
	  and.      r0, r30, r0
	  beq-      .loc_0xDC
	  lwz       r0, 0x0(r3)
	  add       r31, r31, r0

	.loc_0xDC:
	  rlwinm    r0,r30,28,28,31
	  rlwinm.   r28,r30,24,28,31
	  mulli     r0, r0, 0x48
	  add       r31, r31, r0
	  beq-      .loc_0x138
	  lwz       r3, 0x28(r29)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  cmplw     r28, r3
	  ble-      .loc_0x118
	  mr        r3, r28

	.loc_0x118:
	  rlwinm.   r0,r30,0,19,19
	  beq-      .loc_0x130
	  mulli     r0, r3, 0x3D
	  add       r31, r0, r31
	  addi      r31, r31, 0xA
	  b         .loc_0x138

	.loc_0x130:
	  mulli     r0, r3, 0x35
	  add       r31, r31, r0

	.loc_0x138:
	  rlwinm.   r28,r30,16,28,31
	  beq-      .loc_0x1CC
	  lwz       r3, 0x28(r29)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x8
	  ble-      .loc_0x170
	  li        r3, 0x8
	  b         .loc_0x18C

	.loc_0x170:
	  lwz       r3, 0x28(r29)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl

	.loc_0x18C:
	  rlwinm    r0,r3,0,24,31
	  cmplw     r28, r0
	  mr        r3, r0
	  ble-      .loc_0x1A0
	  mr        r3, r28

	.loc_0x1A0:
	  rlwinm.   r0,r30,0,5,5
	  beq-      .loc_0x1C4
	  addi      r0, r3, 0x1
	  rlwinm    r0,r0,31,1,31
	  mulli     r3, r3, 0x37
	  mulli     r0, r0, 0x37
	  add       r3, r3, r0
	  add       r31, r31, r3
	  b         .loc_0x1CC

	.loc_0x1C4:
	  mulli     r0, r3, 0x37
	  add       r31, r31, r0

	.loc_0x1CC:
	  rlwinm.   r28,r30,12,28,31
	  beq-      .loc_0x24C
	  lwz       r3, 0x28(r29)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x8
	  ble-      .loc_0x204
	  li        r3, 0x8
	  b         .loc_0x220

	.loc_0x204:
	  lwz       r3, 0x28(r29)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl

	.loc_0x220:
	  rlwinm    r0,r3,0,24,31
	  cmplw     r28, r0
	  mr        r4, r0
	  ble-      .loc_0x234
	  mr        r4, r28

	.loc_0x234:
	  mulli     r3, r4, 0xA
	  rlwinm.   r0,r30,0,4,4
	  add       r31, r31, r3
	  beq-      .loc_0x24C
	  mulli     r0, r4, 0x5
	  add       r31, r31, r0

	.loc_0x24C:
	  addi      r0, r31, 0x1F
	  lwz       r31, 0x1C(r1)
	  rlwinm    r3,r0,0,0,26
	  lwz       r0, 0x24(r1)
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
 * Address:	800602C8
 * Size:	000008
 */
u32 J3DTevBlock::getTevStageNum() const { return 0x1; }

/*
 * --INFO--
 * Address:	800602D0
 * Size:	000008
 */
u32 J3DTexGenBlock::getTexGenNum() const { return 0x0; }

/*
 * --INFO--
 * Address:	800602D8
 * Size:	0000BC
 */
void J3DShapePacket::newDifferedDisplayList(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stw       r4, 0x34(r3)
	  bl        -0x2A0
	  mr        r31, r3
	  li        r3, 0x10
	  bl        -0x3C45C
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)

	.loc_0x48:
	  stw       r3, 0x20(r30)
	  lwz       r30, 0x20(r30)
	  cmplwi    r30, 0
	  bne-      .loc_0x60
	  li        r0, 0x4
	  b         .loc_0x94

	.loc_0x60:
	  addi      r0, r31, 0x1F
	  li        r4, 0x20
	  rlwinm    r0,r0,0,0,26
	  stw       r0, 0xC(r30)
	  lwz       r3, 0xC(r30)
	  bl        -0x3C354
	  stw       r3, 0x0(r30)
	  li        r4, 0x20
	  lwz       r3, 0xC(r30)
	  bl        -0x3C364
	  stw       r3, 0x4(r30)
	  li        r0, 0
	  stw       r0, 0x8(r30)

	.loc_0x94:
	  cmpwi     r0, 0
	  li        r3, 0
	  beq-      .loc_0xA4
	  mr        r3, r0

	.loc_0xA4:
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
 * Address:	80060394
 * Size:	000114
 */
void J3DShapePacket::newDifferedTexMtx(J3DTexDiffFlag)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmpwi     r4, 0x1
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  beq-      .loc_0xA0
	  bge-      .loc_0xE8
	  cmpwi     r4, 0
	  bge-      .loc_0x38
	  b         .loc_0xE8

	.loc_0x38:
	  lwz       r3, 0x28(r28)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  mr        r29, r3
	  li        r3, 0xC
	  bl        -0x3C54C
	  mr.       r30, r3
	  beq-      .loc_0x88
	  rlwinm    r31,r29,0,16,31
	  mulli     r3, r31, 0x30
	  bl        -0x3C458
	  stw       r3, 0x0(r30)
	  rlwinm    r3,r31,6,0,25
	  bl        -0x3C464
	  stw       r3, 0x4(r30)
	  sth       r29, 0x8(r30)

	.loc_0x88:
	  stw       r30, 0x24(r28)
	  lwz       r0, 0x24(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  li        r3, 0x4
	  b         .loc_0xF4

	.loc_0xA0:
	  li        r3, 0xC
	  bl        -0x3C594
	  mr.       r31, r3
	  beq-      .loc_0xD0
	  li        r3, 0x180
	  bl        -0x3C49C
	  stw       r3, 0x0(r31)
	  li        r3, 0x200
	  bl        -0x3C4A8
	  stw       r3, 0x4(r31)
	  li        r0, 0x8
	  sth       r0, 0x8(r31)

	.loc_0xD0:
	  stw       r31, 0x24(r28)
	  lwz       r0, 0x24(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  li        r3, 0x4
	  b         .loc_0xF4

	.loc_0xE8:
	  li        r3, 0x5
	  b         .loc_0xF4

	.loc_0xF0:
	  li        r3, 0

	.loc_0xF4:
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
 * Address:	800604A8
 * Size:	0001B0
 */
void J3DShapePacket::draw()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x10(r3)
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x19C
	  lwz       r0, 0x28(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x19C
	  lwz       r3, 0x38(r31)
	  addi      r3, r3, 0x88
	  bl        -0x1800
	  lis       r3, 0x8051
	  lwz       r4, 0x38(r31)
	  subi      r3, r3, 0xDD0
	  stw       r4, 0x38(r3)
	  stw       r31, 0x40(r3)
	  lwz       r0, 0x8(r4)
	  rlwinm    r0,r0,28,31,31
	  stb       r0, -0x764F(r13)
	  lwz       r3, 0x38(r31)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x7C
	  lwz       r3, 0x28(r31)
	  lwz       r0, 0xC(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0xC(r3)
	  b         .loc_0x8C

	.loc_0x7C:
	  lwz       r3, 0x28(r31)
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0xC(r3)

	.loc_0x8C:
	  lwz       r3, 0x38(r31)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0xBC
	  lwz       r3, 0x28(r31)
	  lwz       r0, 0xC(r3)
	  rlwinm.   r0,r0,24,31,31
	  bne-      .loc_0xBC
	  lwz       r0, 0xC(r3)
	  ori       r0, r0, 0x8
	  stw       r0, 0xC(r3)
	  b         .loc_0xCC

	.loc_0xBC:
	  lwz       r3, 0x28(r31)
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0xC(r3)

	.loc_0xCC:
	  lwz       r4, 0x2C(r31)
	  lwz       r3, 0x28(r31)
	  addi      r0, r4, 0x30
	  stw       r0, 0x60(r3)
	  lwz       r4, 0x2C(r31)
	  lwz       r3, 0x28(r31)
	  lwz       r0, 0x4(r4)
	  stw       r0, 0x54(r3)
	  lwz       r4, 0x2C(r31)
	  lwz       r3, 0x28(r31)
	  lwz       r0, 0x18(r4)
	  stw       r0, 0x58(r3)
	  lwz       r4, 0x28(r31)
	  lbz       r0, 0x34(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x11C
	  lwz       r3, 0x2C(r31)
	  lwz       r0, 0x20(r3)
	  stw       r0, 0x5C(r4)
	  b         .loc_0x134

	.loc_0x11C:
	  lwz       r3, 0x2C(r31)
	  lwz       r0, 0x64(r4)
	  lwz       r3, 0x28(r3)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  stw       r0, 0x5C(r4)

	.loc_0x134:
	  lwz       r3, 0x38(r31)
	  lwz       r3, 0x4(r3)
	  bl        0x23594
	  lwz       r0, 0x24(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x168
	  lwz       r3, 0x28(r31)
	  lwz       r3, 0x4(r3)
	  lwz       r0, 0x28(r3)
	  stw       r0, -0x7640(r13)
	  lwz       r0, 0x24(r31)
	  stw       r0, -0x763C(r13)
	  b         .loc_0x170

	.loc_0x168:
	  li        r0, 0
	  stw       r0, -0x7640(r13)

	.loc_0x170:
	  lwz       r4, 0x20(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x188
	  lwz       r3, 0x0(r4)
	  lwz       r4, 0x8(r4)
	  bl        0x88DAC

	.loc_0x188:
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x19C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80060658
 * Size:	000198
 */
void J3DShapePacket::drawFast()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x10(r3)
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x184
	  lwz       r0, 0x28(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x184
	  lwz       r3, 0x38(r31)
	  addi      r3, r3, 0x88
	  bl        -0x19B0
	  lis       r3, 0x8051
	  lwz       r4, 0x38(r31)
	  subi      r3, r3, 0xDD0
	  stw       r4, 0x38(r3)
	  stw       r31, 0x40(r3)
	  lwz       r0, 0x8(r4)
	  rlwinm    r0,r0,28,31,31
	  stb       r0, -0x764F(r13)
	  lwz       r3, 0x38(r31)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x7C
	  lwz       r3, 0x28(r31)
	  lwz       r0, 0xC(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0xC(r3)
	  b         .loc_0x8C

	.loc_0x7C:
	  lwz       r3, 0x28(r31)
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0xC(r3)

	.loc_0x8C:
	  lwz       r3, 0x38(r31)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0xBC
	  lwz       r3, 0x28(r31)
	  lwz       r0, 0xC(r3)
	  rlwinm.   r0,r0,24,31,31
	  bne-      .loc_0xBC
	  lwz       r0, 0xC(r3)
	  ori       r0, r0, 0x8
	  stw       r0, 0xC(r3)
	  b         .loc_0xCC

	.loc_0xBC:
	  lwz       r3, 0x28(r31)
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0xC(r3)

	.loc_0xCC:
	  lwz       r4, 0x2C(r31)
	  lwz       r3, 0x28(r31)
	  addi      r0, r4, 0x30
	  stw       r0, 0x60(r3)
	  lwz       r4, 0x2C(r31)
	  lwz       r3, 0x28(r31)
	  lwz       r0, 0x4(r4)
	  stw       r0, 0x54(r3)
	  lwz       r4, 0x2C(r31)
	  lwz       r3, 0x28(r31)
	  lwz       r0, 0x18(r4)
	  stw       r0, 0x58(r3)
	  lwz       r4, 0x28(r31)
	  lbz       r0, 0x34(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x11C
	  lwz       r3, 0x2C(r31)
	  lwz       r0, 0x20(r3)
	  stw       r0, 0x5C(r4)
	  b         .loc_0x134

	.loc_0x11C:
	  lwz       r3, 0x2C(r31)
	  lwz       r0, 0x64(r4)
	  lwz       r3, 0x28(r3)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  stw       r0, 0x5C(r4)

	.loc_0x134:
	  lwz       r3, 0x38(r31)
	  lwz       r3, 0x4(r3)
	  bl        0x233E4
	  lwz       r0, 0x24(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x168
	  lwz       r3, 0x28(r31)
	  lwz       r3, 0x4(r3)
	  lwz       r0, 0x28(r3)
	  stw       r0, -0x7640(r13)
	  lwz       r0, 0x24(r31)
	  stw       r0, -0x763C(r13)
	  b         .loc_0x170

	.loc_0x168:
	  li        r0, 0
	  stw       r0, -0x7640(r13)

	.loc_0x170:
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x184:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800607F0
 * Size:	000060
 */
void J3DMatPacket::entry(J3DDrawBuffer*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r6, r3
	  lis       r3, 0x804A
	  stw       r0, 0x24(r1)
	  addi      r0, r3, 0x1978
	  mr        r3, r4
	  addi      r12, r1, 0x8
	  lwz       r5, 0xC(r4)
	  mr        r4, r6
	  mulli     r5, r5, 0xC
	  add       r7, r0, r5
	  lwz       r6, 0x0(r7)
	  lwz       r5, 0x4(r7)
	  lwz       r0, 0x8(r7)
	  stw       r6, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        0x612EC
	  nop
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
