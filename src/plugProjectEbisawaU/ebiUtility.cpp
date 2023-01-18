#include "ebi/Utility.h"
#include "System.h"

namespace ebi {

/*
 * --INFO--
 * Address:	803C1A3C
 * Size:	000060
 */
void EUTPadInterface_countNum::init(Controller* controller, long arg1, long arg2, long* arg3, enumMode mode, f32 arg5, f32 arg6)
{
	m_controller  = controller;
	_10           = arg1;
	_14           = arg2;
	_18           = arg3;
	m_mode        = mode;
	m_timeFactor1 = arg5;
	m_timeFactor2 = arg6;
	m_counter     = 0;
	_08           = 0;

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
	if (m_counter) {
		m_counter--;
	}
	_0D = 0;

	bool isForwards;
	bool isBackwards;

	switch (m_mode) {
	case MODE_LEFTRIGHT:
		isForwards  = (m_controller->m_padButton.m_mask & Controller::PRESS_DPAD_LEFT) || (m_controller->m_padMStick.m_xPos < -0.5f);
		isBackwards = (m_controller->m_padButton.m_mask & Controller::PRESS_DPAD_RIGHT) || (m_controller->m_padMStick.m_xPos > 0.5f);
		break;
	case MODE_RIGHTLEFT:
		isForwards  = (m_controller->m_padButton.m_mask & Controller::PRESS_DPAD_RIGHT) || (m_controller->m_padMStick.m_xPos > 0.5f);
		isBackwards = (m_controller->m_padButton.m_mask & Controller::PRESS_DPAD_RIGHT) || (m_controller->m_padMStick.m_xPos < -0.5f);
		break;
	case MODE_UPDOWN:
		isForwards  = (m_controller->m_padButton.m_mask & Controller::PRESS_DPAD_UP) || (m_controller->m_padMStick.m_yPos > 0.5f);
		isBackwards = (m_controller->m_padButton.m_mask & Controller::PRESS_DPAD_DOWN) || (m_controller->m_padMStick.m_yPos < -0.5f);
		break;
	case MODE_DOWNUP:
		isForwards  = (m_controller->m_padButton.m_mask & Controller::PRESS_DPAD_DOWN) || (m_controller->m_padMStick.m_yPos < -0.5f);
		isBackwards = (m_controller->m_padButton.m_mask & Controller::PRESS_DPAD_UP) || (m_controller->m_padMStick.m_yPos > 0.5f);
		break;
	}

	if (isForwards) {
		if (!m_counter) {
			if (*_18 < _14) {
				_1C = *_18;
				*_18 += 1;
				_0D = 1;
				if (!m_isChanging) {
					m_isChanging = true;
					f32 time     = (m_timeFactor1 / sys->m_deltaTime);
					m_counter    = time;
					_08          = time;
					return;
				}
				f32 time  = (m_timeFactor2 / sys->m_deltaTime);
				m_counter = time;
				_08       = time;
			}
		}
	} else if (isBackwards) {
		if (m_counter == 0) {
			if (*_18 > _10) {
				_1C = *_18;
				*_18 -= 1;
				_0D = 1;
				if (!m_isChanging) {
					m_isChanging = true;
					f32 time     = (m_timeFactor1 / sys->m_deltaTime);
					m_counter    = time;
					_08          = time;
					return;
				}
				f32 time  = (m_timeFactor2 / sys->m_deltaTime);
				m_counter = time;
				_08       = time;
			}
		}
	} else {
		m_isChanging = false;
		m_counter    = 0;
		_08          = 0;
	}
}

/*
 * --INFO--
 * Address:	803C1DA0
 * Size:	000114
 */
void EUTColor_complement(JUtility::TColor& color1, JUtility::TColor& color2, f32 f1, f32 f2, JUtility::TColor* color3)
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
