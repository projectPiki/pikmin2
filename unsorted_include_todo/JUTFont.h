#ifndef _JUTFONT_H
#define _JUTFONT_H

/*
    __vt__7JUTFont:
    .4byte 0
    .4byte 0
    .4byte __dt__7JUTFontFv
    .4byte 0
    .4byte setGX__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte getCellWidth__7JUTFontCFv
    .4byte getCellHeight__7JUTFontCFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct JUTFont {
	virtual ~JUTFont();                                     // _00
	virtual void _04() = 0;                                 // _04
	virtual void setGX(JUtility::TColor, JUtility::TColor); // _08
	virtual void _0C() = 0;                                 // _0C
	virtual void _10() = 0;                                 // _10
	virtual void _14() = 0;                                 // _14
	virtual void _18() = 0;                                 // _18
	virtual void _1C() = 0;                                 // _1C
	virtual void _20() = 0;                                 // _20
	virtual void _24() = 0;                                 // _24
	virtual void getCellWidth() const;                      // _28
	virtual void getCellHeight() const;                     // _2C
	virtual void _30() = 0;                                 // _30
	virtual void _34() = 0;                                 // _34
	virtual void _38() = 0;                                 // _38
	virtual void _3C() = 0;                                 // _3C

	// _00 VTBL
};

#endif
