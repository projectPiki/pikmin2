#ifndef _JUTPROCBAR_H
#define _JUTPROCBAR_H

#include "JSystem/JUT/TColor.h"
#include "types.h"

class JUTProcBar {
public:
	struct CTime {
		CTime();

		u8 _00[4]; // _00 - unknown
		u32 _04;   // _04
		u32 _08;   // _08
		u32 _0C;   // _0C
		u8 _10[4]; // _10 - unknown
	};

	JUTProcBar();
	~JUTProcBar();

	static JUTProcBar* create();
	static void clear();
	static void destroy();
	void draw();
	void drawProcessBar();
	void drawHeapBar();

	// unused/inlined:
	void bar_subroutine(int, int, int, int, int, int, int, JUtility::TColor, JUtility::TColor);
	void adjustMeterLength(u32, float*, float, float, int*);
	void getUnuseUserBar();

	static JUTProcBar* sManager;

	u8 _00[4];    // _00
	u32 _04;      // _04
	u32 _08;      // _08
	u32 _0C;      // _0C
	u8 _10[8];    // _10
	u32 _18;      // _18
	u32 _1C;      // _1C
	u32 _20;      // _20
	u8 _24[8];    // _24
	u32 _2C;      // _2C
	u32 _30;      // _30
	u32 _34;      // _34
	u8 _38[8];    // _38
	u32 _40;      // _40
	u32 _44;      // _44
	u32 _48;      // _48
	u8 _4C[8];    // _4C
	u32 _54;      // _54
	u32 _58;      // _58
	u32 _5C;      // _5C
	u32 _60;      // _60
	CTime _64[8]; // _64
	u32 _104;     // _104
	u32 _108;     // _108
	u8 _10C;      // _10C
	u32 _110;     // _110
	u32 _114;     // _114
	u32 _118;     // _118
	u32 _11C;     // _11C
	u32 _120;     // _120
	u32 _124;     // _124
	u32 _128;     // _128
	u32 _12C;     // _12C
	u8 _130;      // _130

private:
}; // 0x134 size

#endif
