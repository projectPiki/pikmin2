#include "og/Screen/DopingScreen.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/Sound.h"
#include "og/newScreen/ogUtil.h"
#include "efx2d/T2DSprayset.h"
#include "trig.h"

namespace og {
namespace Screen {

/**
 * @note Address: 0x8030360C
 * @note Size: 0xF4
 */
DopingScreen::DopingScreen()
{
	mDopingCheck          = new DopingCheck;
	mPaneAll              = nullptr;
	mPaneSpicySpray       = nullptr;
	mPaneBitterSpray      = nullptr;
	mPaneCenterDpad       = nullptr;
	mOffset.x             = 0.0f;
	mOffset.y             = 0.0f;
	mRootPosition.x       = 0.0f;
	mRootPosition.y       = 0.0f;
	mIsSpicySprayEnabled  = false;
	mIsBitterSprayEnabled = false;
	mHasGotSpicySpray     = false;
	mHasGotBitterSpray    = false;
	mHasGotCenterDpad     = false;
	mSpicySprayGet        = 0.0f;
	mBitterSprayGet       = 0.0f;
	mScaleJujiKey         = 0.0f;
	mScaleMgr1            = new ScaleMgr;
	mScaleMgr2            = new ScaleMgr;
	mScaleMgr3            = new ScaleMgr;
}

/**
 * @note Address: 0x80303700
 * @note Size: 0x2CC
 */
void DopingScreen::setCallBack(JKRArchive* arc)
{
	mPaneAll = og::Screen::TagSearch(this, 'Nall');

	J2DPane* temp1 = og::Screen::TagSearch(this, 'toyo_13');
	J2DPane* temp2 = og::Screen::TagSearch(this, 'toyo_12');
	mDopingCheck->init(temp1, temp2, mScaleMgr1, mScaleMgr2);

	mPaneBottleSpicy  = og::Screen::TagSearch(this, 'jb_r');
	mPaneBottleBitter = og::Screen::TagSearch(this, 'jb_y');
	og::Screen::setAlphaScreen(this);

	CallBack_CounterRV* counter1 = setCallBack_CounterRV(this, 'dr_r', 'dr_l', 'dr_l', &mDopingCheck->mSpicySprayCount, 3, 2, 1, arc);
	CallBack_CounterRV* counter2 = setCallBack_CounterRV(this, 'dy_r', 'dy_l', 'dy_l', &mDopingCheck->mBitterSprayCount, 3, 2, 1, arc);
	counter1->setCenteringMode(CallBack_CounterRV::ECM_UNKNOWN_2);
	counter2->setCenteringMode(CallBack_CounterRV::ECM_UNKNOWN_2);

	temp1 = search('dr_c');
	if (temp1->getParentPane()) {
		temp1->getParentPane()->removeChild(temp1);
	}

	temp1 = search('dy_c');
	if (temp1->getParentPane()) {
		temp1->getParentPane()->removeChild(temp1);
	}

	mPaneSpicySpray  = search('Nspray0');
	mPaneBitterSpray = search('Nspray1');
	mPaneCenterDpad  = search('Njujikey');
	mPaneSpicySpray->setBasePosition(J2DPOS_Center);
	mPaneBitterSpray->setBasePosition(J2DPOS_Center);
	mPaneCenterDpad->setBasePosition(J2DPOS_Center);
	mRootPosition.x = mPaneAll->mOffset.x;
	mRootPosition.y = mPaneAll->mOffset.y;
}

/**
 * @note Address: 0x803039CC
 * @note Size: 0x38
 */
void DopingScreen::setParam(DataNavi& data)
{
	DopingCheck* check       = mDopingCheck;
	check->mNaviLifeRatio    = data.mNaviLifeRatio;
	check->mFollowPiki       = data.mFollowPikis;
	check->mNextThrowPiki    = data.mNextThrowPiki;
	check->mSpicySprayCount  = data.mDope1Count;
	check->mBitterSprayCount = data.mDope0Count;
	check->mActiveNaviID     = data.mActiveNaviID;
}

/**
 * @note Address: 0x80303A04
 * @note Size: 0x284
 */
void DopingScreen::update()
{
	P2DScreen::Mgr::update();

	// dpad is hidden by default
	mPaneCenterDpad->hide();

	// If spicy unlocked, show spicy and dpad, otherwise hide it
	if (mIsSpicySprayEnabled) {
		mPaneSpicySpray->show();
		mPaneCenterDpad->show();
		mPaneBottleSpicy->show();
	} else {
		mPaneSpicySpray->hide();
		mPaneBottleSpicy->hide();
	}

	// If bitter unlocked, show spicy and dpad, otherwise hide it
	if (mIsBitterSprayEnabled) {
		mPaneBitterSpray->show();
		mPaneCenterDpad->show();
		mPaneBottleBitter->show();
	} else {
		mPaneBitterSpray->hide();
		mPaneBottleBitter->hide();
	}
	mDopingCheck->update();

	mPaneAll->setOffset(mRootPosition.x, mOffset.x, mRootPosition.y, mOffset.y);

	// when spray 0 is first goten
	if (mHasGotSpicySpray && mSpicySprayGet < 1.0f) {
		mSpicySprayGet += 0.1f;
		if (mSpicySprayGet >= 1.0f) {
			mScaleMgr1->up();
			mDopingCheck->startGetEff_Up();
			ogSound->setGetSpray();
		}
	}

	// when spray 1 is first goten
	if (mHasGotBitterSpray && mBitterSprayGet < 1.0f) {
		mBitterSprayGet += 0.1f;
		if (mBitterSprayGet >= 1.0f) {
			mScaleMgr2->up();
			mDopingCheck->startGetEff_Down();
			ogSound->setGetSpray();
		}
	}

	// when either spray is first gotten
	if (mHasGotCenterDpad && mScaleJujiKey < 1.0f) {
		mScaleJujiKey += 0.1f;
		if (mScaleJujiKey >= 1.0f) {
			mScaleMgr3->up();
		}
	}

	f64 scale1 = mSpicySprayGet * mScaleMgr1->calc();
	f64 scale2 = mBitterSprayGet * mScaleMgr2->calc();
	f64 scale3 = mScaleJujiKey * mScaleMgr3->calc();

	mPaneSpicySpray->updateScale(scale1);
	mPaneBitterSpray->updateScale(scale2);
	mPaneCenterDpad->updateScale(scale3);
}

/**
 * @note Address: 0x80303C88
 * @note Size: 0xC
 */
void DopingScreen::adjPos(f32 x, f32 y)
{
	mOffset.x = x;
	mOffset.y = y;
}

/**
 * @note Address: 0x80303C94
 * @note Size: 0x44
 */
void DopingScreen::setDopingEnable(bool spicyEnabled, bool bitterEnabled)
{
	mIsSpicySprayEnabled  = spicyEnabled;
	mIsBitterSprayEnabled = bitterEnabled;
	if (spicyEnabled) {
		mSpicySprayGet = 1.0f;
	}
	if (bitterEnabled) {
		mBitterSprayGet = 1.0f;
	}

	if (spicyEnabled || bitterEnabled) {
		mScaleJujiKey = 1.0f;
	}
}

/**
 * @note Address: 0x80303CD8
 * @note Size: 0x10
 */
void DopingScreen::openDopingUp()
{
	mHasGotSpicySpray    = true;
	mIsSpicySprayEnabled = true;
}

/**
 * @note Address: 0x80303CE8
 * @note Size: 0x10
 */
void DopingScreen::openDopingDown()
{
	mHasGotBitterSpray    = true;
	mIsBitterSprayEnabled = true;
}

/**
 * @note Address: 0x80303CF8
 * @note Size: 0xC
 */
void DopingScreen::openDopingKey() { mHasGotCenterDpad = true; }

/**
 * @note Address: 0x80303D04
 * @note Size: 0x100
 */
DopingCheck::DopingCheck()
{
	mNaviLifeRatio    = 1.0f;
	mFollowPiki       = 1;
	mNextThrowPiki    = 2;
	mSpicySprayCount  = 10;
	mBitterSprayCount = 10;
	mActiveNaviID     = 1;

	// Inlined init?
	mSpicyPane      = nullptr;
	mBitterPane     = nullptr;
	mNewSpicyCount  = &mSpicySprayCount;
	mNewBitterCount = &mBitterSprayCount;
	mOldSpicyCount  = *mNewSpicyCount;
	mOldBitterCount = *mNewBitterCount;

	mExtractEfx     = new efx2d::T2DExtractUp;
	mIsUpdateCount  = true;
	mSpicyScaleMgr  = nullptr;
	mBitterScaleMgr = nullptr;
	mXOffset        = 20.0f;
}

/**
 * @note Address: 0x80303E04
 * @note Size: 0x44
 */
void DopingCheck::init(J2DPane* pane1, J2DPane* pane2, ScaleMgr* mgr1, ScaleMgr* mgr2)
{
	mSpicyPane      = pane1;
	mBitterPane     = pane2;
	mSpicyScaleMgr  = mgr1;
	mBitterScaleMgr = mgr2;
	mNewSpicyCount  = &mSpicySprayCount;
	mNewBitterCount = &mBitterSprayCount;
	mOldSpicyCount  = *mNewSpicyCount;
	mOldBitterCount = *mNewBitterCount;
	mIsUpdateCount  = true;
}

/**
 * @note Address: 0x80303E48
 * @note Size: 0x100
 */
void DopingCheck::update()
{
	int newSpicyCount  = *mNewSpicyCount;
	int newBitterCount = *mNewBitterCount;
	if (mIsUpdateCount) {
		mIsUpdateCount  = false;
		mOldSpicyCount  = newSpicyCount;
		mOldBitterCount = newBitterCount;
		return;
	}

	if (og::newScreen::checkMovieActive()) {
		mOldSpicyCount  = newSpicyCount;
		mOldBitterCount = newBitterCount;
		return;
	}

	if (newSpicyCount != mOldSpicyCount) {
		if (newSpicyCount > mOldSpicyCount) {
			effStart(mSpicyPane);
			if (mSpicyScaleMgr) {
				mSpicyScaleMgr->up(0.2f, 30.0f, 0.8f, 0.0f);
			}
		}

		mOldSpicyCount = newSpicyCount;
	}

	if (newBitterCount != mOldBitterCount) {
		if (newBitterCount > mOldBitterCount) {
			effStart(mBitterPane);
			if (mBitterScaleMgr) {
				mBitterScaleMgr->up(0.2f, 30.0f, 0.8f, 0.0f);
			}
		}

		mOldBitterCount = newBitterCount;
	}
}

/**
 * @note Address: 0x80303F48
 * @note Size: 0x80
 */
void DopingCheck::effStart(J2DPane* pane)
{
	Vector2f pos;
	og::Screen::calcGlbCenter(pane, &pos);

	efx2d::Arg arg(pos);

	mExtractEfx->create(&arg);
	ogSound->setSprayAdd();
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
void DopingCheck::startGetEff(J2DPane* pane)
{
	Vector2f pos;
	og::Screen::calcGlbCenter(pane, &pos);
	pos.x += mXOffset;

	efx2d::Arg arg(pos);
	efx2d::T2DSprayset efx;
	efx.create(&arg);
}

/**
 * @note Address: 0x80303FC8
 * @note Size: 0xD0
 */
void DopingCheck::startGetEff_Up() { startGetEff(mSpicyPane); }

/**
 * @note Address: 0x80304098
 * @note Size: 0xD0
 */
void DopingCheck::startGetEff_Down() { startGetEff(mBitterPane); }
} // namespace Screen
} // namespace og
