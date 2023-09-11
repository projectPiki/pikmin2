#include "Game/Entities/Tyre.h"
#include "Game/EnemyFunc.h"
#include "Game/Stickers.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/PikiMgr.h"
#include "Game/MapMgr.h"
#include "efx/TKage.h"
#include "efx/TKch.h"
#include "SoundID.h"
#include "System.h"
#include "nans.h"

namespace Game {
namespace Tyre {

/*
 * --INFO--
 * Address:	803AC2F0
 * Size:	000038
 */
bool frontTyreCallBack(J3DJoint* jnt, int a)
{
	if (a == 0 && curT) {
		curT->frontRollMtxCalc();
	}
	return true;
}

/*
 * --INFO--
 * Address:	803AC328
 * Size:	000038
 */
bool rearTyreCallBack(J3DJoint* jnt, int a)
{
	if (a == 0 && curT) {
		curT->rearRollMtxCalc();
	}
	return true;
}

/*
 * --INFO--
 * Address:	803AC360
 * Size:	000020
 */
void Obj::setParameters() { EnemyBase::setParameters(); }

/*
 * --INFO--
 * Address:	803AC380
 * Size:	000020
 */
// void birth__Q34Game4Tyre3ObjFR10Vector3f f()
void Obj::birth(Vector3f& pos, f32 angle) { EnemyBase::birth(pos, angle); }

/*
 * --INFO--
 * Address:	803AC3A0
 * Size:	00018C
 */
void Obj::onInit(CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_DeathEffectEnabled);
	setEmotionNone();
	hardConstraintOn();
	disableEvent(0, EB_Cullable);

	mFsm->start(this, TYRE_Land, nullptr);
	curT = nullptr;

	P2ASSERTLINE(96, mModel);
	J3DModelData* model                                        = mModel->mJ3dModel->mModelData;
	mTyreFrontJointIndex                                       = mModel->getJointIndex("tyrefront");
	mTyreRearJointIndex                                        = mModel->getJointIndex("tyreback");
	model->mJointTree.mJoints[mTyreFrontJointIndex]->mFunction = frontTyreCallBack;
	model->mJointTree.mJoints[mTyreRearJointIndex]->mFunction  = rearTyreCallBack;

	_314              = mFaceDir;
	_2CC              = 0.0f;
	_2C0              = 0.0f;
	_2C4              = 0.0f;
	_2C8              = mPosition.y;
	mAnimCounter      = 0;
	mFallingYPosition = 0.0f;
	shadowMgr->delNormalShadow(this);
	mShadowMgr->init();
	_321         = 0;
	mEfxPosition = mPosition;
}

/*
 * --INFO--
 * Address:	803AC52C
 * Size:	0003C0
 */
Obj::Obj()
    : mOwner(nullptr)
    , _2D0(0)
    , mIsUnderground(true)
    , mIsShadowActive(false)
{
	mFsm         = nullptr;
	mShadowScale = 0.01f;
	_30C         = 0.0f;
	_320         = 1;
	_321         = 0;
	_322         = 0;
	mEfxSmoke1   = nullptr;
	mEfxSmoke2   = nullptr;
	mShadowMgr   = nullptr;
	mEfxHamon    = nullptr;
	_340         = 0;
	mAnimator    = new ProperAnimator;
	setFSM(new FSM);
	mEfxSmoke1 = new efx::TKageTyresmoke(&mPosition, &mFaceDir);
	mEfxSmoke2 = new efx::TKageTyresmoke(&mPosition, &mFaceDir);
	mEfxHamon  = new efx::TEnemyHamonChasePos(&mEfxPosition);
	mShadowMgr = new TyreShadowMgr(this);
}

/*
 * --INFO--
 * Address:	803AC8EC
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
 * Address:	803AC938
 * Size:	00004C
 */
void Obj::doUpdate()
{
	getStateID();
	isStopMotion();
	mFsm->exec(this);
}

/*
 * --INFO--
 * Address:	803AC984
 * Size:	0000B8
 */
void Obj::doAnimationCullingOff()
{
	if (C_PARMS->mDoUseGlobalJointMgr) {
		curT = this;
	}

	if (mAnimCounter > 0 && !isEvent(0, EB_Bittered)) {
		mPosition.y += mFallingYPosition;
		mAnimCounter--;
	} else {
		disableEvent(0, EB_Untargetable);
		mAnimCounter = 0;
	}

	EnemyBase::doAnimationCullingOff();
	curT = nullptr;
	if (mIsShadowActive) {
		mShadowMgr->mGlobalScale = mShadowScale;
		mShadowMgr->update();
	}
}

/*
 * --INFO--
 * Address:	803ACA3C
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	803ACA40
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	803ACA60
 * Size:	000020
 */
void Obj::doSimulation(f32 rate) { EnemyBase::doSimulation(rate); }

/*
 * --INFO--
 * Address:	803ACA80
 * Size:	000080
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& param)
{
	EnemyBase::doGetLifeGaugeParam(param);
	u32 id   = mTyreRearJointIndex;
	Mtx* mtx = mModel->mJ3dModel->mMtxBuffer->mWorldMatrices;

	param.mPosition.x = (param.mPosition.x + mtx[id][0][3]) * 0.5f;
	param.mPosition.z = (param.mPosition.z + mtx[id][2][3]) * 0.5f;
}

/*
 * --INFO--
 * Address:	803ACB00
 * Size:	00012C
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	mTargetVelocity  = 0.0f;
	mCurrentVelocity = 0.0f;
	_30C             = 0.0f;
	mAcceleration    = 0.0f;
	disableEvent(0, EB_Untargetable);
	mCollTree->getCollPart('tyr1')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr2')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr3')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr4')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr5')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr6')->mSpecialID = 'st__';
	fadeSmokeEffect();
}

/*
 * --INFO--
 * Address:	803ACC2C
 * Size:	000124
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	mCollTree->getCollPart('tyr1')->mSpecialID = '____';
	mCollTree->getCollPart('tyr2')->mSpecialID = '____';
	mCollTree->getCollPart('tyr3')->mSpecialID = '____';
	mCollTree->getCollPart('tyr4')->mSpecialID = '____';
	mCollTree->getCollPart('tyr5')->mSpecialID = '____';
	mCollTree->getCollPart('tyr6')->mSpecialID = '____';
	EnemyFunc::flickStickPikmin(this, 1.0f, C_PARMS->mGeneral.mShakeKnockback.mValue, 0.0f, -1000.0f, nullptr);
	if (getStateID() == TYRE_Move) {
		createSmokeEffect();
	}
}

/*
 * --INFO--
 * Address:	803ACD50
 * Size:	000538
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (event.mCollidingCreature->isTeki()) {
		mAcceleration = 0.0f;
	}
	EnemyBase::collisionCallback(event);

	if (!isFreeze()) {
		Creature* hitobj = event.mCollidingCreature;
		if (!isEvent(0, EB_Bittered) && hitobj) {

			// for pikmin and captains touching the tires, use InteractPress on them
			if ((hitobj->isPiki() || hitobj->isNavi()) && !hitobj->mBounceTriangle && hitobj->isStickTo()) {
				InteractPress act(this, C_PARMS->mGeneral.mAttackDamage, nullptr);
				hitobj->stimulate(act);
			} else {
				EnemyBase* hitenemy = static_cast<EnemyBase*>(hitobj);
				// kill any enemy on contact, unless its waterwraith itself
				if (hitenemy->isTeki() && hitenemy->getEnemyTypeID() != EnemyTypeID::EnemyID_BlackMan) {
					InteractBomb act(this, 10000.0f, &Vector3f::zero);
					hitenemy->stimulate(act);
				}

				// when wraith is touching a treasure, make it count as being airborne???
				Pellet* pelt = static_cast<Pellet*>(hitobj);
				if (pelt->isPellet()) {
					enableEvent(0, EB_Untargetable);
					mAnimCounter      = C_PARMS->_833;
					mFallingYPosition = C_PARMS->_848 * pelt->mConfig->mParams.mHeight.mData / mAnimCounter;
					_322              = true;
				}

				Stickers stick(hitobj);
				Iterator<Creature> it(&stick);
				CI_LOOP(it)
				{
					Creature* obj = *it;
					if (obj->isPiki()) {
						if ((getPosition().x - obj->getPosition().x) + (getPosition().z - obj->getPosition().z) < 900.0f) {
							InteractPress act(this, C_PARMS->mGeneral.mAttackDamage, nullptr);
							hitobj->stimulate(act);
						}
					}
				}
			}
		}
	}
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	mr       r29, r4
	mr       r30, r3
	lwz      r3, 0(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ACDAC
	lfs      f0, lbl_8051F5B8@sda21(r2)
	stfs     f0, 0x11c(r30)
	stfs     f0, 0x120(r30)
	stfs     f0, 0x124(r30)

lbl_803ACDAC:
	mr       r3, r30
	mr       r4, r29
	bl       collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
	mr       r3, r30
	bl       isFreeze__Q34Game4Tyre3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AD25C
	lwz      r0, 0x1e0(r30)
	lwz      r31, 0(r29)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803AD25C
	cmplwi   r31, 0
	beq      lbl_803AD25C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803ACE18
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ACE80

lbl_803ACE18:
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	bne      lbl_803ACE34
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ACE80

lbl_803ACE34:
	lwz      r5, 0xc0(r30)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r5)
	addi     r4, r4, __vt__Q24Game11Interaction@l
	addi     r5, r3, __vt__Q24Game13InteractPress@l
	mr       r3, r31
	stw      r4, 0x58(r1)
	addi     r4, r1, 0x58
	stw      r30, 0x5c(r1)
	stw      r5, 0x58(r1)
	stfs     f0, 0x60(r1)
	stw      r0, 0x64(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_803AD25C

lbl_803ACE80:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ACF20
	lwz      r3, 0(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x63
	beq      lbl_803ACF20
	lis      r3, __vt__Q24Game11Interaction@ha
	lis      r5, __vt__Q24Game12InteractWind@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, "zero__10Vector3<f>"@ha
	stw      r0, 0x84(r1)
	addi     r4, r3, "zero__10Vector3<f>"@l
	addi     r5, r5, __vt__Q24Game12InteractWind@l
	lfs      f3, lbl_8051F5CC@sda21(r2)
	lfs      f2, 0(r4)
	lis      r3, __vt__Q24Game12InteractBomb@ha
	lfs      f1, 4(r4)
	addi     r0, r3, __vt__Q24Game12InteractBomb@l
	stw      r5, 0x84(r1)
	mr       r3, r31
	lfs      f0, 8(r4)
	addi     r4, r1, 0x84
	stw      r30, 0x88(r1)
	stfs     f3, 0x8c(r1)
	stfs     f2, 0x90(r1)
	stfs     f1, 0x94(r1)
	stfs     f0, 0x98(r1)
	stw      r0, 0x84(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_803ACF20:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ACF98
	lwz      r3, 0x1e0(r30)
	lis      r0, 0x4330
	stw      r0, 0xa0(r1)
	li       r0, 1
	ori      r3, r3, 4
	lfd      f1, lbl_8051F5D8@sda21(r2)
	stw      r3, 0x1e0(r30)
	lwz      r3, 0xc0(r30)
	lbz      r3, 0x833(r3)
	stw      r3, 0x318(r30)
	lwz      r3, 0x318(r30)
	lwz      r4, 0x35c(r31)
	xoris    r3, r3, 0x8000
	lwz      r5, 0xc0(r30)
	stw      r3, 0xa4(r1)
	lfs      f2, 0xc0(r4)
	lfd      f0, 0xa0(r1)
	lfs      f3, 0x848(r5)
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	fmuls    f0, f3, f0
	stfs     f0, 0x31c(r30)
	stb      r0, 0x322(r30)

lbl_803ACF98:
	mr       r4, r31
	addi     r3, r1, 0x68
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x68
	cmplwi   r0, 0
	stw      r4, 0x48(r1)
	stw      r0, 0x54(r1)
	stw      r0, 0x4c(r1)
	stw      r3, 0x50(r1)
	bne      lbl_803ACFE4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AD230

lbl_803ACFE4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AD050

lbl_803ACFFC:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AD230
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)

lbl_803AD050:
	lwz      r12, 0x48(r1)
	addi     r3, r1, 0x48
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ACFFC
	b        lbl_803AD230

lbl_803AD070:
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AD174
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 8(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	fsubs    f30, f0, f31
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f31, 0x34(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x28(r1)
	lfs      f0, lbl_8051F5D0@sda21(r2)
	fsubs    f1, f1, f31
	fmuls    f1, f1, f1
	fmadds   f1, f30, f30, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803AD174
	lwz      r5, 0xc0(r30)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r5)
	addi     r4, r4, __vt__Q24Game11Interaction@l
	addi     r5, r3, __vt__Q24Game13InteractPress@l
	mr       r3, r31
	stw      r4, 0x38(r1)
	addi     r4, r1, 0x38
	stw      r30, 0x3c(r1)
	stw      r5, 0x38(r1)
	stfs     f0, 0x40(r1)
	stw      r0, 0x44(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_803AD174:
	lwz      r0, 0x54(r1)
	cmplwi   r0, 0
	bne      lbl_803AD1A0
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AD230

lbl_803AD1A0:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AD214

lbl_803AD1C0:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AD230
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)

lbl_803AD214:
	lwz      r12, 0x48(r1)
	addi     r3, r1, 0x48
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AD1C0

lbl_803AD230:
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r1)
	cmplw    r4, r3
	bne      lbl_803AD070
	addi     r3, r1, 0x68
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_803AD25C:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0xe4(r1)
	lwz      r29, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AD288
 * Size:	0000A0
 */
bool Obj::damageCallBack(Creature* obj, f32 damage, CollPart* coll)
{
	if (isEvent(0, EB_Bittered) || isFreeze()) {
		if (isEvent(0, EB_Bittered) || !_321) {
			return false;
		} else {
			return EnemyBase::damageCallBack(obj, damage, coll);
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	803AD328
 * Size:	00003C
 */
bool Obj::hipdropCallBack(Creature* obj, f32 damage, CollPart* coll)
{
	if (obj) {
		obj->isPiki();
	}
	return false;
}

/*
 * --INFO--
 * Address:	803AD364
 * Size:	000058
 */
bool Obj::earthquakeCallBack(Creature* obj, f32 damage)
{
	if (getStateID() == TYRE_Move) {
		mFsm->transit(this, TYRE_Freeze, nullptr);
	}
	return false;
}

/*
 * --INFO--
 * Address:	803AD3BC
 * Size:	000034
 */
void Obj::inWaterCallback(WaterBox* wbox)
{
	EnemyBase::inWaterCallback(wbox);
	fadeSmokeEffect();
}

/*
 * --INFO--
 * Address:	803AD3F0
 * Size:	000044
 */
void Obj::outWaterCallback()
{
	EnemyBase::outWaterCallback();
	if (getStateID() == TYRE_Move) {
		createSmokeEffect();
	}
}

/*
 * --INFO--
 * Address:	803AD434
 * Size:	000050
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition                 = mPosition;
	param.mPosition.y               = mPosition.y + 2.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 20.0f;
	param.mSize                     = 10.0f;
}

/*
 * --INFO--
 * Address:	803AD484
 * Size:	00004C
 */
bool Obj::needShadow()
{
	if (EnemyBase::needShadow()) {
		return true;
	}
	if (getStateID() == TYRE_Land)
		return true;
	return true;
}

/*
 * --INFO--
 * Address:	803AD4D0
 * Size:	000050
 */
bool Obj::isFreeze()
{
	if (getStateID() == TYRE_Freeze || getStateID() == TYRE_Dead) {
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	803AD520
 * Size:	000298
 */
void Obj::frontRollMtxCalc()
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r31, r3
	lhz      r0, 0x310(r3)
	lwz      r3, 0x174(r3)
	mulli    r0, r0, 0x3c
	lwz      r3, 0x10(r3)
	add      r3, r3, r0
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f0, lbl_8051F5B8@sda21(r2)
	mr       r30, r3
	stfs     f0, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x28(r1)
	lbz      r0, 0x2d0(r31)
	cmplwi   r0, 0
	beq      lbl_803AD5BC
	lwz      r0, 0x2d4(r31)
	lis      r4, mCurrentMtx__6J3DSys@ha
	lwz      r5, 0x2d8(r31)
	addi     r4, r4, mCurrentMtx__6J3DSys@l
	stw      r0, 8(r1)
	lwz      r0, 0x2dc(r31)
	stw      r5, 0xc(r1)
	lfs      f0, 8(r1)
	stw      r0, 0x10(r1)
	lfs      f1, 0xc(r1)
	stfs     f0, 0xc(r30)
	lfs      f0, 0x10(r1)
	stfs     f1, 0x1c(r30)
	stfs     f0, 0x2c(r30)
	bl       PSMTXCopy

lbl_803AD5BC:
	lwz      r3, 0xc0(r31)
	lfs      f0, lbl_8051F5B8@sda21(r2)
	lfs      f1, 0x834(r3)
	fcmpu    cr0, f0, f1
	beq      lbl_803AD5E0
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	b        lbl_803AD6D4

lbl_803AD5E0:
	lfs      f31, 0x844(r3)
	lfs      f30, 0x840(r3)
	lfs      f1, 0x1fc(r31)
	lfs      f2, 0x314(r31)
	bl       angDist__Fff
	fcmpo    cr0, f1, f30
	ble      lbl_803AD624
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x2cc(r31)
	lfs      f2, 0x838(r3)
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x2cc(r31)
	fcmpo    cr0, f0, f31
	ble      lbl_803AD6B0
	stfs     f31, 0x2cc(r31)
	b        lbl_803AD6B0

lbl_803AD624:
	fneg     f0, f30
	fcmpo    cr0, f1, f0
	bge      lbl_803AD65C
	lwz      r3, 0xc0(r31)
	fneg     f3, f31
	lfs      f0, 0x2cc(r31)
	lfs      f2, 0x838(r3)
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x2cc(r31)
	fcmpo    cr0, f0, f3
	bge      lbl_803AD6B0
	stfs     f3, 0x2cc(r31)
	b        lbl_803AD6B0

lbl_803AD65C:
	lfs      f2, 0x2cc(r31)
	lfs      f1, lbl_8051F5B8@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_803AD690
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x83c(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x2cc(r31)
	fcmpo    cr0, f0, f1
	bge      lbl_803AD6B0
	stfs     f1, 0x2cc(r31)
	b        lbl_803AD6B0

lbl_803AD690:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x83c(r3)
	fadds    f0, f2, f0
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x2cc(r31)
	fcmpo    cr0, f0, f1
	ble      lbl_803AD6B0
	stfs     f1, 0x2cc(r31)

lbl_803AD6B0:
	lfs      f1, 0x2cc(r31)
	addi     r3, r1, 0x2c
	lfs      f0, lbl_8051F5B8@sda21(r2)
	addi     r4, r1, 0x20
	stfs     f1, 0x18(r1)
	addi     r5, r1, 0x14
	stfs     f0, 0x14(r1)
	stfs     f0, 0x1c(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"

lbl_803AD6D4:
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051F5EC@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	addi     r4, r2, lbl_8051F5F4@sda21
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x2ec(r31)
	stfs     f1, 0x2f0(r31)
	stfs     f2, 0x2f4(r31)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	mr       r5, r30
	lfs      f1, 0x1c(r3)
	addi     r4, r1, 0x2c
	lfs      f0, 0xc(r3)
	mr       r3, r30
	stfs     f0, 0x2f8(r31)
	stfs     f1, 0x2fc(r31)
	stfs     f2, 0x300(r31)
	bl       PSMTXConcat
	lis      r3, mCurrentMtx__6J3DSys@ha
	addi     r4, r1, 0x2c
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	mr       r5, r3
	bl       PSMTXConcat
	lfs      f1, 0x2c0(r31)
	addi     r3, r1, 0x2c
	lfs      f0, lbl_8051F5B8@sda21(r2)
	addi     r4, r1, 0x20
	stfs     f1, 0x14(r1)
	addi     r5, r1, 0x14
	stfs     f0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	mr       r3, r30
	mr       r5, r30
	addi     r4, r1, 0x2c
	bl       PSMTXConcat
	lis      r3, mCurrentMtx__6J3DSys@ha
	addi     r4, r1, 0x2c
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	mr       r5, r3
	bl       PSMTXConcat
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0x94(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AD7B8
 * Size:	00038C
 */
void Obj::rearRollMtxCalc()
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	mr       r30, r3
	lhz      r0, 0x312(r3)
	lwz      r3, 0x174(r3)
	mulli    r0, r0, 0x3c
	lwz      r3, 0x10(r3)
	add      r3, r3, r0
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r31, r3
	lfs      f0, lbl_8051F5FC@sda21(r2)
	lfs      f2, 0x1c(r31)
	addi     r4, r1, 0x58
	lfs      f3, 0x2c(r31)
	lfs      f1, 0xc(r31)
	fadds    f0, f2, f0
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f2, 0x5c(r1)
	stfs     f1, 0x58(r1)
	stfs     f3, 0x60(r1)
	stfs     f0, 0x5c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	fmr      f31, f1
	lwz      r12, 0(r30)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AD880
	lfs      f1, lbl_8051F5E8@sda21(r2)
	lfs      f2, 0x2c8(r30)
	lfs      f0, 0x190(r30)
	fadds    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_803AD890
	lfs      f0, lbl_8051F5E0@sda21(r2)
	fadds    f0, f2, f0
	stfs     f0, 0x2c8(r30)
	b        lbl_803AD890

lbl_803AD880:
	lfs      f1, 0x2c8(r30)
	lfs      f0, lbl_8051F600@sda21(r2)
	fsubs    f0, f1, f0
	stfs     f0, 0x2c8(r30)

lbl_803AD890:
	lfs      f30, lbl_8051F5E0@sda21(r2)
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	beq      lbl_803AD8A8
	lfs      f30, lbl_8051F5B8@sda21(r2)

lbl_803AD8A8:
	fadds    f0, f31, f30
	lfs      f1, 0x2c8(r30)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803ADA7C
	stfs     f31, 0x2c8(r30)
	lfs      f0, lbl_8051F604@sda21(r2)
	lfs      f3, 0x2c(r31)
	lfs      f2, 0x1c(r31)
	fadds    f0, f31, f0
	lfs      f1, 0xc(r31)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x4c(r1)
	stfs     f3, 0x54(r1)
	stfs     f31, 0x50(r1)
	lfs      f1, 0x190(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_803AD910
	lbz      r0, 0x320(r30)
	cmplwi   r0, 0
	beq      lbl_803AD910
	mr       r3, r30
	addi     r4, r1, 0x4c
	bl       "landEffect__Q34Game4Tyre3ObjFR10Vector3<f>"
	li       r0, 0
	stb      r0, 0x320(r30)

lbl_803AD910:
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	beq      lbl_803ADA7C
	lfs      f0, 0x4c(r1)
	stfs     f0, 0x324(r30)
	lfs      f0, 0x50(r1)
	stfs     f0, 0x328(r30)
	lfs      f0, 0x54(r1)
	stfs     f0, 0x32c(r30)
	lwz      r0, 0x340(r30)
	cmplwi   r0, 0
	bne      lbl_803ADA24
	lfs      f0, 0x324(r30)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x3c(r1)
	lfs      f0, lbl_8051F608@sda21(r2)
	cmplwi   r3, 0
	lfs      f1, 0x328(r30)
	stfs     f1, 0x40(r1)
	lfs      f1, 0x32c(r30)
	stfs     f1, 0x44(r1)
	stfs     f0, 0x48(r1)
	beq      lbl_803AD978
	addi     r4, r1, 0x3c
	bl       findWater__Q24Game6MapMgrFRQ23Sys6Sphere
	stw      r3, 0x340(r30)

lbl_803AD978:
	lwz      r0, 0x340(r30)
	cmplwi   r0, 0
	beq      lbl_803ADA7C
	mr       r3, r30
	lfs      f31, 0x1f8(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x324(r30)
	lis      r5, __vt__Q23efx3Arg@ha
	lwz      r7, 0x328(r30)
	lis      r4, __vt__Q23efx12ArgEnemyType@ha
	lwz      r6, 0x32c(r30)
	addi     r5, r5, __vt__Q23efx3Arg@l
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx12ArgEnemyType@l
	addi     r4, r1, 0x64
	stw      r7, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r6, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r5, 0x64(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x68(r1)
	stfs     f1, 0x6c(r1)
	stfs     f0, 0x70(r1)
	stw      r0, 0x64(r1)
	stw      r3, 0x74(r1)
	stfs     f31, 0x78(r1)
	lwz      r3, 0x33c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x340(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	stfs     f0, 0x328(r30)
	b        lbl_803ADA7C

lbl_803ADA24:
	lfs      f0, 0x324(r30)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x2c(r1)
	lfs      f0, lbl_8051F608@sda21(r2)
	cmplwi   r3, 0
	lfs      f1, 0x328(r30)
	stfs     f1, 0x30(r1)
	lfs      f1, 0x32c(r30)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	beq      lbl_803ADA5C
	addi     r4, r1, 0x2c
	bl       findWater__Q24Game6MapMgrFRQ23Sys6Sphere
	stw      r3, 0x340(r30)

lbl_803ADA5C:
	lwz      r0, 0x340(r30)
	cmplwi   r0, 0
	bne      lbl_803ADA7C
	lwz      r3, 0x33c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_803ADA7C:
	lfs      f2, 0x2c8(r30)
	lfs      f1, 0x190(r30)
	lfs      f0, lbl_8051F604@sda21(r2)
	fsubs    f2, f2, f1
	fcmpo    cr0, f2, f0
	ble      lbl_803ADA98
	fmr      f2, f0

lbl_803ADA98:
	lfs      f0, lbl_8051F604@sda21(r2)
	fneg     f0, f0
	fcmpo    cr0, f2, f0
	bge      lbl_803ADAAC
	fmr      f2, f0

lbl_803ADAAC:
	lfs      f0, 0x1c(r31)
	lis      r3, mCurrentMtx__6J3DSys@ha
	addi     r4, r3, mCurrentMtx__6J3DSys@l
	fadds    f0, f0, f2
	mr       r3, r31
	stfs     f0, 0x1c(r31)
	bl       PSMTXCopy
	lfs      f1, lbl_8051F5B8@sda21(r2)
	addi     r3, r1, 0x7c
	addi     r4, r1, 0x20
	addi     r5, r1, 0x14
	stfs     f1, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f1, 0x28(r1)
	lfs      f0, 0x2c0(r30)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f1, 0x1c(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	mr       r3, r31
	mr       r5, r31
	addi     r4, r1, 0x7c
	bl       PSMTXConcat
	lis      r3, mCurrentMtx__6J3DSys@ha
	addi     r4, r1, 0x7c
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	mr       r5, r3
	bl       PSMTXConcat
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r0, 0xe4(r1)
	lwz      r30, 0xb8(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ADB4C
 * Size:	000088
 */
void Obj::moveStart()
{
	_321 = true;
	if (isFreeze()) {
		mFsm->transit(this, TYRE_Move, nullptr);
	}
	constraintOff();
}

/*
 * --INFO--
 * Address:	803ADBD4
 * Size:	0000E8
 */
void Obj::collisionStOn()
{
	mCollTree->getCollPart('tyr1')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr2')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr3')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr4')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr5')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr6')->mSpecialID = 'st__';
}

/*
 * --INFO--
 * Address:	803ADCBC
 * Size:	000108
 */
void Obj::collisionStOff()
{
	mCollTree->getCollPart('tyr1')->mSpecialID = '____';
	mCollTree->getCollPart('tyr2')->mSpecialID = '____';
	mCollTree->getCollPart('tyr3')->mSpecialID = '____';
	mCollTree->getCollPart('tyr4')->mSpecialID = '____';
	mCollTree->getCollPart('tyr5')->mSpecialID = '____';
	mCollTree->getCollPart('tyr6')->mSpecialID = '____';
	EnemyFunc::flickStickPikmin(this, 1.0f, C_PARMS->mGeneral.mShakeKnockback.mValue, 0.0f, -1000.0f, nullptr);
}

/*
 * --INFO--
 * Address:	803ADDC4
 * Size:	0005CC
 */
void Obj::flick()
{
	cameraMgr->startVibration(15, mPosition, 2);
	rumbleMgr->startRumble(13, mPosition, 2);

	Iterator<Piki> it(pikiMgr);
	CI_LOOP(it)
	{
		Piki* obj = *it;
		if (obj->isAlive() && obj->mBounceTriangle) {
			if ((mPosition.x - obj->getPosition().x) + (mPosition.z - obj->getPosition().z) < 900.0f) {
				InteractPress act(this, C_PARMS->mGeneral.mAttackDamage, nullptr);
				obj->stimulate(act);
			}
		}
	}
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	mr       r31, r3
	lwz      r3, cameraMgr__4Game@sda21(r13)
	addi     r5, r31, 0x18c
	li       r4, 0xf
	li       r6, 2
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r31, 0x18c
	li       r4, 0xd
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x74(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x68(r1)
	stw      r0, 0x6c(r1)
	stw      r3, 0x70(r1)
	bne      lbl_803ADE64
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r1)
	b        lbl_803AE08C

lbl_803ADE64:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r1)
	b        lbl_803ADED0

lbl_803ADE7C:
	lwz      r3, 0x70(r1)
	lwz      r4, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x74(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AE08C
	lwz      r3, 0x70(r1)
	lwz      r4, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r1)

lbl_803ADED0:
	lwz      r12, 0x68(r1)
	addi     r3, r1, 0x68
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ADE7C
	b        lbl_803AE08C

lbl_803ADEF0:
	lwz      r3, 0x70(r1)
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
	beq      lbl_803ADFD0
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	beq      lbl_803ADFD0
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lfs      f29, 0x194(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x18c(r31)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x2c
	lwz      r12, 0(r30)
	lfs      f31, 0x28(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f1, f31, f29
	lfs      f2, 0x2c(r1)
	lfs      f0, lbl_8051F5D0@sda21(r2)
	fsubs    f2, f2, f30
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803ADFD0
	lwz      r5, 0xc0(r31)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r5)
	addi     r4, r4, __vt__Q24Game11Interaction@l
	addi     r5, r3, __vt__Q24Game13InteractPress@l
	mr       r3, r30
	stw      r4, 0x58(r1)
	addi     r4, r1, 0x58
	stw      r31, 0x5c(r1)
	stw      r5, 0x58(r1)
	stfs     f0, 0x60(r1)
	stw      r0, 0x64(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_803ADFD0:
	lwz      r0, 0x74(r1)
	cmplwi   r0, 0
	bne      lbl_803ADFFC
	lwz      r3, 0x70(r1)
	lwz      r4, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r1)
	b        lbl_803AE08C

lbl_803ADFFC:
	lwz      r3, 0x70(r1)
	lwz      r4, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r1)
	b        lbl_803AE070

lbl_803AE01C:
	lwz      r3, 0x70(r1)
	lwz      r4, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x74(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AE08C
	lwz      r3, 0x70(r1)
	lwz      r4, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r1)

lbl_803AE070:
	lwz      r12, 0x68(r1)
	addi     r3, r1, 0x68
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AE01C

lbl_803AE08C:
	lwz      r3, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x6c(r1)
	cmplw    r4, r3
	bne      lbl_803ADEF0
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x54(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x48(r1)
	stw      r0, 0x4c(r1)
	stw      r3, 0x50(r1)
	bne      lbl_803AE0EC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AE174

lbl_803AE0EC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AE158

lbl_803AE104:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AE174
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)

lbl_803AE158:
	lwz      r12, 0x48(r1)
	addi     r3, r1, 0x48
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AE104

lbl_803AE174:
	lfs      f31, lbl_8051F5D0@sda21(r2)
	b        lbl_803AE2F0

lbl_803AE17C:
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	mr       r4, r30
	lfs      f28, 0x194(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x18c(r31)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lfs      f29, 0x10(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f29, f28
	lfs      f1, 0x14(r1)
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_803AE234
	lwz      r5, 0xc0(r31)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r5)
	addi     r4, r4, __vt__Q24Game11Interaction@l
	addi     r5, r3, __vt__Q24Game13InteractPress@l
	mr       r3, r30
	stw      r4, 0x38(r1)
	addi     r4, r1, 0x38
	stw      r31, 0x3c(r1)
	stw      r5, 0x38(r1)
	stfs     f0, 0x40(r1)
	stw      r0, 0x44(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_803AE234:
	lwz      r0, 0x54(r1)
	cmplwi   r0, 0
	bne      lbl_803AE260
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AE2F0

lbl_803AE260:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_803AE2D4

lbl_803AE280:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AE2F0
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)

lbl_803AE2D4:
	lwz      r12, 0x48(r1)
	addi     r3, r1, 0x48
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AE280

lbl_803AE2F0:
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r1)
	cmplw    r4, r3
	bne      lbl_803AE17C
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051F5C8@sda21(r2)
	li       r4, 0
	lfs      f29, 0x4c4(r5)
	lfs      f30, 0x4ec(r5)
	fmr      f2, f29
	lfs      f28, 0x53c(r5)
	fmr      f3, f30
	lfs      f1, 0x514(r5)
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	fmr      f1, f28
	lfs      f4, lbl_8051F5C8@sda21(r2)
	fmr      f2, f29
	mr       r3, r31
	fmr      f3, f30
	li       r4, 0
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r0, 0xc4(r1)
	lwz      r30, 0x78(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AE390
 * Size:	000100
 */
void Obj::deadEffect()
{
	efx::Arg arg(mModel->mJoints[mTyreRearJointIndex].getWorldMatrix()->getBasis(3));
	efx::TKageTyredead efx;
	efx.create(&arg);

	arg.mPosition = (mModel->mJoints[mTyreFrontJointIndex].getWorldMatrix()->getBasis(3));
	efx.create(&arg);

	mIsShadowActive = false;
}

/*
 * --INFO--
 * Address:	803AE490
 * Size:	000064
 */
void Obj::createSmokeEffect()
{
	if (!mWaterBox) {
		mEfxSmoke1->create(nullptr);
		mEfxSmoke2->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	803AE4F4
 * Size:	000050
 */
void Obj::fadeSmokeEffect()
{
	mEfxSmoke1->fade();
	mEfxSmoke2->fade();
}

/*
 * --INFO--
 * Address:	803AE544
 * Size:	0001E8
 */
void Obj::landEffect(Vector3f& pos)
{
	mSoundObj->startSound(PSSE_EN_KAGE_ROLLER_LAND, 0);

	bool iswater = false;
	if (mWaterBox) {
		iswater = true;
	}

	if (!mWaterBox) {
		Sys::Sphere bound(pos, 80.0f);
		WaterBox* water = nullptr;
		if (mapMgr) {
			water = mapMgr->findWater(bound);
		}
		if (water) {
			iswater = true;
		}
	}

	if (iswater) {
		efx::ArgRotYScale arg(pos, mFaceDir, 0.8f);
		efx::TKchApWat efx;
		efx.create(&arg);
	} else {
		efx::TKageRecov effect;
		efx::Arg arg(pos);
		effect.create(&arg);
	}
}

/*
 * --INFO--
 * Address:	803AE72C
 * Size:	00002C
 */
void Obj::scaleUpShadow()
{
	mShadowScale += sys->mDeltaTime;
	if (mShadowScale > 1.0f) {
		mShadowScale = 1.0f;
	}
}

/*
 * --INFO--
 * Address:	803AE7F4
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	803AE7F8
 * Size:	000008
 */
bool Obj::isUnderground() { return mIsUnderground; }

/*
 * --INFO--
 * Address:	803AE800
 * Size:	000008
 */
bool Obj::bombCallBack(Creature*, Vector3f&, f32) { return false; }

} // namespace Tyre
} // namespace Game
