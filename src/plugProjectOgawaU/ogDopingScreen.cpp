#include "og/Screen/DopingScreen.h"
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
	m_dopingCheck          = new DopingCheck;
	m_paneAll              = nullptr;
	m_paneSpicySpray       = nullptr;
	m_paneBitterSpray      = nullptr;
	m_paneCenterDpad       = nullptr;
	m_offset.x             = 0.0f;
	m_offset.y             = 0.0f;
	m_rootPosition.x       = 0.0f;
	m_rootPosition.y       = 0.0f;
	m_isSpicySprayEnabled  = false;
	m_isBitterSprayEnabled = false;
	m_hasGotSpicySpray     = false;
	m_hasGotBitterSpray    = false;
	m_hasGotCenterDpad     = false;
	m_spicySprayGet        = 0.0f;
	m_bitterSprayGet       = 0.0f;
	m_scaleJujiKey         = 0.0f;
	m_scaleMgr1            = new ScaleMgr;
	m_scaleMgr2            = new ScaleMgr;
	m_scaleMgr3            = new ScaleMgr;
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

	m_paneBottleSpicy  = og::Screen::TagSearch(this, 'jb_r');
	m_paneBottleBitter = og::Screen::TagSearch(this, 'jb_y');
	og::Screen::setAlphaScreen(this);

	CallBack_CounterRV* counter1 = setCallBack_CounterRV(this, 'dr_r', 'dr_l', 'dr_l', &m_dopingCheck->m_spicySprayCount, 3, 2, 1, arc);
	CallBack_CounterRV* counter2 = setCallBack_CounterRV(this, 'dy_r', 'dy_l', 'dy_l', &m_dopingCheck->m_bitterSprayCount, 3, 2, 1, arc);
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

	m_paneSpicySpray  = search('Nspray0');
	m_paneBitterSpray = search('Nspray1');
	m_paneCenterDpad  = search('Njujikey');
	m_paneSpicySpray->setBasePosition(POS_CENTER);
	m_paneBitterSpray->setBasePosition(POS_CENTER);
	m_paneCenterDpad->setBasePosition(POS_CENTER);
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
	DopingCheck* check        = m_dopingCheck;
	check->m_naviLifeRatio    = data.m_naviLifeRatio;
	check->m_followPiki       = data.m_followPikis;
	check->m_nextThrowPiki    = data.m_nextThrowPiki;
	check->m_spicySprayCount  = data.m_dope1Count;
	check->m_bitterSprayCount = data.m_dope0Count;
	check->m_activeNaviID     = data.m_activeNaviID;
}

/*
 * --INFO--
 * Address:	80303A04
 * Size:	000284
 */
void DopingScreen::update()
{
	P2DScreen::Mgr::update();
	m_paneCenterDpad->m_isVisible = false;
	if (m_isSpicySprayEnabled) {
		m_paneSpicySpray->m_isVisible  = true;
		m_paneCenterDpad->m_isVisible  = true;
		m_paneBottleSpicy->m_isVisible = true;
	} else {
		m_paneSpicySpray->m_isVisible  = false;
		m_paneBottleSpicy->m_isVisible = false;
	}

	if (m_isBitterSprayEnabled) {
		m_paneBitterSpray->m_isVisible  = true;
		m_paneCenterDpad->m_isVisible   = true;
		m_paneBottleBitter->m_isVisible = true;
	} else {
		m_paneBitterSpray->m_isVisible  = false;
		m_paneBottleBitter->m_isVisible = false;
	}
	m_dopingCheck->update();

	f32 yoffs     = m_rootPosition.y + m_offset.y;
	J2DPane* pane = m_paneAll;
	pane->_0D4.x  = m_rootPosition.x + m_offset.x;
	pane->_0D4.y  = yoffs;
	pane->calcMtx();

	// when spray 0 is first goten
	if (m_hasGotSpicySpray && m_spicySprayGet < 1.0f) {
		m_spicySprayGet += 0.1f;
		if (m_spicySprayGet >= 1.0f) {
			m_scaleMgr1->up();
			m_dopingCheck->startGetEff_Up();
			ogSound->setGetSpray();
		}
	}

	// when spray 1 is first goten
	if (m_hasGotBitterSpray && m_bitterSprayGet < 1.0f) {
		m_bitterSprayGet += 0.1f;
		if (m_bitterSprayGet >= 1.0f) {
			m_scaleMgr2->up();
			m_dopingCheck->startGetEff_Down();
			ogSound->setGetSpray();
		}
	}

	// when either spray is first gotten
	if (m_hasGotCenterDpad && m_scaleJujiKey < 1.0f) {
		m_scaleJujiKey += 0.1f;
		if (m_scaleJujiKey >= 1.0f) {
			m_scaleMgr3->up();
		}
	}

	f64 scale1 = m_spicySprayGet * m_scaleMgr1->calc();
	f64 scale2 = m_bitterSprayGet * m_scaleMgr2->calc();
	f64 scale3 = m_scaleJujiKey * m_scaleMgr3->calc();

	m_paneSpicySpray->updateScale(scale1);
	m_paneBitterSpray->updateScale(scale2);
	m_paneCenterDpad->updateScale(scale3);
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
void DopingScreen::setDopingEnable(bool spicyEnabled, bool bitterEnabled)
{
	m_isSpicySprayEnabled  = spicyEnabled;
	m_isBitterSprayEnabled = bitterEnabled;
	if (spicyEnabled) {
		m_spicySprayGet = 1.0f;
	}
	if (bitterEnabled) {
		m_bitterSprayGet = 1.0f;
	}

	if (spicyEnabled || bitterEnabled) {
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
	m_hasGotSpicySpray    = true;
	m_isSpicySprayEnabled = true;
}

/*
 * --INFO--
 * Address:	80303CE8
 * Size:	000010
 */
void DopingScreen::openDopingDown()
{
	m_hasGotBitterSpray    = true;
	m_isBitterSprayEnabled = true;
}

/*
 * --INFO--
 * Address:	80303CF8
 * Size:	00000C
 */
void DopingScreen::openDopingKey() { m_hasGotCenterDpad = true; }

/*
 * --INFO--
 * Address:	80303D04
 * Size:	000100
 */
DopingCheck::DopingCheck()
{
	m_naviLifeRatio    = 1.0f;
	m_followPiki       = 1;
	m_nextThrowPiki    = 2;
	m_spicySprayCount  = 10;
	m_bitterSprayCount = 10;
	m_activeNaviID     = 1;

	// Inlined init?
	m_spicyPane      = nullptr;
	m_bitterPane     = nullptr;
	m_newSpicyCount  = &m_spicySprayCount;
	m_newBitterCount = &m_bitterSprayCount;
	m_oldSpicyCount  = *m_newSpicyCount;
	m_oldBitterCount = *m_newBitterCount;

	m_extractEfx     = new efx2d::T2DExtractUp;
	m_isUpdateCount  = true;
	m_spicyScaleMgr  = nullptr;
	m_bitterScaleMgr = nullptr;
	m_xOffset        = 20.0f;
}

/*
 * --INFO--
 * Address:	80303E04
 * Size:	000044
 */
void DopingCheck::init(J2DPane* pane1, J2DPane* pane2, ScaleMgr* mgr1, ScaleMgr* mgr2)
{
	m_spicyPane      = pane1;
	m_bitterPane     = pane2;
	m_spicyScaleMgr  = mgr1;
	m_bitterScaleMgr = mgr2;
	m_newSpicyCount  = &m_spicySprayCount;
	m_newBitterCount = &m_bitterSprayCount;
	m_oldSpicyCount  = *m_newSpicyCount;
	m_oldBitterCount = *m_newBitterCount;
	m_isUpdateCount  = true;
}

/*
 * --INFO--
 * Address:	80303E48
 * Size:	000100
 */
void DopingCheck::update()
{
	int newSpicyCount  = *m_newSpicyCount;
	int newBitterCount = *m_newBitterCount;
	if (m_isUpdateCount) {
		m_isUpdateCount  = false;
		m_oldSpicyCount  = newSpicyCount;
		m_oldBitterCount = newBitterCount;
		return;
	}

	if (og::newScreen::checkMovieActive()) {
		m_oldSpicyCount  = newSpicyCount;
		m_oldBitterCount = newBitterCount;
		return;
	}

	if (newSpicyCount != m_oldSpicyCount) {
		if (newSpicyCount > m_oldSpicyCount) {
			effStart(m_spicyPane);
			if (m_spicyScaleMgr) {
				m_spicyScaleMgr->up(0.2f, 30.0f, 0.8f, 0.0f);
			}
		}

		m_oldSpicyCount = newSpicyCount;
	}

	if (newBitterCount != m_oldBitterCount) {
		if (newBitterCount > m_oldBitterCount) {
			effStart(m_bitterPane);
			if (m_bitterScaleMgr) {
				m_bitterScaleMgr->up(0.2f, 30.0f, 0.8f, 0.0f);
			}
		}

		m_oldBitterCount = newBitterCount;
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

	m_extractEfx->create(&arg);
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
	pos.x += m_xOffset;

	efx2d::Arg arg(pos);
	efx2d::T2DSprayset efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	80303FC8
 * Size:	0000D0
 */
void DopingCheck::startGetEff_Up() { startGetEff(m_spicyPane); }

/*
 * --INFO--
 * Address:	80304098
 * Size:	0000D0
 */
void DopingCheck::startGetEff_Down() { startGetEff(m_bitterPane); }
} // namespace Screen
} // namespace og
