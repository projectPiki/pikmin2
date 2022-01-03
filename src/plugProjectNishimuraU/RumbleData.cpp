#include "Game/rumble.h"

namespace Game {

/*
 * --INFO--
 * Address:	802613C0
 * Size:	00000C
 */
RumbleData::RumbleData()
    : m_count(0)
{
}

/*
 * --INFO--
 * Address:	802613CC
 * Size:	00000C
 */
RumbleDataMgr::RumbleDataMgr()
    : m_dataCnt(0)
{
}

/*
 * --INFO--
 * Address:	802613D8
 * Size:	00002C
 */
RumbleData* RumbleDataMgr::getRumbleData(int idx)
{
	if (idx >= 0 && idx < m_dataCnt) {
		return &m_dataArr[idx];
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	80261404
 * Size:	000128
 */
void RumbleDataMgr::read(Stream& stream)
{
	m_dataCnt = stream.readInt();
	if (!m_dataCnt) {
		return;
	}

	m_dataArr = new RumbleData[m_dataCnt];
	for (int i = 0; i < m_dataCnt; i++) {
		m_dataArr[i].read(stream);
	}
}
} // namespace Game
