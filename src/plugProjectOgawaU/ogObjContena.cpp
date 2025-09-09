#include "og/newScreen/Contena.h"
#include "og/Screen/ContenaCounter.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/AlphaMgr.h"
#include "og/Screen/StickAnimMgr.h"
#include "og/Screen/anime.h"
#include "og/Sound.h"
#include "Game/Piki.h"
#include "System.h"
#include "Controller.h"
#include "trig.h"
#include "stdlib.h"

namespace og {
namespace newScreen {

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void ObjContena::setStartPos()
{
	// UNUSED FUNCTION
	mMenuMoveAngle = 800.0f;
	mYAnalog       = 0.0f;
	mSpotX         = 0.0f;
	mSpotY         = 0.0f;
}

/**
 * @note Address: 0x8031FF44
 * @note Size: 0x1C0
 */
ObjContena::ObjContena(char const* name)
{
	mName       = name;
	mDisp       = nullptr;
	mContena    = nullptr;
	mController = nullptr;

	for (int i = 0; i < 10; i++) {
		mAnimList[i] = nullptr;
	}

	for (int i = 0; i < 6; i++) {
		mAlphaMgr[i] = nullptr;
		mPaneList[i] = nullptr;
	}

	mState              = 0;
	mScreenAngle        = 0.0f;
	mScreenState        = 0;
	mMoveTime           = 0.5f;
	mTimer0             = mMoveTime;
	mDispState          = 1;
	mFuriko             = nullptr;
	mMenuMoveAngle      = 0.0f;
	mYAnalog            = 0.0f;
	mSpotX              = 0.0f;
	mSpotY              = 0.0f;
	mSpotScale          = 1.0f;
	mPaneSpot           = nullptr;
	mTimer              = 0.0f;
	mDoDraw             = false;
	mFadeLevel          = 0.0f;
	mStickAnimMgr       = nullptr;
	mAlphaArrow1        = nullptr;
	mAlphaArrow2        = nullptr;
	mPaneArrowUp        = nullptr;
	mPaneArrowDown      = nullptr;
	mPaneArrowUpPos.x   = 0.0f;
	mPaneArrowUpPos.y   = 0.0f;
	mPaneArrowDownPos.x = 0.0f;
	mPaneArrowDownPos.y = 0.0f;
	mScreenCupsule      = nullptr;
	mScaleArrow1        = nullptr;
	mScaleArrow2        = nullptr;
	mTimer1             = 0.0f;
	mTimer2             = 0.0f;
	mPikiPaneList       = nullptr;
	mPikiPaneNum        = 0;
	mPaneOnyon          = nullptr;
	mPaneOnyonL         = nullptr;
	mPaneTiretu         = nullptr;
	mPaneTiretul        = nullptr;
	mPayedDebt          = false;
	mMenuMoveAngle      = 800.0f;
	mYAnalog            = 0.0f;
	mDoDraw             = false;
}

/**
 * @note Address: 0x80320104
 * @note Size: 0xAC
 */
ObjContena::~ObjContena()
{
}

/**
 * @note Address: 0x803201B0
 * @note Size: 0x934
 */
void ObjContena::doCreate(JKRArchive* arc)
{
	/* NON-MATCHING */
	mController = getGamePad();

	og::Screen::DispMemberContena* disp = static_cast<og::Screen::DispMemberContena*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_CONTENA)) {
		mDisp = disp;
	} else if (disp->isID(OWNER_OGA, MEMBER_UFO_GROUP)) {
		og::Screen::DispMemberUfoGroup* dispufo = reinterpret_cast<og::Screen::DispMemberUfoGroup*>(disp);
		switch (dispufo->mUfoMenu.mContenaType) {
		case 1:
			mDisp = &dispufo->mContena1;
			break;
		case 2:
			mDisp = &dispufo->mContena2;
			break;
		default:
			JUT_PANICLINE(230, "UFOMENU --> CONTENA ERR!\n");
		}
		mPayedDebt = dispufo->mHasPaidDebt;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		mDisp = new og::Screen::DispMemberContena;

	} else {
		JUT_PANICLINE(242, "ERR! in ObjContena Create失敗！\n");
	}
	og::Screen::DispMemberContena* disp2 = mDisp;

	mDataContena               = disp2->mDataContena;
	mDisp->mDataContena.mState = 0;
	mContena                   = new og::Screen::ContenaCounter(mDisp);

	switch (mDisp->mDataContena.mOnyonID) {
	case Game::Blue:
		mContena->setblo("contena_b.blo", arc);
		break;
	case Game::Red:
		mContena->setblo("contena_r.blo", arc);
		break;
	case Game::Yellow:
		mContena->setblo("contena_y.blo", arc);
		break;
	case Game::Purple:
		mContena->setblo("contena_bl.blo", arc);
		break;
	case Game::White:
		mContena->setblo("contena_w.blo", arc);
		break;
	default:
		JUT_PANICLINE(266, "ERR! unknwon contena type!\n");
	}

	mScreenCupsule = new P2DScreen::Mgr;
	mScreenCupsule->set("cupsule.blo", 0x1040000, arc);
	og::Screen::setFurikoScreen(mContena);
	mScreenSpot = new P2DScreen::Mgr_tuning;
	mScreenSpot->set("spot.blo", 0x1040000, arc);
	mPaneSpot = mScreenSpot->search('Pspot');
	mPaneSpot->setBasePosition(J2DPOS_Center);
	mSpotX = mPaneSpot->mOffset.x;
	mSpotY = mPaneSpot->mOffset.y;
	og::Screen::setCallBackMessage(mContena);

	for (int i = 0; i < 10; i++) {
		mAnimList[i] = nullptr;
	}

	// !!! this needs to load r3/r4/r5/r6 in different orders
	if (mContena->search('sh_color')) {
		og::Screen::setCallBackMessage(mContena);
	}

	mPaneList[0] = mContena->search('mg_1');
	mPaneList[1] = mContena->search('mg_2');
	mPaneList[2] = mContena->search('mg_3');
	mPaneList[3] = mContena->search('mg_4');
	mPaneList[4] = mContena->search('mg_5');
	mPaneList[5] = mContena->search('mg_6');

	for (int i = 0; i < 6; i++) {
		mPaneList[i]->show();
		mPaneList[i]->setInfluencedAlpha(false, false);
		mAlphaMgr[i] = new og::Screen::AlphaMgr;
		mAlphaMgr[i]->out(0.0f);
	}
	mState = 0;
	mAlphaMgr[mState]->in(0.0f);
	og::Screen::CallBack_Picture* pic = og::Screen::setCallBack_3DStick(arc, mContena, 'ota3dl');
	mStickAnimMgr                     = new og::Screen::StickAnimMgr(pic);
	mStickAnimMgr->stickUpDown();

	mPaneArrowUp      = og::Screen::TagSearch(mContena, 'Nya_u');
	mPaneArrowUpPos.x = mPaneArrowUp->mOffset.x;
	mPaneArrowUpPos.y = mPaneArrowUp->mOffset.y;
	mPaneArrowUp->setBasePosition(J2DPOS_Center);
	mPaneArrowDown      = og::Screen::TagSearch(mContena, 'Nya_l');
	mPaneArrowDownPos.x = mPaneArrowDown->mOffset.x;
	mPaneArrowDownPos.y = mPaneArrowDown->mOffset.y;
	mPaneArrowDown->setBasePosition(J2DPOS_Center);
	mAlphaArrow1 = new og::Screen::AlphaMgr;
	mAlphaArrow2 = new og::Screen::AlphaMgr;
	mAlphaArrow1->in(0.3f);
	mAlphaArrow2->in(0.3f);
	mAlpha       = mPaneArrowUp->mAlpha;
	mScaleArrow1 = new og::Screen::ScaleMgr;
	mScaleArrow2 = new og::Screen::ScaleMgr;

	mPikiPaneNum = 0;

	for (int i = 0; i < MAX_PIKI_COUNT; i++) {
		u64 tag = 'Piki_00' + (i % 10) + (i / 10) % 10 * 256;
		if (!mContena->search(tag))
			break;

		mPikiPaneNum++;
	}

	mPikiPaneList = new J2DPane*[mPikiPaneNum];

	for (int i = 0; i < mPikiPaneNum; i++) {
		u64 tag          = 'Piki_00' + (i % 10) + (i / 10) % 10 * 256;
		J2DPane* pane    = mContena->search(tag);
		mPikiPaneList[i] = pane;
		pane->hide();
	}

	mPaneOnyon   = og::Screen::TagSearch(mContena, 'Nonyon');
	mPaneOnyonL  = og::Screen::TagSearch(mContena, 'NonyonI');
	mPaneTiretu  = og::Screen::TagSearch(mContena, 'Ntiretu');
	mPaneTiretul = og::Screen::TagSearch(mContena, 'NtiretuI');

	mScaleMgr3 = new og::Screen::ScaleMgr;
	mScaleMgr4 = new og::Screen::ScaleMgr;

	int type = mDisp->mDataContena.mOnyonID;
	if (type == Game::Purple || type == Game::White) {
		J2DPane* pane1 = og::Screen::TagSearch(mContena, 'P1_1');
		J2DPane* pane2 = og::Screen::TagSearch(mContena, 'P1_2');
		if (mPayedDebt) {
			pane1->show();
			pane2->hide();
		} else {
			pane2->show();
			pane1->hide();
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void ObjContena::tairetuOnOff()
{
	for (int i = 0; i < mPikiPaneNum; i++) {
		if (i + 1 <= mDisp->mDataContena.mInSquadCount) {
			mPikiPaneList[i]->show();
		} else {
			mPikiPaneList[i]->hide();
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void ObjContena::changeMessage(u32 mesg)
{
	if ((u32)mState != mesg) {
		mAlphaMgr[mState]->out(0.5f);
		mState = mesg;
		mAlphaMgr[mState]->in(0.3f);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void ObjContena::isMessage(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void ObjContena::setStickUp()
{
	mAlphaArrow1->in(0.3f);
	mAlphaArrow2->out(0.5f);
	mStickAnimMgr->stickUp();
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void ObjContena::setStickDown()
{
	mAlphaArrow1->out(0.5f);
	mAlphaArrow2->in(0.3f);
	mStickAnimMgr->stickDown();
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void ObjContena::setStickUpDown()
{
	mAlphaArrow1->in(0.3f);
	mAlphaArrow2->in(0.3f);
	mStickAnimMgr->stickUpDown();
}

/**
 * @note Address: 0x80320AE4
 * @note Size: 0x284
 */
void ObjContena::putinPiki(bool soundType)
{
	og::Screen::DispMemberContena* disp = mDisp;
	if (disp->mDataContena.mCurrField <= disp->mDataContena.mInOnionCount) {
		if (mState == 1) {
			if (!soundType) {
				ogSound->setError();
			}
		} else {
			ogSound->setError();
			changeMessage(1);
			setStickDown();
		}
		return;
	}

	if (disp->mDataContena.mInSquadCount == 0) {
		if (mState == 4) {
			if (!soundType) {
				ogSound->setError();
			}
		} else {
			ogSound->setError();
			changeMessage(4);
			setStickDown();
		}
	} else {
		changeMessage(0);
		disp->mDataContena.mInOnionCount++;
		disp->mDataContena.mInSquadCount--;
		disp->mDataContena.mInParty2--;
		disp->mDataContena.mOnMapCount--;
		disp->mDataContena.mResult++;
		disp->mDataContena.mInTransfer = (u16)abs(disp->mDataContena.mResult); // should be just abs
		setStickUpDown();
		if (mTimer1 <= 0.0f) {
			mScaleArrow1->up();
			mTimer1 = msVal._38;
		}
		mScaleMgr3->up(0.1f, 30.0f, 0.8f, 0.0f);
		mScaleMgr4->down(0.05f, 35.0f, 0.8f);
		ogSound->setPlusMinus(soundType);
	}
}

/**
 * @note Address: 0x80320D68
 * @note Size: 0x320
 */
void ObjContena::takeoutPiki(bool soundType)
{
	og::Screen::DispMemberContena* disp = mDisp;
	if (disp->mDataContena.mInSquadCount < disp->mDataContena.mMaxPikiOnField) {
	} else if (mState == 2) {
		if (!soundType) {
			ogSound->setError();
		}
		return;
	} else {
		ogSound->setError();
		changeMessage(2);
		setStickUp();
		return;
	}

	if (disp->mDataContena.mInOnionCount == 0) {
		if (mState == 3) {
			if (!soundType) {
				ogSound->setError();
			}
			return;
		} else {
			ogSound->setError();
			changeMessage(3);
			setStickUp();
			return;
		}
	} else if (disp->mDataContena.mOnMapCount < disp->mDataContena.mMaxPikiCount) {
	} else if (mState == 5) {
		if (!soundType) {
			ogSound->setError();
		}
		return;
	} else {
		ogSound->setError();
		changeMessage(5);
		setStickUp();
		return;
	}

	changeMessage(0);
	disp->mDataContena.mInOnionCount--;
	disp->mDataContena.mInSquadCount++;
	disp->mDataContena.mInParty2++;
	disp->mDataContena.mOnMapCount++;
	disp->mDataContena.mResult--;
	disp->mDataContena.mInTransfer = (u16)abs(disp->mDataContena.mResult);
	setStickUpDown();
	if (mTimer2 <= 0.0f) {
		mScaleArrow2->up();
		mTimer2 = msVal._38;
	}
	mScaleMgr4->up(0.1f, 30.0f, 0.8f, 0.0f);
	mScaleMgr3->down(0.05f, 35.0f, 0.8f);
	ogSound->setPlusMinus(soundType);
}

/**
 * @note Address: 0x80321088
 * @note Size: 0x33C
 */
bool ObjContena::moveContena()
{
	bool ret                      = false;
	og::Screen::DataContena* data = &mDisp->mDataContena;
	JUT_ASSERTLINE(603, data, "DataContena is not found!\n");
	JUT_ASSERTLINE(607, data->mOnyonID != -1, "Contena Type error!\n");

	if (mTimer1 > 0.0f) {
		mTimer1 -= sys->mDeltaTime;
	}
	if (mTimer2 > 0.0f) {
		mTimer2 -= sys->mDeltaTime;
	}

	if (!data->mState) {
		data->mState = 1;
	} else {
		if (mController->getButtonDown() & Controller::PRESS_B) {
			mDisp->mDataContena = mDataContena;
			data->mState        = 2;
			mDispState          = 3;
			data->mResult       = 0;
			data->mInTransfer   = 0;
			if ((data->mOnyonID == Game::Purple || data->mOnyonID == Game::White) && data->mExitSoundType) {
				ogSound->setCancel();
			} else {
				ogSound->setClose();
			}
			ret = true;
		} else if (mController->getButtonDown() & Controller::PRESS_A) {
			data->mState = 2;
			mDispState   = 4;
			ogSound->setDecide();
			ret = true;
		}
	}

	if (data->mState == 1) {
		if (mController->getButton() & Controller::PRESS_UP) {
			switch (mScreenState) {
			case 0:
				mScreenState = 1;
				putinPiki(false);
				mTimer0 = mMoveTime;
				break;
			case 1:
				mTimer0 -= sys->mDeltaTime;
				if (mTimer0 < 0.0f)
					mScreenState = 2;
				break;
			case 2:
				putinPiki(true);
				break;
			default:
				mScreenState = 0;
				break;
			}
		} else if (mController->getButton() & Controller::PRESS_DOWN) {
			switch (mScreenState) {
			case 0:
				mScreenState = 3;
				takeoutPiki(false);
				mTimer0 = mMoveTime;
				break;
			case 3:
				mTimer0 -= sys->mDeltaTime;
				if (mTimer0 < 0.0f)
					mScreenState = 4;
				break;
			case 4:
				takeoutPiki(true);
				break;
			default:
				mScreenState = 0;
				break;
			}
		} else {
			mScreenState = 0;
		}
	}
	return ret;
}

/**
 * @note Address: 0x803213C4
 * @note Size: 0x5FC
 */
void ObjContena::commonUpdate()
{
	if (mContena) {
		for (int i = 0; i < 10; i++) {
			if (mAnimList[i])
				mAnimList[i]->update();
		}
		for (int i = 0; i < 6; i++) {
			mPaneList[i]->setAlpha(mAlphaMgr[i]->calc());
		}
		f32 scale1 = mScaleMgr3->calc();
		f32 scale2 = mScaleMgr4->calc();
		mPaneOnyonL->updateScale(scale1);
		mPaneTiretul->updateScale(scale2);

		static f32 angle = 0.0f;
		angle += msVal._24;
		if (angle > TAU) {
			angle -= TAU;
		}
		f32 cosangle = sinf(angle) * msVal._28;
		mPaneArrowUp->setOffset(mPaneArrowUpPos.x, msVal._2C + (mPaneArrowUpPos.y + cosangle));

		mPaneArrowDown->setOffset(mPaneArrowDownPos.x, msVal._30 + (mPaneArrowDownPos.y - cosangle));

		mPaneArrowUp->setAlpha(u32(mAlpha * mAlphaArrow1->calc()) / 255);
		mPaneArrowDown->setAlpha(u32(mAlpha * mAlphaArrow2->calc()) / 255);

		f32 scale3 = msVal._34 * (mScaleArrow1->calc() - 1.0f) + 1.0f;
		f32 scale4 = msVal._34 * (mScaleArrow2->calc() - 1.0f) + 1.0f;
		mPaneArrowUp->updateScale(scale3);
		mPaneArrowDown->updateScale(scale4);
	}

	if (msVal._40) {
		f32 input1 = mController->mSStick.mXPos;
		f32 input2 = mController->mSStick.mYPos;
		if (input1 > 0.4f || input1 < -0.4f) {
			mMenuMoveAngle += input1 * 100.0f;
		}
		if (input2 > 0.4f || input2 < -0.4f) {
			mYAnalog += input2 * -100.0f;
		}
		if (mFuriko) {
			mFuriko->setParam(msVal._14, msVal._1C, msVal._18);
		}
	}

	tairetuOnOff();

	mDoDraw = true;
	mContena->setXY(mMenuMoveAngle, mYAnalog);
	mContena->update();

	mScreenCupsule->update();

	mTimer += msVal._08;
	if (mTimer >= TAU) {
		mTimer = 0.0f;
	}
	f32 time = mTimer;

	f32 x = (2.0f * msVal._00) * cosf(time) + (mSpotX + msVal._04);
	f32 y = msVal._00 * sinf(2.0f * time) + mSpotY;
	mPaneSpot->setOffset(x, y);

	mPaneSpot->setAlpha(mScreenAngle * 255.0f * msVal._10);
	mPaneSpot->updateScale(msVal._0C * (((1.0f - mScreenAngle) * 2.0f + 1.0f) * mSpotScale));
	mScreenSpot->update();
}

/**
 * @note Address: 0x803219C0
 * @note Size: 0x40
 */
bool ObjContena::doUpdate()
{
	bool ret = moveContena();
	commonUpdate();
	return ret;
}

/**
 * @note Address: 0x80321A00
 * @note Size: 0x174
 */
void ObjContena::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	graf->setPort();
	if (mDoDraw) {
		mContena->draw(gfx, *graf);

		J2DPane* pane1 = mContena->search('Pscon');
		J2DPane* pane2 = mScreenCupsule->search('Pscon');
		PSMTXCopy(pane1->mGlobalMtx, pane2->mPositionMtx);

		pane1 = mContena->search('Pscon01');
		pane2 = mScreenCupsule->search('Pscon01');
		PSMTXCopy(pane1->mGlobalMtx, pane2->mPositionMtx);
		mScreenCupsule->draw(gfx, *graf);
	}
	GXSetClipMode(GX_CLIP_ENABLE);
	mScreenSpot->draw(gfx, *graf);
}

/**
 * @note Address: 0x80321B74
 * @note Size: 0x44
 */
bool ObjContena::doStart(::Screen::StartSceneArg const*)
{
	mFadeLevel     = 0.0f;
	mMenuMoveAngle = 800.0f;
	mYAnalog       = 0.0f;
	mDoDraw        = false;
	ogSound->setOpen();
	return true;
}

/**
 * @note Address: 0x80321BB8
 * @note Size: 0x8
 */
bool ObjContena::doEnd(::Screen::EndSceneArg const*)
{
	return true;
}

/**
 * @note Address: 0x80321BC0
 * @note Size: 0x4
 */
void ObjContena::doUpdateFadeinFinish()
{
}

/**
 * @note Address: 0x80321BC4
 * @note Size: 0xC
 */
void ObjContena::doUpdateFinish()
{
	mFadeLevel = 0.0f;
}

/**
 * @note Address: 0x80321BD0
 * @note Size: 0x4
 */
void ObjContena::doUpdateFadeoutFinish()
{
}

/**
 * @note Address: 0x80321BD4
 * @note Size: 0xA8
 */
bool ObjContena::doUpdateFadein()
{
	bool check = false;
	commonUpdate();
	mFadeLevel += sys->mDeltaTime;
	mScreenAngle   = mFadeLevel / msVal._20;
	mMenuMoveAngle = (1.0f - og::Screen::calcSmooth0to1(mFadeLevel, msVal._20)) * 800.0f;

	if (mFadeLevel >= msVal._20) {
		check = true;
	}
	return check;
}

/**
 * @note Address: 0x80321C7C
 * @note Size: 0x1DC
 */
bool ObjContena::doUpdateFadeout()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;
	mScreenAngle   = 1.0f - mFadeLevel / msVal._20;
	mMenuMoveAngle = -800.0f * og::Screen::calcSmooth0to1(mFadeLevel, msVal._20);
	if (mFadeLevel >= msVal._20) {
		check                         = true;
		::Screen::SceneBase* scene    = getOwner();
		og::Screen::DataContena* data = mDisp->getDataContena();
		data->mState                  = mDispState;
		if (data->mState == 3 && data->mExitSoundType && (data->mOnyonID == Game::White || data->mOnyonID == Game::Purple)) {
			::Screen::SetSceneArg arg(SCENE_UFO_MENU, getDispMember());
			arg.mDoCreateBackup = false;
			if (scene->setScene(arg) && !scene->startScene(nullptr)) {
				JUT_PANICLINE(944, "だめです\n");
			}
		} else if (scene->setBackupScene()) {
			JUT_ASSERTLINE(953, scene->startScene(nullptr), "START ERR! (BackupScene)");
		} else {
			JUT_PANICLINE(958, "setBackupScene ERR!");
		}
	}
	commonUpdate();
	return check;
}

ObjContena::StaticValues ObjContena::msVal;

} // namespace newScreen
} // namespace og
