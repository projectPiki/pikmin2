#ifndef _JSYSTEM_J2D_J2DCOLORBLOCK_H
#define _JSYSTEM_J2D_J2DCOLORBLOCK_H

#include "Dolphin/gx.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JUtility/TColor.h"
#include "types.h"

struct J2DColorBlock {
	JUtility::TColor mColors[2]; // _00
	u8 mChannelCount;            // _08
	J2DColorChan mChannels[4];   // _0A
	u8 mCullMode;                // _12 - _GXCullMode

	JUtility::TColor* getMatColor(u32 i) { return &mColors[i]; }
	J2DColorChan* getColorChan(u32 i) { return &mChannels[i]; }
	void setCullMode(u8 mode) { mCullMode = mode; }
	void setColorChanNum(u8 num) { mChannelCount = num; }
	void setMatColor(u32 i, JUtility::TColor color) { mColors[i] = color; }
	void setColorChan(u32 i, const J2DColorChan& color) { mChannels[i] = color; }

	/** @fabricated */
	inline J2DColorBlock() { initialize(); }

	void initialize();
	void setGX();

	virtual ~J2DColorBlock() { } // _08 (weak)
	                             // _14 VTBL
};

#endif
