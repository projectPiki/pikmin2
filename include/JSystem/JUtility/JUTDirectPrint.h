#ifndef _JUTDIRECTPRINT_H
#define _JUTDIRECTPRINT_H

#include "types.h"
#include "JSystem/JUtility/TColor.h"

struct JUTDirectPrint {
	JUTDirectPrint(); // unused/inlined

	void erase(int x, int y, int width, int height);
	void setCharColor(JUtility::TColor color);
	void setCharColor(u8 r, u8 g, u8 b);
	void drawChar(int, int, int);
	void drawString(u16 x, u16 y, char* str);
	void drawString_f(u16 x, u16 y, const char* format, ...);
	void changeFrameBuffer(void* buffer, u16 pixelWidth, u16 pixelHeight);

	bool isActive() const { return _00 != nullptr; }

	inline static JUTDirectPrint* getManager() { return sDirectPrint; }

	static JUTDirectPrint* start();

	static u8 sAsciiTable[0x80];
	static u32 sFontData[0x40];
	static u32 sFontData2[0x4D];
	static JUTDirectPrint* sDirectPrint;

	void* _00;                   // _00
	u16 mFBWidth;                // _04, width of frame buffer in pixels?
	u16 mFBHeight;               // _06, height of frame buffer in pixels?
	u16 mStride;                 // _08, width of buffer in ???
	uint mFBSize;                // _0C
	u8 _10[0x4];                 // _10, unknown
	u16* mFrameBuffer;           // _14
	JUtility::TColor mCharColor; // _18
	u16 mCharColor_Y;            // _1C, 1C-2C = color in YCbCr
	u16 mCharColor_Cb;           // _1E
	u16 mCharColor_Cb2;          // _20
	u16 mCharColor_Cb4;          // _22
	u16 mCharColor_Cr;           // _24
	u16 mCharColor_Cr2;          // _26
	u16 mCharColor_Cr4;          // _28
	u16 _2A;                     // _2A
};

inline void JUTChangeFrameBuffer(void* buffer, u16 height, u16 width)
{
	JUTDirectPrint::getManager()->changeFrameBuffer(buffer, width, height);
}

#endif
