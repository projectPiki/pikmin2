#include "Game/FakePiki.h"
#include "Game/BaseItem.h"
#include "Game/gameStat.h"
#include "Game/Navi.h"
#include "Game/AIConstants.h"
#include "Game/MapMgr.h"
#include "CollInfo.h"
#include "JSystem/JMath.h"
#include "trig.h"
#include "nans.h"

namespace Game {

static const u32 fakePikiUnusedArray[] = { 0, 0, 0 };
static const char fakePikiName[]       = "fakePiki";

/*
 * --INFO--
 * Address:	8013CC68
 * Size:	00012C
 */
FakePiki::FakePiki()
{
	mDoAnimCallback = nullptr;
	if (shadowMgr) {
		shadowMgr->createShadow(this);
	}

	mModel                  = nullptr;
	mBoundingSphere.mRadius = 8.5f;
	mFaceDir                = 0.0f;
	mPosition               = Vector3f(0.0f);
	mSimVelocity            = Vector3f(0.0f);
	mVelocity               = Vector3f(0.0f);
	mSimPosition            = Vector3f(0.0f);
	mBoundAnimIdx           = IPikiAnims::NULLANIM;
	mAnimSpeed              = 30.0f;
	mCollTree               = new CollTree;
	mWaterBox               = nullptr;
	mCollisionBuffer.alloc(this, 8);
	mLookAtPosition       = nullptr;
	mLookAtTargetCreature = nullptr;
	mNeckPhi              = 0.0f;
	mNeckTheta            = 0.0f;
}

/*
 * --INFO--
 * Address:	8013CD94
 * Size:	0000B8
 */
void FakePiki::initFakePiki()
{
	mDoAnimCallback         = nullptr;
	mWaterBox               = nullptr;
	mFaceDir                = 0.0f;
	mPosition               = Vector3f(0.0f);
	mVelocity               = Vector3f(0.0f);
	mSimPosition            = Vector3f(0.0f);
	mSimVelocity            = Vector3f(0.0f);
	mFakePikiBounceTriangle = nullptr;

	if (shadowMgr) {
		shadowMgr->addShadow(this);
	}

	mFakePikiFlags.clear();
	initCaptureStomach();
	_180       = 0.0f;
	mRoomIndex = -1;
	_184       = 0;
}

/*
 * --INFO--
 * Address:	8013CE4C
 * Size:	000028
 */
void FakePiki::killFakePiki() { shadowMgr->delShadow(this); }

/*
 * --INFO--
 * Address:	8013CE74
 * Size:	0000B8
 */
void FakePiki::initAnimator()
{
	mAnimator.setAnimMgr(NaviMgr::animMgr);
	startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);

	P2ASSERTLINE(458, mAnimator.mSelfAnimator.assertValid(mModel));
	P2ASSERTLINE(459, mAnimator.mBoundAnimator.assertValid(mModel));
}

/*
 * --INFO--
 * Address:	8013CF2C
 * Size:	000028
 * Returns whether the pikmin or captains current animation matches the given
 * animation ID
 */
bool FakePiki::assertMotion(int animIdx)
{
	int currIdx;
	if (mAnimator.mSelfAnimator.mAnimInfo) {
		currIdx = mAnimator.mSelfAnimator.mAnimInfo->mId;
	} else {
		currIdx = IPikiAnims::NULLANIM;
	}

	return (currIdx == animIdx);
}

/*
 * --INFO--
 * Address:	8013CF54
 * Size:	00006C
 */
void FakePiki::enableMotionBlend()
{
	int currIdx;
	if (mAnimator.mBoundAnimator.mAnimInfo) {
		currIdx = mAnimator.mBoundAnimator.mAnimInfo->mId;
	} else {
		currIdx = IPikiAnims::NULLANIM;
	}

	mBoundAnimIdx = currIdx;

	mAnimator.mBoundAnimator.startAnim(IPikiAnims::NIGERU, this);
	mAnimator.mBoundAnimator.setCurrFrame(10.0f);
}

/*
 * --INFO--
 * Address:	8013CFC0
 * Size:	000100
 * This function is used to make a pikmin or captain start an animation
 */
void FakePiki::startMotion(int selfAnimIdx, int boundAnimIdx, SysShape::MotionListener* selfListener,
                           SysShape::MotionListener* boundListener)
{
	mAnimator.mSelfAnimator.startAnim(selfAnimIdx, selfListener);
	mAnimator.mBoundAnimator.startAnim(boundAnimIdx, boundListener);

	P2ASSERTLINE(481, mAnimator.mSelfAnimator.assertValid(mModel));
	P2ASSERTLINE(482, mAnimator.mBoundAnimator.assertValid(mModel));

	mBoundAnimIdx = IPikiAnims::NULLANIM;

	switch (selfAnimIdx) {
	case IPikiAnims::IRAIRA:
	case IPikiAnims::NIGERU:
	case IPikiAnims::RUN2:
	case IPikiAnims::WALK:
	case IPikiAnims::WAIT:
	case IPikiAnims::SUWARU:
		break;

	default:
		finishLook();
	}
}

/*
 * --INFO--
 * Address:	8013D0C0
 * Size:	00001C
 */
void FakePiki::finishMotion()
{
	mAnimator.mSelfAnimator.mFlags |= 0x2;
	mAnimator.mBoundAnimator.mFlags |= 0x2;
}

/*
 * --INFO--
 * Address:	8013D0DC
 * Size:	000008
 */
void FakePiki::movieSetFaceDir(f32 faceDir) { mFaceDir = faceDir; }

/*
 * --INFO--
 * Address:	8013D0E4
 * Size:	000008
 */
void FakePiki::setDoAnimCallback(IDelegate* callback) { mDoAnimCallback = callback; }

/*
 * --INFO--
 * Address:	8013D0EC
 * Size:	00000C
 */
void FakePiki::clearDoAnimCallback() { mDoAnimCallback = nullptr; }

/*
 * --INFO--
 * Address:	8013D0F8
 * Size:	0003BC
 */
void FakePiki::updateWalkAnimation()
{
	Vector3f sep   = Vector3f(mPosition.x - mPositionBeforeMovie.x, 0.0f, mPosition.z - mPositionBeforeMovie.z);
	f32 updateTime = sys->mDeltaTime;
	f32 animSpeed  = _lenVec(sep) / updateTime;

	int boundIdx;
	if (mAnimator.mBoundAnimator.mAnimInfo) {
		boundIdx = mAnimator.mBoundAnimator.mAnimInfo->mId;
	} else {
		boundIdx = IPikiAnims::NULLANIM;
	}

	int selfIdx;
	bool check = false;
	if (mAnimator.mSelfAnimator.mAnimInfo) {
		selfIdx = mAnimator.mSelfAnimator.mAnimInfo->mId;
	} else {
		selfIdx = IPikiAnims::NULLANIM;
	}

	if (selfIdx == IPikiAnims::JKOKE) {
		check = true;
	}

	if (boundIdx != IPikiAnims::WAIT && boundIdx != IPikiAnims::WALK && boundIdx != IPikiAnims::ASIBUMI && boundIdx != IPikiAnims::RUN2
	    && boundIdx != IPikiAnims::NIGERU) {
		mAnimSpeed = 30.0f;
		return;
	}

	int otherIdx;
	JUT_ASSERTLINE(594, !check, "damedayo!\n"); // 'no good!'
	FakePiki* otherListener = nullptr;
	f32 faceDir             = FABS(mFaceDir - mFaceDirOffset);
	FakePikiParms* parms    = static_cast<FakePikiParms*>(mParms);
	if (animSpeed < parms->mFakePikiParms.mStepStartSpeed.mValue) {
		otherIdx  = IPikiAnims::WAIT;
		animSpeed = 30.0f;
		if (faceDir > 0.01f) {
			animSpeed = 60.0f;
			otherIdx  = IPikiAnims::ASIBUMI;
		}

	} else if (animSpeed < parms->mFakePikiParms.mWalkStartSpeed.mValue) {
		animSpeed = 30.0f;
		otherIdx  = IPikiAnims::ASIBUMI;

	} else if (animSpeed < parms->mFakePikiParms.mRunStartSpeed.mValue) {
		f32 val       = animSpeed - parms->mFakePikiParms.mWalkStartSpeed.mValue;
		f32 diff      = parms->mFakePikiParms.mRunStartSpeed.mValue - parms->mFakePikiParms.mWalkStartSpeed.mValue;
		otherListener = this;
		otherIdx      = IPikiAnims::WALK;

		animSpeed = (val / diff)
		              * (parms->mFakePikiParms.mWalkPlaybackFrameCountMin.mValue - parms->mFakePikiParms.mWalkPlaybackFrameCountMax.mValue)
		          + parms->mFakePikiParms.mWalkPlaybackFrameCountMax.mValue;

	} else if (animSpeed < parms->mFakePikiParms.mEscapeStartSpeed.mValue) {
		f32 val       = animSpeed - parms->mFakePikiParms.mRunStartSpeed.mValue;
		f32 diff      = parms->mFakePikiParms.mEscapeStartSpeed.mValue - parms->mFakePikiParms.mRunStartSpeed.mValue;
		otherListener = this;
		otherIdx      = IPikiAnims::RUN2;

		animSpeed = (val / diff)
		              * (parms->mFakePikiParms.mRunPlaybackFrameCountMax.mValue - parms->mFakePikiParms.mRunPlaybackFrameCountMin.mValue)
		          + parms->mFakePikiParms.mRunPlaybackFrameCountMax.mValue;

	} else {
		animSpeed     = parms->mFakePikiParms.mEscapePlaybackFrameCountMin.mValue;
		otherListener = this;
		otherIdx      = IPikiAnims::NIGERU;
	}

	isNavi();

	if (otherIdx != boundIdx) {
		if (boundIdx == IPikiAnims::WAIT && otherIdx != IPikiAnims::ASIBUMI) {
			_230 = 4;
		}

		if (boundIdx != IPikiAnims::ASIBUMI && otherIdx == IPikiAnims::WAIT) {
			_230 = 4;
		}

		if (otherIdx != _22C) {
			_230 = 0;
			_22C = otherIdx;
		} else {
			_230++;
		}

		if (_230 < 4) {
			return;
		}
	}

	if (boundIdx != otherIdx) {
		if (boundIdx == IPikiAnims::WAIT || boundIdx == IPikiAnims::ASIBUMI || otherIdx == IPikiAnims::WAIT
		    || otherIdx == IPikiAnims::ASIBUMI) {
			if (mBoundAnimIdx == IPikiAnims::NULLANIM) {
				mAnimator.mSelfAnimator.startAnim(otherIdx, nullptr);
				mAnimator.mBoundAnimator.startAnim(otherIdx, otherListener);
			} else {
				mAnimator.mBoundAnimator.startAnim(otherIdx, otherListener);
			}
		} else if (mBoundAnimIdx == IPikiAnims::NULLANIM) {
			f32 boundRate = mAnimator.mBoundAnimator.mTimer;
			f32 selfRate  = mAnimator.mSelfAnimator.mTimer;
			mAnimator.mBoundAnimator.startAnim(otherIdx, otherListener);
			mAnimator.mBoundAnimator.setCurrFrame(boundRate);
			mAnimator.mSelfAnimator.startAnim(otherIdx, nullptr);
			mAnimator.mSelfAnimator.setCurrFrame(selfRate);
		} else {
			f32 boundRate = mAnimator.mBoundAnimator.mTimer;
			mAnimator.mBoundAnimator.startAnim(otherIdx, otherListener);
			mAnimator.mBoundAnimator.setCurrFrame(boundRate);
		}
	}

	mAnimSpeed = animSpeed;
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
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r31, r3
	lwz      r3, sys@sda21(r13)
	lfs      f3, 0x214(r31)
	lfs      f1, 0x240(r31)
	lfs      f2, 0x20c(r31)
	lfs      f0, 0x238(r31)
	fsubs    f3, f3, f1
	lfs      f1, lbl_805182B4@sda21(r2)
	fsubs    f0, f2, f0
	lfs      f2, 0x54(r3)
	fmuls    f3, f3, f3
	fmadds   f0, f0, f0, f1
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8013D178
	ble      lbl_8013D17C
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_8013D17C

lbl_8013D178:
	fmr      f0, f1

lbl_8013D17C:
	fdivs    f29, f0, f2
	lwz      r3, 0x1d4(r31)
	cmplwi   r3, 0
	beq      lbl_8013D194
	lha      r30, 0x20(r3)
	b        lbl_8013D198

lbl_8013D194:
	li       r30, -1

lbl_8013D198:
	lwz      r3, 0x1b8(r31)
	li       r4, 0
	cmplwi   r3, 0
	beq      lbl_8013D1B0
	lha      r0, 0x20(r3)
	b        lbl_8013D1B4

lbl_8013D1B0:
	li       r0, -1

lbl_8013D1B4:
	cmpwi    r0, 0x17
	bne      lbl_8013D1C0
	li       r4, 1

lbl_8013D1C0:
	cmpwi    r30, 0x1f
	beq      lbl_8013D1F4
	cmpwi    r30, 0x1e
	beq      lbl_8013D1F4
	cmpwi    r30, 1
	beq      lbl_8013D1F4
	cmpwi    r30, 0x1d
	beq      lbl_8013D1F4
	cmpwi    r30, 0x1c
	beq      lbl_8013D1F4
	lfs      f0, lbl_805182B8@sda21(r2)
	stfs     f0, 0x234(r31)
	b        lbl_8013D47C

lbl_8013D1F4:
	clrlwi.  r0, r4, 0x18
	beq      lbl_8013D218
	lis      r3, lbl_8047C720@ha
	lis      r5, lbl_8047C73C@ha
	addi     r3, r3, lbl_8047C720@l
	li       r4, 0x252
	addi     r5, r5, lbl_8047C73C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8013D218:
	lfs      f1, 0x1fc(r31)
	li       r28, 0
	lfs      f0, 0x244(r31)
	lwz      r3, 0xc0(r31)
	fsubs    f1, f1, f0
	lfs      f0, 0x100(r3)
	fabs     f1, f1
	fcmpo    cr0, f29, f0
	frsp     f1, f1
	bge      lbl_8013D260
	lfs      f0, lbl_805182C0@sda21(r2)
	li       r29, 0x1f
	lfs      f29, lbl_805182B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013D2EC
	lfs      f29, lbl_805182C4@sda21(r2)
	li       r29, 1
	b        lbl_8013D2EC

lbl_8013D260:
	lfs      f1, 0x128(r3)
	fcmpo    cr0, f29, f1
	bge      lbl_8013D278
	lfs      f29, lbl_805182B8@sda21(r2)
	li       r29, 1
	b        lbl_8013D2EC

lbl_8013D278:
	lfs      f2, 0x150(r3)
	fcmpo    cr0, f29, f2
	bge      lbl_8013D2AC
	fsubs    f3, f29, f1
	lfs      f0, 0x1c8(r3)
	fsubs    f2, f2, f1
	lfs      f1, 0x1a0(r3)
	mr       r28, r31
	li       r29, 0x1e
	fdivs    f2, f3, f2
	fsubs    f0, f0, f1
	fmadds   f29, f2, f0, f1
	b        lbl_8013D2EC

lbl_8013D2AC:
	lfs      f1, 0x178(r3)
	fcmpo    cr0, f29, f1
	bge      lbl_8013D2E0
	fsubs    f3, f29, f2
	lfs      f0, 0x218(r3)
	fsubs    f2, f1, f2
	lfs      f1, 0x1f0(r3)
	mr       r28, r31
	li       r29, 0x1d
	fdivs    f2, f3, f2
	fsubs    f0, f0, f1
	fmadds   f29, f2, f0, f1
	b        lbl_8013D2EC

lbl_8013D2E0:
	lfs      f29, 0x240(r3)
	mr       r28, r31
	li       r29, 0x1c

lbl_8013D2EC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpw     r29, r30
	beq      lbl_8013D36C
	cmpwi    r30, 0x1f
	bne      lbl_8013D320
	cmpwi    r29, 1
	beq      lbl_8013D320
	li       r0, 4
	stw      r0, 0x230(r31)

lbl_8013D320:
	cmpwi    r30, 1
	beq      lbl_8013D338
	cmpwi    r29, 0x1f
	bne      lbl_8013D338
	li       r0, 4
	stw      r0, 0x230(r31)

lbl_8013D338:
	lwz      r0, 0x22c(r31)
	cmpw     r29, r0
	beq      lbl_8013D354
	li       r0, 0
	stw      r0, 0x230(r31)
	stw      r29, 0x22c(r31)
	b        lbl_8013D360

lbl_8013D354:
	lwz      r3, 0x230(r31)
	addi     r0, r3, 1
	stw      r0, 0x230(r31)

lbl_8013D360:
	lwz      r0, 0x230(r31)
	cmpwi    r0, 4
	blt      lbl_8013D47C

lbl_8013D36C:
	cmpw     r30, r29
	beq      lbl_8013D478
	cmpwi    r30, 0x1f
	beq      lbl_8013D394
	cmpwi    r30, 1
	beq      lbl_8013D394
	cmpwi    r29, 0x1f
	beq      lbl_8013D394
	cmpwi    r29, 1
	bne      lbl_8013D3F0

lbl_8013D394:
	lwz      r0, 0x228(r31)
	cmpwi    r0, -1
	bne      lbl_8013D3D0
	mr       r4, r29
	addi     r3, r31, 0x1ac
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	cmplwi   r28, 0
	mr       r5, r28
	beq      lbl_8013D3C0
	addi     r5, r28, 0x178

lbl_8013D3C0:
	mr       r4, r29
	addi     r3, r31, 0x1c8
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8013D478

lbl_8013D3D0:
	cmplwi   r28, 0
	mr       r5, r28
	beq      lbl_8013D3E0
	addi     r5, r28, 0x178

lbl_8013D3E0:
	mr       r4, r29
	addi     r3, r31, 0x1c8
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8013D478

lbl_8013D3F0:
	lwz      r0, 0x228(r31)
	cmpwi    r0, -1
	bne      lbl_8013D44C
	cmplwi   r28, 0
	lfs      f31, 0x1d0(r31)
	lfs      f30, 0x1b4(r31)
	mr       r5, r28
	beq      lbl_8013D414
	addi     r5, r28, 0x178

lbl_8013D414:
	mr       r4, r29
	addi     r3, r31, 0x1c8
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	fmr      f1, f31
	addi     r3, r31, 0x1c8
	bl       setCurrFrame__Q28SysShape8AnimatorFf
	mr       r4, r29
	addi     r3, r31, 0x1ac
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	fmr      f1, f30
	addi     r3, r31, 0x1ac
	bl       setCurrFrame__Q28SysShape8AnimatorFf
	b        lbl_8013D478

lbl_8013D44C:
	cmplwi   r28, 0
	lfs      f30, 0x1d0(r31)
	mr       r5, r28
	beq      lbl_8013D460
	addi     r5, r28, 0x178

lbl_8013D460:
	mr       r4, r29
	addi     r3, r31, 0x1c8
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	fmr      f1, f30
	addi     r3, r31, 0x1c8
	bl       setCurrFrame__Q28SysShape8AnimatorFf

lbl_8013D478:
	stfs     f29, 0x234(r31)

lbl_8013D47C:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x54(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013D4B4
 * Size:	00023C
 */
bool FakePiki::sNeckCallback(J3DJoint*, int)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	bne      lbl_8013D6D8
	lwz      r4, mInstance__Q24Game18OptimiseController@sda21(r13)
	lbz      r0, 0x3c(r4)
	cmplwi   r0, 0
	beq      lbl_8013D6D8
	lfs      f2, sCurrNeckPhi__Q24Game8FakePiki@sda21(r13)
	lhz      r0, 0x14(r3)
	fneg     f1, f2
	lwz      r3, mMtxBuffer__10J3DMtxCalc@sda21(r13)
	lfs      f0, lbl_805182B4@sda21(r2)
	mulli    r0, r0, 0x30
	lwz      r3, 0xc(r3)
	fcmpo    cr0, f1, f0
	lfs      f3, sCurrNeckTheta__Q24Game8FakePiki@sda21(r13)
	add      r31, r3, r0
	bge      lbl_8013D534
	lfs      f0, lbl_805182C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f6, f0
	b        lbl_8013D558

lbl_8013D534:
	lfs      f0, lbl_805182CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f6, r3, r0

lbl_8013D558:
	fneg     f1, f2
	lfs      f0, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8013D56C
	fneg     f1, f1

lbl_8013D56C:
	lfs      f2, lbl_805182CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_805182B4@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	addi     r6, r3, 4
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f7, r6, r0
	bge      lbl_8013D5C4
	lfs      f0, lbl_805182C8@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f8, f0
	b        lbl_8013D5DC

lbl_8013D5C4:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f8, r3, r0

lbl_8013D5DC:
	lfs      f0, lbl_805182B4@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_8013D5F0
	fneg     f1, f3

lbl_8013D5F0:
	lfs      f0, lbl_805182CC@sda21(r2)
	fneg     f4, f6
	lfs      f3, lbl_805182B4@sda21(r2)
	fneg     f2, f8
	fmuls    f5, f1, f0
	stfs     f7, 0x38(r1)
	fmuls    f1, f8, f6
	stfs     f4, 0x3c(r1)
	fmuls    f0, f8, f7
	fctiwz   f4, f5
	stfs     f2, 0x50(r1)
	mr       r5, r31
	addi     r3, r1, 8
	addi     r4, r1, 0x38
	stfd     f4, 0x90(r1)
	lwz      r0, 0x94(r1)
	stfs     f1, 0x58(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f4, r6, r0
	stfs     f3, 0x40(r1)
	fmuls    f2, f4, f6
	fmuls    f1, f4, f7
	stfs     f0, 0x5c(r1)
	stfs     f2, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f4, 0x60(r1)
	stfs     f3, 0x44(r1)
	stfs     f3, 0x54(r1)
	stfs     f3, 0x64(r1)
	lwz      r6, 0(r31)
	lwz      r0, 4(r31)
	stw      r6, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r6, 8(r31)
	lwz      r0, 0xc(r31)
	stw      r6, 0x10(r1)
	stw      r0, 0x14(r1)
	lwz      r6, 0x10(r31)
	lwz      r0, 0x14(r31)
	stw      r6, 0x18(r1)
	stw      r0, 0x1c(r1)
	lwz      r6, 0x18(r31)
	lwz      r0, 0x1c(r31)
	stw      r6, 0x20(r1)
	stw      r0, 0x24(r1)
	lwz      r6, 0x20(r31)
	lwz      r0, 0x24(r31)
	stw      r6, 0x28(r1)
	stw      r0, 0x2c(r1)
	lwz      r6, 0x28(r31)
	lwz      r0, 0x2c(r31)
	stw      r6, 0x30(r1)
	stw      r0, 0x34(r1)
	bl       PSMTXConcat
	lis      r4, mCurrentMtx__6J3DSys@ha
	mr       r3, r31
	addi     r4, r4, mCurrentMtx__6J3DSys@l
	bl       PSMTXCopy

lbl_8013D6D8:
	lwz      r0, 0xa4(r1)
	li       r3, 0
	lwz      r31, 0x9c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013D6F0
 * Size:	0000C0
 */
void FakePiki::startLookCreature(Creature* creature)
{
	int currAnimIdx;
	if (mAnimator.mSelfAnimator.mAnimInfo) {
		currAnimIdx = mAnimator.mSelfAnimator.mAnimInfo->mId;
	} else {
		currAnimIdx = IPikiAnims::NULLANIM;
	}

	switch (currAnimIdx) {
	default:
		finishLook();
		break;

	case IPikiAnims::IRAIRA:
	case IPikiAnims::NIGERU:
	case IPikiAnims::RUN2:
	case IPikiAnims::WALK:
	case IPikiAnims::WAIT:
	case IPikiAnims::SUWARU:
		if (creature->mCollTree) {
			CollPart* randPart = creature->mCollTree->getRandomCollPart();
			if (randPart) {
				mLookAtTargetCreature = creature;
				mLookAtPosition       = &randPart->mPosition;
				mLookAtTimer          = 0;
				return;
			}
		}

		mLookAtTargetCreature = nullptr;
		finishLook();
	}
}

/*
 * --INFO--
 * Address:	8013D7B0
 * Size:	000070
 */
void FakePiki::updateLookCreature()
{
	// one should not observe the dead.
	if (mLookAtTargetCreature && !mLookAtTargetCreature->isAlive()) {
		mLookAtTargetCreature = nullptr;
		finishLook();
	}

	do_updateLookCreature();
}

/*
 * --INFO--
 * Address:	8013D820
 * Size:	000004
 */
void FakePiki::do_updateLookCreature() { }

/*
 * --INFO--
 * Address:	8013D824
 * Size:	000018
 */
void FakePiki::finishLook()
{
	mLookAtPosition       = nullptr;
	mLookAtTimer          = 10;
	mLookAtTargetCreature = nullptr;
}

/*
 * --INFO--
 * Address:	8013D83C
 * Size:	000398
 */
void FakePiki::updateLook()
{
	f32 angle1;
	f32 angle2;
	f32 angle3;
	if (mLookAtPosition) {
		Vector3f pos = getPosition();
		Vector3f sep = *mLookAtPosition - pos;
		angle1       = JMath::atanTable_.atan2_(sep.x, sep.z);
		angle2       = JMath::atanTable_.atan2_(sep.y, _lengthXZ(sep));

	} else {
		mNeckTheta = roundAng(0.2f * angDist(0.0f, mNeckTheta) + mNeckTheta);
		mNeckPhi   = roundAng(0.2f * angDist(0.0f, mNeckPhi) + mNeckPhi);

		if (FABS(mNeckTheta) < 0.1f && FABS(mNeckPhi) < 0.1f) {
			mLookAtPosition = nullptr;
			mNeckPhi        = 0.0f;
			mNeckTheta      = 0.0f;
			mLookAtTimer    = 0;
		}
		return;
	}

	f32 angX = roundAng(mNeckTheta + mFaceDir);
	angle3   = angX;
	f32 angY = roundAng(angle1 - mFaceDir);
	f32 val;

	if (angY < PI) {
		if (mNeckTheta > PI) {
			val = TAU - (mNeckTheta - angX);
		} else {
			val = angDist(angle1, angle3);
		}
	} else if (mNeckTheta <= PI) {
		val = (TAU - (mNeckTheta - angY)) * -1.0f;
	} else {
		val = angDist(angle1, angle3);
	}

	if (FABS(val) < PI / 20.0f) {
		val = 0.0f;
	}

	val *= 0.05f;

	if (FABS(val) > PI / 10.0f) {
		if (val > 0.0f) {
			val = PI / 10.0f;
		} else {
			val = -PI / 10.0f;
		}
	}

	mNeckTheta = roundAng(mNeckTheta + val);
	if (mNeckTheta > 2.0f * PI / 3.0f && mNeckTheta < PI) {
		mNeckTheta = 2.0f * PI / 3.0f;
	} else if (mNeckTheta < 4.0f * PI / 3.0f && mNeckTheta >= PI) {
		mNeckTheta = 4.0f * PI / 3.0f;
	}

	f32 val2 = angDist(angle2, mNeckPhi);
	if (FABS(val2) < PI / 20.0f) {
		val2 = 0.0f;
	}

	val2 *= 0.05f;

	if (FABS(val2) > PI / 10.0f) {
		if (val2 > 0.0f) {
			val2 = PI / 10.0f;
		} else {
			val2 = -PI / 10.0f;
		}
	}

	mNeckPhi = roundAng(mNeckPhi + val2);
	if (mNeckPhi > PI / 3.0f && mNeckPhi < PI) {
		mNeckPhi = PI / 3.0f;
	} else if (mNeckPhi < 5.0f * PI / 3.0f && mNeckPhi >= PI) {
		mNeckPhi = 5.0f * PI / 3.0f;
	}

	if (mLookAtTimer) {
		mLookAtTimer--;
		if (!mLookAtTimer) {
			mLookAtPosition = nullptr;
			mNeckPhi        = 0.0f;
			mNeckTheta      = 0.0f;
			mLookAtTimer    = 0;
		}
	}
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
	lwz      r0, 0x1a0(r3)
	cmplwi   r0, 0
	beq      lbl_8013D90C
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1a0(r31)
	lis      r3, atanTable___5JMath@ha
	lfs      f2, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 8(r4)
	lfs      f1, 0(r4)
	fsubs    f29, f3, f2
	lfs      f0, 8(r1)
	lfs      f3, 4(r4)
	fsubs    f31, f1, f0
	lfs      f0, 0xc(r1)
	fmr      f2, f29
	fsubs    f30, f3, f0
	fmr      f1, f31
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmuls    f2, f29, f29
	lfs      f0, lbl_805182B4@sda21(r2)
	fmr      f29, f1
	fmadds   f2, f31, f31, f2
	fcmpo    cr0, f2, f0
	ble      lbl_8013D8F0
	ble      lbl_8013D8F4
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8013D8F4

lbl_8013D8F0:
	fmr      f2, f0

lbl_8013D8F4:
	fmr      f1, f30
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f31, f1
	b        lbl_8013D994

lbl_8013D90C:
	lfs      f1, lbl_805182B4@sda21(r2)
	lfs      f2, 0x198(r31)
	bl       angDist__Fff
	lfs      f2, lbl_805182D0@sda21(r2)
	lfs      f0, 0x198(r31)
	fmadds   f1, f1, f2, f0
	bl       roundAng__Ff
	stfs     f1, 0x198(r31)
	lfs      f1, lbl_805182B4@sda21(r2)
	lfs      f2, 0x19c(r31)
	bl       angDist__Fff
	lfs      f2, lbl_805182D0@sda21(r2)
	lfs      f0, 0x19c(r31)
	fmadds   f1, f1, f2, f0
	bl       roundAng__Ff
	stfs     f1, 0x19c(r31)
	lfs      f1, lbl_805182D4@sda21(r2)
	lfs      f0, 0x198(r31)
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	bge      lbl_8013DBA8
	lfs      f0, 0x19c(r31)
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	bge      lbl_8013DBA8
	li       r0, 0
	lfs      f0, lbl_805182B4@sda21(r2)
	stw      r0, 0x1a0(r31)
	stfs     f0, 0x19c(r31)
	stfs     f0, 0x198(r31)
	stb      r0, 0x1a4(r31)
	b        lbl_8013DBA8

lbl_8013D994:
	lfs      f1, 0x198(r31)
	lfs      f0, 0x1fc(r31)
	fadds    f1, f1, f0
	bl       roundAng__Ff
	fmr      f2, f1
	lfs      f0, 0x1fc(r31)
	fsubs    f1, f29, f0
	fmr      f30, f2
	bl       roundAng__Ff
	lfs      f0, lbl_805182D8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8013D9F0
	lfs      f2, 0x198(r31)
	fcmpo    cr0, f2, f0
	ble      lbl_8013D9E0
	fsubs    f0, f2, f1
	lfs      f1, lbl_805182DC@sda21(r2)
	fsubs    f1, f1, f0
	b        lbl_8013DA24

lbl_8013D9E0:
	fmr      f1, f29
	fmr      f2, f30
	bl       angDist__Fff
	b        lbl_8013DA24

lbl_8013D9F0:
	lfs      f2, 0x198(r31)
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_8013DA18
	fsubs    f1, f2, f1
	lfs      f2, lbl_805182DC@sda21(r2)
	lfs      f0, lbl_805182E0@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f1, f1, f0
	b        lbl_8013DA24

lbl_8013DA18:
	fmr      f1, f29
	fmr      f2, f30
	bl       angDist__Fff

lbl_8013DA24:
	fabs     f2, f1
	lfs      f0, lbl_805182E4@sda21(r2)
	frsp     f2, f2
	fcmpo    cr0, f2, f0
	bge      lbl_8013DA3C
	lfs      f1, lbl_805182B4@sda21(r2)

lbl_8013DA3C:
	lfs      f0, lbl_805182E8@sda21(r2)
	lfs      f2, lbl_805182EC@sda21(r2)
	fmuls    f1, f1, f0
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	ble      lbl_8013DA70
	lfs      f0, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013DA6C
	fmr      f1, f2
	b        lbl_8013DA70

lbl_8013DA6C:
	lfs      f1, lbl_805182F0@sda21(r2)

lbl_8013DA70:
	lfs      f0, 0x198(r31)
	fadds    f1, f0, f1
	bl       roundAng__Ff
	stfs     f1, 0x198(r31)
	lfs      f1, lbl_805182F4@sda21(r2)
	lfs      f2, 0x198(r31)
	fcmpo    cr0, f2, f1
	ble      lbl_8013DAA4
	lfs      f0, lbl_805182D8@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_8013DAA4
	stfs     f1, 0x198(r31)
	b        lbl_8013DAC4

lbl_8013DAA4:
	lfs      f1, lbl_805182F8@sda21(r2)
	fcmpo    cr0, f2, f1
	bge      lbl_8013DAC4
	lfs      f0, lbl_805182D8@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8013DAC4
	stfs     f1, 0x198(r31)

lbl_8013DAC4:
	fmr      f1, f31
	lfs      f2, 0x19c(r31)
	bl       angDist__Fff
	fabs     f2, f1
	lfs      f0, lbl_805182E4@sda21(r2)
	frsp     f2, f2
	fcmpo    cr0, f2, f0
	bge      lbl_8013DAE8
	lfs      f1, lbl_805182B4@sda21(r2)

lbl_8013DAE8:
	lfs      f0, lbl_805182E8@sda21(r2)
	lfs      f2, lbl_805182EC@sda21(r2)
	fmuls    f1, f1, f0
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	ble      lbl_8013DB1C
	lfs      f0, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013DB18
	fmr      f1, f2
	b        lbl_8013DB1C

lbl_8013DB18:
	lfs      f1, lbl_805182F0@sda21(r2)

lbl_8013DB1C:
	lfs      f0, 0x19c(r31)
	fadds    f1, f0, f1
	bl       roundAng__Ff
	stfs     f1, 0x19c(r31)
	lfs      f1, lbl_805182FC@sda21(r2)
	lfs      f2, 0x19c(r31)
	fcmpo    cr0, f2, f1
	ble      lbl_8013DB50
	lfs      f0, lbl_805182D8@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_8013DB50
	stfs     f1, 0x19c(r31)
	b        lbl_8013DB70

lbl_8013DB50:
	lfs      f1, lbl_80518300@sda21(r2)
	fcmpo    cr0, f2, f1
	bge      lbl_8013DB70
	lfs      f0, lbl_805182D8@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8013DB70
	stfs     f1, 0x19c(r31)

lbl_8013DB70:
	lbz      r3, 0x1a4(r31)
	cmplwi   r3, 0
	beq      lbl_8013DBA8
	addi     r0, r3, -1
	stb      r0, 0x1a4(r31)
	lbz      r0, 0x1a4(r31)
	cmplwi   r0, 0
	bne      lbl_8013DBA8
	li       r0, 0
	lfs      f0, lbl_805182B4@sda21(r2)
	stw      r0, 0x1a0(r31)
	stfs     f0, 0x19c(r31)
	stfs     f0, 0x198(r31)
	stb      r0, 0x1a4(r31)

lbl_8013DBA8:
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
 * Address:	8013DBD4
 * Size:	000060
 */
void FakePiki::turnTo(Vector3f& targetPos)
{
	Vector3f diff = targetPos - mPosition;
	if (diff.z != 0.0f) {
		mFaceDir = roundAng(JMath::atanTable_.atan2_(diff.x, diff.z));
	}
}

/*
 * --INFO--
 * Address:	8013DC34
 * Size:	0003B4
 */
void FakePiki::moveVelocity()
{
	Sys::Triangle* tri   = mBounceTriangle;
	Vector3f newVelocity = Vector3f(0.0f);
	Vector3f oldVelocity = Vector3f(mVelocity);

	if (tri) {
		f32 oldSpeed     = _length(oldVelocity);
		f32 collSpeedDot = dot(oldVelocity, mCollisionPosition);
		Vector3f vec1    = oldVelocity - (mCollisionPosition * collSpeedDot);

		_normalise2(vec1);

		oldVelocity = vec1 * oldSpeed;

		int code = tri->mCode.getSlipCode();
		if (code == 0) {
			if (oldSpeed < 0.1f) {
				Vector3f scaleVec = Vector3f(0.0f, -_aiConstants->mGravity.mData * sys->mDeltaTime, 0.0f);
				f32 collScaleDot  = dot(scaleVec, mCollisionPosition);
				Vector3f vec2     = scaleVec - mCollisionPosition * collScaleDot;
				vec2              = Vector3f(-vec2.x, -vec2.y, -vec2.z);
				newVelocity       = vec2 * 1.0f;
			}
		} else {
			Vector3f scaleVec = Vector3f(0.0f, -_aiConstants->mGravity.mData * sys->mDeltaTime, 0.0f);
			f32 collScaleDot  = dot(scaleVec, mCollisionPosition);
			Vector3f vec2     = scaleVec - mCollisionPosition * collScaleDot;
			_normalise2(vec2);

			f32 scale;
			if (code == MapCode::Code::SlipCode2) {
				scale = 2.5f;
				if (isNavi() && ((Navi*)this)->getOlimarData()->hasItem(OlimarData::ODII_RepugnantAppendage)) {
					scale = 4.0f;
				}
			} else {
				scale = 1.0f;
			}

			newVelocity = (((vec2 * _aiConstants->mGravity.mData) * sys->mDeltaTime) * scale);
		}
	}

	Vector3f vec3 = (oldVelocity + mSimPosition) - mSimVelocity;

	_length2(vec3); // something's gotten commented out involving this

	vec3 *= sys->mDeltaTime / 0.1f;
	vec3         = vec3 + mSimVelocity;
	mSimVelocity = vec3;

	vec3         = mSimVelocity + newVelocity;
	mSimVelocity = vec3;

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
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stfd     f27, 0x30(r1)
	psq_st   f27, 56(r1), 0, qr0
	stfd     f26, 0x20(r1)
	psq_st   f26, 40(r1), 0, qr0
	stfd     f25, 0x10(r1)
	psq_st   f25, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f30, lbl_805182B4@sda21(r2)
	lwz      r3, 0xc8(r3)
	fmr      f29, f30
	lfs      f27, 0x1e4(r31)
	fmr      f28, f30
	cmplwi   r3, 0
	lfs      f26, 0x1e8(r31)
	lfs      f25, 0x1ec(r31)
	beq      lbl_8013DEFC
	fmuls    f0, f26, f26
	fmuls    f1, f25, f25
	fmadds   f0, f27, f27, f0
	fadds    f31, f1, f0
	fcmpo    cr0, f31, f30
	ble      lbl_8013DCCC
	ble      lbl_8013DCD0
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_8013DCD0

lbl_8013DCCC:
	fmr      f31, f30

lbl_8013DCD0:
	lfs      f2, 0xd0(r31)
	lfs      f3, 0xcc(r31)
	fmuls    f1, f26, f2
	lfs      f4, 0xd4(r31)
	lfs      f0, lbl_805182B4@sda21(r2)
	fmadds   f1, f27, f3, f1
	fmadds   f1, f25, f4, f1
	fmuls    f2, f2, f1
	fmuls    f3, f3, f1
	fmuls    f1, f4, f1
	fsubs    f4, f26, f2
	fsubs    f2, f27, f3
	fsubs    f3, f25, f1
	fmuls    f1, f4, f4
	fmuls    f5, f3, f3
	fmadds   f1, f2, f2, f1
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8013DD2C
	ble      lbl_8013DD30
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8013DD30

lbl_8013DD2C:
	fmr      f1, f0

lbl_8013DD30:
	lfs      f0, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013DD50
	lfs      f0, lbl_80518304@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f4, f4, f0
	fmuls    f3, f3, f0

lbl_8013DD50:
	fmuls    f27, f2, f31
	addi     r3, r3, 0x5c
	fmuls    f26, f4, f31
	fmuls    f25, f3, f31
	bl       getSlipCode__Q27MapCode4CodeFv
	cmpwi    r3, 0
	bne      lbl_8013DDE4
	lfs      f0, lbl_805182D4@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8013DEFC
	lwz      r4, _aiConstants__4Game@sda21(r13)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x28(r4)
	lfs      f0, 0x54(r3)
	lfs      f7, 0xd0(r31)
	fmuls    f0, f1, f0
	lfs      f4, lbl_805182B4@sda21(r2)
	lfs      f1, 0xcc(r31)
	lfs      f6, 0xd4(r31)
	fneg     f5, f0
	lfs      f2, lbl_80518304@sda21(r2)
	fmuls    f0, f5, f7
	fmadds   f0, f4, f1, f0
	fmadds   f0, f4, f6, f0
	fmuls    f3, f1, f0
	fmuls    f1, f7, f0
	fmuls    f0, f6, f0
	fsubs    f3, f4, f3
	fsubs    f1, f5, f1
	fsubs    f0, f4, f0
	fneg     f3, f3
	fneg     f1, f1
	fneg     f0, f0
	fmuls    f30, f3, f2
	fmuls    f29, f1, f2
	fmuls    f28, f0, f2
	b        lbl_8013DEFC

lbl_8013DDE4:
	lwz      r5, _aiConstants__4Game@sda21(r13)
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x28(r5)
	lfs      f0, 0x54(r4)
	lfs      f2, 0xd0(r31)
	fmuls    f0, f1, f0
	lfs      f3, lbl_805182B4@sda21(r2)
	lfs      f6, 0xcc(r31)
	lfs      f5, 0xd4(r31)
	fneg     f4, f0
	fmuls    f0, f4, f2
	fmadds   f0, f3, f6, f0
	fmadds   f0, f3, f5, f0
	fmuls    f1, f2, f0
	fmuls    f2, f6, f0
	fmuls    f0, f5, f0
	fsubs    f28, f4, f1
	fsubs    f30, f3, f2
	fsubs    f29, f3, f0
	fmuls    f0, f28, f28
	fmuls    f1, f29, f29
	fmadds   f0, f30, f30, f0
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f3
	ble      lbl_8013DE58
	ble      lbl_8013DE5C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8013DE5C

lbl_8013DE58:
	fmr      f1, f3

lbl_8013DE5C:
	lfs      f0, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013DE7C
	lfs      f0, lbl_80518304@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f30, f30, f0
	fmuls    f28, f28, f0
	fmuls    f29, f29, f0

lbl_8013DE7C:
	cmpwi    r3, 2
	bne      lbl_8013DEC4
	mr       r3, r31
	lfs      f31, lbl_80518308@sda21(r2)
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013DEC8
	mr       r3, r31
	bl       getOlimarData__Q24Game4NaviFv
	li       r4, 7
	bl       hasItem__Q24Game10OlimarDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013DEC8
	lfs      f31, lbl_8051830C@sda21(r2)
	b        lbl_8013DEC8

lbl_8013DEC4:
	lfs      f31, lbl_80518304@sda21(r2)

lbl_8013DEC8:
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lwz      r4, sys@sda21(r13)
	lfs      f0, 0x28(r3)
	lfs      f3, 0x54(r4)
	fmuls    f2, f30, f0
	fmuls    f1, f28, f0
	fmuls    f0, f29, f0
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	fmuls    f30, f2, f31
	fmuls    f29, f1, f31
	fmuls    f28, f0, f31

lbl_8013DEFC:
	lfs      f0, 0x1f4(r31)
	lfs      f2, 0x1f8(r31)
	fadds    f1, f26, f0
	lfs      f8, 0x204(r31)
	lfs      f0, 0x1f0(r31)
	fadds    f2, f25, f2
	lfs      f7, 0x208(r31)
	fsubs    f3, f1, f8
	fadds    f1, f27, f0
	lfs      f9, 0x200(r31)
	fsubs    f4, f2, f7
	lfs      f0, lbl_805182B4@sda21(r2)
	fmuls    f5, f3, f3
	fsubs    f2, f1, f9
	fmuls    f6, f4, f4
	fmadds   f1, f2, f2, f5
	fadds    f1, f6, f1
	fcmpo    cr0, f1, f0
	lwz      r3, sys@sda21(r13)
	lfs      f0, lbl_805182D4@sda21(r2)
	lfs      f1, 0x54(r3)
	fdivs    f0, f1, f0
	fmuls    f2, f2, f0
	fmuls    f1, f3, f0
	fmuls    f0, f4, f0
	fadds    f2, f9, f2
	fadds    f1, f8, f1
	fadds    f0, f7, f0
	stfs     f2, 0x200(r31)
	stfs     f1, 0x204(r31)
	stfs     f0, 0x208(r31)
	lfs      f0, 0x200(r31)
	lfs      f1, 0x204(r31)
	fadds    f0, f0, f30
	lfs      f2, 0x208(r31)
	fadds    f1, f1, f29
	fadds    f2, f2, f28
	stfs     f0, 0x200(r31)
	stfs     f1, 0x204(r31)
	stfs     f2, 0x208(r31)
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	psq_l    f27, 56(r1), 0, qr0
	lfd      f27, 0x30(r1)
	psq_l    f26, 40(r1), 0, qr0
	lfd      f26, 0x20(r1)
	psq_l    f25, 24(r1), 0, qr0
	lfd      f25, 0x10(r1)
	lwz      r0, 0x84(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013DFE8
 * Size:	0000B4
 */
void FakePiki::moveRotation()
{
	if (useMoveRotation()) {
		f32 delta = sys->mDeltaTime;
		f32 X     = mVelocity.x * mVelocity.x;
		f32 Z     = mVelocity.z * mVelocity.z;
		if (X + Z > 1.0f) {
			f32 dist = angDist(JMath::atanTable_.atan2_(mVelocity.x, mVelocity.z), mFaceDir);
			mFaceDir += 10.0f * (delta * (0.8f * dist));
			mFaceDir = roundAng(mFaceDir);
		}
	}
}

/*
 * --INFO--
 * Address:	8013E09C
 * Size:	000014
 */
bool FakePiki::useMoveRotation() { return !isFPFlag(FPFLAGS_MoveRotationDisabled); }

/*
 * --INFO--
 * Address:	8013E0B0
 * Size:	0006A4
 */
void FakePiki::move(f32 p1)
{
	f32 collRad  = getMapCollisionRadius();
	Vector3f pos = mPosition;
	pos.y += collRad;

	if (isFPFlag(FPFLAGS_Unk5) && mModel) {
		pos = mModel->mJoints[1].getWorldMatrix()->getBasis(3);
	}

	Sys::Sphere sphere(pos, collRad);

	MoveInfo info(&sphere, nullptr, 0.0f);

	if (useMapCollision()) {
		mapMgr->traceMove(info, p1); // this returns *something* that gets stored in 0x24C
	}
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stw      r31, 0xec(r1)
	stw      r30, 0xe8(r1)
	stw      r29, 0xe4(r1)
	stw      r28, 0xe0(r1)
	lwz      r12, 0(r3)
	fmr      f28, f1
	mr       r31, r3
	lwz      r12, 0x200(r12)
	mtctr    r12
	bctrl
	fmr      f31, f1
	lwz      r0, 0x17c(r31)
	lfs      f1, 0x210(r31)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	lfs      f0, 0x20c(r31)
	fadds    f1, f1, f31
	lfs      f2, 0x214(r31)
	beq      lbl_8013E150
	lwz      r3, 0x174(r31)
	cmplwi   r3, 0
	beq      lbl_8013E150
	lwz      r3, 0x10(r3)
	addi     r3, r3, 0x3c
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f30, 0xc(r3)
	lfs      f29, 0x2c(r3)
	fmr      f0, f30
	lfs      f1, 0x1c(r3)
	fmr      f2, f29

lbl_8013E150:
	stfs     f0, 0x24(r1)
	lis      r3, sincosTable___5JMath@ha
	lfs      f5, lbl_805182B4@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	stfs     f1, 0x28(r1)
	li       r5, 0
	lfs      f0, lbl_80518314@sda21(r2)
	addi     r7, r1, 0x24
	stfs     f2, 0x2c(r1)
	addi     r6, r1, 0x18
	li       r0, -1
	mr       r3, r31
	stfs     f31, 0x30(r1)
	lfs      f7, 0x180(r31)
	stfs     f5, 0x120(r31)
	lfs      f3, 0x208(r31)
	lfs      f2, 0x124(r31)
	lfs      f4, 0x204(r31)
	lfs      f1, 0x120(r31)
	fadds    f6, f3, f2
	lfs      f3, 0x200(r31)
	lfs      f2, 0x11c(r31)
	fadds    f4, f4, f1
	lfs      f1, 0x800(r4)
	fadds    f2, f3, f2
	stw      r5, 0x48(r1)
	stfs     f4, 0x1c(r1)
	stfs     f2, 0x18(r1)
	stfs     f6, 0x20(r1)
	stw      r7, 0x34(r1)
	stw      r6, 0x38(r1)
	stfs     f7, 0x3c(r1)
	stfs     f5, 0x40(r1)
	stw      r5, 0x44(r1)
	stw      r5, 0x78(r1)
	stb      r5, 0xa8(r1)
	stb      r5, 0x4d(r1)
	stb      r5, 0x4c(r1)
	stw      r5, 0x7c(r1)
	stb      r5, 0xc4(r1)
	stw      r5, 0xc8(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	stw      r0, 0xcc(r1)
	stw      r5, 0x80(r1)
	stb      r5, 0x4e(r1)
	stw      r31, 0x48(r1)
	stw      r5, 0x248(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x1ec(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E30C
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmr      f1, f28
	addi     r4, r1, 0x34
	lwz      r12, 4(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24c(r31)
	addi     r0, r31, 0x200
	lfs      f0, 0x18(r1)
	stfs     f0, 0x200(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x204(r31)
	lfs      f0, 0x20(r1)
	stfs     f0, 0x208(r31)
	lwz      r4, 0xcc(r1)
	stw      r0, 0x38(r1)
	cmpwi    r4, -1
	beq      lbl_8013E354
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8013E354
	sth      r4, 0x18c(r31)
	lwz      r0, 0xcc(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	extsh    r4, r0
	bl       getMapRoom__Q24Game10RoomMapMgrFs
	mr       r30, r3
	lbz      r0, 0xbc(r3)
	cmplwi   r0, 0
	bne      lbl_8013E2C4
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r0, 0xcc(r1)
	lwz      r3, 8(r3)
	extsh    r4, r0
	bl       openRoom__Q24Game8RouteMgrFs
	li       r0, 1
	stb      r0, 0xbc(r30)

lbl_8013E2C4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E354
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 0
	lwz      r3, 0x44(r3)
	cmpwi    r3, 1
	beq      lbl_8013E2FC
	cmpwi    r3, 3
	bne      lbl_8013E300

lbl_8013E2FC:
	li       r0, 1

lbl_8013E300:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8013E354
	b        lbl_8013E354

lbl_8013E30C:
	lfs      f0, 0x200(r31)
	li       r0, 0
	lwz      r3, 0x34(r1)
	lfs      f2, 0x204(r31)
	fmuls    f0, f0, f28
	lfs      f1, 0(r3)
	lfs      f4, 0x208(r31)
	fmuls    f2, f2, f28
	lfs      f3, 4(r3)
	fadds    f0, f1, f0
	lfs      f5, 8(r3)
	fmuls    f1, f4, f28
	fadds    f2, f3, f2
	stfs     f0, 0(r3)
	fadds    f0, f5, f1
	stfs     f2, 4(r3)
	stfs     f0, 8(r3)
	stw      r0, 0x78(r1)

lbl_8013E354:
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	bne      lbl_8013E380
	lwz      r4, 0x78(r1)
	cmplwi   r4, 0
	beq      lbl_8013E380
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0xe8(r12)
	mtctr    r12
	bctrl

lbl_8013E380:
	lwz      r0, 0x78(r1)
	stw      r0, 0xc8(r31)
	lfs      f0, 0x84(r1)
	stfs     f0, 0xcc(r31)
	lfs      f0, 0x88(r1)
	stfs     f0, 0xd0(r31)
	lfs      f0, 0x8c(r1)
	stfs     f0, 0xd4(r31)
	lwz      r0, 0x184(r31)
	cmplwi   r0, 0
	bne      lbl_8013E3D0
	lwz      r0, 0x7c(r1)
	cmplwi   r0, 0
	beq      lbl_8013E3D0
	mr       r3, r31
	addi     r4, r1, 0x90
	lwz      r12, 0(r31)
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl

lbl_8013E3D0:
	lwz      r3, platMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8013E3E8
	fmr      f1, f28
	addi     r4, r1, 0x34
	bl       traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof

lbl_8013E3E8:
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	bne      lbl_8013E434
	lwz      r4, 0x78(r1)
	cmplwi   r4, 0
	beq      lbl_8013E434
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0xe8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x78(r1)
	stw      r0, 0xc8(r31)
	lfs      f0, 0x84(r1)
	stfs     f0, 0xcc(r31)
	lfs      f0, 0x88(r1)
	stfs     f0, 0xd0(r31)
	lfs      f0, 0x8c(r1)
	stfs     f0, 0xd4(r31)

lbl_8013E434:
	lwz      r0, 0x184(r31)
	cmplwi   r0, 0
	bne      lbl_8013E464
	lwz      r0, 0x7c(r1)
	cmplwi   r0, 0
	beq      lbl_8013E464
	mr       r3, r31
	addi     r4, r1, 0x90
	lwz      r12, 0(r31)
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl

lbl_8013E464:
	lwz      r3, 0xc8(r31)
	cmplwi   r3, 0
	beq      lbl_8013E484
	lfs      f1, 0x10(r3)
	lfs      f0, lbl_80518314@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013E484
	stw      r3, 0x248(r31)

lbl_8013E484:
	lwz      r0, 0x17c(r31)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8013E4E4
	lfs      f0, 0x24(r1)
	lfs      f3, 0x2c(r1)
	fsubs    f1, f0, f30
	lfs      f2, 0x20c(r31)
	lfs      f0, lbl_805182B4@sda21(r2)
	fsubs    f3, f3, f29
	fadds    f1, f2, f1
	stfs     f1, 0x20c(r31)
	lfs      f1, 0x210(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x210(r31)
	lfs      f0, 0x214(r31)
	fadds    f0, f0, f3
	stfs     f0, 0x214(r31)
	lfs      f0, 0x20c(r31)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x210(r31)
	stfs     f0, 0x28(r1)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x2c(r1)
	b        lbl_8013E508

lbl_8013E4E4:
	lfs      f0, 0x24(r1)
	stfs     f0, 0x20c(r31)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x210(r31)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0x214(r31)
	lfs      f0, 0x210(r31)
	fsubs    f0, f0, f31
	stfs     f0, 0x210(r31)

lbl_8013E508:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E588
	lfs      f0, 0x20c(r31)
	addi     r4, r1, 8
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 8(r1)
	lfs      f0, 0x210(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x10(r1)
	stfs     f31, 0x14(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0x20c(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x210(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x214(r31)
	lfs      f0, 0x20c(r31)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x210(r31)
	stfs     f0, 0x28(r1)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x2c(r1)

lbl_8013E588:
	lfs      f0, 0x24(r1)
	stfs     f0, 0x218(r31)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x21c(r31)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0x220(r31)
	lfs      f0, 0x30(r1)
	stfs     f0, 0x224(r31)
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	beq      lbl_8013E714
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013E714
	lfs      f1, 0x23c(r31)
	lfs      f0, 0x210(r31)
	lfs      f3, 0x238(r31)
	fsubs    f4, f1, f0
	lfs      f2, 0x20c(r31)
	lfs      f1, 0x240(r31)
	lfs      f0, 0x214(r31)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_805182B4@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8013E620
	ble      lbl_8013E624
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8013E624

lbl_8013E620:
	fmr      f1, f0

lbl_8013E624:
	lfs      f0, lbl_80518304@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8013E714
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E654
	lfs      f28, lbl_80518318@sda21(r2)
	b        lbl_8013E6BC

lbl_8013E654:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	li       r29, 0
	addi     r28, r3, formationPikis__Q24Game8GameStat@l
	mr       r30, r29

lbl_8013E664:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	add      r29, r29, r3
	cmpwi    r30, 7
	addi     r28, r28, 0x20
	blt      lbl_8013E664
	xoris    r3, r29, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xd4(r1)
	lfd      f2, lbl_80518328@sda21(r2)
	stw      r0, 0xd0(r1)
	lfs      f1, lbl_80518320@sda21(r2)
	lfd      f0, 0xd0(r1)
	lfs      f3, lbl_8051831C@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_80518318@sda21(r2)
	fdivs    f1, f2, f1
	fmadds   f28, f3, f1, f0

lbl_8013E6BC:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xd4(r1)
	lfd      f2, lbl_80518328@sda21(r2)
	stw      r0, 0xd0(r1)
	lfs      f0, lbl_80518324@sda21(r2)
	lfd      f1, 0xd0(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f28
	cror     2, 0, 2
	bne      lbl_8013E714
	lwz      r3, 0xc8(r31)
	lbz      r0, 0x5c(r3)
	cmplwi   r0, 8
	bne      lbl_8013E70C
	addi     r3, r31, 0x20c
	bl       "createSimpleWalkwater__3efxFR10Vector3<f>"
	b        lbl_8013E714

lbl_8013E70C:
	addi     r3, r31, 0x20c
	bl       "createSimpleWalksmoke__3efxFR10Vector3<f>"

lbl_8013E714:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	lwz      r31, 0xec(r1)
	lwz      r30, 0xe8(r1)
	lwz      r29, 0xe4(r1)
	lwz      r0, 0x134(r1)
	lwz      r28, 0xe0(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013E790
 * Size:	000014
 */
bool FakePiki::inWater() { return (mWaterBox != nullptr); }

/*
 * --INFO--
 * Address:	8013E7A4
 * Size:	000004
 */
void FakePiki::wallCallback(Vector3f&) { }

/*
 * --INFO--
 * Address:	8013E7A8
 * Size:	000014
 */
bool FakePiki::useMapCollision() { return !isFPFlag(FPFLAGS_MapCollisionDisabled); }

/*
 * --INFO--
 * Address:	8013E7BC
 * Size:	000008
 */
f32 FakePiki::getMapCollisionRadius() { return 8.5f; }

/*
 * --INFO--
 * Address:	8013E7C4
 * Size:	0000BC
 */
void FakePiki::doEntry()
{
	doColorChange();

	if (mLod.isFlag(AILOD_IsVisible)) {
		mModel->show();

	} else {
		if (BaseHIOParms::sEntryOpt && !gameSystem->isMultiplayerMode()) {
			return;
		}

		mModel->hide();
	}

	mModel->mJ3dModel->entry();
}

/*
 * --INFO--
 * Address:	8013E880
 * Size:	000004
 */
void FakePiki::doColorChange() { }

/*
 * --INFO--
 * Address:	8013E884
 * Size:	000494
 */
void FakePiki::doAnimation()
{
	sys->mTimers->_start("doa1", true);
	AILODParm lodParm;
	lodParm.mFar   = 0.01f;
	lodParm.mClose = 0.009f;
	updateCell();
	updateLOD(lodParm);
	sys->mTimers->_stop("doa1");
	if (isMovieMotion()) {
		mAnimSpeed = 30.0f;
	}
	if (isPiki()) {
		static_cast<Piki*>(this)->doped();
	}
	if (gameSystem->mIsFrozen == false) {
		mAnimator.mSelfAnimator.animate(sys->getFrameLength());
	} else {
		mAnimator.mBoundAnimator.animate(sys->getFrameLength());
	}
	if (isPiki() && mLod.isFlag(3)) {
		JUT_ASSERTLINE(1694, mModel != nullptr, "zama--------n\n", getCreatureID());
		mModel->getJ3DModel()->getModelData()->getJointTree().getJointNodePointer(0)->setMtxCalc(nullptr);
		mModel->getJ3DModel()->getModelData()->getJointTree().getJointNodePointer(4)->setMtxCalc(nullptr);
	} else {
		mModel->getJ3DModel()->getModelData()->getJointTree().getJointNodePointer(0)->setMtxCalc(mAnimator.mBoundAnimator.getCalc());
		mModel->getJ3DModel()->getModelData()->getJointTree().getJointNodePointer(4)->setMtxCalc(mAnimator.mSelfAnimator.getCalc());
	}
	SysShape::Animator::verbose = 0;
	mPositionBeforeMovie        = mPosition;
	if ((isMovieExtra() || !isMovieActor()) && mFakePikiBounceTriangle != nullptr) {
		if (useMoveVelocity() || mBounceTriangle == nullptr) {
			moveVelocity();
		}
		if (useMoveRotation()) {
			if (1.0f < SQUARE(mVelocity.z) + SQUARE(mVelocity.x)) {
				mFaceDir
				    = (sys->getFrameLength() * (angDist(JMAAtan2Radian(mVelocity.z, mVelocity.x), mFaceDir) * 0.8f)) * 10.0f + mFaceDir;
				mFaceDir = roundAng(mFaceDir);
			}
		}
	}
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	mWaterBox = checkWater(mWaterBox, boundingSphere);
	if (mapMgr != nullptr) {
		mSimVelocity.y = -(sys->getFrameLength() * _aiConstants->mGravity.mData - mSimVelocity.y);
	}
	updateTrMatrix();
	if (isNavi()) {
		static_cast<Navi*>(this)->viewMakeMatrix(mBaseTrMatrix);
		mPosition = mBaseTrMatrix.getPosition();
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->getJ3DModel()->mPosMtx);
		sCurrNeckTheta = mNeckTheta;
		sCurrNeckPhi   = mNeckPhi;
		sys->mTimers->_start("calc-coll", true);
		mModel->getJ3DModel()->calc();
		mCollTree->update();
		sys->mTimers->_stop("calc-coll");
		if (mDoAnimCallback != nullptr) {
			mDoAnimCallback->invoke();
		}
	}
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	lwz      r5, sys@sda21(r13)
	mr       r30, r3
	lis      r6, lbl_8047C708@ha
	addi     r4, r2, lbl_80518330@sda21
	lwz      r3, 0x28(r5)
	addi     r31, r6, lbl_8047C708@l
	li       r5, 1
	bl       _start__9SysTimersFPcb
	addi     r3, r1, 0x18
	bl       __ct__Q24Game9AILODParmFv
	lfs      f1, lbl_805182C0@sda21(r2)
	mr       r3, r30
	lfs      f0, lbl_80518338@sda21(r2)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       updateCell__Q24Game8CreatureFv
	mr       r3, r30
	addi     r4, r1, 0x18
	bl       updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518330@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	mr       r3, r30
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0(r30)
	lfs      f31, 0x54(r4)
	lwz      r12, 0xc0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E934
	lfs      f0, lbl_805182B8@sda21(r2)
	stfs     f0, 0x234(r30)

lbl_8013E934:
	mr       r3, r30
	lfs      f0, 0x234(r30)
	lwz      r12, 0(r30)
	fmuls    f30, f0, f31
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E970
	mr       r3, r30
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013E970
	lfs      f0, lbl_8051833C@sda21(r2)
	fmuls    f30, f30, f0

lbl_8013E970:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x4a(r3)
	cmplwi   r0, 0
	bne      lbl_8013E9B8
	addi     r3, r30, 0x1ac
	fmr      f1, f30
	lwz      r12, 0x1ac(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	addi     r3, r30, 0x1c8
	stb      r0, verbose__Q28SysShape8Animator@sda21(r13)
	fmr      f1, f30
	lwz      r12, 0x1c8(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8013E9B8:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013EA50
	lbz      r0, 0xd8(r30)
	clrlwi   r0, r0, 0x1e
	cmpwi    r0, 1
	blt      lbl_8013EA50
	lwz      r0, 0x174(r30)
	cmplwi   r0, 0
	bne      lbl_8013EA18
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x18
	addi     r5, r31, 0x40
	li       r4, 0x69e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8013EA18:
	lwz      r3, 0x174(r30)
	li       r0, 0
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x28(r3)
	lwz      r3, 0(r3)
	stw      r0, 0x54(r3)
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x28(r3)
	lwz      r3, 0x10(r3)
	stw      r0, 0x54(r3)
	b        lbl_8013EAA8

lbl_8013EA50:
	addi     r3, r30, 0x1c8
	lwz      r29, 0x174(r30)
	lwz      r12, 0x1c8(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 8(r29)
	lwz      r4, 4(r4)
	lwz      r4, 0x28(r4)
	lwz      r4, 0(r4)
	stw      r3, 0x54(r4)
	addi     r3, r30, 0x1ac
	lwz      r12, 0x1ac(r30)
	lwz      r29, 0x174(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 8(r29)
	lwz      r4, 4(r4)
	lwz      r4, 0x28(r4)
	lwz      r4, 0x10(r4)
	stw      r3, 0x54(r4)

lbl_8013EAA8:
	li       r0, 0
	mr       r3, r30
	stb      r0, verbose__Q28SysShape8Animator@sda21(r13)
	lfs      f0, 0x20c(r30)
	stfs     f0, 0x238(r30)
	lfs      f0, 0x210(r30)
	stfs     f0, 0x23c(r30)
	lfs      f0, 0x214(r30)
	stfs     f0, 0x240(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013EB00
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013EBBC

lbl_8013EB00:
	lwz      r0, 0x248(r30)
	cmplwi   r0, 0
	beq      lbl_8013EBBC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1e4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013EB34
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	bne      lbl_8013EB3C

lbl_8013EB34:
	mr       r3, r30
	bl       moveVelocity__Q24Game8FakePikiFv

lbl_8013EB3C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1d4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013EBBC
	lfs      f1, 0x1e4(r30)
	lfs      f2, 0x1ec(r30)
	fmuls    f4, f1, f1
	lwz      r3, sys@sda21(r13)
	fmuls    f3, f2, f2
	lfs      f0, lbl_80518304@sda21(r2)
	lfs      f30, 0x54(r3)
	fadds    f3, f4, f3
	fcmpo    cr0, f3, f0
	ble      lbl_8013EBBC
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lfs      f2, 0x1fc(r30)
	bl       angDist__Fff
	lfs      f0, lbl_80518310@sda21(r2)
	lfs      f2, lbl_805182BC@sda21(r2)
	fmuls    f1, f0, f1
	lfs      f0, 0x1fc(r30)
	fmuls    f1, f30, f1
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x1fc(r30)
	lfs      f1, 0x1fc(r30)
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)

lbl_8013EBBC:
	mr       r3, r30
	addi     r4, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x190(r30)
	mr       r3, r30
	addi     r5, r1, 8
	bl       checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere
	stw      r3, 0x190(r30)
	lwz      r0, mapMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8013EC08
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lfs      f0, 0x204(r30)
	lfs      f1, 0x28(r3)
	fnmsubs  f0, f31, f1, f0
	stfs     f0, 0x204(r30)

lbl_8013EC08:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013EC68
	lwz      r3, 0x250(r30)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_8013EC68
	addi     r4, r30, 0x138
	bl       viewMakeMatrix__Q24Game10PelletViewFR7Matrixf
	lfs      f1, 0x154(r30)
	lfs      f2, 0x164(r30)
	lfs      f0, 0x144(r30)
	stfs     f0, 0x20c(r30)
	stfs     f1, 0x210(r30)
	stfs     f2, 0x214(r30)

lbl_8013EC68:
	lwz      r4, 0x174(r30)
	addi     r3, r30, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lfs      f0, 0x198(r30)
	addi     r4, r31, 0x50
	lwz      r3, sys@sda21(r13)
	li       r5, 1
	stfs     f0, sCurrNeckTheta__Q24Game8FakePiki@sda21(r13)
	lfs      f0, 0x19c(r30)
	stfs     f0, sCurrNeckPhi__Q24Game8FakePiki@sda21(r13)
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r30)
	bl       update__8CollTreeFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x50
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r3, 0x188(r30)
	cmplwi   r3, 0
	beq      lbl_8013ECEC
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8013ECEC:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x64(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013ED18
 * Size:	000024
 */
void FakePiki::getBoundingSphere(Sys::Sphere& sphere)
{
	sphere.mPosition = mBoundingSphere.mPosition;
	sphere.mRadius   = mBoundingSphere.mRadius;
}

/*
 * --INFO--
 * Address:	8013ED3C
 * Size:	000014
 */
bool FakePiki::useMoveVelocity() { return !isFPFlag(FPFLAGS_MoveVelocityDisabled); }

/*
 * --INFO--
 * Address:	8013ED50
 * Size:	000078
 */
void FakePiki::updateTrMatrix()
{
	if (useUpdateTrMatrix() && !isStickTo()) {
		Vector3f rotation(0.0f, mFaceDir, 0.0f);
		mBaseTrMatrix.makeSRT(mScale, rotation, mPosition);
	}
}

/*
 * --INFO--
 * Address:	8013EDDC
 * Size:	000560
 */
void FakePiki::doSimulation(f32)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	lwz      r12, 0(r3)
	fmr      f31, f1
	mr       r31, r3
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013EF18
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013EE7C
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lbz      r0, 0x39(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8013EEE0
	lfs      f0, lbl_805182B4@sda21(r2)
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)
	lfs      f0, 0x20c(r31)
	stfs     f0, 0x218(r31)
	lfs      f0, 0x210(r31)
	stfs     f0, 0x21c(r31)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x220(r31)
	b        lbl_8013F31C

lbl_8013EE7C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013EEE0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lbz      r0, 0x5c(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8013EEE0
	lfs      f0, lbl_805182B4@sda21(r2)
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)
	lfs      f0, 0x20c(r31)
	stfs     f0, 0x218(r31)
	lfs      f0, 0x210(r31)
	stfs     f0, 0x21c(r31)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x220(r31)
	b        lbl_8013F31C

lbl_8013EEE0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013EF18
	lfs      f0, lbl_805182B4@sda21(r2)
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)

lbl_8013EF18:
	lwz      r0, 0x194(r31)
	cmplwi   r0, 0
	beq      lbl_8013EF8C
	lfs      f0, 0x200(r31)
	mr       r3, r31
	lfs      f2, 0x204(r31)
	fmuls    f0, f0, f31
	lfs      f1, 0x20c(r31)
	lfs      f4, 0x208(r31)
	fmuls    f2, f2, f31
	lfs      f3, 0x210(r31)
	fadds    f0, f1, f0
	lfs      f5, 0x214(r31)
	fmuls    f1, f4, f31
	fadds    f2, f3, f2
	stfs     f0, 0x20c(r31)
	fadds    f0, f5, f1
	stfs     f2, 0x210(r31)
	stfs     f0, 0x214(r31)
	bl       updateStomach__Q24Game8FakePikiFv
	mr       r3, r31
	bl       updateCell__Q24Game8CreatureFv
	lfs      f0, 0x20c(r31)
	stfs     f0, 0x218(r31)
	lfs      f0, 0x210(r31)
	stfs     f0, 0x21c(r31)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x220(r31)
	b        lbl_8013F31C

lbl_8013EF8C:
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013F054
	lfs      f4, 0x1fc(r31)
	lfs      f0, lbl_805182B4@sda21(r2)
	fmr      f1, f4
	fcmpo    cr0, f4, f0
	bge      lbl_8013EFB4
	fneg     f1, f4

lbl_8013EFB4:
	lfs      f2, lbl_805182CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_805182B4@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f4, f0
	fctiwz   f0, f1
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f3, 4(r3)
	bge      lbl_8013F00C
	lfs      f0, lbl_805182C8@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_8013F024

lbl_8013F00C:
	fmuls    f0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_8013F024:
	lfs      f0, lbl_805182B4@sda21(r2)
	mr       r3, r31
	stfs     f1, 0x24(r1)
	addi     r4, r1, 0x24
	stfs     f0, 0x28(r1)
	stfs     f3, 0x2c(r1)
	bl       "updateStick__Q24Game8CreatureFR10Vector3<f>"
	mr       r3, r31
	bl       updateCell__Q24Game8CreatureFv
	lfs      f0, lbl_805182B8@sda21(r2)
	stfs     f0, 0x234(r31)
	b        lbl_8013F0AC

lbl_8013F054:
	mr       r3, r31
	fmr      f1, f31
	lwz      r12, 0(r31)
	lwz      r12, 0x1d0(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013F0A4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013F0AC

lbl_8013F0A4:
	mr       r3, r31
	bl       updateWalkAnimation__Q24Game8FakePikiFv

lbl_8013F0AC:
	lfs      f2, 0x200(r31)
	lfs      f1, 0x204(r31)
	fmuls    f0, f2, f2
	lfs      f3, 0x208(r31)
	fmuls    f4, f1, f1
	lfs      f1, lbl_805182B4@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8013F0F4
	fmadds   f0, f2, f2, f4
	fadds    f4, f3, f0
	fcmpo    cr0, f4, f1
	ble      lbl_8013F0F8
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_8013F0F8

lbl_8013F0F4:
	fmr      f4, f1

lbl_8013F0F8:
	lfs      f0, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_8013F134
	lfs      f1, lbl_80518304@sda21(r2)
	lfs      f0, 0x200(r31)
	fdivs    f1, f1, f4
	fmuls    f0, f0, f1
	stfs     f0, 0x200(r31)
	lfs      f0, 0x204(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x204(r31)
	lfs      f0, 0x208(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x208(r31)
	b        lbl_8013F138

lbl_8013F134:
	fmr      f4, f0

lbl_8013F138:
	lfs      f2, 0x11c(r31)
	lfs      f1, 0x120(r31)
	fmuls    f0, f2, f2
	lfs      f3, 0x124(r31)
	fmuls    f5, f1, f1
	lfs      f1, lbl_805182B4@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f5
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8013F180
	fmadds   f0, f2, f2, f5
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8013F184
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_8013F184

lbl_8013F180:
	fmr      f0, f1

lbl_8013F184:
	fcmpo    cr0, f4, f0
	ble      lbl_8013F1C8
	fsubs    f4, f4, f0
	lfs      f0, 0x200(r31)
	lfs      f2, 0x204(r31)
	lfs      f3, 0x208(r31)
	fmuls    f1, f0, f4
	lfs      f0, lbl_805182B4@sda21(r2)
	fmuls    f2, f2, f4
	fmuls    f3, f3, f4
	stfs     f1, 0x200(r31)
	stfs     f2, 0x204(r31)
	stfs     f3, 0x208(r31)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)
	b        lbl_8013F1FC

lbl_8013F1C8:
	lfs      f0, 0x200(r31)
	lfs      f2, 0x204(r31)
	fmuls    f1, f0, f4
	lfs      f3, 0x208(r31)
	fmuls    f2, f2, f4
	lfs      f0, lbl_805182B4@sda21(r2)
	fmuls    f3, f3, f4
	stfs     f1, 0x200(r31)
	stfs     f2, 0x204(r31)
	stfs     f3, 0x208(r31)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)

lbl_8013F1FC:
	lfs      f0, 0x20c(r31)
	li       r0, 1
	mr       r3, r31
	addi     r4, r1, 8
	stfs     f0, 0x218(r31)
	lfs      f0, 0x210(r31)
	stfs     f0, 0x21c(r31)
	lfs      f0, 0x214(r31)
	stfs     f0, 0x220(r31)
	stb      r0, 8(r1)
	bl       checkHell__Q24Game8CreatureFRQ34Game8Creature12CheckHellArg
	cmpwi    r3, 1
	bne      lbl_8013F31C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013F260
	mr       r3, r31
	li       r4, 0x2837
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb
	b        lbl_8013F31C

lbl_8013F260:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013F31C
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r0, 0xb0(r3)
	cmplwi   r0, 0
	mr       r30, r0
	bne      lbl_8013F294
	lwz      r30, 0xac(r3)

lbl_8013F294:
	cmplwi   r30, 0
	bne      lbl_8013F2AC
	lhz      r0, 0x2dc(r31)
	subfic   r4, r0, 1
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	mr       r30, r3

lbl_8013F2AC:
	cmplwi   r30, 0
	bne      lbl_8013F2D0
	lis      r3, lbl_8047C720@ha
	lis      r5, lbl_8047C764@ha
	addi     r3, r3, lbl_8047C720@l
	li       r4, 0x789
	addi     r5, r5, lbl_8047C764@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8013F2D0:
	mr       r4, r30
	addi     r3, r1, 0xc
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x10(r1)
	mr       r3, r31
	lfs      f0, lbl_80518340@sda21(r2)
	addi     r4, r1, 0x18
	lfs      f3, 0xc(r1)
	li       r5, 0
	lfs      f1, 0x14(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x1c(r1)
	stfs     f3, 0x18(r1)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x1c(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_8013F31C:
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F33C
 * Size:	00001C
 */
Vector3f BaseItem::getPosition() { return mPosition; }

/*
 * --INFO--
 * Address:	8013F358
 * Size:	00000C
 */
void FakePiki::initCaptureStomach() { mTargetCollObj = nullptr; }

/*
 * --INFO--
 * Address:	8013F364
 * Size:	000008
 */
void FakePiki::startCaptureStomach(CollPart* collPart) { mTargetCollObj = collPart; }

/*
 * --INFO--
 * Address:	8013F36C
 * Size:	00000C
 */
void FakePiki::endCaptureStomach() { mTargetCollObj = nullptr; }

/*
 * --INFO--
 * Address:	8013F378
 * Size:	000158
 */
void FakePiki::updateStomach()
{
	CollPart* stomach = mTargetCollObj;
	if (!stomach) {
		return;
	}

	Vector3f sep = mPosition - mTargetCollObj->mPosition;
	f32 dist     = sep.normalise();

	f32 rad = stomach->mRadius - 8.5f;

	if (dist > rad) {
		mPosition = stomach->mPosition + sep * rad;

		Vector3f simVel = mSimVelocity;
		// f32 factor = ;
		mSimVelocity = simVel - sep * (1.1f * dot(simVel, sep));

		Vector3f sep2 = Vector3f(mPosition.y - mTargetCollObj->mPosition.y, mPosition.z - mTargetCollObj->mPosition.z,
		                         mPosition.x - mTargetCollObj->mPosition.x);
		_length2(sep2);
	}
	/*
	lwz      r4, 0x194(r3)
	cmplwi   r4, 0
	beqlr
	lfs      f1, 0x210(r3)
	lfs      f0, 0x50(r4)
	lfs      f2, 0x214(r3)
	fsubs    f0, f1, f0
	lfs      f1, 0x54(r4)
	lfs      f3, 0x20c(r3)
	fsubs    f1, f2, f1
	lfs      f2, 0x4c(r4)
	fmuls    f4, f0, f0
	fsubs    f9, f3, f2
	lfs      f2, lbl_805182B4@sda21(r2)
	fmuls    f5, f1, f1
	fmadds   f3, f9, f9, f4
	fadds    f4, f5, f3
	fcmpo    cr0, f4, f2
	ble      lbl_8013F3D4
	ble      lbl_8013F3D8
	frsqrte  f2, f4
	fmuls    f4, f2, f4
	b        lbl_8013F3D8

lbl_8013F3D4:
	fmr      f4, f2

lbl_8013F3D8:
	lfs      f2, lbl_805182B4@sda21(r2)
	fcmpo    cr0, f4, f2
	ble      lbl_8013F3FC
	lfs      f2, lbl_80518304@sda21(r2)
	fdivs    f2, f2, f4
	fmuls    f9, f9, f2
	fmuls    f0, f0, f2
	fmuls    f1, f1, f2
	b        lbl_8013F400

lbl_8013F3FC:
	fmr      f4, f2

lbl_8013F400:
	lfs      f3, 0x1c(r4)
	lfs      f2, lbl_805182B0@sda21(r2)
	fsubs    f7, f3, f2
	fcmpo    cr0, f4, f7
	blelr
	fmuls    f2, f9, f7
	lfs      f3, 0x4c(r4)
	fmuls    f5, f0, f7
	lfs      f6, 0x50(r4)
	fmuls    f7, f1, f7
	lfs      f8, 0x54(r4)
	fadds    f3, f3, f2
	lfs      f4, lbl_80518344@sda21(r2)
	fadds    f5, f6, f5
	lfs      f2, lbl_805182B4@sda21(r2)
	fadds    f6, f8, f7
	stfs     f3, 0x20c(r3)
	stfs     f5, 0x210(r3)
	stfs     f6, 0x214(r3)
	lfs      f7, 0x204(r3)
	lfs      f8, 0x200(r3)
	fmuls    f3, f7, f0
	lfs      f6, 0x208(r3)
	fmadds   f3, f8, f9, f3
	fmadds   f3, f6, f1, f3
	fmuls    f5, f4, f3
	fmuls    f4, f9, f5
	fmuls    f3, f0, f5
	fmuls    f0, f1, f5
	fsubs    f4, f8, f4
	fsubs    f1, f7, f3
	fsubs    f0, f6, f0
	stfs     f4, 0x200(r3)
	stfs     f1, 0x204(r3)
	stfs     f0, 0x208(r3)
	lwz      r4, 0x194(r3)
	lfs      f1, 0x210(r3)
	lfs      f0, 0x50(r4)
	lfs      f4, 0x20c(r3)
	fsubs    f5, f1, f0
	lfs      f3, 0x4c(r4)
	lfs      f1, 0x214(r3)
	lfs      f0, 0x54(r4)
	fsubs    f3, f4, f3
	fmuls    f4, f5, f5
	fsubs    f1, f1, f0
	fmadds   f0, f3, f3, f4
	fmuls    f1, f1, f1
	fadds    f0, f1, f0
	fcmpo    cr0, f0, f2
	blelr
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013F4D0
 * Size:	000008
 */
bool FakePiki::debugShapeDL(char*) { return true; }

/*
 * --INFO--
 * Address:	8013F4D8
 * Size:	000008
 */
int FakePiki::getDownfloorMass() { return 0; }

/*
 * --INFO--
 * Address:	8013F4E0
 * Size:	000008
 */
bool FakePiki::isPikmin() { return true; }

/*
 * --INFO--
 * Address:	8013F4E8
 * Size:	000004
 */
void FakePiki::doDebugDL() { }

/*
 * --INFO--
 * Address:	8013F4EC
 * Size:	000004
 */
void FakePiki::update() { }

/*
 * --INFO--
 * Address:	8013F4F0
 * Size:	000028
 */
void FakePiki::setMoveRotation(bool useMoveRotation)
{
	if (!useMoveRotation) {
		setFPFlag(FPFLAGS_MoveRotationDisabled);
	} else {
		resetFPFlag(FPFLAGS_MoveRotationDisabled);
	}
}

/*
 * --INFO--
 * Address:	8013F518
 * Size:	000028
 */
void FakePiki::setUpdateTrMatrix(bool useUpdateTrMatrix)
{
	if (!useUpdateTrMatrix) {
		setFPFlag(FPFLAGS_UpdateTrMatrixDisabled);
	} else {
		resetFPFlag(FPFLAGS_UpdateTrMatrixDisabled);
	}
}

/*
 * --INFO--
 * Address:	8013F540
 * Size:	000028
 */
void FakePiki::setMoveVelocity(bool useMoveVelocity)
{
	if (!useMoveVelocity) {
		setFPFlag(FPFLAGS_MoveVelocityDisabled);
	} else {
		resetFPFlag(FPFLAGS_MoveVelocityDisabled);
	}
}

/*
 * --INFO--
 * Address:	8013F568
 * Size:	000028
 */
void FakePiki::setMapCollision(bool useMapCollision)
{
	if (!useMapCollision) {
		setFPFlag(FPFLAGS_MapCollisionDisabled);
	} else {
		resetFPFlag(FPFLAGS_MapCollisionDisabled);
	}
}

/*
 * --INFO--
 * Address:	8013F590
 * Size:	00000C
 */
bool FakePiki::isZikatu() { return isFPFlag(FPFLAGS_Zikatu); }

/*
 * --INFO--
 * Address:	8013F59C
 * Size:	00003C
 */
void FakePiki::setZikatu(bool makeZikatu)
{
	if (makeZikatu) {
		setFPFlag(FPFLAGS_Zikatu);
	} else {
		resetFPFlag(FPFLAGS_Zikatu);
	}

	if (makeZikatu) {
		setFPFlag(FPFLAGS_WasZikatu);
	}
}

/*
 * --INFO--
 * Address:	8013F5D8
 * Size:	00000C
 */
bool FakePiki::wasZikatu() { return isFPFlag(FPFLAGS_WasZikatu); }

/*
 * --INFO--
 * Address:	8013F5E4
 * Size:	000004
 */
void FakePiki::inWaterCallback(WaterBox*) { }

/*
 * --INFO--
 * Address:	8013F5E8
 * Size:	000004
 */
void FakePiki::outWaterCallback() { }

/*
 * --INFO--
 * Address:	8013F5F0
 * Size:	000044
 */
void FakePiki::onSetPosition(Vector3f& position)
{
	mPosition = position;
	onSetPosition();
}

/*
 * --INFO--
 * Address:	8013F634
 * Size:	000008
 */
f32 FakePiki::getFaceDir() { return mFaceDir; }

/*
 * --INFO--
 * Address:	8013F63C
 * Size:	00001C
 */
Vector3f FakePiki::getVelocity() { return mSimVelocity; }

/*
 * --INFO--
 * Address:	8013F658
 * Size:	00001C
 */
void FakePiki::setVelocity(Vector3f& velocity) { mSimVelocity = velocity; }

/*
 * --INFO--
 * Address:	8013F674
 * Size:	00001C
 */
void FakePiki::getVelocityAt(Vector3f& vec, Vector3f& velocity) { velocity = mSimVelocity; }

/*
 * --INFO--
 * Address:	8013F690
 * Size:	000008
 */
Vector3f* FakePiki::getSound_PosPtr() { return &mPosition; }

/*
 * --INFO--
 * Address:	8013F698
 * Size:	000008
 */
bool FakePiki::isWalking() { return false; }

/*
 * --INFO--
 * Address:	8013F6A0
 * Size:	000004
 */
void FakePiki::onKeyEvent(const SysShape::KeyEvent&) { }

} // namespace Game
