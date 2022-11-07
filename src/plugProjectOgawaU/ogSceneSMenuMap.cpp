#include "og/newScreen/SMenu.h"
#include "LoadResource.h"
#include "nans.h"

namespace og {
namespace newScreen {

static const int someSMenuMapArray[] = { 0, 0, 0 };

/*
 * --INFO--
 * Address:	80312BFC
 * Size:	000050
 */
SMenuMap::SMenuMap() { }

/*
 * --INFO--
 * Address:	80312C4C
 * Size:	000148
 */
void SMenuMap::doUserCallBackFunc(Resource::MgrCommand* command)
{
	Screen::DispMemberSMenuAll* dispMember = static_cast<Screen::DispMemberSMenuAll*>(m_dispMember);
	int courseIndex                        = 0;
	if (dispMember->isID(OWNER_OGA, MEMBER_START_MENU_ALL)) {
		courseIndex = dispMember->m_sMenuMap.m_courseIndex;
	} else {
		JUT_PANICLINE(70, "DispMember ERR! (%s)\n", 0);
	}

	char* filePath;

	switch (courseIndex) {
	case 0:
		filePath = "/new_screen/cmn/res_map_image_tutorial.szs";
		break;
	case 1:
		filePath = "/new_screen/cmn/res_map_image_forest.szs";
		break;
	case 2:
		filePath = "/new_screen/cmn/res_map_image_yakushima.szs";
		break;
	case 3:
		filePath = "/new_screen/cmn/res_map_image_last.szs";
		break;
	default:
		filePath = "/new_screen/cmn/res_map_image_tutorial.szs";
		break;
	}

	sprintf(m_name, "%s", filePath);
	LoadResource::Arg loadArg(m_name);
	LoadResource::Node* resourceNode = gLoadResourceMgr->mountArchive(loadArg);
	if (resourceNode) {
		if (!resourceNode->m_archive) {
			JUT_PANICLINE(97, "arc is NULL!!\n");
		}
	} else {
		JUT_PANICLINE(102, "node is NULL!!\n");
	}
}

/*
 * --INFO--
 * Address:	80312D94
 * Size:	000080
 */
void SMenuMap::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjSMenuMap("SMenuMap screen"), archive);
	setColorBG(0, 0, 0, ObjSMenuMap::msVal._1B);
}

/*
 * --INFO--
 * Address:	80312E14
 * Size:	000004
 */
void SMenuMap::doUpdateActive() { }

/*
 * --INFO--
 * Address:	80312E18
 * Size:	000068
 */
bool SMenuMap::doConfirmSetScene(::Screen::SetSceneArg& sceneArg)
{
	bool result = false;

	switch (sceneArg.getSceneType()) {
	case SCENE_GROUND:
	case SCENE_CAVE:
	case SCENE_VS:
	case SCENE_PAUSE_MENU:
	case SCENE_PAUSE_MENU_DOUKUTU:
	case SCENE_PAUSE_MENU_ITEMS:
	case SCENE_CHALLENGE_2P:
	case SCENE_CHALLENGE_1P:
	case SCENE_PAUSE_MENU_CONTROLS:
		result = true;
	}

	return result;
}

/*
 * --INFO--
 * Address:	80312E80
 * Size:	00000C
 */
void SMenuMap::doSetBackupScene(::Screen::SetSceneArg& sceneArg) { sceneArg._09 = false; }

static const char DONOTDOTHAT[] = "‚¾‚ß‚Å‚·"; // 'do not do that' lmao

} // namespace newScreen
} // namespace og
