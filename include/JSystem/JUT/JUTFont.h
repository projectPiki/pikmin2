#ifndef _JSYSTEM_JUT_JUTFONT_H
#define _JSYSTEM_JUT_JUTFONT_H

#include "Dolphin/gx.h"
#include "JSystem/JUT/TColor.h"

struct JKRAramBlock;
struct JKRHeap;

/*
 * ResFONT is probably an intermediate able to be casted to the various Block structs below
 */
struct ResFONT {
	u32 mMagic;       // _00
	u32 mBlockLength; // _04
	u16 mEncoding;    // _08
	u16 mMaxGlyph;    // _0A
	u32 mChunkNum;    // _0C
	u32 _10;          // _10
	u32 _14;          // _14
	u16 _18;          // _18
	u16 _1A;          // _1A
	u16 _1C;          // _1C
	u32 : 0;
	u8 mData[]; // _20
};
struct BlockHeader {
	u32 mMagic; // _00
	u32 mSize;  // _04

	const BlockHeader* getNext() const { return reinterpret_cast<const BlockHeader*>(reinterpret_cast<const u8*>(this) + this->mSize); }
	inline static void advance(const BlockHeader** iterator)
	{
		*iterator = reinterpret_cast<const BlockHeader*>(reinterpret_cast<const u8*>(*iterator) + (*iterator)->mSize);
	}
};
struct WidthBlock {
	BlockHeader mHeader;
	u16 mEncoding;   // _08
	u16 mMaxGlyph;   // _0A
	u8 mChunkNum[4]; // _0C
	u32 _10;         // _10
	u32 _14;         // _14
	u16 _18;         // _18
	u16 _1A;         // _1A
	u16 _1C;         // _1C
	u32 : 0;
	u16 mData[]; // _20
};
struct GlyphBlock {
	BlockHeader mHeader;
	u16 mMinCode;      // _08
	u16 mMaxCode;      // _0A
	u16 mCellWidth;    // _0C
	u16 mCellHeight;   // _0E
	int mPageByteSize; // _10
	u16 mTexFormat;    // _14
	u16 mPageCellNumW; // _16
	u16 mPageCellNumH; // _18
	u16 mTexWidth;     // _1A
	u16 mTexHeight;    // _1C
	u16 _pad;          // _1E
	u8 mData[];        // _20
};

struct MapBlock {
	BlockHeader mHeader;
	u16 mMinCode;
	u16 mMaxCode;
	u16 mMessageCodeHighWord; // _0C
	u16 mMessageCodeLowWord;  // _0E
	u16 mLeading;             // _10
};

struct JUTFont {
	typedef bool (*IsLeadByte)(int);

	struct TWidth {
		u8 w0;
		u8 w1;
	};

	JUTFont();

	// TODO: Finish VTBL.
	virtual ~JUTFont() {};                                               // _08
	virtual void setGX() = 0;                                            // _0C
	virtual void setGX(JUtility::TColor, JUtility::TColor) { setGX(); }; // _10
	virtual f32 drawChar_scale(f32, f32, f32, f32, int, bool) = 0;       // _14
	virtual int getLeading() const                            = 0;       // _18
	virtual int getAscent() const                             = 0;       // _1C
	virtual int getDescent() const                            = 0;       // _20
	virtual int getHeight() const                             = 0;       // _24
	virtual int getWidth() const                              = 0;       // _28
	virtual void getWidthEntry(int, JUTFont::TWidth*) const   = 0;       // _2C
	virtual int getCellWidth() const { return getWidth(); };             // _30
	virtual int getCellHeight() const { return getHeight(); };           // _34
	virtual int getFontType() const           = 0;                       // _38
	virtual const ResFONT* getResFont() const = 0;                       // _3C
	virtual bool isLeadByte(int) const        = 0;                       // _40
	// virtual void loadImage(int, _GXTexMapID) = 0;                // _44

	void initialize_state();
	void setCharColor(JUtility::TColor);
	void setGradColor(JUtility::TColor, JUtility::TColor);
	f32 drawString_size_scale(f32, f32, f32, f32, const char*, u32, bool);

	static bool isLeadByte_1Byte(int);
	static bool isLeadByte_2Byte(int);
	static bool isLeadByte_ShiftJIS(int);

	bool _04;
	bool _05;
	int _08;
	JUtility::TColor _0C;
	JUtility::TColor _10;
	JUtility::TColor _14;
	JUtility::TColor _18;
};

struct JUTRomFont : public JUTFont {
	// @fabricatedName
	struct AboutEncoding {
		u32 mFontType;
		u32 mDataSize;
		IsLeadByte mIsLeadByteFunction;
	};
	// @fabricatedName
	struct FontHeader {
		u32 mFontType;
		u16 _04;
		u16 mEncoding;
		u16 mAscent;
		u16 mDescent;
		u16 mWidth;
		u16 mLeading;
		u16 mCellWidth;
		u16 mCellHeight;
	};

	JUTRomFont();
	JUTRomFont(JKRHeap*);

	virtual ~JUTRomFont();                                                    // _08
	virtual void setGX();                                                     // _0C
	virtual f32 drawChar_scale(f32, f32, f32, f32, int, bool);                // _14
	virtual int getWidth() const { return spFontHeader_->mWidth; };           // _28
	virtual int getLeading() const { return spFontHeader_->mLeading; };       // _18
	virtual int getAscent() const { return spFontHeader_->mAscent; };         // _1C
	virtual int getDescent() const { return spFontHeader_->mDescent; };       // _20
	virtual int getHeight() const { return getAscent() + getDescent(); };     // _24
	virtual void getWidthEntry(int, JUTFont::TWidth*) const;                  // _2C
	virtual int getCellWidth() const { return spFontHeader_->mCellWidth; };   // _30
	virtual int getCellHeight() const { return spFontHeader_->mCellHeight; }; // _34
	virtual ResFONT* getResFont() const { return nullptr; };                  // _3C
	virtual int getFontType() const { return spAboutEncoding_->mFontType; };  // _38
	virtual bool isLeadByte(int) const;                                       // _40
	// virtual void loadImage(int, _GXTexMapID) = 0;                           // _44

	void initiate(JKRHeap*);
	void loadImage(JKRHeap*);

	static AboutEncoding* spAboutEncoding_;
	static FontHeader* spFontHeader_;
	static u32 suFontHeaderRefered_; // they misspelled referred
	static AboutEncoding saoAboutEncoding_[2];
};

/**
 * @size{0x70}
 */
struct JUTResFont : public JUTFont {
	// @fabricatedName
	struct FontHeader {
		u32 mFontType;
		u32 _04;
		u16 mEncoding;
		u16 mAscent;
		u16 mDescent;
		u16 mWidth;
		u16 mLeading;
		u16 mCellWidth;
		u16 mCellHeight;
	};
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
	virtual int getFontType() const { return mInfoBlock->mEncoding; };    // _38
	virtual const ResFONT* getResFont() const { return mResource; };      // _3C
	virtual int getLeading() const { return mInfoBlock->mLeading; };      // _18
	virtual bool isLeadByte(int) const;                                   // _40
	virtual void loadImage(int, _GXTexMapID);                             // _44
	virtual void setBlock();                                              // _48
	// virtual void _4C(); // _4C

	int convertSjis(int, u16*) const;
	void countBlock();
	void deleteMemBlocks_ResFont();
	int getFontCode(int) const;
	void initialize_state();
	bool initiate(const ResFONT*, JKRHeap*);
	void loadFont(int, _GXTexMapID, TWidth*);
	bool protected_initiate(const ResFONT*, JKRHeap*);

	int mWidth;               // _1C
	int mHeight;              // _20
	GXTexObj _24;             // _24
	int _44;                  // _44
	const ResFONT* mResource; // _48
	/*
	 * INF1
	 * TODO: Is mInfoBlock really a FontHeader, or is it a ResFONT? It should be 0x20 bytes long in JUTCacheFont::allocArea.
	 */
	FontHeader* mInfoBlock; // _4C
	void** mMemBlocks;      // _50
	// WID1
	WidthBlock** mWidthBlocks; // _54
	// GLY1
	GlyphBlock** mGlyphBlocks; // _58
	// MAP1
	MapBlock** mMapBlocks;   // _5C
	u16 mWidthBlockCount;    // _60
	u16 mGlyphBlockCount;    // _62
	u16 mMapBlockCount;      // _64
	u16 _66;                 // _66
	u16 mMaxCode;            // _68
	IsLeadByte* mIsLeadByte; // _6C

	static IsLeadByte const saoAboutEncoding_[3];
};

struct JUTCacheFont : public JUTResFont {
	struct TGlyphCacheInfo {
		// TODO: the rest of the data members
		TGlyphCacheInfo* mPrev; // _00
		TGlyphCacheInfo* mNext; // _04
		u8 _08[4];              // _08
		u16 _0C;                // _0C
		u16 _0E;                // _0E
		u8 _10[4];              // _10
		u16 _14;                // _14
		u16 _16;                // _16
		u8 _18[8];              // _18
		GXTexObj mGxTexObj;     // _20
	};

	struct TCachePage {
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
	void loadCache_string(const char*, bool);
	void prepend(TGlyphCacheInfo*);
	void unlink(TGlyphCacheInfo*);

	// Unused/inlined:
	void determineBlankPage();
	void getGlyphFromAram(TGlyphCacheInfo*, TCachePage*, int*, int*);
	void loadCache_char(int, bool);
	void loadCache_string_size(const char*, u32, bool);
	void unlockCache_all();
	void unlockCache_char(int);
	void unlockCache_string(const char*);
	void unlockCache_string_size(const char*, u32);

	u32 mWidthBlocksSize;     // _70
	u32 mGlyphBlocksSize;     // _74
	u32 mMapBlocksSize;       // _78
	void* _7C;                // _7C
	void* _80;                // _80
	void* _84;                // _84
	u32 mMaxPageByteSize;     // _88
	int _8C;                  // _8C
	void* _90;                // _90
	u32 _94;                  // _94
	u32 _98;                  // _98
	TGlyphCacheInfo* _9C;     // _9C
	TGlyphCacheInfo* _A0;     // _A0
	u8 _A4[8];                // _A4
	JKRAramBlock* mAramBlock; // _AC
	u8 _B0;                   // _B0
	u32 : 0;
	u8 _B4[4]; // _B4
};

#endif
