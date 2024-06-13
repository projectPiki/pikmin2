#include "Game/Piki.h"
#include "Game/Navi.h"
#include "PikiAI.h"
#include "Game/PikiMgr.h"
#include "Game/PikiState.h"
#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"
#include "Game/Entities/ItemGate.h"
#include "Game/Entities/ItemBridge.h"
#include "Game/Entities/ItemRock.h"
#include "Game/Entities/ItemWeed.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/Entities/ItemBigFountain.h"
#include "Game/Entities/ItemBarrel.h"
#include "Game/Entities/ItemTreasure.h"
#include "Game/Entities/ItemPlant.h"
#include "Game/Entities/ItemDengekiGate.h"
#include "Game/generalEnemyMgr.h"
#include "nans.h"

#define PIKI_BATTLE_RANGE   (70.0f)
#define PIKI_RESCUE_RANGE   (140.0f)
#define GATE_GAS_PIPE_RANGE (128.0f)

namespace Game {

u8 Piki::sGraspSituationOptimise = 1;

/**
 * @note Address: 0x801B07C0
 * @note Size: 0xBA0
 */
int Piki::graspSituation_Fast(Game::Creature** outTarget)
{
	if (moviePlayer && moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		*outTarget = nullptr;
		if (!isZikatu() || playData->isDemoFlag(DEMO_Reunite_Captains)) {
			return PikiAI::ACT_NULL;
		}
	}
	bool waterCheck;
	Creature* target = nullptr;
	f32 minDist      = 400.0f;
	int action       = PikiAI::ACT_NULL;
	bool isActionSet = false;
	waterCheck       = true;
	if (getKind() != Blue && getKind() != Bulbmin) {
		waterCheck = false;
	}

	Sys::Sphere sphere(mPosition, 300.0f);
	CellIteratorArg iterArg(sphere);
	iterArg.mOptimise = true;

	CellIterator iter(iterArg);
	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		switch (creature->mObjectTypeID) {
		case OBJTYPE_Piki: { // can we battle? can we rescue?
			Piki* otherPiki = static_cast<Piki*>(creature);

			// check if we can fight the piki.
			if (gameSystem->isVersusMode()) {          // need to be in vs mode to fight pikis
				if (creature->isAlive() &&             // is it alive
				    otherPiki->canVsBattle() &&        // is it battle-able
				    !otherPiki->getVsBattlePiki() &&   // is it not already fighting something else
				    otherPiki->getKind() != getKind()) // is it on the other team
				{
					f32 sphereDist = otherPiki->calcSphereDistance(this);
					if (sphereDist < PIKI_BATTLE_RANGE &&                          // needs to be close enough to target
					    ((isActionSet && (sphereDist < minDist)) || !isActionSet)) // have an action but piki is closer, OR no action yet
					{
						minDist     = sphereDist;
						target      = otherPiki;
						action      = PikiAI::ACT_Battle;
						isActionSet = true;
					}
				}

				break;
			}

			if (getKind() == Blue &&                        // can we rescue
			    creature->isAlive() &&                      // is piki alive
			    otherPiki->getStateID() == PIKISTATE_Drown) // is piki drowning
			{
				f32 sphereDist = otherPiki->calcSphereDistance(this);
				if (sphereDist < minDist
				    && sphereDist < PIKI_RESCUE_RANGE) { // are we closer to this than other targets, and are we within range
					minDist = sphereDist;
					target  = otherPiki;
					action  = PikiAI::ACT_Rescue;
				}
			}
		} break;

		case OBJTYPE_Pellet: { // can we pick up the pellet?
			Pellet* pellet   = static_cast<Pellet*>(creature);
			bool isGrabbable = true;
			if (pellet->getKind() == PelletType::Upgrade && gameSystem->isStoryMode()) {
				int configIdx = pellet->getConfigIndex();
				if (!playData->isFindItemDemoFlag(configIdx)) {
					isGrabbable = false;
				}
			}

			if (creature->isAlive() && !creature->mCaptureMatrix && pellet->getFreeStickSlot() != -1 && !pellet->discoverDisabled()
			    && (waterCheck || !waterCheck && !creature->inWater())) {
				if (isGrabbable && !isZikatu() && (!gameSystem->isVersusMode() || pellet->getBedamaColor() != getKind())) {
					f32 sphereDist = creature->calcSphereDistance(this);
					if (!isActionSet && sphereDist < minDist && sphereDist < pikiMgr->mParms->mPikiParms.mPelletSearchRange()) {
						minDist = sphereDist;
						target  = creature;
						action  = PikiAI::ACT_Transport;
					}
				}
			}
		} break;

		case OBJTYPE_Gate: { // can we attack the gate?
			if (!gasInvicible()) {
				ItemGate* gate    = static_cast<ItemGate*>(creature);
				bool isAttackable = true;
				if (gameSystem->isStoryMode() && !playData->hasMetPikmin(White) && getKind() != White) {
					Vector3f gatePos = gate->getPosition();
					Sys::Sphere gateSearchSphere(gatePos, GATE_GAS_PIPE_RANGE);
					CellIteratorArg gateIterArg(gateSearchSphere);
					CellIterator gateIter(gateIterArg);
					CI_LOOP(gateIter)
					{
						Creature* target = static_cast<Creature*>(*gateIter);
						if (target->isTeki() && target->isAlive()
						    && static_cast<EnemyBase*>(target)->getEnemyTypeID() == EnemyTypeID::EnemyID_GasHiba) {
							isAttackable = false;
							break;
						}
					}
				}

				if (gate->isAlive() && isAttackable) {
					f32 workDist = gate->getWorkDistance(mBoundingSphere);
					if (!isActionSet && workDist < minDist && workDist < pikiMgr->mParms->mPikiParms.mNectarRockRangeDuplicate()) {
						minDist = workDist;
						target  = gate;
						action  = PikiAI::ACT_BreakGate;
					}
				}
			}
		} break;

		case OBJTYPE_Bridge: { // can we attack the bridge?
			if (!gasInvicible()) {
				ItemBridge::Item* bridge = static_cast<ItemBridge::Item*>(creature);
				if (bridge->isAlive() && bridge->workable(mPosition)) {
					f32 workDist = bridge->getWorkDistance(mBoundingSphere);
					if (workDist < minDist && workDist < pikiMgr->mParms->mPikiParms.mBridgeSearchRange()) {
						minDist = workDist;
						target  = bridge;
						action  = PikiAI::ACT_Bridge;
					}
				}
			}
		} break;

		case OBJTYPE_Rock: { // can we attack the mold?
			ItemRock::Item* mold = static_cast<ItemRock::Item*>(creature);
			if (mold->isAlive()) {
				f32 workDist = mold->getWorkDistance(mBoundingSphere);
				if (workDist < minDist && workDist < pikiMgr->mParms->mPikiParms.mNectarRockSearchRange()) {
					minDist = workDist;
					target  = mold;
					action  = PikiAI::ACT_BreakRock;
				}
			}
		} break;

		case OBJTYPE_BigFountain: { // can we dig up the geyser?
			ItemBigFountain::Item* geyser = static_cast<ItemBigFountain::Item*>(creature);
			if (geyser->isAlive()) {
				f32 workDist = geyser->getWorkDistance(mBoundingSphere);
				if (workDist < minDist && workDist < pikiMgr->mParms->mPikiParms.mNectarRockSearchRange()) {
					minDist = workDist;
					target  = geyser;
					action  = PikiAI::ACT_BreakRock;
				}
			}
		} break;

		case OBJTYPE_Barrel: { // can we attack the clog?
			ItemBarrel::Item* clog = static_cast<ItemBarrel::Item*>(creature);
			if (clog->isAlive() && (waterCheck || (!waterCheck && !clog->inWater()))) {
				f32 workDist = clog->getWorkDistance(mBoundingSphere);
				if (workDist < minDist && workDist < pikiMgr->mParms->mPikiParms.mClogSearchRange()) {
					minDist = workDist;
					target  = clog;
					action  = PikiAI::ACT_BreakRock;
				}
			}
		} break;

		case OBJTYPE_Treasure: { // can we dig up treasure?
			ItemTreasure::Item* treasure = static_cast<ItemTreasure::Item*>(creature);
			if (!isActionSet && treasure->isAlive() && (treasure->isVisible() || (!treasure->isVisible() && getKind() == White))) {
				f32 workDist = treasure->getWorkDistance(mBoundingSphere);
				if (workDist < minDist && workDist < pikiMgr->mParms->mPikiParms.mBuriedTreasureSearchRange()) {
					minDist = workDist;
					target  = treasure;
					action  = PikiAI::ACT_BreakRock;
				}
			}
		} break;

		case OBJTYPE_Ujamushi:
		case OBJTYPE_Weed: { // can we pluck the grass/attack the ujadani?
			if (creature->isAlive() && creature->getFlockMgr() && creature->getFlockMgr()->isAttackable()) {
				f32 radius        = creature->getFlockMgr()->mActivationSpherePosition.mRadius;
				Vector3f flockPos = creature->getFlockMgr()->mActivationSpherePosition.mPosition;
				f32 dist          = flockPos.distance(mPosition);
				if (dist < radius) {
					minDist = dist;
					target  = creature;
					action  = PikiAI::ACT_Weed;
				}
			}
		} break;

		case OBJTYPE_Plant: { // can we harvest berries?
			ItemPlant::Plant* plant = static_cast<ItemPlant::Plant*>(creature);
			if (plant->isAlive()) {
				Vector3f plantPos = plant->getPosition();
				f32 dist          = plantPos.distance(mBoundingSphere.mPosition);
				if (dist < minDist && dist < pikiMgr->mParms->mPikiParms.mNectarRockSearchRange()) {
					minDist = dist;
					target  = plant;
					action  = PikiAI::ACT_Crop;
				}
			}
		} break;

		case OBJTYPE_Navi: { // can we attack the navi?
			if (gameSystem->isVersusMode()) {
				Navi* navi = static_cast<Navi*>(creature);
				if (navi->isAlive() && (int)navi->mNaviIndex == getKind()) {
					f32 sphereDist = navi->calcSphereDistance(this);
					Sys::Sphere naviSphere;
					navi->getBoundingSphere(naviSphere);
					f32 heightCheck = FABS(naviSphere.mPosition.y - mPosition.y) - (naviSphere.mRadius + mBoundingSphere.mRadius);
					if (sphereDist < minDist && sphereDist < pikiMgr->mParms->mPikiParms.mEnemySearchRange() && heightCheck < 30.0f) {
						minDist = sphereDist;
						target  = navi;
						action  = PikiAI::ACT_Attack;
					}
				}
			}
		} break;

		case OBJTYPE_Teki: { // can we attack the enemy?
			EnemyBase* enemy = static_cast<EnemyBase*>(creature);
			if (enemy->isAlive() && !enemy->isFlying() && enemy->isLivingThing() && (waterCheck || (!waterCheck && !enemy->inWater()))) {
				f32 sphereDist = enemy->calcSphereDistance(this);
				Sys::Sphere enemySphere;
				enemy->getBoundingSphere(enemySphere);
				f32 heightCheck = FABS(enemySphere.mPosition.y - mPosition.y) - (enemySphere.mRadius + mBoundingSphere.mRadius);
				if (sphereDist < minDist && sphereDist < pikiMgr->mParms->mPikiParms.mEnemySearchRange() && heightCheck < 30.0f) {
					minDist = sphereDist;
					target  = enemy;
					action  = PikiAI::ACT_Attack;
				}
			}
		} break;
		}
	}

	*outTarget = target;
	return action;
}

/**
 * @note Address: 0x801B1360
 * @note Size: 0x1A04
 */
int Piki::graspSituation(Game::Creature** outTarget)
{
	if (moviePlayer && moviePlayer->mDemoState != DEMOSTATE_Inactive) {
		*outTarget = nullptr;
		return PikiAI::ACT_NULL;
	}

	f32 minDist      = 100.0f;
	Creature* target = nullptr;
	int action       = PikiAI::ACT_NULL;

	// check if we can fight a piki.
	if (gameSystem->isVersusMode()) {
		Piki* targetPiki = nullptr;
		f32 minPikiDist  = PIKI_BATTLE_RANGE;
		Iterator<Piki> iter(pikiMgr);
		CI_LOOP(iter)
		{
			Piki* piki = *iter;
			if (piki->isAlive() && piki->canVsBattle() && !piki->getVsBattlePiki() && piki->getKind() != getKind()) {
				f32 sphereDist = piki->calcSphereDistance(this);
				if (sphereDist < minPikiDist) {
					targetPiki  = piki;
					minPikiDist = sphereDist;
				}
			}
		}

		if (targetPiki && minPikiDist < 100.0f) {
			*outTarget = targetPiki;
			return PikiAI::ACT_Battle;
		}
	}

	// check if we can rescue a piki.
	if (getKind() == Blue) {
		Piki* targetPiki = nullptr;
		f32 minPikiDist  = PIKI_RESCUE_RANGE;
		Iterator<Piki> iter(pikiMgr);
		CI_LOOP(iter)
		{
			Piki* piki = *iter;
			if (piki->isAlive() && piki->getStateID() == PIKISTATE_Drown) {
				f32 sphereDist = piki->calcSphereDistance(this);
				if (sphereDist < minPikiDist) {
					targetPiki  = piki;
					minPikiDist = sphereDist;
				}
			}
		}

		if (targetPiki && minPikiDist < 100.0f) {
			minDist = minPikiDist;
			target  = targetPiki;
			action  = PikiAI::ACT_Rescue;
		}
	}

	// check for pellets to grab
	Pellet* targetPellet = nullptr;
	f32 minPelDist       = pikiMgr->mParms->mPikiParms.mPelletSearchRange();

	PelletIterator pelIter;
	CI_LOOP(pelIter)
	{
		Pellet* pellet = *pelIter;
		if (pellet->isAlive() && !pellet->mCaptureMatrix && pellet->getFreeStickSlot() != -1 && !isZikatu()) {
			bool isGrabbable = true;
			if (pellet->getKind() == PelletType::Upgrade && gameSystem->isStoryMode()) {
				int configIdx = pellet->getConfigIndex();
				if (!playData->isFindItemDemoFlag(configIdx)) {
					isGrabbable = false;
				}
			}

			if ((!gameSystem->isVersusMode() || pellet->getBedamaColor() != getKind()) && !pellet->discoverDisabled() && isGrabbable) {
				f32 sphereDist = pellet->calcSphereDistance(this);
				if (sphereDist < minPelDist) {
					targetPellet = pellet;
					minPelDist   = sphereDist;
				}
			}
		}
	}

	if (targetPellet && minPelDist < minDist) {
		minDist = minPelDist;
		target  = targetPellet;
		action  = PikiAI::ACT_Transport;
	}

	// check for gates to attack (NB: no poison check?)
	if (itemGateMgr) {
		ItemGate* targetGate = nullptr;
		f32 minGateDist      = pikiMgr->mParms->mPikiParms.mNectarRockRangeDuplicate();
		Iterator<ItemGate> gateIter(&itemGateMgr->mNodeObjectMgr);
		CI_LOOP(gateIter)
		{
			ItemGate* gate = *gateIter;
			if (gate->isAlive()) {
				f32 workDist = gate->getWorkDistance(mBoundingSphere);
				if (workDist < minGateDist) {
					targetGate  = gate;
					minGateDist = workDist;
				}
			}
		}

		if (targetGate && minGateDist < minDist) {
			minDist = minGateDist;
			target  = targetGate;
			action  = PikiAI::ACT_BreakGate;
		}
	}

	// check for electric gates to attack
	if (ItemDengekiGate::mgr) {
		ItemGate* targetGate = nullptr;
		f32 minGateDist      = pikiMgr->mParms->mPikiParms.mNectarRockRangeDuplicate();
		Iterator<ItemGate> gateIter(ItemDengekiGate::mgr);
		CI_LOOP(gateIter)
		{
			ItemGate* gate = *gateIter;
			if (gate->isAlive()) {
				f32 workDist = gate->getWorkDistance(mBoundingSphere);
				if (workDist < minGateDist) {
					targetGate  = gate;
					minGateDist = workDist;
				}
			}
		}

		if (targetGate && minGateDist < minDist) {
			minDist = minGateDist;
			target  = targetGate;
			action  = PikiAI::ACT_BreakGate;
		}
	}

	// check for bridges to build
	if (ItemBridge::mgr) {
		ItemBridge::Item* targetBridge = nullptr;
		f32 minBridgeDist              = pikiMgr->mParms->mPikiParms.mBridgeSearchRange();
		Iterator<BaseItem> bridgeIter(ItemBridge::mgr);
		CI_LOOP(bridgeIter)
		{
			ItemBridge::Item* bridge = static_cast<ItemBridge::Item*>(*bridgeIter);
			if (bridge->isAlive() && bridge->workable(mPosition)) {
				f32 workDist = bridge->getWorkDistance(mBoundingSphere);
				if (workDist < minBridgeDist) {
					targetBridge  = bridge;
					minBridgeDist = workDist;
				}
			}
		}

		if (targetBridge && minBridgeDist < minDist) {
			minDist = minBridgeDist;
			target  = targetBridge;
			action  = PikiAI::ACT_Bridge;
		}
	}

	// check for mold to attack
	if (ItemRock::mgr) {
		ItemRock::Item* targetRock = nullptr;
		f32 minRockDist            = pikiMgr->mParms->mPikiParms.mNectarRockSearchRange();
		Iterator<BaseItem> rockIter(ItemRock::mgr);
		CI_LOOP(rockIter)
		{
			ItemRock::Item* rock = static_cast<ItemRock::Item*>(*rockIter);
			if (rock->isAlive()) {
				f32 workDist = rock->getWorkDistance(mBoundingSphere);
				if (workDist < minRockDist) {
					targetRock  = rock;
					minRockDist = workDist;
				}
			}
		}

		if (targetRock && minRockDist < minDist) {
			minDist = minRockDist;
			target  = targetRock;
			action  = PikiAI::ACT_BreakRock;
		}
	}

	// check for geysers to break
	if (ItemBigFountain::mgr) {
		ItemBigFountain::Item* targetGeyser = nullptr;
		f32 minGeyserDist                   = pikiMgr->mParms->mPikiParms.mNectarRockSearchRange();
		Iterator<BaseItem> geyserIter(ItemBigFountain::mgr);
		CI_LOOP(geyserIter)
		{
			ItemBigFountain::Item* geyser = static_cast<ItemBigFountain::Item*>(*geyserIter);
			if (geyser->isAlive()) {
				f32 workDist = geyser->getWorkDistance(mBoundingSphere);
				if (workDist < minGeyserDist) {
					targetGeyser  = geyser;
					minGeyserDist = workDist;
				}
			}
		}

		if (targetGeyser && minGeyserDist < minDist) {
			minDist = minGeyserDist;
			target  = targetGeyser;
			action  = PikiAI::ACT_BreakRock;
		}
	}

	// check for clogs to break
	if (ItemBarrel::mgr) {
		ItemBarrel::Item* targetClog = nullptr;
		f32 minClogDist              = pikiMgr->mParms->mPikiParms.mClogSearchRange();
		Iterator<BaseItem> clogIter(ItemBarrel::mgr);
		CI_LOOP(clogIter)
		{
			ItemBarrel::Item* clog = static_cast<ItemBarrel::Item*>(*clogIter);
			if (clog->isAlive()) {
				f32 workDist = clog->getWorkDistance(mBoundingSphere);
				if (workDist < minClogDist) {
					targetClog  = clog;
					minClogDist = workDist;
				}
			}
		}

		if (targetClog && minClogDist < minDist) {
			minDist = minClogDist;
			target  = targetClog;
			action  = PikiAI::ACT_BreakRock;
		}
	}

	// check for buried treasures to dig
	if (ItemTreasure::mgr) {
		ItemTreasure::Item* targetTreasure = nullptr;
		f32 minTreasureDist                = pikiMgr->mParms->mPikiParms.mBuriedTreasureSearchRange();
		Iterator<BaseItem> treasureIter(ItemTreasure::mgr);
		CI_LOOP(treasureIter)
		{
			ItemTreasure::Item* treasure = static_cast<ItemTreasure::Item*>(*treasureIter);
			if (treasure->isAlive() && (getKind() == White || treasure->isVisible())) {
				f32 workDist = treasure->getWorkDistance(mBoundingSphere);
				if (workDist < minTreasureDist) {
					targetTreasure  = treasure;
					minTreasureDist = workDist;
				}
			}
		}

		if (targetTreasure && minTreasureDist < minDist) {
			minDist = minTreasureDist;
			target  = targetTreasure;
			action  = PikiAI::ACT_BreakRock;
		}
	}

	// check for spiderworts to harvest berries from
	if (ItemPlant::mgr) {
		ItemPlant::Item* targetPlant = nullptr;
		f32 minPlantDist             = pikiMgr->mParms->mPikiParms.mSpiderWortSearchRange();
		Iterator<BaseItem> plantIter(ItemPlant::mgr);
		CI_LOOP(plantIter)
		{
			ItemPlant::Plant* plant = static_cast<ItemPlant::Plant*>(*plantIter);
			if (plant->isAlive()) {
				Vector3f plantPos = plant->getPosition();
				f32 dist          = plantPos.distance(mBoundingSphere.mPosition);
				if (dist < minPlantDist) {
					targetPlant  = plant;
					minPlantDist = dist;
				}
			}
		}

		if (targetPlant && minPlantDist < minDist) {
			minDist = minPlantDist;
			target  = targetPlant;
			action  = PikiAI::ACT_Crop;
		}
	}

	// check if we have an enemy to fight
	EnemyBase* targetTeki = nullptr;
	f32 minTekiDist       = pikiMgr->mParms->mPikiParms.mEnemySearchRange();
	GeneralMgrIterator<EnemyBase> tekiIter(generalEnemyMgr);
	CI_LOOP(tekiIter)
	{
		EnemyBase* enemy = tekiIter.getObject();
		if (enemy->isAlive() && !enemy->isFlying() && enemy->isLivingThing()) {
			f32 sphereDist = enemy->calcSphereDistance(this);
			if (sphereDist < minTekiDist) {
				targetTeki  = enemy;
				minTekiDist = sphereDist;
			}
		}
	}

	if (targetTeki && minTekiDist < minDist) {
		target = targetTeki;
		action = PikiAI::ACT_Attack;
	}

	*outTarget = target;
	return action;
}

/**
 * @note Address: 0x801B2DB0
 * @note Size: 0x7D4
 */
bool Piki::invokeAI(Game::CollEvent* event, bool check)
{
	Creature* creature = event->mCollidingCreature;
	bool formCheck     = true;
	if (getCurrActionID() == PikiAI::ACT_Formation
	    && static_cast<PikiAI::ActFormation*>(getCurrAction())->mSortState != FORMATION_SORT_FORMED) {
		formCheck = false;
	}

	if (formCheck && creature->isAlive() && creature->getFlockMgr() && creature->getFlockMgr()->isAttackable()) {
		PikiAI::ActWeedArg weedArg;
		weedArg.mWeed = static_cast<ItemWeed::Item*>(creature);
		return mBrain->start(PikiAI::ACT_Weed, &weedArg);
	}

	switch (creature->mObjectTypeID) {
	case OBJTYPE_Navi: {
		if (check && gameSystem->isVersusMode() && creature->isAlive() && static_cast<Navi*>(creature)->mNaviIndex == mPikiKind) {
			PikiAI::ActAttackArg attackArg;
			attackArg.mCreature = creature;
			attackArg.mCollPart = nullptr;

			return mBrain->start(PikiAI::ACT_Attack, &attackArg);
		}
	} break;

	case OBJTYPE_Honey: {
		if (getHappa() != Flower && static_cast<ItemHoney::Item*>(creature)->mHoneyType == HONEY_Y
		    && static_cast<ItemHoney::Item*>(creature)->absorbable()) {
			AbsorbStateArg absorbArg;
			absorbArg.mCreature = creature;
			mFsm->transit(this, PIKISTATE_Absorb, &absorbArg);
			return true;
		}
	} break;

	case OBJTYPE_Piki: {
		if (gameSystem->isVersusMode() && creature->isAlive() && static_cast<Piki*>(creature)->canVsBattle()
		    && !static_cast<Piki*>(creature)->getVsBattlePiki() && static_cast<Piki*>(creature)->getKind() != getKind()) {
			PikiAI::ActBattleArg battleArg(static_cast<Piki*>(creature));
			return mBrain->start(PikiAI::ACT_Battle, &battleArg);
		}
	} break;

	case OBJTYPE_Pellet: {
		Pellet* pellet = static_cast<Pellet*>(creature);
		if (check && pellet->isAlive() && !isZikatu()) {
			if (!gameSystem->isVersusMode() || pellet->getBedamaColor() != getKind()) {
				if (pellet->getTotalPikmins() < pellet->getPelletConfigMax() && !pellet->discoverDisabled()) {
					bool upgradeReady = true;
					if (pellet->getKind() == PelletType::Upgrade && gameSystem->isStoryMode()) {
						int configIdx = pellet->getConfigIndex();
						if (!playData->isFindItemDemoFlag(configIdx)) {
							upgradeReady = false;
						}
					}

					if (upgradeReady) {
						PikiAI::ActTransportArg transportArg;
						setActTransportArg(transportArg);
						transportArg.mPellet = pellet;

						return mBrain->start(PikiAI::ACT_Transport, &transportArg);
					}
				}
			}
		}
	} break;

	case OBJTYPE_Teki: {
		if (check && creature->isLivingThing() && creature->isAlive()) {
			CollPart* part = event->mCollisionObj;
			PikiAI::ActAttackArg attackArg;
			attackArg.mCreature = creature;
			attackArg.mCollPart = part;
			return mBrain->start(PikiAI::ACT_Attack, &attackArg);
		}

		if (static_cast<EnemyBase*>(creature)->getEnemyTypeID() == EnemyTypeID::EnemyID_Bomb) {
			creature->isAlive(); // hm.
		}
	} break;

	case OBJTYPE_Gate: {
		ItemGate* gate = static_cast<ItemGate*>(creature);
		if (check) {
			bool isAttackable = true;
			if (gameSystem->isStoryMode() && !playData->hasMetPikmin(White) && getKind() != White) {
				Vector3f gatePos = gate->getPosition();
				Sys::Sphere searchSphere(gatePos, GATE_GAS_PIPE_RANGE);
				CellIteratorArg iterArg(searchSphere);
				CellIterator iter(iterArg);
				CI_LOOP(iter)
				{
					Creature* target = static_cast<Creature*>(*iter);
					if (target->isTeki() && target->isAlive()
					    && static_cast<EnemyBase*>(target)->getEnemyTypeID() == EnemyTypeID::EnemyID_GasHiba) {
						isAttackable = false;
						break;
					}
				}
			}

			if (isAttackable) {
				PikiAI::ActBreakGateArg breakGateArg;
				breakGateArg.mGate = gate;

				return mBrain->start(PikiAI::ACT_BreakGate, &breakGateArg);
			}
		}
	} break;

	case OBJTYPE_Rock:
	case OBJTYPE_Barrel:
	case OBJTYPE_Treasure: {
		if (check) {
			if (creature->mObjectTypeID == OBJTYPE_Treasure && getKind() != White
			    && !static_cast<ItemTreasure::Item*>(creature)->isVisible()) {
				return false;
			}

			PikiAI::ActBreakRockArg breakRockArg;
			breakRockArg.mRock = static_cast<BaseItem*>(creature);
			return mBrain->start(PikiAI::ACT_BreakRock, &breakRockArg);
		}

		if (creature->mObjectTypeID == OBJTYPE_Treasure && getKind() == White && formCheck) {
			PikiAI::ActBreakRockArg breakRockArg;
			breakRockArg.mRock = static_cast<BaseItem*>(creature);
			return mBrain->start(PikiAI::ACT_BreakRock, &breakRockArg);
		}
	} break;

	case OBJTYPE_BigFountain: {
		if (check && creature->isAlive()) {
			PikiAI::ActBreakRockArg breakRockArg;
			breakRockArg.mRock = static_cast<BaseItem*>(creature);
			return mBrain->start(PikiAI::ACT_BreakRock, &breakRockArg);
		}
	} break;

	case OBJTYPE_Plant: {
		if (check) {
			PikiAI::ActCropArg cropArg;
			cropArg.mCreature = creature;
			return mBrain->start(PikiAI::ACT_Crop, &cropArg);
		}
	} break;

	case OBJTYPE_Bridge: {
		ItemBridge::Item* bridge = static_cast<ItemBridge::Item*>(creature);
		if (bridge->isAlive() && bridge->workable(mPosition)) {
			PikiAI::ActBreakRockArg bridgeArg;
			bridgeArg.mRock = bridge;
			return mBrain->start(PikiAI::ACT_BreakRock, &bridgeArg);
		}
	} break;
	}

	return false;
}

/**
 * @note Address: 0x801B3584
 * @note Size: 0x2C4
 */
bool Piki::invokeAI(Game::PlatEvent* event)
{
	BaseItem* item = event->mInstance->mItem;

	switch (item->mObjectTypeID) {
	case OBJTYPE_Gate:
		if (event->mInstance->mId.match('gate', '*') || event->mInstance->mId.match('elec', '*')) {
			if (gasInvicible()) {
				return false;
			}

			if (gameSystem->isStoryMode() && !playData->hasMetPikmin(White) && getKind() != White) {
				Vector3f itemPos = item->getPosition();

				Sys::Sphere sphere(itemPos, GATE_GAS_PIPE_RANGE);

				CellIteratorArg iterArg(sphere);
				CellIterator iter(iterArg);

				CI_LOOP(iter)
				{
					Creature* creature = static_cast<Creature*>(*iter);
					if (creature->isTeki() && creature->isAlive()
					    && static_cast<EnemyBase*>(creature)->getEnemyTypeID() == EnemyTypeID::EnemyID_GasHiba) {
						return false;
					}
				}
			}
			PikiAI::ActBreakGateArg breakGateArg;
			breakGateArg.mGate = static_cast<ItemGate*>(item);
			return mBrain->start(PikiAI::ACT_BreakGate, &breakGateArg);
		}
		break;

	case OBJTYPE_Bridge:
		if (FABS(event->mNormal.y) < 0.2f) {
			ItemBridge::Item* bridge = static_cast<ItemBridge::Item*>(item);
			if (bridge->isAlive() && bridge->workable(mPosition)) {
				PikiAI::ActBridgeArg bridgeArg;
				bridgeArg.mBridge = static_cast<ItemBridge::Item*>(item); // sure.
				return mBrain->start(PikiAI::ACT_Bridge, &bridgeArg);
			}
		}
		break;

	case OBJTYPE_BigFountain:
		if (item->isAlive()) {
			PikiAI::ActBreakRockArg breakRockArg;
			breakRockArg.mRock = item;
			return mBrain->start(PikiAI::ACT_BreakRock, &breakRockArg);
		}
		break;
	}

	return false;
}

/**
 * @note Address: 0x801B3848
 * @note Size: 0xB0
 */
bool Piki::invokeAIFree(Game::Piki::InvokeAIFreeArg& arg)
{
	sys->mTimers->_start("invokeAI-f", true);
	if (arg.mDoForceInvoke || mPikiUpdateContext.updatable()) {
		bool result = checkInvokeAI(arg.mDoSimpleCheck);
		sys->mTimers->_stop("invokeAI-f");
		return result;
	}
	sys->mTimers->_stop("invokeAI-f");
	return false;
}

/**
 * @note Address: 0x801B38F8
 * @note Size: 0x310
 */
bool Piki::checkInvokeAI(bool isSimpleCheck)
{
	Game::Creature* target = nullptr;
	int action;
	if (sGraspSituationOptimise) {
		action = graspSituation_Fast(&target);
	} else {
		action = graspSituation(&target);
	}

	if (isSimpleCheck) {
		return action != PikiAI::ACT_NULL;
	}

	if (!target) {
		return false;
	}

	switch (action) {
	case PikiAI::ACT_Battle:
		P2ASSERTLINE(1529, target->isPiki());

		PikiAI::ActBattleArg battleArg(static_cast<Piki*>(target));
		return mBrain->start(action, &battleArg);

	case PikiAI::ACT_Transport:
		PikiAI::ActTransportArg transportArg;
		if (setActTransportArg(transportArg)) {
			transportArg.mPellet = static_cast<Pellet*>(target);
			return mBrain->start(action, &transportArg);
		}

		return true;
	case PikiAI::ACT_Attack:
		PikiAI::ActAttackArg attackArg;
		attackArg.mCreature = target;
		attackArg.mCollPart = nullptr;
		return mBrain->start(action, &attackArg);

	case PikiAI::ACT_Rescue:
		PikiAI::CreatureActionArg creatureArg(target);
		return mBrain->start(action, &creatureArg);

	case PikiAI::ACT_BreakGate:
		PikiAI::ActBreakGateArg breakGateArg;
		breakGateArg.mGate = static_cast<ItemGate*>(target);
		return mBrain->start(PikiAI::ACT_BreakGate, &breakGateArg);

	case PikiAI::ACT_Bridge:
		ItemBridge::Item* bridge = static_cast<ItemBridge::Item*>(target);
		if (target->isAlive() && bridge->workable(mPosition)) {
			PikiAI::ActBridgeArg bridgeArg;
			bridgeArg.mBridge = static_cast<ItemBridge::Item*>(target);
			return mBrain->start(PikiAI::ACT_Bridge, &bridgeArg);
		}

		return true;

	case PikiAI::ACT_BreakRock:
		PikiAI::ActBreakRockArg rockArg;
		rockArg.mRock = static_cast<ItemRock::Item*>(target);
		return mBrain->start(PikiAI::ACT_BreakRock, &rockArg);

	case PikiAI::ACT_Crop:
		PikiAI::ActCropArg cropArg;
		cropArg.mCreature = target;
		return mBrain->start(PikiAI::ACT_Crop, &cropArg);

	case PikiAI::ACT_Weed:
		PikiAI::ActWeedArg weedArg;
		weedArg.mWeed = static_cast<ItemWeed::Item*>(target);
		return mBrain->start(PikiAI::ACT_Weed, &weedArg);
	}

	return false;
}

/**
 * @note Address: 0x801B3C08
 * @note Size: 0x54
 */
bool Piki::invokeAI()
{
	bool result = checkInvokeAI(false);
	if (!result) {
		mBrain->start(PikiAI::ACT_Free, nullptr);
		return false;
	}
	return true;
}

/**
 * @note Address: 0x801B3C5C
 * @note Size: 0x28
 */
bool Piki::setActTransportArg(PikiAI::ActTransportArg& actTransportArg)
{
	actTransportArg.mGoal          = nullptr;
	actTransportArg.mUnusedPos     = Vector3f(0.0f); // unused
	actTransportArg.mUnusedSlotVal = -1;             // unused
	return true;
}

} // namespace Game
