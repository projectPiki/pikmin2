#include "Game/Entities/Houdai.h"

namespace Game {
namespace Houdai {

static const char houdaiShadowName[] = "246-HoudaiShadow";

/**
 * @note Address: 0x802BF47C
 * @note Size: 0x27C
 */
HoudaiShadowMgr::HoudaiShadowMgr(Obj* obj)
{
	mObj              = obj;
	mRootNode         = new JointShadowRootNode(obj);
	mBodySphereShadow = new SphereShadowNode;
	mRootNode->add(mBodySphereShadow);

	mMetalLegSphereShadow = new SphereShadowNode;
	mRootNode->add(mMetalLegSphereShadow);

	for (int i = 0; i < 4; i++) {
		mLegTubeShadow1[i]   = new TubeShadowSetNode;
		mLegTubeShadow2[i]   = new TubeShadowSetNode;
		mLegTubeShadow3[i]   = new TubeShadowSetNode;
		mLegTubeShadow4[i]   = new TubeShadowSetNode;
		mLegSphereShadow1[i] = new SphereShadowNode;
		mLegSphereShadow2[i] = new SphereShadowNode;
		mLegSphereShadow3[i] = new SphereShadowNode;
		mRootNode->add(mLegTubeShadow1[i]);
		mRootNode->add(mLegTubeShadow2[i]);
		mRootNode->add(mLegTubeShadow3[i]);
		mRootNode->add(mLegTubeShadow4[i]);
		mRootNode->add(mLegSphereShadow1[i]);
		mRootNode->add(mLegSphereShadow2[i]);
		mRootNode->add(mLegSphereShadow3[i]);

		for (int j = 0; j < 4; j++) {
			mJointPosPtrs[i][j] = nullptr;
		}
	}
}

/**
 * @note Address: 0x802BF6F8
 * @note Size: 0x1B0
 */
void HoudaiShadowMgr::init()
{
	SysShape::Model* model = mObj->mModel;

	mMatrix = model->getJoint("kosi")->getWorldMatrix();

	mLegTubeShadow1[0]->mJoint = model->getJoint("rhand1jnt");

	mLegTubeShadow1[0]->mJoint = model->getJoint("rhand1jnt");
	mLegTubeShadow2[0]->mJoint = model->getJoint("rhand1jnt");
	mLegTubeShadow3[0]->mJoint = model->getJoint("rhand2jnt");
	mLegTubeShadow4[0]->mJoint = model->getJoint("rhand3jnt");

	mLegTubeShadow1[1]->mJoint = model->getJoint("lhand1jnt");
	mLegTubeShadow2[1]->mJoint = model->getJoint("lhand1jnt");
	mLegTubeShadow3[1]->mJoint = model->getJoint("lhand2jnt");
	mLegTubeShadow4[1]->mJoint = model->getJoint("lhand3jnt");

	mLegTubeShadow1[2]->mJoint = model->getJoint("rfoot1jnt");
	mLegTubeShadow2[2]->mJoint = model->getJoint("rfoot1jnt");
	mLegTubeShadow3[2]->mJoint = model->getJoint("rfoot2jnt");
	mLegTubeShadow4[2]->mJoint = model->getJoint("rfoot3jnt");

	mLegTubeShadow1[3]->mJoint = model->getJoint("lfoot1jnt");
	mLegTubeShadow2[3]->mJoint = model->getJoint("lfoot1jnt");
	mLegTubeShadow3[3]->mJoint = model->getJoint("lfoot2jnt");
	mLegTubeShadow4[3]->mJoint = model->getJoint("lfoot3jnt");
}

/**
 * @note Address: 0x802BF8A8
 * @note Size: 0x18
 */
void HoudaiShadowMgr::setJointPosPtr(int p1, int p2, Vector3f* posPtr) { mJointPosPtrs[p1][p2] = posPtr; }

/**
 * @note Address: 0x802BF8C0
 * @note Size: 0x3F0
 */
void HoudaiShadowMgr::update()
{
	Vector3f pos = mObj->getTraceCentrePosition();
	JointShadowParm shadowParm;
	shadowParm.mPosition = pos;
	shadowParm.mRotation = Vector3f(0.5f, 3.0f, 0.5f);
	shadowParm.mRotation.normalise();

	Vector3f translation = mMatrix->getColumn(3);
	translation.y += 20.0f;

	f32 shadowScale = 5.0f;

	shadowParm._18                 = 0.0f;
	shadowParm._1C                 = 0.0f;
	shadowParm.mShadowScale        = 30.0f;
	shadowParm.mPositionMultiplier = -50.0f;

	mBodySphereShadow->makeShadowSRT(shadowParm, translation);

	Vector3f jointVectors[4];
	for (int i = 0; i < 4; i++) {
		shadowParm._18                 = 0.0f;
		shadowParm._1C                 = 0.0f;
		shadowParm.mShadowScale        = 2.5f;
		shadowParm.mPositionMultiplier = -10.0f;
		mLegTubeShadow1[i]->makeShadowSRT(shadowParm, translation, jointVectors[0]);

		shadowParm._18                 = 12.5f;
		shadowParm._1C                 = -45.0f;
		shadowParm.mShadowScale        = 2.5f;
		shadowParm.mPositionMultiplier = -10.0f;
		mLegTubeShadow2[i]->makeShadowSRT(shadowParm, jointVectors[0], jointVectors[1]);

		shadowParm._18                 = -5.0f;
		shadowParm._1C                 = -5.0f;
		shadowParm.mShadowScale        = 2.5f;
		shadowParm.mPositionMultiplier = -10.0f;
		mLegTubeShadow3[i]->makeShadowSRT(shadowParm, jointVectors[1], jointVectors[2]);

		shadowParm._18                 = 0.0f;
		shadowParm._1C                 = 0.0f;
		shadowParm.mShadowScale        = 2.5f;
		shadowParm.mPositionMultiplier = -10.0f;
		mLegTubeShadow4[i]->makeShadowSRT(shadowParm, jointVectors[2], jointVectors[3]);

		if (i == 0) { // metal leg
			shadowParm._18                 = 0.0f;
			shadowParm._1C                 = 0.0f;
			shadowParm.mShadowScale        = 6.0f;
			shadowParm.mPositionMultiplier = -5.0f;
			mLegSphereShadow1[i]->makeShadowSRT(shadowParm, jointVectors[0]);

			shadowParm.mPositionMultiplier = -5.0f;
			mLegSphereShadow2[i]->makeShadowSRT(shadowParm, jointVectors[1]);

			shadowParm.mPositionMultiplier = -5.0f;
			mLegSphereShadow3[i]->makeShadowSRT(shadowParm, jointVectors[2]);

			shadowParm.mShadowScale        = 10.0f;
			shadowParm.mPositionMultiplier = 5.0f;
			mMetalLegSphereShadow->makeShadowSRT(shadowParm, jointVectors[3]);

		} else { // bare leg
			shadowParm._18                 = 0.0f;
			shadowParm._1C                 = 0.0f;
			shadowParm.mShadowScale        = 1.5f;
			shadowParm.mPositionMultiplier = -5.0f;
			mLegSphereShadow1[i]->makeShadowSRT(shadowParm, jointVectors[0]);

			shadowParm.mPositionMultiplier = -5.0f;
			mLegSphereShadow2[i]->makeShadowSRT(shadowParm, jointVectors[1]);

			shadowParm.mPositionMultiplier = -5.0f;
			mLegSphereShadow3[i]->makeShadowSRT(shadowParm, jointVectors[2]);
		}

		for (int j = 0; j < 4; j++) {
			if (mJointPosPtrs[i][j]) {
				mJointPosPtrs[i][j]->x = jointVectors[j].x;
				mJointPosPtrs[i][j]->y = jointVectors[j].y;
				mJointPosPtrs[i][j]->z = jointVectors[j].z;
			}
		}
	}
}
} // namespace Houdai
} // namespace Game
