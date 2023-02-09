#ifndef _SYS_DRAWBUFFERS_H
#define _SYS_DRAWBUFFERS_H

#include "BitFlag.h"
#include "CNode.h"
#include "JSystem/J3D/J3DDrawBuffer.h"
#include "types.h"
#include "Vector3.h"

namespace Sys {

/**
 * @size{0x2C}
 */
struct DrawBuffer : public CNode {
	enum DrawBufferFlags {
		DRAWBUFF_Unk1 = 0x1,
	};

	struct CreateArg {

		CreateArg()
		{
			mSize = 1;
			mName = "noname\0"; // IMPORTANT !!!
			mFlags.clear();
		}

		u32 mSize;                          // _00
		BitFlag<u16> mFlags;                // _04
		const char* mName;                  // _08
		J3DDrawBuffer::ESortType mSortType; // _0C
		J3DDrawBuffer::EDrawType mDrawType; // _10
	};

	DrawBuffer();

	virtual ~DrawBuffer(); // _08

	void create(CreateArg&);
	void draw();
	void frameInit();

	inline void setFlag(u32 flag) { mFlags.typeView |= flag; }
	inline void resetFlag(u32 flag) { mFlags.typeView &= ~flag; }
	inline bool isFlag(u32 flag) const { return mFlags.typeView & flag; }

	BitFlag<u16> mFlags;                // _18
	J3DDrawBuffer* mBuffer;             // _1C
	int mIndex;                         // _20
	J3DDrawBuffer::ESortType mSortType; // _24
	J3DDrawBuffer::EDrawType mDrawType; // _28
};

/**
 * @size{0x20}
 */
struct DrawBuffers : public CNode {
	DrawBuffers();

	virtual ~DrawBuffers(); // _08

	void allocate(int);
	DrawBuffer* get(int);
	void frameInitAll();

	DrawBuffer* mBuffers; // _18
	int mCount;           // _1C
};
} // namespace Sys

#endif
