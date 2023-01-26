#ifndef _JSYSTEM_J3D_J3DDISPLAYLISTOBJ_H
#define _JSYSTEM_J3D_J3DDISPLAYLISTOBJ_H

#include "Dolphin/gd.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DDisplayListObj {
	inline J3DDisplayListObj()
	{
		mDisplayList[0] = nullptr;
		mDisplayList[1] = nullptr;
		mSize           = 0;
		mCapacity       = 0;
	}

	J3DErrType newDisplayList(u32);
	J3DErrType newSingleDisplayList(u32);
	J3DErrType single_To_Double();
	void setSingleDisplayList(void*, u32);
	void callDL() const;
	void beginDL();
	u32 endDL();
	void beginPatch();
	u32 endPatch();

	// unused/inlined:
	void swapBuffer();

	u8* getDisplayList(int idx) const { return mDisplayList[idx]; }
	u32 getDisplayListSize() const { return mSize; }

	static int sInterruptFlag;
	static GDCurrentDL sGDLObj;

	u8* mDisplayList[2]; // _00
	u32 mSize;           // _08
	int mCapacity;       // _0C
};

#endif
