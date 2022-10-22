#ifndef _JUTDIRECTPRINT_H
#define _JUTDIRECTPRINT_H

#include "types.h"
#include "JSystem/JUT/TColor.h"

struct JUTDirectPrint {
	JUTDirectPrint(); // unused/inlined

	void* _00;            // _00
	u16 _04;              // _04
	u16 _06;              // _06
	u16 _08;              // _08
	u8 _0A[0x2];          // _0A - padding probably
	uint _0C;             // _0C
	u8 _10[0x4];          // _10 - unknown
	void* _14;            // _14
	JUtility::TColor _18; // _18
	s16 _1C;              // _1C
	s16 _1E;              // _1E
	s16 _20;              // _20
	s16 _22;              // _22
	u16 _24;              // _24
	u16 _26;              // _26
	u16 _28;              // _28
	u8 _2A[0x2];          // _2A - padding probably

	static JUTDirectPrint* start();
	void erase(int, int, int, int);
	void setCharColor(JUtility::TColor);
	void setCharColor(u8, u8, u8);
	void drawChar(int, int, int);
	void drawString(u16, u16, char*);
	void drawString_f(u16, u16, const char*, ...);
	void changeFrameBuffer(void*, u16, u16);

	static JUTDirectPrint* sDirectPrint;
};

#endif
