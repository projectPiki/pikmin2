#include "Dolphin/gx.h"
#include "JSystem/JKR/Aram.h"
#include "JSystem/JUT/JUTConsole.h"
#include "JSystem/JUT/JUTFont.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80478420
    lbl_80478420:
        .4byte 0x4A555443
        .4byte 0x61636865
        .4byte 0x466F6E74
        .4byte 0x3A20556E
        .4byte 0x6B6E6F77
        .4byte 0x6E206461
        .4byte 0x74612062
        .4byte 0x6C6F636B
        .4byte 0x0A000000
        .4byte 0x4A555443
        .4byte 0x61636865
        .4byte 0x466F6E74
        .4byte 0x2E637070
        .4byte 0x00000000
        .4byte 0x74726F75
        .4byte 0x626C6520
        .4byte 0x6F636375
        .4byte 0x72726564
        .4byte 0x20696E20
        .4byte 0x4A4B524D
        .4byte 0x61696E52
        .4byte 0x616D546F
        .4byte 0x4172616D
        .4byte 0x2E000000
        .4byte 0x556E6B6E
        .4byte 0x6F776E20
        .4byte 0x64617461
        .4byte 0x20626C6F
        .4byte 0x636B0A00
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12JUTCacheFont
    __vt__12JUTCacheFont:
        .4byte 0
        .4byte 0
        .4byte __dt__12JUTCacheFontFv
        .4byte setGX__10JUTResFontFv
        .4byte setGX__10JUTResFontFQ28JUtility6TColorQ28JUtility6TColor
        .4byte drawChar_scale__10JUTResFontFffffib
        .4byte getLeading__10JUTResFontCFv
        .4byte getAscent__10JUTResFontCFv
        .4byte getDescent__10JUTResFontCFv
        .4byte getHeight__10JUTResFontCFv
        .4byte getWidth__10JUTResFontCFv
        .4byte getWidthEntry__10JUTResFontCFiPQ27JUTFont6TWidth
        .4byte getCellWidth__10JUTResFontCFv
        .4byte getCellHeight__10JUTResFontCFv
        .4byte getFontType__10JUTResFontCFv
        .4byte getResFont__10JUTResFontCFv
        .4byte isLeadByte__10JUTResFontCFi
        .4byte loadImage__12JUTCacheFontFi11_GXTexMapID
        .4byte setBlock__12JUTCacheFontFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516720
    lbl_80516720:
        .4byte 0x25730000
    .global lbl_80516724
    lbl_80516724:
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
JUTCacheFont::JUTCacheFont()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
JUTCacheFont::JUTCacheFont(const ResFONT*, void*, u32, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80033F94
 * Size:	000090
 * __ct__12JUTCacheFontFPC7ResFONTUlP7JKRHeap
 */
JUTCacheFont::JUTCacheFont(const ResFONT* resource, u32 p2, JKRHeap* heap)
    : JUTResFont()
{
	initialize_state();
	JUTResFont::initialize_state();
	JUTFont::initialize_state();
	initiate(resource, nullptr, p2, heap);
}

/*
 * --INFO--
 * Address:	80034024
 * Size:	000094
 * __dt
 */
JUTCacheFont::~JUTCacheFont()
{
	if (_04) {
		deleteMemBlocks_CacheFont();
		initialize_state();
		deleteMemBlocks_ResFont();
		JUTResFont::initialize_state();
		JUTFont::initialize_state();
	}
}

/*
 * --INFO--
 * Address:	800340B8
 * Size:	000084
 */
void JUTCacheFont::deleteMemBlocks_CacheFont()
{
	if (_B0 != 0) {
		delete[] _90;
	}
	delete m_aramBlock;
	delete m_infoBlock;
	delete m_memBlocks;
	delete _7C;
	delete _80;
	delete _84;
}

/*
 * --INFO--
 * Address:	8003413C
 * Size:	00003C
 */
void JUTCacheFont::initialize_state()
{
	_B0               = 0;
	_90               = nullptr;
	m_aramBlock       = nullptr;
	m_infoBlock       = nullptr;
	_7C               = nullptr;
	_80               = nullptr;
	_84               = nullptr;
	m_memBlocks       = nullptr;
	_8C               = 0;
	m_maxPageByteSize = 0;
	_90               = nullptr;
	_9C               = nullptr;
	_A0               = nullptr;
}

/*
 * --INFO--
 * Address:	80034178
 * Size:	000188
 */
bool JUTCacheFont::getMemorySize(const ResFONT* resource, unsigned short* widthBlocksCount, unsigned long* widthBlocksSize,
                                 unsigned short* glyphBlocksCount, unsigned long* glyphBlocksSize, unsigned short* mapBlocksCount,
                                 unsigned long* mapBlocksSize, unsigned long* maxPageByteSize)
{
	if (resource == nullptr) {
		return false;
	}
	const BlockHeader* pData = (const BlockHeader*)((const u8*)&resource->m_data);
	/* acc: accumulated */
	u16 accWidthBlocksCount = 0;
	u16 accGlyphBlocksCount = 0;
	u16 accMapBlocksCount   = 0;
	u32 accWidthBlocksSize  = 0;
	u32 accGlyphBlocksSize  = 0;
	u32 accMapBlocksSize    = 0;
	u32 accMaxPageByteSize  = 0;
	// for (u32 i = 0; i < resource->m_chunkNum; i++, BlockHeader::advance(&pData)) {
	for (u32 i = 0; i < resource->m_chunkNum; i++, pData = pData->getNext()) {
		switch (pData->m_magic) {
		case 'WID1':
			accWidthBlocksCount++;
			accWidthBlocksSize += pData->m_size;
			break;
		case 'GLY1': {
			accGlyphBlocksCount++;
			accGlyphBlocksSize += pData->m_size;
			const GlyphBlock* glyphBlock = (const GlyphBlock*)pData;
			if (glyphBlock->m_pageByteSize > accMaxPageByteSize) {
				accMaxPageByteSize = glyphBlock->m_pageByteSize;
			}
			break;
		}
		case 'MAP1':
			accMapBlocksCount++;
			accMapBlocksSize += pData->m_size;
			break;
		case 'INF1':
			break;
		default:
			JUTReportConsole("JUTCacheFont: Unknown data block\n");
			break;
		}
	}
	// u8* pData = (u8*)&resource->m_data;
	// /* acc: accumulated */
	// u16 accWidthBlocksCount = 0;
	// u16 accGlyphBlocksCount = 0;
	// u16 accMapBlocksCount   = 0;
	// u32 accWidthBlocksSize  = 0;
	// u32 accGlyphBlocksSize  = 0;
	// u32 accMapBlocksSize    = 0;
	// u32 accMaxPageByteSize  = 0;
	// for (u32 i = 0; i < resource->m_chunkNum; i++, pData += ((BlockHeader*)pData)->m_size) {
	// 	switch (((BlockHeader*)pData)->m_magic) {
	// 	case 'INF1':
	// 		break;
	// 	case 'WID1':
	// 		accWidthBlocksCount++;
	// 		accWidthBlocksSize += ((BlockHeader*)pData)->m_size;
	// 		break;
	// 	case 'GLY1':
	// 		accGlyphBlocksCount++;
	// 		accGlyphBlocksSize += ((BlockHeader*)pData)->m_size;
	// 		if (((GlyphBlock*)pData)->m_pageByteSize > accMaxPageByteSize) {
	// 			accMaxPageByteSize = ((GlyphBlock*)pData)->m_pageByteSize;
	// 		}
	// 		break;
	// 	case 'MAP1':
	// 		accMapBlocksCount++;
	// 		accMapBlocksSize += ((BlockHeader*)pData)->m_size;
	// 		break;
	// 	default:
	// 		JUTReportConsole("JUTCacheFont: Unknown data block\n");
	// 		break;
	// 	}
	// }
	if (widthBlocksCount != nullptr) {
		*widthBlocksCount = accWidthBlocksCount;
	}
	if (glyphBlocksCount != nullptr) {
		*glyphBlocksCount = accGlyphBlocksCount;
	}
	if (mapBlocksCount != nullptr) {
		*mapBlocksCount = accMapBlocksCount;
	}
	if (widthBlocksSize != nullptr) {
		*widthBlocksSize = accWidthBlocksSize;
	}
	if (glyphBlocksSize != nullptr) {
		*glyphBlocksSize = accGlyphBlocksSize;
	}
	if (mapBlocksSize != nullptr) {
		*mapBlocksSize = accMapBlocksSize;
	}
	if (maxPageByteSize != nullptr) {
		*maxPageByteSize = accMaxPageByteSize;
	}
	return true;
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r14, 0x8(r1)
	  mr.       r31, r4
	  lwz       r14, 0x58(r1)
	  mr        r15, r5
	  mr        r16, r6
	  mr        r17, r7
	  mr        r18, r8
	  mr        r19, r9
	  mr        r20, r10
	  bne-      .loc_0x3C
	  li        r3, 0
	  b         .loc_0x174

	.loc_0x3C:
	  lis       r3, 0x4D41
	  addi      r22, r31, 0x20
	  addi      r30, r3, 0x5031
	  li        r29, 0
	  li        r28, 0
	  li        r27, 0
	  li        r26, 0
	  li        r25, 0
	  li        r24, 0
	  li        r23, 0
	  li        r21, 0
	  b         .loc_0x110

	.loc_0x6C:
	  lwz       r4, 0x0(r22)
	  cmpw      r4, r30
	  beq-      .loc_0xE8
	  bge-      .loc_0xA4
	  lis       r3, 0x494E
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0x104
	  bge-      .loc_0xF8
	  lis       r3, 0x474C
	  addi      r0, r3, 0x5931
	  cmpw      r4, r0
	  beq-      .loc_0xC8
	  b         .loc_0xF8

	.loc_0xA4:
	  lis       r3, 0x5749
	  addi      r0, r3, 0x4431
	  cmpw      r4, r0
	  beq-      .loc_0xB8
	  b         .loc_0xF8

	.loc_0xB8:
	  lwz       r0, 0x4(r22)
	  addi      r29, r29, 0x1
	  add       r26, r26, r0
	  b         .loc_0x104

	.loc_0xC8:
	  lwz       r3, 0x10(r22)
	  addi      r28, r28, 0x1
	  lwz       r0, 0x4(r22)
	  cmplw     r3, r23
	  add       r25, r25, r0
	  ble-      .loc_0x104
	  mr        r23, r3
	  b         .loc_0x104

	.loc_0xE8:
	  lwz       r0, 0x4(r22)
	  addi      r27, r27, 0x1
	  add       r24, r24, r0
	  b         .loc_0x104

	.loc_0xF8:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x7BE0
	  bl        -0xAED8

	.loc_0x104:
	  lwz       r0, 0x4(r22)
	  addi      r21, r21, 0x1
	  add       r22, r22, r0

	.loc_0x110:
	  lwz       r0, 0xC(r31)
	  cmplw     r21, r0
	  blt+      .loc_0x6C
	  cmplwi    r15, 0
	  beq-      .loc_0x128
	  sth       r29, 0x0(r15)

	.loc_0x128:
	  cmplwi    r17, 0
	  beq-      .loc_0x134
	  sth       r28, 0x0(r17)

	.loc_0x134:
	  cmplwi    r19, 0
	  beq-      .loc_0x140
	  sth       r27, 0x0(r19)

	.loc_0x140:
	  cmplwi    r16, 0
	  beq-      .loc_0x14C
	  stw       r26, 0x0(r16)

	.loc_0x14C:
	  cmplwi    r18, 0
	  beq-      .loc_0x158
	  stw       r25, 0x0(r18)

	.loc_0x158:
	  cmplwi    r20, 0
	  beq-      .loc_0x164
	  stw       r24, 0x0(r20)

	.loc_0x164:
	  cmplwi    r14, 0
	  beq-      .loc_0x170
	  stw       r23, 0x0(r14)

	.loc_0x170:
	  li        r3, 0x1

	.loc_0x174:
	  lmw       r14, 0x8(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80034300
 * Size:	0000B4
 * initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap
 */
bool JUTCacheFont::initiate(const ResFONT* resource, void* p2, unsigned long p3, JKRHeap* heap)
{
	if (!internal_initiate(resource, p2, p3, heap)) {
		deleteMemBlocks_CacheFont();
		deleteMemBlocks_ResFont();
		JUTFont::initialize_state();
		_04 = false;
		return false;
	}
	return true;
}

/*
 * --INFO--
 * Address:	800343B4
 * Size:	000184
 */
bool JUTCacheFont::internal_initiate(const ResFONT* resource, void* p2, unsigned long p3, JKRHeap* heap)
{
	deleteMemBlocks_CacheFont();
	initialize_state();
	deleteMemBlocks_ResFont();
	JUTResFont::initialize_state();
	JUTFont::initialize_state();
	if (resource == nullptr) {
		return false;
	}
	m_resource = resource;
	_04        = true;
	getMemorySize(resource, &m_widthBlockCount, &m_widthBlocksSize, &m_glyphBlockCount, &m_glyphBlocksSize, &m_mapBlockCount,
	              &m_mapBlocksSize, &m_maxPageByteSize);
	if (!allocArea(p2, p3, heap)) {
		return false;
	}
	if (!allocArray(heap)) {
		return false;
	}
	setBlock();
	return true;
}

/*
 * --INFO--
 * Address:	80034538
 * Size:	0001C4
 */
bool JUTCacheFont::allocArea(void* p1, unsigned long p2, JKRHeap* heap)
{
	m_infoBlock = (FontHeader*)new (heap, 0) ResFONT();
	if (m_infoBlock == nullptr) {
		return false;
	}
	if (m_widthBlocksSize != 0) {
		_7C = new (heap, 0) u8[m_widthBlocksSize];
		if (_7C == nullptr) {
			return false;
		}
	}
	if (m_glyphBlockCount != 0) {
		_80 = new (heap, 0) GlyphBlock[m_glyphBlockCount];
		if (_80 == nullptr) {
			return false;
		}
		m_aramBlock
		    = JKRAram::sAramObject->m_aramHeap->alloc(m_glyphBlocksSize - (m_glyphBlockCount * sizeof(GlyphBlock)), JKRAramHeap::AM_Head);
		if (m_aramBlock == nullptr) {
			return false;
		}
	}
	if (m_mapBlocksSize != 0) {
		_84 = new (heap, 0) u8[m_mapBlocksSize];
		if (_84 == nullptr) {
			return false;
		}
	}
	_94    = m_maxPageByteSize + 0x40;
	_98    = p2 / _94;
	u32 v1 = _94 * _98;
	if (_98 == 0) {
		return false;
	}
	if (p1 != nullptr) {
		_90 = p1;
		_B0 = 0;
	} else {
		_90 = new (heap, 0x20) u8[v1];
		if (_90 == nullptr) {
			return false;
		}
		_B0 = 1;
	}
	invalidiateAllCache();
	return true;
}

/*
 * --INFO--
 * Address:	800346FC
 * Size:	0000E8
 */
bool JUTCacheFont::allocArray(JKRHeap*)
{

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lhz      r6, 0x64(r3)
	lhz      r0, 0x62(r3)
	lhz      r3, 0x60(r3)
	add      r0, r0, r6
	add      r0, r3, r0
	slwi     r3, r0, 2
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x50(r31)
	lwz      r3, 0x50(r31)
	cmplwi   r3, 0
	bne      lbl_80034748
	li       r3, 0
	b        lbl_800347D0

lbl_80034748:
	lhz      r0, 0x60(r31)
	mr       r6, r3
	cmplwi   r0, 0
	beq      lbl_80034768
	stw      r3, 0x54(r31)
	lhz      r0, 0x60(r31)
	slwi     r0, r0, 2
	add      r6, r3, r0

lbl_80034768:
	lhz      r0, 0x62(r31)
	cmplwi   r0, 0
	beq      lbl_800347BC
	stw      r6, 0x58(r31)
	li       r7, 0
	li       r5, 0
	lhz      r0, 0x62(r31)
	slwi     r0, r0, 2
	add      r6, r6, r0
	b        lbl_800347B0

lbl_80034790:
	lwz      r0, 0x94(r31)
	lwz      r4, 0x90(r31)
	mullw    r0, r0, r7
	lwz      r3, 0x58(r31)
	addi     r7, r7, 1
	add      r0, r4, r0
	stwx     r0, r3, r5
	addi     r5, r5, 4

lbl_800347B0:
	lhz      r0, 0x62(r31)
	cmpw     r7, r0
	blt      lbl_80034790

lbl_800347BC:
	lhz      r0, 0x64(r31)
	cmplwi   r0, 0
	beq      lbl_800347CC
	stw      r6, 0x5c(r31)

lbl_800347CC:
	li       r3, 1

lbl_800347D0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800347E4
 * Size:	000210
 */
void JUTCacheFont::setBlock()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, 0x0000FFFF@ha
	lis      r6, lbl_80478420@ha
	stw      r0, 0x44(r1)
	addi     r0, r4, 0x0000FFFF@l
	stmw     r20, 0x10(r1)
	mr       r20, r3
	li       r29, 0
	addi     r30, r6, lbl_80478420@l
	mr       r28, r29
	li       r21, 0
	mr       r27, r29
	lwz      r5, 0xac(r3)
	lis      r3, 0x4D415031@ha
	lwz      r26, 0x7c(r20)
	addi     r31, r3, 0x4D415031@l
	lwz      r25, 0x80(r20)
	lwz      r24, 0x84(r20)
	lwz      r23, 0x14(r5)
	sth      r0, 0x68(r20)
	lwz      r3, 0x48(r20)
	addi     r22, r3, 0x20
	b        lbl_800349D0

lbl_80034844:
	lwz      r4, 0(r22)
	cmpw     r4, r31
	beq      lbl_80034978
	bge      lbl_8003487C
	lis      r3, 0x494E4631@ha
	addi     r0, r3, 0x494E4631@l
	cmpw     r4, r0
	beq      lbl_80034890
	bge      lbl_800349BC
	lis      r3, 0x474C5931@ha
	addi     r0, r3, 0x474C5931@l
	cmpw     r4, r0
	beq      lbl_800348E8
	b        lbl_800349BC

lbl_8003487C:
	lis      r3, 0x57494431@ha
	addi     r0, r3, 0x57494431@l
	cmpw     r4, r0
	beq      lbl_800348C0
	b        lbl_800349BC

lbl_80034890:
	lwz      r3, 0x4c(r20)
	mr       r4, r22
	li       r5, 0x20
	bl       memcpy
	lwz      r4, 0x4c(r20)
	lis      r3, saoAboutEncoding___10JUTResFont@ha
	addi     r0, r3, saoAboutEncoding___10JUTResFont@l
	lhz      r3, 8(r4)
	slwi     r3, r3, 2
	add      r0, r0, r3
	stw      r0, 0x6c(r20)
	b        lbl_800349C4

lbl_800348C0:
	lwz      r5, 4(r22)
	mr       r3, r26
	mr       r4, r22
	bl       memcpy
	lwz      r3, 0x54(r20)
	stwx     r26, r3, r29
	addi     r29, r29, 4
	lwz      r0, 4(r22)
	add      r26, r26, r0
	b        lbl_800349C4

lbl_800348E8:
	mr       r3, r25
	mr       r4, r22
	li       r5, 0x20
	bl       memcpy
	lwz      r5, 4(r22)
	mr       r4, r23
	addi     r3, r22, 0x20
	li       r6, 0
	addi     r5, r5, -32
	li       r7, 0
	li       r8, 0
	li       r9, -1
	li       r10, 0
	bl       mainRamToAram__7JKRAramFPUcUlUl15JKRExpandSwitchUlP7JKRHeapiPUl
	cmplwi   r3, 0
	bne      lbl_80034940
	addi     r3, r30, 0x24
	addi     r6, r30, 0x38
	li       r4, 0x1dd
	addi     r5, r2, lbl_80516720@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80034940:
	stw      r23, 0(r25)
	lwz      r3, 0x10(r25)
	lwz      r0, 0x88(r20)
	cmplw    r3, r0
	ble      lbl_80034958
	stw      r3, 0x88(r20)

lbl_80034958:
	lwz      r3, 0x58(r20)
	stwx     r25, r3, r28
	addi     r28, r28, 4
	addi     r25, r25, 0x20
	lwz      r0, 4(r22)
	add      r23, r0, r23
	addi     r23, r23, -32
	b        lbl_800349C4

lbl_80034978:
	lwz      r5, 4(r22)
	mr       r3, r24
	mr       r4, r22
	bl       memcpy
	lwz      r3, 0x5c(r20)
	stwx     r24, r3, r27
	lwz      r3, 0x5c(r20)
	lhz      r0, 0x68(r20)
	lwzx     r3, r3, r27
	lhz      r3, 0xa(r3)
	cmplw    r0, r3
	ble      lbl_800349AC
	sth      r3, 0x68(r20)

lbl_800349AC:
	lwz      r0, 4(r22)
	addi     r27, r27, 4
	add      r24, r24, r0
	b        lbl_800349C4

lbl_800349BC:
	addi     r3, r30, 0x60
	bl       JUTReportConsole

lbl_800349C4:
	lwz      r0, 4(r22)
	addi     r21, r21, 1
	add      r22, r22, r0

lbl_800349D0:
	lwz      r3, 0x48(r20)
	lwz      r0, 0xc(r3)
	cmplw    r21, r0
	blt      lbl_80034844
	lmw      r20, 0x10(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JUTCacheFont::determineBlankPage()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
void JUTCacheFont::getGlyphFromAram(JUTCacheFont::TGlyphCacheInfo*, JUTCacheFont::TCachePage*, int*, int*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800349F4
 * Size:	0000BC
 */
void JUTCacheFont::loadImage(int p1, _GXTexMapID id)
{
	TGlyphCacheInfo* cacheInfo = loadCache_char_subroutine(&p1, false);
	if (cacheInfo == nullptr) {
		return;
	}
	m_width  = cacheInfo->_0C * (p1 - (p1 / cacheInfo->_16) * cacheInfo->_16);
	m_height = cacheInfo->_0E * (p1 / cacheInfo->_16);
	GXLoadTexObj(&cacheInfo->m_gxTexObj, id);
	if (_8C == 1) {
		unlink(cacheInfo);
		prepend(cacheInfo);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	li       r5, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r4, 8(r1)
	addi     r4, r1, 8
	bl       loadCache_char_subroutine__12JUTCacheFontFPib
	or.      r31, r3, r3
	beq      lbl_80034A94
	lwz      r6, 8(r1)
	mr       r4, r30
	lhz      r5, 0x16(r31)
	addi     r3, r31, 0x20
	lhz      r7, 0xc(r31)
	divw     r0, r6, r5
	mullw    r0, r0, r5
	subf     r0, r0, r6
	mullw    r0, r7, r0
	stw      r0, 0x1c(r29)
	lwz      r5, 8(r1)
	lhz      r0, 0x16(r31)
	lhz      r6, 0xe(r31)
	divw     r0, r5, r0
	mullw    r0, r6, r0
	stw      r0, 0x20(r29)
	bl       GXLoadTexObj
	lwz      r0, 0x8c(r29)
	cmpwi    r0, 1
	bne      lbl_80034A94
	mr       r3, r29
	mr       r4, r31
	bl       unlink__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo
	mr       r3, r29
	mr       r4, r31
	bl       prepend__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo

lbl_80034A94:
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
 * Address:	80034AB0
 * Size:	000298
 */
JUTCacheFont::TGlyphCacheInfo* JUTCacheFont::loadCache_char_subroutine(int*, bool)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r25, r3
	mr       r26, r4
	mr       r27, r5
	lwz      r6, 0x9c(r3)
	li       r3, 0
	b        lbl_80034B08

lbl_80034AD8:
	lhz      r5, 8(r6)
	lwz      r4, 0(r26)
	cmpw     r5, r4
	bgt      lbl_80034B04
	lhz      r0, 0xa(r6)
	cmpw     r4, r0
	bgt      lbl_80034B04
	subf     r0, r5, r4
	mr       r3, r6
	stw      r0, 0(r26)
	b        lbl_80034B10

lbl_80034B04:
	lwz      r6, 4(r6)

lbl_80034B08:
	cmplwi   r6, 0
	bne      lbl_80034AD8

lbl_80034B10:
	cmplwi   r3, 0
	bne      lbl_80034D24
	lhz      r0, 0x62(r25)
	li       r28, 0
	li       r3, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_80034B78

lbl_80034B30:
	lwz      r6, 0x58(r25)
	lwz      r5, 0(r26)
	lwzx     r4, r6, r3
	lhz      r0, 8(r4)
	cmpw     r0, r5
	bgt      lbl_80034B6C
	lhz      r0, 0xa(r4)
	cmpw     r5, r0
	bgt      lbl_80034B6C
	slwi     r0, r28, 2
	lwzx     r3, r6, r0
	lhz      r0, 8(r3)
	subf     r0, r0, r5
	stw      r0, 0(r26)
	b        lbl_80034B78

lbl_80034B6C:
	addi     r3, r3, 4
	addi     r28, r28, 1
	bdnz     lbl_80034B30

lbl_80034B78:
	lhz      r0, 0x62(r25)
	cmpw     r28, r0
	bge      lbl_80034D1C
	lwz      r29, 0xa4(r25)
	cmplwi   r29, 0
	beq      lbl_80034BBC
	lwz      r0, 4(r29)
	stw      r0, 0xa4(r25)
	lwz      r3, 4(r29)
	cmplwi   r3, 0
	bne      lbl_80034BB0
	li       r0, 0
	stw      r0, 0xa8(r25)
	b        lbl_80034C00

lbl_80034BB0:
	li       r0, 0
	stw      r0, 0(r3)
	b        lbl_80034C00

lbl_80034BBC:
	lwz      r29, 0xa0(r25)
	b        lbl_80034BF4

lbl_80034BC4:
	lhz      r0, 0x1e(r29)
	lwz      r3, 0(r29)
	cmplwi   r0, 0
	bne      lbl_80034BF0
	mr       r3, r25
	mr       r4, r29
	bl       unlink__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo
	lwz      r3, 0xb4(r25)
	addi     r0, r3, 1
	stw      r0, 0xb4(r25)
	b        lbl_80034C00

lbl_80034BF0:
	mr       r29, r3

lbl_80034BF4:
	cmplwi   r29, 0
	bne      lbl_80034BC4
	li       r29, 0

lbl_80034C00:
	cmplwi   r29, 0
	bne      lbl_80034C10
	li       r3, 0
	b        lbl_80034D34

lbl_80034C10:
	lwz      r4, 0x58(r25)
	slwi     r0, r28, 2
	mr       r3, r29
	li       r5, 0x20
	lwzx     r30, r4, r0
	mr       r4, r30
	bl       memcpy
	mr       r3, r25
	mr       r4, r29
	bl       prepend__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo
	lhz      r4, 0x16(r29)
	lhz      r3, 0x18(r29)
	lwz      r0, 0(r26)
	mullw    r4, r4, r3
	lhz      r3, 8(r29)
	divw     r31, r0, r4
	addi     r0, r4, -1
	mullw    r5, r31, r4
	add      r3, r3, r5
	sth      r3, 8(r29)
	lhz      r3, 8(r29)
	lhz      r4, 0xa(r29)
	add      r0, r3, r0
	clrlwi   r0, r0, 0x10
	cmplw    r4, r0
	bge      lbl_80034C7C
	mr       r0, r4

lbl_80034C7C:
	sth      r0, 0xa(r29)
	addi     r24, r29, 0x40
	mr       r4, r24
	li       r6, 0
	lwz      r0, 0(r26)
	li       r7, 0
	li       r8, 0
	li       r9, -1
	subf     r0, r5, r0
	li       r10, 0
	stw      r0, 0(r26)
	lwz      r5, 0x10(r29)
	lwz      r3, 0(r30)
	mullw    r0, r5, r31
	add      r3, r3, r0
	bl       aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl
	addi     r26, r29, 0x20
	lhz      r5, 0x1a(r29)
	lhz      r6, 0x1c(r29)
	mr       r3, r26
	lhz      r7, 0x14(r29)
	mr       r4, r24
	li       r8, 0
	li       r9, 0
	li       r10, 0
	bl       GXInitTexObj
	lfs      f1, lbl_80516724@sda21(r2)
	mr       r3, r26
	li       r4, 1
	li       r5, 1
	fmr      f2, f1
	li       r6, 0
	fmr      f3, f1
	li       r7, 0
	li       r8, 0
	bl       GXInitTexObjLOD
	stw      r31, 0x44(r25)
	mr       r3, r29
	sth      r28, 0x66(r25)
	b        lbl_80034D24

lbl_80034D1C:
	li       r3, 0
	b        lbl_80034D34

lbl_80034D24:
	clrlwi.  r0, r27, 0x18
	beq      lbl_80034D34
	li       r0, 1
	sth      r0, 0x1e(r3)

lbl_80034D34:
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JUTCacheFont::loadCache_char(int, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80034D48
 * Size:	0000C8
 */
void JUTCacheFont::loadCache_string(const char*, bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3

lbl_80034D70:
	lwz      r12, 0(r28)
	mr       r3, r28
	lbz      r4, 0(r29)
	lwz      r12, 0x40(r12)
	mr       r31, r4
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80034DA4
	lbzu     r0, 1(r29)
	slwi     r3, r31, 8
	mr       r31, r3
	rlwimi   r31, r0, 0, 0x18, 0x1f

lbl_80034DA4:
	cmpwi    r31, 0
	beq      lbl_80034DEC
	mr       r3, r28
	mr       r4, r31
	bl       getFontCode__10JUTResFontCFi
	stw      r3, 8(r1)
	mr       r3, r28
	mr       r5, r30
	addi     r4, r1, 8
	bl       loadCache_char_subroutine__12JUTCacheFontFPib
	neg      r0, r3
	or       r0, r0, r3
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	bne      lbl_80034DE4
	li       r3, 0
	b        lbl_80034DF0

lbl_80034DE4:
	addi     r29, r29, 1
	b        lbl_80034D70

lbl_80034DEC:
	li       r3, 1

lbl_80034DF0:
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
 * Address:	........
 * Size:	0000BC
 */
void JUTCacheFont::loadCache_string_size(const char*, unsigned long, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JUTCacheFont::unlockCache_all()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void JUTCacheFont::unlockCache_char(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void JUTCacheFont::unlockCache_string(const char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void JUTCacheFont::unlockCache_string_size(const char*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80034E10
 * Size:	000088
 */
void JUTCacheFont::invalidiateAllCache()
{
	/*
	lwz      r5, 0x90(r3)
	li       r6, 0
	b        lbl_80034E68

lbl_80034E1C:
	cmpwi    r6, 0
	bne      lbl_80034E2C
	li       r0, 0
	b        lbl_80034E34

lbl_80034E2C:
	lwz      r0, 0x94(r3)
	subf     r0, r0, r5

lbl_80034E34:
	stw      r0, 0(r5)
	lwz      r4, 0x98(r3)
	addi     r0, r4, -1
	cmplw    r6, r0
	bne      lbl_80034E50
	li       r0, 0
	b        lbl_80034E58

lbl_80034E50:
	lwz      r0, 0x94(r3)
	add      r0, r5, r0

lbl_80034E58:
	stw      r0, 4(r5)
	addi     r6, r6, 1
	lwz      r0, 0x94(r3)
	add      r5, r5, r0

lbl_80034E68:
	lwz      r0, 0x98(r3)
	cmplw    r6, r0
	blt      lbl_80034E1C
	lwz      r4, 0x94(r3)
	li       r0, 0
	subf     r4, r4, r5
	stw      r4, 0xa8(r3)
	lwz      r4, 0x90(r3)
	stw      r4, 0xa4(r3)
	stw      r0, 0x9c(r3)
	stw      r0, 0xa0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80034E98
 * Size:	000044
 */
void JUTCacheFont::unlink(JUTCacheFont::TGlyphCacheInfo* cacheInfo)
{
	if (cacheInfo->m_prev == nullptr) {
		_9C = cacheInfo->m_next;
	} else {
		cacheInfo->m_prev->m_next = cacheInfo->m_next;
	}
	if (cacheInfo->m_next == nullptr) {
		_A0 = cacheInfo->m_prev;
	} else {
		cacheInfo->m_next->m_prev = cacheInfo->m_prev;
	}
}

/*
 * --INFO--
 * Address:	80034EDC
 * Size:	00002C
 */
void JUTCacheFont::prepend(JUTCacheFont::TGlyphCacheInfo* cacheInfo)
{
	TGlyphCacheInfo* oldHead = _9C;
	_9C                      = cacheInfo;
	cacheInfo->m_prev        = nullptr;
	cacheInfo->m_next        = oldHead;
	if (oldHead == nullptr) {
		_A0 = cacheInfo;
	} else {
		oldHead->m_prev = cacheInfo;
	}
}
