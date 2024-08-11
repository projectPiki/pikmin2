#include "og/newScreen/SMenu.h"
#include "LoadResource.h"
#include "nans.h"

namespace og {
namespace newScreen {

static const int someSMenuMapArray[] = { 0, 0, 0 };

/**
 * @note Address: 0x80312BFC
 * @note Size: 0x50
 */
SMenuMap::SMenuMap() { }

/**
 * @note Address: 0x80312C4C
 * @note Size: 0x148
 */
void SMenuMap::doUserCallBackFunc(Resource::MgrCommand* command)
{
	Screen::DispMemberSMenuAll* dispMember = static_cast<Screen::DispMemberSMenuAll*>(mDispMember);
	int courseIndex                        = 0;
	if (dispMember->isID(OWNER_OGA, MEMBER_START_MENU_ALL)) {
		courseIndex = dispMember->mSMenuMap.mCourseIndex;
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

	sprintf(mName, "%s", filePath);
	LoadResource::Arg loadArg(mName);
	LoadResource::Node* resourceNode = gLoadResourceMgr->mountArchive(loadArg);
	if (resourceNode) {
		if (!resourceNode->mArchive) {
			JUT_PANICLINE(97, "arc is NULL!!\n");
		}
	} else {
		JUT_PANICLINE(102, "node is NULL!!\n");
	}
}

/**
 * @note Address: 0x80312D94
 * @note Size: 0x80
 */
void SMenuMap::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjSMenuMap("SMenuMap screen"), archive);
	setColorBG(0, 0, 0, ObjSMenuMap::msVal._1B);
}

/**
 * @note Address: 0x80312E14
 * @note Size: 0x4
 */
void SMenuMap::doUpdateActive() { }

/**
 * @note Address: 0x80312E18
 * @note Size: 0x68
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

/**
 * @note Address: 0x80312E80
 * @note Size: 0xC
 */
void SMenuMap::doSetBackupScene(::Screen::SetSceneArg& sceneArg) { sceneArg.mDoCreateBackup = false; }

static const char DONOTDOTHAT[] = "だめです"; // 'do not do that' lmao

} // namespace newScreen
} // namespace og
