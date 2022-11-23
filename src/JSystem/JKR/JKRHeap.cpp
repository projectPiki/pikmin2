#include "types.h"

#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JSupport/JSUList.h"
#include "Dolphin/os.h"
#include "JSystem/JKR/JKRDisposer.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80473A68
    lbl_80473A68:
        .asciz "JKRHeap.cpp"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__7JKRHeap
    __vt__7JKRHeap:
        .4byte 0
        .4byte 0
        .4byte __dt__7JKRHeapFv
        .4byte callAllDisposer__7JKRHeapFv
        .4byte 0
        .4byte 0
        .4byte dump_sort__7JKRHeapFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte do_changeGroupID__7JKRHeapFUc
        .4byte do_getCurrentGroupId__7JKRHeapFv
        .4byte state_register__7JKRHeapCFPQ27JKRHeap6TStateUl
        .4byte state_compare__7JKRHeapCFRCQ27JKRHeap6TStateRCQ27JKRHeap6TState
        .4byte state_dump__7JKRHeapCFRCQ27JKRHeap6TState

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sDefaultFillFlag__7JKRHeap
    sDefaultFillFlag__7JKRHeap:
        .byte 1
        .skip 3

    .section .sbss # 0x80514D80 - 0x80516360
    .global sSystemHeap__7JKRHeap
    sSystemHeap__7JKRHeap:
        .skip 0x4
    .global sCurrentHeap__7JKRHeap
    sCurrentHeap__7JKRHeap:
        .skip 0x4
    .global sRootHeap__7JKRHeap
    sRootHeap__7JKRHeap:
        .skip 0x4
    .global mErrorHandler__7JKRHeap
    mErrorHandler__7JKRHeap:
        .skip 0x4
    .global sDefaultFillCheckFlag__7JKRHeap
    sDefaultFillCheckFlag__7JKRHeap:
        .skip 0x4
    .global mCodeStart__7JKRHeap
    mCodeStart__7JKRHeap:
        .skip 0x4
    .global mCodeEnd__7JKRHeap
    mCodeEnd__7JKRHeap:
        .skip 0x4
    .global mUserRamStart__7JKRHeap
    mUserRamStart__7JKRHeap:
        .skip 0x4
    .global mUserRamEnd__7JKRHeap
    mUserRamEnd__7JKRHeap:
        .skip 0x4
    .global mMemorySize__7JKRHeap
    mMemorySize__7JKRHeap:
        .skip 0x4
    .global bVerbose___Q27JKRHeap6TState
    bVerbose___Q27JKRHeap6TState:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516530
    lbl_80516530:
        .4byte 0x61626F72
        .4byte 0x740A0000
*/

// TODO: This is stupid-hacky. Fix pls.
typedef void Destructor(void*, short);
#define INVOKE_VIRT_DTOR(o, v) (((*(Destructor***)(o))[2])((o), (v)))

/*
 * --INFO--
 * Address:	800232B4
 * Size:	000124
 * __ct__7JKRHeapFPvUlP7JKRHeapb
 */
JKRHeap::JKRHeap(void* startPtr, u32 size, JKRHeap* parentHeap, bool shouldSetErrorHandlerMaybe)
    : _40()
    , _4C(this)
    , m_disposerList()
{
	OSInitMutex(&m_mutex);
	m_heapSize     = size;
	m_startAddress = startPtr;
	m_endAddress   = (u8*)startPtr + size;

	if (parentHeap) {
		JSUPtrLink* pJVar1 = _40.m_head;
		if (pJVar1) {
			pJVar1 = &_4C;
		}
		parentHeap->_40.append(pJVar1);
		if (JKRHeap::sSystemHeap == JKRHeap::sRootHeap) {
			becomeSystemHeap();
		}
		if (JKRHeap::sCurrentHeap == JKRHeap::sRootHeap) {
			becomeCurrentHeap();
		}
	} else {
		becomeSystemHeap();
		becomeCurrentHeap();
	}
	_68 = shouldSetErrorHandlerMaybe;
	if ((_68) && (JKRHeap::mErrorHandler == nullptr)) {
		JKRHeap::mErrorHandler = JKRDefaultMemoryErrorRoutine;
	}
	m_fillFlag      = JKRHeap::sDefaultFillFlag;
	m_fillCheckFlag = JKRHeap::sDefaultFillCheckFlag;
	_69             = 0;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r31, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  bl        -0x630C
	  lis       r3, 0x804A
	  addi      r26, r31, 0x40
	  subi      r0, r3, 0x100
	  stw       r0, 0x0(r31)
	  mr        r3, r26
	  bl        0x35E0
	  mr        r4, r31
	  addi      r3, r26, 0xC
	  bl        0x34BC
	  addi      r3, r31, 0x5C
	  bl        0x35CC
	  addi      r3, r31, 0x18
	  bl        0xCC824
	  stw       r28, 0x38(r31)
	  cmplwi    r29, 0
	  add       r0, r27, r28
	  stw       r27, 0x30(r31)
	  stw       r0, 0x34(r31)
	  bne-      .loc_0x88
	  mr        r3, r31
	  bl        0x268
	  mr        r3, r31
	  bl        0x270
	  b         .loc_0xCC

	.loc_0x88:
	  addic.    r4, r31, 0x40
	  beq-      .loc_0x94
	  addi      r4, r4, 0xC

	.loc_0x94:
	  addi      r3, r29, 0x40
	  bl        0x3598
	  lwz       r3, -0x77D8(r13)
	  lwz       r0, -0x77D0(r13)
	  cmplw     r3, r0
	  bne-      .loc_0xB4
	  mr        r3, r31
	  bl        0x230

	.loc_0xB4:
	  lwz       r3, -0x77D4(r13)
	  lwz       r0, -0x77D0(r13)
	  cmplw     r3, r0
	  bne-      .loc_0xCC
	  mr        r3, r31
	  bl        0x228

	.loc_0xCC:
	  stb       r30, 0x68(r31)
	  lbz       r0, 0x68(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xF4
	  lwz       r0, -0x77CC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xF4
	  lis       r3, 0x8002
	  addi      r0, r3, 0x3E50
	  stw       r0, -0x77CC(r13)

	.loc_0xF4:
	  lbz       r4, -0x7FE0(r13)
	  li        r0, 0
	  mr        r3, r31
	  stb       r4, 0x3C(r31)
	  lbz       r4, -0x77C8(r13)
	  stb       r4, 0x3D(r31)
	  stb       r0, 0x69(r31)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800233D8
 * Size:	000114
 */
JKRHeap::~JKRHeap()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800234D0
	lis      r3, __vt__7JKRHeap@ha
	addic.   r4, r30, 0x40
	addi     r0, r3, __vt__7JKRHeap@l
	stw      r0, 0(r30)
	lwz      r3, 0x50(r30)
	beq      lbl_80023414
	addi     r4, r4, 0xc

lbl_80023414:
	bl       remove__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sRootHeap__7JKRHeap@sda21(r13)
	lwz      r3, 0x40(r4)
	cmplwi   r3, 0
	beq      lbl_8002342C
	addi     r3, r3, -12

lbl_8002342C:
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	cmplw    r0, r30
	bne      lbl_80023450
	cmplwi   r3, 0
	bne      lbl_80023448
	mr       r0, r4
	b        lbl_8002344C

lbl_80023448:
	lwz      r0, 0xc(r3)

lbl_8002344C:
	stw      r0, sCurrentHeap__7JKRHeap@sda21(r13)

lbl_80023450:
	lwz      r0, sSystemHeap__7JKRHeap@sda21(r13)
	cmplw    r0, r30
	bne      lbl_80023470
	cmplwi   r3, 0
	bne      lbl_80023468
	b        lbl_8002346C

lbl_80023468:
	lwz      r4, 0xc(r3)

lbl_8002346C:
	stw      r4, sSystemHeap__7JKRHeap@sda21(r13)

lbl_80023470:
	addic.   r0, r30, 0x5c
	beq      lbl_80023484
	addi     r3, r30, 0x5c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_80023484:
	addic.   r0, r30, 0x40
	beq      lbl_800234B4
	addic.   r0, r30, 0x4c
	beq      lbl_800234A0
	addi     r3, r30, 0x4c
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_800234A0:
	addic.   r0, r30, 0x40
	beq      lbl_800234B4
	addi     r3, r30, 0x40
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_800234B4:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_800234D0
	mr       r3, r30
	bl       __dl__FPv

lbl_800234D0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800234EC
 * Size:	0000A8
 */
bool JKRHeap::initArena(char** outUserRamStart, u32* outUserRamSize, int numHeaps)
{
	void* arenaLo    = OSGetArenaLo();
	void* arenaHi    = OSGetArenaHi();
	bool sanityCheck = (arenaLo != arenaHi);
	if (sanityCheck) {
		OSInitAlloc(arenaLo, arenaHi, numHeaps);
		u8* userRamEnd   = (u8*)((u32)arenaHi & ~0x1f);
		u8* userRamStart = (u8*)(((u32)arenaLo + 0x1f) & ~0x1f);
		// TODO: Remove hardcoding of start of memory?
		mCodeStart = (u8*)0x80000000;
		// TODO: Remove hardcoding of what I've called OS::PhysicalMemorySize.
		mMemorySize   = *(u32*)0x80000028;
		mCodeEnd      = userRamStart;
		mUserRamStart = userRamStart;
		mUserRamEnd   = userRamEnd;
		OSSetArenaLo(userRamEnd);
		OSSetArenaHi(userRamEnd);
		*outUserRamStart = (char*)userRamStart;
		*outUserRamSize  = (u32)userRamEnd - (u32)userRamStart;
	}
	return sanityCheck;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  bl        0xC8F24
	  mr        r30, r3
	  bl        0xC8F14
	  mr        r31, r3
	  cmplw     r30, r31
	  bne-      .loc_0x3C
	  li        r3, 0
	  b         .loc_0x94

	.loc_0x3C:
	  mr        r3, r30
	  mr        r4, r31
	  mr        r5, r29
	  bl        0xC8E14
	  addi      r0, r3, 0x1F
	  rlwinm    r30,r31,0,0,26
	  rlwinm    r31,r0,0,0,26
	  lis       r4, 0x8000
	  stw       r4, -0x77C4(r13)
	  mr        r3, r30
	  stw       r31, -0x77C0(r13)
	  stw       r31, -0x77BC(r13)
	  stw       r30, -0x77B8(r13)
	  lwz       r0, 0x28(r4)
	  stw       r0, -0x77B4(r13)
	  bl        0xC8ED8
	  mr        r3, r30
	  bl        0xC8EC8
	  stw       r31, 0x0(r27)
	  sub       r0, r30, r31
	  li        r3, 0x1
	  stw       r0, 0x0(r28)

	.loc_0x94:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
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
void* JKRHeap::alloc(u32 byteCount, int padding)
{
	return do_alloc(byteCount, padding);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

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
void JKRHeap::free(void* memory)
{
	do_free(memory);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800236E0
 * Size:	000050
 */
void JKRHeap::callAllDisposer()
{
	JSUPtrLink* link;
	while (link = m_disposerList.m_head, link) {
		// delete (JKRHeap*)link->m_value);
		INVOKE_VIRT_DTOR((JKRHeap*)link->m_value, -1);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  b         .loc_0x30

	.loc_0x18:
	  lwz       r3, 0x0(r3)
	  li        r4, -0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  lwz       r3, 0x5C(r31)
	  cmplwi    r3, 0
	  bne+      .loc_0x18
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
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
void JKRHeap::resize(void* memoryBlock, u32 newSize) { do_resize(memoryBlock, newSize); }

/*
 * --INFO--
 * Address:	800237B4
 * Size:	00002C
 */
u32 JKRHeap::getFreeSize() { return do_getFreeSize(); }

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
 * Address:	80023838
 * Size:	000008
 */
u8 JKRHeap::do_changeGroupID(u8 newGroupID) { return 0; }

/*
 * --INFO--
 * Address:	80023840
 * Size:	00002C
 */
u8 JKRHeap::getCurrentGroupId() { return do_getCurrentGroupId(); }

/*
 * --INFO--
 * Address:	8002386C
 * Size:	000008
 */
u8 JKRHeap::do_getCurrentGroupId() { return 0; }

/*
 * TODO: What does p1 mean? Alignment?
 * Seems to only ever be called with 0x10.
 *
 * --INFO--
 * Address:	80023874
 * Size:	000080
 */
u32 JKRHeap::getMaxAllocatableSize(int p1)
{
	// u8* maxFreeBlock = do_getMaxFreeBlock();
	// u32 freeSize = do_getFreeSize();
	return ~(p1 - 1) & do_getFreeSize() - (p1 - 1 & p1 - (u32)do_getMaxFreeBlock() & 0xf);
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r31,0,28,31
	  subi      r4, r30, 0x1
	  sub       r0, r30, r0
	  and       r0, r4, r0
	  not       r4, r4
	  sub       r0, r3, r0
	  and       r3, r4, r0
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800238F4
 * Size:	00003C
 */
JKRHeap* JKRHeap::findFromRoot(void* memory)
{
	// JKRHeap* findings;
	// if (sRootHeap) {
	// 	findings = sRootHeap->find(memory);
	// } else {
	// 	findings = nullptr;
	// }
	// return findings;
	// // Above isn't tested, but this is cleaner:
	return (sRootHeap) ? sRootHeap->find(memory) : nullptr;
}

/*
 * --INFO--
 * Address:	80023930
 * Size:	000270
 * find__7JKRHeapCFPv
 */
JKRHeap* JKRHeap::find(void* memory) const
{
	if ((memory < m_startAddress) || (m_endAddress <= memory)) {
		return nullptr;
	}
	if (_40.m_linkCount != 0) {
		JSUPtrLink* pJVar12 = _40.m_head;
		if (pJVar12) {
			// pJVar12 = pJVar12
		}
	}
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
 * TODO: This feels WRONG.
 *
 * --INFO--
 * Address:	80023BA0
 * Size:	000014
 */
// template <> JKRHeap* JSUTree<JKRHeap>::getNextChild() const
// {
// 	JSUPtrLink* next = m_link.m_next;
// 	return (next) ? (JKRHeap*)next[-1].m_list : nullptr;
// 	/*
// 	.loc_0x0:
// 	  lwz       r3, 0x18(r3)
// 	  cmplwi    r3, 0
// 	  beqlr-
// 	  subi      r3, r3, 0xC
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80023BB4
 * Size:	000018
 */
template <>
bool JSUTreeIterator<JKRHeap>::operator!=(const JSUTree<JKRHeap>*) const
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r3)
	  sub       r3, r4, r0
	  sub       r0, r0, r4
	  or        r0, r3, r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80023BCC
 * Size:	000008
 */
template <>
JSUTree<JKRHeap>* JSUTree<JKRHeap>::getEndChild() const
{
	return nullptr;
}

/*
 * --INFO--
 * Address:	80023BD4
 * Size:	00001C
 */
template <>
JSUTreeIterator<JKRHeap>& JSUTreeIterator<JKRHeap>::operator++()
{
	/*
	lwz      r4, 0(r3)
	lwz      r4, 0x18(r4)
	cmplwi   r4, 0
	beq      lbl_80023BE8
	addi     r4, r4, -12

lbl_80023BE8:
	stw      r4, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80023BF0
 * Size:	00000C
 */
template <>
JKRHeap* JSUTreeIterator<JKRHeap>::operator->() const
{
	return getObject();
}

/*
 * --INFO--
 * Address:	80023BFC
 * Size:	000008
 */
template <>
JSUTreeIterator<JKRHeap>::JSUTreeIterator(JSUTree<JKRHeap>* tree)
    : m_tree(tree)
{
}

/*
 * --INFO--
 * Address:	80023C04
 * Size:	000008
 */
template <>
int JSUTree<JKRHeap>::getNumChildren() const
{
	return getNumLinks();
}

/*
 * --INFO--
 * Address:	80023C0C
 * Size:	000014
 */
template <>
JSUTree<JKRHeap>* JSUTree<JKRHeap>::getFirstChild() const
{
	/*
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beqlr
	addi     r3, r3, -12
	blr
	*/
}

/*
 * --INFO--
 * Address:	80023C20
 * Size:	000008
 */
// JSUPtrLink* JSUPtrList::getFirstLink() const { return m_head; }

/*
 * --INFO--
 * Address:	80023C28
 * Size:	0000A8
 */
u32 JKRHeap::dispose(void* memory, u32 p2)
{
	int returnValue   = 0;
	JSUPtrLink* link1 = m_disposerList.m_head;
	JSUPtrLink* link2;
	JSUPtrLink* link3;
	while (link2 = link1, link2) {
		void* value = link2->m_value;
		if ((value < memory) || ((u8*)memory + p2) <= value) {
			link1 = link2->m_next;
			link3 = link2;
		} else {
			INVOKE_VIRT_DTOR(value, -1);
			link1 = (link3) ? link3->m_next : m_disposerList.m_head;
		}
	}
	return returnValue;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  add       r30, r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r4, 0x5C(r3)
	  b         .loc_0x7C

	.loc_0x34:
	  lwz       r3, 0x0(r4)
	  cmplw     r29, r3
	  bgt-      .loc_0x74
	  cmplw     r3, r30
	  bge-      .loc_0x74
	  lwz       r12, 0x0(r3)
	  li        r4, -0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r31, 0
	  bne-      .loc_0x6C
	  lwz       r4, 0x5C(r28)
	  b         .loc_0x7C

	.loc_0x6C:
	  lwz       r4, 0xC(r31)
	  b         .loc_0x7C

	.loc_0x74:
	  mr        r31, r4
	  lwz       r4, 0xC(r4)

	.loc_0x7C:
	  cmplwi    r4, 0
	  bne+      .loc_0x34
	  lwz       r0, 0x24(r1)
	  li        r3, 0
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80023CD0
 * Size:	0000A4
 */
void JKRHeap::dispose(void*, void*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r4, 0x5c(r3)
	b        lbl_80023D4C

lbl_80023D04:
	lwz      r3, 0(r4)
	cmplw    r29, r3
	bgt      lbl_80023D44
	cmplw    r3, r30
	bge      lbl_80023D44
	lwz      r12, 0(r3)
	li       r4, -1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmplwi   r31, 0
	bne      lbl_80023D3C
	lwz      r4, 0x5c(r28)
	b        lbl_80023D4C

lbl_80023D3C:
	lwz      r4, 0xc(r31)
	b        lbl_80023D4C

lbl_80023D44:
	mr       r31, r4
	lwz      r4, 0xc(r4)

lbl_80023D4C:
	cmplwi   r4, 0
	bne      lbl_80023D04
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80023D74
 * Size:	000050
 * dispose__7JKRHeapFv
 */
void JKRHeap::dispose()
{
	JSUPtrLink* link;
	// Not endless loop. The dtor will remove link from list.
	while (link = m_disposerList.m_head, link) {
		INVOKE_VIRT_DTOR(link->m_value, -1);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  b         .loc_0x30

	.loc_0x18:
	  lwz       r3, 0x0(r3)
	  li        r4, -0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  lwz       r3, 0x5C(r31)
	  cmplwi    r3, 0
	  bne+      .loc_0x18
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80023DC4
 * Size:	00008C
 */
void JKRHeap::copyMemory(void*, void*, unsigned long)
{
	/*
	addi     r0, r5, 3
	rlwinm.  r0, r0, 0x1e, 2, 0x1f
	mr       r5, r0
	beqlr
	rlwinm.  r0, r0, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_80023E34

lbl_80023DE0:
	lwz      r0, 0(r4)
	stw      r0, 0(r3)
	lwz      r0, 4(r4)
	stw      r0, 4(r3)
	lwz      r0, 8(r4)
	stw      r0, 8(r3)
	lwz      r0, 0xc(r4)
	stw      r0, 0xc(r3)
	lwz      r0, 0x10(r4)
	stw      r0, 0x10(r3)
	lwz      r0, 0x14(r4)
	stw      r0, 0x14(r3)
	lwz      r0, 0x18(r4)
	stw      r0, 0x18(r3)
	lwz      r0, 0x1c(r4)
	addi     r4, r4, 0x20
	stw      r0, 0x1c(r3)
	addi     r3, r3, 0x20
	bdnz     lbl_80023DE0
	andi.    r5, r5, 7
	beqlr

lbl_80023E34:
	mtctr    r5

lbl_80023E38:
	lwz      r0, 0(r4)
	addi     r4, r4, 4
	stw      r0, 0(r3)
	addi     r3, r3, 4
	bdnz     lbl_80023E38
	blr
	*/
}

/*
 * --INFO--
 * Address:	80023E50
 * Size:	000034
 */
void JKRDefaultMemoryErrorRoutine(void*, unsigned long, int)
{
	OSErrorLine(791, "abort\n");
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8047
	  li        r4, 0x317
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x3A68
	  subi      r5, r2, 0x7E30
	  crclr     6, 0x6
	  bl        0xC98FC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

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
void operator delete(void* memory)
{
	JKRHeap::free(memory, nullptr);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  bl        -0xA58
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800240D8
 * Size:	000024
 * __dla__FPv
 */
void operator delete[](void* memory)
{
	JKRHeap::free(memory, nullptr);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  bl        -0xA7C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
JKRHeap::TState::TState(const JKRHeap::TState::TArgument& arg, const JKRHeap::TState::TLocation& location)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
JKRHeap::TState::TState(const JKRHeap::TState& other, bool p2)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
JKRHeap::TState::TState(const JKRHeap::TState& other, const JKRHeap::TState::TLocation& location, bool p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800240FC
 * Size:	000414
 * __dt__Q27JKRHeap6TStateFv
 */
JKRHeap::TState::~TState()
{
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
r0, bVerbose___Q27JKRHeap6TState@sda21(r13) cmplwi   r0, 0 beq      lbl_800241E8
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
r0, bVerbose___Q27JKRHeap6TState@sda21(r13) cmplwi   r0, 0 beq      lbl_800242BC
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
 * Address:	80024510
 * Size:	000034
 */
void JKRHeap::TState::dump() const
{
	m_heap->state_dump(this);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  lwz       r3, 0x10(r3)
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80024544
 * Size:	000008
 */
bool JKRHeap::TState::isVerbose() { return bVerbose; }

/*
 * --INFO--
 * Address:	8002454C
 * Size:	000080
 *  __ct__Q27JKRHeap6TStateFPC7JKRHeapUlb
 */
JKRHeap::TState::TState(const JKRHeap* heap, u32 id, bool isCompareOnDestructed)
    : _00(nullptr)
    , _04(0)
    , m_heap(heap ? heap : sCurrentHeap)
    , m_id(id)
    , m_isCompareOnDestructed(isCompareOnDestructed)
    , _1C(0)
    , _20(-1)
{
	m_heap->state_register(this, m_id);
}

/*
 * --INFO--
 * Address:	800245CC
 * Size:	000008
 */
bool JKRHeap::TState::isCompareOnDestructed() const { return m_isCompareOnDestructed; }

/*
 * --INFO--
 * Address:	800245D4
 * Size:	000014
 */
JKRHeap::TState::TLocation::TLocation()
    : _00(nullptr)
    , _04(-1)
{
}

/*
 * --INFO--
 * Address:	800245E8
 * Size:	000020
 * __ct__Q37JKRHeap6TState9TArgumentFPC7JKRHeapUlb
 */
JKRHeap::TState::TArgument::TArgument(const JKRHeap* heap, u32 p2, bool p3)
    : m_heap((heap) ? heap : JKRHeap::sCurrentHeap)
    , _04(p2)
    , _08(p3)
{
}

/*
 * --INFO--
 * Address:	80024608
 * Size:	000008
 */
const JKRHeap* JKRHeap::TState::getHeap() const { return m_heap; }

/*
 * --INFO--
 * Address:	80024610
 * Size:	000008
 */
u32 JKRHeap::TState::getId() const { return m_id; }

/*
 * --INFO--
 * Address:	80024618
 * Size:	000004
 */
void JKRHeap::state_register(JKRHeap::TState*, u32) const { }

/*
 * --INFO--
 * Address:	8002461C
 * Size:	000018
 */
bool JKRHeap::state_compare(const JKRHeap::TState& state1, const JKRHeap::TState& state2) const
{
	if (state1._00 == state2._00) {
		return (state1._04 == state2._04);
	}
	return false;
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r4)
	  lwz       r0, 0x4(r5)
	  sub       r0, r0, r3
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80024634
 * Size:	000004
 */
void JKRHeap::state_dumpDifference(const JKRHeap::TState&, const JKRHeap::TState&) { }

/*
 * --INFO--
 * Address:	80024638
 * Size:	000004
 */
void JKRHeap::state_dump(const JKRHeap::TState*) const { }

/*
 * --INFO--
 * Address:	8002463C
 * Size:	000008
 */
bool JKRHeap::dump_sort() { return true; }
