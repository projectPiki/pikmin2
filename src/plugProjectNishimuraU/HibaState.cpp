#include "types.h"
#include "Game/Entities/Hiba.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "efx/TEnemyBomb.h"
#include "PS.h"

namespace Game {
namespace Hiba {

/*
 * --INFO--
 * Address:	8026B354
 * Size:	000128
 */
void Hiba::FSM::init(EnemyBase* hiba)
{
	create(3);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateAttack);
}

/*
 * --INFO--
 * Address:	8026B47C
 * Size:	00017C
 */
// WIP: https://decomp.me/scratch/wqr1f
// flags setting too late??? weird
void StateDead::init(EnemyBase* hiba, StateArg* stateArg)
{
	hiba->setEvent(0, EB_3);
	hiba->resetEvent(0, EB_LifegaugeVisible);
	hiba->setEvent(0, EB_Vulnerable);
	hiba->resetEvent(0, EB_Flying);

	static_cast<Obj*>(hiba)->m_isAlive = false;
	static_cast<Obj*>(hiba)->generatorKill();

	hiba->startMotion(0, nullptr);
	hiba->getJAIObject()->startSound(PSSE_EN_HIBA_STOP, 0);
	PSStartEnemyFatalHitSE(hiba, 0.0f);

	Vector3f position            = hiba->getPosition();
	f32 scale                    = hiba->m_scaleModifier;
	EnemyTypeID::EEnemyTypeID id = hiba->getEnemyTypeID();
	efx::ArgEnemyType arg(position, id, scale);
	efx::TEnemyBomb bombEffect;
	bombEffect.create(&arg);
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r4
	lwz      r4, 0x1e0(r4)
	li       r0, 0
	ori      r4, r4, 4
	mr       r3, r31
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	rlwinm   r4, r4, 0, 0x15, 0x13
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	ori      r4, r4, 1
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	rlwinm   r4, r4, 0, 0x1d, 0x1b
	stw      r4, 0x1e0(r31)
	stb      r0, 0x2c0(r31)
	bl       generatorKill__Q34Game4Hiba3ObjFv
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x580c
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051AFF8@sda21(r2)
	mr       r3, r31
	bl       PSStartEnemyFatalHitSE__FPQ24Game9EnemyBasef
	mr       r4, r31
	addi     r3, r1, 0x18
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lfs      f2, 0x18(r1)
	lwz      r12, 0(r31)
	lfs      f1, 0x1c(r1)
	lfs      f0, 0x20(r1)
	lwz      r12, 0x258(r12)
	stfs     f2, 0x24(r1)
	lfs      f31, 0x1f8(r31)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	mtctr    r12
	bctrl
	lwz      r6, 0x24(r1)
	lis      r5, __vt__Q23efx3Arg@ha
	lwz      r0, 0x28(r1)
	lis      r4, __vt__Q23efx5TBase@ha
	lwz      r8, 0x2c(r1)
	addi     r7, r5, __vt__Q23efx3Arg@l
	stw      r6, 0xc(r1)
	addi     r5, r4, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx12ArgEnemyType@ha
	lis      r4, __vt__Q23efx10TEnemyBomb@ha
	stw      r0, 0x10(r1)
	addi     r6, r6, __vt__Q23efx12ArgEnemyType@l
	lfs      f2, 0xc(r1)
	addi     r0, r4, __vt__Q23efx10TEnemyBomb@l
	stw      r8, 0x14(r1)
	addi     r4, r1, 0x30
	lfs      f1, 0x10(r1)
	stw      r7, 0x30(r1)
	lfs      f0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r3, 0x40(r1)
	addi     r3, r1, 8
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	stw      r6, 0x30(r1)
	stfs     f31, 0x44(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx10TEnemyBombFPQ23efx3Arg
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026B600
 * Size:	000004
 */
void StateDead::exec(EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026B604
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026B608
 * Size:	000048
 */
void StateWait::init(EnemyBase* hiba, StateArg* stateArg)
{
	if (stateArg != nullptr) {
		static_cast<Obj*>(hiba)->m_timer = stateArg->_00.f32; // iffy on this
	} else {
		static_cast<Obj*>(hiba)->m_timer = 0.0f;
	}
	hiba->startMotion(0, nullptr);
}

/*
 * --INFO--
 * Address:	8026B650
 * Size:	00008C
 */
void StateWait::exec(EnemyBase* hiba)
{
	static_cast<Obj*>(hiba)->m_timer += sys->m_secondsPerFrame;

	if (hiba->m_health <= 0.0f) {
		transit(hiba, HIBA_Dead, nullptr);
		return;
	}

	if (static_cast<Obj*>(hiba)->m_timer > static_cast<Parms*>(hiba->m_parms)->m_properParms.m_waitTime.m_value) {
		transit(hiba, HIBA_Attack, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8026B6DC
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026B6E0
 * Size:	000048
 */
// WIP: https://decomp.me/scratch/sePfo
// again, ordering weirdness?
void StateAttack::init(EnemyBase* hiba, StateArg* stateArg)
{
	static_cast<Obj*>(hiba)->m_timer = 0.0f;
	hiba->startMotion(1, nullptr);
	static_cast<Obj*>(hiba)->startFireEffect();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051AFF8@sda21(r2)
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 1
	stfs     f0, 0x2c4(r31)
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       startFireEffect__Q34Game4Hiba3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026B728
 * Size:	0000FC
 */
void StateAttack::exec(EnemyBase* hiba)
{
	if ((hiba->m_health <= 0.0f)
	    || (static_cast<Obj*>(hiba)->m_timer > static_cast<Parms*>(hiba->m_parms)->m_properParms.m_activeTime.m_value)) {
		hiba->finishMotion();
	}

	static_cast<Obj*>(hiba)->m_timer += sys->m_secondsPerFrame;
	static_cast<Obj*>(hiba)->updateEfxLod();
	static_cast<Obj*>(hiba)->interactFireAttack();

	if ((hiba->m_animKeyEvent->m_running) && ((u32)hiba->m_animKeyEvent->m_type == 0x3E8)) {
		if (hiba->m_health <= 0.0f) {
			transit(hiba, HIBA_Dead, nullptr);
			return;
		}
		transit(hiba, HIBA_Wait, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8026B824
 * Size:	000024
 */
void StateAttack::cleanup(EnemyBase* hiba) { static_cast<Obj*>(hiba)->finishFireEffect(); }

} // namespace Hiba
} // namespace Game
