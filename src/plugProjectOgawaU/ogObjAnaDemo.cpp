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

/**
 * @note Address: 0x8031CD80
 * @note Size: 0x9C
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

/**
 * @note Address: N/A
 * @note Size: 0x94
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

/**
 * @note Address: 0x8031CE1C
 * @note Size: 0xBC
 */
ObjAnaDemo::ObjAnaDemo(const char* name)
{
	mName       = name;
	mDisp       = nullptr;
	mAnaType    = ANADEMO_CaveEntry;
	mState      = ANADEMOSTATE_Disabled;
	mAnaTypeSub = ANADEMOSUB_Normal;

	mCurrMenuSel       = 0;
	mScreen            = nullptr;
	mMenuMgr           = nullptr;
	mAnimGroup         = nullptr;
	mUnusedObj         = nullptr;
	mMenuSelTitle      = nullptr;
	mMenuSelYes        = nullptr;
	mMenuSelNo         = nullptr;
	mUnused0           = 0.0f;
	mUnused1           = 0;
	mPaneError         = nullptr;
	mUnused2           = 0;
	mSwingMovePosition = 0.0f;
	mCloseTimer        = 0.0f;

	mTimer3 = 0.0f;
	mAlpha  = 255;
	mTimer4 = 0.0f;
	mTimer1 = 0.0f;
	mTimer2 = 0.0f;
}

/**
 * @note Address: 0x8031CED8
 * @note Size: 0xAC
 */
ObjAnaDemo::~ObjAnaDemo() { }

/**
 * @note Address: N/A
 * @note Size: 0xB8
 */
void ObjAnaDemo::setWindowMsg(u64 tagQ, u64 tagY, u64 tagN)
{
	mScreen->search('Tm00q')->setMsgID(tagQ);
	mScreen->search('Tm00y')->setMsgID(tagY);
	mScreen->search('Tm00n')->setMsgID(tagN);
}

/**
 * @note Address: 0x8031CF84
 * @note Size: 0x1120
 */
void ObjAnaDemo::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberAnaDemo* disp_main = static_cast<og::Screen::DispMemberAnaDemo*>(getDispMember());

	if (disp_main->isID(OWNER_OGA, MEMBER_ANA_DEMO)) {
		mDisp    = disp_main;
		mAnaType = ANADEMO_CaveEntry;

	} else if (disp_main->isID(OWNER_OGA, MEMBER_KANKETU_MENU)) {
		og::Screen::DispMemberKanketuMenu* disp_kan = static_cast<og::Screen::DispMemberKanketuMenu*>(disp_main);
		mDisp                                       = disp_kan;
		if (disp_kan->mIsChallenge) {
			mAnaType = ANADEMO_KantekuChallenge;
		} else {
			mAnaType = ANADEMO_Kanteku;
		}

		if (disp_kan->mCantProceed) {
			mAnaTypeSub = ANADEMOSUB_CantProceed;
		} else if (disp_kan->mPikiInDanger) {
			mAnaTypeSub = ANADEMOSUB_PikiInDanger;
		}

	} else if (disp_main->isID(OWNER_OGA, MEMBER_CAVE_MORE)) {
		og::Screen::DispMemberCaveMore* disp_more = static_cast<og::Screen::DispMemberCaveMore*>(disp_main);
		mDisp                                     = disp_more;
		mAnaType                                  = ANADEMO_CaveMore;

		if (disp_more->mCantProceed) {
			mAnaTypeSub = ANADEMOSUB_CantProceed;
		} else if (disp_more->mPikiInDanger) {
			mAnaTypeSub = ANADEMOSUB_PikiInDanger;
		}

	} else if (disp_main->isID(OWNER_OGA, MEMBER_DUMMY)) {
		mDisp = new og::Screen::DispMemberAnaDemo;

	} else {
		JUT_PANICLINE(431, "ERR! in ObjAnaDemo Create失敗！\n");
	}

	mScreen = new P2DScreen::Mgr_tuning;

	if (mAnaType == ANADEMO_CaveEntry) {
		mScreen->set("ana_demo.blo", 0x1040000, arc);

	} else if (mAnaTypeSub == ANADEMOSUB_CantProceed || mAnaTypeSub == ANADEMOSUB_PikiInDanger) {
		mScreen->set("warning_me_piki.blo", 0x1040000, arc);

		og::Screen::TagSearch(mScreen, 'Nmenu01')->hide();
		og::Screen::TagSearch(mScreen, 'Nmenu02')->hide();
		og::Screen::TagSearch(mScreen, 'Nerror')->hide();

	} else {
		mScreen->set("info_window.blo", 0x1040000, arc);
		og::Screen::TagSearch(mScreen, 'Nmenu01')->hide();
		og::Screen::TagSearch(mScreen, 'Nmenu02')->hide();
	}

	og::Screen::setAlphaScreen(mScreen);
	og::Screen::setFurikoScreen(mScreen);

	if (mAnaType != ANADEMO_CaveEntry) {
		if (mAnaTypeSub == ANADEMOSUB_CantProceed) {
			og::Screen::TagSearch(mScreen, 'Nmenu00')->hide();
			setWindowMsg('9999_00', '9999_00', '9999_00');

			if (mAnaType == ANADEMO_CaveMore) {
				mScreen->search('T_title1')->setMsgID('8600_00'); // "All Pikmin are buried, so you cannot proceed."
			} else {
				mScreen->search('T_title1')->setMsgID('8605_00'); // "All Pikmin are buried, so you cannot return to the surface."
			}

			og::Screen::TagSearch(mScreen, 'Nerror')->show();

		} else {
			switch (mAnaType) {
			case ANADEMO_KantekuChallenge:
				if (mAnaTypeSub == ANADEMOSUB_PikiInDanger) {
					setWindowMsg('8606_00', '8607_00',
					             '8608_00'); // "If you go above ground all Pikmin sprouts will be left behind!"
					                         // "Return to the Surface" "Go Help Them"
				} else {
					setWindowMsg('8383_00', '8384_00',
					             '8385_00'); // "Exit this Challenge Level?" "Exit the Level" "Continue Exploring"
				}
				break;

			case ANADEMO_Kanteku:
				if (mAnaTypeSub == ANADEMOSUB_PikiInDanger) {
					setWindowMsg('8606_00', '8607_00',
					             '8608_00'); // "If you go above ground, all Pikmin sprouts will be left behind!"
					                         // "Return to the Surface" "Go Help Them"
				} else {
					setWindowMsg('8364_00', '8365_00',
					             '8366_00'); // "Escape to the surface with your Pikmin?" "Yes" "No"
				}
				break;

			case ANADEMO_CaveMore:
				if (mAnaTypeSub == ANADEMOSUB_PikiInDanger) {
					setWindowMsg('8601_00', '8602_00',
					             '8603_00'); // "If you delve deeper, all of your Pikmin sprouts will be left behind!"
					                         // "Delve Deeper" "Go Help Them"
				} else {
					setWindowMsg('8367_00', '8368_00', '8369_00'); // "Delve deeper with your Pikmin?" "Yes" "No"
				}
				break;

			default:
				mScreen->search('Tm00y')->setMsgID('8368_00'); // "Yes"
				mScreen->search('Tm00n')->setMsgID('8369_00'); // "No"
				break;
			}
		}
	}

	og::Screen::setCallBackMessage(mScreen);

	if (mAnaType == ANADEMO_CaveEntry) {
		J2DPane* pane = mScreen->search('ana_name');
		u64 tag       = caveIDtoMsgID(mDisp->mCaveID);

		if (tag != 0) {
			pane->mMessageID = tag;
		} else {
			pane->mMessageID = CaveTitleMsg[0].bmg_tag;
		}
	}

	if (mAnaType == ANADEMO_CaveEntry) {
		J2DPane* hazardpane1 = mScreen->search('Picon00');
		J2DPane* hazardpane3 = mScreen->search('Picon01'); // yes this is swapped
		J2DPane* hazardpane2 = mScreen->search('Picon02'); // yes this is swapped
		J2DPane* hazardpane4 = mScreen->search('Picon03');
		u8 alpha1            = 32;
		u8 alpha2            = 32;
		u8 alpha3            = 32;
		u8 alpha4            = 32;
		bool isHazard1, isHazard2, isHazard3, isHazard4;
		caveIDtoATB(mDisp->mCaveID, &isHazard1, &isHazard2, &isHazard3, &isHazard4);

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

	if (mAnaType == ANADEMO_CaveEntry) {
		og::Screen::TagSearch(mScreen, 'h_title')->setMsgID('8361_00'); // "Enter this hole with your Pikmin squad?"
		mPaneError = og::Screen::TagSearch(mScreen, 'Nerror');
		mAlpha     = mPaneError->mAlpha;
		mPaneError->setAlpha(0);
	}

	if (mAnaType == ANADEMO_CaveEntry) {
		mMenuSelTitle = og::Screen::setMenuTitleScreen(arc, mScreen, 'h_title');
		mMenuSelYes   = og::Screen::setMenuScreen(arc, mScreen, 'h_00');
		mMenuSelNo    = og::Screen::setMenuScreen(arc, mScreen, 'h_01');

	} else if (mAnaTypeSub != ANADEMOSUB_CantProceed) {
		mMenuSelTitle = og::Screen::setMenuTitleScreen(arc, mScreen, 'Tm00q');
		mMenuSelYes   = og::Screen::setMenuScreen(arc, mScreen, 'Tm00y');
		mMenuSelNo    = og::Screen::setMenuScreen(arc, mScreen, 'Tm00n');
	}

	og::Screen::AnimText_Screen* anim = mMenuSelTitle;
	if (anim) {
		if (mDisp->mNoOpenMenu) {
			anim->stop();
			mMenuSelYes->stop();
			mMenuSelNo->stop();
		} else {
			anim->open(0.5f);
			mMenuSelYes->open(0.6f);
			mMenuSelNo->open(0.7f);
		}
	}

	mCurrMenuSel = 0;
	if (mAnaTypeSub == ANADEMOSUB_PikiInDanger) {
		mCurrMenuSel = 1;
	}

	if (mAnaTypeSub != ANADEMOSUB_CantProceed) {
		mMenuMgr = new og::Screen::MenuMgr;
		if (mAnaType == ANADEMO_CaveEntry) {
			mMenuMgr->init(mScreen, 2, 'nu_00', 'h_00', 's_00', 'il00', 'ir00');
		} else {
			mMenuMgr->init2takuTitle(mScreen, 'Nm00y', 'Tm00y', 'Pm00y_il', 'Pm00y_ir', 'Nm00n', 'Tm00n', 'Pm00n_il', 'Pm00n_ir');
		}

		mMenuMgr->initSelNum(mCurrMenuSel);
		setBlinkMenu();
	}

	if (mAnaType == ANADEMO_CaveEntry) {
		mAnimGroup = new og::Screen::AnimGroup(3);
		og::Screen::registAnimGroupScreen(mAnimGroup, arc, mScreen, "ana_demo.btk", 1.0f);
		og::Screen::registAnimGroupScreen(mAnimGroup, arc, mScreen, "ana_demo_02.btk", 1.0f);
		og::Screen::registAnimGroupScreen(mAnimGroup, arc, mScreen, "ana_demo_03.btk", 1.0f);
	}

	if (mAnaType == ANADEMO_CaveEntry) {
		og::Screen::DispMemberAnaDemo* disp;
		if ((int)mDisp->mCaveOtakaraNum >= 0 && (int)mDisp->mCaveOtakaraMax >= 0) {
			og::Screen::CallBack_CounterRV* counter1
			    = og::Screen::setCallBack_CounterRV(mScreen, 'item_01', &mDisp->mCaveOtakaraNum, 3, 0, 1, arc);
			og::Screen::CallBack_CounterRV* counter2
			    = og::Screen::setCallBack_CounterRV(mScreen, 'Titem01', &mDisp->mCaveOtakaraMax, 3, 0, 1, arc);
			og::Screen::CallBack_CounterRV* counter3 = og::Screen::setCallBack_CounterRV(mScreen, 'Ppiki01', &mDisp->mPikis, 3, 0, 1, arc);
			og::Screen::CallBack_CounterRV* counter4
			    = og::Screen::setCallBack_CounterRV(mScreen, 'Papiki01', &mDisp->mPikisField, 3, 0, 1, arc);

			counter1->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown0);
			counter2->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_UNKNOWN_2);
			counter3->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown0);
			counter4->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_UNKNOWN_2);

			disp = mDisp;
			if (disp->mPayedDebt || disp->mCaveOtakaraNum == disp->mCaveOtakaraMax) {
				counter2->show();
			} else {
				counter1->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown1);
				counter2->hide();
				counter1->getMotherPane()->move(msVal._04, 0.0f);
				mScreen->search('sura')->hide();
			}
		}
	}

	mState = ANADEMOSTATE_Init;
	ogSound->setOpenDoukutu();
}

/**
 * @note Address: 0x8031E0A4
 * @note Size: 0x94
 */
void ObjAnaDemo::setBlinkMenu()
{
	if (mMenuSelTitle) {
		switch (mCurrMenuSel) {
		case 0:
			mMenuSelYes->blink(0.6f, 0.0f);
			mMenuSelNo->blink(0.0f, 0.0f);
			break;
		case 1:
			mMenuSelYes->blink(0.0f, 0.0f);
			mMenuSelNo->blink(0.6f, 0.0f);
			break;
		}
	}
}

/**
 * @note Address: 0x8031E138
 * @note Size: 0x5D4
 */
bool ObjAnaDemo::doUpdate()
{
	bool ret = false;
	commonUpdate();
	Controller* pad = getGamePad();

	switch (mState) {
	case ANADEMOSTATE_Disabled:
		break;

	case ANADEMOSTATE_Init:
		mState  = ANADEMOSTATE_Enter;
		mTimer1 = msVal._08;
		mTimer2 = msVal._0C;
		break;

	case ANADEMOSTATE_Enter:
		if (mTimer2 > 0.0f) {
			mTimer2 -= sys->mDeltaTime;
			if (mTimer2 < 0.0f) {
				if (mAnaTypeSub == ANADEMOSUB_PikiInDanger) {
					ogSound->setWarning();
				} else if (mAnaTypeSub == ANADEMOSUB_CantProceed) {
					ogSound->setError();
				}
			}
		}

		if (mTimer1 > 0.0f) {
			mTimer1 -= sys->mDeltaTime;
			if (mTimer1 < 0.0f) {
				if (mMenuMgr)
					mMenuMgr->startCursor(0.0f);

				if (mAnaTypeSub == ANADEMOSUB_CantProceed) {
					mState = ANADEMOSTATE_ErrorWait;
				} else {
					mState = ANADEMOSTATE_IdleWait;
				}
			}
		}
		break;

	case ANADEMOSTATE_IdleWait:
		if (pad->isButtonDown(Controller::PRESS_UP)) {
			if (mCurrMenuSel > 0) {
				mCurrMenuSel--;
				if (mMenuMgr) {
					mMenuMgr->select(mCurrMenuSel);
				}
				if (mMenuSelTitle) {
					switch (mCurrMenuSel) {
					case 0:
						mMenuSelYes->blink(0.6f, 0.0f);
						mMenuSelNo->blink(0.0f, 0.0f);
						break;
					case 1:
						mMenuSelYes->blink(0.0f, 0.0f);
						mMenuSelNo->blink(0.6f, 0.0f);
						break;
					}
				}
			}

		} else if (pad->isButtonDown(Controller::PRESS_DOWN)) {
			if (mCurrMenuSel < 1) {
				mCurrMenuSel++;
				if (mMenuMgr) {
					mMenuMgr->select(mCurrMenuSel);
				}
				if (mMenuSelTitle) {
					switch (mCurrMenuSel) {
					case 0:
						mMenuSelYes->blink(0.6f, 0.0f);
						mMenuSelNo->blink(0.0f, 0.0f);
						break;
					case 1:
						mMenuSelYes->blink(0.0f, 0.0f);
						mMenuSelNo->blink(0.6f, 0.0f);
						break;
					}
				}
			}
		} else if (pad->isButtonDown(Controller::PRESS_A)) {
			if (mMenuMgr)
				mMenuMgr->killCursor();
			if (mCurrMenuSel == 0) {
				mDisp->mSelected = true;
				if (mMenuSelTitle) {
					mMenuSelYes->close();
					mMenuSelNo->close();
				}

				// no pikmin, cant enter cave
				if (mDisp->mPikis == 0) {
					if (mMenuMgr)
						mMenuMgr->killCursor();
					mState  = ANADEMOSTATE_ErrorTimed;
					mTimer4 = 0.5f;
					if (mMenuSelTitle)
						mMenuSelTitle->mMesgAlpha = 0.5f;
					ogSound->setError();
					mPaneError->setAlpha(0);
				} else {
					if (mAnaType == ANADEMO_Kanteku) {
						mState      = ANADEMOSTATE_Exit;
						mCloseTimer = 0.0f;
						ogSound->setDecide();
					} else {
						mUnused0 = 0.5f;
						ogSound->setDecide();
						mState      = ANADEMOSTATE_Exit;
						mCloseTimer = 0.0f;
					}
				}
			} else {
				mDisp->mSelected = false;
				mState           = ANADEMOSTATE_Exit;
				mCloseTimer      = 0.0f;
				ogSound->setDecide();
			}
		} else if (pad->isButtonDown(Controller::PRESS_B)) {
			if (mMenuMgr) {
				mMenuMgr->killCursor();
			}
			mDisp->mSelected = false;
			mState           = ANADEMOSTATE_Exit;
			mCloseTimer      = 0.0f;
			ogSound->setClose();
		}
		break;

	case ANADEMOSTATE_ErrorWait:
		bool anyButtonDown = false;
		u32 input          = pad->mButton.mButtonDown; // getButtonDown doesnt cooperate here
		if (input & Controller::PRESS_A || input & Controller::PRESS_B || input & Controller::PRESS_X || input & Controller::PRESS_Y
		    || input & Controller::PRESS_START) {
			anyButtonDown = true;
		}
		if (anyButtonDown) {
			mState           = ANADEMOSTATE_Exit;
			mCloseTimer      = 0.0f;
			mDisp->mSelected = false;
			ogSound->setClose();
		}
		break;

	case ANADEMOSTATE_ErrorTimed:
		if (mTimer3 >= 1.0f) {
			bool anyButtonDown = false;
			u32 input          = pad->mButton.mButtonDown;
			if (input & Controller::PRESS_A || input & Controller::PRESS_B || input & Controller::PRESS_X || input & Controller::PRESS_Y
			    || input & Controller::PRESS_START) {
				anyButtonDown = true;
			}
			if (anyButtonDown) {
				mState           = ANADEMOSTATE_Exit;
				mCloseTimer      = 0.0f;
				mDisp->mSelected = false;
				ogSound->setClose();
			}

		} else if (mTimer4 > 0.0f) {
			mTimer4 -= sys->mDeltaTime;

		} else {
			mPaneError->setAlpha(mAlpha * mTimer3);
			mTimer3 += sys->mDeltaTime * 30.0f * 0.1f;
			if (mTimer3 > 1.0f) {
				mTimer3 = 1.0f;
			}
		}
		break;

	case ANADEMOSTATE_Exit:
		mCloseTimer += sys->mDeltaTime;
		mSwingMovePosition = og::Screen::calcSmooth0to1(mCloseTimer, msVal.mMoveFinishRatio) * -800.0f;
		if (mCloseTimer >= msVal.mMoveFinishRatio) {
			ret                = true;
			mDisp->mExitStatus = og::Screen::MENUFINISH_CaveExit; // confirm menu
			mState             = ANADEMOSTATE_Disabled;
		}
		break;
	}

	return ret;
}

/**
 * @note Address: 0x8031E70C
 * @note Size: 0x80
 */
void ObjAnaDemo::commonUpdate()
{
	if (mMenuMgr) {
		mMenuMgr->update();
	}

	if (mAnimGroup) {
		mAnimGroup->update();
	}

	mScreen->setXY(mSwingMovePosition, 0.0f);
	mScreen->update();
}

/**
 * @note Address: 0x8031E78C
 * @note Size: 0x74
 */
void ObjAnaDemo::doDraw(Graphics& gfx)
{
	if (mState != 0) {
		J2DPerspGraph* graf         = &gfx.mPerspGraph;
		P2DScreen::Mgr_tuning* scrn = mScreen;
		if (scrn) {
			scrn->draw(gfx, *graf);
		}
		if (mMenuMgr) {
			mMenuMgr->draw(graf);
		}
	}
}

/**
 * @note Address: 0x8031E800
 * @note Size: 0x18
 */
bool ObjAnaDemo::doStart(::Screen::StartSceneArg const*)
{
	mCloseTimer        = 0.0f;
	mSwingMovePosition = 800.0f;
	return true;
}

/**
 * @note Address: 0x8031E818
 * @note Size: 0x8
 */
bool ObjAnaDemo::doEnd(::Screen::EndSceneArg const*) { return true; }

/**
 * @note Address: 0x8031E820
 * @note Size: 0x4
 */
void ObjAnaDemo::doUpdateFadeinFinish() { }

/**
 * @note Address: 0x8031E824
 * @note Size: 0xC
 */
void ObjAnaDemo::doUpdateFinish() { mCloseTimer = 0.0f; }

/**
 * @note Address: 0x8031E830
 * @note Size: 0x94
 */
void ObjAnaDemo::doUpdateFadeoutFinish()
{
	::Screen::SceneBase* scene = getOwner();
	if (mDisp->mSelected) {
		scene->endScene(nullptr);
	} else {
		if (scene->setBackupScene() && !scene->startScene(nullptr)) {
			JUT_PANICLINE(994, "だめです\n");
		}
	}
}

/**
 * @note Address: 0x8031E8C4
 * @note Size: 0xE4
 */
bool ObjAnaDemo::doUpdateFadein()
{
	bool ret = false;
	commonUpdate();
	mCloseTimer += sys->mDeltaTime;

	mSwingMovePosition = 800.0f * (1.0f - og::Screen::calcSmooth0to1(mCloseTimer, msVal.mMoveFinishRatio));

	if (mCloseTimer >= msVal.mMoveFinishRatio) {
		ret = true;
	}

	return ret;
}

/**
 * @note Address: 0x8031E9A8
 * @note Size: 0x84
 */
bool ObjAnaDemo::doUpdateFadeout()
{
	commonUpdate();
	return true;
}

ObjAnaDemo::StaticValues ObjAnaDemo::msVal;

} // namespace newScreen
} // namespace og
