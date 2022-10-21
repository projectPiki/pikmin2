#ifndef _JSYSTEM_JUT_JUTEXTERNALFB_H
#define _JSYSTEM_JUT_JUTEXTERNALFB_H

#include "types.h"
#include "Dolphin/gx.h"

#ifndef _GXGamma
typedef u16 _GXGamma;
#endif

struct JUTExternalFB {
	JUTExternalFB(_GXRenderModeObj*, _GXGamma, void*, unsigned long);

	_GXRenderModeObj* m_renderModeObj; // _00
	u32 _04;                           // _04
	u8 _08[4];                         // _08
	u16 _0C;                           // _0C
	_GXGamma m_gamma;                  // _0E
	u8 _10;                            // _10
};

#endif
