#include "og/Screen/ScaleMgr.h"
#include "sysMath.h"
#include "System.h"
#include "trig.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80328E04
 * Size:	000044
 */
ScaleMgr::ScaleMgr()
    : m_state(SCM_Unknown_0)
{
	setParam(1.0f, 1.0f, 1.0f);
}

/*
 * --INFO--
 * Address:	80328E48
 * Size:	000048
 */
void ScaleMgr::up()
{
	m_state = SCM_Growing;
	setParam(0.5f, 30.0f, 0.8f);
	_18 = 0.0f;
}

/*
 * --INFO--
 * Address:	80328E90
 * Size:	000048
 */
void ScaleMgr::down()
{
	m_state = SCM_Shrinking;
	setParam(0.25f, 35.0f, 0.8f);
	_18 = 0.0f;
}

/*
 * --INFO--
 * Address:	80328ED8
 * Size:	000064
 */
void ScaleMgr::up(f32 p1, f32 periodModifier, f32 durationInSeconds, f32 p4)
{
	setParam(p1, periodModifier, durationInSeconds);
	_18 = p4;
	if (p4 < 0.01f) {
		m_state = SCM_Growing;
	} else {
		m_state = SCM_OtherGrowingMaybe;
	}
}

/*
 * --INFO--
 * Address:	80328F3C
 * Size:	000028
 */
void ScaleMgr::down(f32 p1, f32 periodModifier, f32 durationInSeconds)
{
	m_state = SCM_Shrinking;
	setParam(p1, periodModifier, durationInSeconds);
}

/*
 * --INFO--
 * Address:	80328F64
 * Size:	000020
 */
void ScaleMgr::setParam(f32 p1, f32 periodModifier, f32 durationInSeconds)
{
	m_elapsedSeconds    = 0.0f;
	m_scale             = 1.0f;
	_0C                 = p1;
	m_periodModifier    = periodModifier;
	m_durationInSeconds = durationInSeconds;
}

/*
 * --INFO--
 * Address:	80328F84
 * Size:	00020C
 */
f32 ScaleMgr::calc()
{
	switch (m_state) {
	case SCM_Unknown_0:
		m_scale = 1.0f;
		break;

	case SCM_Growing:
		m_elapsedSeconds += sys->m_deltaTime;
		if (m_elapsedSeconds > m_durationInSeconds) {
			m_state          = SCM_Unknown_0;
			m_scale          = 1.0f;
			m_elapsedSeconds = 0.0f;
		} else {
			f32 sin = pikmin2_sinf(m_elapsedSeconds * m_periodModifier);
			m_scale = (m_durationInSeconds - m_elapsedSeconds) * (_0C * sin + _0C) + 1.0f;
		}
		break;

	case SCM_Shrinking:
		m_elapsedSeconds += sys->m_deltaTime;
		if (m_elapsedSeconds > m_durationInSeconds) {
			m_state          = SCM_Unknown_0;
			m_scale          = 1.0f;
			m_elapsedSeconds = 0.0f;
		} else {
			f32 sin = pikmin2_sinf(m_elapsedSeconds * m_periodModifier);
			m_scale = -((m_durationInSeconds - m_elapsedSeconds) * (_0C * sin + _0C) - 1.0f);
		}
		break;

	case SCM_OtherGrowingMaybe:
		m_scale = 1.0f;
		_18 -= sys->m_deltaTime;
		if (_18 < 0.0f) {
			m_state = SCM_Growing;
			_18     = 0.0f;
		}
		break;

	default:
		m_scale = 1.0f;
	}

	return m_scale;
}

} // namespace Screen
} // namespace og
