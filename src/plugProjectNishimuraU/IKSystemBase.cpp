#include "Game/IKSystemBase.h"
#include "Game/NsMathExp.h"
#include "Game/MapMgr.h"
#include "System.h"
#include "trig.h"

namespace Game {
/*
 * --INFO--
 * Address:	802A9E5C
 * Size:	000070
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

/*
 * --INFO--
 * Address:	802A9ECC
 * Size:	000030
 */
void IKSystemBase::init()
{
	mIsIKEnabled = false;
	mWasOnGround = true;
	mIsOnGround  = true;
	mScaleJoints = false;

	mBendRatio = 0.0f;
	mMoveRatio = 0.0f;
	mTimer     = 0.0f;

	mParams = nullptr;
}

/*
 * --INFO--
 * Address:	802A9EFC
 * Size:	000010
 */
void IKSystemBase::setLegJointMatrix(int index, Matrixf* jointMtx) { mLegJointMatrices[index] = jointMtx; }

/*
 * --INFO--
 * Address:	802A9F0C
 * Size:	000008
 */
void IKSystemBase::setParameters(IKSystemParms* params) { mParams = params; }

/*
 * --INFO--
 * Address:	802A9F14
 * Size:	0000F0
 */
void IKSystemBase::startProgramedIK()
{
	mIsIKEnabled         = true;
	mIsBlendMotionActive = false;
	mScaleJoints         = false;

	mBendRatio = 0.0f;
	mMoveRatio = 2.0f;
	mTimer     = 0.0f;

	mTargetPosition = mLegJointMatrices[BOTTOM]->getBasis(3);

	Vector3f topPos = mLegJointMatrices[TOP]->getBasis(3);
	Vector3f midPos = mLegJointMatrices[MIDDLE]->getBasis(3);

	mDistance1 = topPos.distance(midPos);
	mDistance2 = midPos.distance(mTargetPosition);
}

/*
 * --INFO--
 * Address:	802AA004
 * Size:	0000F4
 */
void IKSystemBase::startMovePosition(Vector3f& targetMove)
{
	mIsOnGround = false;

	mBendRatio = 0.0f;
	mMoveRatio = 0.0f;
	mTimer     = 0.0f;

	// Set top position directly
	mIkPositions[TOP] = mTargetPosition;

	// Set end position to the floor
	targetMove.y         = mapMgr->getMinY(targetMove);
	mIkPositions[BOTTOM] = targetMove;

	// Interpolate between top and bottom to get middle
	f32 fc  = mParams->_0C;
	f32 fcn = 1.0f - mParams->_0C;

	mIkPositions[MIDDLE].x = (fc * mIkPositions[BOTTOM].x) + (fcn * mIkPositions[TOP].x);
	mIkPositions[MIDDLE].y = (fc * mIkPositions[BOTTOM].y) + (fcn * mIkPositions[TOP].y);
	mIkPositions[MIDDLE].z = (fc * mIkPositions[BOTTOM].z) + (fcn * mIkPositions[TOP].z);

	// Apply a vertical offset for the artists to change
	mIkPositions[MIDDLE].y += mParams->mHeightOffset;
}

/*
 * --INFO--
 * Address:	802AA0F8
 * Size:	00000C
 */
void IKSystemBase::startBlendMotion() { mIsBlendMotionActive = true; }

/*
 * --INFO--
 * Address:	802AA104
 * Size:	00000C
 */
void IKSystemBase::finishBlendMotion() { mIsBlendMotionActive = false; }

/*
 * --INFO--
 * Address:	802AA110
 * Size:	00000C
 */
void IKSystemBase::checkJointScaleOn() { mScaleJoints = true; }

/*
 * --INFO--
 * Address:	802AA11C
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	802AA198
 * Size:	0000F8
 */
void IKSystemBase::makeMatrix()
{
	if (!mIsIKEnabled) {
		return;
	}

	Vector3f topPos    = mLegJointMatrices[TOP]->getBasis(3);
	Vector3f middleDir = getMiddleDirection(topPos);
	Vector3f jointPos;
	NsMathExp::calcJointPos(topPos, mTargetPosition, mDistance1, mDistance2, middleDir, jointPos);

	setTopJointRotation(topPos, jointPos);
	setMiddleJointRotation(topPos, jointPos);

	mLegJointMatrices[MIDDLE]->setTranslation(jointPos);
	mLegJointMatrices[BOTTOM]->setTranslation(mTargetPosition);

	makeBottomMatrix(topPos);
}

/*
 * --INFO--
 * Address:	802AA290
 * Size:	0000C4
 */
void IKSystemBase::moveBottomJointPosition()
{
	if (mMoveRatio < 1.0f) {
		mTimer += mParams->mRaiseSlowdownFactor;
	} else {
		mTimer += mParams->mDownwardAccelFactor;
	}

	mTimer = boundAboveBelow(mTimer, mParams->mMinDecelFactor, mParams->mMaxDecelFactor);

	mMoveRatio += (mParams->mBaseCoefficient + mTimer) * sys->getFrameLength();
	NsMathExp::calcLagrange(mIkPositions, mMoveRatio, mTargetPosition);
}

/*
 * --INFO--
 * Address:	802AA354
 * Size:	000008
 */
bool IKSystemBase::onGround() { return mIsOnGround; }

/*
 * --INFO--
 * Address:	802AA35C
 * Size:	00001C
 */
Vector3f IKSystemBase::getBottomJointPosition() { return mTargetPosition; }

/*
 * --INFO--
 * Address:	802AA378
 * Size:	00004C
 */
Vector3f IKSystemBase::getCollisionCentre()
{
	Matrixf* footMtx = mLegJointMatrices[BOTTOM];
	Vector3f collVec = footMtx->getBasis(0);
	collVec *= mParams->_04;
	Vector3f pos = footMtx->getBasis(3);
	collVec += pos;
	return collVec;
}

/*
 * --INFO--
 * Address:	802AA3C4
 * Size:	000008
 */
f32 IKSystemBase::getMoveRatio() { return mMoveRatio; }

/*
 * --INFO--
 * Address:	802AA3CC
 * Size:	000280
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

	if (mParams->_00 > 0) {
		Vector3f offset;
		mLegJointMatrices[BOTTOM]->getBasis(0, offset);

		offset *= mParams->_04;
		offset += mTargetPosition;

		f32 angle = 0.0f;
		f32 inc   = TAU / (f32)(mParams->_00);

		for (int i = 0; i < mParams->_00; i++) {
			Vector3f samplePos = Vector3f(mParams->_08 * sinf(angle) + offset.x, offset.y, mParams->_08 * cosf(angle) + offset.z);

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

/*
 * --INFO--
 * Address:	802AA64C
 * Size:	000084
 */
void IKSystemBase::makeBendRatio()
{
	if (mIsOnGround) {
		mBendRatio = 0.0f;
		return;
	}

	f32 ratio = 1.33f * ((1.0f - absVal(1.0f - mMoveRatio)) - 0.25f);

	mBendRatio = mParams->_28 * boundAboveBelow(ratio, 0.0f, 1.0f);
}

/*
 * --INFO--
 * Address:	802AA6D0
 * Size:	00009C
 */
Vector3f IKSystemBase::getMiddleDirection(Vector3f& topPos)
{
	Vector3f middleDir;
	if (mIsBlendMotionActive) {
		mLegJointMatrices[TOP]->getBasis(0, middleDir);
	} else {
		middleDir   = mTargetPosition - topPos;
		middleDir.y = 0.0f;
		middleDir.normalise();
		middleDir.y += 100.0f;
	}

	return middleDir;
}

/*
 * --INFO--
 * Address:	802AA76C
 * Size:	000294
 */
void IKSystemBase::setTopJointRotation(Vector3f& topPos, Vector3f& jointPos)
{
	Vector3f xVec = jointPos - topPos;
	Vector3f yVec;
	Vector3f zVec;

	if (mIsBlendMotionActive) {
		Vector3f oldY;
		mLegJointMatrices[TOP]->getBasis(1, oldY);
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
		mLegJointMatrices[TOP]->getBasis(1, oldY);
		mLegJointMatrices[TOP]->getBasis(2, oldZ);

		f32 yLen = oldY.length();
		f32 zLen = oldZ.length();

		yVec *= yLen;
		zVec *= zLen;
	}

	mLegJointMatrices[TOP]->setBasis(0, xVec);
	mLegJointMatrices[TOP]->setBasis(1, yVec);
	mLegJointMatrices[TOP]->setBasis(2, zVec);
}

/*
 * --INFO--
 * Address:	802AAA00
 * Size:	000294
 */
void IKSystemBase::setMiddleJointRotation(Vector3f& topPos, Vector3f& jointPos)
{
	Vector3f xVec = mTargetPosition - jointPos;
	Vector3f yVec;
	Vector3f zVec;

	if (mIsBlendMotionActive) {
		Vector3f oldY;
		mLegJointMatrices[MIDDLE]->getBasis(1, oldY);
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
		mLegJointMatrices[MIDDLE]->getBasis(1, oldY);
		mLegJointMatrices[MIDDLE]->getBasis(2, oldZ);

		f32 yLen = oldY.length();
		f32 zLen = oldZ.length();

		yVec *= yLen;
		zVec *= zLen;
	}

	mLegJointMatrices[MIDDLE]->setBasis(0, xVec);
	mLegJointMatrices[MIDDLE]->setBasis(1, yVec);
	mLegJointMatrices[MIDDLE]->setBasis(2, zVec);
}

/*
 * --INFO--
 * Address:	802AAC94
 * Size:	000100
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
	mLegJointMatrices[MIDDLE]->getBasis(2, newZ);

	mLegJointMatrices[BOTTOM]->setBasis(0, newX);
	mLegJointMatrices[BOTTOM]->setBasis(1, newY);
	mLegJointMatrices[BOTTOM]->setBasis(2, newZ);

	Matrixf rotMtx;
	PSMTXRotRad(rotMtx.mMatrix.mtxView, 'Z', mBendRatio);
	PSMTXConcat(mLegJointMatrices[BOTTOM]->mMatrix.mtxView, rotMtx.mMatrix.mtxView, mLegJointMatrices[BOTTOM]->mMatrix.mtxView);
}
} // namespace Game
