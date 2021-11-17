#ifndef _COLOR4_H
#define _COLOR4_H

#include "types.h"

struct Color4 {
	Color4();
	inline Color4(u8 red, u8 green, u8 blue, u8 alpha)
		: r(red)
		, g(green)
		, b(blue)
		, a(alpha)
		{};

	void read(struct Stream&);
	void write(struct Stream&);

	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

#endif
