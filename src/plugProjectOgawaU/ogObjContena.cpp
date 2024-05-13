#include "og/newScreen/Contena.h"
#include "og/Screen/ContenaCounter.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/AlphaMgr.h"
#include "og/Screen/StickAnimMgr.h"
#include "og/Screen/anime.h"
#include "og/Sound.h"
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
	mInOnionCount   = 100;
	mCurrField      = 1000;
	mInSquadCount   = 0;
	mMaxPikiOnField = 20;
	mInParty2       = 50;
	mOnMapCount     = 60;
	mMaxPikiCount   = 200;
	mOnyonID        = -1;
	mInTransfer     = 0;
	mExitSoundType  = 0;
	mDispState      = 0;
	mDispResult     = 0;
	mName           = name;
	mDisp           = nullptr;
	mContena        = nullptr;
	mController     = nullptr;

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
	mDispState2         = 1;
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
		JUT_PANICLINE(242, "ERR! in ObjContena CreateŽ¸”sI\n");
	}
	og::Screen::DispMemberContena* disp2 = mDisp;

	mOnyonID        = disp2->mOnyonID;
	mInOnionCount   = disp2->mInOnion;
	mCurrField      = disp2->mCurrInMap;
	mInSquadCount   = disp2->mNewInPartyNum;
	mMaxPikiOnField = disp2->mMaxPikiField;
	mInParty2       = disp2->mInParty2;
	mOnMapCount     = disp2->mOnMapMinusWild;
	mMaxPikiCount   = disp2->mMaxPikiMinusWild;
	mInTransfer     = disp2->mInTransfer;
	mExitSoundType  = disp2->mExitSoundType;
	mDispState      = disp2->mState;
	mDispResult     = disp2->mResult;
	mDisp->mState   = 0;
	mContena        = new og::Screen::ContenaCounter(mDisp);

	switch (mDisp->mOnyonID) {
	case 0:
		mContena->setblo("contena_b.blo", arc);
		break;
	case 1:
		mContena->setblo("contena_r.blo", arc);
		break;
	case 2:
		mContena->setblo("contena_y.blo", arc);
		break;
	case 3:
		mContena->setblo("contena_bl.blo", arc);
		break;
	case 4:
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

	for (int i = 0; i < 100; i++) {
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

	int type = mDisp->mOnyonID;
	if (type == 3 || type == 4) {
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
	// UNUSED FUNCTION
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
	if (disp->mCurrInMap <= disp->mInOnion && mState == 1) {
		if (!soundType) {
			ogSound->setError();
		}
	} else {
		ogSound->setError();
		changeMessage(1);
		setStickDown();
		return;
	}

	if (disp->mNewInPartyNum == 0) {
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
		disp->mInOnion++;
		disp->mNewInPartyNum--;
		disp->mInParty2--;
		disp->mOnMapMinusWild--;
		disp->mResult++;
		disp->mInTransfer = (u16)abs(disp->mResult); // should be just abs
		setStickUpDown();
		if (mTimer1 <= 0.0f) {
			mScaleArrow1->up();
			mTimer1 = msVal._38;
		}
		mScaleMgr3->up(0.1f, 30.0f, 0.8f, 0.0f);
		mScaleMgr4->down(0.05f, 35.0f, 0.8f);
		ogSound->setPlusMinus(soundType);
	}

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 0x38(r3)
	lwz      r3, 0x10(r31)
	lwz      r0, 0xc(r31)
	cmplw    r3, r0
	bgt      lbl_80320BA4
	lwz      r0, 0xa4(r29)
	cmpwi    r0, 1
	bne      lbl_80320B38
	clrlwi.  r0, r30, 0x18
	bne      lbl_80320D4C
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setError__Q22og5SoundFv
	b        lbl_80320D4C

lbl_80320B38:
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setError__Q22og5SoundFv
	lwz      r0, 0xa4(r29)
	cmplwi   r0, 1
	beq      lbl_80320B80
	slwi     r0, r0, 2
	lfs      f1, lbl_8051DC90@sda21(r2)
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       out__Q32og6Screen8AlphaMgrFf
	li       r0, 1
	lfs      f1, lbl_8051DC98@sda21(r2)
	stw      r0, 0xa4(r29)
	lwz      r0, 0xa4(r29)
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       in__Q32og6Screen8AlphaMgrFf

lbl_80320B80:
	lwz      r3, 0x118(r29)
	lfs      f1, lbl_8051DC90@sda21(r2)
	bl       out__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x11c(r29)
	lfs      f1, lbl_8051DC98@sda21(r2)
	bl       in__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x114(r29)
	bl       stickDown__Q32og6Screen12StickAnimMgrFv
	b        lbl_80320D4C

lbl_80320BA4:
	lwz      r0, 0x14(r31)
	cmplwi   r0, 0
	bne      lbl_80320C3C
	lwz      r0, 0xa4(r29)
	cmpwi    r0, 4
	bne      lbl_80320BD0
	clrlwi.  r0, r30, 0x18
	bne      lbl_80320D4C
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setError__Q22og5SoundFv
	b        lbl_80320D4C

lbl_80320BD0:
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setError__Q22og5SoundFv
	lwz      r0, 0xa4(r29)
	cmplwi   r0, 4
	beq      lbl_80320C18
	slwi     r0, r0, 2
	lfs      f1, lbl_8051DC90@sda21(r2)
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       out__Q32og6Screen8AlphaMgrFf
	li       r0, 4
	lfs      f1, lbl_8051DC98@sda21(r2)
	stw      r0, 0xa4(r29)
	lwz      r0, 0xa4(r29)
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       in__Q32og6Screen8AlphaMgrFf

lbl_80320C18:
	lwz      r3, 0x118(r29)
	lfs      f1, lbl_8051DC90@sda21(r2)
	bl       out__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x11c(r29)
	lfs      f1, lbl_8051DC98@sda21(r2)
	bl       in__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x114(r29)
	bl       stickDown__Q32og6Screen12StickAnimMgrFv
	b        lbl_80320D4C

lbl_80320C3C:
	lwz      r0, 0xa4(r29)
	cmplwi   r0, 0
	beq      lbl_80320C7C
	slwi     r0, r0, 2
	lfs      f1, lbl_8051DC90@sda21(r2)
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       out__Q32og6Screen8AlphaMgrFf
	li       r0, 0
	lfs      f1, lbl_8051DC98@sda21(r2)
	stw      r0, 0xa4(r29)
	lwz      r0, 0xa4(r29)
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       in__Q32og6Screen8AlphaMgrFf

lbl_80320C7C:
	lwz      r3, 0xc(r31)
	addi     r0, r3, 1
	stw      r0, 0xc(r31)
	lwz      r3, 0x14(r31)
	addi     r0, r3, -1
	stw      r0, 0x14(r31)
	lwz      r3, 0x1c(r31)
	addi     r0, r3, -1
	stw      r0, 0x1c(r31)
	lwz      r3, 0x20(r31)
	addi     r0, r3, -1
	stw      r0, 0x20(r31)
	lha      r3, 0x34(r31)
	addi     r0, r3, 1
	sth      r0, 0x34(r31)
	lha      r3, 0x34(r31)
	bl       abs
	clrlwi   r0, r3, 0x10
	lfs      f1, lbl_8051DC98@sda21(r2)
	stw      r0, 0x28(r31)
	lwz      r3, 0x118(r29)
	bl       in__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x11c(r29)
	lfs      f1, lbl_8051DC98@sda21(r2)
	bl       in__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x114(r29)
	bl       stickUpDown__Q32og6Screen12StickAnimMgrFv
	lfs      f1, 0x140(r29)
	lfs      f0, lbl_8051DC8C@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80320D14
	lwz      r3, 0x120(r29)
	bl       up__Q32og6Screen8ScaleMgrFv
	lis      r3, msVal__Q32og9newScreen10ObjContena@ha
	addi     r3, r3, msVal__Q32og9newScreen10ObjContena@l
	lfs      f0, 0x38(r3)
	stfs     f0, 0x140(r29)

lbl_80320D14:
	lwz      r3, 0x15c(r29)
	lfs      f1, lbl_8051DC9C@sda21(r2)
	lfs      f2, lbl_8051DCA0@sda21(r2)
	lfs      f3, lbl_8051DCA4@sda21(r2)
	lfs      f4, lbl_8051DC8C@sda21(r2)
	bl       up__Q32og6Screen8ScaleMgrFffff
	lwz      r3, 0x168(r29)
	lfs      f1, lbl_8051DCA8@sda21(r2)
	lfs      f2, lbl_8051DCAC@sda21(r2)
	lfs      f3, lbl_8051DCA4@sda21(r2)
	bl       down__Q32og6Screen8ScaleMgrFfff
	lwz      r3, ogSound__2og@sda21(r13)
	mr       r4, r30
	bl       setPlusMinus__Q22og5SoundFb

lbl_80320D4C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80320D68
 * @note Size: 0x320
 */
void ObjContena::takeoutPiki(bool soundType)
{
	og::Screen::DispMemberContena* disp = mDisp;
	if (disp->mNewInPartyNum < disp->mMaxPikiField) {
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

	if (disp->mInOnion == 0) {
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
	} else if (disp->mOnMapMinusWild < disp->mMaxPikiMinusWild) {
	} else if (mState == 5) {
		if (!soundType) {
			ogSound->setError();
			return;
		}
	} else {
		ogSound->setError();
		changeMessage(5);
		setStickUp();
		return;
	}

	changeMessage(0);
	disp->mInOnion--;
	disp->mNewInPartyNum++;
	disp->mInParty2++;
	disp->mOnMapMinusWild++;
	disp->mResult--;
	disp->mInTransfer = (u16)abs(disp->mResult);
	setStickUpDown();
	if (mTimer2 <= 0.0f) {
		mScaleArrow2->up();
		mTimer2 = msVal._38;
	}
	mScaleMgr4->up(0.1f, 30.0f, 0.8f, 0.0f);
	mScaleMgr3->down(0.05f, 35.0f, 0.8f);
	ogSound->setPlusMinus(soundType);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 0x38(r3)
	lwz      r3, 0x14(r31)
	lwz      r0, 0x18(r31)
	cmplw    r3, r0
	blt      lbl_80320E28
	lwz      r0, 0xa4(r29)
	cmpwi    r0, 2
	bne      lbl_80320DBC
	clrlwi.  r0, r30, 0x18
	bne      lbl_8032106C
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setError__Q22og5SoundFv
	b        lbl_8032106C

lbl_80320DBC:
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setError__Q22og5SoundFv
	lwz      r0, 0xa4(r29)
	cmplwi   r0, 2
	beq      lbl_80320E04
	slwi     r0, r0, 2
	lfs      f1, lbl_8051DC90@sda21(r2)
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       out__Q32og6Screen8AlphaMgrFf
	li       r0, 2
	lfs      f1, lbl_8051DC98@sda21(r2)
	stw      r0, 0xa4(r29)
	lwz      r0, 0xa4(r29)
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       in__Q32og6Screen8AlphaMgrFf

lbl_80320E04:
	lwz      r3, 0x118(r29)
	lfs      f1, lbl_8051DC98@sda21(r2)
	bl       in__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x11c(r29)
	lfs      f1, lbl_8051DC90@sda21(r2)
	bl       out__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x114(r29)
	bl       stickUp__Q32og6Screen12StickAnimMgrFv
	b        lbl_8032106C

lbl_80320E28:
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_80320EC0
	lwz      r0, 0xa4(r29)
	cmpwi    r0, 3
	bne      lbl_80320E54
	clrlwi.  r0, r30, 0x18
	bne      lbl_8032106C
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setError__Q22og5SoundFv
	b        lbl_8032106C

lbl_80320E54:
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setError__Q22og5SoundFv
	lwz      r0, 0xa4(r29)
	cmplwi   r0, 3
	beq      lbl_80320E9C
	slwi     r0, r0, 2
	lfs      f1, lbl_8051DC90@sda21(r2)
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       out__Q32og6Screen8AlphaMgrFf
	li       r0, 3
	lfs      f1, lbl_8051DC98@sda21(r2)
	stw      r0, 0xa4(r29)
	lwz      r0, 0xa4(r29)
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       in__Q32og6Screen8AlphaMgrFf

lbl_80320E9C:
	lwz      r3, 0x118(r29)
	lfs      f1, lbl_8051DC98@sda21(r2)
	bl       in__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x11c(r29)
	lfs      f1, lbl_8051DC90@sda21(r2)
	bl       out__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x114(r29)
	bl       stickUp__Q32og6Screen12StickAnimMgrFv
	b        lbl_8032106C

lbl_80320EC0:
	lwz      r3, 0x20(r31)
	lwz      r0, 0x24(r31)
	cmplw    r3, r0
	blt      lbl_80320F5C
	lwz      r0, 0xa4(r29)
	cmpwi    r0, 5
	bne      lbl_80320EF0
	clrlwi.  r0, r30, 0x18
	bne      lbl_8032106C
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setError__Q22og5SoundFv
	b        lbl_8032106C

lbl_80320EF0:
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setError__Q22og5SoundFv
	lwz      r0, 0xa4(r29)
	cmplwi   r0, 5
	beq      lbl_80320F38
	slwi     r0, r0, 2
	lfs      f1, lbl_8051DC90@sda21(r2)
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       out__Q32og6Screen8AlphaMgrFf
	li       r0, 5
	lfs      f1, lbl_8051DC98@sda21(r2)
	stw      r0, 0xa4(r29)
	lwz      r0, 0xa4(r29)
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       in__Q32og6Screen8AlphaMgrFf

lbl_80320F38:
	lwz      r3, 0x118(r29)
	lfs      f1, lbl_8051DC98@sda21(r2)
	bl       in__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x11c(r29)
	lfs      f1, lbl_8051DC90@sda21(r2)
	bl       out__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x114(r29)
	bl       stickUp__Q32og6Screen12StickAnimMgrFv
	b        lbl_8032106C

lbl_80320F5C:
	lwz      r0, 0xa4(r29)
	cmplwi   r0, 0
	beq      lbl_80320F9C
	slwi     r0, r0, 2
	lfs      f1, lbl_8051DC90@sda21(r2)
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       out__Q32og6Screen8AlphaMgrFf
	li       r0, 0
	lfs      f1, lbl_8051DC98@sda21(r2)
	stw      r0, 0xa4(r29)
	lwz      r0, 0xa4(r29)
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x74(r3)
	bl       in__Q32og6Screen8AlphaMgrFf

lbl_80320F9C:
	lwz      r3, 0xc(r31)
	addi     r0, r3, -1
	stw      r0, 0xc(r31)
	lwz      r3, 0x14(r31)
	addi     r0, r3, 1
	stw      r0, 0x14(r31)
	lwz      r3, 0x1c(r31)
	addi     r0, r3, 1
	stw      r0, 0x1c(r31)
	lwz      r3, 0x20(r31)
	addi     r0, r3, 1
	stw      r0, 0x20(r31)
	lha      r3, 0x34(r31)
	addi     r0, r3, -1
	sth      r0, 0x34(r31)
	lha      r3, 0x34(r31)
	bl       abs
	clrlwi   r0, r3, 0x10
	lfs      f1, lbl_8051DC98@sda21(r2)
	stw      r0, 0x28(r31)
	lwz      r3, 0x118(r29)
	bl       in__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x11c(r29)
	lfs      f1, lbl_8051DC98@sda21(r2)
	bl       in__Q32og6Screen8AlphaMgrFf
	lwz      r3, 0x114(r29)
	bl       stickUpDown__Q32og6Screen12StickAnimMgrFv
	lfs      f1, 0x144(r29)
	lfs      f0, lbl_8051DC8C@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80321034
	lwz      r3, 0x124(r29)
	bl       up__Q32og6Screen8ScaleMgrFv
	lis      r3, msVal__Q32og9newScreen10ObjContena@ha
	addi     r3, r3, msVal__Q32og9newScreen10ObjContena@l
	lfs      f0, 0x38(r3)
	stfs     f0, 0x144(r29)

lbl_80321034:
	lwz      r3, 0x168(r29)
	lfs      f1, lbl_8051DC9C@sda21(r2)
	lfs      f2, lbl_8051DCA0@sda21(r2)
	lfs      f3, lbl_8051DCA4@sda21(r2)
	lfs      f4, lbl_8051DC8C@sda21(r2)
	bl       up__Q32og6Screen8ScaleMgrFffff
	lwz      r3, 0x15c(r29)
	lfs      f1, lbl_8051DCA8@sda21(r2)
	lfs      f2, lbl_8051DCAC@sda21(r2)
	lfs      f3, lbl_8051DCA4@sda21(r2)
	bl       down__Q32og6Screen8ScaleMgrFfff
	lwz      r3, ogSound__2og@sda21(r13)
	mr       r4, r30
	bl       setPlusMinus__Q22og5SoundFb

lbl_8032106C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80321088
 * @note Size: 0x33C
 */
bool ObjContena::moveContena()
{
	bool ret                            = false;
	og::Screen::DispMemberContena* disp = mDisp;
	int* onyontype                      = &disp->mOnyonID;
	JUT_ASSERTLINE(603, onyontype, "DataContena is not found!\n");
	JUT_ASSERTLINE(607, *onyontype != -1, "Contena Type error!\n");

	if (mTimer1 > 0.0f) {
		mTimer1 -= sys->mDeltaTime;
	}
	if (mTimer2 > 0.0f) {
		mTimer2 -= sys->mDeltaTime;
	}

	if (!disp->mState) {
		disp->mState = 1;
	} else {
		if (mController->getButtonDown() & Controller::PRESS_B) {
			disp                    = mDisp;
			disp->mOnyonID          = mOnyonID;
			disp->mInOnion          = mInOnionCount;
			disp->mCurrInMap        = mCurrField;
			disp->mNewInPartyNum    = mInSquadCount;
			disp->mMaxPikiField     = mMaxPikiOnField;
			disp->mInParty2         = mInParty2;
			disp->mOnMapMinusWild   = mOnMapCount;
			disp->mMaxPikiMinusWild = mMaxPikiCount;
			disp->mInTransfer       = mInTransfer;
			disp->mExitSoundType    = mExitSoundType;
			disp->mInTransfer       = mDispState;
			disp->mResult           = mDispResult;
			disp->mState            = 2;
			mDispState2             = 3;
			disp->mResult           = 0;
			disp->mInTransfer       = 0;
			if ((*onyontype == 3 || *onyontype) && disp->mExitSoundType) {
				ogSound->setCancel();
			} else {
				ogSound->setClose();
			}
			ret = true;
		} else if (mController->getButtonDown() & Controller::PRESS_A) {
			disp->mState = 2;
			mDispState2  = 4;
			ogSound->setDecide();
			ret = true;
		}
	}

	if (disp->mState == 1) {
		if (mController->getButtonDown() & Controller::PRESS_UP) {
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
			}
			mScreenState = 0;
		} else if (mController->getButtonDown() & Controller::PRESS_DOWN) {
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
			}
			mScreenState = 0;
		} else {
			mScreenState = 0;
		}
	}
	return ret;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8048EFE0@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	addi     r28, r4, lbl_8048EFE0@l
	lwz      r3, 0x38(r3)
	addic.   r30, r3, 8
	bne      lbl_803210D4
	addi     r3, r28, 0
	addi     r5, r28, 0xd8
	li       r4, 0x25b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803210D4:
	lwz      r0, 0(r30)
	cmpwi    r0, -1
	bne      lbl_803210F4
	addi     r3, r28, 0
	addi     r5, r28, 0xf4
	li       r4, 0x25f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803210F4:
	lfs      f1, 0x140(r29)
	lfs      f0, lbl_8051DC8C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80321114
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x140(r29)

lbl_80321114:
	lfs      f1, 0x144(r29)
	lfs      f0, lbl_8051DC8C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80321134
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x144(r29)

lbl_80321134:
	lwz      r0, 0x28(r30)
	cmpwi    r0, 0
	bne      lbl_8032114C
	li       r0, 1
	stw      r0, 0x28(r30)
	b        lbl_8032123C

lbl_8032114C:
	lwz      r3, 0x48(r29)
	lwz      r3, 0x1c(r3)
	rlwinm.  r0, r3, 0, 0x16, 0x16
	beq      lbl_80321218
	lwz      r6, 0x38(r29)
	li       r4, 2
	lwz      r5, 0xb8(r29)
	li       r3, 3
	li       r0, 0
	stw      r5, 8(r6)
	lwz      r5, 0xbc(r29)
	stw      r5, 0xc(r6)
	lwz      r5, 0xc0(r29)
	stw      r5, 0x10(r6)
	lwz      r5, 0xc4(r29)
	stw      r5, 0x14(r6)
	lwz      r5, 0xc8(r29)
	stw      r5, 0x18(r6)
	lwz      r5, 0xcc(r29)
	stw      r5, 0x1c(r6)
	lwz      r5, 0xd0(r29)
	stw      r5, 0x20(r6)
	lwz      r5, 0xd4(r29)
	stw      r5, 0x24(r6)
	lwz      r5, 0xd8(r29)
	stw      r5, 0x28(r6)
	lbz      r5, 0xdc(r29)
	stb      r5, 0x2c(r6)
	lwz      r5, 0xe0(r29)
	stw      r5, 0x30(r6)
	lha      r5, 0xe4(r29)
	sth      r5, 0x34(r6)
	stw      r4, 0x28(r30)
	stw      r3, 0xe8(r29)
	sth      r0, 0x2c(r30)
	stw      r0, 0x20(r30)
	lwz      r0, 0(r30)
	cmpwi    r0, 3
	beq      lbl_803211F0
	cmpwi    r0, 4
	bne      lbl_80321208

lbl_803211F0:
	lbz      r0, 0x24(r30)
	cmplwi   r0, 0
	beq      lbl_80321208
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setCancel__Q22og5SoundFv
	b        lbl_80321210

lbl_80321208:
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setClose__Q22og5SoundFv

lbl_80321210:
	li       r31, 1
	b        lbl_8032123C

lbl_80321218:
	rlwinm.  r0, r3, 0, 0x17, 0x17
	beq      lbl_8032123C
	li       r3, 2
	li       r0, 4
	stw      r3, 0x28(r30)
	stw      r0, 0xe8(r29)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setDecide__Q22og5SoundFv
	li       r31, 1

lbl_8032123C:
	lwz      r0, 0x28(r30)
	cmpwi    r0, 1
	bne      lbl_803213A0
	lwz      r4, 0x48(r29)
	lis      r3, 0x08000008@ha
	addi     r0, r3, 0x08000008@l
	lwz      r4, 0x18(r4)
	and.     r0, r4, r0
	beq      lbl_803212F4
	lwz      r0, 0xac(r29)
	cmpwi    r0, 1
	beq      lbl_803212A8
	bge      lbl_8032127C
	cmpwi    r0, 0
	bge      lbl_80321288
	b        lbl_803212E8

lbl_8032127C:
	cmpwi    r0, 3
	bge      lbl_803212E8
	b        lbl_803212D8

lbl_80321288:
	li       r0, 1
	mr       r3, r29
	stw      r0, 0xac(r29)
	li       r4, 0
	bl       putinPiki__Q32og9newScreen10ObjContenaFb
	lfs      f0, 0xb0(r29)
	stfs     f0, 0xb4(r29)
	b        lbl_803213A0

lbl_803212A8:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0xb4(r29)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051DC8C@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0xb4(r29)
	lfs      f1, 0xb4(r29)
	fcmpo    cr0, f1, f0
	bge      lbl_803213A0
	li       r0, 2
	stw      r0, 0xac(r29)
	b        lbl_803213A0

lbl_803212D8:
	mr       r3, r29
	li       r4, 1
	bl       putinPiki__Q32og9newScreen10ObjContenaFb
	b        lbl_803213A0

lbl_803212E8:
	li       r0, 0
	stw      r0, 0xac(r29)
	b        lbl_803213A0

lbl_803212F4:
	lis      r3, 0x04000004@ha
	addi     r0, r3, 0x04000004@l
	and.     r0, r4, r0
	beq      lbl_80321398
	lwz      r0, 0xac(r29)
	cmpwi    r0, 3
	beq      lbl_8032134C
	bge      lbl_80321320
	cmpwi    r0, 0
	beq      lbl_8032132C
	b        lbl_8032138C

lbl_80321320:
	cmpwi    r0, 5
	bge      lbl_8032138C
	b        lbl_8032137C

lbl_8032132C:
	li       r0, 3
	mr       r3, r29
	stw      r0, 0xac(r29)
	li       r4, 0
	bl       takeoutPiki__Q32og9newScreen10ObjContenaFb
	lfs      f0, 0xb0(r29)
	stfs     f0, 0xb4(r29)
	b        lbl_803213A0

lbl_8032134C:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0xb4(r29)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051DC8C@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0xb4(r29)
	lfs      f1, 0xb4(r29)
	fcmpo    cr0, f1, f0
	bge      lbl_803213A0
	li       r0, 4
	stw      r0, 0xac(r29)
	b        lbl_803213A0

lbl_8032137C:
	mr       r3, r29
	li       r4, 1
	bl       takeoutPiki__Q32og9newScreen10ObjContenaFb
	b        lbl_803213A0

lbl_8032138C:
	li       r0, 0
	stw      r0, 0xac(r29)
	b        lbl_803213A0

lbl_80321398:
	li       r0, 0
	stw      r0, 0xac(r29)

lbl_803213A0:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
			u8 alpha = mAlphaMgr[i]->calc();
			mPaneList[i]->setAlpha(alpha);
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
		f32 cosangle    = sinf(angle) * msVal._28;
		J2DPane* pane   = mPaneArrowUp;
		pane->mOffset.x = mPaneArrowUpPos.x;
		pane->mOffset.y = -1.0f + mPaneArrowUpPos.y + cosangle;
		pane->calcMtx();

		pane            = mPaneArrowDown;
		pane->mOffset.x = mPaneArrowDownPos.x;
		pane->mOffset.y = 1.0f + mPaneArrowDownPos.y - cosangle;
		pane->calcMtx();

		u8 alpha = mAlphaArrow1->calc();
		mPaneArrowUp->setAlpha(alpha);
		alpha = mAlphaArrow2->calc();
		mPaneArrowDown->setAlpha(alpha);

		f32 scale3 = mScaleArrow1->calc();
		scale3     = msVal._34 * (scale3 - 1.0f) + 1.0f;
		f32 scale4 = mScaleArrow2->calc();
		scale4     = msVal._34 * (scale4 - 1.0f) + 1.0f;
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
			mYAnalog += input1 * -100.0f;
		}
		if (mFuriko) {
			mFuriko->setParam(msVal._14, msVal._1C, msVal._18);
		}
	}

	for (int i = 0; i < mPikiPaneNum; i++) {
		if (i + 1 > mDisp->mNewInPartyNum) {
			mPikiPaneList[i]->hide();
		} else {
			mPikiPaneList[i]->show();
		}
	}
	mDoDraw = true;
	mContena->setXY(mMenuMoveAngle, mYAnalog);
	mScreenCupsule->calcMtx();

	mTimer += sys->mDeltaTime;
	f32 time = mTimer;
	if (mTimer > TAU) {
		time = 0.0f;
	}
	mPaneSpot->setOffset(msVal._00 * 2.0f * JMath::sincosTable_.mTable[(int)(time *= 325.9493f) & 0x7ffU].first, mSpotX + msVal._04,
	                     msVal._00 * JMath::sincosTable_.mTable[(int)(time *= 325.9493f) & 0x7ffU].first, mSpotY);

	mPaneSpot->setAlpha(mScreenAngle * 255.0f * msVal._10);
	mPaneSpot->updateScale(msVal._0C * ((1.0f - mScreenAngle) * 2.0f + 1.0f) * mSpotScale);
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
	f32 calc       = og::Screen::calcSmooth0to1(mFadeLevel, msVal._20);
	mMenuMoveAngle = (1.0f - calc) * 800.0f;

	if (mFadeLevel >= msVal._20)
		check = true;
	return check;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       commonUpdate__Q32og9newScreen10ObjContenaFv
	lwz      r4, sys@sda21(r13)
	lis      r3, msVal__Q32og9newScreen10ObjContena@ha
	lfs      f1, 0x110(r29)
	addi     r31, r3, msVal__Q32og9newScreen10ObjContena@l
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x110(r29)
	lfs      f1, 0x110(r29)
	lfs      f0, 0x20(r31)
	fdivs    f0, f1, f0
	stfs     f0, 0xa8(r29)
	lfs      f1, 0x110(r29)
	lfs      f2, 0x20(r31)
	bl       calcSmooth0to1__Q22og6ScreenFff
	lfs      f2, lbl_8051DC94@sda21(r2)
	lfs      f0, lbl_8051DC88@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0xf0(r29)
	lfs      f1, 0x110(r29)
	lfs      f0, 0x20(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80321C5C
	li       r30, 1

lbl_80321C5C:
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80321C7C
 * @note Size: 0x1DC
 */
bool ObjContena::doUpdateFadeout()
{
	bool check = false;
	commonUpdate();
	mFadeLevel += sys->mDeltaTime;
	mScreenAngle   = 1.0f - mFadeLevel / msVal._20;
	f32 calc       = og::Screen::calcSmooth0to1(mFadeLevel, msVal._20);
	mMenuMoveAngle = -800.0f * calc;
	if (mFadeLevel >= msVal._20) {
		check                               = true;
		::Screen::SceneBase* scene          = getOwner();
		og::Screen::DispMemberContena* disp = mDisp;
		disp->mState                        = mDispState2;
		if (disp->mState == 3 && disp->mExitSoundType) {
			if (disp->mOnyonID == 4 || disp->mOnyonID == 3) {
				::Screen::SetSceneArg arg(SCENE_UFO_MENU, getDispMember());
				if (scene->setScene(arg) && !scene->startScene(nullptr)) {
					JUT_PANICLINE(944, "‚¾‚ß‚Å‚·\n");
				}
			}
			return;
		}
		JUT_ASSERTLINE(953, scene->setBackupScene(), "START ERR! (BackupScene)");
		JUT_ASSERTLINE(958, scene->startScene(nullptr), "setBackupScene ERR!");
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
