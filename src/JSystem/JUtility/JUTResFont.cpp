#include "Dolphin/gx.h"
#include "JSystem/JUtility/JUTFont.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "types.h"

JUTFont::IsLeadByte const JUTResFont::saoAboutEncoding_[3]
    = { JUTFont::isLeadByte_1Byte, JUTFont::isLeadByte_2Byte, JUTFont::isLeadByte_ShiftJIS };

/**
 * @note Address: 0x80031180
 * @note Size: 0x4C
 * Matches
 */
JUTResFont::JUTResFont()
{
	initialize_state();
	JUTFont::initialize_state();
}

/**
 * @note Address: 0x800311CC
 * @note Size: 0x74
 * Matches
 */
JUTResFont::JUTResFont(const ResFONT* resource, JKRHeap* heap)
{
	initialize_state();
	JUTFont::initialize_state();
	JUTResFont::initiate(resource, heap);
}

/**
 * @note Address: 0x80031240
 * @note Size: 0x8C
 * Matches
 */
JUTResFont::~JUTResFont()
{
	if (mIsValid) {
		deleteMemBlocks_ResFont();
		initialize_state();
		JUTFont::initialize_state();
	}
}

/**
 * @note Address: 0x800312CC
 * @note Size: 0x24
 * Matches
 */
void JUTResFont::deleteMemBlocks_ResFont() { delete[] mMemBlocks; }

/**
 * @note Address: 0x800312F0
 * @note Size: 0x2C
 * Matches
 */
void JUTResFont::initialize_state()
{
	mResource    = nullptr;
	mMemBlocks   = nullptr;
	mWidthBlocks = nullptr;
	mGlyphBlocks = nullptr;
	mMapBlocks   = nullptr;
	mWidth       = 0;
	mHeight      = 0;
	mTexPageIdx  = -1;
}

/**
 * @note Address: 0x8003131C
 * @note Size: 0x80
 * Matches
 */
bool JUTResFont::initiate(const ResFONT* resource, JKRHeap* heap)
{
	if (!protected_initiate(resource, heap)) {
		deleteMemBlocks_ResFont();
		initialize_state();
		JUTFont::initialize_state();
		mIsValid = false;
		return false;
	}
	return true;
}

/**
 * @note Address: 0x8003139C
 * @note Size: 0x138
 */
bool JUTResFont::protected_initiate(const ResFONT* resource, JKRHeap* heap)
{
	void** blocks;

	deleteMemBlocks_ResFont();
	initialize_state();
	JUTFont::initialize_state();

	if (!resource) {
		return false;
	}

	mResource = resource;
	mIsValid  = true;

	countBlock();
	u32 blockNum = mWidthBlockCount + mGlyphBlockCount + mMapBlockCount;

	mMemBlocks = new (heap, 0) void*[blockNum];
	blocks     = mMemBlocks;
	if (mMemBlocks == nullptr) {
		return false;

	} else {
		if (mWidthBlockCount != 0) {
			mWidthBlocks = (ResFONT::WidthBlock**)blocks;
			blocks += mWidthBlockCount;
		}

		if (mGlyphBlockCount != 0) {
			mGlyphBlocks = (ResFONT::GlyphBlock**)blocks;
			blocks += mGlyphBlockCount;
		}

		if (mMapBlockCount != 0) {
			mMapBlocks = (ResFONT::MapBlock**)blocks;
		}
	}

	setBlock();
	return true;
}

/**
 * @note Address: 0x800314D4
 * @note Size: 0x10C
 * Matches
 */
void JUTResFont::countBlock()
{
	mWidthBlockCount = 0;
	mGlyphBlockCount = 0;
	mMapBlockCount   = 0;

	BlockHeader* data = (BlockHeader*)mResource->mData;
	for (u32 i = 0; i < mResource->mNumBlocks; i++, data = (BlockHeader*)data->getNext()) {
		int magic = data->mMagic;
		switch (magic) {
		case 'WID1':
			mWidthBlockCount++;
			break;

		case 'GLY1':
			mGlyphBlockCount++;
			break;

		case 'MAP1':
			mMapBlockCount++;
			break;

		case 'INF1':
			// mInfoBlock;
			break;

		default:
			JUTReportConsole("JUTResFont: Unknown data block\n");
		}
	};
}

/**
 * @note Address: 0x800315E0
 * @note Size: 0x13C
 */
void JUTResFont::setBlock()
{
	int widthNum, glyphNum, mapNum;
	widthNum = glyphNum = mapNum = 0;
	mMaxCode                     = -1;

	BlockHeader* data = (BlockHeader*)mResource->mData;
	for (u32 i = 0; i < mResource->mNumBlocks; i++, data = (BlockHeader*)data->getNext()) {
		int magic = data->mMagic;
		switch (magic) {
		case 'INF1':
			mInfoBlock  = (ResFONT::InfoBlock*)data;
			mIsLeadByte = (IsLeadByte*)&saoAboutEncoding_[mInfoBlock->mFontType];
			break;

		case 'WID1':
			mWidthBlocks[widthNum] = (ResFONT::WidthBlock*)data;
			widthNum++;
			break;

		case 'GLY1':
			mGlyphBlocks[glyphNum] = (ResFONT::GlyphBlock*)data;
			glyphNum++;
			break;

		case 'MAP1':
			mMapBlocks[mapNum] = (ResFONT::MapBlock*)data;
			if (mMaxCode > mMapBlocks[mapNum]->mStartCode) {
				mMaxCode = mMapBlocks[mapNum]->mStartCode;
			}
			mapNum++;
			break;

		default:
			JUTReportConsole("Unknown data block\n");
			break;
		}
	}
}

/**
 * @note Address: 0x8003171C
 * @note Size: 0xF8
 * Matches
 */
void JUTResFont::setGX()
{
	GXSetNumChans(1);
	GXSetNumTevStages(1);
	GXSetNumTexGens(1);

	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);

	GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);

	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGBX8, 15);

	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
}

/**
 * @note Address: 0x80031814
 * @note Size: 0x240
 */
void JUTResFont::setGX(JUtility::TColor color0, JUtility::TColor color1)
{
	if (u32(color0) == 0 && u32(color1) == -1) {
		setGX();

	} else {
		GXSetNumChans(1);
		GXSetNumTevStages(2);
		GXSetNumTexGens(1);

		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
		GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);

		GXSetTevColor(GX_TEVREG0, color0);
		GXSetTevColor(GX_TEVREG1, color1);

		GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_C0, GX_CC_C2, GX_CC_TEXC, GX_CC_ZERO);
		GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_A0, GX_CA_A1, GX_CA_TEXA, GX_CA_ZERO);
		GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);

		GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
		GXSetTevColorIn(GX_TEVSTAGE1, GX_CC_ZERO, GX_CC_CPREV, GX_CC_RASC, GX_CC_ZERO);
		GXSetTevAlphaIn(GX_TEVSTAGE1, GX_CA_ZERO, GX_CA_APREV, GX_CA_RASA, GX_CA_ZERO);
		GXSetTevColorOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevAlphaOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);

		GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_S16, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGBX8, 15);

		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	}
}

/**
 * @note Address: 0x80031A54
 * @note Size: 0x404
 */
f32 JUTResFont::drawChar_scale(f32 posX, f32 posY, f32 width, f32 height, int character, bool flag)
{
	JUTFont::TWidth characterWidth;
	f32 minPositionX, minPositionY;
	f32 scaledHeight;
	f32 maxPositionX;

	loadFont(character, GX_TEXMAP0, &characterWidth);

	if ((mIsFixed) || (!flag)) {
		minPositionX = posX;
	} else {
		minPositionX = (posX - characterWidth.w0 * (width / getCellWidth()));
	}

	f32 returnValue = mFixedWidth * (width / getCellWidth());
	if (!mIsFixed) {
		if (!flag) {
			returnValue = (characterWidth.w1 + characterWidth.w0) * (width / getCellWidth());
		} else {
			returnValue = characterWidth.w1 * (width / getCellWidth());
		}
	}

	maxPositionX = minPositionX + width;
	minPositionY = posY - getAscent() * (height / getHeight());

	scaledHeight = height / getHeight();

	f32 descent      = getDescent();
	f32 maxPositionY = descent * scaledHeight + posY;

	// glyph section
	ResFONT::GlyphBlock* usedGlyphs = mGlyphBlocks[mCurrentGlyphBlockIndex];
	u16 textureWidth                = usedGlyphs->mTextureWidth;
	u16 textureHeight               = usedGlyphs->mTextureHeight;
	int glyphWidth                  = mWidth;
	int glyphHeight                 = mHeight;
	int shiftWidth                  = (glyphWidth + usedGlyphs->mCellWidth) << 15;
	int minTextureX                 = (glyphWidth << 15) / textureWidth;
	int minTextureY                 = (glyphHeight << 15) / textureHeight;
	int shiftHeight                 = glyphHeight + usedGlyphs->mCellHeight << 15;
	s32 maxTextureX                 = shiftWidth / textureWidth;
	s32 maxTextureY                 = shiftHeight / textureHeight;

	// end glyph section
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 z = 0.0f;

	// Bottom left
	GXPosition3f32(minPositionX, minPositionY, z);
	GXColor1u32(mColor1);
	GXTexCoord2s16(minTextureX, minTextureY);

	// Bottom right
	GXPosition3f32(maxPositionX, minPositionY, z);
	GXColor1u32(mColor2);
	GXTexCoord2s16(maxTextureX, minTextureY);

	// Top right
	GXPosition3f32(maxPositionX, maxPositionY, z);
	GXColor1u32(mColor4);
	GXTexCoord2s16(maxTextureX, maxTextureY);

	// Top left
	GXPosition3f32(minPositionX, maxPositionY, z);
	GXColor1u32(mColor3);
	GXTexCoord2s16(minTextureX, maxTextureY);

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_S16, 0);

	return returnValue;
}

/**
 * @note Address: 0x80031ECC
 * @note Size: 0x88
 */
void JUTResFont::loadFont(int chr, GXTexMapID id, JUTFont::TWidth* width)
{
	if (width) {
		getWidthEntry(chr, width);
	}

	int fontcode = getFontCode(chr);
	loadImage(fontcode, id);
}

/**
 * @note Address: 0x80031F54
 * @note Size: 0xC0
 */
void JUTResFont::getWidthEntry(int chr, JUTFont::TWidth* width) const
{
	int fontcode                      = getFontCode(chr);
	width->w0                         = 0;
	ResFONT::WidthBlock** widthblocks = mWidthBlocks;
	int cellwidth                     = mInfoBlock->mLeading;
	width->w1                         = mInfoBlock->mWidth;

	for (int i = 0; i < mWidthBlockCount; i++) {

		ResFONT::WidthBlock* tmp2 = mWidthBlocks[i];
		if (tmp2->mStartCode <= fontcode && fontcode <= tmp2->mEndCode) {

			u8* ptr   = &widthblocks[i]->mChunkNum[(fontcode - widthblocks[i]->mStartCode) * 2];
			width->w0 = ptr[0];
			width->w1 = ptr[1];
			break;
		}
	}
	return;
}

/**
 * @note Address: 0x80032014
 * @note Size: 0x4C
 */
int JUTResFont::getCellWidth() const
{
	ResFONT::GlyphBlock* glyph;
	ResFONT::GlyphBlock** glyphs;

	glyphs = mGlyphBlocks;
	if (glyphs) {
		glyph = *glyphs;
		if (glyph) {
			return glyph->mCellWidth;
		}
	}

	return getWidth();
}

/**
 * @note Address: 0x8003206C
 * @note Size: 0x4C
 */
int JUTResFont::getCellHeight() const
{
	ResFONT::GlyphBlock* glyph;
	ResFONT::GlyphBlock** glyphs;

	glyphs = mGlyphBlocks;
	if (glyphs) {
		glyph = *glyphs;
		if (glyph) {
			return glyph->mCellHeight;
		}
	}

	return getHeight();
}

/**
 * @note Address: 0x800320B8
 * @note Size: 0x30
 */
bool JUTResFont::isLeadByte(int chr) const { return (*mIsLeadByte)(chr); }

/**
 * @note Address: 0x800320E8
 * @note Size: 0x1AC
 */
int JUTResFont::getFontCode(int character) const
{
	static const u16 halfToFull[95] = {
		0x8140, 0x8149, 0x8168, 0x8194, 0x8190, 0x8193, 0x8195, 0x8166, 0x8169, 0x816A, 0x8196, 0x817B, 0x8143, 0x817C, 0x8144, 0x815E,
		0x824F, 0x8250, 0x8251, 0x8252, 0x8253, 0x8254, 0x8255, 0x8256, 0x8257, 0x8258, 0x8146, 0x8147, 0x8183, 0x8181, 0x8184, 0x8148,
		0x8197, 0x8260, 0x8261, 0x8262, 0x8263, 0x8264, 0x8265, 0x8266, 0x8267, 0x8268, 0x8269, 0x826A, 0x826B, 0x826C, 0x826D, 0x826E,
		0x826F, 0x8270, 0x8271, 0x8272, 0x8273, 0x8274, 0x8275, 0x8276, 0x8277, 0x8278, 0x8279, 0x816D, 0x818F, 0x816E, 0x814F, 0x8151,
		0x8165, 0x8281, 0x8282, 0x8283, 0x8284, 0x8285, 0x8286, 0x8287, 0x8288, 0x8289, 0x828A, 0x828B, 0x828C, 0x828D, 0x828E, 0x828F,
		0x8290, 0x8291, 0x8292, 0x8293, 0x8294, 0x8295, 0x8296, 0x8297, 0x8298, 0x8299, 0x829A, 0x816F, 0x8162, 0x8170, 0x8160,
	};

	int fontCode = mInfoBlock->mDefaultCode;
	if (getFontType() == 2 && mMaxCode >= 0x8000U && character >= 0x20 && character < 0x7FU) {
		character = halfToFull[character - 32];
	}

	int mapBlockIndex = 0;
	for (int i = mMapBlockCount; i > 0; mapBlockIndex++, i--) {
		if (mMapBlocks[mapBlockIndex]->mStartCode <= character && character <= mMapBlocks[mapBlockIndex]->mEndCode) {
			ResFONT::MapBlock* currentMapBlock = mMapBlocks[mapBlockIndex];

			// Check the mapping method of the current map block
			if (currentMapBlock->mMappingMethod == ResFONT::MapBlock::MM_Direct) {
				// For direct mapping, the font code is the difference between the character and the start code
				fontCode = character - currentMapBlock->mStartCode;

			} else if (currentMapBlock->mMappingMethod == ResFONT::MapBlock::MM_Indexed) {
				// For indexed mapping, the font code is found at the index (character - start code) in the leading array
				fontCode = *(&mMapBlocks[mapBlockIndex]->mLeading + ((character - mMapBlocks[mapBlockIndex]->mStartCode)));

			} else if (currentMapBlock->mMappingMethod == ResFONT::MapBlock::MM_BinarySearch) {
				// For binary search mapping, we need to find the font code in the leading array using binary search
				u16* leadingTemp = &currentMapBlock->mLeading;
				int lowerBound   = 0;
				int upperBound   = currentMapBlock->mNumEntries - 1;

				while (upperBound >= lowerBound) {
					// Calculate the midpoint
					u32 tempSum  = upperBound + lowerBound;
					int midPoint = (int)((tempSum >> 0x1FU) + upperBound + lowerBound) >> 1;

					// If the character is less than the value at the midpoint, search the left half
					if (character < leadingTemp[midPoint * 2]) {
						upperBound = midPoint - 1;
					}
					// If the character is more than the value at the midpoint, search the right half
					else if (character > leadingTemp[midPoint * 2]) {
						lowerBound = midPoint + 1;
					}
					// If the character is equal to the value at the midpoint, we found the font code
					else {
						fontCode = leadingTemp[midPoint * 2 + 1];
						break;
					}
				}

			} else if (currentMapBlock->mMappingMethod == ResFONT::MapBlock::MM_SjisConversion) {
				// For SJIS conversion, we need to convert the character using the SJIS conversion method
				u16* leadingTemp = nullptr;
				if (currentMapBlock->mNumEntries == 1) {
					leadingTemp = &currentMapBlock->mLeading;
				}
				fontCode = JUTResFont::convertSjis(character, leadingTemp);
			}

			break;
		}
	}

	return fontCode;
}

/**
 * @note Address: 0x800322A0
 * @note Size: 0x180
 */
void JUTResFont::loadImage(int characterCode, GXTexMapID textureMapID)
{
	int glyphBlockIndex = 0;
	for (; glyphBlockIndex < mGlyphBlockCount; glyphBlockIndex++) {
		if (mGlyphBlocks[glyphBlockIndex]->mStartCode <= characterCode && characterCode <= mGlyphBlocks[glyphBlockIndex]->mEndCode) {
			characterCode -= mGlyphBlocks[glyphBlockIndex]->mStartCode;
			break;
		}
	}

	if (glyphBlockIndex == mGlyphBlockCount)
		return;

	s32 totalCellsInPage = mGlyphBlocks[glyphBlockIndex]->mNumRows * mGlyphBlocks[glyphBlockIndex]->mNumColumns;
	s32 pageIndex        = characterCode / totalCellsInPage;
	s32 cellIndexInPage  = characterCode % totalCellsInPage;
	s32 cellColumn       = (cellIndexInPage % mGlyphBlocks[glyphBlockIndex]->mNumRows);
	s32 cellRow          = (cellIndexInPage / mGlyphBlocks[glyphBlockIndex]->mNumRows);
	mWidth               = cellColumn * mGlyphBlocks[glyphBlockIndex]->mCellWidth;
	mHeight              = cellRow * mGlyphBlocks[glyphBlockIndex]->mCellHeight;

	if (pageIndex != mTexPageIdx || glyphBlockIndex != mCurrentGlyphBlockIndex) {
		GXInitTexObj(&mTexObj, &mGlyphBlocks[glyphBlockIndex]->mData[pageIndex * mGlyphBlocks[glyphBlockIndex]->mTextureSize],
		             mGlyphBlocks[glyphBlockIndex]->mTextureWidth, mGlyphBlocks[glyphBlockIndex]->mTextureHeight,
		             (GXTexFmt)mGlyphBlocks[glyphBlockIndex]->mTextureFormat, GX_CLAMP, GX_CLAMP, 0);

		GXInitTexObjLOD(&mTexObj, GX_LINEAR, GX_LINEAR, 0.0f, 0.0f, 0.0f, 0U, 0U, GX_ANISO_1);
		mTexPageIdx             = pageIndex;
		mCurrentGlyphBlockIndex = glyphBlockIndex;
	}

	GXLoadTexObj(&mTexObj, textureMapID);
}

/**
 * @note Address: 0x80032420
 * @note Size: 0x44
 */
int JUTResFont::convertSjis(int inputCharacter, u16* inputLead) const
{
	// Extract the lower byte of the input character
	int outputCharacter = (u8)inputCharacter;

	// Extract the upper byte of the input character
	inputCharacter = ((inputCharacter >> 8) & 0xFF);

	// Adjust the output character by subtracting 0x40
	outputCharacter -= 0x40;

	// If the output character is greater than or equal to 0x40, decrement it
	if (outputCharacter >= 0x40) {
		outputCharacter--;
	}

	// Set the default lead value
	u16 lead = 0x31c;

	// If an input lead is provided, use it instead
	if (inputLead) {
		lead = *inputLead;
	}

	// Calculate the final character code
	return outputCharacter + (inputCharacter - 0x88) * 0xbc + -0x5e + lead;
}
