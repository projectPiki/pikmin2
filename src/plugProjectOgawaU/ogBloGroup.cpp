#include "Graphics.h"
#include "og/Screen/BloGroup.h"
#include "og/Screen/ogScreen.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8030EF88
 * Size:	000098
 */
BloGroup::BloGroup(u16 count)
{
	mScreens = new P2DScreen::Mgr_tuning*[count];
	_04      = new u32[count];

	mScreenNumMax     = count;
	mScreenNumCurrent = 0;

	for (int i = 0; i < mScreenNumMax; i++) {
		mScreens[i] = nullptr;
		_04[i]      = 0;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
BloGroup::~BloGroup() { }

/*
 * --INFO--
 * Address:	8030F020
 * Size:	0000A0
 */
u32 BloGroup::addBlo(char* screenName, P2DScreen::Mgr_tuning* screen, u32 flag, JKRArchive* arc)
{
	int count = mScreenNumCurrent;
	if (mScreenNumCurrent >= mScreenNumMax) {
		return -1;

	} else {
		mScreens[mScreenNumCurrent] = screen;
		screen->set(screenName, flag, arc);
		_04[mScreenNumCurrent] = 0;
		og::Screen::setAlphaScreen(screen);
		mScreenNumCurrent++;
	}

	return count;
}

/*
 * --INFO--
 * Address:	8030F0C0
 * Size:	000044
 */
void BloGroup::scale(f32 scale)
{
	for (int i = 0; i < mScreenNumCurrent; i++) {
		mScreens[i]->scaleScreen(scale);
	}
}

/*
 * --INFO--
 * Address:	8030F104
 * Size:	0000A4
 */
void BloGroup::rotate(f32 axisX, f32 axisY, J2DRotateAxis type, f32 angle)
{
	for (int i = 0; i < mScreenNumCurrent; i++) {
		mScreens[i]->rotate(axisX, axisY, type, angle);
	}
}

/*
 * --INFO--
 * Address:	8030F1A8
 * Size:	000070
 */
void BloGroup::update()
{
	for (int i = 0; i < mScreenNumCurrent; i++) {
		mScreens[i]->update();
	}
}

/*
 * --INFO--
 * Address:	8030F218
 * Size:	0000E8
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
