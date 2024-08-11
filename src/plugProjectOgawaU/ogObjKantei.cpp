#include "og\newScreen\KanteiDemo.h"
#include "og/Screen/ogScreen.h"
#include "Morimura/mrUtil.h"
#include "og/Screen/StickAnimMgr.h"
#include "efx2d/Arg.h"
#include "og/Sound.h"
#include "System.h"
#include "Game/GameConfig.h"
#include "P2JME/P2JME.h"
#include "TParticle2dMgr.h"
#include "PSSystem/PSGame.h"
#include "PSM/Scene.h"

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80318244
 * @note Size: 0x120
 */
ObjKantei::ObjKantei(char const* name)
{
	mFadeLevel  = 0.0f;
	mFadeLevel2 = 0.0f;
	mName       = name;
	mDisp       = nullptr;
	mState      = Kantei_Begin;

	mScreenOkWindow          = nullptr;
	mScreenBG                = nullptr;
	mScreenName              = nullptr;
	mScreenButton            = nullptr;
	mTControl                = nullptr;
	mPaneSetP                = nullptr;
	mDrawBox.p1.x            = 0.0f;
	mDrawBox.p1.y            = 0.0f;
	mDrawBox.p2.x            = 0.0f;
	mDrawBox.p2.y            = 0.0f;
	mDoDrawBox               = true;
	mShipMessageBoxID        = 0;
	mInTextBox               = false;
	mPaneOk1                 = nullptr;
	mStartTimer              = 0.0f;
	mPokoCounterCurr         = nullptr;
	mPokoCounterTotal        = nullptr;
	mCurrItemValue           = 0;
	mTotalPokos              = 0;
	mTotalPokosCave          = 0;
	mStickAnim               = nullptr;
	_B0                      = 0;
	mEfx                     = nullptr;
	mPaneName                = nullptr;
	mScaleMgr                = nullptr;
	mNameScale               = 0.0f;
	mDoScaleName             = false;
	mNameTimer               = msVal.mNameTimerDefault;
	mTreasureNameMesgID      = 0;
	mIsPelletNameNotAppeared = true;
	mNameWaitTimer           = 0.0f;
	mNameState               = KanteiName_StartDelay;
	mIdleStateTimer          = msVal.mIdleStateTimerDefault;
	mDoShipSpeech            = false;
	mCommonTimer             = 0.1f;
	mShipSpeechTimer         = 0.0f;
	mPlayExitSE              = false;
}

/**
 * @note Address: 0x80318364
 * @note Size: 0xAC
 */
ObjKantei::~ObjKantei() { }

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void ObjKantei::startItemName(u64)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80318410
 * @note Size: 0x7CC
 */
void ObjKantei::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberKantei* disp = static_cast<og::Screen::DispMemberKantei*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_KANTEI)) {
		mDisp = disp;
	} else {
		if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
			mDisp = new og::Screen::DispMemberKantei;
		} else {
			JUT_PANICLINE(258, "ERR! in ObjKantei Create失敗！\n");
		}
	}

	mCurrItemValue         = mDisp->mPelletValue;
	mTotalPokos            = mDisp->mTotalPokos;
	mTotalPokosCave        = mDisp->mTotalPokosCave;
	mTotalPokosOld         = mTotalPokos - mCurrItemValue;
	mTotalPokosCaveOld     = mTotalPokosCave - mCurrItemValue;
	mDisp->mTotalPokos     = mTotalPokosOld;
	mDisp->mTotalPokosCave = mTotalPokosCaveOld;
	u32 type               = mDisp->mKanteiType;

	mScreenName = new P2DScreen::Mgr_tuning;
	mScreenName->set("item_name.blo", 0x1040000, arc);
	mScreenButton = new P2DScreen::Mgr_tuning;
	mScreenButton->set("otakara_kantei_button.blo", 0x1040000, arc);

	switch (type) {
	case KanteiType_PreDebt:
		mScreenOkWindow = new P2DScreen::Mgr_tuning;
		mScreenOkWindow->set("ok_message_window.blo", 0x1040000, arc);
		mPokoCounterTotal = og::Screen::setCallBack_CounterRV(mScreenOkWindow, 'PSsha1', &mDisp->mTotalPokos, 9, 0, 1, arc);
		break;
	case KanteiType_PostDebt:
		mScreenOkWindow = new P2DScreen::Mgr_tuning;
		mScreenOkWindow->set("ok_message_window2.blo", 0x1040000, arc);
		mPokoCounterTotal = og::Screen::setCallBack_CounterRV(mScreenOkWindow, 'PSsha1', &mDisp->mTotalPokos, 9, 0, 1, arc);
		break;
	default:
		mScreenOkWindow = nullptr;
		JUT_PANICLINE(305, "ERR! UNKNOWN KANTEI_TYPE!!");
	}

	if (mDisp->mInCave) {
		J2DPane* pane = mScreenOkWindow->search('Tzukan');
		pane->setMsgID('8551_00'); // "You can't log this treasure until you reach the surface."
	} else {
		J2DPane* pane = mScreenOkWindow->search('Tzukan');
		pane->setMsgID('8550_00'); // "It's been added to your Treasure Log!"
	}

	int offs                     = mDisp->mPelletOffset;
	u64 idtags[3]                = { '0101_01', '0110_01', '0200_01' };
	Morimura::TOffsetMsgSet* msg = new Morimura::TOffsetMsgSet(idtags, '0100_01', 3);
	mTreasureNameMesgID          = msg->getMsgID(offs);

	mPaneName = mScreenName->search('ItemName');
	mPaneName->add(msVal.mNamePaneAdd.x, msVal.mNamePaneAdd.y);
	mPaneName->setBasePosition(J2DPOS_Center);
	mPaneName->setMsgID('8557_00'); // "Name"
	mNameScale = 0.0f;
	mPaneName->updateScale(mNameScale);

	mScaleMgr = new og::Screen::ScaleMgr;

	mPokoCounterCurr = og::Screen::setCallBack_CounterSlot(mScreenOkWindow, 'PSota1', &mDisp->mPelletValue, 4, true, true, arc);
	mPokoCounterCurr->hide();
	mPokoCounterCurr->setPuyoParam(msVal.mPokoPuyo1, msVal.mPokoPuyo2, msVal.mPokoPuyo3);
	mPokoCounterCurr->mChangeSoundID = PSSE_SY_COIN_COUNT;

	mScreenBG = new P2DScreen::Mgr_tuning;
	mScreenBG->set("ok_bg_normal.blo", 0x1040000, arc);

	og::Screen::setAlphaScreen(mScreenOkWindow);
	og::Screen::setAlphaScreen(mScreenBG);
	og::Screen::setAlphaScreen(mScreenName);
	og::Screen::setAlphaScreen(mScreenButton);

	mPaneOk1 = mScreenOkWindow->search('NMsha');
	mPaneOk2 = mScreenOkWindow->search('NMzukan');
	mPaneOk2->hide();
	J2DPane* pane = mScreenBG->search('item');
	if (pane)
		pane->hide();
	mPaneSetP = mScreenBG->search('Notsetp');

	og::Screen::setCallBackMessage(mScreenOkWindow);
	og::Screen::setCallBackMessage(mScreenName);
	og::Screen::setCallBackMessage(mScreenButton);

	mTControl = new P2JME::Movie::TControl;
	mTControl->init();
	mTControl->mFlags.dwordView &= 0xfffffffe;
	mInTextBox = false;

	og::Screen::CallBack_Picture* pic = og::Screen::setCallBack_3DStick(arc, mScreenButton, 'ota3dl');
	mStickAnim                        = new og::Screen::StickAnimMgr(pic);
	mStickAnim->stickUpDown();
	pane = mScreenButton->search('Ncstick');
	pane->hide();

	mEfx = nullptr;
	if (mDisp->mPelletMessageID) {
		efx2d::T2DOtakantei* efx = new efx2d::T2DOtakantei;
		mEfx                     = efx;
		Vector2f argVec(304.0f, 194.0f);
		efx2d::Arg arg = argVec;
		mEfx->setGroup(2);
		mEfx->create(&arg);
	}

	commonUpdate();
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
void ObjKantei::startKanteiVoice(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xF4
 */
void ObjKantei::updateKanteiVoice()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80318BDC
 * @note Size: 0x258
 */
void ObjKantei::scaleAnimItemName()
{
	mPaneName->updateScale(mScaleMgr->calc() * mNameScale);

	if (mDoScaleName) {
		switch (mNameState) {
		case KanteiName_StartDelay:
			if (mNameTimer > 0.0f) {
				mNameTimer -= sys->mDeltaTime;
				if (mNameTimer < 0.0f) {
					mNameState = KanteiName_Growing;
				}
			}
			mNameScale = 0.0f;
			break;

		case KanteiName_Growing:
			mNameScale += msVal.mNameScaleGrowFactor;
			if (mNameScale >= 1.0f) {
				mNameScale = 1.0f;
				mScaleMgr->up(msVal.mCounterGrow1, msVal.mCounterGrow2, msVal.mCounterGrow3, 0.0f);
				if (!mIsPelletNameNotAppeared) {
					mDoShipSpeech        = true;
					mCommonTimer         = 0.1f;
					mShipSpeechTimer     = 10;
					PSGame::SeMgr* seMgr = PSSystem::getSeMgrInstance();
					seMgr->playMessageVoice(PSSE_MP_VOX_HEAD_A_FLAT, false);
				}
				mNameState     = KanteiName_VisibleDelay;
				mNameWaitTimer = msVal.mWaitTimerReset;
			}
			break;

		case KanteiName_VisibleDelay:
			if (mNameWaitTimer > 0.0f) {
				mNameWaitTimer -= sys->mDeltaTime;
				if (mIsPelletNameNotAppeared && mNameWaitTimer < 0.0f) {
					mNameState = KanteiName_Shrinking;
				}
			}
			break;

		case KanteiName_Shrinking:
			if (mNameScale > 0.0f) {
				mNameScale -= msVal.mNameScaleGrowFactor;
				if (mNameScale < 0.0f) {
					mNameScale = 0.0f;
					if (mIsPelletNameNotAppeared) {
						mIsPelletNameNotAppeared = false;
						mPaneName->mMessageID    = mTreasureNameMesgID;
						mNameScale               = 0.0f;
						mPaneName->updateScale(mNameScale);
						mNameState = KanteiName_Growing; // reset to growing state but now with the treasures name
					}
				}
			}
			break;
		}
	}
}

/**
 * @note Address: 0x80318E34
 * @note Size: 0x154
 */
void ObjKantei::commonUpdate()
{
	scaleAnimItemName();
	if (mDoShipSpeech) {
		if (mCommonTimer > 0.0f) {
			mCommonTimer -= sys->mDeltaTime;
			if (mCommonTimer <= 0.0f) {
				mCommonTimer = 0.1f;
				mShipSpeechTimer--;
				if (mShipSpeechTimer <= 0) {
					mDoShipSpeech        = false;
					PSGame::SeMgr* seMgr = PSSystem::getSeMgrInstance();
					seMgr->playMessageVoice(PSSE_MP_VOX_FOOT_A_UP, false);
				} else {
					PSGame::SeMgr* seMgr = PSSystem::getSeMgrInstance();
					seMgr->playMessageVoice(PSSE_MP_VOX_BODY_MN, false);
				}
			}
		}
	}
	mScreenBG->update();
	mScreenOkWindow->update();
	mScreenName->update();
	mScreenButton->update();
}

/**
 * @note Address: 0x80318F88
 * @note Size: 0x40C
 */
bool ObjKantei::doUpdate()
{
	Controller* pad = getGamePad();
	switch (mState) {
	case Kantei_Begin:
		mState      = Kantei_PokoAppearDelay;
		mStartTimer = 0.0f;
		break;

	case Kantei_PokoAppearDelay:
		mStartTimer += sys->mDeltaTime;
		if (mStartTimer >= msVal.mNameAppearDelay || pad->getButtonDown() & Controller::PRESS_A
		    || (mDisp->mSecondaryController && mDisp->mSecondaryController->getButtonDown() & Controller::PRESS_A)) {
			mState              = Kantei_SetPokoValue;
			mDisp->mPelletValue = 0;
			mPokoCounterCurr->startSlot(msVal.mPokoSlotFactor);
			mPokoCounterCurr->show();
		}
		break;

	case Kantei_SetPokoValue:
		mState              = Kantei_WaitAppearPokos;
		mStartTimer         = 0.0f;
		mDisp->mPelletValue = mCurrItemValue;
		break;

	case Kantei_WaitAppearPokos:
		mStartTimer += sys->mDeltaTime;
		if (mStartTimer >= msVal.mPriceAppearDelay) {
			mState                 = Kantei_AppearTotalPokos;
			mStartTimer            = 0.0f;
			mDisp->mTotalPokos     = 0;
			mDisp->mTotalPokosCave = 0;
			mPokoCounterTotal->setPuyoAnim(true);
		}
		break;

	case Kantei_AppearTotalPokos:
		mState                 = Kantei_Idle;
		mDisp->mTotalPokos     = mTotalPokos;
		mDisp->mTotalPokosCave = mTotalPokosCave;
		ogSound->setPlusTotalPoko();
		mDoScaleName = true;
		break;

	case Kantei_Idle:
		if (mIdleStateTimer > 0.0f) {
			mIdleStateTimer -= sys->mDeltaTime;
		} else if (pad && pad->getButtonDown() & Controller::PRESS_A
		           || (mDisp->mSecondaryController && mDisp->mSecondaryController->getButtonDown() & Controller::PRESS_A)) {
			mShipMessageBoxID = mDisp->mPelletMessageID;
			// if the tagID exists, open ship message box, unless in E3 mode
			if (mShipMessageBoxID != 0 && !Game::gGameConfig.mParms.mE3version.mData) {
				u32 tagid  = 0;
				u32 tagid2 = 0;
				P2JME::convertU64ToMessageID(mShipMessageBoxID, &tagid, &tagid2);
				mTControl->setMessageID(tagid, tagid2);
				mInTextBox = true;
				mState     = Kantei_MessageBox;

			} else {
				finishKantei();
			}
		}
		break;

	case Kantei_MessageBox:
		mTControl->update(pad, mDisp->mSecondaryController);
		if (!mTControl->mIsActive) {
			finishKantei();
		}
	}

	commonUpdate();
	return false;
}

/**
 * @note Address: 0x80319394
 * @note Size: 0x40
 */
void ObjKantei::finishKantei()
{
	mDisp->mIsDone = true;
	if (!mPlayExitSE) {
		mPlayExitSE = true;
		ogSound->setKanteiExit();
	}
}

/**
 * @note Address: 0x803193D4
 * @note Size: 0x290
 */
void ObjKantei::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;

	Graphics(gfx2);
	u8 alpha = mFadeLevel2 * 255.0f;
	mScreenBG->setAlpha(alpha);
	mScreenBG->draw(gfx2, *graf);

	if (mEfx) {
		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(2, 0);
	}

	if (mState != Kantei_MessageBox) {
		alpha = mFadeLevel2 * 255.0f;
		mScreenOkWindow->setAlpha(alpha);
		mScreenOkWindow->draw(gfx2, *graf);
		mScreenButton->setXY(0.0f, msVal.mScreenMoveStart);
		alpha = mFadeLevel2 * 255.0f;
		mScreenButton->setAlpha(alpha);
		mScreenButton->draw(gfx2, *graf);
	}

	if (mDoDrawBox && mDisp->mDelegate) {
		J2DPane* pane = mPaneSetP;
		f32 x1, y1, x2, y2;
		y2            = pane->mGlobalBounds.f.y;
		x2            = pane->mGlobalBounds.f.x;
		y1            = pane->mGlobalBounds.i.y;
		x1            = pane->mGlobalBounds.i.x;
		mDrawBox.p1.x = x1;
		mDrawBox.p1.y = y1;
		mDrawBox.p2.x = x2;
		mDrawBox.p2.y = y2;
		mDisp->mDelegate->invoke(mDrawBox);
		mDoDrawBox = 0;
	}

	alpha = mFadeLevel2 * 255.0f;
	mScreenName->setAlpha(alpha);
	mScreenName->draw(gfx2, *graf);
}

/**
 * @note Address: 0x80319664
 * @note Size: 0x3C
 */
void ObjKantei::doDrawMsg(Graphics& gfx)
{
	if (mState == Kantei_MessageBox) {
		mTControl->draw(gfx);
	}
}

/**
 * @note Address: 0x803196A0
 * @note Size: 0x10C
 */
bool ObjKantei::doStart(::Screen::StartSceneArg const*)
{
	mFadeLevel  = 0.0f;
	mFadeLevel2 = 0.0f;
	if (mDisp->mDoPlayBGM) {
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::validateSceneMgr(mgr);
		PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
		PSSystem::checkChildScene(scene)->startMainSeq();
	}
	return true;
}

/**
 * @note Address: 0x803197AC
 * @note Size: 0x10
 */
bool ObjKantei::doEnd(::Screen::EndSceneArg const*)
{
	mFadeLevel = 0.0f;
	return true;
}

/**
 * @note Address: 0x803197BC
 * @note Size: 0x4
 */
void ObjKantei::doUpdateFadeinFinish() { }

/**
 * @note Address: 0x803197C0
 * @note Size: 0x40
 */
void ObjKantei::doUpdateFinish()
{
	mFadeLevel = 0.0f;
	if (mEfx) {
		mEfx->fade();
	}
}

/**
 * @note Address: 0x80319800
 * @note Size: 0x4
 */
void ObjKantei::doUpdateFadeoutFinish() { }

/**
 * @note Address: 0x80319804
 * @note Size: 0x1A4
 */
bool ObjKantei::doUpdateFadein()
{
	bool ret = false;
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > 0.3f) {
		mFadeLevel = 0.3f;
		ret        = true;
	}

	mFadeLevel2 = mFadeLevel / 0.3f;
	commonUpdate();
	return ret;
}

/**
 * @note Address: 0x803199A8
 * @note Size: 0x1AC
 */
bool ObjKantei::doUpdateFadeout()
{
	bool ret = false;
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > 0.2f) {
		mFadeLevel = 0.2f;
		ret        = true;
	}
	mFadeLevel2 = 1.0f - (mFadeLevel / 0.2f);
	commonUpdate();
	return ret;
}

ObjKantei::StaticValues ObjKantei::msVal;

} // namespace newScreen
} // namespace og
