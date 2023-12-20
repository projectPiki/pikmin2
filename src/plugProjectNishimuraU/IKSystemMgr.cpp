#include "Game/IKSystemBase.h"
#include "JSystem/J3D/J3DJoint.h"
#include "Game/EnemyBase.h"
#include "Game/MapMgr.h"

namespace Game {

static IKSystemMgr* gIKSystemMgr;

/*
 * --INFO--
 * Address:	802A8A80
 * Size:	000038
 */
static bool IKJointCallBack(J3DJoint* joint, int jointIdx)
{
	if (jointIdx == 1 && gIKSystemMgr) {
		gIKSystemMgr->makeMatrix();
	}
	return false;
}

/*
 * --INFO--
 * Address:	802A8AB8
 * Size:	00007C
 */
IKSystemMgr::IKSystemMgr()
{
	gIKSystemMgr         = nullptr;
	mIKSystems           = new IKSystemBase[IK_LEG_COUNT];
	mJointGroundCallBack = nullptr;
}

/*
 * --INFO--
 * Address:	802A8B34
 * Size:	000144
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
	mCenterPosition                                           = mOwner->getPosition();
	mTraceCentrePosition                                      = mOwner->getPosition();

	_50.x = _50.y = _50.z = 0.0f;

	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].init();
	}
	mJointGroundCallBack = callback;
}

/*
 * --INFO--
 * Address:	802A8C78
 * Size:	00006C
 */
void IKSystemMgr::setupJoint(SysShape::Model* model, int id, char** names)
{
	for (int i = 0; i < 3; i++) {
		mIKSystems[id].setLegJointMatrix(i, model->getJoint(names[i])->getWorldMatrix());
	}
}

/*
 * --INFO--
 * Address:	802A8CE4
 * Size:	000038
 */
void IKSystemMgr::setupCallBack(SysShape::Model* model, char* name)
{
	J3DJoint* jnt = model->getJoint(name)->mJ3d;
	jnt->setCallBack(IKJointCallBack);
}

/*
 * --INFO--
 * Address:	802A8D1C
 * Size:	000064
 */
void IKSystemMgr::setParameters(IKSystemParms* parm)
{
	mParams = parm;
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].setParameters(mParams);
	}
}

/*
 * --INFO--
 * Address:	802A8D80
 * Size:	000188
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

/*
 * --INFO--
 * Address:	802A8F08
 * Size:	000024
 */
void IKSystemMgr::startIKMotion()
{
	mInMotion = true;
	mOnGround = false;
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mLegStates[i] = 0;
	}
}

/*
 * --INFO--
 * Address:	802A8F2C
 * Size:	00000C
 */
void IKSystemMgr::finishIKMotion() { mInMotion = false; }

/*
 * --INFO--
 * Address:	802A8F38
 * Size:	000014
 */
void IKSystemMgr::forceFinishIKMotion()
{
	finishIKMotion();
	mOnGround = true;
}

/*
 * --INFO--
 * Address:	802A8F4C
 * Size:	00005C
 */
void IKSystemMgr::startBlendMotion()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].startBlendMotion();
	}
}

/*
 * --INFO--
 * Address:	802A8FA8
 * Size:	00005C
 */
void IKSystemMgr::finishBlendMotion()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].finishBlendMotion();
	}
}

/*
 * --INFO--
 * Address:	802A9004
 * Size:	00005C
 */
void IKSystemMgr::checkJointScaleOn()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].checkJointScaleOn();
	}
}

/*
 * --INFO--
 * Address:	802A9060
 * Size:	000070
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

/*
 * --INFO--
 * Address:	802A90D0
 * Size:	00000C
 */
void IKSystemMgr::resetAnimationCallBack() { gIKSystemMgr = nullptr; }

/*
 * --INFO--
 * Address:	802A90DC
 * Size:	000008
 */
void IKSystemMgr::setAnimationCallBack() { gIKSystemMgr = this; }

/*
 * --INFO--
 * Address:	802A90E4
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	802A9160
 * Size:	00005C
 */
void IKSystemMgr::makeMatrix()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].makeMatrix();
	}
}

/*
 * --INFO--
 * Address:	802A91BC
 * Size:	000038
 */
Vector3f IKSystemMgr::getCollisionCentre(int i) { return mIKSystems[i].getCollisionCentre(); }

/*
 * --INFO--
 * Address:	802A91F4
 * Size:	00010C
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

/*
 * --INFO--
 * Address:	802A9300
 * Size:	000308
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
			_50.y += mParams->_44;
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

/*
 * --INFO--
 * Address:	802A9608
 * Size:	0003DC
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
		} else if (dist < mParams->_30) {
			nextPos -= ownerPos;
			nextPos.normalise();
			nextPos *= mParams->_30;
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

/*
 * --INFO--
 * Address:	802A99E4
 * Size:	0000FC
 */
void IKSystemMgr::calcFaceDir()
{
	if (mIsIKActive) {
		Vector3f pos0, pos1;
		pos0 = mIKSystems[0].getBottomJointPosition();
		pos1 = mIKSystems[1].getBottomJointPosition();
		// this feels wrong
		f32 angle = JMath::atanTable_.atan2_((pos0.x + pos1.x) / 2 - mCenterPosition.x, (pos0.z + pos1.z) / 2 - mCenterPosition.z);
		mFaceDir  = angle;
		angle     = mFaceDir;
		clampAngle(angle);
		mFaceDir = angle;

	} else {
		mFaceDir = mOwner->getFaceDir();
	}
}

/*
 * --INFO--
 * Address:	802A9AE0
 * Size:	000298
 */
void IKSystemMgr::calcCentrePosition()
{
	if (mIsIKActive) {
		Vector3f positions[4]; // 0x64

		positions[0] = mIKSystems[0].getBottomJointPosition(); // 0x64
		positions[1] = mIKSystems[1].getBottomJointPosition(); // 0x70
		positions[2] = mIKSystems[2].getBottomJointPosition(); // 0x7C
		positions[3] = mIKSystems[3].getBottomJointPosition(); // 0x88

		mCenterPosition.x = mCenterPosition.y = mCenterPosition.z = 0.0f;

		for (int i = 0; i < 4; i++) {
			mCenterPosition.x += positions[i].x;
			mCenterPosition.z += positions[i].z;
		}

		mCenterPosition.x *= 0.25f;
		mCenterPosition.z *= 0.25f;

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
			mCenterPosition.y += weights[i] * heights[i];
		}

	} else {
		mCenterPosition = mOwner->getPosition();
	}
}

/*
 * --INFO--
 * Address:	802A9D78
 * Size:	0000E4
 */
void IKSystemMgr::calcTraceCentrePosition()
{
	if (mIsIKActive) {
		Vector3f sep = mCenterPosition - mTraceCentrePosition;
		sep *= mParams->_3C;
		_50 += sep;
		mTraceCentrePosition += _50;
		_50 *= mParams->_40;
		return;
	}

	mTraceCentrePosition = mCenterPosition;
}
} // namespace Game
