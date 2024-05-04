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
    , mLastChild(0)
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
	JASMutexLock lock(&mMutex);
	if (isAllocated()) {
		return false;
	}
	if (!parent->isAllocated()) {
		return false;
	}
	size           = OSRoundUp32B(size);
	u32 curOffset  = parent->getCurOffset();
	u32 tailOffset = parent->getTailOffset();
	if (curOffset + size <= tailOffset) {
		parent->insertChild(this, parent->getTailHeap(), parent->mBase + curOffset, size, false);
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
		return false;
	}

	parent->insertChild(this, nextHeap, base, size, false);
	return true;
}

/**
 * @note Address: 0x800A6CE0
 * @note Size: 0xE8
 */
bool JASHeap::allocTail(JASHeap* parent, u32 size)
{
	JASMutexLock lock(&mMutex);
	if (isAllocated()) {
		return false;
	}
	if (!parent->isAllocated()) {
		return false;
	}
	size           = OSRoundUp32B(size);
	u32 curOffset  = parent->getCurOffset();
	u32 tailOffset = parent->getTailOffset();
	if (curOffset + size > tailOffset) {
		return false;
	}
	parent->insertChild(this, parent->getTailHeap(), parent->mBase + tailOffset - size, size, true);
	return true;
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
	JASMutexLock lock(&mMutex);
	if (!isAllocated()) {
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
		if (parentHeap->mLastChild == this) {
			JSUTreeIterator<JASHeap> stack_28(mTree.getPrevChild());
			if (stack_28 != mTree.getEndChild()) {
				parentHeap->mLastChild = stack_28.getObject();
			} else {
				parentHeap->mLastChild = nullptr;
			}
		}
		parentTree->removeChild(&mTree);
	}
	mBase      = nullptr;
	mLastChild = nullptr;
	mSize      = 0;
	if (mDisposer) {
		mDisposer->onDispose();
	}
	return true;
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
	JASMutexLock lock(&mMutex);
	if (!doFastInsert) {
		JSUTreeIterator<JASHeap> it;
		if (!next) {
			it = mTree.getLastChild();
		} else {
			it = next->mTree.getPrevChild();
		}
		JASHeap* r24 = it != mTree.getEndChild() ? it.getObject() : nullptr;
		if (mLastChild == r24) {
			mLastChild = heap;
		}
	}
	heap->mBase      = (u8*)base;
	heap->mSize      = size;
	heap->mLastChild = nullptr;
	mTree.insertChild(&next->mTree, &heap->mTree);
}

/**
 * @note Address: 0x800A6FCC
 * @note Size: 0x8C
 */
JASHeap* JASHeap::getTailHeap()
{
	JSUTreeIterator<JASHeap> it;
	JASMutexLock lock(&mMutex);
	if (!mLastChild) {
		it = mTree.getFirstChild();
	} else {
		it = mLastChild->mTree.getNextChild();
	}

	if (it == mTree.getEndChild()) {
		return nullptr;
	}

	JASHeap* outHeap = it.getObject();
	return outHeap;
}

/**
 * @note Address: 0x800A7058
 * @note Size: 0xC4
 */
u32 JASHeap::getTailOffset()
{
	JASMutexLock lock(&mMutex);
	JASHeap* heap = getTailHeap();
	u32 offset    = !heap ? mSize : heap->mBase - mBase;
	return offset;
}

/**
 * @note Address: 0x800A711C
 * @note Size: 0x68
 */
u32 JASHeap::getCurOffset()
{
	JASMutexLock lock(&mMutex);
	u32 offset = !mLastChild ? 0 : mLastChild->mBase + mLastChild->mSize - mBase;
	return offset;
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
	mNextFreeBlock  = nullptr;
	mFirstFreeBlock = nullptr;
	mFreeMemCount   = 0;
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
void JASGenericMemPool::newMemPool(u32 size, int memCount)
{
	for (int i = 0; i < memCount; i++) {
		u8* mems = new (JASDram, 0) u8[size];
		// some nonsense here, but it works, the data type of _00/_04 is probably wrong
		// judging by the following 2 functions, everything seems off with all the casting
		((u32*)mems)[0] = (u32)mNextFreeBlock;
		mNextFreeBlock  = (void**)mems;

		if (mFirstFreeBlock == nullptr) {
			mFirstFreeBlock = (void**)mems;
		}
	}
	mFreeMemCount += memCount;
}

/**
 * @note Address: 0x800A722C
 * @note Size: 0x44
 */
void* JASGenericMemPool::alloc(u32)
{
	void** mem = mNextFreeBlock;
	if (mem == nullptr) {
		return nullptr;
	}

	mNextFreeBlock = (void**)mem[0];
	mFreeMemCount--;
	if (mNextFreeBlock == nullptr) {
		mFirstFreeBlock = nullptr;
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
	if (mFirstFreeBlock) {
		mFirstFreeBlock[0] = mem;
	} else {
		mNextFreeBlock = (void**)mem;
	}

	mFirstFreeBlock = (void**)mem;
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
	sCommandHeap = new (heap, 0) JASCmdHeap;
	JASDram      = heap;
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
	JASMutexLock lock(&audioAramHeap.mMutex);
	audioAramHeap.mBase      = (u8*)(aramBase + 31 & ~31);
	audioAramHeap.mLastChild = 0;
	audioAramHeap.mSize      = aramSize - ((u32)audioAramHeap.mBase - aramBase);
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
