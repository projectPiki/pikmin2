#ifndef _JSYSTEM_J3D_J3DDRAWBUFFER_H
#define _JSYSTEM_J3D_J3DDRAWBUFFER_H

#include "types.h"

struct J3DMatPacket;

struct J3DDrawBuffer {
	void initialize();
	void allocBuffer(unsigned long);
	void frameInit();
	void entryMatSort(J3DMatPacket*);
	void entryMatAnmSort(J3DMatPacket*);
	void entryZSort(J3DMatPacket*);
	void entryModelSort(J3DMatPacket*);
	void entryInvalidSort(J3DMatPacket*);
	void entryNonSort(J3DMatPacket*);
	void draw() const;
	void drawHead() const;
	void drawTail() const;

	u8 _00[4]; // _00
	u32 _04;   // _04
	u32 _08;   // _08
	int _0C;   // _0C
	float _10; // _10
	float _14; // _14
	float _18; // _18
	u32 _1C;   // _1C
	u32 _20;   // _20
};

#endif
