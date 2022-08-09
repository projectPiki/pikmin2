#include "Game/TekiStat.h"
#include "Game/GameSystem.h"

namespace Game {
/*
 * --INFO--
 * Address:	8023381C
 * Size:	000034
 */
void TekiStat::Info::incKilled(void)
{
	if (gameSystem && gameSystem->m_mode == GSM_STORY_MODE) {
		m_killedTekiCount++;
		m_state |= TEKISTAT_STATE_UPDATED;
	}
}

/*
 * --INFO--
 * Address:	80233850
 * Size:	000028
 */
void TekiStat::Info::incKillPikmin(void)
{
	if (gameSystem && gameSystem->m_mode == GSM_STORY_MODE) {
		m_killedPikminCount++;
	}
}

/*
 * --INFO--
 * Address:	80233878
 * Size:	000010
 */
TekiStat::Mgr::Mgr(void)
{
	m_data  = nullptr;
	m_count = 0;
}

/*
 * --INFO--
 * Address:	80233888
 * Size:	000084
 */
bool TekiStat::Mgr::whatsNew(void)
{
	for (int i = 0; i < m_count; i++) {
		// If the stat is updated and isn't out of date, there is new data to review
		if (getTekiInfo(i)->m_state & TEKISTAT_STATE_UPDATED && !(getTekiInfo(i)->m_state & TEKISTAT_STATE_OUT_OF_DATE)) {
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
void TekiStat::Mgr::setOutOfDateAll(void)
{
	for (int i = 0; i < m_count; i++) {
		if (getTekiInfo(i)->m_state & TEKISTAT_STATE_UPDATED) {
			// Invalidate all new updated data
			getTekiInfo(i)->m_state |= TEKISTAT_STATE_OUT_OF_DATE;
		}
	}
}

/*
 * --INFO--
 * Address:	80233984
 * Size:	0000C8
 */
void TekiStat::Mgr::clear(void)
{
	P2ASSERTBOOLLINE(60, m_data && m_count);

	for (int i = 0; i < m_count; i++) {
		getTekiInfo(i)->m_killedTekiCount   = 0;
		getTekiInfo(i)->m_killedPikminCount = 0;
		getTekiInfo(i)->m_state             = 0;
	}
}

/*
 * --INFO--
 * Address:	80233A4C
 * Size:	000060
 */
void TekiStat::Mgr::allocate(int amount)
{
	m_data  = new Info[amount];
	m_count = amount;
}

/*
 * --INFO--
 * Address:	80233AAC
 * Size:	000018
 */
TekiStat::Info::Info(void)
{
	m_state             = 0;
	m_killedPikminCount = 0;
	m_killedTekiCount   = 0;

	m_state = 0;
}

/*
 * --INFO--
 * Address:	80233AC4
 * Size:	00007C
 */
TekiStat::Info* TekiStat::Mgr::getTekiInfo(int idx)
{
	P2ASSERTBOUNDSLINE(76, 0, idx, m_count);
	return &m_data[idx];
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void TekiStat::Info::write(Stream& stream)
{
	stream.writeInt(m_killedTekiCount);
	stream.writeInt(m_killedPikminCount);
	stream.writeByte(m_state);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void TekiStat::Info::read(Stream& stream)
{
	m_killedTekiCount   = stream.readInt();
	m_killedPikminCount = stream.readInt();
	m_state             = stream.readByte();
}

/*
 * --INFO--
 * Address:	80233B40
 * Size:	0000C0
 * NONMATCHING
 */
void TekiStat::Mgr::write(Stream& stream)
{
	stream.writeInt(m_count);
	for (int i = 0; i < m_count; i++) {
		P2ASSERTBOUNDSLINE(76, 0, i, m_count);
		m_data[i].write(stream);
	}
}

/*
 * --INFO--
 * Address:	80233C00
 * Size:	0000EC
 * NOT SURE IF MATCHES
 */
void TekiStat::Mgr::read(Stream& stream)
{
	int newCount = stream.readInt();
	P2ASSERTLINE(105, newCount == m_count);

	m_count = newCount;
	for (int i = 0; i < m_count; i++) {
		P2ASSERTBOUNDSLINE(76, 0, i, m_count);
		m_data[i].read(stream);
	}
}
} // namespace Game
