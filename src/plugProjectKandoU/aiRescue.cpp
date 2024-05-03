#include "PikiAI.h"
#include "Game/Piki.h"
#include "Game/PikiState.h"
#include "Game/MapMgr.h"
#include "Game/routeMgr.h"
#include "Game/AIConstants.h"

static const char className[] = "actRescue";

namespace PikiAI {
/**
 * @note Address: 0x80238EB0
 * @note Size: 0xB8
 */
ActRescue::ActRescue(Game::Piki* piki)
    : Action(piki)
{
	mThrowFlag   = THROW_Null;
	mName        = "Rescue";
	mApproachPos = new ActApproachPos(piki);
}

/**
 * @note Address: 0x80238F68
 * @note Size: 0xC4
 */
void ActRescue::init(ActionArg* arg)
{
	P2ASSERTLINE(46, arg);

	ActRescueArg* sarg = static_cast<ActRescueArg*>(arg);
	bool check         = false;
	if (sarg->mTarget) {
		if (sarg->mTarget->isPiki()) {
			check = true;
		}
	}
	P2ASSERTLINE(48, check);

	mTargetPiki = sarg->mTarget;
	mWayPoint   = nullptr;
	initApproach();
}

/**
 * @note Address: 0x8023902C
 * @note Size: 0x60
 */
int ActRescue::exec()
{
	switch (mState) {
	case RESCUE_Approach:
		return execApproach();
	case RESCUE_Go:
		return execGo();
	case RESCUE_Throw:
		return execThrow();
	default:
		return ACTEXEC_Continue;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xC0
 */
ActionExitCode ActRescue::checkPikmin()
{
	if (!mTargetPiki->isAlive()) {
		return ACTEXEC_Fail;
	}
	int state = mTargetPiki->getStateID();
	if (state != Game::PIKISTATE_WaterHanged && state != Game::PIKISTATE_Drown && !mTargetPiki->inWater()) {
		return ACTEXEC_Success;
	}
	if (state == Game::PIKISTATE_WaterHanged && static_cast<Game::PikiWaterHangedState*>(mTargetPiki->mCurrentState)->mPiki != mParent) {
		return ACTEXEC_Success;
	}
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8023908C
 * @note Size: 0xAC
 */
void ActRescue::initApproach()
{
	mState       = RESCUE_Approach;
	Vector3f pos = mTargetPiki->getPosition();

	// no time limit
	ApproachPosActionArg arg(pos, 10.0f, -1.0f);
	mApproachPos->init(&arg);
}

/**
 * @note Address: 0x80239138
 * @note Size: 0x13C
 */
int ActRescue::execApproach()
{
	ActionExitCode ret = checkPikmin();
	switch (ret) {
	case ACTEXEC_Continue: {
		Vector3f pos                = mTargetPiki->getPosition();
		mApproachPos->mGoalPosition = pos;
		ret                         = static_cast<ActionExitCode>(mApproachPos->exec());
		if (ret == ACTEXEC_Success) {
			initGo();
		} else if (ret == ACTEXEC_Fail) {
			return ACTEXEC_Fail;
		}
		return ACTEXEC_Continue;
	}
	default:
		return ret;
	}
}

/**
 * @note Address: 0x80239274
 * @note Size: 0x150
 */
void ActRescue::initGo()
{
	mState = RESCUE_Go;
	WPFindCond cond;
	Vector3f pos = mTargetPiki->getPosition();
	Game::WPSearchArg arg(pos, &cond, false, 10.0f);
	mWayPoint = Game::mapMgr->mRouteMgr->getNearestWayPoint(arg);
	if (mWayPoint) {
		// no time limit
		ApproachPosActionArg arg(mWayPoint->mPosition, 250.0f, -1.0f);
		mApproachPos->init(&arg);
		Game::WaterHangedStateArg statearg(mParent);
		mTargetPiki->mFsm->transit(mTargetPiki, Game::PIKISTATE_WaterHanged, &statearg);
	}
	mTimeLimit = 100;
}

/**
 * @note Address: 0x802393C4
 * @note Size: 0x1C0
 */
int ActRescue::execGo()
{
	ActionExitCode ret = checkPikmin();
	switch (ret) {
	case ACTEXEC_Continue:
		if (!mWayPoint) {
			ret = ACTEXEC_Fail;
		} else {
			ret = static_cast<ActionExitCode>(mApproachPos->exec());
			if (!--mTimeLimit) {
				ret = ACTEXEC_Success;
			}

			if (ret == ACTEXEC_Success) {
				initThrow();
			} else if (ret == ACTEXEC_Fail) {
				return ACTEXEC_Fail;
			}

			SysShape::Joint* jnt = mParent->mModel->getJoint("rhandjnt");
			P2ASSERTLINE(220, jnt);
			Vector3f mod(3.0f, 0.0f, 0.0f);
			mod = jnt->getWorldMatrix()->mtxMult(mod);
			mTargetPiki->setPosition(mod, false);
			ret = ACTEXEC_Continue;
		}
		break;
	}
	return ret;
}

/**
 * @note Address: 0x80239584
 * @note Size: 0x64
 */
void ActRescue::initThrow()
{
	mState = RESCUE_Throw;
	mParent->startMotion(Game::IPikiAnims::THROW, Game::IPikiAnims::THROW, this, nullptr);
	mThrowFlag = THROW_Null;
}

/**
 * @note Address: 0x802395E8
 * @note Size: 0x278
 */
int ActRescue::execThrow()
{
	if (!mParent->assertMotion(Game::IPikiAnims::THROW)) {
		return ACTEXEC_Fail;
	}

	if (mThrowFlag & THROW_DoThrow) {
		mTargetPiki->mBrain->start(ACT_Free, nullptr);
		mTargetPiki->mFsm->transit(mTargetPiki, Game::PIKISTATE_Flying, nullptr);
		mThrowFlag            = THROW_Null;
		Vector3f t            = mWayPoint->mPosition - mParent->getPosition();
		Vector2f sep          = Vector2f(t.x, t.z);
		f32 dist              = sep.length();
		f32 angleDist         = JMAAtan2Radian(sep.x, sep.y);
		mTargetPiki->mFaceDir = roundAng(angleDist);

		f64 test   = fabs(t.y);
		f32 factor = 0.5f;
		f32 height = mTargetPiki->getThrowHeight();
		height     = height + (f32)test;
		height     = height + 50.0f;
		if (mTargetPiki->getKind() == Game::Purple) {
			factor *= 0.5f;
		}

		f32 yVel = factor * (0.5f * Game::_aiConstants->mGravity.mData) + (height / factor);

		f32 throwDist = dist / (2.0f * factor);

		mTargetPiki->mVelocity       = Vector3f(sinf(angleDist) * throwDist, yVel, cosf(angleDist) * throwDist);
		mTargetPiki->mTargetVelocity = mTargetPiki->mVelocity;

	} else if (mThrowFlag & THROW_Stop) {
		return ACTEXEC_Success;
	}

	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x80239860
 * @note Size: 0x2C
 */
void ActRescue::onKeyEvent(SysShape::KeyEvent const& event)
{
	if (event.mType == KEYEVENT_2) {
		mThrowFlag |= THROW_DoThrow;
	} else {
		mThrowFlag |= THROW_Stop;
	}
}

/**
 * @note Address: 0x8023988C
 * @note Size: 0x4
 */
void ActRescue::emotion_success() { }

/**
 * @note Address: 0x80239890
 * @note Size: 0x4
 */
void ActRescue::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x80239894
 * @note Size: 0x4
 */
void ActRescue::cleanup() { }

/**
 * @note Address: 0x80239898
 * @note Size: 0x4
 */
void ActRescue::collisionCallback(Game::Piki* piki, Game::CollEvent& event) { }

} // namespace PikiAI
