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
void BigTreasureShadowMgr::setKosiJointPosPtr(Vector3f* posPtr) { mKosiPosition = posPtr; }

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

		pos4 += xVec * 50.0f;
		pos4 += yVec * -7.5f;

		mHandTubeNodes[i][2]->makeShadowSRT(parm, pos3, pos4);

		parm.mShadowScale = 2.0f * mObj->mShadowScale;

		pos5 += xVec * 35.0f;
		pos5 += yVec * 5.0f;

		mHandTubeNodes[i][3]->makeShadowSRT(parm, pos3, pos5);

		parm.mShadowScale = 2.5f * mObj->mShadowScale;

		mHandSphereNodes[i][0]->makeShadowSRT(parm, pos2);
		mHandSphereNodes[i][1]->makeShadowSRT(parm, pos3);
	}
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stfd     f31, 0x130(r1)
	psq_st   f31, 312(r1), 0, qr0
	stfd     f30, 0x120(r1)
	psq_st   f30, 296(r1), 0, qr0
	stfd     f29, 0x110(r1)
	psq_st   f29, 280(r1), 0, qr0
	stfd     f28, 0x100(r1)
	psq_st   f28, 264(r1), 0, qr0
	stfd     f27, 0xf0(r1)
	psq_st   f27, 248(r1), 0, qr0
	stfd     f26, 0xe0(r1)
	psq_st   f26, 232(r1), 0, qr0
	stfd     f25, 0xd0(r1)
	psq_st   f25, 216(r1), 0, qr0
	stfd     f24, 0xc0(r1)
	psq_st   f24, 200(r1), 0, qr0
	stfd     f23, 0xb0(r1)
	psq_st   f23, 184(r1), 0, qr0
	stfd     f22, 0xa0(r1)
	psq_st   f22, 168(r1), 0, qr0
	stfd     f21, 0x90(r1)
	psq_st   f21, 152(r1), 0, qr0
	stfd     f20, 0x80(r1)
	psq_st   f20, 136(r1), 0, qr0
	stfd     f19, 0x70(r1)
	psq_st   f19, 120(r1), 0, qr0
	stfd     f18, 0x60(r1)
	psq_st   f18, 104(r1), 0, qr0
	stmw     r26, 0x48(r1)
	lfs      f1, lbl_8051CBC8@sda21(r2)
	mr       r26, r3
	mr       r27, r4
	lfs      f0, lbl_8051CBEC@sda21(r2)
	stfs     f1, 0x18(r4)
	mr       r31, r26
	lfs      f25, lbl_8051CC08@sda21(r2)
	mr       r30, r26
	stfs     f1, 0x1c(r4)
	mr       r29, r26
	lfs      f26, lbl_8051CBC4@sda21(r2)
	li       r28, 0
	stfs     f0, 0x24(r4)
	lfs      f27, lbl_8051CC0C@sda21(r2)
	lfs      f28, lbl_8051CC10@sda21(r2)
	lfs      f29, lbl_8051CC14@sda21(r2)
	lfs      f30, lbl_8051CC18@sda21(r2)
	lfs      f31, lbl_8051CBD4@sda21(r2)
	lfs      f18, lbl_8051CBD8@sda21(r2)

lbl_802DB384:
	lwz      r3, 0x3c(r26)
	mr       r4, r27
	addi     r5, r1, 0x38
	addi     r6, r1, 0x2c
	lfs      f0, 0x2d8(r3)
	fmuls    f0, f25, f0
	stfs     f0, 0x20(r27)
	lwz      r3, 0x14(r31)
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f2, 0x40(r1)
	lwz      r3, 0x18(r31)
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f2, 0x34(r1)
	lwz      r3, 0x1c(r31)
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f2, 0x28(r1)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f2, 0x1c(r1)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	lwz      r3, 0x110(r30)
	bl
"makeShadowSRT__Q24Game17TubeShadowPosNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	lwz      r3, 0x114(r30)
	mr       r4, r27
	addi     r5, r1, 0x2c
	addi     r6, r1, 0x20
	bl
"makeShadowSRT__Q24Game17TubeShadowPosNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	lwz      r3, 0x3c(r26)
	mr       r4, r27
	lwz      r7, 0x1c(r31)
	addi     r5, r1, 0x20
	lfs      f0, 0x2d8(r3)
	addi     r6, r1, 0x14
	lfs      f24, 0(r7)
	fmuls    f0, f26, f0
	lfs      f23, 0x10(r7)
	lfs      f22, 0x20(r7)
	fmuls    f2, f24, f27
	lfs      f21, 4(r7)
	fmuls    f3, f23, f27
	lfs      f20, 0x14(r7)
	fmuls    f6, f22, f27
	lfs      f19, 0x24(r7)
	fmuls    f7, f21, f28
	fmuls    f8, f20, f28
	stfs     f0, 0x20(r27)
	fmuls    f9, f19, f28
	lfs      f0, 0x14(r1)
	lfs      f1, 0x18(r1)
	fadds    f5, f0, f2
	lfs      f0, 0x1c(r1)
	fadds    f4, f1, f3
	fadds    f3, f0, f6
	fadds    f2, f5, f7
	stfs     f5, 0x14(r1)
	fadds    f1, f4, f8
	stfs     f4, 0x18(r1)
	fadds    f0, f3, f9
	stfs     f3, 0x1c(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0x118(r30)
	bl
"makeShadowSRT__Q24Game17TubeShadowPosNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	lwz      r3, 0x3c(r26)
	fmuls    f2, f24, f30
	fmuls    f3, f23, f30
	mr       r4, r27
	lfs      f0, 0x2d8(r3)
	fmuls    f6, f22, f30
	fmuls    f7, f21, f31
	fmuls    f0, f29, f0
	fmuls    f8, f20, f31
	addi     r5, r1, 0x20
	fmuls    f9, f19, f31
	addi     r6, r1, 8
	stfs     f0, 0x20(r27)
	lfs      f0, 8(r1)
	lfs      f1, 0xc(r1)
	fadds    f5, f0, f2
	lfs      f0, 0x10(r1)
	fadds    f4, f1, f3
	fadds    f3, f0, f6
	fadds    f2, f5, f7
	stfs     f5, 8(r1)
	fadds    f1, f4, f8
	stfs     f4, 0xc(r1)
	fadds    f0, f3, f9
	stfs     f3, 0x10(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r3, 0x11c(r30)
	bl
"makeShadowSRT__Q24Game17TubeShadowPosNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	lwz      r3, 0x3c(r26)
	mr       r4, r27
	addi     r5, r1, 0x2c
	lfs      f0, 0x2d8(r3)
	fmuls    f0, f18, f0
	stfs     f0, 0x20(r27)
	lwz      r3, 0x130(r29)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lwz      r3, 0x134(r29)
	mr       r4, r27
	addi     r5, r1, 0x20
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	addi     r28, r28, 1
	addi     r30, r30, 0x10
	cmpwi    r28, 2
	addi     r29, r29, 8
	addi     r31, r31, 0xc
	blt      lbl_802DB384
	psq_l    f31, 312(r1), 0, qr0
	lfd      f31, 0x130(r1)
	psq_l    f30, 296(r1), 0, qr0
	lfd      f30, 0x120(r1)
	psq_l    f29, 280(r1), 0, qr0
	lfd      f29, 0x110(r1)
	psq_l    f28, 264(r1), 0, qr0
	lfd      f28, 0x100(r1)
	psq_l    f27, 248(r1), 0, qr0
	lfd      f27, 0xf0(r1)
	psq_l    f26, 232(r1), 0, qr0
	lfd      f26, 0xe0(r1)
	psq_l    f25, 216(r1), 0, qr0
	lfd      f25, 0xd0(r1)
	psq_l    f24, 200(r1), 0, qr0
	lfd      f24, 0xc0(r1)
	psq_l    f23, 184(r1), 0, qr0
	lfd      f23, 0xb0(r1)
	psq_l    f22, 168(r1), 0, qr0
	lfd      f22, 0xa0(r1)
	psq_l    f21, 152(r1), 0, qr0
	lfd      f21, 0x90(r1)
	psq_l    f20, 136(r1), 0, qr0
	lfd      f20, 0x80(r1)
	psq_l    f19, 120(r1), 0, qr0
	lfd      f19, 0x70(r1)
	psq_l    f18, 104(r1), 0, qr0
	lfd      f18, 0x60(r1)
	lmw      r26, 0x48(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
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

		Vector3f pos3 = pos2;
		pos3 += xVec1 * 55.0f;
		pos3 += yVec1 * 0.0f;

		mAntennaTubeNodes[i][1]->makeShadowSRT(parm, pos2, pos3);

		parm.mShadowScale = 5.0f * mObj->mShadowScale;

		Vector3f pos4 = pos2;
		Vector3f pos5 = pos2;

		pos4 += xVec1 * 55.0f;
		pos5 += xVec1 * 50.0f;

		pos4 += yVec1 * -35.0f;
		pos5 += yVec1 * 0.0f;

		mAntennaTubeNodes[i][2]->makeShadowSRT(parm, pos4, pos5);

		Vector3f pos6 = pos2;
		Vector3f pos7 = pos2;

		pos6 += xVec1 * 37.5f;
		pos7 += xVec1 * 40.0f;

		pos6 += yVec1 * -30.0f;
		pos7 += yVec1 * 0.0f;

		mAntennaTubeNodes[i][3]->makeShadowSRT(parm, pos6, pos7);

		Vector3f pos8 = pos2;
		Vector3f pos9 = pos2;

		pos8 += xVec1 * 20.0f;
		pos9 += xVec1 * 35.0f;

		pos8 += yVec1 * -20.0f;
		pos9 += yVec1 * 0.0f;

		mAntennaTubeNodes[i][4]->makeShadowSRT(parm, pos8, pos9);

		parm.mShadowScale = 3.0f * mObj->mShadowScale;

		mAntennaSphereNodes[i]->makeShadowSRT(parm, pos2);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x1C0(r1)
	  mflr      r0
	  stw       r0, 0x1C4(r1)
	  stfd      f31, 0x1B0(r1)
	  psq_st    f31,0x1B8(r1),0,0
	  stfd      f30, 0x1A0(r1)
	  psq_st    f30,0x1A8(r1),0,0
	  stfd      f29, 0x190(r1)
	  psq_st    f29,0x198(r1),0,0
	  stfd      f28, 0x180(r1)
	  psq_st    f28,0x188(r1),0,0
	  stfd      f27, 0x170(r1)
	  psq_st    f27,0x178(r1),0,0
	  stfd      f26, 0x160(r1)
	  psq_st    f26,0x168(r1),0,0
	  stfd      f25, 0x150(r1)
	  psq_st    f25,0x158(r1),0,0
	  stfd      f24, 0x140(r1)
	  psq_st    f24,0x148(r1),0,0
	  stfd      f23, 0x130(r1)
	  psq_st    f23,0x138(r1),0,0
	  stfd      f22, 0x120(r1)
	  psq_st    f22,0x128(r1),0,0
	  stfd      f21, 0x110(r1)
	  psq_st    f21,0x118(r1),0,0
	  stfd      f20, 0x100(r1)
	  psq_st    f20,0x108(r1),0,0
	  stfd      f19, 0xF0(r1)
	  psq_st    f19,0xF8(r1),0,0
	  stfd      f18, 0xE0(r1)
	  psq_st    f18,0xE8(r1),0,0
	  stfd      f17, 0xD0(r1)
	  psq_st    f17,0xD8(r1),0,0
	  stfd      f16, 0xC0(r1)
	  psq_st    f16,0xC8(r1),0,0
	  stfd      f15, 0xB0(r1)
	  psq_st    f15,0xB8(r1),0,0
	  stfd      f14, 0xA0(r1)
	  psq_st    f14,0xA8(r1),0,0
	  stmw      r26, 0x88(r1)
	  lfs       f20, -0x1798(r2)
	  mr        r26, r3
	  lfs       f0, -0x1774(r2)
	  mr        r27, r4
	  stfs      f20, 0x18(r4)
	  mr        r31, r26
	  lfs       f21, -0x178C(r2)
	  mr        r30, r26
	  stfs      f20, 0x1C(r4)
	  mr        r29, r26
	  lfs       f22, -0x1758(r2)
	  li        r28, 0
	  stfs      f0, 0x24(r4)
	  lfs       f0, -0x179C(r2)
	  lfs       f23, -0x1744(r2)
	  lfs       f24, -0x175C(r2)
	  lfs       f25, -0x1754(r2)
	  lfs       f26, -0x1740(r2)
	  lfs       f27, -0x173C(r2)
	  lfs       f28, -0x1738(r2)
	  lfs       f29, -0x177C(r2)
	  lfs       f30, -0x1790(r2)
	  lfs       f31, -0x1748(r2)
	  stfd      f0, 0x78(r1)

	.loc_0x100:
	  lwz       r3, 0x3C(r26)
	  mr        r4, r27
	  addi      r5, r1, 0x68
	  addi      r6, r1, 0x5C
	  lfs       f0, 0x2D8(r3)
	  fmuls     f0, f21, f0
	  stfs      f0, 0x20(r27)
	  lwz       r3, 0x2C(r31)
	  lfs       f2, 0x2C(r3)
	  lfs       f1, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x68(r1)
	  stfs      f1, 0x6C(r1)
	  stfs      f2, 0x70(r1)
	  lwz       r3, 0x30(r31)
	  lfs       f2, 0x2C(r3)
	  lfs       f1, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x5C(r1)
	  stfs      f1, 0x60(r1)
	  stfs      f2, 0x64(r1)
	  lwz       r3, 0x140(r30)
	  bl        0x16DD8
	  lwz       r3, 0x3C(r26)
	  mr        r4, r27
	  lwz       r7, 0x30(r31)
	  addi      r5, r1, 0x5C
	  lfs       f0, 0x2D8(r3)
	  addi      r6, r1, 0x50
	  lfs       f19, 0x0(r7)
	  fmuls     f0, f22, f0
	  lfs       f18, 0x10(r7)
	  lfs       f17, 0x20(r7)
	  fmuls     f3, f19, f23
	  lfs       f16, 0x4(r7)
	  fmuls     f4, f18, f23
	  lfs       f15, 0x14(r7)
	  fmuls     f6, f17, f23
	  lfs       f14, 0x24(r7)
	  fmuls     f7, f16, f20
	  fmuls     f8, f15, f20
	  stfs      f0, 0x20(r27)
	  fmuls     f9, f14, f20
	  lfs       f2, 0x5C(r1)
	  lfs       f1, 0x60(r1)
	  lfs       f0, 0x64(r1)
	  fadds     f5, f2, f3
	  fadds     f4, f1, f4
	  stfs      f2, 0x50(r1)
	  fadds     f3, f0, f6
	  stfs      f1, 0x54(r1)
	  fadds     f2, f5, f7
	  fadds     f1, f4, f8
	  stfs      f0, 0x58(r1)
	  fadds     f0, f3, f9
	  stfs      f5, 0x50(r1)
	  stfs      f4, 0x54(r1)
	  stfs      f3, 0x58(r1)
	  stfs      f2, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  lwz       r3, 0x144(r30)
	  bl        0x16D38
	  lwz       r3, 0x3C(r26)
	  fmuls     f6, f19, f23
	  fmuls     f1, f18, f23
	  mr        r4, r27
	  lfs       f0, 0x2D8(r3)
	  fmuls     f4, f17, f23
	  fmuls     f2, f19, f25
	  fmuls     f5, f21, f0
	  fmuls     f3, f18, f25
	  addi      r5, r1, 0x44
	  fmuls     f0, f17, f25
	  addi      r6, r1, 0x38
	  stfs      f5, 0x20(r27)
	  fmuls     f11, f16, f24
	  lfs       f10, 0x5C(r1)
	  fmuls     f12, f15, f24
	  lfs       f9, 0x60(r1)
	  fmuls     f13, f14, f24
	  lfs       f8, 0x64(r1)
	  fadds     f7, f10, f6
	  stfs      f10, 0x44(r1)
	  fadds     f6, f9, f1
	  fadds     f5, f8, f4
	  stfs      f9, 0x48(r1)
	  fmuls     f1, f16, f20
	  fadds     f4, f10, f2
	  stfs      f8, 0x4C(r1)
	  fmuls     f2, f15, f20
	  fadds     f3, f9, f3
	  stfs      f10, 0x38(r1)
	  fmuls     f10, f14, f20
	  fadds     f0, f8, f0
	  stfs      f9, 0x3C(r1)
	  fadds     f9, f7, f11
	  stfs      f8, 0x40(r1)
	  fadds     f11, f6, f12
	  fadds     f8, f5, f13
	  stfs      f7, 0x44(r1)
	  fadds     f7, f4, f1
	  fadds     f2, f3, f2
	  stfs      f6, 0x48(r1)
	  fadds     f1, f0, f10
	  stfs      f5, 0x4C(r1)
	  stfs      f4, 0x38(r1)
	  stfs      f3, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  stfs      f9, 0x44(r1)
	  stfs      f11, 0x48(r1)
	  stfs      f8, 0x4C(r1)
	  stfs      f7, 0x38(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  lwz       r3, 0x148(r30)
	  bl        0x16C60
	  fmuls     f3, f19, f26
	  lfs       f2, 0x5C(r1)
	  lfs       f11, 0x60(r1)
	  fmuls     f4, f18, f26
	  lfs       f12, 0x64(r1)
	  fmuls     f8, f17, f26
	  fmuls     f0, f19, f28
	  stfs      f2, 0x2C(r1)
	  fmuls     f1, f18, f28
	  mr        r4, r27
	  fmuls     f9, f17, f28
	  stfs      f11, 0x30(r1)
	  fadds     f3, f2, f3
	  stfs      f12, 0x34(r1)
	  fmuls     f6, f16, f27
	  addi      r5, r1, 0x2C
	  fadds     f5, f11, f4
	  stfs      f2, 0x20(r1)
	  fmuls     f7, f15, f27
	  stfs      f11, 0x24(r1)
	  fadds     f4, f12, f8
	  addi      r6, r1, 0x20
	  fmuls     f8, f14, f27
	  stfs      f12, 0x28(r1)
	  fadds     f2, f2, f0
	  stfs      f3, 0x2C(r1)
	  fmuls     f10, f16, f20
	  fadds     f1, f11, f1
	  stfs      f5, 0x30(r1)
	  fmuls     f11, f15, f20
	  fadds     f0, f12, f9
	  stfs      f4, 0x34(r1)
	  fmuls     f9, f14, f20
	  fadds     f3, f3, f6
	  stfs      f2, 0x20(r1)
	  fadds     f5, f5, f7
	  fadds     f4, f4, f8
	  stfs      f1, 0x24(r1)
	  fadds     f2, f2, f10
	  fadds     f1, f1, f11
	  stfs      f0, 0x28(r1)
	  fadds     f0, f0, f9
	  stfs      f3, 0x2C(r1)
	  stfs      f5, 0x30(r1)
	  stfs      f4, 0x34(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r3, 0x14C(r30)
	  bl        0x16B98
	  fmuls     f3, f19, f29
	  lfs       f2, 0x5C(r1)
	  lfs       f1, 0x60(r1)
	  fmuls     f4, f18, f29
	  lfs       f0, 0x64(r1)
	  fmuls     f6, f17, f29
	  fmuls     f9, f19, f31
	  stfs      f2, 0x14(r1)
	  fmuls     f10, f18, f31
	  mr        r4, r27
	  fmuls     f11, f17, f31
	  stfs      f1, 0x18(r1)
	  fadds     f5, f2, f3
	  stfs      f0, 0x1C(r1)
	  fmuls     f7, f16, f30
	  addi      r5, r1, 0x14
	  fadds     f4, f1, f4
	  stfs      f2, 0x8(r1)
	  fmuls     f8, f15, f30
	  stfs      f1, 0xC(r1)
	  fadds     f3, f0, f6
	  addi      r6, r1, 0x8
	  fmuls     f6, f14, f30
	  stfs      f0, 0x10(r1)
	  fadds     f2, f2, f9
	  stfs      f5, 0x14(r1)
	  fmuls     f9, f16, f20
	  fadds     f1, f1, f10
	  stfs      f4, 0x18(r1)
	  fmuls     f10, f15, f20
	  fadds     f0, f0, f11
	  stfs      f3, 0x1C(r1)
	  fmuls     f11, f14, f20
	  fadds     f5, f5, f7
	  stfs      f2, 0x8(r1)
	  fadds     f4, f4, f8
	  fadds     f3, f3, f6
	  stfs      f1, 0xC(r1)
	  fadds     f2, f2, f9
	  fadds     f1, f1, f10
	  stfs      f0, 0x10(r1)
	  fadds     f0, f0, f11
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r3, 0x150(r30)
	  bl        0x16AD0
	  lwz       r3, 0x3C(r26)
	  mr        r4, r27
	  lfd       f0, 0x78(r1)
	  addi      r5, r1, 0x5C
	  lfs       f1, 0x2D8(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x20(r27)
	  lwz       r3, 0x168(r29)
	  bl        0x16C58
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x14
	  cmpwi     r28, 0x2
	  addi      r29, r29, 0x4
	  addi      r31, r31, 0x8
	  blt+      .loc_0x100
	  psq_l     f31,0x1B8(r1),0,0
	  lfd       f31, 0x1B0(r1)
	  psq_l     f30,0x1A8(r1),0,0
	  lfd       f30, 0x1A0(r1)
	  psq_l     f29,0x198(r1),0,0
	  lfd       f29, 0x190(r1)
	  psq_l     f28,0x188(r1),0,0
	  lfd       f28, 0x180(r1)
	  psq_l     f27,0x178(r1),0,0
	  lfd       f27, 0x170(r1)
	  psq_l     f26,0x168(r1),0,0
	  lfd       f26, 0x160(r1)
	  psq_l     f25,0x158(r1),0,0
	  lfd       f25, 0x150(r1)
	  psq_l     f24,0x148(r1),0,0
	  lfd       f24, 0x140(r1)
	  psq_l     f23,0x138(r1),0,0
	  lfd       f23, 0x130(r1)
	  psq_l     f22,0x128(r1),0,0
	  lfd       f22, 0x120(r1)
	  psq_l     f21,0x118(r1),0,0
	  lfd       f21, 0x110(r1)
	  psq_l     f20,0x108(r1),0,0
	  lfd       f20, 0x100(r1)
	  psq_l     f19,0xF8(r1),0,0
	  lfd       f19, 0xF0(r1)
	  psq_l     f18,0xE8(r1),0,0
	  lfd       f18, 0xE0(r1)
	  psq_l     f17,0xD8(r1),0,0
	  lfd       f17, 0xD0(r1)
	  psq_l     f16,0xC8(r1),0,0
	  lfd       f16, 0xC0(r1)
	  psq_l     f15,0xB8(r1),0,0
	  lfd       f15, 0xB0(r1)
	  psq_l     f14,0xA8(r1),0,0
	  lfd       f14, 0xA0(r1)
	  lmw       r26, 0x88(r1)
	  lwz       r0, 0x1C4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1C0
	  blr
	*/
}
} // namespace BigTreasure
} // namespace Game
