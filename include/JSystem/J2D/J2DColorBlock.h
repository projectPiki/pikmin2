#ifndef _JSYSTEM_J2D_J2DCOLORBLOCK_H
#define _JSYSTEM_J2D_J2DCOLORBLOCK_H

#include "Dolphin/gx.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"

struct _J2DColorBlockParent {
	JUtility::TColor m_colors[2]; // _00
	u8 m_channelCount;            // _08
	u8 _09;                       // _09 - padding?
	J2DColorChan m_channels[4];   // _0A
	u8 m_cullMode;                // _12 - _GXCullMode
};

struct J2DColorBlock : _J2DColorBlockParent {
	virtual ~J2DColorBlock(); // _08 (weak)

	void initialize();
	void setGX();

	// _14 VTBL
};

#endif
