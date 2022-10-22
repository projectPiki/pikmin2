#ifndef _JSYSTEM_J3D_J3DDRAWBUFFER_H
#define _JSYSTEM_J3D_J3DDRAWBUFFER_H

#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DPacket;
struct J3DMatPacket;

/**
 * @size{0x24}
 */
struct J3DDrawBuffer {
	inline J3DDrawBuffer(unsigned long size)
	{
		initialize();
		allocBuffer(size);
	}
	void initialize();
	J3DErrType allocBuffer(unsigned long);
	void frameInit();
	bool entryMatSort(J3DMatPacket*);
	bool entryMatAnmSort(J3DMatPacket*);
	void entryZSort(J3DMatPacket*);
	bool entryModelSort(J3DMatPacket*);
	bool entryInvalidSort(J3DMatPacket*);
	bool entryNonSort(J3DMatPacket*);
	void draw() const;
	void drawHead() const;
	void drawTail() const;

	J3DMatPacket** _00; // _00
	u32 _04;            // _04
	u32 _08;            // _08
	int _0C;            // _0C
	float _10;          // _10
	float _14;          // _14
	float _18;          // _18
	u32 _1C;            // _1C
	J3DPacket* _20;     // _20
};

#endif
