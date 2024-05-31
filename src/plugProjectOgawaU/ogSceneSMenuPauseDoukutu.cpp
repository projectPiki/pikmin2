#include "og/newScreen/SMenu.h"
#include "nans.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80323584
 * @note Size: 0x50
 */
SMenuPauseDoukutu::SMenuPauseDoukutu() { }

/**
 * @note Address: 0x803235D4
 * @note Size: 0x4
 */
void SMenuPauseDoukutu::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x803235D8
 * @note Size: 0x60
 */
void SMenuPauseDoukutu::doCreateObj(JKRArchive* archive) { registObj(new ObjSMenuPauseDoukutu("SMenuPauseDoukutu screen"), archive); }

/**
 * @note Address: 0x80323638
 * @note Size: 0x90
 */
int SMenuPauseDoukutu::doGetFinishState()
{
	int finishState = mFinishState;
	if (finishState == og::Screen::MENUFINISH_GetFromSubMember) {
		Screen::DispMemberBase* dispMember = getDispMember();
		if (dispMember->isID(OWNER_OGA, MEMBER_START_MENU_ALL)) {
			Screen::DispMemberSMenuPauseDoukutu* subMember
			    = static_cast<Screen::DispMemberSMenuPauseDoukutu*>(dispMember->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE_DOUKUTU));
			if (subMember) {
				finishState = subMember->mExitStatus;
			}
		}
	}
	return finishState;
}

/**
 * @note Address: 0x803236C8
 * @note Size: 0x4
 */
void SMenuPauseDoukutu::doUpdateActive() { }

/**
 * @note Address: 0x803236CC
 * @note Size: 0x68
 */
bool SMenuPauseDoukutu::doConfirmSetScene(::Screen::SetSceneArg& sceneArg)
{
	bool result = false;

	switch (sceneArg.getSceneType()) {
	case SCENE_GROUND:
	case SCENE_CAVE:
	case SCENE_VS:
	case SCENE_PAUSE_MENU_ITEMS:
	case SCENE_PAUSE_MENU_MAP:
	case SCENE_CHALLENGE_2P:
	case SCENE_CHALLENGE_1P:
	case SCENE_PAUSE_MENU_CONTROLS:
		result = true;
	}

	return result;
}

} // namespace newScreen
} // namespace og
