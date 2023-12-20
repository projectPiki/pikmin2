#include "JSystem/J3D/J3DShape.h"
#include "Dolphin/gx.h"

/**
 * @note Address: 0x8008884C
 * @note Size: 0x18
 */
J3DShapeDraw::J3DShapeDraw(const u8* dl, u32 size)
{
	mDisplayList = dl;
	mDlSize      = size;
}

/**
 * @note Address: 0x80088864
 * @note Size: 0x2C
 */
void J3DShapeDraw::draw() const { GXCallDisplayList((void*)mDisplayList, mDlSize); }

/**
 * @note Address: 0x80088890
 * @note Size: 0x48
 */
J3DShapeDraw::~J3DShapeDraw() { }
