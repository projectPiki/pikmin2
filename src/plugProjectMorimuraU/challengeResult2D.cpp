#include "Morimura/challengeResult2d.h"
#include "Morimura/mrUtil.h"
#include "trig.h"
#include "og/newScreen/ogUtil.h"
#include "JSystem/JMath.h"
#include "LoadResource.h"
#include "Controller.h"
#include "Game/GameConfig.h"
#include "PSSystem/PSSystemIF.h"
#include "Dolphin/rand.h"
#include "Game/gameChallenge2D.h"
#include "efx2d/T2DChangesmoke.h"

static const char name[] = "challengeResult2D";

namespace Morimura {

bool TChallengeResult::mForceDemoStart       = false;
u8 TChallengeResult::mTestStageId            = 0;
JKRHeap* TChallengeResult::mDebugHeapParent  = nullptr;
JKRExpHeap* TChallengeResult::mDebugHeap     = nullptr;
ResTIMG* TChallengeResult::mLeafTexture      = nullptr;
ResTIMG* TChallengeResult::mFlowerTexture    = nullptr;
ResTIMG* TChallengeResult::mRedFlowerTexture = nullptr;

f32 TChallengeResult::mMoveSpeed       = 12.0f;
f32 TChallengeResult::mAngRate         = 0.3f;
f32 TChallengeResult::mAngVelMax       = 20.0f;
f32 TChallengeResult::mAccel           = 0.1f;
bool TChallengeResult::mTestDemo       = true;
bool TChallengeResult::mComplete       = true;
s16 TChallengeResult::mTestRankInOrder = 0xFFFF;
f32 TChallengeResult::mFlashInterval   = 40.0f;
f32 TChallengeResult::mDemoSpeedUpRate = 2.0f;
f32 TChallengeResult::mDemoSpeedUpMax  = 3.0f;
JUtility::TColor TChallengeResult::mFlashColor(255, 255, 0, 255);

const int cRandArray[] = { 0, 1, 2, 0, 2, 1, 1, 0, 2, 1, 2, 0, 2, 1, 0, 2, 0, 1, 0 };

/**
 * @note Address: 0x80393348
 * @note Size: 0x20
 */
void TChallengeResultScreen::create(char const* path, u32 flag) { TScreenBase::create(path, flag); }

/**
 * @note Address: 0x80393368
 * @note Size: 0x118
 */
void TChallengeResultScreen::createAnimPane(char* path)
{
	u64 tagList[19] = { 'Nhl_00', 'Nhl_01', 'Nhl_02', 'Nhl_03', 'Nhl_04', 'Nhl_05',   'Nhl_06',   'Nhl_07',   'Nhl_08',  'Nhl_09',
		                'Nhl_10', 'Nhl_11', 'Nhl_12', 'Nhl_13', 'Nhl_14', 'Pmsen003', 'Pmsen004', 'Pmsen007', 'Pmsen009' };
	mAnimPaneCount  = 19;
	mAnimPanes      = new og::Screen::AnimPane*[mAnimPaneCount];

	for (int i = 0; i < mAnimPaneCount; i++) {
		mAnimPanes[i] = new og::Screen::AnimPane;
		mAnimPanes[i]->init(mArchive, mScreenObj, tagList[i], path);
	}
	mResultAnimPane = new og::Screen::AnimPane;
	mResultAnimPane->init(mArchive, mScreenObj, 'NULL_001', path);
}

/**
 * @note Address: 0x80393480
 * @note Size: 0x54
 */
void TChallengeResultScreen::updateBckPane()
{
	TChallengeScreen::updateBckPane();
	mResultAnimPane->update();
	if (mResultAnimPane->mCurrentFrame >= 120.0f) {
		mResultAnimPane->mCurrentFrame = 0.0f;
	}
}

/**
 * @note Address: 0x803934D4
 * @note Size: 0xF8
 */
void TChallengeResultDemoScreen::create(char const* path, u32 flag)
{
	TScreenBase::create(path, flag);

	mAnimPane1 = new og::Screen::AnimPane;
	mAnimPane1->init(mArchive, mScreenObj, 'NULL_001', "challenge_modo_result_demo.bck");

	mAnimPane2 = new og::Screen::AnimPane;
	mAnimPane2->init(mArchive, mScreenObj, 'Nribons', "challenge_modo_result_demo.bck");

	mAnimPane3 = new og::Screen::AnimPane;
	mAnimPane3->init(mArchive, mScreenObj, 'Nribons2', "challenge_modo_result_demo.bck");
}

/**
 * @note Address: 0x803935CC
 * @note Size: 0xE4
 */
void TChallengeResultDemoScreen::update()
{
	if (mScreenObj && mIsActive) {
		mScreenObj->update();
		for (int i = 0; i < mAnimScreenCountMax; i++) {
			mAnimScreens[i]->update();
			if (i == 0 && mAnimScreens[0]->mCurrentFrame >= 20.0f) {
				mAnimScreens[0]->mCurrentFrame = 20.0f;
			}
		}
		mAnimPane1->update();
		mAnimPane2->update();
		mAnimPane3->update();
		mScreenObj->animation();
	}
}

/**
 * @note Address: 0x803936B0
 * @note Size: 0x2C
 */
void TChallengeResultDemoScreen::draw(Graphics& gfx, J2DPerspGraph* graf)
{
	if (mIsActive) {
		TScreenBase::draw(gfx, graf);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void TChallengeResultDemoScreen::startDemo() { setComplete(false); }

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
void TChallengeResultDemoScreen::setComplete(bool isComplete)
{
	mIsActive                   = false;
	TChallengeResult::mComplete = isComplete;
	const u64 tags[3]           = { 'Tribon00', 'Tribon01', 'Tribon02' };
	for (int i = 0; i < 3; i++) {
		J2DPane* pane = mScreenObj->search(tags[i]);
		P2ASSERTLINE(224, pane);
		if (isComplete) {
			pane->setMsgID('4872_00'); // "Perfect!"
		} else {
			pane->setMsgID('4871_00'); // "Complete!"
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void TChallengeResultDemoScreen::reset()
{
	for (int i = 0; i < mAnimScreenCountMax; i++) {
		mAnimScreens[i]->mCurrentFrame = 0.0f;
	}
	update();
	mIsActive = false;
}

/**
 * @note Address: 0x803936DC
 * @note Size: 0x7C
 */
void TMovePane::setPane(J2DPane* pane)
{
	P2ASSERTLINE(271, pane);
	mPane = pane;
	mPane->setBasePosition(J2DPOS_Center);
	mPanePosition = JGeometry::TVec2f(pane->mOffset);
	reset();
}

/**
 * @note Address: 0x80393758
 * @note Size: 0xFC
 */
void TMovePane::update()
{
	switch (mState) {
	case 1:
		move();
		break;
	case 2:
		turn();
		break;
	case 3:
		if (hosei()) {
			mState = 0;
		}
		break;
	case 4:
		stick();
		break;
	case 5:
		rolling();
		break;
	}

	mPane->setOffset(mPaneGoal.x, mPaneGoal.y);
	f32 ang = roundAng(TAU - mAngle); // needed to load floats in right order lol
	mPane->setAngle(ang * 360.0f / TAU);
	if (mCounter > 0) {
		mCounter++;
	}
}

/**
 * @note Address: 0x80393854
 * @note Size: 0x16C
 */
void TMovePane::move()
{
	turn();
	mAngleSin = sinf(mAngle) * TChallengeResult::mMoveSpeed * TChallengeResult::mDemoSpeedUpRate;
	mAngleCos = -cosf(mAngle) * TChallengeResult::mMoveSpeed * TChallengeResult::mDemoSpeedUpRate;

	JGeometry::TVec2f velocity;
	velocity.x = (mAngleSin - mVelocity.x) * TChallengeResult::mAccel * TChallengeResult::mDemoSpeedUpRate;
	velocity.y = (mAngleCos - mVelocity.y) * TChallengeResult::mAccel * TChallengeResult::mDemoSpeedUpRate;
	velocity += mVelocity;
	mVelocity = velocity;

	mPaneGoal += mVelocity;
	if (isReachToGoal()) {
		mState = 3;
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	bl       turn__Q28Morimura9TMovePaneFv
	lfs      f3, 0x38(r31)
	lfs      f0, lbl_8051F084@sda21(r2)
	lfs      f2, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	fcmpo    cr0, f3, f0
	lfs      f1, mMoveSpeed__Q28Morimura16TChallengeResult@sda21(r13)
	bge      lbl_803938B0
	lfs      f0, lbl_8051F094@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_803938D4

lbl_803938B0:
	lfs      f0, lbl_8051F098@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_803938D4:
	fmuls    f1, f1, f0
	lfs      f0, lbl_8051F084@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0x28(r31)
	lfs      f2, 0x38(r31)
	fcmpo    cr0, f2, f0
	bge      lbl_803938F4
	fneg     f2, f2

lbl_803938F4:
	lfs      f0, lbl_8051F098@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r4, r3, sincosTable___5JMath@l
	lfs      f1, mMoveSpeed__Q28Morimura16TChallengeResult@sda21(r13)
	fmuls    f0, f2, f0
	lfs      f2, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	mr       r3, r31
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r4, r0
	lfs      f0, 4(r4)
	fneg     f0, f0
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x2c(r31)
	lfs      f0, 0x28(r31)
	lfs      f5, 0x20(r31)
	lfs      f1, 0x2c(r31)
	lfs      f3, 0x24(r31)
	fsubs    f0, f0, f5
	lfs      f2, mAccel__Q28Morimura16TChallengeResult@sda21(r13)
	fsubs    f1, f1, f3
	lfs      f4, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	fmuls    f0, f0, f2
	fmuls    f1, f1, f2
	fmuls    f0, f0, f4
	fmuls    f2, f1, f4
	fadds    f1, f5, f0
	fadds    f0, f3, f2
	stfs     f1, 0x20(r31)
	stfs     f0, 0x24(r31)
	lfs      f1, 0x18(r31)
	lfs      f0, 0x20(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x18(r31)
	lfs      f1, 0x1c(r31)
	lfs      f0, 0x24(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x1c(r31)
	bl       isReachToGoal__Q28Morimura9TMovePaneFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803939AC
	li       r0, 3
	stw      r0, 0x3c(r31)

lbl_803939AC:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x803939C0
 * @note Size: 0x8C
 */
void TMovePane::turn()
{
	f32 calc  = getAngDist() * TChallengeResult::mAngRate * TChallengeResult::mDemoSpeedUpRate;
	f32 limit = PI * (DEG2RAD * (TChallengeResult::mAngVelMax * TChallengeResult::mDemoSpeedUpRate));
	if (FABS(calc) > limit) {
		calc = calc > 0.0f ? limit : -limit;
	}
	mAngle = roundAng(mAngle + calc);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getAngDist__Q28Morimura9TMovePaneFv
	lfs      f0, mAngRate__Q28Morimura16TChallengeResult@sda21(r13)
	lfs      f4, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	fmuls    f3, f0, f1
	lfs      f0, mAngVelMax__Q28Morimura16TChallengeResult@sda21(r13)
	lfs      f1, lbl_8051F0A0@sda21(r2)
	fmuls    f0, f0, f4
	lfs      f2, lbl_8051F09C@sda21(r2)
	fmuls    f3, f4, f3
	fmuls    f0, f1, f0
	fabs     f1, f3
	fmuls    f2, f2, f0
	frsp     f0, f1
	fcmpo    cr0, f0, f2
	ble      lbl_80393A28
	lfs      f0, lbl_8051F084@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80393A24
	fmr      f3, f2
	b        lbl_80393A28

lbl_80393A24:
	fneg     f3, f2

lbl_80393A28:
	lfs      f0, 0x38(r31)
	fadds    f1, f0, f3
	bl       roundAng__Ff
	stfs     f1, 0x38(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80393A4C
 * @note Size: 0x7C
 */
f32 TMovePane::getAngDist()
{
	f32 distX = mOffset.x - mPaneGoal.x;
	if (distX == 0.0f) {
		distX = 0.1f;
	}
	f32 distY = mOffset.y - mPaneGoal.y;
	if (distY == 0.0f) {
		distY = 0.1f;
	}
	f32 angle = JMath::atanTable_.atan2_(distX, -distY);
	return angDist(roundAng(angle), mAngle);
}

/**
 * @note Address: 0x80393AC8
 * @note Size: 0x204
 */
bool TMovePane::hosei()
{
	bool ret  = false;
	mAngleSin = 0.0f;
	mAngleCos = 0.0f;
	mVelocity = 0.0f;
	f32 x     = (mOffset.x - mPaneGoal.x) * 0.05f * TChallengeResult::mDemoSpeedUpRate;
	f32 y     = (mOffset.y - mPaneGoal.y) * 0.05f * TChallengeResult::mDemoSpeedUpRate;
	mPaneGoal.x += x;
	mPaneGoal.y += y;
	if (FABS(x) < 0.05f && FABS(y) < 0.05f) {
		ret       = true;
		mPaneGoal = mOffset;
	}

	mOffset.y -= 100.0f;
	turn();
	if (FABS(getAngDist()) > 0.01f)
		ret = false;
	mOffset.y += 100.0f;
	return ret;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051F084@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f2, lbl_8051F0A8@sda21(r2)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	stfs     f0, 0x28(r3)
	stfs     f0, 0x2c(r3)
	stfs     f0, 0x20(r3)
	stfs     f0, 0x24(r3)
	lfs      f0, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	lfs      f3, 8(r3)
	lfs      f1, 0x18(r3)
	fmuls    f4, f2, f0
	lfs      f0, 0x18(r3)
	fsubs    f5, f3, f1
	lfs      f3, 0xc(r3)
	lfs      f1, 0x1c(r3)
	fmuls    f5, f5, f4
	fsubs    f3, f3, f1
	fadds    f0, f0, f5
	fabs     f1, f5
	fmuls    f3, f3, f4
	stfs     f0, 0x18(r3)
	frsp     f0, f1
	lfs      f1, 0x1c(r3)
	fadds    f1, f1, f3
	fcmpo    cr0, f0, f2
	stfs     f1, 0x1c(r3)
	bge      lbl_80393B70
	fabs     f0, f3
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	bge      lbl_80393B70
	lfs      f0, 8(r30)
	li       r31, 1
	stfs     f0, 0x18(r30)
	lfs      f0, 0xc(r30)
	stfs     f0, 0x1c(r30)

lbl_80393B70:
	lfs      f2, 0xc(r30)
	lfs      f1, lbl_8051F0AC@sda21(r2)
	lfs      f0, lbl_8051F084@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0xc(r30)
	lfs      f2, 8(r30)
	lfs      f1, 0x18(r30)
	fsubs    f1, f2, f1
	fcmpu    cr0, f0, f1
	bne      lbl_80393B9C
	lfs      f1, lbl_8051F0A4@sda21(r2)

lbl_80393B9C:
	lfs      f3, 0xc(r30)
	lfs      f2, 0x1c(r30)
	lfs      f0, lbl_8051F084@sda21(r2)
	fsubs    f2, f3, f2
	fcmpu    cr0, f0, f2
	bne      lbl_80393BB8
	lfs      f2, lbl_8051F0A4@sda21(r2)

lbl_80393BB8:
	fneg     f2, f2
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lfs      f2, 0x38(r30)
	bl       angDist__Fff
	lfs      f0, mAngRate__Q28Morimura16TChallengeResult@sda21(r13)
	lfs      f4, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	fmuls    f3, f0, f1
	lfs      f0, mAngVelMax__Q28Morimura16TChallengeResult@sda21(r13)
	lfs      f1, lbl_8051F0A0@sda21(r2)
	fmuls    f0, f0, f4
	lfs      f2, lbl_8051F09C@sda21(r2)
	fmuls    f3, f4, f3
	fmuls    f0, f1, f0
	fabs     f4, f3
	fmuls    f1, f2, f0
	frsp     f0, f4
	fcmpo    cr0, f0, f1
	ble      lbl_80393C24
	lfs      f0, lbl_8051F084@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80393C20
	fmr      f3, f1
	b        lbl_80393C24

lbl_80393C20:
	fneg     f3, f1

lbl_80393C24:
	lfs      f0, 0x38(r30)
	fadds    f1, f0, f3
	bl       roundAng__Ff
	stfs     f1, 0x38(r30)
	lfs      f0, lbl_8051F084@sda21(r2)
	lfs      f2, 8(r30)
	lfs      f1, 0x18(r30)
	fsubs    f1, f2, f1
	fcmpu    cr0, f0, f1
	bne      lbl_80393C50
	lfs      f1, lbl_8051F0A4@sda21(r2)

lbl_80393C50:
	lfs      f3, 0xc(r30)
	lfs      f2, 0x1c(r30)
	lfs      f0, lbl_8051F084@sda21(r2)
	fsubs    f2, f3, f2
	fcmpu    cr0, f0, f2
	bne      lbl_80393C6C
	lfs      f2, lbl_8051F0A4@sda21(r2)

lbl_80393C6C:
	fneg     f2, f2
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lfs      f2, 0x38(r30)
	bl       angDist__Fff
	fabs     f1, f1
	lfs      f0, lbl_8051F0B0@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80393CA0
	li       r31, 0

lbl_80393CA0:
	lfs      f1, 0xc(r30)
	mr       r3, r31
	lfs      f0, lbl_8051F0AC@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0xc(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80393CCC
 * @note Size: 0x30
 */
void TMovePane::rolling()
{
	mAngle += 0.5f * TChallengeResult::mDemoSpeedUpRate;
	if (mAngle > TAU) {
		mAngle -= TAU;
	}
}

/**
 * @note Address: 0x80393CFC
 * @note Size: 0x12C
 */
void TMovePane::stick()
{
	turn();
	JUT_ASSERTLINE(445, mStickPane, "no stick pane\n");
	mPaneGoal.x = mStickPosition.x + mStickPane->mGlobalMtx[0][3];
	mPaneGoal.y = mStickPosition.y + mStickPane->mGlobalMtx[1][3];
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051F084@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f2, 8(r3)
	lfs      f1, 0x18(r3)
	fsubs    f1, f2, f1
	fcmpu    cr0, f0, f1
	bne      lbl_80393D2C
	lfs      f1, lbl_8051F0A4@sda21(r2)

lbl_80393D2C:
	lfs      f3, 0xc(r31)
	lfs      f2, 0x1c(r31)
	lfs      f0, lbl_8051F084@sda21(r2)
	fsubs    f2, f3, f2
	fcmpu    cr0, f0, f2
	bne      lbl_80393D48
	lfs      f2, lbl_8051F0A4@sda21(r2)

lbl_80393D48:
	fneg     f2, f2
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lfs      f2, 0x38(r31)
	bl       angDist__Fff
	lfs      f0, mAngRate__Q28Morimura16TChallengeResult@sda21(r13)
	lfs      f4, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	fmuls    f3, f0, f1
	lfs      f0, mAngVelMax__Q28Morimura16TChallengeResult@sda21(r13)
	lfs      f1, lbl_8051F0A0@sda21(r2)
	fmuls    f0, f0, f4
	lfs      f2, lbl_8051F09C@sda21(r2)
	fmuls    f3, f4, f3
	fmuls    f0, f1, f0
	fabs     f4, f3
	fmuls    f1, f2, f0
	frsp     f0, f4
	fcmpo    cr0, f0, f1
	ble      lbl_80393DB4
	lfs      f0, lbl_8051F084@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80393DB0
	fmr      f3, f1
	b        lbl_80393DB4

lbl_80393DB0:
	fneg     f3, f1

lbl_80393DB4:
	lfs      f0, 0x38(r31)
	fadds    f1, f0, f3
	bl       roundAng__Ff
	stfs     f1, 0x38(r31)
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_80393DEC
	lis      r3, lbl_80494850@ha
	lis      r5, lbl_80494874@ha
	addi     r3, r3, lbl_80494850@l
	li       r4, 0x1bd
	addi     r5, r5, lbl_80494874@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80393DEC:
	lwz      r3, 4(r31)
	lfs      f1, 0x30(r31)
	lfs      f0, 0x8c(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x18(r31)
	lwz      r3, 4(r31)
	lfs      f1, 0x34(r31)
	lfs      f0, 0x9c(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x1c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
void TMovePane::forceTurn()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void TMovePane::startStick(J2DPane* pane)
{
	mState = 4;
	P2ASSERTLINE(471, pane);
	mStickPane       = pane;
	mStickPosition.x = mPaneGoal.x - mStickPane->mGlobalMtx[0][3];
	mStickPosition.y = mPaneGoal.y - mStickPane->mGlobalMtx[1][3];
}

/**
 * @note Address: 0x80393E28
 * @note Size: 0x34
 */
bool TMovePane::isReachToGoal()
{
	f32 x = mPaneGoal.x - mOffset.x;
	f32 y = mPaneGoal.y - mOffset.y;
	return (x * x + y * y < 600.0f);
}

/**
 * @note Address: 0x80393E5C
 * @note Size: 0xD0
 */
void TMovePane::reset()
{
	mVelocity   = 0.0f;
	mAngleSin   = mVelocity.x;
	mAngleCos   = mVelocity.y;
	mPaneGoal.x = mPanePosition.x;
	mPaneGoal.y = mPanePosition.y;
	mOffset.x   = mPaneGoal.x;
	mOffset.y   = mPaneGoal.y;
	mState      = 0;
	mCounter    = 0;
	mAngle      = 0.0f;
	mPane->setOffset(mPaneGoal.x, mPaneGoal.y);
	mPane->setAngle(roundAng(TAU - mAngle) * 360.0f / TAU);
}

/**
 * @note Address: 0x80393F2C
 * @note Size: 0x100
 */
TCounterRV* setTCounterRV(P2DScreen::Mgr* screen, u64 tag1, u64 tag2, u64 tag3, u32* data, u16 flag1, u16 flag2, JKRArchive* arc)
{
	TCounterRV* counter = new TCounterRV(const_cast<char**>(og::Screen::SujiTex32), flag1, flag2, arc);
	P2ASSERTLINE(518, counter);
	counter->init(screen, tag1, tag2, tag3, data, true);
	counter->setPuyoAnim(false);
	screen->addCallBack(tag1, counter);
	return counter;
}

/**
 * @note Address: 0x8039402C
 * @note Size: 0x130
 */
TCounterRV::TCounterRV(char** a1, u16 a2, u16 a3, JKRArchive* arc)
    : CallBack_CounterRV(a1, a2, a3, arc)
    , mEfxCountKiras(nullptr)
    , mEnabled(false)
    , _B1(false)
{
	setColor(255);
	mEfxCountKiras = new efx2d::T2DCountKira*[mMaxDisplayDigitNum];
	for (int i = 0; i < mMaxDisplayDigitNum; i++) {
		mEfxCountKiras[i] = new efx2d::T2DCountKira;
	}
	setPuyoAnim(false);
}

/**
 * @note Address: 0x8039415C
 * @note Size: 0xDC
 */
void TCounterRV::update()
{
	og::Screen::CallBack_CounterRV::update();
	for (int i = 0; i < mMaxDisplayDigitNum; i++) {
		J2DPicture* pic = getKetaPicture(i);
		P2ASSERTLINE(557, pic);
		pic->setWhite(mColor);
	}
}

/**
 * @note Address: 0x80394238
 * @note Size: 0xD8
 */
void TCounterRV::setValue(bool flag1, bool flag2)
{
	if (mEnabled) {
		mEnabled = false;
		setPuyoAnim(true);
		u16 max = og::Screen::CalcKeta(mInitialDisplayValue);
		for (int i = 0; i < max; i++) {
			mCounterDigits[i]->mScaleMgr->up(0.4f, 50.0f, 0.8f, 0.05f * f32(max - i));
		}
	} else {
		og::Screen::CallBack_CounterRV::setValue(flag1, flag2);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x150
 */
void TCounterRV::createKiraEffect(f32 scale, int max)
{
	for (int i = 0; i < max; i++) {
		J2DPicture* pic = mCounterDigits[i]->mPicture;
		P2ASSERTLINE(597, pic);
		pic->setBasePosition(J2DPOS_Center);
		Vector2f pos;
		pos.x = pic->getGlbVtx(GLBVTX_BtmLeft).x + pic->getWidth() * 0.5f;
		pos.y = pic->getGlbVtx(GLBVTX_BtmLeft).y + pic->getHeight() * 0.5f;
		efx2d::Arg arg(pos);
		mEfxCountKiras[i]->mScale = scale;
		mEfxCountKiras[i]->create(&arg);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void TCounterRV::fadeKiraEffect()
{
	for (int j = 0; j < mMaxDisplayDigitNum; j++) {
		P2ASSERTLINE(619, mEfxCountKiras[j]);
		mEfxCountKiras[j]->fade();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void TCounterRV::startScaleAnim()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA8
 */
void TCounterRV::reset()
{
	mEnabled = false;
	_B1      = false;
	setPuyoAnim(false);
	for (int i = 0; i < mMaxDisplayDigitNum; i++) {
		P2ASSERTLINE(619, mEfxCountKiras[i]);
		mEfxCountKiras[i]->fade();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x138
 */
void TChallengeResultCounter::start()
{
	if (mState == 1) {
		return;
	}
	mCurrentValue = *mDisplayValue;
	_0C           = 0;
	_20           = 0;
	_1C           = 0;
	mState        = 1;
	for (int i = 0; i < _14; i++) {
		_24[i] = 0;
	}

	int digits = 1;
	for (int i = *mDisplayValue; i >= 10; i) {
		digits++;
		i /= 10;
	}
	mDigits = digits;

	int test = *mDisplayValue;
	for (; digits > 1; digits--) {
		int calc    = (int)pow(10.0f, f64(digits - 1));
		int test2   = test / calc;
		_24[--test] = test2;
		test -= test2 * calc;
	}
	_24[0] = test;
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void TChallengeResultCounter::stop()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void TChallengeResultCounter::getFillRate()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1B0
 */
void TChallengeResultCounter::update()
{
	if (mState == 1) {
		u32 calc = 0;
		for (int j = 0; j < mDigits; j++) {
			int test = pow(10.0f, j);
			if (j > _0C) {
				calc += test * _24[j];
			} else {
				calc = u32(calc + test * ((f32)randInt(9) + 1.0f));
			}
		}
		*mDisplayValue = calc;
		if (_20 > 0) {
			_20--;
			if (!_20) {
				if (mState == 1) {
					_0C++;
					if (_0C >= mDigits) {
						*mDisplayValue = mCurrentValue;
						mState         = 2;
					}
				}
				_20 = _1C;
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void TClearTexture::resetTexture()
{
	mPane1->changeTexture(TChallengeResult::mLeafTexture, 0);
	mPane1->setBasePosition(J2DPOS_Center);
	mPane2->changeTexture(TChallengeResult::mLeafTexture, 0);
	mPane2->setBasePosition(J2DPOS_Center);
	_00 = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void TClearTexture::changeTexture(bool isComplete)
{
	if (isComplete) {
		mPane1->changeTexture(TChallengeResult::mRedFlowerTexture, 0);
		mPane2->changeTexture(TChallengeResult::mRedFlowerTexture, 0);
	} else {
		mPane1->changeTexture(TChallengeResult::mFlowerTexture, 0);
		mPane2->changeTexture(TChallengeResult::mFlowerTexture, 0);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void TClearTexture::getPosition(Vector2f& pos)
{
	pos.x = mPane1->getGlbVtx(GLBVTX_BtmLeft).x + mPane1->getWidth();
	pos.y = mPane1->getGlbVtx(GLBVTX_BtmLeft).y + mPane1->getHeight();
}

/**
 * @note Address: N/A
 * @note Size: 0xAC
 */
void TClearTexture::getEffectPosition(Vector2f& pos)
{
	pos.x = mPane1->getWidth() / 2 + mPane1->getGlbVtx(GLBVTX_BtmLeft).x;
	pos.y = mPane1->getHeight() / 2 + mPane1->getGlbVtx(GLBVTX_BtmLeft).y;
}

/**
 * @note Address: 0x80394310
 * @note Size: 0x2F0
 */
TChallengeResult::TChallengeResult()
    : TTestBase("challengeResult")
    , mResultDemoScreen(nullptr)
    , mResultScreen(nullptr)
    , mSaveMgr(nullptr)
    , mControls(nullptr)
    , mDisp(nullptr)
    , mCounter1(nullptr)
    , mCounter2(nullptr)
    , mCounter3(nullptr)
    , mCounter4(nullptr)
    , mCounter5(nullptr)
    , mScissorPic(nullptr)
    , mPane1(nullptr)
    , mPane2(nullptr)
    , mPanePlayerNum(nullptr)
    , mPanePlayerNumShadow(nullptr)
    , mPaneAButton(nullptr)
    , mPane6(nullptr)
{
	mMesgOffs    = nullptr;
	mEfxCompLoop = nullptr;
	mScoreTotal  = 0;
	mPokoCount   = 0;
	mTimeBonus   = 0;

	for (int i = 0; i < 4; i++) {
		mFlags[i] = 0;
	}

	_1DC                  = 6;
	mTestDefaultPokoScore = 1;
	mIsSaveOpen           = false;
	mRankInSlot           = -1;
	_1E8                  = 0;
	_1E9                  = 0;

	mTimer             = 0.0f;
	mAButtonAlphaTimer = 0.0f;
	mStageList         = nullptr;
	mSpeed             = mDemoSpeedUpRate;

	for (int i = 0; i < 3; i++) {
		mCounters1[i]        = nullptr;
		mHighScoreCounter[i] = nullptr;
		mResultCounters[i]   = nullptr;
		mHighScoreValues[i]  = 0;
		mPosList1[i]         = Vector2f(0.0f);
		mPosList2[i]         = Vector2f(0.0f);
		mOnyonMovePane[i]    = nullptr;
		mOnyonPane[i]        = nullptr;
	}

	mResultCounters[0] = 0;
	mResultCounters[1] = 0;
	mResultCounters[2] = 0;
	mResultCounters[3] = 0;

	for (int i = 0; i < 5; i++) {
		mClearTexture[i] = nullptr;
	}

	mPokoCountOffsetX = 0.0f;
	mPokoCountOffsetY = 0.0f;
	mMoveTimer        = 0.0f;
	_1D4              = 0.0f;
	_1D8              = 0.0f;

	mVecUnit[0]._00.x = 225.0f;
	mVecUnit[0]._00.y = 250.0f;
	mVecUnit[0]._08.x = 40.0f;
	mVecUnit[0]._08.y = 250.0f;

	mVecUnit[1]._00.x = 405.0f;
	mVecUnit[1]._00.y = 250.0f;
	mVecUnit[1]._08.x = 240.0f;
	mVecUnit[1]._08.y = 250.0f;

	mVecUnit[2]._00.x = 585.0f;
	mVecUnit[2]._00.y = 250.0f;
	mVecUnit[2]._08.x = 430.0f;
	mVecUnit[2]._08.y = 250.0f;

	mVecUnit[3]._00.x = 440.0f;
	mVecUnit[3]._00.y = 170.0f;
	mVecUnit[3]._08.x = 200.0f;
	mVecUnit[3]._08.y = 170.0f;

	_168._00.x = 70.0f;
	_168._00.y = 30.0f;
	_168._08.x = -115.0f;
	_168._08.y = 30.0f;

	mEfxCompLoop = new efx2d::T2DCavecompLoop;
}

/**
 * @note Address: 0x80394604
 * @note Size: 0xF4
 */
TChallengeResult::~TChallengeResult()
{
	if (mDebugHeap) {
		mDisp->mHeap->freeAll();
		mDebugHeap->destroy();
	}

	mDebugHeap = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void TChallengeResult::setDebugHeapParent(JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803946F8
 * @note Size: 0x1854
 */
void TChallengeResult::doCreate(JKRArchive* arc)
{
	mArchive                        = arc;
	DispMemberChallengeResult* disp = static_cast<DispMemberChallengeResult*>(getDispMember());
	if (disp->isID(OWNER_MRMR, MEMBER_CHALLENGE_RESULT)) {
		mDisp = disp;
	} else {
		mIsSection = true;
	}

	if (mIsSection) {
		if (mDebugHeapParent) {
			mDebugHeap = JKRExpHeap::create(0x100000, mDebugHeapParent, true);
			P2ASSERTLINE(975, mDebugHeap);
			mDisp        = new (mDebugHeap, 0) DispMemberChallengeResult;
			mDisp->mHeap = mDebugHeap;
		} else {
			JUT_PANICLINE(982, "set DebugHeapParent. mail to morimun.\n");
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
	mControls = getGamePad();
	P2ASSERTLINE(1006, mControls);

	mLeafTexture = static_cast<ResTIMG*>(mArchive->getResource("timg/leaf_icon.bti"));
	P2ASSERTLINE(1010, mLeafTexture);
	mFlowerTexture = static_cast<ResTIMG*>(mArchive->getResource("timg/flower_icon.bti"));
	P2ASSERTLINE(1013, mFlowerTexture);
	mRedFlowerTexture = static_cast<ResTIMG*>(mArchive->getResource("timg/flower_p_icon.bti"));
	P2ASSERTLINE(1016, mRedFlowerTexture);
	mSaveMgr = ebi::Save::TMgr::createInstance();
	mSaveMgr->doLoadMenuResource();

	JKRHeap* backupheap = JKRGetCurrentHeap();
	mDisp->mHeap->becomeCurrentHeap();

	mResultScreen = new TChallengeResultScreen(arc, 7);
	mResultScreen->create("challenge_modo_result.blo", 0x1040000);
	mResultScreen->createAnimPane("challenge_modo_result.bck");
	mResultScreen->addAnim("challenge_modo_result.bck");
	mResultScreen->addAnim("challenge_modo_result.bpk");
	mResultScreen->addAnim("challenge_modo_result.btp");
	mResultScreen->addAnim("challenge_modo_result.brk");
	mResultScreen->addAnim("challenge_modo_result.btk");
	mResultScreen->addAnim("challenge_modo_result_02.btk");
	mResultScreen->addAnim("challenge_modo_result_03.btk");

	u64 levelTags[2] = { '4901_00', '4910_00' }; // "Explorer's Cave"
	mMesgOffs        = new TOffsetMsgSet(levelTags, '4900_00', 2);

	P2DScreen::Mgr_tuning* screen = mResultScreen->mScreenObj;
	screen->search('Peffect')->show();
	screen->search('Peffect1')->show();

	mPane1 = screen->search('Tyel1');
	P2ASSERTLINE(1058, mPane1);
	mPane2 = screen->search('Tyel2');
	P2ASSERTLINE(1061, mPane2);
	mPanePlayerNum = screen->search('Tyel3');
	P2ASSERTLINE(1064, mPanePlayerNum);
	mPanePlayerNumShadow = screen->search('Tyel4');
	P2ASSERTLINE(1067, mPanePlayerNumShadow);

	mOnyonMovePane[0] = new TMovePane;
	mOnyonPane[0]     = screen->search('NRED');

	mOnyonMovePane[1] = new TMovePane;
	mOnyonPane[1]     = screen->search('NYELLOW');

	mOnyonMovePane[2] = new TMovePane;
	mOnyonPane[2]     = screen->search('NBLUE');

	for (int i = 0; i < 3; i++) {
		P2ASSERTLINE(1081, mOnyonMovePane[i]);
		mOnyonMovePane[i]->setPane(mOnyonPane[i]);
	}

	mClearTexture[0] = new TClearTexture(this, screen, 'PICT_044', 'PICT_043');
	mClearTexture[1] = new TClearTexture(this, screen, 'PICT_042', 'PICT_041');
	mClearTexture[2] = new TClearTexture(this, screen, 'PICT_019', 'PICT_018');
	mClearTexture[3] = new TClearTexture(this, screen, 'PICT_048', 'PICT_047');
	mClearTexture[4] = new TClearTexture(this, screen, 'PICT_046', 'PICT_045');

	mCounter2 = setTCounterRV(screen, 'Ppoko00', 'Ppoko01', 'Ppoko04', &mScoreTotal, 5, 5, mArchive);
	mCounter2->getMotherPane()->hide();
	mCounter1 = setTCounterRV(screen, 'Ppoko00', 'Ppoko01', 'Ppoko04', &mScoreTotal, 5, 5, mArchive);

	J2DPane* pane = screen->search('Ppoko02');
	P2ASSERTLINE(1103, pane);
	pane->hide();

	pane = screen->search('Ppoko03');
	P2ASSERTLINE(1107, pane);
	pane->hide();

	pane = screen->search('Ppoko04');
	P2ASSERTLINE(1111, pane);
	pane->hide();

	mHighScoreCounter[0] = setTCounterRV(screen, 'P1st01', 'P1st02', 'P1st05', &mScoreTotal, 5, 5, mArchive);
	mHighScoreCounter[0]->getMotherPane()->hide();
	mHighScoreCounter[1] = setTCounterRV(screen, 'P2nd01', 'P2nd02', 'P2nd05', &mScoreTotal, 5, 5, mArchive);
	mHighScoreCounter[1]->getMotherPane()->hide();
	mHighScoreCounter[2] = setTCounterRV(screen, 'P3rd01', 'P3rd02', 'P3rd05', &mScoreTotal, 5, 5, mArchive);
	mHighScoreCounter[2]->getMotherPane()->hide();

	mPane6 = screen->search('Peffect1');
	P2ASSERTLINE(1126, mPane6);
	mScissorPic = new TScissorPane;

	mHighScoreCounter[2]->getMotherPane()->getParentPane()->appendChild(mScissorPic);
	mCounters1[0] = setTCounterRV(screen, 'P1st01', 'P1st02', 'P1st05', &mHighScoreValues[0], 5, 5, mArchive);

	pane = screen->search('P1st01');
	P2ASSERTLINE(1135, pane);
	pane->hide();

	pane = screen->search('P1st02');
	P2ASSERTLINE(1139, pane);
	pane->hide();

	pane = screen->search('P1st03');
	P2ASSERTLINE(1143, pane);
	pane->hide();

	pane = screen->search('P1st04');
	P2ASSERTLINE(1147, pane);
	pane->hide();

	pane = screen->search('P1st05');
	P2ASSERTLINE(1151, pane);
	pane->hide();

	mCounters1[1] = setTCounterRV(screen, 'P2nd01', 'P2nd02', 'P2nd05', &mHighScoreValues[1], 5, 5, mArchive);

	pane = screen->search('P2nd01');
	P2ASSERTLINE(1158, pane);
	pane->hide();

	pane = screen->search('P2nd02');
	P2ASSERTLINE(1162, pane);
	pane->hide();

	pane = screen->search('P2nd03');
	P2ASSERTLINE(1166, pane);
	pane->hide();

	pane = screen->search('P2nd04');
	P2ASSERTLINE(1170, pane);
	pane->hide();

	pane = screen->search('P2nd05');
	P2ASSERTLINE(1174, pane);
	pane->hide();

	mCounters1[2] = setTCounterRV(screen, 'P3rd01', 'P3rd02', 'P3rd05', &mHighScoreValues[2], 5, 5, mArchive);
	_1CC          = 30.0f;

	pane = screen->search('P3rd01');
	P2ASSERTLINE(1181, pane);
	pane->hide();

	pane = screen->search('P3rd02');
	P2ASSERTLINE(1185, pane);
	pane->hide();

	pane = screen->search('P3rd03');
	P2ASSERTLINE(1189, pane);
	pane->hide();

	pane = screen->search('P3rd04');
	P2ASSERTLINE(1193, pane);
	pane->hide();

	pane = screen->search('P3rd05');
	P2ASSERTLINE(1197, pane);
	pane->hide();

	TScissorPane* tpane = new TScissorPane;
	tpane->mBounds      = JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f);
	mCounters1[2]->getMotherPane()->getParentPane()->appendChild(tpane);

	mCounter3 = setTCounterRV(screen, 'Pkase01', 'Pkase02', 'Pkase04', &mPokoCount, 5, 0, mArchive);

	pane = screen->search('Pkase01');
	P2ASSERTLINE(1208, pane);
	pane->hide();

	pane = screen->search('Pkase02');
	P2ASSERTLINE(1212, pane);
	pane->hide();

	pane = screen->search('Pkase03');
	P2ASSERTLINE(1216, pane);
	pane->hide();

	pane = screen->search('Pkase04');
	P2ASSERTLINE(1220, pane);
	pane->hide();

	mCounter5 = setTCounterRV(screen, 'Ppiki01', 'Ppiki02', 'Ppiki03', &mPikiCount, 4, 0, mArchive);

	pane = screen->search('Ppiki01');
	P2ASSERTLINE(1227, pane);
	pane->hide();

	pane = screen->search('Ppiki02');
	P2ASSERTLINE(1231, pane);
	pane->hide();

	pane = screen->search('Ppiki03');
	P2ASSERTLINE(1235, pane);
	pane->hide();

	mCounter4 = setTCounterRV(screen, 'Ptime01', 'Ptime02', 'Ptime03', &mTimeBonus, 5, 0, mArchive);

	pane = screen->search('Ptime01');
	P2ASSERTLINE(1242, pane);
	pane->hide();

	pane = screen->search('Ptime02');
	P2ASSERTLINE(1246, pane);
	pane->hide();

	pane = screen->search('Ptime03');
	P2ASSERTLINE(1250, pane);
	pane->hide();

	mResultCounters[0] = new TChallengeResultCounter(&mPokoCount, 5, 4);
	mResultCounters[1] = new TChallengeResultCounter(&mPikiCount, 4, 3);
	mResultCounters[2] = new TChallengeResultCounter(&mTimeBonus, 5, 3);
	mResultCounters[3] = new TChallengeResultCounter(&mScoreTotal, 5, 5);

	for (int i = 0; i < 3; i++) {
		J2DPane* pane = mCounters1[i]->getMotherPane();
		P2ASSERTLINE(1263, pane);
		mPosList1[i].x = pane->mOffset.x;
		mPosList1[i].y = pane->mOffset.y;
	}

	mPaneAButton = screen->search('Nabtn');
	P2ASSERTLINE(1270, mPaneAButton);
	mPaneAButton->setInfluencedAlpha(false, false);

	mResultDemoScreen = new TChallengeResultDemoScreen(arc, 2);
	mResultDemoScreen->create("challenge_modo_result_demo.blo", 0x20000);
	mResultDemoScreen->addAnim("challenge_modo_result_demo.bck");
	mResultDemoScreen->addAnim("challenge_modo_result_demo.bva");
	backupheap->becomeCurrentHeap();
	setInfo();
}

/**
 * @note Address: 0x80395F4C
 * @note Size: 0x9C0
 */
bool TChallengeResult::doUpdate()
{
	if (mIsSection && mForceDemoStart) {
		mForceDemoStart = false;
		setInfo();
		startDemo();
	}
	mSaveMgr->update();
	if (!mIsSaveOpen) {
		mResultScreen->update();
	}
	if (!mIsSaveOpen) {
		mResultDemoScreen->update();
	}

	JGeometry::TBox2f box(mPane6->getGlbVtx(GLBVTX_BtmLeft), mPane6->getGlbVtx(GLBVTX_TopRight));
	mScissorPic->mBounds = box;

	if (mIsSaveOpen && mSaveMgr->isFinish()) {
		if (mSaveMgr->mEndState == ebi::Save::TMgr::End_Cancel) {
			if (mComplete) {
				u16 y = sys->getRenderModeObj()->efbHeight;
				u16 x = sys->getRenderModeObj()->fbWidth;

				Vector2f pos(x * 0.5f, y * 0.5f);
				efx2d::Arg arg(pos);
				mEfxCompLoop->create(&arg);
			}
			mIsSaveOpen = false;
		} else if (mIsSection) {
			mIsSaveOpen = false;
		} else {
			mDisp->_10 = 1;
			getOwner()->endScene(nullptr);
		}
	}

	if (mCanInput && mDisp->_10 == 0) {
		if (mDemoState == 6) {
			if (mControls->getButtonDown() & Controller::PRESS_A) {
				// skip prompt to save in certain test versions of the game
				if (Game::gGameConfig.mParms.mNintendoVersion.mData || Game::gGameConfig.mParms.mE3version.mData) {
					mDisp->_10 = 1;
					getOwner()->endScene(nullptr);
					mCanInput = false;
				} else {
					if (!mIsSaveOpen) {
						mIsSaveOpen = true;
						mSaveMgr->setControllers(getGamePad());
						mSaveMgr->mIsStoryGameSave = 1;
						mSaveMgr->mSaveType        = 1;
						mSaveMgr->start();
						mSaveMgr->update();
						if (mComplete) {
							mEfxCompLoop->fade();
						}
						fadeEffect();
					}
				}
			}
		} else if (mControls->getButton() & Controller::PRESS_A) {
			mDemoSpeedUpRate = mDemoSpeedUpMax;
		} else if (mDemoSpeedUpRate < mSpeed) {
			mDemoSpeedUpRate = mSpeed;
		}
	}

	for (int i = 0; i < 3; i++) {
		mCounters1[i]->getMotherPane()->setOffset(mPosList1[i].x + mPosList2[i].x, mPosList1[i].y + mPosList2[i].y);
		mOnyonMovePane[i]->update();
	}

	for (int i = 0; i < 4; i++) {
		mResultCounters[i]->update();
	}

	mCounter2->getMotherPane()->setOffset(mPokoCountOffsetX + mMoveTimer, mPokoCountOffsetY);
	if (mMoveTimer > 0.0f) {
		mMoveTimer += 20.0f * mDemoSpeedUpRate;
	}
	if (mMoveTimer > 600.0f) {
		bool doSe = false;
		for (int i = 0; i < 3; i++) {
			if (i == 0 && mPosList2[i].x != 0.0f) {
				doSe = true;
			}
			mPosList2[i].x = -(20.0f * mDemoSpeedUpRate - mPosList2[i].x);
			if (mPosList2[i].x < 0.0f) {
				mPosList2[i].x = 0.0f;
			}
			if (doSe && mPosList2[i].x == 0.0f) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_SCORE_L, 0);
			}
			if (mPosList2[i].x < 100.0f && i >= mRankInSlot) {
				mPosList2[i].y += 5.0f * mDemoSpeedUpRate;
				f32 comp = 100.0f;
				if (i < 2) {
					comp = _1CC;
				}
				if (mPosList2[i].y > comp) {
					mPosList2[i].y = comp;
					if (i == 2) {
						mFlags[3] = 1;
					}
				}
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		mCounters1[i]->getMotherPane()->setOffset(mPosList1[i].x, mPosList1[i].y + mPosList2[i].y);
		mHighScoreCounter[i]->getMotherPane()->setOffset(mPosList1[i].x + mPosList2[i].x, mPosList1[i].y);
	}

	if (mFlags[3]) {
		mTimer += 1.0f;
		if (mTimer > mFlashInterval) {
			mTimer = 0.0f;
		}
		f32 calc = (mTimer / 40.0f) * TAU;
		calc     = FABS(sinf(calc));

		f32 calc1 = 1.0f - calc;
		f32 calc2 = calc * 255.0f;
		u8 r      = mFlashColor.r * calc1 + calc2;
		u8 g      = mFlashColor.g * calc1 + calc2;
		u8 b      = mFlashColor.b * calc1 + calc2;

		mCounter1->setColor(r, g, b, 255);
		for (int i = 0; i < 3; i++) {
			mHighScoreCounter[i]->setColor(r, g, b, 255);
		}
	}

	if (mDemoState == 6) {
		mPaneAButton->show();
		if (mAButtonAlphaTimer < 1.0f) {
			mAButtonAlphaTimer += 0.1f;
			if (mAButtonAlphaTimer > 1.0f) {
				mAButtonAlphaTimer = 1.0f;
			}
		}
		u8 alpha = mResultScreen->getScreenAlpha();
		mPaneAButton->setAlpha(mAButtonAlphaTimer * alpha);
	} else {
		mAButtonAlphaTimer = 0.0f;
		mPaneAButton->hide();
	}

	if (mDemoState != 0) {
		updateDemo();
	}
	return false;
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stmw     r23, 0x9c(r1)
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	mr       r24, r3
	cmplwi   r0, 0
	beq      lbl_80395FA4
	lbz      r0, mForceDemoStart__Q28Morimura16TChallengeResult@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80395FA4
	li       r0, 0
	stb      r0, mForceDemoStart__Q28Morimura16TChallengeResult@sda21(r13)
	bl       setInfo__Q28Morimura16TChallengeResultFv
	mr       r3, r24
	bl       startDemo__Q28Morimura16TChallengeResultFv

lbl_80395FA4:
	lwz      r3, 0x84(r24)
	bl       update__Q33ebi4Save4TMgrFv
	lbz      r0, 0x1e0(r24)
	cmplwi   r0, 0
	bne      lbl_80395FCC
	lwz      r3, 0x7c(r24)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80395FCC:
	lbz      r0, 0x1e0(r24)
	cmplwi   r0, 0
	bne      lbl_80395FEC
	lwz      r3, 0x80(r24)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80395FEC:
	lwz      r4, 0xd4(r24)
	addi     r3, r1, 0x28
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f29, 0x28(r1)
	addi     r3, r1, 0x1c
	lfs      f30, 0x2c(r1)
	li       r5, 3
	lwz      r4, 0xd4(r24)
	bl       getGlbVtx__7J2DPaneCFUc
	stfs     f29, 0x40(r1)
	lfs      f1, 0x20(r1)
	stfs     f30, 0x44(r1)
	lfs      f0, 0x1c(r1)
	lwz      r4, 0xbc(r24)
	lwz      r3, 0x40(r1)
	stfs     f0, 0x48(r1)
	lwz      r0, 0x44(r1)
	stw      r3, 0x1a8(r4)
	lwz      r3, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stw      r0, 0x1ac(r4)
	lwz      r0, 0x4c(r1)
	stw      r3, 0x1b0(r4)
	stw      r0, 0x1b4(r4)
	lbz      r0, 0x1e0(r24)
	cmplwi   r0, 0
	beq      lbl_80396164
	lwz      r3, 0x84(r24)
	bl       isFinish__Q33ebi4Save4TMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80396164
	lwz      r3, 0x84(r24)
	lwz      r0, 0x474(r3)
	cmpwi    r0, 1
	bne      lbl_80396124
	lbz      r0, mComplete__Q28Morimura16TChallengeResult@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80396118
	bl       getRenderModeObj__6SystemFv
	lhz      r23, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r5, 0x4330
	lis      r3, __vt__Q25efx2d3Arg@ha
	stw      r5, 0x50(r1)
	addi     r0, r3, __vt__Q25efx2d3Arg@l
	lfd      f2, lbl_8051F0E8@sda21(r2)
	stw      r4, 0x54(r1)
	addi     r4, r1, 0x34
	lfs      f3, lbl_8051F0B4@sda21(r2)
	lfd      f0, 0x50(r1)
	stw      r23, 0x5c(r1)
	fsubs    f1, f0, f2
	stw      r5, 0x58(r1)
	lfd      f0, 0x58(r1)
	fmuls    f1, f3, f1
	stw      r0, 0x3c(r1)
	fsubs    f0, f0, f2
	stfs     f1, 0xc(r1)
	fmuls    f0, f3, f0
	lwz      r0, 0xc(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x14(r1)
	lwz      r0, 0x10(r1)
	stfs     f0, 0x34(r1)
	stw      r0, 0x18(r1)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x38(r1)
	lwz      r3, 0x1a4(r24)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80396118:
	li       r0, 0
	stb      r0, 0x1e0(r24)
	b        lbl_80396164

lbl_80396124:
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8039613C
	li       r0, 0
	stb      r0, 0x1e0(r24)
	b        lbl_80396164

lbl_8039613C:
	lwz      r4, 0x8c(r24)
	li       r0, 1
	mr       r3, r24
	stw      r0, 0x10(r4)
	lwz      r12, 0(r24)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg

lbl_80396164:
	lbz      r0, 0x45(r24)
	cmplwi   r0, 0
	beq      lbl_80396298
	lwz      r4, 0x8c(r24)
	lwz      r0, 0x10(r4)
	cmpwi    r0, 0
	bne      lbl_80396298
	lwz      r0, 0x1c8(r24)
	cmpwi    r0, 6
	bne      lbl_80396268
	lwz      r3, 0x88(r24)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80396298
	lis      r3, gGameConfig__4Game@ha
	addi     r3, r3, gGameConfig__4Game@l
	lwz      r0, 0x238(r3)
	cmpwi    r0, 0
	bne      lbl_803961BC
	lwz      r0, 0x1c8(r3)
	cmpwi    r0, 0
	beq      lbl_803961EC

lbl_803961BC:
	li       r0, 1
	mr       r3, r24
	stw      r0, 0x10(r4)
	lwz      r12, 0(r24)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	li       r0, 0
	stb      r0, 0x45(r24)
	b        lbl_80396298

lbl_803961EC:
	lbz      r0, 0x1e0(r24)
	cmplwi   r0, 0
	bne      lbl_80396298
	li       r0, 1
	mr       r3, r24
	stb      r0, 0x1e0(r24)
	bl       getGamePad__Q26Screen7ObjBaseCFv
	lwz      r4, 0x84(r24)
	li       r0, 1
	stw      r3, 0x3d0(r4)
	stw      r3, 0x24(r4)
	stw      r3, 0x104(r4)
	lwz      r3, 0x84(r24)
	stw      r0, 0x470(r3)
	lwz      r3, 0x84(r24)
	stb      r0, 0x478(r3)
	lwz      r3, 0x84(r24)
	bl       start__Q33ebi4Save4TMgrFv
	lwz      r3, 0x84(r24)
	bl       update__Q33ebi4Save4TMgrFv
	lbz      r0, mComplete__Q28Morimura16TChallengeResult@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8039625C
	lwz      r3, 0x1a4(r24)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8039625C:
	mr       r3, r24
	bl       fadeEffect__Q28Morimura16TChallengeResultFv
	b        lbl_80396298

lbl_80396268:
	lwz      r3, 0x88(r24)
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80396284
	lfs      f0, mDemoSpeedUpMax__Q28Morimura16TChallengeResult@sda21(r13)
	stfs     f0, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	b        lbl_80396298

lbl_80396284:
	lfs      f0, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	lfs      f1, 0x1f0(r24)
	fcmpo    cr0, f0, f1
	bge      lbl_80396298
	stfs     f1, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)

lbl_80396298:
	mr       r23, r24
	mr       r25, r24
	li       r26, 0

lbl_803962A4:
	lfs      f3, 0xf4(r23)
	lfs      f2, 0x10c(r23)
	lfs      f1, 0xf0(r23)
	lfs      f0, 0x108(r23)
	fadds    f30, f3, f2
	lwz      r3, 0xa4(r25)
	fadds    f29, f1, f0
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stfs     f29, 0xd4(r3)
	stfs     f30, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xd8(r25)
	bl       update__Q28Morimura9TMovePaneFv
	addi     r26, r26, 1
	addi     r25, r25, 4
	cmpwi    r26, 3
	addi     r23, r23, 8
	blt      lbl_803962A4
	li       r25, 0
	mr       r26, r24

lbl_80396300:
	lwz      r28, 0x17c(r26)
	lwz      r0, 8(r28)
	cmpwi    r0, 1
	bne      lbl_8039647C
	li       r29, 0
	lfd      f31, lbl_8051F0D0@sda21(r2)
	mr       r30, r29
	lis      r31, 0x4330
	mr       r27, r29
	b        lbl_80396404

lbl_80396328:
	xoris    r0, r30, 0x8000
	stw      r31, 0x58(r1)
	lfd      f1, lbl_8051F0D8@sda21(r2)
	stw      r0, 0x5c(r1)
	lfd      f0, 0x58(r1)
	fsub     f2, f0, f31
	bl       pow
	fctiwz   f0, f1
	lwz      r0, 0xc(r28)
	cmpw     r0, r30
	stfd     f0, 0x50(r1)
	lwz      r23, 0x54(r1)
	ble      lbl_80396370
	lwz      r3, 0x24(r28)
	lwzx     r0, r3, r27
	mullw    r0, r23, r0
	add      r29, r29, r0
	b        lbl_803963FC

lbl_80396370:
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x5c(r1)
	xoris    r0, r23, 0x8000
	lfd      f5, lbl_8051F0D0@sda21(r2)
	stw      r4, 0x58(r1)
	lfs      f1, lbl_8051F0E0@sda21(r2)
	lfd      f2, 0x58(r1)
	lfs      f0, lbl_8051F0E4@sda21(r2)
	fsubs    f2, f2, f5
	stw      r4, 0x68(r1)
	lfs      f3, lbl_8051F0BC@sda21(r2)
	stw      r0, 0x54(r1)
	fdivs    f2, f2, f1
	lfd      f1, lbl_8051F0E8@sda21(r2)
	stw      r4, 0x50(r1)
	lfd      f4, 0x50(r1)
	stw      r29, 0x74(r1)
	stw      r4, 0x70(r1)
	fmuls    f2, f0, f2
	lfd      f0, 0x70(r1)
	fsubs    f4, f4, f5
	fsubs    f0, f0, f1
	fctiwz   f1, f2
	stfd     f1, 0x60(r1)
	lwz      r0, 0x64(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0x6c(r1)
	lfd      f1, 0x68(r1)
	fsubs    f1, f1, f5
	fadds    f1, f3, f1
	fmadds   f1, f4, f1, f0
	bl       __cvt_fp2unsigned
	mr       r29, r3

lbl_803963FC:
	addi     r27, r27, 4
	addi     r30, r30, 1

lbl_80396404:
	lwz      r0, 0x10(r28)
	cmpw     r30, r0
	blt      lbl_80396328
	lwz      r3, 0(r28)
	stw      r29, 0(r3)
	lwz      r3, 0x20(r28)
	cmpwi    r3, 0
	ble      lbl_8039647C
	addi     r0, r3, -1
	stw      r0, 0x20(r28)
	lwz      r0, 0x20(r28)
	cmpwi    r0, 0
	bne      lbl_8039647C
	lwz      r0, 8(r28)
	cmpwi    r0, 1
	bne      lbl_80396474
	lwz      r3, 0xc(r28)
	addi     r0, r3, 1
	stw      r0, 0xc(r28)
	lwz      r3, 0xc(r28)
	lwz      r0, 0x10(r28)
	cmpw     r3, r0
	blt      lbl_80396474
	lwz      r4, 4(r28)
	li       r0, 2
	lwz      r3, 0(r28)
	stw      r4, 0(r3)
	stw      r0, 8(r28)

lbl_80396474:
	lwz      r0, 0x1c(r28)
	stw      r0, 0x20(r28)

lbl_8039647C:
	addi     r25, r25, 1
	addi     r26, r26, 4
	cmpwi    r25, 4
	blt      lbl_80396300
	lfs      f1, 0x120(r24)
	lfs      f0, 0x178(r24)
	lfs      f30, 0x124(r24)
	fadds    f29, f1, f0
	lwz      r3, 0x94(r24)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stfs     f29, 0xd4(r3)
	stfs     f30, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x178(r24)
	lfs      f0, lbl_8051F084@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_803964DC
	lfs      f1, lbl_8051F088@sda21(r2)
	lfs      f0, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x178(r24)

lbl_803964DC:
	lfs      f1, 0x178(r24)
	lfs      f0, lbl_8051F0B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803965D4
	lfs      f29, lbl_8051F088@sda21(r2)
	mr       r23, r24
	lfs      f30, lbl_8051F084@sda21(r2)
	li       r25, 0
	lfs      f31, lbl_8051F0AC@sda21(r2)
	li       r26, 0

lbl_80396504:
	cmpwi    r26, 0
	bne      lbl_80396520
	lfs      f1, lbl_8051F084@sda21(r2)
	lfs      f0, 0x108(r23)
	fcmpu    cr0, f1, f0
	beq      lbl_80396520
	li       r25, 1

lbl_80396520:
	lfs      f1, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	lfs      f0, 0x108(r23)
	fnmsubs  f0, f29, f1, f0
	stfs     f0, 0x108(r23)
	lfs      f0, 0x108(r23)
	fcmpo    cr0, f0, f30
	bge      lbl_80396540
	stfs     f30, 0x108(r23)

lbl_80396540:
	clrlwi.  r0, r25, 0x18
	beq      lbl_80396568
	lfs      f1, lbl_8051F084@sda21(r2)
	lfs      f0, 0x108(r23)
	fcmpu    cr0, f1, f0
	bne      lbl_80396568
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x182f
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80396568:
	lfs      f0, 0x108(r23)
	fcmpo    cr0, f0, f31
	bge      lbl_803965C4
	lwz      r0, 0x1e4(r24)
	cmpw     r26, r0
	blt      lbl_803965C4
	lfs      f2, lbl_8051F12C@sda21(r2)
	fmr      f3, f31
	lfs      f1, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	cmpwi    r26, 2
	lfs      f0, 0x10c(r23)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x10c(r23)
	bge      lbl_803965A4
	lfs      f3, 0x1cc(r24)

lbl_803965A4:
	lfs      f0, 0x10c(r23)
	fcmpo    cr0, f0, f3
	ble      lbl_803965C4
	cmpwi    r26, 2
	stfs     f3, 0x10c(r23)
	bne      lbl_803965C4
	li       r0, 1
	stb      r0, 0x1c7(r24)

lbl_803965C4:
	addi     r26, r26, 1
	addi     r23, r23, 8
	cmpwi    r26, 3
	blt      lbl_80396504

lbl_803965D4:
	mr       r23, r24
	mr       r25, r24
	li       r26, 0

lbl_803965E0:
	lfs      f1, 0xf4(r23)
	lfs      f0, 0x10c(r23)
	lfs      f29, 0xf0(r23)
	fadds    f30, f1, f0
	lwz      r3, 0xa4(r25)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stfs     f29, 0xd4(r3)
	stfs     f30, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xf0(r23)
	lfs      f0, 0x108(r23)
	lfs      f30, 0xf4(r23)
	fadds    f29, f1, f0
	lwz      r3, 0xb0(r25)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stfs     f29, 0xd4(r3)
	stfs     f30, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r26, r26, 1
	addi     r25, r25, 4
	cmpwi    r26, 3
	addi     r23, r23, 8
	blt      lbl_803965E0
	lbz      r0, 0x1c7(r24)
	cmplwi   r0, 0
	beq      lbl_803967DC
	lfs      f1, 0x1ec(r24)
	lfs      f0, lbl_8051F0BC@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x1ec(r24)
	lfs      f1, 0x1ec(r24)
	lfs      f0, mFlashInterval__Q28Morimura16TChallengeResult@sda21(r13)
	fcmpo    cr0, f1, f0
	ble      lbl_80396688
	lfs      f0, lbl_8051F084@sda21(r2)
	stfs     f0, 0x1ec(r24)

lbl_80396688:
	lfs      f1, 0x1ec(r24)
	lfs      f0, mFlashInterval__Q28Morimura16TChallengeResult@sda21(r13)
	lfs      f2, lbl_8051F08C@sda21(r2)
	fdivs    f1, f1, f0
	lfs      f0, lbl_8051F084@sda21(r2)
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803966D4
	lfs      f0, lbl_8051F094@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_803966F8

lbl_803966D4:
	lfs      f0, lbl_8051F098@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_803966F8:
	fabs     f0, f0
	lbz      r6, mFlashColor__Q28Morimura16TChallengeResult@sda21(r13)
	lis      r5, 0x4330
	addi     r3, r13, mFlashColor__Q28Morimura16TChallengeResult@sda21
	lbz      r4, 1(r3)
	li       r0, 0xff
	lbz      r3, 2(r3)
	frsp     f2, f0
	lfs      f1, lbl_8051F0BC@sda21(r2)
	lfs      f0, lbl_8051F130@sda21(r2)
	stw      r6, 0x64(r1)
	fsubs    f5, f1, f2
	lfd      f3, lbl_8051F0E8@sda21(r2)
	fmuls    f4, f0, f2
	stw      r5, 0x60(r1)
	lwz      r6, 0x90(r24)
	lfd      f0, 0x60(r1)
	stw      r4, 0x54(r1)
	fsubs    f1, f0, f3
	stw      r5, 0x50(r1)
	lfd      f0, 0x50(r1)
	fmadds   f2, f1, f5, f4
	stw      r3, 0x84(r1)
	fsubs    f1, f0, f3
	stw      r5, 0x80(r1)
	fctiwz   f2, f2
	lfd      f0, 0x80(r1)
	fmadds   f1, f1, f5, f4
	stfd     f2, 0x58(r1)
	fsubs    f0, f0, f3
	fctiwz   f1, f1
	lwz      r4, 0x5c(r1)
	fmadds   f0, f0, f5, f4
	stb      r4, 0xa8(r6)
	stfd     f1, 0x78(r1)
	fctiwz   f0, f0
	lwz      r5, 0x7c(r1)
	stfd     f0, 0x88(r1)
	stb      r5, 0xa9(r6)
	lwz      r7, 0x8c(r1)
	stb      r7, 0xaa(r6)
	stb      r0, 0xab(r6)
	lwz      r3, 0xb0(r24)
	stb      r4, 0xa8(r3)
	stb      r5, 0xa9(r3)
	stb      r7, 0xaa(r3)
	stb      r0, 0xab(r3)
	lwz      r3, 0xb4(r24)
	stb      r4, 0xa8(r3)
	stb      r5, 0xa9(r3)
	stb      r7, 0xaa(r3)
	stb      r0, 0xab(r3)
	lwz      r3, 0xb8(r24)
	stb      r4, 0xa8(r3)
	stb      r5, 0xa9(r3)
	stb      r7, 0xaa(r3)
	stb      r0, 0xab(r3)

lbl_803967DC:
	lwz      r0, 0x1c8(r24)
	cmpwi    r0, 6
	bne      lbl_803968B4
	lwz      r3, 0xd0(r24)
	li       r0, 1
	lfs      f1, lbl_8051F0BC@sda21(r2)
	stb      r0, 0xb0(r3)
	lfs      f2, 0x1f4(r24)
	fcmpo    cr0, f2, f1
	bge      lbl_80396820
	lfs      f0, lbl_8051F0A4@sda21(r2)
	fadds    f0, f2, f0
	stfs     f0, 0x1f4(r24)
	lfs      f0, 0x1f4(r24)
	fcmpo    cr0, f0, f1
	ble      lbl_80396820
	stfs     f1, 0x1f4(r24)

lbl_80396820:
	lwz      r23, 0x7c(r24)
	lwz      r0, 0x10(r23)
	cmpwi    r0, 1
	bge      lbl_80396848
	lis      r3, lbl_80494A74@ha
	li       r4, 0x58
	addi     r3, r3, lbl_80494A74@l
	li       r5, 0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80396848:
	lwz      r3, 4(r23)
	addi     r5, r1, 8
	li       r4, 0
	lwz      r3, 4(r3)
	lwz      r3, 0x14(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lbz      r4, 0xb(r1)
	lis      r0, 0x4330
	lwz      r3, 0xd0(r24)
	stw      r4, 0x8c(r1)
	lwz      r12, 0(r3)
	stw      r0, 0x88(r1)
	lfd      f1, lbl_8051F0E8@sda21(r2)
	lfd      f0, 0x88(r1)
	lfs      f2, 0x1f4(r24)
	fsubs    f0, f0, f1
	lwz      r12, 0x24(r12)
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r4, 0x84(r1)
	mtctr    r12
	bctrl
	b        lbl_803968C8

lbl_803968B4:
	lfs      f0, lbl_8051F084@sda21(r2)
	li       r0, 0
	stfs     f0, 0x1f4(r24)
	lwz      r3, 0xd0(r24)
	stb      r0, 0xb0(r3)

lbl_803968C8:
	lwz      r0, 0x1c8(r24)
	cmpwi    r0, 0
	beq      lbl_803968DC
	mr       r3, r24
	bl       updateDemo__Q28Morimura16TChallengeResultFv

lbl_803968DC:
	li       r3, 0
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	lmw      r23, 0x9c(r1)
	lwz      r0, 0xf4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/**
 * @note Address: 0x8039690C
 * @note Size: 0x160
 */
void TChallengeResult::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	mResultScreen->draw(gfx, graf);
	mResultDemoScreen->draw(gfx, graf);
	if (mIsSaveOpen) {
		mSaveMgr->draw();
	}
	gfx.mPerspGraph.setPort();
	JUtility::TColor color;
	color = JUtility::TColor(0, 0, 0, 255 - mFadeAlpha);
	graf->setColor(color);
	GXSetAlphaUpdate(GX_FALSE);

	f32 zero = 0.0f;
	u16 y    = System::getRenderModeObj()->efbHeight;
	u16 x    = System::getRenderModeObj()->fbWidth;
	graf->fillBox(JGeometry::TBox2f(0.0f, 0.0f, zero + x, zero + y));

	GXSetAlphaUpdate(GX_TRUE);
}

/**
 * @note Address: 0x80396A6C
 * @note Size: 0x5C
 */
void TChallengeResult::doUpdateFadeoutFinish()
{
	P2ASSERTLINE(1566, mDisp);
	mDisp->_10 = 2;
}

/**
 * @note Address: 0x80396AC8
 * @note Size: 0xEDC
 */
void TChallengeResult::setInfo()
{
	mDemoState  = 0;
	mIsSaveOpen = false;

	for (int i = 0; i < 3; i++) {
		mHighScoreCounter[i]->setColor(255, 255, 255, 255);
	}
	mCounter1->setColor(255, 255, 255, 255);

	for (int i = 0; i < 5; i++) {
		mClearTexture[i]->resetTexture();
	}

	mFlags[3] = 0;
	mPaneAButton->hide();

	int test = randInt(6);
	if (test >= 5) {
		test = 5;
	}
	const int* data = &cRandArray[test * 3];
	for (int i = 0; i < 3; i++) {
		mOnyonMovePane[i]->setPane(mOnyonPane[data[i]]);
		mPosList2[i] = 0.0f;
		mHighScoreCounter[i]->getMotherPane()->hide();
		mHighScoreCounter[i]->reset();

		mOnyonMovePane[i]->reset();
		mPosList2[i] = 0.0f;
		fadeEffect();
	}

	mCounter1->reset();
	mCounter3->reset();
	mCounter4->reset();
	mCounter5->reset();
	mCounter2->getMotherPane()->hide();
	mCounter2->reset();

	mMoveTimer = 0.0f;
	mFlags[0]  = 0;
	mFlags[1]  = false;
	mFlags[2]  = false;

	mResultDemoScreen->reset();

	for (int i = 0; i < 3; i++) {
		mCounters1[i]->setBlind(false);
	}

	if (mIsSection) {
		mRankInSlot = mTestRankInOrder;
		if (randFloat() < 0.5f) {
			mFlags[0] |= ChalResult_Is2Player;
		}
		if (mTestDemo) {
			if (mComplete) {
				mFlags[0] |= 4;
			} else {
				mFlags[0] |= 2;
			}
		}
		mHighScoreValues[0] = randFloat() * 90000.0f + 1000.0f;
		mHighScoreValues[1] = randFloat() * 9000.0f + 100.0f;
		mHighScoreValues[2] = randFloat() * 900.0f + 10.0f;
		mScoreTotal         = randFloat() * 90000.0f + 100.0f;
		mPokoCount          = mTestDefaultPokoScore;
		mTimeBonus          = randFloat() * 900.0f + 1000.0f;
		mPikiCount          = randFloat() * 9999.0f;

		f32 test = randFloat();
		if (test < 0.1f) {
			for (int i = 0; i < 3; i++) {
				mCounters1[i]->setBlind(false);
			}
		} else if (test < 0.2f) {
			mCounters1[1]->setBlind(true);
			mCounters1[2]->setBlind(true);
		} else if (test < 0.4f) {
			mCounters1[2]->setBlind(true);
		}
		rand();
		Game::ChallengeGame::StageData* data = mStageList->getStageData(mTestStageId);
		P2ASSERTLINE(1683, data);
		int id = data->mStageIndex - 1;
		mPane1->setMsgID(mMesgOffs->getMsgID(id));
		mPane2->setMsgID(mMesgOffs->getMsgID(id));
	} else {
		Game::Challenge2D_ResultInfo* info = mDisp->mResultInfo;
		mFlags[0]                          = info->mDisplayFlag.byteView[0];
		mScoreTotal                        = info->mScore;
		mPokoCount                         = info->mPokos;
		mTimeBonus                         = info->mTimeLeft;
		mPikiCount                         = info->mPikminLeft;
		for (int i = 0; i < 3; i++) {
			if (info->mHighScore->getScore(i) == -1) {
				mCounters1[i]->setBlind(true);
			} else {
				mHighScoreValues[i] = info->mHighScore->getScore(i);
			}
		}
		mRankInSlot = info->mHighScore->entryScore(info->mScore);
		mPane1->setMsgID(mMesgOffs->getMsgID(info->mDisplayIndex - 1));
		mPane2->setMsgID(mMesgOffs->getMsgID(info->mDisplayIndex - 1));
		startDemo();
	}

	JUT_ASSERTLINE(1713, mHighScoreValues[0] < 1000000, "hiscore0 = %d\n", mHighScoreValues[0]);
	JUT_ASSERTLINE(1714, mHighScoreValues[1] < 1000000, "hiscore1 = %d\n", mHighScoreValues[1]);
	JUT_ASSERTLINE(1715, mHighScoreValues[2] < 1000000, "hiscore2 = %d\n", mHighScoreValues[2]);
	JUT_ASSERTLINE(1716, mScoreTotal < 1000000, "total = %d\n", mScoreTotal);
	JUT_ASSERTLINE(1717, mTimeBonus < 100000, "timebonus = %d\n", mTimeBonus);
	JUT_ASSERTLINE(1718, mPokoCount < 100000, "money = %d\n", mPokoCount);
	JUT_ASSERTLINE(1719, mPikiCount < 10000, "piki = %d\n", mPikiCount);

	if (mFlags[0] & ChalResult_Is2Player) {
		mPanePlayerNum->setMsgID('4861_00');       // "1-Player Challenge"
		mPanePlayerNumShadow->setMsgID('4861_00'); // "1-Player Challenge"
	} else {
		mPanePlayerNum->setMsgID('4870_00');       // "2-Player Challenge"
		mPanePlayerNumShadow->setMsgID('4870_00'); // "2-Player Challenge"
	}

	mResultDemoScreen->startDemo();

	if (mFlags[0] & 0x10) {
		for (int i = 0; i < 5; i++) {
			mClearTexture[i]->changeTexture(true);
		}
	} else if (mFlags[0] & 4) {
		mResultDemoScreen->setComplete(true);
		mFlags[1] = 1;
	}

	if (mFlags[0] & 8) {
		for (int i = 0; i < 5; i++) {
			mClearTexture[i]->changeTexture(false);
		}
	} else if (mFlags[0] & 2) {
		mFlags[1] = 1;
	}

	if (!mFlags[1] && mFlags[0] & 0x10 && mFlags[0] & 4) {
		mResultDemoScreen->setComplete(true);
		mFlags[2] = true;
	}

	if (mComplete) {
		mEfxCompLoop->kill();
	}
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
	stmw     r23, 0x8c(r1)
	mr       r31, r3
	li       r3, 0
	stw      r3, 0x1c8(r31)
	lis      r4, lbl_80494720@ha
	li       r0, 0xff
	mr       r24, r31
	stb      r3, 0x1e0(r31)
	addi     r30, r4, lbl_80494720@l
	li       r23, 0
	lwz      r3, 0xb0(r31)
	stb      r0, 0xa8(r3)
	stb      r0, 0xa9(r3)
	stb      r0, 0xaa(r3)
	stb      r0, 0xab(r3)
	lwz      r3, 0xb4(r31)
	stb      r0, 0xa8(r3)
	stb      r0, 0xa9(r3)
	stb      r0, 0xaa(r3)
	stb      r0, 0xab(r3)
	lwz      r3, 0xb8(r31)
	stb      r0, 0xa8(r3)
	stb      r0, 0xa9(r3)
	stb      r0, 0xaa(r3)
	stb      r0, 0xab(r3)
	lwz      r3, 0x90(r31)
	stb      r0, 0xa8(r3)
	stb      r0, 0xa9(r3)
	stb      r0, 0xaa(r3)
	stb      r0, 0xab(r3)

lbl_80396B64:
	lwz      r26, 0x18c(r24)
	li       r5, 0
	lwz      r4, mLeafTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r3, 8(r26)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r26)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0xc(r26)
	li       r5, 0
	lwz      r4, mLeafTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r26)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	addi     r23, r23, 1
	li       r0, 0
	cmpwi    r23, 5
	stb      r0, 0(r26)
	addi     r24, r24, 4
	blt      lbl_80396B64
	stb      r0, 0x1c7(r31)
	lwz      r3, 0xd0(r31)
	stb      r0, 0xb0(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x54(r1)
	lfd      f3, lbl_8051F0D0@sda21(r2)
	stw      r0, 0x50(r1)
	lfs      f1, lbl_8051F0E0@sda21(r2)
	lfd      f2, 0x50(r1)
	lfs      f0, lbl_8051F134@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	cmpwi    r0, 5
	blt      lbl_80396C24
	li       r0, 5

lbl_80396C24:
	mulli    r0, r0, 0xc
	addi     r29, r30, 0x14
	lfs      f31, lbl_8051F084@sda21(r2)
	mr       r28, r31
	lfs      f29, lbl_8051F08C@sda21(r2)
	mr       r27, r31
	lfs      f30, lbl_8051F090@sda21(r2)
	add      r29, r29, r0
	li       r26, 0

lbl_80396C48:
	lwz      r0, 0(r29)
	lwz      r25, 0xd8(r28)
	slwi     r3, r0, 2
	addi     r0, r3, 0xe4
	lwzx     r24, r31, r0
	cmplwi   r24, 0
	bne      lbl_80396C78
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x10f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80396C78:
	stw      r24, 0(r25)
	li       r4, 4
	lwz      r3, 0(r25)
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lfs      f1, 0xd8(r24)
	li       r0, 0
	lfs      f0, 0xd4(r24)
	stfs     f0, 0x10(r25)
	stfs     f1, 0x14(r25)
	stfs     f31, 0x20(r25)
	stfs     f31, 0x24(r25)
	lfs      f0, 0x20(r25)
	stfs     f0, 0x28(r25)
	lfs      f0, 0x24(r25)
	stfs     f0, 0x2c(r25)
	lfs      f0, 0x10(r25)
	stfs     f0, 0x18(r25)
	lfs      f0, 0x14(r25)
	stfs     f0, 0x1c(r25)
	lfs      f0, 0x18(r25)
	stfs     f0, 8(r25)
	lfs      f0, 0x1c(r25)
	stfs     f0, 0xc(r25)
	stw      r0, 0x3c(r25)
	stw      r0, 0x40(r25)
	stfs     f31, 0x38(r25)
	lwz      r3, 0(r25)
	lfs      f1, 0x1c(r25)
	lfs      f0, 0x18(r25)
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x38(r25)
	fsubs    f1, f29, f0
	bl       roundAng__Ff
	fmuls    f0, f30, f1
	lwz      r3, 0(r25)
	fdivs    f0, f0, f29
	stfs     f0, 0xc0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	stfs     f31, 0x108(r27)
	stfs     f31, 0x10c(r27)
	lwz      r3, 0xb0(r28)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	li       r0, 0
	li       r4, 0
	stb      r0, 0xb0(r3)
	lwz      r24, 0xb0(r28)
	stb      r0, 0xb0(r24)
	mr       r3, r24
	stb      r0, 0xb1(r24)
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	li       r25, 0
	mr       r23, r25
	b        lbl_80396DB0

lbl_80396D6C:
	lwz      r3, 0xac(r24)
	lwzx     r0, r3, r23
	cmplwi   r0, 0
	bne      lbl_80396D90
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x26b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80396D90:
	lwz      r3, 0xac(r24)
	lwzx     r3, r3, r23
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r23, r23, 4
	addi     r25, r25, 1

lbl_80396DB0:
	lhz      r0, 0x2e(r24)
	cmpw     r25, r0
	blt      lbl_80396D6C
	lwz      r24, 0xd8(r28)
	li       r0, 0
	stfs     f31, 0x20(r24)
	stfs     f31, 0x24(r24)
	lfs      f0, 0x20(r24)
	stfs     f0, 0x28(r24)
	lfs      f0, 0x24(r24)
	stfs     f0, 0x2c(r24)
	lfs      f0, 0x10(r24)
	stfs     f0, 0x18(r24)
	lfs      f0, 0x14(r24)
	stfs     f0, 0x1c(r24)
	lfs      f0, 0x18(r24)
	stfs     f0, 8(r24)
	lfs      f0, 0x1c(r24)
	stfs     f0, 0xc(r24)
	stw      r0, 0x3c(r24)
	stw      r0, 0x40(r24)
	stfs     f31, 0x38(r24)
	lwz      r3, 0(r24)
	lfs      f1, 0x1c(r24)
	lfs      f0, 0x18(r24)
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x38(r24)
	fsubs    f1, f29, f0
	bl       roundAng__Ff
	fmuls    f0, f30, f1
	lwz      r3, 0(r24)
	fdivs    f0, f0, f29
	stfs     f0, 0xc0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	stfs     f31, 0x108(r27)
	mr       r3, r31
	stfs     f31, 0x10c(r27)
	bl       fadeEffect__Q28Morimura16TChallengeResultFv
	addi     r26, r26, 1
	addi     r28, r28, 4
	cmpwi    r26, 3
	addi     r27, r27, 8
	addi     r29, r29, 4
	blt      lbl_80396C48
	lwz      r24, 0x90(r31)
	li       r0, 0
	li       r4, 0
	stb      r0, 0xb0(r24)
	mr       r3, r24
	stb      r0, 0xb1(r24)
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	li       r25, 0
	mr       r23, r25
	b        lbl_80396EEC

lbl_80396EA8:
	lwz      r3, 0xac(r24)
	lwzx     r0, r3, r23
	cmplwi   r0, 0
	bne      lbl_80396ECC
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x26b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80396ECC:
	lwz      r3, 0xac(r24)
	lwzx     r3, r3, r23
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r23, r23, 4
	addi     r25, r25, 1

lbl_80396EEC:
	lhz      r0, 0x2e(r24)
	cmpw     r25, r0
	blt      lbl_80396EA8
	lwz      r24, 0x98(r31)
	li       r0, 0
	li       r4, 0
	stb      r0, 0xb0(r24)
	mr       r3, r24
	stb      r0, 0xb1(r24)
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	li       r25, 0
	mr       r23, r25
	b        lbl_80396F64

lbl_80396F20:
	lwz      r3, 0xac(r24)
	lwzx     r0, r3, r23
	cmplwi   r0, 0
	bne      lbl_80396F44
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x26b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80396F44:
	lwz      r3, 0xac(r24)
	lwzx     r3, r3, r23
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r23, r23, 4
	addi     r25, r25, 1

lbl_80396F64:
	lhz      r0, 0x2e(r24)
	cmpw     r25, r0
	blt      lbl_80396F20
	lwz      r24, 0x9c(r31)
	li       r0, 0
	li       r4, 0
	stb      r0, 0xb0(r24)
	mr       r3, r24
	stb      r0, 0xb1(r24)
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	li       r25, 0
	mr       r23, r25
	b        lbl_80396FDC

lbl_80396F98:
	lwz      r3, 0xac(r24)
	lwzx     r0, r3, r23
	cmplwi   r0, 0
	bne      lbl_80396FBC
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x26b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80396FBC:
	lwz      r3, 0xac(r24)
	lwzx     r3, r3, r23
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r23, r23, 4
	addi     r25, r25, 1

lbl_80396FDC:
	lhz      r0, 0x2e(r24)
	cmpw     r25, r0
	blt      lbl_80396F98
	lwz      r24, 0xa0(r31)
	li       r0, 0
	li       r4, 0
	stb      r0, 0xb0(r24)
	mr       r3, r24
	stb      r0, 0xb1(r24)
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	li       r25, 0
	mr       r23, r25
	b        lbl_80397054

lbl_80397010:
	lwz      r3, 0xac(r24)
	lwzx     r0, r3, r23
	cmplwi   r0, 0
	bne      lbl_80397034
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x26b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80397034:
	lwz      r3, 0xac(r24)
	lwzx     r3, r3, r23
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r23, r23, 4
	addi     r25, r25, 1

lbl_80397054:
	lhz      r0, 0x2e(r24)
	cmpw     r25, r0
	blt      lbl_80397010
	lwz      r3, 0x94(r31)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	li       r0, 0
	li       r4, 0
	stb      r0, 0xb0(r3)
	lwz      r24, 0x94(r31)
	stb      r0, 0xb0(r24)
	mr       r3, r24
	stb      r0, 0xb1(r24)
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	li       r25, 0
	mr       r23, r25
	b        lbl_803970D8

lbl_80397094:
	lwz      r3, 0xac(r24)
	lwzx     r0, r3, r23
	cmplwi   r0, 0
	bne      lbl_803970B8
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x26b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803970B8:
	lwz      r3, 0xac(r24)
	lwzx     r3, r3, r23
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r23, r23, 4
	addi     r25, r25, 1

lbl_803970D8:
	lhz      r0, 0x2e(r24)
	cmpw     r25, r0
	blt      lbl_80397094
	lfs      f0, lbl_8051F084@sda21(r2)
	li       r4, 0
	mr       r5, r4
	stfs     f0, 0x178(r31)
	stb      r4, 0x1c4(r31)
	stb      r4, 0x1c5(r31)
	stb      r4, 0x1c6(r31)
	lwz      r24, 0x80(r31)
	b        lbl_8039711C

lbl_80397108:
	lwz      r3, 4(r24)
	addi     r4, r4, 1
	lwzx     r3, r3, r5
	addi     r5, r5, 4
	stfs     f0, 0x18(r3)

lbl_8039711C:
	lwz      r0, 0x10(r24)
	cmpw     r4, r0
	blt      lbl_80397108
	mr       r3, r24
	lwz      r12, 0(r24)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r23, r31
	stb      r0, 0x24(r24)
	li       r24, 0

lbl_8039714C:
	lwz      r3, 0xa4(r23)
	li       r4, 0
	bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
	addi     r24, r24, 1
	addi     r23, r23, 4
	cmpwi    r24, 3
	blt      lbl_8039714C
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80397460
	lha      r0, mTestRankInOrder__Q28Morimura16TChallengeResult@sda21(r13)
	stw      r0, 0x1e4(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x5c(r1)
	lfd      f3, lbl_8051F0D0@sda21(r2)
	stw      r0, 0x58(r1)
	lfs      f1, lbl_8051F0E0@sda21(r2)
	lfd      f2, 0x58(r1)
	lfs      f0, lbl_8051F0B4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803971BC
	lbz      r0, 0x1c4(r31)
	ori      r0, r0, 1
	stb      r0, 0x1c4(r31)

lbl_803971BC:
	lbz      r0, mTestDemo__Q28Morimura16TChallengeResult@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803971F0
	lbz      r0, mComplete__Q28Morimura16TChallengeResult@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803971E4
	lbz      r0, 0x1c4(r31)
	ori      r0, r0, 4
	stb      r0, 0x1c4(r31)
	b        lbl_803971F0

lbl_803971E4:
	lbz      r0, 0x1c4(r31)
	ori      r0, r0, 2
	stb      r0, 0x1c4(r31)

lbl_803971F0:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x5c(r1)
	lfd      f3, lbl_8051F0D0@sda21(r2)
	stw      r0, 0x58(r1)
	lfs      f2, lbl_8051F0E0@sda21(r2)
	lfd      f0, 0x58(r1)
	lfs      f1, lbl_8051F13C@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051F138@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f1, f1, f2, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x1b8(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x54(r1)
	lfd      f3, lbl_8051F0D0@sda21(r2)
	stw      r0, 0x50(r1)
	lfs      f2, lbl_8051F0E0@sda21(r2)
	lfd      f0, 0x50(r1)
	lfs      f1, lbl_8051F140@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051F0AC@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f1, f1, f2, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x1bc(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x64(r1)
	lfd      f3, lbl_8051F0D0@sda21(r2)
	stw      r0, 0x60(r1)
	lfs      f2, lbl_8051F0E0@sda21(r2)
	lfd      f0, 0x60(r1)
	lfs      f1, lbl_8051F148@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051F144@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f1, f1, f2, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x1c0(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x6c(r1)
	lfd      f3, lbl_8051F0D0@sda21(r2)
	stw      r0, 0x68(r1)
	lfs      f2, lbl_8051F0E0@sda21(r2)
	lfd      f0, 0x68(r1)
	lfs      f1, lbl_8051F13C@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051F0AC@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f1, f1, f2, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x1a8(r31)
	lha      r0, 0x1de(r31)
	stw      r0, 0x1ac(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x74(r1)
	lfd      f3, lbl_8051F0D0@sda21(r2)
	stw      r0, 0x70(r1)
	lfs      f2, lbl_8051F0E0@sda21(r2)
	lfd      f0, 0x70(r1)
	lfs      f1, lbl_8051F148@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051F138@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f1, f1, f2, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x1b0(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x7c(r1)
	lfd      f3, lbl_8051F0D0@sda21(r2)
	stw      r0, 0x78(r1)
	lfs      f1, lbl_8051F0E0@sda21(r2)
	lfd      f2, 0x78(r1)
	lfs      f0, lbl_8051F14C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f1, f0, f1
	bl       __cvt_fp2unsigned
	stw      r3, 0x1b4(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x84(r1)
	lfd      f3, lbl_8051F0D0@sda21(r2)
	stw      r0, 0x80(r1)
	lfs      f1, lbl_8051F0E0@sda21(r2)
	lfd      f2, 0x80(r1)
	lfs      f0, lbl_8051F0A4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803973B8
	li       r24, 0
	mr       r23, r31

lbl_80397398:
	lwz      r3, 0xa4(r23)
	li       r4, 0
	bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
	addi     r24, r24, 1
	addi     r23, r23, 4
	cmpwi    r24, 3
	blt      lbl_80397398
	b        lbl_803973F8

lbl_803973B8:
	lfs      f0, lbl_8051F150@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803973E0
	lwz      r3, 0xa8(r31)
	li       r4, 1
	bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
	lwz      r3, 0xac(r31)
	li       r4, 1
	bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
	b        lbl_803973F8

lbl_803973E0:
	lfs      f0, lbl_8051F0C0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803973F8
	lwz      r3, 0xac(r31)
	li       r4, 1
	bl       setBlind__Q32og6Screen18CallBack_CounterRVFb

lbl_803973F8:
	bl       rand
	lwz      r3, 0x1f8(r31)
	lbz      r4, mTestStageId__Q28Morimura16TChallengeResult@sda21(r13)
	bl       getStageData__Q34Game13ChallengeGame9StageListFi
	or.      r26, r3, r3
	bne      lbl_80397424
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x693
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80397424:
	lwz      r4, 0x74(r26)
	lwz      r3, 0x1a0(r31)
	addi     r23, r4, -1
	mr       r4, r23
	bl       getMsgID__Q28Morimura13TOffsetMsgSetFi
	lwz      r5, 0xc0(r31)
	stw      r4, 0x1c(r5)
	mr       r4, r23
	stw      r3, 0x18(r5)
	lwz      r3, 0x1a0(r31)
	bl       getMsgID__Q28Morimura13TOffsetMsgSetFi
	lwz      r5, 0xc4(r31)
	stw      r4, 0x1c(r5)
	stw      r3, 0x18(r5)
	b        lbl_8039752C

lbl_80397460:
	lwz      r3, 0x8c(r31)
	mr       r23, r31
	li       r25, 0
	lwz      r24, 8(r3)
	lbz      r0, 0(r24)
	stb      r0, 0x1c4(r31)
	lwz      r0, 0x14(r24)
	stw      r0, 0x1a8(r31)
	lwz      r0, 0xc(r24)
	stw      r0, 0x1ac(r31)
	lwz      r0, 8(r24)
	stw      r0, 0x1b0(r31)
	lwz      r0, 0x10(r24)
	stw      r0, 0x1b4(r31)

lbl_80397498:
	lwz      r3, 0x1c(r24)
	mr       r4, r25
	bl       getScore__Q24Game9HighscoreFi
	cmpwi    r3, -1
	bne      lbl_803974BC
	lwz      r3, 0xa4(r23)
	li       r4, 1
	bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
	b        lbl_803974CC

lbl_803974BC:
	lwz      r3, 0x1c(r24)
	mr       r4, r25
	bl       getScore__Q24Game9HighscoreFi
	stw      r3, 0x1b8(r23)

lbl_803974CC:
	addi     r25, r25, 1
	addi     r23, r23, 4
	cmpwi    r25, 3
	blt      lbl_80397498
	lwz      r3, 0x1c(r24)
	lwz      r4, 0x14(r24)
	bl       entryScore__Q24Game9HighscoreFi
	stw      r3, 0x1e4(r31)
	lwz      r4, 0x18(r24)
	lwz      r3, 0x1a0(r31)
	addi     r4, r4, -1
	bl       getMsgID__Q28Morimura13TOffsetMsgSetFi
	lwz      r5, 0xc0(r31)
	stw      r4, 0x1c(r5)
	stw      r3, 0x18(r5)
	lwz      r4, 0x18(r24)
	lwz      r3, 0x1a0(r31)
	addi     r4, r4, -1
	bl       getMsgID__Q28Morimura13TOffsetMsgSetFi
	lwz      r5, 0xc4(r31)
	stw      r4, 0x1c(r5)
	stw      r3, 0x18(r5)
	mr       r3, r31
	bl       startDemo__Q28Morimura16TChallengeResultFv

lbl_8039752C:
	lis      r3, 0x000F4240@ha
	lwz      r6, 0x1b8(r31)
	addi     r0, r3, 0x000F4240@l
	cmplw    r6, r0
	blt      lbl_80397554
	addi     r3, r30, 0x130
	addi     r5, r30, 0x360
	li       r4, 0x6b1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80397554:
	lis      r3, 0x000F4240@ha
	lwz      r6, 0x1bc(r31)
	addi     r0, r3, 0x000F4240@l
	cmplw    r6, r0
	blt      lbl_8039757C
	addi     r3, r30, 0x130
	addi     r5, r30, 0x370
	li       r4, 0x6b2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039757C:
	lis      r3, 0x000F4240@ha
	lwz      r6, 0x1c0(r31)
	addi     r0, r3, 0x000F4240@l
	cmplw    r6, r0
	blt      lbl_803975A4
	addi     r3, r30, 0x130
	addi     r5, r30, 0x380
	li       r4, 0x6b3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803975A4:
	lis      r3, 0x000F4240@ha
	lwz      r6, 0x1a8(r31)
	addi     r0, r3, 0x000F4240@l
	cmplw    r6, r0
	blt      lbl_803975CC
	addi     r3, r30, 0x130
	addi     r5, r30, 0x390
	li       r4, 0x6b4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803975CC:
	lis      r3, 0x000186A0@ha
	lwz      r6, 0x1b0(r31)
	addi     r0, r3, 0x000186A0@l
	cmplw    r6, r0
	blt      lbl_803975F4
	addi     r3, r30, 0x130
	addi     r5, r30, 0x39c
	li       r4, 0x6b5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803975F4:
	lis      r3, 0x000186A0@ha
	lwz      r6, 0x1ac(r31)
	addi     r0, r3, 0x000186A0@l
	cmplw    r6, r0
	blt      lbl_8039761C
	addi     r3, r30, 0x130
	addi     r5, r30, 0x3ac
	li       r4, 0x6b6
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039761C:
	lwz      r6, 0x1b4(r31)
	cmplwi   r6, 0x2710
	blt      lbl_8039763C
	addi     r3, r30, 0x130
	addi     r5, r30, 0x3b8
	li       r4, 0x6b7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039763C:
	lbz      r0, 0x1c4(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80397674
	lis      r4, 0x315F3030@ha
	lwz      r3, 0xc8(r31)
	addi     r5, r4, 0x315F3030@l
	lis      r4, 0x00343836@ha
	stw      r5, 0x1c(r3)
	addi     r0, r4, 0x00343836@l
	stw      r0, 0x18(r3)
	lwz      r3, 0xcc(r31)
	stw      r5, 0x1c(r3)
	stw      r0, 0x18(r3)
	b        lbl_8039769C

lbl_80397674:
	lis      r4, 0x305F3030@ha
	lwz      r3, 0xc8(r31)
	addi     r5, r4, 0x305F3030@l
	lis      r4, 0x00343837@ha
	stw      r5, 0x1c(r3)
	addi     r0, r4, 0x00343837@l
	stw      r0, 0x18(r3)
	lwz      r3, 0xcc(r31)
	stw      r5, 0x1c(r3)
	stw      r0, 0x18(r3)

lbl_8039769C:
	lwz      r25, 0x80(r31)
	li       r24, 0
	lis      r4, 0x315F3030@ha
	lis      r3, 0x00343837@ha
	stb      r24, 0x24(r25)
	addi     r23, r1, 0x38
	addi     r27, r4, 0x315F3030@l
	addi     r26, r3, 0x00343837@l
	lfd      f2, 0x118(r30)
	lfd      f1, 0x120(r30)
	lfd      f0, 0x128(r30)
	stb      r24, mComplete__Q28Morimura16TChallengeResult@sda21(r13)
	stfd     f2, 0x38(r1)
	stfd     f1, 0x40(r1)
	stfd     f0, 0x48(r1)

lbl_803976D8:
	lwz      r3, 8(r25)
	lwz      r5, 0(r23)
	lwz      r12, 0(r3)
	lwz      r6, 4(r23)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	bne      lbl_80397710
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0xe0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80397710:
	stw      r27, 0x1c(r28)
	addi     r24, r24, 1
	cmpwi    r24, 3
	addi     r23, r23, 8
	stw      r26, 0x18(r28)
	blt      lbl_803976D8
	lbz      r3, 0x1c4(r31)
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_8039778C
	li       r25, 0
	mr       r23, r31

lbl_8039773C:
	lwz      r24, 0x18c(r23)
	li       r5, 0
	lwz      r4, mRedFlowerTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r3, 8(r24)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r24)
	li       r5, 0
	lwz      r4, mRedFlowerTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	addi     r25, r25, 1
	addi     r23, r23, 4
	cmpwi    r25, 5
	blt      lbl_8039773C
	b        lbl_803978A0

lbl_8039778C:
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_8039782C
	lwz      r25, 0x80(r31)
	li       r24, 0
	lis      r4, 0x325F3030@ha
	lis      r3, 0x00343837@ha
	stb      r24, 0x24(r25)
	li       r0, 1
	addi     r23, r1, 0x20
	addi     r27, r4, 0x325F3030@l
	lfd      f2, 0x118(r30)
	addi     r26, r3, 0x00343837@l
	lfd      f1, 0x120(r30)
	lfd      f0, 0x128(r30)
	stb      r0, mComplete__Q28Morimura16TChallengeResult@sda21(r13)
	stfd     f2, 0x20(r1)
	stfd     f1, 0x28(r1)
	stfd     f0, 0x30(r1)

lbl_803977D4:
	lwz      r3, 8(r25)
	lwz      r5, 0(r23)
	lwz      r12, 0(r3)
	lwz      r6, 4(r23)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	bne      lbl_8039780C
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0xe0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039780C:
	stw      r27, 0x1c(r28)
	addi     r24, r24, 1
	cmpwi    r24, 3
	addi     r23, r23, 8
	stw      r26, 0x18(r28)
	blt      lbl_803977D4
	li       r0, 1
	stb      r0, 0x1c5(r31)

lbl_8039782C:
	lbz      r3, 0x1c4(r31)
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_80397890
	li       r25, 0
	mr       r23, r31

lbl_80397840:
	lwz      r24, 0x18c(r23)
	li       r5, 0
	lwz      r4, mFlowerTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r3, 8(r24)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r24)
	li       r5, 0
	lwz      r4, mFlowerTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	addi     r25, r25, 1
	addi     r23, r23, 4
	cmpwi    r25, 5
	blt      lbl_80397840
	b        lbl_803978A0

lbl_80397890:
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_803978A0
	li       r0, 1
	stb      r0, 0x1c5(r31)

lbl_803978A0:
	lbz      r0, 0x1c5(r31)
	cmplwi   r0, 0
	bne      lbl_80397958
	lbz      r3, 0x1c4(r31)
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_80397958
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_80397958
	lwz      r25, 0x80(r31)
	li       r24, 0
	lis      r4, 0x325F3030@ha
	lis      r3, 0x00343837@ha
	stb      r24, 0x24(r25)
	li       r0, 1
	addi     r23, r1, 8
	addi     r27, r4, 0x325F3030@l
	lfd      f2, 0x118(r30)
	addi     r26, r3, 0x00343837@l
	lfd      f1, 0x120(r30)
	lfd      f0, 0x128(r30)
	stb      r0, mComplete__Q28Morimura16TChallengeResult@sda21(r13)
	stfd     f2, 8(r1)
	stfd     f1, 0x10(r1)
	stfd     f0, 0x18(r1)

lbl_80397900:
	lwz      r3, 8(r25)
	lwz      r5, 0(r23)
	lwz      r12, 0(r3)
	lwz      r6, 4(r23)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	bne      lbl_80397938
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0xe0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80397938:
	stw      r27, 0x1c(r28)
	addi     r24, r24, 1
	cmpwi    r24, 3
	addi     r23, r23, 8
	stw      r26, 0x18(r28)
	blt      lbl_80397900
	li       r0, 1
	stb      r0, 0x1c6(r31)

lbl_80397958:
	lbz      r0, mComplete__Q28Morimura16TChallengeResult@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80397978
	lwz      r3, 0x1a4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80397978:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	lmw      r23, 0x8c(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x803979A4
 * @note Size: 0x1250
 */
void TChallengeResult::updateDemo()
{
	switch (mDemoState) {
	case 1: {
		if (mCounter == 10) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_ONY_MOVE, 0);
			mOnyonMovePane[0]->mState   = 1;
			TMovePane* mpane            = mOnyonMovePane[0];
			mpane->mOffset.x            = mVecUnit[0]._00.x;
			mpane->mOffset.y            = mVecUnit[0]._00.y;
			mOnyonMovePane[0]->mCounter = 1;
			mOnyonMovePane[0]->_48      = 0;
		}
		if (mCounter == 30) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_ONY_MOVE, 0);
			mOnyonMovePane[1]->mState   = 1;
			TMovePane* mpane            = mOnyonMovePane[1];
			mpane->mOffset.x            = mVecUnit[1]._00.x;
			mpane->mOffset.y            = mVecUnit[1]._00.y;
			mOnyonMovePane[1]->mCounter = 1;
			mOnyonMovePane[1]->_48      = 1;
		}
		if (mCounter == 50) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_ONY_MOVE, 0);
			mOnyonMovePane[2]->mState   = 1;
			TMovePane* mpane            = mOnyonMovePane[2];
			mpane->mOffset.x            = mVecUnit[2]._00.x;
			mpane->mOffset.y            = mVecUnit[2]._00.y;
			mOnyonMovePane[2]->mCounter = 1;
			mOnyonMovePane[2]->_48      = 2;
		}

		bool check = true;
		for (int i = 0; i < 3; i++) {
			int id1 = mOnyonMovePane[i]->_48;
			int id2 = mOnyonMovePane[i]->mState;
			P2ASSERTBOUNDSLINE(1813, 0, id1, 3);
			if (mResultCounters[id1]->checkState(2) == false) {
				TMovePane* mpane = mOnyonMovePane[i];
				if (mpane->mCounter > 0) {
					if (id2 == 0) {
						mpane->mState = 2;
						id2           = mResultCounters[id1]->mDigits;
						f32 x         = mVecUnit[id1]._00.x;
						f32 y         = (f32)id2 / (f32)mResultCounters[id1]->_18;
						if (id2 == 1) {
							y += 0.05f;
						}
						f32 y2 = y + 0.1f;
						if (y + 0.1f > 1.0f) {
							y2 = 1.0f;
						}
						mOnyonMovePane[i]->mOffset  = Vector2f(mVecUnit[id1]._08.y, -((x - mVecUnit[id1]._08.x) * y2 - x));
						mOnyonMovePane[i]->mCounter = 1;
					} else if (id2 == 2) {
						if (FABS(mpane->getAngDist()) < 0.05f) {
							if (60.0f / mDemoSpeedUpRate > (f32)mOnyonMovePane[i]->mCounter) {
								mOnyonMovePane[i]->mState = 1;
								PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_SCORE_S, 0);
								int calc                     = (f32)_1DC / mDemoSpeedUpRate;
								TChallengeResultCounter* ctr = mResultCounters[id1];
								ctr->_20                     = calc;
								ctr->_1C                     = calc;
							}
						}
					}
				}
				check = false;
			} else {
				switch (id1) {
				case 0:
					mCounter3->start();
					break;
				case 1:
					mCounter5->start();
					break;
				case 2:
					mCounter4->start();
					break;
				}
			}
			if (i == _1E8 && mOnyonMovePane[i]->_48 != 3) {
				mOnyonMovePane[i]->mState = 1;
				PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_SCORE_L, 0);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_INCREMENT, 0);
				mOnyonMovePane[i]->mOffset.x = mVecUnit[3]._00.x;
				mOnyonMovePane[i]->mOffset.y = mVecUnit[3]._00.y;
				mOnyonMovePane[i]->mCounter  = 1;
				mOnyonMovePane[i]->_48       = 3;
			}
		}
		if (check) {
			if (mResultCounters[3]->mState == 2) {
				mCounter1->start();
				if (mRankInSlot >= 0) {
					mDemoState = 2;
					int test   = randFloat() * 6.0f;
					if (test >= 5) {
						test = 5;
					}
					int id                       = cRandArray[test * 3];
					mOnyonMovePane[id]->mOffset  = mVecUnit[3]._00;
					mOnyonMovePane[id]->mState   = 1;
					mOnyonMovePane[id]->mCounter = 1;

					int id2 = mResultCounters[3]->mDigits;
					f32 x   = mVecUnit[id]._00.x;
					f32 y   = (f32)id2 / (f32)mResultCounters[3]->_18;
					if (id2 == 1) {
						y += 0.05f;
					}
					f32 y2 = y + 0.1f;
					if (y + 0.1f > 1.0f) {
						y2 = 1.0f;
					}
					mOnyonMovePane[id]->mOffset  = Vector2f(mVecUnit[id]._08.y, -((x - mVecUnit[3]._08.x) * y2 - x));
					mOnyonMovePane[id]->mState   = 1;
					mOnyonMovePane[id]->mCounter = 1;
					mOnyonMovePane[cRandArray[id + 1]]->start();
				} else {
					changeAnimDemo();
				}
			}
		} else {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_SCOREROLL, 0);
		}
		break;
	}
	case 2: {
		bool check = true;
		for (int i = 0; i < 3; i++) {
			if (mOnyonMovePane[i]->mCounter && mOnyonMovePane[i]->mState) {
				check = false;
			}
		}
		if (check) {
			for (int i = 0; i < 3; i++) {
				TMovePane* mpane = mOnyonMovePane[i];
				if (mpane->mCounter) {
					int state = mpane->mState;
					if (state == 0) {
						mpane->mState              = 2;
						mOnyonMovePane[i]->mOffset = Vector2f(mVecUnit[3]._00.x, mVecUnit[3]._00.y + 300.0f);
					}
					if (state != 2) {
						if (FABS(mOnyonMovePane[i]->getAngDist()) > 0.01f) {
							check = false;
						}
					}
				}
			}
		}
		if (check) {
			for (int i = 0; i < 3; i++) {
				mOnyonMovePane[i]->startStick(mCounter1->mCounterDigits[0]->mPicture);
			}
			PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_ONY_MOVE, 0);
			mDemoState = 3;
			startRankInDemo();
		}
		break;
	}
	case 3: {
		if (mMoveTimer > 550.0f) {
			f32 test = 0.0f;
			int id   = 0;
			for (int i = 0; i < 3; i++) {
				if (mOnyonMovePane[i]->mCounter > 0) {
					f32 test2 = mOnyonMovePane[i]->mPaneGoal.y;
					if (test2 >= 0.0f) {
						id   = i;
						test = test2;
					}
				}
			}
			for (int i = 0; i < 3; i++) {
				if (mOnyonMovePane[i]->mCounter > 0) {
					P2ASSERTLINE(1977, mRankInSlot >= 0);

					J2DPicture* pic  = mHighScoreCounter[mRankInSlot]->mCounterDigits[0]->mPicture;
					TMovePane* mpane = mOnyonMovePane[i];
					f32 x            = _168._00.x + pic->mGlobalMtx[1][3];
					mpane->mOffset   = Vector2f(x, pic->mGlobalMtx[0][3] - 1000.0f);
					mpane->mAngle    = roundAng(mpane->mAngle + mpane->getAngDist());
					if (i == id) {
						mOnyonMovePane[i]->mOffset = Vector2f(x, _168._00.y + pic->mGlobalMtx[1][3]);
					} else {
						int id2 = mResultCounters[3]->mDigits;
						f32 y   = (f32)id2 / (f32)mResultCounters[3]->_18;
						if (id2 == 1) {
							y += 0.05f;
						}
						f32 y2 = y + 0.1f;
						if (y + 0.1f > 1.0f) {
							y2 = 1.0f;
						}
						mOnyonMovePane[i]->mOffset  = Vector2f(x, _168._08.x * y2 + pic->mGlobalMtx[0][3]);
						mOnyonMovePane[i]->mCounter = 1;
					}
					mOnyonMovePane[i]->startStick(pic);
					mOnyonMovePane[i]->mCounter = 0;
				}
			}
		}
		if (mFlags[3]) {
			f32 calc[3] = { 1.0f, 0.9f, 0.8f };
			P2ASSERTLINE(2002, mRankInSlot >= 0);
			mHighScoreCounter[mRankInSlot]->createKiraEffect(calc[mRankInSlot], mResultCounters[3]->mDigits);
			changeAnimDemo();
		}
		break;
	}
	case 4: {
		for (int i = 0; i < 3; i++) {
			TMovePane* mpane = mOnyonMovePane[i];
			if (mpane->mState == 0) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_ONY_SPIN, 0);
				mOnyonMovePane[i]->mState   = 5;
				mOnyonMovePane[i]->mCounter = 1;
			} else if (mpane->mState == 5) {
				if ((f32)mpane->mCounter > 50.0f / mDemoSpeedUpRate) {
					int id      = mpane->_44;
					bool enable = false;
					if (mFlags[0] & 4) {
						enable = true;
					}
					mClearTexture[id]->changeTexture(enable);
					PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_FLOWER, 0);

					Vector2f pos;
					mClearTexture[id]->getEffectPosition(pos);
					efx2d::Arg arg(pos);
					efx2d::T2DChangesmoke efx;
					efx.create(&arg);
					TClearTexture* tex = mClearTexture[3];
					if (tex->_00 == 0) {
						Vector2f test;
						tex->getPosition(test);
						mClearTexture[4]->_00            = 1;
						mOnyonMovePane[i]->mPanePosition = test;
						mOnyonMovePane[i]->mCounter      = 3;
						mOnyonMovePane[i]->mState        = 1;
					} else {
						tex = mClearTexture[4];
						if (tex->_00 == 0) {
							Vector2f test;
							tex->getPosition(test);
							mClearTexture[4]->_00            = 1;
							mOnyonMovePane[i]->mPanePosition = test;
							mOnyonMovePane[i]->mCounter      = 3;
							mOnyonMovePane[i]->mState        = 1;
						} else {
							mOnyonMovePane[i]->start();
							mDemoState = 5;
						}
					}
				}
			}
		}
		break;
	}
	case 5: {
		bool check = true;
		for (int i = 0; i < 3; i++) {
			TMovePane* mpane = mOnyonMovePane[i];
			if (mpane->mCounter) {
				check = false;
				if (mpane->mState == 0) {
					PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_ONY_SPIN, 0);
					mOnyonMovePane[i]->mState   = 5;
					mOnyonMovePane[i]->mCounter = 1;
				} else if (mpane->mState == 5) {
					if ((f32)mpane->mCounter > 50.0f / mDemoSpeedUpRate) {
						int id      = mpane->_44;
						bool enable = false;
						if (mFlags[0] & 4) {
							enable = true;
						}
						mClearTexture[id]->changeTexture(enable);
						PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_FLOWER, 0);

						Vector2f pos;
						mClearTexture[id]->getEffectPosition(pos);
						efx2d::Arg arg(pos);
						efx2d::T2DChangesmoke efx;
						efx.create(&arg);
						mOnyonMovePane[i]->start();
					}
				}
			}
		}
		if (check) {
			mDemoState = 6;
		}
		break;
	}
	case 6: {
		if (mRankInSlot >= 0 && mResultScreen->isRandAnimStart()) {
			mCounter1->mEnabled                      = true;
			mHighScoreCounter[mRankInSlot]->mEnabled = true;
		}
		break;
	}
	}
	mCounter++;
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stmw     r24, 0x120(r1)
	mr       r31, r3
	lis      r3, lbl_80494720@ha
	lwz      r0, 0x1c8(r31)
	addi     r30, r3, lbl_80494720@l
	cmpwi    r0, 4
	beq      lbl_803985A8
	bge      lbl_803979F8
	cmpwi    r0, 2
	beq      lbl_80397FF4
	bge      lbl_803981CC
	cmpwi    r0, 1
	bge      lbl_80397A08
	b        lbl_80398BC4

lbl_803979F8:
	cmpwi    r0, 6
	beq      lbl_80398B88
	bge      lbl_80398BC4
	b        lbl_8039891C

lbl_80397A08:
	lwz      r0, 0x1d0(r31)
	cmpwi    r0, 0xa
	bne      lbl_80397A58
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x182c
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, 0xd8(r31)
	li       r4, 1
	li       r0, 0
	stw      r4, 0x3c(r3)
	lwz      r3, 0xd8(r31)
	lfs      f0, 0x128(r31)
	stfs     f0, 8(r3)
	lfs      f0, 0x12c(r31)
	stfs     f0, 0xc(r3)
	lwz      r3, 0xd8(r31)
	stw      r4, 0x40(r3)
	lwz      r3, 0xd8(r31)
	stw      r0, 0x48(r3)

lbl_80397A58:
	lwz      r0, 0x1d0(r31)
	cmpwi    r0, 0x1e
	bne      lbl_80397AA4
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x182c
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, 0xdc(r31)
	li       r0, 1
	stw      r0, 0x3c(r3)
	lwz      r3, 0xdc(r31)
	lfs      f0, 0x138(r31)
	stfs     f0, 8(r3)
	lfs      f0, 0x13c(r31)
	stfs     f0, 0xc(r3)
	lwz      r3, 0xdc(r31)
	stw      r0, 0x40(r3)
	lwz      r3, 0xdc(r31)
	stw      r0, 0x48(r3)

lbl_80397AA4:
	lwz      r0, 0x1d0(r31)
	cmpwi    r0, 0x32
	bne      lbl_80397AF4
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x182c
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, 0xe0(r31)
	li       r4, 1
	li       r0, 2
	stw      r4, 0x3c(r3)
	lwz      r3, 0xe0(r31)
	lfs      f0, 0x148(r31)
	stfs     f0, 8(r3)
	lfs      f0, 0x14c(r31)
	stfs     f0, 0xc(r3)
	lwz      r3, 0xe0(r31)
	stw      r4, 0x40(r3)
	lwz      r3, 0xe0(r31)
	stw      r0, 0x48(r3)

lbl_80397AF4:
	mr       r28, r31
	li       r26, 1
	li       r25, 0

lbl_80397B00:
	lwz      r3, 0xd8(r28)
	li       r0, 0
	lwz      r29, 0x48(r3)
	lwz      r24, 0x3c(r3)
	cmpwi    r29, 3
	bgt      lbl_80397B24
	cmpwi    r29, 0
	blt      lbl_80397B24
	li       r0, 1

lbl_80397B24:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80397B40
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x715
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80397B40:
	slwi     r3, r29, 2
	addi     r27, r3, 0x17c
	lwzx     r3, r31, r27
	lwz      r0, 8(r3)
	subfic   r0, r0, 2
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_80397D28
	lwz      r26, 0xd8(r28)
	lwz      r0, 0x40(r26)
	cmpwi    r0, 0
	ble      lbl_80397D20
	cmpwi    r24, 0
	bne      lbl_80397C20
	li       r0, 2
	lis      r3, 0x4330
	stw      r0, 0x3c(r26)
	slwi     r0, r29, 4
	add      r5, r31, r0
	lfd      f2, lbl_8051F0D0@sda21(r2)
	lwzx     r4, r31, r27
	stw      r3, 0x100(r1)
	lwz      r6, 0x10(r4)
	lwz      r0, 0x18(r4)
	xoris    r4, r6, 0x8000
	stw      r3, 0x108(r1)
	xoris    r0, r0, 0x8000
	lfs      f3, 0x128(r5)
	stw      r4, 0x104(r1)
	cmpwi    r6, 1
	lfs      f0, 0x130(r5)
	stw      r0, 0x10c(r1)
	lfd      f1, 0x100(r1)
	fsubs    f4, f3, f0
	lfd      f0, 0x108(r1)
	fsubs    f1, f1, f2
	fsubs    f0, f0, f2
	fdivs    f2, f1, f0
	bne      lbl_80397BE4
	lfs      f0, lbl_8051F0A8@sda21(r2)
	fadds    f2, f2, f0

lbl_80397BE4:
	lfs      f1, lbl_8051F0A4@sda21(r2)
	lfs      f0, lbl_8051F0BC@sda21(r2)
	fadds    f2, f2, f1
	fcmpo    cr0, f2, f0
	ble      lbl_80397BFC
	fmr      f2, f0

lbl_80397BFC:
	fnmsubs  f0, f4, f2, f3
	lfs      f1, 0x134(r5)
	lwz      r3, 0xd8(r28)
	li       r0, 1
	stfs     f0, 8(r3)
	stfs     f1, 0xc(r3)
	lwz      r3, 0xd8(r28)
	stw      r0, 0x40(r3)
	b        lbl_80397D20

lbl_80397C20:
	cmpwi    r24, 2
	bne      lbl_80397D20
	lfs      f2, 8(r26)
	lfs      f1, 0x18(r26)
	lfs      f0, lbl_8051F084@sda21(r2)
	fsubs    f1, f2, f1
	fcmpu    cr0, f0, f1
	bne      lbl_80397C44
	lfs      f1, lbl_8051F0A4@sda21(r2)

lbl_80397C44:
	lfs      f3, 0xc(r26)
	lfs      f2, 0x1c(r26)
	lfs      f0, lbl_8051F084@sda21(r2)
	fsubs    f2, f3, f2
	fcmpu    cr0, f0, f2
	bne      lbl_80397C60
	lfs      f2, lbl_8051F0A4@sda21(r2)

lbl_80397C60:
	fneg     f2, f2
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lfs      f2, 0x38(r26)
	bl       angDist__Fff
	fabs     f1, f1
	lfs      f0, lbl_8051F0A8@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80397D20
	lfs      f1, lbl_8051F154@sda21(r2)
	lis      r0, 0x4330
	lfs      f0, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r3, 0xd8(r28)
	fdivs    f0, f1, f0
	stw      r0, 0x108(r1)
	lwz      r0, 0x40(r3)
	lfd      f2, lbl_8051F0D0@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0x10c(r1)
	lfd      f1, 0x108(r1)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_80397D20
	li       r0, 1
	li       r4, 0x182e
	stw      r0, 0x3c(r3)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lha      r3, 0x1dc(r31)
	lis      r0, 0x4330
	stw      r0, 0x108(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, lbl_8051F0D0@sda21(r2)
	stw      r0, 0x10c(r1)
	lfs      f0, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	lfd      f1, 0x108(r1)
	lwzx     r3, r31, r27
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x100(r1)
	lwz      r0, 0x104(r1)
	stw      r0, 0x20(r3)
	stw      r0, 0x1c(r3)

lbl_80397D20:
	li       r26, 0
	b        lbl_80397E18

lbl_80397D28:
	cmpwi    r29, 1
	beq      lbl_80397D6C
	bge      lbl_80397D40
	cmpwi    r29, 0
	bge      lbl_80397D4C
	b        lbl_80397DA8

lbl_80397D40:
	cmpwi    r29, 3
	bge      lbl_80397DA8
	b        lbl_80397D8C

lbl_80397D4C:
	lwz      r3, 0x98(r31)
	lbz      r0, 0xb1(r3)
	cmplwi   r0, 0
	bne      lbl_80397DA8
	li       r0, 1
	stb      r0, 0xb0(r3)
	stb      r0, 0xb1(r3)
	b        lbl_80397DA8

lbl_80397D6C:
	lwz      r3, 0xa0(r31)
	lbz      r0, 0xb1(r3)
	cmplwi   r0, 0
	bne      lbl_80397DA8
	li       r0, 1
	stb      r0, 0xb0(r3)
	stb      r0, 0xb1(r3)
	b        lbl_80397DA8

lbl_80397D8C:
	lwz      r3, 0x9c(r31)
	lbz      r0, 0xb1(r3)
	cmplwi   r0, 0
	bne      lbl_80397DA8
	li       r0, 1
	stb      r0, 0xb0(r3)
	stb      r0, 0xb1(r3)

lbl_80397DA8:
	lbz      r0, 0x1e8(r31)
	cmpw     r25, r0
	bne      lbl_80397E18
	lwz      r3, 0xd8(r28)
	lwz      r0, 0x48(r3)
	cmpwi    r0, 3
	beq      lbl_80397E18
	li       r0, 1
	li       r4, 0x182f
	stw      r0, 0x3c(r3)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1828
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, 0xd8(r28)
	li       r4, 1
	lfs      f0, 0x158(r31)
	li       r0, 3
	stfs     f0, 8(r3)
	lfs      f0, 0x15c(r31)
	stfs     f0, 0xc(r3)
	lwz      r3, 0xd8(r28)
	stw      r4, 0x40(r3)
	lwz      r3, 0xd8(r28)
	stw      r0, 0x48(r3)

lbl_80397E18:
	addi     r25, r25, 1
	addi     r28, r28, 4
	cmpwi    r25, 3
	blt      lbl_80397B00
	clrlwi.  r0, r26, 0x18
	beq      lbl_80397FE0
	lwz      r3, 0x188(r31)
	lwz      r0, 8(r3)
	cmpwi    r0, 2
	bne      lbl_80398BC4
	lwz      r3, 0x90(r31)
	lbz      r0, 0xb1(r3)
	cmplwi   r0, 0
	bne      lbl_80397E5C
	li       r0, 1
	stb      r0, 0xb0(r3)
	stb      r0, 0xb1(r3)

lbl_80397E5C:
	lwz      r0, 0x1e4(r31)
	cmpwi    r0, 0
	blt      lbl_80397FD4
	li       r0, 2
	stw      r0, 0x1c8(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x10c(r1)
	lfd      f3, lbl_8051F0D0@sda21(r2)
	stw      r0, 0x108(r1)
	lfs      f1, lbl_8051F0E0@sda21(r2)
	lfd      f2, 0x108(r1)
	lfs      f0, lbl_8051F134@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x100(r1)
	lwz      r0, 0x104(r1)
	cmpwi    r0, 5
	blt      lbl_80397EB8
	li       r0, 5

lbl_80397EB8:
	mulli    r6, r0, 0xc
	lis      r0, 0x4330
	addi     r3, r30, 0x14
	lfs      f0, 0x158(r31)
	li       r4, 1
	stw      r0, 0x110(r1)
	lwzx     r3, r3, r6
	stw      r0, 0x118(r1)
	slwi     r0, r3, 2
	lfd      f2, lbl_8051F0D0@sda21(r2)
	add      r5, r31, r0
	lwz      r3, 0xd8(r5)
	stfs     f0, 8(r3)
	lfs      f0, 0x15c(r31)
	stfs     f0, 0xc(r3)
	lwz      r3, 0xd8(r5)
	stw      r4, 0x3c(r3)
	lwz      r3, 0xd8(r5)
	stw      r4, 0x40(r3)
	lwz      r3, 0x188(r31)
	lfs      f3, 0x158(r31)
	lwz      r4, 0x10(r3)
	lwz      r0, 0x18(r3)
	xoris    r3, r4, 0x8000
	lfs      f0, 0x160(r31)
	xoris    r0, r0, 0x8000
	stw      r3, 0x114(r1)
	cmpwi    r4, 1
	fsubs    f4, f3, f0
	stw      r0, 0x11c(r1)
	lfd      f1, 0x110(r1)
	lfd      f0, 0x118(r1)
	fsubs    f1, f1, f2
	fsubs    f0, f0, f2
	fdivs    f2, f1, f0
	bne      lbl_80397F50
	lfs      f0, lbl_8051F0A8@sda21(r2)
	fadds    f2, f2, f0

lbl_80397F50:
	lfs      f1, lbl_8051F0A4@sda21(r2)
	lfs      f0, lbl_8051F0BC@sda21(r2)
	fadds    f2, f2, f1
	fcmpo    cr0, f2, f0
	ble      lbl_80397F68
	fmr      f2, f0

lbl_80397F68:
	addi     r0, r30, 0x14
	fnmsubs  f0, f4, f2, f3
	add      r3, r0, r6
	lfs      f1, 0x164(r31)
	lwz      r0, 4(r3)
	li       r5, 1
	lwz      r3, 8(r3)
	slwi     r4, r0, 2
	li       r0, 0
	add      r6, r31, r4
	slwi     r3, r3, 2
	lwz      r4, 0xd8(r6)
	add      r3, r31, r3
	stfs     f0, 8(r4)
	stfs     f1, 0xc(r4)
	lwz      r4, 0xd8(r6)
	stw      r5, 0x3c(r4)
	lwz      r4, 0xd8(r6)
	stw      r5, 0x40(r4)
	lwz      r3, 0xd8(r3)
	stw      r5, 0x3c(r3)
	lfs      f0, 0x10(r3)
	stfs     f0, 8(r3)
	lfs      f0, 0x14(r3)
	stfs     f0, 0xc(r3)
	stw      r0, 0x40(r3)
	b        lbl_80398BC4

lbl_80397FD4:
	mr       r3, r31
	bl       changeAnimDemo__Q28Morimura16TChallengeResultFv
	b        lbl_80398BC4

lbl_80397FE0:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1031
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80398BC4

lbl_80397FF4:
	mr       r3, r31
	li       r5, 1
	li       r6, 0
	b        lbl_8039802C

lbl_80398004:
	lwz      r4, 0xd8(r3)
	lwz      r0, 0x40(r4)
	cmpwi    r0, 0
	beq      lbl_80398024
	lwz      r0, 0x3c(r4)
	cmpwi    r0, 0
	beq      lbl_80398024
	li       r5, 0

lbl_80398024:
	addi     r3, r3, 4
	addi     r6, r6, 1

lbl_8039802C:
	cmpwi    r6, 3
	bgt      lbl_80398004
	clrlwi.  r0, r5, 0x18
	mr       r26, r5
	beq      lbl_80398118
	li       r27, 0
	mr       r24, r31

lbl_80398048:
	lwz      r3, 0xd8(r24)
	lwz      r0, 0x40(r3)
	cmpwi    r0, 0
	beq      lbl_80398108
	lwz      r4, 0x3c(r3)
	cmpwi    r4, 0
	bne      lbl_80398088
	li       r0, 2
	lfs      f0, lbl_8051F158@sda21(r2)
	stw      r0, 0x3c(r3)
	lfs      f1, 0x158(r31)
	lfs      f2, 0x15c(r31)
	fadds    f1, f1, f0
	lwz      r3, 0xd8(r24)
	stfs     f1, 8(r3)
	stfs     f2, 0xc(r3)

lbl_80398088:
	cntlzw   r0, r4
	rlwinm   r0, r0, 0x1b, 0x18, 0x1f
	cmplwi   r0, 2
	beq      lbl_80398104
	lwz      r25, 0xd8(r24)
	lfs      f0, lbl_8051F084@sda21(r2)
	lfs      f2, 8(r25)
	lfs      f1, 0x18(r25)
	fsubs    f1, f2, f1
	fcmpu    cr0, f0, f1
	bne      lbl_803980B8
	lfs      f1, lbl_8051F0A4@sda21(r2)

lbl_803980B8:
	lfs      f3, 0xc(r25)
	lfs      f2, 0x1c(r25)
	lfs      f0, lbl_8051F084@sda21(r2)
	fsubs    f2, f3, f2
	fcmpu    cr0, f0, f2
	bne      lbl_803980D4
	lfs      f2, lbl_8051F0A4@sda21(r2)

lbl_803980D4:
	fneg     f2, f2
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lfs      f2, 0x38(r25)
	bl       angDist__Fff
	fabs     f1, f1
	lfs      f0, lbl_8051F0B0@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80398108

lbl_80398104:
	li       r26, 0

lbl_80398108:
	addi     r27, r27, 1
	addi     r24, r24, 4
	cmpwi    r27, 3
	blt      lbl_80398048

lbl_80398118:
	clrlwi.  r0, r26, 0x18
	beq      lbl_80398BC4
	li       r27, 0
	mr       r25, r31

lbl_80398128:
	lwz      r26, 0xd8(r25)
	lwz      r0, 0x40(r26)
	cmpwi    r0, 0
	ble      lbl_80398198
	lwz      r3, 0x94(r31)
	li       r0, 4
	lwz      r3, 0x7c(r3)
	lwz      r3, 0(r3)
	lwz      r24, 0(r3)
	cmplwi   r24, 0
	stw      r0, 0x3c(r26)
	bne      lbl_8039816C
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x1d7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039816C:
	stw      r24, 4(r26)
	lwz      r3, 4(r26)
	lfs      f1, 0x18(r26)
	lfs      f0, 0x8c(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x30(r26)
	lwz      r3, 4(r26)
	lfs      f1, 0x1c(r26)
	lfs      f0, 0x9c(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x34(r26)

lbl_80398198:
	addi     r27, r27, 1
	addi     r25, r25, 4
	cmpwi    r27, 3
	blt      lbl_80398128
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x182c
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x1c8(r31)
	bl       startRankInDemo__Q28Morimura16TChallengeResultFv
	b        lbl_80398BC4

lbl_803981CC:
	lfs      f1, 0x178(r31)
	lfs      f0, lbl_8051F15C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80398440
	lwz      r3, 0xd8(r31)
	li       r25, 0
	lfs      f1, lbl_8051F084@sda21(r2)
	lwz      r0, 0x40(r3)
	cmpwi    r0, 0
	ble      lbl_80398208
	lfs      f0, 0x18(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80398208
	li       r25, 0
	fmr      f1, f0

lbl_80398208:
	lwz      r3, 0xdc(r31)
	lwz      r0, 0x40(r3)
	cmpwi    r0, 0
	ble      lbl_8039822C
	lfs      f0, 0x18(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_8039822C
	li       r25, 1
	fmr      f1, f0

lbl_8039822C:
	lwz      r3, 0xe0(r31)
	lwz      r0, 0x40(r3)
	cmpwi    r0, 0
	ble      lbl_8039824C
	lfs      f0, 0x18(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_8039824C
	li       r25, 2

lbl_8039824C:
	li       r26, 0
	mr       r28, r31

lbl_80398254:
	lwz      r3, 0xd8(r28)
	lwz      r0, 0x40(r3)
	cmpwi    r0, 0
	ble      lbl_80398430
	lwz      r0, 0x1e4(r31)
	cmpwi    r0, 0
	bge      lbl_80398284
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x7b9
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80398284:
	lwz      r0, 0x1e4(r31)
	lfs      f3, lbl_8051F138@sda21(r2)
	slwi     r3, r0, 2
	lfs      f2, 0x16c(r31)
	addi     r0, r3, 0xb0
	lwz      r4, 0xd8(r28)
	lwzx     r3, r31, r0
	lfs      f0, lbl_8051F084@sda21(r2)
	lwz      r3, 0x7c(r3)
	lwz      r3, 0(r3)
	lwz      r29, 0(r3)
	lfs      f4, 0x8c(r29)
	lfs      f1, 0x9c(r29)
	fsubs    f3, f4, f3
	fadds    f31, f2, f1
	stfs     f3, 8(r4)
	stfs     f31, 0xc(r4)
	lwz      r27, 0xd8(r28)
	lfs      f2, 8(r27)
	lfs      f1, 0x18(r27)
	fsubs    f1, f2, f1
	fcmpu    cr0, f0, f1
	bne      lbl_803982E4
	lfs      f1, lbl_8051F0A4@sda21(r2)

lbl_803982E4:
	lfs      f3, 0xc(r27)
	lfs      f2, 0x1c(r27)
	lfs      f0, lbl_8051F084@sda21(r2)
	fsubs    f2, f3, f2
	fcmpu    cr0, f0, f2
	bne      lbl_80398300
	lfs      f2, lbl_8051F0A4@sda21(r2)

lbl_80398300:
	fneg     f2, f2
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lfs      f2, 0x38(r27)
	bl       angDist__Fff
	lfs      f0, 0x38(r27)
	fadds    f1, f0, f1
	bl       roundAng__Ff
	cmpw     r26, r25
	stfs     f1, 0x38(r27)
	bne      lbl_80398350
	lfs      f1, 0x168(r31)
	lfs      f0, 0x8c(r29)
	lwz      r3, 0xd8(r28)
	fadds    f0, f1, f0
	stfs     f0, 0x18(r3)
	stfs     f31, 0x1c(r3)
	b        lbl_803983D0

lbl_80398350:
	lwz      r4, 0x188(r31)
	lis      r3, 0x4330
	stw      r3, 0x118(r1)
	lwz      r5, 0x10(r4)
	lwz      r0, 0x18(r4)
	xoris    r4, r5, 0x8000
	stw      r3, 0x110(r1)
	xoris    r0, r0, 0x8000
	lfd      f2, lbl_8051F0D0@sda21(r2)
	stw      r4, 0x11c(r1)
	cmpwi    r5, 1
	stw      r0, 0x114(r1)
	lfd      f1, 0x118(r1)
	lfd      f0, 0x110(r1)
	fsubs    f1, f1, f2
	fsubs    f0, f0, f2
	fdivs    f2, f1, f0
	bne      lbl_803983A0
	lfs      f0, lbl_8051F0A8@sda21(r2)
	fadds    f2, f2, f0

lbl_803983A0:
	lfs      f1, lbl_8051F0A4@sda21(r2)
	lfs      f0, lbl_8051F0BC@sda21(r2)
	fadds    f2, f2, f1
	fcmpo    cr0, f2, f0
	ble      lbl_803983B8
	fmr      f2, f0

lbl_803983B8:
	lfs      f1, 0x170(r31)
	lfs      f0, 0x8c(r29)
	lwz      r3, 0xd8(r28)
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x18(r3)
	stfs     f31, 0x1c(r3)

lbl_803983D0:
	lwz      r27, 0xd8(r28)
	li       r0, 4
	cmplwi   r29, 0
	stw      r0, 0x3c(r27)
	bne      lbl_803983F8
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x1d7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803983F8:
	stw      r29, 4(r27)
	li       r0, 0
	lwz      r3, 4(r27)
	lfs      f1, 0x18(r27)
	lfs      f0, 0x8c(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x30(r27)
	lwz      r3, 4(r27)
	lfs      f1, 0x1c(r27)
	lfs      f0, 0x9c(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x34(r27)
	lwz      r3, 0xd8(r28)
	stw      r0, 0x40(r3)

lbl_80398430:
	addi     r26, r26, 1
	addi     r28, r28, 4
	cmpwi    r26, 3
	blt      lbl_80398254

lbl_80398440:
	lbz      r0, 0x1c7(r31)
	cmplwi   r0, 0
	beq      lbl_80398BC4
	lwz      r0, 0x1e4(r31)
	lwz      r4, 0x3c4(r30)
	lwz      r3, 0x3c8(r30)
	cmpwi    r0, 0
	lwz      r0, 0x3cc(r30)
	stw      r4, 0xf4(r1)
	stw      r3, 0xf8(r1)
	stw      r0, 0xfc(r1)
	bge      lbl_80398484
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x7d2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80398484:
	lwz      r0, 0x1e4(r31)
	li       r27, 0
	lwz      r6, 0x188(r31)
	lis      r3, __vt__Q25efx2d3Arg@ha
	slwi     r0, r0, 2
	addi     r5, r1, 0xf4
	add      r4, r31, r0
	lwz      r24, 0x10(r6)
	lfsx     f30, r5, r0
	mr       r29, r27
	lwz      r28, 0xb0(r4)
	addi     r25, r3, __vt__Q25efx2d3Arg@l
	lfs      f31, lbl_8051F0B4@sda21(r2)
	b        lbl_80398594

lbl_803984BC:
	lwz      r3, 0x7c(r28)
	lwzx     r3, r3, r29
	lwz      r26, 0(r3)
	cmplwi   r26, 0
	bne      lbl_803984E4
	addi     r3, r30, 0x130
	addi     r5, r30, 0x148
	li       r4, 0x255
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803984E4:
	mr       r3, r26
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	mr       r4, r26
	addi     r3, r1, 0xa4
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x28(r26)
	mr       r4, r26
	lfs      f0, 0x20(r26)
	addi     r3, r1, 0xb0
	lfs      f2, 0xa4(r1)
	li       r5, 0
	fsubs    f0, f1, f0
	fmadds   f0, f31, f0, f2
	stfs     f0, 8(r1)
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x2c(r26)
	addi     r4, r1, 0x98
	lfs      f0, 0x24(r26)
	lwz      r0, 8(r1)
	fsubs    f0, f1, f0
	lfs      f1, 0xb4(r1)
	stw      r0, 0x10(r1)
	fmadds   f1, f31, f0, f1
	lfs      f0, 0x10(r1)
	stw      r25, 0xa0(r1)
	stfs     f1, 0xc(r1)
	lwz      r0, 0xc(r1)
	stfs     f0, 0x98(r1)
	stw      r0, 0x14(r1)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x9c(r1)
	lwz      r3, 0xac(r28)
	lwzx     r3, r3, r29
	stfs     f30, 0x14(r3)
	lwz      r3, 0xac(r28)
	lwzx     r3, r3, r29
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 4
	addi     r27, r27, 1

lbl_80398594:
	cmpw     r27, r24
	blt      lbl_803984BC
	mr       r3, r31
	bl       changeAnimDemo__Q28Morimura16TChallengeResultFv
	b        lbl_80398BC4

lbl_803985A8:
	li       r25, 0
	mr       r28, r31

lbl_803985B0:
	lwz      r4, 0xd8(r28)
	lwz      r0, 0x3c(r4)
	cmpwi    r0, 0
	bne      lbl_803985EC
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x182d
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, 0xd8(r28)
	li       r4, 5
	li       r0, 1
	stw      r4, 0x3c(r3)
	lwz      r3, 0xd8(r28)
	stw      r0, 0x40(r3)
	b        lbl_80398908

lbl_803985EC:
	cmpwi    r0, 5
	bne      lbl_80398908
	lfs      f1, lbl_8051F0C4@sda21(r2)
	lis      r0, 0x4330
	lfs      f0, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r3, 0x40(r4)
	fdivs    f0, f1, f0
	stw      r0, 0x118(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, lbl_8051F0D0@sda21(r2)
	stw      r0, 0x11c(r1)
	lfd      f1, 0x118(r1)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_80398908
	lbz      r0, 0x1c4(r31)
	li       r5, 0
	lwz      r3, 0x44(r4)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_80398640
	li       r5, 1

lbl_80398640:
	slwi     r3, r3, 2
	clrlwi.  r0, r5, 0x18
	addi     r24, r3, 0x18c
	lwzx     r26, r31, r24
	beq      lbl_80398690
	lwz      r3, 8(r26)
	li       r5, 0
	lwz      r4, mRedFlowerTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r26)
	li       r5, 0
	lwz      r4, mRedFlowerTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	b        lbl_803986C8

lbl_80398690:
	lwz      r3, 8(r26)
	li       r5, 0
	lwz      r4, mFlowerTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r26)
	li       r5, 0
	lwz      r4, mFlowerTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl

lbl_803986C8:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1830
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwzx     r26, r31, r24
	addi     r3, r1, 0x8c
	li       r5, 0
	lwz      r24, 8(r26)
	mr       r4, r24
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x2c(r24)
	addi     r3, r1, 0x80
	lfs      f0, 0x24(r24)
	li       r5, 0
	lwz      r24, 8(r26)
	fsubs    f0, f1, f0
	lfs      f2, 0x90(r1)
	lfs      f1, lbl_8051F0B4@sda21(r2)
	mr       r4, r24
	fmadds   f30, f1, f0, f2
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x28(r24)
	lis      r3, __vt__Q25efx2d7TBaseIF@ha
	lfs      f0, 0x20(r24)
	li       r7, 0
	stfs     f30, 0x34(r1)
	addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
	fsubs    f0, f1, f0
	lfs      f2, 0x80(r1)
	lfs      f1, lbl_8051F0B4@sda21(r2)
	lis      r5, __vt__Q25efx2d5TBase@ha
	lwz      r3, 0x34(r1)
	lis      r4, __vt__Q25efx2d8TSimple1@ha
	fmadds   f1, f1, f0, f2
	stw      r3, 0x24(r1)
	lis      r6, __vt__Q25efx2d3Arg@ha
	lis      r3, __vt__Q25efx2d14T2DChangesmoke@ha
	lfs      f0, 0x24(r1)
	addi     r9, r6, __vt__Q25efx2d3Arg@l
	stfs     f1, 0x30(r1)
	addi     r8, r5, __vt__Q25efx2d5TBase@l
	li       r5, 7
	addi     r6, r4, __vt__Q25efx2d8TSimple1@l
	stw      r0, 0xd8(r1)
	addi     r0, r3, __vt__Q25efx2d14T2DChangesmoke@l
	lwz      r10, 0x30(r1)
	addi     r3, r1, 0xd8
	stw      r8, 0xd8(r1)
	addi     r4, r1, 0xe8
	stw      r10, 0x20(r1)
	stw      r6, 0xd8(r1)
	lfs      f1, 0x20(r1)
	stw      r9, 0xf0(r1)
	stfs     f1, 0xe8(r1)
	stfs     f0, 0xec(r1)
	stb      r7, 0xdc(r1)
	stb      r7, 0xdd(r1)
	sth      r5, 0xe0(r1)
	stw      r7, 0xe4(r1)
	stw      r0, 0xd8(r1)
	bl       create__Q25efx2d8TSimple1FPQ25efx2d3Arg
	lwz      r24, 0x198(r31)
	lbz      r0, 0(r24)
	cmplwi   r0, 0
	bne      lbl_8039884C
	lwz      r26, 8(r24)
	addi     r3, r1, 0x74
	li       r5, 0
	mr       r4, r26
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x2c(r26)
	addi     r3, r1, 0x68
	lfs      f0, 0x24(r26)
	li       r5, 0
	lwz      r24, 8(r24)
	fsubs    f0, f1, f0
	lfs      f1, 0x78(r1)
	mr       r4, r24
	fadds    f30, f1, f0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x28(r24)
	li       r4, 1
	lfs      f0, 0x20(r24)
	li       r0, 3
	lfs      f2, 0x68(r1)
	fsubs    f0, f1, f0
	lwz      r3, 0x198(r31)
	stb      r4, 0(r3)
	fadds    f0, f2, f0
	lwz      r3, 0xd8(r28)
	stfs     f0, 8(r3)
	stfs     f30, 0xc(r3)
	lwz      r3, 0xd8(r28)
	stw      r0, 0x44(r3)
	lwz      r3, 0xd8(r28)
	stw      r4, 0x3c(r3)
	b        lbl_80398908

lbl_8039884C:
	lwz      r24, 0x19c(r31)
	lbz      r0, 0(r24)
	cmplwi   r0, 0
	bne      lbl_803988DC
	lwz      r26, 8(r24)
	addi     r3, r1, 0x5c
	li       r5, 0
	mr       r4, r26
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x2c(r26)
	addi     r3, r1, 0x50
	lfs      f0, 0x24(r26)
	li       r5, 0
	lwz      r24, 8(r24)
	fsubs    f0, f1, f0
	lfs      f1, 0x60(r1)
	mr       r4, r24
	fadds    f30, f1, f0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x28(r24)
	li       r4, 1
	lfs      f0, 0x20(r24)
	li       r0, 4
	lfs      f2, 0x50(r1)
	fsubs    f0, f1, f0
	lwz      r3, 0x19c(r31)
	stb      r4, 0(r3)
	fadds    f0, f2, f0
	lwz      r3, 0xd8(r28)
	stfs     f0, 8(r3)
	stfs     f30, 0xc(r3)
	lwz      r3, 0xd8(r28)
	stw      r0, 0x44(r3)
	lwz      r3, 0xd8(r28)
	stw      r4, 0x3c(r3)
	b        lbl_80398908

lbl_803988DC:
	lwz      r5, 0xd8(r28)
	li       r4, 1
	li       r3, 0
	li       r0, 5
	stw      r4, 0x3c(r5)
	lfs      f0, 0x10(r5)
	stfs     f0, 8(r5)
	lfs      f0, 0x14(r5)
	stfs     f0, 0xc(r5)
	stw      r3, 0x40(r5)
	stw      r0, 0x1c8(r31)

lbl_80398908:
	addi     r25, r25, 1
	addi     r28, r28, 4
	cmpwi    r25, 3
	blt      lbl_803985B0
	b        lbl_80398BC4

lbl_8039891C:
	mr       r28, r31
	li       r25, 1
	li       r26, 0

lbl_80398928:
	lwz      r4, 0xd8(r28)
	lwz      r3, 0x40(r4)
	cmpwi    r3, 0
	beq      lbl_80398B64
	lwz      r0, 0x3c(r4)
	li       r25, 0
	cmpwi    r0, 0
	bne      lbl_80398974
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x182d
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, 0xd8(r28)
	li       r4, 5
	li       r0, 1
	stw      r4, 0x3c(r3)
	lwz      r3, 0xd8(r28)
	stw      r0, 0x40(r3)
	b        lbl_80398B64

lbl_80398974:
	cmpwi    r0, 5
	bne      lbl_80398B64
	lfs      f1, lbl_8051F0C4@sda21(r2)
	xoris    r3, r3, 0x8000
	lfs      f0, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	lis      r0, 0x4330
	stw      r3, 0x11c(r1)
	fdivs    f0, f1, f0
	lfd      f2, lbl_8051F0D0@sda21(r2)
	stw      r0, 0x118(r1)
	lfd      f1, 0x118(r1)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_80398B64
	lbz      r0, 0x1c4(r31)
	li       r5, 0
	lwz      r3, 0x44(r4)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_803989C4
	li       r5, 1

lbl_803989C4:
	slwi     r3, r3, 2
	clrlwi.  r0, r5, 0x18
	addi     r24, r3, 0x18c
	lwzx     r27, r31, r24
	beq      lbl_80398A14
	lwz      r3, 8(r27)
	li       r5, 0
	lwz      r4, mRedFlowerTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r27)
	li       r5, 0
	lwz      r4, mRedFlowerTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	b        lbl_80398A4C

lbl_80398A14:
	lwz      r3, 8(r27)
	li       r5, 0
	lwz      r4, mFlowerTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r27)
	li       r5, 0
	lwz      r4, mFlowerTexture__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl

lbl_80398A4C:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1830
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwzx     r27, r31, r24
	addi     r3, r1, 0x44
	li       r5, 0
	lwz      r24, 8(r27)
	mr       r4, r24
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x2c(r24)
	addi     r3, r1, 0x38
	lfs      f0, 0x24(r24)
	li       r5, 0
	lwz      r24, 8(r27)
	fsubs    f0, f1, f0
	lfs      f2, 0x48(r1)
	lfs      f1, lbl_8051F0B4@sda21(r2)
	mr       r4, r24
	fmadds   f30, f1, f0, f2
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x28(r24)
	lis      r3, __vt__Q25efx2d7TBaseIF@ha
	lfs      f0, 0x20(r24)
	li       r7, 0
	stfs     f30, 0x2c(r1)
	addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
	fsubs    f0, f1, f0
	lfs      f2, 0x38(r1)
	lfs      f1, lbl_8051F0B4@sda21(r2)
	lis      r5, __vt__Q25efx2d5TBase@ha
	lwz      r3, 0x2c(r1)
	lis      r4, __vt__Q25efx2d8TSimple1@ha
	fmadds   f1, f1, f0, f2
	stw      r3, 0x1c(r1)
	lis      r6, __vt__Q25efx2d3Arg@ha
	lis      r3, __vt__Q25efx2d14T2DChangesmoke@ha
	lfs      f0, 0x1c(r1)
	addi     r9, r6, __vt__Q25efx2d3Arg@l
	stfs     f1, 0x28(r1)
	addi     r8, r5, __vt__Q25efx2d5TBase@l
	li       r5, 7
	addi     r6, r4, __vt__Q25efx2d8TSimple1@l
	stw      r0, 0xbc(r1)
	addi     r0, r3, __vt__Q25efx2d14T2DChangesmoke@l
	lwz      r10, 0x28(r1)
	addi     r3, r1, 0xbc
	stw      r8, 0xbc(r1)
	addi     r4, r1, 0xcc
	stw      r10, 0x18(r1)
	stw      r6, 0xbc(r1)
	lfs      f1, 0x18(r1)
	stw      r9, 0xd4(r1)
	stfs     f1, 0xcc(r1)
	stfs     f0, 0xd0(r1)
	stb      r7, 0xc0(r1)
	stb      r7, 0xc1(r1)
	sth      r5, 0xc4(r1)
	stw      r7, 0xc8(r1)
	stw      r0, 0xbc(r1)
	bl       create__Q25efx2d8TSimple1FPQ25efx2d3Arg
	lwz      r4, 0xd8(r28)
	li       r3, 1
	li       r0, 0
	stw      r3, 0x3c(r4)
	lfs      f0, 0x10(r4)
	stfs     f0, 8(r4)
	lfs      f0, 0x14(r4)
	stfs     f0, 0xc(r4)
	stw      r0, 0x40(r4)

lbl_80398B64:
	addi     r26, r26, 1
	addi     r28, r28, 4
	cmpwi    r26, 3
	blt      lbl_80398928
	clrlwi.  r0, r25, 0x18
	beq      lbl_80398BC4
	li       r0, 6
	stw      r0, 0x1c8(r31)
	b        lbl_80398BC4

lbl_80398B88:
	lwz      r0, 0x1e4(r31)
	cmpwi    r0, 0
	blt      lbl_80398BC4
	lwz      r3, 0x7c(r31)
	bl       isRandAnimStart__Q28Morimura16TChallengeScreenFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80398BC4
	lwz      r3, 0x90(r31)
	li       r4, 1
	stb      r4, 0xb0(r3)
	lwz      r0, 0x1e4(r31)
	slwi     r0, r0, 2
	add      r3, r31, r0
	lwz      r3, 0xb0(r3)
	stb      r4, 0xb0(r3)

lbl_80398BC4:
	lwz      r3, 0x1d0(r31)
	addi     r0, r3, 1
	stw      r0, 0x1d0(r31)
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	lmw      r24, 0x120(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/**
 * @note Address: 0x80398BF4
 * @note Size: 0x540
 */
void TChallengeResult::changeAnimDemo()
{
	if (mFlags[1]) {
		mDemoState = 4;
		if (mComplete) {
			PSSystem::spSysIF->playSystemSe(PSSE_CHALLENGE_PERFECTCLEAR, 0);
			u16 y = sys->getRenderModeObj()->efbHeight;
			u16 x = sys->getRenderModeObj()->fbWidth;
			Vector2f pos((f32)x / 2, (f32)y / 2);
			efx2d::Arg arg(pos);
			mEfxCompLoop->create(&arg);

			mResultDemoScreen->mScreenObj->search('Nribon');

			Vector2f pos2(140.0f, 100.0f);
			efx2d::Arg arg2(pos2);
			efx2d::T2DCavecomp efx;
			efx.create(&arg2);
		} else {
			PSSystem::spSysIF->playSystemSe(PSSE_CHALLENGE_COURSECLEAR, 0);
		}
		TChallengeResultDemoScreen* scrn = mResultDemoScreen;
		scrn->mIsActive                  = true;
		for (int i = 0; i < scrn->mAnimScreenCountMax; i++) {
			scrn->mAnimScreens[i]->mCurrentFrame = 0.0f;
		}
		int test = randInt(6);
		if (test >= 5) {
			test = 5;
		}
		const int* data = &cRandArray[test * 3];
		for (int i = 0; i < 3; i++) {
			Vector2f pos;
			mClearTexture[data[i]]->getPosition(pos);
			mClearTexture[data[i]]->_00 = 1;

			mOnyonMovePane[i]->_44    = test;
			TMovePane* pane           = mOnyonMovePane[i];
			pane->mOffset.x           = pos.x;
			pane->mOffset.y           = pos.y;
			mOnyonMovePane[i]->mState = 1;
		}
	} else {
		if (mFlags[2]) {
			if (mComplete) {
				PSSystem::spSysIF->playSystemSe(PSSE_CHALLENGE_PERFECTCLEAR, 0);
				u16 y = sys->getRenderModeObj()->efbHeight;
				u16 x = sys->getRenderModeObj()->fbWidth;
				Vector2f pos((f32)x / 2, (f32)y / 2);
				efx2d::Arg arg(pos);
				mEfxCompLoop->create(&arg);

				mResultDemoScreen->mScreenObj->search('Nribon');

				// raining confetti particles
				Vector2f pos2(140.0f, 100.0f);
				efx2d::Arg arg2(pos2);
				efx2d::T2DCavecomp efx;
				efx.create(&arg2);
			} else {
				PSSystem::spSysIF->playSystemSe(PSSE_CHALLENGE_COURSECLEAR, 0);
			}
			TChallengeResultDemoScreen* scrn = mResultDemoScreen;
			scrn->mIsActive                  = true;
			for (int i = 0; i < scrn->mAnimScreenCountMax; i++) {
				scrn->mAnimScreens[i]->mCurrentFrame = 0.0f;
			}
		}
		mDemoState = 6;

		for (int i = 0; i < 3; i++) {
			mOnyonMovePane[i]->start();
		}
	}
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stmw     r26, 0xc8(r1)
	mr       r29, r3
	lbz      r0, 0x1c5(r3)
	cmplwi   r0, 0
	beq      lbl_80398EEC
	li       r0, 4
	stw      r0, 0x1c8(r29)
	lbz      r0, mComplete__Q28Morimura16TChallengeResult@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80398D94
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1835
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	bl       getRenderModeObj__6SystemFv
	lhz      r28, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r5, 0x4330
	lis      r3, __vt__Q25efx2d3Arg@ha
	stw      r5, 0xb8(r1)
	addi     r0, r3, __vt__Q25efx2d3Arg@l
	lfd      f2, lbl_8051F0E8@sda21(r2)
	stw      r4, 0xbc(r1)
	addi     r4, r1, 0x84
	lfs      f3, lbl_8051F0B4@sda21(r2)
	lfd      f0, 0xb8(r1)
	stw      r28, 0xc4(r1)
	fsubs    f1, f0, f2
	stw      r5, 0xc0(r1)
	lfd      f0, 0xc0(r1)
	fmuls    f1, f3, f1
	stw      r0, 0x8c(r1)
	fsubs    f0, f0, f2
	stfs     f1, 0x38(r1)
	fmuls    f0, f3, f0
	lwz      r0, 0x38(r1)
	stw      r0, 0x40(r1)
	stfs     f0, 0x3c(r1)
	lfs      f0, 0x40(r1)
	lwz      r0, 0x3c(r1)
	stfs     f0, 0x84(r1)
	stw      r0, 0x44(r1)
	lfs      f0, 0x44(r1)
	stfs     f0, 0x88(r1)
	lwz      r3, 0x1a4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x80(r29)
	lis      r3, 0x69626F6E@ha
	addi     r6, r3, 0x69626F6E@l
	li       r5, 0x4e72
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051F160@sda21(r2)
	li       r8, 0
	lfs      f0, lbl_8051F0AC@sda21(r2)
	lis      r3, __vt__Q25efx2d7TBaseIF@ha
	stfs     f1, 0x28(r1)
	addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
	lis      r3, __vt__Q25efx2d5TBase@ha
	lis      r4, __vt__Q25efx2d8TSimple2@ha
	stfs     f0, 0x2c(r1)
	lis      r5, __vt__Q25efx2d3Arg@ha
	lwz      r6, 0x28(r1)
	addi     r9, r3, __vt__Q25efx2d5TBase@l
	stw      r0, 0xa4(r1)
	lis      r3, __vt__Q25efx2d11T2DCavecomp@ha
	lwz      r0, 0x2c(r1)
	addi     r7, r4, __vt__Q25efx2d8TSimple2@l
	stw      r6, 0x30(r1)
	addi     r10, r5, __vt__Q25efx2d3Arg@l
	li       r6, 0xa
	li       r5, 0xb
	stw      r0, 0x34(r1)
	addi     r0, r3, __vt__Q25efx2d11T2DCavecomp@l
	lfs      f1, 0x30(r1)
	addi     r3, r1, 0xa4
	stw      r9, 0xa4(r1)
	addi     r4, r1, 0x78
	lfs      f0, 0x34(r1)
	stw      r7, 0xa4(r1)
	stw      r10, 0x80(r1)
	stfs     f1, 0x78(r1)
	stfs     f0, 0x7c(r1)
	stb      r8, 0xa8(r1)
	stb      r8, 0xa9(r1)
	sth      r6, 0xac(r1)
	sth      r5, 0xae(r1)
	stw      r8, 0xb0(r1)
	stw      r8, 0xb4(r1)
	stw      r0, 0xa4(r1)
	bl       create__Q25efx2d8TSimple2FPQ25efx2d3Arg
	b        lbl_80398DA4

lbl_80398D94:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1834
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80398DA4:
	lwz      r5, 0x80(r29)
	li       r0, 1
	li       r4, 0
	lfs      f0, lbl_8051F084@sda21(r2)
	stb      r0, 0x24(r5)
	mr       r6, r4
	b        lbl_80398DD4

lbl_80398DC0:
	lwz      r3, 4(r5)
	addi     r4, r4, 1
	lwzx     r3, r3, r6
	addi     r6, r6, 4
	stfs     f0, 0x18(r3)

lbl_80398DD4:
	lwz      r0, 0x10(r5)
	cmpw     r4, r0
	blt      lbl_80398DC0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc4(r1)
	lfd      f3, lbl_8051F0D0@sda21(r2)
	stw      r0, 0xc0(r1)
	lfs      f1, lbl_8051F0E0@sda21(r2)
	lfd      f2, 0xc0(r1)
	lfs      f0, lbl_8051F134@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	cmpwi    r0, 5
	blt      lbl_80398E28
	li       r0, 5

lbl_80398E28:
	mulli    r4, r0, 0xc
	lis      r3, cRandArray__8Morimura@ha
	mr       r31, r29
	addi     r0, r3, cRandArray__8Morimura@l
	add      r27, r0, r4
	li       r30, 0

lbl_80398E40:
	lwz      r0, 0(r27)
	addi     r3, r1, 0x54
	li       r5, 0
	slwi     r4, r0, 2
	addi     r0, r4, 0x18c
	lwzx     r28, r29, r0
	lwz      r26, 8(r28)
	mr       r4, r26
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x2c(r26)
	addi     r3, r1, 0x48
	lfs      f0, 0x24(r26)
	li       r5, 0
	lwz      r26, 8(r28)
	fsubs    f0, f1, f0
	lfs      f1, 0x58(r1)
	mr       r4, r26
	fadds    f31, f1, f0
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r4, 0(r27)
	addi     r30, r30, 1
	lfs      f2, 0x48(r1)
	li       r5, 1
	slwi     r3, r4, 2
	lfs      f1, 0x28(r26)
	addi     r0, r3, 0x18c
	lfs      f0, 0x20(r26)
	lwzx     r3, r29, r0
	cmpwi    r30, 3
	fsubs    f0, f1, f0
	addi     r27, r27, 4
	stb      r5, 0(r3)
	lwz      r3, 0xd8(r31)
	fadds    f0, f2, f0
	stw      r4, 0x44(r3)
	lwz      r3, 0xd8(r31)
	stfs     f0, 8(r3)
	stfs     f31, 0xc(r3)
	lwz      r3, 0xd8(r31)
	addi     r31, r31, 4
	stw      r5, 0x3c(r3)
	blt      lbl_80398E40
	b        lbl_80399118

lbl_80398EEC:
	lbz      r0, 0x1c6(r29)
	cmplwi   r0, 0
	beq      lbl_803990B4
	lbz      r0, mComplete__Q28Morimura16TChallengeResult@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80399068
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1835
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	bl       getRenderModeObj__6SystemFv
	lhz      r28, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r5, 0x4330
	lis      r3, __vt__Q25efx2d3Arg@ha
	stw      r5, 0xc0(r1)
	addi     r0, r3, __vt__Q25efx2d3Arg@l
	lfd      f2, lbl_8051F0E8@sda21(r2)
	stw      r4, 0xc4(r1)
	addi     r4, r1, 0x6c
	lfs      f3, lbl_8051F0B4@sda21(r2)
	lfd      f0, 0xc0(r1)
	stw      r28, 0xbc(r1)
	fsubs    f1, f0, f2
	stw      r5, 0xb8(r1)
	lfd      f0, 0xb8(r1)
	fmuls    f1, f3, f1
	stw      r0, 0x74(r1)
	fsubs    f0, f0, f2
	stfs     f1, 0x18(r1)
	fmuls    f0, f3, f0
	lwz      r0, 0x18(r1)
	stw      r0, 0x20(r1)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x20(r1)
	lwz      r0, 0x1c(r1)
	stfs     f0, 0x6c(r1)
	stw      r0, 0x24(r1)
	lfs      f0, 0x24(r1)
	stfs     f0, 0x70(r1)
	lwz      r3, 0x1a4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x80(r29)
	lis      r3, 0x69626F6E@ha
	addi     r6, r3, 0x69626F6E@l
	li       r5, 0x4e72
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051F160@sda21(r2)
	li       r8, 0
	lfs      f0, lbl_8051F0AC@sda21(r2)
	lis      r3, __vt__Q25efx2d7TBaseIF@ha
	stfs     f1, 8(r1)
	addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
	lis      r3, __vt__Q25efx2d5TBase@ha
	lis      r4, __vt__Q25efx2d8TSimple2@ha
	stfs     f0, 0xc(r1)
	lis      r5, __vt__Q25efx2d3Arg@ha
	lwz      r6, 8(r1)
	addi     r9, r3, __vt__Q25efx2d5TBase@l
	stw      r0, 0x90(r1)
	lis      r3, __vt__Q25efx2d11T2DCavecomp@ha
	lwz      r0, 0xc(r1)
	addi     r7, r4, __vt__Q25efx2d8TSimple2@l
	stw      r6, 0x10(r1)
	addi     r10, r5, __vt__Q25efx2d3Arg@l
	li       r6, 0xa
	li       r5, 0xb
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q25efx2d11T2DCavecomp@l
	lfs      f1, 0x10(r1)
	addi     r3, r1, 0x90
	stw      r9, 0x90(r1)
	addi     r4, r1, 0x60
	lfs      f0, 0x14(r1)
	stw      r7, 0x90(r1)
	stw      r10, 0x68(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	stb      r8, 0x94(r1)
	stb      r8, 0x95(r1)
	sth      r6, 0x98(r1)
	sth      r5, 0x9a(r1)
	stw      r8, 0x9c(r1)
	stw      r8, 0xa0(r1)
	stw      r0, 0x90(r1)
	bl       create__Q25efx2d8TSimple2FPQ25efx2d3Arg
	b        lbl_80399078

lbl_80399068:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1834
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80399078:
	lwz      r5, 0x80(r29)
	li       r0, 1
	li       r4, 0
	lfs      f0, lbl_8051F084@sda21(r2)
	stb      r0, 0x24(r5)
	mr       r6, r4
	b        lbl_803990A8

lbl_80399094:
	lwz      r3, 4(r5)
	addi     r4, r4, 1
	lwzx     r3, r3, r6
	addi     r6, r6, 4
	stfs     f0, 0x18(r3)

lbl_803990A8:
	lwz      r0, 0x10(r5)
	cmpw     r4, r0
	blt      lbl_80399094

lbl_803990B4:
	li       r0, 6
	li       r3, 1
	stw      r0, 0x1c8(r29)
	li       r0, 0
	lwz      r4, 0xd8(r29)
	stw      r3, 0x3c(r4)
	lfs      f0, 0x10(r4)
	stfs     f0, 8(r4)
	lfs      f0, 0x14(r4)
	stfs     f0, 0xc(r4)
	stw      r0, 0x40(r4)
	lwz      r4, 0xdc(r29)
	stw      r3, 0x3c(r4)
	lfs      f0, 0x10(r4)
	stfs     f0, 8(r4)
	lfs      f0, 0x14(r4)
	stfs     f0, 0xc(r4)
	stw      r0, 0x40(r4)
	lwz      r4, 0xe0(r29)
	stw      r3, 0x3c(r4)
	lfs      f0, 0x10(r4)
	stfs     f0, 8(r4)
	lfs      f0, 0x14(r4)
	stfs     f0, 0xc(r4)
	stw      r0, 0x40(r4)

lbl_80399118:
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	lmw      r26, 0xc8(r1)
	lwz      r0, 0xf4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/**
 * @note Address: 0x80399134
 * @note Size: 0x220
 */
void TChallengeResult::startRankInDemo()
{
	if (mRankInSlot >= 0) {
		mMoveTimer = 1.0f;
		mCounter2->getMotherPane()->show();
		mCounter2->createKiraEffect(1.0f, mResultCounters[3]->mDigits);

		for (int i = 0; i < 3; i++) {
			if (i == mRankInSlot) {
				mHighScoreCounter[i]->getMotherPane()->show();
			}
			mPosList2[i].x = 400.0f;
			mPosList2[i].y = 0.0f;
			mHighScoreCounter[i]->getMotherPane()->setOffset(mPosList1[i].x + mPosList2[i].x, mPosList1[i].y);
		}

		mTimer = 0.0f;
	}
}

/**
 * @note Address: 0x80399354
 * @note Size: 0x17C
 */
void TChallengeResult::startDemo()
{
	mDemoSpeedUpRate = mSpeed;
	if (mDemoState == 0) {
		mDemoState = 1;
		for (int i = 0; i < 4; i++) {
			mResultCounters[i]->start();
		}
	}
	mCounter = 0;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stmw     r24, 0x20(r1)
	mr       r27, r3
	lfs      f0, 0x1f0(r3)
	stfs     f0, mDemoSpeedUpRate__Q28Morimura16TChallengeResult@sda21(r13)
	lwz      r0, 0x1c8(r3)
	cmpwi    r0, 0
	bne      lbl_803994AC
	li       r0, 1
	mr       r29, r27
	stw      r0, 0x1c8(r27)
	li       r28, 0

lbl_80399394:
	lwz      r30, 0x17c(r29)
	lwz      r0, 8(r30)
	cmpwi    r0, 1
	beq      lbl_8039949C
	lwz      r3, 0(r30)
	li       r4, 0
	li       r0, 1
	lwz      r3, 0(r3)
	mr       r5, r4
	mr       r6, r4
	stw      r3, 4(r30)
	stw      r4, 0xc(r30)
	stw      r4, 0x20(r30)
	stw      r4, 0x1c(r30)
	stw      r0, 8(r30)
	b        lbl_803993E4

lbl_803993D4:
	lwz      r3, 0x24(r30)
	addi     r5, r5, 1
	stwx     r4, r3, r6
	addi     r6, r6, 4

lbl_803993E4:
	lwz      r0, 0x14(r30)
	cmpw     r5, r0
	blt      lbl_803993D4
	lwz      r5, 0(r30)
	lis      r3, 0x66666667@ha
	addi     r4, r3, 0x66666667@l
	li       r31, 1
	lwz      r0, 0(r5)
	b        lbl_8039941C

lbl_80399408:
	mulhw    r0, r4, r0
	addi     r31, r31, 1
	srawi    r0, r0, 2
	srwi     r3, r0, 0x1f
	add      r0, r0, r3

lbl_8039941C:
	cmpwi    r0, 0xa
	bge      lbl_80399408
	stw      r31, 0x10(r30)
	slwi     r25, r31, 2
	lfd      f31, lbl_8051F0D0@sda21(r2)
	lis      r26, 0x4330
	lwz      r3, 0(r30)
	lwz      r24, 0(r3)
	b        lbl_8039948C

lbl_80399440:
	addi     r0, r31, -1
	stw      r26, 8(r1)
	xoris    r0, r0, 0x8000
	lfd      f1, lbl_8051F0D8@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsub     f2, f0, f31
	bl       pow
	fctiwz   f0, f1
	addi     r0, r25, -4
	lwz      r3, 0x24(r30)
	addi     r25, r25, -4
	addi     r31, r31, -1
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	divw     r5, r24, r4
	mullw    r4, r5, r4
	stwx     r5, r3, r0
	subf     r24, r4, r24

lbl_8039948C:
	cmpwi    r31, 1
	bgt      lbl_80399440
	lwz      r3, 0x24(r30)
	stw      r24, 0(r3)

lbl_8039949C:
	addi     r28, r28, 1
	addi     r29, r29, 4
	cmpwi    r28, 4
	blt      lbl_80399394

lbl_803994AC:
	li       r0, 0
	stw      r0, 0x1d0(r27)
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	lmw      r24, 0x20(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/**
 * @note Address: 0x803994D0
 * @note Size: 0x120
 */
void TChallengeResult::fadeEffect()
{
	mCounter2->fadeKiraEffect();
	for (int i = 0; i < 3; i++) {
		mHighScoreCounter[i]->fadeKiraEffect();
	}
}

/**
 * @note Address: 0x803995F0
 * @note Size: 0xB0
 */
void TChallengeResultScene::doUserCallBackFunc(Resource::MgrCommand*)
{
	og::newScreen::makeLanguageResName(mName, "res_challengeResult.szs");
	LoadResource::Arg arg(mName);
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);
	P2ASSERTLINE(2345, node);
	JKRArchive* arc = node->getArchive();

	TChallengeResult* obj = new TChallengeResult;
	registObj(obj, arc);
	mObject = obj;
}

} // namespace Morimura
