#ifndef _JUTRESFONT_H
#define _JUTRESFONT_H

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
	virtual void loadImage(int, _GXTexMapID);                           // _3C
	virtual void setBlock();                                            // _40
	virtual void _44() = 0;                                             // _44

	// _00 VTBL
};

#endif
