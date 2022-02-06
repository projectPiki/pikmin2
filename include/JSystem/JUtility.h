#ifndef _JSYSTEM_JUTILITY_H
#define _JSYSTEM_JUTILITY_H

#include "types.h"

namespace JUtility {
struct TColor {
	inline TColor() { asU32 = 0xFFFFFFFF; }
	inline TColor(u8 red, u8 green, u8 blue, u8 alpha)
	{
		channels.r = red;
		channels.g = green;
		channels.b = blue;
		channels.a = alpha;
	}
	inline TColor(u32 value) { asU32 = value; }
	inline TColor(const TColor& other) { asU32 = other.asU32; }
	inline TColor& operator=(TColor other)
	{
		channels = other.channels;
		// channels.r = other.channels.r;
		// channels.g = other.channels.g;
		// channels.b = other.channels.b;
		// channels.a = other.channels.a;
		return *this;
	}
	union {
		u32 asU32;
		struct {
			u8 r, g, b, a;
		} channels;
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
