

/*
 * --INFO--
 * Address:	80083794
 * Size:	000018
 */
void J3DModelData::clear()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  sth       r0, 0xC(r3)
	  sth       r0, 0xE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800837AC
 * Size:	000080
 */
void J3DModelData::J3DModelData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x2C7C
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x0(r3)
	  addi      r3, r31, 0x10
	  bl        0x4ABC
	  addi      r3, r31, 0x58
	  bl        0x49C
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r4, r3, 0x2C70
	  addi      r3, r31, 0x88
	  stw       r4, 0x78(r31)
	  sth       r0, 0x7C(r31)
	  stw       r0, 0x80(r31)
	  stw       r0, 0x84(r31)
	  bl        -0x24C7C
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x4(r31)
	  stw       r0, 0x8(r31)
	  sth       r0, 0xC(r31)
	  sth       r0, 0xE(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008382C
 * Size:	000048
 */
void J3DShapeTable::~J3DShapeTable()
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
	  addi      r0, r5, 0x2C70
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x5F7A4

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
 * Address:	80083874
 * Size:	000064
 */
void J3DJointTree::~J3DJointTree()
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
	  beq-      .loc_0x48
	  lis       r4, 0x804A
	  addi      r3, r30, 0x34
	  addi      r0, r4, 0x2FBC
	  li        r4, -0x1
	  stw       r0, 0x0(r30)
	  bl        -0x24A6C
	  extsh.    r0, r31
	  ble-      .loc_0x48
	  mr        r3, r30
	  bl        -0x5F804

	.loc_0x48:
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
 * Address:	800838D8
 * Size:	000094
 */
void J3DModelData::newSharedDisplayList(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  rlwinm    r30,r4,0,13,13
	  li        r28, 0
	  lhz       r31, 0x5C(r3)
	  b         .loc_0x74

	.loc_0x24:
	  cmplwi    r30, 0
	  beq-      .loc_0x50
	  lwz       r3, 0x60(r27)
	  rlwinm    r0,r28,2,14,29
	  lwzx      r29, r3, r0
	  mr        r3, r29
	  bl        -0x2112C
	  mr        r4, r3
	  mr        r3, r29
	  bl        -0x201D4
	  b         .loc_0x70

	.loc_0x50:
	  lwz       r3, 0x60(r27)
	  rlwinm    r0,r28,2,14,29
	  lwzx      r29, r3, r0
	  mr        r3, r29
	  bl        -0x21150
	  mr        r4, r3
	  mr        r3, r29
	  bl        -0x2028C

	.loc_0x70:
	  addi      r28, r28, 0x1

	.loc_0x74:
	  rlwinm    r0,r28,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x24
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008396C
 * Size:	0000C4
 */
void J3DModelData::indexToPtr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r27, r3
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  lbz       r0, -0x765C(r13)
	  lwz       r4, 0x6C(r27)
	  extsb.    r0, r0
	  stw       r4, 0x58(r3)
	  bne-      .loc_0x40
	  bl        0x6B29C
	  li        r0, 0x1
	  stw       r3, -0x7660(r13)
	  stb       r0, -0x765C(r13)

	.loc_0x40:
	  bl        0x6E058
	  lhz       r30, 0x5C(r27)
	  addi      r31, r1, 0x8
	  li        r28, 0
	  b         .loc_0x90

	.loc_0x54:
	  lwz       r4, 0x60(r27)
	  rlwinm    r0,r28,2,14,29
	  addi      r3, r1, 0x8
	  lwzx      r29, r4, r0
	  lwz       r5, 0x48(r29)
	  lwz       r4, 0x0(r5)
	  lwz       r5, 0x8(r5)
	  bl        0x5E128
	  stw       r31, -0x7158(r13)
	  lwz       r3, 0x2C(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1

	.loc_0x90:
	  rlwinm    r0,r28,0,16,31
	  cmplw     r0, r30
	  blt+      .loc_0x54
	  li        r0, 0
	  stw       r0, -0x7158(r13)
	  bl        0x6E034
	  lwz       r3, -0x7660(r13)
	  bl        0x6B248
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083A30
 * Size:	000080
 */
void J3DModelData::makeSharedDL()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lis       r3, 0x8051
	  lwz       r0, 0x6C(r29)
	  subi      r3, r3, 0xDD0
	  stw       r0, 0x58(r3)
	  lhz       r31, 0x5C(r29)
	  b         .loc_0x58

	.loc_0x38:
	  lwz       r3, 0x60(r29)
	  rlwinm    r0,r30,2,14,29
	  lwzx      r3, r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1

	.loc_0x58:
	  rlwinm    r0,r30,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x38
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
 * Address:	80083AB0
 * Size:	0000C8
 */
void J3DModelData::simpleCalcMaterial(unsigned short, float (*)[4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  bl        .loc_0xC8
	  lwz       r3, 0x28(r31)
	  rlwinm    r0,r30,2,14,29
	  lis       r31, 0xC000
	  lwzx      r3, r3, r0
	  lwz       r30, 0x58(r3)
	  b         .loc_0xA4

	.loc_0x40:
	  lwz       r3, 0x3C(r30)
	  cmplw     r3, r31
	  bge-      .loc_0x54
	  mr        r0, r3
	  b         .loc_0x58

	.loc_0x54:
	  li        r0, 0

	.loc_0x58:
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  lis       r0, 0xC000
	  cmplw     r3, r0
	  bge-      .loc_0x70
	  b         .loc_0x74

	.loc_0x70:
	  li        r3, 0

	.loc_0x74:
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r30, 0x4(r30)

	.loc_0xA4:
	  cmplwi    r30, 0
	  bne+      .loc_0x40
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xC8:
	*/
}

/*
 * --INFO--
 * Address:	80083B78
 * Size:	00003C
 */
void J3DModelData::syncJ3DSysFlags() const
{
	/*
	.loc_0x0:
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x24
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  lwz       r0, 0x34(r3)
	  oris      r0, r0, 0x4000
	  stw       r0, 0x34(r3)
	  blr

	.loc_0x24:
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  lwz       r0, 0x34(r3)
	  rlwinm    r0,r0,0,2,0
	  stw       r0, 0x34(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083BB4
 * Size:	000098
 */
void J3DModelData::~J3DModelData()
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
	  beq-      .loc_0x7C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x78
	  addi      r0, r3, 0x2C7C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x40
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2C70
	  stw       r0, 0x78(r30)

	.loc_0x40:
	  addi      r3, r30, 0x58
	  li        r4, -0x1
	  bl        0xAC
	  addic.    r0, r30, 0x10
	  beq-      .loc_0x6C
	  lis       r4, 0x804A
	  addi      r3, r30, 0x44
	  addi      r0, r4, 0x2FBC
	  li        r4, -0x1
	  stw       r0, 0x10(r30)
	  bl        -0x24DE0

	.loc_0x6C:
	  extsh.    r0, r31
	  ble-      .loc_0x7C
	  mr        r3, r30
	  bl        -0x5FB78

	.loc_0x7C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
