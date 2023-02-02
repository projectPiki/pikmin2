#ifndef _JSYSTEM_J2D_J2DPEBLOCK_H
#define _JSYSTEM_J2D_J2DPEBLOCK_H

#include "JSystem/J2D/J2DTypes.h"
#include "types.h"

struct J2DPEBlock {
	/** @fabricated */
	inline J2DPEBlock()
	    : mAlphaComp()
	    , mBlendInfo()
	{
		initialize();
	}

	inline ~J2DPEBlock() { } // unused/inlined

	void initialize();
	void setGX();

	J2DAlphaComp mAlphaComp; // _00
	J2DBlend mBlendInfo;     // _04
	u8 mDither;              // _08
};

#endif
