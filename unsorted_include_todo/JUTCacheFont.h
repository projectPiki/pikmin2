#ifndef _JUTCACHEFONT_H
#define _JUTCACHEFONT_H

/*
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
*/

struct JUTResFont {
	virtual ~JUTResFont();                                              // _00
	virtual void setGX();                                               // _04
	virtual void setGX(JUtility::TColor, JUtility::TColor);             // _08
	virtual void drawChar_scale(float, float, float, float, int, bool); // _0C
	virtual void getLeading() const;                                    // _10
	virtual void getAscent() const;                                     // _14
	virtual void getDescent() const;                                    // _18
	virtual void getHeight() const;                                     // _1C
	virtual void getWidth() const;                                      // _20
	virtual void getWidthEntry(int, JUTFont::TWidth*) const;            // _24
	virtual void getCellWidth() const;                                  // _28
	virtual void getCellHeight() const;                                 // _2C
	virtual void getFontType() const;                                   // _30
	virtual void getResFont() const;                                    // _34
	virtual void isLeadByte(int) const;                                 // _38

	// _00 VTBL
};

struct JUTCacheFont : public JUTResFont {
	virtual ~JUTCacheFont();                                            // _00
	virtual void setGX();                                               // _04
	virtual void setGX(JUtility::TColor, JUtility::TColor);             // _08
	virtual void drawChar_scale(float, float, float, float, int, bool); // _0C
	virtual void getLeading() const;                                    // _10
	virtual void getAscent() const;                                     // _14
	virtual void getDescent() const;                                    // _18
	virtual void getHeight() const;                                     // _1C
	virtual void getWidth() const;                                      // _20
	virtual void getWidthEntry(int, JUTFont::TWidth*) const;            // _24
	virtual void getCellWidth() const;                                  // _28
	virtual void getCellHeight() const;                                 // _2C
	virtual void getFontType() const;                                   // _30
	virtual void getResFont() const;                                    // _34
	virtual void isLeadByte(int) const;                                 // _38
	virtual void loadImage(int, _GXTexMapID);                           // _3C
	virtual void setBlock();                                            // _40
	virtual void _44() = 0;                                             // _44

	// _00 VTBL
};

#endif
