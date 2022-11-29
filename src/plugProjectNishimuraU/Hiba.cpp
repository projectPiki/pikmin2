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
	m_animator = new ProperAnimator;
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
	resetEvent(0, EB_13);
	resetEvent(0, EB_LeaveCarcass);
	resetEvent(0, EB_9);
	hardConstraintOn();
	setEvent(0, EB_BitterImmune);

	setEmotionNone();
	shadowMgr->killShadow(this);
	m_timer   = 0.0f;
	m_isAlive = true;
	setupLodParms();

	f32 r = randWeightFloat(C_PROPERPARMS.m_waitTime.m_value);
	WaitStateArg arg;
	arg.m_waitTimer = r;
	m_FSM->start(this, HIBA_Wait, &arg);
}

/*
 * --INFO--
 * Address:	8026C0C0
 * Size:	000034
 */
void Obj::doUpdate() { m_FSM->exec(this); }

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
	m_FSM = fsm;
	m_FSM->init(this);
	m_currentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	8026C164
 * Size:	000038
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.m_position                  = m_position;
	shadowParam.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.m_boundingSphere.m_radius   = 0.0f;
	shadowParam.m_size                      = 0.0f;
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
	f32 max      = m_position.y + parms->m_general.m_fp20.m_value;
	f32 min      = m_position.y - parms->m_general.m_fp21.m_value;
	f32 radSqr   = SQUARE(parms->m_general.m_fp22.m_value);

	Sys::Sphere sphere(m_position);
	sphere.m_radius = parms->m_general.m_fp22.m_value;

	CellIteratorArg arg(sphere);
	arg._1C = true;

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
					InteractFire fire(this, C_PARMS->m_general.m_attackDamage.m_value);
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
	m_lodParm.m_far        = C_PARMS->m_properParms.m_lodNear.m_value;
	m_lodParm.m_close      = C_PARMS->m_properParms.m_lodMiddle.m_value;
	m_lodParm.m_isCylinder = false;
}

/*
 * --INFO--
 * Address:	8026C4A0
 * Size:	00002C
 */
void Obj::updateEfxLod() { m_efxFire->setRateLOD(m_lod.m_flags & (AILOD_FLAG_IS_MID | AILOD_FLAG_IS_FAR)); }

/*
 * --INFO--
 * Address:	8026C4CC
 * Size:	000064
 */
void Obj::createEffect() { m_efxFire = new efx::THibaFire; }

/*
 * --INFO--
 * Address:	8026C530
 * Size:	000058
 */
void Obj::startFireEffect()
{
	efx::Arg arg(m_position);
	m_efxFire->create(&arg);
}

/*
 * --INFO--
 * Address:	8026C588
 * Size:	000030
 */
void Obj::finishFireEffect() { m_efxFire->fade(); }

/*
 * --INFO--
 * Address:	8026C5B8
 * Size:	000044
 */
void Obj::generatorKill()
{
	if (m_generator) {
		m_generator->informDeath(this);
		m_generator = nullptr;
	}
}

} // namespace Hiba
} // namespace Game
