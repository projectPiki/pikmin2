#ifndef _EFX2D_ARG_H
#define _EFX2D_ARG_H

#include "Game/enemyInfo.h"
#include "JSystem/JUtility.h"
#include "types.h"
#include "Vector2.h"

namespace efx2d {
struct Arg : Vector2f {
	Arg(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

	/**
	 * @reifiedAddress{80238E80}
	 * @reifiedFile{plugProjectKandoU/vsCardMgr.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "Arg";
	}

	// vtbl _08
};

struct ArgColor : public Arg {
	/**
	 * @reifiedAddress{803D9BFC}
	 * @reifiedFile{plugProjectEbisawaU/ebiScreenFileSelect.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "ArgColor";
	}

	u32 _0C;
};

struct ArgScale : public Arg {
	/**
	 * @reifiedAddress{80327BDC}
	 * @reifiedFile{plugProjectOgawaU/ogObjVs.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "ArgScale";
	}

	float m_scale; // _0C
};

struct ArgScaleColorColor : public Arg {
	/**
	 * @reifiedAddress{80238E74}
	 * @reifiedFile{plugProjectKandoU/vsCardMgr.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "ArgScaleColorColor";
	}

	float m_scale;        // _0C
	JUtility::TColor _10; // _10
	JUtility::TColor _14; // _14
};
} // namespace efx2d

#endif
