#include "Game/enemyInfo.h"
#include "Game/MapMgr.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "types.h"
#include "Game/Entities/Bomb.h"
#include "Game/Entities/BombOtakara.h"

namespace Game {
namespace Bomb {
/*
 * --INFO--
 * Address:	8034A21C
 * Size:	000020
 */
void Obj::setParameters() { EnemyBase::setParameters(); }

/*
 * --INFO--
 * Address:	8034A23C
 * Size:	0000EC
 */
void Obj::onStartCapture()
{
	m_FSM->start(this, BOMB_Wait, nullptr);
	if (m_captureMatrix) {
		Vector3f position = m_captureMatrix->getBasis(3);
		onSetPosition(position);
		m_impVelocity = Vector3f(0.0f);
		m_simVelocity = Vector3f(0.0f);
		setEvent(0, EB_Constraint);
		if (gameSystem && gameSystem->m_mode == GSM_VERSUS_MODE) {
			resetEvent(0, EB_Vulnerable);
		} else {
			setEvent(0, EB_Vulnerable);
		}

		resetEvent(0, EB_Cullable);
	}
}

/*
 * --INFO--
 * Address:	8034A328
 * Size:	000048
 */
void Obj::onEndCapture()
{
	constraintOff();
	resetEvent(0, EB_Vulnerable);
	_2BC            = 1;
	m_captureMatrix = nullptr;
}

/*
 * --INFO--
 * Address:	8034A370
 * Size:	000020
 */
void Obj::birth(Vector3f& position, f32 p1) { EnemyBase::birth(position, p1); }

/*
 * --INFO--
 * Address:	8034A390
 * Size:	000168
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	resetEvent(0, EB_LeaveCarcass);
	resetEvent(0, EB_Flying);
	resetEvent(0, EB_9);

	_2BC      = 0;
	_2BD      = 0;
	_2C8      = 0;
	_2C0      = 0;
	_2C4      = 0;
	m_otakara = nullptr;

	m_FSM->start(this, BOMB_Wait, nullptr);

	if (!isBirthTypeDropGroup()) {
		setEvent(0, EB_Constraint);
		if (mapMgr) {
			Vector3f position = m_position;
			position.y += 20.0f;
			m_position.y = mapMgr->getMinY(position);
		}
	}

	m_curAnim->m_isRunning = false;
	doAnimationUpdateAnimator();

	m_mainMatrix.makeSRT(m_scale, m_rotation, m_position);

	PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_model->m_j3dModel->_24);
	m_model->m_j3dModel->calc();

	m_efxLight->m_mtx = m_model->getJoint("core1")->getWorldMatrix();
}

/*
 * --INFO--
 * Address:	8034A4F8
 * Size:	0001DC
 */
Obj::Obj()
{
	_2BC       = 0;
	_2BD       = 0;
	_2C0       = 0;
	_2C4       = 0;
	_2C8       = 0;
	_2C9       = 0;
	m_FSM      = nullptr;
	m_efxLight = nullptr;
	m_animator = new ProperAnimator;
	setFSM(new FSM);
	m_efxLight = new efx::TBombrockLight;
}

/*
 * --INFO--
 * Address:	8034A720
 * Size:	0000D4
 */
void Obj::doUpdate()
{
	if (_2C9) {
		m_triangleNormal.x *= 0.9f;
		m_triangleNormal.y *= 0.9f;
		m_triangleNormal.z *= 0.9f;
		m_impVelocity.x *= 0.9f;
		if (m_impVelocity.y > 0.0f) {
			m_impVelocity.y *= 0.9f;
		}
		m_impVelocity.z *= 0.9f;
	}

	if (m_curTriangle) {
		m_simVelocity = Vector3f(0.0f);
	} else {
		m_simVelocity = m_impVelocity;
	}

	m_FSM->exec(this);
}

/*
 * --INFO--
 * Address:	8034A7F4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8034A7F8
 * Size:	000004
 */
void Obj::doDebugDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8034A7FC
 * Size:	00002C
 */
void Obj::doEntry()
{
	if (!_2BD) {
		EnemyBase::doEntry();
	}
}

/*
 * --INFO--
 * Address:	8034A828
 * Size:	0001F4
 */
void Obj::doAnimationCullingOff()
{
	m_curAnim->m_isRunning = 0;
	doAnimationUpdateAnimator();
	bool check;
	Vector3f vec = m_mainMatrix.getBasis(3);
	if (m_captureMatrix) {
		check             = false;
		Vector3f checkVec = m_captureMatrix->getBasis(3);
		if (vec.x != checkVec.x || vec.y != checkVec.y || vec.z != checkVec.z) {
			check = true;
			PSMTXCopy(m_captureMatrix->m_matrix.mtxView, m_mainMatrix.m_matrix.mtxView);
		}
	} else {
		check = false;
		if (m_position.x != vec.x || m_position.y != vec.y || m_position.z != vec.z) {
			check = true;
			m_mainMatrix.makeSRT(m_scale, m_rotation, m_position);
		}
	}

	if (check || !isStopMotion()) {
		PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_model->m_j3dModel->_24);
		m_model->m_j3dModel->calc();
		m_collTree->update();
	}
}

/*
 * --INFO--
 * Address:	8034AA1C
 * Size:	00004C
 */
void Obj::doAnimationCullingOn()
{
	if (isAnimStart()) {
		resetEvent(0, EB_Cullable);
	} else {
		EnemyBase::doAnimationCullingOn();
	}
}

/*
 * --INFO--
 * Address:	8034AA68
 * Size:	000134
 */
void Obj::doSimulation(f32 simSpeed)
{
	if (isStickTo()) { }
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	fmr      f31, f1
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034AB44
	lfs      f4, 0x1fc(r31)
	lfs      f0, lbl_8051E330@sda21(r2)
	fmr      f1, f4
	fcmpo    cr0, f4, f0
	bge      lbl_8034AAAC
	fneg     f1, f4

lbl_8034AAAC:
	lfs      f2, lbl_8051E348@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051E330@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f4, f0
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f3, 4(r3)
	bge      lbl_8034AB04
	lfs      f0, lbl_8051E34C@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_8034AB1C

lbl_8034AB04:
	fmuls    f0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_8034AB1C:
	lfs      f0, lbl_8051E330@sda21(r2)
	mr       r3, r31
	stfs     f1, 8(r1)
	addi     r4, r1, 8
	stfs     f0, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "updateStick__Q24Game8CreatureFR10Vector3<f>"
	mr       r3, r31
	bl       updateCell__Q24Game8CreatureFv
	b        lbl_8034AB80

lbl_8034AB44:
	lwz      r4, 0xb8(r31)
	cmplwi   r4, 0
	beq      lbl_8034AB74
	lfs      f2, 0x2c(r4)
	mr       r3, r31
	lfs      f1, 0x1c(r4)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x18c(r31)
	stfs     f1, 0x190(r31)
	stfs     f2, 0x194(r31)
	bl       updateSpheres__Q24Game9EnemyBaseFv
	b        lbl_8034AB80

lbl_8034AB74:
	fmr      f1, f31
	mr       r3, r31
	bl       doSimulation__Q24Game9EnemyBaseFf

lbl_8034AB80:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034AB9C
 * Size:	000050
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.m_position   = m_position;
	param.m_position.y = m_position.y + 2.0f;

	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	param.m_boundingSphere.m_radius   = 30.0f;
	param.m_size                      = 10.0f;
}

/*
 * --INFO--
 * Address:	8034ABEC
 * Size:	000048
 */
bool Obj::needShadow() { return (!EnemyBase::needShadow()) ? false : m_captureMatrix == nullptr; }

/*
 * --INFO--
 * Address:	8034AC34
 * Size:	000080
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (getStateID() == BOMB_Wait && getMotionFrame() == 0.0f && !_2BC) {
		stopMotion();
	}

	resetEvent(0, EB_Vulnerable);
	m_simVelocity = Vector3f(0.0f);
}

/*
 * --INFO--
 * Address:	8034ACB4
 * Size:	000048
 */
void Obj::doStartStoneState(void)
{
	EnemyBase::doStartStoneState();
	m_efxLight->fade();
	_2C8 = 0;
}

/*
 * --INFO--
 * Address:	8034ACFC
 * Size:	000084
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	if (m_otakara && m_otakara->getEnemyTypeID() == EnemyTypeID::EnemyID_BombOtakara) {
		m_otakara->m_targetCreature = nullptr;
	}

	m_efxLight->fade();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	8034AD80
 * Size:	000030
 */
void Obj::doStartMovie() { m_efxLight->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	8034ADB0
 * Size:	000030
 */
void Obj::doEndMovie() { m_efxLight->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	8034ADE0
 * Size:	000074
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (!_2BC || m_curTriangle) {
		if (isEvent(0, EB_Bittered)) {
			_2C4++;
			if (_2C4 > 4) {
				kill(nullptr);
			}
			return true;
		} else {
			EnemyBase::damageCallBack(creature, 0.0f, collpart);
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	8034AE54
 * Size:	000160
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r0, 0xb8(r3)
	cmplwi   r0, 0
	bne      lbl_8034AF98
	lwz      r0, 0x1e0(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8034AF98
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034AF98
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x24
	bne      lbl_8034AF68
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	bne      lbl_8034AF88
	lwz      r0, 0x2c0(r30)
	cmpwi    r0, 0
	bne      lbl_8034AF88
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x10(r1)
	lis      r0, 0x4330
	lfs      f0, 0x194(r30)
	lwz      r3, 0xc0(r30)
	fsubs    f2, f1, f0
	lfs      f1, 8(r1)
	lfs      f0, 0x18c(r30)
	lfs      f4, 0x5b4(r3)
	fsubs    f1, f1, f0
	lwz      r3, 0x894(r3)
	fmuls    f0, f2, f2
	stw      r0, 0x18(r1)
	fmuls    f4, f4, f4
	xoris    r0, r3, 0x8000
	fmadds   f0, f1, f1, f0
	stw      r0, 0x1c(r1)
	lfs      f3, lbl_8051E354@sda21(r2)
	lfd      f1, lbl_8051E360@sda21(r2)
	fdivs    f2, f0, f4
	lfd      f0, 0x18(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r3, 0x24(r1)
	addi     r0, r3, 1
	stw      r0, 0x2c0(r30)
	b        lbl_8034AF88

lbl_8034AF68:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	lfs      f1, lbl_8051E330@sda21(r2)
	lwz      r12, 0x278(r12)
	mtctr    r12
	bctrl

lbl_8034AF88:
	lfs      f0, lbl_8051E330@sda21(r2)
	li       r3, 1
	stfs     f0, 0x20c(r30)
	b        lbl_8034AF9C

lbl_8034AF98:
	li       r3, 0

lbl_8034AF9C:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034AFB4
 * Size:	000008
 */
bool Obj::pressCallBack(Creature*, f32, CollPart*) { return false; }

/*
 * --INFO--
 * Address:	8034AFBC
 * Size:	000078
 */
void Obj::bounceCallback(Sys::Triangle* triangle)
{
	if (_2BC) {
		createBounceEffect(m_position, 0.5f);
		return;
	}

	if (isBirthTypeDropGroup() && getStateID() == BOMB_Wait) {
		createBounceEffect(m_position, 0.5f);
		forceBomb();
	}
}

/*
 * --INFO--
 * Address:	8034B034
 * Size:	00009C
 */
void Obj::collisionCallback(CollEvent& collEvent)
{
	EnemyBase::collisionCallback(collEvent);
	if (isBirthTypeDropGroup() && collEvent.m_collidingCreature && !collEvent.m_collidingCreature->isTeki() && getStateID() == BOMB_Wait) {
		createBounceEffect(m_position, 0.5f);
		forceBomb();
		_2C9 = 1;
	}
}

/*
 * --INFO--
 * Address:	8034B0D0
 * Size:	000060
 */
void Obj::forceBomb()
{
	if (getStateID() == BOMB_Wait) {
		resetEvent(0, EB_Vulnerable);
		m_FSM->transit(this, BOMB_Bomb, nullptr);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
bool Obj::isBombStart(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8034B130
 * Size:	000028
 */
void Obj::bombEffInWater() { EnemyBase::createSplashDownEffect(m_position, 1.3f); }

/*
 * --INFO--
 * Address:	8034B158
 * Size:	00005C
 */
bool Obj::canEat()
{
	if (isAlive() && getStateID() == BOMB_Wait) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8034B1B4
 * Size:	0000D8
 */
bool Obj::isAnimStart()
{
	bool check = false;
	if (isBirthTypeDropGroup() || !(m_toFlick >= C_PROPERPARMS.m_ip01.m_value)) {
		if (!_2BC || m_curTriangle == nullptr) {
			if (!_2C0) {
				check = false;
			} else {

				_2C0++;

				if (_2C0 > C_PROPERPARMS.m_ip02.m_value) {
					check = true;
					_2C0  = 0;
				} else {
					check = false;
				}
			}

			if (check) {
				return true;
			}
		}
	}

	return false;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       isBirthTypeDropGroup__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034B208
	lwz      r3, 0xc0(r31)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lwz      r0, 0x86c(r3)
	lfd      f1, lbl_8051E360@sda21(r2)
	xoris    r0, r0, 0x8000
	lfs      f2, 0x20c(r31)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	beq      lbl_8034B26C

lbl_8034B208:
	lbz      r0, 0x2bc(r31)
	cmplwi   r0, 0
	beq      lbl_8034B220
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	bne      lbl_8034B26C

lbl_8034B220:
	lwz      r3, 0x2c0(r31)
	cmpwi    r3, 0
	bne      lbl_8034B234
	li       r3, 0
	b        lbl_8034B264

lbl_8034B234:
	addi     r0, r3, 1
	stw      r0, 0x2c0(r31)
	lwz      r3, 0xc0(r31)
	lwz      r4, 0x2c0(r31)
	lwz      r0, 0x894(r3)
	cmpw     r4, r0
	ble      lbl_8034B260
	li       r0, 0
	li       r3, 1
	stw      r0, 0x2c0(r31)
	b        lbl_8034B264

lbl_8034B260:
	li       r3, 0

lbl_8034B264:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034B274

lbl_8034B26C:
	li       r3, 1
	b        lbl_8034B278

lbl_8034B274:
	li       r3, 0

lbl_8034B278:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034B36C
 * Size:	000048
 */
bool Obj::isUnderground()
{
	bool result = false;
	if (!isEvent(0, EB_Bittered) && !isStopMotion()) {
		result = true;
	}

	return result;
}

} // namespace Bomb
} // namespace Game
