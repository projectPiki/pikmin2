#include "Game/Entities/OtakaraBase.h"
#include "Game/Entities/Bomb.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Game/ConditionNotStick.h"
#include "efx/TOta.h"

namespace Game {
namespace OtakaraBase {

/*
 * --INFO--
 * Address:	802B624C
 * Size:	000130
 */
Obj::Obj()
{
	m_animator = new ProperAnimator();
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	802B637C
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802B6380
 * Size:	000104
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);

	_2C0 = -1;
	_2C4 = 0.0f;
	resetTreasure();
	_2D0             = 0;
	_2C8             = 12800.0f;
	m_escapeSfxTimer = 0.0f;
	setupEffect();

	if (getEnemyTypeID() == EnemyTypeID::EnemyID_BombOtakara) {
		resetEvent(0, EB_LifegaugeVisible);
		resetEvent(0, EB_LeaveCarcass);
		if (m_dropGroup == 0) {
			initBombOtakara();
		}
		m_FSM->start(this, 11, nullptr);
		return;
	}

	_2E8 = 12800.0f;
	m_FSM->start(this, 2, nullptr);
}

/*
 * --INFO--
 * Address:	802B6490
 * Size:	00005C
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	fallTreasure(true);
	finishChargeEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802B64EC
 * Size:	000034
 */
void Obj::doUpdate() { m_FSM->exec(this); }

/*
 * --INFO--
 * Address:	802B6520
 * Size:	0000F0
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	if (_2C8 < 1.0f) {
		_2C8 += sys->m_deltaTime;
		startDisChargeSE();
		attackTarget();
	}

	if (getEnemyTypeID() == EnemyTypeID::EnemyID_BombOtakara) {
		if (m_targetCreature) {
			if (!m_targetCreature->isAlive()) {
				m_targetCreature = nullptr;
				m_health         = 0.0f;
			} else if (m_targetCreature->isStickTo()) {
				m_targetCreature->endCapture();
				m_targetCreature = nullptr;
				m_health         = 0.0f;
			}
		} else {
			m_health = 0.0f;
		}
	}
}

/*
 * --INFO--
 * Address:	802B6614
 * Size:	00007C
 */
void Obj::doAnimationCullingOff()
{
	EnemyBase::doAnimationCullingOff();
	if (m_treasure) {
		if (!m_treasure->isAlive()) {
			fallTreasure(false);
		} else {
			Matrixf mtx;
			PSMTXIdentity(mtx.m_matrix.mtxView);
			mtx.m_matrix.structView.ty = _2EC;
			m_treasure->updateCapture(mtx);
		}
	}
}

/*
 * --INFO--
 * Address:	802B6690
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802B6694
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802B66B4
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
 * Address:	802B6700
 * Size:	0000EC
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* mat           = m_model->getJoint("otakara")->getWorldMatrix();
	shadowParam.m_position = Vector3f(mat->m_matrix.mtxView[0][3], mat->m_matrix.mtxView[1][3], mat->m_matrix.mtxView[2][3]);
	shadowParam.m_position.y -= 5.0f;

	shadowParam.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);

	if (m_treasure) {
		shadowParam.m_boundingSphere.m_radius = 30.0f;
	} else {
		shadowParam.m_boundingSphere.m_radius = 50.0f;
	}

	if (isEvent(1, EB2_1)) {
		shadowParam.m_boundingSphere.m_radius += 25.0f;
	}

	if (getEnemyTypeID() == EnemyTypeID::EnemyID_BombOtakara) {
		shadowParam.m_size = 12.5f;
	} else {
		shadowParam.m_size = 5.0f;
	}
}

/*
 * --INFO--
 * Address:	802B67EC
 * Size:	000034
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (collpart) {
		damageTreasure(damage);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	802B6820
 * Size:	000078
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (collpart) {
		if (m_treasure) {
			damageTreasure(C_PARMS->m_properParms.m_fp01.m_value);
		} else {
			damageTreasure(damage);
		}
	}

	return EnemyBase::hipdropCallBack(creature, 0.0f, collpart);
}

/*
 * --INFO--
 * Address:	802B6898
 * Size:	000070
 */
bool Obj::earthquakeCallBack(Creature* creature, f32 damage)
{
	if (m_treasure) {
		damageTreasure(C_PARMS->m_properParms.m_fp01.m_value);
	}
	return EnemyBase::earthquakeCallBack(creature, damage);
}

/*
 * --INFO--
 * Address:	802B6908
 * Size:	000024
 */
bool Obj::bombCallBack(Game::Creature* creature, Vector3f& vec, f32 damage)
{
	damageTreasure(damage);
	return true;
}

/*
 * --INFO--
 * Address:	802B692C
 * Size:	00004C
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	fallTreasure(true);
	finishChargeEffect();
}

/*
 * --INFO--
 * Address:	802B6978
 * Size:	00004C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (_2D0 != 0) {
		startChargeEffect();
	}
}

/*
 * --INFO--
 * Address:	802B69C4
 * Size:	00004C
 */
void Obj::doStartEarthquakeState(f32 p1)
{
	EnemyBase::doStartEarthquakeState(p1);
	fallTreasure(true);
	finishChargeEffect();
}

/*
 * --INFO--
 * Address:	802B6A10
 * Size:	00004C
 */
void Obj::doFinishEarthquakeState()
{
	EnemyBase::doFinishEarthquakeState();
	if (_2D0 != 0) {
		startChargeEffect();
	}
}

/*
 * --INFO--
 * Address:	802B6A5C
 * Size:	00004C
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	fallTreasure(true);
	finishChargeEffect();
}

/*
 * --INFO--
 * Address:	802B6AA8
 * Size:	00004C
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
	if (_2D0 != 0) {
		startChargeEffect();
	}
}

/*
 * --INFO--
 * Address:	802B6AF4
 * Size:	000040
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	802B6B38
 * Size:	000064
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
	if (getEnemyTypeID() == EnemyTypeID::EnemyID_BombOtakara) {
		initBombOtakara();
	}
}

/*
 * --INFO--
 * Address:	802B6BA0
 * Size:	000028
 */
void Obj::startCarcassMotion() { EnemyBase::startMotion(11, nullptr); }

/*
 * --INFO--
 * Address:	802B6BC8
 * Size:	00002C
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802B6BF4
 * Size:	00002C
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802B6C20
 * Size:	000140
 */
bool OtakaraBase::Obj::isMovePositionSet(bool ignoringTreasures)
{
	Creature* target = nullptr;
	if (!ignoringTreasures && (_2E8 > C_PARMS->m_properParms.m_fp21.m_value)) {
		target = getNearestTreasure();
	} else {
		_2E8 += sys->m_deltaTime;
	}

	if (target) {
		m_movePosition   = target->getPosition();
		m_targetCreature = target;
	} else {
		ConditionNotStickClientAndItem condition(this, m_treasure);
		Parms* parms = C_PARMS;
		target = EnemyFunc::getNearestPikminOrNavi(this, parms->m_general.m_fov.m_value, parms->m_general.m_sightRadius.m_value, nullptr,
		                                           nullptr, &condition);
		if (target) {
			m_movePosition = getTargetPosition(target);
		}
		m_targetCreature = nullptr;
	}

	if (target) {
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	802B6D60
 * Size:	000148
 */
Pellet* OtakaraBase::Obj::getNearestTreasure()
{
	Pellet* treasure = nullptr;
	f32 sightRadius  = C_PARMS->m_general.m_sightRadius.m_value;
	f32 minDist      = sightRadius * sightRadius;
	PelletIterator iterator;
	iterator.first();

	while (!iterator.isDone()) {
		Pellet* pellet = (Pellet*)(*iterator);
		if (pellet->isAlive() && (pellet->m_captureMatrix == nullptr && pellet->isPickable())) {
			Vector3f position = pellet->getPosition();
			Vector3f sep      = position - m_homePosition;
			f32 territory     = C_PARMS->m_general.m_territoryRadius.m_value;
			if ((SQUARE(sep.x) + SQUARE(sep.z)) < SQUARE(territory)) {
				Vector3f sep2 = m_position;
				sep2 -= position;
				f32 dist2D = SQUARE(sep2.x) + SQUARE(sep2.z);
				if (dist2D < minDist) {
					treasure = pellet;
					minDist  = dist2D;
				}
			}
		}
		iterator.next();
	}
	return treasure;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r29, r3
	addi     r3, r1, 0x14
	lwz      r4, 0xc0(r29)
	li       r31, 0
	lfs      f0, 0x3d4(r4)
	fmuls    f31, f0, f0
	bl       __ct__Q24Game14PelletIteratorFv
	addi     r3, r1, 0x14
	bl       first__Q24Game14PelletIteratorFv
	b        lbl_802B6E70

lbl_802B6DA8:
	addi     r3, r1, 0x14
	bl       __ml__Q24Game14PelletIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B6E68
	lwz      r0, 0xb8(r30)
	cmplwi   r0, 0
	bne      lbl_802B6E68
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1e4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B6E68
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, 0x10(r1)
	lfs      f0, 0x1a0(r29)
	lwz      r3, 0xc0(r29)
	fsubs    f2, f4, f0
	lfs      f5, 8(r1)
	lfs      f1, 0x198(r29)
	lfs      f0, 0x35c(r3)
	fsubs    f3, f5, f1
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802B6E68
	lfs      f0, 0x194(r29)
	lfs      f1, 0x18c(r29)
	fsubs    f0, f0, f4
	fsubs    f1, f1, f5
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_802B6E68
	mr       r31, r30
	fmr      f31, f0

lbl_802B6E68:
	addi     r3, r1, 0x14
	bl       next__Q24Game14PelletIteratorFv

lbl_802B6E70:
	addi     r3, r1, 0x14
	bl       isDone__Q24Game14PelletIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B6DA8
	mr       r3, r31
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B6EA8
 * Size:	0001C8
 */
Vector3f Obj::getTargetPosition(Creature* target)
{
	Vector3f otakaraPosition = getPosition();
	Vector3f targetPosition  = target->getPosition();
	Vector3f sep             = otakaraPosition - targetPosition;

	_normalise(sep);
	Parms* parms = C_PARMS;
	sep *= parms->m_general.m_moveSpeed.m_value;

	sep += otakaraPosition;

	f32 territory = parms->m_general.m_territoryRadius.m_value;
	if ((sep.x * sep.x + sep.z * sep.z) < SQUARE(territory)) {
		_normalise(sep);
		sep *= territory;
		sep += m_homePosition;
	}
	return sep;
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
	lfs      f0, lbl_8051C290@sda21(r2)
	fsubs    f8, f30, f2
	lfs      f5, 0x198(r30)
	lfs      f6, 0x19c(r30)
	fmuls    f3, f1, f1
	fmadds   f2, f8, f8, f0
	lfs      f7, 0x1a0(r30)
	fadds    f3, f3, f2
	fcmpo    cr0, f3, f0
	ble      lbl_802B6F60
	ble      lbl_802B6F64
	frsqrte  f2, f3
	fmuls    f3, f2, f3
	b        lbl_802B6F64

lbl_802B6F60:
	fmr      f3, f0

lbl_802B6F64:
	lfs      f2, lbl_8051C290@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_802B6F84
	lfs      f2, lbl_8051C298@sda21(r2)
	fdivs    f2, f2, f3
	fmuls    f8, f8, f2
	fmuls    f0, f0, f2
	fmuls    f1, f1, f2

lbl_802B6F84:
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
	ble      lbl_802B7030
	fsubs    f1, f1, f7
	lfs      f0, lbl_8051C290@sda21(r2)
	fsubs    f8, f8, f5
	fmuls    f3, f1, f1
	fmadds   f2, f8, f8, f0
	fadds    f3, f3, f2
	fcmpo    cr0, f3, f0
	ble      lbl_802B6FF4
	ble      lbl_802B6FF8
	frsqrte  f2, f3
	fmuls    f3, f2, f3
	b        lbl_802B6FF8

lbl_802B6FF4:
	fmr      f3, f0

lbl_802B6FF8:
	lfs      f2, lbl_8051C290@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_802B7018
	lfs      f2, lbl_8051C298@sda21(r2)
	fdivs    f2, f2, f3
	fmuls    f8, f8, f2
	fmuls    f0, f0, f2
	fmuls    f1, f1, f2

lbl_802B7018:
	fmuls    f8, f8, f9
	fmuls    f0, f0, f9
	fmuls    f1, f1, f9
	fadds    f8, f8, f5
	fadds    f0, f0, f6
	fadds    f1, f1, f7

lbl_802B7030:
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
 * Address:	802B7070
 * Size:	000094
 */
void Obj::resetTreasure()
{
	m_treasure       = nullptr;
	m_treasureHealth = 0.0f;
	_2EC             = 0.0f;
	m_cellRadius     = C_PARMS->m_general.m_cellRadius.m_value;

	CollPart* collpart   = m_collTree->getCollPart(0x626F6479);
	collpart->m_radius   = 10.0f;
	collpart->m_offset.y = 0.0f;

	CollPart* basepart   = m_collTree->m_part;
	basepart->m_radius   = 20.0f;
	basepart->m_offset.y = 0.0f;

	EnemyFunc::flickStickPikmin(this, 1.0f, 0.0f, 0.0f, -1000.0f, nullptr);
}

/*
 * --INFO--
 * Address:	802B7104
 * Size:	00010C
 */
bool Obj::isTakeTreasure()
{
	if (m_targetCreature) {
		Vector3f targetPos = m_targetCreature->getPosition();
	}
	return false;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r31, 0x230(r3)
	cmplwi   r31, 0
	beq      lbl_802B71DC
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 8(r1)
	mr       r3, r31
	lfs      f30, 0xc(r1)
	lfs      f29, 0x10(r1)
	bl       getPickRadius__Q24Game6PelletFv
	lfs      f2, lbl_8051C2BC@sda21(r2)
	lfs      f0, lbl_8051C2AC@sda21(r2)
	fadds    f5, f2, f1
	fcmpo    cr0, f5, f0
	bge      lbl_802B7184
	fmr      f5, f0

lbl_802B7184:
	lfs      f0, 0x190(r30)
	lfs      f2, 0x18c(r30)
	fsubs    f3, f30, f0
	lfs      f1, 0x194(r30)
	fsubs    f2, f31, f2
	lfs      f0, lbl_8051C290@sda21(r2)
	fsubs    f1, f29, f1
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802B71C8
	ble      lbl_802B71CC
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802B71CC

lbl_802B71C8:
	fmr      f1, f0

lbl_802B71CC:
	fcmpo    cr0, f1, f5
	bge      lbl_802B71DC
	li       r3, 1
	b        lbl_802B71E0

lbl_802B71DC:
	li       r3, 0

lbl_802B71E0:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802B7210
 * Size:	00024C
 */
void Obj::takeTreasure()
{
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
	mr       r29, r3
	lwz      r30, 0x230(r3)
	cmplwi   r30, 0
	beq      lbl_802B7424
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B73F4
	lwz      r0, 0xb8(r30)
	cmplwi   r0, 0
	bne      lbl_802B73F4
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B73F4
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1e4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B73F4
	lwz      r31, 0x230(r29)
	cmplwi   r31, 0
	beq      lbl_802B7358
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 8(r1)
	mr       r3, r31
	lfs      f30, 0xc(r1)
	lfs      f29, 0x10(r1)
	bl       getPickRadius__Q24Game6PelletFv
	lfs      f2, lbl_8051C2BC@sda21(r2)
	lfs      f0, lbl_8051C2AC@sda21(r2)
	fadds    f3, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_802B7300
	fmr      f3, f0

lbl_802B7300:
	lfs      f0, 0x190(r29)
	lfs      f2, 0x18c(r29)
	fsubs    f4, f30, f0
	lfs      f1, 0x194(r29)
	fsubs    f2, f31, f2
	lfs      f0, lbl_8051C290@sda21(r2)
	fsubs    f1, f29, f1
	fmuls    f4, f4, f4
	fmuls    f5, f1, f1
	fmadds   f1, f2, f2, f4
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802B7344
	ble      lbl_802B7348
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802B7348

lbl_802B7344:
	fmr      f1, f0

lbl_802B7348:
	fcmpo    cr0, f1, f3
	bge      lbl_802B7358
	li       r0, 1
	b        lbl_802B735C

lbl_802B7358:
	li       r0, 0

lbl_802B735C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_802B73F4
	stw      r30, 0x2e0(r29)
	mr       r3, r30
	lwz      r4, 0xc0(r29)
	lfs      f0, 0x81c(r4)
	stfs     f0, 0x2e4(r29)
	bl       getCylinderHeight__Q24Game6PelletFv
	lfs      f0, lbl_8051C2C4@sda21(r2)
	mr       r3, r30
	fmuls    f0, f0, f1
	stfs     f0, 0x2ec(r29)
	bl       getPickRadius__Q24Game6PelletFv
	stfs     f1, 0x2f0(r29)
	lis      r3, 0x626F6479@ha
	addi     r4, r3, 0x626F6479@l
	lwz      r3, 0x114(r29)
	bl       getCollPart__8CollTreeFUl
	mr       r31, r3
	mr       r3, r30
	bl       getPickRadius__Q24Game6PelletFv
	stfs     f1, 0x1c(r31)
	mr       r3, r30
	lfs      f0, 0x2ec(r29)
	stfs     f0, 0x24(r31)
	lwz      r4, 0x114(r29)
	lwz      r30, 0(r4)
	bl       getPickRadius__Q24Game6PelletFv
	lfs      f2, lbl_8051C2B8@sda21(r2)
	li       r0, 1
	fadds    f0, f2, f1
	stfs     f0, 0x1c(r30)
	lfs      f0, 0x2ec(r29)
	stfs     f0, 0x24(r30)
	lfs      f0, 0x2f0(r29)
	fadds    f0, f0, f2
	stfs     f0, 0x2f0(r29)
	b        lbl_802B73F8

lbl_802B73F4:
	li       r0, 0

lbl_802B73F8:
	clrlwi.  r0, r0, 0x18
	beq      lbl_802B7424
	lwz      r3, 0x174(r29)
	addi     r4, r2, lbl_8051C29C@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r4, r3
	lwz      r3, 0x2e0(r29)
	bl       startCapture__Q24Game8CreatureFP7Matrixf
	li       r3, 1
	b        lbl_802B7428

lbl_802B7424:
	li       r3, 0

lbl_802B7428:
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
 * Address:	802B745C
 * Size:	0000F8
 */
bool Obj::fallTreasure(bool check)
{
	if (m_targetCreature) {
		m_targetCreature->endCapture();
		if (check) { }
	}
	return false;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x2e0(r3)
	cmplwi   r3, 0
	beq      lbl_802B7538
	bl       endCapture__Q24Game8CreatureFv
	clrlwi.  r0, r31, 0x18
	beq      lbl_802B74BC
	lfs      f1, lbl_8051C290@sda21(r2)
	addi     r4, r1, 8
	lfs      f0, lbl_8051C2C8@sda21(r2)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	lwz      r3, 0x2e0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_802B74BC:
	mr       r3, r30
	bl       createTreasureFallEffect__Q34Game11OtakaraBase3ObjFv
	li       r0, 0
	lis      r3, 0x626F6479@ha
	stw      r0, 0x2e0(r30)
	addi     r4, r3, 0x626F6479@l
	lfs      f0, lbl_8051C290@sda21(r2)
	stfs     f0, 0x2e4(r30)
	stfs     f0, 0x2ec(r30)
	lwz      r3, 0xc0(r30)
	lfs      f0, 0x1cc(r3)
	stfs     f0, 0x2f0(r30)
	lwz      r3, 0x114(r30)
	bl       getCollPart__8CollTreeFUl
	lfs      f0, lbl_8051C2B8@sda21(r2)
	li       r4, 0
	lfs      f2, lbl_8051C290@sda21(r2)
	stfs     f0, 0x1c(r3)
	lfs      f0, lbl_8051C2BC@sda21(r2)
	fmr      f3, f2
	stfs     f2, 0x24(r3)
	mr       r3, r30
	lfs      f1, lbl_8051C298@sda21(r2)
	lwz      r5, 0x114(r30)
	lfs      f4, lbl_8051C2C0@sda21(r2)
	lwz      r5, 0(r5)
	stfs     f0, 0x1c(r5)
	stfs     f2, 0x24(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	li       r3, 1
	b        lbl_802B753C

lbl_802B7538:
	li       r3, 0

lbl_802B753C:
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
 * Address:	802B7554
 * Size:	000028
 */
bool Obj::isDropTreasure()
{
	// != 0.0f gives incorrect asm smh
	if ((m_treasureHealth) && (m_treasureHealth > 0.0f)) {
		return false;
	}
	return true;
}

/*
 * --INFO--
 * Address:	802B757C
 * Size:	000054
 */
void Obj::damageTreasure(f32 damage)
{
	if (m_treasure) {
		m_treasureHealth -= damage;
		if (m_treasureHealth < 0.0f) {
			m_treasureHealth = 0.0f;
		}
		return;
	}

	addDamage(damage, 1.0f);
}

/*
 * --INFO--
 * Address:	802B75D0
 * Size:	0001A8
 */
void Obj::attackTarget()
{
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
	addi     r3, r1, 0x24
	lwz      r5, 0xc0(r30)
	addi     r4, r1, 0x14
	lfs      f2, 0x190(r30)
	lfs      f0, 0x564(r5)
	lfs      f1, 0x58c(r5)
	lfs      f3, 0x5b4(r5)
	fadds    f31, f2, f0
	lfs      f0, 0x18c(r30)
	fsubs    f30, f2, f1
	fmuls    f29, f3, f3
	stfs     f0, 0x14(r1)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x1c(r1)
	stfs     f3, 0x20(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x44
	stb      r0, 0x40(r1)
	addi     r4, r1, 0x24
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x44
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802B7738

lbl_802B7668:
	addi     r3, r1, 0x44
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B7730
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802B76C4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B7730

lbl_802B76C4:
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
	ble      lbl_802B7730
	fcmpo    cr0, f30, f0
	bge      lbl_802B7730
	lfs      f0, 0x194(r30)
	lfs      f1, 0x18c(r30)
	fsubs    f0, f0, f3
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f29
	bge      lbl_802B7730
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x2fc(r12)
	mtctr    r12
	bctrl

lbl_802B7730:
	addi     r3, r1, 0x44
	bl       next__Q24Game12CellIteratorFv

lbl_802B7738:
	addi     r3, r1, 0x44
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B7668
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
 * Address:	802B777C
 * Size:	000134
 */
void Obj::createTreasureFallEffect()
{
	Matrixf* mtx         = m_model->getJoint("center")->getWorldMatrix();
	Vector3f translation = Vector3f(mtx->m_matrix.structView.tx, mtx->m_matrix.structView.ty, mtx->m_matrix.structView.tz);

	f32 scale = 0.0285f * (m_cellRadius - 10.0f);
	if (scale < 1.0f) {
		scale = 0.5f * (1.0f + scale);
	}

	efx::ArgScale arg(translation, scale);
	efx::TOtaPartsoff treasureFallFX;

	treasureFallFX.create(&arg);
	getJAIObject()->startSound(PSSE_EN_OTAKARA_DROP_ITEM, 0);
}

/*
 * --INFO--
 * Address:	802B78B0
 * Size:	000088
 */
void Obj::startEscapeSE()
{
	if (m_targetCreature == nullptr) {
		if (m_escapeSfxTimer > 3.0f) {
			getJAIObject()->startSound(PSSE_EN_OTAKARA_STANDUP, 0);
			m_escapeSfxTimer = 0.0f;
		} else {
			m_escapeSfxTimer += sys->m_deltaTime;
		}
	}
}

/*
 * --INFO--
 * Address:	802B7938
 * Size:	0000FC
 */
void Obj::initBombOtakara()
{
	if (m_targetCreature == nullptr) {
		Bomb::Mgr* mgr = static_cast<Bomb::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Bomb));
		if (mgr) {
			EnemyBirthArg birthArg;
			birthArg.m_faceDir = m_faceDir;
			m_targetCreature   = mgr->birth(birthArg);
			if (m_targetCreature) {
				m_targetCreature->init(nullptr);
				m_targetCreature->startCapture(m_model->getJoint("otakara")->getWorldMatrix());
				static_cast<Bomb::Obj*>(m_targetCreature)->m_otakara = this;
				_2EC                                                 = 10.0f;
				m_cellRadius                                         = 25.0f;

				CollPart* collpart   = m_collTree->getCollPart(0x626F6479);
				collpart->m_radius   = 15.0f;
				collpart->m_offset.y = _2EC;
				CollPart* basepart   = m_collTree->m_part;
				basepart->m_radius   = 25.0f;
				basepart->m_offset.y = _2EC;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802B7A34
 * Size:	000068
 */
bool Obj::isTransitChaseState()
{
	if (isEvent(0, EB_Collision) || isEvent(0, EB_Damage) || (m_stuckPikminCount != 0)) {
		return true;
	}

	Parms* parms = C_PARMS;
	Navi* navi = EnemyFunc::getNearestNavi(this, parms->m_general.m_fov.m_value, parms->m_general.m_sightRadius.m_value, nullptr, nullptr);
	return (navi != nullptr);
}

/*
 * --INFO--
 * Address:	802B7A9C
 * Size:	00008C
 */
bool Obj::stimulateBomb()
{
	_2E8 += sys->m_deltaTime;
	if ((_2E8 > 1.5f) && (m_targetCreature != nullptr) && (m_targetCreature->isAlive())) {
		resetEvent(0, EB_Cullable);
		static_cast<Bomb::Obj*>(m_targetCreature)->forceBomb();
	}

	return isEvent(0, EB_Cullable);
}

/*
 * --INFO--
 * Address:	802B7B28
 * Size:	000038
 */
Creature* Obj::getChaseTargetCreature()
{
	Parms* parms = C_PARMS;
	return EnemyFunc::getNearestPikminOrNavi(this, parms->m_general.m_fov.m_value, parms->m_general.m_sightRadius.m_value, nullptr, nullptr,
	                                         nullptr);
}
} // namespace OtakaraBase
} // namespace Game
