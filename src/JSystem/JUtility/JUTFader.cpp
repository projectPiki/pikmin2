#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JUT/TColor.h"
#include "JSystem/JUT/JUTFader.h"
#include "types.h"

/*
 * --INFO--
 * Address:	8002CE5C
 * Size:	0000AC
 */
JUTFader::JUTFader(int p1, int p2, int p3, int p4, JUtility::TColor color)
    : m_color(color)
    , m_viewBox(p1, p2, p1 + p3, p2 + p4)
{
	m_status      = Status_Out;
	m_ticksTarget = 0;
	m_ticksRun    = 0;
	_24           = Status_Out;
	_20           = -1;
}

/*
 * --INFO--
 * Address:	8002CF08
 * Size:	000100
 */
void JUTFader::control()
{
	if (0 <= _20 && _20-- == 0) {
		m_status = _24;
	}
	if (m_status == Status_In) {
		return;
	}
	switch (m_status) {
	case Status_Out:
		m_color.a = 0xFF;
		break;
	case Status_FadingIn:
		// _0A++;
		m_color.a = 0xFF - ((++m_ticksRun * 0xFF) / m_ticksTarget);
		if (m_ticksRun >= m_ticksTarget) {
			m_status = Status_In;
		}
		break;
	case Status_FadingOut:
		// _0A++;
		m_color.a = ((++m_ticksRun * 0xFF) / m_ticksTarget);
		if (m_ticksRun >= m_ticksTarget) {
			m_status = Status_Out;
		}
		break;
	}
	draw();
}

/*
 * --INFO--
 * Address:	8002D008
 * Size:	000090
 */
void JUTFader::draw()
{
	if (m_color.a == 0) {
		return;
	}
	J2DOrthoGraph orthograph;
	orthograph.setColor(m_color);
	orthograph.fillBox(m_viewBox);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JUTFader::start(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002D098
 * Size:	000030
 */
bool JUTFader::startFadeIn(int duration)
{
	bool isStarting = (m_status == Status_Out);
	if (isStarting) {
		m_status      = Status_FadingIn;
		m_ticksRun    = 0;
		m_ticksTarget = duration;
	}
	return isStarting;
}

/*
 * --INFO--
 * Address:	8002D0C8
 * Size:	000034
 */
bool JUTFader::startFadeOut(int duration)
{
	bool isStarting = (m_status == Status_In);
	if (isStarting) {
		m_status      = Status_FadingOut;
		m_ticksRun    = 0;
		m_ticksTarget = duration;
	}
	return isStarting;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JUTFader::setStatus(JUTFader::EStatus, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002D0FC
 * Size:	000048
 * __dt__8JUTFaderFv
 */
// JUTFader::~JUTFader()
// {
// }
