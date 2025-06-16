#include "ebi/Screen/TMainScreen.h"
#include "ebi/Screen/TScreenDataWindow.h"
#include "ebi/Screen/TFileData.h"
#include "ebi/E2DGraph.h"
#include "efx2d/FileSelect.h"
#include "og/newScreen/ogUtil.h"
#include "ebi/Utility.h"
#include "TParticle2dMgr.h"
#include "PSSystem/PSSystemIF.h"
#include "og/Screen/ogScreen.h"
#include "JSystem/JKernel/JKRDvdRipper.h"

namespace ebi {
namespace Screen {

namespace FileSelect {

static const char className[] = "ebiScreenFileSelect";

/*  * @note Address: N/A
 * @note Size: 0xB8
 */
void TScreenDataWindow_new::setArchive(JKRArchive* arc)
{
	sys->heapStatusStart("TScreenDataWindow::setArchive--set__blo", nullptr);
	mScreenObj = new P2DScreen::Mgr;
	mScreenObj->set("file_select_dw_new.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenDataWindow::setArchive--set__blo");

	sys->heapStatusStart("TScreen_FS_scene_open::setArchive--callback_message", nullptr);
	E2DPane_setTreeCallBackMessage(mScreenObj, mScreenObj);
	sys->heapStatusEnd("TScreen_FS_scene_open::setArchive--callback_message");
}

/**
 * @note Address: N/A
 * @note Size: 0x130
 */
void TScreenDataWindow_new::setData(s32 fileID, u64 mesg)
{
	P2ASSERTBOUNDSLINE(57, 0, fileID, 3);

	J2DPane* panes[3];
	panes[0] = E2DScreen_searchAssert(mScreenObj, 'Pdata1');
	panes[1] = E2DScreen_searchAssert(mScreenObj, 'Pdata2');
	panes[2] = E2DScreen_searchAssert(mScreenObj, 'Pdata3');
	panes[0]->hide();
	panes[1]->hide();
	panes[2]->hide();
	panes[fileID]->show();

	E2DScreen_searchAssert(mScreenObj, 'Tnewd')->setMsgID(mesg);
	E2DScreen_searchAssert(mScreenObj, 'Tnewds')->setMsgID(mesg);
}

/**
 * @note Address: N/A
 * @note Size: 0x2E4
 */
void TScreenDataWindow_data::setArchive(JKRArchive* arc)
{
	sys->heapStatusStart("TScreenDataWindow::setArchive--set__blo", nullptr);
	mScreenObj = new P2DScreen::Mgr;
	mScreenObj->set("file_select_dw_data.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenDataWindow::setArchive--set__blo");

	sys->heapStatusStart("TScreen_FS_scene_open::setArchive--callback_message", nullptr);
	E2DPane_setTreeCallBackMessage(mScreenObj, mScreenObj);
	sys->heapStatusEnd("TScreen_FS_scene_open::setArchive--callback_message");

	og::Screen::setCallBack_CounterRV(mScreenObj, 'Pln01', 'Pln02', 'Pln05', &mPokos, 10, 1, false, arc);
	mCounterA = og::Screen::setCallBack_CounterRV(mScreenObj, 'Ptr01', 'Ptr02', 'Ptr03', &mTreasures, 3, 1, false, arc);
	mCounterB = og::Screen::setCallBack_CounterRV(mScreenObj, 'Ptrt01', 'Ptrt02', 'Ptrt03', &mTreasureMax, 3, 1, false, arc);
	og::Screen::setCallBack_CounterDay(mScreenObj, 'Pfr2_1', 'Pfr2_2', 'Pfr1', &mCaveFloor, 3, arc);
	og::Screen::setCallBack_CounterRV(mScreenObj, 'Ptime01', 'Ptime02', 'Ptime03', &mPlayTimeHours, 5, 1, false, arc);
	og::Screen::setCallBack_CounterRV(mScreenObj, 'Ptimem01', 'Ptimem02', 'Ptimem02', &mPlayTimeMinutes, 2, 2, false, arc)
	    ->setZeroAlpha(255);

	E2DScreen_searchAssert(mScreenObj, 'Pln03')->setAlpha(0);
	E2DScreen_searchAssert(mScreenObj, 'Pln04')->setAlpha(0);

	mPokos           = 0;
	mTreasures       = 0;
	mTreasureMax     = 201; // Yes they really hardcode this
	mPlayTimeHours   = 0;
	mPlayTimeMinutes = 0;
	mCaveID          = 0;
	mCaveFloor       = 0;
}

/**
 * @note Address: 0x803D4244
 * @note Size: 0x254
 */
void TScreenDataWindow_data::setData(s32 fileID, u32 pokos, u32 treasures, u32 cave, u32 floor, u32 hours, u32 minutes)
{
	P2ASSERTBOUNDSLINE(129, 0, fileID, 3);

	J2DPane* panes[4];
	panes[1] = E2DScreen_searchAssert(mScreenObj, 'Pdata1');
	panes[2] = E2DScreen_searchAssert(mScreenObj, 'Pdata2');
	panes[3] = E2DScreen_searchAssert(mScreenObj, 'Pdata3');
	panes[1]->hide();
	panes[2]->hide();
	panes[3]->hide();
	panes[fileID + 1]->show();

	mPokos     = pokos;
	mTreasures = treasures;

	if (mPokos < 10000) {
		E2DScreen_searchAssert(mScreenObj, 'Ptrsla')->hide();
		mCounterB->hide();
		mCounterA->getMotherPane()->move(50.0f, 0.0f);
	} else {
		E2DScreen_searchAssert(mScreenObj, 'Ptrsla')->show();
		mCounterB->show();
		mCounterA->getMotherPane()->move(0.0f, 0.0f);
	}
	mCaveID          = cave;
	mCaveFloor       = floor;
	mPlayTimeHours   = hours;
	mPlayTimeMinutes = minutes;

	J2DPane* cavetreasure = E2DScreen_searchAssert(mScreenObj, 'Panac');
	J2DPane* cavename     = E2DScreen_searchAssert(mScreenObj, 'Tananame');
	u64 tag               = og::newScreen::caveIDtoMsgID(mCaveID);
	char buf2[8];
	char buf[8];
	EUTDebug_Tag32ToName(mCaveID, buf);
	EUTDebug_Tag64ToName(tag, buf2);
	if (tag == 0) {
		cavetreasure->hide();
	} else {
		cavetreasure->show();
		cavename->setMsgID(tag + 2);
	}
}

/**
 * @note Address: 0x803D4498
 * @note Size: 0xEB0
 */
TMainScreen::TMainScreen()
    : mDrawColor(0, 0, 0, 255)
    , mDrawAlpha(255)
    , mState(0)
    , mCounter(0)
    , mCounterMax(0)
    , mOpenCounter(0)
    , mOpenCounterMax(0)
    , mMesgCounter(0)
    , mMesgCounterMax(0)
{
	mMainScreen = nullptr;
	for (int i = 0; i < 3; i++) {
		mPaneND[i] = nullptr;
	}

	mPaneDataWindow = nullptr;

	for (int i = 0; i < 3; i++) {
		mPaneSelE0[i]       = nullptr;
		mPaneSelE1[i]       = nullptr;
		mPanePdc[i]         = nullptr;
		mPaneMdc[i]         = nullptr;
		mPaneIconColorA[i]  = nullptr;
		mPaneIconColorB[i]  = nullptr;
		mPaneCopyCursorL[i] = nullptr;
		mPaneCopyCursorR[i] = nullptr;
	}

	mPaneMesgYes        = nullptr;
	mPaneMesgYesShadow  = nullptr;
	mPaneMesgNo         = nullptr;
	mPaneMesgNoShadow   = nullptr;
	mPaneButton         = nullptr;
	mPaneButtonShadow   = nullptr;
	mPaneButtonB        = nullptr;
	mPaneButtonBShadow  = nullptr;
	mPaneMesgMain       = nullptr;
	mPaneMesgMainShadow = nullptr;
	mFlags.clear();
	mCurrFileInfoId = 0;

	for (int i = 0; i < 3; i++) {
		mEfxFileSel[i]  = new efx2d::FileSelect::T2DFilesel(&mCursorSelPos[i]);
		mEfxFileSelM[i] = new efx2d::FileSelect::T2DFileselM(&mCursorSelPosM[i]);
	}
	mParticleResource = nullptr;
}

/**
 * @note Address: 0x803D5348
 * @note Size: 0xB0
 */
void TMainScreen::loadResource()
{
	sys->heapStatusStart("TScreenFileSelect::loadResource", nullptr);
	char path[PATH_MAX];
	og::newScreen::makeLanguageResName(path, "file_select.szs");
	JKRArchive* arc = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(255, arc);
	sys->heapStatusEnd("TScreenFileSelect::loadResource");
	setArchive(arc);
}

/**
 * @note Address: 0x803D53F8
 * @note Size: 0x12E4
 */
void TMainScreen::doSetArchive(JKRArchive* arc)
{
	/* NON-MATCHING */
	sys->heapStatusStart("TScreenFileSelect::setArchive", nullptr);

	sys->heapStatusStart("TScreenFileSelect::setArchive--set__blo", nullptr);
	mMainScreen = new P2DScreen::Mgr_tuning;
	mMainScreen->set("file_select.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenFileSelect::setArchive--set__blo");

	mNewScreen.setArchive(arc);
	mDataScreen.setArchive(arc);

	mMainScreen->makeAnmPointer();

	mPaneMesgYes        = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mMainScreen, 'T_y'));
	mPaneMesgYesShadow  = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mMainScreen, 'Ts_y'));
	mPaneMesgNo         = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mMainScreen, 'T_n'));
	mPaneMesgNoShadow   = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mMainScreen, 'Ts_n'));
	mPaneButton         = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mMainScreen, 'Tbt0'));
	mPaneButtonShadow   = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mMainScreen, 'Tbt0s'));
	mPaneButtonB        = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mMainScreen, 'Tbt1'));
	mPaneButtonBShadow  = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mMainScreen, 'Tbt1s'));
	mPaneMesgMain       = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mMainScreen, 'Tmsg'));
	mPaneMesgMainShadow = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mMainScreen, 'Tmsgs'));

	mPaneND[0]      = static_cast<J2DPictureEx*>(E2DScreen_searchAssert(mMainScreen, 'ND1'));
	mPaneND[1]      = static_cast<J2DPictureEx*>(E2DScreen_searchAssert(mMainScreen, 'ND2'));
	mPaneND[2]      = static_cast<J2DPictureEx*>(E2DScreen_searchAssert(mMainScreen, 'ND3'));
	mPaneDataWindow = E2DScreen_searchAssert(mMainScreen, 'Ndataw');

	mPaneSelE0[0] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pd1selE0'));
	mPaneSelE0[1] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pd2selE0'));
	mPaneSelE0[2] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pd3selE0'));

	mPaneSelE1[0] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pmd1seE1'));
	mPaneSelE1[1] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pmd2seE1'));
	mPaneSelE1[2] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pmd3seE1'));

	mPanePdc[0] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pd1c'));
	mPanePdc[1] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pd2c'));
	mPanePdc[2] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pd3c'));

	mPaneMdc[0] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pmd1c'));
	mPaneMdc[1] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pmd2c'));
	mPaneMdc[2] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pmd3c'));

	mPaneIconColorA[0] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pd1pika'));
	mPaneIconColorA[1] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pd2pika'));
	mPaneIconColorA[2] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pd3_pika'));

	mPaneIconColorB[0] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pmd1pika'));
	mPaneIconColorB[1] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pmd2pika'));
	mPaneIconColorB[2] = static_cast<J2DPicture*>(E2DScreen_searchAssert(mMainScreen, 'Pmd3pika'));

	mPaneSel[0][0] = E2DScreen_searchAssert(mMainScreen, 'Pd1sel');
	mPaneSel[1][0] = E2DScreen_searchAssert(mMainScreen, 'Pmd1sel');
	mPaneSel[0][1] = E2DScreen_searchAssert(mMainScreen, 'Pd2sel');
	mPaneSel[1][1] = E2DScreen_searchAssert(mMainScreen, 'Pmd2sel');
	mPaneSel[0][2] = E2DScreen_searchAssert(mMainScreen, 'Pd3sel');
	mPaneSel[1][2] = E2DScreen_searchAssert(mMainScreen, 'Pmd3sel');

	mPaneCopyCursorL[0] = E2DScreen_searchAssert(mMainScreen, 'Pposd1l');
	mPaneCopyCursorR[0] = E2DScreen_searchAssert(mMainScreen, 'Pposd1r');
	mPaneCopyCursorL[1] = E2DScreen_searchAssert(mMainScreen, 'Pposd2l');
	mPaneCopyCursorR[1] = E2DScreen_searchAssert(mMainScreen, 'Pposd2r');
	mPaneCopyCursorL[2] = E2DScreen_searchAssert(mMainScreen, 'Pposd3l');
	mPaneCopyCursorR[2] = E2DScreen_searchAssert(mMainScreen, 'Pposd3r');

	J2DTextBox* text = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mMainScreen, 'Tcol'));
	mFontColor2.setColors(text);
	text = static_cast<J2DTextBox*>(mPaneMesgNo);
	mFontColor1.setColors(text);

	for (int i = 0; i < 3; i++) {
		mPaneCopyCursorL[i]->setAlpha(0);
		mPaneCopyCursorR[i]->setAlpha(0);
	}

	E2DScreen_searchAssert(mMainScreen, 'Popen1')->show();
	E2DScreen_searchAssert(mMainScreen, 'Popenp1')->show();

	setMsgID_('5479_00', '5479_00', '5479_00'); // "Choose a Ship's Log."

	sys->heapStatusStart("TScreen_FS_scene_open::setArchive--callback_message", nullptr);
	E2DPane_setTreeCallBackMessage(mMainScreen, mMainScreen);
	sys->heapStatusEnd("TScreen_FS_scene_open::setArchive--callback_message");
	mMainScreen->addCallBackPane(mMainScreen, &mAnimOpenScreenA);
	mMainScreen->addCallBackPane(mMainScreen, &mAnimOpenScreenB);
	for (int i = 0; i < 3; i++) {
		mMainScreen->addCallBackPane(mPaneSelE0[i], &mAnimOpenScreenC[i]);
		mMainScreen->addCallBackPane(mPaneSelE1[i], &mAnimOpenScreenD[i]);
	}

	mMainScreen->addCallBackPane(mMainScreen, &mAnimOpenScreenE);
	mMainScreen->addCallBackPane(mMainScreen, &mAnimOpenScreenF);
	mMainScreen->addCallBackPane(mMainScreen, &mAnimOpenScreenG);
	mMainScreen->addCallBackPane(mMainScreen, &mAnimOpenScreenH);

	for (int i = 0; i < 3; i++) {
		mMainScreen->addCallBackPane(mPaneND[i], &mAnimFileBallIn[i]);
		mMainScreen->addCallBackPane(mPaneND[i], &mAnimFileBallOut[i]);
		mMainScreen->addCallBackPane(mPaneND[i], &mAnimFileBallDecide[i]);
	}

	mMainScreen->addCallBack('Ngrpbt0', &mAnimInCopyEraseA);
	mMainScreen->addCallBack('Ngrpbt0', &mAnimOutCopyEraseA);
	mMainScreen->addCallBack('Ngrpbt1', &mAnimInCopyEraseB);
	mMainScreen->addCallBack('Ngrpbt1', &mAnimOutCopyEraseB);

	mMainScreen->addCallBack('N_y', &mAnimInYesNoA);
	mMainScreen->addCallBack('N_y', &mAnimOutYesNoA);
	mMainScreen->addCallBack('N_n', &mAnimInYesNoB);
	mMainScreen->addCallBack('N_n', &mAnimOutYesNoB);

	mMainScreen->addCallBack('NmainMG', &mAnimWaitScreen);
	mMainScreen->addCallBack('Ndataw', &mAnimOpenDataWindow);
	mMainScreen->addCallBack('Ndataw', &mAnimCloseDataWindow);
	mMainScreen->addCallBack('Ndataw', &mAnimDecideDataWindow);

	mMainScreen->addCallBackPane(mMainScreen, &mCalcAnim);

	u32* day0       = &mFileData[0].mCurrentDay;
	mCounterDay[0]  = og::Screen::setCallBack_CounterDay(mMainScreen, 'Pd1nor', 'Pd1nol', 'Pd1noc', day0, 6, arc);
	mCounterDayM[0] = og::Screen::setCallBack_CounterDay(mMainScreen, 'Pmd1nor', 'Pmd1nol', 'Pmd1noc', day0, 6, arc);
	u32* day1       = &mFileData[1].mCurrentDay;
	mCounterDay[1]  = og::Screen::setCallBack_CounterDay(mMainScreen, 'Pd2nor', 'Pd2nol', 'Pd2noc', day1, 6, arc);
	mCounterDayM[1] = og::Screen::setCallBack_CounterDay(mMainScreen, 'Pmd2nor', 'Pmd2nol', 'Pmd2noc', day1, 6, arc);
	u32* day2       = &mFileData[2].mCurrentDay;
	mCounterDay[2]  = og::Screen::setCallBack_CounterDay(mMainScreen, 'Pd3nor', 'Pd3nol', 'Pd3noc', day2, 6, arc);
	mCounterDayM[2] = og::Screen::setCallBack_CounterDay(mMainScreen, 'Pmd3nor', 'Pmd3nol', 'Pmd3noc', day2, 6, arc);

	mMainScreen->addCallBackPane(mPaneMesgYes, &mBlinkFontYes);
	mMainScreen->addCallBackPane(mPaneMesgNo, &mBlinkFontNo);
	mBlinkFontYes.set(mFontColor2, mFontColor1);
	mBlinkFontNo.set(mFontColor2, mFontColor1);
	mMainScreen->addCallBack('N_y', &mPurupuru[0]);
	mMainScreen->addCallBack('N_n', &mPurupuru[1]);

	mAnimOpenScreenA.loadAnm("file_select.bck", arc, 0, 80);

	mAnimFileBallIn[0].loadAnm("file_select.bck", arc, 80, 106);
	mAnimFileBallOut[0].loadAnm("file_select.bck", arc, 130, 164);
	mAnimFileBallDecide[0].loadAnm("file_select.bck", arc, 420, 456);

	mAnimFileBallIn[1].loadAnm("file_select.bck", arc, 136, 169);
	mAnimFileBallOut[1].loadAnm("file_select.bck", arc, 209, 235);
	mAnimFileBallDecide[1].loadAnm("file_select.bck", arc, 420, 456);

	mAnimFileBallIn[2].loadAnm("file_select.bck", arc, 215, 248);
	mAnimFileBallOut[2].loadAnm("file_select.bck", arc, 309, 332);
	mAnimFileBallDecide[2].loadAnm("file_select.bck", arc, 420, 456);

	mAnimInCopyEraseA.loadAnm("file_select.bck", arc, 90, 106);
	mAnimInCopyEraseB.loadAnm("file_select.bck", arc, 90, 106);
	mAnimOutCopyEraseA.loadAnm("file_select.bck", arc, 289, 304);
	mAnimOutCopyEraseB.loadAnm("file_select.bck", arc, 289, 304);

	mAnimInYesNoA.loadAnm("file_select.bck", arc, 520, 543);
	mAnimInYesNoB.loadAnm("file_select.bck", arc, 520, 543);
	mAnimOutYesNoA.loadAnm("file_select.bck", arc, 420, 456);
	mAnimOutYesNoB.loadAnm("file_select.bck", arc, 720, 733);

	mAnimWaitScreen.loadAnm("file_select.bck", arc, 80, 92);
	mAnimOpenDataWindow.loadAnm("file_select.bck", arc, 80, 90);
	mAnimCloseDataWindow.loadAnm("file_select.bck", arc, 138, 146);
	mAnimDecideDataWindow.loadAnm("file_select.bck", arc, 438, 468);

	mAnimOpenScreenB.loadAnm("file_select.bpk", arc, 0, 80);
	mAnimOpenScreenC[0].loadAnm("file_select_03.btk", arc, 0, 99999);
	mAnimOpenScreenC[1].loadAnm("file_select_03.btk", arc, 0, 99999);
	mAnimOpenScreenC[2].loadAnm("file_select_03.btk", arc, 0, 99999);
	mAnimOpenScreenD[0].loadAnm("file_select_03.btk", arc, 0, 99999);
	mAnimOpenScreenD[1].loadAnm("file_select_03.btk", arc, 0, 99999);
	mAnimOpenScreenD[2].loadAnm("file_select_03.btk", arc, 0, 99999);
	mAnimOpenScreenE.loadAnm("file_select_02.btk", arc, 0, 99999);
	mAnimOpenScreenF.loadAnm("file_select.btk", arc, 0, 99999);
	mAnimOpenScreenG.loadAnm("file_select_04.btk", arc, 0, 99999);
	mAnimOpenScreenH.loadAnm("file_select.brk", arc, 0, 99999);

	for (int i = 0; i < 3; i++) {
		mAnimOpenScreenC[i].mAnim->searchUpdateMaterialID(mMainScreen);
		mAnimOpenScreenD[i].mAnim->searchUpdateMaterialID(mMainScreen);
	}
	E2DPane_setTreeInfluencedAlpha(mPaneDataWindow, true);
	mPaneDataWindow->setAlpha(0);

	void* file = JKRDvdToMainRam("user/Ebisawa/effect/eff2d_file_select.jpc", nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, 0,
	                             nullptr, nullptr);
	P2ASSERTLINE(518, file);
	mParticleResource = new JPAResourceManager(file, JKRGetCurrentHeap());

	sys->heapStatusEnd("TScreenFileSelect::setArchive");
}

/**
 * @note Address: 0x803D66DC
 * @note Size: 0x100
 */
void TMainScreen::doKillScreen()
{
	mCursorA.mCursor.kill();
	mCursorB.mCursor.kill();
	mEfxFileCopy.kill();
	mEfxFileCopyM.kill();

	for (int i = 0; i < 3; i++) {
		mEfxFileSel[i]->kill();
		mEfxFileSelM[i]->kill();
	}

	mEfxDelete.kill();
	mEfxDeleteM.kill();
	particle2dMgr->clearSceneResourceManager();
	mIsCardSeActive = false;
}

/**
 * @note Address: 0x803D67DC
 * @note Size: 0x284
 */
void TMainScreen::doOpenScreen(ArgOpen*)
{
	P2ASSERTLINE(561, mParticleResource);
	particle2dMgr->setSceneResourceManager(mParticleResource);

	mMainScreen->clearAnmTransform();
	mAnimOpenScreenA.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	mAnimOpenScreenB.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);

	for (int i = 0; i < 3; i++) {
		mAnimOpenScreenC[i].setRandFrame();
		mAnimOpenScreenD[i].setRandFrame();
	}

	mAnimOpenScreenC[0].play(0.5f, J3DAA_UNKNOWN_2, false);
	mAnimOpenScreenC[1].play(0.25f, J3DAA_UNKNOWN_2, false);
	mAnimOpenScreenC[2].play(0.4f, J3DAA_UNKNOWN_2, false);
	mAnimOpenScreenD[0].play(0.5f, J3DAA_UNKNOWN_2, false);
	mAnimOpenScreenD[1].play(0.25f, J3DAA_UNKNOWN_2, false);
	mAnimOpenScreenD[2].play(0.4f, J3DAA_UNKNOWN_2, false);
	mAnimOpenScreenE.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_2, true);
	mAnimOpenScreenF.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_2, true);
	mAnimOpenScreenG.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_2, true);
	mAnimOpenScreenH.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_2, true);

	u32 count   = E2DFader::kFadeTime / sys->mDeltaTime;
	mCounter    = count;
	mCounterMax = count;
	mState      = 1;

	for (int i = 0; i < 3; i++) {
		mPaneSel[0][i]->setAlpha(255);
		mPaneSel[1][i]->setAlpha(255);
	}

	mNewScreen.mIsActive  = false;
	mDataScreen.mIsActive = false;
	initDataBalls_();
	setIconColorAlpha_(30);
	mFlags.clear();
	mIsCardSeActive = false;
}

/**
 * @note Address: 0x803D6A60
 * @note Size: 0x1B0
 */
void TMainScreen::doInitWaitState()
{
	mMainScreen->clearAnmTransform();
	mAnimOpenScreenA.stop();
	mAnimOpenScreenB.stop();
	mAnimWaitScreen.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);

	for (int i = 0; i < 3; i++) {
		mPaneSel[0][i]->setAlpha(255);
		mPaneSel[1][i]->setAlpha(255);
	}

	u32 count       = 0.5f / sys->mDeltaTime;
	mOpenCounter    = count;
	mOpenCounterMax = count;

	for (int i = 0; i < 3; i++) {
		JUtility::TColor color = getDataBallColor_(i);
		Vector2f pos           = E2DPane_getGlbCenter(mPaneSel[0][i]);
		efx2d::Arg arg(pos);
		mEfxFileSel[i]->create(&arg);
		mEfxFileSel[i]->setGlobalEnvColor(color);
		mEfxFileSelM[i]->create(&arg);
		mEfxFileSelM[i]->setGlobalEnvColor(color);
	}
	mState = 0;
}

/**
 * @note Address: 0x803D6C10
 * @note Size: 0x98
 */
void TMainScreen::doCloseScreen(ArgClose*)
{
	u32 count   = E2DFader::kFadeTime / sys->mDeltaTime;
	mCounter    = count;
	mCounterMax = count;
	mState      = 2;
	for (int i = 0; i < 3; i++) {
		mPaneSel[0][i]->setAlpha(0);
		mPaneSel[1][i]->setAlpha(0);
	}
}

/**
 * @note Address: 0x803D6CA8
 * @note Size: 0x88
 */
bool TMainScreen::doUpdateStateOpen()
{
	mMainScreen->update();
	if (mState) {
		if (mCounter) {
			mCounter--;
		}
	}

	if (mAnimOpenScreenA.isFinish() && mAnimOpenScreenB.isFinish()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803D6D30
 * @note Size: 0x31C
 */
bool TMainScreen::doUpdateStateWait()
{
	mMainScreen->update();
	mCursorA.update();
	mCursorB.update();
	if (mState && mCounter) {
		mCounter--;
	}
	if (mOpenCounter) {
		mOpenCounter--;
	}

	Matrixf* mtx    = (Matrixf*)&mPaneDataWindow->mGlobalMtx;
	TFileData* data = &mFileData[mCurrFileInfoId];
	if (data->mIsBrokenFile || data->mIsNewFile) {
		mNewScreen.mIsActive  = 1;
		mDataScreen.mIsActive = 0;
		J2DPane* pane         = E2DScreen_searchAssert(mNewScreen.mScreenObj, 'Ndataw');
		PSMTXCopy(mtx->mMatrix.mtxView, pane->mPositionMtx);
		if (mNewScreen.mIsActive) {
			mNewScreen.mScreenObj->update();
		}
	} else {
		mDataScreen.mIsActive = 1;
		mNewScreen.mIsActive  = 0;
		J2DPane* pane         = E2DScreen_searchAssert(mDataScreen.mScreenObj, 'Ndataw');
		PSMTXCopy(mtx->mMatrix.mtxView, pane->mPositionMtx);
		if (mDataScreen.mIsActive) {
			mDataScreen.mScreenObj->update();
		}
	}

	for (int i = 0; i < 3; i++) {
		f32 factor;
		if (mOpenCounterMax) {
			factor = (f32)mOpenCounter / (f32)mOpenCounterMax;
		} else {
			factor = 0.0f;
		}
		u8 alpha = factor * 255.0f;
		mPaneSel[0][i]->setAlpha(alpha);
		if (mOpenCounterMax) {
			factor = (f32)mOpenCounter / (f32)mOpenCounterMax;
		} else {
			factor = 0.0f;
		}
		alpha = factor * 255.0f;
		mPaneSel[1][i]->setAlpha(alpha);
	}

	updateMsg_();
	for (int i = 0; i < 3; i++) {
		mCursorSelPos[i]  = E2DPane_getGlbCenter(mPaneSel[0][i]);
		mCursorSelPosM[i] = E2DPane_getGlbCenter(mPaneSel[1][i]);
		mEfxFileSel[i]->setGlobalScale(mPaneND[i]->mScale.x / 1.2f);
		mEfxFileSelM[i]->setGlobalScale(mPaneND[i]->mScale.x / 1.2f);
	}
	if (mIsCardSeActive) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ACCESS, 0);
	}
	return false;
}

/**
 * @note Address: 0x803D704C
 * @note Size: 0xCC
 */
bool TMainScreen::doUpdateStateClose()
{
	mMainScreen->update();
	if (mState) {
		if (mCounter) {
			mCounter--;
		}
	}

	for (int i = 0; i < 3; i++) {
		mPaneSel[0][i]->setAlpha(0);
		mPaneSel[1][i]->setAlpha(0);
	}

	if (checkClose()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803D7118
 * @note Size: 0x374
 */
void TMainScreen::doDraw()
{
	// Draw the new screen and the data screen
	{
		Graphics* gfx       = sys->getGfx();
		J2DPerspGraph* graf = &gfx->mPerspGraph;

		graf->setPort();
		mMainScreen->draw(*gfx, *graf);

		if (mNewScreen.mIsActive) {
			J2DPerspGraph* graf2 = sys->getGfx()->getPerspGraph();
			Graphics gfx2;
			mNewScreen.mScreenObj->draw(gfx2, *graf2);
		}

		if (mDataScreen.mIsActive) {
			J2DPerspGraph* graf2 = sys->getGfx()->getPerspGraph();
			Graphics gfx2;
			mDataScreen.mScreenObj->draw(gfx2, *graf2);
		}
	}

	// If no state is set, return
	if (!mState) {
		return;
	}

	// Update fader state
	{
		J2DPerspGraph* graf = sys->getGfx()->getPerspGraph();
		graf->setPort();

		JUtility::TColor screenColor(mDrawColor);
		f32 screenOpacity;
		switch (mState) {
		case State_FadeIn:
			if (mCounterMax) {
				screenOpacity = (f32)mCounter / (f32)mCounterMax;
			} else {
				screenOpacity = 0.0f;
			}

			screenColor.a = mDrawAlpha * screenOpacity;
			break;
		case State_FadeOut:
			if (mCounterMax) {
				screenOpacity = (f32)mCounter / (f32)mCounterMax;
			} else {
				screenOpacity = 0.0f;
			}

			screenColor.a = mDrawAlpha * (1.0f - screenOpacity);
			break;
		}

		graf->setColor(screenColor);
		graf->fillBox(sys->getFullScreenBox());
	}
}

/**
 * @note Address: 0x803D748C
 * @note Size: 0x1B0
 */
void TMainScreen::inDataBall(s32 fileID)
{
	P2ASSERTBOUNDSLINE(759, 0, fileID, 3);
	mAnimFileBallIn[fileID].play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	mAnimFileBallOut[fileID].stop();
	mAnimFileBallDecide[fileID].stop();

	for (int i = 0; i < 3; i++) {
		JUtility::TColor color = getDataBallColor_(i);
		Vector2f pos           = E2DPane_getGlbCenter(mPaneSel[0][i]);
		efx2d::Arg arg(pos);
		mEfxFileSel[i]->create(&arg);
		mEfxFileSel[i]->setGlobalEnvColor(color);
		mEfxFileSelM[i]->create(&arg);
		mEfxFileSelM[i]->setGlobalEnvColor(color);
	}

	for (int i = 0; i < 3; i++) {
		if (fileID == i) {
			mEfxFileSel[i]->setGlobalAlpha(255);
			mEfxFileSelM[i]->setGlobalAlpha(255);
		} else {
			mEfxFileSel[i]->setGlobalAlpha(80);
			mEfxFileSelM[i]->setGlobalAlpha(80);
		}
	}
}

/**
 * @note Address: 0x803D763C
 * @note Size: 0xA4
 */
void TMainScreen::outDataBall(s32 fileID)
{
	P2ASSERTBOUNDSLINE(796, 0, fileID, 3);
	mAnimFileBallIn[fileID].stop();
	mAnimFileBallOut[fileID].play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	mAnimFileBallDecide[fileID].stop();
}

/**
 * @note Address: 0x803D76E0
 * @note Size: 0xA4
 */
void TMainScreen::decideDataBall(s32 fileID)
{
	P2ASSERTBOUNDSLINE(807, 0, fileID, 3);
	mAnimFileBallIn[fileID].stop();
	mAnimFileBallOut[fileID].stop();
	mAnimFileBallDecide[fileID].play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
}

/**
 * @note Address: 0x803D7784
 * @note Size: 0x124
 */
void TMainScreen::createFiledecide(s32 id)
{
	Vector2f pos = E2DPane_getGlbCenter(mPaneSel[0][id]);
	efx2d::Arg arg(pos);
	efx2d::FileSelect::T2DFiledecide efx;
	efx.create(&arg);

	for (int i = 0; i < 3; i++) {
		mEfxFileSel[i]->fade();
		mEfxFileSelM[i]->fade();
	}
}

/**
 * @note Address: 0x803D78A8
 * @note Size: 0x30
 */
bool TMainScreen::isFinishOutDataBall(s32 fileID)
{
	return mAnimFileBallOut[fileID].isFinish();
}

/**
 * @note Address: 0x803D78D8
 * @note Size: 0x30
 */
bool TMainScreen::isFinishDecideDataBall(s32 fileID)
{
	return mAnimFileBallDecide[fileID].isFinish();
}

/**
 * @note Address: 0x803D7908
 * @note Size: 0xF4
 */
void TMainScreen::createCopyCursor(s32 fileID)
{
	int id1, id2;
	switch (fileID) {
	case 0:
		id1 = 1;
		id2 = 2;
		break;
	case 1:
		id1 = 0;
		id2 = 2;
		break;
	case 2:
		id1 = 0;
		id2 = 1;
		break;
	}

	mCursorA.setPanes(mPaneCopyCursorL[id1], mPaneCopyCursorL[id2]);
	mCursorB.setPanes(mPaneCopyCursorR[id1], mPaneCopyCursorR[id2]);

	mCursorA.start();
	mCursorB.start();
	mCursorA.update();
	mCursorB.update();
	mCursorA.mCursor.create(nullptr);
	mCursorB.mCursor.create(nullptr);
}

/**
 * @note Address: 0x803D79FC
 * @note Size: 0x50
 */
void TMainScreen::fadeCopyCursor()
{
	mCursorA.mCursor.fade();
	mCursorB.mCursor.fade();
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x50
//  */
// void TMainScreen::killCopyCursor()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x803D7A4C
 * @note Size: 0x10
 */
void TMainScreen::moveLeftCopyCursor()
{
	mCursorA.mIsLeft = true;
	mCursorB.mIsLeft = true;
}

/**
 * @note Address: 0x803D7A5C
 * @note Size: 0x10
 */
void TMainScreen::moveRightCopyCursor()
{
	mCursorA.mIsLeft = false;
	mCursorB.mIsLeft = false;
}

/**
 * @note Address: 0x803D7A6C
 * @note Size: 0x1E0
 */
void TMainScreen::createFilecopyEffect(s32 idFrom, s32 idTo)
{
	JUtility::TColor color = getDataBallColor_(idFrom);
	Vector2f pos1          = E2DPane_getGlbCenter(mPaneSel[0][idFrom]);
	Vector2f pos2          = E2DPane_getGlbCenter(mPaneSel[0][idTo]);

	efx2d::FileSelect::ArgFilecopy arg(pos1, pos2, color);
	mEfxFileCopy.create(&arg);

	Vector2f pos3 = E2DPane_getGlbCenter(mPaneSel[1][idFrom]);
	Vector2f pos4 = E2DPane_getGlbCenter(mPaneSel[1][idTo]);

	efx2d::FileSelect::ArgFilecopy arg2(pos3, pos4, color);
	mEfxFileCopyM.create(&arg2);

	mIsCardSeActive = true;
}

/**
 * @note Address: 0x803D7C4C
 * @note Size: 0x58
 */
void TMainScreen::fadeFilecopyEffect()
{
	mEfxFileCopy.fade();
	mEfxFileCopyM.fade();
	mIsCardSeActive = false;
}

/**
 * @note Address: 0x803D7CA4
 * @note Size: 0x118
 */
void TMainScreen::createFiledeletingEffect(s32 fileID)
{
	getDataBallColor_(fileID);

	Vector2f pos = E2DPane_getGlbCenter(mPaneSel[0][fileID]);
	efx2d::Arg arg(pos);
	mEfxDelete.create(&arg);

	Vector2f pos2 = E2DPane_getGlbCenter(mPaneSel[1][fileID]);
	efx2d::Arg arg2(pos2);
	mEfxDeleteM.create(&arg2);
	mIsCardSeActive = true;
}

/**
 * @note Address: 0x803D7DBC
 * @note Size: 0x58
 */
void TMainScreen::fadeFiledeletingEffect()
{
	mEfxDelete.fade();
	mEfxDeleteM.fade();
	mIsCardSeActive = false;
}

// /**
//  * @note Address: N/A
//  * @note Size: 0xF0
//  */
// void TMainScreen::killAllEffect()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x803D7E14
 * @note Size: 0x318
 */
void TMainScreen::openDataWindow(s32 fileID)
{
	P2ASSERTBOUNDSLINE(1008, 0, fileID, 3);

	// weird but works
	mCurrFileInfoId = fileID;
	fileID          = mCurrFileInfoId;
	TFileData* data = getFileData(fileID);

	if (data->mIsBrokenFile) {
		mNewScreen.setData(fileID, '5508_00'); // "This Ship's Log is corrupted."
	} else if (data->mIsNewFile) {
		mNewScreen.setData(fileID, '5484_00'); // "This is a new Ship's Log."
	} else {
		mDataScreen.setData(fileID, data->mPokos, data->mTreasure, data->mCaveID, data->mCaveFloor, data->mPlayTimeHours,
		                    data->mPlayTimeMinutes);
	}

	if (!mFlags.isSet(FileSelectScreen_Decided)) {
		mFlags.set(FileSelectScreen_Decided);
		mAnimOpenDataWindow.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnimCloseDataWindow.stop();
		mAnimDecideDataWindow.stop();
	}
}

/**
 * @note Address: 0x803D812C
 * @note Size: 0x6C
 */
void TMainScreen::closeDataWindow()
{
	if (mFlags.isSet(FileSelectScreen_Decided)) {
		mFlags.unset(FileSelectScreen_Decided);
		mAnimOpenDataWindow.stop();
		mAnimCloseDataWindow.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnimDecideDataWindow.stop();
	}
}

/**
 * @note Address: 0x803D8198
 * @note Size: 0x6C
 */
void TMainScreen::decideDataWindow()
{
	if (mFlags.isSet(FileSelectScreen_Decided)) {
		mFlags.unset(FileSelectScreen_Decided);
		mAnimOpenDataWindow.stop();
		mAnimCloseDataWindow.stop();
		mAnimDecideDataWindow.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	}
}

/**
 * @note Address: 0x803D8204
 * @note Size: 0x24
 */
bool TMainScreen::isFinishCloseDataWindow()
{
	return mAnimCloseDataWindow.isFinish();
}

/**
 * @note Address: 0x803D8228
 * @note Size: 0x2A0
 */
void TMainScreen::openMSG(s32 mesgID)
{
	mFlags.set(FileSelectScreen_MsgOpen);
	u32 time        = 0.2f / sys->mDeltaTime;
	mMesgCounter    = time;
	mMesgCounterMax = time;

	switch (mesgID) {
	case MessageType_SelectAFile:
		// "Choose a Ship's Log."
		setMsgID_('5479_00', '5479_00', '5479_00');
		break;
	case MessageType_FileCorrupted:
		// "This Ship's Log is corrupted. Erase this Ship's Log?" "Yes" "No"
		setMsgID_('5485_00', '5486_00', '5487_00');
		inYesNo_();
		break;
	case MessageType_ErasingFile:
		// "Erasing the file... Do not touch the Memory Card in Slot A or the POWER Button."
		setMsgID_('5489_00', '5479_00', '5479_00');
		break;
	case MessageType_DoYouErase:
		// "Erase the contents of this Ship's Log?" "Yes" "No"
		setMsgID_('5492_00', '5493_00', '5494_00');
		inYesNo_();
		break;
	case MessageType_CopyWhere:
		// "Erase the contents of this Ship's Log?"
		setMsgID_('5505_00', '5479_00', '5479_00');
		break;
	case MessageType_FileDeleteFail:
		// "The file could not be erased."
		setMsgID_('5488_00', '5479_00', '5479_00');
		break;
	case MessageType_FileDeleted:
		// "The file has been erased."
		setMsgID_('5490_00', '5479_00', '5479_00');
		break;
	case MessageType_DoYouOverwrite:
		// "Copy over the contents of this Ship's Log?" "Yes" "No"
		setMsgID_('5495_00', '5496_00', '5497_00');
		inYesNo_();
		break;
	case MessageType_FileCopyFail:
		// "The file could not be copied."
		setMsgID_('5491_00', '5479_00', '5479_00');
		break;
	case MessageType_CopyingFile:
		// "Copying... Do not touch the Memory Card in Slot A or the POWER Button."
		setMsgID_('5498_00', '5479_00', '5479_00');
		break;
	case MessageType_FileCopied:
		// "The file has been copied."
		setMsgID_('5499_00', '5479_00', '5479_00');
		break;
	}
}

/**
 * @note Address: 0x803D84C8
 * @note Size: 0x60
 */
void TMainScreen::closeMSG()
{
	if (mFlags.isSet(FileSelectScreen_MsgOpen)) {
		mFlags.unset(FileSelectScreen_MsgOpen);
		u32 time        = 0.2f / sys->mDeltaTime;
		mMesgCounter    = time;
		mMesgCounterMax = time;
	}
	outYesNo_();
}

/**
 * @note Address: 0x803D8528
 * @note Size: 0x28
 */
bool TMainScreen::isFinishCloseMSG()
{
	if (!mFlags.isSet(FileSelectScreen_MsgOpen) && mMesgCounter == 0) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803D8550
 * @note Size: 0xC4
 */
void TMainScreen::setYesNo(bool isYes)
{
	if (isYes) {
		mBlinkFontYes.enable();
		mBlinkFontNo.disable();
		mPurupuru[0].mScaleMgr.up(0.2f, 30.0f, 0.6f, 0.0f);
	} else {
		mBlinkFontYes.disable();
		mBlinkFontNo.enable();
		mPurupuru[1].mScaleMgr.up(0.2f, 30.0f, 0.6f, 0.0f);
	}
}

/**
 * @note Address: 0x803D8614
 * @note Size: 0x144
 */
void TMainScreen::updateMsg_()
{
	if (mMesgCounter) {
		mMesgCounter--;
	}

	f32 calc;
	u8 alpha;
	if (mFlags.isSet(FileSelectScreen_MsgOpen)) {
		if (mMesgCounterMax) {
			calc = (f32)mMesgCounter / (f32)mMesgCounterMax;
		} else {
			calc = 0.0f;
		}
		alpha = (1.0f - calc) * 255.0f;
	} else {
		if (mMesgCounterMax) {
			calc = (f32)mMesgCounter / (f32)mMesgCounterMax;
		} else {
			calc = 0.0f;
		}
		alpha = calc * 255.0f;
	}
	J2DPane* mesg = E2DScreen_searchAssert(mMainScreen, 'NmainMG');
	E2DPane_setTreeInfluencedAlpha(mesg, true);
	mesg->setAlpha(alpha);
}

/**
 * @note Address: 0x803D8758
 * @note Size: 0x4C
 */
void TMainScreen::setMsgID_(u64 mesgMain, u64 mesgYes, u64 mesgNo)
{
	mPaneMesgYes->setMsgID(mesgYes);
	mPaneMesgYesShadow->setMsgID(mesgYes);

	mPaneMesgNo->setMsgID(mesgNo);
	mPaneMesgNoShadow->setMsgID(mesgNo);

	mPaneMesgMain->setMsgID(mesgMain);
	mPaneMesgMainShadow->setMsgID(mesgMain);
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x5C
//  */
// void FileSelect::TMainScreen::isFinishOutCopyErase()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x803D87A4
 * @note Size: 0x8C
 */
void TMainScreen::inCopyErase()
{
	if (!mFlags.isSet(FileSelectScreen_Copy)) {
		mFlags.set(FileSelectScreen_Copy);
		mAnimInCopyEraseA.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnimInCopyEraseB.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnimOutCopyEraseA.stop();
		mAnimOutCopyEraseB.stop();
	}
}

/**
 * @note Address: 0x803D8830
 * @note Size: 0x8C
 */
void TMainScreen::outCopyErase()
{
	if (mFlags.isSet(FileSelectScreen_Copy)) {
		mFlags.unset(FileSelectScreen_Copy);
		mAnimInCopyEraseA.stop();
		mAnimInCopyEraseB.stop();
		mAnimOutCopyEraseA.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnimOutCopyEraseB.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	}
}

/**
 * @note Address: 0x803D88BC
 * @note Size: 0x8C
 */
void TMainScreen::inYesNo_()
{
	if (!mFlags.isSet(FileSelectScreen_YesNoOpen)) {
		mFlags.set(FileSelectScreen_YesNoOpen);
		mAnimInYesNoA.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnimInYesNoB.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnimOutYesNoA.stop();
		mAnimOutYesNoB.stop();
	}
}

/**
 * @note Address: 0x803D8948
 * @note Size: 0x8C
 */
void TMainScreen::outYesNo_()
{
	if (mFlags.isSet(FileSelectScreen_YesNoOpen)) {
		mFlags.unset(FileSelectScreen_YesNoOpen);
		mAnimInYesNoA.stop();
		mAnimInYesNoB.stop();
		mAnimOutYesNoA.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnimOutYesNoB.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	}
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x5C
//  */
// void TMainScreen::isFinishOutYesNo_()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x803D89D4
 * @note Size: 0x1C0
 */
void TMainScreen::setDataBallCopyResult(s32 idFrom, s32 idTo)
{
	mFileData[idTo] = mFileData[idFrom];
	initDataBalls_();

	JUtility::TColor color = getDataBallColor_(idTo);
	Vector2f pos           = E2DPane_getGlbCenter(mPaneSel[0][idTo]);
	efx2d::ArgColor arg(pos, color);
	efx2d::FileSelect::T2DFilecopied efx;
	efx.create(&arg);

	PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
	mEfxFileSel[idTo]->setGlobalEnvColor(color);
	mEfxFileSelM[idTo]->setGlobalEnvColor(color);
}

/**
 * @note Address: 0x803D8B94
 * @note Size: 0x250
 */
void TMainScreen::setDataBallNew(s32 fileID)
{
	JUtility::TColor color = getDataBallColor_(fileID);
	Vector2f pos           = E2DPane_getGlbCenter(mPaneSel[0][fileID]);
	efx2d::ArgColor arg(pos, color);
	efx2d::FileSelect::T2DFiledelete efx;
	efx.create(&arg);

	Vector2f pos2 = E2DPane_getGlbCenter(mPaneSel[1][fileID]);
	efx2d::ArgColor arg2(pos2, color);
	efx2d::FileSelect::T2DFiledeleteM efx2;
	efx2.create(&arg2);

	PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
	mFileData[fileID].mIsNewFile    = true;
	mFileData[fileID].mIsBrokenFile = false;
	initDataBalls_();

	color = getDataBallColor_(fileID);
	mEfxFileSel[fileID]->setGlobalEnvColor(color);
	mEfxFileSelM[fileID]->setGlobalEnvColor(color);
}

/**
 * @note Address: 0x803D8DE4
 * @note Size: 0x98
 */
void TMainScreen::setDataBallBroken(s32 fileID)
{
	PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
	mFileData[fileID].mIsBrokenFile = true;
	initDataBalls_();
	JUtility::TColor color2 = getDataBallColor_(fileID);
	mEfxFileSel[fileID]->setGlobalEnvColor(color2);
	mEfxFileSelM[fileID]->setGlobalEnvColor(color2);
}

/**
 * @note Address: 0x803D8E7C
 * @note Size: 0x4C
 */
void TMainScreen::initDataBalls_()
{
	for (int i = 0; i < 3; i++) {
		setColorTimgDataBall_(i);
	}
}

/**
 * @note Address: 0x803D8EC8
 * @note Size: 0x550
 * @note TODO: Finish matching
 */
void TMainScreen::setColorTimgDataBall_(s32 fileID)
{
	/* NON-MATCHING */
	if (mFileData[fileID].mIsBrokenFile) {
		ResTIMG* time = mPanePdc[fileID]->changeTexture("break_new_icon.bti", 0);
		P2ASSERTLINE(1363, time);

		time = mPaneMdc[fileID]->changeTexture("break_new_icon.bti", 0);
		P2ASSERTLINE(1367, time);

		mPaneSelE0[fileID]->hide();
		mPaneSelE1[fileID]->hide();

		P2ASSERTLINE(1373, mCounterDay[fileID]);
		mCounterDay[fileID]->hide();

		P2ASSERTLINE(1375, mCounterDayM[fileID]);
		mCounterDayM[fileID]->hide();
	} else if (mFileData[fileID].mIsNewFile) {
		ResTIMG* time = mPanePdc[fileID]->changeTexture("new_icon.bti", 0);
		P2ASSERTLINE(1382, time);

		time = mPaneMdc[fileID]->changeTexture("new_icon.bti", 0);
		P2ASSERTLINE(1386, time);

		mPaneSelE0[fileID]->hide();
		mPaneSelE1[fileID]->hide();

		P2ASSERTLINE(1392, mCounterDay[fileID]);
		mCounterDay[fileID]->hide();

		P2ASSERTLINE(1394, mCounterDayM[fileID]);
		mCounterDayM[fileID]->hide();
	} else {
		ResTIMG* time = mPanePdc[fileID]->changeTexture("dicon_icon.bti", 0);
		P2ASSERTLINE(1400, time);

		time = mPaneMdc[fileID]->changeTexture("dicon_icon.bti", 0);
		P2ASSERTLINE(1404, time);

		mPaneSelE0[fileID]->show();
		mPaneSelE1[fileID]->show();

		mCounterDay[fileID]->show();
		mCounterDayM[fileID]->show();
	}

	JUtility::TColor color = getDataBallColor_(fileID);

	int r = 1023.0f * color.r / 255.0f;
	int g = 1023.0f * color.g / 255.0f;
	int b = 1023.0f * color.b / 255.0f;
	J2DGXColorS10 newColor(r, g, b, color.a);

	setTevColor(mPaneIconColorA[fileID]->getMaterial()->mTevBlock, newColor);
	setTevColor(mPaneIconColorB[fileID]->getMaterial()->mTevBlock, newColor);

	setTevColor(mPaneSelE0[fileID]->getMaterial()->mTevBlock, newColor);
	setTevColor(mPaneSelE1[fileID]->getMaterial()->mTevBlock, newColor);
}

/**
 * @note Address: 0x803D9418
 * @note Size: 0xCC
 */
JUtility::TColor TMainScreen::getDataBallColor_(s32 fileID)
{
	P2ASSERTBOUNDSLINE(1445, 0, fileID, 3);

	int blues   = getFileData(fileID)->mBluePikis;
	int reds    = getFileData(fileID)->mRedPikis;
	int yellows = getFileData(fileID)->mYellowPikis;
	int purples = getFileData(fileID)->mPurplePikis;
	int whites  = getFileData(fileID)->mWhitePikis;

	if (getFileData(fileID)->mIsNewFile || getFileData(fileID)->mIsBrokenFile) {
		blues   = 0;
		reds    = 0;
		yellows = 0;
		purples = 0;
		whites  = 0;
	}

	return calcDataBallColor_(blues, reds, yellows, purples, whites);
}

/**
 * @note Address: 0x803D94E4
 * @note Size: 0x1C0
 */
JUtility::TColor TMainScreen::calcDataBallColor_(u32 blue, u32 red, u32 yellow, u32 purple, u32 white)
{
	u32 total = blue + red + yellow + purple + white + 1;
	u32 type  = 1;
	if (type < red) {
		type = red;
	}
	if (type < blue) {
		type = blue;
	}
	if (type < yellow) {
		type = yellow;
	}

	f32 mod = (f32(white) - f32(purple)) * 60.0f;

	f32 r = 190.0f * (f32(red) / f32(type));
	f32 g = 190.0f * (f32(yellow) / f32(type));
	f32 b = 190.0f * (f32(blue) / f32(type));

	f32 offset = mod / f32(total);
	r += offset;
	g += offset;
	b += offset;

	if (r > 255.0f) {
		r = 255.0f;
	}
	if (g > 255.0f) {
		g = 255.0f;
	}
	if (b > 255.0f) {
		b = 255.0f;
	}
	if (r < 0.0f) {
		r = 0.0f;
	}
	if (g < 0.0f) {
		g = 0.0f;
	}
	if (b < 0.0f) {
		b = 0.0f;
	}

	JUtility::TColor color;
	color.set(r, g, b, 255);
	return color;
}

/**
 * @note Address: 0x803D96A4
 * @note Size: 0x80
 */
void TMainScreen::setIconColorAlpha_(u8 alpha)
{
	for (int i = 0; i < 3; i++) {
		mPaneIconColorA[i]->setAlpha(alpha);
		mPaneIconColorB[i]->setAlpha(alpha);
	}
}

} // namespace FileSelect
} // namespace Screen
} // namespace ebi
