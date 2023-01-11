#include "Game/Entities/BigFoot.h"
#include "Game/EnemyFunc.h"
#include "Game/IKSystemBase.h"
#include "nans.h"

namespace Game {
namespace BigFoot {

/*
 * --INFO--
 * Address:	802C7EF0
 * Size:	000024
 */
void BigFootGroundCallBack::invokeOnGround(int p1, WaterBox* wbox) { m_obj->createOnGroundEffect(p1, wbox); }

/*
 * --INFO--
 * Address:	802C7F14
 * Size:	000024
 */
void BigFootGroundCallBack::invokeOffGround(int p1, WaterBox* wbox) { m_obj->createOffGroundEffect(p1, wbox); }

/*
 * --INFO--
 * Address:	802C7F38
 * Size:	00016C
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);

	createIKSystem();
	createShadowSystem();
	createEffect();
	createMaterialAnimation();
}

/*
 * --INFO--
 * Address:	802C80A4
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802C80A8
 * Size:	000148
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	mr       r3, r31
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	lwz      r3, 0x1e0(r31)
	li       r4, -1
	lfs      f1, lbl_8051C728@sda21(r2)
	li       r0, 0
	rlwinm   r5, r3, 0, 0x14, 0x12
	mr       r3, r31
	stw      r5, 0x1e0(r31)
	lwz      r5, 0x1e0(r31)
	rlwinm   r5, r5, 0, 0x19, 0x17
	stw      r5, 0x1e0(r31)
	stfs     f1, 0x2c0(r31)
	stw      r4, 0x2c4(r31)
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2c8(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2d0(r31)
	stfs     f1, 0x2d4(r31)
	stb      r0, 0x2dc(r31)
	stb      r0, 0x2dd(r31)
	bl       resetFlickWalkTimeMax__Q34Game7BigFoot3ObjFv
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x2de(r31)
	bl       setupIKSystem__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       setupShadowSystem__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       setupCollision__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       setupEffect__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       startFurEffect__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       resetBossAppearBGM__Q34Game7BigFoot3ObjFv
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	mr       r3, r31
	bl       startMaterialAnimation__Q34Game7BigFoot3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802C81C8
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_802C81C8
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_802C81DC

lbl_802C81C8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1dc(r12)
	mtctr    r12
	bctrl

lbl_802C81DC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C81F0
 * Size:	000044
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishFurEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802C8234
 * Size:	000050
 */
void Obj::doUpdate()
{
	m_fsm->exec(this);
	updatePinchLife();
	updateIKSystem();
}

/*
 * --INFO--
 * Address:	802C8284
 * Size:	000034
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/*
 * --INFO--
 * Address:	802C82B8
 * Size:	000098
 */
void Obj::doAnimationCullingOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 0x188(r3)
	stb      r0, 0x24(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       doAnimationIKSystem__Q34Game7BigFoot3ObjFv
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r31)
	bl       update__8CollTreeFv
	mr       r3, r31
	bl       doAnimationShadowSystem__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       updateMaterialAnimation__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       finishAnimationIKSystem__Q34Game7BigFoot3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C8350
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802C8354
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802C8374
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	m_fsm = fsm;
	m_fsm->init(this);
	m_currentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	802C83C0
 * Size:	00003C
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.m_position                  = m_position;
	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	param.m_boundingSphere.m_radius   = 0.1f;
	param.m_size                      = 0.1f;
}

/*
 * --INFO--
 * Address:	802C83FC
 * Size:	000050
 */
bool Obj::needShadow()
{
	if (EnemyBase::needShadow()) {
		return true;
	} else {
		return (u8)(getStateID() == 2);
	}
}

/*
 * --INFO--
 * Address:	802C844C
 * Size:	00009C
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	or.      r31, r4, r4
	fmr      f31, f1
	mr       r30, r3
	beq      lbl_802C84C4
	cmplwi   r5, 0
	beq      lbl_802C84C4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C84C4
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C84C4
	fmr      f1, f31
	lfs      f2, lbl_8051C72C@sda21(r2)
	mr       r3, r30
	bl       addDamage__Q24Game9EnemyBaseFff
	li       r3, 1
	b        lbl_802C84C8

lbl_802C84C4:
	li       r3, 0

lbl_802C84C8:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C84E8
 * Size:	0001AC
 */
void Obj::collisionCallback(CollEvent& event)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r4
	stw      r29, 0x34(r1)
	mr       r29, r3
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_802C8660
	lwz      r31, 0(r30)
	cmplwi   r31, 0
	beq      lbl_802C8660
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	beq      lbl_802C8660
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C8660
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	beq      lbl_802C8660
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802C858C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C85EC

lbl_802C858C:
	lwz      r4, 8(r30)
	mr       r3, r29
	bl       isCollisionCheck__Q34Game7BigFoot3ObjFP8CollPart
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C8660
	lwz      r5, 0xc0(r29)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r5)
	addi     r4, r4, __vt__Q24Game11Interaction@l
	addi     r5, r3, __vt__Q24Game13InteractPress@l
	mr       r3, r31
	stw      r4, 0x18(r1)
	addi     r4, r1, 0x18
	stw      r29, 0x1c(r1)
	stw      r5, 0x18(r1)
	stfs     f0, 0x20(r1)
	stw      r0, 0x24(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802C8660

lbl_802C85EC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C8660
	lwz      r4, 8(r30)
	mr       r3, r29
	bl       isCollisionCheck__Q34Game7BigFoot3ObjFP8CollPart
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C8660
	lwz      r5, 4(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051C734@sda21(r2)
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q24Game14InteractAttack@l
	mr       r3, r31
	stw      r29, 0xc(r1)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	stfs     f0, 0x10(r1)
	stw      r5, 0x14(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802C8660:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x240(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C8694
 * Size:	000044
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishPinchJointEffect();
	finishFurEffect();
	startStoneStateBossAttackLoopBGM();
}

/*
 * --INFO--
 * Address:	802C86D8
 * Size:	00006C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, -1000.0f, nullptr);
	if (_2DD) {
		startPinchJointEffect();
	}

	startFurEffect();
	finishStoneStateBossAttackLoopBGM();
}

/*
 * --INFO--
 * Address:	802C8744
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802C8764
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802C8784
 * Size:	000060
 */
void Obj::getThrowupItemPosition(Vector3f* position)
{
	Matrixf* mat = m_model->getJoint("kosi")->getWorldMatrix();
	*position    = mat->getBasis(3);
	position->y -= 100.0f;
}

/*
 * --INFO--
 * Address:	802C87E4
 * Size:	000014
 */
void Obj::getThrowupItemVelocity(Vector3f* velocity)
{
	velocity->z = 0.0f;
	velocity->y = 0.0f;
	velocity->x = 0.0f;
}

/*
 * --INFO--
 * Address:	802C87F8
 * Size:	00008C
 */
void Obj::resetFlickWalkTimeMax()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lfs      f0, lbl_8051C74C@sda21(r2)
	lwz      r3, 0xc0(r3)
	lfs      f31, 0xa24(r3)
	fmuls    f30, f0, f31
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_8051C758@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_8051C750@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	fadds    f0, f30, f0
	stfs     f0, 0x2d8(r31)
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C8884
 * Size:	00008C
 */
void Obj::setFlickWalkTimeMax()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lfs      f0, lbl_8051C74C@sda21(r2)
	lwz      r3, 0xc0(r3)
	lfs      f31, 0xa4c(r3)
	fmuls    f30, f0, f31
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_8051C758@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_8051C750@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	fadds    f0, f30, f0
	stfs     f0, 0x2d8(r31)
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C8910
 * Size:	0003F0
 */
void Obj::getTargetPosition()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	mr       r31, r3
	lfs      f1, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lwz      r7, 0xc0(r3)
	fsubs    f2, f1, f0
	lfs      f1, 0x18c(r3)
	lfs      f4, 0x198(r3)
	lfs      f0, 0x35c(r7)
	fsubs    f3, f1, f4
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802C8CBC
	lbz      r0, 0x2de(r31)
	cmplwi   r0, 0
	beq      lbl_802C8A9C
	lwz      r3, 0x2e4(r31)
	lfs      f1, lbl_8051C760@sda21(r2)
	lfs      f0, 0x34(r3)
	fmuls    f30, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lwz      r4, 0x2e4(r31)
	stw      r0, 0x20(r1)
	lfd      f1, lbl_8051C758@sda21(r2)
	lfd      f0, 0x20(r1)
	lwz      r3, 0xc0(r31)
	fsubs    f0, f0, f1
	lfs      f3, lbl_8051C750@sda21(r2)
	lfs      f1, 0x34(r4)
	lfs      f2, lbl_8051C768@sda21(r2)
	fmuls    f6, f30, f0
	lfs      f4, lbl_8051C764@sda21(r2)
	lfs      f5, 0x1fc(r31)
	lfs      f0, lbl_8051C728@sda21(r2)
	fdivs    f6, f6, f3
	lfs      f3, 0x9fc(r3)
	fsubs    f1, f6, f1
	fmuls    f1, f2, f1
	fmuls    f1, f4, f1
	fadds    f4, f5, f1
	fcmpo    cr0, f4, f0
	bge      lbl_802C8A14
	lfs      f0, lbl_8051C76C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_802C8A38

lbl_802C8A14:
	lfs      f0, lbl_8051C770@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_802C8A38:
	lfs      f1, 0x18c(r31)
	lfs      f0, lbl_8051C728@sda21(r2)
	fmadds   f1, f3, f2, f1
	fcmpo    cr0, f4, f0
	stfs     f1, 0x2c8(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2cc(r31)
	lwz      r4, 0xc0(r31)
	bge      lbl_802C8A60
	fneg     f4, f4

lbl_802C8A60:
	lfs      f0, lbl_8051C770@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f2, 0x9fc(r4)
	fmuls    f1, f4, f0
	lfs      f0, 0x194(r31)
	fctiwz   f1, f1
	stfd     f1, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2d0(r31)
	b        lbl_802C8CD0

lbl_802C8A9C:
	lis      r5, "__vt__23Condition<Q24Game4Piki>"@ha
	lis      r4, __vt__Q24Game23ConditionNotStickClient@ha
	addi     r6, r5, "__vt__23Condition<Q24Game4Piki>"@l
	stw      r31, 0xc(r1)
	addi     r0, r4, __vt__Q24Game23ConditionNotStickClient@l
	addi     r5, r1, 8
	stw      r6, 8(r1)
	li       r4, 0
	stw      r0, 8(r1)
	lfs      f1, 0x424(r7)
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_802C8B08
	mr       r4, r3
	addi     r3, r1, 0x10
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2c8(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x2d0(r31)
	b        lbl_802C8CD0

lbl_802C8B08:
	lfs      f1, 0x194(r31)
	lfs      f0, 0x2d0(r31)
	lfs      f2, 0x18c(r31)
	fsubs    f3, f1, f0
	lfs      f1, 0x2c8(r31)
	lfs      f0, lbl_8051C774@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802C8CD0
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fsubs    f30, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lis      r3, atanTable___5JMath@ha
	lwz      r4, 0xc0(r31)
	addi     r3, r3, atanTable___5JMath@l
	stw      r0, 0x38(r1)
	lfd      f1, lbl_8051C758@sda21(r2)
	lfd      f0, 0x38(r1)
	lfs      f5, lbl_8051C750@sda21(r2)
	fsubs    f0, f0, f1
	lfs      f3, 0x18c(r31)
	lfs      f1, 0x198(r31)
	lfs      f4, 0x384(r4)
	fmuls    f6, f30, f0
	lfs      f2, 0x194(r31)
	fsubs    f1, f3, f1
	lfs      f0, 0x1a0(r31)
	fdivs    f3, f6, f5
	fadds    f31, f4, f3
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f30, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	lfd      f2, lbl_8051C758@sda21(r2)
	stw      r0, 0x30(r1)
	lfs      f3, lbl_8051C764@sda21(r2)
	lfd      f0, 0x30(r1)
	lfs      f1, lbl_8051C750@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_8051C778@sda21(r2)
	lfs      f0, lbl_8051C728@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f1, f3, f1
	fadds    f1, f30, f1
	fadds    f3, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_802C8C18
	lfs      f0, lbl_8051C76C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_802C8C3C

lbl_802C8C18:
	lfs      f0, lbl_8051C770@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_802C8C3C:
	lfs      f1, 0x198(r31)
	lfs      f0, lbl_8051C728@sda21(r2)
	fmadds   f1, f31, f2, f1
	fcmpo    cr0, f3, f0
	stfs     f1, 0x2c8(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2cc(r31)
	bge      lbl_802C8C88
	lfs      f0, lbl_8051C76C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_802C8CAC

lbl_802C8C88:
	lfs      f0, lbl_8051C770@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_802C8CAC:
	lfs      f0, 0x1a0(r31)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2d0(r31)
	b        lbl_802C8CD0

lbl_802C8CBC:
	stfs     f4, 0x2c8(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2d0(r31)

lbl_802C8CD0:
	mr       r3, r31
	addi     r4, r31, 0x2c8
	bl       "setIKSystemTargetPosition__Q34Game7BigFoot3ObjFR10Vector3<f>"
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	lwz      r0, 0x84(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C8D00
 * Size:	00010C
 */
void Obj::createIKSystem()
{
	m_IKSystemMgr    = new IKSystemMgr;
	m_IKSystemParms  = new IKSystemParms;
	m_groundCallBack = new BigFootGroundCallBack(this);
}

/*
 * --INFO--
 * Address:	802C8E0C
 * Size:	000124
 */
void Obj::setupIKSystem()
{
	m_IKSystemMgr->init(this, nullptr);

	char* lfoot[] = { "lfoot1jnt", "lfoot2jnt", "lfoot3jnt" };
	char* rfoot[] = { "rfoot1jnt", "rfoot2jnt", "rfoot3jnt" };
	char* lhand[] = { "lhand1jnt", "lhand2jnt", "lhand3jnt" };
	char* rhand[] = { "rhand1jnt", "rhand2jnt", "rhand3jnt" };

	char** joints[] = { rhand, lhand, rfoot, lfoot };

	m_IKSystemMgr->setupJoint(m_model, 0, joints[0]);
	m_IKSystemMgr->setupJoint(m_model, 1, joints[1]);
	m_IKSystemMgr->setupJoint(m_model, 2, joints[2]);
	m_IKSystemMgr->setupJoint(m_model, 3, joints[3]);
	m_IKSystemMgr->setupCallBack(m_model, "rhand3jnt");

	setIKParameter();
	m_IKSystemMgr->setParameters(m_IKSystemParms);
	m_IKSystemMgr->m_jointGroundCallBack = m_groundCallBack;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, 0x2e0(r3)
	bl
	init__Q24Game11IKSystemMgrFPQ24Game9EnemyBasePQ24Game19JointGroundCallBack
	lis      r3, lbl_8048B778@ha
	addi     r6, r1, 8
	addi     r27, r3, lbl_8048B778@l
	li       r5, 0
	lwz      r28, 0(r27)
	lwz      r29, 4(r27)
	lwz      r30, 8(r27)
	lwz      r12, 0xc(r27)
	lwz      r11, 0x10(r27)
	lwz      r10, 0x14(r27)
	lwz      r9, 0x18(r27)
	lwz      r8, 0x1c(r27)
	lwz      r7, 0x20(r27)
	lwz      r4, 0x24(r27)
	lwz      r3, 0x28(r27)
	lwz      r0, 0x2c(r27)
	stw      r28, 8(r1)
	stw      r29, 0xc(r1)
	stw      r30, 0x10(r1)
	stw      r12, 0x14(r1)
	stw      r11, 0x18(r1)
	stw      r10, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r8, 0x24(r1)
	stw      r7, 0x28(r1)
	stw      r4, 0x2c(r1)
	stw      r3, 0x30(r1)
	stw      r0, 0x34(r1)
	lwz      r3, 0x2e0(r31)
	lwz      r4, 0x174(r31)
	bl       setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
	lwz      r3, 0x2e0(r31)
	addi     r6, r1, 0x14
	lwz      r4, 0x174(r31)
	li       r5, 1
	bl       setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
	lwz      r3, 0x2e0(r31)
	addi     r6, r1, 0x20
	lwz      r4, 0x174(r31)
	li       r5, 2
	bl       setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
	lwz      r3, 0x2e0(r31)
	addi     r6, r1, 0x2c
	lwz      r4, 0x174(r31)
	li       r5, 3
	bl       setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
	lis      r4, lbl_8048B700@ha
	lwz      r3, 0x2e0(r31)
	addi     r5, r4, lbl_8048B700@l
	lwz      r4, 0x174(r31)
	bl       setupCallBack__Q24Game11IKSystemMgrFPQ28SysShape5ModelPc
	mr       r3, r31
	bl       setIKParameter__Q34Game7BigFoot3ObjFv
	lwz      r3, 0x2e0(r31)
	lwz      r4, 0x2e4(r31)
	bl       setParameters__Q24Game11IKSystemMgrFPQ24Game13IKSystemParms
	lwz      r0, 0x2e8(r31)
	lwz      r3, 0x2e0(r31)
	stw      r0, 0x94(r3)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C8F30
 * Size:	000124
 */
void Obj::setIKParameter()
{
	/*
	lwz      r4, 0x2e4(r3)
	li       r0, 0xc
	lfs      f2, lbl_8051C738@sda21(r2)
	stw      r0, 0(r4)
	lfs      f1, lbl_8051C7A4@sda21(r2)
	lwz      r4, 0x2e4(r3)
	lfs      f0, lbl_8051C74C@sda21(r2)
	stfs     f2, 4(r4)
	lwz      r4, 0x2e4(r3)
	stfs     f1, 8(r4)
	lwz      r4, 0x2e4(r3)
	stfs     f0, 0x28(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x334(r5)
	stfs     f0, 0x38(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x2e4(r5)
	stfs     f0, 0x2c(r4)
	lbz      r0, 0x2de(r3)
	cmplwi   r0, 0
	beq      lbl_802C8FF0
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x90c(r5)
	stfs     f0, 0x14(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x934(r5)
	stfs     f0, 0x18(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x95c(r5)
	stfs     f0, 0x1c(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x9ac(r5)
	stfs     f0, 0x20(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x984(r5)
	stfs     f0, 0x24(r4)
	lwz      r4, 0xc0(r3)
	lwz      r3, 0x2e4(r3)
	lfs      f0, 0x9d4(r4)
	stfs     f0, 0x10(r3)
	blr

lbl_802C8FF0:
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x81c(r5)
	stfs     f0, 0x14(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x844(r5)
	stfs     f0, 0x18(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x86c(r5)
	stfs     f0, 0x1c(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x8bc(r5)
	stfs     f0, 0x20(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2e4(r3)
	lfs      f0, 0x894(r5)
	stfs     f0, 0x24(r4)
	lwz      r4, 0xc0(r3)
	lwz      r3, 0x2e4(r3)
	lfs      f0, 0x8e4(r4)
	stfs     f0, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C9054
 * Size:	000020
 */
void Obj::setIKSystemTargetPosition(Vector3f& targetPos) { m_IKSystemMgr->m_targetPosition = targetPos; }

/*
 * --INFO--
 * Address:	802C9074
 * Size:	000060
 */
void Obj::updateIKSystem()
{
	m_IKSystemMgr->doUpdate();
	m_position   = Vector3f(m_IKSystemMgr->_38);
	m_faceDir    = m_IKSystemMgr->m_faceDir;
	m_rotation.y = m_faceDir;
}

/*
 * --INFO--
 * Address:	802C90D4
 * Size:	000060
 */
void Obj::doAnimationIKSystem()
{
	m_IKSystemMgr->setAnimationCallBack();
	Vector3f translation = Vector3f(m_IKSystemMgr->m_traceCentrePosition);
	m_objMatrix.makeSRT(m_scale, m_rotation, translation);
}

/*
 * --INFO--
 * Address:	802C9134
 * Size:	000024
 */
void Obj::finishAnimationIKSystem() { m_IKSystemMgr->resetAnimationCallBack(); }

/*
 * --INFO--
 * Address:	802C9158
 * Size:	000024
 */
void Obj::startProgramedIK() { m_IKSystemMgr->startProgramedIK(); }

/*
 * --INFO--
 * Address:	802C917C
 * Size:	000024
 */
void Obj::startIKMotion() { m_IKSystemMgr->startIKMotion(); }

/*
 * --INFO--
 * Address:	802C91A0
 * Size:	000024
 */
void Obj::finishIKMotion() { m_IKSystemMgr->finishIKMotion(); }

/*
 * --INFO--
 * Address:	802C91C4
 * Size:	000024
 */
void Obj::forceFinishIKMotion() { m_IKSystemMgr->forceFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802C91E8
 * Size:	000024
 */
bool Obj::isFinishIKMotion() { return m_IKSystemMgr->isFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802C920C
 * Size:	000024
 */
void Obj::startBlendMotion() { m_IKSystemMgr->startBlendMotion(); }

/*
 * --INFO--
 * Address:	802C9230
 * Size:	000024
 */
void Obj::finishBlendMotion() { m_IKSystemMgr->finishBlendMotion(); }

/*
 * --INFO--
 * Address:	802C9254
 * Size:	000020
 */
Vector3f Obj::getTraceCentrePosition() { return m_IKSystemMgr->m_traceCentrePosition; }

/*
 * --INFO--
 * Address:	802C9274
 * Size:	000024
 */
bool Obj::isCollisionCheck(CollPart* collpart) { return m_IKSystemMgr->isCollisionCheck(collpart); }

/*
 * --INFO--
 * Address:	802C9298
 * Size:	000048
 */
void Obj::createShadowSystem() { m_shadowMgr = new BigFootShadowMgr(this); }

/*
 * --INFO--
 * Address:	802C92E0
 * Size:	000074
 */
void Obj::setupShadowSystem()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lwz      r3, 0x2ec(r3)
	bl       init__Q34Game7BigFoot16BigFootShadowMgrFv
	li       r29, 0
	mr       r30, r27

lbl_802C9304:
	li       r28, 0
	mr       r31, r30

lbl_802C930C:
	lwz      r3, 0x2ec(r27)
	mr       r4, r29
	mr       r5, r28
	addi     r6, r31, 0x2f0
	bl       "setJointPosPtr__Q34Game7BigFoot16BigFootShadowMgrFiiP10Vector3<f>"
	addi     r28, r28, 1
	addi     r31, r31, 0xc
	cmpwi    r28, 4
	blt      lbl_802C930C
	addi     r29, r29, 1
	addi     r30, r30, 0x30
	cmpwi    r29, 4
	blt      lbl_802C9304
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C9354
 * Size:	000024
 */
void Obj::doAnimationShadowSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2ec(r3)
	bl       update__Q34Game7BigFoot16BigFootShadowMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C9378
 * Size:	000054
 */
void Obj::createMaterialAnimation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0xc
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_802C93B0
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys15MatLoopAnimator@ha
	addi     r0, r3, __vt__Q23Sys15MatLoopAnimator@l
	stw      r0, 0(r31)

lbl_802C93B0:
	stw      r31, 0x4a8(r30)
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
 * Address:	802C93CC
 * Size:	00003C
 */
void Obj::startMaterialAnimation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x4a8(r3)
	lwz      r4, 0x180(r4)
	lwz      r12, 0(r3)
	lwz      r4, 0x44(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C9408
 * Size:	0000F0
 */
void Obj::updateMaterialAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x2dc(r3)
	cmplwi   r0, 0
	beq      lbl_802C94A8
	lwz      r4, 0x4a8(r31)
	lwz      r3, 4(r4)
	lfs      f31, 8(r4)
	cmplwi   r3, 0
	beq      lbl_802C944C
	bl       getFrameMax__Q23Sys16MatBaseAnimationFv
	b        lbl_802C9450

lbl_802C944C:
	lfs      f1, lbl_8051C728@sda21(r2)

lbl_802C9450:
	lfs      f0, lbl_8051C7A8@sda21(r2)
	fcmpo    cr0, f31, f1
	lfs      f2, lbl_8051C72C@sda21(r2)
	fsubs    f0, f1, f0
	fdivs    f31, f2, f0
	bge      lbl_802C9478
	lwz      r3, 0x4a8(r31)
	lfs      f1, lbl_8051C794@sda21(r2)
	bl       animate__Q23Sys15MatBaseAnimatorFf
	b        lbl_802C9484

lbl_802C9478:
	lwz      r3, 0x4a8(r31)
	lfs      f1, lbl_8051C728@sda21(r2)
	bl       animate__Q23Sys15MatBaseAnimatorFf

lbl_802C9484:
	lfs      f1, 0x2d4(r31)
	lfs      f0, lbl_8051C728@sda21(r2)
	fsubs    f1, f1, f31
	stfs     f1, 0x2d4(r31)
	lfs      f1, 0x2d4(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_802C94DC
	stfs     f0, 0x2d4(r31)
	b        lbl_802C94DC

lbl_802C94A8:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x200(r31)
	lfs      f0, 0x104(r3)
	lfs      f2, lbl_8051C72C@sda21(r2)
	fdivs    f0, f1, f0
	lfs      f1, lbl_8051C7A8@sda21(r2)
	lwz      r3, 0x4a8(r31)
	fsubs    f0, f2, f0
	fmuls    f1, f1, f0
	bl       setCurrentFrame__Q23Sys15MatBaseAnimatorFf
	lwz      r3, 0x4a8(r31)
	lfs      f1, lbl_8051C728@sda21(r2)
	bl       animate__Q23Sys15MatBaseAnimatorFf

lbl_802C94DC:
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
 * Address:	802C94F8
 * Size:	000090
 */
void Obj::setupCollision()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_8048B7A8@ha
	stw      r0, 0x34(r1)
	addi     r6, r4, lbl_8048B7A8@l
	stw      r31, 0x2c(r1)
	addi     r31, r1, 8
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r5, 0(r6)
	lwz      r4, 4(r6)
	lwz      r3, 8(r6)
	lwz      r0, 0xc(r6)
	stw      r5, 8(r1)
	stw      r4, 0xc(r1)
	stw      r3, 0x10(r1)
	stw      r0, 0x14(r1)

lbl_802C9544:
	lwz      r3, 0x114(r29)
	lwz      r4, 0(r31)
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	beq      lbl_802C955C
	bl       makeTubeTree__8CollPartFv

lbl_802C955C:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 4
	blt      lbl_802C9544
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C9588
 * Size:	0000A4
 */
void Obj::createItemAndEnemy()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	addi     r3, r30, 0x250
	bl       isNull__Q34Game9PelletMgr15OtakaraItemCodeFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C9614
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x44
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r31, r3, r3
	beq      lbl_802C9614
	addi     r3, r1, 0x14
	bl       __ct__Q24Game13EnemyBirthArgFv
	lfs      f0, 0x1fc(r30)
	mr       r3, r30
	addi     r4, r1, 0x14
	stfs     f0, 0x20(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x268(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051C728@sda21(r2)
	mr       r3, r31
	lfs      f1, lbl_8051C748@sda21(r2)
	addi     r4, r1, 0x14
	stfs     f0, 8(r1)
	addi     r6, r1, 8
	li       r5, 0x1e
	stfs     f0, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl
"createGroupByBigFoot__Q34Game11TamagoMushi3MgrFRQ24Game13EnemyBirthArgiR10Vector3<f>f"

lbl_802C9614:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C962C
 * Size:	0000C8
 */
void Obj::startBossChargeBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802C969C
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C969C
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C96A0

lbl_802C969C:
	li       r31, 1

lbl_802C96A0:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C96C4
	lis      r3, lbl_8048B7B8@ha
	lis      r5, lbl_8048B7D0@ha
	addi     r3, r3, lbl_8048B7B8@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B7D0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C96C4:
	mr       r3, r30
	li       r4, 2
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
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
 * Address:	802C96F4
 * Size:	0000C8
 */
void Obj::startBossAttackLoopBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802C9764
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C9764
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C9768

lbl_802C9764:
	li       r31, 1

lbl_802C9768:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C978C
	lis      r3, lbl_8048B7B8@ha
	lis      r5, lbl_8048B7D0@ha
	addi     r3, r3, lbl_8048B7B8@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B7D0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C978C:
	mr       r3, r30
	li       r4, 8
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
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
 * Address:	802C97BC
 * Size:	0000C8
 */
void Obj::finishBossAttackLoopBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802C982C
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C982C
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C9830

lbl_802C982C:
	li       r31, 1

lbl_802C9830:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C9854
	lis      r3, lbl_8048B7B8@ha
	lis      r5, lbl_8048B7D0@ha
	addi     r3, r3, lbl_8048B7B8@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B7D0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C9854:
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
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
 * Address:	802C9884
 * Size:	0000D4
 */
void Obj::startStoneStateBossAttackLoopBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lbz      r0, 0x2de(r3)
	cmplwi   r0, 0
	beq      lbl_802C9940
	lwz      r30, 0x28c(r3)
	li       r31, 0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802C9900
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C9900
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C9904

lbl_802C9900:
	li       r31, 1

lbl_802C9904:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C9928
	lis      r3, lbl_8048B7B8@ha
	lis      r5, lbl_8048B7D0@ha
	addi     r3, r3, lbl_8048B7B8@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B7D0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C9928:
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl

lbl_802C9940:
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
 * Address:	802C9958
 * Size:	0000D4
 */
void Obj::finishStoneStateBossAttackLoopBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lbz      r0, 0x2de(r3)
	cmplwi   r0, 0
	beq      lbl_802C9A14
	lwz      r30, 0x28c(r3)
	li       r31, 0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802C99D4
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C99D4
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C99D8

lbl_802C99D4:
	li       r31, 1

lbl_802C99D8:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C99FC
	lis      r3, lbl_8048B7B8@ha
	lis      r5, lbl_8048B7D0@ha
	addi     r3, r3, lbl_8048B7B8@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B7D0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C99FC:
	mr       r3, r30
	li       r4, 8
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl

lbl_802C9A14:
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
 * Address:	802C9A2C
 * Size:	0000FC
 */
void Obj::updateBossBGM()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802C9AA4
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C9AA4
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C9AA8

lbl_802C9AA4:
	li       r31, 1

lbl_802C9AA8:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C9ACC
	lis      r3, lbl_8048B7B8@ha
	lis      r5, lbl_8048B7D0@ha
	addi     r3, r3, lbl_8048B7B8@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B7D0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C9ACC:
	lwz      r0, 0x1f4(r29)
	cmpwi    r0, 0
	beq      lbl_802C9AF4
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	b        lbl_802C9B0C

lbl_802C9AF4:
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl

lbl_802C9B0C:
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
 * Address:	802C9B28
 * Size:	0000BC
 */
void Obj::resetBossAppearBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802C9B98
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C9B98
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C9B9C

lbl_802C9B98:
	li       r31, 1

lbl_802C9B9C:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C9BC0
	lis      r3, lbl_8048B7B8@ha
	lis      r5, lbl_8048B7D0@ha
	addi     r3, r3, lbl_8048B7B8@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B7D0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C9BC0:
	mr       r3, r30
	li       r4, 0
	bl       setAppearFlag__Q23PSM9EnemyBossFb
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
 * Address:	802C9BE4
 * Size:	0000BC
 */
void Obj::setBossAppearBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802C9C54
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C9C54
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C9C58

lbl_802C9C54:
	li       r31, 1

lbl_802C9C58:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C9C7C
	lis      r3, lbl_8048B7B8@ha
	lis      r5, lbl_8048B7D0@ha
	addi     r3, r3, lbl_8048B7B8@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B7D0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C9C7C:
	mr       r3, r30
	li       r4, 1
	bl       setAppearFlag__Q23PSM9EnemyBossFb
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
 * Address:	802C9CA0
 * Size:	0006C8
 */
void Obj::createEffect()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r12, __vt__Q23efx9TChasePos@ha
	lis      r11, __vt__Q23efx10TDamaFootw@ha
	stw      r0, 0x54(r1)
	lis      r10, __vt__Q23efx12TChasePosPos@ha
	lis      r9, __vt__Q23efx11TOdamaHahen@ha
	lis      r8, __vt__Q23efx14TDamaDeadElecA@ha
	stmw     r14, 8(r1)
	mr       r16, r3
	lis      r14, __vt__Q23efx5TSync@ha
	lis      r7, __vt__Q23efx14TDamaDeadElecB@ha
	lis      r6, __vt__Q23efx16TOdamaDeadHahenA@ha
	lis      r5, __vt__Q23efx16TOdamaDeadHahenB@ha
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	lis      r3, __vt__Q23efx10TOdamaFur2@ha
	addi     r14, r14, __vt__Q23efx5TSync@l
	addi     r12, r12, __vt__Q23efx9TChasePos@l
	addi     r11, r11, __vt__Q23efx10TDamaFootw@l
	addi     r10, r10, __vt__Q23efx12TChasePosPos@l
	addi     r9, r9, __vt__Q23efx11TOdamaHahen@l
	addi     r8, r8, __vt__Q23efx14TDamaDeadElecA@l
	addi     r7, r7, __vt__Q23efx14TDamaDeadElecB@l
	addi     r6, r6, __vt__Q23efx16TOdamaDeadHahenA@l
	addi     r5, r5, __vt__Q23efx16TOdamaDeadHahenB@l
	addi     r4, r4, __vt__Q23efx9TChaseMtx@l
	addi     r3, r3, __vt__Q23efx10TOdamaFur2@l
	mr       r31, r16
	mr       r30, r16
	mr       r29, r16
	addi     r20, r14, 0x14
	addi     r19, r12, 0x14
	addi     r28, r11, 0x14
	addi     r27, r10, 0x14
	addi     r26, r9, 0x14
	addi     r25, r8, 0x14
	addi     r24, r7, 0x14
	addi     r23, r6, 0x14
	addi     r22, r5, 0x14
	addi     r18, r4, 0x14
	addi     r21, r3, 0x14
	li       r17, 0

lbl_802C9D48:
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r15, r3, r3
	beq      lbl_802C9D74
	li       r4, 0
	li       r5, 0xf1
	li       r6, 0x25
	bl       "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs"
	lis      r3, __vt__Q23efx10TOdamaFoot@ha
	addi     r0, r3, __vt__Q23efx10TOdamaFoot@l
	stw      r0, 0(r15)

lbl_802C9D74:
	stw      r15, 0x3b0(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C9DF0
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChasePos@ha
	lis      r4, __vt__Q23efx10TDamaFootw@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx9TChasePos@l
	li       r5, 0x23
	addi     r0, r4, __vt__Q23efx10TDamaFootw@l
	stw      r20, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r19, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r28, 4(r3)

lbl_802C9DF0:
	stw      r3, 0x3c0(r31)
	mr       r15, r30
	li       r14, 0

lbl_802C9DFC:
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C9E78
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx12TChasePosPos@ha
	lis      r4, __vt__Q23efx11TOdamaHahen@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx12TChasePosPos@l
	li       r5, 0xf4
	addi     r0, r4, __vt__Q23efx11TOdamaHahen@l
	stw      r20, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r27, 4(r3)
	stw      r8, 0x10(r3)
	stw      r8, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r26, 4(r3)

lbl_802C9E78:
	stw      r3, 0x3dc(r15)
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C9EF8
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx12TChasePosPos@ha
	lis      r4, __vt__Q23efx14TDamaDeadElecA@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx12TChasePosPos@l
	li       r5, 0x1d
	addi     r0, r4, __vt__Q23efx14TDamaDeadElecA@l
	stw      r20, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r27, 4(r3)
	stw      r8, 0x10(r3)
	stw      r8, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r25, 4(r3)

lbl_802C9EF8:
	addi     r14, r14, 1
	stw      r3, 0x40c(r15)
	cmpwi    r14, 3
	addi     r15, r15, 4
	blt      lbl_802C9DFC
	li       r14, 0
	mr       r15, r29

lbl_802C9F14:
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C9F8C
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChasePos@ha
	lis      r4, __vt__Q23efx14TDamaDeadElecB@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx9TChasePos@l
	li       r5, 0x1e
	addi     r0, r4, __vt__Q23efx14TDamaDeadElecB@l
	stw      r20, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r19, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r24, 4(r3)

lbl_802C9F8C:
	stw      r3, 0x43c(r15)
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802CA00C
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx12TChasePosPos@ha
	lis      r4, __vt__Q23efx16TOdamaDeadHahenA@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx12TChasePosPos@l
	li       r5, 0xed
	addi     r0, r4, __vt__Q23efx16TOdamaDeadHahenA@l
	stw      r20, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r27, 4(r3)
	stw      r8, 0x10(r3)
	stw      r8, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r23, 4(r3)

lbl_802CA00C:
	addi     r14, r14, 1
	stw      r3, 0x45c(r15)
	cmpwi    r14, 2
	addi     r15, r15, 4
	blt      lbl_802C9F14
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802CA09C
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx12TChasePosPos@ha
	lis      r4, __vt__Q23efx16TOdamaDeadHahenB@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx12TChasePosPos@l
	li       r5, 0xee
	addi     r0, r4, __vt__Q23efx16TOdamaDeadHahenB@l
	stw      r20, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r27, 4(r3)
	stw      r8, 0x10(r3)
	stw      r8, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r22, 4(r3)

lbl_802CA09C:
	stw      r3, 0x47c(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802CA118
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChaseMtx@ha
	lis      r4, __vt__Q23efx10TOdamaFur2@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx9TChaseMtx@l
	li       r5, 0xf3
	addi     r0, r4, __vt__Q23efx10TOdamaFur2@l
	stw      r20, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r18, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r21, 4(r3)

lbl_802CA118:
	addi     r17, r17, 1
	stw      r3, 0x498(r31)
	cmpwi    r17, 4
	addi     r31, r31, 4
	addi     r30, r30, 0xc
	addi     r29, r29, 8
	blt      lbl_802C9D48
	lis      r3, __vt__Q23efx10TDamaSmoke@ha
	mr       r15, r16
	addi     r3, r3, __vt__Q23efx10TDamaSmoke@l
	li       r14, 0
	addi     r17, r3, 0x14

lbl_802CA148:
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802CA1C0
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChasePos@ha
	lis      r4, __vt__Q23efx10TDamaSmoke@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx9TChasePos@l
	li       r5, 0x27
	addi     r0, r4, __vt__Q23efx10TDamaSmoke@l
	stw      r20, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r19, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r17, 4(r3)

lbl_802CA1C0:
	addi     r14, r14, 1
	stw      r3, 0x3d0(r15)
	cmpwi    r14, 3
	addi     r15, r15, 4
	blt      lbl_802CA148
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802CA250
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChaseMtx@ha
	lis      r4, __vt__Q23efx17TOdamaDeadHahenC1@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	addi     r4, r4, __vt__Q23efx17TOdamaDeadHahenC1@l
	li       r8, 0
	stw      r0, 0(r3)
	li       r7, 0x2b2
	addi     r6, r5, __vt__Q23efx9TChaseMtx@l
	li       r5, 0xef
	stw      r20, 4(r3)
	addi     r0, r4, 0x14
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r18, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802CA250:
	stw      r3, 0x48c(r16)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802CA2D0
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChaseMtx@ha
	lis      r4, __vt__Q23efx17TOdamaDeadHahenC2@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	addi     r4, r4, __vt__Q23efx17TOdamaDeadHahenC2@l
	li       r8, 0
	stw      r0, 0(r3)
	li       r7, 0x2b2
	addi     r6, r5, __vt__Q23efx9TChaseMtx@l
	li       r5, 0xf0
	stw      r20, 4(r3)
	addi     r0, r4, 0x14
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r18, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802CA2D0:
	stw      r3, 0x490(r16)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802CA350
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChaseMtx@ha
	lis      r4, __vt__Q23efx10TOdamaFur1@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	addi     r4, r4, __vt__Q23efx10TOdamaFur1@l
	li       r8, 0
	stw      r0, 0(r3)
	li       r7, 0x2b2
	addi     r6, r5, __vt__Q23efx9TChaseMtx@l
	li       r5, 0xf2
	stw      r20, 4(r3)
	addi     r0, r4, 0x14
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r18, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802CA350:
	stw      r3, 0x494(r16)
	lmw      r14, 8(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CA368
 * Size:	0001E4
 */
void Obj::setupEffect()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, lbl_8048B7DC@ha
	stw      r0, 0x44(r1)
	addi     r6, r4, lbl_8048B7DC@l
	stmw     r24, 0x20(r1)
	mr       r25, r3
	addi     r27, r1, 8
	li       r26, 0
	mr       r31, r25
	mr       r30, r25
	mr       r29, r25
	mr       r28, r25
	lwz      r5, 0(r6)
	lwz      r4, 4(r6)
	lwz      r3, 8(r6)
	lwz      r0, 0xc(r6)
	stw      r5, 8(r1)
	stw      r4, 0xc(r1)
	stw      r3, 0x10(r1)
	stw      r0, 0x14(r1)

lbl_802CA3BC:
	lwz      r3, 0x3b0(r30)
	addi     r4, r31, 0x314
	bl       "setPosptr__Q23efx10TChasePos2FP10Vector3<f>"
	lwz      r3, 0x3c0(r30)
	addi     r10, r31, 0x314
	li       r8, 1
	li       r5, 1
	stw      r10, 0x10(r3)
	mulli    r7, r8, 0xc
	addi     r9, r31, 0x2f0
	lwz      r4, 0(r27)
	lwz      r11, 0x3dc(r29)
	li       r8, 2
	addi     r12, r7, 0x2f0
	stw      r9, 0x10(r11)
	mulli    r6, r5, 0xc
	add      r12, r31, r12
	stw      r12, 0x14(r11)
	mr       r3, r9
	mulli    r7, r8, 0xc
	li       r8, 3
	lwz      r11, 0x40c(r29)
	addi     r24, r6, 0x2f0
	li       r5, 2
	stw      r9, 0x10(r11)
	addi     r9, r31, 0x2fc
	add      r24, r31, r24
	stw      r12, 0x14(r11)
	addi     r12, r7, 0x2f0
	add      r12, r31, r12
	addi     r0, r31, 0x308
	lwz      r11, 0x3e0(r29)
	mulli    r7, r8, 0xc
	stw      r9, 0x10(r11)
	mulli    r6, r5, 0xc
	stw      r12, 0x14(r11)
	lwz      r11, 0x410(r29)
	stw      r9, 0x10(r11)
	addi     r9, r31, 0x308
	stw      r12, 0x14(r11)
	addi     r12, r7, 0x2f0
	add      r12, r31, r12
	lwz      r11, 0x3e4(r29)
	stw      r9, 0x10(r11)
	stw      r12, 0x14(r11)
	lwz      r11, 0x414(r29)
	stw      r9, 0x10(r11)
	stw      r12, 0x14(r11)
	lwz      r5, 0x43c(r28)
	stw      r24, 0x10(r5)
	lwz      r5, 0x45c(r28)
	stw      r3, 0x10(r5)
	addi     r3, r31, 0x2fc
	stw      r24, 0x14(r5)
	addi     r24, r6, 0x2f0
	add      r24, r31, r24
	lwz      r5, 0x440(r28)
	stw      r24, 0x10(r5)
	lwz      r5, 0x460(r28)
	stw      r3, 0x10(r5)
	stw      r24, 0x14(r5)
	lwz      r3, 0x47c(r30)
	stw      r0, 0x10(r3)
	stw      r10, 0x14(r3)
	lwz      r3, 0x174(r25)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x498(r30)
	addi     r26, r26, 1
	cmpwi    r26, 4
	addi     r30, r30, 4
	stw      r3, 0x10(r4)
	addi     r29, r29, 0xc
	addi     r28, r28, 8
	addi     r27, r27, 4
	addi     r31, r31, 0x30
	blt      lbl_802CA3BC
	lwz      r3, 0x174(r25)
	addi     r4, r2, lbl_8051C7AC@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x48c(r25)
	addi     r4, r2, lbl_8051C7B4@sda21
	stw      r3, 0x10(r5)
	lwz      r3, 0x174(r25)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x490(r25)
	addi     r4, r2, lbl_8051C740@sda21
	stw      r3, 0x10(r5)
	lwz      r3, 0x174(r25)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x494(r25)
	stw      r3, 0x10(r4)
	lmw      r24, 0x20(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CA54C
 * Size:	000228
 */
void Obj::createOnGroundEffect(int, WaterBox*)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r4
	stw      r30, 0x78(r1)
	mr       r30, r3
	stw      r29, 0x74(r1)
	stw      r28, 0x70(r1)
	mr       r28, r5
	mr       r5, r31
	lwz      r4, 0x2e0(r3)
	addi     r3, r1, 8
	bl       getCollisionCentre__Q24Game11IKSystemMgrFi
	lfs      f2, 8(r1)
	cmplwi   r28, 0
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	beq      lbl_802CA674
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0(r3)
	lis      r3, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	li       r5, 0
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x50(r1)
	addi     r0, r3, __vt__Q23efx8TSimple3@l
	lfs      f1, 0x44(r1)
	lfs      f0, 0x4c(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx10TDamaWalkw@ha
	li       r8, 0x28
	addi     r9, r4, __vt__Q23efx3Arg@l
	li       r7, 0x29
	li       r6, 0x2a
	stw      r0, 0x50(r1)
	addi     r0, r3, __vt__Q23efx10TDamaWalkw@l
	addi     r3, r1, 0x50
	stfs     f2, 0x48(r1)
	addi     r4, r1, 0x34
	stw      r9, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f0, 0x40(r1)
	sth      r8, 0x54(r1)
	sth      r7, 0x56(r1)
	sth      r6, 0x58(r1)
	stw      r5, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r5, 0x64(r1)
	stw      r0, 0x50(r1)
	bl       create__Q23efx8TSimple3FPQ23efx3Arg
	mulli    r4, r31, 0x30
	li       r3, 0x3849
	addi     r4, r4, 0x314
	add      r4, r30, r4
	bl       PSStartSoundVec__FUlP3Vec
	cmplwi   r3, 0
	beq      lbl_802CA6D8
	lwz      r12, 0x10(r3)
	li       r4, 0
	lfs      f1, lbl_8051C7BC@sda21(r2)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_802CA6D8

lbl_802CA674:
	lis      r3, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx10TOdamaWalk@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, __vt__Q23efx3Arg@l
	addi     r0, r3, __vt__Q23efx10TOdamaWalk@l
	li       r7, 0xf5
	li       r6, 0xf6
	stw      r4, 0x24(r1)
	addi     r3, r1, 0x14
	addi     r4, r1, 0x24
	stfs     f2, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x30(r1)
	sth      r7, 0x18(r1)
	sth      r6, 0x1a(r1)
	stw      r5, 0x1c(r1)
	stw      r5, 0x20(r1)
	stw      r0, 0x14(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg

lbl_802CA6D8:
	lbz      r0, 0x2dd(r30)
	cmplwi   r0, 0
	beq      lbl_802CA718
	mulli    r0, r31, 0xc
	li       r28, 0
	add      r29, r30, r0

lbl_802CA6F0:
	lwz      r3, 0x3dc(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r29, r29, 4
	cmpwi    r28, 3
	blt      lbl_802CA6F0

lbl_802CA718:
	mulli    r4, r31, 0x30
	li       r3, 0x5896
	addi     r4, r4, 0x314
	add      r4, r30, r4
	bl       PSStartSoundVec__FUlP3Vec
	lwz      r3, cameraMgr__4Game@sda21(r13)
	addi     r5, r1, 0x44
	li       r4, 6
	li       r6, 2
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x44
	li       r4, 0xe
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r28, 0x70(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CA774
 * Size:	000164
 */
void Obj::createOffGroundEffect(int, WaterBox*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_802CA7B4
	slwi     r0, r4, 2
	li       r4, 0
	add      r3, r31, r0
	lwz      r3, 0x3c0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_802CA7D4

lbl_802CA7B4:
	slwi     r0, r4, 2
	li       r4, 0
	add      r3, r31, r0
	lwz      r3, 0x3b0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802CA7D4:
	lbz      r0, 0x2de(r31)
	cmplwi   r0, 0
	beq      lbl_802CA810
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x584b
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802CA8C4

lbl_802CA810:
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x200(r31)
	lfs      f1, 0x104(r3)
	lfs      f0, lbl_8051C7C0@sda21(r2)
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802CA85C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x584a
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802CA8C4

lbl_802CA85C:
	lfs      f0, lbl_8051C7C4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802CA898
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5849
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802CA8C4

lbl_802CA898:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5848
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802CA8C4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CA8D8
 * Size:	0001A0
 */
void Obj::startPinchJointEffect()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stmw     r26, 0x38(r1)
	addi     r30, r1, 0x18
	lfd      f31, lbl_8051C758@sda21(r2)
	lfs      f30, lbl_8051C750@sda21(r2)
	mr       r29, r3
	lfs      f29, lbl_8051C760@sda21(r2)
	mr       r31, r30
	li       r27, 0
	lis      r28, 0x4330

lbl_802CA920:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r27, r27, 1
	stw      r0, 0x2c(r1)
	cmpwi    r27, 3
	stw      r28, 0x28(r1)
	lfd      f0, 0x28(r1)
	fsubs    f0, f0, f31
	fdivs    f0, f0, f30
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r3, 0x34(r1)
	addi     r0, r3, 1
	stw      r0, 0(r31)
	addi     r31, r31, 4
	blt      lbl_802CA920
	li       r5, 0
	li       r4, 1
	li       r3, 2
	li       r0, 3
	addi     r31, r1, 8
	stw      r5, 8(r1)
	lfd      f29, lbl_8051C758@sda21(r2)
	mr       r27, r31
	stw      r4, 0xc(r1)
	li       r26, 0
	lfs      f30, lbl_8051C750@sda21(r2)
	lis      r28, 0x4330
	stw      r3, 0x10(r1)
	lfs      f31, lbl_8051C7C8@sda21(r2)
	stw      r0, 0x14(r1)

lbl_802CA9A0:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r26, r26, 1
	stw      r0, 0x34(r1)
	cmpwi    r26, 4
	lwz      r4, 0(r27)
	stw      r28, 0x30(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f29
	fdivs    f0, f0, f30
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	slwi     r3, r0, 2
	lwzx     r0, r31, r3
	stw      r0, 0(r27)
	addi     r27, r27, 4
	stwx     r4, r31, r3
	blt      lbl_802CA9A0
	mr       r27, r29
	li       r26, 0

lbl_802CA9F8:
	lwz      r3, 0(r31)
	li       r4, 0
	lwz      r0, 0(r30)
	mulli    r5, r3, 0x30
	lwz      r3, 0x3d0(r27)
	mulli    r0, r0, 0xc
	add      r5, r5, r0
	addi     r0, r5, 0x2f0
	add      r0, r29, r0
	stw      r0, 0x10(r3)
	lwz      r3, 0x3d0(r27)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r26, r26, 1
	addi     r31, r31, 4
	cmpwi    r26, 3
	addi     r27, r27, 4
	addi     r30, r30, 4
	blt      lbl_802CA9F8
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lmw      r26, 0x38(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CAA78
 * Size:	000058
 */
void Obj::finishPinchJointEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	li       r30, 0

lbl_802CAA94:
	lwz      r3, 0x3d0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802CAA94
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
 * Address:	802CAAD0
 * Size:	0001C0
 */
void Obj::startDeadEffect()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r6, __vt__Q23efx3Arg@ha
	lis      r5, __vt__Q23efx5TBase@ha
	stw      r0, 0x64(r1)
	lis      r4, __vt__Q23efx8TSimple1@ha
	stmw     r18, 0x28(r1)
	mr       r27, r3
	lis      r3, __vt__Q23efx13TDamaDeadBomb@ha
	addi     r21, r6, __vt__Q23efx3Arg@l
	mr       r31, r27
	mr       r30, r27
	mr       r29, r27
	mr       r28, r27
	addi     r22, r5, __vt__Q23efx5TBase@l
	addi     r23, r4, __vt__Q23efx8TSimple1@l
	addi     r26, r3, __vt__Q23efx13TDamaDeadBomb@l
	li       r19, 0

lbl_802CAB18:
	addi     r20, r31, 0xc
	li       r18, 1
	li       r24, 0x1c
	li       r25, 0

lbl_802CAB28:
	stw      r21, 0x14(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x14
	lfs      f0, 0x2f0(r20)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x2f4(r20)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x2f8(r20)
	stw      r22, 8(r1)
	stw      r23, 8(r1)
	stfs     f0, 0x20(r1)
	sth      r24, 0xc(r1)
	stw      r25, 0x10(r1)
	stw      r26, 8(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	addi     r18, r18, 1
	addi     r20, r20, 0xc
	cmpwi    r18, 3
	blt      lbl_802CAB28
	li       r18, 0
	mr       r20, r30

lbl_802CAB7C:
	lwz      r3, 0x40c(r20)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r18, r18, 1
	addi     r20, r20, 4
	cmpwi    r18, 3
	blt      lbl_802CAB7C
	li       r18, 0
	mr       r20, r29

lbl_802CABAC:
	lwz      r3, 0x43c(r20)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x45c(r20)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r18, r18, 1
	addi     r20, r20, 4
	cmpwi    r18, 2
	blt      lbl_802CABAC
	lwz      r3, 0x47c(r28)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r19, r19, 1
	addi     r30, r30, 0xc
	cmpwi    r19, 4
	addi     r29, r29, 8
	addi     r28, r28, 4
	addi     r31, r31, 0x30
	blt      lbl_802CAB18
	lwz      r3, 0x48c(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x490(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r21, 0
	mr       r20, r27

lbl_802CAC58:
	lwz      r3, 0x3d0(r20)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r21, r21, 1
	addi     r20, r20, 4
	cmpwi    r21, 3
	blt      lbl_802CAC58
	lmw      r18, 0x28(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CAC90
 * Size:	000254
 */
void Obj::updatePinchLife()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stmw     r26, 0x38(r1)
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CAEB8
	lwz      r3, 0xc0(r29)
	lbz      r0, 0x2dd(r29)
	lfs      f1, 0x200(r29)
	lfs      f0, 0x104(r3)
	cmplwi   r0, 0
	fdivs    f1, f1, f0
	beq      lbl_802CAD34
	lfs      f0, lbl_8051C7C4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802CAEB8
	li       r28, 0
	mr       r27, r29

lbl_802CAD04:
	lwz      r3, 0x3d0(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r27, r27, 4
	cmpwi    r28, 3
	blt      lbl_802CAD04
	li       r0, 0
	stb      r0, 0x2dd(r29)
	b        lbl_802CAEB8

lbl_802CAD34:
	lfs      f0, lbl_8051C7C4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802CAEB8
	addi     r30, r1, 8
	lfd      f31, lbl_8051C758@sda21(r2)
	lfs      f30, lbl_8051C750@sda21(r2)
	mr       r31, r30
	lfs      f29, lbl_8051C760@sda21(r2)
	li       r27, 0
	lis      r28, 0x4330

lbl_802CAD5C:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r27, r27, 1
	stw      r0, 0x2c(r1)
	cmpwi    r27, 3
	stw      r28, 0x28(r1)
	lfd      f0, 0x28(r1)
	fsubs    f0, f0, f31
	fdivs    f0, f0, f30
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r3, 0x34(r1)
	addi     r0, r3, 1
	stw      r0, 0(r31)
	addi     r31, r31, 4
	blt      lbl_802CAD5C
	li       r27, 0
	li       r4, 1
	li       r3, 2
	li       r0, 3
	addi     r31, r1, 0x14
	stw      r27, 0x14(r1)
	lfd      f29, lbl_8051C758@sda21(r2)
	mr       r26, r31
	stw      r4, 0x18(r1)
	lis      r28, 0x4330
	lfs      f30, lbl_8051C750@sda21(r2)
	stw      r3, 0x1c(r1)
	lfs      f31, lbl_8051C7C8@sda21(r2)
	stw      r0, 0x20(r1)

lbl_802CADD8:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r27, r27, 1
	stw      r0, 0x34(r1)
	cmpwi    r27, 4
	lwz      r4, 0(r26)
	stw      r28, 0x30(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f29
	fdivs    f0, f0, f30
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	slwi     r3, r0, 2
	lwzx     r0, r31, r3
	stw      r0, 0(r26)
	addi     r26, r26, 4
	stwx     r4, r31, r3
	blt      lbl_802CADD8
	mr       r26, r29
	li       r28, 0

lbl_802CAE30:
	lwz      r3, 0(r31)
	li       r4, 0
	lwz      r0, 0(r30)
	mulli    r5, r3, 0x30
	lwz      r3, 0x3d0(r26)
	mulli    r0, r0, 0xc
	add      r5, r5, r0
	addi     r0, r5, 0x2f0
	add      r0, r29, r0
	stw      r0, 0x10(r3)
	lwz      r3, 0x3d0(r26)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r31, r31, 4
	cmpwi    r28, 3
	addi     r26, r26, 4
	addi     r30, r30, 4
	blt      lbl_802CAE30
	li       r0, 1
	mr       r3, r29
	stb      r0, 0x2dd(r29)
	lwz      r12, 0(r29)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5844
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802CAEB8:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lmw      r26, 0x38(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CAEE4
 * Size:	000074
 */
void Obj::startFurEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lwz      r3, 0x494(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r30, 0

lbl_802CAF18:
	lwz      r3, 0x498(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 4
	blt      lbl_802CAF18
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
 * Address:	802CAF58
 * Size:	00006C
 */
void Obj::finishFurEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lwz      r3, 0x494(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r30, 0

lbl_802CAF88:
	lwz      r3, 0x498(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 4
	blt      lbl_802CAF88
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
 * Address:	802CAFC4
 * Size:	000068
 */
void Obj::updateDeadFurEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x494(r3)
	lfs      f1, 0x2d4(r29)
	bl       setGlobalScale__Q23efx10TOdamaFur1Ff
	li       r30, 0
	mr       r31, r29

lbl_802CAFF4:
	lwz      r3, 0x498(r31)
	lfs      f1, 0x2d4(r29)
	bl       setGlobalScale__Q23efx10TOdamaFur2Ff
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 4
	blt      lbl_802CAFF4
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
 * Address:	802CB02C
 * Size:	0001D8
 */
void Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	li       r30, 0
	mr       r31, r27

lbl_802CB048:
	lwz      r3, 0x3b0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 4
	blt      lbl_802CB048
	li       r30, 0
	mr       r31, r27

lbl_802CB088:
	lwz      r3, 0x3d0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802CB088
	li       r29, 0
	mr       r30, r27

lbl_802CB0B4:
	li       r28, 0
	mr       r31, r30

lbl_802CB0BC:
	lwz      r3, 0x3dc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x40c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r31, r31, 4
	cmpwi    r28, 3
	blt      lbl_802CB0BC
	addi     r29, r29, 1
	addi     r30, r30, 0xc
	cmpwi    r29, 4
	blt      lbl_802CB0B4
	li       r28, 0
	mr       r31, r27

lbl_802CB10C:
	li       r29, 0
	mr       r30, r31

lbl_802CB114:
	lwz      r3, 0x43c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x45c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 2
	blt      lbl_802CB114
	addi     r28, r28, 1
	addi     r31, r31, 8
	cmpwi    r28, 4
	blt      lbl_802CB10C
	li       r28, 0
	mr       r30, r27

lbl_802CB164:
	lwz      r3, 0x47c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 4
	blt      lbl_802CB164
	lwz      r3, 0x48c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x490(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x494(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	li       r28, 0
	mr       r30, r27

lbl_802CB1CC:
	lwz      r3, 0x498(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 4
	blt      lbl_802CB1CC
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CB204
 * Size:	0001D8
 */
void Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	li       r30, 0
	mr       r31, r27

lbl_802CB220:
	lwz      r3, 0x3b0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 4
	blt      lbl_802CB220
	li       r30, 0
	mr       r31, r27

lbl_802CB260:
	lwz      r3, 0x3d0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802CB260
	li       r29, 0
	mr       r30, r27

lbl_802CB28C:
	li       r28, 0
	mr       r31, r30

lbl_802CB294:
	lwz      r3, 0x3dc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x40c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r31, r31, 4
	cmpwi    r28, 3
	blt      lbl_802CB294
	addi     r29, r29, 1
	addi     r30, r30, 0xc
	cmpwi    r29, 4
	blt      lbl_802CB28C
	li       r28, 0
	mr       r31, r27

lbl_802CB2E4:
	li       r29, 0
	mr       r30, r31

lbl_802CB2EC:
	lwz      r3, 0x43c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x45c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 2
	blt      lbl_802CB2EC
	addi     r28, r28, 1
	addi     r31, r31, 8
	cmpwi    r28, 4
	blt      lbl_802CB2E4
	li       r28, 0
	mr       r30, r27

lbl_802CB33C:
	lwz      r3, 0x47c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 4
	blt      lbl_802CB33C
	lwz      r3, 0x48c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x490(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x494(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	li       r28, 0
	mr       r30, r27

lbl_802CB3A4:
	lwz      r3, 0x498(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 4
	blt      lbl_802CB3A4
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CB3DC
 * Size:	000038
 */
void Obj::addShadowScale()
{
	/*
	lfs      f3, 0x2d4(r3)
	lfs      f2, lbl_8051C72C@sda21(r2)
	fcmpo    cr0, f3, f2
	bgelr
	lwz      r4, sys@sda21(r13)
	lfs      f1, lbl_8051C760@sda21(r2)
	lfs      f0, 0x54(r4)
	fmadds   f0, f1, f0, f3
	stfs     f0, 0x2d4(r3)
	lfs      f0, 0x2d4(r3)
	fcmpo    cr0, f0, f2
	blelr
	stfs     f2, 0x2d4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CB858
 * Size:	000004
 */
void Obj::inWaterCallback(WaterBox*) { }

/*
 * --INFO--
 * Address:	802CB85C
 * Size:	000004
 */
void Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	802CB860
 * Size:	000008
 */
f32 Obj::getDamageCoeStoneState() { return 0.25f; }

/*
 * --INFO--
 * Address:	802CB868
 * Size:	000004
 */
void Obj::throwupItemInDeathProcedure() { }

/*
 * --INFO--
 * Address:	802CB86C
 * Size:	000008
 */
EnemyTypeID::EEnemyTypeID Obj::getEnemyTypeID() { return EnemyTypeID::EnemyID_BigFoot; }

} // namespace BigFoot
} // namespace Game
