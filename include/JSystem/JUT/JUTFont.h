#ifndef _JSYSTEM_JUT_JUTFONT_H
#define _JSYSTEM_JUT_JUTFONT_H

#include "Dolphin/gx.h"
#include "JSystem/JUtility.h"

struct JKRAramBlock;
struct JKRHeap;
struct ResFONT;

struct JUTFont {
	typedef bool IsLeadByte(int);
	struct TWidth {
	};

	JUTFont();

	// TODO: Finish VTBL.
	virtual ~JUTFont() {};                                                   // _00
	virtual void setGX() = 0;                                                // _04
	virtual void setGX(JUtility::TColor, JUtility::TColor) { setGX(); };     // _08
	virtual float drawChar_scale(float, float, float, float, int, bool) = 0; // _0C
	virtual u16 getLeading() const                                      = 0; // _10
	virtual u16 getAscent() const                                       = 0; // _14
	virtual u16 getDescent() const                                      = 0; // _18
	virtual u16 getHeight() const                                       = 0; // _1C
	virtual u16 getWidth() const                                        = 0; // _20
	virtual void getWidthEntry(int, JUTFont::TWidth*) const             = 0; // _24
	virtual u16 getCellWidth() const { return getWidth(); };                 // _28
	virtual u16 getCellHeight() const { return getHeight(); };               // _2C
	virtual u32 getFontType() const     = 0;                                 // _30
	virtual ResFONT* getResFont() const = 0;                                 // _34
	virtual bool isLeadByte(int) const  = 0;                                 // _38
	// virtual void loadImage(int, _GXTexMapID) = 0;                // _3C

	void initialize_state();
	void setCharColor(JUtility::TColor);
	void setGradColor(JUtility::TColor, JUtility::TColor);
	f32 drawString_size_scale(f32, f32, f32, f32, const char*, u32, bool);

	static bool isLeadByte_1Byte(int);
	static bool isLeadByte_2Byte(int);
	static bool isLeadByte_ShiftJIS(int);

	bool _04;
	bool _05;
	u32 _08;
	JUtility::TColor _0C;
	JUtility::TColor _10;
	JUtility::TColor _14;
	JUtility::TColor _18;
};

struct JUTRomFont : public JUTFont {
	// @fabricatedName
	struct AboutEncoding {
		u32 m_fontType;
		u32 m_dataSize;
		IsLeadByte* m_isLeadByteFunction;
	};
	// @fabricatedName
	struct FontHeader {
		u32 m_fontType;
		u8 _04[4];
		u16 m_ascent;
		u16 m_descent;
		u16 m_width;
		u16 m_leading;
		u16 m_cellWidth;
		u16 m_cellHeight;
	};

	JUTRomFont();
	JUTRomFont(JKRHeap*);

	virtual ~JUTRomFont();                                               // _00
	virtual void setGX();                                                // _04
	virtual float drawChar_scale(float, float, float, float, int, bool); // _0C
	virtual u16 getLeading() const;                                      // _10
	virtual u16 getAscent() const;                                       // _14
	virtual u16 getDescent() const;                                      // _18
	virtual u16 getHeight() const;                                       // _1C
	virtual u16 getWidth() const;                                        // _20
	virtual void getWidthEntry(int, JUTFont::TWidth*) const;             // _24
	virtual u16 getCellWidth() const;                                    // _28
	virtual u16 getCellHeight() const;                                   // _2C
	virtual u32 getFontType() const;                                     // _30
	virtual ResFONT* getResFont() const;                                 // _34
	virtual bool isLeadByte(int) const;                                  // _38
	// virtual void loadImage(int, _GXTexMapID) = 0;                // _3C

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
	JUTResFont();
	JUTResFont(const ResFONT*, JKRHeap*);

	virtual ~JUTResFont();                                               // _00
	virtual void setGX();                                                // _04
	virtual void setGX(JUtility::TColor, JUtility::TColor);              // _08
	virtual float drawChar_scale(float, float, float, float, int, bool); // _0C
	virtual u16 getLeading() const;                                      // _10
	virtual u16 getAscent() const;                                       // _14
	virtual u16 getDescent() const;                                      // _18
	virtual u16 getHeight() const;                                       // _1C
	virtual u16 getWidth() const;                                        // _20
	virtual void getWidthEntry(int, JUTFont::TWidth*) const;             // _24
	virtual u16 getCellWidth() const;                                    // _28
	virtual u16 getCellHeight() const;                                   // _2C
	virtual u32 getFontType() const;                                     // _30
	virtual ResFONT* getResFont() const;                                 // _34
	virtual bool isLeadByte(int) const;                                  // _38
	virtual void loadImage(int, _GXTexMapID);                            // _3C
	virtual void setBlock();                                             // _40
	// virtual void _44(); // _44

	void convertSjis(int, unsigned short*) const;
	void countBlock();
	void deleteMemBlocks_ResFont();
	u32 getFontCode(int) const;
	void initialize_state();
	void initiate(const ResFONT*, JKRHeap*);
	void loadFont(int, _GXTexMapID, TWidth*);
	void protected_initiate(const ResFONT*, JKRHeap*);

	u32 _1C;             // _1C
	u32 _20;             // _20
	u8 _24[0x20];        // _24
	int _44;             // _44
	ResFONT* m_resource; // _48
	// INF1
	u8* m_infoBlock;   // _4C
	void* m_memBlocks; // _50
	// WID1
	void** m_widthBlocks; // _54
	// GLY1
	void** m_glyphBlocks; // _58
	// MAP1
	void** m_mapBlocks;       // _5C
	u16 m_widthBlockCount;    // _60
	u16 m_glyphBlockCount;    // _62
	u16 m_mapBlockCount;      // _64
	u16 _66;                  // _66
	u16 _68;                  // _68
	IsLeadByte* m_isLeadByte; // _6C

	static IsLeadByte* saoAboutEncoding_[3];
};

struct JUTCacheFont : public JUTResFont {
	struct TGlyphCacheInfo {
		// TODO: the rest of the data members
		TGlyphCacheInfo* m_prev;
		TGlyphCacheInfo* m_next;
	};

	struct TCachePage {
	};

	JUTCacheFont();
	JUTCacheFont(const ResFONT*, void*, u32, JKRHeap*);
	JUTCacheFont(const ResFONT*, u32, JKRHeap*);

	virtual ~JUTCacheFont();                                             // _00
	virtual void setGX();                                                // _04
	virtual float drawChar_scale(float, float, float, float, int, bool); // _0C
	virtual u16 getLeading() const;                                      // _10
	virtual u16 getAscent() const;                                       // _14
	virtual u16 getDescent() const;                                      // _18
	virtual u16 getHeight() const;                                       // _1C
	virtual u16 getWidth() const;                                        // _20
	virtual void getWidthEntry(int, JUTFont::TWidth*) const;             // _24
	virtual u16 getCellWidth() const;                                    // _28
	virtual u16 getCellHeight() const;                                   // _2C
	virtual u32 getFontType() const;                                     // _30
	virtual ResFONT* getResFont() const;                                 // _34
	virtual bool isLeadByte(int) const;                                  // _38
	virtual void loadImage(int, _GXTexMapID);                            // _3C
	virtual void setBlock();                                             // _40
	// virtual void _44(); // _44

	void allocArea(void*, u32, JKRHeap*);
	void allocArray(JKRHeap*);
	void deleteMemBlocks_CacheFont();
	void getMemorySize(const ResFONT*, u16*, u32*, u16*, u32*, u16*, u32*, u32*);
	void initialize_state();
	void initiate(const ResFONT*, void*, u32, JKRHeap*);
	void internal_initiate(const ResFONT*, void*, u32, JKRHeap*);
	void invalidiateAllCache();
	void loadCache_char_subroutine(int*, bool);
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

	u32 _70;                   // _70
	u32 _74;                   // _74
	u32 _78;                   // _78
	void* _7C;                 // _7C
	void* _80;                 // _80
	void* _84;                 // _84
	u32 _88;                   // _88
	int _8C;                   // _8C
	void* _90;                 // _90
	u32 _94;                   // _94
	u8 _98[4];                 // _98
	TGlyphCacheInfo* _9C;      // _9C
	TGlyphCacheInfo* _A0;      // _A0
	u8 _A4[8];                 // _A4
	JKRAramBlock* m_aramBlock; // _AC
	u8 _B0;                    // _B0
	u32 : 0;
	u8 _B4[4]; // _B4
};

#endif
