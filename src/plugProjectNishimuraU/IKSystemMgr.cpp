#include "Game/IKSystemBase.h"
#include "JSystem/J3D/J3DJoint.h"
#include "Game/EnemyBase.h"
#include "Game/MapMgr.h"

namespace Game {

static IKSystemMgr* gIKSystemMgr;

/**
 * @note Address: 0x802A8A80
 * @note Size: 0x38
 */
static bool IKJointCallBack(J3DJoint* joint, int jointIdx)
{
	if (jointIdx == 1 && gIKSystemMgr) {
		gIKSystemMgr->makeMatrix();
	}
	return false;
}

/**
 * @note Address: 0x802A8AB8
 * @note Size: 0x7C
 */
IKSystemMgr::IKSystemMgr()
{
	gIKSystemMgr         = nullptr;
	mIKSystems           = new IKSystemBase[IK_LEG_COUNT];
	mJointGroundCallBack = nullptr;
}

/**
 * @note Address: 0x802A8B34
 * @note Size: 0x144
 */
void IKSystemMgr::init(EnemyBase* obj, JointGroundCallBack* callback)
{
	mOwner            = obj;
	mIsIKActive       = false;
	mInMotion         = false;
	mOnGround         = false;
	mFaceDir          = mOwner->getFaceDir();
	mIKDistanceOffset = 100.0f;
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mLegHeight[i] = 0.0f;
		mLegStates[i] = 0;
	}

	mTargetPosition.x = mTargetPosition.y = mTargetPosition.z = 0.0f;
	mCentrePosition                                           = mOwner->getPosition();
	mTraceCentrePosition                                      = mOwner->getPosition();

	mTraceCentreVelocity.x = mTraceCentreVelocity.y = mTraceCentreVelocity.z = 0.0f;

	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].init();
	}
	mJointGroundCallBack = callback;
}

/**
 * @note Address: 0x802A8C78
 * @note Size: 0x6C
 */
void IKSystemMgr::setupJoint(SysShape::Model* model, int id, char** names)
{
	for (int i = 0; i < 3; i++) {
		mIKSystems[id].setLegJointMatrix(i, model->getJoint(names[i])->getWorldMatrix());
	}
}

/**
 * @note Address: 0x802A8CE4
 * @note Size: 0x38
 */
void IKSystemMgr::setupCallBack(SysShape::Model* model, char* name)
{
	J3DJoint* jnt = model->getJoint(name)->mJ3d;
	jnt->setCallBack(IKJointCallBack);
}

/**
 * @note Address: 0x802A8D1C
 * @note Size: 0x64
 */
void IKSystemMgr::setParameters(IKSystemParms* parm)
{
	mParams = parm;
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].setParameters(mParams);
	}
}

/**
 * @note Address: 0x802A8D80
 * @note Size: 0x188
 */
void IKSystemMgr::startProgramedIK()
{
	mIsIKActive = true;
	mInMotion   = false;
	mOnGround   = false;
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mLegStates[i] = 0;
		mIKSystems[i].startProgramedIK();
	}

	Vector3f objectPos      = mOwner->getPosition();
	Vector3f bottomJointPos = mIKSystems->getBottomJointPosition();
	mIKDistanceOffset       = objectPos.distance(bottomJointPos);
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		bottomJointPos = mIKSystems[i].getBottomJointPosition();

		// Calculate difference in angle between the owner's position and the current foot's position
		f32 diff = JMath::atanTable_.atan2_(bottomJointPos.x - objectPos.x, bottomJointPos.z - objectPos.z);

		mLegHeight[i] = diff - mOwner->getFaceDir();
	}
}

/**
 * @note Address: 0x802A8F08
 * @note Size: 0x24
 */
void IKSystemMgr::startIKMotion()
{
	mInMotion = true;
	mOnGround = false;
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mLegStates[i] = 0;
	}
}

/**
 * @note Address: 0x802A8F2C
 * @note Size: 0xC
 */
void IKSystemMgr::finishIKMotion() { mInMotion = false; }

/**
 * @note Address: 0x802A8F38
 * @note Size: 0x14
 */
void IKSystemMgr::forceFinishIKMotion()
{
	finishIKMotion();
	mOnGround = true;
}

/**
 * @note Address: 0x802A8F4C
 * @note Size: 0x5C
 */
void IKSystemMgr::startBlendMotion()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].startBlendMotion();
	}
}

/**
 * @note Address: 0x802A8FA8
 * @note Size: 0x5C
 */
void IKSystemMgr::finishBlendMotion()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].finishBlendMotion();
	}
}

/**
 * @note Address: 0x802A9004
 * @note Size: 0x5C
 */
void IKSystemMgr::checkJointScaleOn()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].checkJointScaleOn();
	}
}

/**
 * @note Address: 0x802A9060
 * @note Size: 0x70
 */
bool IKSystemMgr::isFinishIKMotion()
{
	if (!mInMotion) {
		for (int i = 0; i < IK_LEG_COUNT; i++) {
			if (mLegStates[i] != 3) {
				return false;
			}
		}

		return true;
	}

	return false;
}

/**
 * @note Address: 0x802A90D0
 * @note Size: 0xC
 */
void IKSystemMgr::resetAnimationCallBack() { gIKSystemMgr = nullptr; }

/**
 * @note Address: 0x802A90DC
 * @note Size: 0x8
 */
void IKSystemMgr::setAnimationCallBack() { gIKSystemMgr = this; }

/**
 * @note Address: 0x802A90E4
 * @note Size: 0x7C
 */
void IKSystemMgr::doUpdate()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].update();
	}
	updateController();
	calcFaceDir();
	calcCentrePosition();
	calcTraceCentrePosition();
}

/**
 * @note Address: 0x802A9160
 * @note Size: 0x5C
 */
void IKSystemMgr::makeMatrix()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].makeMatrix();
	}
}

/**
 * @note Address: 0x802A91BC
 * @note Size: 0x38
 */
Vector3f IKSystemMgr::getCollisionCentre(int i) { return mIKSystems[i].getCollisionCentre(); }

/**
 * @note Address: 0x802A91F4
 * @note Size: 0x10C
 */
bool IKSystemMgr::isCollisionCheck(CollPart* part)
{
	if (part) {
		int id = -1;
		if (part->mCurrentID == 'lfsp') {
			id = 3;
		} else if (part->mCurrentID == 'lhsp') {
			id = 1;
		} else if (part->mCurrentID == 'rfsp') {
			id = 2;
		} else if (part->mCurrentID == 'rhsp') {
			id = 0;
		}
		if (id >= 0 && (mLegStates[id] == 1 || mLegStates[id] == 2) && mIKSystems[id].getMoveRatio() > 1.0f) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x802A9300
 * @note Size: 0x308
 */
void IKSystemMgr::updateController()
{
	if (mInMotion) {
		bool check3 = true;
		for (int i = 0; i < IK_LEG_COUNT; i++) {
			if (mLegStates[i] != 3) {
				check3 = false;
			}
		}
		if (check3) {
			for (int i = 0; i < IK_LEG_COUNT; i++) {
				mLegStates[i] = 0;
			}
		}

		bool check0 = true;
		for (int i = 0; i < IK_LEG_COUNT; i++) {
			if (mLegStates[i] != 0) {
				check0 = false;
			}
		}
		if (check0) {
			setNextCentrePosition();
			mIKSystems[0].startMovePosition(mLegTargetPosition[0]);
			mLegStates[0] = 1;
			if (mJointGroundCallBack) {
				Vector3f pos = mIKSystems[0].getBottomJointPosition();
				Sys::Sphere bounds(pos, 5.0f);
				Game::WaterBox* water = mapMgr->findWater(bounds);
				mJointGroundCallBack->invokeOffGround(0, water);
			}
		}
	}

	for (int i = 0; i < IK_LEG_COUNT; i++) {
		if (mLegStates[i] == 1) {
			if (mIKSystems[i].onGround()) {
				mLegStates[i] = 2;
			}
		} else if (mLegStates[i] == 2) {
			mLegStates[i] = 3;
			mTraceCentreVelocity.y += mParams->mTraceHeightOffset;
			if (mJointGroundCallBack) {
				Vector3f pos = mIKSystems[i].getBottomJointPosition();
				Sys::Sphere bounds(pos, 5.0f);
				Game::WaterBox* water = mapMgr->findWater(bounds);
				mJointGroundCallBack->invokeOnGround(i, water);
			}

			int newid = (i + 1 < 0) ? i + 5 : (i + 1 > 3) ? i - 3 : i + 1;
			if (newid > 0 && !mOnGround) {
				mIKSystems[newid].startMovePosition(mLegTargetPosition[newid]);
				mLegStates[newid] = 1;
				if (mJointGroundCallBack) {
					Vector3f pos = mIKSystems[newid].getBottomJointPosition();
					Sys::Sphere bounds(pos, 5.0f);
					Game::WaterBox* water = mapMgr->findWater(bounds);
					mJointGroundCallBack->invokeOffGround(newid, water);
				}
			}
		}
	}
}

/**
 * @note Address: 0x802A9608
 * @note Size: 0x3DC
 */
void IKSystemMgr::setNextCentrePosition()
{
	f32 angleDist = mOwner->getCreatureViewAngle(mTargetPosition);
	Vector3f nextPos;
	if (absF(angleDist) <= TORADIANS(mParams->getViewAngle())) {
		Vector3f ownerPos = mOwner->getPosition();
		ownerPos.y        = 0.0f;
		nextPos           = mTargetPosition;
		nextPos.y         = 0.0f;
		Vector3f sep      = ownerPos - nextPos;
		f32 dist          = sep.length();
		if (dist > mParams->mMoveSpeed) {
			nextPos -= ownerPos;
			nextPos.normalise();
			nextPos *= mParams->mMoveSpeed;
			nextPos += ownerPos;
		} else if (dist < mParams->mMinimumMoveSpeed) {
			nextPos -= ownerPos;
			nextPos.normalise();
			nextPos *= mParams->mMinimumMoveSpeed;
			nextPos += ownerPos;
		}
	} else {
		nextPos   = mOwner->getPosition();
		nextPos.y = 0.0f;
		if (!(absF(angleDist) <= TORADIANS(mParams->getMaxTurnAngle()))) {
			if (angleDist > 0.0f) {
				angleDist = TORADIANS(mParams->getMaxTurnAngle());
			} else {
				angleDist = -TORADIANS(mParams->getMaxTurnAngle());
			}
		}
	}

	f32 newFaceDir = angleDist + mOwner->getFaceDir();

	for (int i = 0; i < IK_LEG_COUNT; i++) {
		f32 angle             = newFaceDir + mLegHeight[i];
		mLegTargetPosition[i] = nextPos + Vector3f(mIKDistanceOffset * sinf(angle), 0.0f, mIKDistanceOffset * cosf(angle));
	}
}

/**
 * @note Address: 0x802A99E4
 * @note Size: 0xFC
 */
void IKSystemMgr::calcFaceDir()
{
	if (mIsIKActive) {
		Vector3f pos0, pos1;
		pos0 = mIKSystems[0].getBottomJointPosition();
		pos1 = mIKSystems[1].getBottomJointPosition();
		// this feels wrong
		f32 angle = JMath::atanTable_.atan2_((pos0.x + pos1.x) / 2 - mCentrePosition.x, (pos0.z + pos1.z) / 2 - mCentrePosition.z);
		mFaceDir  = angle;
		angle     = mFaceDir;
		clampAngle(angle);
		mFaceDir = angle;

	} else {
		mFaceDir = mOwner->getFaceDir();
	}
}

/**
 * @note Address: 0x802A9AE0
 * @note Size: 0x298
 */
void IKSystemMgr::calcCentrePosition()
{
	if (mIsIKActive) {
		Vector3f positions[4]; // 0x64

		positions[0] = mIKSystems[0].getBottomJointPosition(); // 0x64
		positions[1] = mIKSystems[1].getBottomJointPosition(); // 0x70
		positions[2] = mIKSystems[2].getBottomJointPosition(); // 0x7C
		positions[3] = mIKSystems[3].getBottomJointPosition(); // 0x88

		mCentrePosition.x = mCentrePosition.y = mCentrePosition.z = 0.0f;

		for (int i = 0; i < 4; i++) {
			mCentrePosition.x += positions[i].x;
			mCentrePosition.z += positions[i].z;
		}

		mCentrePosition.x *= 0.25f;
		mCentrePosition.z *= 0.25f;

		f32 heights[4];              // 0x54
		heights[0] = positions[0].y; // 0x54
		heights[1] = positions[1].y; // 0x58
		heights[2] = positions[2].y; // 0x5C
		heights[3] = positions[3].y; // 0x60

		for (int i = 0; i < 3; i++) {
			for (int j = i + 1; j < 4; j++) {
				f32 y2, y1;
				y1 = heights[i];
				y2 = heights[j];
				if (y1 > y2) {
					heights[j] = y1;
					heights[i] = y2;
				}
			}
		}

		f32 weights[4] = { 0.4f, 0.3f, 0.2f, 0.1f };
		for (int i = 0; i < 4; i++) {
			mCentrePosition.y += weights[i] * heights[i];
		}

	} else {
		mCentrePosition = mOwner->getPosition();
	}
}

/**
 * @note Address: 0x802A9D78
 * @note Size: 0xE4
 */
void IKSystemMgr::calcTraceCentrePosition()
{
	if (mIsIKActive) {
		// Get displacement from trace center to actual center
		Vector3f sep = mCentrePosition - mTraceCentrePosition;
		sep *= mParams->mTraceMoveRate;
		mTraceCentreVelocity += sep;
		mTraceCentrePosition += mTraceCentreVelocity;
		mTraceCentreVelocity *= mParams->mTraceVelocityDampingFactor;
		return;
	}

	mTraceCentrePosition = mCentrePosition;
}
} // namespace Game
