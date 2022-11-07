#include "og/Screen/DispMember.h"
#include "og/newScreen/WorldMapInfoWindow.h"
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
 * Address:	8032BAE0
 * Size:	0000A4
 */
void WorldMapInfoWindow0::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjWorldMapInfoWindow0("WorldMapInfoWindow0 screen"), archive);

	Screen::DispMemberWorldMapInfoWin0* disp = static_cast<Screen::DispMemberWorldMapInfoWin0*>(m_dispMember);
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
	Screen::DispMemberWorldMapInfoWin0* disp = static_cast<Screen::DispMemberWorldMapInfoWin0*>(m_dispMember);
	int state                                = 0;
	if (disp->isID(OWNER_OGA, MEMBER_WORLD_MAP_INFO_WINDOW_0)) {
		state = disp->_08;
	}
	return state;
}

} // namespace newScreen
} // namespace og
