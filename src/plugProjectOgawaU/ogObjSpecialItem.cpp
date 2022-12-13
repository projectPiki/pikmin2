#include "types.h"
#include "og/newScreen/SpecialItem.h"
#include "P2DScreen.h"
#include "og/Screen/ogScreen.h"
#include "PSSystem/PSScene.h"
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
	m_fadeTimer1   = 0.0f;
	m_fadeTimer2   = 0.0f;
	m_name         = name;
	m_disp         = nullptr;
	m_screen       = nullptr;
	m_paneSetP     = nullptr;
	m_drawBox.p1.x = 0.0f;
	m_drawBox.p1.y = 0.0f;
	m_drawBox.p2.x = 0.0f;
	m_drawBox.p2.y = 0.0f;
	m_doDrawBox    = true;
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
		m_disp = disp;
	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		m_disp = new og::Screen::DispMemberSpecialItem();
	} else {
		JUT_PANICLINE(81, "ERR! in ObjTest CreateŽ¸”sI\n");
	}

	m_screen = new P2DScreen::Mgr_tuning;
	m_screen->set("ok_bg_tokushu.blo", 0x1040000, arc);
	og::Screen::setAlphaScreen(m_screen);

	J2DPane* pane = m_screen->search('item');
	if (pane) {
		pane->m_isVisible = false;
	}

	m_paneSetP  = m_screen->search('Notsetp');
	m_doDrawBox = true;
}

/*
 * --INFO--
 * Address:	80319F8C
 * Size:	000040
 */
bool ObjSpecialItem::doUpdate()
{
	if (m_disp) {
		m_screen->update();
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
	m_screen->setAlpha((u8)(m_fadeTimer2 * 255.0f));
	m_screen->draw(gfx, gfx.m_perspGraph);

	J2DPane* pane = m_paneSetP;
	f32 x1, y1, x2, y2;
	y2             = pane->_030.f.y;
	x2             = pane->_030.f.x;
	y1             = pane->_030.i.y;
	x1             = pane->_030.i.x;
	m_drawBox.p1.x = x1;
	m_drawBox.p1.y = y1;
	m_drawBox.p2.x = x2;
	m_drawBox.p2.y = y2;

	if (m_doDrawBox && m_disp->m_delegate) {
		J2DPane* pane = m_paneSetP;
		f32 x1, y1, x2, y2;
		y2             = pane->_030.f.y;
		x2             = pane->_030.f.x;
		y1             = pane->_030.i.y;
		x1             = pane->_030.i.x;
		m_drawBox.p1.x = x1;
		m_drawBox.p1.y = y1;
		m_drawBox.p2.x = x2;
		m_drawBox.p2.y = y2;
		m_disp->m_delegate->invoke(m_drawBox);
		m_doDrawBox = 0;
	}
}

/*
 * --INFO--
 * Address:	8031A0D0
 * Size:	00010C
 */
bool ObjSpecialItem::doStart(::Screen::StartSceneArg const*)
{
	m_fadeTimer1 = 0.0f;
	m_fadeTimer2 = 0.0f;
	if (m_disp->m_doPlayBGM) {
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
	m_fadeTimer1 = 0.0f;
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
void ObjSpecialItem::doUpdateFinish() { m_fadeTimer1 = 0.0f; }

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
	m_fadeTimer1 += sys->m_deltaTime;

	if (m_fadeTimer1 > 0.3f) {
		m_fadeTimer1 = 0.3f;
		check        = true;
	}

	m_fadeTimer2 = m_fadeTimer1 / 0.3f;

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
	m_fadeTimer1 += sys->m_deltaTime;

	if (m_fadeTimer1 > 0.2f) {
		m_fadeTimer1 = 0.2f;
		check        = true;
	}

	m_fadeTimer2 = 1.0f - (m_fadeTimer1 / 0.2f);
	return check;
}
} // namespace newScreen
} // namespace og
