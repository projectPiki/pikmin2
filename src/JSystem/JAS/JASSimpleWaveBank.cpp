#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q217JASSimpleWaveBank11TWaveHandle
    __vt__Q217JASSimpleWaveBank11TWaveHandle:
        .4byte 0
        .4byte 0
        .4byte __dt__Q217JASSimpleWaveBank11TWaveHandleFv
        .4byte getWaveInfo__Q217JASSimpleWaveBank11TWaveHandleCFv
        .4byte getWavePtr__Q217JASSimpleWaveBank11TWaveHandleCFv
    .global __vt__17JASSimpleWaveBank
    __vt__17JASSimpleWaveBank:
        .4byte 0
        .4byte 0
        .4byte __dt__17JASSimpleWaveBankFv
        .4byte getWaveHandle__17JASSimpleWaveBankCFUl
        .4byte getWaveArc__17JASSimpleWaveBankFi
        .4byte 0
        .4byte 0
        .4byte onDispose__10JASWaveArcFv
        .4byte onLoadDone__10JASWaveArcFv
        .4byte onEraseDone__10JASWaveArcFv
        .4byte 0
*/

/*
 * --INFO--
 * Address:	8009B6C4
 * Size:	000060
 */
JASSimpleWaveBank::JASSimpleWaveBank()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__11JASWaveBank@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__11JASWaveBank@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0(r3)
	addi     r3, r31, 4
	bl       __ct__10JASWaveArcFv
	lis      r3, __vt__17JASSimpleWaveBank@ha
	li       r0, 0
	addi     r4, r3, __vt__17JASSimpleWaveBank@l
	mr       r3, r31
	stw      r4, 0(r31)
	addi     r4, r4, 0x14
	stw      r4, 4(r31)
	stw      r0, 0x60(r31)
	stw      r0, 0x64(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009B724
 * Size:	0000D4
 */
JASSimpleWaveBank::~JASSimpleWaveBank()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	or.      r29, r3, r3
	beq      lbl_8009B7D8
	lis      r4, __vt__17JASSimpleWaveBank@ha
	lis      r3, __dt__Q217JASSimpleWaveBank11TWaveHandleFv@ha
	addi     r4, r4, __vt__17JASSimpleWaveBank@l
	stw      r4, 0(r29)
	addi     r0, r4, 0x14
	addi     r4, r3, __dt__Q217JASSimpleWaveBank11TWaveHandleFv@l
	stw      r0, 4(r29)
	lwz      r3, 0x60(r29)
	bl       __destroy_new_array
	addic.   r0, r29, 4
	beq      lbl_8009B7B4
	lis      r3, __vt__10JASWaveArc@ha
	addic.   r31, r29, 8
	addi     r0, r3, __vt__10JASWaveArc@l
	stw      r0, 4(r29)
	beq      lbl_8009B7B4
	cmplwi   r31, 0
	beq      lbl_8009B7B4
	addic.   r3, r29, 0x14
	beq      lbl_8009B7A0
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8009B7A0:
	cmplwi   r31, 0
	beq      lbl_8009B7B4
	mr       r3, r31
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_8009B7B4:
	cmplwi   r29, 0
	beq      lbl_8009B7C8
	lis      r3, __vt__11JASWaveBank@ha
	addi     r0, r3, __vt__11JASWaveBank@l
	stw      r0, 0(r29)

lbl_8009B7C8:
	extsh.   r0, r30
	ble      lbl_8009B7D8
	mr       r3, r29
	bl       __dl__FPv

lbl_8009B7D8:
	lwz      r0, 0x24(r1)
	mr       r3, r29
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
 * Address:	8009B7F8
 * Size:	00005C
 */
JASSimpleWaveBank::TWaveHandle::~TWaveHandle(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8009B83C
	lis      r3, __vt__Q217JASSimpleWaveBank11TWaveHandle@ha
	addi     r0, r3, __vt__Q217JASSimpleWaveBank11TWaveHandle@l
	stw      r0, 0(r31)
	beq      lbl_8009B82C
	lis      r3, __vt__13JASWaveHandle@ha
	addi     r0, r3, __vt__13JASWaveHandle@l
	stw      r0, 0(r31)

lbl_8009B82C:
	extsh.   r0, r4
	ble      lbl_8009B83C
	mr       r3, r31
	bl       __dl__FPv

lbl_8009B83C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009B854
 * Size:	000084
 */
void JASSimpleWaveBank::setWaveTableSize(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, __dt__Q217JASSimpleWaveBank11TWaveHandleFv@ha
	addi     r0, r3, __dt__Q217JASSimpleWaveBank11TWaveHandleFv@l
	lwz      r3, 0x60(r30)
	mr       r4, r0
	bl       __destroy_new_array
	bl       getCurrentHeap__11JASWaveBankFv
	mulli    r6, r31, 0x30
	mr       r4, r3
	li       r5, 0
	addi     r3, r6, 0x10
	bl       __nwa__FUlP7JKRHeapi
	lis      r4, __ct__Q217JASSimpleWaveBank11TWaveHandleFv@ha
	lis      r5, __dt__Q217JASSimpleWaveBank11TWaveHandleFv@ha
	addi     r4, r4, __ct__Q217JASSimpleWaveBank11TWaveHandleFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q217JASSimpleWaveBank11TWaveHandleFv@l
	li       r6, 0x30
	bl       __construct_new_array
	stw      r3, 0x60(r30)
	stw      r31, 0x64(r30)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009B8D8
 * Size:	000024
 */
JASSimpleWaveBank::TWaveHandle::TWaveHandle(void)
{
	/*
	lis      r5, __vt__13JASWaveHandle@ha
	lis      r4, __vt__Q217JASSimpleWaveBank11TWaveHandle@ha
	addi     r5, r5, __vt__13JASWaveHandle@l
	li       r0, 0
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q217JASSimpleWaveBank11TWaveHandle@l
	stw      r4, 0(r3)
	stw      r0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009B8FC
 * Size:	000024
 */
void JASSimpleWaveBank::getWaveHandle(unsigned long) const
{
	/*
	lwz      r0, 0x64(r3)
	cmplw    r4, r0
	blt      lbl_8009B910
	li       r3, 0
	blr

lbl_8009B910:
	mulli    r0, r4, 0x30
	lwz      r3, 0x60(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009B920
 * Size:	000094
 */
void JASSimpleWaveBank::setWaveInfo(unsigned long, const JASWaveInfo&)
{
	/*
	mulli    r11, r4, 0x30
	lwz      r0, 0x60(r3)
	lbz      r8, 0(r5)
	addi     r6, r3, 0x4c
	lbz      r7, 1(r5)
	addi     r4, r3, 8
	addi     r10, r11, 4
	lfs      f0, 4(r5)
	add      r10, r0, r10
	lwz      r0, 8(r5)
	stb      r8, 0(r10)
	lwz      r9, 0xc(r5)
	stb      r7, 1(r10)
	lwz      r8, 0x10(r5)
	stfs     f0, 4(r10)
	lwz      r7, 0x14(r5)
	stw      r0, 8(r10)
	lwz      r0, 0x18(r5)
	stw      r9, 0xc(r10)
	lwz      r9, 0x1c(r5)
	stw      r8, 0x10(r10)
	lha      r8, 0x20(r5)
	stw      r7, 0x14(r10)
	lha      r7, 0x22(r5)
	stw      r0, 0x18(r10)
	lwz      r0, 0x24(r5)
	stw      r9, 0x1c(r10)
	sth      r8, 0x20(r10)
	sth      r7, 0x22(r10)
	stw      r0, 0x24(r10)
	lwz      r0, 0x60(r3)
	add      r5, r0, r11
	stw      r6, 0x28(r5)
	lwz      r0, 0x60(r3)
	add      r3, r0, r11
	stw      r4, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009B9B4
 * Size:	000020
 */
void JASSimpleWaveBank::getWaveArc(int)
{
	/*
	cmpwi    r4, 0
	beq      lbl_8009B9C4
	li       r3, 0
	blr

lbl_8009B9C4:
	cmplwi   r3, 0
	beqlr
	addi     r3, r3, 4
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009B9D4
 * Size:	000008
 */
void JASSimpleWaveBank::TWaveHandle::getWaveInfo() const
{
	/*
	addi     r3, r3, 4
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009B9DC
 * Size:	000024
 */
void JASSimpleWaveBank::TWaveHandle::getWavePtr() const
{
	/*
	lwz      r4, 0x2c(r3)
	lwz      r4, 0x38(r4)
	cmplwi   r4, 0
	bne      lbl_8009B9F4
	li       r3, 0
	blr

lbl_8009B9F4:
	lwz      r0, 0xc(r3)
	add      r3, r4, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009BA00
 * Size:	000004
 */
void JASWaveArc::onLoadDone() { }

/*
 * --INFO--
 * Address:	8009BA04
 * Size:	000004
 */
void JASWaveArc::onEraseDone() { }
