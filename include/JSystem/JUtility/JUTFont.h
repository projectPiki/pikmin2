#ifndef _JSYSTEM_JUT_JUTFONT_H
#define _JSYSTEM_JUT_JUTFONT_H

#include "Dolphin/gx.h"
#include "JSystem/JUtility/TColor.h"
#include "string.h"

#define ASCII_PRINTABLE_MIN (0x20) // space
#define ASCII_PRINTABLE_MAX (0x80) // one more than last printable symbol (0x7F = delete)

struct JKRAramBlock;
struct JKRHeap;

struct BlockHeader {
	const BlockHeader* getNext() const { return reinterpret_cast<const BlockHeader*>(reinterpret_cast<const u8*>(this) + this->mSize); }
	inline static void advance(const BlockHeader** iterator)
	{
		*iterator = reinterpret_cast<const BlockHeader*>(reinterpret_cast<const u8*>(*iterator) + (*iterator)->mSize);
	}

	u32 mMagic; // _00
	u32 mSize;  // _04
};

struct ResFONT {
	// INF1, size: 0x14
	struct InfoBlock : public BlockHeader {
		// _00 = BlockHeader
		u16 mFontType;    // _08
		u16 mAscent;      // _0A
		u16 mDescent;     // _0C
		u16 mWidth;       // _0E
		u16 mLeading;     // _10
		u16 mDefaultCode; // _12
	};

	// WID1, size: 0x10
	struct WidthBlock : public BlockHeader {
		// _00 = BlockHeader
		u16 mStartCode;  // _08
		u16 mEndCode;    // _0A
		u8 mChunkNum[4]; // _0C
	};

	// MAP1, size: 0x14
	struct MapBlock : public BlockHeader {
		enum MappingMethod {
			MM_Direct         = 0,
			MM_SjisConversion = 1,
			MM_Indexed        = 2,
			MM_BinarySearch   = 3,
		};

		// _00 = BlockHeader
		u16 mMappingMethod; // _08
		u16 mStartCode;     // _0A
		u16 mEndCode;       // _0C
		u16 mNumEntries;    // _0E
		u16 mLeading;       // _10
	};

	// GLY1, size: 0x20
	struct GlyphBlock : public BlockHeader {
		// _00 = BlockHeader
		u16 mStartCode;     // _08
		u16 mEndCode;       // _0A
		u16 mCellWidth;     // _0C
		u16 mCellHeight;    // _0E
		u32 mTextureSize;   // _10
		u16 mTextureFormat; // _14
		u16 mNumRows;       // _16
		u16 mNumColumns;    // _18
		u16 mTextureWidth;  // _1A
		u16 mTextureHeight; // _1C
		u16 mPadding;       // _1E
		u8 mData[];         // _20
	};

	u64 mMagic;        // _00
	u32 mFileSize;     // _08
	u32 mNumBlocks;    // _0C
	u8 mPadding[0x10]; // _10
	u8 mData[];        // _20
};

struct JUTFont {
	typedef bool (*IsLeadByte)(int);

	struct TWidth {
		u8 w0; // _00
		u8 w1; // _01
	};

	JUTFont();

	virtual ~JUTFont() { }                                                           // _08
	virtual void setGX() = 0;                                                        // _0C
	virtual void setGX(JUtility::TColor black, JUtility::TColor white) { setGX(); }; // _10
	virtual f32 drawChar_scale(f32, f32, f32, f32, int, bool) = 0;                   // _14
	virtual int getLeading() const                            = 0;                   // _18
	virtual int getAscent() const                             = 0;                   // _1C
	virtual int getDescent() const                            = 0;                   // _20
	virtual int getHeight() const                             = 0;                   // _24
	virtual int getWidth() const                              = 0;                   // _28
	virtual void getWidthEntry(int, JUTFont::TWidth*) const   = 0;                   // _2C
	virtual int getCellWidth() const { return getWidth(); };                         // _30
	virtual int getCellHeight() const { return getHeight(); };                       // _34
	virtual int getFontType() const           = 0;                                   // _38
	virtual const ResFONT* getResFont() const = 0;                                   // _3C
	virtual bool isLeadByte(int) const        = 0;                                   // _40

	void initialize_state();
	void setCharColor(JUtility::TColor color);
	void setGradColor(JUtility::TColor bottomColor, JUtility::TColor topColor);
	f32 drawString_size_scale(f32 posX, f32 posY, f32 scaleX, f32 scaleY, const char* string, u32 length, bool unused);

	void drawString(int posX, int posY, const char* str, bool visible) { drawString_size(posX, posY, str, strlen(str), visible); }

	void drawString_size(int posX, int posY, const char* str, u32 len, bool visible)
	{
		drawString_size_scale(posX, posY, getWidth(), getHeight(), str, len, visible);
	}

	void drawString_scale(f32 posX, f32 posY, f32 width, f32 height, const char* str, bool visible)
	{
		drawString_size_scale(posX, posY, width, height, str, strlen(str), visible);
	}

	int getWidth(int i_no) const
	{
		TWidth width;
		getWidthEntry(i_no, &width);
		return width.w0;
	}

	bool isValid() const { return mIsValid; }
	bool isFixed() const { return mIsFixed; }
	int getFixedWidth() const { return mFixedWidth; }

	static bool isLeadByte_1Byte(int) { return false; }
	static bool isLeadByte_2Byte(int) { return true; }
	static bool isLeadByte_ShiftJIS(int c) { return (c >= 0x81 && c <= 0x9F) || (c >= 0xE0 && c <= 0xFC); }

	// _00 = VTBL
	bool mIsValid;            // _04
	bool mIsFixed;            // _05
	int mFixedWidth;          // _08
	JUtility::TColor mColor1; // _0C, bottom left
	JUtility::TColor mColor2; // _10, bottom right
	JUtility::TColor mColor3; // _14, top left
	JUtility::TColor mColor4; // _18, top right
};

struct JUTRomFont : public JUTFont {
	// @fabricatedName
	struct AboutEncoding {
		u32 mFontType;                  // _00
		u32 mDataSize;                  // _04
		IsLeadByte mIsLeadByteFunction; // _08
	};

	JUTRomFont();
	JUTRomFont(JKRHeap*);

	virtual ~JUTRomFont();                                                   // _08
	virtual void setGX();                                                    // _0C
	virtual f32 drawChar_scale(f32, f32, f32, f32, int, bool);               // _14
	virtual int getWidth() const { return spFontHeader_->width; };           // _28
	virtual int getLeading() const { return spFontHeader_->leading; };       // _18
	virtual int getAscent() const { return spFontHeader_->ascent; };         // _1C
	virtual int getDescent() const { return spFontHeader_->descent; };       // _20
	virtual int getHeight() const { return getAscent() + getDescent(); };    // _24
	virtual void getWidthEntry(int, JUTFont::TWidth*) const;                 // _2C
	virtual int getCellWidth() const { return spFontHeader_->cellWidth; };   // _30
	virtual int getCellHeight() const { return spFontHeader_->cellHeight; }; // _34
	virtual ResFONT* getResFont() const { return nullptr; };                 // _3C
	virtual int getFontType() const { return spAboutEncoding_->mFontType; }; // _38
	virtual bool isLeadByte(int) const;                                      // _40

	void initiate(JKRHeap*);
	void loadImage(JKRHeap*);

	static AboutEncoding* spAboutEncoding_;
	static OSFontHeader* spFontHeader_;
	static u32 suFontHeaderRefered_; // they misspelled referred
	static AboutEncoding saoAboutEncoding_[2];

	// _00     = VTBL
	// _00-_1C = JUTFont
};

/**
 * @size{0x70}
 */
struct JUTResFont : public JUTFont {
	JUTResFont();
	JUTResFont(const ResFONT*, JKRHeap*);

	virtual ~JUTResFont();                                                // _08
	virtual void setGX();                                                 // _0C
	virtual void setGX(JUtility::TColor, JUtility::TColor);               // _10
	virtual f32 drawChar_scale(f32, f32, f32, f32, int, bool);            // _14
	virtual int getDescent() const { return mInfoBlock->mDescent; };      // _20
	virtual int getHeight() const { return getAscent() + getDescent(); }; // _24
	virtual int getAscent() const { return mInfoBlock->mAscent; };        // _1C
	virtual int getWidth() const { return mInfoBlock->mWidth; };          // _28
	virtual void getWidthEntry(int, JUTFont::TWidth*) const;              // _2C
	virtual int getCellWidth() const;                                     // _30
	virtual int getCellHeight() const;                                    // _34
	virtual int getFontType() const { return mInfoBlock->mFontType; };    // _38
	virtual const ResFONT* getResFont() const { return mResource; };      // _3C
	virtual int getLeading() const { return mInfoBlock->mLeading; };      // _18
	virtual bool isLeadByte(int) const;                                   // _40
	virtual void loadImage(int, GXTexMapID);                              // _44
	virtual void setBlock();                                              // _48

	int convertSjis(int, u16*) const;
	void countBlock();
	void deleteMemBlocks_ResFont();
	int getFontCode(int) const;
	void initialize_state();
	bool initiate(const ResFONT*, JKRHeap*);
	void loadFont(int, GXTexMapID, TWidth*);
	bool protected_initiate(const ResFONT*, JKRHeap*);

	inline void delete_and_initialize()
	{
		deleteMemBlocks_ResFont();
		initialize_state();
	}

	static IsLeadByte const saoAboutEncoding_[3];

	// _00     = VTBL
	// _00-_1C = JUTFont
	int mWidth;                         // _1C
	int mHeight;                        // _20
	GXTexObj mTexObj;                   // _24
	int mTexPageIdx;                    // _44
	const ResFONT* mResource;           // _48
	ResFONT::InfoBlock* mInfoBlock;     // _4C, INF1
	void** mMemBlocks;                  // _50
	ResFONT::WidthBlock** mWidthBlocks; // _54, WID1
	ResFONT::GlyphBlock** mGlyphBlocks; // _58, GLY1
	ResFONT::MapBlock** mMapBlocks;     // _5C, MAP1
	u16 mWidthBlockCount;               // _60
	u16 mGlyphBlockCount;               // _62
	u16 mMapBlockCount;                 // _64
	u16 mCurrentGlyphBlockIndex;        // _66
	u16 mMaxCode;                       // _68
	const IsLeadByte* mIsLeadByte;      // _6C
};

struct JUTCacheFont : public JUTResFont {
	enum EPagingType {
		CFPAGETYPE_Unk0 = 0,
		CFPAGETYPE_Unk1 = 1,
	};

	struct TGlyphCacheInfo {
		TGlyphCacheInfo* mPrev; // _00
		TGlyphCacheInfo* mNext; // _04
		u16 mStartCode;         // _08
		u16 mEndCode;           // _0A
		u16 mCellWidth;         // _0C
		u16 mCellHeight;        // _0E
		u32 mPageSize;          // _10
		u16 mTexFormat;         // _14
		u16 mNumRows;           // _16
		u16 mNumCols;           // _18
		u16 mTexWidth;          // _1A
		u16 mTexHeight;         // _1C
		u16 mFontType;          // _1E, 0 = ANSI, 1 = SJIS
	};

	struct TCachePage : public TGlyphCacheInfo {
		GXTexObj mTexObj; // _20
		u8 mImage[];      // _40
	};

	JUTCacheFont();
	JUTCacheFont(const ResFONT*, void*, u32, JKRHeap*);
	JUTCacheFont(const ResFONT*, u32, JKRHeap*);

	virtual ~JUTCacheFont();                  // _08
	virtual void loadImage(int, _GXTexMapID); // _44
	virtual void setBlock();                  // _48

	bool allocArea(void*, u32, JKRHeap*);
	bool allocArray(JKRHeap*);
	void deleteMemBlocks_CacheFont();
	bool getMemorySize(const ResFONT*, u16*, u32*, u16*, u32*, u16*, u32*, u32*);
	void initialize_state();
	bool initiate(const ResFONT*, void*, u32, JKRHeap*);
	bool internal_initiate(const ResFONT*, void*, u32, JKRHeap*);
	void invalidiateAllCache();
	TGlyphCacheInfo* loadCache_char_subroutine(int*, bool);
	bool loadCache_string(const char*, bool);
	void prepend(TGlyphCacheInfo*);
	void unlink(TGlyphCacheInfo*);

	// Unused/inlined:
	TGlyphCacheInfo* determineBlankPage();
	void getGlyphFromAram(TGlyphCacheInfo*, TCachePage*, int*, int*);
	void loadCache_char(int, bool);
	void loadCache_string_size(const char*, u32, bool);
	void unlockCache_all();
	void unlockCache_char(int);
	void unlockCache_string(const char*);
	void unlockCache_string_size(const char*, u32);

	void setPagingType(EPagingType type) { mPagingType = type; }

	static u32 calcCacheSize(u32 sheetSize, int pageCount) { return (ALIGN_NEXT(sheetSize, 0x20) + 0x40) * pageCount; }
	GXTexObj* getTexObj(void* buffer) { return &((TCachePage*)buffer)->mTexObj; }
	u8* getImage(void* buffer) { return ((TCachePage*)buffer)->mImage; }
	TGlyphCacheInfo* getCurrPage() { return mCurrPage; }

	// _00     = VTBL
	// _00-_70 = JUTResFont
	u32 mWidthBlocksSize;        // _70
	u32 mGlyphBlocksSize;        // _74
	u32 mMapBlocksSize;          // _78
	void* mWidthBlockBuffer;     // _7C
	void* mGlyphBlockBuffer;     // _80
	void* mMapBlockBuffer;       // _84
	u32 mMaxSheetSize;           // _88
	EPagingType mPagingType;     // _8C
	void* mCacheBuffer;          // _90
	u32 mPageSize;               // _94
	u32 mCachePageCount;         // _98
	TGlyphCacheInfo* mStartPage; // _9C
	TGlyphCacheInfo* mEndPage;   // _A0
	TGlyphCacheInfo* mCurrPage;  // _A4
	void* mEndPageAddr;          // _A8
	JKRAramBlock* mAramBlock;    // _AC
	bool mIsHeapBuffer;          // _B0, if true, must be delete[]'d
	int mBlankPageCount;         // _B4
};

#endif
