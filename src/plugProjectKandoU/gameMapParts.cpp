

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B6468
 * Size:	000024
 */
void getDoor__Q24Game16MapUnitInterfaceFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x118
  stw       r0, 0x14(r1)
  bl        0x25B224
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801B648C
 * Size:	00001C
 */
void getCellSize__Q24Game16MapUnitInterfaceFRiRi(void)
{
/*
.loc_0x0:
  lwz       r6, 0x18(r3)
  lhz       r0, 0x94(r6)
  stw       r0, 0x0(r4)
  lwz       r3, 0x18(r3)
  lhz       r0, 0x96(r3)
  stw       r0, 0x0(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	801B64A8
 * Size:	000024
 */
void getLink__Q24Game4DoorFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x20
  stw       r0, 0x14(r1)
  bl        0x25B1E4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void write__Q24Game8DoorLinkFR6Stream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void read__Q24Game8DoorLinkFR6Stream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void write__Q24Game4DoorFR6Stream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B64CC
 * Size:	000104
 */
void read__Q24Game4DoorFR6Stream(void)
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
  mr        r3, r29
  bl        0x25E59C
  stw       r3, 0x18(r28)
  mr        r3, r29
  bl        0x25E590
  stw       r3, 0x44(r28)
  mr        r3, r29
  bl        0x25E584
  stw       r3, 0x48(r28)
  mr        r3, r29
  bl        0x25E578
  stw       r3, 0x4C(r28)
  mr        r3, r29
  bl        0x25E56C
  stw       r3, 0x1C(r28)
  li        r30, 0
  b         .loc_0xD8

.loc_0x68:
  li        r3, 0x24
  bl        -0x192694
  mr.       r31, r3
  beq-      .loc_0x98
  bl        0x25AE4C
  lis       r3, 0x804B
  lfs       f0, -0x4F20(r2)
  addi      r3, r3, 0x60D4
  li        r0, 0x1
  stw       r3, 0x0(r31)
  stfs      f0, 0x18(r31)
  stb       r0, 0x20(r31)

.loc_0x98:
  mr        r3, r29
  bl        0x25E844
  stfs      f1, 0x18(r31)
  mr        r3, r29
  bl        0x25E51C
  stw       r3, 0x1C(r31)
  mr        r3, r29
  bl        0x25E510
  neg       r0, r3
  mr        r4, r31
  or        r0, r0, r3
  addi      r3, r28, 0x20
  rlwinm    r0,r0,1,31,31
  stb       r0, 0x20(r31)
  bl        0x25AE6C
  addi      r30, r30, 0x1

.loc_0xD8:
  lwz       r0, 0x1C(r28)
  cmpw      r30, r0
  blt+      .loc_0x68
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
 * Address:	801B65D0
 * Size:	0000AC
 */
void __ct__Q24Game7MapUnitFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x14(r1)
  addi      r0, r4, 0x60B0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  addi      r31, r30, 0x10
  stw       r0, 0x0(r3)
  mr        r3, r31
  bl        0x25AD94
  lis       r4, 0x804F
  addi      r3, r30, 0x34
  subi      r0, r4, 0x4908
  stw       r0, 0x0(r31)
  bl        -0x72C0
  lfs       f1, -0x4F1C(r2)
  addi      r3, r30, 0xAC
  lfs       f0, -0x4F18(r2)
  stfs      f1, 0x7C(r30)
  stfs      f1, 0x80(r30)
  stfs      f1, 0x84(r30)
  stfs      f0, 0x88(r30)
  stfs      f0, 0x8C(r30)
  stfs      f0, 0x90(r30)
  bl        -0x420A8
  li        r4, 0
  li        r0, -0x1
  stw       r4, 0xC(r30)
  mr        r3, r30
  sth       r0, 0x4(r30)
  stb       r4, 0xA8(r30)
  sth       r4, 0x96(r30)
  sth       r4, 0x94(r30)
  stw       r4, 0x2C(r30)
  stw       r4, 0x30(r30)
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
 * Address:	........
 * Size:	0000CC
 */
void setupSizeInfo__Q24Game7MapUnitFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B667C
 * Size:	000030
 */
void MapCollision::getBoundBox(BoundBox &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x18(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void save__Q24Game7MapUnitFR6Stream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B66AC
 * Size:	00004C
 */
void load__Q24Game7MapUnitFR6Stream(void)
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
  mr        r3, r31
  bl        0x25E098
  sth       r3, 0x94(r30)
  mr        r3, r31
  bl        0x25E08C
  sth       r3, 0x96(r30)
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
 * Address:	........
 * Size:	0000B8
 */
void __ct__Q24Game10MapUnitMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B66F8
 * Size:	0000C8
 */
void NodeObjectMgr<Game::MapUnit>::~NodeObjectMgr()
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
  beq-      .loc_0xAC
  lis       r3, 0x804B
  addic.    r0, r30, 0x20
  addi      r3, r3, 0x5F88
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x54
  lis       r4, 0x804B
  addi      r3, r30, 0x20
  addi      r0, r4, 0x5F78
  li        r4, 0
  stw       r0, 0x20(r30)
  bl        0x25AE40

.loc_0x54:
  cmplwi    r30, 0
  beq-      .loc_0x9C
  lis       r3, 0x804B
  addi      r3, r3, 0x6008
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804B
  addi      r0, r3, 0x6084
  stw       r0, 0x0(r30)
  beq-      .loc_0x9C
  lis       r4, 0x804B
  mr        r3, r30
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        0x25ADF8

.loc_0x9C:
  extsh.    r0, r31
  ble-      .loc_0xAC
  mr        r3, r30
  bl        -0x1926EC

.loc_0xAC:
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
 * Address:	801B67C0
 * Size:	000060
 */
void TObjectNode<Game::MapUnit>::~TObjectNode()
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
  lis       r5, 0x804B
  li        r4, 0
  addi      r0, r5, 0x5F78
  stw       r0, 0x0(r30)
  bl        0x25AD98
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x19274C

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
 * Address:	801B6820
 * Size:	000088
 */
void ObjectMgr<Game::MapUnit>::~ObjectMgr()
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
  beq-      .loc_0x6C
  lis       r4, 0x804B
  addi      r4, r4, 0x6008
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x5C
  lis       r4, 0x804B
  addi      r0, r4, 0x6084
  stw       r0, 0x0(r30)
  beq-      .loc_0x5C
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x25AD10

.loc_0x5C:
  extsh.    r0, r31
  ble-      .loc_0x6C
  mr        r3, r30
  bl        -0x1927D4

.loc_0x6C:
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
 * Address:	801B68A8
 * Size:	000070
 */
void Container<Game::MapUnit>::~Container()
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
  beq-      .loc_0x54
  lis       r4, 0x804B
  addi      r0, r4, 0x6084
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x25ACA0

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x192844

.loc_0x54:
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
 * Address:	801B6918
 * Size:	000088
 */
void getAt__Q24Game10MapUnitMgrFi(void)
{
/*
.loc_0x0:
  cmpwi     r4, 0
  lwz       r5, 0x30(r3)
  li        r6, 0
  ble-      .loc_0x70
  cmpwi     r4, 0x8
  subi      r3, r4, 0x8
  ble-      .loc_0x58
  addi      r0, r3, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r3, 0
  ble-      .loc_0x58

.loc_0x30:
  lwz       r3, 0x4(r5)
  addi      r6, r6, 0x8
  lwz       r3, 0x4(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x4(r3)
  lwz       r5, 0x4(r3)
  bdnz+     .loc_0x30

.loc_0x58:
  sub       r0, r4, r6
  mtctr     r0
  cmpw      r6, r4
  bge-      .loc_0x70

.loc_0x68:
  lwz       r5, 0x4(r5)
  bdnz+     .loc_0x68

.loc_0x70:
  cmplwi    r5, 0
  beq-      .loc_0x80
  lwz       r3, 0x18(r5)
  blr       

.loc_0x80:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00020C
 */
void findMapUnit__Q24Game10MapUnitMgrFPc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B69A0
 * Size:	00004C
 */
void Iterator<Game::MapUnit>::isDone()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x4(r31)
  sub       r0, r3, r0
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void testConstruct__Q24Game10MapUnitMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void loadShape__Q24Game10MapUnitMgrFPc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B69EC
 * Size:	000440
 */
void makeUnit__Q24Game10MapUnitMgrFPQ24Game7MapUnitPc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x12B0(r1)
  mflr      r0
  lis       r3, 0x8048
  stw       r0, 0x12B4(r1)
  stmw      r25, 0x1294(r1)
  subi      r30, r3, 0x390
  mr        r31, r4
  mr        r27, r5
  addi      r3, r1, 0x8
  addi      r4, r30, 0xBC
  crclr     6, 0x6
  bl        -0xEF5E0
  addi      r3, r1, 0x8
  li        r4, 0x1
  li        r5, 0
  li        r6, 0x1
  bl        -0x19B8FC
  mr.       r29, r3
  bne-      .loc_0x60
  addi      r3, r30, 0x84
  addi      r5, r30, 0xC8
  li        r4, 0x28B
  crclr     6, 0x6
  bl        -0x18C408

.loc_0x60:
  mr        r3, r29
  addi      r4, r30, 0xD4
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr.       r26, r3
  bne-      .loc_0x94
  addi      r3, r30, 0x84
  addi      r5, r30, 0xC8
  li        r4, 0x291
  crclr     6, 0x6
  bl        -0x18C43C

.loc_0x94:
  mr        r3, r26
  lis       r4, 0x2000
  bl        -0x1471F4
  stw       r3, 0xC(r31)
  lis       r4, 0x4
  lwz       r3, 0xC(r31)
  bl        -0x1331C0
  lwz       r3, 0xC(r31)
  bl        -0x133070
  mr        r3, r29
  addi      r4, r30, 0xE0
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0xE4
  stw       r3, 0x30(r31)
  li        r0, 0
  stw       r0, 0x2C(r31)

.loc_0xE4:
  lwz       r3, 0xC(r31)
  li        r4, 0
  bl        0x2877C4
  li        r0, 0
  li        r28, 0
  stw       r0, 0xE8(r31)
  li        r26, 0

.loc_0x100:
  mr        r5, r27
  addi      r3, r1, 0x8
  addi      r4, r30, 0xEC
  addi      r6, r26, 0x1
  crclr     6, 0x6
  bl        -0xEF6C8
  addi      r3, r1, 0x8
  bl        -0xEC1F8
  addi      r4, r1, 0x8
  add       r4, r4, r3
  mtctr     r3
  cmpwi     r3, 0
  ble-      .loc_0x154

.loc_0x134:
  lbz       r0, 0x0(r4)
  cmpwi     r0, 0x2F
  bne-      .loc_0x148
  addi      r4, r4, 0x1
  b         .loc_0x154

.loc_0x148:
  subi      r4, r4, 0x1
  subi      r3, r3, 0x1
  bdnz+     .loc_0x134

.loc_0x154:
  lwz       r12, 0x0(r29)
  mr        r3, r29
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x180
  addi      r26, r26, 0x1
  addi      r28, r28, 0x1
  cmpwi     r26, 0x64
  blt+      .loc_0x100

.loc_0x180:
  cmpwi     r28, 0
  ble-      .loc_0x24C
  rlwinm    r3,r28,4,0,27
  stw       r28, 0xE8(r31)
  addi      r3, r3, 0x10
  bl        -0x192BD4
  lis       r4, 0x8043
  mr        r7, r28
  addi      r4, r4, 0x4134
  li        r5, 0
  li        r6, 0x10
  bl        -0xF51A8
  stw       r3, 0xEC(r31)
  li        r25, 0
  li        r26, 0
  b         .loc_0x244

.loc_0x1C0:
  mr        r5, r27
  addi      r3, r1, 0x8
  addi      r4, r30, 0xEC
  addi      r6, r25, 0x1
  crclr     6, 0x6
  bl        -0xEF788
  addi      r3, r1, 0x8
  bl        -0xEC2B8
  addi      r4, r1, 0x8
  add       r4, r4, r3
  mtctr     r3
  cmpwi     r3, 0
  ble-      .loc_0x214

.loc_0x1F4:
  lbz       r0, 0x0(r4)
  cmpwi     r0, 0x2F
  bne-      .loc_0x208
  addi      r4, r4, 0x1
  b         .loc_0x214

.loc_0x208:
  subi      r4, r4, 0x1
  subi      r3, r3, 0x1
  bdnz+     .loc_0x1F4

.loc_0x214:
  lwz       r12, 0x0(r29)
  mr        r3, r29
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xEC(r31)
  mr        r4, r3
  lwz       r5, 0xC(r31)
  add       r3, r0, r26
  bl        0x27D3FC
  addi      r26, r26, 0x10
  addi      r25, r25, 0x1

.loc_0x244:
  cmpw      r25, r28
  blt+      .loc_0x1C0

.loc_0x24C:
  mr        r5, r27
  addi      r3, r1, 0x8
  addi      r4, r30, 0xF8
  crclr     6, 0x6
  bl        -0xEF810
  lwz       r5, -0x77D4(r13)
  addi      r3, r1, 0x8
  li        r4, 0x1
  li        r6, 0x2
  bl        -0x19BB2C
  mr.       r29, r3
  bne-      .loc_0x290
  addi      r3, r30, 0x84
  addi      r5, r30, 0xC8
  li        r4, 0x309
  crclr     6, 0x6
  bl        -0x18C638

.loc_0x290:
  mr        r3, r29
  addi      r4, r30, 0x108
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr.       r25, r3
  beq-      .loc_0x2F8
  mr        r4, r25
  addi      r3, r1, 0xE68
  li        r5, -0x1
  bl        0x25EC50
  addi      r3, r31, 0x10
  addi      r4, r1, 0xE68
  bl        0x2633AC
  mr        r3, r25
  bl        -0x192BE4
  addi      r3, r31, 0x10
  addi      r4, r31, 0x7C
  lwz       r12, 0x10(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xA8(r31)
  b         .loc_0x300

.loc_0x2F8:
  li        r0, 0
  stb       r0, 0xA8(r31)

.loc_0x300:
  mr        r3, r29
  addi      r4, r30, 0x114
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr.       r25, r3
  beq-      .loc_0x364
  li        r3, 0x28
  bl        -0x192E6C
  mr.       r27, r3
  beq-      .loc_0x338
  bl        0x265760
  mr        r27, r3

.loc_0x338:
  mr        r4, r25
  addi      r3, r1, 0xA48
  li        r5, -0x1
  bl        0x25EBC8
  mr        r3, r27
  addi      r4, r1, 0xA48
  bl        0x265A24
  lwz       r4, 0x28(r31)
  mr        r3, r27
  lwz       r4, 0x1C(r4)
  bl        0x265B30

.loc_0x364:
  mr        r3, r29
  addi      r4, r30, 0x120
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x3B8
  mr        r4, r3
  addi      r3, r1, 0x628
  li        r5, -0x1
  bl        0x25EB7C
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x634(r1)
  bne-      .loc_0x3AC
  li        r0, 0
  stw       r0, 0xA3C(r1)

.loc_0x3AC:
  addi      r3, r31, 0x34
  addi      r4, r1, 0x628
  bl        -0x7104

.loc_0x3B8:
  mr        r3, r29
  addi      r4, r30, 0x130
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x418
  mr        r4, r3
  addi      r3, r1, 0x208
  li        r5, -0x1
  bl        0x25EB28
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x214(r1)
  bne-      .loc_0x400
  li        r0, 0
  stw       r0, 0x61C(r1)

.loc_0x400:
  addi      r3, r31, 0xAC
  addi      r4, r1, 0x208
  lwz       r12, 0xAC(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     

.loc_0x418:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lmw       r25, 0x1294(r1)
  lwz       r0, 0x12B4(r1)
  mtlr      r0
  addi      r1, r1, 0x12B0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void load__Q24Game10MapUnitMgrFPc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B6E2C
 * Size:	0000DC
 */
void __ct__Q24Game7MapRoomFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x14(r1)
  addi      r0, r4, 0x2A4
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r0, 0x0(r3)
  addi      r3, r31, 0x4
  bl        0x85928
  lis       r3, 0x804B
  lis       r4, 0x8014
  addi      r0, r3, 0x278
  li        r5, 0
  stw       r0, 0x0(r31)
  addi      r3, r31, 0x54
  subi      r4, r4, 0x5050
  li        r6, 0x14
  li        r7, 0x4
  bl        -0xF563C
  addi      r3, r31, 0xA8
  bl        -0x60068
  li        r0, 0x1
  lis       r3, 0x804B
  stb       r0, 0x64(r31)
  li        r4, 0
  addi      r0, r3, 0x5E74
  addi      r3, r31, 0xD8
  stb       r4, 0x78(r31)
  stb       r4, 0x8C(r31)
  stb       r4, 0xA0(r31)
  stw       r31, 0x60(r31)
  stw       r31, 0x74(r31)
  stw       r31, 0x88(r31)
  stw       r31, 0x9C(r31)
  stw       r4, 0xA4(r31)
  stw       r0, 0x0(r31)
  stb       r4, 0x188(r31)
  stb       r4, 0x189(r31)
  stw       r4, 0x13C(r31)
  stw       r4, 0x138(r31)
  bl        -0xCCC30
  li        r3, -0x1
  li        r0, 0
  sth       r3, 0x184(r31)
  mr        r3, r31
  stw       r0, 0x180(r31)
  stw       r0, 0x18C(r31)
  stb       r0, 0xBC(r31)
  stw       r0, 0xC0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void countItems__Q24Game7MapRoomFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000170
 */
void countEnemys__Q24Game7MapRoomFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B6F08
 * Size:	000008
 */
void getExtraCode__Q24Game16ObjectLayoutNodeFv(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801B6F10
 * Size:	0007B8
 */
void placeObjects__Q24Game7MapRoomFPQ34Game4Cave9FloorInfob(void)
{
/*
.loc_0x0:
  stwu      r1, -0x190(r1)
  mflr      r0
  stw       r0, 0x194(r1)
  stmw      r16, 0x150(r1)
  mr        r27, r3
  mr        r29, r4
  lwz       r0, 0xC4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x7A4
  addi      r25, r1, 0x88
  addi      r17, r1, 0x7C
  addi      r18, r1, 0x70
  addi      r19, r1, 0x64
  addi      r20, r1, 0x58
  addi      r26, r1, 0x4C
  addi      r21, r1, 0x40
  li        r28, 0
  li        r23, 0

.loc_0x48:
  li        r16, 0
  b         .loc_0x774

.loc_0x50:
  lwz       r3, 0xC4(r27)
  mr        r4, r28
  mr        r5, r16
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r30, 0
  mr        r31, r3
  b         .loc_0x754

.loc_0x78:
  cmplwi    r28, 0x7
  bgt-      .loc_0x750
  lis       r3, 0x804B
  addi      r3, r3, 0x5C2C
  lwzx      r0, r3, r23
  mtctr     r0
  bctr      
  lwz       r3, -0x6BB8(r13)
  bl        0x167E4
  mr        r0, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  mr        r24, r0
  mr        r5, r25
  addi      r4, r1, 0x80
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6CF8(r13)
  li        r4, 0
  lfs       f5, -0x4F20(r2)
  li        r0, 0x1
  lfs       f4, -0x4F10(r2)
  cmplwi    r3, 0
  lfs       f3, -0x4F0C(r2)
  lfs       f2, -0x4F08(r2)
  lfs       f1, 0x80(r1)
  lfs       f0, 0x0(r25)
  stfs      f5, 0x84(r1)
  stw       r4, 0x12C(r1)
  stfs      f4, 0x130(r1)
  stfs      f3, 0x134(r1)
  stw       r4, 0x128(r1)
  stfs      f5, 0x138(r1)
  stfs      f2, 0x13C(r1)
  stfs      f5, 0x140(r1)
  stb       r0, 0x124(r1)
  stb       r4, 0x125(r1)
  stfs      f1, 0x118(r1)
  stfs      f5, 0x11C(r1)
  stfs      f0, 0x120(r1)
  beq-      .loc_0x13C
  stb       r4, 0x124(r1)
  addi      r4, r1, 0x118
  lwz       r12, 0x4(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f5, 0x134(r1)

.loc_0x13C:
  stfs      f5, 0x84(r1)
  li        r3, 0
  lwz       r4, -0x6C18(r13)
  lwz       r0, 0x44(r4)
  cmpwi     r0, 0x2
  beq-      .loc_0x15C
  cmpwi     r0, 0x3
  bne-      .loc_0x160

.loc_0x15C:
  li        r3, 0x1

.loc_0x160:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x198
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r4, r4, 0x5D0C
  li        r0, 0x2
  stw       r4, 0x18(r1)
  addi      r5, r3, 0x5ED4
  mr        r3, r24
  addi      r4, r1, 0x18
  stw       r5, 0x18(r1)
  stw       r0, 0x1C(r1)
  bl        -0x7C0D8
  b         .loc_0x1A4

.loc_0x198:
  mr        r3, r24
  li        r4, 0
  bl        -0x7C0E8

.loc_0x1A4:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x1E8(r24)
  mr        r3, r24
  addi      r4, r1, 0x80
  li        r5, 0
  bl        -0x7BF30
  mr        r3, r29
  bl        0x1FFE4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x750
  lwz       r3, -0x6B10(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xBC(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  mr        r22, r3
  bl        -0x7C140
  mr        r3, r22
  addi      r4, r1, 0x80
  li        r5, 0
  bl        -0x7BF70
  b         .loc_0x750
  lwz       r3, -0x6C18(r13)
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x750
  lwz       r3, -0x6CD0(r13)
  li        r4, 0x1
  li        r5, 0
  bl        -0x3C260
  mr        r0, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  mr        r22, r0
  mr        r5, r17
  addi      r4, r1, 0x74
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x4F20(r2)
  mr        r3, r22
  li        r4, 0
  stfs      f0, 0x78(r1)
  bl        -0x7C1AC
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x228(r22)
  mr        r3, r22
  addi      r4, r1, 0x74
  li        r5, 0
  bl        -0x7BFF4
  b         .loc_0x750
  lwz       r3, -0x6CD0(r13)
  li        r4, 0
  li        r5, 0
  bl        -0x3C2D4
  mr        r0, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  mr        r22, r0
  mr        r5, r18
  addi      r4, r1, 0x68
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x4F20(r2)
  mr        r3, r22
  li        r4, 0
  stfs      f0, 0x6C(r1)
  bl        -0x7C220
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x228(r22)
  mr        r3, r22
  addi      r4, r1, 0x68
  li        r5, 0
  bl        -0x7C068
  b         .loc_0x750
  lwz       r3, -0x6CD0(r13)
  li        r4, 0
  li        r5, 0x1
  bl        -0x3C348
  mr        r0, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  mr        r22, r0
  mr        r5, r19
  addi      r4, r1, 0x5C
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x4F20(r2)
  mr        r3, r22
  li        r4, 0
  stfs      f0, 0x60(r1)
  bl        -0x7C294
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x228(r22)
  mr        r3, r22
  addi      r4, r1, 0x5C
  li        r5, 0
  bl        -0x7C0DC
  b         .loc_0x750
  lwz       r3, -0x6B50(r13)
  bl        0x366A4
  mr        r0, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  mr        r22, r0
  mr        r5, r20
  addi      r4, r1, 0x50
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x4F20(r2)
  li        r3, 0
  lwz       r4, -0x6C18(r13)
  stfs      f0, 0x54(r1)
  lwz       r0, 0x44(r4)
  cmpwi     r0, 0x2
  beq-      .loc_0x3CC
  cmpwi     r0, 0x3
  bne-      .loc_0x3D0

.loc_0x3CC:
  li        r3, 0x1

.loc_0x3D0:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x408
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r4, r4, 0x5D0C
  li        r0, 0x3
  stw       r4, 0x10(r1)
  addi      r5, r3, 0x5EC8
  mr        r3, r22
  addi      r4, r1, 0x10
  stw       r5, 0x10(r1)
  stw       r0, 0x14(r1)
  bl        -0x7C348
  b         .loc_0x414

.loc_0x408:
  mr        r3, r22
  li        r4, 0
  bl        -0x7C358

.loc_0x414:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x1EC(r22)
  mr        r3, r22
  addi      r4, r1, 0x50
  li        r5, 0
  bl        -0x7C1A0
  b         .loc_0x750
  lfs       f0, -0x4F20(r2)
  mr        r3, r31
  mr        r5, r26
  addi      r4, r1, 0x44
  stfs      f0, 0x48(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6CF8(r13)
  addi      r4, r1, 0x44
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x48(r1)
  addi      r3, r1, 0xE4
  bl        -0x88770
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lfs       f3, 0x44(r1)
  mr        r3, r31
  lfs       f2, 0x48(r1)
  lfs       f0, 0x0(r26)
  stfs      f1, 0xF0(r1)
  stfs      f3, 0xE4(r1)
  stfs      f2, 0xE8(r1)
  stfs      f0, 0xEC(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  sth       r3, 0xFC(r1)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stb       r3, 0xF4(r1)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r22, 0x1
  lwz       r12, 0x0(r31)
  li        r24, 0
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x63
  bne-      .loc_0x53C
  lwz       r3, -0x6B70(r13)
  lbz       r0, 0x6C(r3)
  cmplwi    r0, 0
  beq-      .loc_0x538
  li        r24, 0x1
  b         .loc_0x53C

.loc_0x538:
  li        r22, 0

.loc_0x53C:
  rlwinm.   r0,r22,0,24,31
  beq-      .loc_0x750
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, -0x6E20(r13)
  addi      r5, r1, 0xE4
  bl        -0xA9FB4
  mr.       r22, r3
  beq-      .loc_0x578
  li        r4, 0
  bl        -0x7C4BC

.loc_0x578:
  rlwinm.   r0,r24,0,24,31
  beq-      .loc_0x750
  lfs       f1, 0x2C0(r29)
  mr        r3, r22
  bl        0x1F352C
  lwz       r3, -0x6CF8(r13)
  stw       r22, 0x114(r3)
  b         .loc_0x750
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r1, 0xBC
  bl        -0x50A80
  lwz       r3, -0x6CE0(r13)
  addi      r4, r1, 0xBC
  bl        -0x4A010
  mr.       r24, r3
  beq-      .loc_0x750
  mr        r3, r31
  mr        r5, r21
  lwz       r12, 0x0(r31)
  addi      r4, r1, 0x38
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6CF8(r13)
  cmplwi    r3, 0
  beq-      .loc_0x628
  lwz       r12, 0x4(r3)
  addi      r4, r1, 0x38
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x3C(r1)
  mr        r3, r24
  bl        -0x50B4C
  lfs       f2, -0x4F04(r2)
  lfs       f0, 0x3C(r1)
  fmadds    f0, f2, f1, f0
  stfs      f0, 0x3C(r1)
  b         .loc_0x630

.loc_0x628:
  lfs       f0, -0x4F20(r2)
  stfs      f0, 0x3C(r1)

.loc_0x630:
  mr        r3, r24
  addi      r4, r1, 0x38
  li        r5, 0
  bl        -0x7C3A4
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x4F20(r2)
  lis       r3, 0x8051
  addi      r4, r3, 0x41E4
  stfs      f1, 0x30(r1)
  addi      r3, r1, 0x8C
  addi      r5, r1, 0x2C
  stfs      f0, 0x2C(r1)
  stfs      f0, 0x34(r1)
  bl        0x271304
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r24
  addi      r4, r1, 0x8C
  bl        -0x4F0D8
  mr        r3, r24
  bl        -0x4F634
  b         .loc_0x750
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, -0x1
  beq-      .loc_0x750
  lwz       r4, 0xD4(r27)
  rlwinm    r0,r3,4,0,27
  lis       r3, 0x8051
  add       r5, r4, r0
  lwz       r4, 0x0(r5)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x50(r4)
  lfs       f2, 0x54(r4)
  lfs       f0, 0x4C(r4)
  stfs      f0, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f2, 0x28(r1)
  lfs       f1, 0x4(r5)
  lfs       f2, 0xC(r5)
  bl        -0x182500
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r4, r4, 0x5D0C
  stfs      f1, 0xC(r1)
  addi      r0, r3, 0x5EBC
  lwz       r3, -0x6BD0(r13)
  stw       r4, 0x8(r1)
  stw       r0, 0x8(r1)
  bl        0x11960
  addi      r4, r1, 0x8
  mr        r22, r3
  bl        -0x7C670
  lwz       r6, 0x18(r31)
  mr        r3, r22
  addi      r4, r1, 0x20
  li        r5, 0
  lwz       r6, 0x0(r6)
  lfs       f0, 0x1C(r6)
  stfs      f0, 0x204(r22)
  stfs      f0, 0x200(r22)
  bl        -0x7C4B4

.loc_0x750:
  addi      r30, r30, 0x1

.loc_0x754:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  cmpw      r30, r3
  blt+      .loc_0x78
  addi      r16, r16, 0x1

.loc_0x774:
  lwz       r3, 0xC4(r27)
  mr        r4, r28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpw      r16, r3
  blt+      .loc_0x50
  addi      r28, r28, 0x1
  addi      r23, r23, 0x4
  cmpwi     r28, 0x8
  blt+      .loc_0x48

.loc_0x7A4:
  lmw       r16, 0x150(r1)
  lwz       r0, 0x194(r1)
  mtlr      r0
  addi      r1, r1, 0x190
  blr
*/
}

/*
 * --INFO--
 * Address:	801B76C8
 * Size:	000008
 */
void getBirthDoorIndex__Q24Game16ObjectLayoutNodeFv(void)
{
/*
.loc_0x0:
  li        r3, -0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	801B76D0
 * Size:	000008
 */
void isFixedBattery__Q24Game16ObjectLayoutNodeFv(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801B76D8
 * Size:	000008
 */
void getDirection__Q24Game16ObjectLayoutNodeFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x4F20(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	801B76E0
 * Size:	000004
 */
void getBirthPosition__Q24Game16ObjectLayoutNodeFRfRf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void getCenterPosition__Q24Game7MapRoomFR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00016C
 */
void create__Q24Game7MapRoomFPQ24Game7MapUnitR7Matrixf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void createDoorInfo__Q24Game7MapRoomFPQ24Game16MapUnitInterface(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B76E4
 * Size:	000004
 */
void __ct__Q24Game12RoomDoorInfoFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801B76E8
 * Size:	0000D4
 */
void doAnimation__Q24Game7MapRoomFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  lbz       r0, -0x6BFC(r13)
  cmplwi    r0, 0
  beq-      .loc_0x94
  lwz       r3, -0x6514(r13)
  li        r29, 0
  li        r28, 0
  lwz       r30, 0x24(r3)
  b         .loc_0x70

.loc_0x34:
  mr        r3, r30
  mr        r4, r28
  bl        0x26DECC
  mr        r31, r3
  bl        0x26DB14
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6C
  lwz       r3, 0x44(r31)
  addi      r4, r27, 0x160
  bl        0x262AC0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6C
  li        r29, 0x1
  b         .loc_0x7C

.loc_0x6C:
  addi      r28, r28, 0x1

.loc_0x70:
  lwz       r0, 0x264(r30)
  cmpw      r28, r0
  blt+      .loc_0x34

.loc_0x7C:
  rlwinm.   r0,r29,0,24,31
  bne-      .loc_0xC0
  lwz       r3, -0x6C00(r13)
  addi      r0, r3, 0x1
  stw       r0, -0x6C00(r13)
  b         .loc_0xC0

.loc_0x94:
  lwz       r3, 0x13C(r27)
  addi      r4, r27, 0x140
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xC0
  lwz       r3, -0x6C00(r13)
  addi      r0, r3, 0x1
  stw       r0, -0x6C00(r13)

.loc_0xC0:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801B77BC
 * Size:	0001F4
 */
void doEntry__Q24Game7MapRoomFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r31, r3
  lbz       r0, -0x6BFC(r13)
  cmplwi    r0, 0
  beq-      .loc_0xA0
  lwz       r3, -0x6514(r13)
  li        r28, 0
  li        r27, 0
  lwz       r29, 0x24(r3)
  b         .loc_0x70

.loc_0x34:
  mr        r3, r29
  mr        r4, r27
  bl        0x26DDF8
  mr        r30, r3
  bl        0x26DA40
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6C
  lwz       r3, 0x44(r30)
  addi      r4, r31, 0x160
  bl        0x2629EC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6C
  li        r28, 0x1
  b         .loc_0x7C

.loc_0x6C:
  addi      r27, r27, 0x1

.loc_0x70:
  lwz       r0, 0x264(r29)
  cmpw      r27, r0
  blt+      .loc_0x34

.loc_0x7C:
  rlwinm.   r0,r28,0,24,31
  beq-      .loc_0x1BC
  lwz       r3, 0x13C(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1BC

.loc_0xA0:
  lwz       r3, -0x6514(r13)
  li        r27, 0
  li        r28, 0
  lwz       r29, 0x24(r3)
  b         .loc_0xF0

.loc_0xB4:
  mr        r3, r29
  mr        r4, r28
  bl        0x26DD78
  mr        r30, r3
  bl        0x26D9C0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xEC
  lwz       r3, 0x44(r30)
  addi      r4, r31, 0x150
  bl        0x2628FC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xEC
  li        r27, 0x1
  b         .loc_0xFC

.loc_0xEC:
  addi      r28, r28, 0x1

.loc_0xF0:
  lwz       r0, 0x264(r29)
  cmpw      r28, r0
  blt+      .loc_0xB4

.loc_0xFC:
  rlwinm.   r0,r27,0,24,31
  beq-      .loc_0x15C
  lwz       r3, -0x6C18(r13)
  bl        -0x28FC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x144
  li        r27, 0
  li        r29, 0
  b         .loc_0x138

.loc_0x120:
  lwz       r0, 0xCC(r31)
  lfs       f1, -0x4F00(r2)
  add       r3, r0, r29
  bl        0x27CC64
  addi      r29, r29, 0xC
  addi      r27, r27, 0x1

.loc_0x138:
  lwz       r0, 0xC8(r31)
  cmpw      r27, r0
  blt+      .loc_0x120

.loc_0x144:
  lwz       r3, 0x13C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1A4

.loc_0x15C:
  lbz       r0, -0x7B97(r13)
  cmplwi    r0, 0
  beq-      .loc_0x190
  lwz       r4, -0x6C18(r13)
  li        r3, 0
  lwz       r0, 0x44(r4)
  cmpwi     r0, 0x1
  beq-      .loc_0x184
  cmpwi     r0, 0x3
  bne-      .loc_0x188

.loc_0x184:
  li        r3, 0x1

.loc_0x188:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1E0

.loc_0x190:
  lwz       r3, 0x13C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0x1A4:
  lwz       r3, 0x13C(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x1BC:
  lwz       r3, 0x13C(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x13C(r31)
  lwz       r3, 0x8(r3)
  bl        -0x150D2C

.loc_0x1E0:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801B79B0
 * Size:	000124
 */
void doSetView__Q24Game7MapRoomFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  rlwinm    r4,r4,0,16,31
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r3, 0x13C(r3)
  bl        0x2876E8
  lwz       r3, -0x6514(r13)
  li        r30, 0
  li        r4, 0
  lwz       r3, 0x24(r3)
  lwz       r0, 0x264(r3)
  mtctr     r0
  cmpwi     r0, 0
  ble-      .loc_0xB0

.loc_0x4C:
  cmpw      r4, r31
  bne-      .loc_0xA8
  bl        0x26DBEC
  mr        r31, r3
  bl        0x26D834
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xB0
  lbz       r0, -0x6BFC(r13)
  lwz       r3, 0x44(r31)
  cmplwi    r0, 0
  beq-      .loc_0x90
  addi      r4, r29, 0x160
  bl        0x2627D4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xB0
  li        r30, 0x1
  b         .loc_0xB0

.loc_0x90:
  addi      r4, r29, 0x150
  bl        0x26274C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xB0
  li        r30, 0x1
  b         .loc_0xB0

.loc_0xA8:
  addi      r4, r4, 0x1
  bdnz+     .loc_0x4C

.loc_0xB0:
  lbz       r0, -0x7C00(r13)
  cmplwi    r0, 0
  beq-      .loc_0xF4
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0xDC
  lwz       r3, 0x13C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x108

.loc_0xDC:
  lwz       r3, 0x13C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x108

.loc_0xF4:
  lwz       r3, 0x13C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x108:
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
 * Address:	801B7AD4
 * Size:	000024
 */
void doViewCalc__Q24Game7MapRoomFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x13C(r3)
  bl        0x287574
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801B7AF8
 * Size:	000004
 */
void doSimulation__Q24Game7MapRoomFf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801B7AFC
 * Size:	000004
 */
void doDirectDraw__Q24Game7MapRoomFR8Graphics(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801B7B00
 * Size:	0001E8
 */
void __ct__Q24Game10RoomMapMgrFPQ34Game4Cave8CaveInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  extsh.    r0, r4
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r28, 0x10(r1)
  beq-      .loc_0x40
  addi      r0, r29, 0x118
  lis       r3, 0x804B
  stw       r0, 0x0(r29)
  subi      r0, r3, 0x4A10
  stw       r0, 0x118(r29)

.loc_0x40:
  mr        r3, r29
  li        r4, 0
  bl        -0x55564
  lis       r3, 0x804B
  addi      r0, r29, 0x118
  addi      r4, r3, 0x5C4C
  addi      r3, r29, 0x24
  stw       r4, 0x4(r29)
  addi      r5, r4, 0x68
  lwz       r4, 0x0(r29)
  stw       r5, 0x0(r4)
  lwz       r4, 0x0(r29)
  sub       r0, r0, r4
  stw       r0, 0x4(r4)
  bl        0x458
  addi      r3, r29, 0x40
  bl        0x25ED70
  addi      r3, r29, 0xAC
  bl        0x9080
  lfs       f1, -0x4F1C(r2)
  lis       r3, 0x8012
  subi      r4, r3, 0xCB8
  lfs       f0, -0x4F18(r2)
  stfs      f1, 0xDC(r29)
  addi      r3, r29, 0xFC
  li        r5, 0
  li        r6, 0xC
  stfs      f1, 0xE0(r29)
  li        r7, 0x2
  stfs      f1, 0xE4(r29)
  stfs      f0, 0xE8(r29)
  stfs      f0, 0xEC(r29)
  stfs      f0, 0xF0(r29)
  bl        -0xF6388
  lfs       f0, -0x4F20(r2)
  li        r3, 0x3C
  stfs      f0, 0xFC(r29)
  stfs      f0, 0x100(r29)
  stfs      f0, 0x104(r29)
  stfs      f0, 0x108(r29)
  stfs      f0, 0x10C(r29)
  stfs      f0, 0x110(r29)
  bl        -0x193D44
  mr.       r31, r3
  beq-      .loc_0x178
  bl        0x25979C
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r0, r4, 0x5324
  lis       r5, 0x804B
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x6084
  lis       r4, 0x804B
  lis       r3, 0x804B
  stw       r0, 0x0(r31)
  li        r0, 0
  addi      r6, r4, 0x6008
  addi      r4, r3, 0x5F88
  stb       r0, 0x18(r31)
  subi      r0, r5, 0x4A10
  addi      r28, r31, 0x20
  addi      r5, r6, 0x2C
  stw       r0, 0x1C(r31)
  addi      r0, r4, 0x2C
  mr        r3, r28
  stw       r6, 0x0(r31)
  stw       r5, 0x1C(r31)
  stw       r4, 0x0(r31)
  stw       r0, 0x1C(r31)
  bl        0x25973C
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r0, r4, 0x5F78
  stw       r0, 0x0(r28)
  addi      r3, r3, 0x5EF8
  addi      r0, r3, 0x2C
  stw       r3, 0x0(r31)
  stw       r0, 0x1C(r31)

.loc_0x178:
  stw       r31, 0xA8(r29)
  li        r0, 0
  lfs       f3, -0x4F1C(r2)
  mr        r3, r29
  lfs       f2, -0x4F18(r2)
  stfs      f3, 0xDC(r29)
  lfs       f1, -0x4F20(r2)
  stfs      f3, 0xE0(r29)
  lfs       f0, -0x4F08(r2)
  stfs      f3, 0xE4(r29)
  stfs      f2, 0xE8(r29)
  stfs      f2, 0xEC(r29)
  stfs      f2, 0xF0(r29)
  stw       r30, 0x28(r29)
  stw       r0, 0x2C(r29)
  stw       r0, 0x30(r29)
  stfs      f1, 0x4C(r29)
  stfs      f0, 0x50(r29)
  stfs      f1, 0x54(r29)
  stw       r0, 0x114(r29)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801B7CE8
 * Size:	0000A0
 */
void MonoObjectMgr<Game::MapRoom>::~MonoObjectMgr()
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
  beq-      .loc_0x84
  lis       r4, 0x804B
  addi      r4, r4, 0x5DE8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x74
  lis       r4, 0x804B
  addi      r4, r4, 0x5D6C
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x74
  lis       r4, 0x804B
  addi      r0, r4, 0x5D40
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x259830

.loc_0x74:
  extsh.    r0, r31
  ble-      .loc_0x84
  mr        r3, r30
  bl        -0x193CB4

.loc_0x84:
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
 * Address:	801B7D88
 * Size:	0001FC
 */
void getMapRoom__Q24Game10RoomMapMgrFs(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  addi      r3, r3, 0xAC
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r5, r5, 0x5D28
  stw       r31, 0x1C(r1)
  cmplwi    r0, 0
  mr        r31, r4
  stw       r5, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x54
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xDC

.loc_0x54:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xC0

.loc_0x6C:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xDC
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xC0:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x6C

.loc_0xDC:
  extsh     r31, r31
  b         .loc_0x1C4

.loc_0xE4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lha       r0, 0x184(r3)
  cmpw      r0, r31
  bne-      .loc_0x108
  b         .loc_0x1E8

.loc_0x108:
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x134
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C4

.loc_0x134:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1A8

.loc_0x154:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1A8:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x154

.loc_0x1C4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xE4
  li        r3, 0

.loc_0x1E8:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801B7F84
 * Size:	00004C
 */
void Iterator<Game::MapRoom>::isDone()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x4(r31)
  sub       r0, r3, r0
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801B7FD0
 * Size:	00000C
 */
void __ct__Q24Game9CaveVRBoxFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void create__Q24Game9CaveVRBoxFPc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B7FDC
 * Size:	000A48
 */
void createRandomMap__Q24Game10RoomMapMgrFiPQ34Game4Cave11EditMapUnit(void)
{
/*
.loc_0x0:
  stwu      r1, -0x1530(r1)
  mflr      r0
  lis       r6, 0x8048
  stw       r0, 0x1534(r1)
  stmw      r21, 0x1504(r1)
  mr        r31, r3
  mr        r28, r4
  mr        r26, r5
  subi      r30, r6, 0x390
  lwz       r3, 0x28(r3)
  bl        0x1F4F4
  mr        r29, r3
  stw       r29, 0x2C(r31)
  stw       r28, 0x30(r31)
  bl        0x1ECD0
  mr        r3, r29
  bl        0x1ECD0
  mr        r3, r29
  bl        0x1ED88
  mr        r3, r29
  bl        0x1EDA4
  mr        r3, r29
  bl        0x1EDA4
  mr        r3, r29
  bl        0x1EE5C
  mr        r3, r29
  bl        0x1EE78
  mr        r3, r29
  bl        0x1EE78
  mr        r3, r29
  bl        0x1EF30
  lwz       r5, 0x1A4(r29)
  addi      r3, r1, 0x698
  addi      r4, r30, 0x178
  crclr     6, 0x6
  bl        -0xF0C30
  li        r0, 0
  addi      r3, r1, 0x698
  stw       r0, 0x8(r1)
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0x2
  li        r9, 0
  li        r10, 0
  bl        -0x198F0C
  mr.       r27, r3
  bne-      .loc_0xDC
  addi      r3, r30, 0x84
  addi      r5, r30, 0x198
  addi      r6, r1, 0x698
  li        r4, 0x649
  crclr     6, 0x6
  bl        -0x18DA74

.loc_0xDC:
  mr        r4, r27
  addi      r3, r1, 0x10D8
  li        r5, -0x1
  bl        0x25D834
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x10E4(r1)
  bne-      .loc_0x104
  li        r0, 0
  stw       r0, 0x14EC(r1)

.loc_0x104:
  addi      r3, r1, 0x10D8
  bl        0x25C9AC
  mr        r25, r3
  mr        r24, r25
  mulli     r3, r24, 0x16C
  addi      r3, r3, 0x10
  bl        -0x19414C
  lis       r4, 0x801C
  lis       r5, 0x801C
  subi      r4, r4, 0x74F0
  mr        r7, r24
  subi      r5, r5, 0x75DC
  li        r6, 0x16C
  bl        -0xF6724
  mr        r24, r3
  li        r22, 0
  mr        r23, r24
  b         .loc_0x160

.loc_0x14C:
  mr        r3, r23
  addi      r4, r1, 0x10D8
  bl        0x7A420
  addi      r23, r23, 0x16C
  addi      r22, r22, 0x1

.loc_0x160:
  cmpw      r22, r25
  blt+      .loc_0x14C
  stw       r24, 0xF8(r31)
  addi      r3, r1, 0x498
  addi      r4, r30, 0x1A8
  stw       r25, 0xF4(r31)
  lwz       r5, 0x1C4(r29)
  crclr     6, 0x6
  bl        -0xF0D24
  addi      r3, r1, 0x498
  bl        -0xDC000
  cmpwi     r3, -0x1
  beq-      .loc_0x224
  li        r0, 0
  addi      r3, r1, 0x498
  stw       r0, 0x8(r1)
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0x2
  li        r9, 0
  li        r10, 0
  bl        -0x199010
  mr.       r23, r3
  beq-      .loc_0x20C
  mr        r4, r23
  addi      r3, r1, 0xCB8
  li        r5, -0x1
  bl        0x25D748
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0xCC4(r1)
  bne-      .loc_0x1F0
  li        r0, 0
  stw       r0, 0x10CC(r1)

.loc_0x1F0:
  lwz       r3, -0x6C18(r13)
  bl        -0x3164
  addi      r4, r1, 0xCB8
  bl        -0x98C38
  mr        r3, r23
  bl        -0x194108
  b         .loc_0x224

.loc_0x20C:
  addi      r3, r30, 0x84
  addi      r5, r30, 0x1BC
  addi      r6, r1, 0x498
  li        r4, 0x671
  crclr     6, 0x6
  bl        -0x18DBBC

.loc_0x224:
  lwz       r5, 0x1E4(r29)
  addi      r3, r1, 0x98
  addi      r4, r30, 0x13C
  crclr     6, 0x6
  bl        -0xF0DD8
  addi      r3, r1, 0x98
  bl        -0xDC0B4
  cmpwi     r3, -0x1
  beq-      .loc_0x344
  addi      r3, r1, 0x98
  li        r4, 0x1
  li        r5, 0
  li        r6, 0x1
  bl        -0x19D104
  cmplwi    r3, 0
  beq-      .loc_0x344
  lwz       r12, 0x0(r3)
  addi      r4, r30, 0x158
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x32C
  lis       r4, 0x2000
  bl        -0x1489CC
  lis       r4, 0x4
  mr        r23, r3
  bl        -0x134994
  mr        r3, r23
  bl        -0x134844
  li        r3, 0x14
  bl        -0x1943D8
  mr.       r0, r3
  beq-      .loc_0x2C0
  mr        r4, r23
  li        r5, 0
  li        r6, 0x2
  bl        0x285F44
  mr        r0, r3

.loc_0x2C0:
  stw       r0, 0x24(r31)
  addi      r3, r1, 0x38
  bl        -0xCE004
  lwz       r4, 0x24(r31)
  addi      r3, r1, 0x38
  lwz       r4, 0x8(r4)
  addi      r4, r4, 0x24
  bl        -0xCDFEC
  lwz       r3, 0x24(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x24(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x24(r31)
  lwz       r3, 0x8(r3)
  bl        -0x1519D0
  lwz       r3, 0x24(r31)
  lwz       r3, 0x8(r3)
  bl        -0x151B0C
  b         .loc_0x344

.loc_0x32C:
  addi      r3, r30, 0x84
  addi      r5, r30, 0x164
  addi      r6, r1, 0x98
  li        r4, 0x610
  crclr     6, 0x6
  bl        -0x18DCDC

.loc_0x344:
  mr        r22, r24
  li        r21, 0
  b         .loc_0x410

.loc_0x350:
  lwz       r5, 0x14(r22)
  addi      r3, r1, 0x298
  addi      r4, r30, 0x1D0
  crclr     6, 0x6
  bl        -0xF0F04
  lwz       r5, -0x77D4(r13)
  addi      r3, r1, 0x298
  li        r4, 0x1
  li        r6, 0x2
  bl        -0x19D220
  mr.       r23, r3
  bne-      .loc_0x394
  addi      r3, r30, 0x84
  addi      r5, r30, 0x1F8
  li        r4, 0x697
  crclr     6, 0x6
  bl        -0x18DD2C

.loc_0x394:
  mr        r3, r23
  addi      r4, r30, 0x208
  lwz       r12, 0x0(r23)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x3F4
  mr        r4, r3
  addi      r3, r1, 0x898
  li        r5, -0x1
  bl        0x25D55C
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x8A4(r1)
  bne-      .loc_0x3DC
  li        r0, 0
  stw       r0, 0xCAC(r1)

.loc_0x3DC:
  lwz       r3, 0x168(r22)
  addi      r4, r1, 0x898
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x3F4:
  mr        r3, r23
  lwz       r12, 0x0(r23)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r22, r22, 0x16C
  addi      r21, r21, 0x1

.loc_0x410:
  cmpw      r21, r25
  blt+      .loc_0x350
  bl        0x85028
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x214
  li        r5, 0
  bl        0x26AF58
  lwz       r3, 0x28(r31)
  bl        0x1F0E4
  subi      r0, r3, 0x1
  mr        r3, r31
  sub       r0, r0, r28
  mr        r4, r24
  cntlzw    r0, r0
  mr        r5, r25
  rlwinm    r7,r0,27,5,31
  mr        r6, r29
  mr        r8, r26
  bl        0x941B0
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x214
  bl        0x26AF24
  mr        r3, r27
  bl        -0x194370
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x228
  li        r5, 0
  bl        0x26AF04
  mr        r3, r31
  bl        0x7C8
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x228
  bl        0x26AEF8
  li        r3, 0x3C
  bl        -0x1945D0
  mr.       r0, r3
  beq-      .loc_0x4AC
  bl        -0x43EF0
  mr        r0, r3

.loc_0x4AC:
  stw       r0, 0x8(r31)
  addi      r4, r30, 0x23C
  li        r5, 0
  lwz       r3, -0x6514(r13)
  bl        0x26AEC4
  mr        r3, r31
  bl        0x94234
  lwz       r3, 0x8(r31)
  bl        -0x45AC4
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x23C
  bl        0x26AEB0
  li        r4, 0
  lis       r3, 0x804B
  stw       r4, 0xA0(r31)
  addi      r0, r3, 0x5D28
  addi      r3, r31, 0xAC
  cmplwi    r4, 0
  stw       r0, 0x28(r1)
  stw       r4, 0x34(r1)
  stw       r4, 0x2C(r1)
  stw       r3, 0x30(r1)
  bne-      .loc_0x520
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)
  b         .loc_0x694

.loc_0x520:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)
  b         .loc_0x58C

.loc_0x538:
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x694
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)

.loc_0x58C:
  lwz       r12, 0x28(r1)
  addi      r3, r1, 0x28
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x538
  b         .loc_0x694

.loc_0x5AC:
  lwz       r3, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lha       r0, 0x186(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x5D8
  lwz       r3, 0xA0(r31)
  addi      r0, r3, 0x1
  stw       r0, 0xA0(r31)

.loc_0x5D8:
  lwz       r0, 0x34(r1)
  cmplwi    r0, 0
  bne-      .loc_0x604
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)
  b         .loc_0x694

.loc_0x604:
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)
  b         .loc_0x678

.loc_0x624:
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x694
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)

.loc_0x678:
  lwz       r12, 0x28(r1)
  addi      r3, r1, 0x28
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x624

.loc_0x694:
  lwz       r3, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x2C(r1)
  cmplw     r4, r3
  bne+      .loc_0x5AC
  lwz       r0, 0xA0(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x1946EC
  stw       r3, 0xA4(r31)
  li        r24, 0
  lwz       r0, 0x34(r1)
  cmplwi    r0, 0
  bne-      .loc_0x6F0
  lwz       r3, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)
  b         .loc_0x880

.loc_0x6F0:
  lwz       r3, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)
  b         .loc_0x760

.loc_0x70C:
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x880
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)

.loc_0x760:
  lwz       r12, 0x28(r1)
  addi      r3, r1, 0x28
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x70C
  b         .loc_0x880

.loc_0x780:
  lwz       r3, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lha       r0, 0x186(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x7C4
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xA4(r31)
  stwx      r3, r4, r24
  addi      r24, r24, 0x4

.loc_0x7C4:
  lwz       r0, 0x34(r1)
  cmplwi    r0, 0
  bne-      .loc_0x7F0
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)
  b         .loc_0x880

.loc_0x7F0:
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)
  b         .loc_0x864

.loc_0x810:
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x880
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)

.loc_0x864:
  lwz       r12, 0x28(r1)
  addi      r3, r1, 0x28
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x810

.loc_0x880:
  lwz       r3, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x2C(r1)
  cmplw     r4, r3
  bne+      .loc_0x780
  lwz       r0, 0x24(r31)
  cmplwi    r0, 0
  beq-      .loc_0x940
  lfs       f1, -0x4F08(r2)
  addi      r3, r1, 0x68
  lfs       f4, -0x4F04(r2)
  addi      r4, r1, 0x1C
  stfs      f1, 0x1C(r1)
  addi      r5, r1, 0x10
  lfs       f0, -0x4F20(r2)
  stfs      f1, 0x20(r1)
  stfs      f1, 0x24(r1)
  lfs       f2, 0xE0(r31)
  lfs       f1, 0xEC(r31)
  lfs       f6, 0xE4(r31)
  fadds     f3, f2, f1
  lfs       f5, 0xF0(r31)
  lfs       f2, 0xDC(r31)
  lfs       f1, 0xE8(r31)
  fadds     f5, f6, f5
  fmuls     f3, f3, f4
  fadds     f1, f2, f1
  fmuls     f2, f5, f4
  stfs      f3, 0x14(r1)
  fmuls     f1, f1, f4
  stfs      f2, 0x18(r1)
  stfs      f1, 0x10(r1)
  stfs      f0, 0x14(r1)
  bl        0x26FC74
  lwz       r4, 0x24(r31)
  addi      r3, r1, 0x68
  lwz       r4, 0x8(r4)
  addi      r4, r4, 0x24
  bl        -0xCE634
  lwz       r3, 0x24(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x940:
  lfs       f4, 0xDC(r31)
  lfs       f0, -0x4EFC(r2)
  lfs       f3, 0xE4(r31)
  fsubs     f1, f4, f0
  lfs       f2, 0xE0(r31)
  fsubs     f3, f3, f0
  fcmpo     cr0, f1, f4
  bge-      .loc_0x964
  stfs      f1, 0xDC(r31)

.loc_0x964:
  lfs       f0, 0xE0(r31)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x974
  stfs      f2, 0xE0(r31)

.loc_0x974:
  lfs       f0, 0xE4(r31)
  fcmpo     cr0, f3, f0
  bge-      .loc_0x984
  stfs      f3, 0xE4(r31)

.loc_0x984:
  lfs       f0, 0xE8(r31)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x994
  stfs      f1, 0xE8(r31)

.loc_0x994:
  lfs       f0, 0xEC(r31)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x9A4
  stfs      f2, 0xEC(r31)

.loc_0x9A4:
  lfs       f0, 0xF0(r31)
  fcmpo     cr0, f3, f0
  ble-      .loc_0x9B4
  stfs      f3, 0xF0(r31)

.loc_0x9B4:
  lfs       f2, 0xE8(r31)
  lfs       f1, -0x4EFC(r2)
  lfs       f3, 0xF0(r31)
  fadds     f2, f2, f1
  lfs       f0, 0xDC(r31)
  fadds     f3, f3, f1
  lfs       f1, 0xEC(r31)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x9DC
  stfs      f2, 0xDC(r31)

.loc_0x9DC:
  lfs       f0, 0xE0(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x9EC
  stfs      f1, 0xE0(r31)

.loc_0x9EC:
  lfs       f0, 0xE4(r31)
  fcmpo     cr0, f3, f0
  bge-      .loc_0x9FC
  stfs      f3, 0xE4(r31)

.loc_0x9FC:
  lfs       f0, 0xE8(r31)
  fcmpo     cr0, f2, f0
  ble-      .loc_0xA0C
  stfs      f2, 0xE8(r31)

.loc_0xA0C:
  lfs       f0, 0xEC(r31)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xA1C
  stfs      f1, 0xEC(r31)

.loc_0xA1C:
  lfs       f0, 0xF0(r31)
  fcmpo     cr0, f3, f0
  ble-      .loc_0xA2C
  stfs      f3, 0xF0(r31)

.loc_0xA2C:
  mr        r3, r31
  bl        0x55C0
  lmw       r21, 0x1504(r1)
  lwz       r0, 0x1534(r1)
  mtlr      r0
  addi      r1, r1, 0x1530
  blr
*/
}

/*
 * --INFO--
 * Address:	801B8A24
 * Size:	0000EC
 */
void __dt__Q24Game16MapUnitInterfaceFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  beq-      .loc_0xD0
  lis       r3, 0x804B
  addi      r0, r3, 0x5CFC
  stw       r0, 0x0(r31)
  beq-      .loc_0xC0
  lis       r3, 0x804C
  addic.    r0, r31, 0x118
  addi      r0, r3, 0x1340
  stw       r0, 0x0(r31)
  beq-      .loc_0x78
  lis       r4, 0x804B
  addic.    r3, r31, 0x138
  addi      r0, r4, 0x5CEC
  stw       r0, 0x118(r31)
  beq-      .loc_0x6C
  lis       r4, 0x804B
  addi      r0, r4, 0x60D4
  stw       r0, 0x138(r31)
  li        r4, 0
  bl        0x258AFC

.loc_0x6C:
  addi      r3, r31, 0x118
  li        r4, 0
  bl        0x258AF0

.loc_0x78:
  addic.    r0, r31, 0x70
  beq-      .loc_0xB4
  lis       r4, 0x804B
  addic.    r3, r31, 0x90
  addi      r0, r4, 0x2300
  stw       r0, 0x70(r31)
  beq-      .loc_0xA8
  lis       r4, 0x804B
  addi      r0, r4, 0x2338
  stw       r0, 0x90(r31)
  li        r4, 0
  bl        0x258AC0

.loc_0xA8:
  addi      r3, r31, 0x70
  li        r4, 0
  bl        -0x46170

.loc_0xB4:
  mr        r3, r31
  li        r4, 0
  bl        0x258AA8

.loc_0xC0:
  extsh.    r0, r30
  ble-      .loc_0xD0
  mr        r3, r31
  bl        -0x194A3C

.loc_0xD0:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801B8B10
 * Size:	00003C
 */
void __ct__Q24Game16MapUnitInterfaceFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x79818
  lis       r4, 0x804B
  mr        r3, r31
  addi      r0, r4, 0x5CFC
  stw       r0, 0x0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801B8B4C
 * Size:	0000DC
 */
void __dt__Q24Game9PartsViewFv(void)
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
  beq-      .loc_0xC0
  lis       r3, 0x804C
  addic.    r0, r30, 0x118
  addi      r0, r3, 0x1340
  stw       r0, 0x0(r30)
  beq-      .loc_0x68
  lis       r4, 0x804B
  addic.    r3, r30, 0x138
  addi      r0, r4, 0x5CEC
  stw       r0, 0x118(r30)
  beq-      .loc_0x5C
  lis       r4, 0x804B
  addi      r0, r4, 0x60D4
  stw       r0, 0x138(r30)
  li        r4, 0
  bl        0x2589E4

.loc_0x5C:
  addi      r3, r30, 0x118
  li        r4, 0
  bl        0x2589D8

.loc_0x68:
  addic.    r0, r30, 0x70
  beq-      .loc_0xA4
  lis       r4, 0x804B
  addic.    r3, r30, 0x90
  addi      r0, r4, 0x2300
  stw       r0, 0x70(r30)
  beq-      .loc_0x98
  lis       r4, 0x804B
  addi      r0, r4, 0x2338
  stw       r0, 0x90(r30)
  li        r4, 0
  bl        0x2589A8

.loc_0x98:
  addi      r3, r30, 0x70
  li        r4, 0
  bl        -0x46288

.loc_0xA4:
  mr        r3, r30
  li        r4, 0
  bl        0x258990
  extsh.    r0, r31
  ble-      .loc_0xC0
  mr        r3, r30
  bl        -0x194B54

.loc_0xC0:
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
 * Address:	801B8C28
 * Size:	000224
 */
void completeUnitData__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x230(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x234(r1)
  li        r0, 0
  addi      r4, r4, 0x5EE0
  stw       r31, 0x22C(r1)
  cmplwi    r0, 0
  stw       r30, 0x228(r1)
  stw       r29, 0x224(r1)
  mr        r29, r3
  lwz       r3, 0xA8(r3)
  stw       r4, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x5C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xE4

.loc_0x5C:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xC8

.loc_0x74:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xE4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xC8:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x74

.loc_0xE4:
  lis       r3, 0x8048
  subi      r31, r3, 0x144
  b         .loc_0x1E8

.loc_0xF0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  mr        r4, r31
  lwz       r5, 0x8(r30)
  addi      r3, r1, 0x18
  crclr     6, 0x6
  bl        -0xF1908
  lwz       r3, 0xA8(r29)
  mr        r4, r30
  addi      r5, r1, 0x18
  bl        -0x2364
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x158
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1E8

.loc_0x158:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1CC

.loc_0x178:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1E8
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1CC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x178

.loc_0x1E8:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xF0
  lwz       r0, 0x234(r1)
  lwz       r31, 0x22C(r1)
  lwz       r30, 0x228(r1)
  lwz       r29, 0x224(r1)
  mtlr      r0
  addi      r1, r1, 0x230
  blr
*/
}

/*
 * --INFO--
 * Address:	801B8E4C
 * Size:	000234
 */
void setupJUTTextures__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x34(r1)
  li        r0, 0
  addi      r4, r4, 0x5EE0
  stw       r31, 0x2C(r1)
  mr        r31, r3
  cmplwi    r0, 0
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  lwz       r3, 0xA8(r3)
  stw       r4, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x5C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1F0

.loc_0x5C:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xC8

.loc_0x74:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1F0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xC8:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x74
  b         .loc_0x1F0

.loc_0xE8:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r29, r3
  li        r3, 0x40
  bl        -0x1950AC
  mr.       r30, r3
  beq-      .loc_0x130
  lwz       r4, 0x30(r29)
  li        r0, 0
  li        r5, 0
  stw       r0, 0x28(r30)
  bl        -0x185EE8
  lbz       r0, 0x3B(r30)
  rlwinm    r0,r0,0,30,30
  stb       r0, 0x3B(r30)

.loc_0x130:
  stw       r30, 0x2C(r29)
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x160
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1F0

.loc_0x160:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1D4

.loc_0x180:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1F0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1D4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x180

.loc_0x1F0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xE8
  mr        r3, r31
  bl        0x93790
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
 * Address:	801B9080
 * Size:	0002BC
 */
void useUnit__Q24Game10RoomMapMgrFPc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x34(r1)
  li        r0, 0
  addi      r5, r5, 0x5EE0
  stmw      r26, 0x18(r1)
  mr        r30, r3
  cmplwi    r0, 0
  mr        r31, r4
  lwz       r3, 0xA8(r3)
  stw       r5, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x58
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1D0

.loc_0x58:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xC4

.loc_0x70:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1D0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xC4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x70
  b         .loc_0x1D0

.loc_0xE4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r29, r3
  mr        r3, r31
  lwz       r4, 0x8(r29)
  bl        -0xEEAC4
  cmpwi     r3, 0
  bne-      .loc_0x114
  b         .loc_0x1F4

.loc_0x114:
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x140
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1D0

.loc_0x140:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B4

.loc_0x160:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1D0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1B4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x160

.loc_0x1D0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xE4
  li        r29, 0

.loc_0x1F4:
  cmplwi    r29, 0
  mr        r27, r29
  bne-      .loc_0x2A8
  li        r3, 0x1C
  bl        -0x1953E0
  mr.       r29, r3
  beq-      .loc_0x220
  bl        0x258100
  lis       r3, 0x804B
  addi      r0, r3, 0x5F78
  stw       r0, 0x0(r29)

.loc_0x220:
  li        r26, 0
  li        r28, 0
  b         .loc_0x260

.loc_0x22C:
  lwz       r4, 0xF8(r30)
  addi      r0, r28, 0x18
  mr        r3, r31
  lwzx      r4, r4, r0
  lwz       r4, 0x8(r4)
  bl        -0xEEC00
  cmpwi     r3, 0
  bne-      .loc_0x258
  lwz       r3, 0xF8(r30)
  addi      r0, r28, 0x18
  lwzx      r27, r3, r0

.loc_0x258:
  addi      r28, r28, 0x16C
  addi      r26, r26, 0x1

.loc_0x260:
  lwz       r0, 0xF4(r30)
  cmpw      r26, r0
  blt+      .loc_0x22C
  cmplwi    r27, 0
  bne-      .loc_0x294
  lis       r3, 0x8048
  lis       r4, 0x8048
  subi      r5, r4, 0x128
  mr        r6, r31
  subi      r3, r3, 0x30C
  li        r4, 0x75C
  crclr     6, 0x6
  bl        -0x18ECD0

.loc_0x294:
  stw       r27, 0x18(r29)
  mr        r4, r29
  lwz       r3, 0xA8(r30)
  addi      r3, r3, 0x20
  bl        0x2580E4

.loc_0x2A8:
  lmw       r26, 0x18(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801B933C
 * Size:	000210
 */
void getTexture__Q24Game10RoomMapMgrFPc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  cmplwi    r0, 0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  addi      r4, r5, 0x5EE0
  lwz       r3, 0xA8(r3)
  stw       r4, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x58
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1D4

.loc_0x58:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xC4

.loc_0x70:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1D4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xC4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x70
  b         .loc_0x1D4

.loc_0xE4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  mr        r4, r30
  lwz       r3, 0x8(r3)
  bl        -0xEED80
  cmpwi     r3, 0
  bne-      .loc_0x118
  lwz       r3, 0x2C(r31)
  b         .loc_0x1F8

.loc_0x118:
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x144
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1D4

.loc_0x144:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B8

.loc_0x164:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1D4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1B8:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x164

.loc_0x1D4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xE4
  li        r3, 0

.loc_0x1F8:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801B954C
 * Size:	0001F4
 */
void allocRooms__Q24Game10RoomMapMgrFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  addi      r3, r31, 0xAC
  bl        0x751C
  li        r0, 0
  lis       r3, 0x804B
  addi      r4, r3, 0x5D28
  addi      r3, r31, 0xAC
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x5C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x5C:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xC8

.loc_0x74:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xC8:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x74
  b         .loc_0x1C0

.loc_0xE8:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  li        r0, -0x1
  sth       r0, 0x184(r3)
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x130
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x130:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1A4

.loc_0x150:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1A4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x150

.loc_0x1C0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xE8
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801B9740
 * Size:	000050
 */
void makeRoom__Q24Game10RoomMapMgrFPcffiiPQ24Game8RoomLinkPQ24Game16ObjectLayoutInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  xoris     r5, r5, 0x8000
  lfd       f3, -0x4EF0(r2)
  stw       r0, 0x14(r1)
  lis       r0, 0x4330
  lfs       f4, -0x4EF8(r2)
  stw       r5, 0xC(r1)
  extsh     r5, r6
  mr        r6, r7
  mr        r7, r8
  stw       r0, 0x8(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f3
  fmuls     f3, f4, f0
  bl        0x3198
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801B9790
 * Size:	0003B4
 */
void placeObjects__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  stw       r0, 0xA4(r1)
  stfd      f31, 0x90(r1)
  psq_st    f31,0x98(r1),0,0
  stfd      f30, 0x80(r1)
  psq_st    f30,0x88(r1),0,0
  stmw      r27, 0x6C(r1)
  li        r0, 0
  mr        r31, r3
  lis       r3, 0x804B
  stw       r0, 0x28(r1)
  addi      r4, r3, 0x5D28
  addi      r3, r31, 0xAC
  cmplwi    r0, 0
  stw       r4, 0x1C(r1)
  stw       r0, 0x20(r1)
  stw       r3, 0x24(r1)
  bne-      .loc_0x64
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x20(r1)
  b         .loc_0x1EC

.loc_0x64:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x20(r1)
  b         .loc_0xD0

.loc_0x7C:
  lwz       r3, 0x24(r1)
  lwz       r4, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x28(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1EC
  lwz       r3, 0x24(r1)
  lwz       r4, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x20(r1)

.loc_0xD0:
  lwz       r12, 0x1C(r1)
  addi      r3, r1, 0x1C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x7C
  b         .loc_0x1EC

.loc_0xF0:
  lwz       r3, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r29, r3
  lwz       r3, 0x28(r31)
  bl        0x1DC54
  lwz       r0, 0x30(r31)
  subi      r5, r3, 0x1
  lwz       r4, 0x2C(r31)
  mr        r3, r29
  sub       r0, r5, r0
  cntlzw    r0, r0
  rlwinm    r5,r0,27,5,31
  bl        -0x29AC
  lwz       r0, 0x28(r1)
  cmplwi    r0, 0
  bne-      .loc_0x15C
  lwz       r3, 0x24(r1)
  lwz       r4, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x20(r1)
  b         .loc_0x1EC

.loc_0x15C:
  lwz       r3, 0x24(r1)
  lwz       r4, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x20(r1)
  b         .loc_0x1D0

.loc_0x17C:
  lwz       r3, 0x24(r1)
  lwz       r4, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x28(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1EC
  lwz       r3, 0x24(r1)
  lwz       r4, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x20(r1)

.loc_0x1D0:
  lwz       r12, 0x1C(r1)
  addi      r3, r1, 0x1C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x17C

.loc_0x1EC:
  lwz       r3, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x20(r1)
  cmplw     r4, r3
  bne+      .loc_0xF0
  lwz       r4, 0x8(r31)
  cmplwi    r4, 0
  beq-      .loc_0x390
  lwz       r3, 0x2C(r31)
  lwz       r0, 0x2E8(r3)
  cmpwi     r0, 0
  beq-      .loc_0x390
  lhz       r0, 0x1C(r4)
  li        r28, -0x1
  lfd       f30, -0x4EF0(r2)
  li        r27, -0x1
  lfs       f31, -0x4F1C(r2)
  xoris     r30, r0, 0x8000
  lis       r29, 0x4330
  b         .loc_0x2C0

.loc_0x248:
  bl        -0xF0438
  xoris     r0, r3, 0x8000
  stw       r29, 0x30(r1)
  stw       r0, 0x34(r1)
  lfd       f0, 0x30(r1)
  stw       r30, 0x3C(r1)
  fsubs     f0, f0, f30
  stw       r29, 0x38(r1)
  fdivs     f1, f0, f31
  lfd       f0, 0x38(r1)
  fsubs     f0, f0, f30
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x40(r1)
  lwz       r27, 0x44(r1)
  bl        -0xF0474
  xoris     r0, r3, 0x8000
  stw       r29, 0x48(r1)
  stw       r0, 0x4C(r1)
  lfd       f0, 0x48(r1)
  stw       r30, 0x54(r1)
  fsubs     f0, f0, f30
  stw       r29, 0x50(r1)
  fdivs     f1, f0, f31
  lfd       f0, 0x50(r1)
  fsubs     f0, f0, f30
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x58(r1)
  lwz       r28, 0x5C(r1)

.loc_0x2C0:
  cmpw      r27, r28
  beq+      .loc_0x248
  lwz       r3, 0x8(r31)
  extsh     r4, r27
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x8(r1)
  extsh     r4, r28
  lwz       r3, 0x8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  addi      r27, r1, 0x8
  li        r28, 0

.loc_0x308:
  lwz       r3, -0x6B20(r13)
  bl        0x3CBE8
  mr.       r29, r3
  beq-      .loc_0x380
  lwz       r6, 0x0(r27)
  lis       r4, 0x3030
  li        r5, 0x14
  li        r0, 0x1
  lfs       f1, 0x50(r6)
  addi      r3, r29, 0x21C
  lfs       f2, 0x54(r6)
  addi      r4, r4, 0x3030
  lfs       f0, 0x4C(r6)
  stfs      f0, 0x10(r1)
  stfs      f1, 0x14(r1)
  stfs      f2, 0x18(r1)
  stw       r5, 0x1E8(r29)
  sth       r0, 0x204(r29)
  stb       r0, 0x228(r29)
  stb       r0, 0x229(r29)
  bl        0x2597F0
  mr        r3, r29
  li        r4, 0
  bl        -0x7EB2C
  lfs       f0, -0x4F20(r2)
  mr        r3, r29
  addi      r4, r1, 0x10
  li        r5, 0
  stfs      f0, 0x200(r29)
  bl        -0x7E964

.loc_0x380:
  addi      r28, r28, 0x1
  addi      r27, r27, 0x4
  cmpwi     r28, 0x2
  blt+      .loc_0x308

.loc_0x390:
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  lmw       r27, 0x6C(r1)
  lwz       r0, 0xA4(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	801B9B44
 * Size:	000024
 */
void getBoundBox2d__Q24Game10RoomMapMgrFR10BoundBox2d(void)
{
/*
.loc_0x0:
  lfs       f1, 0xE4(r3)
  lfs       f0, 0xDC(r3)
  stfs      f0, 0x0(r4)
  stfs      f1, 0x4(r4)
  lfs       f1, 0xF0(r3)
  lfs       f0, 0xE8(r3)
  stfs      f0, 0x8(r4)
  stfs      f1, 0xC(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801B9B68
 * Size:	000034
 */
void getBoundBox__Q24Game10RoomMapMgrFR8BoundBox(void)
{
/*
.loc_0x0:
  lfs       f0, 0xDC(r3)
  stfs      f0, 0x0(r4)
  lfs       f0, 0xE0(r3)
  stfs      f0, 0x4(r4)
  lfs       f0, 0xE4(r3)
  stfs      f0, 0x8(r4)
  lfs       f0, 0xE8(r3)
  stfs      f0, 0xC(r4)
  lfs       f0, 0xEC(r3)
  stfs      f0, 0x10(r4)
  lfs       f0, 0xF0(r3)
  stfs      f0, 0x14(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801B9B9C
 * Size:	000004
 */
void drawCollision__Q24Game10RoomMapMgrFR8GraphicsRQ23Sys6Sphere(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801B9BA0
 * Size:	0001F0
 */
void traceMove__Q24Game10RoomMapMgrFRQ24Game8MoveInfof(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stmw      r27, 0x2C(r1)
  mr        r28, r4
  lwz       r4, 0x4(r4)
  fmr       f31, f1
  mr        r27, r3
  lfs       f3, 0x0(r4)
  li        r31, 0x1
  lfs       f2, 0x4(r4)
  fmuls     f0, f3, f3
  fmuls     f2, f2, f2
  lfs       f4, 0x8(r4)
  lwz       r3, 0x0(r28)
  fmuls     f4, f4, f4
  lfs       f1, -0x4F20(r2)
  fadds     f0, f0, f2
  lfs       f5, 0xC(r3)
  fadds     f0, f4, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x7C
  fmadds    f0, f3, f3, f2
  fadds     f2, f4, f0
  fcmpo     cr0, f2, f1
  ble-      .loc_0x80
  fsqrte    f0, f2
  fmuls     f2, f0, f2
  b         .loc_0x80

.loc_0x7C:
  fmr       f2, f1

.loc_0x80:
  lfs       f0, -0x4F04(r2)

.loc_0x84:
  fmuls     f1, f31, f2
  fcmpo     cr0, f1, f5
  ble-      .loc_0xA0
  rlwinm    r31,r31,1,0,30
  fmuls     f31, f31, f0
  cmpwi     r31, 0x4
  ble+      .loc_0x84

.loc_0xA0:
  li        r29, 0
  b         .loc_0xCC

.loc_0xA8:
  mr        r3, r27
  fmr       f1, f31
  lwz       r12, 0x4(r27)
  mr        r4, r28
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  addi      r29, r29, 0x1

.loc_0xCC:
  cmpw      r29, r31
  blt+      .loc_0xA8
  lwz       r3, 0x2C(r27)
  bl        0x1D058
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1D0
  lwz       r0, 0x44(r28)
  cmplwi    r0, 0
  bne-      .loc_0x1D0
  lwz       r3, 0x0(r28)
  lfs       f0, -0x4F20(r2)
  lfs       f1, 0x4(r3)
  lfs       f2, 0xC(r3)
  fsubs     f1, f1, f2
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1D0
  stfs      f2, 0x4(r3)
  lwz       r3, 0x4(r28)
  lfs       f2, 0x4(r3)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x138
  lfs       f1, 0x8(r28)
  fneg      f2, f2
  lfs       f0, -0x4F08(r2)
  fsubs     f0, f1, f0
  fmuls     f0, f2, f0
  stfs      f0, 0x4(r3)

.loc_0x138:
  lwz       r3, 0x0(r28)
  addi      r0, r27, 0x40
  lfs       f2, -0x4F20(r2)
  lfs       f0, 0x0(r3)
  lfs       f1, -0x4F08(r2)
  stfs      f0, 0x14(r1)
  lfs       f3, 0x4(r3)
  stfs      f3, 0x18(r1)
  lfs       f0, 0x8(r3)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0xC(r3)
  fsubs     f0, f3, f0
  stfs      f0, 0x18(r1)
  stw       r0, 0x44(r28)
  stfs      f2, 0x50(r28)
  stfs      f1, 0x54(r28)
  stfs      f2, 0x58(r28)
  stfs      f2, 0x78(r28)
  stfs      f1, 0x7C(r28)
  stfs      f2, 0x80(r28)
  lfs       f0, 0x14(r1)
  stfs      f0, 0x84(r28)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x88(r28)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x8C(r28)
  lwz       r3, 0x10(r28)
  cmplwi    r3, 0
  beq-      .loc_0x1D0
  stfs      f2, 0x8(r1)
  addi      r4, r1, 0x14
  addi      r5, r1, 0x8
  stfs      f1, 0xC(r1)
  stfs      f2, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x1D0:
  mr        r3, r30
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  lmw       r27, 0x2C(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	801B9D90
 * Size:	000024
 */
void hasHiddenCollision__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2C(r3)
  bl        0x1CF30
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801B9DB4
 * Size:	00008C
 */
void constraintBoundBox__Q24Game10RoomMapMgrFRQ23Sys6Sphere(void)
{
/*
.loc_0x0:
  lfs       f3, 0x0(r4)
  lfs       f1, 0xC(r4)
  lfs       f2, 0xDC(r3)
  fsubs     f0, f3, f1
  fcmpo     cr0, f0, f2
  cror      2, 0, 0x2
  bne-      .loc_0x28
  fadds     f0, f2, f1
  stfs      f0, 0x0(r4)
  b         .loc_0x44

.loc_0x28:
  fadds     f0, f3, f1
  lfs       f2, 0xE8(r3)
  fcmpo     cr0, f0, f2
  cror      2, 0x1, 0x2
  bne-      .loc_0x44
  fsubs     f0, f2, f1
  stfs      f0, 0x0(r4)

.loc_0x44:
  lfs       f3, 0x8(r4)
  lfs       f1, 0xC(r4)
  lfs       f2, 0xE4(r3)
  fsubs     f0, f3, f1
  fcmpo     cr0, f0, f2
  cror      2, 0, 0x2
  bne-      .loc_0x6C
  fadds     f0, f2, f1
  stfs      f0, 0x8(r4)
  blr       

.loc_0x6C:
  fadds     f0, f3, f1
  lfs       f2, 0xF0(r3)
  fcmpo     cr0, f0, f2
  cror      2, 0x1, 0x2
  bnelr-    
  fsubs     f0, f2, f1
  stfs      f0, 0x8(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801B9E40
 * Size:	0001F4
 */
void entryToMapRoomCellMgr__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  addi      r3, r3, 0xAC
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5D28
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x4C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C4

.loc_0x4C:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xB8

.loc_0x64:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xB8:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x64
  b         .loc_0x1C4

.loc_0xD8:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x6D30(r13)
  mr        r4, r3
  cmplwi    r0, 0
  beq-      .loc_0x108
  mr        r3, r0
  addi      r5, r4, 0x190
  bl        -0x61A24

.loc_0x108:
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x134
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C4

.loc_0x134:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1A8

.loc_0x154:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1A8:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x154

.loc_0x1C4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xD8
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801BA034
 * Size:	000128
 */
void findRoomIndex__Q24Game10RoomMapMgrFRQ23Sys6Sphere(void)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  addi      r3, r1, 0x20
  stw       r31, 0x8C(r1)
  stw       r30, 0x88(r1)
  mr        r30, r4
  bl        0x74350
  lwz       r5, -0x6D30(r13)
  li        r0, 0x1
  stb       r0, 0x3C(r1)
  addi      r3, r1, 0x40
  addi      r4, r1, 0x20
  stw       r5, 0x38(r1)
  bl        0x74374
  addi      r3, r1, 0x40
  bl        0x743E8
  b         .loc_0xFC

.loc_0x48:
  addi      r3, r1, 0x40
  bl        0x744C4
  lfs       f0, 0x0(r30)
  mr        r31, r3
  addi      r3, r31, 0x108
  addi      r4, r1, 0x14
  stfs      f0, 0x14(r1)
  addi      r5, r1, 0x8
  lfs       f0, 0x4(r30)
  stfs      f0, 0x18(r1)
  lfs       f0, 0x8(r30)
  stfs      f0, 0x1C(r1)
  bl        -0xCF4D4
  lfs       f2, 0x8(r1)
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lwz       r3, 0x138(r31)
  lfs       f6, 0xC(r30)
  lfs       f1, 0x7C(r3)
  lfs       f3, 0x84(r3)
  fsubs     f1, f1, f6
  lfs       f4, 0x88(r3)
  lfs       f5, 0x90(r3)
  fsubs     f3, f3, f6
  fadds     f4, f4, f6
  fcmpo     cr0, f1, f2
  fadds     f5, f5, f6
  cror      2, 0, 0x2
  bne-      .loc_0xF4
  fcmpo     cr0, f3, f0
  cror      2, 0, 0x2
  bne-      .loc_0xF4
  fcmpo     cr0, f2, f4
  cror      2, 0, 0x2
  bne-      .loc_0xF4
  fcmpo     cr0, f0, f5
  cror      2, 0, 0x2
  bne-      .loc_0xF4
  lha       r3, 0x184(r31)
  b         .loc_0x110

.loc_0xF4:
  addi      r3, r1, 0x40
  bl        0x743D4

.loc_0xFC:
  addi      r3, r1, 0x40
  bl        0x74400
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x48
  li        r3, -0x1

.loc_0x110:
  lwz       r0, 0x94(r1)
  lwz       r31, 0x8C(r1)
  lwz       r30, 0x88(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void createGlobalCollision__Q24Game7MapRoomFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801BA15C
 * Size:	0009FC
 */
void createGlobalCollision__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x140(r1)
  mflr      r0
  stw       r0, 0x144(r1)
  stmw      r18, 0x108(r1)
  mr        r31, r3
  lbz       r0, -0x7B94(r13)
  cmplwi    r0, 0
  bne-      .loc_0x208
  lwz       r3, -0x77D4(r13)
  bl        -0x1969A0
  li        r0, 0
  lis       r3, 0x804B
  addi      r4, r3, 0x5D28
  addi      r3, r31, 0xAC
  cmplwi    r0, 0
  stw       r4, 0x4C(r1)
  stw       r0, 0x58(r1)
  stw       r0, 0x50(r1)
  stw       r3, 0x54(r1)
  bne-      .loc_0x68
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x50(r1)
  b         .loc_0x1DC

.loc_0x68:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x50(r1)
  b         .loc_0xD4

.loc_0x80:
  lwz       r3, 0x54(r1)
  lwz       r4, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x58(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1DC
  lwz       r3, 0x54(r1)
  lwz       r4, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x50(r1)

.loc_0xD4:
  lwz       r12, 0x4C(r1)
  addi      r3, r1, 0x4C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x80
  b         .loc_0x1DC

.loc_0xF4:
  lwz       r3, 0x54(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r18, r3
  lwz       r3, 0x138(r3)
  addi      r4, r18, 0xD8
  addi      r3, r3, 0x10
  bl        0x25FEA0
  stw       r3, 0xB8(r18)
  lwz       r0, 0x58(r1)
  cmplwi    r0, 0
  bne-      .loc_0x14C
  lwz       r3, 0x54(r1)
  lwz       r4, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x50(r1)
  b         .loc_0x1DC

.loc_0x14C:
  lwz       r3, 0x54(r1)
  lwz       r4, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x50(r1)
  b         .loc_0x1C0

.loc_0x16C:
  lwz       r3, 0x54(r1)
  lwz       r4, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x58(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1DC
  lwz       r3, 0x54(r1)
  lwz       r4, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x50(r1)

.loc_0x1C0:
  lwz       r12, 0x4C(r1)
  addi      r3, r1, 0x4C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x16C

.loc_0x1DC:
  lwz       r3, 0x54(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x50(r1)
  cmplw     r4, r3
  bne+      .loc_0xF4
  lwz       r3, -0x77D4(r13)
  bl        -0x196B7C
  b         .loc_0x9E8

.loc_0x208:
  lwz       r3, -0x77D4(r13)
  bl        -0x196B88
  li        r3, 0x50
  bl        -0x1964CC
  mr.       r29, r3
  beq-      .loc_0x290
  bl        0x257014
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r0, r4, 0x5324
  lis       r4, 0x804B
  stw       r0, 0x0(r29)
  addi      r0, r3, 0x2C
  lis       r3, 0x804F
  li        r6, 0
  stw       r0, 0x0(r29)
  subi      r5, r4, 0x1C
  li        r4, 0x1
  subi      r0, r3, 0x4A40
  stb       r6, 0x18(r29)
  lfs       f1, -0x4F1C(r2)
  stw       r5, 0x0(r29)
  lfs       f0, -0x4F18(r2)
  stb       r4, 0x18(r29)
  stw       r6, 0x20(r29)
  stw       r6, 0x1C(r29)
  stw       r6, 0x24(r29)
  stw       r0, 0x0(r29)
  stfs      f1, 0x28(r29)
  stfs      f1, 0x2C(r29)
  stfs      f1, 0x30(r29)
  stfs      f0, 0x34(r29)
  stfs      f0, 0x38(r29)
  stfs      f0, 0x3C(r29)

.loc_0x290:
  li        r3, 0x28
  bl        -0x19654C
  mr.       r28, r3
  beq-      .loc_0x2A8
  bl        0x25F580
  mr        r28, r3

.loc_0x2A8:
  lfs       f1, -0x4F1C(r2)
  li        r0, 0
  lfs       f0, -0x4F18(r2)
  lis       r3, 0x804B
  addi      r4, r3, 0x5D28
  addi      r3, r31, 0xAC
  cmplwi    r0, 0
  stfs      f1, 0x5C(r1)
  li        r22, 0
  li        r23, 0
  stfs      f1, 0x60(r1)
  stfs      f1, 0x64(r1)
  stfs      f0, 0x68(r1)
  stfs      f0, 0x6C(r1)
  stfs      f0, 0x70(r1)
  stw       r4, 0x3C(r1)
  stw       r0, 0x48(r1)
  stw       r0, 0x40(r1)
  stw       r3, 0x44(r1)
  bne-      .loc_0x310
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)
  b         .loc_0x48C

.loc_0x310:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)
  b         .loc_0x37C

.loc_0x328:
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x48(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x48C
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)

.loc_0x37C:
  lwz       r12, 0x3C(r1)
  addi      r3, r1, 0x3C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x328
  b         .loc_0x48C

.loc_0x39C:
  lwz       r3, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x138(r3)
  lwz       r0, 0x48(r1)
  lwz       r3, 0x28(r3)
  cmplwi    r0, 0
  lwz       r4, 0x18(r3)
  lwz       r3, 0x1C(r3)
  lwz       r4, 0x20(r4)
  lwz       r0, 0x20(r3)
  add       r22, r22, r4
  add       r23, r23, r0
  bne-      .loc_0x3FC
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)
  b         .loc_0x48C

.loc_0x3FC:
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)
  b         .loc_0x470

.loc_0x41C:
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x48(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x48C
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)

.loc_0x470:
  lwz       r12, 0x3C(r1)
  addi      r3, r1, 0x3C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x41C

.loc_0x48C:
  lwz       r3, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x40(r1)
  cmplw     r4, r3
  bne+      .loc_0x39C
  mr        r3, r29
  mr        r4, r22
  lwz       r12, 0x0(r29)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r28
  mr        r4, r23
  lwz       r12, 0x0(r28)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r23, 0x38(r31)
  lwz       r0, 0x38(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x196698
  stw       r3, 0x3C(r31)
  li        r18, 0
  b         .loc_0x51C

.loc_0x4F8:
  addi      r3, r1, 0x74
  bl        0x25C298
  mr        r3, r28
  addi      r4, r1, 0x74
  lwz       r12, 0x0(r28)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  addi      r18, r18, 0x1

.loc_0x51C:
  cmpw      r18, r23
  blt+      .loc_0x4F8
  li        r0, 0
  lis       r3, 0x804B
  addi      r4, r3, 0x5D28
  addi      r3, r31, 0xAC
  cmplwi    r0, 0
  stw       r4, 0x2C(r1)
  li        r21, 0
  li        r20, 0
  stw       r0, 0x38(r1)
  stw       r0, 0x30(r1)
  stw       r3, 0x34(r1)
  bne-      .loc_0x56C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x30(r1)
  b         .loc_0x5F4

.loc_0x56C:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x30(r1)
  b         .loc_0x5D8

.loc_0x584:
  lwz       r3, 0x34(r1)
  lwz       r4, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x38(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x5F4
  lwz       r3, 0x34(r1)
  lwz       r4, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x30(r1)

.loc_0x5D8:
  lwz       r12, 0x2C(r1)
  addi      r3, r1, 0x2C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x584

.loc_0x5F4:
  li        r23, 0
  mr        r22, r23
  b         .loc_0x808

.loc_0x600:
  lwz       r3, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  li        r24, 0
  lwz       r3, 0x138(r3)
  addi      r25, r30, 0xD8
  li        r18, 0
  lwz       r3, 0x28(r3)
  lwz       r26, 0x18(r3)
  lwz       r19, 0x1C(r3)
  b         .loc_0x6A4

.loc_0x638:
  lwz       r0, 0x24(r26)
  mr        r3, r25
  addi      r4, r1, 0x20
  addi      r5, r1, 0x8
  add       r6, r0, r18
  lfs       f0, 0x0(r6)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x4(r6)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x8(r6)
  stfs      f0, 0x28(r1)
  bl        -0xCFBE8
  lfs       f2, 0x8(r1)
  mr        r3, r29
  lfs       f1, 0xC(r1)
  addi      r4, r1, 0x14
  lfs       f0, 0x10(r1)
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  addi      r21, r21, 0x1
  addi      r18, r18, 0xC
  addi      r24, r24, 0x1

.loc_0x6A4:
  lwz       r0, 0x20(r26)
  cmpw      r24, r0
  blt+      .loc_0x638
  mr        r26, r23
  mr        r24, r22
  li        r18, 0
  li        r25, 0
  b         .loc_0x73C

.loc_0x6C4:
  lwz       r0, 0x24(r19)
  mr        r4, r29
  lwz       r3, 0x24(r28)
  add       r5, r0, r25
  lwz       r0, 0x0(r5)
  add       r27, r3, r26
  mr        r3, r27
  add       r0, r0, r20
  stw       r0, 0x0(r27)
  lwz       r0, 0x4(r5)
  add       r0, r0, r20
  stw       r0, 0x4(r27)
  lwz       r0, 0x8(r5)
  add       r0, r0, r20
  stw       r0, 0x8(r27)
  lbz       r0, 0x5C(r5)
  stb       r0, 0x5C(r27)
  bl        0x25D410
  mr        r3, r27
  mr        r4, r29
  bl        0x25C0E8
  lha       r0, 0x184(r30)
  addi      r18, r18, 0x1
  lwz       r3, 0x3C(r31)
  addi      r26, r26, 0x60
  addi      r23, r23, 0x60
  addi      r22, r22, 0x4
  stwx      r0, r3, r24
  addi      r24, r24, 0x4
  addi      r25, r25, 0x60

.loc_0x73C:
  lwz       r0, 0x20(r19)
  cmpw      r18, r0
  blt+      .loc_0x6C4
  lwz       r0, 0x38(r1)
  mr        r20, r21
  cmplwi    r0, 0
  bne-      .loc_0x778
  lwz       r3, 0x34(r1)
  lwz       r4, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x30(r1)
  b         .loc_0x808

.loc_0x778:
  lwz       r3, 0x34(r1)
  lwz       r4, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x30(r1)
  b         .loc_0x7EC

.loc_0x798:
  lwz       r3, 0x34(r1)
  lwz       r4, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x38(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x808
  lwz       r3, 0x34(r1)
  lwz       r4, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x30(r1)

.loc_0x7EC:
  lwz       r12, 0x2C(r1)
  addi      r3, r1, 0x2C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x798

.loc_0x808:
  lwz       r3, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x30(r1)
  cmplw     r4, r3
  bne+      .loc_0x600
  lfs       f0, 0x28(r29)
  li        r3, 0x1C
  lfs       f2, -0x4EE8(r2)
  stfs      f0, 0x5C(r1)
  fsubs     f1, f0, f2
  lfs       f0, 0x2C(r29)
  stfs      f0, 0x60(r1)
  fsubs     f4, f0, f2
  lfs       f0, 0x30(r29)
  stfs      f0, 0x64(r1)
  fsubs     f5, f0, f2
  lfs       f0, 0x34(r29)
  stfs      f0, 0x68(r1)
  fadds     f0, f0, f2
  lfs       f3, 0x38(r29)
  stfs      f3, 0x6C(r1)
  fadds     f6, f3, f2
  lfs       f3, 0x3C(r29)
  fadds     f2, f3, f2
  stfs      f3, 0x70(r1)
  stfs      f1, 0x5C(r1)
  stfs      f4, 0x60(r1)
  stfs      f5, 0x64(r1)
  stfs      f0, 0x68(r1)
  stfs      f6, 0x6C(r1)
  stfs      f2, 0x70(r1)
  bl        -0x196B48
  mr.       r18, r3
  beq-      .loc_0x8AC
  bl        0x256998
  lis       r3, 0x804F
  subi      r0, r3, 0x4908
  stw       r0, 0x0(r18)

.loc_0x8AC:
  stw       r18, 0x34(r31)
  li        r3, 0x4C
  bl        -0x196B6C
  mr.       r18, r3
  beq-      .loc_0x90C
  bl        0x256974
  lis       r4, 0x804F
  lis       r3, 0x804F
  subi      r0, r4, 0x45F0
  lfs       f1, -0x4F1C(r2)
  stw       r0, 0x0(r18)
  subi      r3, r3, 0x493C
  lfs       f0, -0x4F18(r2)
  li        r0, 0
  stw       r3, 0x0(r18)
  stfs      f1, 0x2C(r18)
  stfs      f1, 0x30(r18)
  stfs      f1, 0x34(r18)
  stfs      f0, 0x38(r18)
  stfs      f0, 0x3C(r18)
  stfs      f0, 0x40(r18)
  stw       r0, 0x28(r18)
  stw       r0, 0x24(r18)
  stw       r0, 0x20(r18)

.loc_0x90C:
  lwz       r3, 0x34(r31)
  lis       r0, 0x4330
  stw       r0, 0xE0(r1)
  li        r5, 0x30
  lfd       f3, -0x4EF0(r2)
  li        r6, 0x30
  stw       r18, 0x18(r3)
  lfs       f2, -0x4EE4(r2)
  lfs       f4, 0x68(r1)
  lfs       f0, 0x5C(r1)
  lfs       f1, 0x70(r1)
  fsubs     f4, f4, f0
  lfs       f0, 0x64(r1)
  stw       r0, 0xF8(r1)
  fsubs     f0, f1, f0
  fabs      f1, f4
  fabs      f0, f0
  frsp      f1, f1
  frsp      f0, f0
  fctiwz    f1, f1
  fctiwz    f0, f0
  stfd      f1, 0xD8(r1)
  lwz       r0, 0xDC(r1)
  stfd      f0, 0xF0(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0xE4(r1)
  lwz       r0, 0xF4(r1)
  lfd       f0, 0xE0(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0xFC(r1)
  fsubs     f1, f0, f3
  lfd       f0, 0xF8(r1)
  fmuls     f1, f1, f2
  fsubs     f0, f0, f3
  fctiwz    f1, f1
  fmuls     f0, f0, f2
  stfd      f1, 0xE8(r1)
  fctiwz    f0, f0
  lwz       r0, 0xEC(r1)
  stfd      f0, 0x100(r1)
  cmpwi     r0, 0x30
  lwz       r3, 0x104(r1)
  bge-      .loc_0x9BC
  mr        r5, r0

.loc_0x9BC:
  cmpwi     r3, 0x30
  bge-      .loc_0x9C8
  mr        r6, r3

.loc_0x9C8:
  lwz       r3, 0x34(r31)
  mr        r7, r29
  mr        r8, r28
  addi      r4, r1, 0x5C
  lwz       r3, 0x18(r3)
  bl        0x25E0A8
  lwz       r3, -0x77D4(r13)
  bl        -0x197360

.loc_0x9E8:
  lmw       r18, 0x108(r1)
  lwz       r0, 0x144(r1)
  mtlr      r0
  addi      r1, r1, 0x140
  blr
*/
}

/*
 * --INFO--
 * Address:	801BAB58
 * Size:	0000B8
 */
void addOne__Q23Sys11VertexTableFR10Vector3<float>(void)
{
/*
.loc_0x0:
  lwz       r7, 0x1C(r3)
  lwz       r0, 0x20(r3)
  cmpw      r7, r0
  bge-      .loc_0x3C
  lwz       r6, 0x24(r3)
  addi      r5, r7, 0x1
  mulli     r0, r7, 0xC
  stw       r5, 0x1C(r3)
  lfs       f0, 0x0(r4)
  add       r5, r6, r0
  stfs      f0, 0x0(r5)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x4(r5)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x8(r5)

.loc_0x3C:
  lfs       f1, 0x0(r4)
  lfs       f0, 0x28(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x50
  stfs      f1, 0x28(r3)

.loc_0x50:
  lfs       f1, 0x4(r4)
  lfs       f0, 0x2C(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x64
  stfs      f1, 0x2C(r3)

.loc_0x64:
  lfs       f1, 0x8(r4)
  lfs       f0, 0x30(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x78
  stfs      f1, 0x30(r3)

.loc_0x78:
  lfs       f1, 0x0(r4)
  lfs       f0, 0x34(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x8C
  stfs      f1, 0x34(r3)

.loc_0x8C:
  lfs       f1, 0x4(r4)
  lfs       f0, 0x38(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xA0
  stfs      f1, 0x38(r3)

.loc_0xA0:
  lfs       f1, 0x8(r4)
  lfs       f0, 0x3C(r3)
  fcmpo     cr0, f1, f0
  blelr-    
  stfs      f1, 0x3C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801BAC10
 * Size:	0000E8
 */
void ArrayContainer<Sys::Triangle>::addOne(Sys::Triangle &)
{
/*
.loc_0x0:
  lwz       r7, 0x1C(r3)
  lwz       r0, 0x20(r3)
  cmpw      r7, r0
  bgelr-    
  lwz       r6, 0x24(r3)
  addi      r5, r7, 0x1
  mulli     r0, r7, 0x60
  stw       r5, 0x1C(r3)
  lwz       r3, 0x0(r4)
  add       r5, r6, r0
  lwz       r0, 0x4(r4)
  stw       r3, 0x0(r5)
  stw       r0, 0x4(r5)
  lwz       r0, 0x8(r4)
  stw       r0, 0x8(r5)
  lfs       f0, 0xC(r4)
  stfs      f0, 0xC(r5)
  lfs       f0, 0x10(r4)
  stfs      f0, 0x10(r5)
  lfs       f0, 0x14(r4)
  stfs      f0, 0x14(r5)
  lfs       f0, 0x18(r4)
  stfs      f0, 0x18(r5)
  lfs       f0, 0x1C(r4)
  stfs      f0, 0x1C(r5)
  lfs       f0, 0x20(r4)
  stfs      f0, 0x20(r5)
  lfs       f0, 0x24(r4)
  stfs      f0, 0x24(r5)
  lfs       f0, 0x28(r4)
  stfs      f0, 0x28(r5)
  lfs       f0, 0x2C(r4)
  stfs      f0, 0x2C(r5)
  lfs       f0, 0x30(r4)
  stfs      f0, 0x30(r5)
  lfs       f0, 0x34(r4)
  stfs      f0, 0x34(r5)
  lfs       f0, 0x38(r4)
  stfs      f0, 0x38(r5)
  lfs       f0, 0x3C(r4)
  stfs      f0, 0x3C(r5)
  lfs       f0, 0x40(r4)
  stfs      f0, 0x40(r5)
  lfs       f0, 0x44(r4)
  stfs      f0, 0x44(r5)
  lfs       f0, 0x48(r4)
  stfs      f0, 0x48(r5)
  lfs       f0, 0x4C(r4)
  stfs      f0, 0x4C(r5)
  lfs       f0, 0x50(r4)
  stfs      f0, 0x50(r5)
  lfs       f0, 0x54(r4)
  stfs      f0, 0x54(r5)
  lfs       f0, 0x58(r4)
  stfs      f0, 0x58(r5)
  lbz       r0, 0x5C(r4)
  stb       r0, 0x5C(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	801BACF8
 * Size:	000068
 */
void ArrayContainer<Sys::Triangle>::alloc(int)
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
  mulli     r3, r31, 0x60
  addi      r3, r3, 0x10
  bl        -0x196D70
  lis       r4, 0x8041
  mr        r7, r31
  addi      r4, r4, 0x68F0
  li        r5, 0
  li        r6, 0x60
  bl        -0xF9344
  stw       r3, 0x24(r30)
  li        r0, 0
  stw       r31, 0x20(r30)
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
 * Address:	801BAD60
 * Size:	000328
 */
void traceMove_new__Q24Game10RoomMapMgrFRQ24Game8MoveInfof(void)
{
/*
.loc_0x0:
  stwu      r1, -0xE0(r1)
  mflr      r0
  stw       r0, 0xE4(r1)
  stfd      f31, 0xD0(r1)
  psq_st    f31,0xD8(r1),0,0
  stfd      f30, 0xC0(r1)
  psq_st    f30,0xC8(r1),0,0
  stfd      f29, 0xB0(r1)
  psq_st    f29,0xB8(r1),0,0
  stfd      f28, 0xA0(r1)
  psq_st    f28,0xA8(r1),0,0
  stfd      f27, 0x90(r1)
  psq_st    f27,0x98(r1),0,0
  stfd      f26, 0x80(r1)
  psq_st    f26,0x88(r1),0,0
  stmw      r20, 0x50(r1)
  mr        r21, r4
  mr        r20, r3
  lwz       r25, 0x4(r4)
  lwz       r26, 0x0(r4)
  lfs       f0, 0x0(r25)
  lfs       f2, 0x4(r25)
  mr        r4, r26
  fmuls     f0, f0, f1
  lfs       f26, 0x0(r26)
  lfs       f3, 0x8(r25)
  fmuls     f2, f2, f1
  lfs       f27, 0x4(r26)
  fadds     f0, f26, f0
  lfs       f28, 0x8(r26)
  fmuls     f1, f3, f1
  fadds     f2, f27, f2
  stfs      f26, 0x8(r1)
  stfs      f0, 0x0(r26)
  fadds     f0, f28, f1
  stfs      f2, 0x4(r26)
  stfs      f0, 0x8(r26)
  lfs       f1, 0x4(r26)
  lfs       f2, 0x8(r26)
  lfs       f0, 0x0(r26)
  stfs      f27, 0xC(r1)
  stfs      f0, 0x0(r26)
  stfs      f1, 0x4(r26)
  stfs      f2, 0x8(r26)
  lwz       r3, 0x34(r3)
  stfs      f28, 0x10(r1)
  lwz       r3, 0x18(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x34(r20)
  addi      r29, r1, 0x44
  addi      r28, r1, 0x34
  mr        r24, r3
  lwz       r4, 0x18(r4)
  lwz       r23, 0x18(r4)
  b         .loc_0x2D8

.loc_0xE8:
  li        r22, 0
  li        r30, 0
  b         .loc_0x2C8

.loc_0xF4:
  lwz       r3, 0x34(r20)
  li        r0, 0
  lwz       r4, 0x24(r24)
  lwz       r3, 0x18(r3)
  lwzx      r27, r4, r30
  lwz       r4, 0x1C(r3)
  mulli     r3, r27, 0x60
  lwz       r4, 0x24(r4)
  stb       r0, 0x30(r1)
  add       r31, r4, r3
  stfs      f26, 0x14(r1)
  stfs      f27, 0x18(r1)
  stfs      f28, 0x1C(r1)
  lfs       f0, 0x0(r26)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x4(r26)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x8(r26)
  stfs      f0, 0x28(r1)
  lfs       f0, 0xC(r26)
  stfs      f0, 0x2C(r1)
  lbz       r0, 0x19(r21)
  cmplwi    r0, 0
  beq-      .loc_0x15C
  li        r0, 0x1
  stb       r0, 0x30(r1)

.loc_0x15C:
  mr        r3, r31
  mr        r4, r23
  addi      r5, r1, 0x14
  bl        0x261B04
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2B8
  lwz       r3, 0x3C(r20)
  rlwinm    r0,r27,2,0,29
  lwzx      r0, r3, r0
  stw       r0, 0x98(r21)
  lfs       f1, 0x48(r1)
  lfs       f0, 0x4C(r1)
  stfs      f1, 0x48(r1)
  lfs       f31, 0x0(r28)
  stfs      f0, 0x4C(r1)
  lfs       f30, 0x38(r1)
  lwz       r3, 0x10(r21)
  lfs       f29, 0x3C(r1)
  cmplwi    r3, 0
  beq-      .loc_0x1C4
  lwz       r12, 0x0(r3)
  mr        r4, r29
  mr        r5, r28
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x1C4:
  lfs       f1, 0x38(r1)
  lfs       f0, 0x30(r21)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x1F8
  stw       r31, 0x44(r21)
  lfs       f0, 0x0(r28)
  stfs      f0, 0x50(r21)
  lfs       f0, 0x38(r1)
  stfs      f0, 0x54(r21)
  lfs       f0, 0x3C(r1)
  stfs      f0, 0x58(r21)
  b         .loc_0x22C

.loc_0x1F8:
  fabs      f1, f1
  lfs       f0, 0x2C(r21)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x22C
  stw       r31, 0x48(r21)
  lfs       f0, 0x0(r28)
  stfs      f0, 0x5C(r21)
  lfs       f0, 0x38(r1)
  stfs      f0, 0x60(r21)
  lfs       f0, 0x3C(r1)
  stfs      f0, 0x64(r21)

.loc_0x22C:
  lfs       f4, 0x38(r1)
  lfs       f7, 0x4(r25)
  lfs       f5, 0x0(r28)
  fmuls     f0, f4, f7
  lfs       f8, 0x0(r25)
  lfs       f3, 0x3C(r1)
  lfs       f6, 0x8(r25)
  fmadds    f2, f5, f8, f0
  lfs       f1, -0x4F08(r2)
  lfs       f0, 0x8(r21)
  fmadds    f2, f3, f6, f2
  fadds     f0, f1, f0
  fmuls     f2, f0, f2
  fmuls     f1, f5, f2
  fmuls     f0, f4, f2
  fmuls     f3, f3, f2
  fsubs     f2, f8, f1
  fsubs     f1, f7, f0
  fsubs     f0, f6, f3
  stfs      f2, 0x0(r25)
  stfs      f1, 0x4(r25)
  stfs      f0, 0x8(r25)
  lfs       f4, 0x40(r1)
  lfs       f1, 0x0(r26)
  fmuls     f0, f31, f4
  lfs       f3, 0x4(r26)
  fmuls     f2, f30, f4
  lfs       f5, 0x8(r26)
  fmuls     f4, f29, f4
  fadds     f0, f1, f0
  fadds     f1, f3, f2
  fadds     f2, f5, f4
  stfs      f0, 0x0(r26)
  stfs      f1, 0x4(r26)
  stfs      f2, 0x8(r26)

.loc_0x2B8:
  li        r0, 0
  addi      r22, r22, 0x1
  stb       r0, -0x6530(r13)
  addi      r30, r30, 0x4

.loc_0x2C8:
  lwz       r0, 0x1C(r24)
  cmpw      r22, r0
  blt+      .loc_0xF4
  lwz       r24, 0x4(r24)

.loc_0x2D8:
  cmplwi    r24, 0
  bne+      .loc_0xE8
  li        r3, 0
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  psq_l     f29,0xB8(r1),0,0
  lfd       f29, 0xB0(r1)
  psq_l     f28,0xA8(r1),0,0
  lfd       f28, 0xA0(r1)
  psq_l     f27,0x98(r1),0,0
  lfd       f27, 0x90(r1)
  psq_l     f26,0x88(r1),0,0
  lfd       f26, 0x80(r1)
  lmw       r20, 0x50(r1)
  lwz       r0, 0xE4(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	801BB088
 * Size:	000740
 */
void traceMove_original__Q24Game10RoomMapMgrFRQ24Game8MoveInfof(void)
{
/*
.loc_0x0:
  stwu      r1, -0x150(r1)
  mflr      r0
  lis       r6, 0x804B
  li        r5, 0
  stw       r0, 0x154(r1)
  addi      r6, r6, 0x5D28
  addi      r0, r3, 0xAC
  stmw      r14, 0x108(r1)
  mr        r15, r4
  li        r20, 0
  stw       r6, 0x38(r1)
  stw       r5, 0x44(r1)
  stw       r5, 0x3C(r1)
  stw       r0, 0x40(r1)
  lwz       r0, 0x4(r4)
  lwz       r19, 0x0(r4)
  mr        r3, r0
  stw       r0, 0xF4(r1)
  lfs       f0, 0x0(r3)
  lfs       f3, 0x4(r3)
  fmuls     f0, f0, f1
  lfs       f2, 0x0(r19)
  lfs       f5, 0x8(r3)
  fmuls     f3, f3, f1
  lfs       f4, 0x4(r19)
  fadds     f0, f2, f0
  fmuls     f1, f5, f1
  lfs       f5, 0x8(r19)
  fadds     f2, f4, f3
  stfs      f0, 0x0(r19)
  fadds     f1, f5, f1
  stfs      f2, 0x4(r19)
  stfs      f1, 0x8(r19)
  lwz       r0, 0x44(r1)
  cmplwi    r0, 0
  bne-      .loc_0xAC
  lwz       r3, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)
  b         .loc_0x138

.loc_0xAC:
  lwz       r3, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)
  b         .loc_0x11C

.loc_0xC8:
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x138
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)

.loc_0x11C:
  lwz       r12, 0x38(r1)
  addi      r3, r1, 0x38
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xC8

.loc_0x138:
  addi      r0, r1, 0x68
  stw       r0, 0xF8(r1)
  addi      r0, r1, 0x88
  stw       r0, 0xFC(r1)
  addi      r0, r1, 0x48
  lwz       r14, 0xF8(r1)
  mr        r21, r0
  stw       r0, 0x100(r1)
  lwz       r22, 0xFC(r1)
  b         .loc_0x524

.loc_0x160:
  lwz       r3, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  lfs       f0, 0x8(r19)
  lfs       f1, 0x148(r3)
  lfs       f3, 0x140(r3)
  fsubs     f4, f1, f0
  lfs       f0, 0x0(r19)
  lfs       f2, 0x14C(r3)
  lfs       f1, 0xC(r19)
  fsubs     f3, f3, f0
  fmuls     f0, f4, f4
  fadds     f2, f2, f1
  fmadds    f1, f3, f3, f0
  fmuls     f0, f2, f2
  fcmpo     cr0, f1, f0
  bgt-      .loc_0x468
  lwz       r0, 0x138(r31)
  mr        r4, r19
  addi      r3, r31, 0x108
  addi      r5, r1, 0x20
  stw       r0, 0xF0(r1)
  bl        -0xD0674
  lfs       f1, 0x24(r1)
  mr        r4, r19
  lfs       f2, 0x28(r1)
  lfs       f0, 0x20(r1)
  lwz       r3, 0xF0(r1)
  stfs      f0, 0x0(r19)
  stfs      f1, 0x4(r19)
  stfs      f2, 0x8(r19)
  lwz       r3, 0x28(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r25, r14
  mr        r24, r22
  mr        r18, r3
  mr        r23, r21
  b         .loc_0x430

.loc_0x210:
  lwz       r3, 0xF0(r1)
  mr        r28, r25
  mr        r27, r24
  mr        r26, r23
  lwz       r3, 0x28(r3)
  li        r16, 0
  li        r29, 0
  lwz       r17, 0x18(r3)
  b         .loc_0x420

.loc_0x234:
  lwz       r3, 0xF0(r1)
  lwz       r4, 0x24(r18)
  lwz       r5, 0x28(r3)
  lwzx      r3, r4, r29
  lwz       r4, 0x1C(r5)
  lbz       r0, 0x19(r15)
  mulli     r3, r3, 0x60
  lwz       r4, 0x24(r4)
  cmplwi    r0, 0
  add       r30, r4, r3
  beq-      .loc_0x278
  mr        r3, r30
  mr        r4, r17
  mr        r5, r19
  addi      r6, r15, 0x84
  bl        0x25C598
  b         .loc_0x28C

.loc_0x278:
  mr        r3, r30
  mr        r4, r17
  mr        r5, r19
  addi      r6, r15, 0x84
  bl        0x25C288

.loc_0x28C:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x410
  addi      r3, r31, 0xD8
  addi      r4, r15, 0x84
  addi      r5, r1, 0x14
  bl        -0xD0750
  lfs       f1, 0x18(r1)
  lfs       f2, 0x1C(r1)
  lfs       f0, 0x14(r1)
  stfs      f0, 0x84(r15)
  stfs      f1, 0x88(r15)
  stfs      f2, 0x8C(r15)
  lfs       f8, 0xC(r30)
  stfs      f8, 0x2C(r1)
  lfs       f7, 0x10(r30)
  stfs      f7, 0x30(r1)
  lfs       f6, 0x14(r30)
  stfs      f6, 0x34(r1)
  lfs       f2, 0x118(r31)
  lfs       f1, 0x11C(r31)
  lfs       f0, 0x120(r31)
  fmuls     f4, f7, f2
  lfs       f5, 0x108(r31)
  fmuls     f2, f7, f1
  lfs       f3, 0x10C(r31)
  fmuls     f0, f7, f0
  lfs       f1, 0x110(r31)
  fmadds    f4, f8, f5, f4
  lfs       f5, 0x128(r31)
  fmadds    f2, f8, f3, f2
  lfs       f3, 0x12C(r31)
  fmadds    f0, f8, f1, f0
  lfs       f1, 0x130(r31)
  fmadds    f4, f6, f5, f4
  fmadds    f2, f6, f3, f2
  fmadds    f0, f6, f1, f0
  stfs      f4, 0x2C(r1)
  stfs      f2, 0x30(r1)
  stfs      f0, 0x34(r1)
  lwz       r3, 0x10(r15)
  cmplwi    r3, 0
  beq-      .loc_0x34C
  lwz       r12, 0x0(r3)
  addi      r4, r15, 0x84
  addi      r5, r1, 0x2C
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x34C:
  cmpwi     r20, 0x8
  bge-      .loc_0x410
  blt-      .loc_0x374
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x30C
  li        r4, 0xB28
  subi      r5, r5, 0x114
  crclr     6, 0x6
  bl        -0x190DB8

.loc_0x374:
  lfs       f1, 0x4(r19)
  li        r0, 0x1
  lfs       f0, 0x10(r30)
  addi      r25, r25, 0x4
  lfs       f9, 0x2C(r1)
  addi      r24, r24, 0xC
  fmuls     f0, f1, f0
  lfs       f3, 0x0(r19)
  lfs       f2, 0xC(r30)
  addi      r23, r23, 0x4
  lfs       f8, 0x30(r1)
  addi      r14, r14, 0x4
  lfs       f7, 0x34(r1)
  fmadds    f0, f3, f2, f0
  lfs       f6, 0xC(r19)
  addi      r22, r22, 0xC
  lfs       f5, 0x8(r19)
  addi      r21, r21, 0x4
  lfs       f4, 0x14(r30)
  lfs       f1, 0x18(r30)
  addi      r20, r20, 0x1
  fmadds    f2, f5, f4, f0
  stfs      f9, 0x0(r27)
  stb       r0, 0x74(r15)
  fsubs     f1, f2, f1
  lfs       f0, 0x2C(r1)
  stfs      f8, 0x4(r27)
  fsubs     f1, f6, f1
  stfs      f0, 0x78(r15)
  lfs       f0, 0x30(r1)
  stw       r30, 0x0(r28)
  addi      r28, r28, 0x4
  stfs      f0, 0x7C(r15)
  lfs       f0, 0x34(r1)
  stfs      f7, 0x8(r27)
  addi      r27, r27, 0xC
  stfs      f1, 0x0(r26)
  addi      r26, r26, 0x4
  stfs      f0, 0x80(r15)

.loc_0x410:
  li        r0, 0
  addi      r16, r16, 0x1
  stb       r0, -0x6530(r13)
  addi      r29, r29, 0x4

.loc_0x420:
  lwz       r0, 0x1C(r18)
  cmpw      r16, r0
  blt+      .loc_0x234
  lwz       r18, 0x4(r18)

.loc_0x430:
  cmplwi    r18, 0
  beq-      .loc_0x440
  cmpwi     r20, 0x8
  blt+      .loc_0x210

.loc_0x440:
  mr        r4, r19
  addi      r3, r31, 0xD8
  addi      r5, r1, 0x8
  bl        -0xD08FC
  lfs       f1, 0xC(r1)
  lfs       f2, 0x10(r1)
  lfs       f0, 0x8(r1)
  stfs      f0, 0x0(r19)
  stfs      f1, 0x4(r19)
  stfs      f2, 0x8(r19)

.loc_0x468:
  lwz       r0, 0x44(r1)
  cmplwi    r0, 0
  bne-      .loc_0x494
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)
  b         .loc_0x524

.loc_0x494:
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)
  b         .loc_0x508

.loc_0x4B4:
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x524
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)

.loc_0x508:
  lwz       r12, 0x38(r1)
  addi      r3, r1, 0x38
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x4B4

.loc_0x524:
  lwz       r3, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x3C(r1)
  cmplw     r4, r3
  bne+      .loc_0x160
  cmpwi     r20, 0
  bne-      .loc_0x554
  li        r3, 0
  b         .loc_0x72C

.loc_0x554:
  lfs       f5, -0x4F20(r2)
  li        r4, 0
  fmr       f6, f5
  fmr       f7, f5
  fmr       f2, f5
  fmr       f4, f5
  mtctr     r20
  ble-      .loc_0x5F4
  lfs       f0, -0x4EE0(r2)

.loc_0x578:
  lwz       r3, 0x100(r1)
  lfs       f1, 0x0(r3)
  fcmpo     cr0, f1, f4
  blt-      .loc_0x5CC
  lwz       r3, 0xFC(r1)
  fadds     f2, f2, f1
  addi      r4, r4, 0x1
  lfs       f8, 0x4(r3)
  lfs       f3, 0x0(r3)
  lfs       f1, 0x8(r3)
  fadds     f6, f6, f8
  fcmpo     cr0, f8, f0
  fadds     f5, f5, f3
  fadds     f7, f7, f1
  ble-      .loc_0x5CC
  lwz       r3, 0xF8(r1)
  lwz       r0, 0x0(r3)
  stw       r0, 0x44(r15)
  stfs      f3, 0x50(r15)
  stfs      f8, 0x54(r15)
  stfs      f1, 0x58(r15)

.loc_0x5CC:
  lwz       r3, 0x100(r1)
  addi      r3, r3, 0x4
  stw       r3, 0x100(r1)
  lwz       r3, 0xFC(r1)
  addi      r3, r3, 0xC
  stw       r3, 0xFC(r1)
  lwz       r3, 0xF8(r1)
  addi      r3, r3, 0x4
  stw       r3, 0xF8(r1)
  bdnz+     .loc_0x578

.loc_0x5F4:
  cmpwi     r4, 0
  bne-      .loc_0x604
  li        r3, 0
  b         .loc_0x72C

.loc_0x604:
  xoris     r3, r4, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xEC(r1)
  lfd       f1, -0x4EF0(r2)
  stw       r0, 0xE8(r1)
  lfs       f4, -0x4F08(r2)
  lfd       f0, 0xE8(r1)
  lfs       f3, -0x4F20(r2)
  fsubs     f0, f0, f1
  fdivs     f4, f4, f0
  fmuls     f0, f6, f4
  fmuls     f1, f7, f4
  fmuls     f11, f5, f4
  fmuls     f4, f0, f0
  fmuls     f5, f1, f1
  fmadds    f4, f11, f11, f4
  fadds     f4, f5, f4
  fcmpo     cr0, f4, f3
  ble-      .loc_0x660
  ble-      .loc_0x664
  fsqrte    f3, f4
  fmuls     f4, f3, f4
  b         .loc_0x664

.loc_0x660:
  fmr       f4, f3

.loc_0x664:
  lfs       f3, -0x4F20(r2)
  fcmpo     cr0, f4, f3
  ble-      .loc_0x684
  lfs       f3, -0x4F08(r2)
  fdivs     f3, f3, f4
  fmuls     f11, f11, f3
  fmuls     f0, f0, f3
  fmuls     f1, f1, f3

.loc_0x684:
  xoris     r4, r4, 0x8000
  lis       r0, 0x4330
  stw       r4, 0xEC(r1)
  lwz       r3, 0xF4(r1)
  stw       r0, 0xE8(r1)
  lfd       f6, -0x4EF0(r2)
  lfd       f4, 0xE8(r1)
  lfs       f9, 0x4(r3)
  fsubs     f6, f4, f6
  lfs       f10, 0x0(r3)
  fmuls     f3, f0, f9
  lwz       r4, 0xF4(r1)
  lfs       f4, -0x4F08(r2)
  li        r3, 0
  fdivs     f2, f2, f6
  lfs       f8, 0x8(r4)
  fmadds    f5, f11, f10, f3
  lfs       f3, 0x8(r15)
  fmadds    f7, f1, f8, f5
  fadds     f5, f4, f3
  fmuls     f4, f0, f2
  fmuls     f3, f11, f2
  fmuls     f6, f5, f7
  fmuls     f2, f1, f2
  fmuls     f5, f11, f6
  fmuls     f0, f0, f6
  fmuls     f6, f1, f6
  fsubs     f5, f10, f5
  fsubs     f1, f9, f0
  fsubs     f0, f8, f6
  stfs      f5, 0x0(r4)
  stfs      f1, 0x4(r4)
  stfs      f0, 0x8(r4)
  lfs       f0, 0x0(r19)
  lfs       f1, 0x4(r19)
  lfs       f5, 0x8(r19)
  fadds     f0, f0, f3
  fadds     f1, f1, f4
  fadds     f2, f5, f2
  stfs      f0, 0x0(r19)
  stfs      f1, 0x4(r19)
  stfs      f2, 0x8(r19)

.loc_0x72C:
  lmw       r14, 0x108(r1)
  lwz       r0, 0x154(r1)
  mtlr      r0
  addi      r1, r1, 0x150
  blr
*/
}

/*
 * --INFO--
 * Address:	801BB7C8
 * Size:	0004F0
 */
void findRayIntersection__Q24Game10RoomMapMgrFRQ23Sys16RayIntersectInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x160(r1)
  mflr      r0
  stw       r0, 0x164(r1)
  stfd      f31, 0x150(r1)
  psq_st    f31,0x158(r1),0,0
  stfd      f30, 0x140(r1)
  psq_st    f30,0x148(r1),0,0
  stfd      f29, 0x130(r1)
  psq_st    f29,0x138(r1),0,0
  stfd      f28, 0x120(r1)
  psq_st    f28,0x128(r1),0,0
  stfd      f27, 0x110(r1)
  psq_st    f27,0x118(r1),0,0
  stfd      f26, 0x100(r1)
  psq_st    f26,0x108(r1),0,0
  stfd      f25, 0xF0(r1)
  psq_st    f25,0xF8(r1),0,0
  stfd      f24, 0xE0(r1)
  psq_st    f24,0xE8(r1),0,0
  stfd      f23, 0xD0(r1)
  psq_st    f23,0xD8(r1),0,0
  stfd      f22, 0xC0(r1)
  psq_st    f22,0xC8(r1),0,0
  stfd      f21, 0xB0(r1)
  psq_st    f21,0xB8(r1),0,0
  stmw      r24, 0x90(r1)
  lis       r6, 0x804B
  li        r5, 0
  addi      r6, r6, 0x5D28
  addi      r0, r3, 0xAC
  stw       r6, 0x60(r1)
  mr        r30, r4
  lfs       f4, -0x4F04(r2)
  stw       r5, 0x6C(r1)
  lfs       f0, -0x4F20(r2)
  stw       r5, 0x64(r1)
  stw       r0, 0x68(r1)
  lfs       f2, 0x0(r4)
  stfs      f2, 0x54(r1)
  lfs       f1, 0x4(r4)
  stfs      f1, 0x58(r1)
  lfs       f3, 0x8(r4)
  stfs      f3, 0x5C(r1)
  lfs       f1, 0xC(r4)
  stfs      f1, 0x48(r1)
  fadds     f1, f2, f1
  lfs       f2, 0x10(r4)
  fmuls     f30, f1, f4
  stfs      f2, 0x4C(r1)
  lfs       f1, 0x14(r4)
  stfs      f1, 0x50(r1)
  fadds     f3, f3, f1
  lfs       f2, 0x4(r4)
  lfs       f1, 0x10(r4)
  fmuls     f29, f3, f4
  lfs       f4, 0x0(r4)
  fsubs     f5, f2, f1
  lfs       f3, 0xC(r4)
  lfs       f2, 0x8(r4)
  lfs       f1, 0x14(r4)
  fsubs     f3, f4, f3
  fmuls     f4, f5, f5
  fsubs     f2, f2, f1
  fmadds    f1, f3, f3, f4
  fmuls     f2, f2, f2
  fadds     f31, f2, f1
  fcmpo     cr0, f31, f0
  ble-      .loc_0x120
  ble-      .loc_0x124
  fsqrte    f0, f31
  fmuls     f31, f0, f31
  b         .loc_0x124

.loc_0x120:
  fmr       f31, f0

.loc_0x124:
  lwz       r0, 0x6C(r1)
  li        r31, 0
  lfs       f22, -0x4EDC(r2)
  cmplwi    r0, 0
  bne-      .loc_0x154
  lwz       r3, 0x68(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x64(r1)
  b         .loc_0x454

.loc_0x154:
  lwz       r3, 0x68(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x64(r1)
  b         .loc_0x1C4

.loc_0x170:
  lwz       r3, 0x68(r1)
  lwz       r4, 0x64(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x6C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x454
  lwz       r3, 0x68(r1)
  lwz       r4, 0x64(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x64(r1)

.loc_0x1C4:
  lwz       r12, 0x60(r1)
  addi      r3, r1, 0x60
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x170
  b         .loc_0x454

.loc_0x1E4:
  lwz       r3, 0x68(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r29, r3
  lfs       f0, 0x148(r3)
  lfs       f1, 0x140(r3)
  fsubs     f3, f29, f0
  lfs       f0, 0x14C(r3)
  fsubs     f2, f30, f1
  fadds     f0, f0, f31
  fmuls     f1, f3, f3
  fmuls     f0, f0, f0
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bgt-      .loc_0x398
  lwz       r26, 0x138(r29)
  addi      r3, r29, 0x108
  addi      r4, r1, 0x54
  addi      r5, r1, 0x20
  bl        -0xD0E28
  lfs       f28, 0x20(r1)
  addi      r3, r29, 0x108
  lfs       f27, 0x24(r1)
  addi      r4, r1, 0x48
  lfs       f26, 0x28(r1)
  addi      r5, r1, 0x14
  bl        -0xD0E44
  lfs       f5, 0x18(r1)
  addi      r4, r1, 0x38
  lfs       f6, 0x1C(r1)
  lfs       f4, 0x14(r1)
  fadds     f1, f27, f5
  lfs       f2, -0x4F04(r2)
  fadds     f0, f26, f6
  fadds     f3, f28, f4
  stfs      f28, 0x70(r1)
  fmuls     f1, f1, f2
  fmuls     f0, f0, f2
  stfs      f27, 0x74(r1)
  fmuls     f2, f3, f2
  stfs      f26, 0x78(r1)
  stfs      f4, 0x7C(r1)
  stfs      f5, 0x80(r1)
  stfs      f6, 0x84(r1)
  stfs      f2, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stfs      f0, 0x40(r1)
  stfs      f31, 0x44(r1)
  lwz       r3, 0x28(r26)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r25, r3
  b         .loc_0x390

.loc_0x2C8:
  li        r24, 0
  li        r27, 0
  b         .loc_0x380

.loc_0x2D4:
  lwz       r4, 0x24(r25)
  mr        r3, r30
  lwz       r5, 0x28(r26)
  lwzx      r0, r4, r27
  lwz       r4, 0x1C(r5)
  mulli     r0, r0, 0x60
  lwz       r4, 0x24(r4)
  add       r28, r4, r0
  mr        r4, r28
  bl        0x25C67C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x378
  lfs       f1, 0x18(r30)
  mr        r3, r28
  addi      r4, r1, 0x70
  addi      r5, r1, 0x2C
  bl        0x25B16C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x378
  lfs       f1, 0x30(r1)
  li        r31, 0x1
  lfs       f0, 0x2C(r1)
  fsubs     f3, f1, f27
  lfs       f1, 0x34(r1)
  fsubs     f2, f0, f28
  fsubs     f1, f1, f26
  fmuls     f0, f3, f3
  fmadds    f0, f2, f2, f0
  fmadds    f21, f1, f1, f0
  fcmpo     cr0, f21, f22
  bge-      .loc_0x378
  addi      r3, r29, 0xD8
  addi      r4, r1, 0x2C
  addi      r5, r1, 0x8
  bl        -0xD0F4C
  lfs       f25, 0x8(r1)
  fmr       f22, f21
  lfs       f24, 0xC(r1)
  lfs       f23, 0x10(r1)
  lfs       f0, 0x10(r28)
  stfs      f0, 0x48(r30)

.loc_0x378:
  addi      r27, r27, 0x4
  addi      r24, r24, 0x1

.loc_0x380:
  lwz       r0, 0x1C(r25)
  cmpw      r24, r0
  blt+      .loc_0x2D4
  lwz       r25, 0x4(r25)

.loc_0x390:
  cmplwi    r25, 0
  bne+      .loc_0x2C8

.loc_0x398:
  lwz       r0, 0x6C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x3C4
  lwz       r3, 0x68(r1)
  lwz       r4, 0x64(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x64(r1)
  b         .loc_0x454

.loc_0x3C4:
  lwz       r3, 0x68(r1)
  lwz       r4, 0x64(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x64(r1)
  b         .loc_0x438

.loc_0x3E4:
  lwz       r3, 0x68(r1)
  lwz       r4, 0x64(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x6C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x454
  lwz       r3, 0x68(r1)
  lwz       r4, 0x64(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x64(r1)

.loc_0x438:
  lwz       r12, 0x60(r1)
  addi      r3, r1, 0x60
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x3E4

.loc_0x454:
  lwz       r3, 0x68(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x64(r1)
  cmplw     r4, r3
  bne+      .loc_0x1E4
  stfs      f25, 0x34(r30)
  mr        r3, r31
  stfs      f24, 0x38(r30)
  stfs      f23, 0x3C(r30)
  psq_l     f31,0x158(r1),0,0
  lfd       f31, 0x150(r1)
  psq_l     f30,0x148(r1),0,0
  lfd       f30, 0x140(r1)
  psq_l     f29,0x138(r1),0,0
  lfd       f29, 0x130(r1)
  psq_l     f28,0x128(r1),0,0
  lfd       f28, 0x120(r1)
  psq_l     f27,0x118(r1),0,0
  lfd       f27, 0x110(r1)
  psq_l     f26,0x108(r1),0,0
  lfd       f26, 0x100(r1)
  psq_l     f25,0xF8(r1),0,0
  lfd       f25, 0xF0(r1)
  psq_l     f24,0xE8(r1),0,0
  lfd       f24, 0xE0(r1)
  psq_l     f23,0xD8(r1),0,0
  lfd       f23, 0xD0(r1)
  psq_l     f22,0xC8(r1),0,0
  lfd       f22, 0xC0(r1)
  psq_l     f21,0xB8(r1),0,0
  lfd       f21, 0xB0(r1)
  lmw       r24, 0x90(r1)
  lwz       r0, 0x164(r1)
  mtlr      r0
  addi      r1, r1, 0x160
  blr
*/
}

/*
 * --INFO--
 * Address:	801BBCB8
 * Size:	00008C
 */
void getMinY__Q24Game10RoomMapMgrFR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lfs       f1, -0x4F20(r2)
  li        r5, 0
  stw       r0, 0x44(r1)
  li        r0, 0x1
  lfs       f3, -0x4F10(r2)
  lfs       f2, -0x4F0C(r2)
  lfs       f0, -0x4F08(r2)
  stw       r5, 0x1C(r1)
  stfs      f3, 0x20(r1)
  stfs      f2, 0x24(r1)
  stw       r5, 0x18(r1)
  stfs      f1, 0x28(r1)
  stfs      f0, 0x2C(r1)
  stfs      f1, 0x30(r1)
  stb       r0, 0x14(r1)
  stb       r5, 0x15(r1)
  lfs       f0, 0x0(r4)
  stfs      f0, 0x8(r1)
  lfs       f0, 0x4(r4)
  stfs      f0, 0xC(r1)
  lfs       f0, 0x8(r4)
  addi      r4, r1, 0x8
  stfs      f0, 0x10(r1)
  stb       r5, 0x14(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x44(r1)
  lfs       f1, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	801BBD44
 * Size:	000770
 */
void createTriangles__Q24Game10RoomMapMgrFRQ23Sys17CreateTriangleArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x2CD0(r1)
  mflr      r0
  stw       r0, 0x2CD4(r1)
  li        r0, 0x2CC8
  stfd      f31, 0x2CC0(r1)
  vpkuhum   v31, v1, v0
  stmw      r14, 0x2C78(r1)
  mr        r15, r4
  lis       r4, 0x8012
  lfs       f31, 0xC(r15)
  mr        r14, r3
  subi      r4, r4, 0xCB8
  addi      r3, r1, 0x864
  li        r5, 0
  li        r6, 0xC
  li        r7, 0x300
  bl        -0xFA548
  li        r0, 0
  lis       r3, 0x804B
  addi      r4, r3, 0x5D28
  addi      r3, r14, 0xAC
  cmplwi    r0, 0
  stw       r4, 0x30(r1)
  li        r20, 0
  stw       r0, 0x3C(r1)
  stw       r0, 0x34(r1)
  stw       r3, 0x38(r1)
  bne-      .loc_0x88
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x110

.loc_0x88:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0xF4

.loc_0xA0:
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x110
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)

.loc_0xF4:
  lwz       r12, 0x30(r1)
  addi      r3, r1, 0x30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xA0

.loc_0x110:
  addi      r0, r1, 0x464
  addi      r14, r1, 0x64
  stw       r0, 0x2C68(r1)
  li        r0, 0
  stw       r0, 0x2C6C(r1)
  b         .loc_0x550

.loc_0x128:
  lwz       r3, 0x38(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  lfs       f1, 0x8(r15)
  lfs       f2, 0x198(r3)
  lfs       f0, 0x19C(r3)
  fsubs     f3, f2, f1
  lfs       f2, 0x190(r3)
  lfs       f1, 0x0(r15)
  fadds     f0, f0, f31
  fsubs     f2, f2, f1
  fmuls     f1, f3, f3
  fmuls     f0, f0, f0
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bgt-      .loc_0x494
  lwz       r0, 0x138(r31)
  mr        r4, r15
  addi      r3, r31, 0x108
  addi      r5, r1, 0x14
  stw       r0, 0x2C64(r1)
  bl        -0xD12F4
  lfs       f2, 0x14(r1)
  addi      r4, r1, 0x20
  lfs       f1, 0x18(r1)
  lfs       f0, 0x1C(r1)
  stfs      f2, 0x20(r1)
  lwz       r3, 0x2C64(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  stfs      f31, 0x2C(r1)
  lwz       r3, 0x28(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r24, 0x2C6C(r1)
  mr        r19, r3
  lwz       r23, 0x2C68(r1)
  mr        r22, r14
  b         .loc_0x48C

.loc_0x1D8:
  mr        r27, r24
  mr        r26, r23
  mr        r25, r22
  li        r18, 0
  li        r28, 0
  b         .loc_0x47C

.loc_0x1F0:
  lwz       r3, 0x2C64(r1)
  addi      r5, r1, 0x20
  lwz       r4, 0x24(r19)
  lwz       r6, 0x28(r3)
  lwzx      r0, r4, r28
  lwz       r3, 0x1C(r6)
  mulli     r0, r0, 0x60
  lwz       r17, 0x18(r6)
  lwz       r3, 0x24(r3)
  mr        r4, r17
  add       r30, r3, r0
  mr        r3, r30
  bl        0x25B388
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x474
  addi      r21, r1, 0x40
  mr        r29, r30
  li        r16, 0

.loc_0x238:
  lwz       r0, 0x0(r29)
  mr        r4, r21
  lwz       r6, 0x24(r17)
  addi      r3, r31, 0xD8
  mulli     r0, r0, 0xC
  addi      r5, r1, 0x8
  add       r6, r6, r0
  lfs       f0, 0x0(r6)
  stfs      f0, 0x0(r21)
  lfs       f0, 0x4(r6)
  stfs      f0, 0x4(r21)
  lfs       f0, 0x8(r6)
  stfs      f0, 0x8(r21)
  bl        -0xD13D8
  lfs       f0, 0x8(r1)
  addi      r16, r16, 0x1
  lfs       f1, 0xC(r1)
  cmpwi     r16, 0x3
  stfs      f0, 0x0(r21)
  addi      r29, r29, 0x4
  lfs       f0, 0x10(r1)
  stfs      f1, 0x4(r21)
  stfs      f0, 0x8(r21)
  addi      r21, r21, 0xC
  blt+      .loc_0x238
  addi      r3, r1, 0x464
  addi      r4, r1, 0x64
  li        r5, 0
  mtctr     r20
  cmpwi     r20, 0
  ble-      .loc_0x2DC

.loc_0x2B4:
  lwz       r0, 0x0(r3)
  cmplw     r30, r0
  bne-      .loc_0x2D0
  lwz       r0, 0x0(r4)
  cmplw     r31, r0
  bne-      .loc_0x2D0
  li        r5, 0x1

.loc_0x2D0:
  addi      r3, r3, 0x4
  addi      r4, r4, 0x4
  bdnz+     .loc_0x2B4

.loc_0x2DC:
  rlwinm.   r0,r5,0,24,31
  bne-      .loc_0x474
  cmpwi     r20, 0x100
  bge-      .loc_0x488
  lfs       f5, 0x10(r30)
  lfs       f1, 0xEC(r31)
  lfs       f3, 0xE8(r31)
  lfs       f0, 0xF0(r31)
  fmuls     f2, f5, f1
  lfs       f6, 0xC(r30)
  fmuls     f4, f5, f3
  lfs       f3, 0xDC(r31)
  fmuls     f0, f5, f0
  lfs       f5, 0xD8(r31)
  lfs       f1, 0xE0(r31)
  fmadds    f3, f6, f3, f2
  lfs       f7, 0x14(r30)
  fmadds    f5, f6, f5, f4
  lfs       f4, 0xFC(r31)
  fmadds    f1, f6, f1, f0
  lfs       f6, 0xF8(r31)
  lfs       f2, 0x100(r31)
  fmadds    f3, f7, f4, f3
  lfs       f0, 0x14(r15)
  fmadds    f4, f7, f6, f5
  fmadds    f1, f7, f2, f1
  fcmpo     cr0, f3, f0
  ble-      .loc_0x474
  lfs       f0, 0x10(r15)
  mulli     r3, r27, 0xC
  addi      r4, r1, 0x864
  stw       r30, 0x0(r26)
  fmuls     f11, f4, f0
  lfs       f4, 0x40(r1)
  fmuls     f10, f3, f0
  lfs       f5, 0x44(r1)
  add       r4, r4, r3
  fadds     f3, f4, f11
  fmuls     f9, f1, f0
  lfs       f6, 0x48(r1)
  fadds     f7, f5, f10
  stw       r31, 0x0(r25)
  frsp      f2, f3
  fadds     f8, f6, f9
  lfs       f4, 0x4C(r1)
  frsp      f1, f7
  stfs      f3, 0x40(r1)
  addi      r3, r3, 0xC
  fadds     f3, f4, f11
  stfs      f2, 0x0(r4)
  frsp      f0, f8
  lfs       f5, 0x50(r1)
  addi      r20, r20, 0x1
  stfs      f7, 0x44(r1)
  fadds     f7, f5, f10
  lfs       f6, 0x54(r1)
  stfs      f1, 0x4(r4)
  frsp      f2, f3
  lfs       f4, 0x58(r1)
  addi      r27, r27, 0x3
  stfs      f8, 0x48(r1)
  fadds     f8, f6, f9
  frsp      f1, f7
  lfs       f5, 0x5C(r1)
  stfs      f0, 0x8(r4)
  addi      r4, r1, 0x864
  add       r4, r4, r3
  stfs      f2, 0x0(r4)
  frsp      f0, f8
  lfs       f6, 0x60(r1)
  stfs      f3, 0x4C(r1)
  fadds     f3, f4, f11
  addi      r3, r3, 0xC
  addi      r26, r26, 0x4
  stfs      f1, 0x4(r4)
  frsp      f2, f3
  addi      r25, r25, 0x4
  addi      r24, r24, 0x3
  stfs      f7, 0x50(r1)
  fadds     f7, f5, f10
  addi      r23, r23, 0x4
  stfs      f0, 0x8(r4)
  addi      r4, r1, 0x864
  add       r4, r4, r3
  lwz       r3, 0x2C6C(r1)
  stfs      f8, 0x54(r1)
  fadds     f8, f6, f9
  addi      r3, r3, 0x3
  frsp      f1, f7
  stfs      f2, 0x0(r4)
  addi      r22, r22, 0x4
  frsp      f0, f8
  stw       r3, 0x2C6C(r1)
  addi      r14, r14, 0x4
  lwz       r3, 0x2C68(r1)
  stfs      f1, 0x4(r4)
  addi      r3, r3, 0x4
  stfs      f3, 0x58(r1)
  stfs      f7, 0x5C(r1)
  stfs      f8, 0x60(r1)
  stfs      f0, 0x8(r4)
  stw       r3, 0x2C68(r1)

.loc_0x474:
  addi      r28, r28, 0x4
  addi      r18, r18, 0x1

.loc_0x47C:
  lwz       r0, 0x1C(r19)
  cmpw      r18, r0
  blt+      .loc_0x1F0

.loc_0x488:
  lwz       r19, 0x4(r19)

.loc_0x48C:
  cmplwi    r19, 0
  bne+      .loc_0x1D8

.loc_0x494:
  lwz       r0, 0x3C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x4C0
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x550

.loc_0x4C0:
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x534

.loc_0x4E0:
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x550
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)

.loc_0x534:
  lwz       r12, 0x30(r1)
  addi      r3, r1, 0x30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x4E0

.loc_0x550:
  lwz       r3, 0x38(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x34(r1)
  cmplw     r4, r3
  bne+      .loc_0x128
  cmpwi     r20, 0
  ble-      .loc_0x74C
  mulli     r14, r20, 0x3
  mulli     r3, r14, 0xC
  addi      r3, r3, 0x10
  bl        -0x19831C
  lis       r4, 0x8012
  mr        r7, r14
  subi      r4, r4, 0xCB8
  li        r5, 0
  li        r6, 0xC
  bl        -0xFA8F0
  cmpwi     r14, 0
  stw       r3, 0x18(r15)
  li        r16, 0
  ble-      .loc_0x74C
  cmpwi     r14, 0x8
  subi      r3, r14, 0x8
  ble-      .loc_0x704
  addi      r0, r3, 0x7
  addi      r5, r1, 0x864
  rlwinm    r0,r0,29,3,31
  li        r4, 0
  mtctr     r0
  cmpwi     r3, 0
  ble-      .loc_0x704

.loc_0x5D8:
  lwz       r0, 0x18(r15)
  addi      r12, r4, 0xC
  lfs       f0, 0x0(r5)
  addi      r11, r4, 0x18
  add       r3, r0, r4
  addi      r10, r4, 0x24
  stfs      f0, 0x0(r3)
  addi      r9, r4, 0x30
  addi      r8, r4, 0x3C
  addi      r7, r4, 0x48
  lfs       f0, 0x4(r5)
  addi      r6, r4, 0x54
  addi      r4, r4, 0x60
  addi      r16, r16, 0x8
  stfs      f0, 0x4(r3)
  lfs       f0, 0x8(r5)
  stfs      f0, 0x8(r3)
  lwz       r0, 0x18(r15)
  lfs       f0, 0xC(r5)
  add       r12, r0, r12
  stfs      f0, 0x0(r12)
  lfs       f0, 0x10(r5)
  stfs      f0, 0x4(r12)
  lfs       f0, 0x14(r5)
  stfs      f0, 0x8(r12)
  lwz       r0, 0x18(r15)
  lfs       f0, 0x18(r5)
  add       r11, r0, r11
  stfs      f0, 0x0(r11)
  lfs       f0, 0x1C(r5)
  stfs      f0, 0x4(r11)
  lfs       f0, 0x20(r5)
  stfs      f0, 0x8(r11)
  lwz       r0, 0x18(r15)
  lfs       f0, 0x24(r5)
  add       r10, r0, r10
  stfs      f0, 0x0(r10)
  lfs       f0, 0x28(r5)
  stfs      f0, 0x4(r10)
  lfs       f0, 0x2C(r5)
  stfs      f0, 0x8(r10)
  lwz       r0, 0x18(r15)
  lfs       f0, 0x30(r5)
  add       r9, r0, r9
  stfs      f0, 0x0(r9)
  lfs       f0, 0x34(r5)
  stfs      f0, 0x4(r9)
  lfs       f0, 0x38(r5)
  stfs      f0, 0x8(r9)
  lwz       r0, 0x18(r15)
  lfs       f0, 0x3C(r5)
  add       r8, r0, r8
  stfs      f0, 0x0(r8)
  lfs       f0, 0x40(r5)
  stfs      f0, 0x4(r8)
  lfs       f0, 0x44(r5)
  stfs      f0, 0x8(r8)
  lwz       r0, 0x18(r15)
  lfs       f0, 0x48(r5)
  add       r7, r0, r7
  stfs      f0, 0x0(r7)
  lfs       f0, 0x4C(r5)
  stfs      f0, 0x4(r7)
  lfs       f0, 0x50(r5)
  stfs      f0, 0x8(r7)
  lwz       r0, 0x18(r15)
  lfs       f0, 0x54(r5)
  add       r6, r0, r6
  stfs      f0, 0x0(r6)
  lfs       f0, 0x58(r5)
  stfs      f0, 0x4(r6)
  lfs       f0, 0x5C(r5)
  addi      r5, r5, 0x60
  stfs      f0, 0x8(r6)
  bdnz+     .loc_0x5D8

.loc_0x704:
  mulli     r4, r16, 0xC
  addi      r3, r1, 0x864
  sub       r0, r14, r16
  add       r3, r3, r4
  mtctr     r0
  cmpw      r16, r14
  bge-      .loc_0x74C

.loc_0x720:
  lwz       r0, 0x18(r15)
  lfs       f0, 0x0(r3)
  add       r5, r0, r4
  addi      r4, r4, 0xC
  stfs      f0, 0x0(r5)
  lfs       f0, 0x4(r3)
  stfs      f0, 0x4(r5)
  lfs       f0, 0x8(r3)
  addi      r3, r3, 0xC
  stfs      f0, 0x8(r5)
  bdnz+     .loc_0x720

.loc_0x74C:
  stw       r20, 0x1C(r15)
  li        r0, 0x2CC8
  vmrghb    v31, v1, v0
  lfd       f31, 0x2CC0(r1)
  lmw       r14, 0x2C78(r1)
  lwz       r0, 0x2CD4(r1)
  mtlr      r0
  addi      r1, r1, 0x2CD0
  blr
*/
}

/*
 * --INFO--
 * Address:	801BC4B4
 * Size:	000460
 */
void getCurrTri__Q24Game10RoomMapMgrFRQ24Game11CurrTriInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lfs       f0, -0x4ED8(r2)
  stw       r0, 0x64(r1)
  li        r0, 0
  cmplwi    r0, 0
  stmw      r24, 0x40(r1)
  mr        r25, r3
  lis       r3, 0x804B
  mr        r26, r4
  stfs      f0, 0x18(r4)
  addi      r4, r3, 0x5D28
  addi      r3, r25, 0xAC
  stw       r4, 0x30(r1)
  stw       r0, 0x3C(r1)
  stw       r0, 0x34(r1)
  stw       r3, 0x38(r1)
  bne-      .loc_0x60
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x3E0

.loc_0x60:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0xCC

.loc_0x78:
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x3E0
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)

.loc_0xCC:
  lwz       r12, 0x30(r1)
  addi      r3, r1, 0x30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x78
  b         .loc_0x3E0

.loc_0xEC:
  lwz       r3, 0x38(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  lfs       f0, 0x8(r26)
  lfs       f1, 0x198(r3)
  lfs       f4, 0x19C(r3)
  fsubs     f3, f1, f0
  lfs       f2, 0x190(r3)
  lfs       f1, 0x0(r26)
  fmuls     f0, f4, f4
  fsubs     f2, f2, f1
  fmuls     f1, f3, f3
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bgt-      .loc_0x324
  lwz       r29, 0x138(r31)
  mr        r4, r26
  addi      r3, r31, 0x108
  addi      r5, r1, 0x8
  bl        -0xD1A20
  lfs       f3, 0x8(r1)
  addi      r4, r1, 0x14
  lfs       f2, 0xC(r1)
  lfs       f1, 0x10(r1)
  lfs       f0, -0x4F20(r2)
  stfs      f3, 0x24(r1)
  stfs      f2, 0x28(r1)
  stfs      f1, 0x2C(r1)
  stfs      f3, 0x14(r1)
  stfs      f2, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f0, 0x20(r1)
  lwz       r3, 0x28(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r28, r3
  b         .loc_0x31C

.loc_0x194:
  li        r27, 0
  li        r30, 0
  b         .loc_0x30C

.loc_0x1A0:
  lwz       r3, 0x24(r28)
  addi      r4, r1, 0x24
  lwz       r5, 0x28(r29)
  lwzx      r0, r3, r30
  lwz       r3, 0x1C(r5)
  mulli     r0, r0, 0x60
  lwz       r3, 0x24(r3)
  add       r24, r3, r0
  mr        r3, r24
  bl        0x25B510
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x304
  lfs       f10, 0x28(r1)
  lfs       f0, 0x18(r26)
  fcmpo     cr0, f0, f10
  ble-      .loc_0x26C
  stfs      f10, 0x18(r26)
  lbz       r0, 0xC(r26)
  cmplwi    r0, 0
  beq-      .loc_0x26C
  stw       r24, 0x14(r26)
  lfs       f0, 0xC(r24)
  stfs      f0, 0x20(r26)
  lfs       f0, 0x10(r24)
  stfs      f0, 0x24(r26)
  lfs       f0, 0x14(r24)
  stfs      f0, 0x28(r26)
  lfs       f7, 0x24(r26)
  lfs       f1, 0x118(r31)
  lfs       f0, 0x11C(r31)
  fmuls     f1, f7, f1
  lfs       f8, 0x20(r26)
  lfs       f4, 0x108(r31)
  fmuls     f2, f7, f0
  lfs       f0, 0x120(r31)
  lfs       f3, 0x10C(r31)
  fmadds    f5, f8, f4, f1
  lfs       f9, 0x28(r26)
  lfs       f6, 0x128(r31)
  fmuls     f0, f7, f0
  lfs       f1, 0x110(r31)
  fmadds    f3, f8, f3, f2
  lfs       f4, 0x12C(r31)
  fmadds    f5, f9, f6, f5
  lfs       f2, 0x130(r31)
  fmadds    f0, f8, f1, f0
  fmadds    f1, f9, f4, f3
  stfs      f5, 0x20(r26)
  fmadds    f0, f9, f2, f0
  stfs      f1, 0x24(r26)
  stfs      f0, 0x28(r26)

.loc_0x26C:
  lfs       f0, 0x1C(r26)
  fcmpo     cr0, f0, f10
  bge-      .loc_0x304
  stfs      f10, 0x1C(r26)
  lbz       r0, 0xC(r26)
  cmplwi    r0, 0
  bne-      .loc_0x304
  stw       r24, 0x14(r26)
  lfs       f0, 0xC(r24)
  stfs      f0, 0x20(r26)
  lfs       f0, 0x10(r24)
  stfs      f0, 0x24(r26)
  lfs       f0, 0x14(r24)
  stfs      f0, 0x28(r26)
  lfs       f7, 0x24(r26)
  lfs       f1, 0x118(r31)
  lfs       f0, 0x11C(r31)
  fmuls     f1, f7, f1
  lfs       f8, 0x20(r26)
  lfs       f4, 0x108(r31)
  fmuls     f2, f7, f0
  lfs       f0, 0x120(r31)
  lfs       f3, 0x10C(r31)
  fmadds    f5, f8, f4, f1
  lfs       f9, 0x28(r26)
  lfs       f6, 0x128(r31)
  fmuls     f0, f7, f0
  lfs       f1, 0x110(r31)
  fmadds    f3, f8, f3, f2
  lfs       f4, 0x12C(r31)
  fmadds    f5, f9, f6, f5
  lfs       f2, 0x130(r31)
  fmadds    f0, f8, f1, f0
  fmadds    f1, f9, f4, f3
  stfs      f5, 0x20(r26)
  fmadds    f0, f9, f2, f0
  stfs      f1, 0x24(r26)
  stfs      f0, 0x28(r26)

.loc_0x304:
  addi      r30, r30, 0x4
  addi      r27, r27, 0x1

.loc_0x30C:
  lwz       r0, 0x1C(r28)
  cmpw      r27, r0
  blt+      .loc_0x1A0
  lwz       r28, 0x4(r28)

.loc_0x31C:
  cmplwi    r28, 0
  bne+      .loc_0x194

.loc_0x324:
  lwz       r0, 0x3C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x350
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x3E0

.loc_0x350:
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x3C4

.loc_0x370:
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x3E0
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)

.loc_0x3C4:
  lwz       r12, 0x30(r1)
  addi      r3, r1, 0x30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x370

.loc_0x3E0:
  lwz       r3, 0x38(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x34(r1)
  cmplw     r4, r3
  bne+      .loc_0xEC
  lwz       r3, 0x2C(r25)
  bl        0x1A418
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x434
  lfs       f1, 0x1C(r26)
  lfs       f0, -0x4F20(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x434
  stfs      f0, 0x1C(r26)
  addi      r0, r25, 0x40
  stfs      f0, 0x18(r26)
  stw       r0, 0x14(r26)
  b         .loc_0x44C

.loc_0x434:
  lwz       r0, 0x14(r26)
  cmplwi    r0, 0
  bne-      .loc_0x44C
  lfs       f0, -0x4F20(r2)
  stfs      f0, 0x18(r26)
  stfs      f0, 0x1C(r26)

.loc_0x44C:
  lmw       r24, 0x40(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	801BC914
 * Size:	0016B8
 */
void makeOneRoom__Q24Game10RoomMapMgrFfffPcsPQ24Game8RoomLinkPQ24Game16ObjectLayoutInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x2D0(r1)
  mflr      r0
  stw       r0, 0x2D4(r1)
  stfd      f31, 0x2C0(r1)
  psq_st    f31,0x2C8(r1),0,0
  stfd      f30, 0x2B0(r1)
  psq_st    f30,0x2B8(r1),0,0
  stfd      f29, 0x2A0(r1)
  psq_st    f29,0x2A8(r1),0,0
  stfd      f28, 0x290(r1)
  psq_st    f28,0x298(r1),0,0
  stfd      f27, 0x280(r1)
  psq_st    f27,0x288(r1),0,0
  stmw      r20, 0x250(r1)
  mr        r29, r3
  lfs       f0, -0x4ED0(r2)
  addi      r3, r29, 0xAC
  lis       r8, 0x8048
  lwz       r12, 0xAC(r29)
  fmuls     f0, f0, f3
  lfs       f3, -0x4ED4(r2)
  fmr       f28, f1
  lwz       r12, 0x7C(r12)
  fmr       f27, f2
  fmuls     f31, f3, f0
  mr        r26, r4
  mr        r21, r5
  mr        r24, r6
  mr        r20, r7
  subi      r30, r8, 0x390
  mtctr     r12
  bctrl     
  mr        r31, r3
  lis       r4, 0x804B
  sth       r21, 0x184(r3)
  lis       r3, 0x804B
  subi      r23, r4, 0x5D0C
  li        r27, 0
  stw       r24, 0x180(r31)
  subi      r22, r3, 0x5D48
  stw       r20, 0xC4(r31)
  b         .loc_0x1B8

.loc_0xA8:
  lwz       r3, 0xC4(r31)
  mr        r5, r27
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  mr        r25, r3
  sth       r0, 0x8(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  stw       r23, 0x15C(r1)
  li        r8, 0
  li        r0, -0x1
  li        r7, 0xFF
  li        r6, 0x1
  sth       r3, 0x8(r1)
  lwz       r3, -0x6CE0(r13)
  addi      r4, r1, 0x15C
  stw       r22, 0x15C(r1)
  addi      r5, r1, 0x8
  stb       r8, 0x178(r1)
  sth       r8, 0x170(r1)
  stb       r7, 0x172(r1)
  stw       r8, 0x174(r1)
  stb       r8, 0x173(r1)
  stb       r6, 0x160(r1)
  stb       r8, 0x179(r1)
  stw       r0, 0x180(r1)
  stw       r0, 0x17C(r1)
  stb       r8, 0x17A(r1)
  stb       r8, 0x17B(r1)
  bl        -0x4EEB8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x174
  lwz       r3, -0x6CE0(r13)
  addi      r4, r1, 0x15C
  bl        -0x4F380
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x16C
  lbz       r0, -0x7BE0(r13)
  cmplwi    r0, 0
  beq-      .loc_0x174
  addi      r3, r1, 0x15C
  bl        0x809B0
  b         .loc_0x174

.loc_0x16C:
  li        r0, 0
  sth       r0, 0x8(r1)

.loc_0x174:
  mr        r3, r25
  lwz       r12, 0x0(r25)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm    r20,r3,0,24,31
  mr        r3, r25
  lwz       r12, 0x0(r25)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, -0x6E20(r13)
  mr        r5, r20
  li        r6, 0
  bl        -0xAF270
  addi      r27, r27, 0x1

.loc_0x1B8:
  lwz       r3, 0xC4(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpw      r27, r3
  blt+      .loc_0xA8
  li        r20, 0
  b         .loc_0x228

.loc_0x1E0:
  lwz       r3, 0xC4(r31)
  mr        r5, r20
  li        r4, 0x1
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r1, 0x10C
  bl        -0x560E4
  lwz       r3, -0x6CE0(r13)
  addi      r4, r1, 0x10C
  bl        -0x4F458
  addi      r20, r20, 0x1

.loc_0x228:
  lwz       r3, 0xC4(r31)
  li        r4, 0x1
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpw      r20, r3
  blt+      .loc_0x1E0
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x2A0
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x2A0
  lwz       r3, -0x7B88(r13)
  addi      r4, r1, 0xC
  bl        0x6B2C4
  mr.       r4, r3
  beq-      .loc_0x2A0
  lwz       r0, 0xC(r1)
  lwz       r3, -0x6CE0(r13)
  lha       r5, 0x258(r4)
  rlwinm    r4,r0,0,24,31
  bl        -0x4DDFC
  mr        r4, r3
  addi      r3, r1, 0x134
  bl        -0x56160
  lwz       r3, -0x6CE0(r13)
  addi      r4, r1, 0x134
  bl        -0x4F4D4

.loc_0x2A0:
  lfs       f0, -0x4F14(r2)
  addi      r3, r1, 0x214
  lfs       f1, -0x4F20(r2)
  addi      r4, r1, 0xD0
  fmuls     f2, f28, f0
  stfs      f31, 0xC8(r1)
  fmuls     f0, f27, f0
  addi      r5, r1, 0xC4
  stfs      f1, 0xD4(r1)
  stfs      f2, 0xD0(r1)
  stfs      f0, 0xD8(r1)
  stfs      f1, 0xC4(r1)
  stfs      f1, 0xCC(r1)
  bl        0x26BCA0
  lwz       r3, 0xA8(r29)
  li        r0, 0
  lis       r4, 0x804B
  addi      r4, r4, 0x5EE0
  cmplwi    r0, 0
  stw       r4, 0x38(r1)
  stw       r0, 0x44(r1)
  stw       r0, 0x3C(r1)
  stw       r3, 0x40(r1)
  bne-      .loc_0x318
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)
  b         .loc_0x490

.loc_0x318:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)
  b         .loc_0x384

.loc_0x330:
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x490
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)

.loc_0x384:
  lwz       r12, 0x38(r1)
  addi      r3, r1, 0x38
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x330
  b         .loc_0x490

.loc_0x3A4:
  lwz       r3, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r21, r3
  mr        r3, r26
  lwz       r4, 0x8(r21)
  bl        -0xF2618
  cmpwi     r3, 0
  bne-      .loc_0x3D4
  b         .loc_0x4B4

.loc_0x3D4:
  lwz       r0, 0x44(r1)
  cmplwi    r0, 0
  bne-      .loc_0x400
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)
  b         .loc_0x490

.loc_0x400:
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)
  b         .loc_0x474

.loc_0x420:
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x490
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)

.loc_0x474:
  lwz       r12, 0x38(r1)
  addi      r3, r1, 0x38
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x420

.loc_0x490:
  lwz       r3, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x3C(r1)
  cmplw     r4, r3
  bne+      .loc_0x3A4
  li        r21, 0

.loc_0x4B4:
  stw       r21, 0x138(r31)
  addi      r3, r1, 0x214
  addi      r4, r31, 0xD8
  bl        -0xD2B08
  addi      r3, r1, 0x214
  addi      r4, r31, 0x108
  bl        -0xD29C4
  li        r3, 0x14
  bl        -0x198F44
  mr.       r0, r3
  beq-      .loc_0x4F4
  lwz       r4, 0xC(r21)
  lis       r5, 0x2
  li        r6, 0x2
  bl        0x2813D8
  mr        r0, r3

.loc_0x4F4:
  stw       r0, 0x13C(r31)
  li        r4, 0
  lwz       r3, 0x13C(r31)
  lwz       r3, 0x8(r3)
  bl        -0x1566B0
  lwz       r3, 0x13C(r31)
  li        r4, 0x200
  lwz       r3, 0x8(r3)
  bl        -0x156750
  lwz       r4, 0x13C(r31)
  addi      r3, r31, 0xD8
  lwz       r4, 0x8(r4)
  addi      r4, r4, 0x24
  bl        -0xD2B70
  lwz       r3, 0x13C(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x13C(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x13C(r31)
  lwz       r3, 0x8(r3)
  bl        -0x156554
  lwz       r3, 0x13C(r31)
  lwz       r3, 0x8(r3)
  bl        -0x156690
  lwz       r0, 0xE8(r21)
  stw       r0, 0xC8(r31)
  lwz       r20, 0xC8(r31)
  mulli     r3, r20, 0xC
  addi      r3, r3, 0x10
  bl        -0x198EF0
  lis       r4, 0x8016
  mr        r7, r20
  addi      r4, r4, 0x38EC
  li        r5, 0
  li        r6, 0xC
  bl        -0xFB4C4
  li        r20, 0
  stw       r3, 0xCC(r31)
  mr        r22, r20
  mr        r23, r20
  b         .loc_0x5E4

.loc_0x5B8:
  lwz       r3, 0xCC(r31)
  lwz       r0, 0xEC(r21)
  add       r3, r3, r23
  lwz       r12, 0x0(r3)
  add       r4, r0, r22
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r22, r22, 0x10
  addi      r23, r23, 0xC
  addi      r20, r20, 0x1

.loc_0x5E4:
  lwz       r0, 0xC8(r31)
  cmpw      r20, r0
  blt+      .loc_0x5B8
  lfs       f1, 0x7C(r21)
  addi      r3, r1, 0x1E4
  lfs       f0, -0x4F20(r2)
  addi      r4, r1, 0xD0
  stfs      f1, 0xF4(r1)
  addi      r5, r1, 0xB8
  lfs       f1, 0x80(r21)
  stfs      f1, 0xF8(r1)
  lfs       f1, 0x84(r21)
  stfs      f1, 0xFC(r1)
  lfs       f1, 0x88(r21)
  stfs      f1, 0x100(r1)
  lfs       f1, 0x8C(r21)
  stfs      f1, 0x104(r1)
  lfs       f1, 0x90(r21)
  stfs      f1, 0x108(r1)
  stfs      f0, 0xB8(r1)
  stfs      f31, 0xBC(r1)
  stfs      f0, 0xC0(r1)
  bl        0x26B938
  addi      r3, r1, 0xF4
  addi      r4, r1, 0x1E4
  bl        0x2560E0
  lfs       f1, 0xF4(r1)
  lfs       f0, 0xDC(r29)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x660
  stfs      f1, 0xDC(r29)

.loc_0x660:
  lfs       f1, 0xF8(r1)
  lfs       f0, 0xE0(r29)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x674
  stfs      f1, 0xE0(r29)

.loc_0x674:
  lfs       f1, 0xFC(r1)
  lfs       f0, 0xE4(r29)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x688
  stfs      f1, 0xE4(r29)

.loc_0x688:
  lfs       f1, 0x100(r1)
  lfs       f0, 0xE8(r29)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x69C
  stfs      f1, 0xE8(r29)

.loc_0x69C:
  lfs       f1, 0x104(r1)
  lfs       f0, 0xEC(r29)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x6B0
  stfs      f1, 0xEC(r29)

.loc_0x6B0:
  lfs       f1, 0x108(r1)
  lfs       f0, 0xF0(r29)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x6C4
  stfs      f1, 0xF0(r29)

.loc_0x6C4:
  addi      r3, r1, 0xF4
  addi      r4, r31, 0x140
  bl        0x255F94
  lfs       f0, 0xF8(r1)
  addi      r3, r1, 0xDC
  lfs       f2, 0x104(r1)
  addi      r4, r31, 0x190
  lfs       f5, 0xF4(r1)
  lfs       f4, 0xFC(r1)
  lfs       f3, 0x100(r1)
  lfs       f1, 0x108(r1)
  stfs      f0, 0xE0(r1)
  lfs       f0, -0x4F20(r2)
  stfs      f2, 0xEC(r1)
  stfs      f5, 0xDC(r1)
  stfs      f4, 0xE4(r1)
  stfs      f3, 0xE8(r1)
  stfs      f1, 0xF0(r1)
  stfs      f0, 0xE0(r1)
  stfs      f0, 0xEC(r1)
  bl        0x255F4C
  lwz       r4, 0x13C(r31)
  addi      r3, r1, 0x78
  bl        0x2816FC
  lwz       r5, 0x13C(r31)
  li        r4, 0
  lfs       f30, 0x78(r1)
  lwz       r0, 0xC(r5)
  lfs       f29, 0x7C(r1)
  lfs       f28, 0x80(r1)
  lfs       f27, -0x4F20(r2)
  mtctr     r0
  cmpwi     r0, 0
  ble-      .loc_0x770

.loc_0x74C:
  lwz       r3, 0x10(r5)
  addi      r0, r4, 0x18
  lwzx      r3, r3, r0
  lfs       f0, 0x38(r3)
  fcmpo     cr0, f27, f0
  bge-      .loc_0x768
  fmr       f27, f0

.loc_0x768:
  addi      r4, r4, 0x3C
  bdnz+     .loc_0x74C

.loc_0x770:
  mr        r3, r26
  addi      r4, r30, 0x2BC
  bl        -0xF29CC
  cmpwi     r3, 0
  bne-      .loc_0x78C
  lfs       f0, -0x4F00(r2)
  fadds     f27, f27, f0

.loc_0x78C:
  lfs       f0, 0xD0(r1)
  addi      r3, r31, 0x160
  lfs       f2, 0xD4(r1)
  addi      r4, r1, 0xAC
  fadds     f1, f30, f0
  lfs       f3, 0xD8(r1)
  fadds     f2, f29, f2
  lfs       f0, -0x4ECC(r2)
  fadds     f3, f28, f3
  addi      r5, r1, 0xA0
  stfs      f1, 0x150(r31)
  stfs      f2, 0x154(r31)
  stfs      f3, 0x158(r31)
  stfs      f27, 0x15C(r31)
  lfs       f3, 0x144(r31)
  lfs       f1, 0x14C(r31)
  lfs       f2, 0x140(r31)
  fsubs     f0, f3, f0
  lfs       f4, 0x148(r31)
  stfs      f3, 0xA4(r1)
  stfs      f2, 0xAC(r1)
  stfs      f3, 0xB0(r1)
  stfs      f4, 0xB4(r1)
  stfs      f2, 0xA0(r1)
  stfs      f4, 0xA8(r1)
  stfs      f0, 0xA4(r1)
  bl        0x26455C
  lwz       r3, 0x10(r29)
  addi      r4, r21, 0x34
  addi      r5, r1, 0x214
  bl        -0xD270
  mr        r3, r29
  mr        r4, r21
  bl        0x109C
  mr        r27, r3
  lha       r0, 0x6C(r3)
  sth       r0, 0x186(r31)
  stw       r27, 0xC0(r31)
  lwz       r0, 0x114(r3)
  stw       r0, 0xD0(r31)
  lwz       r20, 0xD0(r31)
  rlwinm    r3,r20,4,0,27
  addi      r3, r3, 0x10
  bl        -0x1991A0
  lis       r4, 0x801B
  mr        r7, r20
  addi      r4, r4, 0x76E4
  li        r5, 0
  li        r6, 0x10
  bl        -0xFB774
  stw       r3, 0xD4(r31)
  li        r22, 0
  li        r20, 0x1
  lhz       r0, 0x6E(r27)
  sth       r0, 0x188(r31)
  b         .loc_0x8A4

.loc_0x86C:
  mr        r4, r22
  addi      r3, r27, 0x118
  bl        0x254514
  mr        r4, r3
  addi      r3, r21, 0xAC
  lwz       r12, 0xAC(r21)
  lwz       r0, 0x4C(r4)
  lwz       r12, 0x2C(r12)
  extsh     r4, r0
  mtctr     r12
  bctrl     
  stb       r20, 0x6E(r3)
  sth       r22, 0x76(r3)
  addi      r22, r22, 0x1

.loc_0x8A4:
  lwz       r0, 0x114(r27)
  cmpw      r22, r0
  blt+      .loc_0x86C
  li        r0, 0
  lis       r3, 0x804B
  addi      r4, r3, 0x2380
  addi      r3, r21, 0xAC
  cmplwi    r0, 0
  stw       r4, 0x90(r1)
  li        r28, 0
  stw       r0, 0x9C(r1)
  stw       r0, 0x94(r1)
  stw       r3, 0x98(r1)
  bne-      .loc_0x8F4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)
  b         .loc_0xA54

.loc_0x8F4:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)
  b         .loc_0x960

.loc_0x90C:
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x9C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xA54
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)

.loc_0x960:
  lwz       r12, 0x90(r1)
  addi      r3, r1, 0x90
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x90C
  b         .loc_0xA54

.loc_0x980:
  lwz       r3, 0x98(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x9C(r1)
  addi      r28, r28, 0x1
  cmplwi    r0, 0
  bne-      .loc_0x9C4
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)
  b         .loc_0xA54

.loc_0x9C4:
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)
  b         .loc_0xA38

.loc_0x9E4:
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x9C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xA54
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)

.loc_0xA38:
  lwz       r12, 0x90(r1)
  addi      r3, r1, 0x90
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x9E4

.loc_0xA54:
  lwz       r3, 0x98(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x94(r1)
  cmplw     r4, r3
  bne+      .loc_0x980
  rlwinm    r3,r28,2,0,29
  li        r4, -0x20
  bl        -0x199398
  stw       r3, 0x18C(r31)
  li        r26, 0
  lwz       r0, 0x9C(r1)
  cmplwi    r0, 0
  bne-      .loc_0xAB0
  lwz       r3, 0x98(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)
  b         .loc_0x1268

.loc_0xAB0:
  lwz       r3, 0x98(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)
  b         .loc_0xB20

.loc_0xACC:
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x9C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1268
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)

.loc_0xB20:
  lwz       r12, 0x90(r1)
  addi      r3, r1, 0x90
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xACC
  b         .loc_0x1268

.loc_0xB40:
  lwz       r3, 0x98(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r25, r3
  lbz       r0, 0x6E(r3)
  cmplwi    r0, 0
  beq-      .loc_0x10A4
  lwz       r4, 0x10(r24)
  li        r23, 0
  b         .loc_0xB8C

.loc_0xB70:
  lhz       r3, 0x18(r4)
  lha       r0, 0x76(r25)
  cmpw      r3, r0
  bne-      .loc_0xB88
  mr        r23, r4
  b         .loc_0xB94

.loc_0xB88:
  lwz       r4, 0x4(r4)

.loc_0xB8C:
  cmplwi    r4, 0
  bne+      .loc_0xB70

.loc_0xB94:
  cmplwi    r23, 0
  bne-      .loc_0xBB0
  addi      r3, r30, 0x84
  addi      r5, r30, 0xC8
  li        r4, 0xD83
  crclr     6, 0x6
  bl        -0x192E80

.loc_0xBB0:
  lis       r3, 0x804B
  li        r0, 0
  lha       r21, 0x1C(r23)
  addi      r4, r3, 0x5D28
  addi      r3, r29, 0xAC
  cmplwi    r0, 0
  stw       r4, 0x28(r1)
  stw       r0, 0x34(r1)
  stw       r0, 0x2C(r1)
  stw       r3, 0x30(r1)
  bne-      .loc_0xBF4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)
  b         .loc_0xD64

.loc_0xBF4:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)
  b         .loc_0xC60

.loc_0xC0C:
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xD64
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)

.loc_0xC60:
  lwz       r12, 0x28(r1)
  addi      r3, r1, 0x28
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xC0C
  b         .loc_0xD64

.loc_0xC80:
  lwz       r3, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lha       r0, 0x184(r3)
  cmpw      r0, r21
  bne-      .loc_0xCA8
  mr        r21, r3
  b         .loc_0xD88

.loc_0xCA8:
  lwz       r0, 0x34(r1)
  cmplwi    r0, 0
  bne-      .loc_0xCD4
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)
  b         .loc_0xD64

.loc_0xCD4:
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)
  b         .loc_0xD48

.loc_0xCF4:
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xD64
  lwz       r3, 0x30(r1)
  lwz       r4, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x2C(r1)

.loc_0xD48:
  lwz       r12, 0x28(r1)
  addi      r3, r1, 0x28
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xCF4

.loc_0xD64:
  lwz       r3, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x2C(r1)
  cmplw     r4, r3
  bne+      .loc_0xC80
  li        r21, 0

.loc_0xD88:
  lha       r4, 0x76(r25)
  addi      r3, r27, 0x118
  bl        0x253FF8
  lwz       r20, 0x28C(r30)
  cmplwi    r21, 0
  lwz       r12, 0x290(r30)
  mr        r22, r3
  lwz       r11, 0x294(r30)
  lwz       r10, 0x298(r30)
  lwz       r9, 0x29C(r30)
  lwz       r8, 0x2A0(r30)
  lwz       r7, 0x2A4(r30)
  lwz       r6, 0x2A8(r30)
  lwz       r5, 0x2AC(r30)
  lwz       r4, 0x2B0(r30)
  lwz       r3, 0x2B4(r30)
  lwz       r0, 0x2B8(r30)
  stw       r20, 0x6C(r1)
  stw       r12, 0x70(r1)
  lfs       f11, 0x6C(r1)
  stw       r11, 0x74(r1)
  lfs       f10, 0x70(r1)
  stw       r10, 0x60(r1)
  lfs       f9, 0x74(r1)
  stw       r9, 0x64(r1)
  lfs       f8, 0x60(r1)
  stw       r8, 0x68(r1)
  lfs       f7, 0x64(r1)
  stw       r7, 0x54(r1)
  lfs       f6, 0x68(r1)
  stw       r6, 0x58(r1)
  lfs       f5, 0x54(r1)
  stw       r5, 0x5C(r1)
  lfs       f4, 0x58(r1)
  stw       r4, 0x48(r1)
  lfs       f3, 0x5C(r1)
  stw       r3, 0x4C(r1)
  lfs       f2, 0x48(r1)
  stw       r0, 0x50(r1)
  lfs       f1, 0x4C(r1)
  lfs       f0, 0x50(r1)
  stfs      f11, 0x1B4(r1)
  stfs      f10, 0x1B8(r1)
  stfs      f9, 0x1BC(r1)
  stfs      f8, 0x1C0(r1)
  stfs      f7, 0x1C4(r1)
  stfs      f6, 0x1C8(r1)
  stfs      f5, 0x1CC(r1)
  stfs      f4, 0x1D0(r1)
  stfs      f3, 0x1D4(r1)
  stfs      f2, 0x1D8(r1)
  stfs      f1, 0x1DC(r1)
  stfs      f0, 0x1E0(r1)
  bne-      .loc_0xF3C
  lha       r4, 0x36(r25)
  li        r3, 0
  extsh.    r0, r4
  blt-      .loc_0xE7C
  cmpw      r4, r28
  bge-      .loc_0xE7C
  li        r3, 0x1

.loc_0xE7C:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xE98
  addi      r3, r30, 0x84
  addi      r5, r30, 0xC8
  li        r4, 0xD98
  crclr     6, 0x6
  bl        -0x193168

.loc_0xE98:
  li        r3, 0x78
  bl        -0x19990C
  mr.       r20, r3
  beq-      .loc_0xEB0
  bl        -0x4B11C
  mr        r20, r3

.loc_0xEB0:
  lwz       r3, 0x8(r29)
  mr        r4, r20
  bl        -0x48F84
  lha       r0, 0x36(r25)
  addi      r3, r1, 0x214
  lha       r7, 0x36(r20)
  addi      r4, r25, 0x4C
  lwz       r6, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  addi      r5, r1, 0x1C
  stwx      r7, r6, r0
  lfs       f0, 0x58(r25)
  stfs      f0, 0x58(r20)
  bl        -0xD2C20
  lfs       f1, 0x20(r1)
  lfs       f2, 0x24(r1)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x4C(r20)
  stfs      f1, 0x50(r20)
  stfs      f2, 0x54(r20)
  lbz       r0, 0x6E(r25)
  cmplwi    r0, 0
  beq-      .loc_0xF18
  lfs       f0, -0x4F20(r2)
  stfs      f0, 0x50(r20)
  b         .loc_0xF34

.loc_0xF18:
  lwz       r3, -0x6CF8(r13)
  addi      r4, r20, 0x4C
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x50(r20)

.loc_0xF34:
  mr        r25, r20
  b         .loc_0xFC8

.loc_0xF3C:
  lwz       r3, 0x138(r21)
  lwzu      r12, 0xAC(r3)
  lhz       r0, 0x1A(r23)
  lwz       r12, 0x2C(r12)
  extsh     r4, r0
  mtctr     r12
  bctrl     
  lwz       r0, 0x18C(r21)
  mr        r23, r3
  cmplwi    r0, 0
  bne-      .loc_0xF7C
  addi      r3, r30, 0x84
  addi      r5, r30, 0xC8
  li        r4, 0xDB0
  crclr     6, 0x6
  bl        -0x19324C

.loc_0xF7C:
  lha       r0, 0x36(r23)
  lwz       r4, 0x18C(r21)
  rlwinm    r3,r0,2,0,29
  lha       r0, 0x36(r25)
  lwzx      r4, r4, r3
  lwz       r3, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  stwx      r4, r3, r0
  lwz       r3, 0x8(r29)
  lha       r0, 0x36(r25)
  lwz       r12, 0x0(r3)
  lwz       r4, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  lwz       r12, 0x2C(r12)
  lwzx      r0, r4, r0
  extsh     r4, r0
  mtctr     r12
  bctrl     
  mr        r25, r3

.loc_0xFC8:
  lwz       r0, 0xD4(r31)
  li        r3, 0x1C
  add       r21, r0, r26
  addi      r26, r26, 0x10
  stw       r25, 0x0(r21)
  bl        -0x199A4C
  mr.       r20, r3
  beq-      .loc_0x1000
  lha       r23, 0x184(r31)
  bl        0x253A90
  lis       r3, 0x804B
  addi      r0, r3, 0x2410
  stw       r0, 0x0(r20)
  sth       r23, 0x18(r20)

.loc_0x1000:
  mr        r4, r20
  addi      r3, r25, 0x18
  bl        0x253AEC
  lfs       f0, -0x4F20(r2)
  lis       r3, 0x8051
  addi      r4, r3, 0x41E4
  stfs      f31, 0x88(r1)
  addi      r3, r1, 0x184
  addi      r5, r1, 0x84
  stfs      f0, 0x84(r1)
  stfs      f0, 0x8C(r1)
  bl        0x26AF48
  lwz       r0, 0x44(r22)
  addi      r3, r1, 0x1B4
  lfs       f0, 0x194(r1)
  mulli     r0, r0, 0xC
  lfs       f2, 0x198(r1)
  lfs       f1, 0x184(r1)
  lfs       f3, 0x19C(r1)
  add       r3, r3, r0
  lfs       f6, 0x188(r1)
  lfs       f4, 0x4(r3)
  lfs       f8, 0x0(r3)
  fmuls     f0, f4, f0
  lfs       f9, 0x8(r3)
  fmuls     f5, f4, f2
  lfs       f2, 0x1A4(r1)
  fmuls     f3, f4, f3
  lfs       f4, 0x18C(r1)
  fmadds    f0, f8, f1, f0
  lfs       f7, 0x1A8(r1)
  fmadds    f6, f8, f6, f5
  lfs       f5, 0x1AC(r1)
  fmadds    f1, f8, f4, f3
  fmadds    f0, f9, f2, f0
  fmadds    f2, f9, f7, f6
  fmadds    f1, f9, f5, f1
  stfs      f0, 0x4(r21)
  stfs      f2, 0x8(r21)
  stfs      f1, 0xC(r21)
  b         .loc_0x11AC

.loc_0x10A4:
  lha       r4, 0x36(r25)
  li        r3, 0
  extsh.    r0, r4
  blt-      .loc_0x10C0
  cmpw      r4, r28
  bge-      .loc_0x10C0
  li        r3, 0x1

.loc_0x10C0:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x10DC
  addi      r3, r30, 0x84
  addi      r5, r30, 0xC8
  li        r4, 0xDCA
  crclr     6, 0x6
  bl        -0x1933AC

.loc_0x10DC:
  li        r3, 0x78
  bl        -0x199B50
  mr.       r21, r3
  beq-      .loc_0x10F4
  bl        -0x4B360
  mr        r21, r3

.loc_0x10F4:
  lwz       r3, 0x8(r29)
  mr        r4, r21
  bl        -0x491C8
  lha       r0, 0x36(r25)
  addi      r3, r1, 0x214
  lha       r7, 0x36(r21)
  addi      r4, r25, 0x4C
  lwz       r6, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  addi      r5, r1, 0x10
  stwx      r7, r6, r0
  lfs       f0, 0x58(r25)
  stfs      f0, 0x58(r21)
  bl        -0xD2E64
  lfs       f1, 0x14(r1)
  lfs       f2, 0x18(r1)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x4C(r21)
  stfs      f1, 0x50(r21)
  stfs      f2, 0x54(r21)
  lbz       r0, 0x6E(r25)
  cmplwi    r0, 0
  beq-      .loc_0x115C
  lfs       f0, -0x4F20(r2)
  stfs      f0, 0x50(r21)
  b         .loc_0x1178

.loc_0x115C:
  lwz       r3, -0x6CF8(r13)
  addi      r4, r21, 0x4C
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x50(r21)

.loc_0x1178:
  li        r3, 0x1C
  bl        -0x199BEC
  mr.       r20, r3
  beq-      .loc_0x11A0
  lha       r22, 0x184(r31)
  bl        0x2538F0
  lis       r3, 0x804B
  addi      r0, r3, 0x2410
  stw       r0, 0x0(r20)
  sth       r22, 0x18(r20)

.loc_0x11A0:
  mr        r4, r20
  addi      r3, r21, 0x18
  bl        0x25394C

.loc_0x11AC:
  lwz       r0, 0x9C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x11D8
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)
  b         .loc_0x1268

.loc_0x11D8:
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)
  b         .loc_0x124C

.loc_0x11F8:
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x9C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1268
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)

.loc_0x124C:
  lwz       r12, 0x90(r1)
  addi      r3, r1, 0x90
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x11F8

.loc_0x1268:
  lwz       r3, 0x98(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x94(r1)
  cmplw     r4, r3
  bne+      .loc_0xB40
  lwz       r0, 0x9C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x12B0
  lwz       r3, 0x98(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)
  b         .loc_0x165C

.loc_0x12B0:
  lwz       r3, 0x98(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)
  b         .loc_0x1320

.loc_0x12CC:
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x9C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x165C
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)

.loc_0x1320:
  lwz       r12, 0x90(r1)
  addi      r3, r1, 0x90
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x12CC
  b         .loc_0x165C

.loc_0x1340:
  lwz       r3, 0x98(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r22, r3
  lwz       r3, 0x8(r29)
  lha       r0, 0x36(r22)
  lwz       r12, 0x0(r3)
  lwz       r4, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  lwz       r12, 0x2C(r12)
  lwzx      r0, r4, r0
  extsh     r4, r0
  mtctr     r12
  bctrl     
  lbz       r0, 0x6E(r22)
  mr        r24, r3
  cmplwi    r0, 0
  beq-      .loc_0x14E4
  lha       r23, 0x38(r24)
  extsh.    r0, r23
  bne-      .loc_0x145C
  lha       r3, 0x38(r22)
  li        r0, 0x2
  mr        r5, r24
  li        r6, 0
  sth       r3, 0x38(r24)
  li        r4, -0x1
  mtctr     r0

.loc_0x13B8:
  lha       r0, 0x3A(r22)
  cmpwi     r0, -0x1
  bne-      .loc_0x13CC
  sth       r4, 0x3A(r5)
  b         .loc_0x13DC

.loc_0x13CC:
  lwz       r3, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  lwzx      r0, r3, r0
  sth       r0, 0x3A(r5)

.loc_0x13DC:
  lha       r0, 0x3C(r22)
  cmpwi     r0, -0x1
  bne-      .loc_0x13F0
  sth       r4, 0x3C(r5)
  b         .loc_0x1400

.loc_0x13F0:
  lwz       r3, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  lwzx      r0, r3, r0
  sth       r0, 0x3C(r5)

.loc_0x1400:
  lha       r0, 0x3E(r22)
  cmpwi     r0, -0x1
  bne-      .loc_0x1414
  sth       r4, 0x3E(r5)
  b         .loc_0x1424

.loc_0x1414:
  lwz       r3, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  lwzx      r0, r3, r0
  sth       r0, 0x3E(r5)

.loc_0x1424:
  lha       r0, 0x40(r22)
  cmpwi     r0, -0x1
  bne-      .loc_0x1438
  sth       r4, 0x40(r5)
  b         .loc_0x1448

.loc_0x1438:
  lwz       r3, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  lwzx      r0, r3, r0
  sth       r0, 0x40(r5)

.loc_0x1448:
  addi      r22, r22, 0x8
  addi      r5, r5, 0x8
  addi      r6, r6, 0x3
  bdnz+     .loc_0x13B8
  b         .loc_0x15A0

.loc_0x145C:
  mr        r21, r22
  li        r25, 0
  b         .loc_0x14C8

.loc_0x1468:
  add       r20, r23, r25
  cmpwi     r20, 0x8
  blt-      .loc_0x1488
  addi      r3, r30, 0x84
  addi      r5, r30, 0xC8
  li        r4, 0xDF4
  crclr     6, 0x6
  bl        -0x193758

.loc_0x1488:
  lha       r0, 0x3A(r21)
  cmpwi     r0, -0x1
  bne-      .loc_0x14A8
  rlwinm    r3,r20,1,0,30
  li        r4, -0x1
  addi      r0, r3, 0x3A
  sthx      r4, r24, r0
  b         .loc_0x14C0

.loc_0x14A8:
  lwz       r4, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  rlwinm    r3,r20,1,0,30
  lwzx      r4, r4, r0
  addi      r0, r3, 0x3A
  sthx      r4, r24, r0

.loc_0x14C0:
  addi      r21, r21, 0x2
  addi      r25, r25, 0x1

.loc_0x14C8:
  lha       r3, 0x38(r22)
  cmpw      r25, r3
  blt+      .loc_0x1468
  lha       r0, 0x38(r24)
  add       r0, r0, r3
  sth       r0, 0x38(r24)
  b         .loc_0x15A0

.loc_0x14E4:
  lha       r3, 0x38(r22)
  li        r0, 0x2
  mr        r5, r24
  li        r6, 0
  sth       r3, 0x38(r24)
  li        r4, -0x1
  mtctr     r0

.loc_0x1500:
  lha       r0, 0x3A(r22)
  cmpwi     r0, -0x1
  bne-      .loc_0x1514
  sth       r4, 0x3A(r5)
  b         .loc_0x1524

.loc_0x1514:
  lwz       r3, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  lwzx      r0, r3, r0
  sth       r0, 0x3A(r5)

.loc_0x1524:
  lha       r0, 0x3C(r22)
  cmpwi     r0, -0x1
  bne-      .loc_0x1538
  sth       r4, 0x3C(r5)
  b         .loc_0x1548

.loc_0x1538:
  lwz       r3, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  lwzx      r0, r3, r0
  sth       r0, 0x3C(r5)

.loc_0x1548:
  lha       r0, 0x3E(r22)
  cmpwi     r0, -0x1
  bne-      .loc_0x155C
  sth       r4, 0x3E(r5)
  b         .loc_0x156C

.loc_0x155C:
  lwz       r3, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  lwzx      r0, r3, r0
  sth       r0, 0x3E(r5)

.loc_0x156C:
  lha       r0, 0x40(r22)
  cmpwi     r0, -0x1
  bne-      .loc_0x1580
  sth       r4, 0x40(r5)
  b         .loc_0x1590

.loc_0x1580:
  lwz       r3, 0x18C(r31)
  rlwinm    r0,r0,2,0,29
  lwzx      r0, r3, r0
  sth       r0, 0x40(r5)

.loc_0x1590:
  addi      r22, r22, 0x8
  addi      r5, r5, 0x8
  addi      r6, r6, 0x3
  bdnz+     .loc_0x1500

.loc_0x15A0:
  lwz       r0, 0x9C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x15CC
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)
  b         .loc_0x165C

.loc_0x15CC:
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)
  b         .loc_0x1640

.loc_0x15EC:
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x9C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x165C
  lwz       r3, 0x98(r1)
  lwz       r4, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r1)

.loc_0x1640:
  lwz       r12, 0x90(r1)
  addi      r3, r1, 0x90
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x15EC

.loc_0x165C:
  lwz       r3, 0x98(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x94(r1)
  cmplw     r4, r3
  bne+      .loc_0x1340
  psq_l     f31,0x2C8(r1),0,0
  lfd       f31, 0x2C0(r1)
  psq_l     f30,0x2B8(r1),0,0
  lfd       f30, 0x2B0(r1)
  psq_l     f29,0x2A8(r1),0,0
  lfd       f29, 0x2A0(r1)
  psq_l     f28,0x298(r1),0,0
  lfd       f28, 0x290(r1)
  psq_l     f27,0x288(r1),0,0
  lfd       f27, 0x280(r1)
  lmw       r20, 0x250(r1)
  lwz       r0, 0x2D4(r1)
  mtlr      r0
  addi      r1, r1, 0x2D0
  blr
*/
}

/*
 * --INFO--
 * Address:	801BDFCC
 * Size:	0001F4
 */
void deleteTemp__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  addi      r3, r3, 0xAC
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5D28
  stw       r31, 0x1C(r1)
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x50
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x50:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xBC

.loc_0x68:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xBC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x68
  b         .loc_0x1C0

.loc_0xDC:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  lwz       r3, 0x18C(r3)
  bl        -0x199FEC
  li        r0, 0
  stw       r0, 0x18C(r31)
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x130
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x130:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1A4

.loc_0x150:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1A4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x150

.loc_0x1C0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xDC
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801BE1C0
 * Size:	000094
 */
void getMUI__Q24Game10RoomMapMgrFPQ24Game7MapUnit(void)
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
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  b         .loc_0x64

.loc_0x30:
  lwz       r4, 0xF8(r28)
  addi      r0, r31, 0x14
  lwz       r3, 0x8(r29)
  lwzx      r4, r4, r0
  bl        -0xF3B40
  cmpwi     r3, 0
  bne-      .loc_0x5C
  mulli     r0, r30, 0x16C
  lwz       r3, 0xF8(r28)
  add       r3, r3, r0
  b         .loc_0x74

.loc_0x5C:
  addi      r31, r31, 0x16C
  addi      r30, r30, 0x1

.loc_0x64:
  lwz       r0, 0xF4(r28)
  cmpw      r30, r0
  blt+      .loc_0x30
  li        r3, 0

.loc_0x74:
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
 * Address:	801BE254
 * Size:	000060
 */
void doAnimation__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0xAC
  stw       r0, -0x6C00(r13)
  lwz       r12, 0xAC(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r31)
  cmplwi    r3, 0
  beq-      .loc_0x4C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     

.loc_0x4C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801BE2B4
 * Size:	0000DC
 */
void doEntry__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  subi      r4, r2, 0x4EC8
  li        r5, 0x1
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r6, -0x6514(r13)
  lwz       r3, 0x28(r6)
  bl        0x26C81C
  lwz       r4, -0x6C18(r13)
  cmplwi    r4, 0
  beq-      .loc_0xB4
  lwz       r3, 0x10(r30)
  lwz       r31, 0x58(r4)
  cmplwi    r3, 0
  beq-      .loc_0x58
  lwz       r12, 0x0(r3)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     

.loc_0x58:
  mr        r3, r31
  li        r4, 0x2
  bl        -0x6CEB8
  addi      r3, r30, 0xAC
  lwz       r12, 0xAC(r30)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x24(r30)
  cmplwi    r0, 0
  beq-      .loc_0xA8
  mr        r3, r31
  li        r4, 0x6
  bl        -0x6CEE4
  lwz       r3, 0x24(r30)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0xA8:
  mr        r3, r31
  li        r4, 0
  bl        -0x6CF08

.loc_0xB4:
  lwz       r3, -0x6514(r13)
  subi      r4, r2, 0x4EC8
  lwz       r3, 0x28(r3)
  bl        0x26C788
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
 * Address:	801BE390
 * Size:	00007C
 */
void doSetView__Q24Game10RoomMapMgrFi(void)
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
  addi      r3, r30, 0xAC
  lwz       r12, 0xAC(r30)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r30)
  cmplwi    r3, 0
  beq-      .loc_0x50
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     

.loc_0x50:
  lwz       r3, 0x24(r30)
  cmplwi    r3, 0
  beq-      .loc_0x64
  mr        r4, r31
  bl        0x280CD0

.loc_0x64:
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
 * Address:	801BE40C
 * Size:	000068
 */
void doViewCalc__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0xAC
  lwz       r12, 0xAC(r31)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r31)
  cmplwi    r3, 0
  beq-      .loc_0x44
  lwz       r12, 0x0(r3)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     

.loc_0x44:
  lwz       r3, 0x24(r31)
  cmplwi    r3, 0
  beq-      .loc_0x54
  bl        0x280BFC

.loc_0x54:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801BE474
 * Size:	000004
 */
void doSimulation__Q24Game10RoomMapMgrFf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801BE478
 * Size:	000210
 */
void doDirectDraw__Q24Game10RoomMapMgrFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  li        r4, 0
  stw       r30, 0x18(r1)
  mr        r30, r3
  mr        r3, r31
  bl        0x267380
  li        r0, 0
  lis       r3, 0x804B
  addi      r4, r3, 0x5D28
  addi      r3, r30, 0xAC
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x68
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1D8

.loc_0x68:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xD4

.loc_0x80:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1D8
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xD4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x80
  b         .loc_0x1D8

.loc_0xF4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x148
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1D8

.loc_0x148:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1BC

.loc_0x168:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1D8
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1BC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x168

.loc_0x1D8:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xF4
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801BE688
 * Size:	000024
 */
void getStartPosition__Q24Game10RoomMapMgrFR10Vector3<float>i(void)
{
/*
.loc_0x0:
  mulli     r0, r5, 0xC
  add       r3, r3, r0
  lfs       f0, 0xFC(r3)
  stfs      f0, 0x0(r4)
  lfs       f0, 0x100(r3)
  stfs      f0, 0x4(r4)
  lfs       f0, 0x104(r3)
  stfs      f0, 0x8(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801BE6AC
 * Size:	000008
 */
void getDemoMatrix__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801BE6B4
 * Size:	000084
 */
void __dt__Q24Game4DoorFv(void)
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
  beq-      .loc_0x68
  lis       r3, 0x804B
  addic.    r0, r30, 0x20
  addi      r0, r3, 0x5CEC
  stw       r0, 0x0(r30)
  beq-      .loc_0x4C
  lis       r4, 0x804B
  addi      r3, r30, 0x20
  addi      r0, r4, 0x60D4
  li        r4, 0
  stw       r0, 0x20(r30)
  bl        0x252E8C

.loc_0x4C:
  mr        r3, r30
  li        r4, 0
  bl        0x252E80
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x19A664

.loc_0x68:
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
 * Address:	801BE738
 * Size:	000004
 */
void constructor__Q24Game9PartsViewFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801BE73C
 * Size:	000004
 */
void doSimulation__Q24Game9PartsViewFf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801BE740
 * Size:	000038
 */
void Iterator<Game::MapRoom>::operator* ()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x8(r3)
  lwz       r4, 0x4(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801BE778
 * Size:	0000E4
 */
void Iterator<Game::MapRoom>::next()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0xC(r3)
  cmplwi    r0, 0
  bne-      .loc_0x40
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)
  b         .loc_0xD0

.loc_0x40:
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)
  b         .loc_0xB4

.loc_0x60:
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xD0
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)

.loc_0xB4:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x60

.loc_0xD0:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801BE85C
 * Size:	0000DC
 */
void Iterator<Game::MapRoom>::first()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0xC(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lwz       r3, 0x8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)
  b         .loc_0xC8

.loc_0x3C:
  lwz       r3, 0x8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)
  b         .loc_0xAC

.loc_0x58:
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xC8
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)

.loc_0xAC:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x58

.loc_0xC8:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801BE938
 * Size:	000070
 */
void Container<Game::MapRoom>::~Container()
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
  beq-      .loc_0x54
  lis       r4, 0x804B
  addi      r0, r4, 0x5D40
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x252C10

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x19A8D4

.loc_0x54:
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
 * Address:	801BE9A8
 * Size:	000088
 */
void ObjectMgr<Game::MapRoom>::~ObjectMgr()
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
  beq-      .loc_0x6C
  lis       r4, 0x804B
  addi      r4, r4, 0x5D6C
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x5C
  lis       r4, 0x804B
  addi      r0, r4, 0x5D40
  stw       r0, 0x0(r30)
  beq-      .loc_0x5C
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x252B88

.loc_0x5C:
  extsh.    r0, r31
  ble-      .loc_0x6C
  mr        r3, r30
  bl        -0x19A95C

.loc_0x6C:
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
 * Address:	801BEA30
 * Size:	000024
 */
void getBoundingSphere__Q24Game7MapRoomFRQ23Sys6Sphere(void)
{
/*
.loc_0x0:
  lfs       f0, 0x140(r3)
  stfs      f0, 0x0(r4)
  lfs       f0, 0x144(r3)
  stfs      f0, 0x4(r4)
  lfs       f0, 0x148(r3)
  stfs      f0, 0x8(r4)
  lfs       f0, 0x14C(r3)
  stfs      f0, 0xC(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEA54
 * Size:	000008
 */
void getTypeName__Q24Game7MapRoomFv(void)
{
/*
.loc_0x0:
  subi      r3, r2, 0x4EC0
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEA5C
 * Size:	00000C
 */
void getObjType__Q24Game7MapRoomFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x1
  subi      r3, r3, 0x5556
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEA68
 * Size:	000008
 */
void collisionUpdatable__Q24Game7MapRoomFv(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEA70
 * Size:	00001C
 */
void getPosition__Q24Game7MapRoomFv(void)
{
/*
.loc_0x0:
  lfs       f0, 0x140(r4)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x144(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x148(r4)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEA8C
 * Size:	000004
 */
void constructor__Q24Game7MapRoomFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEA90
 * Size:	00000C
 */
void getName__Q24Game15ItemGateInitArgFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8048
  subi      r3, r3, 0xC8
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEA9C
 * Size:	00000C
 */
void getName__Q34Game15ItemBigFountain7InitArgFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8048
  subi      r3, r3, 0xB8
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEAA8
 * Size:	00000C
 */
void getName__Q34Game8ItemHole7InitArgFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8048
  subi      r3, r3, 0x9C
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEAB4
 * Size:	000038
 */
void Iterator<Game::MapUnit>::operator* ()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x8(r3)
  lwz       r4, 0x4(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEAEC
 * Size:	0000E4
 */
void Iterator<Game::MapUnit>::next()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0xC(r3)
  cmplwi    r0, 0
  bne-      .loc_0x40
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)
  b         .loc_0xD0

.loc_0x40:
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)
  b         .loc_0xB4

.loc_0x60:
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xD0
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)

.loc_0xB4:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x60

.loc_0xD0:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEBD0
 * Size:	0000DC
 */
void Iterator<Game::MapUnit>::first()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0xC(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lwz       r3, 0x8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)
  b         .loc_0xC8

.loc_0x3C:
  lwz       r3, 0x8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)
  b         .loc_0xAC

.loc_0x58:
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xC8
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)

.loc_0xAC:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x58

.loc_0xC8:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801BECAC
 * Size:	0000E0
 */
void __dt__Q24Game10MapUnitMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  beq-      .loc_0xC4
  lis       r3, 0x804B
  addi      r3, r3, 0x5EF8
  stw       r3, 0x0(r31)
  addi      r0, r3, 0x2C
  stw       r0, 0x1C(r31)
  beq-      .loc_0xB4
  lis       r3, 0x804B
  addic.    r0, r31, 0x20
  addi      r3, r3, 0x5F88
  stw       r3, 0x0(r31)
  addi      r0, r3, 0x2C
  stw       r0, 0x1C(r31)
  beq-      .loc_0x6C
  lis       r4, 0x804B
  addi      r3, r31, 0x20
  addi      r0, r4, 0x5F78
  li        r4, 0
  stw       r0, 0x20(r31)
  bl        0x252874

.loc_0x6C:
  cmplwi    r31, 0
  beq-      .loc_0xB4
  lis       r3, 0x804B
  addi      r3, r3, 0x6008
  stw       r3, 0x0(r31)
  addi      r0, r3, 0x2C
  stw       r0, 0x1C(r31)
  beq-      .loc_0xB4
  lis       r3, 0x804B
  addi      r0, r3, 0x6084
  stw       r0, 0x0(r31)
  beq-      .loc_0xB4
  lis       r4, 0x804B
  mr        r3, r31
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x0(r31)
  bl        0x25282C

.loc_0xB4:
  extsh.    r0, r30
  ble-      .loc_0xC4
  mr        r3, r31
  bl        -0x19ACB8

.loc_0xC4:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801BED8C
 * Size:	000004
 */
void constructor__Q24Game7MapUnitFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801BED90
 * Size:	000004
 */
void doAnimation__Q24Game7MapUnitFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801BED94
 * Size:	000004
 */
void doEntry__Q24Game7MapUnitFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801BED98
 * Size:	000004
 */
void doSetView__Q24Game7MapUnitFi(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801BED9C
 * Size:	000004
 */
void doViewCalc__Q24Game7MapUnitFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEDA0
 * Size:	000004
 */
void doSimulation__Q24Game7MapUnitFf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEDA4
 * Size:	000004
 */
void doDirectDraw__Q24Game7MapUnitFR8Graphics(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEDA8
 * Size:	000060
 */
void __dt__Q24Game8DoorLinkFv(void)
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
  lis       r5, 0x804B
  li        r4, 0
  addi      r0, r5, 0x60D4
  stw       r0, 0x0(r30)
  bl        0x2527B0
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x19AD34

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
 * Address:	801BEE08
 * Size:	000008
 */
void NodeObjectMgr<Game::MapUnit>::get(void *)
{
/*
.loc_0x0:
  lwz       r3, 0x18(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEE10
 * Size:	000008
 */
void NodeObjectMgr<Game::MapUnit>::getNext(void *)
{
/*
.loc_0x0:
  lwz       r3, 0x4(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEE18
 * Size:	000008
 */
void NodeObjectMgr<Game::MapUnit>::getStart()
{
/*
.loc_0x0:
  lwz       r3, 0x30(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEE20
 * Size:	000008
 */
void NodeObjectMgr<Game::MapUnit>::getEnd()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEE28
 * Size:	000018
 */
void NodeObjectMgr<Game::MapUnit>::resetMgr()
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x30(r3)
  stw       r0, 0x2C(r3)
  stw       r0, 0x28(r3)
  stw       r0, 0x24(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEE40
 * Size:	000060
 */
void MonoObjectMgr<Game::MapRoom>::birth()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x458
  cmpwi     r3, -0x1
  beq-      .loc_0x48
  lwz       r6, 0x28(r31)
  li        r0, 0
  lwz       r4, 0x2C(r31)
  mulli     r5, r3, 0x1A0
  stbx      r0, r4, r3
  add       r3, r6, r5
  lwz       r4, 0x20(r31)
  addi      r0, r4, 0x1
  stw       r0, 0x20(r31)
  b         .loc_0x4C

.loc_0x48:
  li        r3, 0

.loc_0x4C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEEA0
 * Size:	000040
 */
void MonoObjectMgr<Game::MapRoom>::getNext(void *)
{
/*
.loc_0x0:
  lwz       r5, 0x24(r3)
  addi      r6, r4, 0x1
  sub       r0, r5, r6
  mtctr     r0
  cmpw      r6, r5
  bge-      .loc_0x38

.loc_0x18:
  lwz       r4, 0x2C(r3)
  lbzx      r0, r4, r6
  cmplwi    r0, 0
  bne-      .loc_0x30
  mr        r3, r6
  blr       

.loc_0x30:
  addi      r6, r6, 0x1
  bdnz+     .loc_0x18

.loc_0x38:
  mr        r3, r5
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEEE0
 * Size:	000030
 */
void MonoObjectMgr<Game::MapRoom>::getStart()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, -0x1
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEF10
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::getEnd()
{
/*
.loc_0x0:
  lwz       r3, 0x24(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEF18
 * Size:	000010
 */
void MonoObjectMgr<Game::MapRoom>::getAt(int)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x1A0
  lwz       r3, 0x28(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEF28
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::getTo()
{
/*
.loc_0x0:
  lwz       r3, 0x24(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801BEF30
 * Size:	000080
 */
void MonoObjectMgr<Game::MapRoom>::doAnimation()
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
  b         .loc_0x58

.loc_0x28:
  lwz       r3, 0x2C(r29)
  lbzx      r0, r3, r30
  cmplwi    r0, 0
  bne-      .loc_0x50
  lwz       r0, 0x28(r29)
  add       r3, r0, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     

.loc_0x50:
  addi      r31, r31, 0x1A0
  addi      r30, r30, 0x1

.loc_0x58:
  lwz       r0, 0x24(r29)
  cmpw      r30, r0
  blt+      .loc_0x28
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
 * Address:	801BEFB0
 * Size:	000080
 */
void MonoObjectMgr<Game::MapRoom>::doEntry()
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
  b         .loc_0x58

.loc_0x28:
  lwz       r3, 0x2C(r29)
  lbzx      r0, r3, r30
  cmplwi    r0, 0
  bne-      .loc_0x50
  lwz       r0, 0x28(r29)
  add       r3, r0, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     

.loc_0x50:
  addi      r31, r31, 0x1A0
  addi      r30, r30, 0x1

.loc_0x58:
  lwz       r0, 0x24(r29)
  cmpw      r30, r0
  blt+      .loc_0x28
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
 * Address:	801BF030
 * Size:	000090
 */
void MonoObjectMgr<Game::MapRoom>::doSetView(int)
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
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  b         .loc_0x64

.loc_0x30:
  lwz       r3, 0x2C(r28)
  lbzx      r0, r3, r30
  cmplwi    r0, 0
  bne-      .loc_0x5C
  lwz       r0, 0x28(r28)
  mr        r4, r29
  add       r3, r0, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  addi      r31, r31, 0x1A0
  addi      r30, r30, 0x1

.loc_0x64:
  lwz       r0, 0x24(r28)
  cmpw      r30, r0
  blt+      .loc_0x30
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
 * Address:	801BF0C0
 * Size:	000080
 */
void MonoObjectMgr<Game::MapRoom>::doViewCalc()
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
  b         .loc_0x58

.loc_0x28:
  lwz       r3, 0x2C(r29)
  lbzx      r0, r3, r30
  cmplwi    r0, 0
  bne-      .loc_0x50
  lwz       r0, 0x28(r29)
  add       r3, r0, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     

.loc_0x50:
  addi      r31, r31, 0x1A0
  addi      r30, r30, 0x1

.loc_0x58:
  lwz       r0, 0x24(r29)
  cmpw      r30, r0
  blt+      .loc_0x28
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
 * Address:	801BF140
 * Size:	000090
 */
void MonoObjectMgr<Game::MapRoom>::doSimulation(float)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  stw       r31, 0x14(r1)
  li        r31, 0
  stw       r30, 0x10(r1)
  li        r30, 0
  stw       r29, 0xC(r1)
  mr        r29, r3
  b         .loc_0x64

.loc_0x30:
  lwz       r3, 0x2C(r29)
  lbzx      r0, r3, r30
  cmplwi    r0, 0
  bne-      .loc_0x5C
  lwz       r0, 0x28(r29)
  fmr       f1, f31
  add       r3, r0, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  addi      r31, r31, 0x1A0
  addi      r30, r30, 0x1

.loc_0x64:
  lwz       r0, 0x24(r29)
  cmpw      r30, r0
  blt+      .loc_0x30
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  lwz       r31, 0x14(r1)
  lwz       r30, 0x10(r1)
  lwz       r29, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801BF1D0
 * Size:	000090
 */
void MonoObjectMgr<Game::MapRoom>::doDirectDraw(Graphics &)
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
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  b         .loc_0x64

.loc_0x30:
  lwz       r3, 0x2C(r28)
  lbzx      r0, r3, r30
  cmplwi    r0, 0
  bne-      .loc_0x5C
  lwz       r0, 0x28(r28)
  mr        r4, r29
  add       r3, r0, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  addi      r31, r31, 0x1A0
  addi      r30, r30, 0x1

.loc_0x64:
  lwz       r0, 0x24(r28)
  cmpw      r30, r0
  blt+      .loc_0x30
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
 * Address:	801BF260
 * Size:	000018
 */
void MonoObjectMgr<Game::MapRoom>::resetMgr()
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x28(r3)
  stw       r0, 0x24(r3)
  stw       r0, 0x20(r3)
  stw       r0, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801BF278
 * Size:	000030
 */
void MonoObjectMgr<Game::MapRoom>::clearMgr()
{
/*
.loc_0x0:
  li        r0, 0
  li        r6, 0
  stw       r0, 0x20(r3)
  li        r5, 0x1
  b         .loc_0x20

.loc_0x14:
  lwz       r4, 0x2C(r3)
  stbx      r5, r4, r6
  addi      r6, r6, 0x1

.loc_0x20:
  lwz       r0, 0x24(r3)
  cmpw      r6, r0
  blt+      .loc_0x14
  blr
*/
}

/*
 * --INFO--
 * Address:	801BF2A8
 * Size:	000004
 */
void MonoObjectMgr<Game::MapRoom>::onAlloc()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801BF2AC
 * Size:	00003C
 */
void MonoObjectMgr<Game::MapRoom>::getEmptyIndex()
{
/*
.loc_0x0:
  lwz       r0, 0x24(r3)
  li        r5, 0
  mtctr     r0
  cmpwi     r0, 0
  ble-      .loc_0x34

.loc_0x14:
  lwz       r4, 0x2C(r3)
  lbzx      r0, r4, r5
  cmplwi    r0, 0x1
  bne-      .loc_0x2C
  mr        r3, r5
  blr       

.loc_0x2C:
  addi      r5, r5, 0x1
  bdnz+     .loc_0x14

.loc_0x34:
  li        r3, -0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	801BF2E8
 * Size:	000010
 */
void MonoObjectMgr<Game::MapRoom>::get(void *)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x1A0
  lwz       r3, 0x28(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	801BF2F8
 * Size:	0001E4
 */
void ObjectMgr<Game::MapRoom>::doAnimation()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5D28
  cmplwi    r0, 0
  stw       r0, 0x14(r1)
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x48
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B4

.loc_0x48:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xB4

.loc_0x60:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1B4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xB4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x60
  b         .loc_0x1B4

.loc_0xD4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x124
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B4

.loc_0x124:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x198

.loc_0x144:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1B4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x198:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x144

.loc_0x1B4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xD4
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801BF4DC
 * Size:	0001E4
 */
void ObjectMgr<Game::MapRoom>::doEntry()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5D28
  cmplwi    r0, 0
  stw       r0, 0x14(r1)
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x48
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B4

.loc_0x48:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xB4

.loc_0x60:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1B4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xB4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x60
  b         .loc_0x1B4

.loc_0xD4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x124
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B4

.loc_0x124:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x198

.loc_0x144:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1B4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x198:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x144

.loc_0x1B4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xD4
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801BF6C0
 * Size:	0001F4
 */
void ObjectMgr<Game::MapRoom>::doSetView(int)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r5, r5, 0x5D28
  stw       r31, 0x1C(r1)
  cmplwi    r0, 0
  mr        r31, r4
  stw       r0, 0x14(r1)
  stw       r5, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x50
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x50:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xBC

.loc_0x68:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xBC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x68
  b         .loc_0x1C0

.loc_0xDC:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x130
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x130:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1A4

.loc_0x150:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1A4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x150

.loc_0x1C0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xDC
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801BF8B4
 * Size:	0001E4
 */
void ObjectMgr<Game::MapRoom>::doViewCalc()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5D28
  cmplwi    r0, 0
  stw       r0, 0x14(r1)
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x48
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B4

.loc_0x48:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xB4

.loc_0x60:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1B4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xB4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x60
  b         .loc_0x1B4

.loc_0xD4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x124
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B4

.loc_0x124:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x198

.loc_0x144:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1B4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x198:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x144

.loc_0x1B4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xD4
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801BFA98
 * Size:	0001F4
 */
void ObjectMgr<Game::MapRoom>::doSimulation(float)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5D28
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x50
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x50:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xBC

.loc_0x68:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xBC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x68
  b         .loc_0x1C0

.loc_0xDC:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  fmr       f1, f31
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x130
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x130:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1A4

.loc_0x150:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1A4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x150

.loc_0x1C0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xDC
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801BFC8C
 * Size:	0001F4
 */
void ObjectMgr<Game::MapRoom>::doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r5, r5, 0x5D28
  stw       r31, 0x1C(r1)
  cmplwi    r0, 0
  mr        r31, r4
  stw       r0, 0x14(r1)
  stw       r5, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x50
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x50:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xBC

.loc_0x68:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xBC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x68
  b         .loc_0x1C0

.loc_0xDC:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x130
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x130:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1A4

.loc_0x150:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1A4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x150

.loc_0x1C0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xDC
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801BFE80
 * Size:	0001E4
 */
void ObjectMgr<Game::MapUnit>::doAnimation()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5EE0
  cmplwi    r0, 0
  stw       r0, 0x14(r1)
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x48
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B4

.loc_0x48:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xB4

.loc_0x60:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1B4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xB4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x60
  b         .loc_0x1B4

.loc_0xD4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x124
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B4

.loc_0x124:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x198

.loc_0x144:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1B4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x198:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x144

.loc_0x1B4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xD4
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801C0064
 * Size:	0001E4
 */
void ObjectMgr<Game::MapUnit>::doEntry()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5EE0
  cmplwi    r0, 0
  stw       r0, 0x14(r1)
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x48
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B4

.loc_0x48:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xB4

.loc_0x60:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1B4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xB4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x60
  b         .loc_0x1B4

.loc_0xD4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x124
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B4

.loc_0x124:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x198

.loc_0x144:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1B4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x198:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x144

.loc_0x1B4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xD4
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801C0248
 * Size:	0001F4
 */
void ObjectMgr<Game::MapUnit>::doSetView(int)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r5, r5, 0x5EE0
  stw       r31, 0x1C(r1)
  cmplwi    r0, 0
  mr        r31, r4
  stw       r0, 0x14(r1)
  stw       r5, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x50
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x50:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xBC

.loc_0x68:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xBC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x68
  b         .loc_0x1C0

.loc_0xDC:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x130
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x130:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1A4

.loc_0x150:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1A4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x150

.loc_0x1C0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xDC
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801C043C
 * Size:	0001E4
 */
void ObjectMgr<Game::MapUnit>::doViewCalc()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5EE0
  cmplwi    r0, 0
  stw       r0, 0x14(r1)
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x48
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B4

.loc_0x48:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xB4

.loc_0x60:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1B4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xB4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x60
  b         .loc_0x1B4

.loc_0xD4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x124
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B4

.loc_0x124:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x198

.loc_0x144:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1B4
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x198:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x144

.loc_0x1B4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xD4
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801C0620
 * Size:	0001F4
 */
void ObjectMgr<Game::MapUnit>::doSimulation(float)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5EE0
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x50
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x50:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xBC

.loc_0x68:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xBC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x68
  b         .loc_0x1C0

.loc_0xDC:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  fmr       f1, f31
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x130
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x130:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1A4

.loc_0x150:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1A4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x150

.loc_0x1C0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xDC
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801C0814
 * Size:	0001F4
 */
void ObjectMgr<Game::MapUnit>::doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r5, r5, 0x5EE0
  stw       r31, 0x1C(r1)
  cmplwi    r0, 0
  mr        r31, r4
  stw       r0, 0x14(r1)
  stw       r5, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x50
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x50:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xBC

.loc_0x68:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xBC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x68
  b         .loc_0x1C0

.loc_0xDC:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x130
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x130:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1A4

.loc_0x150:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1A4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x150

.loc_0x1C0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xDC
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801C0A08
 * Size:	00002C
 */
void Container<Game::MapRoom>::getObject(void *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801C0A34
 * Size:	000008
 */
void Container<Game::MapRoom>::getAt(int)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801C0A3C
 * Size:	000008
 */
void Container<Game::MapRoom>::getTo()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801C0A44
 * Size:	00002C
 */
void Container<Game::MapUnit>::getObject(void *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801C0A70
 * Size:	000008
 */
void Container<Game::MapUnit>::getAt(int)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801C0A78
 * Size:	000008
 */
void Container<Game::MapUnit>::getTo()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801C0A80
 * Size:	000188
 */
void MonoObjectMgr<Game::MapRoom>::alloc(int)
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
  mr        r29, r31
  mulli     r3, r29, 0x1A0
  stw       r28, 0x10(r1)
  addi      r3, r3, 0x10
  bl        -0x19CB04
  lis       r4, 0x801B
  mr        r7, r29
  addi      r4, r4, 0x6E2C
  li        r5, 0
  li        r6, 0x1A0
  bl        -0xFF0D8
  stw       r3, 0x28(r30)
  li        r0, 0
  mr        r3, r29
  stw       r31, 0x24(r30)
  stw       r0, 0x20(r30)
  bl        -0x19CB34
  cmpwi     r31, 0
  stw       r3, 0x2C(r30)
  li        r11, 0
  ble-      .loc_0x120
  cmpwi     r31, 0x8
  subi      r3, r31, 0x8
  ble-      .loc_0xFC
  addi      r0, r3, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r3, 0
  ble-      .loc_0xFC

.loc_0x94:
  lwz       r3, 0x2C(r30)
  li        r10, 0x1
  addi      r8, r11, 0x1
  addi      r7, r11, 0x2
  stbx      r10, r3, r11
  addi      r6, r11, 0x3
  addi      r5, r11, 0x4
  addi      r4, r11, 0x5
  lwz       r9, 0x2C(r30)
  addi      r3, r11, 0x6
  addi      r0, r11, 0x7
  addi      r11, r11, 0x8
  stbx      r10, r9, r8
  lwz       r8, 0x2C(r30)
  stbx      r10, r8, r7
  lwz       r7, 0x2C(r30)
  stbx      r10, r7, r6
  lwz       r6, 0x2C(r30)
  stbx      r10, r6, r5
  lwz       r5, 0x2C(r30)
  stbx      r10, r5, r4
  lwz       r4, 0x2C(r30)
  stbx      r10, r4, r3
  lwz       r3, 0x2C(r30)
  stbx      r10, r3, r0
  bdnz+     .loc_0x94

.loc_0xFC:
  sub       r0, r31, r11
  li        r4, 0x1
  mtctr     r0
  cmpw      r11, r31
  bge-      .loc_0x120

.loc_0x110:
  lwz       r3, 0x2C(r30)
  stbx      r4, r3, r11
  addi      r11, r11, 0x1
  bdnz+     .loc_0x110

.loc_0x120:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  li        r28, 0
  li        r29, 0
  b         .loc_0x160

.loc_0x140:
  lwz       r0, 0x28(r30)
  add       r3, r0, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r29, r29, 0x1A0
  addi      r28, r28, 0x1

.loc_0x160:
  cmpw      r28, r31
  blt+      .loc_0x140
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
 * Address:	801C0C08
 * Size:	00009C
 */
void MonoObjectMgr<Game::MapRoom>::MonoObjectMgr()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x250774
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r0, r4, 0x5324
  lis       r6, 0x804B
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x5D40
  lis       r4, 0x804B
  lis       r3, 0x804B
  stw       r0, 0x0(r31)
  li        r8, 0
  addi      r7, r4, 0x5D6C
  addi      r5, r3, 0x5DE8
  stb       r8, 0x18(r31)
  subi      r0, r6, 0x4A10
  addi      r6, r7, 0x2C
  addi      r4, r5, 0x2C
  stw       r0, 0x1C(r31)
  li        r0, 0x1
  mr        r3, r31
  stw       r7, 0x0(r31)
  stw       r6, 0x1C(r31)
  stw       r5, 0x0(r31)
  stw       r4, 0x1C(r31)
  stb       r0, 0x18(r31)
  stw       r8, 0x24(r31)
  stw       r8, 0x20(r31)
  stw       r8, 0x28(r31)
  stw       r8, 0x2C(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801C0CA4
 * Size:	000028
 */
void __sinit_gameMapParts_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804B
  stw       r0, -0x6C08(r13)
  stfsu     f0, 0x5C20(r3)
  stfs      f0, -0x6C04(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801C0CCC
 * Size:	000008
 */
void NodeObjectMgr<Game::MapUnit>::@28@resetMgr()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1EA8
*/
}

/*
 * --INFO--
 * Address:	801C0CD4
 * Size:	000008
 */
void ObjectMgr<Game::MapUnit>::@28@doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x4C4
*/
}

/*
 * --INFO--
 * Address:	801C0CDC
 * Size:	000008
 */
void ObjectMgr<Game::MapUnit>::@28@doSimulation(float)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x6C0
*/
}

/*
 * --INFO--
 * Address:	801C0CE4
 * Size:	000008
 */
void ObjectMgr<Game::MapUnit>::@28@doViewCalc()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x8AC
*/
}

/*
 * --INFO--
 * Address:	801C0CEC
 * Size:	000008
 */
void ObjectMgr<Game::MapUnit>::@28@doSetView(int)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0xAA8
*/
}

/*
 * --INFO--
 * Address:	801C0CF4
 * Size:	000008
 */
void ObjectMgr<Game::MapUnit>::@28@doEntry()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0xC94
*/
}

/*
 * --INFO--
 * Address:	801C0CFC
 * Size:	000008
 */
void ObjectMgr<Game::MapUnit>::@28@doAnimation()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0xE80
*/
}

/*
 * --INFO--
 * Address:	801C0D04
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28@resetMgr()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1AA8
*/
}

/*
 * --INFO--
 * Address:	801C0D0C
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28@doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1B40
*/
}

/*
 * --INFO--
 * Address:	801C0D14
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28@doSimulation(float)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1BD8
*/
}

/*
 * --INFO--
 * Address:	801C0D1C
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28@doViewCalc()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1C60
*/
}

/*
 * --INFO--
 * Address:	801C0D24
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28@doSetView(int)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1CF8
*/
}

/*
 * --INFO--
 * Address:	801C0D2C
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28@doEntry()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1D80
*/
}

/*
 * --INFO--
 * Address:	801C0D34
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28@doAnimation()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1E08
*/
}

/*
 * --INFO--
 * Address:	801C0D3C
 * Size:	000008
 */
void ObjectMgr<Game::MapRoom>::@28@doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x10B4
*/
}

/*
 * --INFO--
 * Address:	801C0D44
 * Size:	000008
 */
void ObjectMgr<Game::MapRoom>::@28@doSimulation(float)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x12B0
*/
}

/*
 * --INFO--
 * Address:	801C0D4C
 * Size:	000008
 */
void ObjectMgr<Game::MapRoom>::@28@doViewCalc()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x149C
*/
}

/*
 * --INFO--
 * Address:	801C0D54
 * Size:	000008
 */
void ObjectMgr<Game::MapRoom>::@28@doSetView(int)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1698
*/
}

/*
 * --INFO--
 * Address:	801C0D5C
 * Size:	000008
 */
void ObjectMgr<Game::MapRoom>::@28@doEntry()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1884
*/
}

/*
 * --INFO--
 * Address:	801C0D64
 * Size:	000008
 */
void ObjectMgr<Game::MapRoom>::@28@doAnimation()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1A70
*/
}

/*
 * --INFO--
 * Address:	801C0D6C
 * Size:	000014
 */
void @280@4@frozenable__Q24Game6MapMgrFv(void)
{
/*
.loc_0x0:
  li        r11, 0x4
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x118
  b         -0x5CC8C
*/
}

/*
 * --INFO--
 * Address:	801C0D80
 * Size:	000014
 */
void @280@4@doDirectDraw__Q24Game10RoomMapMgrFR8Graphics(void)
{
/*
.loc_0x0:
  li        r11, 0x4
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x118
  b         -0x2918
*/
}

/*
 * --INFO--
 * Address:	801C0D94
 * Size:	000014
 */
void @280@4@doSimulation__Q24Game10RoomMapMgrFf(void)
{
/*
.loc_0x0:
  li        r11, 0x4
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x118
  b         -0x2930
*/
}

/*
 * --INFO--
 * Address:	801C0DA8
 * Size:	000014
 */
void @280@4@doViewCalc__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  li        r11, 0x4
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x118
  b         -0x29AC
*/
}

/*
 * --INFO--
 * Address:	801C0DBC
 * Size:	000014
 */
void @280@4@doSetView__Q24Game10RoomMapMgrFi(void)
{
/*
.loc_0x0:
  li        r11, 0x4
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x118
  b         -0x2A3C
*/
}

/*
 * --INFO--
 * Address:	801C0DD0
 * Size:	000014
 */
void @280@4@doEntry__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  li        r11, 0x4
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x118
  b         -0x2B2C
*/
}

/*
 * --INFO--
 * Address:	801C0DE4
 * Size:	000014
 */
void @280@4@doAnimation__Q24Game10RoomMapMgrFv(void)
{
/*
.loc_0x0:
  li        r11, 0x4
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x118
  b         -0x2BA0
*/
}