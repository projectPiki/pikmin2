#include "JSystem/JUT/JUTGraphFifo.h"
#include "Dolphin/gx.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12JUTGraphFifo
    __vt__12JUTGraphFifo:
        .4byte 0
        .4byte 0
        .4byte __dt__12JUTGraphFifoFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global sInitiated__12JUTGraphFifo
    sInitiated__12JUTGraphFifo:
        .skip 0x4
    .global sCurrentFifo__12JUTGraphFifo
    sCurrentFifo__12JUTGraphFifo:
        .skip 0x4
    .global mGpStatus__12JUTGraphFifo
    mGpStatus__12JUTGraphFifo:
        .skip 0x8
*/

JUTGraphFifo* JUTGraphFifo::sCurrentFifo;
GXBool JUTGraphFifo::mGpStatus[5];

/**
 * --INFO--
 * Address:	8002EB34
 * Size:	0000DC
 * TODO: Needs GXInit, sizeof for 0xA0.
 */
JUTGraphFifo::JUTGraphFifo(u32 p1)
{
	_0C = ALIGN_NEXT(p1, 0x20);
	if (sInitiated) {
		m_fifo = (GXFifoObj*)JKRHeap::sSystemHeap->alloc(_0C + sizeof(GXFifoObj), 0x20);
		_08    = m_fifo + 1;
		GXInitFifoBase(m_fifo, _08, _0C);
		GXInitFifoPtrs(m_fifo, _08, _08);
	} else {
		/** TODO: Figure out what has sizeof 0xA0. */
		_08 = JKRHeap::sSystemHeap->alloc(_0C + 0xA0, 0x20);
		_08 = (void*)ALIGN_NEXT((u32)_08, 0x20);
		// m_fifo = GXInit(_08, _0C);
		sInitiated   = true;
		sCurrentFifo = this;
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, __vt__12JUTGraphFifo@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, 0x1f
	rlwinm   r0, r0, 0, 0, 0x1a
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r5, __vt__12JUTGraphFifo@l
	stw      r3, 0(r31)
	stw      r0, 0xc(r31)
	lbz      r0, sInitiated__12JUTGraphFifo@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8002EBB4
	lwz      r4, 0xc(r31)
	li       r5, 0x20
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	addi     r4, r4, 0x80
	bl       alloc__7JKRHeapFUli
	stw      r3, 4(r31)
	lwz      r3, 4(r31)
	addi     r0, r3, 0x80
	stw      r0, 8(r31)
	lwz      r3, 4(r31)
	lwz      r4, 8(r31)
	lwz      r5, 0xc(r31)
	bl       GXInitFifoBase
	lwz      r4, 8(r31)
	lwz      r3, 4(r31)
	mr       r5, r4
	bl       GXInitFifoPtrs
	b        lbl_8002EBF8

lbl_8002EBB4:
	lwz      r4, 0xc(r31)
	li       r5, 0x20
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	addi     r4, r4, 0xa0
	bl       alloc__7JKRHeapFUli
	stw      r3, 8(r31)
	lwz      r3, 8(r31)
	addi     r0, r3, 0x1f
	rlwinm   r0, r0, 0, 0, 0x1a
	stw      r0, 8(r31)
	lwz      r3, 8(r31)
	lwz      r4, 0xc(r31)
	bl       GXInit
	stw      r3, 4(r31)
	li       r0, 1
	stb      r0, sInitiated__12JUTGraphFifo@sda21(r13)
	stw      r31, sCurrentFifo__12JUTGraphFifo@sda21(r13)

lbl_8002EBF8:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002EC10
 * Size:	0000BC
 */
JUTGraphFifo::~JUTGraphFifo()
{
	GXSaveCPUFifo(sCurrentFifo->m_fifo);
	do {
		GXGetGPStatus(mGpStatus, mGpStatus + 1, mGpStatus + 2, mGpStatus + 3, mGpStatus + 4);
	} while (mGpStatus[2] == GX_FALSE);
	if (sCurrentFifo == this) {
		sCurrentFifo = nullptr;
	}
	JKRHeap::sSystemHeap->free(_08);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	or.      r26, r3, r3
	mr       r27, r4
	beq      lbl_8002ECB4
	lis      r3, __vt__12JUTGraphFifo@ha
	addi     r0, r3, __vt__12JUTGraphFifo@l
	stw      r0, 0(r26)
	lwz      r3, sCurrentFifo__12JUTGraphFifo@sda21(r13)
	lwz      r3, 4(r3)
	bl       GXSaveCPUFifo
	addi     r31, r13, mGpStatus__12JUTGraphFifo@sda21
	mr       r30, r31
	mr       r29, r31
	addi     r28, r31, 1
	addi     r31, r31, 4
	addi     r30, r30, 3
	addi     r29, r29, 2

lbl_8002EC60:
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	mr       r7, r31
	addi     r3, r13, mGpStatus__12JUTGraphFifo@sda21
	bl       GXGetGPStatus
	lbz      r0, 0(r29)
	cmplwi   r0, 0
	beq      lbl_8002EC60
	lwz      r0, sCurrentFifo__12JUTGraphFifo@sda21(r13)
	cmplw    r0, r26
	bne      lbl_8002EC98
	li       r0, 0
	stw      r0, sCurrentFifo__12JUTGraphFifo@sda21(r13)

lbl_8002EC98:
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	lwz      r4, 8(r26)
	bl       free__7JKRHeapFPv
	extsh.   r0, r27
	ble      lbl_8002ECB4
	mr       r3, r26
	bl       __dl__FPv

lbl_8002ECB4:
	mr       r3, r26
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void JUTGraphFifo::becomeCurrent()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JUTGraphFifo::setBreakPt()
{
	// UNUSED FUNCTION
}
