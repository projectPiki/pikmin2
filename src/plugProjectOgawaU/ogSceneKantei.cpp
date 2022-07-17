#include "og/newScreen/KanteiDemo.h"

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	80319BDC
 * Size:	000044
 */
KanteiDemo::KanteiDemo() { m_objBase = 0; }

/*
 * --INFO--
 * Address:	80319C20
 * Size:	000004
 */
void KanteiDemo::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80319C24
 * Size:	000068
 */
void KanteiDemo::doCreateObj(JKRArchive* archive)
{
	::Screen::ObjBase* obj = new ObjKantei("kantei screen");
	m_objBase = obj;
	registObj(m_objBase, archive);
}

/*
 * --INFO--
 * Address:	80319C8C
 * Size:	00000C
 */
const char* KanteiDemo::getResName() const { return "res_kantei.szs"; }

/*
 * --INFO--
 * Address:	80319C98
 * Size:	000008
 */
SceneType KanteiDemo::getSceneType() { return SCENE_KANTEI_DEMO; }

/*
 * --INFO--
 * Address:	80319CA0
 * Size:	00000C
 */
ScreenOwnerID KanteiDemo::getOwnerID() { return OWNER_OGA; }

/*
 * --INFO--
 * Address:	80319CAC
 * Size:	000010
 */
ScreenMemberID KanteiDemo::getMemberID() { return MEMBER_KANTEI; }

/*
 * --INFO--
 * Address:	80319CBC
 * Size:	000008
 */
bool KanteiDemo::isUseBackupSceneInfo() { return true; }
} // namespace newScreen
} // namespace og
