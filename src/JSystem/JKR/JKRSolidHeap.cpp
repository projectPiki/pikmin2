#include "Dolphin/os.h"
#include "types.h"
#include "JSystem/JKR/JKRHeap.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80473AA8
    lbl_80473AA8:
        .asciz "allocFromHead: cannot alloc memory (0x%x byte).\n"
        .skip 3
    .global lbl_80473ADC
    lbl_80473ADC:
        .asciz "allocFromTail: cannot alloc memory (0x%x byte).\n"
        .skip 3
    .global lbl_80473B10
    lbl_80473B10:
        .asciz "free: cannot free memory block (%08x)\n"
        .skip 1
    .global lbl_80473B38
    lbl_80473B38:
        .asciz "resize: cannot resize memory block (%08x: %d)\n"
        .skip 1
    .global lbl_80473B68
    lbl_80473B68:
        .asciz "getSize: cannot get memory block size (%08x)\n"
        .skip 2
    .global lbl_80473B98
    lbl_80473B98:
        .asciz "check: bad total memory block size (%08X, %08X)\n"
        .skip 3
        .asciz "head %08x: %08x\n"
        .skip 3
        .asciz "tail %08x: %08x\n"
        .skip 3
        .asciz "%d / %d bytes (%6.2f%%) used\n"
        .skip 2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12JKRSolidHeap
    __vt__12JKRSolidHeap:
        .4byte 0
        .4byte 0
        .4byte __dt__12JKRSolidHeapFv
        .4byte callAllDisposer__7JKRHeapFv
        .4byte getHeapType__12JKRSolidHeapFv
        .4byte check__12JKRSolidHeapFv
        .4byte dump_sort__7JKRHeapFv
        .4byte dump__12JKRSolidHeapFv
        .4byte do_destroy__12JKRSolidHeapFv
        .4byte do_alloc__12JKRSolidHeapFUli
        .4byte do_free__12JKRSolidHeapFPv
        .4byte do_freeAll__12JKRSolidHeapFv
        .4byte do_freeTail__12JKRSolidHeapFv
        .4byte do_fillFreeArea__12JKRSolidHeapFv
        .4byte do_resize__12JKRSolidHeapFPvUl
        .4byte do_getSize__12JKRSolidHeapFPv
        .4byte do_getFreeSize__12JKRSolidHeapFv
        .4byte do_getMaxFreeBlock__12JKRSolidHeapFv
        .4byte do_getTotalFreeSize__12JKRSolidHeapFv
        .4byte do_changeGroupID__7JKRHeapFUc
        .4byte do_getCurrentGroupId__7JKRHeapFv
        .4byte state_register__12JKRSolidHeapCFPQ27JKRHeap6TStateUl
        .4byte
   state_compare__12JKRSolidHeapCFRCQ27JKRHeap6TStateRCQ27JKRHeap6TState .4byte
   state_dump__7JKRHeapCFRCQ27JKRHeap6TState

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516538
    lbl_80516538:
        .4byte 0x42C80000
        .4byte 0x00000000
    .global lbl_80516540
    lbl_80516540:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516548
    lbl_80516548:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80024D70
 * Size:	0000B4
 */
JKRSolidHeap* JKRSolidHeap::create(unsigned long heapSize, JKRHeap* parent, bool p3)
{
	if (parent == nullptr) {
		parent = sRootHeap;
	}
	if (heapSize == 0xFFFFFFFF) {
		heapSize = parent->getMaxAllocatableSize(0x10);
	}
	u32 byteCount = heapSize & 0xFFFFFFF0;
	JKRSolidHeap* result;
	if (byteCount < 0x80) {
		result = nullptr;
	} else {
		void* memory = JKRHeap::alloc(byteCount, 0x10, parent);
		if (memory) {
			// (*((JKRSolidHeap*)memory)).JKRSolidHeap(((u8*)memory)+sizeof(JKRSolidHeap), byteCount-0x80, parent, p3);
		}
	}
	// result = new(parent, 0x10) JKRSolidHeap(sizeof(JKRSolidHeap))
	return result;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	bne      lbl_80024D98
	lwz      r29, sRootHeap__7JKRHeap@sda21(r13)

lbl_80024D98:
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_80024DB0
	mr       r3, r29
	li       r4, 0x10
	bl       getMaxAllocatableSize__7JKRHeapFi

lbl_80024DB0:
	rlwinm   r31, r3, 0, 0, 0x1b
	cmplwi   r31, 0x80
	bge      lbl_80024DC4
	li       r3, 0
	b        lbl_80024E08

lbl_80024DC4:
	mr       r3, r31
	mr       r5, r29
	li       r4, 0x10
	bl       alloc__7JKRHeapFUliP7JKRHeap
	mr       r0, r3
	or.      r5, r0, r0
	addi     r4, r5, 0x80
	bne      lbl_80024DEC
	li       r3, 0
	b        lbl_80024E08

lbl_80024DEC:
	beq      lbl_80024E04
	mr       r6, r29
	mr       r7, r30
	addi     r5, r31, -128
	bl       __ct__12JKRSolidHeapFPvUlP7JKRHeapb
	mr       r0, r3

lbl_80024E04:
	mr       r3, r0

lbl_80024E08:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80024E24
 * Size:	000060
 */
void JKRSolidHeap::do_destroy()
{

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 0x50(r3)
	lwz      r31, 0xc(r4)
	cmplwi   r31, 0
	beq      lbl_80024E6C
	lwz      r12, 0(r3)
	li       r4, -1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_80024E6C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80024E84
 * Size:	00005C
 * __ct__12JKRSolidHeapFPvUlP7JKRHeapb
 */
JKRSolidHeap::JKRSolidHeap(void* p1, unsigned long p2, JKRHeap* heap, bool p4)
    : JKRHeap(p1, p2, heap, p4)
    , m_freeSize(m_heapSize)
    , _70(m_startAddress)
    , _74(m_endAddress)
    , _78(0)
{
}

/*
 * --INFO--
 * Address:	80024EE0
 * Size:	000068
 * __dt__12JKRSolidHeapFv
 */
JKRSolidHeap::~JKRSolidHeap() { dispose(); }

/*
 * --INFO--
 * Address:	80024F48
 * Size:	0000C4
 */
void JKRSolidHeap::adjustSize()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x50(r3)
	lwz      r31, 0xc(r3)
	cmplwi   r31, 0
	beq      lbl_80024FEC
	addi     r3, r29, 0x18
	bl       OSLockMutex
	lwz      r5, 0x30(r29)
	mr       r3, r31
	lwz      r0, 0x70(r29)
	mr       r4, r29
	subf     r6, r29, r5
	subf     r5, r5, r0
	addi     r0, r5, 0x1f
	rlwinm   r30, r0, 0, 0, 0x1a
	add      r31, r6, r30
	mr       r5, r31
	bl       resize__7JKRHeapFPvUl
	cmpwi    r3, -1
	beq      lbl_80024FDC
	li       r0, 0
	stw      r0, 0x6c(r29)
	stw      r30, 0x38(r29)
	lwz      r3, 0x30(r29)
	lwz      r0, 0x38(r29)
	add      r0, r3, r0
	stw      r0, 0x34(r29)
	lwz      r0, 0x34(r29)
	stw      r0, 0x70(r29)
	lwz      r0, 0x34(r29)
	stw      r0, 0x74(r29)

lbl_80024FDC:
	addi     r3, r29, 0x18
	bl       OSUnlockMutex
	mr       r3, r31
	b        lbl_80024FF0

lbl_80024FEC:
	li       r3, -1

lbl_80024FF0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002500C
 * Size:	0000B0
 */
void* JKRSolidHeap::do_alloc(unsigned long p1, int p2)
{
	void* mem;
	OSLockMutex(&m_mutex);
	if (p1 < 4) {
		p1 = 4;
	}
	if (p2 >= 0) {
		mem = allocFromHead(p1, MAX(4, p2));
	} else {
		mem = allocFromTail(p1, MAX(4, -p2));
	}
	OSUnlockMutex(&m_mutex);
	return mem;
}

/*
 * --INFO--
 * Address:	800250BC
 * Size:	0000D8
 */
void* JKRSolidHeap::allocFromHead(unsigned long, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	addi     r6, r4, 3
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r5
	addi     r5, r29, -1
	stw      r28, 0x10(r1)
	nor      r4, r5, r5
	rlwinm   r28, r6, 0, 0, 0x1d
	lwz      r7, 0x70(r3)
	lwz      r0, 0x6c(r3)
	add      r3, r29, r7
	addi     r3, r3, -1
	and      r5, r4, r3
	subf     r3, r7, r5
	add      r4, r28, r3
	cmplw    r4, r0
	bgt      lbl_80025134
	add      r0, r7, r4
	mr       r30, r5
	stw      r0, 0x70(r31)
	lwz      r0, 0x6c(r31)
	subf     r0, r4, r0
	stw      r0, 0x6c(r31)
	b        lbl_80025170

lbl_80025134:
	lis      r3, lbl_80473AA8@ha
	addi     r3, r3, lbl_80473AA8@l
	crclr    6
	bl       JUTWarningConsole_f
	lbz      r0, 0x68(r31)
	cmplwi   r0, 1
	bne      lbl_80025170
	lwz      r12, mErrorHandler__7JKRHeap@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_80025170
	mr       r3, r31
	mr       r4, r28
	mr       r5, r29
	mtctr    r12
	bctrl

lbl_80025170:
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	80025194
 * Size:	0000D0
 */
void* JKRSolidHeap::allocFromTail(unsigned long, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	addi     r0, r4, 3
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	rlwinm   r28, r0, 0, 0, 0x1d
	addi     r0, r29, -1
	lwz      r5, 0x74(r3)
	nor      r4, r0, r0
	lwz      r0, 0x6c(r3)
	subf     r3, r28, r5
	and      r3, r4, r3
	subf     r4, r3, r5
	cmplw    r4, r0
	bgt      lbl_80025204
	subf     r0, r4, r5
	mr       r30, r3
	stw      r0, 0x74(r31)
	lwz      r0, 0x6c(r31)
	subf     r0, r4, r0
	stw      r0, 0x6c(r31)
	b        lbl_80025240

lbl_80025204:
	lis      r3, lbl_80473ADC@ha
	addi     r3, r3, lbl_80473ADC@l
	crclr    6
	bl       JUTWarningConsole_f
	lbz      r0, 0x68(r31)
	cmplwi   r0, 1
	bne      lbl_80025240
	lwz      r12, mErrorHandler__7JKRHeap@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_80025240
	mr       r3, r31
	mr       r4, r28
	mr       r5, r29
	mtctr    r12
	bctrl

lbl_80025240:
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	80025264
 * Size:	00002C
 */
void JKRSolidHeap::do_free(void*)
{
	// JUTWarningConsole_f("free: cannot free memory block (%08x)\n");
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_80473B10@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, lbl_80473B10@l
	crclr    6
	bl       JUTWarningConsole_f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80025290
 * Size:	000060
 */
void JKRSolidHeap::do_freeAll()
{
	OSLockMutex(&m_mutex);
	JKRHeap::callAllDisposer();
	m_freeSize = m_heapSize;
	_70        = m_startAddress;
	_74        = m_endAddress;
	_78        = 0;
	OSUnlockMutex(&m_mutex);
}

/*
 * --INFO--
 * Address:	800252F0
 * Size:	00008C
 */
void JKRSolidHeap::do_freeTail()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x18
	bl       OSLockMutex
	lwz      r4, 0x74(r31)
	lwz      r5, 0x34(r31)
	cmplw    r4, r5
	beq      lbl_80025324
	mr       r3, r31
	bl       dispose__7JKRHeapFPvPv

lbl_80025324:
	lwz      r3, 0x74(r31)
	lwz      r0, 0x34(r31)
	lwz      r4, 0x6c(r31)
	subf     r0, r3, r0
	add      r0, r4, r0
	stw      r0, 0x6c(r31)
	lwz      r0, 0x34(r31)
	stw      r0, 0x74(r31)
	lwz      r3, 0x78(r31)
	b        lbl_80025358

lbl_8002534C:
	lwz      r0, 0x34(r31)
	stw      r0, 0xc(r3)
	lwz      r3, 0x10(r3)

lbl_80025358:
	cmplwi   r3, 0
	bne      lbl_8002534C
	addi     r3, r31, 0x18
	bl       OSUnlockMutex
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002537C
 * Size:	000004
 */
void JKRSolidHeap::do_fillFreeArea() { }

/*
 * --INFO--
 * Address:	80025380
 * Size:	000030
 */
int JKRSolidHeap::do_resize(void*, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_80473B38@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, lbl_80473B38@l
	crclr    6
	bl       JUTWarningConsole_f
	lwz      r0, 0x14(r1)
	li       r3, -1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800253B0
 * Size:	000030
 */
int JKRSolidHeap::do_getSize(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_80473B68@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, lbl_80473B68@l
	crclr    6
	bl       JUTWarningConsole_f
	lwz      r0, 0x14(r1)
	li       r3, -1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800253E0
 * Size:	00008C
 */
bool JKRSolidHeap::check()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0x18
	bl       OSLockMutex
	lwz      r5, 0x30(r30)
	li       r31, 1
	lwz      r4, 0x70(r30)
	lwz      r3, 0x74(r30)
	lwz      r0, 0x34(r30)
	subf     r5, r5, r4
	lwz      r6, 0x6c(r30)
	subf     r0, r3, r0
	lwz      r4, 0x38(r30)
	add      r5, r5, r0
	add      r5, r6, r5
	cmplw    r5, r4
	beq      lbl_80025448
	lis      r3, lbl_80473B98@ha
	li       r31, 0
	addi     r3, r3, lbl_80473B98@l
	crclr    6
	bl       JUTWarningConsole_f

lbl_80025448:
	addi     r3, r30, 0x18
	bl       OSUnlockMutex
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002546C
 * Size:	000104
 */
bool JKRSolidHeap::dump()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_80473AA8@ha
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r4, lbl_80473AA8@l
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	mr       r28, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	addi     r3, r28, 0x18
	mr       r30, r0
	bl       OSLockMutex
	lwz      r4, 0x30(r28)
	addi     r3, r31, 0x124
	lwz      r5, 0x70(r28)
	lwz      r6, 0x74(r28)
	lwz      r0, 0x34(r28)
	subf     r5, r4, r5
	subf     r0, r6, r0
	add      r29, r5, r0
	crclr    6
	bl       JUTReportConsole_f
	lwz      r4, 0x74(r28)
	addi     r3, r31, 0x138
	lwz      r0, 0x34(r28)
	subf     r5, r4, r0
	crclr    6
	bl       JUTReportConsole_f
	lis      r0, 0x4330
	xoris    r3, r29, 0x8000
	lwz      r5, 0x38(r28)
	mr       r4, r29
	stw      r3, 0xc(r1)
	addi     r3, r31, 0x14c
	lfd      f2, lbl_80516540@sda21(r2)
	stw      r0, 8(r1)
	lfd      f1, lbl_80516548@sda21(r2)
	lfd      f0, 8(r1)
	stw      r5, 0x14(r1)
	fsubs    f2, f0, f2
	lfs      f3, lbl_80516538@sda21(r2)
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	fmuls    f1, f3, f0
	crset    6
	bl       JUTReportConsole_f
	addi     r3, r28, 0x18
	bl       OSUnlockMutex
	lwz      r0, 0x34(r1)
	mr       r3, r30
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80025570
 * Size:	00005C
 */
void JKRSolidHeap::state_register(JKRHeap::TState* state, unsigned long id) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r5, 0x14(r4)
	bl       getTotalFreeSize__7JKRHeapFv
	lwz      r0, 0x38(r30)
	subf     r0, r3, r0
	stw      r0, 0(r31)
	lwz      r0, 0x74(r30)
	lwz      r3, 0x70(r30)
	mulli    r0, r0, 3
	add      r3, r3, r0
	stw      r3, 4(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800255CC
 * Size:	000030
 */
bool JKRSolidHeap::state_compare(const JKRHeap::TState&, const JKRHeap::TState&) const
{
	/*
	.loc_0x0:
	  lwz       r6, 0x4(r4)
	  li        r3, 0x1
	  lwz       r0, 0x4(r5)
	  cmplw     r6, r0
	  beq-      .loc_0x18
	  li        r3, 0

	.loc_0x18:
	  lwz       r4, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  cmplw     r4, r0
	  beqlr-
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800255FC
 * Size:	00000C
 */
u32 JKRSolidHeap::getHeapType()
{
	/*
	lis      r3, 0x534C4944@ha
	addi     r3, r3, 0x534C4944@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80025608
 * Size:	000008
 */
u32 JKRSolidHeap::do_getFreeSize()
{
	/*
	lwz      r3, 0x6c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80025610
 * Size:	000008
 */
void* JKRSolidHeap::do_getMaxFreeBlock()
{
	/*
	lwz      r3, 0x70(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80025618
 * Size:	000020
 */
u32 JKRSolidHeap::do_getTotalFreeSize()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       getFreeSize__7JKRHeapFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
