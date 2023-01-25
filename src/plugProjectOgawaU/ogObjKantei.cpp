#include "og\newScreen\KanteiDemo.h"
#include "og/Screen/ogScreen.h"
#include "Morimura/mrUtil.h"
#include "og/Screen/StickAnimMgr.h"
#include "efx2d/Arg.h"
#include "og/Sound.h"
#include "System.h"
#include "Game/GameConfig.h"
#include "P2JME/P2JME.h"
#include "TParticle2dMgr.h"
#include "PSSystem/PSGame.h"
#include "PSM/Scene.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80318244
 * Size:	000120
 */
ObjKantei::ObjKantei(char const* name)
{
	m_fadeLevel  = 0.0f;
	m_fadeLevel2 = 0.0f;
	m_name       = name;
	m_disp       = nullptr;
	m_state      = Kantei_Begin;

	m_screenOkWindow          = nullptr;
	m_screenBG                = nullptr;
	m_screenName              = nullptr;
	m_screenButton            = nullptr;
	m_tControl                = nullptr;
	m_paneSetP                = nullptr;
	m_drawBox.p1.x            = 0.0f;
	m_drawBox.p1.y            = 0.0f;
	m_drawBox.p2.x            = 0.0f;
	m_drawBox.p2.y            = 0.0f;
	m_doDrawBox               = true;
	m_shipMessageBoxID        = 0;
	m_inTextBox               = false;
	m_paneOk1                 = nullptr;
	m_startTimer              = 0.0f;
	m_pokoCounterCurr         = nullptr;
	m_pokoCounterTotal        = nullptr;
	m_currItemValue           = 0;
	m_totalPokos              = 0;
	m_totalPokosCave          = 0;
	m_stickAnim               = nullptr;
	_B0                       = 0;
	m_efx                     = nullptr;
	m_paneName                = nullptr;
	m_scaleMgr                = nullptr;
	m_nameScale               = 0.0f;
	m_doScaleName             = false;
	m_nameTimer               = msVal.m_nameTimerDefault;
	m_treasureNameMesgID      = 0;
	m_isPelletNameNotAppeared = true;
	m_nameWaitTimer           = 0.0f;
	m_nameState               = KanteiName_StartDelay;
	m_idleStateTimer          = msVal.m_idleStateTimerDefault;
	m_doShipSpeech            = false;
	m_commonTimer             = 0.1f;
	m_shipSpeechTimer         = 0.0f;
	m_playExitSE              = false;
}

/*
 * --INFO--
 * Address:	80318364
 * Size:	0000AC
 */
ObjKantei::~ObjKantei() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void ObjKantei::startItemName(u64)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80318410
 * Size:	0007CC
 */
void ObjKantei::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberKantei* disp = static_cast<og::Screen::DispMemberKantei*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_KANTEI)) {
		m_disp = disp;
	} else {
		if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
			m_disp = new og::Screen::DispMemberKantei;
		} else {
			JUT_PANICLINE(258, "ERR! in ObjKantei CreateŽ¸”sI\n");
		}
	}

	m_currItemValue          = m_disp->m_pelletValue;
	m_totalPokos             = m_disp->m_totalPokos;
	m_totalPokosCave         = m_disp->m_totalPokosCave;
	m_totalPokosOld          = m_totalPokos - m_currItemValue;
	m_totalPokosCaveOld      = m_totalPokosCave - m_currItemValue;
	m_disp->m_totalPokos     = m_totalPokosOld;
	m_disp->m_totalPokosCave = m_totalPokosCaveOld;
	u32 type                 = m_disp->m_kanteiType;

	m_screenName = new P2DScreen::Mgr_tuning;
	m_screenName->set("item_name.blo", 0x1040000, arc);
	m_screenButton = new P2DScreen::Mgr_tuning;
	m_screenButton->set("otakara_kantei_button.blo", 0x1040000, arc);

	switch (type) {
	case KanteiType_PreDebt:
		m_screenOkWindow = new P2DScreen::Mgr_tuning;
		m_screenOkWindow->set("ok_message_window.blo", 0x1040000, arc);
		m_pokoCounterTotal = og::Screen::setCallBack_CounterRV(m_screenOkWindow, 'PSsha1', &m_disp->m_totalPokos, 9, 0, 1, arc);
		break;
	case KanteiType_PostDebt:
		m_screenOkWindow = new P2DScreen::Mgr_tuning;
		m_screenOkWindow->set("ok_message_window2.blo", 0x1040000, arc);
		m_pokoCounterTotal = og::Screen::setCallBack_CounterRV(m_screenOkWindow, 'PSsha1', &m_disp->m_totalPokos, 9, 0, 1, arc);
		break;
	default:
		m_screenOkWindow = nullptr;
		JUT_PANICLINE(305, "ERR! UNKNOWN KANTEI_TYPE!!");
	}

	if (m_disp->m_inCave) {
		J2DPane* pane = m_screenOkWindow->search('Tzukan');
		pane->setMsgID('8551_00'); // "You can't log this treasure until you reach the surface."
	} else {
		J2DPane* pane = m_screenOkWindow->search('Tzukan');
		pane->setMsgID('8550_00'); // "It's been added to your Treasure Log!"
	}

	int offs                     = m_disp->m_pelletOffset;
	u64 idtags[3]                = { '0101_01', '0110_01', '0200_01' };
	Morimura::TOffsetMsgSet* msg = new Morimura::TOffsetMsgSet(idtags, '0100_01', 3);
	m_treasureNameMesgID         = msg->getMsgID(offs);

	m_paneName = m_screenName->search('ItemName');
	m_paneName->add(msVal.m_namePaneAdd.x, msVal.m_namePaneAdd.y);
	m_paneName->setBasePosition(J2DPOS_Center);
	m_paneName->setMsgID('8557_00'); // "Name"
	m_nameScale = 0.0f;
	m_paneName->updateScale(m_nameScale);

	m_scaleMgr = new og::Screen::ScaleMgr;

	m_pokoCounterCurr = og::Screen::setCallBack_CounterSlot(m_screenOkWindow, 'PSota1', &m_disp->m_pelletValue, 4, true, true, arc);
	m_pokoCounterCurr->hide();
	m_pokoCounterCurr->setPuyoParam(msVal.m_pokoPuyo1, msVal.m_pokoPuyo2, msVal.m_pokoPuyo3);
	m_pokoCounterCurr->_C8 = PSSE_SY_COIN_COUNT;

	m_screenBG = new P2DScreen::Mgr_tuning;
	m_screenBG->set("ok_bg_normal.blo", 0x1040000, arc);

	og::Screen::setAlphaScreen(m_screenOkWindow);
	og::Screen::setAlphaScreen(m_screenBG);
	og::Screen::setAlphaScreen(m_screenName);
	og::Screen::setAlphaScreen(m_screenButton);

	m_paneOk1 = m_screenOkWindow->search('NMsha');
	m_paneOk2 = m_screenOkWindow->search('NMzukan');
	m_paneOk2->hide();
	J2DPane* pane = m_screenBG->search('item');
	if (pane)
		pane->hide();
	m_paneSetP = m_screenBG->search('Notsetp');

	og::Screen::setCallBackMessage(m_screenOkWindow);
	og::Screen::setCallBackMessage(m_screenName);
	og::Screen::setCallBackMessage(m_screenButton);

	m_tControl = new P2JME::Movie::TControl;
	m_tControl->init();
	m_tControl->m_flags &= 0xfffffffe;
	m_inTextBox = false;

	og::Screen::CallBack_Picture* pic = og::Screen::setCallBack_3DStick(arc, m_screenButton, 'ota3dl');
	m_stickAnim                       = new og::Screen::StickAnimMgr(pic);
	m_stickAnim->stickUpDown();
	pane = m_screenButton->search('Ncstick');
	pane->hide();

	m_efx = nullptr;
	if (m_disp->m_pelletMessageID) {
		efx2d::T2DOtakantei* efx = new efx2d::T2DOtakantei;
		m_efx                    = efx;
		Vector2f argVec(304.0f, 194.0f);
		efx2d::Arg arg = argVec;
		m_efx->setGroup(2);
		m_efx->create(&arg);
	}

	commonUpdate();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void ObjKantei::startKanteiVoice(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void ObjKantei::updateKanteiVoice()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80318BDC
 * Size:	000258
 */
void ObjKantei::scaleAnimItemName()
{
	m_paneName->updateScale(m_scaleMgr->calc() * m_nameScale);

	if (m_doScaleName) {
		switch (m_nameState) {
		case KanteiName_StartDelay:
			if (m_nameTimer > 0.0f) {
				m_nameTimer -= sys->m_deltaTime;
				if (m_nameTimer < 0.0f) {
					m_nameState = KanteiName_Growing;
				}
			}
			m_nameScale = 0.0f;
			break;

		case KanteiName_Growing:
			m_nameScale += msVal.m_nameScaleGrowFactor;
			if (m_nameScale >= 1.0f) {
				m_nameScale = 1.0f;
				m_scaleMgr->up(msVal.m_counterGrow1, msVal.m_counterGrow2, msVal.m_counterGrow3, 0.0f);
				if (!m_isPelletNameNotAppeared) {
					m_doShipSpeech       = true;
					m_commonTimer        = 0.1f;
					m_shipSpeechTimer    = 10;
					PSGame::SeMgr* seMgr = PSSystem::getSeMgrInstance();
					seMgr->playMessageVoice(PSSE_MP_VOX_HEAD_A_FLAT, false);
				}
				m_nameState     = KanteiName_VisibleDelay;
				m_nameWaitTimer = msVal.m_waitTimerReset;
			}
			break;

		case KanteiName_VisibleDelay:
			if (m_nameWaitTimer > 0.0f) {
				m_nameWaitTimer -= sys->m_deltaTime;
				if (m_isPelletNameNotAppeared && m_nameWaitTimer < 0.0f) {
					m_nameState = KanteiName_Shrinking;
				}
			}
			break;

		case KanteiName_Shrinking:
			if (m_nameScale > 0.0f) {
				m_nameScale -= msVal.m_nameScaleGrowFactor;
				if (m_nameScale < 0.0f) {
					m_nameScale = 0.0f;
					if (m_isPelletNameNotAppeared) {
						m_isPelletNameNotAppeared = false;
						m_paneName->m_messageID   = m_treasureNameMesgID;
						m_nameScale               = 0.0f;
						m_paneName->updateScale(m_nameScale);
						m_nameState = KanteiName_Growing; // reset to growing state but now with the treasures name
					}
				}
			}
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	80318E34
 * Size:	000154
 */
void ObjKantei::commonUpdate()
{
	scaleAnimItemName();
	if (m_doShipSpeech) {
		if (m_commonTimer > 0.0f) {
			m_commonTimer -= sys->m_deltaTime;
			if (m_commonTimer <= 0.0f) {
				m_commonTimer = 0.1f;
				m_shipSpeechTimer--;
				if (m_shipSpeechTimer <= 0) {
					m_doShipSpeech       = false;
					PSGame::SeMgr* seMgr = PSSystem::getSeMgrInstance();
					seMgr->playMessageVoice(PSSE_MP_VOX_FOOT_A_UP, false);
				} else {
					PSGame::SeMgr* seMgr = PSSystem::getSeMgrInstance();
					seMgr->playMessageVoice(PSSE_MP_VOX_BODY_MN, false);
				}
			}
		}
	}
	m_screenBG->update();
	m_screenOkWindow->update();
	m_screenName->update();
	m_screenButton->update();
}

/*
 * --INFO--
 * Address:	80318F88
 * Size:	00040C
 */
bool ObjKantei::doUpdate()
{
	Controller* pad = getGamePad();
	switch (m_state) {
	case Kantei_Begin:
		m_state      = Kantei_PokoAppearDelay;
		m_startTimer = 0.0f;
		break;

	case Kantei_PokoAppearDelay:
		m_startTimer += sys->m_deltaTime;
		if (m_startTimer >= msVal.m_nameAppearDelay || pad->m_padButton.m_buttonDown & Controller::PRESS_A
		    || (m_disp->m_secondaryController && m_disp->m_secondaryController->m_padButton.m_buttonDown & Controller::PRESS_A)) {
			m_state               = Kantei_SetPokoValue;
			m_disp->m_pelletValue = 0;
			m_pokoCounterCurr->startSlot(msVal.m_pokoSlotFactor);
			m_pokoCounterCurr->show();
		}
		break;

	case Kantei_SetPokoValue:
		m_state               = Kantei_WaitAppearPokos;
		m_startTimer          = 0.0f;
		m_disp->m_pelletValue = m_currItemValue;
		break;

	case Kantei_WaitAppearPokos:
		m_startTimer += sys->m_deltaTime;
		if (m_startTimer >= msVal.m_priceAppearDelay) {
			m_state                  = Kantei_AppearTotalPokos;
			m_startTimer             = 0.0f;
			m_disp->m_totalPokos     = 0;
			m_disp->m_totalPokosCave = 0;
			m_pokoCounterTotal->setPuyoAnim(true);
		}
		break;

	case Kantei_AppearTotalPokos:
		m_state                  = Kantei_Idle;
		m_disp->m_totalPokos     = m_totalPokos;
		m_disp->m_totalPokosCave = m_totalPokosCave;
		ogSound->setPlusTotalPoko();
		m_doScaleName = true;
		break;

	case Kantei_Idle:
		if (m_idleStateTimer > 0.0f) {
			m_idleStateTimer -= sys->m_deltaTime;
		} else {
			if (pad && pad->m_padButton.m_buttonDown & Controller::PRESS_A
			    || (m_disp->m_secondaryController && m_disp->m_secondaryController->m_padButton.m_buttonDown & Controller::PRESS_A)) {
				m_shipMessageBoxID = m_disp->m_pelletMessageID;
				// if the tagID exists, open ship message box, unless in E3 mode
				if (m_shipMessageBoxID != 0 && !Game::gGameConfig.m_parms.m_E3version.m_data) {
					u32 tagid  = 0;
					u32 tagid2 = 0;
					P2JME::convertU64ToMessageID(m_shipMessageBoxID, &tagid, &tagid2);
					m_tControl->setMessageID(tagid, tagid2);
					m_inTextBox = true;
					m_state     = Kantei_MessageBox;

				} else {
					finishKantei();
				}
			}
		}
		break;

	case Kantei_MessageBox:
		m_tControl->update(pad, m_disp->m_secondaryController);
		if (!m_tControl->m_finished) {
			finishKantei();
		}

	default:
		break;
	}

	commonUpdate();
	return false;
}

/*
 * --INFO--
 * Address:	80319394
 * Size:	000040
 */
void ObjKantei::finishKantei()
{
	m_disp->m_isDone = true;
	if (!m_playExitSE) {
		m_playExitSE = true;
		ogSound->setKanteiExit();
	}
}

/*
 * --INFO--
 * Address:	803193D4
 * Size:	000290
 */
void ObjKantei::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.m_perspGraph;

	Graphics(gfx2);
	u8 alpha = m_fadeLevel2 * 255.0f;
	m_screenBG->setAlpha(alpha);
	m_screenBG->draw(gfx2, *graf);

	if (m_efx) {
		gfx.m_perspGraph.setPort();
		particle2dMgr->draw(2, 0);
	}

	if (m_state != Kantei_MessageBox) {
		alpha = m_fadeLevel2 * 255.0f;
		m_screenOkWindow->setAlpha(alpha);
		m_screenOkWindow->draw(gfx2, *graf);
		m_screenButton->setXY(0.0f, msVal.m_screenMoveStart);
		alpha = m_fadeLevel2 * 255.0f;
		m_screenButton->setAlpha(alpha);
		m_screenButton->draw(gfx2, *graf);
	}

	if (m_doDrawBox && m_disp->m_delegate) {
		J2DPane* pane = m_paneSetP;
		f32 x1, y1, x2, y2;
		y2             = pane->m_globalBounds.f.y;
		x2             = pane->m_globalBounds.f.x;
		y1             = pane->m_globalBounds.i.y;
		x1             = pane->m_globalBounds.i.x;
		m_drawBox.p1.x = x1;
		m_drawBox.p1.y = y1;
		m_drawBox.p2.x = x2;
		m_drawBox.p2.y = y2;
		m_disp->m_delegate->invoke(m_drawBox);
		m_doDrawBox = 0;
	}

	alpha = m_fadeLevel2 * 255.0f;
	m_screenName->setAlpha(alpha);
	m_screenName->draw(gfx2, *graf);
}

/*
 * --INFO--
 * Address:	80319664
 * Size:	00003C
 */
void ObjKantei::doDrawMsg(Graphics& gfx)
{
	if (m_state == Kantei_MessageBox) {
		m_tControl->draw(gfx);
	}
}

/*
 * --INFO--
 * Address:	803196A0
 * Size:	00010C
 */
bool ObjKantei::doStart(::Screen::StartSceneArg const*)
{
	m_fadeLevel  = 0.0f;
	m_fadeLevel2 = 0.0f;
	if (m_disp->m_doPlayBGM) {
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::checkSceneMgr(mgr);
		PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
		PSSystem::checkChildScene(scene)->startMainSeq();
	}
	return true;
}

/*
 * --INFO--
 * Address:	803197AC
 * Size:	000010
 */
bool ObjKantei::doEnd(::Screen::EndSceneArg const*)
{
	m_fadeLevel = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	803197BC
 * Size:	000004
 */
void ObjKantei::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	803197C0
 * Size:	000040
 */
void ObjKantei::doUpdateFinish()
{
	m_fadeLevel = 0.0f;
	if (m_efx) {
		m_efx->fade();
	}
}

/*
 * --INFO--
 * Address:	80319800
 * Size:	000004
 */
void ObjKantei::doUpdateFadeoutFinish() { }

/*
 * --INFO--
 * Address:	80319804
 * Size:	0001A4
 */
bool ObjKantei::doUpdateFadein()
{
	bool ret = false;
	m_fadeLevel += sys->m_deltaTime;
	if (m_fadeLevel > 0.3f) {
		m_fadeLevel = 0.3f;
		ret         = true;
	}

	m_fadeLevel2 = m_fadeLevel / 0.3f;
	commonUpdate();
	return ret;
}

/*
 * --INFO--
 * Address:	803199A8
 * Size:	0001AC
 */
bool ObjKantei::doUpdateFadeout()
{
	bool ret = false;
	m_fadeLevel += sys->m_deltaTime;
	if (m_fadeLevel > 0.2f) {
		m_fadeLevel = 0.2f;
		ret         = true;
	}
	m_fadeLevel2 = 1.0f - (m_fadeLevel / 0.2f);
	commonUpdate();
	return ret;
}

ObjKantei::StaticValues ObjKantei::msVal;

} // namespace newScreen
} // namespace og
