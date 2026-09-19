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
DynamicsParms::~DynamicsParms()
{
	mInstance = nullptr;
}

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
Game::Rigid::Rigid()
{
	mFlags.clear();
}

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

	intermediateQuat = quat * yAxisQuat;

	intermediateQuat = intermediateQuat * inverseQuat;

	vec = intermediateQuat.v;

	return intermediateQuat.v.y;
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
		halfTimeQ = primaryQ * (0.5f * timeStep);

		Quat primaryRotatedQ; // 0x130
		primaryRotatedQ = thisConfig->mPrimaryRotation + halfTimeQ;

		Vector3f vec1; // 0x124
		f32 yDeg48 = getYDegree(thisConfig->mPrimaryRotation, vec1);

		Vector3f vec2; // 0x118
		f32 yDeg4 = getYDegree(primaryRotatedQ, vec2);

		f32 sinValue8192 = JMASSin(8192);
		if (yDeg48 < JMASSin(10912)) {
			if (yDeg4 < yDeg48) {
				Vector3f yAxis(0.0f, 1.0f, 0.0f);
				Vector3f torque = vec1.cross(yAxis) * 1000.0f;
				f32 x, y, z;
				z = thisConfig->mMomentum.z + torque.z;
				y = thisConfig->mMomentum.y + torque.y;
				x = thisConfig->mMomentum.x + torque.x;
				thisConfig->mMomentum.set(x, y, z);
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
		q5                           = primaryQ * (0.5f * timeStep);
		thisConfig->mPrimaryRotation = thisConfig->mPrimaryRotation + q5;
	}

	thisConfig->mPrimaryRotation.normalise();
	mPrimaryMatrix.makeTQ(thisConfig->mPosition, thisConfig->mPrimaryRotation);
}

/**
 * @note Address: 0x8013AB74
 * @note Size: 0x300
 */
bool Game::Rigid::resolveCollision(int configIndex, Vector3f& collisionPoint, Vector3f& collisionNormal, f32 restitutionCoefficient)
{
	if (1120.0f * DynamicsParms::mInstance->mMicroCollision.mValue > 0.0f) {
		// probably some commented-out/otherwise stripped code here
		restitutionCoefficient = restitutionCoefficient;
	}
	f32 zero = 0.0f;

	RigidConfig& config      = mConfigs[configIndex];
	Vector3f positionDelta   = collisionPoint - config.mPosition;
	Vector3f scratch         = config.mRotatedMomentum;
	scratch                  = scratch.cross(positionDelta);
	Vector3f contactVelocity = config.mVelocity + scratch;
	contactVelocity.negate();

	f32 impulseMagnitude = contactVelocity.dot(collisionNormal);

	if (impulseMagnitude < -zero) {
		return false;
	}

	if (absF(impulseMagnitude) <= zero) {
		restitutionCoefficient = 1.0f;
		impulseMagnitude       = zero;
	}

	f32 impulseDenominator = mTimeStep;
	impulseMagnitude       = -(1.0f + restitutionCoefficient) * impulseMagnitude;
	f32 impulseNumerator   = impulseMagnitude;

	scratch = positionDelta;
	scratch.cross(scratch, collisionNormal);
	scratch = config.mRotatedTransform.mtxMult(scratch);
	scratch.cross(scratch, positionDelta);
	impulseDenominator += collisionNormal.dot(scratch);
	Vector3f collisionImpulse = collisionNormal;
	collisionImpulse *= -(impulseNumerator / impulseDenominator);
	config.mVelocity = config.mVelocity + collisionImpulse * mTimeStep;

	scratch = positionDelta;
	scratch.cross(scratch, collisionImpulse);
	config.mMomentum        = config.mMomentum + scratch;
	config.mRotatedMomentum = config.mRotatedTransform.mtxMult(config.mMomentum);
	return true;
}
