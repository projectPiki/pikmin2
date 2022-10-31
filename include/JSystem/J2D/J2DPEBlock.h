#ifndef _JSYSTEM_J2D_J2DPEBLOCK_H
#define _JSYSTEM_J2D_J2DPEBLOCK_H

#include "JSystem/J2D/J2DTypes.h"
#include "types.h"

struct J2DPEBlock {
	inline ~J2DPEBlock() { } // unused/inlined

	void initialize();
	void setGX();

	J2DAlphaComp m_alphaComp; // _00
	J2DBlendInfo m_blendInfo; // _04
	u8 _07;                   // _07
	u8 m_dither;              // _08
};

#endif
