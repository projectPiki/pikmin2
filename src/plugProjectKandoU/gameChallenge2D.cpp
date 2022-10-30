#include "types.h"
#include "Game/gameChallenge2D.h"

namespace Game {

/*
 * --INFO--
 * Address:	802350A0
 * Size:	000064
 */
Challenge2D_TitleInfo::Challenge2D_TitleInfo(int count)
{
	pInfoArray = new Info[count];
	m_count    = count;
}

/*
 * --INFO--
 * Address:	80235104
 * Size:	000030
 */
Challenge2D_TitleInfo::Info::Info(void)
{
	m_bool           = false;
	m_floorCount     = 0;
	m_sprayCounts[1] = 0;
	m_sprayCounts[0] = 0;
	_0C              = 0;
	m_pikiContainer  = nullptr;
	m_highscore2     = nullptr;
	m_highscore1     = nullptr;
	_1C              = 0;
	m_bool           = false;
}

/*
 * --INFO--
 * Address:	80235134
 * Size:	00007C
 */
Challenge2D_TitleInfo::Info* Challenge2D_TitleInfo::operator()(int count)
{
	P2ASSERTBOUNDSLINE(31, 0, count, m_count);
	return &pInfoArray[count];
}

/*
 * --INFO--
 * Address:	802351B0
 * Size:	000064
 */
Vs2D_TitleInfo::Vs2D_TitleInfo(int count)
{
	pInfoArray  = new Info[count];
	m_infoCount = count;
}

/*
 * --INFO--
 * Address:	80235214
 * Size:	00000C
 */
Vs2D_TitleInfo::Info::Info(void) { m_info = 0; }

/*
 * --INFO--
 * Address:	80235220
 * Size:	0000A8
 */
Vs2D_TitleInfo::Info* Vs2D_TitleInfo::operator()(int infoIndex)
{
	bool amLegal = ((infoIndex >= 0));
	JUT_ASSERTLINE(52, (amLegal && (infoIndex < m_infoCount)), "ZANNEN\n");
	P2ASSERTBOUNDSLINE(54, 0, infoIndex, m_infoCount);
	return &pInfoArray[infoIndex];
}

/*
 * --INFO--
 * Address:	802352C8
 * Size:	000028
 */
Challenge2D_ResultInfo::Challenge2D_ResultInfo(void)
{
	m_bool = false;
	m_bool = false;
	_08    = 0;
	_0C    = 0;
	_10    = 0;
	_14    = 0;
	_1C    = 0;
	_18    = 0;
}
} // namespace Game
