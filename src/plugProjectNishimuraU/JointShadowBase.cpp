#include "Game/shadowMgr.h"
#include "Game/JointFuncs.h"
#include "types.h"

namespace Game {

/**
 * @note Address: 0x802F2040
 * @note Size: 0x278
 */
void TubeShadowTransNode::makeShadowSRT(JointShadowParm& parm, Vector3f& originalPos, Vector3f& transformedPos)
{
	Matrixf* worldMtx = mJoint->getWorldMatrix();

	Vector3f xAxis, yAxis;
	worldMtx->getColumn(0, xAxis);
	worldMtx->getColumn(1, yAxis);

	worldMtx->getTranslation(originalPos);
	transformedPos.x = originalPos.x + (xAxis.x * parm._18 + yAxis.x * parm._1C);
	transformedPos.y = originalPos.y + (xAxis.y * parm._18 + yAxis.y * parm._1C);
	transformedPos.z = originalPos.z + (xAxis.z * parm._18 + yAxis.z * parm._1C);

	Vector3f x;
	x.x = (transformedPos.x - originalPos.x) * 0.5f;
	x.y = (transformedPos.y - originalPos.y) * 0.5f;
	x.z = (transformedPos.z - originalPos.z) * 0.5f;

	Vector3f scale(x.y * parm.mRotation.z - x.z * parm.mRotation.y, x.z * parm.mRotation.x - x.x * parm.mRotation.z,
	               x.x * parm.mRotation.y - x.y * parm.mRotation.x);
	scale.normalise();
	scale.x *= parm.mShadowScale;
	scale.y *= parm.mShadowScale;
	scale.z *= parm.mShadowScale;

	Vector3f w;
	w.x = (transformedPos.x + originalPos.x) * 0.5f + parm.mRotation.x * parm.mPositionMultiplier;
	w.y = (transformedPos.y + originalPos.y) * 0.5f + parm.mRotation.y * parm.mPositionMultiplier;
	w.z = (transformedPos.z + originalPos.z) * 0.5f + parm.mRotation.z * parm.mPositionMultiplier;

	f32 height = 100.0f + (w.y - parm.mPosition.y);
	Vector3f y;
	y.x = parm.mRotation.x * height;
	y.y = parm.mRotation.y * height;
	y.z = parm.mRotation.z * height;

	mMainMtx->setColumn(0, x);
	mMainMtx->setColumn(1, y);
	mMainMtx->setColumn(2, scale);
	mMainMtx->setColumn(3, w);
}

/**
 * @note Address: 0x802F22B8
 * @note Size: 0x278
 */
void TubeShadowSetNode::makeShadowSRT(JointShadowParm& parm, Vector3f& pos1, Vector3f& pos2)
{
	Matrixf* mat = mJoint->getWorldMatrix();

	Vector3f xVec, yVec;
	mat->getColumn(0, xVec);
	mat->getColumn(1, yVec);

	mat->getTranslation(pos2);
	pos2.x = pos2.x + (xVec.x * parm._18 + yVec.x * parm._1C);
	pos2.y = pos2.y + (xVec.y * parm._18 + yVec.y * parm._1C);
	pos2.z = pos2.z + (xVec.z * parm._18 + yVec.z * parm._1C);

	Vector3f newX;
	newX.x = (pos2.x - pos1.x) * 0.5f;
	newX.y = (pos2.y - pos1.y) * 0.5f;
	newX.z = (pos2.z - pos1.z) * 0.5f;

	Vector3f newZ(newX.y * parm.mRotation.z - newX.z * parm.mRotation.y, newX.z * parm.mRotation.x - newX.x * parm.mRotation.z,
	              newX.x * parm.mRotation.y - newX.y * parm.mRotation.x);
	newZ.normalise();
	newZ.x *= parm.mShadowScale;
	newZ.y *= parm.mShadowScale;
	newZ.z *= parm.mShadowScale;

	Vector3f newPos;
	newPos.x = (pos2.x + pos1.x) * 0.5f + parm.mRotation.x * parm.mPositionMultiplier;
	newPos.y = (pos2.y + pos1.y) * 0.5f + parm.mRotation.y * parm.mPositionMultiplier;
	newPos.z = (pos2.z + pos1.z) * 0.5f + parm.mRotation.z * parm.mPositionMultiplier;

	f32 height = 100.0f + (newPos.y - parm.mPosition.y);
	Vector3f newY;
	newY.x = parm.mRotation.x * height;
	newY.y = parm.mRotation.y * height;
	newY.z = parm.mRotation.z * height;

	mMainMtx->setColumn(0, newX);
	mMainMtx->setColumn(1, newY);
	mMainMtx->setColumn(2, newZ);
	mMainMtx->setColumn(3, newPos);
}

/**
 * @note Address: 0x802F2530
 * @note Size: 0x1AC
 */
void TubeShadowPosNode::makeShadowSRT(JointShadowParm& parm, Vector3f& pos1, Vector3f& pos2)
{
	Vector3f newX;
	newX.x = (pos2.x - pos1.x) * 0.5f;
	newX.y = (pos2.y - pos1.y) * 0.5f;
	newX.z = (pos2.z - pos1.z) * 0.5f;

	Vector3f newZ(newX.y * parm.mRotation.z - newX.z * parm.mRotation.y, newX.z * parm.mRotation.x - newX.x * parm.mRotation.z,
	              newX.x * parm.mRotation.y - newX.y * parm.mRotation.x);
	newZ.normalise();
	newZ.x *= parm.mShadowScale;
	newZ.y *= parm.mShadowScale;
	newZ.z *= parm.mShadowScale;

	Vector3f newPos;
	newPos.x = (pos2.x + pos1.x) * 0.5f + parm.mRotation.x * parm.mPositionMultiplier;
	newPos.y = (pos2.y + pos1.y) * 0.5f + parm.mRotation.y * parm.mPositionMultiplier;
	newPos.z = (pos2.z + pos1.z) * 0.5f + parm.mRotation.z * parm.mPositionMultiplier;

	f32 height = 100.0f + (newPos.y - parm.mPosition.y);
	Vector3f newY;
	newY.x = parm.mRotation.x * height;
	newY.y = parm.mRotation.y * height;
	newY.z = parm.mRotation.z * height;

	mMainMtx->setColumn(0, newX);
	mMainMtx->setColumn(1, newY);
	mMainMtx->setColumn(2, newZ);
	mMainMtx->setColumn(3, newPos);
}

/**
 * @note Address: 0x802F26DC
 * @note Size: 0x100
 */
void SphereShadowNode::makeShadowSRT(JointShadowParm& parm, Vector3f& pos)
{
	Vector3f newX(parm.mShadowScale, 0.0f, 0.0f);
	Vector3f newZ(newX.y * parm.mRotation.z - newX.z * parm.mRotation.y, newX.z * parm.mRotation.x - newX.x * parm.mRotation.z,
	              newX.x * parm.mRotation.y - newX.y * parm.mRotation.x);
	newZ.normalise();
	newZ.x *= parm.mShadowScale;
	newZ.y *= parm.mShadowScale;
	newZ.z *= parm.mShadowScale;

	Vector3f newPos;
	newPos.x = parm.mRotation.x * parm.mPositionMultiplier + pos.x;
	newPos.y = parm.mRotation.y * parm.mPositionMultiplier + pos.y;
	newPos.z = parm.mRotation.z * parm.mPositionMultiplier + pos.z;

	f32 height = 100.0f + (pos.y - parm.mPosition.y);
	Vector3f newY;
	newY.x = parm.mRotation.x * height;
	newY.y = parm.mRotation.y * height;
	newY.z = parm.mRotation.z * height;

	mMainMtx->setColumn(0, newX);
	mMainMtx->setColumn(1, newY);
	mMainMtx->setColumn(2, newZ);
	mMainMtx->setColumn(3, newPos);
}
} // namespace Game
