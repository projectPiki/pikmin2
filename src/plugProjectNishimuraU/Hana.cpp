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
	m_shadowJoint = m_model->getJoint("kosi");
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
		param.m_position                  = m_position;
		param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
		param.m_boundingSphere.m_radius   = 0.1f;
		param.m_size                      = 0.1f;
	} else {
		Matrixf* mtx     = m_shadowJoint->getWorldMatrix();
		param.m_position = Vector3f(mtx->m_matrix.structView.tx, mtx->m_matrix.structView.ty, mtx->m_matrix.structView.tz);

		param.m_position.y                = m_position.y + 10.0f;
		param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
		if (isEvent(1, EB2_IsEarthquake)) {
			param.m_boundingSphere.m_radius = 75.0f;
		} else {
			param.m_boundingSphere.m_radius = 50.0f;
		}
		param.m_size = 25.0f;
	}
}

/*
 * --INFO--
 * Address:	802F3334
 * Size:	0000B4
 */
void Obj::initMouthSlots()
{
	m_mouthSlots.alloc(3);
	m_mouthSlots.setup(0, m_model, "kamu1");
	m_mouthSlots.setup(1, m_model, "kamu2");
	m_mouthSlots.setup(2, m_model, "kamu3");
	f32 size = 30.0f;
	for (int i = 0; i < m_mouthSlots.m_max; i++) {
		m_mouthSlots.getSlot(i)->m_radius = size;
	}
}

/*
 * --INFO--
 * Address:	802F33E8
 * Size:	000080
 */
bool Obj::isWakeup()
{
	ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(m_parms);
	f32 rad                  = parms->m_general.m_privateRadius.m_value;
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
	ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(m_parms);
	EnemyFunc::flickStickPikmin(this, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
	                            parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);

	parms = static_cast<ChappyBase::Parms*>(m_parms);
	EnemyFunc::flickNearbyPikmin(this, parms->m_general.m_shakeRange.m_value, parms->m_general.m_shakeKnockback.m_value,
	                             parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);

	parms = static_cast<ChappyBase::Parms*>(m_parms);
	EnemyFunc::flickNearbyNavi(this, parms->m_general.m_shakeRange.m_value, parms->m_general.m_shakeKnockback.m_value,
	                           parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
}

/*
 * --INFO--
 * Address:	802F34EC
 * Size:	0000F0
 */
void Obj::flickAttackBomb()
{
	ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(m_parms);
	EnemyFunc::flickStickPikmin(this, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
	                            parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
	efx::THanaMiss efx(m_model->getJoint("kuti2")->getWorldMatrix());
	efx.create(nullptr);

	Vector3f pos = m_position;
	cameraMgr->startVibration(28, pos, 2);
	rumbleMgr->startRumble(11, pos, 2);
}

/*
 * --INFO--
 * Address:	802F35DC
 * Size:	00003C
 */
void Obj::eatAttackPikmin()
{
	ConditionNotStickSlot cond;
	EnemyFunc::eatPikmin(this, &cond);
}

/*
 * --INFO--
 * Address:	802F3618
 * Size:	000070
 */
void Obj::resetUnderGround()
{
	m_buried = false;
	disableEvent(0, EB_IsImmuneBitter);
	disableEvent(0, EB_IsEnemyNotBitter);
	hardConstraintOff();
	disableEvent(0, EB_IsVulnerable);
	setAtari(true);
}

/*
 * --INFO--
 * Address:	802F3688
 * Size:	000084
 */
void Obj::setUnderGround()
{
	ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(m_parms);
	EnemyFunc::flickStickPikmin(this, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
	                            parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);

	m_buried = true;
	enableEvent(0, EB_IsImmuneBitter);
	hardConstraintOn();
	enableEvent(0, EB_IsVulnerable);
	setAtari(false);
}

/*
 * --INFO--
 * Address:	802F370C
 * Size:	0001C0
 */
void Obj::createSmokeEffect()
{
	Vector3f pos = m_position;
	int id       = getCurrAnimIndex();
	if (id == 8) {
		pos -= Vector3f(pikmin2_sinf(m_faceDir) * 60.0f, 0.9f, pikmin2_cosf(m_faceDir) * 60.0f);

		cameraMgr->startVibration(3, pos, 2);
		rumbleMgr->startRumble(11, pos, 2);
	} else if (id == 4) {
		setAtari(true);

		ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(m_parms);
		EnemyFunc::flickNearbyPikmin(this, parms->m_general.m_privateRadius.m_value, parms->m_general.m_shakeKnockback.m_value,
		                             parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);

		parms = static_cast<ChappyBase::Parms*>(m_parms);
		EnemyFunc::flickNearbyNavi(this, parms->m_general.m_privateRadius.m_value, parms->m_general.m_shakeKnockback.m_value,
		                           parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
		rumbleMgr->startRumble(10, pos, 2);
	} else {
		return;
	}
	createBounceEffect(pos, 1.0f);
}

/*
 * --INFO--
 * Address:	802F38CC
 * Size:	00007C
 */
// void ConditionNotStickSlot::satisfy(Piki* p)
//{
//}
} // namespace Hana
} // namespace Game
