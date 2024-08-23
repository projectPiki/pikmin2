#include "ebi/CardError.h"
#include "P2Macros.h"
#include "System.h"
#include "Game/MemoryCard/Mgr.h"

namespace ebi {
namespace CardError {

/**
 * @note Address: 0x803E2520
 * @note Size: 0x4C
 */
void FSMState_W00_NoCard::do_open(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_NoCard);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveNoCard);
	}
}

/**
 * @note Address: 0x803E256C
 * @note Size: 0x58
 */
void FSMState_W00_NoCard::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_RestartSaveOption);
	}
}

/**
 * @note Address: 0x803E25C4
 * @note Size: 0x4C
 */
void FSMState_W00_NoCard::do_transitOnCard(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->goEnd_(TMgr::End_OpenFileSelect);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_GoToCheckCard);
	}
}

/**
 * @note Address: 0x803E2610
 * @note Size: 0x54
 */
void FSMState_W01_IOError::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CardDamaged);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveCardDamaged);
	}
}

/**
 * @note Address: 0x803E2664
 * @note Size: 0x58
 */
void FSMState_W01_IOError::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_RestartSaveOption);
	}
}

/**
 * @note Address: 0x803E26BC
 * @note Size: 0x54
 */
void FSMState_W02_WrongDevice::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_WrongDevice);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveWrongDevice);
	}
}

/**
 * @note Address: 0x803E2710
 * @note Size: 0x58
 */
void FSMState_W02_WrongDevice::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_RestartSaveOption);
	}
}

/**
 * @note Address: 0x803E2768
 * @note Size: 0x54
 */
void FSMState_W03_WrongSector::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantUseCard);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveCantUseCard);
	}
}

/**
 * @note Address: 0x803E27BC
 * @note Size: 0x58
 */
void FSMState_W03_WrongSector::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_RestartSaveOption);
	}
}

/**
 * @note Address: 0x803E2814
 * @note Size: 0x54
 */
void FSMState_W04_OverCapacity::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_NotEnoughSpace);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveNoSpace);
	}
}

/**
 * @note Address: 0x803E2868
 * @note Size: 0x64
 */
void FSMState_W04_OverCapacity::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_InitCardOnIPL, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		transit(mgr, CARDERROR_InitCardOnIPL, nullptr);
	}
}

/**
 * @note Address: 0x803E28CC
 * @note Size: 0x54
 */
void FSMState_W05_InitCardOnIPL::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_GoToIPL);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_InsertOriginalCard);
	}
}

/**
 * @note Address: 0x803E2920
 * @note Size: 0x64
 */
void FSMState_W05_InitCardOnIPL::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_DoYouOpenIPL, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		transit(mgr, CARDERROR_DoYouOpenIPL, nullptr);
	}
}

/**
 * @note Address: 0x803E2984
 * @note Size: 0x54
 */
void FSMState_W06_CardNotUsable::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantUseCard2);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveCantUseCard2);
	}
}

/**
 * @note Address: 0x803E29D8
 * @note Size: 0x58
 */
void FSMState_W06_CardNotUsable::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_RestartSaveOption);
	}
}

/**
 * @note Address: 0x803E2A30
 * @note Size: 0x54
 */
void FSMState_W07_NoFileForSave::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_NoFileFound);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveNoFile);
	}
}

/**
 * @note Address: 0x803E2A84
 * @note Size: 0x58
 */
void FSMState_W07_NoFileForSave::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_RestartSaveOption);
	}
}

/**
 * @note Address: 0x803E2ADC
 * @note Size: 0x54
 */
void FSMState_W08_FinishFormat::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CardFormatted);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_FormatSuccess);
	}
}

/**
 * @note Address: 0x803E2B30
 * @note Size: 0x4C
 */
void FSMState_W08_FinishFormat::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->goEnd_(TMgr::End_OpenFileSelect);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_GoToCheckCard);
	}
}

/**
 * @note Address: 0x803E2B7C
 * @note Size: 0x54
 */
void FSMState_W09_FinishCreateNewFile::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_FileCreated);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_FileCreated2);
	}
}

/**
 * @note Address: 0x803E2BD0
 * @note Size: 0x4C
 */
void FSMState_W09_FinishCreateNewFile::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->goEnd_(TMgr::End_OpenFileSelect);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_GoToCheckCard);
	}
}

/**
 * @note Address: 0x803E2C1C
 * @note Size: 0x64
 */
void FSMState_W10_SerialNoError::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		P2ASSERTLINE(236, false);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveInsertOriginalCard);
	}
}

/**
 * @note Address: 0x803E2C80
 * @note Size: 0x5C
 */
void FSMState_W10_SerialNoError::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		P2ASSERTLINE(245, false);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_RestartSaveOption);
	}
}

/**
 * @note Address: 0x803E2CDC
 * @note Size: 0x54
 */
void FSMState_WF0_FailToFormat_NoCard::do_open(TMgr* mgr)
{
	mDoCheckCard = false;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantFormat);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantFormat2);
	}
}

/**
 * @note Address: 0x803E2D30
 * @note Size: 0x4C
 */
void FSMState_WF0_FailToFormat_NoCard::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->goEnd_(TMgr::End_OpenFileSelect);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_GoToCheckCard);
	}
}

/**
 * @note Address: 0x803E2D7C
 * @note Size: 0x54
 */
void FSMState_WF1_FailToFormat_IOError::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantFormat);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantFormat2);
	}
}

/**
 * @note Address: 0x803E2DD0
 * @note Size: 0x4C
 */
void FSMState_WF1_FailToFormat_IOError::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->goEnd_(TMgr::End_OpenFileSelect);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_GoToCheckCard);
	}
}

/**
 * @note Address: 0x803E2E1C
 * @note Size: 0x54
 */
void FSMState_WF2_FailToCreateNewFile_NoCard::do_open(TMgr* mgr)
{
	mDoCheckCard = false;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantCreateFile);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantCreateFile2);
	}
}

/**
 * @note Address: 0x803E2E70
 * @note Size: 0x4C
 */
void FSMState_WF2_FailToCreateNewFile_NoCard::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->goEnd_(TMgr::End_OpenFileSelect);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_GoToCheckCard);
	}
}

/**
 * @note Address: 0x803E2EBC
 * @note Size: 0x54
 */
void FSMState_WF3_FailToCreateNewFile_IOError::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantCreateFile);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantCreateFile2);
	}
}

/**
 * @note Address: 0x803E2F10
 * @note Size: 0x4C
 */
void FSMState_WF3_FailToCreateNewFile_IOError::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->goEnd_(TMgr::End_OpenFileSelect);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_GoToCheckCard);
	}
}

/**
 * @note Address: 0x803E2F5C
 * @note Size: 0x64
 */
void FSMState_WF4_FailToSave_NoCard::do_open(TMgr* mgr)
{
	mDoCheckCard = false;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		P2ASSERTLINE(342, false);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_SaveFail);
	}
}

/**
 * @note Address: 0x803E2FC0
 * @note Size: 0x4C
 */
void FSMState_WF4_FailToSave_NoCard::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->goEnd_(TMgr::End_OpenFileSelect);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_GoToCheckCard);
	}
}

/**
 * @note Address: 0x803E300C
 * @note Size: 0x64
 */
void FSMState_WF5_FailToSave_IOError::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		P2ASSERTLINE(363, false);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_SaveFail);
	}
}

/**
 * @note Address: 0x803E3070
 * @note Size: 0x4C
 */
void FSMState_WF5_FailToSave_IOError::do_transit(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->goEnd_(TMgr::End_OpenFileSelect);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_GoToCheckCard);
	}
}

/**
 * @note Address: 0x803E30BC
 * @note Size: 0x54
 */
void FSMState_Q00_DataBrokenAndDoYouFormat::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoFormat);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveDoFormat);
	}
}

/**
 * @note Address: 0x803E3110
 * @note Size: 0x64
 */
void FSMState_Q00_DataBrokenAndDoYouFormat::do_transitYes(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_DoYouFormat, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		transit(mgr, CARDERROR_DoYouFormat, nullptr);
	}
}

/**
 * @note Address: 0x803E3174
 * @note Size: 0x64
 */
void FSMState_Q00_DataBrokenAndDoYouFormat::do_transitNo(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_CardNotUsable, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		transit(mgr, CARDERROR_CardNotUsable, nullptr);
	}
}

/**
 * @note Address: 0x803E31D8
 * @note Size: 0x54
 */
void FSMState_Q01_DoYouOpenIPL::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoGotoIPL);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoGotoIPL2);
	}
}

/**
 * @note Address: 0x803E322C
 * @note Size: 0x58
 */
void FSMState_Q01_DoYouOpenIPL::do_transitYes(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		sys->resetOn(true);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		transit(mgr, CARDERROR_GameCantSave, nullptr);
	}
}

/**
 * @note Address: 0x803E3284
 * @note Size: 0x58
 */
void FSMState_Q01_DoYouOpenIPL::do_transitNo(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_DoYouStartGameWithoutSave, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_RestartSaveOption);
	}
}

/**
 * @note Address: 0x803E32DC
 * @note Size: 0x54
 */
void FSMState_Q02_DoYouFormat::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoFormatConfirm);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoFormat2);
	}
}

/**
 * @note Address: 0x803E3330
 * @note Size: 0x64
 */
void FSMState_Q02_DoYouFormat::do_transitYes(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_NowFormat, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		transit(mgr, CARDERROR_NowFormat, nullptr);
	}
}

/**
 * @note Address: 0x803E3394
 * @note Size: 0x64
 */
void FSMState_Q02_DoYouFormat::do_transitNo(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_CardNotUsable, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		transit(mgr, CARDERROR_CardNotUsable, nullptr);
	}
}

/**
 * @note Address: 0x803E33F8
 * @note Size: 0x54
 */
void FSMState_Q03_DoYouCreateNewFile::do_open(TMgr* mgr)
{
	mDoCheckCard = true;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoCreateFile);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoCreateFile2);
	}
}

/**
 * @note Address: 0x803E344C
 * @note Size: 0x64
 */
void FSMState_Q03_DoYouCreateNewFile::do_transitYes(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_NowCreateNewFile, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		transit(mgr, CARDERROR_NowCreateNewFile, nullptr);
	}
}

/**
 * @note Address: 0x803E34B0
 * @note Size: 0x64
 */
void FSMState_Q03_DoYouCreateNewFile::do_transitNo(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_NoFileForSave, nullptr);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		transit(mgr, CARDERROR_NoFileForSave, nullptr);
	}
}

/**
 * @note Address: 0x803E3514
 * @note Size: 0x64
 */
void FSMState_Q04_DoYouStartGameWithoutSave::do_open(TMgr* mgr)
{
	mDoCheckCard = false;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_DoPlayNoSaving);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		P2ASSERTLINE(509, false);
	}
}

/**
 * @note Address: 0x803E3578
 * @note Size: 0x5C
 */
void FSMState_Q04_DoYouStartGameWithoutSave::do_transitYes(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->goEnd_(TMgr::End_StartWithoutSave);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		P2ASSERTLINE(518, false);
	}
}

/**
 * @note Address: 0x803E35D4
 * @note Size: 0x5C
 */
void FSMState_Q04_DoYouStartGameWithoutSave::do_transitNo(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->goEnd_(TMgr::End_OpenFileSelect);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		P2ASSERTLINE(527, false);
	}
}

/**
 * @note Address: 0x803E3630
 * @note Size: 0x64
 */
void FSMState_Q05_GameCantSave::do_open(TMgr* mgr)
{
	mDoCheckCard = false;
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		P2ASSERTLINE(537, false);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CantSaveGotoIPL);
	}
}

/**
 * @note Address: 0x803E3694
 * @note Size: 0x5C
 */
void FSMState_Q05_GameCantSave::do_transitYes(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		P2ASSERTLINE(546, false);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		sys->resetOn(true);
	}
}

/**
 * @note Address: 0x803E36F0
 * @note Size: 0x5C
 */
void FSMState_Q05_GameCantSave::do_transitNo(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		P2ASSERTLINE(555, false);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->goEnd_(TMgr::End_RestartSaveOption);
	}
}

/**
 * @note Address: 0x803E374C
 * @note Size: 0x28
 */
bool FSMState_WN0_NowFormat::do_cardRequest() { return static_cast<Game::MemoryCard::Mgr*>(sys->mCardMgr)->format(); }

/**
 * @note Address: 0x803E3774
 * @note Size: 0x4C
 */
void FSMState_WN0_NowFormat::do_open(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_Formatting);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_Formatting2);
	}
}

/**
 * @note Address: 0x803E37C0
 * @note Size: 0x34
 */
void FSMState_WN0_NowFormat::do_transitCardReady(TMgr* mgr) { transit(mgr, CARDERROR_FinishFormat, nullptr); }

/**
 * @note Address: 0x803E37F4
 * @note Size: 0x34
 */
void FSMState_WN0_NowFormat::do_transitCardNoCard(TMgr* mgr) { transit(mgr, CARDERROR_FailToFormat_NoCard, nullptr); }

/**
 * @note Address: 0x803E3828
 * @note Size: 0x34
 */
void FSMState_WN0_NowFormat::do_transitCardIOError(TMgr* mgr) { transit(mgr, CARDERROR_FailToFormat_IOError, nullptr); }

/**
 * @note Address: 0x803E385C
 * @note Size: 0x4C
 */
void FSMState_WN1_NowCreateNewFile::do_open(TMgr* mgr)
{
	if (mgr->mParentMenuType == TMgr::Parent_FileSelect) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CreatingFile);
	} else if (mgr->mParentMenuType == TMgr::Parent_Save) {
		mgr->mScreen.open(Screen::TMemoryCard::OPEN_CreatingFile2);
	}
}

/**
 * @note Address: 0x803E38A8
 * @note Size: 0x28
 */
bool FSMState_WN1_NowCreateNewFile::do_cardRequest() { return static_cast<Game::MemoryCard::Mgr*>(sys->mCardMgr)->createNewFile(); }

/**
 * @note Address: 0x803E38D0
 * @note Size: 0x34
 */
void FSMState_WN1_NowCreateNewFile::do_transitCardReady(TMgr* mgr) { transit(mgr, CARDERROR_FinishCreateNewFile, nullptr); }

/**
 * @note Address: 0x803E3904
 * @note Size: 0x34
 */
void FSMState_WN1_NowCreateNewFile::do_transitCardNoCard(TMgr* mgr) { transit(mgr, CARDERROR_FailToCreateNewFile_NoCard, nullptr); }

/**
 * @note Address: 0x803E3938
 * @note Size: 0x34
 */
void FSMState_WN1_NowCreateNewFile::do_transitCardIOError(TMgr* mgr) { transit(mgr, CARDERROR_FailToCreateNewFile_IOError, nullptr); }

} // namespace CardError
} // namespace ebi
