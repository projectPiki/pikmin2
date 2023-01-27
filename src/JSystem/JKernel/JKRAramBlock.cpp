#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

/*
 * --INFO--
 * Address:	80019444
 * Size:	00006C
 */
JKRAramBlock::JKRAramBlock(u32 address, u32 size, u32 freeSize, u8 groupID, bool isTempMem)
    : mLink(this)
    , mAddress(address)
    , mSize(size)
    , mFreeSize(freeSize)
    , mGroupID(groupID)
    , mIsTempMemory(isTempMem)
{
}

/*
 * --INFO--
 * Address:	800194B0
 * Size:	0000BC
 * __dt__12JKRAramBlockFv
 */
JKRAramBlock::~JKRAramBlock()
{
	JSULink<JKRAramBlock>* prev = mLink.getPrev();
	JSUList<JKRAramBlock>* list = mLink.getList();
	if (prev) {
		prev->getObject()->mFreeSize += mSize + mFreeSize;
		list->remove(&mLink);
	} else {
		mFreeSize += mSize;
		mSize = 0;
	}
}

/*
 * --INFO--
 * Address:	8001956C
 * Size:	0000A8
 */
JKRAramBlock* JKRAramBlock::allocHead(u32 newSize, u8 newGroupID, JKRAramHeap* heap)
{
	u32 newAddress      = mAddress + mSize;
	u32 newFreeSize     = mFreeSize - newSize;
	JKRAramBlock* block = new (heap->mHeap, 0) JKRAramBlock(newAddress, newSize, newFreeSize, newGroupID, false);
	mFreeSize           = 0;
	mLink.mList->insert(mLink.mNext, &block->mLink);
	return block;
}

/*
 * --INFO--
 * Address:	80019614
 * Size:	0000B4
 */
JKRAramBlock* JKRAramBlock::allocTail(u32 newSize, u8 newGroupID, JKRAramHeap* heap)
{
	u32 newAddress      = mAddress + mSize + mFreeSize - newSize;
	JKRAramBlock* block = new (heap->mHeap, 0) JKRAramBlock(newAddress, newSize, 0, newGroupID, true);
	mFreeSize -= newSize;
	mLink.mList->insert(mLink.mNext, &block->mLink);
	return block;
}
