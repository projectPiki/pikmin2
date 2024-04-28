#include "JSystem/J3DU/J3DUShadow.h"
#include "JSystem/JUtility/JUTTexture.h"

#if MATCHING
// Function contents here are all made up for the sake of matching.

/**
 * @note Address: N/A
 * @note Size: 0xFC
 */
inline J3DUMultiTexture::J3DUMultiTexture(u32 count, u8)
{
	// UNUSED FUNCTION
	mCount    = count;
	mTextures = new JUTTexture[mCount];
}

// /**
//  * @note Address: 0x800177D0
//  * @note Size: 0x1C
//  */
// JUTTexture::JUTTexture()
// {
// 	mFlags &= 2;
// 	_28 = 0;
// 	_20 = 0;
// }

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
J3DUMultiTexture::~J3DUMultiTexture()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void J3DUMultiTexture::initResTIMG(u8, _GXTexFmt)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
void J3DUMultiTexture::allocateTexture(u8, u16, u16, _GXTexFmt)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x2B8
 */
void J3DUMultiTexture::draw(u8, u32, u32, _GXTevColorArg, u32, u32) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x140
 */
void calcSphereIncludingTwoSpheres(Vec*, f32, Vec*, f32, Vec*, f32*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xFC
 */
void calcSphereIncludingTwoSpheres(Vec*, f32, Vec*, f32*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x214
 */
void calcSphereIncludingModel(const J3DModel*, Vec*, f32*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void J3DUShadowManager::getFormatCoefficient(_GXTexFmt) const
{
	// UNUSED FUNCTION
}

/**
 * __ct__17J3DUShadowManagerFUl9_GXTexFmtUcb
 *
 * @note Address: N/A
 * @note Size: 0x21C
 */
J3DUShadowManager::J3DUShadowManager(u32 p1, _GXTexFmt p2, u8 p3, bool p4)
    : mMultiTexture(p1, p3)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
J3DUShadowManager::~J3DUShadowManager()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1D8
 */
void J3DUShadowManager::calc(const Vec&, J3DUShadowTextureSizeRatioCalcBase*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1E4
 */
void J3DUShadowManager::capture()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
ProjectionBackup::~ProjectionBackup()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
ScissorBackup::~ScissorBackup()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
ViewportBackup::~ViewportBackup()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void J3DUShadowTextureSizeRatioCalcDefault::operator()(const Vec&, J3DUShadowInfo*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x288
 */
void J3DUShadowCameraPolicyUsingSphere::operator()(J3DModel*, const Vec&, _GXProjectionType, J3DUShadowInfo*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
void J3DUShadowInfo::setViewportAndScissor(bool) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x13C
 */
void J3DUShadowInfo::gxConfig(const _GXColor&, _GXTevColorArg, _GXTevAlphaArg) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void J3DUShadowInfo::renderShape() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC4
 */
void J3DUShadowInfo::getTexMtx(MtxP) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xB8
 */
void J3DUShadowInfo::getTexMtxForGX(MtxP) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x834
 */
void J3DUIsShadowInViewFrustum(const J3DUShadowInfo&, MtxP, const J3DUClipper&, const Vec&, const JGeometry::TPartition3<f32>&)
{
	// UNUSED FUNCTION
}
#endif
