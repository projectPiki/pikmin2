#include "Game/Entities/PanModokiBase.h"
#include "Game/EnemyAnimKeyEvent.h"

namespace Game {
namespace PanModokiBase {

/*
 * --INFO--
 * Address:	8034C93C
 * Size:	0001BC
 */
void FSM::init(EnemyBase* enemy)
{
	create(PANMODOKI_StateCount);
	registerState(new StateDead(PANMODOKI_Dead));
	registerState(new StateWalk(PANMODOKI_Walk));
	registerState(new StateBack(PANMODOKI_Back));
	registerState(new StatePulled(PANMODOKI_Pulled));
	registerState(new StateAppear(PANMODOKI_Appear));
	registerState(new StateHide(PANMODOKI_Hide));
	registerState(new StateDamage(PANMODOKI_Damage));
	registerState(new StateWait(PANMODOKI_Wait));
	registerState(new StateStick(PANMODOKI_Stick));
	registerState(new StateSucked(PANMODOKI_Sucked));
	registerState(new StateCarryEnd(PANMODOKI_CarryEnd));
}

/*
 * --INFO--
 * Address:	8034CAF8
 * Size:	00003C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	m_name = "dead";
}

/*
 * --INFO--
 * Address:	8034CB34
 * Size:	000090
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* panModoki = static_cast<Obj*>(enemy);
	if (panModoki->getCarryTarget()) {
		panModoki->endStick();
		panModoki->m_targetCreature = nullptr;
	}

	panModoki->startMotion(0, nullptr);
	panModoki->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	panModoki->deathProcedure();
	panModoki->m_impVelocity = Vector3f(0.0f);
	panModoki->m_simVelocity = Vector3f(0.0f);
	panModoki->killNest();
}

/*
 * --INFO--
 * Address:	8034CBC4
 * Size:	000058
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->m_curAnim->m_isRunning) {
		if ((u32)enemy->m_curAnim->m_type == KEYEVENT_2) {
			static_cast<Obj*>(enemy)->boundEffect();

		} else if ((u32)enemy->m_curAnim->m_type == KEYEVENT_END) {
			enemy->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	8034CC1C
 * Size:	00003C
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	m_name = "walk";
}

/*
 * --INFO--
 * Address:	8034CC58
 * Size:	000070
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	if (enemy->getCurrAnimIndex() != 1) {
		enemy->startMotion(1, nullptr);
		enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed * CG_PROPERPARMS(enemy).m_fp16.m_value);
	}

	static_cast<Obj*>(enemy)->m_nextState = PANMODOKI_NULL;
	enemy->m_targetCreature               = nullptr;
}

/*
 * --INFO--
 * Address:	8034CCC8
 * Size:	00010C
 */
void StateWalk::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051E3D8@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8034CD14
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034CDBC

lbl_8034CD14:
	lfs      f1, 0x32c(r31)
	mr       r3, r31
	bl       isReachToGoal__Q34Game13PanModokiBase3ObjFf
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034CD34
	mr       r3, r31
	li       r4, 0
	bl       findNextRoutePoint__Q34Game13PanModokiBase3ObjFb

lbl_8034CD34:
	lwz      r0, 0x344(r31)
	cmpwi    r0, 0
	bge      lbl_8034CD54
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x304(r12)
	mtctr    r12
	bctrl

lbl_8034CD54:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8034CDBC
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8034CDBC
	lwz      r5, 0x344(r31)
	cmpwi    r5, 0
	bge      lbl_8034CDA0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034CDBC

lbl_8034CDA0:
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8034CDBC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034CDD4
 * Size:	00003C
 */
StateBack::StateBack(int stateID)
    : State(stateID)
{
	m_name = "back";
}

/*
 * --INFO--
 * Address:	8034CE10
 * Size:	000104
 */
void StateBack::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	mr       r3, r30
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	mr       r31, r3
	cmpwi    r31, 2
	beq      lbl_8034CE54
	mr       r3, r30
	li       r4, 2
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_8034CE54:
	lwz      r4, 0xc0(r30)
	mr       r3, r30
	lfs      f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	lfs      f0, 0x844(r4)
	fmuls    f1, f1, f0
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	cmpwi    r31, 3
	bne      lbl_8034CE84
	mr       r3, r30
	bl       getFirstKeyFrame__Q24Game9EnemyBaseFv
	mr       r3, r30
	bl       setMotionFrame__Q24Game9EnemyBaseFf

lbl_8034CE84:
	lfs      f0, lbl_8051E3D8@sda21(r2)
	mr       r3, r30
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	stfs     f0, 0x1c8(r30)
	stfs     f0, 0x1cc(r30)
	stfs     f0, 0x1d0(r30)
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	cmplwi   r3, 0
	beq      lbl_8034CED4
	lfs      f0, lbl_8051E3D8@sda21(r2)
	addi     r4, r1, 8
	stfs     f0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8034CED4:
	mr       r3, r30
	li       r4, 0
	bl       setPathFinder__Q34Game13PanModokiBase3ObjFb
	li       r0, 1
	li       r3, -1
	stb      r0, 0x2e4(r30)
	li       r0, 0
	stw      r3, 0x344(r30)
	stw      r0, 0x10(r29)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034CF14
 * Size:	0004D0
 */
void StateBack::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	stw      r28, 0x50(r1)
	mr       r30, r4
	lfs      f0, lbl_8051E3D8@sda21(r2)
	lfs      f1, 0x200(r4)
	mr       r29, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8034CF70
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034D3BC

lbl_8034CF70:
	lwz      r0, 0x344(r30)
	cmpwi    r0, 0
	bge      lbl_8034D368
	mr       r3, r30
	bl       isEndPathFinder__Q34Game13PanModokiBase3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034CFB8
	mr       r3, r30
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 8
	bne      lbl_8034CFAC
	mr       r3, r30
	li       r4, 2
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_8034CFAC:
	lfs      f1, lbl_8051E3EC@sda21(r2)
	mr       r3, r30
	bl       carryTarget__Q34Game13PanModokiBase3ObjFf

lbl_8034CFB8:
	mr       r3, r30
	bl       canBack__Q34Game13PanModokiBase3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034CFEC
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034D008

lbl_8034CFEC:
	lwz      r0, 0x230(r30)
	cmplwi   r0, 0
	bne      lbl_8034D008
	mr       r3, r30
	bl       finishMotion__Q24Game9EnemyBaseFv
	li       r0, 1
	stw      r0, 0x344(r30)

lbl_8034D008:
	mr       r3, r30
	bl       isCarryToGoal__Q34Game13PanModokiBase3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034D058
	lfs      f0, lbl_8051E3D8@sda21(r2)
	mr       r3, r29
	mr       r4, r30
	li       r5, 0xa
	stfs     f0, 0x1d4(r30)
	li       r6, 0
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	stfs     f0, 0x1c8(r30)
	stfs     f0, 0x1cc(r30)
	stfs     f0, 0x1d0(r30)
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034D368

lbl_8034D058:
	mr       r3, r30
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	or.      r28, r3, r3
	beq      lbl_8034D368
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r31, 0
	cmplwi   r3, 0
	beq      lbl_8034D0A0
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_8034D0A0
	mr       r3, r30
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034D0A0
	lwz      r0, 0xb8(r28)
	cmplwi   r0, 0
	beq      lbl_8034D12C

lbl_8034D0A0:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_8034D0DC
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034D12C

lbl_8034D0DC:
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x14
	lwz      r12, 0(r28)
	lfs      f31, 0xc(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x18(r1)
	lfs      f0, lbl_8051E3F0@sda21(r2)
	fsubs    f1, f1, f31
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8034D130

lbl_8034D12C:
	li       r31, 1

lbl_8034D130:
	clrlwi.  r0, r31, 0x18
	bne      lbl_8034D334
	mr       r4, r28
	addi     r3, r1, 0x30
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x30
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_8034D184
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8034D308

lbl_8034D184:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8034D1F0

lbl_8034D19C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034D308
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_8034D1F0:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034D19C
	b        lbl_8034D308

lbl_8034D210:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034D24C
	cmplw    r28, r30
	beq      lbl_8034D24C
	li       r31, 1

lbl_8034D24C:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_8034D278
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8034D308

lbl_8034D278:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8034D2EC

lbl_8034D298:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034D308
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_8034D2EC:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034D298

lbl_8034D308:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_8034D210
	addi     r3, r1, 0x30
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_8034D334:
	clrlwi.  r0, r31, 0x18
	beq      lbl_8034D368
	mr       r3, r30
	bl       releaseCarryTarget__Q34Game13PanModokiBase3ObjFv
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034D3BC

lbl_8034D368:
	lwz      r3, 0x188(r30)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8034D3BC
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8034D3BC
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r6, 0
	lwz      r5, 0x344(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x344(r30)
	cmpwi    r0, 3
	bne      lbl_8034D3BC
	mr       r3, r30
	li       r4, 1
	bl       changeCarryDir__Q34Game13PanModokiBase3ObjFb

lbl_8034D3BC:
	psq_l    f31, 104(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f31, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034D3E4
 * Size:	00003C
 */
StatePulled::StatePulled(int stateID)
    : State(stateID)
{
	m_name = "pulled";
}

/*
 * --INFO--
 * Address:	8034D420
 * Size:	0000B0
 */
void StatePulled::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	mr       r3, r30
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	mr       r31, r3
	mr       r3, r30
	li       r4, 3
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r4, 0xc0(r30)
	mr       r3, r30
	lfs      f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	lfs      f0, 0x844(r4)
	fmuls    f1, f1, f0
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	cmpwi    r31, 2
	bne      lbl_8034D484
	mr       r3, r30
	bl       getFirstKeyFrame__Q24Game9EnemyBaseFv
	mr       r3, r30
	bl       setMotionFrame__Q24Game9EnemyBaseFf

lbl_8034D484:
	mr       r3, r30
	bl       createPulledSmokeEffect__Q34Game13PanModokiBase3ObjFv
	lfs      f0, lbl_8051E3D8@sda21(r2)
	li       r3, 0
	li       r0, -1
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	stfs     f0, 0x1c8(r30)
	stfs     f0, 0x1cc(r30)
	stfs     f0, 0x1d0(r30)
	stb      r3, 0x2e4(r30)
	stw      r0, 0x344(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034D4D0
 * Size:	0004CC
 */
void StatePulled::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	stw      r28, 0x50(r1)
	mr       r30, r4
	lfs      f0, lbl_8051E3D8@sda21(r2)
	lfs      f1, 0x200(r4)
	mr       r29, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8034D52C
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034D974

lbl_8034D52C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x28
	bne      lbl_8034D580
	lwz      r3, 0x188(r30)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8034D580
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_8034D580
	lwz      r3, 0x28c(r30)
	li       r4, 0x598b
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl

lbl_8034D580:
	lwz      r0, 0x344(r30)
	cmpwi    r0, 0
	bge      lbl_8034D90C
	mr       r3, r30
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	or.      r28, r3, r3
	beq      lbl_8034D8FC
	mr       r3, r30
	bl       canBack__Q34Game13PanModokiBase3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034D5FC
	mr       r3, r28
	bl       getStateID__Q24Game6PelletFv
	cmpwi    r3, 1
	beq      lbl_8034D90C
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034D90C
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034D90C

lbl_8034D5FC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r31, 0
	cmplwi   r3, 0
	beq      lbl_8034D634
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_8034D634
	mr       r3, r30
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034D634
	lwz      r0, 0xb8(r28)
	cmplwi   r0, 0
	beq      lbl_8034D6C0

lbl_8034D634:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_8034D670
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034D6C0

lbl_8034D670:
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x14
	lwz      r12, 0(r28)
	lfs      f31, 0xc(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x18(r1)
	lfs      f0, lbl_8051E3F0@sda21(r2)
	fsubs    f1, f1, f31
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8034D6C4

lbl_8034D6C0:
	li       r31, 1

lbl_8034D6C4:
	clrlwi.  r0, r31, 0x18
	bne      lbl_8034D8C8
	mr       r4, r28
	addi     r3, r1, 0x30
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x30
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_8034D718
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8034D89C

lbl_8034D718:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8034D784

lbl_8034D730:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034D89C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_8034D784:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034D730
	b        lbl_8034D89C

lbl_8034D7A4:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034D7E0
	cmplw    r28, r30
	beq      lbl_8034D7E0
	li       r31, 1

lbl_8034D7E0:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_8034D80C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8034D89C

lbl_8034D80C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8034D880

lbl_8034D82C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034D89C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_8034D880:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034D82C

lbl_8034D89C:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_8034D7A4
	addi     r3, r1, 0x30
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_8034D8C8:
	clrlwi.  r0, r31, 0x18
	beq      lbl_8034D90C
	mr       r3, r30
	bl       releaseCarryTarget__Q34Game13PanModokiBase3ObjFv
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034D974

lbl_8034D8FC:
	mr       r3, r30
	bl       finishMotion__Q24Game9EnemyBaseFv
	li       r0, 1
	stw      r0, 0x344(r30)

lbl_8034D90C:
	lfs      f1, lbl_8051E3EC@sda21(r2)
	mr       r3, r30
	bl       carryTarget__Q34Game13PanModokiBase3ObjFf
	lwz      r3, 0x188(r30)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8034D96C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8034D96C
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r6, 0
	lwz      r5, 0x344(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x344(r30)
	cmpwi    r0, 2
	bne      lbl_8034D96C
	mr       r3, r30
	li       r4, 0
	bl       changeCarryDir__Q34Game13PanModokiBase3ObjFb

lbl_8034D96C:
	mr       r3, r30
	bl       checkSucked__Q34Game13PanModokiBase3ObjFv

lbl_8034D974:
	psq_l    f31, 104(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f31, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034D99C
 * Size:	000024
 */
void StatePulled::cleanup(EnemyBase* enemy) { static_cast<Obj*>(enemy)->fadePulledSmokeEffect(); }

/*
 * --INFO--
 * Address:	8034D9C0
 * Size:	00003C
 */
StateAppear::StateAppear(int stateID)
    : State(stateID)
{
	m_name = "appear";
}

/*
 * --INFO--
 * Address:	8034D9FC
 * Size:	000070
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 4
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lfs      f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	mr       r3, r31
	bl       checkNearHomeGraphIndex__Q34Game13PanModokiBase3ObjFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createAppearEffect__Q34Game13PanModokiBase3ObjFv
	mr       r3, r31
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034DA6C
 * Size:	000004
 */
void Obj::appearRumble() { }

/*
 * --INFO--
 * Address:	8034DA70
 * Size:	000064
 */
void StateAppear::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_8034DAC0
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_8034DAC0
	lwz      r12, 0(r3)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       hardConstraintOff__Q24Game9EnemyBaseFv

lbl_8034DAC0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034DAD4
 * Size:	00003C
 */
StateHide::StateHide(int stateID)
    : State(stateID)
{
	m_name = "hide";
}

/*
 * --INFO--
 * Address:	8034DB10
 * Size:	000068
 */
void StateHide::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 5
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lfs      f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	lfs      f0, lbl_8051E3D8@sda21(r2)
	li       r0, 0
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	stw      r0, 0x10(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034DB78
 * Size:	000118
 */
void StateHide::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x188(r4)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8034DC00
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_8034DBD0
	mr       r3, r31
	bl       createHideEffect__Q34Game13PanModokiBase3ObjFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x2fc(r12)
	mtctr    r12
	bctrl
	b        lbl_8034DC00

lbl_8034DBD0:
	cmplwi   r0, 0x3e8
	bne      lbl_8034DC00
	mr       r3, r31
	bl       fadeHideEffect__Q34Game13PanModokiBase3ObjFv
	lwz      r4, 0xc0(r31)
	mr       r3, r31
	lfs      f0, 0x104(r4)
	stfs     f0, 0x200(r31)
	bl       endCarry__Q34Game13PanModokiBase3ObjFv
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x40
	stw      r0, 0x1e0(r31)

lbl_8034DC00:
	mr       r3, r31
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	cmplwi   r3, 0
	bne      lbl_8034DC78
	lwz      r3, 0x10(r30)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	addi     r0, r3, 1
	lfd      f2, lbl_8051E410@sda21(r2)
	stw      r0, 0x10(r30)
	lwz      r0, 0x10(r30)
	lwz      r3, 0xc0(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfs      f0, 0x95c(r3)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8034DC78
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0xa, 8
	stw      r0, 0x1e0(r31)

lbl_8034DC78:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034DC90
 * Size:	000004
 */
void Obj::hideRumble() { }

/*
 * --INFO--
 * Address:	8034DC94
 * Size:	00003C
 */
StateDamage::StateDamage(int stateID)
    : State(stateID)
{
	m_name = "damage";
}

/*
 * --INFO--
 * Address:	8034DCD0
 * Size:	00010C
 */
void StateDamage::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 6
	mr       r3, r31
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lfs      f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	lfs      f0, lbl_8051E3D8@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	cmplwi   r3, 0
	beq      lbl_8034DD44
	lwz      r3, 0x334(r3)
	li       r4, 2
	bl       giveup__Q24Game11PelletCarryFUs
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv
	li       r0, 0
	stw      r0, 0x230(r31)

lbl_8034DD44:
	lbz      r0, 0x2f1(r31)
	lwz      r4, 0xc0(r31)
	cmplwi   r0, 0
	lfs      f31, 0x90c(r4)
	beq      lbl_8034DDA8
	mr       r3, r31
	lfs      f31, 0x8e4(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x300(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x28
	bne      lbl_8034DDA8
	lwz      r3, 0x28c(r31)
	li       r4, 0x598a
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl

lbl_8034DDA8:
	fmr      f1, f31
	lfs      f2, lbl_8051E3EC@sda21(r2)
	mr       r3, r31
	bl       addDamage__Q24Game9EnemyBaseFff
	mr       r3, r31
	bl       boundEffect__Q34Game13PanModokiBase3ObjFv
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034DDDC
 * Size:	000080
 */
void StateDamage::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_8034DE4C
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_8034DE4C
	lfs      f1, 0x200(r4)
	lfs      f0, lbl_8051E3D8@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8034DE34
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034DE4C

lbl_8034DE34:
	lwz      r12, 0(r3)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8034DE4C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034DE5C
 * Size:	00003C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	m_name = "wait";
}

/*
 * --INFO--
 * Address:	8034DE98
 * Size:	000070
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 8
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lfs      f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	lfs      f0, lbl_8051E3D8@sda21(r2)
	li       r3, 0
	li       r0, 1
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	stw      r3, 0x10(r30)
	stw      r0, 0x344(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034DF08
 * Size:	0000F4
 */
void StateWait::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_8051E3D8@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8034DF54
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034DFE4

lbl_8034DF54:
	lwz      r3, 0x10(r30)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	addi     r0, r3, 1
	lfd      f2, lbl_8051E410@sda21(r2)
	stw      r0, 0x10(r30)
	lwz      r0, 0x10(r30)
	lwz      r3, 0xc0(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfs      f0, 0x934(r3)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8034DFA8
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034DFA8
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8034DFA8:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8034DFE4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8034DFE4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x344(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8034DFE4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034DFFC
 * Size:	00003C
 */
StateStick::StateStick(int stateID)
    : State(stateID)
{
	m_name = "stick";
}

/*
 * --INFO--
 * Address:	8034E038
 * Size:	000108
 */
void StateStick::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	beq      lbl_8034E090
	mr       r3, r30
	li       r4, 1
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r4, 0xc0(r30)
	mr       r3, r30
	lfs      f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	lfs      f0, 0x844(r4)
	fmuls    f1, f1, f0
	bl       setAnimSpeed__Q24Game9EnemyBaseFf

lbl_8034E090:
	lfs      f0, lbl_8051E3D8@sda21(r2)
	mr       r3, r30
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	stfs     f0, 0x1c8(r30)
	stfs     f0, 0x1cc(r30)
	stfs     f0, 0x1d0(r30)
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	or.      r31, r3, r3
	beq      lbl_8034E0F0
	mr       r3, r30
	mr       r4, r31
	bl       isTargetable__Q34Game13PanModokiBase3ObjFPQ24Game6Pellet
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034E0F0
	mr       r3, r31
	li       r4, 0x270f
	lwz      r12, 0(r31)
	lwz      r12, 0x168(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034E114

lbl_8034E0F0:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034E124

lbl_8034E114:
	li       r3, 0
	li       r0, 1
	stw      r3, 0x10(r29)
	stw      r0, 0x344(r30)

lbl_8034E124:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034E140
 * Size:	0003BC
 */
void StateStick::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r30, r4
	lfs      f0, lbl_8051E3D8@sda21(r2)
	lfs      f1, 0x200(r4)
	mr       r29, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8034E1B0
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034E4C0

lbl_8034E1B0:
	mr       r3, r30
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	or.      r31, r3, r3
	bne      lbl_8034E1E4
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034E4C0

lbl_8034E1E4:
	mr       r4, r31
	addi     r3, r1, 0x38
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x38(r1)
	mr       r4, r30
	lfs      f1, 0x3c(r1)
	addi     r3, r1, 0x20
	lfs      f0, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f1, 0x28(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	lfs      f0, 0x4c(r1)
	lwz      r12, 8(r12)
	fsubs    f31, f0, f1
	mtctr    r12
	bctrl
	lwz      r3, 0x35c(r31)
	fmuls    f2, f31, f31
	lfs      f1, 0x2c(r1)
	lfs      f0, 0x44(r1)
	lfs      f4, 0xa0(r3)
	fsubs    f3, f0, f1
	lfs      f1, lbl_8051E430@sda21(r2)
	lfs      f0, 0x32c(r30)
	fmadds   f4, f1, f0, f4
	fmadds   f31, f3, f3, f2
	fmuls    f4, f4, f4
	fcmpo    cr0, f31, f4
	bge      lbl_8034E34C
	mr       r3, r30
	mr       r4, r31
	bl       isTargetable__Q34Game13PanModokiBase3ObjFPQ24Game6Pellet
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034E328
	mr       r3, r31
	li       r4, 0x270f
	lwz      r12, 0(r31)
	lwz      r12, 0x168(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034E328
	lfs      f0, lbl_8051E3D8@sda21(r2)
	mr       r3, r30
	mr       r4, r31
	li       r5, 0x270f
	stfs     f0, 0x1c8(r30)
	stfs     f0, 0x1cc(r30)
	stfs     f0, 0x1d0(r30)
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	bl       startStick__Q24Game8CreatureFPQ24Game8Creatures
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x148(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	li       r4, 0
	bl       setCarryDir__Q34Game13PanModokiBase3ObjFb
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034E4C0

lbl_8034E328:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034E4C0

lbl_8034E34C:
	lwz      r5, 0xc0(r30)
	mr       r3, r30
	lfs      f1, lbl_8051E434@sda21(r2)
	addi     r4, r1, 0x44
	lfs      f0, 0x2e4(r5)
	lfs      f2, 0x86c(r5)
	fmuls    f1, f1, f0
	lfs      f3, 0x894(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" mr
r4, r30 lwz      r5, 0xc0(r30) lwz      r12, 0(r30) addi     r3, r1, 0x14 lfs
f29, 0x894(r5) lwz      r12, 8(r12) lfs      f30, 0x86c(r5) mtctr    r12 bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x44(r1)
	lfs      f0, 0x4c(r1)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f28, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f28
	bl       angDist__Fff
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051E43C@sda21(r2)
	lfs      f1, lbl_8051E438@sda21(r2)
	fmuls    f0, f0, f29
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8034E42C
	lfs      f0, lbl_8051E3D8@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8034E428
	fmr      f30, f1
	b        lbl_8034E42C

lbl_8034E428:
	fneg     f30, f1

lbl_8034E42C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f1, lbl_8051E440@sda21(r2)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x1a8(r30)
	lwz      r3, 0x10(r29)
	addi     r0, r3, 1
	stw      r0, 0x10(r29)
	lfs      f0, 0x32c(r30)
	lwz      r0, 0x10(r29)
	fmuls    f0, f1, f0
	cmpwi    r0, 0xc8
	bgt      lbl_8034E4A0
	fmuls    f0, f0, f0
	fcmpo    cr0, f31, f0
	bgt      lbl_8034E4A0
	cmplwi   r31, 0
	beq      lbl_8034E4A0
	mr       r3, r30
	mr       r4, r31
	bl       isTargetable__Q34Game13PanModokiBase3ObjFPQ24Game6Pellet
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034E4C0

lbl_8034E4A0:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r6, 0
	lwz      r5, 0x344(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8034E4C0:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r0, 0xa4(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034E4FC
 * Size:	00003C
 */
StateSucked::StateSucked(int stateID)
    : State(stateID)
{
	m_name = "sucked";
}

/*
 * --INFO--
 * Address:	8034E538
 * Size:	00006C
 */
void StateSucked::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(8, nullptr);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);

	if (static_cast<Obj*>(enemy)->getCarryTarget()) {
		enemy->endStick();
		enemy->m_targetCreature = nullptr;
	}

	static_cast<Obj*>(enemy)->_2F1 = 1;
}

/*
 * --INFO--
 * Address:	8034E5A4
 * Size:	00000C
 */
void StateSucked::exec(EnemyBase* enemy) { static_cast<Obj*>(enemy)->_2F1 = 1; }

/*
 * --INFO--
 * Address:	8034E5B0
 * Size:	000040
 */
StateCarryEnd::StateCarryEnd(int stateID)
    : State(stateID)
{
	m_name = "carryend";
}

/*
 * --INFO--
 * Address:	8034E5F0
 * Size:	00006C
 */
void StateCarryEnd::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0x10(r30)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x14(r30)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x18(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034E65C
 * Size:	0002F0
 */
void StateCarryEnd::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r31, r4
	lfs      f0, lbl_8051E3D8@sda21(r2)
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8034E6C0
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034E91C

lbl_8034E6C0:
	lwz      r12, 0(r4)
	addi     r3, r1, 0x2c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x198(r31)
	lfs      f0, 0x2c(r1)
	lfs      f5, 0x1a0(r31)
	fsubs    f0, f2, f0
	lfs      f4, 0x34(r1)
	lfs      f3, 0x19c(r31)
	lfs      f1, 0x30(r1)
	fsubs    f6, f5, f4
	fabs     f7, f0
	fsubs    f4, f3, f1
	lfs      f1, lbl_8051E44C@sda21(r2)
	stfs     f0, 0x44(r1)
	frsp     f0, f7
	stfs     f4, 0x48(r1)
	fcmpo    cr0, f0, f1
	stfs     f6, 0x4c(r1)
	bge      lbl_8034E78C
	fabs     f0, f6
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	bge      lbl_8034E78C
	stfs     f2, 0x38(r1)
	mr       r3, r31
	addi     r4, r1, 0x38
	stfs     f3, 0x3c(r1)
	stfs     f5, 0x40(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8034E8E0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 1
	bne      lbl_8034E8E0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034E8E0

lbl_8034E78C:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	lfs      f30, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x10(r30)
	lfs      f0, 0x18(r30)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fmuls    f31, f1, f31
	lfs      f0, lbl_8051E43C@sda21(r2)
	lfs      f1, lbl_8051E438@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8034E848
	lfs      f0, lbl_8051E3D8@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8034E844
	fmr      f31, f1
	b        lbl_8034E848

lbl_8034E844:
	fneg     f31, f1

lbl_8034E848:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	lfs      f0, 0x44(r1)
	lfs      f2, lbl_8051E450@sda21(r2)
	stfs     f1, 0x1fc(r31)
	fmuls    f1, f0, f2
	lfs      f0, 0x48(r1)
	lfs      f4, 0x1fc(r31)
	fmuls    f3, f0, f2
	lfs      f0, 0x4c(r1)
	stfs     f1, 0x44(r1)
	fmuls    f2, f0, f2
	lwz      r0, 0x44(r1)
	stfs     f4, 0x1a8(r31)
	stw      r0, 0x20(r1)
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x20(r1)
	stfs     f3, 0x48(r1)
	fadds    f0, f1, f0
	lwz      r0, 0x48(r1)
	stfs     f2, 0x4c(r1)
	stw      r0, 0x24(r1)
	lwz      r0, 0x4c(r1)
	stfs     f0, 0x18c(r31)
	lfs      f0, 0x24(r1)
	lfs      f1, 0x190(r31)
	stw      r0, 0x28(r1)
	fadds    f1, f1, f0
	lfs      f0, 0x28(r1)
	stfs     f1, 0x190(r31)
	lfs      f1, 0x194(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x194(r31)

lbl_8034E8E0:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8034E91C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8034E91C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8034E91C:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0x94(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}
} // namespace PanModokiBase
} // namespace Game
