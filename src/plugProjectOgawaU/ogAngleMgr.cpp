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
		_00          = 0.0f;
		_04          = 0.0f;
		_08          = 0.0f;
		m_interpRate = 0.3f;
		m_scale      = 1.0f;
		m_state      = AGM_Start;
	}

	/*
	 * --INFO--
	 * Address:	803302B8
	 * Size:	000010
	 */
	void AngleMgr::init(float f1, float f2, float f3)
	{
		_00          = f1;
		m_interpRate = f2;
		m_scale      = f3;
	}

	/*
	 * --INFO--
	 * Address:	803302C8
	 * Size:	000080
	 */
	void AngleMgr::chase(float f1, float f2)
	{
		// Wrap _08 angle to (0, TAU)
		_08 = f1;
		while (_08 < 0.0f) {
			_08 += TAU;
		}

		while (_08 > TAU) {
			_08 -= TAU;
		}

		// Wrap _04 angle to (-HALF_PI, HALF_PI)
		_04 = f2;
		if (_04 > HALF_PI) {
			_04 = HALF_PI;
		}
		if (_04 < -HALF_PI) {
			_04 = -HALF_PI;
		}

		m_state = AGM_Chase;
	}

	/*
	 * --INFO--
	 * Address:	80330348
	 * Size:	0001A8
	 */
	float AngleMgr::calc(void)
	{
		if (m_state == AGM_Chase) {
			_00 += _04;

			if (_00 < 0.0f) {
				_00 += TAU;
			} else if (_00 >= TAU) {
				_00 = (_00 - TAU);
			}

			float f1 = (_08 - _00);
			if (FABS(f1) > PI) {
				float f2 = TAU - FABS(f1);
				if (f1 > 0.0f) {
					if ((_04 > 0.0f) && (f2 > FABS(_04 * m_scale))) {
						_04 = (-_04 * m_interpRate);
					}
				} else if ((_04 < 0.0f) && (f2 > FABS(_04 * m_scale))) {
					_04 = (-_04 * m_interpRate);
				}
			} else {
				float f2 = FABS(f1);
				if (f1 > 0.0f) {
					if ((_04 < 0.0f) && (f2 > FABS(_04 * m_scale))) {
						_04 = (-_04 * m_interpRate);
					}
				} else if ((_04 > 0.0f) && (f2 > FABS(_04 * m_scale))) {
					_04 = (-_04 * m_interpRate);
				}
			}

			if (FABS(_04) < 0.001f) {
				m_state = AGM_Finish;
				_00     = _08;
				_04     = 0.0f;
			}
		}

		return _00;
	}
} // namespace Screen
} // namespace og
