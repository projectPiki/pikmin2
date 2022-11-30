#include "types.h"
#include "og/Screen/MapCounter.h"
#include "og/Screen/callbackNodes.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80307DCC
 * Size:	0000E4
 */
MapCounter::MapCounter(DataMap* data)
{
	m_dataMap           = data;
	m_onyonRedPikmin    = &data->m_onyonPikminCounts[MAPPIKI_Red];
	m_onyonYellowPikmin = &data->m_onyonPikminCounts[MAPPIKI_Yellow];
	m_onyonBluePikmin   = &data->m_onyonPikminCounts[MAPPIKI_Blue];
	m_shipWhitePikmin   = &data->m_onyonPikminCounts[MAPPIKI_White];
	m_shipPurplePikmin  = &data->m_onyonPikminCounts[MAPPIKI_Purple];

	m_leaderRedPikmin    = &data->m_currentPikminCounts[MAPPIKI_Red];
	m_leaderYellowPikmin = &data->m_currentPikminCounts[MAPPIKI_Yellow];
	m_leaderBluePikmin   = &data->m_currentPikminCounts[MAPPIKI_Blue];
	m_leaderWhitePikmin  = &data->m_currentPikminCounts[MAPPIKI_White];
	m_leaderPurplePikmin = &data->m_currentPikminCounts[MAPPIKI_Purple];
	m_freePikmin         = &data->m_freePikmin;
	m_pokos              = &data->m_pokos;

	m_paneRPikiOnyon  = nullptr;
	m_paneYPikiOnyon  = nullptr;
	m_paneBPikiOnyon  = nullptr;
	m_paneWPikiShip   = nullptr;
	m_panePPikiShip   = nullptr;
	m_paneRPikiLeader = nullptr;
	m_paneYPikiLeader = nullptr;
	m_paneBPikiLeader = nullptr;
	m_paneWPikiLeader = nullptr;
	m_panePPikiLeader = nullptr;
	m_paneFreePiki    = nullptr;
}

/*
 * --INFO--
 * Address:	80307EB0
 * Size:	000038
 */
void MapCounter::dispRed(bool makeVisible)
{
	if (makeVisible) {
		m_paneRPikiOnyon->m_isVisible  = true;
		m_paneRPikiLeader->m_isVisible = true;
		return;
	}
	m_paneRPikiOnyon->m_isVisible  = false;
	m_paneRPikiLeader->m_isVisible = false;
}

/*
 * --INFO--
 * Address:	80307EE8
 * Size:	000038
 */
void MapCounter::dispYellow(bool makeVisible)
{
	if (makeVisible) {
		m_paneYPikiOnyon->m_isVisible  = true;
		m_paneYPikiLeader->m_isVisible = true;
		return;
	}
	m_paneYPikiOnyon->m_isVisible  = false;
	m_paneYPikiLeader->m_isVisible = false;
}

/*
 * --INFO--
 * Address:	80307F20
 * Size:	000038
 */
void MapCounter::dispBlue(bool makeVisible)
{
	if (makeVisible) {
		m_paneBPikiOnyon->m_isVisible  = true;
		m_paneBPikiLeader->m_isVisible = true;
		return;
	}
	m_paneBPikiOnyon->m_isVisible  = false;
	m_paneBPikiLeader->m_isVisible = false;
}

/*
 * --INFO--
 * Address:	80307F58
 * Size:	000038
 */
void MapCounter::dispWhite(bool makeVisible)
{
	if (makeVisible) {
		m_paneWPikiShip->m_isVisible   = true;
		m_paneWPikiLeader->m_isVisible = true;
		return;
	}
	m_paneWPikiShip->m_isVisible   = false;
	m_paneWPikiLeader->m_isVisible = false;
}

/*
 * --INFO--
 * Address:	80307F90
 * Size:	000038
 */
void MapCounter::dispBlack(bool makeVisible)
{
	if (makeVisible) {
		m_panePPikiShip->m_isVisible   = true;
		m_panePPikiLeader->m_isVisible = true;
		return;
	}
	m_panePPikiShip->m_isVisible   = false;
	m_panePPikiLeader->m_isVisible = false;
}

/*
 * --INFO--
 * Address:	80307FC8
 * Size:	000028
 */
void MapCounter::dispFree(bool makeVisible)
{
	if (makeVisible) {
		m_paneFreePiki->m_isVisible = true;
		return;
	}
	m_paneFreePiki->m_isVisible = false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
J2DPane* setCallBack_CounterMap(P2DScreen::Mgr* mgr, u64 tag1, u64 tag2, u64 tag3, u32* count, u16 p1, u16 p2, bool check,
                                JKRArchive* archive)
{
	CallBack_CounterRV* counter = new CallBack_CounterRV(const_cast<char**>(SujiTexMap), p1, p2, archive);
	counter->init(mgr, tag1, tag2, tag3, count, check);
	counter->setPuyoAnim(false);
	mgr->addCallBack(tag1, counter);
	return counter->getMotherPane();
}

/*
 * --INFO--
 * Address:	80307FF0
 * Size:	000724
 */
void MapCounter::setCallBack(JKRArchive* arc)
{
	// onyon pikis
	m_paneRPikiOnyon = setCallBack_CounterMap(this, 'or_r', 'or_c', 'or_l', m_onyonRedPikmin, 6, 3, true, arc);
	m_paneYPikiOnyon = setCallBack_CounterMap(this, 'oy_r', 'oy_c', 'oy_l', m_onyonYellowPikmin, 6, 3, true, arc);
	m_paneBPikiOnyon = setCallBack_CounterMap(this, 'ob_r', 'ob_c', 'ob_l', m_onyonBluePikmin, 6, 3, true, arc);

	// ship pikis
	m_paneWPikiShip = setCallBack_CounterMap(this, 'uw_r', 'uw_c', 'uw_l', m_shipWhitePikmin, 6, 3, true, arc);
	m_panePPikiShip = setCallBack_CounterMap(this, 'ubkr', 'ubkc', 'ubkl', m_shipPurplePikmin, 6, 3, true, arc);

	// leader pikis
	m_paneRPikiLeader = setCallBack_CounterMap(this, 'tr_r', 'tr_c', 'tr_l', m_leaderRedPikmin, 3, 3, true, arc);
	m_paneYPikiLeader = setCallBack_CounterMap(this, 'ty_r', 'ty_c', 'ty_l', m_leaderYellowPikmin, 3, 3, true, arc);
	m_paneBPikiLeader = setCallBack_CounterMap(this, 'tb_r', 'tb_c', 'tb_l', m_leaderBluePikmin, 3, 3, true, arc);
	m_paneWPikiLeader = setCallBack_CounterMap(this, 'tw_r', 'tw_c', 'tw_l', m_leaderWhitePikmin, 3, 3, true, arc);
	m_panePPikiLeader = setCallBack_CounterMap(this, 'tbkr', 'tbkc', 'tbkl', m_leaderPurplePikmin, 3, 3, true, arc);

	m_paneFreePiki = setCallBack_CounterMap(this, 'frer', 'frec', 'frel', m_freePikmin, 3, 3, true, arc);
}
} // namespace Screen
} // namespace og
