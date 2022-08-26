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
	::Screen::ObjBase* obj = new ObjAnaDemo("ana demo screen");
	registObj(obj, archive);
	setColorBG(0, 0, 0, 150);
}

/*
 * --INFO--
 * Address:	8031EB54
 * Size:	00000C
 */
const char* AnaDemo::getResName() const { return "res_ana_demo.szs"; }

/*
 * --INFO--
 * Address:	8031EB60
 * Size:	000008
 */
SceneType AnaDemo::getSceneType() { return m_sceneType; }

/*
 * --INFO--
 * Address:	8031EB68
 * Size:	00000C
 */
ScreenOwnerID AnaDemo::getOwnerID() { return OWNER_OGA; }

/*
 * --INFO--
 * Address:	8031EB74
 * Size:	00006C
 */
ScreenMemberID AnaDemo::getMemberID()
{
	ScreenMemberID id = _MEMBER_EMPTY_STRING;
	switch (m_sceneType) {
	case SCENE_CAVE_IN_MENU:
		id = MEMBER_ANA_DEMO;
		break;
	case SCENE_KANKETU_MENU:
		id = MEMBER_KANKETU_MENU;
		break;
	case SCENE_CAVE_MORE_MENU:
		id = MEMBER_CAVE_MORE;
		break;
	}
	return id;
}

/*
 * --INFO--
 * Address:	8031EBE0
 * Size:	000008
 */
bool AnaDemo::isUseBackupSceneInfo() { return true; }
} // namespace newScreen
} // namespace og
