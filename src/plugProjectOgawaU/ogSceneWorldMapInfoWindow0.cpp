#include "og/Screen/DispMemberWorldMapInfoWin0.h"
#include "og/newScreen/ObjWorldMapInfoWindow0.h"
#include "og/newScreen/WorldMapInfoWindow0.h"
#include "types.h"
#include "nans.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8032BAA4
 * Size:	00003C
 */
WorldMapInfoWindow0::WorldMapInfoWindow0()
    : SMenuPauseVS()
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
WorldMapInfoWindow0::~WorldMapInfoWindow0()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032BAE0
 * Size:	0000A4
 */
void WorldMapInfoWindow0::doCreateObj(JKRArchive* archive)
{
	ObjWorldMapInfoWindow0* obj = new ObjWorldMapInfoWindow0("WorldMapInfoWindow0 screen");
	registObj(obj, archive);
	Screen::DispMemberWorldMapInfoWin0* disp = reinterpret_cast<Screen::DispMemberWorldMapInfoWin0*>(m_dispMemberBuffer);
	if (disp->isID(OWNER_OGA, MEMBER_WORLD_MAP_INFO_WINDOW_0)) {
		setColorBG(0, 0, 0, disp->_20);
	}
}

/*
 * --INFO--
 * Address:	8032BB84
 * Size:	000008
 */
bool WorldMapInfoWindow0::doConfirmSetScene(::Screen::SetSceneArg&) { return true; }

/*
 * --INFO--
 * Address:	8032BB8C
 * Size:	000064
 */
int WorldMapInfoWindow0::doGetFinishState()
{
	Screen::DispMemberWorldMapInfoWin0* disp = reinterpret_cast<Screen::DispMemberWorldMapInfoWin0*>(m_dispMemberBuffer);
	int state                                = 0;
	if (disp->isID(OWNER_OGA, MEMBER_WORLD_MAP_INFO_WINDOW_0)) {
		state = disp->_08;
	}
	return state;
}

/*
 * --INFO--
 * Address:	8032BBF0
 * Size:	00000C
 */
const char* WorldMapInfoWindow0::getResName() const { return "res_world_map_info_window0.szs"; }

/*
 * --INFO--
 * Address:	8032BBFC
 * Size:	000008
 */
SceneType WorldMapInfoWindow0::getSceneType() { return SCENE_WORLD_MAP_INFO_WINDOW_0; }

/*
 * --INFO--
 * Address:	8032BC04
 * Size:	000014
 */
ScreenMemberID WorldMapInfoWindow0::getMemberID(void) { return MEMBER_WORLD_MAP_INFO_WINDOW_0; }

/*
 * --INFO--
 * Address:	8032BC18
 * Size:	000008
 */
bool WorldMapInfoWindow0::isUseBackupSceneInfo(void) { return false; }

} // namespace newScreen
} // namespace og
