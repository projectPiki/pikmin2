#ifndef _JUTDIRECTPRINT_H
#define _JUTDIRECTPRINT_H

#include "types.h"
#include "JSystem/JUT/TColor.h"

struct JUTDirectPrint {
	JUTDirectPrint(); // unused/inlined

	static JUTDirectPrint* start();
	void erase(int x, int y, int width, int height);
	void setCharColor(JUtility::TColor color);
	void setCharColor(u8 r, u8 g, u8 b);
	void drawChar(int, int, int);
	void drawString(u16 x, u16 y, char* str);
	void drawString_f(u16 x, u16 y, const char* format, ...);
	void changeFrameBuffer(void* buffer, u16 pixelWidth, u16 pixelHeight);

	inline static JUTDirectPrint* getManager() { return sDirectPrint; }

	static u8 sAsciiTable[0x80];
	static u32 sFontData[0x40];
	static u32 sFontData2[0x4D];
	static JUTDirectPrint* sDirectPrint;

	void* _00;            // _00
	u16 mPixelWidth;      // _04 - width of buffer in pixels?
	u16 mPixelHeight;     // _06 - height of buffer in pixels?
	u16 mWidth;           // _08 - width of buffer in ???
	uint _0C;             // _0C
	u8 _10[0x4];          // _10 - unknown
	u16* mGlyphBuffer;    // _14
	JUtility::TColor _18; // _18
	s16 _1C;              // _1C
	s16 _1E;              // _1E
	s16 _20;              // _20
	s16 _22;              // _22
	u16 _24;              // _24
	u16 _26;              // _26
	u16 _28;              // _28
};

inline void JUTChangeFrameBuffer(void* buffer, u16 height, u16 width)
{
	JUTDirectPrint::getManager()->changeFrameBuffer(buffer, width, height);
}

#endif
