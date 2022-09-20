#ifndef _JSYSTEM_J3D_J3DGXCOLOR_H
#define _JSYSTEM_J3D_J3DGXCOLOR_H

#include "types.h"
#include "Dolphin/gx.h"

struct J3DGXColor : public GXColor {
	J3DGXColor() { }

	J3DGXColor(u8 _r, u8 _g, u8 _b, u8 _a)
	{
		r = _r;
		g = _g;
		b = _b;
		a = _a;
	}

	J3DGXColor(const J3DGXColor& other)
	{
		r = other.r;
		g = other.g;
		b = other.b;
		a = other.a;
	}
};

struct J3DGXColorS10 : public GXColorS10 {
	J3DGXColorS10() { }

	J3DGXColorS10(u16 _r, u16 _g, u16 _b, u16 _a)
	{
		r = _r;
		g = _g;
		b = _b;
		a = _a;
	}

	J3DGXColorS10(const J3DGXColorS10& other)
	{
		r = other.r;
		g = other.g;
		b = other.b;
		a = other.a;
	}
};

#endif
