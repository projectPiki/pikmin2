#include "og/newScreen/SMenu.h"
#include "nans.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	803140B4
 * Size:	000050
 */
SMenuPause::SMenuPause() { }

/*
 * --INFO--
 * Address:	80314104
 * Size:	000004
 */
void SMenuPause::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80314108
 * Size:	000060
 */
void SMenuPause::doCreateObj(JKRArchive* archive) { registObj(new ObjSMenuPause("SMenuPause screen"), archive); }

/*
 * --INFO--
 * Address:	80314168
 * Size:	000004
 */
void SMenuPause::doUpdateActive() { }

/*
 * --INFO--
 * Address:	8031416C
 * Size:	000068
 */
bool SMenuPause::doConfirmSetScene(::Screen::SetSceneArg& sceneArg)
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
