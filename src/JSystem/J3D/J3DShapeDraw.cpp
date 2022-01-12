#include "JSystem/J3D/J3DShape.h"
#include "Dolphin/gx.h"

/*
 * --INFO--
 * Address:	8008884C
 * Size:	000018
 */
J3DShapeDraw::J3DShapeDraw(const u8* dl, u32 size)
{
	m_displayList = dl;
	m_dlSize      = size;
}

/*
 * --INFO--
 * Address:	80088864
 * Size:	00002C
 */
void J3DShapeDraw::draw() const { GXCallDisplayList((void*)m_displayList, m_dlSize); }

/*
 * --INFO--
 * Address:	80088890
 * Size:	000048
 */
J3DShapeDraw::~J3DShapeDraw() { }
