#include "og/Screen/DispMember.h"
#include "og/newScreen/SMenu.h"
#include "nans.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80329CFC
 * @note Size: 0x3C
 */
SMenuPauseVS::SMenuPauseVS() { }

/**
 * @note Address: 0x80329D38
 * @note Size: 0x4
 */
void SMenuPauseVS::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x80329D3C
 * @note Size: 0x78
 */
void SMenuPauseVS::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjSMenuPauseVS("SMenuPauseVS screen"), archive);
	setColorBG(0, 0, 0, 180);
}

/**
 * @note Address: 0x80329DB4
 * @note Size: 0x88
 */
int SMenuPauseVS::doGetFinishState()
{
	Screen::DispMemberBase* dispAll = mDispMember;
	int state                       = 0;
	if (dispAll->isID(OWNER_OGA, MEMBER_START_MENU_ALL)) {
		Screen::DispMemberSMenuPauseVS* dispVs
		    = (Screen::DispMemberSMenuPauseVS*)dispAll->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE_VS);
		if (dispVs) {
			state = dispVs->mState;
		}
	}
	return state;
}

/**
 * @note Address: 0x80329E3C
 * @note Size: 0x4
 */
void SMenuPauseVS::doUpdateActive() { }

/**
 * @note Address: 0x80329E40
 * @note Size: 0x68
 */
bool SMenuPauseVS::doConfirmSetScene(::Screen::SetSceneArg& arg)
{
	bool result = false;
	switch (arg.getSceneType()) {
	case SCENE_VS:
	case SCENE_CHALLENGE_2P:
	case SCENE_CHALLENGE_1P:
		result = true;
	}
	return result;
}

/**
 * @note Address: 0x80329EA8
 * @note Size: 0xC
 */
void SMenuPauseVS::doSetBackupScene(::Screen::SetSceneArg& arg) { arg.mDoCreateBackup = false; }

} // namespace newScreen
} // namespace og
