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
#include "Game/AIConstants.h"
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
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	if (piki->mBrain->mActionId == PikiAI::ACT_Teki || !piki->isPikmin()) {
		return false;
	}
	if (piki->mCurrentState->callable()) {
		PikiAI::CreatureActionArg fueFukiArg = mCreature;
		piki->mBrain->start(PikiAI::ACT_Teki, &fueFukiArg);
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
		int pikiKind = p->getKind();
		// piki->getKind() == navi->mNaviIndex; ????????????
		val = ((pikiKind == Red && n->mNaviIndex == 1) || (pikiKind == Blue && n->mNaviIndex == 0));
	}
	return val;
}

bool InteractFue::actPiki(Game::Piki* piki)
{
	if (gameSystem->isStoryMode() && gameSystem->mTimeMgr->mDayCount == 0 && !playData->isDemoFlag(DEMO_Reunite_Captains)) {
		// the check for if it is day 1 and the captains are separated
		if (mCreature->isNavi()) {
			Navi* navi = static_cast<Navi*>(mCreature);
			if (navi->mNaviIndex == 0 && !piki->wasZikatu()) {
				return false;
			}
			if (navi->mNaviIndex == 1 && piki->wasZikatu()) {
				return false;
			}
		}
	}

	if (piki->isZikatu()) {
		int pikiKind = piki->getKind();
		if (pikiKind == Purple) {
			if (piki->getStateID() != PIKISTATE_Holein) {
				Vector3f pikiPos = piki->getPosition();
				Vector3f closestCavePos;
				f32 closestHoleDist                 = FLOAT_DIST_MAX;
				Container<BaseItem>* iCaveContainer = ItemCave::mgr;
				Iterator<BaseItem> iCave(iCaveContainer);
				CI_LOOP(iCave)
				{
					BaseItem* cave   = *iCave;
					Vector3f cavePos = cave->getPosition();
					f32 distance     = cavePos.distance(pikiPos);
					if (distance < closestHoleDist) {
						closestHoleDist = distance;
						closestCavePos  = cavePos;
					}
				}
				HoleinStateArg holeInArg(closestCavePos);
				piki->mFsm->transit(piki, PIKISTATE_Holein, &holeInArg);
				return false;
			}
		} else if (!(moviePlayer->mDemoState || (u32)pikiKind - 1 > Red && pikiKind != Blue)) {
			piki->setZikatu(false);
			GameStat::zikatuPikis.dec(piki->getKind());
			if (!playData->isDemoFlag(DEMO_Meet_Red_Pikmin) && (piki->getKind() == Red)) {
				if (gameSystem->mSection->getTimerType() != 4) {
					gameSystem->mSection->enableTimer(1.2f, 4);
				}
			}
			if (!playData->hasBootContainer(piki->getKind())) {
				char* cutscenes[3] = { "g21_meet_bluepikmin", "g03_meet_redpikmin", "g1F_meet_yellowpikmin" };
				MoviePlayArg movieArg(cutscenes[piki->getKind()], nullptr, nullptr, 0);
				movieArg.setTarget(piki);
				if (piki->getKind() == Red) {
					Iterator<Piki> iPiki = pikiMgr;
					CI_LOOP(iPiki)
					{
						Piki* currPiki = *iPiki;
						if (currPiki->getKind() == piki->getKind()) {
							currPiki->movie_begin(false);
						}
					}
				}

				moviePlayer->mTargetObject = piki;
				if (piki->getKind() != Red) {
					moviePlayer->play(movieArg);
					playData->setMeetPikmin(piki->getKind());
				}

				playData->setContainer(piki->getKind());
				playData->setBootContainer(piki->getKind());
			}

		} else if (pikiKind == Bulbmin) {
			if (gameSystem->isFlag(GAMESYS_IsGameWorldActive) && !playData->isDemoFlag(DEMO_Discover_Bulbmin)) { // broken demo likely
				playData->setDemoFlag(DEMO_Discover_Bulbmin);
				MoviePlayArg bulbminArg("X13_exp_leafchappy", nullptr, nullptr, 0);
				bulbminArg.setTarget(piki);
				moviePlayer->mTargetObject = piki;
				moviePlayer->play(bulbminArg);
			}

		} else {
			return false;
		}
	} // end if Zikatu

	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	if (!mCreature->isNavi()) {
		return false;
	}
	if (!piki->mFlags.isSet(0x2)) {
		return false;
	}

	int actionID = piki->mBrain->mActionId;
	PikiState* currState;
	Navi* navi = static_cast<Navi*>(mCreature);

	piki->getStateID(); // nice going dumbass

	currState = piki->mCurrentState;

	bool callable;
	if (actionID == PikiAI::ACT_Teki) {
		bool pikiChappyCalled;
		if (currState->mId != PIKISTATE_Panic) {
			return false;
		}
		callable = true;
		if (BaseHIOParms::sTekiChappyFlag && piki->mFakePikiFlags.isSet(0x100)) {
			piki->mFakePikiFlags.unset(0x100);
			GameStat::alivePikis.inc(piki);
		}

	} else {
		callable = currState->callable();
	}

	if (!vsFlute(piki, navi)) {
		currState->onFlute(piki, (Navi*)mCreature);
	}
	if (!currState->dead() && callable) {
		if (actionID != PikiAI::ACT_Formation || (actionID == PikiAI::ACT_Formation && currState->mId == PIKISTATE_Emotion)
		    || (_08 && piki->mNavi != mCreature && actionID == 0)) {
			Navi* vsNavi = (Navi*)mCreature;
			if (gameSystem->isVersusMode()) {
				int pikiColor = piki->getKind();
				if ((pikiColor == Red && vsNavi->mNaviIndex == 1) || (pikiColor == Blue && vsNavi->mNaviIndex == 0)) {
					return false;
				}
			}
			if (piki->getCurrAction()) {
				piki->getCurrAction()->cleanup();
				piki->clearCurrAction();
			}
			piki->mNavi = (Navi*)mCreature;
			piki->mFsm->transit(piki, PIKISTATE_LookAt, nullptr);
			if (piki->getKind() == Bulbmin && !playData->isDemoFlag(DEMO_Discover_Bulbmin)) {
				playData->setDemoFlag(DEMO_Discover_Bulbmin);
				MoviePlayArg bulbminArg("x13_exp_leafchappy", nullptr, nullptr, 0);
				bulbminArg.setTarget(piki);
				moviePlayer->mTargetObject = piki;
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
	PikiState* currState = piki->mCurrentState;
	if (mSprayType != SPRAY_TYPE_BITTER && currState->dopable() && !piki->doped()) {
		DopeStateArg spicyArg;
		spicyArg._00 = mSprayType;
		piki->mFsm->transit(piki, PIKISTATE_Dope, &spicyArg);
		return true;
	}
	if (gameSystem->isVersusMode() && mSprayType == SPRAY_TYPE_BITTER) {
		if (mCreature->isNavi()) {
			Navi* navi = static_cast<Navi*>(mCreature);
			if (piki->mPikiKind == navi->mNaviIndex && !currState->dead()) { // regswap if getKind() is used
				FallMeckStateArg bitterArg;
				bitterArg._00 = true;
				piki->mFsm->transit(piki, PIKISTATE_FallMeck, &bitterArg);
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
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	int pikiKind = piki->getKind();
	if (pikiKind == Purple) {
		return false;
	}
	if (piki->mCurrentState->mId == PIKISTATE_KokeDamage) {
		return false;
	}
	if (piki->mCurrentState->dead()) {
		return false;
	}
	BlowStateArg windArg(mDirection, 0.0f, false, 2, mCreature);
	piki->mFsm->transit(piki, PIKISTATE_Blow, &windArg);
	return true;
}

/*
 * --INFO--
 * Address:	80193B94
 * Size:	000120
 */
bool InteractHanaChirashi::actPiki(Game::Piki* piki)
{
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	int pikiKind = piki->getKind();
	if (pikiKind == Purple) {
		int pikiHappa = piki->mHappaKind;
		if (pikiHappa >= Bud) {
			efx::createSimpleChiru(*piki->mEffectsObj->_0C, piki->mEffectsObj->mPikiColor);
			piki->startSound(PSSE_PK_FLOWER_FALL_VOICE, true);
			piki->mHappaKind = Leaf;
		}
		return false;
	}
	if (piki->mCurrentState->dead()) {
		return false;
	}
	BlowStateArg witherArg(mDirection, 1.0f, false, 6, mCreature);
	piki->mFsm->transit(piki, PIKISTATE_Blow, &witherArg);
	return true;
}

/*
 * --INFO--
 * Address:	80193CB4
 * Size:	00015C
 */
bool InteractBomb::actPiki(Game::Piki* piki)
{
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	if (!(gameSystem->isFlag(GAMESYS_IsGameWorldActive))) {
		return false;
	}
	if (piki->mCurrentState->dead()) {
		return false;
	}

	if (mCreature->isTeki()) { // I assume this is for piklopedia stuff
		EnemyBase* teki = static_cast<EnemyBase*>(mCreature);
		piki->setTekiKillID(teki->getEnemyTypeID());
	} else {
		piki->mTekiKillID = -1;
	}
	BlowStateArg bombArg(mDirection, 0.0f, true, 2, mCreature);
	if (!piki->isPikmin()) {
		bombArg.mIsLethal = false;
	}
	piki->mFsm->transit(piki, PIKISTATE_Blow, &bombArg);
	return true;
}

/*
 * --INFO--
 * Address:	80193E10
 * Size:	000114
 */
bool InteractDenki::actPiki(Game::Piki* piki)
{
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	PikiState* currState = piki->mCurrentState;
	if (mCreature->isTeki()) {
		EnemyBase* teki = static_cast<EnemyBase*>(mCreature);
		piki->setTekiKillID(teki->getEnemyTypeID());
	} else {
		piki->mTekiKillID = -1;
	}
	int pikiKind = piki->getKind();
	if (pikiKind != Yellow && pikiKind != Bulbmin) {
		if (currState && currState->transittable(PIKISTATE_DenkiDying)) {
			piki->mFsm->transit(piki, PIKISTATE_DenkiDying, nullptr);
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
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	PikiState* currState = piki->mCurrentState;
	if (currState && currState->transittable(PIKISTATE_FallMeck)) {
		piki->mFsm->transit(piki, PIKISTATE_FallMeck, nullptr);
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
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	if (GameStat::mePikis >= 99) {
		return false;
	}

	Sys::Triangle* currTriangle = piki->mFakePikiBounceTriangle;
	if (!currTriangle) {
		CurrTriInfo currTriInfo;
		currTriInfo.mPosition = piki->getPosition();
		mapMgr->getCurrTri(currTriInfo);
		currTriangle = currTriInfo.mTriangle;
	}

	if (currTriangle && !currTriangle->mCode.isBald() && piki->might_bury() && ItemPikihead::mgr) {
		PikiMgr::mBirthMode          = 1;
		ItemPikihead::Item* pikiHead = (ItemPikihead::Item*)ItemPikihead::mgr->birth();
		PikiMgr::mBirthMode          = 0;
		Vector3f pikiPos             = piki->getPosition();
		f32 minY                     = mapMgr->getMinY(pikiPos);
		pikiPos.y                    = minY;
		if (pikiHead) {
			efx::createSimplePkAp(pikiPos);
			ItemPikihead::InitArg pikiHeadInit((EPikiKind)piki->getKind(), Vector3f::zero, 1, 2, -1.0f);
			pikiHead->init(&pikiHeadInit);
			pikiHead->setPosition(pikiPos, false);
			CreatureKillArg pikiCleanup(CKILL_Unk1);
			piki->kill(&pikiCleanup);
			return true;
		}
	}
	piki->mFsm->transit(piki, PIKISTATE_Walk, nullptr);
	return false;
}

/*
 * --INFO--
 * Address:	8019424C
 * Size:	0000DC
 */
bool InteractSuikomi_Test::actPiki(Game::Piki* piki)
{
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	if (mCreature->isTeki()) {
		EnemyBase* teki = static_cast<EnemyBase*>(mCreature);
		piki->setTekiKillID(teki->getEnemyTypeID());
	} else {
		piki->mTekiKillID = -1;
	}
	SuikomiStateArg suikomiArg(mCreature, _14, mCollPart);
	//               gottem
	piki->mFsm->transit(piki, PIKISTATE_Suikomi, &suikomiArg);
	return true;
}

/*
 * --INFO--
 * Address:	80194328
 * Size:	000118
 */
bool InteractFire::actPiki(Game::Piki* piki)
{
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	PikiState* currState = piki->mCurrentState;
	int pikiKind         = piki->getKind();
	if (currState && currState->transittable(PIKISTATE_Panic)) {
		if (pikiKind != Red && pikiKind != Bulbmin) {
			if (mCreature->isTeki()) {
				EnemyBase* teki = static_cast<EnemyBase*>(mCreature);
				piki->setTekiKillID(teki->getEnemyTypeID());
			} else {
				piki->mTekiKillID = -1;
			}
			PanicStateArg panicFire;
			panicFire.mPanicType = PIKIPANIC_Fire;
			piki->mFsm->transit(piki, PIKISTATE_Panic, &panicFire);
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
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	PikiState* currState = piki->mCurrentState;
	if (currState && currState->transittable(PIKISTATE_Panic)) {
		int pikiKind = piki->getKind();
		if (pikiKind != Purple) {
			PanicStateArg panicAstonish;
			panicAstonish.mPanicType = PIKIPANIC_Panic; // should probably get renamed to astonish
			if (mCreature && mCreature->isTeki()) {
				EnemyBase* teki = static_cast<EnemyBase*>(mCreature);
				piki->setTekiKillID(teki->getEnemyTypeID());
			} else {
				piki->mTekiKillID = -1;
			}
			piki->mFsm->transit(piki, PIKISTATE_Panic, &panicAstonish);
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
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	PikiState* currState = piki->mCurrentState;
	int pikiKind         = piki->getKind();
	if (currState && currState->transittable(PIKISTATE_Panic)) {
		if (pikiKind != Blue && pikiKind != Bulbmin) {
			if (mCreature->isTeki()) {
				EnemyBase* teki = static_cast<EnemyBase*>(mCreature);
				piki->setTekiKillID(teki->getEnemyTypeID());
			} else {
				piki->mTekiKillID = -1;
			}
			PanicStateArg panicBubble;
			panicBubble.mPanicType = PIKIPANIC_Water;
			piki->mFsm->transit(piki, PIKISTATE_Panic, &panicBubble);
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
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}

	PikiState* currState = piki->mCurrentState;
	int pikiKind         = piki->getKind();
	if (currState && currState->transittable(PIKISTATE_Panic)) {
		if (pikiKind != White && pikiKind != Bulbmin) {
			if (mCreature && mCreature->isTeki()) {
				EnemyBase* teki = static_cast<EnemyBase*>(mCreature);
				piki->setTekiKillID(teki->getEnemyTypeID());
			} else {
				piki->mTekiKillID = -1;
			}
			PanicStateArg panicGas;
			panicGas.mPanicType = PIKIPANIC_Gas;
			piki->mFsm->transit(piki, PIKISTATE_Panic, &panicGas);
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
	if (piki->getCurrActionID() != PikiAI::ACT_Battle) {
		P2ASSERTLINE(1073, mCreature->isPiki());
		PikiAI::ActBattleArg battleArg(static_cast<Piki*>(mCreature), true);
		piki->mBrain->start(PikiAI::ACT_Battle, &battleArg);
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
	if (!(gameSystem->isFlag(GAMESYS_IsGameWorldActive)) && gameSystem->mIsInCave) {
		return false;
	}
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	if (piki->mCurrentState->pressable()) {
		if (mCreature->isTeki()) {
			EnemyBase* teki = static_cast<EnemyBase*>(mCreature);
			piki->setTekiKillID(teki->getEnemyTypeID());
		} else {
			piki->mTekiKillID = -1;
		}
		piki->mFsm->transit(piki, PIKISTATE_Pressed, nullptr);
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
	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}
	if (piki->getStateID() == PIKISTATE_Flick) {
		return false;
	}
	PikiState* currState = piki->mCurrentState;
	if (currState->dead() || currState->mId == PIKISTATE_Panic) {
		return false;
	}
	f32 angle = mAngle;
	if (angle < -10.0f) {
		angle = piki->getFaceDir();
	}
	f32 cosVal = -cosf(angle);
	f32 sinVal = -sinf(angle);

	f32 magnitude = mKnockback * 0.1f * randFloat() + mKnockback;

	Vector3f knockbackDir = Vector3f(sinVal * magnitude, 50.0f * randFloat() + 100.0f, cosVal * magnitude);
	BlowStateArg flickArg(knockbackDir, 0.1f, false, 1, mCreature);
	piki->startSound(PSSE_PK_VC_SCATTERED, false);
	piki->mFsm->transit(piki, PIKISTATE_Blow, &flickArg);
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
		Vector3f enemyPos = mCreature->getPosition();
		Vector3f posDiff;
		posDiff.x = pikiPos.x - enemyPos.x;
		posDiff.z = pikiPos.z - enemyPos.z;
		posDiff.y = pikiPos.y - enemyPos.y;
		_normaliseXZ(posDiff); // nearly every normalize function works
		f32 angle = JMath::atanTable_.atan2_(posDiff.x, posDiff.z);
		InteractFlick swallowFlick(mCreature, 50.0f, 0.0f, -angle);
		piki->stimulate(swallowFlick);
		return;
	}

	if (piki->mCurrentState->invincible(piki)) {
		return false;
	}

	CollPart* collpart = mCollPart;
	bool isMouth       = collpart && collpart->isMouth();
	P2ASSERTLINE(1180, isMouth);
	if (!piki->mCurrentState->dead()) {
		piki->startStickMouth(mCreature, mCollPart);

		int anim = 0x8;
		if (_10 == 1) {
			anim = 0x3f;
			piki->startSound(PSSE_PK_SE_STABBED, false);
		}

		if (mCreature->isTeki()) {
			EnemyBase* teki = static_cast<EnemyBase*>(mCreature);
			piki->setTekiKillID(teki->getEnemyTypeID());
		} else {
			piki->mTekiKillID = -1;
		}
		SwallowedStateArg swallowArg;
		swallowArg.mAnimIdx = anim;
		piki->startSound(PSSE_PK_VC_EATEN, false);
		piki->mFsm->transit(piki, PIKISTATE_Swallowed, &swallowArg);
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
	CreatureKillArg* killArg = mKillArg;
	if (!killArg || (killArg && !(killArg->isFlag(CKILL_Unk1)))) {
		if (mCreature->isTeki()) {
			EnemyBase* teki = static_cast<EnemyBase*>(mCreature);
			piki->setTekiKillID(teki->getEnemyTypeID());
		} else {
			piki->mTekiKillID = -1;
		}
		if (piki->isPikmin()) {
			DeathMgr::inc(0);
		}
	}
	piki->kill(mKillArg);
	return true;
}

} // namespace Game
