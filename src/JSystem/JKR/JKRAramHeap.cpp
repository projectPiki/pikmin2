#include "Dolphin/os.h"
#include "JSystem/JKR/Aram.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
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
 * __ct__11JKRAramHeapFUlUl
 */
JKRAramHeap::JKRAramHeap(unsigned long p1, unsigned long p2)
    : JKRDisposer()
{
	OSInitMutex(&m_mutex);
	_30                 = JKRHeap::findFromRoot(this);
	_3C                 = ALIGN_PREV(p2, 0x20);
	_34                 = ALIGN_NEXT(p1, 0x20);
	_38                 = _34 + _3C;
	_40                 = 0xFF;
	JKRAramBlock* block = new (_30, 0) JKRAramBlock(_34, 0, _3C, 0xFF, false);
	sAramList.append(&block->m_link);
}

/*
 * --INFO--
 * Address:	800197A0
 * Size:	0000A8
 * __dt__11JKRAramHeapFv
 */
JKRAramHeap::~JKRAramHeap()
{
	for (JSULink<JKRAramBlock>* link = sAramList.getFirst(); link != nullptr; link = link->getNext()) {
		delete link->getObject();
	}
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
 * alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode
 */
JKRAramBlock* JKRAramHeap::alloc(u32 size, JKRAramHeap::EAllocMode mode)
{
	JKRAramBlock* mem;
	OSLockMutex(&m_mutex);
	if (mode == AM_Head) {
		mem = allocFromHead(size);
	} else {
		mem = allocFromTail(size);
	}
	OSUnlockMutex(&m_mutex);
	return mem;
}

/*
 * --INFO--
 * Address:	800198C8
 * Size:	000088
 */
JKRAramBlock* JKRAramHeap::allocFromHead(u32 size)
{
	// size = ALIGN_NEXT(size, 0x20);
	// JKRAramBlock* block;
	// for (JSULink<JKRAramBlock>* link = sAramList.getFirst(); link != nullptr; link = link->getNext()) {
	// 	block = link->getObject();
	// 	if (size <)
	// }
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
JKRAramBlock* JKRAramHeap::allocFromTail(u32)
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
s32 JKRAramHeap::getFreeSize()
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
 * @generated{__sinit_JKRAramHeap_cpp}
 * --INFO--
 * Address:	80019A40
 * Size:	000044
 */
// void __sinit_JKRAramHeap_cpp(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r3, sAramList__11JKRAramHeap@ha
// 	stw      r0, 0x14(r1)
// 	addi     r3, r3, sAramList__11JKRAramHeap@l
// 	bl       initiate__10JSUPtrListFv
// 	lis      r3, sAramList__11JKRAramHeap@ha
// 	lis      r4, "__dt__23JSUList<12JKRAramBlock>Fv"@ha
// 	lis      r5, lbl_804EFF20@ha
// 	addi     r3, r3, sAramList__11JKRAramHeap@l
// 	addi     r4, r4, "__dt__23JSUList<12JKRAramBlock>Fv"@l
// 	addi     r5, r5, lbl_804EFF20@l
// 	bl       __register_global_object
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * @generated{__dt__23JSUList<12JKRAramBlock>Fv}
 * --INFO--
 * Address:	80019A84
 * Size:	000054
 */
// void JSUList<JKRAramBlock>::~JSUList()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_80019ABC
// 	li       r4, 0
// 	bl       __dt__10JSUPtrListFv
// 	extsh.   r0, r31
// 	ble      lbl_80019ABC
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_80019ABC:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }
