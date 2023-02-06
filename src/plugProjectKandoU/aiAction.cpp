#include "types.h"
#include "PikiAI.h"
#include "Game/Piki.h"
#include "Game/PikiState.h"
#include "Game/Navi.h"
#include "nans.h"

namespace PikiAI {
/*
 * --INFO--
 * Address:	80196A18
 * Size:	00001C
 */
Action::Action(Game::Piki* piki)
{
	mParent = piki;
	mName   = "Action";
}

/*
 * --INFO--
 * Address:	80196A34
 * Size:	000030
 */
void Action::getInfo(char* dest) { sprintf(dest, "%s", mName); }

/*
 * --INFO--
 * Address:	80196A64
 * Size:	000280
 */
Brain::Brain(Game::Piki* piki)
{
	mActionCnt = 0;
	mActions   = new Action*[ACT_ActionCount];
	addAction(new ActFormation(piki));
	addAction(new ActFree(piki));
	addAction(new ActEnter(piki));
	addAction(new ActExit(piki));
	addAction(new ActTransport(piki));
	addAction(new ActAttack(piki));
	addAction(new ActBreakGate(piki));
	addAction(new ActBreakRock(piki));
	addAction(new ActCrop(piki));
	addAction(new ActWeed(piki));
	addAction(new ActBridge(piki));
	addAction(new ActTeki(piki));
	addAction(new ActRescue(piki));
	addAction(new ActBattle(piki));

	mActionId = ACT_NULL;
	mPiki     = piki;
}

/*
 * --INFO--
 * Address:	80196CE4
 * Size:	00001C
 */
void Brain::addAction(Action* action) { mActions[mActionCnt++] = action; }

/*
 * --INFO--
 * Address:	80196D00
 * Size:	000024
 */
Action* Brain::getCurrAction()
{
	if (mActionId != ACT_NULL) {
		return mActions[mActionId];
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	80196D24
 * Size:	000258
 */
void Brain::exec()
{
	Action* action;
	if (mActionId != ACT_NULL) {
		action = mActions[mActionId];
	} else {
		action = nullptr;
	}

	if (action) {
		int code = action->exec();
		if (code == ACTEXEC_Success) {
			Game::Piki::InvokeAIFreeArg freeArg(0, 0);
			freeArg._00 = 1;
			if (!mPiki->invokeAIFree(freeArg)) {
				switch (action->getNextAIType()) {
				case ACT_Formation:
					Game::Navi* navi = searchOrima();
					if (navi) {
						mPiki->mNavi = navi;
						ActFormationInitArg formationArg(navi);
						start(ACT_Formation, &formationArg);
					} else {
						start(ACT_Free, nullptr);
					}
					break;

				case ACT_Free:
					start(ACT_Free, nullptr);
					break;
				}
			}

			action->emotion_success();

		} else if (code == ACTEXEC_Fail) {
			Game::Piki::InvokeAIFreeArg freeArg(0, 0);
			freeArg._00 = 1;
			if (!mPiki->invokeAIFree(freeArg)) {
				switch (action->getNextAIType()) {
				case ACT_Formation:
					Game::Navi* navi = searchOrima();
					if (navi) {
						mPiki->mNavi = navi;
						ActFormationInitArg formationArg(navi);
						start(ACT_Formation, &formationArg);
					} else {
						start(ACT_Free, nullptr);
					}
					break;

				case ACT_Free:
					start(ACT_Free, nullptr);
					break;
				}
			}

			action->emotion_fail();
		}
	}
}

// /*
//  * --INFO--
//  * Address:	80196F7C
//  * Size:	000004
//  */
// void Action::emotion_fail() { }

// /*
//  * --INFO--
//  * Address:	80196F80
//  * Size:	000004
//  */
// void Action::emotion_success() { }

// /*
//  * --INFO--
//  * Address:	80196F84
//  * Size:	000008
//  */
// u32 Action::getNextAIType() { return ACT_Formation; }

// /*
//  * --INFO--
//  * Address:	80196F8C
//  * Size:	000008
//  */
// int Action::exec() { return ACTEXEC_Continue; }

/*
 * --INFO--
 * Address:	80196F94
 * Size:	000100
 */
bool Brain::start(int nextID, ActionArg* actionArg)
{
	if (!mPiki->isCreatureFlag(Game::CF_IS_ALIVE)) {
		mActionId = ACT_NULL;
		return;
	}

	Action* action;
	if (mActionId != ACT_NULL) {
		action = mActions[mActionId];
	} else {
		action = nullptr;
	}

	if (action) {
		action->cleanup();
	}

	mActionId = nextID;

	Action* nextAction;
	if (mActionId != ACT_NULL) {
		nextAction = mActions[mActionId];
	} else {
		nextAction = nullptr;
	}

	if (nextAction) {
		nextAction->init(actionArg);
	}

	if (!nextAction->applicable()) {
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	801970A0
 * Size:	000210
 */
Game::Navi* Brain::searchOrima()
{
	Game::CellIteratorArg iterArg;
	Vector3f pikiPos          = mPiki->getPosition();
	iterArg.mSphere.mPosition = pikiPos;
	iterArg.mSphere.mRadius   = 300.0f;

	Game::CellIterator iter(iterArg);
	f32 rad          = 300.0f;
	Game::Navi* navi = nullptr;
	CI_LOOP(iter)
	{
		Game::Creature* creature = static_cast<Game::Creature*>(*iter);
		if (creature->isNavi() && creature->isAlive()) {
			Vector3f naviPos = creature->getPosition();
			Vector3f sep     = Vector3f(iterArg.mSphere.mPosition.y - naviPos.y, iterArg.mSphere.mPosition.z - naviPos.z,
                                    iterArg.mSphere.mPosition.x - naviPos.x);
			f32 dist         = _length2(sep);
			if (dist < rad) {
				Game::Navi* curNavi = static_cast<Game::Navi*>(creature);

				// if we're in versus mode, make sure it's the correct captain
				if (Game::gameSystem->mMode == Game::GSM_VERSUS_MODE) {
					if (curNavi->mNaviIndex == 0) { // olimar needs red
						if ((int)mPiki->getKind() != Game::Red) {
							continue;
						}
					} else if ((int)mPiki->getKind() != Game::Blue) { // louie needs blue
						continue;
					}
				}

				if (curNavi->mController1) {
					rad  = dist;
					navi = curNavi;

				} else if (Game::gameSystem->mSection->mPrevNaviIdx == 0) {
					if (curNavi->mNaviIndex == 0) {
						rad  = dist;
						navi = curNavi;
					}

				} else if (curNavi->mNaviIndex == 1) {
					rad  = dist;
					navi = curNavi;
				}
			}
		}
	}

	return navi;
}
} // namespace PikiAI