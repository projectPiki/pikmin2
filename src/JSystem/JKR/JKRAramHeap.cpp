#include "JSystem/JKR/Aram.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JKRAramHeap_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__11JKRAramHeap
    __vt__11JKRAramHeap:
        .4byte 0
        .4byte 0
        .4byte __dt__11JKRAramHeapFv
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sAramList__11JKRAramHeap
    sAramList__11JKRAramHeap:
        .skip 0xC
*/

/*
 * --INFO--
 * Address:	800196C8
 * Size:	0000D8
 */
JKRAramHeap::JKRAramHeap(unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       __ct__11JKRDisposerFv
	lis      r4, __vt__11JKRAramHeap@ha
	addi     r3, r29, 0x18
	addi     r0, r4, __vt__11JKRAramHeap@l
	stw      r0, 0(r29)
	bl       OSInitMutex
	mr       r3, r29
	bl       findFromRoot__7JKRHeapFPv
	stw      r3, 0x30(r29)
	rlwinm   r4, r31, 0, 0, 0x1a
	addi     r3, r30, 0x1f
	li       r0, 0xff
	stw      r4, 0x3c(r29)
	rlwinm   r4, r3, 0, 0, 0x1a
	li       r3, 0x24
	li       r5, 0
	stw      r4, 0x34(r29)
	lwz      r6, 0x34(r29)
	lwz      r4, 0x3c(r29)
	add      r4, r6, r4
	stw      r4, 0x38(r29)
	stb      r0, 0x40(r29)
	lwz      r4, 0x30(r29)
	bl       __nw__FUlP7JKRHeapi
	or.      r4, r3, r3
	beq      lbl_80019770
	lwz      r4, 0x34(r29)
	li       r5, 0
	lwz      r6, 0x3c(r29)
	li       r7, 0xff
	li       r8, 0
	bl       __ct__12JKRAramBlockFUlUlUlUcb
	mr       r4, r3

lbl_80019770:
	lis      r3, sAramList__11JKRAramHeap@ha
	addi     r4, r4, 4
	addi     r3, r3, sAramList__11JKRAramHeap@l
	bl       append__10JSUPtrListFP10JSUPtrLink
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
 * Address:	800197A0
 * Size:	0000A8
 */
JKRAramHeap::~JKRAramHeap()
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
	beq      lbl_80019828
	lis      r4, __vt__11JKRAramHeap@ha
	lis      r3, sAramList__11JKRAramHeap@ha
	addi     r0, r4, __vt__11JKRAramHeap@l
	stw      r0, 0(r29)
	lwz      r31, sAramList__11JKRAramHeap@l(r3)
	b        lbl_80019804

lbl_800197DC:
	mr       r3, r31
	lwz      r31, 0xc(r31)
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80019804
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80019804:
	cmplwi   r31, 0
	bne      lbl_800197DC
	mr       r3, r29
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r30
	ble      lbl_80019828
	mr       r3, r29
	bl       __dl__FPv

lbl_80019828:
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
 * Address:	80019848
 * Size:	000080
 */
JKRAramBlock* JKRAramHeap::alloc(ulong, JKRAramHeap::EAllocMode)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r3, r29, 0x18
	bl       OSLockMutex
	cmpwi    r31, 0
	bne      lbl_80019890
	mr       r3, r29
	mr       r4, r30
	bl       allocFromHead__11JKRAramHeapFUl
	mr       r31, r3
	b        lbl_800198A0

lbl_80019890:
	mr       r3, r29
	mr       r4, r30
	bl       allocFromTail__11JKRAramHeapFUl
	mr       r31, r3

lbl_800198A0:
	addi     r3, r29, 0x18
	bl       OSUnlockMutex
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	800198C8
 * Size:	000088
 */
JKRAramBlock* JKRAramHeap::allocFromHead(ulong)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	lis      r5, sAramList__11JKRAramHeap@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, 0x1f
	rlwinm   r4, r0, 0, 0, 0x1a
	li       r8, -1
	lwz      r7, sAramList__11JKRAramHeap@l(r5)
	li       r3, 0
	b        lbl_80019920

lbl_800198F4:
	lwz      r5, 0(r7)
	lwz      r0, 0x1c(r5)
	cmplw    r0, r4
	blt      lbl_8001991C
	cmplw    r8, r0
	ble      lbl_8001991C
	cmplw    r0, r4
	mr       r8, r0
	mr       r3, r5
	beq      lbl_80019928

lbl_8001991C:
	lwz      r7, 0xc(r7)

lbl_80019920:
	cmplwi   r7, 0
	bne      lbl_800198F4

lbl_80019928:
	cmplwi   r3, 0
	beq      lbl_8001993C
	lbz      r5, 0x40(r6)
	bl       allocHead__12JKRAramBlockFUlUcP11JKRAramHeap
	b        lbl_80019940

lbl_8001993C:
	li       r3, 0

lbl_80019940:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80019950
 * Size:	000078
 */
JKRAramBlock* JKRAramHeap::allocFromTail(ulong)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	lis      r5, sAramList__11JKRAramHeap@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, 0x1f
	addi     r4, r5, sAramList__11JKRAramHeap@l
	li       r3, 0
	lwz      r7, 4(r4)
	rlwinm   r4, r0, 0, 0, 0x1a
	b        lbl_80019998

lbl_8001997C:
	lwz      r5, 0(r7)
	lwz      r0, 0x1c(r5)
	cmplw    r0, r4
	blt      lbl_80019994
	mr       r3, r5
	b        lbl_800199A0

lbl_80019994:
	lwz      r7, 8(r7)

lbl_80019998:
	cmplwi   r7, 0
	bne      lbl_8001997C

lbl_800199A0:
	cmplwi   r3, 0
	beq      lbl_800199B4
	lbz      r5, 0x40(r6)
	bl       allocTail__12JKRAramBlockFUlUcP11JKRAramHeap
	b        lbl_800199B8

lbl_800199B4:
	li       r3, 0

lbl_800199B8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800199C8
 * Size:	000078
 */
uint JKRAramHeap::getFreeSize()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0x18
	bl       OSLockMutex
	lis      r3, sAramList__11JKRAramHeap@ha
	addi     r3, r3, sAramList__11JKRAramHeap@l
	lwz      r3, 0(r3)
	b        lbl_80019A14

lbl_800199FC:
	lwz      r4, 0(r3)
	lwz      r0, 0x1c(r4)
	cmplw    r0, r31
	ble      lbl_80019A10
	mr       r31, r0

lbl_80019A10:
	lwz      r3, 0xc(r3)

lbl_80019A14:
	cmplwi   r3, 0
	bne      lbl_800199FC
	addi     r3, r30, 0x18
	bl       OSUnlockMutex
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
 * Address:	80019A40
 * Size:	000044
 */
void __sinit_JKRAramHeap_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, sAramList__11JKRAramHeap@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, sAramList__11JKRAramHeap@l
	bl       initiate__10JSUPtrListFv
	lis      r3, sAramList__11JKRAramHeap@ha
	lis      r4, "__dt__23JSUList<12JKRAramBlock>Fv"@ha
	lis      r5, lbl_804EFF20@ha
	addi     r3, r3, sAramList__11JKRAramHeap@l
	addi     r4, r4, "__dt__23JSUList<12JKRAramBlock>Fv"@l
	addi     r5, r5, lbl_804EFF20@l
	bl       __register_global_object
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80019A84
 * Size:	000054
 */
void JSUList<JKRAramBlock>::~JSUList()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80019ABC
	li       r4, 0
	bl       __dt__10JSUPtrListFv
	extsh.   r0, r31
	ble      lbl_80019ABC
	mr       r3, r30
	bl       __dl__FPv

lbl_80019ABC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
