#include "og/newScreen/SMenu.h"
#include "og/Screen/anime.h"
#include "og/Screen/ogScreen.h"
#include "og/Sound.h"

namespace og {
namespace newScreen {

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

/*
 * --INFO--
 * Address:	80330658
 * Size:	000064
 */
ObjSMenuCont::ObjSMenuCont(char const* name)
{
	mDisp       = nullptr;
	mScreenCont = nullptr;
	mAnimGroup  = nullptr;
	mName       = name;
}

/*
 * --INFO--
 * Address:	803306BC
 * Size:	0000C4
 */
ObjSMenuCont::~ObjSMenuCont() { }

/*
 * --INFO--
 * Address:	80330780
 * Size:	00014C
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
	og::Screen::registAnimGroupScreen(mAnimGroup, arc, mScreenCont, "s_menu_controller.btk", msBaseVal._00);
	og::Screen::registAnimGroupScreen(mAnimGroup, arc, mScreenCont, "s_menu_controller_02.btk", msBaseVal._00);

	doCreateAfter(arc, mScreenCont);
}

/*
 * --INFO--
 * Address:	803308CC
 * Size:	0000CC
 */
void ObjSMenuCont::doUpdateLAction()
{
	og::Screen::DispMemberSMenuAll* disp = static_cast<og::Screen::DispMemberSMenuAll*>(getDispMember());
	if (disp->mSMenuMap.mInCave) {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_DOUKUTU, getDispMember(), false, true);
		jump_L(arg);
	} else {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU, getDispMember(), false, true);
		jump_L(arg);
	}
}

/*
 * --INFO--
 * Address:	80330998
 * Size:	00006C
 */
void ObjSMenuCont::doUpdateRAction()
{
	::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_ITEMS, getDispMember(), false, true);
	jump_R(arg);
}

/*
 * --INFO--
 * Address:	80330A04
 * Size:	000080
 */
void ObjSMenuCont::commonUpdate()
{
	commonUpdateBase();
	setSMenuScale(msVal.mScaleX, msVal.mScaleY);
	mAnimGroup->update();
	mScreenCont->setXY(mMovePos, 0.0f);
	mScreenCont->update();
}

/*
 * --INFO--
 * Address:	80330A84
 * Size:	000054
 */
bool ObjSMenuCont::doUpdate()
{
	commonUpdate();
	bool ret = ObjSMenuBase::doUpdate();
	mScreenCont->animation();
	return ret;
}

/*
 * --INFO--
 * Address:	80330AD8
 * Size:	000084
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

/*
 * --INFO--
 * Address:	80330B5C
 * Size:	000014
 */
void ObjSMenuCont::in_L()
{
	mState = MENUSTATE_OpenL;
	mAngle = 15.0;
}

/*
 * --INFO--
 * Address:	80330B70
 * Size:	000014
 */
void ObjSMenuCont::in_R()
{
	mState = MENUSTATE_OpenR;
	mAngle = 15.0;
}

/*
 * --INFO--
 * Address:	80330B84
 * Size:	00000C
 */
void ObjSMenuCont::wait() { mState = MENUSTATE_Default; }

/*
 * --INFO--
 * Address:	80330B90
 * Size:	00002C
 */
void ObjSMenuCont::out_L()
{
	mState = MENUSTATE_CloseL;
	ogSound->setSMenuLR();
}

/*
 * --INFO--
 * Address:	80330BBC
 * Size:	00002C
 */
void ObjSMenuCont::out_R()
{
	mState = MENUSTATE_CloseR;
	ogSound->setSMenuLR();
}

/*
 * --INFO--
 * Address:	80330BE8
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	80330C8C
 * Size:	000008
 */
bool ObjSMenuCont::doEnd(::Screen::EndSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	80330C94
 * Size:	000020
 */
void ObjSMenuCont::doUpdateFinish() { ObjSMenuBase::doUpdateFinish(); }

/*
 * --INFO--
 * Address:	80330CB4
 * Size:	00004C
 */
bool ObjSMenuCont::doUpdateFadeout()
{
	commonUpdate();
	return updateFadeOut();
}

/*
 * --INFO--
 * Address:	80330D00
 * Size:	000004
 */
void ObjSMenuCont::doUpdateCancelAction() { }

ObjSMenuCont::StaticValues ObjSMenuCont::msVal;

} // namespace newScreen
} // namespace og
