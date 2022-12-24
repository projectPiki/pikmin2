#include "og/Screen/PikminCounter.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8030421C
 * Size:	0000BC
 */
PikminCounter::PikminCounter()
{
	m_catchPiki         = nullptr;
	_180                = 0;
	_184                = 0;
	_188                = 0;
	m_isTotalPokoActive = false;
	m_paneSublevel      = nullptr;
	m_scaleMgr          = nullptr;
	m_standardPos.x     = 0.0f;
	m_standardPos.y     = 0.0f;
	m_currPos.x         = 0.0f;
	m_currPos.y         = 0.0f;
}

/*
 * --INFO--
 * Address:	803042D8
 * Size:	00006C
 */
void PikminCounter::setParam(og::Screen::DataGame& game, og::Screen::DataNavi& navi)
{
	m_dataGame = game;
	m_dataNavi = navi;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000188
 */
void PikminCounter::setCallBackCommon(JKRArchive* arc, bool flag)
{
	og::Screen::setAlphaScreen(this);
	m_catchPiki = new og::Screen::CallBack_CatchPiki;
	m_catchPiki->init(this, 'piki', &m_dataNavi.m_nextThrowPiki, arc);
	addCallBack('piki', m_catchPiki);
	og::Screen::setCallBack_CounterRV(this, 'c_mr', 'c_mc', 'c_ml', &m_dataNavi.m_followPikis, 4, 3, 1, arc);
	m_isTotalPokoActive = flag;
}

/*
 * --INFO--
 * Address:	80304344
 * Size:	0000F8
 */
void PikminCounter::update()
{
	if (m_paneSublevel) {
		if (m_isTotalPokoActive) {
			if (m_currPos.x < 700.0f)
				m_currPos.x += 20.0f;
		} else {
			if (m_currPos.x > m_standardPos.x) {
				m_currPos.x -= 20.0f;
				if (m_currPos.x <= m_standardPos.x) {
					m_currPos.x = m_standardPos.x;
					m_scaleMgr->up(0.2f, 20.0f, 0.5f, 0.0f);
				}
			}
		}
		m_paneSublevel->setOffset(m_currPos.x, m_currPos.y);
		m_paneSublevel->updateScale(m_scaleMgr->calc());
	}
	P2DScreen::Mgr::update();
}

/*
 * --INFO--
 * Address:	8030443C
 * Size:	000230
 */
void PikminCounter::setCallBack(JKRArchive* arc)
{
	setCallBackCommon(arc, false);

	u32* days = &m_dataGame.m_dayNum;
	setCallBack_CounterDay(this, 'dcsr', 'dcsl', 'dcsc', days, 10, arc);
	setCallBack_CounterDay(this, 'dc_r', 'dc_l', 'dc_c', days, 10, arc);

	setCallBack_CounterRV(this, 'c_lr', 'c_lc', 'c_ll', &m_dataGame.m_mapPikminCount, 10, 3, 1, arc);
	CallBack_CounterRV* counter = setCallBack_CounterRV(this, 'c_s1', 'c_sr', 'c_sl', &m_dataGame.m_totalPikminCount, 10, 4, 1, arc);
	counter->m_scaleUpSoundID   = PSSE_SY_PIKI_INCREMENT;
	counter->m_scaleDownSoundID = PSSE_SY_PIKI_DECREMENT;

	search('c_sc')->removeFromParent();
}

/*
 * --INFO--
 * Address:	8030466C
 * Size:	000240
 */
void PikminCounterCave::setCallBack(JKRArchive* arc)
{
	setCallBackCommon(arc, false);
	m_paneSublevel = search('Ndayicon');
	if (m_paneSublevel) {
		m_standardPos.x = m_paneSublevel->_0D4.x;
		m_standardPos.y = m_paneSublevel->_0D4.y;
		m_currPos       = m_standardPos;
		m_paneSublevel->setOffset(m_currPos.x, m_currPos.y);
		m_scaleMgr = new ScaleMgr;
	}

	u32* days = &m_dataGame.m_floorNum;
	setCallBack_CounterDay(this, 'dc_r', 'dc_l', 'dc_c', days, 4, arc);
	setCallBack_CounterDay(this, 'dcsr', 'dcsl', 'dcsc', days, 4, arc);

	CallBack_CounterRV* counter = setCallBack_CounterRV(this, 'c_lr', 'c_lc', 'c_ll', &m_dataGame.m_mapPikminCount, 10, 3, 1, arc);
	counter->m_scaleUpSoundID   = PSSE_SY_PIKI_INCREMENT;
	counter->m_scaleDownSoundID = PSSE_SY_PIKI_DECREMENT;
}

/*
 * --INFO--
 * Address:	803048AC
 * Size:	0001F8
 */
void PikminCounterChallenge1P::setCallBack(JKRArchive* arc)
{
	setCallBackCommon(arc, false);
	m_paneSublevel = search('Ndayicon');
	if (m_paneSublevel) {
		m_standardPos.x = m_paneSublevel->_0D4.x;
		m_standardPos.y = m_paneSublevel->_0D4.y;
		m_currPos       = m_standardPos;
		m_paneSublevel->setOffset(m_currPos.x, m_currPos.y);
		m_scaleMgr = new ScaleMgr;
	}

	search('Ndayicon')->hide();

	CallBack_CounterRV* counter = setCallBack_CounterRV(this, 'c_lr', 'c_lc', 'c_ll', &m_dataGame.m_mapPikminCount, 10, 3, 1, arc);
	counter->m_scaleUpSoundID   = PSSE_SY_PIKI_INCREMENT;
	counter->m_scaleDownSoundID = PSSE_SY_PIKI_DECREMENT;
}
} // namespace Screen
} // namespace og
