#include "ebi/FS.h"
#include "Game/MemoryCard/PlayerFileInfo.h"
#include "Game/MemoryCard/Mgr.h"
#include "PSSystem/PSSystemIF.h"

static const char className[] = "ebiScreenFileSelect_Mgr";

namespace ebi {
namespace FS {

/**
 * @note Address: 0x803DE2C0
 * @note Size: 0x5B0
 */
void FSMStateMachine::init(TMgr* mgr)
{
	create(FSSTATE_StateCount);
	registerState(new FSMState(FSSTATE_Standby, "Standby"));
	registerState(new FSMState00a_OpenScene);
	registerState(new FSMState00b_CheckData);
	registerState(new FSMState00c_DecideData);
	registerState(new FSMState00_SelectData);
	registerState(new FSMState01_DataBroken);
	registerState(new FSMState02_NowDelete);
	registerState(new FSMState03_DoYouDelete);
	registerState(new FSMState04_WhichDataDoYouCopyTo);
	registerState(new FSMState05_FailToDelete);
	registerState(new FSMState06_FinishDelete);
	registerState(new FSMState07_DoYouOverwrite);
	registerState(new FSMState08_FailToCopy);
	registerState(new FSMState09_NowCopy);
	registerState(new FSMState10_FinishCopy);
}

/**
 * @note Address: 0x803DE870
 * @note Size: 0x2C
 */
void FSMState::init(TMgr* mgr, Game::StateArg* arg) { do_init(mgr, arg); }

/**
 * @note Address: 0x803DE89C
 * @note Size: 0x2C
 */
void FSMState::exec(TMgr* mgr) { do_exec(mgr); }

/**
 * @note Address: 0x803DE8C8
 * @note Size: 0x70
 */
void FSMState_SelectYesNo::do_init(TMgr* mgr, Game::StateArg* arg)
{
	do_set(mgr, arg);
	mgr->mMainScreen.openMSG(mMsgType);
	mgr->mMainScreen.outCopyErase();
	mgr->mMainScreen.setYesNo(mYesNoState);
	mIsSelected = false;
	mClosedMsg  = false;
}

/**
 * @note Address: 0x803DE938
 * @note Size: 0x204
 */
void FSMState_SelectYesNo::do_exec(TMgr* mgr)
{
	if (mIsSelected) {
		goto close;
	}

	if (mgr->mController->isMoveUp()) {
		if (!mYesNoState) {
			mgr->mMainScreen.setYesNo(true);
			mYesNoState = true;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		}
	} else if (mgr->mController->isMoveDown()) {
		if (mYesNoState == true) {
			mgr->mMainScreen.setYesNo(false);
			mYesNoState = false;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		}
	}

	u32 input = mgr->mController->getButtonDown();
	if (input & Controller::PRESS_A) {
		mIsSelected = true;
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
	} else if (input & Controller::PRESS_B) {
		mYesNoState = false;
		mIsSelected = true;
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
	} else {
	close:
		if (!mClosedMsg) {
			mClosedMsg = true;
			do_decide(mgr);
			mgr->mMainScreen.closeMSG();
		}
	}

	if (mgr->mMainScreen.isFinishCloseMSG() && mIsSelected && mClosedMsg) {
		if (mYesNoState) {
			transit(mgr, mNextStateYes, nullptr);
		} else {
			transit(mgr, mNextStateNo, nullptr);
		}
	}

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x21(r3)
	cmplwi   r0, 0
	bne      lbl_803DEA80
	lwz      r3, 0xc00(r31)
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_803DE980
	lfs      f1, 0x4c(r3)
	lfs      f0, lbl_8051FC08@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803DE988

lbl_803DE980:
	li       r0, 1
	b        lbl_803DE98C

lbl_803DE988:
	li       r0, 0

lbl_803DE98C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803DE9C8
	lbz      r0, 0x10(r30)
	cmplwi   r0, 0
	bne      lbl_803DEA28
	mr       r3, r31
	li       r4, 1
	bl       setYesNo__Q43ebi6Screen10FileSelect11TMainScreenFb
	li       r0, 1
	li       r4, 0x1802
	stb      r0, 0x10(r30)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_803DEA28

lbl_803DE9C8:
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_803DE9E4
	lfs      f1, 0x4c(r3)
	lfs      f0, lbl_8051FC0C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803DE9EC

lbl_803DE9E4:
	li       r0, 1
	b        lbl_803DE9F0

lbl_803DE9EC:
	li       r0, 0

lbl_803DE9F0:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803DEA28
	lbz      r0, 0x10(r30)
	cmplwi   r0, 1
	bne      lbl_803DEA28
	mr       r3, r31
	li       r4, 0
	bl       setYesNo__Q43ebi6Screen10FileSelect11TMainScreenFb
	li       r0, 0
	li       r4, 0x1802
	stb      r0, 0x10(r30)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_803DEA28:
	lwz      r3, 0xc00(r31)
	lwz      r3, 0x1c(r3)
	rlwinm.  r0, r3, 0, 0x17, 0x17
	beq      lbl_803DEA54
	li       r0, 1
	li       r4, 0x1800
	stb      r0, 0x21(r30)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_803DEAAC

lbl_803DEA54:
	rlwinm.  r0, r3, 0, 0x16, 0x16
	beq      lbl_803DEAAC
	li       r3, 0
	li       r0, 1
	stb      r3, 0x10(r30)
	li       r4, 0x1801
	li       r5, 0
	stb      r0, 0x21(r30)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_803DEAAC

lbl_803DEA80:
	lbz      r0, 0x20(r30)
	cmplwi   r0, 0
	bne      lbl_803DEAAC
	li       r0, 1
	stb      r0, 0x20(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       closeMSG__Q43ebi6Screen10FileSelect11TMainScreenFv

lbl_803DEAAC:
	mr       r3, r31
	bl       isFinishCloseMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803DEB24
	lbz      r0, 0x21(r30)
	cmplwi   r0, 0
	beq      lbl_803DEB24
	lbz      r0, 0x20(r30)
	cmplwi   r0, 0
	beq      lbl_803DEB24
	lbz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_803DEB04
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x18(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803DEB24

lbl_803DEB04:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x1c(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803DEB24:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x803DEB3C
 * @note Size: 0x60
 */
void FSMState01_DataBroken::do_set(TMgr* mgr, Game::StateArg*)
{
	mMsgType      = Screen::FileSelect::TMainScreen::MessageType_FileCorrupted;
	mYesNoState   = false;
	mNextStateYes = FSSTATE_NowDelete;
	mNextStateNo  = FSSTATE_SelectData;
	mgr->mMainScreen.setDataBallBroken(mgr->mCurrSelection);
	mgr->mMainScreen.openDataWindow(mgr->mCurrSelection);
}

/**
 * @note Address: 0x803DEB9C
 * @note Size: 0x24
 */
void FSMState03_DoYouDelete::do_set(TMgr* mgr, Game::StateArg*)
{
	mMsgType      = Screen::FileSelect::TMainScreen::MessageType_DoYouErase;
	mYesNoState   = false;
	mNextStateYes = FSSTATE_NowDelete;
	mNextStateNo  = FSSTATE_SelectData;
}

/**
 * @note Address: 0x803DEBC0
 * @note Size: 0x24
 */
void FSMState03_DoYouDelete::do_decide(TMgr* mgr) { mgr->mMainScreen.closeDataWindow(); }

/**
 * @note Address: 0x803DEBE4
 * @note Size: 0x24
 */
void FSMState07_DoYouOverwrite::do_set(TMgr* mgr, Game::StateArg*)
{
	mMsgType      = Screen::FileSelect::TMainScreen::MessageType_DoYouOverwrite;
	mYesNoState   = false;
	mNextStateYes = FSSTATE_NowCopy;
	mNextStateNo  = FSSTATE_SelectData;
}

/**
 * @note Address: 0x803DEC08
 * @note Size: 0x38
 */
void FSMState07_DoYouOverwrite::do_decide(TMgr* mgr)
{
	mgr->mMainScreen.fadeCopyCursor();
	mgr->mMainScreen.closeDataWindow();
}

/**
 * @note Address: 0x803DEC40
 * @note Size: 0x60
 */
void FSMState_Warning::do_init(TMgr* mgr, Game::StateArg*)
{
	do_open(mgr);
	mCounterFinished = false;
	mForceFinish     = false;
	u32 time         = 3.0f / sys->mDeltaTime;
	mCounter         = time;
	mCounterMax      = time;
}

/**
 * @note Address: 0x803DECA0
 * @note Size: 0xC4
 */
void FSMState_Warning::do_exec(TMgr* mgr)
{
	if (mCounter) {
		mCounter--;
	}

	if (!mCounterFinished) {
		if (!mCounter) {
			mgr->mMainScreen.closeMSG();
			mCounterFinished = true;
		}
	} else if (!mForceFinish) {
		mForceFinish = true;
		mgr->mMainScreen.closeMSG();
	}

	if (mgr->mMainScreen.isFinishCloseMSG() && mCounterFinished) {
		do_transit(mgr);
	}
}

/**
 * @note Address: 0x803DED64
 * @note Size: 0x28
 */
void FSMState05_FailToDelete::do_open(TMgr* mgr) { mgr->mMainScreen.openMSG(Screen::FileSelect::TMainScreen::MessageType_FileDeleteFail); }

/**
 * @note Address: 0x803DED8C
 * @note Size: 0x44
 */
void FSMState05_FailToDelete::do_transit(TMgr* mgr)
{
	if (!mgr->mInSeq) {
		mgr->goEnd_(TMgr::END_StartNoCard);
	} else {
		mgr->goEnd_(TMgr::END_2);
	}
}

/**
 * @note Address: 0x803DEDD0
 * @note Size: 0x28
 */
void FSMState06_FinishDelete::do_open(TMgr* mgr) { mgr->mMainScreen.openMSG(Screen::FileSelect::TMainScreen::MessageType_FileDeleted); }

/**
 * @note Address: 0x803DEDF8
 * @note Size: 0x34
 */
void FSMState06_FinishDelete::do_transit(TMgr* mgr) { transit(mgr, FSSTATE_SelectData, nullptr); }

/**
 * @note Address: 0x803DEE2C
 * @note Size: 0x28
 */
void FSMState08_FailToCopy::do_open(TMgr* mgr) { mgr->mMainScreen.openMSG(Screen::FileSelect::TMainScreen::MessageType_FileCopyFail); }

/**
 * @note Address: 0x803DEE54
 * @note Size: 0x44
 */
void FSMState08_FailToCopy::do_transit(TMgr* mgr)
{
	if (!mgr->mInSeq) {
		mgr->goEnd_(TMgr::END_StartNoCard);
	} else {
		mgr->goEnd_(TMgr::END_2);
	}
}

/**
 * @note Address: 0x803DEE98
 * @note Size: 0x28
 */
void FSMState10_FinishCopy::do_open(TMgr* mgr) { mgr->mMainScreen.openMSG(Screen::FileSelect::TMainScreen::MessageType_FileCopied); }

/**
 * @note Address: 0x803DEEC0
 * @note Size: 0x34
 */
void FSMState10_FinishCopy::do_transit(TMgr* mgr) { transit(mgr, FSSTATE_SelectData, nullptr); }

/**
 * @note Address: 0x803DEEF4
 * @note Size: 0x6C
 */
void FSMState_CardTask::init(TMgr* mgr, Game::StateArg* arg)
{
	do_init(mgr, arg);
	u32 time         = 3.0f / sys->mDeltaTime;
	mgr->mCounter    = time;
	mgr->mCounterMax = time;
	mStatus          = CardTaskState_doRequest;
	mgr->mInSeq      = false;
}

/**
 * @note Address: 0x803DEF60
 * @note Size: 0x2C0
 */
void FSMState_CardTask::exec(TMgr* mgr)
{
	if (isSaveError()) {
		mCardStat = Game::MemoryCard::Mgr::MCS_Ready;
		mStatus   = CardTaskState_finish;
		mgr->mMainScreen.closeMSG();
	}

	switch (mStatus) {
	case CardTaskState_doRequest:
		if (sys->mCardMgr->isSaveInvalid()) {
			P2ASSERTLINE(305, do_cardRequest(mgr));
			mStatus = CardTaskState_getStatus;
		}
		break;
	case CardTaskState_getStatus:
		if (sys->mCardMgr->isSaveInvalid()) {
			mCardStat = sys->mCardMgr->getCardStatus();
			sys->mCardMgr->getCardStatus();
			mStatus = CardTaskState_waitCloseMsg;
		}
		break;
	case CardTaskState_waitCloseMsg:
		if (!mgr->mCounter) {
			mgr->mMainScreen.closeMSG();
			mStatus = CardTaskState_finish;
			do_close(mgr);
		}
		break;
	case CardTaskState_finish:
		if (mgr->mMainScreen.isFinishCloseMSG()) {
			if (mCardStat != Game::MemoryCard::Mgr::MCS_IOError) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
			}
			switch (mCardStat) {
			case Game::MemoryCard::Mgr::MCS_IOError:
				mgr->mInSeq = true;
				do_transitCardReady(mgr);
				break;
			case Game::MemoryCard::Mgr::MCS_13:
				mgr->mInSeq = true;
				do_transitCardPlayerDataBroken(mgr);
				break;
			case Game::MemoryCard::Mgr::MCS_Ready:
				mgr->mInSeq = false;
				do_transitCardNoCard(mgr);
				break;
			default:
				mgr->mInSeq = true;
				do_transitCardIOError(mgr);
				break;
			}
		}
		break;
	}
}

/**
 * @note Address: 0x803DF220
 * @note Size: 0x34
 */
void FSMState_CardTask::do_transitCardPlayerDataBroken(TMgr* mgr) { transit(mgr, FSSTATE_DataBroken, nullptr); }

/**
 * @note Address: 0x803DF254
 * @note Size: 0x40
 */
void FSMState02_NowDelete::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mMainScreen.openMSG(Screen::FileSelect::TMainScreen::MessageType_ErasingFile);
	mgr->mMainScreen.createFiledeletingEffect(mgr->mCurrSelection);
}

/**
 * @note Address: 0x803DF294
 * @note Size: 0x24
 */
void FSMState02_NowDelete::do_close(TMgr* mgr) { mgr->mMainScreen.fadeFiledeletingEffect(); }

/**
 * @note Address: 0x803DF2B8
 * @note Size: 0x2C
 */
bool FSMState02_NowDelete::do_cardRequest(TMgr* mgr) { return sys->mCardMgr->deletePlayer(mgr->mCurrSelection); }

/**
 * @note Address: 0x803DF2E4
 * @note Size: 0x60
 */
void FSMState02_NowDelete::do_transitCardReady(TMgr* mgr)
{
	mgr->mMainScreen.setDataBallNew(mgr->mCurrSelection);
	transit(mgr, FSSTATE_FinishDelete, nullptr);
}

/**
 * @note Address: 0x803DF344
 * @note Size: 0x34
 */
void FSMState02_NowDelete::do_transitCardNoCard(TMgr* mgr) { transit(mgr, FSSTATE_FailToDelete, nullptr); }

/**
 * @note Address: 0x803DF378
 * @note Size: 0x34
 */
void FSMState02_NowDelete::do_transitCardIOError(TMgr* mgr) { transit(mgr, FSSTATE_FailToDelete, nullptr); }

/**
 * @note Address: 0x803DF3AC
 * @note Size: 0x24
 */
void FSMState02_NowDelete::cleanup(TMgr* mgr) { mgr->mMainScreen.fadeFiledeletingEffect(); }

/**
 * @note Address: 0x803DF3D0
 * @note Size: 0x44
 */
void FSMState09_NowCopy::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mMainScreen.openMSG(Screen::FileSelect::TMainScreen::MessageType_CopyingFile);
	mgr->mMainScreen.createFilecopyEffect(mgr->mCurrSelection, mgr->mCopySelection);
}

/**
 * @note Address: 0x803DF414
 * @note Size: 0x24
 */
void FSMState09_NowCopy::do_close(TMgr* mgr) { mgr->mMainScreen.fadeFilecopyEffect(); }

/**
 * @note Address: 0x803DF438
 * @note Size: 0x34
 */
bool FSMState09_NowCopy::do_cardRequest(TMgr* mgr) { return sys->mCardMgr->copyPlayer(mgr->mCurrSelection, mgr->mCopySelection); }

/**
 * @note Address: 0x803DF46C
 * @note Size: 0x64
 */
void FSMState09_NowCopy::do_transitCardReady(TMgr* mgr)
{
	mgr->mMainScreen.setDataBallCopyResult(mgr->mCurrSelection, mgr->mCopySelection);
	transit(mgr, FSSTATE_FinishCopy, nullptr);
}

/**
 * @note Address: 0x803DF4D0
 * @note Size: 0x34
 */
void FSMState09_NowCopy::do_transitCardNoCard(TMgr* mgr) { transit(mgr, FSSTATE_FailToCopy, nullptr); }

/**
 * @note Address: 0x803DF504
 * @note Size: 0x34
 */
void FSMState09_NowCopy::do_transitCardIOError(TMgr* mgr) { transit(mgr, FSSTATE_FailToCopy, nullptr); }

/**
 * @note Address: 0x803DF538
 * @note Size: 0x24
 */
void FSMState09_NowCopy::cleanup(TMgr* mgr) { mgr->mMainScreen.fadeFilecopyEffect(); }

/**
 * @note Address: 0x803DF55C
 * @note Size: 0x4C
 */
void FSMState00a_OpenScene::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mMainScreen.openScreen(nullptr);
	mgr->mCurrSelection = 0;
	mgr->mEndStat       = TMgr::END_0;
}

/**
 * @note Address: 0x803DF5A8
 * @note Size: 0x64
 */
void FSMState00a_OpenScene::do_exec(TMgr* mgr)
{
	// go to selecting state once intro animation finishes
	if (mgr->mMainScreen.isWaitScreen()) {
		transit(mgr, FSSTATE_SelectData, nullptr);
	}
}

/**
 * @note Address: 0x803DF60C
 * @note Size: 0xAC
 */
void FSMState00_SelectData::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mMainScreen.inDataBall(mgr->mCurrSelection);
	mgr->mMainScreen.openDataWindow(mgr->mCurrSelection);
	mgr->mMainScreen.openMSG(Screen::FileSelect::TMainScreen::MessageType_SelectAFile);

	Screen::FileSelect::TFileData* data = &mgr->mMainScreen.mFileData[mgr->mCurrSelection];
	if (!data->mIsNewFile || data->mIsBrokenFile) {
		mgr->mMainScreen.inCopyErase();
	}

	mIsChangeSel = false;
	u32 time     = 0.5f / sys->mDeltaTime;
	mCounter     = time;
	mCounterMax  = time;
}

/**
 * @note Address: 0x803DF6B8
 * @note Size: 0x254
 */
void FSMState00_SelectData::do_exec(TMgr* mgr)
{
	if (mgr->mMainScreen.isWaitScreen()) {
		if (mCounter) {
			mCounter--;
		}
		Controller* control = mgr->mController;
		int prev            = mgr->mCurrSelection;
		mgr->mCountNumInterface.update();

		bool save                           = true;
		Screen::FileSelect::TFileData* data = &mgr->mMainScreen.mFileData[mgr->mCurrSelection];
		if (data->mIsNewFile && !data->mIsBrokenFile) {
			save = false;
		}

		if (mgr->mCurrSelection != prev) {
			mgr->mMainScreen.outDataBall(prev);
			mgr->mMainScreen.closeDataWindow();
			mgr->mMainScreen.inDataBall(mgr->mCurrSelection);
			if (save) {
				mgr->mMainScreen.inCopyErase();
			} else {
				mgr->mMainScreen.outCopyErase();
			}
			mIsChangeSel = true;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		}

		if (mgr->mMainScreen.isFinishCloseDataWindow() && mIsChangeSel) {
			mIsChangeSel = false;
			mgr->mMainScreen.openDataWindow(mgr->mCurrSelection);
		}

		if (!mCounter) {
			u32 input = control->getButtonDown();
			if (input & Controller::PRESS_A) {
				transit(mgr, FSSTATE_CheckData, nullptr);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
			} else if (input & Controller::PRESS_Y) {
				if (save) {
					transit(mgr, FSSTATE_WhichDataDoYouCopyTo, nullptr);
					mgr->mMainScreen.closeDataWindow();
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
				}
			} else if (input & Controller::PRESS_X) {
				if (save) {
					transit(mgr, FSSTATE_DoYouDelete, nullptr);
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
				}
			} else if (input & Controller::PRESS_B) {
				mgr->mMainScreen.closeScreen(nullptr);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
			}
		}
	}

	if (mgr->mMainScreen.isFinishScreen()) {
		mgr->goEnd_(TMgr::END_Cancel);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       isWaitScreen__Q33ebi6Screen11TScreenBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803DF8D0
	lwz      r3, 0x14(r30)
	cmplwi   r3, 0
	beq      lbl_803DF6F4
	addi     r0, r3, -1
	stw      r0, 0x14(r30)

lbl_803DF6F4:
	lwz      r28, 0xc00(r31)
	addi     r3, r31, 0xc04
	lwz      r27, 0xc30(r31)
	bl       update__Q23ebi24EUTPadInterface_countNumFv
	lwz      r0, 0xc30(r31)
	li       r29, 1
	mulli    r3, r0, 0x34
	addi     r3, r3, 0xb00
	add      r3, r31, r3
	lbz      r0, 1(r3)
	cmplwi   r0, 0
	beq      lbl_803DF734
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_803DF734
	li       r29, 0

lbl_803DF734:
	lwz      r0, 0xc30(r31)
	cmpw     r27, r0
	beq      lbl_803DF794
	mr       r3, r31
	mr       r4, r27
	bl       outDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl
	mr       r3, r31
	bl       closeDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv
	lwz      r4, 0xc30(r31)
	mr       r3, r31
	bl       inDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl
	clrlwi.  r0, r29, 0x18
	beq      lbl_803DF774
	mr       r3, r31
	bl       inCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv
	b        lbl_803DF77C

lbl_803DF774:
	mr       r3, r31
	bl       outCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv

lbl_803DF77C:
	li       r0, 1
	li       r4, 0x1802
	stb      r0, 0x10(r30)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_803DF794:
	mr       r3, r31
	bl       isFinishCloseDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803DF7C4
	lbz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_803DF7C4
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x10(r30)
	lwz      r4, 0xc30(r31)
	bl       openDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFl

lbl_803DF7C4:
	lwz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_803DF8D0
	lwz      r3, 0x1c(r28)
	rlwinm.  r0, r3, 0, 0x17, 0x17
	beq      lbl_803DF810
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1800
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_803DF8D0

lbl_803DF810:
	rlwinm.  r0, r3, 0, 0x14, 0x14
	beq      lbl_803DF85C
	clrlwi.  r0, r29, 0x18
	beq      lbl_803DF8D0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       closeDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1800
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_803DF8D0

lbl_803DF85C:
	rlwinm.  r0, r3, 0, 0x15, 0x15
	beq      lbl_803DF8A0
	clrlwi.  r0, r29, 0x18
	beq      lbl_803DF8D0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1800
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_803DF8D0

lbl_803DF8A0:
	rlwinm.  r0, r3, 0, 0x16, 0x16
	beq      lbl_803DF8D0
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1801
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_803DF8D0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803DF8F8
	mr       r3, r31
	li       r4, 5
	bl       goEnd___Q33ebi2FS4TMgrFQ43ebi2FS4TMgr7enumEnd

lbl_803DF8F8:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x803DF90C
 * @note Size: 0x64
 */
void FSMState00b_CheckData::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mMainScreen.closeMSG();
	mgr->mMainScreen.outCopyErase();
	mgr->mMainScreen.outDataBall(mgr->mCurrSelection);
	mgr->mMainScreen.createFiledecide(mgr->mCurrSelection);

	mStatus = CheckDataState_DoLoad;
}

/**
 * @note Address: 0x803DF970
 * @note Size: 0x1E0
 */
void FSMState00b_CheckData::do_exec(TMgr* mgr)
{
	switch (mStatus) {
	case CheckDataState_DoLoad:
		if (sys->mCardMgr->isSaveValid()) {
			P2ASSERTLINE(625, sys->mCardMgr->loadPlayer(mgr->mCurrSelection));
			mStatus = CheckDataState_GetStatus;
		}
		break;
	case CheckDataState_GetStatus:
		if (sys->mCardMgr->isSaveValid()) {
			mCardState = sys->mCardMgr->getCardStatus();
			mStatus    = CheckDataState_Finish;
		}
		break;
	case CheckDataState_Finish:
		if (mgr->mMainScreen.isFinishCloseMSG() && mgr->mMainScreen.isFinishOutDataBall(mgr->mCurrSelection)) {
			switch (mCardState) {
			case Game::MemoryCard::Mgr::MCS_IOError:
				transit(mgr, FSState_DecideData, nullptr);
				break;
			case Game::MemoryCard::Mgr::MCS_13:
				mgr->mMainScreen.inDataBall(mgr->mCurrSelection);
				transit(mgr, FSSTATE_DataBroken, nullptr);
				break;
			default:
				mgr->mMainScreen.inDataBall(mgr->mCurrSelection);
				transit(mgr, FSSTATE_DataBroken, nullptr);
				break;
			}
		}
		break;
	}
}

/**
 * @note Address: 0x803DFB50
 * @note Size: 0x3C
 */
void FSMState00c_DecideData::do_init(TMgr* mgr, Game::StateArg*)
{
	// make effect for selected save file
	mgr->mMainScreen.decideDataBall(mgr->mCurrSelection);
	mgr->mMainScreen.decideDataWindow();
}

/**
 * @note Address: 0x803DFB8C
 * @note Size: 0xB4
 */
void FSMState00c_DecideData::do_exec(TMgr* mgr)
{
	if (mgr->mMainScreen.isWaitScreen()) {
		if (mgr->mMainScreen.isFinishDecideDataBall(mgr->mCurrSelection)) {
			mgr->mMainScreen.closeScreen(nullptr);
		}
	}

	if (mgr->mMainScreen.isFinishScreen()) {
		Screen::FileSelect::TFileData* data = &mgr->mMainScreen.mFileData[mgr->mCurrSelection];
		if (data->mIsNewFile) {
			mgr->goEnd_(TMgr::END_StartNewFile);
		} else {
			mgr->goEnd_(TMgr::END_OpenSaveFile);
		}
	}
}

/**
 * @note Address: 0x803DFC40
 * @note Size: 0xB0
 */
void FSMState04_WhichDataDoYouCopyTo::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mMainScreen.createCopyCursor(mgr->mCurrSelection);
	mgr->mMainScreen.openMSG(Screen::FileSelect::TMainScreen::MessageType_CopyWhere);
	mgr->mMainScreen.outCopyErase();

	// select default file to copy to
	switch (mgr->mCurrSelection) {
	case 0:
		mgr->mCopySelection = 1;
		break;
	case 1:
		mgr->mCopySelection = 0;
		break;
	case 2:
		mgr->mCopySelection = 0;
		break;
	}

	mStatus     = CopyToState_Decide;
	mExitState  = false;
	mIsChanging = true;
}

/**
 * @note Address: 0x803DFCF0
 * @note Size: 0x29C
 */
void FSMState04_WhichDataDoYouCopyTo::do_exec(TMgr* mgr)
{
	switch (mStatus) {
	case CopyToState_Decide:
		// check if need to change current file selection
		// store value before changes to see if a change happened
		int prev = mgr->mCopySelection;
		if (mgr->mController->isMoveRight()) {
			mgr->mMainScreen.moveRightCopyCursor();
			switch (mgr->mCurrSelection) {
			case 0:
				mgr->mCopySelection = 2;
				break;
			case 1:
				mgr->mCopySelection = 2;
				break;
			case 2:
				mgr->mCopySelection = 1;
				break;
			}
		} else if (mgr->mController->isMoveLeft()) {
			mgr->mMainScreen.moveLeftCopyCursor();
			switch (mgr->mCurrSelection) {
			case 0:
				mgr->mCopySelection = 1;
				break;
			case 1:
				mgr->mCopySelection = 0;
				break;
			case 2:
				mgr->mCopySelection = 0;
				break;
			}
		}

		// If selection has changed, close current save info
		if (prev != (int)mgr->mCopySelection) {
			mgr->mMainScreen.closeDataWindow();
			mIsChanging = true;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		}

		// once save info is done closing, open the new save info
		if (mgr->mMainScreen.isFinishCloseDataWindow() && mIsChanging) {
			mIsChanging = false;
			mgr->mMainScreen.openDataWindow(mgr->mCopySelection);
		}

		// End state if pressing A or B
		if (mgr->mController->getButtonDown() & Controller::PRESS_A) {
			mgr->mMainScreen.closeMSG();
			mStatus    = CopyToState_Finish;
			mExitState = false;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
		} else if (mgr->mController->getButtonDown() & Controller::PRESS_B) {
			mgr->mMainScreen.closeMSG();
			mgr->mMainScreen.fadeCopyCursor();
			mStatus    = CopyToState_Finish;
			mExitState = true;
			mgr->mMainScreen.closeDataWindow();
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
		}
		break;
	case CopyToState_Finish:
		// Wait for message to finish closing before exiting state
		if (mgr->mMainScreen.isFinishCloseMSG()) {
			// If press B, return to standard selecting state
			// if press A, choose a file to overwrite
			if (mExitState) {
				transit(mgr, FSSTATE_SelectData, nullptr);
			} else {
				transit(mgr, FSSTATE_DoYouOverwrite, nullptr);
			}
		}
		break;
	}
}

/**
 * @note Address: 0x803DFF8C
 * @note Size: 0xA4
 */
TMgr::TMgr()
    : mCounter(0)
    , mCounterMax(0)
{
	mStateMachine.init(this);
	mStateMachine.start(this, 0, nullptr);
	mCurrSelection = 0;
}

/**
 * @note Address: 0x803E0030
 * @note Size: 0x48
 */
void TMgr::setController(Controller* control)
{
	mController = control;
	mCountNumInterface.init(mController, 0, 2, &mCurrSelection, EUTPadInterface_countNum::MODE_RIGHTLEFT, 1.0f, 1.0f);
}

/**
 * @note Address: 0x803E0078
 * @note Size: 0xFC
 */
void TMgr::perseInfo(Game::MemoryCard::PlayerFileInfo& info)
{
	for (int i = 0; i < 3; i++) {
		Game::MemoryCard::Player* player = info.getPlayer(i);
		bool broken                      = info.isBrokenFile(i);

		u32 floor, cave, treasure, poko, white, purple, yellow, red, blue, day, minutes, hours;
		floor    = player->mCaveFloor;
		cave     = player->mCaveID;
		treasure = player->mTreasures;
		poko     = player->mPokos;
		white    = player->mWhitePikis;
		purple   = player->mPurplePikis;
		yellow   = player->mYellowPikis;
		red      = player->mRedPikis;
		blue     = player->mBluePikis;
		day      = player->mDay;
		minutes  = player->mPlayTime % 60;
		hours    = player->mPlayTime / 60;

		mMainScreen.getFileData(i)->setData(info.isNewFile(i), day, blue, red, yellow, purple, white, poko, treasure, cave, floor, hours,
		                                    minutes, broken);

		char buffer[16];
		EUTDebug_Tag32ToName(player->mCaveID, buffer);
	}
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r5, 0x88888889@ha
	stw      r0, 0x64(r1)
	stmw     r14, 0x18(r1)
	mr       r30, r4
	li       r31, 0
	mr       r16, r3
	addi     r29, r5, 0x88888889@l

lbl_803E009C:
	mr       r3, r30
	mr       r4, r31
	bl       getPlayer__Q34Game10MemoryCard14PlayerFileInfoFi
	mr       r28, r3
	mr       r3, r30
	mr       r4, r31
	bl       isBrokenFile__Q34Game10MemoryCard14PlayerFileInfoFi
	lwz      r15, 0x30(r28)
	mr       r14, r3
	lwz      r18, 0x2c(r28)
	mr       r3, r30
	mulhwu   r0, r29, r15
	lwz      r19, 0x28(r28)
	lwz      r20, 0x24(r28)
	mr       r4, r31
	lwz      r21, 0x20(r28)
	lwz      r22, 0x18(r28)
	srwi     r0, r0, 5
	lwz      r23, 0x1c(r28)
	mulli    r0, r0, 0x3c
	lwz      r24, 0x14(r28)
	lwz      r25, 0xc(r28)
	lwz      r26, 0x10(r28)
	lwz      r27, 8(r28)
	subf     r17, r0, r15
	bl       isNewFile__Q34Game10MemoryCard14PlayerFileInfoFi
	stb      r3, 0xb01(r16)
	mulhwu   r0, r29, r15
	addi     r4, r1, 8
	stw      r27, 0xb04(r16)
	stw      r26, 0xb08(r16)
	stw      r25, 0xb0c(r16)
	srwi     r0, r0, 5
	stw      r24, 0xb10(r16)
	stw      r23, 0xb18(r16)
	stw      r22, 0xb14(r16)
	stw      r21, 0xb1c(r16)
	stw      r20, 0xb20(r16)
	stw      r19, 0xb24(r16)
	stw      r18, 0xb28(r16)
	stw      r0, 0xb2c(r16)
	stw      r17, 0xb30(r16)
	stb      r14, 0xb00(r16)
	lwz      r3, 0x28(r28)
	bl       EUTDebug_Tag32ToName__3ebiFUlPc
	addi     r31, r31, 1
	addi     r16, r16, 0x34
	cmpwi    r31, 3
	blt      lbl_803E009C
	lmw      r14, 0x18(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x803E0174
 * @note Size: 0x98
 */
void TMgr::update()
{
	mStateMachine.exec(this);
	if (getStateID() != FSSTATE_Standby) {
		sys->mCardMgr->update();
		checkAndTransitNoCard_();
		mMainScreen.update();
		if (mCounter) {
			mCounter--;
		}
	}
}

/**
 * @note Address: 0x803E020C
 * @note Size: 0x48
 */
void TMgr::draw()
{
	if (getStateID() != FSSTATE_Standby) {
		mMainScreen.draw();
	}
}

/**
 * @note Address: 0x803E0254
 * @note Size: 0x44
 */
void TMgr::startSeq()
{
	mInSeq = true;
	mStateMachine.transit(this, FSSTATE_OpenScene, nullptr);
}

/**
 * @note Address: 0x803E0298
 * @note Size: 0x58
 */
void TMgr::forceQuitSeq()
{
	mMainScreen.killScreen();
	mStateMachine.transit(this, FSSTATE_Standby, nullptr);
}

/**
 * @note Address: 0x803E02F0
 * @note Size: 0x28
 */
bool TMgr::isFinish() { return u8(getStateID() == FSSTATE_Standby); }

/**
 * @note Address: 0x803E0318
 * @note Size: 0x60
 */
void TMgr::goEnd_(enumEnd id)
{
	mEndStat = id;
	mStateMachine.transit(this, FSSTATE_Standby, nullptr);
	mMainScreen.killScreen();
}

/**
 * @note Address: 0x803E0378
 * @note Size: 0xD0
 */
void TMgr::checkAndTransitNoCard_()
{
	if (mInSeq) {
		if (isSaveError()) {
			goEnd_(END_StartNoCard);
		}
	}
}

/**
 * @note Address: 0x803E0448
 * @note Size: 0x58
 */
int TMgr::getStateID()
{
	P2ASSERTLINE(988, mCurrentState);
	return mCurrentState->mId;
}

} // namespace FS
} // namespace ebi
