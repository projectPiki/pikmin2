#ifndef _JSYSTEM_J2D_J2DGXCOLORS10_H
#define _JSYSTEM_J2D_J2DGXCOLORS10_H

#include "JSystem/JUtility/TColor.h"
#include "types.h"
#include "Dolphin/gx.h"

/**
 * Everything is fabricated here except for the default ctor.
 * Copied from J3DGXColorS10.
 */
struct J2DGXColorS10 : public GXColorS10 {
	J2DGXColorS10() { }

	J2DGXColorS10(u16 _r, u16 _g, u16 _b, u16 _a)
	{
		r = _r;
		g = _g;
		b = _b;
		a = _a;
	}

	J2DGXColorS10(const J2DGXColorS10& other)
	{
		r = (s16)other.r;
		g = (s16)other.g;
		b = (s16)other.b;
		a = (s16)other.a;
	}

	J2DGXColorS10(const u64& other)
	{
		GXColorS10* otherBytes = (GXColorS10*)&other;
		r                      = otherBytes->r;
		g                      = otherBytes->g;
		b                      = otherBytes->b;
		a                      = otherBytes->a;
	}

	J2DGXColorS10(const GXColorS10& color)
	{
		r = (s16)color.r;
		g = (s16)color.g;
		b = (s16)color.b;
		a = (s16)color.a;
	}

	inline operator u64() const { return toUInt64(); }
	inline u32 toUInt64() const { return *(u64*)&r; }

	inline operator JUtility::TColor() const { return toTColor(); }
	inline JUtility::TColor toTColor() const { return JUtility::TColor(r, g, b, a); }

	inline void operator=(const GXColorS10& other)
	{
		r = (s16)other.r;
		g = (s16)other.g;
		b = (s16)other.b;
		a = (s16)other.a;
	}

	inline void operator=(const J2DGXColorS10& other) { (GXColorS10)* this = (GXColorS10)other; }

	inline void set(u16 _r, u16 _g, u16 _b, u16 _a)
	{
		r = _r;
		g = _g;
		b = _b;
		a = _a;
	}
};

#endif
