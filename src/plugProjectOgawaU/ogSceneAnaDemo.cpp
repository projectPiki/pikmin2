#include "JSystem/JUT/JUTException.h"
#include "og/newScreen/AnaDemo.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8031EA58
 * Size:	000080
 */
AnaDemo::AnaDemo(long sceneType)
{
	if (sceneType == SCENE_CAVE_IN_MENU || sceneType == SCENE_KANKETU_MENU || sceneType == SCENE_CAVE_MORE_MENU) {
		m_sceneType = (SceneType)sceneType;
	} else {
		JUT_PANICLINE(35, "ì¥åAÉÅÉjÉÖÅ[Ç≈ÇÕÇ†ÇËÇ‹ÇπÇÒÅI\n"); // Not a cave menu!
	}
}

/*
 * --INFO--
 * Address:	8031EAD8
 * Size:	000004
 */
void AnaDemo::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	8031EADC
 * Size:	000078
 */
void AnaDemo::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjAnaDemo("ana demo screen"), archive);
	setColorBG(0, 0, 0, 150);
}
} // namespace newScreen
} // namespace og
