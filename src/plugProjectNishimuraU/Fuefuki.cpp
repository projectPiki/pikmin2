#include "Game/Entities/Fuefuki.h"
#include "Game/Interaction.h"
#include "Game/Footmark.h"
#include "Game/GameSystem.h"
#include "efx/TFuebugOnpa.h"
#include "Dolphin/rand.h"
#include "Radar.h"

namespace Game {

/*
 * --INFO--
 * Address:	8029C1C4
 * Size:	000058
 */
bool InteractFuefukiTimerReset::actEnemy(EnemyBase* enemy)
{
	if (enemy->getEnemyTypeID() == EnemyTypeID::EnemyID_Fuefuki) {
		static_cast<Fuefuki::Obj*>(enemy)->_2D4 = 5.0f;
		return true;
	}

	return false;
}

namespace Fuefuki {

/*
 * --INFO--
 * Address:	8029C21C
 * Size:	000140
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);
	createFootmarks();
	createEffect();
}

/*
 * --INFO--
 * Address:	8029C35C
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8029C360
 * Size:	000030
 */
void Obj::birth(Vector3f& position, f32 angle)
{
	EnemyBase::birth(position, angle);
	if (Radar::mgr) {
		Radar::mgr->bornFuefuki();
	}
}

/*
 * --INFO--
 * Address:	8029C390
 * Size:	000088
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	m_dropGroup = 0;
	_2C0        = 0;
	resetAppearTimer();
	m_airborneTimer = 0.0f;
	resetWhisleTimer(true);
	_2D4 = 0.0f;
	_2D0 = 0.0f;

	m_stateID = FUEFUKI_NULL;
	m_FSM->start(this, FUEFUKI_Land, nullptr);
}

/*
 * --INFO--
 * Address:	8029C418
 * Size:	000054
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishWhisleEffect();
	if (Radar::mgr) {
		Radar::mgr->dieFuefuki();
	}

	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	8029C46C
 * Size:	000078
 */
void Obj::doUpdate()
{
	m_FSM->exec(this);
	m_appearTimer += sys->m_deltaTime;
	if (_2D4 > 0.0f) {
		_2D4--;
	}

	updateFootmarks();
}

/*
 * --INFO--
 * Address:	8029C4E4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8029C4E8
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8029C508
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
 * Address:	8029C554
 * Size:	0000A4
 */
void Obj::getShadowParam(ShadowParam& param)
{
	Sys::Sphere sphere;
	getBoundingSphere(sphere);
	param.m_position.x                = sphere.m_position.x;
	param.m_position.y                = m_position.y + 5.0f;
	param.m_position.z                = sphere.m_position.z;
	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_1)) {
		param.m_boundingSphere.m_radius = 75.0f;
	} else {
		param.m_boundingSphere.m_radius = 50.0f;
	}

	param.m_size = 15.0f;
}

/*
 * --INFO--
 * Address:	8029C5F8
 * Size:	000068
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && _2C0 && !isEvent(0, EB_Bittered)) {
		m_FSM->transit(this, FUEFUKI_Struggle, nullptr);
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	8029C660
 * Size:	000068
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && _2C0 && !isEvent(0, EB_Bittered)) {
		m_FSM->transit(this, FUEFUKI_Struggle, nullptr);
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	8029C6C8
 * Size:	000044
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	if (_2D0 > 0.0f) {
		finishWhisleEffect();
	}
}

/*
 * --INFO--
 * Address:	8029C70C
 * Size:	000044
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (_2D0 > 0.0f) {
		startWhisle();
	}
}

/*
 * --INFO--
 * Address:	8029C750
 * Size:	000044
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	if (_2D0 > 0.0f) {
		finishWhisleEffect();
	}
}

/*
 * --INFO--
 * Address:	8029C794
 * Size:	000044
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
	if (_2D0 > 0.0f) {
		startWhisle();
	}
}

/*
 * --INFO--
 * Address:	8029C7D8
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	8029C80C
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	8029C840
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(9, nullptr); }

/*
 * --INFO--
 * Address:	8029C868
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	8029C888
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8029C8A8
 * Size:	0000C0
 */
Vector3f Obj::getOffsetForMapCollision()
{
	int stateID = getStateID();
	if (stateID == FUEFUKI_Dead || stateID == FUEFUKI_Struggle) {
		Sys::Sphere sphere;
		getBoundingSphere(sphere);
		sphere.m_position.x -= m_position.x;
		sphere.m_position.y = 0.0f;
		sphere.m_position.z -= m_position.z;
		return sphere.m_position;

	} else {
		return Vector3f::zero;
	}
}

/*
 * --INFO--
 * Address:	8029C968
 * Size:	000078
 */
void Obj::resetAppearTimer()
{
	f32 weight    = C_PROPERPARMS.m_maxGroundTime.m_value - C_PROPERPARMS.m_minGroundTime.m_value;
	m_appearTimer = randWeightFloat(weight);
}

/*
 * --INFO--
 * Address:	8029C9E0
 * Size:	00002C
 */
void Obj::resetWhisleTimer(bool check)
{
	if (check) {
		m_whistleTimer = C_PROPERPARMS.m_fp12.m_value - C_PROPERPARMS.m_fp11.m_value;
	} else {
		m_whistleTimer = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8029CA0C
 * Size:	000078
 */
bool Obj::isWhisleTimeMax()
{
	if (_2D4 > 0.0f) {
		if (m_stuckPikminCount != 0) {
			if (m_whistleTimer > C_PROPERPARMS.m_fp12.m_value) {
				return true;
			}
		} else if (m_whistleTimer > C_PROPERPARMS.m_fp13.m_value) {
			return true;
		}
	} else if (m_whistleTimer > C_PROPERPARMS.m_fp12.m_value) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8029CA84
 * Size:	000038
 */
void Obj::startWhisle()
{
	resetEvent(0, EB_Cullable);
	m_whistleTimer = 0.0f;
	_2D0           = 0.0f;
	startWhisleEffect();
}

/*
 * --INFO--
 * Address:	8029CABC
 * Size:	000324
 */
void Obj::updateWhisle()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lwz      r4, sys@sda21(r13)
	mr       r31, r3
	lfs      f2, 0x2d0(r3)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_8051BCA0@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2d0(r3)
	lfs      f1, 0x2d0(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8029CB04
	stfs     f0, 0x2d0(r31)

lbl_8029CB04:
	lwz      r4, 0xc0(r31)
	mr       r3, r31
	lfs      f1, 0x2d0(r31)
	lfs      f0, 0x5b4(r4)
	fmuls    f31, f1, f0
	fmr      f1, f31
	bl       updateWhisleEffect__Q34Game7Fuefuki3ObjFf
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	fmuls    f31, f31, f31
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x1c(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x20(r1)
	stw      r3, 0x24(r1)
	bne      lbl_8029CB64
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_8029CD90

lbl_8029CB64:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_8029CBD0

lbl_8029CB7C:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029CD90
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)

lbl_8029CBD0:
	lwz      r12, 0x1c(r1)
	addi     r3, r1, 0x1c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029CB7C
	b        lbl_8029CD90

lbl_8029CBF0:
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029CCD4
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029CCD4
	mr       r3, r30
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029CCD4
	mr       r3, r30
	mr       r4, r31
	bl       isMyPikmin__Q24Game4PikiFPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029CCD4
	mr       r4, r30
	addi     r3, r1, 0x10
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x194(r31)
	lfs      f0, 0x18(r1)
	lfs      f2, 0x18c(r31)
	fsubs    f1, f1, f0
	lfs      f0, 0x10(r1)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f31
	bge      lbl_8029CCD4
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game15InteractFueFuki@ha
	addi     r4, r4, __vt__Q24Game11Interaction@l
	stw      r31, 0xc(r1)
	addi     r0, r3, __vt__Q24Game15InteractFueFuki@l
	mr       r3, r30
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8029CCD4:
	lwz      r0, 0x28(r1)
	cmplwi   r0, 0
	bne      lbl_8029CD00
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_8029CD90

lbl_8029CD00:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_8029CD74

lbl_8029CD20:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029CD90
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)

lbl_8029CD74:
	lwz      r12, 0x1c(r1)
	addi     r3, r1, 0x1c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029CD20

lbl_8029CD90:
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x20(r1)
	cmplw    r4, r3
	bne      lbl_8029CBF0
	lwz      r3, mgr__5Radar@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8029CDC0
	bl       fuefuki__Q25Radar3MgrFv

lbl_8029CDC0:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029CDE0
 * Size:	000038
 */
void Obj::finishWhisle()
{
	setEvent(0, EB_Cullable);
	m_whistleTimer = 0.0f;
	_2D0           = 0.0f;
	finishWhisleEffect();
}

/*
 * --INFO--
 * Address:	8029CE18
 * Size:	0002A0
 */
void Obj::setTargetPosition(bool)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	clrlwi.  r0, r4, 0x18
	mr       r31, r4
	mr       r30, r3
	beq      lbl_8029CF20
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051BCB8@sda21(r2)
	cmplwi   r3, 0
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051BCC0@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051BCB0@sda21(r2)
	fmuls    f1, f1, f2
	fdivs    f0, f1, f0
	fmr      f30, f0
	beq      lbl_8029CED4
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_8029CED4
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051BCB8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051BCC4@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051BCB0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051BCA8@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fadds    f31, f0, f1
	b        lbl_8029CFC8

lbl_8029CED4:
	lwz      r3, 0xc0(r30)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, 0xc0(r30)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051BCB8@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051BCB0@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, 0x384(r3)
	fmuls    f2, f31, f2
	fdivs    f1, f2, f1
	fadds    f31, f0, f1
	b        lbl_8029CFC8

lbl_8029CF20:
	lwz      r3, 0xc0(r30)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fsubs    f30, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, 0xc0(r30)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051BCB8@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051BCB0@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, 0x384(r3)
	fmuls    f2, f30, f2
	fdivs    f1, f2, f1
	fadds    f31, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfd      f2, lbl_8051BCB8@sda21(r2)
	addi     r3, r3, atanTable___5JMath@l
	stw      r0, 0x10(r1)
	lfs      f0, lbl_8051BCC8@sda21(r2)
	lfd      f1, 0x10(r1)
	lfs      f4, lbl_8051BCB0@sda21(r2)
	fsubs    f5, f1, f2
	lfs      f3, 0x18c(r30)
	lfs      f1, 0x198(r30)
	lfs      f2, 0x194(r30)
	fmuls    f5, f0, f5
	lfs      f0, 0x1a0(r30)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	fdivs    f30, f5, f4
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fadds    f0, f1, f30
	lfs      f1, lbl_8051BCCC@sda21(r2)
	fadds    f30, f1, f0

lbl_8029CFC8:
	lfs      f0, lbl_8051BC9C@sda21(r2)
	fmr      f1, f30
	fcmpo    cr0, f30, f0
	bge      lbl_8029CFDC
	fneg     f1, f30

lbl_8029CFDC:
	lfs      f3, lbl_8051BCD0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051BC9C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lfs      f1, 0x1a0(r30)
	fcmpo    cr0, f30, f0
	lfs      f4, 0x19c(r30)
	fctiwz   f0, f2
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f2, f31, f0, f1
	bge      lbl_8029D040
	lfs      f0, lbl_8051BCD4@sda21(r2)
	fmuls    f0, f30, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_8029D058

lbl_8029D040:
	fmuls    f0, f30, f3
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_8029D058:
	lfs      f0, 0x198(r30)
	clrlwi.  r0, r31, 0x18
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2dc(r30)
	stfs     f4, 0x2e0(r30)
	stfs     f2, 0x2e4(r30)
	beq      lbl_8029D090
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r30, 0x2dc
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x2e0(r30)

lbl_8029D090:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D0B8
 * Size:	0001E0
 */
bool Obj::isJumpAway()
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	stw      r29, 0x94(r1)
	mr       r29, r3
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x2c4(r29)
	lfs      f0, 0x81c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8029D0F8
	li       r3, 1
	b        lbl_8029D274

lbl_8029D0F8:
	lfs      f1, 0x2d4(r29)
	lfs      f0, lbl_8051BC9C@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_8029D270
	lfs      f1, 0x3ac(r3)
	addi     r3, r1, 0x24
	lfs      f0, 0x18c(r29)
	addi     r4, r1, 0x14
	fmuls    f31, f1, f1
	stfs     f0, 0x14(r1)
	lfs      f0, 0x190(r29)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x194(r29)
	stfs     f0, 0x1c(r1)
	stfs     f1, 0x20(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x44
	stb      r0, 0x40(r1)
	addi     r4, r1, 0x24
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x44
	bl       first__Q24Game12CellIteratorFv
	b        lbl_8029D260

lbl_8029D158:
	addi     r3, r1, 0x44
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029D258
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	mr       r30, r3
	bne      lbl_8029D1FC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029D1FC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029D1FC
	mr       r3, r31
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029D1FC
	mr       r3, r31
	mr       r4, r29
	bl       isMyPikmin__Q24Game4PikiFPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029D1FC
	li       r30, 1

lbl_8029D1FC:
	clrlwi.  r0, r30, 0x18
	beq      lbl_8029D258
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x194(r29)
	lfs      f0, 0x10(r1)
	lfs      f2, 0x18c(r29)
	fsubs    f1, f1, f0
	lfs      f0, 8(r1)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f31
	bge      lbl_8029D258
	lwz      r4, 0xc0(r29)
	li       r3, 1
	lfs      f0, 0x81c(r4)
	stfs     f0, 0x2c4(r29)
	b        lbl_8029D274

lbl_8029D258:
	addi     r3, r1, 0x44
	bl       next__Q24Game12CellIteratorFv

lbl_8029D260:
	addi     r3, r1, 0x44
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029D158

lbl_8029D270:
	li       r3, 0

lbl_8029D274:
	psq_l    f31, 168(r1), 0, qr0
	lwz      r0, 0xb4(r1)
	lfd      f31, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D298
 * Size:	000048
 */
bool Obj::isArriveTarget()
{
	if (m_curWallTri || sqrDistanceXZ(m_position, m_targetPosition) < 625.0f) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8029D2E0
 * Size:	000050
 */
void Obj::createFootmarks()
{
	m_footmarks = new Footmarks;
	m_footmarks->alloc(10);
}

/*
 * --INFO--
 * Address:	8029D330
 * Size:	0000BC
 */
void Obj::updateFootmarks()
{
	f32 timer = (m_footmarks->_10 - (int)gameSystem->m_frameTimer);

	timer = (timer > 0.0f) ? timer : -timer;

	if (timer > 2.5f) {
		Footmark mark;
		mark.m_position = getPosition();
		m_footmarks->add(mark);
	}
}

/*
 * --INFO--
 * Address:	8029D3EC
 * Size:	00019C
 */
void Obj::createEffect()
{
	m_efxWhistle = new efx::TCursor;
	m_efxWhistle->init(3, 10);
	m_efxOnpa = new efx::TFuebugOnpa;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	li       r3, 0x290
	stw      r29, 0x14(r1)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8029D4D0
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx7TCursor@ha
	addi     r5, r4, __vt__Q23efx5TBase@l
	addi     r29, r31, 0x14
	stw      r5, 0(r31)
	addi     r0, r3, __vt__Q23efx7TCursor@l
	lis      r3, __vt__Q23efx11TOneEmitter@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	stw      r0, 0(r31)
	addi     r6, r3, __vt__Q23efx11TOneEmitter@l
	addi     r3, r4, __vt__18JPAEmitterCallBack@l
	li       r4, 0
	stw      r5, 4(r31)
	addi     r5, r6, 0x14
	li       r0, 0x19
	stw      r3, 8(r31)
	mr       r3, r29
	stw      r6, 4(r31)
	stw      r5, 8(r31)
	stw      r4, 0xc(r31)
	sth      r0, 0x10(r31)
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q23efx7Context@ha
	lis      r4, __ct__Q23efx7ContextFv@ha
	addi     r0, r3, __vt__Q23efx7Context@l
	li       r6, 0x24
	stw      r0, 0(r29)
	li       r0, 0
	lis      r3, __dt__Q23efx7ContextFv@ha
	addi     r4, r4, __ct__Q23efx7ContextFv@l
	stw      r0, 0x10(r29)
	addi     r5, r3, __dt__Q23efx7ContextFv@l
	addi     r3, r31, 0x3c
	li       r7, 0x10
	stw      r0, 0xc(r29)
	stw      r0, 8(r29)
	stw      r0, 4(r29)
	stw      r0, 0x24(r31)
	stw      r0, 0x20(r31)
	stw      r0, 0x1c(r31)
	stw      r0, 0x18(r31)
	bl       __construct_array
	mr       r3, r31
	li       r4, 0
	li       r5, 0x10
	bl       init__Q23efx7TCursorFll

lbl_8029D4D0:
	stw      r31, 0x2ec(r30)
	li       r4, 3
	li       r5, 0xa
	lwz      r3, 0x2ec(r30)
	bl       init__Q23efx7TCursorFll
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8029D568
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx11TFuebugOnpa@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx11TFuebugOnpa@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x6b
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_8029D568:
	stw      r3, 0x2f0(r30)
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
 * Address:	8029D588
 * Size:	00009C
 */
void Obj::startWhisleEffect()
{
	efx::ArgCursor argCursor(m_position, 1.0f);
	m_efxWhistle->create(&argCursor);

	m_efxOnpa->m_position = &m_position;
	m_efxOnpa->create(nullptr);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, __vt__Q23efx3Arg@ha
	lis      r4, __vt__Q23efx9ArgCursor@ha
	stw      r0, 0x34(r1)
	addi     r0, r5, __vt__Q23efx3Arg@l
	lfs      f0, lbl_8051BC9C@sda21(r2)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx9ArgCursor@l
	addi     r4, r1, 8
	lfs      f1, 0x18c(r3)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x190(r3)
	stfs     f1, 0x10(r1)
	lfs      f1, 0x194(r3)
	stfs     f1, 0x14(r1)
	stw      r0, 8(r1)
	stfs     f0, 0x18(r1)
	lwz      r3, 0x2ec(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
	addi     r0, r31, 0x18c
	li       r4, 0
	stw      r0, 0x10(r3)
	lwz      r3, 0x2f0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D624
 * Size:	000078
 */
void Obj::updateWhisleEffect(f32)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, __vt__Q23efx3Arg@ha
	lis      r4, __vt__Q23efx9ArgCursor@ha
	stw      r0, 0x34(r1)
	addi     r0, r5, __vt__Q23efx3Arg@l
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx9ArgCursor@l
	addi     r4, r1, 8
	lfs      f0, 0x18c(r3)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x194(r3)
	stfs     f0, 0x14(r1)
	stw      r0, 8(r1)
	stfs     f1, 0x18(r1)
	lwz      r3, 0x2ec(r3)
	bl       update__Q23efx7TCursorFPQ23efx3Arg
	lwz      r4, 0xc0(r31)
	lwz      r3, 0x2ec(r31)
	lfs      f0, 0x5dc(r4)
	stfs     f0, 0x28c(r3)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D69C
 * Size:	000050
 */
void Obj::finishWhisleEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2ec(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

// } // namespace Game

// namespace efx {

// /*
//  * --INFO--
//  * Address:	8029D6EC
//  * Size:	00002C
//  */
// void TCursor::fade()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 4(r3)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// namespace Game {

// } // namespace Game

/*
 * --INFO--
 * Address:	8029D718
 * Size:	000078
 */
void Obj::createDownEffect(f32)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	lwz      r12, 0(r3)
	fmr      f31, f1
	mr       r31, r3
	addi     r4, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x190(r31)
	fmr      f1, f31
	lfs      f2, 0x14(r1)
	mr       r3, r31
	lfs      f0, 0x1c(r1)
	addi     r4, r1, 8
	stfs     f2, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D790
 * Size:	000048
 */
void Obj::createEfxHamon()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029D7C4
	mr       r3, r31
	bl       createEfxHamon__Q24Game9EnemyBaseFv

lbl_8029D7C4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029D7D8
 * Size:	000050
 */
void Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2ec(r3)
	lwzu     r12, 4(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

// } // namespace efx

// namespace efx {

// /*
//  * --INFO--
//  * Address:	8029D828
//  * Size:	00001C
//  */
// void TOneEmitter::endDemoDrawOn()
// {
// 	/*
// 	lwz      r3, 8(r3)
// 	cmplwi   r3, 0
// 	beqlr
// 	lwz      r0, 0xf4(r3)
// 	rlwinm   r0, r0, 0, 0x1e, 0x1c
// 	stw      r0, 0xf4(r3)
// 	blr
// 	*/
// }

// namespace Game {

// } // namespace Game

/*
 * --INFO--
 * Address:	8029D844
 * Size:	000050
 */
void Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2ec(r3)
	lwzu     r12, 4(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

// } // namespace efx

// namespace efx {

// /*
//  * --INFO--
//  * Address:	8029D894
//  * Size:	00001C
//  */
// void TOneEmitter::startDemoDrawOff()
// {
// 	/*
// 	lwz      r3, 8(r3)
// 	cmplwi   r3, 0
// 	beqlr
// 	lwz      r0, 0xf4(r3)
// 	ori      r0, r0, 4
// 	stw      r0, 0xf4(r3)
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8029D8B0
//  * Size:	00000C
//  */
// void ArgCursor::getName()
// {
// 	/*
// 	lis      r3, lbl_80488FA8@ha
// 	addi     r3, r3, lbl_80488FA8@l
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8029D8BC
//  * Size:	00009C
//  */
// TFuebugOnpa::~TFuebugOnpa()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_8029D93C
// 	lis      r3, __vt__Q23efx11TFuebugOnpa@ha
// 	addi     r3, r3, __vt__Q23efx11TFuebugOnpa@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x14
// 	stw      r0, 4(r30)
// 	beq      lbl_8029D92C
// 	lis      r3, __vt__Q23efx9TChasePos@ha
// 	addi     r3, r3, __vt__Q23efx9TChasePos@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x14
// 	stw      r0, 4(r30)
// 	beq      lbl_8029D92C
// 	lis      r4, __vt__Q23efx5TSync@ha
// 	addi     r3, r30, 4
// 	addi     r5, r4, __vt__Q23efx5TSync@l
// 	li       r4, 0
// 	stw      r5, 0(r30)
// 	addi     r0, r5, 0x14
// 	stw      r0, 4(r30)
// 	bl       __dt__18JPAEmitterCallBackFv

// lbl_8029D92C:
// 	extsh.   r0, r31
// 	ble      lbl_8029D93C
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_8029D93C:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// namespace Game {

// } // namespace Game

/*
 * --INFO--
 * Address:	8029D958
 * Size:	000004
 */
void Obj::inWaterCallback(WaterBox*) { }

/*
 * --INFO--
 * Address:	8029D95C
 * Size:	000004
 */
void Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	8029D960
 * Size:	000008
 */
EnemyTypeID::EEnemyTypeID Obj::getEnemyTypeID() { return EnemyTypeID::EnemyID_Fuefuki; }

/*
 * --INFO--
 * Address:	8029D968
 * Size:	000008
 */
Footmarks* Fuefuki::Obj::getFootmarks()
{
	/*
	lwz      r3, 0x2e8(r3)
	blr
	*/
}
} // namespace Fuefuki
} // namespace Game
