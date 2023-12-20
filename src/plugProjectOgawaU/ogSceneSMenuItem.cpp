#include "og/newScreen/SMenu.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80313F4C
 * @note Size: 0x50
 */
SMenuItem::SMenuItem() { }

/**
 * @note Address: 0x80313F9C
 * @note Size: 0x68
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

/**
 * @note Address: 0x80314004
 * @note Size: 0xC
 */
void SMenuItem::doSetBackupScene(::Screen::SetSceneArg& sceneArg) { sceneArg.mDoCreateBackup = false; }

/**
 * @note Address: 0x80314010
 * @note Size: 0x4
 */
void SMenuItem::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x80314014
 * @note Size: 0x60
 */
void SMenuItem::doCreateObj(JKRArchive* archive) { registObj(new ObjSMenuItem("SMenuItem screen"), archive); }

/**
 * @note Address: 0x80314074
 * @note Size: 0x4
 */
void SMenuItem::doUpdateActive() { }

} // namespace newScreen
} // namespace og
