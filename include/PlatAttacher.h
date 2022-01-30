#ifndef _PLATATTACHER_H
#define _PLATATTACHER_H

#include "types.h"
#include "Platform.h"

struct Graphics;

struct PlatAttacher {
	PlatAttacher();
	void setMapCodeAll(MapCode::Code&);
	void read(Stream&);
	int getNumShapes();
	u16 getJointIndex(int);
	Platform* getPlatform(int);

	// Unused/inlined:
	void alloc(int, unsigned short*);
	void write(Stream&);
	void draw(Graphics&, int);

	int m_numShapes;       // _00
	u16* m_jointIndices;   // _04
	Platform* m_platforms; // _08
};

#endif
