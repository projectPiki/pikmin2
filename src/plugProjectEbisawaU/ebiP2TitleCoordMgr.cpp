#include "ebi/title/TCoordMgr.h"
#include "JSystem/JKR/JKRArchive.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80497138
    lbl_80497138:
        .4byte 0x54436F6F
        .4byte 0x72644D67
        .4byte 0x72000000
    .global lbl_80497144
    lbl_80497144:
        .4byte 0x54546761
        .4byte 0x4C6F6164
        .4byte 0x50617261
        .4byte 0x6D657465
        .4byte 0x72730000

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FC20
    lbl_8051FC20:
        .4byte 0x4F666673
        .4byte 0x65745800
    .global lbl_8051FC28
    lbl_8051FC28:
        .4byte 0xC3A00000
    .global lbl_8051FC2C
    lbl_8051FC2C:
        .4byte 0xC3FA0000
    .global lbl_8051FC30
    lbl_8051FC30:
        .4byte 0x43FA0000
    .global lbl_8051FC34
    lbl_8051FC34:
        .4byte 0x4F666673
        .4byte 0x65745900
    .global lbl_8051FC3C
    lbl_8051FC3C:
        .4byte 0xC3700000
    .global lbl_8051FC40
    lbl_8051FC40:
        .4byte 0x588AD48A
        .4byte 0x75000000
    .global lbl_8051FC48
    lbl_8051FC48:
        .float 1.0
    .global lbl_8051FC4C
    lbl_8051FC4C:
        .4byte 0x00000000
    .global lbl_8051FC50
    lbl_8051FC50:
        .4byte 0x42C80000
    .global lbl_8051FC54
    lbl_8051FC54:
        .4byte 0x598AD48A
        .4byte 0x75000000
*/

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
