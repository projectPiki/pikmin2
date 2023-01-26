#ifndef _JSYSTEM_J3D_J3DDRAWBUFFER_H
#define _JSYSTEM_J3D_J3DDRAWBUFFER_H

#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DPacket;
struct J3DMatPacket;
struct J3DDrawBuffer;

typedef int (J3DDrawBuffer::*sortFunc)(J3DMatPacket*);
typedef void (J3DDrawBuffer::*drawFunc)() const;

/**
 * @size{0x24}
 */
struct J3DDrawBuffer {
	enum EDrawType {
		J3DDRAW_Head = 0,
		J3DDRAW_Tail = 1,
	};

	enum ESortType {
		J3DSORT_Mat     = 0,
		J3DSORT_MatAnm  = 1,
		J3DSORT_Z       = 2,
		J3DSORT_Model   = 3,
		J3DSORT_INVALID = 4,
		J3DSORT_NonSort = 5,
	};

	inline J3DDrawBuffer(u32 size)
	{
		initialize();
		allocBuffer(size);
	}

	void initialize();
	J3DErrType allocBuffer(u32);
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

	inline void calcZRatio();
	void setNonSort() { mSortType = J3DSORT_NonSort; }
	void setZSort() { mSortType = J3DSORT_Z; }

	static sortFunc sortFuncTable[6];
	static drawFunc drawFuncTable[2];
	static int entryNum;

	J3DMatPacket** mBuffer;     // _00
	u32 mBufferSize;            // _04
	EDrawType mDrawType;        // _08
	ESortType mSortType;        // _0C
	f32 mZNear;                 // _10
	f32 mZFar;                  // _14
	f32 mZRatio;                // _18
	Mtx* mZMtx;                 // _1C
	J3DPacket* mCallBackPacket; // _20
};

#endif
