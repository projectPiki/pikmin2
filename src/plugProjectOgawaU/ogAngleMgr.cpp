#include "types.h"

#include "og/Screen/AngleMgr.h"
#include "Dolphin/math.h"

namespace og {
namespace Screen {
/*
 * --INFO--
 * Address:	8033028C
 * Size:	00002C
 */
AngleMgr::AngleMgr()
{
	m_currentAngle = 0.0f;
	m_angleStep    = 0.0f;
	m_targetAngle  = 0.0f;
	m_interpRate   = 0.3f;
	m_scale        = 1.0f;
	m_state        = AGM_Start;
}

/*
 * --INFO--
 * Address:	803302B8
 * Size:	000010
 */
void AngleMgr::init(float curAngle, float interpRate, float scale)
{
	m_currentAngle = curAngle;
	m_interpRate   = interpRate;
	m_scale        = scale;
}

/*
 * --INFO--
 * Address:	803302C8
 * Size:	000080
 */
void AngleMgr::chase(float target, float step)
{
	// Wrap to (0, TAU)
	m_targetAngle = target;
	while (m_targetAngle < 0.0f) {
		m_targetAngle += TAU;
	}

	while (m_targetAngle > TAU) {
		m_targetAngle -= TAU;
	}

	// Wrap to (-HALF_PI, HALF_PI)
	m_angleStep = step;
	if (m_angleStep > HALF_PI) {
		m_angleStep = HALF_PI;
	}
	if (m_angleStep < -HALF_PI) {
		m_angleStep = -HALF_PI;
	}

	m_state = AGM_Chase;
}

/*
 * --INFO--
 * Address:	80330348
 * Size:	0001A8
 */
float AngleMgr::calc()
{
	if (m_state == AGM_Chase) {
		m_currentAngle += m_angleStep;

		if (m_currentAngle < 0.0f) {
			m_currentAngle += TAU;
		} else if (m_currentAngle >= TAU) {
			m_currentAngle = (m_currentAngle - TAU);
		}

		f32 distance = m_targetAngle - m_currentAngle;
		if (FABS(distance) > PI) {
			// TODO: figure out what f2 is!
			f32 f2 = TAU - FABS(distance);
			if (distance > 0.0f) {
				if ((m_angleStep > 0.0f) && (f2 > FABS(m_angleStep * m_scale))) {
					m_angleStep = (-m_angleStep * m_interpRate);
				}
			} else if ((m_angleStep < 0.0f) && (f2 > FABS(m_angleStep * m_scale))) {
				m_angleStep = (-m_angleStep * m_interpRate);
			}
		} else {
			f32 f2 = FABS(distance);
			if (distance > 0.0f) {
				if ((m_angleStep < 0.0f) && (f2 > FABS(m_angleStep * m_scale))) {
					m_angleStep = (-m_angleStep * m_interpRate);
				}
			} else if ((m_angleStep > 0.0f) && (f2 > FABS(m_angleStep * m_scale))) {
				m_angleStep = (-m_angleStep * m_interpRate);
			}
		}

		if (FABS(m_angleStep) < 0.001f) {
			m_state        = AGM_Finish;
			m_currentAngle = m_targetAngle;
			m_angleStep    = 0.0f;
		}
	}

	return m_currentAngle;
}
} // namespace Screen
} // namespace og
