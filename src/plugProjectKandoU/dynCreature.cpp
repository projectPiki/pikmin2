#include "Game/DynCreature.h"
#include "Game/DynParticle.h"
#include "Game/MapMgr.h"
#include "Game/PlatInstance.h"
#include "DynamicsParms.h"
#include "Iterator.h"
#include "types.h"

namespace Game {

DynParticleMgr* dynParticleMgr;

/**
 * @note Address: 0x801A7F3C
 * @note Size: 0x5C
 */
DynParticleMgr::DynParticleMgr(int count)
{
	alloc(count);
}

/**
 * @note Address: 0x801A8038
 * @note Size: 0x30
 */
void DynParticleMgr::resetMgr()
{
	for (int i = 0; i < getMax(); i++) {
		mOpenIds[i] = 1;
	}

	mActiveCount = 0;
}

/**
 * @note Address: 0x801A8068
 * @note Size: 0x78
 */
DynParticle* DynParticle::getAt(int idx)
{
	DynParticle* particle = this;
	for (int i = 0; i < idx; i++) {
		if (!particle) {
			JUT_PANICLINE(134, "p is null n is %d\n", idx);
		}
		particle = particle->mNext;
	}

	return particle;
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x58
//  */
// void DynParticle::release()
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x50
//  */
// void DynParticle::updateGlobal(Matrixf&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x801A80E0
 * @note Size: 0x74
 */
DynCreature::DynCreature()
{
	mCurrentChildPtcl    = nullptr;
	mDynParticle         = nullptr;
	mRotation            = Vector3f(0.0f);
	mTransformedPosition = Vector3f(0.0f);
	mCanBounce           = 0;
	mHasCollided         = 0;
}

/**
 * @note Address: 0x801A8154
 * @note Size: 0xB0
 */
bool DynCreature::createParticles(int count)
{
	mDynParticle = nullptr;
	for (int i = 0; i < count; i++) {
		DynParticle* particle = dynParticleMgr->birth();
		if (!particle) {
			releaseParticles();
			return false;
		}

		particle->mNext = nullptr;
		if (mDynParticle) {
			particle->mNext = mDynParticle;
			mDynParticle    = particle;
		} else {
			mDynParticle = particle;
		}
	}

	return true;
}

/**
 * @note Address: 0x801A8204
 * @note Size: 0x74
 */
void DynCreature::releaseParticles()
{
	DynParticle* particle = mDynParticle;
	if (particle) {
		while (particle) {
			dynParticleMgr->kill(particle);
			DynParticle* nextParticle = particle->mNext;
			particle->mNext           = nullptr;
			particle                  = nextParticle;
		}
		mDynParticle = nullptr;
	}
}

/**
 * @note Address: 0x801A8278
 * @note Size: 0x6C
 */
void DynCreature::updateParticlePositions()
{
	for (DynParticle* particle = mDynParticle; particle; particle = particle->mNext) {
		particle->mPosition = mBaseTrMatrix.mtxMult(particle->mRotation);
	}
}

/**
 * @note Address: 0x801A82E4
 * @note Size: 0x4F4
 */
void DynCreature::computeForces(f32 friction)
{
	if (DynamicsParms::mInstance->mNewFriction()) {
		for (DynParticle* particle = mDynParticle; particle; particle = particle->mNext) {
			if (!particle->mIsTouching) {
				continue;
			}

			Vector3f crossVec = mRigid.mConfigs[0].mRotatedMomentum;
			Vector3f sep;
			sep.x = particle->mPosition.x - mTransformedPosition.x;
			sep.y = particle->mPosition.y - mTransformedPosition.y;
			sep.z = particle->mPosition.z - mTransformedPosition.z;
			crossVec.cross(crossVec, sep);
			crossVec = crossVec + mRigid.mConfigs[0].mVelocity;

			Vector3f sep2 = particle->mCollisionNormal * crossVec.dot(particle->mCollisionNormal);
			f32 dotProd2  = mRigid.mConfigs[0].mForce.dot(particle->mCollisionNormal);
			sep2          = crossVec - sep2;
			sep2.normalise();

			mRigid.mConfigs[0].mForce += particle->mCollisionNormal * dotProd2;

			f32 staticLimit = DynamicsParms::mInstance->mStatic();
			if (absF(sep2.dot(crossVec)) < staticLimit) {
				sep2.normalise();
				sep2 = sep2 * DynamicsParms::mInstance->mStaParm();
				mRigid.mConfigs[0].mForce -= sep2;
			} else {
				Vector3f sep3 = particle->mCollisionNormal * crossVec.dot(particle->mCollisionNormal);
				sep3          = crossVec - sep3;
				sep3.normalise();
				f32 fixedFriction = DynamicsParms::mInstance->mFixedFrictionValue();
				mRigid.mConfigs[0].mForce += sep3 * -fixedFriction;
			}
		}
		return;
	}

	int validCount = 0;
	int count      = 0;
	for (DynParticle* particle = mDynParticle; particle; particle = particle->mNext, count++) {
		if (particle->mIsTouching) {
			validCount++;
		}
	}

	if (validCount == 0) {
		return;
	}

	if (!DynamicsParms::mInstance->mFriction()) {
		return;
	}

	f32 prop = (f32)validCount / (f32)count;

	if (DynamicsParms::mInstance->mFixedFriction()) {
		friction = DynamicsParms::mInstance->mFixedFrictionValue();
	}

	f32 coeff = -friction * prop; // f3

	for (DynParticle* particle = mDynParticle; particle; particle = particle->mNext) {
		if (!particle->mIsTouching) {
			continue;
		}
		Vector3f crossVec = mRigid.mConfigs[0].mRotatedMomentum;
		Vector3f sep;
		sep.x = particle->mPosition.x - mTransformedPosition.x;
		sep.y = particle->mPosition.y - mTransformedPosition.y;
		sep.z = particle->mPosition.z - mTransformedPosition.z;
		crossVec.cross(crossVec, sep);
		crossVec     = crossVec + mRigid.mConfigs[0].mVelocity;
		Vector3f vec = particle->mCollisionNormal * crossVec.dot(particle->mCollisionNormal);
		vec          = crossVec - vec;
		if (DynamicsParms::mInstance->mFrictionTangentVelocity()) {
			vec.normalise();
		}

		Vector3f coeffVec         = vec * coeff;
		Vector3f vec2             = mRigid.mConfigs[0].mForce + coeffVec;
		mRigid.mConfigs[0].mForce = vec2;

		if (!DynamicsParms::mInstance->mNoRotationEffect()) {
			Vector3f vec3              = mRigid.mConfigs[0].mTorque;
			mRigid.mConfigs[0].mTorque = vec3 + sep.cross(coeffVec);
		}
	}

	/*
	stwu     r1, -0x20(r1)
	lwz      r6, mInstance__13DynamicsParms@sda21(r13)
	lbz      r0, 0x3c(r6)
	cmplwi   r0, 0
	beq      lbl_801A85B0
	lwz      r5, 0x178(r3)
	b        lbl_801A85A4

lbl_801A8300:
	lbz      r0, 0x2c(r5)
	cmplwi   r0, 0
	beq      lbl_801A85A0
	lfs      f1, 0x14(r5)
	lfs      f0, 0x308(r3)
	lfs      f5, 0x1d4(r3)
	fsubs    f9, f1, f0
	lfs      f3, 0xc(r5)
	lfs      f1, 0x300(r3)
	lfs      f2, 0x10(r5)
	lfs      f0, 0x304(r3)
	fsubs    f6, f3, f1
	fmuls    f1, f5, f9
	lfs      f4, 0x1dc(r3)
	fsubs    f8, f2, f0
	lfs      f7, 0x1d8(r3)
	lfs      f0, 0x1c0(r3)
	fmsubs   f3, f4, f6, f1
	fmuls    f2, f4, f8
	lfs      f1, 0x1bc(r3)
	fmuls    f4, f7, f6
	lfs      f6, 0x24(r5)
	fadds    f0, f3, f0
	fmsubs   f3, f7, f9, f2
	fmsubs   f5, f5, f8, f4
	lfs      f4, 0x1c4(r3)
	fmuls    f2, f0, f6
	lfs      f7, 0x20(r5)
	fadds    f8, f3, f1
	fadds    f1, f5, f4
	lfs      f5, 0x28(r5)
	fmadds   f2, f8, f7, f2
	lfs      f3, 0x1cc(r3)
	lfs      f4, 0x1c8(r3)
	fmuls    f3, f3, f6
	lfs      f12, 0x1d0(r3)
	fmadds   f13, f1, f5, f2
	lfs      f9, lbl_80519238@sda21(r2)
	fmadds   f11, f4, f7, f3
	fmuls    f2, f6, f13
	fmuls    f10, f7, f13
	fmuls    f4, f5, f13
	fsubs    f3, f0, f2
	fsubs    f2, f8, f10
	fsubs    f4, f1, f4
	fmuls    f10, f3, f3
	fmadds   f12, f12, f5, f11
	fmuls    f11, f4, f4
	fmadds   f10, f2, f2, f10
	fadds    f10, f11, f10
	fcmpo    cr0, f10, f9
	ble      lbl_801A83E0
	ble      lbl_801A83E4
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_801A83E4

lbl_801A83E0:
	fmr      f10, f9

lbl_801A83E4:
	lfs      f9, lbl_80519238@sda21(r2)
	fcmpo    cr0, f10, f9
	ble      lbl_801A8404
	lfs      f9, lbl_8051923C@sda21(r2)
	fdivs    f9, f9, f10
	fmuls    f2, f2, f9
	fmuls    f3, f3, f9
	fmuls    f4, f4, f9

lbl_801A8404:
	fmuls    f10, f7, f12
	lfs      f11, 0x1c8(r3)
	fmuls    f7, f3, f0
	fmuls    f9, f6, f12
	fadds    f10, f11, f10
	fmadds   f6, f2, f8, f7
	fmuls    f7, f5, f12
	stfs     f10, 0x1c8(r3)
	fmadds   f5, f4, f1, f6
	lfs      f6, 0x1cc(r3)
	fadds    f6, f6, f9
	fabs     f5, f5
	stfs     f6, 0x1cc(r3)
	frsp     f5, f5
	lfs      f6, 0x1d0(r3)
	fadds    f6, f6, f7
	stfs     f6, 0x1d0(r3)
	lwz      r4, mInstance__13DynamicsParms@sda21(r13)
	lfs      f6, 0x80(r4)
	fcmpo    cr0, f5, f6
	bge      lbl_801A84E4
	fmuls    f1, f3, f3
	lfs      f0, lbl_80519238@sda21(r2)
	fmuls    f5, f4, f4
	fmadds   f1, f2, f2, f1
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801A8484
	ble      lbl_801A8488
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801A8488

lbl_801A8484:
	fmr      f1, f0

lbl_801A8488:
	lfs      f0, lbl_80519238@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A84A8
	lfs      f0, lbl_8051923C@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_801A84A8:
	lwz      r4, mInstance__13DynamicsParms@sda21(r13)
	lfs      f0, 0x1c8(r3)
	lfs      f1, 0x58(r4)
	fmuls    f2, f2, f1
	fmuls    f3, f3, f1
	fmuls    f1, f4, f1
	fsubs    f0, f0, f2
	stfs     f0, 0x1c8(r3)
	lfs      f0, 0x1cc(r3)
	fsubs    f0, f0, f3
	stfs     f0, 0x1cc(r3)
	lfs      f0, 0x1d0(r3)
	fsubs    f0, f0, f1
	stfs     f0, 0x1d0(r3)
	b        lbl_801A85A0

lbl_801A84E4:
	lfs      f4, 0x24(r5)
	lfs      f5, 0x20(r5)
	fmuls    f3, f0, f4
	lfs      f6, 0x28(r5)
	lfs      f2, lbl_80519238@sda21(r2)
	fmadds   f3, f8, f5, f3
	fmadds   f3, f1, f6, f3
	fmuls    f4, f4, f3
	fmuls    f5, f5, f3
	fmuls    f3, f6, f3
	fsubs    f6, f0, f4
	fsubs    f4, f8, f5
	fsubs    f5, f1, f3
	fmuls    f0, f6, f6
	fmuls    f1, f5, f5
	fmadds   f0, f4, f4, f0
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f2
	ble      lbl_801A8540
	ble      lbl_801A8544
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801A8544

lbl_801A8540:
	fmr      f1, f2

lbl_801A8544:
	lfs      f0, lbl_80519238@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8564
	lfs      f0, lbl_8051923C@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f4, f4, f0
	fmuls    f6, f6, f0
	fmuls    f5, f5, f0

lbl_801A8564:
	lwz      r4, mInstance__13DynamicsParms@sda21(r13)
	lfs      f2, 0x1c8(r3)
	lfs      f0, 0x168(r4)
	fneg     f3, f0
	fmuls    f1, f4, f3
	fmuls    f0, f6, f3
	fmuls    f3, f5, f3
	fadds    f1, f2, f1
	stfs     f1, 0x1c8(r3)
	lfs      f1, 0x1cc(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x1cc(r3)
	lfs      f0, 0x1d0(r3)
	fadds    f0, f0, f3
	stfs     f0, 0x1d0(r3)

lbl_801A85A0:
	lwz      r5, 0x1c(r5)

lbl_801A85A4:
	cmplwi   r5, 0
	bne      lbl_801A8300
	b        lbl_801A87D0

lbl_801A85B0:
	lwz      r7, 0x178(r3)
	li       r4, 0
	li       r8, 0
	mr       r5, r7
	b        lbl_801A85DC

lbl_801A85C4:
	lbz      r0, 0x2c(r5)
	cmplwi   r0, 0
	beq      lbl_801A85D4
	addi     r4, r4, 1

lbl_801A85D4:
	lwz      r5, 0x1c(r5)
	addi     r8, r8, 1

lbl_801A85DC:
	cmplwi   r5, 0
	bne      lbl_801A85C4
	cmpwi    r4, 0
	beq      lbl_801A87D0
	lbz      r0, 0x114(r6)
	cmplwi   r0, 0
	beq      lbl_801A87D0
	lis      r5, 0x4330
	xoris    r0, r4, 0x8000
	xoris    r4, r8, 0x8000
	stw      r0, 0xc(r1)
	lbz      r0, 0x14c(r6)
	stw      r5, 8(r1)
	lfd      f3, lbl_80519240@sda21(r2)
	cmplwi   r0, 0
	lfd      f0, 8(r1)
	stw      r4, 0x14(r1)
	fsubs    f2, f0, f3
	stw      r5, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f3
	fdivs    f2, f2, f0
	beq      lbl_801A863C
	lfs      f1, 0x168(r6)

lbl_801A863C:
	fneg     f0, f1
	mr       r5, r7
	fmuls    f3, f0, f2
	b        lbl_801A87C8

lbl_801A864C:
	lbz      r0, 0x2c(r5)
	cmplwi   r0, 0
	beq      lbl_801A87C4
	lfs      f1, 0x14(r5)
	lfs      f0, 0x308(r3)
	lwz      r4, mInstance__13DynamicsParms@sda21(r13)
	fsubs    f2, f1, f0
	lfs      f10, 0x1d4(r3)
	lfs      f6, 0xc(r5)
	lfs      f0, 0x300(r3)
	lfs      f5, 0x10(r5)
	fmuls    f4, f10, f2
	lfs      f1, 0x304(r3)
	fsubs    f0, f6, f0
	lfs      f9, 0x1dc(r3)
	fsubs    f1, f5, f1
	lfs      f11, 0x1d8(r3)
	fmsubs   f7, f9, f0, f4
	lfs      f6, 0x1c0(r3)
	fmuls    f8, f11, f0
	lbz      r0, 0x130(r4)
	fmuls    f4, f9, f1
	lfs      f5, 0x1bc(r3)
	fadds    f9, f7, f6
	lfs      f12, 0x24(r5)
	fmsubs   f8, f10, f1, f8
	lfs      f7, 0x1c4(r3)
	fmsubs   f6, f11, f2, f4
	lfs      f11, 0x20(r5)
	fmuls    f4, f9, f12
	lfs      f10, 0x28(r5)
	fadds    f7, f8, f7
	cmplwi   r0, 0
	fadds    f8, f6, f5
	fmadds   f4, f8, f11, f4
	fmadds   f4, f7, f10, f4
	fmuls    f6, f11, f4
	fmuls    f5, f12, f4
	fmuls    f4, f10, f4
	fsubs    f6, f8, f6
	fsubs    f8, f9, f5
	fsubs    f7, f7, f4
	beq      lbl_801A8748
	fmuls    f5, f8, f8
	lfs      f4, lbl_80519238@sda21(r2)
	fmuls    f9, f7, f7
	fmadds   f5, f6, f6, f5
	fadds    f5, f9, f5
	fcmpo    cr0, f5, f4
	ble      lbl_801A8724
	ble      lbl_801A8728
	frsqrte  f4, f5
	fmuls    f5, f4, f5
	b        lbl_801A8728

lbl_801A8724:
	fmr      f5, f4

lbl_801A8728:
	lfs      f4, lbl_80519238@sda21(r2)
	fcmpo    cr0, f5, f4
	ble      lbl_801A8748
	lfs      f4, lbl_8051923C@sda21(r2)
	fdivs    f4, f4, f5
	fmuls    f6, f6, f4
	fmuls    f8, f8, f4
	fmuls    f7, f7, f4

lbl_801A8748:
	fmuls    f10, f6, f3
	lfs      f4, 0x1c8(r3)
	fmuls    f11, f8, f3
	lfs      f5, 0x1cc(r3)
	fmuls    f12, f7, f3
	lfs      f6, 0x1d0(r3)
	fadds    f4, f4, f10
	fadds    f5, f5, f11
	fadds    f6, f6, f12
	stfs     f4, 0x1c8(r3)
	stfs     f5, 0x1cc(r3)
	stfs     f6, 0x1d0(r3)
	lwz      r4, mInstance__13DynamicsParms@sda21(r13)
	lbz      r0, 0x190(r4)
	cmplwi   r0, 0
	bne      lbl_801A87C4
	fmuls    f4, f2, f11
	lfs      f5, 0x1ec(r3)
	fmuls    f6, f0, f12
	lfs      f7, 0x1f0(r3)
	fmuls    f8, f1, f10
	lfs      f9, 0x1f4(r3)
	fmsubs   f1, f1, f12, f4
	fmsubs   f2, f2, f10, f6
	fmsubs   f4, f0, f11, f8
	fadds    f0, f5, f1
	fadds    f1, f7, f2
	fadds    f2, f9, f4
	stfs     f0, 0x1ec(r3)
	stfs     f1, 0x1f0(r3)
	stfs     f2, 0x1f4(r3)

lbl_801A87C4:
	lwz      r5, 0x1c(r5)

lbl_801A87C8:
	cmplwi   r5, 0
	bne      lbl_801A864C

lbl_801A87D0:
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x801A87D8
 * @note Size: 0xB4
 */
void DynCreature::tracemoveCallback(Vector3f& point, Vector3f& normal)
{
	bool collCheck = mRigid.resolveCollision(0, point, normal, DynamicsParms::mInstance->mElasticity());

	if (mCurrentChildPtcl && collCheck) {
		if (!mCanBounce) {
			bounceCallback(nullptr);
		}

		mHasCollided                        = 1;
		mCurrentChildPtcl->mIsTouching      = 1;
		mCurrentChildPtcl->mCollisionNormal = normal;
	}
}

} // namespace Game

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
bool range_check(f32 val)
{
	if (val < FLOAT_DIST_MIN || val > FLOAT_DIST_MAX) {
		return false;
	}
	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
bool range_check(Vector3f& vec)
{
	return !(!range_check(vec.x) || !range_check(vec.y) || !range_check(vec.z));
}

namespace Game {

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void DynCreature::getContactParticeRatio()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
int DynCreature::getContactParticleNum()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
int DynCreature::getParticleNum()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801A888C
 * @note Size: 0x4A8
 */
void DynCreature::simulate(f32 rate)
{
	mCanBounce   = mHasCollided;
	mHasCollided = 0;

	RigidBodyCallback delegate = RigidBodyCallback(this, &DynCreature::tracemoveCallback);

	mTransformedPosition = mBaseTrMatrix.mtxMult(mRotation);
	mRigid.integrate(rate, 0);

	Vector3f velocity;
	Sys::Sphere moveSphere;
	for (DynParticle* particle = mDynParticle; particle; particle = particle->mNext) {
		particle->mPosition = mBaseTrMatrix.mtxMult(particle->mRotation);

		velocity = mRigid.mConfigs[0].mRotatedMomentum;
		Vector3f sep;
		sep.x = particle->mPosition.x - mTransformedPosition.x;
		sep.y = particle->mPosition.y - mTransformedPosition.y;
		sep.z = particle->mPosition.z - mTransformedPosition.z;
		velocity.cross(velocity, sep);
		velocity = velocity + mRigid.mConfigs[0].mVelocity;

		f32 radius   = particle->mRadius;
		f32 extraRad = rate * velocity.length();
		if (extraRad > 50.0f) {
			extraRad = 50.0f;
		}
		radius += extraRad;

		JUT_ASSERTLINE(497, range_check(particle->mRotation) && range_check(particle->mPosition), "simulate error\n");
		moveSphere.mPosition           = particle->mPosition;
		moveSphere.mRadius             = radius;
		mCurrentChildPtcl              = particle;
		mCurrentChildPtcl->mIsTouching = 0;

		MoveInfo info(&moveSphere, &velocity, 1.0f, &delegate);
		info.mDoHardIntersect = true;
		mapMgr->traceMove(info, rate);
		info.mDoHardIntersect = false;
		if (platMgr) {
			platMgr->traceMove(info, rate);
		}
	}
}

/**
 * @note Address: 0x801A8D34
 * @note Size: 0x1C
 */
Vector3f DynCreature::getPosition()
{
	return mRigid.mConfigs[0].mPosition;
}

/**
 * @note Address: 0x801A8D50
 * @note Size: 0xAC
 */
void DynCreature::onSetPosition(Vector3f& pos)
{
	mRigid.initPosition(pos, Vector3f::zero);
	mBaseTrMatrix = mRigid.mPrimaryMatrix;
	onSetPosition();
}

/**
 * @note Address: 0x801A8E00
 * @note Size: 0x1C
 */
Vector3f DynCreature::getVelocity()
{
	return mRigid.mConfigs[0].mVelocity;
}

/**
 * @note Address: 0x801A8E1C
 * @note Size: 0x1C
 */
void DynCreature::setVelocity(Vector3f& velocity)
{
	mRigid.mConfigs[0].mVelocity = velocity;
}

/**
 * @note Address: 0x801A8E38
 * @note Size: 0x88
 */
void DynCreature::getVelocityAt(Vector3f& position, Vector3f& outVelocity)
{
	outVelocity       = mRigid.mConfigs[0].mVelocity;
	Vector3f diff     = position - mRigid.mConfigs[0].mPosition;
	Vector3f otherVec = mRigid.mConfigs[0].mRotatedMomentum;
	outVelocity       = outVelocity + cross(otherVec, diff);
}

/**
 * @note Address: 0x801A8EC0
 * @note Size: 0x8
 */
f32 DynCreature::getAngularEffect(Vector3f&, Vector3f&)
{
	return 0.0f;
}

/**
 * @note Address: 0x801A8EC8
 * @note Size: 0x44
 */
void DynCreature::applyImpulse(Vector3f&, Vector3f& vel)
{
	mRigid.mConfigs[0].mVelocity = mRigid.mConfigs[0].mVelocity + vel * mMass;
}

/**
 * @note Address: N/A
 * @note Size: 0x19C
 */
void DynCreature::simulateCylinder(Sys::Cylinder&, f32)
{
	// UNUSED FUNCTION
}

} // namespace Game
