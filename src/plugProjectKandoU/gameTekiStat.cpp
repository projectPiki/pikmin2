#include "Game/TekiStat.h"
#include "Game/GameSystem.h"

namespace Game {
/*
 * --INFO--
 * Address:	8023381C
 * Size:	000034
 */
void TekiStat::Info::incKilled()
{
	if (gameSystem && gameSystem->isStoryMode()) {
		mKilledTekiCount++;
		mState.set(TEKISTAT_STATE_UPDATED);
	}
}

/*
 * --INFO--
 * Address:	80233850
 * Size:	000028
 */
void TekiStat::Info::incKillPikmin()
{
	if (gameSystem && gameSystem->isStoryMode()) {
		mKilledPikminCount++;
	}
}

/*
 * --INFO--
 * Address:	80233878
 * Size:	000010
 */
TekiStat::Mgr::Mgr()
{
	mData  = nullptr;
	mCount = 0;
}

/*
 * --INFO--
 * Address:	80233888
 * Size:	000084
 */
bool TekiStat::Mgr::whatsNew()
{
	for (int i = 0; i < mCount; i++) {
		// If the stat is updated and isn't out of date, there is new data to review
		if (getTekiInfo(i)->mState.isSet(TEKISTAT_STATE_UPDATED) && !(getTekiInfo(i)->mState.isSet(TEKISTAT_STATE_OUT_OF_DATE))) {
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	8023390C
 * Size:	000078
 */
void TekiStat::Mgr::setOutOfDateAll()
{
	for (int i = 0; i < mCount; i++) {
		if (getTekiInfo(i)->mState.isSet(TEKISTAT_STATE_UPDATED)) {
			// Invalidate all new updated data
			getTekiInfo(i)->mState.set(TEKISTAT_STATE_OUT_OF_DATE);
		}
	}
}

/*
 * --INFO--
 * Address:	80233984
 * Size:	0000C8
 */
void TekiStat::Mgr::clear()
{
	P2ASSERTBOOLLINE(60, mData && mCount);

	for (int i = 0; i < mCount; i++) {
		getTekiInfo(i)->mKilledTekiCount   = 0;
		getTekiInfo(i)->mKilledPikminCount = 0;
		getTekiInfo(i)->mState.clear();
	}
}

/*
 * --INFO--
 * Address:	80233A4C
 * Size:	000060
 */
void TekiStat::Mgr::allocate(int amount)
{
	mData  = new Info[amount];
	mCount = amount;
}

/*
 * --INFO--
 * Address:	80233AAC
 * Size:	000018
 */
TekiStat::Info::Info()
{
	mKilledPikminCount = 0;
	mKilledTekiCount   = 0;
	mState.clear();
}

/*
 * --INFO--
 * Address:	80233AC4
 * Size:	00007C
 */
TekiStat::Info* TekiStat::Mgr::getTekiInfo(int idx)
{
	P2ASSERTBOUNDSLINE(76, 0, idx, mCount);
	return &mData[idx];
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 * write__Q34Game8TekiStat4InfoFR6Stream
 */
void TekiStat::Info::write(Stream& stream)
{
	stream.writeInt(mKilledTekiCount);
	stream.writeInt(mKilledPikminCount);
	stream.writeBytes(&mState.typeView, 1);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void TekiStat::Info::read(Stream& stream)
{
	mKilledTekiCount   = stream.readInt();
	mKilledPikminCount = stream.readInt();
	mState.typeView    = stream.readByte();
}

/*
 * --INFO--
 * Address:	80233B40
 * Size:	0000C0
 * write__Q34Game8TekiStat3MgrFR6Stream
 */
void TekiStat::Mgr::write(Stream& stream)
{
	stream.writeInt(mCount);
	for (int i = 0; i < mCount; i++) {
		getTekiInfo(i)->write(stream);
	}
}

/*
 * --INFO--
 * Address:	80233C00
 * Size:	0000EC
 * read__Q34Game8TekiStat3MgrFR6Stream
 */
void TekiStat::Mgr::read(Stream& stream)
{
	int newCount = stream.readInt();
	P2ASSERTLINE(105, newCount == mCount);

	mCount = newCount;
	for (int i = 0; i < mCount; i++) {
		getTekiInfo(i)->read(stream);
	}
}
} // namespace Game
