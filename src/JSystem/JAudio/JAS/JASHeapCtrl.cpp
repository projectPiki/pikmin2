#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASGenericMemPool.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASKernel.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSUList.h"

JKRSolidHeap* JASDram;

/**
 * @note Address: 0x800A6A9C
 * @note Size: 0x74
 */
JASHeap::JASHeap(JASDisposer* disposer)
    : mTree(this)
    , mDisposer(disposer)
    , mBase(nullptr)
    , mSize(0)
    , _40(0)
{
	OSInitMutex(&mMutex);
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
// void JSUTree<JASHeap>::~JSUTree()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSULink<JASHeap>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSUList<JASHeap>::~JSUList()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void JASHeap::adjustSize()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void JASHeap::initRootHeap(void*, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A6B10
 * @note Size: 0x1D0
 */
bool JASHeap::alloc(JASHeap* parent, u32 size)
{
	OSLockMutex(&mMutex);
	if (isAllocated()) {
		OSUnlockMutex(&mMutex);
		return false;
	}
	if (!parent->isAllocated()) {
		OSUnlockMutex(&mMutex);
		return false;
	}
	size           = OSRoundUp32B(size);
	u32 curOffset  = parent->getCurOffset();
	u32 tailOffset = parent->getTailOffset();
	if (curOffset + size <= tailOffset) {
		parent->insertChild(this, parent->getTailHeap(), parent->mBase + curOffset, size, false);
		OSUnlockMutex(&mMutex);
		return true;
	}

	s32 minOffset          = -1;
	u8* minBase            = parent->mBase;
	bool hasFoundNewOffset = false;
	JASHeap* nextHeap      = nullptr;
	void* base;
	for (JSUTreeIterator<JASHeap> it = parent->mTree.getFirstChild(); it != parent->mTree.getEndChild(); it++) {
		if (minBase >= parent->mBase + tailOffset) {
			break;
		}
		u32 offset = u32(it->mBase) - u32(minBase);
		if (offset >= size && offset < minOffset) {
			nextHeap          = it.getObject();
			base              = minBase;
			minOffset         = offset;
			hasFoundNewOffset = true;
		}
		u32 curSize = it->mSize;
		minBase     = (u8*)it->mBase + curSize;
	}

	if (minBase != parent->mBase && minBase < parent->mBase + tailOffset) {
		u32 offset = parent->mBase + parent->mSize - minBase;
		if (offset >= size && offset < minOffset) {
			nextHeap          = nullptr;
			base              = minBase;
			minOffset         = offset;
			hasFoundNewOffset = true;
		}
	}

	if (!hasFoundNewOffset) {
		OSUnlockMutex(&mMutex);
		return false;
	}

	parent->insertChild(this, nextHeap, base, size, false);
	OSUnlockMutex(&mMutex);
	return true;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r28, r3
	addi     r3, r28, 0x1c
	mr       r29, r4
	stw      r3, 8(r1)
	mr       r30, r5
	bl       OSLockMutex
	lwz      r0, 0x38(r28)
	cmplwi   r0, 0
	beq      lbl_800A6B54
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6CCC

lbl_800A6B54:
	lwz      r0, 0x38(r29)
	cmplwi   r0, 0
	bne      lbl_800A6B70
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6CCC

lbl_800A6B70:
	addi     r0, r30, 0x1f
	mr       r3, r29
	rlwinm   r30, r0, 0, 0, 0x1a
	bl       getCurOffset__7JASHeapFv
	mr       r27, r3
	mr       r3, r29
	bl       getTailOffset__7JASHeapFv
	add      r0, r27, r30
	cmplw    r0, r3
	bgt      lbl_800A6BD0
	mr       r3, r29
	bl       getTailHeap__7JASHeapFv
	lwz      r0, 0x38(r29)
	mr       r5, r3
	mr       r3, r29
	mr       r4, r28
	mr       r7, r30
	add      r6, r0, r27
	li       r8, 0
	bl       insertChild__7JASHeapFP7JASHeapP7JASHeapPvUlb
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 1
	b        lbl_800A6CCC

lbl_800A6BD0:
	lwz      r7, 0(r29)
	li       r10, -1
	lwz      r8, 0x38(r29)
	li       r11, 0
	cmplwi   r7, 0
	li       r5, 0
	mr       r4, r8
	beq      lbl_800A6BF4
	addi     r7, r7, -12

lbl_800A6BF4:
	add      r6, r8, r3
	b        lbl_800A6C4C

lbl_800A6BFC:
	cmplw    r4, r6
	bge      lbl_800A6C54
	lwz      r9, 0xc(r7)
	lwz      r0, 0x38(r9)
	subf     r0, r4, r0
	cmplw    r0, r30
	blt      lbl_800A6C30
	cmplw    r0, r10
	bge      lbl_800A6C30
	mr       r5, r9
	mr       r31, r4
	mr       r10, r0
	li       r11, 1

lbl_800A6C30:
	lwz      r7, 0x18(r7)
	lwz      r4, 0x38(r9)
	lwz      r0, 0x3c(r9)
	cmplwi   r7, 0
	add      r4, r4, r0
	beq      lbl_800A6C4C
	addi     r7, r7, -12

lbl_800A6C4C:
	cmplwi   r7, 0
	bne      lbl_800A6BFC

lbl_800A6C54:
	cmplw    r4, r8
	beq      lbl_800A6C90
	add      r0, r8, r3
	cmplw    r4, r0
	bge      lbl_800A6C90
	lwz      r0, 0x3c(r29)
	add      r0, r8, r0
	subf     r0, r4, r0
	cmplw    r0, r30
	blt      lbl_800A6C90
	cmplw    r0, r10
	bge      lbl_800A6C90
	mr       r31, r4
	li       r5, 0
	li       r11, 1

lbl_800A6C90:
	clrlwi.  r0, r11, 0x18
	bne      lbl_800A6CA8
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6CCC

lbl_800A6CA8:
	mr       r3, r29
	mr       r4, r28
	mr       r6, r31
	mr       r7, r30
	li       r8, 0
	bl       insertChild__7JASHeapFP7JASHeapP7JASHeapPvUlb
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 1

lbl_800A6CCC:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x800A6CE0
 * @note Size: 0xE8
 */
bool JASHeap::allocTail(JASHeap* parent, u32 size)
{
	OSLockMutex(&mMutex);
	if (isAllocated()) {
		OSUnlockMutex(&mMutex);
		return false;
	}
	if (!parent->isAllocated()) {
		OSUnlockMutex(&mMutex);
		return false;
	}
	size           = OSRoundUp32B(size);
	u32 curOffset  = parent->getCurOffset();
	u32 tailOffset = parent->getTailOffset();
	if (curOffset + size > tailOffset) {
		OSUnlockMutex(&mMutex);
		return false;
	}
	parent->insertChild(this, parent->getTailHeap(), parent->mBase + tailOffset - size, size, true);
	OSUnlockMutex(&mMutex);
	return true;

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	addi     r3, r27, 0x1c
	mr       r28, r4
	stw      r3, 8(r1)
	mr       r29, r5
	bl       OSLockMutex
	lwz      r0, 0x38(r27)
	cmplwi   r0, 0
	beq      lbl_800A6D24
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6DB4

lbl_800A6D24:
	lwz      r0, 0x38(r28)
	cmplwi   r0, 0
	bne      lbl_800A6D40
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6DB4

lbl_800A6D40:
	addi     r0, r29, 0x1f
	mr       r3, r28
	rlwinm   r29, r0, 0, 0, 0x1a
	bl       getCurOffset__7JASHeapFv
	mr       r30, r3
	mr       r3, r28
	bl       getTailOffset__7JASHeapFv
	mr       r31, r3
	add      r0, r30, r29
	cmplw    r0, r31
	ble      lbl_800A6D7C
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6DB4

lbl_800A6D7C:
	mr       r3, r28
	bl       getTailHeap__7JASHeapFv
	lwz      r0, 0x38(r28)
	mr       r5, r3
	mr       r3, r28
	mr       r4, r27
	add      r0, r0, r31
	mr       r7, r29
	li       r8, 1
	subf     r6, r29, r0
	bl       insertChild__7JASHeapFP7JASHeapP7JASHeapPvUlb
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 1

lbl_800A6DB4:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
void* JASHeap::allocAll(JASHeap*)
{
	// UNUSED FUNCTION
}

#pragma dont_inline on
/**
 * @note Address: 0x800A6DC8
 * @note Size: 0x124
 */
bool JASHeap::free()
{
	OSLockMutex(&mMutex);
	if (!isAllocated()) {
		OSUnlockMutex(&mMutex);
		return false;
	}
	JSUTreeIterator<JASHeap> nextIt;
	for (JSUTreeIterator<JASHeap> it(mTree.getFirstChild()); it != mTree.getEndChild(); it = nextIt) {
		nextIt = it;
		nextIt++;
		it->free();
	}
	JSUTree<JASHeap>* parentTree = mTree.getParent();
	if (parentTree) {
		JASHeap* parentHeap = parentTree->getObject();
		if (parentHeap->_40 == this) {
			JSUTreeIterator<JASHeap> stack_28(mTree.getPrevChild());
			if (stack_28 != mTree.getEndChild()) {
				parentHeap->_40 = stack_28.getObject();
			} else {
				parentHeap->_40 = nullptr;
			}
		}
		parentTree->removeChild(&mTree);
	}
	mBase = nullptr;
	_40   = nullptr;
	mSize = 0;
	if (mDisposer) {
		mDisposer->onDispose();
	}
	OSUnlockMutex(&mMutex);
	return true;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	addi     r3, r30, 0x1c
	stw      r3, 8(r1)
	bl       OSLockMutex
	lwz      r0, 0x38(r30)
	cmplwi   r0, 0
	bne      lbl_800A6E08
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6ED4

lbl_800A6E08:
	lwz      r3, 0(r30)
	cmplwi   r3, 0
	beq      lbl_800A6E38
	addi     r3, r3, -12
	b        lbl_800A6E38

lbl_800A6E1C:
	lwz      r31, 0x18(r3)
	cmplwi   r31, 0
	beq      lbl_800A6E2C
	addi     r31, r31, -12

lbl_800A6E2C:
	lwz      r3, 0xc(r3)
	bl       free__7JASHeapFv
	mr       r3, r31

lbl_800A6E38:
	cmplwi   r3, 0
	bne      lbl_800A6E1C
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_800A6E9C
	lwz      r4, 0xc(r3)
	lwz      r0, 0x40(r4)
	cmplw    r0, r30
	bne      lbl_800A6E88
	lwz      r5, 0x14(r30)
	cmplwi   r5, 0
	beq      lbl_800A6E6C
	addi     r5, r5, -12

lbl_800A6E6C:
	cmplwi   r5, 0
	beq      lbl_800A6E80
	lwz      r0, 0xc(r5)
	stw      r0, 0x40(r4)
	b        lbl_800A6E88

lbl_800A6E80:
	li       r0, 0
	stw      r0, 0x40(r4)

lbl_800A6E88:
	cmplwi   r30, 0
	mr       r4, r30
	beq      lbl_800A6E98
	addi     r4, r30, 0xc

lbl_800A6E98:
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_800A6E9C:
	li       r0, 0
	stw      r0, 0x38(r30)
	stw      r0, 0x40(r30)
	stw      r0, 0x3c(r30)
	lwz      r3, 0x34(r30)
	cmplwi   r3, 0
	beq      lbl_800A6EC8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_800A6EC8:
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 1

lbl_800A6ED4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
#pragma dont_inline reset

/**
 * @note Address: N/A
 * @note Size: 0xD4
 */
void JASHeap::freeTail()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void JASHeap::freeAll()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA8
 */
int JASHeap::getTotalFreeSize() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
int JASHeap::getFreeSize() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void JASHeap::dump()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x18C
 */
void JASHeap::dump(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
// void JSUTree<JASHeap>::getNextChild() const
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
// void JSUTreeIterator<JASHeap>::operator!=(const JSUTree<JASHeap>*) const
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
// void JSUTree<JASHeap>::getEndChild() const
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
// void JSUTreeIterator<JASHeap>::operator++()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
// void JSUTreeIterator<JASHeap>::JSUTreeIterator(JSUTree<JASHeap>*)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
// void JSUTree<JASHeap>::getParent() const
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
// JASMutexLock::JASMutexLock(OSMutex*)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
// void JSUTreeIterator<JASHeap>::operator->() const
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
// void JSUTree<JASHeap>::getFirstChild() const
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
// void JSUTree<JASHeap>::getObject() const
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800A6EEC
 * @note Size: 0xE0
 */
void JASHeap::insertChild(JASHeap* heap, JASHeap* next, void* base, u32 size, bool doFastInsert)
{
	OSLockMutex(&mMutex);
	if (!doFastInsert) {
		JSUTreeIterator<JASHeap> it;
		if (!next) {
			it = mTree.getLastChild();
		} else {
			it = next->mTree.getPrevChild();
		}
		JASHeap* r24 = it != mTree.getEndChild() ? it.getObject() : nullptr;
		if (_40 == r24) {
			_40 = heap;
		}
	}
	heap->mBase = (u8*)base;
	heap->mSize = size;
	heap->_40   = nullptr;
	mTree.insertChild(&next->mTree, &heap->mTree);
	OSUnlockMutex(&mMutex);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r31, r3
	addi     r3, r31, 0x1c
	mr       r26, r4
	stw      r3, 8(r1)
	mr       r27, r5
	mr       r28, r6
	mr       r29, r7
	mr       r30, r8
	bl       OSLockMutex
	clrlwi.  r0, r30, 0x18
	bne      lbl_800A6F78
	cmplwi   r27, 0
	bne      lbl_800A6F44
	lwz      r4, 4(r31)
	cmplwi   r4, 0
	beq      lbl_800A6F54
	addi     r4, r4, -12
	b        lbl_800A6F54

lbl_800A6F44:
	lwz      r4, 0x14(r27)
	cmplwi   r4, 0
	beq      lbl_800A6F54
	addi     r4, r4, -12

lbl_800A6F54:
	cmplwi   r4, 0
	lwz      r3, 0x40(r31)
	beq      lbl_800A6F68
	lwz      r0, 0xc(r4)
	b        lbl_800A6F6C

lbl_800A6F68:
	li       r0, 0

lbl_800A6F6C:
	cmplw    r3, r0
	bne      lbl_800A6F78
	stw      r26, 0x40(r31)

lbl_800A6F78:
	stw      r28, 0x38(r26)
	cmplwi   r26, 0
	li       r0, 0
	mr       r5, r26
	stw      r29, 0x3c(r26)
	stw      r0, 0x40(r26)
	beq      lbl_800A6F98
	addi     r5, r26, 0xc

lbl_800A6F98:
	cmplwi   r27, 0
	mr       r4, r27
	beq      lbl_800A6FA8
	addi     r4, r27, 0xc

lbl_800A6FA8:
	mr       r3, r31
	bl       insert__10JSUPtrListFP10JSUPtrLinkP10JSUPtrLink
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x800A6FCC
 * @note Size: 0x8C
 */
JASHeap* JASHeap::getTailHeap()
{
	JSUTreeIterator<JASHeap> it;
	OSLockMutex(&mMutex);
	if (!_40) {
		it = mTree.getFirstChild();
	} else {
		it = _40->mTree.getNextChild();
	}

	if (it == mTree.getEndChild()) {
		OSUnlockMutex(&mMutex);
		return nullptr;
	}

	JASHeap* outHeap = it.getObject();
	OSUnlockMutex(&mMutex);
	return outHeap;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r31, 0x1c
	stw      r3, 8(r1)
	bl       OSLockMutex
	lwz      r3, 0x40(r31)
	cmplwi   r3, 0
	bne      lbl_800A700C
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_800A701C
	addi     r3, r3, -12
	b        lbl_800A701C

lbl_800A700C:
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_800A701C
	addi     r3, r3, -12

lbl_800A701C:
	cmplwi   r3, 0
	bne      lbl_800A7034
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A7044

lbl_800A7034:
	lwz      r31, 0xc(r3)
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	mr       r3, r31

lbl_800A7044:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800A7058
 * @note Size: 0xC4
 */
u32 JASHeap::getTailOffset()
{
	OSLockMutex(&mMutex);
	JASHeap* heap = getTailHeap();
	u32 offset    = !heap ? mSize : heap->mBase - mBase;
	OSUnlockMutex(&mMutex);
	return offset;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	addi     r3, r30, 0x1c
	stw      r3, 0xc(r1)
	bl       OSLockMutex
	addi     r3, r30, 0x1c
	stw      r3, 8(r1)
	bl       OSLockMutex
	lwz      r3, 0x40(r30)
	cmplwi   r3, 0
	bne      lbl_800A70A8
	lwz      r3, 0(r30)
	cmplwi   r3, 0
	beq      lbl_800A70B8
	addi     r3, r3, -12
	b        lbl_800A70B8

lbl_800A70A8:
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_800A70B8
	addi     r3, r3, -12

lbl_800A70B8:
	cmplwi   r3, 0
	bne      lbl_800A70D0
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r31, 0
	b        lbl_800A70DC

lbl_800A70D0:
	lwz      r31, 0xc(r3)
	lwz      r3, 8(r1)
	bl       OSUnlockMutex

lbl_800A70DC:
	cmplwi   r31, 0
	bne      lbl_800A70EC
	lwz      r31, 0x3c(r30)
	b        lbl_800A70F8

lbl_800A70EC:
	lwz      r3, 0x38(r30)
	lwz      r0, 0x38(r31)
	subf     r31, r3, r0

lbl_800A70F8:
	lwz      r3, 0xc(r1)
	bl       OSUnlockMutex
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800A711C
 * @note Size: 0x68
 */
u32 JASHeap::getCurOffset()
{
	OSLockMutex(&mMutex);
	u32 offset = !_40 ? 0 : _40->mBase + _40->mSize - mBase;
	OSUnlockMutex(&mMutex);
	return offset;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r31, 0x1c
	stw      r3, 8(r1)
	bl       OSLockMutex
	lwz      r4, 0x40(r31)
	cmplwi   r4, 0
	bne      lbl_800A7150
	li       r31, 0
	b        lbl_800A7164

lbl_800A7150:
	lwz      r3, 0x38(r4)
	lwz      r0, 0x3c(r4)
	lwz      r4, 0x38(r31)
	add      r0, r3, r0
	subf     r31, r4, r0

lbl_800A7164:
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
// JASSolidHeap::JASSolidHeap()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
// JASSolidHeap::JASSolidHeap(u8*, u32)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void JASSolidHeap::init(u8*, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void* JASSolidHeap::alloc(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void JASSolidHeap::freeLast()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void JASSolidHeap::freeAll()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void JASSolidHeap::getRemain()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A7184
 * @note Size: 0x14
 */
JASGenericMemPool::JASGenericMemPool()
{
	_00           = nullptr;
	_04           = nullptr;
	mFreeMemCount = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
JASGenericMemPool::~JASGenericMemPool()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A7198
 * @note Size: 0x94
 */
void JASGenericMemPool::newMemPool(u32 p1, int memCount)
{
	for (int i = 0; i < memCount; i++) {
		void** mems = new (JASDram, 0) void*[p1];
		mems[0]     = _00;
		_00         = mems;

		if (_04 == nullptr) {
			_04 = mems;
		}
	}

	mFreeMemCount += memCount;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_800A71F8

lbl_800A71C8:
	lwz      r4, JASDram@sda21(r13)
	mr       r3, r31
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	lwz      r0, 0(r28)
	stw      r0, 0(r3)
	stw      r3, 0(r28)
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_800A71F4
	stw      r3, 4(r28)

lbl_800A71F4:
	addi     r30, r30, 1

lbl_800A71F8:
	cmpw     r30, r29
	blt      lbl_800A71C8
	lwz      r0, 8(r28)
	add      r0, r0, r29
	stw      r0, 8(r28)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800A722C
 * @note Size: 0x44
 */
void* JASGenericMemPool::alloc(u32)
{
	void** mem = _00;
	if (mem == nullptr) {
		return nullptr;
	}

	_00 = (void**)mem[0];
	mFreeMemCount--;
	if (_00 == nullptr) {
		_04 = nullptr;
	}

	return mem;
}

/**
 * @note Address: 0x800A7270
 * @note Size: 0x34
 */
void JASGenericMemPool::free(void* mem, u32)
{
	((void**)mem)[0] = nullptr;
	if (_04) {
		_04[0] = mem;
	} else {
		_00 = (void**)mem;
	}

	_04 = (void**)mem;
	mFreeMemCount++;
}

namespace JASKernel {

static JASHeap audioAramHeap(nullptr);
static u32 sAramBase; // TODO: learn its actual type
static JKRExpHeap* sSystemHeap;
static JASCmdHeap* sCommandHeap;

/**
 * @note Address: 0x800A72A4
 * @note Size: 0x118
 */
void setupRootHeap(JKRSolidHeap* heap, u32 size)
{
	sSystemHeap  = JKRExpHeap::create(size, heap, false);
	sCommandHeap = new JASCmdHeap();
	JASDram      = heap;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r4
	mr       r4, r29
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, sSystemHeap__9JASKernel@sda21(r13)
	mr       r4, r29
	li       r3, 0x1c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_800A7398
	li       r0, 0
	addi     r3, r31, 4
	stw      r0, 0(r31)
	bl       OSInitMutex
	lwz      r30, 0(r31)
	cmplwi   r30, 0
	beq      lbl_800A7320
	lwz      r0, 8(r30)
	cmplwi   r0, 0
	bne      lbl_800A7320
	li       r0, 0
	stw      r0, 4(r30)
	b        lbl_800A7398

lbl_800A7320:
	bl       getSystemHeap__9JASKernelFv
	mr       r4, r3
	li       r3, 0x40c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_800A734C
	stw      r30, 0(r3)
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)

lbl_800A734C:
	stw      r3, 0(r31)
	lwz      r0, 0(r31)
	cmplwi   r0, 0
	bne      lbl_800A7398
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	li       r3, 0x40c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_800A7384
	stw      r30, 0(r3)
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)

lbl_800A7384:
	stw      r3, 0(r31)
	lwz      r0, 0(r31)
	cmplwi   r0, 0
	bne      lbl_800A7398
	stw      r30, 0(r31)

lbl_800A7398:
	stw      r31, sCommandHeap__9JASKernel@sda21(r13)
	stw      r29, JASDram@sda21(r13)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
JKRSolidHeap* getRootHeap()
{
	return JASDram; // speculation
}

/**
 * @note Address: 0x800A73BC
 * @note Size: 0x8
 */
JKRExpHeap* getSystemHeap() { return sSystemHeap; }

/**
 * @note Address: 0x800A73C4
 * @note Size: 0x8
 */
JASCmdHeap* getCommandHeap() { return sCommandHeap; }

/**
 * @note Address: 0x800A73CC
 * @note Size: 0x7C
 */
void setupAramHeap(u32 aramBase, u32 aramSize)
{
	sAramBase = aramBase;
	OSLockMutex(&audioAramHeap.mMutex);
	audioAramHeap.mBase = (u8*)(aramBase + 31 & ~31);
	audioAramHeap._40   = 0;
	audioAramHeap.mSize = aramSize - ((u32)audioAramHeap.mBase - aramBase);
	OSUnlockMutex(&audioAramHeap.mMutex);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, audioAramHeap__9JASKernel@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	addi     r3, r5, audioAramHeap__9JASKernel@l
	addi     r3, r3, 0x1c
	stw      r30, sAramBase__9JASKernel@sda21(r13)
	stw      r3, 8(r1)
	bl       OSLockMutex
	addi     r0, r30, 0x1f
	lis      r3, audioAramHeap__9JASKernel@ha
	rlwinm   r6, r0, 0, 0, 0x1a
	li       r4, 0
	subf     r0, r30, r6
	addi     r5, r3, audioAramHeap__9JASKernel@l
	subf     r0, r0, r31
	stw      r6, 0x38(r5)
	lwz      r3, 8(r1)
	stw      r4, 0x40(r5)
	stw      r0, 0x3c(r5)
	bl       OSUnlockMutex
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800A7448
 * @note Size: 0xC
 */
JASHeap* getAramHeap() { return &audioAramHeap; }

/**
 * @note Address: N/A
 * @note Size: 0xC4
 */
int getAramFreeSize()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
int getAramSize()
{
	// UNUSED FUNCTION
}

} // namespace JASKernel
