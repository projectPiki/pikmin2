#include "Game/Entities/TamagoMushi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiState.h"
#include "efx/TUjinko.h"
#include "efx/TTamagoAp.h"
#include "Dolphin/rand.h"

namespace Game {
namespace TamagoMushi {
static const char unusedName[] = "tamagoMushi";

/*
 * --INFO--
 * Address:	8036EBA8
 * Size:	000020
 */
void Obj::setParameters() { EnemyBase::setParameters(); }

/*
 * --INFO--
 * Address:	8036EBC8
 * Size:	000020
 */
void Obj::birth(Vector3f& pos, f32 faceDir) { EnemyBase::birth(pos, faceDir); }

/*
 * --INFO--
 * Address:	8036EBE8
 * Size:	0002D0
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_DeathEffectEnabled);
	_2BC          = 0;
	_2F0          = false;
	mLeader       = nullptr;
	_304          = 0;
	mGoalPosition = mPosition;
	_2C0          = (0.8f + 0.2f * randFloat()) * C_PROPERPARMS.mFp01.mValue;
	if (gameSystem && gameSystem->mMode == GSM_PIKLOPEDIA) {
		_2C0 *= 5;
	}

	_2C4 = 0.7f + 0.3f * randFloat();
	_2C8 = 0.7f + 0.3f * randFloat();
	_2CC = 0.3f + 0.7f * randFloat();
	_2FC = 0.0f;
	_300 = false;

	Vector3f dir = Vector3f(pikmin2_sinf(mFaceDir), 0.0f, pikmin2_cosf(mFaceDir));
	setGoalDirect(dir);
	mInPiklopedia = 0;

	P2ASSERTLINE(81, mModel);
	mKoshiJoint = mModel->getJoint("koshijnt");
	P2ASSERTLINE(84, mKoshiJoint);

	mFsm->start(this, TAMAGOMUSHI_Appear, nullptr);
}

/*
 * --INFO--
 * Address:	8036EEB8
 * Size:	00013C
 */
Obj::Obj()
{
	mKoshiJoint = nullptr;
	mFsm        = nullptr;
	mAnimator   = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	8036F040
 * Size:	0000A0
 */
void Obj::doUpdate()
{
	if (!isEvent(0, EB_Bittered)) {
		mFsm->exec(this);
		int stateID = getStateID();
		if (stateID == TAMAGOMUSHI_Walk || stateID == TAMAGOMUSHI_Turn) {
			_2BC++;
			if (_2BC > _2C0) {
				mFsm->transit(this, TAMAGOMUSHI_Hide, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8036F0E0
 * Size:	000158
 */
void Obj::doAnimationCullingOff()
{
	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();

	if (mPellet) {
		viewMakeMatrix(mObjMatrix);
		Matrixf mtx;
		PSMTXScale(mtx.mMatrix.mtxView, mScale.x, mScale.y, mScale.z);
		PSMTXConcat(mObjMatrix.mMatrix.mtxView, mtx.mMatrix.mtxView, mObjMatrix.mMatrix.mtxView);

		Vector3f pos;
		mObjMatrix.getTranslation(pos);
		onSetPosition(pos);
		onSetPositionPost(pos);
	} else {
		mObjMatrix.makeTR(mPosition, mRotation);
	}

	PSMTXCopy(mObjMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);

	if (C_PARMS->_923 && getCurrAnimIndex() == 2) {
		J3DModel* model = mModel->getJ3DModel();
		C_MGR->fetch(model, getMotionFrame());

	} else {
		mModel->mJ3dModel->calc();
	}

	mCollTree->update();
}

/*
 * --INFO--
 * Address:	8036F238
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8036F23C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8036F25C
 * Size:	0000DC
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (creature && creature->isPiki()) {
		if (isEvent(0, EB_Bittered)) {
			if (mEnemyStoneObj->isFlag(EnemyStone::STONE_HasViewedDemo)) {
				genItem();
				kill(nullptr);
				return true;
			} else {
				return false;
			}
		}

		if (getStateID() != TAMAGOMUSHI_Dead) {
			mFsm->transit(this, TAMAGOMUSHI_Dead, nullptr);
			enableEvent(0, EB_LifegaugeVisible);
			mHealth = 0.0f;
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	8036F338
 * Size:	0000BC
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 p1)
{
	if (getStateID() != TAMAGOMUSHI_Dead) {
		if (EnemyBase::bombCallBack(creature, vec, p1)) {
			mFsm->transit(this, TAMAGOMUSHI_Dead, nullptr);
			enableEvent(0, EB_LifegaugeVisible);
			mHealth = 0.0f;
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	8036F3F4
 * Size:	000134
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* part)
{
	int stateID = getStateID();
	if (isEvent(0, EB_Bittered)) {
		_304++;
		if (_304 > 4) {
			genItem();
			kill(nullptr);
		}

		return true;
	}

	EnemyBase::damageCallBack(creature, 0.0f, part);

	if (stateID != TAMAGOMUSHI_Appear && stateID != TAMAGOMUSHI_Dead) {
		if (creature && creature->isPiki()) {
			int pikiStateID = static_cast<Piki*>(creature)->getStateID();
			if (pikiStateID != PIKISTATE_Panic && pikiStateID != PIKISTATE_Flying) {
				InteractAstonish astonish(this, C_PARMS->_944);
				creature->stimulate(astonish);
			}
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	8036F528
 * Size:	0000F8
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (!isEvent(0, EB_Bittered)) {
		int id = getStateID();
		setCollEvent(event);
		Creature* hitobj = event.mCollidingCreature;

		// astonish pikmin with the horrible mitite smell
		if (hitobj && (hitobj->isPiki()) && (id != TAMAGOMUSHI_Appear)) {
			Piki* piki = static_cast<Piki*>(hitobj);
			if ((piki->getStateID() != PIKISTATE_Panic) && (piki->getStateID() != PIKISTATE_Flying)) {
				InteractAstonish act(this, C_PARMS->_944);
				hitobj->stimulate(act);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8036F620
 * Size:	000178
 */
void Obj::bounceCallback(Sys::Triangle*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lbz      r0, 0x300(r3)
	cmplwi   r0, 0
	beq      lbl_8036F77C
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfs      f5, 0x1fc(r31)
	stw      r0, 0x18(r1)
	lfd      f1, lbl_8051EAD0@sda21(r2)
	fmr      f4, f5
	lfd      f0, 0x18(r1)
	lfs      f2, lbl_8051EAB0@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f0, lbl_8051EAC4@sda21(r2)
	lwz      r4, 0xc0(r31)
	lfs      f1, lbl_8051EAC0@sda21(r2)
	fcmpo    cr0, f5, f0
	fdivs    f2, f3, f2
	lfs      f0, lbl_8051EABC@sda21(r2)
	lfs      f7, 0x938(r4)
	fmadds   f6, f1, f2, f0
	bge      lbl_8036F694
	fneg     f4, f5

lbl_8036F694:
	lfs      f3, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f1, 0x934(r4)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f4, f3
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fmuls    f1, f1, f6
	fcmpo    cr0, f5, f0
	fctiwz   f0, f2
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f2, f7, f0
	bge      lbl_8036F6F8
	lfs      f0, lbl_8051EACC@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8036F710

lbl_8036F6F8:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8036F710:
	fmuls    f0, f7, f0
	stfs     f1, 0xc(r1)
	mr       r3, r31
	addi     r4, r1, 8
	stfs     f2, 0x10(r1)
	stfs     f0, 8(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	li       r0, 0
	lfs      f1, lbl_8051EAD8@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x1d4(r31)
	lfs      f0, lbl_8051EAC4@sda21(r2)
	lfs      f2, 0xc(r1)
	stfs     f2, 0x1d8(r31)
	lfs      f2, 0x10(r1)
	stfs     f2, 0x1dc(r31)
	lfs      f2, 0x190(r31)
	fadds    f1, f2, f1
	stfs     f1, 0x190(r31)
	stb      r0, 0x2f0(r31)
	stfs     f0, 0x1ac(r31)
	stfs     f0, 0x1a4(r31)
	bl       appearPanic__Q34Game11TamagoMushi3ObjFv

lbl_8036F77C:
	li       r0, 0
	stb      r0, 0x300(r31)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036F798
 * Size:	00002C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* part) { return pressCallBack(creature, damage, part); }

/*
 * --INFO--
 * Address:	8036F7C4
 * Size:	000030
 */
bool Obj::earthquakeCallBack(Creature* creature, f32 damage) { return pressCallBack(creature, damage, nullptr); }

/*
 * --INFO--
 * Address:	8036F7F4
 * Size:	0000A8
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* worldMatrix = mKoshiJoint->getWorldMatrix();

	shadowParam.mPosition
	    = Vector3f(worldMatrix->mMatrix.mtxView[0][3], worldMatrix->mMatrix.mtxView[1][3], worldMatrix->mMatrix.mtxView[2][3]);

	if (mPellet || getStateID() == TAMAGOMUSHI_Dead) {
		shadowParam.mPosition.y = mPosition.y + 2.0f;
	}
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 15.0f;
	shadowParam.mSize                     = 12.0f;
}

/*
 * --INFO--
 * Address:	8036F89C
 * Size:	000030
 */
bool Obj::needShadow()
{
	return EnemyBase::needShadow() > 0; // WHY MAN.
}

/*
 * --INFO--
 * Address:	8036F8CC
 * Size:	000208
 */
void Obj::genItem()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stw      r30, 0x48(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_8036F8FC
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	beq      lbl_8036FABC

lbl_8036F8FC:
	li       r0, 1
	stb      r0, 0x1f3(r31)
	lwz      r30, 0xc0(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051EAD0@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_8051EAB0@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, 0x86c(r30)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bgt      lbl_8036FABC
	lfs      f3, 0x1fc(r31)
	lfs      f0, lbl_8051EAC4@sda21(r2)
	lfs      f2, lbl_8051EAEC@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_8036F97C
	lfs      f0, lbl_8051EACC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_8036F9A0

lbl_8036F97C:
	lfs      f0, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_8036F9A0:
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fmuls    f2, f2, f1
	lfs      f1, lbl_8051EAEC@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_8036F9E0
	lfs      f0, lbl_8051EACC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8036FA04

lbl_8036F9E0:
	lfs      f0, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8036FA04:
	fmuls    f1, f1, f0
	lfs      f0, lbl_8051EAF0@sda21(r2)
	lwz      r0, mgr__Q24Game9ItemHoney@sda21(r13)
	stfs     f0, 0x18(r1)
	lfs      f0, lbl_8051EADC@sda21(r2)
	cmplwi   r0, 0
	stfs     f1, 0x14(r1)
	stfs     f2, 0x1c(r1)
	lfs      f1, 0x18c(r31)
	stfs     f1, 8(r1)
	lfs      f1, 0x190(r31)
	stfs     f1, 0xc(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x194(r31)
	stfs     f1, 0x10(r1)
	stfs     f0, 0xc(r1)
	bne      lbl_8036FA64
	lis      r3, lbl_804924F4@ha
	lis      r5, lbl_80492504@ha
	addi     r3, r3, lbl_804924F4@l
	li       r4, 0x1b5
	addi     r5, r5, lbl_80492504@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8036FA64:
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r0, r3, r3
	beq      lbl_8036FABC
	mr       r30, r0
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x1e0(r30)
	addi     r4, r1, 8
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	addi     r4, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8036FABC:
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
 * Address:	8036FAD4
 * Size:	000310
 */
void Obj::walkFunc()
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
	stfd     f27, 0x40(r1)
	psq_st   f27, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lfs      f2, lbl_8051EAF4@sda21(r2)
	lfs      f1, 0x1a4(r3)
	lfs      f0, lbl_8051EAF8@sda21(r2)
	fmuls    f1, f1, f2
	stfs     f1, 0x1a4(r3)
	lfs      f1, 0x1ac(r3)
	fmuls    f1, f1, f2
	stfs     f1, 0x1ac(r3)
	lwz      r3, 0xc0(r3)
	lfs      f2, 0x2fc(r31)
	lfs      f1, 0x928(r3)
	lfs      f3, 0x2c8(r31)
	fadds    f1, f2, f1
	lfs      f2, 0x2e4(r3)
	lfs      f5, 0x924(r3)
	lfs      f4, 0x2cc(r31)
	fmuls    f29, f3, f2
	lfs      f3, 0x2c4(r31)
	lfs      f2, 0x334(r3)
	fmuls    f27, f5, f4
	stfs     f1, 0x2fc(r31)
	fmuls    f28, f3, f2
	lfs      f1, 0x2fc(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8036FB7C
	fsubs    f0, f1, f0
	stfs     f0, 0x2fc(r31)

lbl_8036FB7C:
	lfs      f1, 0x2fc(r31)
	bl       sin
	lwz      r3, 0xc0(r31)
	frsp     f0, f1
	lbz      r0, 0x920(r3)
	fmuls    f2, f27, f0
	cmplwi   r0, 0
	beq      lbl_8036FBA0
	lfs      f2, lbl_8051EAC4@sda21(r2)

lbl_8036FBA0:
	lfs      f1, 0x2d0(r31)
	lfs      f0, lbl_8051EB04@sda21(r2)
	fmuls    f2, f2, f1
	lfs      f3, lbl_8051EB00@sda21(r2)
	fadds    f1, f1, f0
	lfs      f4, lbl_8051EAFC@sda21(r2)
	lfs      f0, lbl_8051EAE0@sda21(r2)
	fmuls    f2, f3, f2
	stfs     f1, 0x2d0(r31)
	lfs      f1, 0x2d0(r31)
	fmuls    f30, f4, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8036FBD8
	stfs     f0, 0x2d0(r31)

lbl_8036FBD8:
	lwz      r3, 0xc0(r31)
	lbz      r0, 0x921(r3)
	cmplwi   r0, 0
	beq      lbl_8036FC90
	lfs      f1, 0x2d4(r31)
	lfs      f0, lbl_8051EAE0@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x2d4(r31)
	lfs      f1, 0x2d4(r31)
	lfs      f0, 0x2d8(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8036FC58
	lbz      r0, 0x2dc(r31)
	cntlzw   r0, r0
	srwi     r0, r0, 5
	stb      r0, 0x2dc(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 0x18(r1)
	lfd      f1, lbl_8051EAD0@sda21(r2)
	lfd      f0, 0x18(r1)
	lfs      f2, lbl_8051EAB0@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f1, 0x92c(r3)
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f1, f1, f2
	stfs     f1, 0x2d8(r31)
	stfs     f0, 0x2d4(r31)

lbl_8036FC58:
	lbz      r0, 0x2dc(r31)
	cmplwi   r0, 0
	beq      lbl_8036FC90
	lfs      f1, 0x2d4(r31)
	lfs      f0, 0x2d8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_8036FC90
	fdivs    f0, f1, f0
	lfs      f1, lbl_8051EAE0@sda21(r2)
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x930(r3)
	fsubs    f0, f1, f0
	fmuls    f0, f2, f0
	fmuls    f29, f29, f0

lbl_8036FC90:
	lfs      f1, 0x2ec(r31)
	lfs      f0, lbl_8051EAC4@sda21(r2)
	stfs     f1, 0x1fc(r31)
	lfs      f4, 0x1fc(r31)
	fadds    f3, f4, f30
	fcmpo    cr0, f3, f0
	bge      lbl_8036FCD8
	lfs      f0, lbl_8051EACC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8036FCFC

lbl_8036FCD8:
	lfs      f0, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8036FCFC:
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fmuls    f31, f29, f2
	lfs      f1, 0x1d4(r31)
	lfs      f27, 0x1d8(r31)
	fcmpo    cr0, f3, f0
	lfs      f0, 0x1dc(r31)
	stfs     f1, 8(r1)
	stfs     f27, 0xc(r1)
	stfs     f0, 0x10(r1)
	bge      lbl_8036FD28
	fneg     f3, f3

lbl_8036FD28:
	lfs      f0, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	fabs     f2, f30
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f0
	frsp     f0, f2
	fctiwz   f1, f1
	fcmpo    cr0, f0, f28
	stfd     f1, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	fmuls    f29, f29, f0
	stfs     f4, 0x2ec(r31)
	ble      lbl_8036FD80
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8036FD7C
	fmr      f30, f28
	b        lbl_8036FD80

lbl_8036FD7C:
	fneg     f30, f28

lbl_8036FD80:
	fmr      f1, f30
	bl       roundAng__Ff
	lfs      f0, 0x1fc(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	stfs     f31, 0x1d4(r31)
	stfs     f27, 0x1d8(r31)
	stfs     f29, 0x1dc(r31)
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	psq_l    f27, 72(r1), 0, qr0
	lfd      f27, 0x40(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036FDE4
 * Size:	000168
 */
void Obj::setGoalRandom()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lfs      f31, 0x35c(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f0, 0x198(r31)
	stw      r0, 8(r1)
	lfd      f3, lbl_8051EAD0@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f2, lbl_8051EAB0@sda21(r2)
	fsubs    f3, f1, f3
	stfs     f0, 0x2e0(r31)
	lfs      f1, lbl_8051EB08@sda21(r2)
	lfs      f0, 0x19c(r31)
	fdivs    f2, f3, f2
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2e8(r31)
	fmadds   f0, f1, f2, f1
	fmuls    f31, f31, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051EAD0@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_8051EAB0@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051EB0C@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f3, f1, f2
	fcmpo    cr0, f3, f0
	bge      lbl_8036FEBC
	lfs      f0, lbl_8051EACC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8036FEE0

lbl_8036FEBC:
	lfs      f0, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8036FEE0:
	lfs      f1, 0x2e0(r31)
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fmadds   f1, f31, f2, f1
	fcmpo    cr0, f3, f0
	stfs     f1, 0x2e0(r31)
	bge      lbl_8036FEFC
	fneg     f3, f3

lbl_8036FEFC:
	lfs      f1, lbl_8051EAC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x2e8(r31)
	fmuls    f1, f3, f1
	fctiwz   f1, f1
	stfd     f1, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2e8(r31)
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
 * Address:	8036FF4C
 * Size:	0000B8
 */
void Obj::setGoalDirect(Vector3f&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0xc0(r3)
	lfs      f31, 0x93c(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f0, 0x18c(r30)
	stw      r0, 8(r1)
	lfd      f3, lbl_8051EAD0@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f1, lbl_8051EAB0@sda21(r2)
	fsubs    f3, f2, f3
	stfs     f0, 0x2e0(r30)
	lfs      f2, lbl_8051EB08@sda21(r2)
	lfs      f0, 0x190(r30)
	fdivs    f3, f3, f1
	stfs     f0, 0x2e4(r30)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x2e8(r30)
	lfs      f1, 0(r31)
	lfs      f0, 0x2e0(r30)
	fmadds   f2, f2, f3, f2
	fmuls    f31, f31, f2
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2e0(r30)
	lfs      f1, 8(r31)
	lfs      f0, 0x2e8(r30)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2e8(r30)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80370004
 * Size:	00015C
 */
bool Obj::turnFunc()
{
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
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r5, 0xc0(r31)
	mr       r4, r31
	lwz      r12, 0(r31)
	lfs      f2, 0x2c4(r31)
	lfs      f1, 0x334(r5)
	lfs      f0, 0x30c(r5)
	lwz      r12, 8(r12)
	fmuls    f29, f2, f1
	fmuls    f30, f2, f0
	mtctr    r12
	bctrl
	lfs      f3, 0x2e0(r31)
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 8(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f2, 0x2e8(r31)
	lfs      f0, 0x10(r1)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051EB00@sda21(r2)
	lfs      f1, lbl_8051EAFC@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_803700EC
	lfs      f0, lbl_8051EAC4@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_803700E8
	fmr      f29, f1
	b        lbl_803700EC

lbl_803700E8:
	fneg     f29, f1

lbl_803700EC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051EB04@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80370130
	li       r3, 1
	b        lbl_80370134

lbl_80370130:
	li       r3, 0

lbl_80370134:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r0, 0x54(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80370160
 * Size:	000034
 */
bool Obj::isReachToGoal(f32 goalRadius)
{
	return sqrDistanceXZ(mPosition, mGoalPosition) < SQUARE(goalRadius);
	/*
	fmuls    f0, f1, f1
	lfs      f2, 0x194(r3)
	lfs      f1, 0x2e8(r3)
	lfs      f3, 0x18c(r3)
	fsubs    f2, f2, f1
	lfs      f1, 0x2e0(r3)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	80370194
 * Size:	00002C
 */
void Obj::resetWalkParm()
{
	_2D0 = 0.0f;
	_2D4 = 0.0f;
	_2D8 = C_PARMS->_92C;
	_2DC = 0;
	_2EC = mFaceDir;
}

/*
 * --INFO--
 * Address:	803701C0
 * Size:	000028
 */
void Obj::startCarcassMotion()
{
	startMotion(5, nullptr); // needs enum/define
}

/*
 * --INFO--
 * Address:	803701E8
 * Size:	000058
 */
void Obj::setLeader(Obj* leader)
{
	if (mLeader != leader) {
		mLeader = leader;
		if (mLeader->_2F0) {
			setTypeBall();
		}
		disableEvent(0, EB_Cullable);
	}
}

/*
 * --INFO--
 * Address:	80370240
 * Size:	000054
 */
void Obj::setTypeBall()
{
	mFsm->start(this, TAMAGOMUSHI_Wait, nullptr);
	_2F0 = true;
	_300 = true;
}

/*
 * --INFO--
 * Address:	80370294
 * Size:	000344
 */
void Obj::appearPanic()
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
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r31, r3
	lwz      r0, 0x2f4(r3)
	cmplwi   r0, 0
	beq      lbl_803702E4
	cmplw    r0, r31
	bne      lbl_8037059C

lbl_803702E4:
	lwz      r5, 0xc0(r31)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lfs      f0, 0x948(r5)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	fmuls    f28, f0, f0
	stw      r4, 0x2c(r1)
	stw      r0, 0x38(r1)
	stw      r0, 0x30(r1)
	stw      r3, 0x34(r1)
	bne      lbl_80370330
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8037057C

lbl_80370330:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8037039C

lbl_80370348:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8037057C
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_8037039C:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80370348
	b        lbl_8037057C

lbl_803703BC:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	li       r30, 0
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80370420
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80370420
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80370420
	li       r30, 1

lbl_80370420:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803704C0
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lfs      f29, 0x194(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x18c(r31)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x14
	lwz      r12, 0(r29)
	lfs      f31, 0x10(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f31, f29
	lfs      f1, 0x14(r1)
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f28
	bge      lbl_803704C0
	lwz      r6, 0xc0(r31)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game16InteractAstonish@ha
	mr       r3, r29
	lfs      f0, 0x944(r6)
	addi     r5, r5, __vt__Q24Game11Interaction@l
	addi     r0, r4, __vt__Q24Game16InteractAstonish@l
	addi     r4, r1, 0x20
	stw      r5, 0x20(r1)
	stw      r31, 0x24(r1)
	stw      r0, 0x20(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_803704C0:
	lwz      r0, 0x38(r1)
	cmplwi   r0, 0
	bne      lbl_803704EC
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8037057C

lbl_803704EC:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_80370560

lbl_8037050C:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8037057C
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_80370560:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8037050C

lbl_8037057C:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x30(r1)
	cmplw    r4, r3
	bne      lbl_803703BC

lbl_8037059C:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r0, 0x94(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803705D8
 * Size:	0003BC
 */
bool Obj::isFound()
{
	// return gameSystem->isZukanMode(); // this gets used in here somewhere
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r31, 0x2f4(r3)
	cmplwi   r31, 0
	beq      lbl_80370900
	cmplw    r31, r30
	beq      lbl_80370900
	lwz      r30, 0x2f4(r31)
	cmplwi   r30, 0
	beq      lbl_80370880
	cmplw    r30, r31
	beq      lbl_80370880
	lwz      r31, 0x2f4(r30)
	cmplwi   r31, 0
	beq      lbl_80370800
	cmplw    r31, r30
	beq      lbl_80370800
	lwz      r30, 0x2f4(r31)
	cmplwi   r30, 0
	beq      lbl_80370780
	cmplw    r30, r31
	beq      lbl_80370780
	lwz      r31, 0x2f4(r30)
	cmplwi   r31, 0
	beq      lbl_80370700
	cmplw    r31, r30
	beq      lbl_80370700
	lwz      r3, 0x2f4(r31)
	cmplwi   r3, 0
	beq      lbl_80370678
	cmplw    r3, r31
	beq      lbl_80370678
	bl       isFound__Q34Game11TamagoMushi3ObjFv
	b        lbl_80370974

lbl_80370678:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80370698
	bl       isZukanMode__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80370698
	li       r3, 1
	b        lbl_80370974

lbl_80370698:
	lwz      r3, 0xc0(r31)
	addi     r3, r3, 0x82c
	bl       "__cl__7Parm<f>Fv"
	lfs      f31, 0(r3)
	mr       r3, r31
	lfs      f1, lbl_8051EB10@sda21(r2)
	li       r4, 0
	fmr      f2, f31
	li       r5, 0
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_803706D0
	li       r3, 1
	b        lbl_80370974

lbl_803706D0:
	fmr      f2, f31
	lfs      f1, lbl_8051EB10@sda21(r2)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_803706F8
	li       r3, 1
	b        lbl_80370974

lbl_803706F8:
	li       r3, 0
	b        lbl_80370974

lbl_80370700:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80370720
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_80370720
	li       r3, 1
	b        lbl_80370974

lbl_80370720:
	lwz      r5, 0xc0(r30)
	mr       r3, r30
	lfs      f1, lbl_8051EB10@sda21(r2)
	li       r4, 0
	lfs      f31, 0x844(r5)
	li       r5, 0
	fmr      f2, f31
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80370750
	li       r3, 1
	b        lbl_80370974

lbl_80370750:
	fmr      f2, f31
	lfs      f1, lbl_8051EB10@sda21(r2)
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_80370778
	li       r3, 1
	b        lbl_80370974

lbl_80370778:
	li       r3, 0
	b        lbl_80370974

lbl_80370780:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803707A0
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_803707A0
	li       r3, 1
	b        lbl_80370974

lbl_803707A0:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051EB10@sda21(r2)
	li       r4, 0
	lfs      f31, 0x844(r5)
	li       r5, 0
	fmr      f2, f31
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_803707D0
	li       r3, 1
	b        lbl_80370974

lbl_803707D0:
	fmr      f2, f31
	lfs      f1, lbl_8051EB10@sda21(r2)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_803707F8
	li       r3, 1
	b        lbl_80370974

lbl_803707F8:
	li       r3, 0
	b        lbl_80370974

lbl_80370800:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80370820
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_80370820
	li       r3, 1
	b        lbl_80370974

lbl_80370820:
	lwz      r5, 0xc0(r30)
	mr       r3, r30
	lfs      f1, lbl_8051EB10@sda21(r2)
	li       r4, 0
	lfs      f31, 0x844(r5)
	li       r5, 0
	fmr      f2, f31
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80370850
	li       r3, 1
	b        lbl_80370974

lbl_80370850:
	fmr      f2, f31
	lfs      f1, lbl_8051EB10@sda21(r2)
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_80370878
	li       r3, 1
	b        lbl_80370974

lbl_80370878:
	li       r3, 0
	b        lbl_80370974

lbl_80370880:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803708A0
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_803708A0
	li       r3, 1
	b        lbl_80370974

lbl_803708A0:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051EB10@sda21(r2)
	li       r4, 0
	lfs      f31, 0x844(r5)
	li       r5, 0
	fmr      f2, f31
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_803708D0
	li       r3, 1
	b        lbl_80370974

lbl_803708D0:
	fmr      f2, f31
	lfs      f1, lbl_8051EB10@sda21(r2)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_803708F8
	li       r3, 1
	b        lbl_80370974

lbl_803708F8:
	li       r3, 0
	b        lbl_80370974

lbl_80370900:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80370920
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_80370920
	li       r3, 1
	b        lbl_80370974

lbl_80370920:
	lwz      r5, 0xc0(r30)
	mr       r3, r30
	lfs      f1, lbl_8051EB10@sda21(r2)
	li       r4, 0
	lfs      f31, 0x844(r5)
	li       r5, 0
	fmr      f2, f31
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80370950
	li       r3, 1
	b        lbl_80370974

lbl_80370950:
	fmr      f2, f31
	lfs      f1, lbl_8051EB10@sda21(r2)
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f

lbl_80370974:
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
 * Address:	803709B0
 * Size:	000044
 */
void Obj::createFellow()
{
	if (!mLeader || mLeader == this) {
		C_MGR->createGroup(this, 10, false);
	}
}

/*
 * --INFO--
 * Address:	803709F4
 * Size:	00009C
 */
void Obj::ballMove()
{
	f32 vel = JMAAbs((mCurrentVelocity.y * 2.0f) / 50.0f);
	if (vel > 2.0f) {
		vel = 2.0f;
	}
	EnemyFunc::walkToTarget(this, mGoalPosition, C_PARMS->mGeneral.mMoveSpeed.mValue * 0.2f,
	                        C_PARMS->mGeneral.mRotationalAccel.mValue * vel, C_PARMS->mGeneral.mRotationalSpeed.mValue * vel);
	mRotation.x *= 0.95f;
	mRotation.z *= 0.95f;
}

/*
 * --INFO--
 * Address:	80370A90
 * Size:	0000A8
 */
void Obj::createHideEffect()
{
	efx::Arg arg = mPosition;
	efx::TUjinkoHd effect(mModel->mJoints->getWorldMatrix());
	effect.create(&arg);
}

/*
 * --INFO--
 * Address:	80370B38
 * Size:	0000A8
 */
void Obj::createAppearEffect()
{
	efx::Arg arg = mPosition;
	efx::TTamagoAp effect(mModel->mJoints->getWorldMatrix());
	effect.create(&arg);
}

} // namespace TamagoMushi
} // namespace Game
