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

/*
 * --INFO--
 * Address:	80212288
 * Size:	0000FC
 */
ActBridge::ActBridge(Game::Piki* parent)
    : Action(parent)
{
	_30 = 0;

	mStickAttack = new ActStickAttack(parent);
	mGotoPos     = new ActGotoPos(parent);
	mFollowField = new ActFollowVectorField(parent);

	mName = "Bridge";
}

/*
 * --INFO--
 * Address:	80212384
 * Size:	0000C8
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

	mBridge = static_cast<ActBridgeArg*>(actionArg)->mBridge;
	_30     = 0;

	initFollow();
}

static const char stickAttackArgName[] = "StickAttackActionArg";
static const char gotoPosArgName[]     = "GotoPosActionArg";
static const char followFieldArgName[] = "FollowVectorFieldActionArg";

/*
 * --INFO--
 * Address:	8021244C
 * Size:	000068
 */
void ActBridge::initFollow()
{
	FollowVectorFieldActionArg followArg(mBridge);
	mFollowField->init(&followArg);
	mState = 1;
}

/*
 * --INFO--
 * Address: --------
 * Size:    0000BC
 * --INLINE--
 */
void ActBridge::initStickAttack()
{
	f32 attackDamage = mParent->getAttackDamage();
	StickAttackActionArg stickAttackArg(attackDamage, mBridge, -1, 4);

	bool check = false;
	if ((_30 & 1) && mParent->mCollisionPosition.y > 0.5f) {
		check = true;
	}

	if (check) {
		stickAttackArg.mNextState = 25;
	}

	mStickAttack->init(&stickAttackArg);

	mState = 2;
}

/*
 * --INFO--
 * Address:	802124B4
 * Size:	00031C
 */
int ActBridge::exec()
{
	if (!mBridge->isAlive()) {
		_30 = 0;
		return 0;
	}

	if (mParent->inWater()) {
		return 2;
	}

	switch (mState) {
	case 2:
		bool checkCode = mFollowField->exec() != 0;
		if (!checkCode) {
			return 0;
		}

		int stickResult = mStickAttack->exec();
		if (stickResult == 0 || stickResult == 2) {
			initStickAttack();
		} else {
			_30 = 0;
			return stickResult;
		}
		break;

	case 1:
		int followResult = mFollowField->exec();
		if (followResult == 0) {
			initStickAttack();
		} else {
			_30 = 0;
			return followResult;
		}
		break;

	case 0:
		int gotoResult = mGotoPos->exec();
		if (gotoResult == 0) {
			initStickAttack();
		} else {
			_30 = 0;
			return gotoResult;
		}
		break;
	}

	_30 = 0;
	return 1;
}

/*
 * --INFO--
 * Address:	802127D0
 * Size:	00005C
 */
void ActBridge::cleanup()
{
	Game::GameStat::workPikis.dec(mParent);

	switch (mState) {
	case 2:
		mStickAttack->cleanup();
		break;
	}
}

/*
 * --INFO--
 * Address:	8021282C
 * Size:	000110
 */
void ActBridge::platCallback(Game::Piki* p, Game::PlatEvent& platEvent)
{
	Game::PlatInstance* instance = platEvent.mInstance;
	if (platEvent.mItem == mBridge) {
		if (instance->mId.getID() == 'brbk') {
			_30 |= 0x1;
		} else if (instance->mId.getID() == 'br__') {
			_30 |= 0x2;
		}
	}

	if (mState == 1) {
		initStickAttack();
	}
}

/*
 * --INFO--
 * Address:	8021293C
 * Size:	000004
 */
void ActBridge::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	80212940
 * Size:	000004
 */
void ActBridge::bounceCallback(Game::Piki*, Sys::Triangle*) { }

} // namespace PikiAI
