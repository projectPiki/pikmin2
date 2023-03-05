#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

JSUList<JKRAramBlock> JKRAramHeap::sAramList;

/*
 * --INFO--
 * Address:	800196C8
 * Size:	0000D8
 * __ct__11JKRAramHeapFUlUl
 */
JKRAramHeap::JKRAramHeap(u32 addr, u32 size)
    : JKRDisposer()
{
	OSInitMutex(&mMutex);
	mHeap               = JKRHeap::findFromRoot(this);
	mSize               = ALIGN_PREV(size, 0x20);
	mHeadAddress        = ALIGN_NEXT(addr, 0x20);
	mTailAddress        = mHeadAddress + mSize;
	mGroupID            = 0xFF;
	JKRAramBlock* block = new (mHeap, 0) JKRAramBlock(mHeadAddress, 0, mSize, 0xFF, false);
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
	u32 alignedSize         = ALIGN_NEXT(size, 0x20);
	u32 bestFreeSize        = 0xFFFFFFFF;
	JKRAramBlock* bestBlock = nullptr;

	for (JSUListIterator<JKRAramBlock> iterator(sAramList.getFirst()); iterator != nullptr; iterator++) {
		JKRAramBlock* block = iterator.getObject();
		if (block->mFreeSize < alignedSize)
			continue;
		if (bestFreeSize <= block->mFreeSize)
			continue;

		bestFreeSize = block->mFreeSize;
		bestBlock    = block;

		if (block->mFreeSize == alignedSize) {
			break;
		}
	}

	if (bestBlock) {
		return bestBlock->allocHead(alignedSize, mGroupID, this);
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	80019950
 * Size:	000078
 */
JKRAramBlock* JKRAramHeap::allocFromTail(size_t size)
{
	u32 alignedSize         = ALIGN_NEXT(size, 0x20);
	JKRAramBlock* tailBlock = nullptr;
	for (JSUListIterator<JKRAramBlock> iterator = sAramList.getLast(); iterator != sAramList.getEnd(); --iterator) {
		JKRAramBlock* block = iterator.getObject();
		if (block->mFreeSize >= alignedSize) {
			tailBlock = block;
			break;
		}
	}
	if (tailBlock) {
		return tailBlock->allocTail(alignedSize, mGroupID, this);
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
	u32 maxFreeSize = 0;
	lock();
	JSUList<JKRAramBlock>* list            = &sAramList;
	JSUListIterator<JKRAramBlock> iterator = list;
	for (; iterator != list->getEnd(); ++iterator) {
		if (iterator->mFreeSize > maxFreeSize) {
			maxFreeSize = iterator->mFreeSize;
		}
	}
	unlock();
	return maxFreeSize;
}
