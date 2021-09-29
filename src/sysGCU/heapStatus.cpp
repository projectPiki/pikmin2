

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
 * Address:	8042AFC4
 * Size:	0000B0
 */
void HeapStatus::HeapStatus()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  addi      r31, r29, 0x4
  mr        r30, r29
  mr        r3, r31
  bl        -0x40471C
  mr        r4, r29
  addi      r3, r31, 0xC
  bl        -0x404840
  addi      r0, r2, 0x2238
  lis       r3, 0x804F
  stw       r0, 0x0(r29)
  subi      r0, r3, 0x4AC8
  mr        r3, r30
  stw       r0, 0x20(r30)
  bl        -0x19E10
  addi      r3, r29, 0x24
  bl        -0x40E050
  lis       r3, 0x804F
  li        r4, 0
  subi      r3, r3, 0x41A0
  li        r0, -0x1
  stw       r3, 0x20(r29)
  addi      r5, r3, 0x14
  mr        r3, r29
  stw       r5, 0x24(r29)
  stw       r4, 0x3C(r29)
  stw       r0, 0x40(r29)
  stw       r4, 0x44(r29)
  stw       r29, 0x48(r29)
  stb       r4, 0x50(r29)
  stw       r29, 0x4C(r29)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void Node::~Node()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void CoreNode::~CoreNode()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JSUTree<CoreNode>::~JSUTree()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<CoreNode>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<CoreNode>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
void HeapStatus::start(char *, JKRHeap *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void HeapStatus::end(char *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void HeapStatus::setCurrentHeapInfoParent()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void HeapStatus::searchHeapInfo(char *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void HeapStatus::searchHeapInfo(HeapInfo *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00036C
 */
void HeapStatus::dump(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void HeapStatus::dumpNode()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042B074
 * Size:	0001A0
 */
void HeapInfo::~HeapInfo()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr.       r30, r3
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  beq-      .loc_0x17C
  lis       r4, 0x804F
  subi      r4, r4, 0x41A0
  stw       r4, 0x20(r30)
  addi      r0, r4, 0x14
  stw       r0, 0x24(r30)
  lwz       r29, 0x48(r30)
  lwz       r4, 0x4C(r29)
  cmplw     r4, r30
  bne-      .loc_0x9C
  lwz       r3, 0x14(r4)
  cmplwi    r3, 0
  beq-      .loc_0x104
  lwz       r0, 0xC(r3)
  mr        r3, r29
  stw       r0, 0x4C(r29)
  lwz       r28, 0x4C(r29)
  mr        r4, r28
  bl        0x1AC
  stw       r3, 0x4C(r29)
  lwz       r0, 0x4C(r29)
  cmplw     r28, r0
  beq-      .loc_0x104
  lis       r3, 0x804A
  li        r4, 0x115
  subi      r3, r3, 0x6118
  addi      r5, r2, 0x2240
  crclr     6, 0x6
  bl        -0x400AC8
  b         .loc_0x104

.loc_0x9C:
  bl        0x17C
  cmplwi    r3, 0
  beq-      .loc_0x104
  lwz       r3, 0x48(r30)
  stw       r30, 0x4C(r3)
  lwz       r29, 0x48(r30)
  lwz       r3, 0x4C(r29)
  lwz       r3, 0x14(r3)
  cmplwi    r3, 0
  beq-      .loc_0x104
  lwz       r0, 0xC(r3)
  mr        r3, r29
  stw       r0, 0x4C(r29)
  lwz       r28, 0x4C(r29)
  mr        r4, r28
  bl        0x140
  stw       r3, 0x4C(r29)
  lwz       r0, 0x4C(r29)
  cmplw     r28, r0
  beq-      .loc_0x104
  lis       r3, 0x804A
  li        r4, 0x115
  subi      r3, r3, 0x6118
  addi      r5, r2, 0x2240
  crclr     6, 0x6
  bl        -0x400B34

.loc_0x104:
  addic.    r4, r30, 0x4
  beq-      .loc_0x110
  addi      r4, r4, 0xC

.loc_0x110:
  addi      r3, r30, 0x4
  bl        -0x404564
  addi      r3, r30, 0x24
  li        r4, 0
  bl        -0x40E160
  cmplwi    r30, 0
  beq-      .loc_0x16C
  lis       r3, 0x804F
  subi      r0, r3, 0x4AC8
  stw       r0, 0x20(r30)
  beq-      .loc_0x16C
  addic.    r0, r30, 0x4
  beq-      .loc_0x16C
  addic.    r0, r30, 0x10
  beq-      .loc_0x158
  addi      r3, r30, 0x10
  li        r4, 0
  bl        -0x4049F8

.loc_0x158:
  addic.    r0, r30, 0x4
  beq-      .loc_0x16C
  addi      r3, r30, 0x4
  li        r4, 0
  bl        -0x404974

.loc_0x16C:
  extsh.    r0, r31
  ble-      .loc_0x17C
  mr        r3, r30
  bl        -0x407138

.loc_0x17C:
  lwz       r0, 0x24(r1)
  mr        r3, r30
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
 * Address:	........
 * Size:	000054
 */
void HeapInfo::getTotalUsedSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00032C
 */
void HeapInfo::dump(int, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042B214
 * Size:	000014
 */
void JSUTree<CoreNode>::getNextChild() const
{
/*
.loc_0x0:
  lwz       r3, 0x18(r3)
  cmplwi    r3, 0
  beqlr-    
  subi      r3, r3, 0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	8042B228
 * Size:	000018
 */
void JSUTreeIterator<CoreNode>::operator!= (const JSUTree<CoreNode> *) const
{
/*
.loc_0x0:
  lwz       r0, 0x0(r3)
  sub       r3, r4, r0
  sub       r0, r0, r4
  or        r0, r3, r0
  rlwinm    r3,r0,1,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8042B240
 * Size:	000008
 */
void JSUTree<CoreNode>::getEndChild() const
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8042B248
 * Size:	00001C
 */
void JSUTreeIterator<CoreNode>::operator++ ()
{
/*
.loc_0x0:
  lwz       r4, 0x0(r3)
  lwz       r4, 0x18(r4)
  cmplwi    r4, 0
  beq-      .loc_0x14
  subi      r4, r4, 0xC

.loc_0x14:
  stw       r4, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8042B264
 * Size:	00000C
 */
void JSUTreeIterator<CoreNode>::getObject() const
{
/*
.loc_0x0:
  lwz       r3, 0x0(r3)
  lwz       r3, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8042B270
 * Size:	000008
 */
void JSUTreeIterator<CoreNode>::JSUTreeIterator(JSUTree<CoreNode> *)
{
/*
.loc_0x0:
  stw       r4, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JSUTree<CoreNode>::getObject() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042B278
 * Size:	000014
 */
void JSUTree<CoreNode>::getFirstChild() const
{
/*
.loc_0x0:
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beqlr-    
  subi      r3, r3, 0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000270
 */
void HeapInfo::dumpNode(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042B28C
 * Size:	0001D8
 */
void HeapInfo::search(HeapInfo *)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  li        r0, 0
  stmw      r24, 0x10(r1)
  mr        r31, r4
  cmplw     r31, r3
  bne-      .loc_0x28
  mr        r0, r3
  b         .loc_0x1C0

.loc_0x28:
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  beq-      .loc_0x1B8
  subi      r30, r30, 0xC
  b         .loc_0x1B8

.loc_0x3C:
  lwz       r3, 0xC(r30)
  li        r28, 0
  cmplw     r31, r3
  bne-      .loc_0x54
  mr        r28, r3
  b         .loc_0x19C

.loc_0x54:
  lwz       r29, 0x4(r3)
  cmplwi    r29, 0
  beq-      .loc_0x194
  subi      r29, r29, 0xC
  b         .loc_0x194

.loc_0x68:
  lwz       r3, 0xC(r29)
  li        r28, 0
  cmplw     r31, r3
  bne-      .loc_0x80
  mr        r28, r3
  b         .loc_0x17C

.loc_0x80:
  addi      r3, r3, 0x4
  bl        -0x4076F0
  cmplwi    r3, 0
  beq-      .loc_0x94
  subi      r3, r3, 0xC

.loc_0x94:
  mr        r27, r3
  b         .loc_0x174

.loc_0x9C:
  lwz       r3, 0xC(r27)
  li        r28, 0
  cmplw     r31, r3
  bne-      .loc_0xB4
  mr        r28, r3
  b         .loc_0x15C

.loc_0xB4:
  addi      r25, r3, 0x4
  mr        r3, r25
  bl        -0xD0
  mr        r26, r3
  b         .loc_0x14C

.loc_0xC8:
  lwz       r3, 0xC(r26)
  li        r28, 0
  cmplw     r31, r3
  bne-      .loc_0xE0
  mr        r28, r3
  b         .loc_0x138

.loc_0xE0:
  addi      r24, r3, 0x4
  mr        r3, r24
  bl        -0xFC
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x110
  b         .loc_0x11C

.loc_0xFC:
  addi      r3, r1, 0x8
  bl        -0x128
  mr        r4, r31
  bl        .loc_0x0
  mr.       r28, r3
  bne-      .loc_0x138
  addi      r3, r1, 0x8
  bl        -0x15C

.loc_0x11C:
  mr        r3, r24
  bl        -0x16C
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x190
  rlwinm.   r0,r3,0,24,31
  bne+      .loc_0xFC

.loc_0x138:
  cmplwi    r28, 0
  bne-      .loc_0x15C
  mr        r3, r26
  bl        -0x1BC
  mr        r26, r3

.loc_0x14C:
  mr        r3, r25
  bl        -0x19C
  cmplw     r26, r3
  bne+      .loc_0xC8

.loc_0x15C:
  cmplwi    r28, 0
  bne-      .loc_0x17C
  lwz       r27, 0x18(r27)
  cmplwi    r27, 0
  beq-      .loc_0x174
  subi      r27, r27, 0xC

.loc_0x174:
  cmplwi    r27, 0
  bne+      .loc_0x9C

.loc_0x17C:
  cmplwi    r28, 0
  bne-      .loc_0x19C
  lwz       r29, 0x18(r29)
  cmplwi    r29, 0
  beq-      .loc_0x194
  subi      r29, r29, 0xC

.loc_0x194:
  cmplwi    r29, 0
  bne+      .loc_0x68

.loc_0x19C:
  cmplwi    r28, 0
  mr        r0, r28
  bne-      .loc_0x1C0
  lwz       r30, 0x18(r30)
  cmplwi    r30, 0
  beq-      .loc_0x1B8
  subi      r30, r30, 0xC

.loc_0x1B8:
  cmplwi    r30, 0
  bne+      .loc_0x3C

.loc_0x1C0:
  lmw       r24, 0x10(r1)
  mr        r3, r0
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002A4
 */
void HeapInfo::search(char *, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void HeapInfo::isInvalidUsedSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void HeapInfo::isValidUsedSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void CoreNode::getName() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void HeapInfo::getUsedSize(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042B464
 * Size:	000008
 */
void HeapInfo::@36@__dt()
{
/*
.loc_0x0:
  subi      r3, r3, 0x24
  b         -0x3F4
*/
}