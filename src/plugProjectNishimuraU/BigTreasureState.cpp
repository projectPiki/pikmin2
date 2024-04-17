#include "Game/Entities/BigTreasure.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace BigTreasure {

static const int someBigTreasureStateArray[3] = { 0, 0, 0 };

static const char debugBigTreasureStateName[] = "246-BigTreasureState";

/**
 * @note Address: 0x802D72CC
 * @note Size: 0x42C
 */
void FSM::init(EnemyBase* enemy)
{
	create(BIGTREASURE_Count);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateLand);
	registerState(new StateWait);
	registerState(new StateItemWait);
	registerState(new StateFlick);
	registerState(new StatePreAttack);
	registerState(new StateAttack);
	registerState(new StatePutItem);
	registerState(new StateDropItem);
	registerState(new StateWalk);
	registerState(new StateItemWalk);
}

/**
 * @note Address: 0x802D76F8
 * @note Size: 0x80
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan = OBJ(enemy);
	titan->setAttackMaterialColor(false);
	titan->forceFinishIKMotion();
	titan->checkJointScaleOn();
	titan->deathProcedure();
	titan->mTargetVelocity = Vector3f(0.0f);
	titan->setEmotionCaution();
	titan->startBlendAnimation(27, true);
	titan->createDeadBombFootEffect();
}

/**
 * @note Address: 0x802D7778
 * @note Size: 0x230
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	f32 frame  = titan->getMotionFrame();
	if (frame > 280.0f) {
		titan->subShadowScale();
	}

	if (titan->mCurAnim->mIsPlaying) {
		if ((u32)titan->mCurAnim->mType == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_2) {
			titan->startDeadBubbleMouthEffect();

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_3) {
			titan->startDeadBubbleBodyEffect();

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_4) {
			titan->startDeadBubbleLegEffect(0);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_5) {
			titan->startDeadBubbleLegEffect(1);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_6) {
			titan->startDeadBubbleLegEffect(2);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_7) {
			titan->startDeadBubbleLegEffect(3);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_8) {
			titan->createDeadBombLegEffect(0);
			titan->finishDeadBubbleLegEffect(0);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_9) {
			titan->createDeadBombLegEffect(1);
			titan->finishDeadBubbleLegEffect(1);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_10) {
			titan->createDeadBombLegEffect(2);
			titan->finishDeadBubbleLegEffect(2);
			titan->finishDeadBubbleMouthEffect();
			Vector3f position = titan->getPosition();
			cameraMgr->startVibration(VIBTYPE_HardMidShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed12, position, RUMBLEID_Both);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_11) {
			titan->createDeadBombLegEffect(3);
			titan->finishDeadBubbleLegEffect(3);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_100) {
			titan->throwupItem();
			titan->releaseItemLoozy();
			titan->createDeadBombBodyEffect();
			titan->finishDeadBubbleBodyEffect();

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_END) {
			titan->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802D79A8
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802D79AC
 * @note Size: 0x80
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan         = OBJ(enemy);
	titan->mNextState  = BIGTREASURE_NULL;
	titan->mStateTimer = 0.0f;
	titan->setAttackMaterialColor(false);
	titan->enableEvent(0, EB_BitterImmune);
	titan->mTargetVelocity = Vector3f(0.0f);
	titan->mTargetCreature = nullptr;
	titan->startBlendAnimation(0, false);
	titan->stopMotion();
}

/**
 * @note Address: 0x802D7A2C
 * @note Size: 0xFC
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	if (titan->mStateTimer < 0.01f) {
		bool isTarget;
		f32 detectRadius = CG_GENERALPARMS(titan).mPrivateRadius.mValue;
		if (EnemyFunc::isThereOlimar(titan, detectRadius, nullptr)) {
			isTarget = true;
		} else if (EnemyFunc::isTherePikmin(titan, detectRadius, nullptr)) {
			isTarget = true;
		} else {
			isTarget = false;
		}

		if (isTarget) {
			if (titan->startBigTreasureBootUpDemo()) {
				titan->mStateTimer = 0.01f;
			} else {
				titan->mStateTimer = 4.0f;
			}
		}
	} else {
		titan->mStateTimer += sys->mDeltaTime;
		if (titan->mStateTimer > 4.0f) {
			transit(titan, BIGTREASURE_Land, nullptr);
		}
	}
}

/**
 * @note Address: 0x802D7B28
 * @note Size: 0x4
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802D7B2C
 * @note Size: 0xAC
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan        = OBJ(enemy);
	titan->mNextState = BIGTREASURE_NULL;
	titan->setAttackMaterialColor(false);
	titan->mTargetVelocity = Vector3f(0.0f);
	titan->mTargetCreature = nullptr;
	titan->setEmotionExcitement();
	shadowMgr->addJointShadow(titan);
	titan->startMotion();
	titan->createAppearBodyEffect();
	titan->createAppearLegEffect(1);
	Parms* parms = CG_PARMS(titan);
	EnemyFunc::flickStickPikmin(titan, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
	                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);
	titan->setBossAppearBGM();
}

/**
 * @note Address: 0x802D7BD8
 * @note Size: 0x324
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	if (titan->mCurAnim->mIsPlaying) {
		if ((u32)titan->mCurAnim->mType == KEYEVENT_2) {
			titan->createOnGroundEffect(1, titan->mWaterBox);
			Parms* parms = CG_PARMS(titan);
			EnemyFunc::flickStickPikmin(titan, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_3) {
			titan->createAppearLegEffect(2);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_4) {
			titan->createOnGroundEffect(2, titan->mWaterBox);
			Parms* parms = CG_PARMS(titan);
			EnemyFunc::flickStickPikmin(titan, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_5) {
			titan->createAppearLegEffect(0);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_6) {
			titan->createOnGroundEffect(0, titan->mWaterBox);
			Parms* parms = CG_PARMS(titan);
			EnemyFunc::flickStickPikmin(titan, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_7) {
			titan->createAppearLegEffect(3);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_8) {
			titan->createOnGroundEffect(3, titan->mWaterBox);
			Parms* parms = CG_PARMS(titan);
			EnemyFunc::flickStickPikmin(titan, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_9) {
			Vector3f position = titan->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightSlowLong, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_BigTreasureStart, position, RUMBLEID_Both);
			Parms* parms = CG_PARMS(titan);
			EnemyFunc::flickStickPikmin(titan, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_10) {
			if (!titan->isCapturedTreasure()) {
				titan->startMotion(BIGTREASUREANIM_Appear2, nullptr);
			}

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_END) {
			if (titan->mHealth <= 0.0f) {
				transit(titan, BIGTREASURE_Dead, nullptr);
			} else if (EnemyFunc::isStartFlick(titan, false)) {
				if (titan->isCapturedTreasure()) {
					transit(titan, BIGTREASURE_PreAttack, nullptr);
				} else {
					transit(titan, BIGTREASURE_Flick, nullptr);
				}
			} else if (titan->isCapturedTreasure()) {
				transit(titan, BIGTREASURE_ItemWalk, nullptr);
			} else {
				transit(titan, BIGTREASURE_Walk, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802D7EFC
 * @note Size: 0x30
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	titan->disableEvent(0, EB_BitterImmune);
	titan->startProgramedIK();
}

/**
 * @note Address: 0x802D7F2C
 * @note Size: 0xA0
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan         = OBJ(enemy);
	titan->mNextState  = BIGTREASURE_NULL;
	titan->mStateTimer = randWeightFloat(5.0f);
	titan->setAttackMaterialColor(false);

	titan->mTargetCreature = nullptr;
	titan->mTargetVelocity = Vector3f(0.0f);

	titan->startBlendAnimation(25, true);
	titan->startBlendMotion();
}

/**
 * @note Address: 0x802D7FCC
 * @note Size: 0x140
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	titan->mStateTimer += sys->mDeltaTime;

	if (titan->mHealth <= 0.0f) {
		titan->mNextState = BIGTREASURE_Dead;
		titan->finishMotion();
	} else if (EnemyFunc::isStartFlick(titan, false)) {
		titan->mNextState = BIGTREASURE_Flick;
		titan->finishMotion();
	} else if (titan->mStateTimer > 5.0f) {
		titan->mNextState = BIGTREASURE_Walk;
		titan->finishMotion();
	}

	if (titan->mCurAnim->mIsPlaying) {
		if ((u32)titan->mCurAnim->mType == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();
		} else if ((u32)titan->mCurAnim->mType == 0) {
			titan->getJAIObject()->startSound(PSSE_EN_BIGTAKARA_WAIT2, nullptr);
		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_END) {
			transit(titan, titan->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802D810C
 * @note Size: 0x24
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	titan->finishBlendMotion();
}

/**
 * @note Address: 0x802D8130
 * @note Size: 0xA0
 */
void StateItemWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan         = OBJ(enemy);
	titan->mNextState  = BIGTREASURE_NULL;
	titan->mStateTimer = randWeightFloat(5.0f);
	titan->setAttackMaterialColor(false);

	titan->mTargetCreature = nullptr;
	titan->mTargetVelocity = Vector3f(0.0f);

	titan->startBlendAnimation(2, true);
	titan->startBlendMotion();
}

/**
 * @note Address: 0x802D81D0
 * @note Size: 0x124
 */
void StateItemWait::exec(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	if (!titan->isCapturedTreasure()) {
		transit(titan, BIGTREASURE_DropItem, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(titan, false) || titan->isAttackLimitTime()) {
		titan->mNextState = BIGTREASURE_PreAttack;
		titan->finishMotion();

	} else if (titan->mStateTimer > 5.0f) {
		titan->mNextState = BIGTREASURE_ItemWalk;
		titan->finishMotion();
	}

	titan->mStateTimer += sys->mDeltaTime;

	if (titan->mCurAnim->mIsPlaying) {
		if ((u32)titan->mCurAnim->mType == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();
		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_END) {
			transit(titan, titan->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802D82F4
 * @note Size: 0x24
 */
void StateItemWait::cleanup(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	titan->finishBlendMotion();
}

/**
 * @note Address: 0x802D8318
 * @note Size: 0x74
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan         = OBJ(enemy);
	titan->mNextState  = BIGTREASURE_NULL;
	titan->mStateTimer = 0.0f;
	titan->setAttackMaterialColor(false);

	titan->mTargetCreature = nullptr;
	titan->mTargetVelocity = Vector3f(0.0f);

	titan->startBlendAnimation(26, true);
	titan->startBlendMotion();
}

/**
 * @note Address: 0x802D838C
 * @note Size: 0xDC
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);

	if (titan->mCurAnim->mIsPlaying) {
		if ((u32)titan->mCurAnim->mType == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms = CG_PARMS(titan);
			EnemyFunc::flickStickPikmin(titan, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);
			titan->mFlickTimer = 0.0f;
			titan->startBossFlickBGM();

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_END) {
			if (titan->mHealth <= 0.0f) {
				transit(titan, BIGTREASURE_Dead, nullptr);

			} else {
				transit(titan, BIGTREASURE_Walk, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802D8468
 * @note Size: 0x24
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	titan->finishBlendMotion();
}

/**
 * @note Address: 0x802D848C
 * @note Size: 0x98
 */
void StatePreAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan         = OBJ(enemy);
	titan->mNextState  = BIGTREASURE_NULL;
	titan->mStateTimer = 0.0f;
	titan->resetAttackLimitTimer();
	titan->setAttackMaterialColor(false);

	titan->mTargetCreature = nullptr;
	titan->mTargetVelocity = Vector3f(0.0f);

	titan->setTreasureAttack();
	int animIdx = titan->getPreAttackAnimIndex();
	titan->startBlendAnimation(animIdx, true);
	titan->startBlendMotion();
	titan->startBossChargeBGM();
}

/**
 * @note Address: 0x802D8524
 * @note Size: 0x19C
 */
void StatePreAttack::exec(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	if (!titan->isCapturedTreasure()) {
		transit(titan, BIGTREASURE_DropItem, nullptr);
		return;
	}

	if (!titan->isCapturedTreasure(titan->mAttackIndex)) {
		transit(titan, BIGTREASURE_PreAttack, nullptr);
		return;
	}

	f32 timer = titan->mStateTimer;
	if (timer > titan->getPreAttackTimeMax()) {
		titan->finishMotion();
	}

	titan->mStateTimer += sys->mDeltaTime;

	if (titan->mCurAnim->mIsPlaying) {
		if ((u32)titan->mCurAnim->mType == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_2) {
			titan->setAttackMaterialColor(true);
			Parms* parms = CG_PARMS(titan);
			EnemyFunc::flickStickPikmin(titan, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);
			titan->mFlickTimer = 0.0f;

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_3) {
			int fireIdx = titan->getFireAttackAnimIndex();
			if (fireIdx != 3) {
				titan->startMotion(fireIdx, nullptr);
			}

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_END) {
			transit(titan, BIGTREASURE_Attack, nullptr);
		}
	}
}

/**
 * @note Address: 0x802D86C0
 * @note Size: 0x24
 */
void StatePreAttack::cleanup(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	titan->finishBlendMotion();
}

/**
 * @note Address: 0x802D86E4
 * @note Size: 0x78
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan         = OBJ(enemy);
	titan->mNextState  = BIGTREASURE_NULL;
	titan->mStateTimer = 0.0f;

	titan->mTargetCreature = nullptr;
	titan->mTargetVelocity = Vector3f(0.0f);

	int animIdx = titan->getAttackAnimIndex();
	titan->startBlendAnimation(animIdx, true);
	titan->startBlendMotion();
	titan->startBossAttackBGM();
}

/**
 * @note Address: 0x802D875C
 * @note Size: 0x148
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	if (!titan->isCapturedTreasure()) {
		transit(titan, BIGTREASURE_DropItem, nullptr);
		return;
	}

	if (!titan->isCapturedTreasure(titan->mAttackIndex)) {
		transit(titan, BIGTREASURE_PreAttack, nullptr);
		return;
	}

	f32 timer = titan->mStateTimer;
	if (timer > titan->getAttackTimeMax()) {
		titan->finishMotion();
	}

	titan->mStateTimer += sys->mDeltaTime;

	if (titan->mCurAnim->mIsPlaying) {
		if ((u32)titan->mCurAnim->mType == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();
		}

		if ((u32)titan->mCurAnim->mType == KEYEVENT_2) {
			titan->startAttack();

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_END) {
			transit(titan, BIGTREASURE_PutItem, nullptr);
		}
	}
}

/**
 * @note Address: 0x802D88A4
 * @note Size: 0x40
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	titan->finishBlendMotion();
	titan->finishAttack();
	titan->finishBossAttackBGM();
}

/**
 * @note Address: 0x802D88E4
 * @note Size: 0x80
 */
void StatePutItem::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan         = OBJ(enemy);
	titan->mNextState  = BIGTREASURE_NULL;
	titan->mStateTimer = 0.0f;
	titan->setAttackMaterialColor(false);

	titan->mTargetCreature = nullptr;
	titan->mTargetVelocity = Vector3f(0.0f);

	int animIdx = titan->getPutItemAnimIndex();
	titan->startBlendAnimation(animIdx, true);
	titan->startBlendMotion();
}

/**
 * @note Address: 0x802D8964
 * @note Size: 0x128
 */
void StatePutItem::exec(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	if (!titan->isCapturedTreasure()) {
		transit(titan, BIGTREASURE_DropItem, nullptr);
		return;
	}

	if (!titan->isCapturedTreasure(titan->mAttackIndex)) {
		transit(titan, BIGTREASURE_PreAttack, nullptr);
		return;
	}

	if (titan->mCurAnim->mIsPlaying) {
		if ((u32)titan->mCurAnim->mType == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();
		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_END) {
			if (EnemyFunc::isStartFlick(titan, false)) {
				transit(titan, BIGTREASURE_PreAttack, nullptr);
			} else {
				transit(titan, BIGTREASURE_ItemWalk, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802D8A8C
 * @note Size: 0x24
 */
void StatePutItem::cleanup(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	titan->finishBlendMotion();
}

/**
 * @note Address: 0x802D8AB0
 * @note Size: 0x74
 */
void StateDropItem::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan         = OBJ(enemy);
	titan->mNextState  = BIGTREASURE_NULL;
	titan->mStateTimer = 0.0f;
	titan->setAttackMaterialColor(false);

	titan->mTargetCreature = nullptr;
	titan->mTargetVelocity = Vector3f(0.0f);
	titan->startBlendAnimation(24, true);
	titan->startBlendMotion();
}

/**
 * @note Address: 0x802D8B24
 * @note Size: 0xEC
 */
void StateDropItem::exec(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	if (titan->mCurAnim->mIsPlaying) {
		if ((u32)titan->mCurAnim->mType == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_END) {
			if (titan->mHealth <= 0.0f) {
				transit(titan, BIGTREASURE_Dead, nullptr);
			} else if (EnemyFunc::isStartFlick(titan, false)) {
				transit(titan, BIGTREASURE_Flick, nullptr);
			} else {
				transit(titan, BIGTREASURE_Walk, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802D8C10
 * @note Size: 0x24
 */
void StateDropItem::cleanup(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	titan->finishBlendMotion();
}

/**
 * @note Address: 0x802D8C34
 * @note Size: 0xA8
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan         = OBJ(enemy);
	titan->mNextState  = BIGTREASURE_NULL;
	titan->mStateTimer = randWeightFloat(10.0f);
	titan->setAttackMaterialColor(false);

	titan->mTargetCreature = nullptr;
	titan->mTargetVelocity = Vector3f(0.0f);

	titan->startBlendAnimation(29, true);
	titan->startIKMotion();
	titan->getTargetPosition();
}

/**
 * @note Address: 0x802D8CDC
 * @note Size: 0x144
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	titan->getTargetPosition();

	if (titan->mHealth <= 0.0f) {
		transit(titan, BIGTREASURE_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(titan, false)) {
		titan->mNextState = BIGTREASURE_Flick;
		titan->finishIKMotion();

	} else if (titan->mStateTimer > 10.0f) {
		titan->mNextState = BIGTREASURE_Wait;
		titan->finishIKMotion();
	}

	titan->mStateTimer += sys->mDeltaTime;

	if (titan->mCurAnim->mIsPlaying) {
		if ((u32)titan->mCurAnim->mType == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_END) {
			if (titan->isFinishIKMotion()) {
				transit(titan, titan->mNextState, nullptr);
			} else {
				titan->startBlendAnimation(29, false);
			}
		}
	}
}

/**
 * @note Address: 0x802D8E20
 * @note Size: 0x4
 */
void StateWalk::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802D8E24
 * @note Size: 0xA8
 */
void StateItemWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan         = OBJ(enemy);
	titan->mNextState  = BIGTREASURE_NULL;
	titan->mStateTimer = randWeightFloat(10.0f);
	titan->setAttackMaterialColor(false);

	titan->mTargetCreature = nullptr;
	titan->mTargetVelocity = Vector3f(0.0f);

	titan->startBlendAnimation(28, true);
	titan->startIKMotion();
	titan->getTargetPosition();
}

/**
 * @note Address: 0x802D8ECC
 * @note Size: 0x1EC
 */
void StateItemWalk::exec(EnemyBase* enemy)
{
	Obj* titan = OBJ(enemy);
	titan->getTargetPosition();

	if (titan->mHealth <= 0.0f) {
		transit(titan, BIGTREASURE_Dead, nullptr);
		return;
	}

	if (titan->getCurrAnimationIndex() == 28 && !titan->isCapturedTreasure()) {
		titan->setAttackMaterialColor(false);
		titan->startBlendAnimation(24, true);
	} else {
		if (EnemyFunc::isStartFlick(titan, false) || titan->isAttackLimitTime()) {
			if (titan->isCapturedTreasure()) {
				titan->mNextState = BIGTREASURE_PreAttack;
			} else {
				titan->mNextState = BIGTREASURE_Flick;
			}

			titan->finishIKMotion();

		} else if (titan->mStateTimer > 10.0f) {
			if (titan->isCapturedTreasure()) {
				titan->mNextState = BIGTREASURE_ItemWait;
			} else {
				titan->mNextState = BIGTREASURE_Wait;
			}

			titan->finishIKMotion();
		}
	}

	titan->mStateTimer += sys->mDeltaTime;

	if (titan->isFinishIKMotion()) {
		transit(titan, titan->mNextState, nullptr);
	}

	if (titan->mCurAnim->mIsPlaying) {
		if ((u32)titan->mCurAnim->mType == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();

		} else if ((u32)titan->mCurAnim->mType == KEYEVENT_END) {
			if (titan->isCapturedTreasure()) {
				titan->startBlendAnimation(28, false);
			} else {
				titan->startBlendAnimation(25, false);
			}
		}
	}
}

/**
 * @note Address: 0x802D90B8
 * @note Size: 0x4
 */
void StateItemWalk::cleanup(EnemyBase* enemy) { }

} // namespace BigTreasure
} // namespace Game
