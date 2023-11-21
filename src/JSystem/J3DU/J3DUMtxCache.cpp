#include "JSystem/J3DU/J3DUMtxCache.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DAnmLoader.h"

namespace {
/*
 * --INFO--
 * Address:	800178CC
 * Size:	000144
 */
template <typename T>
void init(J3DModel* model, J3DAnmTransform* transform, T* table)
{
	J3DModelData* data      = model->getModelData();
	J3DMtxCalc* calc        = data->getJointNodePointer(0)->getMtxCalc();
	J3DMtxCalcAnmBase* base = J3DNewMtxCalcAnm(data->mJointTree.mFlags & 0xF, transform);

	data->getJointNodePointer(0)->mMtxCalc = base;

	int frameCount = transform->mMaxFrame;
	int jointCount = data->mJointTree.mJointCnt;

	for (int i = 0; i < frameCount; i++) {
		transform->mCurrentFrame = i;
		model->calc();

		for (int j = 0; j < jointCount; j++) {
			PSMTXCopy(model->mMtxBuffer->mWorldMatrices[j], table->mMatrices[j + i * table->mJointCount]);
		}

		j3dSys.mDrawBuffer[0]->frameInit();
		j3dSys.mDrawBuffer[1]->frameInit();
	}

	delete base;

	data->getJointNodePointer(0)->mMtxCalc = calc;
}
} // namespace

/*
 * --INFO--
 * Address:	800177EC
 * Size:	00005C
 */
J3DUMtxAnmCacheTableBase::~J3DUMtxAnmCacheTableBase()
{
	if (mMatrices) {
		delete[] mMatrices;
	}
}

/*
 * --INFO--
 * Address:	80017848
 * Size:	000084
 */
J3DUMtxAnmCacheTable::J3DUMtxAnmCacheTable(J3DModel* model, J3DAnmTransform* transform)
{
	int jointCount = model->mModelData->getJointNum();
	int frameCount = transform->getFrameMax();

	_00         = 0;
	mJointCount = jointCount;
	mTime       = frameCount;
	mMatrices   = new (0x20) Mtx[frameCount * jointCount];
	init<J3DUMtxAnmCacheTable>(model, transform, this);
}
