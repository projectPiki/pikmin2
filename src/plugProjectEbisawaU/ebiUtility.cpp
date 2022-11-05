#include "ebi/Utility.h"
#include "System.h"

namespace ebi {

/*
 * --INFO--
 * Address:	803C1A3C
 * Size:	000060
 */
void EUTPadInterface_countNum::init(Controller* controller, long arg1, long arg2, long* arg3, enumMode mode, float arg5, float arg6)
{
	m_controller = controller;
	_10          = arg1;
	_14          = arg2;
	_18          = arg3;
	m_mode       = mode;
	_20          = arg5;
	_24          = arg6;
	_04          = 0;
	_08          = 0;

	if (*_18 < arg1) {
		*_18 = arg1;
	}
	if (*_18 > arg2) {
		*_18 = arg2;
	}
	_1C = *_18;
}

/*
 * --INFO--
 * Address:	803C1A9C
 * Size:	000304
 */
// TODO: https://decomp.me/scratch/zHh5R
void EUTPadInterface_countNum::update()
{
	if (_04 != 0) {
		_04 -= 1;
	}
	_0D = 0;

	bool isForwards;
	bool isBackwards;

	switch (m_mode) {
	case MODE_UNKNOWN_0:
		if ((m_controller->m_buttons.m_buttons.typeView & PRESS_DPAD_LEFT) || (m_controller->m_analogStick.x < -0.5f)) {
			isForwards = true;
		}
		if ((m_controller->m_buttons.m_buttons.typeView & PRESS_DPAD_RIGHT) || (m_controller->m_analogStick.x > 0.5f)) {
			isBackwards = true;
		} else {
			isBackwards = false;
		}
		break;
	case MODE_UNKNOWN_1:
		if ((m_controller->m_buttons.m_buttons.typeView & PRESS_DPAD_RIGHT) || (m_controller->m_analogStick.x > 0.5f)) {
			isForwards = true;
		}
		if ((m_controller->m_buttons.m_buttons.typeView & PRESS_DPAD_RIGHT) || (m_controller->m_analogStick.x < -0.5f)) {
			isBackwards = true;
		} else {
			isBackwards = false;
		}
		break;
	case MODE_UNKNOWN_2:
		if ((m_controller->m_buttons.m_buttons.typeView & PRESS_DPAD_UP) || (m_controller->m_analogStick.z > 0.5f)) {
			isForwards = true;
		}
		if ((m_controller->m_buttons.m_buttons.typeView & PRESS_DPAD_DOWN) || (m_controller->m_analogStick.z < -0.5f)) {
			isBackwards = true;
		} else {
			isBackwards = false;
		}
		break;
	case MODE_UNKNOWN_3:
		if ((m_controller->m_buttons.m_buttons.typeView & PRESS_DPAD_DOWN) || (m_controller->m_analogStick.z < -0.5f)) {
			isForwards = true;
		}
		if ((m_controller->m_buttons.m_buttons.typeView & PRESS_DPAD_UP) || (m_controller->m_analogStick.z > 0.5f)) {
			isBackwards = true;
		} else {
			isBackwards = false;
		}
		break;
	default:
		break;
	}

	if (isForwards) {
		if (_04 == 0) {
			if (*_18 < _14) {
				_1C = *_18;
				*_18 += 1;
				_0D = 1;
				if (_0C == 0) {
					_0C           = 1;
					f32 temp_r3_3 = (_20 / sys->m_deltaTime);
					_04           = temp_r3_3;
					_08           = temp_r3_3;
					return;
				}
				f32 temp_r3_4 = (_24 / sys->m_deltaTime);
				_04           = temp_r3_4;
				_08           = temp_r3_4;
			}
		}
	} else if (isBackwards) {
		if (_04 == 0) {
			if (*_18 > _10) {
				_1C = *_18;
				*_18 -= 1;
				_0D = 1;
				if (_0C == 0) {
					_0C           = 1;
					f32 temp_r3_6 = (_20 / sys->m_deltaTime);
					_04           = temp_r3_6;
					_08           = temp_r3_6;
					return;
				}
				f32 temp_r3_7 = (_24 / sys->m_deltaTime);
				_04           = temp_r3_7;
				_08           = temp_r3_7;
			}
		}
	} else {
		_0C = 0;
		_04 = 0;
		_08 = 0;
	}
}

/*
 * --INFO--
 * Address:	803C1DA0
 * Size:	000114
 */
void EUTColor_complement(JUtility::TColor& color1, JUtility::TColor& color2, float f1, float f2, JUtility::TColor* color3)
{
	color3->r = f1 * color1.r + f2 * color2.r;
	color3->g = f1 * color1.g + f2 * color2.g;
	color3->b = f1 * color1.b + f2 * color2.b;
	color3->a = f1 * color1.a + f2 * color2.a;
}

/*
 * --INFO--
 * Address:	803C1EB4
 * Size:	000004
 */
void EUTDebug_Tag64ToName(u64, char*) { }

/*
 * --INFO--
 * Address:	803C1EB8
 * Size:	000004
 */
void EUTDebug_Tag32ToName(u32, char*) { }
} // namespace ebi
