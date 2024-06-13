#include "Game/Entities/Queen.h"
#include "Game/Entities/Baby.h"
#include "Game/Entities/Rock.h"
#include "Game/generalEnemyMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/EnemyIterator.h"
#include "Game/Stickers.h"
#include "Game/SingleGameSection.h"
#include "Game/Navi.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace Queen {

/**
 * @note Address: 0x802894D4
 * @note Size: 0x17C
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	mShadowMgr       = new QueenShadowMgr(this);
	mMatLoopAnimator = new Sys::MatLoopAnimator;
	createEffect();
}

/**
 * @note Address: 0x80289650
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x80289654
 * @note Size: 0x100
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_PlatformCollEnabled);
	disableEvent(0, EB_Cullable);
	mNextState      = QUEEN_NULL;
	mIsRolling      = false;
	mWaitTimer      = 0.0f;
	mIsRoomForLarva = false;
	mBirthTimer     = 0.0f;
	mPrevHitNum     = 0.0f;
	resetJointShadow();
	mShadowMgr->init();
	setupEffect();
	mIsAppearBGM     = false;
	mIsAttackLoopBGM = false;
	resetMidBossAppearBGM();
	mMatLoopAnimator->start(C_MGR->mTexAnimation);

	if (mCanCreateLarva) {
		mFsm->start(this, QUEEN_Wait, nullptr);
	} else {
		mFsm->start(this, QUEEN_Sleep, nullptr);
	}
}

/**
 * @note Address: 0x80289754
 * @note Size: 0x58
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishRollingEffect(false);
	finishDamageEffect();
	finishSleepEffect();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x802897AC
 * @note Size: 0xB8
 */
void Obj::setParameters()
{
	mCanCreateLarva = true;
	mDoEasyRoll     = false;

	if (gameSystem) {
		if (gameSystem->isZukanMode()) {
			mCanCreateLarva = false;

		} else if (gameSystem->mIsInCave && gameSystem->isStoryMode()) {
			SingleGameSection* section = static_cast<SingleGameSection*>(gameSystem->mSection);
			if (section && section->getCaveID() == 'f_01') { // if in Hole of Beasts
				mCanCreateLarva               = false;
				mDoEasyRoll                   = true;
				C_GENERALPARMS.mHealth.mValue = C_PROPERPARMS.mHoBHealth.mValue;
			}
		}
	}

	EnemyBase::setParameters();
}

/**
 * @note Address: 0x80289864
 * @note Size: 0x50
 */
void Obj::doUpdate()
{
	mShadowMgr->update();
	updateCreateBaby();
	mFsm->exec(this);
}

/**
 * @note Address: 0x802898B4
 * @note Size: 0x34
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/**
 * @note Address: 0x802898E8
 * @note Size: 0x54
 */
void Obj::doAnimationCullingOff()
{
	EnemyBase::doAnimationCullingOff();
	if (isAlive()) {
		mMatLoopAnimator->animate(30.0f);
	}
}

/**
 * @note Address: 0x8028993C
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x80289940
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x80289960
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802899AC
 * @note Size: 0x8C
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition = getPosition();
	shadowParam.mPosition.y += 15.0f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 50.0f;
	shadowParam.mSize                     = 45.0f;
}

/**
 * @note Address: 0x80289A38
 * @note Size: 0xB0
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (part && creature && creature->isPiki()) {
		int stateID = getStateID();
		if (stateID == QUEEN_Sleep) {
			damage *= 0.1f;
		} else if (stateID == QUEEN_Flick) {
			damage *= 0.2f;
		}

		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80289AE8
 * @note Size: 0x8
 */
bool Obj::earthquakeCallBack(Creature* creature, f32 damage) { return false; }

/**
 * @note Address: 0x80289AF0
 * @note Size: 0x4C
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishSleepEffect();
	finishDamageEffect();
	forceFinishRollingEffect();
	startStoneStateBossAttackLoopBGM();
}

/**
 * @note Address: 0x80289B3C
 * @note Size: 0x88
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);

	int stateID = getStateID();
	if (stateID == QUEEN_Damage) {
		startDamageEffect();
	} else if (stateID == QUEEN_Rolling && mIsRolling) {
		startRollingEffect();
	}

	finishStoneStateBossAttackLoopBGM();
}

/**
 * @note Address: 0x80289BC4
 * @note Size: 0x84
 */
bool Obj::ignoreAtari(Creature* creature)
{
	if (mIsRolling && !isEvent(0, EB_Bittered) && (creature->isNavi() || creature->isTeki())) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80289C48
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(QUEENANIM_Carry, nullptr); }

/**
 * @note Address: 0x80289C70
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x80289C90
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x80289CB0
 * @note Size: 0x2EC
 */
void Obj::rollingAttack()
{
	Vector3f pos     = getPosition();
	const f32 angle  = getFaceDir();
	f32 attackRadius = C_GENERALPARMS.mAttackRadius();
	f32 attackAngle  = C_GENERALPARMS.mAttackHitAngle();

	Vector3f forward = getDirection(angle);
	Vector3f back(-forward.z, 0.0f, forward.x);

	Sys::Sphere sphere(mPosition, 250.0f);
	CellIteratorArg iterArg(sphere);
	iterArg.mOptimise = true;
	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive()) {
			Vector3f creaturePos = creature->getPosition();
			Vector3f sep         = creaturePos - pos;
			if (absVal(sep.y) < 50.0f) {
				if (absVal(back.dot(sep)) < attackAngle) {
					if (absVal(forward.dot(sep)) < attackRadius) {
						InteractPress press(this, C_GENERALPARMS.mAttackDamage.mValue, nullptr);
						creature->stimulate(press);
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x80289F9C
 * @note Size: 0x3A8
 */
void Obj::flickPikmin(f32 angle)
{
	f32 bodyAngle = PI + angle;

	Stickers stickers(this);
	Iterator<Creature> iter(&stickers);
	CI_LOOP(iter)
	{
		Creature* stuck = *iter;
		if (stuck->isAlive()) {
			CollPart* stuckPart = stuck->mStuckCollPart;
			if (stuckPart) {
				if (stuckPart->mCurrentID == 'nose' || stuckPart->mCurrentID == 'head' || stuckPart->mCurrentID == 'bod1') {
					InteractFlick flick(this, C_GENERALPARMS.mShakeKnockback.mValue, C_GENERALPARMS.mShakeDamage.mValue, angle);
					stuck->stimulate(flick);

				} else if (stuckPart->mCurrentID == 'bod5') {
					InteractFlick flick(this, C_GENERALPARMS.mShakeKnockback.mValue, C_GENERALPARMS.mShakeDamage.mValue, bodyAngle);
					stuck->stimulate(flick);

				} else {
					InteractFlick flick(this, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE);
					stuck->stimulate(flick);
				}
			}
		}
	}
}

/**
 * @note Address: 0x8028A344
 * @note Size: 0x1A8
 */
bool Obj::isRollingAttackLeft()
{
	if (mDoEasyRoll) {
		mDoEasyRoll = false;
		Navi* navi  = naviMgr->getActiveNavi();
		if (navi) {
			f32 angle       = HALF_PI + getFaceDir();
			Vector3f angles = Vector3f(sinf(angle), 0.0f, cosf(angle));
			Vector3f sep    = navi->getPosition() - mPosition;
			sep.y           = 0.0f;

			// if navi on left side, don't roll left
			if (angles.dot(sep) > 0.0f) {
				return false;
			}
		}

		return true;
	}

	return randWeightFloat(1.0f) < 0.5f;
}

/**
 * @note Address: 0x8028A4EC
 * @note Size: 0x2D4
 */
void Obj::createCrashFallRock()
{
	if (gameSystem && gameSystem->mIsInCave && gameSystem->isStoryMode()) {
		SingleGameSection* section = static_cast<SingleGameSection*>(gameSystem->mSection);
		if (section && section->getCaveID() == 'l_02') {
			// only cause falling rocks in Hole of Heroes (not HoB or FC)
			const f32 angle  = mFaceDir;
			Vector3f faceVec = getDirection(angle);            // f23, f24
			Vector3f flipFaceVec(-faceVec.x, 0.0f, faceVec.z); // f27
			Vector3f originPoint(225.0f * faceVec.x + mHomePosition.x, 0.0f, 225.0f * faceVec.z + mHomePosition.z);

			Rock::Mgr* rockMgr = static_cast<Rock::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Rock));
			if (rockMgr) {
				for (int i = 0; i < 7; i++) {
					f32 randDist = randWeightFloat(150.0f);
					f32 randIdx  = 50.0f * (f32)i - 150.0f;
					EnemyBirthArg birthArg;
					birthArg.mTypeID   = EnemyTypeID::EnemyID_Rock;
					birthArg.mPosition = Vector3f(flipFaceVec.z * randIdx + (faceVec.x * randDist + originPoint.x), 0.0f,
					                              flipFaceVec.x * randIdx + (faceVec.z * randDist + originPoint.z));

					birthArg.mFaceDir         = mFaceDir;
					birthArg.mExistenceLength = 30.0f;
					Rock::Obj* rock           = static_cast<Rock::Obj*>(rockMgr->birth(birthArg));
					if (rock) {
						rock->init(nullptr);
						rock->disableEvent(0, EB_Cullable);
						CG_GENERALPARMS(rock).mSightRadius.mValue = 1000.0f;
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x8028A7C0
 * @note Size: 0x19C
 */
void Obj::createBabyChappy()
{
	Baby::Mgr* babyMgr = static_cast<Baby::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Baby));
	if (babyMgr) {
		EnemyBirthArg birthArg;
		birthArg.mPosition = mModel->getJoint("body_end")->getWorldMatrix()->getColumn(3);
		birthArg.mFaceDir  = PI + getFaceDir();

		Baby::Obj* baby = static_cast<Baby::Obj*>(babyMgr->birth(birthArg));
		if (baby) {
			f32 angle           = birthArg.mFaceDir;
			Queen::Parms* parms = C_PARMS;
			Vector3f vel = Vector3f(parms->mGeneral.mSearchDistance() * sinf(angle), 0.0f, parms->mGeneral.mSearchDistance() * cosf(angle));
			baby->init(nullptr);
			baby->setVelocity(vel);
			baby->mTargetVelocity = vel;
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x21C
 */
int Obj::getBabyChappyCount()
{
	int count          = 0;
	Baby::Mgr* babyMgr = static_cast<Baby::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Baby));
	if (babyMgr) {
		EnemyIterator<Baby::Obj> iter(babyMgr);
		CI_LOOP(iter)
		{
			Baby::Obj* baby = *iter;
			if (baby->isAlive()) {
				count++;
			}
		}
	}

	return count;
}

/**
 * @note Address: 0x8028A9A8
 * @note Size: 0x274
 */
void Obj::updateCreateBaby()
{
	if (mCanCreateLarva) {
		mBirthTimer += sys->mDeltaTime;
		int babyCount = getBabyChappyCount();
		if (babyCount >= C_PROPERPARMS.mMaxBirths.mValue) {
			mIsRoomForLarva = false;
		} else if (babyCount <= C_PROPERPARMS.mMinBirths.mValue) {
			mIsRoomForLarva = true;
		}
	}
}

/**
 * @note Address: 0x8028AC1C
 * @note Size: 0x3C
 */
bool Obj::isCreateBaby()
{
	if (mCanCreateLarva && mIsRoomForLarva && mBirthTimer > C_PROPERPARMS.mBirthInterval.mValue) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8028AC58
 * @note Size: 0x18
 */
bool Obj::isHitCounterUp() { return mFlickTimer > mPrevHitNum; }

/**
 * @note Address: 0x8028AC70
 * @note Size: 0x28
 */
void Obj::resetJointShadow() { shadowMgr->delNormalShadow(this); }

/**
 * @note Address: 0x8028AC98
 * @note Size: 0x40
 */
void Obj::releaseJointShadow()
{
	shadowMgr->addNormalShadow(this);
	shadowMgr->delJointShadow(this);
}

/**
 * @note Address: 0x8028ACD8
 * @note Size: 0xC8
 */
void Obj::startBossChargeBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_AttackPrep);
}

/**
 * @note Address: 0x8028ADA0
 * @note Size: 0xDC
 */
void Obj::startBossAttackLoopBGM()
{
	if (!mIsAttackLoopBGM) {
		mIsAttackLoopBGM         = true;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_AttackLong);
	}
}

/**
 * @note Address: 0x8028AE7C
 * @note Size: 0xD8
 */
void Obj::finishBossAttackLoopBGM()
{
	if (mIsAttackLoopBGM) {
		mIsAttackLoopBGM         = false;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_MainLoop);
	}
}

/**
 * @note Address: 0x8028AF54
 * @note Size: 0xD4
 */
void Obj::startStoneStateBossAttackLoopBGM()
{
	if (mIsAttackLoopBGM) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_MainLoop);
	}
}

/**
 * @note Address: 0x8028B028
 * @note Size: 0xD4
 */
void Obj::finishStoneStateBossAttackLoopBGM()
{
	if (mIsAttackLoopBGM) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_AttackLong);
	}
}

/**
 * @note Address: 0x8028B0FC
 * @note Size: 0xFC
 */
void Obj::updateBossBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	if (mStuckPikminCount != 0) {
		soundObj->postPikiAttack(true);
	} else {
		soundObj->postPikiAttack(false);
	}
}

/**
 * @note Address: 0x8028B1F8
 * @note Size: 0xA8
 */
void Obj::resetMidBossAppearBGM()
{
	if (gameSystem && gameSystem->mIsInCave) {
		PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(mSoundObj);
		PSM::checkMidBoss(soundObj);
		soundObj->setAppearFlag(false);
		if (mCanCreateLarva) {
			mIsAppearBGM   = true;
			soundObj->_118 = 1;
		}
	}
}

/**
 * @note Address: 0x8028B2A0
 * @note Size: 0x80
 */
void Obj::setMidBossAppearBGM()
{
	if (!mIsAppearBGM) {
		mIsAppearBGM                = true;
		PSM::EnemyMidBoss* soundObj = static_cast<PSM::EnemyMidBoss*>(mSoundObj);
		PSM::checkMidBoss(soundObj);
		soundObj->setAppearFlag(true);
	}
}

/**
 * @note Address: 0x8028B320
 * @note Size: 0x534
 */
void Obj::createEffect()
{
	mEfxLay       = new efx::TQueenLay;
	mEfxRollCR    = new efx::TQueenRollCR(&mPosition, &mFaceDir);
	mEfxRollCL    = new efx::TQueenRollCL(&mPosition, &mFaceDir);
	mEfxRoll      = new efx::TQueenRoll(&mPosition, &mFaceDir);
	mEfxCrashR    = new efx::TQueenCrashR(&mPosition, &mFaceDir);
	mEfxCrashL    = new efx::TQueenCrashL(&mPosition, &mFaceDir);
	mEfxCrashRock = new efx::TQueenCrashRock(&mPosition, &mFaceDir);
	mEfxDamage    = new efx::TQueenDamage(&mPosition, &mFaceDir);
	mEfxFlick     = new efx::TQueenFlick(&mPosition, &mFaceDir);
	mEfxDead      = new efx::TQueenDead;
	mEfxWakeup    = new efx::TQueenWakeup(&mPosition, &mFaceDir);
	mEfxHanacho   = new efx::TQueenHanacho;
}

/**
 * @note Address: 0x8028B854
 * @note Size: 0x78
 */
void Obj::setupEffect()
{
	mEfxLay->mMtx = mModel->getJoint("body_end")->getWorldMatrix();
	mEfxDead->setMtxptr(mModel->getJoint("body5")->getWorldMatrix()->mMatrix.mtxView);
	mEfxHanacho->mMtx = mModel->getJoint("head")->getWorldMatrix();
}

/**
 * @note Address: 0x8028B8CC
 * @note Size: 0x34
 */
void Obj::createBornEffect() { mEfxLay->create(nullptr); }

/**
 * @note Address: 0x8028B900
 * @note Size: 0x80
 */
void Obj::startRollingEffect()
{
	if (getCurrAnimIndex() == 6) {
		mEfxRollCR->create(nullptr);
	} else {
		mEfxRollCL->create(nullptr);
	}

	mEfxRoll->create(nullptr);
}

/**
 * @note Address: 0x8028B980
 * @note Size: 0xE0
 */
void Obj::finishRollingEffect(bool doCrash)
{
	if (getCurrAnimIndex() == 6) {
		if (doCrash) {
			mEfxCrashR->create(nullptr);
		}

		mEfxRollCR->fade();
	} else {
		if (doCrash) {
			mEfxCrashL->create(nullptr);
		}

		mEfxRollCL->fade();
	}

	if (doCrash) {
		mEfxCrashRock->create(nullptr);
	}

	mEfxRoll->fade();
}

/**
 * @note Address: 0x8028BA60
 * @note Size: 0x64
 */
void Obj::forceFinishRollingEffect()
{
	mEfxRollCR->fade();
	mEfxRollCL->fade();
	mEfxRoll->fade();
}

/**
 * @note Address: 0x8028BAC4
 * @note Size: 0x34
 */
void Obj::startDamageEffect() { mEfxDamage->create(nullptr); }

/**
 * @note Address: 0x8028BAF8
 * @note Size: 0x30
 */
void Obj::finishDamageEffect() { mEfxDamage->fade(); }

/**
 * @note Address: 0x8028BB28
 * @note Size: 0x34
 */
void Obj::createFlickEffect() { mEfxFlick->create(nullptr); }

/**
 * @note Address: 0x8028BB5C
 * @note Size: 0x34
 */
void Obj::createDeadEffect() { mEfxDead->create(nullptr); }

/**
 * @note Address: 0x8028BB90
 * @note Size: 0x34
 */
void Obj::createWakeUpEffect() { mEfxWakeup->create(nullptr); }

/**
 * @note Address: 0x8028BBC4
 * @note Size: 0x34
 */
void Obj::startSleepEffect() { mEfxHanacho->create(nullptr); }

/**
 * @note Address: 0x8028BBF8
 * @note Size: 0x30
 */
void Obj::finishSleepEffect() { mEfxHanacho->fade(); }

/**
 * @note Address: 0x8028BC28
 * @note Size: 0x118
 */
void Obj::effectDrawOn()
{
	mEfxLay->endDemoDrawOn();
	mEfxRollCR->endDemoDrawOn();
	mEfxRollCL->endDemoDrawOn();
	mEfxRoll->endDemoDrawOn();
	mEfxCrashR->endDemoDrawOn();
	mEfxCrashL->endDemoDrawOn();
	mEfxCrashRock->endDemoDrawOn();
	mEfxDamage->endDemoDrawOn();
	mEfxFlick->endDemoDrawOn();
	mEfxDead->endDemoDrawOn();
	mEfxWakeup->endDemoDrawOn();
	mEfxHanacho->endDemoDrawOn();
}

/**
 * @note Address: 0x8028BD40
 * @note Size: 0x118
 */
void Obj::effectDrawOff()
{
	mEfxLay->startDemoDrawOff();
	mEfxRollCR->startDemoDrawOff();
	mEfxRollCL->startDemoDrawOff();
	mEfxRoll->startDemoDrawOff();
	mEfxCrashR->startDemoDrawOff();
	mEfxCrashL->startDemoDrawOff();
	mEfxCrashRock->startDemoDrawOff();
	mEfxDamage->startDemoDrawOff();
	mEfxFlick->startDemoDrawOff();
	mEfxDead->startDemoDrawOff();
	mEfxWakeup->startDemoDrawOff();
	mEfxHanacho->startDemoDrawOff();
}

} // namespace Queen
} // namespace Game
