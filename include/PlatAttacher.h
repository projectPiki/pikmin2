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
	void alloc(int, u16*);
	void write(Stream&);
	void draw(Graphics&, int);

	int mNumShapes;       // _00
	u16* mJointIndices;   // _04
	Platform* mPlatforms; // _08
};

#endif
