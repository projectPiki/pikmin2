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
	f32 time = sys->mDeltaTime / 0.03333333333f;

	if (mPane && mCanUpdate) {
		f32 dist = mCurrPosition.distance(mGoalPosition);
		if (dist > 0.0f) {
			f32 offs   = dist - mOffset;
			f32 xScale = (mCurrPosition.x - mGoalPosition.x) / dist;
			f32 yScale = (mCurrPosition.y - mGoalPosition.y) / dist;

			f32 weightX = -(mChangeModifier.x * mGrowth - offs * (xScale)*time);
			mChangeModifier.x += time * weightX;

			f32 weightY = -(mChangeModifier.y * mGrowth - offs * (yScale)*time);
			mChangeModifier.y += time * (mParam2 + weightY);

			mGoalPosition.x += mChangeModifier.x * time;
			mGoalPosition.y += mChangeModifier.y * time;

			f32 angle      = mCurrPosition.angleBetween(mGoalPosition);
			mCurrPaneAngle = (angle * RAD2DEG) + 90.0f;

			mPane->setAngle(mCurrPaneAngle);
		}
		mCanUpdate = false;
	}
}

/**
 * @note Address: 0x8032A0D0
 * @note Size: 0x1A0
 */
void CallBack_Furiko::draw(Graphics& gfx, J2DGrafContext& calc)
{
	if (mPane) {
		JGeometry::TVec3f pos1 = mPane->getGlbVtx(GLBVTX_BtmLeft);
		JGeometry::TVec3f pos2 = mPane->getGlbVtx(GLBVTX_TopRight);

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
