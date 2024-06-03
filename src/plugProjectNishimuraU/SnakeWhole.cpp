#include "Game/Entities/SnakeWhole.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/Stickers.h"
#include "Game/SingleGameSection.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "efx/THebi.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "Dolphin/rand.h"

namespace Game {
namespace SnakeWhole {

static const char unusedSnakeWholeName[] = "246-SnakeWhole";

/**
 * @note Address: 0x802CE798
 * @note Size: 0x16C
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createJointCallBack();
	createShadowSystem();
	createEffect();
}

/**
 * @note Address: 0x802CE904
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x802CE908
 * @note Size: 0xCC
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	shadowMgr->delNormalShadow(this);
	mIsUnderground = true;
	mIsJumping     = false;
	mStateTimer    = 0.0f;
	mNextState     = SNAKEWHOLE_NULL;
	mAttackAnimIdx = -1;
	mFaceDirOffset = 0.0f;
	setupJointCallBack();
	setupCollision();
	setupShadowSystem();
	setupEffect();
	mIsFirstAttackBGM   = true;
	mIsAppearBGMEnabled = false;
	resetBossAppearBGM();
	mFsm->start(this, SNAKEWHOLE_Stay, nullptr);
	doAnimationCullingOff();
}

/**
 * @note Address: 0x802CE9D4
 * @note Size: 0x50
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	updateConstraint();
	mMouthSlots.update();
}

/**
 * @note Address: 0x802CEA24
 * @note Size: 0x34
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/**
 * @note Address: 0x802CEA58
 * @note Size: 0x34
 */
void Obj::doAnimationUpdateAnimator()
{
	EnemyBase::doAnimationUpdateAnimator();
	doAnimationJointCallBack();
}

/**
 * @note Address: 0x802CEA8C
 * @note Size: 0x3C
 */
void Obj::doAnimationCullingOff()
{
	EnemyBase::doAnimationCullingOff();
	doAnimationShadowSystem();
	finishAnimationJointCallBack();
}

/**
 * @note Address: 0x802CEAC8
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x802CEACC
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x802CEAEC
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802CEB38
 * @note Size: 0xB0
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
	shadowParam.mPosition.y               = mPosition.y + 2.5f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_Earthquake)) {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	} else {
		shadowParam.mBoundingSphere.mRadius = 20.0f;
	}
	shadowParam.mSize = 22.5f;
}

/**
 * @note Address: 0x802CEBE8
 * @note Size: 0x98
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (creature && creature->isPiki()) {
		if (!part) {
			damage *= 0.1f;
		}
		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802CEC80
 * @note Size: 0x20
 */
void Obj::doStartStoneState() { EnemyBase::doStartStoneState(); }

/**
 * @note Address: 0x802CECA0
 * @note Size: 0x48
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
}

/**
 * @note Address: 0x802CECE8
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(SNAKEWHOLEANIM_Carry, nullptr); }

/**
 * @note Address: 0x802CED10
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x802CED30
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x802CED50
 * @note Size: 0xBC
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(3);
	mMouthSlots.setup(0, mModel, "kamujnt1");
	mMouthSlots.setup(1, mModel, "kamujnt2");
	mMouthSlots.setup(2, mModel, "kamujnt3");

	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		mMouthSlots.getSlot(i)->mRadius = 15.0f;
	}
}

/**
 * @note Address: 0x802CEE0C
 * @note Size: 0x58
 */
void Obj::getThrowupItemPosition(Vector3f* pos) { *pos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3); }

/**
 * @note Address: 0x802CEE64
 * @note Size: 0x3C
 */
bool Obj::isOutTerritory() { return (u8)(sqrDistanceXZ(mPosition, mHomePosition) > SQUARE(C_GENERALPARMS.mTerritoryRadius())); }

/**
 * @note Address: 0x802CEEA0
 * @note Size: 0x3C
 */
bool Obj::isInHomeRange() { return (u8)(sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(C_GENERALPARMS.mHomeRadius())); }

/**
 * @note Address: 0x802CEEDC
 * @note Size: 0x2AC
 */
void Obj::setJumpMove(Vector3f& targetPos)
{
	f32 angleDist = getAngDist2(targetPos);
	if (absVal(angleDist) > HALF_PI) {
		int turnDir = (angleDist == 0.0f) ? 0 : (angleDist > 0.0f) ? 1 : -1;

		mFaceDirOffset = (HALF_PI * (f32)turnDir) / 22.0f;
	} else {
		mFaceDirOffset = angleDist / 22.0f;
	}

	if (FABS(angleDist) <= TORADIANS(30.0f)) {
		Vector3f velocity = Vector3f(targetPos.x - mPosition.x, 0.0f, targetPos.z - mPosition.z);
		f32 dist          = velocity.normalise();
		f32 moveSpeed     = C_GENERALPARMS.mMoveSpeed.mValue;

		f32 speed = dist;
		if (dist > moveSpeed) {
			speed = moveSpeed;
		}

		velocity *= (speed * (11.0f / 15.0f));

		setVelocity(velocity);
		mTargetVelocity = velocity;

	} else {
		setVelocity(Vector3f::zero);
		mTargetVelocity = Vector3f::zero;
	}
}

/**
 * @note Address: 0x802CF188
 * @note Size: 0x78
 */
void Obj::updateFace()
{
	f32 faceAngle = getFaceDir();
	faceAngle += mFaceDirOffset;
	clampAngle(faceAngle);

	updateFaceDir(faceAngle);
}

/**
 * @note Address: 0x802CF200
 * @note Size: 0x80
 */
void Obj::updateConstraint()
{
	if (getStateID() >= SNAKEWHOLE_Wait && !mIsJumping && mFloorTriangle) {
		// i.e. snagret is fully above ground + is ON ground
		if (mFloorNormal.y > 0.5f) {
			enableEvent(0, EB_Constrained);
		} else {
			constraintOff();
		}
		return;
	}

	constraintOff();
}

/**
 * @note Address: 0x802CF280
 * @note Size: 0x530
 */
void Obj::appearNearByTarget(Creature* target)
{
	Vector3f targetPos = target->getPosition();
	f32 faceDir        = randWeightFloat(TAU);

	Vector3f newPos = Vector3f(-sinf(faceDir), 0.0f, -cosf(faceDir));
	newPos *= 120.0f;
	newPos += targetPos;

	if (sqrDistanceXZ(mHomePosition, newPos) > SQUARE(C_GENERALPARMS.mTerritoryRadius())) {
		faceDir = JMAAtan2Radian(targetPos.x - mHomePosition.x, targetPos.z - mHomePosition.z);

		faceDir = faceDir + (randWeightFloat(PI) - HALF_PI);
		newPos  = Vector3f(-sinf(faceDir), 0.0f, -cosf(faceDir));
		newPos *= 120.0f;
		newPos += targetPos;
	}

	CurrTriInfo info;
	info.mPosition        = newPos;
	info.mUpdateOnNewMaxY = false;
	mapMgr->getCurrTri(info);

	if (info.mTriangle) {
		newPos.y = info.mMaxY;
	} else {
		faceDir = JMAAtan2Radian(targetPos.x - mHomePosition.x, targetPos.z - mHomePosition.z);
		newPos  = Vector3f(-sinf(faceDir), 0.0f, -cosf(faceDir));
		newPos *= 120.0f;
		newPos += targetPos;
		CurrTriInfo newInfo;
		newInfo.mPosition        = newPos;
		newInfo.mUpdateOnNewMaxY = false;
		mapMgr->getCurrTri(newInfo);
		if (newInfo.mTriangle) {
			newPos.y = newInfo.mMaxY;
		} else {
			newPos = mHomePosition;
		}
	}

	onSetPosition(newPos);
	updateFaceDir(faceDir);
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	lwz      r12, 0(r4)
	mr       r30, r3
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 8(r1)
	lfs      f30, 0xc(r1)
	lfs      f29, 0x10(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x7c(r1)
	lfd      f3, lbl_8051C8A0@sda21(r2)
	stw      r0, 0x78(r1)
	lfs      f2, lbl_8051C8A8@sda21(r2)
	lfd      f0, 0x78(r1)
	lfs      f1, lbl_8051C8B0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051C868@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f3, f2, f1
	fmr      f28, f3
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802CF320
	fneg     f1, f3

lbl_802CF320:
	lfs      f2, lbl_8051C8B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C868@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	addi     r31, r3, 4
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r31, r0
	fneg     f5, f0
	bge      lbl_802CF37C
	lfs      f0, lbl_8051C8B8@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_802CF394

lbl_802CF37C:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_802CF394:
	fneg     f3, f0
	lfs      f2, lbl_8051C868@sda21(r2)
	lfs      f1, lbl_8051C8BC@sda21(r2)
	frsp     f0, f5
	stfs     f2, 0x18(r1)
	frsp     f4, f3
	fmuls    f2, f2, f1
	stfs     f3, 0x14(r1)
	fmuls    f3, f0, f1
	fmuls    f4, f4, f1
	stfs     f5, 0x1c(r1)
	fadds    f1, f2, f30
	stfs     f2, 0x18(r1)
	fadds    f0, f3, f29
	fadds    f2, f4, f31
	stfs     f4, 0x14(r1)
	stfs     f3, 0x1c(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lfs      f3, 0x1a0(r30)
	lfs      f4, 0x198(r30)
	fsubs    f1, f3, f0
	lwz      r3, 0xc0(r30)
	fsubs    f2, f4, f2
	lfs      f0, 0x35c(r3)
	fmuls    f1, f1, f1
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802CF540
	fsubs    f1, f31, f4
	lis      r3, atanTable___5JMath@ha
	fsubs    f2, f29, f3
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f28, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x94(r1)
	lfd      f1, lbl_8051C8A0@sda21(r2)
	stw      r0, 0x90(r1)
	lfs      f3, lbl_8051C8C0@sda21(r2)
	lfd      f0, 0x90(r1)
	lfs      f2, lbl_8051C8B0@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, lbl_8051C890@sda21(r2)
	lfs      f0, lbl_8051C868@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f2, f3, f2
	fsubs    f1, f2, f1
	fadds    f28, f28, f1
	fmr      f1, f28
	fcmpo    cr0, f28, f0
	bge      lbl_802CF478
	fneg     f1, f28

lbl_802CF478:
	lfs      f2, lbl_8051C8B4@sda21(r2)
	lfs      f0, lbl_8051C868@sda21(r2)
	fmuls    f1, f1, f2
	fcmpo    cr0, f28, f0
	fctiwz   f0, f1
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r31, r0
	fneg     f5, f0
	bge      lbl_802CF4D0
	lfs      f0, lbl_8051C8B8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f28, f0
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_802CF4F0

lbl_802CF4D0:
	fmuls    f0, f28, f2
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_802CF4F0:
	fneg     f3, f0
	lfs      f2, lbl_8051C868@sda21(r2)
	lfs      f1, lbl_8051C8BC@sda21(r2)
	frsp     f0, f5
	stfs     f2, 0x18(r1)
	frsp     f4, f3
	fmuls    f2, f2, f1
	stfs     f3, 0x14(r1)
	fmuls    f3, f0, f1
	fmuls    f4, f4, f1
	stfs     f5, 0x1c(r1)
	fadds    f1, f2, f30
	stfs     f2, 0x18(r1)
	fadds    f0, f3, f29
	fadds    f2, f4, f31
	stfs     f4, 0x14(r1)
	stfs     f3, 0x1c(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)

lbl_802CF540:
	li       r0, 1
	li       r5, 0
	lfs      f4, lbl_8051C868@sda21(r2)
	addi     r4, r1, 0x4c
	stb      r0, 0x58(r1)
	lfs      f6, lbl_8051C8C4@sda21(r2)
	lfs      f5, lbl_8051C8C8@sda21(r2)
	lfs      f3, lbl_8051C870@sda21(r2)
	lfs      f2, 0x14(r1)
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stw      r5, 0x60(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f6, 0x64(r1)
	stfs     f5, 0x68(r1)
	stw      r5, 0x5c(r1)
	stfs     f4, 0x6c(r1)
	stfs     f3, 0x70(r1)
	stfs     f4, 0x74(r1)
	stb      r5, 0x59(r1)
	stfs     f2, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	stb      r5, 0x58(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x60(r1)
	cmplwi   r0, 0
	beq      lbl_802CF5C8
	lfs      f0, 0x64(r1)
	stfs     f0, 0x18(r1)
	b        lbl_802CF754

lbl_802CF5C8:
	lfs      f1, 0x198(r30)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1a0(r30)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f31, f1
	fsubs    f2, f29, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f2, f1
	lfs      f0, lbl_8051C868@sda21(r2)
	fmr      f28, f1
	fcmpo    cr0, f2, f0
	bge      lbl_802CF5FC
	fneg     f2, f2

lbl_802CF5FC:
	lfs      f3, lbl_8051C8B4@sda21(r2)
	lfs      f0, lbl_8051C868@sda21(r2)
	fmuls    f2, f2, f3
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r31, r0
	fneg     f5, f0
	bge      lbl_802CF654
	lfs      f0, lbl_8051C8B8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_802CF674

lbl_802CF654:
	fmuls    f0, f1, f3
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_802CF674:
	fneg     f4, f0
	lfs      f8, lbl_8051C868@sda21(r2)
	li       r5, 0
	lfs      f1, lbl_8051C8BC@sda21(r2)
	frsp     f0, f5
	li       r0, 1
	frsp     f3, f4
	stb      r0, 0x2c(r1)
	fmuls    f7, f8, f1
	lfs      f2, lbl_8051C8C4@sda21(r2)
	fmuls    f6, f0, f1
	stfs     f8, 0x18(r1)
	fmuls    f0, f3, f1
	stfs     f4, 0x14(r1)
	fadds    f4, f7, f30
	lfs      f1, lbl_8051C8C8@sda21(r2)
	stfs     f5, 0x1c(r1)
	fadds    f3, f6, f29
	fadds    f5, f0, f31
	stfs     f0, 0x14(r1)
	lfs      f0, lbl_8051C870@sda21(r2)
	addi     r4, r1, 0x20
	stfs     f7, 0x18(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f6, 0x1c(r1)
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stw      r5, 0x34(r1)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stw      r5, 0x30(r1)
	stfs     f8, 0x40(r1)
	stfs     f0, 0x44(r1)
	stfs     f8, 0x48(r1)
	stb      r5, 0x2d(r1)
	stfs     f5, 0x20(r1)
	stfs     f4, 0x24(r1)
	stfs     f3, 0x28(r1)
	stb      r5, 0x2c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	beq      lbl_802CF73C
	lfs      f0, 0x38(r1)
	stfs     f0, 0x18(r1)
	b        lbl_802CF754

lbl_802CF73C:
	lfs      f0, 0x198(r30)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x19c(r30)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x1a0(r30)
	stfs     f0, 0x1c(r1)

lbl_802CF754:
	mr       r3, r30
	addi     r4, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	stfs     f28, 0x1fc(r30)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x1a8(r30)
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r0, 0xe4(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x802CF7B0
 * @note Size: 0x20C
 */
void Obj::setAttackPosition()
{
	f32 angle         = mFaceDir;
	Vector3f dir      = Vector3f(sinf(angle), 0.0f, cosf(angle));
	Vector3f orthoDir = Vector3f(-dir.z, 0.0f, dir.x);

	f32 array1[5] = { 60.0f, 150.0f, 220.0f, 120.0f, 120.0f };
	f32 array2[5] = { 0.0f, 0.0f, 0.0f, 80.0f, -80.0f };

	for (int i = 0; i < 5; i++) {
		f32 dirFactor       = array1[i];
		f32 orthoDirFactor  = array2[i];
		mAttackPositions[i] = mPosition;
		mAttackPositions[i] += dir * dirFactor;
		mAttackPositions[i] += orthoDir * orthoDirFactor;
		mAttackPositions[i].y = mapMgr->getMinY(mAttackPositions[i]);
	}
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
	stmw     r27, 0x4c(r1)
	mr       r31, r3
	lfs      f0, lbl_8051C868@sda21(r2)
	lfs      f3, 0x1fc(r3)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802CF7F4
	fneg     f1, f3

lbl_802CF7F4:
	lfs      f2, lbl_8051C8B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C868@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f31, 4(r3)
	bge      lbl_802CF84C
	lfs      f0, lbl_8051C8B8@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f30, f0
	b        lbl_802CF864

lbl_802CF84C:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f30, r4, r0

lbl_802CF864:
	lis      r4, lbl_8048BB78@ha
	lwzu     r12, lbl_8048BB78@l(r4)
	lis      r3, lbl_8048BB8C@ha
	fneg     f29, f31
	addi     r7, r3, lbl_8048BB8C@l
	lwz      r11, 4(r4)
	lwz      r10, 8(r4)
	mr       r28, r31
	lwz      r9, 0xc(r4)
	lwz      r8, 0x10(r4)
	addi     r30, r1, 0x1c
	lwz      r6, 0(r7)
	addi     r29, r1, 8
	lwz      r5, 4(r7)
	li       r27, 0
	lwz      r4, 8(r7)
	lwz      r3, 0xc(r7)
	lwz      r0, 0x10(r7)
	stw      r12, 0x1c(r1)
	stw      r11, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r9, 0x28(r1)
	stw      r8, 0x2c(r1)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r3, 0x14(r1)
	stw      r0, 0x18(r1)

lbl_802CF8D4:
	lfs      f0, 0x18c(r31)
	addi     r4, r28, 0x2e8
	lfs      f1, 0(r30)
	stfs     f0, 0x2e8(r28)
	lfs      f2, 0(r29)
	fmuls    f3, f30, f1
	lfs      f0, 0x190(r31)
	fmuls    f5, f31, f1
	lfs      f4, lbl_8051C868@sda21(r2)
	fmuls    f6, f29, f2
	stfs     f0, 0x2ec(r28)
	fmr      f7, f4
	lfs      f0, 0x194(r31)
	fmuls    f4, f4, f1
	fmuls    f1, f30, f2
	stfs     f0, 0x2f0(r28)
	fmuls    f7, f7, f2
	lfs      f0, 0x2e8(r28)
	fadds    f0, f0, f3
	stfs     f0, 0x2e8(r28)
	lfs      f0, 0x2ec(r28)
	fadds    f0, f0, f4
	stfs     f0, 0x2ec(r28)
	lfs      f0, 0x2f0(r28)
	fadds    f0, f0, f5
	stfs     f0, 0x2f0(r28)
	lfs      f0, 0x2e8(r28)
	fadds    f0, f0, f6
	stfs     f0, 0x2e8(r28)
	lfs      f0, 0x2ec(r28)
	fadds    f0, f0, f7
	stfs     f0, 0x2ec(r28)
	lfs      f0, 0x2f0(r28)
	fadds    f0, f0, f1
	stfs     f0, 0x2f0(r28)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	addi     r27, r27, 1
	stfs     f1, 0x2ec(r28)
	cmpwi    r27, 5
	addi     r30, r30, 4
	addi     r29, r29, 4
	addi     r28, r28, 0xc
	blt      lbl_802CF8D4
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/**
 * @note Address: 0x802CF9BC
 * @note Size: 0x5F4
 */
Piki* Obj::getAttackPiki(int animIdx)
{
	int p1 = 0; // r30
	int p2 = 5; // r31
	if (animIdx < 5) {
		p1 = animIdx;
		p2 = animIdx + 1;
	}

	Vector3f snakePos = getPosition();                 // f28, f27, f26
	Vector3f dir      = getDirection(mFaceDir);        // f30, f29
	Vector3f orthoDir = Vector3f(-dir.z, 0.0f, dir.x); // f31

	f32 maxDotDirs[]     = { 120.0f, 180.0f, 260.0f, 160.0f, 160.0f }; // 0x94
	f32 minDotDirs[]     = { 0.0f, 120.0f, 180.0f, 80.0f, 80.0f };     // 0x80
	f32 maxDotPerpDirs[] = { 30.0f, 30.0f, 30.0f, 110.0f, -50.0f };    // 0x6C
	f32 minDotPerpDirs[] = { -30.0f, -30.0f, -30.0f, 50.0f, -110.0f }; // 0x58
	f32 maxYs[]          = { 40.0f, 40.0f, 40.0f, 40.0f, 40.0f };      // 0x44
	f32 minYs[]          = { -40.0f, -40.0f, -40.0f, -40.0f, -40.0f }; // 0x30

	for (int i = 0; i < 5; i++) {
		maxYs[i] += mAttackPositions[i].y - snakePos.y;
		minYs[i] += mAttackPositions[i].y - snakePos.y;
	}

	Iterator<Piki> iter(pikiMgr);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		if (piki->isAlive() && piki->isPikmin() && !piki->isStickToMouth()) {
			Vector3f pikiPos = piki->getPosition();
			Vector3f sep     = pikiPos - snakePos;
			f32 dotDir       = dir.dot(sep);      // f1
			f32 dotPerpDir   = orthoDir.dot(sep); // f2
			for (int i = p1; i < p2; i++) {
				if (dotDir < maxDotDirs[i] && dotDir > minDotDirs[i] && dotPerpDir < maxDotPerpDirs[i] && dotPerpDir > minDotPerpDirs[i]
				    && sep.y < maxYs[i] && sep.y > minYs[i]) {
					mAttackAnimIdx = i;
					return piki;
				}
			}
		}
	}

	return nullptr;
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stmw     r19, 0xcc(r1)
	cmpwi    r4, 5
	lis      r5, lbl_8048BB38@ha
	mr       r28, r3
	li       r30, 0
	addi     r31, r5, lbl_8048BB38@l
	li       r29, 5
	bge      lbl_802CFA20
	mr       r30, r4
	addi     r29, r4, 1

lbl_802CFA20:
	mr       r4, r28
	addi     r3, r1, 0x14
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x1fc(r28)
	lfs      f0, lbl_8051C868@sda21(r2)
	fmr      f1, f3
	lfs      f28, 0x14(r1)
	fcmpo    cr0, f3, f0
	lfs      f27, 0x18(r1)
	lfs      f26, 0x1c(r1)
	bge      lbl_802CFA5C
	fneg     f1, f3

lbl_802CFA5C:
	lfs      f2, lbl_8051C8B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C868@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0xa8(r1)
	lwz      r0, 0xac(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f30, 4(r3)
	bge      lbl_802CFAB4
	lfs      f0, lbl_8051C8B8@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f29, f0
	b        lbl_802CFACC

lbl_802CFAB4:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f29, r4, r0

lbl_802CFACC:
	lwz      r0, 0xb8(r31)
	fneg     f31, f30
	lwz      r11, 0xbc(r31)
	lwz      r10, 0xc0(r31)
	lwz      r9, 0xc4(r31)
	lwz      r8, 0xc8(r31)
	lwz      r7, 0xcc(r31)
	lwz      r6, 0xd0(r31)
	lwz      r5, 0xd4(r31)
	lwz      r4, 0xd8(r31)
	lwz      r3, 0xdc(r31)
	lfs      f1, 0x2ec(r28)
	lfs      f0, 0x2f8(r28)
	lfs      f2, 0x304(r28)
	fsubs    f8, f1, f27
	lfs      f1, 0x310(r28)
	fsubs    f6, f0, f27
	lfs      f0, 0x31c(r28)
	fsubs    f12, f2, f27
	stw      r0, 0x44(r1)
	lwz      r0, 0x68(r31)
	fsubs    f11, f1, f27
	stw      r11, 0x48(r1)
	fsubs    f10, f0, f27
	lfs      f0, 0x44(r1)
	stw      r10, 0x4c(r1)
	lfs      f1, 0x48(r1)
	fadds    f9, f0, f8
	stw      r9, 0x50(r1)
	lfs      f0, 0x4c(r1)
	fadds    f7, f1, f6
	stw      r8, 0x54(r1)
	lfs      f1, 0x50(r1)
	fadds    f5, f0, f12
	stw      r7, 0x30(r1)
	lfs      f0, 0x54(r1)
	fadds    f3, f1, f11
	stw      r6, 0x34(r1)
	lfs      f4, 0x30(r1)
	fadds    f1, f0, f10
	stw      r5, 0x38(r1)
	lfs      f2, 0x34(r1)
	fadds    f8, f4, f8
	stw      r4, 0x3c(r1)
	lfs      f0, 0x38(r1)
	fadds    f6, f2, f6
	stw      r3, 0x40(r1)
	lfs      f2, 0x3c(r1)
	fadds    f4, f0, f12
	lfs      f0, 0x40(r1)
	fadds    f2, f2, f11
	lwz      r19, 0x6c(r31)
	fadds    f0, f0, f10
	lwz      r20, 0x70(r31)
	lwz      r21, 0x74(r31)
	lwz      r22, 0x78(r31)
	lwz      r23, 0x7c(r31)
	lwz      r24, 0x80(r31)
	lwz      r25, 0x84(r31)
	lwz      r26, 0x88(r31)
	lwz      r27, 0x8c(r31)
	lwz      r12, 0x90(r31)
	lwz      r11, 0x94(r31)
	lwz      r10, 0x98(r31)
	lwz      r9, 0x9c(r31)
	lwz      r8, 0xa0(r31)
	lwz      r7, 0xa4(r31)
	lwz      r6, 0xa8(r31)
	lwz      r5, 0xac(r31)
	lwz      r4, 0xb0(r31)
	lwz      r3, 0xb4(r31)
	stw      r0, 0x94(r1)
	stw      r19, 0x98(r1)
	stw      r20, 0x9c(r1)
	stw      r21, 0xa0(r1)
	stw      r22, 0xa4(r1)
	stw      r23, 0x80(r1)
	stw      r24, 0x84(r1)
	stw      r25, 0x88(r1)
	stw      r26, 0x8c(r1)
	stw      r27, 0x90(r1)
	stw      r12, 0x6c(r1)
	stw      r11, 0x70(r1)
	stw      r10, 0x74(r1)
	stw      r9, 0x78(r1)
	stw      r8, 0x7c(r1)
	stw      r7, 0x58(r1)
	stw      r6, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r4, 0x64(r1)
	stw      r3, 0x68(r1)
	stfs     f9, 0x44(r1)
	stfs     f8, 0x30(r1)
	stfs     f7, 0x48(r1)
	stfs     f6, 0x34(r1)
	stfs     f5, 0x4c(r1)
	stfs     f4, 0x38(r1)
	stfs     f3, 0x50(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x40(r1)
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x2c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_802CFCA0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802CFF48

lbl_802CFCA0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802CFD0C

lbl_802CFCB8:
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
	bne      lbl_802CFF48
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802CFD0C:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CFCB8
	b        lbl_802CFF48

lbl_802CFD2C:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r19, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CFE8C
	mr       r3, r19
	lwz      r12, 0(r19)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CFE8C
	mr       r3, r19
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802CFE8C
	mr       r4, r19
	addi     r3, r1, 8
	lwz      r12, 0(r19)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	slwi     r9, r30, 2
	lfs      f1, 8(r1)
	addi     r3, r1, 0x94
	fsubs    f4, f0, f27
	lfs      f0, lbl_8051C868@sda21(r2)
	lfs      f2, 0x10(r1)
	addi     r4, r1, 0x80
	addi     r5, r1, 0x6c
	addi     r6, r1, 0x58
	fsubs    f3, f1, f28
	addi     r7, r1, 0x44
	fmuls    f0, f0, f4
	addi     r8, r1, 0x30
	fsubs    f2, f2, f26
	subf     r0, r30, r29
	fmadds   f1, f29, f3, f0
	mr       r10, r30
	fmadds   f0, f31, f3, f0
	add      r3, r3, r9
	add      r4, r4, r9
	add      r5, r5, r9
	fmadds   f1, f30, f2, f1
	add      r6, r6, r9
	fmadds   f2, f29, f2, f0
	add      r7, r7, r9
	add      r8, r8, r9
	mtctr    r0
	cmpw     r30, r29
	bge      lbl_802CFE8C

lbl_802CFE18:
	lfs      f0, 0(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802CFE6C
	lfs      f0, 0(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802CFE6C
	lfs      f0, 0(r5)
	fcmpo    cr0, f2, f0
	bge      lbl_802CFE6C
	lfs      f0, 0(r6)
	fcmpo    cr0, f2, f0
	ble      lbl_802CFE6C
	lfs      f0, 0(r7)
	fcmpo    cr0, f4, f0
	bge      lbl_802CFE6C
	lfs      f0, 0(r8)
	fcmpo    cr0, f4, f0
	ble      lbl_802CFE6C
	stw      r10, 0x2e4(r28)
	mr       r3, r19
	b        lbl_802CFF6C

lbl_802CFE6C:
	addi     r3, r3, 4
	addi     r4, r4, 4
	addi     r5, r5, 4
	addi     r6, r6, 4
	addi     r7, r7, 4
	addi     r8, r8, 4
	addi     r10, r10, 1
	bdnz     lbl_802CFE18

lbl_802CFE8C:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_802CFEB8
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802CFF48

lbl_802CFEB8:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802CFF2C

lbl_802CFED8:
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
	bne      lbl_802CFF48
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802CFF2C:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CFED8

lbl_802CFF48:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_802CFD2C
	li       r3, 0

lbl_802CFF6C:
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	lmw      r19, 0xcc(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/**
 * @note Address: 0x802CFFB0
 * @note Size: 0x5C8
 */
Navi* Obj::getAttackNavi(int animIdx)
{
	int p1 = 0; // r30
	int p2 = 5; // r31
	if (animIdx < 5) {
		p1 = animIdx;
		p2 = animIdx + 1;
	}

	Vector3f snakePos = getPosition();                 // f28, f27, f26
	Vector3f dir      = getDirection(mFaceDir);        // f30, f29
	Vector3f orthoDir = Vector3f(-dir.z, 0.0f, dir.x); // f31

	f32 maxDotDirs[]     = { 120.0f, 180.0f, 260.0f, 160.0f, 160.0f }; // 0x94
	f32 minDotDirs[]     = { 0.0f, 120.0f, 180.0f, 80.0f, 80.0f };     // 0x80
	f32 maxDotPerpDirs[] = { 30.0f, 30.0f, 30.0f, 110.0f, -50.0f };    // 0x6C
	f32 minDotPerpDirs[] = { -30.0f, -30.0f, -30.0f, 50.0f, -110.0f }; // 0x58
	f32 maxYs[]          = { 40.0f, 40.0f, 40.0f, 40.0f, 40.0f };      // 0x44
	f32 minYs[]          = { -40.0f, -40.0f, -40.0f, -40.0f, -40.0f }; // 0x30

	for (int i = 0; i < 5; i++) {
		maxYs[i] += mAttackPositions[i].y - snakePos.y;
		minYs[i] += mAttackPositions[i].y - snakePos.y;
	}

	Iterator<Navi> iter(naviMgr);
	CI_LOOP(iter)
	{
		Navi* navi = *iter;
		if (navi->isAlive()) {
			Vector3f naviPos = navi->getPosition();
			Vector3f sep     = naviPos - snakePos;
			f32 dotDir       = dir.dot(sep);      // f1
			f32 dotPerpDir   = orthoDir.dot(sep); // f2
			for (int i = p1; i < p2; i++) {
				if (dotDir < maxDotDirs[i] && dotDir > minDotDirs[i] && dotPerpDir < maxDotPerpDirs[i] && dotPerpDir > minDotPerpDirs[i]
				    && sep.y < maxYs[i] && sep.y > minYs[i]) {
					mAttackAnimIdx = i;
					return navi;
				}
			}
		}
	}

	return nullptr;
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stmw     r19, 0xcc(r1)
	cmpwi    r4, 5
	lis      r5, lbl_8048BB38@ha
	mr       r28, r3
	li       r30, 0
	addi     r31, r5, lbl_8048BB38@l
	li       r29, 5
	bge      lbl_802D0014
	mr       r30, r4
	addi     r29, r4, 1

lbl_802D0014:
	mr       r4, r28
	addi     r3, r1, 0x14
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x1fc(r28)
	lfs      f0, lbl_8051C868@sda21(r2)
	fmr      f1, f3
	lfs      f28, 0x14(r1)
	fcmpo    cr0, f3, f0
	lfs      f27, 0x18(r1)
	lfs      f26, 0x1c(r1)
	bge      lbl_802D0050
	fneg     f1, f3

lbl_802D0050:
	lfs      f2, lbl_8051C8B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C868@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0xa8(r1)
	lwz      r0, 0xac(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f30, 4(r3)
	bge      lbl_802D00A8
	lfs      f0, lbl_8051C8B8@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f29, f0
	b        lbl_802D00C0

lbl_802D00A8:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f29, r4, r0

lbl_802D00C0:
	lwz      r0, 0x130(r31)
	fneg     f31, f30
	lwz      r11, 0x134(r31)
	lwz      r10, 0x138(r31)
	lwz      r9, 0x13c(r31)
	lwz      r8, 0x140(r31)
	lwz      r7, 0x144(r31)
	lwz      r6, 0x148(r31)
	lwz      r5, 0x14c(r31)
	lwz      r4, 0x150(r31)
	lwz      r3, 0x154(r31)
	lfs      f1, 0x2ec(r28)
	lfs      f0, 0x2f8(r28)
	lfs      f2, 0x304(r28)
	fsubs    f8, f1, f27
	lfs      f1, 0x310(r28)
	fsubs    f6, f0, f27
	lfs      f0, 0x31c(r28)
	fsubs    f12, f2, f27
	stw      r0, 0x44(r1)
	lwz      r0, 0xe0(r31)
	fsubs    f11, f1, f27
	stw      r11, 0x48(r1)
	fsubs    f10, f0, f27
	lfs      f0, 0x44(r1)
	stw      r10, 0x4c(r1)
	lfs      f1, 0x48(r1)
	fadds    f9, f0, f8
	stw      r9, 0x50(r1)
	lfs      f0, 0x4c(r1)
	fadds    f7, f1, f6
	stw      r8, 0x54(r1)
	lfs      f1, 0x50(r1)
	fadds    f5, f0, f12
	stw      r7, 0x30(r1)
	lfs      f0, 0x54(r1)
	fadds    f3, f1, f11
	stw      r6, 0x34(r1)
	lfs      f4, 0x30(r1)
	fadds    f1, f0, f10
	stw      r5, 0x38(r1)
	lfs      f2, 0x34(r1)
	fadds    f8, f4, f8
	stw      r4, 0x3c(r1)
	lfs      f0, 0x38(r1)
	fadds    f6, f2, f6
	stw      r3, 0x40(r1)
	lfs      f2, 0x3c(r1)
	fadds    f4, f0, f12
	lfs      f0, 0x40(r1)
	fadds    f2, f2, f11
	lwz      r19, 0xe4(r31)
	fadds    f0, f0, f10
	lwz      r20, 0xe8(r31)
	lwz      r21, 0xec(r31)
	lwz      r22, 0xf0(r31)
	lwz      r23, 0xf4(r31)
	lwz      r24, 0xf8(r31)
	lwz      r25, 0xfc(r31)
	lwz      r26, 0x100(r31)
	lwz      r27, 0x104(r31)
	lwz      r12, 0x108(r31)
	lwz      r11, 0x10c(r31)
	lwz      r10, 0x110(r31)
	lwz      r9, 0x114(r31)
	lwz      r8, 0x118(r31)
	lwz      r7, 0x11c(r31)
	lwz      r6, 0x120(r31)
	lwz      r5, 0x124(r31)
	lwz      r4, 0x128(r31)
	lwz      r3, 0x12c(r31)
	stw      r0, 0x94(r1)
	stw      r19, 0x98(r1)
	stw      r20, 0x9c(r1)
	stw      r21, 0xa0(r1)
	stw      r22, 0xa4(r1)
	stw      r23, 0x80(r1)
	stw      r24, 0x84(r1)
	stw      r25, 0x88(r1)
	stw      r26, 0x8c(r1)
	stw      r27, 0x90(r1)
	stw      r12, 0x6c(r1)
	stw      r11, 0x70(r1)
	stw      r10, 0x74(r1)
	stw      r9, 0x78(r1)
	stw      r8, 0x7c(r1)
	stw      r7, 0x58(r1)
	stw      r6, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r4, 0x64(r1)
	stw      r3, 0x68(r1)
	stfs     f9, 0x44(r1)
	stfs     f8, 0x30(r1)
	stfs     f7, 0x48(r1)
	stfs     f6, 0x34(r1)
	stfs     f5, 0x4c(r1)
	stfs     f4, 0x38(r1)
	stfs     f3, 0x50(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x40(r1)
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x2c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_802D0294
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802D0510

lbl_802D0294:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802D0300

lbl_802D02AC:
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
	bne      lbl_802D0510
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802D0300:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D02AC
	b        lbl_802D0510

lbl_802D0320:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r19, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D0454
	mr       r4, r19
	addi     r3, r1, 8
	lwz      r12, 0(r19)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	slwi     r9, r30, 2
	lfs      f1, 8(r1)
	addi     r3, r1, 0x94
	fsubs    f4, f0, f27
	lfs      f0, lbl_8051C868@sda21(r2)
	lfs      f2, 0x10(r1)
	addi     r4, r1, 0x80
	addi     r5, r1, 0x6c
	addi     r6, r1, 0x58
	fsubs    f3, f1, f28
	addi     r7, r1, 0x44
	fmuls    f0, f0, f4
	addi     r8, r1, 0x30
	fsubs    f2, f2, f26
	subf     r0, r30, r29
	fmadds   f1, f29, f3, f0
	mr       r10, r30
	fmadds   f0, f31, f3, f0
	add      r3, r3, r9
	add      r4, r4, r9
	add      r5, r5, r9
	fmadds   f1, f30, f2, f1
	add      r6, r6, r9
	fmadds   f2, f29, f2, f0
	add      r7, r7, r9
	add      r8, r8, r9
	mtctr    r0
	cmpw     r30, r29
	bge      lbl_802D0454

lbl_802D03E0:
	lfs      f0, 0(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802D0434
	lfs      f0, 0(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802D0434
	lfs      f0, 0(r5)
	fcmpo    cr0, f2, f0
	bge      lbl_802D0434
	lfs      f0, 0(r6)
	fcmpo    cr0, f2, f0
	ble      lbl_802D0434
	lfs      f0, 0(r7)
	fcmpo    cr0, f4, f0
	bge      lbl_802D0434
	lfs      f0, 0(r8)
	fcmpo    cr0, f4, f0
	ble      lbl_802D0434
	stw      r10, 0x2e4(r28)
	mr       r3, r19
	b        lbl_802D0534

lbl_802D0434:
	addi     r3, r3, 4
	addi     r4, r4, 4
	addi     r5, r5, 4
	addi     r6, r6, 4
	addi     r7, r7, 4
	addi     r8, r8, 4
	addi     r10, r10, 1
	bdnz     lbl_802D03E0

lbl_802D0454:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_802D0480
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802D0510

lbl_802D0480:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802D04F4

lbl_802D04A0:
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
	bne      lbl_802D0510
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802D04F4:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D04A0

lbl_802D0510:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_802D0320
	li       r3, 0

lbl_802D0534:
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	lmw      r19, 0xcc(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/**
 * @note Address: 0x802D0578
 * @note Size: 0x50
 */
Creature* Obj::getSearchedTarget()
{
	f32 searchAngle = (mStuckPikminCount != 0) ? 180.0f : C_GENERALPARMS.mViewAngle.mValue;

	return EnemyFunc::getNearestPikminOrNavi(this, searchAngle, C_GENERALPARMS.mSightRadius.mValue, nullptr, nullptr, nullptr);
}

/**
 * @note Address: 0x802D05C8
 * @note Size: 0x68
 */
CollPart* Obj::getSwallowSlot()
{
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		if (slot->mStuckCreature) {
			continue;
		}
		return slot;
	}

	return nullptr;
}

/**
 * @note Address: 0x802D0630
 * @note Size: 0x6C
 */
bool Obj::isSwallowPikmin()
{
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		if (!slot->mStuckCreature) {
			continue;
		}
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802D069C
 * @note Size: 0x24C
 */
int Obj::getStickHeadPikmin()
{
	int stickCount = 0;
	Stickers stickers(this);
	Iterator<Creature> iter(&stickers);
	CI_LOOP(iter)
	{
		Creature* piki = *iter;
		if (piki->isAlive() && piki->mStuckCollPart && piki->mStuckCollPart->mCurrentID == 'head') {
			stickCount++;
		}
	}

	return stickCount;
}

/**
 * @note Address: 0x802D08E8
 * @note Size: 0x48
 */
void Obj::createJointCallBack() { mSnakeJointMgr = new SnakeJointMgr(this); }

/**
 * @note Address: 0x802D0930
 * @note Size: 0x24
 */
void Obj::setupJointCallBack() { mSnakeJointMgr->setupCallBackJoint(); }

/**
 * @note Address: 0x802D0954
 * @note Size: 0x24
 */
void Obj::doAnimationJointCallBack() { mSnakeJointMgr->doAnimation(); }

/**
 * @note Address: 0x802D0978
 * @note Size: 0x24
 */
void Obj::finishAnimationJointCallBack() { mSnakeJointMgr->finishAnimation(); }

/**
 * @note Address: 0x802D099C
 * @note Size: 0xB8
 */
void Obj::startJointCallBack()
{
	f32 y                     = mAttackPositions[mAttackAnimIdx].y - mPosition.y;
	SysShape::KeyEvent* event = mAnimator->getAnimator().mAnimInfo->getAnimKeyByType(3);
	f32 frame                 = getMotionFrame();
	mSnakeJointMgr->startModify(y, (f32)event->mFrame - frame);
}

/**
 * @note Address: 0x802D0A54
 * @note Size: 0x88
 */
void Obj::returnJointCallBack()
{
	SysShape::KeyEvent* event = mAnimator->getAnimator().mAnimInfo->getAnimKeyByType(4);
	f32 frame                 = getMotionFrame();
	mSnakeJointMgr->returnModify((f32)event->mFrame - frame);
}

/**
 * @note Address: 0x802D0ADC
 * @note Size: 0x24
 */
void Obj::finishJointCallBack() { mSnakeJointMgr->finishModify(); }

/**
 * @note Address: 0x802D0B00
 * @note Size: 0x38
 */
void Obj::setupCollision()
{
	CollPart* part = mCollTree->getCollPart('bod1');
	if (part) {
		part->makeTubeTree();
	}
}

/**
 * @note Address: 0x802D0B38
 * @note Size: 0x40
 */
void Obj::lifeIncrement()
{
	mInstantDamage = 0.0f;
	disableEvent(0, EB_TakingDamage);
	mHealth += 10.0f;

	if (mHealth > C_GENERALPARMS.mHealth()) {
		mHealth = C_GENERALPARMS.mHealth();
	}
}

/**
 * @note Address: 0x802D0B78
 * @note Size: 0x48
 */
void Obj::createShadowSystem() { mShadowMgr = new SnakeWholeShadowMgr(this); }

/**
 * @note Address: 0x802D0BC0
 * @note Size: 0x24
 */
void Obj::setupShadowSystem() { mShadowMgr->init(); }

/**
 * @note Address: 0x802D0BE4
 * @note Size: 0x24
 */
void Obj::doAnimationShadowSystem() { mShadowMgr->update(); }

/**
 * @note Address: 0x802D0C08
 * @note Size: 0x24
 */
void Obj::startJointShadow() { mShadowMgr->startJointShadow(); }

/**
 * @note Address: 0x802D0C2C
 * @note Size: 0x24
 */
void Obj::finishJointShadow() { mShadowMgr->finishJointShadow(); }

/**
 * @note Address: 0x802D0C50
 * @note Size: 0x40
 */
void Obj::deleteJointShadow()
{
	shadowMgr->addNormalShadow(this);
	shadowMgr->delJointShadow(this);
}

/**
 * @note Address: 0x802D0C90
 * @note Size: 0xE0
 */
void Obj::startBossAttackBGM()
{
	if (mIsFirstAttackBGM) {
		mIsFirstAttackBGM = false; // don't play normal boss attack BGM on first getup
	} else {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_Attack);
	}
}

/**
 * @note Address: 0x802D0D70
 * @note Size: 0xC8
 */
void Obj::startBossFlickBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_Flick);
}

/**
 * @note Address: 0x802D0E38
 * @note Size: 0xFC
 */
void Obj::updateBossBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	if (mStuckPikminCount != 0) {
		soundObj->postPikiAttack(true);
	} else {
		soundObj->postPikiAttack(false);
	}
}

/**
 * @note Address: 0x802D0F34
 * @note Size: 0xD0
 */
void Obj::resetBossAppearBGM()
{
	if (!mIsAppearBGMEnabled) {
		mIsAppearBGMEnabled      = true;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->setAppearFlag(false);
	}
}

/**
 * @note Address: 0x802D1004
 * @note Size: 0xCC
 */
void Obj::setBossAppearBGM()
{
	if (mIsAppearBGMEnabled) {
		mIsAppearBGMEnabled      = false;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->setAppearFlag(true);
	}
}

/**
 * @note Address: 0x802D10D0
 * @note Size: 0x68
 */
void Obj::createEffect() { mEfxDead = new efx::TCphebiDead; }

/**
 * @note Address: 0x802D1138
 * @note Size: 0x78
 */
void Obj::setupEffect()
{
	Matrixf* footMat = mModel->getJoint("foot_joint1")->getWorldMatrix();
	mEfxDead->setMtxptr(footMat->mMatrix.mtxView);

	mFitEffectPos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
}

/**
 * @note Address: 0x802D11B0
 * @note Size: 0x1D4
 */
void Obj::createAppearEffect(int effectID)
{
	efx::Arg fxArg(mPosition);
	switch (effectID) {
	case 0:
		efx::THebiAphd_appear1 appear1;
		appear1.create(&fxArg);
		break;
	case 1:
		efx::THebiAphd_appear2_first appear2;
		appear2.create(&fxArg);
		break;
	case 2:
		efx::THebiAphd_appear2_late appear3;
		appear3.create(&fxArg);
		break;
	}
}

/**
 * @note Address: 0x802D1384
 * @note Size: 0x34
 */
void Obj::createDeadStartEffect() { mEfxDead->create(nullptr); }

/**
 * @note Address: 0x802D13B8
 * @note Size: 0x94
 */
void Obj::createDeadFinishEffect()
{
	Vector3f fxPos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
	efx::Arg fxArg(fxPos);
	efx::TCphebiDeadHane deadFX;
	deadFX.create(&fxArg);
}

/**
 * @note Address: 0x802D144C
 * @note Size: 0x3C
 */
void Obj::createWalkSmokeEffect(f32 scale)
{
	if (mWaterBox) {
		createSplashDownEffect(mPosition, scale);
	} else {
		createDropEffect(mPosition, scale);
	}
}

/**
 * @note Address: 0x802D1488
 * @note Size: 0x30
 */
void Obj::effectDrawOn() { mEfxDead->endDemoDrawOn(); }

/**
 * @note Address: 0x802D14B8
 * @note Size: 0x30
 */
void Obj::effectDrawOff() { mEfxDead->startDemoDrawOff(); }

/**
 * @note Address: 0x802D14E8
 * @note Size: 0x48
 */
void Obj::createEfxHamon()
{
	if (!isUnderground()) {
		EnemyBase::createEfxHamon();
	}
}

/**
 * @note Address: 0x802D1538
 * @note Size: 0x58
 */
Vector3f* Obj::getFitEffectPos()
{
	mFitEffectPos = mModel->getJoint("kutijnt1")->getWorldMatrix()->getColumn(3);
	return &mFitEffectPos;
}

} // namespace SnakeWhole
} // namespace Game
