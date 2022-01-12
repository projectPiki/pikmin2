#include "Screen/Enums.h"
#include "og/Screen/DispMemberSMenuPauseVS.h"
#include "og/newScreen/ObjSMenuPauseVS.h"
#include "og/newScreen/SMenuPauseVS.h"
#include "types.h"
#include "nans.h"

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	80329CFC
 * Size:	00003C
 */
SMenuPauseVS::SMenuPauseVS()
    : SceneBase()
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
SMenuPauseVS::~SMenuPauseVS(void)
{
	// UNUSED FUNCTION
}

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
	ObjSMenuPauseVS* obj = new ObjSMenuPauseVS("SMenuPauseVS screen");
	registObj(obj, archive);
	setColorBG(0, 0, 0, 180);
}

/*
 * --INFO--
 * Address:	80329DB4
 * Size:	000088
 */
int SMenuPauseVS::doGetFinishState()
{
	Screen::DispMemberBase* dispAll = reinterpret_cast<Screen::DispMemberBase*>(m_dispMemberBuffer);
	int state                       = 0;
	if (dispAll->isID(OWNER_OGA, MEMBER_START_MENU_ALL)) {
		Screen::DispMemberSMenuPauseVS* dispVs
		    = (Screen::DispMemberSMenuPauseVS*)dispAll->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE_VS);
		if (dispVs != nullptr) {
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
void SMenuPauseVS::doUpdateActive(void) { }

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

/*
 * --INFO--
 * Address:	80329EB4
 * Size:	00000C
 */
const char* SMenuPauseVS::getResName() const { return "res_s_menu_pause_VS.szs"; }

/*
 * --INFO--
 * Address:	80329EC0
 * Size:	000008
 */
SceneType SMenuPauseVS::getSceneType(void) { return SCENE_PAUSE_MENU_VS; }

/*
 * --INFO--
 * Address:	80329EC8
 * Size:	00000C
 */
ScreenOwnerID SMenuPauseVS::getOwnerID(void) { return OWNER_OGA; }

/*
 * --INFO--
 * Address:	80329ED4
 * Size:	000014
 */
ScreenMemberID SMenuPauseVS::getMemberID() { return MEMBER_START_MENU_PAUSE_VS; }

/*
 * --INFO--
 * Address:	80329EE8
 * Size:	000008
 */
bool SMenuPauseVS::isUseBackupSceneInfo(void) { return true; }

} // namespace newScreen

} // namespace og
