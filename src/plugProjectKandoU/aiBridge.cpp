#include "Game/Navi.h"
#include "Game/Piki.h"
#include "Game/rumble.h"
#include "Game/CollEvent.h"
#include "Game/Interaction.h"
#include "Game/gameStat.h"
#include "Game/PlatInstance.h"
#include "Game/Entities/ItemBridge.h"

#include "PikiAI.h"

namespace PikiAI {

static const char aiBridgeName[] = "actBridge";

/**
 * @note Address: 0x80212288
 * @note Size: 0xFC
 */
ActBridge::ActBridge(Game::Piki* parent)
    : Action(parent)
{
	mCollPartType = ActBridgeState::NoCollisionPart;

	mStickAttack = new ActStickAttack(parent);
	mGotoPos     = new ActGotoPos(parent);
	mFollowField = new ActFollowVectorField(parent);

	mName = "Bridge";
}

/**
 * @note Address: 0x80212384
 * @note Size: 0xC8
 */
void ActBridge::init(ActionArg* actionArg)
{
	bool isCorrectArg = false;
	if (actionArg) {
		bool strCheck = strcmp("ActBridgeArg", actionArg->getName()) == 0;
		if (strCheck) {
			isCorrectArg = true;
		}
	}

	P2ASSERTLINE(62, isCorrectArg);

	Game::GameStat::workPikis.inc(mParent);

	mBridge       = static_cast<ActBridgeArg*>(actionArg)->mBridge;
	mCollPartType = ActBridgeState::NoCollisionPart;

	initFollow();
}

/**
 * @note Address: 0x8021244C
 * @note Size: 0x68
 */
void ActBridge::initFollow()
{
	FollowVectorFieldActionArg followArg(mBridge);
	mFollowField->init(&followArg);
	mState = ActBridgeState::FollowTowards;
}

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
void ActBridge::initGoto()
{
	GotoPosActionArg gotoArg;
	mGotoPos->init(&gotoArg);
	mState = ActBridgeState::FollowTowards;
}

/**
 * @note Address: 0x--------
 * @note Size: 0xBC
 * --INLINE--
 */
void ActBridge::initStickAttack()
{
	f32 attackDamage = mParent->getAttackDamage();
	StickAttackActionArg stickAttackArg(attackDamage, mBridge, Game::IPikiAnims::NULLANIM, STICKATK_Bridge);

	// Check if the bridge is breakable and the wall is pointing upwards (hit a wall)
	bool check = false;
	if ((mCollPartType & ActBridgeState::Breakable) && mParent->mFloorNormal.y > 0.5f) {
		check = true;
	}

	if (check) {
		stickAttackArg.mAnimIdx = Game::IPikiAnims::JOB2;
	}

	mStickAttack->init(&stickAttackArg);

	mState = ActBridgeState::StickAttack;
}

/**
 * @note Address: 0x802124B4
 * @note Size: 0x31C
 */
int ActBridge::exec()
{
	// Are we done with killing the bridge?
	if (!mBridge->isAlive()) {
		mCollPartType = ActBridgeState::NoCollisionPart;
		return ACTEXEC_Success; // Yes, we are done
	}

	// Did we magically get into water?
	if (mParent->inWater()) {
		return ACTEXEC_Fail; // Cannot break bridges if we're drowning
	}

	switch (mState) {
	case ActBridgeState::StickAttack:
		// Is the bridge done being made?
		bool failedFollow = mFollowField->exec() != ACTEXEC_Success;
		if (!failedFollow) {
			return ACTEXEC_Success; // Yes, all done
		}

		// We need to attack the bridge
		int stickResult = mStickAttack->exec();
		if (stickResult == ACTEXEC_Success || stickResult == ACTEXEC_Fail) {
			initStickAttack(); // Start attacking
		} else {
			mCollPartType = ActBridgeState::NoCollisionPart;
			return stickResult;
		}

		break;

	case ActBridgeState::FollowTowards:
		int followResult = mFollowField->exec();

		if (followResult == ACTEXEC_Success) {
			initStickAttack();
		} else {
			mCollPartType = ActBridgeState::NoCollisionPart;
			return followResult;
		}

		break;

	case ActBridgeState::GoToPosition:
		int gotoResult = mGotoPos->exec();

		if (gotoResult == ACTEXEC_Success) {
			initStickAttack();
		} else {
			mCollPartType = ActBridgeState::NoCollisionPart;
			return gotoResult;
		}

		break;
	}

	mCollPartType = ActBridgeState::NoCollisionPart;
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x802127D0
 * @note Size: 0x5C
 */
void ActBridge::cleanup()
{
	Game::GameStat::workPikis.dec(mParent);

	switch (mState) {
	case ActBridgeState::StickAttack:
		mStickAttack->cleanup();
		break;
	}
}

/**
 * @note Address: 0x8021282C
 * @note Size: 0x110
 */
void ActBridge::platCallback(Game::Piki* p, Game::PlatEvent& platEvent)
{
	Game::PlatInstance* instance = platEvent.mInstance;
	if (platEvent.mObj == mBridge) {
		// Check if the bridge is breakable or not
		if (instance->mId.getID() == 'brbk') {
			mCollPartType |= ActBridgeState::Breakable;
		} // Check if the object is part of a bridge
		else if (instance->mId.getID() == 'br__') {
			mCollPartType |= ActBridgeState::Other;
		}
	}

	// If we were following something, we MAY have hit the bridge!
	if (mState == ActBridgeState::FollowTowards) {
		initStickAttack();
	}
}

/**
 * @note Address: 0x8021293C
 * @note Size: 0x4
 */
void ActBridge::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/**
 * @note Address: 0x80212940
 * @note Size: 0x4
 */
void ActBridge::bounceCallback(Game::Piki*, Sys::Triangle*) { }

} // namespace PikiAI
