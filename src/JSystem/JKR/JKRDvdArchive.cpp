#include "Dolphin/os.h"
#include "JSystem/JKR/JKRDecomp.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JUT/JUTException.h"
#include "types.h"
#include "JSystem/JKR/JKRArchive.h"

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
 * __ct__13JKRDvdArchiveFlQ210JKRArchive15EMountDirection
 */
JKRDvdArchive::JKRDvdArchive(long entryNum, JKRArchive::EMountDirection mountDirection)
    : JKRArchive(entryNum, EMM_Dvd)
    , _60(mountDirection)
{
	if (open(entryNum) == false) {
		return;
	}
	m_magicWord = 'RARC';
	_28         = _48->_04 + _54;
	sVolumeList.prepend(&_18);
	_30 = 1;

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
 * __dt__13JKRDvdArchiveFv
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
bool JKRDvdArchive::open(long)
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
 * fetchResource__13JKRDvdArchiveFPQ210JKRArchive12SDIFileEntryPUl
 */
void* JKRDvdArchive::fetchResource(JKRArchive::SDIFileEntry* entry, unsigned long* outSize)
{
	u32 size;
	if (outSize == nullptr) {
		outSize = &size;
	}
	int v1;
	if (!entry->getFlag04()) {
		v1 = 0;
	} else if (entry->getFlag80()) {
		v1 = 2;
	} else {
		v1 = 1;
	}
	if (entry->_10 == nullptr) {
		u8* v2;
		if ((*outSize = fetchResource_subroutine(_40, _64 + entry->_08, entry->getSize(), _38, v1, _5C, &v2)) == 0) {
			return nullptr;
		}
		entry->_10 = v2;
		if (v1 == 2) {
			setExpandSize(entry, *outSize);
		}
	} else if (v1 == 2) {
		*outSize = getExpandSize(entry);
	} else {
		*outSize = entry->getSize();
	}
	return entry->_10;
}

/*
 * --INFO--
 * Address:	8001EB2C
 * Size:	0000FC
 * fetchResource__13JKRDvdArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl
 */
void* JKRDvdArchive::fetchResource(void* resourceBuffer, unsigned long bufferSize, JKRArchive::SDIFileEntry* entry, unsigned long* resSize)
{
	int v1;
	u32 size = entry->getSize();
	if (!entry->getFlag04()) {
		v1 = 0;
	} else if (entry->getFlag80()) {
		v1 = 2;
	} else {
		v1 = 1;
	}
	if (entry->_10 == nullptr) {
		size = fetchResource_subroutine(_40, _64 + entry->_08, size, (u8*)resourceBuffer, ALIGN_PREV(bufferSize, 0x20), v1, _5C);
	} else {
		if (v1 == 2) {
			u32 expandSize = getExpandSize(entry);
			if (expandSize != 0) {
				size = expandSize;
			}
		}
		if (size > bufferSize) {
			size = bufferSize;
		}
		JKRHeap::copyMemory(resourceBuffer, entry->_10, size);
	}
	if (resSize) {
		*resSize = size;
	}
	return resourceBuffer;
}

/*
 * --INFO--
 * Address:	8001EC28
 * Size:	000200
 * fetchResource_subroutine__13JKRDvdArchiveFlUlUlPUcUlii
 */
u32 JKRDvdArchive::fetchResource_subroutine(long p1, unsigned long p2, unsigned long fileSize, unsigned char* buffer,
                                            unsigned long bufferSize, int p6, int p7)
{
	u32 alignedFileSize   = ALIGN_NEXT(fileSize, 0x20);
	u32 alignedBufferSize = ALIGN_PREV(bufferSize, 0x20);
	// u8 szpHeader[0x20];
	// u32 headerValue1;
	switch (p7) {
	case 0:
		switch (p6) {
		case 0:
			if (alignedFileSize > alignedBufferSize) {
				alignedFileSize = alignedBufferSize;
			}
			JKRDvdRipper::loadToMainRAM(p1, buffer, Switch_0, alignedFileSize, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, p2, nullptr, nullptr);
			DCInvalidateRange(buffer, alignedFileSize);
			return alignedFileSize;
		case 1:
		case 2: {
			// SZPHeader szpHeader;
			// JKRDvdRipper::loadToMainRAM(p1, (u8*)&szpHeader, Switch_2, sizeof(SZPHeader), nullptr, JKRDvdRipper::ALLOC_DIR_TOP,
			// ALIGN_NEXT(p2, 0x20), nullptr, nullptr); DCInvalidateRange(&szpHeader, sizeof(SZPHeader)); u32 headerValue1 =
			// szpHeader.data[1].getU32FromBigEndianBytes(); JKRDvdRipper::loadToMainRAM(p1, szpHeader, Switch_2, 0x20, nullptr,
			// JKRDvdRipper::ALLOC_DIR_TOP, ALIGN_PREV(p2, 0x20), nullptr, nullptr); DCInvalidateRange(szpHeader, 0x20); u32 headerValue1 =
			// getU32FromBigEndianBytes(szpHeader, 4); headerValue1 = EXTRACT_TO_UINT(szpHeader, 7, 6, 5, 4);
			SZPHeader szpHeader;
			JKRDvdRipper::loadToMainRAM(p1, (u8*)&szpHeader, Switch_2, sizeof(SZPHeader), nullptr, JKRDvdRipper::ALLOC_DIR_TOP,
			                            ALIGN_NEXT(p2, 0x20), nullptr, nullptr);
			DCInvalidateRange(&szpHeader, sizeof(SZPHeader));
			u32 headerValue1  = szpHeader.getValue1();
			u32 remainingSize = ALIGN_NEXT(headerValue1, 0x20);
			if (remainingSize > alignedBufferSize) {
				remainingSize = alignedBufferSize;
			}
			JKRDvdRipper::loadToMainRAM(p1, buffer, Switch_1, remainingSize, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, ALIGN_NEXT(p2, 0x20),
			                            nullptr, nullptr);
			DCInvalidateRange(buffer, remainingSize);
			return headerValue1;
			break;
		}
		default:
			break;
		}
	case 2:
		if (fileSize > alignedBufferSize) {
			fileSize = alignedBufferSize;
		}
		JKRDvdRipper::loadToMainRAM(p1, buffer, Switch_1, fileSize, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, p2, nullptr, nullptr);
		DCInvalidateRange(buffer, fileSize);
		return fileSize;
		break;
	case 1:
		OSErrorLine(649, "Sorry, not prepared for SZP archive.\n");
		return 0;
		break;
	default:
		break;
	}
	OSErrorLine(655, ":::??? bad sequence\n");
	return 0;

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
 * fetchResource_subroutine__13JKRDvdArchiveFlUlUlP7JKRHeapiiPPUc
 */
u32 JKRDvdArchive::fetchResource_subroutine(long p1, unsigned long p2, unsigned long fileSize, JKRHeap* heap, int p5, int p6,
                                            unsigned char** p7)
{
	u32 alignedFileSize = ALIGN_NEXT(fileSize, 0x20);
	// u8 szpHeader[0x20];
	// u32 headerValue1;
	switch (p6) {
	case 0:
		switch (p5) {
		case 0:
			// u8* buffer = new(heap, alignedFileSize) u8[0x20];
			u8* buffer = (u8*)JKRHeap::alloc(alignedFileSize, 0x20, heap);
			JKRDvdRipper::loadToMainRAM(p1, buffer, Switch_0, alignedFileSize, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, p2, nullptr, nullptr);
			DCInvalidateRange(buffer, alignedFileSize);
			*p7 = buffer;
			return alignedFileSize;
		case 1:
		case 2:
			// SZPHeader szpHeader;
			// JKRDvdRipper::loadToMainRAM(p1, (u8*)&szpHeader, Switch_2, sizeof(SZPHeader), nullptr, JKRDvdRipper::ALLOC_DIR_TOP,
			// ALIGN_NEXT(p2, 0x20), nullptr, nullptr); DCInvalidateRange(&szpHeader, sizeof(SZPHeader)); u32 headerValue1 =
			// szpHeader.data[1].getU32FromBigEndianBytes(); JKRDvdRipper::loadToMainRAM(p1, szpHeader, Switch_2, 0x20, nullptr,
			// JKRDvdRipper::ALLOC_DIR_TOP, ALIGN_PREV(p2, 0x20), nullptr, nullptr); DCInvalidateRange(szpHeader, 0x20); u32 headerValue1 =
			// getU32FromBigEndianBytes(szpHeader, 4); headerValue1 = EXTRACT_TO_UINT(szpHeader, 7, 6, 5, 4);
			SZPHeader szpHeader;
			JKRDvdRipper::loadToMainRAM(p1, (u8*)&szpHeader, Switch_2, sizeof(SZPHeader), nullptr, JKRDvdRipper::ALLOC_DIR_TOP,
			                            ALIGN_NEXT(p2, 0x20), nullptr, nullptr);
			DCInvalidateRange(&szpHeader, sizeof(SZPHeader));
			u32 headerValue1 = szpHeader.getValue1();
			// buffer = new(heap, headerValue1) u8[0x20];
			buffer = (u8*)JKRHeap::alloc(headerValue1, 0x20, heap);
			JKRDvdRipper::loadToMainRAM(p1, buffer, Switch_1, headerValue1, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, p2, nullptr, nullptr);
			DCInvalidateRange(buffer, headerValue1);
			*p7 = buffer;
			return headerValue1;
			break;
		default:
			break;
		}
	case 2:
		// u8* buffer = new(heap, alignedFileSize) u8[0x20];
		u8* buffer = (u8*)JKRHeap::alloc(alignedFileSize, 0x20, heap);
		JKRDvdRipper::loadToMainRAM(p1, buffer, Switch_1, fileSize, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, p2, nullptr, nullptr);
		DCInvalidateRange(buffer, fileSize);
		*p7 = buffer;
		return alignedFileSize;
		break;
	case 1:
		OSErrorLine(756, "Sorry, not prepared for SZP archive.\n");
		return 0;
		break;
	default:
		break;
	}
	OSErrorLine(761, ":::??? bad sequence\n");
	return 0;
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
 * getExpandedResSize__13JKRDvdArchiveCFPCv
 */
u32 JKRDvdArchive::getExpandedResSize(const void* resource) const
{
	if (_50 == nullptr) {
		return getResSize(resource);
	}
	SDIFileEntry* entry = findPtrResource(resource);
	if (entry == nullptr) {
		return -1;
	}
	if ((entry->_04 >> 0x18 & 4) == 0) {
		return getResSize(resource);
	}
	u32 size = getExpandSize(entry);
	if (size == 0) {
		u8 v1[8];
		/** TODO: use sizeof for next two lines */
		JKRDvdRipper::loadToMainRAM(_40, v1, Switch_2, 0x20, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, _64 + entry->_08, nullptr, nullptr);
		DCInvalidateRange(v1, 0x20);
		size = ((u32*)v1)[1];
		((JKRArchive*)this)->setExpandSize(entry, size);
	}
	return size;
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
