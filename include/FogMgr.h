#ifndef _FOGMGR_H
#define _FOGMGR_H

#include "CNode.h"
#include "Color4.h"
#include "Dolphin/gx.h"

struct Graphics;

struct FogMgr : public CNode {
	~FogMgr();
	FogMgr();

	void off(Graphics&);
	void set(Graphics&);

	void getColor(Color4&);
	void setColor(Color4&);

	GXFogType m_type; // _18
	float m_nearZ;    // _1C
	float m_farZ;     // _20
	Color4 m_color;   // _24
};

#endif
