#include "Game/IKSystemBase.h"
#include "Game/NsMathExp.h"
#include "Game/MapMgr.h"
#include "System.h"
#include "trig.h"

namespace Game {
/**
 * @note Address: 0x802A9E5C
 * @note Size: 0x70
 */
IKSystemBase::IKSystemBase()
{
	mIsIKEnabled = false;
	mWasOnGround = true;
	mIsOnGround  = true;
	mScaleJoints = false;

	mBendRatio = 0.0f;
	mMoveRatio = 0.0f;

	mParams = nullptr;
}

/**
 * @note Address: 0x802A9ECC
 * @note Size: 0x30
 */
void IKSystemBase::init()
{
	mIsIKEnabled = false;
	mWasOnGround = true;
	mIsOnGround  = true;
	mScaleJoints = false;

	mBendRatio = 0.0f;
	mMoveRatio = 0.0f;
	mMoveTimer = 0.0f;

	mParams = nullptr;
}

/**
 * @note Address: 0x802A9EFC
 * @note Size: 0x10
 */
void IKSystemBase::setLegJointMatrix(int index, Matrixf* jointMtx) { mLegJointMatrices[index] = jointMtx; }

/**
 * @note Address: 0x802A9F0C
 * @note Size: 0x8
 */
void IKSystemBase::setParameters(IKSystemParms* params) { mParams = params; }

/**
 * @note Address: 0x802A9F14
 * @note Size: 0xF0
 */
void IKSystemBase::startProgramedIK()
{
	mIsIKEnabled         = true;
	mIsBlendMotionActive = false;
	mScaleJoints         = false;

	mBendRatio = 0.0f;
	mMoveRatio = 2.0f;
	mMoveTimer = 0.0f;

	mTargetPosition = mLegJointMatrices[BOTTOM]->getColumn(3);

	Vector3f topPos = mLegJointMatrices[TOP]->getColumn(3);
	Vector3f midPos = mLegJointMatrices[MIDDLE]->getColumn(3);

	mTopToMiddleDistance    = topPos.distance(midPos);
	mMiddleToBottomDistance = midPos.distance(mTargetPosition);
}

/**
 * @note Address: 0x802AA004
 * @note Size: 0xF4
 */
void IKSystemBase::startMovePosition(Vector3f& targetMove)
{
	mIsOnGround = false;

	mBendRatio = 0.0f;
	mMoveRatio = 0.0f;
	mMoveTimer = 0.0f;

	// Set top position directly
	mIkPositions[TOP] = mTargetPosition;

	// Set end position to the floor
	targetMove.y         = mapMgr->getMinY(targetMove);
	mIkPositions[BOTTOM] = targetMove;

	// Interpolate between top and bottom to get middle
	f32 fc  = mParams->mMoveInterpolationRate;
	f32 fcn = 1.0f - mParams->mMoveInterpolationRate;

	mIkPositions[MIDDLE].x = (fc * mIkPositions[BOTTOM].x) + (fcn * mIkPositions[TOP].x);
	mIkPositions[MIDDLE].y = (fc * mIkPositions[BOTTOM].y) + (fcn * mIkPositions[TOP].y);
	mIkPositions[MIDDLE].z = (fc * mIkPositions[BOTTOM].z) + (fcn * mIkPositions[TOP].z);

	// Apply a vertical offset for the artists to change
	mIkPositions[MIDDLE].y += mParams->mHeightOffset;
}

/**
 * @note Address: 0x802AA0F8
 * @note Size: 0xC
 */
void IKSystemBase::startBlendMotion() { mIsBlendMotionActive = true; }

/**
 * @note Address: 0x802AA104
 * @note Size: 0xC
 */
void IKSystemBase::finishBlendMotion() { mIsBlendMotionActive = false; }

/**
 * @note Address: 0x802AA110
 * @note Size: 0xC
 */
void IKSystemBase::checkJointScaleOn() { mScaleJoints = true; }

/**
 * @note Address: 0x802AA11C
 * @note Size: 0x7C
 */
void IKSystemBase::update()
{
	if (!mIsIKEnabled) {
		return;
	}

	if (!mIsOnGround) {
		moveBottomJointPosition();
		if (mMoveRatio > 1.0f && onGroundPosition()) {
			mIsOnGround = true;
		}
	}

	makeBendRatio();
	mWasOnGround = mIsOnGround;
}

/**
 * @note Address: 0x802AA198
 * @note Size: 0xF8
 */
void IKSystemBase::makeMatrix()
{
	if (!mIsIKEnabled) {
		return;
	}

	Vector3f topPos    = mLegJointMatrices[TOP]->getColumn(3);
	Vector3f middleDir = getMiddleDirection(topPos);
	Vector3f jointPos;
	NsMathExp::calcJointPos(topPos, mTargetPosition, mTopToMiddleDistance, mMiddleToBottomDistance, middleDir, jointPos);

	setTopJointRotation(topPos, jointPos);
	setMiddleJointRotation(topPos, jointPos);

	mLegJointMatrices[MIDDLE]->setTranslation(jointPos);
	mLegJointMatrices[BOTTOM]->setTranslation(mTargetPosition);

	makeBottomMatrix(topPos);
}

/**
 * @note Address: 0x802AA290
 * @note Size: 0xC4
 */
void IKSystemBase::moveBottomJointPosition()
{
	if (mMoveRatio < 1.0f) {
		mMoveTimer += mParams->mRaiseSlowdownFactor;
	} else {
		mMoveTimer += mParams->mDownwardAccelFactor;
	}

	mMoveTimer = boundAboveBelow(mMoveTimer, mParams->mMinDecelFactor, mParams->mMaxDecelFactor);
	mMoveRatio += (mParams->mBottomJointMoveSpeed + mMoveTimer) * sys->getDeltaTime();

	NsMathExp::calcLagrange(mIkPositions, mMoveRatio, mTargetPosition);
}

/**
 * @note Address: 0x802AA354
 * @note Size: 0x8
 */
bool IKSystemBase::onGround() { return mIsOnGround; }

/**
 * @note Address: 0x802AA35C
 * @note Size: 0x1C
 */
Vector3f IKSystemBase::getBottomJointPosition() { return mTargetPosition; }

/**
 * @note Address: 0x802AA378
 * @note Size: 0x4C
 */
Vector3f IKSystemBase::getCollisionCentre()
{
	Matrixf* footMtx = mLegJointMatrices[BOTTOM];
	Vector3f collVec = footMtx->getColumn(0);
	collVec *= mParams->mFootPositionOffset;
	Vector3f pos = footMtx->getColumn(3);
	collVec += pos;
	return collVec;
}

/**
 * @note Address: 0x802AA3C4
 * @note Size: 0x8
 */
f32 IKSystemBase::getMoveRatio() { return mMoveRatio; }

/**
 * @note Address: 0x802AA3CC
 * @note Size: 0x280
 */
bool IKSystemBase::onGroundPosition()
{
	bool isNewTargetHeight = false;
	f32 groundHeight       = -12800.0f;
	f32 minY               = mapMgr->getMinY(mTargetPosition);
	if (minY > mTargetPosition.y) {
		groundHeight      = minY;
		isNewTargetHeight = true;
	}

	if (mParams->mLegCount > 0) {
		Vector3f offset;
		mLegJointMatrices[BOTTOM]->getColumn(0, offset);

		offset *= mParams->mFootPositionOffset;
		offset += mTargetPosition;

		f32 angle = 0.0f;
		f32 inc   = TAU / (f32)(mParams->mLegCount);

		for (int i = 0; i < mParams->mLegCount; i++) {
			Vector3f samplePos = Vector3f(mParams->mFootPositionRadius * sinf(angle) + offset.x, offset.y,
			                              mParams->mFootPositionRadius * cosf(angle) + offset.z);

			f32 sampleMinY = mapMgr->getMinY(samplePos);

			angle += inc;

			if (sampleMinY > samplePos.y && sampleMinY > groundHeight) {
				groundHeight      = sampleMinY;
				isNewTargetHeight = true;
			}
		}
	}

	if (isNewTargetHeight) {
		mTargetPosition.y = groundHeight;
	}

	return isNewTargetHeight;
}

/**
 * @note Address: 0x802AA64C
 * @note Size: 0x84
 */
void IKSystemBase::makeBendRatio()
{
	if (mIsOnGround) {
		mBendRatio = 0.0f;
		return;
	}

	f32 ratio = 1.33f * ((1.0f - absVal(1.0f - mMoveRatio)) - 0.25f);

	mBendRatio = mParams->mBendFactor * boundAboveBelow(ratio, 0.0f, 1.0f);
}

/**
 * @note Address: 0x802AA6D0
 * @note Size: 0x9C
 */
Vector3f IKSystemBase::getMiddleDirection(Vector3f& topPos)
{
	Vector3f middleDir;
	if (mIsBlendMotionActive) {
		mLegJointMatrices[TOP]->getColumn(0, middleDir);
	} else {
		middleDir.setFlatDirectionFromTo(topPos, mTargetPosition);
		middleDir.y += 100.0f;
	}

	return middleDir;
}

/**
 * @note Address: 0x802AA76C
 * @note Size: 0x294
 */
void IKSystemBase::setTopJointRotation(Vector3f& topPos, Vector3f& jointPos)
{
	Vector3f xVec = jointPos - topPos;
	Vector3f yVec;
	Vector3f zVec;

	if (mIsBlendMotionActive) {
		Vector3f oldY;
		mLegJointMatrices[TOP]->getColumn(1, oldY);
		zVec = cross(xVec, oldY);
		yVec = cross(zVec, xVec);
	} else {
		Vector3f tSep(mTargetPosition.z - topPos.z, 0.0f, topPos.x - mTargetPosition.x);

		yVec = cross(tSep, xVec);
		zVec = cross(xVec, yVec);
	}

	xVec.normalise();
	yVec.normalise();
	zVec.normalise();

	if (mScaleJoints) {
		Vector3f oldY;
		Vector3f oldZ;
		mLegJointMatrices[TOP]->getColumn(1, oldY);
		mLegJointMatrices[TOP]->getColumn(2, oldZ);

		f32 yLen = oldY.length();
		f32 zLen = oldZ.length();

		yVec *= yLen;
		zVec *= zLen;
	}

	mLegJointMatrices[TOP]->setColumn(0, xVec);
	mLegJointMatrices[TOP]->setColumn(1, yVec);
	mLegJointMatrices[TOP]->setColumn(2, zVec);
}

/**
 * @note Address: 0x802AAA00
 * @note Size: 0x294
 */
void IKSystemBase::setMiddleJointRotation(Vector3f& topPos, Vector3f& jointPos)
{
	Vector3f xVec = mTargetPosition - jointPos;
	Vector3f yVec;
	Vector3f zVec;

	if (mIsBlendMotionActive) {
		Vector3f oldY;
		mLegJointMatrices[MIDDLE]->getColumn(1, oldY);
		zVec = cross(xVec, oldY);
		yVec = cross(zVec, xVec);
	} else {
		Vector3f tSep(mTargetPosition.z - topPos.z, 0.0f, topPos.x - mTargetPosition.x);

		yVec = cross(tSep, xVec);
		zVec = cross(xVec, yVec);
	}

	xVec.normalise();
	yVec.normalise();
	zVec.normalise();

	if (mScaleJoints) {
		Vector3f oldY;
		Vector3f oldZ;
		mLegJointMatrices[MIDDLE]->getColumn(1, oldY);
		mLegJointMatrices[MIDDLE]->getColumn(2, oldZ);

		f32 yLen = oldY.length();
		f32 zLen = oldZ.length();

		yVec *= yLen;
		zVec *= zLen;
	}

	mLegJointMatrices[MIDDLE]->setColumn(0, xVec);
	mLegJointMatrices[MIDDLE]->setColumn(1, yVec);
	mLegJointMatrices[MIDDLE]->setColumn(2, zVec);
}

/**
 * @note Address: 0x802AAC94
 * @note Size: 0x100
 */
void IKSystemBase::makeBottomMatrix(Vector3f& pos)
{
	if (mIsBlendMotionActive) {
		return;
	}

	Vector3f newX = mTargetPosition - pos;
	newX.y        = 0.0f;
	newX.normalise();

	Vector3f newY(0.0f, -1.0f, 0.0f);

	Vector3f newZ;
	mLegJointMatrices[MIDDLE]->getColumn(2, newZ);

	mLegJointMatrices[BOTTOM]->setColumn(0, newX);
	mLegJointMatrices[BOTTOM]->setColumn(1, newY);
	mLegJointMatrices[BOTTOM]->setColumn(2, newZ);

	Matrixf rotMtx;
	PSMTXRotRad(rotMtx.mMatrix.mtxView, 'Z', mBendRatio);
	PSMTXConcat(mLegJointMatrices[BOTTOM]->mMatrix.mtxView, rotMtx.mMatrix.mtxView, mLegJointMatrices[BOTTOM]->mMatrix.mtxView);
}
} // namespace Game
