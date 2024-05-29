#include "float.h"
#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
#include "JSystem/JParticle/JPABlock.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JParticle/JPAResource.h"
#include "JSystem/JParticle/JPAShape.h"
#include "types.h"

/**
 * @note Address: 0x80094028
 * @note Size: 0x48
 */
JPAParticleCallBack::~JPAParticleCallBack() { }

/**
 * @note Address: 0x80094070
 * @note Size: 0x8C4
 */
void JPABaseParticle::init_p(JPAEmitterWorkData* workData)
{
	JPAExtraShape* extraShape       = workData->mResource->mExtraShape;
	JPABaseEmitter* emitter         = workData->mEmitter;
	JPABaseShape* baseShape         = workData->mResource->mBaseShape;
	JPADynamicsBlock* dynamicsBlock = workData->mResource->mDynamicsBlock;

	mAge      = -1;
	mLifeTime = (f32)emitter->mLifeTime * (1.0f - dynamicsBlock->mData->mLifeTimeRndm * emitter->mRandom.getRandF32());
	mTime     = 0.0f;
	initStatus(0);
	PSMTXMultVecSR(workData->mGlobalSR, (Vec*)&workData->mVolumePos, (Vec*)&mLocalPosition);
	if (emitter->checkDynFlag(8)) {
		setStatus(0x20);
	}
	mOffsetPosition.set(workData->mGlobalPos);
	mPosition.set(mOffsetPosition.x + mLocalPosition.x * workData->mPublicScale.x,
	              mOffsetPosition.y + mLocalPosition.y * workData->mPublicScale.y,
	              mOffsetPosition.z + mLocalPosition.z * workData->mPublicScale.z);

	JGeometry::TVec3f vec1; // 0x38
	if (emitter->mAwayFromCenterSpeed) {
		vec1.setLength(workData->mVelOmni, emitter->mAwayFromCenterSpeed);
	} else {
		vec1.zero();
	}

	JGeometry::TVec3f vec2; // 0x2C
	if (emitter->mAwayFromAxisSpeed) {
		vec2.setLength(workData->mVelAxis, emitter->mAwayFromAxisSpeed);
	} else {
		vec2.zero();
	}

	JGeometry::TVec3f vec3; // 0x20
	if (emitter->mDirSpeed) {
		Mtx yzRotMtx;
		JPAGetYZRotateMtx(emitter->mSpread * (SHORT_FLOAT_MAX * emitter->getRandZP()), emitter->getRandS16(), yzRotMtx);
		PSMTXConcat(workData->mDirectionMtx, yzRotMtx, yzRotMtx);
		vec3.set(emitter->mDirSpeed * yzRotMtx[0][2], emitter->mDirSpeed * yzRotMtx[1][2], emitter->mDirSpeed * yzRotMtx[2][2]);
	} else {
		vec3.zero();
	}

	JGeometry::TVec3f vec4; // 0x14
	if (emitter->mRndmDirSpeed) {
		vec4.set(emitter->mRndmDirSpeed * emitter->getRandZH(), emitter->mRndmDirSpeed * emitter->getRandZH(),
		         emitter->mRndmDirSpeed * emitter->getRandZH());
	} else {
		vec4.zero();
	}

	f32 type1Factor = (1.0f + emitter->getRandZP() * dynamicsBlock->getInitVelRatio());
	mVelType1.set(type1Factor * (vec1.x + vec2.x + vec3.x + vec4.x), type1Factor * (vec1.y + vec2.y + vec3.y + vec4.y),
	              type1Factor * (vec1.z + vec2.z + vec3.z + vec4.z));

	if (emitter->checkDynFlag(4)) {
		mVelType1.mul(emitter->mLocalScl);
	}

	PSMTXMultVecSR(workData->mGlobalRot, (Vec*)&mVelType1, (Vec*)&mVelType1);
	mVelType0.zero();
	mMoment = 1.0f - (dynamicsBlock->getMomentRndm() * emitter->getRandF32());
	mDrag   = 1.0f;
	_78     = 0;
	mBaseAxis.set(workData->mGlobalRot[0][1], workData->mGlobalRot[1][1], workData->mGlobalRot[2][1]);
	mPrmClr    = emitter->mPrmClr;
	mEnvClr    = emitter->mEnvClr;
	mAnmRandom = emitter->getRandF32() * f32(baseShape->getLoopOfstValue());

	if (extraShape && extraShape->isEnableScaleAnm()) {
		mParticleScaleX = mParticleScaleY = mScaleOut = emitter->mScaleOut * (1.0f + emitter->getRandZP() * extraShape->getScaleRndm());
	} else {
		mParticleScaleX = mParticleScaleY = mScaleOut = emitter->mScaleOut;
	}

	mPrmColorAlphaAnm = 255;

	if (extraShape && extraShape->isEnableAlphaFlick()) {
		mAlphaWaveRandom = 1.0f + (emitter->getRandZP() * extraShape->getAlphaFreqRndm());
	} else {
		mAlphaWaveRandom = 1.0f;
	}

	if (extraShape) {
		if (extraShape->isEnableRotateAnm()) {
			mRotateAngle = extraShape->getRotateInitAngle() + (extraShape->getRotateRndmAngle() * emitter->getRandZH());
			mRotateSpeed = extraShape->getRotateInitSpeed() * (1.0f + extraShape->getRotateRndmSpeed() * emitter->getRandZP());

			mRotateSpeed = (emitter->getRandZP() < extraShape->getRotateDirection()) ? mRotateSpeed : (s16)-mRotateSpeed;

		} else {
			mRotateAngle = 0;
			mRotateSpeed = 0;
		}
	} else {
		mRotateAngle = 0;
		mRotateSpeed = 0;
	}
}

/**
 * @note Address: 0x80094934
 * @note Size: 0x6A8
 */
void JPABaseParticle::init_c(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	JPABaseEmitter* emitter   = workData->mEmitter;
	JPAChildShape* childShape = workData->mResource->mChildShape;
	mAge                      = -1;
	mLifeTime                 = childShape->getLife();
	mTime                     = 0.0f;
	initStatus(4);
	mLocalPosition.set(particle->mLocalPosition);

	f32 posRndm = childShape->getPosRndm();
	if (posRndm != 0.0f) {
		JGeometry::TVec3f randVec;
		randVec.set(emitter->getRandZH(), emitter->getRandZH(), emitter->getRandZH());
		randVec.setLength(posRndm * emitter->getRandF32());
		mLocalPosition.add(randVec);
	}

	if (emitter->checkDynFlag(JPADYN_FollowEmtrChld)) {
		setStatus(0x20);
	}

	mOffsetPosition.set(particle->mOffsetPosition);

	f32 randLen = childShape->getBaseVel() * (1.0f + childShape->getBaseVelRndm() * emitter->getRandZP());
	JGeometry::TVec3f randVec2;
	randVec2.set(emitter->getRandZP(), emitter->getRandZP(), emitter->getRandZP());
	randVec2.setLength(randLen);
	mVelType1.scaleAdd(childShape->getVelInhRate(), particle->mVelType1, randVec2);
	mVelType0.scale(childShape->getVelInhRate(), particle->mVelType2);
	mMoment = particle->mMoment;

	if (childShape->isFieldAffected()) {
		mDrag = particle->mDrag;
	} else {
		setStatus(0x40);
		mDrag = 1.0f;
	}

	_78 = particle->_78;
	mVelType2.set(mVelType0);

	f32 factor = mMoment * mDrag;
	mVelocity.set(factor * (mVelType1.x + mVelType2.x), factor * (mVelType1.y + mVelType2.y), factor * (mVelType1.z + mVelType2.z));
	mBaseAxis.set(particle->mBaseAxis);

	if (childShape->isScaleInherited()) {
		mParticleScaleX = mScaleOut = particle->mParticleScaleX * childShape->getScaleInhRate();
		mParticleScaleY = mAlphaWaveRandom = particle->mParticleScaleY * childShape->getScaleInhRate();
	} else {
		mParticleScaleX = mScaleOut = mParticleScaleY = mAlphaWaveRandom = 1.0f;
	}

	if (childShape->isColorInherited()) {
		mPrmClr.r = particle->mPrmClr.r * childShape->getColorInhRate();
		mPrmClr.g = particle->mPrmClr.g * childShape->getColorInhRate();
		mPrmClr.b = particle->mPrmClr.b * childShape->getColorInhRate();

		mEnvClr.r = particle->mEnvClr.r * childShape->getColorInhRate();
		mEnvClr.g = particle->mEnvClr.g * childShape->getColorInhRate();
		mEnvClr.b = particle->mEnvClr.b * childShape->getColorInhRate();
	} else {
		childShape->getPrmClr(&mPrmClr);
		childShape->getEnvClr(&mEnvClr);
	}

	mPrmColorAlphaAnm = 255;

	if (childShape->isAlphaInherited()) {
		mPrmClr.a = COLOR_MULTI(particle->mPrmClr.a, particle->mPrmColorAlphaAnm) * childShape->getAlphaInhRate();
	} else {
		mPrmClr.a = childShape->getPrmAlpha();
	}

	mRotateAngle = particle->mRotateAngle;
	if (childShape->isRotateOn()) {
		mRotateSpeed = childShape->getRotInitSpeed();
	} else {
		mRotateSpeed = 0;
	}
}

/**
 * @note Address: 0x80094FDC
 * @note Size: 0x2A8
 */
bool JPABaseParticle::calc_p(JPAEmitterWorkData* workData)
{
	if (++mAge >= (s16)mLifeTime) {
		return true;
	}

	mTime = f32(mAge) / f32(mLifeTime);

	if (checkStatus(0x20)) {
		mOffsetPosition.set(workData->mGlobalPos);
	}

	mVelType2.zero();

	if (!checkStatus(0x40)) {
		workData->mResource->calcField(workData, this);
	}

	mVelType2.add(mVelType0);
	mVelType1.scale(workData->mEmitter->mAirResist);

	f32 factor = mMoment * mDrag;
	mVelocity.set(factor * (mVelType1.x + mVelType2.x), factor * (mVelType1.y + mVelType2.y), factor * (mVelType1.z + mVelType2.z));

	if (workData->mEmitter->mParticleCallback) {
		workData->mEmitter->mParticleCallback->execute(workData->mEmitter, this);
	}

	if (checkStatus(0x2)) {
		return true;
	}

	workData->mResource->calc_p(workData, this);

	mRotateAngle += mRotateSpeed;

	int rate;
	if (workData->mResource->mChildShape && canCreateChild(workData)) {
		rate = workData->mResource->mChildShape->getRate();
		while (rate > 0) {
			workData->mEmitter->createChild(this);
			rate--;
		}
	}

	mLocalPosition.add(mVelocity);
	mPosition.set(mOffsetPosition.x + (mLocalPosition.x * workData->mPublicScale.x),
	              mOffsetPosition.y + (mLocalPosition.y * workData->mPublicScale.y),
	              mOffsetPosition.z + (mLocalPosition.z * workData->mPublicScale.z));
	return false;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	lha      r3, 0x80(r3)
	addi     r0, r3, 1
	sth      r0, 0x80(r30)
	extsh    r3, r0
	lha      r0, 0x82(r30)
	cmpw     r3, r0
	blt      lbl_80095020
	li       r3, 1
	b        lbl_80095268

lbl_80095020:
	lha      r4, 0x80(r30)
	lis      r3, 0x4330
	xoris    r0, r0, 0x8000
	stw      r3, 8(r1)
	xoris    r4, r4, 0x8000
	lfd      f2, lbl_80516C48@sda21(r2)
	stw      r4, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f1, f0, f2
	stw      r3, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x84(r30)
	lwz      r0, 0x7c(r30)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_80095080
	lfs      f0, 0x138(r31)
	stfs     f0, 0x18(r30)
	lfs      f0, 0x13c(r31)
	stfs     f0, 0x1c(r30)
	lfs      f0, 0x140(r31)
	stfs     f0, 0x20(r30)

lbl_80095080:
	lfs      f0, lbl_80516C34@sda21(r2)
	stfs     f0, 0x50(r30)
	stfs     f0, 0x4c(r30)
	stfs     f0, 0x48(r30)
	lwz      r0, 0x7c(r30)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	bne      lbl_800950AC
	lwz      r3, 4(r31)
	mr       r4, r31
	mr       r5, r30
	bl       calcField__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle

lbl_800950AC:
	lfs      f1, 0x48(r30)
	lfs      f0, 0x3c(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x48(r30)
	lfs      f1, 0x4c(r30)
	lfs      f0, 0x40(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x4c(r30)
	lfs      f1, 0x50(r30)
	lfs      f0, 0x44(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x50(r30)
	lwz      r3, 0(r31)
	lfs      f0, 0x30(r30)
	lfs      f1, 0x48(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x30(r30)
	lfs      f0, 0x34(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x34(r30)
	lfs      f0, 0x38(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x38(r30)
	lfs      f3, 0x70(r30)
	lfs      f2, 0x74(r30)
	lfs      f1, 0x30(r30)
	lfs      f0, 0x48(r30)
	fmuls    f4, f3, f2
	lfs      f2, 0x34(r30)
	fadds    f0, f1, f0
	lfs      f1, 0x4c(r30)
	lfs      f3, 0x38(r30)
	fadds    f1, f2, f1
	lfs      f2, 0x50(r30)
	fmuls    f0, f4, f0
	fadds    f2, f3, f2
	fmuls    f1, f4, f1
	stfs     f0, 0x24(r30)
	fmuls    f0, f4, f2
	stfs     f1, 0x28(r30)
	stfs     f0, 0x2c(r30)
	lwz      r4, 0(r31)
	lwz      r3, 0xf0(r4)
	cmplwi   r3, 0
	beq      lbl_80095174
	lwz      r12, 0(r3)
	mr       r5, r30
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80095174:
	lwz      r0, 0x7c(r30)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80095188
	li       r3, 1
	b        lbl_80095268

lbl_80095188:
	lwz      r3, 4(r31)
	mr       r4, r31
	mr       r5, r30
	bl       calc_p__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle
	lhz      r3, 0x88(r30)
	lha      r0, 0x8a(r30)
	add      r0, r3, r0
	sth      r0, 0x88(r30)
	lwz      r3, 4(r31)
	lwz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_800951F8
	mr       r3, r30
	mr       r4, r31
	bl       canCreateChild__15JPABaseParticleFP18JPAEmitterWorkData
	clrlwi.  r0, r3, 0x18
	beq      lbl_800951F8
	lwz      r3, 4(r31)
	lwz      r3, 0x24(r3)
	lwz      r3, 0(r3)
	lha      r29, 0x42(r3)
	b        lbl_800951F0

lbl_800951E0:
	lwz      r3, 0(r31)
	mr       r4, r30
	bl       createChild__14JPABaseEmitterFP15JPABaseParticle
	addi     r29, r29, -1

lbl_800951F0:
	cmpwi    r29, 0
	bgt      lbl_800951E0

lbl_800951F8:
	lfs      f1, 0xc(r30)
	li       r3, 0
	lfs      f0, 0x24(r30)
	fadds    f0, f1, f0
	stfs     f0, 0xc(r30)
	lfs      f1, 0x10(r30)
	lfs      f0, 0x28(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x10(r30)
	lfs      f1, 0x14(r30)
	lfs      f0, 0x2c(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x14(r30)
	lfs      f2, 0xc(r30)
	lfs      f1, 0x12c(r31)
	lfs      f0, 0x18(r30)
	lfs      f3, 0x10(r30)
	fmadds   f0, f2, f1, f0
	lfs      f2, 0x130(r31)
	lfs      f1, 0x1c(r30)
	lfs      f5, 0x14(r30)
	lfs      f4, 0x134(r31)
	fmadds   f2, f3, f2, f1
	lfs      f1, 0x20(r30)
	stfs     f0, 0(r30)
	fmadds   f0, f5, f4, f1
	stfs     f2, 4(r30)
	stfs     f0, 8(r30)

lbl_80095268:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80095288
 * @note Size: 0x278
 */
bool JPABaseParticle::calc_c(JPAEmitterWorkData* workData)
{
	if (++mAge >= (s16)mLifeTime) {
		return true;
	}

	mTime = f32(mAge) / f32(mLifeTime);

	if (mAge) {
		if (checkStatus(0x20)) {
			mOffsetPosition.set(workData->mGlobalPos);
		}

		mVelType1.y -= workData->mResource->mChildShape->getGravity();

		mVelType2.zero();

		if (!checkStatus(0x40)) {
			workData->mResource->calcField(workData, this);
		}

		mVelType2.add(mVelType0);
		mVelType1.scale(workData->mEmitter->mAirResist);

		f32 factor = mMoment * mDrag;
		mVelocity.set(factor * (mVelType1.x + mVelType2.x), factor * (mVelType1.y + mVelType2.y), factor * (mVelType1.z + mVelType2.z));
	}

	if (workData->mEmitter->mParticleCallback) {
		workData->mEmitter->mParticleCallback->execute(workData->mEmitter, this);
	}

	if (checkStatus(0x2)) {
		return true;
	}

	workData->mResource->calc_c(workData, this);

	mRotateAngle += mRotateSpeed;

	mLocalPosition.add(mVelocity);
	mPosition.set(mOffsetPosition.x + (mLocalPosition.x * workData->mPublicScale.x),
	              mOffsetPosition.y + (mLocalPosition.y * workData->mPublicScale.y),
	              mOffsetPosition.z + (mLocalPosition.z * workData->mPublicScale.z));
	return false;

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lha      r3, 0x80(r3)
	addi     r0, r3, 1
	sth      r0, 0x80(r30)
	extsh    r3, r0
	lha      r0, 0x82(r30)
	cmpw     r3, r0
	blt      lbl_800952C8
	li       r3, 1
	b        lbl_800954E8

lbl_800952C8:
	lha      r4, 0x80(r30)
	lis      r3, 0x4330
	xoris    r0, r0, 0x8000
	stw      r3, 8(r1)
	xoris    r4, r4, 0x8000
	lfd      f2, lbl_80516C48@sda21(r2)
	stw      r4, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f1, f0, f2
	stw      r3, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x84(r30)
	lha      r0, 0x80(r30)
	cmpwi    r0, 0
	beq      lbl_80095420
	lwz      r0, 0x7c(r30)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_80095334
	lfs      f0, 0x138(r31)
	stfs     f0, 0x18(r30)
	lfs      f0, 0x13c(r31)
	stfs     f0, 0x1c(r30)
	lfs      f0, 0x140(r31)
	stfs     f0, 0x20(r30)

lbl_80095334:
	lwz      r3, 4(r31)
	lfs      f2, 0x34(r30)
	lwz      r3, 0x24(r3)
	lfs      f0, lbl_80516C34@sda21(r2)
	lwz      r3, 0(r3)
	lfs      f1, 0x1c(r3)
	fsubs    f1, f2, f1
	stfs     f1, 0x34(r30)
	stfs     f0, 0x50(r30)
	stfs     f0, 0x4c(r30)
	stfs     f0, 0x48(r30)
	lwz      r0, 0x7c(r30)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	bne      lbl_8009537C
	lwz      r3, 4(r31)
	mr       r4, r31
	mr       r5, r30
	bl       calcField__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle

lbl_8009537C:
	lfs      f1, 0x48(r30)
	lfs      f0, 0x3c(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x48(r30)
	lfs      f1, 0x4c(r30)
	lfs      f0, 0x40(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x4c(r30)
	lfs      f1, 0x50(r30)
	lfs      f0, 0x44(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x50(r30)
	lwz      r3, 0(r31)
	lfs      f0, 0x30(r30)
	lfs      f1, 0x48(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x30(r30)
	lfs      f0, 0x34(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x34(r30)
	lfs      f0, 0x38(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x38(r30)
	lfs      f3, 0x70(r30)
	lfs      f2, 0x74(r30)
	lfs      f1, 0x30(r30)
	lfs      f0, 0x48(r30)
	fmuls    f4, f3, f2
	lfs      f2, 0x34(r30)
	fadds    f0, f1, f0
	lfs      f1, 0x4c(r30)
	lfs      f3, 0x38(r30)
	fadds    f1, f2, f1
	lfs      f2, 0x50(r30)
	fmuls    f0, f4, f0
	fadds    f2, f3, f2
	fmuls    f1, f4, f1
	stfs     f0, 0x24(r30)
	fmuls    f0, f4, f2
	stfs     f1, 0x28(r30)
	stfs     f0, 0x2c(r30)

lbl_80095420:
	lwz      r4, 0(r31)
	lwz      r3, 0xf0(r4)
	cmplwi   r3, 0
	beq      lbl_80095444
	lwz      r12, 0(r3)
	mr       r5, r30
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80095444:
	lwz      r0, 0x7c(r30)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80095458
	li       r3, 1
	b        lbl_800954E8

lbl_80095458:
	lwz      r3, 4(r31)
	mr       r4, r31
	mr       r5, r30
	bl       calc_c__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle
	lhz      r4, 0x88(r30)
	li       r3, 0
	lha      r0, 0x8a(r30)
	add      r0, r4, r0
	sth      r0, 0x88(r30)
	lfs      f1, 0xc(r30)
	lfs      f0, 0x24(r30)
	fadds    f0, f1, f0
	stfs     f0, 0xc(r30)
	lfs      f1, 0x10(r30)
	lfs      f0, 0x28(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x10(r30)
	lfs      f1, 0x14(r30)
	lfs      f0, 0x2c(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x14(r30)
	lfs      f2, 0xc(r30)
	lfs      f1, 0x12c(r31)
	lfs      f0, 0x18(r30)
	lfs      f3, 0x10(r30)
	fmadds   f0, f2, f1, f0
	lfs      f2, 0x130(r31)
	lfs      f1, 0x1c(r30)
	lfs      f5, 0x14(r30)
	fmadds   f2, f3, f2, f1
	lfs      f4, 0x134(r31)
	lfs      f1, 0x20(r30)
	stfs     f0, 0(r30)
	fmadds   f0, f5, f4, f1
	stfs     f2, 4(r30)
	stfs     f0, 8(r30)

lbl_800954E8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80095500
 * @note Size: 0x80
 */
bool JPABaseParticle::canCreateChild(JPAEmitterWorkData* workData)
{
	bool canCreate = false;

	int timeLeft = mAge - (int)((mLifeTime - 1) * workData->mResource->mChildShape->mData->mTiming);
	if (timeLeft >= 0 && timeLeft % (workData->mResource->mChildShape->mData->mStep + 1) == 0) {
		canCreate = true;
	}

	return canCreate;
}

/**
 * @note Address: 0x80095580
 * @note Size: 0x24
 */
f32 JPABaseParticle::getCalcCurrentPositionX(const JPABaseEmitter* emitter) const
{
	return emitter->mManager->mWorkData->mPublicScale.x * (mLocalPosition.x + mVelocity.x) + mOffsetPosition.x;
}

/**
 * @note Address: 0x800955A4
 * @note Size: 0x24
 */
f32 JPABaseParticle::getCalcCurrentPositionY(const JPABaseEmitter* emitter) const
{
	return emitter->mManager->mWorkData->mPublicScale.y * (mLocalPosition.y + mVelocity.y) + mOffsetPosition.y;
}

/**
 * @note Address: 0x800955C8
 * @note Size: 0x24
 */
f32 JPABaseParticle::getCalcCurrentPositionZ(const JPABaseEmitter* emitter) const
{
	return emitter->mManager->mWorkData->mPublicScale.z * (mLocalPosition.z + mVelocity.z) + mOffsetPosition.z;
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
f32 JPABaseParticle::getWidth(const JPABaseEmitter* emitter) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
f32 JPABaseParticle::getHeight(const JPABaseEmitter* emitter) const
{
	// UNUSED FUNCTION
}
