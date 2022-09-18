#include "JSystem/JKR/Aram.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80473510
    lbl_80473510:
        .4byte 0x4A4B5241
        .4byte 0x72616D41
        .4byte 0x72636869
        .4byte 0x76652E63
        .4byte 0x70700000
    .global lbl_80473524
    lbl_80473524:
        .4byte 0x3A3A3A3F
        .4byte 0x3F3F2062
        .4byte 0x61642073
        .4byte 0x65717565
        .4byte 0x6E63650A
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__7JKRFile
    __vt__7JKRFile:
        .4byte 0
        .4byte 0
        .4byte __dt__7JKRFileFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__14JKRAramArchive
    __vt__14JKRAramArchive:
        .4byte 0
        .4byte 0
        .4byte __dt__14JKRAramArchiveFv
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
        .4byte getExpandedResSize__14JKRAramArchiveCFPCv
        .4byte fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl
        .4byte
   fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl .4byte
   setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl .4byte
   getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry
*/

/*
 * --INFO--
 * Address:	80018958
 * Size:	0000B0
 * __ct
 */
JKRAramArchive::JKRAramArchive(long p1, JKRArchive::EMountDirection mountDirection)
    : JKRArchive(p1, EMM_Aram)
    , _60(mountDirection)
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
	li       r5, 2
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       __ct__10JKRArchiveFlQ210JKRArchive10EMountMode
	lis      r4, __vt__14JKRAramArchive@ha
	mr       r3, r29
	addi     r0, r4, __vt__14JKRAramArchive@l
	mr       r4, r30
	stw      r0, 0(r29)
	stw      r31, 0x60(r29)
	bl       open__14JKRAramArchiveFl
	clrlwi.  r0, r3, 0x18
	bne      lbl_800189B0
	mr       r3, r29
	b        lbl_800189EC

lbl_800189B0:
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

lbl_800189EC:
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
 * Address:	80018A08
 * Size:	000150
 */
JKRAramArchive::~JKRAramArchive()
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
	beq      lbl_80018B34
	lis      r3, __vt__14JKRAramArchive@ha
	addi     r0, r3, __vt__14JKRAramArchive@l
	stw      r0, 0(r30)
	lbz      r0, 0x30(r30)
	cmplwi   r0, 1
	bne      lbl_80018B18
	lwz      r0, 0x44(r30)
	cmplwi   r0, 0
	beq      lbl_80018A9C
	lwz      r29, 0x4c(r30)
	li       r28, 0
	b        lbl_80018A7C

lbl_80018A60:
	lwz      r3, 0x10(r29)
	cmplwi   r3, 0
	beq      lbl_80018A74
	lwz      r4, 0x38(r30)
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_80018A74:
	addi     r29, r29, 0x14
	addi     r28, r28, 1

lbl_80018A7C:
	lwz      r3, 0x44(r30)
	lwz      r0, 8(r3)
	cmplw    r28, r0
	blt      lbl_80018A60
	lwz      r4, 0x38(r30)
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r0, 0
	stw      r0, 0x44(r30)

lbl_80018A9C:
	lwz      r3, 0x50(r30)
	cmplwi   r3, 0
	beq      lbl_80018AB8
	li       r4, 0
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r0, 0
	stw      r0, 0x50(r30)

lbl_80018AB8:
	lwz      r3, 0x68(r30)
	cmplwi   r3, 0
	beq      lbl_80018ADC
	beq      lbl_80018ADC
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80018ADC:
	lwz      r3, 0x64(r30)
	cmplwi   r3, 0
	beq      lbl_80018B00
	beq      lbl_80018B00
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80018B00:
	lis      r3, sVolumeList__13JKRFileLoader@ha
	addi     r4, r30, 0x18
	addi     r3, r3, sVolumeList__13JKRFileLoader@l
	bl       remove__10JSUPtrListFP10JSUPtrLink
	li       r0, 0
	stb      r0, 0x30(r30)

lbl_80018B18:
	mr       r3, r30
	li       r4, 0
	bl       __dt__10JKRArchiveFv
	extsh.   r0, r31
	ble      lbl_80018B34
	mr       r3, r30
	bl       __dl__FPv

lbl_80018B34:
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
 * Address:	80018B58
 * Size:	000060
 */
JKRFile::~JKRFile()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80018B9C
	lis      r5, __vt__7JKRFile@ha
	li       r4, 0
	addi     r0, r5, __vt__7JKRFile@l
	stw      r0, 0(r30)
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_80018B9C
	mr       r3, r30
	bl       __dl__FPv

lbl_80018B9C:
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
 * Address:	80018BB8
 * Size:	000334
 */
bool JKRAramArchive::open(long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	li       r5, -4
	stw      r0, 0x34(r1)
	li       r0, 0
	stmw     r27, 0x1c(r1)
	mr       r28, r3
	mr       r29, r4
	stw      r0, 0x44(r3)
	li       r3, 0xf8
	stw      r0, 0x48(r28)
	stw      r0, 0x4c(r28)
	stw      r0, 0x54(r28)
	stw      r0, 0x64(r28)
	lwz      r0, 0x60(r28)
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	cmpwi    r0, 1
	bne      lbl_80018C04
	li       r5, 4

lbl_80018C04:
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_80018C1C
	mr       r4, r29
	bl       __ct__10JKRDvdFileFl
	mr       r0, r3

lbl_80018C1C:
	stw      r0, 0x68(r28)
	lwz      r0, 0x68(r28)
	cmplwi   r0, 0
	bne      lbl_80018C3C
	li       r0, 0
	li       r3, 0
	stb      r0, 0x3c(r28)
	b        lbl_80018ED8

lbl_80018C3C:
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	li       r4, 0x20
	li       r5, -32
	bl       alloc__7JKRHeapFUli
	or.      r30, r3, r3
	bne      lbl_80018C60
	li       r0, 0
	stb      r0, 0x3c(r28)
	b        lbl_80018E88

lbl_80018C60:
	li       r0, 0
	mr       r3, r29
	stw      r0, 8(r1)
	mr       r4, r30
	addi     r10, r28, 0x5c
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
	lwz      r0, 0x60(r28)
	li       r31, -32
	cmpwi    r0, 1
	bne      lbl_80018CAC
	li       r31, 0x20

lbl_80018CAC:
	lwz      r3, 0xc(r30)
	mr       r4, r31
	lwz      r5, 0x38(r28)
	addi     r0, r3, 0x1f
	rlwinm   r27, r0, 0, 0, 0x1a
	mr       r3, r27
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x44(r28)
	lwz      r4, 0x44(r28)
	cmplwi   r4, 0
	bne      lbl_80018CE4
	li       r0, 0
	stb      r0, 0x3c(r28)
	b        lbl_80018E88

lbl_80018CE4:
	li       r0, 0
	mr       r3, r29
	stw      r0, 8(r1)
	mr       r6, r27
	li       r5, 1
	li       r7, 0
	li       r8, 1
	li       r9, 0x20
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	lwz      r3, 0x44(r28)
	mr       r4, r27
	bl       DCInvalidateRange
	lwz      r4, 0x44(r28)
	li       r0, 0
	li       r5, 0
	lwz      r3, 4(r4)
	add      r3, r4, r3
	stw      r3, 0x48(r28)
	lwz      r4, 0x44(r28)
	lwz      r3, 0xc(r4)
	add      r3, r4, r3
	stw      r3, 0x4c(r28)
	lwz      r4, 0x44(r28)
	lwz      r3, 0x14(r4)
	add      r3, r4, r3
	stw      r3, 0x54(r28)
	stw      r0, 0x50(r28)
	lwz      r3, 0x44(r28)
	lwz      r4, 0x4c(r28)
	lwz      r0, 8(r3)
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_80018D90

lbl_80018D6C:
	lwz      r3, 4(r4)
	rlwinm.  r0, r3, 8, 0x1f, 0x1f
	srwi     r3, r3, 0x18
	beq      lbl_80018D88
	rlwinm   r0, r3, 0, 0x1d, 0x1d
	or       r0, r5, r0
	clrlwi   r5, r0, 0x18

lbl_80018D88:
	addi     r4, r4, 0x14
	bdnz     lbl_80018D6C

lbl_80018D90:
	clrlwi.  r0, r5, 0x18
	beq      lbl_80018DF4
	mr       r3, r31
	bl       abs
	lwz      r4, 0x44(r28)
	lwz      r5, 0x38(r28)
	lwz      r0, 8(r4)
	mr       r4, r3
	slwi     r3, r0, 2
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x50(r28)
	lwz      r3, 0x50(r28)
	cmplwi   r3, 0
	bne      lbl_80018DE0
	lwz      r3, 0x44(r28)
	li       r4, 0
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r0, 0
	stb      r0, 0x3c(r28)
	b        lbl_80018E88

lbl_80018DE0:
	lwz      r5, 0x44(r28)
	li       r4, 0
	lwz      r0, 8(r5)
	slwi     r5, r0, 2
	bl       memset

lbl_80018DF4:
	lwz      r3, 0x60(r28)
	lwz      r4, 0x10(r30)
	lwz      r6, sAramObject__7JKRAram@sda21(r13)
	subfic   r5, r3, 1
	addi     r0, r3, -1
	addi     r4, r4, 0x1f
	or       r0, r5, r0
	lwz      r3, 0x94(r6)
	rlwinm   r4, r4, 0, 0, 0x1a
	srwi     r5, r0, 0x1f
	bl       alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode
	stw      r3, 0x64(r28)
	lwz      r4, 0x64(r28)
	cmplwi   r4, 0
	bne      lbl_80018E64
	lwz      r3, 0x44(r28)
	cmplwi   r3, 0
	beq      lbl_80018E44
	li       r4, 0
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_80018E44:
	lwz      r3, 0x50(r28)
	cmplwi   r3, 0
	beq      lbl_80018E58
	li       r4, 0
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_80018E58:
	li       r0, 0
	stb      r0, 0x3c(r28)
	b        lbl_80018E88

lbl_80018E64:
	lwz      r6, 8(r30)
	mr       r3, r29
	lwz      r0, 0xc(r30)
	li       r5, 1
	lwz      r4, 0x14(r4)
	li       r7, 0
	add      r6, r6, r0
	li       r8, 0
	bl       loadToAram__16JKRDvdAramRipperFlUl15JKRExpandSwitchUlUlPUl

lbl_80018E88:
	cmplwi   r30, 0
	beq      lbl_80018E9C
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r4, r30
	bl       free__7JKRHeapFPv

lbl_80018E9C:
	lbz      r0, 0x3c(r28)
	cmplwi   r0, 0
	bne      lbl_80018ED4
	lwz      r3, 0x68(r28)
	cmplwi   r3, 0
	beq      lbl_80018ECC
	beq      lbl_80018ECC
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80018ECC:
	li       r3, 0
	b        lbl_80018ED8

lbl_80018ED4:
	li       r3, 1

lbl_80018ED8:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80018EEC
 * Size:	000124
 */
void* JKRAramArchive::fetchResource(JKRArchive::SDIFileEntry*, unsigned long*)
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
	bne      lbl_80018F1C
	addi     r30, r1, 0xc

lbl_80018F1C:
	lwz      r3, 4(r29)
	rlwinm.  r0, r3, 8, 0x1d, 0x1d
	srwi     r3, r3, 0x18
	bne      lbl_80018F34
	li       r31, 0
	b        lbl_80018F48

lbl_80018F34:
	rlwinm.  r0, r3, 0, 0x18, 0x18
	beq      lbl_80018F44
	li       r31, 2
	b        lbl_80018F48

lbl_80018F44:
	li       r31, 1

lbl_80018F48:
	lwz      r0, 0x10(r29)
	cmplwi   r0, 0
	bne      lbl_80018FBC
	lwz      r3, 0x64(r28)
	mr       r6, r31
	lwz      r8, 8(r29)
	addi     r7, r1, 8
	lwz      r0, 0x14(r3)
	lwz      r4, 0xc(r29)
	lwz      r5, 0x38(r28)
	add      r3, r8, r0
	bl       fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc
	cmplwi   r3, 0
	stw      r3, 0(r30)
	bne      lbl_80018F8C
	li       r3, 0
	b        lbl_80018FF0

lbl_80018F8C:
	lwz      r0, 8(r1)
	cmpwi    r31, 2
	stw      r0, 0x10(r29)
	bne      lbl_80018FEC
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r5, 0(r30)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	b        lbl_80018FEC

lbl_80018FBC:
	cmpwi    r31, 2
	bne      lbl_80018FE4
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0(r30)
	b        lbl_80018FEC

lbl_80018FE4:
	lwz      r0, 0xc(r29)
	stw      r0, 0(r30)

lbl_80018FEC:
	lwz      r3, 0x10(r29)

lbl_80018FF0:
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
 * Address:	80019010
 * Size:	0000F8
 */
void* JKRAramArchive::fetchResource(void*, unsigned long, JKRArchive::SDIFileEntry*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r5
	  mr        r29, r6
	  mr        r27, r4
	  mr        r30, r7
	  lwz       r31, 0xC(r6)
	  cmplw     r31, r28
	  ble-      .loc_0x30
	  mr        r31, r28

	.loc_0x30:
	  lwz       r4, 0x4(r29)
	  rlwinm.   r0,r4,8,29,29
	  rlwinm    r4,r4,8,24,31
	  bne-      .loc_0x48
	  li        r7, 0
	  b         .loc_0x5C

	.loc_0x48:
	  rlwinm.   r0,r4,0,24,24
	  beq-      .loc_0x58
	  li        r7, 0x2
	  b         .loc_0x5C

	.loc_0x58:
	  li        r7, 0x1

	.loc_0x5C:
	  lwz       r0, 0x10(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x90
	  lwz       r3, 0x64(r3)
	  mr        r4, r31
	  lwz       r8, 0x8(r29)
	  mr        r5, r27
	  lwz       r0, 0x14(r3)
	  rlwinm    r6,r28,0,0,26
	  add       r3, r8, r0
	  bl        .loc_0xF8
	  mr        r31, r3
	  b         .loc_0xD4

	.loc_0x90:
	  cmpwi     r7, 0x2
	  bne-      .loc_0xB8
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  mr        r31, r3

	.loc_0xB8:
	  cmplw     r31, r28
	  ble-      .loc_0xC4
	  mr        r31, r28

	.loc_0xC4:
	  lwz       r4, 0x10(r29)
	  mr        r3, r27
	  mr        r5, r31
	  bl        0xACE4

	.loc_0xD4:
	  cmplwi    r30, 0
	  beq-      .loc_0xE0
	  stw       r31, 0x0(r30)

	.loc_0xE0:
	  mr        r3, r27
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xF8:
	*/
}

/*
 * --INFO--
 * Address:	80019108
 * Size:	0000BC
 */
void JKRAramArchive::fetchResource_subroutine(u32, u32, u8*, u32, s32)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r7, 0
	  rlwinm    r6,r6,0,0,26
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1F
	  rlwinm    r0,r0,0,0,26
	  beq-      .loc_0x30
	  blt-      .loc_0x8C
	  cmpwi     r7, 0x3
	  bge-      .loc_0x8C
	  b         .loc_0x64

	.loc_0x30:
	  cmplw     r0, r6
	  ble-      .loc_0x3C
	  mr        r0, r6

	.loc_0x3C:
	  mr        r4, r5
	  mr        r7, r6
	  mr        r5, r0
	  addi      r10, r1, 0x8
	  li        r6, 0
	  li        r8, 0
	  li        r9, -0x1
	  bl        -0x1214
	  lwz       r3, 0x8(r1)
	  b         .loc_0xAC

	.loc_0x64:
	  mr        r4, r5
	  mr        r5, r0
	  mr        r7, r6
	  addi      r10, r1, 0x8
	  li        r6, 0x1
	  li        r8, 0
	  li        r9, -0x1
	  bl        -0x123C
	  lwz       r3, 0x8(r1)
	  b         .loc_0xAC

	.loc_0x8C:
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r3, r3, 0x3510
	  li        r4, 0x28F
	  addi      r5, r5, 0x3524
	  crclr     6, 0x6
	  bl        0xD45C0
	  li        r3, 0

	.loc_0xAC:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800191C4
 * Size:	00014C
 */
void JKRAramArchive::fetchResource_subroutine(u32, u32, JKRHeap*, s32, u8**)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  cmpwi     r6, 0
	  stw       r0, 0x74(r1)
	  stmw      r26, 0x58(r1)
	  mr        r26, r4
	  addi      r0, r26, 0x1F
	  mr        r28, r3
	  mr        r29, r5
	  mr        r30, r7
	  rlwinm    r31,r0,0,0,26
	  beq-      .loc_0x40
	  blt-      .loc_0x118
	  cmpwi     r6, 0x3
	  bge-      .loc_0x118
	  b         .loc_0x84

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0x20
	  bl        0xA3D4
	  mr        r0, r3
	  mr        r3, r28
	  mr        r27, r0
	  mr        r5, r31
	  mr        r7, r31
	  li        r6, 0
	  mr        r4, r27
	  li        r8, 0
	  li        r9, -0x1
	  li        r10, 0
	  bl        -0x12EC
	  stw       r27, 0x0(r30)
	  mr        r3, r26
	  b         .loc_0x138

	.loc_0x84:
	  addi      r0, r1, 0x2B
	  li        r5, 0x20
	  rlwinm    r27,r0,0,0,26
	  li        r6, 0
	  mr        r4, r27
	  li        r7, 0
	  li        r8, 0
	  li        r9, -0x1
	  li        r10, 0
	  bl        -0x1320
	  lbz       r0, 0x5(r27)
	  mr        r5, r29
	  lbz       r3, 0x4(r27)
	  li        r4, 0x20
	  rlwinm    r0,r0,16,0,15
	  lbz       r6, 0x6(r27)
	  rlwimi    r0,r3,24,0,7
	  lbz       r7, 0x7(r27)
	  rlwimi    r0,r6,8,16,23
	  or        r3, r7, r0
	  addi      r0, r3, 0x1F
	  rlwinm    r26,r0,0,0,26
	  mr        r3, r26
	  bl        0xA33C
	  mr        r27, r3
	  mr        r3, r28
	  mr        r5, r31
	  mr        r7, r26
	  mr        r4, r27
	  mr        r8, r29
	  addi      r10, r1, 0x8
	  li        r6, 0x1
	  li        r9, -0x1
	  bl        -0x1380
	  stw       r27, 0x0(r30)
	  lwz       r3, 0x8(r1)
	  b         .loc_0x138

	.loc_0x118:
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r3, r3, 0x3510
	  li        r4, 0x2C9
	  addi      r5, r5, 0x3524
	  crclr     6, 0x6
	  bl        0xD4478
	  li        r3, 0

	.loc_0x138:
	  lmw       r26, 0x58(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80019310
 * Size:	000134
 */
u32 JKRAramArchive::getExpandedResSize(const void*) const
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
	bne      lbl_80019350
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	b        lbl_80019428

lbl_80019350:
	bl       findPtrResource__10JKRArchiveCFPCv
	or.      r31, r3, r3
	bne      lbl_80019364
	li       r3, -1
	b        lbl_80019428

lbl_80019364:
	lwz      r0, 4(r31)
	rlwinm.  r0, r0, 8, 0x1d, 0x1d
	bne      lbl_8001938C
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	b        lbl_80019428

lbl_8001938C:
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_800193B0
	b        lbl_80019428

lbl_800193B0:
	lwz      r3, 0x64(r29)
	addi     r0, r1, 0x27
	rlwinm   r30, r0, 0, 0, 0x1a
	lwz      r7, 8(r31)
	lwz      r0, 0x14(r3)
	mr       r4, r30
	li       r5, 0x20
	li       r6, 0
	add      r3, r7, r0
	li       r7, 0
	li       r8, 0
	li       r9, -1
	li       r10, 0
	bl       aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl
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

lbl_80019428:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}
