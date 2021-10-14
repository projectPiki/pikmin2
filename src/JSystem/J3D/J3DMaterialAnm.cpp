

/*
 * --INFO--
 * Address:	8006A0F4
 * Size:	000070
 */
void J3DMaterialAnm::initialize()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  sth       r0, 0x6(r3)
	  sth       r0, 0xE(r3)
	  sth       r0, 0x5A(r3)
	  sth       r0, 0x66(r3)
	  sth       r0, 0x72(r3)
	  sth       r0, 0x7E(r3)
	  sth       r0, 0x8A(r3)
	  sth       r0, 0x96(r3)
	  sth       r0, 0xA2(r3)
	  sth       r0, 0xAE(r3)
	  sth       r0, 0xB6(r3)
	  sth       r0, 0xBE(r3)
	  sth       r0, 0xC6(r3)
	  sth       r0, 0xCE(r3)
	  sth       r0, 0xD6(r3)
	  sth       r0, 0xDE(r3)
	  sth       r0, 0xE6(r3)
	  sth       r0, 0xEE(r3)
	  sth       r0, 0x16(r3)
	  sth       r0, 0x1E(r3)
	  sth       r0, 0x26(r3)
	  sth       r0, 0x2E(r3)
	  sth       r0, 0x36(r3)
	  sth       r0, 0x3E(r3)
	  sth       r0, 0x46(r3)
	  sth       r0, 0x4E(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006A164
 * Size:	0001EC
 */
void J3DMaterialAnm::calc(J3DMaterial*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r30
	  stw       r28, 0x10(r1)
	  li        r28, 0

	.loc_0x2C:
	  lhz       r0, 0x6(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lwz       r3, 0x24(r31)
	  mr        r4, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  lwz       r3, 0x8(r29)
	  mr        r5, r0
	  lhz       r4, 0x4(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x8
	  cmplwi    r28, 0x2
	  blt+      .loc_0x2C
	  li        r28, 0
	  mr        r29, r30

	.loc_0x88:
	  lhz       r0, 0x5A(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  addi      r3, r29, 0x54
	  addi      r4, r1, 0x8
	  lwz       r12, 0x54(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r31)
	  mr        r4, r28
	  lhz       r5, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0xC
	  cmplwi    r28, 0x8
	  blt+      .loc_0x88
	  li        r28, 0
	  mr        r29, r30

	.loc_0xE0:
	  lhz       r0, 0xB6(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x118
	  lwz       r3, 0x2C(r31)
	  mr        r4, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  lwz       r3, 0xB8(r29)
	  lhz       r4, 0xB4(r29)
	  mr        r5, r0
	  bl        -0x1134

	.loc_0x118:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x8
	  cmplwi    r28, 0x3
	  blt+      .loc_0xE0
	  li        r28, 0
	  mr        r29, r30

	.loc_0x130:
	  lhz       r0, 0xD6(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x168
	  lwz       r3, 0x2C(r31)
	  mr        r4, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  lwz       r3, 0xD8(r29)
	  lhz       r4, 0xD4(r29)
	  mr        r5, r0
	  bl        -0xEB8

	.loc_0x168:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x8
	  cmplwi    r28, 0x4
	  blt+      .loc_0x130
	  li        r28, 0
	  mr        r29, r30

	.loc_0x180:
	  lhz       r0, 0x16(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x1BC
	  lwz       r3, 0x28(r31)
	  mr        r4, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lwz       r6, 0x18(r29)
	  addi      r5, r3, 0x10
	  lhz       r4, 0x14(r29)
	  lfs       f1, 0x8(r6)
	  mr        r3, r6
	  bl        -0x2080

	.loc_0x1BC:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x8
	  cmplwi    r28, 0x8
	  blt+      .loc_0x180
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
 * Address:	8006A350
 * Size:	000008
 */
void J3DTevBlock::getTevKColor(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006A358
 * Size:	000008
 */
void J3DTevBlock::getTevColor(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006A360
 * Size:	000004
 */
void J3DTevBlock::setTexNo(unsigned long, unsigned short)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006A364
 * Size:	000030
 */
void J3DTexNoAnm::calc(unsigned short*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lhz       r4, 0x4(r6)
	  bl        -0x1414
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006A394
 * Size:	0000D0
 */
void J3DMaterialAnm::~J3DMaterialAnm()
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
	  beq-      .loc_0xB4
	  lis       r3, 0x804A
	  lis       r4, 0x8007
	  addi      r0, r3, 0x1B10
	  li        r5, 0x8
	  stw       r0, 0x0(r30)
	  addi      r3, r30, 0xD4
	  subi      r4, r4, 0x5AA0
	  li        r6, 0x4
	  bl        0x573F0
	  lis       r4, 0x8007
	  addi      r3, r30, 0xB4
	  subi      r4, r4, 0x5ADC
	  li        r5, 0x8
	  li        r6, 0x4
	  bl        0x573D8
	  lis       r4, 0x8007
	  addi      r3, r30, 0x54
	  subi      r4, r4, 0x5B24
	  li        r5, 0xC
	  li        r6, 0x8
	  bl        0x573C0
	  lis       r4, 0x8007
	  addi      r3, r30, 0x14
	  subi      r4, r4, 0x5B60
	  li        r5, 0x8
	  li        r6, 0x8
	  bl        0x573A8
	  lis       r4, 0x8007
	  addi      r3, r30, 0x4
	  subi      r4, r4, 0x5B9C
	  li        r5, 0x8
	  li        r6, 0x2
	  bl        0x57390
	  extsh.    r0, r31
	  ble-      .loc_0xB4
	  mr        r3, r30
	  bl        -0x46390

	.loc_0xB4:
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
 * Address:	8006A464
 * Size:	00003C
 */
void J3DMatColorAnm::~J3DMatColorAnm()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x24
	  extsh.    r0, r4
	  ble-      .loc_0x24
	  bl        -0x463D0

	.loc_0x24:
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
 * Address:	8006A4A0
 * Size:	00003C
 */
void J3DTexMtxAnm::~J3DTexMtxAnm()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x24
	  extsh.    r0, r4
	  ble-      .loc_0x24
	  bl        -0x4640C

	.loc_0x24:
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
 * Address:	8006A4DC
 * Size:	000048
 */
void J3DTexNoAnm::~J3DTexNoAnm()
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
	  addi      r0, r5, 0x1B20
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x46454

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
 * Address:	8006A524
 * Size:	00003C
 */
void J3DTevColorAnm::~J3DTevColorAnm()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x24
	  extsh.    r0, r4
	  ble-      .loc_0x24
	  bl        -0x46490

	.loc_0x24:
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
 * Address:	8006A560
 * Size:	00003C
 */
void J3DTevKColorAnm::~J3DTevKColorAnm()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x24
	  extsh.    r0, r4
	  ble-      .loc_0x24
	  bl        -0x464CC

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
