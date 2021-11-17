#ifndef _GRAPHICS_H
#define _GRAPHICS_H

#include "types.h"
#include "Matrixf.h"
#include "JSystem/J2D/J2DGrafContext.h"

struct Viewport;

struct _GraphicsParent {
	ushort m_primitiveDrawCount; // _000
	char* m_tokens[0x20];        // _004
	u8 _084;                     // _084
	u8 _085;                     // _085
	u8 _086;                     // _086
	u8 _087;                     // _087
	u8 _088[4];                  // _088
	Matrixf _08C;                // _08C
	J2DOrthoGraph m_orthoGraph;  // _0BC
	J2DPerspGraph m_perspGraph;  // _190
	Viewport* _25C;              // _25C
	u8 _260[4];                  // _260
	int m_viewportCount;         // _264
	Viewport** m_viewports;      // _268
};

// Size: 0x2A0
struct Graphics : public _GraphicsParent {
	virtual void doJ3DDrawInit();   // _00
	virtual void doJ3DDraw(int);    // _04
	virtual void doJ3DFrameInit();  // _08
	virtual void doJ3DAnimation();  // _0C
	virtual void doJ3DUpdateInit(); // _10
	virtual void doJ3DSetView(int); // _14
	virtual void doJ3DViewCalc();   // _18
	virtual void _1C() = 0;         // _1C

	// _GraphicsParent _000
	// VTBL _26C
	u8 _270[0x30]; // _270

};

#endif
