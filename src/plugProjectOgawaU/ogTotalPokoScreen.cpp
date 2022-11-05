#include "og/newScreen/ogUtil.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/TotalPokoScreen.h"
#include "og/Sound.h"
#include "P2DScreen.h"
#include "System.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8032C3AC
 * Size:	0000A0
 */
TotalPokoScreen::TotalPokoScreen()
{
	m_isOpen            = false;
	m_currentPokoCount  = 2469;
	m_previousPokoCount = m_currentPokoCount;
	_150                = m_currentPokoCount;
	m_callBackCounterRV = nullptr;
	m_pane              = nullptr;
	_160                = 0.0f;
	_164                = 0.0f;
	_168                = 0.0f;
	_16C                = 0.0f;
	_170                = 0.0f;
	_174                = 0.0f;
	_178                = false;
	m_scaleMgr          = new ScaleMgr();
}

/*
 * --INFO--
 * Address:	8032C44C
 * Size:	000070
 */
void TotalPokoScreen::showTotalPoko()
{
	if (!m_isOpen) {
		m_isOpen = true;
		_174     = 0.8f;
		_178     = true;

		if (!newScreen::checkMovieActive()) {
			ogSound->setOpenTotalPoko();
		}

		_150                = m_previousPokoCount;
		m_pane->m_isVisible = true;
	}
}

/*
 * --INFO--
 * Address:	8032C4BC
 * Size:	000070
 */
void TotalPokoScreen::setTotalPoko(u32 newPokoCount)
{
	m_previousPokoCount = m_currentPokoCount;
	m_currentPokoCount  = newPokoCount;

	if (m_isOpen && _174 <= 00 && _178 == false) {
		_178 = true;

		if (!newScreen::checkMovieActive()) {
			ogSound->setPlusTotalPoko();
		}
	}
}

/*
 * --INFO--
 * Address:	8032C52C
 * Size:	000044
 */
void TotalPokoScreen::closeTotalPoko()
{
	if (m_isOpen) {
		ogSound->setCloseTotalPoko();
		m_isOpen = false;
	}
}

/*
 * --INFO--
 * Address:	8032C570
 * Size:	000010
 */
void TotalPokoScreen::hideTotalPoko() { m_pane->m_isVisible = false; }

/*
 * --INFO--
 * Address:	8032C580
 * Size:	000138
 */
void TotalPokoScreen::setCallBack(JKRArchive* archive, float x, float y, float scaleX, float scaleY)
{
	m_callBackCounterRV = setCallBack_CounterRV(this, 'Ppoko01', &_150, 10, false, true, archive);
	m_pane              = search('Npoko');
	_160                = 0.0f;
	_164                = x + m_pane->_0D4.x;
	_168                = y + m_pane->_0D4.y;
	_16C                = _164;
	_170                = _168;

	m_pane->move(_16C, _170);
	J2DPane* pane   = m_pane;
	pane->m_scale.x = scaleX;
	pane->m_scale.y = scaleY;
	pane->calcMtx();
}

/*
 * --INFO--
 * Address:	8032C6B8
 * Size:	000144
 */
void TotalPokoScreen::update()
{
	P2DScreen::Mgr::update();

	if (m_isOpen) {
		_174 -= sys->m_deltaTime;

		if (_170 < _168) {
			_170 += 20.0f;

			if (_170 >= _168) {
				_170 = _168;
				m_scaleMgr->up(0.3f, 20.0f, 0.5f, 0.0f);
			}
		}

		if (_174 < 0.0f) {
			_174 = 0.0f;

			if (_178) {
				_150 = m_currentPokoCount;
				m_callBackCounterRV->startPuyoUp(20.0f);

				if (!newScreen::checkMovieActive()) {
					ogSound->setPlusTotalPoko();
				}

				_178 = false;
			}
		}
	} else {
		if (_170 > -80.0f) {
			_170 -= 20.0f;
		}
	}

	f32 scale       = m_scaleMgr->calc();
	J2DPane* pane   = m_pane;
	pane->m_scale.x = scale;
	pane->m_scale.y = scale;
	pane->calcMtx();
	m_pane->move(_16C, _170);
}
} // namespace Screen
} // namespace og
