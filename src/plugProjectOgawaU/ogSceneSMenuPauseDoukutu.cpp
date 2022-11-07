#include "og/newScreen/SMenu.h"
#include "nans.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80323584
 * Size:	000050
 */
SMenuPauseDoukutu::SMenuPauseDoukutu() { }

/*
 * --INFO--
 * Address:	803235D4
 * Size:	000004
 */
void SMenuPauseDoukutu::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	803235D8
 * Size:	000060
 */
void SMenuPauseDoukutu::doCreateObj(JKRArchive* archive) { registObj(new ObjSMenuPauseDoukutu("SMenuPauseDoukutu screen"), archive); }

/*
 * --INFO--
 * Address:	80323638
 * Size:	000090
 */
int SMenuPauseDoukutu::doGetFinishState()
{
	int finishState = m_finishState;
	if (finishState == 1) {
		Screen::DispMemberBase* dispMember = getDispMember();
		if (dispMember->isID(OWNER_OGA, MEMBER_START_MENU_ALL)) {
			Screen::DispMemberSMenuPauseDoukutu* subMember
			    = static_cast<Screen::DispMemberSMenuPauseDoukutu*>(dispMember->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE_DOUKUTU));
			if (subMember) {
				finishState = subMember->_14;
			}
		}
	}
	return finishState;
}

/*
 * --INFO--
 * Address:	803236C8
 * Size:	000004
 */
void SMenuPauseDoukutu::doUpdateActive() { }

/*
 * --INFO--
 * Address:	803236CC
 * Size:	000068
 */
bool SMenuPauseDoukutu::doConfirmSetScene(::Screen::SetSceneArg& sceneArg)
{
	bool result = false;

	switch (sceneArg.getSceneType()) {
	case SCENE_GROUND:
	case SCENE_CAVE:
	case SCENE_VS:
	case SCENE_PAUSE_MENU_ITEMS:
	case SCENE_PAUSE_MENU_MAP:
	case SCENE_CHALLENGE_2P:
	case SCENE_CHALLENGE_1P:
	case SCENE_PAUSE_MENU_CONTROLS:
		result = true;
	}

	return result;
}

} // namespace newScreen
} // namespace og
