#include "og/newScreen/ogUtil.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/TotalPokoScreen.h"
#include "og/Sound.h"
#include "System.h"
#include "trig.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8032C3AC
 * Size:	0000A0
 */
TotalPokoScreen::TotalPokoScreen()
{
	mIsOpen            = false;
	mCurrentPokoCount  = 2469;
	mPreviousPokoCount = mCurrentPokoCount;
	mDisplayPokoCount  = mCurrentPokoCount;
	mCallBackCounterRV = nullptr;
	mPane              = nullptr;
	_160               = 0.0f;
	mStandardPos.x     = 0.0f;
	mStandardPos.y     = 0.0f;
	mCurrPos.x         = 0.0f;
	mCurrPos.y         = 0.0f;
	mTimer             = 0.0f;
	mNeedAdd           = false;
	mScaleMgr          = new ScaleMgr;
}

/*
 * --INFO--
 * Address:	8032C44C
 * Size:	000070
 */
void TotalPokoScreen::showTotalPoko()
{
	if (!mIsOpen) {
		mIsOpen  = true;
		mTimer   = 0.8f;
		mNeedAdd = true;

		if (!newScreen::checkMovieActive()) {
			ogSound->setOpenTotalPoko();
		}

		mDisplayPokoCount = mPreviousPokoCount;
		mPane->show();
	}
}

/*
 * --INFO--
 * Address:	8032C4BC
 * Size:	000070
 */
void TotalPokoScreen::setTotalPoko(u32 newPokoCount)
{
	mPreviousPokoCount = mCurrentPokoCount;
	mCurrentPokoCount  = newPokoCount;

	if (mIsOpen && mTimer <= 0.0f && !mNeedAdd) {
		mNeedAdd = true;

		if (!newScreen::checkMovieActive()) {
			ogSound->setPlusTotalPoko();
		}
	}
}

/*
 * --INFO--
 * Address:	8032C52C
 * Size:	000044
 */
void TotalPokoScreen::closeTotalPoko()
{
	if (mIsOpen) {
		ogSound->setCloseTotalPoko();
		mIsOpen = false;
	}
}

/*
 * --INFO--
 * Address:	8032C570
 * Size:	000010
 */
void TotalPokoScreen::hideTotalPoko() { mPane->hide(); }

/*
 * --INFO--
 * Address:	8032C580
 * Size:	000138
 */
void TotalPokoScreen::setCallBack(JKRArchive* archive, f32 x, f32 y, f32 scaleX, f32 scaleY)
{
	mCallBackCounterRV = setCallBack_CounterRV(this, 'Ppoko01', &mDisplayPokoCount, 10, false, true, archive);
	mPane              = search('Npoko');
	_160               = 0.0f;
	mStandardPos.x     = x + mPane->mOffset.x;
	mStandardPos.y     = y + mPane->mOffset.y;
	mCurrPos.x         = mStandardPos.x;
	mCurrPos.y         = mStandardPos.y;

	mPane->move(mCurrPos.x, mCurrPos.y);
	J2DPane* pane  = mPane;
	pane->mScale.x = scaleX;
	pane->mScale.y = scaleY;
	pane->calcMtx();
}

/*
 * --INFO--
 * Address:	8032C6B8
 * Size:	000144
 */
void TotalPokoScreen::update()
{
	P2DScreen::Mgr::update();

	if (mIsOpen) {
		mTimer -= sys->mDeltaTime;

		if (mCurrPos.y < mStandardPos.y) {
			mCurrPos.y += 20.0f;

			if (mCurrPos.y >= mStandardPos.y) {
				mCurrPos.y = mStandardPos.y;
				mScaleMgr->up(0.3f, 20.0f, 0.5f, 0.0f);
			}
		}

		if (mTimer < 0.0f) {
			mTimer = 0.0f;

			if (mNeedAdd) {
				mDisplayPokoCount = mCurrentPokoCount;
				mCallBackCounterRV->startPuyoUp(20.0f);

				if (!newScreen::checkMovieActive()) {
					ogSound->setPlusTotalPoko();
				}

				mNeedAdd = false;
			}
		}
	} else {
		if (mCurrPos.y > -80.0f) {
			mCurrPos.y -= 20.0f;
		}
	}

	mPane->updateScale(mScaleMgr->calc());
	mPane->move(mCurrPos.x, mCurrPos.y);
}
} // namespace Screen
} // namespace og
