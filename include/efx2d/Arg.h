#ifndef _EFX2D_ARG_H
#define _EFX2D_ARG_H

#include "Game/enemyInfo.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"
#include "Vector2.h"

namespace efx2d {
struct Arg : Vector2f {
	Arg(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

	virtual const char* getName() // _08 (weak)
	{
		return "Arg";
	}

	// _00-_08	= Vector2f
	// _08 		= VTBL
};

struct ArgColor : public Arg {

	virtual const char* getName() // _08 (weak)
	{
		return "ArgColor";
	}

	// _00-_08	= Vector2f
	// _08 		= VTBL
	u32 _0C; // JUtility::TColor? maybe?
};

struct ArgScale : public Arg {

	virtual const char* getName() // _08 (weak)
	{
		return "ArgScale";
	}

	// _00-_08	= Vector2f
	// _08 		= VTBL
	float m_scale; // _0C
};

struct ArgScaleColorColor : public Arg {

	virtual const char* getName() // _08 (weak)
	{
		return "ArgScaleColorColor";
	}

	// _00-_08	= Vector2f
	// _08 		= VTBL
	float m_scale;        // _0C
	JUtility::TColor _10; // _10
	JUtility::TColor _14; // _14
};
} // namespace efx2d

#endif
