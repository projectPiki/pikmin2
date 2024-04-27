#include "og/newScreen/WorldMapInfoWindow.h"
#include "nans.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x8032C208
 * @note Size: 0x3C
 */
WorldMapInfoWindow1::WorldMapInfoWindow1() { }

/**
 * @note Address: 0x8032C244
 * @note Size: 0xA4
 */
void WorldMapInfoWindow1::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjWorldMapInfoWindow1("WorldMapInfoWindow1 screen"), archive);

	Screen::DispMemberWorldMapInfoWin1* disp = static_cast<Screen::DispMemberWorldMapInfoWin1*>(mDispMember);
	if (disp->isID(OWNER_OGA, MEMBER_WORLD_MAP_INFO_WINDOW_1)) {
		setColorBG(0, 0, 0, disp->mBgAlpha);
	}
}

/**
 * @note Address: 0x8032C2E8
 * @note Size: 0x8
 */
bool WorldMapInfoWindow1::doConfirmSetScene(::Screen::SetSceneArg&) { return true; }

/**
 * @note Address: 0x8032C2F0
 * @note Size: 0x64
 */
int WorldMapInfoWindow1::doGetFinishState()
{
	Screen::DispMemberWorldMapInfoWin1* disp = static_cast<Screen::DispMemberWorldMapInfoWin1*>(mDispMember);
	int state                                = 0;
	if (disp->isID(OWNER_OGA, MEMBER_WORLD_MAP_INFO_WINDOW_1)) {
		state = disp->mResult;
	}
	return state;
}

} // namespace newScreen
} // namespace og
