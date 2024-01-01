#ifndef _JSYSTEM_J3D_J3DDRAWBUFFER_H
#define _JSYSTEM_J3D_J3DDRAWBUFFER_H

#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DPacket;
struct J3DMatPacket;
struct J3DDrawBuffer;

typedef bool (J3DDrawBuffer::*sortFunc)(J3DMatPacket*);
typedef void (J3DDrawBuffer::*drawFunc)() const;

// Apparently this is needed
inline f32 J3DCalcZValue(register Mtx* m, register Vec v)
{
	register f32 temp_f4;
	register f32 out;
	register f32 temp_f0;
	register f32 temp_f2;
	register f32 temp_f1 = 1.0f;

#ifdef __MWERKS__ // clang-format off
	asm {
		psq_l temp_f0, 0(v), 0, 0 /* qr0 */
		lfs temp_f2, 8(v)
		psq_l temp_f4, 32(m), 0, 0 /* qr0 */
		psq_l out, 40(m), 0, 0 /* qr0 */
		ps_merge00 temp_f2, temp_f2, temp_f1
		ps_mul temp_f4, temp_f0, temp_f4
		ps_madd out, temp_f2, out, temp_f4
		ps_sum0 out, out, out, out
	}
#endif // clang-format on

	return out;
}

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
	bool entryZSort(J3DMatPacket*);
	bool entryModelSort(J3DMatPacket*);
	bool entryInvalidSort(J3DMatPacket*);
	bool entryNonSort(J3DMatPacket*);
	void draw() const;
	void drawHead() const;
	void drawTail() const;

	u32 getEntryTableSize() { return mBufferSize; }

	inline void calcZRatio();
	void setNonSort() { mSortType = J3DSORT_NonSort; }
	void setZSort() { mSortType = J3DSORT_Z; }
	void setZMtx(MtxP mtx) { mMtxZ = mtx; }

	static sortFunc sortFuncTable[6];
	static drawFunc drawFuncTable[2];
	static int entryNum;

	J3DPacket** mBuffer;        // _00
	u32 mBufferSize;            // _04
	EDrawType mDrawType;        // _08
	ESortType mSortType;        // _0C
	f32 mNearZ;                 // _10
	f32 mFarZ;                  // _14
	f32 mRatioZ;                // _18
	MtxP mMtxZ;                 // _1C
	J3DPacket* mCallBackPacket; // _20
};

#endif
