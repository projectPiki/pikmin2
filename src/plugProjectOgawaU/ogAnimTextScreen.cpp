#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/anime.h"
#include "og/newscreen/SMenu.h"
#include "trig.h"
#include "System.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	803087B8
 * Size:	000134
 */
AnimText_Screen* setAnimTextScreen(JKRArchive* arc, P2DScreen::Mgr* parentScreen, u64 tag)
{
	P2DScreen::Mgr* scrn = new P2DScreen::Mgr;
	scrn->set("anim_text.blo", 0x40000, arc);

	J2DTextBoxEx* pane = static_cast<J2DTextBoxEx*>(og::Screen::TagSearch(parentScreen, tag));
	pane->setString("");
	pane->mIsVisible = false;

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

/*
 * --INFO--
 * Address:	803088EC
 * Size:	00013C
 */
AnimText_Screen* setMenuScreen(JKRArchive* arc, P2DScreen::Mgr* parentScreen, u64 tag)
{
	AnimText_Screen* anm = setAnimTextScreen(arc, parentScreen, tag);
	anm->mColorType      = 1;
	return anm;
}

/*
 * --INFO--
 * Address:	80308A28
 * Size:	00013C
 */
AnimText_Screen* setMenuTitleScreen(JKRArchive* arc, P2DScreen::Mgr* parentScreen, u64 tag)
{
	AnimText_Screen* anm = setAnimTextScreen(arc, parentScreen, tag);
	anm->mColorType      = 3;
	return anm;
}

/*
 * --INFO--
 * Address:	80308B64
 * Size:	000228
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
	_48              = false;
	mTag             = 0;
	mMsgBodyPane     = static_cast<J2DTextBox*>(og::Screen::TagSearch(scrn, 'msg_body'));
	mMsgBackPane     = static_cast<J2DTextBox*>(og::Screen::TagSearch(scrn, 'msg_back'));
	mBlinkTimer      = 0.0f;
	mBlinkFactor     = 0.0f;
	mBlinkLevel      = 1.0f;
	mIsBlinking      = false;
	_6C              = 1.0f;
	og::newScreen::ObjSMenuPause::ObjHIOVal::getMenuColor(&mColor0, &mColor1, &mColor2, &mColor3, &mColor4, &mColor5, &mColor6, &mColor7,
	                                                      &mColor8, &mColor9, &mColor13, &mColor14, &mColor15, &mColor16);
	mColor10   = mMsgBackPane->getWhite();
	mColor11   = mMsgBackPane->getBlack();
	mColor12   = mColor4;
	mColorType = 0;
}

/*
 * --INFO--
 * Address:	80308E0C
 * Size:	00060C
 */
void AnimText_Screen::update()
{
	og::Screen::CallBack_Screen::update();
	if (mAnmScreen) {
		mIsUpdateSuccess = mAnmScreen->update();

		if (_48) {
			if (mTag) {
				if (!mIsUpdateSuccess) {
					setText(mTag);
					mTag = 0;
					open(0.0f);
				}
			} else if (!mIsUpdateSuccess) {
				_48 = false;
			}
		}

		J2DTextBox* pane = static_cast<J2DTextBox*>(mTextBox);
		JUtility::TColor bodyWhite, bodyBlack, bgWhite, bgBlack;

		switch (mColorType) {
		case 0:
			bodyWhite = pane->getWhite();
			bodyBlack = pane->getBlack();
			bgWhite   = mColor10;
			bgBlack   = mColor11;
			break;
		case 1:
			bodyWhite = mColor4;
			bodyBlack = mColor5;
			bgWhite   = mColor6;
			bgBlack   = mColor7;
			break;
		case 2:
			bodyWhite = mColor0;
			bodyBlack = mColor1;
			bgWhite   = mColor8;
			bgBlack   = mColor9;
			break;
		case 3:
			bodyWhite = mColor13;
			bodyBlack = mColor14;
			bgWhite   = mColor15;
			bgBlack   = mColor16;
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
				_64 += (t - _64) / 3.0f;

			} else if (mBlinkLevel < 1.0f) {
				mBlinkLevel += 0.05f;
				if (mBlinkLevel > 1.0f) {
					mBlinkLevel = 1.0f;
				}
			}

			JUtility::TColor blendedWhite;
			if (mBlinkFactor > 0.0f) {
				JUtility::TColor interColor;
				og::Screen::blendColor(mColor2, mColor3, _64, &interColor);
				og::Screen::blendColor(interColor, mColor4, mBlinkLevel, &blendedWhite);
				mColor12 = blendedWhite;

			} else {
				og::Screen::blendColor(mColor12, mColor4, mBlinkLevel, &blendedWhite);
			}

			mMsgBodyPane->setWhite(blendedWhite);

		} else {
			mMsgBodyPane->setWhite(bodyWhite);
		}

		u8 alpha = _6C * 255.0f;

		if (mColorType == 2) {
			alpha = mColor0.a;
		}

		mMsgBodyPane->setAlpha(alpha);
		mMsgBackPane->setAlpha(alpha);

	} else {
		mIsUpdateSuccess = false;
	}
}

/*
 * --INFO--
 * Address:	80309418
 * Size:	000008
 */
void AnimText_Screen::setAnimScreen(AnimScreen* screen) { mAnmScreen = screen; }

/*
 * --INFO--
 * Address:	80309420
 * Size:	00001C
 */
void AnimText_Screen::setText(u64 tag)
{
	mMsgBodyPane->mMessageID = tag;
	mMsgBackPane->mMessageID = tag;
}

/*
 * --INFO--
 * Address:	8030943C
 * Size:	000018
 */
void AnimText_Screen::stop()
{
	mAnmScreen->mSpeed        = 0.0f;
	mAnmScreen->mCurrentFrame = 0.0f;
}

/*
 * --INFO--
 * Address:	80309454
 * Size:	00003C
 */
void AnimText_Screen::open(f32 a1)
{
	mAnmScreen->mSpeed        = 1.0f;
	mAnmScreen->mCurrentFrame = 0.0f;
	mAnmScreen->AnimBaseBase::start(a1);
}

/*
 * --INFO--
 * Address:	80309490
 * Size:	000048
 */
void AnimText_Screen::close()
{
	mAnmScreen->mSpeed        = -1.0f;
	mAnmScreen->mCurrentFrame = mAnmScreen->mLastFrame;
	mAnmScreen->start();
}

/*
 * --INFO--
 * Address:	803094D8
 * Size:	0000AC
 */
void AnimText_Screen::blink(f32 factor, f32 timer)
{
	if (factor > 0.0f) {
		mIsBlinking = true;
	}
	mBlinkFactor = factor;
	mBlinkTimer  = timer;
	f32 calc     = sinf((mBlinkTimer * TAU) / mBlinkFactor);
	_64          = (calc + 1.0f) / 2;
}
} // namespace Screen
} // namespace og
