// Enemies
#include "Game/generalEnemyMgr.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyBase.h"

// Particle FX
#include "efx/TEnemyDownSmoke.h"
#include "efx/TEnemyDownWat.h"
#include "efx/TEnemyApsmoke.h"
#include "efx/TEnemyBomb.h"
#include "efx/TEnemyDead.h"
#include "efx/TEnemyPoison.h"

// Gameplay
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/WalkSmokeEffect.h"
#include "Game/PlatInstance.h"
#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"
#include "Game/AIConstants.h"
#include "LifeGaugeMgr.h"
#include "Game/MapMgr.h"
#include "Radar.h"

// Audio
#include "PS.h"
#include "PSM/CreatureAnime.h"
#include "PSM/BossBgmFader.h"
#include "PSM/BgmTrackMap.h"
#include "PSM/CreaturePrm.h"
#include "PSM/EnemyBase.h"
#include "PSM/EnemyBoss.h"
#include "PSM/ObjCalc.h"
#include "PSM/ObjMgr.h"
#include "PSSystem/PSCommon.h"
#include "PSSystem/PSSystemIF.h"
#include "PSGame/Global.h"

// Utility
#include "Dolphin/rand.h"
#include "nans.h"

// Archives
JKRArchive* Game::gParmArc;
PSSystem::ArcMgr<PSGame::BASARC>* PSSystem::ArcMgr<PSGame::BASARC>::sInstance;

// SingletonBase instances
PSM::BossBgmFader::Mgr* PSSystem::SingletonBase<PSM::BossBgmFader::Mgr>::sInstance;
PSM::ObjCalcBase* PSSystem::SingletonBase<PSM::ObjCalcBase>::sInstance;
PSM::CreaturePrm* PSSystem::SingletonBase<PSM::CreaturePrm>::sInstance;
PSM::ObjMgr* PSSystem::SingletonBase<PSM::ObjMgr>::sInstance;
PSM::BgmTrackMapFile* PSSystem::SingletonBase<PSM::BgmTrackMapFile>::sInstance;
PSGame::SoundTable::CategoryMgr* PSSystem::SingletonBase<PSGame::SoundTable::CategoryMgr>::sInstance;
PSGame::SeMgr* PSSystem::SingletonBase<PSGame::SeMgr>::sInstance;
PSSystem::SeqDataList* PSSystem::SingletonBase<PSSystem::SeqDataList>::sInstance;
PSSystem::StreamDataList* PSSystem::SingletonBase<PSSystem::StreamDataList>::sInstance;

namespace Game {

static const int _UNUSED[3] = { 0, 0, 0 };
/**
 * Unused. Just here to make the rodata line up.
 * @note Address: N/A
 * @note Size: 0xe4
 */
static void _Print(char* format, ...) { OSReport(format, "enemyBase"); }

namespace EnemyBaseFSM {
/**
 * Performs animation for the given enemy.
 * If the enemy is not alive, the function returns early.
 * Updates the enemy's cell and level of detail (LOD).
 * If the enemy is not culled, it checks if it is animating and performs the appropriate animation culling.
 * If the enemy is culled, it performs animation culling and fades effects if they exist.
 * Increments the total count of enemies and the cull count if the enemy is culled.
 * @param enemy Pointer to the enemy object.
 *
 * @note Address: 0x800FF26C
 * @note Size: 0xF8
 */
void State::animation(EnemyBase* enemy)
{
	if (!enemy->isEvent(0, EB_Alive)) {
		return;
	}

	GeneralEnemyMgr::mTotalCount++;
	bool fxExists = enemy->isCullingOff();

	enemy->updateCell();
	enemy->updateLOD(enemy->mLodParm);

	if (enemy->isCullingOff()) {
		if (enemy->isEvent(0, EB_Animating)) {
			enemy->doAnimationCullingOff();
		} else {
			enemy->doAnimationCullingOn();
		}

		if (!fxExists) {
			enemy->createEffects();
		}

		return;
	}

	GeneralEnemyMgr::mCullCount++;
	enemy->doAnimationCullingOn();
	if (fxExists == true) { // required to match
		enemy->fadeEffects();
	}
}

/**
 * Checks if the BirthTypeDropState is finishable for waiting birth type drop.
 *
 * @param enemy A pointer to the EnemyBase object.
 * @return True if the waiting birth type drop is finishable, false otherwise.
 *
 * @note Address: 0x800FF364
 * @note Size: 0x1E0
 */
bool BirthTypeDropState::isFinishableWaitingBirthTypeDrop(EnemyBase* enemy)
{
	Sys::Sphere sphere(enemy->mPosition, static_cast<EnemyParmsBase*>(enemy->mParms)->mGeneral.mPrivateRadius.mValue);
	bool result = false;

	CellIteratorArg ciArg(sphere);
	CellIterator it(ciArg);
	CI_LOOP(it)
	{
		Creature* creature = static_cast<Creature*>(*it);
		if (!creature->isAlive()) {
			continue;
		}

		// Is creature Pikmin or Navi?
		if (creature->isNavi() || (creature->isPiki() && static_cast<Piki*>(creature)->isPikmin())) {
			f32 privateRadius = static_cast<EnemyParmsBase*>(enemy->mParms)->mGeneral.mPrivateRadius.mValue;
			Vector2f delta;
			enemy->getDistanceTo(creature, delta);

			// Is creature within private radius?
			if (IS_WITHIN_CIRCLE(delta.x, delta.y, privateRadius)) {
				result = true;
			}
		}
	}

	return result;
}

/**
 * Initializes the BirthTypeDropState for an enemy.
 * This function sets the initial position of the enemy, updates its cell, and starts the waiting birth type drop.
 * If the enemy is not a specific type of Pom, it randomly adjusts its position within a radius of 50 units.
 *
 * @param enemy Pointer to the EnemyBase object.
 * @param arg Pointer to the StateArg object.
 *
 * @note Address: 0x800FF550
 * @note Size: 0x1A8
 */
void BirthTypeDropState::init(EnemyBase* enemy, StateArg* arg)
{
	if (mapMgr) {
		enemy->mPosition.y = mapMgr->getMinY(enemy->mPosition) + 300.0f;

		EnemyTypeID::EEnemyTypeID typeID = enemy->getEnemyTypeID();
		if (typeID != EnemyTypeID::EnemyID_BluePom && typeID != EnemyTypeID::EnemyID_RedPom        //
		    && typeID != EnemyTypeID::EnemyID_YellowPom && typeID != EnemyTypeID::EnemyID_BlackPom //
		    && typeID != EnemyTypeID::EnemyID_WhitePom && typeID != EnemyTypeID::EnemyID_RandPom) {
			f32 theta = randFloat() * TAU;
			enemy->mPosition.x += sinf(theta) * 50.0f;
			enemy->mPosition.z += cosf(theta) * 50.0f;
		}
	}

	enemy->setPosition(enemy->mPosition, false);
	enemy->updateCell();
	enemy->startWaitingBirthTypeDrop();
}

/**
 * Updates the state of the BirthTypeDropState for the given enemy.
 * If the enemy is in a finishable waiting birth type drop state, it transitions to the EBS_Appear state.
 *
 * @param enemy The enemy object to update.
 *
 * @note Address: 0x800FF6F8
 * @note Size: 0x6C
 */
void BirthTypeDropState::update(EnemyBase* enemy)
{
	if (isFinishableWaitingBirthTypeDrop(enemy)) {
		transit(enemy, EBS_Appear, nullptr);
	}
}

/**
 * Cleans up the BirthTypeDropState by finishing the waiting process for birth type drop of the enemy.
 *
 * @param enemy A pointer to the EnemyBase object.
 *
 * @note Address: 0x800FF764
 * @note Size: 0x30
 */
void BirthTypeDropState::cleanup(EnemyBase* enemy) { enemy->finishWaitingBirthTypeDrop(); }

/**
 * Checks if the BirthTypeDropPikminState is finishable for waiting birth type drop.
 *
 * @param enemy A pointer to the EnemyBase object.
 * @return True if the BirthTypeDropPikminState is finishable for waiting birth type drop, false otherwise.
 *
 * @note Address: 0x800FF794
 * @note Size: 0x1C4
 */
bool BirthTypeDropPikminState::isFinishableWaitingBirthTypeDrop(EnemyBase* enemy)
{
	Sys::Sphere sphere(enemy->mPosition, static_cast<EnemyParmsBase*>(enemy->mParms)->mGeneral.mPrivateRadius.mValue);
	bool result = false;

	CellIteratorArg ciArg(sphere);
	CellIterator it(ciArg);
	CI_LOOP(it)
	{
		Creature* creature = static_cast<Creature*>(*it);

		if (creature->isAlive() && creature->isPiki() && static_cast<Piki*>(creature)->isPikmin()) {
			f32 privateRadius = static_cast<EnemyParmsBase*>(enemy->mParms)->mGeneral.mPrivateRadius.mValue;

			Vector2f delta;
			enemy->getDistanceTo(creature, delta);

			if (IS_WITHIN_CIRCLE(delta.x, delta.y, privateRadius)) {
				result = true;
			}
		}
	}

	return result;
}

/**
 * Checks if the BirthTypeDropOlimarState is finishable for waiting birth type drop.
 *
 * @param enemy A pointer to the EnemyBase object.
 * @return True if the BirthTypeDropOlimarState is finishable for waiting birth type drop, false otherwise.
 *
 * @note Address: 0x800FF958
 * @note Size: 0x1A8
 */
bool BirthTypeDropOlimarState::isFinishableWaitingBirthTypeDrop(EnemyBase* enemy)
{
	Sys::Sphere sphere(enemy->mPosition, static_cast<EnemyParmsBase*>(enemy->mParms)->mGeneral.mPrivateRadius.mValue);
	bool result = false;

	CellIteratorArg ciArg(sphere);
	CellIterator it(ciArg);
	CI_LOOP(it)
	{
		Creature* creature = static_cast<Creature*>(*it);

		if (creature->isAlive() && creature->isNavi()) {
			f32 privateRadius = static_cast<EnemyParmsBase*>(enemy->mParms)->mGeneral.mPrivateRadius.mValue;
			Vector2f delta;
			enemy->getDistanceTo(creature, delta);

			if (IS_WITHIN_CIRCLE(delta.x, delta.y, privateRadius)) {
				result = true;
			}
		}
	}

	return result;
}

/**
 * Checks if the BirthTypeDropTreasureState is finishable for waiting birth type drop.
 *
 * @param enemy The EnemyBase object.
 * @return True if the waiting birth type drop is finishable, false otherwise.
 *
 * @note Address: 0x800FFB00
 * @note Size: 0x18C
 */
bool BirthTypeDropTreasureState::isFinishableWaitingBirthTypeDrop(EnemyBase* enemy)
{
	bool result = false;

	PelletIterator it;
	CI_LOOP(it)
	{
		Pellet* pellet = static_cast<Pellet*>(*it);

		if (pellet->isAlive() && pellet->isCarried()) {
			Vector3f pos      = pellet->getPosition();
			f32 privateRadius = static_cast<EnemyParmsBase*>(enemy->mParms)->mGeneral.mPrivateRadius.mValue;

			Vector2f delta;
			enemy->getDistanceTo(pellet, delta);

			if (IS_WITHIN_CIRCLE(delta.x, delta.y, privateRadius)) {
				result = true;
			}
		}
	}

	return result;
}

/**
 * @note Address: 0x800FFCA8
 * @note Size: 0x8
 */
bool BirthTypeDropEarthquakeState::isFinishableWaitingBirthTypeDrop(EnemyBase*) { return false; }

/**
 * @note Address: 0x800FFCB0
 * @note Size: 0x24
 */
void AppearState::entry(EnemyBase* enemy) { enemy->doEntryLiving(); }

/**
 * Initializes the AppearState of an enemy.
 * This function creates an "Appear Smoke" effect and sets the initial values for the enemy's scale and stun animation timer.
 *
 * @param enemy Pointer to the EnemyBase object.
 * @param arg Pointer to the StateArg object.
 *
 * @note Address: 0x800FFCD4
 * @note Size: 0xFC
 */
void AppearState::init(EnemyBase* enemy, StateArg* arg)
{
	efx::TEnemyApsmoke effect; // this is "Appear Smoke"

	f32 mod                      = enemy->mScaleModifier;
	EnemyTypeID::EEnemyTypeID id = enemy->getEnemyTypeID();

	efx::ArgEnemyType fxArg(enemy->getPosition(), id, mod);
	effect.create(&fxArg);

	enemy->mScale         = 0.0f;
	enemy->mStunAnimTimer = 0.0f;
}

/**
 * @brief Updates the appearance state of an enemy.
 *
 * It increases a timer related to the enemy's stun animation.
 * The increase is twice the amount of time that has passed since the last update.
 * If this timer goes above 1.0, the enemy is no longer stunned and goes back to its normal state.
 * The size of the enemy is also adjusted based on this timer.
 * Lastly, it calls two other functions (doUpdate() and doUpdateCommon()) that handle other updates for the enemy.
 *
 * @param enemy Pointer to the EnemyBase object.
 *
 * @note Address: 0x800FFDEC
 * @note Size: 0x130
 */
void AppearState::update(EnemyBase* enemy)
{
	enemy->mStunAnimTimer += 2.0f * sys->mDeltaTime;
	if (enemy->mStunAnimTimer > 1.0f) {
		transit(enemy, EBS_Living, nullptr);
		return;
	}

	enemy->mScale.x = 2.0f * enemy->mStunAnimTimer;
	if (enemy->mScale.x > 1.0f) {
		enemy->mScale.x = 1.0f;
	}

	enemy->mScale.x += 0.2f * sinf(TAU * enemy->mStunAnimTimer);
	f32 newScale    = enemy->mScale.x;
	enemy->mScale.z = newScale;
	enemy->mScale.y = newScale;

	enemy->doUpdate();
	enemy->doUpdateCommon();
}

/**
 * @brief Cleans up the state of the enemy when it appears.
 *
 * This function resets the scale and stun animation timer of the enemy.
 *
 * @param enemy Pointer to the EnemyBase object.
 *
 * @note Address: 0x800FFF1C
 * @note Size: 0x1C
 */
void AppearState::cleanup(EnemyBase* enemy)
{
	enemy->mScale         = 1.0f;
	enemy->mStunAnimTimer = 0.0f;
}

/**
 * Simulates the behavior of the enemy in the Living state.
 *
 * @param enemy The enemy object.
 * @param frameRate The frame rate of the simulation.
 *
 * @note Address: 0x800FFF38
 * @note Size: 0x10C
 */
void EnemyBaseFSM::LivingState::simulation(EnemyBase* enemy, f32 frameRate)
{
	// If enemy is constrained OR alive AND is not earthquake AND is not being dropped
	if (enemy->isEvent(0, EB_HardConstrained)
	    || isConstrained(enemy) && !enemy->isEvent(1, EB2_Earthquake) && !enemy->isEvent(1, EB2_Dropping)) {
		if (enemy->isCullingOff()) {
			enemy->doSimulationConstraint(frameRate);
		}
	} else if (enemy->isCullingOff()) {
		enemy->collisionMapAndPlat(frameRate);
		enemy->updateWaterBox();
	}

	Creature::CheckHellArg hellArg;
	hellArg.mIsKillPiki = false;
	if (enemy->checkHell(hellArg) == CREATURE_HELL_DEATH) {
		enemy->getCreatureName();
		enemy->getCreatureID();
		enemy->gotoHell();
	}
}

/**
 * @note Address: 0x80100084
 * @note Size: 0x40
 */
void LivingState::entry(EnemyBase* enemy)
{
	if (enemy->mPellet) {
		enemy->doEntryCarcass();
		return;
	}

	enemy->doEntryLiving();
}

/**
 * @note Address: 0x801000C4
 * @note Size: 0x30
 */
void LivingState::updateCullingOff(EnemyBase* enemy) { enemy->doUpdate(); }

/**
 * @note Address: 0x801000F4
 * @note Size: 0x30
 */
void LivingState::updateAlways(EnemyBase* enemy)
{
	if (enemy->isEvent(0, EB_BitterQueued)) {
		enemy->startStoneState();
	}
}

/**
 * Updates the state of the enemy.
 * This function is responsible for updating various aspects of the enemy's behavior,
 * such as disabling events, executing sound effects, updating carcass, culling off,
 * life recovery, injury, and damage animation.
 * If the enemy's existence duration exceeds a certain threshold, it will be destroyed.
 * @param enemy A pointer to the EnemyBase object.
 *
 * @note Address: 0x80100124
 * @note Size: 0x1BC
 */
void LivingState::update(EnemyBase* enemy)
{
	sys->mTimers->_start("e-upd-do", true);

	enemy->disableEvent(0, EB_AttackingNavi0);
	enemy->disableEvent(0, EB_AttackingNavi1);

	enemy->mSoundObj->exec();

	if (enemy->mPellet) {
		enemy->doUpdateCarcass();
	} else {
		if (enemy->isCullingOff()) {
			updateCullingOff(enemy);
			enemy->doUpdateCommon();
		}

		updateAlways(enemy);

		if (!(enemy->isDead()) && (enemy->isAlive())) {
			enemy->lifeRecover();
			enemy->injure();
		}

		if (enemy->mExistDuration > 0.0f) {
			enemy->mExistTimer += sys->mDeltaTime;

			if (enemy->mExistTimer > enemy->mExistDuration) {
				enemy->addDamage(enemy->mMaxHealth, 1.0f);
				enemy->disableEvent(0, EB_Cullable);
				enemy->disableEvent(0, EB_DamageAnimEnabled);
			}
		}
	}

	sys->mTimers->_stop("e-upd-do");
}

/**
 * @note Address: 0x801002E0
 * @note Size: 0x48
 */
void EnemyBaseFSM::FitState::updateCullingOff(EnemyBase* enemy)
{
	if (enemy->isDead()) {
		transit(enemy, EBS_Living, nullptr);
	}
}

/**
 * Initializes the FitState of the EnemyBase.
 * This function updates the enemy, backs up events, enables specific events,
 * stops motion, sets target and current velocity to 0, starts earthquake fit state,
 * sets the position of the enemy's fit effect, creates the enemy's fit effect.
 *
 * @param enemy Pointer to the EnemyBase object.
 * @param arg Pointer to the StateArg object.
 *
 * @note Address: 0x80100328
 * @note Size: 0x150
 */
void EnemyBaseFSM::FitState::init(EnemyBase* enemy, StateArg* arg)
{
	enemy->doUpdate();
	enemy->backupEvents();

	enemy->enableEvent(1, EB2_Stunned);
	enemy->stopMotion();
	enemy->enableEvent(0, EB_Constrained);

	enemy->mTargetVelocity  = 0.0f;
	enemy->mCurrentVelocity = 0.0f;
	enemy->doStartEarthquakeFitState();

	mEnemyPiyo.mPosition         = enemy->getFitEffectPos();
	f32 scale                    = enemy->mScaleModifier;
	EnemyTypeID::EEnemyTypeID id = enemy->getEnemyTypeID();

	efx::ArgEnemyType fxArg(enemy->mPosition, id, scale);
	mEnemyPiyo.create(&fxArg);
}

/**
 * @brief Cleans up the state of an enemy.
 *
 * This function restores the events of the enemy, disables a specific event,
 * starts the motion, performs the finish earthquake fit state, and fades the enemy.
 *
 * @param enemy Pointer to the EnemyBase object.
 *
 * @note Address: 0x80100478
 * @note Size: 0x80
 */
void FitState::cleanup(EnemyBase* enemy)
{
	enemy->restoreEvents();

	enemy->disableEvent(1, EB2_Stunned);
	enemy->startMotion();
	enemy->doFinishEarthquakeFitState();
	mEnemyPiyo.fade();
}

/**
 * Updates the state of the enemy in the FitState.
 * This function is called continuously to update the enemy's behavior.
 * It updates the stun animation timer, checks if the stun duration has elapsed,
 * and updates the stun animation rotation based on the timer.
 * Finally, it updates the position of the enemy's FitEffect.
 *
 * @param enemy Pointer to the EnemyBase object.
 *
 * @note Address: 0x801004F8
 * @note Size: 0x204
 */
void FitState::updateAlways(EnemyBase* enemy)
{
	enemy->mStunAnimTimer += sys->mDeltaTime;
	if (enemy->mStunAnimTimer > enemy->getParms().mPurplePikiStunDuration.mValue || enemy->isEvent(0, EB_BitterQueued) || enemy->isDead()) {
		enemy->mStunAnimTimer = 0.0f;
		transit(enemy, EBS_Living, nullptr);
	} else {
		f32 sinStun = 4.0f * sinf((PI * enemy->mStunAnimTimer) / enemy->getParms().mPurplePikiStunDuration.mValue);
		if (sinStun > 1.0f) {
			sinStun = 1.0f;
		}

		f32 theta = (TAU * enemy->mStunAnimTimer) / 0.25f;

		enemy->mStunAnimRotation.x = sinStun * ((PI * DEG2RAD) * sinf(theta));
		enemy->mStunAnimRotation.y = 0.0f;
		enemy->mStunAnimRotation.z = sinStun * ((PI * DEG2RAD) * cosf(theta));
	}

	mEnemyPiyo.mPosition = enemy->getFitEffectPos();
}

/**
 * @note Address: 0x801006FC
 * @note Size: 0x88
 */
void EarthquakeState::init(EnemyBase* enemy, StateArg* arg)
{
	enemy->doUpdate();
	enemy->enableEvent(1, EB2_Earthquake);
	enemy->stopMotion();

	EarthquakeStateArg* eqArg = static_cast<EarthquakeStateArg*>(arg);
	enemy->doStartEarthquakeState(eqArg->mBounceFactor);
	mEarthquakeStepTimer = 0;
}

/**
 * @note Address: 0x80100784
 * @note Size: 0x50
 */
void EarthquakeState::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(1, EB2_Earthquake);
	enemy->startMotion();
	enemy->doFinishEarthquakeState();
}

/**
 * @note Address: 0x801007D4
 * @note Size: 0x158
 */
void EarthquakeState::updateCullingOff(EnemyBase* enemy)
{
	if (enemy->isDead() && enemy->mFloorTriangle) {
		transit(enemy, EBS_Living, nullptr);
		return;
	}

	if (++mEarthquakeStepTimer > 3 && enemy->mFloorTriangle) {
		f32 randChance = randFloat();
		if (enemy->mStunAnimTimer > 0.0f
		    || (randChance < enemy->getParms().mPurplePikiStunChance.mValue && !enemy->isEvent(0, EB_BitterQueued)
		        && !enemy->isEvent(0, EB_NoInterrupt))) {
			transit(enemy, EBS_Fit, nullptr);
		} else {
			transit(enemy, EBS_Living, nullptr);
		}
	}

	if (enemy->isFlying()) {
		enemy->disableEvent(0, EB_Untargetable);
	}
}

/**
 * @note Address: 0x80100938
 * @note Size: 0x64
 */
void StoneState::bounceProcedure(EnemyBase* enemy, Sys::Triangle* triangle)
{
	enemy->enableEvent(0, EB_Constrained);
	enemy->createBounceEffect(enemy->mPosition, enemy->getDownSmokeScale());
	enemy->addDamage(0.0f, 1.0f);
}

/**
 * @note Address: 0x8010099C
 * @note Size: 0x100
 */
void StoneState::init(EnemyBase* enemy, StateArg* arg)
{
	if (enemy->isEvent(0, EB_BitterQueued)) {
		enemy->disableEvent(0, EB_BitterQueued);
	} else {
		enemy->doUpdate();
	}

	enemy->backupEvents();

	enemy->enableEvent(0, EB_Bittered);
	enemy->hide();
	enemy->mBitterTimer = 0.0f;
	enemy->stopMotion();
	enemy->mCurrentVelocity = 0.0f;

	if (enemy->mFloorTriangle) {
		enemy->enableEvent(0, EB_Constrained);
	} else {
		enemy->enableEvent(0, EB_Constrained);
	}

	if (enemy->mSfxEmotion == EMOTE_Excitement && PSGetDirectedMainBgm()) {
		enemy->mSoundObj->battleOff();
	}

	enemy->doStartStoneState();
}

/**
 * @note Address: 0x80100A9C
 * @note Size: 0xCC
 */
void StoneState::cleanup(EnemyBase* enemy)
{
	P2ASSERTLINE(1024, enemy->isEvent(0, EB_Bittered));

	enemy->restoreEvents();

	enemy->disableEvent(0, EB_BitterQueued);
	enemy->disableEvent(0, EB_Bittered);

	enemy->show();
	enemy->startMotion();
	enemy->doFinishStoneState();

	if ((enemy->mSfxEmotion == EMOTE_Excitement) && PSGetDirectedMainBgm()) {
		enemy->mSoundObj->battleOn();
	}
}

/**
 * @note Address: 0x80100B68
 * @note Size: 0x118
 */
void StoneState::updateAlways(EnemyBase* enemy)
{
	enemy->mEnemyStoneObj->update();
	enemy->mBitterTimer += sys->mDeltaTime;

	if (enemy->mEnemyStoneObj->isFlag(EnemyStone::STONE_HasViewedDemo)) {
		if (!enemy->mFloorTriangle) {
			enemy->constraintOff();
			enemy->disableEvent(0, EB_Untargetable);
		}

		// dev typo- likely should have been bool
		f32 isBitterFinish = (enemy->mBitterTimer > enemy->getParms().mBitterDuration.mValue);
		if (isBitterFinish) {
			if (enemy->mEnemyStoneObj->isFlag(EnemyStone::STONE_Shake)) {
				if (enemy->mEnemyStoneObj->isFlag(EnemyStone::STONE_Break) && enemy->isAlive()) {
					transit(enemy, EBS_Living, nullptr);
				}
			} else {
				enemy->mEnemyStoneObj->shake();
			}
		}
	}
}

/**
 * @note Address: 0x80100C80
 * @note Size: 0x74
 */
void StoneState::updateCullingOff(EnemyBase* enemy)
{
	if (enemy->isAlive() && enemy->isStopMotion() && enemy->isDead()) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x80100CF4
 * @note Size: 0x484
 */
void StateMachine::init(EnemyBase* enemy)
{
	create(EBS_Count);

	registerState(new BirthTypeDropState(EBS_Drop));
	registerState(new BirthTypeDropPikminState);
	registerState(new BirthTypeDropOlimarState);
	registerState(new BirthTypeDropTreasureState);
	registerState(new BirthTypeDropEarthquakeState);

	registerState(new AppearState);
	registerState(new LivingState);
	registerState(new StoneState);
	registerState(new EarthquakeState);
	registerState(new FitState);
}

/**
 * @note Address: 0x80101304
 * @note Size: 0x30
 */
void StateMachine::update(EnemyBase* enemy) { mState->update(enemy); }

/**
 * @note Address: 0x80101338
 * @note Size: 0x30
 */
void StateMachine::entry(EnemyBase* enemy) { mState->entry(enemy); }

/**
 * @note Address: 0x8010136C
 * @note Size: 0x30
 */
void StateMachine::simulation(EnemyBase* enemy, f32 frameRate) { mState->simulation(enemy, frameRate); }
} // namespace EnemyBaseFSM

/**
 * @brief EnemyBase constructor.
 *
 * This constructor initializes the EnemyBase object with default values for its member variables.
 * It sets the position, rotation, and animation properties to zero or null values.
 * It also initializes various data structures and creates shadows and life gauges if the corresponding managers exist.
 *
 * @note Address: 0x801013A0
 * @note Size: 0x370
 */
EnemyBase::EnemyBase()
    : Creature()
    , SysShape::MotionListener()
    , PelletView()
    , mPosition(Vector3f(0.0f))
    , mRotation(Vector3f(0.0f))
    , mDamageAnimRotation(Vector3f(0.0f))
    , mStunAnimRotation(Vector3f(0.0f))
    , mEvents()
    , mEventBuffer()
    , mSfxEmotion(EMOTE_Caution)
    , mCreatureID(0xFF)
    , mUnused1F2(0xFF)
    , mStuckPikminCount(0)
    , mStunAnimTimer(0.0f)
    , mFriction(0.0f)
    , mBitterTimer(0.0f)
    , mCollEvent()
    , mEffectOffset(0.0f, 0.0f, 0.0f)
    , mEnemyStoneObj(nullptr)
    , mPelletDropCode(0)
    , mHeldPellet(nullptr)
    , mPelletInfo()
    , mLodParm()
    , mWaterBox(nullptr)
    , mWallTriangle(0)
    , mSoundObj(nullptr)
    , mHamonEffectRoot()
    , mExistTimer(0.0f)
    , mExistDuration(0.0f)
    , mDropGroup(0)
    , mCurrentLifecycleState(nullptr)
    , mLifecycleFSM(nullptr)
{
	mFlags.clear();

	mObjectTypeID  = OBJTYPE_Teki;
	mScaleModifier = 1.0f;
	mCollisionBuffer.alloc(this, 8);
	mAnimator        = nullptr;
	mCurAnim         = new EnemyAnimKeyEvent;
	mDamageAnimTimer = 0.0f;
	mTargetCreature  = nullptr;
	mFloorTriangle   = nullptr;
	mLifecycleFSM    = new EnemyBaseFSM::StateMachine();
	mLifecycleFSM->init(this);
	clearStick();
	mCurAnim->mIsPlaying = false;
	mInstantDamage       = 0.0f;
	disableEvent(0, EB_TakingDamage);
	mFlickTimer  = 0.0f;
	mBitterTimer = 0.0f;

	mEvents.clear();
	mEventBuffer.clear();

	if (shadowMgr) {
		shadowMgr->createShadow(this);
	}

	if (lifeGaugeMgr) {
		lifeGaugeMgr->createLifeGauge(this);
	}

	mHamonEffectRoot.clearRelations();
}

/**
 * @brief EnemyBase constructor.
 *
 * This function initializes the EnemyBase object by creating a sound object and an instance of the EfxHamon effect.
 *
 * @note Address: 0x80101788
 * @note Size: 0x44
 */
void EnemyBase::constructor()
{
	mSoundObj = createPSEnemyBase();
	createInstanceEfxHamon();
}

/**
 * @brief Creates the effects for the enemy base.
 *
 * This function iterates through the linked list of EnemyEffectNodeHamon objects
 * and calls the create() function for each node, passing the current EnemyBase object.
 *
 * @note Address: 0x801017CC
 * @note Size: 0x5C
 */
void EnemyBase::createEffects()
{
	EnemyEffectNodeHamon* next;

	for (EnemyEffectNodeHamon* hamon = (EnemyEffectNodeHamon*)mHamonEffectRoot.mChild; hamon; hamon = next) {
		next = (EnemyEffectNodeHamon*)hamon->mNext;
		hamon->create(this);
	}
}

/**
 * @brief Fades the effects of the enemy base.
 *
 * This function iterates through the linked list of enemy effect nodes and calls the fade function on each node.
 * The fade function is responsible for fading out the effect associated with the node.
 *
 * @note Address: 0x80101828
 * @note Size: 0x5C
 */
void EnemyBase::fadeEffects()
{
	EnemyEffectNodeHamon* next;

	for (EnemyEffectNodeHamon* hamon = (EnemyEffectNodeHamon*)mHamonEffectRoot.mChild; hamon; hamon = next) {
		next = (EnemyEffectNodeHamon*)hamon->mNext;
		hamon->fade(this);
	}
}

/**
 * @note Address: 0x80101884
 * @note Size: 0x50
 */
void EnemyBase::createInstanceEfxHamon()
{
	mEffectNodeHamon = new EnemyEffectNodeHamon;
	mHamonEffectRoot.add(mEffectNodeHamon);
}

/**
 * @note Address: 0x801018D4
 * @note Size: 0x30
 */
void EnemyBase::updateEfxHamon()
{
	if (mEffectNodeHamon) {
		mEffectNodeHamon->update(this);
	}
}

/**
 * @note Address: 0x80101904
 * @note Size: 0x3C
 */
void EnemyBase::createEfxHamon()
{
	if (mEffectNodeHamon) {
		mEffectNodeHamon->create(this);
	}
}

/**
 * @note Address: 0x80101940
 * @note Size: 0x3C
 */
void EnemyBase::fadeEfxHamon()
{
	if (mEffectNodeHamon) {
		mEffectNodeHamon->fade(this);
	}
}

/**
 * @note Address: 0x8010197C
 * @note Size: 0x50
 */
void EnemyBase::setEmotionCaution()
{
	mSfxEmotion = EMOTE_Caution;
	if (PSGetDirectedMainBgm()) {
		mSoundObj->battleOff();
	}
}

/**
 * @note Address: 0x801019CC
 * @note Size: 0x3C
 */
void EnemyBase::setEmotionExcitement()
{
	mSfxEmotion = EMOTE_Excitement;
	mSoundObj->battleOn();
}

/**
 * @note Address: 0x80101A08
 * @note Size: 0x50
 */
void EnemyBase::setEmotionNone()
{
	mSfxEmotion = EMOTE_None;
	if (PSGetDirectedMainBgm()) {
		mSoundObj->battleOff();
	}
}

/**
 * Initializes the EnemyBase object.
 * This function is called when the EnemyBase is being initialized.
 * It resets various variables and enables necessary events for the EnemyBase.
 * @param arg A pointer to the CreatureInitArg object containing initialization arguments.
 *
 * @note Address: 0x80101A58
 * @note Size: 0x104
 */
void EnemyBase::onInit(CreatureInitArg* arg)
{
	clearStick();
	mCurAnim->mIsPlaying = false;
	mInstantDamage       = 0.0f;
	disableEvent(0, EB_TakingDamage);
	mFlickTimer  = 0.0f;
	mBitterTimer = 0.0f;

	resetEvents();

	enableEvent(0, EB_Alive);
	enableEvent(0, EB_DamageAnimEnabled);
	enableEvent(0, EB_FlickEnabled);
	enableEvent(0, EB_Cullable);
	enableEvent(0, EB_LeaveCarcass);
	enableEvent(0, EB_DeathEffectEnabled);
	enableEvent(0, EB_LifegaugeVisible);
	mWaterBox = nullptr;
	enableEvent(0, EB_PlatformCollEnabled);
	enableEvent(0, EB_Animating);
}

/**
 *  Initializes the EnemyBase object after creation.
 * Determines the appropriate lifecycle state based on the drop group.
 * If in Zukan mode, performs animation culling and sets the water box.
 *
 * @param arg The CreatureInitArg object containing initialization arguments.
 *
 * @note Address: 0x80101B5C
 * @note Size: 0x218
 */
void EnemyBase::onInitPost(CreatureInitArg* arg)
{
	switch (mDropGroup) {
	case EDG_None:
		mLifecycleFSM->start(this, EnemyBaseFSM::EBS_Living, nullptr);
		break;
	case EDG_Normal:
	case EDG_Pikmin:
	case EDG_Navi:
	case EDG_Carry:
	case EDG_Earthquake:
		if (isEvent(0, EB_HardConstrained)) {
			mLifecycleFSM->start(this, EnemyBaseFSM::EBS_Living, nullptr);
		} else {
			switch (mDropGroup) {
			case EDG_Normal:
				mLifecycleFSM->start(this, EnemyBaseFSM::EBS_Drop, nullptr);
				break;
			case EDG_Pikmin:
				mLifecycleFSM->start(this, EnemyBaseFSM::EBS_DropPikmin, nullptr);
				break;
			case EDG_Navi:
				mLifecycleFSM->start(this, EnemyBaseFSM::EBS_DropOlimar, nullptr);
				break;
			case EDG_Carry:
				mLifecycleFSM->start(this, EnemyBaseFSM::EBS_DropTreasure, nullptr);
				break;
			case EDG_Earthquake:
				mLifecycleFSM->start(this, EnemyBaseFSM::EBS_DropEarthquake, nullptr);
				break;
			default:
				JUT_PANICLINE(1483, "Unknown birth type:%d", mDropGroup);
				break;
			}
		}
		break;
	default:
		JUT_PANICLINE(1490, "Unknown birth type:%d", mDropGroup);
		break;
	}

	if (gameSystem->isZukanMode()) {
		doAnimationCullingOff();

		Sys::Sphere waterSphere;
		getWaterSphere(&waterSphere);

		WaterBox* waterBox = nullptr;
		if (mapMgr) {
			waterBox = mapMgr->findWater(waterSphere);
		}

		if (waterBox) {
			mWaterBox = waterBox;
		} else {
			mWaterBox = nullptr;
		}
	}
}

/**
 * Sets the otakara code for the EnemyBase object.
 *
 * @param itemCode The otakara item code to set.
 *
 * @note Address: 0x80101D74
 * @note Size: 0xA0
 */
void EnemyBase::setOtakaraCode(PelletMgr::OtakaraItemCode& itemCode)
{
	mPelletDropCode.mValue = itemCode;
	if (!mPelletDropCode.isNull()) {
		s16 dropCode  = mPelletDropCode;
		u32 dropShift = dropCode >> 8;

		if ((u8)dropShift == 4) {
			Radar::Mgr::entry(this, Radar::MAP_UPGRADE, 0);
			return;
		}

		if (playData->isPelletEverGot(dropShift, dropCode)) {
			Radar::Mgr::entry(this, Radar::MAP_TREASURE, 0);
			return;
		}

		Radar::Mgr::entry(this, Radar::MAP_SWALLOWED_TREASURE, 0);
	}
}

/**
 * @brief Forces the enemy base to perform kill effects.
 *
 * This function is responsible for performing the kill effects of the enemy base.
 * If the enemy base is holding a pellet, it stimulates the pellet with an InteractMattuan object.
 * After that, it sets the sound object as killed.
 */
void EnemyBase::forceKillEffects()
{
	if (mHeldPellet) {
		InteractMattuan interactMatt(this, 2.5f);

		mHeldPellet->stimulate(interactMatt);
		mHeldPellet = nullptr;
	}

	mSoundObj->setKilled();
}

/**
 * @note Address: 0x80101E18
 * @note Size: 0xC4
 */
void EnemyBase::setCarcassArg(PelletViewArg& carcassArg)
{
	Vector3f pos          = getPosition();
	carcassArg.mEnemyName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
	carcassArg.mPosition  = pos;
	carcassArg.mMatrix    = &mBaseTrMatrix;
	carcassArg.mEnemy     = this;
}

/**
 * @brief Transforms the enemy base into a carcass.
 *
 * This function is responsible for performing the necessary actions to transform the enemy base into a carcass.
 * It deactivates the life gauge, removes the shadow, fades the effects, turns off the battle sound, sets the animation to nullptr,
 * and finally kills the enemy base.
 *
 * @note Address: N/A
 * @note Size: 0x234
 */
void EnemyBase::becomeCarcass()
{
	if (lifeGaugeMgr != nullptr) {
		lifeGaugeMgr->inactiveLifeGauge(this);
	}

	if (shadowMgr != nullptr) {
		shadowMgr->delShadow(this);
	}

	fadeEffects();

	mSfxEmotion = EMOTE_None;

	if (PSGetDirectedMainBgm()) {
		mSoundObj->battleOff();
	}

	mSoundObj->setAnime(nullptr, 1, 0.0f, 0.0f);
	mMgr->kill(this);
}

/**
 * @note Address: 0x80101EDC
 * @note Size: 0x8
 */
bool EnemyBase::doBecomeCarcass() { return true; }

/**
 * @note Address: 0x80101EE4
 * @note Size: 0x4
 */
void EnemyBase::doUpdateCarcass() { }

void EnemyBase::deathMethod()
{
	forceKillEffects();
	becomeCarcass();
}

/**
 * @brief Handles the logic when an enemy is killed.
 *
 * This function is called when an enemy is killed. It performs various actions such as triggering death effects,
 * dropping honey items, becoming a carcass, etc.
 *
 * @param inputArg Pointer to the CreatureKillArg object containing information about the kill.
 *
 * @note Address: 0x80101EE8
 * @note Size: 0x9EC
 */
void EnemyBase::onKill(CreatureKillArg* inputArg)
{
	getCreatureName();
	getCreatureID();

	CreatureKillArg* killArg = nullptr;
	if (inputArg && strcmp(inputArg->getName(), "EnemyKillArg") == 0) {
		killArg = inputArg;
	}

	endStick();

	if ((!killArg || !killArg->isFlag(CKILL_DisableDeathEffects)) && isEvent(0, EB_DeathEffectEnabled)) {
		Vector3f effectPos;
		getCommonEffectPos(effectPos);
		f32 scaleMod                      = mScaleModifier;
		EnemyTypeID::EEnemyTypeID enemyID = getEnemyTypeID();

		efx::ArgEnemyType fxArg(effectPos, enemyID, scaleMod);
		efx::TEnemyDead efxDead;

		efxDead.create((efx::Arg*)&fxArg);
		PSStartEnemyGhostSE(this, 0.0f);
	}

	if (!killArg || !(killArg->isFlag(CKILL_NotKilledByPlayer))) {
		if (isEvent(0, EB_Bittered)) {
			mEnemyStoneObj->dead();
			deathProcedure();
			disableEvent(0, EB_Bittered);
			constraintOff();
			if (ItemHoney::mgr) {
				s8 bitterDrop = (s8)EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF)->mBitterDrops;
				f32 scaledChance, dropChance;
				int dropRolls;

				switch (bitterDrop) {
				case BDT_Weak:
					dropChance = 0.99f;
					dropRolls  = 1;
					break;
				case BDT_Normal:
				case BDT_Strong:
					dropChance = 0.9f;
					dropRolls  = 1;
					break;
				case BDT_Triple:
					dropChance = 0.9f;
					dropRolls  = 3;
					break;
				case BDT_MiniBoss:
				case BDT_Boss:
					dropChance = 0.85f;
					dropRolls  = 5;
					break;
				case BDT_FinalBoss:
					dropChance = 0.0f;
					dropRolls  = 10;
					break;
				default:
					dropChance = 1.0f;
					dropRolls  = 0;
					break;
				}

				scaledChance = (0.5f * (1.0f - dropChance)) + dropChance;

				for (int i = 0; i < dropRolls; i++) {
					f32 randRoll = randFloat();

					u8 honeyKind;
					if (randRoll < dropChance) {
						honeyKind = HONEY_Y;
					} else if (randRoll < scaledChance) {
						honeyKind = HONEY_R;
					} else {
						honeyKind = HONEY_B;
					}

					Sys::Sphere ball;
					getBoundingSphere(ball);

					ItemHoney::InitArg honeyArg(honeyKind, false);
					ItemHoney::Item* drop = static_cast<ItemHoney::Item*>(ItemHoney::mgr->birth());

					if (drop != nullptr) {
						drop->init((CreatureInitArg*)&honeyArg);
						drop->setPosition(ball.mPosition, false);
						f32 theta    = TAU * randFloat();
						f32 scale    = 1.0f + ((f32)dropRolls / 10.0f);
						f32 cosTheta = scale * (50.0f * cosf(theta));
						f32 sinTheta = scale * (50.0f * sinf(theta));

						Vector3f dropVelocity; // sp58
						dropVelocity.x = sinTheta;
						dropVelocity.y = 250.0f * scale;
						dropVelocity.z = cosTheta;

						drop->setVelocity(dropVelocity);
					}
				}
			}
			forceKillEffects();
			becomeCarcass();

		} else if (mExistDuration == 0.0f && isEvent(0, EB_LeaveCarcass) && (!killArg || !(killArg->isFlag(CKILL_LeaveNoCarcass)))) {
			if (!mPellet) {
				PelletViewArg pvArg;
				setCarcassArg(pvArg);
				if (!becomePellet(&pvArg)) {
					deathMethod();
				} else {
					lifeGaugeMgr->inactiveLifeGauge(this);
					mSfxEmotion = 0;
					if (PSGetDirectedMainBgm()) {
						mSoundObj->battleOff();
					}
					doBecomeCarcass();
				}
			}
			forceKillEffects();
		} else {
			forceKillEffects();
			becomeCarcass();
		}

		setZukanVisible(true);
		return;
	}

	if (isEvent(0, EB_Bittered)) {
		mEnemyStoneObj->dead();
	}

	forceKillEffects();
	becomeCarcass();
}

/**
 * Sets the visibility of the enemy in the Piklopedia.
 *
 * @param updateStats Flag indicating whether to update the enemy's statistics.
 *                    If true, the enemy's kill count will be incremented.
 *                    If false, the enemy's state will be set to updated.
 *
 * @note Address: 0x80102920
 * @note Size: 0xE0
 */
void EnemyBase::setZukanVisible(bool updateStats)
{
	if (!mInPiklopedia) {
		return;
	}

	if ((gameSystem->isFlag(GAMESYS_DisableDeathCounter)) == FALSE) {
		EnemyInfo* enemyInfo = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
		if ((enemyInfo->mFlags & EFlag_HasNoInfo) == FALSE) {
			TekiStat::Info* tekiInfo = playData->mTekiStatMgr.getTekiInfo(getEnemyTypeID());
			P2ASSERTLINE(1859, tekiInfo);

			if (updateStats) {
				tekiInfo->incKilled();
			} else {
				tekiInfo->mState.set(TEKISTAT_STATE_UPDATED);
			}
		}
	}
}

/**
 * @brief Initializes the EnemyBase object with the given position and face direction.
 *
 * This function sets up the initial state of the EnemyBase object when it is created.
 * It enables the "Alive" event, sets the position and home position, initializes the rotation
 * and velocity vectors, and resets various member variables. It also calculates the model,
 * updates the collision tree, and adds a shadow. If a life gauge manager is available, it
 * activates the life gauge for this EnemyBase. Finally, it sets the initial emotion to "Caution"
 * and initializes the timers for existence and stun animation.
 *
 * @param pos The initial position of the EnemyBase.
 * @param faceDir The initial face direction of the EnemyBase.
 *
 * @note Address: 0x80102A00
 * @note Size: 0x160
 */
void EnemyBase::birth(Vector3f& pos, f32 faceDir)
{
	enableEvent(0, EB_Alive);

	mInPiklopedia = true;

	setPosition(pos, false);
	mHomePosition = pos;

	mRotation        = Vector3f(0.0f);
	mCurrentVelocity = Vector3f(0.0f);
	mTargetVelocity  = Vector3f(0.0f);

	mTargetCreature = nullptr;

	mFaceDir    = faceDir;
	mRotation.y = mFaceDir;

	mFloorTriangle    = nullptr;
	mStuckPikminCount = 0;
	mHeldPellet       = nullptr;

	mModel->mJ3dModel->calc();
	mCollTree->update();
	updateSpheres();
	resetCollEvent();

	mUnused1F2 = 0xFF;
	setParameters();

	shadowMgr->addShadow(this);

	if (lifeGaugeMgr) {
		lifeGaugeMgr->activeLifeGauge(this, 1.0f);
	}

	mModel->hide();

	mSfxEmotion = EMOTE_Caution;

	mExistDuration = 0.0f;
	mExistTimer    = 0.0f;
	mStunAnimTimer = 0.0f;
}

/**
 * @note Address: 0x80102B60
 * @note Size: 0x78
 */
void EnemyBase::updateTrMatrix()
{
	Vector3f rot = mRotation + mDamageAnimRotation + mStunAnimRotation;
	mBaseTrMatrix.makeTR(mPosition, rot);
}

/**
 * @note Address: 0x80102BD8
 * @note Size: 0x78
 */
void EnemyBase::setParameters()
{
	mHealth    = getParms().mHealth.mValue;
	mMaxHealth = getParms().mHealth.mValue;
	mMass      = getParms().mMass.mValue;
	mFriction  = mMass;

	Sys::Sphere sphere;
	mCollTree->mPart->getSphere(sphere);
	mBoundingSphere.mRadius = sphere.mRadius;
	mCurLodSphere.mRadius   = getParms().mOffCameraRadius.mValue;
}

/**
 * @note Address: 0x80102C50
 * @note Size: 0x34
 */
void EnemyBase::update() { static_cast<EnemyBaseFSM::StateMachine*>(mLifecycleFSM)->update(this); }

/**
 * Checks if the EnemyBase is in a finishable state for the waiting birth type drop.
 * @return true if the EnemyBase is in a finishable state for the waiting birth type drop, false otherwise.
 *
 * @note Address: 0x80102C84
 * @note Size: 0x1E0
 */
bool EnemyBase::isFinishableWaitingBirthTypeDrop()
{
	Sys::Sphere sphere(mPosition, static_cast<EnemyParmsBase*>(mParms)->mGeneral.mPrivateRadius.mValue);
	bool result = false;

	CellIteratorArg ciArg(sphere);
	CellIterator it(ciArg);
	CI_LOOP(it)
	{
		Creature* creature = static_cast<Creature*>(*it);
		if (!creature->isAlive()) {
			continue;
		}

		// Is creature Pikmin or Navi?
		if (creature->isNavi() || (creature->isPiki() && static_cast<Piki*>(creature)->isPikmin())) {
			f32 privateRadius = static_cast<EnemyParmsBase*>(mParms)->mGeneral.mPrivateRadius.mValue;
			Vector2f delta;
			getDistanceTo(creature, delta);

			// Is creature within private radius?
			if (IS_WITHIN_CIRCLE(delta.x, delta.y, privateRadius)) {
				result = true;
			}
		}
	}

	return result;
}

/**
 * @note Address: 0x80102E64
 * @note Size: 0x90
 */
void EnemyBase::startStoneState()
{
	// If not bittered and is vulnerable
	if (isEvent(0, EB_BitterImmune) == false && isEvent(0, EB_Bittered) == false) {
		if (isEvent(0, EB_NoInterrupt)) {
			enableEvent(0, EB_BitterQueued);
			return;
		}

		if (mEnemyStoneObj->start()) {
			mLifecycleFSM->transit(this, EnemyBaseFSM::EBS_Stone, 0);
		} else {
			enableEvent(0, EB_BitterQueued);
		}
	}
}

/**
 * @note Address: 0x80102EF4
 * @note Size: 0x14
 */
void EnemyBase::doStartStoneState() { mTargetVelocity = Vector3f(0.0f); }

/**
 * @note Address: 0x80102F08
 * @note Size: 0x4
 */
void EnemyBase::doFinishStoneState() { }

void EnemyBase::updateEffects()
{
	WalkSmokeEffect::Mgr* smokeMgr = getWalkSmokeEffectMgr();
	if (smokeMgr) {
		smokeMgr->update(this);
	}
}

/**
 * @note Address: 0x80102F14
 * @note Size: 0x80
 */
void EnemyBase::doUpdateCommon()
{
	scaleDamageAnim();
	resetCollEvent();

	if ((mLod.isFlag(AILOD_IsVisible)) && isAlive()) {
		updateEffects();
	}
}

/**
 * @note Address: 0x80102F94
 * @note Size: 0x34
 */
void EnemyBase::doAnimation() { static_cast<EnemyBaseFSM::StateMachine*>(mLifecycleFSM)->animation(this); }

/**
 * Updates the animator of the EnemyBase object by animating it based on the current speed and delta time.
 * This function also updates the model's joint matrix calculation with the animator's calculated matrix.
 *
 * @note Address: 0x80102FF8
 * @note Size: 0x88
 */
void EnemyBase::doAnimationUpdateAnimator()
{
	mAnimator->animate(mAnimator->mSpeed * sys->mDeltaTime);

	SysShape::Animator* animator = &mAnimator->getAnimator();
	animator->setModelCalc(mModel, 0);
}

/**
 * Disables animation culling for the EnemyBase object.
 * This function stops the current animation, updates the animator, and performs necessary transformations based on the object's state.
 * If the object has a pellet, it applies scaling and translation to the base transformation matrix and updates the position.
 * If the object is sticked to something, it performs the stick animation.
 * Otherwise, it applies scaling, rotation, and translation to the base transformation matrix based on the object's properties.
 * After updating the transformation matrix, it calculates the model's position matrix, updates the collision tree, and handles sound
 * animation if necessary.
 *
 * @note Address: 0x80103080
 * @note Size: 0x1E0
 */
void EnemyBase::doAnimationCullingOff()
{
	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();

	if (mPellet) {
		viewMakeMatrix(mBaseTrMatrix);
		Matrixf mtx;
		PSMTXScale(mtx.mMatrix.mtxView, mScale.x, mScale.y, mScale.z);
		PSMTXConcat(mBaseTrMatrix.mMatrix.mtxView, mtx.mMatrix.mtxView, mBaseTrMatrix.mMatrix.mtxView);

		Vector3f pos;
		mBaseTrMatrix.getTranslation(pos);
		onSetPosition(pos);
		onSetPositionPost(pos);

	} else if (isStickTo()) {
		doAnimationStick();

	} else {
		Vector3f rot = mRotation + mDamageAnimRotation + mStunAnimRotation;
		mBaseTrMatrix.makeSRT(mScale, rot, mPosition);
	}

	sys->mTimers->_start("e-calc", true);
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();
	sys->mTimers->_stop("e-calc");
	mCollTree->update();

	if (mAnimator->getAnimator().isFlag(SysShape::Animator::AnimCompleted)) {
		static_cast<PSM::CreatureAnime*>(mSoundObj)->setAnime(nullptr, 1, 0.0f, 0.0f);
	}
}

/**
 * @note Address: 0x8010329C
 * @note Size: 0x7C
 */
void EnemyBase::doAnimationStick()
{
	Vector3f rot = mRotation + mDamageAnimRotation + mStunAnimRotation;
	mBaseTrMatrix.makeSRT(mScale, rot, mPosition);
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void EnemyBase::doAnimationCullingOn() { mModel->mJ3dModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = nullptr; }

/**
 * @note Address: 0x80103338
 * @note Size: 0x7C
 */
void EnemyBase::show()
{
	if (isEvent(0, EB_Bittered)) {
		if (mEnemyStoneObj->isFlag(EnemyStone::STONE_Fit)) {
			mModel->hide();
		} else {
			mModel->show();
		}
	} else {
		mModel->show();
	}
}

/**
 * @note Address: 0x801033B4
 * @note Size: 0x54
 */
void EnemyBase::hide()
{
	if (isEvent(0, EB_Bittered)) {
		mModel->hide();
	} else {
		mModel->hide();
	}
}

/**
 * @note Address: 0x80103408
 * @note Size: 0x108
 */
void EnemyBase::doEntryCarcass()
{
	if (mLod.isFlag(AILOD_IsVisible)) {
		show();
		changeMaterial();
	} else {
		hide();
	}

	if (!(isEvent(0, EB_ModelHidden))) {
		mModel->mJ3dModel->entry();
	}
}

/**
 * @note Address: 0x80103510
 * @note Size: 0x13C
 */
void EnemyBase::doEntryLiving()
{
	if (mLod.isFlag(AILOD_IsVisible)) {
		show();
		changeMaterial();
	} else {
		if (BaseHIOParms::sEntryOpt) {
			if (!gameSystem->isMultiplayerMode())
				return;
		}

		hide();
	}

	if (!(isEvent(0, EB_ModelHidden))) {
		mModel->mJ3dModel->entry();
	}
}

/**
 * @note Address: 0x8010364C
 * @note Size: 0x34
 */
void EnemyBase::doEntry() { mLifecycleFSM->entry(this); }

/**
 * @note Address: 0x80103680
 * @note Size: 0x28
 */
void EnemyBase::doSetView(int viewportNumber) { mModel->setCurrentViewNo((u16)viewportNumber); }

/**
 * @note Address: 0x801036A8
 * @note Size: 0x54
 */
bool EnemyBase::isCullingOff()
{
	if (mPellet) {
		return true;
	}

	return !isEvent(0, EB_Cullable) || mLod.isFlag(AILOD_IsVisible) || mLod.isFlag(AILOD_PikiInCell) || isEvent(1, EB2_Dropping);
}

/**
 * @note Address: 0x801036FC
 * @note Size: 0x78
 */
void EnemyBase::doViewCalc()
{
	if (isCullingOff()) {
		mModel->viewCalc();
	}
}

/**
 * Simulates the movement of the enemy on the ground.
 *
 * @param frameRate The frame rate of the simulation.
 *
 * @note Address: 0x80103774
 * @note Size: 0xAC
 */
void EnemyBase::doSimulationGround(f32 frameRate)
{
	Vector3f velocity = mTargetVelocity;
	velocity.y        = mCurrentVelocity.y;

	Vector3f accel   = velocity - mCurrentVelocity;
	accel            = accel * getAccelerationScale(frameRate);
	mCurrentVelocity = mCurrentVelocity + accel;

	if (isEarthQuakeOrDropping()) {
		mCurrentVelocity.y = -((3.0f * (frameRate * _aiConstants->mGravity.mData)) - mCurrentVelocity.y);
		return;
	}

	mCurrentVelocity.y = -((frameRate * _aiConstants->mGravity.mData) - mCurrentVelocity.y);
}

/**
 * @note Address: 0x80103820
 * @note Size: 0x58
 */
void EnemyBase::doSimulationFlying(f32 frameRate)
{
	Vector3f accel   = mTargetVelocity - mCurrentVelocity;
	accel            = accel * getAccelerationScale(frameRate);
	mCurrentVelocity = mCurrentVelocity + accel;
}

/**
 * @note Address: 0x80103878
 * @note Size: 0x58
 */
void EnemyBase::doSimulationStick(f32 frameRate)
{
	Vector3f accel   = mTargetVelocity - mCurrentVelocity;
	accel            = accel * getAccelerationScale(frameRate);
	mCurrentVelocity = mCurrentVelocity + accel;
}

/**
 * @note Address: 0x801038D0
 * @note Size: 0x70
 */
void EnemyBase::updateSpheres()
{
	Sys::Sphere sphere;
	mCollTree->mPart->getSphere(sphere);

	mBoundingSphere         = sphere;
	mCurLodSphere.mPosition = mBoundingSphere.mPosition;
}

/**
 * @note Address: 0x80103940
 * @note Size: 0xB8
 */
void EnemyBase::createDropEffect(const Vector3f& position, f32 scale)
{
	efx::Arg enemyArg(position);
	efx::TEnemyDownSmoke downSmoke(1.0f);
	downSmoke.mScale = scale;
	downSmoke.create(&enemyArg);

	PSStartEnemyDownSmokeSE(this, scale);
}

/**
 * @note Address: 0x801039F8
 * @note Size: 0x158
 */
void EnemyBase::createSplashDownEffect(const Vector3f& position, f32 scale)
{
	Vector3f effectPosition;
	if (mWaterBox) {
		effectPosition = Vector3f(position.x, *mWaterBox->getSeaHeightPtr(), position.z);
	} else {
		effectPosition = position;
	}

	efx::ArgScale scaleArg(effectPosition, scale);
	efx::TEnemyDownWat waterEffects;

	waterEffects.create(&scaleArg);
	PSStartEnemyDownWatSE(this, scale);
}

/**
 * @note Address: 0x80103B50
 * @note Size: 0x1DC
 */
void EnemyBase::createBounceEffect(const Vector3f& position, f32 scale)
{
	if (mWaterBox) {
		createSplashDownEffect(position, scale);
	} else {
		createDropEffect(position, scale);
	}
}

/**
 * @note Address: 0x80103D2C
 * @note Size: 0x168
 */
void EnemyBase::outWaterCallback()
{
	f32 downSmokeScale = getDownSmokeScale();
	if (downSmokeScale > 0.0f) {
		createSplashDownEffect(mPosition, downSmokeScale);
	}
}

/**
 * @note Address: 0x80103E94
 * @note Size: 0x168
 */
void EnemyBase::inWaterCallback(WaterBox* water)
{
	f32 downSmokeScale = getDownSmokeScale();
	if (downSmokeScale > 0.0f) {
		createSplashDownEffect(mPosition, downSmokeScale);
	}
}

/**
 * Finish dropping function for the EnemyBase class.
 * This function is called when the enemy finishes dropping.
 * If latchToMap is true, the enemy's position is adjusted to the minimum Y position on the map.
 * It adds damage to the enemy, enables the squash on damage animation event,
 * creates a bounce effect at the enemy's position, and disables the dropping event.
 * Finally, it sets the current velocity of the enemy to 0.
 *
 * @param latchToMap If true, the enemy's position is adjusted to the minimum Y position on the map.
 *
 * @note Address: 0x80103FFC
 * @note Size: 0x28C
 */
void EnemyBase::finishDropping(bool latchToMap)
{
	if (!isEvent(1, EB2_Dropping)) {
		return;
	}

	addDamage(0.0f, 1.0f);
	enableEvent(0, EB_SquashOnDamageAnim);

	Sys::Sphere ball;
	getBoundingSphere(ball);
	Vector3f pos = ball.mPosition;

	if (latchToMap && mapMgr) {
		pos.y = mapMgr->getMinY(pos);
	}

	createBounceEffect(pos, getDownSmokeScale());

	disableEvent(1, EB2_Dropping);
	mCurrentVelocity = 0.0f;
}

/**
 * @note Address: 0x80104288
 * @note Size: 0x80
 */
void EnemyBase::bounceProcedure(Sys::Triangle* triangle)
{
	bounceCallback(triangle);
	disableEvent(0, EB_CollisionActive);

	finishDropping(true);
	resetDroppingMassZero();

	mLifecycleFSM->bounceProcedure(this, triangle);
}

/**
 * Applies collision detection and response for the EnemyBase object on the map and platforms.
 * If the EnemyBase is not stuck, it applies simulation for ground or flying enemies based on their event status.
 * If the EnemyBase is flying, it disables collision detection for floor and other objects.
 * It calculates the collision sphere based on the position, height offset from the floor, and effect offset.
 * It then checks the movement of the EnemyBase using the collision sphere and velocity, and applies bounce and wall triangle logic.
 * If platform collisions are enabled, it also checks for platform collisions and applies bounce and wall triangle logic.
 * Finally, it updates the position of the EnemyBase based on the collision result.
 *
 * @param frameRate The frame rate of the simulation.
 *
 * @note Address: 0x80104340
 * @note Size: 0x6D4
 */
void EnemyBase::collisionMapAndPlat(f32 frameRate)
{
	// If isn't stuck
	if (!isStickTo()) {
		// Apply simulation for ground or flying enemies
		if (!(isEvent(0, EB_Untargetable))) {
			doSimulationGround(frameRate);
		} else {
			doSimulationFlying(frameRate);

			// If we're flying, we don't need to check collision for floor and other objects
			disableEvent(0, EB_CollisionActive);
		}

		f32 yOffsetFromMap = getParms().mHeightOffsetFromFloor.mValue;

		Vector3f pos  = getPosition();
		mEffectOffset = getOffsetForMapCollision();

		Sys::Sphere collSphere;
		pos += mEffectOffset;
		pos.y += yOffsetFromMap;
		collSphere.mPosition = pos;
		collSphere.mRadius   = yOffsetFromMap;

		f32 bounceAmount = isEarthQuakeOrDropping() ? 0.0f : static_cast<CreatureProperty*>(mParms)->mProps.mWallReflection.mValue;

		mAcceleration.y = 0.0f;

		Vector3f newVelocity = mCurrentVelocity + mAcceleration;

		// Check where our wanted movement will reach us
		MoveInfo moveInfo(&collSphere, &newVelocity, bounceAmount);
		moveInfo.mMovingCreature = this;
		mapMgr->traceMove(moveInfo, frameRate);

		mCurrentVelocity = newVelocity;

		// Apply acceleration by converting the velocity to a direction,
		// clamping it, and then setting the velocity again

		f32 curVelSpeed = mCurrentVelocity.normalise();
		f32 accelSpeed  = mAcceleration.length();

		if (curVelSpeed > accelSpeed) {
			curVelSpeed -= accelSpeed;
			mCurrentVelocity
			    = Vector3f(mCurrentVelocity.x * curVelSpeed, mCurrentVelocity.y * curVelSpeed, mCurrentVelocity.z * curVelSpeed);
			mAcceleration = 0.0f;
		} else {
			mCurrentVelocity
			    = Vector3f(mCurrentVelocity.x * curVelSpeed, mCurrentVelocity.y * curVelSpeed, mCurrentVelocity.z * curVelSpeed);
			mAcceleration = 0.0f;
		}

		// Apply bounce triangle logic
		if (!mFloorTriangle && moveInfo.mFloorTriangle) {
			bounceProcedure(moveInfo.mFloorTriangle);
		}

		mFloorTriangle = moveInfo.mFloorTriangle;
		mFloorNormal   = moveInfo.mFloorNormal;

		// Apply wall triangle logic
		if (!mWallTriangle && moveInfo.mWallTriangle) {
			wallCallback(moveInfo);
		}

		mWallTriangle = moveInfo.mWallTriangle;

		// Handles platform collisions for bouncing and walls
		if (platMgr && isEvent(0, EB_PlatformCollEnabled)) {
			moveInfo.mVelocity = &mCurrentVelocity;
			platMgr->traceMove(moveInfo, frameRate);

			if (!mFloorTriangle) {
				if (moveInfo.mFloorTriangle) {
					bounceProcedure(moveInfo.mFloorTriangle);
				}

				mFloorTriangle = moveInfo.mFloorTriangle;
				mFloorNormal   = moveInfo.mFloorNormal;
			}

			if (!mWallTriangle && moveInfo.mWallTriangle) {
				wallCallback(moveInfo);
			}

			mWallTriangle = moveInfo.mWallTriangle;
		}

		if (mapMgr->hasHiddenCollision()) {
			mapMgr->constraintBoundBox(collSphere);
		}

		// Now move to
		mPosition.x = collSphere.mPosition.x - mEffectOffset.x;
		mPosition.y = collSphere.mPosition.y - mEffectOffset.y - yOffsetFromMap;
		mPosition.z = collSphere.mPosition.z - mEffectOffset.z;

		updateSpheres();
		return;
	}

	mAcceleration = 0.0f;

	doSimulationStick(frameRate);

	mPosition += mCurrentVelocity;

	Vector3f stick(sinf(mFaceDir), 0.0f, cosf(mFaceDir));
	updateStick(stick);
	updateSpheres();
	updateCell();
}

/**
 * @note Address: 0x80104A38
 * @note Size: 0x20
 */
void EnemyBase::doSimulationCarcass(f32 frameRate) { updateWaterBox(); }

/**
 * @note Address: 0x80104A58
 * @note Size: 0x34
 */
void EnemyBase::doSimulation(f32 frameRate) { mLifecycleFSM->simulation(this, frameRate); }

/**
 * @note Address: 0x80104A8C
 * @note Size: 0xD8
 */
void EnemyBase::doSimulationConstraint(f32 frameRate)
{
	if (!(isEvent(0, EB_HardConstrained))) {
		// If we're moving somewhere, enable checking collision
		if (mAcceleration.x != 0.0f || mAcceleration.z != 0.0f) {
			enableEvent(0, EB_CollisionActive);
		} else if (mFloorTriangle) {
			// If we've just bounce off a triangle, disable collision
			disableEvent(0, EB_CollisionActive);
		}

		if (isEvent(0, EB_CollisionActive)) {
			collisionMapAndPlat(frameRate);
		}
	}

	updateSpheres();
	updateWaterBox();
}

/**
 * @note Address: 0x80104B64
 * @note Size: 0x70
 */
void EnemyBase::gotoHell()
{
	// Don't kill if dead
	if (!isEvent(0, EB_Alive)) {
		return;
	}

	throwupItem();
	EnemyKillArg killArg(CKILL_DisableDeathEffects | CKILL_LeaveNoCarcass | CKILL_NotKilledByPlayer);
	kill(&killArg);
}

/**
 * @note Address: 0x80104BD4
 * @note Size: 0x30
 */
void EnemyBase::setAnimMgr(SysShape::AnimMgr* mgr) { mAnimator->setAnimMgr(mgr); }

/**
 * Sets the anime for the enemy base based on the current event.
 * If the event is EB_PS1, it retrieves the animation information and sets the anime sound data accordingly.
 * If the event is EB_PS2 or EB_PS3, it sets the anime sound data to -1.
 * If the event is not EB_PS1, EB_PS2, or EB_PS3, it sets the anime sound data to nullptr.
 *
 * @note Address: 0x80104C04
 * @note Size: 0x1B4
 */
void EnemyBase::setPSEnemyBaseAnime()
{
	if (isEvent(0, EB_PS1)) {
		int idx = getCurrAnimIndex();

		SysShape::AnimInfo* info = static_cast<SysShape::AnimInfo*>(mAnimator->getAnimator(0).mAnimMgr->mAnimInfo.mChild)->getInfoByID(idx);

		JAIAnimeFrameSoundData* file = info->mBasFile;
		if (file) {
			SysShape::KeyEvent* event1 = info->getAnimKeyByType(0);
			SysShape::KeyEvent* event2 = info->getAnimKeyByType(1);

			if (event1 && event2) {
				f32 val1 = (f32)event1->mFrame;
				f32 val2 = (f32)event2->mFrame;
				mSoundObj->setAnime((JAIAnimeSoundData*)file, 1, val1, val2);
				return;
			}

			mSoundObj->setAnime((JAIAnimeSoundData*)file, 1, 0.0f, 0.0f);
			return;
		}

		mSoundObj->setAnime(nullptr, 1, 0.0f, 0.0f);
		return;
	}

	if (isEvent(0, EB_PS2)) {
		mSoundObj->setAnime((JAIAnimeSoundData*)-1, 1, 0.0f, 0.0f);
		return;
	}

	if (isEvent(0, EB_PS3)) {
		mSoundObj->setAnime((JAIAnimeSoundData*)-1, 1, 0.0f, 0.0f);
		return;
	}

	mSoundObj->setAnime(nullptr, 1, 0.0f, 0.0f);
}

/**
 * Starts the blending animation for the EnemyBase object.
 *
 * @param start The starting frame of the blending animation.
 * @param end The ending frame of the blending animation.
 * @param blendFunc The blend function to be used for the animation.
 * @param framerate The framerate of the animation.
 * @param inputListener The motion listener for the animation. If null, the EnemyBase object itself will be used as the listener.
 *
 * @note Address: 0x80104DB8
 * @note Size: 0x1F0
 */
void EnemyBase::startBlend(int start, int end, SysShape::BlendFunction* blendFunc, f32 framerate, SysShape::MotionListener* inputListener)
{
	SysShape::MotionListener* listener = inputListener;
	if (!listener) {
		listener = static_cast<SysShape::MotionListener*>(this);
	}

	static_cast<EnemyBlendAnimatorBase*>(mAnimator)->startBlend(start, end, blendFunc, framerate, listener);

	disableEvent(0, EB_PS1 + EB_PS2 + EB_PS3 + EB_PS4);
	enableEvent(0, EB_PS3);

	if (isEvent(0, EB_PS1)) {
		int idx                  = getCurrAnimIndex();
		SysShape::AnimInfo* info = static_cast<SysShape::AnimInfo*>(mAnimator->getAnimator(0).mAnimMgr->mAnimInfo.mChild)->getInfoByID(idx);
		JAIAnimeFrameSoundData* file = info->mBasFile;

		if (file) {
			SysShape::KeyEvent* event1 = info->getAnimKeyByType(0);
			SysShape::KeyEvent* event2 = info->getAnimKeyByType(1);

			if (event1 && event2) {
				f32 val1 = (f32)event1->mFrame;
				f32 val2 = (f32)event2->mFrame;
				mSoundObj->setAnime((JAIAnimeSoundData*)file, 1, val1, val2);
				return;
			}

			mSoundObj->setAnime((JAIAnimeSoundData*)file, 1, 0.0f, 0.0f);
			return;
		}

		mSoundObj->setAnime(nullptr, 1, 0.0f, 0.0f);
		return;
	}

	if (isEvent(0, EB_PS2)) {
		mSoundObj->setAnime((JAIAnimeSoundData*)-1, 1, 0.0f, 0.0f);
		return;
	}

	if (isEvent(0, EB_PS3)) {
		mSoundObj->setAnime((JAIAnimeSoundData*)-1, 1, 0.0f, 0.0f);
		return;
	}

	mSoundObj->setAnime(nullptr, 1, 0.0f, 0.0f);
}

/**
 * @note Address: 0x80104FA8
 * @note Size: 0x50
 */
void EnemyBase::endBlend()
{
	if (mAnimator->getTypeID() == 'blnd') {
		static_cast<EnemyBlendAnimatorBase*>(mAnimator)->endBlend();
	}
}

/**
 * @note Address: 0x80105004
 * @note Size: 0x224
 */
void EnemyBase::startMotion(int id, SysShape::MotionListener* inputListener)
{
	SysShape::MotionListener* listener;
	if (!(listener = inputListener)) {
		inputListener = static_cast<SysShape::MotionListener*>(this);
	}

	EnemyAnimatorBase* animator = mAnimator;
	animator->mFlags.unset(SysShape::Animator::AnimCompleted | SysShape::Animator::AnimFinishMotion);
	animator->mNormalizedTime = 1.0f;

	animator->getAnimator(0).startAnim(id, inputListener);

	disableEvent(0, EB_PS1 + EB_PS2 + EB_PS3 + EB_PS4);
	enableEvent(0, EB_PS1);

	if (isEvent(0, EB_PS1)) {
		int idx                  = getCurrAnimIndex();
		SysShape::AnimInfo* info = static_cast<SysShape::AnimInfo*>(mAnimator->getAnimator(0).mAnimMgr->mAnimInfo.mChild)->getInfoByID(idx);
		JAIAnimeFrameSoundData* file = info->mBasFile;

		if (file) {
			SysShape::KeyEvent* event1 = info->getAnimKeyByType(0);
			SysShape::KeyEvent* event2 = info->getAnimKeyByType(1);

			if (event1 && event2) {
				f32 val1 = (f32)event1->mFrame;
				f32 val2 = (f32)event2->mFrame;
				mSoundObj->setAnime((JAIAnimeSoundData*)file, 1, val1, val2);
				return;
			}

			mSoundObj->setAnime((JAIAnimeSoundData*)file, 1, 0.0f, 0.0f);
			return;
		}

		mSoundObj->setAnime(nullptr, 1, 0.0f, 0.0f);
		return;
	}

	if (isEvent(0, EB_PS2)) {
		mSoundObj->setAnime((JAIAnimeSoundData*)-1, 1, 0.0f, 0.0f);
		return;
	}

	if (isEvent(0, EB_PS3)) {
		mSoundObj->setAnime((JAIAnimeSoundData*)-1, 1, 0.0f, 0.0f);
		return;
	}

	mSoundObj->setAnime(nullptr, 1, 0.0f, 0.0f);
}

/**
 * @note Address: 0x80105228
 * @note Size: 0x44
 */
void EnemyBase::setMotionFrame(f32 frame) { mAnimator->getAnimator().setCurrFrame(frame); }

/**
 * @note Address: 0x8010526C
 * @note Size: 0x34
 */
f32 EnemyBase::getMotionFrame() { return mAnimator->getAnimator().mTimer; }

/**
 * @note Address: 0x801052A0
 * @note Size: 0x40
 */
void EnemyBase::finishMotion() { mAnimator->getAnimator(0).setFlag(SysShape::Animator::AnimFinishMotion); }

/**
 * @note Address: 0x801052E0
 * @note Size: 0x20
 */
void EnemyBase::onKeyEvent(const SysShape::KeyEvent& event)
{
	EnemyAnimKeyEvent* animKeyEvent = mCurAnim;
	animKeyEvent->mFrame            = event.mFrame;
	animKeyEvent->mType             = event.mType;
	animKeyEvent->mIsPlaying        = true;
}

/**
 * @note Address: 0x80105300
 * @note Size: 0x80
 */
bool EnemyBase::stimulate(Interaction& interaction)
{
	bool success = false;

	if (interaction.actCommon(this)) {
		success = interaction.actEnemy(this);
	}

	return success;
}

/**
 * @note Address: 0x80105390
 * @note Size: 0x30
 */
void EnemyBase::lifeRecover()
{
	mHealth += mMaxHealth * getParms().mRegenerationRate.mValue;
	if (mHealth > mMaxHealth) {
		mHealth = mMaxHealth;
	}
}

/**
 * Scales the damage animation of the enemy base.
 * This function adjusts the scale and rotation of the enemy base
 * based on the damage received. It applies various modifiers and
 * animations to create a visual effect of damage.
 *
 * @note Address: 0x801053C0
 * @note Size: 0x33C
 */
void EnemyBase::scaleDamageAnim()
{
	if (!isEvent(0, EB_DamageAnimEnabled) && mDamageAnimTimer == 0.0f) {
		return;
	}

	if (mDamageAnimTimer == 0.0f) {
		if (isEvent(0, EB_TakingDamage)) {
			mDamageAnimTimer += sys->mDeltaTime;
		}

		return;
	}

	f32 horizontalModifier = 0.0f;
	f32 scaleDuration      = getParms().mDamageScaleDuration.mValue;

	f32 factor;
	if (isEvent(0, EB_SquashOnDamageAnim)) {
		factor = 2.5f;
	} else {
		factor = 1.0f;
	}

	if (isEvent(0, EB_EatingWhitePikmin)) {
		mDamageAnimTimer += 0.5f * sys->mDeltaTime;
	} else {
		mDamageAnimTimer += sys->mDeltaTime;
	}

	if (isEvent(0, EB_Bittered)) {
		if (mDamageAnimTimer > scaleDuration) {
			finishScaleDamageAnim();
		} else {
			horizontalModifier = 1.0f - getDamageAnimFrac(scaleDuration);
		}

		f32 xWobbleAmt        = (TAU * DEG2RAD) * factor * scaledSin(horizontalModifier);
		mDamageAnimRotation.x = horizontalModifier * xWobbleAmt;

		mDamageAnimRotation.y = 0.0f;

		f32 zWobbleAmt        = sinf(2.0f * horizontalModifier * TAU) * ((TAU / 144.0f) * factor);
		mDamageAnimRotation.z = horizontalModifier * zWobbleAmt;

		f32 scaleVal = mScaleModifier;
		mScale.z     = scaleVal;
		mScale.y     = scaleVal;
		mScale.x     = scaleVal;
		return;
	}

	if (mDamageAnimTimer > scaleDuration) {
		finishScaleDamageAnim();
	} else {
		f32 s              = scaledSin(getDamageAnimFrac(scaleDuration));
		f32 t              = 1.0f - getDamageAnimFrac(scaleDuration);
		horizontalModifier = t * s;
	}

	if (isEvent(0, EB_EatingWhitePikmin)) {
		horizontalModifier *= 2.0f;
	}

	f32 xzScale = horizontalModifier * (factor * getParms().mHorizontalDamageScale.mValue);
	if (isEvent(0, EB_SquashOnDamageAnim)) {
		mScale.x = mScaleModifier + xzScale;
		mScale.y = -((horizontalModifier * getParms().mVerticalDamageScale.mValue) - mScaleModifier);
		mScale.z = mScaleModifier + xzScale;
		return;
	}

	mScale.x = mScaleModifier - xzScale;
	mScale.y = (horizontalModifier * getParms().mVerticalDamageScale.mValue) + mScaleModifier;
	mScale.z = mScaleModifier - xzScale;
}

/**
 * @note Address: 0x801056FC
 * @note Size: 0x24
 */
void EnemyBase::finishScaleDamageAnim()
{
	mDamageAnimTimer = 0.0f;
	disableEvent(0, EB_EatingWhitePikmin);
	disableEvent(0, EB_SquashOnDamageAnim);
}

/**
 * @note Address: 0x80105720
 * @note Size: 0xF8
 */
void EnemyBase::deathProcedure()
{
	disableEvent(0, EB_DamageAnimEnabled);
	setAlive(false);

	if (isEvent(0, EB_Bittered)) {
		throwupItem();
	} else {
		throwupItemInDeathProcedure();
	}

	startMotion();

	if (isEvent(0, EB_DeathEffectEnabled)) {
		createDeadBombEffect();
		PSStartEnemyFatalHitSE(this, 0.0f);
	}

	PSM::EnemyBase* soundObj = mSoundObj;
	if ((soundObj->getCastType() == PSM::CCT_EnemyMidBoss) || (soundObj->getCastType() == PSM::CCT_EnemyBigBoss)) {
		static_cast<PSM::EnemyBoss*>(soundObj)->onDeathMotionTop();
	}
}

/**
 * @note Address: 0x80105874
 * @note Size: 0xD8
 */
void EnemyBase::createDeadBombEffect()
{
	Vector3f effectPos;
	getCommonEffectPos(effectPos);

	f32 scale                    = mScaleModifier;
	EnemyTypeID::EEnemyTypeID id = getEnemyTypeID();

	efx::ArgEnemyType fxArg(effectPos, id, scale);
	efx::TEnemyBomb bombEffect;
	bombEffect.create(&fxArg);
}

/**
 * @note Address: 0x8010594C
 * @note Size: 0x54
 */
void EnemyBase::getThrowupItemPosition(Vector3f* throwupItemPosition)
{
	Sys::Sphere sphere;
	getBoundingSphere(sphere);
	*throwupItemPosition = sphere.mPosition;
}

/**
 * @note Address: 0x801059A0
 * @note Size: 0x18
 */
void EnemyBase::getThrowupItemVelocity(Vector3f* throwupItemVelocity) { *throwupItemVelocity = Vector3f(0.0f, 200.0f, 0.0f); }

/**
 * @note Address: 0x801059B8
 * @note Size: 0x4B0
 */
void EnemyBase::throwupItem()
{
	Vector3f throwupPosition;
	getThrowupItemPosition(&throwupPosition);

	PelletInitArg pelletInitArg;

	if (pelletMgr->makePelletInitArg(pelletInitArg, mPelletDropCode)) {
		pelletInitArg.mState         = PelBirthType_ScaleAppear;
		EnemyTypeID::EEnemyTypeID id = getEnemyTypeID();

		// For bosses in the final floor of a cave in story mode,
		// should the treasure they emit have their carry weight
		// adapted to the squads amount?
		// (Allows squads that have been annihilated to recover treasures)
		if (IS_ENEMY_BOSS(id) && gameSystem && gameSystem->isStoryMode() && gameSystem->mIsInCave && Cave::randMapMgr
		    && Cave::randMapMgr->isLastFloor()) {
			pelletInitArg.mAdjustWeightForSquad = true;
		}

		if (Pellet::sFromTekiEnable) {
			pelletInitArg.mFromEnemy = true;
		}

		mHeldPellet = pelletMgr->birth(&pelletInitArg);

		if (mHeldPellet) {
			InteractMattuan mattuan = InteractMattuan(this, 8.0f);
			mHeldPellet->stimulate(mattuan);

			Vector3f throwupVelocity;
			getThrowupItemVelocity(&throwupVelocity);

			mHeldPellet->setPosition(throwupPosition, false);
			mHeldPellet->setVelocity(throwupVelocity);
			mHeldPellet->createKiraEffect(throwupPosition);

			Radar::Mgr::exit(this);
			mSoundObj->startSound(PSSE_EN_ENEMY_LOOSE_ITEM, 0);
		}
	}

	if (!(randFloat() < mPelletInfo.mSpawnChance)) {
		return;
	}

	f32 range = (mPelletInfo.mMaxPellets - mPelletInfo.mMinPellets) * randFloat();

	f32 roundRange;
	if (range >= 0.0f) {
		roundRange = range + 0.5f;
	} else {
		roundRange = range - 0.5f;
	}

	int pelletAmount = mPelletInfo.mMinPellets + (int)roundRange;

	f32 velocity = 0.0f;
	switch (mPelletInfo.mSize) {
	case PELLET_NUMBER_ONE:
		velocity = 150.0f;
		break;
	case PELLET_NUMBER_FIVE:
		velocity = 200.0f;
		break;
	case PELLET_NUMBER_TEN:
		velocity = 250.0f;
		break;
	case PELLET_NUMBER_TWENTY:
		velocity = 250.0f;
		break;
	}

	for (int i = 0; i < pelletAmount; i++) {
		u8 pelletColor = mPelletInfo.mColor;
		if (pelletColor == PELCOLOR_RANDOM) {
			pelletColor = randFloat() * 3.0f;
		}

		PelletNumberInitArg numberInitArg(mPelletInfo.mSize, pelletColor);
		numberInitArg.mState = PelBirthType_ScaleAppear;

		Pellet* pellet = pelletMgr->birth(&numberInitArg);
		if (pellet) {
			Vector3f throwupVelocity = Vector3f(velocity * (randFloat() - 0.5f), velocity, velocity * (randFloat() - 0.5f));
			pellet->setPosition(throwupPosition, false);
			pellet->setVelocity(throwupVelocity);
			pellet->createKiraEffect(throwupPosition);
		}
	}
}

/**
 * @note Address: 0x80105E6C
 * @note Size: 0x4
 */
void EnemyBase::doDebugDraw(Graphics&) { }

/**
 * @note Address: 0x80105E70
 * @note Size: 0x80
 */
void EnemyBase::getLifeGaugeParam(LifeGaugeParam& param)
{
	if (moviePlayer && moviePlayer->isFlag(MVP_IsActive)) {
		param.mIsGaugeShown = false;
	} else {
		param.mIsGaugeShown = isEvent(0, EB_LifegaugeVisible) && mLod.isFlag(AILOD_IsVisible);
	}

	if (param.mIsGaugeShown) {
		doGetLifeGaugeParam(param);
	}
}

/**
 * @note Address: 0x80105EF0
 * @note Size: 0x40
 */
void EnemyBase::doGetLifeGaugeParam(LifeGaugeParam& param)
{
	f32 heightOffset = mPosition.y + getParms().mLifeMeterHeight.mValue;
	f32 z            = mPosition.z;
	f32 x            = mPosition.x;

	param.mPosition        = Vector3f(x, heightOffset, z);
	param.mCurrHealthRatio = mHealth / mMaxHealth;
	param.mRadius          = 10.0f;
}

/**
 * @note Address: 0x80105F30
 * @note Size: 0x50
 */
void EnemyBase::onStickStart(Creature* other)
{
	if (other->isPiki()) {
		mStuckPikminCount++;
	}
}

/**
 * @note Address: 0x80105F80
 * @note Size: 0x50
 */
void EnemyBase::onStickEnd(Creature* other)
{
	if (other->isPiki()) {
		mStuckPikminCount--;
	}
}

/**
 * @note Address: 0x80105FD0
 * @note Size: 0x5C
 */
bool EnemyBase::injure()
{
	if (isEvent(0, EB_TakingDamage)) {
		if (isEvent(0, EB_Invulnerable) == false) {
			mHealth -= mInstantDamage;

			if (mHealth < 0.0f) {
				mHealth = 0.0f;
			}
		}

		mInstantDamage = 0.0f;
		disableEvent(0, EB_TakingDamage);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8010602C
 * @note Size: 0x40
 */
void EnemyBase::addDamage(f32 damageAmt, f32 flickSpeed)
{
	if (isEvent(0, EB_Invulnerable)) {
		return;
	}

	mInstantDamage += damageAmt;
	if (isEvent(0, EB_FlickEnabled)) {
		mFlickTimer += flickSpeed;
	}

	enableEvent(0, EB_TakingDamage);
}

/**
 * @note Address: 0x8010606C
 * @note Size: 0x48
 */
bool EnemyBase::damageCallBack(Creature* sourceCreature, f32 damage, CollPart* p3)
{
	if (isEvent(0, EB_Invulnerable) == false) {
		mInstantDamage += damage;

		if (isEvent(0, EB_FlickEnabled)) {
			mFlickTimer += 1.0f;
		}

		enableEvent(0, EB_TakingDamage);
	}

	return true;
}

/**
 * @note Address: 0x801060B4
 * @note Size: 0x8
 */
bool EnemyBase::pressCallBack(Creature*, f32, CollPart*) { return false; }

/**
 * @note Address: 0x801060BC
 * @note Size: 0x8
 */
bool EnemyBase::flyCollisionCallBack(Creature*, f32, CollPart*) { return false; }

/**
 * @note Address: 0x801060C4
 * @note Size: 0x248
 */
bool EnemyBase::hipdropCallBack(Creature* sourceCreature, f32 damage, CollPart* p3)
{
	f32 purpleDamage = getParms().mPurplePikiStunDamage;

	if (isEvent(0, EB_Invulnerable) == false) {
		mInstantDamage += purpleDamage;

		if (isEvent(0, EB_FlickEnabled)) {
			mFlickTimer += 1.0f;
		}

		enableEvent(0, EB_TakingDamage);
	}

	enableEvent(0, EB_SquashOnDamageAnim);

	if (mFloorTriangle) {
		createBounceEffect(mPosition, getDownSmokeScale());
	}

	return false;
}

/**
 * @note Address: 0x8010630C
 * @note Size: 0x8
 */
bool EnemyBase::dropCallBack(Creature*) { return false; }

/**
 * @note Address: 0x80106314
 * @note Size: 0x40
 */
bool EnemyBase::isBeforeAppearState() { return mLifecycleFSM->getCurrID(this) < EnemyBaseFSM::EBS_Appear; }

/**
 * @note Address: 0x80106354
 * @note Size: 0x70
 */
bool EnemyBase::checkBirthTypeDropEarthquake()
{
	bool hasAppeared = false;

	if (mLifecycleFSM->getCurrID(this) == EnemyBaseFSM::EBS_DropEarthquake) {
		mLifecycleFSM->transit(this, EnemyBaseFSM::EBS_Appear, nullptr);
		hasAppeared = true;
	}

	return hasAppeared;
}

/**
 * @note Address: 0x801063C4
 * @note Size: 0xEC
 */
bool EnemyBase::earthquakeCallBack(Creature* creature, f32 bounceFactor)
{
	if (mFloorTriangle && !isDead() && !isFlying() && isAlive() && !isEvent(0, EB_HardConstrained) && !isEvent(0, EB_Bittered)) {
		if (((isEvent(0, EB_NoInterrupt)) || (isEvent(0, EB_BitterImmune))) == false) {
			EarthquakeStateArg eqArg;
			eqArg.mBounceFactor = bounceFactor;
			mLifecycleFSM->transit(this, EnemyBaseFSM::EBS_Earthquake, &eqArg);
		}
	}

	return false;
}

/**
 * @note Address: 0x801064B0
 * @note Size: 0x108
 */
bool EnemyBase::dopeCallBack(Creature* creature, int sprayType)
{
	if (isAlive() && !isDead() && doDopeCallBack(creature, sprayType)) {
		switch (sprayType) {
		case SPRAY_TYPE_BITTER:
			if (!isEvent(0, EB_BitterImmune) && !isEvent(0, EB_Bittered)) {
				if (isEvent(0, EB_NoInterrupt)) {
					enableEvent(0, EB_BitterQueued);
				} else if (mEnemyStoneObj->start()) {
					mLifecycleFSM->transit(this, EnemyBaseFSM::EBS_Stone, 0);
				} else {
					enableEvent(0, EB_BitterQueued);
				}
			}
		}
	}

	return false;
}

/**
 * @note Address: 0x801065C0
 * @note Size: 0x8
 */
bool EnemyBase::farmCallBack(Creature*, f32 power) { return false; }

/**
 * @note Address: 0x801065C8
 * @note Size: 0x48
 */
bool EnemyBase::bombCallBack(Creature* creature, Vector3f& direction, f32 damage)
{
	if (!(isEvent(0, EB_Invulnerable))) {
		mInstantDamage += damage;

		if (isEvent(0, EB_FlickEnabled)) {
			mFlickTimer += 1.0f;
		}

		enableEvent(0, EB_TakingDamage);
	}

	return true;
}

/**
 * @note Address: 0x80106610
 * @note Size: 0x54
 */
void EnemyBase::collisionCallback(CollEvent& coll)
{
	finishDropping(false);
	setCollEvent(coll);
}

/**
 * @note Address: 0x80106664
 * @note Size: 0x28
 */
void EnemyBase::setCollEvent(CollEvent& event)
{
	mCollEvent = event;
	enableEvent(0, EB_Colliding);
}

/**
 * @note Address: 0x8010668C
 * @note Size: 0x10
 */
void EnemyBase::resetCollEvent() { disableEvent(0, EB_Colliding); }

/**
 * @note Address: 0x8010669C
 * @note Size: 0x4
 */
void EnemyBase::changeMaterial() { }

/**
 * @note Address: 0x801066A0
 * @note Size: 0x8
 */
SysShape::Model* EnemyBase::viewGetShape() { return mModel; }

/**
 * @note Address: 0x801066A8
 * @note Size: 0x20
 */
void EnemyBase::viewStartCarryMotion() { startMotion(); }

/**
 * @note Address: 0x801066C8
 * @note Size: 0x40
 */
void EnemyBase::viewStartPreCarryMotion()
{
	startCarcassMotion();
	stopMotion();
}

/**
 * @note Address: 0x8010691C
 * @note Size: 0x130
 */
void EnemyBase::viewOnPelletKilled()
{
	if (mHeldPellet) {
		InteractMattuan mattuan = InteractMattuan(this, 2.5f);
		mHeldPellet->stimulate(mattuan);
		mHeldPellet = nullptr;
	}

	mSoundObj->setKilled();

	if (lifeGaugeMgr) {
		lifeGaugeMgr->inactiveLifeGauge(this);
	}
	if (shadowMgr) {
		shadowMgr->delShadow(this);
	}

	fadeEffects();
	mSfxEmotion = EMOTE_None;

	if (PSGetDirectedMainBgm()) {
		mSoundObj->battleOff();
	}

	static_cast<PSM::CreatureAnime*>(mSoundObj)->setAnime(nullptr, 1, 0.0f, 0.0f);
	mMgr->kill(this);
}

/**
 * @note Address: 0x80106A4C
 * @note Size: 0x2C
 */
void EnemyBase::view_start_carrymotion() { startCarcassMotion(); }

/**
 * @note Address: 0x80106A78
 * @note Size: 0x40
 */
void EnemyBase::view_finish_carrymotion() { mAnimator->getAnimator(0).setFlag(SysShape::Animator::AnimFinishMotion); }

/**
 * @note Address: 0x80106AB8
 * @note Size: 0xA8
 */
void EnemyBase::getCommonEffectPos(Vector3f& commonEffectPos)
{
	commonEffectPos = getPosition();
	commonEffectPos.x += mEffectOffset.x;
	commonEffectPos.y += mEffectOffset.y;
	commonEffectPos.z += mEffectOffset.z;
	commonEffectPos.y += getParms().mHeightOffsetFromFloor.mValue;
}

/**
 * @note Address: 0x80106B60
 * @note Size: 0x40
 */
void EnemyBase::getWaterSphere(Sys::Sphere* sphere)
{
	sphere->mPosition.x = mPosition.x + mEffectOffset.x;
	sphere->mPosition.y = mPosition.y + mEffectOffset.y;
	sphere->mPosition.z = mPosition.z + mEffectOffset.z;
	sphere->mRadius     = getParms().mHeightOffsetFromFloor.mValue;
}

/**
 * @note Address: 0x80106BA0
 * @note Size: 0x148
 */
void EnemyBase::updateWaterBox()
{
	Sys::Sphere waterSphere;
	getWaterSphere(&waterSphere);

	if (mWaterBox) {
		if (!mWaterBox->inWater(waterSphere)) {
			if (mapMgr) {
				mWaterBox = mapMgr->findWater(waterSphere);
			}

			if (!mWaterBox) {
				mWaterBox = nullptr;
				outWaterCallback();
				fadeEfxHamon();
			}
		}

		updateEfxHamon();
		return;
	}

	// Not in water box
	WaterBox* waterBox = nullptr;
	if (mapMgr) {
		waterBox = mapMgr->findWater(waterSphere);
	}

	if (waterBox) {
		mWaterBox = waterBox;
		inWaterCallback(waterBox);
		createEfxHamon();
	}
}

/**
 * @note Address: 0x80106CF0
 * @note Size: 0x27C
 */
PSM::EnemyBase* EnemyBase::createPSEnemyBase()
{
	PSM::EnemyBase* base = nullptr;

	if (getEnemyTypeID() == EnemyTypeID::EnemyID_KumaChappy || getEnemyTypeID() == EnemyTypeID::EnemyID_FireChappy) {
		base = new PSM::Enemy_SpecialChappy(this, 4);
		return base;
	}

	EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);

	switch (info->mBitterDrops) {
	case BDT_Weak:
		base = new PSM::EnemyHekoi(this, 2);
		break;
	case BDT_Normal:
		base = new PSM::EnemyBase(this, 3);
		break;
	case BDT_Strong:
		base = new PSM::EnemyBig(this, 4);
		break;
	case BDT_Triple:
	case BDT_MiniBoss:
		JUT_PANICLINE(4392, "abolished type\n");
		break;
	case BDT_Boss:
		base = new PSM::EnemyMidBoss(this);
		break;
	case BDT_FinalBoss:
		base = new PSM::EnemyBigBoss(this);
		break;
	case BDT_Empty:
		base = new PSM::EnemyNotAggressive(this, 2);
		break;
	}

	return base;
}

/**
 * @note Address: 0x80107204
 * @note Size: 0x1C
 */
void EnemyBase::startMotion()
{
	EnemyAnimatorBase* animator = mAnimator;
	RESET_FLAG(animator->mFlags.typeView, SysShape::Animator::AnimCompleted | SysShape::Animator::AnimFinishMotion);
	animator->mNormalizedTime = 1.0f;
}

/**
 * @note Address: 0x80107220
 * @note Size: 0x58
 */
f32 EnemyBase::getMotionFrameMax() { return mAnimator->getAnimator().mAnimInfo->mAnm->mTotalFrameCount; }

/**
 * @note Address: 0x80107278
 * @note Size: 0x68
 */
f32 EnemyBase::getFirstKeyFrame()
{
	SysShape::KeyEvent* firstKeyFrame = static_cast<SysShape::KeyEvent*>(mAnimator->getAnimator().mAnimInfo->mKeyEvent.mChild);
	if (firstKeyFrame) {
		return firstKeyFrame->mFrame;
	}

	return 0.0f;
}

/**
 * @note Address: 0x801072E0
 * @note Size: 0x20
 */
void EnemyBase::stopMotion()
{
	EnemyAnimatorBase* animator = mAnimator;
	RESET_FLAG(animator->mFlags.typeView, SysShape::Animator::AnimInProgress);
	SET_FLAG(animator->mFlags.typeView, SysShape::Animator::AnimCompleted);
}

/**
 * @note Address: 0x80107300
 * @note Size: 0x38
 */
bool EnemyBase::isFinishMotion() { return mAnimator->getAnimator().isFlag(SysShape::Animator::AnimFinishMotion); }

/**
 * @note Address: 0x80107338
 * @note Size: 0x10
 */
bool EnemyBase::isStopMotion() { return mAnimator->mFlags.isSet(SysShape::Animator::AnimCompleted); }

/**
 * @note Address: 0x80107348
 * @note Size: 0x48
 */
int EnemyBase::getCurrAnimIndex()
{
	SysShape::AnimInfo* animInfo = mAnimator->getAnimator().mAnimInfo;
	if (animInfo) {
		return animInfo->mId;
	}

	return -1;
}

/**
 * @note Address: 0x80107390
 * @note Size: 0xC
 */
void EnemyBase::setAnimSpeed(f32 speed) { mAnimator->mSpeed = speed; }

/**
 * @note Address: 0x8010739C
 * @note Size: 0x30
 */
void EnemyBase::resetAnimSpeed() { mAnimator->resetAnimSpeed(); }

/**
 * @note Address: 0x801073D8
 * @note Size: 0x14
 */
JAInter::Object* EnemyBase::getJAIObject() { return static_cast<JAInter::Object*>(mSoundObj); }

/**
 * @note Address: 0x801073EC
 * @note Size: 0x8
 */
PSM::Creature* EnemyBase::getPSCreature() { return static_cast<PSM::Creature*>(mSoundObj); }

/**
 * @note Address: 0x801073F4
 * @note Size: 0x1C
 */
int EnemyBase::getStateID()
{
	if (mCurrentLifecycleState) {
		return mCurrentLifecycleState->mStateID;
	}

	return -1;
}

/**
 * @note Address: 0x80107410
 * @note Size: 0xAC
 */
bool EnemyBase::needShadow()
{
	// If cutscene is playing, and enemy is within it, we need a shadow
	if (moviePlayer && moviePlayer->isFlag(MVP_IsActive)) {
		return isMovieActor() || mMgr->isAlwaysMovieActor();
	}

	// If enemy is visible and the model isn't hidden, then we need a shadow
	return mLod.isFlag(AILOD_IsVisible) && isEvent(0, EB_ModelHidden) == false;
}

/**
 * @brief Callback function for eating white Pikmin.
 *
 * @param creature A pointer to the Creature object representing the white Pikmin.
 * @param damage The amount of damage to be added to the EnemyBase object.
 * @return true if the callback is successful, false otherwise.
 *
 * @note Address: 0x801074D0
 * @note Size: 0x234
 */
bool EnemyBase::eatWhitePikminCallBack(Creature* creature, f32 damage)
{
	addDamage(damage, 0.0f);

	if (!(isEvent(0, EB_EatingWhitePikmin))) {
		enableEvent(0, EB_EatingWhitePikmin);

		mDamageAnimTimer = sys->mDeltaTime;

		for (int i = 0; i < mEnemyStoneObj->mInfo->mLength; i++) {
			EnemyStone::DrawInfo drawInfo(false);
			EnemyStone::ObjInfo* objInfo = &mEnemyStoneObj->mInfo->mObjList[i];

			SysShape::Joint* joint = mModel->getJoint(objInfo->mName);

			drawInfo.mMatrix  = joint->getWorldMatrix();
			drawInfo.mObjInfo = objInfo;

			Vector3f effectPosition;
			f32 scale;
			if (drawInfo.getPosAndScale(&effectPosition, &scale)) {
				scale *= mScaleModifier;

				efx::ArgScale arg(effectPosition, scale);
				switch (drawInfo.mObjInfo->mSize) {
				case ENEMYSTONE_FX_SIZE_LARGE:
					efx::TEnemyPoisonL poisonL;
					poisonL.create(&arg);
					break;
				case ENEMYSTONE_FX_SIZE_SMALL:
					efx::TEnemyPoisonS poisonS;
					poisonS.create(&arg);
					break;
				}
			}
		}

		mSoundObj->startSound(PSSE_EN_POISON_DAMAGE, false);
	}
	return true;
}

/**
 * @note Address: 0x80107764
 * @note Size: 0x8
 */
f32 EnemyBase::getDownSmokeScale() { return 0.0f; }

/**
 * @note Address: 0x8010776C
 * @note Size: 0x10
 */
void EnemyBase::constraintOff() { disableEvent(0, EB_Constrained); }

/**
 * @note Address: 0x8010777C
 * @note Size: 0x18
 */
void EnemyBase::hardConstraintOn()
{
	enableEvent(0, EB_HardConstrained);
	mMass = 0.0f;
}

/**
 * @note Address: 0x80107794
 * @note Size: 0x28
 */
void EnemyBase::hardConstraintOff()
{
	disableEvent(0, EB_HardConstrained);
	mMass         = mFriction;
	mAcceleration = Vector3f(0.0f);
}

/**
 * @note Address: 0x801077BC
 * @note Size: 0x84
 */
void EnemyBase::startMovie()
{
	if (mLifecycleFSM->getCurrID(this) >= EnemyBaseFSM::EBS_Appear) {
		fadeEffects();
		doStartMovie();
	}
}

/**
 * @note Address: 0x80107844
 * @note Size: 0x84
 */
void EnemyBase::endMovie()
{
	if (mLifecycleFSM->getCurrID(this) >= EnemyBaseFSM::EBS_Appear) {
		createEffects();
		doEndMovie();
	}
}

/**
 * @note Address: 0x801078C8
 * @note Size: 0x4
 */
// WEAK - in header
// void EnemyBase::doEndMovie() { }

/**
 * @note Address: 0x801078CC
 * @note Size: 0x94
 */
void EnemyBase::doStartEarthquakeState(f32 yVelocityScale)
{
	mTargetVelocity  = Vector3f(0.0f);
	mCurrentVelocity = Vector3f(0.0f);

	mCurrentVelocity.y = yVelocityScale * 200.0f + randFloat() * 100.0f;
};

/**
 * @note Address: 0x80107960
 * @note Size: 0x4
 */
void EnemyBase::doFinishEarthquakeState() { }

/**
 * @note Address: 0x80107964
 * @note Size: 0x4
 */
void EnemyBase::doStartEarthquakeFitState() { }

/**
 * @note Address: 0x80107968
 * @note Size: 0x4
 */
void EnemyBase::doFinishEarthquakeFitState() { }

/**
 * @note Address: 0x8010796C
 * @note Size: 0x2C
 */
void EnemyBase::startWaitingBirthTypeDrop() { doStartWaitingBirthTypeDrop(); }

/**
 * @note Address: 0x80107998
 * @note Size: 0x4
 */
void EnemyBase::doStartWaitingBirthTypeDrop() { }

/**
 * @note Address: 0x8010799C
 * @note Size: 0x2C
 */
void EnemyBase::finishWaitingBirthTypeDrop() { doFinishWaitingBirthTypeDrop(); }

/**
 * @note Address: 0x801079C8
 * @note Size: 0x64
 */
void EnemyBase::doFinishWaitingBirthTypeDrop()
{
	if (!isFlying()) {
		enableEvent(1, EB2_Dropping);
		setDroppingMassZero();
		mScale = Vector3f(1.0f);
	}
}

/**
 * @note Address: 0x80107A2C
 * @note Size: 0x3C
 */
bool EnemyBase::isBirthTypeDropGroup()
{
	return (mDropGroup == EDG_Normal || mDropGroup == EDG_Pikmin || mDropGroup == EDG_Navi || mDropGroup == EDG_Carry
	        || mDropGroup == EDG_Earthquake);
}

/**
 * @note Address: 0x80107A68
 * @note Size: 0x8
 */
Vector3f* EnemyBase::getFitEffectPos() { return &mBoundingSphere.mPosition; }

/**
 * @note Address: 0x80107A70
 * @note Size: 0x18
 */
void EnemyBase::setDroppingMassZero()
{
	enableEvent(1, EB2_DroppingMassZero);
	mMass = 0.0f;
}

/**
 * @note Address: 0x80107A88
 * @note Size: 0x18
 */
void EnemyBase::resetDroppingMassZero()
{
	disableEvent(1, EB2_DroppingMassZero);
	mMass = mFriction;
}
} // namespace Game
