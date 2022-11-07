#include "og/newScreen/SMenu.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80313F4C
 * Size:	000050
 */
SMenuItem::SMenuItem() { }

/*
 * --INFO--
 * Address:	80313F9C
 * Size:	000068
 */
bool SMenuItem::doConfirmSetScene(::Screen::SetSceneArg& sceneArg)
{
	bool result = false;

	switch (sceneArg.getSceneType()) {
	case SCENE_GROUND:
	case SCENE_CAVE:
	case SCENE_VS:
	case SCENE_PAUSE_MENU:
	case SCENE_PAUSE_MENU_DOUKUTU:
	case SCENE_PAUSE_MENU_MAP:
	case SCENE_CHALLENGE_2P:
	case SCENE_CHALLENGE_1P:
	case SCENE_PAUSE_MENU_CONTROLS:
		result = true;
	}

	return result;
}

/*
 * --INFO--
 * Address:	80314004
 * Size:	00000C
 */
void SMenuItem::doSetBackupScene(::Screen::SetSceneArg& sceneArg) { sceneArg._09 = false; }

/*
 * --INFO--
 * Address:	80314010
 * Size:	000004
 */
void SMenuItem::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80314014
 * Size:	000060
 */
void SMenuItem::doCreateObj(JKRArchive* archive) { registObj(new ObjSMenuItem("SMenuItem screen"), archive); }

/*
 * --INFO--
 * Address:	80314074
 * Size:	000004
 */
void SMenuItem::doUpdateActive() { }

} // namespace newScreen
} // namespace og
