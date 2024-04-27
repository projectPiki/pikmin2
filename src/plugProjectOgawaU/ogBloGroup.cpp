#include "Graphics.h"
#include "og/Screen/BloGroup.h"
#include "og/Screen/ogScreen.h"

namespace og {
namespace Screen {

/**
 * @note Address: 0x8030EF88
 * @note Size: 0x98
 */
BloGroup::BloGroup(u16 count)
{
	mScreens      = new P2DScreen::Mgr_tuning*[count];
	mUnusedIdList = new u32[count];

	mScreenNumMax     = count;
	mScreenNumCurrent = 0;

	for (int i = 0; i < mScreenNumMax; i++) {
		mScreens[i]      = nullptr;
		mUnusedIdList[i] = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xB4
 */
BloGroup::~BloGroup() { }

/**
 * @note Address: 0x8030F020
 * @note Size: 0xA0
 */
u32 BloGroup::addBlo(char* screenName, P2DScreen::Mgr_tuning* screen, u32 flag, JKRArchive* arc)
{
	int count = mScreenNumCurrent;
	if (mScreenNumCurrent >= mScreenNumMax) {
		return -1;

	} else {
		mScreens[mScreenNumCurrent] = screen;
		screen->set(screenName, flag, arc);
		mUnusedIdList[mScreenNumCurrent] = 0;
		og::Screen::setAlphaScreen(screen);
		mScreenNumCurrent++;
	}

	return count;
}

/**
 * @note Address: 0x8030F0C0
 * @note Size: 0x44
 */
void BloGroup::scale(f32 scale)
{
	for (int i = 0; i < mScreenNumCurrent; i++) {
		mScreens[i]->scaleScreen(scale);
	}
}

/**
 * @note Address: 0x8030F104
 * @note Size: 0xA4
 */
void BloGroup::rotate(f32 axisX, f32 axisY, J2DRotateAxis type, f32 angle)
{
	for (int i = 0; i < mScreenNumCurrent; i++) {
		mScreens[i]->rotate(axisX, axisY, type, angle);
	}
}

/**
 * @note Address: 0x8030F1A8
 * @note Size: 0x70
 */
void BloGroup::update()
{
	for (int i = 0; i < mScreenNumCurrent; i++) {
		mScreens[i]->update();
	}
}

/**
 * @note Address: 0x8030F218
 * @note Size: 0xE8
 */
void BloGroup::draw(J2DPerspGraph* graf)
{
	Graphics gfx;
	for (int i = 0; i < mScreenNumCurrent; i++) {
		mScreens[i]->draw(gfx, *graf);
	}
}

} // namespace Screen
} // namespace og
