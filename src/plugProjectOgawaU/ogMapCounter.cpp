#include "og/Screen/MapCounter.h"
#include "og/Screen/callbackNodes.h"
#include "trig.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80307DCC
 * Size:	0000E4
 */
MapCounter::MapCounter(DataMap* data)
{
	mDataMap           = data;
	mOnyonRedPikmin    = &data->mOnyonPikminCounts[MAPPIKI_Red];
	mOnyonYellowPikmin = &data->mOnyonPikminCounts[MAPPIKI_Yellow];
	mOnyonBluePikmin   = &data->mOnyonPikminCounts[MAPPIKI_Blue];
	mShipWhitePikmin   = &data->mOnyonPikminCounts[MAPPIKI_White];
	mShipPurplePikmin  = &data->mOnyonPikminCounts[MAPPIKI_Purple];

	mLeaderRedPikmin    = &data->mCurrentPikminCounts[MAPPIKI_Red];
	mLeaderYellowPikmin = &data->mCurrentPikminCounts[MAPPIKI_Yellow];
	mLeaderBluePikmin   = &data->mCurrentPikminCounts[MAPPIKI_Blue];
	mLeaderWhitePikmin  = &data->mCurrentPikminCounts[MAPPIKI_White];
	mLeaderPurplePikmin = &data->mCurrentPikminCounts[MAPPIKI_Purple];
	mFreePikmin         = &data->mFreePikmin;
	mPokos              = &data->mPokos;

	mPaneRPikiOnyon  = nullptr;
	mPaneYPikiOnyon  = nullptr;
	mPaneBPikiOnyon  = nullptr;
	mPaneWPikiShip   = nullptr;
	mPanePPikiShip   = nullptr;
	mPaneRPikiLeader = nullptr;
	mPaneYPikiLeader = nullptr;
	mPaneBPikiLeader = nullptr;
	mPaneWPikiLeader = nullptr;
	mPanePPikiLeader = nullptr;
	mPaneFreePiki    = nullptr;
}

/*
 * --INFO--
 * Address:	80307EB0
 * Size:	000038
 */
void MapCounter::dispRed(bool makeVisible)
{
	if (makeVisible) {
		mPaneRPikiOnyon->show();
		mPaneRPikiLeader->show();
		return;
	}
	mPaneRPikiOnyon->hide();
	mPaneRPikiLeader->hide();
}

/*
 * --INFO--
 * Address:	80307EE8
 * Size:	000038
 */
void MapCounter::dispYellow(bool makeVisible)
{
	if (makeVisible) {
		mPaneYPikiOnyon->show();
		mPaneYPikiLeader->show();
		return;
	}
	mPaneYPikiOnyon->hide();
	mPaneYPikiLeader->hide();
}

/*
 * --INFO--
 * Address:	80307F20
 * Size:	000038
 */
void MapCounter::dispBlue(bool makeVisible)
{
	if (makeVisible) {
		mPaneBPikiOnyon->show();
		mPaneBPikiLeader->show();
		return;
	}
	mPaneBPikiOnyon->hide();
	mPaneBPikiLeader->hide();
}

/*
 * --INFO--
 * Address:	80307F58
 * Size:	000038
 */
void MapCounter::dispWhite(bool makeVisible)
{
	if (makeVisible) {
		mPaneWPikiShip->show();
		mPaneWPikiLeader->show();
		return;
	}
	mPaneWPikiShip->hide();
	mPaneWPikiLeader->hide();
}

/*
 * --INFO--
 * Address:	80307F90
 * Size:	000038
 */
void MapCounter::dispBlack(bool makeVisible)
{
	if (makeVisible) {
		mPanePPikiShip->show();
		mPanePPikiLeader->show();
		return;
	}
	mPanePPikiShip->hide();
	mPanePPikiLeader->hide();
}

/*
 * --INFO--
 * Address:	80307FC8
 * Size:	000028
 */
void MapCounter::dispFree(bool makeVisible)
{
	if (makeVisible) {
		mPaneFreePiki->show();
		return;
	}
	mPaneFreePiki->hide();
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
	mPaneRPikiOnyon = setCallBack_CounterMap(this, 'or_r', 'or_c', 'or_l', mOnyonRedPikmin, 6, 3, true, arc);
	mPaneYPikiOnyon = setCallBack_CounterMap(this, 'oy_r', 'oy_c', 'oy_l', mOnyonYellowPikmin, 6, 3, true, arc);
	mPaneBPikiOnyon = setCallBack_CounterMap(this, 'ob_r', 'ob_c', 'ob_l', mOnyonBluePikmin, 6, 3, true, arc);

	// ship pikis
	mPaneWPikiShip = setCallBack_CounterMap(this, 'uw_r', 'uw_c', 'uw_l', mShipWhitePikmin, 6, 3, true, arc);
	mPanePPikiShip = setCallBack_CounterMap(this, 'ubkr', 'ubkc', 'ubkl', mShipPurplePikmin, 6, 3, true, arc);

	// leader pikis
	mPaneRPikiLeader = setCallBack_CounterMap(this, 'tr_r', 'tr_c', 'tr_l', mLeaderRedPikmin, 3, 3, true, arc);
	mPaneYPikiLeader = setCallBack_CounterMap(this, 'ty_r', 'ty_c', 'ty_l', mLeaderYellowPikmin, 3, 3, true, arc);
	mPaneBPikiLeader = setCallBack_CounterMap(this, 'tb_r', 'tb_c', 'tb_l', mLeaderBluePikmin, 3, 3, true, arc);
	mPaneWPikiLeader = setCallBack_CounterMap(this, 'tw_r', 'tw_c', 'tw_l', mLeaderWhitePikmin, 3, 3, true, arc);
	mPanePPikiLeader = setCallBack_CounterMap(this, 'tbkr', 'tbkc', 'tbkl', mLeaderPurplePikmin, 3, 3, true, arc);

	mPaneFreePiki = setCallBack_CounterMap(this, 'frer', 'frec', 'frel', mFreePikmin, 3, 3, true, arc);
}
} // namespace Screen
} // namespace og
