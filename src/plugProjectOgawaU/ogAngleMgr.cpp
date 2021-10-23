#include "og/Screen/AngleMgr.h"

namespace og {
namespace Screen {

	/*
	 * --INFO--
	 * Address:	8033028C
	 * Size:	00002C
	 */
	AngleMgr::AngleMgr(void)
	{
		_00 = 0.0f;
		_04 = 0.0f;
		_08 = 0.0f;
		_0C = 0.3f;
		_10 = 1.0f;
		_14 = 0;
	}

	/*
	 * --INFO--
	 * Address:	803302B8
	 * Size:	000010
	 */
	void AngleMgr::init(float f1, float f2, float f3)
	{
		_00 = f1;
		_0C = f2;
		_10 = f3;
	}

	/*
	 * --INFO--
	 * Address:	803302C8
	 * Size:	000080
	 */
	void AngleMgr::chase(float f1, float f2)
	{
		{
			_08 = f1;
			while (_08 < 0.0f) {
				_08 += TAU;
			}
			while (_08 > TAU) {
				_08 -= TAU;
			}
			_04 = f2;
			if (_04 > HPI) {
				_04 = HPI;
			}
			if (_04 < NEG_HPI) {
				_04 = NEG_HPI;
			}
			_14 = 1;
		}
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000030
	 */
	void AngleMgr::reverseSpeed(float)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80330348
	 * Size:	0001A8
	 */
	float AngleMgr::calc(void)
	{
		float f1;
		float f2;

		if (_14 == 1) {
			_00 += _04;
			f1 = _00;
			if (0.0f <= f1) {
				if (TAU <= f1) {
					_00 = (f1 - TAU);
				}
			} else {
				_00 = (f1 + TAU);
			}
			f1 = (_08 - _00);
			f2 = __fabs(f1);
			if (f2 <= PI) {
				if (f1 <= 0.0f) {
					f1 = _04;
					if ((0.0f < f1) && (__fabs(f1 * _10) < f2)) {
						_04 = (-f1 * _0C);
					}
				} else {
					f1 = _04;
					if ((f1 < 0.0f) && (__fabs(f1 * _10) < f2)) {
						_04 = (-f1 * _0C);
					}
				}
			} else {
				if (f1 <= 0.0f) {
					f1 = _04;
					if ((f1 < 0.0f) && (__fabs(f1 * _10) < (TAU - f2))){
						_04 = (-f1 * _0C);
					}
				} else {
				f1 = _04;
					if ((0.0f < f1) && (__fabs(f1 * _10) < (TAU - f2))) {
					_04 = (-f1 * _0C);
					}
				}
			}
			if (float(__fabs(_04)) < 0.001f) {
				_14 = 2;
				_00 = _08;
				_04 = 0.0f;
			}
		}
		return _00;
	}
} // namespace Screen
} // namespace og
