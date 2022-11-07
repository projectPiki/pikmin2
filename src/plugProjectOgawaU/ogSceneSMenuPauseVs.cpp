#include "Screen/Enums.h"
#include "og/Screen/DispMember.h"
#include "og/newScreen/SMenu.h"
#include "types.h"
#include "nans.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80329CFC
 * Size:	00003C
 */
SMenuPauseVS::SMenuPauseVS() { }

/*
 * --INFO--
 * Address:	80329D38
 * Size:	000004
 */
void SMenuPauseVS::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80329D3C
 * Size:	000078
 */
void SMenuPauseVS::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjSMenuPauseVS("SMenuPauseVS screen"), archive);
	setColorBG(0, 0, 0, 180);
}

/*
 * --INFO--
 * Address:	80329DB4
 * Size:	000088
 */
int SMenuPauseVS::doGetFinishState()
{
	Screen::DispMemberBase* dispAll = m_dispMember;
	int state                       = 0;
	if (dispAll->isID(OWNER_OGA, MEMBER_START_MENU_ALL)) {
		Screen::DispMemberSMenuPauseVS* dispVs
		    = (Screen::DispMemberSMenuPauseVS*)dispAll->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE_VS);
		if (dispVs) {
			state = dispVs->_08;
		}
	}
	return state;
}

/*
 * --INFO--
 * Address:	80329E3C
 * Size:	000004
 */
void SMenuPauseVS::doUpdateActive() { }

/*
 * --INFO--
 * Address:	80329E40
 * Size:	000068
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

/*
 * --INFO--
 * Address:	80329EA8
 * Size:	00000C
 */
void SMenuPauseVS::doSetBackupScene(::Screen::SetSceneArg& arg) { arg._09 = false; }

} // namespace newScreen
} // namespace og
