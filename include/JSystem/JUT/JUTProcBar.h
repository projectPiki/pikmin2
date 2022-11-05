#ifndef _JUTPROCBAR_H
#define _JUTPROCBAR_H

#include "types.h"

class JUTProcBar {
public:
	struct CTime {
		CTime();

		u8 _00[0x14];
	};

	JUTProcBar() { }

	static void create();
	static void clear();

	static JUTProcBar* sManager;

	u8 _00[4];
	u32 _04;
	u32 _08;
	u32 _0C;
	u8 _10[8];
	u32 _18;
	u32 _1C;
	u32 _20;
	u8 _24[8];
	u32 _2C;
	u32 _30;
	u32 _34;
	u8 _38[8];
	u32 _40;
	u32 _44;
	u32 _48;
	u8 _4C[8];
	u32 _54;
	u32 _58;
	u32 _5C;
	u32 _60;
	CTime _64[8];
	u32 _108;
	u8 _10C;
	u32 _110;
	u32 _114;
	u32 _118;
	u32 _11C;
	u32 _120;
	u32 _124;
	u32 _128;
	u32 _12C;
	u8 _130;

private:
}; // 0x134 size

#endif
