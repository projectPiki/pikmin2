#include "Game/Entities/Tyre.h"
#include "Game/EnemyAnimKeyEvent.h"

namespace Game {
namespace Tyre {
/**
 * @note Address: 0x803AB864
 * @note Size: 0xC0
 */
void Tyre::FSM::init(EnemyBase* enemy)
{
	create(4);
	registerState(new StateMove(TYRE_Move));
	registerState(new StateLand(TYRE_Land));
	registerState(new StateFreeze(TYRE_Freeze));
	registerState(new StateDead(TYRE_Dead));
}

/**
 * @note Address: 0x803AB924
 * @note Size: 0x3C
 */
StateMove::StateMove(int stateID)
    : State(stateID)
{
	mName = "move";
}

/**
 * @note Address: 0x803AB960
 * @note Size: 0x48
 */
void Tyre::StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(TYREANIM_Move, nullptr);

	Obj* tyre = OBJ(enemy);
	tyre->collisionStOff();
	tyre->createSmokeEffect();
}

/**
 * @note Address: 0x803AB9A8
 * @note Size: 0xBC
 */
void Tyre::StateMove::exec(EnemyBase* enemy)
{
	Obj* tyre    = OBJ(enemy);
	Parms* parms = CG_PARMS(tyre);

	f32 rotationSpeed = tyre->mSingleRotationRatio;
	rotationSpeed *= parms->mProperParms.mTyreRotationSpeed.mValue;

	if (parms->mDoUseGlobalJointMgr != 0) {
		f32 rotation          = 0.2f * FABS(rotationSpeed - tyre->mRotationOffset);
		tyre->mRotationOffset = rotation;
		rotation += tyre->mCurrentRotation;
		if (rotation > TAU) {
			rotation -= TAU;
		}
		tyre->mCurrentRotation = rotation;
	} else {
		rotationSpeed *= EnemyAnimatorBase::defaultAnimSpeed;
		tyre->mAnimator->mSpeed = rotationSpeed;
	}

	if ((tyre->mHealth <= 0.0f) && tyre->isEvent(0, EB_Invulnerable)) {
		transit(tyre, TYRE_Dead, nullptr);
	}
}

/**
 * @note Address: 0x803ABA64
 * @note Size: 0x24
 */
void Tyre::StateMove::cleanup(EnemyBase* enemy) { OBJ(enemy)->fadeSmokeEffect(); }

/**
 * @note Address: 0x803ABA88
 * @note Size: 0x3C
 */
StateLand::StateLand(int stateID)
    : State(stateID)
{
	mName = "land";
}

/**
 * @note Address: 0x803ABAC4
 * @note Size: 0x48
 */
void Tyre::StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(TYREANIM_Move, nullptr);
	shadowMgr->setForceVisible(enemy, true);
}

/**
 * @note Address: 0x803ABB0C
 * @note Size: 0xB4
 */
void Tyre::StateLand::exec(EnemyBase* enemy)
{
	Obj* tyre = OBJ(enemy);
	if (tyre->mFloorTriangle) {
		tyre->flick();
		Vector3f position = tyre->getPosition();
		tyre->landEffect(position);
		shadowMgr->setForceVisible(tyre, false);
		transit(tyre, TYRE_Freeze, nullptr);
	}
}

/**
 * @note Address: 0x803ABBC0
 * @note Size: 0x3C
 */
StateFreeze::StateFreeze(int stateID)
    : State(stateID)
{
	mName = "freeze";
}

/**
 * @note Address: 0x803ABBFC
 * @note Size: 0x74
 */
void Tyre::StateFreeze::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tyre = OBJ(enemy);
	tyre->stopMotion();
	mFrozenTimer           = 0;
	tyre->mCurrentVelocity = Vector3f(0.0f);
	tyre->mTargetVelocity  = Vector3f(0.0f);
	tyre->enableEvent(0, EB_Constrained);
	tyre->collisionStOn();
}

/**
 * @note Address: 0x803ABC70
 * @note Size: 0xB4
 */
void Tyre::StateFreeze::exec(EnemyBase* enemy)
{
	Obj* tyre              = OBJ(enemy);
	tyre->mCurrentVelocity = Vector3f(0.0f);
	tyre->mTargetVelocity  = Vector3f(0.0f);
	mFrozenTimer++;
	if ((tyre->mHealth <= 0.0f) && tyre->isEvent(0, EB_Invulnerable)) {
		transit(tyre, TYRE_Dead, nullptr);
	}

	EnemyBase* wraith = tyre->mOwner;
	if (wraith) {
		if (wraith->isEvent(1, EB2_Earthquake)) {
			tyre->constraintOff();
		} else {
			tyre->enableEvent(0, EB_Constrained);
		}
	}
}

/**
 * @note Address: 0x803ABD24
 * @note Size: 0x3C
 */
Tyre::StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/**
 * @note Address: 0x803ABD60
 * @note Size: 0x48
 */
void Tyre::StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(TYREANIM_GetOff, nullptr);
	Obj* tyre = OBJ(enemy);
	tyre->deathProcedure();
	tyre->deadEffect();
}

/**
 * @note Address: 0x803ABDA8
 * @note Size: 0x44
 */
void Tyre::StateDead::exec(EnemyBase* enemy)
{
	if ((enemy->mCurAnim->mIsPlaying != 0) && ((u32)enemy->mCurAnim->mType == KEYEVENT_END)) {
		enemy->kill(nullptr);
	}
}
} // namespace Tyre
} // namespace Game
