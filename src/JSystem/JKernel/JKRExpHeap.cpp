#include "Dolphin/os.h"
#include "JSystem/JSupport.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "stl/limits.h"
#include "types.h"

/**
 * @note Address: 0x8001FE48
 * @note Size: 0x80
 */
JKRExpHeap* JKRExpHeap::createRoot(int maxHeaps, bool errorFlag)
{
	JKRExpHeap* heap = nullptr;
	if (!sRootHeap) {
		void* memory;
		u32 memorySize;
		initArena((char**)&memory, &memorySize, maxHeaps);
		u8* start       = (u8*)memory + ALIGN_NEXT(sizeof(JKRExpHeap), 0x10);
		u32 alignedSize = memorySize - ALIGN_NEXT(sizeof(JKRExpHeap), 0x10);
		heap            = new (memory) JKRExpHeap(start, alignedSize, nullptr, errorFlag);
		sRootHeap       = heap;
	}
	heap->_6E = true;
	return heap;
}

/**
 * @note Address: 0x8001FEC8
 * @note Size: 0xE4
 */
JKRExpHeap* JKRExpHeap::create(u32 size, JKRHeap* parent, bool errorFlag)
{
	JKRExpHeap* newHeap;
	if (!parent) {
		parent = sRootHeap;
	}

	if (size == 0xffffffff) {
		size = parent->getMaxAllocatableSize(0x10);
	}

	u32 alignedSize = ALIGN_PREV(size, 0x10);
	u32 expHeapSize = ALIGN_NEXT(sizeof(JKRExpHeap), 0x10);
	if (alignedSize < 0xa0)
		return nullptr;

	u8* memory  = (u8*)JKRAllocFromHeap(parent, alignedSize, 0x10);
	u8* dataPtr = memory + expHeapSize;
	if (!memory) {
		return nullptr;
	}
	newHeap = new (memory) JKRExpHeap(dataPtr, alignedSize - expHeapSize, parent, errorFlag);
	if (newHeap == nullptr) {
		JKRFree(memory);
		return nullptr;
	};
	newHeap->_6E = false;
	return newHeap;
}

/**
 * @note Address: 0x8001FFAC
 * @note Size: 0x84
 */
void JKRExpHeap::do_destroy()
{
	if (!_6E) {
		JKRHeap* heap = mTree.getParent()->getObject();
		if (heap) {
			this->~JKRExpHeap();
			JKRFreeToHeap(heap, this);
		}
	} else {
		this->~JKRExpHeap();
	}
}

/**
 * @note Address: 0x80020030
 * @note Size: 0x98
 * __ct
 */
JKRExpHeap::JKRExpHeap(void* p1, u32 p2, JKRHeap* p3, bool p4)
    : JKRHeap(p1, p2, p3, p4)
{
	mCurrentAllocMode = 0;
	mCurrentGroupID   = 0xFF;
	mHead             = static_cast<CMemBlock*>(p1);
	mTail             = mHead;
	mHead->initiate(nullptr, nullptr, p2 - 0x10, 0, 0);
	mHeadUsedList = nullptr;
	mTailUsedList = nullptr;
}

/**
 * @note Address: 0x800200C8
 * @note Size: 0x68
 */
JKRExpHeap::~JKRExpHeap() { dispose(); }

/**
 * @note Address: 0x80020130
 * @note Size: 0x11C
 * TODO: Needs JUTWarningConsole_f, probably changes to conditions
 */
void* JKRExpHeap::do_alloc(u32 byteCount, int padding)
{
	OSLockMutex(&mMutex);
	if (byteCount < 4) {
		byteCount = 4;
	}
	void* mem;
	if (padding >= 0) {
		if (padding <= 4) {
			mem = (void*)allocFromHead(byteCount);
		} else {
			mem = (void*)allocFromHead(byteCount, padding);
		}
	} else {
		if (-padding <= 4) {
			mem = (void*)allocFromTail(byteCount);
		} else {
			mem = (void*)allocFromTail(byteCount, -padding);
		}
	}
	if (mem == nullptr) {
		JUTWarningConsole_f(":::cannot alloc memory (0x%x byte).\n", byteCount);
		if (mErrorFlag == true) {
			callErrorHandler(this, byteCount, padding);
		}
	}
	OSUnlockMutex(&mMutex);
	return mem;
}

static u32 DBfoundSize;
static u32 DBfoundOffset;
static JKRExpHeap::CMemBlock* DBfoundBlock;
static JKRExpHeap::CMemBlock* DBnewFreeBlock;
static JKRExpHeap::CMemBlock* DBnewUsedBlock;

/**
 * @note Address: 0x8002024C
 * @note Size: 0x254
 */
void* JKRExpHeap::allocFromHead(u32 size, int align)
{
	// TODO: cleaner declares(if possible)
	u32 foundOffset;
	int foundSize;
	CMemBlock* newFreeBlock;
	CMemBlock* newUsedBlock;
	CMemBlock* foundBlock;

	size        = ALIGN_NEXT(size, 4);
	foundSize   = -1;
	foundOffset = 0;
	foundBlock  = nullptr;

	for (CMemBlock* block = mHead; block; block = block->mNext) {
		u32 offset = ALIGN_PREV(align - 1 + (u32)block->getContent(), align) - (u32)block->getContent();
		if (block->mAllocatedSpace < size + offset) {
			continue;
		}
		if (foundSize <= (u32)block->mAllocatedSpace) {
			continue;
		}
		foundSize   = block->mAllocatedSpace;
		foundBlock  = block;
		foundOffset = offset;
		if (mCurrentAllocMode != 0) {
			break;
		}
		u32 blockSize = block->mAllocatedSpace;
		if (blockSize == size) {
			break;
		}
	}
	DBfoundSize   = foundSize;
	DBfoundOffset = foundOffset;
	DBfoundBlock  = foundBlock;
	if (foundBlock) {
		if (foundOffset >= sizeof(CMemBlock)) {
			CMemBlock* prev = foundBlock->mPrev;
			CMemBlock* next = foundBlock->mNext;
			newUsedBlock    = foundBlock->allocFore(foundOffset - sizeof(CMemBlock), 0, 0, 0, 0);

			if (newUsedBlock) {
				newFreeBlock = newUsedBlock->allocFore(size, mCurrentGroupID, 0, 0, 0);
			} else {
				newFreeBlock = nullptr;
			}
			if (newFreeBlock) {
				setFreeBlock(foundBlock, prev, newFreeBlock);
			} else {
				setFreeBlock(foundBlock, prev, next);
			}
			if (newFreeBlock) {
				setFreeBlock(newFreeBlock, foundBlock, next);
			}
			appendUsedList(newUsedBlock);
			DBnewFreeBlock = newFreeBlock;
			DBnewUsedBlock = newUsedBlock;
			return newUsedBlock->getContent();
		} else {
			if (foundOffset != 0) {
				CMemBlock* prev = foundBlock->mPrev;
				CMemBlock* next = foundBlock->mNext;
				removeFreeBlock(foundBlock);
				newUsedBlock                  = (CMemBlock*)((u32)foundBlock + foundOffset);
				newUsedBlock->mAllocatedSpace = foundBlock->mAllocatedSpace - foundOffset;
				newFreeBlock                  = newUsedBlock->allocFore(size, mCurrentGroupID, (u8)foundOffset, 0, 0);
				if (newFreeBlock) {
					setFreeBlock(newFreeBlock, prev, next);
				}
				appendUsedList(newUsedBlock);
				return newUsedBlock->getContent();
			} else {
				CMemBlock* prev = foundBlock->mPrev;
				CMemBlock* next = foundBlock->mNext;
				newFreeBlock    = foundBlock->allocFore(size, mCurrentGroupID, 0, 0, 0);
				removeFreeBlock(foundBlock);
				if (newFreeBlock) {
					setFreeBlock(newFreeBlock, prev, next);
				}
				appendUsedList(foundBlock);
				return foundBlock->getContent();
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x800204A0
 * @note Size: 0xE4
 */
void* JKRExpHeap::allocFromHead(u32 size)
{
	size                  = ALIGN_NEXT(size, 4);
	int foundSize         = -1;
	CMemBlock* foundBlock = nullptr;
	for (CMemBlock* block = mHead; block; block = block->mNext) {
		if (block->mAllocatedSpace < size) {
			continue;
		}
		if (foundSize <= (u32)block->mAllocatedSpace) { // TODO: figure out if mAllocatedSpace is u32 or not
			continue;
		}
		foundSize  = block->mAllocatedSpace;
		foundBlock = block;
		if (mCurrentAllocMode != 0) {
			break;
		}
		if (foundSize == size) {
			break;
		}
	}
	if (foundBlock) {
		CMemBlock* newblock = foundBlock->allocFore(size, mCurrentGroupID, 0, 0, 0);
		if (newblock) {
			setFreeBlock(newblock, foundBlock->mPrev, foundBlock->mNext);
		} else {
			removeFreeBlock(foundBlock);
		}
		appendUsedList(foundBlock);
		return foundBlock->getContent();
	}
	return nullptr;
}

/**
 * @note Address: 0x80020584
 * @note Size: 0x158
 */
void* JKRExpHeap::allocFromTail(u32 size, int align)
{
	u32 offset            = 0;
	CMemBlock* foundBlock = nullptr;
	CMemBlock* newBlock   = nullptr;
	u32 usedSize;
	u32 start;

	for (CMemBlock* block = mTail; block; block = block->mPrev) {
		start    = ALIGN_PREV((u32)block->getContent() + block->mAllocatedSpace - size, align);
		usedSize = (u32)block->getContent() + block->mAllocatedSpace - start;
		if (block->mAllocatedSpace >= usedSize) {
			foundBlock = block;
			offset     = block->mAllocatedSpace - usedSize;
			newBlock   = (CMemBlock*)start - 1;
			break;
		}
	}
	if (foundBlock != nullptr) {
		if (offset >= sizeof(CMemBlock)) {
			newBlock->initiate(nullptr, nullptr, usedSize, mCurrentGroupID, -0x80);
			foundBlock->mAllocatedSpace = foundBlock->mAllocatedSpace - usedSize - sizeof(CMemBlock);
			appendUsedList(newBlock);
			return newBlock->getContent();
		} else {
			if (offset != 0) {
				removeFreeBlock(foundBlock);
				newBlock->initiate(nullptr, nullptr, usedSize, mCurrentGroupID, offset | 0x80);
				appendUsedList(newBlock);
				return newBlock->getContent();
			} else {
				removeFreeBlock(foundBlock);
				newBlock->initiate(nullptr, nullptr, usedSize, mCurrentGroupID, -0x80);
				appendUsedList(newBlock);
				return newBlock->getContent();
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x800206DC
 * @note Size: 0xE0
 */
void* JKRExpHeap::allocFromTail(u32 size)
{
	u32 size2             = ALIGN_NEXT(size, 4);
	CMemBlock* foundBlock = nullptr;
	for (CMemBlock* block = mTail; block; block = block->mPrev) {
		if (block->mAllocatedSpace >= size2) {
			foundBlock = block;
			break;
		}
	}
	if (foundBlock != nullptr) {
		CMemBlock* usedBlock = foundBlock->allocBack(size2, 0, 0, mCurrentGroupID, 0);
		CMemBlock* freeBlock;
		if (usedBlock) {
			freeBlock = foundBlock;
		} else {
			removeFreeBlock(foundBlock);
			usedBlock = foundBlock;
			freeBlock = nullptr;
		}
		if (freeBlock) {
			setFreeBlock(freeBlock, foundBlock->mPrev, foundBlock->mNext);
		}
		appendUsedList(usedBlock);
		return usedBlock->getContent();
	}
	return nullptr;
}

/**
 * @note Address: 0x800207BC
 * @note Size: 0x74
 */
void JKRExpHeap::do_free(void* p1)
{
	OSLockMutex(&mMutex);
	if (mStartAddress <= p1 && p1 <= mEndAddress) {
		CMemBlock* block = CMemBlock::getHeapBlock(p1);
		if (block != nullptr) {
			block->free(this);
		}
	}
	OSUnlockMutex(&mMutex);
}

/**
 * @note Address: 0x80020830
 * @note Size: 0x94
 */
int JKRExpHeap::freeGroup(u8 groupID)
{
	lock();
	CMemBlock* block = mHeadUsedList;
	int count        = 0;
	while (block != nullptr) {
		if (block->mGroupID == groupID) {
			dispose(block + 1, block->mAllocatedSpace);
			CMemBlock* temp = block->mNext;
			block->free(this);
			count++;
			block = temp;
		} else {
			block = block->mNext;
		}
	}
	unlock();
	return count;
}

/**
 * @note Address: 0x800208C4
 * @note Size: 0x7C
 */
void JKRExpHeap::do_freeAll()
{
	lock();
	JKRHeap::callAllDisposer();
	mHead = (CMemBlock*)mStartAddress;
	mTail = mHead;
	mHead->initiate(nullptr, nullptr, mHeapSize - sizeof(CMemBlock), 0, 0);
	mHeadUsedList = nullptr;
	mTailUsedList = nullptr;
	unlock();
}

/**
 * @note Address: 0x80020940
 * @note Size: 0x90
 */
void JKRExpHeap::do_freeTail()
{
	lock();
	for (CMemBlock* block = mHeadUsedList; block != nullptr;) {
		if ((block->mFlags & 0x80) != 0) {
			dispose(block + 1, block->mAllocatedSpace);
			CMemBlock* temp = block->mNext;
			block->free(this);
			block = temp;
		} else {
			block = block->mNext;
		}
	}
	unlock();
}

/**
 * @note Address: 0x800209D0
 * @note Size: 0x4
 */
void JKRExpHeap::do_fillFreeArea() { }

/**
 * @note Address: 0x800209D4
 * @note Size: 0x58
 */
u8 JKRExpHeap::do_changeGroupID(u8 groupID)
{
	lock();
	u8 oldGroupID   = mCurrentGroupID;
	mCurrentGroupID = groupID;
	unlock();
	return oldGroupID;
}

/**
 * @note Address: 0x80020A2C
 * @note Size: 0x1BC
 * Regswaps
 */
int JKRExpHeap::do_resize(void* ptr, u32 size)
{
	lock();
	CMemBlock* block = CMemBlock::getHeapBlock(ptr);
	if (block == nullptr || ptr < mStartAddress || mEndAddress < ptr) {
		unlock();
		return -1;
	}
	size = ALIGN_NEXT(size, 4);
	if (size == block->mAllocatedSpace) {
		unlock();
		return size;
	}
	if (size > block->mAllocatedSpace) {
		CMemBlock* foundBlock = nullptr;
		for (CMemBlock* freeBlock = mHead; freeBlock; freeBlock = freeBlock->mNext) {
			if (freeBlock == (CMemBlock*)((u32)(block + 1) + block->mAllocatedSpace)) {
				foundBlock = freeBlock;
				break;
			}
		}
		if (foundBlock == nullptr) {
			unlock();
			return -1;
		}
		if (size > block->mAllocatedSpace + sizeof(CMemBlock) + foundBlock->mAllocatedSpace) {
			unlock();
			return -1;
		}
		removeFreeBlock(foundBlock);
		block->mAllocatedSpace += foundBlock->mAllocatedSpace + sizeof(CMemBlock);
		if (block->mAllocatedSpace - size > sizeof(CMemBlock)) {
			CMemBlock* newBlock = block->allocFore(size, block->mGroupID, block->mFlags, 0, 0);
			if (newBlock) {
				recycleFreeBlock(newBlock);
			}
		}
	} else {
		if (block->mAllocatedSpace - size > sizeof(CMemBlock)) {
			CMemBlock* freeBlock = block->allocFore(size, block->mGroupID, block->mFlags, 0, 0);
			if (freeBlock) {
				recycleFreeBlock(freeBlock);
			}
		}
	}
	unlock();
	return block->mAllocatedSpace;
}

/**
 * @note Address: 0x80020BE8
 * @note Size: 0x88
 */
int JKRExpHeap::do_getSize(void* p1)
{
	OSLockMutex(&mMutex);
	CMemBlock* block = CMemBlock::getHeapBlock(p1);
	if (block == nullptr || p1 < mStartAddress || mEndAddress < p1) {
		OSUnlockMutex(&mMutex);
		return -1;
	} else {
		OSUnlockMutex(&mMutex);
		return block->mAllocatedSpace;
	}
}

/**
 * Returns the max size of any free block of memory within this heap.
 *
 * @note Address: 0x80020C70
 * @note Size: 0x6C
 */
u32 JKRExpHeap::do_getFreeSize()
{
	lock();
	int maxFreeSize = 0;
	for (CMemBlock* block = mHead; block != nullptr; block = block->mNext) {
		if (maxFreeSize < block->mAllocatedSpace) {
			maxFreeSize = block->mAllocatedSpace;
		}
	}
	unlock();
	return maxFreeSize;
}

/**
 * Returns the block with the max size of any free block of memory within this heap.
 *
 * @note Address: 0x80020CDC
 * @note Size: 0x74
 */
void* JKRExpHeap::do_getMaxFreeBlock()
{
	OSLockMutex(&mMutex);
	int maxFreeSize         = 0;
	CMemBlock* maxFreeBlock = nullptr;
	for (CMemBlock* block = mHead; block != nullptr; block = block->mNext) {
		if (maxFreeSize < block->mAllocatedSpace) {
			maxFreeSize  = block->mAllocatedSpace;
			maxFreeBlock = block;
		}
	}
	OSUnlockMutex(&mMutex);
	return maxFreeBlock;
}

/**
 * Returns the total space allocated to all free blocks of memory within this heap.
 *
 * @note Address: 0x80020D50
 * @note Size: 0x64
 */
u32 JKRExpHeap::do_getTotalFreeSize()
{
	int freeSize = 0;
	OSLockMutex(&mMutex);
	for (CMemBlock* block = mHead; block != nullptr; block = block->mNext) {
		freeSize += block->mAllocatedSpace;
	}
	OSUnlockMutex(&mMutex);
	return freeSize;
}

s32 JKRExpHeap::getUsedSize(u8 groupId) const
{
	JKRExpHeap* this2 = const_cast<JKRExpHeap*>(this);
	this2->lock();
	u32 size = 0;
	for (CMemBlock* block = mHeadUsedList; block; block = block->mNext) {
		u8 blockGroupId = block->mGroupID;
		if (blockGroupId == groupId) {
			size += block->mAllocatedSpace + sizeof(CMemBlock);
		}
	}
	this2->unlock();
	return size;
}

/**
 * @note Address: 0x80020DB4
 * @note Size: 0x98
 */
void JKRExpHeap::appendUsedList(JKRExpHeap::CMemBlock* blockToAppend)
{
	if (!blockToAppend) {
		OSErrorLine(1567, ":::ERROR! appendUsedList\n");
	}
	CMemBlock* tail             = mTailUsedList;
	blockToAppend->mUsageHeader = 'HM';
	if (tail) {
		tail->mNext          = blockToAppend;
		blockToAppend->mPrev = tail;
	} else {
		blockToAppend->mPrev = nullptr;
	}
	mTailUsedList = blockToAppend;
	if (!mHeadUsedList) {
		mHeadUsedList = blockToAppend;
	}
	blockToAppend->mNext = nullptr;
}

/**
 * @note Address: 0x80020E4C
 * @note Size: 0x4C
 */
void JKRExpHeap::setFreeBlock(JKRExpHeap::CMemBlock* p1, JKRExpHeap::CMemBlock* p2, JKRExpHeap::CMemBlock* p3)
{
	if (p2 == nullptr) {
		mHead     = p1;
		p1->mPrev = nullptr;
	} else {
		p2->mNext = p1;
		p1->mPrev = p2;
	}
	if (p3 == nullptr) {
		mTail     = p1;
		p1->mNext = nullptr;
	} else {
		p3->mPrev = p1;
		p1->mNext = p3;
	}
	p1->mUsageHeader = 0;
}

/**
 * @note Address: 0x80020E98
 * @note Size: 0x34
 */
void JKRExpHeap::removeFreeBlock(JKRExpHeap::CMemBlock* blockToRemove)
{
	CMemBlock* prev = blockToRemove->mPrev;
	CMemBlock* next = blockToRemove->mNext;
	if (prev == nullptr) {
		mHead = next;
	} else {
		prev->mNext = next;
	}
	if (next == nullptr) {
		mTail = prev;
	} else {
		next->mPrev = prev;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void JKRExpHeap::removeUsedBlock(JKRExpHeap::CMemBlock* blockToRemove)
{
	// UNUSED FUNCTION
	CMemBlock* prev = blockToRemove->mPrev;
	CMemBlock* next = blockToRemove->mNext;
	if (prev == nullptr) {
		mHeadUsedList = next;
	} else {
		prev->mNext = next;
	}
	if (next == nullptr) {
		mTailUsedList = prev;
	} else {
		next->mPrev = prev;
	}
}

/**
 * @note Address: 0x80020ECC
 * @note Size: 0x1E4
 */
void JKRExpHeap::recycleFreeBlock(JKRExpHeap::CMemBlock* block)
{
	JKRExpHeap::CMemBlock* newBlock = block;
	int size                        = block->mAllocatedSpace;
	void* blockEnd                  = (u8*)block + size;
	block->mUsageHeader             = 0;
	// int offset = block->mFlags & 0x7f;

	if ((block->mFlags & 0x7f) != 0) {
		newBlock = (CMemBlock*)((u8*)block - (block->mFlags & 0x7f));
		size += (block->mFlags & 0x7f);
		blockEnd                  = (u8*)newBlock + size;
		newBlock->mGroupID        = 0;
		newBlock->mFlags          = 0;
		newBlock->mAllocatedSpace = size;
	}

	if (!mHead) {
		newBlock->initiate(nullptr, nullptr, size, 0, 0);
		mHead = newBlock;
		mTail = newBlock;
		setFreeBlock(newBlock, nullptr, nullptr);
		return;
	}
	if (mHead >= blockEnd) {
		newBlock->initiate(nullptr, nullptr, size, 0, 0);
		setFreeBlock(newBlock, nullptr, mHead);
		joinTwoBlocks(newBlock);
		return;
	}
	if (mTail <= newBlock) {
		newBlock->initiate(nullptr, nullptr, size, 0, 0);
		setFreeBlock(newBlock, mTail, nullptr);
		joinTwoBlocks(newBlock->mPrev);
		return;
	}
	for (CMemBlock* freeBlock = mHead; freeBlock; freeBlock = freeBlock->mNext) {
		if (freeBlock >= newBlock || newBlock >= freeBlock->mNext) {
			continue;
		}
		newBlock->mNext        = freeBlock->mNext;
		newBlock->mPrev        = freeBlock;
		freeBlock->mNext       = newBlock;
		newBlock->mNext->mPrev = newBlock;
		newBlock->mGroupID     = 0;
		joinTwoBlocks(newBlock);
		joinTwoBlocks(freeBlock);
		return;
	}
}

/**
 * @note Address: 0x800210B0
 * @note Size: 0x104
 */
void JKRExpHeap::joinTwoBlocks(JKRExpHeap::CMemBlock* block)
{
	u32 endAddr     = (u32)(block + 1) + block->mAllocatedSpace;
	CMemBlock* next = block->mNext;
	u32 nextAddr    = (u32)next - (next->mFlags & 0x7f);
	if (endAddr > nextAddr) {
		JUTWarningConsole_f(":::Heap may be broken. (block = %x)", block);
		JKRGetCurrentHeap()->dump();
		OSErrorLine(1819, ":::: Bad Block\n");
	}
	if (endAddr == nextAddr) {
		block->mAllocatedSpace = next->mAllocatedSpace + sizeof(CMemBlock) + next->getAlignment() + block->mAllocatedSpace;
		setFreeBlock(block, block->mPrev, next->mNext);
	}
}

/**
 * @note Address: 0x800211B4
 * @note Size: 0x1E0
 */
bool JKRExpHeap::check()
{
	lock();
	int totalBytes = 0;
	bool ok        = true;
	for (CMemBlock* block = mHeadUsedList; block; block = block->mNext) {
		if (!block->isValid()) {
			ok = false;
			JUTWarningConsole_f(":::addr %08x: bad heap signature. (%c%c)\n", block, JSUHiByte(block->mUsageHeader),
			                    JSULoByte(block->mUsageHeader));
		}
		if (block->mNext) {
			if (!block->mNext->isValid()) {
				ok = false;
				JUTWarningConsole_f(":::addr %08x: bad next pointer (%08x)\nabort\n", block, block->mNext);
				break;
			}
			if (block->mNext->mPrev != block) {
				ok = false;
				JUTWarningConsole_f(":::addr %08x: bad previous pointer (%08x)\n", block->mNext, block->mNext->mPrev);
			}
		} else {
			if (mTailUsedList != block) {
				ok = false;
				JUTWarningConsole_f(":::addr %08x: bad used list(REV) (%08x)\n", block, mTailUsedList);
			}
		}
		totalBytes += sizeof(CMemBlock) + block->mAllocatedSpace + block->getAlignment();
	}
	for (CMemBlock* block = mHead; block; block = block->mNext) {
		totalBytes += block->mAllocatedSpace + sizeof(CMemBlock);
		if (block->mNext) {
			if (block->mNext->mPrev != block) {
				ok = false;
				JUTWarningConsole_f(":::addr %08x: bad previous pointer (%08x)\n", block->mNext, block->mNext->mPrev);
			}
			if ((u32)block + block->mAllocatedSpace + sizeof(CMemBlock) > (u32)block->mNext) {
				ok = false;
				JUTWarningConsole_f(":::addr %08x: bad block size (%08x)\n", block, block->mAllocatedSpace);
			}
		} else {
			if (mTail != block) {
				ok = false;
				JUTWarningConsole_f(":::addr %08x: bad used list(REV) (%08x)\n", block, mTail);
			}
		}
	}
	if (totalBytes != mHeapSize) {
		ok = false;
		JUTWarningConsole_f(":::bad total memory block size (%08X, %08X)\n", mHeapSize, totalBytes);
	}

	if (!ok) {
		JUTWarningConsole(":::there is some error in this heap!\n");
	}

	unlock();
	return ok;
}

/**
 * @note Address: 0x80021394
 * @note Size: 0x1C8
 */
bool JKRExpHeap::dump()
{
	lock();
	bool result   = check();
	u32 usedBytes = 0;
	u32 usedCount = 0;
	u32 freeCount = 0;
	JUTReportConsole(" attr  address:   size    gid aln   prev_ptr next_ptr\n");
	JUTReportConsole("(Used Blocks)\n");
	if (!mHeadUsedList) {
		JUTReportConsole(" NONE\n");
	}
	for (CMemBlock* block = mHeadUsedList; block; block = block->mNext) {
		if (!block->isValid()) {
			JUTReportConsole_f("xxxxx %08x: --------  --- ---  (-------- --------)\nabort\n", block);
			break;
		}

		JUTReportConsole_f("%s %08x: %08x  %3d %3d  (%08x %08x)\n", block->_isTempMemBlock() ? " temp" : "alloc", block->getContent(),
		                   block->mAllocatedSpace, block->mGroupID, block->getAlignment(), block->mPrev, block->mNext);
		usedBytes += sizeof(CMemBlock) + block->mAllocatedSpace + block->getAlignment();
		usedCount++;
	}
	JUTReportConsole("(Free Blocks)\n");
	if (!mHead) {
		JUTReportConsole(" NONE\n");
	}
	for (CMemBlock* block = mHead; block; block = block->mNext) {
		JUTReportConsole_f("%s %08x: %08x  %3d %3d  (%08x %08x)\n", " free", block->getContent(), block->mAllocatedSpace, block->mGroupID,
		                   block->getAlignment(), block->mPrev, block->mNext);
		freeCount++;
	}
	f32 percent = ((f32)usedBytes / (f32)mHeapSize) * 100.0f;
	JUTReportConsole_f("%d / %d bytes (%6.2f%%) used (U:%d F:%d)\n", usedBytes, mHeapSize, percent, usedCount, freeCount);
	unlock();
	return result;
}

/**
 * @note Address: 0x8002155C
 * @note Size: 0x1F8
 */
bool JKRExpHeap::dump_sort()
{
	lock();
	bool result   = check();
	u32 usedBytes = 0;
	u32 usedCount = 0;
	u32 freeCount = 0;
	JUTReportConsole(" attr  address:   size    gid aln   prev_ptr next_ptr\n");
	JUTReportConsole("(Used Blocks)\n");
	if (mHeadUsedList == nullptr) {
		JUTReportConsole(" NONE\n");
	} else {
		CMemBlock* var1 = nullptr;
		while (true) {
			CMemBlock* block = (CMemBlock*)0xffffffff;
			for (CMemBlock* iterBlock = mHeadUsedList; iterBlock; iterBlock = iterBlock->mNext) {
				if (var1 < iterBlock && iterBlock < block) {
					block = iterBlock;
				}
			}
			if (block == (CMemBlock*)0xffffffff) {
				break;
			}
			if (!block->isValid()) {
				JUTReportConsole_f("xxxxx %08x: --------  --- ---  (-------- --------)\nabort\n");
				break;
			}
			int offset       = block->getAlignment();
			void* content    = block->getContent();
			const char* type = block->_isTempMemBlock() ? " temp" : "alloc";
			JUTReportConsole_f("%s %08x: %08x  %3d %3d  (%08x %08x)\n", type, content, block->mAllocatedSpace, block->mGroupID, offset,
			                   block->mPrev, block->mNext);
			usedBytes += sizeof(CMemBlock) + block->mAllocatedSpace + block->getAlignment();
			usedCount++;
			var1 = block;
		}
	}
	JUTReportConsole("(Free Blocks)\n");
	if (mHead == nullptr) {
		JUTReportConsole(" NONE\n");
	}
	for (CMemBlock* block = mHead; block; block = block->mNext) {
		JUTReportConsole_f("%s %08x: %08x  %3d %3d  (%08x %08x)\n", " free", block->getContent(), block->mAllocatedSpace, block->mGroupID,
		                   block->getAlignment(), block->mPrev, block->mNext);
		freeCount++;
	}
	f32 percent = ((f32)usedBytes / (f32)mHeapSize) * 100.0f;
	JUTReportConsole_f("%d / %d bytes (%6.2f%%) used (U:%d F:%d)\n", usedBytes, mHeapSize, percent, usedCount, freeCount);
	unlock();
	return result;
}

// these didn't get deadstripped, workaround to generate it
void genData()
{
	JUTWarningConsole_f("+---------------JKRExpHeap\n");
	JUTWarningConsole_f("|         Align Group  size    ( prev , next )\n");
	JUTWarningConsole_f("| ---- FreeFirst\n");
	JUTWarningConsole_f("| %08x  ");
	JUTWarningConsole_f("%2x  %3d  %6x  (%08x %08x)\n");
	JUTWarningConsole_f("| ---- FreeLast\n");
	JUTWarningConsole_f("| ---- UsedFirst\n");
	JUTWarningConsole_f("| ---- UsedLast\n");
	JUTWarningConsole_f("+---------------End\n");
}

/**
 * @note Address: 0x80021754
 * @note Size: 0x20
 */
void JKRExpHeap::CMemBlock::initiate(JKRExpHeap::CMemBlock* prev, JKRExpHeap::CMemBlock* next, u32 size, u8 groupID, u8 alignment)
{
	mUsageHeader    = 'HM';
	mFlags          = alignment;
	mGroupID        = groupID;
	mAllocatedSpace = size;
	mPrev           = prev;
	mNext           = next;
}

/**
 * @note Address: 0x80021774
 * @note Size: 0x44
 */
JKRExpHeap::CMemBlock* JKRExpHeap::CMemBlock::allocFore(u32 size, u8 groupId1, u8 alignment1, u8 groupId2, u8 alignment2)
{
	CMemBlock* block = nullptr;
	mGroupID         = groupId1;
	mFlags           = alignment1;
	if (mAllocatedSpace >= size + sizeof(CMemBlock)) {
		block                    = (CMemBlock*)(size + (u32)this);
		block[1].mGroupID        = groupId2;
		block[1].mFlags          = alignment2;
		block[1].mAllocatedSpace = mAllocatedSpace - (size + sizeof(CMemBlock));
		mAllocatedSpace          = size;
		block                    = block + 1;
	}
	return block;
}

/**
 * @note Address: 0x800217B8
 * @note Size: 0x58
 */
JKRExpHeap::CMemBlock* JKRExpHeap::CMemBlock::allocBack(u32 size, u8 groupID, u8 p3, u8 allocGroupID, u8 p5)
{
	CMemBlock* newBlock = nullptr;
	if (mAllocatedSpace >= size + sizeof(CMemBlock)) {
		newBlock                  = reinterpret_cast<CMemBlock*>(mAllocatedSpace + reinterpret_cast<u8*>(this) - size);
		newBlock->mGroupID        = allocGroupID;
		newBlock->mFlags          = p5 | 0x80;
		newBlock->mAllocatedSpace = size;
		mGroupID                  = groupID;
		mFlags                    = p3;
		mAllocatedSpace -= (size + sizeof(CMemBlock));
	} else {
		mGroupID = allocGroupID;
		mFlags   = 0x80;
	}
	return newBlock;
}

/**
 * @note Address: 0x80021810
 * @note Size: 0x60
 * free__Q210JKRExpHeap9CMemBlockFP10JKRExpHeap
 */
void* JKRExpHeap::CMemBlock::free(JKRExpHeap* heap)
{
	heap->removeUsedBlock(this);
	heap->recycleFreeBlock(this);
	return nullptr;
}

/**
 * @note Address: 0x80021870
 * @note Size: 0x1C
 */
JKRExpHeap::CMemBlock* JKRExpHeap::CMemBlock::getHeapBlock(void* mem)
{
	if (mem != nullptr && (static_cast<CMemBlock*>(mem) - 1)->mUsageHeader == 0x484D) {
		return static_cast<CMemBlock*>(mem) - 1;
	}
	return nullptr;
}

/**
 * @note Address: 0x8002188C
 * @note Size: 0xF4
 */
void JKRExpHeap::state_register(JKRHeap::TState* p, u32 param_1) const
{
	getState_(p); // not needed, however TP debug has it
	setState_u32ID_(p, param_1);
	if (param_1 <= 0xff) {
		setState_uUsedSize_(p, getUsedSize(param_1));
	} else {
		setState_uUsedSize_(p, getUsedSize_((JKRExpHeap*)this));
	}
	u32 checkCode = 0;
	for (CMemBlock* block = mHeadUsedList; block; block = block->mNext) {
		if (param_1 <= 0xff) {
			u8 groupId = block->mGroupID;
			if (groupId == param_1) {
				checkCode += (u32)block * 3;
			}
		} else {
			checkCode += (u32)block * 3;
		}
	}
	setState_u32CheckCode_(p, checkCode);
}

/**
 * @note Address: 0x80021980
 * @note Size: 0x30
 */
bool JKRExpHeap::state_compare(const JKRHeap::TState& r1, const JKRHeap::TState& r2) const
{
	bool result = true;
	if (r1.mCheckCode != r2.mCheckCode) {
		result = false;
	}
	if (r1.mUsedSize != r2.mUsedSize) {
		result = false;
	}
	return result;
}
