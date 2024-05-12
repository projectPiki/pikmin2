#ifndef _JSYSTEM_J3D_J3DUMTXCACHE_H
#define _JSYSTEM_J3D_J3DUMTXCACHE_H

#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DMtxBuffer.h"

struct J3DUMtxAnmCacheTableBase {
	~J3DUMtxAnmCacheTableBase();

	int mAnimationFrame; // _00, unknown
	int mJointCount;     // _04
	int mTime;           // _08
	Mtx* mMatrices;      // _0C, array of Mtxs
};

struct J3DUMtxAnmCacheTable : public J3DUMtxAnmCacheTableBase {
	J3DUMtxAnmCacheTable(J3DModel* model, J3DAnmTransform* transform);

	// _00-_10 = J3DUMtxAnmCacheTableBase
};

struct J3DUMtxCacheBase {
	virtual ~J3DUMtxCacheBase() { }          // _08 (weak)
	virtual void fetch(J3DModel*) const = 0; // _0C

	// _00 = VTBL
};

template <typename T>
struct J3DUMtxCacheRef : public J3DUMtxCacheBase {
	inline J3DUMtxCacheRef(J3DUMtxAnmCacheTable* table) { mCache = table; }

	virtual ~J3DUMtxCacheRef() // _08 (weak)
	{
		if (mCache) {
			delete mCache;
		}
	}
	virtual void fetch(J3DModel* model) const // _0C (weak)
	{
		J3DModelData* modelData = model->mModelData;
		int jointCount          = modelData->mJointTree.mJointCnt;

		if (model->checkFlag(J3DMODEL_UseDefaultJ3D)) {
			J3DUMtxAnmCacheTable* table = getTable();
			for (int i = 0; i < jointCount; i++) {
				PSMTXCopy(table->mMatrices[i + table->mAnimationFrame * table->mJointCount], model->mMtxBuffer->mWorldMatrices[i]);
			}
		} else {
			J3DUMtxAnmCacheTable* table = getTable();
			for (int i = 0; i < jointCount; i++) {
				PSMTXConcat(model->mPosMtx, table->mMatrices[i + table->mAnimationFrame * table->mJointCount],
				            model->mMtxBuffer->mWorldMatrices[i]);
			}
		}
	}

	inline J3DUMtxAnmCacheTable* getTable() const { return mCache; }

	// _00 = VTBL
	J3DUMtxAnmCacheTable* mCache; // _04
};

#endif
