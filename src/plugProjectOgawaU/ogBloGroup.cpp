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
BloGroup::BloGroup(unsigned short count)
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
BloGroup::~BloGroup(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F020
 * Size:	0000A0
 */
u32 BloGroup::addBlo(char* screename, P2DScreen::Mgr_tuning* screen, unsigned long flag, JKRArchive* arc)
{
	int count = m_screenNumCurrent;
	if (m_screenNumCurrent >= m_screenNumMax) {
		return -1;
	} else {
		m_screens[m_screenNumCurrent] = screen;
		screen->set(screename, flag, arc);
		_04[m_screenNumCurrent] = 0;
		og::Screen::setAlphaScreen(screen);
		m_screenNumCurrent++;
	}
	return count;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void BloGroup::setScissor(int, float, float, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void BloGroup::translate(float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F0C0
 * Size:	000044
 */
void BloGroup::scale(float scale)
{
	for (int i = 0; i < m_screenNumCurrent; i++) {
		P2DScreen::Mgr_tuning* screen = m_screens[i];
		screen->m_screenScaleX        = scale * P2DScreen::Mgr_tuning::mstTuningScaleX;
		screen->m_screenScaleY        = scale * P2DScreen::Mgr_tuning::mstTuningScaleY;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void BloGroup::setAlpha(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F104
 * Size:	0000A4
 */
void BloGroup::rotate(float axisX, float axisY, J2DRotateAxis type, float angle)
{
	for (int i = 0; i < m_screenNumCurrent; i++) {
		P2DScreen::Mgr_tuning* screen = m_screens[i];
		screen->rotate(axisX, axisY, type, angle);
	}
}

/*
 * --INFO--
 * Address:	8030F1A8
 * Size:	000070
 */
void BloGroup::update(void)
{
	for (int i = 0; i < m_screenNumCurrent; i++) {
		P2DScreen::Mgr_tuning* screen = m_screens[i];
		screen->update();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void BloGroup::animation(void)
{
	// UNUSED FUNCTION
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
		P2DScreen::Mgr_tuning* screen = m_screens[i];
		screen->draw(gfx, *graf);
	}
}

} // namespace Screen
} // namespace og

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
// Graphics::~Graphics()
//{
// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	8030F300
 * Size:	000004
 */
void Graphics::doJ3DDrawInit() { }

/*
 * --INFO--
 * Address:	8030F304
 * Size:	000004
 */
void Graphics::doJ3DDraw(int) { }

/*
 * --INFO--
 * Address:	8030F308
 * Size:	000004
 */
void Graphics::doJ3DFrameInit() { }

/*
 * --INFO--
 * Address:	8030F30C
 * Size:	000004
 */
void Graphics::doJ3DAnimation() { }

/*
 * --INFO--
 * Address:	8030F310
 * Size:	000004
 */
void Graphics::doJ3DUpdateInit() { }

/*
 * --INFO--
 * Address:	8030F314
 * Size:	000004
 */
void Graphics::doJ3DSetView(int) { }

/*
 * --INFO--
 * Address:	8030F318
 * Size:	000004
 */
void Graphics::doJ3DViewCalc() { }
