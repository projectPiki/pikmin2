#include "Game/Entities/Tyre.h"
#include "Game/EnemyFunc.h"
#include "Game/Stickers.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/MapMgr.h"
#include "efx/TKage.h"
#include "efx/TKch.h"
#include "SoundID.h"
#include "System.h"
#include "nans.h"

namespace Game {
namespace Tyre {

static const int unusedTyreArray[] = { 0, 0, 0 };

Obj* curT;

/**
 * @note Address: 0x803AC2F0
 * @note Size: 0x38
 */
bool frontTyreCallBack(J3DJoint* jnt, int a)
{
	if (a == 0 && curT) {
		curT->frontRollMtxCalc();
	}
	return true;
}

/**
 * @note Address: 0x803AC328
 * @note Size: 0x38
 */
bool rearTyreCallBack(J3DJoint* jnt, int a)
{
	if (a == 0 && curT) {
		curT->rearRollMtxCalc();
	}
	return true;
}

/**
 * @note Address: 0x803AC360
 * @note Size: 0x20
 */
void Obj::setParameters() { EnemyBase::setParameters(); }

/**
 * @note Address: 0x803AC380
 * @note Size: 0x20
 */
// void birth__Q34Game4Tyre3ObjFR10Vector3f f()
void Obj::birth(Vector3f& pos, f32 angle) { EnemyBase::birth(pos, angle); }

/**
 * @note Address: 0x803AC3A0
 * @note Size: 0x18C
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

	mFaceDirection    = mFaceDir;
	mCurrentRotation2 = 0.0f;
	mCurrentRotation  = 0.0f;
	mRotationOffset   = 0.0f;
	mRearWheelHeight  = mPosition.y;
	mAnimCounter      = 0;
	mFallingYPosition = 0.0f;
	shadowMgr->delNormalShadow(this);
	mShadowMgr->init();
	mIsMoving    = 0;
	mEfxPosition = mPosition;
}

/**
 * @note Address: 0x803AC52C
 * @note Size: 0x3C0
 */
Obj::Obj()
    : mOwner(nullptr)
    , mDoUseFrontTyreHoldCalc(0)
    , mIsUnderground(true)
    , mIsShadowActive(false)
{
	mFsm                 = nullptr;
	mShadowScale         = 0.01f;
	mSingleRotationRatio = 0.0f;
	mToTriggerLandEffect = 1;
	mIsMoving            = 0;
	mLandedOnPellet      = 0;
	mEfxSmoke1           = nullptr;
	mEfxSmoke2           = nullptr;
	mShadowMgr           = nullptr;
	mEfxHamon            = nullptr;
	mWaterBoxTyre        = nullptr;
	mAnimator            = new ProperAnimator;
	setFSM(new FSM);
	mEfxSmoke1 = new efx::TKageTyresmoke(&mPosition, &mFaceDir);
	mEfxSmoke2 = new efx::TKageTyresmoke(&mPosition, &mFaceDir);
	mEfxHamon  = new efx::TEnemyHamonChasePos(&mEfxPosition);
	mShadowMgr = new TyreShadowMgr(this);
}

/**
 * @note Address: 0x803AC8EC
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x803AC938
 * @note Size: 0x4C
 */
void Obj::doUpdate()
{
	getStateID();
	isStopMotion();
	mFsm->exec(this);
}

/**
 * @note Address: 0x803AC984
 * @note Size: 0xB8
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

/**
 * @note Address: 0x803ACA3C
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x803ACA40
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x803ACA60
 * @note Size: 0x20
 */
void Obj::doSimulation(f32 rate) { EnemyBase::doSimulation(rate); }

/**
 * @note Address: 0x803ACA80
 * @note Size: 0x80
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& param)
{
	EnemyBase::doGetLifeGaugeParam(param);
	u32 id   = mTyreRearJointIndex;
	Mtx* mtx = mModel->mJ3dModel->mMtxBuffer->mWorldMatrices;

	param.mPosition.x = (param.mPosition.x + mtx[id][0][3]) * 0.5f;
	param.mPosition.z = (param.mPosition.z + mtx[id][2][3]) * 0.5f;
}

/**
 * @note Address: 0x803ACB00
 * @note Size: 0x12C
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	mTargetVelocity      = 0.0f;
	mCurrentVelocity     = 0.0f;
	mSingleRotationRatio = 0.0f;
	mAcceleration        = 0.0f;
	disableEvent(0, EB_Untargetable);
	mCollTree->getCollPart('tyr1')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr2')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr3')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr4')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr5')->mSpecialID = 'st__';
	mCollTree->getCollPart('tyr6')->mSpecialID = 'st__';
	fadeSmokeEffect();
}

/**
 * @note Address: 0x803ACC2C
 * @note Size: 0x124
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
	EnemyFunc::flickStickPikmin(this, 1.0f, C_GENERALPARMS.mShakeKnockback.mValue, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
	if (getStateID() == TYRE_Move) {
		createSmokeEffect();
	}
}

/**
 * @note Address: 0x803ACD50
 * @note Size: 0x538
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
			if ((hitobj->isPiki() || hitobj->isNavi()) && (hitobj->mFloorTriangle || hitobj->isStickTo())) {
				InteractPress act(this, C_GENERALPARMS.mAttackDamage, nullptr);
				hitobj->stimulate(act);
			} else {
				// EnemyBase* hitenemy = static_cast<EnemyBase*>(hitobj);
				// kill any enemy on contact, unless its waterwraith itself
				if (hitobj->isTeki()
				    && static_cast<EnemyBase*>(event.mCollidingCreature)->getEnemyTypeID() != EnemyTypeID::EnemyID_BlackMan) {
					InteractBomb act(this, 10000.0f, &Vector3f::zero);
					hitobj->stimulate(act);
				}

				// when wraith is touching a treasure, make it count as being airborne???
				Pellet* pelt = static_cast<Pellet*>(hitobj);
				if (pelt->isPellet()) {
					enableEvent(0, EB_Untargetable);
					mAnimCounter      = C_PARMS->mOnPelletAirTime;
					mFallingYPosition = (pelt->mConfig->mParams.mHeight.mData / mAnimCounter) * C_PARMS->mPelletHeightAdjustment;
					mLandedOnPellet   = true;
				}

				Stickers stick(hitobj);
				Iterator<Creature> it(&stick);
				CI_LOOP(it)
				{
					Creature* obj = *it;
					if (obj->isPiki()) {
						Vector2f sep;
						obj->getDistanceTo(this, sep);
						if (sep.x * sep.x + sep.y * sep.y < 900.0f) {
							InteractPress act(this, C_GENERALPARMS.mAttackDamage, nullptr);
							obj->stimulate(act);
						}
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x803AD288
 * @note Size: 0xA0
 */
bool Obj::damageCallBack(Creature* obj, f32 damage, CollPart* coll)
{
	if (isEvent(0, EB_Bittered) || isFreeze()) {
		if (isEvent(0, EB_Bittered) || !mIsMoving) {
			return false;
		} else {
			return EnemyBase::damageCallBack(obj, damage, coll);
		}
	}
	return false;
}

/**
 * @note Address: 0x803AD328
 * @note Size: 0x3C
 */
bool Obj::hipdropCallBack(Creature* obj, f32 damage, CollPart* coll)
{
	if (obj) {
		obj->isPiki();
	}
	return false;
}

/**
 * @note Address: 0x803AD364
 * @note Size: 0x58
 */
bool Obj::earthquakeCallBack(Creature* obj, f32 damage)
{
	if (getStateID() == TYRE_Move) {
		mFsm->transit(this, TYRE_Freeze, nullptr);
	}
	return false;
}

/**
 * @note Address: 0x803AD3BC
 * @note Size: 0x34
 */
void Obj::inWaterCallback(WaterBox* wbox)
{
	EnemyBase::inWaterCallback(wbox);
	fadeSmokeEffect();
}

/**
 * @note Address: 0x803AD3F0
 * @note Size: 0x44
 */
void Obj::outWaterCallback()
{
	EnemyBase::outWaterCallback();
	if (getStateID() == TYRE_Move) {
		createSmokeEffect();
	}
}

/**
 * @note Address: 0x803AD434
 * @note Size: 0x50
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition                 = mPosition;
	param.mPosition.y               = mPosition.y + 2.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 20.0f;
	param.mSize                     = 10.0f;
}

/**
 * @note Address: 0x803AD484
 * @note Size: 0x4C
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

/**
 * @note Address: 0x803AD4D0
 * @note Size: 0x50
 */
bool Obj::isFreeze()
{
	if (getStateID() == TYRE_Freeze || getStateID() == TYRE_Dead) {
		return true;
	} else {
		return false;
	}
}

/**
 * @note Address: 0x803AD520
 * @note Size: 0x298
 */
void Obj::frontRollMtxCalc()
{
	Matrixf* worldMat    = mModel->mJoints[mTyreFrontJointIndex].getWorldMatrix();
	Vector3f translation = Vector3f(0.0f);
	if (mDoUseFrontTyreHoldCalc) {
		worldMat->newTranslation(mFrontTyreHeldPosition);
		PSMTXCopy(worldMat->mMatrix.mtxView, J3DSys::mCurrentMtx);
	}

	Matrixf mat;
	Vector3f rotation;
	if (C_PARMS->mStaticRotation != 0.0f) {
		rotation = Vector3f(0.0f, C_PARMS->mStaticRotation, 0.0f);
	} else {
		f32 maxRotation = C_PARMS->mMaxRotation;
		f32 minRotation = C_PARMS->mMinRotation;
		f32 angleDist   = angDist(mFaceDir, mFaceDirection);
		if (angleDist > minRotation) {
			mCurrentRotation2 += angleDist * C_PARMS->mRotationRate;
			if (mCurrentRotation2 > maxRotation) {
				mCurrentRotation2 = maxRotation;
			}
		} else if (angleDist < -minRotation) {
			mCurrentRotation2 += angleDist * C_PARMS->mRotationRate;
			if (mCurrentRotation2 < -maxRotation) {
				mCurrentRotation2 = -maxRotation;
			}
		} else if (mCurrentRotation2 > 0.0f) {
			mCurrentRotation2 -= C_PARMS->mReverseRotationRate;
			if (mCurrentRotation2 < 0.0f) {
				mCurrentRotation2 = 0.0f;
			}
		} else {
			mCurrentRotation2 += C_PARMS->mReverseRotationRate;
			if (mCurrentRotation2 > 0.0f) {
				mCurrentRotation2 = 0.0f;
			}
		}

		rotation = Vector3f(0.0f, mCurrentRotation2, 0.0f);

		mat.makeTR(translation, rotation);
	}

	mTyrePositions[0] = mModel->getJoint("tyreFL")->getWorldMatrix()->getColumn(3);
	mTyrePositions[1] = mModel->getJoint("tyreFR")->getWorldMatrix()->getColumn(3);
	PSMTXConcat(worldMat->mMatrix.mtxView, mat.mMatrix.mtxView, worldMat->mMatrix.mtxView);
	PSMTXConcat(J3DSys::mCurrentMtx, mat.mMatrix.mtxView, J3DSys::mCurrentMtx);

	rotation = Vector3f(mCurrentRotation, 0.0f, 0.0f);
	mat.makeTR(translation, rotation);
	PSMTXConcat(worldMat->mMatrix.mtxView, mat.mMatrix.mtxView, worldMat->mMatrix.mtxView);
	PSMTXConcat(J3DSys::mCurrentMtx, mat.mMatrix.mtxView, J3DSys::mCurrentMtx);
}

/**
 * @note Address: 0x803AD7B8
 * @note Size: 0x38C
 */
void Obj::rearRollMtxCalc()
{
	Matrixf* worldMat = mModel->mJoints[mTyreRearJointIndex].getWorldMatrix();
	Vector3f pos      = worldMat->getColumn(3);
	pos.y += 100.0f;
	f32 minY = mapMgr->getMinY(pos);

	if (isFlying()) {
		if (10.0f + mRearWheelHeight < mPosition.y) {
			mRearWheelHeight += 2.0f;
		}
	} else {
		mRearWheelHeight -= 5.0f;
	}

	f32 val = 2.0f;
	if (getStateID() != TYRE_Land) {
		val = 0.0f;
	}

	if (mRearWheelHeight <= minY + val) {
		mRearWheelHeight = minY;
		Vector3f fxPos   = worldMat->getColumn(3);
		fxPos.y          = minY;
		f32 comp         = 50.0f;

		if ((mPosition.y < minY + comp) && mToTriggerLandEffect) {
			landEffect(fxPos);
			mToTriggerLandEffect = 0;
		}

		if (mFloorTriangle) {
			mEfxPosition = fxPos;
			if (!mWaterBoxTyre) {
				Sys::Sphere sphere(mEfxPosition, 80.0f);
				if (mapMgr) {
					mWaterBoxTyre = mapMgr->findWater(sphere);
				}

				if (mWaterBoxTyre) {
					efx::ArgEnemyType fxArg(mEfxPosition, getEnemyTypeID(), mScaleModifier);
					mEfxHamon->create(&fxArg);
					mEfxPosition.y = *mWaterBoxTyre->getSeaHeightPtr();
				}

			} else {
				Sys::Sphere sphere(mEfxPosition, 80.0f);
				if (mapMgr) {
					mWaterBoxTyre = mapMgr->findWater(sphere);
				}

				if (!mWaterBoxTyre) {
					mEfxHamon->fade();
				}
			}
		}
	}

	f32 diff = mRearWheelHeight;
	diff -= mPosition.y;
	if (diff > 50.0f) {
		diff = 50.0f;
	}

	f32 limit = 50.0f;
	if (diff < -limit) {
		diff = -limit;
	}

	worldMat->mMatrix.structView.ty += diff;

	PSMTXCopy(worldMat->mMatrix.mtxView, J3DSys::mCurrentMtx);
	Matrixf mat;
	Vector3f translation = Vector3f(0.0f, 0.0f, 0.0f);
	Vector3f rotation    = Vector3f(mCurrentRotation, 0.0f, 0.0f);
	mat.makeTR(translation, rotation);
	PSMTXConcat(worldMat->mMatrix.mtxView, mat.mMatrix.mtxView, worldMat->mMatrix.mtxView);
	PSMTXConcat(J3DSys::mCurrentMtx, mat.mMatrix.mtxView, J3DSys::mCurrentMtx);
}

/**
 * @note Address: 0x803ADB4C
 * @note Size: 0x88
 */
void Obj::moveStart()
{
	mIsMoving = true;
	if (isFreeze()) {
		mFsm->transit(this, TYRE_Move, nullptr);
	}
	constraintOff();
}

/**
 * @note Address: 0x803ADBD4
 * @note Size: 0xE8
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

/**
 * @note Address: 0x803ADCBC
 * @note Size: 0x108
 */
void Obj::collisionStOff()
{
	mCollTree->getCollPart('tyr1')->mSpecialID = '____';
	mCollTree->getCollPart('tyr2')->mSpecialID = '____';
	mCollTree->getCollPart('tyr3')->mSpecialID = '____';
	mCollTree->getCollPart('tyr4')->mSpecialID = '____';
	mCollTree->getCollPart('tyr5')->mSpecialID = '____';
	mCollTree->getCollPart('tyr6')->mSpecialID = '____';
	EnemyFunc::flickStickPikmin(this, 1.0f, C_GENERALPARMS.mShakeKnockback.mValue, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
}

/**
 * @note Address: 0x803ADDC4
 * @note Size: 0x5CC
 */
void Obj::flick()
{
	cameraMgr->startVibration(VIBTYPE_MidFastShort, mPosition, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed13, mPosition, RUMBLEID_Both);

	Iterator<Piki> iterPiki(pikiMgr);
	CI_LOOP(iterPiki)
	{
		Piki* obj = *iterPiki;
		if (obj->isAlive() && obj->mFloorTriangle) {
			Vector3f pos    = Vector3f(mPosition.x, mPosition.y, mPosition.z);
			Vector3f objPos = Vector3f(obj->getPosition().x, 0.0f, obj->getPosition().z);
			if (sqrDistanceXZ(objPos, pos) < 900.0f) {
				InteractPress act(this, C_GENERALPARMS.mAttackDamage, nullptr);
				obj->stimulate(act);
			}
		}
	}

	Iterator<Navi> iterNavi(naviMgr);
	CI_LOOP(iterNavi)
	{
		Navi* obj       = *iterNavi;
		Vector3f pos    = Vector3f(mPosition.x, 0.0f, mPosition.z);
		Vector3f objPos = Vector3f(obj->getPosition().x, 0.0f, obj->getPosition().z);
		if (sqrDistanceXZ(objPos, pos) < 900.0f) {
			InteractPress act(this, C_GENERALPARMS.mAttackDamage, nullptr);
			obj->stimulate(act);
		}
	}

	f32 range     = C_GENERALPARMS.mShakeChance.mValue;
	f32 knockback = C_GENERALPARMS.mShakeKnockback.mValue;
	f32 damage    = C_GENERALPARMS.mShakeDamage.mValue;

	EnemyFunc::flickNearbyPikmin(this, C_GENERALPARMS.mShakeRange.mValue, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
	EnemyFunc::flickStickPikmin(this, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
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

/**
 * @note Address: 0x803AE390
 * @note Size: 0x100
 */
void Obj::deadEffect()
{
	efx::Arg arg(mModel->mJoints[mTyreRearJointIndex].getWorldMatrix()->getColumn(3));
	efx::TKageTyredead efx;
	efx.create(&arg);

	arg.mPosition = (mModel->mJoints[mTyreFrontJointIndex].getWorldMatrix()->getColumn(3));
	efx.create(&arg);

	mIsShadowActive = false;
}

/**
 * @note Address: 0x803AE490
 * @note Size: 0x64
 */
void Obj::createSmokeEffect()
{
	if (!mWaterBox) {
		mEfxSmoke1->create(nullptr);
		mEfxSmoke2->create(nullptr);
	}
}

/**
 * @note Address: 0x803AE4F4
 * @note Size: 0x50
 */
void Obj::fadeSmokeEffect()
{
	mEfxSmoke1->fade();
	mEfxSmoke2->fade();
}

/**
 * @note Address: 0x803AE544
 * @note Size: 0x1E8
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

/**
 * @note Address: 0x803AE72C
 * @note Size: 0x2C
 */
void Obj::scaleUpShadow()
{
	mShadowScale += sys->mDeltaTime;
	if (mShadowScale > 1.0f) {
		mShadowScale = 1.0f;
	}
}

} // namespace Tyre
} // namespace Game
