#include "Game/Entities/Hana.h"
#include "Game/EnemyFunc.h"
#include "efx/THanaMiss.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/ConditionNotStick.h"
#include "trig.h"
#include "nans.h"

namespace Game {
namespace Hana {

/*
 * --INFO--
 * Address:	802F3138
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	802F31E0
 * Size:	000064
 */
void Obj::onInit(CreatureInitArg* arg)
{
	ChappyBase::Obj::onInit(arg);
	mShadowJoint = mModel->getJoint("kosi");
	setUnderGround();
	setupEffect();
}

/*
 * --INFO--
 * Address:	802F3248
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802F324C
 * Size:	0000E8
 */
void Obj::getShadowParam(ShadowParam& param)
{
	if (getStateID() == ChappyBase::CHAPPY_Sleep) {
		param.mPosition                 = mPosition;
		param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
		param.mBoundingSphere.mRadius   = 0.1f;
		param.mSize                     = 0.1f;
	} else {
		Matrixf* mtx    = mShadowJoint->getWorldMatrix();
		param.mPosition = Vector3f(mtx->mMatrix.structView.tx, mtx->mMatrix.structView.ty, mtx->mMatrix.structView.tz);

		param.mPosition.y               = mPosition.y + 10.0f;
		param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
		if (isEvent(1, EB2_Earthquake)) {
			param.mBoundingSphere.mRadius = 75.0f;
		} else {
			param.mBoundingSphere.mRadius = 50.0f;
		}
		param.mSize = 25.0f;
	}
}

/*
 * --INFO--
 * Address:	802F3334
 * Size:	0000B4
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(3);
	mMouthSlots.setup(0, mModel, "kamu1");
	mMouthSlots.setup(1, mModel, "kamu2");
	mMouthSlots.setup(2, mModel, "kamu3");
	f32 size = 30.0f;
	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.getSlot(i)->mRadius = size;
	}
}

/*
 * --INFO--
 * Address:	802F33E8
 * Size:	000080
 */
bool Obj::isWakeup()
{
	ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(mParms);
	f32 rad                  = parms->mGeneral.mPrivateRadius.mValue;
	bool ret;
	if (EnemyFunc::isThereOlimar(this, rad, nullptr)) {
		return true;
	}
	if (!EnemyFunc::isTherePikmin(this, rad, nullptr)) {
		ret = false;
	} else {
		return true;
	}

	return ret;
}

/*
 * --INFO--
 * Address:	802F3468
 * Size:	000084
 */
void Obj::flickStatePikmin()
{
	ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(mParms);
	EnemyFunc::flickStickPikmin(this, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
	                            parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

	parms = static_cast<ChappyBase::Parms*>(mParms);
	EnemyFunc::flickNearbyPikmin(this, parms->mGeneral.mShakeRange.mValue, parms->mGeneral.mShakeKnockback.mValue,
	                             parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

	parms = static_cast<ChappyBase::Parms*>(mParms);
	EnemyFunc::flickNearbyNavi(this, parms->mGeneral.mShakeRange.mValue, parms->mGeneral.mShakeKnockback.mValue,
	                           parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
}

/*
 * --INFO--
 * Address:	802F34EC
 * Size:	0000F0
 */
void Obj::flickAttackBomb()
{
	ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(mParms);
	EnemyFunc::flickStickPikmin(this, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
	                            parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
	efx::THanaMiss efx(mModel->getJoint("kuti2")->getWorldMatrix());
	efx.create(nullptr);

	Vector3f pos = mPosition;
	cameraMgr->startVibration(28, pos, 2);
	rumbleMgr->startRumble(11, pos, 2);
}

/*
 * --INFO--
 * Address:	802F35DC
 * Size:	00003C
 */
int Obj::eatAttackPikmin()
{
	ConditionNotStickSlot cond;
	return EnemyFunc::eatPikmin(this, &cond);
}

/*
 * --INFO--
 * Address:	802F3618
 * Size:	000070
 */
void Obj::resetUnderGround()
{
	mBuried = false;
	disableEvent(0, EB_BitterImmune);
	disableEvent(0, EB_NoInterrupt);
	hardConstraintOff();
	disableEvent(0, EB_Invulnerable);
	setAtari(true);
}

/*
 * --INFO--
 * Address:	802F3688
 * Size:	000084
 */
void Obj::setUnderGround()
{
	ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(mParms);
	EnemyFunc::flickStickPikmin(this, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
	                            parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

	mBuried = true;
	enableEvent(0, EB_BitterImmune);
	hardConstraintOn();
	enableEvent(0, EB_Invulnerable);
	setAtari(false);
}

/*
 * --INFO--
 * Address:	802F370C
 * Size:	0001C0
 */
void Obj::createSmokeEffect()
{
	Vector3f pos = mPosition;
	int id       = getCurrAnimIndex();
	if (id == ChappyBase::CHAPPYANIM_WaitAct2) {
		pos -= Vector3f(sinf(mFaceDir) * 60.0f, 0.0f, cosf(mFaceDir) * 60.0f);

		cameraMgr->startVibration(3, pos, 2);
		rumbleMgr->startRumble(11, pos, 2);

	} else if (id == ChappyBase::CHAPPYANIM_Sleep) {
		setAtari(true);

		ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(mParms);
		EnemyFunc::flickNearbyPikmin(this, parms->mGeneral.mPrivateRadius.mValue, parms->mGeneral.mShakeKnockback.mValue,
		                             parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

		parms = static_cast<ChappyBase::Parms*>(mParms);
		EnemyFunc::flickNearbyNavi(this, parms->mGeneral.mPrivateRadius.mValue, parms->mGeneral.mShakeKnockback.mValue,
		                           parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
		rumbleMgr->startRumble(10, pos, 2);

	} else {
		return;
	}

	createBounceEffect(pos, 1.0f);
}
} // namespace Hana
} // namespace Game
