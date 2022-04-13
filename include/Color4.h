#ifndef _COLOR4_H
#define _COLOR4_H

#include "types.h"

// TODO: See if this inherits GXColor
struct Color4 {
	// TODO: Remove inline def when linking singleGS_ZukanParms.cpp!
	inline Color4() {};
	inline Color4(u8 red, u8 green, u8 blue, u8 alpha)
	    : r(red)
	    , g(green)
	    , b(blue)
	    , a(alpha) {};

	void read(struct Stream&);
	void write(struct Stream&);

	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

// used in sysGCU's fogMgr.cpp
union u_color {
	Color4 colorView;
	u32 u32View;

	u_color(Color4 cv)
	    : colorView(cv)
	{
	}
	u_color(u32 uv)
	    : u32View(uv)
	{
	}
	u_color(u8 r, u8 g, u8 b, u8 a)
	    : colorView(Color4(r, g, b, a))
	{
	}
};

#endif
