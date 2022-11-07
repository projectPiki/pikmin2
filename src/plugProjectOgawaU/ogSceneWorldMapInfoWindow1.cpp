#include "og/newScreen/WorldMapInfoWindow.h"
#include "nans.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8032C208
 * Size:	00003C
 */
WorldMapInfoWindow1::WorldMapInfoWindow1() { }

/*
 * --INFO--
 * Address:	8032C244
 * Size:	0000A4
 */
void WorldMapInfoWindow1::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjWorldMapInfoWindow1("WorldMapInfoWindow1 screen"), archive);

	Screen::DispMemberWorldMapInfoWin1* disp = static_cast<Screen::DispMemberWorldMapInfoWin1*>(m_dispMember);
	if (disp->isID(OWNER_OGA, MEMBER_WORLD_MAP_INFO_WINDOW_1)) {
		setColorBG(0, 0, 0, disp->_0C);
	}
}

/*
 * --INFO--
 * Address:	8032C2E8
 * Size:	000008
 */
bool WorldMapInfoWindow1::doConfirmSetScene(::Screen::SetSceneArg&) { return true; }

/*
 * --INFO--
 * Address:	8032C2F0
 * Size:	000064
 */
int WorldMapInfoWindow1::doGetFinishState()
{
	Screen::DispMemberWorldMapInfoWin1* disp = static_cast<Screen::DispMemberWorldMapInfoWin1*>(m_dispMember);
	int state                                = 0;
	if (disp->isID(OWNER_OGA, MEMBER_WORLD_MAP_INFO_WINDOW_1)) {
		state = disp->_08;
	}
	return state;
}

} // namespace newScreen
} // namespace og
