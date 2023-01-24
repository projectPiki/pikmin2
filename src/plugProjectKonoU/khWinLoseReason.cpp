#include "kh/khWinLose.h"
#include "JSystem/JKR/JKRFileLoader.h"
#include "JSystem/JKR/JKRArchive.h"
#include "Morimura/GameOver.h"
#include "utilityU.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSMainSide_Scene.h"

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	80410714
 * Size:	0000CC
 */
void ObjWinLoseReason::doCreate(JKRArchive* arc)
{
	m_screen = new P2DScreen::Mgr_tuning;
	m_screen->set("otakara_get.blo", 0x1040000, arc);
	void* file = JKRFileLoader::getGlbResource("otakara_get.bck", arc);
	m_anim1    = J2DAnmLoaderDataBase::load(file);
	file       = JKRFileLoader::getGlbResource("otakara_get.bpk", arc);
	m_anim2    = J2DAnmLoaderDataBase::load(file);
	m_screen->setAnimation(m_anim1);
	m_screen->setAnimation(m_anim2);
}

/*
 * --INFO--
 * Address:	804107E0
 * Size:	000008
 */
bool ObjWinLoseReason::doUpdate() { return false; }

/*
 * --INFO--
 * Address:	804107E8
 * Size:	000004
 */
void ObjWinLoseReason::doDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	804107EC
 * Size:	000060
 */
SceneWinLoseReason::SceneWinLoseReason()
{
	m_screenObj[1] = nullptr;
	m_screenObj[0] = nullptr;
	m_outcome[1]   = -1;
	m_outcome[0]   = -1;
	m_done[1]      = false;
	m_done[0]      = false;
	m_counter      = 0;
}

/*
 * --INFO--
 * Address:	8041084C
 * Size:	000588
 */
void SceneWinLoseReason::doCreateObj(JKRArchive* arc)
{
	if (!m_dispMember->isID(OWNER_KH, MEMBER_WIN_LOSE_REASON)) {
		JUT_PANICLINE(140, "disp member err");
	}

	DispWinLoseReason* disp = static_cast<DispWinLoseReason*>(m_dispMember);
	m_outcome[0]            = disp->m_outcomeP1;
	switch (disp->m_outcomeP1) {
	case 1: // captain down
	{
		m_screenObj[0] = new Morimura::TOrimaDown2D;
		registObj(m_screenObj[0], arc);
		Morimura::TOrimaDown2D* screen = static_cast<Morimura::TOrimaDown2D*>(m_screenObj[0]);
		P2ASSERTLINE(149, screen);
		screen->m_gameOverScreen->setPosY(ObjWinLoseReason::msVal.m_yOffsetP1);
		screen->m_type = 1;
		screen->_8C    = ObjWinLoseReason::msVal._18;
		break;
	}
	case 2: // piki extinct
	{
		m_screenObj[0] = new Morimura::TPikminDown2D;
		registObj(m_screenObj[0], arc);
		Morimura::TPikminDown2D* screen = static_cast<Morimura::TPikminDown2D*>(m_screenObj[0]);
		P2ASSERTLINE(159, screen);
		screen->m_gameOverScreen->setPosY(ObjWinLoseReason::msVal.m_yOffsetP1);
		screen->m_type = 1;
		screen->_8C    = ObjWinLoseReason::msVal._18;
		break;
	}
	case 3: {
		m_screenObj[0] = new ObjWinLoseReason(0);
		registObj(m_screenObj[0], arc);
		m_done[0] = true;
		break;
	}
	default:
		m_done[0] = 1;
		break;
	}

	m_outcome[1] = disp->m_outcomeP2;
	switch (disp->m_outcomeP2) {
	case 1: // captain down
	{
		m_screenObj[1] = new Morimura::TLujiDown2D;
		registObj(m_screenObj[1], arc);
		Morimura::TOrimaDown2D* screen = static_cast<Morimura::TOrimaDown2D*>(m_screenObj[1]);
		P2ASSERTLINE(180, screen);
		screen->m_gameOverScreen->setPosY(ObjWinLoseReason::msVal.m_yOffsetP2);
		screen->m_type = 2;
		screen->_8C    = ObjWinLoseReason::msVal._18;
		break;
	}
	case 2: // piki extinct
	{
		m_screenObj[1] = new Morimura::TPikminDown2D;
		registObj(m_screenObj[1], arc);
		Morimura::TPikminDown2D* screen = static_cast<Morimura::TPikminDown2D*>(m_screenObj[1]);
		P2ASSERTLINE(190, screen);
		screen->m_gameOverScreen->setPosY(ObjWinLoseReason::msVal.m_yOffsetP2);
		screen->m_type = 2;
		screen->_8C    = ObjWinLoseReason::msVal._18;
		break;
	}
	case 3: // default (marble?)
	{
		m_screenObj[1] = new ObjWinLoseReason(1);
		registObj(m_screenObj[1], arc);
		m_done[1] = 1;
		break;
	}
	default:
		m_done[1] = 1;
		break;
	}

	setColorBG(0, 0, 0, 160);

	int flag = 0;
	switch (m_outcome[0]) {
	case 2:
		flag |= 1;
		break;
	case 1:
		flag |= 2;
		break;
	case 3:
		flag |= 4;
		break;
	}

	switch (m_outcome[1]) {
	case 2:
		flag |= 0x10;
		break;
	case 1:
		flag |= 0x20;
		break;
	case 3:
		flag |= 0x40;
		break;
	}

	if (!(flag & 0x44)) {
		int streamID;
		if (!(flag & 3)) {
			if (flag & 0x20) {
				streamID = 0xc001103d; // olimar win via louie dies
			} else {
				streamID = 0xc0011040; // olimar wins via extinct
			}
		} else if (!(flag & 0x30)) {
			if (flag & 0x2) {
				streamID = 0xc001103e; // louie win via olimar dies
			} else {
				streamID = 0xc0011041; // louie win via extinct
			}
		} else {
			streamID = 0xc0011045; // draw
		}

		PSStart2DStream(streamID);
		PSMuteSE_on2D();
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::checkSceneMgr(mgr);
		PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
		scene->stopAllSound(2);
	}
}

/*
 * --INFO--
 * Address:	80410DD4
 * Size:	0000CC
 */
void SceneWinLoseReason::doUpdateActive()
{
	m_counter++;
	for (int i = 0; i < 2; i++) {
		switch (m_outcome[i]) {
		case 1:
		case 2:
			if (m_counter == ObjWinLoseReason::msVal.m_progressFrame) {
				Morimura::TGameOverBase* obj = static_cast<Morimura::TGameOverBase*>(m_screenObj[i]);
				P2ASSERTLINE(272, obj);
				obj->_8C = -ObjWinLoseReason::msVal._18;
			} else if (m_counter > ObjWinLoseReason::msVal.m_finishFrame) {
				m_done[i] = true;
			}
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	80410EA0
 * Size:	000020
 */
bool SceneWinLoseReason::doEnd(::Screen::EndSceneArg* arg) { return SceneBase::doEnd(arg); }

ObjWinLoseReason::StaticValues ObjWinLoseReason::msVal;

} // namespace Screen
} // namespace kh
