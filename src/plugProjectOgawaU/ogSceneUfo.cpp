#include "og/newScreen/UfoMenu.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	803248F4
 * Size:	00003C
 */
UfoMenu::UfoMenu() { }

/*
 * --INFO--
 * Address:	80324930
 * Size:	000004
 */
void UfoMenu::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80324934
 * Size:	000078
 */
void UfoMenu::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjUfoMenu("ufo menu screen"), archive);
	setColorBG(0, 0, 0, 160);
}

/*
 * --INFO--
 * Address:	803249AC
 * Size:	000060
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

/*
 * --INFO--
 * Address:	80324A0C
 * Size:	00000C
 */
void UfoMenu::doSetBackupScene(::Screen::SetSceneArg& sceneArg) { sceneArg._09 = false; }

} // namespace newScreen
} // namespace og
