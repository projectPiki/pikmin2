#include "Dolphin/gx.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "JSystem/JUtility/JUTFont.h"
#include "types.h"

/**
 * @note Address: 0x80033F94
 * @note Size: 0x90
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

/**
 * @note Address: 0x80034024
 * @note Size: 0x94
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

/**
 * @note Address: 0x800340B8
 * @note Size: 0x84
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

/**
 * @note Address: 0x8003413C
 * @note Size: 0x3C
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

/**
 * @note Address: 0x80034178
 * @note Size: 0x188
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

/**
 * @note Address: 0x80034300
 * @note Size: 0xB4
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

/**
 * @note Address: 0x800343B4
 * @note Size: 0x184
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

/**
 * @note Address: 0x80034538
 * @note Size: 0x1C4
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

/**
 * @note Address: 0x800346FC
 * @note Size: 0xE8
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

/**
 * @note Address: 0x800347E4
 * @note Size: 0x210
 */
void JUTCacheFont::setBlock()
{
	// Initialize variables
	int widthNum = 0;
	int glyphNum = 0;
	int mapNum   = 0;

	// Cast block buffers to their respective types
	ResFONT::WidthBlock* widthBuf = (ResFONT::WidthBlock*)mWidthBlockBuffer;
	ResFONT::GlyphBlock* glyphBuf = (ResFONT::GlyphBlock*)mGlyphBlockBuffer;
	ResFONT::MapBlock* mapBuf     = (ResFONT::MapBlock*)mMapBlockBuffer;

	// Get ARAM address
	u32 aramAddress = mAramBlock->getAddress();

	// Set max code to maximum possible value
	mMaxCode = 0xffff;

	// Cast resource data to int pointer
	const int* data = (int*)mResource->mData;

	// Loop through all blocks in the resource
	for (int i = 0; i < mResource->mNumBlocks; i++) {
		switch (*data) {
		case 'INF1':
			// Copy data to info block and set lead byte
			memcpy(mInfoBlock, data, 0x20);
			mIsLeadByte = &JUTResFont::saoAboutEncoding_[mInfoBlock->mFontType];
			break;

		case 'WID1':
			// Copy data to width block and increment width block pointer and counter
			memcpy(widthBuf, data, data[1]);
			mWidthBlocks[widthNum] = widthBuf;
			widthBuf               = (ResFONT::WidthBlock*)((u8*)widthBuf + data[1]);
			widthNum++;
			break;

		case 'GLY1':
			// Copy data to glyph block and increment glyph block pointer and counter
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
			// Copy data to map block and increment map block pointer and counter
			memcpy(mapBuf, data, data[1]);
			mMapBlocks[mapNum] = mapBuf;
			if (mMaxCode > mMapBlocks[mapNum]->mStartCode) {
				mMaxCode = mMapBlocks[mapNum]->mStartCode;
			}
			mapNum++;
			mapBuf = (ResFONT::MapBlock*)((u8*)mapBuf + data[1]);
			break;

		default:
			// Report unknown data block
			JUTReportConsole("Unknown data block\n");
			break;
		}

		// Move to the next data block
		data = (int*)((u8*)data + data[1]);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
JUTCacheFont::TGlyphCacheInfo* JUTCacheFont::determineBlankPage()
{
	// Get the current page
	TGlyphCacheInfo* currPage = getCurrPage();
	if (currPage) {
		// If a current page exists, move to the next page
		mCurrPage = currPage->mNext;

		// Get the next page
		TGlyphCacheInfo* nextPage = currPage->mNext;
		if (!nextPage) {
			// If there is no next page, set the end page address to null
			mEndPageAddr = nullptr;
		} else {
			// If there is a next page, set its previous page to null
			nextPage->mPrev = nullptr;
		}

		// Return the current page
		return currPage;
	}

	// Get the end page
	TGlyphCacheInfo* endPage = mEndPage;
	while (endPage) {
		// Get the previous page
		TGlyphCacheInfo* prev = endPage->mPrev;

		// If the end page's font type is ANSI, unlink it and increment the blank page count
		if (endPage->mFontType == OS_FONT_ENCODE_ANSI) {
			unlink(endPage);
			mBlankPageCount++;
			return endPage;
		}

		// Move to the previous page
		endPage = prev;
	}

	// If no suitable page was found, return null
	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x120
 */
void JUTCacheFont::getGlyphFromAram(JUTCacheFont::TGlyphCacheInfo* glyphInfo, JUTCacheFont::TCachePage* cachePage, int* glyphCode,
                                    int* texturePageID)
{
	memcpy(cachePage, glyphInfo, sizeof(TGlyphCacheInfo));
	prepend(cachePage);

	int totalCells = cachePage->mNumRows * cachePage->mNumCols;
	int pageNumber = *glyphCode / totalCells;

	cachePage->mStartCode += pageNumber * totalCells;

	// Set the end code of the page to the smaller of the existing end code and the last code
	u16 lastCode        = cachePage->mStartCode + totalCells - 1;
	cachePage->mEndCode = cachePage->mEndCode < lastCode ? cachePage->mEndCode : lastCode;

	*texturePageID = pageNumber;
	*glyphCode -= pageNumber * totalCells;

	u8* imageData = getImage(cachePage);
	u8* addr = JKRAram::aramToMainRam((u32)glyphInfo->mPrev + cachePage->mPageSize * pageNumber, imageData, cachePage->mPageSize, Switch_0,
	                                  0, nullptr, 0xFFFFFFFF, nullptr);

	// Set the image data to the page
	GXTexObj* textureObject = getTexObj(cachePage);
	GXInitTexObj(textureObject, imageData, cachePage->mTexWidth, cachePage->mTexHeight, (GXTexFmt)cachePage->mTexFormat, GX_CLAMP, GX_CLAMP,
	             GX_FALSE);
	GXInitTexObjLOD(textureObject, GX_LINEAR, GX_LINEAR, 0.0f, 0.0f, 0.0f, GX_FALSE, GX_FALSE, GX_ANISO_1);
}

/**
 * @note Address: 0x800349F4
 * @note Size: 0xBC
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

/**
 * @note Address: 0x80034AB0
 * @note Size: 0x298
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
			mTexPageIdx             = texPageIdx;
			mCurrentGlyphBlockIndex = i;
			outPage                 = blankPage;
		} else {
			return nullptr;
		}
	}

	if (isSJIS) {
		outPage->mFontType = OS_FONT_ENCODE_SJIS;
	}

	return outPage;
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void JUTCacheFont::loadCache_char(int, bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80034D48
 * @note Size: 0xC8
 */
bool JUTCacheFont::loadCache_string(const char* str, bool isSJIS)
{
	int curChar;
	do {
		// Get the current character from the string
		curChar = (u8)str[0];

		// If the current character is the lead byte of a multibyte character
		if (isLeadByte(curChar)) {
			str++;
			// Combine the lead byte and the second byte to form the full character code
			curChar = ((curChar << 8) & ~0xFF) | ((u8)str[0]);
		}

		// If the character code is not zero (end of string)
		if (curChar) {
			// Get the font code for the current character
			int code = getFontCode(curChar);

			// Load the glyph for the character into the cache
			int subCheck = (bool)loadCache_char_subroutine(&code, isSJIS);

			// If the glyph could not be loaded into the cache
			if (subCheck == 0) {
				// Return false to indicate failure
				return false;
			}

			// Move to the next character in the string
			str++;
			continue;
		}

		// If the character code is zero (end of string), break the loop
		break;
	} while (true);

	// If the function has not returned yet, all glyphs were successfully loaded into the cache
	// Return true to indicate success
	return true;
}

/**
 * @note Address: 0x80034E10
 * @note Size: 0x88
 */
void JUTCacheFont::invalidiateAllCache()
{
	// Treat the cache buffer as an array of TGlyphCacheInfo and iterate over each page in the cache
	int* bufAddr = (int*)mCacheBuffer;
	for (int i = 0; i < mCachePageCount; i++) {
		// Set the previous page address
		int prev   = (i == 0) ? 0 : (int)bufAddr - mPageSize;
		bufAddr[0] = prev;

		// Set the next page address
		int next   = (i == mCachePageCount - 1) ? 0 : (int)bufAddr + mPageSize;
		bufAddr[1] = next;

		// Move to the next page
		bufAddr = (int*)((int)bufAddr + mPageSize);
	}

	// Set the end page address to the last page, set the current page to the first page, and initialize the start and end pages to null
	mEndPageAddr = (void*)((int)bufAddr - mPageSize);
	mCurrPage    = (TGlyphCacheInfo*)mCacheBuffer;
	mStartPage   = nullptr;
	mEndPage     = nullptr;
}

/**
 * @note Address: 0x80034E98
 * @note Size: 0x44
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

/**
 * @note Address: 0x80034EDC
 * @note Size: 0x2C
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
