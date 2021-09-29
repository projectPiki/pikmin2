

/*
 * --INFO--
 * Address:	800232B4
 * Size:	000124
 */
void JKRHeap::JKRHeap(void *, unsigned long, JKRHeap *, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r31, r3
  mr        r27, r4
  mr        r28, r5
  mr        r29, r6
  mr        r30, r7
  bl        -0x630C
  lis       r3, 0x804A
  addi      r26, r31, 0x40
  subi      r0, r3, 0x100
  stw       r0, 0x0(r31)
  mr        r3, r26
  bl        0x35E0
  mr        r4, r31
  addi      r3, r26, 0xC
  bl        0x34BC
  addi      r3, r31, 0x5C
  bl        0x35CC
  addi      r3, r31, 0x18
  bl        0xCC824
  stw       r28, 0x38(r31)
  cmplwi    r29, 0
  add       r0, r27, r28
  stw       r27, 0x30(r31)
  stw       r0, 0x34(r31)
  bne-      .loc_0x88
  mr        r3, r31
  bl        0x268
  mr        r3, r31
  bl        0x270
  b         .loc_0xCC

.loc_0x88:
  addic.    r4, r31, 0x40
  beq-      .loc_0x94
  addi      r4, r4, 0xC

.loc_0x94:
  addi      r3, r29, 0x40
  bl        0x3598
  lwz       r3, -0x77D8(r13)
  lwz       r0, -0x77D0(r13)
  cmplw     r3, r0
  bne-      .loc_0xB4
  mr        r3, r31
  bl        0x230

.loc_0xB4:
  lwz       r3, -0x77D4(r13)
  lwz       r0, -0x77D0(r13)
  cmplw     r3, r0
  bne-      .loc_0xCC
  mr        r3, r31
  bl        0x228

.loc_0xCC:
  stb       r30, 0x68(r31)
  lbz       r0, 0x68(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0xF4
  lwz       r0, -0x77CC(r13)
  cmplwi    r0, 0
  bne-      .loc_0xF4
  lis       r3, 0x8002
  addi      r0, r3, 0x3E50
  stw       r0, -0x77CC(r13)

.loc_0xF4:
  lbz       r4, -0x7FE0(r13)
  li        r0, 0
  mr        r3, r31
  stb       r4, 0x3C(r31)
  lbz       r4, -0x77C8(r13)
  stb       r4, 0x3D(r31)
  stb       r0, 0x69(r31)
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
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
void JSUList<JKRDisposer>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JSUTree<JKRHeap>::~JSUTree()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JKRHeap>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<JKRHeap>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800233D8
 * Size:	000114
 */
void JKRHeap::~JKRHeap()
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
  beq-      .loc_0xF8
  lis       r3, 0x804A
  addic.    r4, r30, 0x40
  subi      r0, r3, 0x100
  stw       r0, 0x0(r30)
  lwz       r3, 0x50(r30)
  beq-      .loc_0x3C
  addi      r4, r4, 0xC

.loc_0x3C:
  bl        0x3810
  lwz       r4, -0x77D0(r13)
  lwz       r3, 0x40(r4)
  cmplwi    r3, 0
  beq-      .loc_0x54
  subi      r3, r3, 0xC

.loc_0x54:
  lwz       r0, -0x77D4(r13)
  cmplw     r0, r30
  bne-      .loc_0x78
  cmplwi    r3, 0
  bne-      .loc_0x70
  mr        r0, r4
  b         .loc_0x74

.loc_0x70:
  lwz       r0, 0xC(r3)

.loc_0x74:
  stw       r0, -0x77D4(r13)

.loc_0x78:
  lwz       r0, -0x77D8(r13)
  cmplw     r0, r30
  bne-      .loc_0x98
  cmplwi    r3, 0
  bne-      .loc_0x90
  b         .loc_0x94

.loc_0x90:
  lwz       r4, 0xC(r3)

.loc_0x94:
  stw       r4, -0x77D8(r13)

.loc_0x98:
  addic.    r0, r30, 0x5C
  beq-      .loc_0xAC
  addi      r3, r30, 0x5C
  li        r4, 0
  bl        0x33E8

.loc_0xAC:
  addic.    r0, r30, 0x40
  beq-      .loc_0xDC
  addic.    r0, r30, 0x4C
  beq-      .loc_0xC8
  addi      r3, r30, 0x4C
  li        r4, 0
  bl        0x3334

.loc_0xC8:
  addic.    r0, r30, 0x40
  beq-      .loc_0xDC
  addi      r3, r30, 0x40
  li        r4, 0
  bl        0x33B8

.loc_0xDC:
  mr        r3, r30
  li        r4, 0
  bl        -0x6488
  extsh.    r0, r31
  ble-      .loc_0xF8
  mr        r3, r30
  bl        0xBE8

.loc_0xF8:
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
 * Address:	800234EC
 * Size:	0000A8
 */
void JKRHeap::initArena(char **, unsigned long *, int)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r5
  bl        0xC8F24
  mr        r30, r3
  bl        0xC8F14
  mr        r31, r3
  cmplw     r30, r31
  bne-      .loc_0x3C
  li        r3, 0
  b         .loc_0x94

.loc_0x3C:
  mr        r3, r30
  mr        r4, r31
  mr        r5, r29
  bl        0xC8E14
  addi      r0, r3, 0x1F
  rlwinm    r30,r31,0,0,26
  rlwinm    r31,r0,0,0,26
  lis       r4, 0x8000
  stw       r4, -0x77C4(r13)
  mr        r3, r30
  stw       r31, -0x77C0(r13)
  stw       r31, -0x77BC(r13)
  stw       r30, -0x77B8(r13)
  lwz       r0, 0x28(r4)
  stw       r0, -0x77B4(r13)
  bl        0xC8ED8
  mr        r3, r30
  bl        0xC8EC8
  stw       r31, 0x0(r27)
  sub       r0, r30, r31
  li        r3, 0x1
  stw       r0, 0x0(r28)

.loc_0x94:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80023594
 * Size:	000010
 */
void JKRHeap::becomeSystemHeap()
{
/*
.loc_0x0:
  lwz       r0, -0x77D8(r13)
  stw       r3, -0x77D8(r13)
  mr        r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800235A4
 * Size:	000010
 */
void JKRHeap::becomeCurrentHeap()
{
/*
.loc_0x0:
  lwz       r0, -0x77D4(r13)
  stw       r3, -0x77D4(r13)
  mr        r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JKRHeap::destroy(JKRHeap *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800235B4
 * Size:	00002C
 */
void JKRHeap::destroy()
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
 * Address:	800235E0
 * Size:	000060
 */
void JKRHeap::alloc(unsigned long, int, JKRHeap *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r5, 0
  mr        r6, r3
  stw       r0, 0x14(r1)
  mr        r0, r4
  beq-      .loc_0x30
  mr        r3, r5
  mr        r4, r6
  mr        r5, r0
  bl        .loc_0x60
  b         .loc_0x50

.loc_0x30:
  lwz       r3, -0x77D4(r13)
  cmplwi    r3, 0
  beq-      .loc_0x4C
  mr        r4, r6
  mr        r5, r0
  bl        .loc_0x60
  b         .loc_0x50

.loc_0x4C:
  li        r3, 0

.loc_0x50:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x60:
*/
}

/*
 * --INFO--
 * Address:	80023640
 * Size:	00002C
 */
void JKRHeap::alloc(unsigned long, int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
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
 * Address:	8002366C
 * Size:	000048
 */
void JKRHeap::free(void *, JKRHeap *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bne-      .loc_0x28
  bl        0x26C
  mr.       r4, r3
  beq-      .loc_0x34

.loc_0x28:
  mr        r3, r4
  mr        r4, r31
  bl        .loc_0x48

.loc_0x34:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x48:
*/
}

/*
 * --INFO--
 * Address:	800236B4
 * Size:	00002C
 */
void JKRHeap::free(void *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
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
 * Address:	800236E0
 * Size:	000050
 */
void JKRHeap::callAllDisposer()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  b         .loc_0x30

.loc_0x18:
  lwz       r3, 0x0(r3)
  li        r4, -0x1
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x30:
  lwz       r3, 0x5C(r31)
  cmplwi    r3, 0
  bne+      .loc_0x18
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80023730
 * Size:	00002C
 */
void JKRHeap::freeAll()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
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
 * Address:	8002375C
 * Size:	00002C
 */
void JKRHeap::freeTail()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
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
 * Size:	00002C
 */
void JKRHeap::fillFreeArea()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void JKRHeap::resize(void *, unsigned long, JKRHeap *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80023788
 * Size:	00002C
 */
void JKRHeap::resize(void *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x38(r12)
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
 * Size:	000050
 */
void JKRHeap::getSize(void *, JKRHeap *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JKRHeap::getSize(void *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800237B4
 * Size:	00002C
 */
void JKRHeap::getFreeSize()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
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
 * Size:	00002C
 */
void JKRHeap::getMaxFreeBlock()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800237E0
 * Size:	00002C
 */
void JKRHeap::getTotalFreeSize()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
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
 * Address:	8002380C
 * Size:	00002C
 */
void JKRHeap::changeGroupID(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x4C(r12)
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
 * Address:	80023838
 * Size:	000008
 */
void JKRHeap::do_changeGroupID(unsigned char)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80023840
 * Size:	00002C
 */
void JKRHeap::getCurrentGroupId()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x50(r12)
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
 * Address:	8002386C
 * Size:	000008
 */
void JKRHeap::do_getCurrentGroupId()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80023874
 * Size:	000080
 */
void JKRHeap::getMaxAllocatableSize(int)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r31,0,28,31
  subi      r4, r30, 0x1
  sub       r0, r30, r0
  and       r0, r4, r0
  not       r4, r4
  sub       r0, r3, r0
  and       r3, r4, r0
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
 * Address:	800238F4
 * Size:	00003C
 */
void JKRHeap::findFromRoot(void *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r0, -0x77D0(r13)
  cmplwi    r0, 0
  beq-      .loc_0x28
  mr        r3, r0
  bl        .loc_0x3C
  b         .loc_0x2C

.loc_0x28:
  li        r3, 0

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x3C:
*/
}

/*
 * --INFO--
 * Address:	80023930
 * Size:	000270
 */
void JKRHeap::find(void *) const
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r22, 0x18(r1)
  mr        r31, r4
  mr        r26, r3
  lwz       r0, 0x30(r3)
  cmplw     r0, r31
  bgt-      .loc_0x258
  lwz       r0, 0x34(r26)
  cmplw     r31, r0
  bge-      .loc_0x258
  lwz       r0, 0x48(r26)
  cmplwi    r0, 0
  beq-      .loc_0x250
  lwz       r30, 0x40(r26)
  cmplwi    r30, 0
  beq-      .loc_0x248
  subi      r30, r30, 0xC
  b         .loc_0x248

.loc_0x50:
  lwz       r29, 0xC(r30)
  lwz       r0, 0x30(r29)
  cmplw     r0, r31
  bgt-      .loc_0x228
  lwz       r0, 0x34(r29)
  cmplw     r31, r0
  bge-      .loc_0x228
  lwz       r0, 0x48(r29)
  cmplwi    r0, 0
  beq-      .loc_0x220
  lwz       r28, 0x40(r29)
  cmplwi    r28, 0
  beq-      .loc_0x218
  subi      r28, r28, 0xC
  b         .loc_0x218

.loc_0x8C:
  lwz       r27, 0xC(r28)
  lwz       r0, 0x30(r27)
  cmplw     r0, r31
  bgt-      .loc_0x1F8
  lwz       r0, 0x34(r27)
  cmplw     r31, r0
  bge-      .loc_0x1F8
  lwz       r0, 0x48(r27)
  cmplwi    r0, 0
  beq-      .loc_0x1F0
  addi      r3, r27, 0x40
  bl        0x238
  cmplwi    r3, 0
  beq-      .loc_0xC8
  subi      r3, r3, 0xC

.loc_0xC8:
  mr        r24, r3
  b         .loc_0x1E8

.loc_0xD0:
  lwz       r25, 0xC(r24)
  lwz       r0, 0x30(r25)
  cmplw     r0, r31
  bgt-      .loc_0x1C8
  lwz       r0, 0x34(r25)
  cmplw     r31, r0
  bge-      .loc_0x1C8
  lwz       r0, 0x48(r25)
  cmplwi    r0, 0
  beq-      .loc_0x1C0
  addi      r3, r25, 0x40
  bl        0x1E0
  mr        r23, r3
  b         .loc_0x1B0

.loc_0x108:
  lwz       r22, 0xC(r23)
  lwz       r0, 0x30(r22)
  cmplw     r0, r31
  bgt-      .loc_0x194
  lwz       r0, 0x34(r22)
  cmplw     r31, r0
  bge-      .loc_0x194
  addi      r3, r22, 0x40
  bl        0x1AC
  cmplwi    r3, 0
  beq-      .loc_0x18C
  addi      r3, r22, 0x40
  bl        0x1A4
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        0x188
  b         .loc_0x170

.loc_0x14C:
  addi      r3, r1, 0x8
  bl        0x170
  mr        r4, r31
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x168
  b         .loc_0x198

.loc_0x168:
  addi      r3, r1, 0x8
  bl        0x138

.loc_0x170:
  addi      r3, r22, 0x40
  bl        0x128
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        0x104
  rlwinm.   r0,r3,0,24,31
  bne+      .loc_0x14C

.loc_0x18C:
  mr        r3, r22
  b         .loc_0x198

.loc_0x194:
  li        r3, 0

.loc_0x198:
  cmplwi    r3, 0
  beq-      .loc_0x1A4
  b         .loc_0x1CC

.loc_0x1A4:
  mr        r3, r23
  bl        .loc_0x270
  mr        r23, r3

.loc_0x1B0:
  addi      r3, r25, 0x40
  bl        0xE8
  cmplw     r23, r3
  bne+      .loc_0x108

.loc_0x1C0:
  mr        r3, r25
  b         .loc_0x1CC

.loc_0x1C8:
  li        r3, 0

.loc_0x1CC:
  cmplwi    r3, 0
  beq-      .loc_0x1D8
  b         .loc_0x1FC

.loc_0x1D8:
  lwz       r24, 0x18(r24)
  cmplwi    r24, 0
  beq-      .loc_0x1E8
  subi      r24, r24, 0xC

.loc_0x1E8:
  cmplwi    r24, 0
  bne+      .loc_0xD0

.loc_0x1F0:
  mr        r3, r27
  b         .loc_0x1FC

.loc_0x1F8:
  li        r3, 0

.loc_0x1FC:
  cmplwi    r3, 0
  beq-      .loc_0x208
  b         .loc_0x22C

.loc_0x208:
  lwz       r28, 0x18(r28)
  cmplwi    r28, 0
  beq-      .loc_0x218
  subi      r28, r28, 0xC

.loc_0x218:
  cmplwi    r28, 0
  bne+      .loc_0x8C

.loc_0x220:
  mr        r3, r29
  b         .loc_0x22C

.loc_0x228:
  li        r3, 0

.loc_0x22C:
  cmplwi    r3, 0
  beq-      .loc_0x238
  b         .loc_0x25C

.loc_0x238:
  lwz       r30, 0x18(r30)
  cmplwi    r30, 0
  beq-      .loc_0x248
  subi      r30, r30, 0xC

.loc_0x248:
  cmplwi    r30, 0
  bne+      .loc_0x50

.loc_0x250:
  mr        r3, r26
  b         .loc_0x25C

.loc_0x258:
  li        r3, 0

.loc_0x25C:
  lmw       r22, 0x18(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr       

.loc_0x270:
*/
}

/*
 * --INFO--
 * Address:	80023BA0
 * Size:	000014
 */
void JSUTree<JKRHeap>::getNextChild() const
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
 * Address:	80023BB4
 * Size:	000018
 */
void JSUTreeIterator<JKRHeap>::operator!= (const JSUTree<JKRHeap> *) const
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
 * Address:	80023BCC
 * Size:	000008
 */
void JSUTree<JKRHeap>::getEndChild() const
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80023BD4
 * Size:	00001C
 */
void JSUTreeIterator<JKRHeap>::operator++ ()
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
 * Address:	80023BF0
 * Size:	00000C
 */
void JSUTreeIterator<JKRHeap>::operator-> () const
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
 * Address:	80023BFC
 * Size:	000008
 */
void JSUTreeIterator<JKRHeap>::JSUTreeIterator(JSUTree<JKRHeap> *)
{
/*
.loc_0x0:
  stw       r4, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80023C04
 * Size:	000008
 */
void JSUTree<JKRHeap>::getNumChildren() const
{
/*
.loc_0x0:
  lwz       r3, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80023C0C
 * Size:	000014
 */
void JSUTree<JKRHeap>::getFirstChild() const
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
 * Address:	80023C20
 * Size:	000008
 */
void JSUPtrList::getFirstLink() const
{
/*
.loc_0x0:
  lwz       r3, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JKRHeap::dispose_subroutine(unsigned long, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80023C28
 * Size:	0000A8
 */
void JKRHeap::dispose(void *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  add       r30, r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r4, 0x5C(r3)
  b         .loc_0x7C

.loc_0x34:
  lwz       r3, 0x0(r4)
  cmplw     r29, r3
  bgt-      .loc_0x74
  cmplw     r3, r30
  bge-      .loc_0x74
  lwz       r12, 0x0(r3)
  li        r4, -0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmplwi    r31, 0
  bne-      .loc_0x6C
  lwz       r4, 0x5C(r28)
  b         .loc_0x7C

.loc_0x6C:
  lwz       r4, 0xC(r31)
  b         .loc_0x7C

.loc_0x74:
  mr        r31, r4
  lwz       r4, 0xC(r4)

.loc_0x7C:
  cmplwi    r4, 0
  bne+      .loc_0x34
  lwz       r0, 0x24(r1)
  li        r3, 0
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
 * Address:	80023CD0
 * Size:	0000A4
 */
void JKRHeap::dispose(void *, void *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r4, 0x5C(r3)
  b         .loc_0x7C

.loc_0x34:
  lwz       r3, 0x0(r4)
  cmplw     r29, r3
  bgt-      .loc_0x74
  cmplw     r3, r30
  bge-      .loc_0x74
  lwz       r12, 0x0(r3)
  li        r4, -0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmplwi    r31, 0
  bne-      .loc_0x6C
  lwz       r4, 0x5C(r28)
  b         .loc_0x7C

.loc_0x6C:
  lwz       r4, 0xC(r31)
  b         .loc_0x7C

.loc_0x74:
  mr        r31, r4
  lwz       r4, 0xC(r4)

.loc_0x7C:
  cmplwi    r4, 0
  bne+      .loc_0x34
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
 * Address:	80023D74
 * Size:	000050
 */
void JKRHeap::dispose()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  b         .loc_0x30

.loc_0x18:
  lwz       r3, 0x0(r3)
  li        r4, -0x1
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x30:
  lwz       r3, 0x5C(r31)
  cmplwi    r3, 0
  bne+      .loc_0x18
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80023DC4
 * Size:	00008C
 */
void JKRHeap::copyMemory(void *, void *, unsigned long)
{
/*
.loc_0x0:
  addi      r0, r5, 0x3
  rlwinm.   r0,r0,30,2,31
  mr        r5, r0
  beqlr-    
  rlwinm.   r0,r0,29,3,31
  mtctr     r0
  beq-      .loc_0x70

.loc_0x1C:
  lwz       r0, 0x0(r4)
  stw       r0, 0x0(r3)
  lwz       r0, 0x4(r4)
  stw       r0, 0x4(r3)
  lwz       r0, 0x8(r4)
  stw       r0, 0x8(r3)
  lwz       r0, 0xC(r4)
  stw       r0, 0xC(r3)
  lwz       r0, 0x10(r4)
  stw       r0, 0x10(r3)
  lwz       r0, 0x14(r4)
  stw       r0, 0x14(r3)
  lwz       r0, 0x18(r4)
  stw       r0, 0x18(r3)
  lwz       r0, 0x1C(r4)
  addi      r4, r4, 0x20
  stw       r0, 0x1C(r3)
  addi      r3, r3, 0x20
  bdnz+     .loc_0x1C
  andi.     r5, r5, 0x7
  beqlr-    

.loc_0x70:
  mtctr     r5

.loc_0x74:
  lwz       r0, 0x0(r4)
  addi      r4, r4, 0x4
  stw       r0, 0x0(r3)
  addi      r3, r3, 0x4
  bdnz+     .loc_0x74
  blr
*/
}

/*
 * --INFO--
 * Address:	80023E50
 * Size:	000034
 */
void JKRDefaultMemoryErrorRoutine(void *, unsigned long, int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x8047
  li        r4, 0x317
  stw       r0, 0x14(r1)
  addi      r3, r3, 0x3A68
  subi      r5, r2, 0x7E30
  crclr     6, 0x6
  bl        0xC98FC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JKRHeap::setErrorFlag(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80023E84
 * Size:	000020
 */
void JKRHeap::setErrorHandler(void (*) (void *, unsigned long, int))
{
/*
.loc_0x0:
  cmplwi    r3, 0
  lwz       r0, -0x77CC(r13)
  bne-      .loc_0x14
  lis       r3, 0x8002
  addi      r3, r3, 0x3E50

.loc_0x14:
  stw       r3, -0x77CC(r13)
  mr        r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void JKRHeap::fillMemory(unsigned char *, unsigned long, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JKRHeap::checkMemoryFilled(unsigned char *, unsigned long, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00028C
 */
void JKRHeap::isSubHeap(JKRHeap *) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JSUTreeIterator<JKRHeap>::getObject() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JSUTree<JKRHeap>::getObject() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80023EA4
 * Size:	00004C
 */
void operator new (unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r0, -0x77D4(r13)
  cmplwi    r0, 0
  beq-      .loc_0x38
  mr        r3, r0
  li        r5, 0x4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x3C

.loc_0x38:
  li        r3, 0

.loc_0x3C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80023EF0
 * Size:	000050
 */
void operator new (unsigned long, int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r0, -0x77D4(r13)
  cmplwi    r0, 0
  beq-      .loc_0x3C
  mr        r3, r0
  mr        r4, r6
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x40

.loc_0x3C:
  li        r3, 0

.loc_0x40:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80023F40
 * Size:	00006C
 */
void operator new (unsigned long, JKRHeap *, int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  mr        r0, r3
  beq-      .loc_0x34
  mr        r3, r4
  mr        r4, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x5C

.loc_0x34:
  lwz       r3, -0x77D4(r13)
  cmplwi    r3, 0
  beq-      .loc_0x58
  lwz       r12, 0x0(r3)
  mr        r4, r0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x5C

.loc_0x58:
  li        r3, 0

.loc_0x5C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80023FAC
 * Size:	00004C
 */
void operator new[] (unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r0, -0x77D4(r13)
  cmplwi    r0, 0
  beq-      .loc_0x38
  mr        r3, r0
  li        r5, 0x4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x3C

.loc_0x38:
  li        r3, 0

.loc_0x3C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80023FF8
 * Size:	000050
 */
void operator new[] (unsigned long, int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r0, -0x77D4(r13)
  cmplwi    r0, 0
  beq-      .loc_0x3C
  mr        r3, r0
  mr        r4, r6
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x40

.loc_0x3C:
  li        r3, 0

.loc_0x40:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80024048
 * Size:	00006C
 */
void operator new[] (unsigned long, JKRHeap *, int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  mr        r0, r3
  beq-      .loc_0x34
  mr        r3, r4
  mr        r4, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x5C

.loc_0x34:
  lwz       r3, -0x77D4(r13)
  cmplwi    r3, 0
  beq-      .loc_0x58
  lwz       r12, 0x0(r3)
  mr        r4, r0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x5C

.loc_0x58:
  li        r3, 0

.loc_0x5C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800240B4
 * Size:	000024
 */
void operator delete (void *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  bl        -0xA58
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800240D8
 * Size:	000024
 */
void operator delete[] (void *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  bl        -0xA7C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __ct__Q27JKRHeap6TStateFRCQ37JKRHeap6TState9TArgumentRCQ37JKRHeap6TState9TLocation(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void __ct__Q27JKRHeap6TStateFRCQ27JKRHeap6TStateb(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void __ct__Q27JKRHeap6TStateFRCQ27JKRHeap6TStateRCQ37JKRHeap6TState9TLocationb(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800240FC
 * Size:	000414
 */
void __dt__Q27JKRHeap6TStateFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  stmw      r26, 0x78(r1)
  mr.       r31, r3
  mr        r28, r4
  beq-      .loc_0x3FC
  lbz       r0, 0x18(r31)
  cmplwi    r0, 0
  beq-      .loc_0x258
  lwz       r3, 0x10(r31)
  li        r0, 0
  lwz       r5, 0x14(r31)
  cmplwi    r3, 0
  stw       r0, 0x54(r1)
  stw       r0, 0x58(r1)
  beq-      .loc_0x48
  b         .loc_0x4C

.loc_0x48:
  lwz       r3, -0x77D4(r13)

.loc_0x4C:
  li        r6, 0
  li        r0, -0x1
  stw       r3, 0x64(r1)
  addi      r4, r1, 0x54
  stw       r5, 0x68(r1)
  stb       r6, 0x6C(r1)
  stw       r6, 0x70(r1)
  stw       r0, 0x74(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r31)
  mr        r4, r31
  addi      r5, r1, 0x54
  lwz       r12, 0x0(r3)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA4
  b         .loc_0xEC

.loc_0xA4:
  mr        r3, r31
  addi      r4, r1, 0x54
  bl        0x48C
  lbz       r0, -0x77B0(r13)
  cmplwi    r0, 0
  beq-      .loc_0xEC
  lwz       r3, 0x10(r31)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x64(r1)
  addi      r4, r1, 0x54
  lwz       r12, 0x0(r3)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     

.loc_0xEC:
  lbz       r0, 0x6C(r1)
  cmplwi    r0, 0
  beq-      .loc_0x258
  addi      r3, r1, 0x54
  bl        0x418
  mr        r29, r3
  addi      r3, r1, 0x54
  bl        0x404
  li        r0, 0
  mr        r4, r3
  stw       r0, 0x30(r1)
  addi      r3, r1, 0x40
  mr        r5, r29
  li        r6, 0
  stw       r0, 0x34(r1)
  bl        0x3C4
  addi      r3, r1, 0x4C
  bl        0x3A8
  lwz       r3, 0x40(r1)
  addi      r4, r1, 0x30
  lwz       r5, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x64(r1)
  addi      r4, r1, 0x54
  addi      r5, r1, 0x30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x178
  b         .loc_0x1C0

.loc_0x178:
  addi      r3, r1, 0x54
  addi      r4, r1, 0x30
  bl        0x3B8
  lbz       r0, -0x77B0(r13)
  cmplwi    r0, 0
  beq-      .loc_0x1C0
  lwz       r3, 0x64(r1)
  addi      r4, r1, 0x54
  lwz       r12, 0x0(r3)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x40(r1)
  addi      r4, r1, 0x30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     

.loc_0x1C0:
  addi      r3, r1, 0x30
  bl        0x30C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x258
  addi      r3, r1, 0x30
  bl        0x340
  mr        r29, r3
  addi      r3, r1, 0x30
  bl        0x32C
  mr        r4, r3
  mr        r5, r29
  addi      r3, r1, 0xC
  li        r6, 0
  bl        0x25C
  lwz       r3, 0x40(r1)
  addi      r4, r1, 0x30
  addi      r5, r1, 0xC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x224
  bl        0x22C
  b         .loc_0x24C

.loc_0x224:
  addi      r3, r1, 0x30
  addi      r4, r1, 0xC
  bl        0x30C
  bl        0x218
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x24C
  addi      r3, r1, 0x30
  bl        .loc_0x414
  addi      r3, r1, 0xC
  bl        .loc_0x414

.loc_0x24C:
  addi      r3, r1, 0xC
  li        r4, -0x1
  bl        .loc_0x0

.loc_0x258:
  extsh.    r0, r28
  ble-      .loc_0x3FC
  lwz       r28, -0x77D0(r13)
  cmplwi    r28, 0
  beq-      .loc_0x3DC
  lwz       r0, 0x30(r28)
  cmplw     r0, r31
  bgt-      .loc_0x3D4
  lwz       r0, 0x34(r28)
  cmplw     r31, r0
  bge-      .loc_0x3D4
  lwz       r0, 0x48(r28)
  cmplwi    r0, 0
  beq-      .loc_0x3CC
  addi      r3, r28, 0x40
  bl        -0x770
  cmplwi    r3, 0
  beq-      .loc_0x2A4
  subi      r3, r3, 0xC

.loc_0x2A4:
  mr        r29, r3
  b         .loc_0x3C4

.loc_0x2AC:
  lwz       r30, 0xC(r29)
  lwz       r0, 0x30(r30)
  cmplw     r0, r31
  bgt-      .loc_0x3A4
  lwz       r0, 0x34(r30)
  cmplw     r31, r0
  bge-      .loc_0x3A4
  lwz       r0, 0x48(r30)
  cmplwi    r0, 0
  beq-      .loc_0x39C
  addi      r3, r30, 0x40
  bl        -0x7C8
  mr        r26, r3
  b         .loc_0x38C

.loc_0x2E4:
  lwz       r27, 0xC(r26)
  lwz       r0, 0x30(r27)
  cmplw     r0, r31
  bgt-      .loc_0x370
  lwz       r0, 0x34(r27)
  cmplw     r31, r0
  bge-      .loc_0x370
  addi      r3, r27, 0x40
  bl        -0x7FC
  cmplwi    r3, 0
  beq-      .loc_0x368
  addi      r3, r27, 0x40
  bl        -0x804
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x820
  b         .loc_0x34C

.loc_0x328:
  addi      r3, r1, 0x8
  bl        -0x838
  mr        r4, r31
  bl        -0xB00
  cmplwi    r3, 0
  beq-      .loc_0x344
  b         .loc_0x374

.loc_0x344:
  addi      r3, r1, 0x8
  bl        -0x870

.loc_0x34C:
  addi      r3, r27, 0x40
  bl        -0x880
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x8A4
  rlwinm.   r0,r3,0,24,31
  bne+      .loc_0x328

.loc_0x368:
  mr        r3, r27
  b         .loc_0x374

.loc_0x370:
  li        r3, 0

.loc_0x374:
  cmplwi    r3, 0
  beq-      .loc_0x380
  b         .loc_0x3A8

.loc_0x380:
  mr        r3, r26
  bl        -0x8E0
  mr        r26, r3

.loc_0x38C:
  addi      r3, r30, 0x40
  bl        -0x8C0
  cmplw     r26, r3
  bne+      .loc_0x2E4

.loc_0x39C:
  mr        r3, r30
  b         .loc_0x3A8

.loc_0x3A4:
  li        r3, 0

.loc_0x3A8:
  cmplwi    r3, 0
  beq-      .loc_0x3B4
  b         .loc_0x3E0

.loc_0x3B4:
  lwz       r29, 0x18(r29)
  cmplwi    r29, 0
  beq-      .loc_0x3C4
  subi      r29, r29, 0xC

.loc_0x3C4:
  cmplwi    r29, 0
  bne+      .loc_0x2AC

.loc_0x3CC:
  mr        r3, r28
  b         .loc_0x3E0

.loc_0x3D4:
  li        r3, 0
  b         .loc_0x3E0

.loc_0x3DC:
  li        r3, 0

.loc_0x3E0:
  cmplwi    r3, 0
  beq-      .loc_0x3FC
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     

.loc_0x3FC:
  mr        r3, r31
  lmw       r26, 0x78(r1)
  lwz       r0, 0x94(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr       

.loc_0x414:
*/
}

/*
 * --INFO--
 * Address:	80024510
 * Size:	000034
 */
void dump__Q27JKRHeap6TStateCFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  lwz       r3, 0x10(r3)
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x5C(r12)
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
 * Address:	80024544
 * Size:	000008
 */
void isVerbose__Q27JKRHeap6TStateFv(void)
{
/*
.loc_0x0:
  lbz       r3, -0x77B0(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	8002454C
 * Size:	000080
 */
void __ct__Q27JKRHeap6TStateFPC7JKRHeapUlb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  beq-      .loc_0x2C
  b         .loc_0x30

.loc_0x2C:
  lwz       r4, -0x77D4(r13)

.loc_0x30:
  stw       r4, 0x10(r31)
  li        r3, 0
  li        r0, -0x1
  mr        r4, r31
  stw       r5, 0x14(r31)
  stb       r6, 0x18(r31)
  stw       r3, 0x1C(r31)
  stw       r0, 0x20(r31)
  lwz       r3, 0x10(r31)
  lwz       r5, 0x14(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
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
 * Address:	800245CC
 * Size:	000008
 */
void isCompareOnDestructed__Q27JKRHeap6TStateCFv(void)
{
/*
.loc_0x0:
  lbz       r3, 0x18(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800245D4
 * Size:	000014
 */
void __ct__Q37JKRHeap6TState9TLocationFv(void)
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, -0x1
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800245E8
 * Size:	000020
 */
void __ct__Q37JKRHeap6TState9TArgumentFPC7JKRHeapUlb(void)
{
/*
.loc_0x0:
  cmplwi    r4, 0
  beq-      .loc_0xC
  b         .loc_0x10

.loc_0xC:
  lwz       r4, -0x77D4(r13)

.loc_0x10:
  stw       r4, 0x0(r3)
  stw       r5, 0x4(r3)
  stb       r6, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80024608
 * Size:	000008
 */
void getHeap__Q27JKRHeap6TStateCFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80024610
 * Size:	000008
 */
void getId__Q27JKRHeap6TStateCFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x14(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80024618
 * Size:	000004
 */
void JKRHeap::state_register(JKRHeap::TState *, unsigned long) const
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8002461C
 * Size:	000018
 */
void JKRHeap::state_compare(const JKRHeap::TState &, const JKRHeap::TState &) const
{
/*
.loc_0x0:
  lwz       r3, 0x4(r4)
  lwz       r0, 0x4(r5)
  sub       r0, r0, r3
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}

/*
 * --INFO--
 * Address:	80024634
 * Size:	000004
 */
void JKRHeap::state_dumpDifference(const JKRHeap::TState &, const JKRHeap::TState &)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80024638
 * Size:	000004
 */
void JKRHeap::state_dump(const JKRHeap::TState &) const
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8002463C
 * Size:	000008
 */
void JKRHeap::dump_sort()
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}