#include "og/newScreen/SMenu.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	803304F0
 * Size:	000050
 */
SMenuCont::SMenuCont() { }

/*
 * --INFO--
 * Address:	80330540
 * Size:	000068
 */
bool SMenuCont::doConfirmSetScene(::Screen::SetSceneArg& sceneArg)
{
	bool result = false;

	switch (sceneArg.getSceneType()) {
	case SCENE_GROUND:
	case SCENE_CAVE:
	case SCENE_VS:
	case SCENE_PAUSE_MENU:
	case SCENE_PAUSE_MENU_DOUKUTU:
	case SCENE_PAUSE_MENU_ITEMS:
	case SCENE_PAUSE_MENU_MAP:
	case SCENE_CHALLENGE_2P:
	case SCENE_CHALLENGE_1P:
		result = true;
	}

	return result;
}

/*
 * --INFO--
 * Address:	803305A8
 * Size:	00000C
 */
void SMenuCont::doSetBackupScene(::Screen::SetSceneArg& sceneArg) { sceneArg._09 = false; }

/*
 * --INFO--
 * Address:	803305B4
 * Size:	000004
 */
void SMenuCont::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	803305B8
 * Size:	000060
 */
void SMenuCont::doCreateObj(JKRArchive* archive) { registObj(new ObjSMenuCont("SMenuCont screen"), archive); }

/*
 * --INFO--
 * Address:	80330618
 * Size:	000004
 */
void SMenuCont::doUpdateActive() { }

} // namespace newScreen
} // namespace og
