#include "Game/Entities/TamagoMushi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Game/PikiState.h"
#include "Game/Entities/ItemHoney.h"
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
void Obj::bounceCallback(Sys::Triangle* tri)
{
	if (_300) {
		f32 velY     = 0.7f + 0.3f * randFloat();
		f32 speed    = C_PARMS->_938;
		Vector3f vel = Vector3f(pikmin2_sinf(mFaceDir) * speed, C_PARMS->_934 * velY, pikmin2_cosf(mFaceDir) * speed);
		setVelocity(vel);
		mTargetVelocity = vel;
		mPosition.y += 10.0f;
		_2F0        = false;
		mRotation.z = 0.0f;
		mRotation.x = 0.0f;
		appearPanic();
	}

	_300 = false;
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
	shadowParam.mPosition = mKoshiJoint->getWorldMatrix()->getBasis(3);

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
	if (!gameSystem || gameSystem->mMode != GSM_PIKLOPEDIA) {
		mInPiklopedia = 1;

		if (!(randFloat() > C_PROPERPARMS.mFp03())) {
			Vector3f nectarVel
			    = Vector3f(pikmin2_sinf(mFaceDir) * 50.0f, 200.0f, pikmin2_sinf(mFaceDir) * 50.0f); // why are these both sines smh
			Vector3f nectarPos = mPosition;
			nectarPos.y += 2.0f;

			P2ASSERTLINE(437, ItemHoney::mgr);
			BaseItem* item = ItemHoney::mgr->birth();
			if (item) {
				ItemHoney::Item* nectar = static_cast<ItemHoney::Item*>(item);
				nectar->init(nullptr);
				nectar->mHoneyType = HONEY_Y;
				nectar->setPosition(nectarPos, false);
				nectar->setVelocity(nectarVel);
			}
		}
	}
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
	if (!mLeader || mLeader == this) {
		f32 rad = SQUARE(C_PARMS->_948);
		Iterator<Piki> iter(pikiMgr);
		CI_LOOP(iter)
		{
			Piki* piki = *iter;
			if (piki->isSearchable()) {
				// probably should be an inline?
				Vector2f sep = Vector2f(piki->getPosition().x, piki->getPosition().z) - Vector2f(mPosition.x, mPosition.z);
				if (sep.sqrMagnitude() < rad) {
					InteractAstonish astonish(this, C_PARMS->_944);
					piki->stimulate(astonish);
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	803705D8
 * Size:	0003BC
 */
bool Obj::isFound()
{
	if (mLeader && mLeader != this) {
		return mLeader->isFound();
	}

	if (gameSystem && gameSystem->isZukanMode()) {
		return true;
	}

	f32 searchRad = C_PROPERPARMS.mFp02();
	if (EnemyFunc::getNearestPikmin(this, 180.0f, searchRad, nullptr, nullptr)) {
		return true;
	}

	if (EnemyFunc::getNearestNavi(this, 180.0f, searchRad, nullptr, nullptr)) {
		return true;
	}

	return false;
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
	efx::Arg arg(mPosition);
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
	efx::Arg arg(mPosition);
	efx::TTamagoAp effect(mModel->mJoints->getWorldMatrix());
	effect.create(&arg);
}

} // namespace TamagoMushi
} // namespace Game
