#include "types.h"
#include "Game/Interaction.h"
#include "Game/Piki.h"
#include "Game/PikiState.h"
#include "PikiAI.h"
#include "Game/GameSystem.h"
#include "Game/Navi.h"
#include "Game/EnemyBase.h"
#include "Game/PlatInstance.h"
#include "Game/CurrTriInfo.h"
#include "Game/MapMgr.h"
#include "Game/Entities/ItemPikihead.h"
#include "Game/PikiMgr.h"
#include "Dolphin/rand.h"
#include "Game/DeathMgr.h"
#include "JSystem/JMath.h"
#include "Container.h"
#include "Game/Entities/ItemCave.h"
#include "Game/MoviePlayer.h"
#include "Game/GameSystem.h"
#include "nans.h"

namespace Game {

static const int unusedInteractPikiArray[] = { 0, 0, 0 };

static const char interactPikiName[] = "interactPiki";

/*
 * --INFO--
 * Address:	80192C84
 * Size:	0000E4
 */
bool InteractFueFuki::actPiki(Game::Piki* piki)
{
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	if (piki->m_brain->m_actionId == PikiAI::ACT_TEKI || !piki->isPikmin()) {
		return false;
	}
	if (piki->m_currentState->callable()) {
		PikiAI::CreatureActionArg fueFukiArg = m_creature;
		piki->m_brain->start(PikiAI::ACT_TEKI, &fueFukiArg);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80192D68
 * Size:	000BD0
 */

inline bool vsFlute(Piki* p, Navi* n)
{
	bool val = false;
	if (gameSystem->isVersusMode()) {
		int pikiKind = p->m_pikiKind;
		// piki->m_pikiKind == navi->m_naviIndex; ????????????
		val = ((pikiKind == Red && n->m_naviIndex == 1) || (pikiKind == Blue && n->m_naviIndex == 0));
	}
	return val;
}

bool InteractFue::actPiki(Game::Piki* piki)
{
	if (gameSystem->m_mode == GSM_STORY_MODE && gameSystem->m_timeMgr->m_dayCount == 0 && !playData->isDemoFlag(DEMO_Reunite_Captains)) {
		// the check for if it is day 1 and the captains are separated
		if (m_creature->isNavi()) {
			Navi* navi = static_cast<Navi*>(m_creature);
			if (navi->m_naviIndex == 0 && !piki->wasZikatu()) {
				return false;
			}
			if (navi->m_naviIndex == 1 && piki->wasZikatu()) {
				return false;
			}
		}
	}

	float z;
	if (piki->isZikatu()) {
		int pikiKind = piki->m_pikiKind;
		if (pikiKind == Purple) {
			if (piki->getStateID() != PIKISTATE_Holein) {
				Vector3f pikiPos = piki->getPosition();
				Vector3f closestCavePos;
				float closestHoleDist               = FLOAT_DIST_MAX;
				Container<BaseItem>* iCaveContainer = ItemCave::mgr;
				Iterator<BaseItem> iCave(iCaveContainer);
				CI_LOOP(iCave)
				{
					BaseItem* cave   = *iCave;
					Vector3f cavePos = cave->getPosition();
					f32 distance     = _distanceBetween(cavePos, pikiPos);
					if (distance < closestHoleDist) {
						closestHoleDist = distance;
						closestCavePos  = cavePos;
					}
				}
				HoleinStateArg holeInArg;
				holeInArg.m_position = closestCavePos;
				piki->m_fsm->transit(piki, PIKISTATE_Holein, &holeInArg);
				return false;
			}
		} else if (!(moviePlayer->m_demoState || (u32)pikiKind - 1 > Red && (int)pikiKind != Blue)) {

			piki->setZikatu(false);
			GameStat::zikatuPikis.dec((int)piki->m_pikiKind);
			if (!playData->isDemoFlag(DEMO_Meet_Red_Pikmin) && (int)piki->m_pikiKind == Red) {
				if (gameSystem->m_section->getTimerType() != 4) {
					gameSystem->m_section->enableTimer(1.2f, 4);
				}
			}
			if (!playData->hasBootContainer((u32)piki->m_pikiKind)) { // might be u32 param then
				char* cutscenes[3] = { "g21_meet_bluepikmin", "g03_meet_redpikmin", "g1F_meed_yellowpikmin" };
				MoviePlayArg movieArg(cutscenes[piki->m_pikiKind], nullptr, nullptr, 0);
				movieArg.setTarget(piki);
				if ((int)piki->m_pikiKind == Red) {
					Iterator<Piki> iPiki = pikiMgr;
					CI_LOOP(iPiki)
					{
						Piki* currPiki = *iPiki;
						if ((int)currPiki->m_pikiKind == (int)piki->m_pikiKind) {
							currPiki->movie_begin(false);
						}
					}
				}

				moviePlayer->m_targetObject = piki;
				if ((int)piki->m_pikiKind != Red) {
					moviePlayer->play(movieArg);
					playData->setMeetPikmin(piki->m_pikiKind);
				}

				playData->setContainer(piki->m_pikiKind);
				playData->setBootContainer(piki->m_pikiKind);
			}

		} else if ((int)pikiKind == Bulbmin) {
			if (gameSystem->isFlag(GAMESYS_Unk6) && !playData->isDemoFlag(DEMO_Discover_Bulbmin)) { // broken demo likely
				playData->setDemoFlag(DEMO_Discover_Bulbmin);
				MoviePlayArg bulbminArg("X13_exp_leafchappy", nullptr, nullptr, 0);
				bulbminArg.setTarget(piki);
				moviePlayer->m_targetObject = piki;
				moviePlayer->play(bulbminArg);
			}

		} else {
			return false;
		}
	} // end if Zikatu

	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	if (!m_creature->isNavi()) {
		return false;
	}
	if (!(piki->m_flags.typeView & 0x2)) {
		return false;
	}

	int actionID = piki->m_brain->m_actionId;
	PikiState* currState;
	Navi* navi = static_cast<Navi*>(m_creature);

	piki->getStateID(); // nice going dumbass

	currState = piki->m_currentState;

	bool callable;
	if (actionID == PikiAI::ACT_TEKI) {
		bool pikiChappyCalled;
		if (currState->m_id != PIKISTATE_Panic) {
			return false;
		}
		callable = true;
		if (BaseHIOParms::sTekiChappyFlag && piki->m_fakePikiFlags.typeView & 0x100) {
			RESET_FLAG(piki->m_fakePikiFlags.typeView, 0x100);
			GameStat::alivePikis.inc(piki);
		}

	} else {
		callable = currState->callable();
	}

	if (!vsFlute(piki, navi)) {
		currState->onFlute(piki, (Navi*)m_creature);
	}
	if (!currState->dead() && callable) {
		if (actionID != PikiAI::ACT_FORMATION || (actionID == PikiAI::ACT_FORMATION && currState->m_id == PIKISTATE_Emotion)
		    || (_08 && piki->m_navi != m_creature && actionID == 0)) {
			Navi* vsNavi = (Navi*)m_creature;
			if (gameSystem->isVersusMode()) {
				int pikiColor = piki->m_pikiKind;
				if ((pikiColor == Red && vsNavi->m_naviIndex == 1) || (pikiColor == Blue && vsNavi->m_naviIndex == 0)) {
					return false;
				}
			}
			if (piki->getCurrAction()) {
				piki->getCurrAction()->cleanup();
				piki->clearCurrAction();
			}
			piki->m_navi = (Navi*)m_creature;
			piki->m_fsm->transit(piki, PIKISTATE_LookAt, nullptr);
			if ((int)piki->m_pikiKind == Bulbmin && !playData->isDemoFlag(DEMO_Discover_Bulbmin)) {
				playData->setDemoFlag(DEMO_Discover_Bulbmin);
				MoviePlayArg bulbminArg("x13_exp_leafchappy", nullptr, nullptr, 0);
				bulbminArg.setTarget(piki);
				moviePlayer->m_targetObject = piki;
				moviePlayer->play(bulbminArg);
			}
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	80193938
 * Size:	00015C
 */
bool InteractDope::actPiki(Game::Piki* piki)
{
	PikiState* currState = piki->m_currentState;
	if (m_sprayType != SPRAY_TYPE_BITTER && currState->dopable() && !piki->doped()) {
		DopeStateArg spicyArg;
		spicyArg._00 = m_sprayType;
		piki->m_fsm->transit(piki, PIKISTATE_Dope, &spicyArg);
		return true;
	}
	if (gameSystem->isVersusMode() && m_sprayType == SPRAY_TYPE_BITTER) {
		if (m_creature->isNavi()) {
			Navi* navi = static_cast<Navi*>(m_creature);
			if (piki->m_pikiKind == navi->m_naviIndex && !currState->dead()) {
				FallMeckStateArg bitterArg;
				bitterArg._00 = true;
				piki->m_fsm->transit(piki, PIKISTATE_FallMeck, &bitterArg);
				return true;
			}
		}
	} else if (piki->doped()) {
		piki->extendDopeTime();
	}
	return false;
}

/*
 * --INFO--
 * Address:	80193A94
 * Size:	000100
 */
bool InteractWind::actPiki(Game::Piki* piki)
{
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	int pikiKind = piki->m_pikiKind;
	if (pikiKind == Purple) {
		return false;
	}
	if (piki->m_currentState->m_id == PIKISTATE_KokeDamage) {
		return false;
	}
	if (piki->m_currentState->dead()) {
		return false;
	}
	BlowStateArg windArg(m_direction, 0.0f, false, 2, m_creature);
	piki->m_fsm->transit(piki, PIKISTATE_Blow, &windArg);
	return true;
}

/*
 * --INFO--
 * Address:	80193B94
 * Size:	000120
 */
bool InteractHanaChirashi::actPiki(Game::Piki* piki)
{
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	int pikiKind = piki->m_pikiKind;
	if (pikiKind == Purple) {
		int pikiHappa = piki->m_happaKind;
		if (pikiHappa >= Bud) {
			efx::createSimpleChiru(*piki->m_effectsObj->_0C, piki->m_effectsObj->_08);
			piki->startSound(PSSE_PK_FLOWER_FALL_VOICE, true);
			piki->m_happaKind = Leaf;
		}
		return false;
	}
	if (piki->m_currentState->dead()) {
		return false;
	}
	BlowStateArg witherArg(m_direction, 1.0f, false, 6, m_creature);
	piki->m_fsm->transit(piki, PIKISTATE_Blow, &witherArg);
	return true;
}

/*
 * --INFO--
 * Address:	80193CB4
 * Size:	00015C
 */
bool InteractBomb::actPiki(Game::Piki* piki)
{
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	if (!(gameSystem->m_flags & 0x20)) {
		return false;
	}
	if (piki->m_currentState->dead()) {
		return false;
	}

	if (m_creature->isTeki()) { // I assume this is for piklopedia stuff
		EnemyBase* teki = static_cast<EnemyBase*>(m_creature);
		piki->setTekiKillID(teki->getEnemyTypeID());
	} else {
		piki->m_tekiKillID = -1;
	}
	BlowStateArg bombArg(m_direction, 0.0f, true, 2, m_creature);
	if (!piki->isPikmin()) {
		bombArg.m_isLethal = false;
	}
	piki->m_fsm->transit(piki, PIKISTATE_Blow, &bombArg);
	return true;
}

/*
 * --INFO--
 * Address:	80193E10
 * Size:	000114
 */
bool InteractDenki::actPiki(Game::Piki* piki)
{
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	PikiState* currState = piki->m_currentState;
	if (m_creature->isTeki()) {
		EnemyBase* teki = static_cast<EnemyBase*>(m_creature);
		piki->setTekiKillID(teki->getEnemyTypeID());
	} else {
		piki->m_tekiKillID = -1;
	}
	int pikiKind = piki->m_pikiKind;
	if (pikiKind != Yellow && pikiKind != Bulbmin) {
		if (currState && currState->transittable(PIKISTATE_DenkiDying)) {
			piki->m_fsm->transit(piki, PIKISTATE_DenkiDying, nullptr);
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	80193F24
 * Size:	0000A0
 */
bool InteractFallMeck::actPiki(Game::Piki* piki)
{
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	PikiState* currState = piki->m_currentState;
	if (currState && currState->transittable(PIKISTATE_FallMeck)) {
		piki->m_fsm->transit(piki, PIKISTATE_FallMeck, nullptr);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80193FC4
 * Size:	000288
 */
bool InteractBury::actPiki(Game::Piki* piki)
{
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	if (GameStat::mePikis >= 99) {
		return false;
	}

	Sys::Triangle* currTriangle = piki->_248;
	if (!currTriangle) {
		CurrTriInfo currTriInfo;
		currTriInfo.m_position = piki->getPosition();
		mapMgr->getCurrTri(currTriInfo);
		currTriangle = currTriInfo.m_triangle;
	}

	if (currTriangle && !currTriangle->m_code.isBald() && piki->might_bury() && ItemPikihead::mgr) {
		PikiMgr::mBirthMode          = 1;
		ItemPikihead::Item* pikiHead = (ItemPikihead::Item*)ItemPikihead::mgr->birth();
		PikiMgr::mBirthMode          = 0;
		Vector3f pikiPos             = piki->getPosition();
		float minY                   = mapMgr->getMinY(pikiPos);
		pikiPos.y                    = minY;
		if (pikiHead) {
			efx::createSimplePkAp(pikiPos);
			ItemPikihead::InitArg pikiHeadInit((EPikiKind)piki->getKind(), Vector3f::zero, 1, 2, -1.0f);
			pikiHead->init(&pikiHeadInit);
			pikiHead->setPosition(pikiPos, false);
			CreatureKillArg pikiCleanup(1);
			piki->kill(&pikiCleanup);
			return true;
		}
	}
	piki->m_fsm->transit(piki, PIKISTATE_Walk, nullptr);
	return false;
}

/*
 * --INFO--
 * Address:	8019424C
 * Size:	0000DC
 */
bool InteractSuikomi_Test::actPiki(Game::Piki* piki)
{
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	if (m_creature->isTeki()) {
		EnemyBase* teki = static_cast<EnemyBase*>(m_creature);
		piki->setTekiKillID(teki->getEnemyTypeID());
	} else {
		piki->m_tekiKillID = -1;
	}
	SuikomiStateArg suikomiArg(m_creature, _14, m_collPart);
	//               gottem
	piki->m_fsm->transit(piki, PIKISTATE_Suikomi, &suikomiArg);
	return true;
}

/*
 * --INFO--
 * Address:	80194328
 * Size:	000118
 */
bool InteractFire::actPiki(Game::Piki* piki)
{
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	PikiState* currState = piki->m_currentState;
	int pikiKind         = piki->m_pikiKind;
	if (currState && currState->transittable(PIKISTATE_Panic)) {
		if (pikiKind != Red && pikiKind != Bulbmin) {
			if (m_creature->isTeki()) {
				EnemyBase* teki = static_cast<EnemyBase*>(m_creature);
				piki->setTekiKillID(teki->getEnemyTypeID());
			} else {
				piki->m_tekiKillID = -1;
			}
			PanicStateArg panicFire;
			panicFire.m_panicType = PIKIPANIC_Fire;
			piki->m_fsm->transit(piki, PIKISTATE_Panic, &panicFire);
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	80194440
 * Size:	000134
 */

// what happened to this poor function??
bool InteractAstonish::actPiki(Game::Piki* piki)
{
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	PikiState* currState = piki->m_currentState;

	if (currState && currState->transittable(PIKISTATE_Panic)) {
		int pikiKind = piki->m_pikiKind;
		if (pikiKind != Purple) {
			PanicStateArg panicAstonish;
			panicAstonish.m_panicType = PIKIPANIC_Panic; // should probably get renamed to astonish
			if (m_creature && m_creature->isTeki()) {
				EnemyBase* teki = static_cast<EnemyBase*>(m_creature);
				piki->setTekiKillID(teki->getEnemyTypeID());
			} else {
				piki->m_tekiKillID = -1;
			}
			piki->m_fsm->transit(piki, PIKISTATE_Panic, &panicAstonish);
			return true;
		}
	}
	currState->transittable(PIKISTATE_Panic); // ???????
	return false;
}

/*
 * --INFO--
 * Address:	80194574
 * Size:	000118
 */
bool InteractBubble::actPiki(Game::Piki* piki)
{
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	PikiState* currState = piki->m_currentState;
	int pikiKind         = piki->m_pikiKind;
	if (currState && currState->transittable(PIKISTATE_Panic)) {
		if (pikiKind != Blue && pikiKind != Bulbmin) {
			if (m_creature->isTeki()) {
				EnemyBase* teki = static_cast<EnemyBase*>(m_creature);
				piki->setTekiKillID(teki->getEnemyTypeID());
			} else {
				piki->m_tekiKillID = -1;
			}
			PanicStateArg panicBubble;
			panicBubble.m_panicType = PIKIPANIC_Water;
			piki->m_fsm->transit(piki, PIKISTATE_Panic, &panicBubble);
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	8019468C
 * Size:	00013C
 */
bool InteractGas::actPiki(Game::Piki* piki)
{
	if (piki->gasInvicible()) {
		return false;
	}
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}

	PikiState* currState = piki->m_currentState;
	int pikiKind         = piki->m_pikiKind;
	if (currState && currState->transittable(PIKISTATE_Panic)) {
		if (pikiKind != White && pikiKind != Bulbmin) {
			if (m_creature && m_creature->isTeki()) {
				EnemyBase* teki = static_cast<EnemyBase*>(m_creature);
				piki->setTekiKillID(teki->getEnemyTypeID());
			} else {
				piki->m_tekiKillID = -1;
			}
			PanicStateArg panicGas;
			panicGas.m_panicType = PIKIPANIC_Gas;
			piki->m_fsm->transit(piki, PIKISTATE_Panic, &panicGas);
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	801947C8
 * Size:	0000C0
 */
bool InteractBattle::actPiki(Game::Piki* piki)
{
	if (piki->getCurrActionID() != PikiAI::ACT_BATTLE) {
		P2ASSERTLINE(1073, m_creature->isPiki());
		PikiAI::ActBattleArg battleArg(static_cast<Piki*>(m_creature), true);
		piki->m_brain->start(PikiAI::ACT_BATTLE, &battleArg);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80194888
 * Size:	000120
 */
bool InteractPress::actPiki(Game::Piki* piki)
{
	if (!(gameSystem->m_flags & 0x20) && gameSystem->m_isInCave) {
		return false;
	}
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	if (piki->m_currentState->pressable()) {
		if (m_creature->isTeki()) {
			EnemyBase* teki = static_cast<EnemyBase*>(m_creature);
			piki->setTekiKillID(teki->getEnemyTypeID());
		} else {
			piki->m_tekiKillID = -1;
		}
		piki->m_fsm->transit(piki, PIKISTATE_Pressed, nullptr);
		piki->startSound(PSSE_PK_VC_PRESSED, false); // why isn't this in PikiPressedState's init?
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	801949A8
 * Size:	000260
 */
bool InteractFlick::actPiki(Game::Piki* piki)
{
	if (piki->m_currentState->invincible(piki)) {
		return false;
	}
	if (piki->getStateID() == PIKISTATE_Flick) {
		return false;
	}
	PikiState* currState = piki->m_currentState;
	if (currState->dead() || currState->m_id == PIKISTATE_Panic) {
		return false;
	}
	float angle = m_angle;
	if (angle < -10.0f) {
		angle = piki->getFaceDir();
	}
	float cosVal = -pikmin2_cosf(angle);
	float sinVal = -pikmin2_sinf(angle);

	float magnetude = m_knockback * 0.1f * randFloat() + m_knockback;

	Vector3f knockbackDir = Vector3f(sinVal * magnetude, 50.0f * randFloat() + 100.0f, cosVal * magnetude);
	BlowStateArg flickArg(knockbackDir, 0.1f, false, 1, m_creature);
	piki->startSound(PSSE_PK_VC_SCATTERED, false);
	piki->m_fsm->transit(piki, PIKISTATE_Blow, &flickArg);
	return true;
}

/*
 * --INFO--
 * Address:	80194C08
 * Size:	0002EC
 */
bool InteractSwallow::actPiki(Game::Piki* piki)
{
	if (piki->isZikatu() || !playData->isDemoFlag(DEMO_Reunite_Captains)) {
		Vector3f pikiPos  = piki->getPosition();
		Vector3f enemyPos = m_creature->getPosition();
		Vector3f posDiff;
		posDiff.x = pikiPos.x - enemyPos.x;
		posDiff.z = pikiPos.z - enemyPos.z;
		posDiff.y = pikiPos.y - enemyPos.y;
		_normaliseXZ(posDiff); // nearly every normalize function works
		float angle = JMath::atanTable_.atan2_(posDiff.x, posDiff.z);
		InteractFlick swallowFlick(m_creature, 50.0f, 0.0f, -angle);
		piki->stimulate(swallowFlick);
		return;
	}

	if (piki->m_currentState->invincible(piki)) {
		return false;
	}

	CollPart* collpart = m_collPart;
	bool isMouth       = collpart && collpart->isMouth();
	P2ASSERTLINE(1180, isMouth);
	if (!piki->m_currentState->dead()) {
		piki->startStickMouth(m_creature, m_collPart);

		int anim = 0x8;
		if (_10 == 1) {
			anim = 0x3f;
			piki->startSound(PSSE_PK_SE_STABBED, false);
		}

		if (m_creature->isTeki()) {
			EnemyBase* teki = static_cast<EnemyBase*>(m_creature);
			piki->setTekiKillID(teki->getEnemyTypeID());
		} else {
			piki->m_tekiKillID = -1;
		}
		SwallowedStateArg swallowArg;
		swallowArg.m_animIdx = anim;
		piki->startSound(PSSE_PK_VC_EATEN, false);
		piki->m_fsm->transit(piki, PIKISTATE_Swallowed, &swallowArg);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80194EF4
 * Size:	0000CC
 */
bool InteractKill::actPiki(Game::Piki* piki)
{
	CreatureKillArg* killArg = m_killArg;
	if (!killArg || (killArg && !(killArg->_04 & 1))) {
		if (m_creature->isTeki()) {
			EnemyBase* teki = static_cast<EnemyBase*>(m_creature);
			piki->setTekiKillID(teki->getEnemyTypeID());
		} else {
			piki->m_tekiKillID = -1;
		}
		if (piki->isPikmin()) {
			DeathMgr::inc(0);
		}
	}
	piki->kill(m_killArg);
	return true;
}

} // namespace Game
