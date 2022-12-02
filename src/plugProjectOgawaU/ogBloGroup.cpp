#include "Graphics.h"
#include "types.h"
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
	m_screens = new P2DScreen::Mgr_tuning*[count];
	_04       = new u32[count];

	m_screenNumMax     = count;
	m_screenNumCurrent = 0;

	for (int i = 0; i < m_screenNumMax; i++) {
		m_screens[i] = nullptr;
		_04[i]       = 0;
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
	int count = m_screenNumCurrent;
	if (m_screenNumCurrent >= m_screenNumMax) {
		return -1;

	} else {
		m_screens[m_screenNumCurrent] = screen;
		screen->set(screenName, flag, arc);
		_04[m_screenNumCurrent] = 0;
		og::Screen::setAlphaScreen(screen);
		m_screenNumCurrent++;
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
	for (int i = 0; i < m_screenNumCurrent; i++) {
		m_screens[i]->scaleScreen(scale);
	}
}

/*
 * --INFO--
 * Address:	8030F104
 * Size:	0000A4
 */
void BloGroup::rotate(f32 axisX, f32 axisY, J2DRotateAxis type, f32 angle)
{
	for (int i = 0; i < m_screenNumCurrent; i++) {
		m_screens[i]->rotate(axisX, axisY, type, angle);
	}
}

/*
 * --INFO--
 * Address:	8030F1A8
 * Size:	000070
 */
void BloGroup::update()
{
	for (int i = 0; i < m_screenNumCurrent; i++) {
		m_screens[i]->update();
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
	for (int i = 0; i < m_screenNumCurrent; i++) {
		m_screens[i]->draw(gfx, *graf);
	}
}

} // namespace Screen
} // namespace og