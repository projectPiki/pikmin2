#include "Dolphin/gx.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "JSystem/JUtility/JUTFont.h"
#include "types.h"

/*
 * --INFO--
 * Address:	80033F94
 * Size:	000090
 * __ct__12JUTCacheFontFPC7ResFONTUlP7JKRHeap
 */
JUTCacheFont::JUTCacheFont(const ResFONT* resource, u32 size, JKRHeap* heap)
    : JUTResFont()
{
	initialize_state();
	JUTResFont::initialize_state();
	JUTFont::initialize_state();
	initiate(resource, nullptr, size, heap);
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
	if (mIsHeapBuffer) {
		delete[] mCacheBuffer;
	}
	delete mAramBlock;
	delete mInfoBlock;
	delete mMemBlocks;
	delete mWidthBlockBuffer;
	delete mGlyphBlockBuffer;
	delete mMapBlockBuffer;
}

/*
 * --INFO--
 * Address:	8003413C
 * Size:	00003C
 */
void JUTCacheFont::initialize_state()
{
	mIsHeapBuffer     = false;
	mCacheBuffer      = nullptr;
	mAramBlock        = nullptr;
	mInfoBlock        = nullptr;
	mWidthBlockBuffer = nullptr;
	mGlyphBlockBuffer = nullptr;
	mMapBlockBuffer   = nullptr;
	mMemBlocks        = nullptr;
	mPagingType       = CFPAGETYPE_Unk0;
	mMaxSheetSize     = 0;
	mCacheBuffer      = nullptr;
	mStartPage        = nullptr;
	mEndPage          = nullptr;
}

/*
 * --INFO--
 * Address:	80034178
 * Size:	000188
 */
bool JUTCacheFont::getMemorySize(const ResFONT* resource, u16* widthBlocksCount, u32* widthBlocksSize, u16* glyphBlocksCount,
                                 u32* glyphBlocksSize, u16* mapBlocksCount, u32* mapBlocksSize, u32* maxPageByteSize)
{
	if (!resource) {
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

	if (widthBlocksCount) {
		*widthBlocksCount = widBlockCount;
	}

	if (glyphBlocksCount) {
		*glyphBlocksCount = glyBlockCount;
	}

	if (mapBlocksCount) {
		*mapBlocksCount = mapBlockCount;
	}

	if (widthBlocksSize) {
		*widthBlocksSize = totalWidSize;
	}

	if (glyphBlocksSize) {
		*glyphBlocksSize = totalGlySize;
	}

	if (mapBlocksSize) {
		*mapBlocksSize = totalMapSize;
	}

	if (maxPageByteSize) {
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
bool JUTCacheFont::initiate(const ResFONT* resource, void* buffer, u32 size, JKRHeap* heap)
{
	if (!internal_initiate(resource, buffer, size, heap)) {
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
bool JUTCacheFont::internal_initiate(const ResFONT* resource, void* buffer, u32 size, JKRHeap* heap)
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
	if (!allocArea(buffer, size, heap)) {
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
bool JUTCacheFont::allocArea(void* buffer, u32 size, JKRHeap* heap)
{
	mInfoBlock = (ResFONT::InfoBlock*)new (heap, 0) ResFONT();
	if (!mInfoBlock) {
		return false;
	}
	if (mWidthBlocksSize != 0) {
		mWidthBlockBuffer = new (heap, 0) u8[mWidthBlocksSize];
		if (!mWidthBlockBuffer) {
			return false;
		}
	}
	if (mGlyphBlockCount != 0) {
		mGlyphBlockBuffer = new (heap, 0) u8[mGlyphBlockCount << 5];
		if (!mGlyphBlockBuffer) {
			return false;
		}
		mAramBlock = JKRAram::sAramObject->mAramHeap->alloc(mGlyphBlocksSize - (mGlyphBlockCount * sizeof(ResFONT::GlyphBlock)),
		                                                    JKRAramHeap::AM_Head);
		if (!mAramBlock) {
			return false;
		}
	}
	if (mMapBlocksSize != 0) {
		mMapBlockBuffer = new (heap, 0) u8[mMapBlocksSize];
		if (!mMapBlockBuffer) {
			return false;
		}
	}

	mPageSize       = mMaxSheetSize + 0x40;
	mCachePageCount = size / mPageSize;
	u32 bufSize     = mPageSize * mCachePageCount;
	if (mCachePageCount == 0) {
		return false;
	}
	if (buffer) {
		mCacheBuffer  = buffer;
		mIsHeapBuffer = false;
	} else {
		mCacheBuffer = new (heap, 0x20) u8[bufSize];
		if (mCacheBuffer == nullptr) {
			return false;
		}
		mIsHeapBuffer = true;
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
			mGlyphBlocks[i] = (ResFONT::GlyphBlock*)&(((u8*)mCacheBuffer)[mPageSize * i]);
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
	int widthNum                  = 0;
	int glyphNum                  = 0;
	int mapNum                    = 0;
	ResFONT::WidthBlock* widthBuf = (ResFONT::WidthBlock*)mWidthBlockBuffer;
	ResFONT::GlyphBlock* glyphBuf = (ResFONT::GlyphBlock*)mGlyphBlockBuffer;
	ResFONT::MapBlock* mapBuf     = (ResFONT::MapBlock*)mMapBlockBuffer;
	u32 aramAddress               = mAramBlock->getAddress();
	mMaxCode                      = 0xffff;
	const int* data               = (int*)mResource->mData;

	for (int i = 0; i < mResource->mNumBlocks; i++) {
		switch (*data) {
		case 'INF1':
			memcpy(mInfoBlock, data, 0x20);
			mIsLeadByte = &JUTResFont::saoAboutEncoding_[mInfoBlock->mFontType];
			break;

		case 'WID1':
			memcpy(widthBuf, data, data[1]);
			mWidthBlocks[widthNum] = widthBuf;
			widthBuf               = (ResFONT::WidthBlock*)((u8*)widthBuf + data[1]);
			widthNum++;
			break;

		case 'GLY1':
			memcpy(glyphBuf, data, 0x20);
			JKRAramBlock* block
			    = JKRAram::mainRamToAram((u8*)data + 0x20, aramAddress, data[1] - 0x20, Switch_0, 0, nullptr, 0xffffffff, nullptr);
			JUT_ASSERTLINE(477, block, "%s", "trouble occurred in JKRMainRamToAram.");

			glyphBuf->mMagic = aramAddress;
			if (glyphBuf->mTextureSize > mMaxSheetSize) {
				mMaxSheetSize = glyphBuf->mTextureSize;
			}
			mGlyphBlocks[glyphNum] = glyphBuf;
			glyphNum++;
			glyphBuf++;
			aramAddress = data[1] + aramAddress - 0x20;
			break;

		case 'MAP1':
			memcpy(mapBuf, data, data[1]);
			mMapBlocks[mapNum] = mapBuf;
			if (mMaxCode > mMapBlocks[mapNum]->mStartCode) {
				mMaxCode = mMapBlocks[mapNum]->mStartCode;
			}
			mapNum++;
			mapBuf = (ResFONT::MapBlock*)((u8*)mapBuf + data[1]);
			break;

		default:
			JUTReportConsole("Unknown data block\n");
			break;
		}

		data = (int*)((u8*)data + data[1]);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
JUTCacheFont::TGlyphCacheInfo* JUTCacheFont::determineBlankPage()
{
	TGlyphCacheInfo* currPage = getCurrPage();
	if (currPage) {
		mCurrPage                 = currPage->mNext;
		TGlyphCacheInfo* nextPage = currPage->mNext;
		if (!nextPage) {
			mEndPageAddr = nullptr;
		} else {
			nextPage->mPrev = nullptr;
		}
		return currPage;
	}

	TGlyphCacheInfo* endPage = mEndPage;
	while (endPage) {
		TGlyphCacheInfo* prev = endPage->mPrev;
		if (endPage->mFontType == OS_FONT_ENCODE_ANSI) {
			unlink(endPage);
			mBlankPageCount++;
			return endPage;
		}
		endPage = prev;
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
void JUTCacheFont::getGlyphFromAram(JUTCacheFont::TGlyphCacheInfo* info, JUTCacheFont::TCachePage* page, int* code, int* texPageID)
{
	memcpy(page, info, sizeof(TGlyphCacheInfo));
	prepend(page);
	int cellCount = page->mNumRows * page->mNumCols;
	int pageNum   = *code / cellCount;
	page->mStartCode += pageNum * cellCount;
	u16 lastCode   = page->mStartCode + cellCount - 1;
	page->mEndCode = page->mEndCode < lastCode ? page->mEndCode : lastCode;
	*texPageID     = pageNum;
	*code -= pageNum * cellCount;
	u8* image     = getImage(page);
	u8* addr      = JKRAram::aramToMainRam((u32)info->mPrev + page->mPageSize * pageNum, image, page->mPageSize, Switch_0, 0, nullptr,
                                      0xFFFFFFFF, nullptr);
	GXTexObj* obj = getTexObj(page);
	GXInitTexObj(obj, image, page->mTexWidth, page->mTexHeight, (GXTexFmt)page->mTexFormat, GX_CLAMP, GX_CLAMP, GX_FALSE);
	GXInitTexObjLOD(obj, GX_LINEAR, GX_LINEAR, 0.0f, 0.0f, 0.0f, GX_FALSE, GX_FALSE, GX_ANISO_1);
}

/*
 * --INFO--
 * Address:	800349F4
 * Size:	0000BC
 */
void JUTCacheFont::loadImage(int code, _GXTexMapID id)
{
	TGlyphCacheInfo* cachePage = loadCache_char_subroutine(&code, false);
	if (cachePage) {
		mWidth  = cachePage->mCellWidth * (code % (int)cachePage->mNumRows);
		mHeight = cachePage->mCellHeight * (code / cachePage->mNumRows);
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
JUTCacheFont::TGlyphCacheInfo* JUTCacheFont::loadCache_char_subroutine(int* code, bool isSJIS)
{
	TCachePage* outPage = nullptr;
	for (TCachePage* page = (TCachePage*)mStartPage; page; page = (TCachePage*)page->mNext) {
		if (page->mStartCode <= *code && *code <= page->mEndCode) {
			outPage = page;
			*code -= page->mStartCode;
			break;
		}
	}

	if (!outPage) {
		int i = 0;
		for (; i < mGlyphBlockCount; i++) {
			if (mGlyphBlocks[i]->mStartCode <= *code && *code <= mGlyphBlocks[i]->mEndCode) {
				*code -= mGlyphBlocks[i]->mStartCode;
				break;
			}
		}
		if (i < mGlyphBlockCount) {
			TCachePage* blankPage = (TCachePage*)determineBlankPage();
			if (blankPage == nullptr) {
				return nullptr;
			}
			int texPageIdx;
			getGlyphFromAram((JUTCacheFont::TGlyphCacheInfo*)mGlyphBlocks[i], blankPage, code, &texPageIdx);
			mTexPageIdx = texPageIdx;
			_66         = i;
			outPage     = blankPage;
		} else {
			return nullptr;
		}
	}
	if (isSJIS) {
		outPage->mFontType = OS_FONT_ENCODE_SJIS;
	}
	return outPage;
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
bool JUTCacheFont::loadCache_string(const char* str, bool isSJIS)
{
	int curChar;
	do {
		curChar = (u8)str[0];
		if (isLeadByte(curChar)) {
			str++;
			curChar = ((curChar << 8) & ~0xFF) | ((u8)str[0]);
		}
		if (curChar) {
			int code     = getFontCode(curChar);
			int subCheck = (bool)loadCache_char_subroutine(&code, isSJIS);
			if (subCheck == 0) {
				return false;
			}
			str++;
			continue;
		}
		break;
	} while (true);

	return true;
}

/*
 * --INFO--
 * Address:	80034E10
 * Size:	000088
 */
void JUTCacheFont::invalidiateAllCache()
{
	int* bufAddr = (int*)mCacheBuffer; // treat as TGlyphCacheInfo
	for (int i = 0; i < mCachePageCount; i++) {
		int prev;
		if (i == 0) {
			prev = 0;
		} else {
			prev = (int)bufAddr - mPageSize;
		}
		bufAddr[0] = prev; // mPrev

		int next;
		if (i == mCachePageCount - 1) {
			next = 0;
		} else {
			next = (int)bufAddr + mPageSize;
		}
		bufAddr[1] = next; // mNext
		bufAddr    = (int*)((int)bufAddr + mPageSize);
	}

	mEndPageAddr = (void*)((int)bufAddr - mPageSize);
	mCurrPage    = (TGlyphCacheInfo*)mCacheBuffer;
	mStartPage   = nullptr;
	mEndPage     = nullptr;
}

/*
 * --INFO--
 * Address:	80034E98
 * Size:	000044
 */
void JUTCacheFont::unlink(TGlyphCacheInfo* cacheInfo)
{
	if (!cacheInfo->mPrev) {
		mStartPage = cacheInfo->mNext;
	} else {
		cacheInfo->mPrev->mNext = cacheInfo->mNext;
	}
	if (!cacheInfo->mNext) {
		mEndPage = cacheInfo->mPrev;
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
	TGlyphCacheInfo* oldHead = mStartPage;
	mStartPage               = cacheInfo;
	cacheInfo->mPrev         = nullptr;
	cacheInfo->mNext         = oldHead;
	if (!oldHead) {
		mEndPage = cacheInfo;
	} else {
		oldHead->mPrev = cacheInfo;
	}
}
