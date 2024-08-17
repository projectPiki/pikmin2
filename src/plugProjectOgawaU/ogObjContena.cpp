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
ObjContena::~ObjContena() { }

/**
 * @note Address: 0x803201B0
 * @note Size: 0x934
 */
void ObjContena::doCreate(JKRArchive* arc)
{
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
	mAnimList[0] = nullptr;
	mAnimList[1] = nullptr;
	mAnimList[2] = nullptr;
	mAnimList[3] = nullptr;
	mAnimList[4] = nullptr;
	mAnimList[5] = nullptr;
	mAnimList[6] = nullptr;
	mAnimList[7] = nullptr;
	mAnimList[8] = nullptr;
	mAnimList[9] = nullptr;

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
	f32 y = msVal._00 * sinf(time) + mSpotY;
	mPaneSpot->setOffset(x, y);

	mPaneSpot->setAlpha(mScreenAngle * 255.0f * msVal._10);
	mPaneSpot->updateScale(msVal._0C * (((1.0f - mScreenAngle) * 2.0f + 1.0f) * mSpotScale));
	mScreenSpot->update();
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r31, r3
	lwz      r0, 0x3c(r3)
	cmplwi   r0, 0
	beq      lbl_803216B4
	li       r29, 0
	mr       r30, r31

lbl_80321404:
	lwz      r3, 0x4c(r30)
	cmplwi   r3, 0
	beq      lbl_80321414
	bl       update__Q32og6Screen12AnimBaseBaseFv

lbl_80321414:
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 0xa
	blt      lbl_80321404
	li       r29, 0
	mr       r30, r31

lbl_8032142C:
	lwz      r3, 0x74(r30)
	bl       calc__Q32og6Screen8AlphaMgrFv
	mr       r4, r3
	lwz      r3, 0x8c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 6
	blt      lbl_8032142C
	lwz      r3, 0x15c(r31)
	bl       calc__Q32og6Screen8ScaleMgrFv
	fmr      f30, f1
	lwz      r3, 0x168(r31)
	bl       calc__Q32og6Screen8ScaleMgrFv
	lwz      r3, 0x158(r31)
	fmr      f31, f1
	stfs     f30, 0xcc(r3)
	stfs     f30, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x164(r31)
	stfs     f31, 0xcc(r3)
	stfs     f31, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, init$4148@sda21(r13)
	extsb.   r0, r0
	bne      lbl_803214C8
	lfs      f0, lbl_8051DC8C@sda21(r2)
	li       r0, 1
	stb      r0, init$4148@sda21(r13)
	stfs     f0, angle$4147@sda21(r13)

lbl_803214C8:
	lis      r3, msVal__Q32og9newScreen10ObjContena@ha
	lfs      f2, angle$4147@sda21(r13)
	addi     r3, r3, msVal__Q32og9newScreen10ObjContena@l
	lfs      f0, lbl_8051DCB0@sda21(r2)
	lfs      f1, 0x24(r3)
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	stfs     f1, angle$4147@sda21(r13)
	ble      lbl_803214F4
	fsubs    f0, f1, f0
	stfs     f0, angle$4147@sda21(r13)

lbl_803214F4:
	lfs      f2, angle$4147@sda21(r13)
	lis      r3, msVal__Q32og9newScreen10ObjContena@ha
	lfs      f0, lbl_8051DC8C@sda21(r2)
	addi     r3, r3, msVal__Q32og9newScreen10ObjContena@l
	lfs      f1, 0x28(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_8032153C
	lfs      f0, lbl_8051DCB4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80321560

lbl_8032153C:
	lfs      f0, lbl_8051DCB8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80321560:
	fmuls    f30, f1, f0
	lfs      f1, 0x134(r31)
	lis      r4, msVal__Q32og9newScreen10ObjContena@ha
	lwz      r3, 0x128(r31)
	addi     r4, r4, msVal__Q32og9newScreen10ObjContena@l
	lfs      f0, 0x130(r31)
	lfs      f2, 0x2c(r4)
	fadds    f1, f1, f30
	stfs     f0, 0xd4(r3)
	fadds    f0, f2, f1
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x13c(r31)
	lis      r3, msVal__Q32og9newScreen10ObjContena@ha
	addi     r4, r3, msVal__Q32og9newScreen10ObjContena@l
	lwz      r3, 0x12c(r31)
	fsubs    f1, f0, f30
	lfs      f2, 0x30(r4)
	lfs      f0, 0x138(r31)
	fadds    f1, f2, f1
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x118(r31)
	bl       calc__Q32og6Screen8AlphaMgrFv
	lbz      r0, 0x148(r31)
	clrlwi   r5, r3, 0x18
	lis      r4, 0x80808081@ha
	lwz      r3, 0x128(r31)
	mullw    r0, r0, r5
	addi     r4, r4, 0x80808081@l
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mulhwu   r0, r4, r0
	rlwinm   r4, r0, 0x19, 0x18, 0x1f
	mtctr    r12
	bctrl
	lwz      r3, 0x11c(r31)
	bl       calc__Q32og6Screen8AlphaMgrFv
	lbz      r0, 0x148(r31)
	clrlwi   r5, r3, 0x18
	lis      r4, 0x80808081@ha
	lwz      r3, 0x12c(r31)
	mullw    r0, r0, r5
	addi     r4, r4, 0x80808081@l
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mulhwu   r0, r4, r0
	rlwinm   r4, r0, 0x19, 0x18, 0x1f
	mtctr    r12
	bctrl
	lwz      r3, 0x120(r31)
	bl       calc__Q32og6Screen8ScaleMgrFv
	lfs      f2, lbl_8051DC94@sda21(r2)
	lis      r3, msVal__Q32og9newScreen10ObjContena@ha
	addi     r30, r3, msVal__Q32og9newScreen10ObjContena@l
	lwz      r3, 0x124(r31)
	fsubs    f1, f1, f2
	lfs      f0, 0x34(r30)
	fmadds   f30, f0, f1, f2
	bl       calc__Q32og6Screen8ScaleMgrFv
	lwz      r3, 0x128(r31)
	lfs      f0, 0x34(r30)
	lfs      f2, lbl_8051DC94@sda21(r2)
	stfs     f30, 0xcc(r3)
	fsubs    f1, f1, f2
	stfs     f30, 0xd0(r3)
	lwz      r12, 0(r3)
	fmadds   f30, f0, f1, f2
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x12c(r31)
	stfs     f30, 0xcc(r3)
	stfs     f30, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_803216B4:
	lis      r3, msVal__Q32og9newScreen10ObjContena@ha
	addi     r3, r3, msVal__Q32og9newScreen10ObjContena@l
	lbz      r0, 0x40(r3)
	cmplwi   r0, 0
	beq      lbl_80321748
	lwz      r3, 0x48(r31)
	lfs      f0, lbl_8051DCBC@sda21(r2)
	lfs      f2, 0x58(r3)
	lfs      f3, 0x5c(r3)
	fcmpo    cr0, f2, f0
	bgt      lbl_803216EC
	lfs      f0, lbl_8051DCC0@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_803216FC

lbl_803216EC:
	lfs      f1, lbl_8051DCC4@sda21(r2)
	lfs      f0, 0xf0(r31)
	fmadds   f0, f1, f2, f0
	stfs     f0, 0xf0(r31)

lbl_803216FC:
	lfs      f0, lbl_8051DCBC@sda21(r2)
	fcmpo    cr0, f3, f0
	bgt      lbl_80321714
	lfs      f0, lbl_8051DCC0@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_80321724

lbl_80321714:
	lfs      f1, lbl_8051DCC8@sda21(r2)
	lfs      f0, 0xf4(r31)
	fmadds   f0, f1, f3, f0
	stfs     f0, 0xf4(r31)

lbl_80321724:
	lwz      r3, 0xec(r31)
	cmplwi   r3, 0
	beq      lbl_80321748
	lis      r4, msVal__Q32og9newScreen10ObjContena@ha
	addi     r4, r4, msVal__Q32og9newScreen10ObjContena@l
	lfs      f1, 0x14(r4)
	lfs      f2, 0x1c(r4)
	lfs      f3, 0x18(r4)
	bl       setParam__Q32og6Screen15CallBack_FurikoFfff

lbl_80321748:
	li       r7, 0
	li       r5, 1
	mr       r8, r7
	mr       r4, r7
	b        lbl_80321794

lbl_8032175C:
	lwz      r3, 0x38(r31)
	addi     r6, r7, 1
	lwz      r0, 0x14(r3)
	cmplw    r6, r0
	bgt      lbl_80321780
	lwz      r3, 0x14c(r31)
	lwzx     r3, r3, r8
	stb      r5, 0xb0(r3)
	b        lbl_8032178C

lbl_80321780:
	lwz      r3, 0x14c(r31)
	lwzx     r3, r3, r8
	stb      r4, 0xb0(r3)

lbl_8032178C:
	addi     r8, r8, 4
	addi     r7, r7, 1

lbl_80321794:
	lwz      r0, 0x150(r31)
	cmpw     r7, r0
	blt      lbl_8032175C
	li       r0, 1
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stb      r0, 0x10c(r31)
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f2, 0xf0(r31)
	lfs      f3, 0xf4(r31)
	fadds    f1, f2, f1
	lwz      r3, 0x3c(r31)
	fadds    f0, f3, f0
	stfs     f1, 0x140(r3)
	stfs     f0, 0x144(r3)
	lwz      r3, 0x3c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x44(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lis      r3, msVal__Q32og9newScreen10ObjContena@ha
	lfs      f2, 0x108(r31)
	addi     r3, r3, msVal__Q32og9newScreen10ObjContena@l
	lfs      f0, lbl_8051DCB0@sda21(r2)
	lfs      f1, 8(r3)
	fadds    f1, f2, f1
	stfs     f1, 0x108(r31)
	lfs      f1, 0x108(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80321828
	lfs      f0, lbl_8051DC8C@sda21(r2)
	stfs     f0, 0x108(r31)

lbl_80321828:
	lfs      f6, 0x108(r31)
	lfs      f0, lbl_8051DC8C@sda21(r2)
	fmr      f1, f6
	fcmpo    cr0, f6, f0
	bge      lbl_80321840
	fneg     f1, f6

lbl_80321840:
	lfs      f4, lbl_8051DCB8@sda21(r2)
	lis      r3, msVal__Q32og9newScreen10ObjContena@ha
	addi     r4, r3, msVal__Q32og9newScreen10ObjContena@l
	lfs      f5, lbl_8051DCCC@sda21(r2)
	fmuls    f0, f1, f4
	lfs      f7, 0(r4)
	fmuls    f6, f5, f6
	lis      r3, sincosTable___5JMath@ha
	lfs      f1, 4(r4)
	addi     r4, r3, sincosTable___5JMath@l
	fctiwz   f3, f0
	lfs      f2, 0xfc(r31)
	lfs      f0, lbl_8051DC8C@sda21(r2)
	fmuls    f5, f5, f7
	fadds    f1, f2, f1
	stfd     f3, 0x10(r1)
	fcmpo    cr0, f6, f0
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f2, f5, f0, f1
	bge      lbl_803218C0
	lfs      f0, lbl_8051DCB4@sda21(r2)
	fmuls    f0, f6, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_803218D8

lbl_803218C0:
	fmuls    f0, f6, f4
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_803218D8:
	lfs      f0, 0x100(r31)
	lwz      r3, 0xf8(r31)
	fmadds   f0, f7, f1, f0
	stfs     f2, 0xd4(r3)
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051DCD0@sda21(r2)
	lis      r3, msVal__Q32og9newScreen10ObjContena@ha
	lfs      f0, 0xa8(r31)
	addi     r4, r3, msVal__Q32og9newScreen10ObjContena@l
	lwz      r3, 0xf8(r31)
	fmuls    f1, f1, f0
	lfs      f0, 0x10(r4)
	lwz      r12, 0(r3)
	fmuls    f0, f1, f0
	lwz      r12, 0x24(r12)
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r4, 0x24(r1)
	mtctr    r12
	bctrl
	lfs      f2, lbl_8051DC94@sda21(r2)
	lis      r3, msVal__Q32og9newScreen10ObjContena@ha
	lfs      f0, 0xa8(r31)
	addi     r4, r3, msVal__Q32og9newScreen10ObjContena@l
	lfs      f3, lbl_8051DCCC@sda21(r2)
	fsubs    f1, f2, f0
	lfs      f0, 0x104(r31)
	lfs      f4, 0xc(r4)
	lwz      r3, 0xf8(r31)
	fmadds   f1, f3, f1, f2
	fmuls    f0, f1, f0
	fmuls    f0, f4, f0
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x40(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x64(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
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
bool ObjContena::doEnd(::Screen::EndSceneArg const*) { return true; }

/**
 * @note Address: 0x80321BC0
 * @note Size: 0x4
 */
void ObjContena::doUpdateFadeinFinish() { }

/**
 * @note Address: 0x80321BC4
 * @note Size: 0xC
 */
void ObjContena::doUpdateFinish() { mFadeLevel = 0.0f; }

/**
 * @note Address: 0x80321BD0
 * @note Size: 0x4
 */
void ObjContena::doUpdateFadeoutFinish() { }

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
		if (data->mState == 3 && data->mExitSoundType) {
			if (data->mOnyonID == Game::White || data->mOnyonID == Game::Purple) {
				::Screen::SetSceneArg arg(SCENE_UFO_MENU, getDispMember());
				arg.mDoCreateBackup = false;
				if (scene->setScene(arg) && !scene->startScene(nullptr)) {
					JUT_PANICLINE(944, "だめです\n");
				}
			}
			return;
		}

		if (scene->setBackupScene()) {
			JUT_ASSERTLINE(953, scene->startScene(nullptr), "START ERR! (BackupScene)");
		} else {
			JUT_PANICLINE(958, "setBackupScene ERR!");
		}
	}
	commonUpdate();
	return check;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f2, lbl_8051DC94@sda21(r2)
	lis      r5, lbl_8048EFE0@ha
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r5, lbl_8048EFE0@l
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	mr       r28, r3
	lis      r3, msVal__Q32og9newScreen10ObjContena@ha
	lwz      r4, sys@sda21(r13)
	addi     r29, r3, msVal__Q32og9newScreen10ObjContena@l
	lfs      f1, 0x110(r28)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x110(r28)
	lfs      f1, 0x110(r28)
	lfs      f0, 0x20(r29)
	fdivs    f0, f1, f0
	fsubs    f0, f2, f0
	stfs     f0, 0xa8(r28)
	lfs      f1, 0x110(r28)
	lfs      f2, 0x20(r29)
	bl       calcSmooth0to1__Q22og6ScreenFff
	lfs      f0, lbl_8051DCD4@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0xf0(r28)
	lfs      f1, 0x110(r28)
	lfs      f0, 0x20(r29)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80321E2C
	mr       r3, r28
	li       r30, 1
	lwz      r12, 0(r28)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x38(r28)
	mr       r29, r3
	lwz      r0, 0xe8(r28)
	stw      r0, 0x30(r4)
	lwz      r0, 0x30(r4)
	cmpwi    r0, 3
	bne      lbl_80321DDC
	lbz      r0, 0x2c(r4)
	cmplwi   r0, 0
	beq      lbl_80321DDC
	lwz      r0, 8(r4)
	cmpwi    r0, 4
	beq      lbl_80321D5C
	cmpwi    r0, 3
	bne      lbl_80321DDC

lbl_80321D5C:
	mr       r3, r28
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	li       r0, 1
	addi     r5, r4, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	stw      r5, 8(r1)
	addi     r7, r4, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x2719
	li       r5, 0
	stb      r0, 0x11(r1)
	addi     r4, r1, 8
	stw      r3, 0x14(r1)
	mr       r3, r29
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r5, 0x11(r1)
	bl       setScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80321E2C
	mr       r3, r29
	li       r4, 0
	bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	clrlwi.  r0, r3, 0x18
	bne      lbl_80321E2C
	addi     r3, r31, 0
	addi     r5, r31, 0x10c
	li       r4, 0x3b0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80321E2C

lbl_80321DDC:
	mr       r3, r29
	bl       setBackupScene__Q26Screen9SceneBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80321E18
	mr       r3, r29
	li       r4, 0
	bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	clrlwi.  r0, r3, 0x18
	bne      lbl_80321E2C
	addi     r3, r31, 0
	addi     r5, r31, 0x118
	li       r4, 0x3b9
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80321E2C

lbl_80321E18:
	addi     r3, r31, 0
	addi     r5, r31, 0x134
	li       r4, 0x3be
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80321E2C:
	mr       r3, r28
	bl       commonUpdate__Q32og9newScreen10ObjContenaFv
	lwz      r0, 0x34(r1)
	mr       r3, r30
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

ObjContena::StaticValues ObjContena::msVal;

} // namespace newScreen
} // namespace og
