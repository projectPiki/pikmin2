#include "MapCollision.h"

/*
 * --INFO--
 * Address:	8041A030
 * Size:	000030
 */
void MapCollision::getCurrTri(Game::CurrTriInfo& info) { mDivider->getCurrTri(info); }

/*
 * --INFO--
 * Address:	8041A060
 * Size:	0000B4
 */
void MapCollision::read(Stream& input)
{
	mDivider = new Sys::GridDivider();
	mDivider->read(input);
}

/*
 * --INFO--
 * Address:	8041A114
 * Size:	00007C
 */
MapCollision* MapCollision::clone(Matrixf& matrix)
{
	MapCollision* clone = new MapCollision();
	clone->mDivider     = (Sys::GridDivider*)mDivider->clone(matrix);
	return clone;
}
