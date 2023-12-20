#include "PikiAI.h"
#include "Game/Navi.h"
#include "nans.h"

namespace PikiAI {
/**
 * @note Address: 0x80196A18
 * @note Size: 0x1C
 */
Action::Action(Game::Piki* piki)
{
	mParent = piki;
	mName   = "Action";
}

/**
 * @note Address: 0x80196A34
 * @note Size: 0x30
 */
void Action::getInfo(char* dest) { sprintf(dest, "%s", mName); }

/**
 * @note Address: 0x80196A64
 * @note Size: 0x280
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

/**
 * @note Address: 0x80196CE4
 * @note Size: 0x1C
 */
void Brain::addAction(Action* action) { mActions[mActionCnt++] = action; }

/**
 * @note Address: 0x80196D00
 * @note Size: 0x24
 */
Action* Brain::getCurrAction()
{
	if (mActionId != ACT_NULL) {
		return mActions[mActionId];
	}
	return nullptr;
}

/**
 * @note Address: 0x80196D24
 * @note Size: 0x258
 *
 * Executes the current action of a Pikmin's AI and manages its behavior.
 *
 * Depending on the execution result, the Pikmin's AI free function activates and the next action is determined.
 * If the next action is ACT_Formation, the Pikmin goes into formation with a Player if found, otherwise the ACT_Free action is activated.
 * If the next action is ACT_Free, it's activated.
 * After the execution of the action, the corresponding emotion is triggered.
 */
void Brain::exec()
{
	Action* action = (mActionId != ACT_NULL) ? mActions[mActionId] : nullptr;

	if (action) {
		int code = action->exec();

		if (code == ACTEXEC_Success) {
			Game::Piki::InvokeAIFreeArg freeArg;
			freeArg.mDoForceInvoke = true;

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
			Game::Piki::InvokeAIFreeArg freeArg;
			freeArg.mDoForceInvoke = true;
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

/**
 * @note Address: 0x80196F94
 * @note Size: 0x100
 *
 * The function checks if the Pikmin is alive, cleans up the current action, and sets up the next action.
 * Returns `true` if the new action is applicable
 */
bool Brain::start(int nextID, ActionArg* actionArg)
{
	if (!mPiki->isCreatureFlag(Game::CF_IsAlive)) {
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

/**
 * @note Address: 0x801970A0
 * @note Size: 0x210
 *
 * Searches for a player within a radius of 300 units around the pikmin's position.
 * If the game is in versus mode, it ensures the pikmin and player's team's match (Olimar needs red, others need blue).
 * If a suitable 'Navi' is found, it updates the search radius to the current distance and sets this 'Navi' as the target.
 * Returns the found player or 'nullptr'.
 */
Game::Navi* Brain::searchOrima()
{
	Game::CellIteratorArg itSettings;
	Vector3f position            = mPiki->getPosition();
	itSettings.mSphere.mPosition = position;
	itSettings.mSphere.mRadius   = 300.0f;

	Game::CellIterator i(itSettings);
	f32 searchRadius         = 300.0f;
	Game::Navi* targetPlayer = nullptr;
	CI_LOOP(i)
	{
		Game::Creature* curCreature = static_cast<Game::Creature*>(*i);

		// Is the creature a player, and is that player alive?
		if (curCreature->isNavi() && curCreature->isAlive()) {
			Vector3f naviPos = curCreature->getPosition();
			Vector3f sep     = Vector3f(itSettings.mSphere.mPosition.y - naviPos.y, itSettings.mSphere.mPosition.z - naviPos.z,
                                    itSettings.mSphere.mPosition.x - naviPos.x);
			f32 distToPlayer = _length2(sep);
			if (distToPlayer < searchRadius) {
				Game::Navi* currentPlayer = static_cast<Game::Navi*>(curCreature);

				// If we're in versus mode, make sure it's the correct captain
				if (Game::gameSystem->mMode == Game::GSM_VERSUS_MODE) {
					if (currentPlayer->mNaviIndex == NAVIID_Olimar) { // Olimar is on red team
						if (mPiki->getKind() != Game::Red) {
							continue;
						}
					} else if (mPiki->getKind() != Game::Blue) { // Louie/President is on blue team
						continue;
					}
				}

				// The current active player takes precedent over anything else
				if (currentPlayer->mController1) {
					searchRadius = distToPlayer;
					targetPlayer = currentPlayer;

				} else if (Game::gameSystem->mSection->mPrevNaviIdx == NAVIID_Olimar) {
					if (currentPlayer->mNaviIndex == NAVIID_Olimar) {
						searchRadius = distToPlayer;
						targetPlayer = currentPlayer;
					}

				} else if (currentPlayer->mNaviIndex == NAVIID_Louie) {
					searchRadius = distToPlayer;
					targetPlayer = currentPlayer;
				}
			}
		}
	}

	return targetPlayer;
}
} // namespace PikiAI
