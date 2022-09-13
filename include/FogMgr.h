#ifndef _FOGMGR_H
#define _FOGMGR_H

#include "CNode.h"
#include "Color4.h"
#include "Dolphin/gx.h"

struct Graphics;

struct FogMgr : public CNode {
	FogMgr();

	virtual ~FogMgr(); // _08 (weak)

	void off(Graphics&);
	void set(Graphics&);

	void getColor(Color4&);
	void setColor(Color4&);

	// _00 		= VTBL
	// _00-_18  = CNode
	GXFogType m_type; // _18
	float m_nearZ;    // _1C
	float m_farZ;     // _20
	u_color m_color;  // _24
};

#endif
