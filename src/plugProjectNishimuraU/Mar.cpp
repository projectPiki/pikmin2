#include "types.h"
#include "Game/Entities/Mar.h"
#include "Game/MapMgr.h"
#include "Dolphin/rand.h"
#include "JSystem/JMath.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"

namespace Game {
namespace Mar {

/**
 * @note Address: 0x8027F50C
 * @note Size: 0x15C
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
	mMatAnimators = new Sys::MatLoopAnimator[2];
}

/**
 * @note Address: 0x8027F668
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x8027F66C
 * @note Size: 0xEC
 */
void Obj::onInit(CreatureInitArg* settings)
{
	EnemyBase::onInit(settings);

	disableEvent(0, EB_LeaveCarcass);
	enableEvent(0, EB_Untargetable);

	mGeneralTimer = 0.0f;
	mFallTimer    = 0.0f;

	resetShadowOffset();
	resetShadowRadius();

	mPitchRatio         = 0.0f;
	mIsWindAttackActive = false;

	mEfxMatrix = mModel->getJoint("hana3")->getWorldMatrix();
	setupEffect();

	mWindScaleTimer = 0.0f;

	mFsm->start(this, MAR_Wait, nullptr);

	mMatAnimators[0].start(C_MGR->mTexAnimation);
	mMatAnimators[1].start(C_MGR->mTevRegAnimation);
}

/**
 * @note Address: 0x8027F758
 * @note Size: 0x44
 */
void Obj::onKill(CreatureKillArg* settings)
{
	finishWindEffect();
	EnemyBase::onKill(settings);
}

/**
 * @note Address: 0x8027F79C
 * @note Size: 0x50
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	updateFallTimer();
	updateEmit();
}

/**
 * @note Address: 0x8027F7EC
 * @note Size: 0xD4
 */
void Obj::changeMaterial()
{
	// Don't even ask...
	J3DModelData* modelData = nullptr;
	J3DModel* model         = mModel->mJ3dModel;
	modelData               = model->mModelData;

	model->calcMaterial();

	mMatAnimators[0].animate(30.0f);
	mMatAnimators[1].animate(30.0f);

	for (u16 i = 0; i < modelData->mMaterialTable.mMaterialNum; i++) {
		j3dSys.mMatPacket = &model->mMatPackets[i];
		J3DMaterial* mat  = modelData->mMaterialTable.mMaterials[i];
		mat->diff(j3dSys.mMatPacket->mShapePacket->mDiffFlag);
	}
}

/**
 * @note Address: 0x8027F8C0
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x8027F90C
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x8027F910
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8027F930
 * @note Size: 0xD0
 */
void Obj::getShadowParam(ShadowParam& shadow)
{
	Matrixf* baseMatrix              = mModel->getJoint("mune")->getWorldMatrix();
	shadow.mPosition                 = baseMatrix->getTranslation();
	shadow.mPosition.y               = mPosition.y + mShadowOffset;
	shadow.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isFlying() || !mFloorTriangle) {
		shadow.mBoundingSphere.mRadius = C_PROPERPARMS.mStandardFlightHeight.mValue + 100.0f;
	} else {
		shadow.mBoundingSphere.mRadius = 50.0f;
	}
	shadow.mSize = mShadowRadius;
}

/**
 * @note Address: 0x8027FA00
 * @note Size: 0x3C
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishWindEffect();
	setShadowOffsetMax();
}

/**
 * @note Address: 0x8027FA3C
 * @note Size: 0x74
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	int id = getStateID();

	if ((id >= MAR_Wait && id <= MAR_Fall) || (id >= MAR_TakeOff && id <= MAR_FlyFlick)) {
		mFsm->transit(this, MAR_TakeOff, nullptr);
	}
}

/**
 * @note Address: 0x8027FAB0
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x8027FAE4
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x8027FB18
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x8027FB38
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x8027FB58
 * @note Size: 0x64
 */
Vector3f Obj::getOffsetForMapCollision()
{
	Vector3f pos = getHeadJointPos();
	pos -= mPosition;
	pos.y = -10.0f;
	return pos;
}

/**
 * @note Address: 0x8027FBBC
 * @note Size: 0x50
 */
void Obj::getThrowupItemPosition(Vector3f* position)
{
	if (isEvent(0, EB_Bittered)) {
		EnemyBase::getThrowupItemPosition(position);
	} else {
		*position = Vector3f(mPosition.x, mPosition.y + 500.0f, mPosition.z);
	}
}

/**
 * @note Address: 0x8027FC0C
 * @note Size: 0x40
 */
void Obj::getThrowupItemVelocity(Vector3f* velocity)
{
	if (isEvent(0, EB_Bittered)) {
		EnemyBase::getThrowupItemVelocity(velocity);
	} else {
		velocity->z = 0.0f;
		velocity->y = 0.0f;
		velocity->x = 0.0f;
	}
}

/**
 * @note Address: 0x8027FC4C
 * @note Size: 0x50
 */
Vector3f Obj::getHeadJointPos() { return mModel->getJoint("head")->getWorldMatrix()->getTranslation(); }

/**
 * @note Address: 0x8027FC9C
 * @note Size: 0x11C
 */
f32 Obj::setHeightVelocity()
{
	f32 groundY     = mapMgr->getMinY(mPosition);
	f32 idealHeight = C_PROPERPARMS.mStandardFlightHeight.mValue;

	if (mPosition.y - groundY > idealHeight - C_PROPERPARMS.mVerticalSwingWidth.mValue) {
		addPitchRatio();
		idealHeight += C_PROPERPARMS.mVerticalSwingWidth.mValue * sinf(mPitchRatio);
	}

	f32 totalHeight = groundY + idealHeight;
	totalHeight -= mPosition.y;
	mCurrentVelocity.y = totalHeight * C_PROPERPARMS.mRiseFactor.mValue;
	return mPosition.y - groundY;
}

/**
 * @note Address: 0x8027FDB8
 * @note Size: 0x1D8
 */
void Obj::setRandTarget()
{
	f32 outsideRadius  = C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue;
	f32 radius         = randWeightFloat(outsideRadius) + C_GENERALPARMS.mHomeRadius.mValue;
	Vector3f position  = getPosition();
	Vector3f homePos   = mHomePosition;
	Vector3f atanInput = position - homePos;
	f32 aboutTheta     = JMath::atanTable_.atan2_(atanInput.x, atanInput.z);

	f32 theta = aboutTheta + randWeightFloat(PI) + HALF_PI;

	mTargetPosition = Vector3f(radius * sinf(theta) + homePos.x, homePos.y, radius * cosf(theta) + homePos.z);
}

/**
 * @note Address: 0x8027FF90
 * @note Size: 0xC
 */
void Obj::resetShadowOffset() { mShadowOffset = -10.0f; }

/**
 * @note Address: 0x8027FF9C
 * @note Size: 0xC
 */
void Obj::setShadowOffsetMax() { mShadowOffset = 10.0f; }

/**
 * @note Address: 0x8027FFA8
 * @note Size: 0x28
 */
void Obj::addShadowOffset()
{
	mShadowOffset += 1.0f;
	if (mShadowOffset > 10.0f) {
		mShadowOffset = 10.0f;
	}
}

/**
 * @note Address: 0x8027FFD0
 * @note Size: 0x28
 */
void Obj::subShadowOffset()
{
	mShadowOffset -= 1.0f;
	if (mShadowOffset < -10.0f) {
		mShadowOffset = -10.0f;
	}
}

/**
 * @note Address: 0x8027FFF8
 * @note Size: 0xC
 */
void Obj::resetShadowRadius() { mShadowRadius = 40.0f; }

/**
 * @note Address: 0x80280004
 * @note Size: 0x30
 */
void Obj::subShadowRadius()
{
	if (mShadowRadius > 1.0f) {
		mShadowRadius -= 1.5f;

		if (mShadowRadius < 1.0f) {
			mShadowRadius = 1.0f;
		}
	}
}

/**
 * @note Address: 0x80280034
 * @note Size: 0x30
 */
void Obj::updateFallTimer()
{
	if (mStuckPikminCount) {
		mFallTimer += sys->mDeltaTime;
	} else {
		mFallTimer = 0.0f;
	}
}

/**
 * @note Address: 0x80280064
 * @note Size: 0xA4
 */
StateID Obj::getFlyingNextState()
{
	if (mHealth <= 0.0f) {
		return MAR_Dead;
	}

	if (EnemyFunc::getStickPikminColorNum(this, Purple) > 0) {
		return MAR_Fall;
	}

	if (mFallTimer > C_PROPERPARMS.mShakeOffTime.mValue || mStuckPikminCount >= C_PROPERPARMS.mFallingMinPikiNumber.mValue) {
		if (mStuckPikminCount < C_PROPERPARMS.mFallingMinPikiNumber.mValue) {
			return MAR_FlyFlick;
		} else {
			return MAR_Fall;
		}
	}
	return MAR_NULL;
}

/**
 * @note Address: 0x80280108
 * @note Size: 0x38
 */
void Obj::addPitchRatio()
{
	mPitchRatio += C_PROPERPARMS.mVerticalSwingSpeed.mValue * sys->mDeltaTime;
	if (mPitchRatio > TAU) {
		mPitchRatio -= TAU;
	}
}

/**
 * @note Address: 0x80280140
 * @note Size: 0x3AC
 */
Piki* Obj::getSearchedPikmin()
{
	f32 FOV      = PI;
	f32 sight    = C_GENERALPARMS.mSightRadius.mValue;
	f32 sqrSight = SQUARE(sight);
	if (mStuckPikminCount == 0) {
		FOV = C_GENERALPARMS.mViewAngle.mValue * DEG2RAD * PI;
	}

	Iterator<Piki> iPiki = pikiMgr;
	CI_LOOP(iPiki)
	{
		Piki* piki = *iPiki;
		if (piki->isAlive() && piki->isPikmin() && piki->mFloorTriangle && !piki->isStickToMouth() && piki->mSticker != this) {
			f32 sightDiff = getCreatureViewAngle(piki);
			if (FABS(sightDiff) <= FOV) {
				Vector3f pikiPos2 = piki->getPosition();
				if (sqrDistanceXZ(mPosition, pikiPos2) < sqrSight) {
					return piki;
				}
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x802804EC
 * @note Size: 0x2F0
 */
bool Obj::isTargetLost()
{
	Creature* target = mTargetCreature;
	if (target && target->isAlive() && !target->isStickToMouth() && target->mSticker != this) {
		f32 viewAngle = C_GENERALPARMS.mViewAngle.mValue;
		if (mStuckPikminCount) {
			viewAngle = 180.0f;
		}

		f32 sightRad  = C_GENERALPARMS.mSightRadius.mValue;
		f32 privRad   = C_GENERALPARMS.mPrivateRadius.mValue;
		f32 sightDiff = getCreatureViewAngle(target);

		return isTargetWithinRange(target, sightDiff, privRad, sightRad, 12800.0f, viewAngle);
	}

	return true;
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stfd     f31, 0xf0(r1)
	psq_st   f31, 248(r1), 0, qr0
	stfd     f30, 0xe0(r1)
	psq_st   f30, 232(r1), 0, qr0
	stfd     f29, 0xd0(r1)
	psq_st   f29, 216(r1), 0, qr0
	stfd     f28, 0xc0(r1)
	psq_st   f28, 200(r1), 0, qr0
	stfd     f27, 0xb0(r1)
	psq_st   f27, 184(r1), 0, qr0
	stfd     f26, 0xa0(r1)
	psq_st   f26, 168(r1), 0, qr0
	stfd     f25, 0x90(r1)
	psq_st   f25, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	mr       r30, r3
	lwz      r31, 0x230(r3)
	cmplwi   r31, 0
	beq      lbl_80280788
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80280788
	mr       r3, r31
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80280788
	lwz      r0, 0xf4(r31)
	cmplw    r0, r30
	beq      lbl_80280788
	lwz      r0, 0x1f4(r30)
	lwz      r5, 0xc0(r30)
	cmpwi    r0, 0
	lfs      f29, 0x424(r5)
	beq      lbl_80280598
	lfs      f29, lbl_8051B5FC@sda21(r2)

lbl_80280598:
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f30, 0x3d4(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x3ac(r5)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f25, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f25
	bl       angDist__Fff
	mr       r4, r30
	fmr      f27, f1
	lwz      r12, 0(r30)
	addi     r3, r1, 0x44
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x38
	lwz      r12, 0(r31)
	lfs      f28, 0x44(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x38(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x5c
	fsubs    f25, f0, f28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x50
	lwz      r12, 0(r31)
	lfs      f28, 0x60(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x54(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x74
	fsubs    f26, f0, f28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x68
	lwz      r12, 0(r31)
	lfs      f28, 0x7c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x70(r1)
	fmuls    f1, f31, f31
	fmuls    f2, f30, f30
	li       r3, 1
	fsubs    f0, f0, f28
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f25, f25, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8028074C
	fcmpo    cr0, f0, f2
	mr       r0, r4
	ble      lbl_80280740
	fabs     f1, f26
	lfs      f0, lbl_8051B600@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80280740
	mr       r0, r3

lbl_80280740:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8028074C
	li       r4, 1

lbl_8028074C:
	clrlwi.  r0, r4, 0x18
	bne      lbl_8028078C
	lfs      f0, lbl_8051B5F8@sda21(r2)
	fabs     f2, f27
	lfs      f1, lbl_8051B5D8@sda21(r2)
	fmuls    f0, f0, f29
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_8028078C
	li       r3, 0
	b        lbl_8028078C

lbl_80280788:
	li       r3, 1

lbl_8028078C:
	psq_l    f31, 248(r1), 0, qr0
	lfd      f31, 0xf0(r1)
	psq_l    f30, 232(r1), 0, qr0
	lfd      f30, 0xe0(r1)
	psq_l    f29, 216(r1), 0, qr0
	lfd      f29, 0xd0(r1)
	psq_l    f28, 200(r1), 0, qr0
	lfd      f28, 0xc0(r1)
	psq_l    f27, 184(r1), 0, qr0
	lfd      f27, 0xb0(r1)
	psq_l    f26, 168(r1), 0, qr0
	lfd      f26, 0xa0(r1)
	psq_l    f25, 152(r1), 0, qr0
	lfd      f25, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r0, 0x104(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/**
 * @note Address: 0x802807DC
 * @note Size: 0x38C
 */
Creature* Obj::isAttackable()
{
	const f32 faceDir = getFaceDir();
	Parms* parms      = C_PARMS;
	Vector3f vec
	    = Vector3f(parms->mGeneral.mMaxAttackRange.mValue * sinf(faceDir), 0.0f, parms->mGeneral.mMaxAttackRange.mValue * cosf(faceDir));
	vec += getPosition();
	f32 radius = SQUARE(C_GENERALPARMS.mMaxAttackAngle.mValue);

	Iterator<Piki> iter(pikiMgr);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		if (piki->isAlive() && piki->isPikmin() && !piki->isStickToMouth() && piki->mSticker != this) {
			Vector3f pikiPos = piki->getPosition();
			if (sqrDistanceXZ(pikiPos, vec) < radius) {
				return piki;
			}
		}
	}

	return nullptr;
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
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	lfs      f0, lbl_8051B598@sda21(r2)
	lwz      r5, 0xc0(r31)
	fcmpo    cr0, f2, f0
	bge      lbl_80280834
	fneg     f2, f2

lbl_80280834:
	lfs      f3, lbl_8051B5D0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051B598@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	lfs      f4, 0x564(r5)
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f31, f4, f0
	bge      lbl_80280894
	lfs      f0, lbl_8051B5CC@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802808AC

lbl_80280894:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802808AC:
	mr       r4, r31
	fmuls    f30, f4, f0
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc0(r31)
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	lfs      f2, 0x14(r1)
	li       r0, 0
	lfs      f0, 0x58c(r4)
	addi     r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	lfs      f1, 0x1c(r1)
	cmplwi   r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	fadds    f30, f30, f2
	fadds    f31, f31, f1
	stw      r4, 0x20(r1)
	fmuls    f29, f0, f0
	stw      r0, 0x2c(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_80280924
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80280B14

lbl_80280924:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80280990

lbl_8028093C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80280B14
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80280990:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8028093C
	b        lbl_80280B14

lbl_802809B0:
	lwz      r3, 0x28(r1)
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
	beq      lbl_80280A58
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80280A58
	mr       r3, r30
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80280A58
	lwz      r0, 0xf4(r30)
	cmplw    r0, r31
	beq      lbl_80280A58
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	lfs      f1, 8(r1)
	fsubs    f0, f0, f31
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f29
	bge      lbl_80280A58
	mr       r3, r30
	b        lbl_80280B38

lbl_80280A58:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_80280A84
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80280B14

lbl_80280A84:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80280AF8

lbl_80280AA4:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80280B14
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80280AF8:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80280AA4

lbl_80280B14:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_802809B0
	li       r3, 0

lbl_80280B38:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x80280B68
 * @note Size: 0x1AC
 */
void Obj::updateEmit()
{
	if (mEfxMatrix) {
		mEfxMatrix->getTranslation(mAttackStartPos);
	}

	mAttackDirection = Vector3f(sinf(getFaceDir()), -0.85f, cosf(getFaceDir()));
	mAttackDirection.normalise();
}

/**
 * @note Address: 0x80280D14
 * @note Size: 0x1E8
 */
Vector3f Obj::getAttackPosition()
{
	Vector3f vec2 = mAttackStartPos;
	Vector3f vec1 = mAttackDirection;

	vec1 *= C_GENERALPARMS.mAttackRadius.mValue;

	vec1 += vec2;

	f32 inc    = 25.0f / C_GENERALPARMS.mAttackRadius.mValue;
	f32 t      = 100.0f / C_GENERALPARMS.mAttackRadius.mValue;
	f32 tCompl = 1.0f - t;

	Vector3f prevPos = Vector3f(vec2.x * tCompl + vec1.x * t, vec2.y * tCompl + vec1.y * t, vec2.z * tCompl + vec1.z * t);
	Vector3f nextPos;

	for (f32 ratio = t; ratio < 1.0f; ratio += inc) {
		f32 ratioCompl = 1.0f - ratio;
		nextPos
		    = Vector3f(vec2.x * ratioCompl + vec1.x * ratio, vec2.y * ratioCompl + vec1.y * ratio, vec2.z * ratioCompl + vec1.z * ratio);

		f32 minY = mapMgr->getMinY(nextPos);
		if (minY > nextPos.y) {
			return prevPos;
		}

		nextPos.y = minY;
		prevPos   = nextPos;
	}

	return nextPos;
}

/**
 * @note Address: 0x80280EFC
 * @note Size: 0x8F4
 */
void Obj::windTarget()
{
	if (mWindScaleTimer < 1.0f) {
		mWindScaleTimer += 3.0f * sys->mDeltaTime;
		if (mWindScaleTimer > 1.0f) {
			mWindScaleTimer = 1.0f;
		}
	}

	f32 radius                   = mWindScaleTimer * C_GENERALPARMS.mAttackRadius.mValue;
	Vector3f attackStartPosition = mAttackStartPos;                                                  // f16
	Vector3f attackDirection     = mAttackDirection;                                                 // f29
	f32 slope                    = (f32)tan(PI * (DEG2RAD * C_GENERALPARMS.mAttackHitAngle.mValue)); // f20

	// this is probably a new vector
	Vector3f attackNormal(-attackDirection.z, 0.0f, attackDirection.x);
	attackNormal.normalise();

	Vector3f crossVec = attackNormal.cross(attackStartPosition);
	crossVec.normalise();

	Vector2f direction2D(attackDirection.x, attackDirection.z);
	f32 directionLength = direction2D.normalise();
	if (directionLength > 0.0f) {
		direction2D.x = (attackDirection.x * (1.0f / directionLength));
		direction2D.y = (attackDirection.z * (1.0f / directionLength));
	}

	Iterator<Navi> iterNavi(naviMgr);
	CI_LOOP(iterNavi)
	{
		Navi* navi = *iterNavi;
		if (navi->isAlive()) {
			Vector3f naviPosition     = navi->getPosition();
			Vector3f separationVector = naviPosition - attackStartPosition;
			f32 dotProduct            = separationVector.dot(attackDirection);

			if (dotProduct < radius && dotProduct > 0.0f) {
				f32 slopeAffectedDotProduct   = dotProduct * slope;
				f32 crossVectorDotSeparation  = crossVec.dot(separationVector);
				f32 attackNormalDotSeparation = attackNormal.dot(separationVector);

				f32 combinedDotProduct = SQUARE(attackNormalDotSeparation) * SQUARE(crossVectorDotSeparation);
				if (combinedDotProduct < SQUARE(slopeAffectedDotProduct)) {
					f32 slideFactor = 0.0f;
					if (dotProduct > 0.0f) {
						slideFactor = 1.0f / sqrtf(dotProduct) * dotProduct;
					}

					f32 slideFactorRatio        = slideFactor / slopeAffectedDotProduct;
					f32 inverseSlideFactorRatio = 1.0f - slideFactor / slopeAffectedDotProduct;
					f32 attackDamage            = C_GENERALPARMS.mAttackDamage.mValue;
					f32 windStrength            = 10.0f * inverseSlideFactorRatio + slideFactorRatio;

					Vector3f windDirection;
					windDirection.x = windStrength * (separationVector.dot(attackNormal) + separationVector.dot(crossVec));
					windDirection.y = 0.0f;
					windDirection.z = windStrength * (separationVector.dot(attackNormal) + separationVector.dot(crossVec));

					InteractWind wind(this, attackDamage, &windDirection);
					navi->stimulate(wind);
				}
			}
		}
	}

	Iterator<Piki> iterPiki(pikiMgr);
	CI_LOOP(iterPiki)
	{
		Piki* piki = *iterPiki;
		if (piki->isAlive()) {
			Vector3f pikiPosition     = piki->getPosition();
			Vector3f separationVector = pikiPosition - attackStartPosition;
			f32 dotProduct            = separationVector.dot(attackDirection);

			if (dotProduct < radius && dotProduct > 0.0f) {
				f32 slopeAffectedDotProduct   = dotProduct * slope;
				f32 crossVectorDotSeparation  = crossVec.dot(separationVector);
				f32 attackNormalDotSeparation = attackNormal.dot(separationVector);

				f32 combinedDotProduct = SQUARE(attackNormalDotSeparation) * SQUARE(crossVectorDotSeparation);
				if (combinedDotProduct < SQUARE(slopeAffectedDotProduct)) {
					f32 slideFactor = 0.0f;
					if (dotProduct > 0.0f) {
						slideFactor = 1.0f / sqrtf(dotProduct) * dotProduct;
					}

					f32 slideFactorRatio        = slideFactor / slopeAffectedDotProduct;
					f32 inverseSlideFactorRatio = 1.0f - slideFactor / slopeAffectedDotProduct;
					f32 attackDamage            = C_GENERALPARMS.mAttackDamage.mValue;
					f32 windStrength            = 10.0f * inverseSlideFactorRatio + slideFactorRatio;

					Vector3f windDirection;
					windDirection.x = windStrength * (separationVector.dot(attackNormal) + separationVector.dot(crossVec));
					windDirection.y = 0.0f;
					windDirection.z = windStrength * (separationVector.dot(attackNormal) + separationVector.dot(crossVec));

					InteractWind wind(this, attackDamage, &windDirection);
					piki->stimulate(wind);
				}
			}
		}
	}

	mAttackPosition = getAttackPosition();
	/*
	stwu     r1, -0x190(r1)
	mflr     r0
	stw      r0, 0x194(r1)
	stfd     f31, 0x180(r1)
	psq_st   f31, 392(r1), 0, qr0
	stfd     f30, 0x170(r1)
	psq_st   f30, 376(r1), 0, qr0
	stfd     f29, 0x160(r1)
	psq_st   f29, 360(r1), 0, qr0
	stfd     f28, 0x150(r1)
	psq_st   f28, 344(r1), 0, qr0
	stfd     f27, 0x140(r1)
	psq_st   f27, 328(r1), 0, qr0
	stfd     f26, 0x130(r1)
	psq_st   f26, 312(r1), 0, qr0
	stfd     f25, 0x120(r1)
	psq_st   f25, 296(r1), 0, qr0
	stfd     f24, 0x110(r1)
	psq_st   f24, 280(r1), 0, qr0
	stfd     f23, 0x100(r1)
	psq_st   f23, 264(r1), 0, qr0
	stfd     f22, 0xf0(r1)
	psq_st   f22, 248(r1), 0, qr0
	stfd     f21, 0xe0(r1)
	psq_st   f21, 232(r1), 0, qr0
	stfd     f20, 0xd0(r1)
	psq_st   f20, 216(r1), 0, qr0
	stfd     f19, 0xc0(r1)
	psq_st   f19, 200(r1), 0, qr0
	stfd     f18, 0xb0(r1)
	psq_st   f18, 184(r1), 0, qr0
	stfd     f17, 0xa0(r1)
	psq_st   f17, 168(r1), 0, qr0
	stfd     f16, 0x90(r1)
	psq_st   f16, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	mr       r31, r3
	lfs      f2, lbl_8051B5B0@sda21(r2)
	lfs      f3, 0x304(r3)
	fcmpo    cr0, f3, f2
	bge      lbl_80280FC8
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_8051B60C@sda21(r2)
	lfs      f0, 0x54(r3)
	fmadds   f0, f1, f0, f3
	stfs     f0, 0x304(r31)
	lfs      f0, 0x304(r31)
	fcmpo    cr0, f0, f2
	ble      lbl_80280FC8
	stfs     f2, 0x304(r31)

lbl_80280FC8:
	lwz      r3, 0xc0(r31)
	lfs      f1, lbl_8051B5F8@sda21(r2)
	lfs      f0, 0x5dc(r3)
	lfs      f3, 0x304(r31)
	fmuls    f0, f1, f0
	lfs      f2, 0x5b4(r3)
	lfs      f1, lbl_8051B5D8@sda21(r2)
	fmuls    f19, f3, f2
	lfs      f16, 0x2e0(r31)
	fmuls    f1, f1, f0
	lfs      f17, 0x2e4(r31)
	lfs      f18, 0x2e8(r31)
	lfs      f29, 0x2ec(r31)
	lfs      f21, 0x2f0(r31)
	lfs      f28, 0x2f4(r31)
	bl       tan
	fneg     f27, f28
	lfs      f31, lbl_8051B598@sda21(r2)
	fmuls    f0, f29, f29
	fmr      f30, f29
	fmadds   f2, f27, f27, f31
	frsp     f20, f1
	fadds    f2, f0, f2
	fcmpo    cr0, f2, f31
	ble      lbl_8028103C
	ble      lbl_80281040
	frsqrte  f1, f2
	fmuls    f2, f1, f2
	b        lbl_80281040

lbl_8028103C:
	fmr      f2, f31

lbl_80281040:
	lfs      f1, lbl_8051B598@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_80281060
	lfs      f1, lbl_8051B5B0@sda21(r2)
	fdivs    f1, f1, f2
	fmuls    f27, f27, f1
	fmuls    f31, f31, f1
	fmuls    f30, f30, f1

lbl_80281060:
	fmuls    f3, f27, f28
	lfs      f1, lbl_8051B598@sda21(r2)
	fmuls    f4, f30, f21
	fmuls    f2, f31, f29
	fmsubs   f25, f30, f29, f3
	fmsubs   f26, f31, f28, f4
	fmsubs   f24, f27, f21, f2
	fmuls    f2, f25, f25
	fmuls    f3, f24, f24
	fmadds   f2, f26, f26, f2
	fadds    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_802810A4
	ble      lbl_802810A8
	frsqrte  f1, f2
	fmuls    f2, f1, f2
	b        lbl_802810A8

lbl_802810A4:
	fmr      f2, f1

lbl_802810A8:
	lfs      f1, lbl_8051B598@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_802810C8
	lfs      f1, lbl_8051B5B0@sda21(r2)
	fdivs    f1, f1, f2
	fmuls    f26, f26, f1
	fmuls    f25, f25, f1
	fmuls    f24, f24, f1

lbl_802810C8:
	lfs      f1, lbl_8051B598@sda21(r2)
	fmuls    f2, f28, f28
	fmr      f22, f29
	fadds    f0, f0, f1
	fmr      f23, f28
	fadds    f0, f2, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80281104
	fmadds   f0, f29, f29, f1
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80281108
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80281108

lbl_80281104:
	fmr      f2, f1

lbl_80281108:
	lfs      f0, lbl_8051B598@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80281124
	lfs      f0, lbl_8051B5B0@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f22, f22, f0
	fmuls    f23, f23, f0

lbl_80281124:
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x48(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x3c(r1)
	stw      r0, 0x40(r1)
	stw      r3, 0x44(r1)
	bne      lbl_80281164
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_802813F4

lbl_80281164:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_802811D0

lbl_8028117C:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802813F4
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_802811D0:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8028117C
	b        lbl_802813F4

lbl_802811F0:
	lwz      r3, 0x44(r1)
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
	beq      lbl_80281338
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x24(r1)
	lfs      f0, 0x20(r1)
	fsubs    f2, f1, f17
	lfs      f1, 0x28(r1)
	fsubs    f4, f0, f16
	fsubs    f0, f1, f18
	fmuls    f1, f21, f2
	fmadds   f1, f29, f4, f1
	fmadds   f5, f28, f0, f1
	fcmpo    cr0, f5, f19
	bge      lbl_80281338
	lfs      f6, lbl_8051B598@sda21(r2)
	fcmpo    cr0, f5, f6
	ble      lbl_80281338
	fmuls    f3, f25, f2
	fmuls    f1, f31, f2
	fmuls    f2, f5, f20
	fmadds   f5, f26, f4, f3
	fmadds   f4, f27, f4, f1
	fmuls    f3, f2, f2
	fmadds   f1, f24, f0, f5
	fmadds   f0, f30, f0, f4
	fmuls    f4, f1, f1
	fmadds   f4, f0, f0, f4
	fcmpo    cr0, f4, f3
	bge      lbl_80281338
	fcmpo    cr0, f4, f6
	ble      lbl_802812BC
	ble      lbl_802812B8
	frsqrte  f3, f4
	fmuls    f6, f3, f4
	b        lbl_802812BC

lbl_802812B8:
	fmr      f6, f4

lbl_802812BC:
	fdivs    f7, f6, f2
	lfs      f2, lbl_8051B5B0@sda21(r2)
	lwz      r5, 0xc0(r31)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game12InteractWind@ha
	lfs      f5, lbl_8051B5E8@sda21(r2)
	fsubs    f4, f2, f7
	lfs      f6, 0x604(r5)
	fmuls    f3, f27, f0
	addi     r0, r4, __vt__Q24Game11Interaction@l
	fmuls    f0, f30, f0
	lfs      f2, lbl_8051B598@sda21(r2)
	fmadds   f4, f5, f4, f7
	stw      r0, 0x64(r1)
	fmadds   f3, f22, f1, f3
	addi     r0, r3, __vt__Q24Game12InteractWind@l
	fmadds   f0, f23, f1, f0
	stw      r31, 0x68(r1)
	fmuls    f1, f4, f3
	stw      r0, 0x64(r1)
	fmuls    f0, f4, f0
	mr       r3, r30
	stfs     f6, 0x6c(r1)
	addi     r4, r1, 0x64
	stfs     f1, 0x70(r1)
	stfs     f2, 0x74(r1)
	stfs     f0, 0x78(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80281338:
	lwz      r0, 0x48(r1)
	cmplwi   r0, 0
	bne      lbl_80281364
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_802813F4

lbl_80281364:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_802813D8

lbl_80281384:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802813F4
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_802813D8:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80281384

lbl_802813F4:
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x40(r1)
	cmplw    r4, r3
	bne      lbl_802811F0
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x38(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x2c(r1)
	stw      r0, 0x30(r1)
	stw      r3, 0x34(r1)
	bne      lbl_80281454
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_80281714

lbl_80281454:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_802814C0

lbl_8028146C:
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
	bne      lbl_80281714
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_802814C0:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8028146C
	b        lbl_80281714

lbl_802814E0:
	lwz      r3, 0x34(r1)
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
	beq      lbl_80281658
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80281658
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x18(r1)
	lfs      f0, 0x14(r1)
	fsubs    f2, f1, f17
	lfs      f1, 0x1c(r1)
	fsubs    f3, f0, f16
	fsubs    f4, f1, f18
	fmuls    f0, f21, f2
	fmadds   f0, f29, f3, f0
	fmadds   f6, f28, f4, f0
	fcmpo    cr0, f6, f19
	bge      lbl_80281658
	lfs      f5, lbl_8051B598@sda21(r2)
	fcmpo    cr0, f6, f5
	ble      lbl_80281658
	fmuls    f1, f25, f2
	fmuls    f0, f31, f2
	fmuls    f2, f6, f20
	fmadds   f1, f26, f3, f1
	fmadds   f0, f27, f3, f0
	fmuls    f3, f2, f2
	fmadds   f1, f24, f4, f1
	fmadds   f0, f30, f4, f0
	fmuls    f4, f1, f1
	fmadds   f4, f0, f0, f4
	fcmpo    cr0, f4, f3
	bge      lbl_80281658
	fcmpo    cr0, f4, f5
	ble      lbl_802815C4
	ble      lbl_802815C8
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_802815C8

lbl_802815C4:
	fmr      f4, f5

lbl_802815C8:
	fdivs    f9, f4, f2
	lfs      f2, lbl_8051B5B0@sda21(r2)
	lfs      f7, lbl_8051B5F0@sda21(r2)
	lis      r4, __vt__Q24Game11Interaction@ha
	lfs      f4, lbl_8051B5B8@sda21(r2)
	lis      r3, __vt__Q24Game12InteractWind@ha
	fmuls    f6, f27, f0
	lfs      f8, lbl_8051B610@sda21(r2)
	fmuls    f3, f30, f0
	lwz      r5, 0xc0(r31)
	fsubs    f2, f2, f9
	lfs      f5, lbl_8051B5C0@sda21(r2)
	lfs      f0, 0x604(r5)
	fmuls    f7, f7, f9
	fmuls    f4, f4, f9
	addi     r0, r4, __vt__Q24Game11Interaction@l
	fmadds   f6, f22, f1, f6
	stw      r0, 0x4c(r1)
	fmadds   f7, f8, f2, f7
	fmadds   f1, f23, f1, f3
	fmadds   f2, f5, f2, f4
	addi     r0, r3, __vt__Q24Game12InteractWind@l
	fmuls    f3, f7, f6
	stw      r31, 0x50(r1)
	fmuls    f1, f7, f1
	stw      r0, 0x4c(r1)
	mr       r3, r30
	addi     r4, r1, 0x4c
	stfs     f0, 0x54(r1)
	stfs     f3, 0x58(r1)
	stfs     f2, 0x5c(r1)
	stfs     f1, 0x60(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80281658:
	lwz      r0, 0x38(r1)
	cmplwi   r0, 0
	bne      lbl_80281684
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_80281714

lbl_80281684:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_802816F8

lbl_802816A4:
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
	bne      lbl_80281714
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_802816F8:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802816A4

lbl_80281714:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x30(r1)
	cmplw    r4, r3
	bne      lbl_802814E0
	mr       r4, r31
	addi     r3, r1, 8
	bl       getAttackPosition__Q34Game3Mar3ObjFv
	lfs      f0, 8(r1)
	stfs     f0, 0x2f8(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2fc(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x300(r31)
	psq_l    f31, 392(r1), 0, qr0
	lfd      f31, 0x180(r1)
	psq_l    f30, 376(r1), 0, qr0
	lfd      f30, 0x170(r1)
	psq_l    f29, 360(r1), 0, qr0
	lfd      f29, 0x160(r1)
	psq_l    f28, 344(r1), 0, qr0
	lfd      f28, 0x150(r1)
	psq_l    f27, 328(r1), 0, qr0
	lfd      f27, 0x140(r1)
	psq_l    f26, 312(r1), 0, qr0
	lfd      f26, 0x130(r1)
	psq_l    f25, 296(r1), 0, qr0
	lfd      f25, 0x120(r1)
	psq_l    f24, 280(r1), 0, qr0
	lfd      f24, 0x110(r1)
	psq_l    f23, 264(r1), 0, qr0
	lfd      f23, 0x100(r1)
	psq_l    f22, 248(r1), 0, qr0
	lfd      f22, 0xf0(r1)
	psq_l    f21, 232(r1), 0, qr0
	lfd      f21, 0xe0(r1)
	psq_l    f20, 216(r1), 0, qr0
	lfd      f20, 0xd0(r1)
	psq_l    f19, 200(r1), 0, qr0
	lfd      f19, 0xc0(r1)
	psq_l    f18, 184(r1), 0, qr0
	lfd      f18, 0xb0(r1)
	psq_l    f17, 168(r1), 0, qr0
	lfd      f17, 0xa0(r1)
	psq_l    f16, 152(r1), 0, qr0
	lfd      f16, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r0, 0x194(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0x190
	blr
	*/
}

/**
 * @note Address: 0x802817F0
 * @note Size: 0x150
 */
void Obj::createEffect()
{
	mEfxDead   = new efx::TFusenDead;
	mEfxAirhit = new efx::TFusenAirhit(&mAttackPosition, &mFaceDir);
	mEfxAir    = new efx::TFusenAir;
	mEfxSui    = new efx::TFusenSui;
}

/**
 * @note Address: 0x80281940
 * @note Size: 0x4C
 */
void Obj::setupEffect()
{
	mEfxDead->setMtxptr(mEfxMatrix->mMatrix.mtxView);
	mEfxAir->setMtxptr(mEfxMatrix->mMatrix.mtxView);
	mEfxSui->mMtx = mEfxMatrix;
}

/**
 * @note Address: 0x8028198C
 * @note Size: 0x7C
 */
void Obj::startDeadEffect()
{
	mEfxDead->create(nullptr);
	mEfxAirhit->fade();
	mEfxAir->fade();
	mEfxSui->fade();
}

/**
 * @note Address: 0x80281A08
 * @note Size: 0x34
 */
void Obj::createSuckEffect() { mEfxSui->create(nullptr); }

/**
 * @note Address: 0x80281A3C
 * @note Size: 0x90
 */
void Obj::startWindEffect()
{
	mAttackPosition = getAttackPosition();
	mEfxSui->fade();
	mEfxAir->create(nullptr);
	mEfxAirhit->create(nullptr);
}

/**
 * @note Address: 0x80281ACC
 * @note Size: 0x78
 */
void Obj::finishWindEffect()
{
	mEfxDead->fade();
	mEfxAirhit->fade();
	mEfxAir->fade();
	mEfxSui->fade();
}

/**
 * @note Address: 0x80281B44
 * @note Size: 0x74
 */
void Obj::createDownEffect()
{
	Vector3f downEffectPos = mPosition + mEffectOffset;
	createBounceEffect(downEffectPos, getDownSmokeScale());
}

/**
 * @note Address: 0x80281BC0
 * @note Size: 0x78
 */
void Obj::effectDrawOn()
{
	mEfxDead->endDemoDrawOn();
	mEfxAirhit->endDemoDrawOn();
	mEfxAir->endDemoDrawOn();
	mEfxSui->endDemoDrawOn();
}

/**
 * @note Address: 0x80281C38
 * @note Size: 0x78
 */
void Obj::effectDrawOff()
{
	mEfxDead->startDemoDrawOff();
	mEfxAirhit->startDemoDrawOff();
	mEfxAir->startDemoDrawOff();
	mEfxSui->startDemoDrawOff();
}

} // namespace Mar
} // namespace Game
