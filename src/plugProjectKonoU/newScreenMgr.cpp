#include "Screen/screenMgr.h"
#include "Morimura/GameOver.h"
#include "Morimura/HurryUp.h"
#include "Morimura/DayEndCount.h"
#include "Morimura/Zukan.h"
#include "Morimura/HiScore.h"
#include "Morimura/challengeResult2d.h"
#include "Morimura/challengeSelect2d.h"
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

/**
 * @note Address: 0x804001D8
 * @note Size: 0x3CC
 */
::Screen::SceneBase* createScene_Ogawa(s32 sceneType)
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

/**
 * @note Address: 0x804005A4
 * @note Size: 0x348
 */
::Screen::SceneBase* createScene_Morimura(s32 sceneType)
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

/**
 * @note Address: 0x804008EC
 * @note Size: 0x50
 */
::Screen::SceneBase* Mgr::doGetSceneBase(s32 id)
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

/**
 * @note Address: 0x8040093C
 * @note Size: 0xAC
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

/**
 * @note Address: 0x80400A98
 * @note Size: 0x1A0
 */
void Mgr::drawBG(Graphics& gfx)
{
	// wtf are these necessary u8 casts, kono?
	J2DPerspGraph* persp = &gfx.mPerspGraph;
	int alpha2           = mBgColor.a;
	int alpha1           = mColor2.a;
	if ((u8)alpha2 > (u8)alpha1) {
		alpha2 -= alpha1;
		alpha2 /= 4;
		alpha2 += 1;
		mColor2.a = (u8)alpha1 + (u8)alpha2;
	} else if ((u8)alpha2 < (u8)alpha1) {
		int sub = alpha1 - alpha2;
		sub /= 4;
		sub += 1;
		mColor2.a = alpha1 - (u8)sub;
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
}

/**
 * @note Address: 0x80400C38
 * @note Size: 0x64
 */
bool Mgr::reset()
{
	if (::Screen::Mgr::reset()) {
		mInitialised = 0;
		mInCave      = false;
		mInDemo      = false;
		mCourseIndex = 0;
		mUnused      = 0;
		mBgColor.a   = 0;
		mColor2.a    = 0;
		mBgMode      = 0;
		return true;
	}
	return false;
}

} // namespace newScreen
