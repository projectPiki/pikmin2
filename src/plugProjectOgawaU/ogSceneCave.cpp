#include "og/newScreen/Cave.h"

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	8031CC90
 * Size:	00003C
 */
Cave::Cave() { }

/*
 * --INFO--
 * Address:	8031CCCC
 * Size:	000004
 */
void Cave::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	8031CCD0
 * Size:	000078
 */
void Cave::doCreateObj(JKRArchive* archive)
{
	::Screen::ObjBase* obj = new ObjCave("cave screen");
	registObj(obj, archive);
	setColorBG(0, 0, 0, 0);
}

/*
 * --INFO--
 * Address:	8031CD48
 * Size:	00000C
 */
const char* Cave::getResName() const { return "res_cave.szs"; }

/*
 * --INFO--
 * Address:	8031CD54
 * Size:	000008
 */
SceneType Cave::getSceneType(void) { return SCENE_CAVE; }

/*
 * --INFO--
 * Address:	8031CD5C
 * Size:	00000C
 */
ScreenOwnerID Cave::getOwnerID(void) { return OWNER_OGA; }

/*
 * --INFO--
 * Address:	8031CD68
 * Size:	000010
 */
ScreenMemberID Cave::getMemberID(void) { return MEMBER_CAVE; }

/*
 * --INFO--
 * Address:	8031CD78
 * Size:	000008
 */
bool Cave::isDrawInDemo() const { return false; }
} // namespace newScreen
} // namespace og
