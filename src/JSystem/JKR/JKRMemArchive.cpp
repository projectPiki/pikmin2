#include "Dolphin/os.h"
#include "Dolphin/stl.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JKR/JKRDecomp.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTException.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80473A78
    lbl_80473A78:
        .asciz "JKRMemArchive.cpp"
        .skip 2
    .global lbl_80473A8C
    lbl_80473A8C:
        .asciz ":::??? bad sequence\n"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__13JKRMemArchive
    __vt__13JKRMemArchive:
        .4byte 0
        .4byte 0
        .4byte __dt__13JKRMemArchiveFv
        .4byte unmount__13JKRFileLoaderFv
        .4byte becomeCurrent__10JKRArchiveFPCc
        .4byte getResource__10JKRArchiveFPCc
        .4byte getResource__10JKRArchiveFUlPCc
        .4byte readResource__10JKRArchiveFPvUlPCc
        .4byte readResource__10JKRArchiveFPvUlUlPCc
        .4byte removeResourceAll__13JKRMemArchiveFv
        .4byte removeResource__13JKRMemArchiveFPv
        .4byte detachResource__10JKRArchiveFPv
        .4byte getResSize__10JKRArchiveCFPCv
        .4byte countFile__10JKRArchiveCFPCc
        .4byte getFirstFile__10JKRArchiveCFPCc
        .4byte getExpandedResSize__13JKRMemArchiveCFPCv
        .4byte fetchResource__13JKRMemArchiveFPQ210JKRArchive12SDIFileEntryPUl
        .4byte
   fetchResource__13JKRMemArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl .4byte
   setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl .4byte
   getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry
*/

/*
 * --INFO--
 * Address:	80024644
 * Size:	0000BC
 * __ct__13JKRMemArchiveFlQ210JKRArchive15EMountDirection
 */
JKRMemArchive::JKRMemArchive(long p1, JKRArchive::EMountDirection mountDirection)
    : JKRArchive(p1, EMM_Mem)
{
	_30              = 0;
	m_mountDirection = mountDirection;
	if (!open(p1, m_mountDirection)) {
		return;
	}
	m_magicWord = 'RARC';
	_28         = _54 + _48->_04;
	sVolumeList.prepend(&_18);
	_30 = 1;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	li       r5, 1
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       __ct__10JKRArchiveFlQ210JKRArchive10EMountMode
	lis      r3, __vt__13JKRMemArchive@ha
	li       r0, 0
	addi     r4, r3, __vt__13JKRMemArchive@l
	mr       r3, r29
	stw      r4, 0(r29)
	mr       r4, r30
	stb      r0, 0x30(r29)
	stw      r31, 0x60(r29)
	lwz      r5, 0x60(r29)
	bl       open__13JKRMemArchiveFlQ210JKRArchive15EMountDirection
	clrlwi.  r0, r3, 0x18
	bne      lbl_800246A8
	mr       r3, r29
	b        lbl_800246E4

lbl_800246A8:
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

lbl_800246E4:
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
 * Address:	80024700
 * Size:	0000C8
 * __ct__13JKRMemArchiveFPvUl15JKRMemBreakFlag
 */
JKRMemArchive::JKRMemArchive(void* p1, unsigned long p2, JKRMemBreakFlag flag)
    : JKRArchive((long)p1, EMM_Mem)
{
	_30 = 0;
	if (open(p1, p2, flag)) {
		m_magicWord = 'RARC';
		_28         = _54 + _48->_04;
		sVolumeList.prepend(&_18);
		_30 = 1;
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	li       r5, 1
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       __ct__10JKRArchiveFlQ210JKRArchive10EMountMode
	lis      r3, __vt__13JKRMemArchive@ha
	li       r0, 0
	addi     r4, r3, __vt__13JKRMemArchive@l
	mr       r3, r28
	stw      r4, 0(r28)
	mr       r4, r29
	mr       r5, r30
	mr       r6, r31
	stb      r0, 0x30(r28)
	bl       open__13JKRMemArchiveFPvUl15JKRMemBreakFlag
	clrlwi.  r0, r3, 0x18
	bne      lbl_8002476C
	mr       r3, r28
	b        lbl_800247A8

lbl_8002476C:
	lis      r4, 0x52415243@ha
	lis      r3, sVolumeList__13JKRFileLoader@ha
	addi     r0, r4, 0x52415243@l
	stw      r0, 0x2c(r28)
	addi     r4, r28, 0x18
	addi     r3, r3, sVolumeList__13JKRFileLoader@l
	lwz      r5, 0x48(r28)
	lwz      r6, 0x54(r28)
	lwz      r0, 4(r5)
	add      r0, r6, r0
	stw      r0, 0x28(r28)
	bl       prepend__10JSUPtrListFP10JSUPtrLink
	li       r0, 1
	mr       r3, r28
	stb      r0, 0x30(r28)

lbl_800247A8:
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
 * Address:	800247C8
 * Size:	0000A8
 */
JKRMemArchive::~JKRMemArchive()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80024854
	lis      r3, __vt__13JKRMemArchive@ha
	addi     r0, r3, __vt__13JKRMemArchive@l
	stw      r0, 0(r30)
	lbz      r0, 0x30(r30)
	cmplwi   r0, 1
	bne      lbl_80024838
	lbz      r0, 0x6c(r30)
	cmplwi   r0, 0
	beq      lbl_80024820
	lwz      r3, 0x64(r30)
	cmplwi   r3, 0
	beq      lbl_80024820
	lwz      r4, 0x38(r30)
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_80024820:
	lis      r3, sVolumeList__13JKRFileLoader@ha
	addi     r4, r30, 0x18
	addi     r3, r3, sVolumeList__13JKRFileLoader@l
	bl       remove__10JSUPtrListFP10JSUPtrLink
	li       r0, 0
	stb      r0, 0x30(r30)

lbl_80024838:
	mr       r3, r30
	li       r4, 0
	bl       __dt__10JKRArchiveFv
	extsh.   r0, r31
	ble      lbl_80024854
	mr       r3, r30
	bl       __dl__FPv

lbl_80024854:
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
 * Address:	80024870
 * Size:	000168
 */
bool JKRMemArchive::open(long p1, EMountDirection mountDirection)
{
	_64              = nullptr;
	_44              = nullptr;
	_68              = nullptr;
	_48              = nullptr;
	m_fileEntries    = nullptr;
	_54              = 0;
	_6C              = 0;
	m_mountDirection = mountDirection;
	if (m_mountDirection == EMD_Unk1) {
		u32 v1;
		_64 = (JKRMemArchive_64*)JKRDvdRipper::loadToMainRAM(p1, nullptr, Switch_1, 0, _38, JKRDvdRipper::ALLOC_DIR_TOP, 0, &_5C, &v1);
		if (_64) {
			DCInvalidateRange(_64, v1);
		}
	} else {
		u32 v1;
		_64 = (JKRMemArchive_64*)JKRDvdRipper::loadToMainRAM(p1, nullptr, Switch_1, 0, _38, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, &_5C, &v1);
		if (_64) {
			DCInvalidateRange(_64, v1);
		}
	}
	if (_64 == nullptr) {
		m_mountMode = EMM_Unk0;
	} else {
		_44           = (JKRArchive_44*)((u8*)_64 + _64->_08);
		_48           = (SDirEntry*)((u8*)_44 + _44->m_offsetOfDirEntry);
		m_fileEntries = (SDIFileEntry*)((u8*)_44 + _44->m_offsetOfFileEntry);
		_54           = (s32)((u8*)_44 + _44->_14);
		// u32 v1 = _64->_0C + _64->_08;
		// u32 v1 = _64->_08 + _64->_0C;
		// _68 = v1 + (u8*)_64;
		// TODO: funny regswap
		_68 = (u8*)_64 + _64->_0C + _64->_08;
		_6C = 1;
	}
	return (m_mountMode != EMM_Unk0);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r0, 0x64(r3)
	stw      r0, 0x44(r3)
	stw      r0, 0x68(r3)
	stw      r0, 0x48(r3)
	stw      r0, 0x4c(r3)
	stw      r0, 0x54(r3)
	stb      r0, 0x6c(r3)
	stw      r5, 0x60(r3)
	lwz      r0, 0x60(r3)
	cmpwi    r0, 1
	bne      lbl_800248FC
	addi     r0, r1, 0x14
	mr       r3, r4
	stw      r0, 8(r1)
	addi     r10, r31, 0x5c
	li       r4, 0
	li       r5, 1
	lwz      r7, 0x38(r31)
	li       r6, 0
	li       r8, 1
	li       r9, 0
	bl
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	stw      r3, 0x64(r31)
	lwz      r3, 0x64(r31)
	cmplwi   r3, 0
	beq      lbl_80024940
	lwz      r4, 0x14(r1)
	bl       DCInvalidateRange
	b        lbl_80024940

lbl_800248FC:
	addi     r0, r1, 0x10
	mr       r3, r4
	stw      r0, 8(r1)
	addi     r10, r31, 0x5c
	li       r4, 0
	li       r5, 1
	lwz      r7, 0x38(r31)
	li       r6, 0
	li       r8, 2
	li       r9, 0
	bl
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	stw      r3, 0x64(r31)
	lwz      r3, 0x64(r31)
	cmplwi   r3, 0
	beq      lbl_80024940
	lwz      r4, 0x10(r1)
	bl       DCInvalidateRange

lbl_80024940:
	lwz      r4, 0x64(r31)
	cmplwi   r4, 0
	bne      lbl_80024958
	li       r0, 0
	stb      r0, 0x3c(r31)
	b        lbl_800249B4

lbl_80024958:
	lwz      r3, 8(r4)
	li       r0, 1
	add      r3, r4, r3
	stw      r3, 0x44(r31)
	lwz      r4, 0x44(r31)
	lwz      r3, 4(r4)
	add      r3, r4, r3
	stw      r3, 0x48(r31)
	lwz      r4, 0x44(r31)
	lwz      r3, 0xc(r4)
	add      r3, r4, r3
	stw      r3, 0x4c(r31)
	lwz      r4, 0x44(r31)
	lwz      r3, 0x14(r4)
	add      r3, r4, r3
	stw      r3, 0x54(r31)
	lwz      r5, 0x64(r31)
	lwz      r4, 0xc(r5)
	lwz      r3, 8(r5)
	add      r3, r3, r4
	add      r3, r5, r3
	stw      r3, 0x68(r31)
	stb      r0, 0x6c(r31)

lbl_800249B4:
	lbz      r3, 0x3c(r31)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800249D8
 * Size:	0000AC
 * open__13JKRMemArchiveFPvUl15JKRMemBreakFlag
 */
bool JKRMemArchive::open(void* p1, unsigned long p2, JKRMemBreakFlag p3)
{
	_64           = (JKRMemArchive_64*)p1;
	_44           = (JKRArchive_44*)((u8*)_64 + _64->_08);
	_48           = (SDirEntry*)((u8*)_44 + _44->m_offsetOfDirEntry);
	m_fileEntries = (SDIFileEntry*)((u8*)_44 + _44->m_offsetOfFileEntry);
	_54           = (s32)((u8*)_44 + _44->_14);
	// u32 v1 = _64->_0C + _64->_08;
	// u32 v1 = _64->_08 + _64->_0C;
	// _68 = v1 + (u8*)_64;
	// TODO: funny regswap
	_68 = (u8*)_64 + _64->_0C + _64->_08;
	_6C = p3 == MBF_1;
	_38 = JKRHeap::findFromRoot(p1);
	_5C = 0;
	return true;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	subfic   r0, r6, 1
	cntlzw   r0, r0
	stw      r31, 0xc(r1)
	mr       r31, r3
	srwi     r0, r0, 5
	stw      r4, 0x64(r3)
	mr       r3, r4
	lwz      r5, 0x64(r31)
	lwz      r4, 8(r5)
	add      r4, r5, r4
	stw      r4, 0x44(r31)
	lwz      r5, 0x44(r31)
	lwz      r4, 4(r5)
	add      r4, r5, r4
	stw      r4, 0x48(r31)
	lwz      r5, 0x44(r31)
	lwz      r4, 0xc(r5)
	add      r4, r5, r4
	stw      r4, 0x4c(r31)
	lwz      r5, 0x44(r31)
	lwz      r4, 0x14(r5)
	add      r4, r5, r4
	stw      r4, 0x54(r31)
	lwz      r6, 0x64(r31)
	lwz      r5, 0xc(r6)
	lwz      r4, 8(r6)
	add      r4, r4, r5
	add      r4, r6, r4
	stw      r4, 0x68(r31)
	stb      r0, 0x6c(r31)
	bl       findFromRoot__7JKRHeapFPv
	stw      r3, 0x38(r31)
	li       r0, 0
	li       r3, 1
	stw      r0, 0x5c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80024A84
 * Size:	000034
 * fetchResource__13JKRMemArchiveFPQ210JKRArchive12SDIFileEntryPUl
 */
void* JKRMemArchive::fetchResource(JKRArchive::SDIFileEntry* entry, unsigned long* outSize)
{
	if (entry->_10 == nullptr) {
		entry->_10 = _68 + entry->_08;
	}
	if (outSize) {
		*outSize = entry->m_size;
	}
	return entry->_10;
}

/*
 * --INFO--
 * Address:	80024AB8
 * Size:	0000C8
 * fetchResource__13JKRMemArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl
 */
void* JKRMemArchive::fetchResource(void*, unsigned long, JKRArchive::SDIFileEntry*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r8, r5
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r7
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  lwz       r31, 0xC(r6)
	  cmplw     r31, r8
	  ble-      .loc_0x34
	  mr        r31, r8

	.loc_0x34:
	  lwz       r4, 0x10(r6)
	  cmplwi    r4, 0
	  beq-      .loc_0x50
	  mr        r3, r29
	  mr        r5, r31
	  bl        -0x1F964
	  b         .loc_0x9C

	.loc_0x50:
	  lwz       r4, 0x4(r6)
	  rlwinm.   r0,r4,8,29,29
	  rlwinm    r4,r4,8,24,31
	  bne-      .loc_0x68
	  li        r7, 0
	  b         .loc_0x7C

	.loc_0x68:
	  rlwinm.   r0,r4,0,24,24
	  beq-      .loc_0x78
	  li        r7, 0x2
	  b         .loc_0x7C

	.loc_0x78:
	  li        r7, 0x1

	.loc_0x7C:
	  lwz       r0, 0x8(r6)
	  mr        r4, r31
	  lwz       r3, 0x68(r3)
	  mr        r5, r29
	  mr        r6, r8
	  add       r3, r3, r0
	  bl        0xC0
	  mr        r31, r3

	.loc_0x9C:
	  cmplwi    r30, 0
	  beq-      .loc_0xA8
	  stw       r31, 0x0(r30)

	.loc_0xA8:
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/**
 * --INFO--
 * Address:	80024B80
 * Size:	000050
 * @warning This method does not actually iterate through m_fileEntries. This feels like a bug.
 */
void JKRMemArchive::removeResourceAll()
{
	if (_44 == nullptr) {
		return;
	}
	if (m_mountMode == EMM_Mem) {
		return;
	}
	SDIFileEntry* entry = m_fileEntries;
	for (u32 i = 0; i < _44->_08; i++) {
		if (entry->_10) {
			entry->_10 = nullptr;
		}
	}
}

/*
 * --INFO--
 * Address:	80024BD0
 * Size:	00003C
 * removeResource__13JKRMemArchiveFPv
 */
bool JKRMemArchive::removeResource(void* p1)
{
	SDIFileEntry* entry = findPtrResource(p1);
	if (!entry) {
		return false;
	}
	entry->_10 = nullptr;
	return true;
}

/*
 * --INFO--
 * Address:	80024C0C
 * Size:	0000D4
 */
u32 JKRMemArchive::fetchResource_subroutine(unsigned char* p1, unsigned long p2, unsigned char* p3, unsigned long p4, int p5)
{
	switch (p5) {
	case 0:
		if (p2 > p4) {
			p2 = p4;
		}
		memcpy(p3, p1, p2);
		break;
	case 1:
	case 2: {
		u8* p = (u8*)p1;
		p2    = MIN(p2, p[4] << 0x18 | p[5] << 0x10 | p[6] << 8 | p[7]);
		JKRDecomp::orderSync(p1, p3, p2, 0);
		break;
	}
	default:
		OSErrorLine(723, ":::??? bad sequence\n");
		return 0;
	}
	return p2;
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r7, 0
	  mr        r8, r3
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  beq-      .loc_0x30
	  blt-      .loc_0xA0
	  cmpwi     r7, 0x3
	  bge-      .loc_0xA0
	  b         .loc_0x54

	.loc_0x30:
	  cmplw     r31, r6
	  ble-      .loc_0x3C
	  mr        r31, r6

	.loc_0x3C:
	  mr        r3, r5
	  mr        r4, r8
	  mr        r5, r31
	  bl        -0x1FAB8
	  mr        r3, r31
	  b         .loc_0xC0

	.loc_0x54:
	  lbz       r0, 0x5(r8)
	  lbz       r3, 0x4(r8)
	  rlwinm    r0,r0,16,0,15
	  lbz       r4, 0x6(r8)
	  rlwimi    r0,r3,24,0,7
	  lbz       r7, 0x7(r8)
	  rlwimi    r0,r4,8,16,23
	  or        r0, r7, r0
	  cmplw     r0, r6
	  mr        r31, r0
	  ble-      .loc_0x84
	  mr        r31, r6

	.loc_0x84:
	  mr        r3, r8
	  mr        r4, r5
	  mr        r5, r31
	  li        r6, 0
	  bl        -0x8164
	  mr        r3, r31
	  b         .loc_0xC0

	.loc_0xA0:
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r3, r3, 0x3A78
	  li        r4, 0x2D3
	  addi      r5, r5, 0x3A8C
	  crclr     6, 0x6
	  bl        0xC8AA8
	  li        r3, 0

	.loc_0xC0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80024CE0
 * Size:	000090
 */
u32 JKRMemArchive::getExpandedResSize(const void* p1) const
{
	SDIFileEntry* entry = findPtrResource(p1);
	if (entry == nullptr) {
		return -1;
	} else if ((entry->_04 >> 0x18 & 4) == 0) {
		return getResSize(p1);
	} else {
		u8* p = (u8*)p1;
		return p[4] << 0x18 | p[5] << 0x10 | p[6] << 8 | p[7];
	}
}
