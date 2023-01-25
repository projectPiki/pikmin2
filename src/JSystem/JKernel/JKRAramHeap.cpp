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

JSUList<JKRAramBlock> JKRAramHeap::sAramList;

/*
 * --INFO--
 * Address:	800196C8
 * Size:	0000D8
 * __ct__11JKRAramHeapFUlUl
 */
JKRAramHeap::JKRAramHeap(unsigned long p1, unsigned long p2)
    : JKRDisposer()
{
	OSInitMutex(&mMutex);
	_30                 = JKRHeap::findFromRoot(this);
	_3C                 = ALIGN_PREV(p2, 0x20);
	_34                 = ALIGN_NEXT(p1, 0x20);
	_38                 = _34 + _3C;
	_40                 = 0xFF;
	JKRAramBlock* block = new (_30, 0) JKRAramBlock(_34, 0, _3C, 0xFF, false);
	sAramList.append(&block->mLink);
}

/*
 * --INFO--
 * Address:	800197A0
 * Size:	0000A8
 * __dt__11JKRAramHeapFv
 */
JKRAramHeap::~JKRAramHeap()
{
	for (JSULinkIterator<JKRAramBlock> iterator(sAramList.getFirst()); iterator != nullptr;) {
		delete (iterator++).getObject();
	}
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
	OSLockMutex(&mMutex);
	if (mode == AM_Head) {
		mem = allocFromHead(size);
	} else {
		mem = allocFromTail(size);
	}
	OSUnlockMutex(&mMutex);
	return mem;
}

/*
 * --INFO--
 * Address:	800198C8
 * Size:	000088
 */
JKRAramBlock* JKRAramHeap::allocFromHead(size_t size)
{
	size                = ALIGN_NEXT(size, 0x20);
	u32 v1              = 0xFFFFFFFF;
	JKRAramBlock* block = nullptr;
	for (JSULinkIterator<JKRAramBlock> iterator(sAramList.getFirst()); iterator != nullptr; iterator++) {
		if (iterator->_1C >= size && v1 > iterator->_1C) {
			block = iterator.getObject();
			v1    = iterator->_1C;
			if (v1 == size) {
				break;
			}
		}
	}
	// for (JSULink<JKRAramBlock>* link = sAramList.getFirst(); link != nullptr; link = link->getNext()) {
	// 	if (link->getObject()->_1C >= size && v1 > link->getObject()->_1C) {
	// 		block = link->getObject();
	// 		v1    = block->_1C;
	// 		if (v1 == size) {
	// 			break;
	// 		}
	// 	}
	// }
	if (block != nullptr) {
		return block->allocHead(size, _40, this);
	}
	return nullptr;
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
JKRAramBlock* JKRAramHeap::allocFromTail(size_t size)
{
	JKRAramBlock* block = nullptr;
	size                = ALIGN_NEXT(size, 0x20);
	for (JSULink<JKRAramBlock>* link = sAramList.getLast(); link != nullptr; link = link->getPrev()) {
		if (link->getObject()->_1C >= size) {
			block = link->getObject();
			break;
		}
	}
	if (block != nullptr) {
		return block->allocTail(size, _40, this);
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	800199C8
 * Size:	000078
 */
s32 JKRAramHeap::getFreeSize()
{
	size_t size = 0;
	OSLockMutex(&mMutex);
	for (JSULinkIterator<JKRAramBlock> iterator(sAramList.getFirst()); iterator != nullptr; iterator++) {
		if (iterator->_1C > size) {
			size = iterator->_1C;
		}
	}
	// for (JSULink<JKRAramBlock>* link = sAramList.getFirst(); link != nullptr; link = link->getNext()) {
	// 	if (link->getObject()->_1C > size) {
	// 		size = link->getObject()->_1C;
	// 	}
	// }
	OSUnlockMutex(&mMutex);
	return size;
}

/*
 * @generated{__sinit_JKRAramHeap_cpp}
 * --INFO--
 * Address:	80019A40
 * Size:	000044
 */
// void __sinit_JKRAramHeap_cpp() { }

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
