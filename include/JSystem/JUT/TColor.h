#ifndef _JSYSTEM_JUT_TCOLOR_H
#define _JSYSTEM_JUT_TCOLOR_H

#include "JSystem/JSupport/JSUStream.h"
#include "types.h"
#include "Dolphin/gx.h"

#define TCOLOR_BLACK JUtility::TColor(0x0, 0x0, 0x0, 0x0)
#define TCOLOR_WHITE JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF)

namespace JUtility {
struct TColor : public GXColor {
	TColor() { set(0xFFFFFFFF); }

	TColor(u8 r, u8 g, u8 b, u8 a) { set(r, g, b, a); }

	TColor(u32 u32Color) { set(u32Color); }

	// inline TColor(u64 u64Color) { setU64(u64Color); }

	TColor(GXColor color) { set(color); }

	TColor& operator=(const TColor& other)
	{
		((GXColor*)this)->operator=(other);
		return *this;
	}

	/** @fabricated */
	TColor& operator=(const GXColorS10& other)
	{
		r = other.r;
		g = other.g;
		b = other.b;
		a = other.a;
		return *this;
	}

	/** @fabricated */
	void read(JSUInputStream* input)
	{
		TColor temp;
		input->read(&temp, sizeof(TColor));
		*this = temp;
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

	void setU64(u64 u64Color)
	{
		r = (u64Color & 0xFFFF000000000000) >> 0x30;
		g = (u64Color & 0x0000FFFF00000000) >> 0x20;
		b = (u64Color & 0x00000000FFFF0000) >> 0x10;
		a = (u64Color & 0x000000000000FFFF);
	}

	void set(GXColor gxColor) { *(GXColor*)&r = gxColor; }

	void setRGB(u8 cR, u8 cG, u8 cB)
	{
		r = cR;
		g = cG;
		b = cB;
	}

	void setRGB(const TColor& other) { setRGB(other.r, other.g, other.b); }

	void setRGBA(const TColor& other)
	{
		r = other.r;
		g = other.g;
		b = other.b;
		a = other.a;
	}

	// _00 = GXColor (_00 = r, _01 = g, _02 = b, _03 = a)
};
} // namespace JUtility

#endif
