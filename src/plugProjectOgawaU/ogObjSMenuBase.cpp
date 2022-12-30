#include "og/newScreen/SMenu.h"
#include "og/Screen/ArrowAlphaBlink.h"
#include "og/Screen/ogScreen.h"
#include "og/Sound.h"
#include "Controller.h"
#include "System.h"
#include "trig.h"

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
 * Address:	80316210
 * Size:	0000EC
 */
ObjSMenuBase::ObjSMenuBase()
{
	m_movePos         = 0.0f;
	m_fadeLevel       = 0.0f;
	m_state           = MENUSTATE_Default;
	m_exiting         = false;
	m_angle           = 0.0f;
	m_isDay1          = false;
	m_cancelToState   = MENUCLOSE_None;
	m_enableYaji      = false;
	m_alpha           = 0;
	_88               = 0.0f;
	m_buttonStates[1] = Controller::PRESS_R;
	m_buttonStates[0] = Controller::PRESS_L;

	m_panePeffect  = nullptr;
	m_panePeffect1 = nullptr;
	m_panePeffect2 = nullptr;
	m_screenLR     = nullptr;

	m_Nyaji_l    = nullptr;
	m_Nyaji_r    = nullptr;
	m_Tyaji_l    = nullptr;
	m_Tyaji_r    = nullptr;
	m_screenMain = nullptr;
	_A4          = 1.0f;
	m_paneNsize  = nullptr;
	m_arrowBlink = new og::Screen::ArrowAlphaBlink;
}

/*
 * --INFO--
 * Address:	803162FC
 * Size:	00003C
 */
void ObjSMenuBase::setFinishState(long id)
{
	SceneSMenuBase* scene = static_cast<SceneSMenuBase*>(getOwner());
	scene->m_finishState  = id;
}

/*
 * --INFO--
 * Address:	80316338
 * Size:	000040
 */
void ObjSMenuBase::setSMenuScale(f32 x, f32 y)
{
	if (m_paneNsize)
		m_paneNsize->updateScale(x, y);
}

/*
 * --INFO--
 * Address:	80316378
 * Size:	0001C4
 */
void ObjSMenuBase::doCreateAfter(JKRArchive* arc, P2DScreen::Mgr* scrn)
{
	m_screenMain   = scrn;
	m_panePeffect1 = static_cast<J2DPictureEx*>(m_screenMain->search('Peffect1'));
	m_panePeffect2 = static_cast<J2DPictureEx*>(m_screenMain->search('Peffect2'));
	m_panePeffect  = static_cast<J2DPictureEx*>(og::Screen::TagSearch(m_screenMain, 'Peffect'));
	og::Screen::setAlphaScreen(m_screenMain);
	m_paneNsize = m_screenMain->search('Nsize');
	og::Screen::setCallBackMessage(m_screenMain);
	og::Screen::setFurikoScreen(m_screenMain);
	m_screenLR = new P2DScreen::Mgr_tuning;
	m_screenLR->set("s_menu_yajirushi_LR.blo", 0x1040000, arc);
	og::Screen::setAlphaScreen(m_screenLR);

	m_Nyaji_l    = og::Screen::TagSearch(m_screenLR, 'Nyaji_l');
	m_yajiLpos.x = m_Nyaji_l->m_offset.x;
	m_yajiLpos.y = m_Nyaji_l->m_offset.y;
	m_Nyaji_r    = og::Screen::TagSearch(m_screenLR, 'Nyaji_r');
	m_yajiRpos.x = m_Nyaji_r->m_offset.x;
	m_yajiRpos.y = m_Nyaji_r->m_offset.y;

	m_Tyaji_l = static_cast<J2DTextBoxEx*>(og::Screen::TagSearch(m_screenLR, 'Tyaji_l'));
	m_Tyaji_r = static_cast<J2DTextBoxEx*>(og::Screen::TagSearch(m_screenLR, 'Tyaji_r'));
	og::Screen::setCallBackMessage(m_screenLR);
}

/*
 * --INFO--
 * Address:	8031653C
 * Size:	000020
 */
void ObjSMenuBase::commonUpdateBase() { updateYaji(); }

/*
 * --INFO--
 * Address:	8031655C
 * Size:	00012C
 */
bool ObjSMenuBase::doUpdate()
{
	bool ret = false;
	if (m_exiting) {
		if (m_cancelToState == MENUCLOSE_R) {
			ret = true;
		} else if (m_cancelToState == MENUCLOSE_L) {
			ret = true;
		} else {
			JUT_PANICLINE(301, "Cancel ERR!\n");
		}

	} else {
		SceneSMenuBase* scene = static_cast<SceneSMenuBase*>(getOwner());
		if (scene->getGamePad()->m_padButton.m_buttonDown & getButtonState(1)) {
			ret             = true;
			m_cancelToState = MENUCLOSE_R;
		} else if (scene->getGamePad()->m_padButton.m_buttonDown & getButtonState(0)) {
			ret             = true;
			m_cancelToState = MENUCLOSE_L;
		} else if (scene->getGamePad()->m_padButton.m_buttonDown & (Controller::PRESS_START | Controller::PRESS_B)) {
			m_cancelToState = MENUCLOSE_Finish;
			doUpdateCancelAction();
			ret = true;
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80316688
 * Size:	0000D0
 */
void ObjSMenuBase::doUpdateFinish()
{
	stopYaji();
	m_fadeLevel = 0.0f;
	switch (m_cancelToState) {
	case MENUCLOSE_Finish:
		close_L();
		return;

	case MENUCLOSE_R:
		out_L();
		return;

	case MENUCLOSE_L:
		out_R();
		return;

	case MENUCLOSE_None:
		out_L();
		return;

	default:
		JUT_PANICLINE(348, "updateFinish ERR!\n");
	}
}

/*
 * --INFO--
 * Address:	80316758
 * Size:	000074
 */
void ObjSMenuBase::startBackupScene()
{
	SceneSMenuBase* scene = static_cast<SceneSMenuBase*>(getOwner());
	if (scene->setBackupScene() && !scene->startScene(nullptr)) {
		JUT_PANICLINE(366, "‚¾‚ß‚Å‚·\n");
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void ObjSMenuBase::jump_LR(::Screen::SetSceneArg& arg, bool flag)
{
	SceneSMenuBase* scene = static_cast<SceneSMenuBase*>(getOwner());
	arg._09               = false;
	if (scene->setScene(arg)) {
		StartSceneArgSMenu sarg;
		sarg.m_flag      = true;
		sarg.m_sceneType = arg.getSceneType();
		sarg.m_flag      = flag;
		if (!scene->startScene(&sarg)) {
			JUT_PANICLINE(394, "‚¾‚ß‚Å‚·\n");
		}
	}
}

/*
 * --INFO--
 * Address:	803167CC
 * Size:	00002C
 */
void ObjSMenuBase::close_L()
{
	m_state = MENUSTATE_CloseL;
	ogSound->setClose();
}

/*
 * --INFO--
 * Address:	803167F8
 * Size:	0000E4
 */
void ObjSMenuBase::jump_L(::Screen::SetSceneArg& arg) { jump_LR(arg, false); }

/*
 * --INFO--
 * Address:	803168DC
 * Size:	0000E4
 */
void ObjSMenuBase::jump_R(::Screen::SetSceneArg& arg) { jump_LR(arg, true); }

/*
 * --INFO--
 * Address:	803169C0
 * Size:	000150
 */
bool ObjSMenuBase::start_LR(::Screen::StartSceneArg const* arg)
{
	m_fadeLevel = 0.0f;
	if (arg) {
		if (arg->getSceneType() == SCENE_PAUSE_MENU_MAP || arg->getSceneType() == SCENE_PAUSE_MENU_ITEMS
		    || arg->getSceneType() == SCENE_PAUSE_MENU_CONTROLS || arg->getSceneType() == SCENE_PAUSE_MENU
		    || arg->getSceneType() == SCENE_PAUSE_MENU_DOUKUTU || arg->getSceneType() == SCENE_PAUSE_MENU_VS) {

			StartSceneArgSMenu* menuArg = static_cast<StartSceneArgSMenu*>((::Screen::StartSceneArg*)(arg));
			if (menuArg->m_flag) {
				m_movePos = 800.0f;
				in_L();

			} else {
				m_movePos = -800.0f;
				in_R();
			}
		}

	} else {
		m_movePos = 800.0f;
		in_L();
	}

	return true;
}

/*
 * --INFO--
 * Address:	80316B10
 * Size:	000068
 */
void ObjSMenuBase::setYajiName(u64 tag1, u64 tag2, u64 tag3)
{
	if (m_Tyaji_l && m_Tyaji_r) {
		m_Tyaji_l->setMsgID(tag1);
		m_Tyaji_r->setMsgID(tag2);
	} else {
		JUT_PANICLINE(481, "setYajiName ERR! \n");
	}
}

/*
 * --INFO--
 * Address:	80316B78
 * Size:	000004
 */
void ObjSMenuBase::loop() { }

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void ObjSMenuBase::startYaji() { m_enableYaji = true; }

/*
 * --INFO--
 * Address:	80316B7C
 * Size:	00000C
 */
void ObjSMenuBase::stopYaji() { m_enableYaji = false; }

/*
 * --INFO--
 * Address:	80316B88
 * Size:	000304
 */
void ObjSMenuBase::updateYaji()
{
	f32 newalpha = 0.0f;
	f32 newxpos  = 0.0f;

	if (msBaseVal.m_updateYaji) {
		static f32 angle;
		static s8 init;

		if (!init) {
			angle = 0.0f;
			init  = true;
		}
		angle += msBaseVal._10;

		if (angle > TAU) {
			angle -= TAU;
		}
		newxpos = msBaseVal._0C * pikmin2_sinf(angle);

		f32 temp = angle - HALF_PI;
		if (temp > 0.0f && temp < PI) {
			newalpha = 1.0f;
			if (temp < QUARTER_PI) {
				newalpha = temp / QUARTER_PI;
			} else if (temp > 2.3561945f) {
				newalpha = (PI - temp) / 0.78539824f;
			}
		}
	}

	m_Nyaji_l->setOffset(m_yajiLpos.x + newxpos, m_yajiLpos.y);
	m_Nyaji_r->setOffset(m_yajiRpos.x - newxpos, m_yajiRpos.y);

	if (m_enableYaji) {
		u8 alpha = m_alpha;
		if (alpha < 255) {
			int alpha2 = (255 - alpha) / 7;
			int alpha3 = alpha2 + alpha;
			alpha3++;
			m_alpha = alpha3;
		}
	} else {
		u8 alpha = m_alpha;
		if (alpha > 0) {
			m_alpha = alpha - (alpha / 2 + 1);
		}
	}

	u8 newAlphaVal;
	if (msBaseVal.m_updateYaji) {
		newAlphaVal = (f32)m_alpha * newalpha;
	} else {
		m_arrowBlink->setSpeed(msBaseVal._10);
		newalpha    = m_arrowBlink->calc();
		newAlphaVal = (f32)m_alpha * newalpha;
	}

	m_Nyaji_l->setAlpha(newAlphaVal);
	m_Nyaji_r->setAlpha(newAlphaVal);

	m_screenLR->setAlpha(m_alpha);
	m_screenLR->update();
}

/*
 * --INFO--
 * Address:	80316E8C
 * Size:	000034
 */
void ObjSMenuBase::drawYaji(Graphics& gfx) { m_screenLR->draw(gfx, gfx.m_perspGraph); }

/*
 * --INFO--
 * Address:	80316EC0
 * Size:	000170
 */
bool ObjSMenuBase::updateFadeIn()
{
	bool ret        = false;
	Controller* pad = getGamePad();
	switch (m_state) {
	case MENUSTATE_OpenL:
		m_fadeLevel += sys->m_deltaTime;
		if (m_fadeLevel > msBaseVal._08) {
			ret = true;
		} else {
			if (pad->m_padButton.m_buttonDown & m_buttonStates[1]) {
				m_cancelToState = MENUCLOSE_R;
				m_exiting       = true;
			}
		}
		f32 calc2 = (1.0f - og::Screen::calcSmooth0to1(m_fadeLevel, msBaseVal._08));
		m_movePos = 800.0f * calc2;
		break;

	case MENUSTATE_OpenR:
		m_fadeLevel += sys->m_deltaTime;
		if (m_fadeLevel > msBaseVal._08) {
			ret = true;
		} else {
			if (pad->m_padButton.m_buttonDown & m_buttonStates[0]) {
				m_cancelToState = MENUCLOSE_L;
				m_exiting       = true;
			}
		}
		f32 calc  = (1.0f - og::Screen::calcSmooth0to1(m_fadeLevel, msBaseVal._08));
		m_movePos = -800.0f * calc;
		break;

	case MENUSTATE_Default:
		break;

	default:
		JUT_PANICLINE(621, "FadeIn ERR!\n");
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80317030
 * Size:	0000A8
 */
bool ObjSMenuBase::doUpdateFadein()
{
	commonUpdate();
	bool ret = updateFadeIn();
	if (!ret && m_exiting) {
		if (m_state == MENUSTATE_OpenL) {
			if (m_movePos <= 0.0f) {
				return true;
			}
		} else if (m_state == MENUSTATE_OpenR && m_movePos >= 0.0f) {
			return true;
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803170D8
 * Size:	000054
 */
void ObjSMenuBase::doUpdateFadeinFinish()
{
	if (!m_exiting) {
		m_enableYaji = true;
		wait();
	}
	m_fadeLevel = 0.0f;
}

/*
 * --INFO--
 * Address:	8031712C
 * Size:	000104
 */
bool ObjSMenuBase::updateFadeOut()
{
	bool ret = false;
	switch (m_state) {
	case MENUSTATE_CloseL:
		m_fadeLevel += sys->m_deltaTime;
		if (m_fadeLevel > msBaseVal._08) {
			ret = true;
		}
		f32 calc  = og::Screen::calcSmooth0to1(m_fadeLevel, msBaseVal._08);
		m_movePos = -800.0f * calc;
		break;
	case MENUSTATE_CloseR:
		m_fadeLevel += sys->m_deltaTime;
		if (m_fadeLevel > msBaseVal._08) {
			ret = true;
		}
		f32 calc2 = og::Screen::calcSmooth0to1(m_fadeLevel, msBaseVal._08);
		m_movePos = 800.0f * calc2;
		break;
	case MENUSTATE_Default:
		break;

	default:
		JUT_PANICLINE(691, "FadeOut ERR!\n");
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80317230
 * Size:	000164
 */
void ObjSMenuBase::doUpdateFadeoutFinish()
{
	switch (m_cancelToState) {
	case MENUCLOSE_Finish:
		startBackupScene();
		setFinishState(2);
		break;

	case MENUCLOSE_R:
		doUpdateRAction();
		setFinishState(1);
		break;

	case MENUCLOSE_L:
		doUpdateLAction();
		setFinishState(1);
		break;

	case MENUCLOSE_None:
		setFinishState(1);
		break;

	default:
		JUT_PANICLINE(720, "updateFinish ERR!\n");
	}
}

ObjSMenuBase::StaticValues ObjSMenuBase::msBaseVal;

} // namespace newScreen
} // namespace og
