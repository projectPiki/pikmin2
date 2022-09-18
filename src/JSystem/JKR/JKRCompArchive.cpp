#include "JSystem/JKR/JKRArchive.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804735C8
    lbl_804735C8:
        .4byte 0x4A4B5243
        .4byte 0x6F6D7041
        .4byte 0x72636869
        .4byte 0x76652E63
        .4byte 0x70700000
    .global lbl_804735DC
    lbl_804735DC:
        .4byte 0x696C6C65
        .4byte 0x67616C20
        .4byte 0x61726368
        .4byte 0x6976652E
        .4byte 0x00000000
    .global lbl_804735F0
    lbl_804735F0:
        .4byte 0x696C6C65
        .4byte 0x67616C20
        .4byte 0x7265736F
        .4byte 0x75726365
        .4byte 0x2E000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__14JKRCompArchive
    __vt__14JKRCompArchive:
        .4byte 0
        .4byte 0
        .4byte __dt__14JKRCompArchiveFv
        .4byte unmount__13JKRFileLoaderFv
        .4byte becomeCurrent__10JKRArchiveFPCc
        .4byte getResource__10JKRArchiveFPCc
        .4byte getResource__10JKRArchiveFUlPCc
        .4byte readResource__10JKRArchiveFPvUlPCc
        .4byte readResource__10JKRArchiveFPvUlUlPCc
        .4byte removeResourceAll__14JKRCompArchiveFv
        .4byte removeResource__14JKRCompArchiveFPv
        .4byte detachResource__10JKRArchiveFPv
        .4byte getResSize__10JKRArchiveCFPCv
        .4byte countFile__10JKRArchiveCFPCc
        .4byte getFirstFile__10JKRArchiveCFPCc
        .4byte getExpandedResSize__14JKRCompArchiveCFPCv
        .4byte fetchResource__14JKRCompArchiveFPQ210JKRArchive12SDIFileEntryPUl
        .4byte
   fetchResource__14JKRCompArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl .4byte
   setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl .4byte
   getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805164E8
    lbl_805164E8:
        .4byte 0x25730000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8001BBB8
 * Size:	0000B0
 * __ct
 */
JKRCompArchive::JKRCompArchive(long p1, JKRArchive::EMountDirection mountDirection)
    : JKRArchive(p1, EMM_Comp)
    , m_mountDirection(mountDirection)
{
	if (open(p1)) {
		m_magicWord = 'RARC';
		_28         = _54[*_48->_04];
		sVolumeList.prepend(&_18);
		_30 = 1;
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	li       r5, 4
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       __ct__10JKRArchiveFlQ210JKRArchive10EMountMode
	lis      r4, __vt__14JKRCompArchive@ha
	mr       r3, r29
	addi     r0, r4, __vt__14JKRCompArchive@l
	mr       r4, r30
	stw      r0, 0(r29)
	stw      r31, 0x60(r29)
	bl       open__14JKRCompArchiveFl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8001BC10
	mr       r3, r29
	b        lbl_8001BC4C

lbl_8001BC10:
	lis      r4, 0x52415243@ha
	lis      r3, sVolumeList__13JKRFileLoader@ha
	addi     r0, r4, 0x52415243@l
	stw      r0, 0x2c(r29)
	addi     r4, r29, 0x18
	addi     r3, r3, sVolumeList__13JKRFileLoader@l
	lwz      r5, 0x48(r29)
	lwz      r6, 0x54(r29)
	lwz      r0, 4(r5)
	add      r0, r6, r0
	stw      r0, 0x28(r29)
	bl       prepend__10JSUPtrListFP10JSUPtrLink
	li       r0, 1
	mr       r3, r29
	stb      r0, 0x30(r29)

lbl_8001BC4C:
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
 * Address:	8001BC68
 * Size:	000150
 */
JKRCompArchive::~JKRCompArchive()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	or.      r30, r3, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	beq      lbl_8001BD94
	lis      r3, __vt__14JKRCompArchive@ha
	addi     r0, r3, __vt__14JKRCompArchive@l
	stw      r0, 0(r30)
	lwz      r0, 0x44(r30)
	cmplwi   r0, 0
	beq      lbl_8001BCFC
	lwz      r29, 0x4c(r30)
	li       r28, 0
	b        lbl_8001BCDC

lbl_8001BCB4:
	lwz      r0, 4(r29)
	rlwinm.  r0, r0, 8, 0x1b, 0x1b
	bne      lbl_8001BCD4
	lwz      r3, 0x10(r29)
	cmplwi   r3, 0
	beq      lbl_8001BCD4
	lwz      r4, 0x38(r30)
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_8001BCD4:
	addi     r29, r29, 0x14
	addi     r28, r28, 1

lbl_8001BCDC:
	lwz      r3, 0x44(r30)
	lwz      r0, 8(r3)
	cmplw    r28, r0
	blt      lbl_8001BCB4
	lwz      r4, 0x38(r30)
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r0, 0
	stw      r0, 0x44(r30)

lbl_8001BCFC:
	lwz      r3, 0x68(r30)
	cmplwi   r3, 0
	beq      lbl_8001BD20
	beq      lbl_8001BD20
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8001BD20:
	lwz      r3, 0x50(r30)
	cmplwi   r3, 0
	beq      lbl_8001BD3C
	li       r4, 0
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r0, 0
	stw      r0, 0x50(r30)

lbl_8001BD3C:
	lwz      r3, 0x70(r30)
	cmplwi   r3, 0
	beq      lbl_8001BD60
	beq      lbl_8001BD60
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8001BD60:
	lis      r3, sVolumeList__13JKRFileLoader@ha
	addi     r4, r30, 0x18
	addi     r3, r3, sVolumeList__13JKRFileLoader@l
	bl       remove__10JSUPtrListFP10JSUPtrLink
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x30(r30)
	li       r4, 0
	bl       __dt__10JKRArchiveFv
	extsh.   r0, r31
	ble      lbl_8001BD94
	mr       r3, r30
	bl       __dl__FPv

lbl_8001BD94:
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
 * Address:	8001BDB8
 * Size:	00057C
 */
bool JKRCompArchive::open(long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x34(r1)
	li       r0, 0
	stmw     r25, 0x14(r1)
	mr       r31, r3
	mr       r27, r4
	stw      r0, 0x44(r3)
	li       r3, 0xf8
	stw      r0, 0x64(r31)
	stw      r0, 0x68(r31)
	stw      r0, 0x6c(r31)
	stw      r0, 0x74(r31)
	stw      r0, 0x78(r31)
	stw      r0, 0x7c(r31)
	stw      r0, 0x48(r31)
	stw      r0, 0x4c(r31)
	stw      r0, 0x54(r31)
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_8001BE20
	mr       r4, r27
	bl       __ct__10JKRDvdFileFl
	mr       r0, r3

lbl_8001BE20:
	stw      r0, 0x70(r31)
	lwz      r0, 0x70(r31)
	cmplwi   r0, 0
	bne      lbl_8001BE40
	li       r0, 0
	li       r3, 0
	stb      r0, 0x3c(r31)
	b        lbl_8001C320

lbl_8001BE40:
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	li       r4, 0x20
	li       r5, -32
	bl       alloc__7JKRHeapFUli
	or.      r29, r3, r3
	bne      lbl_8001BE64
	li       r0, 0
	stb      r0, 0x3c(r31)
	b        lbl_8001C2D0

lbl_8001BE64:
	li       r0, 0
	mr       r3, r27
	stw      r0, 8(r1)
	mr       r4, r29
	addi     r10, r31, 0x5c
	li       r5, 1
	li       r6, 0x20
	li       r7, 0
	li       r8, 1
	li       r9, 0
	bl
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r3, r29
	li       r4, 0x20
	bl       DCInvalidateRange
	lwz      r0, 0x14(r29)
	stw      r0, 0x74(r31)
	lwz      r0, 0x18(r29)
	stw      r0, 0x78(r31)
	lwz      r0, 0x5c(r31)
	cmpwi    r0, 1
	beq      lbl_8001C014
	bge      lbl_8001BEC8
	cmpwi    r0, 0
	bge      lbl_8001BED0
	b        lbl_8001C21C

lbl_8001BEC8:
	cmpwi    r0, 3
	bge      lbl_8001C21C

lbl_8001BED0:
	lwz      r0, 0x60(r31)
	li       r4, -32
	cmpwi    r0, 1
	bne      lbl_8001BEE4
	li       r4, 0x20

lbl_8001BEE4:
	lwz      r3, 0xc(r29)
	mr       r30, r4
	lwz      r0, 0x74(r31)
	lwz      r5, 0x38(r31)
	add      r3, r3, r0
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x44(r31)
	lwz      r4, 0x44(r31)
	cmplwi   r4, 0
	bne      lbl_8001BF18
	li       r0, 0
	stb      r0, 0x3c(r31)
	b        lbl_8001C21C

lbl_8001BF18:
	li       r0, 0
	mr       r3, r27
	stw      r0, 8(r1)
	li       r5, 1
	li       r7, 0
	li       r8, 1
	lwz      r6, 0xc(r29)
	li       r9, 0x20
	lwz      r0, 0x74(r31)
	li       r10, 0
	add      r6, r6, r0
	bl
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	lwz      r4, 0xc(r29)
	lwz      r0, 0x74(r31)
	lwz      r3, 0x44(r31)
	add      r4, r4, r0
	bl       DCInvalidateRange
	lwz      r3, 0x44(r31)
	lwz      r0, 0xc(r29)
	add      r0, r3, r0
	stw      r0, 0x64(r31)
	lwz      r4, 0x78(r31)
	cmplwi   r4, 0
	beq      lbl_8001BFD0
	lwz      r3, sAramObject__7JKRAram@sda21(r13)
	li       r5, 0
	lwz      r3, 0x94(r3)
	bl       alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode
	stw      r3, 0x68(r31)
	lwz      r9, 0x68(r31)
	cmplwi   r9, 0
	bne      lbl_8001BFA4
	li       r0, 0
	stb      r0, 0x3c(r31)
	b        lbl_8001C21C

lbl_8001BFA4:
	lwz      r4, 0x74(r31)
	mr       r3, r27
	lwz      r0, 0xc(r29)
	li       r5, 1
	lwz      r8, 8(r29)
	li       r7, 0
	add      r6, r0, r4
	lwz      r4, 0x14(r9)
	add      r6, r8, r6
	li       r8, 0
	bl       loadToAram__16JKRDvdAramRipperFlUl15JKRExpandSwitchUlUlPUl

lbl_8001BFD0:
	lwz      r3, 0x44(r31)
	lwz      r0, 4(r3)
	add      r0, r3, r0
	stw      r0, 0x48(r31)
	lwz      r3, 0x44(r31)
	lwz      r0, 0xc(r3)
	add      r0, r3, r0
	stw      r0, 0x4c(r31)
	lwz      r3, 0x44(r31)
	lwz      r0, 0x14(r3)
	add      r0, r3, r0
	stw      r0, 0x54(r31)
	lwz      r3, 8(r29)
	lwz      r0, 0xc(r29)
	add      r0, r3, r0
	stw      r0, 0x6c(r31)
	b        lbl_8001C21C

lbl_8001C014:
	lwz      r3, 0x70(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x60(r31)
	addi     r3, r3, 0x1f
	rlwinm   r25, r3, 0, 0, 0x1a
	li       r30, -32
	cmpwi    r0, 1
	bne      lbl_8001C044
	li       r30, 0x20

lbl_8001C044:
	neg      r26, r30
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r4, r25
	mr       r5, r26
	bl       alloc__7JKRHeapFUli
	or.      r28, r3, r3
	bne      lbl_8001C06C
	li       r0, 0
	stb      r0, 0x3c(r31)
	b        lbl_8001C1DC

lbl_8001C06C:
	li       r0, 0
	mr       r3, r27
	stw      r0, 8(r1)
	mr       r4, r28
	mr       r6, r25
	li       r5, 2
	li       r7, 0
	li       r8, 1
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r3, r28
	mr       r4, r25
	bl       DCInvalidateRange
	lbz      r0, 5(r28)
	mr       r4, r26
	lbz      r3, 4(r28)
	slwi     r0, r0, 0x10
	lbz      r6, 6(r28)
	rlwimi   r0, r3, 0x18, 0, 7
	lbz      r7, 7(r28)
	rlwimi   r0, r6, 8, 0x10, 0x17
	lwz      r5, 0x38(r31)
	or       r3, r7, r0
	addi     r0, r3, 0x1f
	rlwinm   r25, r0, 0, 0, 0x1a
	mr       r3, r25
	bl       alloc__7JKRHeapFUliP7JKRHeap
	or.      r27, r3, r3
	bne      lbl_8001C0F0
	li       r0, 0
	stb      r0, 0x3c(r31)
	b        lbl_8001C1DC

lbl_8001C0F0:
	mr       r29, r27
	mr       r3, r28
	mr       r4, r27
	mr       r5, r25
	li       r6, 0
	bl       orderSync__9JKRDecompFPUcPUcUlUl
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r4, r28
	bl       free__7JKRHeapFPv
	lwz      r3, 0xc(r29)
	mr       r4, r30
	lwz      r0, 0x74(r31)
	lwz      r5, 0x38(r31)
	add      r3, r3, r0
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x44(r31)
	lwz      r3, 0x44(r31)
	cmplwi   r3, 0
	bne      lbl_8001C148
	li       r0, 0
	stb      r0, 0x3c(r31)
	b        lbl_8001C1DC

lbl_8001C148:
	lwz      r5, 0xc(r29)
	addi     r4, r29, 0x20
	lwz      r0, 0x74(r31)
	add      r5, r5, r0
	bl       copyMemory__7JKRHeapFPvPvUl
	lwz      r3, 0x44(r31)
	lwz      r0, 0xc(r29)
	add      r0, r3, r0
	stw      r0, 0x64(r31)
	lwz      r4, 0x78(r31)
	cmplwi   r4, 0
	beq      lbl_8001C1DC
	lwz      r3, sAramObject__7JKRAram@sda21(r13)
	li       r5, 0
	lwz      r3, 0x94(r3)
	bl       alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode
	stw      r3, 0x68(r31)
	lwz      r5, 0x68(r31)
	cmplwi   r5, 0
	bne      lbl_8001C1A4
	li       r0, 0
	stb      r0, 0x3c(r31)
	b        lbl_8001C1DC

lbl_8001C1A4:
	lwz      r4, 8(r29)
	li       r6, 0
	lwz      r3, 0xc(r29)
	li       r7, 0
	lwz      r0, 0x74(r31)
	li       r8, 0
	add      r3, r4, r3
	lwz      r4, 0x14(r5)
	add      r3, r3, r0
	lwz      r5, 0x78(r31)
	add      r3, r27, r3
	li       r9, -1
	li       r10, 0
	bl       mainRamToAram__7JKRAramFPUcUlUl15JKRExpandSwitchUlP7JKRHeapiPUl

lbl_8001C1DC:
	lwz      r3, 0x44(r31)
	lwz      r0, 4(r3)
	add      r0, r3, r0
	stw      r0, 0x48(r31)
	lwz      r3, 0x44(r31)
	lwz      r0, 0xc(r3)
	add      r0, r3, r0
	stw      r0, 0x4c(r31)
	lwz      r3, 0x44(r31)
	lwz      r0, 0x14(r3)
	add      r0, r3, r0
	stw      r0, 0x54(r31)
	lwz      r3, 8(r29)
	lwz      r0, 0xc(r29)
	add      r0, r3, r0
	stw      r0, 0x6c(r31)

lbl_8001C21C:
	li       r0, 0
	li       r4, 0
	stw      r0, 0x50(r31)
	lwz      r3, 0x44(r31)
	lwz      r5, 0x4c(r31)
	lwz      r0, 8(r3)
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_8001C26C

lbl_8001C240:
	lwz      r3, 4(r5)
	rlwinm.  r0, r3, 8, 0x1f, 0x1f
	srwi     r3, r3, 0x18
	beq      lbl_8001C264
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	bne      lbl_8001C264
	rlwinm   r0, r3, 0, 0x1d, 0x1d
	or       r0, r4, r0
	clrlwi   r4, r0, 0x18

lbl_8001C264:
	addi     r5, r5, 0x14
	bdnz     lbl_8001C240

lbl_8001C26C:
	clrlwi.  r0, r4, 0x18
	beq      lbl_8001C2D0
	mr       r3, r30
	bl       abs
	lwz      r4, 0x44(r31)
	lwz      r5, 0x38(r31)
	lwz      r0, 8(r4)
	mr       r4, r3
	slwi     r3, r0, 2
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x50(r31)
	lwz      r3, 0x50(r31)
	cmplwi   r3, 0
	bne      lbl_8001C2BC
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	lwz      r4, 0x44(r31)
	bl       free__7JKRHeapFPv
	li       r0, 0
	stb      r0, 0x3c(r31)
	b        lbl_8001C2D0

lbl_8001C2BC:
	lwz      r5, 0x44(r31)
	li       r4, 0
	lwz      r0, 8(r5)
	slwi     r5, r0, 2
	bl       memset

lbl_8001C2D0:
	cmplwi   r29, 0
	beq      lbl_8001C2E4
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r4, r29
	bl       free__7JKRHeapFPv

lbl_8001C2E4:
	lbz      r0, 0x3c(r31)
	cmplwi   r0, 0
	bne      lbl_8001C31C
	lwz      r3, 0x70(r31)
	cmplwi   r3, 0
	beq      lbl_8001C314
	beq      lbl_8001C314
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8001C314:
	li       r3, 0
	b        lbl_8001C320

lbl_8001C31C:
	li       r3, 1

lbl_8001C320:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001C334
 * Size:	000190
 */
void* JKRCompArchive::fetchResource(JKRArchive::SDIFileEntry*, unsigned long*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r5
	stw      r29, 0x24(r1)
	mr       r29, r4
	stw      r28, 0x20(r1)
	mr       r28, r3
	lwz      r3, 4(r4)
	lwz      r5, 0xc(r4)
	rlwinm.  r0, r3, 8, 0x1d, 0x1d
	srwi     r3, r3, 0x18
	mr       r4, r5
	bne      lbl_8001C37C
	li       r31, 0
	b        lbl_8001C390

lbl_8001C37C:
	rlwinm.  r0, r3, 0, 0x18, 0x18
	beq      lbl_8001C38C
	li       r31, 2
	b        lbl_8001C390

lbl_8001C38C:
	li       r31, 1

lbl_8001C390:
	cmplwi   r30, 0
	bne      lbl_8001C39C
	addi     r30, r1, 0x10

lbl_8001C39C:
	lwz      r0, 0x10(r29)
	cmplwi   r0, 0
	bne      lbl_8001C494
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_8001C3C8
	lwz      r3, 0x64(r28)
	lwz      r0, 8(r29)
	add      r0, r3, r0
	stw      r0, 0x10(r29)
	stw      r4, 0(r30)
	b        lbl_8001C4A0

lbl_8001C3C8:
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_8001C42C
	lwz      r3, 0x68(r28)
	mr       r6, r31
	lwz      r5, 8(r29)
	addi     r7, r1, 0xc
	lwz      r0, 0x14(r3)
	lwz      r3, 0x74(r28)
	add      r0, r5, r0
	lwz      r5, 0x38(r28)
	subf     r3, r3, r0
	bl       fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc
	stw      r3, 0(r30)
	cmpwi    r31, 2
	lwz      r0, 0xc(r1)
	stw      r0, 0x10(r29)
	bne      lbl_8001C4A0
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r5, 0(r30)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	b        lbl_8001C4A0

lbl_8001C42C:
	rlwinm.  r0, r3, 0, 0x19, 0x19
	beq      lbl_8001C4A0
	lwz      r4, 0x6c(r28)
	mr       r7, r31
	lwz      r0, 8(r29)
	addi     r9, r1, 8
	lwz      r3, 0x40(r28)
	lwz      r6, 0x38(r28)
	add      r4, r4, r0
	lwz      r8, 0x5c(r28)
	bl       fetchResource_subroutine__13JKRDvdArchiveFlUlUlP7JKRHeapiiPPUc
	cmplwi   r30, 0
	beq      lbl_8001C464
	stw      r3, 0(r30)

lbl_8001C464:
	lwz      r0, 8(r1)
	cmpwi    r31, 2
	stw      r0, 0x10(r29)
	bne      lbl_8001C4A0
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r5, 0(r30)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	b        lbl_8001C4A0

lbl_8001C494:
	cmplwi   r30, 0
	beq      lbl_8001C4A0
	stw      r5, 0(r30)

lbl_8001C4A0:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r3, 0x10(r29)
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
 * Address:	8001C4C4
 * Size:	000194
 */
void* JKRCompArchive::fetchResource(void*, unsigned long, JKRArchive::SDIFileEntry*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r9, r3
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r30, r6
	  mr        r28, r4
	  mr        r29, r5
	  mr        r31, r7
	  li        r27, 0
	  lwz       r3, 0x4(r6)
	  lwz       r26, 0xC(r6)
	  rlwinm.   r0,r3,8,29,29
	  rlwinm    r3,r3,8,24,31
	  addi      r0, r26, 0x1F
	  rlwinm    r4,r0,0,0,26
	  bne-      .loc_0x4C
	  li        r7, 0
	  b         .loc_0x60

	.loc_0x4C:
	  rlwinm.   r0,r3,0,24,24
	  beq-      .loc_0x5C
	  li        r7, 0x2
	  b         .loc_0x60

	.loc_0x5C:
	  li        r7, 0x1

	.loc_0x60:
	  lwz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  cmpwi     r7, 0x2
	  bne-      .loc_0x98
	  mr        r3, r9
	  mr        r4, r30
	  lwz       r12, 0x0(r9)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  mr        r26, r3

	.loc_0x98:
	  cmplw     r26, r29
	  ble-      .loc_0xA4
	  mr        r26, r29

	.loc_0xA4:
	  lwz       r4, 0x10(r30)
	  mr        r3, r28
	  mr        r5, r26
	  bl        0x7850
	  mr        r27, r26
	  b         .loc_0x170

	.loc_0xBC:
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0xE4
	  lwz       r3, 0x64(r9)
	  mr        r5, r28
	  lwz       r0, 0x8(r30)
	  rlwinm    r6,r29,0,0,26
	  add       r3, r3, r0
	  bl        0x8670
	  mr        r27, r3
	  b         .loc_0x170

	.loc_0xE4:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0x118
	  lwz       r3, 0x68(r9)
	  mr        r5, r28
	  lwz       r8, 0x8(r30)
	  rlwinm    r6,r29,0,0,26
	  lwz       r0, 0x14(r3)
	  lwz       r3, 0x74(r9)
	  add       r0, r8, r0
	  sub       r3, r0, r3
	  bl        -0x34C8
	  mr        r27, r3
	  b         .loc_0x170

	.loc_0x118:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0x150
	  lwz       r10, 0x6C(r9)
	  mr        r5, r4
	  lwz       r0, 0x8(r30)
	  mr        r6, r28
	  lwz       r3, 0x40(r9)
	  mr        r8, r7
	  lwz       r9, 0x5C(r9)
	  add       r4, r10, r0
	  rlwinm    r7,r29,0,0,26
	  bl        0x2620
	  mr        r27, r3
	  b         .loc_0x170

	.loc_0x150:
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r6, r5, 0x35DC
	  li        r4, 0x308
	  addi      r3, r3, 0x35C8
	  subi      r5, r2, 0x7E78
	  crclr     6, 0x6
	  bl        0xE010

	.loc_0x170:
	  cmplwi    r31, 0
	  beq-      .loc_0x17C
	  stw       r27, 0x0(r31)

	.loc_0x17C:
	  mr        r3, r28
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001C658
 * Size:	0000A4
 */
void JKRCompArchive::removeResourceAll()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r0, 0x44(r3)
	cmplwi   r0, 0
	beq      lbl_8001C6DC
	lbz      r0, 0x3c(r28)
	cmplwi   r0, 1
	beq      lbl_8001C6DC
	lwz      r30, 0x4c(r28)
	li       r29, 0
	li       r31, 0
	b        lbl_8001C6CC

lbl_8001C6A0:
	lwz      r3, 0x10(r30)
	lwz      r0, 4(r30)
	cmplwi   r3, 0
	srwi     r0, r0, 0x18
	beq      lbl_8001C6C8
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	bne      lbl_8001C6C4
	lwz      r4, 0x38(r28)
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_8001C6C4:
	stw      r31, 0x10(r30)

lbl_8001C6C8:
	addi     r29, r29, 1

lbl_8001C6CC:
	lwz      r3, 0x44(r28)
	lwz      r0, 8(r3)
	cmplw    r29, r0
	blt      lbl_8001C6A0

lbl_8001C6DC:
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
 * Address:	8001C6FC
 * Size:	000074
 */
bool JKRCompArchive::removeResource(void*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       findPtrResource__10JKRArchiveCFPCv
	or.      r31, r3, r3
	bne      lbl_8001C730
	li       r3, 0
	b        lbl_8001C754

lbl_8001C730:
	lwz      r0, 4(r31)
	rlwinm.  r0, r0, 8, 0x1b, 0x1b
	bne      lbl_8001C748
	lwz      r4, 0x38(r29)
	mr       r3, r30
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_8001C748:
	li       r0, 0
	li       r3, 1
	stw      r0, 0x10(r31)

lbl_8001C754:
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
 * Address:	8001C770
 * Size:	0001C4
 */
u32 JKRCompArchive::getExpandedResSize(const void*) const
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	lwz      r0, 0x50(r3)
	stw      r31, 0x5c(r1)
	cmplwi   r0, 0
	stw      r30, 0x58(r1)
	mr       r30, r4
	stw      r29, 0x54(r1)
	mr       r29, r3
	bne      lbl_8001C7B0
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	b        lbl_8001C918

lbl_8001C7B0:
	bl       findPtrResource__10JKRArchiveCFPCv
	or.      r31, r3, r3
	bne      lbl_8001C7C4
	li       r3, -1
	b        lbl_8001C918

lbl_8001C7C4:
	lwz      r3, 4(r31)
	rlwinm.  r0, r3, 8, 0x1d, 0x1d
	srwi     r4, r3, 0x18
	bne      lbl_8001C7F0
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	b        lbl_8001C918

lbl_8001C7F0:
	rlwinm.  r0, r4, 0, 0x1b, 0x1b
	beq      lbl_8001C81C
	lbz      r0, 5(r30)
	lbz      r3, 4(r30)
	slwi     r0, r0, 0x10
	lbz      r4, 6(r30)
	rlwimi   r0, r3, 0x18, 0, 7
	lbz      r5, 7(r30)
	rlwimi   r0, r4, 8, 0x10, 0x17
	or       r3, r5, r0
	b        lbl_8001C918

lbl_8001C81C:
	rlwinm.  r0, r4, 0, 0x1a, 0x1a
	addi     r3, r1, 0x2f
	rlwinm   r30, r3, 0, 0, 0x1a
	beq      lbl_8001C86C
	lwz      r3, 0x68(r29)
	mr       r4, r30
	lwz      r9, 8(r31)
	li       r5, 0x20
	lwz      r0, 0x14(r3)
	li       r6, 0
	li       r7, 0
	li       r8, 0
	add      r3, r9, r0
	li       r9, -1
	li       r10, 0
	bl       aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl
	mr       r3, r30
	li       r4, 0x20
	bl       DCInvalidateRange
	b        lbl_8001C8D8

lbl_8001C86C:
	rlwinm.  r0, r4, 0, 0x19, 0x19
	beq      lbl_8001C8B8
	li       r0, 0
	lwz      r9, 0x6c(r29)
	stw      r0, 8(r1)
	mr       r4, r30
	lwz      r3, 0x40(r29)
	li       r5, 2
	lwz      r0, 8(r31)
	li       r6, 0x20
	li       r7, 0
	li       r8, 1
	add      r9, r9, r0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r3, r30
	li       r4, 0x20
	bl       DCInvalidateRange
	b        lbl_8001C8D8

lbl_8001C8B8:
	lis      r3, lbl_804735C8@ha
	lis      r5, lbl_804735F0@ha
	addi     r6, r5, lbl_804735F0@l
	li       r4, 0x3af
	addi     r3, r3, lbl_804735C8@l
	addi     r5, r2, lbl_805164E8@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8001C8D8:
	lbz      r0, 5(r30)
	mr       r3, r29
	lwz      r12, 0(r29)
	mr       r4, r31
	lbz      r5, 4(r30)
	slwi     r0, r0, 0x10
	lbz      r6, 6(r30)
	rlwimi   r0, r5, 0x18, 0, 7
	lbz      r5, 7(r30)
	rlwimi   r0, r6, 8, 0x10, 0x17
	lwz      r12, 0x48(r12)
	or       r29, r5, r0
	mr       r5, r29
	mtctr    r12
	bctrl
	mr       r3, r29

lbl_8001C918:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}
