#include "og/newScreen/Save.h"
#include "og/Sound.h"
#include "ebi/Save.h"
#include "System.h"
#include "Game/GameConfig.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80324A54
 * Size:	000060
 */
ObjSave::ObjSave(const char* name)
{
	m_saveMgr = nullptr;
	m_name    = name;
	m_disp    = nullptr;
}

/*
 * --INFO--
 * Address:	80324AB4
 * Size:	0000AC
 */
ObjSave::~ObjSave() { }

/*
 * --INFO--
 * Address:	80324B60
 * Size:	00008C
 */
void ObjSave::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberSave* disp = static_cast<og::Screen::DispMemberSave*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_SAVE)) {
		m_disp = disp;
	} else {
		JUT_PANICLINE(84, "ERR! in ObjSave CreateŽ¸”sI\n");
	}
	m_state = SAVESTATE_StartDelay;
	m_timer = 0.0f;
}

/*
 * --INFO--
 * Address:	80324BEC
 * Size:	000134
 */
bool ObjSave::doUpdate()
{
	bool check = false;
	if (m_disp->m_doSound) {
		ogSound->setSaveCave();
	}
	m_saveMgr->update();

	switch (m_state) {
	case SAVESTATE_StartDelay:
		m_timer += sys->m_deltaTime;
		if (m_timer > 0.1f) {
			m_state = SAVESTATE_WaitForFinish;
			m_saveMgr->setControllers(getGamePad());
			m_saveMgr->_470       = 0;
			m_saveMgr->m_saveType = 1;
			if (!Game::gGameConfig.m_parms.m_autosaveOff.m_data) {
				m_saveMgr->m_isAutosaveOn = true;
			}
			m_saveMgr->start();
			m_saveMgr->update();
		}
		break;

	case SAVESTATE_WaitForFinish:
		if (m_saveMgr->isFinish()) {
			m_state = SAVESTATE_Finished;
		}
		break;

	case SAVESTATE_Finished:
		check   = true;
		m_state = SAVESTATE_StartDelay;
	}

	return check;
}

/*
 * --INFO--
 * Address:	80324D20
 * Size:	000030
 */
void ObjSave::doDraw(Graphics& gfx)
{
	if (m_state == SAVESTATE_WaitForFinish) {
		m_saveMgr->draw();
	}
}

/*
 * --INFO--
 * Address:	80324D50
 * Size:	000008
 */
bool ObjSave::doStart(::Screen::StartSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	80324D58
 * Size:	000008
 */
bool ObjSave::doEnd(::Screen::EndSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	80324D60
 * Size:	000004
 */
void ObjSave::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	80324D64
 * Size:	000004
 */
void ObjSave::doUpdateFinish() { }

/*
 * --INFO--
 * Address:	80324D68
 * Size:	000034
 */
void ObjSave::doUpdateFadeoutFinish() { getOwner()->endScene(nullptr); }

/*
 * --INFO--
 * Address:	80324D9C
 * Size:	000008
 */
bool ObjSave::doUpdateFadein() { return true; }

/*
 * --INFO--
 * Address:	80324DA4
 * Size:	000008
 */
bool ObjSave::doUpdateFadeout() { return true; }

} // namespace newScreen
} // namespace og
