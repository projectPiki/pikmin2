#include "ebi/Screen/TMemoryCard.h"
#include "ebi/Screen/TResourceObserver.h"
#include "og/newScreen/ogUtil.h"
#include "ebi/E2DGraph.h"
#include "System.h"
#include "PSSystem/PSSystemIF.h"
#include "Controller.h"
#include "SoundID.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80496270
    lbl_80496270:
        .4byte 0x65626953
        .4byte 0x63726565
        .4byte 0x6E4D656D
        .4byte 0x6F727943
        .4byte 0x61726400
        .4byte 0x54536372
        .4byte 0x65656E4D
        .4byte 0x656D6F72
        .4byte 0x79436172
        .4byte 0x643A3A6C
        .4byte 0x6F616452
        .4byte 0x65736F75
        .4byte 0x72636500
        .4byte 0x6D656D6F
        .4byte 0x72795F63
        .4byte 0x6172642E
        .4byte 0x737A7300
    .global lbl_804962B4
    lbl_804962B4:
        .4byte 0x65626953
        .4byte 0x63726565
        .4byte 0x6E4D656D
        .4byte 0x6F727943
        .4byte 0x6172642E
        .4byte 0x63707000
    .global lbl_804962CC
    lbl_804962CC:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x54536372
        .4byte 0x65656E4D
        .4byte 0x656D6F72
        .4byte 0x79436172
        .4byte 0x643A3A73
        .4byte 0x65744172
        .4byte 0x63686976
        .4byte 0x65000000
        .4byte 0x6D656D6F
        .4byte 0x72795F63
        .4byte 0x6172642E
        .4byte 0x626C6F00
        .4byte 0x6D656D6F
        .4byte 0x72795F63
        .4byte 0x6172642E
        .4byte 0x62636B00
        .4byte 0x6D656D6F
        .4byte 0x72795F63
        .4byte 0x6172645F
        .4byte 0x70617474
        .4byte 0x65726E31
        .4byte 0x2E62636B
        .4byte 0x00000000
        .4byte 0x6D656D6F
        .4byte 0x72795F63
        .4byte 0x6172645F
        .4byte 0x70617474
        .4byte 0x65726E32
        .4byte 0x2E62636B
        .4byte 0x00000000
        .4byte 0x6D656D6F
        .4byte 0x72795F63
        .4byte 0x6172645F
        .4byte 0x7965732E
        .4byte 0x62636B00
        .4byte 0x6D656D6F
        .4byte 0x72795F63
        .4byte 0x6172645F
        .4byte 0x6E6F2E62
        .4byte 0x636B0000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804E7A08
    lbl_804E7A08:
        .4byte lbl_803C2980
        .4byte lbl_803C299C
        .4byte lbl_803C29FC
        .4byte lbl_803C2A5C
        .4byte lbl_803C2ABC
        .4byte lbl_803C2B1C
        .4byte lbl_803C2BA8
        .4byte lbl_803C2C08
        .4byte lbl_803C2C58
        .4byte lbl_803C2CB8
        .4byte lbl_803C2D18
        .4byte lbl_803C2D70
        .4byte lbl_803C2DEC
        .4byte lbl_803C2E4C
        .4byte lbl_803C2EC8
        .4byte lbl_803C2F40
        .4byte lbl_803C2FBC
        .4byte lbl_803C301C
        .4byte lbl_803C307C
        .4byte lbl_803C30D4
        .4byte lbl_803C3134
        .4byte lbl_803C3194
        .4byte lbl_803C31F4
        .4byte lbl_803C3254
        .4byte lbl_803C32B4
        .4byte lbl_803C3340
        .4byte lbl_803C33A0
        .4byte lbl_803C33F0
        .4byte lbl_803C3450
        .4byte lbl_803C34B0
        .4byte lbl_803C3508
        .4byte lbl_803C357C
        .4byte lbl_803C35DC
        .4byte lbl_803C3658
        .4byte lbl_803C36D4
        .4byte lbl_803C3748
        .4byte lbl_803C37A8
        .4byte lbl_803C3800
        .4byte lbl_803C3860
        .4byte lbl_803C38C0
        .4byte lbl_803C3920
        .4byte lbl_803C39A8
        .4byte lbl_803C3A00
        .4byte lbl_803C3A8C
    .global __vt__Q33ebi6Screen17TResourceObserver
    __vt__Q33ebi6Screen17TResourceObserver:
        .4byte 0
        .4byte 0
        .4byte __dt__Q33ebi6Screen17TResourceObserverFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F8A8
    lbl_8051F8A8:
        .4byte 0x42700000
    .global lbl_8051F8AC
    lbl_8051F8AC:
        .float 1.0
    .global lbl_8051F8B0
    lbl_8051F8B0:
        .4byte 0x00000000
    .global lbl_8051F8B4
    lbl_8051F8B4:
        .4byte 0x40555555
    .global lbl_8051F8B8
    lbl_8051F8B8:
        .float 0.5
    .global lbl_8051F8BC
    lbl_8051F8BC:
        .4byte 0xBF000000
    .global lbl_8051F8C0
    lbl_8051F8C0:
        .float 0.7
    .global lbl_8051F8C4
    lbl_8051F8C4:
        .4byte 0x437F0000
    .global lbl_8051F8C8
    lbl_8051F8C8:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace ebi {
namespace Screen {

static const char ebiScreenMemoryCardName[] = "ebiScreenMemoryCard";

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
TResourceObserver::TResourceObserver(ebi::Screen::TMemoryCard* owner) { m_owner = owner; }

/*
 * --INFO--
 * Address:	803C2244
 * Size:	00006C
 */
TResourceObserver::~TResourceObserver() { m_owner->destroyResource(); }

/*
 * --INFO--
 * Address:	803C22B0
 * Size:	0000D8
 */
void TMemoryCard::loadResource(JKRHeap* heap)
{
	TResourceObserver* resource = new (heap, 0) TResourceObserver(this);
	sys->heapStatusStart("TScreenMemoryCard::loadResource", nullptr);

	char buf[264];
	og::newScreen::makeLanguageResName(buf, "memory_card.szs");

	JKRArchive* arc = JKRArchive::mount(buf, JKRArchive::EMM_Mem, heap, JKRArchive::EMD_Unk1);

	P2ASSERTLINE(54, arc);

	sys->heapStatusEnd("TScreenMemoryCard::loadResource");
	setArchive(arc);
}

/*
 * --INFO--
 * Address:	803C2388
 * Size:	00039C
 */
void TMemoryCard::setArchive(JKRArchive* arc)
{
	sys->heapStatusStart("TScreenMemoryCard::setArchive", nullptr);

	m_screenMain = new P2DScreen::Mgr_tuning;
	m_screenMain->set("memory_card.blo", 0x1100000, arc);

	m_paneMsg1 = static_cast<J2DTextBox*>(E2DScreen_searchAssert(m_screenMain, 'yes_00'));
	m_paneMsg2 = static_cast<J2DTextBox*>(E2DScreen_searchAssert(m_screenMain, 'no_00'));
	m_paneMsg3 = static_cast<J2DTextBox*>(E2DScreen_searchAssert(m_screenMain, 'pattern1'));
	m_paneMsg4 = static_cast<J2DTextBox*>(E2DScreen_searchAssert(m_screenMain, 'pattern2'));

	m_pane_il00      = E2DScreen_searchAssert(m_screenMain, 'il_00');
	m_pane_ir00      = E2DScreen_searchAssert(m_screenMain, 'ir_00');
	m_pane_il01      = E2DScreen_searchAssert(m_screenMain, 'il_01');
	m_pane_ir01      = E2DScreen_searchAssert(m_screenMain, 'ir_01');
	J2DTextBox* temp = static_cast<J2DTextBox*>(E2DScreen_searchAssert(m_screenMain, 's_color'));

	m_paneMsg1->setMsgID('1');
	m_paneMsg2->setMsgID('1');
	m_paneMsg3->setMsgID('1');
	m_paneMsg4->setMsgID('1');

	E2DPane_setTreeCallBackMessage(m_screenMain, m_screenMain);
	E2DPane_setTreeShow(m_screenMain);
	temp->hide();

	m_pane_il00->setAlpha(0);
	m_pane_ir00->setAlpha(0);
	m_pane_il01->setAlpha(0);
	m_pane_ir01->setAlpha(0);

	m_screenMain->addCallBackPane(m_screenMain, &m_anims[0]);
	m_screenMain->addCallBackPane(m_paneMsg3, &m_anims[1]);
	m_screenMain->addCallBackPane(m_paneMsg4, &m_anims[2]);
	m_screenMain->addCallBackPane(m_paneMsg1, &m_anims[3]);
	m_screenMain->addCallBackPane(m_paneMsg2, &m_anims[4]);
	m_screenMain->addCallBackPane(m_screenMain, &m_calcAnim);

	m_anims[0].loadAnm("memory_card.bck", arc, 0, 99999);
	m_anims[1].loadAnm("memory_card_pattern1.bck", arc, 0, 99999);
	m_anims[2].loadAnm("memory_card_pattern2.bck", arc, 0, 99999);
	m_anims[3].loadAnm("memory_card_yes.bck", arc, 0, 99999);
	m_anims[4].loadAnm("memory_card_no.bck", arc, 0, 99999);
	m_anims[0].play(sys->m_deltaTime * 60.0f, (J3DAnmAttr)2, true);

	m_blinkFont[0].set(m_paneMsg2, temp);
	m_blinkFont[1].set(m_paneMsg2, temp);

	m_screenMain->addCallBackPane(m_paneMsg1, &m_blinkFont[0]);
	m_screenMain->addCallBackPane(m_paneMsg2, &m_blinkFont[1]);

	m_cursor1.setPanes(m_pane_il00, m_pane_il01);
	m_cursor2.setPanes(m_pane_ir00, m_pane_ir01);

	sys->heapStatusEnd("TScreenMemoryCard::setArchive");
}

} // namespace Screen

/*
 * --INFO--
 * Address:	803C2724
 * Size:	0001BC
 */
void E2DCallBack_BlinkFontColor::set(J2DTextBox* pane1, J2DTextBox* pane2)
{
	setColors(0, pane1);
	setColors(1, pane2);
}

namespace Screen {

/*
 * --INFO--
 * Address:	803C28E0
 * Size:	000018
 */
void TMemoryCard::destroyResource()
{
	m_paneMsg1 = nullptr;
	m_paneMsg2 = nullptr;
	m_paneMsg3 = nullptr;
	m_paneMsg4 = nullptr;
}

/*
 * --INFO--
 * Address:	803C28F8
 * Size:	001208
 */
void TMemoryCard::open(long type)
{
	P2ASSERTBOUNDSLINE(162, 0, type, 44);
	m_isPlaySavingSE = false;
	m_msgAlpha       = 30;
	m_alphaMod       = 30;

	switch (type) {
	case OPEN_None:
		startState(MEMCARD_Finish);
		m_msgAlpha = 0;
		m_alphaMod = 0;
		break;

	case OPEN_NoCard:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID(
		    '5450_00'); // "No Memory Card found in Slot A. Please check to make sure you have inserted a Memory Card properly."
		m_paneMsg4->setMsgID(
		    '5450_00'); // "No Memory Card found in Slot A. Please check to make sure you have inserted a Memory Card properly."
		m_paneMsg1->setMsgID(
		    '5450_00'); // "No Memory Card found in Slot A. Please check to make sure you have inserted a Memory Card properly."
		m_paneMsg2->setMsgID(
		    '5450_00'); // "No Memory Card found in Slot A. Please check to make sure you have inserted a Memory Card properly."
		startState(MEMCARD_Message);
		break;

	case OPEN_CardDamaged:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5451_00'); // "The Memory Card in Slot A is damaged and cannot be used."
		m_paneMsg4->setMsgID('5451_00'); // "The Memory Card in Slot A is damaged and cannot be used."
		m_paneMsg1->setMsgID('5451_00'); // "The Memory Card in Slot A is damaged and cannot be used."
		m_paneMsg2->setMsgID('5451_00'); // "The Memory Card in Slot A is damaged and cannot be used."
		startState(MEMCARD_Message);
		break;

	case OPEN_WrongDevice:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5452_00'); // "The device inserted in Slot A is not a Memory Card."
		m_paneMsg4->setMsgID('5452_00'); // "The device inserted in Slot A is not a Memory Card."
		m_paneMsg1->setMsgID('5452_00'); // "The device inserted in Slot A is not a Memory Card."
		m_paneMsg2->setMsgID('5452_00'); // "The device inserted in Slot A is not a Memory Card."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantUseCard:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5453_00'); // "The Memory Card in Slot A cannot be used."
		m_paneMsg4->setMsgID('5453_00'); // "The Memory Card in Slot A cannot be used."
		m_paneMsg1->setMsgID('5453_00'); // "The Memory Card in Slot A cannot be used."
		m_paneMsg2->setMsgID('5453_00'); // "The Memory Card in Slot A cannot be used."
		startState(MEMCARD_Message);
		break;

	case OPEN_DoFormat:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('0000_00');
		m_paneMsg4->setMsgID('5454_00'); // "The Memory Card in Slot A is corrupted and must be formatted. Format the Memory Card now?"
		m_paneMsg1->setMsgID('5455_00'); // "Yes"
		m_paneMsg2->setMsgID('5456_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_NotEnoughSpace:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID(
		    '5457_00'); // "The Memory Card in Slot A does not have enough free space. Pikmin 2 requires 1 File and 27 Blocks to save."
		m_paneMsg4->setMsgID(
		    '5457_00'); // "The Memory Card in Slot A does not have enough free space. Pikmin 2 requires 1 File and 27 Blocks to save."
		m_paneMsg1->setMsgID(
		    '5457_00'); // "The Memory Card in Slot A does not have enough free space. Pikmin 2 requires 1 File and 27 Blocks to save."
		m_paneMsg2->setMsgID(
		    '5457_00'); // "The Memory Card in Slot A does not have enough free space. Pikmin 2 requires 1 File and 27 Blocks to save."
		startState(MEMCARD_Message);
		break;

	case OPEN_GoToIPL:
		m_paneMsg3->setMsgID('5458_00'); // "Please manage the Memory Card on the Memory Card Screen."
		m_paneMsg4->setMsgID('5458_00'); // "Please manage the Memory Card on the Memory Card Screen."
		m_paneMsg1->setMsgID('5458_00'); // "Please manage the Memory Card on the Memory Card Screen."
		m_paneMsg2->setMsgID('5458_00'); // "Please manage the Memory Card on the Memory Card Screen."
		startState((enumState)2);
		break;

	case OPEN_CantFormat:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5459_00'); // "The Memory Card could not be formatted."
		m_paneMsg4->setMsgID('5459_00'); // "The Memory Card could not be formatted."
		m_paneMsg1->setMsgID('5459_00'); // "The Memory Card could not be formatted."
		m_paneMsg2->setMsgID('5459_00'); // "The Memory Card could not be formatted."
		startState(MEMCARD_Message);
		break;

	case OPEN_CardFormatted:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		m_paneMsg3->setMsgID('5460_00'); // "The Memory Card has been formatted."
		m_paneMsg4->setMsgID('5460_00'); // "The Memory Card has been formatted."
		m_paneMsg1->setMsgID('5460_00'); // "The Memory Card has been formatted."
		m_paneMsg2->setMsgID('5460_00'); // "The Memory Card has been formatted."
		startState(MEMCARD_Message);
		break;

	case OPEN_Formatting:
		m_isPlaySavingSE = true;
		m_paneMsg3->setMsgID('5461_00'); // "Formatting the Memory Card in Slot A. Do not touch the Memory Card or the POWER Button."
		m_paneMsg4->setMsgID('5461_00'); // "Formatting the Memory Card in Slot A. Do not touch the Memory Card or the POWER Button."
		m_paneMsg1->setMsgID('5461_00'); // "Formatting the Memory Card in Slot A. Do not touch the Memory Card or the POWER Button."
		m_paneMsg2->setMsgID('5461_00'); // "Formatting the Memory Card in Slot A. Do not touch the Memory Card or the POWER Button."
		startState(MEMCARD_Message);
		break;

	case OPEN_DoFormatConfirm:
		m_paneMsg3->setMsgID('0000_00');
		m_paneMsg4->setMsgID('5462_00'); // "Formatting the Memory Card will erase all saved data on the Memory Card. Is this OK?"
		m_paneMsg1->setMsgID('5463_00'); // "Yes"
		m_paneMsg2->setMsgID('5464_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_CantUseCard2:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5465_00'); // "The Memory Card in Slot A cannot be used. "
		m_paneMsg4->setMsgID('5465_00'); // "The Memory Card in Slot A cannot be used. "
		m_paneMsg1->setMsgID('5465_00'); // "The Memory Card in Slot A cannot be used. "
		m_paneMsg2->setMsgID('5465_00'); // "The Memory Card in Slot A cannot be used. "
		startState(MEMCARD_Message);
		break;

	case OPEN_DoGotoIPL:
		m_paneMsg3->setMsgID('0000_00');
		m_paneMsg4->setMsgID('5466_00'); // "Access the Memory Card Screen now?"
		m_paneMsg1->setMsgID('5467_00'); // "Yes"
		m_paneMsg2->setMsgID('5468_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_DoPlayNoSaving:
		m_paneMsg3->setMsgID('0000_00');
		m_paneMsg4->setMsgID('5469_00'); // "The game cannot be saved. Continue without saving?"
		m_paneMsg1->setMsgID('5470_00'); // "Yes"
		m_paneMsg2->setMsgID('5471_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_DoCreateFile:
		m_paneMsg3->setMsgID('0000_00');
		m_paneMsg4->setMsgID('5472_00'); // "Create a Pikmin 2 game file on the Memory Card in Slot A?"
		m_paneMsg1->setMsgID('5473_00'); // "Yes"
		m_paneMsg2->setMsgID('5474_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_NoFileFound:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5475_00'); // "There is no Pikmin 2 game file on the Memory Card in Slot A."
		m_paneMsg4->setMsgID('5475_00'); // "There is no Pikmin 2 game file on the Memory Card in Slot A."
		m_paneMsg1->setMsgID('5475_00'); // "There is no Pikmin 2 game file on the Memory Card in Slot A."
		m_paneMsg2->setMsgID('5475_00'); // "There is no Pikmin 2 game file on the Memory Card in Slot A."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantCreateFile:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5476_00'); // "A game file could not be created."
		m_paneMsg4->setMsgID('5476_00'); // "A game file could not be created."
		m_paneMsg1->setMsgID('5476_00'); // "A game file could not be created."
		m_paneMsg2->setMsgID('5476_00'); // "A game file could not be created."
		startState(MEMCARD_Message);
		break;

	case OPEN_CreatingFile:
		m_isPlaySavingSE = true;
		m_paneMsg3->setMsgID('5477_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		m_paneMsg4->setMsgID('5477_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		m_paneMsg1->setMsgID('5477_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		m_paneMsg2->setMsgID('5477_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		startState(MEMCARD_Message);
		break;

	case OPEN_FileCreated:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		m_paneMsg3->setMsgID('5478_00'); // "A file has been created."
		m_paneMsg4->setMsgID('5478_00'); // "A file has been created."
		m_paneMsg1->setMsgID('5478_00'); // "A file has been created."
		m_paneMsg2->setMsgID('5478_00'); // "A file has been created."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveNoCard:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID(
		    '5551_00'); // "The game cannot be saved. There is no Memory Card in Slot A. Please insert a Memory Card into Slot A."
		m_paneMsg4->setMsgID(
		    '5551_00'); // "The game cannot be saved. There is no Memory Card in Slot A. Please insert a Memory Card into Slot A."
		m_paneMsg1->setMsgID(
		    '5551_00'); // "The game cannot be saved. There is no Memory Card in Slot A. Please insert a Memory Card into Slot A."
		m_paneMsg2->setMsgID(
		    '5551_00'); // "The game cannot be saved. There is no Memory Card in Slot A. Please insert a Memory Card into Slot A."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveCardDamaged:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5552_00'); // "The game cannot be saved. The Memory Card in Slot A is damaged and cannot be used."
		m_paneMsg4->setMsgID('5552_00'); // "The game cannot be saved. The Memory Card in Slot A is damaged and cannot be used."
		m_paneMsg1->setMsgID('5552_00'); // "The game cannot be saved. The Memory Card in Slot A is damaged and cannot be used."
		m_paneMsg2->setMsgID('5552_00'); // "The game cannot be saved. The Memory Card in Slot A is damaged and cannot be used."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveWrongDevice:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5553_00'); // "The game cannot be saved. An incorrect device is inserted in Slot A. Remove the device and
		                                 // insert a Memory Card."
		m_paneMsg4->setMsgID('5553_00'); // "The game cannot be saved. An incorrect device is inserted in Slot A. Remove the device and
		                                 // insert a Memory Card."
		m_paneMsg1->setMsgID('5553_00'); // "The game cannot be saved. An incorrect device is inserted in Slot A. Remove the device and
		                                 // insert a Memory Card."
		m_paneMsg2->setMsgID('5553_00'); // "The game cannot be saved. An incorrect device is inserted in Slot A. Remove the device and
		                                 // insert a Memory Card."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveCantUseCard:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5554_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		m_paneMsg4->setMsgID('5554_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		m_paneMsg1->setMsgID('5554_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		m_paneMsg2->setMsgID('5554_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveDoFormat:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('0000_00');
		m_paneMsg4->setMsgID('5592_00'); // "The game cannot be saved. The Memory Card in Slot A is corrupted and must be formatted. Format
		                                 // the Memory Card now?"
		m_paneMsg1->setMsgID('5593_00'); // "Yes"
		m_paneMsg2->setMsgID('5594_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_CantSaveNoSpace:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5555_00'); // "The game cannot be saved. There is not enough available space on the Memory Card in Slot A.
		                                 // Pikmin 2 requires 1 File and 27 Blocks to save."
		m_paneMsg4->setMsgID('5555_00'); // "The game cannot be saved. There is not enough available space on the Memory Card in Slot A.
		                                 // Pikmin 2 requires 1 File and 27 Blocks to save."
		m_paneMsg1->setMsgID('5555_00'); // "The game cannot be saved. There is not enough available space on the Memory Card in Slot A.
		                                 // Pikmin 2 requires 1 File and 27 Blocks to save."
		m_paneMsg2->setMsgID('5555_00'); // "The game cannot be saved. There is not enough available space on the Memory Card in Slot A.
		                                 // Pikmin 2 requires 1 File and 27 Blocks to save."
		startState(MEMCARD_Message);
		break;

	case OPEN_InsertOriginalCard:
		m_paneMsg3->setMsgID('5556_00'); // "Please manage Memory Card data on the Memory Card Screen, or insert the original Memory Card."
		m_paneMsg4->setMsgID('5556_00'); // "Please manage Memory Card data on the Memory Card Screen, or insert the original Memory Card."
		m_paneMsg1->setMsgID('5556_00'); // "Please manage Memory Card data on the Memory Card Screen, or insert the original Memory Card."
		m_paneMsg2->setMsgID('5556_00'); // "Please manage Memory Card data on the Memory Card Screen, or insert the original Memory Card."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantFormat2:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5557_00'); // "The Memory Card could not be formatted."
		m_paneMsg4->setMsgID('5557_00'); // "The Memory Card could not be formatted."
		m_paneMsg1->setMsgID('5557_00'); // "The Memory Card could not be formatted."
		m_paneMsg2->setMsgID('5557_00'); // "The Memory Card could not be formatted."
		startState(MEMCARD_Message);
		break;

	case OPEN_FormatSuccess:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		m_paneMsg3->setMsgID('5558_00'); // "The Memory Card has been formatted."
		m_paneMsg4->setMsgID('5558_00'); // "The Memory Card has been formatted."
		m_paneMsg1->setMsgID('5558_00'); // "The Memory Card has been formatted."
		m_paneMsg2->setMsgID('5558_00'); // "The Memory Card has been formatted."
		startState(MEMCARD_Message);
		break;

	case OPEN_Formatting2:
		m_isPlaySavingSE = true;
		m_paneMsg3->setMsgID('5559_00'); // "The Memory Card is being formatted. Do not touch the Memory Card or the POWER Button."
		m_paneMsg4->setMsgID('5559_00'); // "The Memory Card is being formatted. Do not touch the Memory Card or the POWER Button."
		m_paneMsg1->setMsgID('5559_00'); // "The Memory Card is being formatted. Do not touch the Memory Card or the POWER Button."
		m_paneMsg2->setMsgID('5559_00'); // "The Memory Card is being formatted. Do not touch the Memory Card or the POWER Button."
		startState(MEMCARD_Message);
		break;

	case OPEN_DoFormat2:
		m_paneMsg3->setMsgID('0000_00');
		m_paneMsg4->setMsgID('5560_00'); // "Formatting the Memory Card will erase all saved data. Is this OK?"
		m_paneMsg1->setMsgID('5561_00'); // "Yes"
		m_paneMsg2->setMsgID('5562_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_CantSaveCantUseCard2:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5563_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		m_paneMsg4->setMsgID('5563_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		m_paneMsg1->setMsgID('5563_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		m_paneMsg2->setMsgID('5563_00'); // "The game cannot be saved. The Memory Card in Slot A cannot be used."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveGotoIPL:
		m_paneMsg3->setMsgID('0000_00');
		m_paneMsg4->setMsgID(
		    '5564_00'); // "Data cannot be saved, so current progress will be lost. Continue to the Memory Card Screen anyway?"
		m_paneMsg1->setMsgID('5565_00'); // "Yes"
		m_paneMsg2->setMsgID('5566_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_DoGotoIPL2:
		m_paneMsg3->setMsgID('0000_00');
		m_paneMsg4->setMsgID('5567_00'); // "Access the Memory Card Screen now?"
		m_paneMsg1->setMsgID('5568_00'); // "Yes"
		m_paneMsg2->setMsgID('5569_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_DoCreateFile2:
		m_paneMsg3->setMsgID('0000_00');
		m_paneMsg4->setMsgID('5570_00'); // "Create a Pikmin 2 game file on the Memory Card in Slot A?"
		m_paneMsg1->setMsgID('5571_00'); // "Yes"
		m_paneMsg2->setMsgID('5572_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_CantSaveNoFile:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5573_00'); // "The game cannot be saved. The Memory Card in Slot A does not have a Pikmin 2 game file."
		m_paneMsg4->setMsgID('5573_00'); // "The game cannot be saved. The Memory Card in Slot A does not have a Pikmin 2 game file."
		m_paneMsg1->setMsgID('5573_00'); // "The game cannot be saved. The Memory Card in Slot A does not have a Pikmin 2 game file."
		m_paneMsg2->setMsgID('5573_00'); // "The game cannot be saved. The Memory Card in Slot A does not have a Pikmin 2 game file."
		startState(MEMCARD_Message);
		break;

	case OPEN_CreatingFile2:
		m_isPlaySavingSE = true;
		m_paneMsg3->setMsgID('5574_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		m_paneMsg4->setMsgID('5574_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		m_paneMsg1->setMsgID('5574_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		m_paneMsg2->setMsgID('5574_00'); // "Creating a game file... Do not touch the Memory Card in Slot A or the POWER Button."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantCreateFile2:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5575_00'); // "A game file could not be created."
		m_paneMsg4->setMsgID('5575_00'); // "A game file could not be created."
		m_paneMsg1->setMsgID('5575_00'); // "A game file could not be created."
		m_paneMsg2->setMsgID('5575_00'); // "A game file could not be created."
		startState(MEMCARD_Message);
		break;

	case OPEN_FileCreated2:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		m_paneMsg3->setMsgID('5576_00'); // "A game file has been created."
		m_paneMsg4->setMsgID('5576_00'); // "A game file has been created."
		m_paneMsg1->setMsgID('5576_00'); // "A game file has been created."
		m_paneMsg2->setMsgID('5576_00'); // "A game file has been created."
		startState(MEMCARD_Message);
		break;

	case OPEN_CantSaveInsertOriginalCard:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5577_00'); // "The game cannot be saved. Please insert the original Memory Card into Slot A."
		m_paneMsg4->setMsgID('5577_00'); // "The game cannot be saved. Please insert the original Memory Card into Slot A."
		m_paneMsg1->setMsgID('5577_00'); // "The game cannot be saved. Please insert the original Memory Card into Slot A."
		m_paneMsg2->setMsgID('5577_00'); // "The game cannot be saved. Please insert the original Memory Card into Slot A."
		startState(MEMCARD_Message);
		break;

	case OPEN_CardCorruptedDoOverwrite:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('0000_00');
		m_paneMsg4->setMsgID(
		    '5578_00'); // "The data in the file on the Memory Card in Slot A is corrupted. Is it OK to overwrite this file?"
		m_paneMsg1->setMsgID('5579_00'); // "Yes"
		m_paneMsg2->setMsgID('5580_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_Saving:
		m_isPlaySavingSE = true;
		m_paneMsg3->setMsgID('5581_00'); // "Saving... Do not touch the Memory Card in Slot A or the POWER Button."
		m_paneMsg4->setMsgID('5581_00'); // "Saving... Do not touch the Memory Card in Slot A or the POWER Button."
		m_paneMsg1->setMsgID('5581_00'); // "Saving... Do not touch the Memory Card in Slot A or the POWER Button."
		m_paneMsg2->setMsgID('5581_00'); // "Saving... Do not touch the Memory Card in Slot A or the POWER Button."
		startState(MEMCARD_Message);
		break;

	case OPEN_SaveSuccess:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		m_paneMsg3->setMsgID('0000_00');
		m_paneMsg4->setMsgID('5582_00'); // "The game has been saved. Continue playing?"
		m_paneMsg1->setMsgID('5583_00'); // "Yes"
		m_paneMsg2->setMsgID('5584_00'); // "No"
		setSelect_(false);
		startState(MEMCARD_Selection);
		break;

	case OPEN_SaveFail:
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
		m_paneMsg3->setMsgID('5585_00'); // "The game could not be saved."
		m_paneMsg4->setMsgID('5585_00'); // "The game could not be saved."
		m_paneMsg1->setMsgID('5585_00'); // "The game could not be saved."
		m_paneMsg2->setMsgID('5585_00'); // "The game could not be saved."
		startState(MEMCARD_Message);
		break;
	}
}

/*
 * --INFO--
 * Address:	803C3B00
 * Size:	000030
 */
void TMemoryCard::close()
{
	if (m_state != MEMCARD_Finish)
		startState(MEMCARD_Finish);
}

/*
 * --INFO--
 * Address:	803C3B30
 * Size:	000024
 */
void TMemoryCard::killScreen() { startState(MEMCARD_Disabled); }

/*
 * --INFO--
 * Address:	803C3B54
 * Size:	000334
 */
void TMemoryCard::setSelect_(bool sel)
{
	m_currSel = sel;

	if (m_currSel) {
		doSetSelect(1.0f, true); // needs tweaking

	} else {
		doSetSelect(0.0f, false); // needs tweaking
	}
	m_cursor1.update();
	m_cursor2.update();
	/*
stwu     r1, -0x70(r1)
mflr     r0
stw      r0, 0x74(r1)
stw      r31, 0x6c(r1)
mr       r31, r3
stw      r30, 0x68(r1)
stb      r4, 0x18(r3)
lbz      r0, 0x18(r3)
cmplwi   r0, 0
beq      lbl_803C3CF0
li       r0, 0
stb      r0, 0x5c(r31)
lwz      r3, 0x58(r31)
cmplwi   r3, 0
beq      lbl_803C3C28
lwz      r7, 0x60(r31)
mr       r30, r3
addi     r4, r1, 0x60
stw      r7, 0x24(r1)
lbz      r5, 0x24(r1)
lbz      r0, 0x25(r1)
stb      r5, 0x104(r3)
lbz      r5, 0x26(r1)
stb      r0, 0x105(r3)
lbz      r0, 0x27(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0x64(r31)
stw      r7, 0x58(r1)
stw      r6, 0x20(r1)
lbz      r5, 0x20(r1)
lbz      r0, 0x21(r1)
stb      r5, 0x108(r3)
lbz      r5, 0x22(r1)
stb      r0, 0x109(r3)
lbz      r0, 0x23(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0x68(r31)
stw      r6, 0x5c(r1)
stw      r0, 0x60(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x6c(r31)
mr       r3, r30
addi     r4, r1, 0x64
stw      r0, 0x64(r1)
lwz      r12, 0(r30)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803C3C28:
li       r0, 0
stb      r0, 0xa8(r31)
lwz      r3, 0xa4(r31)
cmplwi   r3, 0
beq      lbl_803C3CD4
lwz      r7, 0xac(r31)
mr       r30, r3
addi     r4, r1, 0x50
stw      r7, 0x1c(r1)
lbz      r5, 0x1c(r1)
lbz      r0, 0x1d(r1)
stb      r5, 0x104(r3)
lbz      r5, 0x1e(r1)
stb      r0, 0x105(r3)
lbz      r0, 0x1f(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0xb0(r31)
stw      r7, 0x48(r1)
stw      r6, 0x18(r1)
lbz      r5, 0x18(r1)
lbz      r0, 0x19(r1)
stb      r5, 0x108(r3)
lbz      r5, 0x1a(r1)
stb      r0, 0x109(r3)
lbz      r0, 0x1b(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0xb4(r31)
stw      r6, 0x4c(r1)
stw      r0, 0x50(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0xb8(r31)
mr       r3, r30
addi     r4, r1, 0x54
stw      r0, 0x54(r1)
lwz      r12, 0(r30)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803C3CD4:
lfs      f0, lbl_8051F8AC@sda21(r2)
li       r0, 1
stfs     f0, 0x24c(r31)
stb      r0, 0x250(r31)
stfs     f0, 0x284(r31)
stb      r0, 0x288(r31)
b        lbl_803C3E60

lbl_803C3CF0:
li       r0, 0
stb      r0, 0x5c(r31)
lwz      r3, 0x58(r31)
cmplwi   r3, 0
beq      lbl_803C3D9C
lwz      r7, 0x60(r31)
mr       r30, r3
addi     r4, r1, 0x40
stw      r7, 0x14(r1)
lbz      r5, 0x14(r1)
lbz      r0, 0x15(r1)
stb      r5, 0x104(r3)
lbz      r5, 0x16(r1)
stb      r0, 0x105(r3)
lbz      r0, 0x17(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0x64(r31)
stw      r7, 0x38(r1)
stw      r6, 0x10(r1)
lbz      r5, 0x10(r1)
lbz      r0, 0x11(r1)
stb      r5, 0x108(r3)
lbz      r5, 0x12(r1)
stb      r0, 0x109(r3)
lbz      r0, 0x13(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0x68(r31)
stw      r6, 0x3c(r1)
stw      r0, 0x40(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x6c(r31)
mr       r3, r30
addi     r4, r1, 0x44
stw      r0, 0x44(r1)
lwz      r12, 0(r30)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803C3D9C:
li       r0, 0
stb      r0, 0xa8(r31)
lwz      r3, 0xa4(r31)
cmplwi   r3, 0
beq      lbl_803C3E48
lwz      r7, 0xac(r31)
mr       r30, r3
addi     r4, r1, 0x30
stw      r7, 0xc(r1)
lbz      r5, 0xc(r1)
lbz      r0, 0xd(r1)
stb      r5, 0x104(r3)
lbz      r5, 0xe(r1)
stb      r0, 0x105(r3)
lbz      r0, 0xf(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0xb0(r31)
stw      r7, 0x28(r1)
stw      r6, 8(r1)
lbz      r5, 8(r1)
lbz      r0, 9(r1)
stb      r5, 0x108(r3)
lbz      r5, 0xa(r1)
stb      r0, 0x109(r3)
lbz      r0, 0xb(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0xb4(r31)
stw      r6, 0x2c(r1)
stw      r0, 0x30(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0xb8(r31)
mr       r3, r30
addi     r4, r1, 0x34
stw      r0, 0x34(r1)
lwz      r12, 0(r30)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803C3E48:
lfs      f0, lbl_8051F8B0@sda21(r2)
li       r0, 0
stfs     f0, 0x24c(r31)
stb      r0, 0x250(r31)
stfs     f0, 0x284(r31)
stb      r0, 0x288(r31)

lbl_803C3E60:
addi     r3, r31, 0x224
bl       update__Q23ebi12TYesNoCursorFv
addi     r3, r31, 0x25c
bl       update__Q23ebi12TYesNoCursorFv
lwz      r0, 0x74(r1)
lwz      r31, 0x6c(r1)
lwz      r30, 0x68(r1)
mtlr     r0
addi     r1, r1, 0x70
blr
	*/
}

} // namespace Screen

#pragma dont_inline on
/*
 * --INFO--
 * Address:	803C3E88
 * Size:	000128
 */
void TYesNoCursor::update()
{
	if (m_pane1 && m_pane2) {
		Vector2f pos1 = E2DPane_getGlbCenter(m_pane1);
		Vector2f pos2 = E2DPane_getGlbCenter(m_pane2);

		if (m_selected) {
			m_timer += m_speed;
			if (m_timer > 1.0f) {
				m_timer = 1.0f;
			}
		} else {
			m_timer -= m_speed;
			if (m_timer < 0.0f) {
				m_timer = 0.0f;
			}
		}
		f32 time = m_timer;
		m_pos    = (pos1 * time) + (pos2 * (1.0f - time));
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r4, 0x30(r3)
	cmplwi   r4, 0
	beq      lbl_803C3F9C
	lwz      r0, 0x34(r31)
	cmplwi   r0, 0
	beq      lbl_803C3F9C
	addi     r3, r1, 0x20
	bl       E2DPane_getGlbCenter__3ebiFP7J2DPane
	lfs      f1, 0x20(r1)
	addi     r3, r1, 0x18
	lfs      f0, 0x24(r1)
	stfs     f1, 0x30(r1)
	lwz      r4, 0x34(r31)
	stfs     f0, 0x34(r1)
	bl       E2DPane_getGlbCenter__3ebiFP7J2DPane
	lbz      r0, 0x2c(r31)
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	cmplwi   r0, 0
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	beq      lbl_803C3F1C
	lfs      f2, 0x28(r31)
	lfs      f1, 0x24(r31)
	lfs      f0, lbl_8051F8AC@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x28(r31)
	lfs      f1, 0x28(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_803C3F40
	stfs     f0, 0x28(r31)
	b        lbl_803C3F40

lbl_803C3F1C:
	lfs      f2, 0x28(r31)
	lfs      f1, 0x24(r31)
	lfs      f0, lbl_8051F8B0@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x28(r31)
	lfs      f1, 0x28(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_803C3F40
	stfs     f0, 0x28(r31)

lbl_803C3F40:
	lwz      r3, 0x28(r1)
	lwz      r0, 0x30(r1)
	stw      r3, 8(r1)
	lwz      r3, 0x2c(r1)
	stw      r0, 0x10(r1)
	lwz      r0, 0x34(r1)
	stw      r3, 0xc(r1)
	lfs      f4, 0x28(r31)
	lfs      f0, lbl_8051F8AC@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f1, 0x10(r1)
	fsubs    f5, f0, f4
	lfs      f0, 8(r1)
	lfs      f3, 0xc(r1)
	fmuls    f2, f1, f4
	fmuls    f1, f0, f5
	lfs      f0, 0x14(r1)
	fmuls    f3, f3, f5
	fmuls    f0, f0, f4
	fadds    f1, f2, f1
	fadds    f0, f0, f3
	stfs     f1, 0x1c(r31)
	stfs     f0, 0x20(r31)

lbl_803C3F9C:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}
#pragma dont_inline reset

namespace Screen {

/*
 * --INFO--
 * Address:	803C3FB0
 * Size:	000028
 */
bool TMemoryCard::isFinish()
{
	if (m_msgAlpha == 0 && m_state == MEMCARD_Finish) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
bool TMemoryCard::isDecide()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C3FD8
 * Size:	0004EC
 */
void TMemoryCard::startState(enumState state)
{
	m_state = state;
	switch (m_state) {
	case MEMCARD_Disabled:
		m_cursor1.kill();
		m_cursor2.kill();
		break;
	case MEMCARD_Selection:
		m_cursor1.kill();
		m_cursor2.kill();
		m_paneMsg3->hide();
		m_paneMsg4->show();
		m_paneMsg4->setAlpha(255);
		m_paneMsg1->show();
		m_paneMsg1->setAlpha(255);
		m_paneMsg2->show();
		m_paneMsg2->setAlpha(255);
		if (m_currSel == 1) {
			m_blinkFont[0].m_isEnabled = true;
			m_blinkFont[0].m_speed     = sys->m_deltaTime * 3.333333f;
			m_blinkFont[0]._40         = 0.0f;
			m_blinkFont[0]._48         = true;
			m_blinkFont[0]._49         = false;

			m_blinkFont[1].setPaneColors();
			m_cursor1.m_timer    = 1.0f;
			m_cursor1.m_selected = true;
			m_cursor2.m_timer    = 1.0f;
			m_cursor2.m_selected = true;
		} else {
			m_blinkFont[0].setPaneColors();

			m_blinkFont[1].m_isEnabled = true;
			m_blinkFont[1].m_speed     = sys->m_deltaTime * 3.333333f;
			m_blinkFont[1]._40         = 0.0f;
			m_blinkFont[1]._48         = true;
			m_blinkFont[1]._49         = false;

			m_cursor1.m_timer    = 0.0f;
			m_cursor1.m_selected = false;
			m_cursor2.m_timer    = 0.0f;
			m_cursor2.m_selected = false;
		}
		m_cursor1.create(nullptr);
		m_cursor2.create(nullptr);
		m_inputDelay = 20;
		_0C          = 20;
		m_anims[1].play(sys->m_deltaTime * 60.0f, (J3DAnmAttr)0, true);
		m_anims[2].play(sys->m_deltaTime * 60.0f, (J3DAnmAttr)0, true);
		m_anims[3].play(sys->m_deltaTime * 60.0f, (J3DAnmAttr)0, true);
		m_anims[4].play(sys->m_deltaTime * 60.0f, (J3DAnmAttr)0, true);
		m_screenMain->animation();
		break;

	case MEMCARD_Message:
		m_cursor1.kill();
		m_cursor2.kill();
		m_paneMsg4->hide();
		m_paneMsg1->hide();
		m_paneMsg2->hide();
		m_paneMsg3->show();
		m_paneMsg3->setAlpha(255);
		m_inputDelay = 20;
		_0C          = 20;
		m_anims[1].play(sys->m_deltaTime * 60.0f, (J3DAnmAttr)0, true);
		m_anims[2].play(sys->m_deltaTime * 60.0f, (J3DAnmAttr)0, true);
		m_anims[3].play(sys->m_deltaTime * 60.0f, (J3DAnmAttr)0, true);
		m_anims[4].play(sys->m_deltaTime * 60.0f, (J3DAnmAttr)0, true);
		m_screenMain->animation();
		break;
	case MEMCARD_Finish:
		m_msgAlpha = 30;
		m_alphaMod = 30;
		break;
	}
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stw      r31, 0x3c(r1)
mr       r31, r3
stw      r30, 0x38(r1)
stw      r4, 0(r3)
lwz      r0, 0(r3)
cmpwi    r0, 2
beq      lbl_803C43A0
bge      lbl_803C4014
cmpwi    r0, 0
beq      lbl_803C4020
bge      lbl_803C404C
b        lbl_803C44AC

lbl_803C4014:
cmpwi    r0, 4
bge      lbl_803C44AC
b        lbl_803C44A0

lbl_803C4020:
addi     r3, r31, 0x224
lwz      r12, 0x224(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
addi     r3, r31, 0x25c
lwz      r12, 0x25c(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
b        lbl_803C44AC

lbl_803C404C:
addi     r3, r31, 0x224
lwz      r12, 0x224(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
addi     r3, r31, 0x25c
lwz      r12, 0x25c(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r31)
li       r5, 0
li       r0, 1
li       r4, 0xff
stb      r5, 0xb0(r3)
lwz      r3, 0x2c(r31)
stb      r0, 0xb0(r3)
lwz      r3, 0x2c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x20(r31)
li       r0, 1
li       r4, 0xff
stb      r0, 0xb0(r3)
lwz      r3, 0x20(r31)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x24(r31)
li       r0, 1
li       r4, 0xff
stb      r0, 0xb0(r3)
lwz      r3, 0x24(r31)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lbz      r0, 0x18(r31)
cmplwi   r0, 1
bne      lbl_803C41EC
li       r4, 1
lfs      f2, lbl_8051F8B4@sda21(r2)
stb      r4, 0x5c(r31)
li       r0, 0
lfs      f0, lbl_8051F8B0@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x54(r3)
fmuls    f1, f2, f1
stfs     f1, 0x84(r31)
stfs     f0, 0x80(r31)
stb      r4, 0x88(r31)
stb      r0, 0x89(r31)
stb      r0, 0xa8(r31)
lwz      r3, 0xa4(r31)
cmplwi   r3, 0
beq      lbl_803C41D0
lwz      r7, 0xac(r31)
mr       r30, r3
addi     r4, r1, 0x30
stw      r7, 0x14(r1)
lbz      r5, 0x14(r1)
lbz      r0, 0x15(r1)
stb      r5, 0x104(r3)
lbz      r5, 0x16(r1)
stb      r0, 0x105(r3)
lbz      r0, 0x17(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0xb0(r31)
stw      r7, 0x28(r1)
stw      r6, 0x10(r1)
lbz      r5, 0x10(r1)
lbz      r0, 0x11(r1)
stb      r5, 0x108(r3)
lbz      r5, 0x12(r1)
stb      r0, 0x109(r3)
lbz      r0, 0x13(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0xb4(r31)
stw      r6, 0x2c(r1)
stw      r0, 0x30(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0xb8(r31)
mr       r3, r30
addi     r4, r1, 0x34
stw      r0, 0x34(r1)
lwz      r12, 0(r30)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803C41D0:
lfs      f0, lbl_8051F8AC@sda21(r2)
li       r0, 1
stfs     f0, 0x24c(r31)
stb      r0, 0x250(r31)
stfs     f0, 0x284(r31)
stb      r0, 0x288(r31)
b        lbl_803C42D8

lbl_803C41EC:
li       r0, 0
stb      r0, 0x5c(r31)
lwz      r3, 0x58(r31)
cmplwi   r3, 0
beq      lbl_803C4298
lwz      r7, 0x60(r31)
mr       r30, r3
addi     r4, r1, 0x20
stw      r7, 0xc(r1)
lbz      r5, 0xc(r1)
lbz      r0, 0xd(r1)
stb      r5, 0x104(r3)
lbz      r5, 0xe(r1)
stb      r0, 0x105(r3)
lbz      r0, 0xf(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0x64(r31)
stw      r7, 0x18(r1)
stw      r6, 8(r1)
lbz      r5, 8(r1)
lbz      r0, 9(r1)
stb      r5, 0x108(r3)
lbz      r5, 0xa(r1)
stb      r0, 0x109(r3)
lbz      r0, 0xb(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0x68(r31)
stw      r6, 0x1c(r1)
stw      r0, 0x20(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x6c(r31)
mr       r3, r30
addi     r4, r1, 0x24
stw      r0, 0x24(r1)
lwz      r12, 0(r30)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803C4298:
li       r4, 1
lfs      f2, lbl_8051F8B4@sda21(r2)
stb      r4, 0xa8(r31)
li       r0, 0
lfs      f0, lbl_8051F8B0@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x54(r3)
fmuls    f1, f2, f1
stfs     f1, 0xd0(r31)
stfs     f0, 0xcc(r31)
stb      r4, 0xd4(r31)
stb      r0, 0xd5(r31)
stfs     f0, 0x24c(r31)
stb      r0, 0x250(r31)
stfs     f0, 0x284(r31)
stb      r0, 0x288(r31)

lbl_803C42D8:
addi     r3, r31, 0x224
li       r4, 0
lwz      r12, 0x224(r31)
lwz      r12, 8(r12)
mtctr    r12
bctrl
addi     r3, r31, 0x25c
li       r4, 0
lwz      r12, 0x25c(r31)
lwz      r12, 8(r12)
mtctr    r12
bctrl
li       r0, 0x14
lfs      f1, lbl_8051F8A8@sda21(r2)
stw      r0, 8(r31)
addi     r3, r31, 0x114
li       r4, 0
li       r5, 1
stw      r0, 0xc(r31)
lwz      r6, sys@sda21(r13)
lfs      f0, 0x54(r6)
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0x150
lfs      f1, lbl_8051F8A8@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0x18c
lfs      f1, lbl_8051F8A8@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0x1c8
lfs      f1, lbl_8051F8A8@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r3, 0x1c(r31)
bl       animation__9J2DScreenFv
b        lbl_803C44AC

lbl_803C43A0:
addi     r3, r31, 0x224
lwz      r12, 0x224(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
addi     r3, r31, 0x25c
lwz      r12, 0x25c(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r3, 0x2c(r31)
li       r5, 0
li       r0, 1
li       r4, 0xff
stb      r5, 0xb0(r3)
lwz      r3, 0x20(r31)
stb      r5, 0xb0(r3)
lwz      r3, 0x24(r31)
stb      r5, 0xb0(r3)
lwz      r3, 0x28(r31)
stb      r0, 0xb0(r3)
lwz      r3, 0x28(r31)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
li       r0, 0x14
lfs      f1, lbl_8051F8A8@sda21(r2)
stw      r0, 8(r31)
addi     r3, r31, 0x114
li       r4, 0
li       r5, 1
stw      r0, 0xc(r31)
lwz      r6, sys@sda21(r13)
lfs      f0, 0x54(r6)
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0x150
lfs      f1, lbl_8051F8A8@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0x18c
lfs      f1, lbl_8051F8A8@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0x1c8
lfs      f1, lbl_8051F8A8@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r3, 0x1c(r31)
bl       animation__9J2DScreenFv
b        lbl_803C44AC

lbl_803C44A0:
li       r0, 0x1e
stw      r0, 0x10(r31)
stw      r0, 0x14(r31)

lbl_803C44AC:
lwz      r0, 0x44(r1)
lwz      r31, 0x3c(r1)
lwz      r30, 0x38(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	803C44C4
 * Size:	0008C8
 */
void TMemoryCard::update()
{
	switch (m_state) {
	case MEMCARD_Selection:
		if (m_inputDelay) {
			m_inputDelay--;
		}
		if (!m_inputDelay && m_canExit) {
			if (m_controller->mPadButton->m_buttonDown & Controller::PRESS_DPAD_RIGHT || m_controller->m_padButton.m_analogL > 0.5f) {
				if (m_currSel == 1) {
					m_currSel                  = 0;
					m_blinkFont[0]._48         = false;
					m_blinkFont[0]._49         = true;
					m_blinkFont[1].m_isEnabled = true;
					m_blinkFont[1].m_speed     = sys->m_deltaTime * 3.333333f;
					m_blinkFont[1]._40         = 0.0f;
					m_blinkFont[1]._48         = true;
					m_blinkFont[1]._49         = false;
					m_cursor1.m_selected       = false;
					m_cursor2.m_selected       = false;
				}
			} else if (m_controller->mPadButton->m_buttonDown & Controller::PRESS_DPAD_RIGHT
			           || m_controller->m_padButton.m_analogL > 0.5f) {
				if (m_currSel == 0) {
					m_currSel                  = 1;
					m_blinkFont[0].m_isEnabled = true;
					m_blinkFont[0].m_speed     = sys->m_deltaTime * 3.333333f;
					m_blinkFont[0]._40         = 0.0f;
					m_blinkFont[0]._48         = true;
					m_blinkFont[0]._49         = false;
					m_blinkFont[1]._48         = false;
					m_blinkFont[1]._49         = true;
					m_cursor1.m_selected       = true;
					m_cursor2.m_selected       = true;
				}
			} else if (m_controller->mPadButton->m_buttonDown & Controller::PRESS_A) {
				if (m_currSel) {
					m_blinkFont[0].m_isEnabled = false;
					J2DTextBox* pane           = static_cast<J2DTextBox*>(m_blinkFont[0].m_pane);
					if (pane) {
						pane->m_color1 = m_blinkFont[0].m_fonts[0].m_col1;
						pane->m_color2 = m_blinkFont[0].m_fonts[0].m_col2;
						pane->setWhite(m_blinkFont[0].m_fonts[0].m_white);
						pane->setBlack(m_blinkFont[0].m_fonts[0].m_black);
					}

					m_blinkFont[1].m_isEnabled = false;
					pane                       = static_cast<J2DTextBox*>(m_blinkFont[1].m_pane);
					if (pane) {
						pane->m_color1 = m_blinkFont[1].m_fonts[0].m_col1;
						pane->m_color2 = m_blinkFont[1].m_fonts[0].m_col2;
						pane->setWhite(m_blinkFont[1].m_fonts[0].m_white);
						pane->setBlack(m_blinkFont[1].m_fonts[0].m_black);
					}
					m_cursor1.m_timer    = 1.0f;
					m_cursor1.m_selected = true;
					m_cursor2.m_timer    = 1.0f;
					m_cursor2.m_selected = true;
				} else {
					m_blinkFont[0].m_isEnabled = false;
					J2DTextBox* pane           = static_cast<J2DTextBox*>(m_blinkFont[0].m_pane);
					if (pane) {
						pane->m_color1 = m_blinkFont[0].m_fonts[0].m_col1;
						pane->m_color2 = m_blinkFont[0].m_fonts[0].m_col2;
						pane->setWhite(m_blinkFont[0].m_fonts[0].m_white);
						pane->setBlack(m_blinkFont[0].m_fonts[0].m_black);
					}

					m_blinkFont[1].m_isEnabled = false;
					pane                       = static_cast<J2DTextBox*>(m_blinkFont[1].m_pane);
					if (pane) {
						pane->m_color1 = m_blinkFont[1].m_fonts[0].m_col1;
						pane->m_color2 = m_blinkFont[1].m_fonts[0].m_col2;
						pane->setWhite(m_blinkFont[1].m_fonts[0].m_white);
						pane->setBlack(m_blinkFont[1].m_fonts[0].m_black);
					}
					m_cursor1.m_timer    = 0.0f;
					m_cursor1.m_selected = false;
					m_cursor2.m_timer    = 0.0f;
					m_cursor2.m_selected = false;
				}
				m_cursor1.update();
				m_cursor2.update();
				startState(MEMCARD_Finish);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
				return;
			} else if (m_controller->mPadButton->m_buttonDown & Controller::PRESS_B) {
				m_blinkFont[0].m_isEnabled = false;
				J2DTextBox* pane           = static_cast<J2DTextBox*>(m_blinkFont[0].m_pane);
				if (pane) {
					pane->m_color1 = m_blinkFont[0].m_fonts[0].m_col1;
					pane->m_color2 = m_blinkFont[0].m_fonts[0].m_col2;
					pane->setWhite(m_blinkFont[0].m_fonts[0].m_white);
					pane->setBlack(m_blinkFont[0].m_fonts[0].m_black);
				}

				m_blinkFont[1].m_isEnabled = false;
				pane                       = static_cast<J2DTextBox*>(m_blinkFont[1].m_pane);
				if (pane) {
					pane->m_color1 = m_blinkFont[1].m_fonts[1].m_col1;
					pane->m_color2 = m_blinkFont[1].m_fonts[1].m_col2;
					pane->setWhite(m_blinkFont[1].m_fonts[1].m_white);
					pane->setBlack(m_blinkFont[1].m_fonts[1].m_black);
				}
				m_cursor1.m_timer    = 0.0f;
				m_cursor1.m_selected = false;
				m_cursor2.m_timer    = 0.0f;
				m_cursor2.m_selected = false;
				m_cursor1.update();
				m_cursor2.update();
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
				startState(MEMCARD_Finish);
				return;
			}
			m_cursor1.update();
			m_cursor2.update();
			m_screenMain->update();
		}
		break;

	case MEMCARD_Message:
		if (m_inputDelay) {
			m_inputDelay--;
		}
		if (!m_inputDelay) {
			bool end  = false;
			u32 input = m_controller->m_padButton.m_buttonDown;
			if ((input & Controller::PRESS_A) || (input & Controller::PRESS_B) || (input & Controller::PRESS_X)
			    || (input & Controller::PRESS_Y) || (input & Controller::PRESS_START)) {
				end = true;
			}
			if (end && m_canExit) {
				startState(MEMCARD_Finish);
				return;
			}
		}
		m_screenMain->update();
		if (m_isPlaySavingSE) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ACCESS, 0);
		}
		break;

	case MEMCARD_Finish:
		if (m_msgAlpha) {
			m_msgAlpha--;
		}

		f32 mod; // this might be an inline
		int temp = m_alphaMod;
		if (!temp) {
			mod = 0.0f;
		} else {
			mod = (f32)m_msgAlpha / (f32)temp;
		}

		if (mod < 0.7f) {
			m_cursor1.fade();
			m_cursor2.fade();

			f32 mod;
			int temp = m_alphaMod;
			if (!temp) {
				mod = 0.0f;
			} else {
				mod = (f32)m_msgAlpha / (f32)temp;
			}
			u8 alpha = (mod / 0.7f) * 255.0f;
			m_paneMsg1->setAlpha(alpha);
			m_paneMsg2->setAlpha(alpha);
			m_paneMsg3->setAlpha(alpha);
			m_paneMsg4->setAlpha(alpha);
		}
		m_screenMain->update();
		break;
	}
	/*
stwu     r1, -0xc0(r1)
mflr     r0
stw      r0, 0xc4(r1)
stw      r31, 0xbc(r1)
mr       r31, r3
stw      r30, 0xb8(r1)
lwz      r0, 0(r3)
cmpwi    r0, 2
beq      lbl_803C4B60
bge      lbl_803C44FC
cmpwi    r0, 0
beq      lbl_803C4D74
bge      lbl_803C4508
b        lbl_803C4D74

lbl_803C44FC:
cmpwi    r0, 4
bge      lbl_803C4D74
b        lbl_803C4C10

lbl_803C4508:
lwz      r3, 8(r31)
cmplwi   r3, 0
beq      lbl_803C451C
addi     r0, r3, -1
stw      r0, 8(r31)

lbl_803C451C:
lwz      r0, 8(r31)
cmplwi   r0, 0
bne      lbl_803C4B38
lbz      r0, 0x19(r31)
cmplwi   r0, 0
beq      lbl_803C4B38
lwz      r3, 4(r31)
lwz      r0, 0x18(r3)
rlwinm.  r0, r0, 0, 0x1e, 0x1e
bne      lbl_803C4554
lfs      f1, 0x48(r3)
lfs      f0, lbl_8051F8B8@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_803C455C

lbl_803C4554:
li       r0, 1
b        lbl_803C4560

lbl_803C455C:
li       r0, 0

lbl_803C4560:
clrlwi.  r0, r0, 0x18
beq      lbl_803C45CC
lbz      r0, 0x18(r31)
cmplwi   r0, 1
bne      lbl_803C4B38
li       r6, 0
li       r0, 1
stb      r6, 0x18(r31)
li       r4, 0x1802
lfs      f2, lbl_8051F8B4@sda21(r2)
li       r5, 0
stb      r6, 0x88(r31)
lfs      f0, lbl_8051F8B0@sda21(r2)
stb      r0, 0x89(r31)
stb      r0, 0xa8(r31)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x54(r3)
fmuls    f1, f2, f1
stfs     f1, 0xd0(r31)
stfs     f0, 0xcc(r31)
stb      r0, 0xd4(r31)
stb      r6, 0xd5(r31)
stb      r6, 0x250(r31)
stb      r6, 0x288(r31)
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803C4B38

lbl_803C45CC:
lwz      r0, 0x18(r3)
clrlwi.  r0, r0, 0x1f
bne      lbl_803C45E8
lfs      f1, 0x48(r3)
lfs      f0, lbl_8051F8BC@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_803C45F0

lbl_803C45E8:
li       r0, 1
b        lbl_803C45F4

lbl_803C45F0:
li       r0, 0

lbl_803C45F4:
clrlwi.  r0, r0, 0x18
beq      lbl_803C4660
lbz      r0, 0x18(r31)
cmplwi   r0, 0
bne      lbl_803C4B38
li       r6, 1
lfs      f2, lbl_8051F8B4@sda21(r2)
stb      r6, 0x18(r31)
li       r0, 0
lfs      f0, lbl_8051F8B0@sda21(r2)
li       r4, 0x1802
stb      r6, 0x5c(r31)
li       r5, 0
lwz      r3, sys@sda21(r13)
lfs      f1, 0x54(r3)
fmuls    f1, f2, f1
stfs     f1, 0x84(r31)
stfs     f0, 0x80(r31)
stb      r6, 0x88(r31)
stb      r0, 0x89(r31)
stb      r0, 0xd4(r31)
stb      r6, 0xd5(r31)
stb      r6, 0x250(r31)
stb      r6, 0x288(r31)
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803C4B38

lbl_803C4660:
lwz      r3, 0x1c(r3)
rlwinm.  r0, r3, 0, 0x17, 0x17
beq      lbl_803C498C
lbz      r0, 0x18(r31)
cmplwi   r0, 1
bne      lbl_803C47EC
li       r0, 0
stb      r0, 0x5c(r31)
lwz      r3, 0x58(r31)
cmplwi   r3, 0
beq      lbl_803C4724
lwz      r7, 0x70(r31)
mr       r30, r3
addi     r4, r1, 0x90
stw      r7, 0x34(r1)
lbz      r5, 0x34(r1)
lbz      r0, 0x35(r1)
stb      r5, 0x104(r3)
lbz      r5, 0x36(r1)
stb      r0, 0x105(r3)
lbz      r0, 0x37(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0x74(r31)
stw      r7, 0x88(r1)
stw      r6, 0x30(r1)
lbz      r5, 0x30(r1)
lbz      r0, 0x31(r1)
stb      r5, 0x108(r3)
lbz      r5, 0x32(r1)
stb      r0, 0x109(r3)
lbz      r0, 0x33(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0x78(r31)
stw      r6, 0x8c(r1)
stw      r0, 0x90(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x7c(r31)
mr       r3, r30
addi     r4, r1, 0x94
stw      r0, 0x94(r1)
lwz      r12, 0(r30)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803C4724:
li       r0, 0
stb      r0, 0xa8(r31)
lwz      r3, 0xa4(r31)
cmplwi   r3, 0
beq      lbl_803C47D0
lwz      r7, 0xac(r31)
mr       r30, r3
addi     r4, r1, 0x80
stw      r7, 0x2c(r1)
lbz      r5, 0x2c(r1)
lbz      r0, 0x2d(r1)
stb      r5, 0x104(r3)
lbz      r5, 0x2e(r1)
stb      r0, 0x105(r3)
lbz      r0, 0x2f(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0xb0(r31)
stw      r7, 0x78(r1)
stw      r6, 0x28(r1)
lbz      r5, 0x28(r1)
lbz      r0, 0x29(r1)
stb      r5, 0x108(r3)
lbz      r5, 0x2a(r1)
stb      r0, 0x109(r3)
lbz      r0, 0x2b(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0xb4(r31)
stw      r6, 0x7c(r1)
stw      r0, 0x80(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0xb8(r31)
mr       r3, r30
addi     r4, r1, 0x84
stw      r0, 0x84(r1)
lwz      r12, 0(r30)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803C47D0:
lfs      f0, lbl_8051F8AC@sda21(r2)
li       r0, 1
stfs     f0, 0x24c(r31)
stb      r0, 0x250(r31)
stfs     f0, 0x284(r31)
stb      r0, 0x288(r31)
b        lbl_803C495C

lbl_803C47EC:
li       r0, 0
stb      r0, 0x5c(r31)
lwz      r3, 0x58(r31)
cmplwi   r3, 0
beq      lbl_803C4898
lwz      r7, 0x60(r31)
mr       r30, r3
addi     r4, r1, 0x70
stw      r7, 0x24(r1)
lbz      r5, 0x24(r1)
lbz      r0, 0x25(r1)
stb      r5, 0x104(r3)
lbz      r5, 0x26(r1)
stb      r0, 0x105(r3)
lbz      r0, 0x27(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0x64(r31)
stw      r7, 0x68(r1)
stw      r6, 0x20(r1)
lbz      r5, 0x20(r1)
lbz      r0, 0x21(r1)
stb      r5, 0x108(r3)
lbz      r5, 0x22(r1)
stb      r0, 0x109(r3)
lbz      r0, 0x23(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0x68(r31)
stw      r6, 0x6c(r1)
stw      r0, 0x70(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x6c(r31)
mr       r3, r30
addi     r4, r1, 0x74
stw      r0, 0x74(r1)
lwz      r12, 0(r30)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803C4898:
li       r0, 0
stb      r0, 0xa8(r31)
lwz      r3, 0xa4(r31)
cmplwi   r3, 0
beq      lbl_803C4944
lwz      r7, 0xbc(r31)
mr       r30, r3
addi     r4, r1, 0x60
stw      r7, 0x1c(r1)
lbz      r5, 0x1c(r1)
lbz      r0, 0x1d(r1)
stb      r5, 0x104(r3)
lbz      r5, 0x1e(r1)
stb      r0, 0x105(r3)
lbz      r0, 0x1f(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0xc0(r31)
stw      r7, 0x58(r1)
stw      r6, 0x18(r1)
lbz      r5, 0x18(r1)
lbz      r0, 0x19(r1)
stb      r5, 0x108(r3)
lbz      r5, 0x1a(r1)
stb      r0, 0x109(r3)
lbz      r0, 0x1b(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0xc4(r31)
stw      r6, 0x5c(r1)
stw      r0, 0x60(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0xc8(r31)
mr       r3, r30
addi     r4, r1, 0x64
stw      r0, 0x64(r1)
lwz      r12, 0(r30)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803C4944:
lfs      f0, lbl_8051F8B0@sda21(r2)
li       r0, 0
stfs     f0, 0x24c(r31)
stb      r0, 0x250(r31)
stfs     f0, 0x284(r31)
stb      r0, 0x288(r31)

lbl_803C495C:
addi     r3, r31, 0x224
bl       update__Q23ebi12TYesNoCursorFv
addi     r3, r31, 0x25c
bl       update__Q23ebi12TYesNoCursorFv
mr       r3, r31
li       r4, 3
bl
startState__Q33ebi6Screen11TMemoryCardFQ43ebi6Screen11TMemoryCard9enumState lwz
r3, spSysIF__8PSSystem@sda21(r13) li       r4, 0x1800 li       r5, 0 bl
playSystemSe__Q28PSSystem5SysIFFUlUl b        lbl_803C4D74

lbl_803C498C:
rlwinm.  r0, r3, 0, 0x16, 0x16
beq      lbl_803C4B38
li       r0, 0
stb      r0, 0x18(r31)
stb      r0, 0x5c(r31)
lwz      r3, 0x58(r31)
cmplwi   r3, 0
beq      lbl_803C4A44
lwz      r7, 0x60(r31)
mr       r30, r3
addi     r4, r1, 0x50
stw      r7, 0x14(r1)
lbz      r5, 0x14(r1)
lbz      r0, 0x15(r1)
stb      r5, 0x104(r3)
lbz      r5, 0x16(r1)
stb      r0, 0x105(r3)
lbz      r0, 0x17(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0x64(r31)
stw      r7, 0x48(r1)
stw      r6, 0x10(r1)
lbz      r5, 0x10(r1)
lbz      r0, 0x11(r1)
stb      r5, 0x108(r3)
lbz      r5, 0x12(r1)
stb      r0, 0x109(r3)
lbz      r0, 0x13(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0x68(r31)
stw      r6, 0x4c(r1)
stw      r0, 0x50(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x6c(r31)
mr       r3, r30
addi     r4, r1, 0x54
stw      r0, 0x54(r1)
lwz      r12, 0(r30)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803C4A44:
li       r0, 0
stb      r0, 0xa8(r31)
lwz      r3, 0xa4(r31)
cmplwi   r3, 0
beq      lbl_803C4AF0
lwz      r7, 0xbc(r31)
mr       r30, r3
addi     r4, r1, 0x40
stw      r7, 0xc(r1)
lbz      r5, 0xc(r1)
lbz      r0, 0xd(r1)
stb      r5, 0x104(r3)
lbz      r5, 0xe(r1)
stb      r0, 0x105(r3)
lbz      r0, 0xf(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0xc0(r31)
stw      r7, 0x38(r1)
stw      r6, 8(r1)
lbz      r5, 8(r1)
lbz      r0, 9(r1)
stb      r5, 0x108(r3)
lbz      r5, 0xa(r1)
stb      r0, 0x109(r3)
lbz      r0, 0xb(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0xc4(r31)
stw      r6, 0x3c(r1)
stw      r0, 0x40(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0xc8(r31)
mr       r3, r30
addi     r4, r1, 0x44
stw      r0, 0x44(r1)
lwz      r12, 0(r30)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803C4AF0:
lfs      f0, lbl_8051F8B0@sda21(r2)
li       r0, 0
addi     r3, r31, 0x224
stfs     f0, 0x24c(r31)
stb      r0, 0x250(r31)
stfs     f0, 0x284(r31)
stb      r0, 0x288(r31)
bl       update__Q23ebi12TYesNoCursorFv
addi     r3, r31, 0x25c
bl       update__Q23ebi12TYesNoCursorFv
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1801
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
mr       r3, r31
li       r4, 3
bl
startState__Q33ebi6Screen11TMemoryCardFQ43ebi6Screen11TMemoryCard9enumState b
lbl_803C4D74

lbl_803C4B38:
addi     r3, r31, 0x224
bl       update__Q23ebi12TYesNoCursorFv
addi     r3, r31, 0x25c
bl       update__Q23ebi12TYesNoCursorFv
lwz      r3, 0x1c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
b        lbl_803C4D74

lbl_803C4B60:
lwz      r3, 8(r31)
cmplwi   r3, 0
beq      lbl_803C4B74
addi     r0, r3, -1
stw      r0, 8(r31)

lbl_803C4B74:
lwz      r0, 8(r31)
cmplwi   r0, 0
bne      lbl_803C4BDC
lwz      r3, 4(r31)
li       r4, 0
lwz      r3, 0x1c(r3)
rlwinm.  r0, r3, 0, 0x17, 0x17
bne      lbl_803C4BB4
rlwinm.  r0, r3, 0, 0x16, 0x16
bne      lbl_803C4BB4
rlwinm.  r0, r3, 0, 0x15, 0x15
bne      lbl_803C4BB4
rlwinm.  r0, r3, 0, 0x14, 0x14
bne      lbl_803C4BB4
rlwinm.  r0, r3, 0, 0x13, 0x13
beq      lbl_803C4BB8

lbl_803C4BB4:
li       r4, 1

lbl_803C4BB8:
clrlwi.  r0, r4, 0x18
beq      lbl_803C4BDC
lbz      r0, 0x19(r31)
cmplwi   r0, 0
beq      lbl_803C4BDC
mr       r3, r31
li       r4, 3
bl
startState__Q33ebi6Screen11TMemoryCardFQ43ebi6Screen11TMemoryCard9enumState b
lbl_803C4D74

lbl_803C4BDC:
lwz      r3, 0x1c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lbz      r0, 0x294(r31)
cmplwi   r0, 0
beq      lbl_803C4D74
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x100b
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803C4D74

lbl_803C4C10:
lwz      r3, 0x10(r31)
cmplwi   r3, 0
beq      lbl_803C4C24
addi     r0, r3, -1
stw      r0, 0x10(r31)

lbl_803C4C24:
lwz      r4, 0x14(r31)
cmplwi   r4, 0
beq      lbl_803C4C64
lwz      r3, 0x10(r31)
lis      r0, 0x4330
stw      r0, 0x98(r1)
lfd      f2, lbl_8051F8C8@sda21(r2)
stw      r3, 0x9c(r1)
lfd      f0, 0x98(r1)
stw      r4, 0xa4(r1)
fsubs    f1, f0, f2
stw      r0, 0xa0(r1)
lfd      f0, 0xa0(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803C4C68

lbl_803C4C64:
lfs      f1, lbl_8051F8B0@sda21(r2)

lbl_803C4C68:
lfs      f0, lbl_8051F8C0@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_803C4D60
addi     r3, r31, 0x224
lwz      r12, 0x224(r31)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
addi     r3, r31, 0x25c
lwz      r12, 0x25c(r31)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r4, 0x14(r31)
cmplwi   r4, 0
beq      lbl_803C4CDC
lwz      r3, 0x10(r31)
lis      r0, 0x4330
stw      r0, 0xa0(r1)
lfd      f2, lbl_8051F8C8@sda21(r2)
stw      r3, 0xa4(r1)
lfd      f0, 0xa0(r1)
stw      r4, 0x9c(r1)
fsubs    f1, f0, f2
stw      r0, 0x98(r1)
lfd      f0, 0x98(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803C4CE0

lbl_803C4CDC:
lfs      f1, lbl_8051F8B0@sda21(r2)

lbl_803C4CE0:
lfs      f0, lbl_8051F8C0@sda21(r2)
lwz      r3, 0x20(r31)
fdivs    f0, f1, f0
lfs      f1, lbl_8051F8C4@sda21(r2)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
fmuls    f0, f1, f0
fctiwz   f0, f0
stfd     f0, 0xa8(r1)
lwz      r0, 0xac(r1)
clrlwi   r30, r0, 0x18
mr       r4, r30
mtctr    r12
bctrl
lwz      r3, 0x24(r31)
mr       r4, r30
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r31)
mr       r4, r30
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x2c(r31)
mr       r4, r30
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl

lbl_803C4D60:
lwz      r3, 0x1c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl

lbl_803C4D74:
lwz      r0, 0xc4(r1)
lwz      r31, 0xbc(r1)
lwz      r30, 0xb8(r1)
mtlr     r0
addi     r1, r1, 0xc0
blr
	*/
}

/*
 * --INFO--
 * Address:	803C4D8C
 * Size:	000080
 */
void TMemoryCard::draw()
{
	if (m_state != MEMCARD_Disabled) {
		Graphics& gfx       = *sys->m_gfx;
		J2DPerspGraph& graf = gfx.m_perspGraph;
		graf.setPort();
		m_screenMain->draw(gfx, graf);
	}
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r29, r3
lwz      r0, 0(r3)
cmpwi    r0, 0
beq      lbl_803C4DF0
lwz      r3, sys@sda21(r13)
lwz      r31, 0x24(r3)
addi     r30, r31, 0x190
lwz      r12, 0(r30)
mr       r3, r30
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x1c(r29)
mr       r4, r31
mr       r5, r30
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl

lbl_803C4DF0:
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}
} // namespace Screen
} // namespace ebi
