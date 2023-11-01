#include "og/newScreen/SMenu.h"
#include "og/Screen/ArrowAlphaBlink.h"
#include "og/Screen/ogScreen.h"
#include "og/Sound.h"
#include "Controller.h"
#include "System.h"
#include "trig.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80316210
 * Size:	0000EC
 */
ObjSMenuBase::ObjSMenuBase()
{
	mMovePos         = 0.0f;
	mFadeLevel       = 0.0f;
	mState           = MENUSTATE_Default;
	mExiting         = false;
	mAngle           = 0.0f;
	mIsDay1          = false;
	mCancelToState   = MENUCLOSE_None;
	mEnableYaji      = false;
	mAlpha           = 0;
	_88              = 0.0f;
	mButtonStates[1] = Controller::PRESS_R;
	mButtonStates[0] = Controller::PRESS_L;

	mPanePeffect  = nullptr;
	mPanePeffect1 = nullptr;
	mPanePeffect2 = nullptr;
	mScreenLR     = nullptr;

	mNyaji_l    = nullptr;
	mNyaji_r    = nullptr;
	mTyaji_l    = nullptr;
	mTyaji_r    = nullptr;
	mScreenMain = nullptr;
	_A4         = 1.0f;
	mPaneNsize  = nullptr;
	mArrowBlink = new og::Screen::ArrowAlphaBlink;
}

/*
 * --INFO--
 * Address:	803162FC
 * Size:	00003C
 */
void ObjSMenuBase::setFinishState(long id)
{
	SceneSMenuBase* scene = static_cast<SceneSMenuBase*>(getOwner());
	scene->mFinishState   = id;
}

/*
 * --INFO--
 * Address:	80316338
 * Size:	000040
 */
void ObjSMenuBase::setSMenuScale(f32 x, f32 y)
{
	if (mPaneNsize)
		mPaneNsize->updateScale(x, y);
}

/*
 * --INFO--
 * Address:	80316378
 * Size:	0001C4
 */
void ObjSMenuBase::doCreateAfter(JKRArchive* arc, P2DScreen::Mgr* scrn)
{
	mScreenMain   = scrn;
	mPanePeffect1 = static_cast<J2DPictureEx*>(mScreenMain->search('Peffect1'));
	mPanePeffect2 = static_cast<J2DPictureEx*>(mScreenMain->search('Peffect2'));
	mPanePeffect  = static_cast<J2DPictureEx*>(og::Screen::TagSearch(mScreenMain, 'Peffect'));
	og::Screen::setAlphaScreen(mScreenMain);
	mPaneNsize = mScreenMain->search('Nsize');
	og::Screen::setCallBackMessage(mScreenMain);
	og::Screen::setFurikoScreen(mScreenMain);
	mScreenLR = new P2DScreen::Mgr_tuning;
	mScreenLR->set("s_menu_yajirushi_LR.blo", 0x1040000, arc);
	og::Screen::setAlphaScreen(mScreenLR);

	mNyaji_l    = og::Screen::TagSearch(mScreenLR, 'Nyaji_l');
	mYajiLpos.x = mNyaji_l->mOffset.x;
	mYajiLpos.y = mNyaji_l->mOffset.y;
	mNyaji_r    = og::Screen::TagSearch(mScreenLR, 'Nyaji_r');
	mYajiRpos.x = mNyaji_r->mOffset.x;
	mYajiRpos.y = mNyaji_r->mOffset.y;

	mTyaji_l = static_cast<J2DTextBoxEx*>(og::Screen::TagSearch(mScreenLR, 'Tyaji_l'));
	mTyaji_r = static_cast<J2DTextBoxEx*>(og::Screen::TagSearch(mScreenLR, 'Tyaji_r'));
	og::Screen::setCallBackMessage(mScreenLR);
}

/*
 * --INFO--
 * Address:	8031653C
 * Size:	000020
 */
void ObjSMenuBase::commonUpdateBase() { updateYaji(); }

/*
 * --INFO--
 * Address:	8031655C
 * Size:	00012C
 */
bool ObjSMenuBase::doUpdate()
{
	bool ret = false;
	if (mExiting) {
		if (mCancelToState == MENUCLOSE_R) {
			ret = true;
		} else if (mCancelToState == MENUCLOSE_L) {
			ret = true;
		} else {
			JUT_PANICLINE(301, "Cancel ERR!\n");
		}

	} else {
		SceneSMenuBase* scene = static_cast<SceneSMenuBase*>(getOwner());
		if (scene->getGamePad()->mButton.mButtonDown & getButtonState(1)) {
			ret            = true;
			mCancelToState = MENUCLOSE_R;
		} else if (scene->getGamePad()->mButton.mButtonDown & getButtonState(0)) {
			ret            = true;
			mCancelToState = MENUCLOSE_L;
		} else if (scene->getGamePad()->mButton.mButtonDown & (Controller::PRESS_START | Controller::PRESS_B)) {
			mCancelToState = MENUCLOSE_Finish;
			doUpdateCancelAction();
			ret = true;
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80316688
 * Size:	0000D0
 */
void ObjSMenuBase::doUpdateFinish()
{
	stopYaji();
	mFadeLevel = 0.0f;
	switch (mCancelToState) {
	case MENUCLOSE_Finish:
		close_L();
		return;

	case MENUCLOSE_R:
		out_L();
		return;

	case MENUCLOSE_L:
		out_R();
		return;

	case MENUCLOSE_None:
		out_L();
		return;

	default:
		JUT_PANICLINE(348, "updateFinish ERR!\n");
	}
}

/*
 * --INFO--
 * Address:	80316758
 * Size:	000074
 */
void ObjSMenuBase::startBackupScene()
{
	SceneSMenuBase* scene = static_cast<SceneSMenuBase*>(getOwner());
	if (scene->setBackupScene() && !scene->startScene(nullptr)) {
		JUT_PANICLINE(366, "‚¾‚ß‚Å‚·\n");
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void ObjSMenuBase::jump_LR(::Screen::SetSceneArg& arg, bool flag)
{
	SceneSMenuBase* scene = static_cast<SceneSMenuBase*>(getOwner());
	arg._09               = false;
	if (scene->setScene(arg)) {
		StartSceneArgSMenu sarg;
		sarg.mFlag      = true;
		sarg.mSceneType = arg.getSceneType();
		sarg.mFlag      = flag;
		if (!scene->startScene(&sarg)) {
			JUT_PANICLINE(394, "‚¾‚ß‚Å‚·\n");
		}
	}
}

/*
 * --INFO--
 * Address:	803167CC
 * Size:	00002C
 */
void ObjSMenuBase::close_L()
{
	mState = MENUSTATE_CloseL;
	ogSound->setClose();
}

/*
 * --INFO--
 * Address:	803167F8
 * Size:	0000E4
 */
void ObjSMenuBase::jump_L(::Screen::SetSceneArg& arg) { jump_LR(arg, false); }

/*
 * --INFO--
 * Address:	803168DC
 * Size:	0000E4
 */
void ObjSMenuBase::jump_R(::Screen::SetSceneArg& arg) { jump_LR(arg, true); }

/*
 * --INFO--
 * Address:	803169C0
 * Size:	000150
 */
bool ObjSMenuBase::start_LR(::Screen::StartSceneArg const* arg)
{
	mFadeLevel = 0.0f;
	if (arg) {
		if (arg->getSceneType() == SCENE_PAUSE_MENU_MAP || arg->getSceneType() == SCENE_PAUSE_MENU_ITEMS
		    || arg->getSceneType() == SCENE_PAUSE_MENU_CONTROLS || arg->getSceneType() == SCENE_PAUSE_MENU
		    || arg->getSceneType() == SCENE_PAUSE_MENU_DOUKUTU || arg->getSceneType() == SCENE_PAUSE_MENU_VS) {

			StartSceneArgSMenu* menuArg = static_cast<StartSceneArgSMenu*>((::Screen::StartSceneArg*)(arg));
			if (menuArg->mFlag) {
				mMovePos = 800.0f;
				in_L();

			} else {
				mMovePos = -800.0f;
				in_R();
			}
		}

	} else {
		mMovePos = 800.0f;
		in_L();
	}

	return true;
}

/*
 * --INFO--
 * Address:	80316B10
 * Size:	000068
 */
void ObjSMenuBase::setYajiName(u64 tag1, u64 tag2, u64 tag3)
{
	if (mTyaji_l && mTyaji_r) {
		mTyaji_l->setMsgID(tag1);
		mTyaji_r->setMsgID(tag2);
	} else {
		JUT_PANICLINE(481, "setYajiName ERR! \n");
	}
}

/*
 * --INFO--
 * Address:	80316B78
 * Size:	000004
 */
void ObjSMenuBase::loop() { }

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void ObjSMenuBase::startYaji() { mEnableYaji = true; }

/*
 * --INFO--
 * Address:	80316B7C
 * Size:	00000C
 */
void ObjSMenuBase::stopYaji() { mEnableYaji = false; }

/*
 * --INFO--
 * Address:	80316B88
 * Size:	000304
 */
void ObjSMenuBase::updateYaji()
{
	f32 newalpha = 0.0f;
	f32 newxpos  = 0.0f;

	if (msBaseVal.mUpdateYaji) {
		static f32 angle;
		static s8 init;

		if (!init) {
			angle = 0.0f;
			init  = true;
		}
		angle += msBaseVal._10;

		if (angle > TAU) {
			angle -= TAU;
		}
		newxpos = msBaseVal._0C * sinf(angle);

		f32 temp = angle - HALF_PI;
		if (temp > 0.0f && temp < PI) {
			newalpha = 1.0f;
			if (temp < QUARTER_PI) {
				newalpha = temp / QUARTER_PI;
			} else if (temp > 2.3561945f) {
				newalpha = (PI - temp) / 0.78539824f;
			}
		}
	}

	mNyaji_l->setOffset(mYajiLpos.x + newxpos, mYajiLpos.y);
	mNyaji_r->setOffset(mYajiRpos.x - newxpos, mYajiRpos.y);

	if (mEnableYaji) {
		u8 alpha = mAlpha;
		if (alpha < 255) {
			int alpha2 = (255 - alpha) / 7;
			int alpha3 = alpha2 + alpha;
			alpha3++;
			mAlpha = alpha3;
		}
	} else {
		u8 alpha = mAlpha;
		if (alpha > 0) {
			mAlpha = alpha - (alpha / 2 + 1);
		}
	}

	u8 newAlphaVal;
	if (msBaseVal.mUpdateYaji) {
		newAlphaVal = (f32)mAlpha * newalpha;
	} else {
		mArrowBlink->setSpeed(msBaseVal._10);
		newalpha    = mArrowBlink->calc();
		newAlphaVal = (f32)mAlpha * newalpha;
	}

	mNyaji_l->setAlpha(newAlphaVal);
	mNyaji_r->setAlpha(newAlphaVal);

	mScreenLR->setAlpha(mAlpha);
	mScreenLR->update();
}

/*
 * --INFO--
 * Address:	80316E8C
 * Size:	000034
 */
void ObjSMenuBase::drawYaji(Graphics& gfx) { mScreenLR->draw(gfx, gfx.mPerspGraph); }

/*
 * --INFO--
 * Address:	80316EC0
 * Size:	000170
 */
bool ObjSMenuBase::updateFadeIn()
{
	bool ret        = false;
	Controller* pad = getGamePad();
	switch (mState) {
	case MENUSTATE_OpenL:
		mFadeLevel += sys->mDeltaTime;
		if (mFadeLevel > msBaseVal._08) {
			ret = true;
		} else if (pad->mButton.mButtonDown & mButtonStates[1]) {
			mCancelToState = MENUCLOSE_R;
			mExiting       = true;
		}
		f32 calc2 = (1.0f - og::Screen::calcSmooth0to1(mFadeLevel, msBaseVal._08));
		mMovePos  = 800.0f * calc2;
		break;

	case MENUSTATE_OpenR:
		mFadeLevel += sys->mDeltaTime;
		if (mFadeLevel > msBaseVal._08) {
			ret = true;
		} else if (pad->mButton.mButtonDown & mButtonStates[0]) {
			mCancelToState = MENUCLOSE_L;
			mExiting       = true;
		}
		f32 calc = (1.0f - og::Screen::calcSmooth0to1(mFadeLevel, msBaseVal._08));
		mMovePos = -800.0f * calc;
		break;

	case MENUSTATE_Default:
		break;

	default:
		JUT_PANICLINE(621, "FadeIn ERR!\n");
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80317030
 * Size:	0000A8
 */
bool ObjSMenuBase::doUpdateFadein()
{
	commonUpdate();
	bool ret = updateFadeIn();
	if (!ret && mExiting) {
		if (mState == MENUSTATE_OpenL) {
			if (mMovePos <= 0.0f) {
				return true;
			}
		} else if (mState == MENUSTATE_OpenR && mMovePos >= 0.0f) {
			return true;
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803170D8
 * Size:	000054
 */
void ObjSMenuBase::doUpdateFadeinFinish()
{
	if (!mExiting) {
		mEnableYaji = true;
		wait();
	}
	mFadeLevel = 0.0f;
}

/*
 * --INFO--
 * Address:	8031712C
 * Size:	000104
 */
bool ObjSMenuBase::updateFadeOut()
{
	bool ret = false;
	switch (mState) {
	case MENUSTATE_CloseL:
		mFadeLevel += sys->mDeltaTime;
		if (mFadeLevel > msBaseVal._08) {
			ret = true;
		}
		f32 calc = og::Screen::calcSmooth0to1(mFadeLevel, msBaseVal._08);
		mMovePos = -800.0f * calc;
		break;
	case MENUSTATE_CloseR:
		mFadeLevel += sys->mDeltaTime;
		if (mFadeLevel > msBaseVal._08) {
			ret = true;
		}
		f32 calc2 = og::Screen::calcSmooth0to1(mFadeLevel, msBaseVal._08);
		mMovePos  = 800.0f * calc2;
		break;
	case MENUSTATE_Default:
		break;

	default:
		JUT_PANICLINE(691, "FadeOut ERR!\n");
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80317230
 * Size:	000164
 */
void ObjSMenuBase::doUpdateFadeoutFinish()
{
	switch (mCancelToState) {
	case MENUCLOSE_Finish:
		startBackupScene();
		setFinishState(2);
		break;

	case MENUCLOSE_R:
		doUpdateRAction();
		setFinishState(1);
		break;

	case MENUCLOSE_L:
		doUpdateLAction();
		setFinishState(1);
		break;

	case MENUCLOSE_None:
		setFinishState(1);
		break;

	default:
		JUT_PANICLINE(720, "updateFinish ERR!\n");
	}
}

ObjSMenuBase::StaticValues ObjSMenuBase::msBaseVal;

} // namespace newScreen
} // namespace og
