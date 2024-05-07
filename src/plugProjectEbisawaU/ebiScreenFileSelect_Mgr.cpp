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
	if (!mIsSelected) {
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
		}
	} else if (!mClosedMsg) {
		mClosedMsg = true;
		do_decide(mgr);
		mgr->mMainScreen.closeMSG();
	}

	if (mgr->mMainScreen.isFinishCloseMSG() && mIsSelected && mClosedMsg) {
		if (mYesNoState) {
			transit(mgr, mNextStateYes, nullptr);
		} else {
			transit(mgr, mNextStateNo, nullptr);
		}
	}
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

		// I'M DONE WITH YOUR BULLSHIT, GAME
		// I'M DOOOOOOOOOOOOOOOOOOOOOOOOOONE
		bool save;
		for (int i = 0; i < 1; i++) {
			save = !mgr->mMainScreen.getFileData(mgr->mCurrSelection)->mIsNewFile
			    || mgr->mMainScreen.getFileData(mgr->mCurrSelection)->mIsBrokenFile;
		}

		if (prev != mgr->mCurrSelection) {
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
		if (sys->mCardMgr->isSaveInvalid()) {
			P2ASSERTLINE(625, sys->mCardMgr->loadPlayer(mgr->mCurrSelection));
			mStatus = CheckDataState_GetStatus;
		}
		break;
	case CheckDataState_GetStatus:
		if (sys->mCardMgr->isSaveInvalid()) {
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

		mMainScreen.getFileData(i)->setData(info.isNewFile(i), player->mDay, player->mBluePikis, player->mRedPikis, player->mYellowPikis,
		                                    player->mPurplePikis, player->mWhitePikis, player->mPokos, player->mTreasures, player->mCaveID,
		                                    player->mCaveFloor, player->mPlayTime / 60, player->mPlayTime % 60, info.isBrokenFile(i));

		char buffer[16];
		EUTDebug_Tag32ToName(player->mCaveID, buffer);
	}
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
