#include "ebi/title/TCoordMgr.h"
#include "JSystem/JKR/JKRArchive.h"

namespace ebi {
namespace title {

/*
 * --INFO--
 * Address:	803E396C
 * Size:	0001A4
 */
TCoordMgr::TCoordMgr()
    : CNode("TCoordMgr")
{
	for (int i = 0; i < TITLE_PIKI_COUNT; i++) {
		m_pikiCounts[i] = 0;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void TCoordMgr::getDestPos(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803E3B10
 * Size:	000118
 */
void TCoordMgr::copyCoordinate(Vector2f* coord)
{
	for (int i = 0; i < m_pikiCounts[1]; i++) {
		coord[100 + i].x = m_coords[100 + i].x;
		coord[100 + i].y = m_coords[100 + i].y;
	}

	for (int i = 0; i < m_pikiCounts[2]; i++) {
		coord[200 + i].x = m_coords[200 + i].x;
		coord[200 + i].y = m_coords[200 + i].y;
	}

	for (int i = 0; i < m_pikiCounts[0]; i++) {
		coord[i].x = m_coords[i].x;
		coord[i].y = m_coords[i].y;
	}

	for (int i = 0; i < m_pikiCounts[3]; i++) {
		coord[300 + i].x = m_coords[300 + i].x;
		coord[300 + i].y = m_coords[300 + i].y;
	}

	for (int i = 0; i < m_pikiCounts[4]; i++) {
		coord[400 + i].x = m_coords[400 + i].x;
		coord[400 + i].y = m_coords[400 + i].y;
	}
}

/*
 * --INFO--
 * Address:	803E3C28
 * Size:	00007C
 */
void TCoordMgr::readCoordinate(JKRArchive* arc, char* path)
{
	void* file = arc->getResource(path);

	if (file) {
		RamStream stream(file, -1);
		stream.resetPosition(true, 1);

		readCoordinate(stream);
	}
}

/*
 * --INFO--
 * Address:	803E3CA4
 * Size:	000144
 */
void TCoordMgr::readCoordinate(Stream& stream)
{
	for (int i = 0; i < TITLE_PIKI_COUNT; i++) {
		m_pikiCounts[i] = stream.readInt();
		int offs        = 0;
		switch (i) {
		case 1:
			offs = TITLE_PIKI_TYPE_MAX;
			if (m_pikiCounts[i] > TITLE_PIKI_TYPE_MAX) {
				m_pikiCounts[i] = TITLE_PIKI_TYPE_MAX;
			}
			break;
		case 0:
			offs = 0;
			if (m_pikiCounts[i] > TITLE_PIKI_TYPE_MAX) {
				m_pikiCounts[i] = TITLE_PIKI_TYPE_MAX;
			}
			break;
		case 2:
			offs = 2 * TITLE_PIKI_TYPE_MAX;
			if (m_pikiCounts[i] > TITLE_PIKI_TYPE_MAX) {
				m_pikiCounts[i] = TITLE_PIKI_TYPE_MAX;
			}
			break;
		case 3:
			offs = 3 * TITLE_PIKI_TYPE_MAX;
			if (m_pikiCounts[i] > TITLE_PIKI_TYPE_MAX) {
				m_pikiCounts[i] = TITLE_PIKI_TYPE_MAX;
			}
			break;
		case 4:
			offs = 4 * TITLE_PIKI_TYPE_MAX;
			if (m_pikiCounts[i] > TITLE_PIKI_TYPE_MAX) {
				m_pikiCounts[i] = TITLE_PIKI_TYPE_MAX;
			}
			break;
		}

		for (int j = 0; j < m_pikiCounts[i]; j++) {
			m_coords[j + offs].x = stream.readFloat();
			m_coords[j + offs].y = stream.readFloat();
		}
	}
}
} // namespace title
} // namespace ebi
