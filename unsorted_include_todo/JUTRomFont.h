#ifndef _JUTROMFONT_H
#define _JUTROMFONT_H

/*
    __vt__10JUTRomFont:
    .4byte 0
    .4byte 0
    .4byte __dt__10JUTRomFontFv
    .4byte setGX__10JUTRomFontFv
    .4byte setGX__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
    .4byte drawChar_scale__10JUTRomFontFffffib
    .4byte getLeading__10JUTRomFontCFv
    .4byte getAscent__10JUTRomFontCFv
    .4byte getDescent__10JUTRomFontCFv
    .4byte getHeight__10JUTRomFontCFv
    .4byte getWidth__10JUTRomFontCFv
    .4byte getWidthEntry__10JUTRomFontCFiPQ27JUTFont6TWidth
    .4byte getCellWidth__10JUTRomFontCFv
    .4byte getCellHeight__10JUTRomFontCFv
    .4byte getFontType__10JUTRomFontCFv
    .4byte getResFont__10JUTRomFontCFv
    .4byte isLeadByte__10JUTRomFontCFi
    .4byte 0
*/

struct JUTFont {
	virtual ~JUTFont();                                     // _00
	virtual void setGX();                                   // _04
	virtual void setGX(JUtility::TColor, JUtility::TColor); // _08

	// _00 VTBL
};

struct JUTRomFont : public JUTFont {
	virtual ~JUTRomFont();                                              // _00
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
	virtual void _3C() = 0;                                             // _3C

	// _00 VTBL
};

#endif
