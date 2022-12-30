#include "og/newScreen/ogUtil.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/TotalPokoScreen.h"
#include "og/Sound.h"
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
	m_displayPokoCount  = m_currentPokoCount;
	m_callBackCounterRV = nullptr;
	m_pane              = nullptr;
	_160                = 0.0f;
	m_standardPos.x     = 0.0f;
	m_standardPos.y     = 0.0f;
	m_currPos.x         = 0.0f;
	m_currPos.y         = 0.0f;
	m_timer             = 0.0f;
	m_needAdd           = false;
	m_scaleMgr          = new ScaleMgr;
}

/*
 * --INFO--
 * Address:	8032C44C
 * Size:	000070
 */
void TotalPokoScreen::showTotalPoko()
{
	if (!m_isOpen) {
		m_isOpen  = true;
		m_timer   = 0.8f;
		m_needAdd = true;

		if (!newScreen::checkMovieActive()) {
			ogSound->setOpenTotalPoko();
		}

		m_displayPokoCount = m_previousPokoCount;
		m_pane->show();
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

	if (m_isOpen && m_timer <= 0.0f && !m_needAdd) {
		m_needAdd = true;

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
void TotalPokoScreen::hideTotalPoko() { m_pane->hide(); }

/*
 * --INFO--
 * Address:	8032C580
 * Size:	000138
 */
void TotalPokoScreen::setCallBack(JKRArchive* archive, f32 x, f32 y, f32 scaleX, f32 scaleY)
{
	m_callBackCounterRV = setCallBack_CounterRV(this, 'Ppoko01', &m_displayPokoCount, 10, false, true, archive);
	m_pane              = search('Npoko');
	_160                = 0.0f;
	m_standardPos.x     = x + m_pane->m_offset.x;
	m_standardPos.y     = y + m_pane->m_offset.y;
	m_currPos.x         = m_standardPos.x;
	m_currPos.y         = m_standardPos.y;

	m_pane->move(m_currPos.x, m_currPos.y);
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
		m_timer -= sys->m_deltaTime;

		if (m_currPos.y < m_standardPos.y) {
			m_currPos.y += 20.0f;

			if (m_currPos.y >= m_standardPos.y) {
				m_currPos.y = m_standardPos.y;
				m_scaleMgr->up(0.3f, 20.0f, 0.5f, 0.0f);
			}
		}

		if (m_timer < 0.0f) {
			m_timer = 0.0f;

			if (m_needAdd) {
				m_displayPokoCount = m_currentPokoCount;
				m_callBackCounterRV->startPuyoUp(20.0f);

				if (!newScreen::checkMovieActive()) {
					ogSound->setPlusTotalPoko();
				}

				m_needAdd = false;
			}
		}
	} else {
		if (m_currPos.y > -80.0f) {
			m_currPos.y -= 20.0f;
		}
	}

	m_pane->updateScale(m_scaleMgr->calc());
	m_pane->move(m_currPos.x, m_currPos.y);
}
} // namespace Screen
} // namespace og
