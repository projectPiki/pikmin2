#include "JSystem/JUtility/JUTException.h"
#include "og/newScreen/AnaDemo.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x8031EA58
 * @note Size: 0x80
 */
AnaDemo::AnaDemo(s32 sceneType)
{
	if (sceneType == SCENE_CAVE_IN_MENU || sceneType == SCENE_KANKETU_MENU || sceneType == SCENE_CAVE_MORE_MENU) {
		mSceneType = (SceneType)sceneType;
	} else {
		JUT_PANICLINE(35, "洞窟メニューではありません！\n"); // Not a cave menu!
	}
}

/**
 * @note Address: 0x8031EAD8
 * @note Size: 0x4
 */
void AnaDemo::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x8031EADC
 * @note Size: 0x78
 */
void AnaDemo::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjAnaDemo("ana demo screen"), archive);
	setColorBG(0, 0, 0, 150);
}
} // namespace newScreen
} // namespace og
