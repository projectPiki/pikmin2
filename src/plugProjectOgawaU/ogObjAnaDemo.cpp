#include "og/newScreen/TitleMsg.h"
#include "og/newScreen/ogUtil.h"
#include "og/newScreen/AnaDemo.h"
#include "og/Screen/ogScreen.h"
#include "og/Sound.h"
#include "System.h"
#include "Controller.h"

namespace og {
namespace newScreen {
// should be static once the file is finished!
// clang-format off
static CaveTitleMsgEntry CaveTitleMsg [] = {
//   id, filler, msg,      fire,  elec,  water, poison, filler
    {'t_01', 0, '8395_00', false, false, false, false, 0},		// Emergence Cave
    {'t_02', 0, '8399_00', true , true , false, true , 0},		// Subterannean Complex
    {'t_03', 0, '8400_00', true , true , true , true , 0},		// Frontier Cavern
    {'f_01', 0, '8396_00', true , false, false, false, 0},		// Hole of Beasts
    {'f_02', 0, '8398_00', true , false, false, true , 0},		// White Flower Garden
    {'f_03', 0, '8401_00', true , true , false, false, 0},		// Bulblax Kingdom
    {'f_04', 0, '8410_00', false, true , true , true , 0},		// Snagret Hole
    {'y_01', 0, '8397_00', true , true , false, false, 0},		// Citadel of Spiders
    {'y_02', 0, '8402_00', false, true , false, false, 0},		// Gluttons Kitchen
    {'y_03', 0, '8403_00', true , true , true , true , 0},		// Shower Room
    {'y_04', 0, '8411_00', true , true , true , true , 0},		// Submerged Castle
    {'l_01', 0, '8412_00', true , true , true , true , 0},		// Cavern of Chaos
    {'l_02', 0, '8413_00', true , true , true , true , 0},		// Hole of Heroes
    {'l_03', 0, '8414_00', true , true , true , true , 0},		// Dream Den
    {'c_00', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 1
    {'c_01', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 2
    {'c_02', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 3
    {'c_03', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 4
    {'c_04', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 5
    {'c_05', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 6
    {'c_06', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 7
    {'c_07', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 8
    {'c_08', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 9
    {'c_09', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 10
    {'c_10', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 11
    {'c_11', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 12
    {'c_12', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 13
    {'c_13', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 14
    {'c_14', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 15
    {'c_15', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 16
    {'c_16', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 17
    {'c_17', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 18
    {'c_18', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 19
    {'c_19', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 20
    {'c_20', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 21
    {'c_21', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 22
    {'c_22', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 23
    {'c_23', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 24
    {'c_24', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 25
    {'c_25', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 26
    {'c_26', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 27
    {'c_27', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 28
    {'c_28', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 29
    {'c_29', 0, '8395_00', false, false, false, false, 0},		// Challenge Mode 30
    {'END' , 0, 'END'    , false, false, false, false, 0}
};
// clang-format on

/*
 * --INFO--
 * Address:	8031CD80
 * Size:	00009C
 */
u64 caveIDtoMsgID(u32 caveID)
{
	char buf[16];
	u64 ret = 0;
	for (int i = 0;; i++) {
		u32 id = CaveTitleMsg[i].id;
		if (id == 'END') {
			og::Screen::TagToName(caveID, buf);
			break;
		}

		if (id == caveID) {
			ret = CaveTitleMsg[i].bmg_tag;
			break;
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void caveIDtoATB(u32 caveID, bool* isHazard1, bool* isHazard2, bool* isHazard3, bool* isHazard4)
{
	char buf[10];
	for (int i = 0;; i++) {
		u32 id = CaveTitleMsg[i].id;
		if (id == 'END') {
			og::Screen::TagToName(caveID, buf);
			break;
		}

		if (id == caveID) {
			*isHazard1 = CaveTitleMsg[i].is_fire;
			*isHazard2 = CaveTitleMsg[i].is_elec;
			*isHazard3 = CaveTitleMsg[i].is_water;
			*isHazard4 = CaveTitleMsg[i].is_toxic;
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	8031CE1C
 * Size:	0000BC
 */
ObjAnaDemo::ObjAnaDemo(const char* name)
{
	m_name       = name;
	m_disp       = nullptr;
	m_anaType    = ANADEMO_CaveEntry;
	m_state      = ANADEMOSTATE_Disabled;
	m_anaTypeSub = ANADEMOSUB_Normal;

	m_currMenuSel  = 0;
	m_screen       = nullptr;
	m_menuMgr      = nullptr;
	m_animGroup    = nullptr;
	_54            = nullptr;
	m_menuSelTitle = nullptr;
	m_menuSelYes   = nullptr;
	m_menuSelNo    = nullptr;
	_68            = 0.0f;
	_6C            = 0;
	m_paneError    = nullptr;
	_88            = 0;
	_8C            = 0.0f;
	m_closeTimer   = 0.0f;

	m_timer3 = 0.0f;
	m_alpha  = 255;
	m_timer4 = 0.0f;
	m_timer1 = 0.0f;
	m_timer2 = 0.0f;
}

/*
 * --INFO--
 * Address:	8031CED8
 * Size:	0000AC
 */
ObjAnaDemo::~ObjAnaDemo() { }

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void ObjAnaDemo::setWindowMsg(u64 tagQ, u64 tagY, u64 tagN)
{
	m_screen->search('Tm00q')->setMsgID(tagQ);
	m_screen->search('Tm00y')->setMsgID(tagY);
	m_screen->search('Tm00n')->setMsgID(tagN);
}

/*
 * --INFO--
 * Address:	8031CF84
 * Size:	001120
 */
void ObjAnaDemo::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberAnaDemo* disp_main = static_cast<og::Screen::DispMemberAnaDemo*>(getDispMember());

	if (disp_main->isID(OWNER_OGA, MEMBER_ANA_DEMO)) {
		m_disp    = disp_main;
		m_anaType = ANADEMO_CaveEntry;

	} else if (disp_main->isID(OWNER_OGA, MEMBER_KANKETU_MENU)) {
		og::Screen::DispMemberKanketuMenu* disp_kan = static_cast<og::Screen::DispMemberKanketuMenu*>(disp_main);
		m_disp                                      = disp_kan;
		if (disp_kan->m_isChallenge) {
			m_anaType = ANADEMO_KantekuChallenge;
		} else {
			m_anaType = ANADEMO_Kanteku;
		}

		if (disp_kan->m_cantProceed) {
			m_anaTypeSub = ANADEMOSUB_CantProceed;
		} else if (disp_kan->m_pikiInDanger) {
			m_anaTypeSub = ANADEMOSUB_PikiInDanger;
		}

	} else if (disp_main->isID(OWNER_OGA, MEMBER_CAVE_MORE)) {
		og::Screen::DispMemberCaveMore* disp_more = static_cast<og::Screen::DispMemberCaveMore*>(disp_main);
		m_disp                                    = disp_more;
		m_anaType                                 = ANADEMO_CaveMore;

		if (disp_more->m_cantProceed) {
			m_anaTypeSub = ANADEMOSUB_CantProceed;
		} else if (disp_more->m_pikiInDanger) {
			m_anaTypeSub = ANADEMOSUB_PikiInDanger;
		}

	} else if (disp_main->isID(OWNER_OGA, MEMBER_DUMMY)) {
		m_disp = new og::Screen::DispMemberAnaDemo;

	} else {
		JUT_PANICLINE(431, "ERR! in ObjAnaDemo CreateŽ¸”sI\n");
	}

	m_screen = new P2DScreen::Mgr_tuning;

	if (m_anaType == ANADEMO_CaveEntry) {
		m_screen->set("ana_demo.blo", 0x1040000, arc);

	} else if (m_anaTypeSub == ANADEMOSUB_CantProceed || m_anaTypeSub == ANADEMOSUB_PikiInDanger) {
		m_screen->set("warning_me_piki.blo", 0x1040000, arc);

		og::Screen::TagSearch(m_screen, 'Nmenu01')->hide();
		og::Screen::TagSearch(m_screen, 'Nmenu02')->hide();
		og::Screen::TagSearch(m_screen, 'Nerror')->hide();

	} else {
		m_screen->set("info_window.blo", 0x1040000, arc);
		og::Screen::TagSearch(m_screen, 'Nmenu01')->hide();
		og::Screen::TagSearch(m_screen, 'Nmenu02')->hide();
	}

	og::Screen::setAlphaScreen(m_screen);
	og::Screen::setFurikoScreen(m_screen);

	if (m_anaType != ANADEMO_CaveEntry) {
		if (m_anaTypeSub == ANADEMOSUB_CantProceed) {
			og::Screen::TagSearch(m_screen, 'Nmenu00')->hide();
			setWindowMsg('9999_00', '9999_00', '9999_00');

			if (m_anaType == ANADEMO_CaveMore) {
				m_screen->search('T_title1')->setMsgID('8600_00'); // "All Pikmin are buried, so you cannot proceed."
			} else {
				m_screen->search('T_title1')->setMsgID('8605_00'); // "All Pikmin are buried, so you cannot return to the surface."
			}

			og::Screen::TagSearch(m_screen, 'Nerror')->show();

		} else {
			switch (m_anaType) {
			case ANADEMO_KantekuChallenge:
				if (m_anaTypeSub == ANADEMOSUB_PikiInDanger) {
					setWindowMsg('8606_00', '8607_00',
					             '8608_00'); // "If you go above ground all Pikmin sprouts will be left behind!"
					                         // "Return to the Surface" "Go Help Them"
				} else {
					setWindowMsg('8383_00', '8384_00',
					             '8385_00'); // "Exit this Challenge Level?" "Exit the Level" "Continue Exploring"
				}
				break;

			case ANADEMO_Kanteku:
				if (m_anaTypeSub == ANADEMOSUB_PikiInDanger) {
					setWindowMsg('8606_00', '8607_00',
					             '8608_00'); // "If you go above ground, all Pikmin sprouts will be left behind!"
					                         // "Return to the Surface" "Go Help Them"
				} else {
					setWindowMsg('8364_00', '8365_00',
					             '8366_00'); // "Escape to the surface with your Pikmin?" "Yes" "No"
				}
				break;

			case ANADEMO_CaveMore:
				if (m_anaTypeSub == ANADEMOSUB_PikiInDanger) {
					setWindowMsg('8601_00', '8602_00',
					             '8603_00'); // "If you delve deeper, all of your Pikmin sprouts will be left behind!"
					                         // "Delve Deeper" "Go Help Them"
				} else {
					setWindowMsg('8367_00', '8368_00', '8369_00'); // "Delve deeper with your Pikmin?" "Yes" "No"
				}
				break;

			default:
				m_screen->search('Tm00y')->setMsgID('8368_00'); // "Yes"
				m_screen->search('Tm00n')->setMsgID('8369_00'); // "No"
				break;
			}
		}
	}

	og::Screen::setCallBackMessage(m_screen);

	if (m_anaType == ANADEMO_CaveEntry) {
		J2DPane* pane = m_screen->search('ana_name');
		u64 tag       = caveIDtoMsgID(m_disp->m_caveID);

		if (tag != 0) {
			pane->m_messageID = tag;
		} else {
			pane->m_messageID = CaveTitleMsg[0].bmg_tag;
		}
	}

	if (m_anaType == ANADEMO_CaveEntry) {
		J2DPane* hazardpane1 = m_screen->search('Picon00');
		J2DPane* hazardpane3 = m_screen->search('Picon01'); // yes this is swapped
		J2DPane* hazardpane2 = m_screen->search('Picon02'); // yes this is swapped
		J2DPane* hazardpane4 = m_screen->search('Picon03');
		u8 alpha1            = 32;
		u8 alpha2            = 32;
		u8 alpha3            = 32;
		u8 alpha4            = 32;
		bool isHazard1, isHazard2, isHazard3, isHazard4;
		caveIDtoATB(m_disp->m_caveID, &isHazard1, &isHazard2, &isHazard3, &isHazard4);

		if (isHazard1) {
			alpha1 = 255;
		}
		if (isHazard2) {
			alpha2 = 255;
		}
		if (isHazard3) {
			alpha3 = 255;
		}
		if (isHazard4) {
			alpha4 = 255;
		}

		hazardpane1->setAlpha(alpha1);
		hazardpane2->setAlpha(alpha2);
		hazardpane3->setAlpha(alpha3);
		hazardpane4->setAlpha(alpha4);
	}

	if (m_anaType == ANADEMO_CaveEntry) {
		og::Screen::TagSearch(m_screen, 'h_title')->setMsgID('8361_00'); // "Enter this hole with your Pikmin squad?"
		m_paneError = og::Screen::TagSearch(m_screen, 'Nerror');
		m_alpha     = m_paneError->m_alpha;
		m_paneError->setAlpha(0);
	}

	if (m_anaType == ANADEMO_CaveEntry) {
		m_menuSelTitle = og::Screen::setMenuTitleScreen(arc, m_screen, 'h_title');
		m_menuSelYes   = og::Screen::setMenuScreen(arc, m_screen, 'h_00');
		m_menuSelNo    = og::Screen::setMenuScreen(arc, m_screen, 'h_01');

	} else if (m_anaTypeSub != ANADEMOSUB_CantProceed) {
		m_menuSelTitle = og::Screen::setMenuTitleScreen(arc, m_screen, 'Tm00q');
		m_menuSelYes   = og::Screen::setMenuScreen(arc, m_screen, 'Tm00y');
		m_menuSelNo    = og::Screen::setMenuScreen(arc, m_screen, 'Tm00n');
	}

	og::Screen::AnimText_Screen* anim = m_menuSelTitle;
	if (anim) {
		if (m_disp->_1C) {
			anim->stop();
			m_menuSelYes->stop();
			m_menuSelNo->stop();
		} else {
			anim->open(0.5f);
			m_menuSelYes->open(0.6f);
			m_menuSelNo->open(0.7f);
		}
	}

	m_currMenuSel = 0;
	if (m_anaTypeSub == ANADEMOSUB_PikiInDanger) {
		m_currMenuSel = 1;
	}

	if (m_anaTypeSub != ANADEMOSUB_CantProceed) {
		m_menuMgr = new og::Screen::MenuMgr;
		if (m_anaType == ANADEMO_CaveEntry) {
			m_menuMgr->init(m_screen, 2, 'nu_00', 'h_00', 's_00', 'il00', 'ir00');
		} else {
			m_menuMgr->init2takuTitle(m_screen, 'Nm00y', 'Tm00y', 'Pm00y_il', 'Pm00y_ir', 'Nm00n', 'Tm00n', 'Pm00n_il', 'Pm00n_ir');
		}

		m_menuMgr->initSelNum(m_currMenuSel);
		setBlinkMenu();
	}

	if (m_anaType == ANADEMO_CaveEntry) {
		m_animGroup = new og::Screen::AnimGroup(3);
		og::Screen::registAnimGroupScreen(m_animGroup, arc, m_screen, "ana_demo.btk", 1.0f);
		og::Screen::registAnimGroupScreen(m_animGroup, arc, m_screen, "ana_demo_02.btk", 1.0f);
		og::Screen::registAnimGroupScreen(m_animGroup, arc, m_screen, "ana_demo_03.btk", 1.0f);
	}

	if (m_anaType == ANADEMO_CaveEntry) {
		og::Screen::DispMemberAnaDemo* disp;
		if ((int)m_disp->m_caveOtakaraNum >= 0 && (int)m_disp->m_caveOtakaraMax >= 0) {
			og::Screen::CallBack_CounterRV* counter1
			    = og::Screen::setCallBack_CounterRV(m_screen, 'item_01', &m_disp->m_caveOtakaraNum, 3, 0, 1, arc);
			og::Screen::CallBack_CounterRV* counter2
			    = og::Screen::setCallBack_CounterRV(m_screen, 'Titem01', &m_disp->m_caveOtakaraMax, 3, 0, 1, arc);
			og::Screen::CallBack_CounterRV* counter3
			    = og::Screen::setCallBack_CounterRV(m_screen, 'Ppiki01', &m_disp->m_pikis, 3, 0, 1, arc);
			og::Screen::CallBack_CounterRV* counter4
			    = og::Screen::setCallBack_CounterRV(m_screen, 'Papiki01', &m_disp->m_pikisField, 3, 0, 1, arc);

			counter1->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown0);
			counter2->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_UNKNOWN_2);
			counter3->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown0);
			counter4->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_UNKNOWN_2);

			disp = m_disp;
			if (disp->m_payedDebt || disp->m_caveOtakaraNum == disp->m_caveOtakaraMax) {
				counter2->show();
			} else {
				counter1->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown1);
				counter2->hide();
				counter1->getMotherPane()->move(msVal._04, 0.0f);
				m_screen->search('sura')->hide();
			}
		}
	}

	m_state = ANADEMOSTATE_Init;
	ogSound->setOpenDoukutu();
}

/*
 * --INFO--
 * Address:	8031E0A4
 * Size:	000094
 */
void ObjAnaDemo::setBlinkMenu()
{
	if (m_menuSelTitle) {
		switch (m_currMenuSel) {
		case 0:
			m_menuSelYes->blink(0.6f, 0.0f);
			m_menuSelNo->blink(0.0f, 0.0f);
			break;
		case 1:
			m_menuSelYes->blink(0.0f, 0.0f);
			m_menuSelNo->blink(0.6f, 0.0f);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	8031E138
 * Size:	0005D4
 */
bool ObjAnaDemo::doUpdate()
{
	bool ret = false;
	commonUpdate();
	Controller* pad = getGamePad();

	switch (m_state) {
	case ANADEMOSTATE_Disabled:
		break;

	case ANADEMOSTATE_Init:
		m_state  = ANADEMOSTATE_Enter;
		m_timer1 = msVal._08;
		m_timer2 = msVal._0C;
		break;

	case ANADEMOSTATE_Enter:
		if (m_timer2 > 0.0f) {
			m_timer2 -= sys->m_deltaTime;
			if (m_timer2 < 0.0f) {
				if (m_anaTypeSub == ANADEMOSUB_PikiInDanger) {
					ogSound->setWarning();
				} else if (m_anaTypeSub == ANADEMOSUB_CantProceed) {
					ogSound->setError();
				}
			}
		}

		if (m_timer1 > 0.0f) {
			m_timer1 -= sys->m_deltaTime;
			if (m_timer1 < 0.0f) {
				if (m_menuMgr)
					m_menuMgr->startCursor(0.0f);

				if (m_anaTypeSub == ANADEMOSUB_CantProceed) {
					m_state = ANADEMOSTATE_ErrorWait;
				} else {
					m_state = ANADEMOSTATE_IdleWait;
				}
			}
		}
		break;

	case ANADEMOSTATE_IdleWait:
		if (pad->m_padButton.m_buttonDown & (Controller::PRESS_DPAD_UP | Controller::UNKNOWN_32)) {
			if (m_currMenuSel > 0) {
				m_currMenuSel--;
				if (m_menuMgr) {
					m_menuMgr->select(m_currMenuSel);
				}
				if (m_menuSelTitle) {
					switch (m_currMenuSel) {
					case 0:
						m_menuSelYes->blink(0.6f, 0.0f);
						m_menuSelNo->blink(0.0f, 0.0f);
						break;
					case 1:
						m_menuSelYes->blink(0.0f, 0.0f);
						m_menuSelNo->blink(0.6f, 0.0f);
						break;
					}
				}
			}

		} else if (pad->m_padButton.m_buttonDown & (Controller::PRESS_DPAD_DOWN | Controller::UNKNOWN_31)) {
			if (m_currMenuSel < 1) {
				m_currMenuSel++;
				if (m_menuMgr) {
					m_menuMgr->select(m_currMenuSel);
				}
				if (m_menuSelTitle) {
					switch (m_currMenuSel) {
					case 0:
						m_menuSelYes->blink(0.6f, 0.0f);
						m_menuSelNo->blink(0.0f, 0.0f);
						break;
					case 1:
						m_menuSelYes->blink(0.0f, 0.0f);
						m_menuSelNo->blink(0.6f, 0.0f);
						break;
					}
				}
			}
		} else if (pad->m_padButton.m_buttonDown & Controller::PRESS_A) {
			if (m_menuMgr)
				m_menuMgr->killCursor();
			if (m_currMenuSel == 0) {
				m_disp->m_selected = true;
				if (m_menuSelTitle) {
					m_menuSelYes->close();
					m_menuSelNo->close();
				}

				// no pikmin, cant enter cave
				if (m_disp->m_pikis == 0) {
					if (m_menuMgr)
						m_menuMgr->killCursor();
					m_state  = ANADEMOSTATE_ErrorTimed;
					m_timer4 = 0.5f;
					if (m_menuSelTitle)
						m_menuSelTitle->_6C = 0.5f;
					ogSound->setError();
					m_paneError->setAlpha(0);
				} else {
					if (m_anaType == ANADEMO_Kanteku) {
						m_state      = ANADEMOSTATE_Exit;
						m_closeTimer = 0.0f;
						ogSound->setDecide();
					} else {
						_68 = 0.5f;
						ogSound->setDecide();
						m_state      = ANADEMOSTATE_Exit;
						m_closeTimer = 0.0f;
					}
				}
			} else {
				m_disp->m_selected = false;
				m_state            = ANADEMOSTATE_Exit;
				m_closeTimer       = 0.0f;
				ogSound->setDecide();
			}
		} else if (pad->m_padButton.m_buttonDown & Controller::PRESS_B) {
			if (m_menuMgr) {
				m_menuMgr->killCursor();
			}
			m_disp->m_selected = false;
			m_state            = ANADEMOSTATE_Exit;
			m_closeTimer       = 0.0f;
			ogSound->setClose();
		}
		break;

	case ANADEMOSTATE_ErrorWait:
		bool anyButtonDown = false;
		u32 input          = pad->m_padButton.m_buttonDown;
		if (input & Controller::PRESS_A || input & Controller::PRESS_B || input & Controller::PRESS_X || input & Controller::PRESS_Y
		    || input & Controller::PRESS_START) {
			anyButtonDown = true;
		}
		if (anyButtonDown) {
			m_state            = ANADEMOSTATE_Exit;
			m_closeTimer       = 0.0f;
			m_disp->m_selected = false;
			ogSound->setClose();
		}
		break;

	case ANADEMOSTATE_ErrorTimed:
		if (m_timer3 >= 1.0f) {
			bool anyButtonDown = false;
			u32 input          = pad->m_padButton.m_buttonDown;
			if (input & Controller::PRESS_A || input & Controller::PRESS_B || input & Controller::PRESS_X || input & Controller::PRESS_Y
			    || input & Controller::PRESS_START) {
				anyButtonDown = true;
			}
			if (anyButtonDown) {
				m_state            = ANADEMOSTATE_Exit;
				m_closeTimer       = 0.0f;
				m_disp->m_selected = false;
				ogSound->setClose();
			}

		} else if (m_timer4 > 0.0f) {
			m_timer4 -= sys->m_deltaTime;

		} else {
			m_paneError->setAlpha(m_alpha * m_timer3);
			m_timer3 += sys->m_deltaTime * 30.0f * 0.1f;
			if (m_timer3 > 1.0f) {
				m_timer3 = 1.0f;
			}
		}
		break;

	case ANADEMOSTATE_Exit:
		m_closeTimer += sys->m_deltaTime;
		_8C = og::Screen::calcSmooth0to1(m_closeTimer, msVal._00) * -800.0f;
		if (m_closeTimer >= msVal._00) {
			ret         = true;
			m_disp->_1F = false;
			m_state     = ANADEMOSTATE_Disabled;
		}
		break;
	}

	return ret;
}

/*
 * --INFO--
 * Address:	8031E70C
 * Size:	000080
 */
void ObjAnaDemo::commonUpdate()
{
	if (m_menuMgr) {
		m_menuMgr->update();
	}

	if (m_animGroup) {
		m_animGroup->update();
	}

	m_screen->setXY(_8C, 0.0f);
	m_screen->update();
}

/*
 * --INFO--
 * Address:	8031E78C
 * Size:	000074
 */
void ObjAnaDemo::doDraw(Graphics& gfx)
{
	if (m_state != 0) {
		J2DPerspGraph* graf         = &gfx.m_perspGraph;
		P2DScreen::Mgr_tuning* scrn = m_screen;
		if (scrn) {
			scrn->draw(gfx, *graf);
		}
		if (m_menuMgr) {
			m_menuMgr->draw(graf);
		}
	}
}

/*
 * --INFO--
 * Address:	8031E800
 * Size:	000018
 */
bool ObjAnaDemo::doStart(::Screen::StartSceneArg const*)
{
	m_closeTimer = 0.0f;
	_8C          = 800.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8031E818
 * Size:	000008
 */
bool ObjAnaDemo::doEnd(::Screen::EndSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	8031E820
 * Size:	000004
 */
void ObjAnaDemo::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	8031E824
 * Size:	00000C
 */
void ObjAnaDemo::doUpdateFinish() { m_closeTimer = 0.0f; }

/*
 * --INFO--
 * Address:	8031E830
 * Size:	000094
 */
void ObjAnaDemo::doUpdateFadeoutFinish()
{
	::Screen::SceneBase* scene = getOwner();
	if (m_disp->m_selected) {
		scene->endScene(nullptr);
	} else {
		if (scene->setBackupScene() && !scene->startScene(nullptr)) {
			JUT_PANICLINE(994, "‚¾‚ß‚Å‚·\n");
		}
	}
}

/*
 * --INFO--
 * Address:	8031E8C4
 * Size:	0000E4
 */
bool ObjAnaDemo::doUpdateFadein()
{
	bool ret = false;
	commonUpdate();
	m_closeTimer += sys->m_deltaTime;

	_8C = 800.0f * (1.0f - og::Screen::calcSmooth0to1(m_closeTimer, msVal._00));

	if (m_closeTimer >= msVal._00) {
		ret = true;
	}

	return ret;
}

/*
 * --INFO--
 * Address:	8031E9A8
 * Size:	000084
 */
bool ObjAnaDemo::doUpdateFadeout()
{
	commonUpdate();
	return true;
}

ObjAnaDemo::StaticValues ObjAnaDemo::msVal;

} // namespace newScreen
} // namespace og
