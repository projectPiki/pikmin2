#include "ebi/Screen/TMemoryCard.h"
#include "ebi/Screen/TResourceObserver.h"
#include "og/newScreen/ogUtil.h"
#include "ebi/E2DGraph.h"
#include "System.h"
#include "PSSystem/PSSystemIF.h"
#include "Controller.h"
#include "SoundID.h"

namespace ebi {
namespace Screen {

static const char className[] = "ebiScreenMemoryCard";

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
TResourceObserver::TResourceObserver(TMemoryCard* owner) { mOwner = owner; }

/**
 * @note Address: 0x803C2244
 * @note Size: 0x6C
 */
TResourceObserver::~TResourceObserver() { mOwner->destroyResource(); }

/**
 * @note Address: 0x803C22B0
 * @note Size: 0xD8
 */
void TMemoryCard::loadResource(JKRHeap* heap)
{
	TResourceObserver* resource = new (heap, 0) TResourceObserver(this);
	sys->heapStatusStart("TScreenMemoryCard::loadResource", nullptr);

	char buf[264];
	og::newScreen::makeLanguageResName(buf, "memory_card.szs");

	JKRArchive* arc = JKRMountArchive(buf, JKRArchive::EMM_Mem, heap, JKRArchive::EMD_Head);

	P2ASSERTLINE(54, arc);

	sys->heapStatusEnd("TScreenMemoryCard::loadResource");
	setArchive(arc);
}

/**
 * @note Address: 0x803C2388
 * @note Size: 0x39C
 */
void TMemoryCard::setArchive(JKRArchive* arc)
{
	sys->heapStatusStart("TScreenMemoryCard::setArchive", nullptr);

	mScreenMain = new P2DScreen::Mgr_tuning;
	mScreenMain->set("memory_card.blo", 0x1100000, arc);

	mPaneMsg1 = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenMain, 'yes_00'));
	mPaneMsg2 = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenMain, 'no_00'));
	mPaneMsg3 = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenMain, 'pattern1'));
	mPaneMsg4 = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenMain, 'pattern2'));

	mPane_il00       = E2DScreen_searchAssert(mScreenMain, 'il_00');
	mPane_ir00       = E2DScreen_searchAssert(mScreenMain, 'ir_00');
	mPane_il01       = E2DScreen_searchAssert(mScreenMain, 'il_01');
	mPane_ir01       = E2DScreen_searchAssert(mScreenMain, 'ir_01');
	J2DTextBox* temp = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenMain, 's_color'));

	mPaneMsg1->setMsgID('1');
	mPaneMsg2->setMsgID('1');
	mPaneMsg3->setMsgID('1');
	mPaneMsg4->setMsgID('1');

	E2DPane_setTreeCallBackMessage(mScreenMain, mScreenMain);
	E2DPane_setTreeShow(mScreenMain);
	temp->hide();

	mPane_il00->setAlpha(0);
	mPane_ir00->setAlpha(0);
	mPane_il01->setAlpha(0);
	mPane_ir01->setAlpha(0);

	mScreenMain->addCallBackPane(mScreenMain, &mAnim1);
	mScreenMain->addCallBackPane(mPaneMsg3, &mAnim2);
	mScreenMain->addCallBackPane(mPaneMsg4, &mAnim3);
	mScreenMain->addCallBackPane(mPaneMsg1, &mAnim4);
	mScreenMain->addCallBackPane(mPaneMsg2, &mAnim5);
	mScreenMain->addCallBackPane(mScreenMain, &mCalcAnim);

	mAnim1.loadAnm("memory_card.bck", arc, 0, 99999);
	mAnim2.loadAnm("memory_card_pattern1.bck", arc, 0, 99999);
	mAnim3.loadAnm("memory_card_pattern2.bck", arc, 0, 99999);
	mAnim4.loadAnm("memory_card_yes.bck", arc, 0, 99999);
	mAnim5.loadAnm("memory_card_no.bck", arc, 0, 99999);
	mAnim1.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_2, true);

	mBlinkFont1.set(mPaneMsg2, temp);
	mBlinkFont2.set(mPaneMsg2, temp);

	mScreenMain->addCallBackPane(mPaneMsg1, &mBlinkFont1);
	mScreenMain->addCallBackPane(mPaneMsg2, &mBlinkFont2);

	mCursor1.setPanes(mPane_il00, mPane_il01);
	mCursor2.setPanes(mPane_ir00, mPane_ir01);

	sys->heapStatusEnd("TScreenMemoryCard::setArchive");
}

/**
 * @note Address: 0x803C28E0
 * @note Size: 0x18
 */
void TMemoryCard::destroyResource()
{
	mPaneMsg1 = nullptr;
	mPaneMsg2 = nullptr;
	mPaneMsg3 = nullptr;
	mPaneMsg4 = nullptr;
}

/**
 * @note Address: 0x803C28F8
 * @note Size: 0x1208
 */
void TMemoryCard::open(s32 type)
{
	P2ASSERTBOUNDSLINE(162, 0, type, 44);
	mIsPlaySavingSE = false;
	mMsgAlpha       = 30;
	mAlphaMod       = 30;

	switch (type) {
	case OPEN_None:
		startState(MEMCARD_Finish);
		mMsgAlpha = 0;
		mAlphaMod = 0;
		break;

	case OPEN_NoCard:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID(
		    '5450_00'); // "No Memory Card found in Slot A. Please check to make sure you have inserted a Memory Card properly."
		mPaneMsg4->setMsgID(
		    '5450_00'); // "No Memory Card found in Slot A. Please check to make sure you have inserted a Memory Card properly."
		mPaneMsg1->setMsgID(
		    '5450_00'); // "No Memory Card found in Slot A. Please check to make sure you have inserted a Memory Card properly."
		mPaneMsg2->setMsgID(
		    '5450_00'); // "No Memory Card found in Slot A. Please check to make sure you have inserted a Memory Card properly."
		startState(MEMCARD_Message);
		break;

	case OPEN_CardDamaged:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5451_00'); // "The Memory Card in Slot A is damaged and cannot be used."
		mPaneMsg4->setMsgID('5451_00'); // "The Memory Card in Slot A is damaged and cannot be used."
		mPaneMsg1->setMsgID('5451_00'); // "The Memory Card in Slot A is damaged and cannot be used."
		mPaneMsg2->setMsgID('5451_00'); // "The Memory Card in Slot A is damaged and cannot be used."
		startState(MEMCARD_Message);
		break;

	case OPEN_WrongDevice:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5452_00'); // "The device inserted in Slot A is not a Memory Card."
		mPaneMsg4->setMsgID('5452_00'); // "The device inserted in Slot A is not a Memory Card."
		mPaneMsg1->setMsgID('5452_00'); // "The device inserted in Slot A is not a Memory Card."
		mPaneMsg2->setMsgID('5452_00'); // "The device inserted in Slot A is not a Memory Card."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantUseCard:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5453_00'); // "The Memory Card in Slot A cannot be used."
		mPaneMsg4->setMsgID('5453_00'); // "The Memory Card in Slot A cannot be used."
		mPaneMsg1->setMsgID('5453_00'); // "The Memory Card in Slot A cannot be used."
		mPaneMsg2->setMsgID('5453_00'); // "The Memory Card in Slot A cannot be used."
		startState(MEMCARD_Message);
		break;

	case OPEN_DoFormat:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('0000_00');
		mPaneMsg4->setMsgID('5454_00'); // "The Memory Card in Slot A is corrupted and must be formatted. Format the Memory Card now?"
		mPaneMsg1->setMsgID('5455_00'); // "Yes"
		mPaneMsg2->setMsgID('5456_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_NotEnoughSpace:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID(
		    '5457_00'); // "The Memory Card in Slot A does not have enough free space. Pikmin 2 requires 1 File and 27 Blocks to save."
		mPaneMsg4->setMsgID(
		    '5457_00'); // "The Memory Card in Slot A does not have enough free space. Pikmin 2 requires 1 File and 27 Blocks to save."
		mPaneMsg1->setMsgID(
		    '5457_00'); // "The Memory Card in Slot A does not have enough free space. Pikmin 2 requires 1 File and 27 Blocks to save."
		mPaneMsg2->setMsgID(
		    '5457_00'); // "The Memory Card in Slot A does not have enough free space. Pikmin 2 requires 1 File and 27 Blocks to save."
		startState(MEMCARD_Message);
		break;

	case OPEN_GoToIPL:
		mPaneMsg3->setMsgID('5458_00'); // "Please manage the Memory Card on the Memory Card Screen."
		mPaneMsg4->setMsgID('5458_00'); // "Please manage the Memory Card on the Memory Card Screen."
		mPaneMsg1->setMsgID('5458_00'); // "Please manage the Memory Card on the Memory Card Screen."
		mPaneMsg2->setMsgID('5458_00'); // "Please manage the Memory Card on the Memory Card Screen."
		startState((enumState)2);
		break;

	case OPEN_CantFormat:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5459_00'); // "The Memory Card could not be formatted."
		mPaneMsg4->setMsgID('5459_00'); // "The Memory Card could not be formatted."
		mPaneMsg1->setMsgID('5459_00'); // "The Memory Card could not be formatted."
		mPaneMsg2->setMsgID('5459_00'); // "The Memory Card could not be formatted."
		startState(MEMCARD_Message);
		break;

	case OPEN_CardFormatted:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		mPaneMsg3->setMsgID('5460_00'); // "The Memory Card has been formatted."
		mPaneMsg4->setMsgID('5460_00'); // "The Memory Card has been formatted."
		mPaneMsg1->setMsgID('5460_00'); // "The Memory Card has been formatted."
		mPaneMsg2->setMsgID('5460_00'); // "The Memory Card has been formatted."
		startState(MEMCARD_Message);
		break;

	case OPEN_Formatting:
		mIsPlaySavingSE = true;
		mPaneMsg3->setMsgID('5461_00'); // "Formatting the Memory Card in Slot A. Do not touch the Memory Card or the POWER Button."
		mPaneMsg4->setMsgID('5461_00'); // "Formatting the Memory Card in Slot A. Do not touch the Memory Card or the POWER Button."
		mPaneMsg1->setMsgID('5461_00'); // "Formatting the Memory Card in Slot A. Do not touch the Memory Card or the POWER Button."
		mPaneMsg2->setMsgID('5461_00'); // "Formatting the Memory Card in Slot A. Do not touch the Memory Card or the POWER Button."
		startState(MEMCARD_Message);
		break;

	case OPEN_DoFormatConfirm:
		mPaneMsg3->setMsgID('0000_00');
		mPaneMsg4->setMsgID('5462_00'); // "Formatting the Memory Card will erase all saved data on the Memory Card. Is this OK?"
		mPaneMsg1->setMsgID('5463_00'); // "Yes"
		mPaneMsg2->setMsgID('5464_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_CantUseCard2:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5465_00'); // "The Memory Card in Slot A cannot be used. "
		mPaneMsg4->setMsgID('5465_00'); // "The Memory Card in Slot A cannot be used. "
		mPaneMsg1->setMsgID('5465_00'); // "The Memory Card in Slot A cannot be used. "
		mPaneMsg2->setMsgID('5465_00'); // "The Memory Card in Slot A cannot be used. "
		startState(MEMCARD_Message);
		break;

	case OPEN_DoGotoIPL:
		mPaneMsg3->setMsgID('0000_00');
		mPaneMsg4->setMsgID('5466_00'); // "Access the Memory Card Screen now?"
		mPaneMsg1->setMsgID('5467_00'); // "Yes"
		mPaneMsg2->setMsgID('5468_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_DoPlayNoSaving:
		mPaneMsg3->setMsgID('0000_00');
		mPaneMsg4->setMsgID('5469_00'); // "The game cannot be saved. Continue without saving?"
		mPaneMsg1->setMsgID('5470_00'); // "Yes"
		mPaneMsg2->setMsgID('5471_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_DoCreateFile:
		mPaneMsg3->setMsgID('0000_00');
		mPaneMsg4->setMsgID('5472_00'); // "Create a Pikmin 2 game file on the Memory Card in Slot A?"
		mPaneMsg1->setMsgID('5473_00'); // "Yes"
		mPaneMsg2->setMsgID('5474_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_NoFileFound:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5475_00'); // "There is no Pikmin 2 game file on the Memory Card in Slot A."
		mPaneMsg4->setMsgID('5475_00'); // "There is no Pikmin 2 game file on the Memory Card in Slot A."
		mPaneMsg1->setMsgID('5475_00'); // "There is no Pikmin 2 game file on the Memory Card in Slot A."
		mPaneMsg2->setMsgID('5475_00'); // "There is no Pikmin 2 game file on the Memory Card in Slot A."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantCreateFile:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5476_00'); // "A game file could not be created."
		mPaneMsg4->setMsgID('5476_00'); // "A game file could not be created."
		mPaneMsg1->setMsgID('5476_00'); // "A game file could not be created."
		mPaneMsg2->setMsgID('5476_00'); // "A game file could not be created."
		startState(MEMCARD_Message);
		break;

	case OPEN_CreatingFile:
		mIsPlaySavingSE = true;
		mPaneMsg3->setMsgID('5477_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		mPaneMsg4->setMsgID('5477_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		mPaneMsg1->setMsgID('5477_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		mPaneMsg2->setMsgID('5477_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		startState(MEMCARD_Message);
		break;

	case OPEN_FileCreated:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		mPaneMsg3->setMsgID('5478_00'); // "A file has been created."
		mPaneMsg4->setMsgID('5478_00'); // "A file has been created."
		mPaneMsg1->setMsgID('5478_00'); // "A file has been created."
		mPaneMsg2->setMsgID('5478_00'); // "A file has been created."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveNoCard:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID(
		    '5551_00'); // "The game cannot be saved. There is no Memory Card in Slot A. Please insert a Memory Card into Slot A."
		mPaneMsg4->setMsgID(
		    '5551_00'); // "The game cannot be saved. There is no Memory Card in Slot A. Please insert a Memory Card into Slot A."
		mPaneMsg1->setMsgID(
		    '5551_00'); // "The game cannot be saved. There is no Memory Card in Slot A. Please insert a Memory Card into Slot A."
		mPaneMsg2->setMsgID(
		    '5551_00'); // "The game cannot be saved. There is no Memory Card in Slot A. Please insert a Memory Card into Slot A."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveCardDamaged:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5552_00'); // "The game cannot be saved. The Memory Card in Slot A is damaged and cannot be used."
		mPaneMsg4->setMsgID('5552_00'); // "The game cannot be saved. The Memory Card in Slot A is damaged and cannot be used."
		mPaneMsg1->setMsgID('5552_00'); // "The game cannot be saved. The Memory Card in Slot A is damaged and cannot be used."
		mPaneMsg2->setMsgID('5552_00'); // "The game cannot be saved. The Memory Card in Slot A is damaged and cannot be used."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveWrongDevice:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5553_00'); // "The game cannot be saved. An incorrect device is inserted in Slot A. Remove the device and
		                                // insert a Memory Card."
		mPaneMsg4->setMsgID('5553_00'); // "The game cannot be saved. An incorrect device is inserted in Slot A. Remove the device and
		                                // insert a Memory Card."
		mPaneMsg1->setMsgID('5553_00'); // "The game cannot be saved. An incorrect device is inserted in Slot A. Remove the device and
		                                // insert a Memory Card."
		mPaneMsg2->setMsgID('5553_00'); // "The game cannot be saved. An incorrect device is inserted in Slot A. Remove the device and
		                                // insert a Memory Card."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveCantUseCard:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5554_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		mPaneMsg4->setMsgID('5554_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		mPaneMsg1->setMsgID('5554_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		mPaneMsg2->setMsgID('5554_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveDoFormat:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('0000_00');
		mPaneMsg4->setMsgID('5592_00'); // "The game cannot be saved. The Memory Card in Slot A is corrupted and must be formatted. Format
		                                // the Memory Card now?"
		mPaneMsg1->setMsgID('5593_00'); // "Yes"
		mPaneMsg2->setMsgID('5594_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_CantSaveNoSpace:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5555_00'); // "The game cannot be saved. There is not enough available space on the Memory Card in Slot A.
		                                // Pikmin 2 requires 1 File and 27 Blocks to save."
		mPaneMsg4->setMsgID('5555_00'); // "The game cannot be saved. There is not enough available space on the Memory Card in Slot A.
		                                // Pikmin 2 requires 1 File and 27 Blocks to save."
		mPaneMsg1->setMsgID('5555_00'); // "The game cannot be saved. There is not enough available space on the Memory Card in Slot A.
		                                // Pikmin 2 requires 1 File and 27 Blocks to save."
		mPaneMsg2->setMsgID('5555_00'); // "The game cannot be saved. There is not enough available space on the Memory Card in Slot A.
		                                // Pikmin 2 requires 1 File and 27 Blocks to save."
		startState(MEMCARD_Message);
		break;

	case OPEN_InsertOriginalCard:
		mPaneMsg3->setMsgID('5556_00'); // "Please manage Memory Card data on the Memory Card Screen, or insert the original Memory Card."
		mPaneMsg4->setMsgID('5556_00'); // "Please manage Memory Card data on the Memory Card Screen, or insert the original Memory Card."
		mPaneMsg1->setMsgID('5556_00'); // "Please manage Memory Card data on the Memory Card Screen, or insert the original Memory Card."
		mPaneMsg2->setMsgID('5556_00'); // "Please manage Memory Card data on the Memory Card Screen, or insert the original Memory Card."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantFormat2:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5557_00'); // "The Memory Card could not be formatted."
		mPaneMsg4->setMsgID('5557_00'); // "The Memory Card could not be formatted."
		mPaneMsg1->setMsgID('5557_00'); // "The Memory Card could not be formatted."
		mPaneMsg2->setMsgID('5557_00'); // "The Memory Card could not be formatted."
		startState(MEMCARD_Message);
		break;

	case OPEN_FormatSuccess:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		mPaneMsg3->setMsgID('5558_00'); // "The Memory Card has been formatted."
		mPaneMsg4->setMsgID('5558_00'); // "The Memory Card has been formatted."
		mPaneMsg1->setMsgID('5558_00'); // "The Memory Card has been formatted."
		mPaneMsg2->setMsgID('5558_00'); // "The Memory Card has been formatted."
		startState(MEMCARD_Message);
		break;

	case OPEN_Formatting2:
		mIsPlaySavingSE = true;
		mPaneMsg3->setMsgID('5559_00'); // "The Memory Card is being formatted. Do not touch the Memory Card or the POWER Button."
		mPaneMsg4->setMsgID('5559_00'); // "The Memory Card is being formatted. Do not touch the Memory Card or the POWER Button."
		mPaneMsg1->setMsgID('5559_00'); // "The Memory Card is being formatted. Do not touch the Memory Card or the POWER Button."
		mPaneMsg2->setMsgID('5559_00'); // "The Memory Card is being formatted. Do not touch the Memory Card or the POWER Button."
		startState(MEMCARD_Message);
		break;

	case OPEN_DoFormat2:
		mPaneMsg3->setMsgID('0000_00');
		mPaneMsg4->setMsgID('5560_00'); // "Formatting the Memory Card will erase all saved data. Is this OK?"
		mPaneMsg1->setMsgID('5561_00'); // "Yes"
		mPaneMsg2->setMsgID('5562_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_CantSaveCantUseCard2:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5563_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		mPaneMsg4->setMsgID('5563_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		mPaneMsg1->setMsgID('5563_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		mPaneMsg2->setMsgID('5563_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveGotoIPL:
		mPaneMsg3->setMsgID('0000_00');
		mPaneMsg4->setMsgID(
		    '5564_00'); // "Data cannot be saved, so current progress will be lost. Continue to the Memory Card Screen anyway?"
		mPaneMsg1->setMsgID('5565_00'); // "Yes"
		mPaneMsg2->setMsgID('5566_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_DoGotoIPL2:
		mPaneMsg3->setMsgID('0000_00');
		mPaneMsg4->setMsgID('5567_00'); // "Access the Memory Card Screen now?"
		mPaneMsg1->setMsgID('5568_00'); // "Yes"
		mPaneMsg2->setMsgID('5569_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_DoCreateFile2:
		mPaneMsg3->setMsgID('0000_00');
		mPaneMsg4->setMsgID('5570_00'); // "Create a Pikmin 2 game file on the Memory Card in Slot A?"
		mPaneMsg1->setMsgID('5571_00'); // "Yes"
		mPaneMsg2->setMsgID('5572_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_CantSaveNoFile:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5573_00'); // "The game cannot be saved. The Memory Card in Slot A does not have a Pikmin 2 game file."
		mPaneMsg4->setMsgID('5573_00'); // "The game cannot be saved. The Memory Card in Slot A does not have a Pikmin 2 game file."
		mPaneMsg1->setMsgID('5573_00'); // "The game cannot be saved. The Memory Card in Slot A does not have a Pikmin 2 game file."
		mPaneMsg2->setMsgID('5573_00'); // "The game cannot be saved. The Memory Card in Slot A does not have a Pikmin 2 game file."
		startState(MEMCARD_Message);
		break;

	case OPEN_CreatingFile2:
		mIsPlaySavingSE = true;
		mPaneMsg3->setMsgID('5574_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		mPaneMsg4->setMsgID('5574_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		mPaneMsg1->setMsgID('5574_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		mPaneMsg2->setMsgID('5574_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantCreateFile2:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5575_00'); // "A game file could not be created."
		mPaneMsg4->setMsgID('5575_00'); // "A game file could not be created."
		mPaneMsg1->setMsgID('5575_00'); // "A game file could not be created."
		mPaneMsg2->setMsgID('5575_00'); // "A game file could not be created."
		startState(MEMCARD_Message);
		break;

	case OPEN_FileCreated2:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		mPaneMsg3->setMsgID('5576_00'); // "A game file has been created."
		mPaneMsg4->setMsgID('5576_00'); // "A game file has been created."
		mPaneMsg1->setMsgID('5576_00'); // "A game file has been created."
		mPaneMsg2->setMsgID('5576_00'); // "A game file has been created."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveInsertOriginalCard:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5577_00'); // "The game cannot be saved. Please insert the original Memory Card into Slot A."
		mPaneMsg4->setMsgID('5577_00'); // "The game cannot be saved. Please insert the original Memory Card into Slot A."
		mPaneMsg1->setMsgID('5577_00'); // "The game cannot be saved. Please insert the original Memory Card into Slot A."
		mPaneMsg2->setMsgID('5577_00'); // "The game cannot be saved. Please insert the original Memory Card into Slot A."
		startState(MEMCARD_Message);
		break;

	case OPEN_CardCorruptedDoOverwrite:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('0000_00');
		mPaneMsg4->setMsgID(
		    '5578_00'); // "The data in the file on the Memory Card in Slot A is corrupted. Is it OK to overwrite this file?"
		mPaneMsg1->setMsgID('5579_00'); // "Yes"
		mPaneMsg2->setMsgID('5580_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_Saving:
		mIsPlaySavingSE = true;
		mPaneMsg3->setMsgID('5581_00'); // "Saving... Do not touch the Memory Card in Slot A or the POWER Button."
		mPaneMsg4->setMsgID('5581_00'); // "Saving... Do not touch the Memory Card in Slot A or the POWER Button."
		mPaneMsg1->setMsgID('5581_00'); // "Saving... Do not touch the Memory Card in Slot A or the POWER Button."
		mPaneMsg2->setMsgID('5581_00'); // "Saving... Do not touch the Memory Card in Slot A or the POWER Button."
		startState(MEMCARD_Message);
		break;

	case OPEN_SaveSuccess:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		mPaneMsg3->setMsgID('0000_00');
		mPaneMsg4->setMsgID('5582_00'); // "The game has been saved. Continue playing?"
		mPaneMsg1->setMsgID('5583_00'); // "Yes"
		mPaneMsg2->setMsgID('5584_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_SaveFail:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		mPaneMsg3->setMsgID('5585_00'); // "The game could not be saved."
		mPaneMsg4->setMsgID('5585_00'); // "The game could not be saved."
		mPaneMsg1->setMsgID('5585_00'); // "The game could not be saved."
		mPaneMsg2->setMsgID('5585_00'); // "The game could not be saved."
		startState(MEMCARD_Message);
		break;
	}
}

/**
 * @note Address: 0x803C3B00
 * @note Size: 0x30
 */
void TMemoryCard::close()
{
	if (mState != MEMCARD_Finish)
		startState(MEMCARD_Finish);
}

/**
 * @note Address: 0x803C3B30
 * @note Size: 0x24
 */
void TMemoryCard::killScreen() { startState(MEMCARD_Disabled); }

/**
 * @note Address: 0x803C3B54
 * @note Size: 0x334
 */
void TMemoryCard::setSelect_(bool sel)
{
	mSelectionIdx = sel;

	if (mSelectionIdx) {
		mBlinkFont1.setPaneColors(0);
		mBlinkFont2.setPaneColors(0);
		mCursor1.start();
		mCursor2.start();

	} else {
		mBlinkFont1.setPaneColors(0);
		mBlinkFont2.setPaneColors(0);
		mCursor1.stop();
		mCursor2.stop();
	}
	mCursor1.update();
	mCursor2.update();
}

/**
 * @note Address: 0x803C3FB0
 * @note Size: 0x28
 */
bool TMemoryCard::isFinish()
{
	if (mMsgAlpha == 0 && mState == MEMCARD_Finish) {
		return true;
	}
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
bool TMemoryCard::isDecide()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803C3FD8
 * @note Size: 0x4EC
 */
void TMemoryCard::startState(enumState state)
{
	mState = state;
	switch (mState) {
	case MEMCARD_Disabled:
		mCursor1.mCursor.kill();
		mCursor2.mCursor.kill();
		break;
	case MEMCARD_Selection:
		mCursor1.mCursor.kill();
		mCursor2.mCursor.kill();
		mPaneMsg3->hide();
		mPaneMsg4->show();
		mPaneMsg4->setAlpha(255);
		mPaneMsg1->show();
		mPaneMsg1->setAlpha(255);
		mPaneMsg2->show();
		mPaneMsg2->setAlpha(255);
		if (mSelectionIdx == 1) {
			mBlinkFont1.enable();
			mBlinkFont2.setPaneColors(0);
			mCursor1.start();
			mCursor2.start();
		} else {
			mBlinkFont1.setPaneColors(0);
			mBlinkFont2.enable();
			mCursor1.stop();
			mCursor2.stop();
		}
		mCursor1.mCursor.create(nullptr);
		mCursor2.mCursor.create(nullptr);
		mInputDelay    = 20;
		mInputDelayMax = 20;
		mAnim2.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnim3.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnim4.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnim5.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mScreenMain->animation();
		break;

	case MEMCARD_Message:
		mCursor1.mCursor.kill();
		mCursor2.mCursor.kill();
		mPaneMsg4->hide();
		mPaneMsg1->hide();
		mPaneMsg2->hide();
		mPaneMsg3->show();
		mPaneMsg3->setAlpha(255);
		mInputDelay    = 20;
		mInputDelayMax = 20;
		mAnim2.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnim3.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnim4.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnim5.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mScreenMain->animation();
		break;
	case MEMCARD_Finish:
		mMsgAlpha = 30;
		mAlphaMod = 30;
		break;
	}
}

/**
 * @note Address: 0x803C44C4
 * @note Size: 0x8C8
 */
void TMemoryCard::update()
{
	switch (mState) {
	case MEMCARD_Disabled:
		break;
	case MEMCARD_Selection:
		if (mInputDelay) {
			mInputDelay--;
		}
		if (!mInputDelay && mCanExit) {
			if (mController->isMoveRight()) {
				if (mSelectionIdx == 1) {
					mSelectionIdx = 0;
					mBlinkFont1.disable();
					mBlinkFont2.enable();
					mCursor1.mIsLeft = false;
					mCursor2.mIsLeft = false;
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
				}
			} else if (mController->isMoveLeft()) {
				if (mSelectionIdx == 0) {
					mSelectionIdx = 1;
					mBlinkFont1.enable();
					mBlinkFont2.disable();
					mCursor1.mIsLeft = true;
					mCursor2.mIsLeft = true;
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
				}
			} else if (mController->getButtonDown() & Controller::PRESS_A) {
				if (mSelectionIdx == 1) {
					mBlinkFont1.setPaneColors(1);
					mBlinkFont2.setPaneColors(0);
					mCursor1.start();
					mCursor2.start();
				} else {
					mBlinkFont1.setPaneColors(0);
					mBlinkFont2.setPaneColors(1);
					mCursor1.stop();
					mCursor2.stop();
				}
				mCursor1.update();
				mCursor2.update();
				startState(MEMCARD_Finish);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
				return;
			} else if (mController->getButtonDown() & Controller::PRESS_B) {
				mSelectionIdx = 0;
				mBlinkFont1.setPaneColors(0);
				mBlinkFont2.setPaneColors(1);
				mCursor1.stop();
				mCursor2.stop();
				mCursor1.update();
				mCursor2.update();
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
				startState(MEMCARD_Finish);
				return;
			}
		}
		mCursor1.update();
		mCursor2.update();
		mScreenMain->update();
		break;

	case MEMCARD_Message:
		if (mInputDelay) {
			mInputDelay--;
		}
		if (!mInputDelay) {
			bool end  = false;
			u32 input = mController->getButtonDown();
			if ((input & Controller::PRESS_A) || (input & Controller::PRESS_B) || (input & Controller::PRESS_X)
			    || (input & Controller::PRESS_Y) || (input & Controller::PRESS_START)) {
				end = true;
			}
			if (end && mCanExit) {
				startState(MEMCARD_Finish);
				return;
			}
		}
		mScreenMain->update();
		if (mIsPlaySavingSE) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ACCESS, 0);
		}
		break;

	case MEMCARD_Finish:
		if (mMsgAlpha) {
			mMsgAlpha--;
		}

		if (calcAlpha() < 0.7f) {
			mCursor1.mCursor.fade();
			mCursor2.mCursor.fade();

			u32 alpha = (u8)((calcAlpha() / 0.7f) * 255.0f);
			mPaneMsg1->setAlpha(alpha);
			mPaneMsg2->setAlpha(alpha);
			mPaneMsg3->setAlpha(alpha);
			mPaneMsg4->setAlpha(alpha);
		}
		mScreenMain->update();
		break;
	}
}

/**
 * @note Address: 0x803C4D8C
 * @note Size: 0x80
 */
void TMemoryCard::draw()
{
	if (mState == MEMCARD_Disabled) {
		return;
	}

	Graphics* gfx       = sys->getGfx();
	J2DPerspGraph* graf = gfx->getPerspGraph();

	// computers were a mistake.
	for (int i = 0; i < 1; i++) {
		graf->setPort();
		mScreenMain->draw(*gfx, *graf);
	}
}

} // namespace Screen
} // namespace ebi
