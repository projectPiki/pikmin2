#include "kh/khFinalResult.h"
#include "Controller.h"
#include "PSSystem/PSSystemIF.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "Game/gamePlayData.h"
#include "og/newScreen/ogUtil.h"
#include "LoadResource.h"
#include "JSystem/J2D/J2DAnmLoader.h"
#include "Dolphin/rand.h"
#include "Screen/Game2DMgr.h"
#include "trig.h"

static void _Print(char* format, ...)
{
	OSReport(format, __FILE__);
}

namespace kh {
namespace Screen {

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
OneResultData::OneResultData(int score1, int score5, int score2, int score3, int score4, const char* bloName, JKRArchive* arc)
    : mScore5(score5)
    , mDoDraw(false)
{
	mScore[0] = score1;
	mScore[1] = score2;
	mScore[2] = score3;
	mScore[3] = score4;
	mScreen   = new P2DScreen::Mgr;
	mScreen->set(bloName, 0x1040000, arc);
	mScreen->setBasePosition(J2DPOS_Center);
}

/**
 * @note Address: N/A
 * @note Size: 0x2D8
 */
TotalResultData::TotalResultData(const int* p1, const int* p2, Game::Highscore** scores)
{
	JKRArchive* arc = nullptr;
	char* bloNames[GAME_HIGHSCORE_COUNT]
	    = { "result_final_image00.blo", "result_final_image01.blo", "result_final_image02.blo", "result_final_image03.blo",
	        "result_final_image04.blo", "result_final_image05.blo", "result_final_image06.blo", "result_final_image07.blo",
	        "result_final_image08.blo", "result_final_image09.blo", "result_final_image10.blo", "result_final_image11.blo",
	        "result_final_image12.blo", "result_final_image13.blo", "result_final_image14.blo", "result_final_image15.blo" };

	int scoreIDs[GAME_HIGHSCORE_COUNT] = { 0, 8, 1, 2, 3, 4, 5, 6, 7, 14, 10, 11, 9, 13, 12, 15 };

	LoadResource::Arg arg("/new_screen/cmn/result_final_image.szs");
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);

	if (node) {
		arc = node->mArchive;
	} else {
		JUT_PANICLINE(107, "failed");
	}

	mResults = new OneResultData*[GAME_HIGHSCORE_COUNT];
	for (int i = 0; i < GAME_HIGHSCORE_COUNT; i++) {
		mResults[i] = new OneResultData(p1[scoreIDs[i]], p2[scoreIDs[i]], scores[scoreIDs[i]]->getScore(0),
		                                scores[scoreIDs[i]]->getScore(1), scores[scoreIDs[i]]->getScore(2), bloNames[i], arc);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
void TotalResultData::init()
{
	// UNUSED/INLINED
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
void TotalResultData::draw(Graphics& gfx, u32 yPos, u32 height)
{
	for (int i = 0; i < GAME_HIGHSCORE_COUNT; i++) {
		if (mResults[i]->mDoDraw == true) {
			gfx.mOrthoGraph.setPort();
			GXSetScissor(0, yPos, sys->getRenderModeWidth(), height);
			mResults[i]->mScreen->draw(gfx, gfx.mOrthoGraph);
		}
	}
}

/**
 * @note Address: 0x8040C1E8
 * @note Size: 0x34
 */
DispFinalResult::DispFinalResult(TotalResultData* data, DispFinalResult::ResultType type, JKRHeap* heap)
{
	mTotalResultData = data;
	mResultType      = type;
	mExitStatus      = ::Screen::Game2DMgr::CHECK2D_FinalResult_MenuOpen;
	mHeap            = heap;
}

/**
 * @note Address: 0x8040C21C
 * @note Size: 0x1A0
 */
ObjFinalResult::ObjFinalResult()
{
	mScreen    = nullptr;
	mAnmTrans1 = mAnmTrans2 = mAnmTrans3 = mAnmTrans4 = mAnmTrans5 = mAnmTrans6 = nullptr;
	mAnmCol1 = mAnmCol2 = mAnmCol3 = nullptr;
	mAnmSRT                        = nullptr;
	mAnmTev                        = nullptr;
	mAnimTimers[0] = mAnimTimers[1] = mAnimTimers[2] = mAnimTimers[3] = mAnimTimers[4] = mAnimTimers[5] = mAnimTimers[6] = mAnimTimers[7]
	    = 0.0f;
	mStickAnimMgr    = nullptr;
	mFadePaneAButton = nullptr;
	mFadePaneYameL   = nullptr;
	mFadePaneYameU   = nullptr;
	mFadePane3DStick = nullptr;

	for (int i = 0; i < 4; i++) {
		mCounterScore2[i]     = nullptr;
		mCounterScore1[i]     = nullptr;
		mCounters2[i]         = nullptr;
		mCounters1[i]         = nullptr;
		mCounterDataScore2[i] = 0;
		mCounterDataScore1[i] = 0;
		mCounterData2[i]      = 0;
		mCounterData1[i]      = 0;
	}

	mTimer = 0.0f;
	mColor.set(0, 0, 0, 0);
	mScrollYPos         = 0.0f;
	mScrollMove         = 0.0f;
	mCurrentPage        = 1;
	mScrollTargetPos    = msVal._04;
	mScrollMoveProgress = 0;
	mAutoScrollDelay    = msVal.mAutoScrollInterval;
	mState              = StatusForceScroll;
	mRandAnimCounter2   = -1;
	mRandAnimCounter1   = -1;

	mFlags = 0;
	// this is a bit hacky but also necessary for scheduling :(
	mFlags     = (u64)mFlags | FinalResult_NeedScrollSe;
	mFadeAlpha = 0;
}

/**
 * @note Address: 0x8040C3BC
 * @note Size: 0xB8C
 */
void ObjFinalResult::doCreate(JKRArchive* arc)
{
	JUT_ASSERTLINE(214, getDispMember()->isID(OWNER_KH, MEMBER_FINAL_RESULT), "disp member err");
	DispFinalResult* disp = static_cast<DispFinalResult*>(getDispMember());

	mScreen = new P2DScreen::Mgr_tuning;
	mScreen->set("result_final.blo", 0x1040000, arc);

	void* file = JKRFileLoader::getGlbResource("result_final.bck", arc);
	mAnmTrans1 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	mAnmTrans2 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	mAnmTrans3 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	mAnmTrans4 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	mAnmTrans5 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	mAnmTrans6 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));

	file     = JKRFileLoader::getGlbResource("result_final.bpk", arc);
	mAnmCol1 = J2DAnmLoaderDataBase::load(file);
	mAnmCol2 = J2DAnmLoaderDataBase::load(file);
	mAnmCol3 = J2DAnmLoaderDataBase::load(file);

	file    = JKRFileLoader::getGlbResource("result_final.btk", arc);
	mAnmSRT = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(file));

	file    = JKRFileLoader::getGlbResource("result_final.brk", arc);
	mAnmTev = static_cast<J2DAnmTevRegKey*>(J2DAnmLoaderDataBase::load(file));

	mAnmCol1->searchUpdateMaterialID(mScreen);
	mAnmCol2->searchUpdateMaterialID(mScreen);
	mAnmCol3->searchUpdateMaterialID(mScreen);

	J2DPane* pane1 = mScreen->search('Nstar');
	J2DPane* pane2 = mScreen->search('Nabtn');
	pane1->setAnimation(mAnmTrans1);
	mScreen->search('Ntitle')->setAnimation(mAnmTrans2);
	mScreen->search('Nmain')->setAnimation(mAnmTrans3);
	mScreen->search('NICON')->setAnimation(mAnmTrans4);
	mScreen->search('Nmeter')->setAnimation(mAnmTrans5);
	pane2->setAnimation(mAnmTrans6);

	setMatAnm(mScreen->search('Nstar'), mAnmCol1);
	setMatAnm(mScreen->search('Nselect'), mAnmCol2);
	setMatAnm(pane2, mAnmCol3);

	mScreen->setAnimation(mAnmSRT);
	mScreen->setAnimation(mAnmTev);
	setInfAlpha(mScreen->search('NICON'));

	for (int i = 0; i <= 7; i++) {
		mScreen->search(getSerialTagName('Nsel00', i))->setAlpha(msVal.mSelectionAlpha);
		mScreen->search(getSerialTagName('Nicon00', i))->setAlpha(msVal.mSelectionAlpha);
	}
	JKRHeap* oldHeap = JKRGetCurrentHeap();
	if (disp->mHeap) {
		disp->mHeap->becomeCurrentHeap();
	}
	og::Screen::setCallBackMessage(mScreen);

	og::Screen::CallBack_Picture* stick = og::Screen::setCallBack_3DStick(arc, mScreen, 'ota3dl');
	mStickAnimMgr                       = new og::Screen::StickAnimMgr(stick);
	mStickAnimMgr->stickUpDown();

	mFadePaneYameU = khUtilFadePane::create(mScreen, 'Nyame_u', 16);
	mFadePaneYameU->fadeout();
	mFadePaneYameL = khUtilFadePane::create(mScreen, 'Nyame_l', 16);
	mFadePaneYameL->fadeout();
	mFadePane3DStick = khUtilFadePane::create(mScreen, 'ota3dl', 16);
	mFadePane3DStick->add(mScreen->search('N_3d'));
	mFadePane3DStick->fadeout();
	mFadePaneAButton = khUtilFadePane::create(mScreen, 'Nabtn', 16);
	mFadePaneAButton->fadeout();

	u64 tags1[8] = { 'Ptokyop1', 'P1st0_1', 'P2nd0_1', 'P3rd0_1', 'Ptomadp1', 'P1st1_1', 'P2nd1_1', 'P3rd1_1' };
	u64 tags3[4] = { 'Ptomad11', 'P1stt3', 'P2ndt3', 'P3rdt3' };
	u64 tags4[4] = { 'Ptomadp9', 'P1stt1', 'P2ndt1', 'P3rdt1' };

	for (int i = 0; i < 4; i++) {
		mCounters1[i] = og::Screen::setCallBack_CounterRV(mScreen, tags1[i], &mCounterData1[i], 9, false, false, arc);
		mCounters2[i] = og::Screen::setCallBack_CounterRV(mScreen, tags1[i + 4], &mCounterData2[i], 9, false, false, arc);
	}
	mCounterScore1[0] = og::Screen::setCallBack_CounterRV(mScreen, 'Pkon3', 'Pkon4', 'Pkon4', &mCounterDataScore1[0], 3, 2, false, arc);
	mCounterScore1[1] = og::Screen::setCallBack_CounterRV(mScreen, 'P1stt3', 'P1stt4', 'P1stt4', &mCounterDataScore1[1], 3, 2, false, arc);
	mCounterScore1[2] = og::Screen::setCallBack_CounterRV(mScreen, 'P2ndt3', 'P2ndt4', 'P2ndt4', &mCounterDataScore1[2], 3, 2, false, arc);
	mCounterScore1[3] = og::Screen::setCallBack_CounterRV(mScreen, 'P3rdt3', 'P3rdt4', 'P3rdt4', &mCounterDataScore1[3], 3, 2, false, arc);
	mCounterScore2[0] = og::Screen::setCallBack_CounterRV(mScreen, 'Pkon1', 'Pkon2', 'Pkon2', &mCounterDataScore2[0], 2, 2, false, arc);
	mCounterScore2[1] = og::Screen::setCallBack_CounterRV(mScreen, 'P1stt1', 'P1stt2', 'P1stt2', &mCounterDataScore2[1], 2, 2, false, arc);
	mCounterScore2[2] = og::Screen::setCallBack_CounterRV(mScreen, 'P2ndt1', 'P2ndt2', 'P2ndt2', &mCounterDataScore2[2], 2, 2, false, arc);
	mCounterScore2[3] = og::Screen::setCallBack_CounterRV(mScreen, 'P3rdt1', 'P3rdt2', 'P3rdt2', &mCounterDataScore2[3], 2, 2, false, arc);

	mCounterScore2[0]->setZeroAlpha(255);
	mCounterScore2[1]->setZeroAlpha(255);
	mCounterScore2[2]->setZeroAlpha(255);
	mCounterScore2[3]->setZeroAlpha(255);

	// set time scores (15) specially since theres an extra counter
	OneResultData* time = disp->mTotalResultData->mResults[15];
	for (int i = 0; i < 4; i++) {
		if (time->mScore[i] < 0) {
			mCounterDataScore1[i] = 0;
			mCounterDataScore2[i] = 0;
			mCounterScore1[i]->setBlind(true);
			mCounterScore2[i]->setBlind(true);
		} else {
			mCounterDataScore1[i] = time->mScore[i] / 60;
			mCounterDataScore2[i] = time->mScore[i] % 60;
		}
	}

	mSaveMgr = ebi::Save::TMgr::createInstance();
	mSaveMgr->doLoadMenuResource();
	mSaveMgr->setControllers(getGamePad());
	mSaveMgr->mSaveType = 1;

	f32 y1 = mScreen->search('Nsetp0')->getBounds()->i.y;
	f32 y2 = mScreen->search('Nsetp1')->getBounds()->i.y;

	mScrollMove = (y2 - y1) * 2.0f;

	mScreen->search('Ppict0')->hide();
	mScreen->search('Ppict1')->hide();
	mScreen->search('Nsetp_c')->show();
	mScreen->search('Nsetp_d')->hide();

	if (disp->mResultType == DispFinalResult::PostDebt) {
		mScreen->search('Ntitl_fi')->show();
		mScreen->search('Ntitl_co')->hide();
	} else {
		mScreen->search('Ntitl_fi')->hide();
		mScreen->search('Ntitl_co')->show();
	}

	if (disp->mHeap) {
		oldHeap->becomeCurrentHeap();
	}
	Game::playData->mMailSaveData.set_history(-2);
}

/**
 * @note Address: 0x8040CF48
 * @note Size: 0x1BC
 */
bool ObjFinalResult::doUpdate()
{
	updateCommon();
	if (mFlags & FinalResult_SaveOpen) {
		if (mFadeAlpha < msVal.mSaveOpenGoalAlpha) {
			mFadeAlpha += msVal.mSaveOpenAlphaRate;
		}
		mSaveMgr->update();
		if (mSaveMgr->isFinish()) {
			switch (mSaveMgr->mEndState) {
			case ebi::Save::TMgr::End_SaveDone:
			case ebi::Save::TMgr::End_SelectNoSave:
				JUT_ASSERTLINE(382, getDispMember()->isID(OWNER_KH, MEMBER_FINAL_RESULT), "disp member err");
				DispFinalResult* disp = static_cast<DispFinalResult*>(getDispMember());
				disp->mExitStatus     = ::Screen::Game2DMgr::CHECK2D_FinalResult_Finished;
				break;
			case ebi::Save::TMgr::End_Cancel:
				mFlags &= ~FinalResult_SaveOpen;
				break;
			}
		}

	} else {
		switch (mState) {
		case StatusNormal:
			statusNormal();
			break;
		case StatusScrollUp:
			statusScrollUp();
			break;
		case StatusScrollDown:
			statusScrollDown();
			break;
		case StatusForceScroll:
			statusForceScroll();
			break;
		}
		if (mState == StatusNormal && mCurrentPage == 7) {
			Controller* pad = getGamePad();
			if (pad->getButtonDown() & Controller::PRESS_A) {
				mFlags |= FinalResult_SaveOpen;
				mSaveMgr->start();
			}
		}
		if (mFadeAlpha) {
			mFadeAlpha -= msVal.mSaveOpenAlphaRate;
		}
	}
	return false;
}

/**
 * @note Address: 0x8040D104
 * @note Size: 0x7C
 */
bool ObjFinalResult::doUpdateFadein()
{
	updateCommon();
	if (mAutoScrollDelay > 1) {
		mAutoScrollDelay--;
	}

	mFadeAlpha -= msVal.mFadeAlphaRate;
	if (mFadeAlpha < msVal.mFadeAlphaRate) {
		mFadeAlpha = 0;
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8040D180
 * @note Size: 0x6C
 */
bool ObjFinalResult::doUpdateFadeout()
{
	updateCommon();
	mFadeAlpha += msVal.mFadeAlphaRate;
	if (mFadeAlpha > (255 - msVal.mFadeAlphaRate)) {
		mFadeAlpha = 255;
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8040D1EC
 * @note Size: 0x3F0
 */
void ObjFinalResult::doDraw(Graphics& gfx)
{
	J2DPane* pane1 = mScreen->search('Npre');
	J2DPane* pane2 = mScreen->search('Naft');
	J2DPane* pane3 = mScreen->search('Nmain');
	gfx.mOrthoGraph.setPort();
	pane1->show();
	pane2->hide();
	pane3->hide();
	mScreen->draw(gfx, gfx.mOrthoGraph);
	u32 x1 = 0;
	u32 x2 = 0;
	u32 y1 = 0;
	u32 y2 = 0;
	GXGetScissor(&x1, &x2, &y1, &y2);
	pane1->hide();
	pane2->hide();
	pane3->show();

	JUT_ASSERTLINE(479, getDispMember()->isID(OWNER_KH, MEMBER_FINAL_RESULT), "disp member err");
	DispFinalResult* disp = static_cast<DispFinalResult*>(getDispMember());
	TotalResultData* data = disp->mTotalResultData;
	for (int i = 0; i < GAME_HIGHSCORE_COUNT; i++) {
		data->mResults[i]->mDoDraw = false;
	}

	if (mState == StatusNormal) {
		drawReplace(gfx, mCurrentPage);
	} else {
		f32 thing;
		int page;
		if (mState == StatusScrollUp) {
			thing = -mScrollMove;
			page  = mCurrentPage + 1;
		} else {
			thing = mScrollMove;
			page  = mCurrentPage - 1;
		}
		pane3->add(0.0f, mScrollYPos);
		drawReplace(gfx, page);
		pane3->add(0.0f, thing);
		drawReplace(gfx, mCurrentPage);
	}
	GXSetScissor(x1, x2, y1, y2);
	gfx.mOrthoGraph.setPort();
	pane1->hide();
	pane2->show();
	pane3->hide();
	mScreen->draw(gfx, gfx.mOrthoGraph);

	if (mFadeAlpha) {
		gfx.mOrthoGraph.setPort();
		gfx.mOrthoGraph.setColor(JUtility::TColor(0, 0, 0, mFadeAlpha));

		f32 zero = 0.0f;
		u32 y    = sys->getRenderModeHeight();
		u32 x    = sys->getRenderModeWidth();
		gfx.mOrthoGraph.fillBox(JGeometry::TBox2f(0.0f, 0.0f, zero + x, zero + y));
	}

	if (mFlags & FinalResult_SaveOpen) {
		gfx.mPerspGraph.setPort();
		mSaveMgr->draw();
	}
}

/**
 * @note Address: 0x8040D5DC
 * @note Size: 0x5F4
 */
void ObjFinalResult::updateCommon()
{
	JGeometry::TVec3f pos1 = mScreen->search('Nmask')->getGlbVtx(GLBVTX_BtmLeft);
	JGeometry::TVec3f pos2 = mScreen->search('Nmask')->getGlbVtx(GLBVTX_TopRight);
	mScissorYPos           = pos1.y + 0.5f;
	mScissorBoundsHeight   = pos2.y - pos1.y;

	mAnmTrans5->setFrame(mAnimTimers[2]);
	mAnimTimers[2] += 1.0f;
	if (mAnimTimers[2] >= mAnmTrans5->getFrameMax()) {
		mAnimTimers[2] = 0.0f;
	}

	mAnmTrans1->setFrame(mAnimTimers[3]);
	mAnmCol1->setFrame(mAnimTimers[3]);
	mAnimTimers[3] += 1.0f;
	if (mAnimTimers[3] >= 99.0f) {
		mAnimTimers[3] = 0.0f;
	}

	mAnmTrans4->setFrame(mAnimTimers[4]);
	mAnmCol2->setFrame(mAnimTimers[4]);
	mAnimTimers[4] += 1.0f;
	if (mAnimTimers[4] >= 59.0f) {
		mAnimTimers[4] = 0.0f;
	}

	mAnmTrans6->setFrame(mAnimTimers[5]);
	mAnmCol3->setFrame(mAnimTimers[5]);
	mAnmSRT->setFrame(mAnimTimers[6]);
	mAnmTev->setFrame(mAnimTimers[7]);
	mAnimTimers[5] += 1.0f;
	if (mAnimTimers[5] >= mAnmCol3->getFrameMax()) {
		mAnimTimers[5] = 0.0f;
	}

	mAnimTimers[6] += 1.0f;
	if (mAnimTimers[6] >= mAnmSRT->getFrameMax()) {
		mAnimTimers[6] = 0.0f;
	}

	mAnimTimers[7] += 1.0f;
	if (mAnimTimers[7] >= mAnmTev->getFrameMax()) {
		mAnimTimers[7] = 0.0f;
	}

	mAnmTrans2->setFrame(mAnimTimers[0]);

	if (mRandAnimCounter1 == 0) {
		mAnimTimers[0] += msVal.mAnimSpeed;
		if (mAnimTimers[0] >= 40.0f) {
			mAnimTimers[0]    = 0.0f;
			mRandAnimCounter1 = (f32)msVal.mRandAnimRandRange * randFloat() + (f32)msVal.mRandAnimMinInterval;
		}
	} else {
		mRandAnimCounter1--;
	}

	mAnmTrans3->setFrame(mAnimTimers[1]);

	if (mRandAnimCounter2 == 0) {
		mAnimTimers[1] += msVal.mAnimSpeed;
		if (mAnimTimers[1] >= 49.0f) {
			mAnimTimers[1]    = 0.0f;
			mRandAnimCounter2 = (f32)msVal.mRandAnimRandRange * randFloat() + (f32)msVal.mRandAnimMinInterval;
		}
	} else {
		mRandAnimCounter2--;
	}

	mScreen->animation();
	f32 time = mTimer;
	if (time < 1.0f) {
		mColor = getClr(msVal.mColors[0], msVal.mColors[1], time);
	} else if (time < 2.0f) {
		mColor = getClr(msVal.mColors[1], msVal.mColors[2], time - 1.0f);
	} else if (time < 3.0f) {
		mColor = getClr(msVal.mColors[2], msVal.mColors[1], time - 2.0f);
	} else if (time < 4.0f) {
		mColor = getClr(msVal.mColors[1], msVal.mColors[0], time - 3.0f);
	}

	mTimer += msVal.mColorChangeSpeed;
	if (mTimer >= 4.0f) {
		mTimer -= 4.0f;
	}
	mScreen->update();
}

/**
 * @note Address: 0x8040DBD0
 * @note Size: 0x3A4
 */
void ObjFinalResult::statusNormal()
{
	if (mCurrentPage == 0) {
		mFadePaneYameU->fadeout();
		mFadePaneYameL->fadein();
		mStickAnimMgr->stickDown();
		mFadePaneAButton->fadeout();
	} else if (mCurrentPage == 7) {
		mFadePaneYameU->fadein();
		mFadePaneYameL->fadeout();
		mStickAnimMgr->stickUp();
		mFadePaneAButton->fadein();
	} else {
		mFadePaneYameU->fadein();
		mFadePaneYameL->fadein();
		mStickAnimMgr->stickUpDown();
		mFadePaneAButton->fadeout();
	}
	mFadePane3DStick->fadein();
	Controller* pad = getGamePad();
	if (pad->getButton() & Controller::PRESS_UP) {
		if (mCurrentPage) {
			mCurrentPage--;
			mScreen->search(getSerialTagName('Nsel00', mCurrentPage + 1))->setAlpha(msVal.mSelectionAlpha);
			mScreen->search(getSerialTagName('Nsel00', mCurrentPage))->setAlpha(255);
			mScreen->search(getSerialTagName('Nicon00', mCurrentPage + 1))->setAlpha(msVal.mSelectionAlpha);
			mScreen->search(getSerialTagName('Nicon00', mCurrentPage))->setAlpha(255);
			mState = StatusScrollUp;
			statusScrollUp();
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
		}
	}
	pad = getGamePad();
	if (pad->getButton() & Controller::PRESS_DOWN) {
		if (mCurrentPage != 7) {
			mCurrentPage++;
			mScreen->search(getSerialTagName('Nsel00', mCurrentPage - 1))->setAlpha(msVal.mSelectionAlpha);
			mScreen->search(getSerialTagName('Nsel00', mCurrentPage))->setAlpha(255);
			mScreen->search(getSerialTagName('Nicon00', mCurrentPage - 1))->setAlpha(msVal.mSelectionAlpha);
			mScreen->search(getSerialTagName('Nicon00', mCurrentPage))->setAlpha(255);
			mState = StatusScrollDown;
			statusScrollDown();
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
		}
	}
}

/**
 * @note Address: 0x8040DF74
 * @note Size: 0x8C
 */
void ObjFinalResult::statusScrollUp()
{
	mScrollYPos = mScrollMove - (mScrollMove * (f32)(mScrollTargetPos - mScrollMoveProgress)) / (f32)mScrollTargetPos;

	if (mScrollMoveProgress++ == mScrollTargetPos) {
		mScrollMoveProgress = 1;
		mState              = StatusNormal;
		mScrollYPos         = 0.0f;
	}
}

/**
 * @note Address: 0x8040E000
 * @note Size: 0x90
 */
void ObjFinalResult::statusScrollDown()
{
	mScrollYPos = -mScrollMove - (mScrollMove * (f32)(mScrollMoveProgress - mScrollTargetPos)) / (f32)mScrollTargetPos;

	if (mScrollMoveProgress++ == mScrollTargetPos) {
		mScrollMoveProgress = 1;
		mState              = StatusNormal;
		mScrollYPos         = 0.0f;
	}
}

/**
 * @note Address: 0x8040E090
 * @note Size: 0x1B8
 */
void ObjFinalResult::statusForceScroll()
{
	if (!mAutoScrollDelay) {
		if (mFlags & FinalResult_NeedScrollSe) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
			mFlags &= ~FinalResult_NeedScrollSe;
		}
		mScrollYPos = -mScrollMove - (mScrollMove * (f32)(mScrollMoveProgress - mScrollTargetPos)) / (f32)mScrollTargetPos;
		if (mScrollMoveProgress++ == mScrollTargetPos) {
			int page = mCurrentPage;
			if (page == 7) {
				mScreen->search(getSerialTagName('Nsel00', page))->setAlpha(255);
				mScreen->search(getSerialTagName('Nicon00', mCurrentPage))->setAlpha(255);
				mScrollTargetPos = msVal._04;
				mState           = StatusNormal;
			} else {
				mCurrentPage++;
			}
			mScrollMoveProgress = 1;
			mScrollYPos         = 0.0f;
			mAutoScrollDelay    = msVal.mAutoScrollInterval;
			mFlags |= FinalResult_NeedScrollSe;
		}
	} else {
		mAutoScrollDelay--;
	}
}

/**
 * @note Address: 0x8040E248
 * @note Size: 0x8C0
 */
void ObjFinalResult::drawReplace(Graphics& gfx, int id)
{
	JUT_ASSERTLINE(726, getDispMember()->isID(OWNER_KH, MEMBER_FINAL_RESULT), "disp member err");
	DispFinalResult* disp = static_cast<DispFinalResult*>(getDispMember());
	TotalResultData* data = disp->mTotalResultData;

	int id2 = id * 2;
	int id3 = id * 2 + 1;

	u64 mesgIds[GAME_HIGHSCORE_COUNT] = {
		'8452_00', // "Days Spent:"
		'8453_00', // "Pikmin Lost:"
		'8454_00', // "Pikmin Lost in Battle:"
		'8455_00', // "Pikmin Left Behind:"
		'8456_00', // "Pikmin Lost to Fire:"
		'8457_00', // "Pikmin Lost to Water:"
		'8458_00', // "Pikmin Lost to Electricity:"
		'8459_00', // "Pikmin Lost to Explosions:"
		'8460_00', // "Pikmin Lost to Poison:"
		'8461_00', // "Pikmin Born:"
		'8462_00', // "Red Pikmin Born:"
		'8463_00', // "Yellow Pikmin Born:"
		'8464_00', // "Blue Pikmin Born:"
		'8465_00', // "White Pikmin Born:"
		'8466_00', // "Purple Pikmin Born:"
		'8467_00', // "Total Play Time:"
	};

	if (id != 7) {
		mScreen->search('Nsetp_c')->show();
		mScreen->search('Nsetp_d')->hide();
	} else {
		mScreen->search('Nsetp_c')->hide();
		mScreen->search('Nsetp_d')->show();
	}

	for (int i = 0; i < 4; i++) {
		OneResultData* result = data->mResults[id2];
		if (result->mScore[i] < 0) {
			mCounterData1[i] = 0;
			mCounters1[i]->setBlind(true);
		} else {
			mCounterData1[i] = result->mScore[i];
			mCounters1[i]->setBlind(false);
		}

		mScreen->search('Ttitl0')->setMsgID(mesgIds[id2]);
		mScreen->search('Ttitl0s')->setMsgID(mesgIds[id2]);
	}

	for (int i = 0; i < 4; i++) {
		int count = data->mResults[id3]->mScore[i];
		if (count < 0) {
			mCounterData2[i] = 0;
			mCounters2[i]->setBlind(true);
		} else {
			mCounterData2[i] = count;
			mCounters2[i]->setBlind(false);
		}

		mScreen->search('Ttitle1')->setMsgID(mesgIds[id3]);
		mScreen->search('Ttitle1s')->setMsgID(mesgIds[id3]);
	}

	static_cast<J2DPicture*>(mScreen->search('Ptokyop1'))->setBlack(mColor);
	static_cast<J2DPicture*>(mScreen->search('Ptomadp1'))->setBlack(mColor);
	static_cast<J2DPicture*>(mScreen->search('Pkon1'))->setBlack(mColor);
	static_cast<J2DPicture*>(mScreen->search('Pkon3'))->setBlack(mColor);

	u64 paneTags1[3] = {
		'P1st0_1',
		'P2nd0_1',
		'P3rd0_1',
	};

	u64 paneTags2[3] = {
		'P1st1_1',
		'P2nd1_1',
		'P3rd1_1',
	};

	u64 paneTags3[3] = {
		'P1stt3',
		'P2ndt3',
		'P3rdt3',
	};

	u64 paneTags4[3] = {
		'P1stt1',
		'P2ndt1',
		'P3rdt1',
	};

	for (int i = 0; i < 3; i++) {
		if (i == data->mResults[id2]->mScore5) {
			static_cast<J2DPicture*>(mScreen->search(paneTags1[i]))->setBlack(mColor);
		} else {
			static_cast<J2DPicture*>(mScreen->search(paneTags1[i]))->setBlack(JUtility::TColor(0, 255, 255, 0));
		}

		if (i == data->mResults[id3]->mScore5) {
			static_cast<J2DPicture*>(mScreen->search(paneTags2[i]))->setBlack(mColor);
			static_cast<J2DPicture*>(mScreen->search(paneTags3[i]))->setBlack(mColor);
			static_cast<J2DPicture*>(mScreen->search(paneTags4[i]))->setBlack(mColor);
		} else {
			static_cast<J2DPicture*>(mScreen->search(paneTags2[i]))->setBlack(JUtility::TColor(0, 255, 255, 0));
			static_cast<J2DPicture*>(mScreen->search(paneTags3[i]))->setBlack(JUtility::TColor(0, 255, 255, 0));
			static_cast<J2DPicture*>(mScreen->search(paneTags4[i]))->setBlack(JUtility::TColor(0, 255, 255, 0));
		}
	}

	for (int i = 0; i < 4; i++) {
		mCounters1[i]->update();
		mCounters2[i]->update();
	}

	gfx.mOrthoGraph.setPort();
	GXSetScissor(0, mScissorYPos, sys->getRenderModeWidth(), mScissorBoundsHeight);

	mScreen->draw(gfx, gfx.mOrthoGraph);

	data->mResults[id2]->mDoDraw = true;

	J2DPane* image = data->mResults[id2]->mScreen->search('Pimage');
	J2DPane* pict  = mScreen->search('Ppict0');
	PSMTXCopy(pict->mGlobalMtx, image->mPositionMtx);

	data->mResults[id3]->mDoDraw = true;
	image                        = data->mResults[id3]->mScreen->search('Pimage');
	pict                         = mScreen->search('Ppict1');
	PSMTXCopy(pict->mGlobalMtx, image->mPositionMtx);

	data->draw(gfx, mScissorYPos, mScissorBoundsHeight);
}

/**
 * @note Address: 0x8040EB08
 * @note Size: 0x128
 */
JUtility::TColor ObjFinalResult::getClr(const JUtility::TColor& col1, const JUtility::TColor& col2, f32 factor)
{
	return JUtility::TColor((factor * (f32)(col2.r - col1.r) + (f32)col1.r), (factor * (f32)(col2.g - col1.g) + (f32)col1.g),
	                        (factor * (f32)(col2.b - col1.b) + (f32)col1.b), (factor * (f32)(col2.a - col1.a) + (f32)col1.a));
}

/**
 * @note Address: 0x8040EC30
 * @note Size: 0xD8
 */
void SceneFinalResult::doUserCallBackFunc(Resource::MgrCommand*)
{
	JUT_ASSERTLINE(856, mDispMember->isID(OWNER_KH, MEMBER_FINAL_RESULT), "disp member err");
	og::newScreen::makeLanguageResName(mName, "result_final.szs");
	LoadResource::Arg arg(mName);
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);
	JKRArchive* arc;
	if (node) {
		arc = node->mArchive;
		registObj(new ObjFinalResult, arc);
	} else {
		JUT_PANICLINE(864, "failed");
	}
}

/**
 * @note Address: 0x8040ED08
 * @note Size: 0x2E4
 */
TotalResultData* SceneFinalResult::createDispMember(const int* p1, const int* p2, Game::Highscore** scores)
{
	return new TotalResultData(p1, p2, scores);
}

ObjFinalResult::StaticValues ObjFinalResult::msVal;

} // namespace Screen
} // namespace kh
