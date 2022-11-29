#include "Game/Entities/Tadpole.h"
#include "efx/TEnemyDive.h"
#include "efx/TPk.h"
#include "Dolphin/rand.h"
#include "PS.h"

namespace Game {
namespace Tadpole {

/*
 * --INFO--
 * Address:	802785D0
 * Size:	000130
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	80278700
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80278704
 * Size:	000064
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	_2C4 = 0.0f;
	_2C8 = -1;
	_2C0 = 1;
	m_FSM->start(this, TADPOLE_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	80278768
 * Size:	000034
 */
void Obj::doUpdate() { m_FSM->exec(this); }

/*
 * --INFO--
 * Address:	8027879C
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802787A0
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802787C0
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
 * Address:	8027880C
 * Size:	0000B0
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.m_position = getPosition();
	param.m_position.y += 2.5f;
	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_1)) {
		param.m_boundingSphere.m_radius = 50.0f;
	} else {
		param.m_boundingSphere.m_radius = 7.5f;
	}
	param.m_size = 7.5f;
}

/*
 * --INFO--
 * Address:	802788BC
 * Size:	000068
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (isAlive() && !isEvent(0, EB_Bittered)) {
		addDamage(m_health, 1.0f);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80278924
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(5, nullptr); }

/*
 * --INFO--
 * Address:	8027894C
 * Size:	0001E4
 */
void Obj::setRandTarget(bool check)
{
	f32 p1 = 0.0f;
	if (!check) {
		p1 = C_PARMS->m_general.m_territoryRadius.m_value - C_PARMS->m_general.m_homeRadius.m_value;
	}

	f32 radius          = randWeightFloat(p1) + C_PARMS->m_general.m_homeRadius.m_value;
	Vector3f tadpolePos = getPosition();
	Vector3f homePos    = m_homePosition;
	f32 angle           = JMath::atanTable_.atan2_(tadpolePos.x - homePos.x, tadpolePos.z - homePos.z);
	angle               = randWeightFloat(PI) + angle + HALF_PI;

	m_targetPosition = Vector3f(radius * pikmin2_sinf(angle) + homePos.x, homePos.y, radius * pikmin2_cosf(angle) + homePos.z);
}

/*
 * --INFO--
 * Address:	80278B30
 * Size:	0001C8
 */
Vector3f Obj::getTargetPosition(Creature* creature)
{
	Vector3f creaturePos = creature->getPosition();
	Vector3f tadpolePos  = getPosition();

	Vector3f diff = creaturePos - tadpolePos;
	diff.y        = 0.0f;
	_normalise(diff);

	f32 moveSpeed = C_PARMS->m_general.m_moveSpeed.m_value;
	diff          = Vector3f(diff.x * moveSpeed + creaturePos.x, diff.y * moveSpeed + creaturePos.y, diff.z * moveSpeed + creaturePos.z);
	_normalise(diff);

	return diff;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	lwz      r12, 0(r4)
	mr       r29, r3
	mr       r30, r4
	mr       r31, r5
	lwz      r12, 8(r12)
	addi     r3, r1, 0x14
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f30, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f31, 0x18(r1)
	lfs      f29, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	lfs      f2, 8(r1)
	fsubs    f1, f29, f0
	lfs      f0, lbl_8051B410@sda21(r2)
	fsubs    f8, f30, f2
	lfs      f5, 0x198(r30)
	lfs      f6, 0x19c(r30)
	fmuls    f3, f1, f1
	fmadds   f2, f8, f8, f0
	lfs      f7, 0x1a0(r30)
	fadds    f3, f3, f2
	fcmpo    cr0, f3, f0
	ble      lbl_80278BE8
	ble      lbl_80278BEC
	frsqrte  f2, f3
	fmuls    f3, f2, f3
	b        lbl_80278BEC

lbl_80278BE8:
	fmr      f3, f0

lbl_80278BEC:
	lfs      f2, lbl_8051B410@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_80278C0C
	lfs      f2, lbl_8051B418@sda21(r2)
	fdivs    f2, f2, f3
	fmuls    f8, f8, f2
	fmuls    f0, f0, f2
	fmuls    f1, f1, f2

lbl_80278C0C:
	lwz      r3, 0xc0(r30)
	lfs      f2, 0x2e4(r3)
	lfs      f9, 0x35c(r3)
	fmuls    f1, f1, f2
	fmuls    f8, f8, f2
	fmuls    f0, f0, f2
	fadds    f1, f1, f29
	fadds    f8, f8, f30
	fmuls    f2, f9, f9
	fsubs    f3, f1, f7
	fsubs    f4, f8, f5
	fadds    f0, f0, f31
	fmuls    f3, f3, f3
	fmadds   f3, f4, f4, f3
	fcmpo    cr0, f3, f2
	ble      lbl_80278CB8
	fsubs    f1, f1, f7
	lfs      f0, lbl_8051B410@sda21(r2)
	fsubs    f8, f8, f5
	fmuls    f3, f1, f1
	fmadds   f2, f8, f8, f0
	fadds    f3, f3, f2
	fcmpo    cr0, f3, f0
	ble      lbl_80278C7C
	ble      lbl_80278C80
	frsqrte  f2, f3
	fmuls    f3, f2, f3
	b        lbl_80278C80

lbl_80278C7C:
	fmr      f3, f0

lbl_80278C80:
	lfs      f2, lbl_8051B410@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_80278CA0
	lfs      f2, lbl_8051B418@sda21(r2)
	fdivs    f2, f2, f3
	fmuls    f8, f8, f2
	fmuls    f0, f0, f2
	fmuls    f1, f1, f2

lbl_80278CA0:
	fmuls    f8, f8, f9
	fmuls    f0, f0, f9
	fmuls    f1, f1, f9
	fadds    f8, f8, f5
	fadds    f0, f0, f6
	fadds    f1, f1, f7

lbl_80278CB8:
	stfs     f8, 0(r29)
	stfs     f0, 4(r29)
	stfs     f1, 8(r29)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r0, 0x64(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80278CF8
 * Size:	000188
 */
void Obj::createLeapEffect()
{
	if (m_waterBox) {
		Vector3f position = m_position;
		position.y        = *m_waterBox->getSeaHeightPtr();
		if (position.y - m_position.y < 22.0f) {
			efx::ArgScale argDive(position, 1.2f);
			efx::TEnemyDive diveFX;

			diveFX.create(&argDive);
			PSStartEnemyDownWatSE(this, 0.3f);
		}
	} else {
		efx::Arg arg(this);
		efx::TPkDiveB pkDiveB;

		pkDiveB.create(&arg);
	}
}

} // namespace Tadpole
} // namespace Game
