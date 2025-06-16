#include "Game/Entities/Hanachirashi.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Hanachirashi {

/**
 * @note Address: 0x802A1AE8
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
 * @note Address: 0x802A1C44
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
}

/**
 * @note Address: 0x802A1C48
 * @note Size: 0xF4
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	enableEvent(0, EB_Untargetable);

	mNextState   = HANACHIRASHI_NULL;
	mAirWaitTime = 0.0f;
	mFallTimer   = 0.0f;

	resetShadowOffset();
	resetShadowRadius();

	mPitchRatio         = 0.0f;
	mIsWindAttackActive = false;
	mEfxMatrix          = mModel->getJoint("hana3")->getWorldMatrix();
	setupEffect();

	mWindScaleTimer = 0.0f;

	mFsm->start(this, HANACHIRASHI_Wait, nullptr);

	mMatAnimators[0].start(C_MGR->mTexAnimation);
	mMatAnimators[1].start(C_MGR->mTevRegAnimation);
}

/**
 * @note Address: 0x802A1D3C
 * @note Size: 0x44
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishWindEffect();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x802A1D80
 * @note Size: 0x50
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	updateFallTimer();
	updateEmit();
}

/**
 * @note Address: 0x802A1DD0
 * @note Size: 0xD4
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData = nullptr;
	J3DModel* model         = mModel->mJ3dModel;
	modelData               = model->mModelData;

	model->calcMaterial();

	mMatAnimators[0].animate(30.0f);
	mMatAnimators[1].animate(30.0f);

	for (u16 i = 0; i < modelData->getMaterialNum(); i++) {
		j3dSys.setMatPacket(model->getMatPacket(i));
		J3DMaterial* mat = modelData->getMaterialNodePointer(i);
		mat->diff(j3dSys.getMatPacket()->getShapePacket()->mDiffFlag);
	}
}

/**
 * @note Address: 0x802A1EA4
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802A1EF0
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x802A1EF4
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x802A1F14
 * @note Size: 0x168
 */
void Obj::getShadowParam(ShadowParam& shadow)
{
	Vector3f bodyVec = mModel->getJoint("mune")->getWorldMatrix()->getColumn(3);
	Vector3f headVec = mModel->getJoint("head")->getWorldMatrix()->getColumn(3);
	shadow.mPosition = headVec;
	shadow.mPosition += bodyVec;
	shadow.mPosition *= 0.5f;
	shadow.mPosition.y = mPosition.y + mShadowOffset;

	shadow.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isFlying() || !mFloorTriangle) {
		shadow.mBoundingSphere.mRadius = C_PROPERPARMS.mStandardFlightHeight.mValue + 100.0f;
	} else {
		shadow.mBoundingSphere.mRadius = 50.0f;
	}
	shadow.mSize = mShadowRadius;
}

/**
 * @note Address: 0x802A207C
 * @note Size: 0x3C
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishWindEffect();
	setShadowOffsetMax();
}

/**
 * @note Address: 0x802A20B8
 * @note Size: 0x7C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	int id = getStateID();

	if ((id >= HANACHIRASHI_Wait && id <= HANACHIRASHI_Fall) || (id >= HANACHIRASHI_TakeOff && id <= HANACHIRASHI_FlyFlick)
	    || (id == HANACHIRASHI_Laugh)) {
		mFsm->transit(this, HANACHIRASHI_TakeOff, nullptr);
	}
}

/**
 * @note Address: 0x802A2134
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x802A2168
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x802A219C
 * @note Size: 0x20
 */
void Obj::doStartMovie()
{
	effectDrawOff();
}

/**
 * @note Address: 0x802A21BC
 * @note Size: 0x20
 */
void Obj::doEndMovie()
{
	effectDrawOn();
}

/**
 * @note Address: 0x802A21DC
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
 * @note Address: 0x802A2240
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
 * @note Address: 0x802A2290
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
 * @note Address: 0x802A22D0
 * @note Size: 0x50
 */
Vector3f Obj::getHeadJointPos()
{
	return mModel->getJoint("head")->getWorldMatrix()->getTranslation();
}

/**
 * @note Address: 0x802A2320
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
 * @note Address: 0x802A243C
 * @note Size: 0x1D8
 */
void Obj::setRandTarget()
{
	f32 outsideRadius  = C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue;
	f32 radius         = randWeightFloat(outsideRadius) + C_GENERALPARMS.mHomeRadius.mValue;
	Vector3f position  = getPosition();
	Vector3f homePos   = mHomePosition;
	Vector3f atanInput = position - homePos;
	f32 aboutTheta     = JMAAtan2Radian(atanInput.x, atanInput.z);

	f32 theta = aboutTheta + randWeightFloat(PI) + HALF_PI;

	mTargetPosition = Vector3f(radius * sinf(theta) + homePos.x, homePos.y, radius * cosf(theta) + homePos.z);
}

/**
 * @note Address: 0x802A2614
 * @note Size: 0xC
 */
void Obj::resetShadowOffset()
{
	mShadowOffset = -5.0f;
}

/**
 * @note Address: 0x802A2620
 * @note Size: 0xC
 */
void Obj::setShadowOffsetMax()
{
	mShadowOffset = 5.0f;
}

/**
 * @note Address: 0x802A262C
 * @note Size: 0x28
 */
void Obj::addShadowOffset()
{
	mShadowOffset += 1.0f;
	if (mShadowOffset > 5.0f) {
		mShadowOffset = 5.0f;
	}
}

/**
 * @note Address: 0x802A2654
 * @note Size: 0x28
 */
void Obj::subShadowOffset()
{
	mShadowOffset -= 1.0f;
	if (mShadowOffset < -5.0f) {
		mShadowOffset = -5.0f;
	}
}

/**
 * @note Address: 0x802A267C
 * @note Size: 0xC
 */
void Obj::resetShadowRadius()
{
	mShadowRadius = 20.0f;
}

/**
 * @note Address: 0x802A2688
 * @note Size: 0x2C
 */
void Obj::subShadowRadius()
{
	if (mShadowRadius > 1.0f) {
		mShadowRadius -= 1.0f;

		if (mShadowRadius < 1.0f) {
			mShadowRadius = 1.0f;
		}
	}
}

/**
 * @note Address: 0x802A26B4
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
 * @note Address: 0x802A26E4
 * @note Size: 0xA4
 */
StateID Obj::getFlyingNextState()
{
	if (mHealth <= 0.0f) {
		return HANACHIRASHI_Dead;
	}

	if (EnemyFunc::getStickPikminColorNum(this, Purple) > 0) {
		return HANACHIRASHI_Fall;
	}

	if (mFallTimer > C_PROPERPARMS.mShakeOffTime.mValue || mStuckPikminCount >= C_PROPERPARMS.mFallingMinimumPikiNum.mValue) {
		if (mStuckPikminCount < C_PROPERPARMS.mFallingMinimumPikiNum.mValue) {
			return HANACHIRASHI_FlyFlick;
		} else {
			return HANACHIRASHI_Fall;
		}
	}
	return HANACHIRASHI_NULL;
}

/**
 * @note Address: 0x802A2788
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
 * @note Address: 0x802A27C0
 * @note Size: 0x3D4
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
				Vector3f pos      = getPosition();
				Vector3f pikiPos2 = piki->getPosition();
				if (sqrDistanceXZ(pikiPos2, pos) < sqrSight) {
					return piki;
				}
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x802A2B94
 * @note Size: 0x2F0
 */
bool Obj::isTargetLost()
{
	Creature* target = mTargetCreature;
	if (target && target->isAlive() && !target->isStickToMouth() && target->mSticker != this) {
		f32 viewAngle = C_GENERALPARMS.mViewAngle();
		if (mStuckPikminCount) {
			viewAngle = 180.0f;
		}

		return isTargetWithinRange(target, getCreatureViewAngle(target), C_GENERALPARMS.mPrivateRadius(), C_GENERALPARMS.mSightRadius(),
		                           12800.0f, viewAngle);
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
	beq      lbl_802A2E30
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A2E30
	mr       r3, r31
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802A2E30
	lwz      r0, 0xf4(r31)
	cmplw    r0, r30
	beq      lbl_802A2E30
	lwz      r0, 0x1f4(r30)
	lwz      r5, 0xc0(r30)
	cmpwi    r0, 0
	lfs      f29, 0x424(r5)
	beq      lbl_802A2C40
	lfs      f29, lbl_8051BE24@sda21(r2)

lbl_802A2C40:
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
	ble      lbl_802A2DF4
	fcmpo    cr0, f0, f2
	mr       r0, r4
	ble      lbl_802A2DE8
	fabs     f1, f26
	lfs      f0, lbl_8051BE28@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802A2DE8
	mr       r0, r3

lbl_802A2DE8:
	clrlwi.  r0, r0, 0x18
	beq      lbl_802A2DF4
	li       r4, 1

lbl_802A2DF4:
	clrlwi.  r0, r4, 0x18
	bne      lbl_802A2E34
	lfs      f0, lbl_8051BE20@sda21(r2)
	fabs     f2, f27
	lfs      f1, lbl_8051BDFC@sda21(r2)
	fmuls    f0, f0, f29
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_802A2E34
	li       r3, 0
	b        lbl_802A2E34

lbl_802A2E30:
	li       r3, 1

lbl_802A2E34:
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
 * @note Address: 0x802A2E84
 * @note Size: 0x38C
 */
Creature* Obj::isAttackable()
{
	const f32 faceDir = getFaceDir();
	Vector3f vec = Vector3f(C_PARMS->mGeneral.mMaxAttackRange() * sinf(faceDir), 0.0f, C_PARMS->mGeneral.mMaxAttackRange() * cosf(faceDir));
	vec += getPosition();
	f32 radius = SQUARE(C_GENERALPARMS.mMaxAttackAngle());

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
}

/**
 * @note Address: 0x802A3210
 * @note Size: 0x1AC
 */
void Obj::updateEmit()
{
	if (mEfxMatrix) {
		mEfxMatrix->getTranslation(mEfxPosition);
	}

	mFaceDirection = Vector3f(sinf(getFaceDir()), -0.85f, cosf(getFaceDir()));
	mFaceDirection.normalise();
}

/**
 * @note Address: 0x802A33BC
 * @note Size: 0x1E8
 */
Vector3f Obj::getAttackPosition()
{
	Vector3f vec2 = mEfxPosition;
	Vector3f vec1 = mFaceDirection;

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
 * @note Address: 0x802A35A4
 * @note Size: 0x90C
 */
bool Obj::windTarget()
{
	bool isHitPiki = false;
	if (mWindScaleTimer < 1.0f) {
		mWindScaleTimer += 3.0f * sys->mDeltaTime;
		if (mWindScaleTimer > 1.0f) {
			mWindScaleTimer = 1.0f;
		}
	}

	f32 radius              = mWindScaleTimer * C_GENERALPARMS.mAttackRadius();
	Vector3f attackStartPos = mEfxPosition;                                     // f16
	Vector3f faceDirection  = mFaceDirection;                                   // f29
	f32 slope               = tan(TORADIANS(C_GENERALPARMS.mAttackHitAngle())); // f20

	Vector3f attackNormal = Vector3f(-faceDirection.z, 0.0f, faceDirection.x);
	attackNormal.normalise();

	Vector3f crossDir = attackNormal.cross(faceDirection);
	crossDir.normalise();

	Vector3f attackDirection2D = faceDirection;
	attackDirection2D.toFlatDirection();

	Iterator<Navi> iterNavi(naviMgr);
	CI_LOOP(iterNavi)
	{
		Navi* navi = *iterNavi;
		if (navi->isAlive()) {
			Vector3f naviPosition  = navi->getPosition();
			Vector3f separationVec = naviPosition - attackStartPos;

			f32 dotProduct = faceDirection.dot(separationVec);
			if (dotProduct < radius && dotProduct > 0.0f) {
				f32 attackRadius = dotProduct * slope;

				Vector2f dots = Vector2f(attackNormal.dot(separationVec), crossDir.dot(separationVec));
				if (dots.sqrMagnitude() < SQUARE(attackRadius)) {
					f32 slideFactor = dots.length() / attackRadius;

					f32 windStrength = slideFactor * 0.2f + (1.0f - slideFactor);
					Vector3f direction(windStrength * (attackDirection2D.x * dots.y + attackNormal.x * dots.x), 0.0f,
					                   windStrength * (attackDirection2D.z * dots.y + attackNormal.z * dots.x));

					InteractWind wind(this, C_GENERALPARMS.mAttackDamage(), &direction); // not vec2
					navi->stimulate(wind);
				}
			}
		}
	}

	Iterator<Piki> iterPiki(pikiMgr);
	CI_LOOP(iterPiki)
	{
		Piki* piki = *iterPiki;
		if (piki->isAlive() && piki->isPikmin()) {
			Vector3f pikiPos       = piki->getPosition();
			Vector3f separationVec = pikiPos - attackStartPos;

			f32 dotProduct = faceDirection.dot(separationVec);
			if (dotProduct < radius && dotProduct > 0.0f) {
				f32 attackRadius = dotProduct * slope;

				Vector2f dots = Vector2f(attackNormal.dot(separationVec), crossDir.dot(separationVec));
				if (dots.sqrMagnitude() < SQUARE(attackRadius)) {
					f32 slideFactor = dots.length() / attackRadius;

					f32 windStrength = (1.0f - slideFactor) * 5.0f + slideFactor;
					Vector3f direction(windStrength * (attackDirection2D.x * dots.y + attackNormal.x * dots.x),
					                   (1.0f - slideFactor) * 50.0f + slideFactor * 10.0f,
					                   windStrength * (attackDirection2D.z * dots.y + attackNormal.z * dots.x));

					InteractHanaChirashi wind(this, C_GENERALPARMS.mAttackDamage(), &direction); // not vec2
					isHitPiki = piki->stimulate(wind);
				}
			}
		}
	}

	mAttackPosition = getAttackPosition();
	return isHitPiki;
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
	stw      r29, 0x84(r1)
	mr       r30, r3
	lfs      f2, lbl_8051BDDC@sda21(r2)
	lfs      f3, 0x30c(r3)
	li       r31, 0
	fcmpo    cr0, f3, f2
	bge      lbl_802A3678
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_8051BE34@sda21(r2)
	lfs      f0, 0x54(r3)
	fmadds   f0, f1, f0, f3
	stfs     f0, 0x30c(r30)
	lfs      f0, 0x30c(r30)
	fcmpo    cr0, f0, f2
	ble      lbl_802A3678
	stfs     f2, 0x30c(r30)

lbl_802A3678:
	lwz      r3, 0xc0(r30)
	lfs      f1, lbl_8051BE20@sda21(r2)
	lfs      f0, 0x5dc(r3)
	lfs      f3, 0x30c(r30)
	fmuls    f0, f1, f0
	lfs      f2, 0x5b4(r3)
	lfs      f1, lbl_8051BDFC@sda21(r2)
	fmuls    f19, f3, f2
	lfs      f16, 0x2e8(r30)
	fmuls    f1, f1, f0
	lfs      f17, 0x2ec(r30)
	lfs      f18, 0x2f0(r30)
	lfs      f29, 0x2f4(r30)
	lfs      f21, 0x2f8(r30)
	lfs      f28, 0x2fc(r30)
	bl       tan
	fneg     f27, f28
	lfs      f31, lbl_8051BDB8@sda21(r2)
	fmuls    f0, f29, f29
	fmr      f30, f29
	fmadds   f2, f27, f27, f31
	frsp     f20, f1
	fadds    f2, f0, f2
	fcmpo    cr0, f2, f31
	ble      lbl_802A36EC
	ble      lbl_802A36F0
	frsqrte  f1, f2
	fmuls    f2, f1, f2
	b        lbl_802A36F0

lbl_802A36EC:
	fmr      f2, f31

lbl_802A36F0:
	lfs      f1, lbl_8051BDB8@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_802A3710
	lfs      f1, lbl_8051BDDC@sda21(r2)
	fdivs    f1, f1, f2
	fmuls    f27, f27, f1
	fmuls    f31, f31, f1
	fmuls    f30, f30, f1

lbl_802A3710:
	fmuls    f3, f27, f28
	lfs      f1, lbl_8051BDB8@sda21(r2)
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
	ble      lbl_802A3754
	ble      lbl_802A3758
	frsqrte  f1, f2
	fmuls    f2, f1, f2
	b        lbl_802A3758

lbl_802A3754:
	fmr      f2, f1

lbl_802A3758:
	lfs      f1, lbl_8051BDB8@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_802A3778
	lfs      f1, lbl_8051BDDC@sda21(r2)
	fdivs    f1, f1, f2
	fmuls    f26, f26, f1
	fmuls    f25, f25, f1
	fmuls    f24, f24, f1

lbl_802A3778:
	lfs      f1, lbl_8051BDB8@sda21(r2)
	fmuls    f2, f28, f28
	fmr      f22, f29
	fadds    f0, f0, f1
	fmr      f23, f28
	fadds    f0, f2, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802A37B4
	fmadds   f0, f29, f29, f1
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802A37B8
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_802A37B8

lbl_802A37B4:
	fmr      f2, f1

lbl_802A37B8:
	lfs      f0, lbl_8051BDB8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_802A37D4
	lfs      f0, lbl_8051BDDC@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f22, f22, f0
	fmuls    f23, f23, f0

lbl_802A37D4:
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x48(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x3c(r1)
	stw      r0, 0x40(r1)
	stw      r3, 0x44(r1)
	bne      lbl_802A3814
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_802A3AA4

lbl_802A3814:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_802A3880

lbl_802A382C:
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
	bne      lbl_802A3AA4
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_802A3880:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A382C
	b        lbl_802A3AA4

lbl_802A38A0:
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A39E8
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
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
	bge      lbl_802A39E8
	lfs      f6, lbl_8051BDB8@sda21(r2)
	fcmpo    cr0, f5, f6
	ble      lbl_802A39E8
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
	bge      lbl_802A39E8
	fcmpo    cr0, f4, f6
	ble      lbl_802A396C
	ble      lbl_802A3968
	frsqrte  f3, f4
	fmuls    f6, f3, f4
	b        lbl_802A396C

lbl_802A3968:
	fmr      f6, f4

lbl_802A396C:
	fdivs    f7, f6, f2
	lfs      f2, lbl_8051BDDC@sda21(r2)
	lwz      r5, 0xc0(r30)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game12InteractWind@ha
	lfs      f5, lbl_8051BE38@sda21(r2)
	fsubs    f4, f2, f7
	lfs      f6, 0x604(r5)
	fmuls    f3, f27, f0
	addi     r0, r4, __vt__Q24Game11Interaction@l
	fmuls    f0, f30, f0
	lfs      f2, lbl_8051BDB8@sda21(r2)
	fmadds   f4, f5, f7, f4
	stw      r0, 0x64(r1)
	fmadds   f3, f22, f1, f3
	addi     r0, r3, __vt__Q24Game12InteractWind@l
	fmadds   f0, f23, f1, f0
	stw      r30, 0x68(r1)
	fmuls    f1, f4, f3
	stw      r0, 0x64(r1)
	fmuls    f0, f4, f0
	mr       r3, r29
	stfs     f6, 0x6c(r1)
	addi     r4, r1, 0x64
	stfs     f1, 0x70(r1)
	stfs     f2, 0x74(r1)
	stfs     f0, 0x78(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802A39E8:
	lwz      r0, 0x48(r1)
	cmplwi   r0, 0
	bne      lbl_802A3A14
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_802A3AA4

lbl_802A3A14:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_802A3A88

lbl_802A3A34:
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
	bne      lbl_802A3AA4
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_802A3A88:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A3A34

lbl_802A3AA4:
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x40(r1)
	cmplw    r4, r3
	bne      lbl_802A38A0
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x38(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x2c(r1)
	stw      r0, 0x30(r1)
	stw      r3, 0x34(r1)
	bne      lbl_802A3B04
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_802A3DCC

lbl_802A3B04:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_802A3B70

lbl_802A3B1C:
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
	bne      lbl_802A3DCC
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_802A3B70:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A3B1C
	b        lbl_802A3DCC

lbl_802A3B90:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A3D10
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A3D10
	mr       r4, r29
	addi     r3, r1, 0x14
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x18(r1)
	lfs      f0, 0x14(r1)
	fsubs    f4, f1, f17
	lfs      f1, 0x1c(r1)
	fsubs    f3, f0, f16
	fsubs    f6, f1, f18
	fmuls    f0, f21, f4
	fmadds   f0, f29, f3, f0
	fmadds   f0, f28, f6, f0
	fcmpo    cr0, f0, f19
	bge      lbl_802A3D10
	lfs      f5, lbl_8051BDB8@sda21(r2)
	fcmpo    cr0, f0, f5
	ble      lbl_802A3D10
	fmuls    f2, f25, f4
	fmuls    f1, f31, f4
	fmuls    f0, f0, f20
	fmadds   f4, f26, f3, f2
	fmadds   f2, f27, f3, f1
	fmuls    f3, f0, f0
	fmadds   f1, f24, f6, f4
	fmadds   f2, f30, f6, f2
	fmuls    f4, f1, f1
	fmadds   f4, f2, f2, f4
	fcmpo    cr0, f4, f3
	bge      lbl_802A3D10
	fcmpo    cr0, f4, f5
	ble      lbl_802A3C74
	ble      lbl_802A3C78
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_802A3C78

lbl_802A3C74:
	fmr      f4, f5

lbl_802A3C78:
	fdivs    f8, f4, f0
	lfs      f0, lbl_8051BDDC@sda21(r2)
	lwz      r5, 0xc0(r30)
	lis      r4, __vt__Q24Game11Interaction@ha
	lfs      f5, lbl_8051BE3C@sda21(r2)
	lis      r3, __vt__Q24Game12InteractWind@ha
	fmuls    f7, f27, f2
	lfs      f6, lbl_8051BE14@sda21(r2)
	fsubs    f3, f0, f8
	lfs      f0, 0x604(r5)
	fmuls    f4, f30, f2
	addi     r0, r4, __vt__Q24Game11Interaction@l
	fmadds   f2, f6, f3, f8
	lfs      f6, lbl_8051BDE4@sda21(r2)
	fmadds   f7, f22, f1, f7
	stw      r0, 0x4c(r1)
	fmuls    f5, f5, f8
	addi     r0, r3, __vt__Q24Game12InteractWind@l
	fmadds   f1, f23, f1, f4
	lis      r3, __vt__Q24Game20InteractHanaChirashi@ha
	fmuls    f4, f2, f7
	stw      r0, 0x4c(r1)
	fmadds   f3, f6, f3, f5
	addi     r0, r3, __vt__Q24Game20InteractHanaChirashi@l
	fmuls    f1, f2, f1
	stw      r30, 0x50(r1)
	mr       r3, r29
	addi     r4, r1, 0x4c
	stfs     f0, 0x54(r1)
	stfs     f4, 0x58(r1)
	stfs     f3, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stw      r0, 0x4c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r31, r3

lbl_802A3D10:
	lwz      r0, 0x38(r1)
	cmplwi   r0, 0
	bne      lbl_802A3D3C
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_802A3DCC

lbl_802A3D3C:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_802A3DB0

lbl_802A3D5C:
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
	bne      lbl_802A3DCC
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_802A3DB0:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A3D5C

lbl_802A3DCC:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x30(r1)
	cmplw    r4, r3
	bne      lbl_802A3B90
	mr       r4, r30
	addi     r3, r1, 8
	bl       getAttackPosition__Q34Game12Hanachirashi3ObjFv
	lfs      f0, 8(r1)
	mr       r3, r31
	stfs     f0, 0x300(r30)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x304(r30)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x308(r30)
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
	lwz      r30, 0x88(r1)
	lwz      r0, 0x194(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x190
	blr
	*/
}

/**
 * @note Address: 0x802A3EB0
 * @note Size: 0x150
 */
void Obj::createEffect()
{
	mEfxDead   = new efx::TFusenDead;
	mEfxAirhit = new efx::TFusenhAirhit(&mAttackPosition, &mFaceDir);
	mEfxAir    = new efx::TFusenhAir;
	mEfxSui    = new efx::TFusenSui;
}

/**
 * @note Address: 0x802A4000
 * @note Size: 0x4C
 */
void Obj::setupEffect()
{
	mEfxDead->setMtxptr(mEfxMatrix->mMatrix.mtxView);
	mEfxAir->setMtxptr(mEfxMatrix->mMatrix.mtxView);
	mEfxSui->mMtx = mEfxMatrix;
}

/**
 * @note Address: 0x802A404C
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
 * @note Address: 0x802A40C8
 * @note Size: 0x34
 */
void Obj::createSuckEffect()
{
	mEfxSui->create(nullptr);
}

/**
 * @note Address: 0x802A40FC
 * @note Size: 0x90
 */
void Obj::startWindEffect()
{
	mAttackPosition = getAttackPosition(); // inlines rn, will match when it doesn't
	mEfxSui->fade();
	mEfxAir->create(nullptr);
	mEfxAirhit->create(nullptr);
}

/**
 * @note Address: 0x802A418C
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
 * @note Address: 0x802A4204
 * @note Size: 0x74
 */
void Obj::createDownEffect()
{
	Vector3f downEffectPos = mPosition + mEffectOffset;
	createBounceEffect(downEffectPos, getDownSmokeScale());
}

/**
 * @note Address: 0x802A4280
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
 * @note Address: 0x802A42F8
 * @note Size: 0x78
 */
void Obj::effectDrawOff()
{
	mEfxDead->startDemoDrawOff();
	mEfxAirhit->startDemoDrawOff();
	mEfxAir->startDemoDrawOff();
	mEfxSui->startDemoDrawOff();
}

} // namespace Hanachirashi
} // namespace Game
