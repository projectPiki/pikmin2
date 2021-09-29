

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80411204
 * Size:	000004
 */
void Node::init()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80411208
 * Size:	0000B0
 */
void Node::displayInfo(int)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  b         .loc_0x38

.loc_0x28:
  addi      r3, r2, 0x1EF0
  crclr     6, 0x6
  bl        -0x323B4C
  addi      r31, r31, 0x1

.loc_0x38:
  cmpw      r31, r30
  blt+      .loc_0x28
  lwz       r4, 0x0(r29)
  addi      r3, r2, 0x1EF8
  crclr     6, 0x6
  bl        -0x323B68
  lwz       r31, 0x4(r29)
  cmplwi    r31, 0
  beq-      .loc_0x8C
  subi      r31, r31, 0xC
  b         .loc_0x8C

.loc_0x64:
  lwz       r3, 0xC(r31)
  addi      r4, r30, 0x1
  lwz       r12, 0x20(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0x18(r31)
  cmplwi    r31, 0
  beq-      .loc_0x8C
  subi      r31, r31, 0xC

.loc_0x8C:
  cmplwi    r31, 0
  bne+      .loc_0x64
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
 * Address:	804112B8
 * Size:	000064
 */
void Node::update()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r31, 0x4(r3)
  cmplwi    r31, 0
  beq-      .loc_0x48
  subi      r31, r31, 0xC
  b         .loc_0x48

.loc_0x24:
  lwz       r3, 0xC(r31)
  lwz       r12, 0x20(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0x18(r31)
  cmplwi    r31, 0
  beq-      .loc_0x48
  subi      r31, r31, 0xC

.loc_0x48:
  cmplwi    r31, 0
  bne+      .loc_0x24
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041131C
 * Size:	000074
 */
void Node::draw(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r4
  lwz       r31, 0x4(r3)
  cmplwi    r31, 0
  beq-      .loc_0x54
  subi      r31, r31, 0xC
  b         .loc_0x54

.loc_0x2C:
  lwz       r3, 0xC(r31)
  mr        r4, r30
  lwz       r12, 0x20(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0x18(r31)
  cmplwi    r31, 0
  beq-      .loc_0x54
  subi      r31, r31, 0xC

.loc_0x54:
  cmplwi    r31, 0
  bne+      .loc_0x2C
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
 * Address:	80411390
 * Size:	000030
 */
void CNode::CNode()
{
/*
.loc_0x0:
  lis       r5, 0x804F
  li        r4, 0
  subi      r5, r5, 0x4AD8
  addi      r0, r2, 0x1F00
  stw       r5, 0x0(r3)
  stw       r4, 0x10(r3)
  stw       r4, 0xC(r3)
  stw       r4, 0x8(r3)
  stw       r4, 0x4(r3)
  stw       r0, 0x14(r3)
  stw       r0, 0x14(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	804113C0
 * Size:	000048
 */
void CNode::addHead(CNode *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r5, 0x10(r3)
  cmplwi    r5, 0
  beq-      .loc_0x34
  stw       r3, 0xC(r4)
  li        r0, 0
  stw       r4, 0x10(r3)
  stw       r0, 0x8(r4)
  stw       r5, 0x4(r4)
  stw       r4, 0x8(r5)
  b         .loc_0x38

.loc_0x34:
  bl        .loc_0x48

.loc_0x38:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x48:
*/
}

/*
 * --INFO--
 * Address:	80411408
 * Size:	0000B0
 */
void CNode::add(CNode *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r4
  lwz       r5, 0x10(r3)
  cmplwi    r5, 0
  beq-      .loc_0x40
  b         .loc_0x28

.loc_0x24:
  mr        r5, r0

.loc_0x28:
  lwz       r0, 0x4(r5)
  cmplwi    r0, 0
  bne+      .loc_0x24
  stw       r27, 0x4(r5)
  stw       r5, 0x8(r27)
  b         .loc_0x44

.loc_0x40:
  stw       r27, 0x10(r3)

.loc_0x44:
  stw       r3, 0xC(r27)
  lis       r5, 0x804A
  lis       r4, 0x804A
  li        r28, 0
  lwz       r29, 0x10(r3)
  subi      r30, r5, 0x6A10
  subi      r31, r4, 0x6A04
  b         .loc_0x94

.loc_0x64:
  cmplw     r29, r27
  bne-      .loc_0x70
  addi      r28, r28, 0x1

.loc_0x70:
  cmpwi     r28, 0x1
  ble-      .loc_0x90
  mr        r3, r30
  mr        r5, r31
  mr        r6, r28
  li        r4, 0xF2
  crclr     6, 0x6
  bl        -0x3E6E54

.loc_0x90:
  lwz       r29, 0x4(r29)

.loc_0x94:
  cmplwi    r29, 0
  bne+      .loc_0x64
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	804114B8
 * Size:	000020
 */
void CNode::calcNextCount()
{
/*
.loc_0x0:
  li        r4, 0x1
  b         .loc_0xC

.loc_0x8:
  addi      r4, r4, 0x1

.loc_0xC:
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne+      .loc_0x8
  mr        r3, r4
  blr
*/
}

/*
 * --INFO--
 * Address:	804114D8
 * Size:	0000B0
 */
void CNode::concat(CNode *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r4
  cmplw     r3, r27
  mr        r29, r3
  mr        r28, r3
  bne-      .loc_0x40
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x6A10
  li        r4, 0x10E
  subi      r5, r5, 0x69EC
  crclr     6, 0x6
  bl        -0x3E6ED4

.loc_0x40:
  lis       r4, 0x804A
  lis       r3, 0x804A
  subi      r30, r4, 0x6A10
  subi      r31, r3, 0x69EC
  b         .loc_0x74

.loc_0x54:
  cmplw     r28, r27
  bne-      .loc_0x70
  mr        r3, r30
  mr        r5, r31
  li        r4, 0x112
  crclr     6, 0x6
  bl        -0x3E6F04

.loc_0x70:
  lwz       r28, 0x4(r28)

.loc_0x74:
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  bne+      .loc_0x54
  b         .loc_0x88

.loc_0x84:
  mr        r29, r0

.loc_0x88:
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  bne+      .loc_0x84
  stw       r27, 0x4(r29)
  stw       r29, 0x8(r27)
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80411588
 * Size:	000048
 */
void CNode::~CNode()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804F
  extsh.    r0, r4
  subi      r0, r5, 0x4AD8
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x3ED500

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
 * Address:	804115D0
 * Size:	000098
 */
void CNode::del()
{
/*
.loc_0x0:
  lwz       r4, 0xC(r3)
  cmplwi    r4, 0
  beqlr-    
  lwz       r5, 0x10(r4)
  li        r6, 0
  b         .loc_0x8C

.loc_0x18:
  cmplw     r5, r3
  bne-      .loc_0x84
  cmplwi    r6, 0
  beq-      .loc_0x54
  lwz       r0, 0x4(r5)
  stw       r0, 0x4(r6)
  lwz       r4, 0x4(r5)
  cmplwi    r4, 0
  beq-      .loc_0x40
  stw       r6, 0x8(r4)

.loc_0x40:
  li        r0, 0
  stw       r0, 0x8(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0xC(r3)
  blr       

.loc_0x54:
  lwz       r0, 0x4(r5)
  stw       r0, 0x10(r4)
  lwz       r4, 0x4(r5)
  cmplwi    r4, 0
  beq-      .loc_0x70
  li        r0, 0
  stw       r0, 0x8(r4)

.loc_0x70:
  li        r0, 0
  stw       r0, 0x8(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0xC(r3)
  blr       

.loc_0x84:
  mr        r6, r5
  lwz       r5, 0x4(r5)

.loc_0x8C:
  cmplwi    r5, 0
  bne+      .loc_0x18
  blr
*/
}

/*
 * --INFO--
 * Address:	80411668
 * Size:	000034
 */
void CNode::getChildCount()
{
/*
.loc_0x0:
  lwz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x2C
  mr        r4, r0
  li        r3, 0
  b         .loc_0x20

.loc_0x18:
  lwz       r4, 0x4(r4)
  addi      r3, r3, 0x1

.loc_0x20:
  cmplwi    r4, 0
  bne+      .loc_0x18
  blr       

.loc_0x2C:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8041169C
 * Size:	000094
 */
void CNode::getChildAt(int)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r26, r3
  lis       r3, 0x804A
  mr        r27, r4
  subi      r30, r5, 0x6A10
  li        r28, 0
  subi      r31, r3, 0x69D4
  lwz       r29, 0x10(r26)
  b         .loc_0x74

.loc_0x34:
  cmplwi    r29, 0
  bne-      .loc_0x6C
  mr        r3, r26
  lwz       r12, 0x0(r26)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r7, r3
  mr        r3, r30
  mr        r5, r31
  mr        r6, r27
  li        r4, 0x15F
  crclr     6, 0x6
  bl        -0x3E70C4

.loc_0x6C:
  lwz       r29, 0x4(r29)
  addi      r28, r28, 0x1

.loc_0x74:
  cmpw      r28, r27
  blt+      .loc_0x34
  mr        r3, r29
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}