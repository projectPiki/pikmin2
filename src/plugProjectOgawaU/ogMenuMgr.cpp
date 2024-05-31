#include "og/Screen/MenuMgr.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Sound.h"
#include "Vector3.h"
#include "efx2d/T2DCursor.h"
#include "System.h"

namespace og {
namespace Screen {

/**
 * @note Address: 0x80309E28
 * @note Size: 0x1E8
 */
MenuMgr::MenuMgr()
{
	mElementCount = 0;
	mCSelectId    = 0;
	mTimer        = 0.0f;
	mTimerMax     = 1.0f;

	mMainPanes        = nullptr;
	mTextBoxPanes     = nullptr;
	mTextBoxTakuPanes = nullptr;
	mScaleMgrs        = nullptr;
	mLeftCursorPanes  = nullptr;
	mRightCursorPanes = nullptr;

	mEfxCursor1 = nullptr;
	mEfxCursor2 = nullptr;

	mIsCursorActive  = false;
	mDoNeedMenuOnOff = false;
	mDoScale         = false;

	mCursorState      = CURSOR_Inactive;
	mCursorDelayTimer = 0.0f;

	mCursorPos1       = Vector2f(0.0f);
	mCursorPos2       = Vector2f(0.0f);
	mIsChangingSelect = false;

	mTransitionPosLeft  = Vector2f(0.0f);
	mTransitionPosRight = Vector2f(0.0f);
	mSelPosLeft         = Vector2f(0.0f);
	mSelPosRight        = Vector2f(0.0f);
	mSelectChangeTimer  = 0.0f;
	mPrevSelected       = 0;

	mEfxCursor1 = new efx2d::T2DCursor(&mCursorPos1);
	mEfxCursor2 = new efx2d::T2DCursor(&mCursorPos2);
}

/**
 * @note Address: 0x8030A100
 * @note Size: 0x94
 */
void MenuMgr::startCursor(f32 time)
{
	mIsCursorActive = true;
	if (time == 0.0f) {
		mCursorState      = CURSOR_Start;
		mCursorDelayTimer = 0.0f;
		if (mEfxCursor1) {
			mEfxCursor1->create(nullptr);
		}
		if (mEfxCursor2) {
			mEfxCursor2->create(nullptr);
		}
	} else {
		mCursorState      = CURSOR_DelayStart;
		mCursorDelayTimer = time;
	}
}

/**
 * @note Address: 0x8030A194
 * @note Size: 0x70
 */
void MenuMgr::killCursor()
{
	mCursorState    = CURSOR_Kill;
	mIsCursorActive = false;
	if (mEfxCursor1) {
		mEfxCursor1->kill();
	}
	if (mEfxCursor2) {
		mEfxCursor2->kill();
	}
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x4C
//  */
void MenuMgr::initCommon()
{
	mTimer            = 0.0f;
	mTimerMax         = 1.0f;
	mLeftCursorPanes  = nullptr;
	mRightCursorPanes = nullptr;
	mCSelectId        = 0;
	mCursorState      = CURSOR_Inactive;
	mCursorDelayTimer = 0.0f;
	selectSub(mCSelectId);
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x2F4
//  */
// void MenuMgr::initSub(J2DScreen*, u16, u64, u64, u64)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8030A204
 * @note Size: 0x21C
 * This function and the one below it (init2TakuTitle) are byte for byte identical
 * bravo Ogawa
 */
void MenuMgr::init2taku(J2DScreen* screen, u64 mainTag0, u64 textBoxTag0, u64 leftCursorTag0, u64 rightCursorTag0, u64 mainTag1,
                        u64 textBoxTag1, u64 leftCursorTag1, u64 rightCursorTag1)
{
	mElementCount     = 2;
	mMainPanes        = new J2DPane*[2];
	mTextBoxPanes     = new J2DPane*[2];
	mTextBoxTakuPanes = new J2DPane*[2];
	mScaleMgrs        = new ScaleMgr[2];

	mMainPanes[0]        = og::Screen::TagSearch(screen, mainTag0);
	mTextBoxPanes[0]     = nullptr;
	mTextBoxTakuPanes[0] = og::Screen::TagSearch(screen, textBoxTag0);

	mMainPanes[1]        = og::Screen::TagSearch(screen, mainTag1);
	mTextBoxPanes[1]     = nullptr;
	mTextBoxTakuPanes[1] = og::Screen::TagSearch(screen, textBoxTag1);

	initCommon();

	mLeftCursorPanes  = new J2DPane*[2];
	mRightCursorPanes = new J2DPane*[2];

	mLeftCursorPanes[0]  = og::Screen::TagSearch(screen, leftCursorTag0);
	mRightCursorPanes[0] = og::Screen::TagSearch(screen, rightCursorTag0);
	mLeftCursorPanes[0]->hide();
	mRightCursorPanes[0]->hide();

	mLeftCursorPanes[1]  = og::Screen::TagSearch(screen, leftCursorTag1);
	mRightCursorPanes[1] = og::Screen::TagSearch(screen, rightCursorTag1);
	mLeftCursorPanes[1]->hide();
	mRightCursorPanes[1]->hide();
}

/**
 * @note Address: 0x8030A420
 * @note Size: 0x21C
 */
void MenuMgr::init2takuTitle(J2DScreen* screen, u64 tag1, u64 tag2, u64 tag3, u64 tag4, u64 tag5, u64 tag6, u64 tag7, u64 tag8)
{
	init2taku(screen, tag1, tag2, tag3, tag4, tag5, tag6, tag7, tag8);
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x2F0
//  */
void MenuMgr::init(J2DScreen* screen, u16 numOptions, u64 tag1, u64 tag2, u64 tag3)
{
	mMainPanes        = new J2DPane*[numOptions];
	mTextBoxPanes     = new J2DPane*[numOptions];
	mTextBoxTakuPanes = new J2DPane*[numOptions];
	mScaleMgrs        = new ScaleMgr[numOptions];

	u64 mesg1 = 0;
	if (tag1) {
		mesg1 = MojiToNum(tag1, 2);
	}
	u64 mesg2 = MojiToNum(tag2, 2);
	u64 mesg3 = MojiToNum(tag3, 2);

	u64 baseTag1 = ((tag1 & 0xFFFFFFFFFFFF0000) | '00');
	u64 baseTag2 = ((tag2 & 0xFFFFFFFFFFFF0000) | '00');
	u64 baseTag3 = ((tag3 & 0xFFFFFFFFFFFF0000) | '00');

	for (int i = 0; i < mElementCount; i++) {
		mMainPanes[i]        = screen->search(baseTag1 + ((mesg1 + i) % 10) + ((mesg1 + i) / 10) % 10 * 256);
		mTextBoxPanes[i]     = screen->search(baseTag2 + ((mesg2 + i) % 10) + ((mesg2 + i) / 10) % 10 * 256);
		mTextBoxTakuPanes[i] = screen->search(baseTag3 + ((mesg3 + i) % 10) + ((mesg3 + i) / 10) % 10 * 256);
	}

	initCommon();
}

/**
 * @note Address: 0x8030A63C
 * @note Size: 0x494
 */
void MenuMgr::init(J2DScreen* screen, u16 numOptions, u64 tag1, u64 tag2, u64 tag3, u64 tag4, u64 tag5)
{
	mElementCount = numOptions;
	init(screen, numOptions, tag1, tag2, tag3);

	u64 mesg4 = MojiToNum(tag4, 2);
	u64 mesg5 = MojiToNum(tag5, 2);

	u64 baseTag4 = ((tag4 & 0xFFFFFFFFFFFF0000) | '00');
	u64 baseTag5 = ((tag5 & 0xFFFFFFFFFFFF0000) | '00');

	mLeftCursorPanes  = new J2DPane*[numOptions];
	mRightCursorPanes = new J2DPane*[numOptions];

	for (int i = 0; i < numOptions; i++) {
		mLeftCursorPanes[i]  = og::Screen::TagSearch(screen, ((mesg4 + i) % 10) + ((mesg4 + i) / 10) % 10 * 256 + baseTag4);
		mRightCursorPanes[i] = og::Screen::TagSearch(screen, ((mesg5 + i) % 10) + ((mesg5 + i) / 10) % 10 * 256 + baseTag5);

		mLeftCursorPanes[i]->hide();
		mRightCursorPanes[i]->hide();
	}
}

/**
 * @note Address: 0x8030AAD0
 * @note Size: 0x90
 */
void MenuMgr::selectSub(u16 sel)
{
	if (sel < mElementCount) {
		mPrevSelected      = mCSelectId;
		mCSelectId         = sel;
		mIsChangingSelect  = true;
		mSelectChangeTimer = 0.0f;
		if (mDoNeedMenuOnOff) { // this never runs
			MenuOnOff();
		}
		mScaleMgrs[mCSelectId].up(0.2f, 50.0f, 0.5f, 0.0f); // amp 0.2f, freq 50.0f, max time 0.5s, no delay
		mTimer = 0.0f;
	}
}

/**
 * @note Address: 0x8030AB60
 * @note Size: 0x98
 * Identical to selectSub minus one extra sound effect, very cool Ogawa
 */
void MenuMgr::select(u16 sel)
{
	selectSub(sel);
	ogSound->setCursor();
}

/**
 * @note Address: 0x8030ABF8
 * @note Size: 0x14
 */
void MenuMgr::initSelNum(u16 sel)
{
	mPrevSelected      = sel;
	mCSelectId         = sel;
	mSelectChangeTimer = 0.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0xAC
 */
void MenuMgr::calcCenter(J2DPane* pane, Vector2f* center)
{
	JGeometry::TVec3f btmL = pane->getGlbVtx(GLBVTX_BtmLeft);
	JGeometry::TVec3f topR = pane->getGlbVtx(GLBVTX_TopRight);
	center->set((btmL.x + topR.x) / 2, (btmL.y + topR.y) / 2);
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
// regswaps in here
void MenuMgr::calcPoint(Vector2f& vec1, Vector2f& vec2, f32 scale, Vector2f* outVec)
{
	Vector2f newPoint = vec2 * (1.0f - scale);
	newPoint.x += vec1.x * scale;
	newPoint.y += vec1.y * scale;
	outVec->set(newPoint.x, newPoint.y);
}

/**
 * @note Address: 0x8030AC0C
 * @note Size: 0x580
 */
void MenuMgr::update()
{
	switch (mCursorState) {
	case CURSOR_Inactive:
		break; // nice one ogawa

	case CURSOR_DelayStart:
		mCursorDelayTimer -= sys->mDeltaTime;
		if (mCursorDelayTimer < 0.0f) {
			mIsCursorActive   = true;
			mCursorState      = CURSOR_Start;
			mCursorDelayTimer = 0.0f;
			if (mEfxCursor1) {
				mEfxCursor1->create(nullptr);
			}
			if (mEfxCursor2) {
				mEfxCursor2->create(nullptr);
			}
		}
		break;

	case CURSOR_Start:
		if (mLeftCursorPanes) {
			calcCenter(mLeftCursorPanes[mCSelectId], &mSelPosLeft);
		}
		if (mRightCursorPanes) {
			calcCenter(mRightCursorPanes[mCSelectId], &mSelPosRight);
		}
		if (mIsChangingSelect) {
			mSelectChangeTimer += sys->mDeltaTime;
			if (mSelectChangeTimer > 0.2f) {
				mCursorPos1       = mSelPosLeft;
				mCursorPos2       = mSelPosRight;
				mIsChangingSelect = false;
			} else {
				f32 factor = mSelectChangeTimer / 0.2f;
				if (mLeftCursorPanes) {
					calcCenter(mLeftCursorPanes[mPrevSelected], &mTransitionPosLeft);
					calcPoint(mSelPosLeft, mTransitionPosLeft, factor, &mCursorPos1);
				}
				if (mRightCursorPanes) {
					calcCenter(mRightCursorPanes[mPrevSelected], &mTransitionPosRight);
					calcPoint(mSelPosRight, mTransitionPosRight, factor, &mCursorPos2);
				}
			}
		} else {
			if (mLeftCursorPanes) {
				mCursorPos1 = mSelPosLeft;
			}
			if (mRightCursorPanes) {
				mCursorPos2 = mSelPosRight;
			}
		}
		break;

	case CURSOR_Kill:
		if (mLeftCursorPanes) {
			calcCenter(mLeftCursorPanes[mCSelectId], &mSelPosLeft);
			mCursorPos1.x = mSelPosLeft.x;
			mCursorPos1.y = mSelPosLeft.y;
		}
		if (mRightCursorPanes) {
			calcCenter(mRightCursorPanes[mCSelectId], &mSelPosRight);
			mCursorPos2.x = mSelPosRight.x;
			mCursorPos2.y = mSelPosRight.y;
		}
		break;
	}
	/*
stwu     r1, -0x140(r1)
mflr     r0
stw      r0, 0x144(r1)
stfd     f31, 0x130(r1)
psq_st   f31, 312(r1), 0, qr0
stw      r31, 0x12c(r1)
stw      r30, 0x128(r1)
mr       r31, r3
lwz      r0, 0(r3)
cmpwi    r0, 2
beq      lbl_8030ACD4
bge      lbl_8030AC4C
cmpwi    r0, 0
beq      lbl_8030B16C
bge      lbl_8030AC58
b        lbl_8030B16C

lbl_8030AC4C:
cmpwi    r0, 4
bge      lbl_8030B16C
b        lbl_8030B024

lbl_8030AC58:
lwz      r3, sys@sda21(r13)
lfs      f2, 4(r31)
lfs      f1, 0x54(r3)
lfs      f0, lbl_8051D680@sda21(r2)
fsubs    f1, f2, f1
stfs     f1, 4(r31)
lfs      f1, 4(r31)
fcmpo    cr0, f1, f0
bge      lbl_8030B16C
li       r3, 1
li       r0, 2
stb      r3, 0x2c(r31)
stw      r0, 0(r31)
stfs     f0, 4(r31)
lwz      r3, 0x40(r31)
cmplwi   r3, 0
beq      lbl_8030ACB0
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 8(r12)
mtctr    r12
bctrl

lbl_8030ACB0:
lwz      r3, 0x44(r31)
cmplwi   r3, 0
beq      lbl_8030B16C
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 8(r12)
mtctr    r12
bctrl
b        lbl_8030B16C

lbl_8030ACD4:
lwz      r4, 0x24(r31)
cmplwi   r4, 0
beq      lbl_8030AD68
lhz      r0, 0xa(r31)
addi     r3, r1, 0x110
li       r5, 0
slwi     r0, r0, 2
lwzx     r30, r4, r0
mr       r4, r30
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x110(r1)
mr       r4, r30
lwz      r6, 0x114(r1)
addi     r3, r1, 0x11c
lwz      r0, 0x118(r1)
stw      r5, 0xf8(r1)
li       r5, 3
stw      r6, 0xfc(r1)
stw      r0, 0x100(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r0, 0x11c(r1)
lwz      r3, 0x120(r1)
stw      r0, 0x104(r1)
lwz      r0, 0x124(r1)
stw      r3, 0x108(r1)
lfs      f3, 0xf8(r1)
lfs      f2, 0x104(r1)
lfs      f1, 0xfc(r1)
lfs      f0, 0x108(r1)
fadds    f3, f3, f2
lfs      f2, lbl_8051D690@sda21(r2)
fadds    f0, f1, f0
stw      r0, 0x10c(r1)
fmuls    f1, f3, f2
fmuls    f0, f0, f2
stfs     f1, 0x5c(r31)
stfs     f0, 0x60(r31)

lbl_8030AD68:
lwz      r4, 0x28(r31)
cmplwi   r4, 0
beq      lbl_8030ADFC
lhz      r0, 0xa(r31)
addi     r3, r1, 0xe0
li       r5, 0
slwi     r0, r0, 2
lwzx     r30, r4, r0
mr       r4, r30
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0xe0(r1)
mr       r4, r30
lwz      r6, 0xe4(r1)
addi     r3, r1, 0xec
lwz      r0, 0xe8(r1)
stw      r5, 0xc8(r1)
li       r5, 3
stw      r6, 0xcc(r1)
stw      r0, 0xd0(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r0, 0xec(r1)
lwz      r3, 0xf0(r1)
stw      r0, 0xd4(r1)
lwz      r0, 0xf4(r1)
stw      r3, 0xd8(r1)
lfs      f3, 0xc8(r1)
lfs      f2, 0xd4(r1)
lfs      f1, 0xcc(r1)
lfs      f0, 0xd8(r1)
fadds    f3, f3, f2
lfs      f2, lbl_8051D690@sda21(r2)
fadds    f0, f1, f0
stw      r0, 0xdc(r1)
fmuls    f1, f3, f2
fmuls    f0, f0, f2
stfs     f1, 0x64(r31)
stfs     f0, 0x68(r31)

lbl_8030ADFC:
lbz      r0, 0x48(r31)
cmplwi   r0, 0
beq      lbl_8030AFE8
lwz      r3, sys@sda21(r13)
lfs      f2, 0x6c(r31)
lfs      f1, 0x54(r3)
lfs      f0, lbl_8051D688@sda21(r2)
fadds    f1, f2, f1
stfs     f1, 0x6c(r31)
lfs      f1, 0x6c(r31)
fcmpo    cr0, f1, f0
ble      lbl_8030AE58
lfs      f0, 0x5c(r31)
li       r0, 0
stfs     f0, 0x30(r31)
lfs      f0, 0x60(r31)
stfs     f0, 0x34(r31)
lfs      f0, 0x64(r31)
stfs     f0, 0x38(r31)
lfs      f0, 0x68(r31)
stfs     f0, 0x3c(r31)
stb      r0, 0x48(r31)
b        lbl_8030B16C

lbl_8030AE58:
fdivs    f31, f1, f0
lwz      r4, 0x24(r31)
cmplwi   r4, 0
beq      lbl_8030AF20
lhz      r0, 0x70(r31)
addi     r3, r1, 0xb0
li       r5, 0
slwi     r0, r0, 2
lwzx     r30, r4, r0
mr       r4, r30
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0xb0(r1)
mr       r4, r30
lwz      r6, 0xb4(r1)
addi     r3, r1, 0xbc
lwz      r0, 0xb8(r1)
stw      r5, 0x98(r1)
li       r5, 3
stw      r6, 0x9c(r1)
stw      r0, 0xa0(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r0, 0xbc(r1)
lwz      r3, 0xc0(r1)
stw      r0, 0xa4(r1)
lwz      r0, 0xc4(r1)
stw      r3, 0xa8(r1)
lfs      f3, 0x98(r1)
lfs      f2, 0xa4(r1)
lfs      f1, 0x9c(r1)
lfs      f0, 0xa8(r1)
fadds    f2, f3, f2
lfs      f3, lbl_8051D690@sda21(r2)
fadds    f1, f1, f0
lfs      f0, lbl_8051D684@sda21(r2)
fmuls    f2, f2, f3
stw      r0, 0xac(r1)
fsubs    f4, f0, f31
fmuls    f0, f1, f3
stfs     f2, 0x4c(r31)
stfs     f0, 0x50(r31)
lfs      f0, 0x4c(r31)
lfs      f3, 0x50(r31)
fmuls    f1, f0, f4
lfs      f2, 0x5c(r31)
fmuls    f0, f3, f4
lfs      f3, 0x60(r31)
fmadds   f1, f2, f31, f1
fmadds   f0, f3, f31, f0
stfs     f1, 0x30(r31)
stfs     f0, 0x34(r31)

lbl_8030AF20:
lwz      r4, 0x28(r31)
cmplwi   r4, 0
beq      lbl_8030B16C
lhz      r0, 0x70(r31)
addi     r3, r1, 0x80
li       r5, 0
slwi     r0, r0, 2
lwzx     r30, r4, r0
mr       r4, r30
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x80(r1)
mr       r4, r30
lwz      r6, 0x84(r1)
addi     r3, r1, 0x8c
lwz      r0, 0x88(r1)
stw      r5, 0x68(r1)
li       r5, 3
stw      r6, 0x6c(r1)
stw      r0, 0x70(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r0, 0x8c(r1)
lwz      r3, 0x90(r1)
stw      r0, 0x74(r1)
lwz      r0, 0x94(r1)
stw      r3, 0x78(r1)
lfs      f3, 0x68(r1)
lfs      f2, 0x74(r1)
lfs      f1, 0x6c(r1)
lfs      f0, 0x78(r1)
fadds    f2, f3, f2
lfs      f3, lbl_8051D690@sda21(r2)
fadds    f1, f1, f0
lfs      f0, lbl_8051D684@sda21(r2)
fmuls    f2, f2, f3
stw      r0, 0x7c(r1)
fsubs    f4, f0, f31
fmuls    f0, f1, f3
stfs     f2, 0x54(r31)
stfs     f0, 0x58(r31)
lfs      f0, 0x54(r31)
lfs      f3, 0x58(r31)
fmuls    f1, f0, f4
lfs      f2, 0x64(r31)
fmuls    f0, f3, f4
lfs      f3, 0x68(r31)
fmadds   f1, f2, f31, f1
fmadds   f0, f3, f31, f0
stfs     f1, 0x38(r31)
stfs     f0, 0x3c(r31)
b        lbl_8030B16C

lbl_8030AFE8:
lwz      r0, 0x24(r31)
cmplwi   r0, 0
beq      lbl_8030B004
lfs      f0, 0x5c(r31)
stfs     f0, 0x30(r31)
lfs      f0, 0x60(r31)
stfs     f0, 0x34(r31)

lbl_8030B004:
lwz      r0, 0x28(r31)
cmplwi   r0, 0
beq      lbl_8030B16C
lfs      f0, 0x64(r31)
stfs     f0, 0x38(r31)
lfs      f0, 0x68(r31)
stfs     f0, 0x3c(r31)
b        lbl_8030B16C

lbl_8030B024:
lwz      r4, 0x24(r31)
cmplwi   r4, 0
beq      lbl_8030B0C8
lhz      r0, 0xa(r31)
addi     r3, r1, 0x50
li       r5, 0
slwi     r0, r0, 2
lwzx     r30, r4, r0
mr       r4, r30
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x50(r1)
mr       r4, r30
lwz      r6, 0x54(r1)
addi     r3, r1, 0x5c
lwz      r0, 0x58(r1)
stw      r5, 0x38(r1)
li       r5, 3
stw      r6, 0x3c(r1)
stw      r0, 0x40(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r0, 0x5c(r1)
lwz      r3, 0x60(r1)
stw      r0, 0x44(r1)
lwz      r0, 0x64(r1)
stw      r3, 0x48(r1)
lfs      f3, 0x38(r1)
lfs      f2, 0x44(r1)
lfs      f1, 0x3c(r1)
lfs      f0, 0x48(r1)
fadds    f3, f3, f2
lfs      f2, lbl_8051D690@sda21(r2)
fadds    f0, f1, f0
stw      r0, 0x4c(r1)
fmuls    f1, f3, f2
fmuls    f0, f0, f2
stfs     f1, 0x5c(r31)
stfs     f0, 0x60(r31)
lfs      f0, 0x5c(r31)
stfs     f0, 0x30(r31)
lfs      f0, 0x60(r31)
stfs     f0, 0x34(r31)

lbl_8030B0C8:
lwz      r4, 0x28(r31)
cmplwi   r4, 0
beq      lbl_8030B16C
lhz      r0, 0xa(r31)
addi     r3, r1, 0x20
li       r5, 0
slwi     r0, r0, 2
lwzx     r30, r4, r0
mr       r4, r30
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x20(r1)
mr       r4, r30
lwz      r6, 0x24(r1)
addi     r3, r1, 0x2c
lwz      r0, 0x28(r1)
stw      r5, 8(r1)
li       r5, 3
stw      r6, 0xc(r1)
stw      r0, 0x10(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r0, 0x2c(r1)
lwz      r3, 0x30(r1)
stw      r0, 0x14(r1)
lwz      r0, 0x34(r1)
stw      r3, 0x18(r1)
lfs      f3, 8(r1)
lfs      f2, 0x14(r1)
lfs      f1, 0xc(r1)
lfs      f0, 0x18(r1)
fadds    f3, f3, f2
lfs      f2, lbl_8051D690@sda21(r2)
fadds    f0, f1, f0
stw      r0, 0x1c(r1)
fmuls    f1, f3, f2
fmuls    f0, f0, f2
stfs     f1, 0x64(r31)
stfs     f0, 0x68(r31)
lfs      f0, 0x64(r31)
stfs     f0, 0x38(r31)
lfs      f0, 0x68(r31)
stfs     f0, 0x3c(r31)

lbl_8030B16C:
psq_l    f31, 312(r1), 0, qr0
lwz      r0, 0x144(r1)
lfd      f31, 0x130(r1)
lwz      r31, 0x12c(r1)
lwz      r30, 0x128(r1)
mtlr     r0
addi     r1, r1, 0x140
blr
	*/
}

/**
 * @note Address: 0x8030B18C
 * @note Size: 0xEC
 */
void MenuMgr::draw(J2DGrafContext* graf)
{
	for (int i = 0; i < mElementCount; i++) {
		if (mDoScale) {
			f32 scale = mScaleMgrs[i].calc();
			if (mCSelectId == i) {
				scale *= mSelectedExtraScale;
			}
			mMainPanes[i]->updateScale(scale);
		}
	}

	if (mDoScale) {
		mTimer += sys->mDeltaTime;
		if (mTimer > mTimerMax) {
			mTimer -= mTimerMax;
		}
	}
}

/**
 * @note Address: 0x8030B278
 * @note Size: 0xF8
 */
void MenuMgr::MenuOnOff()
{
	// this never runs in vanilla
	for (int i = 0; i < mElementCount; i++) {
		if (i == mCSelectId) {
			// make both visible
			if (mTextBoxPanes[i]) {
				mTextBoxPanes[i]->setAlpha(255);
			}

			if (mTextBoxTakuPanes[i]) {
				mTextBoxTakuPanes[i]->setAlpha(255);
			}
		} else {
			// hide non-taku textboxes
			if (mTextBoxPanes[i]) {
				mTextBoxPanes[i]->setAlpha(0);
			}
			if (mTextBoxTakuPanes[i]) {
				mTextBoxTakuPanes[i]->setAlpha(255);
			}
		}
	}
}
} // namespace Screen
} // namespace og
