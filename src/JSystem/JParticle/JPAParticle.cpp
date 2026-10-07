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
JPAParticleCallBack::~JPAParticleCallBack()
{
}

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
