#include "og/Screen/callbackNodes.h"
#include "System.h"
#include "Vector3.h"
#include "og/Screen/ogScreen.h"
#include "trig.h"

namespace og {
namespace Screen {

/**
 * @note Address: N/A
 * @note Size: 0xB4
 */
CallBack_Furiko::CallBack_Furiko()
{
	mPane             = nullptr;
	mCanUpdate        = false;
	mDoResetPane      = true;
	mCurrPosition.x   = 0.0f;
	mCurrPosition.y   = 0.0f;
	mOffset           = 230.0f;
	mParam2           = 57.5f;
	mGrowth           = 0.43f;
	mGoalPosition.x   = mCurrPosition.x;
	mGoalPosition.y   = mCurrPosition.y + mOffset;
	mChangeModifier.x = 0.0f;
	mChangeModifier.y = 0.0f;
	mCurrPaneAngle    = 0.0f;
}

/**
 * @note Address: 0x80329F18
 * @note Size: 0x40
 */
void CallBack_Furiko::stop()
{
	mCanUpdate      = false;
	mDoResetPane    = true;
	mCurrPosition   = Vector2f(0.0f);
	mGoalPosition.x = mCurrPosition.x;
	mGoalPosition.y = mCurrPosition.y + mOffset;
	mChangeModifier = Vector2f(0.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0xF4
 */
void CallBack_Furiko::init(J2DPane* pane, f32 a, f32 b, f32 c)
{
	if (pane) {
		mPane = pane;
		mPane->resetAngle();

		mOffset           = 230.0f;
		mParam2           = 57.5f;
		mGrowth           = 0.43f;
		mCanUpdate        = false;
		mDoResetPane      = true;
		mCurrPosition.x   = 0.0f;
		mCurrPosition.y   = 0.0f;
		mGoalPosition.x   = mCurrPosition.x;
		mGoalPosition.y   = mCurrPosition.y + mOffset;
		mChangeModifier.x = 0.0f;
		mChangeModifier.y = 0.0f;
	} else {
		JUT_PANICLINE(118, "NULL pane.\n");
	}
}

/**
 * @note Address: 0x80329F58
 * @note Size: 0x10
 */
void CallBack_Furiko::setParam(f32 p1, f32 p2, f32 p3)
{
	mOffset = p1;
	mGrowth = p2;
	mParam2 = p3;
}

/**
 * @note Address: 0x80329F68
 * @note Size: 0x168
 */
void CallBack_Furiko::update()
{
	// Updates @ 30FPS
	f32 time = sys->mDeltaTime / 0.033333f;

	if (mPane && mCanUpdate) {
		Vector2f diff = mCurrPosition - mGoalPosition;

		f32 dist = _lenVec2D(diff);
		if (dist > 0.0f) {
			f32 offs = dist - mOffset;

			f32 weightX       = -(mChangeModifier.x * mGrowth - offs * (diff.x / dist) * time);
			mChangeModifier.x = time * weightX + mChangeModifier.x;

			f32 weightY       = -(mChangeModifier.y * mGrowth - offs * (diff.y / dist) * time);
			mChangeModifier.y = time * (mParam2 + weightY) + mChangeModifier.y;

			mGoalPosition.x += mChangeModifier.x * time;
			mGoalPosition.y += mChangeModifier.y * time;

			f32 angle      = mCurrPosition.angleBetween(mGoalPosition);
			mCurrPaneAngle = (angle * RAD2DEG) + 90.0f;

			mPane->setAngle(mCurrPaneAngle);
		}
		mCanUpdate = false;
	}
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f0, lbl_8051DEB8@sda21(r2)
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r4, sys@sda21(r13)
lwz      r0, 0x1c(r3)
lfs      f1, 0x54(r4)
cmplwi   r0, 0
fdivs    f0, f1, f0
beq      lbl_8032A0BC
lbz      r0, 0x20(r31)
cmplwi   r0, 0
beq      lbl_8032A0BC
lfs      f2, 0x28(r31)
lfs      f1, 0x3c(r31)
lfs      f3, 0x24(r31)
fsubs    f6, f2, f1
lfs      f2, 0x38(r31)
lfs      f1, lbl_8051DEA8@sda21(r2)
fsubs    f3, f3, f2
fmuls    f2, f6, f6
fmadds   f5, f3, f3, f2
fcmpo    cr0, f5, f1
ble      lbl_80329FE0
ble      lbl_80329FE4
frsqrte  f1, f5
fmuls    f5, f1, f5
b        lbl_80329FE4

lbl_80329FE0:
fmr      f5, f1

lbl_80329FE4:
lfs      f1, lbl_8051DEA8@sda21(r2)
fcmpo    cr0, f5, f1
ble      lbl_8032A0B4
fdivs    f2, f3, f5
lfs      f1, 0x2c(r31)
lis      r3, atanTable___5JMath@ha
lfs      f4, 0x40(r31)
lfs      f3, 0x34(r31)
addi     r3, r3, atanTable___5JMath@l
fsubs    f7, f5, f1
fdivs    f1, f6, f5
fmuls    f2, f7, f2
fmuls    f1, f7, f1
fmuls    f2, f0, f2
fmuls    f1, f0, f1
fnmsubs  f2, f4, f3, f2
fmadds   f2, f0, f2, f4
stfs     f2, 0x40(r31)
lfs      f3, 0x44(r31)
lfs      f2, 0x34(r31)
lfs      f4, 0x30(r31)
fnmsubs  f1, f3, f2, f1
fadds    f1, f4, f1
fmadds   f1, f0, f1, f3
stfs     f1, 0x44(r31)
lfs      f2, 0x40(r31)
lfs      f1, 0x38(r31)
fmadds   f1, f2, f0, f1
stfs     f1, 0x38(r31)
lfs      f2, 0x44(r31)
lfs      f1, 0x3c(r31)
fmadds   f0, f2, f0, f1
stfs     f0, 0x3c(r31)
lfs      f1, 0x24(r31)
lfs      f0, 0x38(r31)
lfs      f2, 0x28(r31)
fsubs    f0, f1, f0
lfs      f1, 0x3c(r31)
fsubs    f1, f2, f1
fneg     f2, f0
bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
lfs      f2, lbl_8051DEC0@sda21(r2)
lfs      f0, lbl_8051DEBC@sda21(r2)
fmadds   f0, f2, f1, f0
stfs     f0, 0x48(r31)
lwz      r3, 0x1c(r31)
lfs      f0, 0x48(r31)
stfs     f0, 0xc0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl

lbl_8032A0B4:
li       r0, 0
stb      r0, 0x20(r31)

lbl_8032A0BC:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/**
 * @note Address: 0x8032A0D0
 * @note Size: 0x1A0
 */
void CallBack_Furiko::draw(Graphics& gfx, J2DGrafContext& calc)
{
	if (mPane) {
		JGeometry::TVec3f pos1 = mPane->getGlbVtx(0);
		JGeometry::TVec3f pos2 = mPane->getGlbVtx(3);

		u8 basePos = mPane->mBasePosition;
		switch (basePos % 3) {
		case 0:
			mCurrPosition.x = pos1.x;
			break;
		case 1:
			mCurrPosition.x = (pos1.x + pos2.x) / 2;
			break;
		case 2:
			mCurrPosition.x = pos2.x;
			break;
		}

		switch (basePos / 3) {
		case 0:
			mCurrPosition.y = pos1.y;
			break;
		case 1:
			mCurrPosition.y = (pos1.y + pos2.y) / 2;
			break;
		case 2:
			mCurrPosition.y = pos2.y;
			break;
		}

		if (mDoResetPane) {
			mGoalPosition.x   = mCurrPosition.x;
			mGoalPosition.y   = mCurrPosition.y + mOffset;
			mChangeModifier.x = 0.0f;
			mChangeModifier.y = 0.0f;
			mDoResetPane      = false;
		}

		mCanUpdate = true;
	}
}

/**
 * @note Address: 0x8032A270
 * @note Size: 0x1D0
 */
CallBack_Furiko* setCallBack_Furiko(P2DScreen::Mgr* screen, u64 tag)
{
	CallBack_Furiko* furiko = new CallBack_Furiko;
	P2ASSERTLINE(227, furiko);

	J2DPane* pane2 = TagSearch(screen, tag);
	P2ASSERTLINE(229, pane2);
	furiko->init(pane2, 0.0f, 0.0f, 0.0f); // the constants do nothing
	screen->addCallBack(tag, furiko);
	u64 msgID         = (u64)furiko;
	pane2->mMessageID = msgID; // ??????????????
	return furiko;
}

/**
 * @note Address: 0x8032A440
 * @note Size: 0x270
 */
void setFurikoScreen(P2DScreen::Mgr* screen)
{
	for (int i = 0; i < 100; i++) {
		u64 tag       = 'furiko00' + (i % 10) + (i / 10) % 10 * 256;
		J2DPane* pane = screen->search(tag);
		if (pane) {
			pane->mMessageID = (u64)setCallBack_Furiko(screen, tag);
		}
	}
}

/**
 * @note Address: 0x8032A6B0
 * @note Size: 0x24
 */
CallBack_Furiko* getFurikoPtr(P2DScreen::Mgr* screen, u64 tag)
{
	J2DPane* pane = TagSearch(screen, tag);
	return (CallBack_Furiko*)pane->mMessageID;
}
} // namespace Screen
} // namespace og
