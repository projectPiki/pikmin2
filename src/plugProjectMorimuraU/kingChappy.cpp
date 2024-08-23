#include "Game/Entities/KingChappy.h"
#include "Game/Entities/Bomb.h"
#include "Game/SingleGameSection.h"
#include "Game/MapMgr.h"
#include "Game/seaMgr.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Stickers.h"
#include "Game/Navi.h"
#include "Game/PikiMgr.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace KingChappy {
Obj* curK;

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "kingChappy";

/**
 * @note Address: 0x8035CCE8
 * @note Size: 0x38
 */
static bool lFootCallBack(J3DJoint* joint, int footIdx)
{
	if (footIdx == 0) {
		if (curK) {
			curK->leftFootMtxCalc();
		}
	}

	return true;
}

/**
 * @note Address: 0x8035CD20
 * @note Size: 0x38
 */
static bool rFootCallBack(J3DJoint* joint, int footIdx)
{
	if (footIdx == 0) {
		if (curK) {
			curK->rightFootMtxCalc();
		}
	}

	return true;
}

/**
 * @note Address: 0x8035CD58
 * @note Size: 0xA4
 */
void Obj::setParameters()
{
	EnemyBase::setParameters();
	if (mIsBig || C_PARMS->mDoForceBig) {
		mIsBig         = true;
		f32 scale      = C_PROPERPARMS.mBigScale.mValue;
		mScaleModifier = scale;
		mScale         = Vector3f(scale);
		mCollTree->mPart->setScale(scale);
		mCurLodSphere.mRadius                        = scale * C_GENERALPARMS.mOffCameraRadius.mValue;
		C_GENERALPARMS.mHeightOffsetFromFloor.mValue = 60.0f;
	}
}

/**
 * @note Address: 0x8035CDFC
 * @note Size: 0x20
 */
void Obj::birth(Vector3f& position, f32 faceDir) { EnemyBase::birth(position, faceDir); }

/**
 * @note Address: 0x8035CE1C
 * @note Size: 0x448
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	fadeEfxHamon();
	mMouthJoint1 = mModel->getJoint("kuti");
	P2ASSERTLINE(90, mMouthJoint1);

	mBodyJoint = mModel->getJoint("kosijnt");
	P2ASSERTLINE(93, mBodyJoint);

	mTongueJoint1 = mModel->getJoint("bero6");
	P2ASSERTLINE(96, mTongueJoint1);

	mTongueJoint2 = mModel->getJoint("bero5");
	P2ASSERTLINE(99, mTongueJoint2);

	mMouthJoint2 = mModel->getJoint("kuti");
	P2ASSERTLINE(102, mMouthJoint2);

	mFsm->start(this, KINGCHAPPY_HideWait, nullptr);

	mHomePosition             = mPosition;
	mGoalPosition             = mHomePosition;
	mHomePosition.y           = 0.0f;
	mDoCheckAppear            = true;
	mSearchDelayTimer         = 0;
	mPrevWalkingCheckPosition = mHomePosition;
	mWalkingTimer             = 0;
	mCanEatBombs              = false;

	P2ASSERTLINE(121, mModel);
	J3DJoint* joint;
	J3DModelData* modelData = mModel->mJ3dModel->mModelData;

	mLFootJointIndex = mModel->getJointIndex("asiL");
	joint            = modelData->mJointTree.mJoints[mLFootJointIndex];
	P2ASSERTLINE(127, joint);
	joint->mFunction = &lFootCallBack;

	mRFootJointIndex = mModel->getJointIndex("asiR");
	J3DJoint* joint2 = modelData->mJointTree.mJoints[mRFootJointIndex];
	P2ASSERTLINE(132, joint2);
	joint2->mFunction = &rFootCallBack;

	mLFootHeightRatio = 0.0f;
	mRFootHeightRatio = 0.0f;

	mEfxYodare->mMtx     = mMouthJoint2->getWorldMatrix();
	mEfxCryInd->mMtx     = mMouthJoint2->getWorldMatrix();
	mEfxSmoke->mMtx      = mModel->getJoint("hana")->getWorldMatrix();
	mEfxAttack->mMtx     = mModel->getJoint("bero5")->getWorldMatrix();
	mEfxDeadYodare->mMtx = mModel->getJoint("kuti")->getWorldMatrix();
	mEfxDeadHana->setMtxptr(mModel->getJoint("hana")->getWorldMatrix()->mMatrix.mtxView);

	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->setAppearFlag(false);

	mIsBig = false;

	// Use big emperor if mDoForceBig is set, or if we're in Bulblax Kingdom
	SingleGameSection* section = static_cast<SingleGameSection*>(gameSystem->mSection);
	if (C_PARMS->mDoForceBig || (section && section->getCaveID() == 'f_03')) {
		mIsBig         = true;
		mHealth        = C_PROPERPARMS.mBigLife.mValue;
		f32 scale      = C_PROPERPARMS.mBigScale.mValue;
		mScaleModifier = scale;
		mScale         = Vector3f(scale);
		mCollTree->mPart->setScale(scale);
		mCurLodSphere.mRadius = scale * C_GENERALPARMS.mOffCameraRadius.mValue;
	}
}

/**
 * @note Address: 0x8035D264
 * @note Size: 0x5AC
 */
Obj::Obj()
    : mMouthJoint1(nullptr)
    , mBodyJoint(nullptr)
    , mTongueJoint1(nullptr)
    , mTongueJoint2(nullptr)
    , mAllowAnimBlending(false)
    , mDoCheckAppear(true)
    , mSearchDelayTimer(0)
    , mWalkingTimer(0)
    , mLFootJointIndex(0)
    , mRFootJointIndex(0)
    , mCurrentWaterBox(nullptr)
    , mFsm(nullptr)
    , mEfxYodare(nullptr)
    , mEfxDiveSand(nullptr)
    , mEfxDiveWater(nullptr)
    , mEfxCryAB(nullptr)
    , mEfxCryInd(nullptr)
    , mEfxSmoke(nullptr)
    , mEfxAttack(nullptr)
    , mEfxDeadYodare(nullptr)
    , mEfxDeadHana(nullptr)
    , mLeftEyeRippleEfx(nullptr)
    , mRightEyeRippleEfx(nullptr)
    , mIsBig(false)
{

	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	curK = nullptr;

	mEfxYodare     = new efx::TKchYodare(nullptr);
	mEfxDiveSand   = new efx::TKchDiveSand(&mPosition, &mFaceDir);
	mEfxDiveWater  = new efx::TKchDiveWat(&mPosition, &mFaceDir);
	mEfxCryAB      = new efx::TKchCryAB(&mPosition);
	mEfxCryInd     = new efx::TKchCryInd;
	mEfxSmoke      = new efx::TKchSmokeHana;
	mEfxAttack     = new efx::TKchAttackYodare(nullptr);
	mEfxDeadYodare = new efx::TKchDeadYodare(nullptr);
	mEfxDeadHana   = new efx::TKchDeadHana;

	mRightEyeRippleEfx = new efx::TEnemyHamonChasePos(&mRightEyePosition);
	mLeftEyeRippleEfx  = new efx::TEnemyHamonChasePos(&mLeftEyePosition);
}

/**
 * @note Address: 0x8035E0D4
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x8035E120
 * @note Size: 0x1A0
 */
void Obj::doUpdate()
{
	if (!mCurrentWaterBox) {
		Sys::Sphere sphere(mPosition, 500.0f);
		P2ASSERTLINE(235, mapMgr->mSeaMgr);
		mCurrentWaterBox = mapMgr->mSeaMgr->findWater2d(sphere);
	}

	mFootPosition = mPosition;
	mFootPosition.x -= 10.0f * sinf(mFaceDir);
	mFootPosition.z -= 10.0f * cosf(mFaceDir);

	mScale = Vector3f(mScaleModifier);
	mCollTree->mPart->setScale(mScaleModifier);

	mFsm->exec(this);
}

/**
 * @note Address: 0x8035E2C0
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x8035E2C4
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8035E2E4
 * @note Size: 0xB8
 */
void Obj::doAnimationUpdateAnimator()
{
	ProperAnimator* animator = static_cast<ProperAnimator*>(mAnimator);
	if (animator->mAnimator.mIsBlendEnabled) {
		f32 frameRate = sys->mDeltaTime;
		frameRate     = EnemyAnimatorBase::defaultAnimSpeed * frameRate;
		SysShape::BlendLinearFun linearBlend;
		animator->animate(&linearBlend, 60.0f * sys->mDeltaTime, frameRate, frameRate);
		static_cast<EnemyBlendAnimatorBase*>(animator)->mAnimator.setModelCalc(mModel, 0);
	} else {
		EnemyBase::doAnimationUpdateAnimator();
	}
}

/**
 * @note Address: 0x8035E39C
 * @note Size: 0x34
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	EnemyBase::onKill(killArg);
	fadeAllEffect();
}

/**
 * @note Address: 0x8035E3D0
 * @note Size: 0x588
 */
void Obj::doAnimationCullingOff()
{
	if (C_PARMS->mDoUseFootCallback) {
		if (getStateID() == KINGCHAPPY_Walk || mLFootHeightRatio != 0.0f || mRFootHeightRatio != 0.0f) {
			curK = this;
		}
	}

	if (C_PARMS->mDoForceHide) {
		C_PARMS->mDoForceHide = 0;
		mFsm->transit(this, KINGCHAPPY_Hide, nullptr);
	}

	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();

	if (mPellet) {
		viewMakeMatrix(mBaseTrMatrix);

		Matrixf mtx;
		PSMTXScale(mtx.mMatrix.mtxView, mScale.x, mScale.y, mScale.z);
		PSMTXConcat(mBaseTrMatrix.mMatrix.mtxView, mtx.mMatrix.mtxView, mBaseTrMatrix.mMatrix.mtxView);

		Vector3f pos;
		mBaseTrMatrix.getTranslation(pos);
		onSetPosition(pos);
		onSetPositionPost(pos);
	} else {
		mBaseTrMatrix.makeSRT(mScale, mRotation, mPosition);
	}

	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();

	// this is a really complicated way to adjust the world matrices when eating pikmin
	for (int i = 0; i < mMouthSlots.mMax; i++) {
		// this loop has regswaps, but not from the math for once!
		Matrixf* mat;
		Creature* stuckCreature = mMouthSlots.getStuckCreature(i);
		if (stuckCreature) {
			mat             = (Matrixf*)mModel->mJ3dModel->mMtxBuffer->mWorldMatrices[mMouthJointIndices[i]];
			Vector3f xBasis = mat->getColumn(0);
			Vector3f yBasis = mat->getColumn(1);
			Vector3f zBasis = mat->getColumn(2);

			f32 length = yBasis.normalise();

			f32 yLen = length;
			if (yLen > 1.0f) {
				yLen = 1.0f;
			}

			if (stuckCreature->isTeki()) {
				if (mCanEatBombs && static_cast<EnemyBase*>(stuckCreature)->getEnemyTypeID() == EnemyTypeID::EnemyID_Bomb) {
					static_cast<Bomb::Obj*>(stuckCreature)->mDoSkipRender = 1;
				}
			} else {
				PSVECCrossProduct((Vec*)&yBasis, (Vec*)&zBasis, (Vec*)&xBasis);

				xBasis.normalise();

				PSVECCrossProduct((Vec*)&xBasis, (Vec*)&yBasis, (Vec*)&zBasis);
				zBasis.normalise();

				mat->mMatrix.structView.xx = xBasis.x * yLen;
				mat->mMatrix.structView.xy = xBasis.y * yLen;
				mat->mMatrix.structView.xz = xBasis.z * yLen;

				mat->mMatrix.structView.yx = yBasis.x * yLen;
				mat->mMatrix.structView.yy = yBasis.y * yLen;
				mat->mMatrix.structView.yz = yBasis.z * yLen;

				mat->mMatrix.structView.zx = zBasis.x * yLen;
				mat->mMatrix.structView.zy = zBasis.y * yLen;
				mat->mMatrix.structView.zz = zBasis.z * yLen;
			}
		}
	}

	mCollTree->update();

	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj); // get sound object
	PSM::assertIsBoss(soundObj);                                        // make sure we have sound object
	if (soundObj) {                                                     // REALLY MAKE SURE WE HAVE SOUND OBJECT
		// POINTLESS IF STATEMENT
		if (mSticked) {
			soundObj->postPikiAttack(true);
		} else {
			soundObj->postPikiAttack(true);
		}
	}

	curK = nullptr;
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stmw     r27, 0x6c(r1)
	mr       r31, r3
	lwz      r4, 0xc0(r3)
	lbz      r0, 0xbca(r4)
	cmplwi   r0, 0
	beq      lbl_8035E428
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	beq      lbl_8035E424
	lfs      f1, lbl_8051E68C@sda21(r2)
	lfs      f0, 0x320(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8035E424
	lfs      f0, 0x334(r31)
	fcmpu    cr0, f1, f0
	beq      lbl_8035E428

lbl_8035E424:
	stw      r31, curK__Q24Game10KingChappy@sda21(r13)

lbl_8035E428:
	lwz      r3, 0xc0(r31)
	lbz      r0, 0xbc8(r3)
	cmplwi   r0, 0
	beq      lbl_8035E460
	li       r0, 0
	mr       r4, r31
	stb      r0, 0xbc8(r3)
	li       r5, 8
	li       r6, 0
	lwz      r3, 0x34c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8035E460:
	lwz      r4, 0x188(r31)
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x24(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x17c(r31)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_8035E508
	addi     r4, r31, 0x138
	bl       viewMakeMatrix__Q24Game10PelletViewFR7Matrixf
	lfs      f1, 0x168(r31)
	addi     r3, r1, 0x38
	lfs      f2, 0x16c(r31)
	lfs      f3, 0x170(r31)
	bl       PSMTXScale
	addi     r3, r31, 0x138
	addi     r4, r1, 0x38
	mr       r5, r3
	bl       PSMTXConcat
	lfs      f0, 0x144(r31)
	mr       r3, r31
	addi     r4, r1, 0x2c
	stfs     f0, 0x2c(r1)
	lfs      f0, 0x154(r31)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x164(r31)
	stfs     f0, 0x34(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 0x2c
	lwz      r12, 0(r31)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	b        lbl_8035E51C

lbl_8035E508:
	addi     r3, r31, 0x138
	addi     r4, r31, 0x168
	addi     r5, r31, 0x1a4
	addi     r6, r31, 0x18c
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"

lbl_8035E51C:
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
	li       r27, 0
	li       r28, 0
	b        lbl_8035E854

lbl_8035E554:
	mr       r4, r27
	addi     r3, r31, 0x2c8
	bl       getSlot__10MouthSlotsFi
	lwz      r29, 0x64(r3)
	cmplwi   r29, 0
	beq      lbl_8035E84C
	lwz      r4, 0x174(r31)
	lwz      r3, 0x33c(r31)
	lwz      r4, 8(r4)
	lhzx     r0, r3, r28
	lwz      r3, 0x84(r4)
	mulli    r0, r0, 0x30
	lfs      f1, lbl_8051E68C@sda21(r2)
	lwz      r3, 0xc(r3)
	add      r30, r3, r0
	lfs      f3, 0x20(r30)
	lfs      f2, 0x10(r30)
	lfs      f0, 0(r30)
	stfs     f0, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f3, 0x28(r1)
	lfs      f2, 0x14(r30)
	lfs      f3, 4(r30)
	lfs      f4, 0x24(r30)
	fmuls    f6, f2, f2
	fmuls    f0, f3, f3
	fmuls    f7, f4, f4
	stfs     f3, 0x14(r1)
	fadds    f0, f0, f6
	stfs     f2, 0x18(r1)
	stfs     f4, 0x1c(r1)
	fadds    f0, f7, f0
	lfs      f5, 0x28(r30)
	lfs      f4, 0x18(r30)
	lfs      f2, 8(r30)
	fcmpo    cr0, f0, f1
	stfs     f2, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f5, 0x10(r1)
	ble      lbl_8035E610
	fmadds   f0, f3, f3, f6
	fadds    f4, f7, f0
	fcmpo    cr0, f4, f1
	ble      lbl_8035E614
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_8035E614

lbl_8035E610:
	fmr      f4, f1

lbl_8035E614:
	lfs      f0, lbl_8051E68C@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_8035E650
	lfs      f0, lbl_8051E6B8@sda21(r2)
	lfs      f2, 0x14(r1)
	fdivs    f3, f0, f4
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	b        lbl_8035E654

lbl_8035E650:
	fmr      f4, f0

lbl_8035E654:
	lfs      f0, lbl_8051E6B8@sda21(r2)
	fmr      f31, f4
	fcmpo    cr0, f4, f0
	ble      lbl_8035E668
	fmr      f31, f0

lbl_8035E668:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8035E6B8
	lbz      r0, 0x338(r31)
	cmplwi   r0, 0
	beq      lbl_8035E84C
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x24
	bne      lbl_8035E84C
	li       r0, 1
	stb      r0, 0x2bd(r29)
	b        lbl_8035E84C

lbl_8035E6B8:
	addi     r3, r1, 0x14
	addi     r4, r1, 8
	addi     r5, r1, 0x20
	bl       PSVECCrossProduct
	lfs      f2, 0x20(r1)
	lfs      f1, 0x24(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x28(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E68C@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8035E710
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8035E714
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8035E714

lbl_8035E710:
	fmr      f3, f1

lbl_8035E714:
	lfs      f0, lbl_8051E68C@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8035E74C
	lfs      f0, lbl_8051E6B8@sda21(r2)
	lfs      f2, 0x20(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)

lbl_8035E74C:
	addi     r3, r1, 0x20
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSVECCrossProduct
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x10(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E68C@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8035E7A4
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8035E7A8
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8035E7A8

lbl_8035E7A4:
	fmr      f3, f1

lbl_8035E7A8:
	lfs      f0, lbl_8051E68C@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8035E7E0
	lfs      f0, lbl_8051E6B8@sda21(r2)
	lfs      f2, 8(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_8035E7E0:
	lfs      f0, 0x20(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0(r30)
	lfs      f0, 0x24(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0x10(r30)
	lfs      f0, 0x28(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0x20(r30)
	lfs      f0, 0x14(r1)
	fmuls    f0, f0, f31
	stfs     f0, 4(r30)
	lfs      f0, 0x18(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0x14(r30)
	lfs      f0, 0x1c(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0x24(r30)
	lfs      f0, 8(r1)
	fmuls    f0, f0, f31
	stfs     f0, 8(r30)
	lfs      f0, 0xc(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0x18(r30)
	lfs      f0, 0x10(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0x28(r30)

lbl_8035E84C:
	addi     r28, r28, 2
	addi     r27, r27, 1

lbl_8035E854:
	lwz      r0, 0x2c8(r31)
	cmpw     r27, r0
	blt      lbl_8035E554
	lwz      r3, 0x114(r31)
	bl       update__8CollTreeFv
	lwz      r29, 0x28c(r31)
	li       r30, 0
	mr       r3, r29
	lwz      r12, 0x28(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_8035E8C4
	mr       r3, r29
	lwz      r12, 0x28(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_8035E8C4
	mr       r3, r29
	lwz      r12, 0x28(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_8035E8C8

lbl_8035E8C4:
	li       r30, 1

lbl_8035E8C8:
	clrlwi.  r0, r30, 0x18
	bne      lbl_8035E8EC
	lis      r3, lbl_80491604@ha
	lis      r5, lbl_804915F8@ha
	addi     r3, r3, lbl_80491604@l
	li       r4, 0x454
	addi     r5, r5, lbl_804915F8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8035E8EC:
	cmplwi   r29, 0
	beq      lbl_8035E934
	lwz      r0, 0xf0(r31)
	cmplwi   r0, 0
	beq      lbl_8035E91C
	mr       r3, r29
	li       r4, 1
	lwz      r12, 0x28(r29)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	b        lbl_8035E934

lbl_8035E91C:
	mr       r3, r29
	li       r4, 1
	lwz      r12, 0x28(r29)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl

lbl_8035E934:
	li       r0, 0
	stw      r0, curK__Q24Game10KingChappy@sda21(r13)
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	lmw      r27, 0x6c(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/**
 * @note Address: 0x8035E958
 * @note Size: 0x40
 */
void Obj::doSimulation(f32 rate)
{
	mSearchDelayTimer--;
	if (mSearchDelayTimer < 0) {
		mSearchDelayTimer = 0;
	}

	EnemyBase::doSimulation(rate);
}

/**
 * @note Address: 0x8035E998
 * @note Size: 0x98
 */
void Obj::getShadowParam(ShadowParam& param)
{
	mBodyJoint->getWorldMatrix()->getTranslation(param.mPosition);
	param.mPosition.y -= 20.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 100.0f * mScaleModifier;
	param.mSize                     = 45.0f * mScaleModifier;
}

/**
 * @note Address: 0x8035EA30
 * @note Size: 0x158
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (isEvent(0, EB_Bittered)) {
		addDamage(damage * 0.1f, 1.0f);
		return true;
	}

	if (collpart) {
		if (creature->isAlive() && creature->isStickTo()) {
			addDamage(damage, 1.0f);
			return true;
		}
	} else if (creature->isAlive()) {
		Vector3f creaturePos = creature->getPosition();
		if (creaturePos.y < 5.0f + mPosition.y) {
			if (sqrDistanceXZ(creaturePos, mPosition) < SQUARE(40.0f)) {
				addDamage(damage * 0.2f, 1.0f);
				return true;
			}
		} else {
			return false;
		}
	}

	return false;
}

/**
 * @note Address: 0x8035EB88
 * @note Size: 0x30
 */
void Obj::collisionCallback(CollEvent& event) { event.mHitPart->mCurrentID == ('kuti'); }

/**
 * @note Address: 0x8035EBB8
 * @note Size: 0x30
 */
void Obj::wallCallback(MoveInfo const& moveInfo)
{
	mSearchDelayTimer = 120;
	mTargetCreature   = nullptr;
	setNextGoal();
}

/**
 * @note Address: 0x8035EBE8
 * @note Size: 0x28
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& direction, f32 damage)
{
	return EnemyBase::bombCallBack(creature, direction, 0.25f * damage);
}

/**
 * @note Address: 0x8035EC10
 * @note Size: 0x4C
 */
void Obj::inWaterCallback(WaterBox* wbox)
{
	if (getStateID() != KINGCHAPPY_HideWait) {
		EnemyBase::inWaterCallback(wbox);
	}
}

/**
 * @note Address: 0x8035EC5C
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(KINGANIM_Carry, nullptr); }

/**
 * @note Address: 0x8035EC84
 * @note Size: 0x64
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "asiR", 2.0f);
	mWalkSmokeMgr.setup(1, mModel, "asiL", 2.0f);
}

/**
 * @note Address: 0x8035ECE8
 * @note Size: 0x8
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/**
 * @note Address: 0x8035ECF0
 * @note Size: 0x74
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	CollPart* backPart   = mCollTree->getCollPart('back');
	backPart->mSpecialID = 'st__';
	CollPart* buttPart   = mCollTree->getCollPart('ketu');
	buttPart->mSpecialID = 'st__';
	fadeAllEffect();
}

/**
 * @note Address: 0x8035ED64
 * @note Size: 0xA0
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	CollPart* backPart   = mCollTree->getCollPart('back');
	backPart->mSpecialID = '_t__';
	CollPart* buttPart   = mCollTree->getCollPart('ketu');
	buttPart->mSpecialID = '_t__';
	EnemyFunc::flickStickPikmin(this, C_GENERALPARMS.mShakeChance.mValue, C_GENERALPARMS.mShakeKnockback.mValue,
	                            C_GENERALPARMS.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
	mFlickTimer = 0.0f;
	createEffect(KingEfx_Drool);
}

/**
 * @note Address: 0x8035EE04
 * @note Size: 0x13C
 */
void Obj::doStartMovie()
{
	mEfxYodare->startDemoDrawOff();
	mEfxDiveSand->startDemoDrawOff();
	mEfxDiveWater->startDemoDrawOff();
	mEfxCryAB->startDemoDrawOff();
	mEfxCryInd->startDemoDrawOff();
	mEfxSmoke->startDemoDrawOff();
	mEfxAttack->startDemoDrawOff();
	mEfxDeadYodare->startDemoDrawOff();
	mEfxDeadHana->startDemoDrawOff();
	mRightEyeRippleEfx->startDemoDrawOff();
	mLeftEyeRippleEfx->startDemoDrawOff();
}

/**
 * @note Address: 0x8035EF9C
 * @note Size: 0x13C
 */
void Obj::doEndMovie()
{
	mEfxYodare->endDemoDrawOn();
	mEfxDiveSand->endDemoDrawOn();
	mEfxDiveWater->endDemoDrawOn();
	mEfxCryAB->endDemoDrawOn();
	mEfxCryInd->endDemoDrawOn();
	mEfxSmoke->endDemoDrawOn();
	mEfxAttack->endDemoDrawOn();
	mEfxDeadYodare->endDemoDrawOn();
	mEfxDeadHana->endDemoDrawOn();
	mRightEyeRippleEfx->endDemoDrawOn();
	mLeftEyeRippleEfx->endDemoDrawOn();
}

/**
 * @note Address: 0x8035F134
 * @note Size: 0x134
 */
void Obj::initMouthSlots()
{
	char* slotNames[] = { "kamu1", "kamu2", "kamu3", "kamu4", "kamu5", "kamu6", "kamu7", "kamu8", "kamu9" };
	mMouthSlots.alloc(9);
	mMouthJointIndices = new u16[9];
	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.setup(i, mModel, slotNames[i]);
		mMouthSlots.getSlot(i)->mRadius = 25.0f * mScaleModifier;
		mMouthJointIndices[i]           = mModel->getJointIndex(slotNames[i]);
	}
}

/**
 * @note Address: 0x8035F268
 * @note Size: 0x1A4
 */
int Obj::eatBomb()
{
	Bomb::Obj* bomb;
	int count          = 0;
	MouthSlots* slots  = getMouthSlots();
	Bomb::Mgr* bombMgr = static_cast<Bomb::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Bomb));
	if (bombMgr) {
		for (int i = 0; i < bombMgr->getMaxObjects(); i++) {
			bomb = static_cast<Bomb::Obj*>(bombMgr->getEnemy(i));
			if (bomb->canEat() && !bomb->isStickToMouth()) {
				for (int j = 0; j < slots->mMax; j++) {
					MouthCollPart* slot = slots->getSlot(j);
					if (!slot->mStuckCreature) {
						Vector3f slotPos;
						slot->getPosition(slotPos);
						Vector3f bombPos = bomb->getPosition();

						f32 dist = slotPos.distance(bombPos);
						if (dist < slot->mRadius) {
							bomb->startStickMouth(this, slot);
							bomb->mEfxLight->fade();
							bomb->stopMotion();
							count++;
							break;
						}
					}
				}
			}
		}
	}

	return count;
}

/**
 * @note Address: 0x8035F40C
 * @note Size: 0x8
 */
MouthSlots* Obj::getMouthSlots() { return &mMouthSlots; }

/**
 * @note Address: 0x8035F414
 * @note Size: 0x2C8
 */
int Obj::getPikminInMouth(bool doKill)
{
	int count = 0;
	Stickers stickers(this);
	Iterator<Creature> iter(&stickers);

	CI_LOOP(iter)
	{
		Creature* creature = (*iter);
		if (creature->isStickToMouth()) {
			if (doKill) {
				if (creature->isPiki()) {
					InteractKill interactKill(this, nullptr);
					creature->stimulate(interactKill);

				} else if (creature->isAlive()) {
					creature->kill(nullptr);
					count++;
				}

			} else {
				count++;
			}
		}
	}

	return count;
}

/**
 * @note Address: 0x8035F6DC
 * @note Size: 0x11C
 */
void Obj::getTonguePosVel(Vector3f& pos, Vector3f& vel)
{
	mTongueJoint1->getWorldMatrix()->getTranslation(pos);
	Vector3f pos2;
	mTongueJoint2->getWorldMatrix()->getTranslation(pos2);
	vel = pos - pos2;

	vel.normalise();
}

/**
 * @note Address: 0x8035F7F8
 * @note Size: 0x1F0
 */
void Obj::setNextGoal()
{
	f32 rad = C_GENERALPARMS.mTerritoryRadius();
	if (sqrDistanceXZ(mPosition, mHomePosition) > SQUARE(rad)) {
		mGoalPosition = mHomePosition;
		checkTurn(true);
		return;
	}

	if (mTargetCreature) {
		mGoalPosition = mTargetCreature->getPosition();
		return;
	}

	rad *= 0.3f + randFloat();

	mGoalPosition = mHomePosition;

	f32 randAngle = TAU * randFloat();

	mGoalPosition.x += rad * sinf(randAngle);
	mGoalPosition.z += rad * cosf(randAngle);
}

/**
 * @note Address: 0x8035F9E8
 * @note Size: 0x500
 */
void Obj::searchTarget()
{
	mTargetCreature = nullptr;

	if (mSearchDelayTimer > 0) {
		return;
	}

	if (C_PARMS->mDontSearchTarget) {
		return;
	}

	if (mHomePosition.x == mGoalPosition.x && mHomePosition.z == mGoalPosition.z && isOutOfTerritory(0.8f)) {
		return;
	}

	f32 searchAngle = TORADIANS(C_GENERALPARMS.mSearchAngle()); // f31
	f32 searchDist  = C_GENERALPARMS.mSearchDistance();
	searchDist *= searchDist;

	mTargetCreature
	    = EnemyFunc::getNearestNavi(this, C_GENERALPARMS.mSearchAngle(), C_GENERALPARMS.mSearchDistance(), &searchDist, nullptr);

	f32 range = SQUARE(C_PROPERPARMS.mInvisibleRange()); // f30
	f32 maxY, minY;
	minY = mPosition.y - 50.0f; // f28
	maxY = 50.0f + mPosition.y; // f29

	Iterator<Piki> iter(pikiMgr);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		if (piki->isSearchable()) {
			Vector3f pikiPos = piki->getPosition();
			if (pikiPos.y < minY || pikiPos.y > maxY) {
				continue;
			}
			f32 angle = getCreatureViewAngle(piki);
			if (absF(angle) <= searchAngle) {
				Vector3f pos      = mPosition;
				Vector3f pikiPos2 = Vector3f(piki->getPosition().x, 0.0f, piki->getPosition().z);
				f32 dist          = sqrDistanceXZ(pikiPos2, pos);
				if (dist < searchDist && dist > range) {
					mTargetCreature = piki;
					searchDist      = dist;
				}
			}
		}
	}

	if (mTargetCreature) {
		mGoalPosition = mTargetCreature->getPosition();
	}
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
	stw      r29, 0x84(r1)
	mr       r31, r3
	li       r0, 0
	stw      r0, 0x230(r3)
	lwz      r0, 0x2f0(r3)
	cmpwi    r0, 0
	bgt      lbl_8035FE94
	lwz      r4, 0xc0(r31)
	lbz      r0, 0xbc9(r4)
	cmplwi   r0, 0
	bne      lbl_8035FE94
	lfs      f1, 0x198(r31)
	lfs      f0, 0x2bc(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8035FA94
	lfs      f1, 0x1a0(r31)
	lfs      f0, 0x2c4(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8035FA94
	lfs      f1, lbl_8051E748@sda21(r2)
	bl       isOutOfTerritory__Q34Game10KingChappy3ObjFf
	clrlwi.  r0, r3, 0x18
	beq      lbl_8035FA94
	b        lbl_8035FE94

lbl_8035FA94:
	lwz      r6, 0xc0(r31)
	mr       r3, r31
	lfs      f3, lbl_8051E750@sda21(r2)
	addi     r4, r1, 8
	lfs      f1, 0x44c(r6)
	li       r5, 0
	lfs      f2, 0x49c(r6)
	fmuls    f0, f1, f1
	lfs      f4, lbl_8051E74C@sda21(r2)
	stfs     f1, 8(r1)
	fmuls    f1, f3, f2
	stfs     f0, 8(r1)
	fmuls    f31, f4, f1
	lwz      r6, 0xc0(r31)
	lfs      f1, 0x49c(r6)
	lfs      f2, 0x44c(r6)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	stw      r3, 0x230(r31)
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	li       r0, 0
	lfs      f0, lbl_8051E754@sda21(r2)
	lwz      r5, 0xc0(r31)
	cmplwi   r0, 0
	lfs      f1, 0x190(r31)
	addi     r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	lfs      f2, 0x8e4(r5)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	fsubs    f28, f1, f0
	fmuls    f30, f2, f2
	stw      r4, 0x6c(r1)
	fadds    f29, f0, f1
	stw      r0, 0x78(r1)
	stw      r0, 0x70(r1)
	stw      r3, 0x74(r1)
	bne      lbl_8035FB38
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	b        lbl_8035FE3C

lbl_8035FB38:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	b        lbl_8035FBA4

lbl_8035FB50:
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8035FE3C
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)

lbl_8035FBA4:
	lwz      r12, 0x6c(r1)
	addi     r3, r1, 0x6c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8035FB50
	b        lbl_8035FE3C

lbl_8035FBC4:
	lwz      r3, 0x74(r1)
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
	beq      lbl_8035FC28
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8035FC28
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8035FC28
	li       r30, 1

lbl_8035FC28:
	clrlwi.  r0, r30, 0x18
	beq      lbl_8035FD80
	mr       r4, r29
	addi     r3, r1, 0x60
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x64(r1)
	fcmpo    cr0, f0, f28
	blt      lbl_8035FD80
	fcmpo    cr0, f0, f29
	bgt      lbl_8035FD80
	mr       r4, r29
	addi     r3, r1, 0x24
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x30
	lfs      f1, 0x28(r1)
	lfs      f0, 0x2c(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x30(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x38(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0xc(r1)
	lfs      f0, 0x14(r1)
	lfs      f4, 0x34(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x18(r1)
	stfs     f4, 0x1c(r1)
	stfs     f3, 0x20(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f25, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f25
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_8035FD80
	mr       r4, r29
	addi     r3, r1, 0x48
	lwz      r12, 0(r29)
	lfs      f25, 0x194(r31)
	lwz      r12, 8(r12)
	lfs      f26, 0x18c(r31)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x54
	lwz      r12, 0(r29)
	lfs      f27, 0x50(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f1, f27, f25
	lfs      f2, 0x54(r1)
	lfs      f0, 8(r1)
	fsubs    f2, f2, f26
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8035FD80
	fcmpo    cr0, f1, f30
	ble      lbl_8035FD80
	stw      r29, 0x230(r31)
	stfs     f1, 8(r1)

lbl_8035FD80:
	lwz      r0, 0x78(r1)
	cmplwi   r0, 0
	bne      lbl_8035FDAC
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	b        lbl_8035FE3C

lbl_8035FDAC:
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	b        lbl_8035FE20

lbl_8035FDCC:
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8035FE3C
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)

lbl_8035FE20:
	lwz      r12, 0x6c(r1)
	addi     r3, r1, 0x6c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8035FDCC

lbl_8035FE3C:
	lwz      r3, 0x74(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x70(r1)
	cmplw    r4, r3
	bne      lbl_8035FBC4
	lwz      r4, 0x230(r31)
	cmplwi   r4, 0
	beq      lbl_8035FE94
	lwz      r12, 0(r4)
	addi     r3, r1, 0x3c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x3c(r1)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x40(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x44(r1)
	stfs     f0, 0x2c4(r31)

lbl_8035FE94:
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
	lwz      r30, 0x88(r1)
	lwz      r0, 0x104(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/**
 * @note Address: 0x8035FEE8
 * @note Size: 0x40
 */
bool Obj::isOutOfTerritory(f32 rangeScale)
{
	f32 radius = rangeScale * C_GENERALPARMS.mTerritoryRadius();
	f32 dist   = sqrDistanceXZ(mHomePosition, mPosition);
	return (dist > SQUARE(radius));
}

/**
 * @note Address: 0x8035FF28
 * @note Size: 0xDC
 */
bool Obj::forceTransit(int stateID)
{
	int currStateID = getStateID();
	switch (stateID) {
	case KINGCHAPPY_Appear:
		if (currStateID == KINGCHAPPY_HideWait) {
			mFsm->transit(this, stateID, nullptr);
			break;
		}
		return false;
	case KINGCHAPPY_WarCry:
		if (currStateID == KINGCHAPPY_Walk && mFlickTimer > 0.0f) {
			mAllowAnimBlending = true;
			mFsm->transit(this, stateID, nullptr);
			break;
		}
		return false;
	default:
		return false;
	}

	return true;
}

/**
 * @note Address: 0x80360004
 * @note Size: 0x30
 */
void Obj::requestTransit(int stateID) { C_MGR->requestState(this, stateID); }

/**
 * @note Address: 0x80360034
 * @note Size: 0x12C
 */
void Obj::walkFunc()
{
	f32 speed        = C_GENERALPARMS.mMoveSpeed();
	f32 maxTurnAngle = C_GENERALPARMS.mMaxTurnAngle();
	f32 turnSpeed    = C_GENERALPARMS.mTurnSpeed();
	if (mIsBig) {
		speed        = C_PROPERPARMS.mBigSpeed();
		maxTurnAngle = C_PROPERPARMS.mBigRotationMaxSpeed();
		turnSpeed    = C_PROPERPARMS.mBigRotationSpeedRate();
	}

	searchTarget();
	EnemyFunc::walkToTarget(this, mGoalPosition, speed, turnSpeed, maxTurnAngle);

	// every 120 frames of walking, check if emperor moved less than sqrt(900) units
	// since the last check, if it has, remove the active search target.
	// this certainly explains why its so bad at chasing stuff
	mWalkingTimer++;
	if (mWalkingTimer > 120) {
		if (sqrDistanceXZ(mPosition, mPrevWalkingCheckPosition) < 900.0f) {
			mSearchDelayTimer = 120;
			mTargetCreature   = nullptr;
			mGoalPosition     = mHomePosition;
		}

		mPrevWalkingCheckPosition = mPosition;
		mWalkingTimer             = 0;
	}
}

/**
 * @note Address: 0x80360160
 * @note Size: 0x1AC
 */
f32 Obj::turnFunc(f32 scale)
{
	Vector3f targetPos = mGoalPosition;
	if (mTargetCreature) {
		targetPos = mTargetCreature->getPosition();
	}

	f32 maxAngle  = C_GENERALPARMS.mMaxTurnAngle();
	f32 turnSpeed = C_GENERALPARMS.mTurnSpeed();

	if (mIsBig) {
		maxAngle  = C_PROPERPARMS.mBigRotationMaxSpeed();
		turnSpeed = C_PROPERPARMS.mBigRotationSpeedRate();
	}

	return turnToTarget2(targetPos, turnSpeed * scale, maxAngle * scale);
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
	fmr      f27, f1
	lwz      r4, 0x230(r3)
	lfs      f30, 0x2bc(r3)
	cmplwi   r4, 0
	lfs      f31, 0x2c4(r3)
	beq      lbl_803601D0
	lwz      r12, 0(r4)
	addi     r3, r1, 0x20
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f30, 0x20(r1)
	lfs      f31, 0x28(r1)

lbl_803601D0:
	lbz      r0, 0x394(r31)
	lwz      r3, 0xc0(r31)
	cmplwi   r0, 0
	lfs      f29, 0x334(r3)
	lfs      f28, 0x30c(r3)
	beq      lbl_803601F0
	lfs      f29, 0xaec(r3)
	lfs      f28, 0xac4(r3)

lbl_803601F0:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f30, f4
	fsubs    f2, f31, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
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
	fmuls    f4, f29, f27
	lfs      f0, lbl_8051E750@sda21(r2)
	fmuls    f3, f28, f27
	lfs      f2, lbl_8051E74C@sda21(r2)
	fmr      f30, f1
	fmuls    f0, f0, f4
	fmuls    f31, f30, f3
	fmuls    f1, f2, f0
	fabs     f0, f31
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_803602A4
	lfs      f0, lbl_8051E68C@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_803602A0
	fmr      f31, f1
	b        lbl_803602A4

lbl_803602A0:
	fneg     f31, f1

lbl_803602A4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	fmr      f1, f30
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
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

/**
 * @note Address: 0x8036030C
 * @note Size: 0x34
 */
bool Obj::isReachToGoal(f32 radius)
{
	f32 rad  = SQUARE(radius);
	f32 dist = sqrDistanceXZ(mPosition, mGoalPosition);
	return (u8)(dist < rad);
}

// /**
//  * @note Address: N/A
//  * @note Size: 0xD8
//  */
// void Obj::isUseTurn()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80360340
 * @note Size: 0x844
 */
void Obj::checkAttack(bool check)
{
	if (getStateID() == KINGCHAPPY_Dead) {
		return;
	}

	if (check) {
		ProperAnimator* animator = static_cast<ProperAnimator*>(mAnimator);
		P2ASSERTLINE(1098, animator);
		if (animator->mAnimator.mIsBlendEnabled) {
			return;
		}
	}

	f32 attackRange, attackAngle; // f27, f26
	if (mIsBig) {
		attackRange = C_PROPERPARMS.mBigAttackHitRange();
		attackAngle = C_PROPERPARMS.mBigAttackAngle();
	} else {
		attackRange = C_GENERALPARMS.mMaxAttackRange();
		attackAngle = C_GENERALPARMS.mMaxAttackAngle();
	}

	if (mTargetCreature && mTargetCreature->isAlive()) {
		Creature* target = mTargetCreature;
		if (isTargetWithinRange(target, getCreatureViewAngle(target), C_GENERALPARMS.mPrivateRadius(), C_GENERALPARMS.mSightRadius(),
		                        C_GENERALPARMS.mFov(), C_GENERALPARMS.mViewAngle())) {
			mTargetCreature = nullptr;

		} else {
			Creature* target = mTargetCreature;
			f32 angle        = getCreatureViewAngle(target);
			if (isTargetAttackable(target, angle, attackRange, attackAngle)) {
				f32 range          = C_PROPERPARMS.mInvisibleRange();
				Vector3f targetPos = mTargetCreature->getPosition();

				if (sqrDistanceXZ(mPosition, targetPos) > SQUARE(range)) {
					mAllowAnimBlending = check;
					mFsm->transit(this, KINGCHAPPY_Attack, nullptr);
					mTargetCreature = nullptr;
				} else {
					mTargetCreature = nullptr;
				}
			}
		}
	}

	if (!C_PARMS->mCanAttackBombs || !mLod.isFlag(AILOD_IsVisible)) {
		return;
	}

	Bomb::Mgr* bombMgr = static_cast<Bomb::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Bomb));

	if (!bombMgr) {
		return;
	}

	for (int i = 0; i < bombMgr->getMaxObjects(); i++) {
		Bomb::Obj* bomb = static_cast<Bomb::Obj*>(bombMgr->getEnemy(i));
		if (!bomb) {
			continue;
		}

		if (!bomb->canEat()) {
			continue;
		}

		f32 bombAngle = getCreatureViewAngle(bomb);
		if (isTargetAttackable(bomb, bombAngle, attackRange, attackAngle)) {
			f32 range          = C_PROPERPARMS.mInvisibleRange();
			Vector3f targetPos = bomb->getPosition();

			if (sqrDistanceXZ(mPosition, targetPos) > SQUARE(range)) {
				mAllowAnimBlending = check;
				mFsm->transit(this, KINGCHAPPY_Attack, nullptr);
				mTargetCreature = nullptr;
			}
		}
	}

	/*
	stwu     r1, -0x240(r1)
	mflr     r0
	stw      r0, 0x244(r1)
	stfd     f31, 0x230(r1)
	psq_st   f31, 568(r1), 0, qr0
	stfd     f30, 0x220(r1)
	psq_st   f30, 552(r1), 0, qr0
	stfd     f29, 0x210(r1)
	psq_st   f29, 536(r1), 0, qr0
	stfd     f28, 0x200(r1)
	psq_st   f28, 520(r1), 0, qr0
	stfd     f27, 0x1f0(r1)
	psq_st   f27, 504(r1), 0, qr0
	stfd     f26, 0x1e0(r1)
	psq_st   f26, 488(r1), 0, qr0
	stfd     f25, 0x1d0(r1)
	psq_st   f25, 472(r1), 0, qr0
	stfd     f24, 0x1c0(r1)
	psq_st   f24, 456(r1), 0, qr0
	stfd     f23, 0x1b0(r1)
	psq_st   f23, 440(r1), 0, qr0
	stfd     f22, 0x1a0(r1)
	psq_st   f22, 424(r1), 0, qr0
	stmw     r26, 0x188(r1)
	mr       r30, r3
	mr       r31, r4
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	beq      lbl_80360B20
	clrlwi.  r0, r31, 0x18
	beq      lbl_803603F0
	lwz      r28, 0x184(r30)
	cmplwi   r28, 0
	bne      lbl_803603E4
	lis      r3, lbl_804915E8@ha
	lis      r5, lbl_804915F8@ha
	addi     r3, r3, lbl_804915E8@l
	li       r4, 0x44a
	addi     r5, r5, lbl_804915F8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803603E4:
	lbz      r0, 0x58(r28)
	cmplwi   r0, 0
	bne      lbl_80360B20

lbl_803603F0:
	lbz      r0, 0x394(r30)
	cmplwi   r0, 0
	beq      lbl_8036040C
	lwz      r3, 0xc0(r30)
	lfs      f27, 0xb3c(r3)
	lfs      f26, 0xb14(r3)
	b        lbl_80360418

lbl_8036040C:
	lwz      r3, 0xc0(r30)
	lfs      f27, 0x564(r3)
	lfs      f26, 0x58c(r3)

lbl_80360418:
	lwz      r3, 0x230(r30)
	cmplwi   r3, 0
	beq      lbl_80360878
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80360878
	lwz      r29, 0x230(r30)
	addi     r3, r1, 0x110
	lwz      r5, 0xc0(r30)
	mr       r4, r29
	lwz      r12, 0(r29)
	lfs      f28, 0x424(r5)
	lwz      r12, 8(r12)
	lfs      f29, 0x3fc(r5)
	lfs      f30, 0x3d4(r5)
	lfs      f31, 0x3ac(r5)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x110(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x11c
	lfs      f1, 0x114(r1)
	lfs      f0, 0x118(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0xf8(r1)
	stfs     f1, 0xfc(r1)
	stfs     f0, 0x100(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x11c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x124(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0xf8(r1)
	lfs      f0, 0x100(r1)
	lfs      f4, 0x120(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x104(r1)
	stfs     f4, 0x108(r1)
	stfs     f3, 0x10c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f22, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f22
	bl       angDist__Fff
	mr       r4, r30
	fmr      f24, f1
	lwz      r12, 0(r30)
	addi     r3, r1, 0x134
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x128
	lwz      r12, 0(r29)
	lfs      f25, 0x134(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x128(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x14c
	fsubs    f22, f0, f25
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x140
	lwz      r12, 0(r29)
	lfs      f25, 0x150(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x144(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x164
	fsubs    f23, f0, f25
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x158
	lwz      r12, 0(r29)
	lfs      f25, 0x16c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x160(r1)
	fmuls    f1, f31, f31
	fmuls    f2, f30, f30
	li       r3, 1
	fsubs    f0, f0, f25
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f22, f22, f0
	fcmpo    cr0, f0, f1
	ble      lbl_803605FC
	fcmpo    cr0, f0, f2
	mr       r0, r4
	ble      lbl_803605F0
	fabs     f0, f23
	frsp     f0, f0
	fcmpo    cr0, f0, f29
	bge      lbl_803605F0
	mr       r0, r3

lbl_803605F0:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803605FC
	li       r4, 1

lbl_803605FC:
	clrlwi.  r0, r4, 0x18
	bne      lbl_80360634
	lfs      f0, lbl_8051E750@sda21(r2)
	fabs     f2, f24
	lfs      f1, lbl_8051E74C@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_80360634
	li       r3, 0

lbl_80360634:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80360648
	li       r0, 0
	stw      r0, 0x230(r30)
	b        lbl_80360878

lbl_80360648:
	lwz      r29, 0x230(r30)
	addi     r3, r1, 0xe0
	mr       r4, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0xe0(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0xec
	lfs      f1, 0xe4(r1)
	lfs      f0, 0xe8(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0xc8(r1)
	stfs     f1, 0xcc(r1)
	stfs     f0, 0xd0(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0xec(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0xf4(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0xc8(r1)
	lfs      f0, 0xd0(r1)
	lfs      f4, 0xf0(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0xd4(r1)
	stfs     f4, 0xd8(r1)
	stfs     f3, 0xdc(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f22, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f22
	bl       angDist__Fff
	mr       r4, r30
	fmr      f29, f1
	lwz      r12, 0(r30)
	addi     r3, r1, 0x8c
	li       r28, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x80
	lwz      r12, 0(r29)
	lfs      f28, 0x8c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x80(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0xa4
	fsubs    f23, f0, f28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x98
	lwz      r12, 0(r29)
	lfs      f28, 0xa8(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x9c(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0xbc
	fsubs    f22, f0, f28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0xb0
	lwz      r12, 0(r29)
	lfs      f28, 0xc4(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f22, f22
	lfs      f2, 0xb8(r1)
	fmuls    f0, f27, f27
	fsubs    f2, f2, f28
	fmadds   f1, f23, f23, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803607EC
	lfs      f0, lbl_8051E750@sda21(r2)
	fabs     f2, f29
	lfs      f1, lbl_8051E74C@sda21(r2)
	fmuls    f0, f0, f26
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_803607EC
	li       r28, 1

lbl_803607EC:
	clrlwi.  r0, r28, 0x18
	beq      lbl_80360878
	lwz      r4, 0x230(r30)
	addi     r3, r1, 0x17c
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r4)
	lfs      f22, 0x8e4(r5)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x194(r30)
	fmuls    f0, f22, f22
	lfs      f1, 0x184(r1)
	lfs      f3, 0x18c(r30)
	fsubs    f2, f2, f1
	lfs      f1, 0x17c(r1)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80360870
	stb      r31, 0x2e4(r30)
	mr       r4, r30
	li       r5, 1
	li       r6, 0
	lwz      r3, 0x34c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x230(r30)
	b        lbl_80360878

lbl_80360870:
	li       r0, 0
	stw      r0, 0x230(r30)

lbl_80360878:
	lwz      r3, 0xc0(r30)
	lbz      r0, 0xbcb(r3)
	cmplwi   r0, 0
	beq      lbl_80360B20
	lbz      r0, 0xd8(r30)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_80360898
	b        lbl_80360B20

lbl_80360898:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x24
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r27, r3, r3
	beq      lbl_80360B20
	lfs      f0, lbl_8051E750@sda21(r2)
	fmuls    f28, f27, f27
	lfs      f1, lbl_8051E74C@sda21(r2)
	li       r26, 0
	fmuls    f0, f0, f26
	fmuls    f29, f1, f0
	b        lbl_80360B04

lbl_803608C8:
	mr       r3, r27
	mr       r4, r26
	lwz      r12, 0(r27)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	beq      lbl_80360B00
	bl       canEat__Q34Game4Bomb3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80360B00
	mr       r4, r28
	addi     r3, r1, 0x68
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x68(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x74
	lfs      f1, 0x6c(r1)
	lfs      f0, 0x70(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x7c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x50(r1)
	lfs      f0, 0x58(r1)
	lfs      f4, 0x78(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x5c(r1)
	stfs     f4, 0x60(r1)
	stfs     f3, 0x64(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f22, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f22
	bl       angDist__Fff
	mr       r4, r30
	fmr      f27, f1
	lwz      r12, 0(r30)
	addi     r3, r1, 0x14
	li       r29, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lfs      f26, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 8(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	fsubs    f23, f0, f26
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f26, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x44
	fsubs    f22, f0, f26
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f26, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f0, f22, f22
	lfs      f1, 0x40(r1)
	fsubs    f1, f1, f26
	fmadds   f0, f23, f23, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f28
	bge      lbl_80360A80
	fabs     f0, f27
	frsp     f0, f0
	fcmpo    cr0, f0, f29
	cror     2, 0, 2
	bne      lbl_80360A80
	li       r29, 1

lbl_80360A80:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80360B00
	mr       r4, r28
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r28)
	addi     r3, r1, 0x170
	lfs      f22, 0x8e4(r5)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x194(r30)
	fmuls    f0, f22, f22
	lfs      f1, 0x178(r1)
	lfs      f3, 0x18c(r30)
	fsubs    f2, f2, f1
	lfs      f1, 0x170(r1)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80360B00
	stb      r31, 0x2e4(r30)
	mr       r4, r30
	li       r5, 1
	li       r6, 0
	lwz      r3, 0x34c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x230(r30)

lbl_80360B00:
	addi     r26, r26, 1

lbl_80360B04:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	cmpw     r26, r3
	blt      lbl_803608C8

lbl_80360B20:
	psq_l    f31, 568(r1), 0, qr0
	lfd      f31, 0x230(r1)
	psq_l    f30, 552(r1), 0, qr0
	lfd      f30, 0x220(r1)
	psq_l    f29, 536(r1), 0, qr0
	lfd      f29, 0x210(r1)
	psq_l    f28, 520(r1), 0, qr0
	lfd      f28, 0x200(r1)
	psq_l    f27, 504(r1), 0, qr0
	lfd      f27, 0x1f0(r1)
	psq_l    f26, 488(r1), 0, qr0
	lfd      f26, 0x1e0(r1)
	psq_l    f25, 472(r1), 0, qr0
	lfd      f25, 0x1d0(r1)
	psq_l    f24, 456(r1), 0, qr0
	lfd      f24, 0x1c0(r1)
	psq_l    f23, 440(r1), 0, qr0
	lfd      f23, 0x1b0(r1)
	psq_l    f22, 424(r1), 0, qr0
	lfd      f22, 0x1a0(r1)
	lmw      r26, 0x188(r1)
	lwz      r0, 0x244(r1)
	mtlr     r0
	addi     r1, r1, 0x240
	blr
	*/
}

/**
 * @note Address: 0x80360B84
 * @note Size: 0x42C
 */
void Obj::checkFlick(bool check)
{
	if (getStateID() == KINGCHAPPY_Dead) {
		return;
	}

	if (check) {
		if (static_cast<ProperAnimator*>(mAnimator)->mAnimator.mIsBlendEnabled) {
			return;
		}
	}

	Iterator<Navi> iter(naviMgr);
	CI_LOOP(iter)
	{
		Navi* navi = *iter;
		if (navi->isAlive()) {
			f32 range    = C_PROPERPARMS.mInvisibleRange();
			Vector3f sep = navi->getTargetSeparation(this);
			if (sep.sqrMagnitude() < SQUARE(range)) {
				mFlickTimer += 0.1f;
			}
		}
	}

	if (!EnemyFunc::isStartFlick(this, false)) {
		return;
	}

	mAllowAnimBlending = check;

	if (mHealth < 0.5f * C_GENERALPARMS.mHealth()) {
		if (randFloat() < C_PROPERPARMS.mFlickShoutRate()) {
			mFsm->transit(this, KINGCHAPPY_WarCry, nullptr);
			return;
		}

		mFsm->transit(this, KINGCHAPPY_Flick, nullptr);
		return;
	}

	mFsm->transit(this, KINGCHAPPY_Flick, nullptr);
}

/**
 * @note Address: 0x80360FB0
 * @note Size: 0xEC
 */
void Obj::checkDead(bool check)
{
	if (getStateID() == KINGCHAPPY_Dead) {
		return;
	}

	if (check) {
		if (static_cast<ProperAnimator*>(mAnimator)->mAnimator.mIsBlendEnabled) {
			return;
		}
	}

	if (mHealth <= 0.0f) {
		mAllowAnimBlending = check;

		if (randFloat() < C_PROPERPARMS.mDeathRate()) {
			mFsm->transit(this, KINGCHAPPY_WarCry, nullptr);
			return;
		}

		mFsm->transit(this, KINGCHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x8036109C
 * @note Size: 0x128
 */
void Obj::checkTurn(bool check)
{
	if (getStateID() == KINGCHAPPY_Dead) {
		return;
	}

	if (check) {
		if (static_cast<ProperAnimator*>(mAnimator)->mAnimator.mIsBlendEnabled) {
			return;
		}
	}

	f32 angle = getCreatureViewAngle(mGoalPosition);
	if (absF(angle) > TORADIANS(C_PROPERPARMS.mRequiredTurningAngleDeg())) {
		mAllowAnimBlending = check;
		mFsm->transit(this, KINGCHAPPY_Turn, nullptr);
	}
}

/**
 * @note Address: 0x803611C4
 * @note Size: 0x13C
 */
void Obj::startMotionSelf(int animIdx, SysShape::MotionListener* listener)
{
	if (!listener) {
		listener = this;
	}

	bool isBlendAnimating    = false;
	ProperAnimator* animator = static_cast<ProperAnimator*>(mAnimator);
	if (mAllowAnimBlending && !animator->mAnimator.mIsBlendEnabled) {
		SysShape::Animator& sysAnim = animator->getAnimator(0);
		f32 frame;
		if (sysAnim.mAnimInfo) {
			frame = sysAnim.mAnimInfo->mAnm->mTotalFrameCount;
		} else {
			frame = 0.0f;
		}

		f32 timer = sysAnim.mTimer;
		if (frame - 1.0f > timer) {
			int currAnim = sysAnim.getAnimIndex();

			if (animIdx != currAnim) {
				startBlend(currAnim, animIdx, &EnemyBlendAnimatorBase::sBlendLinearFun, 30.0f, nullptr);
				sysAnim.setCurrFrame(timer);
				isBlendAnimating = true;
			}
		}
	}

	if (!isBlendAnimating) {
		startMotion(animIdx, listener);
	}
	mAllowAnimBlending = false;
}

/**
 * @note Address: 0x80361300
 * @note Size: 0x98
 */
void Obj::endBlendAnimation()
{
	SysShape::Animator& animator = mAnimator->getAnimator(1);

	int animIdx = animator.getAnimIndex();

	f32 timer = animator.mTimer;

	endBlend();
	startMotion(animIdx, nullptr);
	setMotionFrame(timer);
}

/**
 * @note Address: 0x80361398
 * @note Size: 0x44
 */
void Obj::leftFootMtxCalc()
{
	footMtxCalc(mModel->mJ3dModel->mMtxBuffer->mWorldMatrices[mLFootJointIndex], &mLFootPosition, &mLFootHeightRatio);
}

/**
 * @note Address: 0x803613DC
 * @note Size: 0x44
 */
void Obj::rightFootMtxCalc()
{
	footMtxCalc(mModel->mJ3dModel->mMtxBuffer->mWorldMatrices[mRFootJointIndex], &mRFootPosition, &mRFootHeightRatio);
}

/**
 * @note Address: 0x80361420
 * @note Size: 0x190
 */
void Obj::footMtxCalc(Mtx mtx, Vector3f* pos, f32* p1)
{
	if (mtx[1][3] > mPosition.y + C_PARMS->mFootCalcHeightThreshold) {
		*p1 += 0.25f;

		f32 invP1 = 1.0f - *p1;

		if (*p1 < 1.0f) {
			mtx[0][3] = *p1 * mtx[0][3] + pos->x * invP1;
			mtx[1][3] = *p1 * mtx[1][3] + pos->y * invP1;
			mtx[2][3] = *p1 * mtx[2][3] + pos->z * invP1;
			return;
		}

		*pos = Vector3f(mtx[0][3], mtx[1][3], mtx[2][3]);
		*p1  = 1.0f;
		return;
	}

	*p1 *= 0.7f;
	if (*p1 < 0.1f) {
		if (*p1 != 0.0f) {
			cameraMgr->startVibration(VIBTYPE_LightFastShort, *pos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, *pos, RUMBLEID_Both);
		}

		*p1 = 0.0f;
	}

	f32 invP1 = 1.0f - *p1;
	mtx[0][3] = *p1 * pos->x + mtx[0][3] * invP1;
	mtx[1][3] = pos->y = mPosition.y;
	mtx[2][3]          = *p1 * pos->z + mtx[2][3] * invP1;
}

/**
 * @note Address: 0x803615B0
 * @note Size: 0x78
 */
void Obj::resetFootPos()
{
	mLFootPosition    = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(mLFootJointIndex)->getTranslation();
	mLFootHeightRatio = 0.0f;
	mRFootPosition    = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(mRFootJointIndex)->getTranslation();
	mRFootHeightRatio = 0.0f;
}

/**
 * @note Address: 0x80361628
 * @note Size: 0xDC
 */
void Obj::fadeAllEffect()
{
	mEfxYodare->fade();
	mEfxDiveWater->fade();
	mEfxDiveSand->fade();
	mEfxCryAB->fade();
	mEfxCryInd->fade();
	mEfxSmoke->fade();
	mEfxAttack->fade();
	mEfxDeadYodare->fade();
	mEfxDeadHana->fade();
}

/**
 * @note Address: 0x80361758
 * @note Size: 0x474
 */
void Obj::createEffect(int effectID)
{
	efx::Arg fxArg(mPosition);
	efx::ArgKchYodare fxArgYodare(mPosition, -1000.0f);

	switch (effectID) {
	case KingEfx_Drool: // drool effect
		if (mCurrentWaterBox) {
			fxArgYodare.mGroundYPos = *mCurrentWaterBox->getSeaHeightPtr();
		}

		mEfxYodare->create(&fxArgYodare);
		mEfxYodare->setGlobalScale(mScaleModifier);
		break;

	case 1: // diving dust/water splash
		if (mWaterBox) {
			mEfxDiveWater->create(&fxArg);
			mEfxDiveWater->setGlobalScale(mScaleModifier);
		} else {
			mEfxDiveSand->create(&fxArg);
			mEfxDiveSand->setGlobalScale(mScaleModifier);
		}
		break;

	case 2: // roaring falling rocks/shockwave
		mEfxCryAB->create(&fxArg);
		mEfxCryAB->setGlobalScale(mScaleModifier);
		break;

	case 3: // roaring distortion effect
		mEfxCryInd->create(&fxArg);
		mEfxCryInd->setGlobalScale(mScaleModifier);
		break;

	case 4: // explosion after eating a bomb
		efx::ArgScale fxArgScale(mPosition, mScaleModifier);

		efx::TKchDamage damageFX(mMouthJoint2->getWorldMatrix());
		damageFX.create(&fxArgScale);
		damageFX.mMtx = mMouthJoint2->getWorldMatrix();
		break;

	case 5: // nostril smoke
		mEfxSmoke->create(&fxArg);
		mEfxSmoke->setGlobalScale(mScaleModifier);
		break;

	case 6: // attacking drool
		if (mCurrentWaterBox) {
			fxArgYodare.mGroundYPos = *mCurrentWaterBox->getSeaHeightPtr();
		}

		mEfxAttack->create(&fxArgYodare);
		mEfxAttack->setGlobalScale(mScaleModifier);
		break;

	case 7: // death drool effects
		if (mCurrentWaterBox) {
			fxArgYodare.mGroundYPos = *mCurrentWaterBox->getSeaHeightPtr();
		}

		mEfxDeadYodare->create(&fxArgYodare);
		mEfxDeadYodare->setGlobalScale(mScaleModifier);

		mEfxDeadHana->create(&fxArg);
		mEfxDeadHana->setGlobalScale(mScaleModifier);
		break;

	case 8: // hiding underwater eye ripples
		if (mWaterBox) {
			mRightEyePosition   = mModel->getJoint("eye3R")->getWorldMatrix()->getTranslation();
			mRightEyePosition.y = *mWaterBox->getSeaHeightPtr();

			// Use the water ripples made by wogpoles for emperors eyes, I mean sure, it works I guess
			efx::ArgEnemyType fxArgEnemy(mRightEyePosition, EnemyTypeID::EnemyID_Tadpole, 1.0f);
			mRightEyeRippleEfx->create(&fxArgEnemy);

			mLeftEyePosition   = mModel->getJoint("eye3L")->getWorldMatrix()->getTranslation();
			mLeftEyePosition.y = *mWaterBox->getSeaHeightPtr();

			mLeftEyeRippleEfx->create(&fxArgEnemy);
		}
		break;
	}
}

/**
 * @note Address: 0x80361BCC
 * @note Size: 0x140
 */
void Obj::fadeEffect(int effectID)
{
	switch (effectID) {
	case 0:
		mEfxYodare->fade();
		break;
	case 1:
		mEfxDiveWater->fade();
		mEfxDiveSand->fade();
		break;
	case 2:
		mEfxCryAB->fade();
		break;
	case 3:
		mEfxCryInd->fade();
		break;
	case 5:
		mEfxSmoke->fade();
		break;
	case 6:
		mEfxAttack->fade();
		break;
	case 7:
		mEfxDeadYodare->fade();
		mEfxDeadHana->fade();
		break;
	case 8:
		mRightEyeRippleEfx->fade();
		mLeftEyeRippleEfx->fade();
		break;
	}
}

/**
 * @note Address: 0x80361D0C
 * @note Size: 0xC8
 */
void Obj::createBounceEffect()
{
	if (mWaterBox) {
		createSplashDownEffect(mPosition, 1.6f);
		return;
	}

	efx::ArgScale fxArg(mPosition, mScaleModifier);
	efx::TKchDownsmoke smokeFX;

	smokeFX.create(&fxArg);
}

} // namespace KingChappy
} // namespace Game
