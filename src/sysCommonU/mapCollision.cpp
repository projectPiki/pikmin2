#include "MapCollision.h"

/**
 * @note Address: 0x8041A030
 * @note Size: 0x30
 */
void MapCollision::getCurrTri(Game::CurrTriInfo& info) { mDivider->getCurrTri(info); }

/**
 * @note Address: 0x8041A060
 * @note Size: 0xB4
 */
void MapCollision::read(Stream& input)
{
	mDivider = new Sys::GridDivider();
	mDivider->read(input);
}

/**
 * @note Address: 0x8041A114
 * @note Size: 0x7C
 */
MapCollision* MapCollision::clone(Matrixf& matrix)
{
	MapCollision* clone = new MapCollision();
	clone->mDivider     = (Sys::GridDivider*)mDivider->clone(matrix);
	return clone;
}
