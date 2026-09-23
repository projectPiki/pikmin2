#include "Game/Entities/Tyre.h"
#include "Game/MapMgr.h"

namespace Game {

/**
 * @note Address: 0x803019EC
 * @note Size: 0x25C
 */
void TyreTubeShadowNode::makeShadowSRT(JointShadowParm& shadowParm, Matrixf* mat)
{
	Vector3f matVecs[4];
	Vector3f xVec;
	mat->getColumn(0, xVec);
	mat->getColumn(3, matVecs[3]);

	xVec.normalise();
	matVecs[0] = xVec * shadowParm._18;

	matVecs[2] = cross(xVec, shadowParm.mRotation);
	matVecs[2].normalise();
	matVecs[2].x = matVecs[2].x * shadowParm._1C;
	matVecs[2].y = matVecs[2].y * shadowParm._1C;
	matVecs[2].z = matVecs[2].z * shadowParm._1C;
	matVecs[3].y += shadowParm.mPositionMultiplier;
	matVecs[1].x = 0.0f;
	matVecs[1].z = 0.0f;
	f32 minY     = mapMgr->getMinY(matVecs[3]);
	if (matVecs[3].y - minY < 0.0f) {
		matVecs[1].y = 10.0f;
	} else {
		matVecs[1].y = (matVecs[3].y - minY) * 5.0f;
	}

	mMainMtx->setColumn(0, matVecs[0]);

	mMainMtx->setColumn(1, matVecs[1]);
	mMainMtx->setColumn(2, matVecs[2]);
	mMainMtx->setColumn(3, matVecs[3]);
}

namespace Tyre {

/**
 * @note Address: 0x80301C48
 * @note Size: 0xE4
 */
TyreShadowMgr::TyreShadowMgr(Obj* obj)
{
	mObj         = obj;
	mGlobalScale = 1.0f;
	mRootNode    = new JointShadowRootNode(obj);

	mFrontShadow              = new TyreTubeShadowNode;
	mFrontShadow->mCylinderID = 2;
	mRootNode->add(mFrontShadow);

	mBackShadow              = new TyreTubeShadowNode;
	mBackShadow->mCylinderID = 2;
	mRootNode->add(mBackShadow);
}

/**
 * @note Address: 0x80301D2C
 * @note Size: 0x68
 */
void TyreShadowMgr::init()
{
	SysShape::Model* model = mObj->mModel;
	mFrontMatrix           = model->getJoint("tyrefront")->getWorldMatrix();
	mBackMatrix            = model->getJoint("tyreback")->getWorldMatrix();
}

/**
 * @note Address: 0x80301D94
 * @note Size: 0xB4
 */
void TyreShadowMgr::update()
{
	JointShadowParm parm;
	parm.mPosition = mObj->getPosition();
	parm.mRotation = Vector3f(0.0f, 1.0f, 0.0f);

	parm._18                 = 31.5f * mGlobalScale;
	parm._1C                 = 17.5f * mGlobalScale;
	parm.mShadowScale        = 0.0f;
	parm.mPositionMultiplier = -17.5f;
	mFrontShadow->makeShadowSRT(parm, mFrontMatrix);
	mBackShadow->makeShadowSRT(parm, mBackMatrix);
}
} // namespace Tyre
} // namespace Game
