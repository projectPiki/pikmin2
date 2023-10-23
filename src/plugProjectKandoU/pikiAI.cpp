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

/*
 * --INFO--
 * Address:	801B07C0
 * Size:	000BA0
 */
int Piki::graspSituation_Fast(Game::Creature** outTarget)
{
	if (moviePlayer && moviePlayer->mDemoState != 0) {
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
	if ((int)mPikiKind != Blue && (int)mPikiKind != Bulbmin) {
		waterCheck = false;
	}

	Sys::Sphere sphere(mPosition, 300.0f);
	CellIteratorArg iterArg(sphere);
	iterArg.mIsSphereCollisionDisabled = true;

	CellIterator iter(iterArg);
	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		switch (creature->mObjectTypeID) {
		case OBJTYPE_Piki: { // can we battle? can we rescue?
			Piki* otherPiki = static_cast<Piki*>(creature);

			// check if we can fight the piki.
			if (gameSystem->isVersusMode()) {                    // need to be in vs mode to fight pikis
				if (creature->isAlive() &&                       // is it alive
				    otherPiki->canVsBattle() &&                  // is it battle-able
				    !otherPiki->getVsBattlePiki() &&             // is it not already fighting something else
				    (int)otherPiki->getKind() != (int)getKind()) // is it on the other team
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

			if ((int)getKind() == Blue &&                   // can we rescue
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
			if (pellet->getKind() == PELTYPE_UPGRADE && gameSystem->isStoryMode()) {
				int configIdx = pellet->getConfigIndex();
				if (!playData->isFindItemDemoFlag(configIdx)) {
					isGrabbable = false;
				}
			}

			if (creature->isAlive() && !creature->mCaptureMatrix && pellet->getFreeStickSlot() != -1 && !pellet->discoverDisabled()
			    && (waterCheck || !waterCheck && !creature->inWater())) {
				if (isGrabbable && !isZikatu() && (!gameSystem->isVersusMode() || pellet->checkBedamaColor((int)getKind()))) {
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
				if (gameSystem->isStoryMode() && !playData->hasMetPikmin(White) && (int)getKind() != White) {
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
			if (!isActionSet && treasure->isAlive() && (treasure->isVisible() || (!treasure->isVisible() && (int)getKind() == White))) {
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
				f32 radius        = creature->getFlockMgr()->_0C.mRadius;
				Vector3f flockPos = creature->getFlockMgr()->_0C.mPosition;
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
				if (navi->isAlive() && (int)navi->mNaviIndex == (int)getKind()) {
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

/*
 * --INFO--
 * Address:	801B1360
 * Size:	001A04
 */
int Piki::graspSituation(Game::Creature** outTarget)
{
	if (moviePlayer && moviePlayer->mDemoState != 0) {
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
			if (piki->isAlive() && piki->canVsBattle() && !piki->getVsBattlePiki() && (int)piki->getKind() != (int)getKind()) {
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
	if ((int)getKind() == Blue) {
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
			if (pellet->getKind() == PELTYPE_UPGRADE && gameSystem->isStoryMode()) {
				int configIdx = pellet->getConfigIndex();
				if (!playData->isFindItemDemoFlag(configIdx)) {
					isGrabbable = false;
				}
			}

			if ((!gameSystem->isVersusMode() || getKind() != pellet->getBedamaColor()) && !pellet->discoverDisabled() && isGrabbable) {
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
			if (treasure->isAlive() && ((int)getKind() == White || treasure->isVisible())) {
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
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stmw     r24, 0xe0(r1)
	lwz      r5, moviePlayer__4Game@sda21(r13)
	mr       r31, r3
	mr       r28, r4
	cmplwi   r5, 0
	beq      lbl_801B13B0
	lwz      r0, 0x18(r5)
	cmpwi    r0, 0
	beq      lbl_801B13B0
	li       r0, 0
	li       r3, -1
	stw      r0, 0(r28)
	b        lbl_801B2D40

	lbl_801B13B0:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r29, 0
	lfs      f31, lbl_80519364@sda21(r2)
	li       r30, -1
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801B1618
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0xd0(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0xc4(r1)
	li       r27, 0
	lfs      f30, lbl_80519350@sda21(r2)
	stw      r0, 0xc8(r1)
	stw      r3, 0xcc(r1)
	bne      lbl_801B1414
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc8(r1)
	b        lbl_801B15D8

	lbl_801B1414:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc8(r1)
	b        lbl_801B1480

	lbl_801B142C:
	lwz      r3, 0xcc(r1)
	lwz      r4, 0xc8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xd0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B15D8
	lwz      r3, 0xcc(r1)
	lwz      r4, 0xc8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc8(r1)

	lbl_801B1480:
	lwz      r12, 0xc4(r1)
	addi     r3, r1, 0xc4
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B142C
	b        lbl_801B15D8

	lbl_801B14A0:
	lwz      r3, 0xcc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r26, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B151C
	mr       r3, r26
	bl       canVsBattle__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B151C
	mr       r3, r26
	bl       getVsBattlePiki__Q24Game4PikiFv
	cmplwi   r3, 0
	bne      lbl_801B151C
	lbz      r3, 0x2b8(r26)
	lbz      r0, 0x2b8(r31)
	cmpw     r3, r0
	beq      lbl_801B151C
	mr       r3, r26
	mr       r4, r31
	bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
	fcmpo    cr0, f1, f30
	bge      lbl_801B151C
	mr       r27, r26
	fmr      f30, f1

	lbl_801B151C:
	lwz      r0, 0xd0(r1)
	cmplwi   r0, 0
	bne      lbl_801B1548
	lwz      r3, 0xcc(r1)
	lwz      r4, 0xc8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc8(r1)
	b        lbl_801B15D8

	lbl_801B1548:
	lwz      r3, 0xcc(r1)
	lwz      r4, 0xc8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc8(r1)
	b        lbl_801B15BC

	lbl_801B1568:
	lwz      r3, 0xcc(r1)
	lwz      r4, 0xc8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xd0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B15D8
	lwz      r3, 0xcc(r1)
	lwz      r4, 0xc8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc8(r1)

	lbl_801B15BC:
	lwz      r12, 0xc4(r1)
	addi     r3, r1, 0xc4
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1568

	lbl_801B15D8:
	lwz      r3, 0xcc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc8(r1)
	cmplw    r4, r3
	bne      lbl_801B14A0
	cmplwi   r27, 0
	beq      lbl_801B1618
	lfs      f0, lbl_80519364@sda21(r2)
	fcmpo    cr0, f30, f0
	bge      lbl_801B1618
	stw      r27, 0(r28)
	li       r3, 0xd
	b        lbl_801B2D40

	lbl_801B1618:
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 0
	bne      lbl_801B1850
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0xc0(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0xb4(r1)
	li       r27, 0
	lfs      f30, lbl_80519354@sda21(r2)
	stw      r0, 0xb8(r1)
	stw      r3, 0xbc(r1)
	bne      lbl_801B166C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xb8(r1)
	b        lbl_801B1810

	lbl_801B166C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xb8(r1)
	b        lbl_801B16D8

	lbl_801B1684:
	lwz      r3, 0xbc(r1)
	lwz      r4, 0xb8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B1810
	lwz      r3, 0xbc(r1)
	lwz      r4, 0xb8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xb8(r1)

	lbl_801B16D8:
	lwz      r12, 0xb4(r1)
	addi     r3, r1, 0xb4
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1684
	b        lbl_801B1810

	lbl_801B16F8:
	lwz      r3, 0xbc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r26, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1754
	mr       r3, r26
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 0xa
	bne      lbl_801B1754
	mr       r3, r26
	mr       r4, r31
	bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
	fcmpo    cr0, f1, f30
	bge      lbl_801B1754
	mr       r27, r26
	fmr      f30, f1

	lbl_801B1754:
	lwz      r0, 0xc0(r1)
	cmplwi   r0, 0
	bne      lbl_801B1780
	lwz      r3, 0xbc(r1)
	lwz      r4, 0xb8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xb8(r1)
	b        lbl_801B1810

	lbl_801B1780:
	lwz      r3, 0xbc(r1)
	lwz      r4, 0xb8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xb8(r1)
	b        lbl_801B17F4

	lbl_801B17A0:
	lwz      r3, 0xbc(r1)
	lwz      r4, 0xb8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B1810
	lwz      r3, 0xbc(r1)
	lwz      r4, 0xb8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xb8(r1)

	lbl_801B17F4:
	lwz      r12, 0xb4(r1)
	addi     r3, r1, 0xb4
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B17A0

	lbl_801B1810:
	lwz      r3, 0xbc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xb8(r1)
	cmplw    r4, r3
	bne      lbl_801B16F8
	cmplwi   r27, 0
	beq      lbl_801B1850
	lfs      f0, lbl_80519364@sda21(r2)
	fcmpo    cr0, f30, f0
	bge      lbl_801B1850
	fmr      f31, f30
	mr       r29, r27
	li       r30, 0xc

	lbl_801B1850:
	lwz      r4, pikiMgr__4Game@sda21(r13)
	addi     r3, r1, 0xa4
	li       r27, 0
	lwz      r4, 0x6c(r4)
	lfs      f30, 0x9a8(r4)
	bl       __ct__Q24Game14PelletIteratorFv
	addi     r3, r1, 0xa4
	bl       first__Q24Game14PelletIteratorFv
	b        lbl_801B19A4

	lbl_801B1874:
	addi     r3, r1, 0xa4
	bl       __ml__Q24Game14PelletIteratorFv
	lwz      r12, 0(r3)
	mr       r26, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B199C
	lwz      r0, 0xb8(r26)
	cmplwi   r0, 0
	bne      lbl_801B199C
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x16c(r12)
	mtctr    r12
	bctrl
	extsh    r0, r3
	cmpwi    r0, -1
	beq      lbl_801B199C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B199C
	mr       r3, r26
	li       r24, 1
	lwz      r12, 0(r26)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_801B1938
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_801B1938
	mr       r3, r26
	bl       getConfigIndex__Q24Game6PelletFv
	mr       r0, r3
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r0
	bl       isFindItemDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B1938
	li       r24, 0

	lbl_801B1938:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801B1968
	mr       r3, r26
	lbz      r25, 0x2b8(r31)
	lwz      r12, 0(r26)
	lwz      r12, 0x1e8(r12)
	mtctr    r12
	bctrl
	cmpw     r3, r25
	beq      lbl_801B199C

	lbl_801B1968:
	mr       r3, r26
	bl       discoverDisabled__Q24Game6PelletFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B199C
	clrlwi.  r0, r24, 0x18
	beq      lbl_801B199C
	mr       r3, r26
	mr       r4, r31
	bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
	fcmpo    cr0, f1, f30
	bge      lbl_801B199C
	mr       r27, r26
	fmr      f30, f1

	lbl_801B199C:
	addi     r3, r1, 0xa4
	bl       next__Q24Game14PelletIteratorFv

	lbl_801B19A4:
	addi     r3, r1, 0xa4
	bl       isDone__Q24Game14PelletIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1874
	cmplwi   r27, 0
	beq      lbl_801B19D0
	fcmpo    cr0, f30, f31
	bge      lbl_801B19D0
	fmr      f31, f30
	mr       r29, r27
	li       r30, 4

	lbl_801B19D0:
	lwz      r3, itemGateMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801B1C08
	lwz      r5, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__26Iterator<Q24Game8ItemGate>"@ha
	li       r0, 0
	addi     r3, r3, 0x30
	lwz      r5, 0x6c(r5)
	cmplwi   r0, 0
	addi     r4, r4, "__vt__26Iterator<Q24Game8ItemGate>"@l
	li       r26, 0
	lfs      f30, 0x9f8(r5)
	stw      r4, 0x94(r1)
	stw      r0, 0xa0(r1)
	stw      r0, 0x98(r1)
	stw      r3, 0x9c(r1)
	bne      lbl_801B1A2C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x98(r1)
	b        lbl_801B1BCC

	lbl_801B1A2C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x98(r1)
	b        lbl_801B1A98

	lbl_801B1A44:
	lwz      r3, 0x9c(r1)
	lwz      r4, 0x98(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B1BCC
	lwz      r3, 0x9c(r1)
	lwz      r4, 0x98(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x98(r1)

	lbl_801B1A98:
	lwz      r12, 0x94(r1)
	addi     r3, r1, 0x94
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1A44
	b        lbl_801B1BCC

	lbl_801B1AB8:
	lwz      r3, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r25, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1B10
	mr       r3, r25
	addi     r4, r31, 0x218
	lwz      r12, 0(r25)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	fcmpo    cr0, f1, f30
	bge      lbl_801B1B10
	mr       r26, r25
	fmr      f30, f1

	lbl_801B1B10:
	lwz      r0, 0xa0(r1)
	cmplwi   r0, 0
	bne      lbl_801B1B3C
	lwz      r3, 0x9c(r1)
	lwz      r4, 0x98(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x98(r1)
	b        lbl_801B1BCC

	lbl_801B1B3C:
	lwz      r3, 0x9c(r1)
	lwz      r4, 0x98(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x98(r1)
	b        lbl_801B1BB0

	lbl_801B1B5C:
	lwz      r3, 0x9c(r1)
	lwz      r4, 0x98(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B1BCC
	lwz      r3, 0x9c(r1)
	lwz      r4, 0x98(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x98(r1)

	lbl_801B1BB0:
	lwz      r12, 0x94(r1)
	addi     r3, r1, 0x94
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1B5C

	lbl_801B1BCC:
	lwz      r3, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x98(r1)
	cmplw    r4, r3
	bne      lbl_801B1AB8
	cmplwi   r26, 0
	beq      lbl_801B1C08
	fcmpo    cr0, f30, f31
	bge      lbl_801B1C08
	fmr      f31, f30
	mr       r29, r26
	li       r30, 6

	lbl_801B1C08:
	lwz      r3, mgr__Q24Game15ItemDengekiGate@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801B1E44
	lwz      r4, pikiMgr__4Game@sda21(r13)
	li       r26, 0
	lwz      r4, 0x6c(r4)
	lfs      f30, 0x9f8(r4)
	beq      lbl_801B1C2C
	addi     r3, r3, 0x30

	lbl_801B1C2C:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8ItemGate>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8ItemGate>"@l
	stw      r0, 0x90(r1)
	cmplwi   r0, 0
	stw      r4, 0x84(r1)
	stw      r0, 0x88(r1)
	stw      r3, 0x8c(r1)
	bne      lbl_801B1C68
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x88(r1)
	b        lbl_801B1E08

	lbl_801B1C68:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x88(r1)
	b        lbl_801B1CD4

	lbl_801B1C80:
	lwz      r3, 0x8c(r1)
	lwz      r4, 0x88(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B1E08
	lwz      r3, 0x8c(r1)
	lwz      r4, 0x88(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x88(r1)

	lbl_801B1CD4:
	lwz      r12, 0x84(r1)
	addi     r3, r1, 0x84
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1C80
	b        lbl_801B1E08

	lbl_801B1CF4:
	lwz      r3, 0x8c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r25, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1D4C
	mr       r3, r25
	addi     r4, r31, 0x218
	lwz      r12, 0(r25)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	fcmpo    cr0, f1, f30
	bge      lbl_801B1D4C
	mr       r26, r25
	fmr      f30, f1

	lbl_801B1D4C:
	lwz      r0, 0x90(r1)
	cmplwi   r0, 0
	bne      lbl_801B1D78
	lwz      r3, 0x8c(r1)
	lwz      r4, 0x88(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x88(r1)
	b        lbl_801B1E08

	lbl_801B1D78:
	lwz      r3, 0x8c(r1)
	lwz      r4, 0x88(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x88(r1)
	b        lbl_801B1DEC

	lbl_801B1D98:
	lwz      r3, 0x8c(r1)
	lwz      r4, 0x88(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B1E08
	lwz      r3, 0x8c(r1)
	lwz      r4, 0x88(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x88(r1)

	lbl_801B1DEC:
	lwz      r12, 0x84(r1)
	addi     r3, r1, 0x84
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1D98

	lbl_801B1E08:
	lwz      r3, 0x8c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x88(r1)
	cmplw    r4, r3
	bne      lbl_801B1CF4
	cmplwi   r26, 0
	beq      lbl_801B1E44
	fcmpo    cr0, f30, f31
	bge      lbl_801B1E44
	fmr      f31, f30
	mr       r29, r26
	li       r30, 6

	lbl_801B1E44:
	lwz      r3, mgr__Q24Game10ItemBridge@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801B2098
	lwz      r4, pikiMgr__4Game@sda21(r13)
	li       r26, 0
	lwz      r4, 0x6c(r4)
	lfs      f30, 0xa20(r4)
	beq      lbl_801B1E68
	addi     r3, r3, 0x30

	lbl_801B1E68:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x80(r1)
	cmplwi   r0, 0
	stw      r4, 0x74(r1)
	stw      r0, 0x78(r1)
	stw      r3, 0x7c(r1)
	bne      lbl_801B1EA4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x78(r1)
	b        lbl_801B205C

	lbl_801B1EA4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x78(r1)
	b        lbl_801B1F10

	lbl_801B1EBC:
	lwz      r3, 0x7c(r1)
	lwz      r4, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x80(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B205C
	lwz      r3, 0x7c(r1)
	lwz      r4, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x78(r1)

	lbl_801B1F10:
	lwz      r12, 0x74(r1)
	addi     r3, r1, 0x74
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1EBC
	b        lbl_801B205C

	lbl_801B1F30:
	lwz      r3, 0x7c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	mr       r24, r0
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1FA0
	mr       r3, r24
	addi     r4, r31, 0x20c
	bl       "workable__Q34Game10ItemBridge4ItemFR10Vector3<f>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1FA0
	mr       r3, r24
	addi     r4, r31, 0x218
	lwz      r12, 0(r24)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	fcmpo    cr0, f1, f30
	bge      lbl_801B1FA0
	mr       r26, r24
	fmr      f30, f1

	lbl_801B1FA0:
	lwz      r0, 0x80(r1)
	cmplwi   r0, 0
	bne      lbl_801B1FCC
	lwz      r3, 0x7c(r1)
	lwz      r4, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x78(r1)
	b        lbl_801B205C

	lbl_801B1FCC:
	lwz      r3, 0x7c(r1)
	lwz      r4, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x78(r1)
	b        lbl_801B2040

	lbl_801B1FEC:
	lwz      r3, 0x7c(r1)
	lwz      r4, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x80(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B205C
	lwz      r3, 0x7c(r1)
	lwz      r4, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x78(r1)

	lbl_801B2040:
	lwz      r12, 0x74(r1)
	addi     r3, r1, 0x74
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B1FEC

	lbl_801B205C:
	lwz      r3, 0x7c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x78(r1)
	cmplw    r4, r3
	bne      lbl_801B1F30
	cmplwi   r26, 0
	beq      lbl_801B2098
	fcmpo    cr0, f30, f31
	bge      lbl_801B2098
	fmr      f31, f30
	mr       r29, r26
	li       r30, 0xa

	lbl_801B2098:
	lwz      r3, mgr__Q24Game8ItemRock@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801B22D8
	lwz      r4, pikiMgr__4Game@sda21(r13)
	li       r26, 0
	lwz      r4, 0x6c(r4)
	lfs      f30, 0x9d0(r4)
	beq      lbl_801B20BC
	addi     r3, r3, 0x30

	lbl_801B20BC:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x70(r1)
	cmplwi   r0, 0
	stw      r4, 0x64(r1)
	stw      r0, 0x68(r1)
	stw      r3, 0x6c(r1)
	bne      lbl_801B20F8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)
	b        lbl_801B229C

	lbl_801B20F8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)
	b        lbl_801B2164

	lbl_801B2110:
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B229C
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)

	lbl_801B2164:
	lwz      r12, 0x64(r1)
	addi     r3, r1, 0x64
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B2110
	b        lbl_801B229C

	lbl_801B2184:
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	mr       r24, r0
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B21E0
	mr       r3, r24
	addi     r4, r31, 0x218
	lwz      r12, 0(r24)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	fcmpo    cr0, f1, f30
	bge      lbl_801B21E0
	mr       r26, r24
	fmr      f30, f1

	lbl_801B21E0:
	lwz      r0, 0x70(r1)
	cmplwi   r0, 0
	bne      lbl_801B220C
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)
	b        lbl_801B229C

	lbl_801B220C:
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)
	b        lbl_801B2280

	lbl_801B222C:
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B229C
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)

	lbl_801B2280:
	lwz      r12, 0x64(r1)
	addi     r3, r1, 0x64
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B222C

	lbl_801B229C:
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x68(r1)
	cmplw    r4, r3
	bne      lbl_801B2184
	cmplwi   r26, 0
	beq      lbl_801B22D8
	fcmpo    cr0, f30, f31
	bge      lbl_801B22D8
	fmr      f31, f30
	mr       r29, r26
	li       r30, 7

	lbl_801B22D8:
	lwz      r3, mgr__Q24Game15ItemBigFountain@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801B2518
	lwz      r4, pikiMgr__4Game@sda21(r13)
	li       r26, 0
	lwz      r4, 0x6c(r4)
	lfs      f30, 0x9d0(r4)
	beq      lbl_801B22FC
	addi     r3, r3, 0x30

	lbl_801B22FC:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x60(r1)
	cmplwi   r0, 0
	stw      r4, 0x54(r1)
	stw      r0, 0x58(r1)
	stw      r3, 0x5c(r1)
	bne      lbl_801B2338
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_801B24DC

	lbl_801B2338:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_801B23A4

	lbl_801B2350:
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B24DC
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)

	lbl_801B23A4:
	lwz      r12, 0x54(r1)
	addi     r3, r1, 0x54
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B2350
	b        lbl_801B24DC

	lbl_801B23C4:
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	mr       r24, r0
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B2420
	mr       r3, r24
	addi     r4, r31, 0x218
	lwz      r12, 0(r24)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	fcmpo    cr0, f1, f30
	bge      lbl_801B2420
	mr       r26, r24
	fmr      f30, f1

	lbl_801B2420:
	lwz      r0, 0x60(r1)
	cmplwi   r0, 0
	bne      lbl_801B244C
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_801B24DC

	lbl_801B244C:
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_801B24C0

	lbl_801B246C:
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B24DC
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)

	lbl_801B24C0:
	lwz      r12, 0x54(r1)
	addi     r3, r1, 0x54
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B246C

	lbl_801B24DC:
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x58(r1)
	cmplw    r4, r3
	bne      lbl_801B23C4
	cmplwi   r26, 0
	beq      lbl_801B2518
	fcmpo    cr0, f30, f31
	bge      lbl_801B2518
	fmr      f31, f30
	mr       r29, r26
	li       r30, 7

	lbl_801B2518:
	lwz      r3, mgr__Q24Game10ItemBarrel@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801B2758
	lwz      r4, pikiMgr__4Game@sda21(r13)
	li       r26, 0
	lwz      r4, 0x6c(r4)
	lfs      f30, 0xa48(r4)
	beq      lbl_801B253C
	addi     r3, r3, 0x30

	lbl_801B253C:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x50(r1)
	cmplwi   r0, 0
	stw      r4, 0x44(r1)
	stw      r0, 0x48(r1)
	stw      r3, 0x4c(r1)
	bne      lbl_801B2578
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_801B271C

	lbl_801B2578:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_801B25E4

	lbl_801B2590:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B271C
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

	lbl_801B25E4:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B2590
	b        lbl_801B271C

	lbl_801B2604:
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	mr       r24, r0
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B2660
	mr       r3, r24
	addi     r4, r31, 0x218
	lwz      r12, 0(r24)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	fcmpo    cr0, f1, f30
	bge      lbl_801B2660
	mr       r26, r24
	fmr      f30, f1

	lbl_801B2660:
	lwz      r0, 0x50(r1)
	cmplwi   r0, 0
	bne      lbl_801B268C
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_801B271C

	lbl_801B268C:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_801B2700

	lbl_801B26AC:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B271C
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

	lbl_801B2700:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B26AC

	lbl_801B271C:
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x48(r1)
	cmplw    r4, r3
	bne      lbl_801B2604
	cmplwi   r26, 0
	beq      lbl_801B2758
	fcmpo    cr0, f30, f31
	bge      lbl_801B2758
	fmr      f31, f30
	mr       r29, r26
	li       r30, 7

	lbl_801B2758:
	lwz      r3, mgr__Q24Game12ItemTreasure@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801B29B4
	lwz      r4, pikiMgr__4Game@sda21(r13)
	li       r26, 0
	lwz      r4, 0x6c(r4)
	lfs      f30, 0xa70(r4)
	beq      lbl_801B277C
	addi     r3, r3, 0x30

	lbl_801B277C:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x40(r1)
	cmplwi   r0, 0
	stw      r4, 0x34(r1)
	stw      r0, 0x38(r1)
	stw      r3, 0x3c(r1)
	bne      lbl_801B27B8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)
	b        lbl_801B2978

	lbl_801B27B8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)
	b        lbl_801B2824

	lbl_801B27D0:
	lwz      r3, 0x3c(r1)
	lwz      r4, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B2978
	lwz      r3, 0x3c(r1)
	lwz      r4, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)

	lbl_801B2824:
	lwz      r12, 0x34(r1)
	addi     r3, r1, 0x34
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B27D0
	b        lbl_801B2978

	lbl_801B2844:
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	mr       r24, r0
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B28BC
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 4
	beq      lbl_801B2894
	mr       r3, r24
	bl       isVisible__Q34Game12ItemTreasure4ItemFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B28BC

	lbl_801B2894:
	mr       r3, r24
	addi     r4, r31, 0x218
	lwz      r12, 0(r24)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	fcmpo    cr0, f1, f30
	bge      lbl_801B28BC
	mr       r26, r24
	fmr      f30, f1

	lbl_801B28BC:
	lwz      r0, 0x40(r1)
	cmplwi   r0, 0
	bne      lbl_801B28E8
	lwz      r3, 0x3c(r1)
	lwz      r4, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)
	b        lbl_801B2978

	lbl_801B28E8:
	lwz      r3, 0x3c(r1)
	lwz      r4, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)
	b        lbl_801B295C

	lbl_801B2908:
	lwz      r3, 0x3c(r1)
	lwz      r4, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B2978
	lwz      r3, 0x3c(r1)
	lwz      r4, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)

	lbl_801B295C:
	lwz      r12, 0x34(r1)
	addi     r3, r1, 0x34
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B2908

	lbl_801B2978:
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x38(r1)
	cmplw    r4, r3
	bne      lbl_801B2844
	cmplwi   r26, 0
	beq      lbl_801B29B4
	fcmpo    cr0, f30, f31
	bge      lbl_801B29B4
	fmr      f31, f30
	mr       r29, r26
	li       r30, 7

	lbl_801B29B4:
	lwz      r3, mgr__Q24Game9ItemPlant@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801B2C48
	lwz      r4, pikiMgr__4Game@sda21(r13)
	li       r26, 0
	lwz      r4, 0x6c(r4)
	lfs      f30, 0xa98(r4)
	beq      lbl_801B29D8
	addi     r3, r3, 0x30

	lbl_801B29D8:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x30(r1)
	cmplwi   r0, 0
	stw      r4, 0x24(r1)
	stw      r0, 0x28(r1)
	stw      r3, 0x2c(r1)
	bne      lbl_801B2A14
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)
	b        lbl_801B2C0C

	lbl_801B2A14:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)
	b        lbl_801B2A80

	lbl_801B2A2C:
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B2C0C
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)

	lbl_801B2A80:
	lwz      r12, 0x24(r1)
	addi     r3, r1, 0x24
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B2A2C
	b        lbl_801B2C0C

	lbl_801B2AA0:
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	mr       r24, r0
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B2B50
	mr       r4, r24
	addi     r3, r1, 8
	lwz      r12, 0(r24)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0x21c(r31)
	lfs      f3, 8(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x218(r31)
	lfs      f1, 0x10(r1)
	lfs      f0, 0x220(r31)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051935C@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801B2B3C
	ble      lbl_801B2B40
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801B2B40

	lbl_801B2B3C:
	fmr      f1, f0

	lbl_801B2B40:
	fcmpo    cr0, f1, f30
	bge      lbl_801B2B50
	mr       r26, r24
	fmr      f30, f1

	lbl_801B2B50:
	lwz      r0, 0x30(r1)
	cmplwi   r0, 0
	bne      lbl_801B2B7C
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)
	b        lbl_801B2C0C

	lbl_801B2B7C:
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)
	b        lbl_801B2BF0

	lbl_801B2B9C:
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B2C0C
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)

	lbl_801B2BF0:
	lwz      r12, 0x24(r1)
	addi     r3, r1, 0x24
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B2B9C

	lbl_801B2C0C:
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x28(r1)
	cmplw    r4, r3
	bne      lbl_801B2AA0
	cmplwi   r26, 0
	beq      lbl_801B2C48
	fcmpo    cr0, f30, f31
	bge      lbl_801B2C48
	fmr      f31, f30
	mr       r29, r26
	li       r30, 8

	lbl_801B2C48:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r24, 0
	lwz      r4, generalEnemyMgr__4Game@sda21(r13)
	lwz      r3, 0x6c(r3)
	cmplwi   r4, 0
	lfs      f30, 0x980(r3)
	beq      lbl_801B2C68
	addi     r4, r4, 4

	lbl_801B2C68:
	li       r0, 0
	stw      r4, 0x1c(r1)
	addi     r3, r1, 0x14
	stw      r0, 0x20(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x18(r1)
	bl       "first__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
	b        lbl_801B2D14

	lbl_801B2C88:
	lwz      r12, 0(r3)
	lwz      r4, 0x18(r1)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r25, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B2D0C
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B2D0C
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B2D0C
	mr       r3, r25
	mr       r4, r31
	bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
	fcmpo    cr0, f1, f30
	bge      lbl_801B2D0C
	mr       r24, r25
	fmr      f30, f1

	lbl_801B2D0C:
	addi     r3, r1, 0x14
	bl       "next__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"

	lbl_801B2D14:
	lwz      r3, 0x14(r1)
	cmplwi   r3, 0
	bne      lbl_801B2C88
	cmplwi   r24, 0
	beq      lbl_801B2D38
	fcmpo    cr0, f30, f31
	bge      lbl_801B2D38
	mr       r29, r24
	li       r30, 5

	lbl_801B2D38:
	stw      r29, 0(r28)
	mr       r3, r30

	lbl_801B2D40:
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	lmw      r24, 0xe0(r1)
	lwz      r0, 0x124(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B2D64
 * Size:	00004C
 */
// void Iterator<Game::ItemGate>::isDone()
// {
/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r0, 4(r31)
subf     r0, r0, r3
cntlzw   r0, r0
srwi     r3, r0, 5
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
// }

/*
 * --INFO--
 * Address:	801B2DB0
 * Size:	0007D4
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
		if ((int)mHappaKind != Flower && static_cast<ItemHoney::Item*>(creature)->mHoneyType == HONEY_Y
		    && static_cast<ItemHoney::Item*>(creature)->absorbable()) {
			AbsorbStateArg absorbArg;
			absorbArg.mCreature = creature;
			mFsm->transit(this, PIKISTATE_Absorb, &absorbArg);
			return true;
		}
	} break;

	case OBJTYPE_Piki: {
		if (gameSystem->isVersusMode() && creature->isAlive() && static_cast<Piki*>(creature)->canVsBattle()
		    && !static_cast<Piki*>(creature)->getVsBattlePiki() && (int)static_cast<Piki*>(creature)->mPikiKind != (int)mPikiKind) {
			PikiAI::ActBattleArg battleArg(static_cast<Piki*>(creature));
			return mBrain->start(PikiAI::ACT_Battle, &battleArg);
		}
	} break;

	case OBJTYPE_Pellet: {
		Pellet* pellet = static_cast<Pellet*>(creature);
		if (check && pellet->isAlive() && !isZikatu()) {
			if (!gameSystem->isVersusMode() || pellet->checkBedamaColor((int)getKind())) {
				if (pellet->getTotalPikmins() < pellet->getPelletConfigMax() && !pellet->discoverDisabled()) {
					bool upgradeReady = true;
					if (pellet->getKind() == PELTYPE_UPGRADE && gameSystem->isStoryMode()) {
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
			if (gameSystem->isStoryMode() && !playData->hasMetPikmin(White) && (int)getKind() != White) {
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
			if (creature->mObjectTypeID == OBJTYPE_Treasure && (int)getKind() != White
			    && !static_cast<ItemTreasure::Item*>(creature)->isVisible()) {
				return false;
			}

			PikiAI::ActBreakRockArg breakRockArg;
			breakRockArg.mRock = static_cast<BaseItem*>(creature);
			return mBrain->start(PikiAI::ACT_BreakRock, &breakRockArg);
		}

		if (creature->mObjectTypeID == OBJTYPE_Treasure && (int)getKind() == White && formCheck) {
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

/*
 * --INFO--
 * Address:	801B3584
 * Size:	0002C4
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

			if (gameSystem->isStoryMode() && !playData->hasMetPikmin(White) && (int)mPikiKind != White) {
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
		if (FABS(event->mPosition.y) < 0.2f) {
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

/*
 * --INFO--
 * Address:	801B3848
 * Size:	0000B0
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

/*
 * --INFO--
 * Address:	801B38F8
 * Size:	000310
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

	case PikiAI::ACT_Teki:
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

/*
 * --INFO--
 * Address:	801B3C08
 * Size:	000054
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

/*
 * --INFO--
 * Address:	801B3C5C
 * Size:	000028
 */
bool Piki::setActTransportArg(PikiAI::ActTransportArg& actTransportArg)
{
	actTransportArg.mGoal = nullptr;
	actTransportArg._0C   = Vector3f(0.0f); // unused
	actTransportArg._18   = -1;             // unused
	return true;
}

} // namespace Game
