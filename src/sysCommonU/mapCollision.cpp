#include "types.h"
#include "MapCollision.h"

#pragma auto_inline on

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12MapCollision
    __vt__12MapCollision:
        .4byte 0
        .4byte 0
        .4byte __dt__12MapCollisionFv
        .4byte getChildCount__5CNodeFv
        .4byte getBoundBox__12MapCollisionFR8BoundBox
        .4byte getCurrTri__12MapCollisionFRQ24Game11CurrTriInfo
        .4byte createTriangles__12MapCollisionFRQ23Sys17CreateTriangleArg
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520350
    lbl_80520350:
        .4byte 0x47000000
    .global lbl_80520354
    lbl_80520354:
        .4byte 0xC7000000
*/

/*
 * --INFO--
 * Address:	8041A030
 * Size:	000030
 */
void MapCollision::getCurrTri(Game::CurrTriInfo& info)
{
	return m_divider->getCurrTri(info);
}

/*
 * --INFO--
 * Address:	8041A060
 * Size:	0000B4
 */
void MapCollision::read(Stream& input)
{
	this->m_divider = new Sys::GridDivider();
	this->m_divider->read(input);
}

/*
 * --INFO--
 * Address:	8041A114
 * Size:	00007C
 */
MapCollision* MapCollision::clone(Matrixf& matrix)
{
	MapCollision* clone = new MapCollision();
	clone->m_divider = (Sys::GridDivider*)m_divider->clone(matrix);
	return clone;
}

#pragma auto_inline reset
