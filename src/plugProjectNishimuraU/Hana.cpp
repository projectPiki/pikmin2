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

/**
 * @note Address: 0x802F3138
 * @note Size: 0xA4
 */
Obj::Obj() { createEffect(); }

/**
 * @note Address: 0x802F31E0
 * @note Size: 0x64
 */
void Obj::onInit(CreatureInitArg* arg)
{
	ChappyBase::Obj::onInit(arg);
	mShadowJoint = mModel->getJoint("kosi");
	setUnderGround();
	setupEffect();
}

/**
 * @note Address: 0x802F3248
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x802F324C
 * @note Size: 0xE8
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

/**
 * @note Address: 0x802F3334
 * @note Size: 0xB4
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

/**
 * @note Address: 0x802F33E8
 * @note Size: 0x80
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

/**
 * @note Address: 0x802F3468
 * @note Size: 0x84
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

/**
 * @note Address: 0x802F34EC
 * @note Size: 0xF0
 */
void Obj::flickAttackBomb()
{
	ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(mParms);
	EnemyFunc::flickStickPikmin(this, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
	                            parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
	efx::THanaMiss efx(mModel->getJoint("kuti2")->getWorldMatrix());
	efx.create(nullptr);

	Vector3f pos = mPosition;
	cameraMgr->startVibration(VIBTYPE_Boom, pos, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed11, pos, RUMBLEID_Both);
}

/**
 * @note Address: 0x802F35DC
 * @note Size: 0x3C
 */
int Obj::eatAttackPikmin()
{
	ConditionNotStickSlot cond;
	return EnemyFunc::eatPikmin(this, &cond);
}

/**
 * @note Address: 0x802F3618
 * @note Size: 0x70
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

/**
 * @note Address: 0x802F3688
 * @note Size: 0x84
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

/**
 * @note Address: 0x802F370C
 * @note Size: 0x1C0
 */
void Obj::createSmokeEffect()
{
	Vector3f pos = mPosition;
	int id       = getCurrAnimIndex();
	if (id == ChappyBase::CHAPPYANIM_WaitAct2) {
		pos -= Vector3f(sinf(mFaceDir) * 60.0f, 0.0f, cosf(mFaceDir) * 60.0f);

		cameraMgr->startVibration(VIBTYPE_LightMidShort, pos, CAMNAVI_Both);
		rumbleMgr->startRumble(RUMBLETYPE_Fixed11, pos, RUMBLEID_Both);

	} else if (id == ChappyBase::CHAPPYANIM_Sleep) {
		setAtari(true);

		ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(mParms);
		EnemyFunc::flickNearbyPikmin(this, parms->mGeneral.mPrivateRadius.mValue, parms->mGeneral.mShakeKnockback.mValue,
		                             parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

		parms = static_cast<ChappyBase::Parms*>(mParms);
		EnemyFunc::flickNearbyNavi(this, parms->mGeneral.mPrivateRadius.mValue, parms->mGeneral.mShakeKnockback.mValue,
		                           parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
		rumbleMgr->startRumble(RUMBLETYPE_Fixed10, pos, RUMBLEID_Both);

	} else {
		return;
	}

	createBounceEffect(pos, 1.0f);
}
} // namespace Hana
} // namespace Game
