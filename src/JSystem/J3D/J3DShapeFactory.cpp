

/*
 * --INFO--
 * Address:	80071D10
 * Size:	0000B0
 */
void J3DShapeFactory::J3DShapeFactory(const J3DShapeBlock&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r4, 0xC(r4)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x244
	  stw       r3, 0x0(r30)
	  mr        r3, r31
	  lwz       r4, 0x10(r31)
	  bl        -0x23C
	  stw       r3, 0x4(r30)
	  mr        r3, r31
	  lwz       r4, 0x18(r31)
	  bl        0x834
	  stw       r3, 0x8(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        -0x25C
	  stw       r3, 0xC(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        0x7FC
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        0x7D4
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        0x7AC
	  stw       r3, 0x18(r30)
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x1C(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80071DC0
 * Size:	0001B4
 */
void J3DShapeFactory::create(int, unsigned long, _GXVtxDescList*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r27, r5
	  li        r3, 0x68
	  bl        -0x4DF3C
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r4, 0x804A
	  lis       r5, 0x3CF4
	  addi      r0, r4, 0x1560
	  lis       r4, 0xF4
	  stw       r0, 0x0(r31)
	  subi      r5, r5, 0x3100
	  subi      r0, r4, 0x30C4
	  stw       r5, 0x40(r31)
	  stw       r0, 0x44(r31)
	  bl        -0x115C0

	.loc_0x54:
	  lwz       r3, 0x4(r25)
	  rlwinm    r29,r26,1,0,30
	  lwz       r4, 0x0(r25)
	  lhzx      r0, r3, r29
	  mulli     r0, r0, 0x28
	  add       r3, r4, r0
	  lhz       r0, 0x2(r3)
	  sth       r0, 0xA(r31)
	  lwz       r3, 0x4(r25)
	  lwz       r4, 0x0(r25)
	  lhzx      r0, r3, r29
	  mulli     r0, r0, 0x28
	  add       r3, r4, r0
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x10(r31)
	  lwz       r3, 0x4(r25)
	  lwz       r4, 0x0(r25)
	  lhzx      r0, r3, r29
	  lwz       r5, 0x8(r25)
	  mulli     r0, r0, 0x28
	  add       r3, r4, r0
	  lhz       r0, 0x4(r3)
	  add       r0, r5, r0
	  stw       r0, 0x30(r31)
	  lhz       r0, 0xA(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4DED0
	  stw       r3, 0x38(r31)
	  lhz       r0, 0xA(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4DEE0
	  stw       r3, 0x3C(r31)
	  mulli     r0, r26, 0xC0
	  li        r28, 0
	  lwz       r3, 0x4(r25)
	  li        r30, 0
	  lwz       r4, 0x0(r25)
	  lhzx      r3, r3, r29
	  mulli     r3, r3, 0x28
	  addi      r3, r3, 0x10
	  add       r3, r4, r3
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x14(r31)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x18(r31)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x1C(r31)
	  lwz       r3, 0x4(r25)
	  lwz       r4, 0x0(r25)
	  lhzx      r3, r3, r29
	  mulli     r3, r3, 0x28
	  addi      r3, r3, 0x1C
	  add       r3, r4, r3
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x20(r31)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x24(r31)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x28(r31)
	  lwz       r3, 0x1C(r25)
	  add       r0, r3, r0
	  stw       r0, 0x2C(r31)
	  b         .loc_0x18C

	.loc_0x150:
	  mr        r3, r25
	  mr        r4, r27
	  mr        r5, r26
	  mr        r6, r28
	  bl        .loc_0x1B4
	  lwz       r6, 0x38(r31)
	  mr        r4, r26
	  mr        r5, r28
	  stwx      r3, r6, r30
	  mr        r3, r25
	  bl        0x32C
	  lwz       r4, 0x3C(r31)
	  addi      r28, r28, 0x1
	  stwx      r3, r4, r30
	  addi      r30, r30, 0x4

	.loc_0x18C:
	  lhz       r0, 0xA(r31)
	  cmpw      r28, r0
	  blt+      .loc_0x150
	  sth       r26, 0x8(r31)
	  mr        r3, r31
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x1B4:
	*/
}

/*
 * --INFO--
 * Address:	80071F74
 * Size:	00024C
 */
void J3DShapeFactory::newShapeMtx(unsigned long, int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,0,27,27
	  lwz       r4, 0x4(r3)
	  cmpwi     r0, 0x10
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  rlwinm    r3,r5,1,0,30
	  lwz       r7, 0x0(r30)
	  lhzx      r5, r4, r3
	  rlwinm    r4,r6,3,0,28
	  lwz       r6, 0x14(r30)
	  li        r3, 0
	  mulli     r5, r5, 0x28
	  add       r7, r7, r5
	  lhz       r5, 0x6(r7)
	  rlwinm    r5,r5,3,0,28
	  add       r31, r5, r4
	  add       r31, r6, r31
	  beq-      .loc_0x68
	  bge-      .loc_0x1A4
	  cmpwi     r0, 0
	  beq-      .loc_0x1A4
	  b         .loc_0x1A4

	.loc_0x68:
	  lbz       r0, 0x0(r7)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x108
	  bge-      .loc_0x88
	  cmpwi     r0, 0
	  beq-      .loc_0x94
	  bge-      .loc_0xC8
	  b         .loc_0x234

	.loc_0x88:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x234
	  b         .loc_0x148

	.loc_0x94:
	  li        r3, 0x8
	  bl        -0x4E168
	  cmplwi    r3, 0
	  beq-      .loc_0x234
	  lis       r4, 0x804A
	  lhz       r5, 0x0(r31)
	  addi      r0, r4, 0x2F4C
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x2F24
	  sth       r5, 0x4(r3)
	  stw       r0, 0x0(r3)
	  b         .loc_0x234

	.loc_0xC8:
	  li        r3, 0x8
	  bl        -0x4E19C
	  cmplwi    r3, 0
	  beq-      .loc_0x234
	  lis       r4, 0x804A
	  lhz       r6, 0x0(r31)
	  addi      r0, r4, 0x2F4C
	  lis       r5, 0x804A
	  stw       r0, 0x0(r3)
	  lis       r4, 0x804A
	  addi      r5, r5, 0x2F24
	  sth       r6, 0x4(r3)
	  addi      r0, r4, 0x2EB4
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  b         .loc_0x234

	.loc_0x108:
	  li        r3, 0x8
	  bl        -0x4E1DC
	  cmplwi    r3, 0
	  beq-      .loc_0x234
	  lis       r4, 0x804A
	  lhz       r6, 0x0(r31)
	  addi      r0, r4, 0x2F4C
	  lis       r5, 0x804A
	  stw       r0, 0x0(r3)
	  lis       r4, 0x804A
	  addi      r5, r5, 0x2F24
	  sth       r6, 0x4(r3)
	  addi      r0, r4, 0x2E8C
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  b         .loc_0x234

	.loc_0x148:
	  li        r3, 0x10
	  bl        -0x4E21C
	  cmplwi    r3, 0
	  beq-      .loc_0x234
	  lwz       r6, 0x4(r31)
	  lis       r4, 0x804A
	  lhz       r9, 0x2(r31)
	  addi      r0, r4, 0x2F4C
	  lhz       r8, 0x0(r31)
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  lwz       r7, 0xC(r30)
	  stw       r0, 0x0(r3)
	  rlwinm    r6,r6,1,0,30
	  addi      r5, r5, 0x2F24
	  addi      r0, r4, 0x2EDC
	  sth       r8, 0x4(r3)
	  add       r4, r7, r6
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  sth       r9, 0x8(r3)
	  stw       r4, 0xC(r3)
	  b         .loc_0x234

	.loc_0x1A4:
	  lbz       r0, 0x0(r7)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x1E8
	  bge-      .loc_0x234
	  cmpwi     r0, 0
	  bge-      .loc_0x1C0
	  b         .loc_0x234

	.loc_0x1C0:
	  li        r3, 0x8
	  bl        -0x4E294
	  cmplwi    r3, 0
	  beq-      .loc_0x234
	  lis       r4, 0x804A
	  lhz       r5, 0x0(r31)
	  addi      r0, r4, 0x2F4C
	  stw       r0, 0x0(r3)
	  sth       r5, 0x4(r3)
	  b         .loc_0x234

	.loc_0x1E8:
	  li        r3, 0x10
	  bl        -0x4E2BC
	  cmplwi    r3, 0
	  beq-      .loc_0x234
	  lwz       r6, 0x4(r31)
	  lis       r4, 0x804A
	  lhz       r9, 0x2(r31)
	  addi      r5, r4, 0x2F4C
	  lhz       r8, 0x0(r31)
	  lis       r4, 0x804A
	  addi      r0, r4, 0x2F04
	  lwz       r7, 0xC(r30)
	  stw       r5, 0x0(r3)
	  rlwinm    r4,r6,1,0,30
	  add       r4, r7, r4
	  sth       r8, 0x4(r3)
	  stw       r0, 0x0(r3)
	  sth       r9, 0x8(r3)
	  stw       r4, 0xC(r3)

	.loc_0x234:
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
 * Address:	800721C0
 * Size:	00005C
 */
void J3DShapeMtxConcatView::~J3DShapeMtxConcatView()
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
	  addi      r0, r3, 0x2F24
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2F4C
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x4E14C

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
 * Address:	8007221C
 * Size:	000048
 */
void J3DShapeMtx::~J3DShapeMtx()
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
	  addi      r0, r5, 0x2F4C
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x4E194

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
 * Address:	80072264
 * Size:	00008C
 */
void J3DShapeFactory::newShapeDraw(int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lwz       r6, 0x4(r3)
	  rlwinm    r4,r4,1,0,30
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r5,3,0,28
	  lwz       r5, 0x0(r3)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0xC
	  lhzx      r4, r6, r4
	  lwz       r6, 0x18(r30)
	  mulli     r4, r4, 0x28
	  addi      r4, r4, 0x8
	  lhzx      r4, r5, r4
	  rlwinm    r4,r4,3,0,28
	  add       r31, r4, r0
	  add       r31, r6, r31
	  bl        -0x4E40C
	  mr.       r0, r3
	  beq-      .loc_0x70
	  lwz       r4, 0x10(r30)
	  lwz       r0, 0x4(r31)
	  lwz       r5, 0x0(r31)
	  add       r4, r4, r0
	  bl        0x16580
	  mr        r0, r3

	.loc_0x70:
	  mr        r3, r0
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
 * Address:	800722F0
 * Size:	00010C
 */
void J3DShapeFactory::allocVcdVatCmdBuffer(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  mulli     r30, r4, 0xC0
	  li        r4, 0x20
	  mr        r3, r30
	  bl        -0x4E31C
	  rlwinm    r12,r30,30,2,31
	  stw       r3, 0x1C(r31)
	  cmplwi    r12, 0
	  li        r30, 0
	  ble-      .loc_0xF4
	  cmplwi    r12, 0x8
	  subi      r3, r12, 0x8
	  ble-      .loc_0xCC
	  addi      r0, r3, 0x7
	  li        r11, 0
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmplwi    r3, 0
	  ble-      .loc_0xCC

	.loc_0x60:
	  lwz       r3, 0x1C(r31)
	  li        r10, 0
	  addi      r8, r11, 0x4
	  addi      r7, r11, 0x8
	  stwx      r10, r3, r11
	  addi      r6, r11, 0xC
	  addi      r5, r11, 0x10
	  addi      r4, r11, 0x14
	  lwz       r9, 0x1C(r31)
	  addi      r3, r11, 0x18
	  addi      r0, r11, 0x1C
	  addi      r11, r11, 0x20
	  stwx      r10, r9, r8
	  addi      r30, r30, 0x8
	  lwz       r8, 0x1C(r31)
	  stwx      r10, r8, r7
	  lwz       r7, 0x1C(r31)
	  stwx      r10, r7, r6
	  lwz       r6, 0x1C(r31)
	  stwx      r10, r6, r5
	  lwz       r5, 0x1C(r31)
	  stwx      r10, r5, r4
	  lwz       r4, 0x1C(r31)
	  stwx      r10, r4, r3
	  lwz       r3, 0x1C(r31)
	  stwx      r10, r3, r0
	  bdnz+     .loc_0x60

	.loc_0xCC:
	  sub       r0, r12, r30
	  rlwinm    r5,r30,2,0,29
	  li        r4, 0
	  mtctr     r0
	  cmplw     r30, r12
	  bge-      .loc_0xF4

	.loc_0xE4:
	  lwz       r3, 0x1C(r31)
	  stwx      r4, r3, r5
	  addi      r5, r5, 0x4
	  bdnz+     .loc_0xE4

	.loc_0xF4:
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
 * Address:	800723FC
 * Size:	00008C
 */
void J3DShapeFactory::calcSize(int, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r4,1,0,30
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  li        r29, 0
	  lwz       r3, 0x4(r3)
	  lwz       r4, 0x0(r26)
	  lhzx      r0, r3, r0
	  mulli     r0, r0, 0x28
	  add       r3, r4, r0
	  lhz       r30, 0x2(r3)
	  rlwinm    r3,r30,2,0,29
	  addi      r31, r3, 0x68
	  add       r31, r31, r3
	  b         .loc_0x6C

	.loc_0x4C:
	  mr        r3, r26
	  mr        r4, r28
	  mr        r5, r27
	  mr        r6, r29
	  bl        0x40
	  add       r31, r31, r3
	  addi      r29, r29, 0x1
	  addi      r31, r31, 0xC

	.loc_0x6C:
	  cmplw     r29, r30
	  blt+      .loc_0x4C
	  mr        r3, r31
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80072488
 * Size:	000010
 */
void J3DShapeFactory::calcSizeVcdVatCmdBuffer(unsigned long)
{
	/*
	.loc_0x0:
	  mulli     r3, r4, 0xC0
	  addi      r0, r3, 0x1F
	  rlwinm    r3,r0,0,0,26
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80072498
 * Size:	0000A8
 */
void J3DShapeFactory::calcSizeShapeMtx(unsigned long, int, int) const
{
	/*
	.loc_0x0:
	  lwz       r6, 0x4(r3)
	  rlwinm    r5,r5,1,0,30
	  rlwinm    r0,r4,0,27,27
	  lwz       r7, 0x0(r3)
	  lhzx      r4, r6, r5
	  cmpwi     r0, 0x10
	  li        r3, 0
	  mulli     r4, r4, 0x28
	  beq-      .loc_0x34
	  bge-      .loc_0x80
	  cmpwi     r0, 0
	  beq-      .loc_0x80
	  b         .loc_0x80

	.loc_0x34:
	  lbzx      r0, r7, r4
	  cmpwi     r0, 0x2
	  beq-      .loc_0x70
	  bge-      .loc_0x54
	  cmpwi     r0, 0
	  beq-      .loc_0x60
	  bge-      .loc_0x68
	  blr

	.loc_0x54:
	  cmpwi     r0, 0x4
	  bgelr-
	  b         .loc_0x78

	.loc_0x60:
	  li        r3, 0x8
	  blr

	.loc_0x68:
	  li        r3, 0x8
	  blr

	.loc_0x70:
	  li        r3, 0x8
	  blr

	.loc_0x78:
	  li        r3, 0x10
	  blr

	.loc_0x80:
	  lbzx      r0, r7, r4
	  cmpwi     r0, 0x3
	  beq-      .loc_0xA0
	  bgelr-
	  cmpwi     r0, 0
	  bltlr-
	  li        r3, 0x8
	  blr

	.loc_0xA0:
	  li        r3, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80072540
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DShapeDrawInitData>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80072558
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DShapeMtxInitData>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80072570
 * Size:	000018
 */
void JSUConvertOffsetToPtr<unsigned char>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80072588
 * Size:	000018
 */
void JSUConvertOffsetToPtr<_GXVtxDescList>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}
