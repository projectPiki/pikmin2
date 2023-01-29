#include "Screen/screenMgr.h"
#include "Morimura/GameOver.h"
#include "Morimura/HurryUp.h"
#include "Morimura/DayEndCount.h"
#include "Morimura/Zukan.h"
#include "Morimura/HiScore.h"
#include "Morimura/Challenge.h"
#include "Morimura/VsSelect.h"
#include "og/newScreen/Ground.h"
#include "og/newScreen/Cave.h"
#include "og/newScreen/Vs.h"
#include "og/newScreen/Floor.h"
#include "og/newScreen/Contena.h"
#include "og/newScreen/UfoMenu.h"
#include "og/newScreen/SMenu.h"
#include "og/newScreen/CourseName.h"
#include "og/newScreen/AnaDemo.h"
#include "og/newScreen/KanteiDemo.h"
#include "og/newScreen/SpecialItem.h"
#include "og/newScreen/Challenge.h"
#include "og/newScreen/Save.h"
#include "og/newScreen/FinalMsg.h"
#include "og/newScreen/WorldMapInfoWindow.h"

namespace newScreen {

/*
 * --INFO--
 * Address:	804001D8
 * Size:	0003CC
 */
::Screen::SceneBase* createScene_Ogawa(long sceneType)
{
	::Screen::SceneBase* base = nullptr;
	switch (sceneType) {
	case SCENE_GROUND:
		base = new og::newScreen::Ground;
		break;

	case SCENE_PAUSE_MENU_MAP:
		base = new og::newScreen::SMenuMap;
		break;

	case SCENE_PAUSE_MENU_ITEMS:
		base = new og::newScreen::SMenuItem;
		break;

	case SCENE_PAUSE_MENU:
		base = new og::newScreen::SMenuPause;
		break;

	case SCENE_PAUSE_MENU_DOUKUTU:
		base = new og::newScreen::SMenuPauseDoukutu;
		break;

	case SCENE_COURSE_NAME:
		base = new og::newScreen::CourseName;
		break;

	case SCENE_KANTEI_DEMO:
		base = new og::newScreen::KanteiDemo;
		break;

	case SCENE_SPECIAL_ITEM:
		base = new og::newScreen::SpecialItem;
		break;

	case SCENE_FLOOR:
		base = new og::newScreen::Floor;
		break;

	case SCENE_CAVE:
		base = new og::newScreen::Cave;
		break;

	case SCENE_CAVE_IN_MENU:
		base = new og::newScreen::AnaDemo(SCENE_CAVE_IN_MENU);
		break;

	case SCENE_KANKETU_MENU:
		base = new og::newScreen::AnaDemo(SCENE_KANKETU_MENU);
		break;

	case SCENE_CAVE_MORE_MENU:
		base = new og::newScreen::AnaDemo(SCENE_CAVE_MORE_MENU);
		break;

	case SCENE_CHALLENGE_2P:
		base = new og::newScreen::Challenge2P;
		break;

	case SCENE_UFO_MENU:
		base = new og::newScreen::UfoMenu;
		break;

	case SCENE_CONTENA_BLUE:
		base = new og::newScreen::Contena;
		break;

	case SCENE_CONTENA_RED:
		base = new og::newScreen::Contena;
		break;

	case SCENE_CONTENA_YELLOW:
		base = new og::newScreen::Contena;
		break;

	case SCENE_CONTENA_WHITE:
		base = new og::newScreen::Contena;
		break;

	case SCENE_CONTENA_PURPLE:
		base = new og::newScreen::Contena;
		break;

	case SCENE_SAVE:
		base = new og::newScreen::Save;
		break;

	case SCENE_FINAL_MSG:
		base = new og::newScreen::FinalMsg;
		break;

	case SCENE_VS:
		base = new og::newScreen::Vs;
		break;

	case SCENE_CHALLENGE_1P:
		base = new og::newScreen::Challenge1P;
		break;

	case SCENE_PAUSE_MENU_VS:
		base = new og::newScreen::SMenuPauseVS;
		break;

	case SCENE_WORLD_MAP_INFO_WINDOW_0:
		base = new og::newScreen::WorldMapInfoWindow0;
		break;

	case SCENE_WORLD_MAP_INFO_WINDOW_1:
		base = new og::newScreen::WorldMapInfoWindow1;
		break;

	case SCENE_PAUSE_MENU_CONTROLS:
		base = new og::newScreen::SMenuCont;
		break;
	}
	return base;
}

/*
 * --INFO--
 * Address:	804005A4
 * Size:	000348
 */
::Screen::SceneBase* createScene_Morimura(long sceneType)
{
	::Screen::SceneBase* base = nullptr;
	switch (sceneType) {
	case SCENE_COUNT_DOWN:
		base = new Morimura::TCountDownScene;
		break;

	case SCENE_HURRY_UP:
		base = new Morimura::THurryUpScene;
		break;

	case SCENE_GAME_OVER_GENERAL:
		base = new Morimura::TGameOverScene;
		break;

	case SCENE_ORIMA_DOWN:
		base = new Morimura::TOrimaDownScene;
		break;

	case SCENE_LUJI_DOWN:
		base = new Morimura::TLujiDownScene;
		break;

	case SCENE_PRESIDENT_DOWN:
		base = new Morimura::TPresidentDownScene;
		break;

	case SCENE_PIKMIN_DOWN:
		base = new Morimura::TPikminDownScene;
		break;

	case SCENE_ZUKAN_ENEMY:
		base = new Morimura::TDEnemyScene;
		break;

	case SCENE_ZUKAN_ITEM:
		base = new Morimura::TDItemScene;
		break;

	case SCENE_CHALLENGE_SELECT:
		base = new Morimura::TChallengeSelectScene;
		break;

	case SCENE_CHALLENGE_RESULT:
		base = new Morimura::TChallengeResultScene;
		break;

	case SCENE_VS_SELECT:
		base = new Morimura::TVsSelectScene;
		break;

	case SCENE_HIGH_SCORE:
		base = new Morimura::THiScoreScene;
		break;
	}
	return base;
}

/*
 * --INFO--
 * Address:	804008EC
 * Size:	000050
 * Needs less inlining.
 */
::Screen::SceneBase* Mgr::doGetSceneBase(long id)
{
	::Screen::SceneBase* base;
	base = createScene_Ogawa(id);
	if (!base) {
		base = createScene_Morimura(id);
	}
	if (!base) {
		base = kh::Screen::createScene_Koono(id);
	}
	return base;
}

/*
 * --INFO--
 * Address:	8040093C
 * Size:	0000AC
 */
Mgr* Mgr::create()
{
	Mgr* mgr   = new Mgr;
	sScreenMgr = mgr;
	mgr->init();
	mgr->mColor2.r = 0;
	mgr->mColor2.g = 0;
	mgr->mColor2.b = 0;
	mgr->mColor2.a = 0;
	mgr->mBgColor  = mgr->mColor2;
	return mgr;
}

/*
 * --INFO--
 * Address:	80400A98
 * Size:	0001A0
 */
void Mgr::drawBG(Graphics& gfx)
{
	J2DPerspGraph* persp = &gfx.mPerspGraph;
	u8 alpha2            = mBgColor.a;
	u8 alpha1            = mColor2.a;
	if (alpha2 > alpha1) {
		alpha2 -= alpha1;
		alpha2 /= 4;
		alpha2 += 1;
		mColor2.a = alpha1 + alpha2;
	} else if (alpha2 < alpha1) {
		u8 sub = alpha1 - alpha2;
		sub /= 4;
		sub += 1;
		mColor2.a = alpha1 - sub;
	}

	if (mColor2.a) {
		persp->setPort();
		f32 x  = System::getRenderModeObj()->fbWidth;
		f32 x2 = 0.0f;
		f32 y2 = 0.0f;
		f32 y  = System::getRenderModeObj()->efbHeight;
		if (mBgMode == 1) {
			y *= 0.5f;
		} else if (mBgMode == 2) {
			y2 = y * 0.5f;
		}
		persp->setColor(mColor2);
		GXSetAlphaUpdate(GX_FALSE);
		persp->fillBox(JGeometry::TBox2f(x2, y2, x2 + x, y2 + y));
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	addi     r31, r4, 0x190
	lbz      r0, 0x9f(r3)
	lbz      r4, 0xa3(r3)
	cmplw    r0, r4
	ble      lbl_80400AFC
	subf     r0, r4, r0
	srawi    r0, r0, 2
	addze    r3, r0
	addi     r0, r3, 1
	clrlwi   r0, r0, 0x18
	add      r0, r4, r0
	stb      r0, 0xa3(r30)
	b        lbl_80400B1C

lbl_80400AFC:
	bge      lbl_80400B1C
	subf     r0, r0, r4
	srawi    r0, r0, 2
	addze    r3, r0
	addi     r0, r3, 1
	clrlwi   r0, r0, 0x18
	subf     r0, r0, r4
	stb      r0, 0xa3(r30)

lbl_80400B1C:
	lbz      r0, 0xa3(r30)
	cmplwi   r0, 0
	beq      lbl_80400C08
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	bl       getRenderModeObj__6SystemFv
	lhz      r3, 4(r3)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	lfd      f1, lbl_80520050@sda21(r2)
	stw      r3, 0x34(r1)
	lfs      f30, lbl_80520048@sda21(r2)
	lfd      f0, 0x30(r1)
	fsubs    f31, f0, f1
	bl       getRenderModeObj__6SystemFv
	lhz      r3, 6(r3)
	lis      r0, 0x4330
	lwz      r4, 0xa4(r30)
	stw      r3, 0x3c(r1)
	lfd      f1, lbl_80520050@sda21(r2)
	cmpwi    r4, 1
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	fsubs    f29, f0, f1
	bne      lbl_80400B98
	lfs      f0, lbl_8052004C@sda21(r2)
	fmuls    f29, f29, f0
	b        lbl_80400BA8

lbl_80400B98:
	cmpwi    r4, 2
	bne      lbl_80400BA8
	lfs      f0, lbl_8052004C@sda21(r2)
	fmuls    f30, f0, f29

lbl_80400BA8:
	lwz      r0, 0xa0(r30)
	mr       r3, r31
	addi     r4, r1, 8
	addi     r5, r1, 0xc
	stw      r0, 0x18(r1)
	addi     r6, r1, 0x10
	addi     r7, r1, 0x14
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	li       r3, 0
	bl       GXSetAlphaUpdate
	lfs      f2, lbl_80520048@sda21(r2)
	fadds    f0, f30, f29
	stfs     f30, 0x20(r1)
	mr       r3, r31
	fadds    f1, f2, f31
	addi     r4, r1, 0x1c
	stfs     f2, 0x1c(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_80400C08:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80400C38
 * Size:	000064
 */
bool Mgr::reset()
{
	if (::Screen::Mgr::reset()) {
		_90        = 0;
		mInCave    = false;
		mInDemo    = false;
		_94        = 0;
		_98        = 0;
		mBgColor.a = 0;
		mColor2.a  = 0;
		mBgMode    = 0;
		return true;
	}
	return false;
}

} // namespace newScreen
