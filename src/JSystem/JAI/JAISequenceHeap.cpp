#include "JSystem/JAI/JAInter/HeapMgr.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global sAutoHeap__Q27JAInter7HeapMgr
    sAutoHeap__Q27JAInter7HeapMgr:
        .skip 0x4
    .global sStayHeap__Q27JAInter7HeapMgr
    sStayHeap__Q27JAInter7HeapMgr:
        .skip 0x4
    .global sAutoHeapCount__Q27JAInter7HeapMgr
    sAutoHeapCount__Q27JAInter7HeapMgr:
        .skip 0x4
    .global sStayHeapCount__Q27JAInter7HeapMgr
    sStayHeapCount__Q27JAInter7HeapMgr:
        .skip 0x4
*/

/*
 * --INFO--
 * Address:	800B0340
 * Size:	000254
 */
void JAInter::HeapMgr::init(unsigned char, unsigned long, unsigned char, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  rlwinm    r28,r5,0,24,31
	  mr        r31, r4
	  mr        r25, r5
	  mulli     r7, r28, 0x14
	  mr        r30, r3
	  mr        r24, r6
	  li        r5, 0x20
	  addi      r3, r7, 0x10
	  lwz       r4, -0x7494(r13)
	  bl        -0x8C32C
	  lis       r4, 0x800B
	  mr        r7, r28
	  addi      r4, r4, 0x92C
	  li        r5, 0
	  li        r6, 0x14
	  bl        0x11664
	  li        r27, 0
	  stw       r3, -0x7408(r13)
	  mr        r26, r24
	  rlwinm    r25,r25,0,24,31
	  mr        r28, r27
	  li        r24, 0
	  li        r29, -0x1
	  b         .loc_0xC0

	.loc_0x70:
	  lwz       r3, -0x7408(r13)
	  addi      r6, r27, 0xC
	  addi      r4, r27, 0x8
	  addi      r0, r27, 0x10
	  stbx      r28, r3, r27
	  mr        r3, r26
	  li        r5, 0x20
	  lwz       r7, -0x7408(r13)
	  stwx      r28, r7, r6
	  lwz       r6, -0x7408(r13)
	  stwx      r29, r6, r4
	  lwz       r4, -0x7408(r13)
	  stwx      r29, r4, r0
	  lwz       r4, -0x7494(r13)
	  bl        -0x8C3A0
	  lwz       r4, -0x7408(r13)
	  addi      r0, r27, 0x4
	  addi      r27, r27, 0x14
	  addi      r24, r24, 0x1
	  stwx      r3, r4, r0

	.loc_0xC0:
	  cmplw     r24, r25
	  blt+      .loc_0x70
	  rlwinm    r28,r30,0,24,31
	  lwz       r4, -0x7494(r13)
	  mulli     r3, r28, 0x14
	  li        r5, 0x20
	  addi      r3, r3, 0x10
	  bl        -0x8C3D4
	  lis       r4, 0x800B
	  mr        r7, r28
	  addi      r4, r4, 0x92C
	  li        r5, 0
	  li        r6, 0x14
	  bl        0x115BC
	  stw       r3, -0x7404(r13)
	  mr        r3, r31
	  lwz       r4, -0x7494(r13)
	  li        r5, 0x20
	  bl        -0x8C400
	  mr        r10, r28
	  lwz       r4, -0x7404(r13)
	  cmplwi    r10, 0
	  li        r9, 0
	  stw       r3, 0x4(r4)
	  mr        r8, r9
	  mr        r7, r9
	  li        r5, -0x1
	  ble-      .loc_0x240
	  rlwinm.   r0,r10,30,2,31
	  mtctr     r0
	  beq-      .loc_0x208

	.loc_0x13C:
	  lwz       r3, -0x7404(r13)
	  addi      r6, r9, 0xC
	  addi      r4, r9, 0x8
	  addi      r0, r9, 0x10
	  stbx      r8, r3, r9
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  addi      r6, r9, 0x20
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  addi      r4, r9, 0x1C
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  addi      r0, r9, 0x24
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stbx      r8, r3, r9
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  addi      r6, r9, 0x20
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  addi      r4, r9, 0x1C
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  addi      r0, r9, 0x24
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stbx      r8, r3, r9
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  addi      r6, r9, 0x20
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  addi      r4, r9, 0x1C
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  addi      r0, r9, 0x24
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stbx      r8, r3, r9
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  bdnz+     .loc_0x13C
	  andi.     r10, r10, 0x3
	  beq-      .loc_0x240

	.loc_0x208:
	  mtctr     r10

	.loc_0x20C:
	  lwz       r3, -0x7404(r13)
	  addi      r6, r9, 0xC
	  addi      r4, r9, 0x8
	  addi      r0, r9, 0x10
	  stbx      r8, r3, r9
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  bdnz+     .loc_0x20C

	.loc_0x240:
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B0594
 * Size:	000008
 */
void JAInter::HeapMgr::getAutoHeapPointer(void)
{
	/*
	lwz      r3, sAutoHeap__Q27JAInter7HeapMgr@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::HeapMgr::getStayHeapPointer(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::HeapMgr::getAutoHeapCount(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::HeapMgr::getStayHeapCount(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B059C
 * Size:	000100
 */
void JAInter::HeapMgr::checkOnMemory(unsigned long, unsigned char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_800B0614

lbl_800B05C4:
	clrlwi   r0, r31, 0x18
	lwz      r3, sAutoHeap__Q27JAInter7HeapMgr@sda21(r13)
	mulli    r4, r0, 0x14
	add      r3, r3, r4
	lwz      r0, 8(r3)
	cmplw    r29, r0
	bne      lbl_800B0610
	lbz      r0, 0(r3)
	cmplwi   r0, 1
	bne      lbl_800B05F4
	li       r3, -1
	b        lbl_800B0680

lbl_800B05F4:
	cmplwi   r30, 0
	beq      lbl_800B0600
	stb      r31, 0(r30)

lbl_800B0600:
	lwz      r3, sAutoHeap__Q27JAInter7HeapMgr@sda21(r13)
	addi     r0, r4, 4
	lwzx     r3, r3, r0
	b        lbl_800B0680

lbl_800B0610:
	addi     r31, r31, 1

lbl_800B0614:
	bl       getParamAutoHeapMax__18JAIGlobalParameterFv
	clrlwi   r0, r31, 0x18
	cmplw    r0, r3
	blt      lbl_800B05C4
	lwz      r3, sStayHeap__Q27JAInter7HeapMgr@sda21(r13)
	li       r6, 0
	lwz      r4, sStayHeapCount__Q27JAInter7HeapMgr@sda21(r13)
	b        lbl_800B0670

lbl_800B0634:
	clrlwi   r0, r6, 0x18
	mulli    r5, r0, 0x14
	addi     r0, r5, 8
	lwzx     r0, r3, r0
	cmplw    r29, r0
	bne      lbl_800B066C
	cmplwi   r30, 0
	beq      lbl_800B065C
	li       r0, 0xff
	stb      r0, 0(r30)

lbl_800B065C:
	lwz      r3, sStayHeap__Q27JAInter7HeapMgr@sda21(r13)
	addi     r0, r5, 4
	lwzx     r3, r3, r0
	b        lbl_800B0680

lbl_800B066C:
	addi     r6, r6, 1

lbl_800B0670:
	clrlwi   r0, r6, 0x18
	cmplw    r0, r4
	blt      lbl_800B0634
	li       r3, 0

lbl_800B0680:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B069C
 * Size:	000024
 */
void JAInter::HeapMgr::releaseAutoHeapPointer(unsigned char)
{
	/*
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0xff
	beqlr
	mulli    r3, r0, 0x14
	lwz      r4, sAutoHeap__Q27JAInter7HeapMgr@sda21(r13)
	li       r5, -1
	addi     r0, r3, 0x10
	stwx     r5, r4, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAInter::HeapMgr::changeAutoHeapPointerToPosition(unsigned char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B06C0
 * Size:	0000E8
 */
void JAInter::HeapMgr::checkUsefulAutoHeapPosition(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	li       r29, -1
	stw      r28, 0x10(r1)
	li       r28, 0
	b        lbl_800B0710

lbl_800B06F0:
	lwz      r3, sAutoHeap__Q27JAInter7HeapMgr@sda21(r13)
	addi     r0, r31, 8
	lwzx     r3, r3, r0
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	beq      lbl_800B071C
	addi     r31, r31, 0x14
	addi     r30, r30, 1

lbl_800B0710:
	bl       getParamAutoHeapMax__18JAIGlobalParameterFv
	cmplw    r30, r3
	blt      lbl_800B06F0

lbl_800B071C:
	bl       getParamAutoHeapMax__18JAIGlobalParameterFv
	cmplw    r30, r3
	bne      lbl_800B0784
	li       r30, 0
	li       r31, 0
	b        lbl_800B0768

lbl_800B0734:
	lwz      r0, sAutoHeap__Q27JAInter7HeapMgr@sda21(r13)
	add      r3, r0, r31
	lwz      r4, 0xc(r3)
	cmplw    r29, r4
	ble      lbl_800B0760
	lwz      r3, 0x10(r3)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_800B0760
	mr       r28, r30
	mr       r29, r4

lbl_800B0760:
	addi     r31, r31, 0x14
	addi     r30, r30, 1

lbl_800B0768:
	bl       getParamAutoHeapMax__18JAIGlobalParameterFv
	cmplw    r30, r3
	blt      lbl_800B0734
	addis    r0, r29, 1
	cmplwi   r0, 0xffff
	beq      lbl_800B0784
	mr       r30, r28

lbl_800B0784:
	lwz      r0, 0x24(r1)
	clrlwi   r3, r30, 0x18
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B07A8
 * Size:	000048
 */
void JAInter::HeapMgr::getFreeAutoHeapPointer(unsigned char, unsigned long)
{
	/*
	clrlwi   r0, r3, 0x18
	lwz      r3, sAutoHeap__Q27JAInter7HeapMgr@sda21(r13)
	mulli    r5, r0, 0x14
	addi     r0, r5, 8
	stwx     r4, r3, r0
	addi     r0, r5, 0xc
	lwz      r3, sAutoHeap__Q27JAInter7HeapMgr@sda21(r13)
	lwz      r4, sAutoHeapCount__Q27JAInter7HeapMgr@sda21(r13)
	add      r5, r3, r5
	lwz      r3, 4(r5)
	stw      r4, 0x10(r5)
	lwz      r5, sAutoHeapCount__Q27JAInter7HeapMgr@sda21(r13)
	lwz      r4, sAutoHeap__Q27JAInter7HeapMgr@sda21(r13)
	stwx     r5, r4, r0
	lwz      r4, sAutoHeapCount__Q27JAInter7HeapMgr@sda21(r13)
	addi     r0, r4, 1
	stw      r0, sAutoHeapCount__Q27JAInter7HeapMgr@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B07F0
 * Size:	00000C
 */
void JAInter::HeapMgr::checkUsefulStayHeapPosition(void)
{
	/*
	lwz      r0, sStayHeapCount__Q27JAInter7HeapMgr@sda21(r13)
	clrlwi   r3, r0, 0x18
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B07FC
 * Size:	000108
 */
void JAInter::HeapMgr::getFreeStayHeapPointer(unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       getParamStayHeapMax__18JAIGlobalParameterFv
	lwz      r0, sStayHeapCount__Q27JAInter7HeapMgr@sda21(r13)
	cmplw    r0, r3
	blt      lbl_800B0838
	li       r3, 0
	b        lbl_800B08E4

lbl_800B0838:
	mulli    r3, r0, 0x14
	lwz      r4, sStayHeap__Q27JAInter7HeapMgr@sda21(r13)
	lwz      r31, 4(r4)
	addi     r0, r3, 4
	lwzx     r30, r4, r0
	bl       getParamStayHeapSize__18JAIGlobalParameterFv
	add      r3, r31, r3
	add      r0, r28, r30
	cmplw    r0, r3
	bge      lbl_800B08DC
	bl       getParamStayHeapMax__18JAIGlobalParameterFv
	lwz      r0, sStayHeapCount__Q27JAInter7HeapMgr@sda21(r13)
	cmplw    r0, r3
	bge      lbl_800B08DC
	mulli    r3, r0, 0x14
	lwz      r4, sStayHeap__Q27JAInter7HeapMgr@sda21(r13)
	clrlwi.  r0, r28, 0x1b
	rlwinm   r5, r28, 0, 0, 0x1a
	add      r3, r4, r3
	lwz      r30, 4(r3)
	stw      r29, 8(r3)
	lwz      r0, sStayHeapCount__Q27JAInter7HeapMgr@sda21(r13)
	lwz      r4, sStayHeap__Q27JAInter7HeapMgr@sda21(r13)
	mulli    r3, r0, 0x14
	addi     r0, r3, 4
	lwzx     r0, r4, r0
	add      r31, r5, r0
	beq      lbl_800B08AC
	addi     r31, r31, 0x20

lbl_800B08AC:
	lwz      r3, sStayHeapCount__Q27JAInter7HeapMgr@sda21(r13)
	addi     r0, r3, 1
	stw      r0, sStayHeapCount__Q27JAInter7HeapMgr@sda21(r13)
	bl       getParamStayHeapMax__18JAIGlobalParameterFv
	lwz      r0, sStayHeapCount__Q27JAInter7HeapMgr@sda21(r13)
	cmplw    r0, r3
	bge      lbl_800B08E0
	mulli    r3, r0, 0x14
	lwz      r4, sStayHeap__Q27JAInter7HeapMgr@sda21(r13)
	addi     r0, r3, 4
	stwx     r31, r4, r0
	b        lbl_800B08E0

lbl_800B08DC:
	li       r30, 0

lbl_800B08E0:
	mr       r3, r30

lbl_800B08E4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JAInter::HeapMgr::clearAutoHeap(JAInter::HeapBlock*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JAInter::HeapMgr::clearAutoHeap(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void JAInter::HeapMgr::clearStayHeap(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void JAInter::HeapMgr::getAutoHeapPointer(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B0904
 * Size:	000014
 */
void JAInter::HeapMgr::setAutoHeapLoadedFlag(unsigned char, unsigned char)
{
	/*
	clrlwi   r0, r3, 0x18
	lwz      r3, sAutoHeap__Q27JAInter7HeapMgr@sda21(r13)
	mulli    r0, r0, 0x14
	stbx     r4, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B0918
 * Size:	000014
 */
void JAInter::HeapMgr::setStayHeapLoadedFlag(unsigned char, unsigned char)
{
	/*
	clrlwi   r0, r3, 0x18
	lwz      r3, sStayHeap__Q27JAInter7HeapMgr@sda21(r13)
	mulli    r0, r0, 0x14
	stbx     r4, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B092C
 * Size:	000018
 */
JAInter::HeapBlock::HeapBlock(void)
{
	/*
	li       r4, 0
	li       r0, -1
	stw      r4, 0xc(r3)
	stw      r0, 8(r3)
	stw      r0, 0x10(r3)
	blr
	*/
}
