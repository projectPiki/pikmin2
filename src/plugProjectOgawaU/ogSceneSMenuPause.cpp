#include "og/newScreen/SMenu.h"
#include "nans.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x803140B4
 * @note Size: 0x50
 */
SMenuPause::SMenuPause() { }

/**
 * @note Address: 0x80314104
 * @note Size: 0x4
 */
void SMenuPause::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x80314108
 * @note Size: 0x60
 */
void SMenuPause::doCreateObj(JKRArchive* archive) { registObj(new ObjSMenuPause("SMenuPause screen"), archive); }

/**
 * @note Address: 0x80314168
 * @note Size: 0x4
 */
void SMenuPause::doUpdateActive() { }

/**
 * @note Address: 0x8031416C
 * @note Size: 0x68
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
