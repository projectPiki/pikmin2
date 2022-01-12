#include "MapCollision.h"

/*
 * --INFO--
 * Address:	8041A030
 * Size:	000030
 */
void MapCollision::getCurrTri(Game::CurrTriInfo& info) { m_divider->getCurrTri(info); }

/*
 * --INFO--
 * Address:	8041A060
 * Size:	0000B4
 */
void MapCollision::read(Stream& input)
{
	m_divider = new Sys::GridDivider();
	m_divider->read(input);
}

/*
 * --INFO--
 * Address:	8041A114
 * Size:	00007C
 */
MapCollision* MapCollision::clone(Matrixf& matrix)
{
	MapCollision* clone = new MapCollision();
	clone->m_divider    = (Sys::GridDivider*)m_divider->clone(matrix);
	return clone;
}
