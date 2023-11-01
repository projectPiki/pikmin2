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
#include "PSSystem/PSStream.h"
#include "PSGame/Global.h"

// Utility
#include "Dolphin/rand.h"
#include "nans.h"

// Archives
JKRArchive* Game::gParmArc;
PSGame::BASARC* PSSystem::ArcMgr<PSGame::BASARC>::sInstance;

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
/*
 * Unused. Just here to make the rodata line up.
 * --INFO--
 * Address: ........
 * Size:  0000e4
 */
static void _Print(char* format, ...) { OSReport(format, "enemyBase"); }

namespace EnemyBaseFSM {
/*
 * --INFO--
 * Address:	800FF26C
 * Size:	0000F8
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

/*
 * --INFO--
 * Address:	800FF364
 * Size:	0001E0
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

/*
 * --INFO--
 * Address:	800FF550
 * Size:	0001A8
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

/*
 * --INFO--
 * Address:	800FF6F8
 * Size:	00006C
 */
void BirthTypeDropState::update(EnemyBase* enemy)
{
	if (isFinishableWaitingBirthTypeDrop(enemy)) {
		transit(enemy, EBS_Appear, nullptr);
	}
}

/*
 * --INFO--
 * Address:	800FF764
 * Size:	000030
 */
void BirthTypeDropState::cleanup(EnemyBase* enemy) { enemy->finishWaitingBirthTypeDrop(); }

/*
 * --INFO--
 * Address:	800FF794
 * Size:	0001C4
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

/*
 * --INFO--
 * Address:	800FF958
 * Size:	0001A8
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

/*
 * --INFO--
 * Address:	800FFB00
 * Size:	00018C
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

/*
 * --INFO--
 * Address:	800FFCA8
 * Size:	000008
 */
bool BirthTypeDropEarthquakeState::isFinishableWaitingBirthTypeDrop(EnemyBase*) { return false; }

/*
 * --INFO--
 * Address:	800FFCB0
 * Size:	000024
 */
void AppearState::entry(EnemyBase* enemy) { enemy->doEntryLiving(); }

/*
 * --INFO--
 * Address:	800FFCD4
 * Size:	0000FC
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

/*
 * --INFO--
 * Address:	800FFDEC
 * Size:	000130
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

/*
 * --INFO--
 * Address:	800FFF1C
 * Size:	00001C
 */
void AppearState::cleanup(EnemyBase* enemy)
{
	enemy->mScale         = 1.0f;
	enemy->mStunAnimTimer = 0.0f;
}

/*
 * --INFO--
 * Address:	800FFF38
 * Size:	00010C
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

/*
 * --INFO--
 * Address:	80100084
 * Size:	000040
 */
void LivingState::entry(EnemyBase* enemy)
{
	if (enemy->mPellet) {
		enemy->doEntryCarcass();
		return;
	}

	enemy->doEntryLiving();
}

/*
 * --INFO--
 * Address:	801000C4
 * Size:	000030
 */
void LivingState::updateCullingOff(EnemyBase* enemy) { enemy->doUpdate(); }

/*
 * --INFO--
 * Address:	801000F4
 * Size:	000030
 */
void LivingState::updateAlways(EnemyBase* enemy)
{
	if (enemy->isEvent(0, EB_BitterQueued)) {
		enemy->startStoneState();
	}
}

/*
 * --INFO--
 * Address:	80100124
 * Size:	0001BC
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

/*
 * --INFO--
 * Address:	801002E0
 * Size:	000048
 */
void EnemyBaseFSM::FitState::updateCullingOff(EnemyBase* enemy)
{
	if (enemy->isDead()) {
		transit(enemy, EBS_Living, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80100328
 * Size:	000150
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

/*
 * --INFO--
 * Address:	80100478
 * Size:	000080
 */
void FitState::cleanup(EnemyBase* enemy)
{
	enemy->restoreEvents();

	enemy->disableEvent(1, EB2_Stunned);
	enemy->startMotion();
	enemy->doFinishEarthquakeFitState();
	mEnemyPiyo.fade();
}

/*
 * --INFO--
 * Address:	801004F8
 * Size:	000204
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

/*
 * --INFO--
 * Address:	801006FC
 * Size:	000088
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

/*
 * --INFO--
 * Address:	80100784
 * Size:	000050
 */
void EarthquakeState::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(1, EB2_Earthquake);
	enemy->startMotion();
	enemy->doFinishEarthquakeState();
}

/*
 * --INFO--
 * Address:	801007D4
 * Size:	000158
 */
void EarthquakeState::updateCullingOff(EnemyBase* enemy)
{
	if (enemy->isDead() && enemy->mBounceTriangle) {
		transit(enemy, EBS_Living, nullptr);
		return;
	}

	if (++mEarthquakeStepTimer > 3 && enemy->mBounceTriangle) {
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

/*
 * --INFO--
 * Address:	80100938
 * Size:	000064
 */
void StoneState::bounceProcedure(EnemyBase* enemy, Sys::Triangle* triangle)
{
	enemy->enableEvent(0, EB_Constrained);
	enemy->createBounceEffect(enemy->mPosition, enemy->getDownSmokeScale());
	enemy->addDamage(0.0f, 1.0f);
}

/*
 * --INFO--
 * Address:	8010099C
 * Size:	000100
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

	if (enemy->mBounceTriangle) {
		enemy->enableEvent(0, EB_Constrained);
	} else {
		enemy->enableEvent(0, EB_Constrained);
	}

	if (enemy->mSfxEmotion == EMOTE_Excitement && PSGetDirectedMainBgm()) {
		enemy->mSoundObj->battleOff();
	}

	enemy->doStartStoneState();
}

/*
 * --INFO--
 * Address:	80100A9C
 * Size:	0000CC
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

/*
 * --INFO--
 * Address:	80100B68
 * Size:	000118
 */
void StoneState::updateAlways(EnemyBase* enemy)
{
	enemy->mEnemyStoneObj->update();
	enemy->mBitterTimer += sys->mDeltaTime;

	if (enemy->mEnemyStoneObj->isFlag(EnemyStone::STONE_HasViewedDemo)) {
		if (!enemy->mBounceTriangle) {
			enemy->constraintOff();
			enemy->disableEvent(0, EB_Untargetable);
		}

		// dev typo
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

/*
 * --INFO--
 * Address:	80100C80
 * Size:	000074
 */
void StoneState::updateCullingOff(EnemyBase* enemy)
{
	if (enemy->isAlive() && enemy->isStopMotion() && enemy->isDead()) {
		enemy->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	80100CF4
 * Size:	000484
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

/*
 * --INFO--
 * Address:	80101304
 * Size:	000030
 */
void StateMachine::update(EnemyBase* enemy) { mState->update(enemy); }

/*
 * --INFO--
 * Address:	80101338
 * Size:	000030
 */
void StateMachine::entry(EnemyBase* enemy) { mState->entry(enemy); }

/*
 * --INFO--
 * Address:	8010136C
 * Size:	000030
 */
void StateMachine::simulation(EnemyBase* enemy, f32 frameRate) { mState->simulation(enemy, frameRate); }
} // namespace EnemyBaseFSM

/*
 * --INFO--
 * Address:	801013A0
 * Size:	000370
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
    , _1F2(0xFF)
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
	mBounceTriangle  = nullptr;
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

/*
 * --INFO--
 * Address:	80101788
 * Size:	000044
 */
void EnemyBase::constructor()
{
	mSoundObj = createPSEnemyBase();
	createInstanceEfxHamon();
}

/*
 * --INFO--
 * Address:	801017CC
 * Size:	00005C
 */
void EnemyBase::createEffects()
{
	EnemyEffectNodeHamon* next;

	for (EnemyEffectNodeHamon* hamon = (EnemyEffectNodeHamon*)mHamonEffectRoot.mChild; hamon; hamon = next) {
		next = (EnemyEffectNodeHamon*)hamon->mNext;
		hamon->create(this);
	}
}

/*
 * --INFO--
 * Address:	80101828
 * Size:	00005C
 */
void EnemyBase::fadeEffects()
{
	EnemyEffectNodeHamon* next;

	for (EnemyEffectNodeHamon* hamon = (EnemyEffectNodeHamon*)mHamonEffectRoot.mChild; hamon; hamon = next) {
		next = (EnemyEffectNodeHamon*)hamon->mNext;
		hamon->fade(this);
	}
}

/*
 * --INFO--
 * Address:	80101884
 * Size:	000050
 */
void EnemyBase::createInstanceEfxHamon()
{
	mEffectNodeHamon = new EnemyEffectNodeHamon;
	mHamonEffectRoot.add(mEffectNodeHamon);
}

/*
 * --INFO--
 * Address:	801018D4
 * Size:	000030
 */
void EnemyBase::updateEfxHamon()
{
	if (mEffectNodeHamon) {
		mEffectNodeHamon->update(this);
	}
}

/*
 * --INFO--
 * Address:	80101904
 * Size:	00003C
 */
void EnemyBase::createEfxHamon()
{
	if (mEffectNodeHamon) {
		mEffectNodeHamon->create(this);
	}
}

/*
 * --INFO--
 * Address:	80101940
 * Size:	00003C
 */
void EnemyBase::fadeEfxHamon()
{
	if (mEffectNodeHamon) {
		mEffectNodeHamon->fade(this);
	}
}

/*
 * --INFO--
 * Address:	8010197C
 * Size:	000050
 */
void EnemyBase::setEmotionCaution()
{
	mSfxEmotion = EMOTE_Caution;
	if (PSGetDirectedMainBgm()) {
		mSoundObj->battleOff();
	}
}

/*
 * --INFO--
 * Address:	801019CC
 * Size:	00003C
 */
void EnemyBase::setEmotionExcitement()
{
	mSfxEmotion = EMOTE_Excitement;
	mSoundObj->battleOn();
}

/*
 * --INFO--
 * Address:	80101A08
 * Size:	000050
 */
void EnemyBase::setEmotionNone()
{
	mSfxEmotion = EMOTE_None;
	if (PSGetDirectedMainBgm()) {
		mSoundObj->battleOff();
	}
}

/*
 * --INFO--
 * Address:	80101A58
 * Size:	000104
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

/*
 * --INFO--
 * Address:	80101B5C
 * Size:	000218
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

/*
 * --INFO--
 * Address:	80101D74
 * Size:	0000A0
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

void EnemyBase::forceKillEffects()
{
	if (mHeldPellet) {
		InteractMattuan interactMatt(this, 2.5f);

		mHeldPellet->stimulate(interactMatt);
		mHeldPellet = nullptr;
	}

	mSoundObj->setKilled();
}

/*
 * --INFO--
 * Address:	80101E18
 * Size:	0000C4
 */
void EnemyBase::setCarcassArg(PelletViewArg& carcassArg)
{
	Vector3f pos          = getPosition();
	carcassArg.mEnemyName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
	carcassArg.mPosition  = pos;
	carcassArg.mMatrix    = &mBaseTrMatrix;
	carcassArg.mEnemy     = this;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000234
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

/*
 * --INFO--
 * Address:	80101EDC
 * Size:	000008
 */
bool EnemyBase::doBecomeCarcass() { return true; }

/*
 * --INFO--
 * Address:	80101EE4
 * Size:	000004
 */
void EnemyBase::doUpdateCarcass() { }

void EnemyBase::deathMethod()
{
	forceKillEffects();
	becomeCarcass();
}

/*
 * --INFO--
 * Address:	80101EE8
 * Size:	0009EC
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

	if ((!killArg || !(killArg->isFlag(CKILL_Unk29))) && isEvent(0, EB_DeathEffectEnabled)) {
		Vector3f effectPos;
		getCommonEffectPos(effectPos);
		f32 scaleMod                      = mScaleModifier;
		EnemyTypeID::EEnemyTypeID enemyID = getEnemyTypeID();

		efx::ArgEnemyType fxArg(effectPos, enemyID, scaleMod);
		efx::TEnemyDead efxDead;

		efxDead.create((efx::Arg*)&fxArg);
		PSStartEnemyGhostSE(this, 0.0f);
	}

	if (!killArg || !(killArg->isFlag(CKILL_Unk31))) {
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

					ItemHoney::InitArg honeyArg(honeyKind, 0);
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

		} else if (mExistDuration == 0.0f && isEvent(0, EB_LeaveCarcass) && (!killArg || !(killArg->isFlag(CKILL_Unk30)))) {
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

/*
 * --INFO--
 * Address:	80102920
 * Size:	0000E0
 */
void EnemyBase::setZukanVisible(bool updateStats)
{
	if (!mInPiklopedia) {
		return;
	}

	if ((gameSystem->isFlag(GAMESYS_Unk5)) == FALSE) {
		EnemyInfo* enemyInfo = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
		if ((enemyInfo->mFlags & 0x200) == FALSE) {
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

/*
 * --INFO--
 * Address:	80102A00
 * Size:	000160
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

	mBounceTriangle   = nullptr;
	mStuckPikminCount = 0;
	mHeldPellet       = nullptr;

	mModel->mJ3dModel->calc();
	mCollTree->update();
	updateSpheres();
	resetCollEvent();

	_1F2 = 0xFF;
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

/*
 * --INFO--
 * Address:	80102B60
 * Size:	000078
 */
void EnemyBase::updateTrMatrix()
{
	Vector3f rot = mRotation + mDamageAnimRotation + mStunAnimRotation;
	mBaseTrMatrix.makeTR(mPosition, rot);
}

/*
 * --INFO--
 * Address:	80102BD8
 * Size:	000078
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

/*
 * --INFO--
 * Address:	80102C50
 * Size:	000034
 */
void EnemyBase::update() { static_cast<EnemyBaseFSM::StateMachine*>(mLifecycleFSM)->update(this); }

/*
 * --INFO--
 * Address:	80102C84
 * Size:	0001E0
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

/*
 * --INFO--
 * Address:	80102E64
 * Size:	000090
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

/*
 * --INFO--
 * Address:	80102EF4
 * Size:	000014
 */
void EnemyBase::doStartStoneState() { mTargetVelocity = Vector3f(0.0f); }

/*
 * --INFO--
 * Address:	80102F08
 * Size:	000004
 */
void EnemyBase::doFinishStoneState() { }

void EnemyBase::updateEffects()
{
	WalkSmokeEffect::Mgr* smokeMgr = getWalkSmokeEffectMgr();
	if (smokeMgr) {
		smokeMgr->update(this);
	}
}

/*
 * --INFO--
 * Address:	80102F14
 * Size:	000080
 */
void EnemyBase::doUpdateCommon()
{
	scaleDamageAnim();
	resetCollEvent();

	if ((mLod.isFlag(AILOD_IsVisible)) && isAlive()) {
		updateEffects();
	}
}

/*
 * --INFO--
 * Address:	80102F94
 * Size:	000034
 */
void EnemyBase::doAnimation() { static_cast<EnemyBaseFSM::StateMachine*>(mLifecycleFSM)->animation(this); }

/*
 * --INFO--
 * Address:	80102FF8
 * Size:	000088
 */
void EnemyBase::doAnimationUpdateAnimator()
{
	mAnimator->animate(mAnimator->mSpeed * sys->mDeltaTime);

	SysShape::Animator* animator = &mAnimator->getAnimator();
	SysShape::Model* model       = mModel;
	J3DMtxCalc* calc             = static_cast<SysShape::BaseAnimator*>(animator)->getCalc();

	model->mJ3dModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = static_cast<J3DMtxCalcAnmBase*>(calc);
}

/*
 * --INFO--
 * Address:	80103080
 * Size:	0001E0
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

	if (mAnimator->getAnimator().mFlags & 1) {
		static_cast<PSM::CreatureAnime*>(mSoundObj)->setAnime(nullptr, 1, 0.0f, 0.0f);
	}
}

/*
 * --INFO--
 * Address:	8010329C
 * Size:	00007C
 */
void EnemyBase::doAnimationStick()
{
	Vector3f rot = mRotation + mDamageAnimRotation + mStunAnimRotation;
	mBaseTrMatrix.makeSRT(mScale, rot, mPosition);
}

/*
 * --INFO--
 * Address:
 * Size:	000020
 */
void EnemyBase::doAnimationCullingOn() { mModel->mJ3dModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = nullptr; }

/*
 * --INFO--
 * Address:	80103338
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	801033B4
 * Size:	000054
 */
void EnemyBase::hide()
{
	if (isEvent(0, EB_Bittered)) {
		mModel->hide();
	} else {
		mModel->hide();
	}
}

/*
 * --INFO--
 * Address:	80103408
 * Size:	000108
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

/*
 * --INFO--
 * Address:	80103510
 * Size:	00013C
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

/*
 * --INFO--
 * Address:	8010364C
 * Size:	000034
 */
void EnemyBase::doEntry() { mLifecycleFSM->entry(this); }

/*
 * --INFO--
 * Address:	80103680
 * Size:	000028
 */
void EnemyBase::doSetView(int viewportNumber) { mModel->setCurrentViewNo((u16)viewportNumber); }

/*
 * --INFO--
 * Address:	801036A8
 * Size:	000054
 */
bool EnemyBase::isCullingOff()
{
	if (mPellet) {
		return true;
	}

	return !isEvent(0, EB_Cullable) || mLod.isFlag(AILOD_IsVisible) || mLod.isFlag(AILOD_PikiInCell) || isEvent(1, EB2_Dropping);
}

/*
 * --INFO--
 * Address:	801036FC
 * Size:	000078
 */
void EnemyBase::doViewCalc()
{
	if (isCullingOff()) {
		mModel->viewCalc();
	}
}

/*
 * --INFO--
 * Address:	80103774
 * Size:	0000AC
 */
void EnemyBase::doSimulationGround(f32 frameRate)
{
	Vector3f velocity = mTargetVelocity;
	velocity.y        = mCurrentVelocity.y;

	Vector3f accel   = velocity - mCurrentVelocity;
	accel            = accel * getAccelerationScale(frameRate);
	mCurrentVelocity = mCurrentVelocity + accel;

	if (isDropping()) {
		mCurrentVelocity.y = -((3.0f * (frameRate * _aiConstants->mGravity.mData)) - mCurrentVelocity.y);
		return;
	}

	mCurrentVelocity.y = -((frameRate * _aiConstants->mGravity.mData) - mCurrentVelocity.y);
}

/*
 * --INFO--
 * Address:	80103820
 * Size:	000058
 */
void EnemyBase::doSimulationFlying(f32 frameRate)
{
	Vector3f accel   = mTargetVelocity - mCurrentVelocity;
	accel            = accel * getAccelerationScale(frameRate);
	mCurrentVelocity = mCurrentVelocity + accel;
}

/*
 * --INFO--
 * Address:	80103878
 * Size:	000058
 */
void EnemyBase::doSimulationStick(f32 frameRate)
{
	Vector3f accel   = mTargetVelocity - mCurrentVelocity;
	accel            = accel * getAccelerationScale(frameRate);
	mCurrentVelocity = mCurrentVelocity + accel;
}

/*
 * --INFO--
 * Address:	801038D0
 * Size:	000070
 */
void EnemyBase::updateSpheres()
{
	Sys::Sphere sphere;
	mCollTree->mPart->getSphere(sphere);

	mBoundingSphere         = sphere;
	mCurLodSphere.mPosition = mBoundingSphere.mPosition;
}

/*
 * --INFO--
 * Address:	80103940
 * Size:	0000B8
 */
void EnemyBase::createDropEffect(const Vector3f& position, f32 scale)
{
	efx::Arg enemyArg(position);
	efx::TEnemyDownSmoke downSmoke;
	downSmoke.mScale = scale;
	downSmoke.create(&enemyArg);

	PSStartEnemyDownSmokeSE(this, scale);
}

/*
 * --INFO--
 * Address:	801039F8
 * Size:	000158
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

/*
 * --INFO--
 * Address:	80103B50
 * Size:	0001DC
 */
void EnemyBase::createBounceEffect(const Vector3f& position, f32 scale)
{
	if (mWaterBox) {
		createSplashDownEffect(position, scale);
	} else {
		createDropEffect(position, scale);
	}
}

/*
 * --INFO--
 * Address:	80103D2C
 * Size:	000168
 */
void EnemyBase::outWaterCallback()
{
	f32 downSmokeScale = getDownSmokeScale();
	if (downSmokeScale > 0.0f) {
		createSplashDownEffect(mPosition, downSmokeScale);
	}
}

/*
 * --INFO--
 * Address:	80103E94
 * Size:	000168
 */
void EnemyBase::inWaterCallback(WaterBox* water)
{
	f32 downSmokeScale = getDownSmokeScale();
	if (downSmokeScale > 0.0f) {
		createSplashDownEffect(mPosition, downSmokeScale);
	}
}

/*
 * --INFO--
 * Address:	80103FFC
 * Size:	00028C
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

/*
 * --INFO--
 * Address:	80104288
 * Size:	000080
 */
void EnemyBase::bounceProcedure(Sys::Triangle* triangle)
{
	bounceCallback(triangle);
	disableEvent(0, EB_CollisionActive);

	finishDropping(true);
	resetDroppingMassZero();

	mLifecycleFSM->bounceProcedure(this, triangle);
}

/*
 * --INFO--
 * Address:	80104340
 * Size:	0006D4
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

		f32 bounceAmount = isDropping() ? 0.0f : static_cast<CreatureProperty*>(mParms)->mProps.mWallReflection.mValue;

		mAcceleration.y = 0.0f;

		Vector3f totalVel = mCurrentVelocity + mAcceleration;

		// Check where our wanted movement will reach us
		MoveInfo moveInfo(&collSphere, &totalVel, bounceAmount);
		moveInfo.mInfoOrigin = (BaseItem*)this;
		mapMgr->traceMove(moveInfo, frameRate);

		mCurrentVelocity = totalVel;

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
		if (!mBounceTriangle && moveInfo.mBounceTriangle) {
			bounceProcedure(moveInfo.mBounceTriangle);
		}

		mBounceTriangle    = moveInfo.mBounceTriangle;
		mCollisionPosition = moveInfo.mPosition;

		// Apply wall triangle logic
		if (!mWallTriangle && moveInfo.mWallTriangle) {
			wallCallback(moveInfo);
		}

		mWallTriangle = moveInfo.mWallTriangle;

		// Handles platform collisions for bouncing and walls
		if (platMgr && isEvent(0, EB_PlatformCollEnabled)) {
			moveInfo.mVelocity = &mCurrentVelocity;
			platMgr->traceMove(moveInfo, frameRate);

			if (!mBounceTriangle) {
				if (moveInfo.mBounceTriangle) {
					bounceProcedure(moveInfo.mBounceTriangle);
				}

				mBounceTriangle    = moveInfo.mBounceTriangle;
				mCollisionPosition = moveInfo.mPosition;
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

	// Is stuck or has something
	// NOTE: what does isStuckTo mean?
	mAcceleration = 0.0f;

	doSimulationStick(frameRate);

	mPosition += mCurrentVelocity;

	Vector3f stick(sinf(mFaceDir), 0.0f, cosf(mFaceDir));
	updateStick(stick);
	updateSpheres();
	updateCell();
}

/*
 * --INFO--
 * Address:	80104A38
 * Size:	000020
 */
void EnemyBase::doSimulationCarcass(f32 frameRate) { updateWaterBox(); }

/*
 * --INFO--
 * Address:	80104A58
 * Size:	000034
 */
void EnemyBase::doSimulation(f32 frameRate) { mLifecycleFSM->simulation(this, frameRate); }

/*
 * --INFO--
 * Address:	80104A8C
 * Size:	0000D8
 */
void EnemyBase::doSimulationConstraint(f32 frameRate)
{
	if (!(isEvent(0, EB_HardConstrained))) {
		// If we're moving somewhere, enable checking collision
		if (mAcceleration.x != 0.0f || mAcceleration.z != 0.0f) {
			enableEvent(0, EB_CollisionActive);
		} else if (mBounceTriangle) {
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

/*
 * --INFO--
 * Address:	80104B64
 * Size:	000070
 */
void EnemyBase::gotoHell()
{
	// Don't kill if dead
	if (!isEvent(0, EB_Alive)) {
		return;
	}

	throwupItem();
	EnemyKillArg killArg(CKILL_Unk29 | CKILL_Unk30 | CKILL_Unk31);
	kill(&killArg);
}

/*
 * --INFO--
 * Address:	80104BD4
 * Size:	000030
 */
void EnemyBase::setAnimMgr(SysShape::AnimMgr* mgr) { mAnimator->setAnimMgr(mgr); }

/*
 * --INFO--
 * Address:	80104C04
 * Size:	0001B4
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

/*
 * --INFO--
 * Address:	80104DB8
 * Size:	0001F0
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

/*
 * --INFO--
 * Address:	80104FA8
 * Size:	000050
 */
void EnemyBase::endBlend()
{
	if (mAnimator->getTypeID() == 'blnd') {
		static_cast<EnemyBlendAnimatorBase*>(mAnimator)->endBlend();
	}
}

/*
 * --INFO--
 * Address:	80105004
 * Size:	000224
 */
void EnemyBase::startMotion(int p1, SysShape::MotionListener* inputListener)
{
	SysShape::MotionListener* listener;
	if (!(listener = inputListener)) {
		inputListener = static_cast<SysShape::MotionListener*>(this);
	}

	EnemyAnimatorBase* animator = mAnimator;
	animator->mFlags.unset(EANIM_FLAG_STOPPED | EANIM_FLAG_FINISHED);
	animator->mNormalizedTime = 1.0f;

	animator->getAnimator(0).startAnim(p1, inputListener);

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

/*
 * --INFO--
 * Address:	80105228
 * Size:	000044
 */
void EnemyBase::setMotionFrame(f32 frame) { mAnimator->getAnimator().setCurrFrame(frame); }

/*
 * --INFO--
 * Address:	8010526C
 * Size:	000034
 */
f32 EnemyBase::getMotionFrame() { return mAnimator->getAnimator().mTimer; }

/*
 * --INFO--
 * Address:	801052A0
 * Size:	000040
 */
void EnemyBase::finishMotion() { SET_FLAG(mAnimator->getAnimator(0).mFlags, EANIM_FLAG_FINISHED); }

/*
 * --INFO--
 * Address:	801052E0
 * Size:	000020
 */
void EnemyBase::onKeyEvent(const SysShape::KeyEvent& event)
{
	EnemyAnimKeyEvent* animKeyEvent = mCurAnim;
	animKeyEvent->mFrame            = event.mFrame;
	animKeyEvent->mType             = event.mType;
	animKeyEvent->mIsPlaying        = true;
}

/*
 * --INFO--
 * Address:	80105300
 * Size:	000080
 */
bool EnemyBase::stimulate(Interaction& interaction)
{
	bool success = false;

	if (interaction.actCommon(this)) {
		success = interaction.actEnemy(this);
	}

	return success;
}

/*
 * --INFO--
 * Address:	80105390
 * Size:	000030
 */
void EnemyBase::lifeRecover()
{
	mHealth += mMaxHealth * getParms().mRegenerationRate.mValue;
	if (mHealth > mMaxHealth) {
		mHealth = mMaxHealth;
	}
}

/*
 * --INFO--
 * Address:	801053C0
 * Size:	00033C
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

		f32 zWobbleAmt        = altSin(2.0f * horizontalModifier * TAU) * ((TAU / 144.0f) * factor);
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

/*
 * --INFO--
 * Address:	801056FC
 * Size:	000024
 */
void EnemyBase::finishScaleDamageAnim()
{
	mDamageAnimTimer = 0.0f;
	disableEvent(0, EB_EatingWhitePikmin);
	disableEvent(0, EB_SquashOnDamageAnim);
}

/*
 * --INFO--
 * Address:	80105720
 * Size:	0000F8
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

/*
 * --INFO--
 * Address:	80105874
 * Size:	0000D8
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

/*
 * --INFO--
 * Address:	8010594C
 * Size:	000054
 */
void EnemyBase::getThrowupItemPosition(Vector3f* throwupItemPosition)
{
	Sys::Sphere sphere;
	getBoundingSphere(sphere);
	*throwupItemPosition = sphere.mPosition;
}

/*
 * --INFO--
 * Address:	801059A0
 * Size:	000018
 */
void EnemyBase::getThrowupItemVelocity(Vector3f* throwupItemVelocity) { *throwupItemVelocity = Vector3f(0.0f, 200.0f, 0.0f); }

/*
 * --INFO--
 * Address:	801059B8
 * Size:	0004B0
 */
void EnemyBase::throwupItem()
{
	Vector3f throwupPosition;
	getThrowupItemPosition(&throwupPosition);

	PelletInitArg pelletInitArg;

	if (pelletMgr->makePelletInitArg(pelletInitArg, mPelletDropCode)) {
		pelletInitArg.mState         = 2;
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
		numberInitArg.mState = 2;

		Pellet* pellet = pelletMgr->birth(&numberInitArg);
		if (pellet) {
			Vector3f throwupVelocity = Vector3f(velocity * (randFloat() - 0.5f), velocity, velocity * (randFloat() - 0.5f));
			pellet->setPosition(throwupPosition, false);
			pellet->setVelocity(throwupVelocity);
			pellet->createKiraEffect(throwupPosition);
		}
	}
}

/*
 * --INFO--
 * Address:	80105E6C
 * Size:	000004
 */
void EnemyBase::doDebugDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80105E70
 * Size:	000080
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

/*
 * --INFO--
 * Address:	80105EF0
 * Size:	000040
 */
void EnemyBase::doGetLifeGaugeParam(LifeGaugeParam& param)
{
	f32 heightOffset = mPosition.y + getParms().mLifeMeterHeight.mValue;
	f32 z            = mPosition.z;
	f32 x            = mPosition.x;

	param.mPosition            = Vector3f(x, heightOffset, z);
	param.mCurHealthPercentage = mHealth / mMaxHealth;
	param.mRadius              = 10.0f;
}

/*
 * --INFO--
 * Address:	80105F30
 * Size:	000050
 */
void EnemyBase::onStickStart(Creature* other)
{
	if (other->isPiki()) {
		mStuckPikminCount++;
	}
}

/*
 * --INFO--
 * Address:	80105F80
 * Size:	000050
 */
void EnemyBase::onStickEnd(Creature* other)
{
	if (other->isPiki()) {
		mStuckPikminCount--;
	}
}

/*
 * --INFO--
 * Address:	80105FD0
 * Size:	00005C
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

/*
 * --INFO--
 * Address:	8010602C
 * Size:	000040
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

/*
 * --INFO--
 * Address:	8010606C
 * Size:	000048
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

/*
 * --INFO--
 * Address:	801060B4
 * Size:	000008
 */
bool EnemyBase::pressCallBack(Creature*, f32, CollPart*) { return false; }

/*
 * --INFO--
 * Address:	801060BC
 * Size:	000008
 */
bool EnemyBase::flyCollisionCallBack(Creature*, f32, CollPart*) { return false; }

/*
 * --INFO--
 * Address:	801060C4
 * Size:	000248
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

	if (mBounceTriangle) {
		createBounceEffect(mPosition, getDownSmokeScale());
	}

	return false;
}

/*
 * --INFO--
 * Address:	8010630C
 * Size:	000008
 */
bool EnemyBase::dropCallBack(Creature*) { return false; }

/*
 * --INFO--
 * Address:	80106314
 * Size:	000040
 */
bool EnemyBase::isBeforeAppearState() { return mLifecycleFSM->getCurrID(this) < EnemyBaseFSM::EBS_Appear; }

/*
 * --INFO--
 * Address:	80106354
 * Size:	000070
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

/*
 * --INFO--
 * Address:	801063C4
 * Size:	0000EC
 */
bool EnemyBase::earthquakeCallBack(Creature* creature, f32 bounceFactor)
{
	if (mBounceTriangle && !isDead() && !isFlying() && isAlive() && !isEvent(0, EB_HardConstrained) && !isEvent(0, EB_Bittered)) {
		if (((isEvent(0, EB_NoInterrupt)) || (isEvent(0, EB_BitterImmune))) == false) {
			EarthquakeStateArg eqArg;
			eqArg.mBounceFactor = bounceFactor;
			mLifecycleFSM->transit(this, EnemyBaseFSM::EBS_Earthquake, &eqArg);
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	801064B0
 * Size:	000108
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

/*
 * --INFO--
 * Address:	801065C0
 * Size:	000008
 */
bool EnemyBase::farmCallBack(Creature*, f32 power) { return false; }

/*
 * --INFO--
 * Address:	801065C8
 * Size:	000048
 */
bool EnemyBase::bombCallBack(Creature* creature, Vector3f& vec, f32 damage)
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

/*
 * --INFO--
 * Address:	80106610
 * Size:	000054
 */
void EnemyBase::collisionCallback(CollEvent& coll)
{
	finishDropping(false);
	setCollEvent(coll);
}

/*
 * --INFO--
 * Address:	80106664
 * Size:	000028
 */
void EnemyBase::setCollEvent(CollEvent& event)
{
	mCollEvent = event;
	enableEvent(0, EB_Colliding);
}

/*
 * --INFO--
 * Address:	8010668C
 * Size:	000010
 */
void EnemyBase::resetCollEvent() { disableEvent(0, EB_Colliding); }

/*
 * --INFO--
 * Address:	8010669C
 * Size:	000004
 */
void EnemyBase::changeMaterial() { }

/*
 * --INFO--
 * Address:	801066A0
 * Size:	000008
 */
SysShape::Model* EnemyBase::viewGetShape() { return mModel; }

/*
 * --INFO--
 * Address:	801066A8
 * Size:	000020
 */
void EnemyBase::viewStartCarryMotion() { startMotion(); }

/*
 * --INFO--
 * Address:	801066C8
 * Size:	000040
 */
void EnemyBase::viewStartPreCarryMotion()
{
	startCarcassMotion();
	stopMotion();
}

/*
 * --INFO--
 * Address:	8010691C
 * Size:	000130
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

/*
 * --INFO--
 * Address:	80106A4C
 * Size:	00002C
 */
void EnemyBase::view_start_carrymotion() { startCarcassMotion(); }

/*
 * --INFO--
 * Address:	80106A78
 * Size:	000040
 */
void EnemyBase::view_finish_carrymotion() { mAnimator->getAnimator(0).mFlags |= 2; }

/*
 * --INFO--
 * Address:	80106AB8
 * Size:	0000A8
 */
void EnemyBase::getCommonEffectPos(Vector3f& commonEffectPos)
{
	commonEffectPos = getPosition();
	commonEffectPos.x += mEffectOffset.x;
	commonEffectPos.y += mEffectOffset.y;
	commonEffectPos.z += mEffectOffset.z;
	commonEffectPos.y += getParms().mHeightOffsetFromFloor.mValue;
}

/*
 * --INFO--
 * Address:	80106B60
 * Size:	000040
 */
void EnemyBase::getWaterSphere(Sys::Sphere* sphere)
{
	sphere->mPosition.x = mPosition.x + mEffectOffset.x;
	sphere->mPosition.y = mPosition.y + mEffectOffset.y;
	sphere->mPosition.z = mPosition.z + mEffectOffset.z;
	sphere->mRadius     = getParms().mHeightOffsetFromFloor.mValue;
}

/*
 * --INFO--
 * Address:	80106BA0
 * Size:	000148
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

/*
 * --INFO--
 * Address:	80106CF0
 * Size:	00027C
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

/*
 * --INFO--
 * Address:	80107204
 * Size:	00001C
 */
void EnemyBase::startMotion()
{
	EnemyAnimatorBase* animator = mAnimator;
	RESET_FLAG(animator->mFlags.typeView, EANIM_FLAG_STOPPED | EANIM_FLAG_FINISHED);
	animator->mNormalizedTime = 1.0f;
}

/*
 * --INFO--
 * Address:	80107220
 * Size:	000058
 */
f32 EnemyBase::getMotionFrameMax() { return mAnimator->getAnimator().mAnimInfo->mAnm->mMaxFrame; }

/*
 * --INFO--
 * Address:	80107278
 * Size:	000068
 */
f32 EnemyBase::getFirstKeyFrame()
{
	SysShape::KeyEvent* firstKeyFrame = static_cast<SysShape::KeyEvent*>(mAnimator->getAnimator().mAnimInfo->mKeyEvent.mChild);
	if (firstKeyFrame) {
		return firstKeyFrame->mFrame;
	}

	return 0.0f;
}

/*
 * --INFO--
 * Address:	801072E0
 * Size:	000020
 */
void EnemyBase::stopMotion()
{
	EnemyAnimatorBase* animator = mAnimator;
	RESET_FLAG(animator->mFlags.typeView, EANIM_FLAG_PLAYING);
	SET_FLAG(animator->mFlags.typeView, EANIM_FLAG_STOPPED);
}

/*
 * --INFO--
 * Address:	80107300
 * Size:	000038
 */
bool EnemyBase::isFinishMotion() { return mAnimator->getAnimator().mFlags >> 1 & 1; }

/*
 * --INFO--
 * Address:	80107338
 * Size:	000010
 */
bool EnemyBase::isStopMotion() { return mAnimator->mFlags.isSet(EANIM_FLAG_STOPPED); }

/*
 * --INFO--
 * Address:	80107348
 * Size:	000048
 */
int EnemyBase::getCurrAnimIndex()
{
	SysShape::AnimInfo* animInfo = mAnimator->getAnimator().mAnimInfo;
	if (animInfo) {
		return animInfo->mId;
	}

	return -1;
}

/*
 * --INFO--
 * Address:	80107390
 * Size:	00000C
 */
void EnemyBase::setAnimSpeed(f32 speed) { mAnimator->mSpeed = speed; }

/*
 * --INFO--
 * Address:	8010739C
 * Size:	000030
 */
void EnemyBase::resetAnimSpeed() { mAnimator->resetAnimSpeed(); }

/*
 * --INFO--
 * Address:	801073D8
 * Size:	000014
 */
JAInter::Object* EnemyBase::getJAIObject() { return static_cast<JAInter::Object*>(mSoundObj); }

/*
 * --INFO--
 * Address:	801073EC
 * Size:	000008
 */
PSM::Creature* EnemyBase::getPSCreature() { return static_cast<PSM::Creature*>(mSoundObj); }

/*
 * --INFO--
 * Address:	801073F4
 * Size:	00001C
 */
int EnemyBase::getStateID()
{
	if (mCurrentLifecycleState) {
		return mCurrentLifecycleState->mStateID;
	}

	return -1;
}

/*
 * --INFO--
 * Address:	80107410
 * Size:	0000AC
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

/*
 * --INFO--
 * Address:	801074D0
 * Size:	000234
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

/*
 * --INFO--
 * Address:	80107764
 * Size:	000008
 */
f32 EnemyBase::getDownSmokeScale() { return 0.0f; }

/*
 * --INFO--
 * Address:	8010776C
 * Size:	000010
 */
void EnemyBase::constraintOff() { disableEvent(0, EB_Constrained); }

/*
 * --INFO--
 * Address:	8010777C
 * Size:	000018
 */
void EnemyBase::hardConstraintOn()
{
	enableEvent(0, EB_HardConstrained);
	mMass = 0.0f;
}

/*
 * --INFO--
 * Address:	80107794
 * Size:	000028
 */
void EnemyBase::hardConstraintOff()
{
	disableEvent(0, EB_HardConstrained);
	mMass         = mFriction;
	mAcceleration = Vector3f(0.0f);
}

/*
 * --INFO--
 * Address:	801077BC
 * Size:	000084
 */
void EnemyBase::startMovie()
{
	if (mLifecycleFSM->getCurrID(this) >= EnemyBaseFSM::EBS_Appear) {
		fadeEffects();
		doStartMovie();
	}
}

/*
 * --INFO--
 * Address:	80107844
 * Size:	000084
 */
void EnemyBase::endMovie()
{
	if (mLifecycleFSM->getCurrID(this) >= EnemyBaseFSM::EBS_Appear) {
		createEffects();
		doEndMovie();
	}
}

/*
 * --INFO--
 * Address:	801078C8
 * Size:	000004
 */
// WEAK - in header
// void EnemyBase::doEndMovie() { }

/*
 * --INFO--
 * Address:	801078CC
 * Size:	000094
 */
void EnemyBase::doStartEarthquakeState(f32 yVelocityScale)
{
	mTargetVelocity  = Vector3f(0.0f);
	mCurrentVelocity = Vector3f(0.0f);

	mCurrentVelocity.y = yVelocityScale * 200.0f + randFloat() * 100.0f;
};

/*
 * --INFO--
 * Address:	80107960
 * Size:	000004
 */
void EnemyBase::doFinishEarthquakeState() { }

/*
 * --INFO--
 * Address:	80107964
 * Size:	000004
 */
void EnemyBase::doStartEarthquakeFitState() { }

/*
 * --INFO--
 * Address:	80107968
 * Size:	000004
 */
void EnemyBase::doFinishEarthquakeFitState() { }

/*
 * --INFO--
 * Address:	8010796C
 * Size:	00002C
 */
void EnemyBase::startWaitingBirthTypeDrop() { doStartWaitingBirthTypeDrop(); }

/*
 * --INFO--
 * Address:	80107998
 * Size:	000004
 */
void EnemyBase::doStartWaitingBirthTypeDrop() { }

/*
 * --INFO--
 * Address:	8010799C
 * Size:	00002C
 */
void EnemyBase::finishWaitingBirthTypeDrop() { doFinishWaitingBirthTypeDrop(); }

/*
 * --INFO--
 * Address:	801079C8
 * Size:	000064
 */
void EnemyBase::doFinishWaitingBirthTypeDrop()
{
	if (!isFlying()) {
		enableEvent(1, EB2_Dropping);
		setDroppingMassZero();
		mScale = Vector3f(1.0f);
	}
}

/*
 * --INFO--
 * Address:	80107A2C
 * Size:	00003C
 */
bool EnemyBase::isBirthTypeDropGroup()
{
	return (mDropGroup == EDG_Normal || mDropGroup == EDG_Pikmin || mDropGroup == EDG_Navi || mDropGroup == EDG_Carry
	        || mDropGroup == EDG_Earthquake);
}

/*
 * --INFO--
 * Address:	80107A68
 * Size:	000008
 */
Vector3f* EnemyBase::getFitEffectPos() { return &mBoundingSphere.mPosition; }

/*
 * --INFO--
 * Address:	80107A70
 * Size:	000018
 */
void EnemyBase::setDroppingMassZero()
{
	enableEvent(1, EB2_DroppingMassZero);
	mMass = 0.0f;
}

/*
 * --INFO--
 * Address:	80107A88
 * Size:	000018
 */
void EnemyBase::resetDroppingMassZero()
{
	disableEvent(1, EB2_DroppingMassZero);
	mMass = mFriction;
}
} // namespace Game
