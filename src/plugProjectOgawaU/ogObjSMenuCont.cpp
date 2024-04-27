#include "og/newScreen/SMenu.h"
#include "og/Screen/anime.h"
#include "og/Screen/ogScreen.h"
#include "og/Sound.h"

namespace og {
namespace newScreen {

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

/**
 * @note Address: 0x80330658
 * @note Size: 0x64
 */
ObjSMenuCont::ObjSMenuCont(char const* name)
{
	mDisp       = nullptr;
	mScreenCont = nullptr;
	mAnimGroup  = nullptr;
	mName       = name;
}

/**
 * @note Address: 0x803306BC
 * @note Size: 0xC4
 */
ObjSMenuCont::~ObjSMenuCont() { }

/**
 * @note Address: 0x80330780
 * @note Size: 0x14C
 */
void ObjSMenuCont::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberSMenuAll* dispfull = static_cast<og::Screen::DispMemberSMenuAll*>(getDispMember());
	mDisp = static_cast<og::Screen::DispMemberSMenuCont*>(dispfull->getSubMember(OWNER_OGA, MEMBER_START_MENU_CONTROLS));
	if (!mDisp) {
		og::Screen::DispMemberSMenuAll* newdisp = new og::Screen::DispMemberSMenuAll;
		mDisp = static_cast<og::Screen::DispMemberSMenuCont*>(newdisp->getSubMember(OWNER_OGA, MEMBER_START_MENU_CONTROLS));
	}

	mScreenCont = new P2DScreen::Mgr_tuning;
	mScreenCont->set("s_menu_controller.blo", 0x1040000, arc);

	mAnimGroup = new og::Screen::AnimGroup(2);
	og::Screen::registAnimGroupScreen(mAnimGroup, arc, mScreenCont, "s_menu_controller.btk", msBaseVal.mAnimSpeed);
	og::Screen::registAnimGroupScreen(mAnimGroup, arc, mScreenCont, "s_menu_controller_02.btk", msBaseVal.mAnimSpeed);

	doCreateAfter(arc, mScreenCont);
}

/**
 * @note Address: 0x803308CC
 * @note Size: 0xCC
 */
void ObjSMenuCont::doUpdateLAction()
{
	og::Screen::DispMemberSMenuAll* disp = static_cast<og::Screen::DispMemberSMenuAll*>(getDispMember());
	if (disp->mSMenuMap.mInCave) {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_DOUKUTU, getDispMember());
		jump_L(arg);
	} else {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU, getDispMember());
		jump_L(arg);
	}
}

/**
 * @note Address: 0x80330998
 * @note Size: 0x6C
 */
void ObjSMenuCont::doUpdateRAction()
{
	::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_ITEMS, getDispMember());
	jump_R(arg);
}

/**
 * @note Address: 0x80330A04
 * @note Size: 0x80
 */
void ObjSMenuCont::commonUpdate()
{
	commonUpdateBase();
	setSMenuScale(msVal.mScaleX, msVal.mScaleY);
	mAnimGroup->update();
	mScreenCont->setXY(mMovePos, 0.0f);
	mScreenCont->update();
}

/**
 * @note Address: 0x80330A84
 * @note Size: 0x54
 */
bool ObjSMenuCont::doUpdate()
{
	commonUpdate();
	bool ret = ObjSMenuBase::doUpdate();
	mScreenCont->animation();
	return ret;
}

/**
 * @note Address: 0x80330AD8
 * @note Size: 0x84
 */
void ObjSMenuCont::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	graf->setPort();
	if (mScreenCont) {
		mScreenCont->draw(gfx, *graf);
	}
	drawYaji(gfx);
}

/**
 * @note Address: 0x80330B5C
 * @note Size: 0x14
 */
void ObjSMenuCont::in_L()
{
	mState = MENUSTATE_OpenL;
	mAngle = 15.0;
}

/**
 * @note Address: 0x80330B70
 * @note Size: 0x14
 */
void ObjSMenuCont::in_R()
{
	mState = MENUSTATE_OpenR;
	mAngle = 15.0;
}

/**
 * @note Address: 0x80330B84
 * @note Size: 0xC
 */
void ObjSMenuCont::wait() { mState = MENUSTATE_Default; }

/**
 * @note Address: 0x80330B90
 * @note Size: 0x2C
 */
void ObjSMenuCont::out_L()
{
	mState = MENUSTATE_CloseL;
	ogSound->setSMenuLR();
}

/**
 * @note Address: 0x80330BBC
 * @note Size: 0x2C
 */
void ObjSMenuCont::out_R()
{
	mState = MENUSTATE_CloseR;
	ogSound->setSMenuLR();
}

/**
 * @note Address: 0x80330BE8
 * @note Size: 0xA4
 */
bool ObjSMenuCont::doStart(::Screen::StartSceneArg const* arg)
{
	mAnimGroup->setFrame(0.0f);
	mAnimGroup->setRepeat(true);
	mAnimGroup->setSpeed(1.0f);
	mAnimGroup->start();
	setYajiName('6052_00', '6050_00', '6051_00'); // "Menu" "Radar" "Items"
	stopYaji();
	return start_LR(arg);
}

/**
 * @note Address: 0x80330C8C
 * @note Size: 0x8
 */
bool ObjSMenuCont::doEnd(::Screen::EndSceneArg const*) { return true; }

/**
 * @note Address: 0x80330C94
 * @note Size: 0x20
 */
void ObjSMenuCont::doUpdateFinish() { ObjSMenuBase::doUpdateFinish(); }

/**
 * @note Address: 0x80330CB4
 * @note Size: 0x4C
 */
bool ObjSMenuCont::doUpdateFadeout()
{
	commonUpdate();
	return updateFadeOut();
}

/**
 * @note Address: 0x80330D00
 * @note Size: 0x4
 */
void ObjSMenuCont::doUpdateCancelAction() { }

ObjSMenuCont::StaticValues ObjSMenuCont::msVal;

} // namespace newScreen
} // namespace og
