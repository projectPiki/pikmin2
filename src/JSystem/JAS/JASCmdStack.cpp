#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JASCmdStack_cpp

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sCommandListOnce__10JASPortCmd
    sCommandListOnce__10JASPortCmd:
        .skip 0x18
    .global sCommandListStay__10JASPortCmd
    sCommandListStay__10JASPortCmd:
        .skip 0xC
*/

/*
 * --INFO--
 * Address:	800A6724
 * Size:	00005C
 */
void JASPortCmd::addPortCmdOnce()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bl       OSDisableInterrupts
	lis      r4, sCommandListOnce__10JASPortCmd@ha
	addi     r0, r4, sCommandListOnce__10JASPortCmd@l
	mr       r4, r30
	mr       r30, r3
	mr       r3, r0
	bl       append__10JSUPtrListFP10JSUPtrLink
	mr       r31, r3
	mr       r3, r30
	bl       OSRestoreInterrupts
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JASPortCmd::addPortCmdStay()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JASPortCmd::cancelPortCmdStay()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A6780
 * Size:	000024
 */
void JASPortCmd::setPortCmd(void (*)(JASPortArgs*), JASPortArgs*)
{
	/*
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_800A6794
	li       r3, 0
	blr

lbl_800A6794:
	stw      r4, 0x10(r3)
	stw      r5, 0x14(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A67A4
 * Size:	000034
 */
void JASPortCmd::execAllCommand()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, sCommandListOnce__10JASPortCmd@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, sCommandListOnce__10JASPortCmd@l
	bl       execCommandOnce__Q210JASPortCmd9TPortHeadFv
	lis      r3, sCommandListStay__10JASPortCmd@ha
	addi     r3, r3, sCommandListStay__10JASPortCmd@l
	bl       execCommandStay__Q210JASPortCmd9TPortHeadFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A67D8
 * Size:	000088
 */
void JASPortCmd::TPortHead::execCommandOnce(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       OSDisableInterrupts
	lwz      r29, 0(r28)
	mr       r30, r3
	b        lbl_800A6830

lbl_800A6808:
	lwz      r3, 0(r29)
	lwz      r31, 0xc(r29)
	lwz      r12, 0x10(r3)
	lwz      r3, 0x14(r3)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r29
	bl       remove__10JSUPtrListFP10JSUPtrLink
	mr       r29, r31

lbl_800A6830:
	cmplwi   r29, 0
	bne      lbl_800A6808
	mr       r3, r30
	bl       OSRestoreInterrupts
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
 * Address:	800A6860
 * Size:	000068
 */
void JASPortCmd::TPortHead::execCommandStay(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bl       OSDisableInterrupts
	lwz      r30, 0(r30)
	mr       r31, r3
	b        lbl_800A68A0

lbl_800A6888:
	lwz      r3, 0(r30)
	lwz      r12, 0x10(r3)
	lwz      r3, 0x14(r3)
	mtctr    r12
	bctrl
	lwz      r30, 0xc(r30)

lbl_800A68A0:
	cmplwi   r30, 0
	bne      lbl_800A6888
	mr       r3, r31
	bl       OSRestoreInterrupts
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
 * Address:	800A68C8
 * Size:	00006C
 */
void __sinit_JASCmdStack_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, sCommandListOnce__10JASPortCmd@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, sCommandListOnce__10JASPortCmd@l
	bl       initiate__10JSUPtrListFv
	lis      r3, sCommandListOnce__10JASPortCmd@ha
	lis      r4, __dt__Q210JASPortCmd9TPortHeadFv@ha
	lis      r5, lbl_804F06E8@ha
	addi     r3, r3, sCommandListOnce__10JASPortCmd@l
	addi     r4, r4, __dt__Q210JASPortCmd9TPortHeadFv@l
	addi     r5, r5, lbl_804F06E8@l
	bl       __register_global_object
	lis      r3, sCommandListStay__10JASPortCmd@ha
	addi     r3, r3, sCommandListStay__10JASPortCmd@l
	bl       initiate__10JSUPtrListFv
	lis      r3, sCommandListStay__10JASPortCmd@ha
	lis      r4, __dt__Q210JASPortCmd9TPortHeadFv@ha
	lis      r5, lbl_804F06F4@ha
	addi     r3, r3, sCommandListStay__10JASPortCmd@l
	addi     r4, r4, __dt__Q210JASPortCmd9TPortHeadFv@l
	addi     r5, r5, lbl_804F06F4@l
	bl       __register_global_object
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A6934
 * Size:	000058
 */
JASPortCmd::TPortHead::~TPortHead(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800A6970
	beq      lbl_800A6960
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_800A6960:
	extsh.   r0, r31
	ble      lbl_800A6970
	mr       r3, r30
	bl       __dl__FPv

lbl_800A6970:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<JASPortCmd>::~JSUList()
{
	// UNUSED FUNCTION
}
