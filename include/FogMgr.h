#ifndef _FOGMGR_H
#define _FOGMGR_H

#include "CNode.h"
#include "Color4.h"
#include "Dolphin/gx.h"

struct Graphics;

struct FogMgr : public CNode {
	FogMgr();

	virtual ~FogMgr() { } // _08 (weak)

	void off(Graphics&);
	void set(Graphics&);

	void getColor(Color4&);
	void setColor(Color4&);

	// _00 		= VTBL
	// _00-_18  = CNode
	GXFogType mType; // _18
	f32 mNearZ;      // _1C
	f32 mFarZ;       // _20
	u_color mColor;  // _24
};

#endif
