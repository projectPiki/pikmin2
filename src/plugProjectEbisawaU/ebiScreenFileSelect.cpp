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

/*  * --INFO--
 * Address:	........
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	........
 * Size:	000130
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

/*
 * --INFO--
 * Address:	........
 * Size:	0002E4
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

/*
 * --INFO--
 * Address:	803D4244
 * Size:	000254
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

/*
 * --INFO--
 * Address:	803D4498
 * Size:	000EB0
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

/*
 * --INFO--
 * Address:	803D5348
 * Size:	0000B0
 */
void TMainScreen::loadResource()
{
	sys->heapStatusStart("TScreenFileSelect::loadResource", nullptr);
	char path[256];
	og::newScreen::makeLanguageResName(path, "file_select.szs");
	JKRArchive* arc = JKRArchive::mount(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(255, arc);
	sys->heapStatusEnd("TScreenFileSelect::loadResource");
	setArchive(arc);
}

/*
 * --INFO--
 * Address:	803D53F8
 * Size:	0012E4
 */
void TMainScreen::doSetArchive(JKRArchive* arc)
{
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
	mAnimOutYesNoA.loadAnm("file_select.bck", arc, 420, 546);
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

	void* file = JKRDvdRipper::loadToMainRAM("user/Ebisawa/effect/eff2d_file_select.jpc", nullptr, Switch_0, 0, nullptr,
	                                         JKRDvdRipper::ALLOC_DIR_TOP, 0, nullptr, nullptr);
	P2ASSERTLINE(518, file);
	mParticleResource = new JPAResourceManager(file, JKRGetCurrentHeap());

	sys->heapStatusEnd("TScreenFileSelect::setArchive");
	/*
stwu     r1, -0x60(r1)
mflr     r0
lis      r5, lbl_80496AE8@ha
stw      r0, 0x64(r1)
stmw     r26, 0x48(r1)
mr       r31, r3
addi     r29, r5, lbl_80496AE8@l
mr       r30, r4
li       r5, 0
addi     r4, r29, 0xf4
lwz      r3, sys@sda21(r13)
bl       heapStatusStart__6SystemFPcP7JKRHeap
lwz      r3, sys@sda21(r13)
addi     r4, r29, 0x114
li       r5, 0
bl       heapStatusStart__6SystemFPcP7JKRHeap
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803D5450
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_803D5450:
stw      r0, 0xc(r31)
mr       r6, r30
addi     r4, r29, 0x13c
lis      r5, 0x110
lwz      r3, 0xc(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, sys@sda21(r13)
addi     r4, r29, 0x114
bl       heapStatusEnd__6SystemFPc
lwz      r3, sys@sda21(r13)
addi     r4, r29, 0x14
li       r5, 0
bl       heapStatusStart__6SystemFPcP7JKRHeap
li       r3, 0x138
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803D549C
bl       __ct__Q29P2DScreen3MgrFv
mr       r0, r3

lbl_803D549C:
stw      r0, 0xba0(r31)
mr       r6, r30
addi     r4, r29, 0x3c
lis      r5, 0x110
lwz      r3, 0xba0(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, sys@sda21(r13)
addi     r4, r29, 0x14
bl       heapStatusEnd__6SystemFPc
lwz      r3, sys@sda21(r13)
addi     r4, r29, 0x54
li       r5, 0
bl       heapStatusStart__6SystemFPcP7JKRHeap
lwz      r3, 0xba0(r31)
mr       r4, r3
bl       E2DPane_setTreeCallBackMessage__3ebiFPQ29P2DScreen3MgrP7J2DPane
lwz      r3, sys@sda21(r13)
addi     r4, r29, 0x54
bl       heapStatusEnd__6SystemFPc
lwz      r3, sys@sda21(r13)
addi     r4, r29, 0x14
li       r5, 0
bl       heapStatusStart__6SystemFPcP7JKRHeap
li       r3, 0x138
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803D5510
bl       __ct__Q29P2DScreen3MgrFv
mr       r0, r3

lbl_803D5510:
stw      r0, 0xba8(r31)
mr       r6, r30
addi     r4, r29, 0xac
lis      r5, 0x110
lwz      r3, 0xba8(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, sys@sda21(r13)
addi     r4, r29, 0x14
bl       heapStatusEnd__6SystemFPc
lwz      r3, sys@sda21(r13)
addi     r4, r29, 0x54
li       r5, 0
bl       heapStatusStart__6SystemFPcP7JKRHeap
lwz      r3, 0xba8(r31)
mr       r4, r3
bl       E2DPane_setTreeCallBackMessage__3ebiFPQ29P2DScreen3MgrP7J2DPane
lwz      r3, sys@sda21(r13)
addi     r4, r29, 0x54
bl       heapStatusEnd__6SystemFPc
addi     r0, r31, 0xbb8
lis      r3, 0x6C6E3031@ha
stw      r0, 8(r1)
li       r5, 0xa
li       r4, 1
li       r0, 0
stw      r5, 0xc(r1)
addi     r6, r3, 0x6C6E3031@l
addi     r8, r3, 0x3032
addi     r10, r3, 0x3035
stw      r4, 0x10(r1)
li       r5, 0x50
li       r7, 0x50
li       r9, 0x50
stw      r0, 0x14(r1)
stw      r30, 0x18(r1)
lwz      r3, 0xba8(r31)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
addi     r0, r31, 0xbbc
lis      r3, 0x74723031@ha
stw      r0, 8(r1)
li       r5, 3
li       r4, 1
li       r0, 0
stw      r5, 0xc(r1)
addi     r6, r3, 0x74723031@l
addi     r8, r3, 0x3032
addi     r10, r3, 0x3033
stw      r4, 0x10(r1)
li       r5, 0x50
li       r7, 0x50
li       r9, 0x50
stw      r0, 0x14(r1)
stw      r30, 0x18(r1)
lwz      r3, 0xba8(r31)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
stw      r3, 0xbac(r31)
lis      r3, 0x72743031@ha
addi     r0, r31, 0xbc0
li       r5, 3
stw      r0, 8(r1)
li       r4, 1
li       r0, 0
addi     r6, r3, 0x72743031@l
stw      r5, 0xc(r1)
addi     r8, r3, 0x3032
addi     r10, r3, 0x3033
li       r5, 0x5074
stw      r4, 0x10(r1)
li       r7, 0x5074
li       r9, 0x5074
stw      r0, 0x14(r1)
stw      r30, 0x18(r1)
lwz      r3, 0xba8(r31)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
stw      r3, 0xbb0(r31)
lis      r4, 0x72325F31@ha
addi     r0, r31, 0xbd0
lis      r3, 0x50667231@ha
stw      r0, 8(r1)
li       r0, 3
addi     r6, r4, 0x72325F31@l
addi     r8, r4, 0x5f32
stw      r0, 0xc(r1)
addi     r10, r3, 0x50667231@l
li       r5, 0x5066
li       r7, 0x5066
stw      r30, 0x10(r1)
li       r9, 0
lwz      r3, 0xba8(r31)
bl
setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
addi     r0, r31, 0xbc4
lis      r4, 0x6D653031@ha
stw      r0, 8(r1)
li       r0, 5
lis      r3, 0x00507469@ha
li       r7, 1
stw      r0, 0xc(r1)
addi     r5, r3, 0x00507469@l
li       r0, 0
addi     r6, r4, 0x6D653031@l
stw      r7, 0x10(r1)
mr       r7, r5
mr       r9, r5
addi     r8, r4, 0x3032
stw      r0, 0x14(r1)
addi     r10, r4, 0x3033
stw      r30, 0x18(r1)
lwz      r3, 0xba8(r31)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
addi     r0, r31, 0xbc8
lis      r4, 0x656D3032@ha
stw      r0, 8(r1)
li       r6, 2
lis      r3, 0x5074696D@ha
addi     r8, r4, 0x656D3032@l
stw      r6, 0xc(r1)
addi     r5, r3, 0x5074696D@l
li       r0, 0
mr       r10, r8
stw      r6, 0x10(r1)
mr       r7, r5
mr       r9, r5
addi     r6, r4, 0x3031
stw      r0, 0x14(r1)
stw      r30, 0x18(r1)
lwz      r3, 0xba8(r31)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
li       r4, 0xff
bl       setZeroAlpha__Q32og6Screen18CallBack_CounterRVFUc
lis      r4, 0x6C6E3033@ha
lwz      r3, 0xba8(r31)
addi     r6, r4, 0x6C6E3033@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lis      r4, 0x6C6E3034@ha
lwz      r3, 0xba8(r31)
addi     r6, r4, 0x6C6E3034@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
li       r28, 0
li       r0, 0xc9
stw      r28, 0xbb8(r31)
stw      r28, 0xbbc(r31)
stw      r0, 0xbc0(r31)
stw      r28, 0xbc4(r31)
stw      r28, 0xbc8(r31)
stw      r28, 0xbcc(r31)
stw      r28, 0xbd0(r31)
lwz      r27, 0xc(r31)
lhz      r26, 0x102(r27)
b        lbl_803D57A8

lbl_803D5794:
mr       r3, r27
mr       r4, r28
bl       getMaterial__9J2DScreenFUs
bl       makeAnmPointer__11J2DMaterialFv
addi     r28, r28, 1

lbl_803D57A8:
clrlwi   r0, r28, 0x10
cmplw    r0, r26
blt      lbl_803D5794
lis      r4, 0x00545F79@ha
lwz      r3, 0xc(r31)
addi     r6, r4, 0x00545F79@l
li       r5, 0
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x98(r31)
lis      r3, 0x54735F79@ha
addi     r6, r3, 0x54735F79@l
li       r5, 0
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x9c(r31)
lis      r3, 0x00545F6E@ha
addi     r6, r3, 0x00545F6E@l
li       r5, 0
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xa0(r31)
lis      r3, 0x54735F6E@ha
addi     r6, r3, 0x54735F6E@l
li       r5, 0
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xa4(r31)
lis      r3, 0x54627430@ha
addi     r6, r3, 0x54627430@l
li       r5, 0
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xa8(r31)
lis      r3, 0x62743073@ha
addi     r6, r3, 0x62743073@l
li       r5, 0x54
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xac(r31)
lis      r3, 0x54627431@ha
addi     r6, r3, 0x54627431@l
li       r5, 0
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xb0(r31)
lis      r3, 0x62743173@ha
addi     r6, r3, 0x62743173@l
li       r5, 0x54
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xb4(r31)
lis      r3, 0x546D7367@ha
addi     r6, r3, 0x546D7367@l
li       r5, 0
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xb8(r31)
lis      r3, 0x6D736773@ha
addi     r6, r3, 0x6D736773@l
li       r5, 0x54
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xbc(r31)
lis      r3, 0x004E4431@ha
addi     r6, r3, 0x004E4431@l
li       r5, 0
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x10(r31)
lis      r3, 0x004E4432@ha
addi     r6, r3, 0x004E4432@l
li       r5, 0
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x14(r31)
lis      r3, 0x004E4433@ha
addi     r6, r3, 0x004E4433@l
li       r5, 0
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x18(r31)
lis      r3, 0x61746177@ha
addi     r6, r3, 0x61746177@l
li       r5, 0x4e64
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x1c(r31)
lis      r5, 0x656C4530@ha
lis      r4, 0x50643173@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x656C4530@l
addi     r5, r4, 0x50643173@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x38(r31)
lis      r5, 0x656C4530@ha
lis      r4, 0x50643273@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x656C4530@l
addi     r5, r4, 0x50643273@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x3c(r31)
lis      r5, 0x656C4530@ha
lis      r4, 0x50643373@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x656C4530@l
addi     r5, r4, 0x50643373@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x40(r31)
lis      r5, 0x73654531@ha
lis      r4, 0x506D6431@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x73654531@l
addi     r5, r4, 0x506D6431@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x44(r31)
lis      r5, 0x73654531@ha
lis      r4, 0x506D6432@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x73654531@l
addi     r5, r4, 0x506D6432@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x48(r31)
lis      r5, 0x73654531@ha
lis      r4, 0x506D6433@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x73654531@l
addi     r5, r4, 0x506D6433@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x4c(r31)
lis      r3, 0x50643163@ha
addi     r6, r3, 0x50643163@l
li       r5, 0
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x50(r31)
lis      r3, 0x50643263@ha
addi     r6, r3, 0x50643263@l
li       r5, 0
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x54(r31)
lis      r3, 0x50643363@ha
addi     r6, r3, 0x50643363@l
li       r5, 0
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x58(r31)
lis      r3, 0x6D643163@ha
addi     r6, r3, 0x6D643163@l
li       r5, 0x50
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x5c(r31)
lis      r3, 0x6D643263@ha
addi     r6, r3, 0x6D643263@l
li       r5, 0x50
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x60(r31)
lis      r3, 0x6D643363@ha
addi     r6, r3, 0x6D643363@l
li       r5, 0x50
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x64(r31)
lis      r5, 0x70696B61@ha
lis      r4, 0x00506431@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x70696B61@l
addi     r5, r4, 0x00506431@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x68(r31)
lis      r5, 0x70696B61@ha
lis      r4, 0x00506432@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x70696B61@l
addi     r5, r4, 0x00506432@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x6c(r31)
lis      r5, 0x70696B61@ha
lis      r4, 0x5064335F@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x70696B61@l
addi     r5, r4, 0x5064335F@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x70(r31)
lis      r5, 0x70696B61@ha
lis      r4, 0x506D6431@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x70696B61@l
addi     r5, r4, 0x506D6431@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x74(r31)
lis      r5, 0x70696B61@ha
lis      r4, 0x506D6432@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x70696B61@l
addi     r5, r4, 0x506D6432@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x78(r31)
lis      r5, 0x70696B61@ha
lis      r4, 0x506D6433@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x70696B61@l
addi     r5, r4, 0x506D6433@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x7c(r31)
lis      r3, 0x3173656C@ha
addi     r6, r3, 0x3173656C@l
li       r5, 0x5064
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x20(r31)
lis      r5, 0x3173656C@ha
lis      r4, 0x00506D64@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x3173656C@l
addi     r5, r4, 0x00506D64@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x2c(r31)
lis      r3, 0x3273656C@ha
addi     r6, r3, 0x3273656C@l
li       r5, 0x5064
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x24(r31)
lis      r5, 0x3273656C@ha
lis      r4, 0x00506D64@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x3273656C@l
addi     r5, r4, 0x00506D64@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x30(r31)
lis      r3, 0x3373656C@ha
addi     r6, r3, 0x3373656C@l
li       r5, 0x5064
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x28(r31)
lis      r5, 0x3373656C@ha
lis      r4, 0x00506D64@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x3373656C@l
addi     r5, r4, 0x00506D64@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x34(r31)
lis      r5, 0x7364316C@ha
lis      r4, 0x0050706F@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x7364316C@l
addi     r5, r4, 0x0050706F@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x80(r31)
lis      r5, 0x73643172@ha
lis      r4, 0x0050706F@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x73643172@l
addi     r5, r4, 0x0050706F@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x8c(r31)
lis      r5, 0x7364326C@ha
lis      r4, 0x0050706F@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x7364326C@l
addi     r5, r4, 0x0050706F@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x84(r31)
lis      r5, 0x73643272@ha
lis      r4, 0x0050706F@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x73643272@l
addi     r5, r4, 0x0050706F@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x90(r31)
lis      r5, 0x7364336C@ha
lis      r4, 0x0050706F@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x7364336C@l
addi     r5, r4, 0x0050706F@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x88(r31)
lis      r5, 0x73643372@ha
lis      r4, 0x0050706F@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x73643372@l
addi     r5, r4, 0x0050706F@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x94(r31)
lis      r3, 0x54636F6C@ha
addi     r6, r3, 0x54636F6C@l
li       r5, 0
lwz      r3, 0xc(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r27, r3
addi     r3, r1, 0x38
lwz      r0, 0x104(r27)
mr       r4, r27
stw      r0, 0x30(r1)
lbz      r5, 0x30(r1)
lbz      r0, 0x31(r1)
stb      r5, 0xc0(r31)
lbz      r5, 0x32(r1)
stb      r0, 0xc1(r31)
lbz      r0, 0x33(r1)
stb      r5, 0xc2(r31)
stb      r0, 0xc3(r31)
lwz      r0, 0x108(r27)
stw      r0, 0x34(r1)
lbz      r5, 0x34(r1)
lbz      r0, 0x35(r1)
stb      r5, 0xc4(r31)
lbz      r5, 0x36(r1)
stb      r0, 0xc5(r31)
lbz      r0, 0x37(r1)
stb      r5, 0xc6(r31)
stb      r0, 0xc7(r31)
lwz      r12, 0(r27)
lwz      r12, 0xb4(r12)
mtctr    r12
bctrl
lbz      r0, 0x38(r1)
mr       r4, r27
addi     r3, r1, 0x3c
stb      r0, 0xc8(r31)
lbz      r0, 0x39(r1)
stb      r0, 0xc9(r31)
lbz      r0, 0x3a(r1)
stb      r0, 0xca(r31)
lbz      r0, 0x3b(r1)
stb      r0, 0xcb(r31)
lwz      r12, 0(r27)
lwz      r12, 0xb0(r12)
mtctr    r12
bctrl
lbz      r0, 0x3c(r1)
addi     r3, r1, 0x28
stb      r0, 0xcc(r31)
lbz      r0, 0x3d(r1)
stb      r0, 0xcd(r31)
lbz      r0, 0x3e(r1)
stb      r0, 0xce(r31)
lbz      r0, 0x3f(r1)
stb      r0, 0xcf(r31)
lwz      r27, 0xa0(r31)
lwz      r0, 0x104(r27)
mr       r4, r27
stw      r0, 0x20(r1)
lbz      r5, 0x20(r1)
lbz      r0, 0x21(r1)
stb      r5, 0xd0(r31)
lbz      r5, 0x22(r1)
stb      r0, 0xd1(r31)
lbz      r0, 0x23(r1)
stb      r5, 0xd2(r31)
stb      r0, 0xd3(r31)
lwz      r0, 0x108(r27)
stw      r0, 0x24(r1)
lbz      r5, 0x24(r1)
lbz      r0, 0x25(r1)
stb      r5, 0xd4(r31)
lbz      r5, 0x26(r1)
stb      r0, 0xd5(r31)
lbz      r0, 0x27(r1)
stb      r5, 0xd6(r31)
stb      r0, 0xd7(r31)
lwz      r12, 0(r27)
lwz      r12, 0xb4(r12)
mtctr    r12
bctrl
lbz      r0, 0x28(r1)
mr       r4, r27
addi     r3, r1, 0x2c
stb      r0, 0xd8(r31)
lbz      r0, 0x29(r1)
stb      r0, 0xd9(r31)
lbz      r0, 0x2a(r1)
stb      r0, 0xda(r31)
lbz      r0, 0x2b(r1)
stb      r0, 0xdb(r31)
lwz      r12, 0(r27)
lwz      r12, 0xb0(r12)
mtctr    r12
bctrl
lbz      r0, 0x2c(r1)
mr       r26, r31
li       r27, 0
stb      r0, 0xdc(r31)
lbz      r0, 0x2d(r1)
stb      r0, 0xdd(r31)
lbz      r0, 0x2e(r1)
stb      r0, 0xde(r31)
lbz      r0, 0x2f(r1)
stb      r0, 0xdf(r31)

lbl_803D5DCC:
lwz      r3, 0x80(r26)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x8c(r26)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r27, r27, 1
addi     r26, r26, 4
cmpwi    r27, 3
blt      lbl_803D5DCC
lis      r4, 0x70656E31@ha
lwz      r3, 0xc(r31)
addi     r6, r4, 0x70656E31@l
li       r5, 0x506f
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
li       r0, 1
lis      r5, 0x656E7031@ha
stb      r0, 0xb0(r3)
lis      r4, 0x00506F70@ha
addi     r6, r5, 0x656E7031@l
lwz      r3, 0xc(r31)
addi     r5, r4, 0x00506F70@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
li       r0, 1
lis      r4, 0x395F3030@ha
addi     r6, r4, 0x395F3030@l
lis      r4, 0x00353437@ha
addi     r5, r4, 0x00353437@l
stb      r0, 0xb0(r3)
mr       r3, r31
mr       r8, r6
mr       r7, r5
mr       r10, r6
mr       r9, r5
bl       setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx
lwz      r3, sys@sda21(r13)
addi     r4, r29, 0x54
li       r5, 0
bl       heapStatusStart__6SystemFPcP7JKRHeap
lwz      r3, 0xc(r31)
mr       r4, r3
bl       E2DPane_setTreeCallBackMessage__3ebiFPQ29P2DScreen3MgrP7J2DPane
lwz      r3, sys@sda21(r13)
addi     r4, r29, 0x54
bl       heapStatusEnd__6SystemFPc
lwz      r3, 0xc(r31)
addi     r5, r31, 0xe0
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0xc(r31)
addi     r5, r31, 0x11c
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
mr       r26, r31
mr       r27, r31
li       r28, 0

lbl_803D5EC4:
lwz      r3, 0xc(r31)
addi     r5, r26, 0x158
lwz      r4, 0x38(r27)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0xc(r31)
addi     r5, r26, 0x20c
lwz      r4, 0x44(r27)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
addi     r28, r28, 1
addi     r27, r27, 4
cmpwi    r28, 3
addi     r26, r26, 0x3c
blt      lbl_803D5EC4
lwz      r3, 0xc(r31)
addi     r5, r31, 0x2c0
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0xc(r31)
addi     r5, r31, 0x2fc
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0xc(r31)
addi     r5, r31, 0x338
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0xc(r31)
addi     r5, r31, 0x374
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
mr       r26, r31
mr       r27, r31
li       r28, 0

lbl_803D5F44:
lwz      r3, 0xc(r31)
addi     r5, r26, 0x3b0
lwz      r4, 0x10(r27)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0xc(r31)
addi     r5, r26, 0x464
lwz      r4, 0x10(r27)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0xc(r31)
addi     r5, r26, 0x518
lwz      r4, 0x10(r27)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
addi     r28, r28, 1
addi     r27, r27, 4
cmpwi    r28, 3
addi     r26, r26, 0x3c
blt      lbl_803D5F44
lis      r5, 0x70627430@ha
lis      r4, 0x004E6772@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x70627430@l
addi     r5, r4, 0x004E6772@l
addi     r7, r31, 0x5cc
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r5, 0x70627430@ha
lis      r4, 0x004E6772@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x70627430@l
addi     r5, r4, 0x004E6772@l
addi     r7, r31, 0x644
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r5, 0x70627431@ha
lis      r4, 0x004E6772@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x70627431@l
addi     r5, r4, 0x004E6772@l
addi     r7, r31, 0x608
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r5, 0x70627431@ha
lis      r4, 0x004E6772@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x70627431@l
addi     r5, r4, 0x004E6772@l
addi     r7, r31, 0x680
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r4, 0x004E5F79@ha
lwz      r3, 0xc(r31)
addi     r6, r4, 0x004E5F79@l
addi     r7, r31, 0x6bc
li       r5, 0
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r4, 0x004E5F79@ha
lwz      r3, 0xc(r31)
addi     r6, r4, 0x004E5F79@l
addi     r7, r31, 0x734
li       r5, 0
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r4, 0x004E5F6E@ha
lwz      r3, 0xc(r31)
addi     r6, r4, 0x004E5F6E@l
addi     r7, r31, 0x6f8
li       r5, 0
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r4, 0x004E5F6E@ha
lwz      r3, 0xc(r31)
addi     r6, r4, 0x004E5F6E@l
addi     r7, r31, 0x770
li       r5, 0
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r5, 0x696E4D47@ha
lis      r4, 0x004E6D61@ha
lwz      r3, 0xc(r31)
addi     r6, r5, 0x696E4D47@l
addi     r5, r4, 0x004E6D61@l
addi     r7, r31, 0x7ac
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r4, 0x61746177@ha
lwz      r3, 0xc(r31)
addi     r6, r4, 0x61746177@l
addi     r7, r31, 0x7e8
li       r5, 0x4e64
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r4, 0x61746177@ha
lwz      r3, 0xc(r31)
addi     r6, r4, 0x61746177@l
addi     r7, r31, 0x824
li       r5, 0x4e64
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r4, 0x61746177@ha
lwz      r3, 0xc(r31)
addi     r6, r4, 0x61746177@l
addi     r7, r31, 0x860
li       r5, 0x4e64
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lwz      r3, 0xc(r31)
addi     r5, r31, 0x89c
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
addi     r26, r31, 0xb04
lis      r3, 0x316E6F72@ha
stw      r26, 8(r1)
li       r0, 6
addi     r6, r3, 0x316E6F72@l
addi     r8, r3, 0x6f6c
stw      r0, 0xc(r1)
addi     r10, r3, 0x6f63
li       r5, 0x5064
li       r7, 0x5064
stw      r30, 0x10(r1)
li       r9, 0x5064
lwz      r3, 0xc(r31)
bl
setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
stw      r3, 0x9d4(r31)
lis      r4, 0x316E6F72@ha
lis      r3, 0x00506D64@ha
li       r0, 6
stw      r26, 8(r1)
addi     r5, r3, 0x00506D64@l
mr       r7, r5
addi     r6, r4, 0x316E6F72@l
stw      r0, 0xc(r1)
mr       r9, r5
addi     r8, r4, 0x6f6c
addi     r10, r4, 0x6f63
stw      r30, 0x10(r1)
lwz      r3, 0xc(r31)
bl
setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
stw      r3, 0x9e0(r31)
lis      r3, 0x326E6F72@ha
addi     r26, r31, 0xb38
li       r0, 6
stw      r26, 8(r1)
addi     r6, r3, 0x326E6F72@l
addi     r8, r3, 0x6f6c
addi     r10, r3, 0x6f63
stw      r0, 0xc(r1)
li       r5, 0x5064
li       r7, 0x5064
li       r9, 0x5064
stw      r30, 0x10(r1)
lwz      r3, 0xc(r31)
bl
setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
stw      r3, 0x9d8(r31)
lis      r4, 0x326E6F72@ha
lis      r3, 0x00506D64@ha
li       r0, 6
stw      r26, 8(r1)
addi     r5, r3, 0x00506D64@l
mr       r7, r5
addi     r6, r4, 0x326E6F72@l
stw      r0, 0xc(r1)
mr       r9, r5
addi     r8, r4, 0x6f6c
addi     r10, r4, 0x6f63
stw      r30, 0x10(r1)
lwz      r3, 0xc(r31)
bl
setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
stw      r3, 0x9e4(r31)
lis      r3, 0x336E6F72@ha
addi     r26, r31, 0xb6c
li       r0, 6
stw      r26, 8(r1)
addi     r6, r3, 0x336E6F72@l
addi     r8, r3, 0x6f6c
addi     r10, r3, 0x6f63
stw      r0, 0xc(r1)
li       r5, 0x5064
li       r7, 0x5064
li       r9, 0x5064
stw      r30, 0x10(r1)
lwz      r3, 0xc(r31)
bl
setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
stw      r3, 0x9dc(r31)
lis      r4, 0x336E6F72@ha
lis      r3, 0x00506D64@ha
li       r0, 6
stw      r26, 8(r1)
addi     r5, r3, 0x00506D64@l
mr       r7, r5
addi     r6, r4, 0x336E6F72@l
stw      r0, 0xc(r1)
mr       r9, r5
addi     r8, r4, 0x6f6c
addi     r10, r4, 0x6f63
stw      r30, 0x10(r1)
lwz      r3, 0xc(r31)
bl
setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
stw      r3, 0x9e8(r31)
addi     r5, r31, 0x8bc
lwz      r3, 0xc(r31)
lwz      r4, 0x98(r31)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0xc(r31)
addi     r5, r31, 0x908
lwz      r4, 0xa0(r31)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
addi     r3, r31, 0x8bc
addi     r4, r31, 0xd0
addi     r5, r31, 0xc0
bl
set__Q23ebi26E2DCallBack_BlinkFontColorFRQ23ebi16E2DFullFontColorRQ23ebi16E2DFullFontColor
addi     r3, r31, 0x908
addi     r4, r31, 0xd0
addi     r5, r31, 0xc0
bl
set__Q23ebi26E2DCallBack_BlinkFontColorFRQ23ebi16E2DFullFontColorRQ23ebi16E2DFullFontColor
lis      r4, 0x004E5F79@ha
lwz      r3, 0xc(r31)
addi     r6, r4, 0x004E5F79@l
addi     r7, r31, 0x954
li       r5, 0
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r4, 0x004E5F6E@ha
lwz      r3, 0xc(r31)
addi     r6, r4, 0x004E5F6E@l
addi     r7, r31, 0x994
li       r5, 0
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r5, r30
addi     r3, r31, 0xe0
addi     r4, r29, 0x14c
li       r6, 0
li       r7, 0x50
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x3b0
addi     r4, r29, 0x14c
li       r6, 0x50
li       r7, 0x6a
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x464
addi     r4, r29, 0x14c
li       r6, 0x82
li       r7, 0xa4
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x518
addi     r4, r29, 0x14c
li       r6, 0x1a4
li       r7, 0x1c8
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x3ec
addi     r4, r29, 0x14c
li       r6, 0x88
li       r7, 0xa9
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x4a0
addi     r4, r29, 0x14c
li       r6, 0xd1
li       r7, 0xeb
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x554
addi     r4, r29, 0x14c
li       r6, 0x1a4
li       r7, 0x1c8
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x428
addi     r4, r29, 0x14c
li       r6, 0xd7
li       r7, 0xf8
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x4dc
addi     r4, r29, 0x14c
li       r6, 0x135
li       r7, 0x14c
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x590
addi     r4, r29, 0x14c
li       r6, 0x1a4
li       r7, 0x1c8
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x5cc
addi     r4, r29, 0x14c
li       r6, 0x5a
li       r7, 0x6a
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x608
addi     r4, r29, 0x14c
li       r6, 0x5a
li       r7, 0x6a
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x644
addi     r4, r29, 0x14c
li       r6, 0x121
li       r7, 0x130
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x680
addi     r4, r29, 0x14c
li       r6, 0x121
li       r7, 0x130
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x6bc
addi     r4, r29, 0x14c
li       r6, 0x208
li       r7, 0x21f
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x6f8
addi     r4, r29, 0x14c
li       r6, 0x208
li       r7, 0x21f
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x734
addi     r4, r29, 0x14c
li       r6, 0x1a4
li       r7, 0x1c8
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x770
addi     r4, r29, 0x14c
li       r6, 0x2d0
li       r7, 0x2dd
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x7ac
addi     r4, r29, 0x14c
li       r6, 0x50
li       r7, 0x5c
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x7e8
addi     r4, r29, 0x14c
li       r6, 0x50
li       r7, 0x5a
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x824
addi     r4, r29, 0x14c
li       r6, 0x8a
li       r7, 0x92
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x860
addi     r4, r29, 0x14c
li       r6, 0x1b6
li       r7, 0x1d4
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r31, 0x11c
addi     r4, r29, 0x15c
li       r6, 0
li       r7, 0x50
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r31, 0x158
addi     r4, r29, 0x16c
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r31, 0x194
addi     r4, r29, 0x16c
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r31, 0x1d0
addi     r4, r29, 0x16c
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r31, 0x20c
addi     r4, r29, 0x16c
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r31, 0x248
addi     r4, r29, 0x16c
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r31, 0x284
addi     r4, r29, 0x16c
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r31, 0x2c0
addi     r4, r29, 0x180
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r31, 0x2fc
addi     r4, r29, 0x194
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r31, 0x338
addi     r4, r29, 0x1a4
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r31, 0x374
addi     r4, r29, 0x1b8
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
li       r27, 0
mr       r26, r31

lbl_803D65EC:
lwz      r3, 0x18c(r26)
lwz      r4, 0xc(r31)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r3, 0x240(r26)
lwz      r4, 0xc(r31)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
addi     r27, r27, 1
addi     r26, r26, 0x3c
cmpwi    r27, 3
blt      lbl_803D65EC
lwz      r3, 0x1c(r31)
li       r4, 1
bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
lwz      r3, 0x1c(r31)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
li       r0, 0
addi     r3, r29, 0x1c8
stw      r0, 8(r1)
li       r4, 0
li       r5, 0
li       r6, 0
li       r7, 0
li       r8, 1
li       r9, 0
li       r10, 0
bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
or.      r26, r3, r3
bne      lbl_803D6698
addi     r3, r29, 0x88
addi     r5, r29, 0xa0
li       r4, 0x206
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D6698:
li       r3, 0x14
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803D66B8
lwz      r5, sCurrentHeap__7JKRHeap@sda21(r13)
mr       r4, r26
bl       __ct__18JPAResourceManagerFPCvP7JKRHeap
mr       r0, r3

lbl_803D66B8:
stw      r0, 0xaf4(r31)
addi     r4, r29, 0xf4
lwz      r3, sys@sda21(r13)
bl       heapStatusEnd__6SystemFPc
lmw      r26, 0x48(r1)
lwz      r0, 0x64(r1)
mtlr     r0
addi     r1, r1, 0x60
blr
	*/
}

/*
 * --INFO--
 * Address:	803D66DC
 * Size:	000100
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

/*
 * --INFO--
 * Address:	803D67DC
 * Size:	000284
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

	mNewScreen._04  = false;
	mDataScreen._0C = false;
	initDataBalls_();
	setIconColorAlpha_(30);
	mFlags.clear();
	mIsCardSeActive = false;
}

/*
 * --INFO--
 * Address:	803D6A60
 * Size:	0001B0
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

/*
 * --INFO--
 * Address:	803D6C10
 * Size:	000098
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

/*
 * --INFO--
 * Address:	803D6CA8
 * Size:	000088
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

/*
 * --INFO--
 * Address:	803D6D30
 * Size:	00031C
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
		mNewScreen._04  = 1;
		mDataScreen._0C = 0;
		J2DPane* pane   = E2DScreen_searchAssert(mNewScreen.mScreenObj, 'Ndataw');
		PSMTXCopy(mtx->mMatrix.mtxView, pane->mPositionMtx);
		if (mNewScreen._04) {
			mNewScreen.mScreenObj->update();
		}
	} else {
		mDataScreen._0C = 1;
		mNewScreen._04  = 0;
		J2DPane* pane   = E2DScreen_searchAssert(mDataScreen.mScreenObj, 'Ndataw');
		PSMTXCopy(mtx->mMatrix.mtxView, pane->mPositionMtx);
		if (mDataScreen._0C) {
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

/*
 * --INFO--
 * Address:	803D704C
 * Size:	0000CC
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

/*
 * --INFO--
 * Address:	803D7118
 * Size:	000374
 */
void TMainScreen::doDraw()
{
	Graphics* gfx       = sys->mGfx;
	J2DPerspGraph* graf = &gfx->mPerspGraph;
	graf->setPort();
	mMainScreen->draw(*gfx, *graf);

	if (mNewScreen._04) {
		graf = &sys->mGfx->mPerspGraph;
		Graphics gfx;
		mNewScreen.mScreenObj->draw(gfx, *graf);
	}

	if (mDataScreen._0C) {
		graf = &sys->mGfx->mPerspGraph;
		Graphics gfx;
		mDataScreen.mScreenObj->draw(gfx, *graf);
	}

	if (mState) {
		gfx  = sys->mGfx;
		graf = &gfx->mPerspGraph;
		f32 factor;
		graf->setPort();
		JUtility::TColor color(mDrawColor);
		switch (mState) {
		case 1:
			if (mCounterMax) {
				factor = (f32)mCounter / (f32)mCounterMax;
			} else {
				factor = 0.0f;
			}
			color.a = mDrawAlpha * factor;
			break;
		case 2:
			if (mCounterMax) {
				factor = (f32)mCounter / (f32)mCounterMax;
			} else {
				factor = 0.0f;
			}
			color.a = mDrawAlpha * (1.0f - factor);
			break;
		}
		graf->setColor(color);
		u32 y    = System::getRenderModeObj()->efbHeight;
		u32 x    = System::getRenderModeObj()->fbWidth;
		f32 zero = 0.0f;
		JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
		graf->fillBox(box);
	}
	/*
stwu     r1, -0x5a0(r1)
mflr     r0
stw      r0, 0x5a4(r1)
stw      r31, 0x59c(r1)
mr       r31, r3
stw      r30, 0x598(r1)
stw      r29, 0x594(r1)
lwz      r4, sys@sda21(r13)
lwz      r30, 0x24(r4)
addi     r29, r30, 0x190
lwz      r12, 0(r29)
mr       r3, r29
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0xc(r31)
mr       r4, r30
mr       r5, r29
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lbz      r0, 0xba4(r31)
cmplwi   r0, 0
beq      lbl_803D7208
lwz      r4, sys@sda21(r13)
addi     r3, r1, 0x2cc
lwz      r4, 0x24(r4)
addi     r30, r4, 0x190
bl       __ct__8GraphicsFv
lwz      r3, 0xba0(r31)
mr       r5, r30
addi     r4, r1, 0x2cc
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lis      r3, __vt__8Graphics@ha
addic.   r4, r1, 0x45c
addi     r0, r3, __vt__8Graphics@l
stw      r0, 0x538(r1)
beq      lbl_803D71E0
lis      r3, __vt__13J2DPerspGraph@ha
cmplwi   r4, 0
addi     r0, r3, __vt__13J2DPerspGraph@l
stw      r0, 0(r4)
beq      lbl_803D71E0
lis      r3, __vt__14J2DGrafContext@ha
addi     r0, r3, __vt__14J2DGrafContext@l
stw      r0, 0(r4)

lbl_803D71E0:
addic.   r4, r1, 0x388
beq      lbl_803D7208
lis      r3, __vt__13J2DOrthoGraph@ha
cmplwi   r4, 0
addi     r0, r3, __vt__13J2DOrthoGraph@l
stw      r0, 0(r4)
beq      lbl_803D7208
lis      r3, __vt__14J2DGrafContext@ha
addi     r0, r3, __vt__14J2DGrafContext@l
stw      r0, 0(r4)

lbl_803D7208:
lbz      r0, 0xbb4(r31)
cmplwi   r0, 0
beq      lbl_803D72A0
lwz      r4, sys@sda21(r13)
addi     r3, r1, 0x2c
lwz      r4, 0x24(r4)
addi     r30, r4, 0x190
bl       __ct__8GraphicsFv
lwz      r3, 0xba8(r31)
mr       r5, r30
addi     r4, r1, 0x2c
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lis      r3, __vt__8Graphics@ha
addic.   r4, r1, 0x1bc
addi     r0, r3, __vt__8Graphics@l
stw      r0, 0x298(r1)
beq      lbl_803D7278
lis      r3, __vt__13J2DPerspGraph@ha
cmplwi   r4, 0
addi     r0, r3, __vt__13J2DPerspGraph@l
stw      r0, 0(r4)
beq      lbl_803D7278
lis      r3, __vt__14J2DGrafContext@ha
addi     r0, r3, __vt__14J2DGrafContext@l
stw      r0, 0(r4)

lbl_803D7278:
addic.   r4, r1, 0xe8
beq      lbl_803D72A0
lis      r3, __vt__13J2DOrthoGraph@ha
cmplwi   r4, 0
addi     r0, r3, __vt__13J2DOrthoGraph@l
stw      r0, 0(r4)
beq      lbl_803D72A0
lis      r3, __vt__14J2DGrafContext@ha
addi     r0, r3, __vt__14J2DGrafContext@l
stw      r0, 0(r4)

lbl_803D72A0:
lwz      r0, 0xbdc(r31)
cmpwi    r0, 0
beq      lbl_803D7470
lwz      r3, sys@sda21(r13)
lwz      r3, 0x24(r3)
addi     r30, r3, 0x190
mr       r3, r30
lwz      r12, 0(r30)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r0, 0xbdc(r31)
lwz      r3, 0xbd4(r31)
cmpwi    r0, 2
stw      r3, 0x18(r1)
beq      lbl_803D7368
bge      lbl_803D73E4
cmpwi    r0, 1
bge      lbl_803D72F0
b        lbl_803D73E4

lbl_803D72F0:
lwz      r4, 0xbe4(r31)
cmplwi   r4, 0
beq      lbl_803D7330
lwz      r3, 0xbe0(r31)
lis      r0, 0x4330
stw      r0, 0x570(r1)
lfd      f2, lbl_8051FB48@sda21(r2)
stw      r3, 0x574(r1)
lfd      f0, 0x570(r1)
stw      r4, 0x57c(r1)
fsubs    f1, f0, f2
stw      r0, 0x578(r1)
lfd      f0, 0x578(r1)
fsubs    f0, f0, f2
fdivs    f2, f1, f0
b        lbl_803D7334

lbl_803D7330:
lfs      f2, lbl_8051FB1C@sda21(r2)

lbl_803D7334:
lbz      r3, 0xbd8(r31)
lis      r0, 0x4330
stw      r0, 0x580(r1)
lfd      f1, lbl_8051FB48@sda21(r2)
stw      r3, 0x584(r1)
lfd      f0, 0x580(r1)
fsubs    f0, f0, f1
fmuls    f0, f0, f2
fctiwz   f0, f0
stfd     f0, 0x588(r1)
lwz      r0, 0x58c(r1)
stb      r0, 0x1b(r1)
b        lbl_803D73E4

lbl_803D7368:
lwz      r4, 0xbe4(r31)
cmplwi   r4, 0
beq      lbl_803D73A8
lwz      r3, 0xbe0(r31)
lis      r0, 0x4330
stw      r0, 0x588(r1)
lfd      f2, lbl_8051FB48@sda21(r2)
stw      r3, 0x58c(r1)
lfd      f0, 0x588(r1)
stw      r4, 0x584(r1)
fsubs    f1, f0, f2
stw      r0, 0x580(r1)
lfd      f0, 0x580(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803D73AC

lbl_803D73A8:
lfs      f1, lbl_8051FB1C@sda21(r2)

lbl_803D73AC:
lbz      r3, 0xbd8(r31)
lis      r0, 0x4330
lfs      f0, lbl_8051FB24@sda21(r2)
stw      r3, 0x57c(r1)
lfd      f2, lbl_8051FB48@sda21(r2)
fsubs    f0, f0, f1
stw      r0, 0x578(r1)
lfd      f1, 0x578(r1)
fsubs    f1, f1, f2
fmuls    f0, f1, f0
fctiwz   f0, f0
stfd     f0, 0x570(r1)
lwz      r0, 0x574(r1)
stb      r0, 0x1b(r1)

lbl_803D73E4:
lwz      r0, 0x18(r1)
mr       r3, r30
addi     r4, r1, 8
addi     r5, r1, 0xc
stw      r0, 0x14(r1)
addi     r6, r1, 0x10
addi     r7, r1, 0x14
stw      r0, 0x10(r1)
stw      r0, 0xc(r1)
stw      r0, 8(r1)
bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
bl       getRenderModeObj__6SystemFv
lhz      r31, 6(r3)
bl       getRenderModeObj__6SystemFv
lhz      r4, 4(r3)
lis      r0, 0x4330
lfs      f3, lbl_8051FB1C@sda21(r2)
mr       r3, r30
stw      r4, 0x58c(r1)
addi     r4, r1, 0x1c
lfd      f2, lbl_8051FB48@sda21(r2)
stw      r0, 0x588(r1)
lfd      f0, 0x588(r1)
stw      r31, 0x584(r1)
fsubs    f1, f0, f2
stw      r0, 0x580(r1)
lfd      f0, 0x580(r1)
fadds    f1, f3, f1
stfs     f3, 0x1c(r1)
fsubs    f0, f0, f2
stfs     f3, 0x20(r1)
fadds    f0, f3, f0
stfs     f1, 0x24(r1)
stfs     f0, 0x28(r1)
bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_803D7470:
lwz      r0, 0x5a4(r1)
lwz      r31, 0x59c(r1)
lwz      r30, 0x598(r1)
lwz      r29, 0x594(r1)
mtlr     r0
addi     r1, r1, 0x5a0
blr
	*/
}

/*
 * --INFO--
 * Address:	803D748C
 * Size:	0001B0
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

/*
 * --INFO--
 * Address:	803D763C
 * Size:	0000A4
 */
void TMainScreen::outDataBall(s32 fileID)
{
	P2ASSERTBOUNDSLINE(796, 0, fileID, 3);
	mAnimFileBallIn[fileID].stop();
	mAnimFileBallOut[fileID].play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	mAnimFileBallDecide[fileID].stop();
}

/*
 * --INFO--
 * Address:	803D76E0
 * Size:	0000A4
 */
void TMainScreen::decideDataBall(s32 fileID)
{
	P2ASSERTBOUNDSLINE(807, 0, fileID, 3);
	mAnimFileBallIn[fileID].stop();
	mAnimFileBallOut[fileID].stop();
	mAnimFileBallDecide[fileID].play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
}

/*
 * --INFO--
 * Address:	803D7784
 * Size:	000124
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

/*
 * --INFO--
 * Address:	803D78A8
 * Size:	000030
 */
bool TMainScreen::isFinishOutDataBall(s32 fileID) { return mAnimFileBallOut[fileID].isFinish(); }

/*
 * --INFO--
 * Address:	803D78D8
 * Size:	000030
 */
bool TMainScreen::isFinishDecideDataBall(s32 fileID) { return mAnimFileBallDecide[fileID].isFinish(); }

/*
 * --INFO--
 * Address:	803D7908
 * Size:	0000F4
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

/*
 * --INFO--
 * Address:	803D79FC
 * Size:	000050
 */
void TMainScreen::fadeCopyCursor()
{
	mCursorA.mCursor.fade();
	mCursorB.mCursor.fade();
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000050
//  */
// void TMainScreen::killCopyCursor()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	803D7A4C
 * Size:	000010
 */
void TMainScreen::moveLeftCopyCursor()
{
	mCursorA.mIsLeft = true;
	mCursorB.mIsLeft = true;
}

/*
 * --INFO--
 * Address:	803D7A5C
 * Size:	000010
 */
void TMainScreen::moveRightCopyCursor()
{
	mCursorA.mIsLeft = false;
	mCursorB.mIsLeft = false;
}

/*
 * --INFO--
 * Address:	803D7A6C
 * Size:	0001E0
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

/*
 * --INFO--
 * Address:	803D7C4C
 * Size:	000058
 */
void TMainScreen::fadeFilecopyEffect()
{
	mEfxFileCopy.fade();
	mEfxFileCopyM.fade();
	mIsCardSeActive = false;
}

/*
 * --INFO--
 * Address:	803D7CA4
 * Size:	000118
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

/*
 * --INFO--
 * Address:	803D7DBC
 * Size:	000058
 */
void TMainScreen::fadeFiledeletingEffect()
{
	mEfxDelete.fade();
	mEfxDeleteM.fade();
	mIsCardSeActive = false;
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	0000F0
//  */
// void TMainScreen::killAllEffect()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	803D7E14
 * Size:	000318
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

/*
 * --INFO--
 * Address:	803D812C
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	803D8198
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	803D8204
 * Size:	000024
 */
bool TMainScreen::isFinishCloseDataWindow() { return mAnimCloseDataWindow.isFinish(); }

/*
 * --INFO--
 * Address:	803D8228
 * Size:	0002A0
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

/*
 * --INFO--
 * Address:	803D84C8
 * Size:	000060
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

/*
 * --INFO--
 * Address:	803D8528
 * Size:	000028
 */
bool TMainScreen::isFinishCloseMSG()
{
	if (!mFlags.isSet(FileSelectScreen_MsgOpen) && mMesgCounter == 0) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803D8550
 * Size:	0000C4
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

/*
 * --INFO--
 * Address:	803D8614
 * Size:	000144
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

/*
 * --INFO--
 * Address:	803D8758
 * Size:	00004C
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

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00005C
//  */
// void FileSelect::TMainScreen::isFinishOutCopyErase()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	803D87A4
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	803D8830
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	803D88BC
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	803D8948
 * Size:	00008C
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

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00005C
//  */
// void TMainScreen::isFinishOutYesNo_()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	803D89D4
 * Size:	0001C0
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

/*
 * --INFO--
 * Address:	803D8B94
 * Size:	000250
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

/*
 * --INFO--
 * Address:	803D8DE4
 * Size:	000098
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

/*
 * --INFO--
 * Address:	803D8E7C
 * Size:	00004C
 */
void TMainScreen::initDataBalls_()
{
	for (int i = 0; i < 3; i++) {
		setColorTimgDataBall_(i);
	}
}

/*
 * --INFO--
 * Address:	803D8EC8
 * Size:	000550
 */
void TMainScreen::setColorTimgDataBall_(s32 fileID)
{
	if (mFileData[fileID].mIsBrokenFile) {
		ResTIMG* time = mPanePdc[fileID]->changeTexture("break_new_icon.bti", 0);
		P2ASSERTLINE(1363, time);
		time = mPaneMdc[fileID]->changeTexture("break_new_icon.bti", 0);
		P2ASSERTLINE(1367, time);
		mPanePdc[fileID]->hide();
		mPaneMdc[fileID]->hide();
		P2ASSERTLINE(1373, mCounterDay[fileID]);
		mCounterDay[fileID]->hide();
		P2ASSERTLINE(1373, mCounterDayM[fileID]);
		mCounterDayM[fileID]->hide();
	} else if (mFileData[fileID].mIsNewFile) {
		ResTIMG* time = mPanePdc[fileID]->changeTexture("new_icon.bti", 0);
		P2ASSERTLINE(1382, time);
		time = mPaneMdc[fileID]->changeTexture("new_icon.bti", 0);
		P2ASSERTLINE(1386, time);
		mPanePdc[fileID]->hide();
		mPaneMdc[fileID]->hide();
		P2ASSERTLINE(1392, mCounterDay[fileID]);
		mCounterDay[fileID]->hide();
		P2ASSERTLINE(1394, mCounterDayM[fileID]);
		mCounterDayM[fileID]->hide();
	} else {
		ResTIMG* time = mPanePdc[fileID]->changeTexture("dicon_icon.bti", 0);
		P2ASSERTLINE(1400, time);
		time = mPaneMdc[fileID]->changeTexture("dicon_icon.bti", 0);
		P2ASSERTLINE(1404, time);
		mPanePdc[fileID]->show();
		mPaneMdc[fileID]->show();
		mCounterDay[fileID]->show();
		mCounterDayM[fileID]->show();
	}

	getDataBallColor_(fileID);
	/*
stwu     r1, -0x80(r1)
mflr     r0
stw      r0, 0x84(r1)
stmw     r26, 0x68(r1)
mr       r30, r4
lis      r4, lbl_80496AE8@ha
mr       r29, r3
mulli    r0, r30, 0x34
addi     r31, r4, lbl_80496AE8@l
add      r3, r29, r0
lbz      r0, 0xb00(r3)
cmplwi   r0, 0
beq      lbl_803D9000
slwi     r27, r30, 2
addi     r4, r31, 0x1f4
add      r3, r29, r27
li       r5, 0
lwz      r3, 0x50(r3)
lwz      r12, 0(r3)
lwz      r12, 0x114(r12)
mtctr    r12
bctrl
cmplwi   r3, 0
bne      lbl_803D8F3C
addi     r3, r31, 0x88
addi     r5, r31, 0xa0
li       r4, 0x553
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D8F3C:
add      r3, r29, r27
addi     r4, r31, 0x1f4
lwz      r3, 0x5c(r3)
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x114(r12)
mtctr    r12
bctrl
cmplwi   r3, 0
bne      lbl_803D8F78
addi     r3, r31, 0x88
addi     r5, r31, 0xa0
li       r4, 0x557
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D8F78:
add      r28, r29, r27
li       r0, 0
lwz      r3, 0x38(r28)
stb      r0, 0xb0(r3)
lwz      r3, 0x44(r28)
stb      r0, 0xb0(r3)
lwz      r0, 0x9d4(r28)
cmplwi   r0, 0
bne      lbl_803D8FB0
addi     r3, r31, 0x88
addi     r5, r31, 0xa0
li       r4, 0x55d
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D8FB0:
lwz      r3, 0x9d4(r28)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
add      r27, r29, r27
lwz      r0, 0x9e0(r27)
cmplwi   r0, 0
bne      lbl_803D8FE8
addi     r3, r31, 0x88
addi     r5, r31, 0xa0
li       r4, 0x55f
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D8FE8:
lwz      r3, 0x9e0(r27)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
b        lbl_803D91D0

lbl_803D9000:
lbz      r0, 0xb01(r3)
cmplwi   r0, 0
beq      lbl_803D9110
slwi     r27, r30, 2
addi     r4, r31, 0x208
add      r3, r29, r27
li       r5, 0
lwz      r3, 0x50(r3)
lwz      r12, 0(r3)
lwz      r12, 0x114(r12)
mtctr    r12
bctrl
cmplwi   r3, 0
bne      lbl_803D904C
addi     r3, r31, 0x88
addi     r5, r31, 0xa0
li       r4, 0x566
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D904C:
add      r3, r29, r27
addi     r4, r31, 0x208
lwz      r3, 0x5c(r3)
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x114(r12)
mtctr    r12
bctrl
cmplwi   r3, 0
bne      lbl_803D9088
addi     r3, r31, 0x88
addi     r5, r31, 0xa0
li       r4, 0x56a
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D9088:
add      r28, r29, r27
li       r0, 0
lwz      r3, 0x38(r28)
stb      r0, 0xb0(r3)
lwz      r3, 0x44(r28)
stb      r0, 0xb0(r3)
lwz      r0, 0x9d4(r28)
cmplwi   r0, 0
bne      lbl_803D90C0
addi     r3, r31, 0x88
addi     r5, r31, 0xa0
li       r4, 0x570
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D90C0:
lwz      r3, 0x9d4(r28)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
add      r27, r29, r27
lwz      r0, 0x9e0(r27)
cmplwi   r0, 0
bne      lbl_803D90F8
addi     r3, r31, 0x88
addi     r5, r31, 0xa0
li       r4, 0x572
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D90F8:
lwz      r3, 0x9e0(r27)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
b        lbl_803D91D0

lbl_803D9110:
slwi     r27, r30, 2
addi     r4, r31, 0x218
add      r3, r29, r27
li       r5, 0
lwz      r3, 0x50(r3)
lwz      r12, 0(r3)
lwz      r12, 0x114(r12)
mtctr    r12
bctrl
cmplwi   r3, 0
bne      lbl_803D9150
addi     r3, r31, 0x88
addi     r5, r31, 0xa0
li       r4, 0x578
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D9150:
add      r3, r29, r27
addi     r4, r31, 0x218
lwz      r3, 0x5c(r3)
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x114(r12)
mtctr    r12
bctrl
cmplwi   r3, 0
bne      lbl_803D918C
addi     r3, r31, 0x88
addi     r5, r31, 0xa0
li       r4, 0x57c
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D918C:
add      r4, r29, r27
li       r0, 1
lwz      r3, 0x38(r4)
stb      r0, 0xb0(r3)
lwz      r3, 0x44(r4)
stb      r0, 0xb0(r3)
lwz      r3, 0x9d4(r4)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
add      r3, r29, r27
lwz      r3, 0x9e0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl

lbl_803D91D0:
mr       r4, r29
mr       r5, r30
addi     r3, r1, 8
bl       getDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFl
lwz      r0, 8(r1)
lis      r5, 0x4330
slwi     r26, r30, 2
stw      r5, 0x30(r1)
add      r3, r29, r26
lfd      f4, lbl_8051FB48@sda21(r2)
stw      r0, 0xc(r1)
lwz      r3, 0x68(r3)
lbz      r6, 0xc(r1)
lbz      r4, 0xd(r1)
lbz      r0, 0xe(r1)
stw      r6, 0x34(r1)
lwz      r12, 0(r3)
lfd      f0, 0x30(r1)
stw      r4, 0x44(r1)
fsubs    f1, f0, f4
lfs      f5, lbl_8051FB60@sda21(r2)
stw      r5, 0x40(r1)
lfs      f3, lbl_8051FB3C@sda21(r2)
lfd      f0, 0x40(r1)
fmuls    f2, f5, f1
stw      r0, 0x54(r1)
fsubs    f1, f0, f4
lwz      r12, 0x13c(r12)
stw      r5, 0x50(r1)
fdivs    f2, f2, f3
lfd      f0, 0x50(r1)
fsubs    f0, f0, f4
fmuls    f1, f5, f1
fctiwz   f2, f2
fmuls    f0, f5, f0
fdivs    f1, f1, f3
stfd     f2, 0x38(r1)
lwz      r30, 0x3c(r1)
fdivs    f0, f0, f3
fctiwz   f1, f1
fctiwz   f0, f0
stfd     f1, 0x48(r1)
stfd     f0, 0x58(r1)
lwz      r31, 0x4c(r1)
lwz      r27, 0x5c(r1)
mtctr    r12
bctrl
lwz      r28, 0x70(r3)
li       r4, 0
mr       r3, r28
lwz      r12, 0(r28)
lwz      r12, 0x38(r12)
mtctr    r12
bctrl
lha      r0, 6(r3)
mr       r3, r28
addi     r5, r1, 0x28
li       r4, 0
sth      r30, 0x28(r1)
sth      r31, 0x2a(r1)
sth      r27, 0x2c(r1)
sth      r0, 0x2e(r1)
lwz      r12, 0(r28)
lwz      r12, 0x34(r12)
mtctr    r12
bctrl
add      r3, r29, r26
lwz      r3, 0x74(r3)
lwz      r12, 0(r3)
lwz      r12, 0x13c(r12)
mtctr    r12
bctrl
lwz      r28, 0x70(r3)
li       r4, 0
mr       r3, r28
lwz      r12, 0(r28)
lwz      r12, 0x38(r12)
mtctr    r12
bctrl
lha      r0, 6(r3)
mr       r3, r28
addi     r5, r1, 0x20
li       r4, 0
sth      r30, 0x20(r1)
sth      r31, 0x22(r1)
sth      r27, 0x24(r1)
sth      r0, 0x26(r1)
lwz      r12, 0(r28)
lwz      r12, 0x34(r12)
mtctr    r12
bctrl
add      r3, r29, r26
lwz      r3, 0x38(r3)
lwz      r12, 0(r3)
lwz      r12, 0x13c(r12)
mtctr    r12
bctrl
lwz      r28, 0x70(r3)
li       r4, 0
mr       r3, r28
lwz      r12, 0(r28)
lwz      r12, 0x38(r12)
mtctr    r12
bctrl
lha      r0, 6(r3)
mr       r3, r28
addi     r5, r1, 0x18
li       r4, 0
sth      r30, 0x18(r1)
sth      r31, 0x1a(r1)
sth      r27, 0x1c(r1)
sth      r0, 0x1e(r1)
lwz      r12, 0(r28)
lwz      r12, 0x34(r12)
mtctr    r12
bctrl
add      r3, r29, r26
lwz      r3, 0x44(r3)
lwz      r12, 0(r3)
lwz      r12, 0x13c(r12)
mtctr    r12
bctrl
lwz      r28, 0x70(r3)
li       r4, 0
mr       r3, r28
lwz      r12, 0(r28)
lwz      r12, 0x38(r12)
mtctr    r12
bctrl
lha      r0, 6(r3)
mr       r3, r28
addi     r5, r1, 0x10
li       r4, 0
sth      r30, 0x10(r1)
sth      r31, 0x12(r1)
sth      r27, 0x14(r1)
sth      r0, 0x16(r1)
lwz      r12, 0(r28)
lwz      r12, 0x34(r12)
mtctr    r12
bctrl
lmw      r26, 0x68(r1)
lwz      r0, 0x84(r1)
mtlr     r0
addi     r1, r1, 0x80
blr
	*/
}

/*
 * --INFO--
 * Address:	803D9418
 * Size:	0000CC
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

/*
 * --INFO--
 * Address:	803D94E4
 * Size:	0001C0
 */
JUtility::TColor TMainScreen::calcDataBallColor_(u32 blue, u32 red, u32 yellow, u32 purple, u32 white)
{
	int type = 1;
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
	mod /= f32(blue + red + yellow + purple + white + 1);

	f32 r = f32(red) / f32(type);
	f32 g = f32(yellow) / f32(type);
	f32 b = f32(blue) / f32(type);
	r *= 190.0f;
	g *= 190.0f;
	b *= 190.0f;
	r += mod;
	g += mod;
	b += mod;

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
	/*
	.loc_0x0:
	  add       r0, r6, r7
	  cmplwi    r6, 0x1
	  add       r0, r0, r8
	  stwu      r1, -0x70(r1)
	  add       r4, r0, r9
	  li        r10, 0x1
	  addi      r4, r4, 0x1
	  add       r4, r5, r4
	  ble-      .loc_0x28
	  mr        r10, r6

	.loc_0x28:
	  cmplw     r10, r5
	  bge-      .loc_0x34
	  mr        r10, r5

	.loc_0x34:
	  cmplw     r10, r7
	  bge-      .loc_0x40
	  mr        r10, r7

	.loc_0x40:
	  lis       r0, 0x4330
	  stw       r9, 0x44(r1)
	  lfd       f7, 0x17E8(r2)
	  stw       r0, 0x40(r1)
	  lfs       f3, 0x17CC(r2)
	  lfd       f0, 0x40(r1)
	  stw       r8, 0x4C(r1)
	  fsubs     f2, f0, f7
	  lfs       f8, 0x1804(r2)
	  stw       r0, 0x48(r1)
	  lfs       f0, 0x17DC(r2)
	  lfd       f1, 0x48(r1)
	  stw       r6, 0x14(r1)
	  fsubs     f1, f1, f7
	  stw       r0, 0x10(r1)
	  lfd       f4, 0x10(r1)
	  fsubs     f1, f2, f1
	  stw       r10, 0x1C(r1)
	  fsubs     f5, f4, f7
	  stw       r0, 0x18(r1)
	  fmuls     f2, f3, f1
	  lfd       f1, 0x18(r1)
	  stw       r7, 0x24(r1)
	  fsubs     f1, f1, f7
	  stw       r0, 0x20(r1)
	  lfd       f4, 0x20(r1)
	  fdivs     f6, f5, f1
	  stw       r10, 0x2C(r1)
	  stw       r0, 0x28(r1)
	  lfd       f3, 0x28(r1)
	  stw       r5, 0x34(r1)
	  stw       r0, 0x30(r1)
	  lfd       f1, 0x30(r1)
	  fsubs     f5, f4, f7
	  fsubs     f3, f3, f7
	  stw       r10, 0x3C(r1)
	  fsubs     f4, f1, f7
	  stw       r0, 0x38(r1)
	  fmuls     f6, f8, f6
	  fdivs     f5, f5, f3
	  lfd       f3, 0x38(r1)
	  stw       r4, 0x54(r1)
	  stw       r0, 0x50(r1)
	  lfd       f1, 0x50(r1)
	  fsubs     f3, f3, f7
	  fsubs     f1, f1, f7
	  fmuls     f5, f8, f5
	  fdivs     f3, f4, f3
	  fdivs     f1, f2, f1
	  fmuls     f3, f8, f3
	  fadds     f6, f6, f1
	  fadds     f5, f5, f1
	  fadds     f3, f3, f1
	  fcmpo     cr0, f6, f0
	  ble-      .loc_0x120
	  fmr       f6, f0

	.loc_0x120:
	  lfs       f0, 0x17DC(r2)
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0x130
	  fmr       f5, f0

	.loc_0x130:
	  lfs       f0, 0x17DC(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x140
	  fmr       f3, f0

	.loc_0x140:
	  lfs       f0, 0x17BC(r2)
	  fcmpo     cr0, f6, f0
	  bge-      .loc_0x150
	  fmr       f6, f0

	.loc_0x150:
	  lfs       f0, 0x17BC(r2)
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x160
	  fmr       f5, f0

	.loc_0x160:
	  lfs       f0, 0x17BC(r2)
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x170
	  fmr       f3, f0

	.loc_0x170:
	  fctiwz    f2, f6
	  li        r0, -0x1
	  fctiwz    f1, f5
	  stw       r0, 0x8(r1)
	  fctiwz    f0, f3
	  li        r0, 0xFF
	  stfd      f2, 0x58(r1)
	  stfd      f1, 0x60(r1)
	  lwz       r6, 0x5C(r1)
	  stfd      f0, 0x68(r1)
	  lwz       r5, 0x64(r1)
	  lwz       r4, 0x6C(r1)
	  stb       r6, 0x8(r1)
	  stb       r5, 0x9(r1)
	  stb       r4, 0xA(r1)
	  stb       r0, 0xB(r1)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x0(r3)
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D96A4
 * Size:	000080
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
