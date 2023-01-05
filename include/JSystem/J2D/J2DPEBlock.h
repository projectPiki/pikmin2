#ifndef _JSYSTEM_J2D_J2DPEBLOCK_H
#define _JSYSTEM_J2D_J2DPEBLOCK_H

#include "JSystem/J2D/J2DTypes.h"
#include "types.h"

struct J2DPEBlock {
	/** @fabricated */
	inline J2DPEBlock()
	    : m_alphaComp()
	// , m_blendInfo(j2dDefaultBlendInfo[0], j2dDefaultBlendInfo[1], j2dDefaultBlendInfo[2])
	// , _07(j2dDefaultBlendInfo[3])
	{
		m_blendInfo.m_type       = j2dDefaultBlendInfo[0];
		m_blendInfo.m_srcFactor  = j2dDefaultBlendInfo[1];
		m_blendInfo.m_destFactor = j2dDefaultBlendInfo[2];
		_07                      = j2dDefaultBlendInfo[3];
		initialize();
	}
	inline ~J2DPEBlock() { } // unused/inlined

	void initialize();
	void setGX();

	J2DAlphaComp m_alphaComp; // _00
	J2DBlendInfo m_blendInfo; // _04
	u8 _07;                   // _07
	u8 m_dither;              // _08
};

#endif
