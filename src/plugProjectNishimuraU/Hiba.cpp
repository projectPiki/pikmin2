#include "Game/Entities/Hiba.h"
#include "efx/THibaFire.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Hiba {

/*
 * --INFO--
 * Address:	8026BE8C
 * Size:	000138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8026BFC4
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8026BFC8
 * Size:	0000F8
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

/*
 * --INFO--
 * Address:	8026C0C0
 * Size:	000034
 */
void Obj::doUpdate() { mFsm->exec(this); }

/*
 * --INFO--
 * Address:	8026C0F4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8026C0F8
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8026C118
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	8026C164
 * Size:	000038
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mPosition;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 0.0f;
	shadowParam.mSize                     = 0.0f;
}

/*
 * --INFO--
 * Address:	8026C19C
 * Size:	00007C
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if ((creature) && !creature->isNavi()) {
		addDamage(damage, 1.0f);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8026C218
 * Size:	000030
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/*
 * --INFO--
 * Address:	8026C248
 * Size:	000030
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/*
 * --INFO--
 * Address:	8026C278
 * Size:	000034
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage)
{
	damageCallBack(creature, damage, nullptr);
	return true;
}

/*
 * --INFO--
 * Address:	8026C2AC
 * Size:	0001D0
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
	arg.mIsSphereCollisionDisabled = true;

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
					InteractFire fire(this, C_PARMS->mGeneral.mAttackDamage.mValue);
					creature->stimulate(fire);
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8026C47C
 * Size:	000024
 */
void Obj::setupLodParms()
{
	mLodParm.mFar        = C_PARMS->mProperParms.mLodNear.mValue;
	mLodParm.mClose      = C_PARMS->mProperParms.mLodMiddle.mValue;
	mLodParm.mIsCylinder = false;
}

/*
 * --INFO--
 * Address:	8026C4A0
 * Size:	00002C
 */
void Obj::updateEfxLod() { mEfxFire->setRateLOD(mLod.isFlag(AILOD_IsMid | AILOD_IsFar)); }

/*
 * --INFO--
 * Address:	8026C4CC
 * Size:	000064
 */
void Obj::createEffect() { mEfxFire = new efx::THibaFire; }

/*
 * --INFO--
 * Address:	8026C530
 * Size:	000058
 */
void Obj::startFireEffect()
{
	efx::Arg arg(mPosition);
	mEfxFire->create(&arg);
}

/*
 * --INFO--
 * Address:	8026C588
 * Size:	000030
 */
void Obj::finishFireEffect() { mEfxFire->fade(); }

/*
 * --INFO--
 * Address:	8026C5B8
 * Size:	000044
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
