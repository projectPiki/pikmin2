#include "Game/Entities/ElecHiba.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "efx/TEnemyBomb.h"
#include "PS.h"

namespace Game {
namespace ElecHiba {

/*
 * --INFO--
 * Address:	8026DFD8
 * Size:	00017C
 */
void FSM::init(EnemyBase* enemy)
{
	create(ELECHIBA_Count);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateSign);
	registerState(new StateAttack);
}

/*
 * --INFO--
 * Address:	8026E154
 * Size:	0002CC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* elecHiba = OBJ(enemy);

	elecHiba->enableEvent(0, EB_Untargetable);
	elecHiba->disableEvent(0, EB_LifegaugeVisible);
	elecHiba->enableEvent(0, EB_Invulnerable);
	elecHiba->disableEvent(0, EB_DamageAnimEnabled);

	elecHiba->mIsLivingThing = 0;
	elecHiba->generatorKill();
	elecHiba->startMotion(ELECHIBAANIM_Wait, nullptr);
	elecHiba->getJAIObject()->startSound(PSSE_EN_HIBA_STOP, 0);
	PSStartEnemyFatalHitSE(elecHiba, 0.0f);

	Vector3f position            = elecHiba->getPosition();
	f32 scale                    = elecHiba->mScaleModifier;
	EnemyTypeID::EEnemyTypeID id = elecHiba->getEnemyTypeID();

	efx::ArgEnemyType fxArg(position, id, scale);
	efx::TEnemyBomb bombEffect;
	bombEffect.create(&fxArg);

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		childHiba->enableEvent(0, EB_Untargetable);
		childHiba->disableEvent(0, EB_LifegaugeVisible);
		childHiba->enableEvent(0, EB_Invulnerable);
		childHiba->disableEvent(0, EB_DamageAnimEnabled);

		childHiba->mIsLivingThing = 0;
		childHiba->generatorKill();
		childHiba->startMotion(ELECHIBAANIM_Wait, nullptr);
		childHiba->getJAIObject()->startSound(PSSE_EN_HIBA_STOP, 0);
		PSStartEnemyFatalHitSE(childHiba, 0.0f);

		Vector3f childPosition            = childHiba->getPosition();
		f32 childScale                    = childHiba->mScaleModifier;
		EnemyTypeID::EEnemyTypeID childID = childHiba->getEnemyTypeID();

		efx::ArgEnemyType childFxArg(childPosition, childID, childScale);
		efx::TEnemyBomb childBombEffect;

		childBombEffect.create(&childFxArg);
	}
}

/*
 * --INFO--
 * Address:	8026E428
 * Size:	000004
 */
void StateDead::exec(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8026E42C
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8026E430
 * Size:	000070
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* elecHiba     = OBJ(enemy);
	WaitStateArg* arg = static_cast<WaitStateArg*>(stateArg);

	if (arg) {
		elecHiba->mWaitTimer = arg->mWaitTimer;
	} else {
		elecHiba->mWaitTimer = 0.0f;
	}

	elecHiba->startMotion(ELECHIBAANIM_Wait, nullptr);

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		childHiba->startMotion(ELECHIBAANIM_Wait, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8026E4A0
 * Size:	0000E4
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* elecHiba = OBJ(enemy);

	elecHiba->mWaitTimer += sys->mDeltaTime;

	if (elecHiba->mIsVersusModeHiba != 0) {
		if (elecHiba->isWaitFinish()) {
			transit(elecHiba, ELECHIBA_Sign, nullptr);
		}
	} else if (elecHiba->mHealth <= 0.0f) {
		transit(elecHiba, ELECHIBA_Dead, nullptr);
	} else if (elecHiba->mWaitTimer > CG_PROPERPARMS(elecHiba).mWaitTime.mValue) {
		transit(elecHiba, ELECHIBA_Sign, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8026E584
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8026E588
 * Size:	000088
 */
void StateSign::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* elecHiba = OBJ(enemy);

	elecHiba->mWaitTimer = 0.0f;
	elecHiba->disableEvent(0, EB_Cullable);
	elecHiba->startMotion(ELECHIBAANIM_Wait, nullptr);

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		childHiba->disableEvent(0, EB_Cullable);
		childHiba->startMotion(ELECHIBAANIM_Wait, nullptr);
		elecHiba->startChargeEffect(childHiba);
	}
}

/*
 * --INFO--
 * Address:	8026E610
 * Size:	0000F8
 */
void StateSign::exec(EnemyBase* enemy)
{
	Obj* elecHiba = OBJ(enemy);

	elecHiba->mWaitTimer += sys->mDeltaTime;
	elecHiba->getJAIObject()->startSound(PSSE_EN_ELEC_HIBA_CHARGE, 0);

	if (elecHiba->mHealth <= 0.0f) {
		Obj* childHiba = elecHiba->getChildObjPtr();
		if (childHiba) {
			elecHiba->finishChargeEffect();
		}

		transit(elecHiba, ELECHIBA_Dead, nullptr);
	} else if (elecHiba->mWaitTimer > CG_PROPERPARMS(elecHiba).mWarningTime.mValue) {
		transit(elecHiba, ELECHIBA_Attack, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8026E708
 * Size:	000044
 */
void StateSign::cleanup(EnemyBase* enemy)
{
	Obj* elecHiba = OBJ(enemy);

	elecHiba->enableEvent(0, EB_Cullable);

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		childHiba->enableEvent(0, EB_Cullable);
	}
}

/*
 * --INFO--
 * Address:	8026E74C
 * Size:	000084
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* elecHiba = OBJ(enemy);

	elecHiba->mWaitTimer = 0.0f;
	elecHiba->disableEvent(0, EB_Cullable);
	elecHiba->startMotion(ELECHIBAANIM_Wait, nullptr);
	elecHiba->setVersusHibaType();

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		childHiba->disableEvent(0, EB_Cullable);
		childHiba->startMotion(ELECHIBAANIM_Wait, nullptr);
		elecHiba->startDisChargeEffect();
	}
}

/*
 * --INFO--
 * Address:	8026E7D0
 * Size:	000164
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* elecHiba = OBJ(enemy);

	elecHiba->mWaitTimer += sys->mDeltaTime;

	if (elecHiba->mIsVersusModeHiba != 0) {
		if (elecHiba->isAttackFinish()) {
			transit(elecHiba, ELECHIBA_Wait, nullptr);
		}
	} else if (elecHiba->mHealth <= 0.0f) {
		transit(elecHiba, ELECHIBA_Dead, nullptr);
	} else if (elecHiba->mWaitTimer > CG_PROPERPARMS(elecHiba).mActiveTime.mValue) {
		transit(elecHiba, ELECHIBA_Wait, nullptr);
	}

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		Vector3f childPos = childHiba->getPosition();
		elecHiba->interactDenkiAttack(childPos);
		elecHiba->updateEfxLod();
	}

	elecHiba->getJAIObject()->startSound(PSSE_EN_ELEC_HIBA_SPARK, 0);
}

/*
 * --INFO--
 * Address:	8026E934
 * Size:	000060
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* elecHiba = OBJ(enemy);

	elecHiba->enableEvent(0, EB_Cullable);

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		childHiba->enableEvent(0, EB_Cullable);
		elecHiba->finishDisChargeEffect();
	}

	elecHiba->resetAttrHitCount();
}

} // namespace ElecHiba
} // namespace Game
