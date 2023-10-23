#include "PikiAI.h"
#include "Game/gameStat.h"
#include "Game/Entities/ItemRock.h"
#include "PSGame/SeMgr.h"
#include "SoundID.h"

namespace PikiAI {

static const char breakRockName[] = "actBreakWall";

/*
 * --INFO--
 * Address:	801E36A0
 * Size:	0000F8
 */
ActBreakRock::ActBreakRock(Game::Piki* parent)
    : Action(parent)
{
	mStickAttack = new ActStickAttack(parent);
	mGotoPos     = new ActGotoPos(parent);
	mFollowField = new ActFollowVectorField(parent);

	mName = "BreakRock";
}

/*
 * --INFO--
 * Address:	801E3798
 * Size:	0000C0
 */
void ActBreakRock::init(ActionArg* actionArg)
{
	bool isCorrectArg = false;
	if (actionArg) {
		bool strCheck = strcmp("ActBreakRockArg", actionArg->getName()) == 0;
		if (strCheck) {
			isCorrectArg = true;
		}
	}

	P2ASSERTLINE(80, isCorrectArg);

	Game::GameStat::workPikis.inc(mParent);

	mRock = static_cast<ActBreakRockArg*>(actionArg)->mRock;

	initFollow();
}

/*
 * --INFO--
 * Address:	801E3858
 * Size:	000068
 */
void ActBreakRock::initFollow()
{
	FollowVectorFieldActionArg followArg(mRock);
	mFollowField->init(&followArg);
	mState = 1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void ActBreakRock::initGoto()
{
	GotoPosActionArg gotoArg;
	mGotoPos->init(&gotoArg);
	mState = 1;
}

/*
 * --INFO--
 * Address:	--------
 * Size:	0000E4
 * --INLINE--
 */
void ActBreakRock::initStickAttack()
{
	int animIdx = Game::IPikiAnims::NULLANIM;
	if (mRock->mObjectTypeID == OBJTYPE_Treasure) {
		animIdx = Game::IPikiAnims::HORU;
	}
	f32 attackDamage = mParent->getAttackDamage();
	StickAttackActionArg stickAttackArg(attackDamage, mRock, animIdx, STICKATK_Default);

	if (mRock->mObjectTypeID == OBJTYPE_Barrel || mRock->mObjectTypeID == OBJTYPE_BigFountain) {
		stickAttackArg.mObjType = STICKATK_BreakStone;

	} else if (mRock->mObjectTypeID == OBJTYPE_Treasure) {
		stickAttackArg.mObjType = STICKATK_Treasure;

	} else if (mRock->mObjectTypeID == OBJTYPE_Rock) {
		stickAttackArg.mObjType = STICKATK_Rock;
	}

	mStickAttack->init(&stickAttackArg);

	mState = 2;
}

/*
 * --INFO--
 * Address:	801E38C0
 * Size:	00032C
 */
int ActBreakRock::exec()
{
	if (!mRock->isAlive()) {
		return 0;
	}

	switch (mState) {
	case 2:
		mFollowField->exec();
		int stickResult = mStickAttack->exec();

		if (mRock->mObjectTypeID == OBJTYPE_Treasure) {
			mParent->startSound(mRock, PSSE_PK_VC_DIGGING, PSGame::SeMgr::SETSE_PikiCarry);
		}

		if (stickResult != 1) {
			initStickAttack();
		}
		break;

	case 1:
		int followResult = mFollowField->exec();
		if (followResult == 0) {
			initStickAttack();
		}
		break;

	case 0:
		int gotoResult = mGotoPos->exec();
		if (gotoResult == 0) {
			initStickAttack();
		}
		break;
	}

	return 1;
}

/*
 * --INFO--
 * Address:	801E3BEC
 * Size:	00005C
 */
void ActBreakRock::cleanup()
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
 * Address:	801E3C48
 * Size:	0000F0
 */
void ActBreakRock::platCallback(Game::Piki* p, Game::PlatEvent& platEvent)
{
	if (mState == 1) {
		initStickAttack();
	}
}

/*
 * --INFO--
 * Address:	801E3D38
 * Size:	0000FC
 */
void ActBreakRock::collisionCallback(Game::Piki* p, Game::CollEvent& collEvent)
{
	if (collEvent.mCollidingCreature == mRock && mState == 1) {
		initStickAttack();
	}
}

/*
 * --INFO--
 * Address:	801E3E34
 * Size:	000004
 */
void ActBreakRock::bounceCallback(Game::Piki*, Sys::Triangle*) { }

} // namespace PikiAI
