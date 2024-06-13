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
DynParticleMgr::DynParticleMgr(int count) { alloc(count); }

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

			Vector3f sep      = particle->mPosition - mTransformedPosition;
			Vector3f crossVec = mRigid.mConfigs[0].mRotatedMomentum.cross(sep) + mRigid.mConfigs[0].mVelocity;

			f32 dotProd  = crossVec.dot(particle->mCollisionNormal); // f13
			f32 dotProd2 = mRigid.mConfigs[0].mForce.dot(particle->mCollisionNormal);

			Vector3f sep2 = crossVec - particle->mCollisionNormal * dotProd;
			sep2.normalise();

			mRigid.mConfigs[0].mForce += particle->mCollisionNormal * dotProd2;

			// f32 dotProd3 = sep2.dot(crossVec);
			if (absF(sep2.dot(crossVec)) < DynamicsParms::mInstance->mStatic()) {
				sep2.normalise();
				mRigid.mConfigs[0].mForce -= sep2 * DynamicsParms::mInstance->mStaParm();
			} else {
				Vector3f sep3 = crossVec - particle->mCollisionNormal * crossVec.dot(particle->mCollisionNormal);
				sep3.normalise();
				mRigid.mConfigs[0].mForce += sep3 * -DynamicsParms::mInstance->mFixedFrictionValue();
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
		Vector3f sep      = particle->mPosition - mTransformedPosition;
		Vector3f crossVec = mRigid.mConfigs[0].mRotatedMomentum.cross(sep) + mRigid.mConfigs[0].mVelocity;
		Vector3f vec      = particle->mCollisionNormal * crossVec.dot(particle->mCollisionNormal);
		vec               = crossVec - vec;
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
	return !((u8)range_check(vec.x) == false || (u8)range_check(vec.y) == false || (u8)range_check(vec.z) == false);
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

	RigidBodyCallback delegate(this, &DynCreature::tracemoveCallback);

	mTransformedPosition = mBaseTrMatrix.mtxMult(mRotation);
	mRigid.integrate(rate, 0);

	Vector3f velocity;
	Sys::Sphere moveSphere;
	for (DynParticle* particle = mDynParticle; particle; particle = particle->mNext) {
		particle->mPosition = mBaseTrMatrix.mtxMult(particle->mRotation);

		velocity     = mRigid.mConfigs[0].mRotatedMomentum;
		Vector3f sep = particle->mPosition - mTransformedPosition;
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
	/*
	stwu     r1, -0x190(r1)
	mflr     r0
	stw      r0, 0x194(r1)
	stfd     f31, 0x180(r1)
	psq_st   f31, 392(r1), 0, qr0
	stfd     f30, 0x170(r1)
	psq_st   f30, 376(r1), 0, qr0
	stfd     f29, 0x160(r1)
	psq_st   f29, 360(r1), 0, qr0
	stfd     f28, 0x150(r1)
	psq_st   f28, 344(r1), 0, qr0
	stfd     f27, 0x140(r1)
	psq_st   f27, 328(r1), 0, qr0
	stfd     f26, 0x130(r1)
	psq_st   f26, 312(r1), 0, qr0
	stfd     f25, 0x120(r1)
	psq_st   f25, 296(r1), 0, qr0
	stmw     r26, 0x108(r1)
	mr       r26, r3
	lis      r5, lbl_804B5218@ha
	lbz      r6, 0x311(r3)
	lis      r4, "__vt__39IDelegate2<R10Vector3<f>,R10Vector3<f>>"@ha
	lis      r3,
"__vt__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>"@ha li r0,
0 stb      r6, 0x310(r26) addi     r7, r5, lbl_804B5218@l addi     r6, r4,
"__vt__39IDelegate2<R10Vector3<f>,R10Vector3<f>>"@l fmr      f27, f1 stb r0,
0x311(r26) addi     r0, r3,
"__vt__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>"@l addi r3,
r26, 0x138 addi     r4, r26, 0x2f4 lwz      r9, 0(r7) lwz      r8, 4(r7) addi
r5, r1, 0x14 lwz      r7, 8(r7) stw      r6, 0x50(r1) stw      r9, 0x44(r1) stw
r8, 0x48(r1) stw      r7, 0x4c(r1) stw      r0, 0x50(r1) stw      r26, 0x54(r1)
	stw      r9, 0x58(r1)
	stw      r8, 0x5c(r1)
	stw      r7, 0x60(r1)
	bl       PSMTXMultVec
	lfs      f2, 0x18(r1)
	fmr      f1, f27
	lfs      f3, 0x1c(r1)
	addi     r3, r26, 0x17c
	lfs      f0, 0x14(r1)
	li       r4, 0
	stfs     f0, 0x300(r26)
	stfs     f2, 0x304(r26)
	stfs     f3, 0x308(r26)
	bl       integrate__Q24Game5RigidFfi
	lis      r3, sincosTable___5JMath@ha
	lwz      r27, 0x178(r26)
	lfs      f29, lbl_80519238@sda21(r2)
	addi     r28, r3, sincosTable___5JMath@l
	lfs      f30, lbl_80519250@sda21(r2)
	addi     r29, r1, 0x20
	lfs      f31, lbl_80519248@sda21(r2)
	addi     r30, r1, 0x30
	lfs      f25, lbl_8051923C@sda21(r2)
	addi     r31, r1, 0x50
	lfs      f26, lbl_80519254@sda21(r2)
	b        lbl_801A8CE0

lbl_801A899C:
	mr       r4, r27
	addi     r3, r26, 0x138
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0xc(r27)
	stfs     f1, 0x10(r27)
	stfs     f2, 0x14(r27)
	lfs      f6, 0x1d4(r26)
	stfs     f6, 0x30(r1)
	lfs      f5, 0x1d8(r26)
	stfs     f5, 0x34(r1)
	lfs      f4, 0x1dc(r26)
	stfs     f4, 0x38(r1)
	lfs      f2, 0xc(r27)
	lfs      f0, 0x300(r26)
	lfs      f3, 0x10(r27)
	lfs      f1, 0x304(r26)
	fsubs    f7, f2, f0
	lfs      f2, 0x14(r27)
	lfs      f0, 0x308(r26)
	fsubs    f3, f3, f1
	fmuls    f1, f5, f7
	fsubs    f2, f2, f0
	fmuls    f0, f4, f3
	fmsubs   f8, f6, f3, f1
	fmuls    f1, f6, f2
	fmsubs   f3, f5, f2, f0
	stfs     f8, 0x38(r1)
	fmsubs   f2, f4, f7, f1
	stfs     f3, 0x30(r1)
	stfs     f2, 0x34(r1)
	lfs      f1, 0x1c0(r26)
	lfs      f0, 0x1bc(r26)
	fadds    f4, f2, f1
	lfs      f2, 0x1c4(r26)
	fadds    f1, f3, f0
	fadds    f2, f8, f2
	fmuls    f3, f4, f4
	stfs     f4, 0x34(r1)
	fmuls    f0, f1, f1
	fmuls    f4, f2, f2
	stfs     f1, 0x30(r1)
	fadds    f0, f0, f3
	stfs     f2, 0x38(r1)
	lfs      f28, 0x18(r27)
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f29
	ble      lbl_801A8A84
	fmadds   f0, f1, f1, f3
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f29
	ble      lbl_801A8A88
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_801A8A88

lbl_801A8A84:
	fmr      f0, f29

lbl_801A8A88:
	fmuls    f0, f27, f0
	fcmpo    cr0, f0, f30
	ble      lbl_801A8A98
	fmr      f0, f30

lbl_801A8A98:
	lfs      f1, 0(r27)
	fadds    f28, f28, f0
	fcmpo    cr0, f1, f31
	blt      lbl_801A8AB4
	lfs      f0, lbl_8051924C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8ABC

lbl_801A8AB4:
	li       r0, 0
	b        lbl_801A8AC0

lbl_801A8ABC:
	li       r0, 1

lbl_801A8AC0:
	clrlwi   r0, r0, 0x18
	cntlzw   r3, r0
	rlwinm.  r0, r3, 0x1b, 0x18, 0x1f
	srwi     r3, r3, 5
	bne      lbl_801A8B08
	lfs      f1, 4(r27)
	lfs      f0, lbl_80519248@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_801A8AF0
	lfs      f0, lbl_8051924C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8AF8

lbl_801A8AF0:
	li       r0, 0
	b        lbl_801A8AFC

lbl_801A8AF8:
	li       r0, 1

lbl_801A8AFC:
	clrlwi   r0, r0, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_801A8B08:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A8B44
	lfs      f1, 8(r27)
	lfs      f0, lbl_80519248@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_801A8B2C
	lfs      f0, lbl_8051924C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8B34

lbl_801A8B2C:
	li       r0, 0
	b        lbl_801A8B38

lbl_801A8B34:
	li       r0, 1

lbl_801A8B38:
	clrlwi   r0, r0, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_801A8B44:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A8C00
	lfs      f1, 0xc(r27)
	lfs      f0, lbl_80519248@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_801A8B68
	lfs      f0, lbl_8051924C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8B70

lbl_801A8B68:
	li       r0, 0
	b        lbl_801A8B74

lbl_801A8B70:
	li       r0, 1

lbl_801A8B74:
	clrlwi   r0, r0, 0x18
	cntlzw   r3, r0
	rlwinm.  r0, r3, 0x1b, 0x18, 0x1f
	srwi     r3, r3, 5
	bne      lbl_801A8BBC
	lfs      f1, 0x10(r27)
	lfs      f0, lbl_80519248@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_801A8BA4
	lfs      f0, lbl_8051924C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8BAC

lbl_801A8BA4:
	li       r0, 0
	b        lbl_801A8BB0

lbl_801A8BAC:
	li       r0, 1

lbl_801A8BB0:
	clrlwi   r0, r0, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_801A8BBC:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A8BF8
	lfs      f1, 0x14(r27)
	lfs      f0, lbl_80519248@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_801A8BE0
	lfs      f0, lbl_8051924C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A8BE8

lbl_801A8BE0:
	li       r0, 0
	b        lbl_801A8BEC

lbl_801A8BE8:
	li       r0, 1

lbl_801A8BEC:
	clrlwi   r0, r0, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_801A8BF8:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A8C1C

lbl_801A8C00:
	lis      r3, lbl_8047F630@ha
	lis      r5, lbl_8047F654@ha
	addi     r3, r3, lbl_8047F630@l
	li       r4, 0x1f1
	addi     r5, r5, lbl_8047F654@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A8C1C:
	lfs      f0, 0xc(r27)
	li       r6, 0
	li       r5, -1
	li       r0, 1
	stfs     f0, 0x20(r1)
	fmr      f1, f27
	addi     r4, r1, 0x64
	lfs      f0, 0x10(r27)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x14(r27)
	stfs     f0, 0x28(r1)
	stfs     f28, 0x2c(r1)
	stw      r27, 0x30c(r26)
	lwz      r3, 0x30c(r26)
	stb      r6, 0x2c(r3)
	stb      r6, 0x7d(r1)
	lfs      f0, 0x800(r28)
	stw      r29, 0x64(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stw      r30, 0x68(r1)
	stfs     f25, 0x6c(r1)
	stfs     f29, 0x70(r1)
	stw      r31, 0x74(r1)
	stw      r6, 0xa8(r1)
	stb      r6, 0xd8(r1)
	stb      r6, 0x7c(r1)
	stw      r6, 0xac(r1)
	stw      r6, 0x78(r1)
	stb      r6, 0xf4(r1)
	stw      r6, 0xf8(r1)
	stfs     f0, 0x90(r1)
	stfs     f26, 0x94(r1)
	stw      r5, 0xfc(r1)
	stw      r6, 0xb0(r1)
	stb      r6, 0x7e(r1)
	stb      r0, 0x7d(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, platMgr__4Game@sda21(r13)
	li       r0, 0
	stb      r0, 0x7d(r1)
	cmplwi   r3, 0
	beq      lbl_801A8CDC
	fmr      f1, f27
	addi     r4, r1, 0x64
	bl       traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof

lbl_801A8CDC:
	lwz      r27, 0x1c(r27)

lbl_801A8CE0:
	cmplwi   r27, 0
	bne      lbl_801A899C
	psq_l    f31, 392(r1), 0, qr0
	lfd      f31, 0x180(r1)
	psq_l    f30, 376(r1), 0, qr0
	lfd      f30, 0x170(r1)
	psq_l    f29, 360(r1), 0, qr0
	lfd      f29, 0x160(r1)
	psq_l    f28, 344(r1), 0, qr0
	lfd      f28, 0x150(r1)
	psq_l    f27, 328(r1), 0, qr0
	lfd      f27, 0x140(r1)
	psq_l    f26, 312(r1), 0, qr0
	lfd      f26, 0x130(r1)
	psq_l    f25, 296(r1), 0, qr0
	lfd      f25, 0x120(r1)
	lmw      r26, 0x108(r1)
	lwz      r0, 0x194(r1)
	mtlr     r0
	addi     r1, r1, 0x190
	blr
	*/
}

/**
 * @note Address: 0x801A8D34
 * @note Size: 0x1C
 */
Vector3f DynCreature::getPosition() { return mRigid.mConfigs[0].mPosition; }

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
Vector3f DynCreature::getVelocity() { return mRigid.mConfigs[0].mVelocity; }

/**
 * @note Address: 0x801A8E1C
 * @note Size: 0x1C
 */
void DynCreature::setVelocity(Vector3f& velocity) { mRigid.mConfigs[0].mVelocity = velocity; }

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
f32 DynCreature::getAngularEffect(Vector3f&, Vector3f&) { return 0.0f; }

/**
 * @note Address: 0x801A8EC8
 * @note Size: 0x44
 */
void DynCreature::applyImpulse(Vector3f&, Vector3f& vel) { mRigid.mConfigs[0].mVelocity = mRigid.mConfigs[0].mVelocity + vel * mMass; }

/**
 * @note Address: N/A
 * @note Size: 0x19C
 */
void DynCreature::simulateCylinder(Sys::Cylinder&, f32)
{
	// UNUSED FUNCTION
}

} // namespace Game
