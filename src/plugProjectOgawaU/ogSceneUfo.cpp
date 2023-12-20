#include "og/newScreen/UfoMenu.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x803248F4
 * @note Size: 0x3C
 */
UfoMenu::UfoMenu() { }

/**
 * @note Address: 0x80324930
 * @note Size: 0x4
 */
void UfoMenu::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x80324934
 * @note Size: 0x78
 */
void UfoMenu::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjUfoMenu("ufo menu screen"), archive);
	setColorBG(0, 0, 0, 160);
}

/**
 * @note Address: 0x803249AC
 * @note Size: 0x60
 */
bool UfoMenu::doConfirmSetScene(::Screen::SetSceneArg& sceneArg)
{
	bool result = false;

	switch (sceneArg.getSceneType()) {
	case SCENE_GROUND:
	case SCENE_CONTENA_WHITE:
	case SCENE_CONTENA_PURPLE:
		result = true;
	}

	return result;
}

/**
 * @note Address: 0x80324A0C
 * @note Size: 0xC
 */
void UfoMenu::doSetBackupScene(::Screen::SetSceneArg& sceneArg) { sceneArg.mDoCreateBackup = false; }

} // namespace newScreen
} // namespace og
