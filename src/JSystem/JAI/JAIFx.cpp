#include "JSystem/JAI/JAInter.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global initOnCodeFxScene__Q27JAInter2Fx
    initOnCodeFxScene__Q27JAInter2Fx:
        .skip 0x4
    .global mSceneMax__Q27JAInter2Fx
    mSceneMax__Q27JAInter2Fx:
        .skip 0x4
    .global mBufferSizeMax__Q27JAInter2Fx
    mBufferSizeMax__Q27JAInter2Fx:
        .skip 0x4
    .global mBufferPointer__Q27JAInter2Fx
    mBufferPointer__Q27JAInter2Fx:
        .skip 0x4
    .global mFxconfigTable__Q27JAInter2Fx
    mFxconfigTable__Q27JAInter2Fx:
        .skip 0x8
*/

/*
 * --INFO--
 * Address:	800AD6CC
 * Size:	000160
 */
void JAInter::Fx::init(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r0, initOnCodeFxScene__Q27JAInter2Fx@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AD810
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r3, 0x10
	li       r5, 4
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, mBufferSizeMax__Q27JAInter2Fx@sda21(r13)
	li       r3, 0x10
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r5, 4
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, mBufferPointer__Q27JAInter2Fx@sda21(r13)
	lwz      r31, initOnCodeFxScene__Q27JAInter2Fx@sda21(r13)
	lwz      r0, 0(r31)
	clrlwi   r3, r0, 0x18
	bl       setSceneMax__Q27JAInter2FxFUc
	lwz      r3, 4(r31)
	lwz      r4, 8(r31)
	lwz      r5, 0xc(r31)
	lwz      r6, 0x10(r31)
	bl       setBufferMax__Q27JAInter2FxFUlUlUlUl
	lwz      r30, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getSceneMax__Q27JAInter2FxFv
	rlwinm   r3, r3, 2, 0x16, 0x1d
	mr       r4, r30
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	bl       setTablePointer__Q27JAInter2FxFPPv
	li       r30, 0
	b        lbl_800AD780

lbl_800AD760:
	rlwinm   r3, r30, 2, 0x16, 0x1d
	lwz      r4, initOnCodeFxScene__Q27JAInter2Fx@sda21(r13)
	addi     r0, r3, 0x14
	lwzx     r0, r31, r0
	mr       r3, r30
	add      r4, r4, r0
	bl       setScenePointer__Q27JAInter2FxFUcPv
	addi     r30, r30, 1

lbl_800AD780:
	bl       getSceneMax__Q27JAInter2FxFv
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r30, 0x18
	cmplw    r0, r3
	blt      lbl_800AD760
	li       r29, 0
	b        lbl_800AD804

lbl_800AD79C:
	mr       r3, r29
	bl       getBufferSizeMax__Q27JAInter2FxFUc
	cmplwi   r3, 0
	beq      lbl_800AD800
	lwz      r30, msCurrentHeap__8JAIBasic@sda21(r13)
	mr       r3, r29
	bl       getBufferSizeMax__Q27JAInter2FxFUc
	mulli    r0, r3, 0xa0
	mr       r4, r30
	li       r5, 0x20
	rlwinm   r3, r0, 0, 0, 0x1e
	bl       __nwa__FUlP7JKRHeapi
	mr       r0, r3
	mr       r3, r29
	mr       r4, r0
	bl       setBufferPointer__Q27JAInter2FxFUcPs
	bl       getFxconfigTable__Q27JAInter2FxFv
	lwz      r30, 0(r3)
	mr       r3, r29
	rlwinm   r31, r29, 5, 0x13, 0x1a
	bl       getBufferPointer__Q27JAInter2FxFUc
	mr       r4, r3
	mr       r3, r29
	add      r5, r30, r31
	bl       setFXLine__6JASDspFUcPsPQ26JASDsp13FxlineConfig_

lbl_800AD800:
	addi     r29, r29, 1

lbl_800AD804:
	clrlwi   r0, r29, 0x18
	cmplwi   r0, 4
	blt      lbl_800AD79C

lbl_800AD810:
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
 * Address:	800AD82C
 * Size:	000008
 */
void JAInter::Fx::setSceneMax(unsigned char)
{
	/*
	stb      r3, mSceneMax__Q27JAInter2Fx@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD834
 * Size:	000024
 */
void JAInter::Fx::setBufferMax(unsigned long, unsigned long, unsigned long,
                               unsigned long)
{
	/*
	.loc_0x0:
	  lwz       r7, -0x7458(r13)
	  stw       r3, 0x0(r7)
	  lwz       r3, -0x7458(r13)
	  stw       r4, 0x4(r3)
	  lwz       r3, -0x7458(r13)
	  stw       r5, 0x8(r3)
	  lwz       r3, -0x7458(r13)
	  stw       r6, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AD858
 * Size:	000008
 */
void JAInter::Fx::setTablePointer(void**)
{
	/*
	stw      r3, mFxconfigTable__Q27JAInter2Fx@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD860
 * Size:	000010
 */
void JAInter::Fx::setBufferPointer(unsigned char, short*)
{
	/*
	lwz      r5, mBufferPointer__Q27JAInter2Fx@sda21(r13)
	rlwinm   r0, r3, 2, 0x16, 0x1d
	stwx     r4, r5, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD870
 * Size:	000010
 */
void JAInter::Fx::setScenePointer(unsigned char, void*)
{
	/*
	lwz      r5, mFxconfigTable__Q27JAInter2Fx@sda21(r13)
	rlwinm   r0, r3, 2, 0x16, 0x1d
	stwx     r4, r5, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD880
 * Size:	000008
 */
void JAInter::Fx::getSceneMax(void)
{
	/*
	lbz      r3, mSceneMax__Q27JAInter2Fx@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD888
 * Size:	000010
 */
void JAInter::Fx::getBufferSizeMax(unsigned char)
{
	/*
	lwz      r4, mBufferSizeMax__Q27JAInter2Fx@sda21(r13)
	rlwinm   r0, r3, 2, 0x16, 0x1d
	lwzx     r3, r4, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD898
 * Size:	000010
 */
void JAInter::Fx::getBufferPointer(unsigned char)
{
	/*
	lwz      r4, mBufferPointer__Q27JAInter2Fx@sda21(r13)
	rlwinm   r0, r3, 2, 0x16, 0x1d
	lwzx     r3, r4, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD8A8
 * Size:	000008
 */
void JAInter::Fx::getFxconfigTable(void)
{
	/*
	lwz      r3, mFxconfigTable__Q27JAInter2Fx@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void JAInter::Fx::clearBuffer(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD8B0
 * Size:	0000A0
 */
void JAInter::Fx::clearAllBuffer(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	b        lbl_800AD930

lbl_800AD8C8:
	lwz      r0, mBufferPointer__Q27JAInter2Fx@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AD92C
	li       r5, 0
	rlwinm   r7, r31, 2, 0x16, 0x1d
	mr       r6, r5
	mr       r4, r5
	b        lbl_800AD8FC

lbl_800AD8E8:
	lwz      r0, mBufferPointer__Q27JAInter2Fx@sda21(r13)
	addi     r5, r5, 1
	lwzx     r3, r7, r0
	sthx     r4, r3, r6
	addi     r6, r6, 2

lbl_800AD8FC:
	lwz      r3, mBufferSizeMax__Q27JAInter2Fx@sda21(r13)
	lwzx     r0, r7, r3
	mulli    r0, r0, 0xa0
	srwi     r0, r0, 1
	cmplw    r5, r0
	blt      lbl_800AD8E8
	lwzx     r0, r3, r7
	lwz      r3, mBufferPointer__Q27JAInter2Fx@sda21(r13)
	mulli    r0, r0, 0xa0
	lwzx     r3, r3, r7
	srwi     r4, r0, 1
	bl       DCFlushRange

lbl_800AD92C:
	addi     r31, r31, 1

lbl_800AD930:
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 4
	blt      lbl_800AD8C8
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
