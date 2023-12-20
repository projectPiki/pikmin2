#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

JSUList<JKRAramBlock> JKRAramHeap::sAramList;

/**
 * @note Address: 0x800196C8
 * @note Size: 0xD8
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

/**
 * @note Address: 0x800197A0
 * @note Size: 0xA8
 * __dt__11JKRAramHeapFv
 */
JKRAramHeap::~JKRAramHeap()
{
	for (JSULinkIterator<JKRAramBlock> iterator(sAramList.getFirst()); iterator != nullptr;) {
		delete (iterator++).getObject();
	}
}

/**
 * @note Address: 0x80019848
 * @note Size: 0x80
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

/**
 * @note Address: 0x800198C8
 * @note Size: 0x88
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

/**
 * @note Address: 0x80019950
 * @note Size: 0x78
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

/**
 * @note Address: 0x800199C8
 * @note Size: 0x78
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
