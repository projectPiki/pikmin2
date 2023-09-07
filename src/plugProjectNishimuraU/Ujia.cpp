#include "Game/Entities/Ujia.h"
#include "Game/Entities/ItemBridge.h"
#include "efx/TUjinko.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Ujia {

/*
 * --INFO--
 * Address:	80266080
 * Size:	000130
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	802661B0
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802661B4
 * Size:	000098
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LifegaugeVisible);
	disableEvent(0, EB_Cullable);
	resetAppearCheck();
	mIsUnderground = false;
	mNextState     = UJIA_NULL;
	resetBridgeSearch();
	mFsm->start(this, UJIA_Stay, nullptr);
	doAnimationCullingOff();
}

/*
 * --INFO--
 * Address:	8026624C
 * Size:	000034
 */
void Obj::doUpdate() { mFsm->exec(this); }

/*
 * --INFO--
 * Address:	80266280
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80266284
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802662A4
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	802662F0
 * Size:	0000A8
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition = mModel->getJoint("kosijnt")->getWorldMatrix()->getBasis(3);
	shadowParam.mPosition.y -= 2.5f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_Earthquake)) {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	} else {
		shadowParam.mBoundingSphere.mRadius = 15.0f;
	}

	shadowParam.mSize = 8.0f;
}

/*
 * --INFO--
 * Address:	80266398
 * Size:	000094
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (creature && creature->isPiki() && !isEvent(0, EB_Bittered) && getStateID() > UJIA_Dive) {
		// i.e. not in dead, press, stay, appear, or dive states
		mFsm->transit(this, UJIA_Press, nullptr);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8026642C
 * Size:	00002C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* part) { return pressCallBack(creature, damage, part); }

/*
 * --INFO--
 * Address:	80266458
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(6, nullptr); }

/*
 * --INFO--
 * Address:	80266480
 * Size:	000030
 */
void Obj::lifeIncrement()
{
	mInstantDamage = 0.0f;
	disableEvent(0, EB_TakingDamage);
	if (mHealth <= 0.0f) {
		mHealth = 1.0f;
	}
}

/*
 * --INFO--
 * Address:	802664B0
 * Size:	000034
 */
void Obj::setInWaterDamage()
{
	if (mWaterBox) {
		addDamage(2.0f, 1.0f);
	}
}

/*
 * --INFO--
 * Address:	802664E4
 * Size:	0000B4
 */

void Obj::resetAppearCheck() {
    if(Game::gameSystem && Game::gameSystem->mMode == GSM_PIKLOPEDIA) {
        int v = (rand() / RAND_MAX) * 30.0f;
        _2C2 = (v + 5 * getCreatureID()) << 8;
    }
    else {

        _2C2 = 0;
    }
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80266578
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	bne      lbl_80266578
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	mr       r3, r30
	lwz      r12, 0(r30)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051AEA0@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051AE98@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051AE94@sda21(r2)
	lwz      r12, 0x1ac(r12)
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r31, 0x14(r1)
	mtctr    r12
	bctrl
	mulli    r0, r3, 5
	add      r0, r31, r0
	rlwinm   r0, r0, 8, 0x10, 0x17
	sth      r0, 0x2c2(r30)
	b        lbl_80266580

lbl_80266578:
	li       r0, 0
	sth      r0, 0x2c2(r30)

lbl_80266580:
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
 * Address:	80266598
 * Size:	000048
 */
bool Obj::isAppearCheck()
{
	if (_2C2 != 0) {
		_2C2++;
		if ((u8)_2C2 > _2C2 >> 8) {
			_2C2 = 0;
			return true;
		}
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	802665E0
 * Size:	000020
 */
void Obj::resetBridgeSearch()
{
	_2C0    = 1;
	mBridge = nullptr;
	_2CC    = 0.0f;
	_2D0    = 0.0f;
}

/*
 * --INFO--
 * Address:	80266600
 * Size:	000048
 */
void Obj::setBridgeSearch()
{
	if (_2C0) {
		_2C0 = 0;
		setNearestBridge();
		setCullingCheck();
	}
}

/*
 * --INFO--
 * Address:	80266648
 * Size:	0002C0
 */
void Obj::setNearestBridge()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r3
	li       r0, 0
	stw      r0, 0x2c8(r3)
	lfs      f0, lbl_8051AE7C@sda21(r2)
	stfs     f0, 0x2cc(r3)
	stfs     f0, 0x2d0(r3)
	lwz      r3, mgr__Q24Game10ItemBridge@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80266898
	lwz      r4, 0xc0(r31)
	lfs      f0, 0x35c(r4)
	fmuls    f31, f0, f0
	beq      lbl_8026669C
	addi     r3, r3, 0x30

lbl_8026669C:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x20(r1)
	cmplwi   r0, 0
	stw      r4, 0x14(r1)
	stw      r0, 0x18(r1)
	stw      r3, 0x1c(r1)
	bne      lbl_802666D8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_80266878

lbl_802666D8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_80266744

lbl_802666F0:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80266878
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_80266744:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802666F0
	b        lbl_80266878

lbl_80266764:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	addi     r3, r1, 8
	mr       r30, r0
	mr       r4, r30
	bl       getStartPos__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x194(r31)
	lfs      f0, 0x10(r1)
	lfs      f2, 0x18c(r31)
	fsubs    f1, f1, f0
	lfs      f0, 8(r1)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f31
	bge      lbl_802667BC
	stw      r30, 0x2c8(r31)
	fmr      f31, f0

lbl_802667BC:
	lwz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_802667E8
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_80266878

lbl_802667E8:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8026685C

lbl_80266808:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80266878
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_8026685C:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80266808

lbl_80266878:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	cmplw    r4, r3
	bne      lbl_80266764

lbl_80266898:
	lwz      r3, 0x2c8(r31)
	cmplwi   r3, 0
	beq      lbl_802668E8
	bl       getStageWidth__Q34Game10ItemBridge4ItemFv
	lfs      f0, lbl_8051AEA8@sda21(r2)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c(r1)
	lfd      f3, lbl_8051AEA0@sda21(r2)
	stw      r0, 0x28(r1)
	lfs      f1, lbl_8051AE98@sda21(r2)
	lfd      f2, 0x28(r1)
	lfs      f0, lbl_8051AEAC@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f2, f31, f2
	fdivs    f1, f2, f1
	fnmsubs  f0, f0, f31, f1
	stfs     f0, 0x2cc(r31)

lbl_802668E8:
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
 * Address:	80266908
 * Size:	000004
 */
void Obj::setCullingCheck() { }

/*
 * --INFO--
 * Address:	8026690C
 * Size:	0001B4
 */
int Obj::checkBreakOrMove()
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
	stfd     f27, 0x50(r1)
	psq_st   f27, 88(r1), 0, qr0
	stfd     f26, 0x40(r1)
	psq_st   f26, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r4, 0x2c8(r3)
	cmplwi   r4, 0
	beq      lbl_80266A78
	addi     r3, r1, 0x20
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f28, 0x20(r1)
	addi     r3, r1, 0x14
	lfs      f29, 0x24(r1)
	lfs      f27, 0x28(r1)
	lwz      r4, 0x2c8(r31)
	bl       getStartPos__Q34Game10ItemBridge4ItemFv
	lfs      f2, 0x18(r1)
	lfs      f0, 0x190(r31)
	lfs      f1, 0x14(r1)
	fsubs    f30, f2, f0
	lfs      f0, 0x18c(r31)
	lfs      f2, 0x1c(r1)
	fsubs    f31, f1, f0
	lfs      f0, 0x194(r31)
	fmuls    f1, f29, f30
	fsubs    f29, f2, f0
	lfs      f0, lbl_8051AE7C@sda21(r2)
	fmadds   f1, f28, f31, f1
	fmadds   f1, f27, f29, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802669C0
	li       r3, 7
	b        lbl_80266A7C

lbl_802669C0:
	lwz      r4, 0x2c8(r31)
	addi     r3, r1, 8
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f27, 8(r1)
	lfs      f28, 0xc(r1)
	lfs      f26, 0x10(r1)
	lwz      r3, 0x2c8(r31)
	bl       getStageWidth__Q34Game10ItemBridge4ItemFv
	fmuls    f3, f28, f30
	lfs      f0, lbl_8051AEAC@sda21(r2)
	lfs      f2, lbl_8051AEA8@sda21(r2)
	fmuls    f4, f0, f1
	lfs      f0, lbl_8051AE7C@sda21(r2)
	fmadds   f1, f27, f31, f3
	fadds    f2, f2, f4
	fmadds   f1, f26, f29, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80266A10
	stfs     f2, 0x2d0(r31)
	b        lbl_80266A18

lbl_80266A10:
	fneg     f0, f2
	stfs     f0, 0x2d0(r31)

lbl_80266A18:
	lfs      f0, lbl_8051AE7C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80266A28
	b        lbl_80266A2C

lbl_80266A28:
	fneg     f1, f1

lbl_80266A2C:
	fcmpo    cr0, f1, f4
	ble      lbl_80266A3C
	li       r3, 6
	b        lbl_80266A7C

lbl_80266A3C:
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r31, 0x18c
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051AEB0@sda21(r2)
	lfs      f2, 0x190(r31)
	fadds    f0, f0, f1
	fcmpo    cr0, f2, f0
	ble      lbl_80266A70
	li       r3, 8
	b        lbl_80266A7C

lbl_80266A70:
	li       r3, 6
	b        lbl_80266A7C

lbl_80266A78:
	li       r3, 7

lbl_80266A7C:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	psq_l    f27, 88(r1), 0, qr0
	lfd      f27, 0x50(r1)
	psq_l    f26, 72(r1), 0, qr0
	lfd      f26, 0x40(r1)
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80266AC0
 * Size:	000028
 */
bool Obj::isBreakBridge()
{
	if (mBridge && mBridge->mStagesRemaining != 0) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80266AE8
 * Size:	0002A8
 */
bool Obj::moveBridgeSide()
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
	mr       r31, r3
	addi     r3, r1, 0x44
	lwz      r4, 0x2c8(r31)
	bl       getStartPos__Q34Game10ItemBridge4ItemFv
	lfs      f29, 0x44(r1)
	addi     r3, r1, 0x38
	lfs      f28, 0x4c(r1)
	lwz      r4, 0x2c8(r31)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f30, 0x38(r1)
	addi     r3, r1, 0x2c
	lfs      f31, 0x40(r1)
	lwz      r4, 0x2c8(r31)
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x2d0(r31)
	lfs      f4, 0x34(r1)
	fmuls    f31, f31, f1
	lfs      f0, lbl_8051AEB4@sda21(r2)
	fmuls    f30, f30, f1
	lfs      f3, 0x2c(r1)
	fmuls    f4, f4, f0
	lfs      f1, 0x194(r31)
	fadds    f28, f28, f31
	lfs      f2, 0x18c(r31)
	fmuls    f3, f3, f0
	lfs      f0, lbl_8051AEB8@sda21(r2)
	fadds    f29, f29, f30
	fadds    f28, f28, f4
	fadds    f29, f29, f3
	fsubs    f1, f1, f28
	fsubs    f2, f2, f29
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80266C20
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f1, lbl_8051AEBC@sda21(r2)
	lfs      f0, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	fmuls    f30, f1, f0
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f31, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 1
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80266D5C

lbl_80266C20:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f31, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f29, f1
	fsubs    f2, f28, f0
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
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051AEC4@sda21(r2)
	lfs      f1, lbl_8051AEC0@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80266CC4
	lfs      f0, lbl_8051AE7C@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_80266CC0
	fmr      f30, f1
	b        lbl_80266CC4

lbl_80266CC0:
	fneg     f30, f1

lbl_80266CC4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x2e4(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f31, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 0
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_80266D5C:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80266D90
 * Size:	000288
 */
bool Obj::moveBridgeCentre()
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
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	addi     r3, r1, 0x38
	lwz      r4, 0x2c8(r31)
	bl       getStartPos__Q34Game10ItemBridge4ItemFv
	lfs      f29, 0x38(r1)
	addi     r3, r1, 0x2c
	lfs      f28, 0x40(r1)
	lwz      r4, 0x2c8(r31)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, lbl_8051AEC8@sda21(r2)
	lfs      f0, 0x2cc(r31)
	lfs      f5, 0x34(r1)
	fmuls    f3, f1, f0
	lfs      f4, 0x2c(r1)
	lfs      f1, 0x194(r31)
	lfs      f2, 0x18c(r31)
	fmuls    f5, f5, f3
	lfs      f0, lbl_8051AEB8@sda21(r2)
	fmuls    f4, f4, f3
	fadds    f28, f28, f5
	fadds    f29, f29, f4
	fsubs    f1, f1, f28
	fsubs    f2, f2, f29
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80266EA8
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f1, lbl_8051AEBC@sda21(r2)
	lfs      f0, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	fmuls    f30, f1, f0
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f31, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 1
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80266FE4

lbl_80266EA8:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f31, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f29, f1
	fsubs    f2, f28, f0
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
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051AEC4@sda21(r2)
	lfs      f1, lbl_8051AEC0@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80266F4C
	lfs      f0, lbl_8051AE7C@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_80266F48
	fmr      f30, f1
	b        lbl_80266F4C

lbl_80266F48:
	fneg     f30, f1

lbl_80266F4C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x2e4(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f31, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 0
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_80266FE4:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80267018
 * Size:	0002F0
 */
bool Obj::moveBridgeTop()
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	addi     r3, r1, 0x44
	lwz      r4, 0x2c8(r30)
	lwz      r5, 0x218(r4)
	addi     r31, r5, -1
	mr       r5, r31
	bl       getStagePos__Q34Game10ItemBridge4ItemFi
	lfs      f31, 0x44(r1)
	addi     r3, r1, 0x38
	lfs      f30, 0x4c(r1)
	lwz      r4, 0x2c8(r30)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x38(r1)
	cmpwi    r31, 0
	lfs      f0, 0x2cc(r30)
	lfs      f2, 0x40(r1)
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0
	fadds    f31, f31, f1
	fadds    f30, f30, f2
	ble      lbl_802670D0
	lwz      r4, 0x2c8(r30)
	addi     r3, r1, 0x2c
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x2c(r1)
	lfs      f0, lbl_8051AEB4@sda21(r2)
	lfs      f2, 0x34(r1)
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0
	fadds    f31, f31, f1
	fadds    f30, f30, f2

lbl_802670D0:
	mr       r4, r30
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r30)
	addi     r3, r1, 8
	lfs      f28, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f29, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f31, f1
	fsubs    f2, f30, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f27, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f27
	bl       angDist__Fff
	fmuls    f29, f1, f29
	lfs      f0, lbl_8051AEC4@sda21(r2)
	lfs      f1, lbl_8051AEC0@sda21(r2)
	fmuls    f0, f0, f28
	fabs     f2, f29
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80267174
	lfs      f0, lbl_8051AE7C@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_80267170
	fmr      f29, f1
	b        lbl_80267174

lbl_80267170:
	fneg     f29, f1

lbl_80267174:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f0, lbl_8051AE84@sda21(r2)
	lfs      f1, 0x1fc(r30)
	stfs     f1, 0x1a8(r30)
	lfs      f1, 0x194(r30)
	lfs      f2, 0x18c(r30)
	fsubs    f1, f1, f30
	fsubs    f2, f2, f31
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802671D8
	lfs      f0, lbl_8051AE7C@sda21(r2)
	li       r3, 1
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	b        lbl_802672C8

lbl_802671D8:
	lfs      f0, lbl_8051AEB8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80267258
	mr       r3, r30
	lwz      r4, 0xc0(r30)
	lwz      r12, 0(r30)
	lfs      f28, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r30
	lfs      f2, 0x1d4(r30)
	lwz      r12, 0(r30)
	frsp     f27, f1
	lfs      f30, 0x1d8(r30)
	lfs      f0, 0x1dc(r30)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f30, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f27
	li       r3, 1
	frsp     f1, f1
	stfs     f0, 0x1d4(r30)
	fmuls    f0, f28, f1
	stfs     f30, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	b        lbl_802672C8

lbl_80267258:
	mr       r3, r30
	lwz      r4, 0xc0(r30)
	lwz      r12, 0(r30)
	lfs      f28, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r30
	lfs      f2, 0x1d4(r30)
	lwz      r12, 0(r30)
	frsp     f27, f1
	lfs      f30, 0x1d8(r30)
	lfs      f0, 0x1dc(r30)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f30, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f27
	li       r3, 0
	frsp     f1, f1
	stfs     f0, 0x1d4(r30)
	fmuls    f0, f28, f1
	stfs     f30, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)

lbl_802672C8:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0xb4(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80267308
 * Size:	00005C
 */
void Obj::breakTargetBridge()
{
	InteractBreakBridge breakBridge(this, C_PROPERPARMS.mBridgeDamage.mValue);
	mBridge->stimulate(breakBridge);
}

/*
 * --INFO--
 * Address:	80267364
 * Size:	00008C
 */
void Obj::createAppearEffect()
{
	Matrixf* worldMat = mModel->getJoint("ujinnko_m")->getWorldMatrix();
	efx::TUjinkoAp appearFX(worldMat);
	appearFX.create(nullptr);
}

/*
 * --INFO--
 * Address:	802673F0
 * Size:	00008C
 */
void Obj::createDisAppearEffect()
{
	Matrixf* worldMat = mModel->getJoint("ujinnko_m")->getWorldMatrix();
	efx::TUjinkoHd hideFX(worldMat);
	hideFX.create(nullptr);
}

/*
 * --INFO--
 * Address:	8026747C
 * Size:	000090
 */
void Obj::createBridgeEffect()
{
	Vector3f fxPos = mModel->getJoint("kamujnt")->getWorldMatrix()->getBasis(3);
	efx::Arg fxArg(fxPos);
	efx::TUjinkoEat eatFX;
	eatFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	8026750C
 * Size:	000008
 */
bool Obj::isUnderground() { return mIsUnderground; }

/*
 * --INFO--
 * Address:	80267514
 * Size:	000008
 */
f32 Obj::getDownSmokeScale() { return 0.35f; }

/*
 * --INFO--
 * Address:	8026751C
 * Size:	000008
 */
EnemyTypeID::EEnemyTypeID Obj::getEnemyTypeID() { return EnemyTypeID::EnemyID_UjiA; }

} // namespace Ujia
} // namespace Game
