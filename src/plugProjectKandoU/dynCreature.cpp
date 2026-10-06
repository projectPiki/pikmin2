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

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void DynParticle::release()
{
	DynParticle* particle = this;
	while (particle) {
		dynParticleMgr->kill(particle);
		DynParticle* nextParticle = particle->mNext;
		particle->mNext           = nullptr;
		particle                  = nextParticle;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void DynParticle::updateGlobal(Matrixf& mtx)
{
	mPosition = mtx.mtxMult(mRotation);
}

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
	if (mDynParticle) {
		mDynParticle->release();
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
		particle->updateGlobal(mBaseTrMatrix);
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

			Vector3f& normal = particle->mCollisionNormal;
			f32 dotProd2     = mRigid.mConfigs[0].mForce.dot(particle->mCollisionNormal);
			Vector3f sep2    = normal * crossVec.dot(normal);
			sep2             = crossVec - sep2;
			sep2.normalise();

			mRigid.mConfigs[0].mForce += particle->mCollisionNormal * dotProd2;

			f32 staticLimit = DynamicsParms::mInstance->mStatic();
			if (absF(sep2.dot(crossVec)) < staticLimit) {
				sep2.normalise();
				sep2 = sep2 * DynamicsParms::mInstance->mStaParm();
				mRigid.mConfigs[0].mForce -= sep2;
			} else {
				sep2 = crossVec - normal * crossVec.dot(normal);
				sep2.normalise();
				f32 fixedFriction = DynamicsParms::mInstance->mFixedFrictionValue();
				mRigid.mConfigs[0].mForce += sep2 * -fixedFriction;
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
f32 DynCreature::getContactParticleRatio()
{
	return (f32)getContactParticleNum() / (f32)getParticleNum();
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
int DynCreature::getContactParticleNum()
{
	int count = 0;
	for (DynParticle* particle = mDynParticle; particle; particle = particle->mNext) {
		if (particle->mIsTouching) {
			count++;
		}
	}
	return count;
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
int DynCreature::getParticleNum()
{
	int count = 0;
	for (DynParticle* particle = mDynParticle; particle; particle = particle->mNext) {
		count++;
	}
	return count;
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
		particle->updateGlobal(mBaseTrMatrix);

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
