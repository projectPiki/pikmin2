#ifndef _JSYSTEM_J3D_J3DUMTXCACHE_H
#define _JSYSTEM_J3D_J3DUMTXCACHE_H

#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DMtxBuffer.h"

struct J3DUMtxAnmCacheTableBase {
	~J3DUMtxAnmCacheTableBase();
};

struct J3DUMtxAnmCacheTable : public J3DUMtxAnmCacheTableBase {
	J3DUMtxAnmCacheTable(J3DModel* model, J3DAnmTransform* transform);

	// some of this may be in J3DUMtxAnmCacheTableBase and inherited
	int _00;          // _00, unknown
	int m_jointCount; // _04
	int m_time;       // _08
	Mtx* m_matrices;  // _0C, array of Mtxs
};

struct J3DUMtxCacheBase {
	virtual ~J3DUMtxCacheBase() { }          // _08 (weak)
	virtual void fetch(J3DModel*) const = 0; // _0C

	// _00 = VTBL
};

template <typename T>
struct J3DUMtxCacheRef : public J3DUMtxCacheBase {
	inline J3DUMtxCacheRef(J3DUMtxAnmCacheTable* table) { m_cache = table; }

	virtual ~J3DUMtxCacheRef() // _08 (weak)
	{
		if (m_cache) {
			delete m_cache;
		}
	}
	virtual void fetch(J3DModel* model) const // _0C (weak)
	{
		J3DModelData* modelData = model->m_modelData;
		int jointCount          = modelData->m_jointTree.m_jointCnt;

		if (model->_08 & 0x2) {
			J3DUMtxAnmCacheTable* table = getTable();
			for (int i = 0; i < jointCount; i++) {
				PSMTXCopy(table->m_matrices[i + table->_00 * table->m_jointCount], model->m_mtxBuffer->m_worldMatrices[i]);
			}
		} else {
			J3DUMtxAnmCacheTable* table = getTable();
			for (int i = 0; i < jointCount; i++) {
				PSMTXConcat(model->_24, table->m_matrices[i + table->_00 * table->m_jointCount], model->m_mtxBuffer->m_worldMatrices[i]);
			}
		}
	}

	inline J3DUMtxAnmCacheTable* getTable() const { return m_cache; }

	// _00 = VTBL
	J3DUMtxAnmCacheTable* m_cache; // _04
};

#endif
