#include "types.h"

/*
 * --INFO--
 * Address:	800A6A9C
 * Size:	000074
 */
JASHeap::JASHeap(JASDisposer*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r0, r29
	  mr        r30, r0
	  bl        -0x801F4
	  mr        r4, r29
	  addi      r3, r30, 0xC
	  bl        -0x80318
	  stw       r31, 0x34(r29)
	  li        r0, 0
	  addi      r3, r29, 0x1C
	  stw       r0, 0x38(r29)
	  stw       r0, 0x3C(r29)
	  stw       r0, 0x40(r29)
	  bl        0x49044
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

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JSUTree<JASHeap>::~JSUTree()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JASHeap>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<JASHeap>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JASHeap::adjustSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JASHeap::initRootHeap(void*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A6B10
 * Size:	0001D0
 */
void JASHeap::alloc(JASHeap*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r28, r3
	  addi      r3, r28, 0x1C
	  mr        r29, r4
	  stw       r3, 0x8(r1)
	  mr        r30, r5
	  bl        0x49034
	  lwz       r0, 0x38(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  lwz       r3, 0x8(r1)
	  bl        0x490FC
	  li        r3, 0
	  b         .loc_0x1BC

	.loc_0x44:
	  lwz       r0, 0x38(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x60
	  lwz       r3, 0x8(r1)
	  bl        0x490E0
	  li        r3, 0
	  b         .loc_0x1BC

	.loc_0x60:
	  addi      r0, r30, 0x1F
	  mr        r3, r29
	  rlwinm    r30,r0,0,0,26
	  bl        0x5A0
	  mr        r27, r3
	  mr        r3, r29
	  bl        0x4D0
	  add       r0, r27, r30
	  cmplw     r0, r3
	  bgt-      .loc_0xC0
	  mr        r3, r29
	  bl        0x430
	  lwz       r0, 0x38(r29)
	  mr        r5, r3
	  mr        r3, r29
	  mr        r4, r28
	  mr        r7, r30
	  add       r6, r0, r27
	  li        r8, 0
	  bl        0x330
	  lwz       r3, 0x8(r1)
	  bl        0x49080
	  li        r3, 0x1
	  b         .loc_0x1BC

	.loc_0xC0:
	  lwz       r7, 0x0(r29)
	  li        r10, -0x1
	  lwz       r8, 0x38(r29)
	  li        r11, 0
	  cmplwi    r7, 0
	  li        r5, 0
	  mr        r4, r8
	  beq-      .loc_0xE4
	  subi      r7, r7, 0xC

	.loc_0xE4:
	  add       r6, r8, r3
	  b         .loc_0x13C

	.loc_0xEC:
	  cmplw     r4, r6
	  bge-      .loc_0x144
	  lwz       r9, 0xC(r7)
	  lwz       r0, 0x38(r9)
	  sub       r0, r0, r4
	  cmplw     r0, r30
	  blt-      .loc_0x120
	  cmplw     r0, r10
	  bge-      .loc_0x120
	  mr        r5, r9
	  mr        r31, r4
	  mr        r10, r0
	  li        r11, 0x1

	.loc_0x120:
	  lwz       r7, 0x18(r7)
	  lwz       r4, 0x38(r9)
	  lwz       r0, 0x3C(r9)
	  cmplwi    r7, 0
	  add       r4, r4, r0
	  beq-      .loc_0x13C
	  subi      r7, r7, 0xC

	.loc_0x13C:
	  cmplwi    r7, 0
	  bne+      .loc_0xEC

	.loc_0x144:
	  cmplw     r4, r8
	  beq-      .loc_0x180
	  add       r0, r8, r3
	  cmplw     r4, r0
	  bge-      .loc_0x180
	  lwz       r0, 0x3C(r29)
	  add       r0, r8, r0
	  sub       r0, r0, r4
	  cmplw     r0, r30
	  blt-      .loc_0x180
	  cmplw     r0, r10
	  bge-      .loc_0x180
	  mr        r31, r4
	  li        r5, 0
	  li        r11, 0x1

	.loc_0x180:
	  rlwinm.   r0,r11,0,24,31
	  bne-      .loc_0x198
	  lwz       r3, 0x8(r1)
	  bl        0x48FA8
	  li        r3, 0
	  b         .loc_0x1BC

	.loc_0x198:
	  mr        r3, r29
	  mr        r4, r28
	  mr        r6, r31
	  mr        r7, r30
	  li        r8, 0
	  bl        0x230
	  lwz       r3, 0x8(r1)
	  bl        0x48F80
	  li        r3, 0x1

	.loc_0x1BC:
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A6CE0
 * Size:	0000E8
 */
void JASHeap::allocTail(JASHeap*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r27, r3
	  addi      r3, r27, 0x1C
	  mr        r28, r4
	  stw       r3, 0x8(r1)
	  mr        r29, r5
	  bl        0x48E64
	  lwz       r0, 0x38(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  lwz       r3, 0x8(r1)
	  bl        0x48F2C
	  li        r3, 0
	  b         .loc_0xD4

	.loc_0x44:
	  lwz       r0, 0x38(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x60
	  lwz       r3, 0x8(r1)
	  bl        0x48F10
	  li        r3, 0
	  b         .loc_0xD4

	.loc_0x60:
	  addi      r0, r29, 0x1F
	  mr        r3, r28
	  rlwinm    r29,r0,0,0,26
	  bl        0x3D0
	  mr        r30, r3
	  mr        r3, r28
	  bl        0x300
	  mr        r31, r3
	  add       r0, r30, r29
	  cmplw     r0, r31
	  ble-      .loc_0x9C
	  lwz       r3, 0x8(r1)
	  bl        0x48ED4
	  li        r3, 0
	  b         .loc_0xD4

	.loc_0x9C:
	  mr        r3, r28
	  bl        0x24C
	  lwz       r0, 0x38(r28)
	  mr        r5, r3
	  mr        r3, r28
	  mr        r4, r27
	  add       r0, r0, r31
	  mr        r7, r29
	  li        r8, 0x1
	  sub       r6, r0, r29
	  bl        0x148
	  lwz       r3, 0x8(r1)
	  bl        0x48E98
	  li        r3, 0x1

	.loc_0xD4:
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void JASHeap::allocAll(JASHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A6DC8
 * Size:	000124
 */
void JASHeap::free()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x1C
	  stw       r3, 0x8(r1)
	  bl        0x48D80
	  lwz       r0, 0x38(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x8(r1)
	  bl        0x48E48
	  li        r3, 0
	  b         .loc_0x10C

	.loc_0x40:
	  lwz       r3, 0x0(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x70
	  subi      r3, r3, 0xC
	  b         .loc_0x70

	.loc_0x54:
	  lwz       r31, 0x18(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x64
	  subi      r31, r31, 0xC

	.loc_0x64:
	  lwz       r3, 0xC(r3)
	  bl        .loc_0x0
	  mr        r3, r31

	.loc_0x70:
	  cmplwi    r3, 0
	  bne+      .loc_0x54
	  lwz       r3, 0x10(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
	  lwz       r4, 0xC(r3)
	  lwz       r0, 0x40(r4)
	  cmplw     r0, r30
	  bne-      .loc_0xC0
	  lwz       r5, 0x14(r30)
	  cmplwi    r5, 0
	  beq-      .loc_0xA4
	  subi      r5, r5, 0xC

	.loc_0xA4:
	  cmplwi    r5, 0
	  beq-      .loc_0xB8
	  lwz       r0, 0xC(r5)
	  stw       r0, 0x40(r4)
	  b         .loc_0xC0

	.loc_0xB8:
	  li        r0, 0
	  stw       r0, 0x40(r4)

	.loc_0xC0:
	  cmplwi    r30, 0
	  mr        r4, r30
	  beq-      .loc_0xD0
	  addi      r4, r30, 0xC

	.loc_0xD0:
	  bl        -0x80274

	.loc_0xD4:
	  li        r0, 0
	  stw       r0, 0x38(r30)
	  stw       r0, 0x40(r30)
	  stw       r0, 0x3C(r30)
	  lwz       r3, 0x34(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x100
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x100:
	  lwz       r3, 0x8(r1)
	  bl        0x48D78
	  li        r3, 0x1

	.loc_0x10C:
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
 * Address:	........
 * Size:	0000D4
 */
void JASHeap::freeTail()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JASHeap::freeAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void JASHeap::getTotalFreeSize() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void JASHeap::getFreeSize() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASHeap::dump()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00018C
 */
void JASHeap::dump(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JSUTree<JASHeap>::getNextChild() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void JSUTreeIterator<JASHeap>::operator!=(const JSUTree<JASHeap>*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JSUTree<JASHeap>::getEndChild() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JSUTreeIterator<JASHeap>::operator++()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JSUTreeIterator<JASHeap>::JSUTreeIterator(JSUTree<JASHeap>*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JSUTree<JASHeap>::getParent() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
JASMutexLock::JASMutexLock(OSMutex*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JSUTreeIterator<JASHeap>::operator->() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JSUTree<JASHeap>::getFirstChild() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JSUTree<JASHeap>::getObject() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A6EEC
 * Size:	0000E0
 */
void JASHeap::insertChild(JASHeap*, JASHeap*, void*, unsigned long, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r26, 0x18(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x1C
	  mr        r26, r4
	  stw       r3, 0x8(r1)
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  mr        r30, r8
	  bl        0x48C4C
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x8C
	  cmplwi    r27, 0
	  bne-      .loc_0x58
	  lwz       r4, 0x4(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x68
	  subi      r4, r4, 0xC
	  b         .loc_0x68

	.loc_0x58:
	  lwz       r4, 0x14(r27)
	  cmplwi    r4, 0
	  beq-      .loc_0x68
	  subi      r4, r4, 0xC

	.loc_0x68:
	  cmplwi    r4, 0
	  lwz       r3, 0x40(r31)
	  beq-      .loc_0x7C
	  lwz       r0, 0xC(r4)
	  b         .loc_0x80

	.loc_0x7C:
	  li        r0, 0

	.loc_0x80:
	  cmplw     r3, r0
	  bne-      .loc_0x8C
	  stw       r26, 0x40(r31)

	.loc_0x8C:
	  stw       r28, 0x38(r26)
	  cmplwi    r26, 0
	  li        r0, 0
	  mr        r5, r26
	  stw       r29, 0x3C(r26)
	  stw       r0, 0x40(r26)
	  beq-      .loc_0xAC
	  addi      r5, r26, 0xC

	.loc_0xAC:
	  cmplwi    r27, 0
	  mr        r4, r27
	  beq-      .loc_0xBC
	  addi      r4, r27, 0xC

	.loc_0xBC:
	  mr        r3, r31
	  bl        -0x80558
	  lwz       r3, 0x8(r1)
	  bl        0x48C90
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A6FCC
 * Size:	00008C
 */
void JASHeap::getTailHeap()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x1C
	  stw       r3, 0x8(r1)
	  bl        0x48B80
	  lwz       r3, 0x40(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  subi      r3, r3, 0xC
	  b         .loc_0x50

	.loc_0x40:
	  lwz       r3, 0x18(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  subi      r3, r3, 0xC

	.loc_0x50:
	  cmplwi    r3, 0
	  bne-      .loc_0x68
	  lwz       r3, 0x8(r1)
	  bl        0x48C1C
	  li        r3, 0
	  b         .loc_0x78

	.loc_0x68:
	  lwz       r31, 0xC(r3)
	  lwz       r3, 0x8(r1)
	  bl        0x48C08
	  mr        r3, r31

	.loc_0x78:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A7058
 * Size:	0000C4
 */
void JASHeap::getTailOffset()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x1C
	  stw       r3, 0xC(r1)
	  bl        0x48AF0
	  addi      r3, r30, 0x1C
	  stw       r3, 0x8(r1)
	  bl        0x48AE4
	  lwz       r3, 0x40(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0x50
	  lwz       r3, 0x0(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  subi      r3, r3, 0xC
	  b         .loc_0x60

	.loc_0x50:
	  lwz       r3, 0x18(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  subi      r3, r3, 0xC

	.loc_0x60:
	  cmplwi    r3, 0
	  bne-      .loc_0x78
	  lwz       r3, 0x8(r1)
	  bl        0x48B80
	  li        r31, 0
	  b         .loc_0x84

	.loc_0x78:
	  lwz       r31, 0xC(r3)
	  lwz       r3, 0x8(r1)
	  bl        0x48B6C

	.loc_0x84:
	  cmplwi    r31, 0
	  bne-      .loc_0x94
	  lwz       r31, 0x3C(r30)
	  b         .loc_0xA0

	.loc_0x94:
	  lwz       r3, 0x38(r30)
	  lwz       r0, 0x38(r31)
	  sub       r31, r0, r3

	.loc_0xA0:
	  lwz       r3, 0xC(r1)
	  bl        0x48B48
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A711C
 * Size:	000068
 */
void JASHeap::getCurOffset()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x1C
	  stw       r3, 0x8(r1)
	  bl        0x48A30
	  lwz       r4, 0x40(r31)
	  cmplwi    r4, 0
	  bne-      .loc_0x34
	  li        r31, 0
	  b         .loc_0x48

	.loc_0x34:
	  lwz       r3, 0x38(r4)
	  lwz       r0, 0x3C(r4)
	  lwz       r4, 0x38(r31)
	  add       r0, r3, r0
	  sub       r31, r0, r4

	.loc_0x48:
	  lwz       r3, 0x8(r1)
	  bl        0x48ADC
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
JASSolidHeap::JASSolidHeap()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
JASSolidHeap::JASSolidHeap(unsigned char*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JASSolidHeap::init(unsigned char*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void JASSolidHeap::alloc(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JASSolidHeap::freeLast()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void JASSolidHeap::freeAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void JASSolidHeap::getRemain()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A7184
 * Size:	000014
 */
JASGenericMemPool::JASGenericMemPool()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
JASGenericMemPool::~JASGenericMemPool()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A7198
 * Size:	000094
 */
void JASGenericMemPool::newMemPool(unsigned long, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x60

	.loc_0x30:
	  lwz       r4, -0x7548(r13)
	  mr        r3, r31
	  li        r5, 0
	  bl        -0x8318C
	  lwz       r0, 0x0(r28)
	  stw       r0, 0x0(r3)
	  stw       r3, 0x0(r28)
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  stw       r3, 0x4(r28)

	.loc_0x5C:
	  addi      r30, r30, 0x1

	.loc_0x60:
	  cmpw      r30, r29
	  blt+      .loc_0x30
	  lwz       r0, 0x8(r28)
	  add       r0, r0, r29
	  stw       r0, 0x8(r28)
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
 * Address:	800A722C
 * Size:	000044
 */
void JASGenericMemPool::alloc(unsigned long)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x0(r3)
	  cmplwi    r5, 0
	  bne-      .loc_0x14
	  li        r3, 0
	  blr

	.loc_0x14:
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x0(r3)
	  lwz       r4, 0x8(r3)
	  subi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  li        r0, 0
	  stw       r0, 0x4(r3)

	.loc_0x3C:
	  mr        r3, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A7270
 * Size:	000034
 */
void JASGenericMemPool::free(void*, unsigned long)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r4)
	  lwz       r5, 0x4(r3)
	  cmplwi    r5, 0
	  beq-      .loc_0x1C
	  stw       r4, 0x0(r5)
	  b         .loc_0x20

	.loc_0x1C:
	  stw       r4, 0x0(r3)

	.loc_0x20:
	  stw       r4, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A72A4
 * Size:	000118
 */
void JASKernel::setupRootHeap(JKRSolidHeap*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r4
	  mr        r4, r29
	  bl        -0x87404
	  stw       r3, -0x7540(r13)
	  mr        r4, r29
	  li        r3, 0x1C
	  li        r5, 0
	  bl        -0x833A0
	  mr.       r31, r3
	  beq-      .loc_0xF4
	  li        r0, 0
	  addi      r3, r31, 0x4
	  stw       r0, 0x0(r31)
	  bl        0x48838
	  lwz       r30, 0x0(r31)
	  cmplwi    r30, 0
	  beq-      .loc_0x7C
	  lwz       r0, 0x8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x7C
	  li        r0, 0
	  stw       r0, 0x4(r30)
	  b         .loc_0xF4

	.loc_0x7C:
	  bl        .loc_0x118
	  mr        r4, r3
	  li        r3, 0x40C
	  li        r5, 0
	  bl        -0x833F0
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  stw       r30, 0x0(r3)
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)

	.loc_0xA8:
	  stw       r3, 0x0(r31)
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xF4
	  lwz       r4, -0x77D8(r13)
	  li        r3, 0x40C
	  li        r5, 0
	  bl        -0x83428
	  cmplwi    r3, 0
	  beq-      .loc_0xE0
	  stw       r30, 0x0(r3)
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)

	.loc_0xE0:
	  stw       r3, 0x0(r31)
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xF4
	  stw       r30, 0x0(r31)

	.loc_0xF4:
	  stw       r31, -0x753C(r13)
	  stw       r29, -0x7548(r13)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x118:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASKernel::getRootHeap()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A73BC
 * Size:	000008
 */
void JASKernel::getSystemHeap()
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7540(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A73C4
 * Size:	000008
 */
void JASKernel::getCommandHeap()
{
	/*
	.loc_0x0:
	  lwz       r3, -0x753C(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A73CC
 * Size:	00007C
 */
void JASKernel::setupAramHeap(unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804F
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  addi      r3, r5, 0x70C
	  addi      r3, r3, 0x1C
	  stw       r30, -0x7544(r13)
	  stw       r3, 0x8(r1)
	  bl        0x4876C
	  addi      r0, r30, 0x1F
	  lis       r3, 0x804F
	  rlwinm    r6,r0,0,0,26
	  li        r4, 0
	  sub       r0, r6, r30
	  addi      r5, r3, 0x70C
	  sub       r0, r31, r0
	  stw       r6, 0x38(r5)
	  lwz       r3, 0x8(r1)
	  stw       r4, 0x40(r5)
	  stw       r0, 0x3C(r5)
	  bl        0x48818
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
 * Address:	800A7448
 * Size:	00000C
 */
void JASKernel::getAramHeap()
{
	/*
	.loc_0x0:
	  lis       r3, 0x804F
	  addi      r3, r3, 0x70C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void JASKernel::getAramFreeSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JASKernel::getAramSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A7454
 * Size:	000080
 */
void __sinit_JASHeapCtrl_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x70C
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x80BA8
	  mr        r4, r30
	  addi      r3, r31, 0xC
	  bl        -0x80CCC
	  li        r0, 0
	  addi      r3, r30, 0x1C
	  stw       r0, 0x34(r30)
	  stw       r0, 0x38(r30)
	  stw       r0, 0x3C(r30)
	  stw       r0, 0x40(r30)
	  bl        0x48690
	  lis       r3, 0x800A
	  lis       r5, 0x804F
	  subi      r4, r3, 0x4500
	  mr        r3, r30
	  addi      r5, r5, 0x700
	  bl        0x1A248
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
