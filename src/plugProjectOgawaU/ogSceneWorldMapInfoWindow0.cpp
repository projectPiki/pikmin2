#include "og/Screen/DispMember.h"
#include "og/newScreen/WorldMapInfoWindow.h"
#include "nans.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x8032BAA4
 * @note Size: 0x3C
 */
WorldMapInfoWindow0::WorldMapInfoWindow0()
    : SMenuPauseVS()
{
}

/**
 * @note Address: 0x8032BAE0
 * @note Size: 0xA4
 */
void WorldMapInfoWindow0::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjWorldMapInfoWindow0("WorldMapInfoWindow0 screen"), archive);

	Screen::DispMemberWorldMapInfoWin0* disp = static_cast<Screen::DispMemberWorldMapInfoWin0*>(mDispMember);
	if (disp->isID(OWNER_OGA, MEMBER_WORLD_MAP_INFO_WINDOW_0)) {
		setColorBG(0, 0, 0, disp->mBgAlpha);
	}
}

/**
 * @note Address: 0x8032BB84
 * @note Size: 0x8
 */
bool WorldMapInfoWindow0::doConfirmSetScene(::Screen::SetSceneArg&) { return true; }

/**
 * @note Address: 0x8032BB8C
 * @note Size: 0x64
 */
int WorldMapInfoWindow0::doGetFinishState()
{
	Screen::DispMemberWorldMapInfoWin0* disp = static_cast<Screen::DispMemberWorldMapInfoWin0*>(mDispMember);
	int state                                = 0;
	if (disp->isID(OWNER_OGA, MEMBER_WORLD_MAP_INFO_WINDOW_0)) {
		state = disp->mResult;
	}
	return state;
}

} // namespace newScreen
} // namespace og
