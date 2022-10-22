#ifndef _JSYSTEM_J3D_J3DDISPLAYLISTOBJ_H
#define _JSYSTEM_J3D_J3DDISPLAYLISTOBJ_H

#include "Dolphin/gd.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DDisplayListObj {
	inline J3DDisplayListObj()
	    : _00(nullptr)
	    , _04(nullptr)
	    , _08(0)
	    , _0C(0)
	{
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

	u8* _00; // _00
	u8* _04; // _04
	u32 _08; // _08
	int _0C; // _0C

	static int sInterruptFlag;
	static GDCurrentDL sGDLObj;
};

#endif
