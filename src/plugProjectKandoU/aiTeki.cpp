#include "PikiAI.h"
#include "Game/EnemyBase.h"
#include "Game/enemyInfo.h"
#include "Game/gameStat.h"
#include "Game/PikiState.h"
#include "Game/Footmark.h"
#include "Dolphin/rand.h"

namespace PikiAI {
/*
 * --INFO--
 * Address:	8021295C
 * Size:	000090
 */
ActTeki::ActTeki(Game::Piki* piki)
    : Action(piki)
{
	mName          = "Teki";
	mFollowingTeki = 0;
	mFollowMark    = nullptr;
}

/*
 * --INFO--
 * Address:	802129EC
 * Size:	00010C
 */
void ActTeki::init(PikiAI::ActionArg* arg)
{
	CreatureActionArg* cArg = static_cast<CreatureActionArg*>(arg);
	P2ASSERTLINE(91, cArg);

	mFollowingTeki = static_cast<Game::EnemyBase*>(cArg->mCreature);

	_2C = Vector3f(0.0f, 0.0f, 0.0f);

	_38 = 0.0f;
	_3C = 0.0f;
	_40 = 0.0f;

	_44         = 0.0f;
	mFollowMark = 0;
	_20         = 0.0f;

	_28 = 1;
	_1C = -1;

	mMoveSpeed = 0.0f;

	mToPanicFinish = false;
	if (mFollowingTeki->isTeki() && mFollowingTeki->getEnemyTypeID() == Game::EnemyTypeID::EnemyID_LeafChappy) {
		mToPanicFinish = true;
	}

	mToEmote = false;
	mParent->startMotion(30, 30, nullptr, nullptr);
}

/*
 * --INFO--
 * Address:	80212AF8
 * Size:	000178
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

		return 1;
	}

	// If the beetle is flying, we will just wait around until he comes back
	if (mFollowingTeki->isFlying()) {
		mToEmote = true;
		return 0;
	}
	// If the beetle is bittered, just wait until he comes back
	else if (mFollowingTeki->isTeki() && mFollowingTeki->isEvent(0, Game::EB_Bittered)
	         && mFollowingTeki->getEnemyTypeID() == Game::EnemyTypeID::EnemyID_Fuefuki) {
		mToEmote = true;
		return 0;
	}

	// Reset the timer
	Game::InteractFuefukiTimerReset timerReset(mParent);
	mFollowingTeki->stimulate(timerReset);
	test_0();
	return 1;
}

/*
 * --INFO--
 * Address:	80212C70
 * Size:	000050
 */
void ActTeki::emotion_success()
{
	if (mToEmote) {
		Game::EmotionStateArg arg(EMOTE_Excitement);
		mParent->mFsm->transit(mParent, Game::PIKISTATE_Emotion, &arg);
	}
}

/*
 * --INFO--
 * Address:	80212CC0
 * Size:	000314
 * TODO
 */
void ActTeki::makeTarget()
{
	Vector3f sourcePos = mParent->getPosition();
	Vector3f destPos   = mFollowingTeki->getPosition();

	Vector3f sep = destPos - sourcePos;
	f32 distance = sep.length();
	distance     = distance > 0.0f ? distance : 0.0f;

	Game::Footmarks* fm = mFollowingTeki->getFootmarks();
	if (fm == nullptr) {
		return;
	}

	Game::Footmark* currentFm = mFollowMark;
	f32 dist                  = 12800.0f;
	if (currentFm) {
		Vector3f sep2 = destPos - currentFm->mPosition;
		dist          = sep2.length();
	}

	mFollowMark = fm->get(0);
	for (int i = fm->mCapacity - 1; i >= 0; i--) {
		Game::Footmark* curMark = fm->get(i);

		Vector3f sep3 = curMark->mPosition - sourcePos;
		Vector3f sep4 = destPos - curMark->mPosition;
		sep3.length();
		f32 curDist = sep4.length();
		curDist     = (curDist > 0.0f) ? curDist : 0.0f;

		if (dist > curDist && curDist < 100.0f) {
			mFollowMark = curMark;
			break;
		}
	}

	if (!mFollowMark) {
		return;
	}

	_28 = 0;

	if (distance > 100.0f) {
		mMoveSpeed = 1.0f;
	} else {
		mMoveSpeed = (0.5f * randFloat()) + 0.5f;
	}
}

/*
 * --INFO--
 * Address:	80212FD4
 * Size:	000344
 * TODO
 */
void ActTeki::test_0()
{
	switch (_28) {
	case 1: {
		Vector3f sourcePos = mParent->getPosition();
		Vector3f destPos   = mFollowingTeki->getPosition();

		f32 distance = destPos.distance(sourcePos);

		_20 -= sys->mDeltaTime;

		Game::Piki* piki = mParent;
		piki->mVelocity  = Vector3f(0.0f);

		if (_20 <= 0.0f || distance > 100.0f) {
			makeTarget();
		}

		break;
	}

	case 0: {
		Vector3f sourcePos = mParent->getPosition();
		Vector3f destPos   = mFollowMark->mPosition;

		Vector3f dir = destPos - sourcePos;
		f32 dist     = dir.normalise();

		if (dist > 100.0f) {
			makeTarget();
		} else if (dist < 50.0f) {
			Game::Piki* piki = mParent;
			piki->mVelocity  = Vector3f(0, 0, 0);
			_28              = 1;
			setTimer();
			return;
		}

		if (dist < 50.0f) {
			Vector3f velDir = mFollowingTeki->getVelocity();

			velDir.normalise();

			dir = dir * 0.5f + velDir * 0.5f;

			mParent->setSpeed(mMoveSpeed, dir);
			return;
		}

		mParent->setSpeed(mMoveSpeed, dir);
		break;
	}

	default:
		break;
	}
}

/*
 * --INFO--
 * Address:	80213318
 * Size:	000058
 */
void ActTeki::doDirectDraw(Graphics& gfx)
{
	if (mFollowMark) {
		gfx._084 = Color4(255, 100, 10, 255);
		gfx.drawSphere(mFollowMark->mPosition, 10.0f);
	}
}

/*
 * --INFO--
 * Address:	80213370
 * Size:	000130
 */
void ActTeki::setTimer()
{
	Vector3f thisPos = mParent->getPosition();
	Vector3f themPos = mFollowingTeki->getPosition();

	f32 dist = themPos.distance(thisPos);

	f32 weight;
	if (dist < 100.0f) {
		weight = 0.3f;
	} else {
		weight = 0.1f;
	}

	_20 = weight * (0.5f * randFloat() + 1.0f);
}

/*
 * --INFO--
 * Address:	802134A0
 * Size:	000004
 */
void ActTeki::cleanup() { }

/*
 * --INFO--
 * Address:	802134A4
 * Size:	0000E8
 */
void ActTeki::collisionCallback(Game::Piki* piki, Game::CollEvent& event)
{
	Vector3f creaturePos = event.mCollidingCreature->getPosition();
	Vector3f parentPos   = mParent->getPosition();

	Vector3f sep = parentPos - creaturePos;
	f32 dotProd  = dot(_2C, sep);
	_44          = dotProd;
	if (dotProd > 0.0f) {
		_44 = 0.1f;
	} else {
		_44 = -0.1f;
	}
}

void ActTeki::onKeyEvent(const SysShape::KeyEvent& event) { }
} // namespace PikiAI
