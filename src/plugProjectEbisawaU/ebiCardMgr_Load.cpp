#include "ebi/CardError.h"
#include "P2Macros.h"
#include "System.h"
#include "Game/MemoryCard/Mgr.h"

namespace ebi {
namespace CardError {

/*
 * --INFO--
 * Address:	803E2520
 * Size:	00004C
 */
void FSMState_W00_NoCard::do_open(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_NoCard);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveNoCard);
	}
}

/*
 * --INFO--
 * Address:	803E256C
 * Size:	000058
 */
void FSMState_W00_NoCard::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_3);
	}
}

/*
 * --INFO--
 * Address:	803E25C4
 * Size:	00004C
 */
void FSMState_W00_NoCard::do_transitOnCard(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->goEnd_(TMgr::End_2);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_4);
	}
}

/*
 * --INFO--
 * Address:	803E2610
 * Size:	000054
 */
void FSMState_W01_IOError::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CardDamaged);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveCardDamaged);
	}
}

/*
 * --INFO--
 * Address:	803E2664
 * Size:	000058
 */
void FSMState_W01_IOError::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_3);
	}
}

/*
 * --INFO--
 * Address:	803E26BC
 * Size:	000054
 */
void FSMState_W02_WrongDevice::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_WrongDevice);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveWrongDevice);
	}
}

/*
 * --INFO--
 * Address:	803E2710
 * Size:	000058
 */
void FSMState_W02_WrongDevice::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_3);
	}
}

/*
 * --INFO--
 * Address:	803E2768
 * Size:	000054
 */
void FSMState_W03_WrongSector::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantUseCard);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveCantUseCard);
	}
}

/*
 * --INFO--
 * Address:	803E27BC
 * Size:	000058
 */
void FSMState_W03_WrongSector::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_3);
	}
}

/*
 * --INFO--
 * Address:	803E2814
 * Size:	000054
 */
void FSMState_W04_OverCapacity::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_NotEnoughSpace);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveNoSpace);
	}
}

/*
 * --INFO--
 * Address:	803E2868
 * Size:	000064
 */
void FSMState_W04_OverCapacity::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_InitCardOnIPL, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		transit(mgr, CARDERROR_InitCardOnIPL, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803E28CC
 * Size:	000054
 */
void FSMState_W05_InitCardOnIPL::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_GoToIPL);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_InsertOriginalCard);
	}
}

/*
 * --INFO--
 * Address:	803E2920
 * Size:	000064
 */
void FSMState_W05_InitCardOnIPL::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_DoYouOpenIPL, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		transit(mgr, CARDERROR_DoYouOpenIPL, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803E2984
 * Size:	000054
 */
void FSMState_W06_CardNotUsable::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantUseCard2);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveCantUseCard2);
	}
}

/*
 * --INFO--
 * Address:	803E29D8
 * Size:	000058
 */
void FSMState_W06_CardNotUsable::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_3);
	}
}

/*
 * --INFO--
 * Address:	803E2A30
 * Size:	000054
 */
void FSMState_W07_NoFileForSave::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_NoFileFound);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveNoFile);
	}
}

/*
 * --INFO--
 * Address:	803E2A84
 * Size:	000058
 */
void FSMState_W07_NoFileForSave::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_3);
	}
}

/*
 * --INFO--
 * Address:	803E2ADC
 * Size:	000054
 */
void FSMState_W08_FinishFormat::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CardFormatted);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_FormatSuccess);
	}
}

/*
 * --INFO--
 * Address:	803E2B30
 * Size:	00004C
 */
void FSMState_W08_FinishFormat::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->goEnd_(TMgr::End_2);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_4);
	}
}

/*
 * --INFO--
 * Address:	803E2B7C
 * Size:	000054
 */
void FSMState_W09_FinishCreateNewFile::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_FileCreated);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_FileCreated2);
	}
}

/*
 * --INFO--
 * Address:	803E2BD0
 * Size:	00004C
 */
void FSMState_W09_FinishCreateNewFile::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->goEnd_(TMgr::End_2);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_4);
	}
}

/*
 * --INFO--
 * Address:	803E2C1C
 * Size:	000064
 */
void FSMState_W10_SerialNoError::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		JUT_PANICLINE(236, "P2Assert");
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveInsertOriginalCard);
	}
}

/*
 * --INFO--
 * Address:	803E2C80
 * Size:	00005C
 */
void FSMState_W10_SerialNoError::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		JUT_PANICLINE(245, "P2Assert");
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_3);
	}
}

/*
 * --INFO--
 * Address:	803E2CDC
 * Size:	000054
 */
void FSMState_WF0_FailToFormat_NoCard::do_open(TMgr* mgr)
{
	mDoCheckCard = false;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantFormat);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantFormat2);
	}
}

/*
 * --INFO--
 * Address:	803E2D30
 * Size:	00004C
 */
void FSMState_WF0_FailToFormat_NoCard::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->goEnd_(TMgr::End_2);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_4);
	}
}

/*
 * --INFO--
 * Address:	803E2D7C
 * Size:	000054
 */
void FSMState_WF1_FailToFormat_IOError::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantFormat);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantFormat2);
	}
}

/*
 * --INFO--
 * Address:	803E2DD0
 * Size:	00004C
 */
void FSMState_WF1_FailToFormat_IOError::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->goEnd_(TMgr::End_2);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_4);
	}
}

/*
 * --INFO--
 * Address:	803E2E1C
 * Size:	000054
 */
void FSMState_WF2_FailToCreateNewFile_NoCard::do_open(TMgr* mgr)
{
	mDoCheckCard = false;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantCreateFile);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantCreateFile2);
	}
}

/*
 * --INFO--
 * Address:	803E2E70
 * Size:	00004C
 */
void FSMState_WF2_FailToCreateNewFile_NoCard::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->goEnd_(TMgr::End_2);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_4);
	}
}

/*
 * --INFO--
 * Address:	803E2EBC
 * Size:	000054
 */
void FSMState_WF3_FailToCreateNewFile_IOError::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantCreateFile);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantCreateFile2);
	}
}

/*
 * --INFO--
 * Address:	803E2F10
 * Size:	00004C
 */
void FSMState_WF3_FailToCreateNewFile_IOError::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->goEnd_(TMgr::End_2);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_4);
	}
}

/*
 * --INFO--
 * Address:	803E2F5C
 * Size:	000064
 */
void FSMState_WF4_FailToSave_NoCard::do_open(TMgr* mgr)
{
	mDoCheckCard = false;
	if (mgr->mIsBroken == FALSE) {
		JUT_PANICLINE(342, "P2Assert");
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_SaveFail);
	}
}

/*
 * --INFO--
 * Address:	803E2FC0
 * Size:	00004C
 */
void FSMState_WF4_FailToSave_NoCard::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->goEnd_(TMgr::End_2);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_4);
	}
}

/*
 * --INFO--
 * Address:	803E300C
 * Size:	000064
 */
void FSMState_WF5_FailToSave_IOError::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		JUT_PANICLINE(363, "P2Assert");
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_SaveFail);
	}
}

/*
 * --INFO--
 * Address:	803E3070
 * Size:	00004C
 */
void FSMState_WF5_FailToSave_IOError::do_transit(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->goEnd_(TMgr::End_2);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_4);
	}
}

/*
 * --INFO--
 * Address:	803E30BC
 * Size:	000054
 */
void FSMState_Q00_DataBrokenAndDoYouFormat::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoFormat);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveDoFormat);
	}
}

/*
 * --INFO--
 * Address:	803E3110
 * Size:	000064
 */
void FSMState_Q00_DataBrokenAndDoYouFormat::do_transitYes(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_DoYouFormat, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		transit(mgr, CARDERROR_DoYouFormat, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803E3174
 * Size:	000064
 */
void FSMState_Q00_DataBrokenAndDoYouFormat::do_transitNo(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_CardNotUsable, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		transit(mgr, CARDERROR_CardNotUsable, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803E31D8
 * Size:	000054
 */
void FSMState_Q01_DoYouOpenIPL::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoGotoIPL);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoGotoIPL2);
	}
}

/*
 * --INFO--
 * Address:	803E322C
 * Size:	000058
 */
void FSMState_Q01_DoYouOpenIPL::do_transitYes(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		sys->resetOn(true);
	} else if (mgr->mIsBroken == TRUE) {
		transit(mgr, CARDERROR_GameCantSave, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803E3284
 * Size:	000058
 */
void FSMState_Q01_DoYouOpenIPL::do_transitNo(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_3);
	}
}

/*
 * --INFO--
 * Address:	803E32DC
 * Size:	000054
 */
void FSMState_Q02_DoYouFormat::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoFormatConfirm);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoFormat2);
	}
}

/*
 * --INFO--
 * Address:	803E3330
 * Size:	000064
 */
void FSMState_Q02_DoYouFormat::do_transitYes(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_NowFormat, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		transit(mgr, CARDERROR_NowFormat, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803E3394
 * Size:	000064
 */
void FSMState_Q02_DoYouFormat::do_transitNo(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_CardNotUsable, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		transit(mgr, CARDERROR_CardNotUsable, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803E33F8
 * Size:	000054
 */
void FSMState_Q03_DoYouCreateNewFile::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoCreateFile);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoCreateFile2);
	}
}

/*
 * --INFO--
 * Address:	803E344C
 * Size:	000064
 */
void FSMState_Q03_DoYouCreateNewFile::do_transitYes(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_NowCreateNewFile, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		transit(mgr, CARDERROR_NowCreateNewFile, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803E34B0
 * Size:	000064
 */
void FSMState_Q03_DoYouCreateNewFile::do_transitNo(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		transit(mgr, CARDERROR_NoFileForSave, nullptr);
	} else if (mgr->mIsBroken == TRUE) {
		transit(mgr, CARDERROR_NoFileForSave, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803E3514
 * Size:	000064
 */
void FSMState_Q04_DoYouStartGameWithoutSave::do_open(TMgr* mgr)
{
	mDoCheckCard = false;
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoPlayNoSaving);
	} else if (mgr->mIsBroken == TRUE) {
		JUT_PANICLINE(509, "P2Assert");
	}
}

/*
 * --INFO--
 * Address:	803E3578
 * Size:	00005C
 */
void FSMState_Q04_DoYouStartGameWithoutSave::do_transitYes(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->goEnd_(TMgr::End_1);
	} else if (mgr->mIsBroken == TRUE) {
		JUT_PANICLINE(518, "P2Assert");
	}
}

/*
 * --INFO--
 * Address:	803E35D4
 * Size:	00005C
 */
void FSMState_Q04_DoYouStartGameWithoutSave::do_transitNo(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->goEnd_(TMgr::End_2);
	} else if (mgr->mIsBroken == TRUE) {
		JUT_PANICLINE(527, "P2Assert");
	}
}

/*
 * --INFO--
 * Address:	803E3630
 * Size:	000064
 */
void FSMState_Q05_GameCantSave::do_open(TMgr* mgr)
{
	mDoCheckCard = false;
	if (mgr->mIsBroken == FALSE) {
		JUT_PANICLINE(537, "P2Assert");
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveGotoIPL);
	}
}

/*
 * --INFO--
 * Address:	803E3694
 * Size:	00005C
 */
void FSMState_Q05_GameCantSave::do_transitYes(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		JUT_PANICLINE(546, "P2Assert");
	} else if (mgr->mIsBroken == TRUE) {
		sys->resetOn(true);
	}
}

/*
 * --INFO--
 * Address:	803E36F0
 * Size:	00005C
 */
void FSMState_Q05_GameCantSave::do_transitNo(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		JUT_PANICLINE(555, "P2Assert");
	} else if (mgr->mIsBroken == TRUE) {
		mgr->goEnd_(TMgr::End_3);
	}
}

/*
 * --INFO--
 * Address:	803E374C
 * Size:	000028
 */
bool FSMState_WN0_NowFormat::do_cardRequest() { return static_cast<Game::MemoryCard::Mgr*>(sys->mCardMgr)->format(); }

/*
 * --INFO--
 * Address:	803E3774
 * Size:	00004C
 */
void FSMState_WN0_NowFormat::do_open(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_Formatting);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_Formatting2);
	}
}

/*
 * --INFO--
 * Address:	803E37C0
 * Size:	000034
 */
void FSMState_WN0_NowFormat::do_transitCardReady(TMgr* mgr) { transit(mgr, CARDERROR_FinishFormat, nullptr); }

/*
 * --INFO--
 * Address:	803E37F4
 * Size:	000034
 */
void FSMState_WN0_NowFormat::do_transitCardNoCard(TMgr* mgr) { transit(mgr, CARDERROR_FailToFormat_NoCard, nullptr); }

/*
 * --INFO--
 * Address:	803E3828
 * Size:	000034
 */
void FSMState_WN0_NowFormat::do_transitCardIOError(TMgr* mgr) { transit(mgr, CARDERROR_FailToFormat_IOError, nullptr); }

/*
 * --INFO--
 * Address:	803E385C
 * Size:	00004C
 */
void FSMState_WN1_NowCreateNewFile::do_open(TMgr* mgr)
{
	if (mgr->mIsBroken == FALSE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CreatingFile);
	} else if (mgr->mIsBroken == TRUE) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CreatingFile2);
	}
}

/*
 * --INFO--
 * Address:	803E38A8
 * Size:	000028
 */
bool FSMState_WN1_NowCreateNewFile::do_cardRequest() { return static_cast<Game::MemoryCard::Mgr*>(sys->mCardMgr)->createNewFile(); }

/*
 * --INFO--
 * Address:	803E38D0
 * Size:	000034
 */
void FSMState_WN1_NowCreateNewFile::do_transitCardReady(TMgr* mgr) { transit(mgr, CARDERROR_FinishCreateNewFile, nullptr); }

/*
 * --INFO--
 * Address:	803E3904
 * Size:	000034
 */
void FSMState_WN1_NowCreateNewFile::do_transitCardNoCard(TMgr* mgr) { transit(mgr, CARDERROR_FailToCreateNewFile_NoCard, nullptr); }

/*
 * --INFO--
 * Address:	803E3938
 * Size:	000034
 */
void FSMState_WN1_NowCreateNewFile::do_transitCardIOError(TMgr* mgr) { transit(mgr, CARDERROR_FailToCreateNewFile_IOError, nullptr); }

} // namespace CardError
} // namespace ebi
