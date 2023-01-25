#include "og/newScreen/SpecialItem.h"
#include "P2DScreen.h"
#include "og/Screen/ogScreen.h"
#include "PSSystem/PSGame.h"
#include "PSM/Scene.h"
#include "System.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80319CC4
 * Size:	000088
 */
ObjSpecialItem::ObjSpecialItem(const char* name)
{
	mFadeTimer1   = 0.0f;
	mFadeTimer2   = 0.0f;
	mName         = name;
	mDisp         = nullptr;
	mScreen       = nullptr;
	mPaneSetP     = nullptr;
	mDrawBox.p1.x = 0.0f;
	mDrawBox.p1.y = 0.0f;
	mDrawBox.p2.x = 0.0f;
	mDrawBox.p2.y = 0.0f;
	mDoDrawBox    = true;
}

/*
 * --INFO--
 * Address:	80319D4C
 * Size:	0000AC
 */
ObjSpecialItem::~ObjSpecialItem() { }

/*
 * --INFO--
 * Address:	80319DF8
 * Size:	000194
 */
void ObjSpecialItem::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberSpecialItem* disp = static_cast<og::Screen::DispMemberSpecialItem*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_SPECIAL_ITEM)) {
		mDisp = disp;
	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		mDisp = new og::Screen::DispMemberSpecialItem();
	} else {
		JUT_PANICLINE(81, "ERR! in ObjTest CreateŽ¸”sI\n");
	}

	mScreen = new P2DScreen::Mgr_tuning;
	mScreen->set("ok_bg_tokushu.blo", 0x1040000, arc);
	og::Screen::setAlphaScreen(mScreen);

	J2DPane* pane = mScreen->search('item');
	if (pane) {
		pane->mIsVisible = false;
	}

	mPaneSetP  = mScreen->search('Notsetp');
	mDoDrawBox = true;
}

/*
 * --INFO--
 * Address:	80319F8C
 * Size:	000040
 */
bool ObjSpecialItem::doUpdate()
{
	if (mDisp) {
		mScreen->update();
	}
	return false;
}

/*
 * --INFO--
 * Address:	80319FCC
 * Size:	000104
 */
void ObjSpecialItem::doDraw(Graphics& gfx)
{
	mScreen->setAlpha((u8)(mFadeTimer2 * 255.0f));
	mScreen->draw(gfx, gfx.mPerspGraph);

	J2DPane* pane = mPaneSetP;
	f32 x1, y1, x2, y2;
	y2            = pane->mGlobalBounds.f.y;
	x2            = pane->mGlobalBounds.f.x;
	y1            = pane->mGlobalBounds.i.y;
	x1            = pane->mGlobalBounds.i.x;
	mDrawBox.p1.x = x1;
	mDrawBox.p1.y = y1;
	mDrawBox.p2.x = x2;
	mDrawBox.p2.y = y2;

	if (mDoDrawBox && mDisp->mDelegate) {
		J2DPane* pane = mPaneSetP;
		f32 x1, y1, x2, y2;
		y2            = pane->mGlobalBounds.f.y;
		x2            = pane->mGlobalBounds.f.x;
		y1            = pane->mGlobalBounds.i.y;
		x1            = pane->mGlobalBounds.i.x;
		mDrawBox.p1.x = x1;
		mDrawBox.p1.y = y1;
		mDrawBox.p2.x = x2;
		mDrawBox.p2.y = y2;
		mDisp->mDelegate->invoke(mDrawBox);
		mDoDrawBox = 0;
	}
}

/*
 * --INFO--
 * Address:	8031A0D0
 * Size:	00010C
 */
bool ObjSpecialItem::doStart(::Screen::StartSceneArg const*)
{
	mFadeTimer1 = 0.0f;
	mFadeTimer2 = 0.0f;
	if (mDisp->mDoPlayBGM) {
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::checkSceneMgr(mgr);
		PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(PSSystem::checkChildScene(mgr->getChildScene()));
		scene->startMainSeq();
	}
	return true;
}

/*
 * --INFO--
 * Address:	8031A1DC
 * Size:	000010
 */
bool ObjSpecialItem::doEnd(::Screen::EndSceneArg const*)
{
	mFadeTimer1 = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8031A1EC
 * Size:	000004
 */
void ObjSpecialItem::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	8031A1F0
 * Size:	00000C
 */
void ObjSpecialItem::doUpdateFinish() { mFadeTimer1 = 0.0f; }

/*
 * --INFO--
 * Address:	8031A1FC
 * Size:	000004
 */
void ObjSpecialItem::doUpdateFadeoutFinish() { }

/*
 * --INFO--
 * Address:	8031A200
 * Size:	000048
 */
bool ObjSpecialItem::doUpdateFadein()
{
	bool check = false;
	mFadeTimer1 += sys->mDeltaTime;

	if (mFadeTimer1 > 0.3f) {
		mFadeTimer1 = 0.3f;
		check       = true;
	}

	mFadeTimer2 = mFadeTimer1 / 0.3f;

	return check;
}

/*
 * --INFO--
 * Address:	8031A248
 * Size:	000050
 */
bool ObjSpecialItem::doUpdateFadeout()
{
	bool check = false;
	mFadeTimer1 += sys->mDeltaTime;

	if (mFadeTimer1 > 0.2f) {
		mFadeTimer1 = 0.2f;
		check       = true;
	}

	mFadeTimer2 = 1.0f - (mFadeTimer1 / 0.2f);
	return check;
}
} // namespace newScreen
} // namespace og
