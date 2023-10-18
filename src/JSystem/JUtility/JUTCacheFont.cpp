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
bool JUTCacheFont::getMemorySize(const ResFONT* resource, u16* widthBlocksCount, u32* widthBlocksSize, u16* glyphBlocksCount,
                                 u32* glyphBlocksSize, u16* mapBlocksCount, u32* mapBlocksSize, u32* maxPageByteSize)
{
	if (resource == nullptr) {
		return false;
	}

	u16 widBlockCount = 0;
	u16 glyBlockCount = 0;
	u16 mapBlockCount = 0;
	u32 totalWidSize  = 0;
	u32 totalGlySize  = 0;
	u32 totalMapSize  = 0;
	u32 maxGlyTexSize = 0;
	u32 glyTexSize;

	u8* fontInf = (u8*)resource->mData;
	for (int i = 0; i < resource->mNumBlocks; i++) {
		switch (((BlockHeader*)fontInf)->mMagic) {
		case 'INF1':
			break;
		case 'WID1':
			totalWidSize += ((BlockHeader*)fontInf)->mSize;
			widBlockCount++;
			break;
		case 'GLY1':
			totalGlySize += ((BlockHeader*)fontInf)->mSize;
			glyTexSize = ((ResFONT::GlyphBlock*)fontInf)->mTextureSize;
			glyBlockCount++;
			if (glyTexSize > maxGlyTexSize) {
				maxGlyTexSize = glyTexSize;
			}
			break;
		case 'MAP1':
			totalMapSize += ((BlockHeader*)fontInf)->mSize;
			mapBlockCount++;
			break;
		default:
			JUTReportConsole("JUTCacheFont: Unknown data block\n");
			break;
		}

		fontInf += ((BlockHeader*)fontInf)->mSize;
	}

	if (widthBlocksCount != nullptr) {
		*widthBlocksCount = widBlockCount;
	}

	if (glyphBlocksCount != nullptr) {
		*glyphBlocksCount = glyBlockCount;
	}

	if (mapBlocksCount != nullptr) {
		*mapBlocksCount = mapBlockCount;
	}

	if (widthBlocksSize != nullptr) {
		*widthBlocksSize = totalWidSize;
	}

	if (glyphBlocksSize != nullptr) {
		*glyphBlocksSize = totalGlySize;
	}

	if (mapBlocksSize != nullptr) {
		*mapBlocksSize = totalMapSize;
	}

	if (maxPageByteSize != nullptr) {
		*maxPageByteSize = maxGlyTexSize;
	}

	return true;
}

/*
 * --INFO--
 * Address:	80034300
 * Size:	0000B4
 * initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap
 */
bool JUTCacheFont::initiate(const ResFONT* resource, void* p2, u32 p3, JKRHeap* heap)
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
bool JUTCacheFont::internal_initiate(const ResFONT* resource, void* p2, u32 p3, JKRHeap* heap)
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
bool JUTCacheFont::allocArea(void* p1, u32 p2, JKRHeap* heap)
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
	int widthNum                = 0;
	int gylphNum                = 0;
	int mapNum                  = 0;
	u8* pWidth                  = (u8*)_7C;
	ResFONT::GlyphBlock* piVar5 = (ResFONT::GlyphBlock*)_80;
	ResFONT::MapBlock* pMap     = (ResFONT::MapBlock*)_84;
	u32 aramAddress             = mAramBlock->getAddress();
	mMaxCode                    = 0xffff;
	const int* pData            = (int*)mResource->mData;

	for (int i = 0; i < mResource->mNumBlocks; i++) {
		switch (*pData) {
		case 'INF1':
			memcpy(mInfoBlock, pData, 0x20);
			mIsLeadByte = &JUTResFont::saoAboutEncoding_[mInfoBlock->mFontType];
			break;
		case 'WID1':
			memcpy(pWidth, pData, pData[1]);
			mWidthBlocks[widthNum] = (ResFONT::WidthBlock*)pWidth;
			pWidth += pData[1];
			widthNum++;
			break;
		case 'GLY1':
			memcpy(piVar5, pData, 0x20);
			JKRAramBlock* block
			    = JKRAram::mainRamToAram((u8*)pData + 0x20, aramAddress, pData[1] - 0x20, Switch_0, 0, nullptr, 0xffffffff, nullptr);
			JUT_ASSERTLINE(477, block, "%s", "trouble occurred in JKRMainRamToAram.");

			piVar5->mMagic = aramAddress;
			if (piVar5->mTextureSize > mMaxSheetSize) {
				mMaxSheetSize = piVar5->mTextureSize;
			}
			mGlyphBlocks[gylphNum] = piVar5;
			gylphNum++;
			piVar5++;
			aramAddress = pData[1] + aramAddress - 0x20;
			break;
		case 'MAP1':
			memcpy(pMap, pData, pData[1]);
			mMapBlocks[mapNum] = pMap;
			if (mMaxCode > mMapBlocks[mapNum]->mStartCode) {
				mMaxCode = mMapBlocks[mapNum]->mStartCode;
			}
			mapNum++;
			pMap = (ResFONT::MapBlock*)((u8*)pMap + pData[1]);
			break;
		default:
			JUTReportConsole("Unknown data block\n");
			break;
		}

		pData = (int*)((u8*)pData + pData[1]);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
JUTCacheFont::TGlyphCacheInfo* JUTCacheFont::determineBlankPage()
{
	TGlyphCacheInfo* pVar1 = _A4;
	if (pVar1 != nullptr) {
		_A4                    = pVar1->mNext;
		TGlyphCacheInfo* pVar2 = pVar1->mNext;
		if (pVar2 == nullptr) {
			_A8 = 0;
		} else {
			pVar2->mPrev = nullptr;
		}
		return pVar1;
	}

	TGlyphCacheInfo* puVar1 = _A0;
	while (puVar1 != nullptr) {
		TGlyphCacheInfo* prev = puVar1->mPrev;
		if (puVar1->_1E == 0) {
			unlink(puVar1);
			_B4++;
			return puVar1;
		}
		puVar1 = prev;
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
void JUTCacheFont::getGlyphFromAram(JUTCacheFont::TGlyphCacheInfo* info, JUTCacheFont::TCachePage* cache, int* a1, int* a2)
{
	TGlyphCacheInfo* pGylphCacheInfo = cache;
	memcpy(pGylphCacheInfo, info, sizeof(TGlyphCacheInfo));
	prepend(pGylphCacheInfo);
	int iVar3 = pGylphCacheInfo->_16 * pGylphCacheInfo->_18;
	int iVar2 = *a1 / iVar3;
	pGylphCacheInfo->_08 += iVar2 * iVar3;
	u16 local_30         = pGylphCacheInfo->_08 + iVar3 - 1;
	pGylphCacheInfo->_0A = pGylphCacheInfo->_0A < local_30 ? pGylphCacheInfo->_0A : local_30;
	*a2                  = iVar2;
	*a1 -= iVar2 * iVar3;
	u8* addr = JKRAram::aramToMainRam((u32)info->mPrev + pGylphCacheInfo->_10 * iVar2, cache->mImage, pGylphCacheInfo->_10, Switch_0, 0,
	                                  nullptr, 0xffffffff, nullptr);
	// JUT_ASSERT(624, addr != NULL);
	GXInitTexObj(&cache->mTexObj, cache->mImage, pGylphCacheInfo->mWidth, pGylphCacheInfo->mHeight, (GXTexFmt)pGylphCacheInfo->mTexFormat,
	             GX_CLAMP, GX_CLAMP, GX_FALSE);
	GXInitTexObjLOD(&cache->mTexObj, GX_LINEAR, GX_LINEAR, 0.0f, 0.0f, 0.0f, GX_FALSE, GX_FALSE, GX_ANISO_1);
}

/*
 * --INFO--
 * Address:	800349F4
 * Size:	0000BC
 */
void JUTCacheFont::loadImage(int p1, _GXTexMapID id)
{
	TGlyphCacheInfo* cachePage = loadCache_char_subroutine(&p1, false);
	if (cachePage != nullptr) {
		mWidth  = cachePage->_0C * (p1 % (int)cachePage->_16);
		mHeight = cachePage->_0E * (p1 / cachePage->_16);
		GXLoadTexObj(getTexObj(cachePage), id);
		if (mPagingType == CFPAGETYPE_Unk1) {
			unlink(cachePage);
			prepend(cachePage);
		}
	}
}

/*
 * --INFO--
 * Address:	80034AB0
 * Size:	000298
 */
JUTCacheFont::TGlyphCacheInfo* JUTCacheFont::loadCache_char_subroutine(int* a1, bool a2)
{
	TCachePage* rv = nullptr;
	for (TCachePage* pCachePage = (TCachePage*)_9C; pCachePage != NULL; pCachePage = (TCachePage*)pCachePage->mNext) {
		if (pCachePage->_08 <= *a1 && *a1 <= pCachePage->_0A) {
			rv = pCachePage;
			*a1 -= pCachePage->_08;
			break;
		}
	}

	if (rv == NULL) {
		int i = 0;
		for (; i < mGlyphBlockCount; i++) {
			if (mGlyphBlocks[i]->mStartCode <= *a1 && *a1 <= mGlyphBlocks[i]->mEndCode) {
				*a1 -= mGlyphBlocks[i]->mStartCode;
				break;
			}
		}
		if (i < mGlyphBlockCount) {
			TCachePage* pBlankPage = (TCachePage*)determineBlankPage();
			if (pBlankPage == nullptr) {
				return nullptr;
			}
			int texPageIdx;
			getGlyphFromAram((JUTCacheFont::TGlyphCacheInfo*)mGlyphBlocks[i], pBlankPage, a1, &texPageIdx);
			mTexPageIdx = texPageIdx;
			_66         = i;
			rv          = pBlankPage;
		} else {
			return nullptr;
		}
	}
	if (a2) {
		rv->_1E = 1;
	}
	return rv;
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
void JUTCacheFont::loadCache_string(const char* a1, bool a2)
{
	loadCache_char_subroutine((int*)a1, a2);
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
void JUTCacheFont::loadCache_string_size(const char*, u32, bool)
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
void JUTCacheFont::unlockCache_string_size(const char*, u32)
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
	int* piVar3 = (int*)mCacheBuffer;
	for (int uVar2 = 0; uVar2 < mCachePage; uVar2++) {
		int iVar1;
		if (uVar2 == 0) {
			iVar1 = 0;
		} else {
			iVar1 = (int)piVar3 - _94;
		}
		*piVar3 = iVar1;
		if (uVar2 == mCachePage - 1) {
			iVar1 = 0;
		} else {
			iVar1 = (int)piVar3 + _94;
		}
		piVar3[1] = iVar1;
		piVar3    = (int*)((int)piVar3 + _94);
	}
	_A8 = (int)piVar3 - _94;
	_A4 = (TGlyphCacheInfo*)mCacheBuffer;
	_9C = nullptr;
	_A0 = nullptr;
}

/*
 * --INFO--
 * Address:	80034E98
 * Size:	000044
 */
void JUTCacheFont::unlink(TGlyphCacheInfo* cacheInfo)
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
void JUTCacheFont::prepend(TGlyphCacheInfo* cacheInfo)
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
