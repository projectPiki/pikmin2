#include "Morimura/challengeSelect2d.h"
#include "Dolphin/rand.h"
#include "Game/gameChallenge2D.h"
#include "trig.h"
#include "Game/GameConfig.h"
#include "efx2d/T2DChangesmoke.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "PSSystem/PSSystemIF.h"
#include "Controller.h"
#include "Screen/Game2DMgr.h"

namespace Morimura {

static const char name[] = "challengeSelect2D";

bool TChallengeSelect::mSelected1p       = true;
f32 TChallengeSelect::mAlphaSpeed        = 0.05f;
s16 TChallengeSelect::mFlashAnimInterval = 300;
f32 TChallengeSelect::mTextFlashVal      = 1.0f;
bool TChallengeSelect::mConnect2p        = true;
f32 TChallengeSelect::mPanelMoveVal      = 1.0f;
f32 TChallengeSelect::mPanelMoveRate     = 0.25f;
f32 TChallengeSelect::mCircleY           = 100.0f;
f32 TChallengeSelect::mTimerSpeed        = 0.15f;
f32 TChallengeSelect::mMoveSpeed         = 12.0f;
f32 TChallengeSelect::mSelectIconScale   = 1.5f;

int TChallengeSelect::mRightOffset          = 0;
int TChallengeSelect::mDownOffset           = 0;
u8 TChallengeSelect::mFrameAnimAlpha        = 0;
bool TChallengeSelect::mAllCourseOpen       = false;
bool TChallengeSelect::mForceDemoStart      = false;
int TChallengeSelect::mDivePikiNum          = 0;
JKRHeap* TChallengeSelect::mDebugHeapParent = nullptr;
JKRExpHeap* TChallengeSelect::mDebugHeap    = nullptr;

ResTIMG* TChallengeSelect::mIconTexture[4] = { nullptr, nullptr, nullptr, nullptr };

/**
 * @note Address: N/A
 * @note Size: 0xD8
 */
TChallengePiki::TChallengePiki(J2DPane* pane1, J2DPane* pane2, J2DPane* pane3)
{
	mMaxPiki  = 0;
	mPanes[0] = pane1;
	mPanes[1] = pane2;
	mPanes[2] = pane3;
	for (int i = 0; i < 3; i++) {
		P2ASSERTLINE(72, mPanes[i]);
	}
	mGoalXPos = 0.0f;
	mGoalYPos = 0.0f;
	mYOffset  = 0.0f;
	for (int i = 0; i < 50; i++) {
		mPosInfo[i].mState = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xFC
 */
void TChallengePiki::reset()
{
	mGoalXPos = 0.0f;
	mGoalYPos = 0.0f;
	mYOffset  = 0.0f;
	for (int i = 0; i < 50; i++) {
		mPosInfo[i].mState = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x2D8
 */
void TChallengePiki::jumpStart(f32 time)
{
	mVec[0]  = Vector2f(mPanes[0]->getGlbVtx(GLBVTX_BtmLeft).x - mPanes[1]->getGlbVtx(GLBVTX_BtmRight).x,
                       mPanes[0]->getGlbVtx(GLBVTX_BtmLeft).y - mPanes[1]->getGlbVtx(GLBVTX_BtmRight).y);
	mVec[1]  = Vector2f(mPanes[0]->getGlbVtx(GLBVTX_BtmLeft).x - mPanes[2]->getGlbVtx(GLBVTX_BtmLeft).x,
                       mPanes[0]->getGlbVtx(GLBVTX_BtmLeft).y - mPanes[2]->getGlbVtx(GLBVTX_BtmLeft).y);
	mYOffset = -500.0f;
	for (int i = 0; i < 50; i++) {
		mPosInfo[i].mTimer      = (0.1f * randFloat()) + -(0.1f * (f32)i - time);
		mPosInfo[i].mCurrentPos = Vector2f(mPanes[0]->getGlbVtx(GLBVTX_BtmLeft).x, mPanes[0]->getGlbVtx(GLBVTX_BtmLeft).y);
		//	mPosInfo[i].mInitialPos = mPosInfo[i].mCurrentPos;
		// whole thing wont inline when this is enabled
		mPosInfo[i]._08 = i % 3;

		mPosInfo[i].mDeviation.x = 30.0f * randFloat();
		if (randFloat() > 0.5f) {
			mPosInfo[i].mDeviation.x *= -1.0f;
		}
		mPosInfo[i].mDeviation.y = 10.0f * randFloat() + 15.0f;
		mPosInfo[i].mState       = ChallengePiki_Standby;
	}
}

/**
 * @note Address: 0x8038C48C
 * @note Size: 0x46C
 */
void TChallengePiki::update()
{
	if (mMaxPiki > 0) {
		for (int i = 0; i < 3; i++) {
			mPanes[i]->addOffsetY(mYOffset);
		}
	}

	for (int i = 0; i < mMaxPiki; i++) {

		if (i < 50) {
			bool isJump = false;
			if (mPosInfo[i].mTimer < 0.0f) {
				isJump = true;
			}
			mPosInfo[i].mTimer += TChallengeSelect::mTimerSpeed;

			if (isJump && mPosInfo[i].mTimer > 0.0f) {
				JAISound* sound = PSSystem::SingletonBase<PSGame::SeMgr>::getInstance()
				                      ->mSetSeList[PSGame::SeMgr::SETSE_ChallengeModeTop]
				                      ->playSystemSe(PSSE_PK_VC_JUMP_INTO_HOLE, 0);
				if (sound) {
					sound->setPan(0.7f, 0, SOUNDPARAM_Unk0);
				}
			}

			f32 time = mPosInfo[i].mTimer;
			if (time > TAU) {
				mPosInfo[i].mTimer -= TAU;
			}

			switch (mPosInfo[i].mState) {
			case ChallengePiki_Standby:
				f32 time = mPosInfo[i].mTimer;
				if (!(time < 0.0f)) {
					if (time > HALF_PI) {
						mPosInfo[i].mState = 3;
					}
					mPosInfo[i].mCurrentPos.x = -(mPosInfo[i].mDeviation.x * sinf(mPosInfo[i].mTimer) - mPosInfo[i].mInitialPos.x);
					mPosInfo[i].mCurrentPos.y
					    = (FABS(sinf(mPosInfo[i].mTimer * 2.0f) * mPosInfo[i].mDeviation.y) - mPosInfo[i].mInitialPos.y);
				}
				break;
			case 1:
				break;
			case 3:
				if (mPosInfo[i].mCurrentPos.y > TChallengeSelect::mCircleY) {
					mPosInfo[i].mCurrentPos.y -= TChallengeSelect::mMoveSpeed;
				} else {
					mPosInfo[i].mState        = ChallengePiki_Jumping;
					mPosInfo[i].mInitialPos.x = mPosInfo[i].mCurrentPos.x;
					mPosInfo[i].mInitialPos.y = mPosInfo[i].mCurrentPos.y;
					mPosInfo[i].mTimer        = 0.0f;
				}
				break;
			case ChallengePiki_Jumping:
				if (mPosInfo[i].mTimer > PI) {
					mPosInfo[i].mState = ChallengePiki_Falling;
					mPosInfo[i].mTimer = PI;
				}
				int thing = mPosInfo[i]._08;
				f32 calc  = 0.0f;
				if (thing == 0) {
					calc = -8.0f;
				}
				if (thing == 1) {
					calc = 8.0f;
				}
				mPosInfo[i].mCurrentPos.x
				    = mPosInfo[i].mInitialPos.x + (mPosInfo[i].mTimer * (mGoalXPos - mPosInfo[i].mInitialPos.x + calc)) / PI;
				mPosInfo[i].mCurrentPos.y = -(sinf(mPosInfo[i].mTimer) * 70.0f - mPosInfo[i].mInitialPos.y);
				break;
			case ChallengePiki_Falling:
				if (mPosInfo[i].mCurrentPos.y < mGoalYPos - 40.0f) {
					mPosInfo[i].mCurrentPos.y += TChallengeSelect::mMoveSpeed;
				} else {
					JAISound* sound
					    = PSSystem::SingletonBase<PSGame::SeMgr>::getInstance()->mSetSeList[5]->playSystemSe(PSSE_PK_SE_ONY_SEED_GROUND, 0);
					if (sound) {
						sound->setPan(0.3f, 0, SOUNDPARAM_Unk0);
					}
					mPosInfo[i].mCurrentPos.y = -100.0f;
					TChallengeSelect::mDivePikiNum++;
					mPosInfo[i].mState = ChallengePiki_Inactive;
				}
				break;
			}
		}
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r29, r3
	lwz      r0, 0x72c(r3)
	cmpwi    r0, 0
	ble      lbl_8038C4F0
	li       r31, 0
	mr       r30, r29

lbl_8038C4BC:
	lwz      r3, 0(r30)
	lfs      f1, 0x730(r29)
	lfs      f2, 0xd8(r3)
	fadds    f1, f1, f2
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1
	addi     r30, r30, 4
	cmpwi    r31, 3
	blt      lbl_8038C4BC

lbl_8038C4F0:
	mr       r31, r29
	li       r30, 0
	b        lbl_8038C8D0

lbl_8038C4FC:
	cmpwi    r30, 0x32
	bge      lbl_8038C8C8
	lfs      f1, 0x28(r31)
	li       r0, 0
	lfs      f0, lbl_8051EF88@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8038C51C
	li       r0, 1

lbl_8038C51C:
	lfs      f1, 0x28(r31)
	clrlwi.  r0, r0, 0x18
	lfs      f0, mTimerSpeed__Q28Morimura16TChallengeSelect@sda21(r13)
	fadds    f0, f1, f0
	stfs     f0, 0x28(r31)
	beq      lbl_8038C5A4
	lfs      f1, 0x28(r31)
	lfs      f0, lbl_8051EF88@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8038C5A4
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi   r0,
0 bne      lbl_8038C56C lis      r3, lbl_80493FF8@ha lis      r5,
lbl_80493FEC@ha addi     r3, r3, lbl_80493FF8@l li       r4, 0x89 addi     r5,
r5, lbl_80493FEC@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038C56C:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) li       r4,
0x282f li       r5, 0 lwz      r3, 0x18(r3) bl
playSystemSe__Q26PSGame5SetSeFUlUl cmplwi   r3, 0 beq      lbl_8038C5A4 lwz r12,
0x10(r3) li       r4, 0 lfs      f1, lbl_8051EFB8@sda21(r2) li       r5, 0 lwz
r12, 0x24(r12) mtctr    r12 bctrl

lbl_8038C5A4:
	lfs      f1, 0x28(r31)
	lfs      f0, lbl_8051EFBC@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8038C5BC
	fsubs    f0, f1, f0
	stfs     f0, 0x28(r31)

lbl_8038C5BC:
	lwz      r0, 0x24(r31)
	cmpwi    r0, 3
	beq      lbl_8038C708
	bge      lbl_8038C5DC
	cmpwi    r0, 1
	beq      lbl_8038C8C8
	bge      lbl_8038C5EC
	b        lbl_8038C8C8

lbl_8038C5DC:
	cmpwi    r0, 5
	beq      lbl_8038C824
	bge      lbl_8038C8C8
	b        lbl_8038C74C

lbl_8038C5EC:
	lfs      f1, 0x28(r31)
	lfs      f0, lbl_8051EF88@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_8038C8C8
	lfs      f0, lbl_8051EFC0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8038C610
	li       r0, 3
	stw      r0, 0x24(r31)

lbl_8038C610:
	lfs      f1, 0x28(r31)
	lfs      f0, lbl_8051EF88@sda21(r2)
	lfs      f2, 0x40(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_8038C650
	lfs      f0, lbl_8051EFC4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_8038C674

lbl_8038C650:
	lfs      f0, lbl_8051EFC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_8038C674:
	lfs      f0, 0x38(r31)
	lfs      f3, lbl_8051EFCC@sda21(r2)
	fnmsubs  f1, f2, f1, f0
	lfs      f0, lbl_8051EF88@sda21(r2)
	stfs     f1, 0x30(r31)
	lfs      f2, 0x28(r31)
	lfs      f1, 0x44(r31)
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f0
	bge      lbl_8038C6C8
	lfs      f0, lbl_8051EFC4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8038C6EC

lbl_8038C6C8:
	lfs      f0, lbl_8051EFC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8038C6EC:
	fmuls    f0, f1, f0
	lfs      f1, 0x3c(r31)
	fabs     f0, f0
	frsp     f0, f0
	fsubs    f0, f1, f0
	stfs     f0, 0x34(r31)
	b        lbl_8038C8C8

lbl_8038C708:
	lfs      f1, 0x34(r31)
	lfs      f0, mCircleY__Q28Morimura16TChallengeSelect@sda21(r13)
	fcmpo    cr0, f1, f0
	ble      lbl_8038C728
	lfs      f0, mMoveSpeed__Q28Morimura16TChallengeSelect@sda21(r13)
	fsubs    f0, f1, f0
	stfs     f0, 0x34(r31)
	b        lbl_8038C8C8

lbl_8038C728:
	li       r0, 4
	lfs      f0, lbl_8051EF88@sda21(r2)
	stw      r0, 0x24(r31)
	lfs      f1, 0x30(r31)
	stfs     f1, 0x38(r31)
	lfs      f1, 0x34(r31)
	stfs     f1, 0x3c(r31)
	stfs     f0, 0x28(r31)
	b        lbl_8038C8C8

lbl_8038C74C:
	lfs      f1, 0x28(r31)
	lfs      f0, lbl_8051EFD0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8038C768
	li       r0, 5
	stw      r0, 0x24(r31)
	stfs     f0, 0x28(r31)

lbl_8038C768:
	lwz      r0, 0x2c(r31)
	lfs      f6, lbl_8051EF88@sda21(r2)
	cmpwi    r0, 0
	bne      lbl_8038C77C
	lfs      f6, lbl_8051EFD4@sda21(r2)

lbl_8038C77C:
	cmpwi    r0, 1
	bne      lbl_8038C788
	lfs      f6, lbl_8051EFD8@sda21(r2)

lbl_8038C788:
	lfs      f5, 0x38(r31)
	lfs      f0, 0xc(r29)
	lfs      f4, 0x28(r31)
	fsubs    f3, f0, f5
	lfs      f1, lbl_8051EFD0@sda21(r2)
	lfs      f0, lbl_8051EF88@sda21(r2)
	lfs      f2, lbl_8051EFDC@sda21(r2)
	fadds    f3, f6, f3
	fmuls    f3, f4, f3
	fdivs    f1, f3, f1
	fadds    f1, f5, f1
	stfs     f1, 0x30(r31)
	lfs      f1, 0x28(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_8038C7F0
	lfs      f0, lbl_8051EFC4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_8038C814

lbl_8038C7F0:
	lfs      f0, lbl_8051EFC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_8038C814:
	lfs      f0, 0x3c(r31)
	fnmsubs  f0, f2, f1, f0
	stfs     f0, 0x34(r31)
	b        lbl_8038C8C8

lbl_8038C824:
	lfs      f1, 0x10(r29)
	lfs      f0, lbl_8051EFE0@sda21(r2)
	lfs      f2, 0x34(r31)
	fsubs    f0, f1, f0
	fcmpo    cr0, f2, f0
	bge      lbl_8038C84C
	lfs      f0, mMoveSpeed__Q28Morimura16TChallengeSelect@sda21(r13)
	fadds    f0, f2, f0
	stfs     f0, 0x34(r31)
	b        lbl_8038C8C8

lbl_8038C84C:
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi   r0,
0 bne      lbl_8038C874 lis      r3, lbl_80493FF8@ha lis      r5,
lbl_80493FEC@ha addi     r3, r3, lbl_80493FF8@l li       r4, 0x89 addi     r5,
r5, lbl_80493FEC@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038C874:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) li       r4,
0x2817 li       r5, 0 lwz      r3, 0x18(r3) bl
playSystemSe__Q26PSGame5SetSeFUlUl cmplwi   r3, 0 beq      lbl_8038C8AC lwz r12,
0x10(r3) li       r4, 0 lfs      f1, lbl_8051EFE4@sda21(r2) li       r5, 0 lwz
r12, 0x24(r12) mtctr    r12 bctrl

lbl_8038C8AC:
	lfs      f0, lbl_8051EFE8@sda21(r2)
	li       r0, 0
	stfs     f0, 0x34(r31)
	lwz      r3, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
	addi     r3, r3, 1
	stw      r3, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
	stw      r0, 0x24(r31)

lbl_8038C8C8:
	addi     r31, r31, 0x24
	addi     r30, r30, 1

lbl_8038C8D0:
	lwz      r0, 0x72c(r29)
	cmpw     r30, r0
	blt      lbl_8038C4FC
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x19C
 */
void TChallengePiki::draw()
{
	int max = mMaxPiki;
	if (max > 50) {
		max = 50;
	}

	for (int i = 0; i < max; i++) {
		static_cast<J2DPicture*>(mPanes[0])->draw(mPosInfo[i].mCurrentPos.x, mPosInfo[i].mCurrentPos.y, mPanes[0]->getWidth(),
		                                          mPanes[0]->getHeight(), false, false, false);
		mPanes[0]->calcMtx();
		static_cast<J2DPicture*>(mPanes[1])->draw(mPosInfo[i].mCurrentPos.x - mVec[0].x, mPosInfo[i].mCurrentPos.y - mVec[0].y,
		                                          mPanes[1]->getWidth(), mPanes[1]->getHeight(), false, false, false);
		mPanes[1]->calcMtx();

		static_cast<J2DPicture*>(mPanes[2])->draw(mPosInfo[i].mCurrentPos.x - mVec[1].x, mPosInfo[i].mCurrentPos.y - mVec[1].y,
		                                          mPanes[2]->getWidth(), mPanes[2]->getHeight(), false, false, false);
		mPanes[2]->calcMtx();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void TChallengePiki::setGoalPos(Vector2f& pos)
{
	mGoalXPos = pos.x;
	mGoalYPos = pos.y;
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
bool TChallengePiki::isDemoEnd()
{
	int max = mMaxPiki;
	if (max == 0) {
		return true;
	}

	if (max > 50) {
		max = 50;
	}

	for (int i = 0; i < max; i++) {
		if (mPosInfo[i].mState != ChallengePiki_Inactive) {
			return false;
		}
	}

	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
TChallengeDoping::TChallengeDoping(J2DPane* pane1, J2DPane* pane2, J2DPane* pane3, J2DPane* pane4)
{
	mPaneBase         = pane1;
	mGoalFillLevel    = 0.0f;
	mCurrentFillLevel = 0.0f;
	P2ASSERTLINE(284, mPaneBase);
	mPaneBase->setBasePosition(J2DPOS_BottomCenter);

	mBubblePanes[0] = pane2;
	mBubblePanes[1] = pane3;
	mBubblePanes[2] = pane4;
	for (int i = 0; i < 3; i++) {
		P2ASSERTLINE(290, mBubblePanes[i]);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
void TChallengeDoping::setLevel(int level)
{
	mCurrentFillLevel = mGoalFillLevel;
	mBubblePanes[0]->hide();
	mBubblePanes[1]->hide();
	mBubblePanes[2]->hide();
	mGoalFillLevel = level / 3.0f;
	if (mGoalFillLevel > 1.0f) {
		mGoalFillLevel = 1.0f;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x120
 */
void TChallengeDoping::update()
{
	f32 diff = mGoalFillLevel - mCurrentFillLevel;
	if (FABS(diff) > 0.05f) {
		diff *= 0.1f;
	}
	mCurrentFillLevel += diff;
	if (mCurrentFillLevel < 0.0f) {
		mCurrentFillLevel = 0.0f;
	}
	if (mCurrentFillLevel > 1.0f) {
		mCurrentFillLevel = 1.0f;
	}
	mPaneBase->updateScale(mCurrentFillLevel);

	f32 calc = mCurrentFillLevel * 3.0f;
	mBubblePanes[0]->hide();
	mBubblePanes[1]->hide();
	mBubblePanes[2]->hide();
	if (calc >= 3.0f) {
		mBubblePanes[0]->show();
	}
	if (calc >= 2.0f) {
		mBubblePanes[1]->show();
	}
	if (calc >= 1.0f) {
		mBubblePanes[2]->show();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x110
 */
TChallengePanel::TChallengePanel(J2DPictureEx* pane1, J2DPane* pane2, J2DPane* pane3)
{
	mArchive         = nullptr;
	mPane1           = pane1;
	mPane2           = pane2;
	mPane3           = pane3;
	mScaleMgr        = nullptr;
	mCurrentScale    = 1.0f;
	mSelectAnimAlpha = 0.0f;
	mState           = 0;
	mAfterState      = 0;
	mIsUnlock        = false;
	mTimer           = 0.0f;
	P2ASSERTLINE(358, pane1);
	P2ASSERTLINE(359, pane2);
	P2ASSERTLINE(360, pane3);
	mScaleMgr = new og::Screen::ScaleMgr;
	mXOffset  = 0.0f;
	mYOffset  = 0.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void TChallengePanel::stateInitialize(JKRArchive* arc, int state, int index)
{
	mArchive = arc;
	mPane1->changeTexture(TChallengeSelect::mIconTexture[state], 0);
	mState = state;
	mIndex = index;
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void TChallengePanel::changeState()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x16C
 */
void TChallengePanel::addAlpha()
{
	mCurrentScale = TChallengeSelect::mSelectIconScale;
	if (mCurrentScale > TChallengeSelect::mSelectIconScale) {
		mCurrentScale = TChallengeSelect::mSelectIconScale;
	}

	f32 alpha = mSelectAnimAlpha + TChallengeSelect::mAlphaSpeed;
	if (alpha < 1.0f) {
		mSelectAnimAlpha = alpha;
	} else {
		if (mIsUnlock) {
			startScaleUp();
			mIsUnlock = false;
			if (mState < 3) {
				mState = mAfterState;
				PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_FLOWER, 0);
				mPane1->changeTexture(TChallengeSelect::mIconTexture[mState], 0);
				J2DPane* pane = mPane1;
				Vector2f pos(pane->mGlobalMtx[0][3], pane->mGlobalMtx[1][3]);
				efx2d::Arg arg(pos);
				efx2d::T2DChangesmoke efx;
				efx.create(&arg);
			}
		}
		mSelectAnimAlpha = 1.0f;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void TChallengePanel::decAlpha()
{
	mCurrentScale *= 0.95f;
	if (mCurrentScale < 1.0f) {
		mCurrentScale = 1.0f;
	}
	if (mSelectAnimAlpha > TChallengeSelect::mAlphaSpeed) {
		mSelectAnimAlpha -= TChallengeSelect::mAlphaSpeed;
	} else {
		mSelectAnimAlpha = 0.0f;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void TChallengePanel::alphaUpdate(f32 mult)
{
	f32 alpha = TChallengeSelect::mFrameAnimAlpha * (mult * mSelectAnimAlpha);
	mPane2->setAlpha(alpha);
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
bool TChallengePanel::canSelect()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8038C8F8
 * @note Size: 0x3D0
 */
void TChallengePanel::update(int index, bool flag)
{
	if (flag) {
		mTimer = 0.0f;
	}
	mTimer += TChallengeSelect::mPanelMoveRate;
	if (mTimer > TAU) {
		mTimer -= TAU;
	}

	int id  = mIndex;
	int sel = (index / 5) % 5; // uhhhh something like this
	if (index != sel) {
		mXOffset += (1.0f * TChallengeSelect::mPanelMoveVal * FABS(sinf(mTimer)) - mXOffset) * 0.2f;
		mYOffset *= 0.9f;
	} else if (index == id) {
		mXOffset += (1.0f * TChallengeSelect::mPanelMoveVal * FABS(sinf(mTimer)) - mXOffset) * 0.2f;
		mYOffset *= 0.9f;
	} else if (index == id) {
		mXOffset *= 0.9f;
		mYOffset *= 0.9f;
	} else {
		mXOffset *= 0.9f;
		mYOffset *= 0.9f;
	}

	f32 scale = mScaleMgr->calc();

	mPane1->addOffset(mXOffset, mYOffset);
	mPane1->setBasePosition(J2DPOS_Center);
	mPane1->multScale(mCurrentScale * scale);

	mPane2->addOffset(mXOffset, mYOffset);
	mPane2->setBasePosition(J2DPOS_Center);
	mPane2->multScale(mCurrentScale * scale);

	mPane3->addOffset(mXOffset, mYOffset);
	mPane3->setBasePosition(J2DPOS_Center);
	mPane3->multScale(mCurrentScale * scale);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	clrlwi.  r0, r5, 0x18
	mr       r31, r3
	beq      lbl_8038C924
	lfs      f0, lbl_8051EF88@sda21(r2)
	stfs     f0, 0x34(r31)

lbl_8038C924:
	lfs      f2, 0x34(r31)
	lfs      f1, mPanelMoveRate__Q28Morimura16TChallengeSelect@sda21(r13)
	lfs      f0, lbl_8051EFBC@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x34(r31)
	lfs      f1, 0x34(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8038C94C
	fsubs    f0, f1, f0
	stfs     f0, 0x34(r31)

lbl_8038C94C:
	lis      r3, 0x66666667@ha
	lwz      r8, 0x30(r31)
	addi     r0, r3, 0x66666667@l
	mulhw    r3, r0, r4
	cmpw     r4, r8
	srawi    r6, r3, 1
	srawi    r3, r3, 1
	mulhw    r0, r0, r8
	srwi     r7, r6, 0x1f
	srwi     r5, r3, 0x1f
	add      r6, r6, r7
	add      r7, r3, r5
	srawi    r3, r0, 1
	srwi     r5, r3, 0x1f
	srawi    r0, r0, 1
	add      r5, r3, r5
	mulli    r6, r6, 5
	srwi     r3, r0, 0x1f
	add      r9, r0, r3
	mulli    r0, r5, 5
	subf     r3, r6, r4
	subf     r0, r0, r8
	beq      lbl_8038CB28
	cmpw     r3, r0
	bne      lbl_8038CA58
	cmpw     r7, r9
	lfs      f3, lbl_8051EFF0@sda21(r2)
	bge      lbl_8038C9C0
	lfs      f3, lbl_8051EFA0@sda21(r2)

lbl_8038C9C0:
	lfs      f1, 0x34(r31)
	lfs      f0, lbl_8051EF88@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8038C9FC
	lfs      f0, lbl_8051EFC4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8038CA20

lbl_8038C9FC:
	lfs      f0, lbl_8051EFC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8038CA20:
	fabs     f1, f0
	lfs      f0, mPanelMoveVal__Q28Morimura16TChallengeSelect@sda21(r13)
	lfs      f2, 0x2c(r31)
	fmuls    f3, f0, f3
	lfs      f4, lbl_8051F008@sda21(r2)
	frsp     f1, f1
	lfs      f0, lbl_8051F00C@sda21(r2)
	fmsubs   f1, f3, f1, f2
	fmadds   f1, f4, f1, f2
	stfs     f1, 0x2c(r31)
	lfs      f1, 0x28(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x28(r31)
	b        lbl_8038CB44

lbl_8038CA58:
	cmpw     r7, r9
	bne      lbl_8038CB08
	cmpw     r3, r0
	lfs      f3, lbl_8051EFF0@sda21(r2)
	bge      lbl_8038CA70
	lfs      f3, lbl_8051EFA0@sda21(r2)

lbl_8038CA70:
	lfs      f1, 0x34(r31)
	lfs      f0, lbl_8051EF88@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8038CAAC
	lfs      f0, lbl_8051EFC4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8038CAD0

lbl_8038CAAC:
	lfs      f0, lbl_8051EFC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8038CAD0:
	fabs     f1, f0
	lfs      f0, mPanelMoveVal__Q28Morimura16TChallengeSelect@sda21(r13)
	lfs      f2, 0x28(r31)
	fmuls    f3, f0, f3
	lfs      f4, lbl_8051F008@sda21(r2)
	frsp     f1, f1
	lfs      f0, lbl_8051F00C@sda21(r2)
	fmsubs   f1, f3, f1, f2
	fmadds   f1, f4, f1, f2
	stfs     f1, 0x28(r31)
	lfs      f1, 0x2c(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x2c(r31)
	b        lbl_8038CB44

lbl_8038CB08:
	lfs      f0, 0x28(r31)
	lfs      f1, lbl_8051F00C@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x28(r31)
	lfs      f0, 0x2c(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2c(r31)
	b        lbl_8038CB44

lbl_8038CB28:
	lfs      f0, 0x28(r31)
	lfs      f1, lbl_8051F00C@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x28(r31)
	lfs      f0, 0x2c(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2c(r31)

lbl_8038CB44:
	lwz      r3, 0x10(r31)
	bl       calc__Q32og6Screen8ScaleMgrFv
	lwz      r3, 4(r31)
	fmr      f31, f1
	lfs      f1, 0x28(r31)
	lfs      f0, 0xd4(r3)
	lfs      f3, 0xd8(r3)
	lfs      f2, 0x2c(r31)
	fadds    f0, f1, f0
	fadds    f1, f2, f3
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 4(r31)
	lfs      f2, 0x14(r31)
	lfs      f0, 0xcc(r3)
	lfs      f1, 0xd0(r3)
	fmuls    f0, f31, f0
	fmuls    f1, f31, f1
	fmuls    f0, f2, f0
	fmuls    f1, f2, f1
	stfs     f0, 0xcc(r3)
	stfs     f1, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	lfs      f1, 0x28(r31)
	lfs      f0, 0xd4(r3)
	lfs      f3, 0xd8(r3)
	lfs      f2, 0x2c(r31)
	fadds    f0, f1, f0
	fadds    f1, f2, f3
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 8(r31)
	lfs      f0, 0xcc(r3)
	lfs      f2, 0xd0(r3)
	fmuls    f1, f31, f0
	fmuls    f0, f31, f2
	stfs     f1, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r31)
	lfs      f1, 0x28(r31)
	lfs      f0, 0xd4(r3)
	lfs      f3, 0xd8(r3)
	lfs      f2, 0x2c(r31)
	fadds    f0, f1, f0
	fadds    f1, f2, f3
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r31)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0xc(r31)
	lfs      f2, 0x14(r31)
	lfs      f0, 0xcc(r3)
	lfs      f1, 0xd0(r3)
	fmuls    f0, f31, f0
	fmuls    f1, f31, f1
	fmuls    f0, f2, f0
	fmuls    f1, f2, f1
	stfs     f0, 0xcc(r3)
	stfs     f1, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void TChallengePanel::startScaleUp() { mScaleMgr->up(0.3f, 30.0f, 0.6f, 0.0f); }

/**
 * @note Address: 0x8038CCC8
 * @note Size: 0xA0
 */
TChallengeScreen::TChallengeScreen(JKRArchive* arc, int anims)
    : TScreenBase(arc, anims)
{
	mAnimPaneCount = 0;
	mCounter       = 0;
	_28            = 0;
	mCounterMax    = TChallengeSelect::mFlashAnimInterval * randFloat();
}

/**
 * @note Address: 0x8038CD68
 * @note Size: 0x3C0
 */
void TChallengeScreen::create(char const* path, u32 flags)
{
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set(path, flags, mArchive);

	TCallbackScissor* scis = new TCallbackScissor;
	scis->mBounds          = JGeometry::TBox2f(320.0f, 70.0f, 560.0f, 100.0f);
	P2ASSERTLINE(568, mScreenObj->search('Tmapti3'));
	mScreenObj->addCallBack('Tmapti3', scis);

	og::Screen::CallBack_Message* mesg = new og::Screen::CallBack_Message;
	P2ASSERTLINE(576, mScreenObj->search('Tyel2'));
	mScreenObj->addCallBack('Tyel2', mesg);

	og::Screen::CallBack_Message* mesg2 = new og::Screen::CallBack_Message;
	P2ASSERTLINE(581, mScreenObj->search('Tyel1'));
	mScreenObj->addCallBack('Tyel1', mesg2);

	TCallbackScissor* scis2 = new TCallbackScissor;
	scis2->mBounds          = JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f);
	mScreenObj->addCallBack('Tyel1', scis2);

	J2DPane* pane1 = mScreenObj->search('Tyel1');
	J2DPane* pane2 = mScreenObj->search('Tyel2');
	pane1->removeFromParent();
	pane2->removeFromParent();
	og::Screen::setCallBackMessage(mScreenObj);
	mScreenObj->appendChild(pane2);
	mScreenObj->appendChild(pane1);
	mAnimScreens = new og::Screen::AnimScreen*[mAnimScreenCountMax];
	og::Screen::setAlphaScreen(mScreenObj);
}

/**
 * @note Address: 0x8038D128
 * @note Size: 0xD8
 */
void TChallengeScreen::createAnimPane(char* path)
{
	u64 tags[16]   = { 'Nhl_00', 'Nhl_01', 'Nhl_02', 'Nhl_03', 'Nhl_04', 'Nhl_05', 'Nhl_06', 'Nhl_07',
                     'Nhl_08', 'Nhl_09', 'Nhl_10', 'Nhl_11', 'Nhl_12', 'Nhl_13', 'Nhl_14', 'NULL_001' };
	mAnimPaneCount = 15;
	mAnimPanes     = new og::Screen::AnimPane*[mAnimPaneCount];
	for (int i = 0; i < mAnimPaneCount; i++) {
		mAnimPanes[i] = new og::Screen::AnimPane;
		mAnimPanes[i]->init(mArchive, mScreenObj, tags[i], path);
	}
}

/**
 * @note Address: 0x8038D200
 * @note Size: 0x18C
 */
void TChallengeScreen::update()
{
	if (mScreenObj) {
		mScreenObj->update();
		for (int i = 0; i < mAnimScreenCountMax; i++) {
			if (i != 1) {
				mAnimScreens[i]->update();
			} else {
				mAnimScreens[i]->mCurrentFrame = mAnimScreens[0]->mCurrentFrame;
				mAnimScreens[i]->update();
			}
		}

		if (!_28) {
			mCounter++;
			if (mCounter > mCounterMax) {
				mCounter = 0;
				for (int i = 0; i < mAnimPaneCount; i++) {
					mAnimPanes[i]->mCurrentFrame = 0.0f;
				}
				_28         = true;
				mCounterMax = TChallengeSelect::mFlashAnimInterval * (randFloat() * 0.9f + 0.1f);
			}
		}
		updateBckPane();
		mScreenObj->animation();
	}
}

/**
 * @note Address: 0x8038D38C
 * @note Size: 0xB0
 */
void TChallengeScreen::updateBckPane()
{
	for (int i = 0; i < mAnimPaneCount; i++) {
		mAnimPanes[i]->update();
		if (mAnimPanes[i]->mCurrentFrame >= 32.0f || !_28) {
			mAnimPanes[i]->mCurrentFrame = 32.0f;
			_28                          = false;
		}
	}
}

/**
 * @note Address: 0x8038D43C
 * @note Size: 0x20
 */
bool TChallengeScreen::isRandAnimStart() { return mAnimPanes[0]->mCurrentFrame == 2.0f; }

/**
 * @note Address: 0x8038D45C
 * @note Size: 0x128
 */
TChallengePlayModeScreen::TChallengePlayModeScreen(JKRArchive* arc, int anims)
    : TScreenBase(arc, anims)
{
	mSphereTex          = nullptr;
	mPane5              = nullptr;
	mFuriko             = nullptr;
	mEfxCursor1         = nullptr;
	mEfxCursor2         = nullptr;
	mState              = 0;
	mDoShowNoController = false;
	mNoControllerTimer  = 0.0f;
	mTimer              = 0.0f;
	mTimer2             = 0.0f;
	mMovePos            = 800.0f;
	mPaneList0[0]       = nullptr;
	mScaleMgr[0]        = nullptr;
	mPane3              = nullptr;
	mAlphaTimer         = 0.0f;
	mPaneList0[1]       = nullptr;
	mScaleMgr[1]        = nullptr;
	mPane4              = nullptr;
	mScale              = 0.0f;
	for (int i = 0; i < 3; i++) {
		mPaneList1[i]   = nullptr;
		mAngleTimers[i] = TAU * randFloat();
	}
	for (int i = 0; i < 4; i++) {
		mAnimScreen[i] = nullptr;
	}
}

/**
 * @note Address: 0x8038D584
 * @note Size: 0x598
 */
void TChallengePlayModeScreen::create(char const* path, u32 flags)
{
	TScreenBase::create(path, flags);

	mScreenObj->search('il00')->hide();
	mScreenObj->search('ir00')->hide();
	mScreenObj->search('il01')->hide();
	mScreenObj->search('ir01')->hide();
	mEfxCursor2 = new efx2d::T2DCursor(&mEfxCursorPos2);
	mEfxCursor1 = new efx2d::T2DCursor(&mEfxCursorPos1);

	mPaneList0[0] = mScreenObj->search('nu_01');
	P2ASSERTLINE(764, mPaneList0[0]);

	mPaneList0[1] = mScreenObj->search('nu_02');
	P2ASSERTLINE(767, mPaneList0[1]);

	for (int i = 0; i < 2; i++) {
		mScaleMgr[i] = new og::Screen::ScaleMgr;
	}

	mFuriko = og::Screen::setCallBack_Furiko(mScreenObj, 'furiko00');
	P2ASSERTLINE(776, mFuriko);
	mFuriko->stop();

	u64 tags[4] = { 'h_00', 'h_01', 'h_02', 'h_03' };
	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			mAnimScreen[i] = og::Screen::setMenuTitleScreen(mArchive, mScreenObj, tags[i]);
		} else if (i == 3) {
			mAnimScreen[i] = og::Screen::setAnimTextScreen(mArchive, mScreenObj, tags[i]);
		} else {
			mAnimScreen[i] = og::Screen::setMenuScreen(mArchive, mScreenObj, tags[i]);
		}
		P2ASSERTLINE(786, mAnimScreen[i]);
		mAnimScreen[i]->stop();
	}

	mAnimScreen[0]->mMesgAlpha = 1.0f - mNoControllerTimer;
	mAnimScreen[3]->mMesgAlpha = mNoControllerTimer;

	mPane3 = mScreenObj->search('P1orima');
	P2ASSERTLINE(795, mPane3);
	mPaneList1[0] = mScreenObj->search('P1ori_l');
	P2ASSERTLINE(797, mPaneList1[0]);
	mPane4 = mScreenObj->search('P2orima');
	P2ASSERTLINE(800, mPane4);
	mPaneList1[1] = mScreenObj->search('P2ori_l');
	P2ASSERTLINE(802, mPaneList1[1]);
	mPane5 = mScreenObj->search('Plui');
	P2ASSERTLINE(806, mPane5);
	mPaneList1[2] = mScreenObj->search('P2lui_l');
	P2ASSERTLINE(808, mPaneList1[2]);
}

/**
 * @note Address: 0x8038DB1C
 * @note Size: 0x7FC
 */
void TChallengePlayModeScreen::update()
{
	mPane1Pos.x = mScreenObj->search('il00')->mGlobalMtx[0][3];
	mPane1Pos.y = mScreenObj->search('ir00')->mGlobalMtx[1][3];
	mPane2Pos.x = mScreenObj->search('ir00')->mGlobalMtx[0][3];
	mPane2Pos.y = mScreenObj->search('ir01')->mGlobalMtx[1][3];

	f32 x = mPane1Pos.x - mEfxCursorPos1.x;
	if (FABS(x) < 2.0f) {
		mEfxCursorPos1.x = mPane1Pos.x;
		x                = 0.0f;
	} else {
		x *= 0.3f;
	}
	mEfxCursorPos1.x += x;

	f32 x2 = mPane2Pos.x - mEfxCursorPos2.x;
	if (FABS(x2) < 2.0f) {
		mEfxCursorPos2.x = mPane2Pos.x;
		x2               = 0.0f;
	} else {
		x2 *= 0.3f;
	}
	mEfxCursorPos2.x += x2;

	if (TChallengeSelect::mSelected1p) {
		mAlphaTimer += 0.1f;
		if (mAlphaTimer > 1.0f) {
			mAlphaTimer = 1.0f;
		}
		mScale -= 0.1f;
		if (mScale < 0.0f) {
			mScale = 0.0f;
		}

		f32 y = mPane1Pos.y - mEfxCursorPos2.y;
		if (FABS(y) < 2.0f) {
			mEfxCursorPos2.y = mPane1Pos.y;
			y                = 0.0f;
		} else {
			y *= 0.3f;
		}
		mEfxCursorPos2.y += y;
		mEfxCursorPos1.y = mEfxCursorPos2.y;
	} else {
		if (TChallengeSelect::mConnect2p) {
			mScale += 0.1f;
			if (mScale > 1.0f) {
				mScale = 1.0f;
			}
		} else {
			mScale -= 0.1f;
			if (mScale < 0.0f) {
				mScale = 0.0f;
			}
		}
		mAlphaTimer -= 0.1f;
		if (mAlphaTimer < 0.0f) {
			mAlphaTimer = 0.0f;
		}

		f32 y = mPane2Pos.y - mEfxCursorPos2.y;
		if (FABS(y) < 2.0f) {
			mEfxCursorPos2.y = mPane2Pos.y;
			y                = 0.0f;
		} else {
			y *= 0.3f;
		}
		mEfxCursorPos2.y += y;
		mEfxCursorPos1.y = mEfxCursorPos2.y;
	}

	for (int i = 0; i < 3; i++) {
		f32 sin = 0.0f;
		f32 scale;
		if (i == 0) {
			scale = mAlphaTimer;
		} else {
			scale = mScale;
		}
		if (scale == 1.0f) {
			mAngleTimers[i] += 0.2f;
			if (mAngleTimers[i] > TAU) {
				mAngleTimers[i] -= TAU;
			}
			sin = FABS(sinf(mAngleTimers[i]) * 75.0f);
		}
		mPaneList1[i]->setAlpha(255.0f * scale - sin);
	}

	if (mState == 0) {
		mFuriko->stop();
		mMovePos = 400.0f;
		mTimer   = 0.0f;
		mTimer2  = 0.0f;
	} else {
		if (mScreenObj) {
			mScreenObj->update();
			for (int i = 0; i < mAnimScreenCountMax; i++) {
				mAnimScreens[i]->update();
			}

			switch (mState) {
			case 1:
				mTimer += sys->mDeltaTime;
				mMovePos = (1.0f - og::Screen::calcSmooth0to1(mTimer, 0.3f)) * 800.0f;
				if (mMovePos <= 0.0f) {
					mTimer2 += sys->mDeltaTime;
					if (mTimer2 > 0.5f) {
						mState = 2;
						if (TChallengeSelect::mSelected1p) {
							mEfxCursorPos2
							    = Vector2f(mScreenObj->search('ir00')->mGlobalMtx[0][3], mScreenObj->search('ir00')->mGlobalMtx[1][3]);
							mEfxCursorPos1
							    = Vector2f(mScreenObj->search('il00')->mGlobalMtx[0][3], mScreenObj->search('il00')->mGlobalMtx[1][3]);
						} else {
							mEfxCursorPos2
							    = Vector2f(mScreenObj->search('ir01')->mGlobalMtx[0][3], mScreenObj->search('ir01')->mGlobalMtx[1][3]);
							mEfxCursorPos1
							    = Vector2f(mScreenObj->search('il01')->mGlobalMtx[0][3], mScreenObj->search('il01')->mGlobalMtx[1][3]);
						}
						mEfxCursor1->create(nullptr);
						mEfxCursor2->create(nullptr);
					}
				}
				break;
			case 0:
				break;
			case 3:
				mTimer += sys->mDeltaTime;
				mMovePos = og::Screen::calcSmooth0to1(mTimer, 0.3f) * -800.0f;
				if (mTimer >= 0.3f) {
					mState = 0;
				}
				break;
			}

			if (TChallengeSelect::mConnect2p) {
				mPaneList0[1]->setAlpha(255);
				mAnimScreen[2]->mMesgAlpha = 1.0f;
			} else {
				mPaneList0[1]->setAlpha(128);
				mAnimScreen[2]->mMesgAlpha = 0.5f;
			}
			mScreenObj->animation();
			if (mDoShowNoController) {
				mNoControllerTimer += 0.2f;
				if (mNoControllerTimer > 1.0f) {
					mNoControllerTimer = 1.0f;
				}
			} else {
				mNoControllerTimer -= 0.2f;
				if (mNoControllerTimer < 0.0f) {
					mNoControllerTimer = 0.0f;
				}
			}
			mAnimScreen[0]->mMesgAlpha = 1.0f - mNoControllerTimer;
			mAnimScreen[3]->mMesgAlpha = mNoControllerTimer;
			if (mState >= 2) {
				for (int i = 0; i < 2; i++) {
					mPaneList0[i]->updateScale(mScaleMgr[i]->calc());
				}
			}
			mScreenObj->setXY(mMovePos, 0.0f);
		}
	}
}

/**
 * @note Address: 0x8038E318
 * @note Size: 0x660
 */
void TChallengePlayModeScreen::draw(Graphics& gfx, J2DPerspGraph* persp)
{
	if (mState) {
		TScreenBase::draw(gfx, persp);
		gfx.mOrthoGraph.setPort();

		J2DPicture* pic = mSphereTex;
		J2DPane* pic2   = mPane3;
		u32 x1, y1, x2, y2;
		y2 = pic->getHeight() * pic2->mScale.y * 1.1f;
		x2 = pic->getWidth() * pic2->mScale.x * 1.1f;
		y1 = (1.0f - mAlphaTimer) * pic->getHeight() * pic2->mScale.y * 1.1f + TChallengeSelect::mMetOffset._04 + pic2->mGlobalMtx[1][3];
		x1 = TChallengeSelect::mMetOffset._00 + pic2->mGlobalMtx[0][3];
		GXSetScissor(x1, y1, x2, y2);

		pic  = mSphereTex;
		pic2 = mPane3;
		pic->draw(TChallengeSelect::mMetOffset._00 + pic2->mGlobalMtx[0][3], TChallengeSelect::mMetOffset._04 + pic2->mGlobalMtx[1][3],
		          pic->getWidth() * pic2->mScale.x * 1.1f, pic->getHeight() * pic2->mScale.y * 1.1f, false, false, false);
		mSphereTex->calcMtx();

		pic  = mSphereTex;
		pic2 = mPane5;
		y2   = pic->getHeight() * pic2->mScale.y * 1.1f;
		x2   = pic->getWidth() * pic2->mScale.x * 1.1f;
		y1   = (1.0f - mAlphaTimer) * pic->getHeight() * pic2->mScale.y * 1.1f + TChallengeSelect::mMetOffset._04 + pic2->mGlobalMtx[1][3];
		x1   = TChallengeSelect::mMetOffset._00 + pic2->mGlobalMtx[0][3];
		GXSetScissor(x1, y1, x2, y2);

		pic  = mSphereTex;
		pic2 = mPane3;
		pic->draw(TChallengeSelect::mMetOffset._00 + pic2->mGlobalMtx[0][3], TChallengeSelect::mMetOffset._04 + pic2->mGlobalMtx[1][3],
		          pic->getWidth() * pic2->mScale.x * 1.1f, pic->getHeight() * pic2->mScale.y * 1.1f, false, false, false);
		mSphereTex->calcMtx();
		GXSetScissor(0, 0, 640, 480);

		J2DPicture* pane = static_cast<J2DPicture*>(mScreenObj->search('P2orimaF'));
		pane->setAlpha(mPaneList0[1]->mAlpha);
		f32 width = pane->getWidth();
		pane->draw(pane->getGlbVtx(GLBVTX_BtmLeft).x + width, pane->getGlbVtx(GLBVTX_BtmRight).y, -width, pane->getHeight(), false, false,
		           false);
		pane->calcMtx();
		pane->setAlpha(0);

		pane = static_cast<J2DPicture*>(mPane4);
		pane->setAlpha(mPaneList0[1]->mAlpha);
		width = pane->getWidth();
		pane->draw(pane->getGlbVtx(GLBVTX_BtmLeft).x + width, pane->getGlbVtx(GLBVTX_BtmRight).y, -width, pane->getHeight(), false, false,
		           false);
		pane->calcMtx();
		pane->setAlpha(0);

		pane = static_cast<J2DPicture*>(mPaneList1[1]);
		pane->setAlpha(pane->mAlpha);
		width = pane->getWidth();
		pane->draw(pane->getGlbVtx(GLBVTX_BtmLeft).x + width, pane->getGlbVtx(GLBVTX_BtmRight).y, -width, pane->getHeight(), false, false,
		           false);
		pane->calcMtx();

		pic  = mSphereTex;
		pic2 = mPane5;
		y2   = pic->getHeight() * pic2->mScale.y * 1.1f;
		x2   = pic->getWidth() * pic2->mScale.x * 1.1f;
		y1   = (1.0f - mAlphaTimer) * pic->getHeight() * pic2->mScale.y * 1.1f + TChallengeSelect::mMetOffset._04 + pic2->mGlobalMtx[1][3];
		x1   = TChallengeSelect::mMetOffset._00 + pic2->mGlobalMtx[0][3];
		GXSetScissor(x1, y1, x2, y2);
		pic  = mSphereTex;
		pic2 = mPane4;
		pic->draw(TChallengeSelect::mMetOffset._00 + pic2->mGlobalMtx[0][3], TChallengeSelect::mMetOffset._04 + pic2->mGlobalMtx[1][3],
		          pic->getWidth() * pic2->mScale.x * 1.1f, pic->getHeight() * pic2->mScale.y * 1.1f, false, false, false);
		mSphereTex->calcMtx();

		GXSetScissor(0, 0, 640, 480);
		gfx.mPerspGraph.setPort();
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stmw     r24, 0x50(r1)
	mr       r29, r3
	mr       r30, r4
	lwz      r0, 0x80(r3)
	cmpwi    r0, 0
	beq      lbl_8038E95C
	bl       draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph
	addi     r3, r30, 0xbc
	lwz      r12, 0xbc(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r26, 0x20(r29)
	lwz      r25, 0x24(r29)
	lfs      f1, 0x2c(r26)
	lfs      f0, 0x24(r26)
	lfs      f31, 0xd0(r25)
	fsubs    f0, f1, f0
	lfs      f1, lbl_8051F040@sda21(r2)
	fmuls    f0, f0, f31
	fmuls    f1, f1, f0
	bl       __cvt_fp2unsigned
	lfs      f2, 0x28(r26)
	mr       r28, r3
	lfs      f1, 0x20(r26)
	lfs      f0, 0xcc(r25)
	fsubs    f1, f2, f1
	lfs      f2, lbl_8051F040@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f1, f2, f0
	bl       __cvt_fp2unsigned
	lfs      f1, 0x2c(r26)
	addi     r31, r13, mMetOffset__Q28Morimura16TChallengeSelect@sda21
	lfs      f0, 0x24(r26)
	mr       r27, r3
	lfs      f4, lbl_8051EFF0@sda21(r2)
	fsubs    f0, f1, f0
	lfs      f2, 0x98(r29)
	lfs      f3, lbl_8051F040@sda21(r2)
	lfs      f1, 4(r31)
	fsubs    f4, f4, f2
	fmuls    f2, f0, f31
	lfs      f0, 0x9c(r25)
	fmuls    f2, f3, f2
	fadds    f0, f1, f0
	fmadds   f1, f4, f2, f0
	bl       __cvt_fp2unsigned
	lfs      f1, mMetOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	mr       r26, r3
	lfs      f0, 0x8c(r25)
	fadds    f1, f1, f0
	bl       __cvt_fp2unsigned
	mr       r4, r26
	mr       r5, r27
	mr       r6, r28
	bl       GXSetScissor
	lwz      r3, 0x20(r29)
	li       r4, 0
	lwz      r7, 0x24(r29)
	li       r5, 0
	lfs      f3, 0x28(r3)
	li       r6, 0
	lfs      f2, 0x20(r3)
	lfs      f1, 0x2c(r3)
	lfs      f0, 0x24(r3)
	fsubs    f3, f3, f2
	lfs      f2, 0xcc(r7)
	fsubs    f0, f1, f0
	lfs      f5, 0xd0(r7)
	lwz      r12, 0(r3)
	fmuls    f1, f3, f2
	lfs      f4, lbl_8051F040@sda21(r2)
	fmuls    f0, f0, f5
	fmuls    f3, f4, f1
	lfs      f7, mMetOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	lfs      f6, 0x8c(r7)
	lfs      f5, 4(r31)
	fmuls    f4, f4, f0
	lfs      f2, 0x9c(r7)
	lwz      r12, 0xec(r12)
	fadds    f1, f7, f6
	fadds    f2, f5, f2
	mtctr    r12
	bctrl
	lwz      r3, 0x20(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r25, 0x20(r29)
	lwz      r24, 0x2c(r29)
	lfs      f1, 0x2c(r25)
	lfs      f0, 0x24(r25)
	lfs      f31, 0xd0(r24)
	fsubs    f0, f1, f0
	lfs      f1, lbl_8051F040@sda21(r2)
	fmuls    f0, f0, f31
	fmuls    f1, f1, f0
	bl       __cvt_fp2unsigned
	lfs      f2, 0x28(r25)
	mr       r28, r3
	lfs      f1, 0x20(r25)
	lfs      f0, 0xcc(r24)
	fsubs    f1, f2, f1
	lfs      f2, lbl_8051F040@sda21(r2)
	lfs      f3, lbl_8051EFCC@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	fmuls    f1, f3, f0
	bl       __cvt_fp2unsigned
	lfs      f1, 0x2c(r25)
	mr       r27, r3
	lfs      f0, 0x24(r25)
	lfs      f4, lbl_8051EFF0@sda21(r2)
	fsubs    f0, f1, f0
	lfs      f2, 0x9c(r29)
	lfs      f3, lbl_8051F040@sda21(r2)
	lfs      f1, 4(r31)
	fsubs    f4, f4, f2
	fmuls    f2, f0, f31
	lfs      f0, 0x9c(r24)
	fmuls    f2, f3, f2
	fadds    f0, f1, f0
	fmadds   f1, f4, f2, f0
	bl       __cvt_fp2unsigned
	lfs      f1, mMetOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	mr       r26, r3
	lfs      f0, 0x8c(r24)
	fadds    f1, f1, f0
	bl       __cvt_fp2unsigned
	mr       r4, r26
	mr       r5, r27
	mr       r6, r28
	bl       GXSetScissor
	lwz      r3, 0x20(r29)
	li       r4, 0
	lwz      r7, 0x2c(r29)
	li       r5, 0
	lfs      f3, 0x28(r3)
	li       r6, 0
	lfs      f2, 0x20(r3)
	lfs      f1, 0x2c(r3)
	lfs      f0, 0x24(r3)
	fsubs    f3, f3, f2
	lfs      f2, 0xcc(r7)
	fsubs    f0, f1, f0
	lfs      f5, 0xd0(r7)
	lwz      r12, 0(r3)
	fmuls    f1, f3, f2
	lfs      f4, lbl_8051F040@sda21(r2)
	fmuls    f0, f0, f5
	fmuls    f3, f4, f1
	lfs      f7, mMetOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	lfs      f6, 0x8c(r7)
	lfs      f5, 4(r31)
	fmuls    f4, f4, f0
	lfs      f2, 0x9c(r7)
	lwz      r12, 0xec(r12)
	fadds    f1, f7, f6
	fadds    f2, f5, f2
	mtctr    r12
	bctrl
	lwz      r3, 0x20(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	li       r4, 0
	li       r5, 0x280
	li       r6, 0x1e0
	bl       GXSetScissor
	lwz      r3, 8(r29)
	lis      r5, 0x696D6146@ha
	lis      r4, 0x50326F72@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x696D6146@l
	addi     r5, r4, 0x50326F72@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r24, r3
	lwz      r4, 0x1c(r29)
	lwz      r12, 0x24(r12)
	lbz      r4, 0xb2(r4)
	mtctr    r12
	bctrl
	lfs      f1, 0x28(r24)
	mr       r4, r24
	lfs      f0, 0x20(r24)
	addi     r3, r1, 0x38
	li       r5, 1
	fsubs    f31, f1, f0
	bl       getGlbVtx__7J2DPaneCFUc
	mr       r4, r24
	addi     r3, r1, 0x44
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f0, 0x44(r1)
	fneg     f3, f31
	lwz      r12, 0(r24)
	mr       r3, r24
	fadds    f1, f0, f31
	lfs      f2, 0x2c(r24)
	lfs      f0, 0x24(r24)
	lwz      r12, 0xec(r12)
	li       r4, 0
	fsubs    f4, f2, f0
	lfs      f2, 0x3c(r1)
	li       r5, 0
	li       r6, 0
	mtctr    r12
	bctrl
	mr       r3, r24
	lwz      r12, 0(r24)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r24
	li       r4, 0
	lwz      r12, 0(r24)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r24, 0x28(r29)
	lwz      r4, 0x1c(r29)
	mr       r3, r24
	lwz      r12, 0(r24)
	lbz      r4, 0xb2(r4)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x28(r24)
	mr       r4, r24
	lfs      f0, 0x20(r24)
	addi     r3, r1, 0x20
	li       r5, 1
	fsubs    f31, f1, f0
	bl       getGlbVtx__7J2DPaneCFUc
	mr       r4, r24
	addi     r3, r1, 0x2c
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f0, 0x2c(r1)
	fneg     f3, f31
	lwz      r12, 0(r24)
	mr       r3, r24
	fadds    f1, f0, f31
	lfs      f2, 0x2c(r24)
	lfs      f0, 0x24(r24)
	lwz      r12, 0xec(r12)
	li       r4, 0
	fsubs    f4, f2, f0
	lfs      f2, 0x24(r1)
	li       r5, 0
	li       r6, 0
	mtctr    r12
	bctrl
	mr       r3, r24
	lwz      r12, 0(r24)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r24
	li       r4, 0
	lwz      r12, 0(r24)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r29)
	lwz      r12, 0(r3)
	mr       r24, r3
	lbz      r4, 0xb2(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x28(r24)
	mr       r4, r24
	lfs      f0, 0x20(r24)
	addi     r3, r1, 8
	li       r5, 1
	fsubs    f31, f1, f0
	bl       getGlbVtx__7J2DPaneCFUc
	mr       r4, r24
	addi     r3, r1, 0x14
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f0, 0x14(r1)
	fneg     f3, f31
	lwz      r12, 0(r24)
	mr       r3, r24
	fadds    f1, f0, f31
	lfs      f2, 0x2c(r24)
	lfs      f0, 0x24(r24)
	lwz      r12, 0xec(r12)
	li       r4, 0
	fsubs    f4, f2, f0
	lfs      f2, 0xc(r1)
	li       r5, 0
	li       r6, 0
	mtctr    r12
	bctrl
	mr       r3, r24
	lwz      r12, 0(r24)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r24, 0x20(r29)
	lwz      r25, 0x2c(r29)
	lfs      f1, 0x2c(r24)
	lfs      f0, 0x24(r24)
	lfs      f31, 0xd0(r25)
	fsubs    f0, f1, f0
	lfs      f1, lbl_8051F040@sda21(r2)
	fmuls    f0, f0, f31
	fmuls    f1, f1, f0
	bl       __cvt_fp2unsigned
	lfs      f2, 0x28(r24)
	mr       r26, r3
	lfs      f1, 0x20(r24)
	lfs      f0, 0xcc(r25)
	fsubs    f1, f2, f1
	lfs      f2, lbl_8051F040@sda21(r2)
	lfs      f3, lbl_8051EFCC@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	fmuls    f1, f3, f0
	bl       __cvt_fp2unsigned
	lfs      f1, 0x2c(r24)
	mr       r27, r3
	lfs      f0, 0x24(r24)
	lfs      f4, lbl_8051EFF0@sda21(r2)
	fsubs    f0, f1, f0
	lfs      f2, 0x9c(r29)
	lfs      f3, lbl_8051F040@sda21(r2)
	lfs      f1, 4(r31)
	fsubs    f4, f4, f2
	fmuls    f2, f0, f31
	lfs      f0, 0x9c(r25)
	fmuls    f2, f3, f2
	fadds    f0, f1, f0
	fmadds   f1, f4, f2, f0
	bl       __cvt_fp2unsigned
	lfs      f1, mMetOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	mr       r28, r3
	lfs      f0, 0x8c(r25)
	fadds    f1, f1, f0
	bl       __cvt_fp2unsigned
	mr       r4, r28
	mr       r5, r27
	mr       r6, r26
	bl       GXSetScissor
	lwz      r3, 0x20(r29)
	li       r4, 0
	lwz      r7, 0x28(r29)
	li       r5, 0
	lfs      f3, 0x28(r3)
	li       r6, 0
	lfs      f2, 0x20(r3)
	lfs      f1, 0x2c(r3)
	lfs      f0, 0x24(r3)
	fsubs    f3, f3, f2
	lfs      f2, 0xcc(r7)
	fsubs    f0, f1, f0
	lfs      f5, 0xd0(r7)
	lwz      r12, 0(r3)
	fmuls    f1, f3, f2
	lfs      f4, lbl_8051F040@sda21(r2)
	fmuls    f0, f0, f5
	fmuls    f3, f4, f1
	lfs      f7, mMetOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	lfs      f6, 0x8c(r7)
	lfs      f5, 4(r31)
	fmuls    f4, f4, f0
	lfs      f2, 0x9c(r7)
	lwz      r12, 0xec(r12)
	fadds    f1, f7, f6
	fadds    f2, f5, f2
	mtctr    r12
	bctrl
	lwz      r3, 0x20(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	li       r4, 0
	li       r5, 0x280
	li       r6, 0x1e0
	bl       GXSetScissor
	addi     r3, r30, 0x190
	lwz      r12, 0x190(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8038E95C:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	lmw      r24, 0x50(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x124
 */
void TChallengePlayModeScreen::setState(PlayModeScreenState state)
{
	mState = state;
	switch (mState) {
	case PlayModeScreen_Open:
		mTimer = 0.0f;
		for (int i = 0; i < 4; i++) {
			mAnimScreen[i]->open((0.1f * (f32)i) + 0.1f);
		}
		break;
	case PlayModeScreen_Close:
		mTimer = 0.0f;
		for (int i = 0; i < 4; i++) {
			mAnimScreen[i]->close();
		}
		mEfxCursor1->kill();
		mEfxCursor2->kill();
		break;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void TChallengePlayModeScreen::setBlink(f32 max)
{
	if (!TChallengeSelect::mSelected1p) {
		mScaleMgr[0]->up(0.25f, 20.0f, 0.4f, 0.0f);
		mAnimScreen[1]->blink(max, 0.0f);
		mAnimScreen[2]->blink(0.0f, 0.0f);
	} else {
		mAnimScreen[1]->blink(0.0f, 0.0f);
		mAnimScreen[2]->blink(max, 0.0f);
		if (TChallengeSelect::mConnect2p) {
			mScaleMgr[1]->up(0.25f, 20.0f, 0.4f, 0.0f);
		} else {
			mScaleMgr[1]->up(0.15f, 15.0f, 0.3f, 0.0f);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void TChallengePlayModeScreen::reset()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void TChallengePlayModeScreen::createMetPicture(ResTIMG const* data)
{
	P2ASSERTLINE(1207, data);
	mSphereTex = new J2DPicture(data);
}

/**
 * @note Address: 0x8038E978
 * @note Size: 0x3C
 */
void TChallengeSelectExplanationWindow::create(char const* path, u32 flags)
{
	TScreenBase::create(path, flags);
	mTransXModifier = 800.0f;
	mTransYModifier = 0.0f;
}

/**
 * @note Address: 0x8038E9B4
 * @note Size: 0x4
 */
void TChallengeSelectExplanationWindow::screenScaleUp() { }

/**
 * @note Address: 0x8038E9B8
 * @note Size: 0x13C
 */
TChallengeSelect::TChallengeSelect()
    : TTestBase("challengeSelect")
{
	mStageList            = nullptr;
	mSelectScreen         = nullptr;
	mPlayModeScreen       = nullptr;
	mRulesScreen          = nullptr;
	mControls             = nullptr;
	mDisp                 = nullptr;
	mPanelList            = nullptr;
	mFloorCounter         = nullptr;
	mPaneSelect           = nullptr;
	mOffsMesg             = nullptr;
	mEfxDive              = nullptr;
	mCurrentSelection     = 0;
	mFloorCount           = 0;
	mBgAlpha              = 0;
	mStageChangeCounter   = 0;
	_134                  = true;
	mIsInDemo             = false;
	_136                  = false;
	mSelectionEffectAngle = 0.0f;
	mLevelNameMoveTimer   = 1.0f;
	mLevelNameMoveState   = -1;
	mDoCreatePikiDiveEfx  = false;
	_148                  = 0.0f;
	_14C                  = 1.0f;

	mRightOffset = 0;
	mDownOffset  = 0;
	mSelected1p  = true;
	mDivePikiNum = 0;

	for (int i = 0; i < 5; i++) {
		mChallengePiki[i] = nullptr;
		mPikiCounters[i]  = nullptr;
		mPikiCounts[i]    = 0;
	}

	for (int i = 0; i < 2; i++) {
		mHighScoreCounter[i] = nullptr;
		mHighScoreValue[i]   = 0;
		mPaneLevelName[i]    = nullptr;
		mDopeCounter[i]      = nullptr;
		mDopeCount[i]        = 0;
		mDoping[i]           = nullptr;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 * Probably something like this
 */
void TChallengeSelect::setDebugHeapParent(JKRHeap* heap) { mDebugHeap = static_cast<JKRExpHeap*>(heap); }

/**
 * @note Address: 0x8038EBE8
 * @note Size: 0x1B98
 */
void TChallengeSelect::doCreate(JKRArchive* arc)
{
	int test                        = 0;
	mArchive                        = arc;
	DispMemberChallengeSelect* disp = static_cast<DispMemberChallengeSelect*>(getDispMember());
	if (disp->isID(OWNER_MRMR, MEMBER_CHALLENGE_SELECT)) {
		mDisp = disp;
		test  = mDisp->mSelectedStageIndex;
	} else {
		mIsSection = true;
	}

	if (mIsSection) {
		if (mDebugHeapParent) {
			mDebugHeap = JKRExpHeap::create(0x100000, mDebugHeapParent, true);
			P2ASSERTLINE(1339, mDebugHeap);
			mDisp                        = new (mDebugHeap, 0) DispMemberChallengeSelect;
			mDisp->mDebugExpHeap         = mDebugHeap;
			mDisp->mDispWorldMapInfoWin0 = new og::Screen::DispMemberWorldMapInfoWin0;
			getOwner()->setDispMember(mDisp);
		} else {
			JUT_PANICLINE(1349, "set DebugHeapParent. mail to morimun.\n");
		}
		mStageList = new Game::ChallengeGame::StageList;
		void* file = JKRDvdRipper::loadToMainRAM("/user/Matoba/challenge/stages.txt", nullptr, Switch_0, 0, nullptr,
		                                         JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
		if (file) {
			RamStream strm(file, -1);
			strm.setMode(STREAM_MODE_TEXT, 1);
			mStageList->read(strm);
		}
	}

	if (!mIsSection) {
		mDisp->mDispWorldMapInfoWin0 = new og::Screen::DispMemberWorldMapInfoWin0;
	}

	if (mIsSection) {
		int id = randFloat() * 30.0f;
		if (mAllCourseOpen) {
			id = CHALLENGE_COURSE_COUNT;
		}
		test       = (f32)id * randFloat();
		mStageData = new DebugStageData*[CHALLENGE_COURSE_COUNT];
		for (int i = 0; i < CHALLENGE_COURSE_COUNT; i++) {
			mStageData[i]              = new DebugStageData;
			mStageData[i]->mIsPerfect  = false;
			mStageData[i]->mIsComplete = false;
			mStageData[i]->mIsChange   = false;
			mStageData[i]->mIsUnlocked = false;
			if (i <= id) {
				f32 comp = randFloat();
				if (comp < 0.2f) {
					mStageData[i]->mIsPerfect = true;
				} else if (comp < 0.5f) {
					mStageData[i]->mIsComplete = true;
				} else {
					mStageData[i]->mIsUnlocked = true;
				}
				if (!mStageData[i]->mIsPerfect) {
					if (randFloat() < 0.5f) {
						mStageData[i]->mIsChange = true;
					}
				}
				Game::ChallengeGame::StageData* data = mStageList->getStageData(i);
				if (data) {
					mStageData[i]->mFloors      = data->mFloorCounts;
					mStageData[i]->mBitterSpray = data->mStartNumBitter;
					mStageData[i]->mSpicySpray  = data->mStartNumSpicy;
					mStageData[i]->mPikis[0]    = 100;
					mStageData[i]->mPikis[1]    = data->mPikiContainer.getColorSum(0);
					mStageData[i]->mPikis[2]    = data->mPikiContainer.getColorSum(2);
					mStageData[i]->mPikis[3]    = data->mPikiContainer.getColorSum(4);
					mStageData[i]->mPikis[4]    = data->mPikiContainer.getColorSum(3);
					mStageData[i]->mScore1      = -1;
					mStageData[i]->mScore2      = -1;
					if (randFloat() < 0.5f) {
						mStageData[i]->mScore1 = randFloat() * 100000.0f;
						mStageData[i]->mScore2 = randFloat() * 100000.0f;
					}
				}
			}
		}
	}
	mCurrentSelection = test;
	mDownOffset       = test / 5 - test % 5;
	mRightOffset      = test - (test / 5 - test % 5);
	u64 tags[2]       = { '4901_00', '4910_00' };
	mOffsMesg         = new TOffsetMsgSet(tags, '4900_00', 2);
	mControls         = getGamePad();

	char* paths[4] = { "timg/flower_seed.bti", "timg/leaf_icon.bti", "timg/flower_icon.bti", "timg/flower_p_icon.bti" };
	for (int i = 0; i < 4; i++) {
		mIconTexture[i] = static_cast<ResTIMG*>(mArchive->getResource(paths[i]));
		P2ASSERTLINE(1464, mIconTexture[i]);
	}

	mPlayModeScreen = new TChallengePlayModeScreen(arc, 0);
	mPlayModeScreen->create("challenge_modo_1p_2p.blo", 0x20000);

	mRulesScreen = new TChallengeSelectExplanationWindow(arc, 5);
	mRulesScreen->create("challenge_rule_window.blo", 0x1040000);
	mRulesScreen->addAnim("challenge_rule_window.btk");
	mRulesScreen->addAnim("challenge_rule_window_02.btk");
	mRulesScreen->addAnim("challenge_rule_window_03.btk");
	mRulesScreen->addAnim("challenge_rule_window_04.btk");
	mRulesScreen->addAnim("challenge_rule_window_05.btk");

	mEfxDive        = new efx2d::T2DChalDive;
	JKRHeap* backup = JKRGetCurrentHeap();
	mDisp->mDebugExpHeap->becomeCurrentHeap();

	mSelectScreen = new TChallengeScreen(arc, 10);
	mSelectScreen->create("challengemodo_select.blo", 0x1040000);
	mSelectScreen->createAnimPane("challengemodo_select.bck");
	mSelectScreen->addAnim("challengemodo_select.bck");
	mSelectScreen->addAnim("challengemodo_select.bpk");
	mSelectScreen->addAnim("challengemodo_select.btk");
	mSelectScreen->addAnim("challengemodo_select_02.btk");
	mSelectScreen->addAnim("challengemodo_select_03.btk");
	mSelectScreen->addAnim("challengemodo_select_04.btk");
	mSelectScreen->addAnim("challengemodo_select_05.btk");
	mSelectScreen->addAnim("challengemodo_select_06.btk");
	mSelectScreen->addAnim("challengemodo_select_07.btk");
	mSelectScreen->addAnim("challengemodo_select_08.btk");

	P2DScreen::Mgr_tuning* screen = mSelectScreen->mScreenObj;

	mChallengePiki[0] = new TChallengePiki(screen->search('Pr_fw'), screen->search('Pr_pk_r'), screen->search('Pr_pk_l'));
	mChallengePiki[1] = new TChallengePiki(screen->search('Py_fw'), screen->search('Py_pk_r'), screen->search('Py_pk_l'));
	mChallengePiki[2] = new TChallengePiki(screen->search('Pb_fw'), screen->search('Pb_pk_r'), screen->search('Pb_pk_l'));
	mChallengePiki[3] = new TChallengePiki(screen->search('Pw_fw'), screen->search('Pw_pk_r'), screen->search('Pw_pk_l'));
	mChallengePiki[4] = new TChallengePiki(screen->search('Pbl_fw'), screen->search('Pbl_pk_r'), screen->search('Pbl_pk_l'));

	mPaneLevelName[0] = screen->search('Tyel1');
	mPaneLevelName[1] = screen->search('Tyel2');
	for (int i = 0; i < 2; i++) {
		P2ASSERTLINE(1525, mPaneLevelName[i]);
	}

	mDoping[0] = new TChallengeDoping(screen->search('PICT_027'), screen->search('PICT_025'), screen->search('PICT_026'),
	                                  screen->search('PICT_027'));
	mDoping[1] = new TChallengeDoping(screen->search('PICT_027'), screen->search('PICT_025'), screen->search('PICT_026'),
	                                  screen->search('PICT_027'));

	J2DPane* pane = screen->search('Peffect');
	P2ASSERTLINE(1536, pane);
	pane->show();
	mPaneSelect = screen->search('Pselec00');
	P2ASSERTLINE(1541, mPaneSelect);

	mHighScoreCounter[0] = setScaleUpCounter(screen, 'Phs1p1', &mHighScoreValue[0], 5, mArchive);
	mHighScoreCounter[1] = setScaleUpCounter(screen, 'Phs2p1', &mHighScoreValue[1], 5, mArchive);

	u64 countertags[5] = { 'Prp1', 'Pyp1', 'Pbp1', 'Pwp1', 'Pblp1' };
	for (int i = 0; i < 5; i++) {
		mPikiCounters[i] = setScaleUpCounter(screen, countertags[i], &mPikiCounts[i], 3, mArchive);
	}

	mDopeCounter[0] = setScaleUpCounter(screen, 'Pekis_p1', &mDopeCount[0], 2, mArchive);
	mDopeCounter[1] = setScaleUpCounter(screen, 'Pekis_r1', &mDopeCount[1], 2, mArchive);
	mFloorCounter   = setScaleUpCounter(screen, 'Pfloor1', &mFloorCount, 2, mArchive);

	// clang-format off
	u64 panelTags[3][30] = {
			'Pfl00', 'Pselec00', 'Pana00',
			'Pfl01', 'Pselec01', 'Pana01',
			'Pfl02', 'Pselec02', 'Pana02',
			'Pfl03', 'Pselec03', 'Pana03',
			'Pfl04', 'Pselec04', 'Pana04',
			'Pfl05', 'Pselec05', 'Pana09',
			'Pfl06', 'Pselec06', 'Pana08',
			'Pfl07', 'Pselec07', 'Pana07',
			'Pfl08', 'Pselec08', 'Pana06',
			'Pfl09', 'Pselec09', 'Pana05',
			'Pfl10', 'Pselec10', 'Pana14',
			'Pfl11', 'Pselec11', 'Pana13',
			'Pfl12', 'Pselec12', 'Pana12',
			'Pfl13', 'Pselec13', 'Pana11',
			'Pfl14', 'Pselec14', 'Pana10',
			'Pfl15', 'Pselec15', 'Pana19',
			'Pfl16', 'Pselec16', 'Pana18',
			'Pfl17', 'Pselec17', 'Pana17',
			'Pfl18', 'Pselec18', 'Pana16',
			'Pfl19', 'Pselec19', 'Pana15',
			'Pfl20', 'Pselec20', 'Pana24',
			'Pfl21', 'Pselec21', 'Pana23',
			'Pfl22', 'Pselec22', 'Pana22',
			'Pfl23', 'Pselec23', 'Pana21',
			'Pfl24', 'Pselec24', 'Pana20',
			'Pfl25', 'Pselec25', 'Pana29',
			'Pfl26', 'Pselec26', 'Pana28',
			'Pfl27', 'Pselec27', 'Pana27',
			'Pfl28', 'Pselec28', 'Pana26',
			'Pfl29', 'Pselec29', 'Pana25' };
	// clang-format on

	mPanelList = new TChallengePanel*[CHALLENGE_COURSE_COUNT];
	for (int i = 0; i < CHALLENGE_COURSE_COUNT; i++) {
		mPanelList[i] = new TChallengePanel(static_cast<J2DPictureEx*>(screen->search(panelTags[0][i])), screen->search(panelTags[1][i]),
		                                    screen->search(panelTags[2][i]));
		int state     = getState(i);
		mPanelList[i]->stateInitialize(mArchive, state, i);
		mPanelList[i]->mAfterState = getAfterState(state);
	}

	mMaxStages = getIndexMax();
	if (mMaxStages > 0) {
		mMaxStages--;
	}
	setInfo(mCurrentSelection);
	setStageName(mCurrentSelection);
	for (int i = 0; i <= mMaxStages; i++) {
		if (isChangeState(i)) {
			TChallengePanel* panel = mPanelList[i];
			if (panel->mState < 3) {
				panel->mIsUnlock = true;
			}
		}
	}

	mSelected1p = true;
	if (JUTGamePad::mPadStatus[1].err != -1) {
		mSelected1p = true;
	} else {
		mSelected1p = false;
	}

	if (mDisp->mPlayType == 1) {
		mSelected1p = false;
	} else if (!mConnect2p) {
		mSelected1p = true;
	}

	mPlayModeScreen->createMetPicture(static_cast<ResTIMG*>(mArchive->getResource("timg/sphere.bti")));
	backup->becomeCurrentHeap();

	/*
	stwu     r1, -0x7a0(r1)
	mflr     r0
	stw      r0, 0x7a4(r1)
	stmw     r21, 0x774(r1)
	mr       r29, r4
	lis      r4, lbl_80493FC0@ha
	mr       r31, r3
	addi     r30, r4, lbl_80493FC0@l
	li       r28, 0
	stw      r29, 0x78(r3)
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x4D524D52@ha
	lis      r6, 0x4C454354@ha
	lis      r5, 0x43485345@ha
	mr       r21, r3
	addi     r4, r4, 0x4D524D52@l
	addi     r6, r6, 0x4C454354@l
	addi     r5, r5, 0x43485345@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8038EC4C
	stw      r21, 0x90(r31)
	lwz      r3, 0x90(r31)
	lwz      r28, 0x14(r3)
	b        lbl_8038EC54

lbl_8038EC4C:
	li       r0, 1
	stb      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)

lbl_8038EC54:
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8038EE28
	lwz      r4, mDebugHeapParent__Q28Morimura16TChallengeSelect@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_8038ED90
	lis      r3, 0x10
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	cmplwi   r3, 0
	stw      r3, mDebugHeap__Q28Morimura16TChallengeSelect@sda21(r13)
	bne      lbl_8038EC98
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x53b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038EC98:
	lwz      r4, mDebugHeap__Q28Morimura16TChallengeSelect@sda21(r13)
	li       r3, 0x24
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_8038ECF0
	lis      r5, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r4, __vt__Q28Morimura25DispMemberChallengeSelect@ha
	addi     r0, r5, __vt__Q32og6Screen14DispMemberBase@l
	li       r5, 0
	stw      r0, 0(r3)
	addi     r4, r4, __vt__Q28Morimura25DispMemberChallengeSelect@l
	li       r0, -1
	stw      r5, 4(r3)
	stw      r4, 0(r3)
	stw      r5, 8(r3)
	stw      r5, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r5, 0x14(r3)
	stw      r5, 0x18(r3)
	stw      r5, 0x1c(r3)
	stw      r5, 0x20(r3)

lbl_8038ECF0:
	stw      r3, 0x90(r31)
	li       r3, 0x28
	lwz      r0, mDebugHeap__Q28Morimura16TChallengeSelect@sda21(r13)
	lwz      r4, 0x90(r31)
	stw      r0, 0xc(r4)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8038ED68
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
	addi     r0, r4, __vt__Q32og6Screen14DispMemberBase@l
	lis      r6, 0x305F3030@ha
	stw      r0, 0(r3)
	li       r8, 0
	lis      r5, 0x00343731@ha
	lis      r4, 0x315F3030@ha
	stw      r8, 4(r3)
	addi     r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
	addi     r6, r6, 0x305F3030@l
	addi     r5, r5, 0x00343731@l
	stw      r0, 0(r3)
	addi     r4, r4, 0x315F3030@l
	li       r0, 0xb4
	stw      r8, 8(r3)
	stw      r6, 0x14(r3)
	stw      r5, 0x10(r3)
	stw      r4, 0x1c(r3)
	stw      r5, 0x18(r3)
	stb      r0, 0x20(r3)
	stb      r8, 0x21(r3)

lbl_8038ED68:
	lwz      r4, 0x90(r31)
	stw      r3, 0x20(r4)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x90(r31)
	bl       setDispMember__Q26Screen9SceneBaseFPQ32og6Screen14DispMemberBase
	b        lbl_8038EDA4

lbl_8038ED90:
	addi     r3, r30, 0x14
	addi     r5, r30, 0x470
	li       r4, 0x545
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038EDA4:
	li       r3, 0x94
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8038EDBC
	bl       __ct__Q34Game13ChallengeGame9StageListFv
	mr       r0, r3

lbl_8038EDBC:
	stw      r0, 0x7c(r31)
	li       r0, 0
	addi     r3, r30, 0x498
	li       r4, 0
	stw      r0, 8(r1)
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	cmplwi   r3, 0
	beq      lbl_8038EE28
	mr       r4, r3
	addi     r3, r1, 0x328
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x334(r1)
	bne      lbl_8038EE1C
	li       r0, 0
	stw      r0, 0x73c(r1)

lbl_8038EE1C:
	lwz      r3, 0x7c(r31)
	addi     r4, r1, 0x328
	bl       read__Q34Game13ChallengeGame9StageListFR6Stream

lbl_8038EE28:
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8038EEA4
	li       r3, 0x28
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8038EE9C
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
	addi     r0, r4, __vt__Q32og6Screen14DispMemberBase@l
	lis      r6, 0x305F3030@ha
	stw      r0, 0(r3)
	li       r8, 0
	lis      r5, 0x00343731@ha
	lis      r4, 0x315F3030@ha
	stw      r8, 4(r3)
	addi     r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
	addi     r6, r6, 0x305F3030@l
	addi     r5, r5, 0x00343731@l
	stw      r0, 0(r3)
	addi     r4, r4, 0x315F3030@l
	li       r0, 0xb4
	stw      r8, 8(r3)
	stw      r6, 0x14(r3)
	stw      r5, 0x10(r3)
	stw      r4, 0x1c(r3)
	stw      r5, 0x18(r3)
	stb      r0, 0x20(r3)
	stb      r8, 0x21(r3)

lbl_8038EE9C:
	lwz      r4, 0x90(r31)
	stw      r3, 0x20(r4)

lbl_8038EEA4:
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8038F21C
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r3, 0x4330
	stw      r0, 0x74c(r1)
	lbz      r0, mAllCourseOpen__Q28Morimura16TChallengeSelect@sda21(r13)
	stw      r3, 0x748(r1)
	lfd      f2, lbl_8051EFB0@sda21(r2)
	cmplwi   r0, 0
	lfd      f0, 0x748(r1)
	lfs      f1, lbl_8051EF90@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051EF98@sda21(r2)
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x750(r1)
	lwz      r25, 0x754(r1)
	beq      lbl_8038EEFC
	li       r25, 0x1e

lbl_8038EEFC:
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r4, 0x4330
	stw      r0, 0x75c(r1)
	xoris    r0, r25, 0x8000
	lfd      f2, lbl_8051EFB0@sda21(r2)
	li       r3, 0x78
	stw      r4, 0x758(r1)
	lfs      f0, lbl_8051EF90@sda21(r2)
	lfd      f1, 0x758(r1)
	stw      r0, 0x764(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x760(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x760(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x768(r1)
	lwz      r28, 0x76c(r1)
	bl       __nwa__FUl
	stw      r3, 0x98(r31)
	li       r24, 0
	li       r26, 0

lbl_8038EF5C:
	li       r3, 0x2c
	bl       __nw__FUl
	lwz      r4, 0x98(r31)
	li       r0, 0
	cmpw     r24, r25
	stwx     r3, r4, r26
	lwz      r3, 0x98(r31)
	lwzx     r3, r3, r26
	stb      r0, 3(r3)
	lwz      r3, 0x98(r31)
	lwzx     r3, r3, r26
	stb      r0, 2(r3)
	lwz      r3, 0x98(r31)
	lwzx     r3, r3, r26
	stb      r0, 1(r3)
	lwz      r3, 0x98(r31)
	lwzx     r3, r3, r26
	stb      r0, 0(r3)
	bgt      lbl_8038F20C
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x76c(r1)
	lfd      f3, lbl_8051EFB0@sda21(r2)
	stw      r0, 0x768(r1)
	lfs      f1, lbl_8051EF90@sda21(r2)
	lfd      f2, 0x768(r1)
	lfs      f0, lbl_8051F008@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8038EFF0
	lwz      r3, 0x98(r31)
	li       r0, 1
	lwzx     r3, r3, r26
	stb      r0, 3(r3)
	b        lbl_8038F020

lbl_8038EFF0:
	lfs      f0, lbl_8051EF9C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8038F010
	lwz      r3, 0x98(r31)
	li       r0, 1
	lwzx     r3, r3, r26
	stb      r0, 2(r3)
	b        lbl_8038F020

lbl_8038F010:
	lwz      r3, 0x98(r31)
	li       r0, 1
	lwzx     r3, r3, r26
	stb      r0, 0(r3)

lbl_8038F020:
	lwz      r3, 0x98(r31)
	lwzx     r3, r3, r26
	lbz      r0, 3(r3)
	cmplwi   r0, 0
	bne      lbl_8038F078
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x76c(r1)
	lfd      f3, lbl_8051EFB0@sda21(r2)
	stw      r0, 0x768(r1)
	lfs      f1, lbl_8051EF90@sda21(r2)
	lfd      f2, 0x768(r1)
	lfs      f0, lbl_8051EF9C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8038F078
	lwz      r3, 0x98(r31)
	li       r0, 1
	lwzx     r3, r3, r26
	stb      r0, 1(r3)

lbl_8038F078:
	lwz      r3, 0x7c(r31)
	mr       r4, r24
	bl       getStageData__Q34Game13ChallengeGame9StageListFi
	or.      r27, r3, r3
	beq      lbl_8038F20C
	lwz      r4, 0x98(r31)
	li       r0, 0x64
	lwz      r6, 0x6c(r27)
	addi     r3, r27, 0x18
	lwzx     r5, r4, r26
	li       r4, 0
	stw      r6, 4(r5)
	lwz      r5, 0x98(r31)
	lwz      r6, 0x64(r27)
	lwzx     r5, r5, r26
	stw      r6, 0xc(r5)
	lwz      r5, 0x98(r31)
	lwz      r6, 0x68(r27)
	lwzx     r5, r5, r26
	stw      r6, 8(r5)
	lwz      r5, 0x98(r31)
	lwzx     r5, r5, r26
	stw      r0, 0x10(r5)
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, 0x98(r31)
	li       r4, 2
	lwzx     r5, r5, r26
	stw      r3, 0x14(r5)
	addi     r3, r27, 0x18
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, 0x98(r31)
	li       r4, 4
	lwzx     r5, r5, r26
	stw      r3, 0x18(r5)
	addi     r3, r27, 0x18
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, 0x98(r31)
	li       r4, 3
	lwzx     r5, r5, r26
	stw      r3, 0x1c(r5)
	addi     r3, r27, 0x18
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r4, 0x98(r31)
	li       r0, -1
	lwzx     r4, r4, r26
	stw      r3, 0x20(r4)
	lwz      r3, 0x98(r31)
	lwzx     r3, r3, r26
	stw      r0, 0x24(r3)
	lwz      r3, 0x98(r31)
	lwzx     r3, r3, r26
	stw      r0, 0x28(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x76c(r1)
	lfd      f3, lbl_8051EFB0@sda21(r2)
	stw      r0, 0x768(r1)
	lfs      f1, lbl_8051EF90@sda21(r2)
	lfd      f2, 0x768(r1)
	lfs      f0, lbl_8051EF9C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8038F20C
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x76c(r1)
	lwz      r3, 0x98(r31)
	stw      r0, 0x768(r1)
	lfd      f2, lbl_8051EFB0@sda21(r2)
	lfd      f0, 0x768(r1)
	lfs      f1, lbl_8051EF90@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051F054@sda21(r2)
	lwzx     r3, r3, r26
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x760(r1)
	lwz      r0, 0x764(r1)
	stw      r0, 0x24(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x75c(r1)
	lwz      r3, 0x98(r31)
	stw      r0, 0x758(r1)
	lfd      f2, lbl_8051EFB0@sda21(r2)
	lfd      f0, 0x758(r1)
	lfs      f1, lbl_8051EF90@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051F054@sda21(r2)
	lwzx     r3, r3, r26
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x750(r1)
	lwz      r0, 0x754(r1)
	stw      r0, 0x28(r3)

lbl_8038F20C:
	addi     r24, r24, 1
	addi     r26, r26, 4
	cmpwi    r24, 0x1e
	blt      lbl_8038EF5C

lbl_8038F21C:
	lis      r3, 0x66666667@ha
	stw      r28, 0xfc(r31)
	addi     r0, r3, 0x66666667@l
	li       r3, 0x18
	mulhw    r0, r0, r28
	lfd      f1, 0xf8(r30)
	lfd      f0, 0x100(r30)
	stfd     f1, 0x20(r1)
	stfd     f0, 0x28(r1)
	srawi    r5, r0, 1
	srawi    r0, r0, 1
	srwi     r4, r0, 0x1f
	srwi     r6, r5, 0x1f
	add      r0, r0, r4
	mulli    r0, r0, 5
	add      r4, r5, r6
	stw      r4, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	subf     r0, r0, r28
	stw      r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8038F294
	lis      r6, 0x305F3030@ha
	lis      r5, 0x00343930@ha
	addi     r4, r1, 0x20
	li       r7, 2
	addi     r6, r6, 0x305F3030@l
	addi     r5, r5, 0x00343930@l
	bl       __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
	mr       r0, r3

lbl_8038F294:
	stw      r0, 0xec(r31)
	mr       r3, r31
	bl       getGamePad__Q26Screen7ObjBaseCFv
	stw      r3, 0x8c(r31)
	lis      r3, mIconTexture__Q28Morimura16TChallengeSelect@ha
	addi     r22, r3, mIconTexture__Q28Morimura16TChallengeSelect@l
	addi     r21, r1, 0x10
	lwz      r5, 0x164(r30)
	li       r23, 0
	lwz      r4, 0x168(r30)
	lwz      r3, 0x16c(r30)
	lwz      r0, 0x170(r30)
	stw      r5, 0x10(r1)
	stw      r4, 0x14(r1)
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)

lbl_8038F2D4:
	lwz      r3, 0x78(r31)
	lwz      r4, 0(r21)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0(r22)
	lwz      r0, 0(r22)
	cmplwi   r0, 0
	bne      lbl_8038F310
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x5b8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038F310:
	addi     r23, r23, 1
	addi     r22, r22, 4
	cmpwi    r23, 4
	addi     r21, r21, 4
	blt      lbl_8038F2D4
	li       r3, 0xac
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8038F344
	mr       r4, r29
	li       r5, 0
	bl       __ct__Q28Morimura24TChallengePlayModeScreenFP10JKRArchivei
	mr       r0, r3

lbl_8038F344:
	stw      r0, 0x84(r31)
	addi     r4, r30, 0x4bc
	lis      r5, 2
	lwz      r3, 0x84(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r3, 0x30
	bl       __nw__FUl
	or.      r21, r3, r3
	beq      lbl_8038F38C
	mr       r4, r29
	li       r5, 5
	bl       __ct__Q28Morimura24TSelectExplanationWindowFP10JKRArchivei
	lis      r3, __vt__Q28Morimura33TChallengeSelectExplanationWindow@ha
	addi     r0, r3, __vt__Q28Morimura33TChallengeSelectExplanationWindow@l
	stw      r0, 0(r21)

lbl_8038F38C:
	stw      r21, 0x88(r31)
	addi     r4, r30, 0x4d8
	lis      r5, 0x104
	lwz      r3, 0x88(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x88(r31)
	addi     r4, r30, 0x4f4
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x88(r31)
	addi     r4, r30, 0x510
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x88(r31)
	addi     r4, r30, 0x530
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x88(r31)
	addi     r4, r30, 0x550
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x88(r31)
	addi     r4, r30, 0x570
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8038F45C
	lis      r5, __vt__Q25efx2d7TBaseIF@ha
	lis      r4, __vt__Q25efx2d5TBase@ha
	addi     r0, r5, __vt__Q25efx2d7TBaseIF@l
	lis      r6, __vt__18JPAEmitterCallBack@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q25efx2d5TBase@l
	lis      r5, __vt__Q25efx2d8TForever@ha
	lis      r4, __vt__Q25efx2d11T2DChalDive@ha
	stw      r0, 0(r3)
	li       r9, 0
	addi     r7, r5, __vt__Q25efx2d8TForever@l
	addi     r4, r4, __vt__Q25efx2d11T2DChalDive@l
	stb      r9, 4(r3)
	addi     r8, r6, __vt__18JPAEmitterCallBack@l
	addi     r6, r7, 0x18
	li       r5, 5
	stb      r9, 5(r3)
	addi     r0, r4, 0x18
	stw      r8, 8(r3)
	stw      r7, 0(r3)
	stw      r6, 8(r3)
	sth      r5, 0xc(r3)
	stw      r9, 0x10(r3)
	stw      r4, 0(r3)
	stw      r0, 8(r3)

lbl_8038F45C:
	stw      r3, 0xf0(r31)
	lwz      r3, 0x90(r31)
	lwz      r28, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r3, 0xc(r3)
	bl       becomeCurrentHeap__7JKRHeapFv
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r21, r3, r3
	beq      lbl_8038F4FC
	mr       r4, r29
	li       r5, 0xa
	bl       __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
	lis      r3, __vt__Q28Morimura16TChallengeScreen@ha
	li       r0, 0
	addi     r3, r3, __vt__Q28Morimura16TChallengeScreen@l
	stw      r3, 0(r21)
	stw      r0, 0x18(r21)
	stw      r0, 0x20(r21)
	stb      r0, 0x28(r21)
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x76c(r1)
	lha      r0, mFlashAnimInterval__Q28Morimura16TChallengeSelect@sda21(r13)
	stw      r4, 0x768(r1)
	lfd      f2, lbl_8051EFB0@sda21(r2)
	xoris    r0, r0, 0x8000
	lfd      f1, 0x768(r1)
	lfs      f0, lbl_8051EF90@sda21(r2)
	fsubs    f1, f1, f2
	stw      r0, 0x764(r1)
	stw      r4, 0x760(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x760(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x758(r1)
	lwz      r0, 0x75c(r1)
	stw      r0, 0x24(r21)

lbl_8038F4FC:
	stw      r21, 0x80(r31)
	addi     r4, r30, 0x590
	lis      r5, 0x104
	lwz      r3, 0x80(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x80(r31)
	addi     r4, r30, 0x5ac
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x80(r31)
	addi     r4, r30, 0x5ac
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x80(r31)
	addi     r4, r30, 0x5c8
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x80(r31)
	addi     r4, r30, 0x5e4
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x80(r31)
	addi     r4, r30, 0x600
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x80(r31)
	addi     r4, r30, 0x61c
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x80(r31)
	addi     r4, r30, 0x638
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x80(r31)
	addi     r4, r30, 0x654
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x80(r31)
	addi     r4, r30, 0x670
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x80(r31)
	addi     r4, r30, 0x68c
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x80(r31)
	addi     r4, r30, 0x6a8
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r4, 0x80(r31)
	li       r3, 0x734
	lwz      r29, 8(r4)
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8038F7B0
	mr       r3, r29
	lis      r4, 0x725F6677@ha
	lwz      r12, 0(r29)
	addi     r6, r4, 0x725F6677@l
	li       r5, 0x50
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r27, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x706B5F72@ha
	lis      r4, 0x0050725F@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x706B5F72@l
	addi     r5, r4, 0x0050725F@l
	mtctr    r12
	bctrl
	mr       r22, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x706B5F6C@ha
	lis      r4, 0x0050725F@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x706B5F6C@l
	addi     r5, r4, 0x0050725F@l
	mtctr    r12
	bctrl
	lis      r4, "__ct__10Vector2<f>Fv"@ha
	mr       r21, r3
	addi     r4, r4, "__ct__10Vector2<f>Fv"@l
	addi     r3, r26, 0x14
	li       r5, 0
	li       r6, 8
	li       r7, 2
	bl       __construct_array
	lis      r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
	addi     r3, r26, 0x24
	addi     r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
	li       r5, 0
	li       r6, 0x24
	li       r7, 0x32
	bl       __construct_array
	li       r23, 0
	mr       r24, r26
	stw      r23, 0x72c(r26)
	stw      r21, 0(r26)
	stw      r22, 4(r26)
	stw      r27, 8(r26)

lbl_8038F688:
	lwz      r0, 0(r24)
	cmplwi   r0, 0
	bne      lbl_8038F6A8
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x48
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038F6A8:
	addi     r23, r23, 1
	addi     r24, r24, 4
	cmpwi    r23, 3
	blt      lbl_8038F688
	lfs      f0, lbl_8051EF88@sda21(r2)
	li       r5, 0x30
	mulli    r3, r5, 0x24
	li       r4, 0
	stfs     f0, 0xc(r26)
	subfic   r0, r5, 0x32
	stfs     f0, 0x10(r26)
	add      r3, r26, r3
	stfs     f0, 0x730(r26)
	stw      r4, 0x24(r26)
	stw      r4, 0x48(r26)
	stw      r4, 0x6c(r26)
	stw      r4, 0x90(r26)
	stw      r4, 0xb4(r26)
	stw      r4, 0xd8(r26)
	stw      r4, 0xfc(r26)
	stw      r4, 0x120(r26)
	stw      r4, 0x144(r26)
	stw      r4, 0x168(r26)
	stw      r4, 0x18c(r26)
	stw      r4, 0x1b0(r26)
	stw      r4, 0x1d4(r26)
	stw      r4, 0x1f8(r26)
	stw      r4, 0x21c(r26)
	stw      r4, 0x240(r26)
	stw      r4, 0x264(r26)
	stw      r4, 0x288(r26)
	stw      r4, 0x2ac(r26)
	stw      r4, 0x2d0(r26)
	stw      r4, 0x2f4(r26)
	stw      r4, 0x318(r26)
	stw      r4, 0x33c(r26)
	stw      r4, 0x360(r26)
	stw      r4, 0x384(r26)
	stw      r4, 0x3a8(r26)
	stw      r4, 0x3cc(r26)
	stw      r4, 0x3f0(r26)
	stw      r4, 0x414(r26)
	stw      r4, 0x438(r26)
	stw      r4, 0x45c(r26)
	stw      r4, 0x480(r26)
	stw      r4, 0x4a4(r26)
	stw      r4, 0x4c8(r26)
	stw      r4, 0x4ec(r26)
	stw      r4, 0x510(r26)
	stw      r4, 0x534(r26)
	stw      r4, 0x558(r26)
	stw      r4, 0x57c(r26)
	stw      r4, 0x5a0(r26)
	stw      r4, 0x5c4(r26)
	stw      r4, 0x5e8(r26)
	stw      r4, 0x60c(r26)
	stw      r4, 0x630(r26)
	stw      r4, 0x654(r26)
	stw      r4, 0x678(r26)
	stw      r4, 0x69c(r26)
	stw      r4, 0x6c0(r26)
	mtctr    r0
	cmpwi    r5, 0x32
	bge      lbl_8038F7B0

lbl_8038F7A8:
	stwu     r4, 0x24(r3)
	bdnz     lbl_8038F7A8

lbl_8038F7B0:
	stw      r26, 0x9c(r31)
	li       r3, 0x734
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8038F9B0
	mr       r3, r29
	lis      r4, 0x795F6677@ha
	lwz      r12, 0(r29)
	addi     r6, r4, 0x795F6677@l
	li       r5, 0x50
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r27, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x706B5F72@ha
	lis      r4, 0x0050795F@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x706B5F72@l
	addi     r5, r4, 0x0050795F@l
	mtctr    r12
	bctrl
	mr       r22, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x706B5F6C@ha
	lis      r4, 0x0050795F@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x706B5F6C@l
	addi     r5, r4, 0x0050795F@l
	mtctr    r12
	bctrl
	lis      r4, "__ct__10Vector2<f>Fv"@ha
	mr       r21, r3
	addi     r4, r4, "__ct__10Vector2<f>Fv"@l
	addi     r3, r26, 0x14
	li       r5, 0
	li       r6, 8
	li       r7, 2
	bl       __construct_array
	lis      r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
	addi     r3, r26, 0x24
	addi     r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
	li       r5, 0
	li       r6, 0x24
	li       r7, 0x32
	bl       __construct_array
	li       r23, 0
	mr       r24, r26
	stw      r23, 0x72c(r26)
	stw      r21, 0(r26)
	stw      r22, 4(r26)
	stw      r27, 8(r26)

lbl_8038F888:
	lwz      r0, 0(r24)
	cmplwi   r0, 0
	bne      lbl_8038F8A8
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x48
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038F8A8:
	addi     r23, r23, 1
	addi     r24, r24, 4
	cmpwi    r23, 3
	blt      lbl_8038F888
	lfs      f0, lbl_8051EF88@sda21(r2)
	li       r5, 0x30
	mulli    r3, r5, 0x24
	li       r4, 0
	stfs     f0, 0xc(r26)
	subfic   r0, r5, 0x32
	stfs     f0, 0x10(r26)
	add      r3, r26, r3
	stfs     f0, 0x730(r26)
	stw      r4, 0x24(r26)
	stw      r4, 0x48(r26)
	stw      r4, 0x6c(r26)
	stw      r4, 0x90(r26)
	stw      r4, 0xb4(r26)
	stw      r4, 0xd8(r26)
	stw      r4, 0xfc(r26)
	stw      r4, 0x120(r26)
	stw      r4, 0x144(r26)
	stw      r4, 0x168(r26)
	stw      r4, 0x18c(r26)
	stw      r4, 0x1b0(r26)
	stw      r4, 0x1d4(r26)
	stw      r4, 0x1f8(r26)
	stw      r4, 0x21c(r26)
	stw      r4, 0x240(r26)
	stw      r4, 0x264(r26)
	stw      r4, 0x288(r26)
	stw      r4, 0x2ac(r26)
	stw      r4, 0x2d0(r26)
	stw      r4, 0x2f4(r26)
	stw      r4, 0x318(r26)
	stw      r4, 0x33c(r26)
	stw      r4, 0x360(r26)
	stw      r4, 0x384(r26)
	stw      r4, 0x3a8(r26)
	stw      r4, 0x3cc(r26)
	stw      r4, 0x3f0(r26)
	stw      r4, 0x414(r26)
	stw      r4, 0x438(r26)
	stw      r4, 0x45c(r26)
	stw      r4, 0x480(r26)
	stw      r4, 0x4a4(r26)
	stw      r4, 0x4c8(r26)
	stw      r4, 0x4ec(r26)
	stw      r4, 0x510(r26)
	stw      r4, 0x534(r26)
	stw      r4, 0x558(r26)
	stw      r4, 0x57c(r26)
	stw      r4, 0x5a0(r26)
	stw      r4, 0x5c4(r26)
	stw      r4, 0x5e8(r26)
	stw      r4, 0x60c(r26)
	stw      r4, 0x630(r26)
	stw      r4, 0x654(r26)
	stw      r4, 0x678(r26)
	stw      r4, 0x69c(r26)
	stw      r4, 0x6c0(r26)
	mtctr    r0
	cmpwi    r5, 0x32
	bge      lbl_8038F9B0

lbl_8038F9A8:
	stwu     r4, 0x24(r3)
	bdnz     lbl_8038F9A8

lbl_8038F9B0:
	stw      r26, 0xa0(r31)
	li       r3, 0x734
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8038FBB0
	mr       r3, r29
	lis      r4, 0x625F6677@ha
	lwz      r12, 0(r29)
	addi     r6, r4, 0x625F6677@l
	li       r5, 0x50
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r27, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x706B5F72@ha
	lis      r4, 0x0050625F@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x706B5F72@l
	addi     r5, r4, 0x0050625F@l
	mtctr    r12
	bctrl
	mr       r22, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x706B5F6C@ha
	lis      r4, 0x0050625F@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x706B5F6C@l
	addi     r5, r4, 0x0050625F@l
	mtctr    r12
	bctrl
	lis      r4, "__ct__10Vector2<f>Fv"@ha
	mr       r21, r3
	addi     r4, r4, "__ct__10Vector2<f>Fv"@l
	addi     r3, r26, 0x14
	li       r5, 0
	li       r6, 8
	li       r7, 2
	bl       __construct_array
	lis      r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
	addi     r3, r26, 0x24
	addi     r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
	li       r5, 0
	li       r6, 0x24
	li       r7, 0x32
	bl       __construct_array
	li       r23, 0
	mr       r24, r26
	stw      r23, 0x72c(r26)
	stw      r21, 0(r26)
	stw      r22, 4(r26)
	stw      r27, 8(r26)

lbl_8038FA88:
	lwz      r0, 0(r24)
	cmplwi   r0, 0
	bne      lbl_8038FAA8
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x48
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038FAA8:
	addi     r23, r23, 1
	addi     r24, r24, 4
	cmpwi    r23, 3
	blt      lbl_8038FA88
	lfs      f0, lbl_8051EF88@sda21(r2)
	li       r5, 0x30
	mulli    r3, r5, 0x24
	li       r4, 0
	stfs     f0, 0xc(r26)
	subfic   r0, r5, 0x32
	stfs     f0, 0x10(r26)
	add      r3, r26, r3
	stfs     f0, 0x730(r26)
	stw      r4, 0x24(r26)
	stw      r4, 0x48(r26)
	stw      r4, 0x6c(r26)
	stw      r4, 0x90(r26)
	stw      r4, 0xb4(r26)
	stw      r4, 0xd8(r26)
	stw      r4, 0xfc(r26)
	stw      r4, 0x120(r26)
	stw      r4, 0x144(r26)
	stw      r4, 0x168(r26)
	stw      r4, 0x18c(r26)
	stw      r4, 0x1b0(r26)
	stw      r4, 0x1d4(r26)
	stw      r4, 0x1f8(r26)
	stw      r4, 0x21c(r26)
	stw      r4, 0x240(r26)
	stw      r4, 0x264(r26)
	stw      r4, 0x288(r26)
	stw      r4, 0x2ac(r26)
	stw      r4, 0x2d0(r26)
	stw      r4, 0x2f4(r26)
	stw      r4, 0x318(r26)
	stw      r4, 0x33c(r26)
	stw      r4, 0x360(r26)
	stw      r4, 0x384(r26)
	stw      r4, 0x3a8(r26)
	stw      r4, 0x3cc(r26)
	stw      r4, 0x3f0(r26)
	stw      r4, 0x414(r26)
	stw      r4, 0x438(r26)
	stw      r4, 0x45c(r26)
	stw      r4, 0x480(r26)
	stw      r4, 0x4a4(r26)
	stw      r4, 0x4c8(r26)
	stw      r4, 0x4ec(r26)
	stw      r4, 0x510(r26)
	stw      r4, 0x534(r26)
	stw      r4, 0x558(r26)
	stw      r4, 0x57c(r26)
	stw      r4, 0x5a0(r26)
	stw      r4, 0x5c4(r26)
	stw      r4, 0x5e8(r26)
	stw      r4, 0x60c(r26)
	stw      r4, 0x630(r26)
	stw      r4, 0x654(r26)
	stw      r4, 0x678(r26)
	stw      r4, 0x69c(r26)
	stw      r4, 0x6c0(r26)
	mtctr    r0
	cmpwi    r5, 0x32
	bge      lbl_8038FBB0

lbl_8038FBA8:
	stwu     r4, 0x24(r3)
	bdnz     lbl_8038FBA8

lbl_8038FBB0:
	stw      r26, 0xa4(r31)
	li       r3, 0x734
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8038FDB0
	mr       r3, r29
	lis      r4, 0x775F6677@ha
	lwz      r12, 0(r29)
	addi     r6, r4, 0x775F6677@l
	li       r5, 0x50
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r27, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x5F303230@ha
	lis      r4, 0x50494354@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x5F303230@l
	addi     r5, r4, 0x50494354@l
	mtctr    r12
	bctrl
	mr       r22, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x706B5F72@ha
	lis      r4, 0x0050775F@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x706B5F72@l
	addi     r5, r4, 0x0050775F@l
	mtctr    r12
	bctrl
	lis      r4, "__ct__10Vector2<f>Fv"@ha
	mr       r21, r3
	addi     r4, r4, "__ct__10Vector2<f>Fv"@l
	addi     r3, r26, 0x14
	li       r5, 0
	li       r6, 8
	li       r7, 2
	bl       __construct_array
	lis      r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
	addi     r3, r26, 0x24
	addi     r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
	li       r5, 0
	li       r6, 0x24
	li       r7, 0x32
	bl       __construct_array
	li       r23, 0
	mr       r24, r26
	stw      r23, 0x72c(r26)
	stw      r21, 0(r26)
	stw      r22, 4(r26)
	stw      r27, 8(r26)

lbl_8038FC88:
	lwz      r0, 0(r24)
	cmplwi   r0, 0
	bne      lbl_8038FCA8
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x48
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038FCA8:
	addi     r23, r23, 1
	addi     r24, r24, 4
	cmpwi    r23, 3
	blt      lbl_8038FC88
	lfs      f0, lbl_8051EF88@sda21(r2)
	li       r5, 0x30
	mulli    r3, r5, 0x24
	li       r4, 0
	stfs     f0, 0xc(r26)
	subfic   r0, r5, 0x32
	stfs     f0, 0x10(r26)
	add      r3, r26, r3
	stfs     f0, 0x730(r26)
	stw      r4, 0x24(r26)
	stw      r4, 0x48(r26)
	stw      r4, 0x6c(r26)
	stw      r4, 0x90(r26)
	stw      r4, 0xb4(r26)
	stw      r4, 0xd8(r26)
	stw      r4, 0xfc(r26)
	stw      r4, 0x120(r26)
	stw      r4, 0x144(r26)
	stw      r4, 0x168(r26)
	stw      r4, 0x18c(r26)
	stw      r4, 0x1b0(r26)
	stw      r4, 0x1d4(r26)
	stw      r4, 0x1f8(r26)
	stw      r4, 0x21c(r26)
	stw      r4, 0x240(r26)
	stw      r4, 0x264(r26)
	stw      r4, 0x288(r26)
	stw      r4, 0x2ac(r26)
	stw      r4, 0x2d0(r26)
	stw      r4, 0x2f4(r26)
	stw      r4, 0x318(r26)
	stw      r4, 0x33c(r26)
	stw      r4, 0x360(r26)
	stw      r4, 0x384(r26)
	stw      r4, 0x3a8(r26)
	stw      r4, 0x3cc(r26)
	stw      r4, 0x3f0(r26)
	stw      r4, 0x414(r26)
	stw      r4, 0x438(r26)
	stw      r4, 0x45c(r26)
	stw      r4, 0x480(r26)
	stw      r4, 0x4a4(r26)
	stw      r4, 0x4c8(r26)
	stw      r4, 0x4ec(r26)
	stw      r4, 0x510(r26)
	stw      r4, 0x534(r26)
	stw      r4, 0x558(r26)
	stw      r4, 0x57c(r26)
	stw      r4, 0x5a0(r26)
	stw      r4, 0x5c4(r26)
	stw      r4, 0x5e8(r26)
	stw      r4, 0x60c(r26)
	stw      r4, 0x630(r26)
	stw      r4, 0x654(r26)
	stw      r4, 0x678(r26)
	stw      r4, 0x69c(r26)
	stw      r4, 0x6c0(r26)
	mtctr    r0
	cmpwi    r5, 0x32
	bge      lbl_8038FDB0

lbl_8038FDA8:
	stwu     r4, 0x24(r3)
	bdnz     lbl_8038FDA8

lbl_8038FDB0:
	stw      r26, 0xa8(r31)
	li       r3, 0x734
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8038FFB0
	mr       r3, r29
	lis      r4, 0x6C5F6677@ha
	lwz      r12, 0(r29)
	addi     r6, r4, 0x6C5F6677@l
	li       r5, 0x5062
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r27, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x706B5F72@ha
	lis      r4, 0x50626C5F@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x706B5F72@l
	addi     r5, r4, 0x50626C5F@l
	mtctr    r12
	bctrl
	mr       r22, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x706B5F6C@ha
	lis      r4, 0x50626C5F@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x706B5F6C@l
	addi     r5, r4, 0x50626C5F@l
	mtctr    r12
	bctrl
	lis      r4, "__ct__10Vector2<f>Fv"@ha
	mr       r21, r3
	addi     r4, r4, "__ct__10Vector2<f>Fv"@l
	addi     r3, r26, 0x14
	li       r5, 0
	li       r6, 8
	li       r7, 2
	bl       __construct_array
	lis      r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
	addi     r3, r26, 0x24
	addi     r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
	li       r5, 0
	li       r6, 0x24
	li       r7, 0x32
	bl       __construct_array
	li       r23, 0
	mr       r24, r26
	stw      r23, 0x72c(r26)
	stw      r21, 0(r26)
	stw      r22, 4(r26)
	stw      r27, 8(r26)

lbl_8038FE88:
	lwz      r0, 0(r24)
	cmplwi   r0, 0
	bne      lbl_8038FEA8
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x48
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038FEA8:
	addi     r23, r23, 1
	addi     r24, r24, 4
	cmpwi    r23, 3
	blt      lbl_8038FE88
	lfs      f0, lbl_8051EF88@sda21(r2)
	li       r5, 0x30
	mulli    r3, r5, 0x24
	li       r4, 0
	stfs     f0, 0xc(r26)
	subfic   r0, r5, 0x32
	stfs     f0, 0x10(r26)
	add      r3, r26, r3
	stfs     f0, 0x730(r26)
	stw      r4, 0x24(r26)
	stw      r4, 0x48(r26)
	stw      r4, 0x6c(r26)
	stw      r4, 0x90(r26)
	stw      r4, 0xb4(r26)
	stw      r4, 0xd8(r26)
	stw      r4, 0xfc(r26)
	stw      r4, 0x120(r26)
	stw      r4, 0x144(r26)
	stw      r4, 0x168(r26)
	stw      r4, 0x18c(r26)
	stw      r4, 0x1b0(r26)
	stw      r4, 0x1d4(r26)
	stw      r4, 0x1f8(r26)
	stw      r4, 0x21c(r26)
	stw      r4, 0x240(r26)
	stw      r4, 0x264(r26)
	stw      r4, 0x288(r26)
	stw      r4, 0x2ac(r26)
	stw      r4, 0x2d0(r26)
	stw      r4, 0x2f4(r26)
	stw      r4, 0x318(r26)
	stw      r4, 0x33c(r26)
	stw      r4, 0x360(r26)
	stw      r4, 0x384(r26)
	stw      r4, 0x3a8(r26)
	stw      r4, 0x3cc(r26)
	stw      r4, 0x3f0(r26)
	stw      r4, 0x414(r26)
	stw      r4, 0x438(r26)
	stw      r4, 0x45c(r26)
	stw      r4, 0x480(r26)
	stw      r4, 0x4a4(r26)
	stw      r4, 0x4c8(r26)
	stw      r4, 0x4ec(r26)
	stw      r4, 0x510(r26)
	stw      r4, 0x534(r26)
	stw      r4, 0x558(r26)
	stw      r4, 0x57c(r26)
	stw      r4, 0x5a0(r26)
	stw      r4, 0x5c4(r26)
	stw      r4, 0x5e8(r26)
	stw      r4, 0x60c(r26)
	stw      r4, 0x630(r26)
	stw      r4, 0x654(r26)
	stw      r4, 0x678(r26)
	stw      r4, 0x69c(r26)
	stw      r4, 0x6c0(r26)
	mtctr    r0
	cmpwi    r5, 0x32
	bge      lbl_8038FFB0

lbl_8038FFA8:
	stwu     r4, 0x24(r3)
	bdnz     lbl_8038FFA8

lbl_8038FFB0:
	stw      r26, 0xac(r31)
	mr       r3, r29
	lis      r4, 0x79656C31@ha
	li       r5, 0x54
	lwz      r12, 0(r29)
	addi     r6, r4, 0x79656C31@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe0(r31)
	mr       r3, r29
	lis      r4, 0x79656C32@ha
	li       r5, 0x54
	lwz      r12, 0(r29)
	addi     r6, r4, 0x79656C32@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r31)
	mr       r21, r31
	li       r22, 0

lbl_80390004:
	lwz      r0, 0xe0(r21)
	cmplwi   r0, 0
	bne      lbl_80390024
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x5f5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80390024:
	addi     r22, r22, 1
	addi     r21, r21, 4
	cmpwi    r22, 2
	blt      lbl_80390004
	li       r3, 0x18
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_80390160
	mr       r3, r29
	lis      r5, 0x5F303234@ha
	lwz      r12, 0(r29)
	lis      r4, 0x50494354@ha
	addi     r6, r5, 0x5F303234@l
	lwz      r12, 0x3c(r12)
	addi     r5, r4, 0x50494354@l
	mtctr    r12
	bctrl
	mr       r23, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x5F303232@ha
	lis      r4, 0x50494354@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x5F303232@l
	addi     r5, r4, 0x50494354@l
	mtctr    r12
	bctrl
	mr       r22, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x5F303233@ha
	lis      r4, 0x50494354@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x5F303233@l
	addi     r5, r4, 0x50494354@l
	mtctr    r12
	bctrl
	mr       r21, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x5F303133@ha
	lis      r4, 0x50494354@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x5F303133@l
	addi     r5, r4, 0x50494354@l
	mtctr    r12
	bctrl
	stw      r3, 0(r26)
	lfs      f0, lbl_8051EF88@sda21(r2)
	stfs     f0, 0x10(r26)
	stfs     f0, 0x14(r26)
	lwz      r0, 0(r26)
	cmplwi   r0, 0
	bne      lbl_80390110
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x11c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80390110:
	lwz      r3, 0(r26)
	li       r4, 7
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	stw      r21, 4(r26)
	mr       r24, r26
	li       r21, 0
	stw      r22, 8(r26)
	stw      r23, 0xc(r26)

lbl_80390130:
	lwz      r0, 4(r24)
	cmplwi   r0, 0
	bne      lbl_80390150
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x122
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80390150:
	addi     r21, r21, 1
	addi     r24, r24, 4
	cmpwi    r21, 3
	blt      lbl_80390130

lbl_80390160:
	stw      r26, 0xb0(r31)
	li       r3, 0x18
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_80390290
	mr       r3, r29
	lis      r5, 0x5F303237@ha
	lwz      r12, 0(r29)
	lis      r4, 0x50494354@ha
	addi     r6, r5, 0x5F303237@l
	lwz      r12, 0x3c(r12)
	addi     r5, r4, 0x50494354@l
	mtctr    r12
	bctrl
	mr       r23, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x5F303235@ha
	lis      r4, 0x50494354@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x5F303235@l
	addi     r5, r4, 0x50494354@l
	mtctr    r12
	bctrl
	mr       r22, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x5F303236@ha
	lis      r4, 0x50494354@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x5F303236@l
	addi     r5, r4, 0x50494354@l
	mtctr    r12
	bctrl
	mr       r21, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lis      r5, 0x5F303037@ha
	lis      r4, 0x50494354@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x5F303037@l
	addi     r5, r4, 0x50494354@l
	mtctr    r12
	bctrl
	stw      r3, 0(r26)
	lfs      f0, lbl_8051EF88@sda21(r2)
	stfs     f0, 0x10(r26)
	stfs     f0, 0x14(r26)
	lwz      r0, 0(r26)
	cmplwi   r0, 0
	bne      lbl_80390240
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x11c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80390240:
	lwz      r3, 0(r26)
	li       r4, 7
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	stw      r21, 4(r26)
	mr       r24, r26
	li       r21, 0
	stw      r22, 8(r26)
	stw      r23, 0xc(r26)

lbl_80390260:
	lwz      r0, 4(r24)
	cmplwi   r0, 0
	bne      lbl_80390280
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x122
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80390280:
	addi     r21, r21, 1
	addi     r24, r24, 4
	cmpwi    r21, 3
	blt      lbl_80390260

lbl_80390290:
	stw      r26, 0xb4(r31)
	mr       r3, r29
	lis      r5, 0x66656374@ha
	lis      r4, 0x00506566@ha
	lwz      r12, 0(r29)
	addi     r6, r5, 0x66656374@l
	addi     r5, r4, 0x00506566@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r21, r3, r3
	bne      lbl_803902D4
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x600
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803902D4:
	li       r0, 1
	lis      r5, 0x65633030@ha
	stb      r0, 0xb0(r21)
	mr       r3, r29
	lis      r4, 0x5073656C@ha
	addi     r6, r5, 0x65633030@l
	lwz      r12, 0(r29)
	addi     r5, r4, 0x5073656C@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe8(r31)
	lwz      r0, 0xe8(r31)
	cmplwi   r0, 0
	bne      lbl_80390324
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x605
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80390324:
	lis      r4, 0x73317031@ha
	lwz      r9, 0x78(r31)
	mr       r3, r29
	addi     r7, r31, 0x100
	addi     r6, r4, 0x73317031@l
	li       r5, 0x5068
	li       r8, 5
	bl       setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
	stw      r3, 0xb8(r31)
	lis      r4, 0x73327031@ha
	mr       r3, r29
	addi     r7, r31, 0x104
	lwz      r9, 0x78(r31)
	addi     r6, r4, 0x73327031@l
	li       r5, 0x5068
	li       r8, 5
	bl       setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
	stw      r3, 0xbc(r31)
	mr       r21, r31
	addi     r22, r1, 0x30
	li       r23, 0
	lfd      f4, 0x178(r30)
	lfd      f3, 0x180(r30)
	lfd      f2, 0x188(r30)
	lfd      f1, 0x190(r30)
	lfd      f0, 0x198(r30)
	stfd     f4, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f2, 0x40(r1)
	stfd     f1, 0x48(r1)
	stfd     f0, 0x50(r1)

lbl_803903A0:
	lwz      r5, 0(r22)
	mr       r3, r29
	lwz      r6, 4(r22)
	addi     r7, r21, 0x108
	lwz      r9, 0x78(r31)
	li       r8, 3
	bl       setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
	addi     r23, r23, 1
	stw      r3, 0xc0(r21)
	cmpwi    r23, 5
	addi     r21, r21, 4
	addi     r22, r22, 8
	blt      lbl_803903A0
	lis      r5, 0x735F7031@ha
	lis      r4, 0x50656B69@ha
	lwz      r9, 0x78(r31)
	mr       r3, r29
	addi     r6, r5, 0x735F7031@l
	addi     r5, r4, 0x50656B69@l
	addi     r7, r31, 0x11c
	li       r8, 2
	bl       setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
	stw      r3, 0xd4(r31)
	lis      r5, 0x735F7231@ha
	lis      r4, 0x50656B69@ha
	mr       r3, r29
	lwz      r9, 0x78(r31)
	addi     r6, r5, 0x735F7231@l
	addi     r5, r4, 0x50656B69@l
	addi     r7, r31, 0x120
	li       r8, 2
	bl       setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
	stw      r3, 0xd8(r31)
	lis      r5, 0x6F6F7231@ha
	lis      r4, 0x0050666C@ha
	mr       r3, r29
	lwz      r9, 0x78(r31)
	addi     r6, r5, 0x6F6F7231@l
	addi     r5, r4, 0x0050666C@l
	addi     r7, r31, 0x124
	li       r8, 2
	bl       setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
	li       r0, 0x5a
	stw      r3, 0xdc(r31)
	addi     r5, r1, 0x54
	addi     r4, r30, 0x19c
	mtctr    r0

lbl_8039045C:
	lwz      r3, 4(r4)
	lwzu     r0, 8(r4)
	stw      r3, 4(r5)
	stwu     r0, 8(r5)
	bdnz     lbl_8039045C
	li       r3, 0x78
	bl       __nwa__FUl
	lis      r4, mIconTexture__Q28Morimura16TChallengeSelect@ha
	stw      r3, 0x94(r31)
	addi     r26, r1, 0x58
	li       r24, 0
	addi     r25, r4, mIconTexture__Q28Morimura16TChallengeSelect@l
	li       r27, 0

lbl_80390490:
	li       r3, 0x38
	bl       __nw__FUl
	or.      r21, r3, r3
	beq      lbl_803905B0
	mr       r3, r29
	lwz      r5, 0x10(r26)
	lwz      r12, 0(r29)
	lwz      r6, 0x14(r26)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r22, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r5, 8(r26)
	lwz      r12, 0x3c(r12)
	lwz      r6, 0xc(r26)
	mtctr    r12
	bctrl
	mr       r23, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r5, 0(r26)
	lwz      r12, 0x3c(r12)
	lwz      r6, 4(r26)
	mtctr    r12
	bctrl
	li       r0, 0
	lfs      f1, lbl_8051EFF0@sda21(r2)
	stw      r0, 0(r21)
	cmplwi   r3, 0
	lfs      f0, lbl_8051EF88@sda21(r2)
	stw      r3, 4(r21)
	stw      r23, 8(r21)
	stw      r22, 0xc(r21)
	stw      r0, 0x10(r21)
	stfs     f1, 0x14(r21)
	stfs     f0, 0x18(r21)
	stw      r0, 0x1c(r21)
	stw      r0, 0x20(r21)
	stb      r0, 0x24(r21)
	stfs     f0, 0x34(r21)
	bne      lbl_80390550
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x166
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80390550:
	cmplwi   r23, 0
	bne      lbl_8039056C
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x167
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039056C:
	cmplwi   r22, 0
	bne      lbl_80390588
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x168
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80390588:
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803905A0
	bl       __ct__Q32og6Screen8ScaleMgrFv
	mr       r0, r3

lbl_803905A0:
	stw      r0, 0x10(r21)
	lfs      f0, lbl_8051EF88@sda21(r2)
	stfs     f0, 0x28(r21)
	stfs     f0, 0x2c(r21)

lbl_803905B0:
	lwz      r5, 0x94(r31)
	mr       r3, r31
	mr       r4, r24
	stwx     r21, r5, r27
	bl       getState__Q28Morimura16TChallengeSelectFi
	lwz      r4, 0x94(r31)
	mr       r23, r3
	lwz      r3, 0x78(r31)
	slwi     r0, r23, 2
	lwzx     r21, r4, r27
	li       r5, 0
	stw      r3, 0(r21)
	lwz      r3, 4(r21)
	lwzx     r4, r25, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	stw      r23, 0x1c(r21)
	mr       r3, r31
	mr       r4, r24
	stw      r24, 0x30(r21)
	bl       getAfterState__Q28Morimura16TChallengeSelectFi
	lwz      r4, 0x94(r31)
	addi     r24, r24, 1
	cmpwi    r24, 0x1e
	addi     r26, r26, 0x18
	lwzx     r4, r4, r27
	addi     r27, r27, 4
	stw      r3, 0x20(r4)
	blt      lbl_80390490
	mr       r3, r31
	bl       getIndexMax__Q28Morimura16TChallengeSelectFv
	stw      r3, 0x130(r31)
	lwz      r3, 0x130(r31)
	cmpwi    r3, 0
	ble      lbl_8039064C
	addi     r0, r3, -1
	stw      r0, 0x130(r31)

lbl_8039064C:
	lwz      r4, 0xfc(r31)
	mr       r3, r31
	bl       setInfo__Q28Morimura16TChallengeSelectFi
	lwz      r4, 0xfc(r31)
	mr       r3, r31
	bl       setStageName__Q28Morimura16TChallengeSelectFi
	li       r22, 0
	li       r21, 0
	li       r24, 1
	b        lbl_803906A8

lbl_80390674:
	mr       r3, r31
	mr       r4, r22
	bl       isChangeState__Q28Morimura16TChallengeSelectFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_803906A0
	lwz      r3, 0x94(r31)
	lwzx     r3, r3, r21
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 3
	bge      lbl_803906A0
	stb      r24, 0x24(r3)

lbl_803906A0:
	addi     r21, r21, 4
	addi     r22, r22, 1

lbl_803906A8:
	lwz      r0, 0x130(r31)
	cmpw     r22, r0
	ble      lbl_80390674
	lis      r3, mPadStatus__10JUTGamePad@ha
	li       r0, 1
	addi     r3, r3, mPadStatus__10JUTGamePad@l
	stb      r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
	lbz      r0, 0x16(r3)
	extsb    r4, r0
	subfic   r3, r4, -1
	addi     r0, r4, 1
	or       r0, r3, r0
	srwi     r0, r0, 0x1f
	stb      r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
	lwz      r3, 0x90(r31)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 1
	bne      lbl_803906F8
	li       r0, 0
	stb      r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)

lbl_803906F8:
	lbz      r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8039070C
	li       r0, 1
	stb      r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)

lbl_8039070C:
	lwz      r3, 0x78(r31)
	addi     r4, r30, 0x6c4
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r22, r3, r3
	lwz      r21, 0x84(r31)
	bne      lbl_80390744
	addi     r3, r30, 0x14
	addi     r5, r30, 0x2c
	li       r4, 0x4b7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80390744:
	li       r3, 0x168
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80390760
	mr       r4, r22
	bl       __ct__10J2DPictureFPC7ResTIMG
	mr       r0, r3

lbl_80390760:
	stw      r0, 0x20(r21)
	mr       r3, r28
	bl       becomeCurrentHeap__7JKRHeapFv
	lmw      r21, 0x774(r1)
	lwz      r0, 0x7a4(r1)
	mtlr     r0
	addi     r1, r1, 0x7a0
	blr
	*/
}

/**
 * @note Address: 0x80390780
 * @note Size: 0x14CC
 */
bool TChallengeSelect::doUpdate()
{
	if (mPlayModeScreen->isState(TChallengePlayModeScreen::PlayModeScreen_Active)) {
		// Check that player 2s controller is plugged in
		if (JUTGamePad::mPadStatus[1].err == -1) {
			mConnect2p = false;
		} else {
			if (!mConnect2p) {
				mPlayModeScreen->mDoShowNoController = false;
			}
			mConnect2p = true;
		}
	}

	bool updatePanel = false;
	bool rulesClosed = false;
	if (!mRulesScreen->mState) {
		rulesClosed = true;
	}
	int oldSelState = mLevelNameMoveState;
	int oldID       = mCurrentSelection;

	if (mCanInput && mDisp->mStatus == Screen::Game2DMgr::CHECK2D_ChallengeSelect_Default
	    && !static_cast<TChallengeSelectScene*>(getOwner())->mConfirmEndWindow->mHasDrawn) {
		Controller* input = mControls;
		if (input->getButtonDown() & Controller::PRESS_Z) {
			if (mPlayModeScreen->mState == 0) {
				if (mRulesScreen->mScaleGrowRate <= 0.0f) {
					openWindow();
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
				} else {
					closeWindow();
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
				}
			}
		} else if (input->getButtonDown() & (Controller::PRESS_A | Controller::PRESS_START)) {
			if (!rulesClosed) {
				TChallengePlayModeScreen* screen = mPlayModeScreen;
				int state                        = screen->mState;
				if ((u8)state != false) {
					if (state == 2) {
						if (mSelected1p || (mConnect2p && !mSelected1p)) {
							screen->setState(TChallengePlayModeScreen::PlayModeScreen_Close);
							if (!mIsSection) {
								_134 = true;
								demoStart();
								mDisp->mStatus = Screen::Game2DMgr::CHECK2D_ChallengeSelect_InDemo;
							}
							mDisp->mStageNumber = mCurrentSelection;
							mDisp->mPlayType    = 0;
							if (!mSelected1p) {
								mDisp->mPlayType = 1;
							}
							PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
						} else {
							screen->mDoShowNoController = true;
							PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
						}
					}
				} else {
					if (TChallengeSelect::mSelected1p) {
						screen->mAnimScreen[1]->blink(TChallengeSelect::mTextFlashVal, 0.0f);
						screen->mAnimScreen[2]->blink(0.0f, 0.0f);
					} else {
						screen->mAnimScreen[1]->blink(0.0f, 0.0f);
						screen->mAnimScreen[2]->blink(TChallengeSelect::mTextFlashVal, 0.0f);
					}
					mPlayModeScreen->mDoShowNoController = false;
					mPlayModeScreen->setState(TChallengePlayModeScreen::PlayModeScreen_Open);
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
				}
			}
		} else if (input->getButtonDown() & Controller::PRESS_B) {
			TChallengePlayModeScreen* screen = mPlayModeScreen;
			int state                        = screen->mState;
			if ((u8)state != false) {
				if (state == 2) {
					screen->setState(TChallengePlayModeScreen::PlayModeScreen_Close);
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
				}
			} else {
				if (!rulesClosed) {
					closeWindow();
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
				} else {
					mBgAlpha = 0;
					static_cast<TChallengeSelectScene*>(getOwner())->mConfirmEndWindow->start(nullptr);
				}
			}
		} else {
			TChallengePlayModeScreen* screen = mPlayModeScreen;
			if (screen->isState(0)) {
				if (rulesClosed) {
					u32 button = input->getButton();
					if ((button & Controller::ANALOG_DOWN) || (button & Controller::PRESS_DPAD_DOWN)) {
						if (mStageChangeCounter == 0) {
							if (mLevelNameMoveState < 0) {
								mLevelNameMoveState = 1;

								if (mDownOffset < mMaxStages / 5) {
									mDownOffset++;
									if (mRightOffset + mDownOffset * 5 <= mMaxStages) {
										updatePanel = true;
									}
								} else {
									updatePanel = true;
									mDownOffset = 0;
								}
							}
						}
						mStageChangeCounter++;
					} else if ((button & Controller::ANALOG_UP) || (button & Controller::PRESS_DPAD_UP)) {
						if (mStageChangeCounter == 0) {
							if (mLevelNameMoveState < 0) {
								mLevelNameMoveState = 0;

								if (mDownOffset > 0) {
									mDownOffset--;
									updatePanel = true;
								} else {
									int max     = mMaxStages;
									updatePanel = true;
									mDownOffset = max / 5;
									if (mRightOffset + mDownOffset * 5 > mMaxStages) {
										mDownOffset--;
									}
								}
							}
						}
						mStageChangeCounter++;
					} else if ((button & Controller::ANALOG_RIGHT) || (button & Controller::PRESS_DPAD_RIGHT)) {
						if (mStageChangeCounter == 0) {
							if (mLevelNameMoveState < 0) {
								mLevelNameMoveState = 3;

								if (mRightOffset < 4 && mRightOffset + mDownOffset * 5 < mMaxStages) {
									mRightOffset++;
									updatePanel = true;
								} else {
									mRightOffset = 0;
									updatePanel  = true;
								}
							}
						}
						mStageChangeCounter++;
					} else if ((button & Controller::ANALOG_LEFT) || (button & Controller::PRESS_DPAD_LEFT)) {
						if (mStageChangeCounter == 0) {
							if (mLevelNameMoveState < 0) {
								mLevelNameMoveState = 2;

								if (mRightOffset > 1) {
									mRightOffset--;
									updatePanel = true;
								} else {
									mRightOffset = 4;
									updatePanel  = true;
								}
							}
						}
						mStageChangeCounter++;
					} else {
						mStageChangeCounter = 0;
						if (_14C < 1.0f) {
							_14C = 1.0f;
						}
						_14C += 0.2f;
						if (_14C >= 2.0f) {
							_14C = 2.0f;
						}
					}
				}
			} else {
				u32 button = input->getButton();
				if ((button & Controller::PRESS_DPAD_DOWN) || (button & Controller::ANALOG_DOWN)) {
					if (mSelected1p) {
						screen->setBlink(mTextFlashVal);
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
					}
					mSelected1p = false;
				} else if ((button & Controller::PRESS_DPAD_UP) || (button & Controller::ANALOG_UP)) {
					if (!mSelected1p) {
						screen->setBlink(mTextFlashVal);
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
					}
					mSelected1p                 = true;
					screen->mDoShowNoController = false;
				}
			}
		}
	}

	if (mDisp->mTitleInfo->mCount == 1 && !mIsSection) {
		_134           = false;
		mDisp->mStatus = Screen::Game2DMgr::CHECK2D_ChallengeSelect_InDemo;
		getOwner()->endScene(nullptr);
	}

	int max = mMaxStages;
	if (max <= mRightOffset + mDownOffset * 5) {
		mDownOffset  = max / 5;
		mRightOffset = max % 5;
		if (mRightOffset > mMaxStages) {
			mRightOffset = mMaxStages;
		}
		mCurrentSelection = mRightOffset + mDownOffset * 5;
		if (mCurrentSelection > mMaxStages) {
			mCurrentSelection = 0;
		}
	}

	if (oldSelState >= 0 && oldSelState != mCurrentSelection) {
		mStageChangeCounter = 0;
		_14C                = 2.0f;
	}

	if (_14C * 8.0f < (f32)mStageChangeCounter) {
		mStageChangeCounter = 0;
		_14C *= 0.7f;
		if (_14C < 0.25f) {
			_14C = 0.25f;
		}
	}

	if (updatePanel) {
		mCurrentSelection = mRightOffset + mDownOffset * 5;
		if (oldID != mCurrentSelection) {
			_136 = true;
			setInfo(mCurrentSelection);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
			mPanelList[mCurrentSelection]->startScaleUp();
		} else {
			mStageChangeCounter = 0;
			_14C                = 2.0f;
		}
	}

	mSelectScreen->update();
	mPlayModeScreen->update();
	mRulesScreen->update();

	mFrameAnimAlpha = mSelectScreen->getScreenAlpha();
	if (mIsInDemo && mFrameAnimAlpha < 150) {
		mFrameAnimAlpha = 150;
	}

	// update the 30 level icons
	for (int i = 0; i < CHALLENGE_COURSE_COUNT; i++) {
		TChallengePanel* panel = mPanelList[i];
		panel->update(mCurrentSelection, updatePanel);
		if (i == mCurrentSelection || panel->mIsUnlock) {
			panel->addAlpha();
		} else {
			panel->decAlpha();
		}
		panel->alphaUpdate(1.0f);
	}

	// update the 5 pikmin types
	for (int i = 0; i < 5; i++) {
		mChallengePiki[i]->update();
	}

	// update the state of the level name when it moves
	if (_136) {
		mLevelNameMoveTimer *= 0.65f;
		if (mLevelNameMoveTimer < 0.2f) {
			_136 = false;
			setStageName(mCurrentSelection);
			switch (mLevelNameMoveState) {
			case 0:
				mLevelNameMoveState = 1;
				break;
			case 1:
				mLevelNameMoveState = 0;
				break;
			case 2:
				mLevelNameMoveState = 3;
				break;
			case 3:
				mLevelNameMoveState = 2;
				break;
			}
		}
	} else if (f32(mStageChangeCounter) == 0.0f && _14C == 2.0f) {
		mLevelNameMoveTimer += 0.25f;
		if (mLevelNameMoveState > 1) {
			mLevelNameMoveTimer += 0.15f;
		}
		if (mLevelNameMoveTimer > 1.0f) {
			mLevelNameMoveTimer = 1.0f;
			mLevelNameMoveState = -1;
		}
	}

	// update spray bottles and the level name
	for (int i = 0; i < 2; i++) {
		mDoping[i]->update();

		// update the movement of the level name as needed
		mPaneLevelName[i]->setAlpha(255);
		f32 calc  = 1.0f - mLevelNameMoveTimer;
		f32 XGoal = 0.0f;
		f32 YGoal = 0.0f;
		switch (mLevelNameMoveState) {
		case 0:
			XGoal = 1.3f;
			break;
		case 1:
			XGoal = -1.3f;
			break;
		case 2:
			YGoal = 1.25f;
			break;
		case 3:
			YGoal = -1.25f;
			break;
		}
		mPaneLevelName[i]->addOffset(calc * XGoal * mPaneLevelName[i]->getWidth(), calc * YGoal * mPaneLevelName[i]->getHeight());
	}

	// when in the entering demo, rotate the circular selection effect in the X axis
	if (mIsInDemo) {
		mSelectionEffectAngle += 5.0f;
		f32 max = -(mDownOffset * 5.0f - 90.0f);
		if (max > mSelectionEffectAngle) {
			mSelectionEffectAngle = max;
		}
	}
	mPanelList[mCurrentSelection]->mPane2->setAngleX(mSelectionEffectAngle);

	// Check ending the scene and beginning the game, once all pikmin are done moving
	if (mIsInDemo) {
		bool end = true;
		for (int i = 0; i < 5; i++) {
			if (!mChallengePiki[i]->isDemoEnd()) {
				end = false;
			}
		}

		if (end) {
			mEfxDive->kill();
			if (mDivePikiNum > 0) {
				J2DPane* pane = mPanelList[mCurrentSelection]->mPane2;
				Vector2f pos(pane->mGlobalMtx[0][3], pane->mGlobalMtx[1][3]);
				efx2d::Arg arg(pos);
				efx2d::T2DChalDiveEnd efx;
				efx.create(&arg);
			}
			mIsInDemo = false;
			if (mIsSection) {
				reset();
			} else {
				getOwner()->endScene(nullptr);
			}
		}
	}

	// Check making a dive effect when needed
	if (mDivePikiNum && !mDoCreatePikiDiveEfx) {
		mDoCreatePikiDiveEfx = true;
		J2DPane* pane        = mPanelList[mCurrentSelection]->mPane2;
		Vector2f pos(pane->mGlobalMtx[0][3], pane->mGlobalMtx[1][3]);
		efx2d::Arg arg(pos);
		mEfxDive->create(&arg);
	}

	// debug for forcing the entering demo to start
	if (mIsSection && mForceDemoStart) {
		mForceDemoStart = false;
		demoStart();
	}

	return false;
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
	stmw     r25, 0x94(r1)
	lwz      r4, 0x84(r3)
	mr       r31, r3
	lwz      r0, 0x80(r4)
	subfic   r0, r0, 2
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_80390814
	lis      r3, mPadStatus__10JUTGamePad@ha
	addi     r3, r3, mPadStatus__10JUTGamePad@l
	lbz      r0, 0x16(r3)
	extsb    r0, r0
	cmpwi    r0, -1
	bne      lbl_803907F8
	li       r0, 0
	stb      r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
	b        lbl_80390814

lbl_803907F8:
	lbz      r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8039080C
	li       r0, 0
	stb      r0, 0x84(r4)

lbl_8039080C:
	li       r0, 1
	stb      r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)

lbl_80390814:
	lwz      r3, 0x88(r31)
	li       r29, 0
	li       r28, 0
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80390830
	li       r28, 1

lbl_80390830:
	lbz      r0, 0x45(r31)
	lwz      r27, 0x140(r31)
	cmplwi   r0, 0
	lwz      r26, 0xfc(r31)
	beq      lbl_80391178
	lwz      r3, 0x90(r31)
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 0
	bne      lbl_80391178
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x224(r3)
	lbz      r0, 0xd4(r3)
	cmplwi   r0, 0
	bne      lbl_80391178
	lwz      r5, 0x8c(r31)
	lwz      r4, 0x1c(r5)
	rlwinm.  r0, r4, 0, 0x1b, 0x1b
	beq      lbl_803908E8
	lwz      r3, 0x84(r31)
	lwz      r0, 0x80(r3)
	cmpwi    r0, 0
	bne      lbl_803908E8
	lwz      r3, 0x88(r31)
	lfs      f0, lbl_8051EF88@sda21(r2)
	lfs      f1, 0x24(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803908CC
	mr       r3, r31
	bl       openWindow__Q28Morimura16TChallengeSelectFv
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1811
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80391178

lbl_803908CC:
	mr       r3, r31
	bl       closeWindow__Q28Morimura16TChallengeSelectFv
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1811
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80391178

lbl_803908E8:
	andi.    r0, r4, 0x1100
	beq      lbl_80390BC4
	clrlwi.  r0, r28, 0x18
	beq      lbl_80390BC4
	lwz      r30, 0x84(r31)
	lwz      r3, 0x80(r30)
	neg      r0, r3
	or       r0, r0, r3
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	beq      lbl_80390A8C
	cmpwi    r3, 2
	bne      lbl_80391178
	lbz      r3, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
	cmplwi   r3, 0
	bne      lbl_80390938
	lbz      r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80390A70
	cmplwi   r3, 0
	bne      lbl_80390A70

lbl_80390938:
	li       r0, 3
	stw      r0, 0x80(r30)
	lwz      r0, 0x80(r30)
	cmpwi    r0, 2
	beq      lbl_80390A04
	bge      lbl_8039095C
	cmpwi    r0, 1
	bge      lbl_80390968
	b        lbl_80390A04

lbl_8039095C:
	cmpwi    r0, 4
	bge      lbl_80390A04
	b        lbl_803909B4

lbl_80390968:
	lfs      f0, lbl_8051EF88@sda21(r2)
	li       r25, 0
	lfs      f28, lbl_8051EF94@sda21(r2)
	lis      r28, 0x4330
	stfs     f0, 0x8c(r30)
	lfd      f27, lbl_8051EFB0@sda21(r2)

lbl_80390980:
	xoris    r0, r25, 0x8000
	stw      r28, 0x80(r1)
	lwz      r3, 0x44(r30)
	stw      r0, 0x84(r1)
	lfd      f0, 0x80(r1)
	fsubs    f0, f0, f27
	fmadds   f1, f28, f0, f28
	bl       open__Q32og6Screen15AnimText_ScreenFf
	addi     r25, r25, 1
	addi     r30, r30, 4
	cmpwi    r25, 4
	blt      lbl_80390980
	b        lbl_80390A04

lbl_803909B4:
	lfs      f0, lbl_8051EF88@sda21(r2)
	mr       r25, r30
	li       r28, 0
	stfs     f0, 0x8c(r30)

lbl_803909C4:
	lwz      r3, 0x44(r25)
	bl       close__Q32og6Screen15AnimText_ScreenFv
	addi     r28, r28, 1
	addi     r25, r25, 4
	cmpwi    r28, 4
	blt      lbl_803909C4
	lwz      r3, 0x58(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x5c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80390A04:
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80390A2C
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x134(r31)
	bl       demoStart__Q28Morimura16TChallengeSelectFv
	lwz      r3, 0x90(r31)
	li       r0, 1
	stw      r0, 0x1c(r3)

lbl_80390A2C:
	lwz      r4, 0xfc(r31)
	li       r0, 0
	lwz      r3, 0x90(r31)
	stw      r4, 0x10(r3)
	lwz      r3, 0x90(r31)
	stw      r0, 0x18(r3)
	lbz      r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80390A5C
	lwz      r3, 0x90(r31)
	li       r0, 1
	stw      r0, 0x18(r3)

lbl_80390A5C:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1800
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80391178

lbl_80390A70:
	li       r0, 1
	li       r4, 0x1807
	stb      r0, 0x84(r30)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80391178

lbl_80390A8C:
	lbz      r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80390ABC
	lwz      r3, 0x48(r30)
	lfs      f1, mTextFlashVal__Q28Morimura16TChallengeSelect@sda21(r13)
	lfs      f2, lbl_8051EF88@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lfs      f1, lbl_8051EF88@sda21(r2)
	lwz      r3, 0x4c(r30)
	fmr      f2, f1
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	b        lbl_80390ADC

lbl_80390ABC:
	lfs      f1, lbl_8051EF88@sda21(r2)
	lwz      r3, 0x48(r30)
	fmr      f2, f1
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lwz      r3, 0x4c(r30)
	lfs      f1, mTextFlashVal__Q28Morimura16TChallengeSelect@sda21(r13)
	lfs      f2, lbl_8051EF88@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff

lbl_80390ADC:
	lwz      r3, 0x84(r31)
	li       r25, 0
	li       r0, 1
	stb      r25, 0x84(r3)
	lwz      r30, 0x84(r31)
	stw      r0, 0x80(r30)
	lwz      r0, 0x80(r30)
	cmpwi    r0, 2
	beq      lbl_80390BB0
	bge      lbl_80390B10
	cmpwi    r0, 1
	bge      lbl_80390B1C
	b        lbl_80390BB0

lbl_80390B10:
	cmpwi    r0, 4
	bge      lbl_80390BB0
	b        lbl_80390B64

lbl_80390B1C:
	lfs      f0, lbl_8051EF88@sda21(r2)
	lis      r28, 0x4330
	lfs      f28, lbl_8051EF94@sda21(r2)
	stfs     f0, 0x8c(r30)
	lfd      f27, lbl_8051EFB0@sda21(r2)

lbl_80390B30:
	xoris    r0, r25, 0x8000
	stw      r28, 0x80(r1)
	lwz      r3, 0x44(r30)
	stw      r0, 0x84(r1)
	lfd      f0, 0x80(r1)
	fsubs    f0, f0, f27
	fmadds   f1, f28, f0, f28
	bl       open__Q32og6Screen15AnimText_ScreenFf
	addi     r25, r25, 1
	addi     r30, r30, 4
	cmpwi    r25, 4
	blt      lbl_80390B30
	b        lbl_80390BB0

lbl_80390B64:
	lfs      f0, lbl_8051EF88@sda21(r2)
	mr       r28, r30
	stfs     f0, 0x8c(r30)

lbl_80390B70:
	lwz      r3, 0x44(r28)
	bl       close__Q32og6Screen15AnimText_ScreenFv
	addi     r25, r25, 1
	addi     r28, r28, 4
	cmpwi    r25, 4
	blt      lbl_80390B70
	lwz      r3, 0x58(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x5c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80390BB0:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1811
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80391178

lbl_80390BC4:
	rlwinm.  r0, r4, 0, 0x16, 0x16
	beq      lbl_80390D28
	lwz      r30, 0x84(r31)
	lwz      r3, 0x80(r30)
	neg      r0, r3
	or       r0, r0, r3
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	beq      lbl_80390CCC
	cmpwi    r3, 2
	bne      lbl_80391178
	li       r0, 3
	stw      r0, 0x80(r30)
	lwz      r0, 0x80(r30)
	cmpwi    r0, 2
	beq      lbl_80390CB8
	bge      lbl_80390C10
	cmpwi    r0, 1
	bge      lbl_80390C1C
	b        lbl_80390CB8

lbl_80390C10:
	cmpwi    r0, 4
	bge      lbl_80390CB8
	b        lbl_80390C68

lbl_80390C1C:
	lfs      f0, lbl_8051EF88@sda21(r2)
	li       r25, 0
	lfs      f28, lbl_8051EF94@sda21(r2)
	lis      r28, 0x4330
	stfs     f0, 0x8c(r30)
	lfd      f27, lbl_8051EFB0@sda21(r2)

lbl_80390C34:
	xoris    r0, r25, 0x8000
	stw      r28, 0x80(r1)
	lwz      r3, 0x44(r30)
	stw      r0, 0x84(r1)
	lfd      f0, 0x80(r1)
	fsubs    f0, f0, f27
	fmadds   f1, f28, f0, f28
	bl       open__Q32og6Screen15AnimText_ScreenFf
	addi     r25, r25, 1
	addi     r30, r30, 4
	cmpwi    r25, 4
	blt      lbl_80390C34
	b        lbl_80390CB8

lbl_80390C68:
	lfs      f0, lbl_8051EF88@sda21(r2)
	mr       r28, r30
	li       r25, 0
	stfs     f0, 0x8c(r30)

lbl_80390C78:
	lwz      r3, 0x44(r28)
	bl       close__Q32og6Screen15AnimText_ScreenFv
	addi     r25, r25, 1
	addi     r28, r28, 4
	cmpwi    r25, 4
	blt      lbl_80390C78
	lwz      r3, 0x58(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x5c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80390CB8:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1811
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80391178

lbl_80390CCC:
	clrlwi.  r0, r28, 0x18
	bne      lbl_80390CF0
	mr       r3, r31
	bl       closeWindow__Q28Morimura16TChallengeSelectFv
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1811
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80391178

lbl_80390CF0:
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x128(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x224(r3)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_80391178

lbl_80390D28:
	lwz      r30, 0x84(r31)
	lwz      r3, 0x80(r30)
	neg      r0, r3
	or       r0, r0, r3
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	bne      lbl_80390FB4
	clrlwi.  r0, r28, 0x18
	beq      lbl_80391178
	lwz      r3, 0x18(r5)
	rlwinm.  r0, r3, 0, 5, 5
	bne      lbl_80390D5C
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_80390DE4

lbl_80390D5C:
	lwz      r0, 0x12c(r31)
	cmpwi    r0, 0
	bne      lbl_80390DD4
	lwz      r0, 0x140(r31)
	cmpwi    r0, 0
	bge      lbl_80390D7C
	li       r0, 1
	stw      r0, 0x140(r31)

lbl_80390D7C:
	lis      r3, 0x66666667@ha
	lwz      r5, 0x130(r31)
	addi     r0, r3, 0x66666667@l
	lwz      r4, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	mulhw    r0, r0, r5
	srawi    r0, r0, 1
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	cmpw     r4, r0
	bge      lbl_80390DC8
	addi     r3, r4, 1
	lwz      r4, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	mulli    r0, r3, 5
	add      r0, r4, r0
	cmpw     r0, r5
	bgt      lbl_80390DC8
	stw      r3, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	li       r29, 1
	b        lbl_80390DD4

lbl_80390DC8:
	li       r0, 0
	li       r29, 1
	stw      r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)

lbl_80390DD4:
	lwz      r3, 0x12c(r31)
	addi     r0, r3, 1
	stw      r0, 0x12c(r31)
	b        lbl_80391178

lbl_80390DE4:
	rlwinm.  r0, r3, 0, 4, 4
	bne      lbl_80390DF4
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_80390E84

lbl_80390DF4:
	lwz      r0, 0x12c(r31)
	cmpwi    r0, 0
	bne      lbl_80390E74
	lwz      r0, 0x140(r31)
	cmpwi    r0, 0
	bge      lbl_80390E14
	li       r0, 0
	stw      r0, 0x140(r31)

lbl_80390E14:
	lwz      r3, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	cmpwi    r3, 0
	ble      lbl_80390E30
	addi     r0, r3, -1
	li       r29, 1
	stw      r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	b        lbl_80390E74

lbl_80390E30:
	lis      r3, 0x66666667@ha
	lwz      r0, 0x130(r31)
	addi     r3, r3, 0x66666667@l
	lwz      r4, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	mulhw    r0, r3, r0
	li       r29, 1
	srawi    r0, r0, 1
	srwi     r3, r0, 0x1f
	add      r5, r0, r3
	stw      r5, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	mulli    r3, r5, 5
	lwz      r0, 0x130(r31)
	add      r3, r4, r3
	cmpw     r3, r0
	ble      lbl_80390E74
	addi     r0, r5, -1
	stw      r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)

lbl_80390E74:
	lwz      r3, 0x12c(r31)
	addi     r0, r3, 1
	stw      r0, 0x12c(r31)
	b        lbl_80391178

lbl_80390E84:
	rlwinm.  r0, r3, 0, 6, 6
	bne      lbl_80390E94
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_80390F04

lbl_80390E94:
	lwz      r0, 0x12c(r31)
	cmpwi    r0, 0
	bne      lbl_80390EF4
	lwz      r0, 0x140(r31)
	cmpwi    r0, 0
	bge      lbl_80390EB4
	li       r0, 3
	stw      r0, 0x140(r31)

lbl_80390EB4:
	lwz      r4, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	cmpwi    r4, 4
	bge      lbl_80390EE8
	lwz      r3, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	lwz      r0, 0x130(r31)
	mulli    r3, r3, 5
	add      r3, r4, r3
	cmpw     r3, r0
	bge      lbl_80390EE8
	addi     r0, r4, 1
	li       r29, 1
	stw      r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	b        lbl_80390EF4

lbl_80390EE8:
	li       r0, 0
	li       r29, 1
	stw      r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)

lbl_80390EF4:
	lwz      r3, 0x12c(r31)
	addi     r0, r3, 1
	stw      r0, 0x12c(r31)
	b        lbl_80391178

lbl_80390F04:
	rlwinm.  r0, r3, 0, 7, 7
	bne      lbl_80390F14
	clrlwi.  r0, r3, 0x1f
	beq      lbl_80390F6C

lbl_80390F14:
	lwz      r0, 0x12c(r31)
	cmpwi    r0, 0
	bne      lbl_80390F5C
	lwz      r0, 0x140(r31)
	cmpwi    r0, 0
	bge      lbl_80390F34
	li       r0, 2
	stw      r0, 0x140(r31)

lbl_80390F34:
	lwz      r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	cmpwi    r3, 0
	ble      lbl_80390F50
	addi     r0, r3, -1
	li       r29, 1
	stw      r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	b        lbl_80390F5C

lbl_80390F50:
	li       r0, 4
	li       r29, 1
	stw      r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)

lbl_80390F5C:
	lwz      r3, 0x12c(r31)
	addi     r0, r3, 1
	stw      r0, 0x12c(r31)
	b        lbl_80391178

lbl_80390F6C:
	li       r0, 0
	lfs      f0, lbl_8051EFF0@sda21(r2)
	stw      r0, 0x12c(r31)
	lfs      f1, 0x14c(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80390F88
	stfs     f0, 0x14c(r31)

lbl_80390F88:
	lfs      f2, 0x14c(r31)
	lfs      f1, lbl_8051F008@sda21(r2)
	lfs      f0, lbl_8051EFCC@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x14c(r31)
	lfs      f1, 0x14c(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80391178
	stfs     f0, 0x14c(r31)
	b        lbl_80391178

lbl_80390FB4:
	lwz      r3, 0x18(r5)
	rlwinm.  r0, r3, 0, 5, 5
	bne      lbl_80390FC8
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_80391094

lbl_80390FC8:
	lbz      r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80391088
	lfs      f27, mTextFlashVal__Q28Morimura16TChallengeSelect@sda21(r13)
	bne      lbl_80391018
	lwz      r3, 0x3c(r30)
	lfs      f1, lbl_8051F044@sda21(r2)
	lfs      f2, lbl_8051F048@sda21(r2)
	lfs      f3, lbl_8051F04C@sda21(r2)
	lfs      f4, lbl_8051EF88@sda21(r2)
	bl       up__Q32og6Screen8ScaleMgrFffff
	fmr      f1, f27
	lwz      r3, 0x48(r30)
	lfs      f2, lbl_8051EF88@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lfs      f1, lbl_8051EF88@sda21(r2)
	lwz      r3, 0x4c(r30)
	fmr      f2, f1
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	b        lbl_80391078

lbl_80391018:
	lfs      f1, lbl_8051EF88@sda21(r2)
	lwz      r3, 0x48(r30)
	fmr      f2, f1
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	fmr      f1, f27
	lwz      r3, 0x4c(r30)
	lfs      f2, lbl_8051EF88@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lbz      r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80391060
	lwz      r3, 0x40(r30)
	lfs      f1, lbl_8051F044@sda21(r2)
	lfs      f2, lbl_8051F048@sda21(r2)
	lfs      f3, lbl_8051F04C@sda21(r2)
	lfs      f4, lbl_8051EF88@sda21(r2)
	bl       up__Q32og6Screen8ScaleMgrFffff
	b        lbl_80391078

lbl_80391060:
	lwz      r3, 0x40(r30)
	lfs      f1, lbl_8051F050@sda21(r2)
	lfs      f2, lbl_8051EFA4@sda21(r2)
	lfs      f3, lbl_8051EFE4@sda21(r2)
	lfs      f4, lbl_8051EF88@sda21(r2)
	bl       up__Q32og6Screen8ScaleMgrFffff

lbl_80391078:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1802
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80391088:
	li       r0, 0
	stb      r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
	b        lbl_80391178

lbl_80391094:
	rlwinm.  r0, r3, 0, 4, 4
	bne      lbl_803910A4
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_80391178

lbl_803910A4:
	lbz      r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80391164
	lfs      f27, mTextFlashVal__Q28Morimura16TChallengeSelect@sda21(r13)
	bne      lbl_803910F4
	lwz      r3, 0x3c(r30)
	lfs      f1, lbl_8051F044@sda21(r2)
	lfs      f2, lbl_8051F048@sda21(r2)
	lfs      f3, lbl_8051F04C@sda21(r2)
	lfs      f4, lbl_8051EF88@sda21(r2)
	bl       up__Q32og6Screen8ScaleMgrFffff
	fmr      f1, f27
	lwz      r3, 0x48(r30)
	lfs      f2, lbl_8051EF88@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lfs      f1, lbl_8051EF88@sda21(r2)
	lwz      r3, 0x4c(r30)
	fmr      f2, f1
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	b        lbl_80391154

lbl_803910F4:
	lfs      f1, lbl_8051EF88@sda21(r2)
	lwz      r3, 0x48(r30)
	fmr      f2, f1
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	fmr      f1, f27
	lwz      r3, 0x4c(r30)
	lfs      f2, lbl_8051EF88@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lbz      r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8039113C
	lwz      r3, 0x40(r30)
	lfs      f1, lbl_8051F044@sda21(r2)
	lfs      f2, lbl_8051F048@sda21(r2)
	lfs      f3, lbl_8051F04C@sda21(r2)
	lfs      f4, lbl_8051EF88@sda21(r2)
	bl       up__Q32og6Screen8ScaleMgrFffff
	b        lbl_80391154

lbl_8039113C:
	lwz      r3, 0x40(r30)
	lfs      f1, lbl_8051F050@sda21(r2)
	lfs      f2, lbl_8051EFA4@sda21(r2)
	lfs      f3, lbl_8051EFE4@sda21(r2)
	lfs      f4, lbl_8051EF88@sda21(r2)
	bl       up__Q32og6Screen8ScaleMgrFffff

lbl_80391154:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1802
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80391164:
	li       r3, 1
	li       r0, 0
	stb      r3, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
	lwz      r3, 0x84(r31)
	stb      r0, 0x84(r3)

lbl_80391178:
	lwz      r3, 0x90(r31)
	lwz      r3, 0x20(r3)
	lwz      r0, 8(r3)
	cmpwi    r0, 1
	bne      lbl_803911C8
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803911C8
	li       r3, 0
	li       r0, 1
	stb      r3, 0x134(r31)
	mr       r3, r31
	lwz      r4, 0x90(r31)
	stw      r0, 0x1c(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg

lbl_803911C8:
	lwz      r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	lwz      r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	mulli    r0, r0, 5
	lwz      r4, 0x130(r31)
	add      r0, r3, r0
	cmpw     r0, r4
	blt      lbl_8039125C
	lis      r3, 0x66666667@ha
	addi     r5, r3, 0x66666667@l
	mulhw    r0, r5, r4
	srawi    r0, r0, 1
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	stw      r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	lwz      r4, 0x130(r31)
	mulhw    r0, r5, r4
	srawi    r0, r0, 1
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	mulli    r0, r0, 5
	subf     r0, r0, r4
	stw      r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	lwz      r3, 0x130(r31)
	cmpw     r0, r3
	blt      lbl_80391230
	stw      r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)

lbl_80391230:
	lwz      r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	lwz      r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	mulli    r0, r0, 5
	add      r0, r3, r0
	stw      r0, 0xfc(r31)
	lwz      r3, 0xfc(r31)
	lwz      r0, 0x130(r31)
	cmpw     r3, r0
	ble      lbl_8039125C
	li       r0, 0
	stw      r0, 0xfc(r31)

lbl_8039125C:
	cmpwi    r27, 0
	blt      lbl_80391280
	lwz      r0, 0x140(r31)
	cmpw     r27, r0
	beq      lbl_80391280
	li       r0, 0
	lfs      f0, lbl_8051EFCC@sda21(r2)
	stw      r0, 0x12c(r31)
	stfs     f0, 0x14c(r31)

lbl_80391280:
	lwz      r3, 0x12c(r31)
	lis      r0, 0x4330
	stw      r0, 0x80(r1)
	xoris    r0, r3, 0x8000
	lfd      f3, lbl_8051EFB0@sda21(r2)
	stw      r0, 0x84(r1)
	lfs      f1, lbl_8051EFD8@sda21(r2)
	lfd      f2, 0x80(r1)
	lfs      f0, 0x14c(r31)
	fsubs    f2, f2, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	ble      lbl_803912E0
	li       r0, 0
	lfs      f1, lbl_8051EFB8@sda21(r2)
	stw      r0, 0x12c(r31)
	lfs      f0, lbl_8051F044@sda21(r2)
	lfs      f2, 0x14c(r31)
	fmuls    f1, f2, f1
	stfs     f1, 0x14c(r31)
	lfs      f1, 0x14c(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_803912E0
	stfs     f0, 0x14c(r31)

lbl_803912E0:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80391368
	lwz      r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	lwz      r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	mulli    r0, r0, 5
	add      r0, r3, r0
	stw      r0, 0xfc(r31)
	lwz      r0, 0xfc(r31)
	cmpw     r26, r0
	beq      lbl_80391358
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x136(r31)
	lwz      r4, 0xfc(r31)
	bl       setInfo__Q28Morimura16TChallengeSelectFi
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1802
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0xfc(r31)
	lwz      r3, 0x94(r31)
	slwi     r0, r0, 2
	lfs      f1, lbl_8051EFE4@sda21(r2)
	lwzx     r3, r3, r0
	lfs      f2, lbl_8051EF98@sda21(r2)
	lwz      r3, 0x10(r3)
	lfs      f3, lbl_8051F010@sda21(r2)
	lfs      f4, lbl_8051EF88@sda21(r2)
	bl       up__Q32og6Screen8ScaleMgrFffff
	b        lbl_80391368

lbl_80391358:
	li       r0, 0
	lfs      f0, lbl_8051EFCC@sda21(r2)
	stw      r0, 0x12c(r31)
	stfs     f0, 0x14c(r31)

lbl_80391368:
	lwz      r3, 0x80(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x84(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x88(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r25, 0x80(r31)
	lwz      r0, 0x10(r25)
	cmpwi    r0, 1
	bge      lbl_803913CC
	lis      r3, lbl_80494694@ha
	li       r4, 0x58
	addi     r3, r3, lbl_80494694@l
	li       r5, 0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803913CC:
	lwz      r3, 4(r25)
	addi     r5, r1, 8
	li       r4, 0
	lwz      r3, 4(r3)
	lwz      r3, 0x14(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lbz      r3, 0xb(r1)
	stb      r3, mFrameAnimAlpha__Q28Morimura16TChallengeSelect@sda21(r13)
	lbz      r0, 0x135(r31)
	cmplwi   r0, 0
	beq      lbl_80391414
	cmplwi   r3, 0x96
	bge      lbl_80391414
	li       r0, 0x96
	stb      r0, mFrameAnimAlpha__Q28Morimura16TChallengeSelect@sda21(r13)

lbl_80391414:
	lfd      f28, lbl_8051F000@sda21(r2)
	li       r26, 0
	lfs      f27, lbl_8051EFF0@sda21(r2)
	li       r30, 0
	lis      r28, 0x4330

lbl_80391428:
	lwz      r3, 0x94(r31)
	mr       r5, r29
	lwz      r4, 0xfc(r31)
	lwzx     r27, r3, r30
	mr       r3, r27
	bl       update__Q28Morimura15TChallengePanelFib
	lwz      r0, 0xfc(r31)
	cmpw     r26, r0
	beq      lbl_80391458
	lbz      r0, 0x24(r27)
	cmplwi   r0, 0
	beq      lbl_803915B0

lbl_80391458:
	lfs      f0, mSelectIconScale__Q28Morimura16TChallengeSelect@sda21(r13)
	stfs     f0, 0x14(r27)
	lfs      f0, 0x14(r27)
	lfs      f1, mSelectIconScale__Q28Morimura16TChallengeSelect@sda21(r13)
	fcmpo    cr0, f0, f1
	ble      lbl_80391474
	stfs     f1, 0x14(r27)

lbl_80391474:
	lfs      f1, 0x18(r27)
	lfs      f2, mAlphaSpeed__Q28Morimura16TChallengeSelect@sda21(r13)
	lfs      f0, lbl_8051EFF0@sda21(r2)
	fadds    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_80391494
	stfs     f1, 0x18(r27)
	b        lbl_803915F8

lbl_80391494:
	lbz      r0, 0x24(r27)
	cmplwi   r0, 0
	beq      lbl_803915A4
	lwz      r3, 0x10(r27)
	lfs      f1, lbl_8051EFE4@sda21(r2)
	lfs      f2, lbl_8051EF98@sda21(r2)
	lfs      f3, lbl_8051F010@sda21(r2)
	lfs      f4, lbl_8051EF88@sda21(r2)
	bl       up__Q32og6Screen8ScaleMgrFffff
	li       r0, 0
	stb      r0, 0x24(r27)
	lwz      r0, 0x1c(r27)
	cmpwi    r0, 3
	bge      lbl_803915A4
	lwz      r0, 0x20(r27)
	li       r4, 0x1830
	li       r5, 0
	stw      r0, 0x1c(r27)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, 4(r27)
	lis      r4, mIconTexture__Q28Morimura16TChallengeSelect@ha
	lwz      r0, 0x1c(r27)
	addi     r4, r4, mIconTexture__Q28Morimura16TChallengeSelect@l
	lwz      r12, 0(r3)
	li       r5, 0
	slwi     r0, r0, 2
	lwz      r12, 0x110(r12)
	lwzx     r4, r4, r0
	mtctr    r12
	bctrl
	lwz      r7, 4(r27)
	lis      r3, __vt__Q25efx2d7TBaseIF@ha
	lis      r6, __vt__Q25efx2d5TBase@ha
	lis      r4, __vt__Q25efx2d8TSimple1@ha
	lfs      f1, 0x8c(r7)
	lis      r5, __vt__Q25efx2d3Arg@ha
	lfs      f0, 0x9c(r7)
	li       r7, 0
	stfs     f1, 0xc(r1)
	addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
	lis      r3, __vt__Q25efx2d14T2DChangesmoke@ha
	addi     r9, r5, __vt__Q25efx2d3Arg@l
	stfs     f0, 0x10(r1)
	li       r5, 7
	lwz      r11, 0xc(r1)
	addi     r8, r6, __vt__Q25efx2d5TBase@l
	stw      r0, 0x48(r1)
	addi     r6, r4, __vt__Q25efx2d8TSimple1@l
	lwz      r10, 0x10(r1)
	addi     r0, r3, __vt__Q25efx2d14T2DChangesmoke@l
	stw      r11, 0x14(r1)
	addi     r3, r1, 0x48
	addi     r4, r1, 0x3c
	stw      r10, 0x18(r1)
	lfs      f1, 0x14(r1)
	stw      r8, 0x48(r1)
	lfs      f0, 0x18(r1)
	stw      r6, 0x48(r1)
	stw      r9, 0x44(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	stb      r7, 0x4c(r1)
	stb      r7, 0x4d(r1)
	sth      r5, 0x50(r1)
	stw      r7, 0x54(r1)
	stw      r0, 0x48(r1)
	bl       create__Q25efx2d8TSimple1FPQ25efx2d3Arg

lbl_803915A4:
	lfs      f0, lbl_8051EFF0@sda21(r2)
	stfs     f0, 0x18(r27)
	b        lbl_803915F8

lbl_803915B0:
	lfs      f2, 0x14(r27)
	lfs      f1, lbl_8051EFF8@sda21(r2)
	lfs      f0, lbl_8051EFF0@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0x14(r27)
	lfs      f1, 0x14(r27)
	fcmpo    cr0, f1, f0
	bge      lbl_803915D4
	stfs     f0, 0x14(r27)

lbl_803915D4:
	lfs      f0, 0x18(r27)
	lfs      f1, mAlphaSpeed__Q28Morimura16TChallengeSelect@sda21(r13)
	fcmpo    cr0, f0, f1
	ble      lbl_803915F0
	fsubs    f0, f0, f1
	stfs     f0, 0x18(r27)
	b        lbl_803915F8

lbl_803915F0:
	lfs      f0, lbl_8051EF88@sda21(r2)
	stfs     f0, 0x18(r27)

lbl_803915F8:
	lbz      r0, mFrameAnimAlpha__Q28Morimura16TChallengeSelect@sda21(r13)
	lfs      f0, 0x18(r27)
	stw      r0, 0x84(r1)
	lwz      r3, 8(r27)
	fmuls    f0, f27, f0
	stw      r28, 0x80(r1)
	lwz      r12, 0(r3)
	lfd      f1, 0x80(r1)
	lwz      r12, 0x24(r12)
	fsubs    f1, f1, f28
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r4, 0x8c(r1)
	mtctr    r12
	bctrl
	addi     r26, r26, 1
	addi     r30, r30, 4
	cmpwi    r26, 0x1e
	blt      lbl_80391428
	li       r26, 0
	mr       r25, r31

lbl_80391650:
	lwz      r3, 0x9c(r25)
	bl       update__Q28Morimura14TChallengePikiFv
	addi     r26, r26, 1
	addi     r25, r25, 4
	cmpwi    r26, 5
	blt      lbl_80391650
	lbz      r0, 0x136(r31)
	cmplwi   r0, 0
	beq      lbl_80391704
	lfs      f2, 0x13c(r31)
	lfs      f1, lbl_8051F058@sda21(r2)
	lfs      f0, lbl_8051F008@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0x13c(r31)
	lfs      f1, 0x13c(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80391788
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x136(r31)
	lwz      r4, 0xfc(r31)
	bl       setStageName__Q28Morimura16TChallengeSelectFi
	lwz      r0, 0x140(r31)
	cmpwi    r0, 2
	beq      lbl_803916EC
	bge      lbl_803916C8
	cmpwi    r0, 0
	beq      lbl_803916D4
	bge      lbl_803916E0
	b        lbl_80391788

lbl_803916C8:
	cmpwi    r0, 4
	bge      lbl_80391788
	b        lbl_803916F8

lbl_803916D4:
	li       r0, 1
	stw      r0, 0x140(r31)
	b        lbl_80391788

lbl_803916E0:
	li       r0, 0
	stw      r0, 0x140(r31)
	b        lbl_80391788

lbl_803916EC:
	li       r0, 3
	stw      r0, 0x140(r31)
	b        lbl_80391788

lbl_803916F8:
	li       r0, 2
	stw      r0, 0x140(r31)
	b        lbl_80391788

lbl_80391704:
	lwz      r3, 0x12c(r31)
	lis      r0, 0x4330
	stw      r0, 0x88(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_8051EFB0@sda21(r2)
	stw      r0, 0x8c(r1)
	lfs      f2, lbl_8051EF88@sda21(r2)
	lfd      f0, 0x88(r1)
	fsubs    f0, f0, f1
	fcmpu    cr0, f2, f0
	bne      lbl_80391788
	lfs      f1, lbl_8051EFCC@sda21(r2)
	lfs      f0, 0x14c(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_80391788
	lfs      f1, 0x13c(r31)
	lfs      f0, lbl_8051F044@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x13c(r31)
	lwz      r0, 0x140(r31)
	cmpwi    r0, 1
	ble      lbl_8039176C
	lfs      f1, 0x13c(r31)
	lfs      f0, lbl_8051F050@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x13c(r31)

lbl_8039176C:
	lfs      f1, 0x13c(r31)
	lfs      f0, lbl_8051EFF0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80391788
	stfs     f0, 0x13c(r31)
	li       r0, -1
	stw      r0, 0x140(r31)

lbl_80391788:
	lfs      f31, lbl_8051EFF4@sda21(r2)
	mr       r26, r31
	lfs      f27, lbl_8051EF88@sda21(r2)
	li       r27, 0
	lfs      f28, lbl_8051EFF0@sda21(r2)
	lfs      f29, lbl_8051EFEC@sda21(r2)
	lfs      f30, lbl_8051EFCC@sda21(r2)

lbl_803917A4:
	lwz      r25, 0xb0(r26)
	lfs      f1, 0x10(r25)
	lfs      f0, 0x14(r25)
	fsubs    f1, f1, f0
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f31
	ble      lbl_803917CC
	lfs      f0, lbl_8051EF94@sda21(r2)
	fmuls    f1, f1, f0

lbl_803917CC:
	lfs      f0, 0x14(r25)
	fadds    f0, f0, f1
	stfs     f0, 0x14(r25)
	lfs      f0, 0x14(r25)
	fcmpo    cr0, f0, f27
	bge      lbl_803917E8
	stfs     f27, 0x14(r25)

lbl_803917E8:
	lfs      f0, 0x14(r25)
	fcmpo    cr0, f0, f28
	ble      lbl_803917F8
	stfs     f28, 0x14(r25)

lbl_803917F8:
	lwz      r3, 0(r25)
	lfs      f0, 0x14(r25)
	stfs     f28, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x14(r25)
	li       r0, 0
	lwz      r3, 4(r25)
	fmuls    f0, f29, f0
	stb      r0, 0xb0(r3)
	lwz      r3, 8(r25)
	fcmpo    cr0, f0, f29
	stb      r0, 0xb0(r3)
	lwz      r3, 0xc(r25)
	stb      r0, 0xb0(r3)
	cror     2, 1, 2
	bne      lbl_80391854
	lwz      r3, 4(r25)
	li       r0, 1
	stb      r0, 0xb0(r3)

lbl_80391854:
	fcmpo    cr0, f0, f30
	cror     2, 1, 2
	bne      lbl_8039186C
	lwz      r3, 8(r25)
	li       r0, 1
	stb      r0, 0xb0(r3)

lbl_8039186C:
	fcmpo    cr0, f0, f28
	cror     2, 1, 2
	bne      lbl_80391884
	lwz      r3, 0xc(r25)
	li       r0, 1
	stb      r0, 0xb0(r3)

lbl_80391884:
	lwz      r3, 0xe0(r26)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f5, lbl_8051EF88@sda21(r2)
	lfs      f0, 0x13c(r31)
	lwz      r0, 0x140(r31)
	fmr      f6, f5
	fsubs    f7, f28, f0
	cmpwi    r0, 2
	beq      lbl_803918E8
	bge      lbl_803918CC
	cmpwi    r0, 0
	beq      lbl_803918D8
	bge      lbl_803918E0
	b        lbl_803918F4

lbl_803918CC:
	cmpwi    r0, 4
	bge      lbl_803918F4
	b        lbl_803918F0

lbl_803918D8:
	lfs      f6, lbl_8051F05C@sda21(r2)
	b        lbl_803918F4

lbl_803918E0:
	lfs      f6, lbl_8051F060@sda21(r2)
	b        lbl_803918F4

lbl_803918E8:
	lfs      f5, lbl_8051F064@sda21(r2)
	b        lbl_803918F4

lbl_803918F0:
	lfs      f5, lbl_8051F068@sda21(r2)

lbl_803918F4:
	lwz      r3, 0xe0(r26)
	lfs      f1, 0x28(r3)
	lfs      f0, 0x20(r3)
	lfs      f3, 0x2c(r3)
	fsubs    f0, f1, f0
	lfs      f2, 0x24(r3)
	lfs      f1, 0xd4(r3)
	fsubs    f3, f3, f2
	lfs      f4, 0xd8(r3)
	fmuls    f2, f5, f0
	fmuls    f0, f6, f3
	fmadds   f1, f7, f2, f1
	fmadds   f0, f7, f0, f4
	stfs     f1, 0xd4(r3)
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r27, r27, 1
	addi     r26, r26, 4
	cmpwi    r27, 2
	blt      lbl_803917A4
	lbz      r0, 0x135(r31)
	cmplwi   r0, 0
	beq      lbl_803919A4
	lfs      f0, 0x138(r31)
	lis      r0, 0x4330
	lfs      f4, lbl_8051F06C@sda21(r2)
	stw      r0, 0x88(r1)
	fadds    f0, f0, f4
	lfd      f3, lbl_8051EFB0@sda21(r2)
	lfs      f1, lbl_8051F070@sda21(r2)
	stfs     f0, 0x138(r31)
	lwz      r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
	lfs      f0, 0x138(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x8c(r1)
	lfd      f2, 0x88(r1)
	fsubs    f2, f2, f3
	fnmsubs  f1, f4, f2, f1
	fcmpo    cr0, f0, f1
	ble      lbl_803919A4
	stfs     f1, 0x138(r31)

lbl_803919A4:
	lwz      r0, 0xfc(r31)
	lwz      r3, 0x94(r31)
	slwi     r0, r0, 2
	lfs      f0, 0x138(r31)
	lwzx     r3, r3, r0
	lwz      r3, 8(r3)
	stfs     f0, 0xb8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x135(r31)
	cmplwi   r0, 0
	beq      lbl_80391B5C
	mr       r4, r31
	li       r5, 1
	li       r6, 0

lbl_803919E8:
	lwz      r3, 0x9c(r4)
	lwz      r0, 0x72c(r3)
	cmpwi    r0, 0
	bne      lbl_80391A00
	li       r0, 1
	b        lbl_80391A38

lbl_80391A00:
	cmpwi    r0, 0x32
	ble      lbl_80391A0C
	li       r0, 0x32

lbl_80391A0C:
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_80391A34

lbl_80391A18:
	lwz      r0, 0x24(r3)
	cmpwi    r0, 0
	beq      lbl_80391A2C
	li       r0, 0
	b        lbl_80391A38

lbl_80391A2C:
	addi     r3, r3, 0x24
	bdnz     lbl_80391A18

lbl_80391A34:
	li       r0, 1

lbl_80391A38:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80391A44
	li       r5, 0

lbl_80391A44:
	addi     r6, r6, 1
	addi     r4, r4, 4
	cmpwi    r6, 5
	blt      lbl_803919E8
	clrlwi.  r0, r5, 0x18
	beq      lbl_80391B5C
	lwz      r3, 0xf0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
	cmpwi    r0, 0
	ble      lbl_80391B20
	lwz      r0, 0xfc(r31)
	lis      r6, __vt__Q25efx2d7TBaseIF@ha
	lwz      r3, 0x94(r31)
	lis      r5, __vt__Q25efx2d5TBase@ha
	slwi     r0, r0, 2
	lis      r4, __vt__Q25efx2d8TSimple1@ha
	lwzx     r8, r3, r0
	lis      r7, __vt__Q25efx2d3Arg@ha
	lis      r3, __vt__Q25efx2d14T2DChalDiveEnd@ha
	addi     r9, r6, __vt__Q25efx2d7TBaseIF@l
	lwz      r11, 8(r8)
	addi     r8, r5, __vt__Q25efx2d5TBase@l
	addi     r6, r4, __vt__Q25efx2d8TSimple1@l
	addi     r10, r7, __vt__Q25efx2d3Arg@l
	lfs      f1, 0x8c(r11)
	addi     r0, r3, __vt__Q25efx2d14T2DChalDiveEnd@l
	lfs      f0, 0x9c(r11)
	li       r7, 0
	stfs     f1, 0x34(r1)
	li       r5, 6
	addi     r3, r1, 0x64
	addi     r4, r1, 0x74
	stfs     f0, 0x38(r1)
	lwz      r11, 0x34(r1)
	stw      r9, 0x64(r1)
	lwz      r9, 0x38(r1)
	stw      r11, 0x24(r1)
	stw      r9, 0x28(r1)
	lfs      f1, 0x24(r1)
	stw      r8, 0x64(r1)
	lfs      f0, 0x28(r1)
	stw      r6, 0x64(r1)
	stw      r10, 0x7c(r1)
	stfs     f1, 0x74(r1)
	stfs     f0, 0x78(r1)
	stb      r7, 0x68(r1)
	stb      r7, 0x69(r1)
	sth      r5, 0x6c(r1)
	stw      r7, 0x70(r1)
	stw      r0, 0x64(r1)
	bl       create__Q25efx2d8TSimple1FPQ25efx2d3Arg

lbl_80391B20:
	li       r0, 0
	stb      r0, 0x135(r31)
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80391B40
	mr       r3, r31
	bl       reset__Q28Morimura16TChallengeSelectFv
	b        lbl_80391B5C

lbl_80391B40:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg

lbl_80391B5C:
	lwz      r0, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
	cmpwi    r0, 0
	beq      lbl_80391BE4
	lbz      r0, 0x144(r31)
	cmplwi   r0, 0
	bne      lbl_80391BE4
	li       r0, 1
	lis      r3, __vt__Q25efx2d3Arg@ha
	stb      r0, 0x144(r31)
	addi     r0, r3, __vt__Q25efx2d3Arg@l
	addi     r4, r1, 0x58
	lwz      r3, 0xfc(r31)
	lwz      r5, 0x94(r31)
	slwi     r3, r3, 2
	lwzx     r3, r5, r3
	lwz      r3, 8(r3)
	lfs      f1, 0x8c(r3)
	lfs      f0, 0x9c(r3)
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x30(r1)
	lwz      r5, 0x2c(r1)
	lwz      r3, 0x30(r1)
	stw      r5, 0x1c(r1)
	stw      r3, 0x20(r1)
	lfs      f1, 0x1c(r1)
	lfs      f0, 0x20(r1)
	stw      r0, 0x60(r1)
	stfs     f1, 0x58(r1)
	stfs     f0, 0x5c(r1)
	lwz      r3, 0xf0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80391BE4:
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80391C0C
	lbz      r0, mForceDemoStart__Q28Morimura16TChallengeSelect@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80391C0C
	li       r0, 0
	mr       r3, r31
	stb      r0, mForceDemoStart__Q28Morimura16TChallengeSelect@sda21(r13)
	bl       demoStart__Q28Morimura16TChallengeSelectFv

lbl_80391C0C:
	li       r3, 0
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
	lmw      r25, 0x94(r1)
	lwz      r0, 0x104(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/**
 * @note Address: 0x80391C4C
 * @note Size: 0x514
 */
void TChallengeSelect::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	mSelectScreen->draw(gfx, graf);

	gfx.mOrthoGraph.setPort();
	for (int i = 0; i < 5; i++) {
		mChallengePiki[i]->draw();
	}

	bool drawBg = false;
	if (static_cast<TChallengeSelectScene*>(getOwner())->mConfirmEndWindow->mHasDrawn) {
		drawBg = true;
		if (static_cast<TChallengeSelectScene*>(getOwner())->mConfirmEndWindow->mIsActive) {
			mBgAlpha += 20;
			if (mBgAlpha > 200) {
				mBgAlpha = 200;
			}
		} else {
			if (mBgAlpha > 20) {
				mBgAlpha -= 20;
			} else {
				mBgAlpha = 0;
			}
		}
	} else {
		int rulestate = mRulesScreen->mState;
		if (rulestate) {
			drawBg = true;
			if (rulestate == 3) {
				mBgAlpha += 20;
				if (mBgAlpha > 200) {
					mBgAlpha = 200;
				}
			} else {
				if (mBgAlpha > 25) {
					mBgAlpha -= 25;
				} else {
					mBgAlpha = 0;
				}
			}
		} else {
			rulestate = mPlayModeScreen->mState;
			if (!mPlayModeScreen->isState(0)) {
				drawBg = true;
				if (rulestate == 3) {
					if (mBgAlpha > 25) {
						mBgAlpha -= 25;
					} else {
						mBgAlpha = 0;
					}

				} else {
					mBgAlpha += 20;
					if (mBgAlpha > 200) {
						mBgAlpha = 200;
					}
				}
			}
		}
	}

	gfx.mPerspGraph.setPort();

	if (drawBg) {
		JUtility::TColor color1;
		color1.set(50, 0, 0, 0);
		color1.a = 255 - mBgAlpha;
		graf->setColor(color1);
		GXSetAlphaUpdate(GX_FALSE);
		u32 y    = System::getRenderModeObj()->efbHeight;
		u32 x    = System::getRenderModeObj()->fbWidth;
		f32 zero = 0.0f;
		JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
		graf->fillBox(box);
		GXSetAlphaUpdate(GX_TRUE);
	}

	mPlayModeScreen->draw(gfx, graf);
	mRulesScreen->draw(gfx, graf);

	JUtility::TColor color1;
	color1.set(0, 0, 0, 255 - mFadeAlpha);
	graf->setColor(color1);
	GXSetAlphaUpdate(GX_FALSE);
	u32 y    = System::getRenderModeObj()->efbHeight;
	u32 x    = System::getRenderModeObj()->fbWidth;
	f32 zero = 0.0f;
	JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
	graf->fillBox(box);
	GXSetAlphaUpdate(GX_TRUE);

	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stmw     r23, 0x6c(r1)
	mr       r28, r3
	mr       r29, r4
	addi     r31, r29, 0x190
	mr       r5, r31
	lwz      r3, 0x80(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r29, 0xbc
	lwz      r12, 0xbc(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r23, 0
	mr       r24, r28

	lbl_80391C9C:
	lwz      r26, 0x9c(r24)
	lwz      r3, 0x72c(r26)
	cmpwi    r3, 0x32
	ble      lbl_80391CB0
	li       r3, 0x32

	lbl_80391CB0:
	addi     r27, r3, -1
	mulli    r0, r27, 0x24
	add      r25, r26, r0
	b        lbl_80391DF4

	lbl_80391CC0:
	lwz      r30, 0(r26)
	li       r4, 0
	lfs      f1, 0x30(r25)
	li       r5, 0
	mr       r3, r30
	lfs      f4, 0x28(r30)
	lwz      r12, 0(r30)
	li       r6, 0
	lfs      f3, 0x20(r30)
	lfs      f2, 0x2c(r30)
	lfs      f0, 0x24(r30)
	fsubs    f3, f4, f3
	lwz      r12, 0xec(r12)
	fsubs    f4, f2, f0
	lfs      f2, 0x34(r25)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r30, 4(r26)
	li       r4, 0
	lfs      f4, 0x30(r25)
	li       r5, 0
	lfs      f1, 0x28(r30)
	mr       r3, r30
	lfs      f0, 0x20(r30)
	li       r6, 0
	lwz      r12, 0(r30)
	fsubs    f3, f1, f0
	lfs      f0, 0x14(r26)
	lfs      f5, 0x34(r25)
	lfs      f2, 0x18(r26)
	fsubs    f1, f4, f0
	lfs      f4, 0x2c(r30)
	lfs      f0, 0x24(r30)
	fsubs    f2, f5, f2
	lwz      r12, 0xec(r12)
	fneg     f3, f3
	fsubs    f4, f4, f0
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r30, 8(r26)
	li       r4, 0
	lfs      f1, 0x30(r25)
	li       r5, 0
	mr       r3, r30
	lfs      f0, 0x1c(r26)
	lwz      r12, 0(r30)
	li       r6, 0
	lfs      f2, 0x34(r25)
	fsubs    f1, f1, f0
	lfs      f0, 0x20(r26)
	lfs      f5, 0x28(r30)
	lfs      f3, 0x20(r30)
	fsubs    f2, f2, f0
	lfs      f4, 0x2c(r30)
	lfs      f0, 0x24(r30)
	fsubs    f3, f5, f3
	lwz      r12, 0xec(r12)
	fsubs    f4, f4, f0
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r25, r25, -36
	addi     r27, r27, -1

	lbl_80391DF4:
	cmpwi    r27, 0
	bge      lbl_80391CC0
	addi     r23, r23, 1
	addi     r24, r24, 4
	cmpwi    r23, 5
	blt      lbl_80391C9C
	mr       r3, r28
	li       r30, 0
	lwz      r12, 0(r28)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x224(r3)
	lbz      r0, 0xd4(r3)
	cmplwi   r0, 0
	beq      lbl_80391EA4
	mr       r3, r28
	li       r30, 1
	lwz      r12, 0(r28)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x224(r3)
	lbz      r0, 0xd5(r3)
	cmplwi   r0, 0
	beq      lbl_80391E80
	lbz      r3, 0x128(r28)
	addi     r0, r3, 0x14
	stb      r0, 0x128(r28)
	lbz      r0, 0x128(r28)
	cmplwi   r0, 0xc8
	ble      lbl_80391F6C
	li       r0, 0xc8
	stb      r0, 0x128(r28)
	b        lbl_80391F6C

	lbl_80391E80:
	lbz      r3, 0x128(r28)
	cmplwi   r3, 0x14
	ble      lbl_80391E98
	addi     r0, r3, -20
	stb      r0, 0x128(r28)
	b        lbl_80391F6C

	lbl_80391E98:
	li       r0, 0
	stb      r0, 0x128(r28)
	b        lbl_80391F6C

	lbl_80391EA4:
	lwz      r3, 0x88(r28)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	beq      lbl_80391F08
	cmpwi    r0, 3
	li       r30, 1
	bne      lbl_80391EE4
	lbz      r3, 0x128(r28)
	cmplwi   r3, 0x19
	ble      lbl_80391ED8
	addi     r0, r3, -25
	stb      r0, 0x128(r28)
	b        lbl_80391F6C

	lbl_80391ED8:
	li       r0, 0
	stb      r0, 0x128(r28)
	b        lbl_80391F6C

	lbl_80391EE4:
	lbz      r3, 0x128(r28)
	addi     r0, r3, 0x14
	stb      r0, 0x128(r28)
	lbz      r0, 0x128(r28)
	cmplwi   r0, 0xc8
	ble      lbl_80391F6C
	li       r0, 0xc8
	stb      r0, 0x128(r28)
	b        lbl_80391F6C

	lbl_80391F08:
	lwz      r3, 0x84(r28)
	lwz      r3, 0x80(r3)
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_80391F6C
	cmpwi    r3, 3
	li       r30, 1
	bne      lbl_80391F4C
	lbz      r3, 0x128(r28)
	cmplwi   r3, 0x1e
	ble      lbl_80391F40
	addi     r0, r3, -30
	stb      r0, 0x128(r28)
	b        lbl_80391F6C

	lbl_80391F40:
	li       r0, 0
	stb      r0, 0x128(r28)
	b        lbl_80391F6C

	lbl_80391F4C:
	lbz      r3, 0x128(r28)
	addi     r0, r3, 0x14
	stb      r0, 0x128(r28)
	lbz      r0, 0x128(r28)
	cmplwi   r0, 0xc8
	ble      lbl_80391F6C
	li       r0, 0xc8
	stb      r0, 0x128(r28)

	lbl_80391F6C:
	addi     r3, r29, 0x190
	lwz      r12, 0x190(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r30, 0x18
	beq      lbl_80392050
	li       r0, -1
	li       r9, 0
	stw      r0, 0x34(r1)
	li       r8, 0x50
	lbz      r0, 0x128(r28)
	mr       r3, r31
	stb      r9, 0x37(r1)
	addi     r4, r1, 0x20
	addi     r5, r1, 0x24
	addi     r6, r1, 0x28
	stb      r9, 0x34(r1)
	addi     r7, r1, 0x2c
	stb      r9, 0x35(r1)
	stb      r8, 0x36(r1)
	stb      r0, 0x37(r1)
	lwz      r0, 0x34(r1)
	stw      r0, 0xc(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x24(r1)
	stw      r0, 0x20(r1)
	bl
	setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	li       r3, 0
	bl       GXSetAlphaUpdate
	bl       getRenderModeObj__6SystemFv
	lhz      r26, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_8051EF88@sda21(r2)
	mr       r3, r31
	stw      r4, 0x5c(r1)
	addi     r4, r1, 0x48
	lfd      f2, lbl_8051F000@sda21(r2)
	stw      r0, 0x58(r1)
	lfd      f0, 0x58(r1)
	stw      r26, 0x64(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x60(r1)
	lfd      f0, 0x60(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x48(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x4c(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	li       r3, 1
	bl       GXSetAlphaUpdate

	lbl_80392050:
	lwz      r3, 0x84(r28)
	mr       r4, r29
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x88(r28)
	mr       r4, r29
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lbz      r3, 0x44(r28)
	li       r0, -1
	stw      r0, 0x30(r1)
	li       r0, 0
	subfic   r8, r3, 0xff
	mr       r3, r31
	stb      r0, 0x30(r1)
	addi     r4, r1, 0x10
	addi     r5, r1, 0x14
	addi     r6, r1, 0x18
	stb      r0, 0x31(r1)
	addi     r7, r1, 0x1c
	stb      r0, 0x32(r1)
	stb      r8, 0x33(r1)
	lwz      r0, 0x30(r1)
	stw      r0, 8(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	bl
	setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	li       r3, 0
	bl       GXSetAlphaUpdate
	bl       getRenderModeObj__6SystemFv
	lhz      r26, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_8051EF88@sda21(r2)
	mr       r3, r31
	stw      r4, 0x64(r1)
	addi     r4, r1, 0x38
	lfd      f2, lbl_8051F000@sda21(r2)
	stw      r0, 0x60(r1)
	lfd      f0, 0x60(r1)
	stw      r26, 0x5c(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x58(r1)
	lfd      f0, 0x58(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x38(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x3c(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	li       r3, 1
	bl       GXSetAlphaUpdate
	lmw      r23, 0x6c(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/**
 * @note Address: 0x80392160
 * @note Size: 0x78
 */
void TChallengeSelect::doUpdateFadeoutFinish()
{
	P2ASSERTLINE(2218, mDisp);
	if (_134) {
		mDisp->mStatus = Screen::Game2DMgr::CHECK2D_ChallengeSelect_ExitFinished;
	} else {
		mDisp->mStatus = Screen::Game2DMgr::CHECK2D_ChallengeSelect_CancelToTitle;
	}
}

/**
 * @note Address: 0x803921D8
 * @note Size: 0x3F8
 */
void TChallengeSelect::setInfo(int stageID)
{
	P2ASSERTLINE(2230, stageID < CHALLENGE_COURSE_COUNT);

	if (mIsSection) {
		// debug way of setting stage data
		DebugStageData* data = mStageData[stageID];
		mPikiCounts[0]       = data->mPikis[0];
		mPikiCounts[1]       = data->mPikis[2];
		mPikiCounts[2]       = data->mPikis[1];
		mPikiCounts[3]       = data->mPikis[3];
		mPikiCounts[4]       = data->mPikis[4];
		mDopeCount[0]        = data->mBitterSpray;
		mDopeCount[1]        = data->mSpicySpray;
		mFloorCount          = data->mFloors;
		if (data->mScore1 == -1) {
			mHighScoreCounter[0]->setBlind(true);
		} else {
			mHighScoreValue[0] = data->mScore1;
			mHighScoreCounter[0]->setBlind(false);
		}

		if (data->mScore2 == -1) {
			mHighScoreCounter[1]->setBlind(true);
		} else {
			mHighScoreValue[1] = data->mScore2;
			mHighScoreCounter[1]->setBlind(false);
		}
	} else {
		// regular way of setting stage data
		Game::Challenge2D_TitleInfo::Info* info = (*mDisp->mTitleInfo)(stageID);
		mPikiCounts[0]                          = info->mPikiContainer->getColorSum(Game::Red);
		mPikiCounts[1]                          = info->mPikiContainer->getColorSum(Game::Yellow);
		mPikiCounts[2]                          = info->mPikiContainer->getColorSum(Game::Blue);
		mPikiCounts[3]                          = info->mPikiContainer->getColorSum(Game::White);
		mPikiCounts[4]                          = info->mPikiContainer->getColorSum(Game::Purple);
		mDopeCount[0]                           = info->mSprayCounts[0];
		mDopeCount[1]                           = info->mSprayCounts[1];
		mFloorCount                             = info->mFloorCount;

		if (info->mHighscore1P->getScore(0) == -1) {
			mHighScoreCounter[0]->setBlind(true);
		} else {
			mHighScoreValue[0] = info->mHighscore1P->getScore(0);
			mHighScoreCounter[0]->setBlind(false);
		}

		if (info->mHighscore2P->getScore(0) == -1) {
			mHighScoreCounter[1]->setBlind(true);
		} else {
			mHighScoreValue[1] = info->mHighscore2P->getScore(0);
			mHighScoreCounter[1]->setBlind(false);
		}
	}

	// make sure all new values are legal
	JUT_ASSERTLINE(2295, mHighScoreValue[0] <= 1000000, "hiscore1p = %d\n", mHighScoreValue[0]);
	JUT_ASSERTLINE(2296, mHighScoreValue[1] <= 1000000, "hiscore2p = %d\n", mHighScoreValue[1]);
	for (int i = 0; i < 5; i++) {
		JUT_ASSERTLINE(2298, mPikiCounts[i] <= 100, "piki(%d) = %d\n", i, mPikiCounts[i]);
	}
	for (int i = 0; i < 2; i++) {
		JUT_ASSERTLINE(2302, mDopeCount[i] <= 100, "doping(%d) = %d\n", i, mDopeCount[i]);
	}
	JUT_ASSERTLINE(2305, mFloorCount <= 100, "floor = %d\n", mFloorCount);

	// make all the counters shake
	for (int i = 0; i < 2; i++) {
		mHighScoreCounter[i]->forceScaleUp(true);
		mDopeCounter[i]->forceScaleUp(true);
		mDoping[i]->setLevel(mDopeCount[i]);
	}
	for (int i = 0; i < 5; i++) {
		mPikiCounters[i]->forceScaleUp(true);
	}
	mFloorCounter->forceScaleUp(true);
}

/**
 * @note Address: 0x803925D0
 * @note Size: 0xD0
 */
void TChallengeSelect::setStageName(int id)
{
	J2DPane* pane1 = mPaneLevelName[0];
	if (mIsSection) {
		Game::ChallengeGame::StageData* data = mStageList->getStageData(id);
		pane1->setMsgID(mOffsMesg->getMsgID(data->mStageIndex - 1));
		pane1 = mPaneLevelName[1];
		pane1->setMsgID(mOffsMesg->getMsgID(data->mStageIndex - 1));
	} else {
		Game::Challenge2D_TitleInfo& title      = *mDisp->mTitleInfo;
		Game::Challenge2D_TitleInfo::Info* info = title(id);
		pane1->setMsgID(mOffsMesg->getMsgID(info->mStageIndex - 1));
		pane1 = mPaneLevelName[1];
		pane1->setMsgID(mOffsMesg->getMsgID(info->mStageIndex - 1));
	}
}

/**
 * @note Address: 0x803926A0
 * @note Size: 0x12C
 */
int TChallengeSelect::getState(int id)
{
	FORCE_DONT_INLINE; // bad but needed for isChangeState, unless theres a proper way

	P2ASSERTLINE(2359, id < CHALLENGE_COURSE_COUNT);
	if (mIsSection) {
		if (mStageData[id]->mIsPerfect) {
			return TChallengePanel::ChallengePanel_Perfect;
		}
		if (mStageData[id]->mIsComplete) {
			return TChallengePanel::ChallengePanel_Cleared;
		}
		if (mStageData[id]->mIsUnlocked) {
			return TChallengePanel::ChallengePanel_Unbeaten;
		}
	} else {
		u8 flag = (*mDisp->mTitleInfo)(id)->mDisplayFlag.typeView;
		if (flag & 0x20) {
			return (int)(-(flag >> 4 & 1)) + 2; // highly questionable
		}
		if (flag & 0x10) {
			return TChallengePanel::ChallengePanel_Unbeaten;
		}
		if (flag & 8) {
			return TChallengePanel::ChallengePanel_NotOpen;
		}
		if (flag & 4) {
			return TChallengePanel::ChallengePanel_Perfect;
		}
		if (flag & 2) {
			return TChallengePanel::ChallengePanel_Cleared;
		}
		if (flag & 1) {
			return TChallengePanel::ChallengePanel_Unbeaten;
		}
	}
	return TChallengePanel::ChallengePanel_NotOpen;
}

/**
 * @note Address: 0x803927CC
 * @note Size: 0xA4
 */
int TChallengeSelect::getAfterState(int id)
{
	P2ASSERTLINE(2409, id < CHALLENGE_COURSE_COUNT);
	if (mIsSection) {
		return TChallengePanel::ChallengePanel_Perfect;
	} else {
		Game::Challenge2D_TitleInfo::Info* info = (*mDisp->mTitleInfo)(id);
		if (info->mDisplayFlag.isSet(4)) {
			return TChallengePanel::ChallengePanel_Perfect;
		} else if (info->mDisplayFlag.isSet(2)) {
			return TChallengePanel::ChallengePanel_Cleared;
		} else if (info->mDisplayFlag.isSet(1)) {
			return TChallengePanel::ChallengePanel_Unbeaten;
		}
		return TChallengePanel::ChallengePanel_NotOpen;
	}
}

/**
 * @note Address: 0x80392870
 * @note Size: 0xE4
 */
bool TChallengeSelect::isChangeState(int id)
{
	P2ASSERTLINE(2435, id < CHALLENGE_COURSE_COUNT);
	if (mIsSection) {
		if (mStageData[id]->mIsChange)
			return true;
	} else {
		Game::Challenge2D_TitleInfo::Info* info = (*mDisp->mTitleInfo)(id);
		getState(id);
		if (info->mDisplayFlag.isSet(8)) {
			return true;
		}
		if (info->mDisplayFlag.isSet(16)) {
			return true;
		}
		if (info->mDisplayFlag.isSet(32)) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x80392954
 * @note Size: 0x1CC
 */
int TChallengeSelect::getIndexMax()
{
	if (mIsSection) {
		for (int i = 0; i < CHALLENGE_COURSE_COUNT; i++) {
			if (mPanelList[i]->mState == TChallengePanel::ChallengePanel_NotOpen) {
				return i;
			}
		}
	} else {
		for (int i = 0; i < CHALLENGE_COURSE_COUNT; i++) {
			Game::Challenge2D_TitleInfo::Info* info = (*mDisp->mTitleInfo)(i);
			if (mPanelList[i]->mState == TChallengePanel::ChallengePanel_NotOpen && !(info->mDisplayFlag.isSet(8))) {
				return i;
			}
		}
	}
	return CHALLENGE_COURSE_COUNT;
}

/**
 * @note Address: 0x80392B20
 * @note Size: 0x24
 */
void TChallengeSelect::openWindow() { mRulesScreen->openWindow(); }

/**
 * @note Address: 0x80392B44
 * @note Size: 0x24
 */
void TChallengeSelect::closeWindow() { mRulesScreen->closeWindow(); }

/**
 * @note Address: 0x80392B68
 * @note Size: 0x140
 */
void TChallengeSelect::reset()
{
	mIsInDemo             = false;
	mSelectionEffectAngle = 0.0f;
	for (int i = 0; i < 5; i++) {
		mChallengePiki[i]->reset();
		mChallengePiki[i]->mMaxPiki = mPikiCounts[i];
	}
	mDivePikiNum         = 0;
	mDoCreatePikiDiveEfx = false;
}

/**
 * @note Address: N/A
 * @note Size: 0x374
 */
void TChallengeSelect::jumpStart()
{
	for (int i = 0; i < 5; i++) {
		J2DPane* pane = mPanelList[mCurrentSelection]->mPane2;
		Vector2f pos(pane->mGlobalMtx[0][3], pane->mGlobalMtx[1][3]);
		mChallengePiki[i]->setGoalPos(pos);
		mChallengePiki[i]->jumpStart(-0.5f * (f32)i);
	}
}

/**
 * @note Address: 0x80392CA8
 * @note Size: 0x4C0
 */
void TChallengeSelect::demoStart()
{
	reset();
	mIsInDemo = true;
	jumpStart();
	/*
	stwu     r1, -0x1a0(r1)
	mflr     r0
	stw      r0, 0x1a4(r1)
	stfd     f31, 0x190(r1)
	psq_st   f31, 408(r1), 0, qr0
	stfd     f30, 0x180(r1)
	psq_st   f30, 392(r1), 0, qr0
	stfd     f29, 0x170(r1)
	psq_st   f29, 376(r1), 0, qr0
	stfd     f28, 0x160(r1)
	psq_st   f28, 360(r1), 0, qr0
	stfd     f27, 0x150(r1)
	psq_st   f27, 344(r1), 0, qr0
	stfd     f26, 0x140(r1)
	psq_st   f26, 328(r1), 0, qr0
	stfd     f25, 0x130(r1)
	psq_st   f25, 312(r1), 0, qr0
	stfd     f24, 0x120(r1)
	psq_st   f24, 296(r1), 0, qr0
	stfd     f23, 0x110(r1)
	psq_st   f23, 280(r1), 0, qr0
	stfd     f22, 0x100(r1)
	psq_st   f22, 264(r1), 0, qr0
	stfd     f21, 0xf0(r1)
	psq_st   f21, 248(r1), 0, qr0
	stfd     f20, 0xe0(r1)
	psq_st   f20, 232(r1), 0, qr0
	stfd     f19, 0xd0(r1)
	psq_st   f19, 216(r1), 0, qr0
	stfd     f18, 0xc0(r1)
	psq_st   f18, 200(r1), 0, qr0
	stmw     r25, 0xa4(r1)
	li       r6, 0
	lfs      f0, lbl_8051EF88@sda21(r2)
	stb      r6, 0x135(r3)
	mr       r9, r3
	stfs     f0, 0x138(r3)

lbl_80392D3C:
	lwz      r8, 0x9c(r9)
	li       r7, 0x30
	mulli    r4, r7, 0x24
	li       r5, 0
	stfs     f0, 0xc(r8)
	subfic   r0, r7, 0x32
	stfs     f0, 0x10(r8)
	add      r4, r8, r4
	stfs     f0, 0x730(r8)
	stw      r5, 0x24(r8)
	stw      r5, 0x48(r8)
	stw      r5, 0x6c(r8)
	stw      r5, 0x90(r8)
	stw      r5, 0xb4(r8)
	stw      r5, 0xd8(r8)
	stw      r5, 0xfc(r8)
	stw      r5, 0x120(r8)
	stw      r5, 0x144(r8)
	stw      r5, 0x168(r8)
	stw      r5, 0x18c(r8)
	stw      r5, 0x1b0(r8)
	stw      r5, 0x1d4(r8)
	stw      r5, 0x1f8(r8)
	stw      r5, 0x21c(r8)
	stw      r5, 0x240(r8)
	stw      r5, 0x264(r8)
	stw      r5, 0x288(r8)
	stw      r5, 0x2ac(r8)
	stw      r5, 0x2d0(r8)
	stw      r5, 0x2f4(r8)
	stw      r5, 0x318(r8)
	stw      r5, 0x33c(r8)
	stw      r5, 0x360(r8)
	stw      r5, 0x384(r8)
	stw      r5, 0x3a8(r8)
	stw      r5, 0x3cc(r8)
	stw      r5, 0x3f0(r8)
	stw      r5, 0x414(r8)
	stw      r5, 0x438(r8)
	stw      r5, 0x45c(r8)
	stw      r5, 0x480(r8)
	stw      r5, 0x4a4(r8)
	stw      r5, 0x4c8(r8)
	stw      r5, 0x4ec(r8)
	stw      r5, 0x510(r8)
	stw      r5, 0x534(r8)
	stw      r5, 0x558(r8)
	stw      r5, 0x57c(r8)
	stw      r5, 0x5a0(r8)
	stw      r5, 0x5c4(r8)
	stw      r5, 0x5e8(r8)
	stw      r5, 0x60c(r8)
	stw      r5, 0x630(r8)
	stw      r5, 0x654(r8)
	stw      r5, 0x678(r8)
	stw      r5, 0x69c(r8)
	stw      r5, 0x6c0(r8)
	mtctr    r0
	cmpwi    r7, 0x32
	bge      lbl_80392E38

lbl_80392E2C:
	stwu     r5, 0x24(r4)
	addi     r7, r7, 1
	bdnz     lbl_80392E2C

lbl_80392E38:
	addi     r6, r6, 1
	lwz      r0, 0x108(r9)
	lwz      r4, 0x9c(r9)
	cmpwi    r6, 5
	addi     r9, r9, 4
	stw      r0, 0x72c(r4)
	blt      lbl_80392D3C
	li       r30, 0
	lis      r4, 0x55555556@ha
	stw      r30, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
	li       r0, 1
	mr       r26, r3
	lfs      f21, lbl_8051EFA8@sda21(r2)
	stb      r30, 0x144(r3)
	addi     r25, r4, 0x55555556@l
	lfd      f28, lbl_8051EFB0@sda21(r2)
	lis      r31, 0x4330
	stb      r0, 0x135(r3)
	lfs      f29, lbl_8051EF90@sda21(r2)
	lwz      r0, 0xfc(r3)
	lwz      r3, 0x94(r3)
	slwi     r0, r0, 2
	lfs      f30, lbl_8051EF94@sda21(r2)
	lwzx     r3, r3, r0
	lfs      f31, lbl_8051EF98@sda21(r2)
	lwz      r3, 8(r3)
	lfs      f20, lbl_8051EF9C@sda21(r2)
	lfs      f0, 0x8c(r3)
	lfs      f24, 0x9c(r3)
	fsubs    f25, f0, f21
	lfs      f22, lbl_8051EFA4@sda21(r2)
	lfs      f26, lbl_8051F074@sda21(r2)
	lfs      f27, lbl_8051EF8C@sda21(r2)

lbl_80392EBC:
	xoris    r0, r30, 0x8000
	lwz      r4, 0x9c(r26)
	stw      r0, 0x84(r1)
	addi     r3, r1, 0x2c
	li       r5, 1
	stw      r31, 0x80(r1)
	stfs     f25, 0xc(r4)
	lfd      f0, 0x80(r1)
	stfs     f24, 0x10(r4)
	fsubs    f0, f0, f28
	lwz      r28, 0x9c(r26)
	fmuls    f23, f26, f0
	lwz      r4, 4(r28)
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f19, 0x30(r1)
	addi     r3, r1, 0x20
	lwz      r4, 0(r28)
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f0, 0x24(r1)
	addi     r3, r1, 0x14
	lwz      r4, 4(r28)
	li       r5, 1
	fsubs    f18, f0, f19
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f19, 0x14(r1)
	addi     r3, r1, 8
	lwz      r4, 0(r28)
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f0, 8(r1)
	addi     r3, r1, 0x5c
	li       r5, 0
	fsubs    f0, f0, f19
	stfs     f0, 0x14(r28)
	stfs     f18, 0x18(r28)
	lwz      r4, 8(r28)
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f19, 0x60(r1)
	addi     r3, r1, 0x50
	lwz      r4, 0(r28)
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f0, 0x54(r1)
	addi     r3, r1, 0x44
	lwz      r4, 8(r28)
	li       r5, 0
	fsubs    f18, f0, f19
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f19, 0x44(r1)
	addi     r3, r1, 0x38
	lwz      r4, 0(r28)
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f0, 0x38(r1)
	mr       r27, r28
	li       r29, 0
	fsubs    f0, f0, f19
	stfs     f0, 0x1c(r28)
	stfs     f18, 0x20(r28)
	stfs     f27, 0x730(r28)

lbl_80392FB0:
	bl       rand
	xoris    r3, r3, 0x8000
	xoris    r0, r29, 0x8000
	stw      r3, 0x84(r1)
	addi     r3, r1, 0x74
	li       r5, 0
	stw      r31, 0x80(r1)
	lfd      f0, 0x80(r1)
	stw      r0, 0x8c(r1)
	fsubs    f0, f0, f28
	stw      r31, 0x88(r1)
	fdivs    f1, f0, f29
	lfd      f0, 0x88(r1)
	fsubs    f0, f0, f28
	fnmsubs  f0, f30, f0, f23
	fmadds   f0, f30, f1, f0
	stfs     f0, 0x28(r27)
	lwz      r4, 0(r28)
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f18, 0x78(r1)
	addi     r3, r1, 0x68
	lwz      r4, 0(r28)
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f0, 0x68(r1)
	mulhw    r3, r25, r29
	stfs     f0, 0x30(r27)
	stfs     f18, 0x34(r27)
	srwi     r0, r3, 0x1f
	lfs      f0, 0x30(r27)
	add      r0, r3, r0
	mulli    r0, r0, 3
	stfs     f0, 0x38(r27)
	lfs      f0, 0x34(r27)
	subf     r0, r0, r29
	stfs     f0, 0x3c(r27)
	stw      r0, 0x2c(r27)
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r31, 0x90(r1)
	stw      r0, 0x94(r1)
	lfd      f0, 0x90(r1)
	fsubs    f0, f0, f28
	fdivs    f0, f0, f29
	fmuls    f0, f31, f0
	stfs     f0, 0x40(r27)
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r31, 0x98(r1)
	stw      r0, 0x9c(r1)
	lfd      f0, 0x98(r1)
	fsubs    f0, f0, f28
	fdivs    f0, f0, f29
	fcmpo    cr0, f0, f20
	ble      lbl_8039309C
	lfs      f1, 0x40(r27)
	lfs      f0, lbl_8051EFA0@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x40(r27)

lbl_8039309C:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r29, r29, 1
	stw      r0, 0x9c(r1)
	cmpwi    r29, 0x32
	li       r0, 2
	stw      r31, 0x98(r1)
	lfd      f0, 0x98(r1)
	fsubs    f0, f0, f28
	fdivs    f0, f0, f29
	fmadds   f0, f21, f0, f22
	stfs     f0, 0x44(r27)
	stwu     r0, 0x24(r27)
	blt      lbl_80392FB0
	addi     r30, r30, 1
	addi     r26, r26, 4
	cmpwi    r30, 5
	blt      lbl_80392EBC
	psq_l    f31, 408(r1), 0, qr0
	lfd      f31, 0x190(r1)
	psq_l    f30, 392(r1), 0, qr0
	lfd      f30, 0x180(r1)
	psq_l    f29, 376(r1), 0, qr0
	lfd      f29, 0x170(r1)
	psq_l    f28, 360(r1), 0, qr0
	lfd      f28, 0x160(r1)
	psq_l    f27, 344(r1), 0, qr0
	lfd      f27, 0x150(r1)
	psq_l    f26, 328(r1), 0, qr0
	lfd      f26, 0x140(r1)
	psq_l    f25, 312(r1), 0, qr0
	lfd      f25, 0x130(r1)
	psq_l    f24, 296(r1), 0, qr0
	lfd      f24, 0x120(r1)
	psq_l    f23, 280(r1), 0, qr0
	lfd      f23, 0x110(r1)
	psq_l    f22, 264(r1), 0, qr0
	lfd      f22, 0x100(r1)
	psq_l    f21, 248(r1), 0, qr0
	lfd      f21, 0xf0(r1)
	psq_l    f20, 232(r1), 0, qr0
	lfd      f20, 0xe0(r1)
	psq_l    f19, 216(r1), 0, qr0
	lfd      f19, 0xd0(r1)
	psq_l    f18, 200(r1), 0, qr0
	lfd      f18, 0xc0(r1)
	lmw      r25, 0xa4(r1)
	lwz      r0, 0x1a4(r1)
	mtlr     r0
	addi     r1, r1, 0x1a0
	blr
	*/
}

/**
 * @note Address: 0x80393168
 * @note Size: 0x9C
 */
void TChallengeSelectScene::doCreateObj(JKRArchive* arc)
{
	TChallengeSelect* obj = new TChallengeSelect;
	registObj(obj, arc);
	mObject = obj;

	mConfirmEndWindow = new TConfirmEndWindow("endWindow");
	registObj(mConfirmEndWindow, arc);
}

/**
 * @note Address: 0x80393204
 * @note Size: 0x34
 */
bool TChallengeSelectScene::doStart(Screen::StartSceneArg* arg)
{
	mObject->start(arg);
	return true;
}

TChallengeSelect::StaticValues TChallengeSelect::mMetOffset;

} // namespace Morimura
