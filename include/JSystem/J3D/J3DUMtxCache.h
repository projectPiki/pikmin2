#ifndef _JSYSTEM_J3D_J3DUMTXCACHE_H
#define _JSYSTEM_J3D_J3DUMTXCACHE_H

#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DAnmTransform.h"

struct J3DUMtxAnmCacheTable {
	J3DUMtxAnmCacheTable(J3DModel* model, J3DAnmTransform* transform);

	int _00;          // _00, unknown
	int m_jointCount; // _04
	int m_time;       // _08
	Mtx* m_matrices;  // _0C, array of Mtxs
};

struct J3DUMtxCacheBase {
	virtual ~J3DUMtxCacheBase();             // _08 (weak)
	virtual void fetch(J3DModel*) const = 0; // _0C

	// _00 = VTBL
};

template <typename T>
struct J3DUMtxCacheRef : public J3DUMtxCacheBase {
	// this ctor is wrong
	inline J3DUMtxCacheRef(J3DUMtxAnmCacheTable* table) { m_cache = table; }

	virtual ~J3DUMtxCacheRef();                // _08 (weak)
	virtual void fetch(J3DModel* model) const; // _0C (weak)

	// _00 = VTBL
	J3DUMtxAnmCacheTable* m_cache; // _04
};

#endif
