#include "Game/Entities/KingChappy.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/MapMgr.h"
#include "Game/Navi.h"
#include "Game/PikiMgr.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "nans.h"

namespace Game {
namespace KingChappy {

/**
 * @note Address: 0x803591BC
 * @note Size: 0x204
 */
void FSM::init(EnemyBase* enemy)
{
	create(KINGCHAPPY_Count);

	registerState(new StateWalk(KINGCHAPPY_Walk));
	registerState(new StateAttack(KINGCHAPPY_Attack));
	registerState(new StateDead(KINGCHAPPY_Dead));
	registerState(new StateFlick(KINGCHAPPY_Flick));
	registerState(new StateWarCry(KINGCHAPPY_WarCry));
	registerState(new StateDamage(KINGCHAPPY_Damage));
	registerState(new StateTurn(KINGCHAPPY_Turn));
	registerState(new StateEat(KINGCHAPPY_Eat));
	registerState(new StateHide(KINGCHAPPY_Hide));
	registerState(new StateHideWait(KINGCHAPPY_HideWait));
	registerState(new StateAppear(KINGCHAPPY_Appear));
	registerState(new StateCaution(KINGCHAPPY_Caution));
	registerState(new StateSwallow(KINGCHAPPY_Swallow));
}

/**
 * @note Address: 0x803593C0
 * @note Size: 0x3C
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	mName = "walk";
}

/**
 * @note Address: 0x803593FC
 * @note Size: 0x80
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->startMotionSelf(KINGANIM_Move, nullptr);
	OBJ(enemy)->resetFootPos();
	if (enemy->mTargetCreature) {
		mNoTargetTimer = 0;
	}

	OBJ(enemy)->mNextState = KINGCHAPPY_NULL;
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed * CG_PROPERPARMS(enemy).mWalkingAnimeSpeed.mValue);
}

/**
 * @note Address: 0x8035947C
 * @note Size: 0x1A4
 */
void StateWalk::exec(EnemyBase* enemy)
{
	if (OBJ(enemy)->mNextState < 0) {
		OBJ(enemy)->walkFunc();
		OBJ(enemy)->checkTurn(true);

		if (!enemy->mTargetCreature) {
			mNoTargetTimer++;
		}

		if (OBJ(enemy)->isOutOfTerritory(1.0f) || CG_PARMS(enemy)->mDontSearchTarget
		    || mNoTargetTimer > CG_PROPERPARMS(enemy).mPeriodOfIncubation.mValue) {
			OBJ(enemy)->mGoalPosition = enemy->mHomePosition;
			mNoTargetTimer            = CG_PROPERPARMS(enemy).mPeriodOfIncubation.mValue;
			if (OBJ(enemy)->isReachToGoal(CG_GENERALPARMS(enemy).mHomeRadius.mValue)) {
				OBJ(enemy)->mNextState = KINGCHAPPY_Hide;
				mNoTargetTimer         = 0;
			}
		} else if (OBJ(enemy)->isReachToGoal(20.0f)) {
			OBJ(enemy)->setNextGoal();
		}
	}

	OBJ(enemy)->checkDead(true);
	OBJ(enemy)->checkFlick(true);
	OBJ(enemy)->checkAttack(true);

	if (OBJ(enemy)->mNextState >= 0) {
		enemy->finishMotion();
		enemy->mTargetVelocity = Vector3f(0.0f);
	}

	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_END_BLEND) {
			OBJ(enemy)->endBlendAnimation();
		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			transit(enemy, OBJ(enemy)->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x80359620
 * @note Size: 0x28
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
}

/**
 * @note Address: 0x80359648
 * @note Size: 0x3C
 */
StateAttack::StateAttack(int stateID)
    : State(stateID)
{
	mName = "attack";
}

/**
 * @note Address: 0x80359684
 * @note Size: 0x6C
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->startMotionSelf(KINGANIM_Attack, nullptr);
	enemy->mTargetVelocity   = Vector3f(0.0f);
	mEatenPikis              = 0;
	_14                      = 0;
	mEatenBombs              = 0;
	mDoCheckEat              = false;
	OBJ(enemy)->mCanEatBombs = false;
}

/**
 * @note Address: 0x803596F0
 * @note Size: 0x6AC
 */
void StateAttack::exec(EnemyBase* enemy)
{
	PSM::EnemyBoss* soundObj;
	if (mDoCheckEat) {
		int bombVal = OBJ(enemy)->eatBomb();
		if (bombVal > mEatenBombs) {
			mEatenBombs = bombVal;
		}

		int pikiVal = EnemyFunc::eatPikmin(enemy, nullptr);
		if (pikiVal > mEatenPikis) {
			mEatenPikis = pikiVal;
		}
	}

	Vector3f tonguePos;
	Vector3f tongueVel;

	OBJ(enemy)->getTonguePosVel(tonguePos, tongueVel);
	tonguePos.y += 5.0f;
	Sys::Sphere sphere(tonguePos, 5.0f);

	MoveInfo moveInfo(&sphere, &tongueVel, CG_PARMS(enemy)->mCreatureProps.mProps.mWallReflection.mValue);
	mapMgr->traceMove(moveInfo, sys->mDeltaTime);

	if (moveInfo.mFloorTriangle || moveInfo.mWallTriangle) {
		OBJ(enemy)->mAllowAnimBlending = true;
		OBJ(enemy)->fadeEffect(Obj::KingEfx_AttackDrool);
		if (mEatenBombs > 0) {
			StateEatArg eatArg;
			eatArg.mDoStunAfter = true;
			transit(enemy, KINGCHAPPY_Eat, &eatArg);
			return;
		}

		if (mEatenPikis > 0) {
			transit(enemy, KINGCHAPPY_Swallow, nullptr);
			return;
		}

		transit(enemy, KINGCHAPPY_Walk, nullptr);
		return;
	}

	Iterator<Navi> iter(naviMgr);

	CI_LOOP(iter)
	{
		Navi* navi = *iter;

		for (int i = 0; i < enemy->getMouthSlots()->getMax(); i++) {
			MouthCollPart* slot = enemy->getMouthSlots()->getSlot(i);
			Vector3f slotPos;
			slot->getPosition(slotPos);
			Vector3f naviPos = navi->getPosition();
			f32 len          = slotPos.distance(naviPos);
			if (len < slot->mRadius) {
				InteractAttack attack(enemy, CG_GENERALPARMS(enemy).mAttackDamage.mValue, nullptr);
				navi->stimulate(attack);
			}
		}
	}

	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_END_BLEND:
			OBJ(enemy)->endBlendAnimation();
			break;

		case KEYEVENT_2:
			// this bit needs fixing
			soundObj = static_cast<PSM::EnemyBoss*>(enemy->mSoundObj);
			PSM::assertIsBoss(soundObj);
			if (soundObj) {
				soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_Attack);
			}
			break;

		case KEYEVENT_3:
			mDoCheckEat = true;
			OBJ(enemy)->createEffect(Obj::KingEfx_AttackDrool);
			break;

		case KEYEVENT_5:
			OBJ(enemy)->fadeEffect(Obj::KingEfx_AttackDrool);
			break;

		case KEYEVENT_6:
			OBJ(enemy)->mCanEatBombs = true;
			break;

		case KEYEVENT_END:
			if (mEatenBombs > 0) {
				StateEatArg eatArg;
				eatArg.mDoStunAfter = true;
				transit(enemy, KINGCHAPPY_Eat, &eatArg);
			} else if (mEatenPikis > 0) {
				transit(enemy, KINGCHAPPY_Swallow, nullptr);
			} else {
				transit(enemy, KINGCHAPPY_Walk, nullptr);
			}
			break;
		}
	}

	OBJ(enemy)->checkDead(true);
}

/**
 * @note Address: 0x80359D9C
 * @note Size: 0x3C
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->fadeEffect(Obj::KingEfx_AttackDrool);
	OBJ(enemy)->mCanEatBombs = true;
}

/**
 * @note Address: 0x80359DD8
 * @note Size: 0x3C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/**
 * @note Address: 0x80359E14
 * @note Size: 0xCC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->startMotionSelf(KINGANIM_Dead, nullptr);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->deathProcedure();
	OBJ(enemy)->createEffect(Obj::KingEfx_Dead);

	Vector3f pos = enemy->getPosition();
	cameraMgr->startVibration(VIBTYPE_MidMidShort, pos, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed13, pos, RUMBLEID_Both);

	enemy->disableEvent(0, EB_Cullable);
}

/**
 * @note Address: 0x80359EE0
 * @note Size: 0xDC
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_END_BLEND:
			OBJ(enemy)->endBlendAnimation();
			break;

		case KEYEVENT_2:
			OBJ(enemy)->createBounceEffect();
			Vector3f pos = enemy->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightMidShort, pos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, pos, RUMBLEID_Both);
			break;

		case KEYEVENT_END:
			enemy->kill(nullptr);
			break;
		}
	}
}

/**
 * @note Address: 0x80359FBC
 * @note Size: 0x28
 */
void StateDead::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->fadeEffect(Obj::KingEfx_Dead);
}

/**
 * @note Address: 0x80359FE4
 * @note Size: 0x3C
 */
StateFlick::StateFlick(int stateID)
    : State(stateID)
{
	mName = "flick";
}

/**
 * @note Address: 0x8035A020
 * @note Size: 0x60
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->startMotionSelf(KINGANIM_Flick, nullptr);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->enableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x8035A080
 * @note Size: 0x8EC
 */
void StateFlick::exec(EnemyBase* enemy)
{
	bool naviCheck;
	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_END_BLEND:
			OBJ(enemy)->endBlendAnimation();
			break;

		case KEYEVENT_2:
			Vector3f pos = enemy->getPosition();
			f32 faceDir  = enemy->getFaceDir();
			efx::ArgRotYScale argScale(pos, faceDir, enemy->mScaleModifier);
			if (enemy->mWaterBox) {
				efx::TKchApWat wat;
				wat.create(&argScale);
				enemy->mSoundObj->startSound(PSSE_EN_KING_WATER_APPEAR, 0);
			} else {
				efx::TKchFlickSand sand;
				sand.create(&argScale);
			}

			cameraMgr->startVibration(VIBTYPE_LightMidShort, pos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, pos, RUMBLEID_Both);

			PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(enemy->mSoundObj);
			PSM::assertIsBoss(soundObj);
			if (soundObj) {
				soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_Flick);
			}

			break;

		case KEYEVENT_3:
			f32 yMax         = 25.0f + OBJ(enemy)->mFootPosition.y;                                  // f31
			f32 yMin         = yMax - 30.0f;                                                         // f30
			Vector3f footPos = OBJ(enemy)->mFootPosition;                                            // f28, na, f27
			f32 trampleRange = CG_PROPERPARMS(enemy).mTramplingRange.mValue * enemy->mScaleModifier; // f29
			trampleRange *= trampleRange;

			Iterator<Piki> iterPiki(pikiMgr);

			CI_LOOP(iterPiki)
			{
				// using operator* here causes Issues
				Piki* piki = iterPiki.mContainer->get(iterPiki.mIndex);
				if (piki->isAlive()) {
					Vector3f pikiPos = piki->getPosition();
					if (yMax > pikiPos.y && yMin < pikiPos.y && footPos.sqrDistance2D(pikiPos) < trampleRange) {
						InteractPress pikiPress(enemy, CG_GENERALPARMS(enemy).mAttackDamage.mValue, nullptr);
						piki->stimulate(pikiPress);
					}
				}
			}

			Iterator<Navi> iterNavi(naviMgr);

			naviCheck = true;

			CI_LOOP(iterNavi)
			{
				// using operator* here also causes Issues
				Navi* navi = iterNavi.mContainer->get(iterNavi.mIndex);
				if (navi->isAlive()) {
					Vector3f naviPos = navi->getPosition();
					if (yMax > naviPos.y && yMin < naviPos.y && footPos.sqrDistance2D(naviPos) < trampleRange) {
						InteractPress naviPress(enemy, CG_GENERALPARMS(enemy).mAttackDamage.mValue, nullptr);
						navi->stimulate(naviPress);
						naviCheck = false;
					}
				}
			}

			f32 rate      = CG_GENERALPARMS(enemy).mShakeChance.mValue;
			f32 knockback = CG_GENERALPARMS(enemy).mShakeKnockback.mValue;
			f32 damage    = CG_GENERALPARMS(enemy).mShakeDamage.mValue;
			f32 range     = CG_GENERALPARMS(enemy).mShakeRange.mValue * enemy->mScaleModifier;

			EnemyFunc::flickNearbyPikmin(enemy, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickStickPikmin(enemy, rate, knockback, damage, enemy->getFaceDir(), nullptr);
			if (naviCheck) {
				EnemyFunc::flickNearbyNavi(enemy, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			}
			enemy->mFlickTimer = 0.0f;
			if (!enemy->isEvent(0, EB_IsBlendAnimated)) {
				enemy->disableEvent(0, EB_NoInterrupt);
			}
			break;

		case KEYEVENT_END:
			transit(enemy, KINGCHAPPY_Walk, nullptr);
			break;
		}
	}

	OBJ(enemy)->checkDead(true);
}

/**
 * @note Address: 0x8035A96C
 * @note Size: 0x10
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x8035A97C
 * @note Size: 0x3C
 */
StateWarCry::StateWarCry(int stateID)
    : State(stateID)
{
	mName = "warcry";
}

/**
 * @note Address: 0x8035A9B8
 * @note Size: 0x54
 */
void StateWarCry::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->startMotionSelf(KINGANIM_WarCry, nullptr);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->mTargetVelocity  = Vector3f(0.0f);
}

/**
 * @note Address: 0x8035AA0C
 * @note Size: 0x6D0
 */
void StateWarCry::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_END_BLEND:
			OBJ(enemy)->endBlendAnimation();
			break;

		case KEYEVENT_2:
			OBJ(enemy)->createEffect(Obj::KingEfx_RoarInd);
			break;

		case KEYEVENT_3:
			OBJ(enemy)->createEffect(Obj::KingEfx_Roar);
			OBJ(enemy)->requestTransit(KINGCHAPPY_Appear);
			OBJ(enemy)->requestTransit(KINGCHAPPY_WarCry);
			Vector3f rumblePos = enemy->getPosition();
			cameraMgr->startVibration(VIBTYPE_HardFastLong, rumblePos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Whistle, rumblePos, RUMBLEID_Both);
			break;

		case KEYEVENT_4:
			Vector3f kingPos = enemy->getPosition();
			f32 roarDist;
			f32 roarAngle;
			f32 yMin = kingPos.y - 20.0f; // f29
			f32 yMax = 30.0f + yMin;      // f28
			Iterator<Piki> iterPiki(pikiMgr);
			CI_LOOP(iterPiki)
			{
				Piki* piki = *iterPiki;
				if (piki->isAlive()) {
					Vector3f pikiPos = piki->getPosition();
					if (yMax > pikiPos.y && yMin < pikiPos.y) {
						roarAngle      = CG_PROPERPARMS(enemy).mRoarEffectiveAngleDeg();
						roarDist       = CG_PROPERPARMS(enemy).mRoarEffectiveRange();
						f32 angDist    = enemy->getAngDist(piki);
						bool distCheck = false;
						Vector3f sep   = enemy->getTargetSeparation(piki);
						if ((sep.sqrLength() < SQUARE(roarDist)) && FABS(angDist) <= PI * (DEG2RAD * roarAngle)) {
							distCheck = true;
						}
						if (distCheck) {
							InteractAstonish astonish(enemy, 100.0f);
							piki->stimulate(astonish);
						}
					}
				}
			}

			f32 rate      = CG_GENERALPARMS(enemy).mShakeChance.mValue;
			f32 knockback = CG_GENERALPARMS(enemy).mShakeKnockback.mValue;
			f32 damage    = CG_GENERALPARMS(enemy).mShakeDamage.mValue;
			f32 range     = CG_GENERALPARMS(enemy).mShakeRange.mValue * enemy->mScaleModifier;

			EnemyFunc::flickStickPikmin(enemy, rate, knockback, damage, enemy->getFaceDir(), nullptr);
			EnemyFunc::flickNearbyPikmin(enemy, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyNavi(enemy, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);

			enemy->mFlickTimer = 0.0f;
			break;

		case KEYEVENT_5:
			OBJ(enemy)->fadeEffect(Obj::KingEfx_Roar);
			break;

		case KEYEVENT_6:
			OBJ(enemy)->fadeEffect(Obj::KingEfx_RoarInd);
			break;

		case KEYEVENT_END:
			if (enemy->mHealth <= 0.0f) {
				transit(enemy, KINGCHAPPY_Dead, nullptr);
			} else {
				transit(enemy, KINGCHAPPY_Walk, nullptr);
			}
			break;
		}
	}

	OBJ(enemy)->checkDead(true);
}

/**
 * @note Address: 0x8035B0DC
 * @note Size: 0x40
 */
void StateWarCry::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->fadeEffect(Obj::KingEfx_Roar);
	OBJ(enemy)->fadeEffect(Obj::KingEfx_RoarInd);
}

/**
 * @note Address: 0x8035B11C
 * @note Size: 0x3C
 */
StateDamage::StateDamage(int stateID)
    : State(stateID)
{
	mName = "damage";
}

/**
 * @note Address: 0x8035B158
 * @note Size: 0x40
 */
void StateDamage::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->startMotionSelf(KINGANIM_Damage, nullptr);
	mStunTimer = 0;
}

/**
 * @note Address: 0x8035B198
 * @note Size: 0x1B4
 */
void StateDamage::exec(EnemyBase* enemy)
{
	if (mStunTimer > 0) {
		mStunTimer++;
		if (mStunTimer > CG_PROPERPARMS(enemy).mBombDamageTime.mValue) {
			enemy->finishMotion();
		}
	}

	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_END_BLEND:
			OBJ(enemy)->endBlendAnimation();
			break;

		case KEYEVENT_2:
			OBJ(enemy)->createEffect(Obj::KingEfx_EatBomb);
			break;

		case KEYEVENT_3:
			OBJ(enemy)->createEffect(Obj::KingEfx_NoseSmoke);
			break;

		case KEYEVENT_4:
			int pikiNum = OBJ(enemy)->getPikminInMouth(true);
			enemy->addDamage(pikiNum * CG_PROPERPARMS(enemy).mBombDamage.mValue, 1.0f);
			enemy->mFlickTimer = 0.0f;
			break;

		case KEYEVENT_5:
			OBJ(enemy)->createBounceEffect();
			break;

		case KEYEVENT_6:
			mStunTimer = 1;
			break;

		case KEYEVENT_END:
			if (enemy->mHealth <= 0.0f) {
				transit(enemy, KINGCHAPPY_Dead, nullptr);
			} else {
				transit(enemy, KINGCHAPPY_Walk, nullptr);
			}
			break;
		}
	}

	OBJ(enemy)->checkDead(true);
}

/**
 * @note Address: 0x8035B34C
 * @note Size: 0x40
 */
void StateDamage::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->fadeEffect(Obj::KingEfx_NoseSmoke);
	OBJ(enemy)->fadeEffect(Obj::KingEfx_EatBomb);
}

/**
 * @note Address: 0x8035B38C
 * @note Size: 0x3C
 */
StateTurn::StateTurn(int stateID)
    : State(stateID)
{
	mName = "turn";
}

/**
 * @note Address: 0x8035B3C8
 * @note Size: 0x48
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->startMotionSelf(KINGANIM_Turn, nullptr);
	enemy->mTargetVelocity = Vector3f(0.0f);
}

/**
 * @note Address: 0x8035B410
 * @note Size: 0xF8
 */
void StateTurn::exec(EnemyBase* enemy)
{
	f32 threshold = 0.5f;
	if (enemy->mTargetCreature) {
		threshold = PI * (DEG2RAD * CG_PROPERPARMS(enemy).mTurningEndAngle.mValue);
	}

	f32 turnVal = OBJ(enemy)->turnFunc(1.0f);
	if (FABS(turnVal) < threshold) {
		enemy->finishMotion();
	}

	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_END_BLEND) {
			OBJ(enemy)->endBlendAnimation();

		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			transit(enemy, KINGCHAPPY_Walk, nullptr);
		}
	}

	OBJ(enemy)->checkDead(true);
	OBJ(enemy)->checkFlick(true);
}

/**
 * @note Address: 0x8035B508
 * @note Size: 0x3C
 */
StateEat::StateEat(int stateID)
    : State(stateID)
{
	mName = "eat";
}

/**
 * @note Address: 0x8035B544
 * @note Size: 0x50
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->startMotionSelf(KINGANIM_Eat, nullptr);
	mDoStunAfter = static_cast<StateEatArg*>(stateArg)->mDoStunAfter;
}

/**
 * @note Address: 0x8035B594
 * @note Size: 0xA4
 */
void StateEat::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_END_BLEND) {
			OBJ(enemy)->endBlendAnimation();

		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			if (mDoStunAfter) {
				transit(enemy, KINGCHAPPY_Damage, nullptr);
			} else {
				transit(enemy, KINGCHAPPY_Swallow, nullptr);
			}
		}
	}

	OBJ(enemy)->checkDead(true);
}

/**
 * @note Address: 0x8035B638
 * @note Size: 0x3C
 */
StateHide::StateHide(int stateID)
    : State(stateID)
{
	mName = "hide";
}

/**
 * @note Address: 0x8035B674
 * @note Size: 0xBC
 */
void StateHide::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->startMotionSelf(KINGANIM_Dive, nullptr);
	enemy->setEmotionCaution();
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->enableEvent(0, EB_BitterImmune);
	enemy->hardConstraintOn();

	Vector3f pos = enemy->getPosition();
	cameraMgr->startVibration(VIBTYPE_LightFastShort, pos, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed13, pos, RUMBLEID_Both);
}

/**
 * @note Address: 0x8035B730
 * @note Size: 0x1B8
 */
void StateHide::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_END_BLEND:
			OBJ(enemy)->endBlendAnimation();
			break;

		case KEYEVENT_2:
			OBJ(enemy)->createEffect(Obj::KingEfx_Dive);
			if (enemy->mWaterBox) {
				enemy->mSoundObj->startSound(PSSE_EN_KING_WATER_APPEAR, 0);
			} else {
				enemy->mSoundObj->startSound(PSSE_EN_KING_APPEAR, 0);
			}
			break;

		case KEYEVENT_4:
			OBJ(enemy)->fadeEffect(Obj::KingEfx_Dive);
			break;

		case KEYEVENT_END:
			PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(enemy->mSoundObj);
			PSM::assertIsBoss(soundObj);
			soundObj->setAppearFlag(false);
			transit(enemy, KINGCHAPPY_HideWait, nullptr);
			break;
		}
	}
}

/**
 * @note Address: 0x8035B8E8
 * @note Size: 0x54
 */
void StateHide::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->fadeEffect(Obj::KingEfx_Dive);
	OBJ(enemy)->fadeEffect(Obj::KingEfx_Drool);
	enemy->fadeEfxHamon();
}

/**
 * @note Address: 0x8035B93C
 * @note Size: 0x40
 */
StateHideWait::StateHideWait(int stateID)
    : State(stateID)
{
	mName = "hidewait";
}

/**
 * @note Address: 0x8035B97C
 * @note Size: 0x80
 */
void StateHideWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	mCanCheckAppearTimer = 0;
	OBJ(enemy)->startMotionSelf(KINGANIM_HideWait, nullptr);
	enemy->disableEvent(0, EB_LifegaugeVisible);
	enemy->hardConstraintOn();
	OBJ(enemy)->fadeEffect(Obj::KingEfx_Drool);
	mHasMadeEfx = false;
	enemy->enableEvent(0, EB_BitterImmune);
}

/**
 * @note Address: 0x8035B9FC
 * @note Size: 0x18C
 */
void StateHideWait::exec(EnemyBase* enemy)
{
	enemy->fadeEfxHamon();
	if (!mHasMadeEfx && enemy->mWaterBox) {
		// WHY is this not just in init
		OBJ(enemy)->createEffect(Obj::KingEfx_Hiding);
		mHasMadeEfx = 1;
	}

	mCanCheckAppearTimer++;

	if (OBJ(enemy)->mDoCheckAppear || mCanCheckAppearTimer > CG_PROPERPARMS(enemy).mTimeToAppearance.mValue) {
		f32 range = CG_PROPERPARMS(enemy).mDistanceToSpawn.mValue * enemy->mScaleModifier;

		bool doWake;
		if (EnemyFunc::isThereOlimar(enemy, range, nullptr)) {
			doWake = true;
		} else if (EnemyFunc::isTherePikmin(enemy, range, nullptr)) {
			doWake = true;
		} else {
			doWake = false;
		}

		if (doWake) {
			transit(enemy, KINGCHAPPY_Appear, nullptr);
			OBJ(enemy)->mDoCheckAppear = false;
		}
	}

	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_END_BLEND) {
			OBJ(enemy)->endBlendAnimation();
		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			transit(enemy, KINGCHAPPY_Appear, nullptr);
			OBJ(enemy)->mDoCheckAppear = false;
		}
	}
}

/**
 * @note Address: 0x8035BB88
 * @note Size: 0x40
 */
void StateHideWait::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->fadeEffect(Obj::KingEfx_Hiding);
	enemy->disableEvent(0, EB_BitterImmune);
}

/**
 * @note Address: 0x8035BBC8
 * @note Size: 0x3C
 */
StateAppear::StateAppear(int stateID)
    : State(stateID)
{
	mName = "appear";
}

/**
 * @note Address: 0x8035BC04
 * @note Size: 0x2EC
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->startMotionSelf(KINGANIM_Appear, nullptr);
	OBJ(enemy)->searchTarget();
	enemy->setEmotionExcitement();
	enemy->disableEvent(0, EB_BitterImmune);
	enemy->enableEvent(0, EB_NoInterrupt);
	mHasNotShaken = true;

	f32 faceDir  = enemy->getFaceDir();
	Vector3f pos = enemy->getPosition();
	efx::ArgRotYScale argScale(pos, faceDir, enemy->mScaleModifier);

	if (enemy->mWaterBox) {
		efx::TKchApWat waterFX;
		waterFX.create(&argScale);
		enemy->mSoundObj->startSound(PSSE_EN_KING_WATER_APPEAR, 0);
	} else {
		efx::TKchApSand sandFX;
		sandFX.create(&argScale);
		enemy->mSoundObj->startSound(PSSE_EN_KING_APPEAR, 0);
	}

	OBJ(enemy)->createEffect(Obj::KingEfx_Drool);
	enemy->createEfxHamon();
	cameraMgr->startVibration(VIBTYPE_MidFastShort, pos, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed12, pos, RUMBLEID_Both);

	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(enemy->mSoundObj);
	PSM::assertIsBoss(soundObj);
	if (soundObj) {
		soundObj->setAppearFlag(true);
	}
}

/**
 * @note Address: 0x8035BEF0
 * @note Size: 0x19C
 */
void StateAppear::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_END_BLEND:
			OBJ(enemy)->endBlendAnimation();
			break;

		case KEYEVENT_2:
			// probably some commented out code
			break;

		case KEYEVENT_3:
			mHasNotShaken   = false;
			f32 shakePower  = CG_PROPERPARMS(enemy).mAppearanceShakeOffPower.mValue;
			f32 shakeDamage = CG_GENERALPARMS(enemy).mShakeDamage.mValue;
			f32 shakeRange  = CG_PROPERPARMS(enemy).mAppearanceShakeOffRange.mValue;

			EnemyFunc::flickNearbyPikmin(enemy, shakeRange, shakePower, shakeDamage, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyNavi(enemy, shakeRange, shakePower, shakeDamage, FLICK_BACKWARD_ANGLE, nullptr);
			break;

		case KEYEVENT_4:
			OBJ(enemy)->createBounceEffect();
			Vector3f pos = enemy->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightFastShort, pos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, pos, RUMBLEID_Both);
			break;

		case KEYEVENT_END:
			transit(enemy, KINGCHAPPY_Caution, nullptr);
			enemy->hardConstraintOff();
			enemy->enableEvent(0, EB_LifegaugeVisible);
			enemy->disableEvent(0, EB_NoInterrupt);
			break;
		}
	}
}

/**
 * @note Address: 0x8035C08C
 * @note Size: 0x3C
 */
StateCaution::StateCaution(int stateID)
    : State(stateID)
{
	mName = "caution";
}

/**
 * @note Address: 0x8035C0C8
 * @note Size: 0x2C
 */
void StateCaution::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->startMotionSelf(KINGANIM_Caution, nullptr);
}

/**
 * @note Address: 0x8035C0F4
 * @note Size: 0x64
 */
void StateCaution::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_END_BLEND) {
			OBJ(enemy)->endBlendAnimation();

		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			transit(enemy, KINGCHAPPY_Walk, nullptr);
		}
	}
}

/**
 * @note Address: 0x8035C158
 * @note Size: 0x3C
 */
StateSwallow::StateSwallow(int stateID)
    : State(stateID)
{
	mName = "swallow";
}

/**
 * @note Address: 0x8035C194
 * @note Size: 0x2C
 */
void StateSwallow::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->startMotionSelf(KINGANIM_Swallow, nullptr);
}

/**
 * @note Address: 0x8035C1C0
 * @note Size: 0x94
 */
void StateSwallow::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_END_BLEND) {
			OBJ(enemy)->endBlendAnimation();
		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			EnemyFunc::swallowPikmin(enemy, 300.0f, nullptr);
			transit(enemy, KINGCHAPPY_Walk, nullptr);
		}
	}
}

} // namespace KingChappy
} // namespace Game
