#include "PikiAI.h"
#include "Game/gameStat.h"
#include "Game/Entities/ItemGate.h"
#include "Game/Piki.h"
#include "Game/PikiState.h"

namespace PikiAI {

static const char breakGateName[] = "actBreakWall";

/**
 * @note Address: 0x801D04E8
 * @note Size: 0xF8
 */
ActBreakGate::ActBreakGate(Game::Piki* parent)
    : Action(parent)
{
	mStickAttack = new ActStickAttack(parent);
	mGotoPos     = new ActGotoPos(parent);
	mFollowField = new ActFollowVectorField(parent);

	mName = "BreakGate";
}

/**
 * @note Address: 0x801D05E0
 * @note Size: 0xC8
 */
void ActBreakGate::init(ActionArg* actionArg)
{
	bool isCorrectArg = false;
	if (actionArg) {
		bool strCheck = strcmp("ActBreakGateArg", actionArg->getName()) == 0;
		if (strCheck) {
			isCorrectArg = true;
		}
	}

	P2ASSERTLINE(98, isCorrectArg);

	Game::GameStat::workPikis.inc(mParent);

	mGate            = static_cast<ActBreakGateArg*>(actionArg)->mGate;
	mResetStateAfter = 0;

	initFollow();
}

/**
 * @note Address: 0x801D06A8
 * @note Size: 0x68
 */
void ActBreakGate::initFollow()
{
	FollowVectorFieldActionArg followArg(mGate);
	mFollowField->init(&followArg);
	mState = 1;
}

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
void ActBreakGate::initGoto()
{
	GotoPosActionArg gotoArg;
	mGotoPos->init(&gotoArg);
	mState = 1;
}

/**
 * @note Address: 0x--------
 * @note Size: 0x114
 * --INLINE--
 */
void ActBreakGate::initStickAttack()
{
	int type = STICKATK_WhiteGate;
	if (mGate->mColor == GATECOLOR_Black) {
		type = STICKATK_BlackGate;
	} else if (mGate->mIsElectric) {
		type = STICKATK_ElecGate;
	}

	if (mResetStateAfter == 0) {
		f32 attackDamage = mParent->getAttackDamage();
		StickAttackActionArg stickAttackArg(attackDamage, mGate, Game::IPikiAnims::NULLANIM, type);
		mStickAttack->init(&stickAttackArg);

	} else {
		f32 attackDamage = mParent->getAttackDamage();
		StickAttackActionArg stickAttackArg(attackDamage, mGate, Game::IPikiAnims::JOB2, type);
		mStickAttack->init(&stickAttackArg);
	}

	mState = 2;
}

/**
 * @note Address: 0x801D0710
 * @note Size: 0x498
 */
int ActBreakGate::exec()
{
	if (!mGate->isAlive()) {
		return 0;
	}

	switch (mState) {
	case 2:
		mFollowField->exec();
		int stickResult = mStickAttack->exec();

		if (stickResult == 0) {
			initStickAttack();
		} else if (stickResult == 2) {
			initStickAttack();
		} else {
			return stickResult;
		}
		break;

	case 1:
		int followResult = mFollowField->exec();
		if (followResult == 0) {
			initStickAttack();
		} else {
			return followResult;
		}
		break;

	case 0:
		int gotoResult = mGotoPos->exec();
		if (gotoResult == 0) {
			initStickAttack();
		} else {
			return gotoResult;
		}
		break;
	}

	return 1;
}

/**
 * @note Address: 0x801D0BA8
 * @note Size: 0x5C
 */
void ActBreakGate::cleanup()
{
	Game::GameStat::workPikis.dec(mParent);
	switch (mState) {
	case 2:
		mStickAttack->cleanup();
		break;
	}
}

/**
 * @note Address: 0x801D0C04
 * @note Size: 0x44
 */
void ActBreakGate::emotion_success()
{
	Game::EmotionStateArg emotionArg(1);
	mParent->mFsm->transit(mParent, Game::PIKISTATE_Emotion, &emotionArg);
}

/**
 * @note Address: 0x801D0C48
 * @note Size: 0x144
 */
void ActBreakGate::platCallback(Game::Piki* p, Game::PlatEvent& platEvent)
{
	if (platEvent.mNormal.y > 0.7f) {
		mResetStateAfter = 1;
	} else {
		mResetStateAfter = 0;
	}

	if (mState == 1) {
		initStickAttack();
	}
}

/**
 * @note Address: 0x801D0D8C
 * @note Size: 0x4
 */
void ActBreakGate::collisionCallback(Game::Piki*, Game::CollEvent&)
{
}

/**
 * @note Address: 0x801D0D90
 * @note Size: 0x4
 */
void ActBreakGate::bounceCallback(Game::Piki*, Sys::Triangle*)
{
}

/**
 * @note Address: 0x801D0D94
 * @note Size: 0x4
 */
void ActBreakGate::onKeyEvent(const SysShape::KeyEvent&)
{
}

} // namespace PikiAI
