#include "PikiAI.h"
#include "Game/EnemyBase.h"
#include "Game/gameStat.h"
#include "Game/PikiState.h"
#include "Game/Footmark.h"
#include "Dolphin/rand.h"

#define FOLLOW_DISTANCE 100.0f

namespace PikiAI {
/**
 * @note Address: 0x8021295C
 * @note Size: 0x90
 */
ActTeki::ActTeki(Game::Piki* piki)
    : Action(piki)
{
	mName            = "Teki";
	mFollowingTeki   = 0;
	mTargetFootprint = nullptr;
}

/**
 * @note Address: 0x802129EC
 * @note Size: 0x10C
 */
void ActTeki::init(PikiAI::ActionArg* arg)
{
	CreatureActionArg* cArg = static_cast<CreatureActionArg*>(arg);
	P2ASSERTLINE(91, cArg);

	mFollowingTeki = static_cast<Game::EnemyBase*>(cArg->mCreature);

	mUnusedZeroVector = Vector3f(0.0f, 0.0f, 0.0f);

	mUnused1 = 0.0f;
	mUnused2 = 0.0f;
	mUnused3 = 0.0f;

	mUnusedDotProduct  = 0.0f;
	mTargetFootprint   = 0;
	mParentFollowTimer = 0.0f;

	mFollowState = TFS_Parent;
	mUnused0     = -1;

	mMoveSpeed = 0.0f;

	mToPanicFinish = false;
	if (mFollowingTeki->isTeki() && mFollowingTeki->getEnemyTypeID() == Game::EnemyTypeID::EnemyID_LeafChappy) {
		mToPanicFinish = true;
	}

	mToEmote = false;
	mParent->startMotion(30, 30, nullptr, nullptr);
}

/**
 * @note Address: 0x80212AF8
 * @note Size: 0x178
 */
int ActTeki::exec()
{
	// Panic after parent death
	if (!mFollowingTeki->isAlive()) {
		if (mToPanicFinish) {
			mToPanicFinish = false;

			if (!Game::BaseHIOParms::sTekiChappyFlag) {
				Game::GameStat::alivePikis.inc(mParent);
			}
		}

		if (mParent->getStateID() != Game::PIKISTATE_Panic) {
			Game::PanicStateArg arg;
			arg.mPanicType = PIKIPANIC_Panic;
			mParent->mFsm->transit(mParent, Game::PIKISTATE_Panic, &arg);
		}

		return ACTEXEC_Continue;
	}

	// If the beetle is flying, we will just wait around until he comes back
	if (mFollowingTeki->isFlying()) {
		mToEmote = true;
		return ACTEXEC_Success;
	}

	// If the beetle is bittered, just wait until he comes back
	else if (mFollowingTeki->isTeki() && mFollowingTeki->isEvent(0, Game::EB_Bittered)
	         && mFollowingTeki->getEnemyTypeID() == Game::EnemyTypeID::EnemyID_Fuefuki) {
		mToEmote = true;
		return ACTEXEC_Success;
	}

	// Reset the timer
	Game::InteractFuefukiTimerReset timerReset(mParent);
	mFollowingTeki->stimulate(timerReset);
	test_0();
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x80212C70
 * @note Size: 0x50
 */
void ActTeki::emotion_success()
{
	if (mToEmote) {
		Game::EmotionStateArg arg(EMOTE_Excitement);
		mParent->mFsm->transit(mParent, Game::PIKISTATE_Emotion, &arg);
	}
}

/**
 * @note Address: 0x80212CC0
 * @note Size: 0x314
 */
void ActTeki::makeTarget()
{
	Vector3f sourcePos    = mParent->getPosition();
	Vector3f followingPos = mFollowingTeki->getPosition();

	f32 distance = (followingPos - sourcePos).length();
	distance     = distance > 0.0f ? distance : 0.0f;

	// Can't make a target if there are no footprints to follow
	Game::Footmarks* fm = mFollowingTeki->getFootmarks();
	if (fm == nullptr) {
		return;
	}

	Game::Footmark* currentFm = mTargetFootprint;
	f32 distanceToFootstep    = 12800.0f;
	if (currentFm) {
		distanceToFootstep = (followingPos - currentFm->mPosition).length();
	}

	// Find the closest footprint to the destination within a 100 unit distance, then follow and move toward it.
	mTargetFootprint = fm->get(0);
	for (int i = fm->mCapacity - 1; i >= 0; i--) {
		Game::Footmark* curMark = fm->get(i);

		Vector3f fromSourceToMark = curMark->mPosition - sourcePos;
		Vector3f fromMarkToDest   = followingPos - curMark->mPosition;

		fromSourceToMark.length();
		f32 curDist = fromMarkToDest.length();
		curDist     = (curDist > 0.0f) ? curDist : 0.0f;

		if (distanceToFootstep > curDist && curDist < FOLLOW_DISTANCE) {
			mTargetFootprint = curMark;
			break;
		}
	}

	// We couldn't find a closest footprint, so there's no target!
	if (!mTargetFootprint) {
		return;
	}

	// We found a target footprint, so change state
	mFollowState = TFS_Footprint;

	if (distance > FOLLOW_DISTANCE) {
		// If we're far away, go at max speed
		mMoveSpeed = 1.0f;
	} else {
		// If we're close, go at a random speed between 0.5 and 1.0
		mMoveSpeed = (0.5f * randFloat()) + 0.5f;
	}
}

/**
 * @note Address: 0x80212FD4
 * @note Size: 0x344
 */
void ActTeki::test_0()
{
	switch (mFollowState) {
	case TFS_Parent: {
		Vector3f sourcePos = mParent->getPosition();
		Vector3f destPos   = mFollowingTeki->getPosition();

		f32 distance = destPos.distance(sourcePos);

		mParentFollowTimer -= sys->mDeltaTime;

		// We've reached the parent, so stop moving and wait for them to move again.
		mParent->mTargetVelocity = Vector3f(0.0f);

		// If we've gone out of reach of follow distance, or the follow timer has fallen below 0, we need to find a new target.
		if (mParentFollowTimer <= 0.0f || distance > FOLLOW_DISTANCE) {
			makeTarget();
		}

		break;
	}

	case TFS_Footprint: {
		Vector3f currentPos   = mParent->getPosition();
		Vector3f footprintPos = mTargetFootprint->mPosition;

		Vector3f dirToFootprint = footprintPos - currentPos;
		f32 distToFootprint     = dirToFootprint.normalise();

		// If we've gone out of reach of follow distance, we need to find a new target.
		if (distToFootprint > FOLLOW_DISTANCE) {
			makeTarget();
		}
		// If we've reached the footprint destination, we'll follow the parent next.
		else if (distToFootprint < (FOLLOW_DISTANCE / 2)) {
			mParent->mTargetVelocity = Vector3f(0, 0, 0);
			mFollowState             = TFS_Parent;
			setTimer();
			return;
		}

		// If we're close to the footprint, we'll factor in the current direction to the footprint.
		if (distToFootprint < (FOLLOW_DISTANCE / 2)) {
			Vector3f currentMoveDir = mFollowingTeki->getVelocity();
			currentMoveDir.normalise();

			// Factor in 50% of the current direction and 50% of the direction to the footprint (smooth movement)
			dirToFootprint = dirToFootprint * 0.5f + currentMoveDir * 0.5f;

			mParent->setSpeed(mMoveSpeed, dirToFootprint);
			return;
		}

		// Move towards the footprint.
		mParent->setSpeed(mMoveSpeed, dirToFootprint);
		break;
	}

	default:
		break;
	}
}

/**
 * @note Address: 0x80213318
 * @note Size: 0x58
 */
void ActTeki::doDirectDraw(Graphics& gfx)
{
	if (mTargetFootprint) {
		gfx.mDrawColor = Color4(255, 100, 10, 255);
		gfx.drawSphere(mTargetFootprint->mPosition, 10.0f);
	}
}

/**
 * @note Address: 0x80213370
 * @note Size: 0x130
 */
void ActTeki::setTimer()
{
	Vector3f currentPos   = mParent->getPosition();
	Vector3f followingPos = mFollowingTeki->getPosition();

	f32 dist = followingPos.distance(currentPos);

	f32 weight;
	if (dist < FOLLOW_DISTANCE) {
		weight = 0.3f;
	} else {
		weight = 0.1f;
	}

	mParentFollowTimer = weight * (0.5f * randFloat() + 1.0f);
}

/**
 * @note Address: 0x802134A0
 * @note Size: 0x4
 */
void ActTeki::cleanup() { }

/**
 * @note Address: 0x802134A4
 * @note Size: 0xE8
 */
void ActTeki::collisionCallback(Game::Piki* piki, Game::CollEvent& event)
{
	Vector3f collidedPos = event.mCollidingCreature->getPosition();
	Vector3f currentPos  = mParent->getPosition();

	// Unfortunately, this code must've been a result of testing
	// And doesn't logically make sense, mUnusedZeroVector is always Vector3f(0, 0, 0)
	// Meaning the dot product is always 0, thus mUnusedDotProduct is always -0.1f
	Vector3f sep      = currentPos - collidedPos;
	f32 dotProd       = mUnusedZeroVector.dot(sep);
	mUnusedDotProduct = dotProd;
	if (dotProd > 0.0f) {
		mUnusedDotProduct = 0.1f;
	} else {
		mUnusedDotProduct = -0.1f;
	}
}

void ActTeki::onKeyEvent(const SysShape::KeyEvent& event) { }
} // namespace PikiAI
