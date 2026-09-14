#include "Game/Entities/UmiMushi.h"

namespace Game {

/**
 * @note Address: 0x802F27DC
 * @note Size: 0x1DC
 */
void UmimushiTubeShadowNode::makeShadowSRT(JointShadowParm& parm, Matrixf* mat, Vector3f& vec1, Vector3f& vec2)
{
	Vector3f xVec;
	mat->getColumn(0, xVec);
	Vector3f yVec;
	mat->getColumn(1, yVec);
	mat->getColumn(3, vec2);

	vec2.x += xVec.x * parm._18 + yVec.x * parm._1C;
	vec2.y += xVec.y * parm._18 + yVec.y * parm._1C;
	vec2.z += xVec.z * parm._18 + yVec.z * parm._1C;

	Vector3f halfDelta;
	halfDelta.x = (vec2.x - vec1.x) * 0.5f;
	halfDelta.y = (vec2.y - vec1.y) * 0.5f;
	halfDelta.z = (vec2.z - vec1.z) * 0.5f;
	Vector3f side(halfDelta.y * parm.mRotation.z - halfDelta.z * parm.mRotation.y,
	              halfDelta.z * parm.mRotation.x - halfDelta.x * parm.mRotation.z,
	              halfDelta.x * parm.mRotation.y - halfDelta.y * parm.mRotation.x);
	side.normalise();

	Vector3f position;
	position.x = (vec2.x + vec1.x) * 0.5f;
	position.y = (vec2.y + vec1.y) * 0.5f + parm.mPositionMultiplier;
	position.z = (vec2.z + vec1.z) * 0.5f;

	Vector3f height(0.0f, (position.y - parm.mPosition.y) + 25.0f, 0.0f);
	side.x *= parm.mShadowScale;
	side.y *= parm.mShadowScale;
	side.z *= parm.mShadowScale;

	mMainMtx->setColumn(0, halfDelta);
	mMainMtx->setColumn(1, height);
	mMainMtx->setColumn(2, side);
	mMainMtx->setColumn(3, position);
}

/**
 * @note Address: 0x802F29B8
 * @note Size: 0xCC
 */
void UmimushiSphereShadowNode::makeShadowSRT(JointShadowParm& parm, Matrixf* mat, Vector3f& vec, bool isAlive)
{
	Vector3f xVec;
	Vector3f zVec;

	if (isAlive) {
		mat->getColumn(0, xVec);
		mat->getColumn(2, zVec);
		xVec *= (parm.mShadowScale + 2.5f);
		zVec *= parm.mShadowScale;
	} else {
		xVec = Vector3f(parm.mShadowScale, 0.0f, 0.0f);
		zVec = Vector3f(0.0f, 0.0f, parm.mShadowScale);
	}

	Vector3f pos = vec;
	pos.y += parm.mPositionMultiplier;

	Vector3f yVec(0.0f, (vec.y - parm.mPosition.y) + 25.0f, 0.0f);

	mMainMtx->setColumn(0, xVec);
	mMainMtx->setColumn(1, yVec);
	mMainMtx->setColumn(2, zVec);
	mMainMtx->setColumn(3, pos);
}

namespace UmiMushi {

/**
 * @note Address: 0x802F2A84
 * @note Size: 0xC4
 */
UmimushiShadowMgr::UmimushiShadowMgr(Obj* obj)
{
	mObj        = obj;
	mRootNode   = new JointShadowRootNode(obj);
	mTubeShadow = new UmimushiTubeShadowNode;
	mRootNode->add(mTubeShadow);
	mSphereShadow = new UmimushiSphereShadowNode;
	mRootNode->add(mSphereShadow);
}

/**
 * @note Address: 0x802F2B48
 * @note Size: 0x68
 */
void UmimushiShadowMgr::init()
{
	SysShape::Model* model = mObj->mModel;
	mWeakMatrix1           = model->getJoint("weak_joint1")->getWorldMatrix();
	mWeakMatrix2           = model->getJoint("weak_joint2")->getWorldMatrix();
}

/**
 * @note Address: 0x802F2BB0
 * @note Size: 0x15C
 */
void UmimushiShadowMgr::update()
{
	Vector3f position = mObj->getPosition();
	JointShadowParm parm;
	Vector3f vec1;
	Vector3f vec2;

	parm.mPosition = position;
	parm.mRotation = Vector3f(0.0f, 1.0f, 0.0f);

	vec1 = mWeakMatrix1->getColumn(3);

	parm._18                 = -12.5f;
	parm._1C                 = 0.0f;
	parm.mShadowScale        = 1.5f;
	parm.mPositionMultiplier = 0.0f;

	mTubeShadow->makeShadowSRT(parm, mWeakMatrix2, vec1, vec2);

	parm._18                 = 0.0f;
	parm._1C                 = 0.0f;
	parm.mShadowScale        = 15.0f;
	parm.mPositionMultiplier = -12.5f;

	mSphereShadow->makeShadowSRT(parm, mWeakMatrix2, vec2, mObj->isAlive());

	Pellet* pellet = mObj->mPellet;
	if (pellet && pellet->isCarried()) {
		if (mTubeShadow->mParent) {
			mTubeShadow->del();
		}
	} else if (!mTubeShadow->mParent) {
		mRootNode->addHead(mTubeShadow);
	}
}
} // namespace UmiMushi
} // namespace Game
