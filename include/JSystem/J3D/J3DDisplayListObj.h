#ifndef _JSYSTEM_J3D_J3DDISPLAYLISTOBJ_H
#define _JSYSTEM_J3D_J3DDISPLAYLISTOBJ_H

#include "types.h"

struct J3DDisplayListObj {
	u8* _00;    // _00
	unkptr _04; // _04
	u32 _08;    // _08
	int _0C;    // _0C

	int newDisplayList(u32);
	int newSingleDisplayList(u32);
	int single_To_Double();
	void setSingleDisplayList(void*, u32);
	void callDL() const;
	void beginDL();
	u32 endDL();
	void beginPatch();
	u32 endPatch();
};

#endif
