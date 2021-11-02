#ifndef _JSYSTEM_J3DTEXMTX_H
#define _JSYSTEM_J3DTEXMTX_H

#include "types.h"
#include "Matrixf.h"

struct J3DTexMtx {
	u8 _00;       // _00
	s8 m_flags;   // _01
	u8 _02;       // _02
	u8 _03;       // _03
	u32 _04;      // _04
	u32 _08;      // _08
	u32 _0C;      // _0C
	u32 m_scaleX; // _10
	u32 m_scaleY; // _14
	u16 _18;      // _18
	u8 _1A;       // _1A
	u8 _1B;       // _1B
	u32 _1C;      // _1C
	u32 _20;      // _20
	u32 _24;      // _24
	u32 _28;      // _28
	u32 _2C;      // _2C
	u32 _30;      // _30
	u32 _34;      // _34
	u32 _38;      // _38
	u32 _3C;      // _3C
	u32 _40;      // _40
	u32 _44;      // _44
	u32 _48;      // _48
	u32 _4C;      // _4C
	u32 _50;      // _50
	u32 _54;      // _54
	u32 _58;      // _58
	u32 _5C;      // _5C
	u32 _60;      // _60
	Matrixf _64;  // _64
};

#endif