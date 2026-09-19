#include "Game/FakePiki.h"
#include "Game/BaseItem.h"
#include "Game/gameStat.h"
#include "Game/Navi.h"
#include "Game/PikiMgr.h"
#include "Game/AIConstants.h"
#include "Game/mapParts.h"
#include "Game/MapMgr.h"
#include "Game/PlatInstance.h"
#include "CollInfo.h"
#include "JSystem/JMath.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "nans.h"

f32 efx::TCursor::kAngleSpeed = PI / 60.0f;

namespace Game {

static const u32 fakePikiUnusedArray[] = { 0, 0, 0 };
static const char fakePikiName[]       = "fakePiki";

f32 FakePiki::sCurrNeckTheta = 0.0f;
f32 FakePiki::sCurrNeckPhi   = 0.0f;

/**
 * @note Address: 0x8013CC68
 * @note Size: 0x12C
 */
FakePiki::FakePiki()
{
	mDoAnimCallback = nullptr;
	if (shadowMgr) {
		shadowMgr->createShadow(this);
	}

	mModel                  = nullptr;
	mBoundingSphere.mRadius = 8.5f;
	mFaceDir                = 0.0f;
	mPosition               = Vector3f(0.0f);
	mVelocity               = Vector3f(0.0f);
	mTargetVelocity         = Vector3f(0.0f);
	mSimPosition            = Vector3f(0.0f);
	mBoundAnimIdx           = IPikiAnims::NULLANIM;
	mAnimSpeed              = 30.0f;
	mCollTree               = new CollTree;
	mWaterBox               = nullptr;
	mCollisionBuffer.alloc(this, 8);
	mLookAtPosition       = nullptr;
	mLookAtTargetCreature = nullptr;
	mNeckPhi              = 0.0f;
	mNeckTheta            = 0.0f;
}

/**
 * @note Address: 0x8013CD94
 * @note Size: 0xB8
 */
void FakePiki::initFakePiki()
{
	mDoAnimCallback         = nullptr;
	mWaterBox               = nullptr;
	mFaceDir                = 0.0f;
	mPosition               = Vector3f(0.0f);
	mTargetVelocity         = Vector3f(0.0f);
	mSimPosition            = Vector3f(0.0f);
	mVelocity               = Vector3f(0.0f);
	mFakePikiBounceTriangle = nullptr;

	if (shadowMgr) {
		shadowMgr->addShadow(this);
	}

	mFakePikiFlags.clear();
	initCaptureStomach();
	mTraceMoveRadius     = 0.0f;
	mRoomIndex           = -1;
	mDontUseWallCallback = 0; // only runs wallCallback if this is 0 (it always is)
}

/**
 * @note Address: 0x8013CE4C
 * @note Size: 0x28
 */
void FakePiki::killFakePiki()
{
	shadowMgr->delShadow(this);
}

/**
 * @note Address: 0x8013CE74
 * @note Size: 0xB8
 */
void FakePiki::initAnimator()
{
	mAnimator.setAnimMgr(NaviMgr::animMgr);
	startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);

	P2ASSERTLINE(458, mAnimator.mSelfAnimator.assertValid(mModel));
	P2ASSERTLINE(459, mAnimator.mBoundAnimator.assertValid(mModel));
}

/**
 * @note Address: 0x8013CF2C
 * @note Size: 0x28
 * Returns whether the pikmin or captains current animation matches the given
 * animation ID
 */
bool FakePiki::assertMotion(int animIdx)
{
	int currIdx = mAnimator.mSelfAnimator.getAnimIndex();
	return (currIdx == animIdx);
}

/**
 * @note Address: 0x8013CF54
 * @note Size: 0x6C
 */
void FakePiki::enableMotionBlend()
{
	mBoundAnimIdx = mAnimator.mBoundAnimator.getAnimIndex();

	mAnimator.mBoundAnimator.startAnim(IPikiAnims::NIGERU, this);
	mAnimator.mBoundAnimator.setCurrFrame(10.0f);
}

/**
 * @note Address: 0x8013CFC0
 * @note Size: 0x100
 * This function is used to make a pikmin or captain start an animation
 */
void FakePiki::startMotion(int selfAnimIdx, int boundAnimIdx, SysShape::MotionListener* selfListener,
                           SysShape::MotionListener* boundListener)
{
	mAnimator.mSelfAnimator.startAnim(selfAnimIdx, selfListener);
	mAnimator.mBoundAnimator.startAnim(boundAnimIdx, boundListener);

	P2ASSERTLINE(481, mAnimator.mSelfAnimator.assertValid(mModel));
	P2ASSERTLINE(482, mAnimator.mBoundAnimator.assertValid(mModel));

	mBoundAnimIdx = IPikiAnims::NULLANIM;

	switch (selfAnimIdx) {
	case IPikiAnims::IRAIRA:
	case IPikiAnims::NIGERU:
	case IPikiAnims::RUN2:
	case IPikiAnims::WALK:
	case IPikiAnims::WAIT:
	case IPikiAnims::SUWARU:
		break;

	default:
		finishLook();
	}
}

/**
 * @note Address: 0x8013D0C0
 * @note Size: 0x1C
 */
void FakePiki::finishMotion()
{
	mAnimator.mSelfAnimator.setFlag(SysShape::Animator::AnimFinishMotion);
	mAnimator.mBoundAnimator.setFlag(SysShape::Animator::AnimFinishMotion);
}

/**
 * @note Address: 0x8013D0DC
 * @note Size: 0x8
 */
void FakePiki::movieSetFaceDir(f32 faceDir)
{
	mFaceDir = faceDir;
}

/**
 * @note Address: 0x8013D0E4
 * @note Size: 0x8
 */
void FakePiki::setDoAnimCallback(IDelegate* callback)
{
	mDoAnimCallback = callback;
}

/**
 * @note Address: 0x8013D0EC
 * @note Size: 0xC
 */
void FakePiki::clearDoAnimCallback()
{
	mDoAnimCallback = nullptr;
}

/**
 * @note Address: 0x8013D0F8
 * @note Size: 0x3BC
 */
void FakePiki::updateWalkAnimation()
{
	Vector3f sep  = Vector3f(mPosition.x - mPreviousPosition.x, 0.0f, mPosition.z - mPreviousPosition.z);
	f32 animSpeed = sep.length() / sys->getDeltaTime();

	int boundIdx = mAnimator.mBoundAnimator.getAnimIndex();

	bool check = false;
	if (mAnimator.mSelfAnimator.getAnimIndex() == IPikiAnims::JKOKE) {
		check = true;
	}

	if (boundIdx != IPikiAnims::WAIT && boundIdx != IPikiAnims::WALK && boundIdx != IPikiAnims::ASIBUMI && boundIdx != IPikiAnims::RUN2
	    && boundIdx != IPikiAnims::NIGERU) {
		mAnimSpeed = 30.0f;
		return;
	}

	int otherIdx;
	JUT_ASSERTLINE(594, !check, "damedayo!\n"); // 'no good!'
	FakePiki* otherListener = nullptr;
	f32 faceDir             = FABS(mFaceDir - mFaceDirOffset);
	FakePikiParms* parms    = static_cast<FakePikiParms*>(mParms);
	if (animSpeed < parms->mFakePikiParms.mStepStartSpeed()) {
		otherIdx  = IPikiAnims::WAIT;
		animSpeed = 30.0f;
		if (faceDir > 0.01f) {
			animSpeed = 60.0f;
			otherIdx  = IPikiAnims::ASIBUMI;
		}

	} else if (animSpeed < parms->mFakePikiParms.mWalkStartSpeed()) {
		animSpeed = 30.0f;
		otherIdx  = IPikiAnims::ASIBUMI;

	} else if (animSpeed < parms->mFakePikiParms.mRunStartSpeed()) {
		f32 val       = (animSpeed - parms->mFakePikiParms.mWalkStartSpeed())
		              / (parms->mFakePikiParms.mRunStartSpeed() - parms->mFakePikiParms.mWalkStartSpeed());
		otherListener = this;
		otherIdx      = IPikiAnims::WALK;
		// NB: these .mValue and () mixes are load-bearing lol
		animSpeed = val * (parms->mFakePikiParms.mWalkPlaybackFrameCountMax() - parms->mFakePikiParms.mWalkPlaybackFrameCountMin())
		          + parms->mFakePikiParms.mWalkPlaybackFrameCountMin.mValue;

	} else if (animSpeed < parms->mFakePikiParms.mEscapeStartSpeed()) {
		f32 val       = (animSpeed - parms->mFakePikiParms.mRunStartSpeed())
		              / (parms->mFakePikiParms.mEscapeStartSpeed() - parms->mFakePikiParms.mRunStartSpeed());
		otherListener = this;
		otherIdx      = IPikiAnims::RUN2;

		// NB: these .mValue and () mixes are load-bearing lol
		animSpeed = val * (parms->mFakePikiParms.mRunPlaybackFrameCountMax() - parms->mFakePikiParms.mRunPlaybackFrameCountMin())
		          + parms->mFakePikiParms.mRunPlaybackFrameCountMin.mValue;

	} else {
		animSpeed     = parms->mFakePikiParms.mEscapePlaybackFrameCountMin();
		otherListener = this;
		otherIdx      = IPikiAnims::NIGERU;
	}

	isNavi();

	if (otherIdx != boundIdx) {
		if (boundIdx == IPikiAnims::WAIT && otherIdx != IPikiAnims::ASIBUMI) {
			_230 = 4;
		}

		if (boundIdx != IPikiAnims::ASIBUMI && otherIdx == IPikiAnims::WAIT) {
			_230 = 4;
		}

		if (otherIdx != _22C) {
			_230 = 0;
			_22C = otherIdx;
		} else {
			_230++;
		}

		if (_230 < 4) {
			return;
		}
	}

	if (boundIdx != otherIdx) {
		if (boundIdx == IPikiAnims::WAIT || boundIdx == IPikiAnims::ASIBUMI || otherIdx == IPikiAnims::WAIT
		    || otherIdx == IPikiAnims::ASIBUMI) {
			if (mBoundAnimIdx == IPikiAnims::NULLANIM) {
				mAnimator.mSelfAnimator.startAnim(otherIdx, nullptr);
				mAnimator.mBoundAnimator.startAnim(otherIdx, otherListener);
			} else {
				mAnimator.mBoundAnimator.startAnim(otherIdx, otherListener);
			}
		} else if (mBoundAnimIdx == IPikiAnims::NULLANIM) {
			f32 boundRate = mAnimator.mBoundAnimator.getTimer();
			f32 selfRate  = mAnimator.mSelfAnimator.getTimer();
			mAnimator.mBoundAnimator.startAnim(otherIdx, otherListener);
			mAnimator.mBoundAnimator.setCurrFrame(boundRate);
			mAnimator.mSelfAnimator.startAnim(otherIdx, nullptr);
			mAnimator.mSelfAnimator.setCurrFrame(selfRate);
		} else {
			f32 boundRate = mAnimator.mBoundAnimator.getTimer();
			mAnimator.mBoundAnimator.startAnim(otherIdx, otherListener);
			mAnimator.mBoundAnimator.setCurrFrame(boundRate);
		}
	}

	mAnimSpeed = animSpeed;
}

/**
 * @note Address: 0x8013D4B4
 * @note Size: 0x23C
 */
bool FakePiki::sNeckCallback(J3DJoint* joint, int jointIdx)
{
	if (jointIdx == 0 && OptimiseController::mInstance->mPikminNeck.mValue) {
		Matrixf* worldMat = J3DMtxCalc::mMtxBuffer->getWorldMatrix(joint->getJntNo());

		f32 phi   = sCurrNeckPhi;
		f32 theta = sCurrNeckTheta;

		f32 sinPhi   = sinfc(-phi);  // f6
		f32 cosPhi   = cosfc(-phi);  // f7
		f32 sinTheta = sinfc(theta); // f8
		f32 cosTheta = cosfc(theta); // f4

		Matrixf rotMtx;
		rotMtx.mMatrix.structView.xx = cosPhi;
		rotMtx.mMatrix.structView.yx = -sinPhi;
		rotMtx.mMatrix.structView.zx = 0.0f;

		rotMtx.mMatrix.structView.xy = cosTheta * sinPhi;
		rotMtx.mMatrix.structView.yy = cosTheta * cosPhi;
		rotMtx.mMatrix.structView.zy = -sinTheta;

		rotMtx.mMatrix.structView.xz = sinTheta * sinPhi;
		rotMtx.mMatrix.structView.yz = sinTheta * cosPhi;
		rotMtx.mMatrix.structView.zz = cosTheta;

		rotMtx.mMatrix.structView.tx = 0.0f;
		rotMtx.mMatrix.structView.ty = 0.0f;
		rotMtx.mMatrix.structView.tz = 0.0f;

		Matrixf worldCopy = *worldMat;

		PSMTXConcat(worldCopy.mMatrix.mtxView, rotMtx.mMatrix.mtxView, worldMat->mMatrix.mtxView);
		PSMTXCopy(worldMat->mMatrix.mtxView, J3DSys::mCurrentMtx);
	}
	return false;
}

/**
 * @note Address: 0x8013D6F0
 * @note Size: 0xC0
 */
void FakePiki::startLookCreature(Creature* creature)
{
	switch (mAnimator.mSelfAnimator.getAnimIndex()) {
	default:
		finishLook();
		break;

	case IPikiAnims::IRAIRA:
	case IPikiAnims::NIGERU:
	case IPikiAnims::RUN2:
	case IPikiAnims::WALK:
	case IPikiAnims::WAIT:
	case IPikiAnims::SUWARU:
		if (creature->mCollTree) {
			CollPart* randPart = creature->mCollTree->getRandomCollPart();
			if (randPart) {
				mLookAtTargetCreature = creature;
				mLookAtPosition       = &randPart->mPosition;
				mLookAtTimer          = 0;
				return;
			}
		}

		mLookAtTargetCreature = nullptr;
		finishLook();
	}
}

/**
 * @note Address: 0x8013D7B0
 * @note Size: 0x70
 */
void FakePiki::updateLookCreature()
{
	// one should not observe the dead.
	if (mLookAtTargetCreature && !mLookAtTargetCreature->isAlive()) {
		mLookAtTargetCreature = nullptr;
		finishLook();
	}

	do_updateLookCreature();
}

/**
 * @note Address: 0x8013D820
 * @note Size: 0x4
 */
void FakePiki::do_updateLookCreature()
{
}

/**
 * @note Address: 0x8013D824
 * @note Size: 0x18
 */
void FakePiki::finishLook()
{
	mLookAtPosition       = nullptr;
	mLookAtTimer          = 10;
	mLookAtTargetCreature = nullptr;
}

/**
 * @note Address: 0x8013D83C
 * @note Size: 0x398
 */
void FakePiki::updateLook()
{
	f32 horizontalAngle;
	f32 rotationSpeed = 0.05f;
	f32 verticalAngle;
	f32 adjustedHorizontalAngle;
	if (mLookAtPosition) {
		Vector3f pos    = getPosition();
		Vector3f sep    = *mLookAtPosition - pos;
		horizontalAngle = JMAAtan2Radian(sep.x, sep.z);
		verticalAngle   = JMAAtan2Radian(sep.y, sep.length2D());

	} else {
		rotationSpeed = 0.2f;
		f32 thetaDist = angDist(0.0f, mNeckTheta);
		mNeckTheta    = roundAng(thetaDist * rotationSpeed + mNeckTheta);
		f32 phiDist   = angDist(0.0f, mNeckPhi);
		mNeckPhi      = roundAng(phiDist * rotationSpeed + mNeckPhi);

		if (FABS(mNeckTheta) < 0.1f && FABS(mNeckPhi) < 0.1f) {
			mLookAtPosition = nullptr;
			mNeckPhi        = 0.0f;
			mNeckTheta      = 0.0f;
			mLookAtTimer    = 0;
		}
		return;
	}

	f32 angX                = roundAng(mNeckTheta + mFaceDir);
	adjustedHorizontalAngle = angX;
	f32 angY                = roundAng(horizontalAngle - mFaceDir);
	f32 adjustAngle;

	if (angY < PI) {
		if (mNeckTheta > PI) {
			adjustAngle = TAU - (mNeckTheta - angY);
		} else {
			adjustAngle = angDist(horizontalAngle, adjustedHorizontalAngle);
		}
	} else if (mNeckTheta <= PI) {
		adjustAngle = TAU - (mNeckTheta - angY);
		adjustAngle *= -1.0f;
	} else {
		adjustAngle = angDist(horizontalAngle, adjustedHorizontalAngle);
	}

	if (FABS(adjustAngle) < PI / 20.0f) {
		adjustAngle = 0.0f;
	}

	adjustAngle *= rotationSpeed;

	if (FABS(adjustAngle) > PI / 10.0f) {
		if (adjustAngle > 0.0f) {
			adjustAngle = PI / 10.0f;
		} else {
			adjustAngle = -PI / 10.0f;
		}
	}

	mNeckTheta = roundAng(mNeckTheta + adjustAngle);
	if (mNeckTheta > 2.0f * PI / 3.0f && mNeckTheta < PI) {
		mNeckTheta = 2.0f * PI / 3.0f;
	} else if (mNeckTheta < (4.0f * PI / 3.0f) && mNeckTheta >= PI) {
		mNeckTheta = 4.0f * PI / 3.0f;
	}

	f32 verticalAdjustAngle = angDist(verticalAngle, mNeckPhi);
	if (FABS(verticalAdjustAngle) < PI / 20.0f) {
		verticalAdjustAngle = 0.0f;
	}

	verticalAdjustAngle *= rotationSpeed;

	if (FABS(verticalAdjustAngle) > PI / 10.0f) {
		if (verticalAdjustAngle > 0.0f) {
			verticalAdjustAngle = PI / 10.0f;
		} else {
			verticalAdjustAngle = -PI / 10.0f;
		}
	}

	mNeckPhi = roundAng(mNeckPhi + verticalAdjustAngle);
	if (mNeckPhi > PI / 3.0f && mNeckPhi < PI) {
		mNeckPhi = PI / 3.0f;
	} else if (mNeckPhi < (5.2359877f) && mNeckPhi >= PI) {
		mNeckPhi = 5.2359877f; // 5 PI / 3
	}

	if (mLookAtTimer) {
		mLookAtTimer--;
		if (!mLookAtTimer) {
			mLookAtPosition = nullptr;
			mNeckPhi        = 0.0f;
			mNeckTheta      = 0.0f;
			mLookAtTimer    = 0;
		}
	}
}

/**
 * @note Address: 0x8013DBD4
 * @note Size: 0x60
 */
void FakePiki::turnTo(Vector3f& targetPos)
{
	Vector3f diff = targetPos - mPosition;
	if (diff.z != 0.0f) {
		mFaceDir = roundAng(JMAAtan2Radian(diff.x, diff.z));
	}
}

/**
 * @note Address: 0x8013DC34
 * @note Size: 0x3B4
 */
void FakePiki::moveVelocity()
{
	// update simulation (next/target) velocity based on the triangle we're standing on
	Sys::Triangle* tri   = mFloorTriangle; // triangle we're currently on
	Vector3f newVelocity = Vector3f(0.0f);
	Vector3f oldVelocity = Vector3f(mTargetVelocity); // our current velocity

	if (tri) {
		// update our direction based on collision, but keep speed the same
		f32 oldSpeed    = oldVelocity.length();
		Vector3f newDir = mFloorNormal * oldVelocity.dot(mFloorNormal);
		newDir          = oldVelocity - newDir;
		newDir.normalise();

		oldVelocity = newDir * oldSpeed;

		// check if we're on slippery ground
		int code = tri->mCode.getSlipCode();
		if (code == MapCode::Code::SlipCode_NoSlip) {
			// ground is not slippery
			if (oldSpeed < 0.1f) {
				// going below speed threshold, slow to a stop
				Vector3f fallVelocity = Vector3f(0.0f, -(_aiConstants->mGravity.mData * sys->mDeltaTime), 0.0f);
				Vector3f newDir       = mFloorNormal * fallVelocity.dot(mFloorNormal);
				newDir                = fallVelocity - newDir;
				// decelerate to a stop
				newDir      = Vector3f(-newDir.x, -newDir.y, -newDir.z);
				newVelocity = newDir * 1.0f;
			}

		} else {
			// some form of slipping happening
			Vector3f fallVelocity = Vector3f(0.0f, -(_aiConstants->mGravity.mData * sys->mDeltaTime), 0.0f);
			Vector3f moveDir      = mFloorNormal * fallVelocity.dot(mFloorNormal);
			moveDir               = fallVelocity - moveDir;
			moveDir.normalise();

			f32 slipFactor;
			if (code == MapCode::Code::SlipCode_Steep) {
				// if we're on steep/extra slippery ground, slip faster
				slipFactor = 2.5f;
				if (isNavi() && ((Navi*)this)->getOlimarData()->hasItem(OlimarData::ODII_RepugnantAppendage)) {
					// if we have rush boots, we slip even FASTER on steep slopes
					slipFactor = 4.0f;
				}

			} else {
				// gradual slope, just slip at regular gravity
				slipFactor = 1.0f;
			}

			// slip under gravity, extra if extra slippery slope
			newVelocity = (((moveDir * _aiConstants->mGravity.mData) * sys->mDeltaTime) * slipFactor);
		}
	}

	Vector3f accel = (oldVelocity + mSimPosition) - mVelocity;
	accel.length(); // remnant from some commented out code block with a comparison, probably, or debug info

	mVelocity = mVelocity + accel * (sys->mDeltaTime / 0.1f);
	mVelocity = mVelocity + newVelocity;
}

/**
 * @note Address: 0x8013DFE8
 * @note Size: 0xB4
 */
void FakePiki::moveRotation()
{
	if (useMoveRotation()) {
		f32 delta = sys->mDeltaTime;
		f32 X     = mTargetVelocity.x * mTargetVelocity.x;
		f32 Z     = mTargetVelocity.z * mTargetVelocity.z;
		if (X + Z > 1.0f) {
			f32 dist = angDist(JMAAtan2Radian(mTargetVelocity.x, mTargetVelocity.z), mFaceDir);
			mFaceDir += 10.0f * (delta * (0.8f * dist));
			mFaceDir = roundAng(mFaceDir);
		}
	}
}

/**
 * @note Address: 0x8013E0B0
 * @note Size: 0x6A4
 */
void FakePiki::move(f32 rate)
{
	f32 collRad  = getMapCollisionRadius(); // this is 8.5f for both pikis and navis
	Vector3f pos = mPosition;
	pos.y += collRad;

	Vector3f jointPos; // this is some specific joint position, possibly stem?
	if (isFPFlag(FPFLAGS_PikiBeingPlucked) && mModel) {
		jointPos = mModel->mJoints[1].getWorldMatrix()->getColumn(3);
		pos      = jointPos;
	}

	// set up sphere to simulate movement with
	Sys::Sphere moveSphere(pos, collRad);
	// radius of traced movement
	f32 traceRadius = mTraceMoveRadius;
	// reset y acceleration for purposes of this calculation
	mAcceleration.y = 0.0f;
	// calculate simple next-frame velocity
	Vector3f velocity;
	velocity = mVelocity + mAcceleration;

	MoveInfo info(&moveSphere, &velocity, traceRadius);
	info.mMovingCreature    = this;
	mFakePikiBounceTriangle = nullptr;

	if (useMapCollision()) {
		// simulate movement (for one frame, usually)
		mTriList = mapMgr->traceMove(info, rate);
		// set next frame velocity as calculated by traceMove
		mVelocity      = velocity;
		info.mVelocity = &mVelocity;

		// if we're in a cave room, mark it as visited + mark us as in that room
		if (info.mRoomIndex != -1 && mapMgr->mRouteMgr) {
			mRoomIndex = info.mRoomIndex;

			MapRoom* room = static_cast<RoomMapMgr*>(mapMgr)->getMapRoom(info.mRoomIndex);
			if (!room->mIsVisited) {
				// make room visited
				mapMgr->mRouteMgr->openRoom(info.mRoomIndex);
				room->mIsVisited = true;
			}

			// NB: ignore this block, it's just forcing instructions to spawn
			// there's probably some debug code that went here for navis in 2P mode but idk what - HP
			if (isNavi() && gameSystem->isMultiplayerMode()) {
				mRoomIndex = mRoomIndex;
				if (gameSystem->isStoryMode()) {
					if (mRoomIndex) {
						static_cast<Navi*>(this)->mController1 = static_cast<Navi*>(this)->mController1;
					}
				}
			}
		}

	} else {
		// we're not using map collision, do the simplest movement calculation possible
		info.mMoveSphere->mPosition = info.mMoveSphere->mPosition + mVelocity * rate;
		info.mFloorTriangle         = nullptr;
	}

	if (!mFloorTriangle && info.mFloorTriangle) {
		// we were falling and next frame we hit something - bounce
		bounceCallback(info.mFloorTriangle);
	}

	// update tri we're on and its position
	mFloorTriangle = info.mFloorTriangle;
	mFloorNormal   = info.mFloorNormal;

	// we're gonna run into a wall
	if (!mDontUseWallCallback && info.mWallTriangle) {
		wallCallback(info.mWallNormal);
	}

	// we're on a platform, change position accordingly since it might move us
	if (platMgr) {
		platMgr->traceMove(info, rate);
	}

	// if platform made it so we're on a triangle, bounce and re-update tri position
	if (!mFloorTriangle && info.mFloorTriangle) {
		bounceCallback(info.mFloorTriangle);
		mFloorTriangle = info.mFloorTriangle;
		mFloorNormal   = info.mFloorNormal;
	}

	// platform made us hit a wall
	if (!mDontUseWallCallback && info.mWallTriangle) {
		wallCallback(info.mWallNormal);
	}

	// we're on sufficiently flat ground, update fakepiki-specific triangle (for knockbacks and burying from mamuta hit, etc)
	if (mFloorTriangle && mFloorTriangle->mTrianglePlane.mNormal.y > 0.6f) {
		mFakePikiBounceTriangle = mFloorTriangle;
	}

	if (isFPFlag(FPFLAGS_PikiBeingPlucked)) {
		// I'M BEING PLUCKED OVER HERE, offset by some joint position (probably stem?)
		Vector3f diff = moveSphere.mPosition - jointPos;
		diff.y        = 0.0f;
		mPosition += diff;
		moveSphere.mPosition = mPosition;

	} else {
		// update position based on simulation (and remove collision radius from height)
		mPosition = moveSphere.mPosition;
		mPosition.y -= collRad;
	}

	// if we're in a cave room and the floor has hidden collision (?), recalculate position
	if (mapMgr->hasHiddenCollision()) {
		Sys::Sphere bbSphere(mPosition, collRad);
		mapMgr->constraintBoundBox(bbSphere);

		mPosition            = bbSphere.mPosition;
		moveSphere.mPosition = mPosition;
	}

	// update bounding sphere
	mBoundingSphere = moveSphere;

	// if we're not on actual ground, don't worry about effects
	if (!mFloorTriangle) {
		return;
	}

	// if we're in water, don't worry about effects
	if (inWater()) {
		return;
	}

	// If moved at least least 1.0 units since last frame,
	// random chance to make splash/dust while walking
	// 3.333% for navis, less for pikis depending on how many are in the party
	if (mPreviousPosition.distance(mPosition) > 1.0f) {
		f32 efxChance;
		if (isNavi()) {
			efxChance = 0.033333335f;
		} else {
			// scale down effect chance for big pikmin parties so you don't get a million particles
			// example: each piki in a full 100-pikmin party has a 0.8% chance to make splash/dust
			// - for a single pikmin party, that chance is 3.31%
			int counter = GameStat::formationPikis;
			efxChance   = -0.025000002f * ((f32)counter / 100.0f) + 0.033333335f;
		}

		if (randFloat() <= efxChance) {
			// make walk effect based on terrain
			if (mFloorTriangle->mCode.mContents == 8) { // Attribute4, no slip, not bald?
				efx::createSimpleWalkwater(mPosition);
			} else {
				efx::createSimpleWalksmoke(mPosition);
			}
		}
	}
}

/**
 * @note Address: 0x8013E7C4
 * @note Size: 0xBC
 */
void FakePiki::doEntry()
{
	doColorChange();

	if (mLod.isFlag(AILOD_IsVisible)) {
		mModel->show();

	} else {
		if (BaseHIOParms::sEntryOpt && !gameSystem->isMultiplayerMode()) {
			return;
		}

		mModel->hide();
	}

	mModel->mJ3dModel->entry();
}

/**
 * @note Address: 0x8013E884
 * @note Size: 0x494
 */
void FakePiki::doAnimation()
{
	sys->mTimers->_start("doa1", true);
	AILODParm lodParm;
	lodParm.mFar   = 0.01f;
	lodParm.mClose = 0.009f;
	updateCell();
	updateLOD(lodParm);
	sys->mTimers->_stop("doa1");

	f32 frameLen = sys->mDeltaTime;
	if (isMovieMotion()) {
		mAnimSpeed = 30.0f;
	}

	f32 animRate = mAnimSpeed * frameLen;
	if (isPiki() && static_cast<Piki*>(this)->doped()) {
		animRate *= 2.0f;
	}
	if (gameSystem->mIsFrozen == false) {
		mAnimator.mSelfAnimator.animate(animRate);
		SysShape::Animator::verbose = false;
		mAnimator.mBoundAnimator.animate(animRate);
	}
	if (isPiki() && mLod.isFlag(AILOD_IsMid | AILOD_IsFar) >= 1) { // why
		if (!mModel) {
			P2DEBUG(getCreatureID());
			JUT_PANICLINE(1694, "zama--------n\n");
		}
		mModel->getJ3DModel()->getModelData()->getJointTree().getJointNodePointer(0)->setMtxCalc(nullptr);
		mModel->getJ3DModel()->getModelData()->getJointTree().getJointNodePointer(4)->setMtxCalc(nullptr);
	} else {
		mAnimator.mBoundAnimator.setModelCalc(mModel, 0);
		mAnimator.mSelfAnimator.setModelCalc(mModel, 4);
	}

	SysShape::Animator::verbose = false;

	mPreviousPosition = mPosition;

	if ((isMovieExtra() || !isMovieActor()) && mFakePikiBounceTriangle) {
		if (useMoveVelocity() || !mFloorTriangle) {
			moveVelocity();
		}
		if (useMoveRotation()) {
			f32 frameLen = sys->mDeltaTime;
			if (mTargetVelocity.sqrMagnitude2D() > 1.0f) {
				mFaceDir = (frameLen * (angDist(JMAAtan2Radian(mTargetVelocity.x, mTargetVelocity.z), mFaceDir) * 0.8f)) * 10.0f + mFaceDir;
				mFaceDir = roundAng(mFaceDir);
			}
		}
	}
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	mWaterBox = checkWater(mWaterBox, boundingSphere);
	if (mapMgr) {
		mVelocity.y = -(frameLen * _aiConstants->mGravity.mData - mVelocity.y);
	}
	updateTrMatrix();
	if (isNavi() && static_cast<Navi*>(this)->mPellet) {
		static_cast<Navi*>(this)->viewMakeMatrix(mBaseTrMatrix);
		Vector3f pos;
		mBaseTrMatrix.getTranslation(pos);
		mPosition = pos;
	}
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->getJ3DModel()->mPosMtx);
	sCurrNeckTheta = mNeckTheta;
	sCurrNeckPhi   = mNeckPhi;
	sys->mTimers->_start("calc-coll", true);
	mModel->getJ3DModel()->calc();
	mCollTree->update();
	sys->mTimers->_stop("calc-coll");
	if (mDoAnimCallback != nullptr) {
		mDoAnimCallback->invoke();
	}
}

/**
 * @note Address: 0x8013ED50
 * @note Size: 0x78
 */
void FakePiki::updateTrMatrix()
{
	if (useUpdateTrMatrix() && !isStickTo()) {
		Vector3f rotation(0.0f, mFaceDir, 0.0f);
		mBaseTrMatrix.makeSRT(mScale, rotation, mPosition);
	}
}

/**
 * @note Address: 0x8013EDDC
 * @note Size: 0x560
 */
void FakePiki::doSimulation(f32 rate)
{
	// if we're not on camera, make sure we don't move during cutscenes
	if (!isMovieExtra()) {
		if (isPiki()) {
			if (pikiMgr->mFlags[1] & 1) {
				mVelocity                 = Vector3f(0.0f);
				mAcceleration             = Vector3f(0.0f);
				mBoundingSphere.mPosition = mPosition;
				return;
			}
		} else if (isNavi()) {
			if (naviMgr->mFlags.isSet(1)) {
				mVelocity                 = Vector3f(0.0f);
				mAcceleration             = Vector3f(0.0f);
				mBoundingSphere.mPosition = mPosition;
				return;
			}
		}

		if (isMovieActor()) {
			mVelocity     = Vector3f(0.0f);
			mAcceleration = Vector3f(0.0f);
		}
	}

	// if we're attaching to somewhere or in something, do simple calculation
	if (mTargetCollObj) {
		mPosition = mPosition + mVelocity * rate;
		updateStomach();
		updateCell();
		mBoundingSphere.mPosition = mPosition;
		return;
	}

	// if we're stuck to something, just make sure we're facing the right direction
	if (isStickTo()) {
		Vector3f stickVec = Vector3f(sinf(mFaceDir), 0.0f, cosf(mFaceDir));
		updateStick(stickVec);
		updateCell();
		mAnimSpeed = 30.0f;

	} else {
		// we're not stuck, so move a step
		move(rate);

		// if we're on camera but not the focus, also walk
		if (isMovieExtra() || !isMovieActor()) {
			updateWalkAnimation();
		}
	}

	f32 speed = mVelocity.normalise();
	f32 accel = mAcceleration.length();

	if (speed > accel) {
		// add friction?
		speed -= accel;
		mVelocity     = mVelocity * speed;
		mAcceleration = Vector3f(0.0f);

	} else {
		// accel not high enough, reset it
		mVelocity     = mVelocity * speed;
		mAcceleration = Vector3f(0.0f);
	}

	// update collision sphere
	mBoundingSphere.mPosition = mPosition;

	// check if we've hit the death plane
	CheckHellArg hellArg;
	if (checkHell(hellArg) != CREATURE_HELL_BELOWMAP) {
		// we haven't hit the death plane, we're done
		return;
	}

	// GO TO HELL
	if (isPiki()) {
		// play piki falling/dying sound
		static_cast<Piki*>(this)->startSound(PSSE_PK_VC_FALL, true);
		return;
	}

	if (isNavi()) {
		// warp navi to ship/pod/onyon (if vs mode, since ship or pod should be loaded otherwise)
		Onyon* dropLocation = ItemOnyon::mgr->mUfo; // default to ship
		if (!ItemOnyon::mgr->mUfo) {
			dropLocation = ItemOnyon::mgr->mPod; // if no ship (cave etc), go to pod
		}

		// if no ship OR pod, warp to appropriate onyon
		if (!dropLocation) {
			// olimar warps to red onyon, louie/president warps to blue onyon
			dropLocation = ItemOnyon::mgr->getOnyon(1 - static_cast<Navi*>(this)->mNaviIndex);
		}

		// we're really boned if there's no ship, pod OR onyon loaded.
		JUT_ASSERTLINE(1929, dropLocation, "no recover onyon\n");

		Vector3f dropPos = dropLocation->getPosition();
		dropPos.y += 150.0f; // fall from 150 units above set location

		setPosition(dropPos, false);
	}
}

/**
 * @note Address: 0x8013F358
 * @note Size: 0xC
 */
void FakePiki::initCaptureStomach()
{
	mTargetCollObj = nullptr;
}

/**
 * @note Address: 0x8013F364
 * @note Size: 0x8
 */
void FakePiki::startCaptureStomach(CollPart* collPart)
{
	mTargetCollObj = collPart;
}

/**
 * @note Address: 0x8013F36C
 * @note Size: 0xC
 */
void FakePiki::endCaptureStomach()
{
	mTargetCollObj = nullptr;
}

/**
 * @note Address: 0x8013F378
 * @note Size: 0x158
 */
void FakePiki::updateStomach()
{
	CollPart* stomach = mTargetCollObj;
	if (!stomach) {
		return;
	}

	Vector3f sep = mPosition - mTargetCollObj->mPosition;
	f32 dist     = sep.normalise();

	f32 rad = stomach->mRadius - 8.5f;

	if (dist > rad) {
		mPosition = stomach->mPosition + sep * rad;
		mVelocity = mVelocity - sep * (1.1f * mVelocity.dot(sep));

		// whatever originally used this is stripped/commented out lol
		Vector3f sep2;
		sep2.x = mPosition.x - mTargetCollObj->mPosition.x;
		sep2.y = mPosition.y - mTargetCollObj->mPosition.y;
		sep2.z = mPosition.z - mTargetCollObj->mPosition.z;
		sep2.length();
	}
}

/**
 * @note Address: 0x8013F4D0
 * @note Size: 0x8
 */
bool FakePiki::debugShapeDL(char*)
{
	return true;
}

} // namespace Game
