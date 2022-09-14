#ifndef _JSYSTEM_JUT_TCOLOR_H
#define _JSYSTEM_JUT_TCOLOR_H

#include "types.h"
#include "Dolphin/gx.h"

#define TCOLOR_WHITE JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF)

namespace JUtility {
struct TColor : public GXColor {
	TColor() { set(0xFFFFFFFF); }

	TColor(u8 r, u8 g, u8 b, u8 a) { set(r, g, b, a); }

	TColor(u32 u32Color) { set(u32Color); }

	TColor(GXColor color) { set(color); }

	TColor& operator=(const TColor& other)
	{
		((GXColor*)this)->operator=(other);
		return *this;
	}

	operator u32() const { return toUInt32(); }
	u32 toUInt32() const { return *(u32*)&r; }

	void set(u8 cR, u8 cG, u8 cB, u8 cA)
	{
		r = cR;
		g = cG;
		b = cB;
		a = cA;
	}

	void set(u32 u32Color) { *(u32*)&r = u32Color; }

	void set(GXColor gxColor) { *(GXColor*)&r = gxColor; }

	// _00 = GXColor (_00 = r, _01 = g, _02 = b, _03 = a)
};
} // namespace JUtility

#endif
