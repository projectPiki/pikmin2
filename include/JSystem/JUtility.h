#ifndef _JSYSTEM_JUTILITY_H
#define _JSYSTEM_JUTILITY_H

#include "types.h"
#include "Dolphin/gx.h"

extern "C" {
void JUTReportConsole(char const*);
void JUTReportConsole_f(char const*, ...);
}

namespace JUtility {
// TODO: See if this inherits GXColor
struct TColor {
	inline TColor() { asU32 = 0xFFFFFFFF; }
	inline TColor(u8 red, u8 green, u8 blue, u8 alpha)
	{
		asGXColor.r = red;
		asGXColor.g = green;
		asGXColor.b = blue;
		asGXColor.a = alpha;
	}
	inline TColor(u32 value) { asU32 = value; }
	// inline TColor(const TColor& other) { asU32 = other.asU32; }
	inline TColor& operator=(TColor other)
	{
		asGXColor = other.asGXColor;
		// asGXColor.r = other.asGXColor.r;
		// asGXColor.g = other.asGXColor.g;
		// asGXColor.b = other.asGXColor.b;
		// asGXColor.a = other.asGXColor.a;
		return *this;
	}
	union {
		u32 asU32;
		GXColor asGXColor;
		// u8 r: 8, g : 8, b : 8, a : 8;
	};
	// u32 asU32;
	// struct {
	// u8 r;
	// u8 g;
	// u8 b;
	// u8 a;
	// };
};
} // namespace JUtility

#endif
