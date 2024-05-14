#ifndef _JSYSTEM_J3D_J3DCLUSTER_H
#define _JSYSTEM_J3D_J3DCLUSTER_H

#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DDeformer;

struct J3DClusterKey {
	u16 _00;  // _00
	u16* _04; // _04
	u16* _08; // _08
};

struct J3DCluster {
	inline J3DDeformer* getDeformer() { return mDeformer; }

	f32 _00;                // _00
	f32 _04;                // _04
	int _08;                // _08
	u8 _0C;                 // _0C
	u16 _0E;                // _0E, unknown
	u16 mSize;              // _10
	u16 mCount;             // _12
	u16 _14;                // _14
	u16 _16;                // _16
	u16* _18;               // _18
	J3DClusterKey* mKeys;   // _1C
	J3DDeformer* mDeformer; // _20
};

#endif
