#include "Dolphin/gx.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "JSystem/JUtility/JUTFont.h"
#include "types.h"

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
	if (mIsValid) {
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
		delete[] mCacheBuffer;
	}
	delete mAramBlock;
	delete mInfoBlock;
	delete mMemBlocks;
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
	_B0           = 0;
	mCacheBuffer  = nullptr;
	mAramBlock    = nullptr;
	mInfoBlock    = nullptr;
	_7C           = nullptr;
	_80           = nullptr;
	_84           = nullptr;
	mMemBlocks    = nullptr;
	mPagingType   = CFPAGETYPE_Unk0;
	mMaxSheetSize = 0;
	mCacheBuffer  = nullptr;
	_9C           = nullptr;
	_A0           = nullptr;
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
	BlockHeader* pData = (BlockHeader*)((u8*)&resource->mData);
	/* acc: accumulated */
	u16 accWidthBlocksCount = 0;
	u16 accGlyphBlocksCount = 0;
	u16 accMapBlocksCount   = 0;
	u32 accWidthBlocksSize  = 0;
	u32 accGlyphBlocksSize  = 0;
	u32 accMapBlocksSize    = 0;
	u32 accMaxPageByteSize  = 0;
	for (u32 i = 0; i < resource->mNumBlocks; i++, pData = (BlockHeader*)pData->getNext()) {
		switch (pData->mMagic) {
		case 'WID1':
			accWidthBlocksCount++;
			accWidthBlocksSize += pData->mSize;
			break;

		case 'GLY1': {
			accGlyphBlocksCount++;
			accGlyphBlocksSize += pData->mSize;
			const ResFONT::GlyphBlock* glyphBlock = (const ResFONT::GlyphBlock*)pData;
			if (glyphBlock->mNumRows > accMaxPageByteSize) {
				accMaxPageByteSize = glyphBlock->mNumRows;
			}
			break;
		}

		case 'MAP1':
			accMapBlocksCount++;
			accMapBlocksSize += pData->mSize;
			break;

		case 'INF1':
			break;

		default:
			JUTReportConsole("JUTCacheFont: Unknown data block\n");
			break;
		}
	}
	// u8* pData = (u8*)&resource->mData;
	// /* acc: accumulated */
	// u16 accWidthBlocksCount = 0;
	// u16 accGlyphBlocksCount = 0;
	// u16 accMapBlocksCount   = 0;
	// u32 accWidthBlocksSize  = 0;
	// u32 accGlyphBlocksSize  = 0;
	// u32 accMapBlocksSize    = 0;
	// u32 accMaxPageByteSize  = 0;
	// for (u32 i = 0; i < resource->mChunkNum; i++, pData += ((BlockHeader*)pData)->mSize) {
	// 	switch (((BlockHeader*)pData)->mMagic) {
	// 	case 'INF1':
	// 		break;
	// 	case 'WID1':
	// 		accWidthBlocksCount++;
	// 		accWidthBlocksSize += ((BlockHeader*)pData)->mSize;
	// 		break;
	// 	case 'GLY1':
	// 		accGlyphBlocksCount++;
	// 		accGlyphBlocksSize += ((BlockHeader*)pData)->mSize;
	// 		if (((GlyphBlock*)pData)->mPageByteSize > accMaxPageByteSize) {
	// 			accMaxPageByteSize = ((GlyphBlock*)pData)->mPageByteSize;
	// 		}
	// 		break;
	// 	case 'MAP1':
	// 		accMapBlocksCount++;
	// 		accMapBlocksSize += ((BlockHeader*)pData)->mSize;
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
		mIsValid = false;
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
	mResource = resource;
	mIsValid  = true;
	getMemorySize(resource, &mWidthBlockCount, &mWidthBlocksSize, &mGlyphBlockCount, &mGlyphBlocksSize, &mMapBlockCount, &mMapBlocksSize,
	              &mMaxSheetSize);
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
	mInfoBlock = (ResFONT::InfoBlock*)new (heap, 0) ResFONT();
	if (mInfoBlock == nullptr) {
		return false;
	}
	if (mWidthBlocksSize != 0) {
		_7C = new (heap, 0) u8[mWidthBlocksSize];
		if (_7C == nullptr) {
			return false;
		}
	}
	if (mGlyphBlockCount != 0) {
		_80 = new (heap, 0) u8[mGlyphBlockCount << 5];
		if (_80 == nullptr) {
			return false;
		}
		mAramBlock = JKRAram::sAramObject->mAramHeap->alloc(mGlyphBlocksSize - (mGlyphBlockCount * sizeof(ResFONT::GlyphBlock)),
		                                                    JKRAramHeap::AM_Head);
		if (mAramBlock == nullptr) {
			return false;
		}
	}
	if (mMapBlocksSize != 0) {
		_84 = new (heap, 0) u8[mMapBlocksSize];
		if (_84 == nullptr) {
			return false;
		}
	}
	_94        = mMaxSheetSize + 0x40;
	mCachePage = p2 / _94;
	u32 v1     = _94 * mCachePage;
	if (mCachePage == 0) {
		return false;
	}
	if (p1 != nullptr) {
		mCacheBuffer = p1;
		_B0          = 0;
	} else {
		mCacheBuffer = new (heap, 0x20) u8[v1];
		if (mCacheBuffer == nullptr) {
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
bool JUTCacheFont::allocArray(JKRHeap* heap)
{
	mMemBlocks = (void**)new (heap, 0) u8*[mWidthBlockCount + mGlyphBlockCount + mMapBlockCount];

	if (!mMemBlocks) {
		return false;
	}

	void** mapBlocks = mMemBlocks;

	if (mWidthBlockCount) {
		mWidthBlocks = (ResFONT::WidthBlock**)mapBlocks;
		mapBlocks    = mapBlocks + mWidthBlockCount;
	}

	if (mGlyphBlockCount) {
		mGlyphBlocks = (ResFONT::GlyphBlock**)mapBlocks;
		mapBlocks    = mapBlocks + mGlyphBlockCount;
		for (int i = 0; i < mGlyphBlockCount; i++) {
			mGlyphBlocks[i] = (ResFONT::GlyphBlock*)&(((u8*)mCacheBuffer)[_94 * i]);
		}
	}

	if (mMapBlockCount) {
		mMapBlocks = (ResFONT::MapBlock**)mapBlocks;
	}

	return true;
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
	int frac = p1 / cacheInfo->_16;
	mWidth   = cacheInfo->_0C * (p1 - frac * cacheInfo->_16);
	mHeight  = cacheInfo->_0E * (p1 / cacheInfo->_16);
	GXLoadTexObj(&cacheInfo->mGxTexObj, id);
	if (mPagingType == CFPAGETYPE_Unk1) {
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
	u32* buffer = (u32*)mCacheBuffer;

	for (int i = 0; i < mCachePage; i++) {
		buffer[0] = (i == 0) ? 0 : (u32)buffer - _94;
		buffer[1] = (i == mCachePage - 1) ? 0 : (u32)buffer + _94;
		buffer    = (u32*)((u32)buffer + _94);
	}

	_A8 = (u32)buffer - _94;
	_A4 = mCacheBuffer;
	_9C = nullptr;
	_A0 = nullptr;
}

/*
 * --INFO--
 * Address:	80034E98
 * Size:	000044
 */
void JUTCacheFont::unlink(JUTCacheFont::TGlyphCacheInfo* cacheInfo)
{
	if (cacheInfo->mPrev == nullptr) {
		_9C = cacheInfo->mNext;
	} else {
		cacheInfo->mPrev->mNext = cacheInfo->mNext;
	}
	if (cacheInfo->mNext == nullptr) {
		_A0 = cacheInfo->mPrev;
	} else {
		cacheInfo->mNext->mPrev = cacheInfo->mPrev;
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
	cacheInfo->mPrev         = nullptr;
	cacheInfo->mNext         = oldHead;
	if (oldHead == nullptr) {
		_A0 = cacheInfo;
	} else {
		oldHead->mPrev = cacheInfo;
	}
}
