#include "og/newScreen/Vs.h"
#include "og/newScreen/Challenge.h"
#include "efx2d/Arg.h"
#include "efx2d/T2DSprayset.h"
#include "efx2d/T2DSensor.h"
#include "og/Sound.h"
#include "System.h"
#include "trig.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80325A40
 * @note Size: 0x15C
 */
ObjVs::ObjVs(char const* name)
{
	mFadeLevel = 0.0f;
	mScale     = 0.0f;
	mName      = name;
	mDisp      = nullptr;
	mBloGroup  = nullptr;

	for (int i = 0; i < 4; i++) {
		mPane_bedama1P[i]    = nullptr;
		mPane_nodama1P[i]    = nullptr;
		mPane_bedama2P[i]    = nullptr;
		mPane_nodama2P[i]    = nullptr;
		mScaleMgrP1_1[i]     = nullptr;
		mScaleMgrP2_1[i]     = nullptr;
		mScaleMgrP1_2[i]     = nullptr;
		mScaleMgrP2_2[i]     = nullptr;
		mBedamaGotFlagsP1[i] = false;
		mBedamaGotFlagsP2[i] = false;
	}

	mFinishTimer      = 4.016667f;
	mDoneState        = 0;
	mHasAllBedamaP1   = false;
	mHasAllBedamaP2   = false;
	mFirstBedamaGetP1 = false;
	mFirstBedamaGetP2 = false;
	mBedamaGetTimer   = 0.05f;
	mScreenIcons      = nullptr;
	mSetBedamaFlag    = true;
	mPaneObake1P      = nullptr;
	mPaneObake2P      = nullptr;
	mAlphaObakeP1     = 0.0f;
	mAlphaObakeP2     = 0.0f;
	mObakeEnabledP1   = false;
	mObakeEnabledP2   = false;
	mObakeMovePos     = 0.0f;
	mPlayWinSound     = false;
}

/**
 * @note Address: 0x80325B9C
 * @note Size: 0xAC
 */
ObjVs::~ObjVs()
{
}

/**
 * @note Address: 0x80325C48
 * @note Size: 0x800
 */
void ObjVs::doCreate(JKRArchive* arc)
{
	/* NON-MATCHING */
	// some regswaps
	mScreenP1 = new ScreenSet;
	mScreenP2 = new ScreenSet;

	og::Screen::DispMemberVs* disp = static_cast<og::Screen::DispMemberVs*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_VS)) {
		mDisp = disp;
	} else {
		if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
			mDisp = new og::Screen::DispMemberVs;
		} else {
			JUT_PANICLINE(246, "ERR! in ObjVs Create失敗！\n");
		}
	}

	mBloGroup = new og::Screen::BloGroup(2);
	mBloGroup->addBlo("challenge_1P.blo", mScreenP1->mScreen, 0x1040000, arc);
	mBloGroup->addBlo("challenge_2P.blo", mScreenP2->mScreen, 0x1040000, arc);
	mScreenP1->init(&mDisp->mOlimarData, arc, &mDisp->mRedPikminCount);
	mScreenP2->init(&mDisp->mLouieData, arc, &mDisp->mBluePikminCount);

	P2DScreen::Mgr_tuning* bdamaScreen = new P2DScreen::Mgr_tuning;
	bdamaScreen->set("b_dama.blo", 0x1040000, arc);

	P2DScreen::Mgr_tuning* scrn1 = mScreenP1->mScreen;
	P2DScreen::Mgr_tuning* scrn2 = mScreenP2->mScreen;

	J2DPictureEx* paneBdamaR = static_cast<J2DPictureEx*>(bdamaScreen->search('Pb_red'));
	J2DPictureEx* paneBdamaY = static_cast<J2DPictureEx*>(bdamaScreen->search('Pb_yello'));
	J2DPictureEx* paneBdamaB = static_cast<J2DPictureEx*>(bdamaScreen->search('Pb_blue'));
	J2DPictureEx* panePcup   = static_cast<J2DPictureEx*>(bdamaScreen->search('Pcup'));

	J2DPane* root = scrn1->search('ROOT');
	int xoffs     = 0;
	for (int i = 0; i < 4; i++) {
		mPane_bedama1P[i]
		    = og::Screen::CopyPictureToPane(paneBdamaY, root, msVal.mMarbleBaseXOffs + xoffs, msVal.mMarbleP1YOffs, 'bd1P_000' + i);
		mPane_nodama1P[i]
		    = og::Screen::CopyPictureToPane(panePcup, root, msVal.mMarbleBaseXOffs + xoffs, msVal.mMarbleP1YOffs, 'nd1P_000' + i);
		mPane_windama1P[i]
		    = og::Screen::CopyPictureToPane(paneBdamaB, root, msVal.mMarbleBaseXOffs + xoffs, msVal.mMarbleP1YOffs, 'wd1P_000' + i);
		mScaleMgrP1_1[i] = new og::Screen::ScaleMgr;
		mScaleMgrP1_2[i] = new og::Screen::ScaleMgr;
		mPane_windama1P[i]->hide();
		xoffs += 40;
	}

	J2DPane* root2 = scrn2->search('ROOT');
	xoffs          = 0;
	for (int i = 0; i < 4; i++) {
		mPane_bedama2P[i]
		    = og::Screen::CopyPictureToPane(paneBdamaY, root2, msVal.mMarbleBaseXOffs + xoffs, msVal.mMarbleP2YOffs, 'bd2P_000' + i);
		mPane_nodama2P[i]
		    = og::Screen::CopyPictureToPane(panePcup, root2, msVal.mMarbleBaseXOffs + xoffs, msVal.mMarbleP2YOffs, 'nd2P_000' + i);
		mPane_windama2P[i]
		    = og::Screen::CopyPictureToPane(paneBdamaR, root2, msVal.mMarbleBaseXOffs + xoffs, msVal.mMarbleP2YOffs, 'wd2P_000' + i);
		mScaleMgrP2_1[i] = new og::Screen::ScaleMgr;
		mScaleMgrP2_2[i] = new og::Screen::ScaleMgr;
		mPane_windama2P[i]->hide();
		xoffs += 40;
	}

	mScreenIcons = new P2DScreen::Mgr_tuning;
	mScreenIcons->set("obake_icon.blo", 0x1040000, arc);

	J2DPictureEx* paneObake = static_cast<J2DPictureEx*>(mScreenIcons->search('obake'));
	mPaneObake1P            = og::Screen::CopyPictureToPane(paneObake, root, msVal.mRouletteXOffs, msVal.mRouletteP1YOffs, 'obake1P');
	mPaneObake2P            = og::Screen::CopyPictureToPane(paneObake, root2, msVal.mRouletteXOffs, msVal.mRouletteP2YOffs, 'obake2P');
	mPaneObake1P->setAlpha(mAlphaObakeP1 * 255.0f);
	mPaneObake2P->setAlpha(mAlphaObakeP2 * 255.0f);
	setOnOffBdama(false);
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
bool ObjVs::isCompBdama(int i)
{
	bool complete = false;
	if (i == 3) {
		complete   = true;
		mDoneState = 1;
	}
	return complete;
}

/**
 * @note Address: N/A
 * @note Size: 0x138
 */
bool ObjVs::startGetBdama(J2DPane* pane)
{
	if (mDoneState != 1) {
		ogSound->setBdamaGet();
		Vector2f pos;
		og::Screen::calcGlbCenter(pane, &pos);

		JUtility::TColor colorA(0xe7, 0xe7, 87, 255);
		JUtility::TColor colorB(0xcf, 0xcf, 0, 255);
		efx2d::ArgScaleColorColor arg(pos, 1.0f, colorA, colorB);
		efx2d::T2DSprayset_forVS efx;
		efx.create(&arg);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
void ObjVs::startBdamaComp(J2DPane* pane)
{
	Vector2f pos;
	og::Screen::calcGlbCenter(pane, &pos);

	efx2d::ArgScale arg(pos, 0.6f);
	efx2d::T2DSensorGet_forVS efx;
	efx.create(&arg);
}

/**
 * @note Address: N/A
 * @note Size: 0x124
 */
void ObjVs::startBdamaWinRed(J2DPane* pane)
{
	Vector2f pos;
	og::Screen::calcGlbCenter(pane, &pos);

	JUtility::TColor colorA(255, 135, 135, 255);
	JUtility::TColor colorB(255, 0, 0, 255);
	efx2d::ArgScaleColorColor arg(pos, 1.0f, colorA, colorB);
	efx2d::T2DSprayset_forVS efx;
	efx.create(&arg);
	ogSound->setBdamaGet();
	mDoneState = 1;
}

/**
 * @note Address: N/A
 * @note Size: 0x13C
 */
void ObjVs::startBdamaWinBlue(J2DPane* pane)
{
	Vector2f pos;
	og::Screen::calcGlbCenter(pane, &pos);

	JUtility::TColor colorA(87, 135, 255, 255);
	JUtility::TColor colorB(32, 32, 255, 255);
	efx2d::ArgScaleColorColor arg(pos, 1.0f, colorA, colorB);
	efx2d::T2DSprayset_forVS efx;
	efx.create(&arg);
	ogSound->setBdamaGet();
	mDoneState = 1;
}

/**
 * @note Address: 0x80326448
 * @note Size: 0xA28
 */
void ObjVs::setOnOffBdama(bool doEfx)
{
	bool p1win = false;
	bool p2win = false;

	for (int i = 0; i < 4; i++) {
		f32 scale1 = mScaleMgrP1_1[i]->calc();
		f32 scale2 = mScaleMgrP2_1[i]->calc();
		f32 scale3 = mScaleMgrP1_2[i]->calc();
		f32 scale4 = mScaleMgrP2_2[i]->calc();

		mPane_windama1P[i]->updateScale(scale3);
		mPane_windama2P[i]->updateScale(scale4);

		if (mDisp->mFlags[0] && mDisp->mMarbleCountP1 == i && mBedamaGetTimer > 0.0f) {
			mBedamaGetTimer -= sys->mDeltaTime;
			if (mBedamaGetTimer <= 0.0f) {
				mPane_windama1P[i]->show();
				if (!mFirstBedamaGetP1) {
					mFirstBedamaGetP1 = true;
					if (doEfx) {
						startBdamaWinBlue(mPane_windama1P[i]);
						mScaleMgrP1_2[i]->up();
						p1win = true;
					}
				}
			}
		}

		if (mDisp->mFlags[1] && mDisp->mMarbleCountP2 == i && mBedamaGetTimer > 0.0f) {
			mBedamaGetTimer -= sys->mDeltaTime;
			if (mBedamaGetTimer <= 0.0f) {
				mPane_windama2P[i]->show();
				if (!mFirstBedamaGetP2) {
					mFirstBedamaGetP2 = true;
					if (doEfx) {
						startBdamaWinRed(mPane_windama2P[i]);
						mScaleMgrP2_2[i]->up();
						p2win = true;
					}
				}
			}
		}

		if (!mFirstBedamaGetP1 && !mFirstBedamaGetP2) {
			if (mDisp->mMarbleCountP1 > i) {
				mPane_nodama1P[i]->hide();
				mPane_bedama1P[i]->show();
				mPane_bedama1P[i]->updateScale(scale1);
				if (!mBedamaGotFlagsP1[i]) {
					mHasAllBedamaP1 = isCompBdama(i);
					if (doEfx) {
						startGetBdama(mPane_bedama1P[i]);
						mScaleMgrP1_1[i]->up();
					}
				}
				mBedamaGotFlagsP1[i] = true;
			} else {
				mPane_bedama1P[i]->hide();
				mPane_nodama1P[i]->show();
				mPane_nodama1P[i]->updateScale(scale1);
				mBedamaGotFlagsP1[i] = false;
			}

			if (mDisp->mMarbleCountP2 > i) {
				mPane_nodama2P[i]->hide();
				mPane_bedama2P[i]->show();
				mPane_bedama2P[i]->updateScale(scale2);
				if (!mBedamaGotFlagsP2[i]) {
					mHasAllBedamaP2 = isCompBdama(i);

					if (doEfx) {
						startGetBdama(mPane_bedama2P[i]);
						mScaleMgrP2_1[i]->up();
					}
				}
				mBedamaGotFlagsP2[i] = true;
			} else {
				mPane_bedama2P[i]->hide();
				mPane_nodama2P[i]->show();
				mPane_nodama2P[i]->updateScale(scale2);
				mBedamaGotFlagsP2[i] = false;
			}
		}
	}

	if (mHasAllBedamaP1 && mBedamaGetTimer > 0.0f) {
		mBedamaGetTimer -= sys->mDeltaTime;
		if (mBedamaGetTimer <= 0.0f && doEfx) {
			ogSound->setBdamaGet();
			f32 scale = 0.6f;
			for (int i = 0; i < 4; i++) {
				mScaleMgrP1_1[i]->up();
				startBdamaComp(mPane_bedama1P[i]);
				p1win = true;
			}
		}
	}

	if (mHasAllBedamaP2 && mBedamaGetTimer > 0.0f) {
		mBedamaGetTimer -= sys->mDeltaTime;
		if (mBedamaGetTimer <= 0.0f && doEfx) {
			ogSound->setBdamaGet();
			for (int i = 0; i < 4; i++) {
				mScaleMgrP2_1[i]->up();
				startBdamaComp(mPane_bedama2P[i]);
				p2win = true;
			}
		}
	}

	if (!mPlayWinSound) {
		if (p1win && p2win) {
			ogSound->setVsDraw();
			mPlayWinSound = true;
		} else if (p1win) {
			ogSound->setVsWin1P();
			mPlayWinSound = true;
		} else if (p2win) {
			ogSound->setVsWin2P();
			mPlayWinSound = true;
		}
	}
}

/**
 * @note Address: 0x80326E70
 * @note Size: 0x2B8
 */
void ObjVs::ScreenSet::init(og::Screen::DataNavi* data, JKRArchive* arc, u32* pikis)
{
	og::Screen::CallBack_CatchPiki* cpiki = new og::Screen::CallBack_CatchPiki;
	cpiki->init(mScreen, 'piki', &data->mNextThrowPiki, arc);
	mScreen->addCallBack('piki', cpiki);

	og::Screen::setCallBack_CounterRV(mScreen, 'c_mr', 'c_ml', 'c_ml', &data->mFollowPikis, 3, 2, 1, arc);

	og::Screen::CallBack_CounterRV* counter = og::Screen::setCallBack_CounterRV(mScreen, 'c_lr', 'c_ll', 'c_ll', pikis, 3, 2, 1, arc);
	counter->mScaleUpSoundID                = PSSE_SY_PIKI_INCREMENT;
	counter->mScaleDownSoundID              = PSSE_SY_PIKI_DECREMENT;

	counter = og::Screen::setCallBack_CounterRV(mScreen, 'dr_r', 'dr_l', 'dr_l', &data->mDope1Count, 3, 2, 1, arc);
	counter->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown1);
	mScreen->search('dr_c')->hide();

	counter = og::Screen::setCallBack_CounterRV(mScreen, 'dy_r', 'dy_l', 'dy_l', &data->mDope0Count, 3, 2, 1, arc);
	counter->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown1);
	mScreen->search('dy_c')->hide();

	mPaneToyo01 = og::Screen::TagSearch(mScreen, 'toyo_01');
	mPaneToyo00 = og::Screen::TagSearch(mScreen, 'toyo_00');
	mDoping->init(mPaneToyo01, mPaneToyo00, mScaleMgr1, mScaleMgr2);
	mLifeGauge->init(mScreen, data, og::Screen::CallBack_LifeGauge::LIFEGAUGE_OLIMAR);
	mScreen->addCallBack('back', mLifeGauge);
	mLifeGauge->setOffset(msVal.mLifeGaugeXOffs, msVal.mLifeGaugeYOffs);
	og::Screen::setCallBack_DrawAfter(mScreen, 'mete');
}

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
void ObjVs::ScreenSet::update(og::Screen::DataNavi& data)
{
	f32 scale1 = mScaleMgr1->calc();
	f32 scale2 = mScaleMgr2->calc();
	if (mPaneToyo01)
		mPaneToyo01->updateScale(scale1);
	if (mPaneToyo00)
		mPaneToyo00->updateScale(scale2);

	og::Screen::DopingCheck* dope = mDoping;
	dope->mNaviLifeRatio          = data.mNaviLifeRatio;
	dope->mFollowPiki             = data.mFollowPikis;
	dope->mNextThrowPiki          = data.mNextThrowPiki;
	dope->mSpicySprayCount        = data.mDope1Count;
	dope->mBitterSprayCount       = data.mDope0Count;
	dope->mActiveNaviID           = data.mActiveNaviID;
	dope->update();
}

/**
 * @note Address: 0x80327128
 * @note Size: 0x56C
 */
void ObjVs::checkObake()
{
	/* NON-MATCHING */
	if (mObakeEnabledP1) {
		mAlphaObakeP1 += sys->mDeltaTime;
		if (mAlphaObakeP1 > 1.0f)
			mAlphaObakeP1 = 1.0f;

		if (mDisp->mGhostIconTimerP1 <= 0.0f) {
			mObakeEnabledP1 = false;
		}
	} else {
		mAlphaObakeP1 -= sys->mDeltaTime;
		if (mAlphaObakeP1 < 0.0f)
			mAlphaObakeP1 = 0.0f;

		if (mDisp->mFlags[2]) {
			mObakeEnabledP1 = true;
		}
	}

	if (mObakeEnabledP2) {
		mAlphaObakeP2 += sys->mDeltaTime;
		if (mAlphaObakeP2 > 1.0f)
			mAlphaObakeP2 = 1.0f;

		if (mDisp->mGhostIconTimerP2 <= 0.0f) {
			mObakeEnabledP2 = false;
		}
	} else {
		mAlphaObakeP2 -= sys->mDeltaTime;
		if (mAlphaObakeP2 < 0.0f)
			mAlphaObakeP2 = 0.0f;

		if (mDisp->mFlags[3]) {
			mObakeEnabledP2 = true;
		}
	}

	f32 angle1 = 1.0f;
	f32 angle2 = 1.0f;
	f32 mod1   = 1.0f;
	f32 mod2   = 1.0f;
	f32 calc   = (sinf(mObakeMovePos * 2.0f) + 1.0f) / 2;

	if (mObakeEnabledP1) {
		f32 temp = mDisp->mGhostIconTimerP1;
		if (temp <= 10.0f) {
			angle1 = temp / 10.0f;
			mod1   = calc * 0.6f + 0.4f;
		}
	} else {
		angle1 = 0.0f;
	}

	if (mObakeEnabledP2) {
		f32 temp = mDisp->mGhostIconTimerP2;
		if (temp <= 10.0f) {
			angle2 = temp / 10.0f;
			mod2   = calc * 0.6f + 0.4f;
		}
	} else {
		angle2 = 0.0f;
	}

	mPaneObake1P->setAlpha(mAlphaObakeP1 * 255.0f * mod1);
	mPaneObake2P->setAlpha(mAlphaObakeP2 * 255.0f * mod2);

	mObakeMovePos += sys->mDeltaTime * TAU;
	if (mObakeMovePos > TAU) {
		mObakeMovePos -= TAU;
	}

	f32 timeAngle    = angle1 * (sinf(mObakeMovePos) * 20.0f);
	f32 timeAngleInv = angle2 * (sinf(mObakeMovePos) * 20.0f);
	mPaneObake1P->rotate(timeAngle);
	mPaneObake2P->rotate(timeAngleInv);

	f32 cos = cosf(mObakeMovePos) * msVal.mRouletteXSpeed;
	f32 sin = sinf(2.0f * mObakeMovePos) * msVal.mRouletteYSpeed;

	f32 a      = sin * angle1;
	f32 b      = cos * angle1;
	f32 xOffs  = msVal.mRouletteXOffs;
	f32 yOffs1 = msVal.mRouletteP1YOffs;
	f32 yOffs2 = msVal.mRouletteP2YOffs;

	// f1-f0 regswap here
	mPaneObake1P->setOffset(xOffs + b, yOffs1 + a);

	f32 c = sin * angle2;
	f32 d = cos * angle2;

	mPaneObake2P->setOffset(xOffs + d, yOffs2 + c);

	f32 scale = msVal.mRouletteScale;
	mPaneObake1P->updateScale(scale);
	mPaneObake2P->updateScale(scale);
}

/**
 * @note Address: 0x80327694
 * @note Size: 0x2AC
 */
void ObjVs::doUpdateCommon()
{
	/* NON-MATCHING */
	// need r31 load to happen after the PI load
	f32 scale = (cosf(mScale * PI) + 1.0f) / 2;

	setOnOffBdama(mSetBedamaFlag == false);
	checkObake();

	switch (mDoneState) {
	case 0:
		break;
	case 1:
		if (mFinishTimer > 0.0f) {
			mFinishTimer -= sys->mDeltaTime;
		} else {
			mDoneState = 2;
		}
		break;
	}
	mDisp->mDoneState = mDoneState;
	mScreenP1->update(mDisp->mOlimarData);
	mScreenP2->update(mDisp->mLouieData);

	mScreenP1->mScreen->setXY(0.0f, scale * -300.0f);
	mScreenP2->mScreen->setXY(0.0f, scale * 300.0f);
	mBloGroup->update();
}

/**
 * @note Address: 0x80327940
 * @note Size: 0x44
 */
bool ObjVs::doUpdate()
{
	doUpdateCommon();
	if (mSetBedamaFlag) {
		mSetBedamaFlag = false;
	}
	return false;
}

/**
 * @note Address: 0x80327984
 * @note Size: 0x130
 */
void ObjVs::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	graf->setPort();

	JUtility::TColor color1 = ObjChallenge2P::msVal.mDividerBarColor;
	int test                = (f32)color1.a * mScale;
	color1.a                = test;
	graf->setColor(color1);

	f32 baseY = (f32)ObjChallenge2P::msVal.mDividerBarYPos;
	JGeometry::TBox2f box(0.0f, baseY, 640.0f, baseY + (f32)ObjChallenge2P::msVal.mDividerBarHeight);

	graf->fillBox(box);

	mBloGroup->draw(graf);
}

/**
 * @note Address: 0x80327AB4
 * @note Size: 0x14
 */
bool ObjVs::doStart(::Screen::StartSceneArg const*)
{
	mFadeLevel = 0.0f;
	mScale     = 0.0f;
	return true;
}

/**
 * @note Address: 0x80327AC8
 * @note Size: 0x10
 */
bool ObjVs::doEnd(::Screen::EndSceneArg const*)
{
	mFadeLevel = 0.0f;
	return true;
}

/**
 * @note Address: 0x80327AD8
 * @note Size: 0x4
 */
void ObjVs::doUpdateFadeinFinish()
{
}

/**
 * @note Address: 0x80327ADC
 * @note Size: 0xC
 */
void ObjVs::doUpdateFinish()
{
	mFadeLevel = 0.0f;
}

/**
 * @note Address: 0x80327AE8
 * @note Size: 0x4
 */
void ObjVs::doUpdateFadeoutFinish()
{
}

/**
 * @note Address: 0x80327AEC
 * @note Size: 0x74
 */
bool ObjVs::doUpdateFadein()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;

	if (mFadeLevel > msVal.mFadeInRate) {
		mFadeLevel = msVal.mFadeInRate;
		check      = true;
	}
	mScale = mFadeLevel / msVal.mFadeInRate;
	doUpdateCommon();
	return check;
}

/**
 * @note Address: 0x80327B60
 * @note Size: 0x7C
 */
bool ObjVs::doUpdateFadeout()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > msVal.mFadeOutRate) {
		mFadeLevel = msVal.mFadeOutRate;
		check      = true;
	}
	mScale = 1.0f - mFadeLevel / msVal.mFadeOutRate;
	doUpdateCommon();
	return check;
}

ObjVs::StaticValues ObjVs::msVal;

} // namespace newScreen
} // namespace og
