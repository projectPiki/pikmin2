#include "Game/Entities/Damagumo.h"

namespace Game {
namespace Damagumo {

static const char damagumoShadowName[] = "246-DamagumoShadow";

/**
 * @note Address: 0x802AAD94
 * @note Size: 0x20C
 */
DamagumoShadowMgr::DamagumoShadowMgr(Obj* obj)
{
	mObj              = obj;
	mRootNode         = new JointShadowRootNode(obj);
	mBodySphereShadow = new SphereShadowNode;

	mRootNode->add(mBodySphereShadow);

	for (int i = 0; i < 4; i++) {
		mLegTubeShadow1[i]   = new TubeShadowTransNode;
		mLegTubeShadow2[i]   = new TubeShadowSetNode;
		mLegTubeShadow3[i]   = new TubeShadowSetNode;
		mLegSphereShadow1[i] = new SphereShadowNode;
		mLegSphereShadow2[i] = new SphereShadowNode;
		mLegSphereShadow3[i] = new SphereShadowNode;
		mRootNode->add(mLegTubeShadow1[i]);
		mRootNode->add(mLegTubeShadow2[i]);
		mRootNode->add(mLegTubeShadow3[i]);
		mRootNode->add(mLegSphereShadow1[i]);
		mRootNode->add(mLegSphereShadow2[i]);
		mRootNode->add(mLegSphereShadow3[i]);

		for (int j = 0; j < 4; j++) {
			mJointPosPtrs[i][j] = nullptr;
		}
	}
}

/**
 * @note Address: 0x802AAFA0
 * @note Size: 0x14C
 */
void DamagumoShadowMgr::init()
{
	SysShape::Model* model = mObj->mModel;

	mMatrix = model->getJoint("kosi")->getWorldMatrix();

	mLegTubeShadow1[0]->mJoint = model->getJoint("rhand1jnt");
	mLegTubeShadow2[0]->mJoint = model->getJoint("rhand2jnt");
	mLegTubeShadow3[0]->mJoint = model->getJoint("rhand3jnt");

	mLegTubeShadow1[1]->mJoint = model->getJoint("lhand1jnt");
	mLegTubeShadow2[1]->mJoint = model->getJoint("lhand2jnt");
	mLegTubeShadow3[1]->mJoint = model->getJoint("lhand3jnt");

	mLegTubeShadow1[2]->mJoint = model->getJoint("rfoot1jnt");
	mLegTubeShadow2[2]->mJoint = model->getJoint("rfoot2jnt");
	mLegTubeShadow3[2]->mJoint = model->getJoint("rfoot3jnt");

	mLegTubeShadow1[3]->mJoint = model->getJoint("lfoot1jnt");
	mLegTubeShadow2[3]->mJoint = model->getJoint("lfoot2jnt");
	mLegTubeShadow3[3]->mJoint = model->getJoint("lfoot3jnt");
}

/**
 * @note Address: 0x802AB0EC
 * @note Size: 0x18
 */
void DamagumoShadowMgr::setJointPosPtr(int p1, int p2, Vector3f* posPtr) { mJointPosPtrs[p1][p2] = posPtr; }

/**
 * @note Address: 0x802AB104
 * @note Size: 0x39C
 */
void DamagumoShadowMgr::update()
{
	Vector3f pos = mObj->getTraceCentrePosition();
	JointShadowParm shadowParm;
	shadowParm.mPosition = pos;
	shadowParm.mRotation = Vector3f(0.5f, 3.0f, 0.5f);
	shadowParm.mRotation.normalise();

	Vector3f translation = mMatrix->getColumn(3);
	translation.y += -30.0f;

	f32 shadowScale = mObj->mShadowScale;

	f32 shadowA = 2.5f * shadowScale;
	f32 shadowB = 10.0f * shadowScale;
	f32 shadowC = 17.5f * shadowScale;

	shadowParm._18                 = 0.0f;
	shadowParm._1C                 = 0.0f;
	shadowParm.mShadowScale        = 30.0f * shadowScale;
	shadowParm.mPositionMultiplier = -50.0f;

	mBodySphereShadow->makeShadowSRT(shadowParm, translation);

	Vector3f jointVectors[4];
	for (int i = 0; i < 4; i++) {
		shadowParm._18                 = 66.0f;
		shadowParm._1C                 = -71.0f;
		shadowParm.mShadowScale        = shadowA;
		shadowParm.mPositionMultiplier = -10.0f;
		mLegTubeShadow1[i]->makeShadowSRT(shadowParm, jointVectors[0], jointVectors[1]);

		shadowParm._18                 = 0.0f;
		shadowParm._1C                 = 0.0f;
		shadowParm.mShadowScale        = shadowA;
		shadowParm.mPositionMultiplier = -10.0f;
		mLegTubeShadow2[i]->makeShadowSRT(shadowParm, jointVectors[1], jointVectors[2]);

		shadowParm._18                 = -5.0f;
		shadowParm._1C                 = -5.0f;
		shadowParm.mShadowScale        = shadowA;
		shadowParm.mPositionMultiplier = -10.0f;
		mLegTubeShadow3[i]->makeShadowSRT(shadowParm, jointVectors[2], jointVectors[3]);

		shadowParm._18                 = 0.0f;
		shadowParm._1C                 = 0.0f;
		shadowParm.mShadowScale        = shadowB;
		shadowParm.mPositionMultiplier = -5.0f;
		mLegSphereShadow1[i]->makeShadowSRT(shadowParm, jointVectors[1]);

		shadowParm.mPositionMultiplier = -8.0f;
		mLegSphereShadow2[i]->makeShadowSRT(shadowParm, jointVectors[2]);

		shadowParm.mShadowScale        = shadowC;
		shadowParm.mPositionMultiplier = 5.0f;
		mLegSphereShadow3[i]->makeShadowSRT(shadowParm, jointVectors[3]);

		for (int j = 0; j < 4; j++) {
			if (mJointPosPtrs[i][j]) {
				mJointPosPtrs[i][j]->x = jointVectors[j].x;
				mJointPosPtrs[i][j]->y = jointVectors[j].y;
				mJointPosPtrs[i][j]->z = jointVectors[j].z;
			}
		}
	}
}

} // namespace Damagumo
} // namespace Game
