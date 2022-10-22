#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global sBuffer
    sBuffer:
        .skip 0x4
    .global sLineMax
    sLineMax:
        .skip 0x4
    .global sLineCount
    sLineCount:
        .skip 0x4
    .global sTop
    sTop:
        .skip 0x4
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JASReportInit(JKRHeap*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASReportGetLineMax()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void JASReportCopyBuffer(char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A786C
 * Size:	0000FC
 */
void JASReport(const char*, ...)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	bne      cr1, lbl_800A78A4
	stfd     f1, 0x28(r1)
	stfd     f2, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f4, 0x40(r1)
	stfd     f5, 0x48(r1)
	stfd     f6, 0x50(r1)
	stfd     f7, 0x58(r1)
	stfd     f8, 0x60(r1)

lbl_800A78A4:
	lwz      r0, sBuffer@sda21(r13)
	stw      r3, 8(r1)
	cmplwi   r0, 0
	stw      r4, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r10, 0x24(r1)
	beq      lbl_800A7954
	lis      r3, sMutex@ha
	addi     r4, r1, 0x88
	addi     r3, r3, sMutex@l
	addi     r0, r1, 8
	lis      r5, 0x100
	stw      r4, 0x70(r1)
	stw      r5, 0x6c(r1)
	stw      r0, 0x74(r1)
	stw      r3, 0x68(r1)
	bl       OSLockMutex
	lwz      r0, sTop@sda21(r13)
	mr       r5, r31
	lwz      r3, sBuffer@sda21(r13)
	addi     r6, r1, 0x6c
	slwi     r0, r0, 6
	li       r4, 0x40
	add      r3, r3, r0
	bl       vsnprintf
	lwz      r3, sTop@sda21(r13)
	lwz      r4, sLineMax@sda21(r13)
	addi     r0, r3, 1
	cmpw     r0, r4
	stw      r0, sTop@sda21(r13)
	blt      lbl_800A7938
	li       r0, 0
	stw      r0, sTop@sda21(r13)

lbl_800A7938:
	lwz      r3, sLineCount@sda21(r13)
	cmpw     r3, r4
	bge      lbl_800A794C
	addi     r0, r3, 1
	stw      r0, sLineCount@sda21(r13)

lbl_800A794C:
	lwz      r3, 0x68(r1)
	bl       OSUnlockMutex

lbl_800A7954:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}
