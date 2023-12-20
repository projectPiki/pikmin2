#include "Dolphin/os.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "types.h"
#include "JSystem/JKernel/JKRHeap.h"

/**
 * @note Address: 0x80024D70
 * @note Size: 0xB4
 */
JKRSolidHeap* JKRSolidHeap::create(u32 heapSize, JKRHeap* heap, bool useErrorHandler)
{
	if (!heap) {
		heap = getRootHeap();
	}

	if (heapSize == 0xFFFFFFFF) {
		heapSize = heap->getMaxAllocatableSize(0x10);
	}

	u32 alignedSize   = ALIGN_PREV(heapSize, 0x10);
	u32 solidHeapSize = ALIGN_NEXT(sizeof(JKRSolidHeap), 0x10);
	if (alignedSize < solidHeapSize) {
		return nullptr;
	}

	JKRSolidHeap* solidHeap = (JKRSolidHeap*)JKRAllocFromHeap(heap, alignedSize, 0x10);
	void* dataPtr           = (u8*)solidHeap + solidHeapSize;
	if (!solidHeap) {
		return nullptr;
	}

	solidHeap = new (solidHeap) JKRSolidHeap(dataPtr, alignedSize - solidHeapSize, heap, useErrorHandler);

	return solidHeap;
}

/**
 * @note Address: 0x80024E24
 * @note Size: 0x60
 */
void JKRSolidHeap::do_destroy()
{
	JKRHeap* parent = getParent();
	if (parent) {
		this->~JKRSolidHeap();
		JKRFreeToHeap(parent, this);
	}
}

/**
 * @note Address: 0x80024E84
 * @note Size: 0x5C
 * __ct__12JKRSolidHeapFPvUlP7JKRHeapb
 */
JKRSolidHeap::JKRSolidHeap(void* start, u32 size, JKRHeap* heap, bool useErrorHandler)
    : JKRHeap(start, size, heap, useErrorHandler)
    , mFreeSize(mHeapSize)
    , mSolidHead((u8*)mStartAddress)
    , mSolidTail((u8*)mEndAddress)
    , mList(nullptr)
{
}

/**
 * @note Address: 0x80024EE0
 * @note Size: 0x68
 * __dt__12JKRSolidHeapFv
 */
JKRSolidHeap::~JKRSolidHeap() { dispose(); }

/**
 * @note Address: 0x80024F48
 * @note Size: 0xC4
 */
int JKRSolidHeap::adjustSize()
{
	JKRHeap* parent = getParent();
	if (parent) {
		lock();
		u32 thisSize = (u32)mStartAddress - (u32)this;
		u32 newSize  = ALIGN_NEXT((u32)mSolidHead - (u32)mStartAddress, 0x20);
		if (parent->resize(this, thisSize + newSize) != -1) {
			mFreeSize   = 0;
			mHeapSize   = newSize;
			mEndAddress = (u8*)mStartAddress + mHeapSize;
			mSolidHead  = (u8*)mEndAddress;
			mSolidTail  = (u8*)mEndAddress;
		}

		unlock();

		return thisSize + newSize;
	}

	return -1;
}

/**
 * @note Address: 0x8002500C
 * @note Size: 0xB0
 */
void* JKRSolidHeap::do_alloc(u32 size, int alignment)
{
	void* mem;
	OSLockMutex(&mMutex);
	if (size < 4) {
		size = 4;
	}
	if (alignment >= 0) {
		mem = allocFromHead(size, MAX(4, alignment));
	} else {
		mem = allocFromTail(size, MAX(4, -alignment));
	}
	OSUnlockMutex(&mMutex);
	return mem;
}

/**
 * @note Address: 0x800250BC
 * @note Size: 0xD8
 */
void* JKRSolidHeap::allocFromHead(u32 size, int alignment)
{
	size             = ALIGN_NEXT(size, 0x4);
	void* start      = nullptr;
	u32 alignedStart = (alignment - 1 + (u32)mSolidHead) & ~(alignment - 1);
	u32 offset       = alignedStart - (u32)mSolidHead;
	u32 totalSize    = size + offset;
	if (totalSize <= mFreeSize) {
		start = (void*)alignedStart;
		mSolidHead += totalSize;
		mFreeSize -= totalSize;
	} else {
		JUTWarningConsole_f("allocFromHead: cannot alloc memory (0x%x byte).\n", totalSize);
		if (getErrorFlag() == true) {
			callErrorHandler(this, size, alignment);
		}
	}

	return start;
}

/**
 * @note Address: 0x80025194
 * @note Size: 0xD0
 */
void* JKRSolidHeap::allocFromTail(u32 size, int alignment)
{
	size             = ALIGN_NEXT(size, 4);
	void* start      = nullptr;
	u32 alignedStart = ALIGN_PREV((u32)mSolidTail - size, alignment);
	u32 totalSize    = (u32)mSolidTail - (u32)alignedStart;
	if (totalSize <= mFreeSize) {
		start = (void*)alignedStart;
		mSolidTail -= totalSize;
		mFreeSize -= totalSize;
	} else {
		JUTWarningConsole_f("allocFromTail: cannot alloc memory (0x%x byte).\n", totalSize);
		if (getErrorFlag() == true) {
			callErrorHandler(this, size, alignment);
		}
	}
	return start;
}

/**
 * @note Address: 0x80025264
 * @note Size: 0x2C
 */
void JKRSolidHeap::do_free(void* block) { JUTWarningConsole_f("free: cannot free memory block (%08x)\n", block); }

/**
 * @note Address: 0x80025290
 * @note Size: 0x60
 */
void JKRSolidHeap::do_freeAll()
{
	OSLockMutex(&mMutex);
	JKRHeap::callAllDisposer();
	mFreeSize  = mHeapSize;
	mSolidHead = (u8*)mStartAddress;
	mSolidTail = (u8*)mEndAddress;
	mList      = nullptr;
	OSUnlockMutex(&mMutex);
}

/**
 * @note Address: 0x800252F0
 * @note Size: 0x8C
 */
void JKRSolidHeap::do_freeTail()
{
	lock();

	if (mSolidTail != mEndAddress) {
		dispose(mSolidTail, mEndAddress);
	}

	mFreeSize  = ((u32)mEndAddress - (u32)mSolidTail + mFreeSize);
	mSolidTail = (u8*)mEndAddress;

	SolidList* list = mList;
	for (; list; list = list->mNext) {
		list->_0C = mEndAddress;
	}

	unlock();
}

/**
 * @note Address: 0x8002537C
 * @note Size: 0x4
 */
void JKRSolidHeap::do_fillFreeArea() { }

/**
 * @note Address: 0x80025380
 * @note Size: 0x30
 */
int JKRSolidHeap::do_resize(void* p1, u32 p2)
{
	JUTWarningConsole_f("resize: cannot resize memory block (%08x: %d)\n", p1, p2);
	return -1;
}

/**
 * @note Address: 0x800253B0
 * @note Size: 0x30
 */
int JKRSolidHeap::do_getSize(void* p1)
{
	JUTWarningConsole_f("getSize: cannot get memory block size (%08x)\n", p1);
	return -1;
}

/**
 * @note Address: 0x800253E0
 * @note Size: 0x8C
 */
bool JKRSolidHeap::check()
{
	lock();

	bool result        = true;
	u32 calculatedSize = ((u32)mSolidHead - (u32)mStartAddress) + mFreeSize + ((u32)mEndAddress - (u32)mSolidTail);
	u32 availableSize  = mHeapSize;
	if (calculatedSize != availableSize) {
		result = false;
		JUTWarningConsole_f("check: bad total memory block size (%08X, %08X)\n", availableSize, calculatedSize);
	}

	unlock();
	return result;
}

/**
 * @note Address: 0x8002546C
 * @note Size: 0x104
 */
bool JKRSolidHeap::dump()
{
	bool result = check();

	lock();
	u32 headSize = ((u32)mSolidHead - (u32)mStartAddress);
	u32 tailSize = ((u32)mEndAddress - (u32)mSolidTail);
	s32 htSize   = headSize + tailSize;
	JUTReportConsole_f("head %08x: %08x\n", mStartAddress, headSize);
	JUTReportConsole_f("tail %08x: %08x\n", mSolidTail, ((u32)mEndAddress - (u32)mSolidTail));

	u32 totalSize  = mHeapSize;
	f32 percentage = (f32)htSize / (f32)totalSize * 100.0f;
	JUTReportConsole_f("%d / %d bytes (%6.2f%%) used\n", htSize, totalSize, percentage);
	unlock();

	return result;
}

/**
 * @note Address: 0x80025570
 * @note Size: 0x5C
 * Matches on 1.3.2
 */
void JKRSolidHeap::state_register(JKRHeap::TState* state, u32 id) const
{
	getState_(state);
	setState_u32ID_(state, id);
	setState_uUsedSize_(state, getUsedSize(const_cast<JKRSolidHeap*>(this)));

	u32 sum = (u32)mSolidHead;
	sum += (u32)mSolidTail * 3;
	setState_u32CheckCode_(state, sum);
}

/**
 * @note Address: 0x800255CC
 * @note Size: 0x30
 */
bool JKRSolidHeap::state_compare(const JKRHeap::TState& r1, const JKRHeap::TState& r2) const
{
	bool result = true;
	if (r1.getCheckCode() != r2.getCheckCode()) {
		result = false;
	}

	if (r1.getUsedSize() != r2.getUsedSize()) {
		result = false;
	}

	return result;
}
