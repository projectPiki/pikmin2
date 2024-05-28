#include "types.h"

#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSUList.h"
#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JUtility/JUTException.h"

// TODO: This is stupid-hacky. Fix pls.
typedef void Destructor(void*, s16);
#define INVOKE_VIRT_DTOR(o, v) (((*(Destructor***)(o))[2])((o), (v)))

JKRHeap* JKRHeap::sSystemHeap;
JKRHeap* JKRHeap::sCurrentHeap;
JKRHeap* JKRHeap::sRootHeap;
JKRHeapErrorHandler* JKRHeap::mErrorHandler;
u8 JKRHeap::sDefaultFillCheckFlag;
void* JKRHeap::mCodeStart;
void* JKRHeap::mCodeEnd;
void* JKRHeap::mUserRamStart;
void* JKRHeap::mUserRamEnd;
u32 JKRHeap::mMemorySize;
bool JKRHeap::TState::bVerbose_;

u8 JKRHeap::sDefaultFillFlag = 1;

/**
 * @note Address: 0x800232B4
 * @note Size: 0x124
 * __ct__7JKRHeapFPvUlP7JKRHeapb
 */
JKRHeap::JKRHeap(void* startPtr, u32 size, JKRHeap* parentHeap, bool shouldSetErrorHandlerMaybe)
    : mTree(this)
    , mDisposerList()
{
	OSInitMutex(&mMutex);
	mHeapSize     = size;
	mStartAddress = (u8*)startPtr;
	mEndAddress   = (u8*)startPtr + size;

	if (parentHeap == nullptr) {
		becomeSystemHeap();
		becomeCurrentHeap();
	} else {
		parentHeap->mTree.appendChild(&mTree);
		if (JKRHeap::sSystemHeap == JKRHeap::sRootHeap) {
			becomeSystemHeap();
		}
		if (JKRHeap::sCurrentHeap == JKRHeap::sRootHeap) {
			becomeCurrentHeap();
		}
	}
	mErrorFlag = shouldSetErrorHandlerMaybe;
	if ((mErrorFlag == true) && (JKRHeap::mErrorHandler == nullptr)) {
		JKRHeap::mErrorHandler = JKRDefaultMemoryErrorRoutine;
	}
	mFillFlag      = JKRHeap::sDefaultFillFlag;
	mFillCheckFlag = JKRHeap::sDefaultFillCheckFlag;
	mInitFlag      = 0;
}

/**
 * @note Address: 0x800233D8
 * @note Size: 0x114
 */
JKRHeap::~JKRHeap()
{
	mTree.getParent()->removeChild(&mTree);
	JSUTree<JKRHeap>* nextRootHeap = sRootHeap->mTree.getFirstChild();

	if (sCurrentHeap == this) {
		sCurrentHeap = !nextRootHeap ? sRootHeap : nextRootHeap->getObject();
	}

	if (sSystemHeap == this) {
		sSystemHeap = !nextRootHeap ? sRootHeap : nextRootHeap->getObject();
	}
}

/**
 * @note Address: 0x800234EC
 * @note Size: 0xA8
 */
bool JKRHeap::initArena(char** memory, u32* size, int maxHeaps)
{
	void* ram_start;
	void* ram_end;
	void* arenaStart;

	void* arenaLo = OSGetArenaLo();
	void* arenaHi = OSGetArenaHi();
	if (arenaLo == arenaHi)
		return false;

	arenaStart = OSInitAlloc(arenaLo, arenaHi, maxHeaps);
	ram_start  = (void*)OSRoundUp32B(arenaStart);
	ram_end    = (void*)OSRoundDown32B(arenaHi);

	OSBootInfo* codeStart = (OSBootInfo*)OSPhysicalToCached(0);
	mCodeStart            = codeStart;
	mCodeEnd              = ram_start;

	mUserRamStart = ram_start;
	mUserRamEnd   = ram_end;
	mMemorySize   = codeStart->memorySize;

	OSSetArenaLo(ram_end);
	OSSetArenaHi(ram_end);

	*memory = (char*)ram_start;
	*size   = (u32)ram_end - (u32)ram_start;
	return true;
}

/**
 * @note Address: 0x80023594
 * @note Size: 0x10
 */
JKRHeap* JKRHeap::becomeSystemHeap()
{
	JKRHeap* old = sSystemHeap;
	sSystemHeap  = this;
	return old;
}

/**
 * @note Address: 0x800235A4
 * @note Size: 0x10
 */
JKRHeap* JKRHeap::becomeCurrentHeap()
{
	JKRHeap* old = sCurrentHeap;
	sCurrentHeap = this;
	return old;
}

/**
 * @note Address: 0x800235B4
 * @note Size: 0x2C
 */
void JKRHeap::destroy() { do_destroy(); }

/**
 * @note Address: 0x800235E0
 * @note Size: 0x60
 */
void* JKRHeap::alloc(u32 byteCount, int padding, JKRHeap* heap)
{
	void* memory;
	if (heap) {
		memory = heap->alloc(byteCount, padding);
	} else if (sCurrentHeap) {
		memory = sCurrentHeap->alloc(byteCount, padding);
	} else {
		memory = nullptr;
	}
	return memory;
}

/**
 * @note Address: 0x80023640
 * @note Size: 0x2C
 */
void* JKRHeap::alloc(u32 byteCount, int padding) { return do_alloc(byteCount, padding); }

/**
 * @note Address: 0x8002366C
 * @note Size: 0x48
 */
void JKRHeap::free(void* memory, JKRHeap* heap)
{
	if ((heap) || (heap = findFromRoot(memory), heap)) {
		heap->free(memory);
	}
}

/**
 * @note Address: 0x800236B4
 * @note Size: 0x2C
 */
void JKRHeap::free(void* memory) { do_free(memory); }

/**
 * @note Address: 0x800236E0
 * @note Size: 0x50
 */
void JKRHeap::callAllDisposer()
{
	JSUListIterator<JKRDisposer> iterator;
	while (iterator = mDisposerList.getFirst(), iterator != mDisposerList.getEnd()) {
		iterator->~JKRDisposer();
	}
}

/**
 * @note Address: 0x80023730
 * @note Size: 0x2C
 */
void JKRHeap::freeAll() { do_freeAll(); }

/**
 * @note Address: 0x8002375C
 * @note Size: 0x2C
 */
void JKRHeap::freeTail() { do_freeTail(); }

/**
 * @note Address: 0x80023788
 * @note Size: 0x2C
 */
int JKRHeap::resize(void* memoryBlock, u32 newSize) { do_resize(memoryBlock, newSize); }

/**
 * @note Address: 0x800237B4
 * @note Size: 0x2C
 */
u32 JKRHeap::getFreeSize() { return do_getFreeSize(); }

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void* JKRHeap::getMaxFreeBlock() { return do_getMaxFreeBlock(); }

/**
 * @note Address: 0x800237E0
 * @note Size: 0x2C
 */
u32 JKRHeap::getTotalFreeSize() { return do_getTotalFreeSize(); }

/**
 * @note Address: 0x8002380C
 * @note Size: 0x2C
 */
u8 JKRHeap::changeGroupID(u8 newGroupID) { return do_changeGroupID(newGroupID); }

/**
 * @note Address: 0x80023840
 * @note Size: 0x2C
 */
u8 JKRHeap::getCurrentGroupId() { return do_getCurrentGroupId(); }

/**
 * TODO: What does p1 mean? Alignment?
 * Seems to only ever be called with 0x10.
 *
 * @note Address: 0x80023874
 * @note Size: 0x80
 */
u32 JKRHeap::getMaxAllocatableSize(int alignment)
{
	u32 maxFreeBlock = (u32)getMaxFreeBlock();
	u32 ptrOffset    = (alignment - 1) & alignment - (maxFreeBlock & 0xf);
	return ~(alignment - 1) & (getFreeSize() - ptrOffset);
}

/**
 * @note Address: 0x800238F4
 * @note Size: 0x3C
 */
JKRHeap* JKRHeap::findFromRoot(void* memory) { return (sRootHeap) ? sRootHeap->find(memory) : nullptr; }

/**
 * @note Address: 0x80023930
 * @note Size: 0x270
 * find__7JKRHeapCFPv
 */

JKRHeap* JKRHeap::find(void* memory) const
{
	if ((((void*)mStartAddress <= memory) && (memory < (void*)mEndAddress))) {
		if (mTree.getNumChildren() != 0) {
			for (JSUTreeIterator<JKRHeap> iterator(mTree.getFirstChild()); iterator != mTree.getEndChild(); ++iterator) {
				JKRHeap* result = iterator->find(memory);
				if (result) {
					return result;
				}
			}
		}
		return const_cast<JKRHeap*>(this);
	}
	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void JKRHeap::dispose_subroutine(u32 begin, u32 end)
{
	JSUListIterator<JKRDisposer> last_iterator;
	JSUListIterator<JKRDisposer> next_iterator;
	JSUListIterator<JKRDisposer> iterator;

	for (iterator = mDisposerList.getFirst(); iterator != mDisposerList.getEnd(); iterator = next_iterator) {
		JKRDisposer* disposer = iterator.getObject();

		if ((void*)begin <= disposer && disposer < (void*)end) {
			disposer->~JKRDisposer();

			if (last_iterator == nullptr) {
				next_iterator = mDisposerList.getFirst();
			} else {
				next_iterator = last_iterator;
				next_iterator++;
			}
		} else {
			last_iterator = iterator;
			next_iterator = iterator;
			next_iterator++;
		}
	}
}

/**
 * @note Address: 0x80023C28
 * @note Size: 0xA8
 */
u32 JKRHeap::dispose(void* memory, u32 size)
{
	dispose_subroutine((u32)memory, (u32)memory + size);
	return false;
}

/**
 * @note Address: 0x80023CD0
 * @note Size: 0xA4
 */
void JKRHeap::dispose(void* begin, void* end) { dispose_subroutine((u32)begin, (u32)end); }

/**
 * @note Address: 0x80023D74
 * @note Size: 0x50
 * dispose__7JKRHeapFv
 */
void JKRHeap::dispose()
{
	JSUListIterator<JKRDisposer> iterator;
	while ((iterator = mDisposerList.getFirst()) != mDisposerList.getEnd()) {
		iterator->~JKRDisposer();
	}
}

/**
 * @note Address: 0x80023DC4
 * @note Size: 0x8C
 */
void JKRHeap::copyMemory(void* dst, void* src, u32 size)
{
	u32 count = (size + 3) / 4;

	u32* dst_32 = (u32*)dst;
	u32* src_32 = (u32*)src;
	while (count > 0) {
		*dst_32 = *src_32;
		dst_32++;
		src_32++;
		count--;
	}
}

/**
 * @note Address: 0x80023E50
 * @note Size: 0x34
 */
static void JKRDefaultMemoryErrorRoutine(void* heap, u32 size, int alignment) { OSErrorLine(791, "abort\n"); }

/**
 * @note Address: 0x80023E84
 * @note Size: 0x20
 */
JKRHeapErrorHandler* JKRHeap::setErrorHandler(JKRHeapErrorHandler* newHandler)
{
	JKRHeapErrorHandler* oldHandler = mErrorHandler;
	if (!newHandler) {
		newHandler = JKRDefaultMemoryErrorRoutine;
	}
	mErrorHandler = newHandler;
	return oldHandler;
}

/**
 * @note Address: 0x80023EA4
 * @note Size: 0x4C
 * __nw__FUl
 */
void* operator new(u32 byteCount) { return (JKRHeap::sCurrentHeap) ? JKRHeap::sCurrentHeap->do_alloc(byteCount, 4) : nullptr; }

/**
 * @note Address: 0x80023EF0
 * @note Size: 0x50
 * __nw__FUli
 */
void* operator new(u32 byteCount, int p2) { return (JKRHeap::sCurrentHeap) ? JKRHeap::sCurrentHeap->do_alloc(byteCount, p2) : nullptr; }

/**
 * @note Address: 0x80023F40
 * @note Size: 0x6C
 * __nw__FUlP7JKRHeapi
 */
void* operator new(u32 byteCount, JKRHeap* heap, int p3)
{
	if (heap) {
		return heap->do_alloc(byteCount, p3);
	} else {
		return (JKRHeap::sCurrentHeap) ? JKRHeap::sCurrentHeap->do_alloc(byteCount, p3) : nullptr;
	}
}

/**
 * @note Address: 0x80023FAC
 * @note Size: 0x4C
 * __nwa__FUl
 */
void* operator new[](u32 byteCount) { return (JKRHeap::sCurrentHeap) ? JKRHeap::sCurrentHeap->do_alloc(byteCount, 4) : nullptr; }

/**
 * @note Address: 0x80023FF8
 * @note Size: 0x50
 * __nwa__FUli
 */
void* operator new[](u32 byteCount, int p2) { return (JKRHeap::sCurrentHeap) ? JKRHeap::sCurrentHeap->do_alloc(byteCount, p2) : nullptr; }

/**
 * @note Address: 0x80024048
 * @note Size: 0x6C
 * __nwa__FUlP7JKRHeapi
 */
void* operator new[](u32 byteCount, JKRHeap* heap, int p3)
{
	if (heap) {
		return heap->do_alloc(byteCount, p3);
	} else {
		return (JKRHeap::sCurrentHeap) ? JKRHeap::sCurrentHeap->do_alloc(byteCount, p3) : nullptr;
	}
}

/**
 * @note Address: 0x800240B4
 * @note Size: 0x24
 * __dl__FPv
 */
void operator delete(void* memory) { JKRHeap::free(memory, nullptr); }

/**
 * @note Address: 0x800240D8
 * @note Size: 0x24
 * __dla__FPv
 */
void operator delete[](void* memory) { JKRHeap::free(memory, nullptr); }

JKRHeap::TState::TState(const JKRHeap::TState::TArgument& arg, const JKRHeap::TState::TLocation& location)
    : mArgument(arg)
    , mLocation(location)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
JKRHeap::TState::TState(const JKRHeap::TState& other, bool p2)
    : mArgument(other.getHeap(), 0, p2)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
JKRHeap::TState::TState(const JKRHeap::TState& other, const JKRHeap::TState::TLocation& location, bool p3)
    : mArgument(other.getHeap(), 0, p3)
    , mLocation()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800240FC
 * @note Size: 0x414
 * __dt__Q27JKRHeap6TStateFv
 */
JKRHeap::TState::~TState()
{
	// NB: strings are from mkdd, should be in this location, makes sense w/ function
	// JUT_LOG as constructed doesn't put them in rodata so :)
	if (isCompareOnDestructed()) {
		TState state(getHeap(), getId(), false);
		if (mArgument.mHeap->state_compare(*this, state)) {
			if (isVerbose()) {
				// having this makes this check work correctly lol
				JUT_LOG("heap unchanged");
			}
		} else {
			state_dumpDifference(*this, state);

			if (isVerbose()) {
				char* str = mLocation._00;
				u32 addr  = mLocation._04;
				JUT_LOG("**** heap changed ****");
				JUT_LOG("location   : [%s:%d]", str, addr);
				JUT_LOG("**** heap changed : old ****");
				dump();
				JUT_LOG("**** heap changed : new ****");
				state.dump();
			}
		}
	}
}

/**
 * @note Address: 0x80024618
 * @note Size: 0x4
 */
void JKRHeap::state_register(TState*, u32) const { }

/**
 * @note Address: 0x8002461C
 * @note Size: 0x18
 */
bool JKRHeap::state_compare(const TState& state1, const TState& state2) const { return state1.getCheckCode() == state2.getCheckCode(); }

/**
 * @note Address: 0x80024634
 * @note Size: 0x4
 */
void JKRHeap::state_dumpDifference(const TState&, const TState&) { }

/**
 * @note Address: 0x80024634
 * @note Size: 0x4
 */
void JKRHeap::state_dump(const TState&) const { }
