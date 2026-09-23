#include "Game/Entities/BigTreasure.h"

namespace Game {
namespace BigTreasure {

static const char bigTreasureShadowName[] = "246-BigTreasureShadow";

/**
 * @note Address: 0x802DA5C8
 * @note Size: 0x418
 */
BigTreasureShadowMgr::BigTreasureShadowMgr(Obj* obj)
{
	mObj      = obj;
	mRootNode = new JointShadowRootNode(obj);

	// body/head shadow nodes?
	mHeadShadow1 = new SphereShadowNode;
	mHeadShadow2 = new SphereShadowNode;
	mRootNode->add(mHeadShadow1);
	mRootNode->add(mHeadShadow2);

	// set up leg shadow nodes
	for (int i = 0; i < 4; i++) {
		mLeg1Shadows[i] = new TubeShadowSetNode;
		mLeg2Shadows[i] = new TubeShadowSetNode;
		mLeg3Shadows[i] = new TubeShadowSetNode;
		mLeg4Shadows[i] = new TubeShadowSetNode;
		_D0[i]          = new SphereShadowNode;
		_E0[i]          = new SphereShadowNode;
		_F0[i]          = new SphereShadowNode;

		mRootNode->add(mLeg1Shadows[i]);
		mRootNode->add(mLeg2Shadows[i]);
		mRootNode->add(mLeg3Shadows[i]);
		mRootNode->add(mLeg4Shadows[i]);
		mRootNode->add(_D0[i]);
		mRootNode->add(_E0[i]);
		mRootNode->add(_F0[i]);

		for (int j = 0; j < 4; j++) {
			mJointPositions[i][j] = nullptr;
		}
	}

	// set up treasure shadow nodes
	for (int i = 0; i < BIGATTACK_Count; i++) {
		mTreasureShadowNodes[i] = new SphereShadowNode;
		mRootNode->add(mTreasureShadowNodes[i]);
	}

	// set up hand shadow nodes
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			mHandTubeNodes[i][j] = new TubeShadowPosNode;
			mRootNode->add(mHandTubeNodes[i][j]);

			if (j < 2) {
				mHandSphereNodes[i][j] = new SphereShadowNode;
				mRootNode->add(mHandSphereNodes[i][j]);
			}
		}
	}

	// set up antenna shadow nodes
	for (int i = 0; i < 2; i++) {
		mAntennaSphereNodes[i] = new SphereShadowNode;
		mRootNode->add(mAntennaSphereNodes[i]);

		for (int j = 0; j < 5; j++) {
			mAntennaTubeNodes[i][j] = new TubeShadowPosNode;
			mRootNode->add(mAntennaTubeNodes[i][j]);
		}
	}
}

/**
 * @note Address: 0x802DA9E0
 * @note Size: 0x2B4
 */
void BigTreasure::BigTreasureShadowMgr::init()
{
	SysShape::Model* model  = mObj->mModel;
	mBodyMatrix             = model->getJoint("kosi")->getWorldMatrix();
	mLeg1Shadows[0]->mJoint = model->getJoint("rhand1jnt");
	mLeg2Shadows[0]->mJoint = model->getJoint("rhand2jnt");
	mLeg3Shadows[0]->mJoint = model->getJoint("rhand2jnt");
	mLeg4Shadows[0]->mJoint = model->getJoint("rhand3jnt");

	mLeg1Shadows[1]->mJoint = model->getJoint("lhand1jnt");
	mLeg2Shadows[1]->mJoint = model->getJoint("lhand2jnt");
	mLeg3Shadows[1]->mJoint = model->getJoint("lhand2jnt");
	mLeg4Shadows[1]->mJoint = model->getJoint("lhand3jnt");

	mLeg1Shadows[2]->mJoint = model->getJoint("rfoot1jnt");
	mLeg2Shadows[2]->mJoint = model->getJoint("rfoot2jnt");
	mLeg3Shadows[2]->mJoint = model->getJoint("rfoot2jnt");
	mLeg4Shadows[2]->mJoint = model->getJoint("rfoot3jnt");

	mLeg1Shadows[3]->mJoint = model->getJoint("lfoot1jnt");
	mLeg2Shadows[3]->mJoint = model->getJoint("lfoot2jnt");
	mLeg3Shadows[3]->mJoint = model->getJoint("lfoot2jnt");
	mLeg4Shadows[3]->mJoint = model->getJoint("lfoot3jnt");

	mElecMatrix  = model->getJoint("otakara_elec")->getWorldMatrix();
	mFireMatrix  = model->getJoint("otakara_fire")->getWorldMatrix();
	mGasMatrix   = model->getJoint("otakara_gas")->getWorldMatrix();
	mWaterMatrix = model->getJoint("otakara_water")->getWorldMatrix();

	mLeftArmMatrix[0] = model->getJoint("larm1")->getWorldMatrix();
	mLeftArmMatrix[1] = model->getJoint("larm2")->getWorldMatrix();
	mLeftArmMatrix[2] = model->getJoint("larm3")->getWorldMatrix();

	mRightArmMatrix[0] = model->getJoint("rarm1")->getWorldMatrix();
	mRightArmMatrix[1] = model->getJoint("rarm2")->getWorldMatrix();
	mRightArmMatrix[2] = model->getJoint("rarm3")->getWorldMatrix();

	mLeftAntennaMatrix[0] = model->getJoint("lantenna1")->getWorldMatrix();
	mLeftAntennaMatrix[1] = model->getJoint("lantenna2")->getWorldMatrix();

	mRightAntennaMatrix[0] = model->getJoint("rantenna1")->getWorldMatrix();
	mRightAntennaMatrix[1] = model->getJoint("rantenna2")->getWorldMatrix();
}

/**
 * @note Address: 0x802DAC94
 * @note Size: 0x8
 */
void BigTreasureShadowMgr::setKosiJointPosPtr(Vector3f* posPtr)
{
	mKosiPosition = posPtr;
}

/**
 * @note Address: 0x802DAC9C
 * @note Size: 0x18
 */
void BigTreasureShadowMgr::setJointPosPtr(int jointIndex, int positionIndex, Vector3f* position)
{
	mJointPositions[jointIndex][positionIndex] = position;
}

/**
 * @note Address: 0x802DACB4
 * @note Size: 0x510
 */
void BigTreasureShadowMgr::update()
{
	JointShadowParm parm;
	parm.mPosition = mObj->getTraceCentrePosition();
	parm.mRotation = Vector3f(0.5f, 3.0f, 0.5f);
	parm.mRotation.normalise();
	*mKosiPosition = mBodyMatrix->getColumn(3);
	mKosiPosition->y += -20.0f;

	f32 p1 = 5.0f * mObj->mShadowScale;
	f32 p2 = 2.5f * mObj->mShadowScale;

	// this section needs fixing
	const f32 theta = mObj->getFaceDir();

	Vector3f pos1 = getDirection(theta);
	Vector3f pos2 = pos1;

	parm._18                 = 0.0f;
	parm._1C                 = 0.0f;
	parm.mShadowScale        = 20.0f * mObj->mShadowScale;
	parm.mPositionMultiplier = -75.0f;

	pos1 *= 20.0f;
	pos2 *= -10.0f;

	pos1 += *mKosiPosition;
	pos2 += *mKosiPosition;

	mHeadShadow1->makeShadowSRT(parm, pos1);

	parm.mShadowScale = 27.0f * mObj->mShadowScale;

	mHeadShadow2->makeShadowSRT(parm, pos2);

	Vector3f shadowVecs[4];

	for (int i = 0; i < 4; i++) {
		parm._18                 = 92.5f;
		parm._1C                 = -62.5f;
		parm.mShadowScale        = p1;
		parm.mPositionMultiplier = -10.0f;
		mLeg1Shadows[i]->makeShadowSRT(parm, *mKosiPosition, shadowVecs[0]);

		parm._18                 = 0.0f;
		parm._1C                 = 0.0f;
		parm.mShadowScale        = p1;
		parm.mPositionMultiplier = -10.0f;
		mLeg2Shadows[i]->makeShadowSRT(parm, shadowVecs[0], shadowVecs[1]);

		parm._18                 = 95.0f;
		parm._1C                 = -20.0f;
		parm.mShadowScale        = p1;
		parm.mPositionMultiplier = -10.0f;
		mLeg3Shadows[i]->makeShadowSRT(parm, shadowVecs[1], shadowVecs[2]);

		parm._18                 = 0.0f;
		parm._1C                 = 0.0f;
		parm.mShadowScale        = p1;
		parm.mPositionMultiplier = -10.0f;
		mLeg4Shadows[i]->makeShadowSRT(parm, shadowVecs[2], shadowVecs[3]);

		parm._18                 = 0.0f;
		parm._1C                 = 0.0f;
		parm.mShadowScale        = p2;
		parm.mPositionMultiplier = -10.0f;
		_D0[i]->makeShadowSRT(parm, shadowVecs[0]);
		_E0[i]->makeShadowSRT(parm, shadowVecs[1]);
		_F0[i]->makeShadowSRT(parm, shadowVecs[2]);

		for (int j = 0; j < 4; j++) {
			if (mJointPositions[i][j]) {
				mJointPositions[i][j]->x = shadowVecs[j].x;
				mJointPositions[i][j]->y = shadowVecs[j].y;
				mJointPositions[i][j]->z = shadowVecs[j].z;
			}
		}
	}

	updateTreasureShadow(parm);
	updateHandShadow(parm);
	updateAntennaShadow(parm);
}

/**
 * @note Address: 0x802DB1C4
 * @note Size: 0xF4
 */
void BigTreasureShadowMgr::updateTreasureShadow(JointShadowParm& parm)
{
	parm.mShadowScale        = 30.0f * mObj->mShadowScale;
	parm._18                 = 0.0f;
	parm._1C                 = 0.0f;
	parm.mPositionMultiplier = -35.0f;
	for (int i = 0; i < BIGATTACK_Count; i++) {
		if (mObj->isCapturedTreasure(i)) {
			if (!mTreasureShadowNodes[i]->mParent) {
				mRootNode->add(mTreasureShadowNodes[i]);
			}

			Vector3f treasurePos = getTreasureMatrix(i)->getColumn(3);
			mTreasureShadowNodes[i]->makeShadowSRT(parm, treasurePos);

		} else if (mTreasureShadowNodes[i]->mParent) {
			mTreasureShadowNodes[i]->del();
		}
	}
}

/**
 * @note Address: 0x802DB2B8
 * @note Size: 0x348
 */
void BigTreasureShadowMgr::updateHandShadow(JointShadowParm& parm)
{
	parm._18                 = 0.0f;
	parm._1C                 = 0.0f;
	parm.mPositionMultiplier = -10.0f;

	for (int i = 0; i < 2; i++) {
		parm.mShadowScale = 4.0f * mObj->mShadowScale;
		Vector3f pos1     = getArmMatrices(i)[0]->getColumn(3);
		Vector3f pos2     = getArmMatrices(i)[1]->getColumn(3);
		Vector3f pos3     = getArmMatrices(i)[2]->getColumn(3);
		Vector3f pos4     = pos3;
		Vector3f pos5     = pos3;

		mHandTubeNodes[i][0]->makeShadowSRT(parm, pos1, pos2);
		mHandTubeNodes[i][1]->makeShadowSRT(parm, pos2, pos3);

		Vector3f xVec, yVec;

		getArmMatrices(i)[2]->getColumn(0, xVec);
		getArmMatrices(i)[2]->getColumn(1, yVec);

		parm.mShadowScale = 3.0f * mObj->mShadowScale;

		Vector3f pos4X = xVec;
		pos4X.scale(50.0f);
		Vector3f pos4Y = yVec;
		pos4Y.scale(-7.5f);
		pos4 += pos4X;
		pos4 += pos4Y;

		mHandTubeNodes[i][2]->makeShadowSRT(parm, pos3, pos4);

		parm.mShadowScale = 2.0f * mObj->mShadowScale;

		Vector3f pos5X = xVec;
		pos5X.scale(35.0f);
		Vector3f pos5Y = yVec;
		pos5Y.scale(5.0f);
		pos5 += pos5X;
		pos5 += pos5Y;

		mHandTubeNodes[i][3]->makeShadowSRT(parm, pos3, pos5);

		parm.mShadowScale = 2.5f * mObj->mShadowScale;

		mHandSphereNodes[i][0]->makeShadowSRT(parm, pos2);
		mHandSphereNodes[i][1]->makeShadowSRT(parm, pos3);
	}
}

/**
 * @note Address: 0x802DB600
 * @note Size: 0x544
 */
void BigTreasureShadowMgr::updateAntennaShadow(JointShadowParm& parm)
{
	parm._18                 = 0.0f;
	parm._1C                 = 0.0f;
	parm.mPositionMultiplier = -10.0f;

	for (int i = 0; i < 2; i++) {
		parm.mShadowScale = 5.0f * mObj->mShadowScale;

		Vector3f pos1 = getAntennaMatrices(i)[0]->getColumn(3);
		Vector3f pos2 = getAntennaMatrices(i)[1]->getColumn(3);

		mAntennaTubeNodes[i][0]->makeShadowSRT(parm, pos1, pos2);

		Vector3f xVec1, yVec1;
		getAntennaMatrices(i)[1]->getColumn(0, xVec1);
		getAntennaMatrices(i)[1]->getColumn(1, yVec1);

		parm.mShadowScale = 4.0f * mObj->mShadowScale;

		Vector3f xOffset1 = xVec1;
		xOffset1.scale(55.0f);
		Vector3f yOffset1 = yVec1;
		yOffset1.scale(0.0f);
		Vector3f pos3 = pos2;
		pos3 += xOffset1;
		pos3 += yOffset1;

		mAntennaTubeNodes[i][1]->makeShadowSRT(parm, pos2, pos3);

		parm.mShadowScale = 5.0f * mObj->mShadowScale;

		Vector3f xOffset2a = xVec1;
		xOffset2a.scale(55.0f);
		Vector3f yOffset2a = yVec1;
		yOffset2a.scale(-35.0f);
		Vector3f xOffset2b = xVec1;
		xOffset2b.scale(50.0f);
		Vector3f yOffset2b = yVec1;
		yOffset2b.scale(0.0f);
		Vector3f pos4 = pos2;
		Vector3f pos5 = pos2;
		pos4 += xOffset2a;
		pos4 += yOffset2a;
		pos5 += xOffset2b;
		pos5 += yOffset2b;

		mAntennaTubeNodes[i][2]->makeShadowSRT(parm, pos4, pos5);

		Vector3f xOffset3a = xVec1;
		xOffset3a.scale(37.5f);
		Vector3f yOffset3a = yVec1;
		yOffset3a.scale(-30.0f);
		Vector3f xOffset3b = xVec1;
		xOffset3b.scale(40.0f);
		Vector3f yOffset3b = yVec1;
		yOffset3b.scale(0.0f);
		Vector3f pos6 = pos2;
		Vector3f pos7 = pos2;
		pos6 += xOffset3a;
		pos6 += yOffset3a;
		pos7 += xOffset3b;
		pos7 += yOffset3b;

		mAntennaTubeNodes[i][3]->makeShadowSRT(parm, pos6, pos7);

		Vector3f xOffset4a = xVec1;
		xOffset4a.scale(20.0f);
		Vector3f yOffset4a = yVec1;
		yOffset4a.scale(-20.0f);
		Vector3f xOffset4b = xVec1;
		xOffset4b.scale(35.0f);
		Vector3f yOffset4b = yVec1;
		yOffset4b.scale(0.0f);
		Vector3f pos8 = pos2;
		Vector3f pos9 = pos2;
		pos8 += xOffset4a;
		pos8 += yOffset4a;
		pos9 += xOffset4b;
		pos9 += yOffset4b;

		mAntennaTubeNodes[i][4]->makeShadowSRT(parm, pos8, pos9);

		parm.mShadowScale = 3.0f * mObj->mShadowScale;

		mAntennaSphereNodes[i]->makeShadowSRT(parm, pos2);
	}
}
} // namespace BigTreasure
} // namespace Game
