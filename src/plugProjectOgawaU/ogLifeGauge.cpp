#include "og/Screen/callbackNodes.h"
#include "og/Screen/NaviLifeGauge.h"
#include "og/Screen/ogScreen.h"
#include "og/newScreen/ogUtil.h"
#include "LifeGaugeMgr.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "System.h"
#include "og/Sound.h"
#include "trig.h"

namespace og {
namespace Screen {

/**
 * @note Address: 0x80306038
 * @note Size: 0x158
 */
CallBack_LifeGauge::CallBack_LifeGauge()
{
	mData                = nullptr;
	mNaviLifeRatio       = 1.0f;
	mWidthOrRadiusMaybe  = 17.0f;
	mOffsetX             = 0.0f;
	mOffsetY             = 0.0f;
	mLowLifeSoundTimer   = 0.0f;
	mLowLifeSoundRateMod = 1.0f;
	mScreenOwner         = nullptr;
	mPin1                = nullptr;
	mPin2                = nullptr;
	mNa_i                = nullptr;
	mLi_i                = nullptr;

	mLifeGauge           = new LifeGauge;
	mCurrentAngleSin     = 0.0f;
	mCurrentAngleCos     = 0.0f;
	mNaviIconOffset.x    = 0.0f;
	mNaviIconOffset.y    = 0.0f;
	mLifeIconOffset.x    = 0.0f;
	mLifeIconOffset.y    = 0.0f;
	mCurrentAngle        = 0.0f;
	mIsActiveNavi        = 1;
	mIsActiveNaviOld     = mIsActiveNavi;
	mPaneOlimarIcon      = nullptr;
	mPaneLouieIcon       = nullptr;
	mPanePresidentIcon   = nullptr;
	mPaneOlimarBorder    = nullptr;
	mPaneLouieBorder     = nullptr;
	mPanePresidentBorder = nullptr;

	mAngleMgr = new AngleMgr;
	mScaleMgr = new ScaleMgr;

	mCanNaviChange = false;
	mMoveTimer     = 0.0f;
}

/**
 * @note Address: 0x80306200
 * @note Size: 0x2C4
 */
void CallBack_LifeGauge::init(P2DScreen::Mgr* mgr, DataNavi* data, LifeGaugeType lifeGaugeType)
{
	if (!mData) {
		mData          = data;
		mNaviLifeRatio = data->mNaviLifeRatio;
		mLifeGauge->init(128);
		mLifeGauge->mCurrentSegmentNum = 128.0f * mNaviLifeRatio;
		mScreenOwner                   = mgr;

		mPin1 = TagSearch(mgr, 'pin1');
		mPin2 = static_cast<J2DPicture*>(TagSearch(mgr, 'pin2'));
		mNa_i = TagSearch(mgr, 'na_i');
		mLi_i = TagSearch(mgr, 'li_i');

		mNaviIconOffset.x = mNa_i->mOffset.x;
		mNaviIconOffset.y = mNa_i->mOffset.y;

		mLifeIconOffset.x = mLi_i->mOffset.x;
		mLifeIconOffset.y = mLi_i->mOffset.y;

		mPin1->hide();
		mPin2->hide();
		mPaneOlimarIcon      = static_cast<J2DPicture*>(mgr->search('navi_i'));
		mPaneLouieIcon       = static_cast<J2DPicture*>(mgr->search('navi2_i'));
		mPanePresidentIcon   = static_cast<J2DPicture*>(mgr->search('navi3_i'));
		mPaneOlimarBorder    = static_cast<J2DPicture*>(mgr->search('navi'));
		mPaneLouieBorder     = static_cast<J2DPicture*>(mgr->search('navi2'));
		mPanePresidentBorder = static_cast<J2DPicture*>(mgr->search('navi3'));

		if (mPaneLouieBorder && mPanePresidentBorder) {
			mPaneLouieBorder->hide();
			mPanePresidentBorder->hide();
			setType(lifeGaugeType);
		}

		if (data->mActiveNaviID) {
			mCurrentAngle    = 0.0f;
			mIsActiveNavi    = true;
			mIsActiveNaviOld = mIsActiveNavi;
			mAngleMgr->init(0.0f, msVal._08, msVal._0C);
		} else {
			mCurrentAngle    = PI;
			mIsActiveNavi    = false;
			mIsActiveNaviOld = mIsActiveNavi;
			mAngleMgr->init(PI, msVal._08, msVal._0C);
		}

		mCanNaviChange = false;
	}
}

/**
 * @note Address: 0x803064C4
 * @note Size: 0x434
 */
void CallBack_LifeGauge::setType(LifeGaugeType lifeGaugeType)
{
	J2DPicture::TCornerColor color;
	mLifeGaugeType = lifeGaugeType;

	switch (lifeGaugeType) {
	case LIFEGAUGE_LOUIE:
		JUTTexture* texture1 = mPaneLouieIcon->getTexture(0);
		mPaneOlimarIcon->changeTexture(texture1->mTexInfo, 0);

		mPaneOlimarBorder->setWhite(mPaneLouieBorder->getWhite());
		mPaneOlimarBorder->setBlack(mPaneLouieBorder->getBlack());

		mPaneLouieBorder->getCornerColor(color);
		mPaneOlimarBorder->setCornerColor(color);
		break;

	case LIFEGAUGE_PRESIDENT:
		JUTTexture* texture2 = mPanePresidentIcon->getTexture(0);
		mPaneOlimarIcon->changeTexture(texture2->mTexInfo, 0);

		mPaneOlimarBorder->setWhite(mPanePresidentBorder->getWhite());
		mPaneOlimarBorder->setBlack(mPanePresidentBorder->getBlack());

		mPanePresidentBorder->getCornerColor(color);
		mPaneOlimarBorder->setCornerColor(color);
		break;
	}
}

/**
 * @note Address: 0x803068F8
 * @note Size: 0x78
 */
void CallBack_LifeGauge::setOffset(f32 x, f32 y)
{
	if (!mPane) {
		JUT_PANICLINE(243, "ERR! : NULL Pane !!!\n");
	} else {
		mOffsetX = (mPane->getWidth() / 2) + x;
		mOffsetY = (mPane->getHeight() / 2) + y;
	}
}

/**
 * @note Address: 0x80306970
 * @note Size: 0x318
 */
void CallBack_LifeGauge::moveIcon()
{
	mIsActiveNaviOld = mIsActiveNavi;
	if (mData) {
		mIsActiveNavi = mData->mActiveNaviID;
	}

	u8 cNavi = mIsActiveNavi;
	if (cNavi != mIsActiveNaviOld) {
		if (cNavi) {
			mAngleMgr->init(mCurrentAngle, msVal._08, msVal._0C);
			mAngleMgr->chase(0.0f, msVal._04);
			mCanNaviChange = true;
			mMoveTimer     = msVal._00;
		} else {
			mAngleMgr->init(mCurrentAngle, msVal._08, msVal._0C);
			mAngleMgr->chase(PI, msVal._04);
		}
	} else if (cNavi && mCanNaviChange) {
		mMoveTimer -= sys->mDeltaTime;
		if (mMoveTimer < 0.0f) {
			mCanNaviChange = false;
			ogSound->setNaviChange(mLifeGaugeType);
			mScaleMgr->up(0.4f, 30.0f, 0.6f, 0.0f);
		}
	}

	mCurrentAngle    = mAngleMgr->calc();
	mCurrentAngleSin = sinf(mCurrentAngle) * 50.0f;
	mCurrentAngleCos = cosf(mCurrentAngle) * 30.0f;

	f32 scale = (cosf(mCurrentAngle) + 1.0f) / 2.0f;
	scale     = ((1.0f - scale) * 0.7f + scale);
	scale     = scale * mScaleMgr->calc();

	mNa_i->move(mNaviIconOffset.x - mCurrentAngleSin, mNaviIconOffset.y - 30.0f + mCurrentAngleCos);
	mLi_i->move(scale * (mLifeIconOffset.x - mNaviIconOffset.x) + (mNaviIconOffset.x - mCurrentAngleSin),
	            (mLifeIconOffset.y - 30.0f) + mCurrentAngleCos);
	mNa_i->updateScale(scale);
	mLi_i->updateScale(scale);
}

/**
 * @note Address: 0x80306C88
 * @note Size: 0x26C
 */
void CallBack_LifeGauge::update()
{
	if (!og::newScreen::checkMovieActive()) {
		moveIcon();
		mNaviLifeRatio = mData->mNaviLifeRatio;
		mLifeGauge->update(mNaviLifeRatio);
		if (mNaviLifeRatio < 0.5f) {
			mPin1->show();
			mPin2->show();
			mLowLifeSoundTimer += mLowLifeSoundRateMod * sys->mDeltaTime;
			if (mLowLifeSoundTimer >= 1.0f) {
				mLowLifeSoundTimer = 0.0f;
				if (mNaviLifeRatio > 0.0f && mIsActiveNavi) {
					ogSound->setLifeDanger();
				}
			}
			// inline perhaps?
			f32 timer = mLowLifeSoundTimer;
			f32 scale = mLowLifeSoundTimer / 2.f + 1.0f;
			mPin1->rotate((mPin1->getWidth()) / 2.f, (mPin1->getHeight()) / 2.f, J2DROTATE_Z, 0.0f);
			mPin1->updateScale(scale);
			mPin1->setAlpha(-(timer * 255.0f - 255.0f));

			f32 timerScale = -(mLowLifeSoundRateMod * 0.3f - mLowLifeSoundTimer);
			if (timerScale < 0.0f)
				timerScale += 1.0f;

			scale = timerScale / 2.f + 1.0f;
			mPin2->rotate((mPin2->getWidth()) / 2.f, (mPin2->getHeight()) / 2.f, J2DROTATE_Z, 0.0f);
			mPin2->updateScale(scale);
			mPin2->setAlpha(-(timerScale * 255.0f - 255.0f));
			if (mNaviLifeRatio <= 0.0f) {
				mNa_i->hide();
				mLi_i->hide();
			} else {
				mNa_i->show();
				mLi_i->show();
			}
		} else {
			mPin1->hide();
			mPin2->hide();
		}
	}
}

/**
 * @note Address: 0x80306EF4
 * @note Size: 0xB4
 */
void CallBack_LifeGauge::draw(Graphics& gfx, J2DGrafContext& context)
{
	if (mNaviLifeRatio > 0.0f) {
		LifeGauge::initLifeGaugeDraw();
		Mtx concatMtx;
		PSMTXConcat(context.mPosMtx, mPane->mGlobalMtx, concatMtx);
		GXLoadPosMtxImm(concatMtx, 0);

		mLifeGauge->draw(mWidthOrRadiusMaybe, mOffsetX, mOffsetY);

		if (mNaviLifeRatio < 0.5f) {
			mPin2->draw(mOffsetX, mOffsetY, false, false, false);
		}
	}
}

/**
 * @note Address: 0x80306FA8
 * @note Size: 0x118
 */
void NaviLifeGauge::setCallBack(DataNavi* data, CallBack_LifeGauge::LifeGaugeType lifeGaugeType)
{
	if (!mDataNavi) {
		mDataNavi = data;
		setAlphaScreen(this);
		mCallBackLifeGauge = new CallBack_LifeGauge;
		mCallBackLifeGauge->init(this, data, lifeGaugeType);
		addCallBack('life', mCallBackLifeGauge);
		mCallBackDrawAfter = setCallBack_DrawAfter(this, 'mete');

		CallBack_LifeGauge* cback = mCallBackLifeGauge;
		J2DPane* pane             = cback->mPane;
		if (!pane) {
			JUT_PANICLINE(243, "ERR! : NULL Pane !!!\n");
		} else {
			f32 temp        = 0.0f;
			cback->mOffsetX = (pane->getWidth()) / 2 + temp;
			J2DPane* pane2  = cback->mPane;
			cback->mOffsetY = (pane2->getHeight()) / 2 + temp;
		}
	}
}

/**
 * @note Address: 0x803070C0
 * @note Size: 0x2C
 */
void NaviLifeGauge::setType(CallBack_LifeGauge::LifeGaugeType lifeGaugeType)
{
	if (mCallBackLifeGauge) {
		mCallBackLifeGauge->setType(lifeGaugeType);
	}
}

/**
 * @note Address: 0x803070EC
 * @note Size: 0x5C
 */
void NaviLifeGauge::update()
{
	P2DScreen::Mgr::update();
	if (mDataNavi->mNaviLifeRatio > 0.0f) {
		mCallBackDrawAfter->mIsVisible = true;
	} else {
		mCallBackDrawAfter->mIsVisible = false;
	}
}

CallBack_LifeGauge::StaticValues CallBack_LifeGauge::msVal;

} // namespace Screen
} // namespace og
