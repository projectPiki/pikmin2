#include "types.h"

#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSUList.h"
#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JUtility/JUTException.h"

// TODO: This is stupid-hacky. Fix pls.
typedef void Destructor(void*, short);
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

/*
 * --INFO--
 * Address:	800232B4
 * Size:	000124
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

/*
 * --INFO--
 * Address:	800233D8
 * Size:	000114
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

/*
 * --INFO--
 * Address:	800234EC
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	80023594
 * Size:	000010
 */
JKRHeap* JKRHeap::becomeSystemHeap()
{
	JKRHeap* old = sSystemHeap;
	sSystemHeap  = this;
	return old;
}

/*
 * --INFO--
 * Address:	800235A4
 * Size:	000010
 */
JKRHeap* JKRHeap::becomeCurrentHeap()
{
	JKRHeap* old = sCurrentHeap;
	sCurrentHeap = this;
	return old;
}

/*
 * --INFO--
 * Address:	800235B4
 * Size:	00002C
 */
void JKRHeap::destroy() { do_destroy(); }

/*
 * --INFO--
 * Address:	800235E0
 * Size:	000060
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

/*
 * --INFO--
 * Address:	80023640
 * Size:	00002C
 */
void* JKRHeap::alloc(u32 byteCount, int padding) { return do_alloc(byteCount, padding); }

/*
 * --INFO--
 * Address:	8002366C
 * Size:	000048
 */
void JKRHeap::free(void* memory, JKRHeap* heap)
{
	if ((heap) || (heap = findFromRoot(memory), heap)) {
		heap->free(memory);
	}
}

/*
 * --INFO--
 * Address:	800236B4
 * Size:	00002C
 */
void JKRHeap::free(void* memory) { do_free(memory); }

/*
 * --INFO--
 * Address:	800236E0
 * Size:	000050
 */
void JKRHeap::callAllDisposer()
{
	JSUListIterator<JKRDisposer> iterator;
	while (iterator = mDisposerList.getFirst(), iterator != mDisposerList.getEnd()) {
		iterator->~JKRDisposer();
	}
}

/*
 * --INFO--
 * Address:	80023730
 * Size:	00002C
 */
void JKRHeap::freeAll() { do_freeAll(); }

/*
 * --INFO--
 * Address:	8002375C
 * Size:	00002C
 */
void JKRHeap::freeTail() { do_freeTail(); }

/*
 * --INFO--
 * Address:	80023788
 * Size:	00002C
 */
int JKRHeap::resize(void* memoryBlock, u32 newSize) { do_resize(memoryBlock, newSize); }

/*
 * --INFO--
 * Address:	800237B4
 * Size:	00002C
 */
u32 JKRHeap::getFreeSize() { return do_getFreeSize(); }

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void* JKRHeap::getMaxFreeBlock() { return do_getMaxFreeBlock(); }

/*
 * --INFO--
 * Address:	800237E0
 * Size:	00002C
 */
u32 JKRHeap::getTotalFreeSize() { return do_getTotalFreeSize(); }

/*
 * --INFO--
 * Address:	8002380C
 * Size:	00002C
 */
u8 JKRHeap::changeGroupID(u8 newGroupID) { return do_changeGroupID(newGroupID); }

/*
 * --INFO--
 * Address:	80023840
 * Size:	00002C
 */
u8 JKRHeap::getCurrentGroupId() { return do_getCurrentGroupId(); }

/*
 * TODO: What does p1 mean? Alignment?
 * Seems to only ever be called with 0x10.
 *
 * --INFO--
 * Address:	80023874
 * Size:	000080
 */
u32 JKRHeap::getMaxAllocatableSize(int alignment)
{
	u32 maxFreeBlock = (u32)getMaxFreeBlock();
	u32 ptrOffset    = (alignment - 1) & alignment - (maxFreeBlock & 0xf);
	return ~(alignment - 1) & (getFreeSize() - ptrOffset);
}

/*
 * --INFO--
 * Address:	800238F4
 * Size:	00003C
 */
JKRHeap* JKRHeap::findFromRoot(void* memory) { return (sRootHeap) ? sRootHeap->find(memory) : nullptr; }

/*
 * --INFO--
 * Address:	80023930
 * Size:	000270
 * find__7JKRHeapCFPv
 */
JKRHeap* JKRHeap::find(void* memory) const
{
	if (mStartAddress <= memory && memory < mEndAddress) {
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
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r22, 0x18(r1)
	  mr        r31, r4
	  mr        r26, r3
	  lwz       r0, 0x30(r3)
	  cmplw     r0, r31
	  bgt-      .loc_0x258
	  lwz       r0, 0x34(r26)
	  cmplw     r31, r0
	  bge-      .loc_0x258
	  lwz       r0, 0x48(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0x250
	  lwz       r30, 0x40(r26)
	  cmplwi    r30, 0
	  beq-      .loc_0x248
	  subi      r30, r30, 0xC
	  b         .loc_0x248

	.loc_0x50:
	  lwz       r29, 0xC(r30)
	  lwz       r0, 0x30(r29)
	  cmplw     r0, r31
	  bgt-      .loc_0x228
	  lwz       r0, 0x34(r29)
	  cmplw     r31, r0
	  bge-      .loc_0x228
	  lwz       r0, 0x48(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x220
	  lwz       r28, 0x40(r29)
	  cmplwi    r28, 0
	  beq-      .loc_0x218
	  subi      r28, r28, 0xC
	  b         .loc_0x218

	.loc_0x8C:
	  lwz       r27, 0xC(r28)
	  lwz       r0, 0x30(r27)
	  cmplw     r0, r31
	  bgt-      .loc_0x1F8
	  lwz       r0, 0x34(r27)
	  cmplw     r31, r0
	  bge-      .loc_0x1F8
	  lwz       r0, 0x48(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x1F0
	  addi      r3, r27, 0x40
	  bl        0x238
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  subi      r3, r3, 0xC

	.loc_0xC8:
	  mr        r24, r3
	  b         .loc_0x1E8

	.loc_0xD0:
	  lwz       r25, 0xC(r24)
	  lwz       r0, 0x30(r25)
	  cmplw     r0, r31
	  bgt-      .loc_0x1C8
	  lwz       r0, 0x34(r25)
	  cmplw     r31, r0
	  bge-      .loc_0x1C8
	  lwz       r0, 0x48(r25)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C0
	  addi      r3, r25, 0x40
	  bl        0x1E0
	  mr        r23, r3
	  b         .loc_0x1B0

	.loc_0x108:
	  lwz       r22, 0xC(r23)
	  lwz       r0, 0x30(r22)
	  cmplw     r0, r31
	  bgt-      .loc_0x194
	  lwz       r0, 0x34(r22)
	  cmplw     r31, r0
	  bge-      .loc_0x194
	  addi      r3, r22, 0x40
	  bl        0x1AC
	  cmplwi    r3, 0
	  beq-      .loc_0x18C
	  addi      r3, r22, 0x40
	  bl        0x1A4
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  bl        0x188
	  b         .loc_0x170

	.loc_0x14C:
	  addi      r3, r1, 0x8
	  bl        0x170
	  mr        r4, r31
	  bl        .loc_0x0
	  cmplwi    r3, 0
	  beq-      .loc_0x168
	  b         .loc_0x198

	.loc_0x168:
	  addi      r3, r1, 0x8
	  bl        0x138

	.loc_0x170:
	  addi      r3, r22, 0x40
	  bl        0x128
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  bl        0x104
	  rlwinm.   r0,r3,0,24,31
	  bne+      .loc_0x14C

	.loc_0x18C:
	  mr        r3, r22
	  b         .loc_0x198

	.loc_0x194:
	  li        r3, 0

	.loc_0x198:
	  cmplwi    r3, 0
	  beq-      .loc_0x1A4
	  b         .loc_0x1CC

	.loc_0x1A4:
	  mr        r3, r23
	  bl        .loc_0x270
	  mr        r23, r3

	.loc_0x1B0:
	  addi      r3, r25, 0x40
	  bl        0xE8
	  cmplw     r23, r3
	  bne+      .loc_0x108

	.loc_0x1C0:
	  mr        r3, r25
	  b         .loc_0x1CC

	.loc_0x1C8:
	  li        r3, 0

	.loc_0x1CC:
	  cmplwi    r3, 0
	  beq-      .loc_0x1D8
	  b         .loc_0x1FC

	.loc_0x1D8:
	  lwz       r24, 0x18(r24)
	  cmplwi    r24, 0
	  beq-      .loc_0x1E8
	  subi      r24, r24, 0xC

	.loc_0x1E8:
	  cmplwi    r24, 0
	  bne+      .loc_0xD0

	.loc_0x1F0:
	  mr        r3, r27
	  b         .loc_0x1FC

	.loc_0x1F8:
	  li        r3, 0

	.loc_0x1FC:
	  cmplwi    r3, 0
	  beq-      .loc_0x208
	  b         .loc_0x22C

	.loc_0x208:
	  lwz       r28, 0x18(r28)
	  cmplwi    r28, 0
	  beq-      .loc_0x218
	  subi      r28, r28, 0xC

	.loc_0x218:
	  cmplwi    r28, 0
	  bne+      .loc_0x8C

	.loc_0x220:
	  mr        r3, r29
	  b         .loc_0x22C

	.loc_0x228:
	  li        r3, 0

	.loc_0x22C:
	  cmplwi    r3, 0
	  beq-      .loc_0x238
	  b         .loc_0x25C

	.loc_0x238:
	  lwz       r30, 0x18(r30)
	  cmplwi    r30, 0
	  beq-      .loc_0x248
	  subi      r30, r30, 0xC

	.loc_0x248:
	  cmplwi    r30, 0
	  bne+      .loc_0x50

	.loc_0x250:
	  mr        r3, r26
	  b         .loc_0x25C

	.loc_0x258:
	  li        r3, 0

	.loc_0x25C:
	  lmw       r22, 0x18(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x270:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	80023C28
 * Size:	0000A8
 */
u32 JKRHeap::dispose(void* memory, u32 size)
{
	dispose_subroutine((u32)memory, (u32)memory + size);
	return false;
}

/*
 * --INFO--
 * Address:	80023CD0
 * Size:	0000A4
 */
void JKRHeap::dispose(void* begin, void* end) { dispose_subroutine((u32)begin, (u32)end); }

/*
 * --INFO--
 * Address:	80023D74
 * Size:	000050
 * dispose__7JKRHeapFv
 */
void JKRHeap::dispose()
{
	JSUListIterator<JKRDisposer> iterator;
	while ((iterator = mDisposerList.getFirst()) != mDisposerList.getEnd()) {
		iterator->~JKRDisposer();
	}
}

/*
 * --INFO--
 * Address:	80023DC4
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	80023E50
 * Size:	000034
 */
static void JKRDefaultMemoryErrorRoutine(void* heap, u32 size, int alignment) { OSErrorLine(791, "abort\n"); }

/*
 * --INFO--
 * Address:	80023E84
 * Size:	000020
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

/*
 * --INFO--
 * Address:	80023EA4
 * Size:	00004C
 * __nw__FUl
 */
void* operator new(u32 byteCount) { return (JKRHeap::sCurrentHeap) ? JKRHeap::sCurrentHeap->do_alloc(byteCount, 4) : nullptr; }

/*
 * --INFO--
 * Address:	80023EF0
 * Size:	000050
 * __nw__FUli
 */
void* operator new(u32 byteCount, int p2) { return (JKRHeap::sCurrentHeap) ? JKRHeap::sCurrentHeap->do_alloc(byteCount, p2) : nullptr; }

/*
 * --INFO--
 * Address:	80023F40
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	80023FAC
 * Size:	00004C
 * __nwa__FUl
 */
void* operator new[](u32 byteCount) { return (JKRHeap::sCurrentHeap) ? JKRHeap::sCurrentHeap->do_alloc(byteCount, 4) : nullptr; }

/*
 * --INFO--
 * Address:	80023FF8
 * Size:	000050
 * __nwa__FUli
 */
void* operator new[](u32 byteCount, int p2) { return (JKRHeap::sCurrentHeap) ? JKRHeap::sCurrentHeap->do_alloc(byteCount, p2) : nullptr; }

/*
 * --INFO--
 * Address:	80024048
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	800240B4
 * Size:	000024
 * __dl__FPv
 */
void operator delete(void* memory) { JKRHeap::free(memory, nullptr); }

/*
 * --INFO--
 * Address:	800240D8
 * Size:	000024
 * __dla__FPv
 */
void operator delete[](void* memory) { JKRHeap::free(memory, nullptr); }

// /*
// * --INFO--
// * Address:	........
// * Size:	00007C
// */
// JKRHeap::TState::TState(const JKRHeap::TState::TArgument& arg, const JKRHeap::TState::TLocation& location)
// {
// 	// UNUSED FUNCTION
// }
//
///*
// * --INFO--
// * Address:	........
// * Size:	000080
// */
// JKRHeap::TState::TState(const JKRHeap::TState& other, bool p2)
//{
//	// UNUSED FUNCTION
//}
//
///*
// * --INFO--
// * Address:	........
// * Size:	000080
// */
// JKRHeap::TState::TState(const JKRHeap::TState& other, const JKRHeap::TState::TLocation& location, bool p3)
//{
//	// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	800240FC
 * Size:	000414
 * __dt__Q27JKRHeap6TStateFv
 */
JKRHeap::TState::~TState()
{
	// NB: strings are from mkdd, should be in this location, makes sense w/ function
	// JUT_LOG as constructed doesn't put them in rodata so :)
	if (isCompareOnDestructed()) {
		TState state(getHeap(), getId(), false);
		if (mArgument.mHeap->state_compare(*this, state)) {
			if (this->isVerbose()) {
				// having this makes this check work correctly lol
				JUT_LOG("heap unchanged");
			}
		} else {
			state_dumpDifference(*this, state);
			if (isVerbose()) {
				JUT_LOG("**** heap changed ****");
				JUT_LOG("location   : [%s:%d]", mLocation._00, mLocation._04);
				JUT_LOG("**** heap changed : old ****");
				dump();
				JUT_LOG("**** heap changed : new ****");
				state.dump();
			}
		}

		// error on clear
	}
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stmw     r26, 0x78(r1)
	or.      r31, r3, r3
	mr       r28, r4
	beq      lbl_800244F8
	lbz      r0, 0x18(r31)
	cmplwi   r0, 0
	beq      lbl_80024354
	lwz      r3, 0x10(r31)
	li       r0, 0
	lwz      r5, 0x14(r31)
	cmplwi   r3, 0
	stw      r0, 0x54(r1)
	stw      r0, 0x58(r1)
	beq      lbl_80024144
	b        lbl_80024148

lbl_80024144:
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)

lbl_80024148:
	li       r6, 0
	li       r0, -1
	stw      r3, 0x64(r1)
	addi     r4, r1, 0x54
	stw      r5, 0x68(r1)
	stb      r6, 0x6c(r1)
	stw      r6, 0x70(r1)
	stw      r0, 0x74(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r31)
	mr       r4, r31
	addi     r5, r1, 0x54
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_800241A0
	b        lbl_800241E8

lbl_800241A0:
	mr       r3, r31
	addi     r4, r1, 0x54
	bl state_dumpDifference__7JKRHeapFRCQ27JKRHeap6TStateRCQ27JKRHeap6TState lbz
r0, bVerbose____Q27JKRHeap6TState@sda21(r13) cmplwi   r0, 0 beq      lbl_800241E8
	lwz      r3, 0x10(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x64(r1)
	addi     r4, r1, 0x54
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl

lbl_800241E8:
	lbz      r0, 0x6c(r1)
	cmplwi   r0, 0
	beq      lbl_80024354
	addi     r3, r1, 0x54
	bl       getId__Q27JKRHeap6TStateCFv
	mr       r29, r3
	addi     r3, r1, 0x54
	bl       getHeap__Q27JKRHeap6TStateCFv
	li       r0, 0
	mr       r4, r3
	stw      r0, 0x30(r1)
	addi     r3, r1, 0x40
	mr       r5, r29
	li       r6, 0
	stw      r0, 0x34(r1)
	bl       __ct__Q37JKRHeap6TState9TArgumentFPC7JKRHeapUlb
	addi     r3, r1, 0x4c
	bl       __ct__Q37JKRHeap6TState9TLocationFv
	lwz      r3, 0x40(r1)
	addi     r4, r1, 0x30
	lwz      r5, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x64(r1)
	addi     r4, r1, 0x54
	addi     r5, r1, 0x30
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80024274
	b        lbl_800242BC

lbl_80024274:
	addi     r3, r1, 0x54
	addi     r4, r1, 0x30
	bl state_dumpDifference__7JKRHeapFRCQ27JKRHeap6TStateRCQ27JKRHeap6TState lbz
r0, bVerbose____Q27JKRHeap6TState@sda21(r13) cmplwi   r0, 0 beq      lbl_800242BC
	lwz      r3, 0x64(r1)
	addi     r4, r1, 0x54
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x40(r1)
	addi     r4, r1, 0x30
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl

lbl_800242BC:
	addi     r3, r1, 0x30
	bl       isCompareOnDestructed__Q27JKRHeap6TStateCFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80024354
	addi     r3, r1, 0x30
	bl       getId__Q27JKRHeap6TStateCFv
	mr       r29, r3
	addi     r3, r1, 0x30
	bl       getHeap__Q27JKRHeap6TStateCFv
	mr       r4, r3
	mr       r5, r29
	addi     r3, r1, 0xc
	li       r6, 0
	bl       __ct__Q27JKRHeap6TStateFPC7JKRHeapUlb
	lwz      r3, 0x40(r1)
	addi     r4, r1, 0x30
	addi     r5, r1, 0xc
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80024320
	bl       isVerbose__Q27JKRHeap6TStateFv
	b        lbl_80024348

lbl_80024320:
	addi     r3, r1, 0x30
	addi     r4, r1, 0xc
	bl state_dumpDifference__7JKRHeapFRCQ27JKRHeap6TStateRCQ27JKRHeap6TState bl
isVerbose__Q27JKRHeap6TStateFv clrlwi.  r0, r3, 0x18 beq      lbl_80024348 addi
r3, r1, 0x30 bl       dump__Q27JKRHeap6TStateCFv addi     r3, r1, 0xc bl
dump__Q27JKRHeap6TStateCFv

lbl_80024348:
	addi     r3, r1, 0xc
	li       r4, -1
	bl       __dt__Q27JKRHeap6TStateFv

lbl_80024354:
	extsh.   r0, r28
	ble      lbl_800244F8
	lwz      r28, sRootHeap__7JKRHeap@sda21(r13)
	cmplwi   r28, 0
	beq      lbl_800244D8
	lwz      r0, 0x30(r28)
	cmplw    r0, r31
	bgt      lbl_800244D0
	lwz      r0, 0x34(r28)
	cmplw    r31, r0
	bge      lbl_800244D0
	lwz      r0, 0x48(r28)
	cmplwi   r0, 0
	beq      lbl_800244C8
	addi     r3, r28, 0x40
	bl       getFirstLink__10JSUPtrListCFv
	cmplwi   r3, 0
	beq      lbl_800243A0
	addi     r3, r3, -12

lbl_800243A0:
	mr       r29, r3
	b        lbl_800244C0

lbl_800243A8:
	lwz      r30, 0xc(r29)
	lwz      r0, 0x30(r30)
	cmplw    r0, r31
	bgt      lbl_800244A0
	lwz      r0, 0x34(r30)
	cmplw    r31, r0
	bge      lbl_800244A0
	lwz      r0, 0x48(r30)
	cmplwi   r0, 0
	beq      lbl_80024498
	addi     r3, r30, 0x40
	bl       "getFirstChild__17JSUTree<7JKRHeap>CFv"
	mr       r26, r3
	b        lbl_80024488

lbl_800243E0:
	lwz      r27, 0xc(r26)
	lwz      r0, 0x30(r27)
	cmplw    r0, r31
	bgt      lbl_8002446C
	lwz      r0, 0x34(r27)
	cmplw    r31, r0
	bge      lbl_8002446C
	addi     r3, r27, 0x40
	bl       "getNumChildren__17JSUTree<7JKRHeap>CFv"
	cmplwi   r3, 0
	beq      lbl_80024464
	addi     r3, r27, 0x40
	bl       "getFirstChild__17JSUTree<7JKRHeap>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ct__25JSUTreeIterator<7JKRHeap>FP17JSUTree<7JKRHeap>"
	b        lbl_80024448

lbl_80024424:
	addi     r3, r1, 8
	bl       "__rf__25JSUTreeIterator<7JKRHeap>CFv"
	mr       r4, r31
	bl       find__7JKRHeapCFPv
	cmplwi   r3, 0
	beq      lbl_80024440
	b        lbl_80024470

lbl_80024440:
	addi     r3, r1, 8
	bl       "__pp__25JSUTreeIterator<7JKRHeap>Fv"

lbl_80024448:
	addi     r3, r27, 0x40
	bl       "getEndChild__17JSUTree<7JKRHeap>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ne__25JSUTreeIterator<7JKRHeap>CFPC17JSUTree<7JKRHeap>"
	clrlwi.  r0, r3, 0x18
	bne      lbl_80024424

lbl_80024464:
	mr       r3, r27
	b        lbl_80024470

lbl_8002446C:
	li       r3, 0

lbl_80024470:
	cmplwi   r3, 0
	beq      lbl_8002447C
	b        lbl_800244A4

lbl_8002447C:
	mr       r3, r26
	bl       "getNextChild__17JSUTree<7JKRHeap>CFv"
	mr       r26, r3

lbl_80024488:
	addi     r3, r30, 0x40
	bl       "getEndChild__17JSUTree<7JKRHeap>CFv"
	cmplw    r26, r3
	bne      lbl_800243E0

lbl_80024498:
	mr       r3, r30
	b        lbl_800244A4

lbl_800244A0:
	li       r3, 0

lbl_800244A4:
	cmplwi   r3, 0
	beq      lbl_800244B0
	b        lbl_800244DC

lbl_800244B0:
	lwz      r29, 0x18(r29)
	cmplwi   r29, 0
	beq      lbl_800244C0
	addi     r29, r29, -12

lbl_800244C0:
	cmplwi   r29, 0
	bne      lbl_800243A8

lbl_800244C8:
	mr       r3, r28
	b        lbl_800244DC

lbl_800244D0:
	li       r3, 0
	b        lbl_800244DC

lbl_800244D8:
	li       r3, 0

lbl_800244DC:
	cmplwi   r3, 0
	beq      lbl_800244F8
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl

lbl_800244F8:
	mr       r3, r31
	lmw      r26, 0x78(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80024618
 * Size:	000004
 */
void JKRHeap::state_register(TState*, u32) const { }

/*
 * --INFO--
 * Address:	8002461C
 * Size:	000018
 */
bool JKRHeap::state_compare(const TState& state1, const TState& state2) const { return state1.getCheckCode() == state2.getCheckCode(); }

/*
 * --INFO--
 * Address:	80024634
 * Size:	000004
 */
void JKRHeap::state_dumpDifference(const TState&, const TState&) { }

/*
 * --INFO--
 * Address:	80024634
 * Size:	000004
 */
void JKRHeap::state_dump(const TState&) const { }
