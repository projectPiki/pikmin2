#include "types.h"
#include "og/newScreen/SMenu.h"
#include "og/Screen/ArrowAlphaBlink.h"
#include "og/Screen/ogScreen.h"
#include "og/Sound.h"
#include "Controller.h"
#include "System.h"
#include "trig.h"
#include "nans.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
static void _Print(char* format, ...) { OSReport(format, __FILE__); }

bool resetYajiTimer;
f32 YajiMoveTimer;

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
	_50               = false;
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
 * Address:	........
 * Size:	0000D4
 */
void ObjSMenuBase::registSMenuScreen(P2DScreen::Mgr*)
{
	// UNUSED FUNCTION
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
	m_yajiLpos.x = m_Nyaji_l->_0D4.x;
	m_yajiLpos.y = m_Nyaji_l->_0D4.y;
	m_Nyaji_r    = og::Screen::TagSearch(m_screenLR, 'Nyaji_r');
	m_yajiRpos.x = m_Nyaji_r->_0D4.x;
	m_yajiRpos.y = m_Nyaji_r->_0D4.y;

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
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x6C(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x3C
	  lwz       r0, 0x70(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  stw       r6, 0x1C(r4)
	  stw       r5, 0x18(r4)
	  lwz       r3, 0x70(r3)
	  stw       r8, 0x1C(r3)
	  stw       r7, 0x18(r3)
	  b         .loc_0x58

	.loc_0x3C:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x19A8
	  li        r4, 0x1E1
	  subi      r5, r5, 0x194C
	  crclr     6, 0x6
	  bl        -0x2EC524

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
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
		if (!resetYajiTimer) {
			YajiMoveTimer  = 0.0f;
			resetYajiTimer = true;
		}
		YajiMoveTimer += msBaseVal._10;

		if (YajiMoveTimer > TAU) {
			YajiMoveTimer -= TAU;
		}
		newxpos = msBaseVal._0C * pikmin2_sinf(YajiMoveTimer);

		f32 temp = YajiMoveTimer - HALF_PI;
		if (temp > 0.0f && temp < PI) {
			newalpha = 1.0f;
			if (temp >= QUARTER_PI) {
				if (temp < 2.356194f) { // 3/4 PI?
					newalpha = (PI - temp) / QUARTER_PI;
				}
			} else {
				newalpha = temp / QUARTER_PI;
			}
		}
	}

	m_Nyaji_l->setOffset(m_yajiLpos.x + newxpos, m_yajiLpos.y);
	m_Nyaji_r->setOffset(m_yajiRpos.x - newxpos, m_yajiRpos.y);

	if (m_enableYaji) {
		u8 alpha = m_alpha;
		if (alpha < 255) {
			u8 alpha2 = 255 - alpha;
			alpha2 /= 7;
			m_alpha = alpha2 + alpha + 1;
		}
	} else {
		u8 alpha = m_alpha;
		if (alpha > 0) {
			m_alpha = alpha - (alpha + 1);
		}
	}

	if (msBaseVal.m_updateYaji) {
		newalpha *= m_alpha;
	} else {
		m_arrowBlink->setSpeed(msBaseVal._10);
		newalpha = m_arrowBlink->calc();
		newalpha *= m_alpha;
	}

	m_Nyaji_l->setAlpha(newalpha);
	m_Nyaji_r->setAlpha(newalpha);
	m_screenLR->setAlpha(newalpha);
	m_screenLR->update();
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	lis      r4, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	lfs      f31, lbl_8051D880@sda21(r2)
	addi     r31, r4, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
	mr       r30, r3
	lbz      r0, 0x19(r31)
	fmr      f30, f31
	cmplwi   r0, 0
	beq      lbl_80316CD0
	lbz      r0, init$3854@sda21(r13)
	extsb.   r0, r0
	bne      lbl_80316BE4
	li       r0, 1
	stfs     f31, angle$3853@sda21(r13)
	stb      r0, init$3854@sda21(r13)

lbl_80316BE4:
	lis      r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	lfs      f2, angle$3853@sda21(r13)
	addi     r3, r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
	lfs      f0, lbl_8051D89C@sda21(r2)
	lfs      f1, 0x10(r3)
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	stfs     f1, angle$3853@sda21(r13)
	ble      lbl_80316C10
	fsubs    f0, f1, f0
	stfs     f0, angle$3853@sda21(r13)

lbl_80316C10:
	lfs      f3, angle$3853@sda21(r13)
	lis      r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	lfs      f0, lbl_8051D880@sda21(r2)
	addi     r3, r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
	lfs      f2, 0xc(r3)
	fcmpo    cr0, f3, f0
	bge      lbl_80316C58
	lfs      f0, lbl_8051D8A0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80316C7C

lbl_80316C58:
	lfs      f0, lbl_8051D8A4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80316C7C:
	lfs      f1, lbl_8051D8A8@sda21(r2)
	fmuls    f30, f2, f0
	lfs      f0, lbl_8051D880@sda21(r2)
	fsubs    f2, f3, f1
	fcmpo    cr0, f2, f0
	ble      lbl_80316CD0
	lfs      f1, lbl_8051D8AC@sda21(r2)
	fcmpo    cr0, f2, f1
	bge      lbl_80316CD0
	lfs      f0, lbl_8051D8B0@sda21(r2)
	lfs      f31, lbl_8051D884@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_80316CB8
	fdivs    f31, f2, f0
	b        lbl_80316CD0

lbl_80316CB8:
	lfs      f0, lbl_8051D8B4@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80316CD0
	fsubs    f1, f1, f2
	lfs      f0, lbl_8051D8B8@sda21(r2)
	fdivs    f31, f1, f0

lbl_80316CD0:
	lfs      f0, 0x78(r30)
	lwz      r3, 0x64(r30)
	fadds    f0, f0, f30
	lfs      f1, 0x7c(r30)
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x80(r30)
	lwz      r3, 0x68(r30)
	fsubs    f0, f0, f30
	lfs      f1, 0x84(r30)
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x74(r30)
	cmplwi   r0, 0
	beq      lbl_80316D68
	lbz      r4, 0x8c(r30)
	cmplwi   r4, 0xff
	bge      lbl_80316D84
	lis      r3, 0x92492493@ha
	subfic   r0, r4, 0xff
	addi     r3, r3, 0x92492493@l
	mulhw    r3, r3, r0
	add      r0, r3, r0
	srawi    r0, r0, 2
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	add      r3, r0, r4
	addi     r0, r3, 1
	stb      r0, 0x8c(r30)
	b        lbl_80316D84

lbl_80316D68:
	lbz      r4, 0x8c(r30)
	cmplwi   r4, 0
	beq      lbl_80316D84
	rlwinm   r3, r4, 0x1f, 0x19, 0x1f
	addi     r0, r3, 1
	subf     r0, r0, r4
	stb      r0, 0x8c(r30)

lbl_80316D84:
	lbz      r0, 0x19(r31)
	cmplwi   r0, 0
	beq      lbl_80316DC0
	lbz      r3, 0x8c(r30)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lfd      f1, lbl_8051D8C0@sda21(r2)
	stw      r3, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fmuls    f0, f0, f31
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r31, 0xc(r1)
	b        lbl_80316E08

lbl_80316DC0:
	lis      r4, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	lwz      r3, 0x90(r30)
	addi     r4, r4, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
	lfs      f1, 0x10(r4)
	bl       setSpeed__Q32og6Screen15ArrowAlphaBlinkFf
	lwz      r3, 0x90(r30)
	bl       calc__Q32og6Screen15ArrowAlphaBlinkFv
	lbz      r3, 0x8c(r30)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lfd      f2, lbl_8051D8C0@sda21(r2)
	stw      r3, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r31, 0xc(r1)

lbl_80316E08:
	lwz      r3, 0x64(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x68(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x60(r30)
	lbz      r4, 0x8c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x60(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x44(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80316E8C
 * Size:	000034
 */
void ObjSMenuBase::drawYaji(Graphics& gfx)
{
	m_screenLR->draw(gfx, gfx.m_perspGraph);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r5, r4, 0x190
	stw      r0, 0x14(r1)
	lwz      r3, 0x60(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80316EC0
 * Size:	000170
 */
bool ObjSMenuBase::updateFadeIn(void)
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
		f32 calc2 = og::Screen::calcSmooth0to1(m_fadeLevel, msBaseVal._08);
		m_movePos = 800.0f * (1.0f - calc2);
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
		f32 calc  = og::Screen::calcSmooth0to1(m_fadeLevel, msBaseVal._08);
		m_movePos = -800.0f * (1.0f - calc);
		break;
	case MENUSTATE_Default:
		break;

	default:
		JUT_PANICLINE(621, "FadeIn ERR!\n");
	}
	return ret;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	bl       getGamePad__Q26Screen7ObjBaseCFv
	lwz      r0, 0x38(r30)
	cmpwi    r0, 1
	beq      lbl_80316F80
	bge      lbl_80316EFC
	cmpwi    r0, 0
	bge      lbl_80316F08
	b        lbl_80316FF8

lbl_80316EFC:
	cmpwi    r0, 4
	beq      lbl_80317014
	b        lbl_80316FF8

lbl_80316F08:
	lwz      r5, sys@sda21(r13)
	lis      r4, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	lfs      f1, 0x44(r30)
	addi     r4, r4, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x44(r30)
	lfs      f1, 0x44(r30)
	lfs      f0, 8(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_80316F3C
	li       r31, 1
	b        lbl_80316F5C

lbl_80316F3C:
	lwz      r3, 0x1c(r3)
	lwz      r0, 0x5c(r30)
	and.     r0, r3, r0
	beq      lbl_80316F5C
	li       r3, 3
	li       r0, 1
	stw      r3, 0x3c(r30)
	stb      r0, 0x48(r30)

lbl_80316F5C:
	lfs      f1, 0x44(r30)
	lfs      f2, 8(r4)
	bl       calcSmooth0to1__Q22og6ScreenFff
	lfs      f2, lbl_8051D884@sda21(r2)
	lfs      f0, lbl_8051D894@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x40(r30)
	b        lbl_80317014

lbl_80316F80:
	lwz      r5, sys@sda21(r13)
	lis      r4, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	lfs      f1, 0x44(r30)
	addi     r4, r4, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x44(r30)
	lfs      f1, 0x44(r30)
	lfs      f0, 8(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_80316FB4
	li       r31, 1
	b        lbl_80316FD4

lbl_80316FB4:
	lwz      r3, 0x1c(r3)
	lwz      r0, 0x58(r30)
	and.     r0, r3, r0
	beq      lbl_80316FD4
	li       r3, 2
	li       r0, 1
	stw      r3, 0x3c(r30)
	stb      r0, 0x48(r30)

lbl_80316FD4:
	lfs      f1, 0x44(r30)
	lfs      f2, 8(r4)
	bl       calcSmooth0to1__Q22og6ScreenFff
	lfs      f2, lbl_8051D884@sda21(r2)
	lfs      f0, lbl_8051D898@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x40(r30)
	b        lbl_80317014

lbl_80316FF8:
	lis      r3, lbl_8048E658@ha
	lis      r5, lbl_8048E6C8@ha
	addi     r3, r3, lbl_8048E658@l
	li       r4, 0x26d
	addi     r5, r5, lbl_8048E6C8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80317014:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80317030
 * Size:	0000A8
 */
bool ObjSMenuBase::doUpdateFadein(void)
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803170C4
	lbz      r0, 0x48(r31)
	cmplwi   r0, 0
	beq      lbl_803170C4
	lwz      r0, 0x38(r31)
	cmpwi    r0, 0
	bne      lbl_803170A4
	lfs      f1, 0x40(r31)
	lfs      f0, lbl_8051D880@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803170C4
	li       r3, 1
	b        lbl_803170C4

lbl_803170A4:
	cmpwi    r0, 1
	bne      lbl_803170C4
	lfs      f1, 0x40(r31)
	lfs      f0, lbl_8051D880@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803170C4
	li       r3, 1

lbl_803170C4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803170D8
 * Size:	000054
 */
void ObjSMenuBase::doUpdateFadeinFinish(void)
{
	if (!m_exiting) {
		m_enableYaji = true;
		wait();
	}
	m_fadeLevel = 0.0f;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	bne      lbl_80317110
	li       r0, 1
	stb      r0, 0x74(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl

lbl_80317110:
	lfs      f0, lbl_8051D880@sda21(r2)
	stfs     f0, 0x44(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031712C
 * Size:	000104
 */
bool ObjSMenuBase::updateFadeOut(void)
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x38(r3)
	cmpwi    r0, 3
	beq      lbl_803171B4
	bge      lbl_80317164
	cmpwi    r0, 2
	bge      lbl_80317170
	b        lbl_803171F8

lbl_80317164:
	cmpwi    r0, 5
	bge      lbl_803171F8
	b        lbl_80317214

lbl_80317170:
	lwz      r4, sys@sda21(r13)
	lis      r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	lfs      f1, 0x44(r30)
	addi     r3, r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x44(r30)
	lfs      f1, 0x44(r30)
	lfs      f2, 8(r3)
	fcmpo    cr0, f1, f2
	ble      lbl_803171A0
	li       r31, 1

lbl_803171A0:
	bl       calcSmooth0to1__Q22og6ScreenFff
	lfs      f0, lbl_8051D898@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x40(r30)
	b        lbl_80317214

lbl_803171B4:
	lwz      r4, sys@sda21(r13)
	lis      r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	lfs      f1, 0x44(r30)
	addi     r3, r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x44(r30)
	lfs      f1, 0x44(r30)
	lfs      f2, 8(r3)
	fcmpo    cr0, f1, f2
	ble      lbl_803171E4
	li       r31, 1

lbl_803171E4:
	bl       calcSmooth0to1__Q22og6ScreenFff
	lfs      f0, lbl_8051D894@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x40(r30)
	b        lbl_80317214

lbl_803171F8:
	lis      r3, lbl_8048E658@ha
	lis      r5, lbl_8048E6D8@ha
	addi     r3, r3, lbl_8048E658@l
	li       r4, 0x2b3
	addi     r5, r5, lbl_8048E6D8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80317214:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80317230
 * Size:	000164
 */
void ObjSMenuBase::doUpdateFadeoutFinish(void)
{
	switch (m_cancelToState) {
	case MENUCLOSE_Finish:
		startBackupScene();
		setFinishState(2);
		break;
	case MENUCLOSE_L:
		doUpdateLAction();
		setFinishState(1);
		break;
	case MENUCLOSE_R:
		doUpdateRAction();
		setFinishState(1);
		break;
	case MENUCLOSE_None:
		setFinishState(1);
		break;

	default:
		JUT_PANICLINE(720, "‚¾‚ß‚Å‚·\n");
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8048E658@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_8048E658@l
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x3c(r3)
	cmpwi    r0, 2
	beq      lbl_80317318
	bge      lbl_80317274
	cmpwi    r0, 0
	beq      lbl_80317348
	bge      lbl_80317280
	b        lbl_80317364

lbl_80317274:
	cmpwi    r0, 4
	bge      lbl_80317364
	b        lbl_803172E8

lbl_80317280:
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	bl       setBackupScene__Q26Screen9SceneBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803172C8
	mr       r3, r30
	li       r4, 0
	bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	clrlwi.  r0, r3, 0x18
	bne      lbl_803172C8
	addi     r3, r31, 0
	addi     r5, r31, 0x50
	li       r4, 0x16e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803172C8:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0x220(r3)
	b        lbl_80317378

lbl_803172E8:
	lwz      r12, 0(r3)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stw      r0, 0x220(r3)
	b        lbl_80317378

lbl_80317318:
	lwz      r12, 0(r3)
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stw      r0, 0x220(r3)
	b        lbl_80317378

lbl_80317348:
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stw      r0, 0x220(r3)
	b        lbl_80317378

lbl_80317364:
	addi     r3, r31, 0
	addi     r5, r31, 0x3c
	li       r4, 0x2d0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80317378:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

ObjSMenuBase::StaticValues ObjSMenuBase::msBaseVal;

} // namespace newScreen
} // namespace og
