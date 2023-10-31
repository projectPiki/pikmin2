#include "Game/Entities/BigTreasure.h"

namespace Game {
namespace BigTreasure {

static const char bigTreasureShadowName[] = "246-BigTreasureShadow";

/*
 * --INFO--
 * Address:	802DA5C8
 * Size:	000418
 */
BigTreasureShadowMgr::BigTreasureShadowMgr(Obj* obj)
{
	mObj      = obj;
	mRootNode = new JointShadowRootNode(obj);
	_88       = new SphereShadowNode;
	_8C       = new SphereShadowNode;

	mRootNode->add(_88);
	mRootNode->add(_8C);

	for (int i = 0; i < 4; i++) {
		_90[i] = new TubeShadowSetNode;
		_A0[i] = new TubeShadowSetNode;
		_B0[i] = new TubeShadowSetNode;
		_C0[i] = new TubeShadowSetNode;
		_D0[i] = new SphereShadowNode;
		_E0[i] = new SphereShadowNode;
		_F0[i] = new SphereShadowNode;

		mRootNode->add(_90[i]);
		mRootNode->add(_A0[i]);
		mRootNode->add(_B0[i]);
		mRootNode->add(_C0[i]);
		mRootNode->add(_D0[i]);
		mRootNode->add(_E0[i]);
		mRootNode->add(_F0[i]);

		for (int j = 0; j < 4; j++) {
			mJointPositions[i][j] = nullptr;
		}
	}

	for (int i = 0; i < 4; i++) {
		_100[i] = new SphereShadowNode;
		mRootNode->add(_100[i]);
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			_110[i][j] = new TubeShadowPosNode;
			mRootNode->add(_110[i][j]);

			if (j < 2) {
				_130[i][j] = new SphereShadowNode;
				mRootNode->add(_130[i][j]);
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		_168[i] = new SphereShadowNode;
		mRootNode->add(_168[i]);
		for (int j = 0; j < 5; j++) {
			_140[i][j] = new TubeShadowPosNode;
			mRootNode->add(_140[i][j]);
		}
	}
}

/*
 * --INFO--
 * Address:	802DA9E0
 * Size:	0002B4
 */
void BigTreasure::BigTreasureShadowMgr::init()
{
	SysShape::Model* model = mObj->mModel;
	mBodyMatrix            = model->getJoint("kosi")->getWorldMatrix();
	_90[0]->mJoint         = model->getJoint("rhand1jnt");
	_A0[0]->mJoint         = model->getJoint("rhand2jnt");
	_B0[0]->mJoint         = model->getJoint("rhand2jnt");
	_C0[0]->mJoint         = model->getJoint("rhand3jnt");

	_90[1]->mJoint = model->getJoint("lhand1jnt");
	_A0[1]->mJoint = model->getJoint("lhand2jnt");
	_B0[1]->mJoint = model->getJoint("lhand2jnt");
	_C0[1]->mJoint = model->getJoint("lhand3jnt");

	_90[2]->mJoint = model->getJoint("rfoot1jnt");
	_A0[2]->mJoint = model->getJoint("rfoot2jnt");
	_B0[2]->mJoint = model->getJoint("rfoot2jnt");
	_C0[2]->mJoint = model->getJoint("rfoot3jnt");

	_90[3]->mJoint = model->getJoint("lfoot1jnt");
	_A0[3]->mJoint = model->getJoint("lfoot2jnt");
	_B0[3]->mJoint = model->getJoint("lfoot2jnt");
	_C0[3]->mJoint = model->getJoint("lfoot3jnt");

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

/*
 * --INFO--
 * Address:	802DAC94
 * Size:	000008
 */
void BigTreasureShadowMgr::setKosiJointPosPtr(Vector3f* posPtr) { mKosiPosition = posPtr; }

/*
 * --INFO--
 * Address:	802DAC9C
 * Size:	000018
 */
void BigTreasureShadowMgr::setJointPosPtr(int p1, int p2, Vector3f* posPtr) { mJointPositions[p1][p2] = posPtr; }

/*
 * --INFO--
 * Address:	802DACB4
 * Size:	000510
 */
void BigTreasureShadowMgr::update()
{
	JointShadowParm parm;
	parm.mPosition = mObj->getTraceCentrePosition();
	parm._0C       = Vector3f(0.5f, 3.0f, 0.5f);
	parm._0C.normalise();
	*mKosiPosition = mBodyMatrix->getBasis(3);
	mKosiPosition->y += -20.0f;

	f32 p1 = 5.0f * mObj->mShadowScale;
	f32 p2 = 2.5f * mObj->mShadowScale;

	// this section needs fixing
	const f32 theta = mObj->getFaceDir();
	f32 cosTheta    = cosf(theta);
	f32 sinTheta    = sinf(theta);
	Vector3f vec1(20.0f * sinTheta, 0.0f, 20.0f * cosTheta);
	Vector3f vec2(-10.0f * sinTheta, -0.0f, -10.0f * cosTheta);

	parm._18          = 0.0f;
	parm._1C          = 0.0f;
	parm.mShadowScale = 20.0f * mObj->mShadowScale;
	parm._24          = -75.0f;

	Vector3f pos1 = vec1 + *mKosiPosition;
	Vector3f pos2 = vec2 + *mKosiPosition;

	_88->makeShadowSRT(parm, pos1);

	parm.mShadowScale = 27.0f * mObj->mShadowScale;

	_8C->makeShadowSRT(parm, pos2);

	Vector3f shadowVecs[4];

	for (int i = 0; i < 4; i++) {
		parm._18          = 92.5f;
		parm._1C          = -62.5f;
		parm.mShadowScale = p1;
		parm._24          = -10.0f;
		_90[i]->makeShadowSRT(parm, *mKosiPosition, shadowVecs[0]);

		parm._18          = 0.0f;
		parm._1C          = 0.0f;
		parm.mShadowScale = p1;
		parm._24          = -10.0f;
		_A0[i]->makeShadowSRT(parm, shadowVecs[0], shadowVecs[1]);

		parm._18          = 95.0f;
		parm._1C          = -20.0f;
		parm.mShadowScale = p1;
		parm._24          = -10.0f;
		_B0[i]->makeShadowSRT(parm, shadowVecs[1], shadowVecs[2]);

		parm._18          = 0.0f;
		parm._1C          = 0.0f;
		parm.mShadowScale = p1;
		parm._24          = -10.0f;
		_C0[i]->makeShadowSRT(parm, shadowVecs[2], shadowVecs[3]);

		parm._18          = 0.0f;
		parm._1C          = 0.0f;
		parm.mShadowScale = p2;
		parm._24          = -10.0f;
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
	stmw     r25, 0xa4(r1)
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r4, 0x3c(r31)
	bl       getTraceCentrePosition__Q34Game11BigTreasure3ObjFv
	lfs      f3, lbl_8051CBC0@sda21(r2)
	lfs      f2, lbl_8051CBC4@sda21(r2)
	fmuls    f8, f3, f3
	lfs      f6, 8(r1)
	fmuls    f7, f2, f2
	lfs      f5, 0xc(r1)
	lfs      f4, 0x10(r1)
	lfs      f1, lbl_8051CBC8@sda21(r2)
	fadds    f0, f8, f7
	stfs     f6, 0x5c(r1)
	stfs     f5, 0x60(r1)
	fadds    f0, f8, f0
	stfs     f4, 0x64(r1)
	fcmpo    cr0, f0, f1
	stfs     f3, 0x68(r1)
	stfs     f2, 0x6c(r1)
	stfs     f3, 0x70(r1)
	ble      lbl_802DAD78
	fmadds   f0, f3, f3, f7
	fadds    f3, f8, f0
	fcmpo    cr0, f3, f1
	ble      lbl_802DAD7C
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_802DAD7C

lbl_802DAD78:
	fmr      f3, f1

lbl_802DAD7C:
	lfs      f0, lbl_8051CBC8@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_802DADB4
	lfs      f0, lbl_8051CBCC@sda21(r2)
	lfs      f2, 0x68(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x6c(r1)
	lfs      f0, 0x70(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x68(r1)
	stfs     f1, 0x6c(r1)
	stfs     f0, 0x70(r1)

lbl_802DADB4:
	lwz      r4, 0(r31)
	lwz      r3, 0x40(r31)
	lfs      f4, 0x2c(r4)
	lfs      f3, 0x1c(r4)
	lfs      f0, 0xc(r4)
	lfs      f2, lbl_8051CBD0@sda21(r2)
	stfs     f0, 0(r3)
	lfs      f1, lbl_8051CBD4@sda21(r2)
	stfs     f3, 4(r3)
	lfs      f0, lbl_8051CBD8@sda21(r2)
	stfs     f4, 8(r3)
	lwz      r3, 0x40(r31)
	lfs      f3, 4(r3)
	fadds    f2, f3, f2
	stfs     f2, 4(r3)
	lwz      r3, 0x3c(r31)
	lfs      f2, 0x2d8(r3)
	lwz      r12, 0(r3)
	fmuls    f31, f1, f2
	lwz      r12, 0x64(r12)
	fmuls    f30, f0, f2
	mtctr    r12
	bctrl
	fmr      f2, f1
	lfs      f0, lbl_8051CBC8@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802DAE24
	fneg     f2, f2

lbl_802DAE24:
	lfs      f3, lbl_8051CBDC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051CBC8@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f12, 4(r3)
	bge      lbl_802DAE7C
	lfs      f0, lbl_8051CBE0@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_802DAE94

lbl_802DAE7C:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x98(r1)
	lwz      r0, 0x9c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_802DAE94:
	frsp     f10, f2
	lfs      f11, lbl_8051CBC8@sda21(r2)
	lfs      f9, lbl_8051CBE4@sda21(r2)
	frsp     f0, f12
	lfs      f4, lbl_8051CBEC@sda21(r2)
	frsp     f1, f11
	stfs     f2, 0x20(r1)
	fmuls    f7, f10, f9
	fmuls    f6, f11, f9
	lfs      f8, lbl_8051CBE8@sda21(r2)
	stfs     f11, 0x24(r1)
	fmuls    f5, f12, f9
	fmuls    f2, f10, f4
	stfs     f12, 0x28(r1)
	fmuls    f3, f1, f4
	addi     r4, r1, 0x5c
	stfs     f10, 0x14(r1)
	fmuls    f4, f0, f4
	addi     r5, r1, 0x20
	stfs     f11, 0x18(r1)
	stfs     f12, 0x1c(r1)
	stfs     f11, 0x74(r1)
	stfs     f11, 0x78(r1)
	lwz      r3, 0x3c(r31)
	lfs      f0, 0x2d8(r3)
	fmuls    f0, f9, f0
	stfs     f8, 0x80(r1)
	stfs     f7, 0x20(r1)
	stfs     f0, 0x7c(r1)
	stfs     f6, 0x24(r1)
	stfs     f5, 0x28(r1)
	stfs     f2, 0x14(r1)
	stfs     f3, 0x18(r1)
	stfs     f4, 0x1c(r1)
	lwz      r3, 0x40(r31)
	lfs      f0, 0(r3)
	fadds    f1, f7, f0
	fadds    f0, f2, f0
	stfs     f1, 0x20(r1)
	lfs      f1, 4(r3)
	fadds    f2, f6, f1
	fadds    f1, f3, f1
	stfs     f2, 0x24(r1)
	lfs      f3, 8(r3)
	fadds    f2, f5, f3
	stfs     f0, 0x14(r1)
	fadds    f0, f4, f3
	stfs     f1, 0x18(r1)
	stfs     f2, 0x28(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0x88(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lwz      r3, 0x3c(r31)
	addi     r4, r1, 0x5c
	lfs      f1, lbl_8051CBF0@sda21(r2)
	addi     r5, r1, 0x14
	lfs      f0, 0x2d8(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x7c(r1)
	lwz      r3, 0x8c(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lfs      f24, lbl_8051CBF4@sda21(r2)
	mr       r30, r31
	lfs      f25, lbl_8051CBF8@sda21(r2)
	mr       r29, r31
	lfs      f26, lbl_8051CBEC@sda21(r2)
	addi     r28, r1, 0x38
	lfs      f27, lbl_8051CBC8@sda21(r2)
	addi     r27, r1, 0x44
	lfs      f28, lbl_8051CBFC@sda21(r2)
	addi     r26, r1, 0x50
	lfs      f29, lbl_8051CBD0@sda21(r2)
	li       r25, 0

lbl_802DAFB8:
	stfs     f24, 0x74(r1)
	addi     r4, r1, 0x5c
	addi     r6, r1, 0x2c
	stfs     f25, 0x78(r1)
	stfs     f31, 0x7c(r1)
	stfs     f26, 0x80(r1)
	lwz      r3, 0x90(r30)
	lwz      r5, 0x40(r31)
	bl
"makeShadowSRT__Q24Game17TubeShadowSetNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	stfs     f27, 0x74(r1)
	mr       r6, r28
	addi     r4, r1, 0x5c
	addi     r5, r1, 0x2c
	stfs     f27, 0x78(r1)
	stfs     f31, 0x7c(r1)
	stfs     f26, 0x80(r1)
	lwz      r3, 0xa0(r30)
	bl
"makeShadowSRT__Q24Game17TubeShadowSetNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	stfs     f28, 0x74(r1)
	mr       r5, r28
	mr       r6, r27
	addi     r4, r1, 0x5c
	stfs     f29, 0x78(r1)
	stfs     f31, 0x7c(r1)
	stfs     f26, 0x80(r1)
	lwz      r3, 0xb0(r30)
	bl
"makeShadowSRT__Q24Game17TubeShadowSetNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	stfs     f27, 0x74(r1)
	mr       r5, r27
	mr       r6, r26
	addi     r4, r1, 0x5c
	stfs     f27, 0x78(r1)
	stfs     f31, 0x7c(r1)
	stfs     f26, 0x80(r1)
	lwz      r3, 0xc0(r30)
	bl
"makeShadowSRT__Q24Game17TubeShadowSetNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	stfs     f27, 0x74(r1)
	addi     r4, r1, 0x5c
	addi     r5, r1, 0x2c
	stfs     f27, 0x78(r1)
	stfs     f30, 0x7c(r1)
	stfs     f26, 0x80(r1)
	lwz      r3, 0xd0(r30)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lwz      r3, 0xe0(r30)
	mr       r5, r28
	addi     r4, r1, 0x5c
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lwz      r3, 0xf0(r30)
	mr       r5, r27
	addi     r4, r1, 0x5c
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lwz      r3, 0x44(r29)
	cmplwi   r3, 0
	beq      lbl_802DB0B4
	lfs      f0, 0x2c(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x30(r1)
	lwz      r3, 0x44(r29)
	stfs     f0, 4(r3)
	lfs      f0, 0x34(r1)
	lwz      r3, 0x44(r29)
	stfs     f0, 8(r3)

lbl_802DB0B4:
	lwz      r3, 0x48(r29)
	cmplwi   r3, 0
	beq      lbl_802DB0E0
	lfs      f0, 0x38(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x3c(r1)
	lwz      r3, 0x48(r29)
	stfs     f0, 4(r3)
	lfs      f0, 0x40(r1)
	lwz      r3, 0x48(r29)
	stfs     f0, 8(r3)

lbl_802DB0E0:
	lwz      r3, 0x4c(r29)
	cmplwi   r3, 0
	beq      lbl_802DB10C
	lfs      f0, 0x44(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x48(r1)
	lwz      r3, 0x4c(r29)
	stfs     f0, 4(r3)
	lfs      f0, 0x4c(r1)
	lwz      r3, 0x4c(r29)
	stfs     f0, 8(r3)

lbl_802DB10C:
	lwz      r3, 0x50(r29)
	cmplwi   r3, 0
	beq      lbl_802DB138
	lfs      f0, 0x50(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x54(r1)
	lwz      r3, 0x50(r29)
	stfs     f0, 4(r3)
	lfs      f0, 0x58(r1)
	lwz      r3, 0x50(r29)
	stfs     f0, 8(r3)

lbl_802DB138:
	addi     r25, r25, 1
	addi     r29, r29, 0x10
	cmpwi    r25, 4
	addi     r30, r30, 4
	blt      lbl_802DAFB8
	mr       r3, r31
	addi     r4, r1, 0x5c
	bl
updateTreasureShadow__Q34Game11BigTreasure20BigTreasureShadowMgrFRQ24Game15JointShadowParm
	mr       r3, r31
	addi     r4, r1, 0x5c
	bl
updateHandShadow__Q34Game11BigTreasure20BigTreasureShadowMgrFRQ24Game15JointShadowParm
	mr       r3, r31
	addi     r4, r1, 0x5c
	bl
updateAntennaShadow__Q34Game11BigTreasure20BigTreasureShadowMgrFRQ24Game15JointShadowParm
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
	lmw      r25, 0xa4(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DB1C4
 * Size:	0000F4
 */
void BigTreasureShadowMgr::updateTreasureShadow(JointShadowParm& parm)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f3, -0x1760(r2)
	  stw       r0, 0x34(r1)
	  lfs       f1, -0x1798(r2)
	  stw       r31, 0x2C(r1)
	  lfs       f0, -0x175C(r2)
	  stw       r30, 0x28(r1)
	  li        r30, 0
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  mr        r31, r28
	  lwz       r3, 0x3C(r3)
	  lfs       f2, 0x2D8(r3)
	  fmuls     f2, f3, f2
	  stfs      f2, 0x20(r4)
	  stfs      f1, 0x18(r4)
	  stfs      f1, 0x1C(r4)
	  stfs      f0, 0x24(r4)

	.loc_0x54:
	  lwz       r3, 0x3C(r28)
	  mr        r4, r30
	  bl        0x2614
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB0
	  lwz       r4, 0x100(r31)
	  lwz       r0, 0xC(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  lwz       r3, 0x84(r28)
	  bl        0x1361C8

	.loc_0x80:
	  lwz       r3, 0x4(r31)
	  mr        r4, r29
	  addi      r5, r1, 0x8
	  lfs       f2, 0x2C(r3)
	  lfs       f1, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  lwz       r3, 0x100(r31)
	  bl        0x17470
	  b         .loc_0xC4

	.loc_0xB0:
	  lwz       r3, 0x100(r31)
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC4
	  bl        0x13634C

	.loc_0xC4:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x4
	  blt+      .loc_0x54
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DB2B8
 * Size:	000348
 */
void BigTreasureShadowMgr::updateHandShadow(JointShadowParm& parm)
{
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

/*
 * --INFO--
 * Address:	802DB600
 * Size:	000544
 */
void BigTreasureShadowMgr::updateAntennaShadow(JointShadowParm& parm)
{
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
