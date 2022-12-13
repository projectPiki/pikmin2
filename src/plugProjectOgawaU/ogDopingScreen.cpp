#include "types.h"
#include "og/Screen/DopingScreen.h"
#include "efx2d/TSimple.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/Sound.h"
#include "og/newScreen/ogUtil.h"
#include "efx2d/T2DSprayset.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8030360C
 * Size:	0000F4
 */
DopingScreen::DopingScreen()
{
	m_dopingCheck    = new DopingCheck;
	m_paneAll        = nullptr;
	m_paneSpray0     = nullptr;
	m_paneSpray1     = nullptr;
	m_paneJujiKey    = nullptr;
	m_offset.x       = 0.0f;
	m_offset.y       = 0.0f;
	m_rootPosition.x = 0.0f;
	m_rootPosition.y = 0.0f;
	m_dope0Enabled   = false;
	m_dope1Enabled   = false;
	m_gottenSpray0   = false;
	m_gottenSpray1   = false;
	m_gottenJujiKey  = false;
	m_scaleSpray0Get = 0.0f;
	m_scaleSpray1Get = 0.0f;
	m_scaleJujiKey   = 0.0f;
	m_scaleMgr1      = new ScaleMgr;
	m_scaleMgr2      = new ScaleMgr;
	m_scaleMgr3      = new ScaleMgr;
}

/*
 * --INFO--
 * Address:	80303700
 * Size:	0002CC
 */
void DopingScreen::setCallBack(JKRArchive* arc)
{
	m_paneAll = og::Screen::TagSearch(this, 'Nall');

	J2DPane* temp1 = og::Screen::TagSearch(this, 'toyo_13');
	J2DPane* temp2 = og::Screen::TagSearch(this, 'toyo_12');
	m_dopingCheck->init(temp1, temp2, m_scaleMgr1, m_scaleMgr2);

	m_paneBottleR = og::Screen::TagSearch(this, 'jb_r');
	m_paneBottleY = og::Screen::TagSearch(this, 'jb_y');
	og::Screen::setAlphaScreen(this);

	CallBack_CounterRV* counter1 = setCallBack_CounterRV(this, 'dr_r', 'dr_l', 'dr_l', &m_dopingCheck->m_sprays1, 3, 2, 1, arc);
	CallBack_CounterRV* counter2 = setCallBack_CounterRV(this, 'dy_r', 'dy_l', 'dy_l', &m_dopingCheck->m_sprays2, 3, 2, 1, arc);
	counter1->setCenteringMode(CallBack_CounterRV::ECM_UNKNOWN_2);
	counter2->setCenteringMode(CallBack_CounterRV::ECM_UNKNOWN_2);

	temp1 = search('dr_c');
	if (temp1->getParentPane()) {
		temp1->getParentPane()->removeChild(temp1);
	}

	temp1 = search('dy_c');
	if (temp1->getParentPane()) {
		temp1->getParentPane()->removeChild(temp1);
	}

	m_paneSpray0  = search('Nspray0');
	m_paneSpray1  = search('Nspray1');
	m_paneJujiKey = search('Njujikey');
	m_paneSpray0->setBasePosition(POS_CENTER);
	m_paneSpray1->setBasePosition(POS_CENTER);
	m_paneJujiKey->setBasePosition(POS_CENTER);
	m_rootPosition.x = m_paneAll->_0D4.x;
	m_rootPosition.y = m_paneAll->_0D4.y;
}

/*
 * --INFO--
 * Address:	803039CC
 * Size:	000038
 */
void DopingScreen::setParam(DataNavi& data)
{
	DopingCheck* check     = m_dopingCheck;
	check->m_naviLifeRatio = data.m_naviLifeRatio;
	check->m_followPiki    = data.m_followPikis;
	check->m_nextThrowPiki = data.m_nextThrowPiki;
	check->m_sprays1       = data.m_dope1Count;
	check->m_sprays2       = data.m_dope0Count;
	check->m_activeNaviID  = data.m_activeNaviID;
}

/*
 * --INFO--
 * Address:	80303A04
 * Size:	000284
 */
void DopingScreen::update()
{
	P2DScreen::Mgr::update();
	m_paneJujiKey->m_isVisible = false;
	if (m_dope0Enabled) {
		m_paneSpray0->m_isVisible  = true;
		m_paneJujiKey->m_isVisible = true;
		m_paneBottleR->m_isVisible = true;
	} else {
		m_paneSpray0->m_isVisible  = false;
		m_paneBottleR->m_isVisible = false;
	}

	if (m_dope1Enabled) {
		m_paneSpray1->m_isVisible  = true;
		m_paneJujiKey->m_isVisible = true;
		m_paneBottleY->m_isVisible = true;
	} else {
		m_paneSpray1->m_isVisible  = false;
		m_paneBottleY->m_isVisible = false;
	}
	m_dopingCheck->update();

	f32 yoffs     = m_rootPosition.y + m_offset.y;
	J2DPane* pane = m_paneAll;
	pane->_0D4.x  = m_rootPosition.x + m_offset.x;
	pane->_0D4.y  = yoffs;
	pane->calcMtx();

	// when spray 0 is first goten
	if (m_gottenSpray0 && m_scaleSpray0Get < 1.0f) {
		m_scaleSpray0Get += 0.1f;
		if (m_scaleSpray0Get >= 1.0f) {
			m_scaleMgr1->up();
			m_dopingCheck->startGetEff_Up();
			ogSound->setGetSpray();
		}
	}

	// when spray 1 is first goten
	if (m_gottenSpray1 && m_scaleSpray1Get < 1.0f) {
		m_scaleSpray1Get += 0.1f;
		if (m_scaleSpray1Get >= 1.0f) {
			m_scaleMgr2->up();
			m_dopingCheck->startGetEff_Down();
			ogSound->setGetSpray();
		}
	}

	// when either spray is first gotten
	if (m_gottenJujiKey && m_scaleJujiKey < 1.0f) {
		m_scaleJujiKey += 0.1f;
		if (m_scaleJujiKey >= 1.0f) {
			m_scaleMgr3->up();
		}
	}

	f64 scale1 = m_scaleSpray0Get * m_scaleMgr1->calc();
	f64 scale2 = m_scaleSpray1Get * m_scaleMgr2->calc();
	f64 scale3 = m_scaleJujiKey * m_scaleMgr3->calc();

	m_paneSpray0->updateScale(scale1);
	m_paneSpray1->updateScale(scale2);
	m_paneJujiKey->updateScale(scale3);
}

/*
 * --INFO--
 * Address:	80303C88
 * Size:	00000C
 */
void DopingScreen::adjPos(f32 x, f32 y)
{
	m_offset.x = x;
	m_offset.y = y;
}

/*
 * --INFO--
 * Address:	80303C94
 * Size:	000044
 */
void DopingScreen::setDopingEnable(bool s0, bool s1)
{
	m_dope0Enabled = s0;
	m_dope1Enabled = s1;
	if (s0) {
		m_scaleSpray0Get = 1.0f;
	}
	if (s1) {
		m_scaleSpray1Get = 1.0f;
	}

	if (s0 || s1) {
		m_scaleJujiKey = 1.0f;
	}
}

/*
 * --INFO--
 * Address:	80303CD8
 * Size:	000010
 */
void DopingScreen::openDopingUp()
{
	m_gottenSpray0 = true;
	m_dope0Enabled = true;
}

/*
 * --INFO--
 * Address:	80303CE8
 * Size:	000010
 */
void DopingScreen::openDopingDown()
{
	m_gottenSpray1 = true;
	m_dope1Enabled = true;
}

/*
 * --INFO--
 * Address:	80303CF8
 * Size:	00000C
 */
void DopingScreen::openDopingKey() { m_gottenJujiKey = true; }

/*
 * --INFO--
 * Address:	80303D04
 * Size:	000100
 */
DopingCheck::DopingCheck()
{
	m_naviLifeRatio = 1.0f;
	m_followPiki    = 1;
	m_nextThrowPiki = 2;
	m_sprays1       = 10;
	m_sprays2       = 10;
	m_activeNaviID  = 1;
	m_pane1         = nullptr;
	m_pane2         = nullptr;
	_20             = &m_sprays1;
	_24             = &m_sprays2;
	_28             = *_20;
	_2C             = *_24;
	m_efx           = new efx2d::T2DExtractUp;
	_40             = true;
	m_scaleMgr1     = nullptr;
	m_scaleMgr2     = nullptr;
	_3C             = 20.0f;
}

/*
 * --INFO--
 * Address:	80303E04
 * Size:	000044
 */
void DopingCheck::init(J2DPane* pane1, J2DPane* pane2, ScaleMgr* mgr1, ScaleMgr* mgr2)
{
	m_pane1     = pane1;
	m_pane2     = pane2;
	m_scaleMgr1 = mgr1;
	m_scaleMgr2 = mgr2;
	_20         = &m_sprays1;
	_24         = &m_sprays2;
	_28         = *_20;
	_2C         = *_24;
	_40         = true;
}

/*
 * --INFO--
 * Address:	80303E48
 * Size:	000100
 */
void DopingCheck::update()
{
	int count1 = *_20;
	int count2 = *_24;
	if (_40) {
		_40 = false;
		_28 = count1;
		_2C = count2;
	} else {
		if (og::newScreen::checkMovieActive()) {
			_28 = count1;
			_2C = count2;
		} else {
			if (count1 != _28) {
				if (count1 > _28) {
					effStart(m_pane1);
					if (m_scaleMgr1) {
						m_scaleMgr1->up(0.2, 30.0, 0.8, 0.0);
					}
				}
				_28 = count1;
			}
			if (count2 != _2C) {
				if (count2 > _2C) {
					effStart(m_pane2);
					if (m_scaleMgr2) {
						m_scaleMgr2->up(0.2, 30.0, 0.8, 0.0);
					}
				}
				_2C = count2;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80303F48
 * Size:	000080
 */
void DopingCheck::effStart(J2DPane* pane)
{
	Vector2f pos;
	og::Screen::calcGlbCenter(pane, &pos);

	efx2d::Arg arg(pos);

	m_efx->create(&arg);
	ogSound->setSprayAdd();
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void DopingCheck::startGetEff(J2DPane* pane)
{
	Vector2f pos;
	og::Screen::calcGlbCenter(pane, &pos);
	pos.x += _3C;

	efx2d::Arg arg(pos);
	efx2d::T2DSprayset efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	80303FC8
 * Size:	0000D0
 */
void DopingCheck::startGetEff_Up() { startGetEff(m_pane1); }

/*
 * --INFO--
 * Address:	80304098
 * Size:	0000D0
 */
void DopingCheck::startGetEff_Down() { startGetEff(m_pane2); }
} // namespace Screen
} // namespace og
