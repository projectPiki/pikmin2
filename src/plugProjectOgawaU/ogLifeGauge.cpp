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

/*
 * --INFO--
 * Address:	80306038
 * Size:	000158
 */
CallBack_LifeGauge::CallBack_LifeGauge()
{
	mData               = nullptr;
	mNaviLifeRatio      = 1.0f;
	mWidthOrRadiusMaybe = 17.0f;
	mOffsetX            = 0.0f;
	mOffsetY            = 0.0f;
	mLowLifeSoundTimer  = 0.0f;
	_58                 = 1.0f;
	_5C                 = nullptr;
	mPin1               = nullptr;
	mPin2               = nullptr;
	mNa_i               = nullptr;
	mLi_i               = nullptr;

	mLifeGauge       = new LifeGauge;
	_34              = 0.0f;
	_38              = 0.0f;
	mNa_i_d4         = 0.0f;
	mNa_i_d8         = 0.0f;
	mLi_i_d4         = 0.0f;
	mLi_i_d8         = 0.0f;
	_30              = 0.0f;
	mIsActiveNavi    = 1;
	mIsActiveNaviOld = mIsActiveNavi;
	_70              = nullptr;
	_74              = nullptr;
	_78              = nullptr;
	_7C              = nullptr;
	_80              = nullptr;
	_84              = nullptr;

	mAngleMgr = new AngleMgr;
	mScaleMgr = new ScaleMgr;

	mCanNaviChange = false;
	mMoveTimer     = 0.0f;
}

/*
 * --INFO--
 * Address:	80306200
 * Size:	0002C4
 */
void CallBack_LifeGauge::init(P2DScreen::Mgr* mgr, DataNavi* data, LifeGaugeType lifeGaugeType)
{
	if (!mData) {
		mData          = data;
		mNaviLifeRatio = data->mNaviLifeRatio;
		mLifeGauge->init(128);
		mLifeGauge->mSegmentCount = 128.0f * mNaviLifeRatio;
		_5C                       = mgr;

		mPin1 = TagSearch(mgr, 'pin1');
		mPin2 = static_cast<J2DPicture*>(TagSearch(mgr, 'pin2'));
		mNa_i = TagSearch(mgr, 'na_i');
		mLi_i = TagSearch(mgr, 'li_i');

		mNa_i_d4 = mNa_i->mOffset.x;
		mNa_i_d8 = mNa_i->mOffset.y;

		mLi_i_d4 = mLi_i->mOffset.x;
		mLi_i_d8 = mLi_i->mOffset.y;

		mPin1->hide();
		mPin2->hide();
		_70 = static_cast<J2DPicture*>(mgr->search('navi_i'));
		_74 = static_cast<J2DPicture*>(mgr->search('navi2_i'));
		_78 = static_cast<J2DPicture*>(mgr->search('navi3_i'));
		_7C = static_cast<J2DPicture*>(mgr->search('navi'));
		_80 = static_cast<J2DPicture*>(mgr->search('navi2'));
		_84 = static_cast<J2DPicture*>(mgr->search('navi3'));

		if (_80 && _84) {
			_80->hide();
			_84->hide();
			setType(lifeGaugeType);
		}

		if (data->mActiveNaviID) {
			_30              = 0.0f;
			mIsActiveNavi    = true;
			mIsActiveNaviOld = mIsActiveNavi;
			mAngleMgr->init(0.0f, msVal._08, msVal._0C);
		} else {
			_30              = PI;
			mIsActiveNavi    = false;
			mIsActiveNaviOld = mIsActiveNavi;
			mAngleMgr->init(PI, msVal._08, msVal._0C);
		}

		mCanNaviChange = false;
	}
}

/*
 * --INFO--
 * Address:	803064C4
 * Size:	000434
 */
void CallBack_LifeGauge::setType(LifeGaugeType lifeGaugeType)
{
	J2DPicture::TCornerColor color;
	mLifeGaugeType = lifeGaugeType;

	switch (lifeGaugeType) {
	case 1:
		JUTTexture* texture1 = _74->getTexture(0);
		_70->changeTexture(texture1->mTexInfo, 0);

		_7C->setWhite(_80->getWhite());
		_7C->setBlack(_80->getBlack());

		_80->getCornerColor(color);

		_7C->setCornerColor(color);

		break;

	case 2:
		JUTTexture* texture2 = _78->getTexture(0);
		_70->changeTexture(texture2->mTexInfo, 0);

		_7C->setWhite(_84->getWhite());
		_7C->setBlack(_84->getBlack());

		_84->getCornerColor(color);

		_7C->setCornerColor(color);

		break;
	}
}

/*
 * --INFO--
 * Address:	803068F8
 * Size:	000078
 */
void CallBack_LifeGauge::setOffset(f32 x, f32 y)
{
	if (!mPane) {
		JUT_PANICLINE(243, "ERR! : NULL Pane !!!\n");
	} else {
		mOffsetX = (mPane->mBounds.getWidth() / 2) + x;
		mOffsetY = (mPane->mBounds.getHeight() / 2) + y;
	}
}

/*
 * --INFO--
 * Address:	80306970
 * Size:	000318
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
			mAngleMgr->init(_30, msVal._08, msVal._0C);
			mAngleMgr->chase(0.0f, msVal._04);
			mCanNaviChange = true;
			mMoveTimer     = msVal._00;
		} else {
			mAngleMgr->init(_30, msVal._08, msVal._0C);
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

	_30 = mAngleMgr->calc();
	_34 = sinf(_30) * 50.0f;
	_38 = cosf(_30) * 30.0f;

	f32 scale = (cosf(_30) + 1.0f) / 2.0f;
	scale     = ((1.0f - scale) * 0.7f + scale);
	scale     = scale * mScaleMgr->calc();

	mNa_i->move(mNa_i_d4 - _34, mNa_i_d8 - 30.0f + _38);
	mLi_i->move(scale * (mLi_i_d4 - mNa_i_d4) + (mNa_i_d4 - _34), (mLi_i_d8 - 30.0f) + _38);
	mNa_i->updateScale(scale);
	mLi_i->updateScale(scale);
}

/*
 * --INFO--
 * Address:	80306C88
 * Size:	00026C
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
			mLowLifeSoundTimer += _58 * sys->mDeltaTime;
			if (mLowLifeSoundTimer >= 1.0f) {
				mLowLifeSoundTimer = 0.0f;
				if (mNaviLifeRatio > 0.0f && mIsActiveNavi) {
					ogSound->setLifeDanger();
				}
			}
			// inline perhaps?
			f32 timer = mLowLifeSoundTimer;
			f32 scale = mLowLifeSoundTimer / 2.f + 1.0f;
			mPin1->rotate((mPin1->mBounds.f.x - mPin1->mBounds.i.x) / 2.f, (mPin1->mBounds.f.y - mPin1->mBounds.i.y) / 2.f, J2DROTATE_Z,
			              0.0f);
			mPin1->updateScale(scale);
			mPin1->setAlpha(-(timer * 255.0f - 255.0f));

			f32 timerScale = -(_58 * 0.3f - mLowLifeSoundTimer);
			if (timerScale < 0.0f)
				timerScale += 1.0f;

			scale = timerScale / 2.f + 1.0f;
			mPin2->rotate((mPin2->mBounds.f.x - mPin2->mBounds.i.x) / 2.f, (mPin2->mBounds.f.y - mPin2->mBounds.i.y) / 2.f, J2DROTATE_Z,
			              0.0f);
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

/*
 * --INFO--
 * Address:	80306EF4
 * Size:	0000B4
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

/*
 * --INFO--
 * Address:	80306FA8
 * Size:	000118
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
			float temp      = 0.0f;
			cback->mOffsetX = (pane->mBounds.f.x - pane->mBounds.i.x) / 2 + temp;
			J2DPane* pane2  = cback->mPane;
			cback->mOffsetY = (pane2->mBounds.f.y - pane2->mBounds.i.y) / 2 + temp;
		}
	}
}

/*
 * --INFO--
 * Address:	803070C0
 * Size:	00002C
 */
void NaviLifeGauge::setType(CallBack_LifeGauge::LifeGaugeType lifeGaugeType)
{
	if (mCallBackLifeGauge) {
		mCallBackLifeGauge->setType(lifeGaugeType);
	}
}

/*
 * --INFO--
 * Address:	803070EC
 * Size:	00005C
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
