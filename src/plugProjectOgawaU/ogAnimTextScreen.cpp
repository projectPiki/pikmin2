#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/anime.h"
#include "og/newscreen/SMenu.h"
#include "trig.h"
#include "System.h"

namespace og {
namespace Screen {

/**
 * @note Address: 0x803087B8
 * @note Size: 0x134
 */
AnimText_Screen* setAnimTextScreen(JKRArchive* arc, P2DScreen::Mgr* parentScreen, u64 tag)
{
	P2DScreen::Mgr* scrn = new P2DScreen::Mgr;
	scrn->set("anim_text.blo", 0x40000, arc);

	J2DTextBoxEx* pane = static_cast<J2DTextBoxEx*>(og::Screen::TagSearch(parentScreen, tag));
	pane->setString("");
	pane->hide();

	AnimText_Screen* anm = new AnimText_Screen(scrn, 'joint');
	anm->mTextBox        = pane;
	anm->setText(pane->mMessageID);

	AnimScreen* anmscrn = new AnimScreen;
	anmscrn->init(arc, scrn, "anim_text.bck");
	anm->setAnimScreen(anmscrn);

	parentScreen->addCallBack(tag, anm);
	og::Screen::setCallBackMessage(scrn);
	anmscrn->mIsRepeating = false;

	anm->stop();
	return anm;
}

/**
 * @note Address: 0x803088EC
 * @note Size: 0x13C
 */
AnimText_Screen* setMenuScreen(JKRArchive* arc, P2DScreen::Mgr* parentScreen, u64 tag)
{
	AnimText_Screen* anm = setAnimTextScreen(arc, parentScreen, tag);
	anm->mColorType      = ANIMTEXTCOLOR_Menu;
	return anm;
}

/**
 * @note Address: 0x80308A28
 * @note Size: 0x13C
 */
AnimText_Screen* setMenuTitleScreen(JKRArchive* arc, P2DScreen::Mgr* parentScreen, u64 tag)
{
	AnimText_Screen* anm = setAnimTextScreen(arc, parentScreen, tag);
	anm->mColorType      = ANIMTEXTCOLOR_Title;
	return anm;
}

/**
 * @note Address: 0x80308B64
 * @note Size: 0x228
 */
AnimText_Screen::AnimText_Screen(P2DScreen::Mgr* scrn, u64 tag)
    : CallBack_Screen(scrn, tag)
{
	char buf[24];
	if (!mPane) {
		TagToName(tag, buf);
	}
	mAnmScreen       = nullptr;
	mIsUpdateSuccess = false;
	mMsgBodyPane     = nullptr;
	mMsgBackPane     = nullptr;
	mNeedOpenText    = false;
	mTag             = 0;
	mMsgBodyPane     = static_cast<J2DTextBox*>(og::Screen::TagSearch(scrn, 'msg_body'));
	mMsgBackPane     = static_cast<J2DTextBox*>(og::Screen::TagSearch(scrn, 'msg_back'));
	mBlinkTimer      = 0.0f;
	mBlinkFactor     = 0.0f;
	mBlinkLevel      = 1.0f;
	mIsBlinking      = false;
	mMesgAlpha       = 1.0f;
	og::newScreen::ObjSMenuPause::ObjHIOVal::getMenuColor(
	    &mGreyedOutBodyWhite, &mGreyedOutBodyBlack, &mMenuBodyBlink1, &mMenuBodyBlink2, &mMenuBodyWhite, &mMenuBodyBlack, &mMenuBgWhite,
	    &mMenuBgBlack, &mGreyedOutBgWhite, &mGreyedOutBgBlack, &mTitleBodyWhite, &mTitleBodyBlack, &mTitleBgWhite, &mTitleBgBlack);
	mDefaultBgWhite       = mMsgBackPane->getWhite();
	mDefaultBgBlack       = mMsgBackPane->getBlack();
	mCurrentMenuBodyWhite = mMenuBodyWhite;
	mColorType            = ANIMTEXTCOLOR_Default;
}

/**
 * @note Address: 0x80308E0C
 * @note Size: 0x60C
 */
void AnimText_Screen::update()
{
	og::Screen::CallBack_Screen::update();
	if (mAnmScreen) {
		mIsUpdateSuccess = mAnmScreen->update();

		if (mNeedOpenText) {
			if (mTag) {
				if (!mIsUpdateSuccess) {
					setText(mTag);
					mTag = 0;
					open(0.0f);
				}
			} else if (!mIsUpdateSuccess) {
				mNeedOpenText = false;
			}
		}

		J2DTextBox* pane = static_cast<J2DTextBox*>(mTextBox);
		JUtility::TColor bodyWhite, bodyBlack, bgWhite, bgBlack;

		switch (mColorType) {
		case ANIMTEXTCOLOR_Default:
			bodyWhite = pane->getWhite();
			bodyBlack = pane->getBlack();
			bgWhite   = mDefaultBgWhite;
			bgBlack   = mDefaultBgBlack;
			break;
		case ANIMTEXTCOLOR_Menu:
			bodyWhite = mMenuBodyWhite;
			bodyBlack = mMenuBodyBlack;
			bgWhite   = mMenuBgWhite;
			bgBlack   = mMenuBgBlack;
			break;
		case ANIMTEXTCOLOR_GreyedOut:
			bodyWhite = mGreyedOutBodyWhite;
			bodyBlack = mGreyedOutBodyBlack;
			bgWhite   = mGreyedOutBgWhite;
			bgBlack   = mGreyedOutBgBlack;
			break;
		case ANIMTEXTCOLOR_Title:
			bodyWhite = mTitleBodyWhite;
			bodyBlack = mTitleBodyBlack;
			bgWhite   = mTitleBgWhite;
			bgBlack   = mTitleBgBlack;
			break;
		default:
			JUT_PANICLINE(229, "ColorType ERR!!\n");
		}

		mMsgBodyPane->setBlack(bodyBlack);

		mMsgBackPane->setWhite(bgWhite);
		mMsgBackPane->setBlack(bgBlack);

		// if mIsBlinking, update blinking params + set body white to blended value
		//     else, set body white to col1
		if (mIsBlinking) {
			if (mBlinkFactor > 0.0f) {
				mBlinkTimer += sys->mDeltaTime;
				if (mBlinkTimer >= mBlinkFactor) {
					mBlinkTimer = 0.0f;
				}

				if (mBlinkLevel > 0.0f) {
					mBlinkLevel -= 0.1f;
					if (mBlinkLevel < 0.0f) {
						mBlinkLevel = 0.0f;
					}
				}

				f32 t = (1.0f + sinf((mBlinkTimer * TAU) / mBlinkFactor)) / 2;
				mBlinkBlendRatio += (t - mBlinkBlendRatio) / 3.0f;

			} else if (mBlinkLevel < 1.0f) {
				mBlinkLevel += 0.05f;
				if (mBlinkLevel > 1.0f) {
					mBlinkLevel = 1.0f;
				}
			}

			JUtility::TColor blendedWhite;
			if (mBlinkFactor > 0.0f) {
				JUtility::TColor interColor;
				og::Screen::blendColor(mMenuBodyBlink1, mMenuBodyBlink2, mBlinkBlendRatio, &interColor);
				og::Screen::blendColor(interColor, mMenuBodyWhite, mBlinkLevel, &blendedWhite);
				mCurrentMenuBodyWhite = blendedWhite;

			} else {
				og::Screen::blendColor(mCurrentMenuBodyWhite, mMenuBodyWhite, mBlinkLevel, &blendedWhite);
			}

			mMsgBodyPane->setWhite(blendedWhite);

		} else {
			mMsgBodyPane->setWhite(bodyWhite);
		}

		u8 alpha = mMesgAlpha * 255.0f;

		if (mColorType == ANIMTEXTCOLOR_GreyedOut) {
			alpha = mGreyedOutBodyWhite.a;
		}

		mMsgBodyPane->setAlpha(alpha);
		mMsgBackPane->setAlpha(alpha);

	} else {
		mIsUpdateSuccess = false;
	}
}

/**
 * @note Address: 0x80309418
 * @note Size: 0x8
 */
void AnimText_Screen::setAnimScreen(AnimScreen* screen) { mAnmScreen = screen; }

/**
 * @note Address: 0x80309420
 * @note Size: 0x1C
 */
void AnimText_Screen::setText(u64 tag)
{
	mMsgBodyPane->mMessageID = tag;
	mMsgBackPane->mMessageID = tag;
}

/**
 * @note Address: 0x8030943C
 * @note Size: 0x18
 */
void AnimText_Screen::stop()
{
	mAnmScreen->mSpeed        = 0.0f;
	mAnmScreen->mCurrentFrame = 0.0f;
}

/**
 * @note Address: 0x80309454
 * @note Size: 0x3C
 */
void AnimText_Screen::open(f32 delay)
{
	mAnmScreen->mSpeed        = 1.0f;
	mAnmScreen->mCurrentFrame = 0.0f;
	mAnmScreen->AnimBaseBase::start(delay);
}

/**
 * @note Address: 0x80309490
 * @note Size: 0x48
 */
void AnimText_Screen::close()
{
	mAnmScreen->mSpeed        = -1.0f;
	mAnmScreen->mCurrentFrame = mAnmScreen->mLastFrame;
	mAnmScreen->start();
}

/**
 * @note Address: 0x803094D8
 * @note Size: 0xAC
 */
void AnimText_Screen::blink(f32 factor, f32 timer)
{
	if (factor > 0.0f) {
		mIsBlinking = true;
	}
	mBlinkFactor     = factor;
	mBlinkTimer      = timer;
	f32 calc         = sinf((mBlinkTimer * TAU) / mBlinkFactor);
	mBlinkBlendRatio = (calc + 1.0f) / 2;
}
} // namespace Screen
} // namespace og
