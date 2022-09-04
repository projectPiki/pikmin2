#ifndef _COLOR4_H
#define _COLOR4_H

#include "types.h"
#include "Dolphin/gx.h"

// TODO: See if this inherits GXColor
struct Color4 {
	// TODO: Remove inline def when linking singleGS_ZukanParms.cpp!
	inline Color4() {};
	inline Color4(u8 red, u8 green, u8 blue, u8 alpha)
	    : r(red)
	    , g(green)
	    , b(blue)
	    , a(alpha) {};

	inline GXColor toGXColor()
	{
		GXColor color;
		color.r = r;
		color.g = g;
		color.b = b;
		color.a = a;
		return color;
	}

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
	GXColor GXColorView;

	u_color(Color4 cv)
	    : colorView(cv)
	{
	}
	u_color(GXColor uv)
	    : GXColorView(uv)
	{
	}
	u_color(u8 r, u8 g, u8 b, u8 a)
	    : colorView(Color4(r, g, b, a))
	{
	}
};

#endif
