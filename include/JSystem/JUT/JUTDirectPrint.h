#ifndef _JUTDIRECTPRINT_H
#define _JUTDIRECTPRINT_H

#include "types.h"
#include "JSystem/JUT/TColor.h"

struct JUTDirectPrint {
	void* _00;            // _00
	u16 _04;              // _04
	u16 _06;              // _06
	u16 _08;              // _08
	u8 _0A[0x2];          // _0A - padding probably
	uint _0C;             // _0C
	u8 _10[0x4];          // _10 - unknown
	void* _14;            // _14
	JUtility::TColor _18; // _18
	short _1C;            // _1C
	short _1E;            // _1E
	short _20;            // _20
	short _22;            // _22
	u16 _24;              // _24
	u16 _26;              // _26
	u16 _28;              // _28
	u8 _2A[0x2];          // _2A - padding probably

	void erase(int, int, int, int);
	void setCharColor(JUtility::TColor);
	void drawString(u16, u16, char*);

	static JUTDirectPrint* sDirectPrint;
};

#endif
