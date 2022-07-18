#include "og/newScreen/Vs.h"

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	80327C5C
 * Size:	00003C
 */
Vs::Vs() { }

/*
 * --INFO--
 * Address:	80327C98
 * Size:	000004
 */
void Vs::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80327C9C
 * Size:	000078
 */
void Vs::doCreateObj(JKRArchive* archive)
{
	::Screen::ObjBase* obj = new ObjVs("Vs screen");
	registObj(obj, archive);
	setColorBG(0, 0, 0, 0);
}

/*
 * --INFO--
 * Address:	80327D14
 * Size:	00000C
 */
const char* Vs::getResName() const { return "res_vs.szs"; }

/*
 * --INFO--
 * Address:	80327D20
 * Size:	000008
 */
SceneType Vs::getSceneType() { return SCENE_VS; }

/*
 * --INFO--
 * Address:	80327D28
 * Size:	00000C
 */
ScreenOwnerID Vs::getOwnerID() { return OWNER_OGA; }

/*
 * --INFO--
 * Address:	80327D34
 * Size:	00000C
 */
ScreenMemberID Vs::getMemberID() {return MEMBER_VS; }

/*
 * --INFO--
 * Address:	80327D40
 * Size:	000008
 */
bool Vs::isDrawInDemo() const { return false; }
} // namespace newScreen
} // namespace og
