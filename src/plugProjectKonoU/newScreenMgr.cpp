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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	addi     r0, r3, -10029
	cmplwi   r0, 0xc
	li       r3, 0
	stw      r31, 0xc(r1)
	bgt      lbl_804008D8
	lis      r4, lbl_804EA8E8@ha
	slwi     r0, r0, 2
	addi     r4, r4, lbl_804EA8E8@l
	lwzx     r0, r4, r0
	mtctr    r0
	bctr
	.global  lbl_804005DC

lbl_804005DC:
	li       r3, 0x228
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80400614
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q28Morimura9THIOScene@ha
	lis      r3, __vt__Q28Morimura15TCountDownScene@ha
	addi     r0, r4, __vt__Q28Morimura9THIOScene@l
	li       r4, 0
	stw      r0, 0(r31)
	addi     r0, r3, __vt__Q28Morimura15TCountDownScene@l
	stw      r4, 0x220(r31)
	stw      r0, 0(r31)
	stw      r4, 0x224(r31)

lbl_80400614:
	mr       r3, r31
	b        lbl_804008D8
	.global  lbl_8040061C

lbl_8040061C:
	li       r3, 0x224
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80400650
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q28Morimura9THIOScene@ha
	lis      r3, __vt__Q28Morimura13THurryUpScene@ha
	addi     r0, r4, __vt__Q28Morimura9THIOScene@l
	li       r4, 0
	stw      r0, 0(r31)
	addi     r0, r3, __vt__Q28Morimura13THurryUpScene@l
	stw      r4, 0x220(r31)
	stw      r0, 0(r31)

lbl_80400650:
	mr       r3, r31
	b        lbl_804008D8
	.global  lbl_80400658

lbl_80400658:
	li       r3, 0x224
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80400698
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r3, __vt__Q28Morimura9THIOScene@ha
	lis      r4, __vt__Q28Morimura18TGameOverSceneBase@ha
	addi     r0, r3, __vt__Q28Morimura9THIOScene@l
	lis      r3, __vt__Q28Morimura14TGameOverScene@ha
	stw      r0, 0(r31)
	li       r5, 0
	addi     r4, r4, __vt__Q28Morimura18TGameOverSceneBase@l
	addi     r0, r3, __vt__Q28Morimura14TGameOverScene@l
	stw      r5, 0x220(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)

lbl_80400698:
	mr       r3, r31
	b        lbl_804008D8
	.global  lbl_804006A0

lbl_804006A0:
	li       r3, 0x224
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_804006E0
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r3, __vt__Q28Morimura9THIOScene@ha
	lis      r4, __vt__Q28Morimura18TGameOverSceneBase@ha
	addi     r0, r3, __vt__Q28Morimura9THIOScene@l
	lis      r3, __vt__Q28Morimura15TOrimaDownScene@ha
	stw      r0, 0(r31)
	li       r5, 0
	addi     r4, r4, __vt__Q28Morimura18TGameOverSceneBase@l
	addi     r0, r3, __vt__Q28Morimura15TOrimaDownScene@l
	stw      r5, 0x220(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)

lbl_804006E0:
	mr       r3, r31
	b        lbl_804008D8
	.global  lbl_804006E8

lbl_804006E8:
	li       r3, 0x224
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80400728
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r3, __vt__Q28Morimura9THIOScene@ha
	lis      r4, __vt__Q28Morimura18TGameOverSceneBase@ha
	addi     r0, r3, __vt__Q28Morimura9THIOScene@l
	lis      r3, __vt__Q28Morimura14TLujiDownScene@ha
	stw      r0, 0(r31)
	li       r5, 0
	addi     r4, r4, __vt__Q28Morimura18TGameOverSceneBase@l
	addi     r0, r3, __vt__Q28Morimura14TLujiDownScene@l
	stw      r5, 0x220(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)

lbl_80400728:
	mr       r3, r31
	b        lbl_804008D8
	.global  lbl_80400730

lbl_80400730:
	li       r3, 0x224
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80400770
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r3, __vt__Q28Morimura9THIOScene@ha
	lis      r4, __vt__Q28Morimura18TGameOverSceneBase@ha
	addi     r0, r3, __vt__Q28Morimura9THIOScene@l
	lis      r3, __vt__Q28Morimura19TPresidentDownScene@ha
	stw      r0, 0(r31)
	li       r5, 0
	addi     r4, r4, __vt__Q28Morimura18TGameOverSceneBase@l
	addi     r0, r3, __vt__Q28Morimura19TPresidentDownScene@l
	stw      r5, 0x220(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)

lbl_80400770:
	mr       r3, r31
	b        lbl_804008D8
	.global  lbl_80400778

lbl_80400778:
	li       r3, 0x224
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_804007B8
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r3, __vt__Q28Morimura9THIOScene@ha
	lis      r4, __vt__Q28Morimura18TGameOverSceneBase@ha
	addi     r0, r3, __vt__Q28Morimura9THIOScene@l
	lis      r3, __vt__Q28Morimura16TPikminDownScene@ha
	stw      r0, 0(r31)
	li       r5, 0
	addi     r4, r4, __vt__Q28Morimura18TGameOverSceneBase@l
	addi     r0, r3, __vt__Q28Morimura16TPikminDownScene@l
	stw      r5, 0x220(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)

lbl_804007B8:
	mr       r3, r31
	b        lbl_804008D8
	.global  lbl_804007C0

lbl_804007C0:
	li       r3, 0x228
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_804007D8
	bl       __ct__Q28Morimura12TDEnemySceneFv
	mr       r0, r3

lbl_804007D8:
	mr       r3, r0
	b        lbl_804008D8
	.global  lbl_804007E0

lbl_804007E0:
	li       r3, 0x228
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_804007F8
	bl       __ct__Q28Morimura11TDItemSceneFv
	mr       r0, r3

lbl_804007F8:
	mr       r3, r0
	b        lbl_804008D8
	.global  lbl_80400800

lbl_80400800:
	li       r3, 0x228
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80400838
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q28Morimura9THIOScene@ha
	lis      r3, __vt__Q28Morimura21TChallengeSelectScene@ha
	addi     r0, r4, __vt__Q28Morimura9THIOScene@l
	li       r4, 0
	stw      r0, 0(r31)
	addi     r0, r3, __vt__Q28Morimura21TChallengeSelectScene@l
	stw      r4, 0x220(r31)
	stw      r0, 0(r31)
	stw      r4, 0x224(r31)

lbl_80400838:
	mr       r3, r31
	b        lbl_804008D8
	.global  lbl_80400840

lbl_80400840:
	li       r3, 0x224
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80400874
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q28Morimura9THIOScene@ha
	lis      r3, __vt__Q28Morimura21TChallengeResultScene@ha
	addi     r0, r4, __vt__Q28Morimura9THIOScene@l
	li       r4, 0
	stw      r0, 0(r31)
	addi     r0, r3, __vt__Q28Morimura21TChallengeResultScene@l
	stw      r4, 0x220(r31)
	stw      r0, 0(r31)

lbl_80400874:
	mr       r3, r31
	b        lbl_804008D8
	.global  lbl_8040087C

lbl_8040087C:
	li       r3, 0x228
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_804008B4
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q28Morimura9THIOScene@ha
	lis      r3, __vt__Q28Morimura14TVsSelectScene@ha
	addi     r0, r4, __vt__Q28Morimura9THIOScene@l
	li       r4, 0
	stw      r0, 0(r31)
	addi     r0, r3, __vt__Q28Morimura14TVsSelectScene@l
	stw      r4, 0x220(r31)
	stw      r0, 0(r31)
	stw      r4, 0x224(r31)

lbl_804008B4:
	mr       r3, r31
	b        lbl_804008D8
	.global  lbl_804008BC

lbl_804008BC:
	li       r3, 0x224
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_804008D4
	bl       __ct__Q28Morimura13THiScoreSceneFv
	mr       r0, r3

lbl_804008D4:
	mr       r3, r0

lbl_804008D8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	if (base) {
		return base;
	}
	base = createScene_Morimura(id);
	if (base) {
		return base;
	}
	return createScene_Koono(id);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       createScene_Ogawa__9newScreenFl
	cmplwi   r3, 0
	bne      lbl_80400918
	mr       r3, r31
	bl       createScene_Morimura__9newScreenFl

lbl_80400918:
	cmplwi   r3, 0
	bne      lbl_80400928
	mr       r3, r31
	bl       createScene_Koono__Q22kh6ScreenFl

lbl_80400928:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	mgr->_A0.r     = 0;
	mgr->_A0.g     = 0;
	mgr->_A0.b     = 0;
	mgr->_A0.a     = 0;
	mgr->m_bgColor = mgr->_A0;
	return mgr;
}

/*
 * --INFO--
 * Address:	80400A98
 * Size:	0001A0
 */
void Mgr::drawBG(Graphics& gfx)
{
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
		_90         = 0;
		m_inCave    = false;
		m_inDemo    = false;
		_94         = 0;
		_98         = 0;
		m_bgColor.a = 0;
		_A0.a       = 0;
		m_bgMode    = 0;
		return true;
	}
	return false;
}

} // namespace newScreen
