#include "types.h"
#include "Game/Entities/Hiba.h"
#include "efx/THibaFire.h"

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

	f32 r = randWeightFloat(static_cast<Parms*>(m_parms)->m_properParms.m_waitTime.m_value);
	StateArg arg;
	arg._00.f32 = r;
	m_FSM->start(this, 1, &arg);
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
	shadowParam.m_position 								  = m_position;
	shadowParam.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.m_boundingSphere.m_radius   = 0.0f;
	shadowParam._1C                         = 0.0f;
}

/*
 * --INFO--
 * Address:	8026C19C
 * Size:	00007C
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if ((creature != nullptr) && !creature->isNavi()) {
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
	Parms* parms = static_cast<Parms*>(m_parms);
	f32 angle;
	f32 range;

	range = parms->m_general.m_fp20.m_value;
	angle = parms->m_general.m_fp21.m_value;

	f32 max = m_position.y + range;
	f32 min = m_position.y - angle;

	f32 radius = parms->m_general.m_fp22.m_value;
	Sys::Sphere sphere(m_position, radius);

	f32 radSqr = SQUARE(radius);
	CellIteratorArg arg(sphere);
	arg._1C = 1;

	CellIterator iterator(arg);
	iterator.first();

	while (!iterator.isDone()) {
		Creature* creature = (Creature*)(*iterator);
		if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
			Vector3f position = creature->getPosition();
			if ((max > position.y) && (min < position.y)) {
				Vector3f diff = m_position - position;
				if (SQUARE(diff.x) + SQUARE(diff.z) < radSqr) {
					InteractFire fire(this, static_cast<Parms*>(m_parms)->m_general.m_attackDamage.m_value);
					creature->stimulate(fire);
				}
			}
		}
		iterator.next();
	}
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	mr       r30, r3
	addi     r3, r1, 0x30
	lwz      r5, 0xc0(r30)
	addi     r4, r1, 0x20
	lfs      f2, 0x190(r30)
	lfs      f0, 0x564(r5)
	lfs      f1, 0x58c(r5)
	lfs      f3, 0x5b4(r5)
	fadds    f31, f2, f0
	lfs      f0, 0x18c(r30)
	fsubs    f30, f2, f1
	fmuls    f29, f3, f3
	stfs     f0, 0x20(r1)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x28(r1)
	stfs     f3, 0x2c(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x50
	stb      r0, 0x4c(r1)
	addi     r4, r1, 0x30
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x50
	bl       first__Q24Game12CellIteratorFv
	b        lbl_8026C43C

lbl_8026C344:
	addi     r3, r1, 0x50
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026C434
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8026C3A0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026C434

lbl_8026C3A0:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 8(r1)
	fcmpo    cr0, f31, f0
	lfs      f3, 0x10(r1)
	ble      lbl_8026C434
	fcmpo    cr0, f30, f0
	bge      lbl_8026C434
	lfs      f0, 0x194(r30)
	lfs      f1, 0x18c(r30)
	fsubs    f0, f0, f3
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f29
	bge      lbl_8026C434
	lwz      r6, 0xc0(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractFire@ha
	mr       r3, r31
	lfs      f0, 0x604(r6)
	addi     r5, r5, __vt__Q24Game11Interaction@l
	addi     r0, r4, __vt__Q24Game12InteractFire@l
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stw      r30, 0x18(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8026C434:
	addi     r3, r1, 0x50
	bl       next__Q24Game12CellIteratorFv

lbl_8026C43C:
	addi     r3, r1, 0x50
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026C344
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026C47C
 * Size:	000024
 */
void Obj::setupLodParms()
{
	m_lodParm.m_far        = static_cast<Parms*>(m_parms)->m_properParms.m_lodNear.m_value;
	m_lodParm.m_close      = static_cast<Parms*>(m_parms)->m_properParms.m_lodMiddle.m_value;
	m_lodParm.m_isCylinder = false;
}

/*
 * --INFO--
 * Address:	8026C4A0
 * Size:	00002C
 */
void Obj::updateEfxLod() { m_efxFire->setRateLOD(m_lod.m_flags & (AILOD::IsMid | AILOD::IsFar)); }

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
	if (m_generator != nullptr) {
		m_generator->informDeath(this);
		m_generator = nullptr;
	}
}

} // namespace Hiba
} // namespace Game
