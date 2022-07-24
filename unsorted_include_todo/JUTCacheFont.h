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
	virtual ~JUTResFont();                                              // _08
	virtual void setGX();                                               // _0C
	virtual void setGX(JUtility::TColor, JUtility::TColor);             // _10
	virtual void drawChar_scale(float, float, float, float, int, bool); // _14
	virtual void getLeading() const;                                    // _18 (inline)
	virtual void getAscent() const;                                     // _1C (inline)
	virtual void getDescent() const;                                    // _20 (inline)
	virtual void getHeight() const;                                     // _24 (inline)
	virtual void getWidth() const;                                      // _28 (inline)
	virtual void getWidthEntry(int, JUTFont::TWidth*) const;            // _2C
	virtual void getCellWidth() const;                                  // _30
	virtual void getCellHeight() const;                                 // _34
	virtual void getFontType() const;                                   // _38 (inline)
	virtual void getResFont() const;                                    // _3C (inline)
	virtual void isLeadByte(int) const;                                 // _40
};

struct JUTCacheFont : public JUTResFont {
	virtual ~JUTCacheFont();                  // _08
	virtual void loadImage(int, _GXTexMapID); // _44
	virtual void setBlock();                  // _48
	virtual void _4C() = 0;                   // _4C
};

#endif
