#include "Game/Entities/Hiba.h"
#include "efx/THibaFire.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Hiba {

/**
 * @note Address: 0x8026BE8C
 * @note Size: 0x138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/**
 * @note Address: 0x8026BFC4
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x8026BFC8
 * @note Size: 0xF8
 */
void Obj::onInit(CreatureInitArg* args)
{
	EnemyBase::onInit(args);
	disableEvent(0, EB_PlatformCollEnabled);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DeathEffectEnabled);
	hardConstraintOn();
	enableEvent(0, EB_BitterImmune);

	setEmotionNone();
	shadowMgr->killShadow(this);
	mTimer   = 0.0f;
	mIsAlive = true;
	setupLodParms();

	f32 r = randWeightFloat(C_PROPERPARMS.mWaitTime.mValue);
	WaitStateArg arg;
	arg.mWaitTimer = r;
	mFsm->start(this, HIBA_Wait, &arg);
}

/**
 * @note Address: 0x8026C0C0
 * @note Size: 0x34
 */
void Obj::doUpdate() { mFsm->exec(this); }

/**
 * @note Address: 0x8026C0F4
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x8026C0F8
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8026C118
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x8026C164
 * @note Size: 0x38
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mPosition;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 0.0f;
	shadowParam.mSize                     = 0.0f;
}

/**
 * @note Address: 0x8026C19C
 * @note Size: 0x7C
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if ((creature) && !creature->isNavi()) {
		addDamage(damage, 1.0f);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8026C218
 * @note Size: 0x30
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/**
 * @note Address: 0x8026C248
 * @note Size: 0x30
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/**
 * @note Address: 0x8026C278
 * @note Size: 0x34
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage)
{
	damageCallBack(creature, damage, nullptr);
	return true;
}

/**
 * @note Address: 0x8026C2AC
 * @note Size: 0x1D0
 */
void Obj::interactFireAttack()
{
	Parms* parms = C_PARMS;
	f32 max      = mPosition.y + parms->mGeneral.mMaxAttackRange.mValue;
	f32 min      = mPosition.y - parms->mGeneral.mMaxAttackAngle.mValue;
	f32 radSqr   = SQUARE(parms->mGeneral.mAttackRadius.mValue);

	Sys::Sphere sphere(mPosition);
	sphere.mRadius = parms->mGeneral.mAttackRadius.mValue;

	CellIteratorArg arg(sphere);
	arg.mOptimise = true;

	CellIterator iterator(arg);
	CI_LOOP(iterator)
	{
		Creature* creature = static_cast<Creature*>(*iterator);

		if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
			Vector3f position = creature->getPosition();
			if ((max > position.y) && (min < position.y)) {
				Vector2f delta;
				getDistance2D(position, delta);
				if (SQUARE(delta.x) + SQUARE(delta.y) < radSqr) {
					InteractFire fire(this, C_GENERALPARMS.mAttackDamage.mValue);
					creature->stimulate(fire);
				}
			}
		}
	}
}

/**
 * @note Address: 0x8026C47C
 * @note Size: 0x24
 */
void Obj::setupLodParms()
{
	mLodParm.mFar        = C_PROPERPARMS.mLodNear.mValue;
	mLodParm.mClose      = C_PROPERPARMS.mLodMiddle.mValue;
	mLodParm.mIsCylinder = false;
}

/**
 * @note Address: 0x8026C4A0
 * @note Size: 0x2C
 */
void Obj::updateEfxLod() { mEfxFire->setRateLOD(mLod.isFlag(AILOD_IsMid | AILOD_IsFar)); }

/**
 * @note Address: 0x8026C4CC
 * @note Size: 0x64
 */
void Obj::createEffect() { mEfxFire = new efx::THibaFire; }

/**
 * @note Address: 0x8026C530
 * @note Size: 0x58
 */
void Obj::startFireEffect()
{
	efx::Arg arg(mPosition);
	mEfxFire->create(&arg);
}

/**
 * @note Address: 0x8026C588
 * @note Size: 0x30
 */
void Obj::finishFireEffect() { mEfxFire->fade(); }

/**
 * @note Address: 0x8026C5B8
 * @note Size: 0x44
 */
void Obj::generatorKill()
{
	if (mGenerator) {
		mGenerator->informDeath(this);
		mGenerator = nullptr;
	}
}

} // namespace Hiba
} // namespace Game
