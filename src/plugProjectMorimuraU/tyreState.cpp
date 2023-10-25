#include "Game/Entities/Tyre.h"
#include "Game/EnemyAnimKeyEvent.h"

namespace Game {
namespace Tyre {
/*
 * --INFO--
 * Address:	803AB864
 * Size:	0000C0
 */
void Tyre::FSM::init(EnemyBase* enemy)
{
	create(4);
	registerState(new StateMove(TYRE_Move));
	registerState(new StateLand(TYRE_Land));
	registerState(new StateFreeze(TYRE_Freeze));
	registerState(new StateDead(TYRE_Dead));
}

/*
 * --INFO--
 * Address:	803AB924
 * Size:	00003C
 */
StateMove::StateMove(int stateID)
    : State(stateID)
{
	mName = "move";
}

/*
 * --INFO--
 * Address:	803AB960
 * Size:	000048
 */
void Tyre::StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(TYREANIM_Move, nullptr);

	Obj* tyre = OBJ(enemy);
	tyre->collisionStOff();
	tyre->createSmokeEffect();
}

/*
 * --INFO--
 * Address:	803AB9A8
 * Size:	0000BC
 */
void Tyre::StateMove::exec(EnemyBase* enemy)
{
	Obj* tyre    = OBJ(enemy);
	f32 p1       = tyre->_30C;
	Parms* parms = static_cast<Parms*>(tyre->mParms);
	p1 *= parms->mProperParms.mTyreRotationSpeed.mValue;

	if (parms->mDoUseGlobalJointMgr != 0) {
		f32 p2     = 0.2f * FABS(p1 - tyre->_2C4);
		tyre->_2C4 = p2;
		p2 += tyre->_2C0;
		if (p2 > TAU) {
			p2 -= TAU;
		}
		tyre->_2C0 = p2;
	} else {
		p1 *= EnemyAnimatorBase::defaultAnimSpeed;
		tyre->mAnimator->mSpeed = p1;
	}

	if ((tyre->mHealth <= 0.0f) && tyre->isEvent(0, EB_Invulnerable)) {
		transit(tyre, TYRE_Dead, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803ABA64
 * Size:	000024
 */
void Tyre::StateMove::cleanup(EnemyBase* enemy) { OBJ(enemy)->fadeSmokeEffect(); }

/*
 * --INFO--
 * Address:	803ABA88
 * Size:	00003C
 */
StateLand::StateLand(int stateID)
    : State(stateID)
{
	mName = "land";
}

/*
 * --INFO--
 * Address:	803ABAC4
 * Size:	000048
 */
void Tyre::StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(TYREANIM_Move, nullptr);
	shadowMgr->setForceVisible(enemy, true);
}

/*
 * --INFO--
 * Address:	803ABB0C
 * Size:	0000B4
 */
void Tyre::StateLand::exec(EnemyBase* enemy)
{
	Obj* tyre = OBJ(enemy);
	if (tyre->mBounceTriangle) {
		tyre->flick();
		Vector3f position = tyre->getPosition();
		tyre->landEffect(position);
		shadowMgr->setForceVisible(tyre, false);
		transit(tyre, TYRE_Freeze, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803ABBC0
 * Size:	00003C
 */
StateFreeze::StateFreeze(int stateID)
    : State(stateID)
{
	mName = "freeze";
}

/*
 * --INFO--
 * Address:	803ABBFC
 * Size:	000074
 */
void Tyre::StateFreeze::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tyre = OBJ(enemy);
	tyre->stopMotion();
	_10                    = 0;
	tyre->mCurrentVelocity = Vector3f(0.0f);
	tyre->mTargetVelocity  = Vector3f(0.0f);
	tyre->enableEvent(0, EB_Constrained);
	tyre->collisionStOn();
}

/*
 * --INFO--
 * Address:	803ABC70
 * Size:	0000B4
 */
void Tyre::StateFreeze::exec(EnemyBase* enemy)
{
	Obj* tyre              = OBJ(enemy);
	tyre->mCurrentVelocity = Vector3f(0.0f);
	tyre->mTargetVelocity  = Vector3f(0.0f);
	_10++;
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

/*
 * --INFO--
 * Address:	803ABD24
 * Size:	00003C
 */
Tyre::StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/*
 * --INFO--
 * Address:	803ABD60
 * Size:	000048
 */
void Tyre::StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(TYREANIM_GetOff, nullptr);
	Obj* tyre = OBJ(enemy);
	tyre->deathProcedure();
	tyre->deadEffect();
}

/*
 * --INFO--
 * Address:	803ABDA8
 * Size:	000044
 */
void Tyre::StateDead::exec(EnemyBase* enemy)
{
	if ((enemy->mCurAnim->mIsPlaying != 0) && ((u32)enemy->mCurAnim->mType == KEYEVENT_END)) {
		enemy->kill(nullptr);
	}
}
} // namespace Tyre
} // namespace Game
