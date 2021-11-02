#ifndef _JSYSTEM_J3DSHAPE_H
#define _JSYSTEM_J3DSHAPE_H

#include "types.h"

struct J3DJos32Tree;

struct J3DShape {
	u32 _00;               // _00, VTBL!
	s32* _04;              // _04
	s16 m_id;              // _08
	u16 _0A;               // _0A
	u32 m_flags;           // _0C
	f32 _10;               // _10
	f32 _14;               // _14
	f32 _18;               // _18
	f32 _1C;               // _1C
	f32 _20;               // _20
	f32 _24;               // _24
	f32 _28;               // _28
	s32* _2C;              // _2C
	s32 _30;               // _30
	u8 m_mode;             // _34
	s32 _38;               // _38
	s32 _3C;               // _3C
	u8 _40[0xC];           // _40
	s32 _4C;               // _4C
	s32 _50;               // _50
	s8* m_flagList;        // _54
	J3DJos32Tree* m_tree1; // _58
	J3DJos32Tree* m_tree2; // _5C
	s32* _60;              // _60
};

#endif
