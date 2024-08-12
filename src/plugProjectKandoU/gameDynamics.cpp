#include "DynamicsParms.h"
#include "Game/Rigid.h"
#include "trig.h"

DynamicsParms* DynamicsParms::mInstance;

/**
 * @note Address: 0x80139C60
 * @note Size: 0x334
 */
DynamicsParms::DynamicsParms()
    : Parameters(nullptr, "Dynamics")
    , mNewFriction(this, 'd009', "新フリクション", true, false, true) // 'new friction'
    , mStaParm(this, 'd011', "Sta-Parm", 140.0f, 0.0f, 5000.0f)
    , mStatic(this, 'd010', "Static", 10.0f, 0.0f, 5000.0f)
    , mMicroCollision(this, 'd000', "micro collision", 0.015f, 0.0f, 10.0f)
    , mFrictionDuringResolve(this, 'd001', "Resolve時の摩擦", false, false, true) // 'friction during Resolve'
    , mElasticity(this, 'd002', "elasticity", 0.3f, 0.0f, 1.0f)
    , mFriction(this, 'd003', "摩擦", true, false, true)                          // 'friction'
    , mFrictionTangentVelocity(this, 'd004', "摩擦:tanvel", true, false, true)    // 'friction:tanvel' - tangent velocity?
    , mFixedFriction(this, 'd005', "固定摩擦", true, false, true)                 // 'fixed friction'
    , mFixedFrictionValue(this, 'd006', "固定摩擦値", 100.0f, 0.0f, 10000.0f)     // 'fixed friction value'
    , mNoRotationEffect(this, 'd007', "回転影響なしにする", true, false, true)    // 'no rotation effect'
    , mRotatingMomentDamp(this, 'd008', "回転モーメント Damp", 0.05f, 0.0f, 1.0f) // 'rotating moment Damp'
{
	mInstance = this;
}

/**
 * @note Address: 0x80139F94
 * @note Size: 0x74
 */
DynamicsParms::~DynamicsParms() { mInstance = nullptr; }

/**
 * @note Address: 0x8013A008
 * @note Size: 0x48
 */
void DynamicsParms::globalInstance()
{
	if (!mInstance) {
		mInstance = new DynamicsParms;
	}
}

/**
 * @note Address: 0x8013A050
 * @note Size: 0x54
 */
Game::Rigid::Rigid() { mFlags.clear(); }

/**
 * @note Address: 0x8013A0D8
 * @note Size: 0x8C
 */
void Game::Rigid::initPosition(Vector3f& posVec, Vector3f& quatVec)
{
	initPositionIndex(posVec, 0, quatVec);
	initPositionIndex(posVec, 1, quatVec);
	PSMTXIdentity(mConfigs[0].mRotatedTransform.mMatrix.mtxView);
	PSMTXIdentity(mConfigs[1].mRotatedTransform.mMatrix.mtxView);
	PSMTXIdentity(mTransformationMtx.mMatrix.mtxView);
	mTimeStep = 1.0f;
	updateMatrix(0);
}

/**
 * @note Address: 0x8013A164
 * @note Size: 0x8C
 */
void Game::Rigid::initPositionIndex(Vector3f& posVec, int configIdx, Vector3f& quatVec)
{
	RigidConfig* config      = &mConfigs[configIdx];
	config->mPosition        = posVec;
	config->mForce           = Vector3f(0.0f);
	config->mVelocity        = Vector3f(0.0f);
	config->mRotatedMomentum = Vector3f(0.0f);
	config->mMomentum        = Vector3f(0.0f);
	config->mTorque          = Vector3f(0.0f);
	config->mPrimaryRotation.set(quatVec);
}

/**
 * @note Address: 0x8013A1F0
 * @note Size: 0x38
 */
void Game::Rigid::updateMatrix(int configIdx)
{
	RigidConfig* config = &mConfigs[configIdx];
	mPrimaryMatrix.makeTQ(config->mPosition, config->mPrimaryRotation);
}

/**
 * @note Address: 0x8013A228
 * @note Size: 0x6C
 */
void Game::Rigid::computeForces(int configIdx)
{
	RigidConfig* config = &mConfigs[configIdx];
	config->mForce      = Vector3f(0.0f);
	config->mTorque     = Vector3f(0.0f);

	f32 dampVal = DynamicsParms::mInstance->mRotatingMomentDamp.mValue;
	if (dampVal > 0.0f) {
		config->mMomentum = config->mMomentum - config->mMomentum * dampVal;
	}
}

/**
 * @note Address: 0x8013A294
 * @note Size: 0x268
 */
static f32 getYDegree(Quat& quat, Vector3f& vec)
{
	Vector3f yAxis(0.0f, 1.0f, 0.0f);

	Quat yAxisQuat(0.0f, yAxis);
	Quat intermediateQuat;

	Quat inverseQuat;
	inverseQuat = quat.inverse();

	// Issues are here
	intermediateQuat = quat * yAxisQuat;

	intermediateQuat = intermediateQuat * inverseQuat;

	vec = intermediateQuat.v;

	return intermediateQuat.v.y;

	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	lfs      f1, lbl_8051823C@sda21(r2)
	stw      r0, 0xc4(r1)
	lfs      f0, lbl_80518258@sda21(r2)
	stw      r31, 0xbc(r1)
	mr       r31, r4
	addi     r4, r1, 0x70
	stfs     f1, 0xac(r1)
	stfs     f0, 0xb0(r1)
	lwz      r6, 0xac(r1)
	stw      r30, 0xb8(r1)
	mr       r30, r3
	lwz      r5, 0xb0(r1)
	addi     r3, r1, 0x9c
	stfs     f1, 0xb4(r1)
	lwz      r0, 0xb4(r1)
	stw      r6, 0x70(r1)
	stw      r5, 0x74(r1)
	stw      r0, 0x78(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	addi     r3, r1, 0x8c
	bl       __ct__4QuatFv
	addi     r3, r1, 0x7c
	bl       __ct__4QuatFv
	mr       r4, r30
	addi     r3, r1, 0x60
	bl       inverse__4QuatFv
	lfs      f3, 0x60(r1)
	addi     r3, r1, 0x24
	lfs      f2, 0x64(r1)
	lfs      f1, 0x68(r1)
	lfs      f0, 0x6c(r1)
	stfs     f3, 0x7c(r1)
	stfs     f2, 0x80(r1)
	stfs     f1, 0x84(r1)
	stfs     f0, 0x88(r1)
	bl       __ct__4QuatFv
	lfs      f9, 0xc(r30)
	addi     r3, r1, 0x50
	lfs      f13, 0xa4(r1)
	addi     r4, r1, 0x34
	lfs      f7, 8(r30)
	lfs      f3, 0xa0(r1)
	fmuls    f1, f9, f13
	lfs      f12, 0xa8(r1)
	fmuls    f2, f7, f13
	lfs      f8, 4(r30)
	fmuls    f0, f7, f3
	fmsubs   f6, f7, f12, f1
	fmuls    f1, f8, f12
	lfs      f10, 0(r30)
	fmadds   f2, f8, f3, f2
	lfs      f11, 0x9c(r1)
	fmuls    f5, f3, f10
	fmsubs   f4, f9, f3, f1
	fmadds   f1, f9, f12, f2
	fmsubs   f2, f8, f13, f0
	fmuls    f0, f12, f10
	fmuls    f3, f13, f10
	fmuls    f9, f9, f11
	fadds    f0, f2, f0
	fadds    f2, f4, f3
	fmuls    f7, f7, f11
	fadds    f0, f0, f9
	fmuls    f4, f8, f11
	fadds    f2, f2, f7
	stfs     f0, 0x30(r1)
	fadds    f3, f6, f5
	fmsubs   f1, f10, f11, f1
	stfs     f2, 0x2c(r1)
	fadds    f0, f3, f4
	lwz      r0, 0x30(r1)
	lwz      r5, 0x2c(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r6, 0x28(r1)
	stw      r5, 0x38(r1)
	stw      r6, 0x34(r1)
	stw      r0, 0x3c(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	lfs      f3, 0x50(r1)
	addi     r3, r1, 8
	lfs      f2, 0x54(r1)
	lfs      f1, 0x58(r1)
	lfs      f0, 0x5c(r1)
	stfs     f3, 0x8c(r1)
	stfs     f2, 0x90(r1)
	stfs     f1, 0x94(r1)
	stfs     f0, 0x98(r1)
	bl       __ct__4QuatFv
	lfs      f8, 0x98(r1)
	addi     r3, r1, 0x40
	lfs      f13, 0x84(r1)
	addi     r4, r1, 0x18
	lfs      f9, 0x94(r1)
	lfs      f3, 0x80(r1)
	fmuls    f1, f8, f13
	lfs      f12, 0x88(r1)
	fmuls    f2, f9, f13
	lfs      f10, 0x90(r1)
	fmuls    f0, f9, f3
	fmsubs   f6, f9, f12, f1
	fmuls    f1, f10, f12
	lfs      f11, 0x8c(r1)
	fmadds   f2, f10, f3, f2
	lfs      f7, 0x7c(r1)
	fmuls    f5, f3, f11
	fmsubs   f4, f8, f3, f1
	fmadds   f1, f8, f12, f2
	fmuls    f3, f13, f11
	fmsubs   f2, f10, f13, f0
	fmuls    f0, f12, f11
	fadds    f6, f6, f5
	fmuls    f5, f10, f7
	fadds    f4, f4, f3
	fmuls    f3, f9, f7
	fadds    f2, f2, f0
	fmuls    f0, f8, f7
	fadds    f5, f6, f5
	fadds    f3, f4, f3
	fadds    f0, f2, f0
	stfs     f5, 0xc(r1)
	fmsubs   f1, f11, f7, f1
	stfs     f3, 0x10(r1)
	lwz      r6, 0xc(r1)
	stfs     f0, 0x14(r1)
	lwz      r5, 0x10(r1)
	lwz      r0, 0x14(r1)
	stfs     f1, 8(r1)
	stw      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x20(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	lfs      f3, 0x40(r1)
	lfs      f2, 0x44(r1)
	lfs      f1, 0x48(r1)
	lfs      f0, 0x4c(r1)
	stfs     f3, 0x8c(r1)
	stfs     f2, 0x90(r1)
	stfs     f1, 0x94(r1)
	stfs     f0, 0x98(r1)
	stfs     f2, 0(r31)
	lfs      f0, 0x94(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x98(r1)
	stfs     f0, 8(r31)
	lfs      f1, 0x94(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/**
 * @note Address: 0x8013A4FC
 * @note Size: 0x678
 */
void Game::Rigid::integrate(f32 timeStep, int configIdx)
{
	RigidConfig* thisConfig  = &mConfigs[configIdx]; // r31
	RigidConfig* otherConfig = &mConfigs[1 - configIdx];

	otherConfig->mPosition        = thisConfig->mPosition;
	otherConfig->mPrimaryRotation = thisConfig->mPrimaryRotation;

	Matrixf rotationMtx;  // 0x1d0
	Matrixf concatMtx;    // 0x1a0
	Matrixf transposeMtx; // 0x170

	rotationMtx.makeQ(thisConfig->mPrimaryRotation);
	PSMTXTranspose(rotationMtx.mMatrix.mtxView, transposeMtx.mMatrix.mtxView);
	PSMTXConcat(rotationMtx.mMatrix.mtxView, mTransformationMtx.mMatrix.mtxView, concatMtx.mMatrix.mtxView);
	PSMTXConcat(concatMtx.mMatrix.mtxView, transposeMtx.mMatrix.mtxView, thisConfig->mRotatedTransform.mMatrix.mtxView);

	thisConfig->mPosition = thisConfig->mPosition + thisConfig->mVelocity * timeStep;
	thisConfig->mMomentum = thisConfig->mMomentum + thisConfig->mTorque * timeStep;
	thisConfig->mVelocity = thisConfig->mVelocity + thisConfig->mForce * (timeStep * mTimeStep);

	thisConfig->mRotatedMomentum = thisConfig->mRotatedTransform.mtxMult(thisConfig->mMomentum);

	Quat primaryQ;                                             // 0x160
	Quat rotatedMomentumQ(0.0f, thisConfig->mRotatedMomentum); // 0x150

	primaryQ = rotatedMomentumQ * thisConfig->mPrimaryRotation;

	if (mFlags.typeView & 1) {
		Quat halfTimeQ; // 0x140
		halfTimeQ = Quat((0.5f * timeStep) * primaryQ.w, primaryQ.v * (0.5f * timeStep));

		Quat primaryRotatedQ; // 0x130
		primaryRotatedQ = halfTimeQ + thisConfig->mPrimaryRotation;

		Vector3f vec1; // 0x124
		f32 yDeg48 = getYDegree(thisConfig->mPrimaryRotation, vec1);

		Vector3f vec2; // 0x118
		f32 yDeg4 = getYDegree(primaryRotatedQ, vec2);

		f32 sinValue8192 = JMASSin(8192);
		if (yDeg48 < JMASSin(10912)) {
			if (yDeg4 < yDeg48) {
				Vector3f yAxis(0.0f, 1.0f, 0.0);
				thisConfig->mMomentum        = thisConfig->mMomentum + vec1.cross(yAxis) * 1000.0f;
				thisConfig->mRotatedMomentum = thisConfig->mRotatedTransform.mtxMult(thisConfig->mMomentum);
				if (!(yDeg4 < sinValue8192)) {
					thisConfig->mPrimaryRotation = primaryRotatedQ;
				}
			} else {
				thisConfig->mPrimaryRotation = primaryRotatedQ;
			}
		} else {
			thisConfig->mPrimaryRotation = thisConfig->mPrimaryRotation + halfTimeQ;
		}
	} else {
		Quat q5; // 0x108
		q5                           = Quat((0.5f * timeStep) * primaryQ.w, primaryQ.v * (0.5f * timeStep));
		thisConfig->mPrimaryRotation = thisConfig->mPrimaryRotation + q5;
	}

	thisConfig->mPrimaryRotation.normalise();
	mPrimaryMatrix.makeTQ(thisConfig->mPosition, thisConfig->mPrimaryRotation);
	/*
	stwu     r1, -0x240(r1)
	mflr     r0
	stw      r0, 0x244(r1)
	stfd     f31, 0x230(r1)
	psq_st   f31, 568(r1), 0, qr0
	stfd     f30, 0x220(r1)
	psq_st   f30, 552(r1), 0, qr0
	stfd     f29, 0x210(r1)
	psq_st   f29, 536(r1), 0, qr0
	stw      r31, 0x20c(r1)
	stw      r30, 0x208(r1)
	mulli    r5, r4, 0x88
	subfic   r0, r4, 1
	mr       r30, r3
	fmr      f31, f1
	addi     r3, r1, 0x1d0
	mulli    r4, r0, 0x88
	addi     r31, r5, 0x34
	add      r31, r30, r31
	addi     r5, r4, 0x34
	lfs      f0, 0(r31)
	add      r5, r30, r5
	addi     r4, r31, 0x48
	stfs     f0, 0(r5)
	lfs      f0, 4(r31)
	stfs     f0, 4(r5)
	lfs      f0, 8(r31)
	stfs     f0, 8(r5)
	lfs      f0, 0x48(r31)
	stfs     f0, 0x48(r5)
	lfs      f0, 0x4c(r31)
	stfs     f0, 0x4c(r5)
	lfs      f0, 0x50(r31)
	stfs     f0, 0x50(r5)
	lfs      f0, 0x54(r31)
	stfs     f0, 0x54(r5)
	bl       makeQ__7MatrixfFR4Quat
	addi     r3, r1, 0x1d0
	addi     r4, r1, 0x170
	bl       PSMTXTranspose
	addi     r3, r1, 0x1d0
	addi     r4, r30, 0x144
	addi     r5, r1, 0x1a0
	bl       PSMTXConcat
	addi     r3, r1, 0x1a0
	addi     r4, r1, 0x170
	addi     r5, r31, 0x58
	bl       PSMTXConcat
	lfs      f0, 0xc(r31)
	addi     r3, r31, 0x58
	lfs      f2, 0x10(r31)
	addi     r4, r31, 0x30
	fmuls    f0, f0, f31
	lfs      f1, 0(r31)
	lfs      f4, 0x14(r31)
	fmuls    f2, f2, f31
	lfs      f3, 4(r31)
	addi     r5, r1, 0x90
	fadds    f0, f1, f0
	lfs      f5, 8(r31)
	fmuls    f1, f4, f31
	fadds    f2, f3, f2
	stfs     f0, 0(r31)
	fadds    f0, f5, f1
	stfs     f2, 4(r31)
	stfs     f0, 8(r31)
	lfs      f0, 0x3c(r31)
	lfs      f2, 0x40(r31)
	fmuls    f0, f0, f31
	lfs      f1, 0x30(r31)
	lfs      f4, 0x44(r31)
	fmuls    f2, f2, f31
	lfs      f3, 0x34(r31)
	fadds    f0, f1, f0
	lfs      f5, 0x38(r31)
	fmuls    f1, f4, f31
	fadds    f2, f3, f2
	stfs     f0, 0x30(r31)
	fadds    f0, f5, f1
	stfs     f2, 0x34(r31)
	stfs     f0, 0x38(r31)
	lfs      f1, 0(r30)
	lfs      f0, 0x18(r31)
	fmuls    f6, f31, f1
	lfs      f2, 0x1c(r31)
	lfs      f4, 0x20(r31)
	lfs      f1, 0xc(r31)
	fmuls    f0, f0, f6
	lfs      f3, 0x10(r31)
	fmuls    f2, f2, f6
	lfs      f5, 0x14(r31)
	fmuls    f4, f4, f6
	fadds    f0, f1, f0
	fadds    f1, f3, f2
	fadds    f2, f5, f4
	stfs     f0, 0xc(r31)
	stfs     f1, 0x10(r31)
	stfs     f2, 0x14(r31)
	bl       PSMTXMultVec
	lfs      f1, 0x94(r1)
	addi     r3, r1, 0x160
	lfs      f2, 0x98(r1)
	lfs      f0, 0x90(r1)
	stfs     f0, 0x24(r31)
	stfs     f1, 0x28(r31)
	stfs     f2, 0x2c(r31)
	bl       __ct__4QuatFv
	lwz      r5, 0x24(r31)
	addi     r3, r1, 0x150
	lwz      r0, 0x28(r31)
	addi     r4, r1, 0xfc
	lfs      f1, lbl_8051823C@sda21(r2)
	stw      r5, 0xfc(r1)
	stw      r0, 0x100(r1)
	lwz      r0, 0x2c(r31)
	stw      r0, 0x104(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	addi     r3, r1, 0x74
	bl       __ct__4QuatFv
	lfs      f5, 0x50(r31)
	addi     r3, r1, 0xec
	lfs      f12, 0x158(r1)
	addi     r4, r1, 0x84
	lfs      f11, 0x15c(r1)
	lfs      f6, 0x4c(r31)
	fmuls    f2, f12, f5
	lfs      f13, 0x154(r1)
	fmuls    f3, f11, f5
	lfs      f7, 0x54(r31)
	fmuls    f0, f12, f6
	lfs      f29, 0x150(r1)
	fmuls    f1, f13, f7
	lfs      f8, 0x48(r31)
	fmadds   f4, f13, f6, f2
	fmuls    f10, f7, f29
	fmsubs   f2, f11, f6, f1
	fmadds   f1, f11, f7, f4
	fmsubs   f0, f13, f5, f0
	fmuls    f9, f5, f29
	fmuls    f4, f6, f29
	fmsubs   f3, f12, f7, f3
	fmuls    f5, f13, f8
	fmsubs   f1, f29, f8, f1
	fadds    f6, f3, f4
	fadds    f4, f2, f9
	fmuls    f3, f12, f8
	stfs     f1, 0x74(r1)
	fadds    f2, f0, f10
	fmuls    f0, f11, f8
	fadds    f5, f6, f5
	fadds    f3, f4, f3
	fadds    f0, f2, f0
	stfs     f5, 0x78(r1)
	stfs     f3, 0x7c(r1)
	lwz      r6, 0x78(r1)
	stfs     f0, 0x80(r1)
	lwz      r5, 0x7c(r1)
	lwz      r0, 0x80(r1)
	stw      r6, 0x84(r1)
	stw      r5, 0x88(r1)
	stw      r0, 0x8c(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	lfs      f3, 0xec(r1)
	lfs      f2, 0xf0(r1)
	lfs      f1, 0xf4(r1)
	lfs      f0, 0xf8(r1)
	stfs     f3, 0x160(r1)
	stfs     f2, 0x164(r1)
	stfs     f1, 0x168(r1)
	stfs     f0, 0x16c(r1)
	lbz      r0, 0x175(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8013AA38
	addi     r3, r1, 0x140
	bl       __ct__4QuatFv
	lfs      f0, lbl_80518270@sda21(r2)
	addi     r3, r1, 0xdc
	lfs      f3, 0x164(r1)
	addi     r4, r1, 0x5c
	fmuls    f5, f0, f31
	lfs      f2, 0x168(r1)
	lfs      f1, 0x16c(r1)
	lfs      f0, 0x160(r1)
	fmuls    f4, f3, f5
	fmuls    f3, f2, f5
	fmuls    f2, f1, f5
	stfs     f4, 0x68(r1)
	fmuls    f1, f5, f0
	stfs     f3, 0x6c(r1)
	lwz      r6, 0x68(r1)
	stfs     f2, 0x70(r1)
	lwz      r5, 0x6c(r1)
	lwz      r0, 0x70(r1)
	stw      r6, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r0, 0x64(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	lfs      f3, 0xdc(r1)
	addi     r3, r1, 0x130
	lfs      f2, 0xe0(r1)
	lfs      f1, 0xe4(r1)
	lfs      f0, 0xe8(r1)
	stfs     f3, 0x140(r1)
	stfs     f2, 0x144(r1)
	stfs     f1, 0x148(r1)
	stfs     f0, 0x14c(r1)
	bl       __ct__4QuatFv
	addi     r3, r1, 0x4c
	bl       __ct__4QuatFv
	lfs      f1, 0x48(r31)
	addi     r3, r1, 0xcc
	lfs      f0, 0x140(r1)
	addi     r4, r1, 0x4c
	lfs      f4, 0x14c(r1)
	fadds    f1, f1, f0
	lfs      f2, 0x148(r1)
	lfs      f0, 0x144(r1)
	stfs     f1, 0x4c(r1)
	lfs      f5, 0x54(r31)
	lfs      f3, 0x50(r31)
	lfs      f1, 0x4c(r31)
	fadds    f4, f5, f4
	fadds    f2, f3, f2
	fadds    f0, f1, f0
	stfs     f4, 0x58(r1)
	stfs     f0, 0x50(r1)
	stfs     f2, 0x54(r1)
	bl       __ct__4QuatFR4Quat
	lfs      f3, 0xcc(r1)
	addi     r3, r31, 0x48
	lfs      f2, 0xd0(r1)
	addi     r4, r1, 0x124
	lfs      f1, 0xd4(r1)
	lfs      f0, 0xd8(r1)
	stfs     f3, 0x130(r1)
	stfs     f2, 0x134(r1)
	stfs     f1, 0x138(r1)
	stfs     f0, 0x13c(r1)
	bl       "getYDegree__FR4QuatR10Vector3<f>"
	fmr      f30, f1
	addi     r3, r1, 0x130
	addi     r4, r1, 0x118
	bl       "getYDegree__FR4QuatR10Vector3<f>"
	lis      r3, sincosTable___5JMath@ha
	fmr      f31, f1
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0xaa8(r3)
	lfs      f29, 0x800(r3)
	fcmpo    cr0, f30, f0
	bge      lbl_8013A9C0
	fcmpo    cr0, f31, f30
	bge      lbl_8013A99C
	lfs      f0, 0x128(r1)
	addi     r3, r31, 0x58
	lfs      f1, lbl_8051823C@sda21(r2)
	addi     r4, r31, 0x30
	lfs      f8, 0x124(r1)
	addi     r5, r1, 0x40
	fmuls    f5, f0, f1
	lfs      f2, lbl_80518258@sda21(r2)
	lfs      f3, 0x12c(r1)
	fmuls    f0, f8, f1
	lfs      f4, lbl_80518274@sda21(r2)
	fnmsubs  f6, f3, f2, f5
	fmsubs   f7, f3, f1, f0
	lfs      f1, 0x30(r31)
	fmsubs   f5, f8, f2, f5
	lfs      f3, 0x34(r31)
	fmuls    f0, f6, f4
	fmuls    f2, f7, f4
	fmuls    f4, f5, f4
	lfs      f5, 0x38(r31)
	fadds    f0, f1, f0
	fadds    f1, f3, f2
	fadds    f2, f5, f4
	stfs     f0, 0x30(r31)
	stfs     f1, 0x34(r31)
	stfs     f2, 0x38(r31)
	bl       PSMTXMultVec
	lfs      f1, 0x44(r1)
	fcmpo    cr0, f31, f29
	lfs      f2, 0x48(r1)
	lfs      f0, 0x40(r1)
	stfs     f0, 0x24(r31)
	stfs     f1, 0x28(r31)
	stfs     f2, 0x2c(r31)
	blt      lbl_8013AB2C
	lfs      f0, 0x130(r1)
	stfs     f0, 0x48(r31)
	lfs      f0, 0x134(r1)
	stfs     f0, 0x4c(r31)
	lfs      f0, 0x138(r1)
	stfs     f0, 0x50(r31)
	lfs      f0, 0x13c(r1)
	stfs     f0, 0x54(r31)
	b        lbl_8013AB2C

lbl_8013A99C:
	lfs      f0, 0x130(r1)
	stfs     f0, 0x48(r31)
	lfs      f0, 0x134(r1)
	stfs     f0, 0x4c(r31)
	lfs      f0, 0x138(r1)
	stfs     f0, 0x50(r31)
	lfs      f0, 0x13c(r1)
	stfs     f0, 0x54(r31)
	b        lbl_8013AB2C

lbl_8013A9C0:
	addi     r3, r1, 0x30
	bl       __ct__4QuatFv
	lfs      f1, 0x48(r31)
	addi     r3, r1, 0xbc
	lfs      f0, 0x140(r1)
	addi     r4, r1, 0x30
	lfs      f4, 0x14c(r1)
	fadds    f1, f1, f0
	lfs      f2, 0x148(r1)
	lfs      f0, 0x144(r1)
	stfs     f1, 0x30(r1)
	lfs      f5, 0x54(r31)
	lfs      f3, 0x50(r31)
	lfs      f1, 0x4c(r31)
	fadds    f4, f5, f4
	fadds    f2, f3, f2
	fadds    f0, f1, f0
	stfs     f4, 0x3c(r1)
	stfs     f0, 0x34(r1)
	stfs     f2, 0x38(r1)
	bl       __ct__4QuatFR4Quat
	lfs      f0, 0xbc(r1)
	stfs     f0, 0x48(r31)
	lfs      f0, 0xc0(r1)
	stfs     f0, 0x4c(r31)
	lfs      f0, 0xc4(r1)
	stfs     f0, 0x50(r31)
	lfs      f0, 0xc8(r1)
	stfs     f0, 0x54(r31)
	b        lbl_8013AB2C

lbl_8013AA38:
	addi     r3, r1, 0x108
	bl       __ct__4QuatFv
	lfs      f0, lbl_80518270@sda21(r2)
	addi     r3, r1, 0xac
	lfs      f3, 0x164(r1)
	addi     r4, r1, 0x18
	fmuls    f5, f0, f31
	lfs      f2, 0x168(r1)
	lfs      f1, 0x16c(r1)
	lfs      f0, 0x160(r1)
	fmuls    f4, f3, f5
	fmuls    f3, f2, f5
	fmuls    f2, f1, f5
	stfs     f4, 0x24(r1)
	fmuls    f1, f5, f0
	stfs     f3, 0x28(r1)
	lwz      r6, 0x24(r1)
	stfs     f2, 0x2c(r1)
	lwz      r5, 0x28(r1)
	lwz      r0, 0x2c(r1)
	stw      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x20(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	lfs      f3, 0xac(r1)
	addi     r3, r1, 8
	lfs      f2, 0xb0(r1)
	lfs      f1, 0xb4(r1)
	lfs      f0, 0xb8(r1)
	stfs     f3, 0x108(r1)
	stfs     f2, 0x10c(r1)
	stfs     f1, 0x110(r1)
	stfs     f0, 0x114(r1)
	bl       __ct__4QuatFv
	lfs      f1, 0x48(r31)
	addi     r3, r1, 0x9c
	lfs      f0, 0x108(r1)
	addi     r4, r1, 8
	lfs      f4, 0x114(r1)
	fadds    f1, f1, f0
	lfs      f2, 0x110(r1)
	lfs      f0, 0x10c(r1)
	stfs     f1, 8(r1)
	lfs      f5, 0x54(r31)
	lfs      f3, 0x50(r31)
	lfs      f1, 0x4c(r31)
	fadds    f4, f5, f4
	fadds    f2, f3, f2
	fadds    f0, f1, f0
	stfs     f4, 0x14(r1)
	stfs     f0, 0xc(r1)
	stfs     f2, 0x10(r1)
	bl       __ct__4QuatFR4Quat
	lfs      f0, 0x9c(r1)
	stfs     f0, 0x48(r31)
	lfs      f0, 0xa0(r1)
	stfs     f0, 0x4c(r31)
	lfs      f0, 0xa4(r1)
	stfs     f0, 0x50(r31)
	lfs      f0, 0xa8(r1)
	stfs     f0, 0x54(r31)

lbl_8013AB2C:
	addi     r3, r31, 0x48
	bl       normalise__4QuatFv
	mr       r4, r31
	addi     r3, r30, 4
	addi     r5, r31, 0x48
	bl       "makeTQ__7MatrixfFR10Vector3<f>R4Quat"
	psq_l    f31, 568(r1), 0, qr0
	lfd      f31, 0x230(r1)
	psq_l    f30, 552(r1), 0, qr0
	lfd      f30, 0x220(r1)
	psq_l    f29, 536(r1), 0, qr0
	lfd      f29, 0x210(r1)
	lwz      r31, 0x20c(r1)
	lwz      r0, 0x244(r1)
	lwz      r30, 0x208(r1)
	mtlr     r0
	addi     r1, r1, 0x240
	blr
	*/
}

/**
 * @note Address: 0x8013AB74
 * @note Size: 0x300
 */
bool Game::Rigid::resolveCollision(int configIndex, Vector3f& collisionPoint, Vector3f& collisionNormal, f32 restitutionCoefficient)
{
	if (DynamicsParms::mInstance->mMicroCollision.mValue == 1120.0f) {
#if _DEBUG
		// Stripped from release build
		OSReport("rassclaaat");
#endif
	}

	RigidConfig* config = &this->mConfigs[configIndex];

	Vector3f positionDelta = collisionPoint - config->mPosition;

	Vector3f angularMomentum(config->mRotatedMomentum.z * positionDelta.y - config->mRotatedMomentum.y * positionDelta.z,
	                         config->mRotatedMomentum.x * positionDelta.z - config->mRotatedMomentum.z * positionDelta.x,
	                         config->mRotatedMomentum.y * positionDelta.x - config->mRotatedMomentum.x * positionDelta.y);

	config->mRotatedMomentum = angularMomentum;

	Vector3f impulse = angularMomentum + config->mVelocity;
	impulse.negate2();

	f32 impulseMagnitude = impulse.dot(collisionNormal);

	// If there's a collision
	if (impulseMagnitude < 0.0f * -0.0f) {
		return false;
	}

	// If it's tiny, just set it to 0
	if (fabs(impulseMagnitude) <= 0.0f) {
		restitutionCoefficient = 1.0f;
		impulseMagnitude       = 0.0f;
	}

	Vector3f rotatedVelocity = config->mRotatedTransform.mtxMult(positionDelta.cross(collisionNormal));

	f32 dynamicCoefficient = collisionNormal.dot(rotatedVelocity);
	f32 scalar             = -(1.0f + restitutionCoefficient) * impulseMagnitude / dynamicCoefficient;

	Vector3f collisionImpulse = positionDelta * (collisionNormal * scalar);

	config->mVelocity = config->mVelocity + collisionImpulse;
	config->setMomentum(positionDelta.cross(collisionImpulse));
	return true;
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stfd     f27, 0x40(r1)
	psq_st   f27, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	lwz      r7, mInstance__13DynamicsParms@sda21(r13)
	mr       r29, r3
	lfs      f3, lbl_80518278@sda21(r2)
	mr       r30, r6
	lfs      f2, 0xa8(r7)
	lfs      f0, lbl_8051823C@sda21(r2)
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f0
	mulli    r3, r4, 0x88
	lfs      f2, lbl_8051823C@sda21(r2)
	lfs      f8, 8(r5)
	lfs      f6, 4(r5)
	fneg     f0, f2
	addi     r31, r3, 0x34
	add      r31, r29, r31
	lfs      f4, 0(r5)
	lfs      f7, 8(r31)
	lfs      f5, 4(r31)
	lfs      f3, 0(r31)
	fsubs    f29, f8, f7
	lfs      f7, 0x24(r31)
	fsubs    f30, f6, f5
	fsubs    f31, f4, f3
	stfs     f7, 0x20(r1)
	fmuls    f4, f7, f29
	lfs      f6, 0x28(r31)
	stfs     f6, 0x24(r1)
	fmuls    f3, f6, f31
	lfs      f5, 0x2c(r31)
	fmsubs   f8, f7, f30, f3
	fmuls    f3, f5, f30
	stfs     f5, 0x28(r1)
	fmsubs   f4, f5, f31, f4
	stfs     f8, 0x28(r1)
	fmsubs   f6, f6, f29, f3
	stfs     f4, 0x24(r1)
	stfs     f6, 0x20(r1)
	lfs      f3, 0x10(r31)
	lfs      f5, 0xc(r31)
	fadds    f4, f3, f4
	lfs      f7, 0x14(r31)
	fadds    f6, f5, f6
	lfs      f3, 4(r30)
	fadds    f8, f7, f8
	lfs      f5, 0(r30)
	fneg     f4, f4
	lfs      f7, 8(r30)
	fneg     f6, f6
	fneg     f8, f8
	fmuls    f3, f4, f3
	fmadds   f3, f6, f5, f3
	fmadds   f3, f8, f7, f3
	fcmpo    cr0, f3, f0
	bge      lbl_8013AC94
	li       r3, 0
	b        lbl_8013AE30

lbl_8013AC94:
	fabs     f0, f3
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_8013ACB0
	lfs      f1, lbl_80518258@sda21(r2)
	fmr      f3, f2

lbl_8013ACB0:
	lfs      f27, 0(r29)
	addi     r3, r31, 0x58
	lfs      f0, lbl_80518258@sda21(r2)
	addi     r4, r1, 0x20
	stfs     f31, 0x20(r1)
	addi     r5, r1, 0x14
	fadds    f0, f0, f1
	stfs     f30, 0x24(r1)
	stfs     f29, 0x28(r1)
	fneg     f0, f0
	lfs      f4, 0(r30)
	lfs      f5, 8(r30)
	fmuls    f28, f0, f3
	lfs      f3, 4(r30)
	fmuls    f1, f30, f4
	fmuls    f2, f31, f5
	fmuls    f0, f29, f3
	fmsubs   f3, f31, f3, f1
	fmsubs   f1, f29, f4, f2
	fmsubs   f0, f30, f5, f0
	stfs     f3, 0x28(r1)
	stfs     f0, 0x20(r1)
	stfs     f1, 0x24(r1)
	bl       PSMTXMultVec
	lfs      f5, 0x14(r1)
	addi     r3, r31, 0x58
	lfs      f4, 0x18(r1)
	addi     r4, r31, 0x30
	lfs      f3, 0x1c(r1)
	fmuls    f2, f5, f29
	fmuls    f1, f4, f31
	stfs     f5, 0x20(r1)
	fmuls    f0, f3, f30
	addi     r5, r1, 8
	fmsubs   f6, f3, f31, f2
	stfs     f4, 0x24(r1)
	fmsubs   f2, f4, f29, f0
	fmsubs   f4, f5, f30, f1
	stfs     f3, 0x28(r1)
	stfs     f2, 0x20(r1)
	stfs     f6, 0x24(r1)
	stfs     f4, 0x28(r1)
	lfs      f9, 4(r30)
	lfs      f8, 0(r30)
	fmuls    f0, f9, f6
	lfs      f6, 8(r30)
	lfs      f3, 0(r29)
	lfs      f1, 0xc(r31)
	fmadds   f0, f8, f2, f0
	lfs      f5, 0x10(r31)
	lfs      f7, 0x14(r31)
	fmadds   f0, f6, f4, f0
	fadds    f27, f27, f0
	fdivs    f0, f28, f27
	fneg     f0, f0
	fmuls    f8, f8, f0
	fmuls    f9, f9, f0
	fmuls    f10, f6, f0
	fmuls    f0, f8, f3
	fmuls    f4, f9, f3
	fmuls    f6, f10, f3
	fadds    f3, f1, f0
	fmuls    f2, f31, f10
	fmuls    f1, f30, f8
	fmuls    f0, f29, f9
	stfs     f3, 0xc(r31)
	fadds    f3, f5, f4
	fadds    f4, f7, f6
	fmsubs   f5, f29, f8, f2
	stfs     f3, 0x10(r31)
	fmsubs   f6, f31, f9, f1
	fmsubs   f3, f30, f10, f0
	stfs     f4, 0x14(r31)
	stfs     f31, 0x20(r1)
	stfs     f30, 0x24(r1)
	stfs     f29, 0x28(r1)
	stfs     f3, 0x20(r1)
	stfs     f5, 0x24(r1)
	stfs     f6, 0x28(r1)
	lfs      f0, 0x30(r31)
	lfs      f1, 0x34(r31)
	lfs      f2, 0x38(r31)
	fadds    f0, f0, f3
	fadds    f1, f1, f5
	fadds    f2, f2, f6
	stfs     f0, 0x30(r31)
	stfs     f1, 0x34(r31)
	stfs     f2, 0x38(r31)
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	li       r3, 1
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0x24(r31)
	stfs     f1, 0x28(r31)
	stfs     f2, 0x2c(r31)

lbl_8013AE30:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	psq_l    f27, 72(r1), 0, qr0
	lfd      f27, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x94(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}
