#include "Game/TekiStat.h"
#include "Game/GameSystem.h"

namespace Game {
/**
 * @note Address: 0x8023381C
 * @note Size: 0x34
 */
void TekiStat::Info::incKilled()
{
	if (gameSystem && gameSystem->isStoryMode()) {
		mKilledTekiCount++;
		mState.set(TEKISTAT_STATE_UPDATED);
	}
}

/**
 * @note Address: 0x80233850
 * @note Size: 0x28
 */
void TekiStat::Info::incKillPikmin()
{
	if (gameSystem && gameSystem->isStoryMode()) {
		mKilledPikminCount++;
	}
}

/**
 * @note Address: 0x80233878
 * @note Size: 0x10
 */
TekiStat::Mgr::Mgr()
{
	mData  = nullptr;
	mCount = 0;
}

/**
 * @note Address: 0x80233888
 * @note Size: 0x84
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

/**
 * @note Address: 0x8023390C
 * @note Size: 0x78
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

/**
 * @note Address: 0x80233984
 * @note Size: 0xC8
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

/**
 * @note Address: 0x80233A4C
 * @note Size: 0x60
 */
void TekiStat::Mgr::allocate(int amount)
{
	mData  = new Info[amount];
	mCount = amount;
}

/**
 * @note Address: 0x80233AAC
 * @note Size: 0x18
 */
TekiStat::Info::Info()
{
	mKilledPikminCount = 0;
	mKilledTekiCount   = 0;
	mState.clear();
}

/**
 * @note Address: 0x80233AC4
 * @note Size: 0x7C
 */
TekiStat::Info* TekiStat::Mgr::getTekiInfo(int idx)
{
	P2ASSERTBOUNDSLINE(76, 0, idx, mCount);
	return &mData[idx];
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 * write__Q34Game8TekiStat4InfoFR6Stream
 */
void TekiStat::Info::write(Stream& stream)
{
	stream.writeInt(mKilledTekiCount);
	stream.writeInt(mKilledPikminCount);
	stream.writeBytes(&mState.typeView, 1);
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void TekiStat::Info::read(Stream& stream)
{
	mKilledTekiCount   = stream.readInt();
	mKilledPikminCount = stream.readInt();
	mState.typeView    = stream.readByte();
}

/**
 * @note Address: 0x80233B40
 * @note Size: 0xC0
 * write__Q34Game8TekiStat3MgrFR6Stream
 */
void TekiStat::Mgr::write(Stream& stream)
{
	stream.writeInt(mCount);
	for (int i = 0; i < mCount; i++) {
		getTekiInfo(i)->write(stream);
	}
}

/**
 * @note Address: 0x80233C00
 * @note Size: 0xEC
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
