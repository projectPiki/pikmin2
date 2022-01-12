#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80473630
    lbl_80473630:
        .4byte 0x4A4B5244
        .4byte 0x76644172
        .4byte 0x63686976
        .4byte 0x652E6370
        .4byte 0x70000000
        .4byte 0x536F7272
        .4byte 0x792C206E
        .4byte 0x6F742070
        .4byte 0x72657061
        .4byte 0x72656420
        .4byte 0x666F7220
        .4byte 0x535A5020
        .4byte 0x61726368
        .4byte 0x6976652E
        .4byte 0x0A000000
        .4byte 0x3A3A3A3F
        .4byte 0x3F3F2062
        .4byte 0x61642073
        .4byte 0x65717565
        .4byte 0x6E63650A
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__13JKRDvdArchive
    __vt__13JKRDvdArchive:
        .4byte 0
        .4byte 0
        .4byte __dt__13JKRDvdArchiveFv
        .4byte unmount__13JKRFileLoaderFv
        .4byte becomeCurrent__10JKRArchiveFPCc
        .4byte getResource__10JKRArchiveFPCc
        .4byte getResource__10JKRArchiveFUlPCc
        .4byte readResource__10JKRArchiveFPvUlPCc
        .4byte readResource__10JKRArchiveFPvUlUlPCc
        .4byte removeResourceAll__10JKRArchiveFv
        .4byte removeResource__10JKRArchiveFPv
        .4byte detachResource__10JKRArchiveFPv
        .4byte getResSize__10JKRArchiveCFPCv
        .4byte countFile__10JKRArchiveCFPCc
        .4byte getFirstFile__10JKRArchiveCFPCc
        .4byte getExpandedResSize__13JKRDvdArchiveCFPCv
        .4byte fetchResource__13JKRDvdArchiveFPQ210JKRArchive12SDIFileEntryPUl
        .4byte
   fetchResource__13JKRDvdArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl .4byte
   setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl .4byte
   getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry
*/

/*
 * --INFO--
 * Address:	8001E57C
 * Size:	0000B0
 */
JKRDvdArchive::JKRDvdArchive(long, JKRArchive::EMountDirection)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	li       r5, 3
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       __ct__10JKRArchiveFlQ210JKRArchive10EMountMode
	lis      r4, __vt__13JKRDvdArchive@ha
	mr       r3, r29
	addi     r0, r4, __vt__13JKRDvdArchive@l
	mr       r4, r30
	stw      r0, 0(r29)
	stw      r31, 0x60(r29)
	bl       open__13JKRDvdArchiveFl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8001E5D4
	mr       r3, r29
	b        lbl_8001E610

lbl_8001E5D4:
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

lbl_8001E610:
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
 * Address:	8001E62C
 * Size:	00012C
 */
JKRDvdArchive::~JKRDvdArchive()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	or.      r31, r3, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r4
	beq      lbl_8001E734
	lis      r3, __vt__13JKRDvdArchive@ha
	addi     r0, r3, __vt__13JKRDvdArchive@l
	stw      r0, 0(r31)
	lbz      r0, 0x30(r31)
	cmplwi   r0, 1
	bne      lbl_8001E718
	lwz      r0, 0x44(r31)
	cmplwi   r0, 0
	beq      lbl_8001E6C0
	lwz      r30, 0x4c(r31)
	li       r29, 0
	b        lbl_8001E6A0

lbl_8001E684:
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_8001E698
	lwz      r4, 0x38(r31)
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_8001E698:
	addi     r30, r30, 0x14
	addi     r29, r29, 1

lbl_8001E6A0:
	lwz      r3, 0x44(r31)
	lwz      r0, 8(r3)
	cmplw    r29, r0
	blt      lbl_8001E684
	lwz      r4, 0x38(r31)
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r0, 0
	stw      r0, 0x44(r31)

lbl_8001E6C0:
	lwz      r3, 0x50(r31)
	cmplwi   r3, 0
	beq      lbl_8001E6DC
	li       r4, 0
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r0, 0
	stw      r0, 0x50(r31)

lbl_8001E6DC:
	lwz      r3, 0x68(r31)
	cmplwi   r3, 0
	beq      lbl_8001E700
	beq      lbl_8001E700
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8001E700:
	lis      r3, sVolumeList__13JKRFileLoader@ha
	addi     r4, r31, 0x18
	addi     r3, r3, sVolumeList__13JKRFileLoader@l
	bl       remove__10JSUPtrListFP10JSUPtrLink
	li       r0, 0
	stb      r0, 0x30(r31)

lbl_8001E718:
	mr       r3, r31
	li       r4, 0
	bl       __dt__10JKRArchiveFv
	extsh.   r0, r28
	ble      lbl_8001E734
	mr       r3, r31
	bl       __dl__FPv

lbl_8001E734:
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	8001E758
 * Size:	0002AC
 */
void JKRDvdArchive::open(long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	mr       r28, r4
	stw      r0, 0x44(r3)
	li       r3, 0xf8
	stw      r0, 0x64(r29)
	stw      r0, 0x48(r29)
	stw      r0, 0x4c(r29)
	stw      r0, 0x54(r29)
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_8001E7B8
	mr       r4, r28
	bl       __ct__10JKRDvdFileFl
	mr       r0, r3

lbl_8001E7B8:
	stw      r0, 0x68(r29)
	lwz      r0, 0x68(r29)
	cmplwi   r0, 0
	bne      lbl_8001E7D8
	li       r0, 0
	li       r3, 0
	stb      r0, 0x3c(r29)
	b        lbl_8001E9E4

lbl_8001E7D8:
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	li       r4, 0x20
	li       r5, 0x20
	bl       alloc__7JKRHeapFUli
	or.      r30, r3, r3
	bne      lbl_8001E7FC
	li       r0, 0
	stb      r0, 0x3c(r29)
	b        lbl_8001E994

lbl_8001E7FC:
	li       r0, 0
	mr       r3, r28
	stw      r0, 8(r1)
	mr       r4, r30
	addi     r10, r29, 0x5c
	li       r5, 1
	li       r6, 0x20
	li       r7, 0
	li       r8, 1
	li       r9, 0
	bl
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r3, r30
	li       r4, 0x20
	bl       DCInvalidateRange
	lwz      r0, 0x60(r29)
	li       r31, -32
	cmpwi    r0, 1
	bne      lbl_8001E848
	li       r31, 0x20

lbl_8001E848:
	lwz      r3, 0xc(r30)
	mr       r4, r31
	lwz      r5, 0x38(r29)
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x44(r29)
	lwz      r4, 0x44(r29)
	cmplwi   r4, 0
	bne      lbl_8001E874
	li       r0, 0
	stb      r0, 0x3c(r29)
	b        lbl_8001E994

lbl_8001E874:
	li       r0, 0
	mr       r3, r28
	stw      r0, 8(r1)
	li       r5, 1
	li       r7, 0
	li       r8, 1
	lwz      r6, 0xc(r30)
	li       r9, 0x20
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	lwz      r3, 0x44(r29)
	lwz      r4, 0xc(r30)
	bl       DCInvalidateRange
	lwz      r4, 0x44(r29)
	li       r0, 0
	li       r5, 0
	lwz      r3, 4(r4)
	add      r3, r4, r3
	stw      r3, 0x48(r29)
	lwz      r4, 0x44(r29)
	lwz      r3, 0xc(r4)
	add      r3, r4, r3
	stw      r3, 0x4c(r29)
	lwz      r4, 0x44(r29)
	lwz      r3, 0x14(r4)
	add      r3, r4, r3
	stw      r3, 0x54(r29)
	stw      r0, 0x50(r29)
	lwz      r3, 0x44(r29)
	lwz      r4, 0x4c(r29)
	lwz      r0, 8(r3)
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_8001E920

lbl_8001E8FC:
	lwz      r3, 4(r4)
	rlwinm.  r0, r3, 8, 0x1f, 0x1f
	srwi     r3, r3, 0x18
	beq      lbl_8001E918
	rlwinm   r0, r3, 0, 0x1d, 0x1d
	or       r0, r5, r0
	clrlwi   r5, r0, 0x18

lbl_8001E918:
	addi     r4, r4, 0x14
	bdnz     lbl_8001E8FC

lbl_8001E920:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8001E984
	mr       r3, r31
	bl       abs
	lwz      r4, 0x44(r29)
	lwz      r5, 0x38(r29)
	lwz      r0, 8(r4)
	mr       r4, r3
	slwi     r3, r0, 2
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x50(r29)
	lwz      r3, 0x50(r29)
	cmplwi   r3, 0
	bne      lbl_8001E970
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	lwz      r4, 0x44(r29)
	bl       free__7JKRHeapFPv
	li       r0, 0
	stb      r0, 0x3c(r29)
	b        lbl_8001E994

lbl_8001E970:
	lwz      r5, 0x44(r29)
	li       r4, 0
	lwz      r0, 8(r5)
	slwi     r5, r0, 2
	bl       memset

lbl_8001E984:
	lwz      r3, 8(r30)
	lwz      r0, 0xc(r30)
	add      r0, r3, r0
	stw      r0, 0x64(r29)

lbl_8001E994:
	cmplwi   r30, 0
	beq      lbl_8001E9A8
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r4, r30
	bl       free__7JKRHeapFPv

lbl_8001E9A8:
	lbz      r0, 0x3c(r29)
	cmplwi   r0, 0
	bne      lbl_8001E9E0
	lwz      r3, 0x68(r29)
	cmplwi   r3, 0
	beq      lbl_8001E9D8
	beq      lbl_8001E9D8
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8001E9D8:
	li       r3, 0
	b        lbl_8001E9E4

lbl_8001E9E0:
	li       r3, 1

lbl_8001E9E4:
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
 * Address:	8001EA04
 * Size:	000128
 */
void JKRDvdArchive::fetchResource(JKRArchive::SDIFileEntry*, unsigned long*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	or.      r30, r5, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bne      lbl_8001EA34
	addi     r30, r1, 0xc

lbl_8001EA34:
	lwz      r3, 4(r29)
	rlwinm.  r0, r3, 8, 0x1d, 0x1d
	srwi     r3, r3, 0x18
	bne      lbl_8001EA4C
	li       r31, 0
	b        lbl_8001EA60

lbl_8001EA4C:
	rlwinm.  r0, r3, 0, 0x18, 0x18
	beq      lbl_8001EA5C
	li       r31, 2
	b        lbl_8001EA60

lbl_8001EA5C:
	li       r31, 1

lbl_8001EA60:
	lwz      r0, 0x10(r29)
	cmplwi   r0, 0
	bne      lbl_8001EAD8
	lwz      r4, 0x64(r28)
	mr       r7, r31
	lwz      r0, 8(r29)
	addi     r9, r1, 8
	lwz      r3, 0x40(r28)
	lwz      r5, 0xc(r29)
	add      r4, r4, r0
	lwz      r6, 0x38(r28)
	lwz      r8, 0x5c(r28)
	bl       fetchResource_subroutine__13JKRDvdArchiveFlUlUlP7JKRHeapiiPPUc
	cmplwi   r3, 0
	stw      r3, 0(r30)
	bne      lbl_8001EAA8
	li       r3, 0
	b        lbl_8001EB0C

lbl_8001EAA8:
	lwz      r0, 8(r1)
	cmpwi    r31, 2
	stw      r0, 0x10(r29)
	bne      lbl_8001EB08
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r5, 0(r30)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	b        lbl_8001EB08

lbl_8001EAD8:
	cmpwi    r31, 2
	bne      lbl_8001EB00
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0(r30)
	b        lbl_8001EB08

lbl_8001EB00:
	lwz      r0, 0xc(r29)
	stw      r0, 0(r30)

lbl_8001EB08:
	lwz      r3, 0x10(r29)

lbl_8001EB0C:
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
 * Address:	8001EB2C
 * Size:	0000FC
 */
void JKRDvdArchive::fetchResource(void*, unsigned long, JKRArchive::SDIFileEntry*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r9, r3
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r29, r6
	  mr        r27, r4
	  mr        r28, r5
	  mr        r30, r7
	  lwz       r3, 0x4(r6)
	  lwz       r6, 0xC(r6)
	  rlwinm.   r0,r3,8,29,29
	  mr        r31, r6
	  rlwinm    r0,r3,8,24,31
	  bne-      .loc_0x44
	  li        r8, 0
	  b         .loc_0x58

	.loc_0x44:
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x54
	  li        r8, 0x2
	  b         .loc_0x58

	.loc_0x54:
	  li        r8, 0x1

	.loc_0x58:
	  lwz       r0, 0x10(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x90
	  lwz       r4, 0x64(r9)
	  mr        r5, r6
	  lwz       r0, 0x8(r29)
	  mr        r6, r27
	  lwz       r3, 0x40(r9)
	  rlwinm    r7,r28,0,0,26
	  lwz       r9, 0x5C(r9)
	  add       r4, r4, r0
	  bl        .loc_0xFC
	  mr        r31, r3
	  b         .loc_0xD8

	.loc_0x90:
	  cmpwi     r8, 0x2
	  bne-      .loc_0xBC
	  mr        r3, r9
	  mr        r4, r29
	  lwz       r12, 0x0(r9)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  mr        r31, r3

	.loc_0xBC:
	  cmplw     r31, r28
	  ble-      .loc_0xC8
	  mr        r31, r28

	.loc_0xC8:
	  lwz       r4, 0x10(r29)
	  mr        r3, r27
	  mr        r5, r31
	  bl        0x51C4

	.loc_0xD8:
	  cmplwi    r30, 0
	  beq-      .loc_0xE4
	  stw       r31, 0x0(r30)

	.loc_0xE4:
	  mr        r3, r27
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xFC:
	*/
}

/*
 * --INFO--
 * Address:	8001EC28
 * Size:	000200
 */
void JKRDvdArchive::fetchResource_subroutine(long, unsigned long, unsigned long, unsigned char*, unsigned long, int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  cmpwi     r9, 0x1
	  stw       r0, 0x74(r1)
	  stmw      r26, 0x58(r1)
	  mr        r26, r5
	  addi      r0, r26, 0x1F
	  lis       r5, 0x8047
	  mr        r30, r4
	  mr        r29, r3
	  mr        r31, r6
	  addi      r4, r5, 0x3630
	  rlwinm    r28,r0,0,0,26
	  rlwinm    r27,r7,0,0,26
	  beq-      .loc_0x1B8
	  bge-      .loc_0x4C
	  cmpwi     r9, 0
	  bge-      .loc_0x58
	  b         .loc_0x1D4

	.loc_0x4C:
	  cmpwi     r9, 0x3
	  bge-      .loc_0x1D4
	  b         .loc_0x16C

	.loc_0x58:
	  cmpwi     r8, 0
	  beq-      .loc_0x70
	  blt-      .loc_0x16C
	  cmpwi     r8, 0x3
	  bge-      .loc_0x16C
	  b         .loc_0xBC

	.loc_0x70:
	  cmplw     r28, r27
	  ble-      .loc_0x7C
	  mr        r28, r27

	.loc_0x7C:
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x8(r1)
	  mr        r4, r31
	  mr        r6, r28
	  mr        r9, r30
	  li        r5, 0
	  li        r7, 0
	  li        r8, 0x1
	  li        r10, 0
	  bl        0x570
	  mr        r3, r31
	  mr        r4, r28
	  bl        0xCDA14
	  mr        r3, r28
	  b         .loc_0x1EC

	.loc_0xBC:
	  addi      r4, r1, 0x2F
	  li        r0, 0
	  rlwinm    r28,r4,0,0,26
	  stw       r0, 0x8(r1)
	  mr        r4, r28
	  mr        r9, r30
	  li        r5, 0x2
	  li        r6, 0x20
	  li        r7, 0
	  li        r8, 0x1
	  li        r10, 0
	  bl        0x52C
	  mr        r3, r28
	  li        r4, 0x20
	  bl        0xCD9D0
	  lbz       r0, 0x5(r28)
	  lbz       r3, 0x4(r28)
	  rlwinm    r0,r0,16,0,15
	  lbz       r4, 0x6(r28)
	  rlwimi    r0,r3,24,0,7
	  lbz       r5, 0x7(r28)
	  rlwimi    r0,r4,8,16,23
	  or        r28, r5, r0
	  addi      r0, r28, 0x1F
	  rlwinm    r26,r0,0,0,26
	  cmplw     r26, r27
	  ble-      .loc_0x12C
	  mr        r26, r27

	.loc_0x12C:
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x8(r1)
	  mr        r4, r31
	  mr        r6, r26
	  mr        r9, r30
	  li        r5, 0x1
	  li        r7, 0
	  li        r8, 0x1
	  li        r10, 0
	  bl        0x4C0
	  mr        r3, r31
	  mr        r4, r26
	  bl        0xCD964
	  mr        r3, r28
	  b         .loc_0x1EC

	.loc_0x16C:
	  cmplw     r26, r27
	  ble-      .loc_0x178
	  mr        r26, r27

	.loc_0x178:
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x8(r1)
	  mr        r4, r31
	  mr        r6, r26
	  mr        r9, r30
	  li        r5, 0x1
	  li        r7, 0
	  li        r8, 0x1
	  li        r10, 0
	  bl        0x474
	  mr        r3, r31
	  mr        r4, r26
	  bl        0xCD918
	  mr        r3, r26
	  b         .loc_0x1EC

	.loc_0x1B8:
	  addi      r3, r4, 0
	  addi      r5, r4, 0x14
	  li        r4, 0x289
	  crclr     6, 0x6
	  bl        0xCE97C
	  li        r3, 0
	  b         .loc_0x1EC

	.loc_0x1D4:
	  addi      r3, r4, 0
	  addi      r5, r4, 0x3C
	  li        r4, 0x28F
	  crclr     6, 0x6
	  bl        0xCE960
	  li        r3, 0

	.loc_0x1EC:
	  lmw       r26, 0x58(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001EE28
 * Size:	00021C
 */
void JKRDvdArchive::fetchResource_subroutine(long, unsigned long, unsigned long, JKRHeap*, int, int, unsigned char**)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  cmpwi     r8, 0x1
	  stw       r0, 0x74(r1)
	  stmw      r26, 0x58(r1)
	  mr        r26, r5
	  addi      r0, r26, 0x1F
	  lis       r5, 0x8047
	  mr        r30, r4
	  mr        r29, r3
	  mr        r28, r6
	  mr        r31, r9
	  addi      r4, r5, 0x3630
	  rlwinm    r27,r0,0,0,26
	  beq-      .loc_0x1D4
	  bge-      .loc_0x4C
	  cmpwi     r8, 0
	  bge-      .loc_0x58
	  b         .loc_0x1F0

	.loc_0x4C:
	  cmpwi     r8, 0x3
	  bge-      .loc_0x1F0
	  b         .loc_0x17C

	.loc_0x58:
	  cmpwi     r7, 0
	  beq-      .loc_0x70
	  blt-      .loc_0x17C
	  cmpwi     r7, 0x3
	  bge-      .loc_0x17C
	  b         .loc_0xC8

	.loc_0x70:
	  mr        r3, r27
	  mr        r5, r28
	  li        r4, 0x20
	  bl        0x473C
	  li        r0, 0
	  mr        r28, r3
	  stw       r0, 0x8(r1)
	  mr        r3, r29
	  mr        r4, r28
	  mr        r6, r27
	  mr        r9, r30
	  li        r5, 0
	  li        r7, 0
	  li        r8, 0x1
	  li        r10, 0
	  bl        0x368
	  mr        r3, r28
	  mr        r4, r27
	  bl        0xCD80C
	  stw       r28, 0x0(r31)
	  mr        r3, r27
	  b         .loc_0x208

	.loc_0xC8:
	  addi      r4, r1, 0x2F
	  li        r0, 0
	  rlwinm    r27,r4,0,0,26
	  stw       r0, 0x8(r1)
	  mr        r4, r27
	  mr        r9, r30
	  li        r5, 0x2
	  li        r6, 0x20
	  li        r7, 0
	  li        r8, 0x1
	  li        r10, 0
	  bl        0x320
	  mr        r3, r27
	  li        r4, 0x20
	  bl        0xCD7C4
	  lbz       r0, 0x5(r27)
	  mr        r5, r28
	  lbz       r3, 0x4(r27)
	  li        r4, 0x20
	  rlwinm    r0,r0,16,0,15
	  lbz       r6, 0x6(r27)
	  rlwimi    r0,r3,24,0,7
	  lbz       r7, 0x7(r27)
	  rlwimi    r0,r6,8,16,23
	  or        r28, r7, r0
	  mr        r3, r28
	  bl        0x4688
	  li        r0, 0
	  mr        r27, r3
	  stw       r0, 0x8(r1)
	  mr        r3, r29
	  mr        r4, r27
	  mr        r6, r28
	  mr        r9, r30
	  li        r5, 0x1
	  li        r7, 0
	  li        r8, 0x1
	  li        r10, 0
	  bl        0x2B4
	  mr        r3, r27
	  mr        r4, r28
	  bl        0xCD758
	  stw       r27, 0x0(r31)
	  mr        r3, r28
	  b         .loc_0x208

	.loc_0x17C:
	  mr        r3, r27
	  mr        r5, r28
	  li        r4, 0x20
	  bl        0x4630
	  li        r0, 0
	  mr        r28, r3
	  stw       r0, 0x8(r1)
	  mr        r3, r29
	  mr        r4, r28
	  mr        r6, r26
	  mr        r9, r30
	  li        r5, 0x1
	  li        r7, 0
	  li        r8, 0x1
	  li        r10, 0
	  bl        0x25C
	  mr        r3, r28
	  mr        r4, r26
	  bl        0xCD700
	  stw       r28, 0x0(r31)
	  mr        r3, r27
	  b         .loc_0x208

	.loc_0x1D4:
	  addi      r3, r4, 0
	  addi      r5, r4, 0x14
	  li        r4, 0x2F4
	  crclr     6, 0x6
	  bl        0xCE760
	  li        r3, 0
	  b         .loc_0x208

	.loc_0x1F0:
	  addi      r3, r4, 0
	  addi      r5, r4, 0x3C
	  li        r4, 0x2F9
	  crclr     6, 0x6
	  bl        0xCE744
	  li        r3, 0

	.loc_0x208:
	  lmw       r26, 0x58(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001F044
 * Size:	000144
 */
void JKRDvdArchive::getExpandedResSize(const void*) const
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
	bne      lbl_8001F084
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	b        lbl_8001F16C

lbl_8001F084:
	bl       findPtrResource__10JKRArchiveCFPCv
	or.      r31, r3, r3
	bne      lbl_8001F098
	li       r3, -1
	b        lbl_8001F16C

lbl_8001F098:
	lwz      r0, 4(r31)
	rlwinm.  r0, r0, 8, 0x1d, 0x1d
	bne      lbl_8001F0C0
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	b        lbl_8001F16C

lbl_8001F0C0:
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8001F0E4
	b        lbl_8001F16C

lbl_8001F0E4:
	li       r0, 0
	addi     r3, r1, 0x2f
	stw      r0, 8(r1)
	rlwinm   r30, r3, 0, 0, 0x1a
	lwz      r7, 0x64(r29)
	mr       r4, r30
	lwz      r0, 8(r31)
	li       r5, 2
	lwz      r3, 0x40(r29)
	li       r6, 0x20
	add      r9, r7, r0
	li       r7, 0
	li       r8, 1
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r3, r30
	li       r4, 0x20
	bl       DCInvalidateRange
	lbz      r0, 5(r30)
	mr       r4, r31
	lwz      r12, 0(r29)
	mr       r3, r29
	lbz      r5, 4(r30)
	slwi     r0, r0, 0x10
	lbz      r6, 6(r30)
	rlwimi   r0, r5, 0x18, 0, 7
	lbz      r5, 7(r30)
	rlwimi   r0, r6, 8, 0x10, 0x17
	lwz      r12, 0x48(r12)
	or       r31, r5, r0
	mr       r5, r31
	mtctr    r12
	bctrl
	mr       r3, r31

lbl_8001F16C:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}
